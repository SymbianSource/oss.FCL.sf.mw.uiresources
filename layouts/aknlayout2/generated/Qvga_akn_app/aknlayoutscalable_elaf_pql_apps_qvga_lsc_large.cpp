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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00066f74 };

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
0x32e5,	// (0x0006a259) Screen

0x32ef,	// (0x0006a263) application_window

0x3325,	// (0x0006a299) area_bottom_pane_ParamLimits

0x3325,	// (0x0006a299) area_bottom_pane

0x3358,	// (0x0006a2cc) area_top_pane_ParamLimits

0x3358,	// (0x0006a2cc) area_top_pane

0xadac,	// (0x00071d20) call_video_uplink_pane_ParamLimits

0xadac,	// (0x00071d20) call_video_uplink_pane

0x33d8,	// (0x0006a34c) main_pane_ParamLimits

0x33d8,	// (0x0006a34c) main_pane

0xc304,	// (0x00073278) context_pane

0x69db,	// (0x0006d94f) navi_pane

0x6a04,	// (0x0006d978) popup_cale_events_window_ParamLimits

0x6a04,	// (0x0006d978) popup_cale_events_window

0xc317,	// (0x0007328b) popup_mup_playback_window

0x6a1c,	// (0x0006d990) signal_pane

0xb546,	// (0x000724ba) main_browser_pane

0xb7ab,	// (0x0007271f) main_burst_pane

0x15f8,	// (0x0006856c) main_calc_pane

0xc2ee,	// (0x00073262) main_cale_day_pane

0x3861,	// (0x0006a7d5) main_cale_month_pane

0xc2ee,	// (0x00073262) main_cale_week_pane

0xb7ab,	// (0x0007271f) main_call_pane

0xb1d9,	// (0x0007214d) main_call_poc_pane

0xb7ab,	// (0x0007271f) main_camera_pane

0xb7ab,	// (0x0007271f) main_chi_dic_pane

0x1302,	// (0x00068276) main_clock_pane

0xb1d9,	// (0x0007214d) main_fmradio_pane

0xb7ab,	// (0x0007271f) main_graph_messa_pane

0xb1d9,	// (0x0007214d) main_help_pane

0xb546,	// (0x000724ba) main_im_pane

0xb434,	// (0x000723a8) main_image_pane_ParamLimits

0xb434,	// (0x000723a8) main_image_pane

0xb1d9,	// (0x0007214d) main_location2_pane

0xb7ab,	// (0x0007271f) main_location_pane

0xb434,	// (0x000723a8) main_messa_pane

0xb1d9,	// (0x0007214d) main_mp2_pane

0xb7ab,	// (0x0007271f) main_mp_pane

0xb1d9,	// (0x0007214d) main_msg_pane

0xb1d9,	// (0x0007214d) main_mup_eq_pane

0xb1d9,	// (0x0007214d) main_mup_pane

0xb546,	// (0x000724ba) main_notes_pane

0xb1d9,	// (0x0007214d) main_pec_pane

0xb1d9,	// (0x0007214d) main_phob_pane

0xb1d9,	// (0x0007214d) main_pinb_pane

0xb1d9,	// (0x0007214d) main_postcard_pane

0xb1d9,	// (0x0007214d) main_qdial_pane

0xb7ab,	// (0x0007271f) main_skin_pane

0xb1d9,	// (0x0007214d) main_smil2_pane

0xb7ab,	// (0x0007271f) main_smil_pane

0xb7ab,	// (0x0007271f) main_video_pane

0xb7ab,	// (0x0007271f) main_video_tele_pane

0xb434,	// (0x000723a8) main_viewer_pane_ParamLimits

0xb434,	// (0x000723a8) main_viewer_pane

0xb7ab,	// (0x0007271f) main_vorec_pane

0x67cf,	// (0x0006d743) popup_blid_sat_info_window_ParamLimits

0x67cf,	// (0x0006d743) popup_blid_sat_info_window

0x6825,	// (0x0006d799) popup_dyc_status_message_window_ParamLimits

0x6825,	// (0x0006d799) popup_dyc_status_message_window

0x683b,	// (0x0006d7af) popup_grid_large_graphic_window_ParamLimits

0x683b,	// (0x0006d7af) popup_grid_large_graphic_window

0x68d1,	// (0x0006d845) popup_loc_request_window_ParamLimits

0x68d1,	// (0x0006d845) popup_loc_request_window

0x69b5,	// (0x0006d929) popup_wml_address_window_ParamLimits

0x69b5,	// (0x0006d929) popup_wml_address_window

0x6607,	// (0x0006d57b) call_muted_g1

0x6617,	// (0x0006d58b) popup_call_audio_conf_window_ParamLimits

0x6617,	// (0x0006d58b) popup_call_audio_conf_window

0x6635,	// (0x0006d5a9) popup_call_audio_first_window_ParamLimits

0x6635,	// (0x0006d5a9) popup_call_audio_first_window

0x6693,	// (0x0006d607) popup_call_audio_in_window_ParamLimits

0x6693,	// (0x0006d607) popup_call_audio_in_window

0x66bf,	// (0x0006d633) popup_call_audio_out_window_ParamLimits

0x66bf,	// (0x0006d633) popup_call_audio_out_window

0x66ed,	// (0x0006d661) popup_call_audio_second_window_ParamLimits

0x66ed,	// (0x0006d661) popup_call_audio_second_window

0x6733,	// (0x0006d6a7) popup_call_audio_wait_window_ParamLimits

0x6733,	// (0x0006d6a7) popup_call_audio_wait_window

0x6766,	// (0x0006d6da) popup_number_entry_window_ParamLimits

0x6766,	// (0x0006d6da) popup_number_entry_window

0xadc8,	// (0x00071d3c) bg_popup_call_pane_cp05_ParamLimits

0xadc8,	// (0x00071d3c) bg_popup_call_pane_cp05

0xade8,	// (0x00071d5c) popup_number_entry_window_t1

0xadfb,	// (0x00071d6f) popup_number_entry_window_t2

0xae0d,	// (0x00071d81) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00075ff9) popup_number_entry_window_t

0xae1f,	// (0x00071d93) text_title_cp2

0xae32,	// (0x00071da6) bg_popup_call_pane_cp_ParamLimits

0xae32,	// (0x00071da6) bg_popup_call_pane_cp

0xae40,	// (0x00071db4) call_thumbnail_pane

0xae48,	// (0x00071dbc) popup_call_audio_in_window_g1_ParamLimits

0xae48,	// (0x00071dbc) popup_call_audio_in_window_g1

0xae54,	// (0x00071dc8) popup_call_audio_in_window_g2_ParamLimits

0xae54,	// (0x00071dc8) popup_call_audio_in_window_g2

0xae60,	// (0x00071dd4) popup_call_audio_in_window_g3_ParamLimits

0xae60,	// (0x00071dd4) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00076002) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00076002) popup_call_audio_in_window_g

0xae6c,	// (0x00071de0) popup_call_audio_in_window_t1_ParamLimits

0xae6c,	// (0x00071de0) popup_call_audio_in_window_t1

0xae87,	// (0x00071dfb) popup_call_audio_in_window_t2_ParamLimits

0xae87,	// (0x00071dfb) popup_call_audio_in_window_t2

0xaea2,	// (0x00071e16) popup_call_audio_in_window_t3_ParamLimits

0xaea2,	// (0x00071e16) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00076009) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00076009) popup_call_audio_in_window_t

0xae32,	// (0x00071da6) bg_popup_call_pane_cp01_ParamLimits

0xae32,	// (0x00071da6) bg_popup_call_pane_cp01

0xae40,	// (0x00071db4) call_thumbnail_pane_cp02

0xaeb5,	// (0x00071e29) call_type_pane_cp022

0xaebd,	// (0x00071e31) popup_call_audio_out_window_g1_ParamLimits

0xaebd,	// (0x00071e31) popup_call_audio_out_window_g1

0xaecf,	// (0x00071e43) popup_call_audio_out_window_g2_ParamLimits

0xaecf,	// (0x00071e43) popup_call_audio_out_window_g2

0xaedb,	// (0x00071e4f) popup_call_audio_out_window_g3_ParamLimits

0xaedb,	// (0x00071e4f) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00076010) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00076010) popup_call_audio_out_window_g

0xaeed,	// (0x00071e61) popup_call_audio_out_window_t1_ParamLimits

0xaeed,	// (0x00071e61) popup_call_audio_out_window_t1

0xaf05,	// (0x00071e79) popup_call_audio_out_window_t2_ParamLimits

0xaf05,	// (0x00071e79) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00076017) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00076017) popup_call_audio_out_window_t

0xaf1a,	// (0x00071e8e) bg_popup_call_pane_ParamLimits

0xaf1a,	// (0x00071e8e) bg_popup_call_pane

0x3561,	// (0x0006a4d5) call_thumbnail_pane_cp_ParamLimits

0x3561,	// (0x0006a4d5) call_thumbnail_pane_cp

0xaf9e,	// (0x00071f12) call_type_pane_cp01_ParamLimits

0xaf9e,	// (0x00071f12) call_type_pane_cp01

0xafe2,	// (0x00071f56) popup_call_audio_first_window_g1_ParamLimits

0xafe2,	// (0x00071f56) popup_call_audio_first_window_g1

0xb02e,	// (0x00071fa2) popup_call_audio_first_window_g2_ParamLimits

0xb02e,	// (0x00071fa2) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0007601c) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0007601c) popup_call_audio_first_window_g

0xb072,	// (0x00071fe6) popup_call_audio_first_window_t1_ParamLimits

0xb072,	// (0x00071fe6) popup_call_audio_first_window_t1

0xb11e,	// (0x00072092) popup_call_audio_first_window_t4_ParamLimits

0xb11e,	// (0x00072092) popup_call_audio_first_window_t4

0xb1aa,	// (0x0007211e) popup_call_audio_first_window_t5_ParamLimits

0xb1aa,	// (0x0007211e) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00076021) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00076021) popup_call_audio_first_window_t

0xb1d9,	// (0x0007214d) bg_popup_call_pane_cp02

0xb1e3,	// (0x00072157) call_type_pane_cp023

0xb1eb,	// (0x0007215f) popup_call_audio_wait_window_g1

0xb1f3,	// (0x00072167) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00076028) popup_call_audio_wait_window_g

0xb1fb,	// (0x0007216f) popup_call_audio_wait_window_t3

0xb209,	// (0x0007217d) bg_popup_call_pane_cp03_ParamLimits

0xb209,	// (0x0007217d) bg_popup_call_pane_cp03

0xb269,	// (0x000721dd) call_thumbnail_pane_cp011_ParamLimits

0xb269,	// (0x000721dd) call_thumbnail_pane_cp011

0xb275,	// (0x000721e9) call_type_pane_cp034_ParamLimits

0xb275,	// (0x000721e9) call_type_pane_cp034

0xb2b1,	// (0x00072225) popup_call_audio_second_window_g1_ParamLimits

0xb2b1,	// (0x00072225) popup_call_audio_second_window_g1

0xb2ed,	// (0x00072261) popup_call_audio_second_window_g2_ParamLimits

0xb2ed,	// (0x00072261) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0007602d) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0007602d) popup_call_audio_second_window_g

0xb329,	// (0x0007229d) popup_call_audio_second_window_t1_ParamLimits

0xb329,	// (0x0007229d) popup_call_audio_second_window_t1

0xb3aa,	// (0x0007231e) popup_call_audio_second_window_t2_ParamLimits

0xb3aa,	// (0x0007231e) popup_call_audio_second_window_t2

0xb3e0,	// (0x00072354) popup_call_audio_second_window_t3_ParamLimits

0xb3e0,	// (0x00072354) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00076032) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00076032) popup_call_audio_second_window_t

0xb1d9,	// (0x0007214d) bg_popup_call_pane_cp04

0xb416,	// (0x0007238a) list_conf_pane

0xb41e,	// (0x00072392) popup_call_audio_conf_window_t1

0xb42c,	// (0x000723a0) call_thumbnail_pane_g1

0xb434,	// (0x000723a8) bg_pinb_pane_ParamLimits

0xb434,	// (0x000723a8) bg_pinb_pane

0xb442,	// (0x000723b6) find_pinb_pane

0xb434,	// (0x000723a8) listscroll_pinb_pane_ParamLimits

0xb434,	// (0x000723a8) listscroll_pinb_pane

0xb44c,	// (0x000723c0) pinb_bg_pane_g1

0xb44c,	// (0x000723c0) pinb_bg_pane_g2

0xb44c,	// (0x000723c0) pinb_bg_pane_g3

0xb44c,	// (0x000723c0) pinb_bg_pane_g4

0xb44c,	// (0x000723c0) pinb_bg_pane_g5

0xb44c,	// (0x000723c0) pinb_bg_pane_g6

0xb44c,	// (0x000723c0) pinb_bg_pane_g7

0xb44c,	// (0x000723c0) pinb_bg_pane_g8

0xb44c,	// (0x000723c0) pinb_bg_pane_g9

0xb44c,	// (0x000723c0) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00076039) pinb_bg_pane_g

0x3590,	// (0x0006a504) grid_pinb_pane

0xad6d,	// (0x00071ce1) list_pinb_pane

0xb456,	// (0x000723ca) scroll_pane_cp01_ParamLimits

0xb456,	// (0x000723ca) scroll_pane_cp01

0xb463,	// (0x000723d7) find_pinb_pane_g1_ParamLimits

0xb463,	// (0x000723d7) find_pinb_pane_g1

0xb47b,	// (0x000723ef) find_pinb_pane_t1

0xb48d,	// (0x00072401) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00076053) find_pinb_pane_t

0xb4a2,	// (0x00072416) input_focus_pane_cp01_ParamLimits

0xb4a2,	// (0x00072416) input_focus_pane_cp01

0x359a,	// (0x0006a50e) cell_pinb_pane_ParamLimits

0x359a,	// (0x0006a50e) cell_pinb_pane

0xb4ae,	// (0x00072422) cell_pinb_pane_g1_ParamLimits

0xb4ae,	// (0x00072422) cell_pinb_pane_g1

0xb4bc,	// (0x00072430) cell_pinb_pane_g2_ParamLimits

0xb4bc,	// (0x00072430) cell_pinb_pane_g2

0xb4bc,	// (0x00072430) cell_pinb_pane_g3_ParamLimits

0xb4bc,	// (0x00072430) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00076058) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00076058) cell_pinb_pane_g

0xb1d9,	// (0x0007214d) grid_highlight_pane_cp01

0xad6d,	// (0x00071ce1) list_pinb_item_pane_ParamLimits

0xad6d,	// (0x00071ce1) list_pinb_item_pane

0xad6d,	// (0x00071ce1) list_highlight_pane_cp02

0xb4ca,	// (0x0007243e) list_pinb_item_pane_g1_ParamLimits

0xb4ca,	// (0x0007243e) list_pinb_item_pane_g1

0xb4bc,	// (0x00072430) list_pinb_item_pane_g2_ParamLimits

0xb4bc,	// (0x00072430) list_pinb_item_pane_g2

0xb4ae,	// (0x00072422) list_pinb_item_pane_g3_ParamLimits

0xb4ae,	// (0x00072422) list_pinb_item_pane_g3

0xb4bc,	// (0x00072430) list_pinb_item_pane_g4_ParamLimits

0xb4bc,	// (0x00072430) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0007605f) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0007605f) list_pinb_item_pane_g

0xb4d8,	// (0x0007244c) list_pinb_item_pane_t1_ParamLimits

0xb4d8,	// (0x0007244c) list_pinb_item_pane_t1

0x35c0,	// (0x0006a534) calc_display_pane

0x35dc,	// (0x0006a550) calc_paper_pane

0x35fd,	// (0x0006a571) grid_calc_pane

0xb1d9,	// (0x0007214d) bg_list_pane_cp01

0x3619,	// (0x0006a58d) clock_g1

0x3621,	// (0x0006a595) clock_g2

0x0001,

0xf0f4,	// (0x00076068) clock_g

0x3629,	// (0x0006a59d) clock_t1_ParamLimits

0x3629,	// (0x0006a59d) clock_t1

0x363e,	// (0x0006a5b2) clock_t2_ParamLimits

0x363e,	// (0x0006a5b2) clock_t2

0x3650,	// (0x0006a5c4) clock_t3_ParamLimits

0x3650,	// (0x0006a5c4) clock_t3

0x3662,	// (0x0006a5d6) clock_t4_ParamLimits

0x3662,	// (0x0006a5d6) clock_t4

0x3674,	// (0x0006a5e8) clock_t5_ParamLimits

0x3674,	// (0x0006a5e8) clock_t5

0x3689,	// (0x0006a5fd) clock_t6_ParamLimits

0x3689,	// (0x0006a5fd) clock_t6

0x369b,	// (0x0006a60f) clock_t7_ParamLimits

0x369b,	// (0x0006a60f) clock_t7

0x36ad,	// (0x0006a621) clock_t8_ParamLimits

0x36ad,	// (0x0006a621) clock_t8

0x36bf,	// (0x0006a633) clock_t9_ParamLimits

0x36bf,	// (0x0006a633) clock_t9

0x0008,

0xf0f9,	// (0x0007606d) clock_t_ParamLimits

0xf0f9,	// (0x0007606d) clock_t

0xb4f4,	// (0x00072468) popup_clock_analogue_window_cp02

0xb4f4,	// (0x00072468) popup_clock_digital_window_cp01

0xb1d9,	// (0x0007214d) listscroll_help_pane

0xb1d9,	// (0x0007214d) phob_pre_status_pane

0xb4fc,	// (0x00072470) grid_qdial_pane

0xb434,	// (0x000723a8) listscroll_mce_pane

0xb434,	// (0x000723a8) bg_notes_pane

0xb506,	// (0x0007247a) list_notes_pane

0x36d1,	// (0x0006a645) scroll_pane_cp06

0xb514,	// (0x00072488) bg_calc_paper_pane

0xb52c,	// (0x000724a0) list_calc_pane

0xb546,	// (0x000724ba) bg_calc_display_pane

0xb552,	// (0x000724c6) calc_display_pane_t1

0xb567,	// (0x000724db) calc_display_pane_t2

0xb57c,	// (0x000724f0) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00076080) calc_display_pane_t

0x36e3,	// (0x0006a657) cell_calc_pane_ParamLimits

0x36e3,	// (0x0006a657) cell_calc_pane

0xb58e,	// (0x00072502) bg_calc_paper_pane_g1

0xb59a,	// (0x0007250e) bg_calc_paper_pane_g2

0xb5a6,	// (0x0007251a) bg_calc_paper_pane_g3

0xb5b2,	// (0x00072526) bg_calc_paper_pane_g4

0xb5be,	// (0x00072532) bg_calc_paper_pane_g5

0x3716,	// (0x0006a68a) bg_calc_paper_pane_g6

0x3725,	// (0x0006a699) bg_calc_paper_pane_g7

0x3734,	// (0x0006a6a8) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00076087) bg_calc_paper_pane_g

0x3743,	// (0x0006a6b7) calc_bg_paper_pane_g9

0x3752,	// (0x0006a6c6) list_calc_item_pane_ParamLimits

0x3752,	// (0x0006a6c6) list_calc_item_pane

0xb5ca,	// (0x0007253e) list_calc_item_pane_g1

0xb5d7,	// (0x0007254b) list_calc_item_pane_t1_ParamLimits

0xb5d7,	// (0x0007254b) list_calc_item_pane_t1

0x3766,	// (0x0006a6da) list_calc_item_pane_t2_ParamLimits

0x3766,	// (0x0006a6da) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00076098) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00076098) list_calc_item_pane_t

0xb44c,	// (0x000723c0) cell_calc_pane_g1

0xb5e9,	// (0x0007255d) grid_highlight_pane_cp02

0xb60b,	// (0x0007257f) bg_calc_display_pane_g1

0xb614,	// (0x00072588) bg_calc_display_pane_g2

0xb61e,	// (0x00072592) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x000760a2) bg_calc_display_pane_g

0x3794,	// (0x0006a708) cell_qdial_pane_ParamLimits

0x3794,	// (0x0006a708) cell_qdial_pane

0x37a6,	// (0x0006a71a) cell_qdial_pane_g1_ParamLimits

0x37a6,	// (0x0006a71a) cell_qdial_pane_g1

0x37bc,	// (0x0006a730) cell_qdial_pane_g2_ParamLimits

0x37bc,	// (0x0006a730) cell_qdial_pane_g2

0xb627,	// (0x0007259b) cell_qdial_pane_g3_ParamLimits

0xb627,	// (0x0007259b) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x000760a9) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x000760a9) cell_qdial_pane_g

0x37e3,	// (0x0006a757) cell_qdial_pane_t1_ParamLimits

0x37e3,	// (0x0006a757) cell_qdial_pane_t1

0x37fb,	// (0x0006a76f) cell_qdial_pane_t2_ParamLimits

0x37fb,	// (0x0006a76f) cell_qdial_pane_t2

0x380e,	// (0x0006a782) cell_qdial_pane_t3_ParamLimits

0x380e,	// (0x0006a782) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x000760b2) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x000760b2) cell_qdial_pane_t

0xb1d9,	// (0x0007214d) grid_highlight_pane_cp04

0xb633,	// (0x000725a7) thumbnail_qdial_pane_ParamLimits

0xb633,	// (0x000725a7) thumbnail_qdial_pane

0xb68f,	// (0x00072603) list_help_pane

0xb699,	// (0x0007260d) scroll_pane_cp02

0x3821,	// (0x0006a795) help_list_pane_t1_ParamLimits

0x3821,	// (0x0006a795) help_list_pane_t1

0xb6a2,	// (0x00072616) bg_notes_pane_g2

0xb6aa,	// (0x0007261e) bg_notes_pane_g3

0xb6b2,	// (0x00072626) notes_bg_pane_g1

0xb6ba,	// (0x0007262e) notes_bg_pane_g4

0xb6c2,	// (0x00072636) notes_bg_pane_g5

0xb6ca,	// (0x0007263e) notes_bg_pane_g6

0xb6d2,	// (0x00072646) notes_bg_pane_g7

0xb6da,	// (0x0007264e) notes_bg_pane_g8

0xb6e2,	// (0x00072656) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x000760d0) notes_bg_pane_g

0x383e,	// (0x0006a7b2) list_notes_text_pane_ParamLimits

0x383e,	// (0x0006a7b2) list_notes_text_pane

0xb6ea,	// (0x0007265e) list_notes_text_pane_g1

0x2916,	// (0x0006988a) list_notes_text_pane_t1

0x3861,	// (0x0006a7d5) listscroll_cale_week_pane

0x388b,	// (0x0006a7ff) bg_cale_heading_pane

0xb70d,	// (0x00072681) bg_cale_pane_cp01

0x38a3,	// (0x0006a817) cale_week_corner_pane

0x38c2,	// (0x0006a836) cale_week_day_heading_pane

0x38df,	// (0x0006a853) cale_week_scroll_pane_g1

0x38f2,	// (0x0006a866) cale_week_scroll_pane_g2

0x390a,	// (0x0006a87e) cale_week_scroll_pane_g3

0x3922,	// (0x0006a896) cale_week_scroll_pane_g4

0x393a,	// (0x0006a8ae) cale_week_scroll_pane_g5

0x3952,	// (0x0006a8c6) cale_week_scroll_pane_g6

0x396a,	// (0x0006a8de) cale_week_scroll_pane_g7

0x3982,	// (0x0006a8f6) cale_week_scroll_pane_g8

0x399e,	// (0x0006a912) cale_week_scroll_pane_g9

0x39b6,	// (0x0006a92a) cale_week_scroll_pane_g10

0x39ce,	// (0x0006a942) cale_week_scroll_pane_g11

0x39e6,	// (0x0006a95a) cale_week_scroll_pane_g12

0x39fe,	// (0x0006a972) cale_week_scroll_pane_g13

0x3a16,	// (0x0006a98a) cale_week_scroll_pane_g14

0x3a2e,	// (0x0006a9a2) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x000760df) cale_week_scroll_pane_g

0x3a62,	// (0x0006a9d6) cale_week_time_pane

0x3a7e,	// (0x0006a9f2) grid_cale_week_pane

0xb73c,	// (0x000726b0) scroll_pane_cp08

0x3a9c,	// (0x0006aa10) cell_cale_week_pane_ParamLimits

0x3a9c,	// (0x0006aa10) cell_cale_week_pane

0x3b12,	// (0x0006aa86) cale_week_day_heading_pane_t1

0x3b3c,	// (0x0006aab0) cale_week_day_heading_pane_t2

0x3b6b,	// (0x0006aadf) cale_week_day_heading_pane_t3

0x3b9a,	// (0x0006ab0e) cale_week_day_heading_pane_t4

0x3bc9,	// (0x0006ab3d) cale_week_day_heading_pane_t5

0x3bf8,	// (0x0006ab6c) cale_week_day_heading_pane_t6

0x3c27,	// (0x0006ab9b) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00076100) cale_week_day_heading_pane_t

0xb759,	// (0x000726cd) bg_cale_side_pane

0x3c51,	// (0x0006abc5) cale_week_time_pane_t1

0x3c8b,	// (0x0006abff) cale_week_time_pane_t2

0x3cc5,	// (0x0006ac39) cale_week_time_pane_t3

0x3cff,	// (0x0006ac73) cale_week_time_pane_t4

0x3d39,	// (0x0006acad) cale_week_time_pane_t5

0x3d73,	// (0x0006ace7) cale_week_time_pane_t6

0x3dad,	// (0x0006ad21) cale_week_time_pane_t7

0x3de7,	// (0x0006ad5b) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0007610f) cale_week_time_pane_t

0x3e21,	// (0x0006ad95) cell_cale_week_pane_g2

0x3e40,	// (0x0006adb4) cell_cale_week_pane_g3_ParamLimits

0x3e40,	// (0x0006adb4) cell_cale_week_pane_g3

0xb767,	// (0x000726db) grid_highlight_pane_cp07

0xb76f,	// (0x000726e3) listscroll_gms_pane

0xb779,	// (0x000726ed) grid_gms_pane

0xb782,	// (0x000726f6) listscroll_gms_pane_g1

0xb78a,	// (0x000726fe) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00076120) listscroll_gms_pane_g

0x3e58,	// (0x0006adcc) scroll_pane_cp010

0x3e63,	// (0x0006add7) cell_gms_pane_ParamLimits

0x3e63,	// (0x0006add7) cell_gms_pane

0x3e73,	// (0x0006ade7) cell_gms_pane_g1

0xb792,	// (0x00072706) cell_gms_pane_g2

0xb6ea,	// (0x0007265e) cell_gms_pane_g3

0xb79a,	// (0x0007270e) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00076125) cell_gms_pane_g

0xb7a3,	// (0x00072717) grid_highlight_pane_cp09

0x65b5,	// (0x0006d529) phob_pre_status_pane_g1

0x65bd,	// (0x0006d531) phob_pre_status_pane_g2

0x65c5,	// (0x0006d539) phob_pre_status_pane_g3

0x65cd,	// (0x0006d541) phob_pre_status_pane_g4

0x0004,

0xf59f,	// (0x00076513) phob_pre_status_pane_g

0x65dd,	// (0x0006d551) phob_pre_status_pane_t1

0x65eb,	// (0x0006d55f) phob_pre_status_pane_t2

0x65f9,	// (0x0006d56d) phob_pre_status_pane_t3

0x0002,

0xf5aa,	// (0x0007651e) phob_pre_status_pane_t

0xb7ab,	// (0x0007271f) bg_list_pane_cp05

0x3e83,	// (0x0006adf7) grid_vorec_pane

0xb7b3,	// (0x00072727) vorec_t1

0xb7c1,	// (0x00072735) vorec_t2

0xb7cf,	// (0x00072743) vorec_t3

0x3e8b,	// (0x0006adff) vorec_t4

0xaca0,	// (0x00071c14) vorec_t5

0xacae,	// (0x00071c22) vorec_t6

0x0004,

0xf1ba,	// (0x0007612e) vorec_t

0xacbc,	// (0x00071c30) wait_bar_pane_cp01

0x3e99,	// (0x0006ae0d) cell_vorec_pane_ParamLimits

0x3e99,	// (0x0006ae0d) cell_vorec_pane

0xb7eb,	// (0x0007275f) cell_vorec_pane_g1

0xb1d9,	// (0x0007214d) grid_highlight_pane_cp05

0x15f8,	// (0x0006856c) cams_zoom_pane

0x3eac,	// (0x0006ae20) image_vga_pane

0xb4ae,	// (0x00072422) main_camera_pane_g1

0xb4ae,	// (0x00072422) main_camera_pane_g2

0xb4ae,	// (0x00072422) main_camera_pane_g3

0xb4ae,	// (0x00072422) main_camera_pane_g4

0xb4ae,	// (0x00072422) main_camera_pane_g5

0xb4ae,	// (0x00072422) main_camera_pane_g6

0xb4ae,	// (0x00072422) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00076139) main_camera_pane_g

0x15e4,	// (0x00068558) main_camera_pane_t1

0x15e4,	// (0x00068558) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0007614a) main_camera_pane_t

0x3edb,	// (0x0006ae4f) cams_zoom_pane_cp_ParamLimits

0x3edb,	// (0x0006ae4f) cams_zoom_pane_cp

0x3f03,	// (0x0006ae77) image_cif_pane_ParamLimits

0x3f03,	// (0x0006ae77) image_cif_pane

0x3f34,	// (0x0006aea8) image_subqcif_pane

0x3f3c,	// (0x0006aeb0) main_video_pane_g1_ParamLimits

0x3f3c,	// (0x0006aeb0) main_video_pane_g1

0x3f60,	// (0x0006aed4) main_video_pane_g2_ParamLimits

0x3f60,	// (0x0006aed4) main_video_pane_g2

0x3f94,	// (0x0006af08) main_video_pane_g3_ParamLimits

0x3f94,	// (0x0006af08) main_video_pane_g3

0x3fc2,	// (0x0006af36) main_video_pane_g4_ParamLimits

0x3fc2,	// (0x0006af36) main_video_pane_g4

0x3ff0,	// (0x0006af64) main_video_pane_g5_ParamLimits

0x3ff0,	// (0x0006af64) main_video_pane_g5

0xb7f5,	// (0x00072769) main_video_pane_g6_ParamLimits

0xb7f5,	// (0x00072769) main_video_pane_g6

0x0006,

0xf1db,	// (0x0007614f) main_video_pane_g_ParamLimits

0xf1db,	// (0x0007614f) main_video_pane_g

0x4017,	// (0x0006af8b) main_video_pane_t1_ParamLimits

0x4017,	// (0x0006af8b) main_video_pane_t1

0xb80f,	// (0x00072783) cams_zoom_pane_g1

0xb80f,	// (0x00072783) cams_zoom_pane_g2

0xb80f,	// (0x00072783) cams_zoom_pane_g3

0xb80f,	// (0x00072783) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0007615e) cams_zoom_pane_g

0x4074,	// (0x0006afe8) grid_cams_pane

0x4089,	// (0x0006affd) linegrid_cams_pane

0x409a,	// (0x0006b00e) cell_cams_pane_ParamLimits

0x409a,	// (0x0006b00e) cell_cams_pane

0xb819,	// (0x0007278d) cams_burst_image_pane

0xb821,	// (0x00072795) cell_cams_pane_g1

0xb1d9,	// (0x0007214d) grid_highlight_pane_cp03

0xb44c,	// (0x000723c0) mp_bg_pane_g1

0xb1d9,	// (0x0007214d) bg_list_pane_cp03

0xc213,	// (0x00073187) bg_mp_pane

0xc21b,	// (0x0007318f) grid_mp_pane

0xc223,	// (0x00073197) media_player_g1

0xc22b,	// (0x0007319f) media_player_t1

0xc239,	// (0x000731ad) media_player_t2

0xc247,	// (0x000731bb) media_player_t3

0xc255,	// (0x000731c9) media_player_t4

0xc263,	// (0x000731d7) media_player_t5

0xc271,	// (0x000731e5) media_player_t6

0xc27f,	// (0x000731f3) media_player_t7

0x0006,

0xf589,	// (0x000764fd) media_player_t

0xc28d,	// (0x00073201) wait_bar_pane_cp02

0xf56e,	// (0x000764e2) main_usb_pane_t

0x65ac,	// (0x0006d520) cell_mp_pane

0xb44c,	// (0x000723c0) cell_mp_pane_g1

0xb1d9,	// (0x0007214d) grid_highlight_pane_cp06

0xb867,	// (0x000727db) grid_skin_colour_pane

0xb86f,	// (0x000727e3) list_highlight_pane_cp03

0x40b8,	// (0x0006b02c) skin_g1

0xb877,	// (0x000727eb) skin_t1

0xb886,	// (0x000727fa) skin_t2

0x0001,

0xf218,	// (0x0007618c) skin_t

0x40c0,	// (0x0006b034) cell_skin_colour_pane_ParamLimits

0x40c0,	// (0x0006b034) cell_skin_colour_pane

0xb894,	// (0x00072808) cell_skin_colour_pane_g1

0x4129,	// (0x0006b09d) call_video_g1_ParamLimits

0x4129,	// (0x0006b09d) call_video_g1

0x413f,	// (0x0006b0b3) call_video_g2_ParamLimits

0x413f,	// (0x0006b0b3) call_video_g2

0x0001,

0xf21d,	// (0x00076191) call_video_g_ParamLimits

0xf21d,	// (0x00076191) call_video_g

0x4187,	// (0x0006b0fb) call_video_uplink_pane_cp1_ParamLimits

0x4187,	// (0x0006b0fb) call_video_uplink_pane_cp1

0xb8a6,	// (0x0007281a) call_video_uplink_pane_cp2

0x421c,	// (0x0006b190) video_down_crop_pane_ParamLimits

0x421c,	// (0x0006b190) video_down_crop_pane

0x42df,	// (0x0006b253) video_down_pane_ParamLimits

0x42df,	// (0x0006b253) video_down_pane

0xb8ae,	// (0x00072822) video_down_subqcif_pane_ParamLimits

0xb8ae,	// (0x00072822) video_down_subqcif_pane

0xb8c6,	// (0x0007283a) video_down_subqcif_pane_cp_ParamLimits

0xb8c6,	// (0x0007283a) video_down_subqcif_pane_cp

0xb8ea,	// (0x0007285e) im_reading_pane_ParamLimits

0xb8ea,	// (0x0007285e) im_reading_pane

0x439c,	// (0x0006b310) im_writing_pane_ParamLimits

0x439c,	// (0x0006b310) im_writing_pane

0x43b2,	// (0x0006b326) im_reading_pane_t1

0xb904,	// (0x00072878) list_im_pane

0xb915,	// (0x00072889) scroll_pane_cp07

0x43e8,	// (0x0006b35c) im_writing_pane_t1_ParamLimits

0x43e8,	// (0x0006b35c) im_writing_pane_t1

0xb92e,	// (0x000728a2) im_writing_pane_t2_ParamLimits

0xb92e,	// (0x000728a2) im_writing_pane_t2

0x0001,

0xf227,	// (0x0007619b) im_writing_pane_t_ParamLimits

0xf227,	// (0x0007619b) im_writing_pane_t

0xb1d9,	// (0x0007214d) input_focus_pane_cp04

0xb1d9,	// (0x0007214d) input_focus_pane_cp05

0x43fd,	// (0x0006b371) list_im_single_pane_ParamLimits

0x43fd,	// (0x0006b371) list_im_single_pane

0xb94b,	// (0x000728bf) list_single_im_pane_t1

0x6572,	// (0x0006d4e6) blid_accuracy_pane

0x657a,	// (0x0006d4ee) blid_compass_pane

0x6582,	// (0x0006d4f6) main_location_t1

0x6590,	// (0x0006d504) main_location_t2

0x659e,	// (0x0006d512) main_location_t3

0x0002,

0xf598,	// (0x0007650c) main_location_t

0xb1d9,	// (0x0007214d) aid_levels_location

0xb44c,	// (0x000723c0) blid_accuracy_pane_g1

0xb44c,	// (0x000723c0) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x000761ef) blid_accuracy_pane_g

0xb985,	// (0x000728f9) wml_content_pane

0xb9c3,	// (0x00072937) wml_button_pane_ParamLimits

0xb9c3,	// (0x00072937) wml_button_pane

0x4413,	// (0x0006b387) wml_list_single_large_pane_ParamLimits

0x4413,	// (0x0006b387) wml_list_single_large_pane

0x4427,	// (0x0006b39b) wml_list_single_medium_pane_ParamLimits

0x4427,	// (0x0006b39b) wml_list_single_medium_pane

0x443c,	// (0x0006b3b0) wml_list_single_small_pane_ParamLimits

0x443c,	// (0x0006b3b0) wml_list_single_small_pane

0xb9d7,	// (0x0007294b) wml_selection_box_pane_ParamLimits

0xb9d7,	// (0x0007294b) wml_selection_box_pane

0xb9ea,	// (0x0007295e) wml_list_single_pane_t1

0xb9f9,	// (0x0007296d) wml_list_single_medium_pane_t1

0xba08,	// (0x0007297c) wml_list_single_large_pane_t1

0xba17,	// (0x0007298b) input_focus_pane_cp02_ParamLimits

0xba17,	// (0x0007298b) input_focus_pane_cp02

0xba2a,	// (0x0007299e) wml_selection_box_pane_g1

0xba33,	// (0x000729a7) wml_selection_box_pane_t1_ParamLimits

0xba33,	// (0x000729a7) wml_selection_box_pane_t1

0xb434,	// (0x000723a8) bg_wml_button_pane_ParamLimits

0xb434,	// (0x000723a8) bg_wml_button_pane

0xba4b,	// (0x000729bf) wml_button_pane_g1

0xba53,	// (0x000729c7) wml_button_pane_t1

0xba4b,	// (0x000729bf) wml_button_bg_pane_g1

0xba63,	// (0x000729d7) wml_button_bg_pane_g2

0xba6b,	// (0x000729df) wml_button_bg_pane_g3

0xba73,	// (0x000729e7) wml_button_bg_pane_g4

0xba7b,	// (0x000729ef) wml_button_bg_pane_g5

0xba83,	// (0x000729f7) wml_button_bg_pane_g6

0xba8b,	// (0x000729ff) wml_button_bg_pane_g7

0xba93,	// (0x00072a07) wml_button_bg_pane_g8

0xba9b,	// (0x00072a0f) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x000761a0) wml_button_bg_pane_g

0x4453,	// (0x0006b3c7) bg_list_pane_cp02

0xbaa3,	// (0x00072a17) mce_header_pane_ParamLimits

0xbaa3,	// (0x00072a17) mce_header_pane

0xbab7,	// (0x00072a2b) mce_icon_pane

0xbab7,	// (0x00072a2b) mce_image_pane

0xbac0,	// (0x00072a34) mce_text_pane_ParamLimits

0xbac0,	// (0x00072a34) mce_text_pane

0x445c,	// (0x0006b3d0) scroll_pane_cp03

0x445c,	// (0x0006b3d0) scroll_pane_cp04

0xbad4,	// (0x00072a48) scroll_pane_cp05_ParamLimits

0xbad4,	// (0x00072a48) scroll_pane_cp05

0x4466,	// (0x0006b3da) mce_header_field_pane_ParamLimits

0x4466,	// (0x0006b3da) mce_header_field_pane

0x447d,	// (0x0006b3f1) mce_header_field_pane_2_ParamLimits

0x447d,	// (0x0006b3f1) mce_header_field_pane_2

0x4493,	// (0x0006b407) mce_header_field_pane_3

0x449b,	// (0x0006b40f) list_single_mce_message_pane_ParamLimits

0x449b,	// (0x0006b40f) list_single_mce_message_pane

0x44b0,	// (0x0006b424) list_single_mce_smart_pane_ParamLimits

0x44b0,	// (0x0006b424) list_single_mce_smart_pane

0xbae0,	// (0x00072a54) input_focus_pane_cp03

0xbae9,	// (0x00072a5d) list_header_data_pane

0x44d0,	// (0x0006b444) mce_header_field_pane_t1

0x44de,	// (0x0006b452) list_single_mce_header_pane_ParamLimits

0x44de,	// (0x0006b452) list_single_mce_header_pane

0xbaf1,	// (0x00072a65) list_single_mce_header_pane_t1

0xbb00,	// (0x00072a74) list_single_mce_message_pane_g1

0xbb09,	// (0x00072a7d) list_single_mce_message_pane_t1

0x4518,	// (0x0006b48c) bg_cale_heading_pane_cp01_ParamLimits

0x4518,	// (0x0006b48c) bg_cale_heading_pane_cp01

0xbb18,	// (0x00072a8c) bg_cale_pane_cp02_ParamLimits

0xbb18,	// (0x00072a8c) bg_cale_pane_cp02

0x4547,	// (0x0006b4bb) cale_month_corner_pane

0x4566,	// (0x0006b4da) cale_month_day_heading_pane_ParamLimits

0x4566,	// (0x0006b4da) cale_month_day_heading_pane

0x459d,	// (0x0006b511) cale_month_pane_g1_ParamLimits

0x459d,	// (0x0006b511) cale_month_pane_g1

0x45c1,	// (0x0006b535) cale_month_pane_g2_ParamLimits

0x45c1,	// (0x0006b535) cale_month_pane_g2

0x45e9,	// (0x0006b55d) cale_month_pane_g3_ParamLimits

0x45e9,	// (0x0006b55d) cale_month_pane_g3

0x4625,	// (0x0006b599) cale_month_pane_g4_ParamLimits

0x4625,	// (0x0006b599) cale_month_pane_g4

0x4661,	// (0x0006b5d5) cale_month_pane_g5_ParamLimits

0x4661,	// (0x0006b5d5) cale_month_pane_g5

0x469d,	// (0x0006b611) cale_month_pane_g6_ParamLimits

0x469d,	// (0x0006b611) cale_month_pane_g6

0x46d9,	// (0x0006b64d) cale_month_pane_g7_ParamLimits

0x46d9,	// (0x0006b64d) cale_month_pane_g7

0x4715,	// (0x0006b689) cale_month_pane_g8_ParamLimits

0x4715,	// (0x0006b689) cale_month_pane_g8

0x4759,	// (0x0006b6cd) cale_month_pane_g9_ParamLimits

0x4759,	// (0x0006b6cd) cale_month_pane_g9

0x479b,	// (0x0006b70f) cale_month_pane_g10_ParamLimits

0x479b,	// (0x0006b70f) cale_month_pane_g10

0x47dd,	// (0x0006b751) cale_month_pane_g11_ParamLimits

0x47dd,	// (0x0006b751) cale_month_pane_g11

0x481f,	// (0x0006b793) cale_month_pane_g12_ParamLimits

0x481f,	// (0x0006b793) cale_month_pane_g12

0x4861,	// (0x0006b7d5) cale_month_pane_g13_ParamLimits

0x4861,	// (0x0006b7d5) cale_month_pane_g13

0x000c,

0xf23f,	// (0x000761b3) cale_month_pane_g_ParamLimits

0xf23f,	// (0x000761b3) cale_month_pane_g

0x48a3,	// (0x0006b817) cale_month_week_pane

0x48bf,	// (0x0006b833) grid_cale_month_pane_ParamLimits

0x48bf,	// (0x0006b833) grid_cale_month_pane

0x48ed,	// (0x0006b861) cale_month_day_heading_pane_t1

0x4973,	// (0x0006b8e7) cale_month_day_heading_pane_t2

0x4a04,	// (0x0006b978) cale_month_day_heading_pane_t3

0x4a95,	// (0x0006ba09) cale_month_day_heading_pane_t4

0x4b26,	// (0x0006ba9a) cale_month_day_heading_pane_t5

0x4bb7,	// (0x0006bb2b) cale_month_day_heading_pane_t6

0x4c48,	// (0x0006bbbc) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x000761ce) cale_month_day_heading_pane_t

0xb759,	// (0x000726cd) bg_cale_side_pane_cp01

0x4cdd,	// (0x0006bc51) cale_month_week_pane_t1

0x4cf6,	// (0x0006bc6a) cale_month_week_pane_t2

0x4d0f,	// (0x0006bc83) cale_month_week_pane_t3

0x4d28,	// (0x0006bc9c) cale_month_week_pane_t4

0x4d41,	// (0x0006bcb5) cale_month_week_pane_t5

0x4d5a,	// (0x0006bcce) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x000761dd) cale_month_week_pane_t

0x4d73,	// (0x0006bce7) cell_cale_month_pane_ParamLimits

0x4d73,	// (0x0006bce7) cell_cale_month_pane

0xbb57,	// (0x00072acb) cell_cale_month_pane_g1

0x4e65,	// (0x0006bdd9) cell_cale_month_pane_t1_ParamLimits

0x4e65,	// (0x0006bdd9) cell_cale_month_pane_t1

0xb767,	// (0x000726db) grid_highlight_pane_cp08

0xb44c,	// (0x000723c0) main_smil_g1

0x4e85,	// (0x0006bdf9) smil_status_pane

0xbb63,	// (0x00072ad7) smil_text_pane

0xc0db,	// (0x0007304f) bg_popup_call3_rect_pane_g8

0xc0e3,	// (0x00073057) bg_popup_call3_rect_pane_g9

0x0008,

0xf519,	// (0x0007648d) bg_popup_call3_rect_pane_g

0xc363,	// (0x000732d7) smil_status_volume_pane_g1

0x4e96,	// (0x0006be0a) smil_status_pane_t1

0xeae7,	// (0x00075a5b) volume_smil_pane

0xbb6d,	// (0x00072ae1) list_smil_text_pane

0x4ead,	// (0x0006be21) scroll_pane_cp011

0x4eb8,	// (0x0006be2c) smil_text_list_pane_t1_ParamLimits

0x4eb8,	// (0x0006be2c) smil_text_list_pane_t1

0xbb77,	// (0x00072aeb) aid_volume_smil_ParamLimits

0xbb77,	// (0x00072aeb) aid_volume_smil

0xb44c,	// (0x000723c0) smil_volume_pane_g1

0xb44c,	// (0x000723c0) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x000761ef) smil_volume_pane_g

0x3861,	// (0x0006a7d5) listscroll_cale_day_pane

0xbb99,	// (0x00072b0d) bg_cale_pane

0x0ed6,	// (0x00067e4a) list_cale_pane

0x0ef9,	// (0x00067e6d) scroll_pane_cp09

0x0f0a,	// (0x00067e7e) cale_bg_pane_g1

0x0f12,	// (0x00067e86) cale_bg_pane_g2

0x0f1a,	// (0x00067e8e) cale_bg_pane_g3

0x0f22,	// (0x00067e96) cale_bg_pane_g4

0x0f2a,	// (0x00067e9e) cale_bg_pane_g5

0x0f32,	// (0x00067ea6) cale_bg_pane_g6

0x0f3a,	// (0x00067eae) cale_bg_pane_g7

0x0f42,	// (0x00067eb6) cale_bg_pane_g8

0x0f4a,	// (0x00067ebe) cale_bg_pane_g9

0x0008,

0xf280,	// (0x000761f4) cale_bg_pane_g

0x4efc,	// (0x0006be70) list_cale_time_pane_ParamLimits

0x4efc,	// (0x0006be70) list_cale_time_pane

0x0f52,	// (0x00067ec6) list_cale_time_pane_g1_ParamLimits

0x0f52,	// (0x00067ec6) list_cale_time_pane_g1

0x0f5e,	// (0x00067ed2) list_cale_time_pane_g2_ParamLimits

0x0f5e,	// (0x00067ed2) list_cale_time_pane_g2

0x4f11,	// (0x0006be85) list_cale_time_pane_g3_ParamLimits

0x4f11,	// (0x0006be85) list_cale_time_pane_g3

0x4f1d,	// (0x0006be91) list_cale_time_pane_g4_ParamLimits

0x4f1d,	// (0x0006be91) list_cale_time_pane_g4

0x4f29,	// (0x0006be9d) list_cale_time_pane_g5_ParamLimits

0x4f29,	// (0x0006be9d) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00076207) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00076207) list_cale_time_pane_g

0x0f78,	// (0x00067eec) list_cale_time_pane_t1_ParamLimits

0x0f78,	// (0x00067eec) list_cale_time_pane_t1

0x0fa0,	// (0x00067f14) list_cale_time_pane_t2_ParamLimits

0x0fa0,	// (0x00067f14) list_cale_time_pane_t2

0x51cb,	// (0x0006c13f) aid_blid_cardinal_pane

0x5209,	// (0x0006c17d) compass_pane_t4

0x0fc8,	// (0x00067f3c) list_cale_time_pane_t4_ParamLimits

0x0fc8,	// (0x00067f3c) list_cale_time_pane_t4

0x5217,	// (0x0006c18b) compass_pane_t5

0x5225,	// (0x0006c199) compass_pane_t6

0x5233,	// (0x0006c1a7) compass_pane_t7

0x1427,	// (0x0006839b) navi_pane_cc_t1

0x15cc,	// (0x00068540) aid_phob_thumbnail_center_pane

0x5572,	// (0x0006c4e6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x00076214) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x00076214) list_cale_time_pane_t

0xae32,	// (0x00071da6) bg_popup_window_pane_cp02_ParamLimits

0xae32,	// (0x00071da6) bg_popup_window_pane_cp02

0x0ff0,	// (0x00067f64) heading_pane_cp01_ParamLimits

0x0ff0,	// (0x00067f64) heading_pane_cp01

0x0ffc,	// (0x00067f70) loc_req_pane_ParamLimits

0x0ffc,	// (0x00067f70) loc_req_pane

0x100c,	// (0x00067f80) loc_type_pane_ParamLimits

0x100c,	// (0x00067f80) loc_type_pane

0x101e,	// (0x00067f92) loc_type_pane_t1_ParamLimits

0x101e,	// (0x00067f92) loc_type_pane_t1

0x1030,	// (0x00067fa4) loc_type_pane_t2_ParamLimits

0x1030,	// (0x00067fa4) loc_type_pane_t2

0x1042,	// (0x00067fb6) loc_type_pane_t3_ParamLimits

0x1042,	// (0x00067fb6) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0007621b) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0007621b) loc_type_pane_t

0x1054,	// (0x00067fc8) list_loc_req_pane

0x105e,	// (0x00067fd2) scroll_pane_cp012

0x4f35,	// (0x0006bea9) list_single_loc_request_popup_menu_pane_ParamLimits

0x4f35,	// (0x0006bea9) list_single_loc_request_popup_menu_pane

0x1067,	// (0x00067fdb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1067,	// (0x00067fdb) list_single_loc_request_popup_menu_pane_g1

0x1073,	// (0x00067fe7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1073,	// (0x00067fe7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00076222) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00076222) list_single_loc_request_popup_menu_pane_g

0x107f,	// (0x00067ff3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x107f,	// (0x00067ff3) list_single_loc_request_popup_menu_pane_t1

0xb434,	// (0x000723a8) bg_popup_window_pane_cp03_ParamLimits

0xb434,	// (0x000723a8) bg_popup_window_pane_cp03

0x1850,	// (0x000687c4) heading_loc_req_pane_ParamLimits

0x1850,	// (0x000687c4) heading_loc_req_pane

0x4f42,	// (0x0006beb6) popup_dyc_status_message_window_g1_ParamLimits

0x4f42,	// (0x0006beb6) popup_dyc_status_message_window_g1

0x4f56,	// (0x0006beca) popup_dyc_status_message_window_t1_ParamLimits

0x4f56,	// (0x0006beca) popup_dyc_status_message_window_t1

0x4f6b,	// (0x0006bedf) popup_dyc_status_message_window_t2_ParamLimits

0x4f6b,	// (0x0006bedf) popup_dyc_status_message_window_t2

0x4f80,	// (0x0006bef4) popup_dyc_status_message_window_t3_ParamLimits

0x4f80,	// (0x0006bef4) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00076227) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00076227) popup_dyc_status_message_window_t

0xb1d9,	// (0x0007214d) bg_heading_pane_cp01

0x1095,	// (0x00068009) heading_loc_req_pane_g1

0x109d,	// (0x00068011) heading_loc_req_pane_g2

0x10a5,	// (0x00068019) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0007622e) heading_loc_req_pane_g

0x10ad,	// (0x00068021) heading_loc_req_pane_t1

0x10bc,	// (0x00068030) bg_popup_sub_pane_cp01_ParamLimits

0x10bc,	// (0x00068030) bg_popup_sub_pane_cp01

0x10ca,	// (0x0006803e) popup_cale_events_window_g1_ParamLimits

0x10ca,	// (0x0006803e) popup_cale_events_window_g1

0x10ea,	// (0x0006805e) popup_cale_events_window_g2_ParamLimits

0x10ea,	// (0x0006805e) popup_cale_events_window_g2

0x0001,

0xf2ee,	// (0x00076262) popup_cale_events_window_g_ParamLimits

0xf2ee,	// (0x00076262) popup_cale_events_window_g

0x110a,	// (0x0006807e) popup_cale_events_window_t1_ParamLimits

0x110a,	// (0x0006807e) popup_cale_events_window_t1

0x111c,	// (0x00068090) popup_cale_events_window_t2_ParamLimits

0x111c,	// (0x00068090) popup_cale_events_window_t2

0x115a,	// (0x000680ce) popup_cale_events_window_t3_ParamLimits

0x115a,	// (0x000680ce) popup_cale_events_window_t3

0x1194,	// (0x00068108) popup_cale_events_window_t4_ParamLimits

0x1194,	// (0x00068108) popup_cale_events_window_t4

0x0003,

0xf2f3,	// (0x00076267) popup_cale_events_window_t_ParamLimits

0xf2f3,	// (0x00076267) popup_cale_events_window_t

0x4fb6,	// (0x0006bf2a) call_type_pane

0x4fc6,	// (0x0006bf3a) popup_call_status_window_g1

0x4fda,	// (0x0006bf4e) popup_call_status_window_g2

0x4fee,	// (0x0006bf62) popup_call_status_window_g3

0x0002,

0xf2fc,	// (0x00076270) popup_call_status_window_g

0x11ca,	// (0x0006813e) call_type_pane_g1

0x11d3,	// (0x00068147) call_type_pane_g2

0x0001,

0xf303,	// (0x00076277) call_type_pane_g

0xb1d9,	// (0x0007214d) bg_popup_sub_pane_cp02

0x11dc,	// (0x00068150) listscroll_popup_wml_pane

0x11e4,	// (0x00068158) list_wml_pane

0x11ee,	// (0x00068162) scroll_pane_cp013

0x4ffe,	// (0x0006bf72) list_single_graphic_popup_wml_pane_ParamLimits

0x4ffe,	// (0x0006bf72) list_single_graphic_popup_wml_pane

0xb44c,	// (0x000723c0) list_single_graphic_popup_wml_pane_g1

0x11f7,	// (0x0006816b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf308,	// (0x0007627c) list_single_graphic_popup_wml_pane_g

0x11ff,	// (0x00068173) list_single_graphic_popup_wml_pane_t1

0x1215,	// (0x00068189) aid_call_pane

0xb42c,	// (0x000723a0) popup_clock_analogue_window_g1

0xb42c,	// (0x000723a0) popup_clock_analogue_window_g2

0xe9c7,	// (0x0007593b) popup_clock_analogue_window_g3

0xe9c7,	// (0x0007593b) popup_clock_analogue_window_g4

0xb44c,	// (0x000723c0) popup_clock_analogue_window_g5

0x0004,

0xf30d,	// (0x00076281) popup_clock_analogue_window_g

0xe9cf,	// (0x00075943) popup_clock_analogue_window_t1

0xe9dd,	// (0x00075951) clock_digital_number_pane_ParamLimits

0xe9dd,	// (0x00075951) clock_digital_number_pane

0xe9e9,	// (0x0007595d) clock_digital_number_pane_cp02_ParamLimits

0xe9e9,	// (0x0007595d) clock_digital_number_pane_cp02

0xe9f5,	// (0x00075969) clock_digital_number_pane_cp03_ParamLimits

0xe9f5,	// (0x00075969) clock_digital_number_pane_cp03

0xea01,	// (0x00075975) clock_digital_number_pane_cp04_ParamLimits

0xea01,	// (0x00075975) clock_digital_number_pane_cp04

0xea0d,	// (0x00075981) clock_digital_separator_pane_ParamLimits

0xea0d,	// (0x00075981) clock_digital_separator_pane

0xea19,	// (0x0007598d) popup_clock_digital_window_t1

0xb44c,	// (0x000723c0) clock_digital_number_pane_g1

0xb44c,	// (0x000723c0) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x000761ef) clock_digital_number_pane_g

0xb44c,	// (0x000723c0) clock_digital_separator_pane_g1

0xb44c,	// (0x000723c0) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x000761ef) clock_digital_separator_pane_g

0xb1d9,	// (0x0007214d) bg_popup_window_pane_cp04

0x121d,	// (0x00068191) heading_pane_cp03

0x1225,	// (0x00068199) listscroll_popup_gms_pane

0x122d,	// (0x000681a1) grid_large_graphic_popup_pane

0x1237,	// (0x000681ab) listscroll_popup_gms_pane_g1

0x123f,	// (0x000681b3) listscroll_popup_gms_pane_g2

0x0001,

0xf318,	// (0x0007628c) listscroll_popup_gms_pane_g

0xb9bb,	// (0x0007292f) scroll_pane_cp014

0x5011,	// (0x0006bf85) cell_large_graphic_popup_pane_ParamLimits

0x5011,	// (0x0006bf85) cell_large_graphic_popup_pane

0x5027,	// (0x0006bf9b) cell_large_graphic_popup_pane_g1_ParamLimits

0x5027,	// (0x0006bf9b) cell_large_graphic_popup_pane_g1

0x1247,	// (0x000681bb) cell_large_graphic_popup_pane_g2_ParamLimits

0x1247,	// (0x000681bb) cell_large_graphic_popup_pane_g2

0x1253,	// (0x000681c7) cell_large_graphic_popup_pane_g3_ParamLimits

0x1253,	// (0x000681c7) cell_large_graphic_popup_pane_g3

0x1260,	// (0x000681d4) cell_large_graphic_popup_pane_g4_ParamLimits

0x1260,	// (0x000681d4) cell_large_graphic_popup_pane_g4

0x0003,

0xf31d,	// (0x00076291) cell_large_graphic_popup_pane_g_ParamLimits

0xf31d,	// (0x00076291) cell_large_graphic_popup_pane_g

0x1270,	// (0x000681e4) grid_highlight_pane_cp010

0xb44c,	// (0x000723c0) bg_popup_call_pane_g1

0x127a,	// (0x000681ee) list_single_graphic_popup_conf_pane_ParamLimits

0x127a,	// (0x000681ee) list_single_graphic_popup_conf_pane

0x128d,	// (0x00068201) list_highlight_pane_cp01

0x1296,	// (0x0006820a) list_single_graphic_popup_conf_pane_g1

0x129e,	// (0x00068212) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf326,	// (0x0007629a) list_single_graphic_popup_conf_pane_g

0x12a6,	// (0x0006821a) list_single_graphic_popup_conf_pane_t1

0x12b4,	// (0x00068228) linegrid_cams_pane_g1

0x5033,	// (0x0006bfa7) linegrid_cams_pane_g2

0xb6ea,	// (0x0007265e) linegrid_cams_pane_g3

0x12bd,	// (0x00068231) linegrid_cams_pane_g4

0x503c,	// (0x0006bfb0) linegrid_cams_pane_g5

0x5045,	// (0x0006bfb9) linegrid_cams_pane_g6

0xb79a,	// (0x0007270e) linegrid_cams_pane_g7

0x0006,

0xf32b,	// (0x0007629f) linegrid_cams_pane_g

0x12c6,	// (0x0006823a) popup_clock_analogue_window

0x12c6,	// (0x0006823a) popup_clock_digital_window

0xb1d9,	// (0x0007214d) popup_phob_thumbnail_window

0xb44c,	// (0x000723c0) call_video_uplink_pane_g1

0x12cf,	// (0x00068243) call_video_uplink_pane_g2

0x0001,

0xf33a,	// (0x000762ae) call_video_uplink_pane_g

0xb767,	// (0x000726db) video_uplink_pane

0x12d7,	// (0x0006824b) mce_image_pane_g1

0x504e,	// (0x0006bfc2) mce_image_pane_g2

0x5056,	// (0x0006bfca) mce_image_pane_g3

0x505e,	// (0x0006bfd2) mce_image_pane_g4

0x5066,	// (0x0006bfda) mce_image_pane_g5

0x0004,

0xf33f,	// (0x000762b3) mce_image_pane_g

0x12e1,	// (0x00068255) control_top_pane_stacon_cp01_ParamLimits

0x12e1,	// (0x00068255) control_top_pane_stacon_cp01

0x12f1,	// (0x00068265) uni_indicator_pane_stacon_cp01_ParamLimits

0x12f1,	// (0x00068265) uni_indicator_pane_stacon_cp01

0x1302,	// (0x00068276) bg_popup_sub_pane_cp03

0x130c,	// (0x00068280) chi_dic_find_pane

0x506e,	// (0x0006bfe2) listscroll_chi_dic_pane

0x1314,	// (0x00068288) main_pane_chidic_g1

0x131c,	// (0x00068290) chi_dic_find_pane_t1

0x132a,	// (0x0006829e) find_chidic_pane

0x1333,	// (0x000682a7) chi_dic_list_pane_ParamLimits

0x1333,	// (0x000682a7) chi_dic_list_pane

0x1344,	// (0x000682b8) scroll_pane_cp020

0x134c,	// (0x000682c0) find_chidic_pane_t1

0xb1d9,	// (0x0007214d) input_focus_pane_cp06

0x5082,	// (0x0006bff6) list_chi_dic_pane_ParamLimits

0x5082,	// (0x0006bff6) list_chi_dic_pane

0x5094,	// (0x0006c008) list_chi_dic_pane_t1_ParamLimits

0x5094,	// (0x0006c008) list_chi_dic_pane_t1

0xb1d9,	// (0x0007214d) list_highlight_pane_cp020

0x135b,	// (0x000682cf) bg_cale_heading_pane_g1

0x50a7,	// (0x0006c01b) bg_cale_heading_pane_g2

0x50af,	// (0x0006c023) bg_cale_heading_pane_g3

0x50b7,	// (0x0006c02b) bg_cale_heading_pane_g4

0x50bf,	// (0x0006c033) bg_cale_heading_pane_g5

0x50c7,	// (0x0006c03b) bg_cale_heading_pane_g6

0x50cf,	// (0x0006c043) bg_cale_heading_pane_g7

0x50d7,	// (0x0006c04b) bg_cale_heading_pane_g8

0x50df,	// (0x0006c053) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x000762be) bg_cale_heading_pane_g

0x135b,	// (0x000682cf) bg_cale_side_pane_g1

0x50e7,	// (0x0006c05b) bg_cale_side_pane_g2

0x50ef,	// (0x0006c063) bg_cale_side_pane_g3

0x50f7,	// (0x0006c06b) bg_cale_side_pane_g4

0x50ff,	// (0x0006c073) bg_cale_side_pane_g5

0x5107,	// (0x0006c07b) bg_cale_side_pane_g6

0x510f,	// (0x0006c083) bg_cale_side_pane_g7

0x5117,	// (0x0006c08b) bg_cale_side_pane_g8

0x511f,	// (0x0006c093) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x000762d1) bg_cale_side_pane_g

0x5127,	// (0x0006c09b) popup_call_status_window_ParamLimits

0x5127,	// (0x0006c09b) popup_call_status_window

0x1363,	// (0x000682d7) stacon_top_pane

0x136b,	// (0x000682df) status_pane_ParamLimits

0x136b,	// (0x000682df) status_pane

0x1385,	// (0x000682f9) status_small_pane

0x138d,	// (0x00068301) control_pane

0xb1d9,	// (0x0007214d) stacon_bottom_pane

0x1395,	// (0x00068309) list_single_mce_smart_pane_t1_ParamLimits

0x1395,	// (0x00068309) list_single_mce_smart_pane_t1

0x13a8,	// (0x0006831c) list_single_mce_smart_pane_t2_ParamLimits

0x13a8,	// (0x0006831c) list_single_mce_smart_pane_t2

0x0001,

0xf370,	// (0x000762e4) list_single_mce_smart_pane_t_ParamLimits

0xf370,	// (0x000762e4) list_single_mce_smart_pane_t

0x516e,	// (0x0006c0e2) compass_pane

0x5177,	// (0x0006c0eb) main_location2_pane_t1

0x518d,	// (0x0006c101) main_location2_pane_t2

0x51a3,	// (0x0006c117) main_location2_pane_t3

0x0003,

0xf375,	// (0x000762e9) main_location2_pane_t

0x13d0,	// (0x00068344) compass_pane_g1_ParamLimits

0x13d0,	// (0x00068344) compass_pane_g1

0x51eb,	// (0x0006c15f) compass_pane_t1

0x51fa,	// (0x0006c16e) compass_pane_t2

0x0005,

0xf37e,	// (0x000762f2) compass_pane_t

0x5241,	// (0x0006c1b5) text_secondary_cp61

0x141e,	// (0x00068392) navi_pane_cams_g5

0x146a,	// (0x000683de) navi_pane_im_t1

0x1478,	// (0x000683ec) navi_pane_mp_g1_ParamLimits

0x1478,	// (0x000683ec) navi_pane_mp_g1

0x148c,	// (0x00068400) navi_pane_mp_g2_ParamLimits

0x148c,	// (0x00068400) navi_pane_mp_g2

0x1498,	// (0x0006840c) navi_pane_mp_g3_ParamLimits

0x1498,	// (0x0006840c) navi_pane_mp_g3

0x0002,

0xf392,	// (0x00076306) navi_pane_mp_g_ParamLimits

0xf392,	// (0x00076306) navi_pane_mp_g

0x14a4,	// (0x00068418) navi_pane_mp_t1

0x14b2,	// (0x00068426) navi_pane_mp_t2

0x0002,

0xf399,	// (0x0007630d) navi_pane_mp_t

0x151d,	// (0x00068491) navi_pane_vt_g1

0x14a4,	// (0x00068418) navi_pane_vt_t1

0x1525,	// (0x00068499) navi_slider_pane

0xb7ab,	// (0x0007271f) zooming_pane

0x152d,	// (0x000684a1) navi_slider_pane_g1

0xea36,	// (0x000759aa) navi_slider_pane_g2

0x0006,

0xf3a0,	// (0x00076314) navi_slider_pane_g

0x1551,	// (0x000684c5) aid_levels_zoom

0x1559,	// (0x000684cd) zooming_pane_g1

0x1561,	// (0x000684d5) zooming_pane_g2

0x1561,	// (0x000684d5) zooming_pane_g3

0x0002,

0xf3af,	// (0x00076323) zooming_pane_g

0x1569,	// (0x000684dd) level_10_zoom

0x1572,	// (0x000684e6) level_11_zoom

0x157b,	// (0x000684ef) level_1_zoom

0x1584,	// (0x000684f8) level_2_zoom

0x158d,	// (0x00068501) level_3_zoom

0x1596,	// (0x0006850a) level_4_zoom

0x159f,	// (0x00068513) level_5_zoom

0x15a8,	// (0x0006851c) level_6_zoom

0x15b1,	// (0x00068525) level_7_zoom

0x15ba,	// (0x0006852e) level_8_zoom

0x15c3,	// (0x00068537) level_9_zoom

0x15d4,	// (0x00068548) popup_phob_thumbnail_window_g1

0x15dc,	// (0x00068550) popup_phob_thumbnail_window_g2

0x0001,

0xf3b6,	// (0x0007632a) popup_phob_thumbnail_window_g

0xc295,	// (0x00073209) level_1_location

0xc29d,	// (0x00073211) level_2_location

0xc2a5,	// (0x00073219) level_3_location

0xc2ad,	// (0x00073221) level_4_location

0xb7ab,	// (0x0007271f) level_5_location

0x52d7,	// (0x0006c24b) mce_icon_pane_g1

0x52df,	// (0x0006c253) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x0007632f) mce_icon_pane_g

0x182e,	// (0x000687a2) main_mup_pane_g1_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g1

0x182e,	// (0x000687a2) main_mup_pane_g2_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g2

0x182e,	// (0x000687a2) main_mup_pane_g3_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g3

0x182e,	// (0x000687a2) main_mup_pane_g4_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g4

0x182e,	// (0x000687a2) main_mup_pane_g5_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g5

0x182e,	// (0x000687a2) main_mup_pane_g6_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g6

0x182e,	// (0x000687a2) main_mup_pane_g7_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g7

0x182e,	// (0x000687a2) main_mup_pane_g8_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g8

0x182e,	// (0x000687a2) main_mup_pane_g9_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g9

0x182e,	// (0x000687a2) main_mup_pane_g10_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g10

0x182e,	// (0x000687a2) main_mup_pane_g11_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g11

0xb4ae,	// (0x00072422) main_mup_pane_g12_ParamLimits

0xb4ae,	// (0x00072422) main_mup_pane_g12

0x182e,	// (0x000687a2) main_mup_pane_g13_ParamLimits

0x182e,	// (0x000687a2) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x00076334) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x00076334) main_mup_pane_g

0x183c,	// (0x000687b0) main_mup_pane_t1_ParamLimits

0x183c,	// (0x000687b0) main_mup_pane_t1

0x183c,	// (0x000687b0) main_mup_pane_t2_ParamLimits

0x183c,	// (0x000687b0) main_mup_pane_t2

0x183c,	// (0x000687b0) main_mup_pane_t3_ParamLimits

0x183c,	// (0x000687b0) main_mup_pane_t3

0x15e4,	// (0x00068558) main_mup_pane_t4_ParamLimits

0x15e4,	// (0x00068558) main_mup_pane_t4

0x15e4,	// (0x00068558) main_mup_pane_t5_ParamLimits

0x15e4,	// (0x00068558) main_mup_pane_t5

0xbbcf,	// (0x00072b43) main_mup_pane_t6_ParamLimits

0xbbcf,	// (0x00072b43) main_mup_pane_t6

0x0005,

0xf3db,	// (0x0007634f) main_mup_pane_t_ParamLimits

0xf3db,	// (0x0007634f) main_mup_pane_t

0xbbe3,	// (0x00072b57) mup_progress_pane_ParamLimits

0xbbe3,	// (0x00072b57) mup_progress_pane

0x1820,	// (0x00068794) mup_visualizer_pane_ParamLimits

0x1820,	// (0x00068794) mup_visualizer_pane

0x1820,	// (0x00068794) mup_volume_pane_ParamLimits

0x1820,	// (0x00068794) mup_volume_pane

0xb4bc,	// (0x00072430) mup_visualizer_pane_g1_ParamLimits

0xb4bc,	// (0x00072430) mup_visualizer_pane_g1

0x1606,	// (0x0006857a) mup_visualizer_pane_g2_ParamLimits

0x1606,	// (0x0006857a) mup_visualizer_pane_g2

0xb4ae,	// (0x00072422) mup_visualizer_pane_g3_ParamLimits

0xb4ae,	// (0x00072422) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x0007635c) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x0007635c) mup_visualizer_pane_g

0xb80f,	// (0x00072783) mup_volume_pane_g1

0xb80f,	// (0x00072783) mup_volume_pane_g2

0x0001,

0xf3ef,	// (0x00076363) mup_volume_pane_g

0xb80f,	// (0x00072783) mup_progress_pane_g1

0xb80f,	// (0x00072783) mup_progress_pane_g2

0xb80f,	// (0x00072783) mup_progress_pane_g3

0x0002,

0xf3f4,	// (0x00076368) mup_progress_pane_g

0xb1d9,	// (0x0007214d) bg_popup_window_pane_cp05

0x1614,	// (0x00068588) heading_pane_cp02_ParamLimits

0x1614,	// (0x00068588) heading_pane_cp02

0x162e,	// (0x000685a2) list_popup_blid_pane

0x1636,	// (0x000685aa) list_blid_sat_info_pane_ParamLimits

0x1636,	// (0x000685aa) list_blid_sat_info_pane

0x1649,	// (0x000685bd) list_blid_sat_info_pane_g1

0x1651,	// (0x000685c5) list_blid_sat_info_pane_t1

0x53b9,	// (0x0006c32d) mup_equalizer_pane_ParamLimits

0x53b9,	// (0x0006c32d) mup_equalizer_pane

0x53d2,	// (0x0006c346) mup_equalizer_pane_cp1_ParamLimits

0x53d2,	// (0x0006c346) mup_equalizer_pane_cp1

0x53eb,	// (0x0006c35f) mup_equalizer_pane_cp2_ParamLimits

0x53eb,	// (0x0006c35f) mup_equalizer_pane_cp2

0x5404,	// (0x0006c378) mup_equalizer_pane_cp3_ParamLimits

0x5404,	// (0x0006c378) mup_equalizer_pane_cp3

0x541d,	// (0x0006c391) mup_equalizer_pane_cp4_ParamLimits

0x541d,	// (0x0006c391) mup_equalizer_pane_cp4

0x5436,	// (0x0006c3aa) mup_equalizer_pane_cp5

0x5448,	// (0x0006c3bc) mup_equalizer_pane_cp6

0x545a,	// (0x0006c3ce) mup_equalizer_pane_cp7

0xc173,	// (0x000730e7) bg_popup_call_poc_act_pane_g9

0xc17b,	// (0x000730ef) bg_popup_call_poc_act_pane_g10

0xc183,	// (0x000730f7) bg_popup_call_poc_act_pane_g11

0x000a,

0xb434,	// (0x000723a8) mup_scale_pane

0xb44c,	// (0x000723c0) mup_scale_pane_g1

0x165f,	// (0x000685d3) mup_scale_pane_g2

0x0006,

0xf410,	// (0x00076384) mup_scale_pane_g

0x1683,	// (0x000685f7) msg_data_pane

0x168b,	// (0x000685ff) scroll_pane_cp017

0x2924,	// (0x00069898) bg_list_pane_cp04_ParamLimits

0x2924,	// (0x00069898) bg_list_pane_cp04

0x1693,	// (0x00068607) msg_data_pane_g1

0x504e,	// (0x0006bfc2) msg_data_pane_g2

0x5056,	// (0x0006bfca) msg_data_pane_g3

0x5480,	// (0x0006c3f4) msg_data_pane_g4

0x5066,	// (0x0006bfda) msg_data_pane_g5

0x52d7,	// (0x0006c24b) msg_data_pane_g6

0x5488,	// (0x0006c3fc) msg_data_pane_g7

0x0006,

0xf41f,	// (0x00076393) msg_data_pane_g

0x293c,	// (0x000698b0) msg_text_pane_ParamLimits

0x293c,	// (0x000698b0) msg_text_pane

0x5490,	// (0x0006c404) qrid_highlight_pane_cp011_ParamLimits

0x5490,	// (0x0006c404) qrid_highlight_pane_cp011

0xb1d9,	// (0x0007214d) msg_body_pane

0xb1d9,	// (0x0007214d) msg_header_pane

0x16a4,	// (0x00068618) input_focus_pane_cp07

0xbbf9,	// (0x00072b6d) msg_header_pane_t1_ParamLimits

0xbbf9,	// (0x00072b6d) msg_header_pane_t1

0x296d,	// (0x000698e1) msg_header_pane_t2_ParamLimits

0x296d,	// (0x000698e1) msg_header_pane_t2

0x0001,

0xf433,	// (0x000763a7) msg_header_pane_t_ParamLimits

0xf433,	// (0x000763a7) msg_header_pane_t

0x16b9,	// (0x0006862d) msg_body_pane_g1

0x2984,	// (0x000698f8) msg_body_pane_t1_ParamLimits

0x2984,	// (0x000698f8) msg_body_pane_t1

0x29af,	// (0x00069923) msg_body_pane_t2_ParamLimits

0x29af,	// (0x00069923) msg_body_pane_t2

0x29c1,	// (0x00069935) msg_body_pane_t3_ParamLimits

0x29c1,	// (0x00069935) msg_body_pane_t3

0x0002,

0xf438,	// (0x000763ac) msg_body_pane_t_ParamLimits

0xf438,	// (0x000763ac) msg_body_pane_t

0x54dc,	// (0x0006c450) main_viewer_pane_g1_ParamLimits

0x54dc,	// (0x0006c450) main_viewer_pane_g1

0x54e8,	// (0x0006c45c) main_viewer_pane_g2_ParamLimits

0x54e8,	// (0x0006c45c) main_viewer_pane_g2

0x54f4,	// (0x0006c468) main_viewer_pane_g3_ParamLimits

0x54f4,	// (0x0006c468) main_viewer_pane_g3

0x5503,	// (0x0006c477) main_viewer_pane_g4_ParamLimits

0x5503,	// (0x0006c477) main_viewer_pane_g4

0xea60,	// (0x000759d4) main_viewer_pane_g5_ParamLimits

0xea60,	// (0x000759d4) main_viewer_pane_g5

0xea60,	// (0x000759d4) main_viewer_pane_g7_ParamLimits

0xea60,	// (0x000759d4) main_viewer_pane_g7

0xea72,	// (0x000759e6) main_viewer_pane_g8_ParamLimits

0xea72,	// (0x000759e6) main_viewer_pane_g8

0x0007,

0xf448,	// (0x000763bc) main_viewer_pane_g_ParamLimits

0xf448,	// (0x000763bc) main_viewer_pane_g

0x16c1,	// (0x00068635) viewer_content_pane_ParamLimits

0x16c1,	// (0x00068635) viewer_content_pane

0x5537,	// (0x0006c4ab) main_postcard_pane_g1_ParamLimits

0x5537,	// (0x0006c4ab) main_postcard_pane_g1

0x554b,	// (0x0006c4bf) main_postcard_pane_g2_ParamLimits

0x554b,	// (0x0006c4bf) main_postcard_pane_g2

0x555f,	// (0x0006c4d3) main_postcard_pane_g3_ParamLimits

0x555f,	// (0x0006c4d3) main_postcard_pane_g3

0x0005,

0xf459,	// (0x000763cd) main_postcard_pane_g_ParamLimits

0xf459,	// (0x000763cd) main_postcard_pane_g

0x5572,	// (0x0006c4e6) main_postcard_pane_g4

0xc376,	// (0x000732ea) smil_status_volume_pane_g2

0x55ad,	// (0x0006c521) postcard_pane_ParamLimits

0x55ad,	// (0x0006c521) postcard_pane

0x16dd,	// (0x00068651) postcard_pane_g1_ParamLimits

0x16dd,	// (0x00068651) postcard_pane_g1

0x55ed,	// (0x0006c561) postcard_pane_g2_ParamLimits

0x55ed,	// (0x0006c561) postcard_pane_g2

0x55f9,	// (0x0006c56d) postcard_pane_g3_ParamLimits

0x55f9,	// (0x0006c56d) postcard_pane_g3

0x16cf,	// (0x00068643) postcard_pane_g4_ParamLimits

0x16cf,	// (0x00068643) postcard_pane_g4

0x5605,	// (0x0006c579) postcard_pane_g5_ParamLimits

0x5605,	// (0x0006c579) postcard_pane_g5

0x561a,	// (0x0006c58e) postcard_pane_g6_ParamLimits

0x561a,	// (0x0006c58e) postcard_pane_g6

0x16dd,	// (0x00068651) postcard_pane_g7_ParamLimits

0x16dd,	// (0x00068651) postcard_pane_g7

0x0006,

0xf466,	// (0x000763da) postcard_pane_g_ParamLimits

0xf466,	// (0x000763da) postcard_pane_g

0x562e,	// (0x0006c5a2) main_mp2_pane_g1_ParamLimits

0x562e,	// (0x0006c5a2) main_mp2_pane_g1

0x563a,	// (0x0006c5ae) main_mp2_pane_g2_ParamLimits

0x563a,	// (0x0006c5ae) main_mp2_pane_g2

0x5646,	// (0x0006c5ba) main_mp2_pane_g3_ParamLimits

0x5646,	// (0x0006c5ba) main_mp2_pane_g3

0x0002,

0xf475,	// (0x000763e9) main_mp2_pane_g_ParamLimits

0xf475,	// (0x000763e9) main_mp2_pane_g

0x5652,	// (0x0006c5c6) main_mp2_pane_t1_ParamLimits

0x5652,	// (0x0006c5c6) main_mp2_pane_t1

0x5667,	// (0x0006c5db) main_mp2_pane_t2_ParamLimits

0x5667,	// (0x0006c5db) main_mp2_pane_t2

0x5679,	// (0x0006c5ed) main_mp2_pane_t3_ParamLimits

0x5679,	// (0x0006c5ed) main_mp2_pane_t3

0x0002,

0xf47c,	// (0x000763f0) main_mp2_pane_t_ParamLimits

0xf47c,	// (0x000763f0) main_mp2_pane_t

0x16eb,	// (0x0006865f) pec_content_pane_ParamLimits

0x16eb,	// (0x0006865f) pec_content_pane

0xb9bb,	// (0x0007292f) scroll_pane_cp015

0x16fd,	// (0x00068671) pec_attribute_pane_ParamLimits

0x16fd,	// (0x00068671) pec_attribute_pane

0x568b,	// (0x0006c5ff) pec_content_pane_g1_ParamLimits

0x568b,	// (0x0006c5ff) pec_content_pane_g1

0x170d,	// (0x00068681) pec_content_pane_t1_ParamLimits

0x170d,	// (0x00068681) pec_content_pane_t1

0x171f,	// (0x00068693) pec_content_pane_t2_ParamLimits

0x171f,	// (0x00068693) pec_content_pane_t2

0x0001,

0xf483,	// (0x000763f7) pec_content_pane_t_ParamLimits

0xf483,	// (0x000763f7) pec_content_pane_t

0x5697,	// (0x0006c60b) list_single_graphic_pane_cp01_ParamLimits

0x5697,	// (0x0006c60b) list_single_graphic_pane_cp01

0xb434,	// (0x000723a8) bg_popup_sub_pane_cp04

0x1731,	// (0x000686a5) popup_mup_playback_window_g1

0x173d,	// (0x000686b1) popup_mup_playback_window_t1

0x1752,	// (0x000686c6) popup_mup_playback_window_t2

0x0001,

0xf488,	// (0x000763fc) popup_mup_playback_window_t

0x1789,	// (0x000686fd) main_image_pane_g1_ParamLimits

0x1789,	// (0x000686fd) main_image_pane_g1

0x17cc,	// (0x00068740) scroll_pane_cp018_ParamLimits

0x17cc,	// (0x00068740) scroll_pane_cp018

0x17e4,	// (0x00068758) scroll_pane_cp016_ParamLimits

0x17e4,	// (0x00068758) scroll_pane_cp016

0x5762,	// (0x0006c6d6) smil2_image_pane_ParamLimits

0x5762,	// (0x0006c6d6) smil2_image_pane

0x578a,	// (0x0006c6fe) smil2_root_pane_ParamLimits

0x578a,	// (0x0006c6fe) smil2_root_pane

0x57c2,	// (0x0006c736) smil2_text_pane_ParamLimits

0x57c2,	// (0x0006c736) smil2_text_pane

0xb1d9,	// (0x0007214d) bg_list_pane_cp06

0x1818,	// (0x0006878c) grid_radio_pane

0xb1d9,	// (0x0007214d) bg_popup_window_pane_cp06

0x582e,	// (0x0006c7a2) main_fmradio_pane_t1

0x121d,	// (0x00068191) heading_pane_cp04

0x583c,	// (0x0006c7b0) main_fmradio_pane_t2

0xc1cb,	// (0x0007313f) popup_cale_lunar_info_window_g1

0x584a,	// (0x0006c7be) main_fmradio_pane_t3

0xc1d3,	// (0x00073147) popup_cale_lunar_info_window_g2

0x5858,	// (0x0006c7cc) main_fmradio_pane_t4

0x0001,

0x5866,	// (0x0006c7da) main_fmradio_pane_t5

0x0004,

0xf57b,	// (0x000764ef) popup_cale_lunar_info_window_g

0xf49d,	// (0x00076411) main_fmradio_pane_t

0x5874,	// (0x0006c7e8) wait_bar_pane_cp03

0x587c,	// (0x0006c7f0) cell_fmradio_pane_ParamLimits

0x587c,	// (0x0006c7f0) cell_fmradio_pane

0x16dd,	// (0x00068651) cell_fmradio_pane_g1_ParamLimits

0x16dd,	// (0x00068651) cell_fmradio_pane_g1

0xb1d9,	// (0x0007214d) grid_highlight_pane_cp011

0x588f,	// (0x0006c803) poc_content_pane_ParamLimits

0x588f,	// (0x0006c803) poc_content_pane

0x58a2,	// (0x0006c816) scroll_pane_cp019

0x58aa,	// (0x0006c81e) popup_call_poc_act_window_ParamLimits

0x58aa,	// (0x0006c81e) popup_call_poc_act_window

0x58ca,	// (0x0006c83e) popup_call_poc_inact_window_ParamLimits

0x58ca,	// (0x0006c83e) popup_call_poc_inact_window

0xf53f,	// (0x000764b3) bg_popup_call_poc_act_pane_g

0xc18b,	// (0x000730ff) bg_popup_call_poc_inact_pane_g1

0xc193,	// (0x00073107) bg_popup_call_poc_inact_pane_g2

0x58df,	// (0x0006c853) popup_call_poc_act_window_g2

0xc19b,	// (0x0007310f) bg_popup_call_poc_inact_pane_g3

0xc14b,	// (0x000730bf) bg_popup_call_poc_inact_pane_g4

0xc1a3,	// (0x00073117) bg_popup_call_poc_inact_pane_g5

0x58e7,	// (0x0006c85b) popup_call_poc_act_window_t1_ParamLimits

0x58e7,	// (0x0006c85b) popup_call_poc_act_window_t1

0x590f,	// (0x0006c883) popup_call_poc_act_window_t2_ParamLimits

0x590f,	// (0x0006c883) popup_call_poc_act_window_t2

0x5937,	// (0x0006c8ab) popup_call_poc_act_window_t3_ParamLimits

0x5937,	// (0x0006c8ab) popup_call_poc_act_window_t3

0x595f,	// (0x0006c8d3) popup_call_poc_act_window_t4_ParamLimits

0x595f,	// (0x0006c8d3) popup_call_poc_act_window_t4

0x0003,

0xf4a8,	// (0x0007641c) popup_call_poc_act_window_t_ParamLimits

0xf4a8,	// (0x0007641c) popup_call_poc_act_window_t

0xc1ab,	// (0x0007311f) bg_popup_call_poc_inact_pane_g6

0xc1b3,	// (0x00073127) bg_popup_call_poc_inact_pane_g7

0xc1bb,	// (0x0007312f) bg_popup_call_poc_inact_pane_g8

0x5971,	// (0x0006c8e5) popup_call_poc_inact_window_g2

0xc1c3,	// (0x00073137) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x000764ca) bg_popup_call_poc_inact_pane_g

0x5979,	// (0x0006c8ed) popup_call_poc_inact_window_t1_ParamLimits

0x5979,	// (0x0006c8ed) popup_call_poc_inact_window_t1

0x598e,	// (0x0006c902) popup_call_poc_inact_window_t2_ParamLimits

0x598e,	// (0x0006c902) popup_call_poc_inact_window_t2

0x59a3,	// (0x0006c917) popup_call_poc_inact_window_t3_ParamLimits

0x59a3,	// (0x0006c917) popup_call_poc_inact_window_t3

0x0002,

0xf4b1,	// (0x00076425) popup_call_poc_inact_window_t_ParamLimits

0xf4b1,	// (0x00076425) popup_call_poc_inact_window_t

0xc304,	// (0x00073278) context_pane_ParamLimits

0x6a1c,	// (0x0006d990) signal_pane_ParamLimits

0xb7ab,	// (0x0007271f) main_call2_pane

0xeab3,	// (0x00075a27) popup_phob_thumbnail2_window_ParamLimits

0xeab3,	// (0x00075a27) popup_phob_thumbnail2_window

0xea48,	// (0x000759bc) aid_hotspot_pointer_arrow_pane

0xea50,	// (0x000759c4) aid_hotspot_pointer_hand_pane

0x65d5,	// (0x0006d549) phob_pre_status_pane_g5

0x15f8,	// (0x0006856c) cams_zoom_pane_ParamLimits

0x3eac,	// (0x0006ae20) image_vga_pane_ParamLimits

0xb4ae,	// (0x00072422) main_camera_pane_g1_ParamLimits

0xb4ae,	// (0x00072422) main_camera_pane_g2_ParamLimits

0xb4ae,	// (0x00072422) main_camera_pane_g3_ParamLimits

0xb4ae,	// (0x00072422) main_camera_pane_g4_ParamLimits

0xb4ae,	// (0x00072422) main_camera_pane_g5_ParamLimits

0xb4ae,	// (0x00072422) main_camera_pane_g6_ParamLimits

0xb4ae,	// (0x00072422) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00076139) main_camera_pane_g_ParamLimits

0x15e4,	// (0x00068558) main_camera_pane_t1_ParamLimits

0x15e4,	// (0x00068558) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0007614a) main_camera_pane_t_ParamLimits

0xb434,	// (0x000723a8) bg_popup_preview_window_pane_cp01_ParamLimits

0xb434,	// (0x000723a8) bg_popup_preview_window_pane_cp01

0x59b8,	// (0x0006c92c) popup_phob_thumbnail2_window_g1_ParamLimits

0x59b8,	// (0x0006c92c) popup_phob_thumbnail2_window_g1

0xb1d9,	// (0x0007214d) call2_cli_visual_pane

0x59db,	// (0x0006c94f) popup_call2_audio_conf_window_ParamLimits

0x59db,	// (0x0006c94f) popup_call2_audio_conf_window

0x59f9,	// (0x0006c96d) popup_call2_audio_first_window_ParamLimits

0x59f9,	// (0x0006c96d) popup_call2_audio_first_window

0x5a6f,	// (0x0006c9e3) popup_call2_audio_in_window_ParamLimits

0x5a6f,	// (0x0006c9e3) popup_call2_audio_in_window

0x5aa3,	// (0x0006ca17) popup_call2_audio_out_window_ParamLimits

0x5aa3,	// (0x0006ca17) popup_call2_audio_out_window

0x5af5,	// (0x0006ca69) popup_call2_audio_second_window_ParamLimits

0x5af5,	// (0x0006ca69) popup_call2_audio_second_window

0x5b47,	// (0x0006cabb) popup_call2_audio_wait_window_ParamLimits

0x5b47,	// (0x0006cabb) popup_call2_audio_wait_window

0xb1d9,	// (0x0007214d) bg_popup_call2_act_pane_cp03

0x5b7f,	// (0x0006caf3) list_conf_pane_cp

0x5b87,	// (0x0006cafb) popup_call2_audio_conf_window_t1

0x127a,	// (0x000681ee) list_single_graphic_popup_conf2_pane_ParamLimits

0x127a,	// (0x000681ee) list_single_graphic_popup_conf2_pane

0x128d,	// (0x00068201) list_highlight_pane_cp04

0x5b95,	// (0x0006cb09) list_single_graphic_popup_conf2_pane_g1

0x129e,	// (0x00068212) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x0007642c) list_single_graphic_popup_conf2_pane_g

0x5b9d,	// (0x0006cb11) list_single_graphic_popup_conf2_pane_t1

0x5bab,	// (0x0006cb1f) bg_popup_call2_act_pane_cp01_ParamLimits

0x5bab,	// (0x0006cb1f) bg_popup_call2_act_pane_cp01

0x5c35,	// (0x0006cba9) call_type_pane_cp05_ParamLimits

0x5c35,	// (0x0006cba9) call_type_pane_cp05

0x5c89,	// (0x0006cbfd) popup_call2_audio_second_window_g1_ParamLimits

0x5c89,	// (0x0006cbfd) popup_call2_audio_second_window_g1

0x5cdd,	// (0x0006cc51) popup_call2_audio_second_window_g2_ParamLimits

0x5cdd,	// (0x0006cc51) popup_call2_audio_second_window_g2

0x0002,

0xf4bd,	// (0x00076431) popup_call2_audio_second_window_g_ParamLimits

0xf4bd,	// (0x00076431) popup_call2_audio_second_window_g

0x5d42,	// (0x0006ccb6) popup_call2_audio_second_window_t1_ParamLimits

0x5d42,	// (0x0006ccb6) popup_call2_audio_second_window_t1

0x5dfd,	// (0x0006cd71) popup_call2_audio_second_window_t2_ParamLimits

0x5dfd,	// (0x0006cd71) popup_call2_audio_second_window_t2

0x5e50,	// (0x0006cdc4) popup_call2_audio_second_window_t3_ParamLimits

0x5e50,	// (0x0006cdc4) popup_call2_audio_second_window_t3

0x0003,

0xf4c4,	// (0x00076438) popup_call2_audio_second_window_t_ParamLimits

0xf4c4,	// (0x00076438) popup_call2_audio_second_window_t

0xb1d9,	// (0x0007214d) bg_popup_call2_in_pane_cp02

0x5f43,	// (0x0006ceb7) call_type_pane_cp04

0x5f4b,	// (0x0006cebf) popup_call2_audio_wait_window_g1

0x5f53,	// (0x0006cec7) popup_call2_audio_wait_window_g2

0x0001,

0xf4cd,	// (0x00076441) popup_call2_audio_wait_window_g

0x5f5b,	// (0x0006cecf) popup_call2_audio_wait_window_t3

0x5f69,	// (0x0006cedd) bg_popup_call2_act_pane_ParamLimits

0x5f69,	// (0x0006cedd) bg_popup_call2_act_pane

0x6029,	// (0x0006cf9d) call_type_pane_cp03_ParamLimits

0x6029,	// (0x0006cf9d) call_type_pane_cp03

0x608d,	// (0x0006d001) popup_call2_audio_first_window_g1_ParamLimits

0x608d,	// (0x0006d001) popup_call2_audio_first_window_g1

0x60fd,	// (0x0006d071) popup_call2_audio_first_window_g2_ParamLimits

0x60fd,	// (0x0006d071) popup_call2_audio_first_window_g2

0x6161,	// (0x0006d0d5) popup_call2_audio_first_window_g3_ParamLimits

0x6161,	// (0x0006d0d5) popup_call2_audio_first_window_g3

0x0004,

0xf4d2,	// (0x00076446) popup_call2_audio_first_window_g_ParamLimits

0xf4d2,	// (0x00076446) popup_call2_audio_first_window_g

0x61e9,	// (0x0006d15d) popup_call2_audio_first_window_t1_ParamLimits

0x61e9,	// (0x0006d15d) popup_call2_audio_first_window_t1

0x62ec,	// (0x0006d260) popup_call2_audio_first_window_t4_ParamLimits

0x62ec,	// (0x0006d260) popup_call2_audio_first_window_t4

0x63cf,	// (0x0006d343) popup_call2_audio_first_window_t5_ParamLimits

0x63cf,	// (0x0006d343) popup_call2_audio_first_window_t5

0x0003,

0xf4dd,	// (0x00076451) popup_call2_audio_first_window_t_ParamLimits

0xf4dd,	// (0x00076451) popup_call2_audio_first_window_t

0xb42c,	// (0x000723a0) bg_popup_call2_act_pane_g1

0xc1db,	// (0x0007314f) popup_cale_lunar_info_window_t1

0xc1e9,	// (0x0007315d) popup_cale_lunar_info_window_t2

0xc1f7,	// (0x0007316b) popup_cale_lunar_info_window_t3

0xb1d9,	// (0x0007214d) bg_popup_call2_bubble_pane

0xbc17,	// (0x00072b8b) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc17,	// (0x00072b8b) bg_popup_call2_in_pane_cp01

0x5f43,	// (0x0006ceb7) call_type_pane_cp02

0xbc5f,	// (0x00072bd3) popup_call2_audio_out_window_g1_ParamLimits

0xbc5f,	// (0x00072bd3) popup_call2_audio_out_window_g1

0xbc8b,	// (0x00072bff) popup_call2_audio_out_window_g2_ParamLimits

0xbc8b,	// (0x00072bff) popup_call2_audio_out_window_g2

0xbcb3,	// (0x00072c27) popup_call2_audio_out_window_g3_ParamLimits

0xbcb3,	// (0x00072c27) popup_call2_audio_out_window_g3

0x0003,

0xf4e6,	// (0x0007645a) popup_call2_audio_out_window_g_ParamLimits

0xf4e6,	// (0x0007645a) popup_call2_audio_out_window_g

0xbcee,	// (0x00072c62) popup_call2_audio_out_window_t1_ParamLimits

0xbcee,	// (0x00072c62) popup_call2_audio_out_window_t1

0xbd4d,	// (0x00072cc1) popup_call2_audio_out_window_t2_ParamLimits

0xbd4d,	// (0x00072cc1) popup_call2_audio_out_window_t2

0xbda1,	// (0x00072d15) popup_call2_audio_out_window_t3_ParamLimits

0xbda1,	// (0x00072d15) popup_call2_audio_out_window_t3

0xbdb7,	// (0x00072d2b) popup_call2_audio_out_window_t4_ParamLimits

0xbdb7,	// (0x00072d2b) popup_call2_audio_out_window_t4

0xbdcd,	// (0x00072d41) popup_call2_audio_out_window_t5_ParamLimits

0xbdcd,	// (0x00072d41) popup_call2_audio_out_window_t5

0x0005,

0xf4ef,	// (0x00076463) popup_call2_audio_out_window_t_ParamLimits

0xf4ef,	// (0x00076463) popup_call2_audio_out_window_t

0xbe31,	// (0x00072da5) bg_popup_call2_in_pane_ParamLimits

0xbe31,	// (0x00072da5) bg_popup_call2_in_pane

0xbe8d,	// (0x00072e01) popup_call2_audio_in_window_g1_ParamLimits

0xbe8d,	// (0x00072e01) popup_call2_audio_in_window_g1

0xbec5,	// (0x00072e39) popup_call2_audio_in_window_g2_ParamLimits

0xbec5,	// (0x00072e39) popup_call2_audio_in_window_g2

0xbefd,	// (0x00072e71) popup_call2_audio_in_window_g3_ParamLimits

0xbefd,	// (0x00072e71) popup_call2_audio_in_window_g3

0x0003,

0xf4fc,	// (0x00076470) popup_call2_audio_in_window_g_ParamLimits

0xf4fc,	// (0x00076470) popup_call2_audio_in_window_g

0xbf55,	// (0x00072ec9) popup_call2_audio_in_window_t1_ParamLimits

0xbf55,	// (0x00072ec9) popup_call2_audio_in_window_t1

0xbfd5,	// (0x00072f49) popup_call2_audio_in_window_t2_ParamLimits

0xbfd5,	// (0x00072f49) popup_call2_audio_in_window_t2

0xc055,	// (0x00072fc9) popup_call2_audio_in_window_t3_ParamLimits

0xc055,	// (0x00072fc9) popup_call2_audio_in_window_t3

0xc06f,	// (0x00072fe3) popup_call2_audio_in_window_t4_ParamLimits

0xc06f,	// (0x00072fe3) popup_call2_audio_in_window_t4

0xc081,	// (0x00072ff5) popup_call2_audio_in_window_t5_ParamLimits

0xc081,	// (0x00072ff5) popup_call2_audio_in_window_t5

0xc096,	// (0x0007300a) popup_call2_audio_in_window_t6_ParamLimits

0xc096,	// (0x0007300a) popup_call2_audio_in_window_t6

0x0005,

0xf505,	// (0x00076479) popup_call2_audio_in_window_t_ParamLimits

0xf505,	// (0x00076479) popup_call2_audio_in_window_t

0xb42c,	// (0x000723a0) bg_popup_call2_in_pane_g1

0xc205,	// (0x00073179) popup_cale_lunar_info_window_t4

0x0003,

0xf580,	// (0x000764f4) popup_cale_lunar_info_window_t

0xb434,	// (0x000723a8) bg_popup_call2_rect_pane_ParamLimits

0xb434,	// (0x000723a8) bg_popup_call2_rect_pane

0xb1d9,	// (0x0007214d) call2_cli_visual_graphic_pane

0xb1d9,	// (0x0007214d) call2_cli_visual_text_pane

0xeada,	// (0x00075a4e) smil_status_volume_pane_g3

0x0002,

0xb44c,	// (0x000723c0) call2_cli_visual_graphic_pane_g1

0xb44c,	// (0x000723c0) call2_cli_visual_graphic_pane_g2

0xb44c,	// (0x000723c0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf512,	// (0x00076486) call2_cli_visual_graphic_pane_g

0xc0ab,	// (0x0007301f) bg_popup_call2_rect_pane_g1

0xb687,	// (0x000725fb) bg_popup_call2_rect_pane_g2

0xc0b3,	// (0x00073027) bg_popup_call2_rect_pane_g3

0xc0bb,	// (0x0007302f) bg_popup_call2_rect_pane_g4

0xc0c3,	// (0x00073037) bg_popup_call2_rect_pane_g5

0xc0cb,	// (0x0007303f) bg_popup_call2_rect_pane_g6

0xc0d3,	// (0x00073047) bg_popup_call2_rect_pane_g7

0xc0db,	// (0x0007304f) bg_popup_call2_rect_pane_g8

0xc0e3,	// (0x00073057) bg_popup_call2_rect_pane_g9

0x0008,

0xf519,	// (0x0007648d) bg_popup_call2_rect_pane_g

0xc0eb,	// (0x0007305f) bg_popup_call2_bubble_pane_g1

0xc0f3,	// (0x00073067) bg_popup_call2_bubble_pane_g2

0xc0fb,	// (0x0007306f) bg_popup_call2_bubble_pane_g3

0xc103,	// (0x00073077) bg_popup_call2_bubble_pane_g4

0xc10b,	// (0x0007307f) bg_popup_call2_bubble_pane_g5

0xc113,	// (0x00073087) bg_popup_call2_bubble_pane_g6

0xc11b,	// (0x0007308f) bg_popup_call2_bubble_pane_g7

0xc123,	// (0x00073097) bg_popup_call2_bubble_pane_g8

0xc12b,	// (0x0007309f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52c,	// (0x000764a0) bg_popup_call2_bubble_pane_g

0x3871,	// (0x0006a7e5) aid_cale_week_size_cell_pane

0x3ebf,	// (0x0006ae33) aid_cams_cif_uncrop_pane_ParamLimits

0x3ebf,	// (0x0006ae33) aid_cams_cif_uncrop_pane

0x4060,	// (0x0006afd4) aid_cams_size_cell_ParamLimits

0x4060,	// (0x0006afd4) aid_cams_size_cell

0x4074,	// (0x0006afe8) grid_cams_pane_ParamLimits

0x4089,	// (0x0006affd) linegrid_cams_pane_ParamLimits

0x4153,	// (0x0006b0c7) call_video_pane_t1

0x416d,	// (0x0006b0e1) call_video_pane_t2

0x0001,

0xf222,	// (0x00076196) call_video_pane_t

0x44f2,	// (0x0006b466) aid_cale_month_size_cell_pane_ParamLimits

0x44f2,	// (0x0006b466) aid_cale_month_size_cell_pane

0xf5c4,	// (0x00076538) smil_status_volume_pane_g

0xeae7,	// (0x00075a5b) volume_smil_pane_ParamLimits

0xad7f,	// (0x00071cf3) aid_popup2_width_pane

0x37cd,	// (0x0006a741) cell_qdial_pane_g4_ParamLimits

0x37cd,	// (0x0006a741) cell_qdial_pane_g4

0x51cb,	// (0x0006c13f) aid_blid_cardinal_pane_ParamLimits

0x51d7,	// (0x0006c14b) aid_blid_destination_pane_ParamLimits

0x51d7,	// (0x0006c14b) aid_blid_destination_pane

0xb434,	// (0x000723a8) bg_popup_call_poc_act_pane_ParamLimits

0xb434,	// (0x000723a8) bg_popup_call_poc_act_pane

0xb434,	// (0x000723a8) bg_popup_call_poc_inact_pane_ParamLimits

0xb434,	// (0x000723a8) bg_popup_call_poc_inact_pane

0xc133,	// (0x000730a7) bg_popup_call_poc_act_pane_g1

0xc13b,	// (0x000730af) bg_popup_call_poc_act_pane_g2

0xc143,	// (0x000730b7) bg_popup_call_poc_act_pane_g3

0xc14b,	// (0x000730bf) bg_popup_call_poc_act_pane_g4

0xc153,	// (0x000730c7) bg_popup_call_poc_act_pane_g5

0xc15b,	// (0x000730cf) bg_popup_call_poc_act_pane_g6

0xc163,	// (0x000730d7) bg_popup_call_poc_act_pane_g7

0xc16b,	// (0x000730df) bg_popup_call_poc_act_pane_g8

0xb1d9,	// (0x0007214d) main_usb_pane

0xea92,	// (0x00075a06) popup_cale_lunar_info_window

0x43b2,	// (0x0006b326) im_reading_pane_t1_ParamLimits

0xb904,	// (0x00072878) list_im_pane_ParamLimits

0xb915,	// (0x00072889) scroll_pane_cp07_ParamLimits

0xb1d9,	// (0x0007214d) grid_highlight_pane_cp012

0xb434,	// (0x000723a8) mup_scale_pane_ParamLimits

0x16dd,	// (0x00068651) main_usb_pane_g1_ParamLimits

0x16dd,	// (0x00068651) main_usb_pane_g1

0x64f2,	// (0x0006d466) main_usb_pane_g2_ParamLimits

0x64f2,	// (0x0006d466) main_usb_pane_g2

0x0001,

0xf569,	// (0x000764dd) main_usb_pane_g_ParamLimits

0xf569,	// (0x000764dd) main_usb_pane_g

0x6506,	// (0x0006d47a) main_usb_pane_t1_ParamLimits

0x6506,	// (0x0006d47a) main_usb_pane_t1

0x6518,	// (0x0006d48c) main_usb_pane_t2_ParamLimits

0x6518,	// (0x0006d48c) main_usb_pane_t2

0x652a,	// (0x0006d49e) main_usb_pane_t3_ParamLimits

0x652a,	// (0x0006d49e) main_usb_pane_t3

0x653c,	// (0x0006d4b0) main_usb_pane_t4_ParamLimits

0x653c,	// (0x0006d4b0) main_usb_pane_t4

0x654e,	// (0x0006d4c2) main_usb_pane_t5_ParamLimits

0x654e,	// (0x0006d4c2) main_usb_pane_t5

0x6560,	// (0x0006d4d4) main_usb_pane_t6_ParamLimits

0x6560,	// (0x0006d4d4) main_usb_pane_t6

0x0005,

0xf56e,	// (0x000764e2) main_usb_pane_t_ParamLimits

0x13c7,	// (0x0006833b) aid_text_placing

0x5177,	// (0x0006c0eb) main_location2_pane_t1_ParamLimits

0x518d,	// (0x0006c101) main_location2_pane_t2_ParamLimits

0x51a3,	// (0x0006c117) main_location2_pane_t3_ParamLimits

0x51b9,	// (0x0006c12d) main_location2_pane_t4_ParamLimits

0x51b9,	// (0x0006c12d) main_location2_pane_t4

0xf375,	// (0x000762e9) main_location2_pane_t_ParamLimits

0xb46f,	// (0x000723e3) find_pinb_pane_g2_ParamLimits

0xb46f,	// (0x000723e3) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0007604e) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0007604e) find_pinb_pane_g

0xb47b,	// (0x000723ef) find_pinb_pane_t1_ParamLimits

0xb48d,	// (0x00072401) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00076053) find_pinb_pane_t_ParamLimits

0xb1d9,	// (0x0007214d) main_call3_pane

0x48ed,	// (0x0006b861) cale_month_day_heading_pane_t1_ParamLimits

0x4973,	// (0x0006b8e7) cale_month_day_heading_pane_t2_ParamLimits

0x4a04,	// (0x0006b978) cale_month_day_heading_pane_t3_ParamLimits

0x4a95,	// (0x0006ba09) cale_month_day_heading_pane_t4_ParamLimits

0x4b26,	// (0x0006ba9a) cale_month_day_heading_pane_t5_ParamLimits

0x4bb7,	// (0x0006bb2b) cale_month_day_heading_pane_t6_ParamLimits

0x4c48,	// (0x0006bbbc) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x000761ce) cale_month_day_heading_pane_t_ParamLimits

0x4ea4,	// (0x0006be18) smil_status_volume_pane

0x55c9,	// (0x0006c53d) postcard_address_pane_ParamLimits

0x55c9,	// (0x0006c53d) postcard_address_pane

0x55db,	// (0x0006c54f) postcard_message_pane_ParamLimits

0x55db,	// (0x0006c54f) postcard_message_pane

0x64d0,	// (0x0006d444) call2_cli_visual_pane_t1_ParamLimits

0x64d0,	// (0x0006d444) call2_cli_visual_pane_t1

0x6c08,	// (0x0006db7c) postcard_message_pane_t1_ParamLimits

0x6c08,	// (0x0006db7c) postcard_message_pane_t1

0x6bf1,	// (0x0006db65) postcard_address_pane_t1_ParamLimits

0x6bf1,	// (0x0006db65) postcard_address_pane_t1

0x6bdf,	// (0x0006db53) popup_call3_audio_in_window_ParamLimits

0x6bdf,	// (0x0006db53) popup_call3_audio_in_window

0x6a6e,	// (0x0006d9e2) bg_popup_call3_in_pane_ParamLimits

0x6a6e,	// (0x0006d9e2) bg_popup_call3_in_pane

0x6ae0,	// (0x0006da54) popup_call3_audio_in_window_g1_ParamLimits

0x6ae0,	// (0x0006da54) popup_call3_audio_in_window_g1

0x6b00,	// (0x0006da74) popup_call3_audio_in_window_g2_ParamLimits

0x6b00,	// (0x0006da74) popup_call3_audio_in_window_g2

0x6b20,	// (0x0006da94) popup_call3_audio_in_window_g3_ParamLimits

0x6b20,	// (0x0006da94) popup_call3_audio_in_window_g3

0x0003,

0xf5cb,	// (0x0007653f) popup_call3_audio_in_window_g_ParamLimits

0xf5cb,	// (0x0007653f) popup_call3_audio_in_window_g

0x6b51,	// (0x0006dac5) popup_call3_audio_in_window_t1_ParamLimits

0x6b51,	// (0x0006dac5) popup_call3_audio_in_window_t1

0x6b8f,	// (0x0006db03) popup_call3_audio_in_window_t2_ParamLimits

0x6b8f,	// (0x0006db03) popup_call3_audio_in_window_t2

0x6bcd,	// (0x0006db41) popup_call3_audio_in_window_t3_ParamLimits

0x6bcd,	// (0x0006db41) popup_call3_audio_in_window_t3

0x0002,

0xf5d4,	// (0x00076548) popup_call3_audio_in_window_t_ParamLimits

0xf5d4,	// (0x00076548) popup_call3_audio_in_window_t

0xb7ab,	// (0x0007271f) bg_popup_call3_rect_pane

0xc0ab,	// (0x0007301f) bg_popup_call3_rect_pane_g1

0xb687,	// (0x000725fb) bg_popup_call3_rect_pane_g2

0xc0b3,	// (0x00073027) bg_popup_call3_rect_pane_g3

0xc0bb,	// (0x0007302f) bg_popup_call3_rect_pane_g4

0xc0c3,	// (0x00073037) bg_popup_call3_rect_pane_g5

0xc0cb,	// (0x0007303f) bg_popup_call3_rect_pane_g6

0xc0d3,	// (0x00073047) bg_popup_call3_rect_pane_g7

0xad6d,	// (0x00071ce1) mup_visualizer_osc_pane

0xad6d,	// (0x00071ce1) mup_visualizer_spec_pane

0x6a9e,	// (0x0006da12) call3_video_qcif_pane_ParamLimits

0x6a9e,	// (0x0006da12) call3_video_qcif_pane

0x6aaf,	// (0x0006da23) call3_video_qcif_uncrop_pane_ParamLimits

0x6aaf,	// (0x0006da23) call3_video_qcif_uncrop_pane

0x6abb,	// (0x0006da2f) call3_video_subqcif_pane_ParamLimits

0x6abb,	// (0x0006da2f) call3_video_subqcif_pane

0x6acf,	// (0x0006da43) call3_video_subqcif_uncrop_pane_ParamLimits

0x6acf,	// (0x0006da43) call3_video_subqcif_uncrop_pane

0x6b40,	// (0x0006dab4) popup_call3_audio_in_window_g4_ParamLimits

0x6b40,	// (0x0006dab4) popup_call3_audio_in_window_g4

0xad6d,	// (0x00071ce1) mup_spec_half_pane

0xad6d,	// (0x00071ce1) mup_spec_half_pane_cp

0xad6d,	// (0x00071ce1) mup_osc_middle_pane

0xb80f,	// (0x00072783) mup_visualizer_osc_pane_g1

0xc351,	// (0x000732c5) mup_spec_bar_pane_ParamLimits

0xc351,	// (0x000732c5) mup_spec_bar_pane

0xb80f,	// (0x00072783) mup_spec_bar_pane_g1

0xb80f,	// (0x00072783) mup_spec_bar_pane_g2

0x0001,

0xf3ef,	// (0x00076363) mup_spec_bar_pane_g

0x3871,	// (0x0006a7e5) aid_cale_week_size_cell_pane_ParamLimits

0x388b,	// (0x0006a7ff) bg_cale_heading_pane_ParamLimits

0xb70d,	// (0x00072681) bg_cale_pane_cp01_ParamLimits

0x38a3,	// (0x0006a817) cale_week_corner_pane_ParamLimits

0x38c2,	// (0x0006a836) cale_week_day_heading_pane_ParamLimits

0x38df,	// (0x0006a853) cale_week_scroll_pane_g1_ParamLimits

0x38f2,	// (0x0006a866) cale_week_scroll_pane_g2_ParamLimits

0x390a,	// (0x0006a87e) cale_week_scroll_pane_g3_ParamLimits

0x3922,	// (0x0006a896) cale_week_scroll_pane_g4_ParamLimits

0x393a,	// (0x0006a8ae) cale_week_scroll_pane_g5_ParamLimits

0x3952,	// (0x0006a8c6) cale_week_scroll_pane_g6_ParamLimits

0x396a,	// (0x0006a8de) cale_week_scroll_pane_g7_ParamLimits

0x3982,	// (0x0006a8f6) cale_week_scroll_pane_g8_ParamLimits

0x399e,	// (0x0006a912) cale_week_scroll_pane_g9_ParamLimits

0x39b6,	// (0x0006a92a) cale_week_scroll_pane_g10_ParamLimits

0x39ce,	// (0x0006a942) cale_week_scroll_pane_g11_ParamLimits

0x39e6,	// (0x0006a95a) cale_week_scroll_pane_g12_ParamLimits

0x39fe,	// (0x0006a972) cale_week_scroll_pane_g13_ParamLimits

0x3a16,	// (0x0006a98a) cale_week_scroll_pane_g14_ParamLimits

0x3a2e,	// (0x0006a9a2) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x000760df) cale_week_scroll_pane_g_ParamLimits

0x3a62,	// (0x0006a9d6) cale_week_time_pane_ParamLimits

0x3a7e,	// (0x0006a9f2) grid_cale_week_pane_ParamLimits

0xb72a,	// (0x0007269e) listscroll_cale_week_pane_t1

0xb73c,	// (0x000726b0) scroll_pane_cp08_ParamLimits

0x4547,	// (0x0006b4bb) cale_month_corner_pane_ParamLimits

0xbb45,	// (0x00072ab9) cale_month_pane_t1

0x48a3,	// (0x0006b817) cale_month_week_pane_ParamLimits

0x4fc6,	// (0x0006bf3a) popup_call_status_window_g1_ParamLimits

0x4fda,	// (0x0006bf4e) popup_call_status_window_g2_ParamLimits

0x4fee,	// (0x0006bf62) popup_call_status_window_g3_ParamLimits

0xf2fc,	// (0x00076270) popup_call_status_window_g_ParamLimits

0x120d,	// (0x00068181) aid_call2_pane

0x2961,	// (0x000698d5) msg_header_pane_g1

0x55c9,	// (0x0006c53d) postcard_address2_pane_ParamLimits

0x55c9,	// (0x0006c53d) postcard_address2_pane

0x55db,	// (0x0006c54f) postcard_message2_pane_ParamLimits

0x55db,	// (0x0006c54f) postcard_message2_pane

0x6a2a,	// (0x0006d99e) message2_row_pane_ParamLimits

0x6a2a,	// (0x0006d99e) message2_row_pane

0x6a44,	// (0x0006d9b8) address2_row_pane_ParamLimits

0x6a44,	// (0x0006d9b8) address2_row_pane

0xc31f,	// (0x00073293) postcard_message2_row_pane_g1

0xc327,	// (0x0007329b) postcard_message2_row_pane_t1

0xc31f,	// (0x00073293) address2_row_pane_g1

0xc327,	// (0x0007329b) address2_row_pane_t1

0x3e7b,	// (0x0006adef) aid_size_cell_vorec

0xb1d9,	// (0x0007214d) main_rss_pane

0x6a57,	// (0x0006d9cb) rss_list_single_pane_ParamLimits

0x6a57,	// (0x0006d9cb) rss_list_single_pane

0xc335,	// (0x000732a9) rss_list_single_pane_t1

0xc343,	// (0x000732b7) rss_list_single_pane_t2

0x0001,

0xf5bf,	// (0x00076533) rss_list_single_pane_t

0xb1d9,	// (0x0007214d) main_camera2_pane

0xb1d9,	// (0x0007214d) main_video2_pane

0xeafc,	// (0x00075a70) cams_zoom_pane_cp2_ParamLimits

0xeafc,	// (0x00075a70) cams_zoom_pane_cp2

0xeafc,	// (0x00075a70) image2_vga_pane_ParamLimits

0xeafc,	// (0x00075a70) image2_vga_pane

0xeb0a,	// (0x00075a7e) main_camera2_pane_g1_ParamLimits

0xeb0a,	// (0x00075a7e) main_camera2_pane_g1

0xeb0a,	// (0x00075a7e) main_camera2_pane_g2_ParamLimits

0xeb0a,	// (0x00075a7e) main_camera2_pane_g2

0xeb0a,	// (0x00075a7e) main_camera2_pane_g3_ParamLimits

0xeb0a,	// (0x00075a7e) main_camera2_pane_g3

0xeb0a,	// (0x00075a7e) main_camera2_pane_g4_ParamLimits

0xeb0a,	// (0x00075a7e) main_camera2_pane_g4

0xeb0a,	// (0x00075a7e) main_camera2_pane_g5_ParamLimits

0xeb0a,	// (0x00075a7e) main_camera2_pane_g5

0xeb0a,	// (0x00075a7e) main_camera2_pane_g6_ParamLimits

0xeb0a,	// (0x00075a7e) main_camera2_pane_g6

0xeb0a,	// (0x00075a7e) main_camera2_pane_g7_ParamLimits

0xeb0a,	// (0x00075a7e) main_camera2_pane_g7

0xeb0a,	// (0x00075a7e) main_camera2_pane_g8_ParamLimits

0xeb0a,	// (0x00075a7e) main_camera2_pane_g8

0x0008,

0xf5db,	// (0x0007654f) main_camera2_pane_g_ParamLimits

0xf5db,	// (0x0007654f) main_camera2_pane_g

0x6c31,	// (0x0006dba5) main_camera2_pane_t1_ParamLimits

0x6c31,	// (0x0006dba5) main_camera2_pane_t1

0x6c31,	// (0x0006dba5) main_camera2_pane_t2_ParamLimits

0x6c31,	// (0x0006dba5) main_camera2_pane_t2

0x6c31,	// (0x0006dba5) main_camera2_pane_t3_ParamLimits

0x6c31,	// (0x0006dba5) main_camera2_pane_t3

0x6c31,	// (0x0006dba5) main_camera2_pane_t4_ParamLimits

0x6c31,	// (0x0006dba5) main_camera2_pane_t4

0x0006,

0xf5ee,	// (0x00076562) main_camera2_pane_t_ParamLimits

0xf5ee,	// (0x00076562) main_camera2_pane_t

0xc389,	// (0x000732fd) cams_zoom_pane_cp4_ParamLimits

0xc389,	// (0x000732fd) cams_zoom_pane_cp4

0xc397,	// (0x0007330b) image2_cif_pane_ParamLimits

0xc397,	// (0x0007330b) image2_cif_pane

0x15f8,	// (0x0006856c) image2_subqcif_pane_ParamLimits

0x15f8,	// (0x0006856c) image2_subqcif_pane

0x6c45,	// (0x0006dbb9) main_video2_pane_g1_ParamLimits

0x6c45,	// (0x0006dbb9) main_video2_pane_g1

0x6c45,	// (0x0006dbb9) main_video2_pane_g2_ParamLimits

0x6c45,	// (0x0006dbb9) main_video2_pane_g2

0x6c45,	// (0x0006dbb9) main_video2_pane_g3_ParamLimits

0x6c45,	// (0x0006dbb9) main_video2_pane_g3

0x6c45,	// (0x0006dbb9) main_video2_pane_g4_ParamLimits

0x6c45,	// (0x0006dbb9) main_video2_pane_g4

0x6c45,	// (0x0006dbb9) main_video2_pane_g5_ParamLimits

0x6c45,	// (0x0006dbb9) main_video2_pane_g5

0x6c45,	// (0x0006dbb9) main_video2_pane_g6_ParamLimits

0x6c45,	// (0x0006dbb9) main_video2_pane_g6

0x0005,

0xf5fd,	// (0x00076571) main_video2_pane_g_ParamLimits

0xf5fd,	// (0x00076571) main_video2_pane_g

0x6c53,	// (0x0006dbc7) main_video2_pane_t1_ParamLimits

0x6c53,	// (0x0006dbc7) main_video2_pane_t1

0x6c53,	// (0x0006dbc7) main_video2_pane_t2_ParamLimits

0x6c53,	// (0x0006dbc7) main_video2_pane_t2

0x6c53,	// (0x0006dbc7) main_video2_pane_t3_ParamLimits

0x6c53,	// (0x0006dbc7) main_video2_pane_t3

0x0002,

0xf60a,	// (0x0007657e) main_video2_pane_t_ParamLimits

0xf60a,	// (0x0007657e) main_video2_pane_t

0x660f,	// (0x0006d583) call_muted_g2

0x0001,

0xf5b1,	// (0x00076525) call_muted_g

0xb1d9,	// (0x0007214d) main_mup2_pane

0x182e,	// (0x000687a2) main_mup2_pane_g1_ParamLimits

0x182e,	// (0x000687a2) main_mup2_pane_g1

0x182e,	// (0x000687a2) main_mup2_pane_g2_ParamLimits

0x182e,	// (0x000687a2) main_mup2_pane_g2

0xb80f,	// (0x00072783) main_mup_pane_g13_cp1

0xad6d,	// (0x00071ce1) mup_volume_pane_cp1

0x182e,	// (0x000687a2) main_mup2_pane_g4_ParamLimits

0x182e,	// (0x000687a2) main_mup2_pane_g4

0x182e,	// (0x000687a2) main_mup2_pane_g5_ParamLimits

0x182e,	// (0x000687a2) main_mup2_pane_g5

0x182e,	// (0x000687a2) main_mup2_pane_g6_ParamLimits

0x182e,	// (0x000687a2) main_mup2_pane_g6

0x182e,	// (0x000687a2) main_mup2_pane_g7_ParamLimits

0x182e,	// (0x000687a2) main_mup2_pane_g7

0x0006,

0xf611,	// (0x00076585) main_mup2_pane_g_ParamLimits

0xf611,	// (0x00076585) main_mup2_pane_g

0x183c,	// (0x000687b0) main_mup2_pane_t1_ParamLimits

0x183c,	// (0x000687b0) main_mup2_pane_t1

0x183c,	// (0x000687b0) main_mup2_pane_t2_ParamLimits

0x183c,	// (0x000687b0) main_mup2_pane_t2

0x183c,	// (0x000687b0) main_mup2_pane_t3_ParamLimits

0x183c,	// (0x000687b0) main_mup2_pane_t3

0x183c,	// (0x000687b0) main_mup2_pane_t4_ParamLimits

0x183c,	// (0x000687b0) main_mup2_pane_t4

0x183c,	// (0x000687b0) main_mup2_pane_t5_ParamLimits

0x183c,	// (0x000687b0) main_mup2_pane_t5

0x183c,	// (0x000687b0) main_mup2_pane_t6_ParamLimits

0x183c,	// (0x000687b0) main_mup2_pane_t6

0x0005,

0xf620,	// (0x00076594) main_mup2_pane_t_ParamLimits

0xf620,	// (0x00076594) main_mup2_pane_t

0x1820,	// (0x00068794) mup2_visualizer_pane_ParamLimits

0x1820,	// (0x00068794) mup2_visualizer_pane

0x1820,	// (0x00068794) mup_progress_pane_cp_ParamLimits

0x1820,	// (0x00068794) mup_progress_pane_cp

0xc3a5,	// (0x00073319) mup_volume_pane_cp_ParamLimits

0xc3a5,	// (0x00073319) mup_volume_pane_cp

0xb4ae,	// (0x00072422) mup2_visualizer_pane_g1_ParamLimits

0xb4ae,	// (0x00072422) mup2_visualizer_pane_g1

0xb4bc,	// (0x00072430) mup2_visualizer_pane_g2_ParamLimits

0xb4bc,	// (0x00072430) mup2_visualizer_pane_g2

0xb4bc,	// (0x00072430) mup2_visualizer_pane_g3_ParamLimits

0xb4bc,	// (0x00072430) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00076058) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00076058) mup2_visualizer_pane_g

0xbc0f,	// (0x00072b83) aid_size_cell_fmradio

0x6789,	// (0x0006d6fd) aid_height_parent_landcape

0xb9a2,	// (0x00072916) wml_content_pane_cp

0xb9aa,	// (0x0007291e) wml_tabs_pane

0xb9b3,	// (0x00072927) popup_wml_miniature_window

0xb9bb,	// (0x0007292f) scroll_pane_cp021

0xb9cf,	// (0x00072943) wml_content_pane_comp8

0xb1d9,	// (0x0007214d) bg_popup_sub_pane_cp05

0xc3bb,	// (0x0007332f) popup_wml_miniature_window_g1

0xc3c3,	// (0x00073337) wml_miniature_view_pane

0x6c67,	// (0x0006dbdb) aid_size_wml_view

0x6c6f,	// (0x0006dbe3) wml_miniature_view_pane_g1

0x6c78,	// (0x0006dbec) wml_miniature_view_pane_g2

0x6c81,	// (0x0006dbf5) wml_miniature_view_pane_g3

0x6c89,	// (0x0006dbfd) wml_miniature_view_pane_g4

0x6c91,	// (0x0006dc05) wml_miniature_view_pane_g5

0x6c99,	// (0x0006dc0d) wml_miniature_view_pane_g6

0x6ca1,	// (0x0006dc15) wml_miniature_view_pane_g7

0x6ca9,	// (0x0006dc1d) wml_miniature_view_pane_g8

0x0007,

0xf62d,	// (0x000765a1) wml_miniature_view_pane_g

0xc3cb,	// (0x0007333f) background_graphic_ParamLimits

0xc3cb,	// (0x0007333f) background_graphic

0xc3d7,	// (0x0007334b) wml_tabs_2_pane

0xc3e0,	// (0x00073354) wml_tabs_3_pane_ParamLimits

0xc3e0,	// (0x00073354) wml_tabs_3_pane

0xc3f2,	// (0x00073366) wml_tabs_4_pane_ParamLimits

0xc3f2,	// (0x00073366) wml_tabs_4_pane

0xc408,	// (0x0007337c) wml_tabs_5_pane_ParamLimits

0xc408,	// (0x0007337c) wml_tabs_5_pane

0xc422,	// (0x00073396) wml_tabs_pane_g2_ParamLimits

0xc422,	// (0x00073396) wml_tabs_pane_g2

0xc436,	// (0x000733aa) wml_tabs_pane_g3_ParamLimits

0xc436,	// (0x000733aa) wml_tabs_pane_g3

0x6cb1,	// (0x0006dc25) wml_tabs_2_active_pane_ParamLimits

0x6cb1,	// (0x0006dc25) wml_tabs_2_active_pane

0x6cc1,	// (0x0006dc35) wml_tabs_2_passive_pane_ParamLimits

0x6cc1,	// (0x0006dc35) wml_tabs_2_passive_pane

0x6cd1,	// (0x0006dc45) wml_tabs_3_active_pane_cp_ParamLimits

0x6cd1,	// (0x0006dc45) wml_tabs_3_active_pane_cp

0x6ce2,	// (0x0006dc56) wml_tabs_3_passive_pane_ParamLimits

0x6ce2,	// (0x0006dc56) wml_tabs_3_passive_pane

0x6cf3,	// (0x0006dc67) wml_tabs_3_passive_pane_cp_ParamLimits

0x6cf3,	// (0x0006dc67) wml_tabs_3_passive_pane_cp

0x6d04,	// (0x0006dc78) tabs_4_active_pane

0x6d0c,	// (0x0006dc80) tabs_4_passive_pane

0x6d14,	// (0x0006dc88) tabs_4_passive_pane_cp

0x6d1c,	// (0x0006dc90) tabs_4_passive_pane_cp2

0x64ea,	// (0x0006d45e) aid_height_text

0x1820,	// (0x00068794) mup_volume_cont_pane_ParamLimits

0x1820,	// (0x00068794) mup_volume_cont_pane

0x3585,	// (0x0006a4f9) aid_size_cell_pinb

0xad6d,	// (0x00071ce1) aid_size_list_pinb

0x1820,	// (0x00068794) mup2_volume_cont_pane_ParamLimits

0x1820,	// (0x00068794) mup2_volume_cont_pane

0xeb2c,	// (0x00075aa0) mup2_volume_cont_pane_g1_ParamLimits

0xeb2c,	// (0x00075aa0) mup2_volume_cont_pane_g1

0x32f9,	// (0x0006a26d) aid_size_cell_touch_ParamLimits

0x32f9,	// (0x0006a26d) aid_size_cell_touch

0x34e5,	// (0x0006a459) touch_pane_ParamLimits

0x34e5,	// (0x0006a459) touch_pane

0xad6d,	// (0x00071ce1) main_rss2_pane

0xc453,	// (0x000733c7) listscroll_rss2_pane

0xc45c,	// (0x000733d0) rss2_navigation_pane

0xc464,	// (0x000733d8) list_rss2_pane

0x1344,	// (0x000682b8) scroll_pane_cp22

0xc46c,	// (0x000733e0) rss2_navigation_pane_g1

0xc475,	// (0x000733e9) rss2_navigation_pane_g2

0xc47d,	// (0x000733f1) rss2_navigation_pane_g3

0x0002,

0xf63e,	// (0x000765b2) rss2_navigation_pane_g

0xc485,	// (0x000733f9) rss2_navigation_pane_t1

0x6d24,	// (0x0006dc98) rss2_list_single_pane_ParamLimits

0x6d24,	// (0x0006dc98) rss2_list_single_pane

0xc493,	// (0x00073407) rss2_list_single_pane_t2

0xc4a1,	// (0x00073415) rss2_list_single_pane_t3_ParamLimits

0xc4a1,	// (0x00073415) rss2_list_single_pane_t3

0xc4be,	// (0x00073432) rss2_list_single_pane_t4

0x4e8e,	// (0x0006be02) smil_status_pane_g1

0x15f8,	// (0x0006856c) main_image2_pane_ParamLimits

0x15f8,	// (0x0006856c) main_image2_pane

0xeb0a,	// (0x00075a7e) main_camera2_pane_g9_ParamLimits

0xeb0a,	// (0x00075a7e) main_camera2_pane_g9

0x6c31,	// (0x0006dba5) main_camera2_pane_t5_ParamLimits

0x6c31,	// (0x0006dba5) main_camera2_pane_t5

0xeb18,	// (0x00075a8c) main_camera2_pane_t6_ParamLimits

0xeb18,	// (0x00075a8c) main_camera2_pane_t6

0x6d38,	// (0x0006dcac) main_image2_pane_g1_ParamLimits

0x6d38,	// (0x0006dcac) main_image2_pane_g1

0x57f0,	// (0x0006c764) smil2_video_pane_ParamLimits

0x57f0,	// (0x0006c764) smil2_video_pane

0xad97,	// (0x00071d0b) aid_zoom_text_primary_cp

0xadc0,	// (0x00071d34) popup_preview_fixed_window

0xb8fc,	// (0x00072870) im_reading_pane_g1

0x6c23,	// (0x0006db97) cams2_bc_adjust_pane_cp_ParamLimits

0x6c23,	// (0x0006db97) cams2_bc_adjust_pane_cp

0x1820,	// (0x00068794) cams2_bc_adjust_pane_ParamLimits

0x1820,	// (0x00068794) cams2_bc_adjust_pane

0xb80f,	// (0x00072783) cams2_bc_adjust_pane_g1

0xad6d,	// (0x00071ce1) cams2_slider_pane

0xb80f,	// (0x00072783) cams2_slider_pane_g1

0xb80f,	// (0x00072783) cams2_slider_pane_g2

0x0006,

0xf645,	// (0x000765b9) cams2_slider_pane_g

0x35c0,	// (0x0006a534) calc_display_pane_ParamLimits

0x35dc,	// (0x0006a550) calc_paper_pane_ParamLimits

0x35fd,	// (0x0006a571) grid_calc_pane_ParamLimits

0xea19,	// (0x0007598d) popup_clock_digital_window_t1_ParamLimits

0x17b5,	// (0x00068729) main_image_pane_t1

0x35a2,	// (0x0006a516) aid_size_cell_calc_ParamLimits

0x35a2,	// (0x0006a516) aid_size_cell_calc

0x67b9,	// (0x0006d72d) popup_blid_sat_info2_window_ParamLimits

0x67b9,	// (0x0006d72d) popup_blid_sat_info2_window

0xc4cc,	// (0x00073440) aid_size_cell_blid

0xc397,	// (0x0007330b) bg_popup_window_pane_cp07

0xc4e9,	// (0x0007345d) grid_popup_blid_pane

0xc4f1,	// (0x00073465) heading_pane_cp05_ParamLimits

0xc4f1,	// (0x00073465) heading_pane_cp05

0xc5b9,	// (0x0007352d) cell_popup_blid_pane_ParamLimits

0xc5b9,	// (0x0007352d) cell_popup_blid_pane

0xc5d9,	// (0x0007354d) cell_popup_blid_pane_g1

0xc5e1,	// (0x00073555) cell_popup_blid_pane_t1

0x1820,	// (0x00068794) mup2_indicator_pane_ParamLimits

0x1820,	// (0x00068794) mup2_indicator_pane

0xad6d,	// (0x00071ce1) mup2_visualizer_osc_pane

0xc3a5,	// (0x00073319) mup2_visualizer_spec_pane_ParamLimits

0xc3a5,	// (0x00073319) mup2_visualizer_spec_pane

0xad6d,	// (0x00071ce1) mup2_spec_half_pane

0xad6d,	// (0x00071ce1) mup2_spec_half_pane_cp

0xad6d,	// (0x00071ce1) mup2_spec_bar_pane_ParamLimits

0xad6d,	// (0x00071ce1) mup2_spec_bar_pane

0xb80f,	// (0x00072783) mup2_spec_bar_pane_g1

0xc5ef,	// (0x00073563) mup2_spec_bar_pane_g2

0x0001,

0xf66b,	// (0x000765df) mup2_spec_bar_pane_g

0xad6d,	// (0x00071ce1) mup2_osc_middle_pane

0xb80f,	// (0x00072783) mup2_visualizer_osc_pane_g1

0xade8,	// (0x00071d5c) popup_number_entry_window_t1_ParamLimits

0xadfb,	// (0x00071d6f) popup_number_entry_window_t2_ParamLimits

0xae0d,	// (0x00071d81) popup_number_entry_window_t3_ParamLimits

0x352d,	// (0x0006a4a1) popup_number_entry_window_t5_ParamLimits

0x352d,	// (0x0006a4a1) popup_number_entry_window_t5

0xf085,	// (0x00075ff9) popup_number_entry_window_t_ParamLimits

0xae1f,	// (0x00071d93) text_title_cp2_ParamLimits

0xea58,	// (0x000759cc) aid_hotspot_pointer_text2_pane

0xea7e,	// (0x000759f2) main_viewer_pane_g9_ParamLimits

0xea7e,	// (0x000759f2) main_viewer_pane_g9

0xbb45,	// (0x00072ab9) cale_month_pane_t1_ParamLimits

0xbb99,	// (0x00072b0d) bg_cale_pane_ParamLimits

0x0ed6,	// (0x00067e4a) list_cale_pane_ParamLimits

0x0ee7,	// (0x00067e5b) listscroll_cale_day_pane_t1

0x0ef9,	// (0x00067e6d) scroll_pane_cp09_ParamLimits

0x52e7,	// (0x0006c25b) main_mup_eq_pane_t1_ParamLimits

0x52e7,	// (0x0006c25b) main_mup_eq_pane_t1

0x52ff,	// (0x0006c273) main_mup_eq_pane_t2_ParamLimits

0x52ff,	// (0x0006c273) main_mup_eq_pane_t2

0x5315,	// (0x0006c289) main_mup_eq_pane_t3_ParamLimits

0x5315,	// (0x0006c289) main_mup_eq_pane_t3

0x532b,	// (0x0006c29f) main_mup_eq_pane_t4_ParamLimits

0x532b,	// (0x0006c29f) main_mup_eq_pane_t4

0x5341,	// (0x0006c2b5) main_mup_eq_pane_t5_ParamLimits

0x5341,	// (0x0006c2b5) main_mup_eq_pane_t5

0x5357,	// (0x0006c2cb) main_mup_eq_pane_t6_ParamLimits

0x5357,	// (0x0006c2cb) main_mup_eq_pane_t6

0x5369,	// (0x0006c2dd) main_mup_eq_pane_t7_ParamLimits

0x5369,	// (0x0006c2dd) main_mup_eq_pane_t7

0x537b,	// (0x0006c2ef) main_mup_eq_pane_t8_ParamLimits

0x537b,	// (0x0006c2ef) main_mup_eq_pane_t8

0x538d,	// (0x0006c301) main_mup_eq_pane_t9_ParamLimits

0x538d,	// (0x0006c301) main_mup_eq_pane_t9

0x53a3,	// (0x0006c317) main_mup_eq_pane_t10_ParamLimits

0x53a3,	// (0x0006c317) main_mup_eq_pane_t10

0x0009,

0xf3fb,	// (0x0007636f) main_mup_eq_pane_t_ParamLimits

0xf3fb,	// (0x0007636f) main_mup_eq_pane_t

0x5436,	// (0x0006c3aa) mup_equalizer_pane_cp5_ParamLimits

0x5448,	// (0x0006c3bc) mup_equalizer_pane_cp6_ParamLimits

0x545a,	// (0x0006c3ce) mup_equalizer_pane_cp7_ParamLimits

0xad6d,	// (0x00071ce1) main_gallery_pane

0xc35b,	// (0x000732cf) smil2_volume_pane

0xc363,	// (0x000732d7) smil_status_volume_pane_g1_ParamLimits

0xc376,	// (0x000732ea) smil_status_volume_pane_g2_ParamLimits

0xeada,	// (0x00075a4e) smil_status_volume_pane_g3_ParamLimits

0xf5c4,	// (0x00076538) smil_status_volume_pane_g_ParamLimits

0xc397,	// (0x0007330b) bg_popup_window_pane_cp07_ParamLimits

0xc4d4,	// (0x00073448) blid_firmament_pane

0x15f8,	// (0x0006856c) aid_size_cell_gallery_ParamLimits

0x15f8,	// (0x0006856c) aid_size_cell_gallery

0x6d4c,	// (0x0006dcc0) grid_gallery_pane_ParamLimits

0x6d4c,	// (0x0006dcc0) grid_gallery_pane

0x6d62,	// (0x0006dcd6) cell_gallery_pane_ParamLimits

0x6d62,	// (0x0006dcd6) cell_gallery_pane

0x15f8,	// (0x0006856c) bg_cell_gallery_focus_pane_ParamLimits

0x15f8,	// (0x0006856c) bg_cell_gallery_focus_pane

0xb4ae,	// (0x00072422) cell_gallery_pane_g1_ParamLimits

0xb4ae,	// (0x00072422) cell_gallery_pane_g1

0xb4ae,	// (0x00072422) cell_gallery_pane_g2_ParamLimits

0xb4ae,	// (0x00072422) cell_gallery_pane_g2

0xb4ae,	// (0x00072422) cell_gallery_pane_g3_ParamLimits

0xb4ae,	// (0x00072422) cell_gallery_pane_g3

0xb4bc,	// (0x00072430) cell_gallery_pane_g4_ParamLimits

0xb4bc,	// (0x00072430) cell_gallery_pane_g4

0x0003,

0xf670,	// (0x000765e4) cell_gallery_pane_g_ParamLimits

0xf670,	// (0x000765e4) cell_gallery_pane_g

0xc5f9,	// (0x0007356d) bg_cell_gallery_focus_pane_g1

0xc601,	// (0x00073575) bg_cell_gallery_focus_pane_g2

0xc609,	// (0x0007357d) bg_cell_gallery_focus_pane_g3

0xc611,	// (0x00073585) bg_cell_gallery_focus_pane_g4

0xc619,	// (0x0007358d) bg_cell_gallery_focus_pane_g5

0xc621,	// (0x00073595) bg_cell_gallery_focus_pane_g6

0xc629,	// (0x0007359d) bg_cell_gallery_focus_pane_g7

0xc631,	// (0x000735a5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf679,	// (0x000765ed) bg_cell_gallery_focus_pane_g

0xc639,	// (0x000735ad) aid_firma_cardinal

0xc64d,	// (0x000735c1) blid_firmament_pane_t1

0xc664,	// (0x000735d8) blid_firmament_pane_t2

0xc67b,	// (0x000735ef) blid_firmament_pane_t3

0xc692,	// (0x00073606) blid_firmament_pane_t4

0x0003,

0xf68a,	// (0x000765fe) blid_firmament_pane_t

0xc6a9,	// (0x0007361d) blid_sat_info_pane

0xb80f,	// (0x00072783) blid_sat_info_pane_g1

0xb80f,	// (0x00072783) blid_sat_info_pane_g2

0x0001,

0xf3ef,	// (0x00076363) blid_sat_info_pane_g

0xc6b9,	// (0x0007362d) blid_sat_info_pane_t1

0xc6c7,	// (0x0007363b) smil2_volume_content_pane

0xc6d0,	// (0x00073644) smil2_volume_pane_g1

0xc6d8,	// (0x0007364c) smil2_volume_content_pane_g1

0xc6e1,	// (0x00073655) smil2_volume_content_pane_g2

0xc6ea,	// (0x0007365e) smil2_volume_content_pane_g3

0xc6f3,	// (0x00073667) smil2_volume_content_pane_g4

0xc6fc,	// (0x00073670) smil2_volume_content_pane_g5

0xc705,	// (0x00073679) smil2_volume_content_pane_g6

0xc70e,	// (0x00073682) smil2_volume_content_pane_g7

0xc717,	// (0x0007368b) smil2_volume_content_pane_g8

0xc720,	// (0x00073694) smil2_volume_content_pane_g9

0xc729,	// (0x0007369d) smil2_volume_content_pane_g10

0x0009,

0xf693,	// (0x00076607) smil2_volume_content_pane_g

0x3b12,	// (0x0006aa86) cale_week_day_heading_pane_t1_ParamLimits

0x3b3c,	// (0x0006aab0) cale_week_day_heading_pane_t2_ParamLimits

0x3b6b,	// (0x0006aadf) cale_week_day_heading_pane_t3_ParamLimits

0x3b9a,	// (0x0006ab0e) cale_week_day_heading_pane_t4_ParamLimits

0x3bc9,	// (0x0006ab3d) cale_week_day_heading_pane_t5_ParamLimits

0x3bf8,	// (0x0006ab6c) cale_week_day_heading_pane_t6_ParamLimits

0x3c27,	// (0x0006ab9b) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00076100) cale_week_day_heading_pane_t_ParamLimits

0xb759,	// (0x000726cd) bg_cale_side_pane_ParamLimits

0x3c51,	// (0x0006abc5) cale_week_time_pane_t1_ParamLimits

0x3c8b,	// (0x0006abff) cale_week_time_pane_t2_ParamLimits

0x3cc5,	// (0x0006ac39) cale_week_time_pane_t3_ParamLimits

0x3cff,	// (0x0006ac73) cale_week_time_pane_t4_ParamLimits

0x3d39,	// (0x0006acad) cale_week_time_pane_t5_ParamLimits

0x3d73,	// (0x0006ace7) cale_week_time_pane_t6_ParamLimits

0x3dad,	// (0x0006ad21) cale_week_time_pane_t7_ParamLimits

0x3de7,	// (0x0006ad5b) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0007610f) cale_week_time_pane_t_ParamLimits

0x3e21,	// (0x0006ad95) cell_cale_week_pane_g2_ParamLimits

0xb759,	// (0x000726cd) bg_cale_side_pane_cp01_ParamLimits

0x4cdd,	// (0x0006bc51) cale_month_week_pane_t1_ParamLimits

0x4cf6,	// (0x0006bc6a) cale_month_week_pane_t2_ParamLimits

0x4d0f,	// (0x0006bc83) cale_month_week_pane_t3_ParamLimits

0x4d28,	// (0x0006bc9c) cale_month_week_pane_t4_ParamLimits

0x4d41,	// (0x0006bcb5) cale_month_week_pane_t5_ParamLimits

0x4d5a,	// (0x0006bcce) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x000761dd) cale_month_week_pane_t_ParamLimits

0xbb57,	// (0x00072acb) cell_cale_month_pane_g1_ParamLimits

0xad6d,	// (0x00071ce1) main_cale_event_viewer_pane

0xad6d,	// (0x00071ce1) listscroll_cale_event_viewer_pane

0xc732,	// (0x000736a6) list_cale_ev_pane

0xc73a,	// (0x000736ae) scroll_pane_cp023

0x6d82,	// (0x0006dcf6) field_cale_ev_pane_ParamLimits

0x6d82,	// (0x0006dcf6) field_cale_ev_pane

0xc746,	// (0x000736ba) field_cale_ev_content_pane_ParamLimits

0xc746,	// (0x000736ba) field_cale_ev_content_pane

0xc752,	// (0x000736c6) field_cale_ev_pane_g1_ParamLimits

0xc752,	// (0x000736c6) field_cale_ev_pane_g1

0xc75e,	// (0x000736d2) field_cale_ev_pane_g2_ParamLimits

0xc75e,	// (0x000736d2) field_cale_ev_pane_g2

0xc776,	// (0x000736ea) field_cale_ev_pane_g3_ParamLimits

0xc776,	// (0x000736ea) field_cale_ev_pane_g3

0x0002,

0xf6a8,	// (0x0007661c) field_cale_ev_pane_g_ParamLimits

0xf6a8,	// (0x0007661c) field_cale_ev_pane_g

0xc78e,	// (0x00073702) field_cale_ev_pane_t1_ParamLimits

0xc78e,	// (0x00073702) field_cale_ev_pane_t1

0x3821,	// (0x0006a795) field_cale_ev_content_pane_t1_ParamLimits

0x3821,	// (0x0006a795) field_cale_ev_content_pane_t1

0x169b,	// (0x0006860f) bg_button_pane_cp01

0x3861,	// (0x0006a7d5) listscroll_cale_week_pane_ParamLimits

0xb704,	// (0x00072678) popup_toolbar_window_cp01

0xb72a,	// (0x0007269e) listscroll_cale_week_pane_t1_ParamLimits

0x3861,	// (0x0006a7d5) listscroll_cale_day_pane_ParamLimits

0xb704,	// (0x00072678) popup_toolbar_window_cp02

0x0ee7,	// (0x00067e5b) listscroll_cale_day_pane_t1_ParamLimits

0x3861,	// (0x0006a7d5) main_cale_month_pane_ParamLimits

0xeac5,	// (0x00075a39) popup_toolbar_window_cp03_ParamLimits

0xeac5,	// (0x00075a39) popup_toolbar_window_cp03

0x56ca,	// (0x0006c63e) main_image_pane_g2_ParamLimits

0x56ca,	// (0x0006c63e) main_image_pane_g2

0x56db,	// (0x0006c64f) main_image_pane_g3_ParamLimits

0x56db,	// (0x0006c64f) main_image_pane_g3

0x0002,

0xf48d,	// (0x00076401) main_image_pane_g_ParamLimits

0xf48d,	// (0x00076401) main_image_pane_g

0x17b5,	// (0x00068729) main_image_pane_t1_ParamLimits

0x56ec,	// (0x0006c660) main_image_pane_t2_ParamLimits

0x56ec,	// (0x0006c660) main_image_pane_t2

0x56fe,	// (0x0006c672) main_image_pane_t3_ParamLimits

0x56fe,	// (0x0006c672) main_image_pane_t3

0x5726,	// (0x0006c69a) main_image_pane_t4_ParamLimits

0x5726,	// (0x0006c69a) main_image_pane_t4

0x0003,

0xf494,	// (0x00076408) main_image_pane_t_ParamLimits

0xf494,	// (0x00076408) main_image_pane_t

0x5746,	// (0x0006c6ba) popup_image_details_window_cp01

0x574e,	// (0x0006c6c2) popup_toobar_trans_pane_cp01_ParamLimits

0x574e,	// (0x0006c6c2) popup_toobar_trans_pane_cp01

0x6882,	// (0x0006d7f6) popup_image_details_window_ParamLimits

0x6882,	// (0x0006d7f6) popup_image_details_window

0xea9a,	// (0x00075a0e) popup_image_focus_window

0xeafc,	// (0x00075a70) camera2_autofocus_pane_ParamLimits

0xeafc,	// (0x00075a70) camera2_autofocus_pane

0xad6d,	// (0x00071ce1) bg_popup_sub_pane_cp06

0xc7a5,	// (0x00073719) popup_image_focus_window_g1

0xc7ad,	// (0x00073721) popup_image_focus_window_g2

0xc7b5,	// (0x00073729) popup_image_focus_window_g3

0xc7bd,	// (0x00073731) popup_image_focus_window_g4

0x0003,

0xf6af,	// (0x00076623) popup_image_focus_window_g

0xc7c5,	// (0x00073739) popup_image_focus_window_t1

0xc7d3,	// (0x00073747) popup_image_focus_window_t2

0xc7e2,	// (0x00073756) popup_image_focus_window_t3

0x0002,

0xf6b8,	// (0x0007662c) popup_image_focus_window_t

0xb4ae,	// (0x00072422) camera2_autofocus_pane_g1

0x15f8,	// (0x0006856c) bg_tb_trans_pane_cp01

0xc7f0,	// (0x00073764) popup_image_details_window_g1

0xc803,	// (0x00073777) popup_image_details_window_g2

0x0002,

0xf6ca,	// (0x0007663e) popup_image_details_window_g

0xc82c,	// (0x000737a0) popup_image_details_window_t1

0xc83e,	// (0x000737b2) popup_image_details_window_t2

0xc857,	// (0x000737cb) popup_image_details_window_t3

0xc86b,	// (0x000737df) popup_image_details_window_t4

0xc886,	// (0x000737fa) popup_image_details_window_t5

0x0004,

0xf6d1,	// (0x00076645) popup_image_details_window_t

0xb514,	// (0x00072488) bg_calc_paper_pane_ParamLimits

0xad6d,	// (0x00071ce1) grid_highlight_pane_cp013

0xb52c,	// (0x000724a0) list_calc_pane_ParamLimits

0xb53e,	// (0x000724b2) scroll_pane_cp024

0xb546,	// (0x000724ba) bg_calc_display_pane_ParamLimits

0xb552,	// (0x000724c6) calc_display_pane_t1_ParamLimits

0xb567,	// (0x000724db) calc_display_pane_t2_ParamLimits

0xb57c,	// (0x000724f0) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00076080) calc_display_pane_t_ParamLimits

0x377c,	// (0x0006a6f0) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0007609d) cell_calc_pane_g

0x3785,	// (0x0006a6f9) cell_calc_pane_t1

0xb5e9,	// (0x0007255d) grid_highlight_pane_cp02_ParamLimits

0xb5ff,	// (0x00072573) toolbar_button_pane_cp01_ParamLimits

0xb5ff,	// (0x00072573) toolbar_button_pane_cp01

0x17fa,	// (0x0006876e) temp_image_control_pane_ParamLimits

0x17fa,	// (0x0006876e) temp_image_control_pane

0x15f8,	// (0x0006856c) main_mp3_pane

0xc8a0,	// (0x00073814) temp_image_control_pane_g1_ParamLimits

0xc8a0,	// (0x00073814) temp_image_control_pane_g1

0xc8ae,	// (0x00073822) temp_image_control_pane_g2_ParamLimits

0xc8ae,	// (0x00073822) temp_image_control_pane_g2

0xc8c0,	// (0x00073834) temp_image_control_pane_g3_ParamLimits

0xc8c0,	// (0x00073834) temp_image_control_pane_g3

0x6d9c,	// (0x0006dd10) temp_image_control_pane_g4_ParamLimits

0x6d9c,	// (0x0006dd10) temp_image_control_pane_g4

0x0003,

0xf6dc,	// (0x00076650) temp_image_control_pane_g_ParamLimits

0xf6dc,	// (0x00076650) temp_image_control_pane_g

0xc8a0,	// (0x00073814) main_mp3_pane_g1

0x6dad,	// (0x0006dd21) main_mp3_pane_g2

0x0007,

0xf6e5,	// (0x00076659) main_mp3_pane_g

0xc8f5,	// (0x00073869) main_mp3_pane_t1

0xb4bc,	// (0x00072430) main_camera_pane_g8_ParamLimits

0xb4bc,	// (0x00072430) main_camera_pane_g8

0x4008,	// (0x0006af7c) main_video_pane_g7_ParamLimits

0x4008,	// (0x0006af7c) main_video_pane_g7

0xbbcf,	// (0x00072b43) main_camera2_pane_t7_ParamLimits

0xbbcf,	// (0x00072b43) main_camera2_pane_t7

0xb962,	// (0x000728d6) scroll_pane_cp025_ParamLimits

0xb962,	// (0x000728d6) scroll_pane_cp025

0xb976,	// (0x000728ea) scroll_pane_cp026_ParamLimits

0xb976,	// (0x000728ea) scroll_pane_cp026

0xb985,	// (0x000728f9) wml_content_pane_ParamLimits

0xad6d,	// (0x00071ce1) main_touch_calib_pane

0x6e6f,	// (0x0006dde3) main_touch_calib_pane_g1

0x6e81,	// (0x0006ddf5) main_touch_calib_pane_g2

0x6e93,	// (0x0006de07) main_touch_calib_pane_g3

0x6ea5,	// (0x0006de19) main_touch_calib_pane_g4

0x0003,

0xf703,	// (0x00076677) main_touch_calib_pane_g

0x6eb7,	// (0x0006de2b) main_touch_calib_pane_t1

0x6ecf,	// (0x0006de43) main_touch_calib_pane_t2

0x0004,

0xf70c,	// (0x00076680) main_touch_calib_pane_t

0x1400,	// (0x00068374) mup_progress_pane_cp02

0x1435,	// (0x000683a9) navi_pane_g1

0x14c0,	// (0x00068434) navi_pane_mp_t3

0x15f8,	// (0x0006856c) main_mp3_pane_ParamLimits

0x69db,	// (0x0006d94f) navi_pane_ParamLimits

0xc8a0,	// (0x00073814) main_mp3_pane_g1_ParamLimits

0x6dad,	// (0x0006dd21) main_mp3_pane_g2_ParamLimits

0x6db9,	// (0x0006dd2d) main_mp3_pane_g3_ParamLimits

0x6db9,	// (0x0006dd2d) main_mp3_pane_g3

0x6dc5,	// (0x0006dd39) main_mp3_pane_g4_ParamLimits

0x6dc5,	// (0x0006dd39) main_mp3_pane_g4

0xb4ae,	// (0x00072422) main_mp3_pane_g5_ParamLimits

0xb4ae,	// (0x00072422) main_mp3_pane_g5

0xc8d0,	// (0x00073844) main_mp3_pane_g6_ParamLimits

0xc8d0,	// (0x00073844) main_mp3_pane_g6

0xc8dd,	// (0x00073851) main_mp3_pane_g7_ParamLimits

0xc8dd,	// (0x00073851) main_mp3_pane_g7

0xc8e9,	// (0x0007385d) main_mp3_pane_g8_ParamLimits

0xc8e9,	// (0x0007385d) main_mp3_pane_g8

0xf6e5,	// (0x00076659) main_mp3_pane_g_ParamLimits

0x6dd1,	// (0x0006dd45) main_mp3_pane_t2

0x6ddf,	// (0x0006dd53) main_mp3_pane_t3

0xc903,	// (0x00073877) main_mp3_pane_t4

0xc911,	// (0x00073885) main_mp3_pane_t5

0x0005,

0xf6f6,	// (0x0007666a) main_mp3_pane_t

0xc91f,	// (0x00073893) mup_progress_pane_cp01

0xad97,	// (0x00071d0b) aid_zoom_text_secondary2

0xc732,	// (0x000736a6) list_cale_ev2_pane

0xc73a,	// (0x000736ae) scroll_pane_cp023_ParamLimits

0x6f1d,	// (0x0006de91) field_cale_ev2_pane_ParamLimits

0x6f1d,	// (0x0006de91) field_cale_ev2_pane

0xeb42,	// (0x00075ab6) field_cale_ev2_pane_g1_ParamLimits

0xeb42,	// (0x00075ab6) field_cale_ev2_pane_g1

0xeb4e,	// (0x00075ac2) field_cale_ev2_pane_g2_ParamLimits

0xeb4e,	// (0x00075ac2) field_cale_ev2_pane_g2

0xeb66,	// (0x00075ada) field_cale_ev2_pane_g3_ParamLimits

0xeb66,	// (0x00075ada) field_cale_ev2_pane_g3

0x0003,

0xf717,	// (0x0007668b) field_cale_ev2_pane_g_ParamLimits

0xf717,	// (0x0007668b) field_cale_ev2_pane_g

0xc927,	// (0x0007389b) field_cale_ev2_pane_t1_ParamLimits

0xc927,	// (0x0007389b) field_cale_ev2_pane_t1

0xc93e,	// (0x000738b2) field_cale_ev2_pane_t2_ParamLimits

0xc93e,	// (0x000738b2) field_cale_ev2_pane_t2

0x0001,

0xf720,	// (0x00076694) field_cale_ev2_pane_t_ParamLimits

0xf720,	// (0x00076694) field_cale_ev2_pane_t

0x5585,	// (0x0006c4f9) main_postcard_pane_g5_ParamLimits

0x5585,	// (0x0006c4f9) main_postcard_pane_g5

0x5599,	// (0x0006c50d) main_postcard_pane_g6_ParamLimits

0x5599,	// (0x0006c50d) main_postcard_pane_g6

0x15f8,	// (0x0006856c) camera2_autofocus_pane_cp_ParamLimits

0x15f8,	// (0x0006856c) camera2_autofocus_pane_cp

0x15f8,	// (0x0006856c) main_mup3_pane

0x6f73,	// (0x0006dee7) main_mup3_pane_g1_ParamLimits

0x6f73,	// (0x0006dee7) main_mup3_pane_g1

0x6f95,	// (0x0006df09) main_mup3_pane_g2_ParamLimits

0x6f95,	// (0x0006df09) main_mup3_pane_g2

0x7008,	// (0x0006df7c) main_mup3_pane_g3_ParamLimits

0x7008,	// (0x0006df7c) main_mup3_pane_g3

0x7046,	// (0x0006dfba) main_mup3_pane_g4_ParamLimits

0x7046,	// (0x0006dfba) main_mup3_pane_g4

0x7084,	// (0x0006dff8) main_mup3_pane_g5_ParamLimits

0x7084,	// (0x0006dff8) main_mup3_pane_g5

0x70c2,	// (0x0006e036) main_mup3_pane_g6_ParamLimits

0x70c2,	// (0x0006e036) main_mup3_pane_g6

0xb4bc,	// (0x00072430) main_mup3_pane_g7_ParamLimits

0xb4bc,	// (0x00072430) main_mup3_pane_g7

0x0007,

0xf730,	// (0x000766a4) main_mup3_pane_g_ParamLimits

0xf730,	// (0x000766a4) main_mup3_pane_g

0x7138,	// (0x0006e0ac) main_mup3_pane_t1_ParamLimits

0x7138,	// (0x0006e0ac) main_mup3_pane_t1

0x719e,	// (0x0006e112) main_mup3_pane_t2_ParamLimits

0x719e,	// (0x0006e112) main_mup3_pane_t2

0x7264,	// (0x0006e1d8) main_mup3_pane_t4_ParamLimits

0x7264,	// (0x0006e1d8) main_mup3_pane_t4

0x72b2,	// (0x0006e226) main_mup3_pane_t5_ParamLimits

0x72b2,	// (0x0006e226) main_mup3_pane_t5

0x7360,	// (0x0006e2d4) main_mup3_pane_t6_ParamLimits

0x7360,	// (0x0006e2d4) main_mup3_pane_t6

0x0005,

0xf741,	// (0x000766b5) main_mup3_pane_t_ParamLimits

0xf741,	// (0x000766b5) main_mup3_pane_t

0x7414,	// (0x0006e388) mup3_progress_pane_ParamLimits

0x7414,	// (0x0006e388) mup3_progress_pane

0x7490,	// (0x0006e404) popup_mup3_control_window_ParamLimits

0x7490,	// (0x0006e404) popup_mup3_control_window

0xc953,	// (0x000738c7) popup_mup3_text_window

0x74be,	// (0x0006e432) mup3_progress_pane_t1

0x74dc,	// (0x0006e450) mup3_progress_pane_t2

0xc95b,	// (0x000738cf) mup3_progress_pane_t3

0x0002,

0xf74e,	// (0x000766c2) mup3_progress_pane_t

0xc978,	// (0x000738ec) mup_progress_pane_cp03

0xad6d,	// (0x00071ce1) bg_tb_trans_pane_cp04

0x74fa,	// (0x0006e46e) mup3_volume_pane

0x7502,	// (0x0006e476) popup_mup3_control_window_g1

0x750b,	// (0x0006e47f) mup3_volume_pane_g1

0x7514,	// (0x0006e488) mup3_volume_pane_g2

0x751d,	// (0x0006e491) mup3_volume_pane_g3

0x0002,

0xf755,	// (0x000766c9) mup3_volume_pane_g

0xad6d,	// (0x00071ce1) bg_tb_trans_pane_cp03

0xc988,	// (0x000738fc) popup_mup3_text_window_g1

0xc990,	// (0x00073904) popup_mup3_text_window_t1

0xb5ca,	// (0x0007253e) list_calc_item_pane_g1_ParamLimits

0xc44a,	// (0x000733be) mup_volume_pane_cp_g1

0x6ee7,	// (0x0006de5b) main_touch_calib_pane_t3

0x6ef9,	// (0x0006de6d) main_touch_calib_pane_t4

0x6f0b,	// (0x0006de7f) main_touch_calib_pane_t5

0xad77,	// (0x00071ceb) aid_cell_size_toolbar2

0xad7f,	// (0x00071cf3) aid_popup3_width_pane

0xad87,	// (0x00071cfb) aid_zoom_text_msg_primary

0xb7dd,	// (0x00072751) vorec_t7

0xb58e,	// (0x00072502) bg_calc_paper_pane_g1_ParamLimits

0xb59a,	// (0x0007250e) bg_calc_paper_pane_g2_ParamLimits

0xb5a6,	// (0x0007251a) bg_calc_paper_pane_g3_ParamLimits

0xb5b2,	// (0x00072526) bg_calc_paper_pane_g4_ParamLimits

0xb5be,	// (0x00072532) bg_calc_paper_pane_g5_ParamLimits

0x3716,	// (0x0006a68a) bg_calc_paper_pane_g6_ParamLimits

0x3725,	// (0x0006a699) bg_calc_paper_pane_g7_ParamLimits

0x3734,	// (0x0006a6a8) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00076087) bg_calc_paper_pane_g_ParamLimits

0x3743,	// (0x0006a6b7) calc_bg_paper_pane_g9_ParamLimits

0x3f1e,	// (0x0006ae92) image_qvga_pane_ParamLimits

0x3f1e,	// (0x0006ae92) image_qvga_pane

0xb434,	// (0x000723a8) bg_popup_sub_pane_cp04_ParamLimits

0x1731,	// (0x000686a5) popup_mup_playback_window_g1_ParamLimits

0x173d,	// (0x000686b1) popup_mup_playback_window_t1_ParamLimits

0x1752,	// (0x000686c6) popup_mup_playback_window_t2_ParamLimits

0xf488,	// (0x000763fc) popup_mup_playback_window_t_ParamLimits

0xb4bc,	// (0x00072430) main_mup2_pane_g3_ParamLimits

0xb4bc,	// (0x00072430) main_mup2_pane_g3

0x41ec,	// (0x0006b160) popup_toolbar_window_cp04

0x5d31,	// (0x0006cca5) popup_call2_audio_second_window_g3_ParamLimits

0x5d31,	// (0x0006cca5) popup_call2_audio_second_window_g3

0x616f,	// (0x0006d0e3) popup_call2_audio_first_window_g4_ParamLimits

0x616f,	// (0x0006d0e3) popup_call2_audio_first_window_g4

0xbf35,	// (0x00072ea9) popup_call2_audio_in_window_g4_ParamLimits

0xbf35,	// (0x00072ea9) popup_call2_audio_in_window_g4

0x56ac,	// (0x0006c620) aid_area_sk_bg_cut_ParamLimits

0x56ac,	// (0x0006c620) aid_area_sk_bg_cut

0x1767,	// (0x000686db) aid_area_sk_bg_cut_2_ParamLimits

0x1767,	// (0x000686db) aid_area_sk_bg_cut_2

0xad6d,	// (0x00071ce1) aid_placing_details_win

0xad6d,	// (0x00071ce1) aid_placing_details_win_2

0xb4ae,	// (0x00072422) camera2_autofocus_pane_g1_ParamLimits

0x3486,	// (0x0006a3fa) popup_fixed_preview_cale_window_ParamLimits

0x3486,	// (0x0006a3fa) popup_fixed_preview_cale_window

0x1536,	// (0x000684aa) navi_slider_pane_g3

0x153f,	// (0x000684b3) navi_slider_pane_g4

0x1548,	// (0x000684bc) navi_slider_pane_g5

0x1536,	// (0x000684aa) navi_slider_pane_g6

0xea3f,	// (0x000759b3) navi_slider_pane_g7

0x1668,	// (0x000685dc) mup_scale_pane_g3

0x1671,	// (0x000685e5) mup_scale_pane_g4

0x167a,	// (0x000685ee) mup_scale_pane_g5

0x546e,	// (0x0006c3e2) mup_scale_pane_g6

0x5477,	// (0x0006c3eb) mup_scale_pane_g7

0xb80f,	// (0x00072783) cams2_slider_pane_g3

0xb80f,	// (0x00072783) cams2_slider_pane_g4

0xb80f,	// (0x00072783) cams2_slider_pane_g5

0xb80f,	// (0x00072783) cams2_slider_pane_g6

0xb80f,	// (0x00072783) cams2_slider_pane_g7

0xb80f,	// (0x00072783) camera2_autofocus_pane_cp_g1

0xc2ee,	// (0x00073262) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2ee,	// (0x00073262) bg_popup_preview_window_pane_cp02

0xc99e,	// (0x00073912) list_fp_cale_pane_ParamLimits

0xc99e,	// (0x00073912) list_fp_cale_pane

0xc9aa,	// (0x0007391e) popup_fixed_preview_cale_window_t1_ParamLimits

0xc9aa,	// (0x0007391e) popup_fixed_preview_cale_window_t1

0x7526,	// (0x0006e49a) popup_fixed_preview_cale_window_t2_ParamLimits

0x7526,	// (0x0006e49a) popup_fixed_preview_cale_window_t2

0x753b,	// (0x0006e4af) popup_fixed_preview_cale_window_t3_ParamLimits

0x753b,	// (0x0006e4af) popup_fixed_preview_cale_window_t3

0x0002,

0xf75c,	// (0x000766d0) popup_fixed_preview_cale_window_t_ParamLimits

0xf75c,	// (0x000766d0) popup_fixed_preview_cale_window_t

0x7550,	// (0x0006e4c4) list_single_fp_cale_pane_ParamLimits

0x7550,	// (0x0006e4c4) list_single_fp_cale_pane

0xc9c8,	// (0x0007393c) list_single_fp_cale_pane_g1_ParamLimits

0xc9c8,	// (0x0007393c) list_single_fp_cale_pane_g1

0xc9d4,	// (0x00073948) list_single_fp_cale_pane_g2_ParamLimits

0xc9d4,	// (0x00073948) list_single_fp_cale_pane_g2

0x0002,

0xf763,	// (0x000766d7) list_single_fp_cale_pane_g_ParamLimits

0xf763,	// (0x000766d7) list_single_fp_cale_pane_g

0xc9ed,	// (0x00073961) list_single_fp_cale_pane_t1_ParamLimits

0xc9ed,	// (0x00073961) list_single_fp_cale_pane_t1

0xc9ff,	// (0x00073973) list_single_fp_cale_pane_t2_ParamLimits

0xc9ff,	// (0x00073973) list_single_fp_cale_pane_t2

0x0001,

0xf76a,	// (0x000766de) list_single_fp_cale_pane_t_ParamLimits

0xf76a,	// (0x000766de) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xad6d,	// (0x00071ce1) main_dialer_pane

0x7564,	// (0x0006e4d8) aid_cell_size_keypad

0xad6d,	// (0x00071ce1) dialer_ne_pane

0xad6d,	// (0x00071ce1) grid_dialer_command_1_pane

0xad6d,	// (0x00071ce1) grid_dialer_command_2_pane

0xad6d,	// (0x00071ce1) grid_dialer_keypad_pane

0x756e,	// (0x0006e4e2) bg_popup_call_pane_cp06_ParamLimits

0x756e,	// (0x0006e4e2) bg_popup_call_pane_cp06

0x756e,	// (0x0006e4e2) dialer_ne_clear_pane_ParamLimits

0x756e,	// (0x0006e4e2) dialer_ne_clear_pane

0xb80f,	// (0x00072783) dialer_ne_pane_g1

0xbbcf,	// (0x00072b43) dialer_ne_pane_t1_ParamLimits

0xbbcf,	// (0x00072b43) dialer_ne_pane_t1

0x757c,	// (0x0006e4f0) dialer_ne_pane_t2_ParamLimits

0x757c,	// (0x0006e4f0) dialer_ne_pane_t2

0x75a4,	// (0x0006e518) dialer_ne_pane_t3_ParamLimits

0x75a4,	// (0x0006e518) dialer_ne_pane_t3

0x0002,

0xf76f,	// (0x000766e3) dialer_ne_pane_t_ParamLimits

0xf76f,	// (0x000766e3) dialer_ne_pane_t

0x75a4,	// (0x0006e518) dialer_ne_pane_t3_copy1_ParamLimits

0x75a4,	// (0x0006e518) dialer_ne_pane_t3_copy1

0x75d1,	// (0x0006e545) cell_dialer_keypad_pane_ParamLimits

0x75d1,	// (0x0006e545) cell_dialer_keypad_pane

0x75d9,	// (0x0006e54d) cell_dialer_command_1_pane_ParamLimits

0x75d9,	// (0x0006e54d) cell_dialer_command_1_pane

0x75d1,	// (0x0006e545) cell_dialer_command_2_pane_ParamLimits

0x75d1,	// (0x0006e545) cell_dialer_command_2_pane

0x15f8,	// (0x0006856c) bg_button_pane_cp02_ParamLimits

0x15f8,	// (0x0006856c) bg_button_pane_cp02

0xb4ae,	// (0x00072422) cell_dialer_keypad_pane_g1_ParamLimits

0xb4ae,	// (0x00072422) cell_dialer_keypad_pane_g1

0x15f8,	// (0x0006856c) bg_button_pane_cp03_ParamLimits

0x15f8,	// (0x0006856c) bg_button_pane_cp03

0xb4ae,	// (0x00072422) cell_dialer_command_1_pane_g1_ParamLimits

0xb4ae,	// (0x00072422) cell_dialer_command_1_pane_g1

0xad6d,	// (0x00071ce1) bg_button_pane_cp04

0xb80f,	// (0x00072783) cell_dialer_command_2_pane_g1

0xad6d,	// (0x00071ce1) bg_button_pane_cp06

0xb80f,	// (0x00072783) dialer_ne_clear_pane_g1

0x1441,	// (0x000683b5) navi_pane_g2

0x5274,	// (0x0006c1e8) navi_pane_g3

0x0002,

0xf38b,	// (0x000762ff) navi_pane_g

0x14ce,	// (0x00068442) navi_pane_mv_g2

0x14f5,	// (0x00068469) navi_pane_mv_g5

0x5291,	// (0x0006c205) navi_pane_mv_t1

0xb546,	// (0x000724ba) main_clock2_pane

0x7627,	// (0x0006e59b) main_clock2_list_pane_ParamLimits

0x7627,	// (0x0006e59b) main_clock2_list_pane

0x7659,	// (0x0006e5cd) main_clock2_pane_t1_ParamLimits

0x7659,	// (0x0006e5cd) main_clock2_pane_t1

0x7693,	// (0x0006e607) main_clock2_pane_t2_ParamLimits

0x7693,	// (0x0006e607) main_clock2_pane_t2

0x0004,

0xf77b,	// (0x000766ef) main_clock2_pane_t_ParamLimits

0xf77b,	// (0x000766ef) main_clock2_pane_t

0x7727,	// (0x0006e69b) popup_clock_analogue_window_cp03_ParamLimits

0x7727,	// (0x0006e69b) popup_clock_analogue_window_cp03

0x774c,	// (0x0006e6c0) popup_clock_digital_window_cp02_ParamLimits

0x774c,	// (0x0006e6c0) popup_clock_digital_window_cp02

0x77bd,	// (0x0006e731) main_clock2_list_single_pane_ParamLimits

0x77bd,	// (0x0006e731) main_clock2_list_single_pane

0xb7ab,	// (0x0007271f) list_highlight_pane_cp05

0xca62,	// (0x000739d6) main_clock2_list_single_pane_t1

0x41ec,	// (0x0006b160) popup_toolbar_window_cp04_ParamLimits

0xb4bc,	// (0x00072430) camera2_autofocus_pane_g2_ParamLimits

0xb4bc,	// (0x00072430) camera2_autofocus_pane_g2

0xb4bc,	// (0x00072430) camera2_autofocus_pane_g3_ParamLimits

0xb4bc,	// (0x00072430) camera2_autofocus_pane_g3

0xb4bc,	// (0x00072430) camera2_autofocus_pane_g4_ParamLimits

0xb4bc,	// (0x00072430) camera2_autofocus_pane_g4

0xb4bc,	// (0x00072430) camera2_autofocus_pane_g5_ParamLimits

0xb4bc,	// (0x00072430) camera2_autofocus_pane_g5

0x0004,

0xf6bf,	// (0x00076633) camera2_autofocus_pane_g_ParamLimits

0xf6bf,	// (0x00076633) camera2_autofocus_pane_g

0x6f35,	// (0x0006dea9) camera2_autofocus_pane_cp_g2

0x6f3d,	// (0x0006deb1) camera2_autofocus_pane_cp_g3

0x6f45,	// (0x0006deb9) camera2_autofocus_pane_cp_g4

0x6f4d,	// (0x0006dec1) camera2_autofocus_pane_cp_g5

0x0004,

0xf725,	// (0x00076699) camera2_autofocus_pane_cp_g

0xad6d,	// (0x00071ce1) popup_dialer_spcha_window

0xad6d,	// (0x00071ce1) bg_popup_sub_pane_cp07

0xad6d,	// (0x00071ce1) list_spcha_pane

0xad6d,	// (0x00071ce1) list_single_spcha_pane_ParamLimits

0xad6d,	// (0x00071ce1) list_single_spcha_pane

0xad6d,	// (0x00071ce1) list_highlight_pane_cp06

0xca70,	// (0x000739e4) list_single_spcha_pane_t1

0xbcdf,	// (0x00072c53) popup_call2_audio_out_window_g4_ParamLimits

0xbcdf,	// (0x00072c53) popup_call2_audio_out_window_g4

0xad6d,	// (0x00071ce1) main_imed2_pane

0xeaa2,	// (0x00075a16) popup_imed_adjust2_window

0x6898,	// (0x0006d80c) popup_imed_trans_window_ParamLimits

0x6898,	// (0x0006d80c) popup_imed_trans_window

0xc51d,	// (0x00073491) popup_blid_sat_info2_window_t1

0xc52b,	// (0x0007349f) popup_blid_sat_info2_window_t2

0x000a,

0xf654,	// (0x000765c8) popup_blid_sat_info2_window_t

0x7867,	// (0x0006e7db) aid_size_cell_colour_35

0x7887,	// (0x0006e7fb) aid_size_cell_colour_112

0x78a7,	// (0x0006e81b) aid_size_cell_effect

0x1820,	// (0x00068794) bg_tb_trans_pane_cp02

0x0ff0,	// (0x00067f64) heading_imed_pane

0x78c7,	// (0x0006e83b) listscroll_imed_pane

0xca80,	// (0x000739f4) heading_imed_pane_g1

0xca88,	// (0x000739fc) heading_imed_pane_t1

0xca96,	// (0x00073a0a) grid_imed_colour_35_pane_ParamLimits

0xca96,	// (0x00073a0a) grid_imed_colour_35_pane

0x78d3,	// (0x0006e847) grid_imed_effect_pane

0xcaa9,	// (0x00073a1d) list_imed_aspect_pane

0x78e6,	// (0x0006e85a) scroll_pane_cp027_ParamLimits

0x78e6,	// (0x0006e85a) scroll_pane_cp027

0x78f2,	// (0x0006e866) cell_imed_effect_pane_ParamLimits

0x78f2,	// (0x0006e866) cell_imed_effect_pane

0xcab1,	// (0x00073a25) cell_imed_colour_pane_ParamLimits

0xcab1,	// (0x00073a25) cell_imed_colour_pane

0xcaeb,	// (0x00073a5f) cell_imed_colour_pane_g1_ParamLimits

0xcaeb,	// (0x00073a5f) cell_imed_colour_pane_g1

0xcafc,	// (0x00073a70) hgihlgiht_grid_pane_cp016_ParamLimits

0xcafc,	// (0x00073a70) hgihlgiht_grid_pane_cp016

0x7917,	// (0x0006e88b) cell_imed_effect_pane_g1

0x791f,	// (0x0006e893) grid_highlight_pane_cp017

0xcb0d,	// (0x00073a81) list_imed_single_pane_ParamLimits

0xcb0d,	// (0x00073a81) list_imed_single_pane

0xad6d,	// (0x00071ce1) list_highlight_pane_cp07

0xcb20,	// (0x00073a94) list_imed_aspect_pane_comp1_t1

0x1820,	// (0x00068794) bg_tb_trans_pane_cp05

0xcb40,	// (0x00073ab4) popup_imed_adjust2_window_g1

0xcb67,	// (0x00073adb) popup_imed_adjust2_window_t1

0xcb7f,	// (0x00073af3) slider_imed_adjust_pane

0xcb93,	// (0x00073b07) slider_imed_adjust_pane_g1

0xcba3,	// (0x00073b17) slider_imed_adjust_pane_g2

0xcbb3,	// (0x00073b27) slider_imed_adjust_pane_g3

0xcbc4,	// (0x00073b38) slider_imed_adjust_pane_g4

0x0003,

0xf798,	// (0x0007670c) slider_imed_adjust_pane_g

0x7928,	// (0x0006e89c) aid_size_cell_clipart2

0x7934,	// (0x0006e8a8) grid_imed_clipart_pane

0xcbd5,	// (0x00073b49) scroll_pane_cp031

0x793e,	// (0x0006e8b2) cell_imed_clipart_pane_ParamLimits

0x793e,	// (0x0006e8b2) cell_imed_clipart_pane

0x7956,	// (0x0006e8ca) cell_imed_clipart_pane_g1

0xad6d,	// (0x00071ce1) grid_highlight_pane_cp014

0x763a,	// (0x0006e5ae) main_clock2_pane_g1_ParamLimits

0x763a,	// (0x0006e5ae) main_clock2_pane_g1

0x7768,	// (0x0006e6dc) aid_call2_pane_cp10

0x777a,	// (0x0006e6ee) aid_call_pane_cp10

0x13d0,	// (0x00068344) popup_clock_analogue_window_cp10_g1

0x13d0,	// (0x00068344) popup_clock_analogue_window_cp10_g2

0x778c,	// (0x0006e700) popup_clock_analogue_window_cp10_g3

0x778c,	// (0x0006e700) popup_clock_analogue_window_cp10_g4

0x13d0,	// (0x00068344) popup_clock_analogue_window_cp10_g5

0x0004,

0xf786,	// (0x000766fa) popup_clock_analogue_window_cp10_g

0x779e,	// (0x0006e712) popup_clock_analogue_window_cp10_t1

0x77cf,	// (0x0006e743) clock_digital_number_pane_cp10_ParamLimits

0x77cf,	// (0x0006e743) clock_digital_number_pane_cp10

0x77e7,	// (0x0006e75b) clock_digital_number_pane_cp11_ParamLimits

0x77e7,	// (0x0006e75b) clock_digital_number_pane_cp11

0x77ff,	// (0x0006e773) clock_digital_number_pane_cp12_ParamLimits

0x77ff,	// (0x0006e773) clock_digital_number_pane_cp12

0x7817,	// (0x0006e78b) clock_digital_number_pane_cp13_ParamLimits

0x7817,	// (0x0006e78b) clock_digital_number_pane_cp13

0x782f,	// (0x0006e7a3) clock_digital_separator_pane_cp10_ParamLimits

0x782f,	// (0x0006e7a3) clock_digital_separator_pane_cp10

0x7847,	// (0x0006e7bb) popup_clock_digital_window_cp02_t1_ParamLimits

0x7847,	// (0x0006e7bb) popup_clock_digital_window_cp02_t1

0xb42c,	// (0x000723a0) clock_digital_number_pane_cp10_g1

0xb42c,	// (0x000723a0) clock_digital_number_pane_cp10_g2

0x0001,

0xf7a1,	// (0x00076715) clock_digital_number_pane_cp10_g

0xb42c,	// (0x000723a0) clock_digital_separator_pane_cp10_g1

0xb42c,	// (0x000723a0) clock_digital_separator_pane_g2_cp10

0x14fd,	// (0x00068471) navi_pane_vded_g4

0x1506,	// (0x0006847a) navi_pane_vded_g5

0x150f,	// (0x00068483) navi_pane_vded_t1

0xad6d,	// (0x00071ce1) main_vded_pane

0x795f,	// (0x0006e8d3) main_vded_pane_g1

0x7969,	// (0x0006e8dd) main_vded_pane_g2

0x7971,	// (0x0006e8e5) main_vded_pane_g3

0x0002,

0xf7a6,	// (0x0007671a) main_vded_pane_g

0x7979,	// (0x0006e8ed) main_vded_pane_t1

0x7987,	// (0x0006e8fb) main_vded_pane_t2

0x0001,

0xf7ad,	// (0x00076721) main_vded_pane_t

0x7995,	// (0x0006e909) vded_slider_pane

0x799d,	// (0x0006e911) vded_video_pane

0xcbdd,	// (0x00073b51) vded_video_pane_g1

0x79a5,	// (0x0006e919) vded_video_pane_g2

0xb80f,	// (0x00072783) vded_video_pane_g3

0x0002,

0xf7b2,	// (0x00076726) vded_video_pane_g

0xcbe7,	// (0x00073b5b) vded_slider_pane_g1

0xc44a,	// (0x000733be) vded_slider_pane_g2

0xcbf0,	// (0x00073b64) vded_slider_pane_g3

0xcbf9,	// (0x00073b6d) vded_slider_pane_g4

0xcc02,	// (0x00073b76) vded_slider_pane_g5

0x0004,

0xf7b9,	// (0x0007672d) vded_slider_pane_g

0x747a,	// (0x0006e3ee) mup3_rocker_pane_ParamLimits

0x747a,	// (0x0006e3ee) mup3_rocker_pane

0x79ae,	// (0x0006e922) mup3_control_keys_pane_g1

0x79b6,	// (0x0006e92a) mup3_control_keys_pane_g2

0x79be,	// (0x0006e932) mup3_control_keys_pane_g3

0x79c6,	// (0x0006e93a) mup3_control_keys_pane_g4

0x0003,

0xf7c4,	// (0x00076738) mup3_control_keys_pane_g

0x34b9,	// (0x0006a42d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x34b9,	// (0x0006a42d) popup_toolbar2_fixed_window_cp01

0x74a8,	// (0x0006e41c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x74a8,	// (0x0006e41c) popup_toolbar2_fixed_window_cp02

0x5ea3,	// (0x0006ce17) popup_call2_audio_second_window_t4_ParamLimits

0x5ea3,	// (0x0006ce17) popup_call2_audio_second_window_t4

0x6405,	// (0x0006d379) popup_call2_audio_first_window_t6_ParamLimits

0x6405,	// (0x0006d379) popup_call2_audio_first_window_t6

0xbde2,	// (0x00072d56) popup_call2_audio_out_window_t6_ParamLimits

0xbde2,	// (0x00072d56) popup_call2_audio_out_window_t6

0xad6d,	// (0x00071ce1) main_vitu_pane

0x15f8,	// (0x0006856c) aid_size_cell_itu_ParamLimits

0x15f8,	// (0x0006856c) aid_size_cell_itu

0x15f8,	// (0x0006856c) bg_popup_window_pane_cp08_ParamLimits

0x15f8,	// (0x0006856c) bg_popup_window_pane_cp08

0x15f8,	// (0x0006856c) field_vitu_entry_pane_ParamLimits

0x15f8,	// (0x0006856c) field_vitu_entry_pane

0x15f8,	// (0x0006856c) grid_vitu_function_pane_ParamLimits

0x15f8,	// (0x0006856c) grid_vitu_function_pane

0x15f8,	// (0x0006856c) grid_vitu_itu_pane_ParamLimits

0x15f8,	// (0x0006856c) grid_vitu_itu_pane

0x79d6,	// (0x0006e94a) cell_vitu_itu_pane_ParamLimits

0x79d6,	// (0x0006e94a) cell_vitu_itu_pane

0x15f8,	// (0x0006856c) cell_vitu_function_pane_ParamLimits

0x15f8,	// (0x0006856c) cell_vitu_function_pane

0x15f8,	// (0x0006856c) bg_popup_sub_pane_cp08_ParamLimits

0x15f8,	// (0x0006856c) bg_popup_sub_pane_cp08

0x15e4,	// (0x00068558) field_vitu_entry_pane_t1_ParamLimits

0x15e4,	// (0x00068558) field_vitu_entry_pane_t1

0xcc0b,	// (0x00073b7f) field_vitu_entry_pane_t2_ParamLimits

0xcc0b,	// (0x00073b7f) field_vitu_entry_pane_t2

0x0001,

0xf7d2,	// (0x00076746) field_vitu_entry_pane_t_ParamLimits

0xf7d2,	// (0x00076746) field_vitu_entry_pane_t

0xc397,	// (0x0007330b) bg_button_pane_cp05_ParamLimits

0xc397,	// (0x0007330b) bg_button_pane_cp05

0xcc28,	// (0x00073b9c) cell_vitu_itu_pane_g1

0x183c,	// (0x000687b0) cell_vitu_itu_pane_t1_ParamLimits

0x183c,	// (0x000687b0) cell_vitu_itu_pane_t1

0x183c,	// (0x000687b0) cell_vitu_itu_pane_t2_ParamLimits

0x183c,	// (0x000687b0) cell_vitu_itu_pane_t2

0x0002,

0xf7d7,	// (0x0007674b) cell_vitu_itu_pane_t_ParamLimits

0xf7d7,	// (0x0007674b) cell_vitu_itu_pane_t

0xad6d,	// (0x00071ce1) bg_button_pane_cp07

0xb80f,	// (0x00072783) cell_vitu_function_pane_g1

0xb4ec,	// (0x00072460) main_calc_pane_g1

0x331d,	// (0x0006a291) aid_visual_content_pane

0xad6d,	// (0x00071ce1) main_vradio_pane

0xb4ae,	// (0x00072422) main_vradio_pane_g1_ParamLimits

0xb4ae,	// (0x00072422) main_vradio_pane_g1

0xb4bc,	// (0x00072430) main_vradio_pane_g2_ParamLimits

0xb4bc,	// (0x00072430) main_vradio_pane_g2

0x0001,

0xf7de,	// (0x00076752) main_vradio_pane_g_ParamLimits

0xf7de,	// (0x00076752) main_vradio_pane_g

0x15e4,	// (0x00068558) main_vradio_pane_t1_ParamLimits

0x15e4,	// (0x00068558) main_vradio_pane_t1

0x15e4,	// (0x00068558) main_vradio_pane_t2_ParamLimits

0x15e4,	// (0x00068558) main_vradio_pane_t2

0xbbcf,	// (0x00072b43) main_vradio_pane_t3_ParamLimits

0xbbcf,	// (0x00072b43) main_vradio_pane_t3

0x0002,

0xf7e3,	// (0x00076757) main_vradio_pane_t_ParamLimits

0xf7e3,	// (0x00076757) main_vradio_pane_t

0x15f8,	// (0x0006856c) vradio_rocker_control_pane_ParamLimits

0x15f8,	// (0x0006856c) vradio_rocker_control_pane

0x15f8,	// (0x0006856c) vradio_station_info_pane_ParamLimits

0x15f8,	// (0x0006856c) vradio_station_info_pane

0x15f8,	// (0x0006856c) vradio_frequency_info_pane_ParamLimits

0x15f8,	// (0x0006856c) vradio_frequency_info_pane

0xb80f,	// (0x00072783) vradio_station_info_pane_g1

0x183c,	// (0x000687b0) vradio_station_info_pane_t1_ParamLimits

0x183c,	// (0x000687b0) vradio_station_info_pane_t1

0xbbcf,	// (0x00072b43) vradio_station_info_pane_t2_ParamLimits

0xbbcf,	// (0x00072b43) vradio_station_info_pane_t2

0x0001,

0xf7ea,	// (0x0007675e) vradio_station_info_pane_t_ParamLimits

0xf7ea,	// (0x0007675e) vradio_station_info_pane_t

0xad6d,	// (0x00071ce1) vradio_tuning_pane

0x79ea,	// (0x0006e95e) vradio_rocker_control_pane_g1

0xcc44,	// (0x00073bb8) vradio_rocker_control_pane_g2

0x79f2,	// (0x0006e966) vradio_rocker_control_pane_g3

0x79fa,	// (0x0006e96e) vradio_rocker_control_pane_g4

0x7a02,	// (0x0006e976) vradio_rocker_control_pane_g5

0x0004,

0xf7ef,	// (0x00076763) vradio_rocker_control_pane_g

0xb80f,	// (0x00072783) vradio_frequency_info_pane_g1

0x15e4,	// (0x00068558) vradio_frequency_info_pane_t1_ParamLimits

0x15e4,	// (0x00068558) vradio_frequency_info_pane_t1

0x7a0a,	// (0x0006e97e) vradio_tuning_pane_g1

0x7a13,	// (0x0006e987) vradio_tuning_pane_t1

0xad9f,	// (0x00071d13) area_side_right_pane_ParamLimits

0xad9f,	// (0x00071d13) area_side_right_pane

0xc2b5,	// (0x00073229) status_small_pane_g1

0xc2bd,	// (0x00073231) status_small_pane_g2

0xc2c6,	// (0x0007323a) status_small_pane_g3

0xc2cf,	// (0x00073243) status_small_pane_g4

0x0003,

0xf5b6,	// (0x0007652a) status_small_pane_g

0xc2d8,	// (0x0007324c) status_small_pane_t1

0xad6d,	// (0x00071ce1) main_video3_pane

0xcc4c,	// (0x00073bc0) cams_zoom_vslider_pane

0xcc54,	// (0x00073bc8) image3_wide_pane_ParamLimits

0xcc54,	// (0x00073bc8) image3_wide_pane

0xcc6e,	// (0x00073be2) image3_wide_small_pane

0xcc78,	// (0x00073bec) main_video3_pane_g1_ParamLimits

0xcc78,	// (0x00073bec) main_video3_pane_g1

0xcc94,	// (0x00073c08) main_video3_pane_g2_ParamLimits

0xcc94,	// (0x00073c08) main_video3_pane_g2

0x0001,

0xf7fa,	// (0x0007676e) main_video3_pane_g_ParamLimits

0xf7fa,	// (0x0007676e) main_video3_pane_g

0xccb0,	// (0x00073c24) main_video3_pane_t1_ParamLimits

0xccb0,	// (0x00073c24) main_video3_pane_t1

0xccdb,	// (0x00073c4f) main_video3_pane_t2_ParamLimits

0xccdb,	// (0x00073c4f) main_video3_pane_t2

0xcd06,	// (0x00073c7a) main_video3_pane_t3_ParamLimits

0xcd06,	// (0x00073c7a) main_video3_pane_t3

0x0002,

0xf7ff,	// (0x00076773) main_video3_pane_t_ParamLimits

0xf7ff,	// (0x00076773) main_video3_pane_t

0xcd31,	// (0x00073ca5) cams_zoom_vslider_pane_g1

0xcd3a,	// (0x00073cae) cams_zoom_vslider_pane_g2

0x0001,

0xf806,	// (0x0007677a) cams_zoom_vslider_pane_g

0xcd42,	// (0x00073cb6) small_slider_vertical_pane

0xb80f,	// (0x00072783) small_slider_vertical_pane_g1

0xb80f,	// (0x00072783) small_slider_vertical_pane_g2

0xcd4a,	// (0x00073cbe) small_slider_vertical_pane_g3

0x0002,

0xf80b,	// (0x0007677f) small_slider_vertical_pane_g

0xad6d,	// (0x00071ce1) main_hwr_training_pane

0xcd53,	// (0x00073cc7) hwr_training_instruct_pane_ParamLimits

0xcd53,	// (0x00073cc7) hwr_training_instruct_pane

0x7a22,	// (0x0006e996) hwr_training_navi_pane_ParamLimits

0x7a22,	// (0x0006e996) hwr_training_navi_pane

0x7a39,	// (0x0006e9ad) hwr_training_write_pane_ParamLimits

0x7a39,	// (0x0006e9ad) hwr_training_write_pane

0xad6d,	// (0x00071ce1) bg_frame_shadow_pane

0xcd82,	// (0x00073cf6) hwr_training_write_pane_g1

0xcd8a,	// (0x00073cfe) hwr_training_write_pane_g2

0xcd92,	// (0x00073d06) hwr_training_write_pane_g3

0xcd9a,	// (0x00073d0e) hwr_training_write_pane_g4

0xcda2,	// (0x00073d16) hwr_training_write_pane_g5

0xcdaa,	// (0x00073d1e) hwr_training_write_pane_g6

0xcdb2,	// (0x00073d26) hwr_training_write_pane_g7

0x0006,

0xf812,	// (0x00076786) hwr_training_write_pane_g

0xeb8a,	// (0x00075afe) hwr_training_navi_pane_g1_ParamLimits

0xeb8a,	// (0x00075afe) hwr_training_navi_pane_g1

0xeb9c,	// (0x00075b10) hwr_training_navi_pane_g2_ParamLimits

0xeb9c,	// (0x00075b10) hwr_training_navi_pane_g2

0xebae,	// (0x00075b22) hwr_training_navi_pane_g3_ParamLimits

0xebae,	// (0x00075b22) hwr_training_navi_pane_g3

0xebbe,	// (0x00075b32) hwr_training_navi_pane_g4_ParamLimits

0xebbe,	// (0x00075b32) hwr_training_navi_pane_g4

0x0004,

0xf821,	// (0x00076795) hwr_training_navi_pane_g_ParamLimits

0xf821,	// (0x00076795) hwr_training_navi_pane_g

0xebcb,	// (0x00075b3f) hwr_training_navi_pane_t1

0x7a79,	// (0x0006e9ed) list_single_hwr_training_instruct_pane_ParamLimits

0x7a79,	// (0x0006e9ed) list_single_hwr_training_instruct_pane

0xcdba,	// (0x00073d2e) list_single_hwr_training_instruct_pane_t1

0xc5f9,	// (0x0007356d) bg_frame_shadow_pane_g1

0xcdc9,	// (0x00073d3d) bg_frame_shadow_pane_g2

0xcdd1,	// (0x00073d45) bg_frame_shadow_pane_g3

0xcdd9,	// (0x00073d4d) bg_frame_shadow_pane_g4

0xcde1,	// (0x00073d55) bg_frame_shadow_pane_g5

0xcde9,	// (0x00073d5d) bg_frame_shadow_pane_g6

0xcdf1,	// (0x00073d65) bg_frame_shadow_pane_g7

0xb65f,	// (0x000725d3) bg_frame_shadow_pane_g8

0x0007,

0xf82c,	// (0x000767a0) bg_frame_shadow_pane_g

0xad6d,	// (0x00071ce1) main_video_tele_dialer_pane

0x7a91,	// (0x0006ea05) aid_size_cell_video_keypad_ParamLimits

0x7a91,	// (0x0006ea05) aid_size_cell_video_keypad

0x7aab,	// (0x0006ea1f) grid_video_dialer_keypad_pane_ParamLimits

0x7aab,	// (0x0006ea1f) grid_video_dialer_keypad_pane

0x7aed,	// (0x0006ea61) video_down_pane_cp_ParamLimits

0x7aed,	// (0x0006ea61) video_down_pane_cp

0x7b1d,	// (0x0006ea91) cell_video_dialer_keypad_pane_ParamLimits

0x7b1d,	// (0x0006ea91) cell_video_dialer_keypad_pane

0xcdf9,	// (0x00073d6d) bg_button_pane_cp08_ParamLimits

0xcdf9,	// (0x00073d6d) bg_button_pane_cp08

0x7b3f,	// (0x0006eab3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7b3f,	// (0x0006eab3) cell_video_dialer_keypad_pane_g1

0x7464,	// (0x0006e3d8) mup3_rocker2_pane_ParamLimits

0x7464,	// (0x0006e3d8) mup3_rocker2_pane

0xb80f,	// (0x00072783) mup3_rocker2_pane_g1

0x6791,	// (0x0006d705) main_dialer2_pane

0xad6d,	// (0x00071ce1) main_mp4_pane

0xebf7,	// (0x00075b6b) main_mp4_pane_g1_ParamLimits

0xebf7,	// (0x00075b6b) main_mp4_pane_g1

0xebf7,	// (0x00075b6b) main_mp4_pane_g2_ParamLimits

0xebf7,	// (0x00075b6b) main_mp4_pane_g2

0x7b7a,	// (0x0006eaee) main_mp4_pane_g3_ParamLimits

0x7b7a,	// (0x0006eaee) main_mp4_pane_g3

0xec05,	// (0x00075b79) main_mp4_pane_g4_ParamLimits

0xec05,	// (0x00075b79) main_mp4_pane_g4

0xec33,	// (0x00075ba7) main_mp4_pane_g5_ParamLimits

0xec33,	// (0x00075ba7) main_mp4_pane_g5

0x0007,

0xf84c,	// (0x000767c0) main_mp4_pane_g_ParamLimits

0xf84c,	// (0x000767c0) main_mp4_pane_g

0xeca7,	// (0x00075c1b) main_mp4_pane_t1_ParamLimits

0xeca7,	// (0x00075c1b) main_mp4_pane_t1

0xecff,	// (0x00075c73) main_mp4_pane_t2_ParamLimits

0xecff,	// (0x00075c73) main_mp4_pane_t2

0xce05,	// (0x00073d79) main_mp4_pane_t3_ParamLimits

0xce05,	// (0x00073d79) main_mp4_pane_t3

0xed51,	// (0x00075cc5) main_mp4_pane_t4_ParamLimits

0xed51,	// (0x00075cc5) main_mp4_pane_t4

0x0003,

0xf85d,	// (0x000767d1) main_mp4_pane_t_ParamLimits

0xf85d,	// (0x000767d1) main_mp4_pane_t

0xed91,	// (0x00075d05) mp4_progress_pane_ParamLimits

0xed91,	// (0x00075d05) mp4_progress_pane

0xedd5,	// (0x00075d49) mp4_rocker_pane_ParamLimits

0xedd5,	// (0x00075d49) mp4_rocker_pane

0xce33,	// (0x00073da7) mp4_progress_pane_t1

0xce4a,	// (0x00073dbe) mp4_progress_pane_t2

0x0001,

0xf866,	// (0x000767da) mp4_progress_pane_t

0xce61,	// (0x00073dd5) mup_progress_pane_cp04

0xb80f,	// (0x00072783) mp4_rocker_pane_g1

0x7baa,	// (0x0006eb1e) aid_cell_size_keypad2_ParamLimits

0x7baa,	// (0x0006eb1e) aid_cell_size_keypad2

0x7bc2,	// (0x0006eb36) dialer2_ne_pane_ParamLimits

0x7bc2,	// (0x0006eb36) dialer2_ne_pane

0x15f8,	// (0x0006856c) grid_dialer2_keypad_pane_ParamLimits

0x15f8,	// (0x0006856c) grid_dialer2_keypad_pane

0xc397,	// (0x0007330b) bg_popup_call_pane_cp07_ParamLimits

0xc397,	// (0x0007330b) bg_popup_call_pane_cp07

0xb4d8,	// (0x0007244c) dialer2_ne_pane_t1_ParamLimits

0xb4d8,	// (0x0007244c) dialer2_ne_pane_t1

0x7bdd,	// (0x0006eb51) cell_dialer2_keypad_pane_ParamLimits

0x7bdd,	// (0x0006eb51) cell_dialer2_keypad_pane

0xce6d,	// (0x00073de1) bg_button_pane_pane_cp04_ParamLimits

0xce6d,	// (0x00073de1) bg_button_pane_pane_cp04

0xb4ae,	// (0x00072422) cell_dialer2_keypad_pane_g1_ParamLimits

0xb4ae,	// (0x00072422) cell_dialer2_keypad_pane_g1

0x40da,	// (0x0006b04e) aid_placing_vt_set_content_ParamLimits

0x40da,	// (0x0006b04e) aid_placing_vt_set_content

0x40fc,	// (0x0006b070) aid_placing_vt_set_title_ParamLimits

0x40fc,	// (0x0006b070) aid_placing_vt_set_title

0xad6d,	// (0x00071ce1) main_image3_pane

0x7c33,	// (0x0006eba7) area_side_right_pane_cp01_ParamLimits

0x7c33,	// (0x0006eba7) area_side_right_pane_cp01

0xebf7,	// (0x00075b6b) main_image3_pane_g1_ParamLimits

0xebf7,	// (0x00075b6b) main_image3_pane_g1

0x7c4a,	// (0x0006ebbe) main_image3_pane_g2_ParamLimits

0x7c4a,	// (0x0006ebbe) main_image3_pane_g2

0x7c70,	// (0x0006ebe4) main_image3_pane_g3_ParamLimits

0x7c70,	// (0x0006ebe4) main_image3_pane_g3

0x7c96,	// (0x0006ec0a) main_image3_pane_g4_ParamLimits

0x7c96,	// (0x0006ec0a) main_image3_pane_g4

0x0003,

0xf875,	// (0x000767e9) main_image3_pane_g_ParamLimits

0xf875,	// (0x000767e9) main_image3_pane_g

0x7cbc,	// (0x0006ec30) main_image3_pane_t1_ParamLimits

0x7cbc,	// (0x0006ec30) main_image3_pane_t1

0x7d14,	// (0x0006ec88) main_image3_pane_t2_ParamLimits

0x7d14,	// (0x0006ec88) main_image3_pane_t2

0x7d66,	// (0x0006ecda) main_image3_pane_t3_ParamLimits

0x7d66,	// (0x0006ecda) main_image3_pane_t3

0x0003,

0xf87e,	// (0x000767f2) main_image3_pane_t_ParamLimits

0xf87e,	// (0x000767f2) main_image3_pane_t

0x15f8,	// (0x0006856c) grid_sctrl_middle_pane_cp01_ParamLimits

0x15f8,	// (0x0006856c) grid_sctrl_middle_pane_cp01

0x7de6,	// (0x0006ed5a) cell_sctrl_middle_pane_cp01_ParamLimits

0x7de6,	// (0x0006ed5a) cell_sctrl_middle_pane_cp01

0x7e03,	// (0x0006ed77) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7e03,	// (0x0006ed77) cell_sctrl_middle_pane_cp01_g1

0xad6d,	// (0x00071ce1) main_call4_pane

0x7e19,	// (0x0006ed8d) aid_size_button_call4_ParamLimits

0x7e19,	// (0x0006ed8d) aid_size_button_call4

0x7e46,	// (0x0006edba) call4_windows_pane_ParamLimits

0x7e46,	// (0x0006edba) call4_windows_pane

0x7e5c,	// (0x0006edd0) grid_call4_button_pane_ParamLimits

0x7e5c,	// (0x0006edd0) grid_call4_button_pane

0xcea1,	// (0x00073e15) call4_windows_conf_pane

0xceb4,	// (0x00073e28) popup_call4_audio_first_window_ParamLimits

0xceb4,	// (0x00073e28) popup_call4_audio_first_window

0xcef4,	// (0x00073e68) popup_call4_audio_second_window_ParamLimits

0xcef4,	// (0x00073e68) popup_call4_audio_second_window

0xcf06,	// (0x00073e7a) popup_call4_audio_wait_window_ParamLimits

0xcf06,	// (0x00073e7a) popup_call4_audio_wait_window

0x7e83,	// (0x0006edf7) cell_call4_button_pane_ParamLimits

0x7e83,	// (0x0006edf7) cell_call4_button_pane

0x7ea8,	// (0x0006ee1c) bg_button_pane_cp09_ParamLimits

0x7ea8,	// (0x0006ee1c) bg_button_pane_cp09

0x7eb4,	// (0x0006ee28) cell_call4_button_pane_g1_ParamLimits

0x7eb4,	// (0x0006ee28) cell_call4_button_pane_g1

0x7eda,	// (0x0006ee4e) cell_call4_button_pane_t1_ParamLimits

0x7eda,	// (0x0006ee4e) cell_call4_button_pane_t1

0xcf1a,	// (0x00073e8e) popup_call4_audio_conf_window_ParamLimits

0xcf1a,	// (0x00073e8e) popup_call4_audio_conf_window

0x74be,	// (0x0006e432) mup3_progress_pane_t1_ParamLimits

0x74dc,	// (0x0006e450) mup3_progress_pane_t2_ParamLimits

0xc95b,	// (0x000738cf) mup3_progress_pane_t3_ParamLimits

0xf74e,	// (0x000766c2) mup3_progress_pane_t_ParamLimits

0xc978,	// (0x000738ec) mup_progress_pane_cp03_ParamLimits

0x79ce,	// (0x0006e942) mup3_control_keys_pane_g4_copy1

0xedbf,	// (0x00075d33) mp4_rocker2_pane_ParamLimits

0xedbf,	// (0x00075d33) mp4_rocker2_pane

0xcf2e,	// (0x00073ea2) mp4_rocker2_pane_g1

0xcf36,	// (0x00073eaa) mp4_rocker2_pane_g2

0xee57,	// (0x00075dcb) mp4_rocker2_pane_g3

0xee5f,	// (0x00075dd3) mp4_rocker2_pane_g4

0xee67,	// (0x00075ddb) mp4_rocker2_pane_g5

0x0004,

0xf887,	// (0x000767fb) mp4_rocker2_pane_g

0xad6d,	// (0x00071ce1) main_camera4_pane

0xad6d,	// (0x00071ce1) main_video4_pane

0x7abf,	// (0x0006ea33) main_video_tele_dialer_pane_t1_ParamLimits

0x7abf,	// (0x0006ea33) main_video_tele_dialer_pane_t1

0x7ad6,	// (0x0006ea4a) main_video_tele_dialer_pane_t2_ParamLimits

0x7ad6,	// (0x0006ea4a) main_video_tele_dialer_pane_t2

0x0001,

0xf83d,	// (0x000767b1) main_video_tele_dialer_pane_t_ParamLimits

0xf83d,	// (0x000767b1) main_video_tele_dialer_pane_t

0x7f18,	// (0x0006ee8c) cam4_autofocus_pane_ParamLimits

0x7f18,	// (0x0006ee8c) cam4_autofocus_pane

0x7f2c,	// (0x0006eea0) cam4_image_uncrop_pane_ParamLimits

0x7f2c,	// (0x0006eea0) cam4_image_uncrop_pane

0x7f43,	// (0x0006eeb7) cam4_indicators_pane_ParamLimits

0x7f43,	// (0x0006eeb7) cam4_indicators_pane

0x7f67,	// (0x0006eedb) main_camera4_pane_g1_ParamLimits

0x7f67,	// (0x0006eedb) main_camera4_pane_g1

0x7f73,	// (0x0006eee7) main_camera4_pane_g2_ParamLimits

0x7f73,	// (0x0006eee7) main_camera4_pane_g2

0x7f73,	// (0x0006eee7) main_camera4_pane_g3_ParamLimits

0x7f73,	// (0x0006eee7) main_camera4_pane_g3

0x7f7f,	// (0x0006eef3) main_camera4_pane_g4_ParamLimits

0x7f7f,	// (0x0006eef3) main_camera4_pane_g4

0x7f8b,	// (0x0006eeff) main_camera4_pane_g5_ParamLimits

0x7f8b,	// (0x0006eeff) main_camera4_pane_g5

0x0005,

0xf892,	// (0x00076806) main_camera4_pane_g_ParamLimits

0xf892,	// (0x00076806) main_camera4_pane_g

0x7fa8,	// (0x0006ef1c) main_camera4_pane_t1_ParamLimits

0x7fa8,	// (0x0006ef1c) main_camera4_pane_t1

0xb4ae,	// (0x00072422) bg_tb_trans_pane_cp06

0xee91,	// (0x00075e05) cam4_indicators_pane_g1

0xeea1,	// (0x00075e15) cam4_indicators_pane_g2

0x0002,

0xf8ad,	// (0x00076821) cam4_indicators_pane_g

0xeec1,	// (0x00075e35) cam4_indicators_pane_t1

0x7ffd,	// (0x0006ef71) main_video4_pane_g1_ParamLimits

0x7ffd,	// (0x0006ef71) main_video4_pane_g1

0x800f,	// (0x0006ef83) main_video4_pane_g2_ParamLimits

0x800f,	// (0x0006ef83) main_video4_pane_g2

0x800f,	// (0x0006ef83) main_video4_pane_g3_ParamLimits

0x800f,	// (0x0006ef83) main_video4_pane_g3

0x801e,	// (0x0006ef92) main_video4_pane_g4_ParamLimits

0x801e,	// (0x0006ef92) main_video4_pane_g4

0x0004,

0xf8b4,	// (0x00076828) main_video4_pane_g_ParamLimits

0xf8b4,	// (0x00076828) main_video4_pane_g

0x803c,	// (0x0006efb0) vid4_indicators_pane_ParamLimits

0x803c,	// (0x0006efb0) vid4_indicators_pane

0x8064,	// (0x0006efd8) video4_image_uncrop_cif_pane_ParamLimits

0x8064,	// (0x0006efd8) video4_image_uncrop_cif_pane

0x807c,	// (0x0006eff0) video4_image_uncrop_nhd_pane_ParamLimits

0x807c,	// (0x0006eff0) video4_image_uncrop_nhd_pane

0x8090,	// (0x0006f004) video4_image_uncrop_vga_pane_ParamLimits

0x8090,	// (0x0006f004) video4_image_uncrop_vga_pane

0x15f8,	// (0x0006856c) bg_tb_trans_pane_cp07

0xee91,	// (0x00075e05) vid4_indicators_pane_g1

0xeee3,	// (0x00075e57) vid4_indicators_pane_g2

0xeef3,	// (0x00075e67) vid4_indicators_pane_g3

0x0004,

0xf8bf,	// (0x00076833) vid4_indicators_pane_g

0xef20,	// (0x00075e94) vid4_indicators_pane_t1

0x80a8,	// (0x0006f01c) cam4_autofocus_pane_g1

0x80b0,	// (0x0006f024) cam4_autofocus_pane_g2

0x80b8,	// (0x0006f02c) cam4_autofocus_pane_g3

0x0002,

0xf8ca,	// (0x0007683e) cam4_autofocus_pane_g

0x80c0,	// (0x0006f034) cam4_autofocus_pane_g3_copy1

0x7b01,	// (0x0006ea75) video_down_pane_cp_t1

0x7b0f,	// (0x0006ea83) video_down_pane_cp_t2

0x0001,

0xf842,	// (0x000767b6) video_down_pane_cp_t

0x15f8,	// (0x0006856c) popup_vitu2_window_ParamLimits

0x15f8,	// (0x0006856c) popup_vitu2_window

0x80c8,	// (0x0006f03c) aid_size_cell2_itu2_ParamLimits

0x80c8,	// (0x0006f03c) aid_size_cell2_itu2

0x80ee,	// (0x0006f062) aid_size_cell_itu2_ParamLimits

0x80ee,	// (0x0006f062) aid_size_cell_itu2

0x756e,	// (0x0006e4e2) bg_popup_window_pane_cp09_ParamLimits

0x756e,	// (0x0006e4e2) bg_popup_window_pane_cp09

0x8140,	// (0x0006f0b4) field_vitu2_entry_pane_ParamLimits

0x8140,	// (0x0006f0b4) field_vitu2_entry_pane

0x815a,	// (0x0006f0ce) grid_vitu2_function_pane_ParamLimits

0x815a,	// (0x0006f0ce) grid_vitu2_function_pane

0x8195,	// (0x0006f109) grid_vitu2_itu_pane_ParamLimits

0x8195,	// (0x0006f109) grid_vitu2_itu_pane

0x81ff,	// (0x0006f173) cell_vitu2_itu_pane_ParamLimits

0x81ff,	// (0x0006f173) cell_vitu2_itu_pane

0x8227,	// (0x0006f19b) cell_vitu2_function_pane_ParamLimits

0x8227,	// (0x0006f19b) cell_vitu2_function_pane

0xcf3e,	// (0x00073eb2) bg_popup_call_pane_cp08_ParamLimits

0xcf3e,	// (0x00073eb2) bg_popup_call_pane_cp08

0xcf55,	// (0x00073ec9) field_vitu2_entry_pane_g1

0xcf61,	// (0x00073ed5) field_vitu2_entry_pane_g2

0x0002,

0xf8d1,	// (0x00076845) field_vitu2_entry_pane_g

0x29d3,	// (0x00069947) field_vitu2_entry_pane_t1_ParamLimits

0x29d3,	// (0x00069947) field_vitu2_entry_pane_t1

0xcf6d,	// (0x00073ee1) field_vitu2_entry_pane_t2_ParamLimits

0xcf6d,	// (0x00073ee1) field_vitu2_entry_pane_t2

0x0001,

0xf8d8,	// (0x0007684c) field_vitu2_entry_pane_t_ParamLimits

0xf8d8,	// (0x0007684c) field_vitu2_entry_pane_t

0x8266,	// (0x0006f1da) bg_button_pane_cp010_ParamLimits

0x8266,	// (0x0006f1da) bg_button_pane_cp010

0xef3a,	// (0x00075eae) cell_vitu2_itu_pane_g1

0x8282,	// (0x0006f1f6) cell_vitu2_itu_pane_t1_ParamLimits

0x8282,	// (0x0006f1f6) cell_vitu2_itu_pane_t1

0x2a00,	// (0x00069974) cell_vitu2_itu_pane_t2_ParamLimits

0x2a00,	// (0x00069974) cell_vitu2_itu_pane_t2

0x0002,

0xf8e2,	// (0x00076856) cell_vitu2_itu_pane_t_ParamLimits

0xf8e2,	// (0x00076856) cell_vitu2_itu_pane_t

0x15f8,	// (0x0006856c) bg_button_pane_cp011

0x82e0,	// (0x0006f254) cell_vitu2_function_pane_g1

0xad6d,	// (0x00071ce1) main_myfav_hc_pane

0x7db2,	// (0x0006ed26) popup_image3_note_pane_ParamLimits

0x7db2,	// (0x0006ed26) popup_image3_note_pane

0x7dcc,	// (0x0006ed40) popup_image3_tool_bar_pane_ParamLimits

0x7dcc,	// (0x0006ed40) popup_image3_tool_bar_pane

0x2a8e,	// (0x00069a02) cell_vitu2_itu_pane_t3_ParamLimits

0x2a8e,	// (0x00069a02) cell_vitu2_itu_pane_t3

0xad6d,	// (0x00071ce1) bg_popup_trans_pane

0xcf92,	// (0x00073f06) grid_image3_tool_bar_pane

0xcf9c,	// (0x00073f10) bg_popup_trans_pane_g1

0xba6b,	// (0x000729df) bg_popup_trans_pane_g2

0xcfa4,	// (0x00073f18) bg_popup_trans_pane_g3

0xcfac,	// (0x00073f20) bg_popup_trans_pane_g4

0xcfb4,	// (0x00073f28) bg_popup_trans_pane_g5

0xcfbc,	// (0x00073f30) bg_popup_trans_pane_g6

0xcfc4,	// (0x00073f38) bg_popup_trans_pane_g7

0xcfcc,	// (0x00073f40) bg_popup_trans_pane_g8

0xba4b,	// (0x000729bf) bg_popup_trans_pane_g9

0x0008,

0xf8e9,	// (0x0007685d) bg_popup_trans_pane_g

0xcfd4,	// (0x00073f48) cell_image3_tool_bar_pane_ParamLimits

0xcfd4,	// (0x00073f48) cell_image3_tool_bar_pane

0xb80f,	// (0x00072783) cell_image3_tool_bar_pane_g1

0xad6d,	// (0x00071ce1) bg_popup_trans_pane_cp1

0xcfe8,	// (0x00073f5c) popup_image3_note_pane_t1

0xcff6,	// (0x00073f6a) popup_image3_note_pane_t2

0xd004,	// (0x00073f78) popup_image3_note_pane_t3

0x0002,

0xf8fc,	// (0x00076870) popup_image3_note_pane_t

0xd012,	// (0x00073f86) popup_image3_note_pane_t3_copy1

0x82f3,	// (0x0006f267) bg_myfav_hc_instruction_pane_ParamLimits

0x82f3,	// (0x0006f267) bg_myfav_hc_instruction_pane

0x8305,	// (0x0006f279) cell_myfav_contact_pane_ParamLimits

0x8305,	// (0x0006f279) cell_myfav_contact_pane

0x831f,	// (0x0006f293) cell_myfav_contact_pane_cp1_ParamLimits

0x831f,	// (0x0006f293) cell_myfav_contact_pane_cp1

0x8335,	// (0x0006f2a9) cell_myfav_contact_pane_cp2_ParamLimits

0x8335,	// (0x0006f2a9) cell_myfav_contact_pane_cp2

0x834b,	// (0x0006f2bf) cell_myfav_contact_pane_cp3_ParamLimits

0x834b,	// (0x0006f2bf) cell_myfav_contact_pane_cp3

0x8360,	// (0x0006f2d4) cell_myfav_contact_pane_cp4_ParamLimits

0x8360,	// (0x0006f2d4) cell_myfav_contact_pane_cp4

0x8374,	// (0x0006f2e8) cell_myfav_contact_pane_cp5_ParamLimits

0x8374,	// (0x0006f2e8) cell_myfav_contact_pane_cp5

0x8388,	// (0x0006f2fc) cell_myfav_contact_pane_cp6_ParamLimits

0x8388,	// (0x0006f2fc) cell_myfav_contact_pane_cp6

0x839c,	// (0x0006f310) cell_myfav_contact_pane_cp7_ParamLimits

0x839c,	// (0x0006f310) cell_myfav_contact_pane_cp7

0xd020,	// (0x00073f94) listscroll_gen_pane_cp05

0x83b4,	// (0x0006f328) main_myfav_hc_pane_g1_ParamLimits

0x83b4,	// (0x0006f328) main_myfav_hc_pane_g1

0x83ca,	// (0x0006f33e) main_myfav_hc_pane_g2_ParamLimits

0x83ca,	// (0x0006f33e) main_myfav_hc_pane_g2

0x0002,

0xf903,	// (0x00076877) main_myfav_hc_pane_g_ParamLimits

0xf903,	// (0x00076877) main_myfav_hc_pane_g

0x83f4,	// (0x0006f368) main_myfav_hc_pane_t1_ParamLimits

0x83f4,	// (0x0006f368) main_myfav_hc_pane_t1

0xd029,	// (0x00073f9d) main_myfav_hc_pane_t2_ParamLimits

0xd029,	// (0x00073f9d) main_myfav_hc_pane_t2

0xd03b,	// (0x00073faf) main_myfav_hc_pane_t3_ParamLimits

0xd03b,	// (0x00073faf) main_myfav_hc_pane_t3

0x8409,	// (0x0006f37d) main_myfav_hc_pane_t4_ParamLimits

0x8409,	// (0x0006f37d) main_myfav_hc_pane_t4

0x0004,

0xf90a,	// (0x0007687e) main_myfav_hc_pane_t_ParamLimits

0xf90a,	// (0x0007687e) main_myfav_hc_pane_t

0xb80f,	// (0x00072783) bg_myfav_hc_instruction_pane_g1

0xd04d,	// (0x00073fc1) cell_myfav_contact_pane_g1_ParamLimits

0xd04d,	// (0x00073fc1) cell_myfav_contact_pane_g1

0xd04d,	// (0x00073fc1) cell_myfav_contact_pane_g2_ParamLimits

0xd04d,	// (0x00073fc1) cell_myfav_contact_pane_g2

0xd059,	// (0x00073fcd) cell_myfav_contact_pane_g3_ParamLimits

0xd059,	// (0x00073fcd) cell_myfav_contact_pane_g3

0xb4bc,	// (0x00072430) cell_myfav_contact_pane_g4_ParamLimits

0xb4bc,	// (0x00072430) cell_myfav_contact_pane_g4

0xd066,	// (0x00073fda) cell_myfav_contact_pane_g5_ParamLimits

0xd066,	// (0x00073fda) cell_myfav_contact_pane_g5

0x0004,

0xf915,	// (0x00076889) cell_myfav_contact_pane_g_ParamLimits

0xf915,	// (0x00076889) cell_myfav_contact_pane_g

0x83e0,	// (0x0006f354) main_myfav_hc_pane_g3_ParamLimits

0x83e0,	// (0x0006f354) main_myfav_hc_pane_g3

0x343f,	// (0x0006a3b3) popup_adpt_find_window

0x842d,	// (0x0006f3a1) afind_page_pane_ParamLimits

0x842d,	// (0x0006f3a1) afind_page_pane

0x8442,	// (0x0006f3b6) aid_size_cell_afind_ParamLimits

0x8442,	// (0x0006f3b6) aid_size_cell_afind

0x8460,	// (0x0006f3d4) bg_popup_sub_pane_cp09_ParamLimits

0x8460,	// (0x0006f3d4) bg_popup_sub_pane_cp09

0x846d,	// (0x0006f3e1) find_pane_cp01_ParamLimits

0x846d,	// (0x0006f3e1) find_pane_cp01

0xd072,	// (0x00073fe6) grid_afind_control_pane_ParamLimits

0xd072,	// (0x00073fe6) grid_afind_control_pane

0x847a,	// (0x0006f3ee) grid_afind_pane_ParamLimits

0x847a,	// (0x0006f3ee) grid_afind_pane

0x8498,	// (0x0006f40c) cell_afind_pane_ParamLimits

0x8498,	// (0x0006f40c) cell_afind_pane

0xb80f,	// (0x00072783) afind_page_pane_g1

0x84e7,	// (0x0006f45b) afind_page_pane_g2

0x84f0,	// (0x0006f464) afind_page_pane_g3

0x0002,

0xf920,	// (0x00076894) afind_page_pane_g

0x84f9,	// (0x0006f46d) afind_page_pane_t1

0xd086,	// (0x00073ffa) cell_afind_grid_control_pane_ParamLimits

0xd086,	// (0x00073ffa) cell_afind_grid_control_pane

0xd095,	// (0x00074009) bg_button_pane_cp69_ParamLimits

0xd095,	// (0x00074009) bg_button_pane_cp69

0x8519,	// (0x0006f48d) cell_afind_pane_g1_ParamLimits

0x8519,	// (0x0006f48d) cell_afind_pane_g1

0x8526,	// (0x0006f49a) cell_afind_pane_t1_ParamLimits

0x8526,	// (0x0006f49a) cell_afind_pane_t1

0xb819,	// (0x0007278d) bg_button_pane_cp72

0xd0a1,	// (0x00074015) cell_afind_grid_control_pane_g1

0x59c4,	// (0x0006c938) aid_image_placing_area_ParamLimits

0x59c4,	// (0x0006c938) aid_image_placing_area

0xb4ae,	// (0x00072422) field_vitu_entry_pane_g1_ParamLimits

0xb4ae,	// (0x00072422) field_vitu_entry_pane_g1

0xb4ae,	// (0x00072422) field_vitu_entry_pane_g2_ParamLimits

0xb4ae,	// (0x00072422) field_vitu_entry_pane_g2

0x0001,

0xf7cd,	// (0x00076741) field_vitu_entry_pane_g_ParamLimits

0xf7cd,	// (0x00076741) field_vitu_entry_pane_g

0xcc28,	// (0x00073b9c) cell_vitu_itu_pane_g1_ParamLimits

0xcc0b,	// (0x00073b7f) cell_vitu_itu_pane_t3_ParamLimits

0xcc0b,	// (0x00073b7f) cell_vitu_itu_pane_t3

0xce33,	// (0x00073da7) mp4_progress_pane_t1_ParamLimits

0xce4a,	// (0x00073dbe) mp4_progress_pane_t2_ParamLimits

0xf866,	// (0x000767da) mp4_progress_pane_t_ParamLimits

0xce61,	// (0x00073dd5) mup_progress_pane_cp04_ParamLimits

0x841b,	// (0x0006f38f) main_myfav_hc_pane_t5_ParamLimits

0x841b,	// (0x0006f38f) main_myfav_hc_pane_t5

0xad8f,	// (0x00071d03) aid_zoom_text_primary

0x343f,	// (0x0006a3b3) popup_adpt_find_window_ParamLimits

0x15f8,	// (0x0006856c) main_cam_set_pane

0x7f55,	// (0x0006eec9) cam4_zoom_pane_ParamLimits

0x7f55,	// (0x0006eec9) cam4_zoom_pane

0x8538,	// (0x0006f4ac) main_cam_set_pane_g1_ParamLimits

0x8538,	// (0x0006f4ac) main_cam_set_pane_g1

0x8546,	// (0x0006f4ba) main_cam_set_pane_g2_ParamLimits

0x8546,	// (0x0006f4ba) main_cam_set_pane_g2

0x0001,

0xf927,	// (0x0007689b) main_cam_set_pane_g_ParamLimits

0xf927,	// (0x0007689b) main_cam_set_pane_g

0x8565,	// (0x0006f4d9) main_cam_set_pane_t1_ParamLimits

0x8565,	// (0x0006f4d9) main_cam_set_pane_t1

0x8577,	// (0x0006f4eb) main_cset_listscroll_pane_ParamLimits

0x8577,	// (0x0006f4eb) main_cset_listscroll_pane

0x8599,	// (0x0006f50d) main_cset_slider_pane_ParamLimits

0x8599,	// (0x0006f50d) main_cset_slider_pane

0xd0b2,	// (0x00074026) main_cset_list_pane_ParamLimits

0xd0b2,	// (0x00074026) main_cset_list_pane

0xd0c2,	// (0x00074036) scroll_pane_cp028

0x85bd,	// (0x0006f531) aid_area_touch_slider

0x85d9,	// (0x0006f54d) cset_slider_pane

0x85fc,	// (0x0006f570) main_cset_slider_pane_g1

0x8611,	// (0x0006f585) main_cset_slider_pane_g2

0x0011,

0xf92c,	// (0x000768a0) main_cset_slider_pane_g

0xd0fb,	// (0x0007406f) main_cset_slider_pane_t1

0x86cd,	// (0x0006f641) main_cset_slider_pane_t2

0x86e7,	// (0x0006f65b) main_cset_slider_pane_t3

0x8701,	// (0x0006f675) main_cset_slider_pane_t4

0x871b,	// (0x0006f68f) main_cset_slider_pane_t5

0x8735,	// (0x0006f6a9) main_cset_slider_pane_t6

0x874a,	// (0x0006f6be) main_cset_slider_pane_t7

0x000e,

0xf951,	// (0x000768c5) main_cset_slider_pane_t

0x884e,	// (0x0006f7c2) cset_list_set_pane_ParamLimits

0x884e,	// (0x0006f7c2) cset_list_set_pane

0xd195,	// (0x00074109) aid_position_infowindow_above

0xd19d,	// (0x00074111) aid_position_infowindow_below

0x885f,	// (0x0006f7d3) cset_list_set_pane_g1_ParamLimits

0x885f,	// (0x0006f7d3) cset_list_set_pane_g1

0x2aec,	// (0x00069a60) cset_list_set_pane_g3_ParamLimits

0x2aec,	// (0x00069a60) cset_list_set_pane_g3

0x0001,

0xf970,	// (0x000768e4) cset_list_set_pane_g_ParamLimits

0xf970,	// (0x000768e4) cset_list_set_pane_g

0x2afb,	// (0x00069a6f) cset_list_set_pane_t1_ParamLimits

0x2afb,	// (0x00069a6f) cset_list_set_pane_t1

0x15f8,	// (0x0006856c) list_highlight_pane_cp021_ParamLimits

0x15f8,	// (0x0006856c) list_highlight_pane_cp021

0x1668,	// (0x000685dc) cset_slider_pane_g1

0x167a,	// (0x000685ee) cset_slider_pane_g2

0x1671,	// (0x000685e5) cset_slider_pane_g3

0x0002,

0xf975,	// (0x000768e9) cset_slider_pane_g

0xef4c,	// (0x00075ec0) aid_area_touch_cam4_zoom

0xef54,	// (0x00075ec8) cam4_zoom_cont_pane

0xef5c,	// (0x00075ed0) cam4_zoom_pane_g1

0xef64,	// (0x00075ed8) cam4_zoom_pane_g2

0x886b,	// (0x0006f7df) cam4_zoom_pane_g3

0x0002,

0xf97c,	// (0x000768f0) cam4_zoom_pane_g

0xd1a5,	// (0x00074119) cam4_zoom_cont_pane_g1

0xd1ae,	// (0x00074122) cam4_zoom_cont_pane_g2

0xd1b7,	// (0x0007412b) cam4_zoom_cont_pane_g3

0x0002,

0xf983,	// (0x000768f7) cam4_zoom_cont_pane_g

0x7e37,	// (0x0006edab) call4_image_pane_ParamLimits

0x7e37,	// (0x0006edab) call4_image_pane

0xcea1,	// (0x00073e15) call4_windows_conf_pane_ParamLimits

0xced4,	// (0x00073e48) popup_call4_audio_in_window_ParamLimits

0xced4,	// (0x00073e48) popup_call4_audio_in_window

0xad6d,	// (0x00071ce1) bg_popup_call2_act_pane_cp02

0xcf12,	// (0x00073e86) call4_list_conf_pane

0xb80f,	// (0x00072783) call4_image_pane_g1

0xb80f,	// (0x00072783) call4_image_pane_g2

0x0001,

0xf3ef,	// (0x00076363) call4_image_pane_g

0xd1c0,	// (0x00074134) list_single_graphic_popup_conf4_pane_ParamLimits

0xd1c0,	// (0x00074134) list_single_graphic_popup_conf4_pane

0xad6d,	// (0x00071ce1) list_highlight_pane_cp022

0xd1cd,	// (0x00074141) list_single_graphic_popup_conf4_pane_g1

0x129e,	// (0x00068212) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98a,	// (0x000768fe) list_single_graphic_popup_conf4_pane_g

0xd1d5,	// (0x00074149) list_single_graphic_popup_conf4_pane_t1

0x4206,	// (0x0006b17a) popup_vtel_slider_window_ParamLimits

0x4206,	// (0x0006b17a) popup_vtel_slider_window

0xbbcf,	// (0x00072b43) dialer2_ne_pane_t2_ParamLimits

0xbbcf,	// (0x00072b43) dialer2_ne_pane_t2

0x0001,

0xf86b,	// (0x000767df) dialer2_ne_pane_t_ParamLimits

0xf86b,	// (0x000767df) dialer2_ne_pane_t

0xc397,	// (0x0007330b) bg_popup_sub_pane_cp010_ParamLimits

0xc397,	// (0x0007330b) bg_popup_sub_pane_cp010

0x8873,	// (0x0006f7e7) popup_vtel_slider_window_g1_ParamLimits

0x8873,	// (0x0006f7e7) popup_vtel_slider_window_g1

0x8886,	// (0x0006f7fa) popup_vtel_slider_window_g2_ParamLimits

0x8886,	// (0x0006f7fa) popup_vtel_slider_window_g2

0x0003,

0xf98f,	// (0x00076903) popup_vtel_slider_window_g_ParamLimits

0xf98f,	// (0x00076903) popup_vtel_slider_window_g

0x88da,	// (0x0006f84e) vtel_slider_pane_ParamLimits

0x88da,	// (0x0006f84e) vtel_slider_pane

0x88fc,	// (0x0006f870) vtel_slider_pane_g1_ParamLimits

0x88fc,	// (0x0006f870) vtel_slider_pane_g1

0x8910,	// (0x0006f884) vtel_slider_pane_g2_ParamLimits

0x8910,	// (0x0006f884) vtel_slider_pane_g2

0x8928,	// (0x0006f89c) vtel_slider_pane_g3_ParamLimits

0x8928,	// (0x0006f89c) vtel_slider_pane_g3

0x88fc,	// (0x0006f870) vtel_slider_pane_g4_ParamLimits

0x88fc,	// (0x0006f870) vtel_slider_pane_g4

0x893e,	// (0x0006f8b2) vtel_slider_pane_g5_ParamLimits

0x893e,	// (0x0006f8b2) vtel_slider_pane_g5

0x0004,

0xf998,	// (0x0007690c) vtel_slider_pane_g_ParamLimits

0xf998,	// (0x0007690c) vtel_slider_pane_g

0x15f8,	// (0x0006856c) main_gallery2_pane

0x811a,	// (0x0006f08e) aid_size_row_itut2_dropdow_list_ParamLimits

0x811a,	// (0x0006f08e) aid_size_row_itut2_dropdow_list

0x8176,	// (0x0006f0ea) grid_vitu2_function_top_pane_ParamLimits

0x8176,	// (0x0006f0ea) grid_vitu2_function_top_pane

0x81be,	// (0x0006f132) popup_vitu2_dropdown_list_window_ParamLimits

0x81be,	// (0x0006f132) popup_vitu2_dropdown_list_window

0x81dd,	// (0x0006f151) popup_vitu2_match_list_window

0x8954,	// (0x0006f8c8) cell_vitu2_function_top_pane_ParamLimits

0x8954,	// (0x0006f8c8) cell_vitu2_function_top_pane

0x896c,	// (0x0006f8e0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x896c,	// (0x0006f8e0) cell_vitu2_function_top_pane_cp01

0x8988,	// (0x0006f8fc) cell_vitu2_function_top_wide_pane_ParamLimits

0x8988,	// (0x0006f8fc) cell_vitu2_function_top_wide_pane

0x15f8,	// (0x0006856c) bg_button_pane_cp012

0x89a5,	// (0x0006f919) cell_vitu2_function_top_pane_g1

0xef6c,	// (0x00075ee0) bg_button_pane_cp013_ParamLimits

0xef6c,	// (0x00075ee0) bg_button_pane_cp013

0x89b9,	// (0x0006f92d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x89b9,	// (0x0006f92d) cell_vitu2_function_top_wide_pane_g1

0x15f8,	// (0x0006856c) bg_popup_sub_pane_cp20

0x89d1,	// (0x0006f945) list_vitu2_match_list_pane

0xcf9c,	// (0x00073f10) bg_popup_sub_pane_cp20_g1

0xcfa4,	// (0x00073f18) bg_popup_sub_pane_cp20_g2

0xba6b,	// (0x000729df) bg_popup_sub_pane_cp20_g3

0xcfac,	// (0x00073f20) bg_popup_sub_pane_cp20_g4

0xba4b,	// (0x000729bf) bg_popup_sub_pane_cp20_g5

0xd1eb,	// (0x0007415f) bg_popup_sub_pane_cp20_g6

0xcfbc,	// (0x00073f30) bg_popup_sub_pane_cp20_g7

0xcfc4,	// (0x00073f38) bg_popup_sub_pane_cp20_g8

0xcfcc,	// (0x00073f40) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a3,	// (0x00076917) bg_popup_sub_pane_cp20_g

0xef88,	// (0x00075efc) list_vitu2_match_list_item_pane_ParamLimits

0xef88,	// (0x00075efc) list_vitu2_match_list_item_pane

0xef9a,	// (0x00075f0e) list_vitu2_match_list_item_pane_t1

0xad6d,	// (0x00071ce1) bg_popup_sub_pane_cp21

0x11dc,	// (0x00068150) grid_vitu2_dropdown_list_pane

0x89ef,	// (0x0006f963) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x89ef,	// (0x0006f963) cell_vitu2_dropdown_list_char_pane

0x8a10,	// (0x0006f984) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8a10,	// (0x0006f984) cell_vitu2_dropdown_list_ctrl_pane

0xd1f3,	// (0x00074167) cell_vitu2_dropdown_list_char_pane_g1

0xd1fc,	// (0x00074170) cell_vitu2_dropdown_list_char_pane_g2

0xd205,	// (0x00074179) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c0,	// (0x00076934) cell_vitu2_dropdown_list_char_pane_g

0x8a3a,	// (0x0006f9ae) cell_vitu2_dropdown_list_char_pane_t1

0x8a48,	// (0x0006f9bc) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8a48,	// (0x0006f9bc) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8a55,	// (0x0006f9c9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8a55,	// (0x0006f9c9) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8a62,	// (0x0006f9d6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8a62,	// (0x0006f9d6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8a6f,	// (0x0006f9e3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8a6f,	// (0x0006f9e3) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb4ae,	// (0x00072422) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb4ae,	// (0x00072422) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c7,	// (0x0007693b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c7,	// (0x0007693b) cell_vitu2_dropdown_list_ctrl_pane_g

0x8a8b,	// (0x0006f9ff) aid_size_cell_gallery2_ParamLimits

0x8a8b,	// (0x0006f9ff) aid_size_cell_gallery2

0x8aa9,	// (0x0006fa1d) grid_gallery2_pane_ParamLimits

0x8aa9,	// (0x0006fa1d) grid_gallery2_pane

0x78e6,	// (0x0006e85a) scroll_pane_cp029_ParamLimits

0x78e6,	// (0x0006e85a) scroll_pane_cp029

0x8abd,	// (0x0006fa31) cell_gallery2_pane_ParamLimits

0x8abd,	// (0x0006fa31) cell_gallery2_pane

0xd20e,	// (0x00074182) cell_gallery2_pane_g2

0x8b16,	// (0x0006fa8a) cell_gallery2_pane_g3

0xd216,	// (0x0007418a) cell_gallery2_pane_g4

0xd21e,	// (0x00074192) cell_gallery2_pane_g5

0xb7ab,	// (0x0007271f) grid_highlight_pane_cp10

0x81dd,	// (0x0006f151) popup_vitu2_match_list_window_ParamLimits

0x81ee,	// (0x0006f162) popup_vitu2_query_window_ParamLimits

0x81ee,	// (0x0006f162) popup_vitu2_query_window

0xad6d,	// (0x00071ce1) bg_vitu2_candi_button_pane

0xd1f3,	// (0x00074167) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd1fc,	// (0x00074170) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd205,	// (0x00074179) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2b10,	// (0x00069a84) bg_button_pane_cp015

0x8b1e,	// (0x0006fa92) bg_button_pane_cp016

0x8b30,	// (0x0006faa4) bg_button_pane_cp017

0x1820,	// (0x00068794) bg_popup_sub_pane_cp22

0xd226,	// (0x0007419a) popup_vitu2_query_window_g1

0x2b3f,	// (0x00069ab3) popup_vitu2_query_window_g2

0x0002,

0xf9d2,	// (0x00076946) popup_vitu2_query_window_g

0x2b5a,	// (0x00069ace) popup_vitu2_query_window_t1_ParamLimits

0x2b5a,	// (0x00069ace) popup_vitu2_query_window_t1

0x2b8d,	// (0x00069b01) popup_vitu2_query_window_t2_ParamLimits

0x2b8d,	// (0x00069b01) popup_vitu2_query_window_t2

0x2b9f,	// (0x00069b13) popup_vitu2_query_window_t3_ParamLimits

0x2b9f,	// (0x00069b13) popup_vitu2_query_window_t3

0x8b52,	// (0x0006fac6) popup_vitu2_query_window_t4_ParamLimits

0x8b52,	// (0x0006fac6) popup_vitu2_query_window_t4

0x8b6f,	// (0x0006fae3) popup_vitu2_query_window_t5_ParamLimits

0x8b6f,	// (0x0006fae3) popup_vitu2_query_window_t5

0x0006,

0xf9d9,	// (0x0007694d) popup_vitu2_query_window_t_ParamLimits

0xf9d9,	// (0x0007694d) popup_vitu2_query_window_t

0xd0aa,	// (0x0007401e) main_cset_text_pane

0x85bd,	// (0x0006f531) aid_area_touch_slider_ParamLimits

0x85d9,	// (0x0006f54d) cset_slider_pane_ParamLimits

0x85fc,	// (0x0006f570) main_cset_slider_pane_g1_ParamLimits

0x8611,	// (0x0006f585) main_cset_slider_pane_g2_ParamLimits

0xd0cb,	// (0x0007403f) main_cset_slider_pane_g3_ParamLimits

0xd0cb,	// (0x0007403f) main_cset_slider_pane_g3

0x8626,	// (0x0006f59a) main_cset_slider_pane_g4_ParamLimits

0x8626,	// (0x0006f59a) main_cset_slider_pane_g4

0x8635,	// (0x0006f5a9) main_cset_slider_pane_g5_ParamLimits

0x8635,	// (0x0006f5a9) main_cset_slider_pane_g5

0x8641,	// (0x0006f5b5) main_cset_slider_pane_g6_ParamLimits

0x8641,	// (0x0006f5b5) main_cset_slider_pane_g6

0xf92c,	// (0x000768a0) main_cset_slider_pane_g_ParamLimits

0xd0fb,	// (0x0007406f) main_cset_slider_pane_t1_ParamLimits

0x86cd,	// (0x0006f641) main_cset_slider_pane_t2_ParamLimits

0x86e7,	// (0x0006f65b) main_cset_slider_pane_t3_ParamLimits

0x8701,	// (0x0006f675) main_cset_slider_pane_t4_ParamLimits

0x871b,	// (0x0006f68f) main_cset_slider_pane_t5_ParamLimits

0x8735,	// (0x0006f6a9) main_cset_slider_pane_t6_ParamLimits

0x874a,	// (0x0006f6be) main_cset_slider_pane_t7_ParamLimits

0x8774,	// (0x0006f6e8) main_cset_slider_pane_t8_ParamLimits

0x8774,	// (0x0006f6e8) main_cset_slider_pane_t8

0x879c,	// (0x0006f710) main_cset_slider_pane_t9_ParamLimits

0x879c,	// (0x0006f710) main_cset_slider_pane_t9

0x87c4,	// (0x0006f738) main_cset_slider_pane_t10_ParamLimits

0x87c4,	// (0x0006f738) main_cset_slider_pane_t10

0x87ec,	// (0x0006f760) main_cset_slider_pane_t11_ParamLimits

0x87ec,	// (0x0006f760) main_cset_slider_pane_t11

0x8814,	// (0x0006f788) main_cset_slider_pane_t12_ParamLimits

0x8814,	// (0x0006f788) main_cset_slider_pane_t12

0x8831,	// (0x0006f7a5) main_cset_slider_pane_t13_ParamLimits

0x8831,	// (0x0006f7a5) main_cset_slider_pane_t13

0xf951,	// (0x000768c5) main_cset_slider_pane_t_ParamLimits

0xad6d,	// (0x00071ce1) bg_popup_sub_pane_cp011

0xd232,	// (0x000741a6) main_cset_text_pane_g1

0xd23a,	// (0x000741ae) main_cset_text_pane_t1

0xd248,	// (0x000741bc) main_cset_text_pane_t2

0xd256,	// (0x000741ca) main_cset_text_pane_t3

0xd264,	// (0x000741d8) main_cset_text_pane_t4

0xd272,	// (0x000741e6) main_cset_text_pane_t5

0xd280,	// (0x000741f4) main_cset_text_pane_t6

0xd28e,	// (0x00074202) main_cset_text_pane_t7

0x0006,

0xf9e8,	// (0x0007695c) main_cset_text_pane_t

0xad6d,	// (0x00071ce1) main_cam4_burst_pane

0xad6d,	// (0x00071ce1) main_cam5_pane

0x8507,	// (0x0006f47b) bg_button_pane_cp019

0x8510,	// (0x0006f484) bg_button_pane_cp020

0xd0d7,	// (0x0007404b) main_cset_slider_pane_g7_ParamLimits

0xd0d7,	// (0x0007404b) main_cset_slider_pane_g7

0xd0e3,	// (0x00074057) main_cset_slider_pane_g8_ParamLimits

0xd0e3,	// (0x00074057) main_cset_slider_pane_g8

0x8655,	// (0x0006f5c9) main_cset_slider_pane_g9_ParamLimits

0x8655,	// (0x0006f5c9) main_cset_slider_pane_g9

0x8661,	// (0x0006f5d5) main_cset_slider_pane_g10_ParamLimits

0x8661,	// (0x0006f5d5) main_cset_slider_pane_g10

0x866d,	// (0x0006f5e1) main_cset_slider_pane_g11_ParamLimits

0x866d,	// (0x0006f5e1) main_cset_slider_pane_g11

0x8679,	// (0x0006f5ed) main_cset_slider_pane_g12_ParamLimits

0x8679,	// (0x0006f5ed) main_cset_slider_pane_g12

0x8685,	// (0x0006f5f9) main_cset_slider_pane_g13_ParamLimits

0x8685,	// (0x0006f5f9) main_cset_slider_pane_g13

0x8691,	// (0x0006f605) main_cset_slider_pane_g14_ParamLimits

0x8691,	// (0x0006f605) main_cset_slider_pane_g14

0x869d,	// (0x0006f611) main_cset_slider_pane_g15_ParamLimits

0x869d,	// (0x0006f611) main_cset_slider_pane_g15

0xd123,	// (0x00074097) main_cset_slider_pane_t14_ParamLimits

0xd123,	// (0x00074097) main_cset_slider_pane_t14

0xd15c,	// (0x000740d0) main_cset_slider_pane_t15_ParamLimits

0xd15c,	// (0x000740d0) main_cset_slider_pane_t15

0x8b8c,	// (0x0006fb00) aid_cam4_burst_size_cell_ParamLimits

0x8b8c,	// (0x0006fb00) aid_cam4_burst_size_cell

0x8bac,	// (0x0006fb20) grid_cam4_burst_pane_ParamLimits

0x8bac,	// (0x0006fb20) grid_cam4_burst_pane

0x8bd2,	// (0x0006fb46) linegrid_cam4_burst_pane_ParamLimits

0x8bd2,	// (0x0006fb46) linegrid_cam4_burst_pane

0x8bf4,	// (0x0006fb68) scroll_pane_cp30_ParamLimits

0x8bf4,	// (0x0006fb68) scroll_pane_cp30

0x8c00,	// (0x0006fb74) cell_cam4_burst_pane_ParamLimits

0x8c00,	// (0x0006fb74) cell_cam4_burst_pane

0xd29c,	// (0x00074210) linegrid_cam4_burst_pane_g1_ParamLimits

0xd29c,	// (0x00074210) linegrid_cam4_burst_pane_g1

0x8c47,	// (0x0006fbbb) linegrid_cam4_burst_pane_g2_ParamLimits

0x8c47,	// (0x0006fbbb) linegrid_cam4_burst_pane_g2

0xd2a9,	// (0x0007421d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd2a9,	// (0x0007421d) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f7,	// (0x0007696b) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f7,	// (0x0007696b) linegrid_cam4_burst_pane_g

0x8c58,	// (0x0006fbcc) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8c58,	// (0x0006fbcc) linegrid_cam4_burst_pane_g3_copy1

0xd2b6,	// (0x0007422a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd2b6,	// (0x0007422a) linegrid_cam4_burst_pane_g4

0x8c72,	// (0x0006fbe6) linegrid_cam4_burst_pane_g5_ParamLimits

0x8c72,	// (0x0006fbe6) linegrid_cam4_burst_pane_g5

0x8c83,	// (0x0006fbf7) linegrid_cam4_burst_pane_g6_ParamLimits

0x8c83,	// (0x0006fbf7) linegrid_cam4_burst_pane_g6

0xd2c3,	// (0x00074237) linegrid_cam4_burst_pane_g7_ParamLimits

0xd2c3,	// (0x00074237) linegrid_cam4_burst_pane_g7

0x8c94,	// (0x0006fc08) cell_cam4_burst_pane_g1

0xd2dc,	// (0x00074250) main_cam5_pane_t1_ParamLimits

0xd2dc,	// (0x00074250) main_cam5_pane_t1

0xd2ee,	// (0x00074262) main_cam5_pane_t2_ParamLimits

0xd2ee,	// (0x00074262) main_cam5_pane_t2

0xd300,	// (0x00074274) main_cam5_pane_t3_ParamLimits

0xd300,	// (0x00074274) main_cam5_pane_t3

0xd312,	// (0x00074286) main_cam5_pane_t4_ParamLimits

0xd312,	// (0x00074286) main_cam5_pane_t4

0xd328,	// (0x0007429c) main_cam5_pane_t5_ParamLimits

0xd328,	// (0x0007429c) main_cam5_pane_t5

0xd33a,	// (0x000742ae) main_cam5_pane_t6_ParamLimits

0xd33a,	// (0x000742ae) main_cam5_pane_t6

0xd34c,	// (0x000742c0) main_cam5_pane_t7_ParamLimits

0xd34c,	// (0x000742c0) main_cam5_pane_t7

0xd35e,	// (0x000742d2) main_cam5_pane_t8_ParamLimits

0xd35e,	// (0x000742d2) main_cam5_pane_t8

0xd37a,	// (0x000742ee) main_cam5_pane_t9_ParamLimits

0xd37a,	// (0x000742ee) main_cam5_pane_t9

0xd38c,	// (0x00074300) main_cam5_pane_t10_ParamLimits

0xd38c,	// (0x00074300) main_cam5_pane_t10

0xd39e,	// (0x00074312) main_cam5_pane_t11_ParamLimits

0xd39e,	// (0x00074312) main_cam5_pane_t11

0xd3b0,	// (0x00074324) main_cam5_pane_t12_ParamLimits

0xd3b0,	// (0x00074324) main_cam5_pane_t12

0xd3c5,	// (0x00074339) main_cam5_pane_t13_ParamLimits

0xd3c5,	// (0x00074339) main_cam5_pane_t13

0x000c,

0xfa03,	// (0x00076977) main_cam5_pane_t_ParamLimits

0xfa03,	// (0x00076977) main_cam5_pane_t

0x349d,	// (0x0006a411) popup_scut_keymap_window_ParamLimits

0x349d,	// (0x0006a411) popup_scut_keymap_window

0x8ca9,	// (0x0006fc1d) aid_size_cell_brow_shortcut

0xb7ab,	// (0x0007271f) bg_popup_window_pane_cp010

0x8cb5,	// (0x0006fc29) grid_scut_pane

0x8cbf,	// (0x0006fc33) cell_scut_pane_ParamLimits

0x8cbf,	// (0x0006fc33) cell_scut_pane

0x8cd4,	// (0x0006fc48) cell_scut_pane_g1

0xd3e2,	// (0x00074356) cell_scut_pane_t1

0xd3f1,	// (0x00074365) cell_scut_pane_t2

0x8cdd,	// (0x0006fc51) cell_scut_pane_t3

0x0002,

0xfa1e,	// (0x00076992) cell_scut_pane_t

0x70d1,	// (0x0006e045) main_mup3_pane_g8_ParamLimits

0x70d1,	// (0x0006e045) main_mup3_pane_g8

0x812e,	// (0x0006f0a2) area_vitu2_query_pane_ParamLimits

0x812e,	// (0x0006f0a2) area_vitu2_query_pane

0x2b20,	// (0x00069a94) input_focus_pane_cp08

0xd400,	// (0x00074374) area_vitu2_query_pane_g1

0x2c1d,	// (0x00069b91) area_vitu2_query_pane_g2

0x0001,

0xfa25,	// (0x00076999) area_vitu2_query_pane_g

0x8ceb,	// (0x0006fc5f) area_vitu2_query_pane_t1_ParamLimits

0x8ceb,	// (0x0006fc5f) area_vitu2_query_pane_t1

0x8cfd,	// (0x0006fc71) area_vitu2_query_pane_t2_ParamLimits

0x8cfd,	// (0x0006fc71) area_vitu2_query_pane_t2

0x2c2c,	// (0x00069ba0) area_vitu2_query_pane_t3_ParamLimits

0x2c2c,	// (0x00069ba0) area_vitu2_query_pane_t3

0xd40c,	// (0x00074380) area_vitu2_query_pane_t4_ParamLimits

0xd40c,	// (0x00074380) area_vitu2_query_pane_t4

0xd434,	// (0x000743a8) area_vitu2_query_pane_t5_ParamLimits

0xd434,	// (0x000743a8) area_vitu2_query_pane_t5

0xd45c,	// (0x000743d0) area_vitu2_query_pane_t6_ParamLimits

0xd45c,	// (0x000743d0) area_vitu2_query_pane_t6

0x0006,

0xfa2a,	// (0x0007699e) area_vitu2_query_pane_t_ParamLimits

0xfa2a,	// (0x0007699e) area_vitu2_query_pane_t

0x8d0f,	// (0x0006fc83) bg_button_pane_cp018

0x8d1c,	// (0x0006fc90) bg_button_pane_cp021

0x2c54,	// (0x00069bc8) bg_button_pane_cp022

0x2c63,	// (0x00069bd7) input_focus_pane_cp09

0x5250,	// (0x0006c1c4) aid_size_touch_mv_arrow_left

0x13dc,	// (0x00068350) aid_size_touch_mv_arrow_right

0x86b5,	// (0x0006f629) main_cset_slider_pane_g16_ParamLimits

0x86b5,	// (0x0006f629) main_cset_slider_pane_g16

0x86c1,	// (0x0006f635) main_cset_slider_pane_g17_ParamLimits

0x86c1,	// (0x0006f635) main_cset_slider_pane_g17

0x8c94,	// (0x0006fc08) cell_cam4_burst_pane_g1_ParamLimits

0xad6d,	// (0x00071ce1) compa_mode_pane

0x8896,	// (0x0006f80a) popup_vtel_slider_window_g3_ParamLimits

0x8896,	// (0x0006f80a) popup_vtel_slider_window_g3

0x88ad,	// (0x0006f821) popup_vtel_slider_window_g4_ParamLimits

0x88ad,	// (0x0006f821) popup_vtel_slider_window_g4

0x88c4,	// (0x0006f838) popup_vtel_slider_window_t1_ParamLimits

0x88c4,	// (0x0006f838) popup_vtel_slider_window_t1

0xad6d,	// (0x00071ce1) main_cl_pane

0xeaa2,	// (0x00075a16) popup_imed_adjust2_window_ParamLimits

0x1820,	// (0x00068794) bg_tb_trans_pane_cp05_ParamLimits

0xcb40,	// (0x00073ab4) popup_imed_adjust2_window_g1_ParamLimits

0xcb4f,	// (0x00073ac3) popup_imed_adjust2_window_g2_ParamLimits

0xcb4f,	// (0x00073ac3) popup_imed_adjust2_window_g2

0xcb5b,	// (0x00073acf) popup_imed_adjust2_window_g3_ParamLimits

0xcb5b,	// (0x00073acf) popup_imed_adjust2_window_g3

0x0002,

0xf791,	// (0x00076705) popup_imed_adjust2_window_g_ParamLimits

0xf791,	// (0x00076705) popup_imed_adjust2_window_g

0xcb67,	// (0x00073adb) popup_imed_adjust2_window_t1_ParamLimits

0xcb7f,	// (0x00073af3) slider_imed_adjust_pane_ParamLimits

0xcb93,	// (0x00073b07) slider_imed_adjust_pane_g1_ParamLimits

0xcba3,	// (0x00073b17) slider_imed_adjust_pane_g2_ParamLimits

0xcbb3,	// (0x00073b27) slider_imed_adjust_pane_g3_ParamLimits

0xcbc4,	// (0x00073b38) slider_imed_adjust_pane_g4_ParamLimits

0xf798,	// (0x0007670c) slider_imed_adjust_pane_g_ParamLimits

0x7f04,	// (0x0006ee78) aid_touch_area_cam4_ParamLimits

0x7f04,	// (0x0006ee78) aid_touch_area_cam4

0xee6f,	// (0x00075de3) battery_pane_cp01

0x7f9c,	// (0x0006ef10) main_camera4_pane_g6_ParamLimits

0x7f9c,	// (0x0006ef10) main_camera4_pane_g6

0x7fbd,	// (0x0006ef31) main_camera4_pane_t2_ParamLimits

0x7fbd,	// (0x0006ef31) main_camera4_pane_t2

0x0001,

0xf89f,	// (0x00076813) main_camera4_pane_t_ParamLimits

0xf89f,	// (0x00076813) main_camera4_pane_t

0x7feb,	// (0x0006ef5f) aid_touch_area_vid4_ParamLimits

0x7feb,	// (0x0006ef5f) aid_touch_area_vid4

0x802d,	// (0x0006efa1) main_video4_pane_g5_ParamLimits

0x802d,	// (0x0006efa1) main_video4_pane_g5

0x804e,	// (0x0006efc2) vid4_progress_pane_ParamLimits

0x804e,	// (0x0006efc2) vid4_progress_pane

0xd0ef,	// (0x00074063) main_cset_slider_pane_g18_ParamLimits

0xd0ef,	// (0x00074063) main_cset_slider_pane_g18

0xd2d0,	// (0x00074244) cell_cam4_burst_pane_g2_ParamLimits

0xd2d0,	// (0x00074244) cell_cam4_burst_pane_g2

0x0001,

0xf9fe,	// (0x00076972) cell_cam4_burst_pane_g_ParamLimits

0xf9fe,	// (0x00076972) cell_cam4_burst_pane_g

0xb546,	// (0x000724ba) bg_cl_pane_ParamLimits

0xb546,	// (0x000724ba) bg_cl_pane

0x8d28,	// (0x0006fc9c) cl_header_pane_ParamLimits

0x8d28,	// (0x0006fc9c) cl_header_pane

0x8d3c,	// (0x0006fcb0) cl_listscroll_pane_ParamLimits

0x8d3c,	// (0x0006fcb0) cl_listscroll_pane

0xd4a8,	// (0x0007441c) bg_cl_pane_g1

0xd4b0,	// (0x00074424) bg_cl_pane_g2

0xd4b8,	// (0x0007442c) bg_cl_pane_g3

0xd4c0,	// (0x00074434) bg_cl_pane_g4

0xd4c8,	// (0x0007443c) bg_cl_pane_g5

0xd4d0,	// (0x00074444) bg_cl_pane_g6

0xd4d8,	// (0x0007444c) bg_cl_pane_g7

0xd4e0,	// (0x00074454) bg_cl_pane_g8

0xd4e8,	// (0x0007445c) bg_cl_pane_g9

0x0008,

0xfa39,	// (0x000769ad) bg_cl_pane_g

0x8d4c,	// (0x0006fcc0) aid_height_cl_leading_ParamLimits

0x8d4c,	// (0x0006fcc0) aid_height_cl_leading

0x8d58,	// (0x0006fccc) aid_height_cl_text_ParamLimits

0x8d58,	// (0x0006fccc) aid_height_cl_text

0x15f8,	// (0x0006856c) bg_cl_header_pane_ParamLimits

0x15f8,	// (0x0006856c) bg_cl_header_pane

0x8d77,	// (0x0006fceb) cl_header_pane_g1_ParamLimits

0x8d77,	// (0x0006fceb) cl_header_pane_g1

0x8d8d,	// (0x0006fd01) cl_header_pane_t1_ParamLimits

0x8d8d,	// (0x0006fd01) cl_header_pane_t1

0xd4f0,	// (0x00074464) cl_list_pane

0xd4f9,	// (0x0007446d) hc_scroll_pane_cp01

0xba4b,	// (0x000729bf) bg_cl_header_pane_g1

0xcf9c,	// (0x00073f10) bg_cl_header_pane_g2

0xba6b,	// (0x000729df) bg_cl_header_pane_g3

0xcfac,	// (0x00073f20) bg_cl_header_pane_g4

0xcfa4,	// (0x00073f18) bg_cl_header_pane_g5

0xd1eb,	// (0x0007415f) bg_cl_header_pane_g6

0xcfc4,	// (0x00073f38) bg_cl_header_pane_g7

0xcfcc,	// (0x00073f40) bg_cl_header_pane_g8

0xcfbc,	// (0x00073f30) bg_cl_header_pane_g9

0x0008,

0xfa4c,	// (0x000769c0) bg_cl_header_pane_g

0x8da6,	// (0x0006fd1a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8da6,	// (0x0006fd1a) hc_cl_list_double_graphic_heading_pane

0x8db6,	// (0x0006fd2a) hc_cl_list_single_graphic_pane_ParamLimits

0x8db6,	// (0x0006fd2a) hc_cl_list_single_graphic_pane

0x8dc9,	// (0x0006fd3d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8dc9,	// (0x0006fd3d) hc_cl_list_single_graphic_pane_g1

0x8dd5,	// (0x0006fd49) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8dd5,	// (0x0006fd49) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5f,	// (0x000769d3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5f,	// (0x000769d3) hc_cl_list_single_graphic_pane_g

0x8de9,	// (0x0006fd5d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8de9,	// (0x0006fd5d) hc_cl_list_single_graphic_pane_t1

0x8dc9,	// (0x0006fd3d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8dc9,	// (0x0006fd3d) hc_cl_list_double_graphic_heading_pane_g1

0x8dfe,	// (0x0006fd72) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8dfe,	// (0x0006fd72) hc_cl_list_double_graphic_heading_pane_g2

0x8e12,	// (0x0006fd86) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8e12,	// (0x0006fd86) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa64,	// (0x000769d8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa64,	// (0x000769d8) hc_cl_list_double_graphic_heading_pane_g

0x8e26,	// (0x0006fd9a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8e26,	// (0x0006fd9a) hc_cl_list_double_graphic_heading_pane_t1

0x8e3b,	// (0x0006fdaf) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8e3b,	// (0x0006fdaf) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6b,	// (0x000769df) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6b,	// (0x000769df) hc_cl_list_double_graphic_heading_pane_t

0xefb5,	// (0x00075f29) vid4_progress_pane_g1

0xefc4,	// (0x00075f38) vid4_progress_pane_g2

0xefd3,	// (0x00075f47) vid4_progress_pane_g3

0xefe2,	// (0x00075f56) vid4_progress_pane_g4

0x0004,

0xfa70,	// (0x000769e4) vid4_progress_pane_g

0xefee,	// (0x00075f62) vid4_progress_pane_t1

0xf004,	// (0x00075f78) vid4_progress_pane_t2

0x0002,

0xfa7b,	// (0x000769ef) vid4_progress_pane_t

0xf02e,	// (0x00075fa2) wait_bar_pane_cp07

0xc4d4,	// (0x00073448) blid_firmament_pane_ParamLimits

0xc515,	// (0x00073489) popup_blid_sat_info2_window_g1

0xc539,	// (0x000734ad) popup_blid_sat_info2_window_t3

0xc547,	// (0x000734bb) popup_blid_sat_info2_window_t4

0xc555,	// (0x000734c9) popup_blid_sat_info2_window_t5

0xc563,	// (0x000734d7) popup_blid_sat_info2_window_t6

0xc573,	// (0x000734e7) popup_blid_sat_info2_window_t7

0xc581,	// (0x000734f5) popup_blid_sat_info2_window_t8

0xc58f,	// (0x00073503) popup_blid_sat_info2_window_t9

0xc59d,	// (0x00073511) popup_blid_sat_info2_window_t10

0xc639,	// (0x000735ad) aid_firma_cardinal_ParamLimits

0xc64d,	// (0x000735c1) blid_firmament_pane_t1_ParamLimits

0xc664,	// (0x000735d8) blid_firmament_pane_t2_ParamLimits

0xc67b,	// (0x000735ef) blid_firmament_pane_t3_ParamLimits

0xc692,	// (0x00073606) blid_firmament_pane_t4_ParamLimits

0xf68a,	// (0x000765fe) blid_firmament_pane_t_ParamLimits

0xc6a9,	// (0x0007361d) blid_sat_info_pane_ParamLimits

0x15f8,	// (0x0006856c) main_cam_set_pane_ParamLimits

0x7867,	// (0x0006e7db) aid_size_cell_colour_35_ParamLimits

0x7887,	// (0x0006e7fb) aid_size_cell_colour_112_ParamLimits

0x78a7,	// (0x0006e81b) aid_size_cell_effect_ParamLimits

0x1820,	// (0x00068794) bg_tb_trans_pane_cp02_ParamLimits

0x0ff0,	// (0x00067f64) heading_imed_pane_ParamLimits

0x78c7,	// (0x0006e83b) listscroll_imed_pane_ParamLimits

0x6181,	// (0x0006d0f5) popup_call2_audio_first_window_g5_ParamLimits

0x6181,	// (0x0006d0f5) popup_call2_audio_first_window_g5

0x7bef,	// (0x0006eb63) aid_size_touch_image3_arrow_left_ParamLimits

0x7bef,	// (0x0006eb63) aid_size_touch_image3_arrow_left

0x7c0f,	// (0x0006eb83) aid_size_touch_image3_arrow_right_ParamLimits

0x7c0f,	// (0x0006eb83) aid_size_touch_image3_arrow_right

0xf019,	// (0x00075f8d) vid4_progress_pane_t3

0x7a50,	// (0x0006e9c4) main_hwr_training_symbol_option_pane_ParamLimits

0x7a50,	// (0x0006e9c4) main_hwr_training_symbol_option_pane

0xcd6d,	// (0x00073ce1) popup_hwr_training_preview_window_ParamLimits

0xcd6d,	// (0x00073ce1) popup_hwr_training_preview_window

0x7a6c,	// (0x0006e9e0) hwr_training_navi_pane_g5_ParamLimits

0x7a6c,	// (0x0006e9e0) hwr_training_navi_pane_g5

0xcf8a,	// (0x00073efe) popup_char_count_window

0x15f8,	// (0x0006856c) bg_popup_sub_pane_cp20_ParamLimits

0x89d1,	// (0x0006f945) list_vitu2_match_list_pane_ParamLimits

0x89e0,	// (0x0006f954) vitu2_page_scroll_pane_ParamLimits

0x89e0,	// (0x0006f954) vitu2_page_scroll_pane

0xd51c,	// (0x00074490) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd51c,	// (0x00074490) list_single_hwr_training_symbol_option_pane

0xd52f,	// (0x000744a3) list_single_hwr_training_symbol_option_pane_g1

0xd537,	// (0x000744ab) list_single_hwr_training_symbol_option_pane_t1

0xd545,	// (0x000744b9) bg_button_pane_cp023

0xd54e,	// (0x000744c2) bg_button_pane_cp024

0x8e50,	// (0x0006fdc4) vitu2_page_scroll_pane_g1

0x8e58,	// (0x0006fdcc) vitu2_page_scroll_pane_g2

0x0001,

0xfa82,	// (0x000769f6) vitu2_page_scroll_pane_g

0x8e60,	// (0x0006fdd4) vitu2_page_scroll_pane_t1

0xc6d8,	// (0x0007364c) popup_char_count_window_g1

0xd581,	// (0x000744f5) popup_char_count_window_g2

0xd58a,	// (0x000744fe) popup_char_count_window_g3

0x0002,

0xfa87,	// (0x000769fb) popup_char_count_window_g

0xd593,	// (0x00074507) popup_char_count_window_t1

0xad6d,	// (0x00071ce1) main_vded2_pane

0xcb2e,	// (0x00073aa2) aid_size_cell_imed_line

0xcb38,	// (0x00073aac) grid_imed_line_width_pane

0xef04,	// (0x00075e78) vid4_indicators_pane_g4

0xd5a1,	// (0x00074515) cell_imed_line_width_pane_ParamLimits

0xd5a1,	// (0x00074515) cell_imed_line_width_pane

0xd5b3,	// (0x00074527) cell_imed_line_width_pane_g1

0xd5bc,	// (0x00074530) cell_imed_line_width_pane_g2

0x0001,

0xfa8e,	// (0x00076a02) cell_imed_line_width_pane_g

0x8e6f,	// (0x0006fde3) main_vded2_pane_g1_ParamLimits

0x8e6f,	// (0x0006fde3) main_vded2_pane_g1

0x8e85,	// (0x0006fdf9) main_vded2_pane_g2_ParamLimits

0x8e85,	// (0x0006fdf9) main_vded2_pane_g2

0x0001,

0xfa93,	// (0x00076a07) main_vded2_pane_g_ParamLimits

0xfa93,	// (0x00076a07) main_vded2_pane_g

0x8e95,	// (0x0006fe09) vded2_slider_pane_ParamLimits

0x8e95,	// (0x0006fe09) vded2_slider_pane

0x8ea8,	// (0x0006fe1c) aid_size_touch_vded2_end

0x8eb0,	// (0x0006fe24) aid_size_touch_vded2_playhead

0x8eb8,	// (0x0006fe2c) aid_size_touch_vded2_start

0x8ec0,	// (0x0006fe34) vded2_slider_bg_pane

0x8ec9,	// (0x0006fe3d) vded2_slider_pane_g1

0x8ed2,	// (0x0006fe46) vded2_slider_pane_g2

0x8eda,	// (0x0006fe4e) vded2_slider_pane_g3

0x0002,

0xfa98,	// (0x00076a0c) vded2_slider_pane_g

0x8ee3,	// (0x0006fe57) vded2_slider_bg_pane_g1

0x8eec,	// (0x0006fe60) vded2_slider_bg_pane_g2

0x8ef5,	// (0x0006fe69) vded2_slider_bg_pane_g3

0x0002,

0xfa9f,	// (0x00076a13) vded2_slider_bg_pane_g

0x5512,	// (0x0006c486) aid_postcard_touch_down_pane_ParamLimits

0x5512,	// (0x0006c486) aid_postcard_touch_down_pane

0x5524,	// (0x0006c498) aid_postcard_touch_up_pane_ParamLimits

0x5524,	// (0x0006c498) aid_postcard_touch_up_pane

0xad6d,	// (0x00071ce1) main_blid2_pane

0xea8a,	// (0x000759fe) popup_blid2_search_window

0xad6d,	// (0x00071ce1) blid2_gps_pane

0xad6d,	// (0x00071ce1) blid2_navig_pane

0xad6d,	// (0x00071ce1) blid2_search_pane

0xad6d,	// (0x00071ce1) blid2_tripm_pane

0x8efe,	// (0x0006fe72) blid2_search_pane_g1_ParamLimits

0x8efe,	// (0x0006fe72) blid2_search_pane_g1

0x8f12,	// (0x0006fe86) blid2_search_pane_t1_ParamLimits

0x8f12,	// (0x0006fe86) blid2_search_pane_t1

0x8f24,	// (0x0006fe98) aid_size_cell_blid2_gps_ParamLimits

0x8f24,	// (0x0006fe98) aid_size_cell_blid2_gps

0x8f3c,	// (0x0006feb0) blid2_gps_pane_g1_ParamLimits

0x8f3c,	// (0x0006feb0) blid2_gps_pane_g1

0x8f50,	// (0x0006fec4) grid_blid2_satellite_pane_ParamLimits

0x8f50,	// (0x0006fec4) grid_blid2_satellite_pane

0x8f64,	// (0x0006fed8) blid2_navig_pane_g1_ParamLimits

0x8f64,	// (0x0006fed8) blid2_navig_pane_g1

0x8f70,	// (0x0006fee4) blid2_navig_pane_t1_ParamLimits

0x8f70,	// (0x0006fee4) blid2_navig_pane_t1

0x8f89,	// (0x0006fefd) blid2_navig_pane_t2_ParamLimits

0x8f89,	// (0x0006fefd) blid2_navig_pane_t2

0x0001,

0xfaa6,	// (0x00076a1a) blid2_navig_pane_t_ParamLimits

0xfaa6,	// (0x00076a1a) blid2_navig_pane_t

0x8fa2,	// (0x0006ff16) blid2_navig_ring_pane_ParamLimits

0x8fa2,	// (0x0006ff16) blid2_navig_ring_pane

0x8fb7,	// (0x0006ff2b) blid2_speed_pane_ParamLimits

0x8fb7,	// (0x0006ff2b) blid2_speed_pane

0x8fc3,	// (0x0006ff37) blid2_tripm_pane_g1_ParamLimits

0x8fc3,	// (0x0006ff37) blid2_tripm_pane_g1

0x8fd8,	// (0x0006ff4c) blid2_tripm_pane_g2_ParamLimits

0x8fd8,	// (0x0006ff4c) blid2_tripm_pane_g2

0x8fec,	// (0x0006ff60) blid2_tripm_pane_g3_ParamLimits

0x8fec,	// (0x0006ff60) blid2_tripm_pane_g3

0x9000,	// (0x0006ff74) blid2_tripm_pane_g4_ParamLimits

0x9000,	// (0x0006ff74) blid2_tripm_pane_g4

0x9014,	// (0x0006ff88) blid2_tripm_pane_g5_ParamLimits

0x9014,	// (0x0006ff88) blid2_tripm_pane_g5

0x0005,

0xfaab,	// (0x00076a1f) blid2_tripm_pane_g_ParamLimits

0xfaab,	// (0x00076a1f) blid2_tripm_pane_g

0x9036,	// (0x0006ffaa) blid2_tripm_pane_t1_ParamLimits

0x9036,	// (0x0006ffaa) blid2_tripm_pane_t1

0x904d,	// (0x0006ffc1) blid2_tripm_pane_t2_ParamLimits

0x904d,	// (0x0006ffc1) blid2_tripm_pane_t2

0x9064,	// (0x0006ffd8) blid2_tripm_pane_t3_ParamLimits

0x9064,	// (0x0006ffd8) blid2_tripm_pane_t3

0x0003,

0xfab8,	// (0x00076a2c) blid2_tripm_pane_t_ParamLimits

0xfab8,	// (0x00076a2c) blid2_tripm_pane_t

0x90a7,	// (0x0007001b) cell_blid2_satellite_pane_ParamLimits

0x90a7,	// (0x0007001b) cell_blid2_satellite_pane

0x90bf,	// (0x00070033) cell_blid2_satellite_pane_g1

0xd5c4,	// (0x00074538) cell_blid2_satellite_pane_t1

0xb80f,	// (0x00072783) blid2_speed_pane_g1

0xd5d2,	// (0x00074546) blid2_speed_pane_t1

0xd5e0,	// (0x00074554) blid2_speed_pane_t2

0x0001,

0xfac1,	// (0x00076a35) blid2_speed_pane_t

0xb80f,	// (0x00072783) blid2_navig_ring_pane_g1

0x90c8,	// (0x0007003c) blid2_navig_ring_pane_g2

0x90d0,	// (0x00070044) blid2_navig_ring_pane_g3

0x90d8,	// (0x0007004c) blid2_navig_ring_pane_g4

0x90e0,	// (0x00070054) blid2_navig_ring_pane_g5

0x0004,

0xfac6,	// (0x00076a3a) blid2_navig_ring_pane_g

0xad6d,	// (0x00071ce1) bg_popup_window_pane_cp011

0xd5ee,	// (0x00074562) popup_blid2_search_window_g1

0xd5f6,	// (0x0007456a) popup_blid2_search_window_t1

0xd604,	// (0x00074578) popup_blid2_search_window_t2

0x0001,

0xfad1,	// (0x00076a45) popup_blid2_search_window_t

0xb95a,	// (0x000728ce) main_browser_pane_g1

0xb546,	// (0x000724ba) main_browser_pane_ParamLimits

0x15f8,	// (0x0006856c) bg_button_pane_cp011_ParamLimits

0x82e0,	// (0x0006f254) cell_vitu2_function_pane_g1_ParamLimits

0x1820,	// (0x00068794) bg_popup_sub_pane_cp22_ParamLimits

0x2b20,	// (0x00069a94) input_focus_pane_cp08_ParamLimits

0x8b42,	// (0x0006fab6) popup_vitu2_query_button_pane_ParamLimits

0x8b42,	// (0x0006fab6) popup_vitu2_query_button_pane

0x2b37,	// (0x00069aab) popup_vitu2_query_input_button_pane

0xd226,	// (0x0007419a) popup_vitu2_query_window_g1_ParamLimits

0x2b3f,	// (0x00069ab3) popup_vitu2_query_window_g2_ParamLimits

0xf9d2,	// (0x00076946) popup_vitu2_query_window_g_ParamLimits

0xad6d,	// (0x00071ce1) bg_button_pane_cp026

0x90e8,	// (0x0007005c) popup_vitu2_query_input_button_pane_g1

0xad6d,	// (0x00071ce1) bg_button_pane_cp025

0xd612,	// (0x00074586) popup_vitu2_query_button_pane_t1

0x6ded,	// (0x0006dd61) main_mp3_pane_t6

0x6dfb,	// (0x0006dd6f) popup_slider_window_cp01

0xee89,	// (0x00075dfd) cam4_battery_pane

0xee89,	// (0x00075dfd) cam4_battery_pane_cp02

0xee89,	// (0x00075dfd) cam4_battery_pane_cp01

0xee89,	// (0x00075dfd) cam4_battery_pane_cp03

0xb80f,	// (0x00072783) cam4_battery_pane_g1

0xd620,	// (0x00074594) cam4_battery_pane_g2

0x0001,

0xfad6,	// (0x00076a4a) cam4_battery_pane_g

0xc5ab,	// (0x0007351f) popup_blid_sat_info2_window_t11

0x5250,	// (0x0006c1c4) aid_size_touch_mv_arrow_left_ParamLimits

0x13dc,	// (0x00068350) aid_size_touch_mv_arrow_right_ParamLimits

0x1435,	// (0x000683a9) navi_pane_g1_ParamLimits

0x1441,	// (0x000683b5) navi_pane_g2_ParamLimits

0x5274,	// (0x0006c1e8) navi_pane_g3_ParamLimits

0xf38b,	// (0x000762ff) navi_pane_g_ParamLimits

0x5291,	// (0x0006c205) navi_pane_mv_t1_ParamLimits

0x78d3,	// (0x0006e847) grid_imed_effect_pane_ParamLimits

0x4119,	// (0x0006b08d) aid_placing_vt_slider_lsc

0xb89c,	// (0x00072810) aid_placing_vt_slider_prt

0x15f8,	// (0x0006856c) bg_tb_trans_pane_cp01_ParamLimits

0xc7f0,	// (0x00073764) popup_image_details_window_g1_ParamLimits

0xc803,	// (0x00073777) popup_image_details_window_g2_ParamLimits

0xc818,	// (0x0007378c) popup_image_details_window_g3_ParamLimits

0xc818,	// (0x0007378c) popup_image_details_window_g3

0xf6ca,	// (0x0007663e) popup_image_details_window_g_ParamLimits

0xc82c,	// (0x000737a0) popup_image_details_window_t1_ParamLimits

0xc83e,	// (0x000737b2) popup_image_details_window_t2_ParamLimits

0xc857,	// (0x000737cb) popup_image_details_window_t3_ParamLimits

0xc86b,	// (0x000737df) popup_image_details_window_t4_ParamLimits

0xc886,	// (0x000737fa) popup_image_details_window_t5_ParamLimits

0xf6d1,	// (0x00076645) popup_image_details_window_t_ParamLimits

0x8d64,	// (0x0006fcd8) cl_header_name_pane_ParamLimits

0x8d64,	// (0x0006fcd8) cl_header_name_pane

0x90f0,	// (0x00070064) cl_header_name_pane_t1_ParamLimits

0x90f0,	// (0x00070064) cl_header_name_pane_t1

0x9111,	// (0x00070085) cl_header_name_pane_t2_ParamLimits

0x9111,	// (0x00070085) cl_header_name_pane_t2

0x9153,	// (0x000700c7) cl_header_name_pane_t3_ParamLimits

0x9153,	// (0x000700c7) cl_header_name_pane_t3

0x0002,

0xfadb,	// (0x00076a4f) cl_header_name_pane_t_ParamLimits

0xfadb,	// (0x00076a4f) cl_header_name_pane_t

0x14ce,	// (0x00068442) navi_pane_mv_g2_ParamLimits

0xcf55,	// (0x00073ec9) field_vitu2_entry_pane_g1_ParamLimits

0xcf61,	// (0x00073ed5) field_vitu2_entry_pane_g2_ParamLimits

0x182e,	// (0x000687a2) field_vitu2_entry_pane_g3_ParamLimits

0x182e,	// (0x000687a2) field_vitu2_entry_pane_g3

0xf8d1,	// (0x00076845) field_vitu2_entry_pane_g_ParamLimits

0xef3a,	// (0x00075eae) cell_vitu2_itu_pane_g1_ParamLimits

0x8274,	// (0x0006f1e8) cell_vitu2_itu_pane_g2_ParamLimits

0x8274,	// (0x0006f1e8) cell_vitu2_itu_pane_g2

0x0001,

0xf8dd,	// (0x00076851) cell_vitu2_itu_pane_g_ParamLimits

0xf8dd,	// (0x00076851) cell_vitu2_itu_pane_g

0x15f8,	// (0x0006856c) bg_vkb2_func_pane_cp05_ParamLimits

0x15f8,	// (0x0006856c) bg_vkb2_func_pane_cp05

0x15f8,	// (0x0006856c) bg_vkb2_func_pane_cp03

0x15f8,	// (0x0006856c) bg_vkb2_func_pane_cp04

0x15f8,	// (0x0006856c) bg_vkb2_func_pane_cp10_ParamLimits

0x15f8,	// (0x0006856c) bg_vkb2_func_pane_cp10

0x2c54,	// (0x00069bc8) bg_vkb2_func_pane_cp08

0x8d0f,	// (0x0006fc83) bg_vkb2_func_pane_cp06

0x8d1c,	// (0x0006fc90) bg_vkb2_func_pane_cp07

0xd557,	// (0x000744cb) bg_vkb2_func_pane_cp11_ParamLimits

0xd557,	// (0x000744cb) bg_vkb2_func_pane_cp11

0xd56c,	// (0x000744e0) bg_vkb2_func_pane_cp12_ParamLimits

0xd56c,	// (0x000744e0) bg_vkb2_func_pane_cp12

0xad6d,	// (0x00071ce1) bg_vkb2_func_pane_cp09

0xcf9c,	// (0x00073f10) bg_vkb2_func_pane_g1

0xba6b,	// (0x000729df) bg_vkb2_func_pane_g2

0xcfa4,	// (0x00073f18) bg_vkb2_func_pane_g3

0xcfac,	// (0x00073f20) bg_vkb2_func_pane_g4

0xd1eb,	// (0x0007415f) bg_vkb2_func_pane_g5

0xcfc4,	// (0x00073f38) bg_vkb2_func_pane_g6

0xcfcc,	// (0x00073f40) bg_vkb2_func_pane_g7

0xcfbc,	// (0x00073f30) bg_vkb2_func_pane_g8

0xba4b,	// (0x000729bf) bg_vkb2_func_pane_g9

0x0008,

0xfae2,	// (0x00076a56) bg_vkb2_func_pane_g

0x9026,	// (0x0006ff9a) blid2_tripm_pane_g6_ParamLimits

0x9026,	// (0x0006ff9a) blid2_tripm_pane_g6

0xce2b,	// (0x00073d9f) mp4_progress_pane_g1

0x9095,	// (0x00070009) blid2_tripm_values_pane_ParamLimits

0x9095,	// (0x00070009) blid2_tripm_values_pane

0x9184,	// (0x000700f8) blid2_tripm_values_pane_t1

0x9192,	// (0x00070106) blid2_tripm_values_pane_t2

0x91a0,	// (0x00070114) blid2_tripm_values_pane_t3

0x91ae,	// (0x00070122) blid2_tripm_values_pane_t4

0x91bc,	// (0x00070130) blid2_tripm_values_pane_t5

0x91ca,	// (0x0007013e) blid2_tripm_values_pane_t6

0x91d8,	// (0x0007014c) blid2_tripm_values_pane_t7

0x91e6,	// (0x0007015a) blid2_tripm_values_pane_t8

0x91f4,	// (0x00070168) blid2_tripm_values_pane_t9

0x0008,

0xfaf5,	// (0x00076a69) blid2_tripm_values_pane_t

0x4153,	// (0x0006b0c7) call_video_pane_t1_ParamLimits

0x416d,	// (0x0006b0e1) call_video_pane_t2_ParamLimits

0xf222,	// (0x00076196) call_video_pane_t_ParamLimits

0x2961,	// (0x000698d5) msg_header_pane_g1_ParamLimits

0x16ad,	// (0x00068621) msg_header_pane_g2_ParamLimits

0x16ad,	// (0x00068621) msg_header_pane_g2

0x0001,

0xf42e,	// (0x000763a2) msg_header_pane_g_ParamLimits

0xf42e,	// (0x000763a2) msg_header_pane_g

0xb546,	// (0x000724ba) main_clock2_pane_ParamLimits

0x75ea,	// (0x0006e55e) grid_clock2_toolbar_pane_ParamLimits

0x75ea,	// (0x0006e55e) grid_clock2_toolbar_pane

0x75ea,	// (0x0006e55e) listscroll_clock2_pane_ParamLimits

0x75ea,	// (0x0006e55e) listscroll_clock2_pane

0x76cd,	// (0x0006e641) main_clock2_pane_t3_ParamLimits

0x76cd,	// (0x0006e641) main_clock2_pane_t3

0x76ef,	// (0x0006e663) main_clock2_pane_t4_ParamLimits

0x76ef,	// (0x0006e663) main_clock2_pane_t4

0xd62a,	// (0x0007459e) cell_clock2_toolbar_pane

0xd632,	// (0x000745a6) cell_clock2_toolbar_pane_cp01

0xd632,	// (0x000745a6) cell_clock2_toolbar_pane_cp02

0xd63a,	// (0x000745ae) cell_clock2_toolbar_pane_cp03

0xd642,	// (0x000745b6) list_clock2_pane

0xd64a,	// (0x000745be) scroll_pane_cp10

0xd652,	// (0x000745c6) list_single_clock2_pane_ParamLimits

0xd652,	// (0x000745c6) list_single_clock2_pane

0xb7ab,	// (0x0007271f) list_highlight_pane_cp08

0xd65f,	// (0x000745d3) list_single_clock2_pane_t1

0xd66d,	// (0x000745e1) list_single_clock2_pane_t2

0x0001,

0xfb08,	// (0x00076a7c) list_single_clock2_pane_t

0xad6d,	// (0x00071ce1) bg_button_pane_cp10

0xd67b,	// (0x000745ef) cell_clock2_toolbar_pane_g1

0x54a6,	// (0x0006c41a) aid_main_viewer_pane_g1_ParamLimits

0x54a6,	// (0x0006c41a) aid_main_viewer_pane_g1

0x54b2,	// (0x0006c426) aid_main_viewer_pane_g2_ParamLimits

0x54b2,	// (0x0006c426) aid_main_viewer_pane_g2

0x54be,	// (0x0006c432) aid_main_viewer_pane_g3_ParamLimits

0x54be,	// (0x0006c432) aid_main_viewer_pane_g3

0x54cd,	// (0x0006c441) aid_main_viewer_pane_g4_ParamLimits

0x54cd,	// (0x0006c441) aid_main_viewer_pane_g4

0x0003,

0xf43f,	// (0x000763b3) aid_main_viewer_pane_g_ParamLimits

0xf43f,	// (0x000763b3) aid_main_viewer_pane_g

0x15f8,	// (0x0006856c) main_calc_pane_ParamLimits

0x6791,	// (0x0006d705) main_dialer2_pane_ParamLimits

0xad6d,	// (0x00071ce1) main_cam6_pane

0xad6d,	// (0x00071ce1) main_vid6_pane

0x75f6,	// (0x0006e56a) listscroll_gen_pane_cp06_ParamLimits

0x75f6,	// (0x0006e56a) listscroll_gen_pane_cp06

0x7710,	// (0x0006e684) main_clock2_pane_t5_ParamLimits

0x7710,	// (0x0006e684) main_clock2_pane_t5

0x7768,	// (0x0006e6dc) aid_call2_pane_cp10_ParamLimits

0x777a,	// (0x0006e6ee) aid_call_pane_cp10_ParamLimits

0x13d0,	// (0x00068344) popup_clock_analogue_window_cp10_g1_ParamLimits

0x13d0,	// (0x00068344) popup_clock_analogue_window_cp10_g2_ParamLimits

0x778c,	// (0x0006e700) popup_clock_analogue_window_cp10_g3_ParamLimits

0x778c,	// (0x0006e700) popup_clock_analogue_window_cp10_g4_ParamLimits

0x13d0,	// (0x00068344) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf786,	// (0x000766fa) popup_clock_analogue_window_cp10_g_ParamLimits

0x779e,	// (0x0006e712) popup_clock_analogue_window_cp10_t1_ParamLimits

0xce83,	// (0x00073df7) cell_dialer2_keypad_pane_g2_ParamLimits

0xce83,	// (0x00073df7) cell_dialer2_keypad_pane_g2

0x0001,

0xf870,	// (0x000767e4) cell_dialer2_keypad_pane_g_ParamLimits

0xf870,	// (0x000767e4) cell_dialer2_keypad_pane_g

0x15e4,	// (0x00068558) cell_dialer2_keypad_pane_t1

0x85af,	// (0x0006f523) main_cset_text2_pane_ParamLimits

0x85af,	// (0x0006f523) main_cset_text2_pane

0xd400,	// (0x00074374) area_vitu2_query_pane_g1_ParamLimits

0x2c1d,	// (0x00069b91) area_vitu2_query_pane_g2_ParamLimits

0xfa25,	// (0x00076999) area_vitu2_query_pane_g_ParamLimits

0xd484,	// (0x000743f8) area_vitu2_query_pane_t7_ParamLimits

0xd484,	// (0x000743f8) area_vitu2_query_pane_t7

0x8d0f,	// (0x0006fc83) bg_button_pane_cp018_ParamLimits

0x8d1c,	// (0x0006fc90) bg_button_pane_cp021_ParamLimits

0x2c54,	// (0x00069bc8) bg_button_pane_cp022_ParamLimits

0x2c54,	// (0x00069bc8) bg_vkb2_func_pane_cp08_ParamLimits

0x8d0f,	// (0x0006fc83) bg_vkb2_func_pane_cp06_ParamLimits

0x8d1c,	// (0x0006fc90) bg_vkb2_func_pane_cp07_ParamLimits

0x2c63,	// (0x00069bd7) input_focus_pane_cp09_ParamLimits

0xf04f,	// (0x00075fc3) cam6_autofocus_pane_ParamLimits

0xf04f,	// (0x00075fc3) cam6_autofocus_pane

0x9202,	// (0x00070176) cam6_image_uncrop_pane_ParamLimits

0x9202,	// (0x00070176) cam6_image_uncrop_pane

0x920f,	// (0x00070183) cam6_indi_pane_ParamLimits

0x920f,	// (0x00070183) cam6_indi_pane

0x9225,	// (0x00070199) cam6_mode_pane_ParamLimits

0x9225,	// (0x00070199) cam6_mode_pane

0x9237,	// (0x000701ab) cam6_timer_pane_ParamLimits

0x9237,	// (0x000701ab) cam6_timer_pane

0x9243,	// (0x000701b7) cam6_zoom_pane_ParamLimits

0x9243,	// (0x000701b7) cam6_zoom_pane

0x924f,	// (0x000701c3) cam6_mode_pane_g1_ParamLimits

0x924f,	// (0x000701c3) cam6_mode_pane_g1

0x925f,	// (0x000701d3) cam6_mode_pane_g2_ParamLimits

0x925f,	// (0x000701d3) cam6_mode_pane_g2

0x926f,	// (0x000701e3) cam6_mode_pane_g3_ParamLimits

0x926f,	// (0x000701e3) cam6_mode_pane_g3

0x927f,	// (0x000701f3) cam6_mode_pane_g4_ParamLimits

0x927f,	// (0x000701f3) cam6_mode_pane_g4

0x0003,

0xfb0d,	// (0x00076a81) cam6_mode_pane_g_ParamLimits

0xfb0d,	// (0x00076a81) cam6_mode_pane_g

0xc389,	// (0x000732fd) bg_tb_trans_pane_cp08_ParamLimits

0xc389,	// (0x000732fd) bg_tb_trans_pane_cp08

0xd683,	// (0x000745f7) cam6_battery_pane_ParamLimits

0xd683,	// (0x000745f7) cam6_battery_pane

0xd699,	// (0x0007460d) cam6_indi_pane_g1_ParamLimits

0xd699,	// (0x0007460d) cam6_indi_pane_g1

0xd6ab,	// (0x0007461f) cam6_indi_pane_g2_ParamLimits

0xd6ab,	// (0x0007461f) cam6_indi_pane_g2

0xd6bd,	// (0x00074631) cam6_indi_pane_g3_ParamLimits

0xd6bd,	// (0x00074631) cam6_indi_pane_g3

0x0002,

0xfb16,	// (0x00076a8a) cam6_indi_pane_g_ParamLimits

0xfb16,	// (0x00076a8a) cam6_indi_pane_g

0xd6cf,	// (0x00074643) cam6_indi_pane_t1_ParamLimits

0xd6cf,	// (0x00074643) cam6_indi_pane_t1

0x80a8,	// (0x0006f01c) cam6_autofocus_pane_g1

0x80b0,	// (0x0006f024) cam6_autofocus_pane_g2

0x80b8,	// (0x0006f02c) cam6_autofocus_pane_g3

0x80c0,	// (0x0006f034) cam6_autofocus_pane_g4

0x0003,

0xfb1d,	// (0x00076a91) cam6_autofocus_pane_g

0xd6f5,	// (0x00074669) cam6_timer_pane_g1

0xd6fd,	// (0x00074671) cam6_timer_pane_t1

0xd70b,	// (0x0007467f) cam6_zoom_cont_pane

0xd713,	// (0x00074687) cam6_zoom_pane_g1

0xd71b,	// (0x0007468f) cam6_zoom_pane_g2

0x928f,	// (0x00070203) cam6_zoom_pane_g3

0x0002,

0xfb26,	// (0x00076a9a) cam6_zoom_pane_g

0xb80f,	// (0x00072783) cam6_battery_pane_g1

0xb80f,	// (0x00072783) cam6_battery_pane_g2

0x0001,

0xf3ef,	// (0x00076363) cam6_battery_pane_g

0xd723,	// (0x00074697) cam6_zoom_cont_pane_g1

0xd72c,	// (0x000746a0) cam6_zoom_cont_pane_g2

0xd735,	// (0x000746a9) cam6_zoom_cont_pane_g3

0x0002,

0xfb2d,	// (0x00076aa1) cam6_zoom_cont_pane_g

0x92ac,	// (0x00070220) cam6_mode_pane_cp_ParamLimits

0x92ac,	// (0x00070220) cam6_mode_pane_cp

0x9243,	// (0x000701b7) cam6_zoom_pane_cp_ParamLimits

0x9243,	// (0x000701b7) cam6_zoom_pane_cp

0x92be,	// (0x00070232) vid6_image_uncrop_cif_pane_ParamLimits

0x92be,	// (0x00070232) vid6_image_uncrop_cif_pane

0x92cc,	// (0x00070240) vid6_image_uncrop_nhd_pane_ParamLimits

0x92cc,	// (0x00070240) vid6_image_uncrop_nhd_pane

0x9202,	// (0x00070176) vid6_image_uncrop_vga_pane_ParamLimits

0x9202,	// (0x00070176) vid6_image_uncrop_vga_pane

0x92d9,	// (0x0007024d) vid6_image_uncrop_wvga_pane_ParamLimits

0x92d9,	// (0x0007024d) vid6_image_uncrop_wvga_pane

0x92e6,	// (0x0007025a) vid6_indi_pane_ParamLimits

0x92e6,	// (0x0007025a) vid6_indi_pane

0xc389,	// (0x000732fd) bg_tb_trans_pane_cp09_ParamLimits

0xc389,	// (0x000732fd) bg_tb_trans_pane_cp09

0xd749,	// (0x000746bd) cam6_battery_pane_cp_ParamLimits

0xd749,	// (0x000746bd) cam6_battery_pane_cp

0xd755,	// (0x000746c9) vid6_indi_pane_g1_ParamLimits

0xd755,	// (0x000746c9) vid6_indi_pane_g1

0xd767,	// (0x000746db) vid6_indi_pane_g2_ParamLimits

0xd767,	// (0x000746db) vid6_indi_pane_g2

0xd779,	// (0x000746ed) vid6_indi_pane_g3_ParamLimits

0xd779,	// (0x000746ed) vid6_indi_pane_g3

0xd78e,	// (0x00074702) vid6_indi_pane_g4_ParamLimits

0xd78e,	// (0x00074702) vid6_indi_pane_g4

0xd7a3,	// (0x00074717) vid6_indi_pane_g5_ParamLimits

0xd7a3,	// (0x00074717) vid6_indi_pane_g5

0x0004,

0xfb34,	// (0x00076aa8) vid6_indi_pane_g_ParamLimits

0xfb34,	// (0x00076aa8) vid6_indi_pane_g

0xd7bd,	// (0x00074731) vid6_indi_pane_t1_ParamLimits

0xd7bd,	// (0x00074731) vid6_indi_pane_t1

0xd7d3,	// (0x00074747) vid6_indi_pane_t2_ParamLimits

0xd7d3,	// (0x00074747) vid6_indi_pane_t2

0xd7fb,	// (0x0007476f) vid6_indi_pane_t3_ParamLimits

0xd7fb,	// (0x0007476f) vid6_indi_pane_t3

0xd823,	// (0x00074797) vid6_indi_pane_t4_ParamLimits

0xd823,	// (0x00074797) vid6_indi_pane_t4

0x0003,

0xfb3f,	// (0x00076ab3) vid6_indi_pane_t_ParamLimits

0xfb3f,	// (0x00076ab3) vid6_indi_pane_t

0xd847,	// (0x000747bb) wait_bar_pane_cp08

0x92fd,	// (0x00070271) main_cset_text2_pane_t1_ParamLimits

0x92fd,	// (0x00070271) main_cset_text2_pane_t1

0x9297,	// (0x0007020b) listscroll_gen_pane_cp06_t1_ParamLimits

0x9297,	// (0x0007020b) listscroll_gen_pane_cp06_t1

0xad6d,	// (0x00071ce1) main_cam6_set_pane

0xb4ae,	// (0x00072422) bg_tb_trans_pane_cp06_ParamLimits

0xee91,	// (0x00075e05) cam4_indicators_pane_g1_ParamLimits

0xeea1,	// (0x00075e15) cam4_indicators_pane_g2_ParamLimits

0xf8ad,	// (0x00076821) cam4_indicators_pane_g_ParamLimits

0xeec1,	// (0x00075e35) cam4_indicators_pane_t1_ParamLimits

0x15f8,	// (0x0006856c) bg_tb_trans_pane_cp07_ParamLimits

0xee91,	// (0x00075e05) vid4_indicators_pane_g1_ParamLimits

0xeee3,	// (0x00075e57) vid4_indicators_pane_g2_ParamLimits

0xeef3,	// (0x00075e67) vid4_indicators_pane_g3_ParamLimits

0xef04,	// (0x00075e78) vid4_indicators_pane_g4_ParamLimits

0xf8bf,	// (0x00076833) vid4_indicators_pane_g_ParamLimits

0xef20,	// (0x00075e94) vid4_indicators_pane_t1_ParamLimits

0xefb5,	// (0x00075f29) vid4_progress_pane_g1_ParamLimits

0xefc4,	// (0x00075f38) vid4_progress_pane_g2_ParamLimits

0xefd3,	// (0x00075f47) vid4_progress_pane_g3_ParamLimits

0xefe2,	// (0x00075f56) vid4_progress_pane_g4_ParamLimits

0xfa70,	// (0x000769e4) vid4_progress_pane_g_ParamLimits

0xefee,	// (0x00075f62) vid4_progress_pane_t1_ParamLimits

0xf004,	// (0x00075f78) vid4_progress_pane_t2_ParamLimits

0xf019,	// (0x00075f8d) vid4_progress_pane_t3_ParamLimits

0xfa7b,	// (0x000769ef) vid4_progress_pane_t_ParamLimits

0xf02e,	// (0x00075fa2) wait_bar_pane_cp07_ParamLimits

0x9318,	// (0x0007028c) main_cam6_set_pane_g2_ParamLimits

0x9318,	// (0x0007028c) main_cam6_set_pane_g2

0x933a,	// (0x000702ae) main_cset6_listscroll_pane_ParamLimits

0x933a,	// (0x000702ae) main_cset6_listscroll_pane

0x9354,	// (0x000702c8) main_cset6_slider_pane_ParamLimits

0x9354,	// (0x000702c8) main_cset6_slider_pane

0x936a,	// (0x000702de) main_cset6_text2_pane_ParamLimits

0x936a,	// (0x000702de) main_cset6_text2_pane

0xd857,	// (0x000747cb) main_cset6_text_pane

0xd0b2,	// (0x00074026) main_cset_list_pane_copy1_ParamLimits

0xd0b2,	// (0x00074026) main_cset_list_pane_copy1

0xd0c2,	// (0x00074036) scroll_pane_cp028_copy1

0x9378,	// (0x000702ec) cset_list_set_pane_copy1

0x938a,	// (0x000702fe) aid_position_infowindow_above_copy1

0x9392,	// (0x00070306) aid_position_infowindow_below_copy1

0x939a,	// (0x0007030e) cset_list_set_pane_g1_copy1

0x2ca1,	// (0x00069c15) cset_list_set_pane_g3_copy1_ParamLimits

0x2ca1,	// (0x00069c15) cset_list_set_pane_g3_copy1

0x2cb0,	// (0x00069c24) cset_list_set_pane_t1_copy1_ParamLimits

0x2cb0,	// (0x00069c24) cset_list_set_pane_t1_copy1

0x15f8,	// (0x0006856c) list_highlight_pane_cp021_copy1_ParamLimits

0x15f8,	// (0x0006856c) list_highlight_pane_cp021_copy1

0xd85f,	// (0x000747d3) cset6_slider_pane_ParamLimits

0xd85f,	// (0x000747d3) cset6_slider_pane

0xd88b,	// (0x000747ff) main_cset6_slider_pane_g1_ParamLimits

0xd88b,	// (0x000747ff) main_cset6_slider_pane_g1

0x93a2,	// (0x00070316) main_cset6_slider_pane_g2_ParamLimits

0x93a2,	// (0x00070316) main_cset6_slider_pane_g2

0xd0d7,	// (0x0007404b) main_cset6_slider_pane_g3_ParamLimits

0xd0d7,	// (0x0007404b) main_cset6_slider_pane_g3

0x866d,	// (0x0006f5e1) main_cset6_slider_pane_g4_ParamLimits

0x866d,	// (0x0006f5e1) main_cset6_slider_pane_g4

0x86b5,	// (0x0006f629) main_cset6_slider_pane_g5_ParamLimits

0x86b5,	// (0x0006f629) main_cset6_slider_pane_g5

0xd0d7,	// (0x0007404b) main_cset6_slider_pane_g7_ParamLimits

0xd0d7,	// (0x0007404b) main_cset6_slider_pane_g7

0xd0e3,	// (0x00074057) main_cset6_slider_pane_g8_ParamLimits

0xd0e3,	// (0x00074057) main_cset6_slider_pane_g8

0x8655,	// (0x0006f5c9) main_cset6_slider_pane_g9_ParamLimits

0x8655,	// (0x0006f5c9) main_cset6_slider_pane_g9

0x8661,	// (0x0006f5d5) main_cset6_slider_pane_g10_ParamLimits

0x8661,	// (0x0006f5d5) main_cset6_slider_pane_g10

0x866d,	// (0x0006f5e1) main_cset6_slider_pane_g11_ParamLimits

0x866d,	// (0x0006f5e1) main_cset6_slider_pane_g11

0x8679,	// (0x0006f5ed) main_cset6_slider_pane_g12_ParamLimits

0x8679,	// (0x0006f5ed) main_cset6_slider_pane_g12

0x8685,	// (0x0006f5f9) main_cset6_slider_pane_g13_ParamLimits

0x8685,	// (0x0006f5f9) main_cset6_slider_pane_g13

0x8691,	// (0x0006f605) main_cset6_slider_pane_g14_ParamLimits

0x8691,	// (0x0006f605) main_cset6_slider_pane_g14

0x93ca,	// (0x0007033e) main_cset6_slider_pane_g15_ParamLimits

0x93ca,	// (0x0007033e) main_cset6_slider_pane_g15

0x86b5,	// (0x0006f629) main_cset6_slider_pane_g16_ParamLimits

0x86b5,	// (0x0006f629) main_cset6_slider_pane_g16

0x86c1,	// (0x0006f635) main_cset6_slider_pane_g17_ParamLimits

0x86c1,	// (0x0006f635) main_cset6_slider_pane_g17

0x0011,

0xfb48,	// (0x00076abc) main_cset6_slider_pane_g_ParamLimits

0xfb48,	// (0x00076abc) main_cset6_slider_pane_g

0xd8b3,	// (0x00074827) main_cset6_slider_pane_t1_ParamLimits

0xd8b3,	// (0x00074827) main_cset6_slider_pane_t1

0xd8f4,	// (0x00074868) main_cset6_slider_pane_t2_ParamLimits

0xd8f4,	// (0x00074868) main_cset6_slider_pane_t2

0xd91f,	// (0x00074893) main_cset6_slider_pane_t3_ParamLimits

0xd91f,	// (0x00074893) main_cset6_slider_pane_t3

0x93e2,	// (0x00070356) main_cset6_slider_pane_t4_ParamLimits

0x93e2,	// (0x00070356) main_cset6_slider_pane_t4

0x940d,	// (0x00070381) main_cset6_slider_pane_t5_ParamLimits

0x940d,	// (0x00070381) main_cset6_slider_pane_t5

0xd94a,	// (0x000748be) main_cset6_slider_pane_t7_ParamLimits

0xd94a,	// (0x000748be) main_cset6_slider_pane_t7

0x9438,	// (0x000703ac) main_cset6_slider_pane_t8_ParamLimits

0x9438,	// (0x000703ac) main_cset6_slider_pane_t8

0x945c,	// (0x000703d0) main_cset6_slider_pane_t9_ParamLimits

0x945c,	// (0x000703d0) main_cset6_slider_pane_t9

0x9480,	// (0x000703f4) main_cset6_slider_pane_t10_ParamLimits

0x9480,	// (0x000703f4) main_cset6_slider_pane_t10

0x94a4,	// (0x00070418) main_cset6_slider_pane_t11_ParamLimits

0x94a4,	// (0x00070418) main_cset6_slider_pane_t11

0xd980,	// (0x000748f4) main_cset6_slider_pane_t14_ParamLimits

0xd980,	// (0x000748f4) main_cset6_slider_pane_t14

0xd9b9,	// (0x0007492d) main_cset6_slider_pane_t15_ParamLimits

0xd9b9,	// (0x0007492d) main_cset6_slider_pane_t15

0x000b,

0xfb6d,	// (0x00076ae1) main_cset6_slider_pane_t_ParamLimits

0xfb6d,	// (0x00076ae1) main_cset6_slider_pane_t

0xd1a5,	// (0x00074119) cset_slider_pane_g1_copy1

0xd1ae,	// (0x00074122) cset_slider_pane_g2_copy1

0xd1b7,	// (0x0007412b) cset_slider_pane_g3_copy1

0xad6d,	// (0x00071ce1) bg_popup_sub_pane_cp011_copy1

0xd232,	// (0x000741a6) main_cset_text_pane_g1_copy1

0xd23a,	// (0x000741ae) main_cset_text_pane_t1_copy1

0xd248,	// (0x000741bc) main_cset_text_pane_t2_copy1

0xd256,	// (0x000741ca) main_cset_text_pane_t3_copy1

0xd264,	// (0x000741d8) main_cset_text_pane_t4_copy1

0xd272,	// (0x000741e6) main_cset_text_pane_t5_copy1

0xd280,	// (0x000741f4) main_cset_text_pane_t6_copy1

0xd28e,	// (0x00074202) main_cset_text_pane_t7_copy1

0x94c8,	// (0x0007043c) main_cset_text2_pane_t1_copy1

0x15f8,	// (0x0006856c) main_ncimui_pane

0x699f,	// (0x0006d913) popup_query_ncimui_window_ParamLimits

0x699f,	// (0x0006d913) popup_query_ncimui_window

0xeb7e,	// (0x00075af2) field_cale_ev2_pane_g4_ParamLimits

0xeb7e,	// (0x00075af2) field_cale_ev2_pane_g4

0x7b54,	// (0x0006eac8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7b54,	// (0x0006eac8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf847,	// (0x000767bb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf847,	// (0x000767bb) cell_video_dialer_keypad_pane_g

0x7b6c,	// (0x0006eae0) cell_video_dialer_keypad_pane_t1

0xad6d,	// (0x00071ce1) bg_popup_window_pane_cp012

0x121d,	// (0x00068191) heading_pane_cp06

0xda42,	// (0x000749b6) ncim_query_content_pane

0xad6d,	// (0x00071ce1) bg_popup_heading_pane_cp01

0xda4a,	// (0x000749be) ncim_heading_pane_t1

0xda58,	// (0x000749cc) ncim_indicator_popup_pane

0xda6a,	// (0x000749de) ncim_query_button_pane

0xda7e,	// (0x000749f2) ncim_query_content_pane_t1

0xda90,	// (0x00074a04) ncim_query_content_pane_t2

0x0005,

0xfbb1,	// (0x00076b25) ncim_query_content_pane_t

0xdaca,	// (0x00074a3e) ncim_query_list_pane

0xdadc,	// (0x00074a50) ncim_query_popup_pane

0xda58,	// (0x000749cc) ncim_indicator_popup_pane_ParamLimits

0x9607,	// (0x0007057b) ncim_query_content_pane_g1_ParamLimits

0x9607,	// (0x0007057b) ncim_query_content_pane_g1

0xda7e,	// (0x000749f2) ncim_query_content_pane_t1_ParamLimits

0xda90,	// (0x00074a04) ncim_query_content_pane_t2_ParamLimits

0x9613,	// (0x00070587) ncim_query_content_pane_t3_ParamLimits

0x9613,	// (0x00070587) ncim_query_content_pane_t3

0x963b,	// (0x000705af) ncim_query_content_pane_t4_ParamLimits

0x963b,	// (0x000705af) ncim_query_content_pane_t4

0x9663,	// (0x000705d7) ncim_query_content_pane_t5_ParamLimits

0x9663,	// (0x000705d7) ncim_query_content_pane_t5

0xdaa2,	// (0x00074a16) ncim_query_content_pane_t6_ParamLimits

0xdaa2,	// (0x00074a16) ncim_query_content_pane_t6

0xfbb1,	// (0x00076b25) ncim_query_content_pane_t_ParamLimits

0xdaca,	// (0x00074a3e) ncim_query_list_pane_ParamLimits

0xdadc,	// (0x00074a50) ncim_query_popup_pane_ParamLimits

0xdaf0,	// (0x00074a64) wait_bar_pane_cp04

0xad6d,	// (0x00071ce1) input_focus_pane_cp011

0xdaf8,	// (0x00074a6c) ncim_query_popup_pane_t1

0xdb06,	// (0x00074a7a) ncim_list_query_list_pane_ParamLimits

0xdb06,	// (0x00074a7a) ncim_list_query_list_pane

0xad6d,	// (0x00071ce1) bg_button_pane_cp027

0xdb19,	// (0x00074a8d) ncim_query_button_pane_g1

0xad6d,	// (0x00071ce1) list_highlight_pane_cp012

0xdb23,	// (0x00074a97) ncim_list_query_list_pane_g1

0xdb2b,	// (0x00074a9f) ncim_list_query_list_pane_t1

0xeeb1,	// (0x00075e25) cam4_indicators_pane_g3_ParamLimits

0xeeb1,	// (0x00075e25) cam4_indicators_pane_g3

0xef10,	// (0x00075e84) vid4_indicators_pane_g5_ParamLimits

0xef10,	// (0x00075e84) vid4_indicators_pane_g5

0x1067,	// (0x00067fdb) vid4_progress_pane_g5_ParamLimits

0x1067,	// (0x00067fdb) vid4_progress_pane_g5

0x94f7,	// (0x0007046b) main_ncimui_pane_g1

0x955d,	// (0x000704d1) ncimui_group_query_pane_ParamLimits

0x955d,	// (0x000704d1) ncimui_group_query_pane

0x95a5,	// (0x00070519) ncimui_list_pane_ParamLimits

0x95a5,	// (0x00070519) ncimui_list_pane

0x95ca,	// (0x0007053e) ncimui_text_pane_ParamLimits

0x95ca,	// (0x0007053e) ncimui_text_pane

0x968b,	// (0x000705ff) ncimui_text_pane_t1_ParamLimits

0x968b,	// (0x000705ff) ncimui_text_pane_t1

0xdb42,	// (0x00074ab6) ncimui_list_single_graphic_pane_ParamLimits

0xdb42,	// (0x00074ab6) ncimui_list_single_graphic_pane

0x96a9,	// (0x0007061d) ncimui_query_pane_ParamLimits

0x96a9,	// (0x0007061d) ncimui_query_pane

0xad6d,	// (0x00071ce1) list_highlight_pane_cp013

0xdb52,	// (0x00074ac6) ncim_list_query_list_pane_t1_copy1

0xdb60,	// (0x00074ad4) ncim_list_single_graphic_pane_g1

0xdb68,	// (0x00074adc) ncim_query_button_pane_cp01

0xdb74,	// (0x00074ae8) ncim_query_entry_pane_ParamLimits

0xdb74,	// (0x00074ae8) ncim_query_entry_pane

0xdb87,	// (0x00074afb) ncimui_query_pane_g1

0xdb93,	// (0x00074b07) ncimui_query_pane_t1_ParamLimits

0xdb93,	// (0x00074b07) ncimui_query_pane_t1

0x15f8,	// (0x0006856c) input_focus_pane_cp012

0xdbac,	// (0x00074b20) ncim_query_entry_pane_t1

0xb546,	// (0x000724ba) main_im_pane_ParamLimits

0x15f8,	// (0x0006856c) main_mobtv_pane_ParamLimits

0x15f8,	// (0x0006856c) main_mobtv_pane

0x8655,	// (0x0006f5c9) main_cset6_slider_pane_g18_ParamLimits

0x8655,	// (0x0006f5c9) main_cset6_slider_pane_g18

0x8685,	// (0x0006f5f9) main_cset6_slider_pane_g19_ParamLimits

0x8685,	// (0x0006f5f9) main_cset6_slider_pane_g19

0xb4ca,	// (0x0007243e) bg_main_mobtv_pane_ParamLimits

0xb4ca,	// (0x0007243e) bg_main_mobtv_pane

0x96b9,	// (0x0007062d) main_mobtv_info_pane

0x96c2,	// (0x00070636) main_mobtv_loading_pane_ParamLimits

0x96c2,	// (0x00070636) main_mobtv_loading_pane

0xdbbe,	// (0x00074b32) main_mobtv_pg_channel_list_pane

0xdbc8,	// (0x00074b3c) main_mobtv_pg_hdr_pane

0x96cf,	// (0x00070643) main_mobtv_programe_curr_pane_ParamLimits

0x96cf,	// (0x00070643) main_mobtv_programe_curr_pane

0x96dc,	// (0x00070650) main_mobtv_programe_next_pane_ParamLimits

0x96dc,	// (0x00070650) main_mobtv_programe_next_pane

0xdbd1,	// (0x00074b45) popup_mobtv_noti_window

0xb80f,	// (0x00072783) main_tv_pg_hdr_pane_g1

0xdbd9,	// (0x00074b4d) main_tv_pg_hdr_pane_g2

0xdbe1,	// (0x00074b55) main_tv_pg_hdr_pane_g3

0xdbe9,	// (0x00074b5d) main_tv_pg_hdr_pane_g4

0xdbf1,	// (0x00074b65) main_tv_pg_hdr_pane_g5

0xdbf9,	// (0x00074b6d) main_tv_pg_hdr_pane_g6

0xdc01,	// (0x00074b75) main_tv_pg_hdr_pane_g7

0xdc09,	// (0x00074b7d) main_tv_pg_hdr_pane_g8

0xdc11,	// (0x00074b85) main_tv_pg_hdr_pane_g9

0xdc19,	// (0x00074b8d) main_tv_pg_hdr_pane_g10

0xdc23,	// (0x00074b97) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbe,	// (0x00076b32) main_tv_pg_hdr_pane_g

0xdc2d,	// (0x00074ba1) main_tv_pg_hdr_pane_t1

0xdc3b,	// (0x00074baf) main_tv_pg_hdr_pane_t2

0xdc49,	// (0x00074bbd) main_tv_pg_hdr_pane_t3

0xdc57,	// (0x00074bcb) main_tv_pg_hdr_pane_t4

0xdc65,	// (0x00074bd9) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd5,	// (0x00076b49) main_tv_pg_hdr_pane_t

0xdc73,	// (0x00074be7) single_mobtv_pg_channel_pane_ParamLimits

0xdc73,	// (0x00074be7) single_mobtv_pg_channel_pane

0xdc85,	// (0x00074bf9) single_mobtv_pg_channel_table_pane

0xdc8e,	// (0x00074c02) single_mobtv_pg_channel_thumb_pane

0xdc97,	// (0x00074c0b) single_tv_pg_channel_pane_g1

0xdca0,	// (0x00074c14) single_tv_pg_channel_pane_g2

0x0001,

0xfbe0,	// (0x00076b54) single_tv_pg_channel_pane_g

0xb4ae,	// (0x00072422) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xb4ae,	// (0x00072422) bg_single_mobtv_pg_channel_thumb_pane

0xdca9,	// (0x00074c1d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdca9,	// (0x00074c1d) single_mobtv_pg_channel_thumb_pane_g1

0xdcb7,	// (0x00074c2b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdcb7,	// (0x00074c2b) single_mobtv_pg_channel_thumb_pane_g2

0xdcc3,	// (0x00074c37) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdcc3,	// (0x00074c37) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe5,	// (0x00076b59) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe5,	// (0x00076b59) single_mobtv_pg_channel_thumb_pane_g

0xdccf,	// (0x00074c43) single_mobtv_pg_channel_thumb_pane_t1

0xdcdd,	// (0x00074c51) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbec,	// (0x00076b60) single_mobtv_pg_channel_thumb_pane_t

0xb80f,	// (0x00072783) bg_single_mobtv_pg_channel_table_pane_g1

0xb80f,	// (0x00072783) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3ef,	// (0x00076363) bg_single_mobtv_pg_channel_table_pane_g

0xdceb,	// (0x00074c5f) single_mobtv_pg_channel_table_pane_t1

0xdcf9,	// (0x00074c6d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf1,	// (0x00076b65) single_mobtv_pg_channel_table_pane_t

0x96f1,	// (0x00070665) main_mobtv_info_pane_g1_ParamLimits

0x96f1,	// (0x00070665) main_mobtv_info_pane_g1

0x970d,	// (0x00070681) main_mobtv_info_pane_t1_ParamLimits

0x970d,	// (0x00070681) main_mobtv_info_pane_t1

0x9773,	// (0x000706e7) main_mobtv_info_pane_t2_ParamLimits

0x9773,	// (0x000706e7) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x00076b6f) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x00076b6f) main_mobtv_info_pane_t

0x97f6,	// (0x0007076a) wait_bar_pane_cp05

0x9806,	// (0x0007077a) main_mobtv_loading_pane_g1_ParamLimits

0x9806,	// (0x0007077a) main_mobtv_loading_pane_g1

0x9817,	// (0x0007078b) main_mobtv_loading_pane_g2_ParamLimits

0x9817,	// (0x0007078b) main_mobtv_loading_pane_g2

0x9823,	// (0x00070797) main_mobtv_loading_pane_g3_ParamLimits

0x9823,	// (0x00070797) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x00076b76) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x00076b76) main_mobtv_loading_pane_g

0xdd07,	// (0x00074c7b) main_mobtv_loading_pane_t1_ParamLimits

0xdd07,	// (0x00074c7b) main_mobtv_loading_pane_t1

0xdd1f,	// (0x00074c93) main_mobtv_loading_pane_t2_ParamLimits

0xdd1f,	// (0x00074c93) main_mobtv_loading_pane_t2

0x0001,

0xfc09,	// (0x00076b7d) main_mobtv_loading_pane_t_ParamLimits

0xfc09,	// (0x00076b7d) main_mobtv_loading_pane_t

0x9834,	// (0x000707a8) wait_bar_pane_cp06_ParamLimits

0x9834,	// (0x000707a8) wait_bar_pane_cp06

0xdd43,	// (0x00074cb7) main_mobtv_programe_curr_pane_t1

0xdd51,	// (0x00074cc5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0e,	// (0x00076b82) main_mobtv_programe_curr_pane_t

0xdd5f,	// (0x00074cd3) main_mobtv_programe_next_pane_t1

0xdd6d,	// (0x00074ce1) main_mobtv_programe_next_pane_t2

0xdd7b,	// (0x00074cef) main_mobtv_programe_next_pane_t3

0x0002,

0xfc13,	// (0x00076b87) main_mobtv_programe_next_pane_t

0xad6d,	// (0x00071ce1) bg_popup_mobtv_noti_window_pane

0xdd89,	// (0x00074cfd) popup_mobtv_noti_window_g1

0xdd91,	// (0x00074d05) popup_mobtv_noti_window_t1

0xdd9f,	// (0x00074d13) popup_mobtv_noti_window_t2

0x0001,

0xfc1a,	// (0x00076b8e) popup_mobtv_noti_window_t

0xb80f,	// (0x00072783) bg_popup_mobtv_noti_window_pane_g1

0xad6d,	// (0x00071ce1) sc_clock_pane

0xad6d,	// (0x00071ce1) main_fs_bigclock_pane

0x907f,	// (0x0006fff3) blid2_tripm_pane_t4_ParamLimits

0x907f,	// (0x0006fff3) blid2_tripm_pane_t4

0x9843,	// (0x000707b7) sc_clock_pane_g1_ParamLimits

0x9843,	// (0x000707b7) sc_clock_pane_g1

0x9855,	// (0x000707c9) sc_clock_pane_t1_ParamLimits

0x9855,	// (0x000707c9) sc_clock_pane_t1

0x9877,	// (0x000707eb) sc_clock_pane_t2_ParamLimits

0x9877,	// (0x000707eb) sc_clock_pane_t2

0x988d,	// (0x00070801) sc_clock_pane_t3_ParamLimits

0x988d,	// (0x00070801) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x00076b93) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x00076b93) sc_clock_pane_t

0xa1f0,	// (0x00071164) main_fs_bigclock_indicator_pane_ParamLimits

0xa1f0,	// (0x00071164) main_fs_bigclock_indicator_pane

0x9929,	// (0x0007089d) main_fs_bigclock_pane_g1_ParamLimits

0x9929,	// (0x0007089d) main_fs_bigclock_pane_g1

0xa1fc,	// (0x00071170) main_fs_bigclock_pane_t1_ParamLimits

0xa1fc,	// (0x00071170) main_fs_bigclock_pane_t1

0xa20e,	// (0x00071182) main_fs_bigclock_pane_t2_ParamLimits

0xa20e,	// (0x00071182) main_fs_bigclock_pane_t2

0xa220,	// (0x00071194) main_fs_bigclock_pane_t3_ParamLimits

0xa220,	// (0x00071194) main_fs_bigclock_pane_t3

0x0002,

0xfde8,	// (0x00076d5c) main_fs_bigclock_pane_t_ParamLimits

0xfde8,	// (0x00076d5c) main_fs_bigclock_pane_t

0xe7bb,	// (0x0007572f) main_fs_bigclock_indicator_pane_g1

0xda72,	// (0x000749e6) ncim_query_content_pane_g2_ParamLimits

0xda72,	// (0x000749e6) ncim_query_content_pane_g2

0x0001,

0xfbac,	// (0x00076b20) ncim_query_content_pane_g_ParamLimits

0xfbac,	// (0x00076b20) ncim_query_content_pane_g

0x98a4,	// (0x00070818) sc_clock_pane_t4_ParamLimits

0x98a4,	// (0x00070818) sc_clock_pane_t4

0x15f8,	// (0x0006856c) main_radioblah_pane

0xee25,	// (0x00075d99) cell_call4_button_pane_t1_copy1_ParamLimits

0xee25,	// (0x00075d99) cell_call4_button_pane_t1_copy1

0x950f,	// (0x00070483) main_ncimui_pane_t1_ParamLimits

0x950f,	// (0x00070483) main_ncimui_pane_t1

0x9529,	// (0x0007049d) main_ncimui_pane_t2_ParamLimits

0x9529,	// (0x0007049d) main_ncimui_pane_t2

0x0002,

0xfba5,	// (0x00076b19) main_ncimui_pane_t_ParamLimits

0xfba5,	// (0x00076b19) main_ncimui_pane_t

0xdee0,	// (0x00074e54) main_radioblah_anim_pane_ParamLimits

0xdee0,	// (0x00074e54) main_radioblah_anim_pane

0xdef1,	// (0x00074e65) main_radioblah_info_pane_ParamLimits

0xdef1,	// (0x00074e65) main_radioblah_info_pane

0xdf05,	// (0x00074e79) main_radioblah_pane_t1_ParamLimits

0xdf05,	// (0x00074e79) main_radioblah_pane_t1

0xdf21,	// (0x00074e95) main_radioblah_pane_t2_ParamLimits

0xdf21,	// (0x00074e95) main_radioblah_pane_t2

0x0003,

0xfc40,	// (0x00076bb4) main_radioblah_pane_t_ParamLimits

0xfc40,	// (0x00076bb4) main_radioblah_pane_t

0x9973,	// (0x000708e7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9973,	// (0x000708e7) main_radioblah_rocker_ctrl_pane

0xdf69,	// (0x00074edd) main_radioblah_info_pane_t1_ParamLimits

0xdf69,	// (0x00074edd) main_radioblah_info_pane_t1

0x99c7,	// (0x0007093b) main_radioblah_info_pane_t2_ParamLimits

0x99c7,	// (0x0007093b) main_radioblah_info_pane_t2

0x0003,

0xfc49,	// (0x00076bbd) main_radioblah_info_pane_t_ParamLimits

0xfc49,	// (0x00076bbd) main_radioblah_info_pane_t

0xb80f,	// (0x00072783) main_radioblah_rocker_ctrl_pane_g1

0x9a75,	// (0x000709e9) main_radioblah_rocker_ctrl_pane_g2

0x9a7d,	// (0x000709f1) main_radioblah_rocker_ctrl_pane_g3

0x9a85,	// (0x000709f9) main_radioblah_rocker_ctrl_pane_g4

0x9a8d,	// (0x00070a01) main_radioblah_rocker_ctrl_pane_g5

0x9a95,	// (0x00070a09) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc52,	// (0x00076bc6) main_radioblah_rocker_ctrl_pane_g

0x94c8,	// (0x0007043c) main_cset_text2_pane_t1_copy1_ParamLimits

0xee81,	// (0x00075df5) cam4_image_uncrop_qvga_pane

0xeedb,	// (0x00075e4f) vid4_image_uncrop_qcif_pane

0xf04f,	// (0x00075fc3) cam6_image_uncrop_qvga_pane_ParamLimits

0xf04f,	// (0x00075fc3) cam6_image_uncrop_qvga_pane

0xd73d,	// (0x000746b1) vid6_image_uncrop_qcif_pane_ParamLimits

0xd73d,	// (0x000746b1) vid6_image_uncrop_qcif_pane

0xad6d,	// (0x00071ce1) bg_popup_preview_window_pane_cp03

0xda18,	// (0x0007498c) list_cset_text2_pane

0xda20,	// (0x00074994) main_cset6_text2_pane_g1

0xda28,	// (0x0007499c) main_cset6_text2_pane_t1

0x9a9d,	// (0x00070a11) list_cset_text2_pane_t1_ParamLimits

0x9a9d,	// (0x00070a11) list_cset_text2_pane_t1

0x15f8,	// (0x0006856c) main_radioblah_pane_ParamLimits

0x97e4,	// (0x00070758) main_mobtv_info_pane_t3_ParamLimits

0x97e4,	// (0x00070758) main_mobtv_info_pane_t3

0x9961,	// (0x000708d5) main_radioblah_pane_g1

0x999b,	// (0x0007090f) main_radioblah_info_pane_g1

0x9a1a,	// (0x0007098e) main_radioblah_info_pane_t3_ParamLimits

0x9a1a,	// (0x0007098e) main_radioblah_info_pane_t3

0x4e3f,	// (0x0006bdb3) highlight_cell_cale_month_pane_ParamLimits

0x4e3f,	// (0x0006bdb3) highlight_cell_cale_month_pane

0xad6d,	// (0x00071ce1) main_phob_fisheye_pane

0xc9bc,	// (0x00073930) scroll_pane_cp0031_ParamLimits

0xc9bc,	// (0x00073930) scroll_pane_cp0031

0xd847,	// (0x000747bb) wait_bar_pane_cp08_ParamLimits

0x9378,	// (0x000702ec) cset_list_set_pane_copy1_ParamLimits

0xdfa3,	// (0x00074f17) highlight_cell_cale_month_pane_g1

0x9ab6,	// (0x00070a2a) highlight_cell_cale_month_pane_t1

0xdfab,	// (0x00074f1f) list_gen_pane_cp01

0xd0c2,	// (0x00074036) scroll_pane_01

0x2ce2,	// (0x00069c56) list_single_double_fisheye_pane

0x2ceb,	// (0x00069c5f) list_double_fisheye_pane_g1_ParamLimits

0x2ceb,	// (0x00069c5f) list_double_fisheye_pane_g1

0x2cf7,	// (0x00069c6b) list_double_fisheye_pane_g2_ParamLimits

0x2cf7,	// (0x00069c6b) list_double_fisheye_pane_g2

0x2d0b,	// (0x00069c7f) list_double_fisheye_pane_g3_ParamLimits

0x2d0b,	// (0x00069c7f) list_double_fisheye_pane_g3

0x0004,

0xfc5f,	// (0x00076bd3) list_double_fisheye_pane_g_ParamLimits

0xfc5f,	// (0x00076bd3) list_double_fisheye_pane_g

0x2d34,	// (0x00069ca8) list_double_fisheye_pane_t1_ParamLimits

0x2d34,	// (0x00069ca8) list_double_fisheye_pane_t1

0x2d4f,	// (0x00069cc3) list_double_fisheye_pane_t2_ParamLimits

0x2d4f,	// (0x00069cc3) list_double_fisheye_pane_t2

0x0001,

0xfc6a,	// (0x00076bde) list_double_fisheye_pane_t_ParamLimits

0xfc6a,	// (0x00076bde) list_double_fisheye_pane_t

0xad6d,	// (0x00071ce1) main_call5_pane

0x98cd,	// (0x00070841) sc_swipe_pane_ParamLimits

0x98cd,	// (0x00070841) sc_swipe_pane

0x9ad5,	// (0x00070a49) call5_image_pane_ParamLimits

0x9ad5,	// (0x00070a49) call5_image_pane

0x9aea,	// (0x00070a5e) call5_swipe_1_pane_ParamLimits

0x9aea,	// (0x00070a5e) call5_swipe_1_pane

0x9afb,	// (0x00070a6f) call5_swipe_2_pane_ParamLimits

0x9afb,	// (0x00070a6f) call5_swipe_2_pane

0x9b20,	// (0x00070a94) popup_call5_audio_first_window_ParamLimits

0x9b20,	// (0x00070a94) popup_call5_audio_first_window

0xb4ae,	// (0x00072422) call5_swipe_1_pane_g1_ParamLimits

0xb4ae,	// (0x00072422) call5_swipe_1_pane_g1

0xdfb4,	// (0x00074f28) call5_swipe_1_pane_g2_ParamLimits

0xdfb4,	// (0x00074f28) call5_swipe_1_pane_g2

0x0001,

0xfc6f,	// (0x00076be3) call5_swipe_1_pane_g_ParamLimits

0xfc6f,	// (0x00076be3) call5_swipe_1_pane_g

0xdfc0,	// (0x00074f34) call5_swipe_1_pane_t1_ParamLimits

0xdfc0,	// (0x00074f34) call5_swipe_1_pane_t1

0xb4ae,	// (0x00072422) call5_swipe_2_pane_g1_ParamLimits

0xb4ae,	// (0x00072422) call5_swipe_2_pane_g1

0xdfd5,	// (0x00074f49) call5_swipe_2_pane_g2_ParamLimits

0xdfd5,	// (0x00074f49) call5_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x00076be8) call5_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x00076be8) call5_swipe_2_pane_g

0xdfe1,	// (0x00074f55) call5_swipe_2_pane_t1_ParamLimits

0xdfe1,	// (0x00074f55) call5_swipe_2_pane_t1

0xdff6,	// (0x00074f6a) sc_swipe_pane_g1_ParamLimits

0xdff6,	// (0x00074f6a) sc_swipe_pane_g1

0xe003,	// (0x00074f77) sc_swipe_pane_g2_ParamLimits

0xe003,	// (0x00074f77) sc_swipe_pane_g2

0x0001,

0xfc79,	// (0x00076bed) sc_swipe_pane_g_ParamLimits

0xfc79,	// (0x00076bed) sc_swipe_pane_g

0xe00f,	// (0x00074f83) sc_swipe_pane_t1_ParamLimits

0xe00f,	// (0x00074f83) sc_swipe_pane_t1

0xad6d,	// (0x00071ce1) main_cmail_launcher_pane

0x9b2f,	// (0x00070aa3) aid_size_cell_cmail_l_ParamLimits

0x9b2f,	// (0x00070aa3) aid_size_cell_cmail_l

0x9b48,	// (0x00070abc) grid_cmail_l_pane_ParamLimits

0x9b48,	// (0x00070abc) grid_cmail_l_pane

0x9b5d,	// (0x00070ad1) cell_cmail_l_pane_ParamLimits

0x9b5d,	// (0x00070ad1) cell_cmail_l_pane

0x9b7f,	// (0x00070af3) cell_cmail_l_pane_g1_ParamLimits

0x9b7f,	// (0x00070af3) cell_cmail_l_pane_g1

0x9b8f,	// (0x00070b03) cell_cmail_l_pane_t1_ParamLimits

0x9b8f,	// (0x00070b03) cell_cmail_l_pane_t1

0x9ba5,	// (0x00070b19) cell_cmail_l_pane_t2_ParamLimits

0x9ba5,	// (0x00070b19) cell_cmail_l_pane_t2

0x0001,

0xfc7e,	// (0x00076bf2) cell_cmail_l_pane_t_ParamLimits

0xfc7e,	// (0x00076bf2) cell_cmail_l_pane_t

0x15f8,	// (0x0006856c) grid_highlight_pane_cp018_ParamLimits

0x15f8,	// (0x0006856c) grid_highlight_pane_cp018

0x33ad,	// (0x0006a321) main2_pane_ParamLimits

0x33ad,	// (0x0006a321) main2_pane

0xb63f,	// (0x000725b3) popup_sp_fs_action_menu_bg_pane_g1

0xb647,	// (0x000725bb) popup_sp_fs_action_menu_bg_pane_g2

0xb64f,	// (0x000725c3) popup_sp_fs_action_menu_bg_pane_g3

0xb657,	// (0x000725cb) popup_sp_fs_action_menu_bg_pane_g4

0xb65f,	// (0x000725d3) popup_sp_fs_action_menu_bg_pane_g5

0xb667,	// (0x000725db) popup_sp_fs_action_menu_bg_pane_g6

0xb66f,	// (0x000725e3) popup_sp_fs_action_menu_bg_pane_g7

0xb677,	// (0x000725eb) popup_sp_fs_action_menu_bg_pane_g8

0xb67f,	// (0x000725f3) popup_sp_fs_action_menu_bg_pane_g9

0xb687,	// (0x000725fb) popup_sp_fs_action_menu_bg_pane_g10

0xb687,	// (0x000725fb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x000760b9) popup_sp_fs_action_menu_bg_pane_g

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g3_g1

0xb835,	// (0x000727a9) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_x2_t3_g3_g2

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00076167) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00076167) list_medium_line_x2_t3_g3_g

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g3_t1

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g3_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g3_t2

0xb854,	// (0x000727c8) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb854,	// (0x000727c8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0007616e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0007616e) list_medium_line_x2_t3_g3_t

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g2_g1

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00076175) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00076175) list_medium_line_x2_t3_g2_g

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g2_t1

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g2_t2

0xb854,	// (0x000727c8) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb854,	// (0x000727c8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0007616e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0007616e) list_medium_line_x2_t3_g2_t

0xb829,	// (0x0007279d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t4_g4_g1

0xb835,	// (0x000727a9) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_x2_t4_g4_g2

0xb835,	// (0x000727a9) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_x2_t4_g4_g3

0xb829,	// (0x0007279d) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0007617a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0007617a) list_medium_line_x2_t4_g4_g

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g4_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g4_t1

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g4_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g4_t2

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g4_t3_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g4_t3

0xb854,	// (0x000727c8) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb854,	// (0x000727c8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00076183) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00076183) list_medium_line_x2_t4_g4_t

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g4_g1

0xb835,	// (0x000727a9) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_x2_t2_g4_g2

0xb835,	// (0x000727a9) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_x2_t2_g4_g3

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0007617a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0007617a) list_medium_line_x2_t2_g4_g

0xb841,	// (0x000727b5) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t2_g4_t1

0xb854,	// (0x000727c8) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb854,	// (0x000727c8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x000761ea) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x000761ea) list_medium_line_x2_t2_g4_t

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g3_g1

0xb835,	// (0x000727a9) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_x2_t2_g3_g2

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00076167) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00076167) list_medium_line_x2_t2_g3_g

0xb841,	// (0x000727b5) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t2_g3_t1

0xb854,	// (0x000727c8) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb854,	// (0x000727c8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x000761ea) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x000761ea) list_medium_line_x2_t2_g3_t

0x4f9c,	// (0x0006bf10) main_sp_fs_list_pane_ParamLimits

0x4f9c,	// (0x0006bf10) main_sp_fs_list_pane

0x4fa9,	// (0x0006bf1d) sp_fs_scroll_pane_ParamLimits

0x4fa9,	// (0x0006bf1d) sp_fs_scroll_pane

0xbbb1,	// (0x00072b25) list_medium_line_x2_t3_t1

0xbbb1,	// (0x00072b25) list_medium_line_x2_t3_t2

0xbbc0,	// (0x00072b34) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00076235) list_medium_line_x2_t3_t

0xbbb1,	// (0x00072b25) list_medium_line_x3_t4_t1

0xbbb1,	// (0x00072b25) list_medium_line_x3_t4_t2

0xbbb1,	// (0x00072b25) list_medium_line_x3_t4_t3

0xbbb1,	// (0x00072b25) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0007623c) list_medium_line_x3_t4_t

0xbbb1,	// (0x00072b25) list_medium_line_x4_t5_t1

0xbbb1,	// (0x00072b25) list_medium_line_x4_t5_t2

0xbbb1,	// (0x00072b25) list_medium_line_x4_t5_t3

0xbbb1,	// (0x00072b25) list_medium_line_x4_t5_t4

0xbbb1,	// (0x00072b25) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00076245) list_medium_line_x4_t5_t

0xb829,	// (0x0007279d) list_medium_line_t4_g4_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_t4_g4_g1

0xb829,	// (0x0007279d) list_medium_line_t4_g4_g2_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_t4_g4_g2

0xb829,	// (0x0007279d) list_medium_line_t4_g4_g3_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_t4_g4_g3

0xb829,	// (0x0007279d) list_medium_line_t4_g4_g4_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_t4_g4_g4

0x0003,

0xf2dc,	// (0x00076250) list_medium_line_t4_g4_g_ParamLimits

0xf2dc,	// (0x00076250) list_medium_line_t4_g4_g

0xb841,	// (0x000727b5) list_medium_line_t4_g4_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t4_g4_t1

0xb841,	// (0x000727b5) list_medium_line_t4_g4_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t4_g4_t2

0xb841,	// (0x000727b5) list_medium_line_t4_g4_t3_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t4_g4_t3

0xb841,	// (0x000727b5) list_medium_line_t4_g4_t4_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t4_g4_t4

0x0003,

0xf2e5,	// (0x00076259) list_medium_line_t4_g4_t_ParamLimits

0xf2e5,	// (0x00076259) list_medium_line_t4_g4_t

0x5077,	// (0x0006bfeb) chi_dic_find_pane_g1

0x67a5,	// (0x0006d719) main_tport_pane

0xbbb1,	// (0x00072b25) list_medium_line_plain_t1

0xb829,	// (0x0007279d) list_medium_line_t2_g2_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_t2_g2_g1

0xefa8,	// (0x00075f1c) list_medium_line_t2_g2_g2_ParamLimits

0xefa8,	// (0x00075f1c) list_medium_line_t2_g2_g2

0x0001,

0xf9b6,	// (0x0007692a) list_medium_line_t2_g2_g_ParamLimits

0xf9b6,	// (0x0007692a) list_medium_line_t2_g2_g

0xb841,	// (0x000727b5) list_medium_line_t2_g2_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t2_g2_t1

0xb841,	// (0x000727b5) list_medium_line_t2_g2_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t2_g2_t2

0x0001,

0xf9bb,	// (0x0007692f) list_medium_line_t2_g2_t_ParamLimits

0xf9bb,	// (0x0007692f) list_medium_line_t2_g2_t

0xd502,	// (0x00074476) aid_sp_fs_list_icon_a_sm

0xf03e,	// (0x00075fb2) aid_sp_fs_list_icon_d

0xd50a,	// (0x0007447e) aid_sp_fs_text_primary

0xf046,	// (0x00075fba) aid_sp_fs_text_secondary

0xd513,	// (0x00074487) list_medium_line

0xd513,	// (0x00074487) list_medium_line_g2

0xd513,	// (0x00074487) list_medium_line_g3

0xd513,	// (0x00074487) list_medium_line_plain

0xd513,	// (0x00074487) list_medium_line_plain_t2

0xd513,	// (0x00074487) list_medium_line_plain_t3

0xd513,	// (0x00074487) list_medium_line_right_icon

0xd513,	// (0x00074487) list_medium_line_right_iconx2

0xd513,	// (0x00074487) list_medium_line_t2

0xd513,	// (0x00074487) list_medium_line_t2_g2

0xd513,	// (0x00074487) list_medium_line_t2_g3

0xd513,	// (0x00074487) list_medium_line_t2_right_icon

0xd513,	// (0x00074487) list_medium_line_t2_right_iconx2

0xd513,	// (0x00074487) list_medium_line_t3

0xd513,	// (0x00074487) list_medium_line_t3_g2

0xd513,	// (0x00074487) list_medium_line_t3_g3

0xd513,	// (0x00074487) list_medium_line_t3_right_iconx2

0x2c72,	// (0x00069be6) list_medium_line_t4_g4

0x2c7b,	// (0x00069bef) list_medium_line_x2

0x2c7b,	// (0x00069bef) list_medium_line_x2_t2_g2

0x2c7b,	// (0x00069bef) list_medium_line_x2_t2_g3

0x2c7b,	// (0x00069bef) list_medium_line_x2_t2_g4

0x2c7b,	// (0x00069bef) list_medium_line_x2_t3

0x2c7b,	// (0x00069bef) list_medium_line_x2_t3_g2

0x2c7b,	// (0x00069bef) list_medium_line_x2_t3_g3

0x2c7b,	// (0x00069bef) list_medium_line_x2_t3_g4

0x2c7b,	// (0x00069bef) list_medium_line_x2_t4_g2

0x2c7b,	// (0x00069bef) list_medium_line_x2_t4_g4

0x2c84,	// (0x00069bf8) list_medium_line_x3

0x2c84,	// (0x00069bf8) list_medium_line_x3_t4

0x2c84,	// (0x00069bf8) list_medium_line_x3_t4_g4

0x2c72,	// (0x00069be6) list_medium_line_x4_t4

0x2c72,	// (0x00069be6) list_medium_line_x4_t4_g7

0x2c72,	// (0x00069be6) list_medium_line_x4_t5

0x2c8d,	// (0x00069c01) list_single_fs_dyc_pane_ParamLimits

0x2c8d,	// (0x00069c01) list_single_fs_dyc_pane

0xb829,	// (0x0007279d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x4_t4_g7_g1

0xb4ae,	// (0x00072422) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb4ae,	// (0x00072422) list_medium_line_x4_t4_g7_g2

0xb835,	// (0x000727a9) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_x4_t4_g7_g3

0xb4ae,	// (0x00072422) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb4ae,	// (0x00072422) list_medium_line_x4_t4_g7_g4

0xb4ae,	// (0x00072422) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb4ae,	// (0x00072422) list_medium_line_x4_t4_g7_g5

0xb4ae,	// (0x00072422) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb4ae,	// (0x00072422) list_medium_line_x4_t4_g7_g6

0xb4bc,	// (0x00072430) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb4bc,	// (0x00072430) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb86,	// (0x00076afa) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb86,	// (0x00076afa) list_medium_line_x4_t4_g7_g

0xb841,	// (0x000727b5) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x4_t4_g7_t1

0xb841,	// (0x000727b5) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x4_t4_g7_t2

0xb841,	// (0x000727b5) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x4_t4_g7_t3

0xd9f2,	// (0x00074966) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd9f2,	// (0x00074966) list_medium_line_x4_t4_g7_t4

0xda05,	// (0x00074979) list_medium_line_x4_t4_g7_t5_ParamLimits

0xda05,	// (0x00074979) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb95,	// (0x00076b09) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb95,	// (0x00076b09) list_medium_line_x4_t4_g7_t

0x2cc5,	// (0x00069c39) list_single_dyc_row_pane_ParamLimits

0x2cc5,	// (0x00069c39) list_single_dyc_row_pane

0x9ac4,	// (0x00070a38) call5_gesture_pane_ParamLimits

0x9ac4,	// (0x00070a38) call5_gesture_pane

0x9b0c,	// (0x00070a80) call5_windows_pane_ParamLimits

0x9b0c,	// (0x00070a80) call5_windows_pane

0x9bbd,	// (0x00070b31) call5_swipe_1_pane_cp_ParamLimits

0x9bbd,	// (0x00070b31) call5_swipe_1_pane_cp

0x9bc9,	// (0x00070b3d) call5_swipe_2_pane_cp_ParamLimits

0x9bc9,	// (0x00070b3d) call5_swipe_2_pane_cp

0xb7ab,	// (0x0007271f) call5_image_pane_cp

0x9bd5,	// (0x00070b49) popup_call5_audio_first_window_cp_ParamLimits

0x9bd5,	// (0x00070b49) popup_call5_audio_first_window_cp

0xdff6,	// (0x00074f6a) call5_swipe_1_pane_g1_cp_ParamLimits

0xdff6,	// (0x00074f6a) call5_swipe_1_pane_g1_cp

0xe024,	// (0x00074f98) call5_swipe_1_pane_g2_cp

0xe00f,	// (0x00074f83) call5_swipe_1_pane_t1_cp_ParamLimits

0xe00f,	// (0x00074f83) call5_swipe_1_pane_t1_cp

0xdff6,	// (0x00074f6a) call5_swipe_2_pane_g1_cp_ParamLimits

0xdff6,	// (0x00074f6a) call5_swipe_2_pane_g1_cp

0xe02c,	// (0x00074fa0) call5_swipe_2_pane_g2_cp

0xe034,	// (0x00074fa8) call5_swipe_2_pane_t1_cp_ParamLimits

0xe034,	// (0x00074fa8) call5_swipe_2_pane_t1_cp

0x15f8,	// (0x0006856c) main_sp_fs_email_pane

0xe049,	// (0x00074fbd) main_sp_fs_listscroll_pane_te

0x2d71,	// (0x00069ce5) popup_sp_fs_action_menu_pane_ParamLimits

0x2d71,	// (0x00069ce5) popup_sp_fs_action_menu_pane

0xb80f,	// (0x00072783) bg_sp_fs_ctrlbar_pane_g1

0xcbf0,	// (0x00073b64) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcc02,	// (0x00073b76) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcbf9,	// (0x00073b6d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb80f,	// (0x00072783) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc83,	// (0x00076bf7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc397,	// (0x0007330b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc397,	// (0x0007330b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe052,	// (0x00074fc6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe052,	// (0x00074fc6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe05e,	// (0x00074fd2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe05e,	// (0x00074fd2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8c,	// (0x00076c00) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8c,	// (0x00076c00) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe06a,	// (0x00074fde) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe06a,	// (0x00074fde) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xf05b,	// (0x00075fcf) list_medium_line_t2_right_icon_g1

0xbbb1,	// (0x00072b25) list_medium_line_t2_right_icon_t1

0xbbb1,	// (0x00072b25) list_medium_line_t2_right_icon_t2

0x0001,

0xfc91,	// (0x00076c05) list_medium_line_t2_right_icon_t

0x1820,	// (0x00068794) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1820,	// (0x00068794) bg_sp_fs_ctrlbar_pane

0x9c27,	// (0x00070b9b) main_sp_fs_ctrlbar_button_pane_cp01

0x9c2f,	// (0x00070ba3) main_sp_fs_ctrlbar_ddmenu_pane

0xe0bc,	// (0x00075030) main_sp_fs_ctrlbar_pane_g1

0xe0c8,	// (0x0007503c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc96,	// (0x00076c0a) main_sp_fs_ctrlbar_pane_g

0x9c6b,	// (0x00070bdf) main_sp_fs_ctrlbar_pane_t1

0x9cb4,	// (0x00070c28) main_sp_fs_ctrlbar_pane

0x9cd5,	// (0x00070c49) main_sp_fs_listscroll_pane_te_cp01

0x2da5,	// (0x00069d19) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2da5,	// (0x00069d19) popup_sp_fs_action_menu_pane_cp01

0x15f8,	// (0x0006856c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x15f8,	// (0x0006856c) bg_sp_fs_highlight_list_pane_cp01

0x2dd5,	// (0x00069d49) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2dd5,	// (0x00069d49) sp_fs_action_menu_list_gene_pane_g1

0xe0ef,	// (0x00075063) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe0ef,	// (0x00075063) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca4,	// (0x00076c18) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca4,	// (0x00076c18) sp_fs_action_menu_list_gene_pane_g

0x2de4,	// (0x00069d58) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2de4,	// (0x00069d58) sp_fs_action_menu_list_gene_pane_t1

0x2dfc,	// (0x00069d70) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2dfc,	// (0x00069d70) sp_fs_action_menu_list_gene_pane

0xe0fc,	// (0x00075070) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe0fc,	// (0x00075070) popup_sp_fs_action_menu_bg_pane

0x2e1b,	// (0x00069d8f) sp_fs_action_menu_list_pane_ParamLimits

0x2e1b,	// (0x00069d8f) sp_fs_action_menu_list_pane

0xe10a,	// (0x0007507e) sp_fs_scroll_pane_cp01_ParamLimits

0xe10a,	// (0x0007507e) sp_fs_scroll_pane_cp01

0xbbb1,	// (0x00072b25) list_medium_line_plain_t2_t1

0xbbb1,	// (0x00072b25) list_medium_line_plain_t2_t2

0x0001,

0xfc91,	// (0x00076c05) list_medium_line_plain_t2_t

0xbbb1,	// (0x00072b25) list_medium_line_plain_t3_t1

0xbbb1,	// (0x00072b25) list_medium_line_plain_t3_t2

0xbbb1,	// (0x00072b25) list_medium_line_plain_t3_t3

0x0002,

0xfca9,	// (0x00076c1d) list_medium_line_plain_t3_t

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g2_g1

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00076175) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00076175) list_medium_line_x2_t2_g2_g

0xb841,	// (0x000727b5) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t2_g2_t1

0xb854,	// (0x000727c8) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb854,	// (0x000727c8) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x000761ea) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x000761ea) list_medium_line_x2_t2_g2_t

0xb829,	// (0x0007279d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t4_g2_g1

0xe130,	// (0x000750a4) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe130,	// (0x000750a4) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcb0,	// (0x00076c24) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcb0,	// (0x00076c24) list_medium_line_x2_t4_g2_g

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g2_t1

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g2_t2

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t4_g2_t3

0xb854,	// (0x000727c8) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb854,	// (0x000727c8) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00076183) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00076183) list_medium_line_x2_t4_g2_t

0xf05b,	// (0x00075fcf) list_medium_line_t3_right_iconx2_g1

0xb80f,	// (0x00072783) list_medium_line_t3_right_iconx2_g2

0xe141,	// (0x000750b5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb5,	// (0x00076c29) list_medium_line_t3_right_iconx2_g

0xbbb1,	// (0x00072b25) list_medium_line_t3_right_iconx2_t1

0xbbb1,	// (0x00072b25) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc91,	// (0x00076c05) list_medium_line_t3_right_iconx2_t

0xb829,	// (0x0007279d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x3_t4_g4_g1

0xb835,	// (0x000727a9) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_x3_t4_g4_g2

0xb829,	// (0x0007279d) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x3_t4_g4_g3

0xb835,	// (0x000727a9) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcbc,	// (0x00076c30) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcbc,	// (0x00076c30) list_medium_line_x3_t4_g4_g

0xb841,	// (0x000727b5) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x3_t4_g4_t1

0xb841,	// (0x000727b5) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x3_t4_g4_t2

0xb841,	// (0x000727b5) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x3_t4_g4_t3

0xe14a,	// (0x000750be) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe14a,	// (0x000750be) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc5,	// (0x00076c39) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc5,	// (0x00076c39) list_medium_line_x3_t4_g4_t

0x2e3b,	// (0x00069daf) list_single_dyc_row_text_pane_t1_ParamLimits

0x2e3b,	// (0x00069daf) list_single_dyc_row_text_pane_t1

0x2e72,	// (0x00069de6) list_single_dyc_row_text_pane_t2_ParamLimits

0x2e72,	// (0x00069de6) list_single_dyc_row_text_pane_t2

0xe167,	// (0x000750db) list_single_dyc_row_text_pane_t3_ParamLimits

0xe167,	// (0x000750db) list_single_dyc_row_text_pane_t3

0x0005,

0xfcce,	// (0x00076c42) list_single_dyc_row_text_pane_t_ParamLimits

0xfcce,	// (0x00076c42) list_single_dyc_row_text_pane_t

0xe18b,	// (0x000750ff) list_single_dyc_row_pane_g1_ParamLimits

0xe18b,	// (0x000750ff) list_single_dyc_row_pane_g1

0xe197,	// (0x0007510b) list_single_dyc_row_pane_g2_ParamLimits

0xe197,	// (0x0007510b) list_single_dyc_row_pane_g2

0xe1a3,	// (0x00075117) list_single_dyc_row_pane_g3_ParamLimits

0xe1a3,	// (0x00075117) list_single_dyc_row_pane_g3

0xe1af,	// (0x00075123) list_single_dyc_row_pane_g4_ParamLimits

0xe1af,	// (0x00075123) list_single_dyc_row_pane_g4

0x0003,

0xfcdb,	// (0x00076c4f) list_single_dyc_row_pane_g_ParamLimits

0xfcdb,	// (0x00076c4f) list_single_dyc_row_pane_g

0xe1bb,	// (0x0007512f) list_single_dyc_row_text_pane_ParamLimits

0xe1bb,	// (0x0007512f) list_single_dyc_row_text_pane

0xad6d,	// (0x00071ce1) bg_sp_fs_scroll_pane

0xe1da,	// (0x0007514e) thumb_sp_fs_scroll_pane

0xb829,	// (0x0007279d) list_medium_line_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_g1

0xb841,	// (0x000727b5) list_medium_line_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t1

0xb829,	// (0x0007279d) list_medium_line_x2_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_g1

0xefa8,	// (0x00075f1c) list_medium_line_x2_g2_ParamLimits

0xefa8,	// (0x00075f1c) list_medium_line_x2_g2

0x0001,

0xf9b6,	// (0x0007692a) list_medium_line_x2_g_ParamLimits

0xf9b6,	// (0x0007692a) list_medium_line_x2_g

0x15e4,	// (0x00068558) list_medium_line_x2_t1_ParamLimits

0x15e4,	// (0x00068558) list_medium_line_x2_t1

0xb829,	// (0x0007279d) list_medium_line_x3_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x3_g1

0xf063,	// (0x00075fd7) list_medium_line_x3_g2_ParamLimits

0xf063,	// (0x00075fd7) list_medium_line_x3_g2

0x0001,

0xfce4,	// (0x00076c58) list_medium_line_x3_g_ParamLimits

0xfce4,	// (0x00076c58) list_medium_line_x3_g

0xe1e3,	// (0x00075157) list_medium_line_x3_t1_ParamLimits

0xe1e3,	// (0x00075157) list_medium_line_x3_t1

0xe1f7,	// (0x0007516b) thumb_sp_fs_scroll_pane_g1

0xe200,	// (0x00075174) thumb_sp_fs_scroll_pane_g2

0xe209,	// (0x0007517d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x00076c5d) thumb_sp_fs_scroll_pane_g

0xe1f7,	// (0x0007516b) bg_sp_fs_scroll_pane_g1

0xe200,	// (0x00075174) bg_sp_fs_scroll_pane_g2

0xe209,	// (0x0007517d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x00076c5d) bg_sp_fs_scroll_pane_g

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g4_g1

0xb835,	// (0x000727a9) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_x2_t3_g4_g2

0xb835,	// (0x000727a9) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_x2_t3_g4_g3

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0007617a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0007617a) list_medium_line_x2_t3_g4_g

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g4_t1

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_x2_t3_g4_t2

0xb854,	// (0x000727c8) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb854,	// (0x000727c8) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0007616e) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0007616e) list_medium_line_x2_t3_g4_t

0xb829,	// (0x0007279d) list_medium_line_g2_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_g2_g1

0xefa8,	// (0x00075f1c) list_medium_line_g2_g2_ParamLimits

0xefa8,	// (0x00075f1c) list_medium_line_g2_g2

0x0001,

0xf9b6,	// (0x0007692a) list_medium_line_g2_g_ParamLimits

0xf9b6,	// (0x0007692a) list_medium_line_g2_g

0xb841,	// (0x000727b5) list_medium_line_g2_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_g2_t1

0xb829,	// (0x0007279d) list_medium_line_t3_g2_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_t3_g2_g1

0xefa8,	// (0x00075f1c) list_medium_line_t3_g2_g2_ParamLimits

0xefa8,	// (0x00075f1c) list_medium_line_t3_g2_g2

0x0001,

0xf9b6,	// (0x0007692a) list_medium_line_t3_g2_g_ParamLimits

0xf9b6,	// (0x0007692a) list_medium_line_t3_g2_g

0xb841,	// (0x000727b5) list_medium_line_t3_g2_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t3_g2_t1

0xb841,	// (0x000727b5) list_medium_line_t3_g2_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t3_g2_t2

0xb841,	// (0x000727b5) list_medium_line_t3_g2_t3_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t3_g2_t3

0x0002,

0xfcf0,	// (0x00076c64) list_medium_line_t3_g2_t_ParamLimits

0xfcf0,	// (0x00076c64) list_medium_line_t3_g2_t

0xe212,	// (0x00075186) list_medium_line_right_icon_g1

0xbbb1,	// (0x00072b25) list_medium_line_right_icon_t1

0xb829,	// (0x0007279d) list_medium_line_t2_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_t2_g1

0xb841,	// (0x000727b5) list_medium_line_t2_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t2_t1

0xb841,	// (0x000727b5) list_medium_line_t2_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t2_t2

0x0001,

0xf9bb,	// (0x0007692f) list_medium_line_t2_t_ParamLimits

0xf9bb,	// (0x0007692f) list_medium_line_t2_t

0xb829,	// (0x0007279d) list_medium_line_t3_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_t3_g1

0xb841,	// (0x000727b5) list_medium_line_t3_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t3_t1

0xb841,	// (0x000727b5) list_medium_line_t3_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t3_t2

0xb841,	// (0x000727b5) list_medium_line_t3_t3_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t3_t3

0x0002,

0xfcf0,	// (0x00076c64) list_medium_line_t3_t_ParamLimits

0xfcf0,	// (0x00076c64) list_medium_line_t3_t

0xb829,	// (0x0007279d) list_medium_line_g3_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_g3_g1

0xb835,	// (0x000727a9) list_medium_line_g3_g2_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_g3_g2

0xb835,	// (0x000727a9) list_medium_line_g3_g3_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_g3_g3

0x0002,

0xfcf7,	// (0x00076c6b) list_medium_line_g3_g_ParamLimits

0xfcf7,	// (0x00076c6b) list_medium_line_g3_g

0xb841,	// (0x000727b5) list_medium_line_g3_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_g3_t1

0xb829,	// (0x0007279d) list_medium_line_t2_g3_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_t2_g3_g1

0xb835,	// (0x000727a9) list_medium_line_t2_g3_g2_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_t2_g3_g2

0xb835,	// (0x000727a9) list_medium_line_t2_g3_g3_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_t2_g3_g3

0x0002,

0xfcf7,	// (0x00076c6b) list_medium_line_t2_g3_g_ParamLimits

0xfcf7,	// (0x00076c6b) list_medium_line_t2_g3_g

0xb841,	// (0x000727b5) list_medium_line_t2_g3_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t2_g3_t1

0xb841,	// (0x000727b5) list_medium_line_t2_g3_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t2_g3_t2

0x0001,

0xf9bb,	// (0x0007692f) list_medium_line_t2_g3_t_ParamLimits

0xf9bb,	// (0x0007692f) list_medium_line_t2_g3_t

0xb829,	// (0x0007279d) list_medium_line_t3_g3_g1_ParamLimits

0xb829,	// (0x0007279d) list_medium_line_t3_g3_g1

0xb835,	// (0x000727a9) list_medium_line_t3_g3_g2_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_t3_g3_g2

0xb835,	// (0x000727a9) list_medium_line_t3_g3_g3_ParamLimits

0xb835,	// (0x000727a9) list_medium_line_t3_g3_g3

0x0002,

0xfcf7,	// (0x00076c6b) list_medium_line_t3_g3_g_ParamLimits

0xfcf7,	// (0x00076c6b) list_medium_line_t3_g3_g

0xb841,	// (0x000727b5) list_medium_line_t3_g3_t1_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t3_g3_t1

0xb841,	// (0x000727b5) list_medium_line_t3_g3_t2_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t3_g3_t2

0xb841,	// (0x000727b5) list_medium_line_t3_g3_t3_ParamLimits

0xb841,	// (0x000727b5) list_medium_line_t3_g3_t3

0x0002,

0xfcf0,	// (0x00076c64) list_medium_line_t3_g3_t_ParamLimits

0xfcf0,	// (0x00076c64) list_medium_line_t3_g3_t

0xf05b,	// (0x00075fcf) list_medium_line_right_iconx2_g1

0xf05b,	// (0x00075fcf) list_medium_line_right_iconx2_g2

0x0001,

0xfcfe,	// (0x00076c72) list_medium_line_right_iconx2_g

0xbbc0,	// (0x00072b34) list_medium_line_right_iconx2_t1

0xf05b,	// (0x00075fcf) list_medium_line_t2_right_iconx2_g1

0xf05b,	// (0x00075fcf) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcfe,	// (0x00076c72) list_medium_line_t2_right_iconx2_g

0xbbb1,	// (0x00072b25) list_medium_line_t2_right_iconx2_t1

0xbbb1,	// (0x00072b25) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc91,	// (0x00076c05) list_medium_line_t2_right_iconx2_t

0xbbb1,	// (0x00072b25) list_medium_line_x4_t4_t1

0xbbb1,	// (0x00072b25) list_medium_line_x4_t4_t2

0xbbb1,	// (0x00072b25) list_medium_line_x4_t4_t3

0xbbb1,	// (0x00072b25) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0007623c) list_medium_line_x4_t4_t

0x9d2e,	// (0x00070ca2) tport_appsw_pane_ParamLimits

0x9d2e,	// (0x00070ca2) tport_appsw_pane

0x9d3f,	// (0x00070cb3) tport_contact_pane_ParamLimits

0x9d3f,	// (0x00070cb3) tport_contact_pane

0x9d53,	// (0x00070cc7) tport_listscroll_pane_ParamLimits

0x9d53,	// (0x00070cc7) tport_listscroll_pane

0x9d6b,	// (0x00070cdf) cell_tport_appsw_pane_ParamLimits

0x9d6b,	// (0x00070cdf) cell_tport_appsw_pane

0x182e,	// (0x000687a2) tport_appsw_pane_g1_ParamLimits

0x182e,	// (0x000687a2) tport_appsw_pane_g1

0xe21b,	// (0x0007518f) tport_contact_pane_g1

0xe224,	// (0x00075198) tport_contact_pane_t1

0xe232,	// (0x000751a6) tport_contact_pane_t2

0x0001,

0xfd03,	// (0x00076c77) tport_contact_pane_t

0xe240,	// (0x000751b4) list_tport_pane

0xb699,	// (0x0007260d) scroll_pane_cp_030

0xe251,	// (0x000751c5) cell_tport_appsw_pane_g1

0xe261,	// (0x000751d5) cell_tport_appsw_pane_t1

0xe26f,	// (0x000751e3) grid_highlight_pane_cp019

0x9da1,	// (0x00070d15) list_tport_double_graphic_pane_ParamLimits

0x9da1,	// (0x00070d15) list_tport_double_graphic_pane

0x15f8,	// (0x0006856c) list_highlight_pane_cp023_ParamLimits

0x15f8,	// (0x0006856c) list_highlight_pane_cp023

0x9dae,	// (0x00070d22) list_tport_double_graphic_pane_g1_ParamLimits

0x9dae,	// (0x00070d22) list_tport_double_graphic_pane_g1

0x9dbb,	// (0x00070d2f) list_tport_double_graphic_pane_t1_ParamLimits

0x9dbb,	// (0x00070d2f) list_tport_double_graphic_pane_t1

0x9dd0,	// (0x00070d44) list_tport_double_graphic_pane_t2_ParamLimits

0x9dd0,	// (0x00070d44) list_tport_double_graphic_pane_t2

0x0001,

0xfd0f,	// (0x00076c83) list_tport_double_graphic_pane_t_ParamLimits

0xfd0f,	// (0x00076c83) list_tport_double_graphic_pane_t

0xad6d,	// (0x00071ce1) main_cale_note_pane

0x824c,	// (0x0006f1c0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x824c,	// (0x0006f1c0) cell_vitu2_function_top_wide_pane_cp01

0x97f6,	// (0x0007076a) wait_bar_pane_cp05_ParamLimits

0x15f8,	// (0x0006856c) listscroll_cmail_pane

0xe277,	// (0x000751eb) list_cmail_pane

0x9de2,	// (0x00070d56) list_cmail_body_pane

0x9de2,	// (0x00070d56) list_single_cmail_header_caption_pane

0x9df9,	// (0x00070d6d) list_single_cmail_header_detail_pane_ParamLimits

0x9df9,	// (0x00070d6d) list_single_cmail_header_detail_pane

0xe293,	// (0x00075207) list_single_cmail_header_caption_pane_t1

0x2f95,	// (0x00069f09) list_single_cmail_header_detail_pane_g1_ParamLimits

0x2f95,	// (0x00069f09) list_single_cmail_header_detail_pane_g1

0xf070,	// (0x00075fe4) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf070,	// (0x00075fe4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd14,	// (0x00076c88) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd14,	// (0x00076c88) list_single_cmail_header_detail_pane_g

0x2fab,	// (0x00069f1f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2fab,	// (0x00069f1f) list_single_cmail_header_detail_pane_t1

0xe2d2,	// (0x00075246) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe2d2,	// (0x00075246) list_single_cmail_header_editor_pane_bg

0xe2e9,	// (0x0007525d) list_cmail_body_pane_g1

0xe2f2,	// (0x00075266) list_cmail_body_pane_t1

0xcf9c,	// (0x00073f10) list_single_cmail_header_editor_pane_bg_g1

0xba6b,	// (0x000729df) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcfac,	// (0x00073f20) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcfa4,	// (0x00073f18) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1eb,	// (0x0007415f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcfcc,	// (0x00073f40) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcfbc,	// (0x00073f30) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcfc4,	// (0x00073f38) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xba4b,	// (0x000729bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9e22,	// (0x00070d96) calenote_gesture_pane_ParamLimits

0x9e22,	// (0x00070d96) calenote_gesture_pane

0x9e3e,	// (0x00070db2) calenote_window_pane_ParamLimits

0x9e3e,	// (0x00070db2) calenote_window_pane

0xe300,	// (0x00075274) popup_note_window_cp01

0x9e5a,	// (0x00070dce) calenote_swipe_1_pane_ParamLimits

0x9e5a,	// (0x00070dce) calenote_swipe_1_pane

0x9bc9,	// (0x00070b3d) calenote_swipe_2_pane_ParamLimits

0x9bc9,	// (0x00070b3d) calenote_swipe_2_pane

0xdff6,	// (0x00074f6a) calenote_swipe_1_pane_g1_ParamLimits

0xdff6,	// (0x00074f6a) calenote_swipe_1_pane_g1

0xe003,	// (0x00074f77) calenote_swipe_1_pane_g2_ParamLimits

0xe003,	// (0x00074f77) calenote_swipe_1_pane_g2

0x0001,

0xfc79,	// (0x00076bed) calenote_swipe_1_pane_g_ParamLimits

0xfc79,	// (0x00076bed) calenote_swipe_1_pane_g

0xe312,	// (0x00075286) calenote_swipe_1_pane_t1_ParamLimits

0xe312,	// (0x00075286) calenote_swipe_1_pane_t1

0xdff6,	// (0x00074f6a) calenote_swipe_2_pane_g1_ParamLimits

0xdff6,	// (0x00074f6a) calenote_swipe_2_pane_g1

0xe331,	// (0x000752a5) calenote_swipe_2_pane_g2_ParamLimits

0xe331,	// (0x000752a5) calenote_swipe_2_pane_g2

0x0001,

0xfd20,	// (0x00076c94) calenote_swipe_2_pane_g_ParamLimits

0xfd20,	// (0x00076c94) calenote_swipe_2_pane_g

0xe33d,	// (0x000752b1) calenote_swipe_2_pane_t1_ParamLimits

0xe33d,	// (0x000752b1) calenote_swipe_2_pane_t1

0xad6d,	// (0x00071ce1) main_mup_navstr_pane

0x7372,	// (0x0006e2e6) main_mup3_pane_t7_ParamLimits

0x7372,	// (0x0006e2e6) main_mup3_pane_t7

0xec61,	// (0x00075bd5) main_mp4_pane_g6_ParamLimits

0xec61,	// (0x00075bd5) main_mp4_pane_g6

0xee13,	// (0x00075d87) main_image3_pane_t4_ParamLimits

0xee13,	// (0x00075d87) main_image3_pane_t4

0x9e6f,	// (0x00070de3) popup_navstr_preview_pane_ParamLimits

0x9e6f,	// (0x00070de3) popup_navstr_preview_pane

0x9e7f,	// (0x00070df3) scroll_navstr_pane_ParamLimits

0x9e7f,	// (0x00070df3) scroll_navstr_pane

0xad6d,	// (0x00071ce1) bg_popup_preview_window_pane_cp04

0xe364,	// (0x000752d8) popup_navstr_preview_pane_t1

0x9e93,	// (0x00070e07) scroll_navstr_pane_g1_ParamLimits

0x9e93,	// (0x00070e07) scroll_navstr_pane_g1

0x9ea7,	// (0x00070e1b) scroll_navstr_pane_t1_ParamLimits

0x9ea7,	// (0x00070e1b) scroll_navstr_pane_t1

0xe309,	// (0x0007527d) bg_button_pane_cp014

0xe309,	// (0x0007527d) bg_button_pane_cp030

0x2d17,	// (0x00069c8b) list_double_fisheye_pane_g4_ParamLimits

0x2d17,	// (0x00069c8b) list_double_fisheye_pane_g4

0x2d23,	// (0x00069c97) list_double_fisheye_pane_g5_ParamLimits

0x2d23,	// (0x00069c97) list_double_fisheye_pane_g5

0xe287,	// (0x000751fb) sp_fs_scroll_pane_cp03

0xe0bc,	// (0x00075030) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe0c8,	// (0x0007503c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc96,	// (0x00076c0a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9c6b,	// (0x00070bdf) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe27f,	// (0x000751f3) sp_fs_scroll_pane_cp02

0xb6f3,	// (0x00072667) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb6f3,	// (0x00072667) popup_sp_fs_calendar_preview_list_single_pane

0xad6d,	// (0x00071ce1) main_cam6_pano_pane

0x15f8,	// (0x0006856c) main_mup3_pane_ParamLimits

0xad6d,	// (0x00071ce1) main_phacti_pane

0x96e9,	// (0x0007065d) bg_button_pane_cp11

0x9701,	// (0x00070675) main_mobtv_info_pane_g2_ParamLimits

0x9701,	// (0x00070675) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x00076b6a) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x00076b6a) main_mobtv_info_pane_g

0x98b6,	// (0x0007082a) sc_clock_pane_t5_ParamLimits

0x98b6,	// (0x0007082a) sc_clock_pane_t5

0x9961,	// (0x000708d5) main_radioblah_pane_g1_ParamLimits

0xdf39,	// (0x00074ead) main_radioblah_pane_t3_ParamLimits

0xdf39,	// (0x00074ead) main_radioblah_pane_t3

0xdf51,	// (0x00074ec5) main_radioblah_pane_t4_ParamLimits

0xdf51,	// (0x00074ec5) main_radioblah_pane_t4

0x9989,	// (0x000708fd) main_radioblah_text_pane_ParamLimits

0x9989,	// (0x000708fd) main_radioblah_text_pane

0x999b,	// (0x0007090f) main_radioblah_info_pane_g1_ParamLimits

0x9a2e,	// (0x000709a2) main_radioblah_info_pane_t4_ParamLimits

0x9a2e,	// (0x000709a2) main_radioblah_info_pane_t4

0x15f8,	// (0x0006856c) main_sp_fs_calendar_pane

0x9ebd,	// (0x00070e31) main_phacti_pane_g1

0x9ec5,	// (0x00070e39) phacti_note_pane_ParamLimits

0x9ec5,	// (0x00070e39) phacti_note_pane

0xe37b,	// (0x000752ef) phacti_term_pane_ParamLimits

0xe37b,	// (0x000752ef) phacti_term_pane

0xe390,	// (0x00075304) phacti_note_pane_t1_ParamLimits

0xe390,	// (0x00075304) phacti_note_pane_t1

0xe3a7,	// (0x0007531b) phacti_term_pane_g1

0xe3af,	// (0x00075323) phacti_term_pane_t1_ParamLimits

0xe3af,	// (0x00075323) phacti_term_pane_t1

0xe3d9,	// (0x0007534d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe3e1,	// (0x00075355) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd2a,	// (0x00076c9e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe3e9,	// (0x0007535d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe3e9,	// (0x0007535d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe3ff,	// (0x00075373) aid_popup_sp_fs_bg_corner_pane

0xb80f,	// (0x00072783) popup_sp_fs_calendar_preview_bg_pane_g1

0xad6d,	// (0x00071ce1) popup_sp_fs_calendar_preview_bg_pane

0xe407,	// (0x0007537b) popup_sp_fs_calendar_preview_list_pane

0x1820,	// (0x00068794) bg_main_sp_fs_cale_pane_ParamLimits

0x1820,	// (0x00068794) bg_main_sp_fs_cale_pane

0xe40f,	// (0x00075383) listscroll_cale_mrui_pane_ParamLimits

0xe40f,	// (0x00075383) listscroll_cale_mrui_pane

0xe424,	// (0x00075398) listscroll_sp_fs_schedule_track_pane

0xe42d,	// (0x000753a1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe42d,	// (0x000753a1) main_sp_fs_ctrlbar_pane_cp01

0xe440,	// (0x000753b4) main_sp_fs_ribbon_pane

0xe448,	// (0x000753bc) popup_sp_fs_cale_preview_window

0x9f28,	// (0x00070e9c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9f28,	// (0x00070e9c) list_single_sp_fs_schedule_track_pane

0x15f8,	// (0x0006856c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x15f8,	// (0x0006856c) bg_sp_fs_highlight_list_pane_cp03

0x9f3c,	// (0x00070eb0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9f3c,	// (0x00070eb0) list_single_sp_fs_schedule_track_pane_g1

0x9f48,	// (0x00070ebc) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9f48,	// (0x00070ebc) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2f,	// (0x00076ca3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2f,	// (0x00076ca3) list_single_sp_fs_schedule_track_pane_g

0x9f54,	// (0x00070ec8) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9f54,	// (0x00070ec8) list_single_sp_fs_schedule_track_pane_t1

0x9f6e,	// (0x00070ee2) sp_fs_schedule_track_pane_ParamLimits

0x9f6e,	// (0x00070ee2) sp_fs_schedule_track_pane

0xe45a,	// (0x000753ce) sp_fs_schedule_track_pane_g1

0xe462,	// (0x000753d6) sp_fs_schedule_track_pane_g2

0xe46a,	// (0x000753de) sp_fs_schedule_track_pane_g3

0xe472,	// (0x000753e6) sp_fs_schedule_track_pane_g4

0xe47a,	// (0x000753ee) sp_fs_schedule_track_pane_g5

0x0004,

0xfd34,	// (0x00076ca8) sp_fs_schedule_track_pane_g

0xcf9c,	// (0x00073f10) bg_sp_fs_schedule_viewer_highlight_g1

0xba6b,	// (0x000729df) bg_sp_fs_schedule_viewer_highlight_g2

0xcfa4,	// (0x00073f18) bg_sp_fs_schedule_viewer_highlight_g3

0xcfac,	// (0x00073f20) bg_sp_fs_schedule_viewer_highlight_g4

0xd1eb,	// (0x0007415f) bg_sp_fs_schedule_viewer_highlight_g5

0xcfbc,	// (0x00073f30) bg_sp_fs_schedule_viewer_highlight_g6

0xcfc4,	// (0x00073f38) bg_sp_fs_schedule_viewer_highlight_g7

0xcfcc,	// (0x00073f40) bg_sp_fs_schedule_viewer_highlight_g8

0xba4b,	// (0x000729bf) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3f,	// (0x00076cb3) bg_sp_fs_schedule_viewer_highlight_g

0xad6d,	// (0x00071ce1) bg_main_sp_fs_ribbon_pane

0x9f7f,	// (0x00070ef3) main_sp_fs_ribbon_pane_g1

0xe482,	// (0x000753f6) main_sp_fs_ribbon_pane_t1

0x9f88,	// (0x00070efc) main_sp_fs_ribbon_pane_t2

0xe491,	// (0x00075405) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd52,	// (0x00076cc6) main_sp_fs_ribbon_pane_t

0xe4a0,	// (0x00075414) main_sp_fs_ribbon_scheduler_pane

0xe4a8,	// (0x0007541c) bg_main_sp_fs_ribbon_pane_g1

0xe4b1,	// (0x00075425) bg_main_sp_fs_ribbon_pane_g2

0xe4ba,	// (0x0007542e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd59,	// (0x00076ccd) bg_main_sp_fs_ribbon_pane_g

0xe4c2,	// (0x00075436) main_sp_fs_ribbon_scheduler_pane_g1

0xe4cb,	// (0x0007543f) main_sp_fs_ribbon_scheduler_pane_g2

0xe4d4,	// (0x00075448) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd60,	// (0x00076cd4) main_sp_fs_ribbon_scheduler_pane_g

0xe4dd,	// (0x00075451) list_cale_mrui_pane

0x9f97,	// (0x00070f0b) sp_fs_scroll_pane_cp07_ParamLimits

0x9f97,	// (0x00070f0b) sp_fs_scroll_pane_cp07

0x9faf,	// (0x00070f23) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9faf,	// (0x00070f23) bg_sp_fs_schedule_viewer_highlight

0xe4ea,	// (0x0007545e) list_single_sp_fs_schedule_track_pane_cp01

0xe4f2,	// (0x00075466) list_sp_fs_schedule_track_pane

0xe4fa,	// (0x0007546e) sp_fs_scroll_pane_cp06_ParamLimits

0xe4fa,	// (0x0007546e) sp_fs_scroll_pane_cp06

0xb80f,	// (0x00072783) bgmain_sp_fs_calendar_pane_g1

0x2fe7,	// (0x00069f5b) list_single_cale_mrui_pane_ParamLimits

0x2fe7,	// (0x00069f5b) list_single_cale_mrui_pane

0xe50c,	// (0x00075480) list_single_cale_mrui_row_pane_ParamLimits

0xe50c,	// (0x00075480) list_single_cale_mrui_row_pane

0x3007,	// (0x00069f7b) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3007,	// (0x00069f7b) list_single_cale_mrui_row_pane_g1

0x303f,	// (0x00069fb3) list_single_cale_mrui_row_pane_t1_ParamLimits

0x303f,	// (0x00069fb3) list_single_cale_mrui_row_pane_t1

0x3051,	// (0x00069fc5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x3051,	// (0x00069fc5) list_single_cale_mrui_row_pane_t2

0x30b7,	// (0x0006a02b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x30b7,	// (0x0006a02b) list_single_cale_mrui_row_pane_t3

0x30e6,	// (0x0006a05a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x30e6,	// (0x0006a05a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd6e,	// (0x00076ce2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd6e,	// (0x00076ce2) list_single_cale_mrui_row_pane_t

0x3115,	// (0x0006a089) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x3115,	// (0x0006a089) list_single_cmail_header_editor_pane_bg_cp01

0x3139,	// (0x0006a0ad) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x3139,	// (0x0006a0ad) list_single_cmail_header_editor_pane_bg_cp02

0x9fbf,	// (0x00070f33) main_radioblah_text_pane_t1_ParamLimits

0x9fbf,	// (0x00070f33) main_radioblah_text_pane_t1

0xe52f,	// (0x000754a3) cam6_indi_pane_cp01

0xe537,	// (0x000754ab) cam6_mode_pane_cp01

0xe53f,	// (0x000754b3) cam6_pano_pane

0xe548,	// (0x000754bc) cam6_zoom_pane_cp01

0xe550,	// (0x000754c4) cam6_pano_image_pane

0xe559,	// (0x000754cd) cam6_pano_pane_g1

0xdca0,	// (0x00074c14) cam6_pano_pane_g2

0xe562,	// (0x000754d6) cam6_pano_pane_g3

0xe56b,	// (0x000754df) cam6_pano_pane_g4

0xcbdd,	// (0x00073b51) cam6_pano_pane_g5

0xe574,	// (0x000754e8) cam6_pano_pane_g6

0xe57c,	// (0x000754f0) cam6_pano_pane_g7

0xe584,	// (0x000754f8) cam6_pano_pane_g8

0xe58d,	// (0x00075501) cam6_pano_pane_g9

0x0008,

0xfd77,	// (0x00076ceb) cam6_pano_pane_g

0xad6d,	// (0x00071ce1) main_browser_tag_pane

0xe35c,	// (0x000752d0) grid_navstr_albumart_pane

0xe596,	// (0x0007550a) cell_navstr_albumart_pane_ParamLimits

0xe596,	// (0x0007550a) cell_navstr_albumart_pane

0x1693,	// (0x00068607) cell_navstr_albumart_pane_g1

0xc0b3,	// (0x00073027) cell_navstr_albumart_pane_g2

0xc0c3,	// (0x00073037) cell_navstr_albumart_pane_g3

0xc0bb,	// (0x0007302f) cell_navstr_albumart_pane_g4

0x0003,

0xfd8a,	// (0x00076cfe) cell_navstr_albumart_pane_g

0x9fd8,	// (0x00070f4c) bt_list_pane_ParamLimits

0x9fd8,	// (0x00070f4c) bt_list_pane

0x9feb,	// (0x00070f5f) bt_list_pane_t1

0x9ffa,	// (0x00070f6e) bt_list_pane_t2

0x0001,

0xfd93,	// (0x00076d07) bt_list_pane_t

0xad6d,	// (0x00071ce1) main_cale_prevew_pane

0xa009,	// (0x00070f7d) popup_cale_preview_window_ParamLimits

0xa009,	// (0x00070f7d) popup_cale_preview_window

0x15f8,	// (0x0006856c) bg_popup_preview_window_pane_cp05_ParamLimits

0x15f8,	// (0x0006856c) bg_popup_preview_window_pane_cp05

0xe5ad,	// (0x00075521) list_cale_preview_pane_ParamLimits

0xe5ad,	// (0x00075521) list_cale_preview_pane

0xa01e,	// (0x00070f92) list_double_cale_preview_pane_ParamLimits

0xa01e,	// (0x00070f92) list_double_cale_preview_pane

0xa02f,	// (0x00070fa3) list_single_cale_preview_pane_ParamLimits

0xa02f,	// (0x00070fa3) list_single_cale_preview_pane

0xe5b9,	// (0x0007552d) list_single_cale_preview_pane_g1

0xe5c1,	// (0x00075535) list_single_cale_preview_pane_t1_ParamLimits

0xe5c1,	// (0x00075535) list_single_cale_preview_pane_t1

0xa043,	// (0x00070fb7) list_double_cale_preview_pane_g1

0xa04b,	// (0x00070fbf) list_double_cale_preview_pane_t1_ParamLimits

0xa04b,	// (0x00070fbf) list_double_cale_preview_pane_t1

0xa060,	// (0x00070fd4) list_double_cale_preview_pane_t2_ParamLimits

0xa060,	// (0x00070fd4) list_double_cale_preview_pane_t2

0x0001,

0xfd98,	// (0x00076d0c) list_double_cale_preview_pane_t_ParamLimits

0xfd98,	// (0x00076d0c) list_double_cale_preview_pane_t

0xad6d,	// (0x00071ce1) main_ezdial_pane

0x15f8,	// (0x0006856c) main_sp_fs_email_pane_ParamLimits

0x9be1,	// (0x00070b55) cmail_ddmenu_btn01_pane_ParamLimits

0x9be1,	// (0x00070b55) cmail_ddmenu_btn01_pane

0x9bf4,	// (0x00070b68) cmail_ddmenu_btn02_pane_ParamLimits

0x9bf4,	// (0x00070b68) cmail_ddmenu_btn02_pane

0x9c17,	// (0x00070b8b) cmail_ddmenu_btn03_pane_ParamLimits

0x9c17,	// (0x00070b8b) cmail_ddmenu_btn03_pane

0x9cb4,	// (0x00070c28) main_sp_fs_ctrlbar_pane_ParamLimits

0x9cd5,	// (0x00070c49) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9de2,	// (0x00070d56) list_cmail_body_pane_ParamLimits

0x169b,	// (0x0006860f) bg_button_pane_cp12

0xe2a1,	// (0x00075215) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe2a1,	// (0x00075215) list_single_cmail_header_detail_pane_g3

0xe2ae,	// (0x00075222) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe2ae,	// (0x00075222) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd1b,	// (0x00076c8f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd1b,	// (0x00076c8f) list_single_cmail_header_detail_pane_t

0xe3c4,	// (0x00075338) phacti_term_pane_t2_ParamLimits

0xe3c4,	// (0x00075338) phacti_term_pane_t2

0x0001,

0xfd25,	// (0x00076c99) phacti_term_pane_t_ParamLimits

0xfd25,	// (0x00076c99) phacti_term_pane_t

0xe5d6,	// (0x0007554a) aid_size_list_single_double

0xa078,	// (0x00070fec) popup_ezdial_listscroll_window

0xa08e,	// (0x00071002) popup_number_entry_window_cp01

0xb7ab,	// (0x0007271f) bg_popup_call_pane_cp09

0xe5e2,	// (0x00075556) ezdial_list_pane

0xe5ea,	// (0x0007555e) scroll_pane_cp23

0x1820,	// (0x00068794) bg_button_pane_cp028_ParamLimits

0x1820,	// (0x00068794) bg_button_pane_cp028

0xa09a,	// (0x0007100e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa09a,	// (0x0007100e) cmail_ddmenu_btn01_pane_g1

0xa0a6,	// (0x0007101a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa0a6,	// (0x0007101a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd9d,	// (0x00076d11) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd9d,	// (0x00076d11) cmail_ddmenu_btn01_pane_g

0xe5f2,	// (0x00075566) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5f2,	// (0x00075566) cmail_ddmenu_btn01_pane_t1

0x1820,	// (0x00068794) bg_button_pane_cp029_ParamLimits

0x1820,	// (0x00068794) bg_button_pane_cp029

0xa0b2,	// (0x00071026) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa0b2,	// (0x00071026) cmail_ddmenu_btn02_pane_g1

0xa0ca,	// (0x0007103e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa0ca,	// (0x0007103e) cmail_ddmenu_btn02_pane_t1

0x15f8,	// (0x0006856c) bg_button_pane_cp031_ParamLimits

0x15f8,	// (0x0006856c) bg_button_pane_cp031

0xa0b2,	// (0x00071026) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa0b2,	// (0x00071026) cmail_ddmenu_btn03_pane_g1

0xa0ca,	// (0x0007103e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa0ca,	// (0x0007103e) cmail_ddmenu_btn03_pane_t1

0x15e4,	// (0x00068558) cell_dialer2_keypad_pane_t1_ParamLimits

0xcc0b,	// (0x00073b7f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xcc0b,	// (0x00073b7f) cell_dialer2_keypad_pane_t1_copy1

0x9555,	// (0x000704c9) ncimui_group_button_pane

0x15f8,	// (0x0006856c) main_sp_fs_calendar_pane_ParamLimits

0x9de2,	// (0x00070d56) list_single_cmail_header_caption_pane_ParamLimits

0xf07c,	// (0x00075ff0) aid_recal_txt_sm_pane

0xad6d,	// (0x00071ce1) mian_recal_day_pane

0xe448,	// (0x000753bc) popup_sp_fs_cale_preview_window_ParamLimits

0xe607,	// (0x0007557b) list_recal_day_pane

0xe649,	// (0x000755bd) list_single_recal_day_pane_ParamLimits

0xe649,	// (0x000755bd) list_single_recal_day_pane

0xe65b,	// (0x000755cf) list_single_recal_day_pane_g1_ParamLimits

0xe65b,	// (0x000755cf) list_single_recal_day_pane_g1

0xe667,	// (0x000755db) list_single_recal_day_pane_g2_ParamLimits

0xe667,	// (0x000755db) list_single_recal_day_pane_g2

0xe673,	// (0x000755e7) list_single_recal_day_pane_g3_ParamLimits

0xe673,	// (0x000755e7) list_single_recal_day_pane_g3

0x3157,	// (0x0006a0cb) list_single_recal_day_pane_g4_ParamLimits

0x3157,	// (0x0006a0cb) list_single_recal_day_pane_g4

0xe67f,	// (0x000755f3) list_single_recal_day_pane_g5_ParamLimits

0xe67f,	// (0x000755f3) list_single_recal_day_pane_g5

0x316f,	// (0x0006a0e3) list_single_recal_day_pane_g6_ParamLimits

0x316f,	// (0x0006a0e3) list_single_recal_day_pane_g6

0x0004,

0xfdac,	// (0x00076d20) list_single_recal_day_pane_g_ParamLimits

0xfdac,	// (0x00076d20) list_single_recal_day_pane_g

0xe693,	// (0x00075607) list_single_recal_day_pane_t1

0x317b,	// (0x0006a0ef) list_single_recal_day_pane_t2

0x0001,

0xfdb7,	// (0x00076d2b) list_single_recal_day_pane_t

0xa0ee,	// (0x00071062) ncimui_query_button_pane_ParamLimits

0xa0ee,	// (0x00071062) ncimui_query_button_pane

0xa0fe,	// (0x00071072) ncimui_query_button_pane_t1_ParamLimits

0xa0fe,	// (0x00071072) ncimui_query_button_pane_t1

0xe6a5,	// (0x00075619) ncimui_query_button_pane_t2_ParamLimits

0xe6a5,	// (0x00075619) ncimui_query_button_pane_t2

0x0001,

0xfdbc,	// (0x00076d30) ncimui_query_button_pane_t_ParamLimits

0xfdbc,	// (0x00076d30) ncimui_query_button_pane_t

0xa111,	// (0x00071085) query_button_pane_ParamLimits

0xa111,	// (0x00071085) query_button_pane

0xad6d,	// (0x00071ce1) bg_button_pane_cp0028

0xe6b8,	// (0x0007562c) query_button_pane_t1

0x67a5,	// (0x0006d719) main_tport_pane_ParamLimits

0x9cf5,	// (0x00070c69) bg_popup_window_pane_cp01_ParamLimits

0x9cf5,	// (0x00070c69) bg_popup_window_pane_cp01

0x9d0c,	// (0x00070c80) heading_pane_cp08_ParamLimits

0x9d0c,	// (0x00070c80) heading_pane_cp08

0x9d1d,	// (0x00070c91) heading_pane_cp07_ParamLimits

0x9d1d,	// (0x00070c91) heading_pane_cp07

0xe251,	// (0x000751c5) cell_tport_appsw_pane_g2

0x0002,

0xfd08,	// (0x00076c7c) cell_tport_appsw_pane_g

0xbbf1,	// (0x00072b65) input_candi_list_open_g1

0x0f6b,	// (0x00067edf) list_cale_time_pane_g6_ParamLimits

0x0f6b,	// (0x00067edf) list_cale_time_pane_g6

0x6e03,	// (0x0006dd77) aid_size_touch_calib_1_ParamLimits

0x6e03,	// (0x0006dd77) aid_size_touch_calib_1

0x6e15,	// (0x0006dd89) aid_size_touch_calib_2_ParamLimits

0x6e15,	// (0x0006dd89) aid_size_touch_calib_2

0x6e2b,	// (0x0006dd9f) aid_size_touch_calib_3_ParamLimits

0x6e2b,	// (0x0006dd9f) aid_size_touch_calib_3

0x6e43,	// (0x0006ddb7) aid_size_touch_calib_4_ParamLimits

0x6e43,	// (0x0006ddb7) aid_size_touch_calib_4

0x6e57,	// (0x0006ddcb) main_touch_calib_button_group_pane_ParamLimits

0x6e57,	// (0x0006ddcb) main_touch_calib_button_group_pane

0x6e6f,	// (0x0006dde3) main_touch_calib_pane_g1_ParamLimits

0x6e81,	// (0x0006ddf5) main_touch_calib_pane_g2_ParamLimits

0x6e93,	// (0x0006de07) main_touch_calib_pane_g3_ParamLimits

0x6ea5,	// (0x0006de19) main_touch_calib_pane_g4_ParamLimits

0xf703,	// (0x00076677) main_touch_calib_pane_g_ParamLimits

0x6eb7,	// (0x0006de2b) main_touch_calib_pane_t1_ParamLimits

0x6ecf,	// (0x0006de43) main_touch_calib_pane_t2_ParamLimits

0x6ee7,	// (0x0006de5b) main_touch_calib_pane_t3_ParamLimits

0x6ef9,	// (0x0006de6d) main_touch_calib_pane_t4_ParamLimits

0x6f0b,	// (0x0006de7f) main_touch_calib_pane_t5_ParamLimits

0xf70c,	// (0x00076680) main_touch_calib_pane_t_ParamLimits

0xc9e0,	// (0x00073954) list_single_fp_cale_pane_g3_ParamLimits

0xc9e0,	// (0x00073954) list_single_fp_cale_pane_g3

0x15f8,	// (0x0006856c) bg_button_pane_cp012_ParamLimits

0x15f8,	// (0x0006856c) bg_vkb2_func_pane_cp03_ParamLimits

0x89a5,	// (0x0006f919) cell_vitu2_function_top_pane_g1_ParamLimits

0x15f8,	// (0x0006856c) bg_vkb2_func_pane_cp04_ParamLimits

0x94e5,	// (0x00070459) main_ncimui_button_group_pane_ParamLimits

0x94e5,	// (0x00070459) main_ncimui_button_group_pane

0x9543,	// (0x000704b7) main_ncimui_pane_t3_ParamLimits

0x9543,	// (0x000704b7) main_ncimui_pane_t3

0xe372,	// (0x000752e6) phacti_button_group_pane

0xe5d6,	// (0x0007554a) aid_size_list_single_double_ParamLimits

0xa078,	// (0x00070fec) popup_ezdial_listscroll_window_ParamLimits

0xa08e,	// (0x00071002) popup_number_entry_window_cp01_ParamLimits

0xa123,	// (0x00071097) phacti_button_pane_ParamLimits

0xa123,	// (0x00071097) phacti_button_pane

0xad6d,	// (0x00071ce1) bg_button_pane_cp14

0xe6c6,	// (0x0007563a) phacti_button_pane_t1

0xa132,	// (0x000710a6) main_touch_calib_button_pane_ParamLimits

0xa132,	// (0x000710a6) main_touch_calib_button_pane

0xb546,	// (0x000724ba) bg_button_pane_cp18_ParamLimits

0xb546,	// (0x000724ba) bg_button_pane_cp18

0xa14d,	// (0x000710c1) main_touch_calib_button_pane_t1_ParamLimits

0xa14d,	// (0x000710c1) main_touch_calib_button_pane_t1

0xa163,	// (0x000710d7) main_touch_calib_button_pane_t2_ParamLimits

0xa163,	// (0x000710d7) main_touch_calib_button_pane_t2

0x0001,

0xfdc1,	// (0x00076d35) main_touch_calib_button_pane_t_ParamLimits

0xfdc1,	// (0x00076d35) main_touch_calib_button_pane_t

0xad6d,	// (0x00071ce1) cell_ncimui_button_pane

0xad6d,	// (0x00071ce1) bg_button_pane_cp032

0xe6d4,	// (0x00075648) cell_ncimui_button_pane_t1

0xedf3,	// (0x00075d67) image3_infobar_pane_ParamLimits

0xedf3,	// (0x00075d67) image3_infobar_pane

0x98de,	// (0x00070852) fs_bigclock_status_pane_ParamLimits

0x98de,	// (0x00070852) fs_bigclock_status_pane

0x98eb,	// (0x0007085f) main_fs_bigclock_clock_pane_ParamLimits

0x98eb,	// (0x0007085f) main_fs_bigclock_clock_pane

0x990d,	// (0x00070881) main_fs_bigclock_indi_pane_ParamLimits

0x990d,	// (0x00070881) main_fs_bigclock_indi_pane

0x9937,	// (0x000708ab) main_fs_bigclock_swipe_pane_ParamLimits

0x9937,	// (0x000708ab) main_fs_bigclock_swipe_pane

0xad6d,	// (0x00071ce1) main_fs_clock_dumped_data

0xddad,	// (0x00074d21) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xddad,	// (0x00074d21) list_single_fs_bigclock_indicator_pane_g1

0xddc7,	// (0x00074d3b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xddc7,	// (0x00074d3b) list_single_fs_bigclock_indicator_pane_g2

0xdde1,	// (0x00074d55) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdde1,	// (0x00074d55) list_single_fs_bigclock_indicator_pane_g3

0xddfb,	// (0x00074d6f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xddfb,	// (0x00074d6f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x00076b9e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x00076b9e) list_single_fs_bigclock_indicator_pane_g

0xde24,	// (0x00074d98) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xde24,	// (0x00074d98) list_single_fs_bigclock_indicator_pane_t1

0xde4c,	// (0x00074dc0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde4c,	// (0x00074dc0) list_single_fs_bigclock_indicator_pane_t2

0xde74,	// (0x00074de8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xde74,	// (0x00074de8) list_single_fs_bigclock_indicator_pane_t3

0xde9c,	// (0x00074e10) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xde9c,	// (0x00074e10) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x00076ba9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x00076ba9) list_single_fs_bigclock_indicator_pane_t

0xe6e2,	// (0x00075656) image3_infobar_fav_pane_ParamLimits

0xe6e2,	// (0x00075656) image3_infobar_fav_pane

0xe6f2,	// (0x00075666) image3_infobar_loc_pane_ParamLimits

0xe6f2,	// (0x00075666) image3_infobar_loc_pane

0xe706,	// (0x0007567a) image3_infobar_time_pane_ParamLimits

0xe706,	// (0x0007567a) image3_infobar_time_pane

0xb80f,	// (0x00072783) image3_infobar_time_pane_g1

0xe716,	// (0x0007568a) image3_infobar_time_pane_t1

0xb80f,	// (0x00072783) image3_infobar_loc_pane_g1

0xe724,	// (0x00075698) image3_infobar_loc_pane_g2

0x0001,

0xfdc6,	// (0x00076d3a) image3_infobar_loc_pane_g

0xe72c,	// (0x000756a0) image3_infobar_loc_pane_t1

0xb80f,	// (0x00072783) image3_infobar_fav_pane_g1

0xe73a,	// (0x000756ae) image3_infobar_fav_pane_g2

0x0001,

0xfdcb,	// (0x00076d3f) image3_infobar_fav_pane_g

0xe742,	// (0x000756b6) fs_bigclock_status_battery_pane

0xe74b,	// (0x000756bf) fs_bigclock_status_signal_pane

0xe754,	// (0x000756c8) fs_bigclock_status_title_pane

0xe75d,	// (0x000756d1) fs_bigclock_status_signal_pane_g1

0xe766,	// (0x000756da) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdd0,	// (0x00076d44) fs_bigclock_status_signal_pane_g

0xe76e,	// (0x000756e2) fs_bigclock_status_battery_pane_g1

0xe777,	// (0x000756eb) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd5,	// (0x00076d49) fs_bigclock_status_battery_pane_g

0xe77f,	// (0x000756f3) fs_bigclock_status_title_pane_t1

0xa181,	// (0x000710f5) main_fs_bigclock_clock_pane_g1

0xa193,	// (0x00071107) main_fs_bigclock_clock_pane_g2

0xa1a4,	// (0x00071118) main_fs_bigclock_clock_pane_g3

0xa1a4,	// (0x00071118) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdda,	// (0x00076d4e) main_fs_bigclock_clock_pane_g

0xa1b7,	// (0x0007112b) main_fs_bigclock_clock_pane_t1

0xa1d2,	// (0x00071146) main_fs_bigclock_clock_pane_t2

0x0001,

0xfde3,	// (0x00076d57) main_fs_bigclock_clock_pane_t

0xe78d,	// (0x00075701) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe78d,	// (0x00075701) list_single_fs_bigclock_indicator_pane

0xe79e,	// (0x00075712) list_single_fs_bigclock_pane_ParamLimits

0xe79e,	// (0x00075712) list_single_fs_bigclock_pane

0xe7c4,	// (0x00075738) main_fs_bigclock_indicator_pane_t1

0xe7d3,	// (0x00075747) list_single_fs_bigclock_pane_g1

0xe7db,	// (0x0007574f) list_single_fs_bigclock_pane_t1

0xb80f,	// (0x00072783) main_fs_bigclock_swipe_pane_g1

0xe81b,	// (0x0007578f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf4,	// (0x00076d68) main_fs_bigclock_swipe_pane_g

0xe823,	// (0x00075797) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe823,	// (0x00075797) main_fs_bigclock_swipe_pane_t1

0x4fb6,	// (0x0006bf2a) call_type_pane_ParamLimits

0xad6d,	// (0x00071ce1) main_btmg_pane

0x3033,	// (0x00069fa7) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3033,	// (0x00069fa7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd67,	// (0x00076cdb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd67,	// (0x00076cdb) list_single_cale_mrui_row_pane_g

0xe630,	// (0x000755a4) list_recal_vselct_arw_lo_pane

0xe638,	// (0x000755ac) list_recal_vselct_arw_up_pane

0xe640,	// (0x000755b4) list_recal_vselct_pane

0xe840,	// (0x000757b4) btmg_button_pane

0xa232,	// (0x000711a6) main_btmg_pane_g1

0xad6d,	// (0x00071ce1) bg_button_pane_cp044

0xe848,	// (0x000757bc) btmg_button_pane_t1

0xc2e6,	// (0x0007325a) aid_listscroll_gen

0x15f8,	// (0x0006856c) main_cntbar_detail_pane

0xe277,	// (0x000751eb) list_cmail_folder_pane

0xe287,	// (0x000751fb) sp_fs_scroll_pane_cp03_ParamLimits

0x318d,	// (0x0006a101) list_single_fs_dyc_pane_cp01_ParamLimits

0x318d,	// (0x0006a101) list_single_fs_dyc_pane_cp01

0xe856,	// (0x000757ca) aid_size_cmail_indent

0xe85f,	// (0x000757d3) list_single_dyc_row_pane_cp01

0xa262,	// (0x000711d6) cntbar_detail_list_pane_ParamLimits

0xa262,	// (0x000711d6) cntbar_detail_list_pane

0xa2a8,	// (0x0007121c) main_cntbar_detail_cont_pane_ParamLimits

0xa2a8,	// (0x0007121c) main_cntbar_detail_cont_pane

0xa2bc,	// (0x00071230) scroll_pane_cp032_ParamLimits

0xa2bc,	// (0x00071230) scroll_pane_cp032

0xa2c8,	// (0x0007123c) cntbar_detail_list_event_pane_ParamLimits

0xa2c8,	// (0x0007123c) cntbar_detail_list_event_pane

0xa272,	// (0x000711e6) cntbar_detail_list_shct_pane

0x0241,	// (0x000671b5) aid_list_gen

0xb699,	// (0x0007260d) aid_scroll

0xd4f9,	// (0x0007446d) aid_size_touch_scroll_bar

0x2c7b,	// (0x00069bef) aid_list_double

0xd513,	// (0x00074487) aid_list_single

0xd513,	// (0x00074487) aid_list_single_lg

0x31a3,	// (0x0006a117) aid_list_z_g_a_sm

0x31ab,	// (0x0006a11f) aid_list_z_g_d

0x31b3,	// (0x0006a127) aid_txt_z_prm

0x31c1,	// (0x0006a135) aid_txt_z_prm_cp01

0x31cf,	// (0x0006a143) aid_txt_z_sec

0xa2d9,	// (0x0007124d) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa2d9,	// (0x0007124d) main_cntbar_detail_cont_pane_g1

0xa2ed,	// (0x00071261) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa2ed,	// (0x00071261) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf9,	// (0x00076d6d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf9,	// (0x00076d6d) main_cntbar_detail_cont_pane_g

0x0274,	// (0x000671e8) main_cntbar_detail_cont_pane_t1

0x0282,	// (0x000671f6) main_cntbar_detail_cont_pane_t2

0x0290,	// (0x00067204) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdfe,	// (0x00076d72) main_cntbar_detail_cont_pane_t

0xa2fd,	// (0x00071271) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa2fd,	// (0x00071271) cell_cntbar_detail_list_shct_pane

0x02b0,	// (0x00067224) cntbar_detail_list_shct_pane_g1

0x02b9,	// (0x0006722d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe05,	// (0x00076d79) cntbar_detail_list_shct_pane_g

0xa30f,	// (0x00071283) cntbar_detail_list_event_pane_g1_ParamLimits

0xa30f,	// (0x00071283) cntbar_detail_list_event_pane_g1

0xa31b,	// (0x0007128f) cntbar_detail_list_event_pane_g2_ParamLimits

0xa31b,	// (0x0007128f) cntbar_detail_list_event_pane_g2

0x0005,

0xfe0a,	// (0x00076d7e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe0a,	// (0x00076d7e) cntbar_detail_list_event_pane_g

0xa387,	// (0x000712fb) cntbar_detail_list_event_pane_t1_ParamLimits

0xa387,	// (0x000712fb) cntbar_detail_list_event_pane_t1

0xa39c,	// (0x00071310) cntbar_detail_list_event_pane_t2_ParamLimits

0xa39c,	// (0x00071310) cntbar_detail_list_event_pane_t2

0x0002,

0xfe17,	// (0x00076d8b) cntbar_detail_list_event_pane_t_ParamLimits

0xfe17,	// (0x00076d8b) cntbar_detail_list_event_pane_t

0xb80f,	// (0x00072783) cell_cntbar_detail_list_shct_pane_g1

0x14ed,	// (0x00068461) navi_pane_mv_g3

0x15f8,	// (0x0006856c) main_cntbar_detail_pane_ParamLimits

0xad6d,	// (0x00071ce1) main_notif_wgt_pane

0xebef,	// (0x00075b63) aid_tch_main_mp4_pane_g4

0xedeb,	// (0x00075d5f) popup_slider_window_cp02

0xe626,	// (0x0007559a) list_recal_day_event_pane

0xa23a,	// (0x000711ae) cntbar_detail_btn_pane_ParamLimits

0xa23a,	// (0x000711ae) cntbar_detail_btn_pane

0xa24d,	// (0x000711c1) cntbar_detail_btn_pane_cp01_ParamLimits

0xa24d,	// (0x000711c1) cntbar_detail_btn_pane_cp01

0xa272,	// (0x000711e6) cntbar_detail_list_shct_pane_ParamLimits

0xa282,	// (0x000711f6) cntbar_detail_pane_g1_ParamLimits

0xa282,	// (0x000711f6) cntbar_detail_pane_g1

0xa292,	// (0x00071206) cntbar_detail_pane_t1_ParamLimits

0xa292,	// (0x00071206) cntbar_detail_pane_t1

0xa327,	// (0x0007129b) cntbar_detail_list_event_pane_g3_ParamLimits

0xa327,	// (0x0007129b) cntbar_detail_list_event_pane_g3

0xa33f,	// (0x000712b3) cntbar_detail_list_event_pane_g4_ParamLimits

0xa33f,	// (0x000712b3) cntbar_detail_list_event_pane_g4

0xa357,	// (0x000712cb) cntbar_detail_list_event_pane_g5_ParamLimits

0xa357,	// (0x000712cb) cntbar_detail_list_event_pane_g5

0xa36f,	// (0x000712e3) cntbar_detail_list_event_pane_g6_ParamLimits

0xa36f,	// (0x000712e3) cntbar_detail_list_event_pane_g6

0xa3b1,	// (0x00071325) cntbar_detail_list_event_pane_t3_ParamLimits

0xa3b1,	// (0x00071325) cntbar_detail_list_event_pane_t3

0xa3c3,	// (0x00071337) popup_notif_wgt_window_ParamLimits

0xa3c3,	// (0x00071337) popup_notif_wgt_window

0xa3d8,	// (0x0007134c) popup_submenu_window_cp01_ParamLimits

0xa3d8,	// (0x0007134c) popup_submenu_window_cp01

0xb7ab,	// (0x0007271f) bg_popup_window_pane_cp10

0x0390,	// (0x00067304) listscroll_notif_wgt_pane

0x03a1,	// (0x00067315) list_notif_wgt_window

0x03aa,	// (0x0006731e) scroll_pane_cp033

0xa3e8,	// (0x0007135c) list_notif_wgt_row_pane_ParamLimits

0xa3e8,	// (0x0007135c) list_notif_wgt_row_pane

0x03c5,	// (0x00067339) aid_size_list_notif_wgt_del

0x03d2,	// (0x00067346) list_notif_wgt_row_pane_g1

0x03de,	// (0x00067352) list_notif_wgt_row_pane_g2

0x03f2,	// (0x00067366) list_notif_wgt_row_pane_g3

0x0002,

0xfe1e,	// (0x00076d92) list_notif_wgt_row_pane_g

0x03ff,	// (0x00067373) list_notif_wgt_row_pane_t1

0x0415,	// (0x00067389) list_notif_wgt_row_pane_t2

0x0427,	// (0x0006739b) list_notif_wgt_row_pane_t3

0x0002,

0xfe25,	// (0x00076d99) list_notif_wgt_row_pane_t

0xd1f3,	// (0x00074167) list_recal_day_event_pane_g1

0x0439,	// (0x000673ad) list_recal_day_event_pane_t1

0xad6d,	// (0x00071ce1) bg_button_pane_cp045

0xa3f8,	// (0x0007136c) cntbar_detail_btn_pane_t1

0x1820,	// (0x00068794) main_callh_pane_ParamLimits

0x1820,	// (0x00068794) main_callh_pane

0xad6d,	// (0x00071ce1) main_coverflow0_pane

0xad6d,	// (0x00071ce1) main_wgtman_pane

0x994b,	// (0x000708bf) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x994b,	// (0x000708bf) main_fs_bigclock_unlock_btn_pane

0xe249,	// (0x000751bd) bg_button_pane_cp16

0xe259,	// (0x000751cd) cell_tport_appsw_pane_g3

0xa406,	// (0x0007137a) cf0_flow_pane_ParamLimits

0xa406,	// (0x0007137a) cf0_flow_pane

0x0465,	// (0x000673d9) listscroll_cf0_pane

0x046e,	// (0x000673e2) main_cf0_pane_g1

0xa41b,	// (0x0007138f) main_cf0_pane_t1_ParamLimits

0xa41b,	// (0x0007138f) main_cf0_pane_t1

0xa430,	// (0x000713a4) main_cf0_pane_t2_ParamLimits

0xa430,	// (0x000713a4) main_cf0_pane_t2

0x0001,

0xfe31,	// (0x00076da5) main_cf0_pane_t_ParamLimits

0xfe31,	// (0x00076da5) main_cf0_pane_t

0x04a4,	// (0x00067418) scroll_pane_cp11

0xa445,	// (0x000713b9) cf0_flow_pane_g1

0xa44d,	// (0x000713c1) cf0_flow_pane_g2

0x0001,

0xfe36,	// (0x00076daa) cf0_flow_pane_g

0xa455,	// (0x000713c9) cf0_flow_pane_t1

0xad6d,	// (0x00071ce1) main_call6_pane

0xad6d,	// (0x00071ce1) main_calllock_pane

0xa463,	// (0x000713d7) call6_btn_grp_pane_ParamLimits

0xa463,	// (0x000713d7) call6_btn_grp_pane

0xa479,	// (0x000713ed) call6_pane_g1_ParamLimits

0xa479,	// (0x000713ed) call6_pane_g1

0xa48c,	// (0x00071400) popup_call6_1st_window_ParamLimits

0xa48c,	// (0x00071400) popup_call6_1st_window

0xa49b,	// (0x0007140f) popup_call6_2nd_window_ParamLimits

0xa49b,	// (0x0007140f) popup_call6_2nd_window

0xa4aa,	// (0x0007141e) cell_call6_btn_pane_ParamLimits

0xa4aa,	// (0x0007141e) cell_call6_btn_pane

0xb7ab,	// (0x0007271f) bg_popup_call2_in_pane_cp03

0x050c,	// (0x00067480) popup_call6_1st_window_g1

0x0514,	// (0x00067488) popup_call6_1st_window_g2

0x051c,	// (0x00067490) popup_call6_1st_window_g3

0x0002,

0xfe3b,	// (0x00076daf) popup_call6_1st_window_g

0x0524,	// (0x00067498) popup_call6_1st_window_t1

0x0533,	// (0x000674a7) popup_call6_1st_window_t2

0x0541,	// (0x000674b5) popup_call6_1st_window_t3

0x0002,

0xfe42,	// (0x00076db6) popup_call6_1st_window_t

0xb7ab,	// (0x0007271f) bg_popup_call2_in_pane_cp04

0x054f,	// (0x000674c3) popup_call6_2nd_window_g1

0x0557,	// (0x000674cb) popup_call6_2nd_window_g2

0x055f,	// (0x000674d3) popup_call6_2nd_window_g3

0x0002,

0xfe49,	// (0x00076dbd) popup_call6_2nd_window_g

0x0567,	// (0x000674db) popup_call6_2nd_window_t1

0xad6d,	// (0x00071ce1) bg_button_pane_cp15

0x0576,	// (0x000674ea) cell_call6_btn_pane_g1

0x057f,	// (0x000674f3) cell_call6_btn_pane_t1

0xa4be,	// (0x00071432) listscroll_wgtman_pane_ParamLimits

0xa4be,	// (0x00071432) listscroll_wgtman_pane

0xa4df,	// (0x00071453) wgtman_btn_pane_ParamLimits

0xa4df,	// (0x00071453) wgtman_btn_pane

0x1344,	// (0x000682b8) aid_scroll_copy1

0x05dd,	// (0x00067551) list_wgtman_pane

0xa51f,	// (0x00071493) wgtman_btn_pane_g1_ParamLimits

0xa51f,	// (0x00071493) wgtman_btn_pane_g1

0xa54b,	// (0x000714bf) wgtman_btn_pane_t1_ParamLimits

0xa54b,	// (0x000714bf) wgtman_btn_pane_t1

0x0646,	// (0x000675ba) wgtman_btn_pane_t2_ParamLimits

0x0646,	// (0x000675ba) wgtman_btn_pane_t2

0x0001,

0xfe50,	// (0x00076dc4) wgtman_btn_pane_t_ParamLimits

0xfe50,	// (0x00076dc4) wgtman_btn_pane_t

0xa588,	// (0x000714fc) listrow_wgtman_pane_ParamLimits

0xa588,	// (0x000714fc) listrow_wgtman_pane

0xa59a,	// (0x0007150e) listrow_wgtman_pane_g1

0xa5a7,	// (0x0007151b) listrow_wgtman_pane_g2

0x0001,

0xfe55,	// (0x00076dc9) listrow_wgtman_pane_g

0x31dd,	// (0x0006a151) listrow_wgtman_pane_t1

0x31f5,	// (0x0006a169) listrow_wgtman_pane_t2

0x0001,

0xfe5a,	// (0x00076dce) listrow_wgtman_pane_t

0x321b,	// (0x0006a18f) wait_bar_pane_cp09

0x0693,	// (0x00067607) main_calllock_btn_pane

0x069b,	// (0x0006760f) main_calllock_pane_g1

0xad6d,	// (0x00071ce1) bg_button_pane_cp17

0x06a4,	// (0x00067618) main_calllock_btn_pane_g1

0x06ad,	// (0x00067621) main_calllock_btn_pane_t1

0xad6d,	// (0x00071ce1) main_dialer3_pane

0xad6d,	// (0x00071ce1) main_fmrd2_pane

0xb80f,	// (0x00072783) main_fs_bigclock_unlock_btn_pane_g1

0x06c4,	// (0x00067638) main_fs_bigclock_unlock_btn_pane_t1

0xa5bf,	// (0x00071533) area_fmrd2_info_pane_ParamLimits

0xa5bf,	// (0x00071533) area_fmrd2_info_pane

0xa5ce,	// (0x00071542) area_fmrd2_visual_pane_ParamLimits

0xa5ce,	// (0x00071542) area_fmrd2_visual_pane

0xa5dc,	// (0x00071550) fmrd2_indi_pane_ParamLimits

0xa5dc,	// (0x00071550) fmrd2_indi_pane

0xa5e9,	// (0x0007155d) area_fmrd2_visual_pane_g1

0xa5f1,	// (0x00071565) area_fmrd2_visual_pane_t1

0xa5ff,	// (0x00071573) area_fmrd2_visual_pane_t2

0xa60d,	// (0x00071581) area_fmrd2_visual_pane_t3

0x0002,

0xfe64,	// (0x00076dd8) area_fmrd2_visual_pane_t

0xa61b,	// (0x0007158f) area_fmrd2_info_pane_g1

0xa623,	// (0x00071597) area_fmrd2_info_pane_t1

0xa631,	// (0x000715a5) area_fmrd2_info_pane_t2

0xa63f,	// (0x000715b3) area_fmrd2_info_pane_t3

0xa64d,	// (0x000715c1) area_fmrd2_info_pane_t4

0x0003,

0xfe6b,	// (0x00076ddf) area_fmrd2_info_pane_t

0xa65b,	// (0x000715cf) fmrd2_indi_pane_t1

0xa669,	// (0x000715dd) fmrd2_indi_pane_t2

0xa677,	// (0x000715eb) fmrd2_indi_pane_t3

0x0002,

0xfe74,	// (0x00076de8) fmrd2_indi_pane_t

0xde0a,	// (0x00074d7e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xde0a,	// (0x00074d7e) list_single_fs_bigclock_indicator_pane_g5

0xdeb8,	// (0x00074e2c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdeb8,	// (0x00074e2c) list_single_fs_bigclock_indicator_pane_t5

0x9ed9,	// (0x00070e4d) aid_cell_bcale_month_pane_ParamLimits

0x9ed9,	// (0x00070e4d) aid_cell_bcale_month_pane

0x9ef7,	// (0x00070e6b) bcale_month_pane_ParamLimits

0x9ef7,	// (0x00070e6b) bcale_month_pane

0x9f0f,	// (0x00070e83) bcale_preview_pane_ParamLimits

0x9f0f,	// (0x00070e83) bcale_preview_pane

0xe7db,	// (0x0007574f) list_single_fs_bigclock_pane_t1_ParamLimits

0xe7f7,	// (0x0007576b) list_single_fs_bigclock_pane_t2_ParamLimits

0xe7f7,	// (0x0007576b) list_single_fs_bigclock_pane_t2

0x0001,

0xfdef,	// (0x00076d63) list_single_fs_bigclock_pane_t_ParamLimits

0xfdef,	// (0x00076d63) list_single_fs_bigclock_pane_t

0x06bc,	// (0x00067630) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5f,	// (0x00076dd3) main_fs_bigclock_unlock_btn_pane_g

0xa685,	// (0x000715f9) aid_dia3_key_size_ParamLimits

0xa685,	// (0x000715f9) aid_dia3_key_size

0xa694,	// (0x00071608) aid_dia3_listrow_size_ParamLimits

0xa694,	// (0x00071608) aid_dia3_listrow_size

0xa6a7,	// (0x0007161b) dia3_keypad_fun_pane_ParamLimits

0xa6a7,	// (0x0007161b) dia3_keypad_fun_pane

0xa6bb,	// (0x0007162f) dia3_keypad_num_pane_ParamLimits

0xa6bb,	// (0x0007162f) dia3_keypad_num_pane

0xa6cc,	// (0x00071640) dia3_listscroll_pane_ParamLimits

0xa6cc,	// (0x00071640) dia3_listscroll_pane

0xa6dd,	// (0x00071651) dia3_numentry_pane_ParamLimits

0xa6dd,	// (0x00071651) dia3_numentry_pane

0x07df,	// (0x00067753) dia3_list_pane

0x07e8,	// (0x0006775c) scroll_pane_cp12

0xad6d,	// (0x00071ce1) bg_dia3_numentry_pane

0xa6f1,	// (0x00071665) dia3_numentry_pane_t1

0xa700,	// (0x00071674) cell_dia3_key_num_pane

0xa708,	// (0x0007167c) cell_dia3_key0_fun_pane_ParamLimits

0xa708,	// (0x0007167c) cell_dia3_key0_fun_pane

0xa71c,	// (0x00071690) cell_dia3_key1_fun_pane_ParamLimits

0xa71c,	// (0x00071690) cell_dia3_key1_fun_pane

0xa733,	// (0x000716a7) dia3_listrow_pane

0xdb19,	// (0x00074a8d) bg_dia3_numentry_pane_g1

0xad6d,	// (0x00071ce1) bg_button_pane_cp21

0x082f,	// (0x000677a3) cell_dia3_key_num_pane_t1

0x083d,	// (0x000677b1) cell_dia3_key_num_pane_t2

0x084c,	// (0x000677c0) cell_dia3_key_num_pane_t3

0x085b,	// (0x000677cf) cell_dia3_key_num_pane_t4

0x0003,

0xfe7b,	// (0x00076def) cell_dia3_key_num_pane_t

0xad6d,	// (0x00071ce1) bg_button_pane_cp19

0x086a,	// (0x000677de) cell_dia3_key0_fun_pane_g1

0xad6d,	// (0x00071ce1) bg_button_pane_cp20

0xa745,	// (0x000716b9) cell_dia3_key1_fun_pane_g1

0xa74d,	// (0x000716c1) area_left_week_number_pane

0xa759,	// (0x000716cd) area_top_day_name_pane

0xa76a,	// (0x000716de) frame_month_view_pane

0x08a8,	// (0x0006781c) grid_month_view_pane

0xa77b,	// (0x000716ef) cell_top_day_name_pane_ParamLimits

0xa77b,	// (0x000716ef) cell_top_day_name_pane

0xa79e,	// (0x00071712) cell_area_left_week_number_pane_ParamLimits

0xa79e,	// (0x00071712) cell_area_left_week_number_pane

0xa7b2,	// (0x00071726) cell_month_view_pane_ParamLimits

0xa7b2,	// (0x00071726) cell_month_view_pane

0x0911,	// (0x00067885) frm_month_g1

0xa7d7,	// (0x0007174b) frm_month_g2

0xa7e8,	// (0x0007175c) frm_month_g3

0xa7f9,	// (0x0007176d) frm_month_g4

0xa80a,	// (0x0007177e) frm_month_g5

0xa81b,	// (0x0007178f) frm_month_g6

0xa82c,	// (0x000717a0) frm_month_g7

0x0978,	// (0x000678ec) frm_month_g8

0xa83d,	// (0x000717b1) frm_month_g9

0xa84d,	// (0x000717c1) frm_month_g10

0xa85d,	// (0x000717d1) frm_month_g11

0xa86d,	// (0x000717e1) frm_month_g12

0xa87d,	// (0x000717f1) frm_month_g13

0xa88d,	// (0x00071801) frm_month_g14

0xa89d,	// (0x00071811) frm_month_g15

0xa8af,	// (0x00071823) frm_month_g16

0x000f,

0xfe84,	// (0x00076df8) frm_month_g

0x09ed,	// (0x00067961) cell_top_day_name_pane_t1

0xa8c1,	// (0x00071835) cell_area_left_week_number_pane_g1

0xa8cd,	// (0x00071841) cell_area_left_week_number_pane_t1

0xb4ae,	// (0x00072422) cell_month_view_pane_g1

0xa8e0,	// (0x00071854) cell_month_view_pane_t1

0xad6d,	// (0x00071ce1) main_fps_pane

0xe084,	// (0x00074ff8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe084,	// (0x00074ff8) cmail_ddmenu_btn02_pane_cp1

0xe0a0,	// (0x00075014) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe0a0,	// (0x00075014) cmail_ddmenu_btn02_pane_cp2

0xa0be,	// (0x00071032) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa0be,	// (0x00071032) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfda2,	// (0x00076d16) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfda2,	// (0x00076d16) cmail_ddmenu_btn02_pane_g

0xa0dc,	// (0x00071050) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa0dc,	// (0x00071050) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda7,	// (0x00076d1b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda7,	// (0x00076d1b) cmail_ddmenu_btn02_pane_t

0xa8f3,	// (0x00071867) fps_text_pane_ParamLimits

0xa8f3,	// (0x00071867) fps_text_pane

0xa909,	// (0x0007187d) main_fps_pane_g1_ParamLimits

0xa909,	// (0x0007187d) main_fps_pane_g1

0xa91f,	// (0x00071893) wait_bar_pane_cp010_ParamLimits

0xa91f,	// (0x00071893) wait_bar_pane_cp010

0xa930,	// (0x000718a4) fps_text_pane_t1_ParamLimits

0xa930,	// (0x000718a4) fps_text_pane_t1

0x0c34,	// (0x00067ba8) cam4_image_uncrop_pane_g1

0x0c3d,	// (0x00067bb1) cam4_image_uncrop_pane_g2

0x7fd9,	// (0x0006ef4d) cam4_image_uncrop_pane_g3

0x7fe2,	// (0x0006ef56) cam4_image_uncrop_pane_g4

0x0003,

0xf8a4,	// (0x00076818) cam4_image_uncrop_pane_g

0xa733,	// (0x000716a7) dia3_listrow_pane_ParamLimits

0xad6d,	// (0x00071ce1) main_phob2_pane

0x9d7c,	// (0x00070cf0) cell_tport_appsw_pane_cp02_ParamLimits

0x9d7c,	// (0x00070cf0) cell_tport_appsw_pane_cp02

0x9d8c,	// (0x00070d00) cell_tport_appsw_pane_cp03_ParamLimits

0x9d8c,	// (0x00070d00) cell_tport_appsw_pane_cp03

0xad6d,	// (0x00071ce1) phob2_contact_card_pane

0xad6d,	// (0x00071ce1) phob2_listscroll_pane

0x0a79,	// (0x000679ed) phob2_list_pane

0x0a81,	// (0x000679f5) scroll_pane_cp034

0xa948,	// (0x000718bc) phob2_cc_data_pane_ParamLimits

0xa948,	// (0x000718bc) phob2_cc_data_pane

0xa965,	// (0x000718d9) phob2_cc_listscroll_pane_ParamLimits

0xa965,	// (0x000718d9) phob2_cc_listscroll_pane

0xa588,	// (0x000714fc) list_double_large_graphic_phob2_pane_ParamLimits

0xa588,	// (0x000714fc) list_double_large_graphic_phob2_pane

0xa981,	// (0x000718f5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa981,	// (0x000718f5) list_double_large_graphic_phob2_pane_g1

0x322d,	// (0x0006a1a1) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x322d,	// (0x0006a1a1) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfea5,	// (0x00076e19) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea5,	// (0x00076e19) list_double_large_graphic_phob2_pane_g

0x3245,	// (0x0006a1b9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x3245,	// (0x0006a1b9) list_double_large_graphic_phob2_pane_t1

0x325a,	// (0x0006a1ce) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x325a,	// (0x0006a1ce) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeae,	// (0x00076e22) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeae,	// (0x00076e22) list_double_large_graphic_phob2_pane_t

0xad6d,	// (0x00071ce1) list_highlight_pane_cp024

0x0ae4,	// (0x00067a58) phob2_cc_button_pane

0xa99a,	// (0x0007190e) phob2_cc_data_pane_g1_ParamLimits

0xa99a,	// (0x0007190e) phob2_cc_data_pane_g1

0xa9b1,	// (0x00071925) phob2_cc_data_pane_g2_ParamLimits

0xa9b1,	// (0x00071925) phob2_cc_data_pane_g2

0x0001,

0xfeb3,	// (0x00076e27) phob2_cc_data_pane_g_ParamLimits

0xfeb3,	// (0x00076e27) phob2_cc_data_pane_g

0xa9c3,	// (0x00071937) phob2_cc_data_pane_t1_ParamLimits

0xa9c3,	// (0x00071937) phob2_cc_data_pane_t1

0xa9db,	// (0x0007194f) phob2_cc_data_pane_t2_ParamLimits

0xa9db,	// (0x0007194f) phob2_cc_data_pane_t2

0xa9f3,	// (0x00071967) phob2_cc_data_pane_t3_ParamLimits

0xa9f3,	// (0x00071967) phob2_cc_data_pane_t3

0x0002,

0xfeb8,	// (0x00076e2c) phob2_cc_data_pane_t_ParamLimits

0xfeb8,	// (0x00076e2c) phob2_cc_data_pane_t

0x0b49,	// (0x00067abd) phob2_cc_list_pane_ParamLimits

0x0b49,	// (0x00067abd) phob2_cc_list_pane

0xda36,	// (0x000749aa) scroll_pane_cp035_ParamLimits

0xda36,	// (0x000749aa) scroll_pane_cp035

0x15f8,	// (0x0006856c) bg_button_pane_cp033

0x0b55,	// (0x00067ac9) phob2_cc_button_pane_g1

0x0b61,	// (0x00067ad5) phob2_cc_button_pane_t1

0x0b76,	// (0x00067aea) phob2_cc_button_pane_t2

0x0001,

0xfebf,	// (0x00076e33) phob2_cc_button_pane_t

0xaa0b,	// (0x0007197f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaa0b,	// (0x0007197f) list_double_large_graphic_phob2_cc_pane

0xaa39,	// (0x000719ad) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaa39,	// (0x000719ad) list_double_large_graphic_phob2_cc_pane_g1

0xaa45,	// (0x000719b9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaa45,	// (0x000719b9) list_double_large_graphic_phob2_cc_pane_g2

0x326f,	// (0x0006a1e3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x326f,	// (0x0006a1e3) list_double_large_graphic_phob2_cc_pane_g3

0x327b,	// (0x0006a1ef) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x327b,	// (0x0006a1ef) list_double_large_graphic_phob2_cc_pane_g4

0x3287,	// (0x0006a1fb) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x3287,	// (0x0006a1fb) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec4,	// (0x00076e38) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec4,	// (0x00076e38) list_double_large_graphic_phob2_cc_pane_g

0x3293,	// (0x0006a207) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x3293,	// (0x0006a207) list_double_large_graphic_phob2_cc_pane_t1

0x32bc,	// (0x0006a230) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x32bc,	// (0x0006a230) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfecf,	// (0x00076e43) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfecf,	// (0x00076e43) list_double_large_graphic_phob2_cc_pane_t

0x0bee,	// (0x00067b62) list_highlight_pane_cp025_ParamLimits

0x0bee,	// (0x00067b62) list_highlight_pane_cp025

0x15f8,	// (0x0006856c) bg_button_pane_cp033_ParamLimits

0x0b55,	// (0x00067ac9) phob2_cc_button_pane_g1_ParamLimits

0x0b61,	// (0x00067ad5) phob2_cc_button_pane_t1_ParamLimits

0x0b76,	// (0x00067aea) phob2_cc_button_pane_t2_ParamLimits

0xfebf,	// (0x00076e33) phob2_cc_button_pane_t_ParamLimits

0x34dd,	// (0x0006a451) popup_wgtman_window

0xdb39,	// (0x00074aad) scroll_pane_cp038

0xa501,	// (0x00071475) wgtman_btn_pane_cp_01_ParamLimits

0xa501,	// (0x00071475) wgtman_btn_pane_cp_01

0x0bfc,	// (0x00067b70) wgtman_content_pane

0x0c05,	// (0x00067b79) wgtman_heading_pane

0xad6d,	// (0x00071ce1) bg_heading_pane_cp02

0x0c0e,	// (0x00067b82) wgtman_heading_pane_g1

0x0c16,	// (0x00067b8a) wgtman_heading_pane_t1

0x0c24,	// (0x00067b98) scroll_pane_cp036

0x0c2c,	// (0x00067ba0) wgtman_list_pane

0xe868,	// (0x000757dc) wgtman_list_pane_t1_ParamLimits

0xe868,	// (0x000757dc) wgtman_list_pane_t1

0xee77,	// (0x00075deb) cam4_grid_pane

0x2b10,	// (0x00069a84) bg_button_pane_cp015_ParamLimits

0x8b1e,	// (0x0006fa92) bg_button_pane_cp016_ParamLimits

0x8b30,	// (0x0006faa4) bg_button_pane_cp017_ParamLimits

0x2b4e,	// (0x00069ac2) popup_vitu2_query_window_g3_ParamLimits

0x2b4e,	// (0x00069ac2) popup_vitu2_query_window_g3

0x2bc7,	// (0x00069b3b) popup_vitu2_query_window_t6_ParamLimits

0x2bc7,	// (0x00069b3b) popup_vitu2_query_window_t6

0x2bf2,	// (0x00069b66) popup_vitu2_query_window_t7_ParamLimits

0x2bf2,	// (0x00069b66) popup_vitu2_query_window_t7

0x0c34,	// (0x00067ba8) cam4_grid_pane_g1

0x0c3d,	// (0x00067bb1) cam4_grid_pane_g2

0x0c46,	// (0x00067bba) cam4_grid_pane_g3

0x0c4f,	// (0x00067bc3) cam4_grid_pane_g4

0x0003,

0xfed4,	// (0x00076e48) cam4_grid_pane_g

0x4119,	// (0x0006b08d) aid_placing_vt_slider_lsc_ParamLimits

0x4389,	// (0x0006b2fd) vidtel_button_pane_ParamLimits

0x4389,	// (0x0006b2fd) vidtel_button_pane

0xad6d,	// (0x00071ce1) bg_button_pane_cp034

0xaa51,	// (0x000719c5) vidtel_button_pane_g1

0xaa59,	// (0x000719cd) vidtel_button_pane_t1

0xd1e3,	// (0x00074157) aid_size_vtel_slider_touch

0xda36,	// (0x000749aa) scroll_pane_cp039

0xdb68,	// (0x00074adc) ncim_query_button_pane_cp01_ParamLimits

0xdb87,	// (0x00074afb) ncimui_query_pane_g1_ParamLimits

0x15f8,	// (0x0006856c) input_focus_pane_cp012_ParamLimits

0xdbac,	// (0x00074b20) ncim_query_entry_pane_t1_ParamLimits

0xda36,	// (0x000749aa) scroll_pane_cp039_ParamLimits

0x1408,	// (0x0006837c) navi_pane_bcale_mc_g1

0x1410,	// (0x00068384) navi_pane_bcale_mc_t1

0xe0d4,	// (0x00075048) main_sp_fs_email_pane_g1

0xe0e0,	// (0x00075054) main_sp_fs_email_pane_g2

0x0001,

0xfc9f,	// (0x00076c13) main_sp_fs_email_pane_g

0xe522,	// (0x00075496) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe522,	// (0x00075496) list_single_cale_mrui_row_pane_g3

0x3165,	// (0x0006a0d9) list_single_recal_day_pane_g5_event_pane

0xe68b,	// (0x000755ff) list_single_recal_day_pane_g7

0x0c76,	// (0x00067bea) list_recal_day_event_pane_cp01

0x0c7f,	// (0x00067bf3) list_recal_vselct_arw_lo_pane_cp01

0x0c87,	// (0x00067bfb) list_recal_vselct_arw_up_pane_cp01

0x0c8f,	// (0x00067c03) list_recal_vselct_pane_cp01

0xd1f3,	// (0x00074167) list_recal_day_event_pane_cp01_g1

0xe87f,	// (0x000757f3) list_recal_day_event_pane_cp01_t1

0xe693,	// (0x00075607) list_single_recal_day_pane_t1_ParamLimits

0x317b,	// (0x0006a0ef) list_single_recal_day_pane_t2_ParamLimits

0xfdb7,	// (0x00076d2b) list_single_recal_day_pane_t_ParamLimits

0xb434,	// (0x000723a8) bg_notes_pane_ParamLimits

0xb506,	// (0x0007247a) list_notes_pane_ParamLimits

0x36d1,	// (0x0006a645) scroll_pane_cp06_ParamLimits

0xb546,	// (0x000724ba) main_notes_pane_ParamLimits

0x15f8,	// (0x0006856c) main_welc_pane

0xaa85,	// (0x000719f9) main_welc_body_pane_ParamLimits

0xaa85,	// (0x000719f9) main_welc_body_pane

0xaaa1,	// (0x00071a15) main_welc_opti_pane_ParamLimits

0xaaa1,	// (0x00071a15) main_welc_opti_pane

0xab0d,	// (0x00071a81) main_welc_pane_t1_ParamLimits

0xab0d,	// (0x00071a81) main_welc_pane_t1

0xac4d,	// (0x00071bc1) main_welc_body_row_pane_ParamLimits

0xac4d,	// (0x00071bc1) main_welc_body_row_pane

0xbbe3,	// (0x00072b57) main_welc_opti_row_pane_ParamLimits

0xbbe3,	// (0x00072b57) main_welc_opti_row_pane

0x0e35,	// (0x00067da9) main_welc_opti_row_pane_g1

0xac60,	// (0x00071bd4) main_welc_opti_row_pane_t1

0x0e4c,	// (0x00067dc0) main_welc_body_row_pane_t1

0x0399,	// (0x0006730d) popup_notif_wgt_heading_pane

0x03c5,	// (0x00067339) aid_size_list_notif_wgt_del_ParamLimits

0x03d2,	// (0x00067346) list_notif_wgt_row_pane_g1_ParamLimits

0x03de,	// (0x00067352) list_notif_wgt_row_pane_g2_ParamLimits

0x03f2,	// (0x00067366) list_notif_wgt_row_pane_g3_ParamLimits

0xfe1e,	// (0x00076d92) list_notif_wgt_row_pane_g_ParamLimits

0x03ff,	// (0x00067373) list_notif_wgt_row_pane_t1_ParamLimits

0x0415,	// (0x00067389) list_notif_wgt_row_pane_t2_ParamLimits

0x0427,	// (0x0006739b) list_notif_wgt_row_pane_t3_ParamLimits

0xfe25,	// (0x00076d99) list_notif_wgt_row_pane_t_ParamLimits

0xa59a,	// (0x0007150e) listrow_wgtman_pane_g1_ParamLimits

0xa5a7,	// (0x0007151b) listrow_wgtman_pane_g2_ParamLimits

0xfe55,	// (0x00076dc9) listrow_wgtman_pane_g_ParamLimits

0x31dd,	// (0x0006a151) listrow_wgtman_pane_t1_ParamLimits

0x31f5,	// (0x0006a169) listrow_wgtman_pane_t2_ParamLimits

0xfe5a,	// (0x00076dce) listrow_wgtman_pane_t_ParamLimits

0x321b,	// (0x0006a18f) wait_bar_pane_cp09_ParamLimits

0xad6d,	// (0x00071ce1) bg_popup_heading_pane_cp02

0x0e5b,	// (0x00067dcf) popup_notif_wgt_heading_pane_g1

0x0e63,	// (0x00067dd7) popup_notif_wgt_heading_pane_t1

0xc2fa,	// (0x0007326e) main_vids_pane

0xad6d,	// (0x00071ce1) vids_listscroll_pane

0xac6f,	// (0x00071be3) scroll_pane_cp040

0xad6d,	// (0x00071ce1) vids_list_pane

0x0231,	// (0x000671a5) vids_list_double_pane_ParamLimits

0x0231,	// (0x000671a5) vids_list_double_pane

0xac7a,	// (0x00071bee) vids_list_double_pane_g1

0xac83,	// (0x00071bf7) vids_list_double_pane_t1

0xac92,	// (0x00071c06) vids_list_double_pane_t2

0x0001,

0xfef3,	// (0x00076e67) vids_list_double_pane_t

0x15f8,	// (0x0006856c) main_ncimui_pane_ParamLimits

0x94f7,	// (0x0007046b) main_ncimui_pane_g1_ParamLimits

0x9503,	// (0x00070477) main_ncimui_pane_g2_ParamLimits

0x9503,	// (0x00070477) main_ncimui_pane_g2

0x0001,

0xfba0,	// (0x00076b14) main_ncimui_pane_g_ParamLimits

0xfba0,	// (0x00076b14) main_ncimui_pane_g

0xaab8,	// (0x00071a2c) main_welc_pane_g1_ParamLimits

0xaab8,	// (0x00071a2c) main_welc_pane_g1

0xaacb,	// (0x00071a3f) main_welc_pane_g2_ParamLimits

0xaacb,	// (0x00071a3f) main_welc_pane_g2

0x0003,

0xfedd,	// (0x00076e51) main_welc_pane_g_ParamLimits

0xfedd,	// (0x00076e51) main_welc_pane_g

0xb434,	// (0x000723a8) listscroll_mce_pane_ParamLimits

0x52cf,	// (0x0006c243) wait_bar_pane_cp10

0xc2ee,	// (0x00073262) main_cale_day_pane_ParamLimits

0xc2ee,	// (0x00073262) main_cale_week_pane_ParamLimits

0xb434,	// (0x000723a8) main_messa_pane_ParamLimits

0x7617,	// (0x0006e58b) main_clock2_btn_pane_ParamLimits

0x7617,	// (0x0006e58b) main_clock2_btn_pane

0xca32,	// (0x000739a6) main_clock2_btn_pane_cp01_ParamLimits

0xca32,	// (0x000739a6) main_clock2_btn_pane_cp01

0xe4dd,	// (0x00075451) list_cale_mrui_pane_ParamLimits

0x0478,	// (0x000673ec) main_cf0_pane_g2

0x0001,

0xfe2c,	// (0x00076da0) main_cf0_pane_g

0xa74d,	// (0x000716c1) area_left_week_number_pane_ParamLimits

0xa759,	// (0x000716cd) area_top_day_name_pane_ParamLimits

0xa76a,	// (0x000716de) frame_month_view_pane_ParamLimits

0x08a8,	// (0x0006781c) grid_month_view_pane_ParamLimits

0x0911,	// (0x00067885) frm_month_g1_ParamLimits

0xa7d7,	// (0x0007174b) frm_month_g2_ParamLimits

0xa7e8,	// (0x0007175c) frm_month_g3_ParamLimits

0xa7f9,	// (0x0007176d) frm_month_g4_ParamLimits

0xa80a,	// (0x0007177e) frm_month_g5_ParamLimits

0xa81b,	// (0x0007178f) frm_month_g6_ParamLimits

0xa82c,	// (0x000717a0) frm_month_g7_ParamLimits

0x0978,	// (0x000678ec) frm_month_g8_ParamLimits

0xa83d,	// (0x000717b1) frm_month_g9_ParamLimits

0xa84d,	// (0x000717c1) frm_month_g10_ParamLimits

0xa85d,	// (0x000717d1) frm_month_g11_ParamLimits

0xa86d,	// (0x000717e1) frm_month_g12_ParamLimits

0xa87d,	// (0x000717f1) frm_month_g13_ParamLimits

0xa88d,	// (0x00071801) frm_month_g14_ParamLimits

0xa89d,	// (0x00071811) frm_month_g15_ParamLimits

0xa8af,	// (0x00071823) frm_month_g16_ParamLimits

0xfe84,	// (0x00076df8) frm_month_g_ParamLimits

0x09ed,	// (0x00067961) cell_top_day_name_pane_t1_ParamLimits

0xa8c1,	// (0x00071835) cell_area_left_week_number_pane_g1_ParamLimits

0xa8cd,	// (0x00071841) cell_area_left_week_number_pane_t1_ParamLimits

0xb4ae,	// (0x00072422) cell_month_view_pane_g1_ParamLimits

0xa8e0,	// (0x00071854) cell_month_view_pane_t1_ParamLimits

0xb42c,	// (0x000723a0) main_clock2_btn_pane_g1

0x185c,	// (0x000687d0) main_clock2_btn_pane_t1

0x15f8,	// (0x0006856c) listscroll_cmail_pane_ParamLimits

0xe0d4,	// (0x00075048) main_sp_fs_email_pane_g1_ParamLimits

0xe0e0,	// (0x00075054) main_sp_fs_email_pane_g2_ParamLimits

0xfc9f,	// (0x00076c13) main_sp_fs_email_pane_g_ParamLimits

0xe607,	// (0x0007557b) list_recal_day_pane_ParamLimits

0xe618,	// (0x0007558c) mian_recal_day_pane_t1

0x2ee8,	// (0x00069e5c) list_single_dyc_row_text_pane_t4_ParamLimits

0x2ee8,	// (0x00069e5c) list_single_dyc_row_text_pane_t4

0x2f1f,	// (0x00069e93) list_single_dyc_row_text_pane_t5_ParamLimits

0x2f1f,	// (0x00069e93) list_single_dyc_row_text_pane_t5

0xe179,	// (0x000750ed) list_single_dyc_row_text_pane_t6_ParamLimits

0xe179,	// (0x000750ed) list_single_dyc_row_text_pane_t6

0x4ef4,	// (0x0006be68) aid_mgn_list_cale_time_pane

0x15f8,	// (0x0006856c) main_gallery2_pane_ParamLimits

0xca46,	// (0x000739ba) main_clock2_pane_cp01_t1

0xca54,	// (0x000739c8) main_clock2_pane_cp01_t3

0x0001,

0xf776,	// (0x000766ea) main_clock2_pane_cp01_t

0x3a46,	// (0x0006a9ba) cale_week_scroll_pane_g16_ParamLimits

0x3a46,	// (0x0006a9ba) cale_week_scroll_pane_g16

0xb7ab,	// (0x0007271f) vorec_slider_pane

0xaa59,	// (0x000719cd) vidtel_button_pane_t1_ParamLimits

0xa181,	// (0x000710f5) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa193,	// (0x00071107) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa1a4,	// (0x00071118) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa1a4,	// (0x00071118) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdda,	// (0x00076d4e) main_fs_bigclock_clock_pane_g_ParamLimits

0xa1b7,	// (0x0007112b) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa1d2,	// (0x00071146) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfde3,	// (0x00076d57) main_fs_bigclock_clock_pane_t_ParamLimits

0x6f55,	// (0x0006dec9) main_mup3_lyrics_pane_ParamLimits

0x6f55,	// (0x0006dec9) main_mup3_lyrics_pane

0xacc4,	// (0x00071c38) main_mup3_lyrics_pane_t1_ParamLimits

0xacc4,	// (0x00071c38) main_mup3_lyrics_pane_t1

0xebd9,	// (0x00075b4d) aid_main_mp4_pane_t1_area

0xebe3,	// (0x00075b57) aid_main_mp4_pane_t2_area

0xec8f,	// (0x00075c03) main_mp4_pane_g7_ParamLimits

0xec8f,	// (0x00075c03) main_mp4_pane_g7

0xec9b,	// (0x00075c0f) main_mp4_pane_g8_ParamLimits

0xec9b,	// (0x00075c0f) main_mp4_pane_g8

0x7e7b,	// (0x0006edef) aid_call6_pane_g1_size

0xaa25,	// (0x00071999) list_double_large_graphic_phob2_other_pane_ParamLimits

0xaa25,	// (0x00071999) list_double_large_graphic_phob2_other_pane

0x135b,	// (0x000682cf) list_double_large_graphic_phob2_other_pane_g1

0xad6d,	// (0x00071ce1) list_highlight_pane_cp026

0x15f8,	// (0x0006856c) main_welc_pane_ParamLimits

0x9c39,	// (0x00070bad) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9c39,	// (0x00070bad) main_sp_fs_ctrlbar_pane_g3

0x9c51,	// (0x00070bc5) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9c51,	// (0x00070bc5) main_sp_fs_ctrlbar_pane_g4

0x9c93,	// (0x00070c07) toolbar2_fixed_button_pane_cp01

0x9c9e,	// (0x00070c12) toolbar2_fixed_button_pane_cp02

0x9ca9,	// (0x00070c1d) toolbar2_fixed_button_pane_cp03

0xaa6f,	// (0x000719e3) list_welc_entry_pane_ParamLimits

0xaa6f,	// (0x000719e3) list_welc_entry_pane

0xaade,	// (0x00071a52) main_welc_pane_g3_ParamLimits

0xaade,	// (0x00071a52) main_welc_pane_g3

0xab27,	// (0x00071a9b) main_welc_pane_t2_ParamLimits

0xab27,	// (0x00071a9b) main_welc_pane_t2

0xab3d,	// (0x00071ab1) main_welc_pane_t3_ParamLimits

0xab3d,	// (0x00071ab1) main_welc_pane_t3

0x0005,

0xfee6,	// (0x00076e5a) main_welc_pane_t_ParamLimits

0xfee6,	// (0x00076e5a) main_welc_pane_t

0xabe9,	// (0x00071b5d) welc_button_pane_ParamLimits

0xabe9,	// (0x00071b5d) welc_button_pane

0xac3d,	// (0x00071bb1) welc_service_logo_pane_ParamLimits

0xac3d,	// (0x00071bb1) welc_service_logo_pane

0xace3,	// (0x00071c57) list_single_welc_entry_pane_ParamLimits

0xace3,	// (0x00071c57) list_single_welc_entry_pane

0xacf4,	// (0x00071c68) list_single_welc_entry_pane_g1

0xacfc,	// (0x00071c70) list_single_welc_entry_pane_t1

0xad0a,	// (0x00071c7e) list_single_welc_entry_pane_t2

0x0001,

0xfef8,	// (0x00076e6c) list_single_welc_entry_pane_t

0xad6d,	// (0x00071ce1) bg_button_pane_cp035

0x18bd,	// (0x00068831) welc_button_pane_t1

0x18cb,	// (0x0006883f) welc_service_logo_pane_g1

0x18d4,	// (0x00068848) welc_service_logo_pane_g2

0x0001,

0xfefd,	// (0x00076e71) welc_service_logo_pane_g

0xad6d,	// (0x00071ce1) main_int_radio_pane

0xb60b,	// (0x0007257f) list_single_fs_dyc_pane_g1

0x3239,	// (0x0006a1ad) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x3239,	// (0x0006a1ad) list_double_large_graphic_phob2_pane_g3

0xa98e,	// (0x00071902) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa98e,	// (0x00071902) list_double_large_graphic_phob2_pane_g4

0xad18,	// (0x00071c8c) main_int_radio1_pane_ParamLimits

0xad18,	// (0x00071c8c) main_int_radio1_pane

0x18f3,	// (0x00068867) find_pane_cp02

0xad35,	// (0x00071ca9) input_focus_pane_cp12_ParamLimits

0xad35,	// (0x00071ca9) input_focus_pane_cp12

0xad45,	// (0x00071cb9) input_focus_pane_cp13_ParamLimits

0xad45,	// (0x00071cb9) input_focus_pane_cp13

0xad59,	// (0x00071ccd) input_focus_pane_cp14_ParamLimits

0xad59,	// (0x00071ccd) input_focus_pane_cp14

0x1938,	// (0x000688ac) int_radio1_listscroll_pane

0xe88d,	// (0x00075801) main_int_radio1_pane_g1_ParamLimits

0xe88d,	// (0x00075801) main_int_radio1_pane_g1

0xe8a1,	// (0x00075815) main_int_radio1_pane_t1_ParamLimits

0xe8a1,	// (0x00075815) main_int_radio1_pane_t1

0xe8b8,	// (0x0007582c) main_int_radio1_pane_t2_ParamLimits

0xe8b8,	// (0x0007582c) main_int_radio1_pane_t2

0xe8cf,	// (0x00075843) main_int_radio1_pane_t3_ParamLimits

0xe8cf,	// (0x00075843) main_int_radio1_pane_t3

0xe8e6,	// (0x0007585a) main_int_radio1_pane_t4_ParamLimits

0xe8e6,	// (0x0007585a) main_int_radio1_pane_t4

0x199b,	// (0x0006890f) main_int_radio1_pane_t5_ParamLimits

0x199b,	// (0x0006890f) main_int_radio1_pane_t5

0xe8f8,	// (0x0007586c) main_int_radio1_pane_t6_ParamLimits

0xe8f8,	// (0x0007586c) main_int_radio1_pane_t6

0xe90d,	// (0x00075881) main_int_radio1_pane_t7_ParamLimits

0xe90d,	// (0x00075881) main_int_radio1_pane_t7

0xe922,	// (0x00075896) main_int_radio1_pane_t8_ParamLimits

0xe922,	// (0x00075896) main_int_radio1_pane_t8

0xe93f,	// (0x000758b3) main_int_radio1_pane_t9_ParamLimits

0xe93f,	// (0x000758b3) main_int_radio1_pane_t9

0xe951,	// (0x000758c5) main_int_radio1_pane_t10_ParamLimits

0xe951,	// (0x000758c5) main_int_radio1_pane_t10

0xe975,	// (0x000758e9) main_int_radio1_pane_t11_ParamLimits

0xe975,	// (0x000758e9) main_int_radio1_pane_t11

0xe999,	// (0x0007590d) main_int_radio1_pane_t12_ParamLimits

0xe999,	// (0x0007590d) main_int_radio1_pane_t12

0x000b,

0xff02,	// (0x00076e76) main_int_radio1_pane_t_ParamLimits

0xff02,	// (0x00076e76) main_int_radio1_pane_t

0x1a6a,	// (0x000689de) int_radio_list_pane

0x0a81,	// (0x000679f5) scroll_pane_cp037

0x065d,	// (0x000675d1) list_double_large_graphic_int_radio_pane_ParamLimits

0x065d,	// (0x000675d1) list_double_large_graphic_int_radio_pane

0x1a72,	// (0x000689e6) list_double_large_graphic_int_radio_pane_g1

0xe9ab,	// (0x0007591f) list_double_large_graphic_int_radio_pane_t1

0xe9b9,	// (0x0007592d) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xff1b,	// (0x00076e8f) list_double_large_graphic_int_radio_pane_t

0xad6d,	// (0x00071ce1) list_highlight_pane_cp027

0x0ca6,	// (0x00067c1a) main_button_pane_4

0xaaee,	// (0x00071a62) main_welc_pane_g4_ParamLimits

0xaaee,	// (0x00071a62) main_welc_pane_g4

0xab53,	// (0x00071ac7) main_welc_pane_t4_ParamLimits

0xab53,	// (0x00071ac7) main_welc_pane_t4

0xab68,	// (0x00071adc) main_welc_pane_t5_ParamLimits

0xab68,	// (0x00071adc) main_welc_pane_t5

0xabb0,	// (0x00071b24) main_welc_pane_t6_ParamLimits

0xabb0,	// (0x00071b24) main_welc_pane_t6

0xabfa,	// (0x00071b6e) welc_button_pane_2_ParamLimits

0xabfa,	// (0x00071b6e) welc_button_pane_2

0xac10,	// (0x00071b84) welc_button_pane_3_ParamLimits

0xac10,	// (0x00071b84) welc_button_pane_3

0x0ca6,	// (0x00067c1a) welc_button_pane_4

0xac2b,	// (0x00071b9f) welc_button_pane_5_ParamLimits

0xac2b,	// (0x00071b9f) welc_button_pane_5

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance
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
	0, // AknLayoutScalable_Apps::Tcell_pinb_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_pinb_item_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup2_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tcell_dialer_keypad_pane_ParamLimits_sig*,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
	0, // AknLayoutScalable_Apps::Tcell_dialer_command_2_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_single_spcha_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmain_popup_welc_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g4_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t5_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t6_sig*,
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
