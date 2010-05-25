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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00025776 };

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
0x2309,	// (0x00027a7f) Screen

0x2313,	// (0x00027a89) application_window

0x2327,	// (0x00027a9d) area_bottom_pane_ParamLimits

0x2327,	// (0x00027a9d) area_bottom_pane

0x0d27,	// (0x0002649d) area_top_pane_ParamLimits

0x0d27,	// (0x0002649d) area_top_pane

0xb26a,	// (0x000309e0) call_video_uplink_pane_ParamLimits

0xb26a,	// (0x000309e0) call_video_uplink_pane

0x0da1,	// (0x00026517) main_pane_ParamLimits

0x0da1,	// (0x00026517) main_pane

0xbf23,	// (0x00031699) context_pane

0x6a95,	// (0x0002c20b) navi_pane

0x6abd,	// (0x0002c233) popup_cale_events_window_ParamLimits

0x6abd,	// (0x0002c233) popup_cale_events_window

0xbf36,	// (0x000316ac) popup_mup_playback_window

0x6ad4,	// (0x0002c24a) signal_pane

0x2cd7,	// (0x0002844d) main_browser_pane

0x33a7,	// (0x00028b1d) main_burst_pane

0x1259,	// (0x000269cf) main_calc_pane

0xbec1,	// (0x00031637) main_cale_day_pane

0x126d,	// (0x000269e3) main_cale_month_pane

0xbec1,	// (0x00031637) main_cale_week_pane

0x33a7,	// (0x00028b1d) main_call_pane

0x27c9,	// (0x00027f3f) main_call_poc_pane

0x33a7,	// (0x00028b1d) main_camera_pane

0x33a7,	// (0x00028b1d) main_chi_dic_pane

0x4fb5,	// (0x0002a72b) main_clock_pane

0x27c9,	// (0x00027f3f) main_fmradio_pane

0x33a7,	// (0x00028b1d) main_graph_messa_pane

0x27c9,	// (0x00027f3f) main_help_pane

0x2cd7,	// (0x0002844d) main_im_pane

0x2a24,	// (0x0002819a) main_image_pane_ParamLimits

0x2a24,	// (0x0002819a) main_image_pane

0x27c9,	// (0x00027f3f) main_location2_pane

0x33a7,	// (0x00028b1d) main_location_pane

0x2a24,	// (0x0002819a) main_messa_pane

0x27c9,	// (0x00027f3f) main_mp2_pane

0x33a7,	// (0x00028b1d) main_mp_pane

0x27c9,	// (0x00027f3f) main_msg_pane

0x27c9,	// (0x00027f3f) main_mup_eq_pane

0x27c9,	// (0x00027f3f) main_mup_pane

0x2cd7,	// (0x0002844d) main_notes_pane

0x27c9,	// (0x00027f3f) main_pec_pane

0x27c9,	// (0x00027f3f) main_phob_pane

0x27c9,	// (0x00027f3f) main_pinb_pane

0x27c9,	// (0x00027f3f) main_postcard_pane

0x27c9,	// (0x00027f3f) main_qdial_pane

0x33a7,	// (0x00028b1d) main_skin_pane

0x27c9,	// (0x00027f3f) main_smil2_pane

0x33a7,	// (0x00028b1d) main_smil_pane

0x33a7,	// (0x00028b1d) main_video_pane

0x33a7,	// (0x00028b1d) main_video_tele_pane

0x2a24,	// (0x0002819a) main_viewer_pane_ParamLimits

0x2a24,	// (0x0002819a) main_viewer_pane

0x33a7,	// (0x00028b1d) main_vorec_pane

0x12bb,	// (0x00026a31) popup_blid_sat_info_window_ParamLimits

0x12bb,	// (0x00026a31) popup_blid_sat_info_window

0x1319,	// (0x00026a8f) popup_dyc_status_message_window_ParamLimits

0x1319,	// (0x00026a8f) popup_dyc_status_message_window

0x132f,	// (0x00026aa5) popup_grid_large_graphic_window_ParamLimits

0x132f,	// (0x00026aa5) popup_grid_large_graphic_window

0x13c9,	// (0x00026b3f) popup_loc_request_window_ParamLimits

0x13c9,	// (0x00026b3f) popup_loc_request_window

0x14ad,	// (0x00026c23) popup_wml_address_window_ParamLimits

0x14ad,	// (0x00026c23) popup_wml_address_window

0x6923,	// (0x0002c099) call_muted_g1

0x60f9,	// (0x0002b86f) popup_call_audio_conf_window_ParamLimits

0x60f9,	// (0x0002b86f) popup_call_audio_conf_window

0x6933,	// (0x0002c0a9) popup_call_audio_first_window_ParamLimits

0x6933,	// (0x0002c0a9) popup_call_audio_first_window

0x6991,	// (0x0002c107) popup_call_audio_in_window_ParamLimits

0x6991,	// (0x0002c107) popup_call_audio_in_window

0x69bd,	// (0x0002c133) popup_call_audio_out_window_ParamLimits

0x69bd,	// (0x0002c133) popup_call_audio_out_window

0x69eb,	// (0x0002c161) popup_call_audio_second_window_ParamLimits

0x69eb,	// (0x0002c161) popup_call_audio_second_window

0x6a31,	// (0x0002c1a7) popup_call_audio_wait_window_ParamLimits

0x6a31,	// (0x0002c1a7) popup_call_audio_wait_window

0x6a64,	// (0x0002c1da) popup_number_entry_window_ParamLimits

0x6a64,	// (0x0002c1da) popup_number_entry_window

0x2360,	// (0x00027ad6) bg_popup_call_pane_cp05_ParamLimits

0x2360,	// (0x00027ad6) bg_popup_call_pane_cp05

0x2380,	// (0x00027af6) popup_number_entry_window_t1

0x2393,	// (0x00027b09) popup_number_entry_window_t2

0x23a5,	// (0x00027b1b) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00034840) popup_number_entry_window_t

0x23eb,	// (0x00027b61) text_title_cp2

0x23fe,	// (0x00027b74) bg_popup_call_pane_cp_ParamLimits

0x23fe,	// (0x00027b74) bg_popup_call_pane_cp

0x240c,	// (0x00027b82) call_thumbnail_pane

0x2414,	// (0x00027b8a) popup_call_audio_in_window_g1_ParamLimits

0x2414,	// (0x00027b8a) popup_call_audio_in_window_g1

0x2420,	// (0x00027b96) popup_call_audio_in_window_g2_ParamLimits

0x2420,	// (0x00027b96) popup_call_audio_in_window_g2

0x242c,	// (0x00027ba2) popup_call_audio_in_window_g3_ParamLimits

0x242c,	// (0x00027ba2) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00034849) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00034849) popup_call_audio_in_window_g

0x2438,	// (0x00027bae) popup_call_audio_in_window_t1_ParamLimits

0x2438,	// (0x00027bae) popup_call_audio_in_window_t1

0x2453,	// (0x00027bc9) popup_call_audio_in_window_t2_ParamLimits

0x2453,	// (0x00027bc9) popup_call_audio_in_window_t2

0x246e,	// (0x00027be4) popup_call_audio_in_window_t3_ParamLimits

0x246e,	// (0x00027be4) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00034850) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00034850) popup_call_audio_in_window_t

0x23fe,	// (0x00027b74) bg_popup_call_pane_cp01_ParamLimits

0x23fe,	// (0x00027b74) bg_popup_call_pane_cp01

0x240c,	// (0x00027b82) call_thumbnail_pane_cp02

0x2481,	// (0x00027bf7) call_type_pane_cp022

0x2489,	// (0x00027bff) popup_call_audio_out_window_g1_ParamLimits

0x2489,	// (0x00027bff) popup_call_audio_out_window_g1

0x249b,	// (0x00027c11) popup_call_audio_out_window_g2_ParamLimits

0x249b,	// (0x00027c11) popup_call_audio_out_window_g2

0x24a7,	// (0x00027c1d) popup_call_audio_out_window_g3_ParamLimits

0x24a7,	// (0x00027c1d) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00034857) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00034857) popup_call_audio_out_window_g

0x24b9,	// (0x00027c2f) popup_call_audio_out_window_t1_ParamLimits

0x24b9,	// (0x00027c2f) popup_call_audio_out_window_t1

0x24d1,	// (0x00027c47) popup_call_audio_out_window_t2_ParamLimits

0x24d1,	// (0x00027c47) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003485e) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003485e) popup_call_audio_out_window_t

0x24e6,	// (0x00027c5c) bg_popup_call_pane_ParamLimits

0x24e6,	// (0x00027c5c) bg_popup_call_pane

0x256a,	// (0x00027ce0) call_thumbnail_pane_cp_ParamLimits

0x256a,	// (0x00027ce0) call_thumbnail_pane_cp

0x258e,	// (0x00027d04) call_type_pane_cp01_ParamLimits

0x258e,	// (0x00027d04) call_type_pane_cp01

0x25d2,	// (0x00027d48) popup_call_audio_first_window_g1_ParamLimits

0x25d2,	// (0x00027d48) popup_call_audio_first_window_g1

0x261e,	// (0x00027d94) popup_call_audio_first_window_g2_ParamLimits

0x261e,	// (0x00027d94) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00034863) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00034863) popup_call_audio_first_window_g

0x2662,	// (0x00027dd8) popup_call_audio_first_window_t1_ParamLimits

0x2662,	// (0x00027dd8) popup_call_audio_first_window_t1

0x270e,	// (0x00027e84) popup_call_audio_first_window_t4_ParamLimits

0x270e,	// (0x00027e84) popup_call_audio_first_window_t4

0x279a,	// (0x00027f10) popup_call_audio_first_window_t5_ParamLimits

0x279a,	// (0x00027f10) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00034868) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00034868) popup_call_audio_first_window_t

0x27c9,	// (0x00027f3f) bg_popup_call_pane_cp02

0x27d3,	// (0x00027f49) call_type_pane_cp023

0x27db,	// (0x00027f51) popup_call_audio_wait_window_g1

0x27e3,	// (0x00027f59) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003486f) popup_call_audio_wait_window_g

0x27eb,	// (0x00027f61) popup_call_audio_wait_window_t3

0x27f9,	// (0x00027f6f) bg_popup_call_pane_cp03_ParamLimits

0x27f9,	// (0x00027f6f) bg_popup_call_pane_cp03

0x2859,	// (0x00027fcf) call_thumbnail_pane_cp011_ParamLimits

0x2859,	// (0x00027fcf) call_thumbnail_pane_cp011

0x2865,	// (0x00027fdb) call_type_pane_cp034_ParamLimits

0x2865,	// (0x00027fdb) call_type_pane_cp034

0x28a1,	// (0x00028017) popup_call_audio_second_window_g1_ParamLimits

0x28a1,	// (0x00028017) popup_call_audio_second_window_g1

0x28dd,	// (0x00028053) popup_call_audio_second_window_g2_ParamLimits

0x28dd,	// (0x00028053) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00034874) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00034874) popup_call_audio_second_window_g

0x2919,	// (0x0002808f) popup_call_audio_second_window_t1_ParamLimits

0x2919,	// (0x0002808f) popup_call_audio_second_window_t1

0x299a,	// (0x00028110) popup_call_audio_second_window_t2_ParamLimits

0x299a,	// (0x00028110) popup_call_audio_second_window_t2

0x29d0,	// (0x00028146) popup_call_audio_second_window_t3_ParamLimits

0x29d0,	// (0x00028146) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00034879) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00034879) popup_call_audio_second_window_t

0x27c9,	// (0x00027f3f) bg_popup_call_pane_cp04

0x2a06,	// (0x0002817c) list_conf_pane

0x2a0e,	// (0x00028184) popup_call_audio_conf_window_t1

0x2a1c,	// (0x00028192) call_thumbnail_pane_g1

0x2a24,	// (0x0002819a) bg_pinb_pane_ParamLimits

0x2a24,	// (0x0002819a) bg_pinb_pane

0x2a32,	// (0x000281a8) find_pinb_pane

0x2a3b,	// (0x000281b1) listscroll_pinb_pane_ParamLimits

0x2a3b,	// (0x000281b1) listscroll_pinb_pane

0x2a4a,	// (0x000281c0) pinb_bg_pane_g1

0x2a54,	// (0x000281ca) pinb_bg_pane_g2

0x2a5e,	// (0x000281d4) pinb_bg_pane_g3

0x2a68,	// (0x000281de) pinb_bg_pane_g4

0x2a72,	// (0x000281e8) pinb_bg_pane_g5

0x2a7c,	// (0x000281f2) pinb_bg_pane_g6

0x2a85,	// (0x000281fb) pinb_bg_pane_g7

0x2a8e,	// (0x00028204) pinb_bg_pane_g8

0x2a99,	// (0x0002820f) pinb_bg_pane_g9

0x2aa3,	// (0x00028219) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00034880) pinb_bg_pane_g

0x2abe,	// (0x00028234) grid_pinb_pane

0x2ac7,	// (0x0002823d) list_pinb_pane

0x2ad0,	// (0x00028246) scroll_pane_cp01_ParamLimits

0x2ad0,	// (0x00028246) scroll_pane_cp01

0x2ae2,	// (0x00028258) find_pinb_pane_g1_ParamLimits

0x2ae2,	// (0x00028258) find_pinb_pane_g1

0x2afa,	// (0x00028270) find_pinb_pane_t1

0x2b0c,	// (0x00028282) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003489a) find_pinb_pane_t

0x2b21,	// (0x00028297) input_focus_pane_cp01_ParamLimits

0x2b21,	// (0x00028297) input_focus_pane_cp01

0x2b2d,	// (0x000282a3) cell_pinb_pane_ParamLimits

0x2b2d,	// (0x000282a3) cell_pinb_pane

0x2b45,	// (0x000282bb) cell_pinb_pane_g1_ParamLimits

0x2b45,	// (0x000282bb) cell_pinb_pane_g1

0x2b59,	// (0x000282cf) cell_pinb_pane_g2_ParamLimits

0x2b59,	// (0x000282cf) cell_pinb_pane_g2

0x2b65,	// (0x000282db) cell_pinb_pane_g3_ParamLimits

0x2b65,	// (0x000282db) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003489f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003489f) cell_pinb_pane_g

0x27c9,	// (0x00027f3f) grid_highlight_pane_cp01

0x2b71,	// (0x000282e7) list_pinb_item_pane_ParamLimits

0x2b71,	// (0x000282e7) list_pinb_item_pane

0x27c9,	// (0x00027f3f) list_highlight_pane_cp02

0x2b82,	// (0x000282f8) list_pinb_item_pane_g1_ParamLimits

0x2b82,	// (0x000282f8) list_pinb_item_pane_g1

0x2b8f,	// (0x00028305) list_pinb_item_pane_g2_ParamLimits

0x2b8f,	// (0x00028305) list_pinb_item_pane_g2

0x2b9b,	// (0x00028311) list_pinb_item_pane_g3_ParamLimits

0x2b9b,	// (0x00028311) list_pinb_item_pane_g3

0x2bac,	// (0x00028322) list_pinb_item_pane_g4_ParamLimits

0x2bac,	// (0x00028322) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000348a6) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000348a6) list_pinb_item_pane_g

0x2bb8,	// (0x0002832e) list_pinb_item_pane_t1_ParamLimits

0x2bb8,	// (0x0002832e) list_pinb_item_pane_t1

0x0f2d,	// (0x000266a3) calc_display_pane

0x0f4f,	// (0x000266c5) calc_paper_pane

0x0f6c,	// (0x000266e2) grid_calc_pane

0x27c9,	// (0x00027f3f) bg_list_pane_cp01

0x2bcf,	// (0x00028345) clock_g1

0x2bd7,	// (0x0002834d) clock_g2

0x0001,

0xf139,	// (0x000348af) clock_g

0x2bdf,	// (0x00028355) clock_t1_ParamLimits

0x2bdf,	// (0x00028355) clock_t1

0x2bf4,	// (0x0002836a) clock_t2_ParamLimits

0x2bf4,	// (0x0002836a) clock_t2

0x2c06,	// (0x0002837c) clock_t3_ParamLimits

0x2c06,	// (0x0002837c) clock_t3

0x2c18,	// (0x0002838e) clock_t4_ParamLimits

0x2c18,	// (0x0002838e) clock_t4

0x2c2a,	// (0x000283a0) clock_t5_ParamLimits

0x2c2a,	// (0x000283a0) clock_t5

0x2c3f,	// (0x000283b5) clock_t6_ParamLimits

0x2c3f,	// (0x000283b5) clock_t6

0x2c51,	// (0x000283c7) clock_t7_ParamLimits

0x2c51,	// (0x000283c7) clock_t7

0x2c63,	// (0x000283d9) clock_t8_ParamLimits

0x2c63,	// (0x000283d9) clock_t8

0x2c75,	// (0x000283eb) clock_t9_ParamLimits

0x2c75,	// (0x000283eb) clock_t9

0x0008,

0xf13e,	// (0x000348b4) clock_t_ParamLimits

0xf13e,	// (0x000348b4) clock_t

0x2c87,	// (0x000283fd) popup_clock_analogue_window_cp02

0x2c87,	// (0x000283fd) popup_clock_digital_window_cp01

0x2c8f,	// (0x00028405) listscroll_help_pane

0x27c9,	// (0x00027f3f) phob_pre_status_pane

0x2c99,	// (0x0002840f) grid_qdial_pane

0x2a24,	// (0x0002819a) listscroll_mce_pane

0x2a24,	// (0x0002819a) bg_notes_pane

0x2ca3,	// (0x00028419) list_notes_pane

0x2cb1,	// (0x00028427) scroll_pane_cp06

0x2cc3,	// (0x00028439) bg_calc_paper_pane

0xb2a6,	// (0x00030a1c) list_calc_pane

0x2cd7,	// (0x0002844d) bg_calc_display_pane

0x0f8e,	// (0x00026704) calc_display_pane_t1

0x0fa0,	// (0x00026716) calc_display_pane_t2

0xb2c0,	// (0x00030a36) calc_display_pane_t3

0x0002,

0xf151,	// (0x000348c7) calc_display_pane_t

0x0fb2,	// (0x00026728) cell_calc_pane_ParamLimits

0x0fb2,	// (0x00026728) cell_calc_pane

0x2ce3,	// (0x00028459) bg_calc_paper_pane_g1

0x2cef,	// (0x00028465) bg_calc_paper_pane_g2

0x2cfb,	// (0x00028471) bg_calc_paper_pane_g3

0x2d07,	// (0x0002847d) bg_calc_paper_pane_g4

0x2d13,	// (0x00028489) bg_calc_paper_pane_g5

0x2d1f,	// (0x00028495) bg_calc_paper_pane_g6

0x2d2e,	// (0x000284a4) bg_calc_paper_pane_g7

0x2d3d,	// (0x000284b3) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000348ce) bg_calc_paper_pane_g

0x2d4c,	// (0x000284c2) calc_bg_paper_pane_g9

0x2d5b,	// (0x000284d1) list_calc_item_pane_ParamLimits

0x2d5b,	// (0x000284d1) list_calc_item_pane

0x2d6e,	// (0x000284e4) list_calc_item_pane_g1

0xb2d2,	// (0x00030a48) list_calc_item_pane_t1_ParamLimits

0xb2d2,	// (0x00030a48) list_calc_item_pane_t1

0x0fe5,	// (0x0002675b) list_calc_item_pane_t2_ParamLimits

0x0fe5,	// (0x0002675b) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000348df) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000348df) list_calc_item_pane_t

0x2d7b,	// (0x000284f1) cell_calc_pane_g1

0x2d85,	// (0x000284fb) grid_highlight_pane_cp02

0x2da7,	// (0x0002851d) bg_calc_display_pane_g1

0xb2e4,	// (0x00030a5a) bg_calc_display_pane_g2

0x2db0,	// (0x00028526) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000348e9) bg_calc_display_pane_g

0x1013,	// (0x00026789) cell_qdial_pane_ParamLimits

0x1013,	// (0x00026789) cell_qdial_pane

0x2db9,	// (0x0002852f) cell_qdial_pane_g1_ParamLimits

0x2db9,	// (0x0002852f) cell_qdial_pane_g1

0x2dcf,	// (0x00028545) cell_qdial_pane_g2_ParamLimits

0x2dcf,	// (0x00028545) cell_qdial_pane_g2

0x2de0,	// (0x00028556) cell_qdial_pane_g3_ParamLimits

0x2de0,	// (0x00028556) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000348f0) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000348f0) cell_qdial_pane_g

0x2e02,	// (0x00028578) cell_qdial_pane_t1_ParamLimits

0x2e02,	// (0x00028578) cell_qdial_pane_t1

0x2e1a,	// (0x00028590) cell_qdial_pane_t2_ParamLimits

0x2e1a,	// (0x00028590) cell_qdial_pane_t2

0x2e2d,	// (0x000285a3) cell_qdial_pane_t3_ParamLimits

0x2e2d,	// (0x000285a3) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000348f9) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000348f9) cell_qdial_pane_t

0x27c9,	// (0x00027f3f) grid_highlight_pane_cp04

0x2e40,	// (0x000285b6) thumbnail_qdial_pane_ParamLimits

0x2e40,	// (0x000285b6) thumbnail_qdial_pane

0x2e9c,	// (0x00028612) list_help_pane

0x2ea5,	// (0x0002861b) scroll_pane_cp02

0x2eae,	// (0x00028624) help_list_pane_t1_ParamLimits

0x2eae,	// (0x00028624) help_list_pane_t1

0xb2ee,	// (0x00030a64) bg_notes_pane_g2

0xb2f6,	// (0x00030a6c) bg_notes_pane_g3

0xb2fe,	// (0x00030a74) notes_bg_pane_g1

0xb306,	// (0x00030a7c) notes_bg_pane_g4

0xb30e,	// (0x00030a84) notes_bg_pane_g5

0xb316,	// (0x00030a8c) notes_bg_pane_g6

0xb31e,	// (0x00030a94) notes_bg_pane_g7

0xb326,	// (0x00030a9c) notes_bg_pane_g8

0xb32e,	// (0x00030aa4) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00034917) notes_bg_pane_g

0x2ec9,	// (0x0002863f) list_notes_text_pane_ParamLimits

0x2ec9,	// (0x0002863f) list_notes_text_pane

0x2edc,	// (0x00028652) list_notes_text_pane_g1

0x2ee5,	// (0x0002865b) list_notes_text_pane_t1

0x2f04,	// (0x0002867a) listscroll_cale_week_pane

0x2f37,	// (0x000286ad) bg_cale_heading_pane

0x2f4f,	// (0x000286c5) bg_cale_pane_cp01

0x2f6c,	// (0x000286e2) cale_week_corner_pane

0x2f8b,	// (0x00028701) cale_week_day_heading_pane

0x2fa8,	// (0x0002871e) cale_week_scroll_pane_g1

0x2fbb,	// (0x00028731) cale_week_scroll_pane_g2

0x2fd3,	// (0x00028749) cale_week_scroll_pane_g3

0x2feb,	// (0x00028761) cale_week_scroll_pane_g4

0x3003,	// (0x00028779) cale_week_scroll_pane_g5

0x301b,	// (0x00028791) cale_week_scroll_pane_g6

0x3033,	// (0x000287a9) cale_week_scroll_pane_g7

0x304b,	// (0x000287c1) cale_week_scroll_pane_g8

0x3067,	// (0x000287dd) cale_week_scroll_pane_g9

0x307f,	// (0x000287f5) cale_week_scroll_pane_g10

0x3097,	// (0x0002880d) cale_week_scroll_pane_g11

0x30af,	// (0x00028825) cale_week_scroll_pane_g12

0x30c7,	// (0x0002883d) cale_week_scroll_pane_g13

0x30c7,	// (0x0002883d) cale_week_scroll_pane_g14

0x30c7,	// (0x0002883d) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00034926) cale_week_scroll_pane_g

0x30fb,	// (0x00028871) cale_week_time_pane

0x3117,	// (0x0002888d) grid_cale_week_pane

0x3143,	// (0x000288b9) scroll_pane_cp08

0x3160,	// (0x000288d6) cell_cale_week_pane_ParamLimits

0x3160,	// (0x000288d6) cell_cale_week_pane

0x31d6,	// (0x0002894c) cale_week_day_heading_pane_t1

0x31fb,	// (0x00028971) cale_week_day_heading_pane_t2

0x3225,	// (0x0002899b) cale_week_day_heading_pane_t3

0x324f,	// (0x000289c5) cale_week_day_heading_pane_t4

0x3279,	// (0x000289ef) cale_week_day_heading_pane_t5

0x32a3,	// (0x00028a19) cale_week_day_heading_pane_t6

0x32cd,	// (0x00028a43) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x00034947) cale_week_day_heading_pane_t

0x32f2,	// (0x00028a68) bg_cale_side_pane

0x1025,	// (0x0002679b) cale_week_time_pane_t1

0x105f,	// (0x000267d5) cale_week_time_pane_t2

0x1099,	// (0x0002680f) cale_week_time_pane_t3

0x10d3,	// (0x00026849) cale_week_time_pane_t4

0x110d,	// (0x00026883) cale_week_time_pane_t5

0x1147,	// (0x000268bd) cale_week_time_pane_t6

0x1181,	// (0x000268f7) cale_week_time_pane_t7

0x11bb,	// (0x00026931) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00034956) cale_week_time_pane_t

0x3300,	// (0x00028a76) cell_cale_week_pane_g2

0x331f,	// (0x00028a95) cell_cale_week_pane_g3_ParamLimits

0x331f,	// (0x00028a95) cell_cale_week_pane_g3

0x3337,	// (0x00028aad) grid_highlight_pane_cp07

0x333f,	// (0x00028ab5) listscroll_gms_pane

0x3349,	// (0x00028abf) grid_gms_pane

0x3352,	// (0x00028ac8) listscroll_gms_pane_g1

0x335a,	// (0x00028ad0) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00034967) listscroll_gms_pane_g

0x3362,	// (0x00028ad8) scroll_pane_cp010

0x336d,	// (0x00028ae3) cell_gms_pane_ParamLimits

0x336d,	// (0x00028ae3) cell_gms_pane

0x337e,	// (0x00028af4) cell_gms_pane_g1

0x3386,	// (0x00028afc) cell_gms_pane_g2

0x2edc,	// (0x00028652) cell_gms_pane_g3

0x338e,	// (0x00028b04) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003496c) cell_gms_pane_g

0x3397,	// (0x00028b0d) grid_highlight_pane_cp09

0x68d1,	// (0x0002c047) phob_pre_status_pane_g1

0x68d9,	// (0x0002c04f) phob_pre_status_pane_g2

0x68e1,	// (0x0002c057) phob_pre_status_pane_g3

0x68e9,	// (0x0002c05f) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x00034d6a) phob_pre_status_pane_g

0x68f9,	// (0x0002c06f) phob_pre_status_pane_t1

0x6907,	// (0x0002c07d) phob_pre_status_pane_t2

0x6915,	// (0x0002c08b) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x00034d75) phob_pre_status_pane_t

0x33a7,	// (0x00028b1d) bg_list_pane_cp05

0x33af,	// (0x00028b25) grid_vorec_pane

0x33b7,	// (0x00028b2d) vorec_t1

0x33c5,	// (0x00028b3b) vorec_t2

0x33d3,	// (0x00028b49) vorec_t3

0x33e1,	// (0x00028b57) vorec_t4

0x22e5,	// (0x00027a5b) vorec_t5

0x22f3,	// (0x00027a69) vorec_t6

0x0004,

0xf1ff,	// (0x00034975) vorec_t

0x2301,	// (0x00027a77) wait_bar_pane_cp01

0x33fd,	// (0x00028b73) cell_vorec_pane_ParamLimits

0x33fd,	// (0x00028b73) cell_vorec_pane

0xb336,	// (0x00030aac) cell_vorec_pane_g1

0x27c9,	// (0x00027f3f) grid_highlight_pane_cp05

0x3422,	// (0x00028b98) cams_zoom_pane

0x3431,	// (0x00028ba7) image_vga_pane

0x3447,	// (0x00028bbd) main_camera_pane_g1

0x3457,	// (0x00028bcd) main_camera_pane_g2

0x3467,	// (0x00028bdd) main_camera_pane_g3

0x3477,	// (0x00028bed) main_camera_pane_g4

0x3487,	// (0x00028bfd) main_camera_pane_g5

0x3497,	// (0x00028c0d) main_camera_pane_g6

0x34a7,	// (0x00028c1d) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00034980) main_camera_pane_g

0x34c3,	// (0x00028c39) main_camera_pane_t1

0x34d9,	// (0x00028c4f) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00034991) main_camera_pane_t

0x350b,	// (0x00028c81) cams_zoom_pane_cp_ParamLimits

0x350b,	// (0x00028c81) cams_zoom_pane_cp

0x3533,	// (0x00028ca9) image_cif_pane_ParamLimits

0x3533,	// (0x00028ca9) image_cif_pane

0x3562,	// (0x00028cd8) image_subqcif_pane

0x356a,	// (0x00028ce0) main_video_pane_g1_ParamLimits

0x356a,	// (0x00028ce0) main_video_pane_g1

0x358e,	// (0x00028d04) main_video_pane_g2_ParamLimits

0x358e,	// (0x00028d04) main_video_pane_g2

0x35c2,	// (0x00028d38) main_video_pane_g3_ParamLimits

0x35c2,	// (0x00028d38) main_video_pane_g3

0x35f0,	// (0x00028d66) main_video_pane_g4_ParamLimits

0x35f0,	// (0x00028d66) main_video_pane_g4

0x361e,	// (0x00028d94) main_video_pane_g5_ParamLimits

0x361e,	// (0x00028d94) main_video_pane_g5

0x3636,	// (0x00028dac) main_video_pane_g6_ParamLimits

0x3636,	// (0x00028dac) main_video_pane_g6

0x0006,

0xf220,	// (0x00034996) main_video_pane_g_ParamLimits

0xf220,	// (0x00034996) main_video_pane_g

0x365f,	// (0x00028dd5) main_video_pane_t1_ParamLimits

0x365f,	// (0x00028dd5) main_video_pane_t1

0x36a8,	// (0x00028e1e) cams_zoom_pane_g1

0x36b1,	// (0x00028e27) cams_zoom_pane_g2

0x36ba,	// (0x00028e30) cams_zoom_pane_g3

0x36c3,	// (0x00028e39) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000349a5) cams_zoom_pane_g

0x36e0,	// (0x00028e56) grid_cams_pane

0x36f5,	// (0x00028e6b) linegrid_cams_pane

0x3706,	// (0x00028e7c) cell_cams_pane_ParamLimits

0x3706,	// (0x00028e7c) cell_cams_pane

0x3724,	// (0x00028e9a) cams_burst_image_pane

0x372c,	// (0x00028ea2) cell_cams_pane_g1

0x27c9,	// (0x00027f3f) grid_highlight_pane_cp03

0x2d7b,	// (0x000284f1) mp_bg_pane_g1

0x27c9,	// (0x00027f3f) bg_list_pane_cp03

0xbde6,	// (0x0003155c) bg_mp_pane

0xbdee,	// (0x00031564) grid_mp_pane

0xbdf6,	// (0x0003156c) media_player_g1

0xbdfe,	// (0x00031574) media_player_t1

0xbe0c,	// (0x00031582) media_player_t2

0xbe1a,	// (0x00031590) media_player_t3

0xbe28,	// (0x0003159e) media_player_t4

0xbe36,	// (0x000315ac) media_player_t5

0xbe44,	// (0x000315ba) media_player_t6

0xbe52,	// (0x000315c8) media_player_t7

0x0006,

0xf5de,	// (0x00034d54) media_player_t

0xbe60,	// (0x000315d6) wait_bar_pane_cp02

0xf5c3,	// (0x00034d39) main_usb_pane_t

0x68c8,	// (0x0002c03e) cell_mp_pane

0x2d7b,	// (0x000284f1) cell_mp_pane_g1

0x27c9,	// (0x00027f3f) grid_highlight_pane_cp06

0x3848,	// (0x00028fbe) grid_skin_colour_pane

0x3850,	// (0x00028fc6) list_highlight_pane_cp03

0x3858,	// (0x00028fce) skin_g1

0x3860,	// (0x00028fd6) skin_t1

0x386f,	// (0x00028fe5) skin_t2

0x0001,

0xf264,	// (0x000349da) skin_t

0x387d,	// (0x00028ff3) cell_skin_colour_pane_ParamLimits

0x387d,	// (0x00028ff3) cell_skin_colour_pane

0x3897,	// (0x0002900d) cell_skin_colour_pane_g1

0x38f8,	// (0x0002906e) call_video_g1_ParamLimits

0x38f8,	// (0x0002906e) call_video_g1

0x390e,	// (0x00029084) call_video_g2_ParamLimits

0x390e,	// (0x00029084) call_video_g2

0x0001,

0xf269,	// (0x000349df) call_video_g_ParamLimits

0xf269,	// (0x000349df) call_video_g

0x3953,	// (0x000290c9) call_video_uplink_pane_cp1_ParamLimits

0x3953,	// (0x000290c9) call_video_uplink_pane_cp1

0x39b8,	// (0x0002912e) call_video_uplink_pane_cp2

0x39f0,	// (0x00029166) video_down_crop_pane_ParamLimits

0x39f0,	// (0x00029166) video_down_crop_pane

0x3ab3,	// (0x00029229) video_down_pane_ParamLimits

0x3ab3,	// (0x00029229) video_down_pane

0x3b5d,	// (0x000292d3) video_down_subqcif_pane_ParamLimits

0x3b5d,	// (0x000292d3) video_down_subqcif_pane

0x3b75,	// (0x000292eb) video_down_subqcif_pane_cp_ParamLimits

0x3b75,	// (0x000292eb) video_down_subqcif_pane_cp

0x3bac,	// (0x00029322) im_reading_pane_ParamLimits

0x3bac,	// (0x00029322) im_reading_pane

0x3bbe,	// (0x00029334) im_writing_pane_ParamLimits

0x3bbe,	// (0x00029334) im_writing_pane

0x3bdc,	// (0x00029352) im_reading_pane_t1

0x3c12,	// (0x00029388) list_im_pane

0x3c23,	// (0x00029399) scroll_pane_cp07

0x3c3c,	// (0x000293b2) im_writing_pane_t1_ParamLimits

0x3c3c,	// (0x000293b2) im_writing_pane_t1

0x3c51,	// (0x000293c7) im_writing_pane_t2_ParamLimits

0x3c51,	// (0x000293c7) im_writing_pane_t2

0x0001,

0xf273,	// (0x000349e9) im_writing_pane_t_ParamLimits

0xf273,	// (0x000349e9) im_writing_pane_t

0x27c9,	// (0x00027f3f) input_focus_pane_cp04

0x27c9,	// (0x00027f3f) input_focus_pane_cp05

0x3c6e,	// (0x000293e4) list_im_single_pane_ParamLimits

0x3c6e,	// (0x000293e4) list_im_single_pane

0x3c81,	// (0x000293f7) list_single_im_pane_t1

0x688e,	// (0x0002c004) blid_accuracy_pane

0x6896,	// (0x0002c00c) blid_compass_pane

0x689e,	// (0x0002c014) main_location_t1

0x68ac,	// (0x0002c022) main_location_t2

0x68ba,	// (0x0002c030) main_location_t3

0x0002,

0xf5ed,	// (0x00034d63) main_location_t

0x27c9,	// (0x00027f3f) aid_levels_location

0x2d7b,	// (0x000284f1) blid_accuracy_pane_g1

0x2d7b,	// (0x000284f1) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x00034a4b) blid_accuracy_pane_g

0x3cbb,	// (0x00029431) wml_content_pane

0x3cf9,	// (0x0002946f) wml_button_pane_ParamLimits

0x3cf9,	// (0x0002946f) wml_button_pane

0x33fd,	// (0x00028b73) wml_list_single_large_pane_ParamLimits

0x33fd,	// (0x00028b73) wml_list_single_large_pane

0x3d0d,	// (0x00029483) wml_list_single_medium_pane_ParamLimits

0x3d0d,	// (0x00029483) wml_list_single_medium_pane

0x3d21,	// (0x00029497) wml_list_single_small_pane_ParamLimits

0x3d21,	// (0x00029497) wml_list_single_small_pane

0x3d37,	// (0x000294ad) wml_selection_box_pane_ParamLimits

0x3d37,	// (0x000294ad) wml_selection_box_pane

0x3d4a,	// (0x000294c0) wml_list_single_pane_t1

0x3d59,	// (0x000294cf) wml_list_single_medium_pane_t1

0x3d68,	// (0x000294de) wml_list_single_large_pane_t1

0x3d77,	// (0x000294ed) input_focus_pane_cp02_ParamLimits

0x3d77,	// (0x000294ed) input_focus_pane_cp02

0x3d8a,	// (0x00029500) wml_selection_box_pane_g1

0x3d93,	// (0x00029509) wml_selection_box_pane_t1_ParamLimits

0x3d93,	// (0x00029509) wml_selection_box_pane_t1

0x2a24,	// (0x0002819a) bg_wml_button_pane_ParamLimits

0x2a24,	// (0x0002819a) bg_wml_button_pane

0x3dab,	// (0x00029521) wml_button_pane_g1

0x3db3,	// (0x00029529) wml_button_pane_t1

0x3dab,	// (0x00029521) wml_button_bg_pane_g1

0x3dc3,	// (0x00029539) wml_button_bg_pane_g2

0x3dcb,	// (0x00029541) wml_button_bg_pane_g3

0x3dd3,	// (0x00029549) wml_button_bg_pane_g4

0x3ddb,	// (0x00029551) wml_button_bg_pane_g5

0x3de3,	// (0x00029559) wml_button_bg_pane_g6

0x3deb,	// (0x00029561) wml_button_bg_pane_g7

0x3df3,	// (0x00029569) wml_button_bg_pane_g8

0x3dfb,	// (0x00029571) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000349ee) wml_button_bg_pane_g

0x3e03,	// (0x00029579) bg_list_pane_cp02

0x3e0b,	// (0x00029581) mce_header_pane_ParamLimits

0x3e0b,	// (0x00029581) mce_header_pane

0x3e21,	// (0x00029597) mce_icon_pane

0x3e21,	// (0x00029597) mce_image_pane

0x3e2a,	// (0x000295a0) mce_text_pane_ParamLimits

0x3e2a,	// (0x000295a0) mce_text_pane

0x3e3d,	// (0x000295b3) scroll_pane_cp03

0x3cf1,	// (0x00029467) scroll_pane_cp04

0x3e47,	// (0x000295bd) scroll_pane_cp05_ParamLimits

0x3e47,	// (0x000295bd) scroll_pane_cp05

0x3e53,	// (0x000295c9) mce_header_field_pane_ParamLimits

0x3e53,	// (0x000295c9) mce_header_field_pane

0x3e6a,	// (0x000295e0) mce_header_field_pane_2_ParamLimits

0x3e6a,	// (0x000295e0) mce_header_field_pane_2

0x3e80,	// (0x000295f6) mce_header_field_pane_3

0x3e88,	// (0x000295fe) list_single_mce_message_pane_ParamLimits

0x3e88,	// (0x000295fe) list_single_mce_message_pane

0x3e9b,	// (0x00029611) list_single_mce_smart_pane_ParamLimits

0x3e9b,	// (0x00029611) list_single_mce_smart_pane

0x3eb9,	// (0x0002962f) input_focus_pane_cp03

0x3ec2,	// (0x00029638) list_header_data_pane

0x3eca,	// (0x00029640) mce_header_field_pane_t1

0x3ed8,	// (0x0002964e) list_single_mce_header_pane_ParamLimits

0x3ed8,	// (0x0002964e) list_single_mce_header_pane

0x3eec,	// (0x00029662) list_single_mce_header_pane_t1

0x3efb,	// (0x00029671) list_single_mce_message_pane_g1

0x3f03,	// (0x00029679) list_single_mce_message_pane_t1

0x3f37,	// (0x000296ad) bg_cale_heading_pane_cp01_ParamLimits

0x3f37,	// (0x000296ad) bg_cale_heading_pane_cp01

0x3f71,	// (0x000296e7) bg_cale_pane_cp02_ParamLimits

0x3f71,	// (0x000296e7) bg_cale_pane_cp02

0x3f9e,	// (0x00029714) cale_month_corner_pane

0x3fbd,	// (0x00029733) cale_month_day_heading_pane_ParamLimits

0x3fbd,	// (0x00029733) cale_month_day_heading_pane

0x4003,	// (0x00029779) cale_month_pane_g1_ParamLimits

0x4003,	// (0x00029779) cale_month_pane_g1

0x4032,	// (0x000297a8) cale_month_pane_g2_ParamLimits

0x4032,	// (0x000297a8) cale_month_pane_g2

0x405a,	// (0x000297d0) cale_month_pane_g3_ParamLimits

0x405a,	// (0x000297d0) cale_month_pane_g3

0x4096,	// (0x0002980c) cale_month_pane_g4_ParamLimits

0x4096,	// (0x0002980c) cale_month_pane_g4

0x40d2,	// (0x00029848) cale_month_pane_g5_ParamLimits

0x40d2,	// (0x00029848) cale_month_pane_g5

0x410e,	// (0x00029884) cale_month_pane_g6_ParamLimits

0x410e,	// (0x00029884) cale_month_pane_g6

0x414a,	// (0x000298c0) cale_month_pane_g7_ParamLimits

0x414a,	// (0x000298c0) cale_month_pane_g7

0x4186,	// (0x000298fc) cale_month_pane_g8_ParamLimits

0x4186,	// (0x000298fc) cale_month_pane_g8

0x41ca,	// (0x00029940) cale_month_pane_g9_ParamLimits

0x41ca,	// (0x00029940) cale_month_pane_g9

0x4210,	// (0x00029986) cale_month_pane_g10_ParamLimits

0x4210,	// (0x00029986) cale_month_pane_g10

0x4256,	// (0x000299cc) cale_month_pane_g11_ParamLimits

0x4256,	// (0x000299cc) cale_month_pane_g11

0x429c,	// (0x00029a12) cale_month_pane_g12_ParamLimits

0x429c,	// (0x00029a12) cale_month_pane_g12

0x42e2,	// (0x00029a58) cale_month_pane_g13_ParamLimits

0x42e2,	// (0x00029a58) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00034a01) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00034a01) cale_month_pane_g

0x433a,	// (0x00029ab0) cale_month_week_pane

0x4356,	// (0x00029acc) grid_cale_month_pane_ParamLimits

0x4356,	// (0x00029acc) grid_cale_month_pane

0x4393,	// (0x00029b09) cale_month_day_heading_pane_t1

0x4419,	// (0x00029b8f) cale_month_day_heading_pane_t2

0x4492,	// (0x00029c08) cale_month_day_heading_pane_t3

0x450b,	// (0x00029c81) cale_month_day_heading_pane_t4

0x4584,	// (0x00029cfa) cale_month_day_heading_pane_t5

0x45fd,	// (0x00029d73) cale_month_day_heading_pane_t6

0x4676,	// (0x00029dec) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x00034a1c) cale_month_day_heading_pane_t

0x32f2,	// (0x00028a68) bg_cale_side_pane_cp01

0x46f3,	// (0x00029e69) cale_month_week_pane_t1

0x470c,	// (0x00029e82) cale_month_week_pane_t2

0x4725,	// (0x00029e9b) cale_month_week_pane_t3

0x473e,	// (0x00029eb4) cale_month_week_pane_t4

0x4757,	// (0x00029ecd) cale_month_week_pane_t5

0x4770,	// (0x00029ee6) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x00034a2b) cale_month_week_pane_t

0x4789,	// (0x00029eff) cell_cale_month_pane_ParamLimits

0x4789,	// (0x00029eff) cell_cale_month_pane

0xb340,	// (0x00030ab6) cell_cale_month_pane_g1

0x11f5,	// (0x0002696b) cell_cale_month_pane_t1_ParamLimits

0x11f5,	// (0x0002696b) cell_cale_month_pane_t1

0x3337,	// (0x00028aad) grid_highlight_pane_cp08

0x2d7b,	// (0x000284f1) main_smil_g1

0x48a5,	// (0x0002a01b) smil_status_pane

0x48ae,	// (0x0002a024) smil_text_pane

0xbcc6,	// (0x0003143c) bg_popup_call3_rect_pane_g8

0xbcce,	// (0x00031444) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00034ce4) bg_popup_call3_rect_pane_g

0xbf9d,	// (0x00031713) smil_status_volume_pane_g1

0x48c0,	// (0x0002a036) smil_status_pane_t1

0xbfd0,	// (0x00031746) volume_smil_pane

0x48d7,	// (0x0002a04d) list_smil_text_pane

0x48e1,	// (0x0002a057) scroll_pane_cp011

0x48ec,	// (0x0002a062) smil_text_list_pane_t1_ParamLimits

0x48ec,	// (0x0002a062) smil_text_list_pane_t1

0xb34c,	// (0x00030ac2) aid_volume_smil_ParamLimits

0xb34c,	// (0x00030ac2) aid_volume_smil

0x2d7b,	// (0x000284f1) smil_volume_pane_g1

0x2d7b,	// (0x000284f1) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x00034a4b) smil_volume_pane_g

0x2f04,	// (0x0002867a) listscroll_cale_day_pane

0x4922,	// (0x0002a098) bg_cale_pane

0x493a,	// (0x0002a0b0) list_cale_pane

0x495d,	// (0x0002a0d3) scroll_pane_cp09

0x496e,	// (0x0002a0e4) cale_bg_pane_g1

0x4976,	// (0x0002a0ec) cale_bg_pane_g2

0x497e,	// (0x0002a0f4) cale_bg_pane_g3

0x4986,	// (0x0002a0fc) cale_bg_pane_g4

0x498e,	// (0x0002a104) cale_bg_pane_g5

0x4996,	// (0x0002a10c) cale_bg_pane_g6

0x499e,	// (0x0002a114) cale_bg_pane_g7

0x49a6,	// (0x0002a11c) cale_bg_pane_g8

0x49ae,	// (0x0002a124) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00034a50) cale_bg_pane_g

0x49be,	// (0x0002a134) list_cale_time_pane_ParamLimits

0x49be,	// (0x0002a134) list_cale_time_pane

0x49d1,	// (0x0002a147) list_cale_time_pane_g1_ParamLimits

0x49d1,	// (0x0002a147) list_cale_time_pane_g1

0x49dd,	// (0x0002a153) list_cale_time_pane_g2_ParamLimits

0x49dd,	// (0x0002a153) list_cale_time_pane_g2

0x49ea,	// (0x0002a160) list_cale_time_pane_g3_ParamLimits

0x49ea,	// (0x0002a160) list_cale_time_pane_g3

0x49f6,	// (0x0002a16c) list_cale_time_pane_g4_ParamLimits

0x49f6,	// (0x0002a16c) list_cale_time_pane_g4

0x4a02,	// (0x0002a178) list_cale_time_pane_g5_ParamLimits

0x4a02,	// (0x0002a178) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00034a63) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00034a63) list_cale_time_pane_g

0x4a1b,	// (0x0002a191) list_cale_time_pane_t1_ParamLimits

0x4a1b,	// (0x0002a191) list_cale_time_pane_t1

0x4a43,	// (0x0002a1b9) list_cale_time_pane_t2_ParamLimits

0x4a43,	// (0x0002a1b9) list_cale_time_pane_t2

0x51c5,	// (0x0002a93b) aid_blid_cardinal_pane

0x520f,	// (0x0002a985) compass_pane_t4

0x4a6b,	// (0x0002a1e1) list_cale_time_pane_t4_ParamLimits

0x4a6b,	// (0x0002a1e1) list_cale_time_pane_t4

0x521d,	// (0x0002a993) compass_pane_t5

0x522b,	// (0x0002a9a1) compass_pane_t6

0x5239,	// (0x0002a9af) compass_pane_t7

0x52cf,	// (0x0002aa45) navi_pane_cc_t1

0x54ec,	// (0x0002ac62) aid_phob_thumbnail_center_pane

0x5b46,	// (0x0002b2bc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00034a70) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00034a70) list_cale_time_pane_t

0x23fe,	// (0x00027b74) bg_popup_window_pane_cp02_ParamLimits

0x23fe,	// (0x00027b74) bg_popup_window_pane_cp02

0x4a93,	// (0x0002a209) heading_pane_cp01_ParamLimits

0x4a93,	// (0x0002a209) heading_pane_cp01

0x4a9f,	// (0x0002a215) loc_req_pane_ParamLimits

0x4a9f,	// (0x0002a215) loc_req_pane

0x4aaf,	// (0x0002a225) loc_type_pane_ParamLimits

0x4aaf,	// (0x0002a225) loc_type_pane

0x4ac1,	// (0x0002a237) loc_type_pane_t1_ParamLimits

0x4ac1,	// (0x0002a237) loc_type_pane_t1

0x4ad3,	// (0x0002a249) loc_type_pane_t2_ParamLimits

0x4ad3,	// (0x0002a249) loc_type_pane_t2

0x4ae5,	// (0x0002a25b) loc_type_pane_t3_ParamLimits

0x4ae5,	// (0x0002a25b) loc_type_pane_t3

0x0002,

0xf301,	// (0x00034a77) loc_type_pane_t_ParamLimits

0xf301,	// (0x00034a77) loc_type_pane_t

0x4af7,	// (0x0002a26d) list_loc_req_pane

0x4b01,	// (0x0002a277) scroll_pane_cp012

0x4b0a,	// (0x0002a280) list_single_loc_request_popup_menu_pane_ParamLimits

0x4b0a,	// (0x0002a280) list_single_loc_request_popup_menu_pane

0x4b17,	// (0x0002a28d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4b17,	// (0x0002a28d) list_single_loc_request_popup_menu_pane_g1

0x4b23,	// (0x0002a299) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4b23,	// (0x0002a299) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00034a7e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00034a7e) list_single_loc_request_popup_menu_pane_g

0x4b2f,	// (0x0002a2a5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4b2f,	// (0x0002a2a5) list_single_loc_request_popup_menu_pane_t1

0x2a24,	// (0x0002819a) bg_popup_window_pane_cp03_ParamLimits

0x2a24,	// (0x0002819a) bg_popup_window_pane_cp03

0x4b45,	// (0x0002a2bb) heading_loc_req_pane_ParamLimits

0x4b45,	// (0x0002a2bb) heading_loc_req_pane

0x4b51,	// (0x0002a2c7) popup_dyc_status_message_window_g1_ParamLimits

0x4b51,	// (0x0002a2c7) popup_dyc_status_message_window_g1

0x4b65,	// (0x0002a2db) popup_dyc_status_message_window_t1_ParamLimits

0x4b65,	// (0x0002a2db) popup_dyc_status_message_window_t1

0x4b7a,	// (0x0002a2f0) popup_dyc_status_message_window_t2_ParamLimits

0x4b7a,	// (0x0002a2f0) popup_dyc_status_message_window_t2

0x4b8f,	// (0x0002a305) popup_dyc_status_message_window_t3_ParamLimits

0x4b8f,	// (0x0002a305) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00034a83) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00034a83) popup_dyc_status_message_window_t

0x27c9,	// (0x00027f3f) bg_heading_pane_cp01

0x4bab,	// (0x0002a321) heading_loc_req_pane_g1

0x4bb3,	// (0x0002a329) heading_loc_req_pane_g2

0x4bbb,	// (0x0002a331) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00034a8a) heading_loc_req_pane_g

0x4bc3,	// (0x0002a339) heading_loc_req_pane_t1

0x4cb9,	// (0x0002a42f) bg_popup_sub_pane_cp01_ParamLimits

0x4cb9,	// (0x0002a42f) bg_popup_sub_pane_cp01

0x4cc7,	// (0x0002a43d) popup_cale_events_window_g1_ParamLimits

0x4cc7,	// (0x0002a43d) popup_cale_events_window_g1

0x4ce7,	// (0x0002a45d) popup_cale_events_window_g2_ParamLimits

0x4ce7,	// (0x0002a45d) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00034abe) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00034abe) popup_cale_events_window_g

0x4d07,	// (0x0002a47d) popup_cale_events_window_t1_ParamLimits

0x4d07,	// (0x0002a47d) popup_cale_events_window_t1

0x4d19,	// (0x0002a48f) popup_cale_events_window_t2_ParamLimits

0x4d19,	// (0x0002a48f) popup_cale_events_window_t2

0x4d57,	// (0x0002a4cd) popup_cale_events_window_t3_ParamLimits

0x4d57,	// (0x0002a4cd) popup_cale_events_window_t3

0x4d91,	// (0x0002a507) popup_cale_events_window_t4_ParamLimits

0x4d91,	// (0x0002a507) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00034ac3) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00034ac3) popup_cale_events_window_t

0x4dc7,	// (0x0002a53d) call_type_pane

0x4dd7,	// (0x0002a54d) popup_call_status_window_g1

0x4deb,	// (0x0002a561) popup_call_status_window_g2

0x4dff,	// (0x0002a575) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00034acc) popup_call_status_window_g

0x4e0e,	// (0x0002a584) call_type_pane_g1

0x4e17,	// (0x0002a58d) call_type_pane_g2

0x0001,

0xf35d,	// (0x00034ad3) call_type_pane_g

0x27c9,	// (0x00027f3f) bg_popup_sub_pane_cp02

0x4e20,	// (0x0002a596) listscroll_popup_wml_pane

0x4e28,	// (0x0002a59e) list_wml_pane

0x4e32,	// (0x0002a5a8) scroll_pane_cp013

0x4e3b,	// (0x0002a5b1) list_single_graphic_popup_wml_pane_ParamLimits

0x4e3b,	// (0x0002a5b1) list_single_graphic_popup_wml_pane

0x2d7b,	// (0x000284f1) list_single_graphic_popup_wml_pane_g1

0x4e4d,	// (0x0002a5c3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00034ad8) list_single_graphic_popup_wml_pane_g

0x4e55,	// (0x0002a5cb) list_single_graphic_popup_wml_pane_t1

0x4e6b,	// (0x0002a5e1) aid_call_pane

0x2a1c,	// (0x00028192) popup_clock_analogue_window_g1

0x2a1c,	// (0x00028192) popup_clock_analogue_window_g2

0xb37a,	// (0x00030af0) popup_clock_analogue_window_g3

0xb37a,	// (0x00030af0) popup_clock_analogue_window_g4

0x2d7b,	// (0x000284f1) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00034add) popup_clock_analogue_window_g

0xb382,	// (0x00030af8) popup_clock_analogue_window_t1

0xb390,	// (0x00030b06) clock_digital_number_pane_ParamLimits

0xb390,	// (0x00030b06) clock_digital_number_pane

0xb39c,	// (0x00030b12) clock_digital_number_pane_cp02_ParamLimits

0xb39c,	// (0x00030b12) clock_digital_number_pane_cp02

0xb3a8,	// (0x00030b1e) clock_digital_number_pane_cp03_ParamLimits

0xb3a8,	// (0x00030b1e) clock_digital_number_pane_cp03

0xb3b4,	// (0x00030b2a) clock_digital_number_pane_cp04_ParamLimits

0xb3b4,	// (0x00030b2a) clock_digital_number_pane_cp04

0xb3c0,	// (0x00030b36) clock_digital_separator_pane_ParamLimits

0xb3c0,	// (0x00030b36) clock_digital_separator_pane

0xb3cc,	// (0x00030b42) popup_clock_digital_window_t1

0x2d7b,	// (0x000284f1) clock_digital_number_pane_g1

0x2d7b,	// (0x000284f1) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x00034a4b) clock_digital_number_pane_g

0x2d7b,	// (0x000284f1) clock_digital_separator_pane_g1

0x2d7b,	// (0x000284f1) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x00034a4b) clock_digital_separator_pane_g

0x27c9,	// (0x00027f3f) bg_popup_window_pane_cp04

0x4e73,	// (0x0002a5e9) heading_pane_cp03

0x4e7b,	// (0x0002a5f1) listscroll_popup_gms_pane

0x4e83,	// (0x0002a5f9) grid_large_graphic_popup_pane

0x4e8d,	// (0x0002a603) listscroll_popup_gms_pane_g1

0x4e95,	// (0x0002a60b) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00034ae8) listscroll_popup_gms_pane_g

0x3cf1,	// (0x00029467) scroll_pane_cp014

0x4e9d,	// (0x0002a613) cell_large_graphic_popup_pane_ParamLimits

0x4e9d,	// (0x0002a613) cell_large_graphic_popup_pane

0x4eb3,	// (0x0002a629) cell_large_graphic_popup_pane_g1_ParamLimits

0x4eb3,	// (0x0002a629) cell_large_graphic_popup_pane_g1

0x4ebf,	// (0x0002a635) cell_large_graphic_popup_pane_g2_ParamLimits

0x4ebf,	// (0x0002a635) cell_large_graphic_popup_pane_g2

0x4ecb,	// (0x0002a641) cell_large_graphic_popup_pane_g3_ParamLimits

0x4ecb,	// (0x0002a641) cell_large_graphic_popup_pane_g3

0x4ed8,	// (0x0002a64e) cell_large_graphic_popup_pane_g4_ParamLimits

0x4ed8,	// (0x0002a64e) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x00034aed) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x00034aed) cell_large_graphic_popup_pane_g

0x4ee8,	// (0x0002a65e) grid_highlight_pane_cp010

0x2d7b,	// (0x000284f1) bg_popup_call_pane_g1

0x4ef2,	// (0x0002a668) list_single_graphic_popup_conf_pane_ParamLimits

0x4ef2,	// (0x0002a668) list_single_graphic_popup_conf_pane

0x4f05,	// (0x0002a67b) list_highlight_pane_cp01

0x4f0e,	// (0x0002a684) list_single_graphic_popup_conf_pane_g1

0x4f16,	// (0x0002a68c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00034af6) list_single_graphic_popup_conf_pane_g

0x4f1e,	// (0x0002a694) list_single_graphic_popup_conf_pane_t1

0x4f2c,	// (0x0002a6a2) linegrid_cams_pane_g1

0x4f35,	// (0x0002a6ab) linegrid_cams_pane_g2

0x2edc,	// (0x00028652) linegrid_cams_pane_g3

0x4f3e,	// (0x0002a6b4) linegrid_cams_pane_g4

0x4f47,	// (0x0002a6bd) linegrid_cams_pane_g5

0x4f50,	// (0x0002a6c6) linegrid_cams_pane_g6

0x338e,	// (0x00028b04) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00034afb) linegrid_cams_pane_g

0x4f59,	// (0x0002a6cf) popup_clock_analogue_window

0x4f59,	// (0x0002a6cf) popup_clock_digital_window

0x27c9,	// (0x00027f3f) popup_phob_thumbnail_window

0x2d7b,	// (0x000284f1) call_video_uplink_pane_g1

0x4f62,	// (0x0002a6d8) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x00034b0a) call_video_uplink_pane_g

0x3337,	// (0x00028aad) video_uplink_pane

0x4f6a,	// (0x0002a6e0) mce_image_pane_g1

0x4f74,	// (0x0002a6ea) mce_image_pane_g2

0x4f7c,	// (0x0002a6f2) mce_image_pane_g3

0x4f84,	// (0x0002a6fa) mce_image_pane_g4

0x4f8c,	// (0x0002a702) mce_image_pane_g5

0x0004,

0xf399,	// (0x00034b0f) mce_image_pane_g

0x4f94,	// (0x0002a70a) control_top_pane_stacon_cp01_ParamLimits

0x4f94,	// (0x0002a70a) control_top_pane_stacon_cp01

0x4fa4,	// (0x0002a71a) uni_indicator_pane_stacon_cp01_ParamLimits

0x4fa4,	// (0x0002a71a) uni_indicator_pane_stacon_cp01

0x4fb5,	// (0x0002a72b) bg_popup_sub_pane_cp03

0x4fbf,	// (0x0002a735) chi_dic_find_pane

0x4fc7,	// (0x0002a73d) listscroll_chi_dic_pane

0x4fd0,	// (0x0002a746) main_pane_chidic_g1

0x4fe3,	// (0x0002a759) chi_dic_find_pane_t1

0x4ff1,	// (0x0002a767) find_chidic_pane

0x4ffa,	// (0x0002a770) chi_dic_list_pane_ParamLimits

0x4ffa,	// (0x0002a770) chi_dic_list_pane

0x500b,	// (0x0002a781) scroll_pane_cp020

0x5013,	// (0x0002a789) find_chidic_pane_t1

0x27c9,	// (0x00027f3f) input_focus_pane_cp06

0x5022,	// (0x0002a798) list_chi_dic_pane_ParamLimits

0x5022,	// (0x0002a798) list_chi_dic_pane

0x5033,	// (0x0002a7a9) list_chi_dic_pane_t1_ParamLimits

0x5033,	// (0x0002a7a9) list_chi_dic_pane_t1

0x27c9,	// (0x00027f3f) list_highlight_pane_cp020

0x5046,	// (0x0002a7bc) bg_cale_heading_pane_g1

0x504e,	// (0x0002a7c4) bg_cale_heading_pane_g2

0x5056,	// (0x0002a7cc) bg_cale_heading_pane_g3

0x505e,	// (0x0002a7d4) bg_cale_heading_pane_g4

0x5066,	// (0x0002a7dc) bg_cale_heading_pane_g5

0x506e,	// (0x0002a7e4) bg_cale_heading_pane_g6

0x5076,	// (0x0002a7ec) bg_cale_heading_pane_g7

0x507e,	// (0x0002a7f4) bg_cale_heading_pane_g8

0x5086,	// (0x0002a7fc) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x00034b1a) bg_cale_heading_pane_g

0x5046,	// (0x0002a7bc) bg_cale_side_pane_g1

0x508e,	// (0x0002a804) bg_cale_side_pane_g2

0x5096,	// (0x0002a80c) bg_cale_side_pane_g3

0x509e,	// (0x0002a814) bg_cale_side_pane_g4

0x50a6,	// (0x0002a81c) bg_cale_side_pane_g5

0x50ae,	// (0x0002a824) bg_cale_side_pane_g6

0x50b6,	// (0x0002a82c) bg_cale_side_pane_g7

0x50be,	// (0x0002a834) bg_cale_side_pane_g8

0x50c6,	// (0x0002a83c) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x00034b2d) bg_cale_side_pane_g

0x50ce,	// (0x0002a844) popup_call_status_window_ParamLimits

0x50ce,	// (0x0002a844) popup_call_status_window

0x5115,	// (0x0002a88b) stacon_top_pane

0x511d,	// (0x0002a893) status_pane_ParamLimits

0x511d,	// (0x0002a893) status_pane

0x5132,	// (0x0002a8a8) status_small_pane

0x513a,	// (0x0002a8b0) control_pane

0x27c9,	// (0x00027f3f) stacon_bottom_pane

0x5142,	// (0x0002a8b8) list_single_mce_smart_pane_t1_ParamLimits

0x5142,	// (0x0002a8b8) list_single_mce_smart_pane_t1

0x5155,	// (0x0002a8cb) list_single_mce_smart_pane_t2_ParamLimits

0x5155,	// (0x0002a8cb) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00034b40) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00034b40) list_single_mce_smart_pane_t

0x5174,	// (0x0002a8ea) compass_pane

0x517d,	// (0x0002a8f3) main_location2_pane_t1

0x518f,	// (0x0002a905) main_location2_pane_t2

0x51a1,	// (0x0002a917) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00034b45) main_location2_pane_t

0x51e5,	// (0x0002a95b) compass_pane_g1_ParamLimits

0x51e5,	// (0x0002a95b) compass_pane_g1

0x51f1,	// (0x0002a967) compass_pane_t1

0x5200,	// (0x0002a976) compass_pane_t2

0x0005,

0xf3d8,	// (0x00034b4e) compass_pane_t

0x5247,	// (0x0002a9bd) text_secondary_cp61

0x52c6,	// (0x0002aa3c) navi_pane_cams_g5

0x5340,	// (0x0002aab6) navi_pane_im_t1

0x534e,	// (0x0002aac4) navi_pane_mp_g1_ParamLimits

0x534e,	// (0x0002aac4) navi_pane_mp_g1

0x5362,	// (0x0002aad8) navi_pane_mp_g2_ParamLimits

0x5362,	// (0x0002aad8) navi_pane_mp_g2

0x536e,	// (0x0002aae4) navi_pane_mp_g3_ParamLimits

0x536e,	// (0x0002aae4) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00034b62) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00034b62) navi_pane_mp_g

0x537a,	// (0x0002aaf0) navi_pane_mp_t1

0x5388,	// (0x0002aafe) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00034b69) navi_pane_mp_t

0x5435,	// (0x0002abab) navi_pane_vt_g1

0x537a,	// (0x0002aaf0) navi_pane_vt_t1

0x543d,	// (0x0002abb3) navi_slider_pane

0x33a7,	// (0x00028b1d) zooming_pane

0x544d,	// (0x0002abc3) navi_slider_pane_g1

0xb3e9,	// (0x00030b5f) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00034b70) navi_slider_pane_g

0x5471,	// (0x0002abe7) aid_levels_zoom

0x5479,	// (0x0002abef) zooming_pane_g1

0x5481,	// (0x0002abf7) zooming_pane_g2

0x5481,	// (0x0002abf7) zooming_pane_g3

0x0002,

0xf409,	// (0x00034b7f) zooming_pane_g

0x5489,	// (0x0002abff) level_10_zoom

0x5492,	// (0x0002ac08) level_11_zoom

0x549b,	// (0x0002ac11) level_1_zoom

0x54a4,	// (0x0002ac1a) level_2_zoom

0x54ad,	// (0x0002ac23) level_3_zoom

0x54b6,	// (0x0002ac2c) level_4_zoom

0x54bf,	// (0x0002ac35) level_5_zoom

0x54c8,	// (0x0002ac3e) level_6_zoom

0x54d1,	// (0x0002ac47) level_7_zoom

0x54da,	// (0x0002ac50) level_8_zoom

0x54e3,	// (0x0002ac59) level_9_zoom

0x54f4,	// (0x0002ac6a) popup_phob_thumbnail_window_g1

0x54fc,	// (0x0002ac72) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00034b86) popup_phob_thumbnail_window_g

0xbe68,	// (0x000315de) level_1_location

0xbe70,	// (0x000315e6) level_2_location

0xbe78,	// (0x000315ee) level_3_location

0xbe80,	// (0x000315f6) level_4_location

0x33a7,	// (0x00028b1d) level_5_location

0x5504,	// (0x0002ac7a) mce_icon_pane_g1

0x550c,	// (0x0002ac82) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00034b8b) mce_icon_pane_g

0x5514,	// (0x0002ac8a) main_mup_pane_g1_ParamLimits

0x5514,	// (0x0002ac8a) main_mup_pane_g1

0x552a,	// (0x0002aca0) main_mup_pane_g2_ParamLimits

0x552a,	// (0x0002aca0) main_mup_pane_g2

0x5542,	// (0x0002acb8) main_mup_pane_g3_ParamLimits

0x5542,	// (0x0002acb8) main_mup_pane_g3

0x555a,	// (0x0002acd0) main_mup_pane_g4_ParamLimits

0x555a,	// (0x0002acd0) main_mup_pane_g4

0x5572,	// (0x0002ace8) main_mup_pane_g5_ParamLimits

0x5572,	// (0x0002ace8) main_mup_pane_g5

0x558c,	// (0x0002ad02) main_mup_pane_g6_ParamLimits

0x558c,	// (0x0002ad02) main_mup_pane_g6

0x55a4,	// (0x0002ad1a) main_mup_pane_g7_ParamLimits

0x55a4,	// (0x0002ad1a) main_mup_pane_g7

0x55bc,	// (0x0002ad32) main_mup_pane_g8_ParamLimits

0x55bc,	// (0x0002ad32) main_mup_pane_g8

0x55d4,	// (0x0002ad4a) main_mup_pane_g9_ParamLimits

0x55d4,	// (0x0002ad4a) main_mup_pane_g9

0x55e8,	// (0x0002ad5e) main_mup_pane_g10_ParamLimits

0x55e8,	// (0x0002ad5e) main_mup_pane_g10

0x55fc,	// (0x0002ad72) main_mup_pane_g11_ParamLimits

0x55fc,	// (0x0002ad72) main_mup_pane_g11

0x560e,	// (0x0002ad84) main_mup_pane_g12_ParamLimits

0x560e,	// (0x0002ad84) main_mup_pane_g12

0x5622,	// (0x0002ad98) main_mup_pane_g13_ParamLimits

0x5622,	// (0x0002ad98) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00034b90) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00034b90) main_mup_pane_g

0x5634,	// (0x0002adaa) main_mup_pane_t1_ParamLimits

0x5634,	// (0x0002adaa) main_mup_pane_t1

0x564e,	// (0x0002adc4) main_mup_pane_t2_ParamLimits

0x564e,	// (0x0002adc4) main_mup_pane_t2

0x5666,	// (0x0002addc) main_mup_pane_t3_ParamLimits

0x5666,	// (0x0002addc) main_mup_pane_t3

0x567e,	// (0x0002adf4) main_mup_pane_t4_ParamLimits

0x567e,	// (0x0002adf4) main_mup_pane_t4

0x569c,	// (0x0002ae12) main_mup_pane_t5_ParamLimits

0x569c,	// (0x0002ae12) main_mup_pane_t5

0x56b1,	// (0x0002ae27) main_mup_pane_t6_ParamLimits

0x56b1,	// (0x0002ae27) main_mup_pane_t6

0x0005,

0xf435,	// (0x00034bab) main_mup_pane_t_ParamLimits

0xf435,	// (0x00034bab) main_mup_pane_t

0x56c3,	// (0x0002ae39) mup_progress_pane_ParamLimits

0x56c3,	// (0x0002ae39) mup_progress_pane

0x56cf,	// (0x0002ae45) mup_visualizer_pane_ParamLimits

0x56cf,	// (0x0002ae45) mup_visualizer_pane

0x56f7,	// (0x0002ae6d) mup_volume_pane_ParamLimits

0x56f7,	// (0x0002ae6d) mup_volume_pane

0x5715,	// (0x0002ae8b) mup_visualizer_pane_g1_ParamLimits

0x5715,	// (0x0002ae8b) mup_visualizer_pane_g1

0x5715,	// (0x0002ae8b) mup_visualizer_pane_g2_ParamLimits

0x5715,	// (0x0002ae8b) mup_visualizer_pane_g2

0x51e5,	// (0x0002a95b) mup_visualizer_pane_g3_ParamLimits

0x51e5,	// (0x0002a95b) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00034bb8) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00034bb8) mup_visualizer_pane_g

0x2d7b,	// (0x000284f1) mup_volume_pane_g1

0x572b,	// (0x0002aea1) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00034bbf) mup_volume_pane_g

0x2d7b,	// (0x000284f1) mup_progress_pane_g1

0x5734,	// (0x0002aeaa) mup_progress_pane_g2

0x573d,	// (0x0002aeb3) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00034bc4) mup_progress_pane_g

0x27c9,	// (0x00027f3f) bg_popup_window_pane_cp05

0x5746,	// (0x0002aebc) heading_pane_cp02_ParamLimits

0x5746,	// (0x0002aebc) heading_pane_cp02

0x5760,	// (0x0002aed6) list_popup_blid_pane

0x5768,	// (0x0002aede) list_blid_sat_info_pane_ParamLimits

0x5768,	// (0x0002aede) list_blid_sat_info_pane

0x577a,	// (0x0002aef0) list_blid_sat_info_pane_g1

0x5782,	// (0x0002aef8) list_blid_sat_info_pane_t1

0x5862,	// (0x0002afd8) mup_equalizer_pane_ParamLimits

0x5862,	// (0x0002afd8) mup_equalizer_pane

0x587b,	// (0x0002aff1) mup_equalizer_pane_cp1_ParamLimits

0x587b,	// (0x0002aff1) mup_equalizer_pane_cp1

0x5894,	// (0x0002b00a) mup_equalizer_pane_cp2_ParamLimits

0x5894,	// (0x0002b00a) mup_equalizer_pane_cp2

0x58ad,	// (0x0002b023) mup_equalizer_pane_cp3_ParamLimits

0x58ad,	// (0x0002b023) mup_equalizer_pane_cp3

0x58c6,	// (0x0002b03c) mup_equalizer_pane_cp4_ParamLimits

0x58c6,	// (0x0002b03c) mup_equalizer_pane_cp4

0x58df,	// (0x0002b055) mup_equalizer_pane_cp5

0x58f1,	// (0x0002b067) mup_equalizer_pane_cp6

0x5903,	// (0x0002b079) mup_equalizer_pane_cp7

0xbd46,	// (0x000314bc) bg_popup_call_poc_act_pane_g9

0xbd4e,	// (0x000314c4) bg_popup_call_poc_act_pane_g10

0xbd56,	// (0x000314cc) bg_popup_call_poc_act_pane_g11

0x000a,

0x2a24,	// (0x0002819a) mup_scale_pane

0x2d7b,	// (0x000284f1) mup_scale_pane_g1

0x5917,	// (0x0002b08d) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00034be0) mup_scale_pane_g

0x594d,	// (0x0002b0c3) msg_data_pane

0x5955,	// (0x0002b0cb) scroll_pane_cp017

0x595d,	// (0x0002b0d3) bg_list_pane_cp04_ParamLimits

0x595d,	// (0x0002b0d3) bg_list_pane_cp04

0x597d,	// (0x0002b0f3) msg_data_pane_g1

0x5985,	// (0x0002b0fb) msg_data_pane_g2

0x598d,	// (0x0002b103) msg_data_pane_g3

0x5995,	// (0x0002b10b) msg_data_pane_g4

0x599d,	// (0x0002b113) msg_data_pane_g5

0x59a5,	// (0x0002b11b) msg_data_pane_g6

0x59ad,	// (0x0002b123) msg_data_pane_g7

0x0006,

0xf479,	// (0x00034bef) msg_data_pane_g

0x59b5,	// (0x0002b12b) msg_text_pane_ParamLimits

0x59b5,	// (0x0002b12b) msg_text_pane

0x59db,	// (0x0002b151) qrid_highlight_pane_cp011_ParamLimits

0x59db,	// (0x0002b151) qrid_highlight_pane_cp011

0x27c9,	// (0x00027f3f) msg_body_pane

0x27c9,	// (0x00027f3f) msg_header_pane

0x59fa,	// (0x0002b170) input_focus_pane_cp07

0x5a1b,	// (0x0002b191) msg_header_pane_t1_ParamLimits

0x5a1b,	// (0x0002b191) msg_header_pane_t1

0x5a2d,	// (0x0002b1a3) msg_header_pane_t2_ParamLimits

0x5a2d,	// (0x0002b1a3) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00034c03) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00034c03) msg_header_pane_t

0x5a3f,	// (0x0002b1b5) msg_body_pane_g1

0x5a47,	// (0x0002b1bd) msg_body_pane_t1_ParamLimits

0x5a47,	// (0x0002b1bd) msg_body_pane_t1

0x5a78,	// (0x0002b1ee) msg_body_pane_t2_ParamLimits

0x5a78,	// (0x0002b1ee) msg_body_pane_t2

0x5a8a,	// (0x0002b200) msg_body_pane_t3_ParamLimits

0x5a8a,	// (0x0002b200) msg_body_pane_t3

0x0002,

0xf492,	// (0x00034c08) msg_body_pane_t_ParamLimits

0xf492,	// (0x00034c08) msg_body_pane_t

0x1239,	// (0x000269af) main_viewer_pane_g1_ParamLimits

0x1239,	// (0x000269af) main_viewer_pane_g1

0x1245,	// (0x000269bb) main_viewer_pane_g2_ParamLimits

0x1245,	// (0x000269bb) main_viewer_pane_g2

0x5aba,	// (0x0002b230) main_viewer_pane_g3_ParamLimits

0x5aba,	// (0x0002b230) main_viewer_pane_g3

0x5ac9,	// (0x0002b23f) main_viewer_pane_g4_ParamLimits

0x5ac9,	// (0x0002b23f) main_viewer_pane_g4

0xb413,	// (0x00030b89) main_viewer_pane_g5_ParamLimits

0xb413,	// (0x00030b89) main_viewer_pane_g5

0xb413,	// (0x00030b89) main_viewer_pane_g7_ParamLimits

0xb413,	// (0x00030b89) main_viewer_pane_g7

0xb425,	// (0x00030b9b) main_viewer_pane_g8_ParamLimits

0xb425,	// (0x00030b9b) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00034c18) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00034c18) main_viewer_pane_g

0x5ad8,	// (0x0002b24e) viewer_content_pane_ParamLimits

0x5ad8,	// (0x0002b24e) viewer_content_pane

0x5b0b,	// (0x0002b281) main_postcard_pane_g1_ParamLimits

0x5b0b,	// (0x0002b281) main_postcard_pane_g1

0x5b1f,	// (0x0002b295) main_postcard_pane_g2_ParamLimits

0x5b1f,	// (0x0002b295) main_postcard_pane_g2

0x5b33,	// (0x0002b2a9) main_postcard_pane_g3_ParamLimits

0x5b33,	// (0x0002b2a9) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00034c29) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00034c29) main_postcard_pane_g

0x5b46,	// (0x0002b2bc) main_postcard_pane_g4

0xbfb0,	// (0x00031726) smil_status_volume_pane_g2

0x5b81,	// (0x0002b2f7) postcard_pane_ParamLimits

0x5b81,	// (0x0002b2f7) postcard_pane

0x5bbd,	// (0x0002b333) postcard_pane_g1_ParamLimits

0x5bbd,	// (0x0002b333) postcard_pane_g1

0x5bcb,	// (0x0002b341) postcard_pane_g2_ParamLimits

0x5bcb,	// (0x0002b341) postcard_pane_g2

0x5bd7,	// (0x0002b34d) postcard_pane_g3_ParamLimits

0x5bd7,	// (0x0002b34d) postcard_pane_g3

0x5be3,	// (0x0002b359) postcard_pane_g4_ParamLimits

0x5be3,	// (0x0002b359) postcard_pane_g4

0x5bf1,	// (0x0002b367) postcard_pane_g5_ParamLimits

0x5bf1,	// (0x0002b367) postcard_pane_g5

0x5c05,	// (0x0002b37b) postcard_pane_g6_ParamLimits

0x5c05,	// (0x0002b37b) postcard_pane_g6

0x5bbd,	// (0x0002b333) postcard_pane_g7_ParamLimits

0x5bbd,	// (0x0002b333) postcard_pane_g7

0x0006,

0xf4c0,	// (0x00034c36) postcard_pane_g_ParamLimits

0xf4c0,	// (0x00034c36) postcard_pane_g

0x5c17,	// (0x0002b38d) main_mp2_pane_g1_ParamLimits

0x5c17,	// (0x0002b38d) main_mp2_pane_g1

0x5c23,	// (0x0002b399) main_mp2_pane_g2_ParamLimits

0x5c23,	// (0x0002b399) main_mp2_pane_g2

0x5c2f,	// (0x0002b3a5) main_mp2_pane_g3_ParamLimits

0x5c2f,	// (0x0002b3a5) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x00034c45) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x00034c45) main_mp2_pane_g

0x5c3b,	// (0x0002b3b1) main_mp2_pane_t1_ParamLimits

0x5c3b,	// (0x0002b3b1) main_mp2_pane_t1

0x5c50,	// (0x0002b3c6) main_mp2_pane_t2_ParamLimits

0x5c50,	// (0x0002b3c6) main_mp2_pane_t2

0x5c62,	// (0x0002b3d8) main_mp2_pane_t3_ParamLimits

0x5c62,	// (0x0002b3d8) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x00034c4c) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x00034c4c) main_mp2_pane_t

0x5c74,	// (0x0002b3ea) pec_content_pane_ParamLimits

0x5c74,	// (0x0002b3ea) pec_content_pane

0x3cf1,	// (0x00029467) scroll_pane_cp015

0x5c86,	// (0x0002b3fc) pec_attribute_pane_ParamLimits

0x5c86,	// (0x0002b3fc) pec_attribute_pane

0x5c96,	// (0x0002b40c) pec_content_pane_g1_ParamLimits

0x5c96,	// (0x0002b40c) pec_content_pane_g1

0x5ca2,	// (0x0002b418) pec_content_pane_t1_ParamLimits

0x5ca2,	// (0x0002b418) pec_content_pane_t1

0x5cb4,	// (0x0002b42a) pec_content_pane_t2_ParamLimits

0x5cb4,	// (0x0002b42a) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00034c53) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00034c53) pec_content_pane_t

0x5cc6,	// (0x0002b43c) list_single_graphic_pane_cp01_ParamLimits

0x5cc6,	// (0x0002b43c) list_single_graphic_pane_cp01

0x2a24,	// (0x0002819a) bg_popup_sub_pane_cp04

0x5cda,	// (0x0002b450) popup_mup_playback_window_g1

0x5ce6,	// (0x0002b45c) popup_mup_playback_window_t1

0x5cfb,	// (0x0002b471) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00034c58) popup_mup_playback_window_t

0x5d50,	// (0x0002b4c6) main_image_pane_g1_ParamLimits

0x5d50,	// (0x0002b4c6) main_image_pane_g1

0x5e2b,	// (0x0002b5a1) scroll_pane_cp018_ParamLimits

0x5e2b,	// (0x0002b5a1) scroll_pane_cp018

0x5e43,	// (0x0002b5b9) scroll_pane_cp016_ParamLimits

0x5e43,	// (0x0002b5b9) scroll_pane_cp016

0x5e77,	// (0x0002b5ed) smil2_image_pane_ParamLimits

0x5e77,	// (0x0002b5ed) smil2_image_pane

0x5e9f,	// (0x0002b615) smil2_root_pane_ParamLimits

0x5e9f,	// (0x0002b615) smil2_root_pane

0x5ed7,	// (0x0002b64d) smil2_text_pane_ParamLimits

0x5ed7,	// (0x0002b64d) smil2_text_pane

0x27c9,	// (0x00027f3f) bg_list_pane_cp06

0x5f45,	// (0x0002b6bb) grid_radio_pane

0x27c9,	// (0x00027f3f) bg_popup_window_pane_cp06

0x5f4d,	// (0x0002b6c3) main_fmradio_pane_t1

0x4e73,	// (0x0002a5e9) heading_pane_cp04

0x5f5b,	// (0x0002b6d1) main_fmradio_pane_t2

0xbd9e,	// (0x00031514) popup_cale_lunar_info_window_g1

0x5f69,	// (0x0002b6df) main_fmradio_pane_t3

0xbda6,	// (0x0003151c) popup_cale_lunar_info_window_g2

0x5f77,	// (0x0002b6ed) main_fmradio_pane_t4

0x0001,

0x5f85,	// (0x0002b6fb) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x00034d46) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00034c6d) main_fmradio_pane_t

0x5f93,	// (0x0002b709) wait_bar_pane_cp03

0x5f9b,	// (0x0002b711) cell_fmradio_pane_ParamLimits

0x5f9b,	// (0x0002b711) cell_fmradio_pane

0x5bbd,	// (0x0002b333) cell_fmradio_pane_g1_ParamLimits

0x5bbd,	// (0x0002b333) cell_fmradio_pane_g1

0x27c9,	// (0x00027f3f) grid_highlight_pane_cp011

0x5fae,	// (0x0002b724) poc_content_pane_ParamLimits

0x5fae,	// (0x0002b724) poc_content_pane

0x5fc0,	// (0x0002b736) scroll_pane_cp019

0x5fc8,	// (0x0002b73e) popup_call_poc_act_window_ParamLimits

0x5fc8,	// (0x0002b73e) popup_call_poc_act_window

0x5fe8,	// (0x0002b75e) popup_call_poc_inact_window_ParamLimits

0x5fe8,	// (0x0002b75e) popup_call_poc_inact_window

0xf594,	// (0x00034d0a) bg_popup_call_poc_act_pane_g

0xbd5e,	// (0x000314d4) bg_popup_call_poc_inact_pane_g1

0xbd66,	// (0x000314dc) bg_popup_call_poc_inact_pane_g2

0x5ffd,	// (0x0002b773) popup_call_poc_act_window_g2

0xbd6e,	// (0x000314e4) bg_popup_call_poc_inact_pane_g3

0xbcee,	// (0x00031464) bg_popup_call_poc_inact_pane_g4

0xbd76,	// (0x000314ec) bg_popup_call_poc_inact_pane_g5

0x6005,	// (0x0002b77b) popup_call_poc_act_window_t1_ParamLimits

0x6005,	// (0x0002b77b) popup_call_poc_act_window_t1

0x602d,	// (0x0002b7a3) popup_call_poc_act_window_t2_ParamLimits

0x602d,	// (0x0002b7a3) popup_call_poc_act_window_t2

0x6055,	// (0x0002b7cb) popup_call_poc_act_window_t3_ParamLimits

0x6055,	// (0x0002b7cb) popup_call_poc_act_window_t3

0x607d,	// (0x0002b7f3) popup_call_poc_act_window_t4_ParamLimits

0x607d,	// (0x0002b7f3) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00034c78) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00034c78) popup_call_poc_act_window_t

0xbd7e,	// (0x000314f4) bg_popup_call_poc_inact_pane_g6

0xbd86,	// (0x000314fc) bg_popup_call_poc_inact_pane_g7

0xbd8e,	// (0x00031504) bg_popup_call_poc_inact_pane_g8

0x608f,	// (0x0002b805) popup_call_poc_inact_window_g2

0xbd96,	// (0x0003150c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x00034d21) bg_popup_call_poc_inact_pane_g

0x6097,	// (0x0002b80d) popup_call_poc_inact_window_t1_ParamLimits

0x6097,	// (0x0002b80d) popup_call_poc_inact_window_t1

0x60ac,	// (0x0002b822) popup_call_poc_inact_window_t2_ParamLimits

0x60ac,	// (0x0002b822) popup_call_poc_inact_window_t2

0x60c1,	// (0x0002b837) popup_call_poc_inact_window_t3_ParamLimits

0x60c1,	// (0x0002b837) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00034c81) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00034c81) popup_call_poc_inact_window_t

0xbf23,	// (0x00031699) context_pane_ParamLimits

0x6ad4,	// (0x0002c24a) signal_pane_ParamLimits

0x33a7,	// (0x00028b1d) main_call2_pane

0xbefc,	// (0x00031672) popup_phob_thumbnail2_window_ParamLimits

0xbefc,	// (0x00031672) popup_phob_thumbnail2_window

0xb3fb,	// (0x00030b71) aid_hotspot_pointer_arrow_pane

0xb403,	// (0x00030b79) aid_hotspot_pointer_hand_pane

0x68f1,	// (0x0002c067) phob_pre_status_pane_g5

0x3422,	// (0x00028b98) cams_zoom_pane_ParamLimits

0x3431,	// (0x00028ba7) image_vga_pane_ParamLimits

0x3447,	// (0x00028bbd) main_camera_pane_g1_ParamLimits

0x3457,	// (0x00028bcd) main_camera_pane_g2_ParamLimits

0x3467,	// (0x00028bdd) main_camera_pane_g3_ParamLimits

0x3477,	// (0x00028bed) main_camera_pane_g4_ParamLimits

0x3487,	// (0x00028bfd) main_camera_pane_g5_ParamLimits

0x3497,	// (0x00028c0d) main_camera_pane_g6_ParamLimits

0x34a7,	// (0x00028c1d) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00034980) main_camera_pane_g_ParamLimits

0x34c3,	// (0x00028c39) main_camera_pane_t1_ParamLimits

0x34d9,	// (0x00028c4f) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00034991) main_camera_pane_t_ParamLimits

0x2a24,	// (0x0002819a) bg_popup_preview_window_pane_cp01_ParamLimits

0x2a24,	// (0x0002819a) bg_popup_preview_window_pane_cp01

0x60d6,	// (0x0002b84c) popup_phob_thumbnail2_window_g1_ParamLimits

0x60d6,	// (0x0002b84c) popup_phob_thumbnail2_window_g1

0x27c9,	// (0x00027f3f) call2_cli_visual_pane

0x60f9,	// (0x0002b86f) popup_call2_audio_conf_window_ParamLimits

0x60f9,	// (0x0002b86f) popup_call2_audio_conf_window

0x6117,	// (0x0002b88d) popup_call2_audio_first_window_ParamLimits

0x6117,	// (0x0002b88d) popup_call2_audio_first_window

0x618d,	// (0x0002b903) popup_call2_audio_in_window_ParamLimits

0x618d,	// (0x0002b903) popup_call2_audio_in_window

0x61c1,	// (0x0002b937) popup_call2_audio_out_window_ParamLimits

0x61c1,	// (0x0002b937) popup_call2_audio_out_window

0x6213,	// (0x0002b989) popup_call2_audio_second_window_ParamLimits

0x6213,	// (0x0002b989) popup_call2_audio_second_window

0x6265,	// (0x0002b9db) popup_call2_audio_wait_window_ParamLimits

0x6265,	// (0x0002b9db) popup_call2_audio_wait_window

0x27c9,	// (0x00027f3f) bg_popup_call2_act_pane_cp03

0x2a06,	// (0x0002817c) list_conf_pane_cp

0x629d,	// (0x0002ba13) popup_call2_audio_conf_window_t1

0x4ef2,	// (0x0002a668) list_single_graphic_popup_conf2_pane_ParamLimits

0x4ef2,	// (0x0002a668) list_single_graphic_popup_conf2_pane

0x4f05,	// (0x0002a67b) list_highlight_pane_cp04

0x62ab,	// (0x0002ba21) list_single_graphic_popup_conf2_pane_g1

0x4f16,	// (0x0002a68c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00034c88) list_single_graphic_popup_conf2_pane_g

0x62b3,	// (0x0002ba29) list_single_graphic_popup_conf2_pane_t1

0x62c1,	// (0x0002ba37) bg_popup_call2_act_pane_cp01_ParamLimits

0x62c1,	// (0x0002ba37) bg_popup_call2_act_pane_cp01

0x634b,	// (0x0002bac1) call_type_pane_cp05_ParamLimits

0x634b,	// (0x0002bac1) call_type_pane_cp05

0x639f,	// (0x0002bb15) popup_call2_audio_second_window_g1_ParamLimits

0x639f,	// (0x0002bb15) popup_call2_audio_second_window_g1

0x63f3,	// (0x0002bb69) popup_call2_audio_second_window_g2_ParamLimits

0x63f3,	// (0x0002bb69) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00034c8d) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00034c8d) popup_call2_audio_second_window_g

0x6458,	// (0x0002bbce) popup_call2_audio_second_window_t1_ParamLimits

0x6458,	// (0x0002bbce) popup_call2_audio_second_window_t1

0x6513,	// (0x0002bc89) popup_call2_audio_second_window_t2_ParamLimits

0x6513,	// (0x0002bc89) popup_call2_audio_second_window_t2

0x6566,	// (0x0002bcdc) popup_call2_audio_second_window_t3_ParamLimits

0x6566,	// (0x0002bcdc) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00034c94) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00034c94) popup_call2_audio_second_window_t

0x27c9,	// (0x00027f3f) bg_popup_call2_in_pane_cp02

0x27d3,	// (0x00027f49) call_type_pane_cp04

0x27db,	// (0x00027f51) popup_call2_audio_wait_window_g1

0x27e3,	// (0x00027f59) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003486f) popup_call2_audio_wait_window_g

0x27eb,	// (0x00027f61) popup_call2_audio_wait_window_t3

0x6659,	// (0x0002bdcf) bg_popup_call2_act_pane_ParamLimits

0x6659,	// (0x0002bdcf) bg_popup_call2_act_pane

0x6719,	// (0x0002be8f) call_type_pane_cp03_ParamLimits

0x6719,	// (0x0002be8f) call_type_pane_cp03

0x677d,	// (0x0002bef3) popup_call2_audio_first_window_g1_ParamLimits

0x677d,	// (0x0002bef3) popup_call2_audio_first_window_g1

0xb43d,	// (0x00030bb3) popup_call2_audio_first_window_g2_ParamLimits

0xb43d,	// (0x00030bb3) popup_call2_audio_first_window_g2

0x5715,	// (0x0002ae8b) popup_call2_audio_first_window_g3_ParamLimits

0x5715,	// (0x0002ae8b) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00034c9d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00034c9d) popup_call2_audio_first_window_g

0xb51b,	// (0x00030c91) popup_call2_audio_first_window_t1_ParamLimits

0xb51b,	// (0x00030c91) popup_call2_audio_first_window_t1

0xb61e,	// (0x00030d94) popup_call2_audio_first_window_t4_ParamLimits

0xb61e,	// (0x00030d94) popup_call2_audio_first_window_t4

0xb701,	// (0x00030e77) popup_call2_audio_first_window_t5_ParamLimits

0xb701,	// (0x00030e77) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00034ca8) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00034ca8) popup_call2_audio_first_window_t

0x2a1c,	// (0x00028192) bg_popup_call2_act_pane_g1

0xbdae,	// (0x00031524) popup_cale_lunar_info_window_t1

0xbdbc,	// (0x00031532) popup_cale_lunar_info_window_t2

0xbdca,	// (0x00031540) popup_cale_lunar_info_window_t3

0x27c9,	// (0x00027f3f) bg_popup_call2_bubble_pane

0xb802,	// (0x00030f78) bg_popup_call2_in_pane_cp01_ParamLimits

0xb802,	// (0x00030f78) bg_popup_call2_in_pane_cp01

0x2481,	// (0x00027bf7) call_type_pane_cp02

0xb84a,	// (0x00030fc0) popup_call2_audio_out_window_g1_ParamLimits

0xb84a,	// (0x00030fc0) popup_call2_audio_out_window_g1

0xb876,	// (0x00030fec) popup_call2_audio_out_window_g2_ParamLimits

0xb876,	// (0x00030fec) popup_call2_audio_out_window_g2

0xb89e,	// (0x00031014) popup_call2_audio_out_window_g3_ParamLimits

0xb89e,	// (0x00031014) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00034cb1) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00034cb1) popup_call2_audio_out_window_g

0xb8d9,	// (0x0003104f) popup_call2_audio_out_window_t1_ParamLimits

0xb8d9,	// (0x0003104f) popup_call2_audio_out_window_t1

0xb938,	// (0x000310ae) popup_call2_audio_out_window_t2_ParamLimits

0xb938,	// (0x000310ae) popup_call2_audio_out_window_t2

0xb98c,	// (0x00031102) popup_call2_audio_out_window_t3_ParamLimits

0xb98c,	// (0x00031102) popup_call2_audio_out_window_t3

0xb9a2,	// (0x00031118) popup_call2_audio_out_window_t4_ParamLimits

0xb9a2,	// (0x00031118) popup_call2_audio_out_window_t4

0xb9b8,	// (0x0003112e) popup_call2_audio_out_window_t5_ParamLimits

0xb9b8,	// (0x0003112e) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00034cba) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00034cba) popup_call2_audio_out_window_t

0xba1c,	// (0x00031192) bg_popup_call2_in_pane_ParamLimits

0xba1c,	// (0x00031192) bg_popup_call2_in_pane

0xba78,	// (0x000311ee) popup_call2_audio_in_window_g1_ParamLimits

0xba78,	// (0x000311ee) popup_call2_audio_in_window_g1

0xbab0,	// (0x00031226) popup_call2_audio_in_window_g2_ParamLimits

0xbab0,	// (0x00031226) popup_call2_audio_in_window_g2

0xbae8,	// (0x0003125e) popup_call2_audio_in_window_g3_ParamLimits

0xbae8,	// (0x0003125e) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00034cc7) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00034cc7) popup_call2_audio_in_window_g

0xbb40,	// (0x000312b6) popup_call2_audio_in_window_t1_ParamLimits

0xbb40,	// (0x000312b6) popup_call2_audio_in_window_t1

0xbbc0,	// (0x00031336) popup_call2_audio_in_window_t2_ParamLimits

0xbbc0,	// (0x00031336) popup_call2_audio_in_window_t2

0xbc40,	// (0x000313b6) popup_call2_audio_in_window_t3_ParamLimits

0xbc40,	// (0x000313b6) popup_call2_audio_in_window_t3

0xbc5a,	// (0x000313d0) popup_call2_audio_in_window_t4_ParamLimits

0xbc5a,	// (0x000313d0) popup_call2_audio_in_window_t4

0xbc6c,	// (0x000313e2) popup_call2_audio_in_window_t5_ParamLimits

0xbc6c,	// (0x000313e2) popup_call2_audio_in_window_t5

0xbc81,	// (0x000313f7) popup_call2_audio_in_window_t6_ParamLimits

0xbc81,	// (0x000313f7) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00034cd0) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00034cd0) popup_call2_audio_in_window_t

0x2a1c,	// (0x00028192) bg_popup_call2_in_pane_g1

0xbdd8,	// (0x0003154e) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x00034d4b) popup_cale_lunar_info_window_t

0x2a24,	// (0x0002819a) bg_popup_call2_rect_pane_ParamLimits

0x2a24,	// (0x0002819a) bg_popup_call2_rect_pane

0x27c9,	// (0x00027f3f) call2_cli_visual_graphic_pane

0x27c9,	// (0x00027f3f) call2_cli_visual_text_pane

0xbfc3,	// (0x00031739) smil_status_volume_pane_g3

0x0002,

0x2d7b,	// (0x000284f1) call2_cli_visual_graphic_pane_g1

0x2d7b,	// (0x000284f1) call2_cli_visual_graphic_pane_g2

0x2d7b,	// (0x000284f1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00034cdd) call2_cli_visual_graphic_pane_g

0xbc96,	// (0x0003140c) bg_popup_call2_rect_pane_g1

0x2e94,	// (0x0002860a) bg_popup_call2_rect_pane_g2

0xbc9e,	// (0x00031414) bg_popup_call2_rect_pane_g3

0xbca6,	// (0x0003141c) bg_popup_call2_rect_pane_g4

0xbcae,	// (0x00031424) bg_popup_call2_rect_pane_g5

0xbcb6,	// (0x0003142c) bg_popup_call2_rect_pane_g6

0xbcbe,	// (0x00031434) bg_popup_call2_rect_pane_g7

0xbcc6,	// (0x0003143c) bg_popup_call2_rect_pane_g8

0xbcce,	// (0x00031444) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00034ce4) bg_popup_call2_rect_pane_g

0xbcd6,	// (0x0003144c) bg_popup_call2_bubble_pane_g1

0xbcde,	// (0x00031454) bg_popup_call2_bubble_pane_g2

0xbce6,	// (0x0003145c) bg_popup_call2_bubble_pane_g3

0xbcee,	// (0x00031464) bg_popup_call2_bubble_pane_g4

0xbcf6,	// (0x0003146c) bg_popup_call2_bubble_pane_g5

0xbcfe,	// (0x00031474) bg_popup_call2_bubble_pane_g6

0xbd06,	// (0x0003147c) bg_popup_call2_bubble_pane_g7

0xbd0e,	// (0x00031484) bg_popup_call2_bubble_pane_g8

0xbd16,	// (0x0003148c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00034cf7) bg_popup_call2_bubble_pane_g

0x2f1d,	// (0x00028693) aid_cale_week_size_cell_pane

0x34ef,	// (0x00028c65) aid_cams_cif_uncrop_pane_ParamLimits

0x34ef,	// (0x00028c65) aid_cams_cif_uncrop_pane

0x36cc,	// (0x00028e42) aid_cams_size_cell_ParamLimits

0x36cc,	// (0x00028e42) aid_cams_size_cell

0x36e0,	// (0x00028e56) grid_cams_pane_ParamLimits

0x36f5,	// (0x00028e6b) linegrid_cams_pane_ParamLimits

0x391f,	// (0x00029095) call_video_pane_t1

0x3939,	// (0x000290af) call_video_pane_t2

0x0001,

0xf26e,	// (0x000349e4) call_video_pane_t

0x3f11,	// (0x00029687) aid_cale_month_size_cell_pane_ParamLimits

0x3f11,	// (0x00029687) aid_cale_month_size_cell_pane

0xf61e,	// (0x00034d94) smil_status_volume_pane_g

0xbfd0,	// (0x00031746) volume_smil_pane_ParamLimits

0xb22e,	// (0x000309a4) aid_popup2_width_pane

0x2dec,	// (0x00028562) cell_qdial_pane_g4_ParamLimits

0x2dec,	// (0x00028562) cell_qdial_pane_g4

0x51c5,	// (0x0002a93b) aid_blid_cardinal_pane_ParamLimits

0x51d1,	// (0x0002a947) aid_blid_destination_pane_ParamLimits

0x51d1,	// (0x0002a947) aid_blid_destination_pane

0x2a24,	// (0x0002819a) bg_popup_call_poc_act_pane_ParamLimits

0x2a24,	// (0x0002819a) bg_popup_call_poc_act_pane

0x2a24,	// (0x0002819a) bg_popup_call_poc_inact_pane_ParamLimits

0x2a24,	// (0x0002819a) bg_popup_call_poc_inact_pane

0xbd1e,	// (0x00031494) bg_popup_call_poc_act_pane_g1

0xbd26,	// (0x0003149c) bg_popup_call_poc_act_pane_g2

0xbd2e,	// (0x000314a4) bg_popup_call_poc_act_pane_g3

0xbcee,	// (0x00031464) bg_popup_call_poc_act_pane_g4

0xbcf6,	// (0x0003146c) bg_popup_call_poc_act_pane_g5

0xbd36,	// (0x000314ac) bg_popup_call_poc_act_pane_g6

0xbd06,	// (0x0003147c) bg_popup_call_poc_act_pane_g7

0xbd3e,	// (0x000314b4) bg_popup_call_poc_act_pane_g8

0x27c9,	// (0x00027f3f) main_usb_pane

0x1311,	// (0x00026a87) popup_cale_lunar_info_window

0x3bdc,	// (0x00029352) im_reading_pane_t1_ParamLimits

0x3c12,	// (0x00029388) list_im_pane_ParamLimits

0x3c23,	// (0x00029399) scroll_pane_cp07_ParamLimits

0x27c9,	// (0x00027f3f) grid_highlight_pane_cp012

0x2a24,	// (0x0002819a) mup_scale_pane_ParamLimits

0x5bbd,	// (0x0002b333) main_usb_pane_g1_ParamLimits

0x5bbd,	// (0x0002b333) main_usb_pane_g1

0x680e,	// (0x0002bf84) main_usb_pane_g2_ParamLimits

0x680e,	// (0x0002bf84) main_usb_pane_g2

0x0001,

0xf5be,	// (0x00034d34) main_usb_pane_g_ParamLimits

0xf5be,	// (0x00034d34) main_usb_pane_g

0x6822,	// (0x0002bf98) main_usb_pane_t1_ParamLimits

0x6822,	// (0x0002bf98) main_usb_pane_t1

0x6834,	// (0x0002bfaa) main_usb_pane_t2_ParamLimits

0x6834,	// (0x0002bfaa) main_usb_pane_t2

0x6846,	// (0x0002bfbc) main_usb_pane_t3_ParamLimits

0x6846,	// (0x0002bfbc) main_usb_pane_t3

0x6858,	// (0x0002bfce) main_usb_pane_t4_ParamLimits

0x6858,	// (0x0002bfce) main_usb_pane_t4

0x686a,	// (0x0002bfe0) main_usb_pane_t5_ParamLimits

0x686a,	// (0x0002bfe0) main_usb_pane_t5

0x687c,	// (0x0002bff2) main_usb_pane_t6_ParamLimits

0x687c,	// (0x0002bff2) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x00034d39) main_usb_pane_t_ParamLimits

0x5174,	// (0x0002a8ea) aid_text_placing

0x517d,	// (0x0002a8f3) main_location2_pane_t1_ParamLimits

0x518f,	// (0x0002a905) main_location2_pane_t2_ParamLimits

0x51a1,	// (0x0002a917) main_location2_pane_t3_ParamLimits

0x51b3,	// (0x0002a929) main_location2_pane_t4_ParamLimits

0x51b3,	// (0x0002a929) main_location2_pane_t4

0xf3cf,	// (0x00034b45) main_location2_pane_t_ParamLimits

0x2aee,	// (0x00028264) find_pinb_pane_g2_ParamLimits

0x2aee,	// (0x00028264) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00034895) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00034895) find_pinb_pane_g

0x2afa,	// (0x00028270) find_pinb_pane_t1_ParamLimits

0x2b0c,	// (0x00028282) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003489a) find_pinb_pane_t_ParamLimits

0x27c9,	// (0x00027f3f) main_call3_pane

0x4393,	// (0x00029b09) cale_month_day_heading_pane_t1_ParamLimits

0x4419,	// (0x00029b8f) cale_month_day_heading_pane_t2_ParamLimits

0x4492,	// (0x00029c08) cale_month_day_heading_pane_t3_ParamLimits

0x450b,	// (0x00029c81) cale_month_day_heading_pane_t4_ParamLimits

0x4584,	// (0x00029cfa) cale_month_day_heading_pane_t5_ParamLimits

0x45fd,	// (0x00029d73) cale_month_day_heading_pane_t6_ParamLimits

0x4676,	// (0x00029dec) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x00034a1c) cale_month_day_heading_pane_t_ParamLimits

0x48ce,	// (0x0002a044) smil_status_volume_pane

0x5b9d,	// (0x0002b313) postcard_address_pane_ParamLimits

0x5b9d,	// (0x0002b313) postcard_address_pane

0x5bad,	// (0x0002b323) postcard_message_pane_ParamLimits

0x5bad,	// (0x0002b323) postcard_message_pane

0x67ed,	// (0x0002bf63) call2_cli_visual_pane_t1_ParamLimits

0x67ed,	// (0x0002bf63) call2_cli_visual_pane_t1

0x6cee,	// (0x0002c464) postcard_message_pane_t1_ParamLimits

0x6cee,	// (0x0002c464) postcard_message_pane_t1

0x6cd7,	// (0x0002c44d) postcard_address_pane_t1_ParamLimits

0x6cd7,	// (0x0002c44d) postcard_address_pane_t1

0x6cc5,	// (0x0002c43b) popup_call3_audio_in_window_ParamLimits

0x6cc5,	// (0x0002c43b) popup_call3_audio_in_window

0x6b54,	// (0x0002c2ca) bg_popup_call3_in_pane_ParamLimits

0x6b54,	// (0x0002c2ca) bg_popup_call3_in_pane

0x6bc6,	// (0x0002c33c) popup_call3_audio_in_window_g1_ParamLimits

0x6bc6,	// (0x0002c33c) popup_call3_audio_in_window_g1

0x6be6,	// (0x0002c35c) popup_call3_audio_in_window_g2_ParamLimits

0x6be6,	// (0x0002c35c) popup_call3_audio_in_window_g2

0x6c06,	// (0x0002c37c) popup_call3_audio_in_window_g3_ParamLimits

0x6c06,	// (0x0002c37c) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x00034d9b) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x00034d9b) popup_call3_audio_in_window_g

0x6c37,	// (0x0002c3ad) popup_call3_audio_in_window_t1_ParamLimits

0x6c37,	// (0x0002c3ad) popup_call3_audio_in_window_t1

0x6c75,	// (0x0002c3eb) popup_call3_audio_in_window_t2_ParamLimits

0x6c75,	// (0x0002c3eb) popup_call3_audio_in_window_t2

0x6cb3,	// (0x0002c429) popup_call3_audio_in_window_t3_ParamLimits

0x6cb3,	// (0x0002c429) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x00034da4) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x00034da4) popup_call3_audio_in_window_t

0x33a7,	// (0x00028b1d) bg_popup_call3_rect_pane

0xbc96,	// (0x0003140c) bg_popup_call3_rect_pane_g1

0x2e94,	// (0x0002860a) bg_popup_call3_rect_pane_g2

0xbc9e,	// (0x00031414) bg_popup_call3_rect_pane_g3

0xbca6,	// (0x0003141c) bg_popup_call3_rect_pane_g4

0xbcae,	// (0x00031424) bg_popup_call3_rect_pane_g5

0xbcb6,	// (0x0003142c) bg_popup_call3_rect_pane_g6

0xbcbe,	// (0x00031434) bg_popup_call3_rect_pane_g7

0x570d,	// (0x0002ae83) mup_visualizer_osc_pane

0x5723,	// (0x0002ae99) mup_visualizer_spec_pane

0x6b84,	// (0x0002c2fa) call3_video_qcif_pane_ParamLimits

0x6b84,	// (0x0002c2fa) call3_video_qcif_pane

0x6b95,	// (0x0002c30b) call3_video_qcif_uncrop_pane_ParamLimits

0x6b95,	// (0x0002c30b) call3_video_qcif_uncrop_pane

0x6ba1,	// (0x0002c317) call3_video_subqcif_pane_ParamLimits

0x6ba1,	// (0x0002c317) call3_video_subqcif_pane

0x6bb5,	// (0x0002c32b) call3_video_subqcif_uncrop_pane_ParamLimits

0x6bb5,	// (0x0002c32b) call3_video_subqcif_uncrop_pane

0x6c26,	// (0x0002c39c) popup_call3_audio_in_window_g4_ParamLimits

0x6c26,	// (0x0002c39c) popup_call3_audio_in_window_g4

0x6b43,	// (0x0002c2b9) mup_spec_half_pane

0x6b4c,	// (0x0002c2c2) mup_spec_half_pane_cp

0xbf83,	// (0x000316f9) mup_osc_middle_pane

0xbf8c,	// (0x00031702) mup_visualizer_osc_pane_g1

0x6b24,	// (0x0002c29a) mup_spec_bar_pane_ParamLimits

0x6b24,	// (0x0002c29a) mup_spec_bar_pane

0xbf70,	// (0x000316e6) mup_spec_bar_pane_g1

0xbf7a,	// (0x000316f0) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00034d8f) mup_spec_bar_pane_g

0x2f1d,	// (0x00028693) aid_cale_week_size_cell_pane_ParamLimits

0x2f37,	// (0x000286ad) bg_cale_heading_pane_ParamLimits

0x2f4f,	// (0x000286c5) bg_cale_pane_cp01_ParamLimits

0x2f6c,	// (0x000286e2) cale_week_corner_pane_ParamLimits

0x2f8b,	// (0x00028701) cale_week_day_heading_pane_ParamLimits

0x2fa8,	// (0x0002871e) cale_week_scroll_pane_g1_ParamLimits

0x2fbb,	// (0x00028731) cale_week_scroll_pane_g2_ParamLimits

0x2fd3,	// (0x00028749) cale_week_scroll_pane_g3_ParamLimits

0x2feb,	// (0x00028761) cale_week_scroll_pane_g4_ParamLimits

0x3003,	// (0x00028779) cale_week_scroll_pane_g5_ParamLimits

0x301b,	// (0x00028791) cale_week_scroll_pane_g6_ParamLimits

0x3033,	// (0x000287a9) cale_week_scroll_pane_g7_ParamLimits

0x304b,	// (0x000287c1) cale_week_scroll_pane_g8_ParamLimits

0x3067,	// (0x000287dd) cale_week_scroll_pane_g9_ParamLimits

0x307f,	// (0x000287f5) cale_week_scroll_pane_g10_ParamLimits

0x3097,	// (0x0002880d) cale_week_scroll_pane_g11_ParamLimits

0x30af,	// (0x00028825) cale_week_scroll_pane_g12_ParamLimits

0x30c7,	// (0x0002883d) cale_week_scroll_pane_g13_ParamLimits

0x30c7,	// (0x0002883d) cale_week_scroll_pane_g14_ParamLimits

0x30c7,	// (0x0002883d) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00034926) cale_week_scroll_pane_g_ParamLimits

0x30fb,	// (0x00028871) cale_week_time_pane_ParamLimits

0x3117,	// (0x0002888d) grid_cale_week_pane_ParamLimits

0x3131,	// (0x000288a7) listscroll_cale_week_pane_t1

0x3143,	// (0x000288b9) scroll_pane_cp08_ParamLimits

0x3f9e,	// (0x00029714) cale_month_corner_pane_ParamLimits

0x4328,	// (0x00029a9e) cale_month_pane_t1

0x433a,	// (0x00029ab0) cale_month_week_pane_ParamLimits

0x4dd7,	// (0x0002a54d) popup_call_status_window_g1_ParamLimits

0x4deb,	// (0x0002a561) popup_call_status_window_g2_ParamLimits

0x4dff,	// (0x0002a575) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00034acc) popup_call_status_window_g_ParamLimits

0x4e63,	// (0x0002a5d9) aid_call2_pane

0x5a03,	// (0x0002b179) msg_header_pane_g1

0x5b9d,	// (0x0002b313) postcard_address2_pane_ParamLimits

0x5b9d,	// (0x0002b313) postcard_address2_pane

0x5bad,	// (0x0002b323) postcard_message2_pane_ParamLimits

0x5bad,	// (0x0002b323) postcard_message2_pane

0x6ae2,	// (0x0002c258) message2_row_pane_ParamLimits

0x6ae2,	// (0x0002c258) message2_row_pane

0x6afa,	// (0x0002c270) address2_row_pane_ParamLimits

0x6afa,	// (0x0002c270) address2_row_pane

0xbf3e,	// (0x000316b4) postcard_message2_row_pane_g1

0xbf46,	// (0x000316bc) postcard_message2_row_pane_t1

0xbf3e,	// (0x000316b4) address2_row_pane_g1

0xbf46,	// (0x000316bc) address2_row_pane_t1

0x339f,	// (0x00028b15) aid_size_cell_vorec

0x27c9,	// (0x00027f3f) main_rss_pane

0x6b0d,	// (0x0002c283) rss_list_single_pane_ParamLimits

0x6b0d,	// (0x0002c283) rss_list_single_pane

0xbf54,	// (0x000316ca) rss_list_single_pane_t1

0xbf62,	// (0x000316d8) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x00034d8a) rss_list_single_pane_t

0x27c9,	// (0x00027f3f) main_camera2_pane

0x27c9,	// (0x00027f3f) main_video2_pane

0x1511,	// (0x00026c87) cams_zoom_pane_cp2_ParamLimits

0x1511,	// (0x00026c87) cams_zoom_pane_cp2

0x1528,	// (0x00026c9e) image2_vga_pane_ParamLimits

0x1528,	// (0x00026c9e) image2_vga_pane

0x155e,	// (0x00026cd4) main_camera2_pane_g1_ParamLimits

0x155e,	// (0x00026cd4) main_camera2_pane_g1

0x157e,	// (0x00026cf4) main_camera2_pane_g2_ParamLimits

0x157e,	// (0x00026cf4) main_camera2_pane_g2

0x1595,	// (0x00026d0b) main_camera2_pane_g3_ParamLimits

0x1595,	// (0x00026d0b) main_camera2_pane_g3

0x15ac,	// (0x00026d22) main_camera2_pane_g4_ParamLimits

0x15ac,	// (0x00026d22) main_camera2_pane_g4

0x15c3,	// (0x00026d39) main_camera2_pane_g5_ParamLimits

0x15c3,	// (0x00026d39) main_camera2_pane_g5

0x15da,	// (0x00026d50) main_camera2_pane_g6_ParamLimits

0x15da,	// (0x00026d50) main_camera2_pane_g6

0x15f1,	// (0x00026d67) main_camera2_pane_g7_ParamLimits

0x15f1,	// (0x00026d67) main_camera2_pane_g7

0x1608,	// (0x00026d7e) main_camera2_pane_g8_ParamLimits

0x1608,	// (0x00026d7e) main_camera2_pane_g8

0x0008,

0xf635,	// (0x00034dab) main_camera2_pane_g_ParamLimits

0xf635,	// (0x00034dab) main_camera2_pane_g

0x1636,	// (0x00026dac) main_camera2_pane_t1_ParamLimits

0x1636,	// (0x00026dac) main_camera2_pane_t1

0x1665,	// (0x00026ddb) main_camera2_pane_t2_ParamLimits

0x1665,	// (0x00026ddb) main_camera2_pane_t2

0x1682,	// (0x00026df8) main_camera2_pane_t3_ParamLimits

0x1682,	// (0x00026df8) main_camera2_pane_t3

0x16ce,	// (0x00026e44) main_camera2_pane_t4_ParamLimits

0x16ce,	// (0x00026e44) main_camera2_pane_t4

0x0006,

0xf648,	// (0x00034dbe) main_camera2_pane_t_ParamLimits

0xf648,	// (0x00034dbe) main_camera2_pane_t

0x1743,	// (0x00026eb9) cams_zoom_pane_cp4_ParamLimits

0x1743,	// (0x00026eb9) cams_zoom_pane_cp4

0x1759,	// (0x00026ecf) image2_cif_pane_ParamLimits

0x1759,	// (0x00026ecf) image2_cif_pane

0x177c,	// (0x00026ef2) image2_subqcif_pane_ParamLimits

0x177c,	// (0x00026ef2) image2_subqcif_pane

0x1792,	// (0x00026f08) main_video2_pane_g1_ParamLimits

0x1792,	// (0x00026f08) main_video2_pane_g1

0x17ac,	// (0x00026f22) main_video2_pane_g2_ParamLimits

0x17ac,	// (0x00026f22) main_video2_pane_g2

0x17c2,	// (0x00026f38) main_video2_pane_g3_ParamLimits

0x17c2,	// (0x00026f38) main_video2_pane_g3

0x17d8,	// (0x00026f4e) main_video2_pane_g4_ParamLimits

0x17d8,	// (0x00026f4e) main_video2_pane_g4

0x17ee,	// (0x00026f64) main_video2_pane_g5_ParamLimits

0x17ee,	// (0x00026f64) main_video2_pane_g5

0x1804,	// (0x00026f7a) main_video2_pane_g6_ParamLimits

0x1804,	// (0x00026f7a) main_video2_pane_g6

0x0005,

0xf657,	// (0x00034dcd) main_video2_pane_g_ParamLimits

0xf657,	// (0x00034dcd) main_video2_pane_g

0x181e,	// (0x00026f94) main_video2_pane_t1_ParamLimits

0x181e,	// (0x00026f94) main_video2_pane_t1

0x1842,	// (0x00026fb8) main_video2_pane_t2_ParamLimits

0x1842,	// (0x00026fb8) main_video2_pane_t2

0x188c,	// (0x00027002) main_video2_pane_t3_ParamLimits

0x188c,	// (0x00027002) main_video2_pane_t3

0x0002,

0xf664,	// (0x00034dda) main_video2_pane_t_ParamLimits

0xf664,	// (0x00034dda) main_video2_pane_t

0x692b,	// (0x0002c0a1) call_muted_g2

0x0001,

0xf606,	// (0x00034d7c) call_muted_g

0x27c9,	// (0x00027f3f) main_mup2_pane

0x6d09,	// (0x0002c47f) main_mup2_pane_g1_ParamLimits

0x6d09,	// (0x0002c47f) main_mup2_pane_g1

0x6d15,	// (0x0002c48b) main_mup2_pane_g2_ParamLimits

0x6d15,	// (0x0002c48b) main_mup2_pane_g2

0xc0ef,	// (0x00031865) main_mup_pane_g13_cp1

0xc0f7,	// (0x0003186d) mup_volume_pane_cp1

0x6d31,	// (0x0002c4a7) main_mup2_pane_g4_ParamLimits

0x6d31,	// (0x0002c4a7) main_mup2_pane_g4

0x6d41,	// (0x0002c4b7) main_mup2_pane_g5_ParamLimits

0x6d41,	// (0x0002c4b7) main_mup2_pane_g5

0x6d51,	// (0x0002c4c7) main_mup2_pane_g6_ParamLimits

0x6d51,	// (0x0002c4c7) main_mup2_pane_g6

0x6d61,	// (0x0002c4d7) main_mup2_pane_g7_ParamLimits

0x6d61,	// (0x0002c4d7) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x00034de1) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x00034de1) main_mup2_pane_g

0x6d79,	// (0x0002c4ef) main_mup2_pane_t1_ParamLimits

0x6d79,	// (0x0002c4ef) main_mup2_pane_t1

0x6d8f,	// (0x0002c505) main_mup2_pane_t2_ParamLimits

0x6d8f,	// (0x0002c505) main_mup2_pane_t2

0x6da5,	// (0x0002c51b) main_mup2_pane_t3_ParamLimits

0x6da5,	// (0x0002c51b) main_mup2_pane_t3

0x6dbb,	// (0x0002c531) main_mup2_pane_t4_ParamLimits

0x6dbb,	// (0x0002c531) main_mup2_pane_t4

0x6dd3,	// (0x0002c549) main_mup2_pane_t5_ParamLimits

0x6dd3,	// (0x0002c549) main_mup2_pane_t5

0x6deb,	// (0x0002c561) main_mup2_pane_t6_ParamLimits

0x6deb,	// (0x0002c561) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x00034df0) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x00034df0) main_mup2_pane_t

0x6e19,	// (0x0002c58f) mup2_visualizer_pane_ParamLimits

0x6e19,	// (0x0002c58f) mup2_visualizer_pane

0x6e44,	// (0x0002c5ba) mup_progress_pane_cp_ParamLimits

0x6e44,	// (0x0002c5ba) mup_progress_pane_cp

0xc0d1,	// (0x00031847) mup_volume_pane_cp_ParamLimits

0xc0d1,	// (0x00031847) mup_volume_pane_cp

0x6e58,	// (0x0002c5ce) mup2_visualizer_pane_g1_ParamLimits

0x6e58,	// (0x0002c5ce) mup2_visualizer_pane_g1

0xc010,	// (0x00031786) mup2_visualizer_pane_g2_ParamLimits

0xc010,	// (0x00031786) mup2_visualizer_pane_g2

0x6e6d,	// (0x0002c5e3) mup2_visualizer_pane_g3_ParamLimits

0x6e6d,	// (0x0002c5e3) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x00034dfd) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x00034dfd) mup2_visualizer_pane_g

0x5f3d,	// (0x0002b6b3) aid_size_cell_fmradio

0x1251,	// (0x000269c7) aid_height_parent_landcape

0x3cd8,	// (0x0002944e) wml_content_pane_cp

0x3ce0,	// (0x00029456) wml_tabs_pane

0x3ce9,	// (0x0002945f) popup_wml_miniature_window

0x3cf1,	// (0x00029467) scroll_pane_cp021

0x3d05,	// (0x0002947b) wml_content_pane_comp8

0x27c9,	// (0x00027f3f) bg_popup_sub_pane_cp05

0xc02e,	// (0x000317a4) popup_wml_miniature_window_g1

0xc036,	// (0x000317ac) wml_miniature_view_pane

0x6e79,	// (0x0002c5ef) aid_size_wml_view

0x6e81,	// (0x0002c5f7) wml_miniature_view_pane_g1

0x6e8a,	// (0x0002c600) wml_miniature_view_pane_g2

0x6e93,	// (0x0002c609) wml_miniature_view_pane_g3

0x6e9b,	// (0x0002c611) wml_miniature_view_pane_g4

0x6ea3,	// (0x0002c619) wml_miniature_view_pane_g5

0x6eab,	// (0x0002c621) wml_miniature_view_pane_g6

0x6eb3,	// (0x0002c629) wml_miniature_view_pane_g7

0x6ebb,	// (0x0002c631) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x00034e04) wml_miniature_view_pane_g

0xc03e,	// (0x000317b4) background_graphic_ParamLimits

0xc03e,	// (0x000317b4) background_graphic

0xc04a,	// (0x000317c0) wml_tabs_2_pane

0xc053,	// (0x000317c9) wml_tabs_3_pane_ParamLimits

0xc053,	// (0x000317c9) wml_tabs_3_pane

0xc065,	// (0x000317db) wml_tabs_4_pane_ParamLimits

0xc065,	// (0x000317db) wml_tabs_4_pane

0xc07b,	// (0x000317f1) wml_tabs_5_pane_ParamLimits

0xc07b,	// (0x000317f1) wml_tabs_5_pane

0xc095,	// (0x0003180b) wml_tabs_pane_g2_ParamLimits

0xc095,	// (0x0003180b) wml_tabs_pane_g2

0xc0a9,	// (0x0003181f) wml_tabs_pane_g3_ParamLimits

0xc0a9,	// (0x0003181f) wml_tabs_pane_g3

0x6ec3,	// (0x0002c639) wml_tabs_2_active_pane_ParamLimits

0x6ec3,	// (0x0002c639) wml_tabs_2_active_pane

0x6ed3,	// (0x0002c649) wml_tabs_2_passive_pane_ParamLimits

0x6ed3,	// (0x0002c649) wml_tabs_2_passive_pane

0x6ee3,	// (0x0002c659) wml_tabs_3_active_pane_cp_ParamLimits

0x6ee3,	// (0x0002c659) wml_tabs_3_active_pane_cp

0x6ef4,	// (0x0002c66a) wml_tabs_3_passive_pane_ParamLimits

0x6ef4,	// (0x0002c66a) wml_tabs_3_passive_pane

0x6f05,	// (0x0002c67b) wml_tabs_3_passive_pane_cp_ParamLimits

0x6f05,	// (0x0002c67b) wml_tabs_3_passive_pane_cp

0x6f16,	// (0x0002c68c) tabs_4_active_pane

0x6f1e,	// (0x0002c694) tabs_4_passive_pane

0x6f26,	// (0x0002c69c) tabs_4_passive_pane_cp

0x6f2e,	// (0x0002c6a4) tabs_4_passive_pane_cp2

0x6806,	// (0x0002bf7c) aid_height_text

0x56e3,	// (0x0002ae59) mup_volume_cont_pane_ParamLimits

0x56e3,	// (0x0002ae59) mup_volume_cont_pane

0x2aac,	// (0x00028222) aid_size_cell_pinb

0x2ab6,	// (0x0002822c) aid_size_list_pinb

0x6e30,	// (0x0002c5a6) mup2_volume_cont_pane_ParamLimits

0x6e30,	// (0x0002c5a6) mup2_volume_cont_pane

0xc0bd,	// (0x00031833) mup2_volume_cont_pane_g1_ParamLimits

0xc0bd,	// (0x00031833) mup2_volume_cont_pane_g1

0x0cfb,	// (0x00026471) aid_size_cell_touch_ParamLimits

0x0cfb,	// (0x00026471) aid_size_cell_touch

0x0ec7,	// (0x0002663d) touch_pane_ParamLimits

0x0ec7,	// (0x0002663d) touch_pane

0xb294,	// (0x00030a0a) main_rss2_pane

0xc0ff,	// (0x00031875) listscroll_rss2_pane

0xc108,	// (0x0003187e) rss2_navigation_pane

0xc110,	// (0x00031886) list_rss2_pane

0x500b,	// (0x0002a781) scroll_pane_cp22

0xc118,	// (0x0003188e) rss2_navigation_pane_g1

0xc121,	// (0x00031897) rss2_navigation_pane_g2

0xc129,	// (0x0003189f) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x00034e15) rss2_navigation_pane_g

0xc131,	// (0x000318a7) rss2_navigation_pane_t1

0x6f36,	// (0x0002c6ac) rss2_list_single_pane_ParamLimits

0x6f36,	// (0x0002c6ac) rss2_list_single_pane

0xc13f,	// (0x000318b5) rss2_list_single_pane_t2

0xc14d,	// (0x000318c3) rss2_list_single_pane_t3_ParamLimits

0xc14d,	// (0x000318c3) rss2_list_single_pane_t3

0xc16a,	// (0x000318e0) rss2_list_single_pane_t4

0x48b8,	// (0x0002a02e) smil_status_pane_g1

0xb286,	// (0x000309fc) main_image2_pane_ParamLimits

0xb286,	// (0x000309fc) main_image2_pane

0x161f,	// (0x00026d95) main_camera2_pane_g9_ParamLimits

0x161f,	// (0x00026d95) main_camera2_pane_g9

0x1711,	// (0x00026e87) main_camera2_pane_t5_ParamLimits

0x1711,	// (0x00026e87) main_camera2_pane_t5

0xbfe5,	// (0x0003175b) main_camera2_pane_t6_ParamLimits

0xbfe5,	// (0x0003175b) main_camera2_pane_t6

0x6f49,	// (0x0002c6bf) main_image2_pane_g1_ParamLimits

0x6f49,	// (0x0002c6bf) main_image2_pane_g1

0x5f05,	// (0x0002b67b) smil2_video_pane_ParamLimits

0x5f05,	// (0x0002b67b) smil2_video_pane

0xb236,	// (0x000309ac) aid_zoom_text_primary_cp

0xb27e,	// (0x000309f4) popup_preview_fixed_window

0x3bd4,	// (0x0002934a) im_reading_pane_g1

0x1505,	// (0x00026c7b) cams2_bc_adjust_pane_cp_ParamLimits

0x1505,	// (0x00026c7b) cams2_bc_adjust_pane_cp

0x1737,	// (0x00026ead) cams2_bc_adjust_pane_ParamLimits

0x1737,	// (0x00026ead) cams2_bc_adjust_pane

0xc178,	// (0x000318ee) cams2_bc_adjust_pane_g1

0xc180,	// (0x000318f6) cams2_slider_pane

0xc189,	// (0x000318ff) cams2_slider_pane_g1

0xc192,	// (0x00031908) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x00034e1c) cams2_slider_pane_g

0x0f2d,	// (0x000266a3) calc_display_pane_ParamLimits

0x0f4f,	// (0x000266c5) calc_paper_pane_ParamLimits

0x0f6c,	// (0x000266e2) grid_calc_pane_ParamLimits

0xb3cc,	// (0x00030b42) popup_clock_digital_window_t1_ParamLimits

0x5d9e,	// (0x0002b514) main_image_pane_t1

0x0f0f,	// (0x00026685) aid_size_cell_calc_ParamLimits

0x0f0f,	// (0x00026685) aid_size_cell_calc

0x12a5,	// (0x00026a1b) popup_blid_sat_info2_window_ParamLimits

0x12a5,	// (0x00026a1b) popup_blid_sat_info2_window

0xc1b4,	// (0x0003192a) aid_size_cell_blid

0xc1bc,	// (0x00031932) bg_popup_window_pane_cp07

0xc1df,	// (0x00031955) grid_popup_blid_pane

0xc1e7,	// (0x0003195d) heading_pane_cp05_ParamLimits

0xc1e7,	// (0x0003195d) heading_pane_cp05

0xc2af,	// (0x00031a25) cell_popup_blid_pane_ParamLimits

0xc2af,	// (0x00031a25) cell_popup_blid_pane

0xc2cf,	// (0x00031a45) cell_popup_blid_pane_g1

0xc2d7,	// (0x00031a4d) cell_popup_blid_pane_t1

0x6e05,	// (0x0002c57b) mup2_indicator_pane_ParamLimits

0x6e05,	// (0x0002c57b) mup2_indicator_pane

0x33a7,	// (0x00028b1d) mup2_visualizer_osc_pane

0xc01c,	// (0x00031792) mup2_visualizer_spec_pane_ParamLimits

0xc01c,	// (0x00031792) mup2_visualizer_spec_pane

0x6f5d,	// (0x0002c6d3) mup2_spec_half_pane

0x6f66,	// (0x0002c6dc) mup2_spec_half_pane_cp

0x6f6e,	// (0x0002c6e4) mup2_spec_bar_pane_ParamLimits

0x6f6e,	// (0x0002c6e4) mup2_spec_bar_pane

0xbf70,	// (0x000316e6) mup2_spec_bar_pane_g1

0xbf7a,	// (0x000316f0) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00034d8f) mup2_spec_bar_pane_g

0xbf83,	// (0x000316f9) mup2_osc_middle_pane

0xbf8c,	// (0x00031702) mup2_visualizer_osc_pane_g1

0x2380,	// (0x00027af6) popup_number_entry_window_t1_ParamLimits

0x2393,	// (0x00027b09) popup_number_entry_window_t2_ParamLimits

0x23a5,	// (0x00027b1b) popup_number_entry_window_t3_ParamLimits

0x23b7,	// (0x00027b2d) popup_number_entry_window_t5_ParamLimits

0x23b7,	// (0x00027b2d) popup_number_entry_window_t5

0xf0ca,	// (0x00034840) popup_number_entry_window_t_ParamLimits

0x23eb,	// (0x00027b61) text_title_cp2_ParamLimits

0xb40b,	// (0x00030b81) aid_hotspot_pointer_text2_pane

0xb431,	// (0x00030ba7) main_viewer_pane_g9_ParamLimits

0xb431,	// (0x00030ba7) main_viewer_pane_g9

0x4328,	// (0x00029a9e) cale_month_pane_t1_ParamLimits

0x4922,	// (0x0002a098) bg_cale_pane_ParamLimits

0x493a,	// (0x0002a0b0) list_cale_pane_ParamLimits

0x494b,	// (0x0002a0c1) listscroll_cale_day_pane_t1

0x495d,	// (0x0002a0d3) scroll_pane_cp09_ParamLimits

0x5790,	// (0x0002af06) main_mup_eq_pane_t1_ParamLimits

0x5790,	// (0x0002af06) main_mup_eq_pane_t1

0x57a8,	// (0x0002af1e) main_mup_eq_pane_t2_ParamLimits

0x57a8,	// (0x0002af1e) main_mup_eq_pane_t2

0x57be,	// (0x0002af34) main_mup_eq_pane_t3_ParamLimits

0x57be,	// (0x0002af34) main_mup_eq_pane_t3

0x57d4,	// (0x0002af4a) main_mup_eq_pane_t4_ParamLimits

0x57d4,	// (0x0002af4a) main_mup_eq_pane_t4

0x57ea,	// (0x0002af60) main_mup_eq_pane_t5_ParamLimits

0x57ea,	// (0x0002af60) main_mup_eq_pane_t5

0x5800,	// (0x0002af76) main_mup_eq_pane_t6_ParamLimits

0x5800,	// (0x0002af76) main_mup_eq_pane_t6

0x5812,	// (0x0002af88) main_mup_eq_pane_t7_ParamLimits

0x5812,	// (0x0002af88) main_mup_eq_pane_t7

0x5824,	// (0x0002af9a) main_mup_eq_pane_t8_ParamLimits

0x5824,	// (0x0002af9a) main_mup_eq_pane_t8

0x5836,	// (0x0002afac) main_mup_eq_pane_t9_ParamLimits

0x5836,	// (0x0002afac) main_mup_eq_pane_t9

0x584c,	// (0x0002afc2) main_mup_eq_pane_t10_ParamLimits

0x584c,	// (0x0002afc2) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00034bcb) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00034bcb) main_mup_eq_pane_t

0x58df,	// (0x0002b055) mup_equalizer_pane_cp5_ParamLimits

0x58f1,	// (0x0002b067) mup_equalizer_pane_cp6_ParamLimits

0x5903,	// (0x0002b079) mup_equalizer_pane_cp7_ParamLimits

0xb294,	// (0x00030a0a) main_gallery_pane

0xbf95,	// (0x0003170b) smil2_volume_pane

0xbf9d,	// (0x00031713) smil_status_volume_pane_g1_ParamLimits

0xbfb0,	// (0x00031726) smil_status_volume_pane_g2_ParamLimits

0xbfc3,	// (0x00031739) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x00034d94) smil_status_volume_pane_g_ParamLimits

0xc1bc,	// (0x00031932) bg_popup_window_pane_cp07_ParamLimits

0xc1ca,	// (0x00031940) blid_firmament_pane

0x6f8d,	// (0x0002c703) aid_size_cell_gallery_ParamLimits

0x6f8d,	// (0x0002c703) aid_size_cell_gallery

0x6fa3,	// (0x0002c719) grid_gallery_pane_ParamLimits

0x6fa3,	// (0x0002c719) grid_gallery_pane

0x6fb8,	// (0x0002c72e) cell_gallery_pane_ParamLimits

0x6fb8,	// (0x0002c72e) cell_gallery_pane

0xc2e5,	// (0x00031a5b) bg_cell_gallery_focus_pane_ParamLimits

0xc2e5,	// (0x00031a5b) bg_cell_gallery_focus_pane

0xc2f7,	// (0x00031a6d) cell_gallery_pane_g1_ParamLimits

0xc2f7,	// (0x00031a6d) cell_gallery_pane_g1

0x6ffd,	// (0x0002c773) cell_gallery_pane_g2_ParamLimits

0x6ffd,	// (0x0002c773) cell_gallery_pane_g2

0x700a,	// (0x0002c780) cell_gallery_pane_g3_ParamLimits

0x700a,	// (0x0002c780) cell_gallery_pane_g3

0xc303,	// (0x00031a79) cell_gallery_pane_g4_ParamLimits

0xc303,	// (0x00031a79) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x00034e42) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x00034e42) cell_gallery_pane_g

0xc30f,	// (0x00031a85) bg_cell_gallery_focus_pane_g1

0xc317,	// (0x00031a8d) bg_cell_gallery_focus_pane_g2

0xc31f,	// (0x00031a95) bg_cell_gallery_focus_pane_g3

0xc327,	// (0x00031a9d) bg_cell_gallery_focus_pane_g4

0xc32f,	// (0x00031aa5) bg_cell_gallery_focus_pane_g5

0xc337,	// (0x00031aad) bg_cell_gallery_focus_pane_g6

0xc33f,	// (0x00031ab5) bg_cell_gallery_focus_pane_g7

0xc347,	// (0x00031abd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x00034e4b) bg_cell_gallery_focus_pane_g

0xc34f,	// (0x00031ac5) aid_firma_cardinal

0xc363,	// (0x00031ad9) blid_firmament_pane_t1

0xc37a,	// (0x00031af0) blid_firmament_pane_t2

0xc391,	// (0x00031b07) blid_firmament_pane_t3

0xc3a8,	// (0x00031b1e) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x00034e5c) blid_firmament_pane_t

0xc3bf,	// (0x00031b35) blid_sat_info_pane

0xc3cf,	// (0x00031b45) blid_sat_info_pane_g1

0xc3cf,	// (0x00031b45) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x00034e65) blid_sat_info_pane_g

0xc3d9,	// (0x00031b4f) blid_sat_info_pane_t1

0xc3e7,	// (0x00031b5d) smil2_volume_content_pane

0xc3f0,	// (0x00031b66) smil2_volume_pane_g1

0xc3f8,	// (0x00031b6e) smil2_volume_content_pane_g1

0xc401,	// (0x00031b77) smil2_volume_content_pane_g2

0xc40a,	// (0x00031b80) smil2_volume_content_pane_g3

0xc413,	// (0x00031b89) smil2_volume_content_pane_g4

0xc41c,	// (0x00031b92) smil2_volume_content_pane_g5

0xc425,	// (0x00031b9b) smil2_volume_content_pane_g6

0xc42e,	// (0x00031ba4) smil2_volume_content_pane_g7

0xc437,	// (0x00031bad) smil2_volume_content_pane_g8

0xc440,	// (0x00031bb6) smil2_volume_content_pane_g9

0xc449,	// (0x00031bbf) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x00034e6a) smil2_volume_content_pane_g

0x31d6,	// (0x0002894c) cale_week_day_heading_pane_t1_ParamLimits

0x31fb,	// (0x00028971) cale_week_day_heading_pane_t2_ParamLimits

0x3225,	// (0x0002899b) cale_week_day_heading_pane_t3_ParamLimits

0x324f,	// (0x000289c5) cale_week_day_heading_pane_t4_ParamLimits

0x3279,	// (0x000289ef) cale_week_day_heading_pane_t5_ParamLimits

0x32a3,	// (0x00028a19) cale_week_day_heading_pane_t6_ParamLimits

0x32cd,	// (0x00028a43) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x00034947) cale_week_day_heading_pane_t_ParamLimits

0x32f2,	// (0x00028a68) bg_cale_side_pane_ParamLimits

0x1025,	// (0x0002679b) cale_week_time_pane_t1_ParamLimits

0x105f,	// (0x000267d5) cale_week_time_pane_t2_ParamLimits

0x1099,	// (0x0002680f) cale_week_time_pane_t3_ParamLimits

0x10d3,	// (0x00026849) cale_week_time_pane_t4_ParamLimits

0x110d,	// (0x00026883) cale_week_time_pane_t5_ParamLimits

0x1147,	// (0x000268bd) cale_week_time_pane_t6_ParamLimits

0x1181,	// (0x000268f7) cale_week_time_pane_t7_ParamLimits

0x11bb,	// (0x00026931) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00034956) cale_week_time_pane_t_ParamLimits

0x3300,	// (0x00028a76) cell_cale_week_pane_g2_ParamLimits

0x32f2,	// (0x00028a68) bg_cale_side_pane_cp01_ParamLimits

0x46f3,	// (0x00029e69) cale_month_week_pane_t1_ParamLimits

0x470c,	// (0x00029e82) cale_month_week_pane_t2_ParamLimits

0x4725,	// (0x00029e9b) cale_month_week_pane_t3_ParamLimits

0x473e,	// (0x00029eb4) cale_month_week_pane_t4_ParamLimits

0x4757,	// (0x00029ecd) cale_month_week_pane_t5_ParamLimits

0x4770,	// (0x00029ee6) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x00034a2b) cale_month_week_pane_t_ParamLimits

0xb340,	// (0x00030ab6) cell_cale_month_pane_g1_ParamLimits

0xb294,	// (0x00030a0a) main_cale_event_viewer_pane

0x231d,	// (0x00027a93) listscroll_cale_event_viewer_pane

0xc452,	// (0x00031bc8) list_cale_ev_pane

0xc45a,	// (0x00031bd0) scroll_pane_cp023

0x7017,	// (0x0002c78d) field_cale_ev_pane_ParamLimits

0x7017,	// (0x0002c78d) field_cale_ev_pane

0xc466,	// (0x00031bdc) field_cale_ev_content_pane_ParamLimits

0xc466,	// (0x00031bdc) field_cale_ev_content_pane

0xc472,	// (0x00031be8) field_cale_ev_pane_g1_ParamLimits

0xc472,	// (0x00031be8) field_cale_ev_pane_g1

0xc47e,	// (0x00031bf4) field_cale_ev_pane_g2_ParamLimits

0xc47e,	// (0x00031bf4) field_cale_ev_pane_g2

0xc496,	// (0x00031c0c) field_cale_ev_pane_g3_ParamLimits

0xc496,	// (0x00031c0c) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x00034e7f) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x00034e7f) field_cale_ev_pane_g

0xc4ae,	// (0x00031c24) field_cale_ev_pane_t1_ParamLimits

0xc4ae,	// (0x00031c24) field_cale_ev_pane_t1

0x7031,	// (0x0002c7a7) field_cale_ev_content_pane_t1_ParamLimits

0x7031,	// (0x0002c7a7) field_cale_ev_content_pane_t1

0x59f1,	// (0x0002b167) bg_button_pane_cp01

0x2f04,	// (0x0002867a) listscroll_cale_week_pane_ParamLimits

0x2f14,	// (0x0002868a) popup_toolbar_window_cp01

0x3131,	// (0x000288a7) listscroll_cale_week_pane_t1_ParamLimits

0x2f04,	// (0x0002867a) listscroll_cale_day_pane_ParamLimits

0x2f14,	// (0x0002868a) popup_toolbar_window_cp02

0x494b,	// (0x0002a0c1) listscroll_cale_day_pane_t1_ParamLimits

0x126d,	// (0x000269e3) main_cale_month_pane_ParamLimits

0xbf0e,	// (0x00031684) popup_toolbar_window_cp03_ParamLimits

0xbf0e,	// (0x00031684) popup_toolbar_window_cp03

0x5d7c,	// (0x0002b4f2) main_image_pane_g2_ParamLimits

0x5d7c,	// (0x0002b4f2) main_image_pane_g2

0x5d8d,	// (0x0002b503) main_image_pane_g3_ParamLimits

0x5d8d,	// (0x0002b503) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00034c5d) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00034c5d) main_image_pane_g

0x5d9e,	// (0x0002b514) main_image_pane_t1_ParamLimits

0x5db5,	// (0x0002b52b) main_image_pane_t2_ParamLimits

0x5db5,	// (0x0002b52b) main_image_pane_t2

0x5dc7,	// (0x0002b53d) main_image_pane_t3_ParamLimits

0x5dc7,	// (0x0002b53d) main_image_pane_t3

0x5def,	// (0x0002b565) main_image_pane_t4_ParamLimits

0x5def,	// (0x0002b565) main_image_pane_t4

0x0003,

0xf4ee,	// (0x00034c64) main_image_pane_t_ParamLimits

0xf4ee,	// (0x00034c64) main_image_pane_t

0x5e0f,	// (0x0002b585) popup_image_details_window_cp01

0x5e17,	// (0x0002b58d) popup_toobar_trans_pane_cp01_ParamLimits

0x5e17,	// (0x0002b58d) popup_toobar_trans_pane_cp01

0x1376,	// (0x00026aec) popup_image_details_window_ParamLimits

0x1376,	// (0x00026aec) popup_image_details_window

0xbee3,	// (0x00031659) popup_image_focus_window

0x14d3,	// (0x00026c49) camera2_autofocus_pane_ParamLimits

0x14d3,	// (0x00026c49) camera2_autofocus_pane

0x231d,	// (0x00027a93) bg_popup_sub_pane_cp06

0xc4c5,	// (0x00031c3b) popup_image_focus_window_g1

0xc4cd,	// (0x00031c43) popup_image_focus_window_g2

0xc4d5,	// (0x00031c4b) popup_image_focus_window_g3

0xc4dd,	// (0x00031c53) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x00034e86) popup_image_focus_window_g

0xc4e5,	// (0x00031c5b) popup_image_focus_window_t1

0xc4f3,	// (0x00031c69) popup_image_focus_window_t2

0xc502,	// (0x00031c78) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x00034e8f) popup_image_focus_window_t

0xc510,	// (0x00031c86) camera2_autofocus_pane_g1

0x6a87,	// (0x0002c1fd) bg_tb_trans_pane_cp01

0xc51e,	// (0x00031c94) popup_image_details_window_g1

0xc531,	// (0x00031ca7) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x00034ea1) popup_image_details_window_g

0xc55a,	// (0x00031cd0) popup_image_details_window_t1

0xc56c,	// (0x00031ce2) popup_image_details_window_t2

0xc585,	// (0x00031cfb) popup_image_details_window_t3

0xc599,	// (0x00031d0f) popup_image_details_window_t4

0xc5b4,	// (0x00031d2a) popup_image_details_window_t5

0x0004,

0xf732,	// (0x00034ea8) popup_image_details_window_t

0x2cc3,	// (0x00028439) bg_calc_paper_pane_ParamLimits

0xb294,	// (0x00030a0a) grid_highlight_pane_cp013

0xb2a6,	// (0x00030a1c) list_calc_pane_ParamLimits

0xb2b8,	// (0x00030a2e) scroll_pane_cp024

0x2cd7,	// (0x0002844d) bg_calc_display_pane_ParamLimits

0x0f8e,	// (0x00026704) calc_display_pane_t1_ParamLimits

0x0fa0,	// (0x00026716) calc_display_pane_t2_ParamLimits

0xb2c0,	// (0x00030a36) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000348c7) calc_display_pane_t_ParamLimits

0x0ffb,	// (0x00026771) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000348e4) cell_calc_pane_g

0x1004,	// (0x0002677a) cell_calc_pane_t1

0x2d85,	// (0x000284fb) grid_highlight_pane_cp02_ParamLimits

0x2d9b,	// (0x00028511) toolbar_button_pane_cp01_ParamLimits

0x2d9b,	// (0x00028511) toolbar_button_pane_cp01

0x5e59,	// (0x0002b5cf) temp_image_control_pane_ParamLimits

0x5e59,	// (0x0002b5cf) temp_image_control_pane

0xb286,	// (0x000309fc) main_mp3_pane

0xc5ce,	// (0x00031d44) temp_image_control_pane_g1_ParamLimits

0xc5ce,	// (0x00031d44) temp_image_control_pane_g1

0xc5dc,	// (0x00031d52) temp_image_control_pane_g2_ParamLimits

0xc5dc,	// (0x00031d52) temp_image_control_pane_g2

0xc5ee,	// (0x00031d64) temp_image_control_pane_g3_ParamLimits

0xc5ee,	// (0x00031d64) temp_image_control_pane_g3

0x707e,	// (0x0002c7f4) temp_image_control_pane_g4_ParamLimits

0x707e,	// (0x0002c7f4) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x00034eb3) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x00034eb3) temp_image_control_pane_g

0xc5ce,	// (0x00031d44) main_mp3_pane_g1

0x708f,	// (0x0002c805) main_mp3_pane_g2

0x0007,

0xf746,	// (0x00034ebc) main_mp3_pane_g

0xc631,	// (0x00031da7) main_mp3_pane_t1

0x34b7,	// (0x00028c2d) main_camera_pane_g8_ParamLimits

0x34b7,	// (0x00028c2d) main_camera_pane_g8

0x3650,	// (0x00028dc6) main_video_pane_g7_ParamLimits

0x3650,	// (0x00028dc6) main_video_pane_g7

0xbffe,	// (0x00031774) main_camera2_pane_t7_ParamLimits

0xbffe,	// (0x00031774) main_camera2_pane_t7

0x3c98,	// (0x0002940e) scroll_pane_cp025_ParamLimits

0x3c98,	// (0x0002940e) scroll_pane_cp025

0x3cac,	// (0x00029422) scroll_pane_cp026_ParamLimits

0x3cac,	// (0x00029422) scroll_pane_cp026

0x3cbb,	// (0x00029431) wml_content_pane_ParamLimits

0xb294,	// (0x00030a0a) main_touch_calib_pane

0x7151,	// (0x0002c8c7) main_touch_calib_pane_g1

0x7163,	// (0x0002c8d9) main_touch_calib_pane_g2

0x7175,	// (0x0002c8eb) main_touch_calib_pane_g3

0x7187,	// (0x0002c8fd) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x00034eda) main_touch_calib_pane_g

0x7199,	// (0x0002c90f) main_touch_calib_pane_t1

0x71b1,	// (0x0002c927) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x00034ee3) main_touch_calib_pane_t

0x52a8,	// (0x0002aa1e) mup_progress_pane_cp02

0x52dd,	// (0x0002aa53) navi_pane_g1

0x5396,	// (0x0002ab0c) navi_pane_mp_t3

0xb286,	// (0x000309fc) main_mp3_pane_ParamLimits

0x6a95,	// (0x0002c20b) navi_pane_ParamLimits

0xc5ce,	// (0x00031d44) main_mp3_pane_g1_ParamLimits

0x708f,	// (0x0002c805) main_mp3_pane_g2_ParamLimits

0x709b,	// (0x0002c811) main_mp3_pane_g3_ParamLimits

0x709b,	// (0x0002c811) main_mp3_pane_g3

0x70a7,	// (0x0002c81d) main_mp3_pane_g4_ParamLimits

0x70a7,	// (0x0002c81d) main_mp3_pane_g4

0xc5fe,	// (0x00031d74) main_mp3_pane_g5_ParamLimits

0xc5fe,	// (0x00031d74) main_mp3_pane_g5

0xc60c,	// (0x00031d82) main_mp3_pane_g6_ParamLimits

0xc60c,	// (0x00031d82) main_mp3_pane_g6

0xc619,	// (0x00031d8f) main_mp3_pane_g7_ParamLimits

0xc619,	// (0x00031d8f) main_mp3_pane_g7

0xc625,	// (0x00031d9b) main_mp3_pane_g8_ParamLimits

0xc625,	// (0x00031d9b) main_mp3_pane_g8

0xf746,	// (0x00034ebc) main_mp3_pane_g_ParamLimits

0x70b3,	// (0x0002c829) main_mp3_pane_t2

0x70c1,	// (0x0002c837) main_mp3_pane_t3

0xc63f,	// (0x00031db5) main_mp3_pane_t4

0xc64d,	// (0x00031dc3) main_mp3_pane_t5

0x0005,

0xf757,	// (0x00034ecd) main_mp3_pane_t

0xc65b,	// (0x00031dd1) mup_progress_pane_cp01

0xb236,	// (0x000309ac) aid_zoom_text_secondary2

0xc452,	// (0x00031bc8) list_cale_ev2_pane

0xc45a,	// (0x00031bd0) scroll_pane_cp023_ParamLimits

0x71ff,	// (0x0002c975) field_cale_ev2_pane_ParamLimits

0x71ff,	// (0x0002c975) field_cale_ev2_pane

0x7217,	// (0x0002c98d) field_cale_ev2_pane_g1_ParamLimits

0x7217,	// (0x0002c98d) field_cale_ev2_pane_g1

0x7223,	// (0x0002c999) field_cale_ev2_pane_g2_ParamLimits

0x7223,	// (0x0002c999) field_cale_ev2_pane_g2

0x723b,	// (0x0002c9b1) field_cale_ev2_pane_g3_ParamLimits

0x723b,	// (0x0002c9b1) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x00034eee) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x00034eee) field_cale_ev2_pane_g

0x7253,	// (0x0002c9c9) field_cale_ev2_pane_t1_ParamLimits

0x7253,	// (0x0002c9c9) field_cale_ev2_pane_t1

0x726a,	// (0x0002c9e0) field_cale_ev2_pane_t2_ParamLimits

0x726a,	// (0x0002c9e0) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x00034ef7) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x00034ef7) field_cale_ev2_pane_t

0x5b59,	// (0x0002b2cf) main_postcard_pane_g5_ParamLimits

0x5b59,	// (0x0002b2cf) main_postcard_pane_g5

0x5b6d,	// (0x0002b2e3) main_postcard_pane_g6_ParamLimits

0x5b6d,	// (0x0002b2e3) main_postcard_pane_g6

0x3410,	// (0x00028b86) camera2_autofocus_pane_cp_ParamLimits

0x3410,	// (0x00028b86) camera2_autofocus_pane_cp

0xb286,	// (0x000309fc) main_mup3_pane

0x729f,	// (0x0002ca15) main_mup3_pane_g1_ParamLimits

0x729f,	// (0x0002ca15) main_mup3_pane_g1

0x72c1,	// (0x0002ca37) main_mup3_pane_g2_ParamLimits

0x72c1,	// (0x0002ca37) main_mup3_pane_g2

0x7334,	// (0x0002caaa) main_mup3_pane_g3_ParamLimits

0x7334,	// (0x0002caaa) main_mup3_pane_g3

0x7372,	// (0x0002cae8) main_mup3_pane_g4_ParamLimits

0x7372,	// (0x0002cae8) main_mup3_pane_g4

0x73b0,	// (0x0002cb26) main_mup3_pane_g5_ParamLimits

0x73b0,	// (0x0002cb26) main_mup3_pane_g5

0x73ee,	// (0x0002cb64) main_mup3_pane_g6_ParamLimits

0x73ee,	// (0x0002cb64) main_mup3_pane_g6

0xc66f,	// (0x00031de5) main_mup3_pane_g7_ParamLimits

0xc66f,	// (0x00031de5) main_mup3_pane_g7

0x0007,

0xf791,	// (0x00034f07) main_mup3_pane_g_ParamLimits

0xf791,	// (0x00034f07) main_mup3_pane_g

0x7462,	// (0x0002cbd8) main_mup3_pane_t1_ParamLimits

0x7462,	// (0x0002cbd8) main_mup3_pane_t1

0x74c8,	// (0x0002cc3e) main_mup3_pane_t2_ParamLimits

0x74c8,	// (0x0002cc3e) main_mup3_pane_t2

0x758e,	// (0x0002cd04) main_mup3_pane_t4_ParamLimits

0x758e,	// (0x0002cd04) main_mup3_pane_t4

0x75dc,	// (0x0002cd52) main_mup3_pane_t5_ParamLimits

0x75dc,	// (0x0002cd52) main_mup3_pane_t5

0x768a,	// (0x0002ce00) main_mup3_pane_t6_ParamLimits

0x768a,	// (0x0002ce00) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x00034f18) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x00034f18) main_mup3_pane_t

0x773e,	// (0x0002ceb4) mup3_progress_pane_ParamLimits

0x773e,	// (0x0002ceb4) mup3_progress_pane

0x77ba,	// (0x0002cf30) popup_mup3_control_window_ParamLimits

0x77ba,	// (0x0002cf30) popup_mup3_control_window

0xc67d,	// (0x00031df3) popup_mup3_text_window

0x77e8,	// (0x0002cf5e) mup3_progress_pane_t1

0x7806,	// (0x0002cf7c) mup3_progress_pane_t2

0xc685,	// (0x00031dfb) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x00034f25) mup3_progress_pane_t

0xc6a2,	// (0x00031e18) mup_progress_pane_cp03

0x231d,	// (0x00027a93) bg_tb_trans_pane_cp04

0x7824,	// (0x0002cf9a) mup3_volume_pane

0x782c,	// (0x0002cfa2) popup_mup3_control_window_g1

0xc6b2,	// (0x00031e28) mup3_volume_pane_g1

0xc6bb,	// (0x00031e31) mup3_volume_pane_g2

0xc6c4,	// (0x00031e3a) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x00034f2c) mup3_volume_pane_g

0x231d,	// (0x00027a93) bg_tb_trans_pane_cp03

0xc6cd,	// (0x00031e43) popup_mup3_text_window_g1

0xc6d5,	// (0x00031e4b) popup_mup3_text_window_t1

0x2d6e,	// (0x000284e4) list_calc_item_pane_g1_ParamLimits

0xc0e6,	// (0x0003185c) mup_volume_pane_cp_g1

0x71c9,	// (0x0002c93f) main_touch_calib_pane_t3

0x71db,	// (0x0002c951) main_touch_calib_pane_t4

0x71ed,	// (0x0002c963) main_touch_calib_pane_t5

0xb226,	// (0x0003099c) aid_cell_size_toolbar2

0xb22e,	// (0x000309a4) aid_popup3_width_pane

0xb236,	// (0x000309ac) aid_zoom_text_msg_primary

0x33ef,	// (0x00028b65) vorec_t7

0x2ce3,	// (0x00028459) bg_calc_paper_pane_g1_ParamLimits

0x2cef,	// (0x00028465) bg_calc_paper_pane_g2_ParamLimits

0x2cfb,	// (0x00028471) bg_calc_paper_pane_g3_ParamLimits

0x2d07,	// (0x0002847d) bg_calc_paper_pane_g4_ParamLimits

0x2d13,	// (0x00028489) bg_calc_paper_pane_g5_ParamLimits

0x2d1f,	// (0x00028495) bg_calc_paper_pane_g6_ParamLimits

0x2d2e,	// (0x000284a4) bg_calc_paper_pane_g7_ParamLimits

0x2d3d,	// (0x000284b3) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000348ce) bg_calc_paper_pane_g_ParamLimits

0x2d4c,	// (0x000284c2) calc_bg_paper_pane_g9_ParamLimits

0x354e,	// (0x00028cc4) image_qvga_pane_ParamLimits

0x354e,	// (0x00028cc4) image_qvga_pane

0x2a24,	// (0x0002819a) bg_popup_sub_pane_cp04_ParamLimits

0x5cda,	// (0x0002b450) popup_mup_playback_window_g1_ParamLimits

0x5ce6,	// (0x0002b45c) popup_mup_playback_window_t1_ParamLimits

0x5cfb,	// (0x0002b471) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00034c58) popup_mup_playback_window_t_ParamLimits

0x6d25,	// (0x0002c49b) main_mup2_pane_g3_ParamLimits

0x6d25,	// (0x0002c49b) main_mup2_pane_g3

0x39c0,	// (0x00029136) popup_toolbar_window_cp04

0x6447,	// (0x0002bbbd) popup_call2_audio_second_window_g3_ParamLimits

0x6447,	// (0x0002bbbd) popup_call2_audio_second_window_g3

0xb4a1,	// (0x00030c17) popup_call2_audio_first_window_g4_ParamLimits

0xb4a1,	// (0x00030c17) popup_call2_audio_first_window_g4

0xbb20,	// (0x00031296) popup_call2_audio_in_window_g4_ParamLimits

0xbb20,	// (0x00031296) popup_call2_audio_in_window_g4

0x5d10,	// (0x0002b486) aid_area_sk_bg_cut_ParamLimits

0x5d10,	// (0x0002b486) aid_area_sk_bg_cut

0x5d2e,	// (0x0002b4a4) aid_area_sk_bg_cut_2_ParamLimits

0x5d2e,	// (0x0002b4a4) aid_area_sk_bg_cut_2

0x6fed,	// (0x0002c763) aid_placing_details_win

0x6ff5,	// (0x0002c76b) aid_placing_details_win_2

0xc510,	// (0x00031c86) camera2_autofocus_pane_g1_ParamLimits

0x0e6c,	// (0x000265e2) popup_fixed_preview_cale_window_ParamLimits

0x0e6c,	// (0x000265e2) popup_fixed_preview_cale_window

0x5456,	// (0x0002abcc) navi_slider_pane_g3

0x545f,	// (0x0002abd5) navi_slider_pane_g4

0x5468,	// (0x0002abde) navi_slider_pane_g5

0x5456,	// (0x0002abcc) navi_slider_pane_g6

0xb3f2,	// (0x00030b68) navi_slider_pane_g7

0x5920,	// (0x0002b096) mup_scale_pane_g3

0x5929,	// (0x0002b09f) mup_scale_pane_g4

0x5932,	// (0x0002b0a8) mup_scale_pane_g5

0x593b,	// (0x0002b0b1) mup_scale_pane_g6

0x5944,	// (0x0002b0ba) mup_scale_pane_g7

0x5456,	// (0x0002abcc) cams2_slider_pane_g3

0xc19b,	// (0x00031911) cams2_slider_pane_g4

0xc1a3,	// (0x00031919) cams2_slider_pane_g5

0x5456,	// (0x0002abcc) cams2_slider_pane_g6

0xc1ab,	// (0x00031921) cams2_slider_pane_g7

0xc3cf,	// (0x00031b45) camera2_autofocus_pane_cp_g1

0xbec1,	// (0x00031637) bg_popup_preview_window_pane_cp02_ParamLimits

0xbec1,	// (0x00031637) bg_popup_preview_window_pane_cp02

0xc6e3,	// (0x00031e59) list_fp_cale_pane_ParamLimits

0xc6e3,	// (0x00031e59) list_fp_cale_pane

0xc6ef,	// (0x00031e65) popup_fixed_preview_cale_window_t1_ParamLimits

0xc6ef,	// (0x00031e65) popup_fixed_preview_cale_window_t1

0x7835,	// (0x0002cfab) popup_fixed_preview_cale_window_t2_ParamLimits

0x7835,	// (0x0002cfab) popup_fixed_preview_cale_window_t2

0x784a,	// (0x0002cfc0) popup_fixed_preview_cale_window_t3_ParamLimits

0x784a,	// (0x0002cfc0) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x00034f33) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x00034f33) popup_fixed_preview_cale_window_t

0x785f,	// (0x0002cfd5) list_single_fp_cale_pane_ParamLimits

0x785f,	// (0x0002cfd5) list_single_fp_cale_pane

0xc70d,	// (0x00031e83) list_single_fp_cale_pane_g1_ParamLimits

0xc70d,	// (0x00031e83) list_single_fp_cale_pane_g1

0xc719,	// (0x00031e8f) list_single_fp_cale_pane_g2_ParamLimits

0xc719,	// (0x00031e8f) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x00034f3a) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x00034f3a) list_single_fp_cale_pane_g

0xc732,	// (0x00031ea8) list_single_fp_cale_pane_t1_ParamLimits

0xc732,	// (0x00031ea8) list_single_fp_cale_pane_t1

0xc744,	// (0x00031eba) list_single_fp_cale_pane_t2_ParamLimits

0xc744,	// (0x00031eba) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x00034f41) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x00034f41) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb294,	// (0x00030a0a) main_dialer_pane

0x7872,	// (0x0002cfe8) aid_cell_size_keypad

0x787c,	// (0x0002cff2) dialer_ne_pane

0x7884,	// (0x0002cffa) grid_dialer_command_1_pane

0x788c,	// (0x0002d002) grid_dialer_command_2_pane

0x7894,	// (0x0002d00a) grid_dialer_keypad_pane

0x78a4,	// (0x0002d01a) bg_popup_call_pane_cp06_ParamLimits

0x78a4,	// (0x0002d01a) bg_popup_call_pane_cp06

0x78b0,	// (0x0002d026) dialer_ne_clear_pane_ParamLimits

0x78b0,	// (0x0002d026) dialer_ne_clear_pane

0xc777,	// (0x00031eed) dialer_ne_pane_g1

0xc77f,	// (0x00031ef5) dialer_ne_pane_t1_ParamLimits

0xc77f,	// (0x00031ef5) dialer_ne_pane_t1

0x78bc,	// (0x0002d032) dialer_ne_pane_t2_ParamLimits

0x78bc,	// (0x0002d032) dialer_ne_pane_t2

0x78e6,	// (0x0002d05c) dialer_ne_pane_t3_ParamLimits

0x78e6,	// (0x0002d05c) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x00034f46) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x00034f46) dialer_ne_pane_t

0x7916,	// (0x0002d08c) dialer_ne_pane_t3_copy1_ParamLimits

0x7916,	// (0x0002d08c) dialer_ne_pane_t3_copy1

0x7945,	// (0x0002d0bb) cell_dialer_keypad_pane_ParamLimits

0x7945,	// (0x0002d0bb) cell_dialer_keypad_pane

0x795a,	// (0x0002d0d0) cell_dialer_command_1_pane_ParamLimits

0x795a,	// (0x0002d0d0) cell_dialer_command_1_pane

0x7970,	// (0x0002d0e6) cell_dialer_command_2_pane_ParamLimits

0x7970,	// (0x0002d0e6) cell_dialer_command_2_pane

0xc791,	// (0x00031f07) bg_button_pane_cp02_ParamLimits

0xc791,	// (0x00031f07) bg_button_pane_cp02

0x797f,	// (0x0002d0f5) cell_dialer_keypad_pane_g1_ParamLimits

0x797f,	// (0x0002d0f5) cell_dialer_keypad_pane_g1

0xc791,	// (0x00031f07) bg_button_pane_cp03_ParamLimits

0xc791,	// (0x00031f07) bg_button_pane_cp03

0x7994,	// (0x0002d10a) cell_dialer_command_1_pane_g1_ParamLimits

0x7994,	// (0x0002d10a) cell_dialer_command_1_pane_g1

0xc79d,	// (0x00031f13) bg_button_pane_cp04

0x79a7,	// (0x0002d11d) cell_dialer_command_2_pane_g1

0x33a7,	// (0x00028b1d) bg_button_pane_cp06

0xc7a5,	// (0x00031f1b) dialer_ne_clear_pane_g1

0x52e9,	// (0x0002aa5f) navi_pane_g2

0x5317,	// (0x0002aa8d) navi_pane_g3

0x0002,

0xf3e5,	// (0x00034b5b) navi_pane_g

0x53a4,	// (0x0002ab1a) navi_pane_mv_g2

0x53cb,	// (0x0002ab41) navi_pane_mv_g5

0x53d3,	// (0x0002ab49) navi_pane_mv_t1

0x2cd7,	// (0x0002844d) main_clock2_pane

0x79ec,	// (0x0002d162) main_clock2_list_pane_ParamLimits

0x79ec,	// (0x0002d162) main_clock2_list_pane

0x7a1e,	// (0x0002d194) main_clock2_pane_t1_ParamLimits

0x7a1e,	// (0x0002d194) main_clock2_pane_t1

0x7a58,	// (0x0002d1ce) main_clock2_pane_t2_ParamLimits

0x7a58,	// (0x0002d1ce) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x00034f52) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x00034f52) main_clock2_pane_t

0x7aec,	// (0x0002d262) popup_clock_analogue_window_cp03_ParamLimits

0x7aec,	// (0x0002d262) popup_clock_analogue_window_cp03

0x7b10,	// (0x0002d286) popup_clock_digital_window_cp02_ParamLimits

0x7b10,	// (0x0002d286) popup_clock_digital_window_cp02

0x7b81,	// (0x0002d2f7) main_clock2_list_single_pane_ParamLimits

0x7b81,	// (0x0002d2f7) main_clock2_list_single_pane

0x33a7,	// (0x00028b1d) list_highlight_pane_cp05

0xc7dd,	// (0x00031f53) main_clock2_list_single_pane_t1

0x39c0,	// (0x00029136) popup_toolbar_window_cp04_ParamLimits

0x704e,	// (0x0002c7c4) camera2_autofocus_pane_g2_ParamLimits

0x704e,	// (0x0002c7c4) camera2_autofocus_pane_g2

0x705a,	// (0x0002c7d0) camera2_autofocus_pane_g3_ParamLimits

0x705a,	// (0x0002c7d0) camera2_autofocus_pane_g3

0x7066,	// (0x0002c7dc) camera2_autofocus_pane_g4_ParamLimits

0x7066,	// (0x0002c7dc) camera2_autofocus_pane_g4

0x7072,	// (0x0002c7e8) camera2_autofocus_pane_g5_ParamLimits

0x7072,	// (0x0002c7e8) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x00034e96) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x00034e96) camera2_autofocus_pane_g

0x727f,	// (0x0002c9f5) camera2_autofocus_pane_cp_g2

0x7287,	// (0x0002c9fd) camera2_autofocus_pane_cp_g3

0x728f,	// (0x0002ca05) camera2_autofocus_pane_cp_g4

0x7297,	// (0x0002ca0d) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x00034efc) camera2_autofocus_pane_cp_g

0x789c,	// (0x0002d012) popup_dialer_spcha_window

0x231d,	// (0x00027a93) bg_popup_sub_pane_cp07

0xc7eb,	// (0x00031f61) list_spcha_pane

0xc7f3,	// (0x00031f69) list_single_spcha_pane_ParamLimits

0xc7f3,	// (0x00031f69) list_single_spcha_pane

0x231d,	// (0x00027a93) list_highlight_pane_cp06

0xc804,	// (0x00031f7a) list_single_spcha_pane_t1

0xb8ca,	// (0x00031040) popup_call2_audio_out_window_g4_ParamLimits

0xb8ca,	// (0x00031040) popup_call2_audio_out_window_g4

0xb294,	// (0x00030a0a) main_imed2_pane

0xbeeb,	// (0x00031661) popup_imed_adjust2_window

0x138c,	// (0x00026b02) popup_imed_trans_window_ParamLimits

0x138c,	// (0x00026b02) popup_imed_trans_window

0xc213,	// (0x00031989) popup_blid_sat_info2_window_t1

0xc221,	// (0x00031997) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x00034e2b) popup_blid_sat_info2_window_t

0x7b93,	// (0x0002d309) aid_size_cell_colour_35

0x7bb3,	// (0x0002d329) aid_size_cell_colour_112

0x7bd3,	// (0x0002d349) aid_size_cell_effect

0xbecd,	// (0x00031643) bg_tb_trans_pane_cp02

0x4a93,	// (0x0002a209) heading_imed_pane

0x7bf2,	// (0x0002d368) listscroll_imed_pane

0xc812,	// (0x00031f88) heading_imed_pane_g1

0xc81a,	// (0x00031f90) heading_imed_pane_t1

0xc828,	// (0x00031f9e) grid_imed_colour_35_pane_ParamLimits

0xc828,	// (0x00031f9e) grid_imed_colour_35_pane

0x7bfe,	// (0x0002d374) grid_imed_effect_pane

0xc83b,	// (0x00031fb1) list_imed_aspect_pane

0x7c13,	// (0x0002d389) scroll_pane_cp027_ParamLimits

0x7c13,	// (0x0002d389) scroll_pane_cp027

0x7c24,	// (0x0002d39a) cell_imed_effect_pane_ParamLimits

0x7c24,	// (0x0002d39a) cell_imed_effect_pane

0xc843,	// (0x00031fb9) cell_imed_colour_pane_ParamLimits

0xc843,	// (0x00031fb9) cell_imed_colour_pane

0xc87d,	// (0x00031ff3) cell_imed_colour_pane_g1_ParamLimits

0xc87d,	// (0x00031ff3) cell_imed_colour_pane_g1

0xc88e,	// (0x00032004) hgihlgiht_grid_pane_cp016_ParamLimits

0xc88e,	// (0x00032004) hgihlgiht_grid_pane_cp016

0x7c49,	// (0x0002d3bf) cell_imed_effect_pane_g1

0x7c51,	// (0x0002d3c7) grid_highlight_pane_cp017

0xc89e,	// (0x00032014) list_imed_single_pane_ParamLimits

0xc89e,	// (0x00032014) list_imed_single_pane

0x231d,	// (0x00027a93) list_highlight_pane_cp07

0xc8b1,	// (0x00032027) list_imed_aspect_pane_comp1_t1

0xbecd,	// (0x00031643) bg_tb_trans_pane_cp05

0xc8d1,	// (0x00032047) popup_imed_adjust2_window_g1

0xc8f8,	// (0x0003206e) popup_imed_adjust2_window_t1

0xc910,	// (0x00032086) slider_imed_adjust_pane

0xc924,	// (0x0003209a) slider_imed_adjust_pane_g1

0xc934,	// (0x000320aa) slider_imed_adjust_pane_g2

0xc944,	// (0x000320ba) slider_imed_adjust_pane_g3

0xc955,	// (0x000320cb) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x00034f6f) slider_imed_adjust_pane_g

0x7c5a,	// (0x0002d3d0) aid_size_cell_clipart2

0x7c65,	// (0x0002d3db) grid_imed_clipart_pane

0xc966,	// (0x000320dc) scroll_pane_cp031

0x7c6f,	// (0x0002d3e5) cell_imed_clipart_pane_ParamLimits

0x7c6f,	// (0x0002d3e5) cell_imed_clipart_pane

0x7c84,	// (0x0002d3fa) cell_imed_clipart_pane_g1

0x231d,	// (0x00027a93) grid_highlight_pane_cp014

0x79ff,	// (0x0002d175) main_clock2_pane_g1_ParamLimits

0x79ff,	// (0x0002d175) main_clock2_pane_g1

0x7b2c,	// (0x0002d2a2) aid_call2_pane_cp10

0x7b3e,	// (0x0002d2b4) aid_call_pane_cp10

0x51e5,	// (0x0002a95b) popup_clock_analogue_window_cp10_g1

0x51e5,	// (0x0002a95b) popup_clock_analogue_window_cp10_g2

0x7b50,	// (0x0002d2c6) popup_clock_analogue_window_cp10_g3

0x7b50,	// (0x0002d2c6) popup_clock_analogue_window_cp10_g4

0x51e5,	// (0x0002a95b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x00034f5d) popup_clock_analogue_window_cp10_g

0x7b62,	// (0x0002d2d8) popup_clock_analogue_window_cp10_t1

0x18ce,	// (0x00027044) clock_digital_number_pane_cp10_ParamLimits

0x18ce,	// (0x00027044) clock_digital_number_pane_cp10

0x18e6,	// (0x0002705c) clock_digital_number_pane_cp11_ParamLimits

0x18e6,	// (0x0002705c) clock_digital_number_pane_cp11

0x18fe,	// (0x00027074) clock_digital_number_pane_cp12_ParamLimits

0x18fe,	// (0x00027074) clock_digital_number_pane_cp12

0x1916,	// (0x0002708c) clock_digital_number_pane_cp13_ParamLimits

0x1916,	// (0x0002708c) clock_digital_number_pane_cp13

0x192e,	// (0x000270a4) clock_digital_separator_pane_cp10_ParamLimits

0x192e,	// (0x000270a4) clock_digital_separator_pane_cp10

0x1946,	// (0x000270bc) popup_clock_digital_window_cp02_t1_ParamLimits

0x1946,	// (0x000270bc) popup_clock_digital_window_cp02_t1

0x2a1c,	// (0x00028192) clock_digital_number_pane_cp10_g1

0x2a1c,	// (0x00028192) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x00034f78) clock_digital_number_pane_cp10_g

0x2a1c,	// (0x00028192) clock_digital_separator_pane_cp10_g1

0x2a1c,	// (0x00028192) clock_digital_separator_pane_g2_cp10

0x5415,	// (0x0002ab8b) navi_pane_vded_g4

0x541e,	// (0x0002ab94) navi_pane_vded_g5

0x5427,	// (0x0002ab9d) navi_pane_vded_t1

0xb294,	// (0x00030a0a) main_vded_pane

0x7c8d,	// (0x0002d403) main_vded_pane_g1

0x7c95,	// (0x0002d40b) main_vded_pane_g2

0x7c9d,	// (0x0002d413) main_vded_pane_g3

0x0002,

0xf807,	// (0x00034f7d) main_vded_pane_g

0x7ca5,	// (0x0002d41b) main_vded_pane_t1

0x7cb3,	// (0x0002d429) main_vded_pane_t2

0x0001,

0xf80e,	// (0x00034f84) main_vded_pane_t

0x7cc1,	// (0x0002d437) vded_slider_pane

0x7cc9,	// (0x0002d43f) vded_video_pane

0xc96e,	// (0x000320e4) vded_video_pane_g1

0x7cd1,	// (0x0002d447) vded_video_pane_g2

0xc3cf,	// (0x00031b45) vded_video_pane_g3

0x0002,

0xf813,	// (0x00034f89) vded_video_pane_g

0xc978,	// (0x000320ee) vded_slider_pane_g1

0xc0e6,	// (0x0003185c) vded_slider_pane_g2

0xc981,	// (0x000320f7) vded_slider_pane_g3

0xc98a,	// (0x00032100) vded_slider_pane_g4

0xc993,	// (0x00032109) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x00034f90) vded_slider_pane_g

0x77a4,	// (0x0002cf1a) mup3_rocker_pane_ParamLimits

0x77a4,	// (0x0002cf1a) mup3_rocker_pane

0x7cda,	// (0x0002d450) mup3_control_keys_pane_g1

0x7ce2,	// (0x0002d458) mup3_control_keys_pane_g2

0x7cea,	// (0x0002d460) mup3_control_keys_pane_g3

0x7cf2,	// (0x0002d468) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x00034f9b) mup3_control_keys_pane_g

0x0ea3,	// (0x00026619) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ea3,	// (0x00026619) popup_toolbar2_fixed_window_cp01

0x77d2,	// (0x0002cf48) popup_toolbar2_fixed_window_cp02_ParamLimits

0x77d2,	// (0x0002cf48) popup_toolbar2_fixed_window_cp02

0x65b9,	// (0x0002bd2f) popup_call2_audio_second_window_t4_ParamLimits

0x65b9,	// (0x0002bd2f) popup_call2_audio_second_window_t4

0xb737,	// (0x00030ead) popup_call2_audio_first_window_t6_ParamLimits

0xb737,	// (0x00030ead) popup_call2_audio_first_window_t6

0xb9cd,	// (0x00031143) popup_call2_audio_out_window_t6_ParamLimits

0xb9cd,	// (0x00031143) popup_call2_audio_out_window_t6

0xb294,	// (0x00030a0a) main_vitu_pane

0x7d02,	// (0x0002d478) aid_size_cell_itu_ParamLimits

0x7d02,	// (0x0002d478) aid_size_cell_itu

0x6a87,	// (0x0002c1fd) bg_popup_window_pane_cp08_ParamLimits

0x6a87,	// (0x0002c1fd) bg_popup_window_pane_cp08

0x7d18,	// (0x0002d48e) field_vitu_entry_pane_ParamLimits

0x7d18,	// (0x0002d48e) field_vitu_entry_pane

0x7d2b,	// (0x0002d4a1) grid_vitu_function_pane_ParamLimits

0x7d2b,	// (0x0002d4a1) grid_vitu_function_pane

0x7d40,	// (0x0002d4b6) grid_vitu_itu_pane_ParamLimits

0x7d40,	// (0x0002d4b6) grid_vitu_itu_pane

0x7d56,	// (0x0002d4cc) cell_vitu_itu_pane_ParamLimits

0x7d56,	// (0x0002d4cc) cell_vitu_itu_pane

0x7d78,	// (0x0002d4ee) cell_vitu_function_pane_ParamLimits

0x7d78,	// (0x0002d4ee) cell_vitu_function_pane

0x6a87,	// (0x0002c1fd) bg_popup_sub_pane_cp08_ParamLimits

0x6a87,	// (0x0002c1fd) bg_popup_sub_pane_cp08

0x7d91,	// (0x0002d507) field_vitu_entry_pane_t1_ParamLimits

0x7d91,	// (0x0002d507) field_vitu_entry_pane_t1

0xc9b4,	// (0x0003212a) field_vitu_entry_pane_t2_ParamLimits

0xc9b4,	// (0x0003212a) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x00034fa9) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x00034fa9) field_vitu_entry_pane_t

0xc9d1,	// (0x00032147) bg_button_pane_cp05_ParamLimits

0xc9d1,	// (0x00032147) bg_button_pane_cp05

0x7dad,	// (0x0002d523) cell_vitu_itu_pane_g1

0x7dc5,	// (0x0002d53b) cell_vitu_itu_pane_t1_ParamLimits

0x7dc5,	// (0x0002d53b) cell_vitu_itu_pane_t1

0x7dd7,	// (0x0002d54d) cell_vitu_itu_pane_t2_ParamLimits

0x7dd7,	// (0x0002d54d) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x00034fae) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x00034fae) cell_vitu_itu_pane_t

0xc9df,	// (0x00032155) bg_button_pane_cp07

0x7e0c,	// (0x0002d582) cell_vitu_function_pane_g1

0xb29e,	// (0x00030a14) main_calc_pane_g1

0x0d1f,	// (0x00026495) aid_visual_content_pane

0xb294,	// (0x00030a0a) main_vradio_pane

0x7e15,	// (0x0002d58b) main_vradio_pane_g1_ParamLimits

0x7e15,	// (0x0002d58b) main_vradio_pane_g1

0xc9e9,	// (0x0003215f) main_vradio_pane_g2_ParamLimits

0xc9e9,	// (0x0003215f) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x00034fb5) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x00034fb5) main_vradio_pane_g

0x7e2b,	// (0x0002d5a1) main_vradio_pane_t1_ParamLimits

0x7e2b,	// (0x0002d5a1) main_vradio_pane_t1

0x7e40,	// (0x0002d5b6) main_vradio_pane_t2_ParamLimits

0x7e40,	// (0x0002d5b6) main_vradio_pane_t2

0xc9f6,	// (0x0003216c) main_vradio_pane_t3_ParamLimits

0xc9f6,	// (0x0003216c) main_vradio_pane_t3

0x0002,

0xf844,	// (0x00034fba) main_vradio_pane_t_ParamLimits

0xf844,	// (0x00034fba) main_vradio_pane_t

0x7e55,	// (0x0002d5cb) vradio_rocker_control_pane_ParamLimits

0x7e55,	// (0x0002d5cb) vradio_rocker_control_pane

0x7e67,	// (0x0002d5dd) vradio_station_info_pane_ParamLimits

0x7e67,	// (0x0002d5dd) vradio_station_info_pane

0xca08,	// (0x0003217e) vradio_frequency_info_pane_ParamLimits

0xca08,	// (0x0003217e) vradio_frequency_info_pane

0xc3cf,	// (0x00031b45) vradio_station_info_pane_g1

0xca17,	// (0x0003218d) vradio_station_info_pane_t1_ParamLimits

0xca17,	// (0x0003218d) vradio_station_info_pane_t1

0xca39,	// (0x000321af) vradio_station_info_pane_t2_ParamLimits

0xca39,	// (0x000321af) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x00034fc1) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x00034fc1) vradio_station_info_pane_t

0xca4b,	// (0x000321c1) vradio_tuning_pane

0xca53,	// (0x000321c9) vradio_rocker_control_pane_g1

0xca5b,	// (0x000321d1) vradio_rocker_control_pane_g2

0xca63,	// (0x000321d9) vradio_rocker_control_pane_g3

0xca6b,	// (0x000321e1) vradio_rocker_control_pane_g4

0xca73,	// (0x000321e9) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x00034fc6) vradio_rocker_control_pane_g

0x7e77,	// (0x0002d5ed) vradio_frequency_info_pane_g1

0xca7b,	// (0x000321f1) vradio_frequency_info_pane_t1_ParamLimits

0xca7b,	// (0x000321f1) vradio_frequency_info_pane_t1

0x7e81,	// (0x0002d5f7) vradio_tuning_pane_g1

0x7e8a,	// (0x0002d600) vradio_tuning_pane_t1

0xb246,	// (0x000309bc) area_side_right_pane_ParamLimits

0xb246,	// (0x000309bc) area_side_right_pane

0xbe88,	// (0x000315fe) status_small_pane_g1

0xbe90,	// (0x00031606) status_small_pane_g2

0xbe99,	// (0x0003160f) status_small_pane_g3

0xbea2,	// (0x00031618) status_small_pane_g4

0x0003,

0xf60b,	// (0x00034d81) status_small_pane_g

0xbeab,	// (0x00031621) status_small_pane_t1

0xb294,	// (0x00030a0a) main_video3_pane

0xca8f,	// (0x00032205) cams_zoom_vslider_pane

0xca97,	// (0x0003220d) image3_wide_pane_ParamLimits

0xca97,	// (0x0003220d) image3_wide_pane

0xcab1,	// (0x00032227) image3_wide_small_pane

0xcabb,	// (0x00032231) main_video3_pane_g1_ParamLimits

0xcabb,	// (0x00032231) main_video3_pane_g1

0xcad7,	// (0x0003224d) main_video3_pane_g2_ParamLimits

0xcad7,	// (0x0003224d) main_video3_pane_g2

0x0001,

0xf85b,	// (0x00034fd1) main_video3_pane_g_ParamLimits

0xf85b,	// (0x00034fd1) main_video3_pane_g

0xcaf3,	// (0x00032269) main_video3_pane_t1_ParamLimits

0xcaf3,	// (0x00032269) main_video3_pane_t1

0xcb1e,	// (0x00032294) main_video3_pane_t2_ParamLimits

0xcb1e,	// (0x00032294) main_video3_pane_t2

0xcb49,	// (0x000322bf) main_video3_pane_t3_ParamLimits

0xcb49,	// (0x000322bf) main_video3_pane_t3

0x0002,

0xf860,	// (0x00034fd6) main_video3_pane_t_ParamLimits

0xf860,	// (0x00034fd6) main_video3_pane_t

0xcb74,	// (0x000322ea) cams_zoom_vslider_pane_g1

0xcb7d,	// (0x000322f3) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x00034fdd) cams_zoom_vslider_pane_g

0xcb85,	// (0x000322fb) small_slider_vertical_pane

0xc3cf,	// (0x00031b45) small_slider_vertical_pane_g1

0xc3cf,	// (0x00031b45) small_slider_vertical_pane_g2

0xcb8d,	// (0x00032303) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x00034fe2) small_slider_vertical_pane_g

0xb294,	// (0x00030a0a) main_hwr_training_pane

0xcb96,	// (0x0003230c) hwr_training_instruct_pane_ParamLimits

0xcb96,	// (0x0003230c) hwr_training_instruct_pane

0x7e99,	// (0x0002d60f) hwr_training_navi_pane_ParamLimits

0x7e99,	// (0x0002d60f) hwr_training_navi_pane

0x7eb0,	// (0x0002d626) hwr_training_write_pane_ParamLimits

0x7eb0,	// (0x0002d626) hwr_training_write_pane

0x231d,	// (0x00027a93) bg_frame_shadow_pane

0xcbc5,	// (0x0003233b) hwr_training_write_pane_g1

0xcbcd,	// (0x00032343) hwr_training_write_pane_g2

0xcbd5,	// (0x0003234b) hwr_training_write_pane_g3

0xcbdd,	// (0x00032353) hwr_training_write_pane_g4

0xcbe5,	// (0x0003235b) hwr_training_write_pane_g5

0xcbed,	// (0x00032363) hwr_training_write_pane_g6

0xcbf5,	// (0x0003236b) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x00034fe9) hwr_training_write_pane_g

0xcbfd,	// (0x00032373) hwr_training_navi_pane_g1_ParamLimits

0xcbfd,	// (0x00032373) hwr_training_navi_pane_g1

0xcc0f,	// (0x00032385) hwr_training_navi_pane_g2_ParamLimits

0xcc0f,	// (0x00032385) hwr_training_navi_pane_g2

0xcc21,	// (0x00032397) hwr_training_navi_pane_g3_ParamLimits

0xcc21,	// (0x00032397) hwr_training_navi_pane_g3

0xcc31,	// (0x000323a7) hwr_training_navi_pane_g4_ParamLimits

0xcc31,	// (0x000323a7) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x00034ff8) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x00034ff8) hwr_training_navi_pane_g

0xcc3e,	// (0x000323b4) hwr_training_navi_pane_t1

0x7ee3,	// (0x0002d659) list_single_hwr_training_instruct_pane_ParamLimits

0x7ee3,	// (0x0002d659) list_single_hwr_training_instruct_pane

0xcc4c,	// (0x000323c2) list_single_hwr_training_instruct_pane_t1

0xc30f,	// (0x00031a85) bg_frame_shadow_pane_g1

0xcc5b,	// (0x000323d1) bg_frame_shadow_pane_g2

0xcc63,	// (0x000323d9) bg_frame_shadow_pane_g3

0xcc6b,	// (0x000323e1) bg_frame_shadow_pane_g4

0xcc73,	// (0x000323e9) bg_frame_shadow_pane_g5

0xcc7b,	// (0x000323f1) bg_frame_shadow_pane_g6

0xcc83,	// (0x000323f9) bg_frame_shadow_pane_g7

0x2e6c,	// (0x000285e2) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x00035003) bg_frame_shadow_pane_g

0xb294,	// (0x00030a0a) main_video_tele_dialer_pane

0x1973,	// (0x000270e9) aid_size_cell_video_keypad_ParamLimits

0x1973,	// (0x000270e9) aid_size_cell_video_keypad

0x198d,	// (0x00027103) grid_video_dialer_keypad_pane_ParamLimits

0x198d,	// (0x00027103) grid_video_dialer_keypad_pane

0x19cf,	// (0x00027145) video_down_pane_cp_ParamLimits

0x19cf,	// (0x00027145) video_down_pane_cp

0x19e3,	// (0x00027159) cell_video_dialer_keypad_pane_ParamLimits

0x19e3,	// (0x00027159) cell_video_dialer_keypad_pane

0xcc8b,	// (0x00032401) bg_button_pane_cp08_ParamLimits

0xcc8b,	// (0x00032401) bg_button_pane_cp08

0x7f12,	// (0x0002d688) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7f12,	// (0x0002d688) cell_video_dialer_keypad_pane_g1

0x778e,	// (0x0002cf04) mup3_rocker2_pane_ParamLimits

0x778e,	// (0x0002cf04) mup3_rocker2_pane

0xc3cf,	// (0x00031b45) mup3_rocker2_pane_g1

0x127d,	// (0x000269f3) main_dialer2_pane

0xb294,	// (0x00030a0a) main_mp4_pane

0xcc9f,	// (0x00032415) main_mp4_pane_g1_ParamLimits

0xcc9f,	// (0x00032415) main_mp4_pane_g1

0xcc9f,	// (0x00032415) main_mp4_pane_g2_ParamLimits

0xcc9f,	// (0x00032415) main_mp4_pane_g2

0x1a05,	// (0x0002717b) main_mp4_pane_g3_ParamLimits

0x1a05,	// (0x0002717b) main_mp4_pane_g3

0xccad,	// (0x00032423) main_mp4_pane_g4_ParamLimits

0xccad,	// (0x00032423) main_mp4_pane_g4

0xccd5,	// (0x0003244b) main_mp4_pane_g5_ParamLimits

0xccd5,	// (0x0003244b) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x00035023) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x00035023) main_mp4_pane_g

0xcd25,	// (0x0003249b) main_mp4_pane_t1_ParamLimits

0xcd25,	// (0x0003249b) main_mp4_pane_t1

0xcd7d,	// (0x000324f3) main_mp4_pane_t2_ParamLimits

0xcd7d,	// (0x000324f3) main_mp4_pane_t2

0xcdcf,	// (0x00032545) main_mp4_pane_t3_ParamLimits

0xcdcf,	// (0x00032545) main_mp4_pane_t3

0xcdef,	// (0x00032565) main_mp4_pane_t4_ParamLimits

0xcdef,	// (0x00032565) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x00035030) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x00035030) main_mp4_pane_t

0xce2f,	// (0x000325a5) mp4_progress_pane_ParamLimits

0xce2f,	// (0x000325a5) mp4_progress_pane

0xce79,	// (0x000325ef) mp4_rocker_pane_ParamLimits

0xce79,	// (0x000325ef) mp4_rocker_pane

0xce9f,	// (0x00032615) mp4_progress_pane_t1

0xceb6,	// (0x0003262c) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00035039) mp4_progress_pane_t

0xcecd,	// (0x00032643) mup_progress_pane_cp04

0xced9,	// (0x0003264f) mp4_rocker_pane_g1

0x1a35,	// (0x000271ab) aid_cell_size_keypad2_ParamLimits

0x1a35,	// (0x000271ab) aid_cell_size_keypad2

0x1a4b,	// (0x000271c1) dialer2_ne_pane_ParamLimits

0x1a4b,	// (0x000271c1) dialer2_ne_pane

0x1a5f,	// (0x000271d5) grid_dialer2_keypad_pane_ParamLimits

0x1a5f,	// (0x000271d5) grid_dialer2_keypad_pane

0xc1bc,	// (0x00031932) bg_popup_call_pane_cp07_ParamLimits

0xc1bc,	// (0x00031932) bg_popup_call_pane_cp07

0x7f4d,	// (0x0002d6c3) dialer2_ne_pane_t1_ParamLimits

0x7f4d,	// (0x0002d6c3) dialer2_ne_pane_t1

0x1a75,	// (0x000271eb) cell_dialer2_keypad_pane_ParamLimits

0x1a75,	// (0x000271eb) cell_dialer2_keypad_pane

0xcef5,	// (0x0003266b) bg_button_pane_pane_cp04_ParamLimits

0xcef5,	// (0x0003266b) bg_button_pane_pane_cp04

0x7f87,	// (0x0002d6fd) cell_dialer2_keypad_pane_g1_ParamLimits

0x7f87,	// (0x0002d6fd) cell_dialer2_keypad_pane_g1

0x389f,	// (0x00029015) aid_placing_vt_set_content_ParamLimits

0x389f,	// (0x00029015) aid_placing_vt_set_content

0x38c1,	// (0x00029037) aid_placing_vt_set_title_ParamLimits

0x38c1,	// (0x00029037) aid_placing_vt_set_title

0xb294,	// (0x00030a0a) main_image3_pane

0x1adb,	// (0x00027251) area_side_right_pane_cp01_ParamLimits

0x1adb,	// (0x00027251) area_side_right_pane_cp01

0xcc9f,	// (0x00032415) main_image3_pane_g1_ParamLimits

0xcc9f,	// (0x00032415) main_image3_pane_g1

0x1af2,	// (0x00027268) main_image3_pane_g2_ParamLimits

0x1af2,	// (0x00027268) main_image3_pane_g2

0x1b18,	// (0x0002728e) main_image3_pane_g3_ParamLimits

0x1b18,	// (0x0002728e) main_image3_pane_g3

0x1b3e,	// (0x000272b4) main_image3_pane_g4_ParamLimits

0x1b3e,	// (0x000272b4) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00035048) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00035048) main_image3_pane_g

0x1b64,	// (0x000272da) main_image3_pane_t1_ParamLimits

0x1b64,	// (0x000272da) main_image3_pane_t1

0x1bbc,	// (0x00027332) main_image3_pane_t2_ParamLimits

0x1bbc,	// (0x00027332) main_image3_pane_t2

0x1c0e,	// (0x00027384) main_image3_pane_t3_ParamLimits

0x1c0e,	// (0x00027384) main_image3_pane_t3

0x0003,

0xf8db,	// (0x00035051) main_image3_pane_t_ParamLimits

0xf8db,	// (0x00035051) main_image3_pane_t

0x6a87,	// (0x0002c1fd) grid_sctrl_middle_pane_cp01_ParamLimits

0x6a87,	// (0x0002c1fd) grid_sctrl_middle_pane_cp01

0x7fef,	// (0x0002d765) cell_sctrl_middle_pane_cp01_ParamLimits

0x7fef,	// (0x0002d765) cell_sctrl_middle_pane_cp01

0x800c,	// (0x0002d782) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x800c,	// (0x0002d782) cell_sctrl_middle_pane_cp01_g1

0xb294,	// (0x00030a0a) main_call4_pane

0x8022,	// (0x0002d798) aid_size_button_call4_ParamLimits

0x8022,	// (0x0002d798) aid_size_button_call4

0x8051,	// (0x0002d7c7) call4_windows_pane_ParamLimits

0x8051,	// (0x0002d7c7) call4_windows_pane

0x806d,	// (0x0002d7e3) grid_call4_button_pane_ParamLimits

0x806d,	// (0x0002d7e3) grid_call4_button_pane

0xcf33,	// (0x000326a9) call4_windows_conf_pane

0x808c,	// (0x0002d802) popup_call4_audio_first_window_ParamLimits

0x808c,	// (0x0002d802) popup_call4_audio_first_window

0x80ac,	// (0x0002d822) popup_call4_audio_second_window_ParamLimits

0x80ac,	// (0x0002d822) popup_call4_audio_second_window

0xcf66,	// (0x000326dc) popup_call4_audio_wait_window_ParamLimits

0xcf66,	// (0x000326dc) popup_call4_audio_wait_window

0x80be,	// (0x0002d834) cell_call4_button_pane_ParamLimits

0x80be,	// (0x0002d834) cell_call4_button_pane

0x80e3,	// (0x0002d859) bg_button_pane_cp09_ParamLimits

0x80e3,	// (0x0002d859) bg_button_pane_cp09

0x80ef,	// (0x0002d865) cell_call4_button_pane_g1_ParamLimits

0x80ef,	// (0x0002d865) cell_call4_button_pane_g1

0x8115,	// (0x0002d88b) cell_call4_button_pane_t1_ParamLimits

0x8115,	// (0x0002d88b) cell_call4_button_pane_t1

0xcfac,	// (0x00032722) popup_call4_audio_conf_window_ParamLimits

0xcfac,	// (0x00032722) popup_call4_audio_conf_window

0x77e8,	// (0x0002cf5e) mup3_progress_pane_t1_ParamLimits

0x7806,	// (0x0002cf7c) mup3_progress_pane_t2_ParamLimits

0xc685,	// (0x00031dfb) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x00034f25) mup3_progress_pane_t_ParamLimits

0xc6a2,	// (0x00031e18) mup_progress_pane_cp03_ParamLimits

0x7cfa,	// (0x0002d470) mup3_control_keys_pane_g4_copy1

0xce5d,	// (0x000325d3) mp4_rocker2_pane_ParamLimits

0xce5d,	// (0x000325d3) mp4_rocker2_pane

0xcfc0,	// (0x00032736) mp4_rocker2_pane_g1

0xcfc8,	// (0x0003273e) mp4_rocker2_pane_g2

0xcfd0,	// (0x00032746) mp4_rocker2_pane_g3

0xcfd8,	// (0x0003274e) mp4_rocker2_pane_g4

0xcfe0,	// (0x00032756) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0003505a) mp4_rocker2_pane_g

0xb294,	// (0x00030a0a) main_camera4_pane

0xb294,	// (0x00030a0a) main_video4_pane

0x19a1,	// (0x00027117) main_video_tele_dialer_pane_t1_ParamLimits

0x19a1,	// (0x00027117) main_video_tele_dialer_pane_t1

0x19b8,	// (0x0002712e) main_video_tele_dialer_pane_t2_ParamLimits

0x19b8,	// (0x0002712e) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x00035014) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x00035014) main_video_tele_dialer_pane_t

0x1ca2,	// (0x00027418) cam4_autofocus_pane_ParamLimits

0x1ca2,	// (0x00027418) cam4_autofocus_pane

0x1cb6,	// (0x0002742c) cam4_image_uncrop_pane_ParamLimits

0x1cb6,	// (0x0002742c) cam4_image_uncrop_pane

0x1ccd,	// (0x00027443) cam4_indicators_pane_ParamLimits

0x1ccd,	// (0x00027443) cam4_indicators_pane

0x1cf2,	// (0x00027468) main_camera4_pane_g1_ParamLimits

0x1cf2,	// (0x00027468) main_camera4_pane_g1

0x1d04,	// (0x0002747a) main_camera4_pane_g2_ParamLimits

0x1d04,	// (0x0002747a) main_camera4_pane_g2

0x1d17,	// (0x0002748d) main_camera4_pane_g3_ParamLimits

0x1d17,	// (0x0002748d) main_camera4_pane_g3

0x1d2a,	// (0x000274a0) main_camera4_pane_g4_ParamLimits

0x1d2a,	// (0x000274a0) main_camera4_pane_g4

0x1d3d,	// (0x000274b3) main_camera4_pane_g5_ParamLimits

0x1d3d,	// (0x000274b3) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00035065) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00035065) main_camera4_pane_g

0x1d61,	// (0x000274d7) main_camera4_pane_t1_ParamLimits

0x1d61,	// (0x000274d7) main_camera4_pane_t1

0xd014,	// (0x0003278a) bg_tb_trans_pane_cp06

0xd02a,	// (0x000327a0) cam4_indicators_pane_g1

0xd03b,	// (0x000327b1) cam4_indicators_pane_g2

0x0002,

0xf905,	// (0x0003507b) cam4_indicators_pane_g

0xd053,	// (0x000327c9) cam4_indicators_pane_t1

0x1da7,	// (0x0002751d) main_video4_pane_g1_ParamLimits

0x1da7,	// (0x0002751d) main_video4_pane_g1

0x1db6,	// (0x0002752c) main_video4_pane_g2_ParamLimits

0x1db6,	// (0x0002752c) main_video4_pane_g2

0x1dc5,	// (0x0002753b) main_video4_pane_g3_ParamLimits

0x1dc5,	// (0x0002753b) main_video4_pane_g3

0x1dd4,	// (0x0002754a) main_video4_pane_g4_ParamLimits

0x1dd4,	// (0x0002754a) main_video4_pane_g4

0x0004,

0xf90c,	// (0x00035082) main_video4_pane_g_ParamLimits

0xf90c,	// (0x00035082) main_video4_pane_g

0x1df2,	// (0x00027568) vid4_indicators_pane_ParamLimits

0x1df2,	// (0x00027568) vid4_indicators_pane

0x1e1a,	// (0x00027590) video4_image_uncrop_cif_pane_ParamLimits

0x1e1a,	// (0x00027590) video4_image_uncrop_cif_pane

0x1e32,	// (0x000275a8) video4_image_uncrop_nhd_pane_ParamLimits

0x1e32,	// (0x000275a8) video4_image_uncrop_nhd_pane

0x1cb6,	// (0x0002742c) video4_image_uncrop_vga_pane_ParamLimits

0x1cb6,	// (0x0002742c) video4_image_uncrop_vga_pane

0xb286,	// (0x000309fc) bg_tb_trans_pane_cp07

0xd07d,	// (0x000327f3) vid4_indicators_pane_g1

0xd091,	// (0x00032807) vid4_indicators_pane_g2

0xd0a5,	// (0x0003281b) vid4_indicators_pane_g3

0x0004,

0xf917,	// (0x0003508d) vid4_indicators_pane_g

0xd0d2,	// (0x00032848) vid4_indicators_pane_t1

0x8151,	// (0x0002d8c7) cam4_autofocus_pane_g1

0x8159,	// (0x0002d8cf) cam4_autofocus_pane_g2

0x8161,	// (0x0002d8d7) cam4_autofocus_pane_g3

0x0002,

0xf922,	// (0x00035098) cam4_autofocus_pane_g

0x8169,	// (0x0002d8df) cam4_autofocus_pane_g3_copy1

0x7ef6,	// (0x0002d66c) video_down_pane_cp_t1

0x7f04,	// (0x0002d67a) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x00035019) video_down_pane_cp_t

0xb286,	// (0x000309fc) popup_vitu2_window_ParamLimits

0xb286,	// (0x000309fc) popup_vitu2_window

0x1e46,	// (0x000275bc) aid_size_cell2_itu2_ParamLimits

0x1e46,	// (0x000275bc) aid_size_cell2_itu2

0x1e6c,	// (0x000275e2) aid_size_cell_itu2_ParamLimits

0x1e6c,	// (0x000275e2) aid_size_cell_itu2

0x1ebd,	// (0x00027633) bg_popup_window_pane_cp09_ParamLimits

0x1ebd,	// (0x00027633) bg_popup_window_pane_cp09

0x1ecb,	// (0x00027641) field_vitu2_entry_pane_ParamLimits

0x1ecb,	// (0x00027641) field_vitu2_entry_pane

0x1ee2,	// (0x00027658) grid_vitu2_function_pane_ParamLimits

0x1ee2,	// (0x00027658) grid_vitu2_function_pane

0x1f17,	// (0x0002768d) grid_vitu2_itu_pane_ParamLimits

0x1f17,	// (0x0002768d) grid_vitu2_itu_pane

0x1f7e,	// (0x000276f4) cell_vitu2_itu_pane_ParamLimits

0x1f7e,	// (0x000276f4) cell_vitu2_itu_pane

0x1fa6,	// (0x0002771c) cell_vitu2_function_pane_ParamLimits

0x1fa6,	// (0x0002771c) cell_vitu2_function_pane

0xd0e9,	// (0x0003285f) bg_popup_call_pane_cp08_ParamLimits

0xd0e9,	// (0x0003285f) bg_popup_call_pane_cp08

0xd100,	// (0x00032876) field_vitu2_entry_pane_g1

0xd10c,	// (0x00032882) field_vitu2_entry_pane_g2

0x0002,

0xf929,	// (0x0003509f) field_vitu2_entry_pane_g

0x8171,	// (0x0002d8e7) field_vitu2_entry_pane_t1_ParamLimits

0x8171,	// (0x0002d8e7) field_vitu2_entry_pane_t1

0xd126,	// (0x0003289c) field_vitu2_entry_pane_t2_ParamLimits

0xd126,	// (0x0003289c) field_vitu2_entry_pane_t2

0x0001,

0xf930,	// (0x000350a6) field_vitu2_entry_pane_t_ParamLimits

0xf930,	// (0x000350a6) field_vitu2_entry_pane_t

0x1fe5,	// (0x0002775b) bg_button_pane_cp010_ParamLimits

0x1fe5,	// (0x0002775b) bg_button_pane_cp010

0xd14b,	// (0x000328c1) cell_vitu2_itu_pane_g1

0x2001,	// (0x00027777) cell_vitu2_itu_pane_t1_ParamLimits

0x2001,	// (0x00027777) cell_vitu2_itu_pane_t1

0x205f,	// (0x000277d5) cell_vitu2_itu_pane_t2_ParamLimits

0x205f,	// (0x000277d5) cell_vitu2_itu_pane_t2

0x0002,

0xf93a,	// (0x000350b0) cell_vitu2_itu_pane_t_ParamLimits

0xf93a,	// (0x000350b0) cell_vitu2_itu_pane_t

0xb286,	// (0x000309fc) bg_button_pane_cp011

0x214b,	// (0x000278c1) cell_vitu2_function_pane_g1

0xb294,	// (0x00030a0a) main_myfav_hc_pane

0x1c5a,	// (0x000273d0) popup_image3_note_pane_ParamLimits

0x1c5a,	// (0x000273d0) popup_image3_note_pane

0x1c74,	// (0x000273ea) popup_image3_tool_bar_pane_ParamLimits

0x1c74,	// (0x000273ea) popup_image3_tool_bar_pane

0x20ed,	// (0x00027863) cell_vitu2_itu_pane_t3_ParamLimits

0x20ed,	// (0x00027863) cell_vitu2_itu_pane_t3

0x231d,	// (0x00027a93) bg_popup_trans_pane

0xd15d,	// (0x000328d3) grid_image3_tool_bar_pane

0xd167,	// (0x000328dd) bg_popup_trans_pane_g1

0x3dcb,	// (0x00029541) bg_popup_trans_pane_g2

0xd16f,	// (0x000328e5) bg_popup_trans_pane_g3

0xd177,	// (0x000328ed) bg_popup_trans_pane_g4

0xd17f,	// (0x000328f5) bg_popup_trans_pane_g5

0xd187,	// (0x000328fd) bg_popup_trans_pane_g6

0xd18f,	// (0x00032905) bg_popup_trans_pane_g7

0xd197,	// (0x0003290d) bg_popup_trans_pane_g8

0x3dab,	// (0x00029521) bg_popup_trans_pane_g9

0x0008,

0xf941,	// (0x000350b7) bg_popup_trans_pane_g

0xd19f,	// (0x00032915) cell_image3_tool_bar_pane_ParamLimits

0xd19f,	// (0x00032915) cell_image3_tool_bar_pane

0xc3cf,	// (0x00031b45) cell_image3_tool_bar_pane_g1

0x231d,	// (0x00027a93) bg_popup_trans_pane_cp1

0xd1b3,	// (0x00032929) popup_image3_note_pane_t1

0xd1c1,	// (0x00032937) popup_image3_note_pane_t2

0xd1cf,	// (0x00032945) popup_image3_note_pane_t3

0x0002,

0xf954,	// (0x000350ca) popup_image3_note_pane_t

0xd1dd,	// (0x00032953) popup_image3_note_pane_t3_copy1

0x819e,	// (0x0002d914) bg_myfav_hc_instruction_pane_ParamLimits

0x819e,	// (0x0002d914) bg_myfav_hc_instruction_pane

0x81b0,	// (0x0002d926) cell_myfav_contact_pane_ParamLimits

0x81b0,	// (0x0002d926) cell_myfav_contact_pane

0x81ca,	// (0x0002d940) cell_myfav_contact_pane_cp1_ParamLimits

0x81ca,	// (0x0002d940) cell_myfav_contact_pane_cp1

0x81e0,	// (0x0002d956) cell_myfav_contact_pane_cp2_ParamLimits

0x81e0,	// (0x0002d956) cell_myfav_contact_pane_cp2

0x81f6,	// (0x0002d96c) cell_myfav_contact_pane_cp3_ParamLimits

0x81f6,	// (0x0002d96c) cell_myfav_contact_pane_cp3

0x820b,	// (0x0002d981) cell_myfav_contact_pane_cp4_ParamLimits

0x820b,	// (0x0002d981) cell_myfav_contact_pane_cp4

0x821f,	// (0x0002d995) cell_myfav_contact_pane_cp5_ParamLimits

0x821f,	// (0x0002d995) cell_myfav_contact_pane_cp5

0x8233,	// (0x0002d9a9) cell_myfav_contact_pane_cp6_ParamLimits

0x8233,	// (0x0002d9a9) cell_myfav_contact_pane_cp6

0x8247,	// (0x0002d9bd) cell_myfav_contact_pane_cp7_ParamLimits

0x8247,	// (0x0002d9bd) cell_myfav_contact_pane_cp7

0xd1eb,	// (0x00032961) listscroll_gen_pane_cp05

0x825f,	// (0x0002d9d5) main_myfav_hc_pane_g1_ParamLimits

0x825f,	// (0x0002d9d5) main_myfav_hc_pane_g1

0x8275,	// (0x0002d9eb) main_myfav_hc_pane_g2_ParamLimits

0x8275,	// (0x0002d9eb) main_myfav_hc_pane_g2

0x0002,

0xf95b,	// (0x000350d1) main_myfav_hc_pane_g_ParamLimits

0xf95b,	// (0x000350d1) main_myfav_hc_pane_g

0x829f,	// (0x0002da15) main_myfav_hc_pane_t1_ParamLimits

0x829f,	// (0x0002da15) main_myfav_hc_pane_t1

0xd1f4,	// (0x0003296a) main_myfav_hc_pane_t2_ParamLimits

0xd1f4,	// (0x0003296a) main_myfav_hc_pane_t2

0xd206,	// (0x0003297c) main_myfav_hc_pane_t3_ParamLimits

0xd206,	// (0x0003297c) main_myfav_hc_pane_t3

0x82b4,	// (0x0002da2a) main_myfav_hc_pane_t4_ParamLimits

0x82b4,	// (0x0002da2a) main_myfav_hc_pane_t4

0x0004,

0xf962,	// (0x000350d8) main_myfav_hc_pane_t_ParamLimits

0xf962,	// (0x000350d8) main_myfav_hc_pane_t

0xc3cf,	// (0x00031b45) bg_myfav_hc_instruction_pane_g1

0xd218,	// (0x0003298e) cell_myfav_contact_pane_g1_ParamLimits

0xd218,	// (0x0003298e) cell_myfav_contact_pane_g1

0xd218,	// (0x0003298e) cell_myfav_contact_pane_g2_ParamLimits

0xd218,	// (0x0003298e) cell_myfav_contact_pane_g2

0xd224,	// (0x0003299a) cell_myfav_contact_pane_g3_ParamLimits

0xd224,	// (0x0003299a) cell_myfav_contact_pane_g3

0xc66f,	// (0x00031de5) cell_myfav_contact_pane_g4_ParamLimits

0xc66f,	// (0x00031de5) cell_myfav_contact_pane_g4

0xd231,	// (0x000329a7) cell_myfav_contact_pane_g5_ParamLimits

0xd231,	// (0x000329a7) cell_myfav_contact_pane_g5

0x0004,

0xf96d,	// (0x000350e3) cell_myfav_contact_pane_g_ParamLimits

0xf96d,	// (0x000350e3) cell_myfav_contact_pane_g

0x828b,	// (0x0002da01) main_myfav_hc_pane_g3_ParamLimits

0x828b,	// (0x0002da01) main_myfav_hc_pane_g3

0x0e09,	// (0x0002657f) popup_adpt_find_window

0x82d8,	// (0x0002da4e) afind_page_pane_ParamLimits

0x82d8,	// (0x0002da4e) afind_page_pane

0x82ed,	// (0x0002da63) aid_size_cell_afind_ParamLimits

0x82ed,	// (0x0002da63) aid_size_cell_afind

0x830b,	// (0x0002da81) bg_popup_sub_pane_cp09_ParamLimits

0x830b,	// (0x0002da81) bg_popup_sub_pane_cp09

0x8318,	// (0x0002da8e) find_pane_cp01_ParamLimits

0x8318,	// (0x0002da8e) find_pane_cp01

0xd23d,	// (0x000329b3) grid_afind_control_pane_ParamLimits

0xd23d,	// (0x000329b3) grid_afind_control_pane

0x8325,	// (0x0002da9b) grid_afind_pane_ParamLimits

0x8325,	// (0x0002da9b) grid_afind_pane

0x8343,	// (0x0002dab9) cell_afind_pane_ParamLimits

0x8343,	// (0x0002dab9) cell_afind_pane

0xc3cf,	// (0x00031b45) afind_page_pane_g1

0x8392,	// (0x0002db08) afind_page_pane_g2

0x839b,	// (0x0002db11) afind_page_pane_g3

0x0002,

0xf978,	// (0x000350ee) afind_page_pane_g

0x83a4,	// (0x0002db1a) afind_page_pane_t1

0xd251,	// (0x000329c7) cell_afind_grid_control_pane_ParamLimits

0xd251,	// (0x000329c7) cell_afind_grid_control_pane

0xcef5,	// (0x0003266b) bg_button_pane_cp69_ParamLimits

0xcef5,	// (0x0003266b) bg_button_pane_cp69

0x83c4,	// (0x0002db3a) cell_afind_pane_g1_ParamLimits

0x83c4,	// (0x0002db3a) cell_afind_pane_g1

0x83d1,	// (0x0002db47) cell_afind_pane_t1_ParamLimits

0x83d1,	// (0x0002db47) cell_afind_pane_t1

0x3724,	// (0x00028e9a) bg_button_pane_cp72

0xd260,	// (0x000329d6) cell_afind_grid_control_pane_g1

0x60e2,	// (0x0002b858) aid_image_placing_area_ParamLimits

0x60e2,	// (0x0002b858) aid_image_placing_area

0xc99c,	// (0x00032112) field_vitu_entry_pane_g1_ParamLimits

0xc99c,	// (0x00032112) field_vitu_entry_pane_g1

0xc9a8,	// (0x0003211e) field_vitu_entry_pane_g2_ParamLimits

0xc9a8,	// (0x0003211e) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x00034fa4) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x00034fa4) field_vitu_entry_pane_g

0x7dad,	// (0x0002d523) cell_vitu_itu_pane_g1_ParamLimits

0x7def,	// (0x0002d565) cell_vitu_itu_pane_t3_ParamLimits

0x7def,	// (0x0002d565) cell_vitu_itu_pane_t3

0xce9f,	// (0x00032615) mp4_progress_pane_t1_ParamLimits

0xceb6,	// (0x0003262c) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00035039) mp4_progress_pane_t_ParamLimits

0xcecd,	// (0x00032643) mup_progress_pane_cp04_ParamLimits

0x82c6,	// (0x0002da3c) main_myfav_hc_pane_t5_ParamLimits

0x82c6,	// (0x0002da3c) main_myfav_hc_pane_t5

0xb23e,	// (0x000309b4) aid_zoom_text_primary

0x0e09,	// (0x0002657f) popup_adpt_find_window_ParamLimits

0xb286,	// (0x000309fc) main_cam_set_pane

0x1ce0,	// (0x00027456) cam4_zoom_pane_ParamLimits

0x1ce0,	// (0x00027456) cam4_zoom_pane

0x83e3,	// (0x0002db59) main_cam_set_pane_g1_ParamLimits

0x83e3,	// (0x0002db59) main_cam_set_pane_g1

0x83f1,	// (0x0002db67) main_cam_set_pane_g2_ParamLimits

0x83f1,	// (0x0002db67) main_cam_set_pane_g2

0x0001,

0xf97f,	// (0x000350f5) main_cam_set_pane_g_ParamLimits

0xf97f,	// (0x000350f5) main_cam_set_pane_g

0x8412,	// (0x0002db88) main_cam_set_pane_t1_ParamLimits

0x8412,	// (0x0002db88) main_cam_set_pane_t1

0x842d,	// (0x0002dba3) main_cset_listscroll_pane_ParamLimits

0x842d,	// (0x0002dba3) main_cset_listscroll_pane

0x844b,	// (0x0002dbc1) main_cset_slider_pane_ParamLimits

0x844b,	// (0x0002dbc1) main_cset_slider_pane

0xd271,	// (0x000329e7) main_cset_list_pane_ParamLimits

0xd271,	// (0x000329e7) main_cset_list_pane

0xd281,	// (0x000329f7) scroll_pane_cp028

0x846f,	// (0x0002dbe5) aid_area_touch_slider

0xd28a,	// (0x00032a00) cset_slider_pane

0x848b,	// (0x0002dc01) main_cset_slider_pane_g1

0x84a0,	// (0x0002dc16) main_cset_slider_pane_g2

0x0011,

0xf984,	// (0x000350fa) main_cset_slider_pane_g

0xd2fc,	// (0x00032a72) main_cset_slider_pane_t1

0x8544,	// (0x0002dcba) main_cset_slider_pane_t2

0x855e,	// (0x0002dcd4) main_cset_slider_pane_t3

0x8578,	// (0x0002dcee) main_cset_slider_pane_t4

0x8592,	// (0x0002dd08) main_cset_slider_pane_t5

0x85ac,	// (0x0002dd22) main_cset_slider_pane_t6

0x85c1,	// (0x0002dd37) main_cset_slider_pane_t7

0x000e,

0xf9a9,	// (0x0003511f) main_cset_slider_pane_t

0x86c5,	// (0x0002de3b) cset_list_set_pane_ParamLimits

0x86c5,	// (0x0002de3b) cset_list_set_pane

0x86d6,	// (0x0002de4c) aid_position_infowindow_above

0x86de,	// (0x0002de54) aid_position_infowindow_below

0x86e6,	// (0x0002de5c) cset_list_set_pane_g1_ParamLimits

0x86e6,	// (0x0002de5c) cset_list_set_pane_g1

0x86f2,	// (0x0002de68) cset_list_set_pane_g3_ParamLimits

0x86f2,	// (0x0002de68) cset_list_set_pane_g3

0x0001,

0xf9c8,	// (0x0003513e) cset_list_set_pane_g_ParamLimits

0xf9c8,	// (0x0003513e) cset_list_set_pane_g

0x8701,	// (0x0002de77) cset_list_set_pane_t1_ParamLimits

0x8701,	// (0x0002de77) cset_list_set_pane_t1

0x6a87,	// (0x0002c1fd) list_highlight_pane_cp021_ParamLimits

0x6a87,	// (0x0002c1fd) list_highlight_pane_cp021

0x5920,	// (0x0002b096) cset_slider_pane_g1

0x5932,	// (0x0002b0a8) cset_slider_pane_g2

0x5929,	// (0x0002b09f) cset_slider_pane_g3

0x0002,

0xf9cd,	// (0x00035143) cset_slider_pane_g

0xd39c,	// (0x00032b12) aid_area_touch_cam4_zoom

0xd3a4,	// (0x00032b1a) cam4_zoom_cont_pane

0xd3ac,	// (0x00032b22) cam4_zoom_pane_g1

0xd3b4,	// (0x00032b2a) cam4_zoom_pane_g2

0x215e,	// (0x000278d4) cam4_zoom_pane_g3

0x0002,

0xf9d4,	// (0x0003514a) cam4_zoom_pane_g

0xd3bc,	// (0x00032b32) cam4_zoom_cont_pane_g1

0xd3c5,	// (0x00032b3b) cam4_zoom_cont_pane_g2

0xd3ce,	// (0x00032b44) cam4_zoom_cont_pane_g3

0x0002,

0xf9db,	// (0x00035151) cam4_zoom_cont_pane_g

0x8040,	// (0x0002d7b6) call4_image_pane_ParamLimits

0x8040,	// (0x0002d7b6) call4_image_pane

0xcf33,	// (0x000326a9) call4_windows_conf_pane_ParamLimits

0xcf46,	// (0x000326bc) popup_call4_audio_in_window_ParamLimits

0xcf46,	// (0x000326bc) popup_call4_audio_in_window

0x231d,	// (0x00027a93) bg_popup_call2_act_pane_cp02

0xcfa4,	// (0x0003271a) call4_list_conf_pane

0xc3cf,	// (0x00031b45) call4_image_pane_g1

0xc3cf,	// (0x00031b45) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x00034e65) call4_image_pane_g

0xd3d7,	// (0x00032b4d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3d7,	// (0x00032b4d) list_single_graphic_popup_conf4_pane

0x231d,	// (0x00027a93) list_highlight_pane_cp022

0xd3ea,	// (0x00032b60) list_single_graphic_popup_conf4_pane_g1

0x4f16,	// (0x0002a68c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e2,	// (0x00035158) list_single_graphic_popup_conf4_pane_g

0xd3f2,	// (0x00032b68) list_single_graphic_popup_conf4_pane_t1

0x39da,	// (0x00029150) popup_vtel_slider_window_ParamLimits

0x39da,	// (0x00029150) popup_vtel_slider_window

0xcee3,	// (0x00032659) dialer2_ne_pane_t2_ParamLimits

0xcee3,	// (0x00032659) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0003503e) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0003503e) dialer2_ne_pane_t

0xc1bc,	// (0x00031932) bg_popup_sub_pane_cp010_ParamLimits

0xc1bc,	// (0x00031932) bg_popup_sub_pane_cp010

0x8716,	// (0x0002de8c) popup_vtel_slider_window_g1_ParamLimits

0x8716,	// (0x0002de8c) popup_vtel_slider_window_g1

0x8729,	// (0x0002de9f) popup_vtel_slider_window_g2_ParamLimits

0x8729,	// (0x0002de9f) popup_vtel_slider_window_g2

0x0003,

0xf9e7,	// (0x0003515d) popup_vtel_slider_window_g_ParamLimits

0xf9e7,	// (0x0003515d) popup_vtel_slider_window_g

0x877d,	// (0x0002def3) vtel_slider_pane_ParamLimits

0x877d,	// (0x0002def3) vtel_slider_pane

0x879f,	// (0x0002df15) vtel_slider_pane_g1_ParamLimits

0x879f,	// (0x0002df15) vtel_slider_pane_g1

0x87b3,	// (0x0002df29) vtel_slider_pane_g2_ParamLimits

0x87b3,	// (0x0002df29) vtel_slider_pane_g2

0x87cb,	// (0x0002df41) vtel_slider_pane_g3_ParamLimits

0x87cb,	// (0x0002df41) vtel_slider_pane_g3

0x879f,	// (0x0002df15) vtel_slider_pane_g4_ParamLimits

0x879f,	// (0x0002df15) vtel_slider_pane_g4

0x87e1,	// (0x0002df57) vtel_slider_pane_g5_ParamLimits

0x87e1,	// (0x0002df57) vtel_slider_pane_g5

0x0004,

0xf9f0,	// (0x00035166) vtel_slider_pane_g_ParamLimits

0xf9f0,	// (0x00035166) vtel_slider_pane_g

0xb286,	// (0x000309fc) main_gallery2_pane

0x1e98,	// (0x0002760e) aid_size_row_itut2_dropdow_list_ParamLimits

0x1e98,	// (0x0002760e) aid_size_row_itut2_dropdow_list

0x1efb,	// (0x00027671) grid_vitu2_function_top_pane_ParamLimits

0x1efb,	// (0x00027671) grid_vitu2_function_top_pane

0x1f40,	// (0x000276b6) popup_vitu2_dropdown_list_window_ParamLimits

0x1f40,	// (0x000276b6) popup_vitu2_dropdown_list_window

0x1f5c,	// (0x000276d2) popup_vitu2_match_list_window

0x2166,	// (0x000278dc) cell_vitu2_function_top_pane_ParamLimits

0x2166,	// (0x000278dc) cell_vitu2_function_top_pane

0x217e,	// (0x000278f4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x217e,	// (0x000278f4) cell_vitu2_function_top_pane_cp01

0x219a,	// (0x00027910) cell_vitu2_function_top_wide_pane_ParamLimits

0x219a,	// (0x00027910) cell_vitu2_function_top_wide_pane

0xb286,	// (0x000309fc) bg_button_pane_cp012

0x21b6,	// (0x0002792c) cell_vitu2_function_top_pane_g1

0xd408,	// (0x00032b7e) bg_button_pane_cp013_ParamLimits

0xd408,	// (0x00032b7e) bg_button_pane_cp013

0x8805,	// (0x0002df7b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8805,	// (0x0002df7b) cell_vitu2_function_top_wide_pane_g1

0xb286,	// (0x000309fc) bg_popup_sub_pane_cp20

0x21ca,	// (0x00027940) list_vitu2_match_list_pane

0xd167,	// (0x000328dd) bg_popup_sub_pane_cp20_g1

0xd16f,	// (0x000328e5) bg_popup_sub_pane_cp20_g2

0x3dcb,	// (0x00029541) bg_popup_sub_pane_cp20_g3

0xd177,	// (0x000328ed) bg_popup_sub_pane_cp20_g4

0x3dab,	// (0x00029521) bg_popup_sub_pane_cp20_g5

0xd424,	// (0x00032b9a) bg_popup_sub_pane_cp20_g6

0xd187,	// (0x000328fd) bg_popup_sub_pane_cp20_g7

0xd18f,	// (0x00032905) bg_popup_sub_pane_cp20_g8

0xd197,	// (0x0003290d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9fb,	// (0x00035171) bg_popup_sub_pane_cp20_g

0xd42c,	// (0x00032ba2) list_vitu2_match_list_item_pane_ParamLimits

0xd42c,	// (0x00032ba2) list_vitu2_match_list_item_pane

0xd43e,	// (0x00032bb4) list_vitu2_match_list_item_pane_t1

0xb294,	// (0x00030a0a) bg_popup_sub_pane_cp21

0xd44c,	// (0x00032bc2) grid_vitu2_dropdown_list_pane

0x21e8,	// (0x0002795e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x21e8,	// (0x0002795e) cell_vitu2_dropdown_list_char_pane

0x2209,	// (0x0002797f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2209,	// (0x0002797f) cell_vitu2_dropdown_list_ctrl_pane

0xd454,	// (0x00032bca) cell_vitu2_dropdown_list_char_pane_g1

0xd45d,	// (0x00032bd3) cell_vitu2_dropdown_list_char_pane_g2

0xd466,	// (0x00032bdc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa18,	// (0x0003518e) cell_vitu2_dropdown_list_char_pane_g

0x2235,	// (0x000279ab) cell_vitu2_dropdown_list_char_pane_t1

0x8865,	// (0x0002dfdb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8865,	// (0x0002dfdb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8872,	// (0x0002dfe8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8872,	// (0x0002dfe8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x887f,	// (0x0002dff5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x887f,	// (0x0002dff5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2243,	// (0x000279b9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2243,	// (0x000279b9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd014,	// (0x0003278a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd014,	// (0x0003278a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1f,	// (0x00035195) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1f,	// (0x00035195) cell_vitu2_dropdown_list_ctrl_pane_g

0x888c,	// (0x0002e002) aid_size_cell_gallery2_ParamLimits

0x888c,	// (0x0002e002) aid_size_cell_gallery2

0x88aa,	// (0x0002e020) grid_gallery2_pane_ParamLimits

0x88aa,	// (0x0002e020) grid_gallery2_pane

0x88bc,	// (0x0002e032) scroll_pane_cp029_ParamLimits

0x88bc,	// (0x0002e032) scroll_pane_cp029

0x88c8,	// (0x0002e03e) cell_gallery2_pane_ParamLimits

0x88c8,	// (0x0002e03e) cell_gallery2_pane

0xd46f,	// (0x00032be5) cell_gallery2_pane_g2

0x891e,	// (0x0002e094) cell_gallery2_pane_g3

0xd477,	// (0x00032bed) cell_gallery2_pane_g4

0xd47f,	// (0x00032bf5) cell_gallery2_pane_g5

0x33a7,	// (0x00028b1d) grid_highlight_pane_cp10

0x1f5c,	// (0x000276d2) popup_vitu2_match_list_window_ParamLimits

0x1f6d,	// (0x000276e3) popup_vitu2_query_window_ParamLimits

0x1f6d,	// (0x000276e3) popup_vitu2_query_window

0xb294,	// (0x00030a0a) bg_vitu2_candi_button_pane

0xd454,	// (0x00032bca) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd45d,	// (0x00032bd3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd466,	// (0x00032bdc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8926,	// (0x0002e09c) bg_button_pane_cp015

0x8936,	// (0x0002e0ac) bg_button_pane_cp016

0x8948,	// (0x0002e0be) bg_button_pane_cp017

0xbecd,	// (0x00031643) bg_popup_sub_pane_cp22

0xd487,	// (0x00032bfd) popup_vitu2_query_window_g1

0x8989,	// (0x0002e0ff) popup_vitu2_query_window_g2

0x0002,

0xfa2a,	// (0x000351a0) popup_vitu2_query_window_g

0x89a4,	// (0x0002e11a) popup_vitu2_query_window_t1_ParamLimits

0x89a4,	// (0x0002e11a) popup_vitu2_query_window_t1

0x89d7,	// (0x0002e14d) popup_vitu2_query_window_t2_ParamLimits

0x89d7,	// (0x0002e14d) popup_vitu2_query_window_t2

0x89e9,	// (0x0002e15f) popup_vitu2_query_window_t3_ParamLimits

0x89e9,	// (0x0002e15f) popup_vitu2_query_window_t3

0x8a11,	// (0x0002e187) popup_vitu2_query_window_t4_ParamLimits

0x8a11,	// (0x0002e187) popup_vitu2_query_window_t4

0x8a2e,	// (0x0002e1a4) popup_vitu2_query_window_t5_ParamLimits

0x8a2e,	// (0x0002e1a4) popup_vitu2_query_window_t5

0x0006,

0xfa31,	// (0x000351a7) popup_vitu2_query_window_t_ParamLimits

0xfa31,	// (0x000351a7) popup_vitu2_query_window_t

0xd269,	// (0x000329df) main_cset_text_pane

0x846f,	// (0x0002dbe5) aid_area_touch_slider_ParamLimits

0xd28a,	// (0x00032a00) cset_slider_pane_ParamLimits

0x848b,	// (0x0002dc01) main_cset_slider_pane_g1_ParamLimits

0x84a0,	// (0x0002dc16) main_cset_slider_pane_g2_ParamLimits

0xd2b4,	// (0x00032a2a) main_cset_slider_pane_g3_ParamLimits

0xd2b4,	// (0x00032a2a) main_cset_slider_pane_g3

0x84b5,	// (0x0002dc2b) main_cset_slider_pane_g4_ParamLimits

0x84b5,	// (0x0002dc2b) main_cset_slider_pane_g4

0x84c4,	// (0x0002dc3a) main_cset_slider_pane_g5_ParamLimits

0x84c4,	// (0x0002dc3a) main_cset_slider_pane_g5

0x84d0,	// (0x0002dc46) main_cset_slider_pane_g6_ParamLimits

0x84d0,	// (0x0002dc46) main_cset_slider_pane_g6

0xf984,	// (0x000350fa) main_cset_slider_pane_g_ParamLimits

0xd2fc,	// (0x00032a72) main_cset_slider_pane_t1_ParamLimits

0x8544,	// (0x0002dcba) main_cset_slider_pane_t2_ParamLimits

0x855e,	// (0x0002dcd4) main_cset_slider_pane_t3_ParamLimits

0x8578,	// (0x0002dcee) main_cset_slider_pane_t4_ParamLimits

0x8592,	// (0x0002dd08) main_cset_slider_pane_t5_ParamLimits

0x85ac,	// (0x0002dd22) main_cset_slider_pane_t6_ParamLimits

0x85c1,	// (0x0002dd37) main_cset_slider_pane_t7_ParamLimits

0x85eb,	// (0x0002dd61) main_cset_slider_pane_t8_ParamLimits

0x85eb,	// (0x0002dd61) main_cset_slider_pane_t8

0x8613,	// (0x0002dd89) main_cset_slider_pane_t9_ParamLimits

0x8613,	// (0x0002dd89) main_cset_slider_pane_t9

0x863b,	// (0x0002ddb1) main_cset_slider_pane_t10_ParamLimits

0x863b,	// (0x0002ddb1) main_cset_slider_pane_t10

0x8663,	// (0x0002ddd9) main_cset_slider_pane_t11_ParamLimits

0x8663,	// (0x0002ddd9) main_cset_slider_pane_t11

0x868b,	// (0x0002de01) main_cset_slider_pane_t12_ParamLimits

0x868b,	// (0x0002de01) main_cset_slider_pane_t12

0x86a8,	// (0x0002de1e) main_cset_slider_pane_t13_ParamLimits

0x86a8,	// (0x0002de1e) main_cset_slider_pane_t13

0xf9a9,	// (0x0003511f) main_cset_slider_pane_t_ParamLimits

0x231d,	// (0x00027a93) bg_popup_sub_pane_cp011

0xd493,	// (0x00032c09) main_cset_text_pane_g1

0xd49b,	// (0x00032c11) main_cset_text_pane_t1

0xd4a9,	// (0x00032c1f) main_cset_text_pane_t2

0xd4b7,	// (0x00032c2d) main_cset_text_pane_t3

0xd4c5,	// (0x00032c3b) main_cset_text_pane_t4

0xd4d3,	// (0x00032c49) main_cset_text_pane_t5

0xd4e1,	// (0x00032c57) main_cset_text_pane_t6

0xd4ef,	// (0x00032c65) main_cset_text_pane_t7

0x0006,

0xfa40,	// (0x000351b6) main_cset_text_pane_t

0xb294,	// (0x00030a0a) main_cam4_burst_pane

0xb294,	// (0x00030a0a) main_cam5_pane

0x83b2,	// (0x0002db28) bg_button_pane_cp019

0x83bb,	// (0x0002db31) bg_button_pane_cp020

0xd2c0,	// (0x00032a36) main_cset_slider_pane_g7_ParamLimits

0xd2c0,	// (0x00032a36) main_cset_slider_pane_g7

0xd2cc,	// (0x00032a42) main_cset_slider_pane_g8_ParamLimits

0xd2cc,	// (0x00032a42) main_cset_slider_pane_g8

0x84e4,	// (0x0002dc5a) main_cset_slider_pane_g9_ParamLimits

0x84e4,	// (0x0002dc5a) main_cset_slider_pane_g9

0x84f0,	// (0x0002dc66) main_cset_slider_pane_g10_ParamLimits

0x84f0,	// (0x0002dc66) main_cset_slider_pane_g10

0xd2d8,	// (0x00032a4e) main_cset_slider_pane_g11_ParamLimits

0xd2d8,	// (0x00032a4e) main_cset_slider_pane_g11

0xd2e4,	// (0x00032a5a) main_cset_slider_pane_g12_ParamLimits

0xd2e4,	// (0x00032a5a) main_cset_slider_pane_g12

0x84fc,	// (0x0002dc72) main_cset_slider_pane_g13_ParamLimits

0x84fc,	// (0x0002dc72) main_cset_slider_pane_g13

0x8508,	// (0x0002dc7e) main_cset_slider_pane_g14_ParamLimits

0x8508,	// (0x0002dc7e) main_cset_slider_pane_g14

0x8514,	// (0x0002dc8a) main_cset_slider_pane_g15_ParamLimits

0x8514,	// (0x0002dc8a) main_cset_slider_pane_g15

0xd32a,	// (0x00032aa0) main_cset_slider_pane_t14_ParamLimits

0xd32a,	// (0x00032aa0) main_cset_slider_pane_t14

0xd363,	// (0x00032ad9) main_cset_slider_pane_t15_ParamLimits

0xd363,	// (0x00032ad9) main_cset_slider_pane_t15

0x8aa1,	// (0x0002e217) aid_cam4_burst_size_cell_ParamLimits

0x8aa1,	// (0x0002e217) aid_cam4_burst_size_cell

0x8ac1,	// (0x0002e237) grid_cam4_burst_pane_ParamLimits

0x8ac1,	// (0x0002e237) grid_cam4_burst_pane

0x8aeb,	// (0x0002e261) linegrid_cam4_burst_pane_ParamLimits

0x8aeb,	// (0x0002e261) linegrid_cam4_burst_pane

0xd4fd,	// (0x00032c73) scroll_pane_cp30_ParamLimits

0xd4fd,	// (0x00032c73) scroll_pane_cp30

0x8b0d,	// (0x0002e283) cell_cam4_burst_pane_ParamLimits

0x8b0d,	// (0x0002e283) cell_cam4_burst_pane

0xd509,	// (0x00032c7f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd509,	// (0x00032c7f) linegrid_cam4_burst_pane_g1

0x8b54,	// (0x0002e2ca) linegrid_cam4_burst_pane_g2_ParamLimits

0x8b54,	// (0x0002e2ca) linegrid_cam4_burst_pane_g2

0xd516,	// (0x00032c8c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd516,	// (0x00032c8c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4f,	// (0x000351c5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x000351c5) linegrid_cam4_burst_pane_g

0x8b65,	// (0x0002e2db) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8b65,	// (0x0002e2db) linegrid_cam4_burst_pane_g3_copy1

0xd523,	// (0x00032c99) linegrid_cam4_burst_pane_g4_ParamLimits

0xd523,	// (0x00032c99) linegrid_cam4_burst_pane_g4

0x8b7f,	// (0x0002e2f5) linegrid_cam4_burst_pane_g5_ParamLimits

0x8b7f,	// (0x0002e2f5) linegrid_cam4_burst_pane_g5

0x8b90,	// (0x0002e306) linegrid_cam4_burst_pane_g6_ParamLimits

0x8b90,	// (0x0002e306) linegrid_cam4_burst_pane_g6

0xd530,	// (0x00032ca6) linegrid_cam4_burst_pane_g7_ParamLimits

0xd530,	// (0x00032ca6) linegrid_cam4_burst_pane_g7

0x8ba1,	// (0x0002e317) cell_cam4_burst_pane_g1

0xd549,	// (0x00032cbf) main_cam5_pane_t1_ParamLimits

0xd549,	// (0x00032cbf) main_cam5_pane_t1

0xd55b,	// (0x00032cd1) main_cam5_pane_t2_ParamLimits

0xd55b,	// (0x00032cd1) main_cam5_pane_t2

0xd56d,	// (0x00032ce3) main_cam5_pane_t3_ParamLimits

0xd56d,	// (0x00032ce3) main_cam5_pane_t3

0xd57f,	// (0x00032cf5) main_cam5_pane_t4_ParamLimits

0xd57f,	// (0x00032cf5) main_cam5_pane_t4

0xd595,	// (0x00032d0b) main_cam5_pane_t5_ParamLimits

0xd595,	// (0x00032d0b) main_cam5_pane_t5

0xd5a7,	// (0x00032d1d) main_cam5_pane_t6_ParamLimits

0xd5a7,	// (0x00032d1d) main_cam5_pane_t6

0xd5b9,	// (0x00032d2f) main_cam5_pane_t7_ParamLimits

0xd5b9,	// (0x00032d2f) main_cam5_pane_t7

0xd5cb,	// (0x00032d41) main_cam5_pane_t8_ParamLimits

0xd5cb,	// (0x00032d41) main_cam5_pane_t8

0xd5e7,	// (0x00032d5d) main_cam5_pane_t9_ParamLimits

0xd5e7,	// (0x00032d5d) main_cam5_pane_t9

0xd5f9,	// (0x00032d6f) main_cam5_pane_t10_ParamLimits

0xd5f9,	// (0x00032d6f) main_cam5_pane_t10

0xd60b,	// (0x00032d81) main_cam5_pane_t11_ParamLimits

0xd60b,	// (0x00032d81) main_cam5_pane_t11

0xd61d,	// (0x00032d93) main_cam5_pane_t12_ParamLimits

0xd61d,	// (0x00032d93) main_cam5_pane_t12

0xd632,	// (0x00032da8) main_cam5_pane_t13_ParamLimits

0xd632,	// (0x00032da8) main_cam5_pane_t13

0x000c,

0xfa5b,	// (0x000351d1) main_cam5_pane_t_ParamLimits

0xfa5b,	// (0x000351d1) main_cam5_pane_t

0x0e87,	// (0x000265fd) popup_scut_keymap_window_ParamLimits

0x0e87,	// (0x000265fd) popup_scut_keymap_window

0x8bb4,	// (0x0002e32a) aid_size_cell_brow_shortcut

0x33a7,	// (0x00028b1d) bg_popup_window_pane_cp010

0x8bc0,	// (0x0002e336) grid_scut_pane

0x8bca,	// (0x0002e340) cell_scut_pane_ParamLimits

0x8bca,	// (0x0002e340) cell_scut_pane

0x8bdf,	// (0x0002e355) cell_scut_pane_g1

0xd64f,	// (0x00032dc5) cell_scut_pane_t1

0xd65e,	// (0x00032dd4) cell_scut_pane_t2

0x8be8,	// (0x0002e35e) cell_scut_pane_t3

0x0002,

0xfa76,	// (0x000351ec) cell_scut_pane_t

0x73fd,	// (0x0002cb73) main_mup3_pane_g8_ParamLimits

0x73fd,	// (0x0002cb73) main_mup3_pane_g8

0x1eab,	// (0x00027621) area_vitu2_query_pane_ParamLimits

0x1eab,	// (0x00027621) area_vitu2_query_pane

0x895a,	// (0x0002e0d0) input_focus_pane_cp08

0xd66d,	// (0x00032de3) area_vitu2_query_pane_g1

0x8bf6,	// (0x0002e36c) area_vitu2_query_pane_g2

0x0001,

0xfa7d,	// (0x000351f3) area_vitu2_query_pane_g

0x8c05,	// (0x0002e37b) area_vitu2_query_pane_t1_ParamLimits

0x8c05,	// (0x0002e37b) area_vitu2_query_pane_t1

0x8c17,	// (0x0002e38d) area_vitu2_query_pane_t2_ParamLimits

0x8c17,	// (0x0002e38d) area_vitu2_query_pane_t2

0x8c29,	// (0x0002e39f) area_vitu2_query_pane_t3_ParamLimits

0x8c29,	// (0x0002e39f) area_vitu2_query_pane_t3

0xd679,	// (0x00032def) area_vitu2_query_pane_t4_ParamLimits

0xd679,	// (0x00032def) area_vitu2_query_pane_t4

0xd6a1,	// (0x00032e17) area_vitu2_query_pane_t5_ParamLimits

0xd6a1,	// (0x00032e17) area_vitu2_query_pane_t5

0xd6c9,	// (0x00032e3f) area_vitu2_query_pane_t6_ParamLimits

0xd6c9,	// (0x00032e3f) area_vitu2_query_pane_t6

0x0006,

0xfa82,	// (0x000351f8) area_vitu2_query_pane_t_ParamLimits

0xfa82,	// (0x000351f8) area_vitu2_query_pane_t

0x8c51,	// (0x0002e3c7) bg_button_pane_cp018

0x8c5e,	// (0x0002e3d4) bg_button_pane_cp021

0x8c6a,	// (0x0002e3e0) bg_button_pane_cp022

0x8c79,	// (0x0002e3ef) input_focus_pane_cp09

0x5256,	// (0x0002a9cc) aid_size_touch_mv_arrow_left

0x527f,	// (0x0002a9f5) aid_size_touch_mv_arrow_right

0x852c,	// (0x0002dca2) main_cset_slider_pane_g16_ParamLimits

0x852c,	// (0x0002dca2) main_cset_slider_pane_g16

0x8538,	// (0x0002dcae) main_cset_slider_pane_g17_ParamLimits

0x8538,	// (0x0002dcae) main_cset_slider_pane_g17

0x8ba1,	// (0x0002e317) cell_cam4_burst_pane_g1_ParamLimits

0x231d,	// (0x00027a93) compa_mode_pane

0x8739,	// (0x0002deaf) popup_vtel_slider_window_g3_ParamLimits

0x8739,	// (0x0002deaf) popup_vtel_slider_window_g3

0x8750,	// (0x0002dec6) popup_vtel_slider_window_g4_ParamLimits

0x8750,	// (0x0002dec6) popup_vtel_slider_window_g4

0x8767,	// (0x0002dedd) popup_vtel_slider_window_t1_ParamLimits

0x8767,	// (0x0002dedd) popup_vtel_slider_window_t1

0xb294,	// (0x00030a0a) main_cl_pane

0xbeeb,	// (0x00031661) popup_imed_adjust2_window_ParamLimits

0xbecd,	// (0x00031643) bg_tb_trans_pane_cp05_ParamLimits

0xc8d1,	// (0x00032047) popup_imed_adjust2_window_g1_ParamLimits

0xc8e0,	// (0x00032056) popup_imed_adjust2_window_g2_ParamLimits

0xc8e0,	// (0x00032056) popup_imed_adjust2_window_g2

0xc8ec,	// (0x00032062) popup_imed_adjust2_window_g3_ParamLimits

0xc8ec,	// (0x00032062) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x00034f68) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x00034f68) popup_imed_adjust2_window_g

0xc8f8,	// (0x0003206e) popup_imed_adjust2_window_t1_ParamLimits

0xc910,	// (0x00032086) slider_imed_adjust_pane_ParamLimits

0xc924,	// (0x0003209a) slider_imed_adjust_pane_g1_ParamLimits

0xc934,	// (0x000320aa) slider_imed_adjust_pane_g2_ParamLimits

0xc944,	// (0x000320ba) slider_imed_adjust_pane_g3_ParamLimits

0xc955,	// (0x000320cb) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x00034f6f) slider_imed_adjust_pane_g_ParamLimits

0x1c8e,	// (0x00027404) aid_touch_area_cam4_ParamLimits

0x1c8e,	// (0x00027404) aid_touch_area_cam4

0xcfe8,	// (0x0003275e) battery_pane_cp01

0x1d4e,	// (0x000274c4) main_camera4_pane_g6_ParamLimits

0x1d4e,	// (0x000274c4) main_camera4_pane_g6

0x1d76,	// (0x000274ec) main_camera4_pane_t2_ParamLimits

0x1d76,	// (0x000274ec) main_camera4_pane_t2

0x0001,

0x0268,	// (0x000259de) main_camera4_pane_t_ParamLimits

0x0268,	// (0x000259de) main_camera4_pane_t

0x1d93,	// (0x00027509) aid_touch_area_vid4_ParamLimits

0x1d93,	// (0x00027509) aid_touch_area_vid4

0x1de3,	// (0x00027559) main_video4_pane_g5_ParamLimits

0x1de3,	// (0x00027559) main_video4_pane_g5

0x1e04,	// (0x0002757a) vid4_progress_pane_ParamLimits

0x1e04,	// (0x0002757a) vid4_progress_pane

0xd2f0,	// (0x00032a66) main_cset_slider_pane_g18_ParamLimits

0xd2f0,	// (0x00032a66) main_cset_slider_pane_g18

0xd53d,	// (0x00032cb3) cell_cam4_burst_pane_g2_ParamLimits

0xd53d,	// (0x00032cb3) cell_cam4_burst_pane_g2

0x0001,

0xfa56,	// (0x000351cc) cell_cam4_burst_pane_g_ParamLimits

0xfa56,	// (0x000351cc) cell_cam4_burst_pane_g

0x2cd7,	// (0x0002844d) bg_cl_pane_ParamLimits

0x2cd7,	// (0x0002844d) bg_cl_pane

0x8c88,	// (0x0002e3fe) cl_header_pane_ParamLimits

0x8c88,	// (0x0002e3fe) cl_header_pane

0x8c9c,	// (0x0002e412) cl_listscroll_pane_ParamLimits

0x8c9c,	// (0x0002e412) cl_listscroll_pane

0xd715,	// (0x00032e8b) bg_cl_pane_g1

0xd71d,	// (0x00032e93) bg_cl_pane_g2

0xd725,	// (0x00032e9b) bg_cl_pane_g3

0xd72d,	// (0x00032ea3) bg_cl_pane_g4

0xd735,	// (0x00032eab) bg_cl_pane_g5

0xd73d,	// (0x00032eb3) bg_cl_pane_g6

0xd745,	// (0x00032ebb) bg_cl_pane_g7

0xd74d,	// (0x00032ec3) bg_cl_pane_g8

0xd755,	// (0x00032ecb) bg_cl_pane_g9

0x0008,

0xfa91,	// (0x00035207) bg_cl_pane_g

0x8cac,	// (0x0002e422) aid_height_cl_leading_ParamLimits

0x8cac,	// (0x0002e422) aid_height_cl_leading

0x8cb8,	// (0x0002e42e) aid_height_cl_text_ParamLimits

0x8cb8,	// (0x0002e42e) aid_height_cl_text

0x6a87,	// (0x0002c1fd) bg_cl_header_pane_ParamLimits

0x6a87,	// (0x0002c1fd) bg_cl_header_pane

0x8cd7,	// (0x0002e44d) cl_header_pane_g1_ParamLimits

0x8cd7,	// (0x0002e44d) cl_header_pane_g1

0x8ced,	// (0x0002e463) cl_header_pane_t1_ParamLimits

0x8ced,	// (0x0002e463) cl_header_pane_t1

0xd75d,	// (0x00032ed3) cl_list_pane

0xd281,	// (0x000329f7) hc_scroll_pane_cp01

0x3dab,	// (0x00029521) bg_cl_header_pane_g1

0xd167,	// (0x000328dd) bg_cl_header_pane_g2

0x3dcb,	// (0x00029541) bg_cl_header_pane_g3

0xd177,	// (0x000328ed) bg_cl_header_pane_g4

0xd16f,	// (0x000328e5) bg_cl_header_pane_g5

0xd424,	// (0x00032b9a) bg_cl_header_pane_g6

0xd18f,	// (0x00032905) bg_cl_header_pane_g7

0xd197,	// (0x0003290d) bg_cl_header_pane_g8

0xd187,	// (0x000328fd) bg_cl_header_pane_g9

0x0008,

0xfaa4,	// (0x0003521a) bg_cl_header_pane_g

0x8d06,	// (0x0002e47c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8d06,	// (0x0002e47c) hc_cl_list_double_graphic_heading_pane

0x8d16,	// (0x0002e48c) hc_cl_list_single_graphic_pane_ParamLimits

0x8d16,	// (0x0002e48c) hc_cl_list_single_graphic_pane

0x8d29,	// (0x0002e49f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8d29,	// (0x0002e49f) hc_cl_list_single_graphic_pane_g1

0x8d35,	// (0x0002e4ab) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8d35,	// (0x0002e4ab) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab7,	// (0x0003522d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab7,	// (0x0003522d) hc_cl_list_single_graphic_pane_g

0x8d49,	// (0x0002e4bf) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8d49,	// (0x0002e4bf) hc_cl_list_single_graphic_pane_t1

0x8d29,	// (0x0002e49f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8d29,	// (0x0002e49f) hc_cl_list_double_graphic_heading_pane_g1

0x8d5e,	// (0x0002e4d4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8d5e,	// (0x0002e4d4) hc_cl_list_double_graphic_heading_pane_g2

0x8d72,	// (0x0002e4e8) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8d72,	// (0x0002e4e8) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfabc,	// (0x00035232) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfabc,	// (0x00035232) hc_cl_list_double_graphic_heading_pane_g

0x8d86,	// (0x0002e4fc) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8d86,	// (0x0002e4fc) hc_cl_list_double_graphic_heading_pane_t1

0x8d9b,	// (0x0002e511) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8d9b,	// (0x0002e511) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac3,	// (0x00035239) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac3,	// (0x00035239) hc_cl_list_double_graphic_heading_pane_t

0xd76e,	// (0x00032ee4) vid4_progress_pane_g1

0xd77e,	// (0x00032ef4) vid4_progress_pane_g2

0x225f,	// (0x000279d5) vid4_progress_pane_g3

0xd78e,	// (0x00032f04) vid4_progress_pane_g4

0x0004,

0xfac8,	// (0x0003523e) vid4_progress_pane_g

0x2271,	// (0x000279e7) vid4_progress_pane_t1

0xd7ac,	// (0x00032f22) vid4_progress_pane_t2

0x0002,

0xfad3,	// (0x00035249) vid4_progress_pane_t

0x2287,	// (0x000279fd) wait_bar_pane_cp07

0xc1ca,	// (0x00031940) blid_firmament_pane_ParamLimits

0xc20b,	// (0x00031981) popup_blid_sat_info2_window_g1

0xc22f,	// (0x000319a5) popup_blid_sat_info2_window_t3

0xc23d,	// (0x000319b3) popup_blid_sat_info2_window_t4

0xc24b,	// (0x000319c1) popup_blid_sat_info2_window_t5

0xc259,	// (0x000319cf) popup_blid_sat_info2_window_t6

0xc269,	// (0x000319df) popup_blid_sat_info2_window_t7

0xc277,	// (0x000319ed) popup_blid_sat_info2_window_t8

0xc285,	// (0x000319fb) popup_blid_sat_info2_window_t9

0xc293,	// (0x00031a09) popup_blid_sat_info2_window_t10

0xc34f,	// (0x00031ac5) aid_firma_cardinal_ParamLimits

0xc363,	// (0x00031ad9) blid_firmament_pane_t1_ParamLimits

0xc37a,	// (0x00031af0) blid_firmament_pane_t2_ParamLimits

0xc391,	// (0x00031b07) blid_firmament_pane_t3_ParamLimits

0xc3a8,	// (0x00031b1e) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x00034e5c) blid_firmament_pane_t_ParamLimits

0xc3bf,	// (0x00031b35) blid_sat_info_pane_ParamLimits

0xb286,	// (0x000309fc) main_cam_set_pane_ParamLimits

0x7b93,	// (0x0002d309) aid_size_cell_colour_35_ParamLimits

0x7bb3,	// (0x0002d329) aid_size_cell_colour_112_ParamLimits

0x7bd3,	// (0x0002d349) aid_size_cell_effect_ParamLimits

0xbecd,	// (0x00031643) bg_tb_trans_pane_cp02_ParamLimits

0x4a93,	// (0x0002a209) heading_imed_pane_ParamLimits

0x7bf2,	// (0x0002d368) listscroll_imed_pane_ParamLimits

0xb4b3,	// (0x00030c29) popup_call2_audio_first_window_g5_ParamLimits

0xb4b3,	// (0x00030c29) popup_call2_audio_first_window_g5

0x1a97,	// (0x0002720d) aid_size_touch_image3_arrow_left_ParamLimits

0x1a97,	// (0x0002720d) aid_size_touch_image3_arrow_left

0x1ab7,	// (0x0002722d) aid_size_touch_image3_arrow_right_ParamLimits

0x1ab7,	// (0x0002722d) aid_size_touch_image3_arrow_right

0xd7c1,	// (0x00032f37) vid4_progress_pane_t3

0x7ec7,	// (0x0002d63d) main_hwr_training_symbol_option_pane_ParamLimits

0x7ec7,	// (0x0002d63d) main_hwr_training_symbol_option_pane

0xcbb0,	// (0x00032326) popup_hwr_training_preview_window_ParamLimits

0xcbb0,	// (0x00032326) popup_hwr_training_preview_window

0x1966,	// (0x000270dc) hwr_training_navi_pane_g5_ParamLimits

0x1966,	// (0x000270dc) hwr_training_navi_pane_g5

0xd143,	// (0x000328b9) popup_char_count_window

0xb286,	// (0x000309fc) bg_popup_sub_pane_cp20_ParamLimits

0x21ca,	// (0x00027940) list_vitu2_match_list_pane_ParamLimits

0x21d9,	// (0x0002794f) vitu2_page_scroll_pane_ParamLimits

0x21d9,	// (0x0002794f) vitu2_page_scroll_pane

0xd802,	// (0x00032f78) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd802,	// (0x00032f78) list_single_hwr_training_symbol_option_pane

0xd815,	// (0x00032f8b) list_single_hwr_training_symbol_option_pane_g1

0xd81d,	// (0x00032f93) list_single_hwr_training_symbol_option_pane_t1

0xd7f9,	// (0x00032f6f) bg_button_pane_cp023

0xd82b,	// (0x00032fa1) bg_button_pane_cp024

0x8ddf,	// (0x0002e555) vitu2_page_scroll_pane_g1

0x8de7,	// (0x0002e55d) vitu2_page_scroll_pane_g2

0x0001,

0xfada,	// (0x00035250) vitu2_page_scroll_pane_g

0x8def,	// (0x0002e565) vitu2_page_scroll_pane_t1

0xc3f8,	// (0x00031b6e) popup_char_count_window_g1

0xd85e,	// (0x00032fd4) popup_char_count_window_g2

0xd867,	// (0x00032fdd) popup_char_count_window_g3

0x0002,

0xfadf,	// (0x00035255) popup_char_count_window_g

0xd870,	// (0x00032fe6) popup_char_count_window_t1

0xb294,	// (0x00030a0a) main_vded2_pane

0xc8bf,	// (0x00032035) aid_size_cell_imed_line

0xc8c9,	// (0x0003203f) grid_imed_line_width_pane

0xd0b6,	// (0x0003282c) vid4_indicators_pane_g4

0xd87e,	// (0x00032ff4) cell_imed_line_width_pane_ParamLimits

0xd87e,	// (0x00032ff4) cell_imed_line_width_pane

0xd890,	// (0x00033006) cell_imed_line_width_pane_g1

0xc178,	// (0x000318ee) cell_imed_line_width_pane_g2

0x0001,

0xfae6,	// (0x0003525c) cell_imed_line_width_pane_g

0x8dfe,	// (0x0002e574) main_vded2_pane_g1_ParamLimits

0x8dfe,	// (0x0002e574) main_vded2_pane_g1

0x8e14,	// (0x0002e58a) main_vded2_pane_g2_ParamLimits

0x8e14,	// (0x0002e58a) main_vded2_pane_g2

0x0001,

0xfaeb,	// (0x00035261) main_vded2_pane_g_ParamLimits

0xfaeb,	// (0x00035261) main_vded2_pane_g

0x8e24,	// (0x0002e59a) vded2_slider_pane_ParamLimits

0x8e24,	// (0x0002e59a) vded2_slider_pane

0x8e34,	// (0x0002e5aa) aid_size_touch_vded2_end

0x8e3c,	// (0x0002e5b2) aid_size_touch_vded2_playhead

0xd899,	// (0x0003300f) aid_size_touch_vded2_start

0xd8a1,	// (0x00033017) vded2_slider_bg_pane

0xd8aa,	// (0x00033020) vded2_slider_pane_g1

0xd8b3,	// (0x00033029) vded2_slider_pane_g2

0x8e44,	// (0x0002e5ba) vded2_slider_pane_g3

0x0002,

0xfaf0,	// (0x00035266) vded2_slider_pane_g

0xd8bb,	// (0x00033031) vded2_slider_bg_pane_g1

0xd8c4,	// (0x0003303a) vded2_slider_bg_pane_g2

0xd8cd,	// (0x00033043) vded2_slider_bg_pane_g3

0x0002,

0xfaf7,	// (0x0003526d) vded2_slider_bg_pane_g

0x5ae6,	// (0x0002b25c) aid_postcard_touch_down_pane_ParamLimits

0x5ae6,	// (0x0002b25c) aid_postcard_touch_down_pane

0x5af8,	// (0x0002b26e) aid_postcard_touch_up_pane_ParamLimits

0x5af8,	// (0x0002b26e) aid_postcard_touch_up_pane

0xb294,	// (0x00030a0a) main_blid2_pane

0xbedb,	// (0x00031651) popup_blid2_search_window

0x231d,	// (0x00027a93) blid2_gps_pane

0x231d,	// (0x00027a93) blid2_navig_pane

0x231d,	// (0x00027a93) blid2_search_pane

0x231d,	// (0x00027a93) blid2_tripm_pane

0x8e4d,	// (0x0002e5c3) blid2_search_pane_g1_ParamLimits

0x8e4d,	// (0x0002e5c3) blid2_search_pane_g1

0x8e60,	// (0x0002e5d6) blid2_search_pane_t1_ParamLimits

0x8e60,	// (0x0002e5d6) blid2_search_pane_t1

0x8e72,	// (0x0002e5e8) aid_size_cell_blid2_gps_ParamLimits

0x8e72,	// (0x0002e5e8) aid_size_cell_blid2_gps

0x8e8a,	// (0x0002e600) blid2_gps_pane_g1_ParamLimits

0x8e8a,	// (0x0002e600) blid2_gps_pane_g1

0x8e9e,	// (0x0002e614) grid_blid2_satellite_pane_ParamLimits

0x8e9e,	// (0x0002e614) grid_blid2_satellite_pane

0x8eb2,	// (0x0002e628) blid2_navig_pane_g1_ParamLimits

0x8eb2,	// (0x0002e628) blid2_navig_pane_g1

0x8ebe,	// (0x0002e634) blid2_navig_pane_t1_ParamLimits

0x8ebe,	// (0x0002e634) blid2_navig_pane_t1

0x8ed7,	// (0x0002e64d) blid2_navig_pane_t2_ParamLimits

0x8ed7,	// (0x0002e64d) blid2_navig_pane_t2

0x0001,

0xfafe,	// (0x00035274) blid2_navig_pane_t_ParamLimits

0xfafe,	// (0x00035274) blid2_navig_pane_t

0x8ef0,	// (0x0002e666) blid2_navig_ring_pane_ParamLimits

0x8ef0,	// (0x0002e666) blid2_navig_ring_pane

0x8f05,	// (0x0002e67b) blid2_speed_pane_ParamLimits

0x8f05,	// (0x0002e67b) blid2_speed_pane

0x8f11,	// (0x0002e687) blid2_tripm_pane_g1_ParamLimits

0x8f11,	// (0x0002e687) blid2_tripm_pane_g1

0x8f26,	// (0x0002e69c) blid2_tripm_pane_g2_ParamLimits

0x8f26,	// (0x0002e69c) blid2_tripm_pane_g2

0x8f3a,	// (0x0002e6b0) blid2_tripm_pane_g3_ParamLimits

0x8f3a,	// (0x0002e6b0) blid2_tripm_pane_g3

0x8f4e,	// (0x0002e6c4) blid2_tripm_pane_g4_ParamLimits

0x8f4e,	// (0x0002e6c4) blid2_tripm_pane_g4

0x8f62,	// (0x0002e6d8) blid2_tripm_pane_g5_ParamLimits

0x8f62,	// (0x0002e6d8) blid2_tripm_pane_g5

0x0005,

0xfb03,	// (0x00035279) blid2_tripm_pane_g_ParamLimits

0xfb03,	// (0x00035279) blid2_tripm_pane_g

0x8f84,	// (0x0002e6fa) blid2_tripm_pane_t1_ParamLimits

0x8f84,	// (0x0002e6fa) blid2_tripm_pane_t1

0x8f9b,	// (0x0002e711) blid2_tripm_pane_t2_ParamLimits

0x8f9b,	// (0x0002e711) blid2_tripm_pane_t2

0x8fb2,	// (0x0002e728) blid2_tripm_pane_t3_ParamLimits

0x8fb2,	// (0x0002e728) blid2_tripm_pane_t3

0x0003,

0xfb10,	// (0x00035286) blid2_tripm_pane_t_ParamLimits

0xfb10,	// (0x00035286) blid2_tripm_pane_t

0x8ff5,	// (0x0002e76b) cell_blid2_satellite_pane_ParamLimits

0x8ff5,	// (0x0002e76b) cell_blid2_satellite_pane

0x900d,	// (0x0002e783) cell_blid2_satellite_pane_g1

0xd8d6,	// (0x0003304c) cell_blid2_satellite_pane_t1

0xc3cf,	// (0x00031b45) blid2_speed_pane_g1

0xd8e4,	// (0x0003305a) blid2_speed_pane_t1

0xd8f2,	// (0x00033068) blid2_speed_pane_t2

0x0001,

0xfb19,	// (0x0003528f) blid2_speed_pane_t

0xc3cf,	// (0x00031b45) blid2_navig_ring_pane_g1

0x9016,	// (0x0002e78c) blid2_navig_ring_pane_g2

0x901e,	// (0x0002e794) blid2_navig_ring_pane_g3

0x9026,	// (0x0002e79c) blid2_navig_ring_pane_g4

0x902e,	// (0x0002e7a4) blid2_navig_ring_pane_g5

0x0004,

0xfb1e,	// (0x00035294) blid2_navig_ring_pane_g

0x231d,	// (0x00027a93) bg_popup_window_pane_cp011

0xd900,	// (0x00033076) popup_blid2_search_window_g1

0xd908,	// (0x0003307e) popup_blid2_search_window_t1

0xd916,	// (0x0003308c) popup_blid2_search_window_t2

0x0001,

0xfb29,	// (0x0003529f) popup_blid2_search_window_t

0x3c90,	// (0x00029406) main_browser_pane_g1

0x2cd7,	// (0x0002844d) main_browser_pane_ParamLimits

0xb286,	// (0x000309fc) bg_button_pane_cp011_ParamLimits

0x214b,	// (0x000278c1) cell_vitu2_function_pane_g1_ParamLimits

0xbecd,	// (0x00031643) bg_popup_sub_pane_cp22_ParamLimits

0x895a,	// (0x0002e0d0) input_focus_pane_cp08_ParamLimits

0x8971,	// (0x0002e0e7) popup_vitu2_query_button_pane_ParamLimits

0x8971,	// (0x0002e0e7) popup_vitu2_query_button_pane

0x8981,	// (0x0002e0f7) popup_vitu2_query_input_button_pane

0xd487,	// (0x00032bfd) popup_vitu2_query_window_g1_ParamLimits

0x8989,	// (0x0002e0ff) popup_vitu2_query_window_g2_ParamLimits

0xfa2a,	// (0x000351a0) popup_vitu2_query_window_g_ParamLimits

0x231d,	// (0x00027a93) bg_button_pane_cp026

0x9036,	// (0x0002e7ac) popup_vitu2_query_input_button_pane_g1

0x231d,	// (0x00027a93) bg_button_pane_cp025

0xd924,	// (0x0003309a) popup_vitu2_query_button_pane_t1

0x70cf,	// (0x0002c845) main_mp3_pane_t6

0x70dd,	// (0x0002c853) popup_slider_window_cp01

0xd022,	// (0x00032798) cam4_battery_pane

0xd075,	// (0x000327eb) cam4_battery_pane_cp02

0xd766,	// (0x00032edc) cam4_battery_pane_cp01

0xd766,	// (0x00032edc) cam4_battery_pane_cp03

0xced9,	// (0x0003264f) cam4_battery_pane_g1

0xc3cf,	// (0x00031b45) cam4_battery_pane_g2

0x0001,

0xfb2e,	// (0x000352a4) cam4_battery_pane_g

0xc2a1,	// (0x00031a17) popup_blid_sat_info2_window_t11

0x5256,	// (0x0002a9cc) aid_size_touch_mv_arrow_left_ParamLimits

0x527f,	// (0x0002a9f5) aid_size_touch_mv_arrow_right_ParamLimits

0x52dd,	// (0x0002aa53) navi_pane_g1_ParamLimits

0x52e9,	// (0x0002aa5f) navi_pane_g2_ParamLimits

0x5317,	// (0x0002aa8d) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00034b5b) navi_pane_g_ParamLimits

0x53d3,	// (0x0002ab49) navi_pane_mv_t1_ParamLimits

0x7bfe,	// (0x0002d374) grid_imed_effect_pane_ParamLimits

0x38de,	// (0x00029054) aid_placing_vt_slider_lsc

0x38ee,	// (0x00029064) aid_placing_vt_slider_prt

0x6a87,	// (0x0002c1fd) bg_tb_trans_pane_cp01_ParamLimits

0xc51e,	// (0x00031c94) popup_image_details_window_g1_ParamLimits

0xc531,	// (0x00031ca7) popup_image_details_window_g2_ParamLimits

0xc546,	// (0x00031cbc) popup_image_details_window_g3_ParamLimits

0xc546,	// (0x00031cbc) popup_image_details_window_g3

0xf72b,	// (0x00034ea1) popup_image_details_window_g_ParamLimits

0xc55a,	// (0x00031cd0) popup_image_details_window_t1_ParamLimits

0xc56c,	// (0x00031ce2) popup_image_details_window_t2_ParamLimits

0xc585,	// (0x00031cfb) popup_image_details_window_t3_ParamLimits

0xc599,	// (0x00031d0f) popup_image_details_window_t4_ParamLimits

0xc5b4,	// (0x00031d2a) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x00034ea8) popup_image_details_window_t_ParamLimits

0x8cc4,	// (0x0002e43a) cl_header_name_pane_ParamLimits

0x8cc4,	// (0x0002e43a) cl_header_name_pane

0x903e,	// (0x0002e7b4) cl_header_name_pane_t1_ParamLimits

0x903e,	// (0x0002e7b4) cl_header_name_pane_t1

0x905f,	// (0x0002e7d5) cl_header_name_pane_t2_ParamLimits

0x905f,	// (0x0002e7d5) cl_header_name_pane_t2

0x90a1,	// (0x0002e817) cl_header_name_pane_t3_ParamLimits

0x90a1,	// (0x0002e817) cl_header_name_pane_t3

0x0002,

0xfb33,	// (0x000352a9) cl_header_name_pane_t_ParamLimits

0xfb33,	// (0x000352a9) cl_header_name_pane_t

0x53a4,	// (0x0002ab1a) navi_pane_mv_g2_ParamLimits

0xd100,	// (0x00032876) field_vitu2_entry_pane_g1_ParamLimits

0xd10c,	// (0x00032882) field_vitu2_entry_pane_g2_ParamLimits

0xd118,	// (0x0003288e) field_vitu2_entry_pane_g3_ParamLimits

0xd118,	// (0x0003288e) field_vitu2_entry_pane_g3

0xf929,	// (0x0003509f) field_vitu2_entry_pane_g_ParamLimits

0xd14b,	// (0x000328c1) cell_vitu2_itu_pane_g1_ParamLimits

0x1ff3,	// (0x00027769) cell_vitu2_itu_pane_g2_ParamLimits

0x1ff3,	// (0x00027769) cell_vitu2_itu_pane_g2

0x0001,

0xf935,	// (0x000350ab) cell_vitu2_itu_pane_g_ParamLimits

0xf935,	// (0x000350ab) cell_vitu2_itu_pane_g

0xb286,	// (0x000309fc) bg_vkb2_func_pane_cp05_ParamLimits

0xb286,	// (0x000309fc) bg_vkb2_func_pane_cp05

0xb286,	// (0x000309fc) bg_vkb2_func_pane_cp03

0xb286,	// (0x000309fc) bg_vkb2_func_pane_cp04

0xb286,	// (0x000309fc) bg_vkb2_func_pane_cp10_ParamLimits

0xb286,	// (0x000309fc) bg_vkb2_func_pane_cp10

0x8c6a,	// (0x0002e3e0) bg_vkb2_func_pane_cp08

0x8c51,	// (0x0002e3c7) bg_vkb2_func_pane_cp06

0x8c5e,	// (0x0002e3d4) bg_vkb2_func_pane_cp07

0xd834,	// (0x00032faa) bg_vkb2_func_pane_cp11_ParamLimits

0xd834,	// (0x00032faa) bg_vkb2_func_pane_cp11

0xd849,	// (0x00032fbf) bg_vkb2_func_pane_cp12_ParamLimits

0xd849,	// (0x00032fbf) bg_vkb2_func_pane_cp12

0x231d,	// (0x00027a93) bg_vkb2_func_pane_cp09

0xd167,	// (0x000328dd) bg_vkb2_func_pane_g1

0x3dcb,	// (0x00029541) bg_vkb2_func_pane_g2

0xd16f,	// (0x000328e5) bg_vkb2_func_pane_g3

0xd177,	// (0x000328ed) bg_vkb2_func_pane_g4

0xd424,	// (0x00032b9a) bg_vkb2_func_pane_g5

0xd18f,	// (0x00032905) bg_vkb2_func_pane_g6

0xd197,	// (0x0003290d) bg_vkb2_func_pane_g7

0xd187,	// (0x000328fd) bg_vkb2_func_pane_g8

0x3dab,	// (0x00029521) bg_vkb2_func_pane_g9

0x0008,

0xfb3a,	// (0x000352b0) bg_vkb2_func_pane_g

0x8f74,	// (0x0002e6ea) blid2_tripm_pane_g6_ParamLimits

0x8f74,	// (0x0002e6ea) blid2_tripm_pane_g6

0xce97,	// (0x0003260d) mp4_progress_pane_g1

0x8fe3,	// (0x0002e759) blid2_tripm_values_pane_ParamLimits

0x8fe3,	// (0x0002e759) blid2_tripm_values_pane

0x90d2,	// (0x0002e848) blid2_tripm_values_pane_t1

0x90e0,	// (0x0002e856) blid2_tripm_values_pane_t2

0x90ee,	// (0x0002e864) blid2_tripm_values_pane_t3

0x90fc,	// (0x0002e872) blid2_tripm_values_pane_t4

0x910a,	// (0x0002e880) blid2_tripm_values_pane_t5

0x9118,	// (0x0002e88e) blid2_tripm_values_pane_t6

0x9126,	// (0x0002e89c) blid2_tripm_values_pane_t7

0x9134,	// (0x0002e8aa) blid2_tripm_values_pane_t8

0x9142,	// (0x0002e8b8) blid2_tripm_values_pane_t9

0x0008,

0xfb4d,	// (0x000352c3) blid2_tripm_values_pane_t

0x391f,	// (0x00029095) call_video_pane_t1_ParamLimits

0x3939,	// (0x000290af) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000349e4) call_video_pane_t_ParamLimits

0x5a03,	// (0x0002b179) msg_header_pane_g1_ParamLimits

0x5a0f,	// (0x0002b185) msg_header_pane_g2_ParamLimits

0x5a0f,	// (0x0002b185) msg_header_pane_g2

0x0001,

0xf488,	// (0x00034bfe) msg_header_pane_g_ParamLimits

0xf488,	// (0x00034bfe) msg_header_pane_g

0x2cd7,	// (0x0002844d) main_clock2_pane_ParamLimits

0x79af,	// (0x0002d125) grid_clock2_toolbar_pane_ParamLimits

0x79af,	// (0x0002d125) grid_clock2_toolbar_pane

0x79af,	// (0x0002d125) listscroll_clock2_pane_ParamLimits

0x79af,	// (0x0002d125) listscroll_clock2_pane

0x7a92,	// (0x0002d208) main_clock2_pane_t3_ParamLimits

0x7a92,	// (0x0002d208) main_clock2_pane_t3

0x7ab4,	// (0x0002d22a) main_clock2_pane_t4_ParamLimits

0x7ab4,	// (0x0002d22a) main_clock2_pane_t4

0xd932,	// (0x000330a8) cell_clock2_toolbar_pane

0xd93a,	// (0x000330b0) cell_clock2_toolbar_pane_cp01

0xd93a,	// (0x000330b0) cell_clock2_toolbar_pane_cp02

0xd942,	// (0x000330b8) cell_clock2_toolbar_pane_cp03

0xd94a,	// (0x000330c0) list_clock2_pane

0x500b,	// (0x0002a781) scroll_pane_cp10

0xd952,	// (0x000330c8) list_single_clock2_pane_ParamLimits

0xd952,	// (0x000330c8) list_single_clock2_pane

0x33a7,	// (0x00028b1d) list_highlight_pane_cp08

0xd95f,	// (0x000330d5) list_single_clock2_pane_t1

0xd96d,	// (0x000330e3) list_single_clock2_pane_t2

0x0001,

0xfb60,	// (0x000352d6) list_single_clock2_pane_t

0x231d,	// (0x00027a93) bg_button_pane_cp10

0xd97b,	// (0x000330f1) cell_clock2_toolbar_pane_g1

0x1221,	// (0x00026997) aid_main_viewer_pane_g1_ParamLimits

0x1221,	// (0x00026997) aid_main_viewer_pane_g1

0x122d,	// (0x000269a3) aid_main_viewer_pane_g2_ParamLimits

0x122d,	// (0x000269a3) aid_main_viewer_pane_g2

0x5a9c,	// (0x0002b212) aid_main_viewer_pane_g3_ParamLimits

0x5a9c,	// (0x0002b212) aid_main_viewer_pane_g3

0x5aab,	// (0x0002b221) aid_main_viewer_pane_g4_ParamLimits

0x5aab,	// (0x0002b221) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x00034c0f) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x00034c0f) aid_main_viewer_pane_g

0x1259,	// (0x000269cf) main_calc_pane_ParamLimits

0x127d,	// (0x000269f3) main_dialer2_pane_ParamLimits

0xb294,	// (0x00030a0a) main_cam6_pane

0xb294,	// (0x00030a0a) main_vid6_pane

0x79bb,	// (0x0002d131) listscroll_gen_pane_cp06_ParamLimits

0x79bb,	// (0x0002d131) listscroll_gen_pane_cp06

0x7ad5,	// (0x0002d24b) main_clock2_pane_t5_ParamLimits

0x7ad5,	// (0x0002d24b) main_clock2_pane_t5

0x7b2c,	// (0x0002d2a2) aid_call2_pane_cp10_ParamLimits

0x7b3e,	// (0x0002d2b4) aid_call_pane_cp10_ParamLimits

0x51e5,	// (0x0002a95b) popup_clock_analogue_window_cp10_g1_ParamLimits

0x51e5,	// (0x0002a95b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7b50,	// (0x0002d2c6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7b50,	// (0x0002d2c6) popup_clock_analogue_window_cp10_g4_ParamLimits

0x51e5,	// (0x0002a95b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x00034f5d) popup_clock_analogue_window_cp10_g_ParamLimits

0x7b62,	// (0x0002d2d8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7f9c,	// (0x0002d712) cell_dialer2_keypad_pane_g2_ParamLimits

0x7f9c,	// (0x0002d712) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x00035043) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x00035043) cell_dialer2_keypad_pane_g

0x7fb8,	// (0x0002d72e) cell_dialer2_keypad_pane_t1

0x8461,	// (0x0002dbd7) main_cset_text2_pane_ParamLimits

0x8461,	// (0x0002dbd7) main_cset_text2_pane

0xd66d,	// (0x00032de3) area_vitu2_query_pane_g1_ParamLimits

0x8bf6,	// (0x0002e36c) area_vitu2_query_pane_g2_ParamLimits

0xfa7d,	// (0x000351f3) area_vitu2_query_pane_g_ParamLimits

0xd6f1,	// (0x00032e67) area_vitu2_query_pane_t7_ParamLimits

0xd6f1,	// (0x00032e67) area_vitu2_query_pane_t7

0x8c51,	// (0x0002e3c7) bg_button_pane_cp018_ParamLimits

0x8c5e,	// (0x0002e3d4) bg_button_pane_cp021_ParamLimits

0x8c6a,	// (0x0002e3e0) bg_button_pane_cp022_ParamLimits

0x8c6a,	// (0x0002e3e0) bg_vkb2_func_pane_cp08_ParamLimits

0x8c51,	// (0x0002e3c7) bg_vkb2_func_pane_cp06_ParamLimits

0x8c5e,	// (0x0002e3d4) bg_vkb2_func_pane_cp07_ParamLimits

0x8c79,	// (0x0002e3ef) input_focus_pane_cp09_ParamLimits

0xd983,	// (0x000330f9) cam6_autofocus_pane_ParamLimits

0xd983,	// (0x000330f9) cam6_autofocus_pane

0x2298,	// (0x00027a0e) cam6_image_uncrop_pane_ParamLimits

0x2298,	// (0x00027a0e) cam6_image_uncrop_pane

0x22a5,	// (0x00027a1b) cam6_indi_pane_ParamLimits

0x22a5,	// (0x00027a1b) cam6_indi_pane

0x22bb,	// (0x00027a31) cam6_mode_pane_ParamLimits

0x22bb,	// (0x00027a31) cam6_mode_pane

0x22cd,	// (0x00027a43) cam6_timer_pane_ParamLimits

0x22cd,	// (0x00027a43) cam6_timer_pane

0x22d9,	// (0x00027a4f) cam6_zoom_pane_ParamLimits

0x22d9,	// (0x00027a4f) cam6_zoom_pane

0x9150,	// (0x0002e8c6) cam6_mode_pane_g1_ParamLimits

0x9150,	// (0x0002e8c6) cam6_mode_pane_g1

0x9160,	// (0x0002e8d6) cam6_mode_pane_g2_ParamLimits

0x9160,	// (0x0002e8d6) cam6_mode_pane_g2

0x9170,	// (0x0002e8e6) cam6_mode_pane_g3_ParamLimits

0x9170,	// (0x0002e8e6) cam6_mode_pane_g3

0x9180,	// (0x0002e8f6) cam6_mode_pane_g4_ParamLimits

0x9180,	// (0x0002e8f6) cam6_mode_pane_g4

0x0003,

0xfb65,	// (0x000352db) cam6_mode_pane_g_ParamLimits

0xfb65,	// (0x000352db) cam6_mode_pane_g

0xd98f,	// (0x00033105) bg_tb_trans_pane_cp08_ParamLimits

0xd98f,	// (0x00033105) bg_tb_trans_pane_cp08

0xd99d,	// (0x00033113) cam6_battery_pane_ParamLimits

0xd99d,	// (0x00033113) cam6_battery_pane

0xd9b3,	// (0x00033129) cam6_indi_pane_g1_ParamLimits

0xd9b3,	// (0x00033129) cam6_indi_pane_g1

0xd9c5,	// (0x0003313b) cam6_indi_pane_g2_ParamLimits

0xd9c5,	// (0x0003313b) cam6_indi_pane_g2

0xd9d7,	// (0x0003314d) cam6_indi_pane_g3_ParamLimits

0xd9d7,	// (0x0003314d) cam6_indi_pane_g3

0x0002,

0xfb6e,	// (0x000352e4) cam6_indi_pane_g_ParamLimits

0xfb6e,	// (0x000352e4) cam6_indi_pane_g

0xd9e9,	// (0x0003315f) cam6_indi_pane_t1_ParamLimits

0xd9e9,	// (0x0003315f) cam6_indi_pane_t1

0x8159,	// (0x0002d8cf) cam6_autofocus_pane_g1

0x8151,	// (0x0002d8c7) cam6_autofocus_pane_g2

0x8169,	// (0x0002d8df) cam6_autofocus_pane_g3

0x8161,	// (0x0002d8d7) cam6_autofocus_pane_g4

0x0003,

0xfb75,	// (0x000352eb) cam6_autofocus_pane_g

0xda0f,	// (0x00033185) cam6_timer_pane_g1

0xda17,	// (0x0003318d) cam6_timer_pane_t1

0xda25,	// (0x0003319b) cam6_zoom_cont_pane

0xda2d,	// (0x000331a3) cam6_zoom_pane_g1

0xda35,	// (0x000331ab) cam6_zoom_pane_g2

0x9190,	// (0x0002e906) cam6_zoom_pane_g3

0x0002,

0xfb7e,	// (0x000352f4) cam6_zoom_pane_g

0xc3cf,	// (0x00031b45) cam6_battery_pane_g1

0xc3cf,	// (0x00031b45) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x00034e65) cam6_battery_pane_g

0xda3d,	// (0x000331b3) cam6_zoom_cont_pane_g1

0xda46,	// (0x000331bc) cam6_zoom_cont_pane_g2

0xda4f,	// (0x000331c5) cam6_zoom_cont_pane_g3

0x0002,

0xfb85,	// (0x000352fb) cam6_zoom_cont_pane_g

0x91ad,	// (0x0002e923) cam6_mode_pane_cp_ParamLimits

0x91ad,	// (0x0002e923) cam6_mode_pane_cp

0x91bf,	// (0x0002e935) cam6_zoom_pane_cp_ParamLimits

0x91bf,	// (0x0002e935) cam6_zoom_pane_cp

0x91cb,	// (0x0002e941) vid6_image_uncrop_cif_pane_ParamLimits

0x91cb,	// (0x0002e941) vid6_image_uncrop_cif_pane

0x91d9,	// (0x0002e94f) vid6_image_uncrop_nhd_pane_ParamLimits

0x91d9,	// (0x0002e94f) vid6_image_uncrop_nhd_pane

0x91e6,	// (0x0002e95c) vid6_image_uncrop_vga_pane_ParamLimits

0x91e6,	// (0x0002e95c) vid6_image_uncrop_vga_pane

0x91f3,	// (0x0002e969) vid6_image_uncrop_wvga_pane_ParamLimits

0x91f3,	// (0x0002e969) vid6_image_uncrop_wvga_pane

0x9200,	// (0x0002e976) vid6_indi_pane_ParamLimits

0x9200,	// (0x0002e976) vid6_indi_pane

0xd98f,	// (0x00033105) bg_tb_trans_pane_cp09_ParamLimits

0xd98f,	// (0x00033105) bg_tb_trans_pane_cp09

0xda63,	// (0x000331d9) cam6_battery_pane_cp_ParamLimits

0xda63,	// (0x000331d9) cam6_battery_pane_cp

0xda6f,	// (0x000331e5) vid6_indi_pane_g1_ParamLimits

0xda6f,	// (0x000331e5) vid6_indi_pane_g1

0xda81,	// (0x000331f7) vid6_indi_pane_g2_ParamLimits

0xda81,	// (0x000331f7) vid6_indi_pane_g2

0xda93,	// (0x00033209) vid6_indi_pane_g3_ParamLimits

0xda93,	// (0x00033209) vid6_indi_pane_g3

0xdaa8,	// (0x0003321e) vid6_indi_pane_g4_ParamLimits

0xdaa8,	// (0x0003321e) vid6_indi_pane_g4

0xdabd,	// (0x00033233) vid6_indi_pane_g5_ParamLimits

0xdabd,	// (0x00033233) vid6_indi_pane_g5

0x0004,

0xfb8c,	// (0x00035302) vid6_indi_pane_g_ParamLimits

0xfb8c,	// (0x00035302) vid6_indi_pane_g

0xdad7,	// (0x0003324d) vid6_indi_pane_t1_ParamLimits

0xdad7,	// (0x0003324d) vid6_indi_pane_t1

0xdaed,	// (0x00033263) vid6_indi_pane_t2_ParamLimits

0xdaed,	// (0x00033263) vid6_indi_pane_t2

0xdb15,	// (0x0003328b) vid6_indi_pane_t3_ParamLimits

0xdb15,	// (0x0003328b) vid6_indi_pane_t3

0xdb3d,	// (0x000332b3) vid6_indi_pane_t4_ParamLimits

0xdb3d,	// (0x000332b3) vid6_indi_pane_t4

0x0003,

0xfb97,	// (0x0003530d) vid6_indi_pane_t_ParamLimits

0xfb97,	// (0x0003530d) vid6_indi_pane_t

0xdb61,	// (0x000332d7) wait_bar_pane_cp08

0x9217,	// (0x0002e98d) main_cset_text2_pane_t1_ParamLimits

0x9217,	// (0x0002e98d) main_cset_text2_pane_t1

0x9198,	// (0x0002e90e) listscroll_gen_pane_cp06_t1_ParamLimits

0x9198,	// (0x0002e90e) listscroll_gen_pane_cp06_t1

0xb294,	// (0x00030a0a) main_cam6_set_pane

0xd014,	// (0x0003278a) bg_tb_trans_pane_cp06_ParamLimits

0xd02a,	// (0x000327a0) cam4_indicators_pane_g1_ParamLimits

0xd03b,	// (0x000327b1) cam4_indicators_pane_g2_ParamLimits

0xf905,	// (0x0003507b) cam4_indicators_pane_g_ParamLimits

0xd053,	// (0x000327c9) cam4_indicators_pane_t1_ParamLimits

0xb286,	// (0x000309fc) bg_tb_trans_pane_cp07_ParamLimits

0xd07d,	// (0x000327f3) vid4_indicators_pane_g1_ParamLimits

0xd091,	// (0x00032807) vid4_indicators_pane_g2_ParamLimits

0xd0a5,	// (0x0003281b) vid4_indicators_pane_g3_ParamLimits

0xd0b6,	// (0x0003282c) vid4_indicators_pane_g4_ParamLimits

0xf917,	// (0x0003508d) vid4_indicators_pane_g_ParamLimits

0xd0d2,	// (0x00032848) vid4_indicators_pane_t1_ParamLimits

0xd76e,	// (0x00032ee4) vid4_progress_pane_g1_ParamLimits

0xd77e,	// (0x00032ef4) vid4_progress_pane_g2_ParamLimits

0x225f,	// (0x000279d5) vid4_progress_pane_g3_ParamLimits

0xd78e,	// (0x00032f04) vid4_progress_pane_g4_ParamLimits

0xfac8,	// (0x0003523e) vid4_progress_pane_g_ParamLimits

0x2271,	// (0x000279e7) vid4_progress_pane_t1_ParamLimits

0xd7ac,	// (0x00032f22) vid4_progress_pane_t2_ParamLimits

0xd7c1,	// (0x00032f37) vid4_progress_pane_t3_ParamLimits

0xfad3,	// (0x00035249) vid4_progress_pane_t_ParamLimits

0x2287,	// (0x000279fd) wait_bar_pane_cp07_ParamLimits

0x9232,	// (0x0002e9a8) main_cam6_set_pane_g2_ParamLimits

0x9232,	// (0x0002e9a8) main_cam6_set_pane_g2

0x9254,	// (0x0002e9ca) main_cset6_listscroll_pane_ParamLimits

0x9254,	// (0x0002e9ca) main_cset6_listscroll_pane

0x926e,	// (0x0002e9e4) main_cset6_slider_pane_ParamLimits

0x926e,	// (0x0002e9e4) main_cset6_slider_pane

0x9284,	// (0x0002e9fa) main_cset6_text2_pane_ParamLimits

0x9284,	// (0x0002e9fa) main_cset6_text2_pane

0xdb70,	// (0x000332e6) main_cset6_text_pane

0xdb78,	// (0x000332ee) main_cset_list_pane_copy1_ParamLimits

0xdb78,	// (0x000332ee) main_cset_list_pane_copy1

0xdb88,	// (0x000332fe) scroll_pane_cp028_copy1

0x9292,	// (0x0002ea08) cset_list_set_pane_copy1

0x92a3,	// (0x0002ea19) aid_position_infowindow_above_copy1

0x92ab,	// (0x0002ea21) aid_position_infowindow_below_copy1

0x92b3,	// (0x0002ea29) cset_list_set_pane_g1_copy1

0x92bb,	// (0x0002ea31) cset_list_set_pane_g3_copy1_ParamLimits

0x92bb,	// (0x0002ea31) cset_list_set_pane_g3_copy1

0x92ca,	// (0x0002ea40) cset_list_set_pane_t1_copy1_ParamLimits

0x92ca,	// (0x0002ea40) cset_list_set_pane_t1_copy1

0x6a87,	// (0x0002c1fd) list_highlight_pane_cp021_copy1_ParamLimits

0x6a87,	// (0x0002c1fd) list_highlight_pane_cp021_copy1

0xdb91,	// (0x00033307) cset6_slider_pane_ParamLimits

0xdb91,	// (0x00033307) cset6_slider_pane

0xdbbd,	// (0x00033333) main_cset6_slider_pane_g1_ParamLimits

0xdbbd,	// (0x00033333) main_cset6_slider_pane_g1

0x92df,	// (0x0002ea55) main_cset6_slider_pane_g2_ParamLimits

0x92df,	// (0x0002ea55) main_cset6_slider_pane_g2

0xd2c0,	// (0x00032a36) main_cset6_slider_pane_g3_ParamLimits

0xd2c0,	// (0x00032a36) main_cset6_slider_pane_g3

0x9307,	// (0x0002ea7d) main_cset6_slider_pane_g4_ParamLimits

0x9307,	// (0x0002ea7d) main_cset6_slider_pane_g4

0x852c,	// (0x0002dca2) main_cset6_slider_pane_g5_ParamLimits

0x852c,	// (0x0002dca2) main_cset6_slider_pane_g5

0xd2c0,	// (0x00032a36) main_cset6_slider_pane_g7_ParamLimits

0xd2c0,	// (0x00032a36) main_cset6_slider_pane_g7

0xd2cc,	// (0x00032a42) main_cset6_slider_pane_g8_ParamLimits

0xd2cc,	// (0x00032a42) main_cset6_slider_pane_g8

0x84e4,	// (0x0002dc5a) main_cset6_slider_pane_g9_ParamLimits

0x84e4,	// (0x0002dc5a) main_cset6_slider_pane_g9

0x84f0,	// (0x0002dc66) main_cset6_slider_pane_g10_ParamLimits

0x84f0,	// (0x0002dc66) main_cset6_slider_pane_g10

0xd2d8,	// (0x00032a4e) main_cset6_slider_pane_g11_ParamLimits

0xd2d8,	// (0x00032a4e) main_cset6_slider_pane_g11

0xd2e4,	// (0x00032a5a) main_cset6_slider_pane_g12_ParamLimits

0xd2e4,	// (0x00032a5a) main_cset6_slider_pane_g12

0x84fc,	// (0x0002dc72) main_cset6_slider_pane_g13_ParamLimits

0x84fc,	// (0x0002dc72) main_cset6_slider_pane_g13

0x8508,	// (0x0002dc7e) main_cset6_slider_pane_g14_ParamLimits

0x8508,	// (0x0002dc7e) main_cset6_slider_pane_g14

0x9313,	// (0x0002ea89) main_cset6_slider_pane_g15_ParamLimits

0x9313,	// (0x0002ea89) main_cset6_slider_pane_g15

0x852c,	// (0x0002dca2) main_cset6_slider_pane_g16_ParamLimits

0x852c,	// (0x0002dca2) main_cset6_slider_pane_g16

0x8538,	// (0x0002dcae) main_cset6_slider_pane_g17_ParamLimits

0x8538,	// (0x0002dcae) main_cset6_slider_pane_g17

0x0011,

0xfba0,	// (0x00035316) main_cset6_slider_pane_g_ParamLimits

0xfba0,	// (0x00035316) main_cset6_slider_pane_g

0xdbe5,	// (0x0003335b) main_cset6_slider_pane_t1_ParamLimits

0xdbe5,	// (0x0003335b) main_cset6_slider_pane_t1

0x9337,	// (0x0002eaad) main_cset6_slider_pane_t2_ParamLimits

0x9337,	// (0x0002eaad) main_cset6_slider_pane_t2

0x9362,	// (0x0002ead8) main_cset6_slider_pane_t3_ParamLimits

0x9362,	// (0x0002ead8) main_cset6_slider_pane_t3

0x938d,	// (0x0002eb03) main_cset6_slider_pane_t4_ParamLimits

0x938d,	// (0x0002eb03) main_cset6_slider_pane_t4

0x93b8,	// (0x0002eb2e) main_cset6_slider_pane_t5_ParamLimits

0x93b8,	// (0x0002eb2e) main_cset6_slider_pane_t5

0xdc26,	// (0x0003339c) main_cset6_slider_pane_t7_ParamLimits

0xdc26,	// (0x0003339c) main_cset6_slider_pane_t7

0x93e3,	// (0x0002eb59) main_cset6_slider_pane_t8_ParamLimits

0x93e3,	// (0x0002eb59) main_cset6_slider_pane_t8

0x9407,	// (0x0002eb7d) main_cset6_slider_pane_t9_ParamLimits

0x9407,	// (0x0002eb7d) main_cset6_slider_pane_t9

0x942b,	// (0x0002eba1) main_cset6_slider_pane_t10_ParamLimits

0x942b,	// (0x0002eba1) main_cset6_slider_pane_t10

0x944f,	// (0x0002ebc5) main_cset6_slider_pane_t11_ParamLimits

0x944f,	// (0x0002ebc5) main_cset6_slider_pane_t11

0xdc5c,	// (0x000333d2) main_cset6_slider_pane_t14_ParamLimits

0xdc5c,	// (0x000333d2) main_cset6_slider_pane_t14

0xdc95,	// (0x0003340b) main_cset6_slider_pane_t15_ParamLimits

0xdc95,	// (0x0003340b) main_cset6_slider_pane_t15

0x000b,

0xfbc5,	// (0x0003533b) main_cset6_slider_pane_t_ParamLimits

0xfbc5,	// (0x0003533b) main_cset6_slider_pane_t

0xdcce,	// (0x00033444) cset_slider_pane_g1_copy1

0xdcd7,	// (0x0003344d) cset_slider_pane_g2_copy1

0xdce0,	// (0x00033456) cset_slider_pane_g3_copy1

0x231d,	// (0x00027a93) bg_popup_sub_pane_cp011_copy1

0xdce9,	// (0x0003345f) main_cset_text_pane_g1_copy1

0xd49b,	// (0x00032c11) main_cset_text_pane_t1_copy1

0xd4a9,	// (0x00032c1f) main_cset_text_pane_t2_copy1

0xd4b7,	// (0x00032c2d) main_cset_text_pane_t3_copy1

0xd4c5,	// (0x00032c3b) main_cset_text_pane_t4_copy1

0xdcf1,	// (0x00033467) main_cset_text_pane_t5_copy1

0xdcff,	// (0x00033475) main_cset_text_pane_t6_copy1

0xdd0d,	// (0x00033483) main_cset_text_pane_t7_copy1

0x9544,	// (0x0002ecba) main_cset_text2_pane_t1_copy1

0xb286,	// (0x000309fc) main_ncimui_pane

0x1497,	// (0x00026c0d) popup_query_ncimui_window_ParamLimits

0x1497,	// (0x00026c0d) popup_query_ncimui_window

0xc663,	// (0x00031dd9) field_cale_ev2_pane_g4_ParamLimits

0xc663,	// (0x00031dd9) field_cale_ev2_pane_g4

0x7f27,	// (0x0002d69d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7f27,	// (0x0002d69d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0003501e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0003501e) cell_video_dialer_keypad_pane_g

0x7f3f,	// (0x0002d6b5) cell_video_dialer_keypad_pane_t1

0x231d,	// (0x00027a93) bg_popup_window_pane_cp012

0x4e73,	// (0x0002a5e9) heading_pane_cp06

0xdd39,	// (0x000334af) ncim_query_content_pane

0x231d,	// (0x00027a93) bg_popup_heading_pane_cp01

0xdd41,	// (0x000334b7) ncim_heading_pane_t1

0xdd4f,	// (0x000334c5) ncim_indicator_popup_pane

0xdd61,	// (0x000334d7) ncim_query_button_pane

0xdd75,	// (0x000334eb) ncim_query_content_pane_t1

0xdd87,	// (0x000334fd) ncim_query_content_pane_t2

0x0005,

0xfc09,	// (0x0003537f) ncim_query_content_pane_t

0xddc1,	// (0x00033537) ncim_query_list_pane

0xddd3,	// (0x00033549) ncim_query_popup_pane

0xdd4f,	// (0x000334c5) ncim_indicator_popup_pane_ParamLimits

0x9684,	// (0x0002edfa) ncim_query_content_pane_g1_ParamLimits

0x9684,	// (0x0002edfa) ncim_query_content_pane_g1

0xdd75,	// (0x000334eb) ncim_query_content_pane_t1_ParamLimits

0xdd87,	// (0x000334fd) ncim_query_content_pane_t2_ParamLimits

0x9690,	// (0x0002ee06) ncim_query_content_pane_t3_ParamLimits

0x9690,	// (0x0002ee06) ncim_query_content_pane_t3

0x96b8,	// (0x0002ee2e) ncim_query_content_pane_t4_ParamLimits

0x96b8,	// (0x0002ee2e) ncim_query_content_pane_t4

0x96e0,	// (0x0002ee56) ncim_query_content_pane_t5_ParamLimits

0x96e0,	// (0x0002ee56) ncim_query_content_pane_t5

0xdd99,	// (0x0003350f) ncim_query_content_pane_t6_ParamLimits

0xdd99,	// (0x0003350f) ncim_query_content_pane_t6

0xfc09,	// (0x0003537f) ncim_query_content_pane_t_ParamLimits

0xddc1,	// (0x00033537) ncim_query_list_pane_ParamLimits

0xddd3,	// (0x00033549) ncim_query_popup_pane_ParamLimits

0xdde7,	// (0x0003355d) wait_bar_pane_cp04

0x231d,	// (0x00027a93) input_focus_pane_cp011

0xddef,	// (0x00033565) ncim_query_popup_pane_t1

0xddfd,	// (0x00033573) ncim_list_query_list_pane_ParamLimits

0xddfd,	// (0x00033573) ncim_list_query_list_pane

0x231d,	// (0x00027a93) bg_button_pane_cp027

0xde10,	// (0x00033586) ncim_query_button_pane_g1

0x231d,	// (0x00027a93) list_highlight_pane_cp012

0xde1a,	// (0x00033590) ncim_list_query_list_pane_g1

0xde22,	// (0x00033598) ncim_list_query_list_pane_t1

0xd047,	// (0x000327bd) cam4_indicators_pane_g3_ParamLimits

0xd047,	// (0x000327bd) cam4_indicators_pane_g3

0xd0c2,	// (0x00032838) vid4_indicators_pane_g5_ParamLimits

0xd0c2,	// (0x00032838) vid4_indicators_pane_g5

0xd79d,	// (0x00032f13) vid4_progress_pane_g5_ParamLimits

0xd79d,	// (0x00032f13) vid4_progress_pane_g5

0x9570,	// (0x0002ece6) main_ncimui_pane_g1

0x95d9,	// (0x0002ed4f) ncimui_group_query_pane_ParamLimits

0x95d9,	// (0x0002ed4f) ncimui_group_query_pane

0x9621,	// (0x0002ed97) ncimui_list_pane_ParamLimits

0x9621,	// (0x0002ed97) ncimui_list_pane

0x9647,	// (0x0002edbd) ncimui_text_pane_ParamLimits

0x9647,	// (0x0002edbd) ncimui_text_pane

0x9708,	// (0x0002ee7e) ncimui_text_pane_t1_ParamLimits

0x9708,	// (0x0002ee7e) ncimui_text_pane_t1

0xde30,	// (0x000335a6) ncimui_list_single_graphic_pane_ParamLimits

0xde30,	// (0x000335a6) ncimui_list_single_graphic_pane

0x9725,	// (0x0002ee9b) ncimui_query_pane_ParamLimits

0x9725,	// (0x0002ee9b) ncimui_query_pane

0x231d,	// (0x00027a93) list_highlight_pane_cp013

0xde40,	// (0x000335b6) ncim_list_query_list_pane_t1_copy1

0xde4e,	// (0x000335c4) ncim_list_single_graphic_pane_g1

0x9738,	// (0x0002eeae) ncim_query_button_pane_cp01

0x9744,	// (0x0002eeba) ncim_query_entry_pane_ParamLimits

0x9744,	// (0x0002eeba) ncim_query_entry_pane

0x9757,	// (0x0002eecd) ncimui_query_pane_g1

0x9763,	// (0x0002eed9) ncimui_query_pane_t1_ParamLimits

0x9763,	// (0x0002eed9) ncimui_query_pane_t1

0x6a87,	// (0x0002c1fd) input_focus_pane_cp012

0xde56,	// (0x000335cc) ncim_query_entry_pane_t1

0x2cd7,	// (0x0002844d) main_im_pane_ParamLimits

0xb286,	// (0x000309fc) main_mobtv_pane_ParamLimits

0xb286,	// (0x000309fc) main_mobtv_pane

0x84e4,	// (0x0002dc5a) main_cset6_slider_pane_g18_ParamLimits

0x84e4,	// (0x0002dc5a) main_cset6_slider_pane_g18

0x932b,	// (0x0002eaa1) main_cset6_slider_pane_g19_ParamLimits

0x932b,	// (0x0002eaa1) main_cset6_slider_pane_g19

0xde68,	// (0x000335de) bg_main_mobtv_pane_ParamLimits

0xde68,	// (0x000335de) bg_main_mobtv_pane

0x977c,	// (0x0002eef2) main_mobtv_info_pane

0x9785,	// (0x0002eefb) main_mobtv_loading_pane_ParamLimits

0x9785,	// (0x0002eefb) main_mobtv_loading_pane

0xde76,	// (0x000335ec) main_mobtv_pg_channel_list_pane

0xde80,	// (0x000335f6) main_mobtv_pg_hdr_pane

0x9792,	// (0x0002ef08) main_mobtv_programe_curr_pane_ParamLimits

0x9792,	// (0x0002ef08) main_mobtv_programe_curr_pane

0x979f,	// (0x0002ef15) main_mobtv_programe_next_pane_ParamLimits

0x979f,	// (0x0002ef15) main_mobtv_programe_next_pane

0xde89,	// (0x000335ff) popup_mobtv_noti_window

0xc3cf,	// (0x00031b45) main_tv_pg_hdr_pane_g1

0xde91,	// (0x00033607) main_tv_pg_hdr_pane_g2

0xde99,	// (0x0003360f) main_tv_pg_hdr_pane_g3

0xdea1,	// (0x00033617) main_tv_pg_hdr_pane_g4

0xdea9,	// (0x0003361f) main_tv_pg_hdr_pane_g5

0xdeb1,	// (0x00033627) main_tv_pg_hdr_pane_g6

0xdeb9,	// (0x0003362f) main_tv_pg_hdr_pane_g7

0xdec1,	// (0x00033637) main_tv_pg_hdr_pane_g8

0xdec9,	// (0x0003363f) main_tv_pg_hdr_pane_g9

0xded1,	// (0x00033647) main_tv_pg_hdr_pane_g10

0xdedb,	// (0x00033651) main_tv_pg_hdr_pane_g11

0x000a,

0xfc16,	// (0x0003538c) main_tv_pg_hdr_pane_g

0xdee5,	// (0x0003365b) main_tv_pg_hdr_pane_t1

0xdef3,	// (0x00033669) main_tv_pg_hdr_pane_t2

0xdf01,	// (0x00033677) main_tv_pg_hdr_pane_t3

0xdf0f,	// (0x00033685) main_tv_pg_hdr_pane_t4

0xdf1d,	// (0x00033693) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2d,	// (0x000353a3) main_tv_pg_hdr_pane_t

0xdf2b,	// (0x000336a1) single_mobtv_pg_channel_pane_ParamLimits

0xdf2b,	// (0x000336a1) single_mobtv_pg_channel_pane

0xdf3d,	// (0x000336b3) single_mobtv_pg_channel_table_pane

0xdf46,	// (0x000336bc) single_mobtv_pg_channel_thumb_pane

0xdf4f,	// (0x000336c5) single_tv_pg_channel_pane_g1

0xdf58,	// (0x000336ce) single_tv_pg_channel_pane_g2

0x0001,

0xfc38,	// (0x000353ae) single_tv_pg_channel_pane_g

0xc5fe,	// (0x00031d74) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc5fe,	// (0x00031d74) bg_single_mobtv_pg_channel_thumb_pane

0xdf61,	// (0x000336d7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf61,	// (0x000336d7) single_mobtv_pg_channel_thumb_pane_g1

0xdf6f,	// (0x000336e5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf6f,	// (0x000336e5) single_mobtv_pg_channel_thumb_pane_g2

0xdf7b,	// (0x000336f1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf7b,	// (0x000336f1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3d,	// (0x000353b3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3d,	// (0x000353b3) single_mobtv_pg_channel_thumb_pane_g

0xdf87,	// (0x000336fd) single_mobtv_pg_channel_thumb_pane_t1

0xdf95,	// (0x0003370b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc44,	// (0x000353ba) single_mobtv_pg_channel_thumb_pane_t

0xc3cf,	// (0x00031b45) bg_single_mobtv_pg_channel_table_pane_g1

0xc3cf,	// (0x00031b45) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x00034e65) bg_single_mobtv_pg_channel_table_pane_g

0xdfa3,	// (0x00033719) single_mobtv_pg_channel_table_pane_t1

0xdfb1,	// (0x00033727) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc49,	// (0x000353bf) single_mobtv_pg_channel_table_pane_t

0x97b4,	// (0x0002ef2a) main_mobtv_info_pane_g1_ParamLimits

0x97b4,	// (0x0002ef2a) main_mobtv_info_pane_g1

0x97d0,	// (0x0002ef46) main_mobtv_info_pane_t1_ParamLimits

0x97d0,	// (0x0002ef46) main_mobtv_info_pane_t1

0x9836,	// (0x0002efac) main_mobtv_info_pane_t2_ParamLimits

0x9836,	// (0x0002efac) main_mobtv_info_pane_t2

0x0002,

0xfc53,	// (0x000353c9) main_mobtv_info_pane_t_ParamLimits

0xfc53,	// (0x000353c9) main_mobtv_info_pane_t

0x98b9,	// (0x0002f02f) wait_bar_pane_cp05

0x98c9,	// (0x0002f03f) main_mobtv_loading_pane_g1_ParamLimits

0x98c9,	// (0x0002f03f) main_mobtv_loading_pane_g1

0x98da,	// (0x0002f050) main_mobtv_loading_pane_g2_ParamLimits

0x98da,	// (0x0002f050) main_mobtv_loading_pane_g2

0x98e6,	// (0x0002f05c) main_mobtv_loading_pane_g3_ParamLimits

0x98e6,	// (0x0002f05c) main_mobtv_loading_pane_g3

0x0002,

0xfc5a,	// (0x000353d0) main_mobtv_loading_pane_g_ParamLimits

0xfc5a,	// (0x000353d0) main_mobtv_loading_pane_g

0xdfbf,	// (0x00033735) main_mobtv_loading_pane_t1_ParamLimits

0xdfbf,	// (0x00033735) main_mobtv_loading_pane_t1

0xdfd7,	// (0x0003374d) main_mobtv_loading_pane_t2_ParamLimits

0xdfd7,	// (0x0003374d) main_mobtv_loading_pane_t2

0x0001,

0xfc61,	// (0x000353d7) main_mobtv_loading_pane_t_ParamLimits

0xfc61,	// (0x000353d7) main_mobtv_loading_pane_t

0x98f7,	// (0x0002f06d) wait_bar_pane_cp06_ParamLimits

0x98f7,	// (0x0002f06d) wait_bar_pane_cp06

0xdffb,	// (0x00033771) main_mobtv_programe_curr_pane_t1

0xe009,	// (0x0003377f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc66,	// (0x000353dc) main_mobtv_programe_curr_pane_t

0xe017,	// (0x0003378d) main_mobtv_programe_next_pane_t1

0xe025,	// (0x0003379b) main_mobtv_programe_next_pane_t2

0xe033,	// (0x000337a9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6b,	// (0x000353e1) main_mobtv_programe_next_pane_t

0x231d,	// (0x00027a93) bg_popup_mobtv_noti_window_pane

0xe041,	// (0x000337b7) popup_mobtv_noti_window_g1

0xe049,	// (0x000337bf) popup_mobtv_noti_window_t1

0xe057,	// (0x000337cd) popup_mobtv_noti_window_t2

0x0001,

0xfc72,	// (0x000353e8) popup_mobtv_noti_window_t

0xc3cf,	// (0x00031b45) bg_popup_mobtv_noti_window_pane_g1

0xb294,	// (0x00030a0a) sc_clock_pane

0xb294,	// (0x00030a0a) main_fs_bigclock_pane

0x8fcd,	// (0x0002e743) blid2_tripm_pane_t4_ParamLimits

0x8fcd,	// (0x0002e743) blid2_tripm_pane_t4

0x9906,	// (0x0002f07c) sc_clock_pane_g1_ParamLimits

0x9906,	// (0x0002f07c) sc_clock_pane_g1

0x9918,	// (0x0002f08e) sc_clock_pane_t1_ParamLimits

0x9918,	// (0x0002f08e) sc_clock_pane_t1

0x993a,	// (0x0002f0b0) sc_clock_pane_t2_ParamLimits

0x993a,	// (0x0002f0b0) sc_clock_pane_t2

0x9950,	// (0x0002f0c6) sc_clock_pane_t3_ParamLimits

0x9950,	// (0x0002f0c6) sc_clock_pane_t3

0x0004,

0xfc77,	// (0x000353ed) sc_clock_pane_t_ParamLimits

0xfc77,	// (0x000353ed) sc_clock_pane_t

0xa7f2,	// (0x0002ff68) main_fs_bigclock_indicator_pane_ParamLimits

0xa7f2,	// (0x0002ff68) main_fs_bigclock_indicator_pane

0x99e6,	// (0x0002f15c) main_fs_bigclock_pane_g1_ParamLimits

0x99e6,	// (0x0002f15c) main_fs_bigclock_pane_g1

0xa7fe,	// (0x0002ff74) main_fs_bigclock_pane_t1_ParamLimits

0xa7fe,	// (0x0002ff74) main_fs_bigclock_pane_t1

0xa810,	// (0x0002ff86) main_fs_bigclock_pane_t2_ParamLimits

0xa810,	// (0x0002ff86) main_fs_bigclock_pane_t2

0xa822,	// (0x0002ff98) main_fs_bigclock_pane_t3_ParamLimits

0xa822,	// (0x0002ff98) main_fs_bigclock_pane_t3

0x0002,

0xfe7c,	// (0x000355f2) main_fs_bigclock_pane_t_ParamLimits

0xfe7c,	// (0x000355f2) main_fs_bigclock_pane_t

0xec5c,	// (0x000343d2) main_fs_bigclock_indicator_pane_g1

0xdd69,	// (0x000334df) ncim_query_content_pane_g2_ParamLimits

0xdd69,	// (0x000334df) ncim_query_content_pane_g2

0x0001,

0xfc04,	// (0x0003537a) ncim_query_content_pane_g_ParamLimits

0xfc04,	// (0x0003537a) ncim_query_content_pane_g

0x9967,	// (0x0002f0dd) sc_clock_pane_t4_ParamLimits

0x9967,	// (0x0002f0dd) sc_clock_pane_t4

0xb286,	// (0x000309fc) main_radioblah_pane

0xcf72,	// (0x000326e8) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf72,	// (0x000326e8) cell_call4_button_pane_t1_copy1

0x9588,	// (0x0002ecfe) main_ncimui_pane_t1_ParamLimits

0x9588,	// (0x0002ecfe) main_ncimui_pane_t1

0x95a2,	// (0x0002ed18) main_ncimui_pane_t2_ParamLimits

0x95a2,	// (0x0002ed18) main_ncimui_pane_t2

0x0002,

0xfbfd,	// (0x00035373) main_ncimui_pane_t_ParamLimits

0xfbfd,	// (0x00035373) main_ncimui_pane_t

0xe198,	// (0x0003390e) main_radioblah_anim_pane_ParamLimits

0xe198,	// (0x0003390e) main_radioblah_anim_pane

0xe1a9,	// (0x0003391f) main_radioblah_info_pane_ParamLimits

0xe1a9,	// (0x0003391f) main_radioblah_info_pane

0xe1bd,	// (0x00033933) main_radioblah_pane_t1_ParamLimits

0xe1bd,	// (0x00033933) main_radioblah_pane_t1

0xe1d9,	// (0x0003394f) main_radioblah_pane_t2_ParamLimits

0xe1d9,	// (0x0003394f) main_radioblah_pane_t2

0x0003,

0xfc98,	// (0x0003540e) main_radioblah_pane_t_ParamLimits

0xfc98,	// (0x0003540e) main_radioblah_pane_t

0x9a33,	// (0x0002f1a9) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9a33,	// (0x0002f1a9) main_radioblah_rocker_ctrl_pane

0xe221,	// (0x00033997) main_radioblah_info_pane_t1_ParamLimits

0xe221,	// (0x00033997) main_radioblah_info_pane_t1

0x9a87,	// (0x0002f1fd) main_radioblah_info_pane_t2_ParamLimits

0x9a87,	// (0x0002f1fd) main_radioblah_info_pane_t2

0x0003,

0xfca1,	// (0x00035417) main_radioblah_info_pane_t_ParamLimits

0xfca1,	// (0x00035417) main_radioblah_info_pane_t

0xc3cf,	// (0x00031b45) main_radioblah_rocker_ctrl_pane_g1

0x9b33,	// (0x0002f2a9) main_radioblah_rocker_ctrl_pane_g2

0x9b3b,	// (0x0002f2b1) main_radioblah_rocker_ctrl_pane_g3

0x9b43,	// (0x0002f2b9) main_radioblah_rocker_ctrl_pane_g4

0x9b4b,	// (0x0002f2c1) main_radioblah_rocker_ctrl_pane_g5

0x9b53,	// (0x0002f2c9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaa,	// (0x00035420) main_radioblah_rocker_ctrl_pane_g

0x9544,	// (0x0002ecba) main_cset_text2_pane_t1_copy1_ParamLimits

0xcffa,	// (0x00032770) cam4_image_uncrop_qvga_pane

0xd06d,	// (0x000327e3) vid4_image_uncrop_qcif_pane

0xd983,	// (0x000330f9) cam6_image_uncrop_qvga_pane_ParamLimits

0xd983,	// (0x000330f9) cam6_image_uncrop_qvga_pane

0xda57,	// (0x000331cd) vid6_image_uncrop_qcif_pane_ParamLimits

0xda57,	// (0x000331cd) vid6_image_uncrop_qcif_pane

0x231d,	// (0x00027a93) bg_popup_preview_window_pane_cp03

0xdd1b,	// (0x00033491) list_cset_text2_pane

0xdd23,	// (0x00033499) main_cset6_text2_pane_g1

0xdd2b,	// (0x000334a1) main_cset6_text2_pane_t1

0xe25b,	// (0x000339d1) list_cset_text2_pane_t1_ParamLimits

0xe25b,	// (0x000339d1) list_cset_text2_pane_t1

0xb286,	// (0x000309fc) main_radioblah_pane_ParamLimits

0x98a7,	// (0x0002f01d) main_mobtv_info_pane_t3_ParamLimits

0x98a7,	// (0x0002f01d) main_mobtv_info_pane_t3

0x9a21,	// (0x0002f197) main_radioblah_pane_g1

0x9a5b,	// (0x0002f1d1) main_radioblah_info_pane_g1

0x9ad8,	// (0x0002f24e) main_radioblah_info_pane_t3_ParamLimits

0x9ad8,	// (0x0002f24e) main_radioblah_info_pane_t3

0x4855,	// (0x00029fcb) highlight_cell_cale_month_pane_ParamLimits

0x4855,	// (0x00029fcb) highlight_cell_cale_month_pane

0xb294,	// (0x00030a0a) main_phob_fisheye_pane

0xc701,	// (0x00031e77) scroll_pane_cp0031_ParamLimits

0xc701,	// (0x00031e77) scroll_pane_cp0031

0xdb61,	// (0x000332d7) wait_bar_pane_cp08_ParamLimits

0x9292,	// (0x0002ea08) cset_list_set_pane_copy1_ParamLimits

0xe272,	// (0x000339e8) highlight_cell_cale_month_pane_g1

0x9b5b,	// (0x0002f2d1) highlight_cell_cale_month_pane_t1

0xd75d,	// (0x00032ed3) list_gen_pane_cp01

0xd281,	// (0x000329f7) scroll_pane_01

0x9b69,	// (0x0002f2df) list_single_double_fisheye_pane

0x9b72,	// (0x0002f2e8) list_double_fisheye_pane_g1_ParamLimits

0x9b72,	// (0x0002f2e8) list_double_fisheye_pane_g1

0x9b7e,	// (0x0002f2f4) list_double_fisheye_pane_g2_ParamLimits

0x9b7e,	// (0x0002f2f4) list_double_fisheye_pane_g2

0x9b92,	// (0x0002f308) list_double_fisheye_pane_g3_ParamLimits

0x9b92,	// (0x0002f308) list_double_fisheye_pane_g3

0x0004,

0xfcb7,	// (0x0003542d) list_double_fisheye_pane_g_ParamLimits

0xfcb7,	// (0x0003542d) list_double_fisheye_pane_g

0x9bbb,	// (0x0002f331) list_double_fisheye_pane_t1_ParamLimits

0x9bbb,	// (0x0002f331) list_double_fisheye_pane_t1

0x9bd6,	// (0x0002f34c) list_double_fisheye_pane_t2_ParamLimits

0x9bd6,	// (0x0002f34c) list_double_fisheye_pane_t2

0x0001,

0xfcc2,	// (0x00035438) list_double_fisheye_pane_t_ParamLimits

0xfcc2,	// (0x00035438) list_double_fisheye_pane_t

0xb294,	// (0x00030a0a) main_call5_pane

0x9990,	// (0x0002f106) sc_swipe_pane_ParamLimits

0x9990,	// (0x0002f106) sc_swipe_pane

0x9c09,	// (0x0002f37f) call5_image_pane_ParamLimits

0x9c09,	// (0x0002f37f) call5_image_pane

0x9c1e,	// (0x0002f394) call5_swipe_1_pane_ParamLimits

0x9c1e,	// (0x0002f394) call5_swipe_1_pane

0x9c2f,	// (0x0002f3a5) call5_swipe_2_pane_ParamLimits

0x9c2f,	// (0x0002f3a5) call5_swipe_2_pane

0x9c54,	// (0x0002f3ca) popup_call5_audio_first_window_ParamLimits

0x9c54,	// (0x0002f3ca) popup_call5_audio_first_window

0xc5fe,	// (0x00031d74) call5_swipe_1_pane_g1_ParamLimits

0xc5fe,	// (0x00031d74) call5_swipe_1_pane_g1

0xe27a,	// (0x000339f0) call5_swipe_1_pane_g2_ParamLimits

0xe27a,	// (0x000339f0) call5_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x0003543d) call5_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x0003543d) call5_swipe_1_pane_g

0xe286,	// (0x000339fc) call5_swipe_1_pane_t1_ParamLimits

0xe286,	// (0x000339fc) call5_swipe_1_pane_t1

0xc5fe,	// (0x00031d74) call5_swipe_2_pane_g1_ParamLimits

0xc5fe,	// (0x00031d74) call5_swipe_2_pane_g1

0xe29b,	// (0x00033a11) call5_swipe_2_pane_g2_ParamLimits

0xe29b,	// (0x00033a11) call5_swipe_2_pane_g2

0x0001,

0xfccc,	// (0x00035442) call5_swipe_2_pane_g_ParamLimits

0xfccc,	// (0x00035442) call5_swipe_2_pane_g

0xe2a7,	// (0x00033a1d) call5_swipe_2_pane_t1_ParamLimits

0xe2a7,	// (0x00033a1d) call5_swipe_2_pane_t1

0xe2bc,	// (0x00033a32) sc_swipe_pane_g1_ParamLimits

0xe2bc,	// (0x00033a32) sc_swipe_pane_g1

0xe2c9,	// (0x00033a3f) sc_swipe_pane_g2_ParamLimits

0xe2c9,	// (0x00033a3f) sc_swipe_pane_g2

0x0001,

0xfcd1,	// (0x00035447) sc_swipe_pane_g_ParamLimits

0xfcd1,	// (0x00035447) sc_swipe_pane_g

0xe2d5,	// (0x00033a4b) sc_swipe_pane_t1_ParamLimits

0xe2d5,	// (0x00033a4b) sc_swipe_pane_t1

0xb294,	// (0x00030a0a) main_cmail_launcher_pane

0x9c63,	// (0x0002f3d9) aid_size_cell_cmail_l_ParamLimits

0x9c63,	// (0x0002f3d9) aid_size_cell_cmail_l

0x9c7c,	// (0x0002f3f2) grid_cmail_l_pane_ParamLimits

0x9c7c,	// (0x0002f3f2) grid_cmail_l_pane

0x9c90,	// (0x0002f406) cell_cmail_l_pane_ParamLimits

0x9c90,	// (0x0002f406) cell_cmail_l_pane

0x9cb2,	// (0x0002f428) cell_cmail_l_pane_g1_ParamLimits

0x9cb2,	// (0x0002f428) cell_cmail_l_pane_g1

0x9cc3,	// (0x0002f439) cell_cmail_l_pane_t1_ParamLimits

0x9cc3,	// (0x0002f439) cell_cmail_l_pane_t1

0xe2ea,	// (0x00033a60) cell_cmail_l_pane_t2_ParamLimits

0xe2ea,	// (0x00033a60) cell_cmail_l_pane_t2

0x0001,

0xfcd6,	// (0x0003544c) cell_cmail_l_pane_t_ParamLimits

0xfcd6,	// (0x0003544c) cell_cmail_l_pane_t

0x6a87,	// (0x0002c1fd) grid_highlight_pane_cp018_ParamLimits

0x6a87,	// (0x0002c1fd) grid_highlight_pane_cp018

0x0d76,	// (0x000264ec) main2_pane_ParamLimits

0x0d76,	// (0x000264ec) main2_pane

0x2e4c,	// (0x000285c2) popup_sp_fs_action_menu_bg_pane_g1

0x2e54,	// (0x000285ca) popup_sp_fs_action_menu_bg_pane_g2

0x2e5c,	// (0x000285d2) popup_sp_fs_action_menu_bg_pane_g3

0x2e64,	// (0x000285da) popup_sp_fs_action_menu_bg_pane_g4

0x2e6c,	// (0x000285e2) popup_sp_fs_action_menu_bg_pane_g5

0x2e74,	// (0x000285ea) popup_sp_fs_action_menu_bg_pane_g6

0x2e7c,	// (0x000285f2) popup_sp_fs_action_menu_bg_pane_g7

0x2e84,	// (0x000285fa) popup_sp_fs_action_menu_bg_pane_g8

0x2e8c,	// (0x00028602) popup_sp_fs_action_menu_bg_pane_g9

0x2e94,	// (0x0002860a) popup_sp_fs_action_menu_bg_pane_g10

0x2e94,	// (0x0002860a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x00034900) popup_sp_fs_action_menu_bg_pane_g

0x3734,	// (0x00028eaa) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x2_t3_g3_g1

0x3740,	// (0x00028eb6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3740,	// (0x00028eb6) list_medium_line_x2_t3_g3_g2

0x374c,	// (0x00028ec2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x374c,	// (0x00028ec2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000349ae) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000349ae) list_medium_line_x2_t3_g3_g

0x3758,	// (0x00028ece) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3758,	// (0x00028ece) list_medium_line_x2_t3_g3_t1

0x376d,	// (0x00028ee3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x376d,	// (0x00028ee3) list_medium_line_x2_t3_g3_t2

0x377f,	// (0x00028ef5) list_medium_line_x2_t3_g3_t3_ParamLimits

0x377f,	// (0x00028ef5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000349b5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000349b5) list_medium_line_x2_t3_g3_t

0x3734,	// (0x00028eaa) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x2_t3_g2_g1

0x374c,	// (0x00028ec2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x374c,	// (0x00028ec2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000349bc) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000349bc) list_medium_line_x2_t3_g2_g

0x3794,	// (0x00028f0a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3794,	// (0x00028f0a) list_medium_line_x2_t3_g2_t1

0x37aa,	// (0x00028f20) list_medium_line_x2_t3_g2_t2_ParamLimits

0x37aa,	// (0x00028f20) list_medium_line_x2_t3_g2_t2

0x37bc,	// (0x00028f32) list_medium_line_x2_t3_g2_t3_ParamLimits

0x37bc,	// (0x00028f32) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000349c1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000349c1) list_medium_line_x2_t3_g2_t

0x3734,	// (0x00028eaa) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x2_t4_g4_g1

0x37d9,	// (0x00028f4f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x37d9,	// (0x00028f4f) list_medium_line_x2_t4_g4_g2

0x3740,	// (0x00028eb6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3740,	// (0x00028eb6) list_medium_line_x2_t4_g4_g3

0x37e5,	// (0x00028f5b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x37e5,	// (0x00028f5b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000349c8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000349c8) list_medium_line_x2_t4_g4_g

0x37f1,	// (0x00028f67) list_medium_line_x2_t4_g4_t1_ParamLimits

0x37f1,	// (0x00028f67) list_medium_line_x2_t4_g4_t1

0x380b,	// (0x00028f81) list_medium_line_x2_t4_g4_t2_ParamLimits

0x380b,	// (0x00028f81) list_medium_line_x2_t4_g4_t2

0x3821,	// (0x00028f97) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3821,	// (0x00028f97) list_medium_line_x2_t4_g4_t3

0x3836,	// (0x00028fac) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3836,	// (0x00028fac) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000349d1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000349d1) list_medium_line_x2_t4_g4_t

0x3734,	// (0x00028eaa) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x2_t2_g4_g1

0x37d9,	// (0x00028f4f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x37d9,	// (0x00028f4f) list_medium_line_x2_t2_g4_g2

0x3740,	// (0x00028eb6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3740,	// (0x00028eb6) list_medium_line_x2_t2_g4_g3

0x374c,	// (0x00028ec2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x374c,	// (0x00028ec2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00034a38) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00034a38) list_medium_line_x2_t2_g4_g

0x487b,	// (0x00029ff1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x487b,	// (0x00029ff1) list_medium_line_x2_t2_g4_t1

0x377f,	// (0x00028ef5) list_medium_line_x2_t2_g4_t2_ParamLimits

0x377f,	// (0x00028ef5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00034a41) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00034a41) list_medium_line_x2_t2_g4_t

0x3734,	// (0x00028eaa) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x2_t2_g3_g1

0x3740,	// (0x00028eb6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3740,	// (0x00028eb6) list_medium_line_x2_t2_g3_g2

0x374c,	// (0x00028ec2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x374c,	// (0x00028ec2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000349ae) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000349ae) list_medium_line_x2_t2_g3_g

0x4890,	// (0x0002a006) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4890,	// (0x0002a006) list_medium_line_x2_t2_g3_t1

0x377f,	// (0x00028ef5) list_medium_line_x2_t2_g3_t2_ParamLimits

0x377f,	// (0x00028ef5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00034a46) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00034a46) list_medium_line_x2_t2_g3_t

0x4bd2,	// (0x0002a348) main_sp_fs_list_pane_ParamLimits

0x4bd2,	// (0x0002a348) main_sp_fs_list_pane

0xb36e,	// (0x00030ae4) sp_fs_scroll_pane_ParamLimits

0xb36e,	// (0x00030ae4) sp_fs_scroll_pane

0x4bde,	// (0x0002a354) list_medium_line_x2_t3_t1

0x4bee,	// (0x0002a364) list_medium_line_x2_t3_t2

0x4bfc,	// (0x0002a372) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00034a91) list_medium_line_x2_t3_t

0x4c0a,	// (0x0002a380) list_medium_line_x3_t4_t1

0x4c1a,	// (0x0002a390) list_medium_line_x3_t4_t2

0x4c28,	// (0x0002a39e) list_medium_line_x3_t4_t3

0x4bfc,	// (0x0002a372) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00034a98) list_medium_line_x3_t4_t

0x4c36,	// (0x0002a3ac) list_medium_line_x4_t5_t1

0x4c46,	// (0x0002a3bc) list_medium_line_x4_t5_t2

0x4c28,	// (0x0002a39e) list_medium_line_x4_t5_t3

0x4c54,	// (0x0002a3ca) list_medium_line_x4_t5_t4

0x4bfc,	// (0x0002a372) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00034aa1) list_medium_line_x4_t5_t

0x3734,	// (0x00028eaa) list_medium_line_t4_g4_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_t4_g4_g1

0x4c62,	// (0x0002a3d8) list_medium_line_t4_g4_g2_ParamLimits

0x4c62,	// (0x0002a3d8) list_medium_line_t4_g4_g2

0x4c6e,	// (0x0002a3e4) list_medium_line_t4_g4_g3_ParamLimits

0x4c6e,	// (0x0002a3e4) list_medium_line_t4_g4_g3

0x374c,	// (0x00028ec2) list_medium_line_t4_g4_g4_ParamLimits

0x374c,	// (0x00028ec2) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00034aac) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00034aac) list_medium_line_t4_g4_g

0x4c7a,	// (0x0002a3f0) list_medium_line_t4_g4_t1_ParamLimits

0x4c7a,	// (0x0002a3f0) list_medium_line_t4_g4_t1

0x4c8f,	// (0x0002a405) list_medium_line_t4_g4_t2_ParamLimits

0x4c8f,	// (0x0002a405) list_medium_line_t4_g4_t2

0x4ca4,	// (0x0002a41a) list_medium_line_t4_g4_t3_ParamLimits

0x4ca4,	// (0x0002a41a) list_medium_line_t4_g4_t3

0x377f,	// (0x00028ef5) list_medium_line_t4_g4_t4_ParamLimits

0x377f,	// (0x00028ef5) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00034ab5) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00034ab5) list_medium_line_t4_g4_t

0x4fd8,	// (0x0002a74e) chi_dic_find_pane_g1

0x1291,	// (0x00026a07) main_tport_pane

0x87f7,	// (0x0002df6d) list_medium_line_plain_t1

0x881d,	// (0x0002df93) list_medium_line_t2_g2_g1_ParamLimits

0x881d,	// (0x0002df93) list_medium_line_t2_g2_g1

0x8829,	// (0x0002df9f) list_medium_line_t2_g2_g2_ParamLimits

0x8829,	// (0x0002df9f) list_medium_line_t2_g2_g2

0x0001,

0xfa0e,	// (0x00035184) list_medium_line_t2_g2_g_ParamLimits

0xfa0e,	// (0x00035184) list_medium_line_t2_g2_g

0x8835,	// (0x0002dfab) list_medium_line_t2_g2_t1_ParamLimits

0x8835,	// (0x0002dfab) list_medium_line_t2_g2_t1

0x884f,	// (0x0002dfc5) list_medium_line_t2_g2_t2_ParamLimits

0x884f,	// (0x0002dfc5) list_medium_line_t2_g2_t2

0x0001,

0xfa13,	// (0x00035189) list_medium_line_t2_g2_t_ParamLimits

0xfa13,	// (0x00035189) list_medium_line_t2_g2_t

0xd7d7,	// (0x00032f4d) aid_sp_fs_list_icon_a_sm

0xd7df,	// (0x00032f55) aid_sp_fs_list_icon_d

0xd7e7,	// (0x00032f5d) aid_sp_fs_text_primary

0xd7f0,	// (0x00032f66) aid_sp_fs_text_secondary

0xd7f9,	// (0x00032f6f) list_medium_line

0xd7f9,	// (0x00032f6f) list_medium_line_g2

0xd7f9,	// (0x00032f6f) list_medium_line_g3

0xd7f9,	// (0x00032f6f) list_medium_line_plain

0xd7f9,	// (0x00032f6f) list_medium_line_plain_t2

0xd7f9,	// (0x00032f6f) list_medium_line_plain_t3

0xd7f9,	// (0x00032f6f) list_medium_line_right_icon

0xd7f9,	// (0x00032f6f) list_medium_line_right_iconx2

0xd7f9,	// (0x00032f6f) list_medium_line_t2

0xd7f9,	// (0x00032f6f) list_medium_line_t2_g2

0xd7f9,	// (0x00032f6f) list_medium_line_t2_g3

0xd7f9,	// (0x00032f6f) list_medium_line_t2_right_icon

0xd7f9,	// (0x00032f6f) list_medium_line_t2_right_iconx2

0xd7f9,	// (0x00032f6f) list_medium_line_t3

0xd7f9,	// (0x00032f6f) list_medium_line_t3_g2

0xd7f9,	// (0x00032f6f) list_medium_line_t3_g3

0xd7f9,	// (0x00032f6f) list_medium_line_t3_right_iconx2

0x8db0,	// (0x0002e526) list_medium_line_t4_g4

0x8db9,	// (0x0002e52f) list_medium_line_x2

0x8db9,	// (0x0002e52f) list_medium_line_x2_t2_g2

0x8db9,	// (0x0002e52f) list_medium_line_x2_t2_g3

0x8db9,	// (0x0002e52f) list_medium_line_x2_t2_g4

0x8db9,	// (0x0002e52f) list_medium_line_x2_t3

0x8db9,	// (0x0002e52f) list_medium_line_x2_t3_g2

0x8db9,	// (0x0002e52f) list_medium_line_x2_t3_g3

0x8db9,	// (0x0002e52f) list_medium_line_x2_t3_g4

0x8db9,	// (0x0002e52f) list_medium_line_x2_t4_g2

0x8db9,	// (0x0002e52f) list_medium_line_x2_t4_g4

0x8dc2,	// (0x0002e538) list_medium_line_x3

0x8dc2,	// (0x0002e538) list_medium_line_x3_t4

0x8dc2,	// (0x0002e538) list_medium_line_x3_t4_g4

0x8db0,	// (0x0002e526) list_medium_line_x4_t4

0x8db0,	// (0x0002e526) list_medium_line_x4_t4_g7

0x8db0,	// (0x0002e526) list_medium_line_x4_t5

0x8dcb,	// (0x0002e541) list_single_fs_dyc_pane_ParamLimits

0x8dcb,	// (0x0002e541) list_single_fs_dyc_pane

0x3734,	// (0x00028eaa) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x4_t4_g7_g1

0x9473,	// (0x0002ebe9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9473,	// (0x0002ebe9) list_medium_line_x4_t4_g7_g2

0x947f,	// (0x0002ebf5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x947f,	// (0x0002ebf5) list_medium_line_x4_t4_g7_g3

0x948e,	// (0x0002ec04) list_medium_line_x4_t4_g7_g4_ParamLimits

0x948e,	// (0x0002ec04) list_medium_line_x4_t4_g7_g4

0x949a,	// (0x0002ec10) list_medium_line_x4_t4_g7_g5_ParamLimits

0x949a,	// (0x0002ec10) list_medium_line_x4_t4_g7_g5

0x94a9,	// (0x0002ec1f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x94a9,	// (0x0002ec1f) list_medium_line_x4_t4_g7_g6

0x94b8,	// (0x0002ec2e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x94b8,	// (0x0002ec2e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbde,	// (0x00035354) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbde,	// (0x00035354) list_medium_line_x4_t4_g7_g

0x94c4,	// (0x0002ec3a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x94c4,	// (0x0002ec3a) list_medium_line_x4_t4_g7_t1

0x94d9,	// (0x0002ec4f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x94d9,	// (0x0002ec4f) list_medium_line_x4_t4_g7_t2

0x94ee,	// (0x0002ec64) list_medium_line_x4_t4_g7_t3_ParamLimits

0x94ee,	// (0x0002ec64) list_medium_line_x4_t4_g7_t3

0x9503,	// (0x0002ec79) list_medium_line_x4_t4_g7_t4_ParamLimits

0x9503,	// (0x0002ec79) list_medium_line_x4_t4_g7_t4

0x9515,	// (0x0002ec8b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x9515,	// (0x0002ec8b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbed,	// (0x00035363) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbed,	// (0x00035363) list_medium_line_x4_t4_g7_t

0x9527,	// (0x0002ec9d) list_single_dyc_row_pane_ParamLimits

0x9527,	// (0x0002ec9d) list_single_dyc_row_pane

0x9bf8,	// (0x0002f36e) call5_gesture_pane_ParamLimits

0x9bf8,	// (0x0002f36e) call5_gesture_pane

0x9c40,	// (0x0002f3b6) call5_windows_pane_ParamLimits

0x9c40,	// (0x0002f3b6) call5_windows_pane

0x9cd9,	// (0x0002f44f) call5_swipe_1_pane_cp_ParamLimits

0x9cd9,	// (0x0002f44f) call5_swipe_1_pane_cp

0x9ce5,	// (0x0002f45b) call5_swipe_2_pane_cp_ParamLimits

0x9ce5,	// (0x0002f45b) call5_swipe_2_pane_cp

0x33a7,	// (0x00028b1d) call5_image_pane_cp

0x9cf1,	// (0x0002f467) popup_call5_audio_first_window_cp_ParamLimits

0x9cf1,	// (0x0002f467) popup_call5_audio_first_window_cp

0xe2bc,	// (0x00033a32) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2bc,	// (0x00033a32) call5_swipe_1_pane_g1_cp

0xe2fc,	// (0x00033a72) call5_swipe_1_pane_g2_cp

0xe2d5,	// (0x00033a4b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2d5,	// (0x00033a4b) call5_swipe_1_pane_t1_cp

0xe2bc,	// (0x00033a32) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2bc,	// (0x00033a32) call5_swipe_2_pane_g1_cp

0xe304,	// (0x00033a7a) call5_swipe_2_pane_g2_cp

0xe30c,	// (0x00033a82) call5_swipe_2_pane_t1_cp_ParamLimits

0xe30c,	// (0x00033a82) call5_swipe_2_pane_t1_cp

0x6a87,	// (0x0002c1fd) main_sp_fs_email_pane

0xe321,	// (0x00033a97) main_sp_fs_listscroll_pane_te

0x9cfd,	// (0x0002f473) popup_sp_fs_action_menu_pane_ParamLimits

0x9cfd,	// (0x0002f473) popup_sp_fs_action_menu_pane

0xc3cf,	// (0x00031b45) bg_sp_fs_ctrlbar_pane_g1

0xc6b2,	// (0x00031e28) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc6c4,	// (0x00031e3a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc6bb,	// (0x00031e31) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc3cf,	// (0x00031b45) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcdb,	// (0x00035451) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1bc,	// (0x00031932) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1bc,	// (0x00031932) bg_sp_fs_ctrlbar_ddmenu_pane

0xe32a,	// (0x00033aa0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe32a,	// (0x00033aa0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe336,	// (0x00033aac) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe336,	// (0x00033aac) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce4,	// (0x0003545a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce4,	// (0x0003545a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe342,	// (0x00033ab8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe342,	// (0x00033ab8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9d2f,	// (0x0002f4a5) list_medium_line_t2_right_icon_g1

0x9d37,	// (0x0002f4ad) list_medium_line_t2_right_icon_t1

0x9d47,	// (0x0002f4bd) list_medium_line_t2_right_icon_t2

0x0001,

0xfce9,	// (0x0003545f) list_medium_line_t2_right_icon_t

0xbecd,	// (0x00031643) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbecd,	// (0x00031643) bg_sp_fs_ctrlbar_pane

0x9d9b,	// (0x0002f511) main_sp_fs_ctrlbar_button_pane_cp01

0x9da3,	// (0x0002f519) main_sp_fs_ctrlbar_ddmenu_pane

0xe394,	// (0x00033b0a) main_sp_fs_ctrlbar_pane_g1

0xe3a0,	// (0x00033b16) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcee,	// (0x00035464) main_sp_fs_ctrlbar_pane_g

0xe3ac,	// (0x00033b22) main_sp_fs_ctrlbar_pane_t1

0x9dad,	// (0x0002f523) main_sp_fs_ctrlbar_pane

0x9dd1,	// (0x0002f547) main_sp_fs_listscroll_pane_te_cp01

0x9df1,	// (0x0002f567) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9df1,	// (0x0002f567) popup_sp_fs_action_menu_pane_cp01

0x6a87,	// (0x0002c1fd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x6a87,	// (0x0002c1fd) bg_sp_fs_highlight_list_pane_cp01

0xe3dc,	// (0x00033b52) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3dc,	// (0x00033b52) sp_fs_action_menu_list_gene_pane_g1

0xe3eb,	// (0x00033b61) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3eb,	// (0x00033b61) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x0003546e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x0003546e) sp_fs_action_menu_list_gene_pane_g

0xe3f8,	// (0x00033b6e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3f8,	// (0x00033b6e) sp_fs_action_menu_list_gene_pane_t1

0xe410,	// (0x00033b86) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe410,	// (0x00033b86) sp_fs_action_menu_list_gene_pane

0xe42d,	// (0x00033ba3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe42d,	// (0x00033ba3) popup_sp_fs_action_menu_bg_pane

0xe43b,	// (0x00033bb1) sp_fs_action_menu_list_pane_ParamLimits

0xe43b,	// (0x00033bb1) sp_fs_action_menu_list_pane

0xe459,	// (0x00033bcf) sp_fs_scroll_pane_cp01_ParamLimits

0xe459,	// (0x00033bcf) sp_fs_scroll_pane_cp01

0x9e1b,	// (0x0002f591) list_medium_line_plain_t2_t1

0x9e2b,	// (0x0002f5a1) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x00035473) list_medium_line_plain_t2_t

0x9e39,	// (0x0002f5af) list_medium_line_plain_t3_t1

0x9e49,	// (0x0002f5bf) list_medium_line_plain_t3_t2

0x9e57,	// (0x0002f5cd) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x00035478) list_medium_line_plain_t3_t

0x3734,	// (0x00028eaa) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x2_t2_g2_g1

0x374c,	// (0x00028ec2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x374c,	// (0x00028ec2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000349bc) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000349bc) list_medium_line_x2_t2_g2_g

0x4c7a,	// (0x0002a3f0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4c7a,	// (0x0002a3f0) list_medium_line_x2_t2_g2_t1

0x377f,	// (0x00028ef5) list_medium_line_x2_t2_g2_t2_ParamLimits

0x377f,	// (0x00028ef5) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x0003547f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x0003547f) list_medium_line_x2_t2_g2_t

0x3734,	// (0x00028eaa) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x2_t4_g2_g1

0x374c,	// (0x00028ec2) list_medium_line_x2_t4_g2_g2_ParamLimits

0x374c,	// (0x00028ec2) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x000349bc) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x000349bc) list_medium_line_x2_t4_g2_g

0x9e65,	// (0x0002f5db) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9e65,	// (0x0002f5db) list_medium_line_x2_t4_g2_t1

0x9e7f,	// (0x0002f5f5) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9e7f,	// (0x0002f5f5) list_medium_line_x2_t4_g2_t2

0x9e95,	// (0x0002f60b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9e95,	// (0x0002f60b) list_medium_line_x2_t4_g2_t3

0x377f,	// (0x00028ef5) list_medium_line_x2_t4_g2_t4_ParamLimits

0x377f,	// (0x00028ef5) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0e,	// (0x00035484) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0e,	// (0x00035484) list_medium_line_x2_t4_g2_t

0x9eaa,	// (0x0002f620) list_medium_line_t3_right_iconx2_g1

0x9d2f,	// (0x0002f4a5) list_medium_line_t3_right_iconx2_g2

0x9eb2,	// (0x0002f628) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd17,	// (0x0003548d) list_medium_line_t3_right_iconx2_g

0x9eba,	// (0x0002f630) list_medium_line_t3_right_iconx2_t1

0x9eca,	// (0x0002f640) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1e,	// (0x00035494) list_medium_line_t3_right_iconx2_t

0x3734,	// (0x00028eaa) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x3_t4_g4_g1

0x3740,	// (0x00028eb6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3740,	// (0x00028eb6) list_medium_line_x3_t4_g4_g2

0x4c62,	// (0x0002a3d8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4c62,	// (0x0002a3d8) list_medium_line_x3_t4_g4_g3

0x9ed8,	// (0x0002f64e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9ed8,	// (0x0002f64e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd23,	// (0x00035499) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd23,	// (0x00035499) list_medium_line_x3_t4_g4_g

0x9ee4,	// (0x0002f65a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9ee4,	// (0x0002f65a) list_medium_line_x3_t4_g4_t1

0x9efb,	// (0x0002f671) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9efb,	// (0x0002f671) list_medium_line_x3_t4_g4_t2

0x4c8f,	// (0x0002a405) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4c8f,	// (0x0002a405) list_medium_line_x3_t4_g4_t3

0x9f10,	// (0x0002f686) list_medium_line_x3_t4_g4_t4_ParamLimits

0x9f10,	// (0x0002f686) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2c,	// (0x000354a2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2c,	// (0x000354a2) list_medium_line_x3_t4_g4_t

0x9f2d,	// (0x0002f6a3) list_single_dyc_row_text_pane_t1_ParamLimits

0x9f2d,	// (0x0002f6a3) list_single_dyc_row_text_pane_t1

0x9f64,	// (0x0002f6da) list_single_dyc_row_text_pane_t2_ParamLimits

0x9f64,	// (0x0002f6da) list_single_dyc_row_text_pane_t2

0xe47f,	// (0x00033bf5) list_single_dyc_row_text_pane_t3_ParamLimits

0xe47f,	// (0x00033bf5) list_single_dyc_row_text_pane_t3

0x0005,

0xfd35,	// (0x000354ab) list_single_dyc_row_text_pane_t_ParamLimits

0xfd35,	// (0x000354ab) list_single_dyc_row_text_pane_t

0xe4a3,	// (0x00033c19) list_single_dyc_row_pane_g1_ParamLimits

0xe4a3,	// (0x00033c19) list_single_dyc_row_pane_g1

0xe4af,	// (0x00033c25) list_single_dyc_row_pane_g2_ParamLimits

0xe4af,	// (0x00033c25) list_single_dyc_row_pane_g2

0xe4bb,	// (0x00033c31) list_single_dyc_row_pane_g3_ParamLimits

0xe4bb,	// (0x00033c31) list_single_dyc_row_pane_g3

0xe4c7,	// (0x00033c3d) list_single_dyc_row_pane_g4_ParamLimits

0xe4c7,	// (0x00033c3d) list_single_dyc_row_pane_g4

0x0003,

0xfd42,	// (0x000354b8) list_single_dyc_row_pane_g_ParamLimits

0xfd42,	// (0x000354b8) list_single_dyc_row_pane_g

0xe4d3,	// (0x00033c49) list_single_dyc_row_text_pane_ParamLimits

0xe4d3,	// (0x00033c49) list_single_dyc_row_text_pane

0x231d,	// (0x00027a93) bg_sp_fs_scroll_pane

0xe4f2,	// (0x00033c68) thumb_sp_fs_scroll_pane

0x881d,	// (0x0002df93) list_medium_line_g1_ParamLimits

0x881d,	// (0x0002df93) list_medium_line_g1

0xa087,	// (0x0002f7fd) list_medium_line_t1_ParamLimits

0xa087,	// (0x0002f7fd) list_medium_line_t1

0x3734,	// (0x00028eaa) list_medium_line_x2_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x2_g1

0x3740,	// (0x00028eb6) list_medium_line_x2_g2_ParamLimits

0x3740,	// (0x00028eb6) list_medium_line_x2_g2

0x0001,

0xfd4b,	// (0x000354c1) list_medium_line_x2_g_ParamLimits

0xfd4b,	// (0x000354c1) list_medium_line_x2_g

0xe4fb,	// (0x00033c71) list_medium_line_x2_t1_ParamLimits

0xe4fb,	// (0x00033c71) list_medium_line_x2_t1

0x3734,	// (0x00028eaa) list_medium_line_x3_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x3_g1

0x3740,	// (0x00028eb6) list_medium_line_x3_g2_ParamLimits

0x3740,	// (0x00028eb6) list_medium_line_x3_g2

0x0001,

0xfd4b,	// (0x000354c1) list_medium_line_x3_g_ParamLimits

0xfd4b,	// (0x000354c1) list_medium_line_x3_g

0xe4fb,	// (0x00033c71) list_medium_line_x3_t1_ParamLimits

0xe4fb,	// (0x00033c71) list_medium_line_x3_t1

0xe511,	// (0x00033c87) thumb_sp_fs_scroll_pane_g1

0xe51a,	// (0x00033c90) thumb_sp_fs_scroll_pane_g2

0xe523,	// (0x00033c99) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd50,	// (0x000354c6) thumb_sp_fs_scroll_pane_g

0xe511,	// (0x00033c87) bg_sp_fs_scroll_pane_g1

0xe51a,	// (0x00033c90) bg_sp_fs_scroll_pane_g2

0xe523,	// (0x00033c99) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd50,	// (0x000354c6) bg_sp_fs_scroll_pane_g

0x3734,	// (0x00028eaa) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3734,	// (0x00028eaa) list_medium_line_x2_t3_g4_g1

0x37d9,	// (0x00028f4f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x37d9,	// (0x00028f4f) list_medium_line_x2_t3_g4_g2

0x3740,	// (0x00028eb6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3740,	// (0x00028eb6) list_medium_line_x2_t3_g4_g3

0x374c,	// (0x00028ec2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x374c,	// (0x00028ec2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00034a38) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00034a38) list_medium_line_x2_t3_g4_g

0xa09c,	// (0x0002f812) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa09c,	// (0x0002f812) list_medium_line_x2_t3_g4_t1

0xa0b2,	// (0x0002f828) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa0b2,	// (0x0002f828) list_medium_line_x2_t3_g4_t2

0x377f,	// (0x00028ef5) list_medium_line_x2_t3_g4_t3_ParamLimits

0x377f,	// (0x00028ef5) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd57,	// (0x000354cd) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd57,	// (0x000354cd) list_medium_line_x2_t3_g4_t

0x881d,	// (0x0002df93) list_medium_line_g2_g1_ParamLimits

0x881d,	// (0x0002df93) list_medium_line_g2_g1

0x8829,	// (0x0002df9f) list_medium_line_g2_g2_ParamLimits

0x8829,	// (0x0002df9f) list_medium_line_g2_g2

0x0001,

0xfa0e,	// (0x00035184) list_medium_line_g2_g_ParamLimits

0xfa0e,	// (0x00035184) list_medium_line_g2_g

0xa0cc,	// (0x0002f842) list_medium_line_g2_t1_ParamLimits

0xa0cc,	// (0x0002f842) list_medium_line_g2_t1

0x881d,	// (0x0002df93) list_medium_line_t3_g2_g1_ParamLimits

0x881d,	// (0x0002df93) list_medium_line_t3_g2_g1

0x8829,	// (0x0002df9f) list_medium_line_t3_g2_g2_ParamLimits

0x8829,	// (0x0002df9f) list_medium_line_t3_g2_g2

0x0001,

0xfa0e,	// (0x00035184) list_medium_line_t3_g2_g_ParamLimits

0xfa0e,	// (0x00035184) list_medium_line_t3_g2_g

0xa0e1,	// (0x0002f857) list_medium_line_t3_g2_t1_ParamLimits

0xa0e1,	// (0x0002f857) list_medium_line_t3_g2_t1

0xa0fb,	// (0x0002f871) list_medium_line_t3_g2_t2_ParamLimits

0xa0fb,	// (0x0002f871) list_medium_line_t3_g2_t2

0xa111,	// (0x0002f887) list_medium_line_t3_g2_t3_ParamLimits

0xa111,	// (0x0002f887) list_medium_line_t3_g2_t3

0x0002,

0xfd5e,	// (0x000354d4) list_medium_line_t3_g2_t_ParamLimits

0xfd5e,	// (0x000354d4) list_medium_line_t3_g2_t

0x9d2f,	// (0x0002f4a5) list_medium_line_right_icon_g1

0xa127,	// (0x0002f89d) list_medium_line_right_icon_t1

0x881d,	// (0x0002df93) list_medium_line_t2_g1_ParamLimits

0x881d,	// (0x0002df93) list_medium_line_t2_g1

0xa135,	// (0x0002f8ab) list_medium_line_t2_t1_ParamLimits

0xa135,	// (0x0002f8ab) list_medium_line_t2_t1

0xa14f,	// (0x0002f8c5) list_medium_line_t2_t2_ParamLimits

0xa14f,	// (0x0002f8c5) list_medium_line_t2_t2

0x0001,

0xfd65,	// (0x000354db) list_medium_line_t2_t_ParamLimits

0xfd65,	// (0x000354db) list_medium_line_t2_t

0x881d,	// (0x0002df93) list_medium_line_t3_g1_ParamLimits

0x881d,	// (0x0002df93) list_medium_line_t3_g1

0xa164,	// (0x0002f8da) list_medium_line_t3_t1_ParamLimits

0xa164,	// (0x0002f8da) list_medium_line_t3_t1

0xa17e,	// (0x0002f8f4) list_medium_line_t3_t2_ParamLimits

0xa17e,	// (0x0002f8f4) list_medium_line_t3_t2

0xa194,	// (0x0002f90a) list_medium_line_t3_t3_ParamLimits

0xa194,	// (0x0002f90a) list_medium_line_t3_t3

0x0002,

0xfd6a,	// (0x000354e0) list_medium_line_t3_t_ParamLimits

0xfd6a,	// (0x000354e0) list_medium_line_t3_t

0x881d,	// (0x0002df93) list_medium_line_g3_g1_ParamLimits

0x881d,	// (0x0002df93) list_medium_line_g3_g1

0xa1a9,	// (0x0002f91f) list_medium_line_g3_g2_ParamLimits

0xa1a9,	// (0x0002f91f) list_medium_line_g3_g2

0x8829,	// (0x0002df9f) list_medium_line_g3_g3_ParamLimits

0x8829,	// (0x0002df9f) list_medium_line_g3_g3

0x0002,

0xfd71,	// (0x000354e7) list_medium_line_g3_g_ParamLimits

0xfd71,	// (0x000354e7) list_medium_line_g3_g

0xa1b5,	// (0x0002f92b) list_medium_line_g3_t1_ParamLimits

0xa1b5,	// (0x0002f92b) list_medium_line_g3_t1

0x881d,	// (0x0002df93) list_medium_line_t2_g3_g1_ParamLimits

0x881d,	// (0x0002df93) list_medium_line_t2_g3_g1

0xa1a9,	// (0x0002f91f) list_medium_line_t2_g3_g2_ParamLimits

0xa1a9,	// (0x0002f91f) list_medium_line_t2_g3_g2

0x8829,	// (0x0002df9f) list_medium_line_t2_g3_g3_ParamLimits

0x8829,	// (0x0002df9f) list_medium_line_t2_g3_g3

0x0002,

0xfd71,	// (0x000354e7) list_medium_line_t2_g3_g_ParamLimits

0xfd71,	// (0x000354e7) list_medium_line_t2_g3_g

0xa1ca,	// (0x0002f940) list_medium_line_t2_g3_t1_ParamLimits

0xa1ca,	// (0x0002f940) list_medium_line_t2_g3_t1

0xa1e4,	// (0x0002f95a) list_medium_line_t2_g3_t2_ParamLimits

0xa1e4,	// (0x0002f95a) list_medium_line_t2_g3_t2

0x0001,

0xfd78,	// (0x000354ee) list_medium_line_t2_g3_t_ParamLimits

0xfd78,	// (0x000354ee) list_medium_line_t2_g3_t

0x881d,	// (0x0002df93) list_medium_line_t3_g3_g1_ParamLimits

0x881d,	// (0x0002df93) list_medium_line_t3_g3_g1

0xa1a9,	// (0x0002f91f) list_medium_line_t3_g3_g2_ParamLimits

0xa1a9,	// (0x0002f91f) list_medium_line_t3_g3_g2

0x8829,	// (0x0002df9f) list_medium_line_t3_g3_g3_ParamLimits

0x8829,	// (0x0002df9f) list_medium_line_t3_g3_g3

0x0002,

0xfd71,	// (0x000354e7) list_medium_line_t3_g3_g_ParamLimits

0xfd71,	// (0x000354e7) list_medium_line_t3_g3_g

0xa1fa,	// (0x0002f970) list_medium_line_t3_g3_t1_ParamLimits

0xa1fa,	// (0x0002f970) list_medium_line_t3_g3_t1

0xa213,	// (0x0002f989) list_medium_line_t3_g3_t2_ParamLimits

0xa213,	// (0x0002f989) list_medium_line_t3_g3_t2

0xa229,	// (0x0002f99f) list_medium_line_t3_g3_t3_ParamLimits

0xa229,	// (0x0002f99f) list_medium_line_t3_g3_t3

0x0002,

0xfd7d,	// (0x000354f3) list_medium_line_t3_g3_t_ParamLimits

0xfd7d,	// (0x000354f3) list_medium_line_t3_g3_t

0x9eaa,	// (0x0002f620) list_medium_line_right_iconx2_g1

0x9d2f,	// (0x0002f4a5) list_medium_line_right_iconx2_g2

0x0001,

0xfd84,	// (0x000354fa) list_medium_line_right_iconx2_g

0xa23f,	// (0x0002f9b5) list_medium_line_right_iconx2_t1

0x9eaa,	// (0x0002f620) list_medium_line_t2_right_iconx2_g1

0x9d2f,	// (0x0002f4a5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd84,	// (0x000354fa) list_medium_line_t2_right_iconx2_g

0xa24d,	// (0x0002f9c3) list_medium_line_t2_right_iconx2_t1

0xa25d,	// (0x0002f9d3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd89,	// (0x000354ff) list_medium_line_t2_right_iconx2_t

0xa26b,	// (0x0002f9e1) list_medium_line_x4_t4_t1

0xa279,	// (0x0002f9ef) list_medium_line_x4_t4_t2

0xa289,	// (0x0002f9ff) list_medium_line_x4_t4_t3

0xa299,	// (0x0002fa0f) list_medium_line_x4_t4_t4

0x0003,

0xfd8e,	// (0x00035504) list_medium_line_x4_t4_t

0xa2e2,	// (0x0002fa58) tport_appsw_pane_ParamLimits

0xa2e2,	// (0x0002fa58) tport_appsw_pane

0xa2f3,	// (0x0002fa69) tport_contact_pane_ParamLimits

0xa2f3,	// (0x0002fa69) tport_contact_pane

0xa307,	// (0x0002fa7d) tport_listscroll_pane_ParamLimits

0xa307,	// (0x0002fa7d) tport_listscroll_pane

0xa31f,	// (0x0002fa95) cell_tport_appsw_pane_ParamLimits

0xa31f,	// (0x0002fa95) cell_tport_appsw_pane

0xd118,	// (0x0003288e) tport_appsw_pane_g1_ParamLimits

0xd118,	// (0x0003288e) tport_appsw_pane_g1

0xe52c,	// (0x00033ca2) tport_contact_pane_g1

0xe535,	// (0x00033cab) tport_contact_pane_t1

0xe543,	// (0x00033cb9) tport_contact_pane_t2

0x0001,

0xfd97,	// (0x0003550d) tport_contact_pane_t

0xe551,	// (0x00033cc7) list_tport_pane

0xe55a,	// (0x00033cd0) scroll_pane_cp_030

0xe56b,	// (0x00033ce1) cell_tport_appsw_pane_g1

0xe57b,	// (0x00033cf1) cell_tport_appsw_pane_t1

0xe589,	// (0x00033cff) grid_highlight_pane_cp019

0xa355,	// (0x0002facb) list_tport_double_graphic_pane_ParamLimits

0xa355,	// (0x0002facb) list_tport_double_graphic_pane

0x6a87,	// (0x0002c1fd) list_highlight_pane_cp023_ParamLimits

0x6a87,	// (0x0002c1fd) list_highlight_pane_cp023

0xa362,	// (0x0002fad8) list_tport_double_graphic_pane_g1_ParamLimits

0xa362,	// (0x0002fad8) list_tport_double_graphic_pane_g1

0xa36f,	// (0x0002fae5) list_tport_double_graphic_pane_t1_ParamLimits

0xa36f,	// (0x0002fae5) list_tport_double_graphic_pane_t1

0xa384,	// (0x0002fafa) list_tport_double_graphic_pane_t2_ParamLimits

0xa384,	// (0x0002fafa) list_tport_double_graphic_pane_t2

0x0001,

0xfda3,	// (0x00035519) list_tport_double_graphic_pane_t_ParamLimits

0xfda3,	// (0x00035519) list_tport_double_graphic_pane_t

0x231d,	// (0x00027a93) main_cale_note_pane

0x1fcb,	// (0x00027741) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1fcb,	// (0x00027741) cell_vitu2_function_top_wide_pane_cp01

0x98b9,	// (0x0002f02f) wait_bar_pane_cp05_ParamLimits

0x6a87,	// (0x0002c1fd) listscroll_cmail_pane

0xe591,	// (0x00033d07) list_cmail_pane

0xa396,	// (0x0002fb0c) list_cmail_body_pane

0xa3a9,	// (0x0002fb1f) list_single_cmail_header_caption_pane

0xa3bd,	// (0x0002fb33) list_single_cmail_header_detail_pane_ParamLimits

0xa3bd,	// (0x0002fb33) list_single_cmail_header_detail_pane

0xe5a1,	// (0x00033d17) list_single_cmail_header_caption_pane_t1

0xa3e3,	// (0x0002fb59) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa3e3,	// (0x0002fb59) list_single_cmail_header_detail_pane_g1

0xe5b8,	// (0x00033d2e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5b8,	// (0x00033d2e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda8,	// (0x0003551e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda8,	// (0x0003551e) list_single_cmail_header_detail_pane_g

0xe5d1,	// (0x00033d47) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5d1,	// (0x00033d47) list_single_cmail_header_detail_pane_t1

0xe631,	// (0x00033da7) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe631,	// (0x00033da7) list_single_cmail_header_editor_pane_bg

0xe648,	// (0x00033dbe) list_cmail_body_pane_g1

0xe651,	// (0x00033dc7) list_cmail_body_pane_t1

0xd167,	// (0x000328dd) list_single_cmail_header_editor_pane_bg_g1

0x3dcb,	// (0x00029541) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd177,	// (0x000328ed) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd16f,	// (0x000328e5) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd424,	// (0x00032b9a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd197,	// (0x0003290d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd187,	// (0x000328fd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd18f,	// (0x00032905) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3dab,	// (0x00029521) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa3f9,	// (0x0002fb6f) calenote_gesture_pane_ParamLimits

0xa3f9,	// (0x0002fb6f) calenote_gesture_pane

0xa415,	// (0x0002fb8b) calenote_window_pane_ParamLimits

0xa415,	// (0x0002fb8b) calenote_window_pane

0xe65f,	// (0x00033dd5) popup_note_window_cp01

0xa431,	// (0x0002fba7) calenote_swipe_1_pane_ParamLimits

0xa431,	// (0x0002fba7) calenote_swipe_1_pane

0x9ce5,	// (0x0002f45b) calenote_swipe_2_pane_ParamLimits

0x9ce5,	// (0x0002f45b) calenote_swipe_2_pane

0xe2bc,	// (0x00033a32) calenote_swipe_1_pane_g1_ParamLimits

0xe2bc,	// (0x00033a32) calenote_swipe_1_pane_g1

0xe2c9,	// (0x00033a3f) calenote_swipe_1_pane_g2_ParamLimits

0xe2c9,	// (0x00033a3f) calenote_swipe_1_pane_g2

0x0001,

0xfcd1,	// (0x00035447) calenote_swipe_1_pane_g_ParamLimits

0xfcd1,	// (0x00035447) calenote_swipe_1_pane_g

0xe671,	// (0x00033de7) calenote_swipe_1_pane_t1_ParamLimits

0xe671,	// (0x00033de7) calenote_swipe_1_pane_t1

0xe2bc,	// (0x00033a32) calenote_swipe_2_pane_g1_ParamLimits

0xe2bc,	// (0x00033a32) calenote_swipe_2_pane_g1

0xe690,	// (0x00033e06) calenote_swipe_2_pane_g2_ParamLimits

0xe690,	// (0x00033e06) calenote_swipe_2_pane_g2

0x0001,

0xfdb4,	// (0x0003552a) calenote_swipe_2_pane_g_ParamLimits

0xfdb4,	// (0x0003552a) calenote_swipe_2_pane_g

0xe69c,	// (0x00033e12) calenote_swipe_2_pane_t1_ParamLimits

0xe69c,	// (0x00033e12) calenote_swipe_2_pane_t1

0x231d,	// (0x00027a93) main_mup_navstr_pane

0x769c,	// (0x0002ce12) main_mup3_pane_t7_ParamLimits

0x769c,	// (0x0002ce12) main_mup3_pane_t7

0xccfd,	// (0x00032473) main_mp4_pane_g6_ParamLimits

0xccfd,	// (0x00032473) main_mp4_pane_g6

0xcf21,	// (0x00032697) main_image3_pane_t4_ParamLimits

0xcf21,	// (0x00032697) main_image3_pane_t4

0xa446,	// (0x0002fbbc) popup_navstr_preview_pane_ParamLimits

0xa446,	// (0x0002fbbc) popup_navstr_preview_pane

0xa456,	// (0x0002fbcc) scroll_navstr_pane_ParamLimits

0xa456,	// (0x0002fbcc) scroll_navstr_pane

0x231d,	// (0x00027a93) bg_popup_preview_window_pane_cp04

0xe6c3,	// (0x00033e39) popup_navstr_preview_pane_t1

0xa46a,	// (0x0002fbe0) scroll_navstr_pane_g1_ParamLimits

0xa46a,	// (0x0002fbe0) scroll_navstr_pane_g1

0xa47e,	// (0x0002fbf4) scroll_navstr_pane_t1_ParamLimits

0xa47e,	// (0x0002fbf4) scroll_navstr_pane_t1

0xe668,	// (0x00033dde) bg_button_pane_cp014

0xe668,	// (0x00033dde) bg_button_pane_cp030

0x9b9e,	// (0x0002f314) list_double_fisheye_pane_g4_ParamLimits

0x9b9e,	// (0x0002f314) list_double_fisheye_pane_g4

0x9baa,	// (0x0002f320) list_double_fisheye_pane_g5_ParamLimits

0x9baa,	// (0x0002f320) list_double_fisheye_pane_g5

0xb36e,	// (0x00030ae4) sp_fs_scroll_pane_cp03

0xe394,	// (0x00033b0a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3a0,	// (0x00033b16) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcee,	// (0x00035464) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3ac,	// (0x00033b22) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe599,	// (0x00033d0f) sp_fs_scroll_pane_cp02

0x2ef3,	// (0x00028669) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2ef3,	// (0x00028669) popup_sp_fs_calendar_preview_list_single_pane

0x231d,	// (0x00027a93) main_cam6_pano_pane

0xb286,	// (0x000309fc) main_mup3_pane_ParamLimits

0x231d,	// (0x00027a93) main_phacti_pane

0x97ac,	// (0x0002ef22) bg_button_pane_cp11

0x97c4,	// (0x0002ef3a) main_mobtv_info_pane_g2_ParamLimits

0x97c4,	// (0x0002ef3a) main_mobtv_info_pane_g2

0x0001,

0xfc4e,	// (0x000353c4) main_mobtv_info_pane_g_ParamLimits

0xfc4e,	// (0x000353c4) main_mobtv_info_pane_g

0x9979,	// (0x0002f0ef) sc_clock_pane_t5_ParamLimits

0x9979,	// (0x0002f0ef) sc_clock_pane_t5

0x9a21,	// (0x0002f197) main_radioblah_pane_g1_ParamLimits

0xe1f1,	// (0x00033967) main_radioblah_pane_t3_ParamLimits

0xe1f1,	// (0x00033967) main_radioblah_pane_t3

0xe209,	// (0x0003397f) main_radioblah_pane_t4_ParamLimits

0xe209,	// (0x0003397f) main_radioblah_pane_t4

0x9a49,	// (0x0002f1bf) main_radioblah_text_pane_ParamLimits

0x9a49,	// (0x0002f1bf) main_radioblah_text_pane

0x9a5b,	// (0x0002f1d1) main_radioblah_info_pane_g1_ParamLimits

0x9aec,	// (0x0002f262) main_radioblah_info_pane_t4_ParamLimits

0x9aec,	// (0x0002f262) main_radioblah_info_pane_t4

0x6a87,	// (0x0002c1fd) main_sp_fs_calendar_pane

0xa494,	// (0x0002fc0a) main_phacti_pane_g1

0xa49c,	// (0x0002fc12) phacti_note_pane_ParamLimits

0xa49c,	// (0x0002fc12) phacti_note_pane

0xe6da,	// (0x00033e50) phacti_term_pane_ParamLimits

0xe6da,	// (0x00033e50) phacti_term_pane

0xe6ef,	// (0x00033e65) phacti_note_pane_t1_ParamLimits

0xe6ef,	// (0x00033e65) phacti_note_pane_t1

0xe706,	// (0x00033e7c) phacti_term_pane_g1

0xe70e,	// (0x00033e84) phacti_term_pane_t1_ParamLimits

0xe70e,	// (0x00033e84) phacti_term_pane_t1

0xe738,	// (0x00033eae) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe740,	// (0x00033eb6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbe,	// (0x00035534) popup_sp_fs_calendar_preview_list_single_pane_g

0xe748,	// (0x00033ebe) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe748,	// (0x00033ebe) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe75e,	// (0x00033ed4) aid_popup_sp_fs_bg_corner_pane

0xc3cf,	// (0x00031b45) popup_sp_fs_calendar_preview_bg_pane_g1

0x231d,	// (0x00027a93) popup_sp_fs_calendar_preview_bg_pane

0xe766,	// (0x00033edc) popup_sp_fs_calendar_preview_list_pane

0xbecd,	// (0x00031643) bg_main_sp_fs_cale_pane_ParamLimits

0xbecd,	// (0x00031643) bg_main_sp_fs_cale_pane

0xe777,	// (0x00033eed) listscroll_cale_mrui_pane_ParamLimits

0xe777,	// (0x00033eed) listscroll_cale_mrui_pane

0xd1eb,	// (0x00032961) listscroll_sp_fs_schedule_track_pane

0xe78c,	// (0x00033f02) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe78c,	// (0x00033f02) main_sp_fs_ctrlbar_pane_cp01

0xe79f,	// (0x00033f15) main_sp_fs_ribbon_pane

0xe7a7,	// (0x00033f1d) popup_sp_fs_cale_preview_window

0xa4fe,	// (0x0002fc74) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa4fe,	// (0x0002fc74) list_single_sp_fs_schedule_track_pane

0x6a87,	// (0x0002c1fd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6a87,	// (0x0002c1fd) bg_sp_fs_highlight_list_pane_cp03

0xa50f,	// (0x0002fc85) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa50f,	// (0x0002fc85) list_single_sp_fs_schedule_track_pane_g1

0xa51b,	// (0x0002fc91) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa51b,	// (0x0002fc91) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc3,	// (0x00035539) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc3,	// (0x00035539) list_single_sp_fs_schedule_track_pane_g

0xa527,	// (0x0002fc9d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa527,	// (0x0002fc9d) list_single_sp_fs_schedule_track_pane_t1

0xa541,	// (0x0002fcb7) sp_fs_schedule_track_pane_ParamLimits

0xa541,	// (0x0002fcb7) sp_fs_schedule_track_pane

0xe7b9,	// (0x00033f2f) sp_fs_schedule_track_pane_g1

0xe7c1,	// (0x00033f37) sp_fs_schedule_track_pane_g2

0xe7c9,	// (0x00033f3f) sp_fs_schedule_track_pane_g3

0xe7d1,	// (0x00033f47) sp_fs_schedule_track_pane_g4

0xe7d9,	// (0x00033f4f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc8,	// (0x0003553e) sp_fs_schedule_track_pane_g

0xd167,	// (0x000328dd) bg_sp_fs_schedule_viewer_highlight_g1

0x3dcb,	// (0x00029541) bg_sp_fs_schedule_viewer_highlight_g2

0xd16f,	// (0x000328e5) bg_sp_fs_schedule_viewer_highlight_g3

0xd177,	// (0x000328ed) bg_sp_fs_schedule_viewer_highlight_g4

0xd424,	// (0x00032b9a) bg_sp_fs_schedule_viewer_highlight_g5

0xd187,	// (0x000328fd) bg_sp_fs_schedule_viewer_highlight_g6

0xd18f,	// (0x00032905) bg_sp_fs_schedule_viewer_highlight_g7

0xd197,	// (0x0003290d) bg_sp_fs_schedule_viewer_highlight_g8

0x3dab,	// (0x00029521) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd3,	// (0x00035549) bg_sp_fs_schedule_viewer_highlight_g

0x231d,	// (0x00027a93) bg_main_sp_fs_ribbon_pane

0xa552,	// (0x0002fcc8) main_sp_fs_ribbon_pane_g1

0xe7e1,	// (0x00033f57) main_sp_fs_ribbon_pane_t1

0xa55b,	// (0x0002fcd1) main_sp_fs_ribbon_pane_t2

0xe7f0,	// (0x00033f66) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde6,	// (0x0003555c) main_sp_fs_ribbon_pane_t

0xe7ff,	// (0x00033f75) main_sp_fs_ribbon_scheduler_pane

0xe807,	// (0x00033f7d) bg_main_sp_fs_ribbon_pane_g1

0xe810,	// (0x00033f86) bg_main_sp_fs_ribbon_pane_g2

0xe819,	// (0x00033f8f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfded,	// (0x00035563) bg_main_sp_fs_ribbon_pane_g

0xe821,	// (0x00033f97) main_sp_fs_ribbon_scheduler_pane_g1

0xe82a,	// (0x00033fa0) main_sp_fs_ribbon_scheduler_pane_g2

0xe833,	// (0x00033fa9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf4,	// (0x0003556a) main_sp_fs_ribbon_scheduler_pane_g

0xe83c,	// (0x00033fb2) list_cale_mrui_pane

0xa56a,	// (0x0002fce0) sp_fs_scroll_pane_cp07_ParamLimits

0xa56a,	// (0x0002fce0) sp_fs_scroll_pane_cp07

0xa582,	// (0x0002fcf8) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa582,	// (0x0002fcf8) bg_sp_fs_schedule_viewer_highlight

0xe849,	// (0x00033fbf) list_single_sp_fs_schedule_track_pane_cp01

0xe851,	// (0x00033fc7) list_sp_fs_schedule_track_pane

0xe859,	// (0x00033fcf) sp_fs_scroll_pane_cp06_ParamLimits

0xe859,	// (0x00033fcf) sp_fs_scroll_pane_cp06

0xc3cf,	// (0x00031b45) bgmain_sp_fs_calendar_pane_g1

0xa592,	// (0x0002fd08) list_single_cale_mrui_pane_ParamLimits

0xa592,	// (0x0002fd08) list_single_cale_mrui_pane

0xe86b,	// (0x00033fe1) list_single_cale_mrui_row_pane_ParamLimits

0xe86b,	// (0x00033fe1) list_single_cale_mrui_row_pane

0xe878,	// (0x00033fee) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe878,	// (0x00033fee) list_single_cale_mrui_row_pane_g1

0xe8b1,	// (0x00034027) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8b1,	// (0x00034027) list_single_cale_mrui_row_pane_t1

0xa5b2,	// (0x0002fd28) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa5b2,	// (0x0002fd28) list_single_cale_mrui_row_pane_t2

0xe8c3,	// (0x00034039) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8c3,	// (0x00034039) list_single_cale_mrui_row_pane_t3

0xe8f2,	// (0x00034068) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe8f2,	// (0x00034068) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe02,	// (0x00035578) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe02,	// (0x00035578) list_single_cale_mrui_row_pane_t

0xa618,	// (0x0002fd8e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa618,	// (0x0002fd8e) list_single_cmail_header_editor_pane_bg_cp01

0xa638,	// (0x0002fdae) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa638,	// (0x0002fdae) list_single_cmail_header_editor_pane_bg_cp02

0xa654,	// (0x0002fdca) main_radioblah_text_pane_t1_ParamLimits

0xa654,	// (0x0002fdca) main_radioblah_text_pane_t1

0xe921,	// (0x00034097) cam6_indi_pane_cp01

0xe929,	// (0x0003409f) cam6_mode_pane_cp01

0xe931,	// (0x000340a7) cam6_pano_pane

0xe93a,	// (0x000340b0) cam6_zoom_pane_cp01

0xe942,	// (0x000340b8) cam6_pano_image_pane

0xe94b,	// (0x000340c1) cam6_pano_pane_g1

0xdf58,	// (0x000336ce) cam6_pano_pane_g2

0xe954,	// (0x000340ca) cam6_pano_pane_g3

0xe95d,	// (0x000340d3) cam6_pano_pane_g4

0xc96e,	// (0x000320e4) cam6_pano_pane_g5

0xe966,	// (0x000340dc) cam6_pano_pane_g6

0xe96e,	// (0x000340e4) cam6_pano_pane_g7

0xe976,	// (0x000340ec) cam6_pano_pane_g8

0xe97f,	// (0x000340f5) cam6_pano_pane_g9

0x0008,

0xfe0b,	// (0x00035581) cam6_pano_pane_g

0x231d,	// (0x00027a93) main_browser_tag_pane

0xe6bb,	// (0x00033e31) grid_navstr_albumart_pane

0xe988,	// (0x000340fe) cell_navstr_albumart_pane_ParamLimits

0xe988,	// (0x000340fe) cell_navstr_albumart_pane

0x597d,	// (0x0002b0f3) cell_navstr_albumart_pane_g1

0xbc9e,	// (0x00031414) cell_navstr_albumart_pane_g2

0xbcae,	// (0x00031424) cell_navstr_albumart_pane_g3

0xbca6,	// (0x0003141c) cell_navstr_albumart_pane_g4

0x0003,

0xfe1e,	// (0x00035594) cell_navstr_albumart_pane_g

0xa66e,	// (0x0002fde4) bt_list_pane_ParamLimits

0xa66e,	// (0x0002fde4) bt_list_pane

0xa681,	// (0x0002fdf7) bt_list_pane_t1

0xa690,	// (0x0002fe06) bt_list_pane_t2

0x0001,

0xfe27,	// (0x0003559d) bt_list_pane_t

0x231d,	// (0x00027a93) main_cale_prevew_pane

0xa69f,	// (0x0002fe15) popup_cale_preview_window_ParamLimits

0xa69f,	// (0x0002fe15) popup_cale_preview_window

0x6a87,	// (0x0002c1fd) bg_popup_preview_window_pane_cp05_ParamLimits

0x6a87,	// (0x0002c1fd) bg_popup_preview_window_pane_cp05

0xe9a0,	// (0x00034116) list_cale_preview_pane_ParamLimits

0xe9a0,	// (0x00034116) list_cale_preview_pane

0xe9ac,	// (0x00034122) list_double_cale_preview_pane_ParamLimits

0xe9ac,	// (0x00034122) list_double_cale_preview_pane

0xe9be,	// (0x00034134) list_single_cale_preview_pane_ParamLimits

0xe9be,	// (0x00034134) list_single_cale_preview_pane

0xe9d2,	// (0x00034148) list_single_cale_preview_pane_g1

0xe9da,	// (0x00034150) list_single_cale_preview_pane_t1_ParamLimits

0xe9da,	// (0x00034150) list_single_cale_preview_pane_t1

0xe9ef,	// (0x00034165) list_double_cale_preview_pane_g1

0xe9f7,	// (0x0003416d) list_double_cale_preview_pane_t1_ParamLimits

0xe9f7,	// (0x0003416d) list_double_cale_preview_pane_t1

0xea0c,	// (0x00034182) list_double_cale_preview_pane_t2_ParamLimits

0xea0c,	// (0x00034182) list_double_cale_preview_pane_t2

0x0001,

0xfe2c,	// (0x000355a2) list_double_cale_preview_pane_t_ParamLimits

0xfe2c,	// (0x000355a2) list_double_cale_preview_pane_t

0x231d,	// (0x00027a93) main_ezdial_pane

0x6a87,	// (0x0002c1fd) main_sp_fs_email_pane_ParamLimits

0x9d55,	// (0x0002f4cb) cmail_ddmenu_btn01_pane_ParamLimits

0x9d55,	// (0x0002f4cb) cmail_ddmenu_btn01_pane

0x9d68,	// (0x0002f4de) cmail_ddmenu_btn02_pane_ParamLimits

0x9d68,	// (0x0002f4de) cmail_ddmenu_btn02_pane

0x9d8b,	// (0x0002f501) cmail_ddmenu_btn03_pane_ParamLimits

0x9d8b,	// (0x0002f501) cmail_ddmenu_btn03_pane

0x9dad,	// (0x0002f523) main_sp_fs_ctrlbar_pane_ParamLimits

0x9dd1,	// (0x0002f547) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa396,	// (0x0002fb0c) list_cmail_body_pane_ParamLimits

0xe5af,	// (0x00033d25) bg_button_pane_cp12

0xe5c4,	// (0x00033d3a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5c4,	// (0x00033d3a) list_single_cmail_header_detail_pane_g3

0xe60d,	// (0x00033d83) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe60d,	// (0x00033d83) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdaf,	// (0x00035525) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdaf,	// (0x00035525) list_single_cmail_header_detail_pane_t

0xe723,	// (0x00033e99) phacti_term_pane_t2_ParamLimits

0xe723,	// (0x00033e99) phacti_term_pane_t2

0x0001,

0xfdb9,	// (0x0003552f) phacti_term_pane_t_ParamLimits

0xfdb9,	// (0x0003552f) phacti_term_pane_t

0xea24,	// (0x0003419a) aid_size_list_single_double

0xa6b4,	// (0x0002fe2a) popup_ezdial_listscroll_window

0xa6ca,	// (0x0002fe40) popup_number_entry_window_cp01

0x33a7,	// (0x00028b1d) bg_popup_call_pane_cp09

0xea30,	// (0x000341a6) ezdial_list_pane

0xea38,	// (0x000341ae) scroll_pane_cp23

0xbecd,	// (0x00031643) bg_button_pane_cp028_ParamLimits

0xbecd,	// (0x00031643) bg_button_pane_cp028

0xa6d6,	// (0x0002fe4c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa6d6,	// (0x0002fe4c) cmail_ddmenu_btn01_pane_g1

0xa6e2,	// (0x0002fe58) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa6e2,	// (0x0002fe58) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe31,	// (0x000355a7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe31,	// (0x000355a7) cmail_ddmenu_btn01_pane_g

0xea40,	// (0x000341b6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea40,	// (0x000341b6) cmail_ddmenu_btn01_pane_t1

0xbecd,	// (0x00031643) bg_button_pane_cp029_ParamLimits

0xbecd,	// (0x00031643) bg_button_pane_cp029

0xa6f6,	// (0x0002fe6c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa6f6,	// (0x0002fe6c) cmail_ddmenu_btn02_pane_g1

0xa70f,	// (0x0002fe85) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa70f,	// (0x0002fe85) cmail_ddmenu_btn02_pane_t1

0x6a87,	// (0x0002c1fd) bg_button_pane_cp031_ParamLimits

0x6a87,	// (0x0002c1fd) bg_button_pane_cp031

0xa6f6,	// (0x0002fe6c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa6f6,	// (0x0002fe6c) cmail_ddmenu_btn03_pane_g1

0xa70f,	// (0x0002fe85) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa70f,	// (0x0002fe85) cmail_ddmenu_btn03_pane_t1

0x7fb8,	// (0x0002d72e) cell_dialer2_keypad_pane_t1_ParamLimits

0x7fd2,	// (0x0002d748) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7fd2,	// (0x0002d748) cell_dialer2_keypad_pane_t1_copy1

0x95d1,	// (0x0002ed47) ncimui_group_button_pane

0x6a87,	// (0x0002c1fd) main_sp_fs_calendar_pane_ParamLimits

0xa3a9,	// (0x0002fb1f) list_single_cmail_header_caption_pane_ParamLimits

0xe76e,	// (0x00033ee4) aid_recal_txt_sm_pane

0x231d,	// (0x00027a93) mian_recal_day_pane

0xe7a7,	// (0x00033f1d) popup_sp_fs_cale_preview_window_ParamLimits

0xea56,	// (0x000341cc) list_recal_day_pane

0xea98,	// (0x0003420e) list_single_recal_day_pane_ParamLimits

0xea98,	// (0x0003420e) list_single_recal_day_pane

0xeaaa,	// (0x00034220) list_single_recal_day_pane_g1_ParamLimits

0xeaaa,	// (0x00034220) list_single_recal_day_pane_g1

0xeab6,	// (0x0003422c) list_single_recal_day_pane_g2_ParamLimits

0xeab6,	// (0x0003422c) list_single_recal_day_pane_g2

0xeac2,	// (0x00034238) list_single_recal_day_pane_g3_ParamLimits

0xeac2,	// (0x00034238) list_single_recal_day_pane_g3

0xa733,	// (0x0002fea9) list_single_recal_day_pane_g4_ParamLimits

0xa733,	// (0x0002fea9) list_single_recal_day_pane_g4

0xeace,	// (0x00034244) list_single_recal_day_pane_g5_ParamLimits

0xeace,	// (0x00034244) list_single_recal_day_pane_g5

0xeada,	// (0x00034250) list_single_recal_day_pane_g6_ParamLimits

0xeada,	// (0x00034250) list_single_recal_day_pane_g6

0x0004,

0xfe40,	// (0x000355b6) list_single_recal_day_pane_g_ParamLimits

0xfe40,	// (0x000355b6) list_single_recal_day_pane_g

0xeaee,	// (0x00034264) list_single_recal_day_pane_t1

0xeb00,	// (0x00034276) list_single_recal_day_pane_t2

0x0001,

0xfe4b,	// (0x000355c1) list_single_recal_day_pane_t

0xa74b,	// (0x0002fec1) ncimui_query_button_pane_ParamLimits

0xa74b,	// (0x0002fec1) ncimui_query_button_pane

0xa75b,	// (0x0002fed1) ncimui_query_button_pane_t1_ParamLimits

0xa75b,	// (0x0002fed1) ncimui_query_button_pane_t1

0xeb12,	// (0x00034288) ncimui_query_button_pane_t2_ParamLimits

0xeb12,	// (0x00034288) ncimui_query_button_pane_t2

0x0001,

0xfe50,	// (0x000355c6) ncimui_query_button_pane_t_ParamLimits

0xfe50,	// (0x000355c6) ncimui_query_button_pane_t

0xa76e,	// (0x0002fee4) query_button_pane_ParamLimits

0xa76e,	// (0x0002fee4) query_button_pane

0x231d,	// (0x00027a93) bg_button_pane_cp0028

0xeb25,	// (0x0003429b) query_button_pane_t1

0x1291,	// (0x00026a07) main_tport_pane_ParamLimits

0xa2a9,	// (0x0002fa1f) bg_popup_window_pane_cp01_ParamLimits

0xa2a9,	// (0x0002fa1f) bg_popup_window_pane_cp01

0xa2c0,	// (0x0002fa36) heading_pane_cp08_ParamLimits

0xa2c0,	// (0x0002fa36) heading_pane_cp08

0xa2d1,	// (0x0002fa47) heading_pane_cp07_ParamLimits

0xa2d1,	// (0x0002fa47) heading_pane_cp07

0xe56b,	// (0x00033ce1) cell_tport_appsw_pane_g2

0x0002,

0xfd9c,	// (0x00035512) cell_tport_appsw_pane_g

0x5975,	// (0x0002b0eb) input_candi_list_open_g1

0x4a0e,	// (0x0002a184) list_cale_time_pane_g6_ParamLimits

0x4a0e,	// (0x0002a184) list_cale_time_pane_g6

0x70e5,	// (0x0002c85b) aid_size_touch_calib_1_ParamLimits

0x70e5,	// (0x0002c85b) aid_size_touch_calib_1

0x70f7,	// (0x0002c86d) aid_size_touch_calib_2_ParamLimits

0x70f7,	// (0x0002c86d) aid_size_touch_calib_2

0x710d,	// (0x0002c883) aid_size_touch_calib_3_ParamLimits

0x710d,	// (0x0002c883) aid_size_touch_calib_3

0x7125,	// (0x0002c89b) aid_size_touch_calib_4_ParamLimits

0x7125,	// (0x0002c89b) aid_size_touch_calib_4

0x7139,	// (0x0002c8af) main_touch_calib_button_group_pane_ParamLimits

0x7139,	// (0x0002c8af) main_touch_calib_button_group_pane

0x7151,	// (0x0002c8c7) main_touch_calib_pane_g1_ParamLimits

0x7163,	// (0x0002c8d9) main_touch_calib_pane_g2_ParamLimits

0x7175,	// (0x0002c8eb) main_touch_calib_pane_g3_ParamLimits

0x7187,	// (0x0002c8fd) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x00034eda) main_touch_calib_pane_g_ParamLimits

0x7199,	// (0x0002c90f) main_touch_calib_pane_t1_ParamLimits

0x71b1,	// (0x0002c927) main_touch_calib_pane_t2_ParamLimits

0x71c9,	// (0x0002c93f) main_touch_calib_pane_t3_ParamLimits

0x71db,	// (0x0002c951) main_touch_calib_pane_t4_ParamLimits

0x71ed,	// (0x0002c963) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x00034ee3) main_touch_calib_pane_t_ParamLimits

0xc725,	// (0x00031e9b) list_single_fp_cale_pane_g3_ParamLimits

0xc725,	// (0x00031e9b) list_single_fp_cale_pane_g3

0xb286,	// (0x000309fc) bg_button_pane_cp012_ParamLimits

0xb286,	// (0x000309fc) bg_vkb2_func_pane_cp03_ParamLimits

0x21b6,	// (0x0002792c) cell_vitu2_function_top_pane_g1_ParamLimits

0xb286,	// (0x000309fc) bg_vkb2_func_pane_cp04_ParamLimits

0x955e,	// (0x0002ecd4) main_ncimui_button_group_pane_ParamLimits

0x955e,	// (0x0002ecd4) main_ncimui_button_group_pane

0x95bc,	// (0x0002ed32) main_ncimui_pane_t3_ParamLimits

0x95bc,	// (0x0002ed32) main_ncimui_pane_t3

0xe6d1,	// (0x00033e47) phacti_button_group_pane

0xea24,	// (0x0003419a) aid_size_list_single_double_ParamLimits

0xa6b4,	// (0x0002fe2a) popup_ezdial_listscroll_window_ParamLimits

0xa6ca,	// (0x0002fe40) popup_number_entry_window_cp01_ParamLimits

0xa780,	// (0x0002fef6) phacti_button_pane_ParamLimits

0xa780,	// (0x0002fef6) phacti_button_pane

0x231d,	// (0x00027a93) bg_button_pane_cp14

0xeb33,	// (0x000342a9) phacti_button_pane_t1

0xa78f,	// (0x0002ff05) main_touch_calib_button_pane_ParamLimits

0xa78f,	// (0x0002ff05) main_touch_calib_button_pane

0x2cd7,	// (0x0002844d) bg_button_pane_cp18_ParamLimits

0x2cd7,	// (0x0002844d) bg_button_pane_cp18

0xeb41,	// (0x000342b7) main_touch_calib_button_pane_t1_ParamLimits

0xeb41,	// (0x000342b7) main_touch_calib_button_pane_t1

0xeb57,	// (0x000342cd) main_touch_calib_button_pane_t2_ParamLimits

0xeb57,	// (0x000342cd) main_touch_calib_button_pane_t2

0x0001,

0xfe55,	// (0x000355cb) main_touch_calib_button_pane_t_ParamLimits

0xfe55,	// (0x000355cb) main_touch_calib_button_pane_t

0x231d,	// (0x00027a93) cell_ncimui_button_pane

0x231d,	// (0x00027a93) bg_button_pane_cp032

0xeb75,	// (0x000342eb) cell_ncimui_button_pane_t1

0xcf01,	// (0x00032677) image3_infobar_pane_ParamLimits

0xcf01,	// (0x00032677) image3_infobar_pane

0x99a1,	// (0x0002f117) fs_bigclock_status_pane_ParamLimits

0x99a1,	// (0x0002f117) fs_bigclock_status_pane

0x99ae,	// (0x0002f124) main_fs_bigclock_clock_pane_ParamLimits

0x99ae,	// (0x0002f124) main_fs_bigclock_clock_pane

0x99ca,	// (0x0002f140) main_fs_bigclock_indi_pane_ParamLimits

0x99ca,	// (0x0002f140) main_fs_bigclock_indi_pane

0x99f4,	// (0x0002f16a) main_fs_bigclock_swipe_pane_ParamLimits

0x99f4,	// (0x0002f16a) main_fs_bigclock_swipe_pane

0x231d,	// (0x00027a93) main_fs_clock_dumped_data

0xe065,	// (0x000337db) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe065,	// (0x000337db) list_single_fs_bigclock_indicator_pane_g1

0xe07f,	// (0x000337f5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe07f,	// (0x000337f5) list_single_fs_bigclock_indicator_pane_g2

0xe099,	// (0x0003380f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe099,	// (0x0003380f) list_single_fs_bigclock_indicator_pane_g3

0xe0b3,	// (0x00033829) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0b3,	// (0x00033829) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc82,	// (0x000353f8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc82,	// (0x000353f8) list_single_fs_bigclock_indicator_pane_g

0xe0dc,	// (0x00033852) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0dc,	// (0x00033852) list_single_fs_bigclock_indicator_pane_t1

0xe104,	// (0x0003387a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe104,	// (0x0003387a) list_single_fs_bigclock_indicator_pane_t2

0xe12c,	// (0x000338a2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe12c,	// (0x000338a2) list_single_fs_bigclock_indicator_pane_t3

0xe154,	// (0x000338ca) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe154,	// (0x000338ca) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8d,	// (0x00035403) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8d,	// (0x00035403) list_single_fs_bigclock_indicator_pane_t

0xeb83,	// (0x000342f9) image3_infobar_fav_pane_ParamLimits

0xeb83,	// (0x000342f9) image3_infobar_fav_pane

0xeb93,	// (0x00034309) image3_infobar_loc_pane_ParamLimits

0xeb93,	// (0x00034309) image3_infobar_loc_pane

0xeba7,	// (0x0003431d) image3_infobar_time_pane_ParamLimits

0xeba7,	// (0x0003431d) image3_infobar_time_pane

0xc3cf,	// (0x00031b45) image3_infobar_time_pane_g1

0xebb7,	// (0x0003432d) image3_infobar_time_pane_t1

0xc3cf,	// (0x00031b45) image3_infobar_loc_pane_g1

0xebc5,	// (0x0003433b) image3_infobar_loc_pane_g2

0x0001,

0xfe5a,	// (0x000355d0) image3_infobar_loc_pane_g

0xebcd,	// (0x00034343) image3_infobar_loc_pane_t1

0xc3cf,	// (0x00031b45) image3_infobar_fav_pane_g1

0xebdb,	// (0x00034351) image3_infobar_fav_pane_g2

0x0001,

0xfe5f,	// (0x000355d5) image3_infobar_fav_pane_g

0xebe3,	// (0x00034359) fs_bigclock_status_battery_pane

0xebec,	// (0x00034362) fs_bigclock_status_signal_pane

0xebf5,	// (0x0003436b) fs_bigclock_status_title_pane

0xebfe,	// (0x00034374) fs_bigclock_status_signal_pane_g1

0xec07,	// (0x0003437d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe64,	// (0x000355da) fs_bigclock_status_signal_pane_g

0xec0f,	// (0x00034385) fs_bigclock_status_battery_pane_g1

0xec18,	// (0x0003438e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe69,	// (0x000355df) fs_bigclock_status_battery_pane_g

0xec20,	// (0x00034396) fs_bigclock_status_title_pane_t1

0xa7a2,	// (0x0002ff18) main_fs_bigclock_clock_pane_g1

0xa7a2,	// (0x0002ff18) main_fs_bigclock_clock_pane_g2

0xa7b3,	// (0x0002ff29) main_fs_bigclock_clock_pane_g3

0xa7b3,	// (0x0002ff29) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6e,	// (0x000355e4) main_fs_bigclock_clock_pane_g

0xa7c6,	// (0x0002ff3c) main_fs_bigclock_clock_pane_t1

0xa7dc,	// (0x0002ff52) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe77,	// (0x000355ed) main_fs_bigclock_clock_pane_t

0xec2e,	// (0x000343a4) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec2e,	// (0x000343a4) list_single_fs_bigclock_indicator_pane

0xec3f,	// (0x000343b5) list_single_fs_bigclock_pane_ParamLimits

0xec3f,	// (0x000343b5) list_single_fs_bigclock_pane

0xec65,	// (0x000343db) main_fs_bigclock_indicator_pane_t1

0xec74,	// (0x000343ea) list_single_fs_bigclock_pane_g1

0xec7c,	// (0x000343f2) list_single_fs_bigclock_pane_t1

0xc3cf,	// (0x00031b45) main_fs_bigclock_swipe_pane_g1

0xecbf,	// (0x00034435) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe88,	// (0x000355fe) main_fs_bigclock_swipe_pane_g

0xecc7,	// (0x0003443d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc7,	// (0x0003443d) main_fs_bigclock_swipe_pane_t1

0x4dc7,	// (0x0002a53d) call_type_pane_ParamLimits

0x231d,	// (0x00027a93) main_btmg_pane

0xe3a0,	// (0x00033b16) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe3a0,	// (0x00033b16) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfb,	// (0x00035571) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfb,	// (0x00035571) list_single_cale_mrui_row_pane_g

0xea7f,	// (0x000341f5) list_recal_vselct_arw_lo_pane

0xea87,	// (0x000341fd) list_recal_vselct_arw_up_pane

0xea8f,	// (0x00034205) list_recal_vselct_pane

0xa834,	// (0x0002ffaa) btmg_button_pane

0xa83c,	// (0x0002ffb2) main_btmg_pane_g1

0x231d,	// (0x00027a93) bg_button_pane_cp044

0xece4,	// (0x0003445a) btmg_button_pane_t1

0xbeb9,	// (0x0003162f) aid_listscroll_gen

0x6a87,	// (0x0002c1fd) main_cntbar_detail_pane

0xe591,	// (0x00033d07) list_cmail_folder_pane

0xb36e,	// (0x00030ae4) sp_fs_scroll_pane_cp03_ParamLimits

0xecf2,	// (0x00034468) list_single_fs_dyc_pane_cp01_ParamLimits

0xecf2,	// (0x00034468) list_single_fs_dyc_pane_cp01

0xed06,	// (0x0003447c) aid_size_cmail_indent

0xed0f,	// (0x00034485) list_single_dyc_row_pane_cp01

0xa86c,	// (0x0002ffe2) cntbar_detail_list_pane_ParamLimits

0xa86c,	// (0x0002ffe2) cntbar_detail_list_pane

0xa8b2,	// (0x00030028) main_cntbar_detail_cont_pane_ParamLimits

0xa8b2,	// (0x00030028) main_cntbar_detail_cont_pane

0xb36e,	// (0x00030ae4) scroll_pane_cp032_ParamLimits

0xb36e,	// (0x00030ae4) scroll_pane_cp032

0xa8c6,	// (0x0003003c) cntbar_detail_list_event_pane_ParamLimits

0xa8c6,	// (0x0003003c) cntbar_detail_list_event_pane

0xa87c,	// (0x0002fff2) cntbar_detail_list_shct_pane

0x3e21,	// (0x00029597) aid_list_gen

0xed18,	// (0x0003448e) aid_scroll

0xed21,	// (0x00034497) aid_size_touch_scroll_bar

0x8db9,	// (0x0002e52f) aid_list_double

0xd7f9,	// (0x00032f6f) aid_list_single

0xd7f9,	// (0x00032f6f) aid_list_single_lg

0xa8d6,	// (0x0003004c) aid_list_z_g_a_sm

0xed2a,	// (0x000344a0) aid_list_z_g_d

0xa8de,	// (0x00030054) aid_txt_z_prm

0xa8ec,	// (0x00030062) aid_txt_z_prm_cp01

0xa8fa,	// (0x00030070) aid_txt_z_sec

0xa908,	// (0x0003007e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa908,	// (0x0003007e) main_cntbar_detail_cont_pane_g1

0xa91b,	// (0x00030091) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa91b,	// (0x00030091) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8d,	// (0x00035603) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8d,	// (0x00035603) main_cntbar_detail_cont_pane_g

0xed32,	// (0x000344a8) main_cntbar_detail_cont_pane_t1

0xed40,	// (0x000344b6) main_cntbar_detail_cont_pane_t2

0xed4e,	// (0x000344c4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe92,	// (0x00035608) main_cntbar_detail_cont_pane_t

0xa92b,	// (0x000300a1) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa92b,	// (0x000300a1) cell_cntbar_detail_list_shct_pane

0xed5c,	// (0x000344d2) cntbar_detail_list_shct_pane_g1

0xed65,	// (0x000344db) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe99,	// (0x0003560f) cntbar_detail_list_shct_pane_g

0xa93d,	// (0x000300b3) cntbar_detail_list_event_pane_g1_ParamLimits

0xa93d,	// (0x000300b3) cntbar_detail_list_event_pane_g1

0xa949,	// (0x000300bf) cntbar_detail_list_event_pane_g2_ParamLimits

0xa949,	// (0x000300bf) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9e,	// (0x00035614) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9e,	// (0x00035614) cntbar_detail_list_event_pane_g

0xa9b5,	// (0x0003012b) cntbar_detail_list_event_pane_t1_ParamLimits

0xa9b5,	// (0x0003012b) cntbar_detail_list_event_pane_t1

0xa9ca,	// (0x00030140) cntbar_detail_list_event_pane_t2_ParamLimits

0xa9ca,	// (0x00030140) cntbar_detail_list_event_pane_t2

0x0002,

0xfeab,	// (0x00035621) cntbar_detail_list_event_pane_t_ParamLimits

0xfeab,	// (0x00035621) cntbar_detail_list_event_pane_t

0xc3cf,	// (0x00031b45) cell_cntbar_detail_list_shct_pane_g1

0x53c3,	// (0x0002ab39) navi_pane_mv_g3

0x6a87,	// (0x0002c1fd) main_cntbar_detail_pane_ParamLimits

0x231d,	// (0x00027a93) main_notif_wgt_pane

0xcc97,	// (0x0003240d) aid_tch_main_mp4_pane_g4

0xce8f,	// (0x00032605) popup_slider_window_cp02

0xea75,	// (0x000341eb) list_recal_day_event_pane

0xa844,	// (0x0002ffba) cntbar_detail_btn_pane_ParamLimits

0xa844,	// (0x0002ffba) cntbar_detail_btn_pane

0xa857,	// (0x0002ffcd) cntbar_detail_btn_pane_cp01_ParamLimits

0xa857,	// (0x0002ffcd) cntbar_detail_btn_pane_cp01

0xa87c,	// (0x0002fff2) cntbar_detail_list_shct_pane_ParamLimits

0xa88c,	// (0x00030002) cntbar_detail_pane_g1_ParamLimits

0xa88c,	// (0x00030002) cntbar_detail_pane_g1

0xa89c,	// (0x00030012) cntbar_detail_pane_t1_ParamLimits

0xa89c,	// (0x00030012) cntbar_detail_pane_t1

0xa955,	// (0x000300cb) cntbar_detail_list_event_pane_g3_ParamLimits

0xa955,	// (0x000300cb) cntbar_detail_list_event_pane_g3

0xa96d,	// (0x000300e3) cntbar_detail_list_event_pane_g4_ParamLimits

0xa96d,	// (0x000300e3) cntbar_detail_list_event_pane_g4

0xa985,	// (0x000300fb) cntbar_detail_list_event_pane_g5_ParamLimits

0xa985,	// (0x000300fb) cntbar_detail_list_event_pane_g5

0xa99d,	// (0x00030113) cntbar_detail_list_event_pane_g6_ParamLimits

0xa99d,	// (0x00030113) cntbar_detail_list_event_pane_g6

0xa9df,	// (0x00030155) cntbar_detail_list_event_pane_t3_ParamLimits

0xa9df,	// (0x00030155) cntbar_detail_list_event_pane_t3

0xa9f1,	// (0x00030167) popup_notif_wgt_window_ParamLimits

0xa9f1,	// (0x00030167) popup_notif_wgt_window

0xaa06,	// (0x0003017c) popup_submenu_window_cp01_ParamLimits

0xaa06,	// (0x0003017c) popup_submenu_window_cp01

0x33a7,	// (0x00028b1d) bg_popup_window_pane_cp10

0xed6e,	// (0x000344e4) listscroll_notif_wgt_pane

0xed7f,	// (0x000344f5) list_notif_wgt_window

0xed88,	// (0x000344fe) scroll_pane_cp033

0xaa16,	// (0x0003018c) list_notif_wgt_row_pane_ParamLimits

0xaa16,	// (0x0003018c) list_notif_wgt_row_pane

0xed91,	// (0x00034507) aid_size_list_notif_wgt_del

0xed9e,	// (0x00034514) list_notif_wgt_row_pane_g1

0xedaa,	// (0x00034520) list_notif_wgt_row_pane_g2

0xedb9,	// (0x0003452f) list_notif_wgt_row_pane_g3

0x0002,

0xfeb2,	// (0x00035628) list_notif_wgt_row_pane_g

0xedc6,	// (0x0003453c) list_notif_wgt_row_pane_t1

0xeddc,	// (0x00034552) list_notif_wgt_row_pane_t2

0xedee,	// (0x00034564) list_notif_wgt_row_pane_t3

0x0002,

0xfeb9,	// (0x0003562f) list_notif_wgt_row_pane_t

0xd466,	// (0x00032bdc) list_recal_day_event_pane_g1

0xee00,	// (0x00034576) list_recal_day_event_pane_t1

0x231d,	// (0x00027a93) bg_button_pane_cp045

0xaa26,	// (0x0003019c) cntbar_detail_btn_pane_t1

0xbecd,	// (0x00031643) main_callh_pane_ParamLimits

0xbecd,	// (0x00031643) main_callh_pane

0x231d,	// (0x00027a93) main_coverflow0_pane

0x231d,	// (0x00027a93) main_wgtman_pane

0x9a08,	// (0x0002f17e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9a08,	// (0x0002f17e) main_fs_bigclock_unlock_btn_pane

0xe563,	// (0x00033cd9) bg_button_pane_cp16

0xe573,	// (0x00033ce9) cell_tport_appsw_pane_g3

0xaa34,	// (0x000301aa) cf0_flow_pane_ParamLimits

0xaa34,	// (0x000301aa) cf0_flow_pane

0xee0f,	// (0x00034585) listscroll_cf0_pane

0xee18,	// (0x0003458e) main_cf0_pane_g1

0xaa49,	// (0x000301bf) main_cf0_pane_t1_ParamLimits

0xaa49,	// (0x000301bf) main_cf0_pane_t1

0xaa5e,	// (0x000301d4) main_cf0_pane_t2_ParamLimits

0xaa5e,	// (0x000301d4) main_cf0_pane_t2

0x0001,

0xfec5,	// (0x0003563b) main_cf0_pane_t_ParamLimits

0xfec5,	// (0x0003563b) main_cf0_pane_t

0xee2a,	// (0x000345a0) scroll_pane_cp11

0xaa73,	// (0x000301e9) cf0_flow_pane_g1

0xaa7b,	// (0x000301f1) cf0_flow_pane_g2

0x0001,

0xfeca,	// (0x00035640) cf0_flow_pane_g

0xaa83,	// (0x000301f9) cf0_flow_pane_t1

0x231d,	// (0x00027a93) main_call6_pane

0x231d,	// (0x00027a93) main_calllock_pane

0xaa91,	// (0x00030207) call6_btn_grp_pane_ParamLimits

0xaa91,	// (0x00030207) call6_btn_grp_pane

0xaaa7,	// (0x0003021d) call6_pane_g1_ParamLimits

0xaaa7,	// (0x0003021d) call6_pane_g1

0xaaba,	// (0x00030230) popup_call6_1st_window_ParamLimits

0xaaba,	// (0x00030230) popup_call6_1st_window

0xaac9,	// (0x0003023f) popup_call6_2nd_window_ParamLimits

0xaac9,	// (0x0003023f) popup_call6_2nd_window

0xaad8,	// (0x0003024e) cell_call6_btn_pane_ParamLimits

0xaad8,	// (0x0003024e) cell_call6_btn_pane

0x33a7,	// (0x00028b1d) bg_popup_call2_in_pane_cp03

0xee33,	// (0x000345a9) popup_call6_1st_window_g1

0xee3b,	// (0x000345b1) popup_call6_1st_window_g2

0xee43,	// (0x000345b9) popup_call6_1st_window_g3

0x0002,

0xfecf,	// (0x00035645) popup_call6_1st_window_g

0xee4b,	// (0x000345c1) popup_call6_1st_window_t1

0xee5a,	// (0x000345d0) popup_call6_1st_window_t2

0xee68,	// (0x000345de) popup_call6_1st_window_t3

0x0002,

0xfed6,	// (0x0003564c) popup_call6_1st_window_t

0x33a7,	// (0x00028b1d) bg_popup_call2_in_pane_cp04

0xee33,	// (0x000345a9) popup_call6_2nd_window_g1

0xee3b,	// (0x000345b1) popup_call6_2nd_window_g2

0xee43,	// (0x000345b9) popup_call6_2nd_window_g3

0x0002,

0xfecf,	// (0x00035645) popup_call6_2nd_window_g

0xee4b,	// (0x000345c1) popup_call6_2nd_window_t1

0x231d,	// (0x00027a93) bg_button_pane_cp15

0xee76,	// (0x000345ec) cell_call6_btn_pane_g1

0xee7f,	// (0x000345f5) cell_call6_btn_pane_t1

0xaaec,	// (0x00030262) listscroll_wgtman_pane_ParamLimits

0xaaec,	// (0x00030262) listscroll_wgtman_pane

0xab0d,	// (0x00030283) wgtman_btn_pane_ParamLimits

0xab0d,	// (0x00030283) wgtman_btn_pane

0x500b,	// (0x0002a781) aid_scroll_copy1

0xee8e,	// (0x00034604) list_wgtman_pane

0xab4d,	// (0x000302c3) wgtman_btn_pane_g1_ParamLimits

0xab4d,	// (0x000302c3) wgtman_btn_pane_g1

0xab79,	// (0x000302ef) wgtman_btn_pane_t1_ParamLimits

0xab79,	// (0x000302ef) wgtman_btn_pane_t1

0xee98,	// (0x0003460e) wgtman_btn_pane_t2_ParamLimits

0xee98,	// (0x0003460e) wgtman_btn_pane_t2

0x0001,

0xfedd,	// (0x00035653) wgtman_btn_pane_t_ParamLimits

0xfedd,	// (0x00035653) wgtman_btn_pane_t

0xabb6,	// (0x0003032c) listrow_wgtman_pane_ParamLimits

0xabb6,	// (0x0003032c) listrow_wgtman_pane

0xabc7,	// (0x0003033d) listrow_wgtman_pane_g1

0xabd4,	// (0x0003034a) listrow_wgtman_pane_g2

0x0001,

0xfee2,	// (0x00035658) listrow_wgtman_pane_g

0xabec,	// (0x00030362) listrow_wgtman_pane_t1

0xac04,	// (0x0003037a) listrow_wgtman_pane_t2

0x0001,

0xfee7,	// (0x0003565d) listrow_wgtman_pane_t

0xac2a,	// (0x000303a0) wait_bar_pane_cp09

0xeeaf,	// (0x00034625) main_calllock_btn_pane

0xeeb7,	// (0x0003462d) main_calllock_pane_g1

0x231d,	// (0x00027a93) bg_button_pane_cp17

0xeec0,	// (0x00034636) main_calllock_btn_pane_g1

0xeec9,	// (0x0003463f) main_calllock_btn_pane_t1

0x231d,	// (0x00027a93) main_dialer3_pane

0x231d,	// (0x00027a93) main_fmrd2_pane

0xc3cf,	// (0x00031b45) main_fs_bigclock_unlock_btn_pane_g1

0xeee0,	// (0x00034656) main_fs_bigclock_unlock_btn_pane_t1

0xac3c,	// (0x000303b2) area_fmrd2_info_pane_ParamLimits

0xac3c,	// (0x000303b2) area_fmrd2_info_pane

0xac4b,	// (0x000303c1) area_fmrd2_visual_pane_ParamLimits

0xac4b,	// (0x000303c1) area_fmrd2_visual_pane

0xac59,	// (0x000303cf) fmrd2_indi_pane_ParamLimits

0xac59,	// (0x000303cf) fmrd2_indi_pane

0xac66,	// (0x000303dc) area_fmrd2_visual_pane_g1

0xac6e,	// (0x000303e4) area_fmrd2_visual_pane_t1

0xac7c,	// (0x000303f2) area_fmrd2_visual_pane_t2

0xac8a,	// (0x00030400) area_fmrd2_visual_pane_t3

0x0002,

0xfef1,	// (0x00035667) area_fmrd2_visual_pane_t

0xac98,	// (0x0003040e) area_fmrd2_info_pane_g1

0xaca0,	// (0x00030416) area_fmrd2_info_pane_t1

0xacae,	// (0x00030424) area_fmrd2_info_pane_t2

0xacbc,	// (0x00030432) area_fmrd2_info_pane_t3

0xacca,	// (0x00030440) area_fmrd2_info_pane_t4

0x0003,

0xfef8,	// (0x0003566e) area_fmrd2_info_pane_t

0xacd8,	// (0x0003044e) fmrd2_indi_pane_t1

0xace6,	// (0x0003045c) fmrd2_indi_pane_t2

0xacf4,	// (0x0003046a) fmrd2_indi_pane_t3

0x0002,

0xff01,	// (0x00035677) fmrd2_indi_pane_t

0xe0c2,	// (0x00033838) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0c2,	// (0x00033838) list_single_fs_bigclock_indicator_pane_g5

0xe170,	// (0x000338e6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe170,	// (0x000338e6) list_single_fs_bigclock_indicator_pane_t5

0xa4b0,	// (0x0002fc26) aid_cell_bcale_month_pane_ParamLimits

0xa4b0,	// (0x0002fc26) aid_cell_bcale_month_pane

0xa4ce,	// (0x0002fc44) bcale_month_pane_ParamLimits

0xa4ce,	// (0x0002fc44) bcale_month_pane

0xa4e6,	// (0x0002fc5c) bcale_preview_pane_ParamLimits

0xa4e6,	// (0x0002fc5c) bcale_preview_pane

0xec7c,	// (0x000343f2) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9b,	// (0x00034411) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9b,	// (0x00034411) list_single_fs_bigclock_pane_t2

0x0001,

0xfe83,	// (0x000355f9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe83,	// (0x000355f9) list_single_fs_bigclock_pane_t

0xeed8,	// (0x0003464e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeec,	// (0x00035662) main_fs_bigclock_unlock_btn_pane_g

0xad02,	// (0x00030478) aid_dia3_key_size_ParamLimits

0xad02,	// (0x00030478) aid_dia3_key_size

0xad11,	// (0x00030487) aid_dia3_listrow_size_ParamLimits

0xad11,	// (0x00030487) aid_dia3_listrow_size

0xad24,	// (0x0003049a) dia3_keypad_fun_pane_ParamLimits

0xad24,	// (0x0003049a) dia3_keypad_fun_pane

0xad38,	// (0x000304ae) dia3_keypad_num_pane_ParamLimits

0xad38,	// (0x000304ae) dia3_keypad_num_pane

0xad49,	// (0x000304bf) dia3_listscroll_pane_ParamLimits

0xad49,	// (0x000304bf) dia3_listscroll_pane

0xad5a,	// (0x000304d0) dia3_numentry_pane_ParamLimits

0xad5a,	// (0x000304d0) dia3_numentry_pane

0xeeee,	// (0x00034664) dia3_list_pane

0xeef7,	// (0x0003466d) scroll_pane_cp12

0x231d,	// (0x00027a93) bg_dia3_numentry_pane

0xad6c,	// (0x000304e2) dia3_numentry_pane_t1

0xad7b,	// (0x000304f1) cell_dia3_key_num_pane

0xad83,	// (0x000304f9) cell_dia3_key0_fun_pane_ParamLimits

0xad83,	// (0x000304f9) cell_dia3_key0_fun_pane

0xad97,	// (0x0003050d) cell_dia3_key1_fun_pane_ParamLimits

0xad97,	// (0x0003050d) cell_dia3_key1_fun_pane

0xadae,	// (0x00030524) dia3_listrow_pane

0xde10,	// (0x00033586) bg_dia3_numentry_pane_g1

0x231d,	// (0x00027a93) bg_button_pane_cp21

0xef00,	// (0x00034676) cell_dia3_key_num_pane_t1

0xef0e,	// (0x00034684) cell_dia3_key_num_pane_t2

0xef1d,	// (0x00034693) cell_dia3_key_num_pane_t3

0xef2c,	// (0x000346a2) cell_dia3_key_num_pane_t4

0x0003,

0xff08,	// (0x0003567e) cell_dia3_key_num_pane_t

0x231d,	// (0x00027a93) bg_button_pane_cp19

0xef3b,	// (0x000346b1) cell_dia3_key0_fun_pane_g1

0x231d,	// (0x00027a93) bg_button_pane_cp20

0xadc0,	// (0x00030536) cell_dia3_key1_fun_pane_g1

0xadc8,	// (0x0003053e) area_left_week_number_pane

0xadd4,	// (0x0003054a) area_top_day_name_pane

0xade5,	// (0x0003055b) frame_month_view_pane

0xef43,	// (0x000346b9) grid_month_view_pane

0xadf6,	// (0x0003056c) cell_top_day_name_pane_ParamLimits

0xadf6,	// (0x0003056c) cell_top_day_name_pane

0xae19,	// (0x0003058f) cell_area_left_week_number_pane_ParamLimits

0xae19,	// (0x0003058f) cell_area_left_week_number_pane

0xae2d,	// (0x000305a3) cell_month_view_pane_ParamLimits

0xae2d,	// (0x000305a3) cell_month_view_pane

0xef51,	// (0x000346c7) frm_month_g1

0xae52,	// (0x000305c8) frm_month_g2

0xae63,	// (0x000305d9) frm_month_g3

0xae74,	// (0x000305ea) frm_month_g4

0xae85,	// (0x000305fb) frm_month_g5

0xae96,	// (0x0003060c) frm_month_g6

0xaea7,	// (0x0003061d) frm_month_g7

0xef5e,	// (0x000346d4) frm_month_g8

0xaeb8,	// (0x0003062e) frm_month_g9

0xaec8,	// (0x0003063e) frm_month_g10

0xaed8,	// (0x0003064e) frm_month_g11

0xaee8,	// (0x0003065e) frm_month_g12

0xaef8,	// (0x0003066e) frm_month_g13

0xaf08,	// (0x0003067e) frm_month_g14

0xaf18,	// (0x0003068e) frm_month_g15

0xaf2a,	// (0x000306a0) frm_month_g16

0x000f,

0xff11,	// (0x00035687) frm_month_g

0xef6b,	// (0x000346e1) cell_top_day_name_pane_t1

0xaf3c,	// (0x000306b2) cell_area_left_week_number_pane_g1

0xaf48,	// (0x000306be) cell_area_left_week_number_pane_t1

0xc5fe,	// (0x00031d74) cell_month_view_pane_g1

0xaf5b,	// (0x000306d1) cell_month_view_pane_t1

0x231d,	// (0x00027a93) main_fps_pane

0xe35c,	// (0x00033ad2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe35c,	// (0x00033ad2) cmail_ddmenu_btn02_pane_cp1

0xe378,	// (0x00033aee) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe378,	// (0x00033aee) cmail_ddmenu_btn02_pane_cp2

0xa702,	// (0x0002fe78) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa702,	// (0x0002fe78) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe36,	// (0x000355ac) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe36,	// (0x000355ac) cmail_ddmenu_btn02_pane_g

0xa721,	// (0x0002fe97) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa721,	// (0x0002fe97) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3b,	// (0x000355b1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3b,	// (0x000355b1) cmail_ddmenu_btn02_pane_t

0xaf6e,	// (0x000306e4) fps_text_pane_ParamLimits

0xaf6e,	// (0x000306e4) fps_text_pane

0xaf84,	// (0x000306fa) main_fps_pane_g1_ParamLimits

0xaf84,	// (0x000306fa) main_fps_pane_g1

0xaf9a,	// (0x00030710) wait_bar_pane_cp010_ParamLimits

0xaf9a,	// (0x00030710) wait_bar_pane_cp010

0xef7e,	// (0x000346f4) fps_text_pane_t1_ParamLimits

0xef7e,	// (0x000346f4) fps_text_pane_t1

0xd002,	// (0x00032778) cam4_image_uncrop_pane_g1

0xd00b,	// (0x00032781) cam4_image_uncrop_pane_g2

0x813f,	// (0x0002d8b5) cam4_image_uncrop_pane_g3

0x8148,	// (0x0002d8be) cam4_image_uncrop_pane_g4

0x0003,

0xf8fc,	// (0x00035072) cam4_image_uncrop_pane_g

0xadae,	// (0x00030524) dia3_listrow_pane_ParamLimits

0x231d,	// (0x00027a93) main_phob2_pane

0xa330,	// (0x0002faa6) cell_tport_appsw_pane_cp02_ParamLimits

0xa330,	// (0x0002faa6) cell_tport_appsw_pane_cp02

0xa340,	// (0x0002fab6) cell_tport_appsw_pane_cp03_ParamLimits

0xa340,	// (0x0002fab6) cell_tport_appsw_pane_cp03

0x231d,	// (0x00027a93) phob2_contact_card_pane

0x231d,	// (0x00027a93) phob2_listscroll_pane

0xef96,	// (0x0003470c) phob2_list_pane

0xef9e,	// (0x00034714) scroll_pane_cp034

0xafab,	// (0x00030721) phob2_cc_data_pane_ParamLimits

0xafab,	// (0x00030721) phob2_cc_data_pane

0xafc8,	// (0x0003073e) phob2_cc_listscroll_pane_ParamLimits

0xafc8,	// (0x0003073e) phob2_cc_listscroll_pane

0xabb6,	// (0x0003032c) list_double_large_graphic_phob2_pane_ParamLimits

0xabb6,	// (0x0003032c) list_double_large_graphic_phob2_pane

0xafe4,	// (0x0003075a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xafe4,	// (0x0003075a) list_double_large_graphic_phob2_pane_g1

0xaffa,	// (0x00030770) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xaffa,	// (0x00030770) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff32,	// (0x000356a8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff32,	// (0x000356a8) list_double_large_graphic_phob2_pane_g

0xb006,	// (0x0003077c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb006,	// (0x0003077c) list_double_large_graphic_phob2_pane_t1

0xb01c,	// (0x00030792) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb01c,	// (0x00030792) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff37,	// (0x000356ad) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff37,	// (0x000356ad) list_double_large_graphic_phob2_pane_t

0x231d,	// (0x00027a93) list_highlight_pane_cp024

0xb031,	// (0x000307a7) phob2_cc_button_pane

0xb039,	// (0x000307af) phob2_cc_data_pane_g1_ParamLimits

0xb039,	// (0x000307af) phob2_cc_data_pane_g1

0xb04e,	// (0x000307c4) phob2_cc_data_pane_g2_ParamLimits

0xb04e,	// (0x000307c4) phob2_cc_data_pane_g2

0x0001,

0xff3c,	// (0x000356b2) phob2_cc_data_pane_g_ParamLimits

0xff3c,	// (0x000356b2) phob2_cc_data_pane_g

0xb05e,	// (0x000307d4) phob2_cc_data_pane_t1_ParamLimits

0xb05e,	// (0x000307d4) phob2_cc_data_pane_t1

0xb076,	// (0x000307ec) phob2_cc_data_pane_t2_ParamLimits

0xb076,	// (0x000307ec) phob2_cc_data_pane_t2

0xb08e,	// (0x00030804) phob2_cc_data_pane_t3_ParamLimits

0xb08e,	// (0x00030804) phob2_cc_data_pane_t3

0x0002,

0xff41,	// (0x000356b7) phob2_cc_data_pane_t_ParamLimits

0xff41,	// (0x000356b7) phob2_cc_data_pane_t

0xefa6,	// (0x0003471c) phob2_cc_list_pane_ParamLimits

0xefa6,	// (0x0003471c) phob2_cc_list_pane

0xd4fd,	// (0x00032c73) scroll_pane_cp035_ParamLimits

0xd4fd,	// (0x00032c73) scroll_pane_cp035

0x6a87,	// (0x0002c1fd) bg_button_pane_cp033

0xefb2,	// (0x00034728) phob2_cc_button_pane_g1

0xefbe,	// (0x00034734) phob2_cc_button_pane_t1

0xefd3,	// (0x00034749) phob2_cc_button_pane_t2

0x0001,

0xff48,	// (0x000356be) phob2_cc_button_pane_t

0xb0a6,	// (0x0003081c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb0a6,	// (0x0003081c) list_double_large_graphic_phob2_cc_pane

0xb0b7,	// (0x0003082d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb0b7,	// (0x0003082d) list_double_large_graphic_phob2_cc_pane_g1

0xb0c3,	// (0x00030839) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb0c3,	// (0x00030839) list_double_large_graphic_phob2_cc_pane_g2

0xb0cf,	// (0x00030845) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb0cf,	// (0x00030845) list_double_large_graphic_phob2_cc_pane_g3

0xb0db,	// (0x00030851) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb0db,	// (0x00030851) list_double_large_graphic_phob2_cc_pane_g4

0xb0e7,	// (0x0003085d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb0e7,	// (0x0003085d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4d,	// (0x000356c3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4d,	// (0x000356c3) list_double_large_graphic_phob2_cc_pane_g

0xb0f3,	// (0x00030869) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb0f3,	// (0x00030869) list_double_large_graphic_phob2_cc_pane_t1

0xb11c,	// (0x00030892) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb11c,	// (0x00030892) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff58,	// (0x000356ce) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff58,	// (0x000356ce) list_double_large_graphic_phob2_cc_pane_t

0xefe5,	// (0x0003475b) list_highlight_pane_cp025_ParamLimits

0xefe5,	// (0x0003475b) list_highlight_pane_cp025

0x6a87,	// (0x0002c1fd) bg_button_pane_cp033_ParamLimits

0xefb2,	// (0x00034728) phob2_cc_button_pane_g1_ParamLimits

0xefbe,	// (0x00034734) phob2_cc_button_pane_t1_ParamLimits

0xefd3,	// (0x00034749) phob2_cc_button_pane_t2_ParamLimits

0xff48,	// (0x000356be) phob2_cc_button_pane_t_ParamLimits

0x2358,	// (0x00027ace) popup_wgtman_window

0xd281,	// (0x000329f7) scroll_pane_cp038

0xab2f,	// (0x000302a5) wgtman_btn_pane_cp_01_ParamLimits

0xab2f,	// (0x000302a5) wgtman_btn_pane_cp_01

0xeff3,	// (0x00034769) wgtman_content_pane

0xeffc,	// (0x00034772) wgtman_heading_pane

0x231d,	// (0x00027a93) bg_heading_pane_cp02

0xf005,	// (0x0003477b) wgtman_heading_pane_g1

0xf00d,	// (0x00034783) wgtman_heading_pane_t1

0xf01b,	// (0x00034791) scroll_pane_cp036

0xf023,	// (0x00034799) wgtman_list_pane

0xe25b,	// (0x000339d1) wgtman_list_pane_t1_ParamLimits

0xe25b,	// (0x000339d1) wgtman_list_pane_t1

0xcff0,	// (0x00032766) cam4_grid_pane

0x8926,	// (0x0002e09c) bg_button_pane_cp015_ParamLimits

0x8936,	// (0x0002e0ac) bg_button_pane_cp016_ParamLimits

0x8948,	// (0x0002e0be) bg_button_pane_cp017_ParamLimits

0x8998,	// (0x0002e10e) popup_vitu2_query_window_g3_ParamLimits

0x8998,	// (0x0002e10e) popup_vitu2_query_window_g3

0x8a4b,	// (0x0002e1c1) popup_vitu2_query_window_t6_ParamLimits

0x8a4b,	// (0x0002e1c1) popup_vitu2_query_window_t6

0x8a76,	// (0x0002e1ec) popup_vitu2_query_window_t7_ParamLimits

0x8a76,	// (0x0002e1ec) popup_vitu2_query_window_t7

0xd002,	// (0x00032778) cam4_grid_pane_g1

0xd00b,	// (0x00032781) cam4_grid_pane_g2

0xf02b,	// (0x000347a1) cam4_grid_pane_g3

0xf034,	// (0x000347aa) cam4_grid_pane_g4

0x0003,

0xff5d,	// (0x000356d3) cam4_grid_pane_g

0x38de,	// (0x00029054) aid_placing_vt_slider_lsc_ParamLimits

0x3b99,	// (0x0002930f) vidtel_button_pane_ParamLimits

0x3b99,	// (0x0002930f) vidtel_button_pane

0x231d,	// (0x00027a93) bg_button_pane_cp034

0xb145,	// (0x000308bb) vidtel_button_pane_g1

0xb14d,	// (0x000308c3) vidtel_button_pane_t1

0xd400,	// (0x00032b76) aid_size_vtel_slider_touch

0xd4fd,	// (0x00032c73) scroll_pane_cp039

0x9738,	// (0x0002eeae) ncim_query_button_pane_cp01_ParamLimits

0x9757,	// (0x0002eecd) ncimui_query_pane_g1_ParamLimits

0x6a87,	// (0x0002c1fd) input_focus_pane_cp012_ParamLimits

0xde56,	// (0x000335cc) ncim_query_entry_pane_t1_ParamLimits

0xd4fd,	// (0x00032c73) scroll_pane_cp039_ParamLimits

0x52b0,	// (0x0002aa26) navi_pane_bcale_mc_g1

0x52b8,	// (0x0002aa2e) navi_pane_bcale_mc_t1

0xe3c1,	// (0x00033b37) main_sp_fs_email_pane_g1

0xe3cd,	// (0x00033b43) main_sp_fs_email_pane_g2

0x0001,

0xfcf3,	// (0x00035469) main_sp_fs_email_pane_g

0xe8a4,	// (0x0003401a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8a4,	// (0x0003401a) list_single_cale_mrui_row_pane_g3

0xa741,	// (0x0002feb7) list_single_recal_day_pane_g5_event_pane

0xeae6,	// (0x0003425c) list_single_recal_day_pane_g7

0xf03d,	// (0x000347b3) list_recal_day_event_pane_cp01

0xf046,	// (0x000347bc) list_recal_vselct_arw_lo_pane_cp01

0xf04e,	// (0x000347c4) list_recal_vselct_arw_up_pane_cp01

0xf056,	// (0x000347cc) list_recal_vselct_pane_cp01

0xd466,	// (0x00032bdc) list_recal_day_event_pane_cp01_g1

0xf060,	// (0x000347d6) list_recal_day_event_pane_cp01_t1

0xeaee,	// (0x00034264) list_single_recal_day_pane_t1_ParamLimits

0xeb00,	// (0x00034276) list_single_recal_day_pane_t2_ParamLimits

0xfe4b,	// (0x000355c1) list_single_recal_day_pane_t_ParamLimits

0x2a24,	// (0x0002819a) bg_notes_pane_ParamLimits

0x2ca3,	// (0x00028419) list_notes_pane_ParamLimits

0x2cb1,	// (0x00028427) scroll_pane_cp06_ParamLimits

0x2cd7,	// (0x0002844d) main_notes_pane_ParamLimits

0x231d,	// (0x00027a93) main_welc_pane

0xb163,	// (0x000308d9) main_welc_body_pane_ParamLimits

0xb163,	// (0x000308d9) main_welc_body_pane

0xb17f,	// (0x000308f5) main_welc_opti_pane_ParamLimits

0xb17f,	// (0x000308f5) main_welc_opti_pane

0xb1bc,	// (0x00030932) main_welc_pane_t1_ParamLimits

0xb1bc,	// (0x00030932) main_welc_pane_t1

0xf06e,	// (0x000347e4) main_welc_body_row_pane_ParamLimits

0xf06e,	// (0x000347e4) main_welc_body_row_pane

0xf081,	// (0x000347f7) main_welc_opti_row_pane_ParamLimits

0xf081,	// (0x000347f7) main_welc_opti_row_pane

0xf08f,	// (0x00034805) main_welc_opti_row_pane_g1

0xb1d6,	// (0x0003094c) main_welc_opti_row_pane_t1

0xf097,	// (0x0003480d) main_welc_body_row_pane_t1

0xed77,	// (0x000344ed) popup_notif_wgt_heading_pane

0xed91,	// (0x00034507) aid_size_list_notif_wgt_del_ParamLimits

0xed9e,	// (0x00034514) list_notif_wgt_row_pane_g1_ParamLimits

0xedaa,	// (0x00034520) list_notif_wgt_row_pane_g2_ParamLimits

0xedb9,	// (0x0003452f) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb2,	// (0x00035628) list_notif_wgt_row_pane_g_ParamLimits

0xedc6,	// (0x0003453c) list_notif_wgt_row_pane_t1_ParamLimits

0xeddc,	// (0x00034552) list_notif_wgt_row_pane_t2_ParamLimits

0xedee,	// (0x00034564) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb9,	// (0x0003562f) list_notif_wgt_row_pane_t_ParamLimits

0xabc7,	// (0x0003033d) listrow_wgtman_pane_g1_ParamLimits

0xabd4,	// (0x0003034a) listrow_wgtman_pane_g2_ParamLimits

0xfee2,	// (0x00035658) listrow_wgtman_pane_g_ParamLimits

0xabec,	// (0x00030362) listrow_wgtman_pane_t1_ParamLimits

0xac04,	// (0x0003037a) listrow_wgtman_pane_t2_ParamLimits

0xfee7,	// (0x0003565d) listrow_wgtman_pane_t_ParamLimits

0xac2a,	// (0x000303a0) wait_bar_pane_cp09_ParamLimits

0x231d,	// (0x00027a93) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0003481c) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x00034824) popup_notif_wgt_heading_pane_t1

0x231d,	// (0x00027a93) main_vids_pane

0x231d,	// (0x00027a93) vids_listscroll_pane

0xb1e5,	// (0x0003095b) scroll_pane_cp040

0x231d,	// (0x00027a93) vids_list_pane

0xb1f0,	// (0x00030966) vids_list_double_pane_ParamLimits

0xb1f0,	// (0x00030966) vids_list_double_pane

0xb200,	// (0x00030976) vids_list_double_pane_g1

0xb209,	// (0x0003097f) vids_list_double_pane_t1

0xb218,	// (0x0003098e) vids_list_double_pane_t2

0x0001,

0xff6b,	// (0x000356e1) vids_list_double_pane_t

0xb286,	// (0x000309fc) main_ncimui_pane_ParamLimits

0x9570,	// (0x0002ece6) main_ncimui_pane_g1_ParamLimits

0x957c,	// (0x0002ecf2) main_ncimui_pane_g2_ParamLimits

0x957c,	// (0x0002ecf2) main_ncimui_pane_g2

0x0001,

0xfbf8,	// (0x0003536e) main_ncimui_pane_g_ParamLimits

0xfbf8,	// (0x0003536e) main_ncimui_pane_g

0xb196,	// (0x0003090c) main_welc_pane_g1_ParamLimits

0xb196,	// (0x0003090c) main_welc_pane_g1

0xb1a9,	// (0x0003091f) main_welc_pane_g2_ParamLimits

0xb1a9,	// (0x0003091f) main_welc_pane_g2

0x0001,

0xff66,	// (0x000356dc) main_welc_pane_g_ParamLimits

0xff66,	// (0x000356dc) main_welc_pane_g

0x2a24,	// (0x0002819a) listscroll_mce_pane_ParamLimits

0x5445,	// (0x0002abbb) wait_bar_pane_cp10

0xbec1,	// (0x00031637) main_cale_day_pane_ParamLimits

0xbec1,	// (0x00031637) main_cale_week_pane_ParamLimits

0x2a24,	// (0x0002819a) main_messa_pane_ParamLimits

0x79dc,	// (0x0002d152) main_clock2_btn_pane_ParamLimits

0x79dc,	// (0x0002d152) main_clock2_btn_pane

0xc7ad,	// (0x00031f23) main_clock2_btn_pane_cp01_ParamLimits

0xc7ad,	// (0x00031f23) main_clock2_btn_pane_cp01

0xe83c,	// (0x00033fb2) list_cale_mrui_pane_ParamLimits

0xee22,	// (0x00034598) main_cf0_pane_g2

0x0001,

0xfec0,	// (0x00035636) main_cf0_pane_g

0xadc8,	// (0x0003053e) area_left_week_number_pane_ParamLimits

0xadd4,	// (0x0003054a) area_top_day_name_pane_ParamLimits

0xade5,	// (0x0003055b) frame_month_view_pane_ParamLimits

0xef43,	// (0x000346b9) grid_month_view_pane_ParamLimits

0xef51,	// (0x000346c7) frm_month_g1_ParamLimits

0xae52,	// (0x000305c8) frm_month_g2_ParamLimits

0xae63,	// (0x000305d9) frm_month_g3_ParamLimits

0xae74,	// (0x000305ea) frm_month_g4_ParamLimits

0xae85,	// (0x000305fb) frm_month_g5_ParamLimits

0xae96,	// (0x0003060c) frm_month_g6_ParamLimits

0xaea7,	// (0x0003061d) frm_month_g7_ParamLimits

0xef5e,	// (0x000346d4) frm_month_g8_ParamLimits

0xaeb8,	// (0x0003062e) frm_month_g9_ParamLimits

0xaec8,	// (0x0003063e) frm_month_g10_ParamLimits

0xaed8,	// (0x0003064e) frm_month_g11_ParamLimits

0xaee8,	// (0x0003065e) frm_month_g12_ParamLimits

0xaef8,	// (0x0003066e) frm_month_g13_ParamLimits

0xaf08,	// (0x0003067e) frm_month_g14_ParamLimits

0xaf18,	// (0x0003068e) frm_month_g15_ParamLimits

0xaf2a,	// (0x000306a0) frm_month_g16_ParamLimits

0xff11,	// (0x00035687) frm_month_g_ParamLimits

0xef6b,	// (0x000346e1) cell_top_day_name_pane_t1_ParamLimits

0xaf3c,	// (0x000306b2) cell_area_left_week_number_pane_g1_ParamLimits

0xaf48,	// (0x000306be) cell_area_left_week_number_pane_t1_ParamLimits

0xc5fe,	// (0x00031d74) cell_month_view_pane_g1_ParamLimits

0xaf5b,	// (0x000306d1) cell_month_view_pane_t1_ParamLimits

0x2a1c,	// (0x00028192) main_clock2_btn_pane_g1

0xf0bc,	// (0x00034832) main_clock2_btn_pane_t1

0x6a87,	// (0x0002c1fd) listscroll_cmail_pane_ParamLimits

0xe3c1,	// (0x00033b37) main_sp_fs_email_pane_g1_ParamLimits

0xe3cd,	// (0x00033b43) main_sp_fs_email_pane_g2_ParamLimits

0xfcf3,	// (0x00035469) main_sp_fs_email_pane_g_ParamLimits

0xea56,	// (0x000341cc) list_recal_day_pane_ParamLimits

0xea67,	// (0x000341dd) mian_recal_day_pane_t1

0x9fda,	// (0x0002f750) list_single_dyc_row_text_pane_t4_ParamLimits

0x9fda,	// (0x0002f750) list_single_dyc_row_text_pane_t4

0xa011,	// (0x0002f787) list_single_dyc_row_text_pane_t5_ParamLimits

0xa011,	// (0x0002f787) list_single_dyc_row_text_pane_t5

0xe491,	// (0x00033c07) list_single_dyc_row_text_pane_t6_ParamLimits

0xe491,	// (0x00033c07) list_single_dyc_row_text_pane_t6

0x49b6,	// (0x0002a12c) aid_mgn_list_cale_time_pane

0xb286,	// (0x000309fc) main_gallery2_pane_ParamLimits

0xc7c1,	// (0x00031f37) main_clock2_pane_cp01_t1

0xc7cf,	// (0x00031f45) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x00034f4d) main_clock2_pane_cp01_t

0x30df,	// (0x00028855) cale_week_scroll_pane_g16_ParamLimits

0x30df,	// (0x00028855) cale_week_scroll_pane_g16

0x33a7,	// (0x00028b1d) vorec_slider_pane

0xb14d,	// (0x000308c3) vidtel_button_pane_t1_ParamLimits

0xa7a2,	// (0x0002ff18) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa7a2,	// (0x0002ff18) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa7b3,	// (0x0002ff29) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa7b3,	// (0x0002ff29) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe6e,	// (0x000355e4) main_fs_bigclock_clock_pane_g_ParamLimits

0xa7c6,	// (0x0002ff3c) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa7dc,	// (0x0002ff52) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe77,	// (0x000355ed) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
