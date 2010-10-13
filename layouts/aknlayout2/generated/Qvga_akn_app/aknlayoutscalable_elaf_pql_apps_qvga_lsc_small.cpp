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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00038c51 };

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
0x3833,	// (0x0003c484) Screen

0x383d,	// (0x0003c48e) application_window

0x3873,	// (0x0003c4c4) area_bottom_pane_ParamLimits

0x3873,	// (0x0003c4c4) area_bottom_pane

0x38a6,	// (0x0003c4f7) area_top_pane_ParamLimits

0x38a6,	// (0x0003c4f7) area_top_pane

0xb100,	// (0x00043d51) call_video_uplink_pane_ParamLimits

0xb100,	// (0x00043d51) call_video_uplink_pane

0x3926,	// (0x0003c577) main_pane_ParamLimits

0x3926,	// (0x0003c577) main_pane

0xc4a4,	// (0x000450f5) context_pane

0x6bd1,	// (0x0003f822) navi_pane

0x6bfa,	// (0x0003f84b) popup_cale_events_window_ParamLimits

0x6bfa,	// (0x0003f84b) popup_cale_events_window

0xc4b7,	// (0x00045108) popup_mup_playback_window

0x6c12,	// (0x0003f863) signal_pane

0x1927,	// (0x0003a578) main_browser_pane

0x1aec,	// (0x0003a73d) main_burst_pane

0x20c4,	// (0x0003ad15) main_calc_pane

0xc48e,	// (0x000450df) main_cale_day_pane

0x3daf,	// (0x0003ca00) main_cale_month_pane

0xc48e,	// (0x000450df) main_cale_week_pane

0x1aec,	// (0x0003a73d) main_call_pane

0x15dc,	// (0x0003a22d) main_call_poc_pane

0x1aec,	// (0x0003a73d) main_camera_pane

0x1aec,	// (0x0003a73d) main_chi_dic_pane

0x57c0,	// (0x0003e411) main_clock_pane

0x15dc,	// (0x0003a22d) main_fmradio_pane

0x1aec,	// (0x0003a73d) main_graph_messa_pane

0x15dc,	// (0x0003a22d) main_help_pane

0x1927,	// (0x0003a578) main_im_pane

0x1837,	// (0x0003a488) main_image_pane_ParamLimits

0x1837,	// (0x0003a488) main_image_pane

0x15dc,	// (0x0003a22d) main_location2_pane

0x1aec,	// (0x0003a73d) main_location_pane

0x1837,	// (0x0003a488) main_messa_pane

0x15dc,	// (0x0003a22d) main_mp2_pane

0x1aec,	// (0x0003a73d) main_mp_pane

0x15dc,	// (0x0003a22d) main_msg_pane

0x15dc,	// (0x0003a22d) main_mup_eq_pane

0x15dc,	// (0x0003a22d) main_mup_pane

0x1927,	// (0x0003a578) main_notes_pane

0x15dc,	// (0x0003a22d) main_pec_pane

0x15dc,	// (0x0003a22d) main_phob_pane

0x15dc,	// (0x0003a22d) main_pinb_pane

0x15dc,	// (0x0003a22d) main_postcard_pane

0x15dc,	// (0x0003a22d) main_qdial_pane

0x1aec,	// (0x0003a73d) main_skin_pane

0x15dc,	// (0x0003a22d) main_smil2_pane

0x1aec,	// (0x0003a73d) main_smil_pane

0x1aec,	// (0x0003a73d) main_video_pane

0x1aec,	// (0x0003a73d) main_video_tele_pane

0x1837,	// (0x0003a488) main_viewer_pane_ParamLimits

0x1837,	// (0x0003a488) main_viewer_pane

0x1aec,	// (0x0003a73d) main_vorec_pane

0x69c5,	// (0x0003f616) popup_blid_sat_info_window_ParamLimits

0x69c5,	// (0x0003f616) popup_blid_sat_info_window

0x6a1b,	// (0x0003f66c) popup_dyc_status_message_window_ParamLimits

0x6a1b,	// (0x0003f66c) popup_dyc_status_message_window

0x6a31,	// (0x0003f682) popup_grid_large_graphic_window_ParamLimits

0x6a31,	// (0x0003f682) popup_grid_large_graphic_window

0x6ac7,	// (0x0003f718) popup_loc_request_window_ParamLimits

0x6ac7,	// (0x0003f718) popup_loc_request_window

0x6bab,	// (0x0003f7fc) popup_wml_address_window_ParamLimits

0x6bab,	// (0x0003f7fc) popup_wml_address_window

0x67fd,	// (0x0003f44e) call_muted_g1

0x680d,	// (0x0003f45e) popup_call_audio_conf_window_ParamLimits

0x680d,	// (0x0003f45e) popup_call_audio_conf_window

0x682b,	// (0x0003f47c) popup_call_audio_first_window_ParamLimits

0x682b,	// (0x0003f47c) popup_call_audio_first_window

0x6889,	// (0x0003f4da) popup_call_audio_in_window_ParamLimits

0x6889,	// (0x0003f4da) popup_call_audio_in_window

0x68b5,	// (0x0003f506) popup_call_audio_out_window_ParamLimits

0x68b5,	// (0x0003f506) popup_call_audio_out_window

0x68e3,	// (0x0003f534) popup_call_audio_second_window_ParamLimits

0x68e3,	// (0x0003f534) popup_call_audio_second_window

0x6929,	// (0x0003f57a) popup_call_audio_wait_window_ParamLimits

0x6929,	// (0x0003f57a) popup_call_audio_wait_window

0x695c,	// (0x0003f5ad) popup_number_entry_window_ParamLimits

0x695c,	// (0x0003f5ad) popup_number_entry_window

0x11cb,	// (0x00039e1c) bg_popup_call_pane_cp05_ParamLimits

0x11cb,	// (0x00039e1c) bg_popup_call_pane_cp05

0x11eb,	// (0x00039e3c) popup_number_entry_window_t1

0x11fe,	// (0x00039e4f) popup_number_entry_window_t2

0x1210,	// (0x00039e61) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00047cd6) popup_number_entry_window_t

0x1222,	// (0x00039e73) text_title_cp2

0x1235,	// (0x00039e86) bg_popup_call_pane_cp_ParamLimits

0x1235,	// (0x00039e86) bg_popup_call_pane_cp

0x1243,	// (0x00039e94) call_thumbnail_pane

0x124b,	// (0x00039e9c) popup_call_audio_in_window_g1_ParamLimits

0x124b,	// (0x00039e9c) popup_call_audio_in_window_g1

0x1257,	// (0x00039ea8) popup_call_audio_in_window_g2_ParamLimits

0x1257,	// (0x00039ea8) popup_call_audio_in_window_g2

0x1263,	// (0x00039eb4) popup_call_audio_in_window_g3_ParamLimits

0x1263,	// (0x00039eb4) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00047cdf) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00047cdf) popup_call_audio_in_window_g

0x126f,	// (0x00039ec0) popup_call_audio_in_window_t1_ParamLimits

0x126f,	// (0x00039ec0) popup_call_audio_in_window_t1

0x128a,	// (0x00039edb) popup_call_audio_in_window_t2_ParamLimits

0x128a,	// (0x00039edb) popup_call_audio_in_window_t2

0x12a5,	// (0x00039ef6) popup_call_audio_in_window_t3_ParamLimits

0x12a5,	// (0x00039ef6) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00047ce6) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00047ce6) popup_call_audio_in_window_t

0x1235,	// (0x00039e86) bg_popup_call_pane_cp01_ParamLimits

0x1235,	// (0x00039e86) bg_popup_call_pane_cp01

0x1243,	// (0x00039e94) call_thumbnail_pane_cp02

0x12b8,	// (0x00039f09) call_type_pane_cp022

0x12c0,	// (0x00039f11) popup_call_audio_out_window_g1_ParamLimits

0x12c0,	// (0x00039f11) popup_call_audio_out_window_g1

0x12d2,	// (0x00039f23) popup_call_audio_out_window_g2_ParamLimits

0x12d2,	// (0x00039f23) popup_call_audio_out_window_g2

0x12de,	// (0x00039f2f) popup_call_audio_out_window_g3_ParamLimits

0x12de,	// (0x00039f2f) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00047ced) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00047ced) popup_call_audio_out_window_g

0x12f0,	// (0x00039f41) popup_call_audio_out_window_t1_ParamLimits

0x12f0,	// (0x00039f41) popup_call_audio_out_window_t1

0x1308,	// (0x00039f59) popup_call_audio_out_window_t2_ParamLimits

0x1308,	// (0x00039f59) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00047cf4) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00047cf4) popup_call_audio_out_window_t

0x131d,	// (0x00039f6e) bg_popup_call_pane_ParamLimits

0x131d,	// (0x00039f6e) bg_popup_call_pane

0x3aaf,	// (0x0003c700) call_thumbnail_pane_cp_ParamLimits

0x3aaf,	// (0x0003c700) call_thumbnail_pane_cp

0x13a1,	// (0x00039ff2) call_type_pane_cp01_ParamLimits

0x13a1,	// (0x00039ff2) call_type_pane_cp01

0x13e5,	// (0x0003a036) popup_call_audio_first_window_g1_ParamLimits

0x13e5,	// (0x0003a036) popup_call_audio_first_window_g1

0x1431,	// (0x0003a082) popup_call_audio_first_window_g2_ParamLimits

0x1431,	// (0x0003a082) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00047cf9) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00047cf9) popup_call_audio_first_window_g

0x1475,	// (0x0003a0c6) popup_call_audio_first_window_t1_ParamLimits

0x1475,	// (0x0003a0c6) popup_call_audio_first_window_t1

0x1521,	// (0x0003a172) popup_call_audio_first_window_t4_ParamLimits

0x1521,	// (0x0003a172) popup_call_audio_first_window_t4

0x15ad,	// (0x0003a1fe) popup_call_audio_first_window_t5_ParamLimits

0x15ad,	// (0x0003a1fe) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00047cfe) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00047cfe) popup_call_audio_first_window_t

0x15dc,	// (0x0003a22d) bg_popup_call_pane_cp02

0x15e6,	// (0x0003a237) call_type_pane_cp023

0x15ee,	// (0x0003a23f) popup_call_audio_wait_window_g1

0x15f6,	// (0x0003a247) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00047d05) popup_call_audio_wait_window_g

0x15fe,	// (0x0003a24f) popup_call_audio_wait_window_t3

0x160c,	// (0x0003a25d) bg_popup_call_pane_cp03_ParamLimits

0x160c,	// (0x0003a25d) bg_popup_call_pane_cp03

0x166c,	// (0x0003a2bd) call_thumbnail_pane_cp011_ParamLimits

0x166c,	// (0x0003a2bd) call_thumbnail_pane_cp011

0x1678,	// (0x0003a2c9) call_type_pane_cp034_ParamLimits

0x1678,	// (0x0003a2c9) call_type_pane_cp034

0x16b4,	// (0x0003a305) popup_call_audio_second_window_g1_ParamLimits

0x16b4,	// (0x0003a305) popup_call_audio_second_window_g1

0x16f0,	// (0x0003a341) popup_call_audio_second_window_g2_ParamLimits

0x16f0,	// (0x0003a341) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00047d0a) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00047d0a) popup_call_audio_second_window_g

0x172c,	// (0x0003a37d) popup_call_audio_second_window_t1_ParamLimits

0x172c,	// (0x0003a37d) popup_call_audio_second_window_t1

0x17ad,	// (0x0003a3fe) popup_call_audio_second_window_t2_ParamLimits

0x17ad,	// (0x0003a3fe) popup_call_audio_second_window_t2

0x17e3,	// (0x0003a434) popup_call_audio_second_window_t3_ParamLimits

0x17e3,	// (0x0003a434) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00047d0f) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00047d0f) popup_call_audio_second_window_t

0x15dc,	// (0x0003a22d) bg_popup_call_pane_cp04

0x1819,	// (0x0003a46a) list_conf_pane

0x1821,	// (0x0003a472) popup_call_audio_conf_window_t1

0x182f,	// (0x0003a480) call_thumbnail_pane_g1

0x1837,	// (0x0003a488) bg_pinb_pane_ParamLimits

0x1837,	// (0x0003a488) bg_pinb_pane

0x1845,	// (0x0003a496) find_pinb_pane

0x1837,	// (0x0003a488) listscroll_pinb_pane_ParamLimits

0x1837,	// (0x0003a488) listscroll_pinb_pane

0x184f,	// (0x0003a4a0) pinb_bg_pane_g1

0x184f,	// (0x0003a4a0) pinb_bg_pane_g2

0x184f,	// (0x0003a4a0) pinb_bg_pane_g3

0x184f,	// (0x0003a4a0) pinb_bg_pane_g4

0x184f,	// (0x0003a4a0) pinb_bg_pane_g5

0x184f,	// (0x0003a4a0) pinb_bg_pane_g6

0x184f,	// (0x0003a4a0) pinb_bg_pane_g7

0x184f,	// (0x0003a4a0) pinb_bg_pane_g8

0x184f,	// (0x0003a4a0) pinb_bg_pane_g9

0x184f,	// (0x0003a4a0) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00047d16) pinb_bg_pane_g

0x3ade,	// (0x0003c72f) grid_pinb_pane

0x11c1,	// (0x00039e12) list_pinb_pane

0x1859,	// (0x0003a4aa) scroll_pane_cp01_ParamLimits

0x1859,	// (0x0003a4aa) scroll_pane_cp01

0x1866,	// (0x0003a4b7) find_pinb_pane_g1_ParamLimits

0x1866,	// (0x0003a4b7) find_pinb_pane_g1

0x187e,	// (0x0003a4cf) find_pinb_pane_t1

0x1890,	// (0x0003a4e1) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00047d30) find_pinb_pane_t

0x18a5,	// (0x0003a4f6) input_focus_pane_cp01_ParamLimits

0x18a5,	// (0x0003a4f6) input_focus_pane_cp01

0x3ae8,	// (0x0003c739) cell_pinb_pane_ParamLimits

0x3ae8,	// (0x0003c739) cell_pinb_pane

0x18b1,	// (0x0003a502) cell_pinb_pane_g1_ParamLimits

0x18b1,	// (0x0003a502) cell_pinb_pane_g1

0x18bf,	// (0x0003a510) cell_pinb_pane_g2_ParamLimits

0x18bf,	// (0x0003a510) cell_pinb_pane_g2

0x18bf,	// (0x0003a510) cell_pinb_pane_g3_ParamLimits

0x18bf,	// (0x0003a510) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00047d35) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00047d35) cell_pinb_pane_g

0x15dc,	// (0x0003a22d) grid_highlight_pane_cp01

0x11c1,	// (0x00039e12) list_pinb_item_pane_ParamLimits

0x11c1,	// (0x00039e12) list_pinb_item_pane

0x11c1,	// (0x00039e12) list_highlight_pane_cp02

0x18cd,	// (0x0003a51e) list_pinb_item_pane_g1_ParamLimits

0x18cd,	// (0x0003a51e) list_pinb_item_pane_g1

0x18bf,	// (0x0003a510) list_pinb_item_pane_g2_ParamLimits

0x18bf,	// (0x0003a510) list_pinb_item_pane_g2

0x18b1,	// (0x0003a502) list_pinb_item_pane_g3_ParamLimits

0x18b1,	// (0x0003a502) list_pinb_item_pane_g3

0x18bf,	// (0x0003a510) list_pinb_item_pane_g4_ParamLimits

0x18bf,	// (0x0003a510) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00047d3c) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00047d3c) list_pinb_item_pane_g

0x18db,	// (0x0003a52c) list_pinb_item_pane_t1_ParamLimits

0x18db,	// (0x0003a52c) list_pinb_item_pane_t1

0x3b0e,	// (0x0003c75f) calc_display_pane

0x3b2a,	// (0x0003c77b) calc_paper_pane

0x3b4b,	// (0x0003c79c) grid_calc_pane

0x15dc,	// (0x0003a22d) bg_list_pane_cp01

0x3b67,	// (0x0003c7b8) clock_g1

0x3b6f,	// (0x0003c7c0) clock_g2

0x0001,

0xf0f4,	// (0x00047d45) clock_g

0x3b77,	// (0x0003c7c8) clock_t1_ParamLimits

0x3b77,	// (0x0003c7c8) clock_t1

0x3b8c,	// (0x0003c7dd) clock_t2_ParamLimits

0x3b8c,	// (0x0003c7dd) clock_t2

0x3b9e,	// (0x0003c7ef) clock_t3_ParamLimits

0x3b9e,	// (0x0003c7ef) clock_t3

0x3bb0,	// (0x0003c801) clock_t4_ParamLimits

0x3bb0,	// (0x0003c801) clock_t4

0x3bc2,	// (0x0003c813) clock_t5_ParamLimits

0x3bc2,	// (0x0003c813) clock_t5

0x3bd7,	// (0x0003c828) clock_t6_ParamLimits

0x3bd7,	// (0x0003c828) clock_t6

0x3be9,	// (0x0003c83a) clock_t7_ParamLimits

0x3be9,	// (0x0003c83a) clock_t7

0x3bfb,	// (0x0003c84c) clock_t8_ParamLimits

0x3bfb,	// (0x0003c84c) clock_t8

0x3c0d,	// (0x0003c85e) clock_t9_ParamLimits

0x3c0d,	// (0x0003c85e) clock_t9

0x0008,

0xf0f9,	// (0x00047d4a) clock_t_ParamLimits

0xf0f9,	// (0x00047d4a) clock_t

0x18ef,	// (0x0003a540) popup_clock_analogue_window_cp02

0x18ef,	// (0x0003a540) popup_clock_digital_window_cp01

0x15dc,	// (0x0003a22d) listscroll_help_pane

0x15dc,	// (0x0003a22d) phob_pre_status_pane

0x18f7,	// (0x0003a548) grid_qdial_pane

0x1837,	// (0x0003a488) listscroll_mce_pane

0x1837,	// (0x0003a488) bg_notes_pane

0x1901,	// (0x0003a552) list_notes_pane

0x3c1f,	// (0x0003c870) scroll_pane_cp06

0x190f,	// (0x0003a560) bg_calc_paper_pane

0xb124,	// (0x00043d75) list_calc_pane

0x1927,	// (0x0003a578) bg_calc_display_pane

0xb13e,	// (0x00043d8f) calc_display_pane_t1

0xb153,	// (0x00043da4) calc_display_pane_t2

0xb168,	// (0x00043db9) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00047d5d) calc_display_pane_t

0x3c31,	// (0x0003c882) cell_calc_pane_ParamLimits

0x3c31,	// (0x0003c882) cell_calc_pane

0x1933,	// (0x0003a584) bg_calc_paper_pane_g1

0x193f,	// (0x0003a590) bg_calc_paper_pane_g2

0x194b,	// (0x0003a59c) bg_calc_paper_pane_g3

0x1957,	// (0x0003a5a8) bg_calc_paper_pane_g4

0x1963,	// (0x0003a5b4) bg_calc_paper_pane_g5

0x3c64,	// (0x0003c8b5) bg_calc_paper_pane_g6

0x3c73,	// (0x0003c8c4) bg_calc_paper_pane_g7

0x3c82,	// (0x0003c8d3) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00047d64) bg_calc_paper_pane_g

0x3c91,	// (0x0003c8e2) calc_bg_paper_pane_g9

0x3ca0,	// (0x0003c8f1) list_calc_item_pane_ParamLimits

0x3ca0,	// (0x0003c8f1) list_calc_item_pane

0x196f,	// (0x0003a5c0) list_calc_item_pane_g1

0xb17a,	// (0x00043dcb) list_calc_item_pane_t1_ParamLimits

0xb17a,	// (0x00043dcb) list_calc_item_pane_t1

0x3cb4,	// (0x0003c905) list_calc_item_pane_t2_ParamLimits

0x3cb4,	// (0x0003c905) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00047d75) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00047d75) list_calc_item_pane_t

0x184f,	// (0x0003a4a0) cell_calc_pane_g1

0x197c,	// (0x0003a5cd) grid_highlight_pane_cp02

0x199e,	// (0x0003a5ef) bg_calc_display_pane_g1

0xb18c,	// (0x00043ddd) bg_calc_display_pane_g2

0x19a7,	// (0x0003a5f8) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00047d7f) bg_calc_display_pane_g

0x3ce2,	// (0x0003c933) cell_qdial_pane_ParamLimits

0x3ce2,	// (0x0003c933) cell_qdial_pane

0x3cf4,	// (0x0003c945) cell_qdial_pane_g1_ParamLimits

0x3cf4,	// (0x0003c945) cell_qdial_pane_g1

0x3d0a,	// (0x0003c95b) cell_qdial_pane_g2_ParamLimits

0x3d0a,	// (0x0003c95b) cell_qdial_pane_g2

0x19b0,	// (0x0003a601) cell_qdial_pane_g3_ParamLimits

0x19b0,	// (0x0003a601) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00047d86) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00047d86) cell_qdial_pane_g

0x3d31,	// (0x0003c982) cell_qdial_pane_t1_ParamLimits

0x3d31,	// (0x0003c982) cell_qdial_pane_t1

0x3d49,	// (0x0003c99a) cell_qdial_pane_t2_ParamLimits

0x3d49,	// (0x0003c99a) cell_qdial_pane_t2

0x3d5c,	// (0x0003c9ad) cell_qdial_pane_t3_ParamLimits

0x3d5c,	// (0x0003c9ad) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00047d8f) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00047d8f) cell_qdial_pane_t

0x15dc,	// (0x0003a22d) grid_highlight_pane_cp04

0x19bc,	// (0x0003a60d) thumbnail_qdial_pane_ParamLimits

0x19bc,	// (0x0003a60d) thumbnail_qdial_pane

0x1a18,	// (0x0003a669) list_help_pane

0x1a22,	// (0x0003a673) scroll_pane_cp02

0x3d6f,	// (0x0003c9c0) help_list_pane_t1_ParamLimits

0x3d6f,	// (0x0003c9c0) help_list_pane_t1

0xb196,	// (0x00043de7) bg_notes_pane_g2

0xb19e,	// (0x00043def) bg_notes_pane_g3

0xb1a6,	// (0x00043df7) notes_bg_pane_g1

0xb1ae,	// (0x00043dff) notes_bg_pane_g4

0xb1b6,	// (0x00043e07) notes_bg_pane_g5

0xb1be,	// (0x00043e0f) notes_bg_pane_g6

0xb1c6,	// (0x00043e17) notes_bg_pane_g7

0xb1ce,	// (0x00043e1f) notes_bg_pane_g8

0xb1d6,	// (0x00043e27) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00047dad) notes_bg_pane_g

0x3d8c,	// (0x0003c9dd) list_notes_text_pane_ParamLimits

0x3d8c,	// (0x0003c9dd) list_notes_text_pane

0x1a2b,	// (0x0003a67c) list_notes_text_pane_g1

0x2f94,	// (0x0003bbe5) list_notes_text_pane_t1

0x3daf,	// (0x0003ca00) listscroll_cale_week_pane

0x3dd9,	// (0x0003ca2a) bg_cale_heading_pane

0x1a4e,	// (0x0003a69f) bg_cale_pane_cp01

0x3df1,	// (0x0003ca42) cale_week_corner_pane

0x3e10,	// (0x0003ca61) cale_week_day_heading_pane

0x3e2d,	// (0x0003ca7e) cale_week_scroll_pane_g1

0x3e40,	// (0x0003ca91) cale_week_scroll_pane_g2

0x3e58,	// (0x0003caa9) cale_week_scroll_pane_g3

0x3e70,	// (0x0003cac1) cale_week_scroll_pane_g4

0x3e88,	// (0x0003cad9) cale_week_scroll_pane_g5

0x3ea0,	// (0x0003caf1) cale_week_scroll_pane_g6

0x3eb8,	// (0x0003cb09) cale_week_scroll_pane_g7

0x3ed0,	// (0x0003cb21) cale_week_scroll_pane_g8

0x3eec,	// (0x0003cb3d) cale_week_scroll_pane_g9

0x3f04,	// (0x0003cb55) cale_week_scroll_pane_g10

0x3f1c,	// (0x0003cb6d) cale_week_scroll_pane_g11

0x3f34,	// (0x0003cb85) cale_week_scroll_pane_g12

0x3f4c,	// (0x0003cb9d) cale_week_scroll_pane_g13

0x3f64,	// (0x0003cbb5) cale_week_scroll_pane_g14

0x3f7c,	// (0x0003cbcd) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00047dbc) cale_week_scroll_pane_g

0x3fb0,	// (0x0003cc01) cale_week_time_pane

0x3fcc,	// (0x0003cc1d) grid_cale_week_pane

0x1a7d,	// (0x0003a6ce) scroll_pane_cp08

0x3fea,	// (0x0003cc3b) cell_cale_week_pane_ParamLimits

0x3fea,	// (0x0003cc3b) cell_cale_week_pane

0x4060,	// (0x0003ccb1) cale_week_day_heading_pane_t1

0x408a,	// (0x0003ccdb) cale_week_day_heading_pane_t2

0x40b9,	// (0x0003cd0a) cale_week_day_heading_pane_t3

0x40e8,	// (0x0003cd39) cale_week_day_heading_pane_t4

0x4117,	// (0x0003cd68) cale_week_day_heading_pane_t5

0x4146,	// (0x0003cd97) cale_week_day_heading_pane_t6

0x4175,	// (0x0003cdc6) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00047ddd) cale_week_day_heading_pane_t

0x1a9a,	// (0x0003a6eb) bg_cale_side_pane

0x419f,	// (0x0003cdf0) cale_week_time_pane_t1

0x41d9,	// (0x0003ce2a) cale_week_time_pane_t2

0x4213,	// (0x0003ce64) cale_week_time_pane_t3

0x424d,	// (0x0003ce9e) cale_week_time_pane_t4

0x4287,	// (0x0003ced8) cale_week_time_pane_t5

0x42c1,	// (0x0003cf12) cale_week_time_pane_t6

0x42fb,	// (0x0003cf4c) cale_week_time_pane_t7

0x4335,	// (0x0003cf86) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00047dec) cale_week_time_pane_t

0x436f,	// (0x0003cfc0) cell_cale_week_pane_g2

0x438e,	// (0x0003cfdf) cell_cale_week_pane_g3_ParamLimits

0x438e,	// (0x0003cfdf) cell_cale_week_pane_g3

0x1aa8,	// (0x0003a6f9) grid_highlight_pane_cp07

0x1ab0,	// (0x0003a701) listscroll_gms_pane

0x1aba,	// (0x0003a70b) grid_gms_pane

0x1ac3,	// (0x0003a714) listscroll_gms_pane_g1

0x1acb,	// (0x0003a71c) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00047dfd) listscroll_gms_pane_g

0x43a6,	// (0x0003cff7) scroll_pane_cp010

0x43b1,	// (0x0003d002) cell_gms_pane_ParamLimits

0x43b1,	// (0x0003d002) cell_gms_pane

0x43c1,	// (0x0003d012) cell_gms_pane_g1

0x1ad3,	// (0x0003a724) cell_gms_pane_g2

0x1a2b,	// (0x0003a67c) cell_gms_pane_g3

0x1adb,	// (0x0003a72c) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00047e02) cell_gms_pane_g

0x1ae4,	// (0x0003a735) grid_highlight_pane_cp09

0x67ab,	// (0x0003f3fc) phob_pre_status_pane_g1

0x67b3,	// (0x0003f404) phob_pre_status_pane_g2

0x67bb,	// (0x0003f40c) phob_pre_status_pane_g3

0x67c3,	// (0x0003f414) phob_pre_status_pane_g4

0x0004,

0xf59f,	// (0x000481f0) phob_pre_status_pane_g

0x67d3,	// (0x0003f424) phob_pre_status_pane_t1

0x67e1,	// (0x0003f432) phob_pre_status_pane_t2

0x67ef,	// (0x0003f440) phob_pre_status_pane_t3

0x0002,

0xf5aa,	// (0x000481fb) phob_pre_status_pane_t

0x1aec,	// (0x0003a73d) bg_list_pane_cp05

0x43d1,	// (0x0003d022) grid_vorec_pane

0x1af4,	// (0x0003a745) vorec_t1

0x1b02,	// (0x0003a753) vorec_t2

0x1b10,	// (0x0003a761) vorec_t3

0x43d9,	// (0x0003d02a) vorec_t4

0xaee0,	// (0x00043b31) vorec_t5

0xaeee,	// (0x00043b3f) vorec_t6

0x0004,

0xf1ba,	// (0x00047e0b) vorec_t

0xaefc,	// (0x00043b4d) wait_bar_pane_cp01

0x43e7,	// (0x0003d038) cell_vorec_pane_ParamLimits

0x43e7,	// (0x0003d038) cell_vorec_pane

0xb1de,	// (0x00043e2f) cell_vorec_pane_g1

0x15dc,	// (0x0003a22d) grid_highlight_pane_cp05

0x20c4,	// (0x0003ad15) cams_zoom_pane

0x43fa,	// (0x0003d04b) image_vga_pane

0x18b1,	// (0x0003a502) main_camera_pane_g1

0x18b1,	// (0x0003a502) main_camera_pane_g2

0x18b1,	// (0x0003a502) main_camera_pane_g3

0x18b1,	// (0x0003a502) main_camera_pane_g4

0x18b1,	// (0x0003a502) main_camera_pane_g5

0x18b1,	// (0x0003a502) main_camera_pane_g6

0x18b1,	// (0x0003a502) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00047e16) main_camera_pane_g

0x20b0,	// (0x0003ad01) main_camera_pane_t1

0x20b0,	// (0x0003ad01) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00047e27) main_camera_pane_t

0x4429,	// (0x0003d07a) cams_zoom_pane_cp_ParamLimits

0x4429,	// (0x0003d07a) cams_zoom_pane_cp

0x4451,	// (0x0003d0a2) image_cif_pane_ParamLimits

0x4451,	// (0x0003d0a2) image_cif_pane

0x4482,	// (0x0003d0d3) image_subqcif_pane

0x448a,	// (0x0003d0db) main_video_pane_g1_ParamLimits

0x448a,	// (0x0003d0db) main_video_pane_g1

0x44ae,	// (0x0003d0ff) main_video_pane_g2_ParamLimits

0x44ae,	// (0x0003d0ff) main_video_pane_g2

0x44e2,	// (0x0003d133) main_video_pane_g3_ParamLimits

0x44e2,	// (0x0003d133) main_video_pane_g3

0x4510,	// (0x0003d161) main_video_pane_g4_ParamLimits

0x4510,	// (0x0003d161) main_video_pane_g4

0x453e,	// (0x0003d18f) main_video_pane_g5_ParamLimits

0x453e,	// (0x0003d18f) main_video_pane_g5

0x1b2c,	// (0x0003a77d) main_video_pane_g6_ParamLimits

0x1b2c,	// (0x0003a77d) main_video_pane_g6

0x0006,

0xf1db,	// (0x00047e2c) main_video_pane_g_ParamLimits

0xf1db,	// (0x00047e2c) main_video_pane_g

0x4565,	// (0x0003d1b6) main_video_pane_t1_ParamLimits

0x4565,	// (0x0003d1b6) main_video_pane_t1

0x1b46,	// (0x0003a797) cams_zoom_pane_g1

0x1b46,	// (0x0003a797) cams_zoom_pane_g2

0x1b46,	// (0x0003a797) cams_zoom_pane_g3

0x1b46,	// (0x0003a797) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00047e3b) cams_zoom_pane_g

0x45c2,	// (0x0003d213) grid_cams_pane

0x45d7,	// (0x0003d228) linegrid_cams_pane

0x45e8,	// (0x0003d239) cell_cams_pane_ParamLimits

0x45e8,	// (0x0003d239) cell_cams_pane

0x1b50,	// (0x0003a7a1) cams_burst_image_pane

0x1b58,	// (0x0003a7a9) cell_cams_pane_g1

0x15dc,	// (0x0003a22d) grid_highlight_pane_cp03

0x184f,	// (0x0003a4a0) mp_bg_pane_g1

0x15dc,	// (0x0003a22d) bg_list_pane_cp03

0xc3b3,	// (0x00045004) bg_mp_pane

0xc3bb,	// (0x0004500c) grid_mp_pane

0xc3c3,	// (0x00045014) media_player_g1

0xc3cb,	// (0x0004501c) media_player_t1

0xc3d9,	// (0x0004502a) media_player_t2

0xc3e7,	// (0x00045038) media_player_t3

0xc3f5,	// (0x00045046) media_player_t4

0xc403,	// (0x00045054) media_player_t5

0xc411,	// (0x00045062) media_player_t6

0xc41f,	// (0x00045070) media_player_t7

0x0006,

0xf589,	// (0x000481da) media_player_t

0xc42d,	// (0x0004507e) wait_bar_pane_cp02

0xf56e,	// (0x000481bf) main_usb_pane_t

0x67a2,	// (0x0003f3f3) cell_mp_pane

0x184f,	// (0x0003a4a0) cell_mp_pane_g1

0x15dc,	// (0x0003a22d) grid_highlight_pane_cp06

0x1b60,	// (0x0003a7b1) grid_skin_colour_pane

0x1b68,	// (0x0003a7b9) list_highlight_pane_cp03

0x4606,	// (0x0003d257) skin_g1

0x1b70,	// (0x0003a7c1) skin_t1

0x1b7f,	// (0x0003a7d0) skin_t2

0x0001,

0xf218,	// (0x00047e69) skin_t

0x460e,	// (0x0003d25f) cell_skin_colour_pane_ParamLimits

0x460e,	// (0x0003d25f) cell_skin_colour_pane

0x1b8d,	// (0x0003a7de) cell_skin_colour_pane_g1

0x4677,	// (0x0003d2c8) call_video_g1_ParamLimits

0x4677,	// (0x0003d2c8) call_video_g1

0x468d,	// (0x0003d2de) call_video_g2_ParamLimits

0x468d,	// (0x0003d2de) call_video_g2

0x0001,

0xf21d,	// (0x00047e6e) call_video_g_ParamLimits

0xf21d,	// (0x00047e6e) call_video_g

0x46d5,	// (0x0003d326) call_video_uplink_pane_cp1_ParamLimits

0x46d5,	// (0x0003d326) call_video_uplink_pane_cp1

0x1b9f,	// (0x0003a7f0) call_video_uplink_pane_cp2

0x476a,	// (0x0003d3bb) video_down_crop_pane_ParamLimits

0x476a,	// (0x0003d3bb) video_down_crop_pane

0x482d,	// (0x0003d47e) video_down_pane_ParamLimits

0x482d,	// (0x0003d47e) video_down_pane

0x1ba7,	// (0x0003a7f8) video_down_subqcif_pane_ParamLimits

0x1ba7,	// (0x0003a7f8) video_down_subqcif_pane

0x1bbf,	// (0x0003a810) video_down_subqcif_pane_cp_ParamLimits

0x1bbf,	// (0x0003a810) video_down_subqcif_pane_cp

0x1be3,	// (0x0003a834) im_reading_pane_ParamLimits

0x1be3,	// (0x0003a834) im_reading_pane

0x48ea,	// (0x0003d53b) im_writing_pane_ParamLimits

0x48ea,	// (0x0003d53b) im_writing_pane

0x4900,	// (0x0003d551) im_reading_pane_t1

0x1bfd,	// (0x0003a84e) list_im_pane

0x1c0e,	// (0x0003a85f) scroll_pane_cp07

0x4936,	// (0x0003d587) im_writing_pane_t1_ParamLimits

0x4936,	// (0x0003d587) im_writing_pane_t1

0x1c27,	// (0x0003a878) im_writing_pane_t2_ParamLimits

0x1c27,	// (0x0003a878) im_writing_pane_t2

0x0001,

0xf227,	// (0x00047e78) im_writing_pane_t_ParamLimits

0xf227,	// (0x00047e78) im_writing_pane_t

0x15dc,	// (0x0003a22d) input_focus_pane_cp04

0x15dc,	// (0x0003a22d) input_focus_pane_cp05

0x494b,	// (0x0003d59c) list_im_single_pane_ParamLimits

0x494b,	// (0x0003d59c) list_im_single_pane

0x1c44,	// (0x0003a895) list_single_im_pane_t1

0x6768,	// (0x0003f3b9) blid_accuracy_pane

0x6770,	// (0x0003f3c1) blid_compass_pane

0x6778,	// (0x0003f3c9) main_location_t1

0x6786,	// (0x0003f3d7) main_location_t2

0x6794,	// (0x0003f3e5) main_location_t3

0x0002,

0xf598,	// (0x000481e9) main_location_t

0x15dc,	// (0x0003a22d) aid_levels_location

0x184f,	// (0x0003a4a0) blid_accuracy_pane_g1

0x184f,	// (0x0003a4a0) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00047ecc) blid_accuracy_pane_g

0x1c7e,	// (0x0003a8cf) wml_content_pane

0x1cbc,	// (0x0003a90d) wml_button_pane_ParamLimits

0x1cbc,	// (0x0003a90d) wml_button_pane

0x4961,	// (0x0003d5b2) wml_list_single_large_pane_ParamLimits

0x4961,	// (0x0003d5b2) wml_list_single_large_pane

0x4975,	// (0x0003d5c6) wml_list_single_medium_pane_ParamLimits

0x4975,	// (0x0003d5c6) wml_list_single_medium_pane

0x498a,	// (0x0003d5db) wml_list_single_small_pane_ParamLimits

0x498a,	// (0x0003d5db) wml_list_single_small_pane

0x1cd0,	// (0x0003a921) wml_selection_box_pane_ParamLimits

0x1cd0,	// (0x0003a921) wml_selection_box_pane

0x1ce3,	// (0x0003a934) wml_list_single_pane_t1

0x1cf2,	// (0x0003a943) wml_list_single_medium_pane_t1

0x1d01,	// (0x0003a952) wml_list_single_large_pane_t1

0x1d10,	// (0x0003a961) input_focus_pane_cp02_ParamLimits

0x1d10,	// (0x0003a961) input_focus_pane_cp02

0x1d23,	// (0x0003a974) wml_selection_box_pane_g1

0x1d2c,	// (0x0003a97d) wml_selection_box_pane_t1_ParamLimits

0x1d2c,	// (0x0003a97d) wml_selection_box_pane_t1

0x1837,	// (0x0003a488) bg_wml_button_pane_ParamLimits

0x1837,	// (0x0003a488) bg_wml_button_pane

0x1d44,	// (0x0003a995) wml_button_pane_g1

0x1d4c,	// (0x0003a99d) wml_button_pane_t1

0x1d44,	// (0x0003a995) wml_button_bg_pane_g1

0x1d5c,	// (0x0003a9ad) wml_button_bg_pane_g2

0x1d64,	// (0x0003a9b5) wml_button_bg_pane_g3

0x1d6c,	// (0x0003a9bd) wml_button_bg_pane_g4

0x1d74,	// (0x0003a9c5) wml_button_bg_pane_g5

0x1d7c,	// (0x0003a9cd) wml_button_bg_pane_g6

0x1d84,	// (0x0003a9d5) wml_button_bg_pane_g7

0x1d8c,	// (0x0003a9dd) wml_button_bg_pane_g8

0x1d94,	// (0x0003a9e5) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00047e7d) wml_button_bg_pane_g

0x49a1,	// (0x0003d5f2) bg_list_pane_cp02

0x1d9c,	// (0x0003a9ed) mce_header_pane_ParamLimits

0x1d9c,	// (0x0003a9ed) mce_header_pane

0x1db0,	// (0x0003aa01) mce_icon_pane

0x1db0,	// (0x0003aa01) mce_image_pane

0x1db9,	// (0x0003aa0a) mce_text_pane_ParamLimits

0x1db9,	// (0x0003aa0a) mce_text_pane

0x49aa,	// (0x0003d5fb) scroll_pane_cp03

0x49aa,	// (0x0003d5fb) scroll_pane_cp04

0x1dcd,	// (0x0003aa1e) scroll_pane_cp05_ParamLimits

0x1dcd,	// (0x0003aa1e) scroll_pane_cp05

0x49b4,	// (0x0003d605) mce_header_field_pane_ParamLimits

0x49b4,	// (0x0003d605) mce_header_field_pane

0x49cb,	// (0x0003d61c) mce_header_field_pane_2_ParamLimits

0x49cb,	// (0x0003d61c) mce_header_field_pane_2

0x49e1,	// (0x0003d632) mce_header_field_pane_3

0x49e9,	// (0x0003d63a) list_single_mce_message_pane_ParamLimits

0x49e9,	// (0x0003d63a) list_single_mce_message_pane

0x49fe,	// (0x0003d64f) list_single_mce_smart_pane_ParamLimits

0x49fe,	// (0x0003d64f) list_single_mce_smart_pane

0x1dd9,	// (0x0003aa2a) input_focus_pane_cp03

0x1de2,	// (0x0003aa33) list_header_data_pane

0x4a1e,	// (0x0003d66f) mce_header_field_pane_t1

0x4a2c,	// (0x0003d67d) list_single_mce_header_pane_ParamLimits

0x4a2c,	// (0x0003d67d) list_single_mce_header_pane

0x1dea,	// (0x0003aa3b) list_single_mce_header_pane_t1

0x1df9,	// (0x0003aa4a) list_single_mce_message_pane_g1

0x1e02,	// (0x0003aa53) list_single_mce_message_pane_t1

0x4a66,	// (0x0003d6b7) bg_cale_heading_pane_cp01_ParamLimits

0x4a66,	// (0x0003d6b7) bg_cale_heading_pane_cp01

0x1e11,	// (0x0003aa62) bg_cale_pane_cp02_ParamLimits

0x1e11,	// (0x0003aa62) bg_cale_pane_cp02

0x4a95,	// (0x0003d6e6) cale_month_corner_pane

0x4ab4,	// (0x0003d705) cale_month_day_heading_pane_ParamLimits

0x4ab4,	// (0x0003d705) cale_month_day_heading_pane

0x4aeb,	// (0x0003d73c) cale_month_pane_g1_ParamLimits

0x4aeb,	// (0x0003d73c) cale_month_pane_g1

0x4b0f,	// (0x0003d760) cale_month_pane_g2_ParamLimits

0x4b0f,	// (0x0003d760) cale_month_pane_g2

0x4b37,	// (0x0003d788) cale_month_pane_g3_ParamLimits

0x4b37,	// (0x0003d788) cale_month_pane_g3

0x4b73,	// (0x0003d7c4) cale_month_pane_g4_ParamLimits

0x4b73,	// (0x0003d7c4) cale_month_pane_g4

0x4baf,	// (0x0003d800) cale_month_pane_g5_ParamLimits

0x4baf,	// (0x0003d800) cale_month_pane_g5

0x4beb,	// (0x0003d83c) cale_month_pane_g6_ParamLimits

0x4beb,	// (0x0003d83c) cale_month_pane_g6

0x4c27,	// (0x0003d878) cale_month_pane_g7_ParamLimits

0x4c27,	// (0x0003d878) cale_month_pane_g7

0x4c63,	// (0x0003d8b4) cale_month_pane_g8_ParamLimits

0x4c63,	// (0x0003d8b4) cale_month_pane_g8

0x4ca7,	// (0x0003d8f8) cale_month_pane_g9_ParamLimits

0x4ca7,	// (0x0003d8f8) cale_month_pane_g9

0x4ce9,	// (0x0003d93a) cale_month_pane_g10_ParamLimits

0x4ce9,	// (0x0003d93a) cale_month_pane_g10

0x4d2b,	// (0x0003d97c) cale_month_pane_g11_ParamLimits

0x4d2b,	// (0x0003d97c) cale_month_pane_g11

0x4d6d,	// (0x0003d9be) cale_month_pane_g12_ParamLimits

0x4d6d,	// (0x0003d9be) cale_month_pane_g12

0x4daf,	// (0x0003da00) cale_month_pane_g13_ParamLimits

0x4daf,	// (0x0003da00) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00047e90) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00047e90) cale_month_pane_g

0x4df1,	// (0x0003da42) cale_month_week_pane

0x4e0d,	// (0x0003da5e) grid_cale_month_pane_ParamLimits

0x4e0d,	// (0x0003da5e) grid_cale_month_pane

0x4e3b,	// (0x0003da8c) cale_month_day_heading_pane_t1

0x4ec1,	// (0x0003db12) cale_month_day_heading_pane_t2

0x4f52,	// (0x0003dba3) cale_month_day_heading_pane_t3

0x4fe3,	// (0x0003dc34) cale_month_day_heading_pane_t4

0x5074,	// (0x0003dcc5) cale_month_day_heading_pane_t5

0x5105,	// (0x0003dd56) cale_month_day_heading_pane_t6

0x5196,	// (0x0003dde7) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00047eab) cale_month_day_heading_pane_t

0x1a9a,	// (0x0003a6eb) bg_cale_side_pane_cp01

0x522b,	// (0x0003de7c) cale_month_week_pane_t1

0x5244,	// (0x0003de95) cale_month_week_pane_t2

0x525d,	// (0x0003deae) cale_month_week_pane_t3

0x5276,	// (0x0003dec7) cale_month_week_pane_t4

0x528f,	// (0x0003dee0) cale_month_week_pane_t5

0x52a8,	// (0x0003def9) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00047eba) cale_month_week_pane_t

0x52c1,	// (0x0003df12) cell_cale_month_pane_ParamLimits

0x52c1,	// (0x0003df12) cell_cale_month_pane

0xb226,	// (0x00043e77) cell_cale_month_pane_g1

0x53b3,	// (0x0003e004) cell_cale_month_pane_t1_ParamLimits

0x53b3,	// (0x0003e004) cell_cale_month_pane_t1

0x1aa8,	// (0x0003a6f9) grid_highlight_pane_cp08

0x184f,	// (0x0003a4a0) main_smil_g1

0x53d3,	// (0x0003e024) smil_status_pane

0x1e50,	// (0x0003aaa1) smil_text_pane

0xc27b,	// (0x00044ecc) bg_popup_call3_rect_pane_g8

0xc283,	// (0x00044ed4) bg_popup_call3_rect_pane_g9

0x0008,

0xf519,	// (0x0004816a) bg_popup_call3_rect_pane_g

0xc503,	// (0x00045154) smil_status_volume_pane_g1

0x53e4,	// (0x0003e035) smil_status_pane_t1

0xeb77,	// (0x000477c8) volume_smil_pane

0x1e5a,	// (0x0003aaab) list_smil_text_pane

0x53fb,	// (0x0003e04c) scroll_pane_cp011

0x5406,	// (0x0003e057) smil_text_list_pane_t1_ParamLimits

0x5406,	// (0x0003e057) smil_text_list_pane_t1

0xb232,	// (0x00043e83) aid_volume_smil_ParamLimits

0xb232,	// (0x00043e83) aid_volume_smil

0x184f,	// (0x0003a4a0) smil_volume_pane_g1

0x184f,	// (0x0003a4a0) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00047ecc) smil_volume_pane_g

0x3daf,	// (0x0003ca00) listscroll_cale_day_pane

0x1e64,	// (0x0003aab5) bg_cale_pane

0x1e7c,	// (0x0003aacd) list_cale_pane

0x1e9f,	// (0x0003aaf0) scroll_pane_cp09

0x1eb0,	// (0x0003ab01) cale_bg_pane_g1

0x1eb8,	// (0x0003ab09) cale_bg_pane_g2

0x1ec0,	// (0x0003ab11) cale_bg_pane_g3

0x1ec8,	// (0x0003ab19) cale_bg_pane_g4

0x1ed0,	// (0x0003ab21) cale_bg_pane_g5

0x1ed8,	// (0x0003ab29) cale_bg_pane_g6

0x1ee0,	// (0x0003ab31) cale_bg_pane_g7

0x1ee8,	// (0x0003ab39) cale_bg_pane_g8

0x1ef0,	// (0x0003ab41) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00047ed1) cale_bg_pane_g

0x544a,	// (0x0003e09b) list_cale_time_pane_ParamLimits

0x544a,	// (0x0003e09b) list_cale_time_pane

0x1ef8,	// (0x0003ab49) list_cale_time_pane_g1_ParamLimits

0x1ef8,	// (0x0003ab49) list_cale_time_pane_g1

0x1f04,	// (0x0003ab55) list_cale_time_pane_g2_ParamLimits

0x1f04,	// (0x0003ab55) list_cale_time_pane_g2

0x545f,	// (0x0003e0b0) list_cale_time_pane_g3_ParamLimits

0x545f,	// (0x0003e0b0) list_cale_time_pane_g3

0x546b,	// (0x0003e0bc) list_cale_time_pane_g4_ParamLimits

0x546b,	// (0x0003e0bc) list_cale_time_pane_g4

0x5477,	// (0x0003e0c8) list_cale_time_pane_g5_ParamLimits

0x5477,	// (0x0003e0c8) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00047ee4) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00047ee4) list_cale_time_pane_g

0x1f1e,	// (0x0003ab6f) list_cale_time_pane_t1_ParamLimits

0x1f1e,	// (0x0003ab6f) list_cale_time_pane_t1

0x1f46,	// (0x0003ab97) list_cale_time_pane_t2_ParamLimits

0x1f46,	// (0x0003ab97) list_cale_time_pane_t2

0x59eb,	// (0x0003e63c) aid_blid_cardinal_pane

0x5a35,	// (0x0003e686) compass_pane_t4

0x1f6e,	// (0x0003abbf) list_cale_time_pane_t4_ParamLimits

0x1f6e,	// (0x0003abbf) list_cale_time_pane_t4

0x5a43,	// (0x0003e694) compass_pane_t5

0x5a51,	// (0x0003e6a2) compass_pane_t6

0x5a5f,	// (0x0003e6b0) compass_pane_t7

0x5aeb,	// (0x0003e73c) navi_pane_cc_t1

0x5cf3,	// (0x0003e944) aid_phob_thumbnail_center_pane

0x60c1,	// (0x0003ed12) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x00047ef1) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x00047ef1) list_cale_time_pane_t

0x1235,	// (0x00039e86) bg_popup_window_pane_cp02_ParamLimits

0x1235,	// (0x00039e86) bg_popup_window_pane_cp02

0x1f96,	// (0x0003abe7) heading_pane_cp01_ParamLimits

0x1f96,	// (0x0003abe7) heading_pane_cp01

0x1fa2,	// (0x0003abf3) loc_req_pane_ParamLimits

0x1fa2,	// (0x0003abf3) loc_req_pane

0x1fb2,	// (0x0003ac03) loc_type_pane_ParamLimits

0x1fb2,	// (0x0003ac03) loc_type_pane

0x1fc4,	// (0x0003ac15) loc_type_pane_t1_ParamLimits

0x1fc4,	// (0x0003ac15) loc_type_pane_t1

0x1fd6,	// (0x0003ac27) loc_type_pane_t2_ParamLimits

0x1fd6,	// (0x0003ac27) loc_type_pane_t2

0x1fe8,	// (0x0003ac39) loc_type_pane_t3_ParamLimits

0x1fe8,	// (0x0003ac39) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x00047ef8) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x00047ef8) loc_type_pane_t

0x1ffa,	// (0x0003ac4b) list_loc_req_pane

0x2004,	// (0x0003ac55) scroll_pane_cp012

0x5483,	// (0x0003e0d4) list_single_loc_request_popup_menu_pane_ParamLimits

0x5483,	// (0x0003e0d4) list_single_loc_request_popup_menu_pane

0x200d,	// (0x0003ac5e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x200d,	// (0x0003ac5e) list_single_loc_request_popup_menu_pane_g1

0x2019,	// (0x0003ac6a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2019,	// (0x0003ac6a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00047eff) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00047eff) list_single_loc_request_popup_menu_pane_g

0x2025,	// (0x0003ac76) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2025,	// (0x0003ac76) list_single_loc_request_popup_menu_pane_t1

0x1837,	// (0x0003a488) bg_popup_window_pane_cp03_ParamLimits

0x1837,	// (0x0003a488) bg_popup_window_pane_cp03

0x5490,	// (0x0003e0e1) heading_loc_req_pane_ParamLimits

0x5490,	// (0x0003e0e1) heading_loc_req_pane

0x549c,	// (0x0003e0ed) popup_dyc_status_message_window_g1_ParamLimits

0x549c,	// (0x0003e0ed) popup_dyc_status_message_window_g1

0x54b0,	// (0x0003e101) popup_dyc_status_message_window_t1_ParamLimits

0x54b0,	// (0x0003e101) popup_dyc_status_message_window_t1

0x54c5,	// (0x0003e116) popup_dyc_status_message_window_t2_ParamLimits

0x54c5,	// (0x0003e116) popup_dyc_status_message_window_t2

0x54da,	// (0x0003e12b) popup_dyc_status_message_window_t3_ParamLimits

0x54da,	// (0x0003e12b) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00047f04) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00047f04) popup_dyc_status_message_window_t

0x15dc,	// (0x0003a22d) bg_heading_pane_cp01

0x203b,	// (0x0003ac8c) heading_loc_req_pane_g1

0x2043,	// (0x0003ac94) heading_loc_req_pane_g2

0x204b,	// (0x0003ac9c) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x00047f0b) heading_loc_req_pane_g

0x2053,	// (0x0003aca4) heading_loc_req_pane_t1

0x2062,	// (0x0003acb3) bg_popup_sub_pane_cp01_ParamLimits

0x2062,	// (0x0003acb3) bg_popup_sub_pane_cp01

0x2070,	// (0x0003acc1) popup_cale_events_window_g1_ParamLimits

0x2070,	// (0x0003acc1) popup_cale_events_window_g1

0x2090,	// (0x0003ace1) popup_cale_events_window_g2_ParamLimits

0x2090,	// (0x0003ace1) popup_cale_events_window_g2

0x0001,

0xf2ee,	// (0x00047f3f) popup_cale_events_window_g_ParamLimits

0xf2ee,	// (0x00047f3f) popup_cale_events_window_g

0x5510,	// (0x0003e161) popup_cale_events_window_t1_ParamLimits

0x5510,	// (0x0003e161) popup_cale_events_window_t1

0x5522,	// (0x0003e173) popup_cale_events_window_t2_ParamLimits

0x5522,	// (0x0003e173) popup_cale_events_window_t2

0x5560,	// (0x0003e1b1) popup_cale_events_window_t3_ParamLimits

0x5560,	// (0x0003e1b1) popup_cale_events_window_t3

0x559a,	// (0x0003e1eb) popup_cale_events_window_t4_ParamLimits

0x559a,	// (0x0003e1eb) popup_cale_events_window_t4

0x0003,

0xf2f3,	// (0x00047f44) popup_cale_events_window_t_ParamLimits

0xf2f3,	// (0x00047f44) popup_cale_events_window_t

0x55d0,	// (0x0003e221) call_type_pane

0x55e0,	// (0x0003e231) popup_call_status_window_g1

0x55f4,	// (0x0003e245) popup_call_status_window_g2

0x5608,	// (0x0003e259) popup_call_status_window_g3

0x0002,

0xf2fc,	// (0x00047f4d) popup_call_status_window_g

0x5618,	// (0x0003e269) call_type_pane_g1

0x5621,	// (0x0003e272) call_type_pane_g2

0x0001,

0xf303,	// (0x00047f54) call_type_pane_g

0x15dc,	// (0x0003a22d) bg_popup_sub_pane_cp02

0x562a,	// (0x0003e27b) listscroll_popup_wml_pane

0x5632,	// (0x0003e283) list_wml_pane

0x563c,	// (0x0003e28d) scroll_pane_cp013

0x5645,	// (0x0003e296) list_single_graphic_popup_wml_pane_ParamLimits

0x5645,	// (0x0003e296) list_single_graphic_popup_wml_pane

0x184f,	// (0x0003a4a0) list_single_graphic_popup_wml_pane_g1

0x5658,	// (0x0003e2a9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf308,	// (0x00047f59) list_single_graphic_popup_wml_pane_g

0x5660,	// (0x0003e2b1) list_single_graphic_popup_wml_pane_t1

0x5676,	// (0x0003e2c7) aid_call_pane

0x182f,	// (0x0003a480) popup_clock_analogue_window_g1

0x182f,	// (0x0003a480) popup_clock_analogue_window_g2

0xb272,	// (0x00043ec3) popup_clock_analogue_window_g3

0xb272,	// (0x00043ec3) popup_clock_analogue_window_g4

0x184f,	// (0x0003a4a0) popup_clock_analogue_window_g5

0x0004,

0xf30d,	// (0x00047f5e) popup_clock_analogue_window_g

0xb27a,	// (0x00043ecb) popup_clock_analogue_window_t1

0xb288,	// (0x00043ed9) clock_digital_number_pane_ParamLimits

0xb288,	// (0x00043ed9) clock_digital_number_pane

0xb294,	// (0x00043ee5) clock_digital_number_pane_cp02_ParamLimits

0xb294,	// (0x00043ee5) clock_digital_number_pane_cp02

0xb2a0,	// (0x00043ef1) clock_digital_number_pane_cp03_ParamLimits

0xb2a0,	// (0x00043ef1) clock_digital_number_pane_cp03

0xb2ac,	// (0x00043efd) clock_digital_number_pane_cp04_ParamLimits

0xb2ac,	// (0x00043efd) clock_digital_number_pane_cp04

0xb2b8,	// (0x00043f09) clock_digital_separator_pane_ParamLimits

0xb2b8,	// (0x00043f09) clock_digital_separator_pane

0xb2c4,	// (0x00043f15) popup_clock_digital_window_t1

0x184f,	// (0x0003a4a0) clock_digital_number_pane_g1

0x184f,	// (0x0003a4a0) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00047ecc) clock_digital_number_pane_g

0x184f,	// (0x0003a4a0) clock_digital_separator_pane_g1

0x184f,	// (0x0003a4a0) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00047ecc) clock_digital_separator_pane_g

0x15dc,	// (0x0003a22d) bg_popup_window_pane_cp04

0x567e,	// (0x0003e2cf) heading_pane_cp03

0x5686,	// (0x0003e2d7) listscroll_popup_gms_pane

0x568e,	// (0x0003e2df) grid_large_graphic_popup_pane

0x5698,	// (0x0003e2e9) listscroll_popup_gms_pane_g1

0x56a0,	// (0x0003e2f1) listscroll_popup_gms_pane_g2

0x0001,

0xf318,	// (0x00047f69) listscroll_popup_gms_pane_g

0x1cb4,	// (0x0003a905) scroll_pane_cp014

0x56a8,	// (0x0003e2f9) cell_large_graphic_popup_pane_ParamLimits

0x56a8,	// (0x0003e2f9) cell_large_graphic_popup_pane

0x56be,	// (0x0003e30f) cell_large_graphic_popup_pane_g1_ParamLimits

0x56be,	// (0x0003e30f) cell_large_graphic_popup_pane_g1

0x56ca,	// (0x0003e31b) cell_large_graphic_popup_pane_g2_ParamLimits

0x56ca,	// (0x0003e31b) cell_large_graphic_popup_pane_g2

0x56d6,	// (0x0003e327) cell_large_graphic_popup_pane_g3_ParamLimits

0x56d6,	// (0x0003e327) cell_large_graphic_popup_pane_g3

0x56e3,	// (0x0003e334) cell_large_graphic_popup_pane_g4_ParamLimits

0x56e3,	// (0x0003e334) cell_large_graphic_popup_pane_g4

0x0003,

0xf31d,	// (0x00047f6e) cell_large_graphic_popup_pane_g_ParamLimits

0xf31d,	// (0x00047f6e) cell_large_graphic_popup_pane_g

0x56f3,	// (0x0003e344) grid_highlight_pane_cp010

0x184f,	// (0x0003a4a0) bg_popup_call_pane_g1

0x56fd,	// (0x0003e34e) list_single_graphic_popup_conf_pane_ParamLimits

0x56fd,	// (0x0003e34e) list_single_graphic_popup_conf_pane

0x5710,	// (0x0003e361) list_highlight_pane_cp01

0x5719,	// (0x0003e36a) list_single_graphic_popup_conf_pane_g1

0x5721,	// (0x0003e372) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf326,	// (0x00047f77) list_single_graphic_popup_conf_pane_g

0x5729,	// (0x0003e37a) list_single_graphic_popup_conf_pane_t1

0x5737,	// (0x0003e388) linegrid_cams_pane_g1

0x5740,	// (0x0003e391) linegrid_cams_pane_g2

0x1a2b,	// (0x0003a67c) linegrid_cams_pane_g3

0x5749,	// (0x0003e39a) linegrid_cams_pane_g4

0x5752,	// (0x0003e3a3) linegrid_cams_pane_g5

0x575b,	// (0x0003e3ac) linegrid_cams_pane_g6

0x1adb,	// (0x0003a72c) linegrid_cams_pane_g7

0x0006,

0xf32b,	// (0x00047f7c) linegrid_cams_pane_g

0x5764,	// (0x0003e3b5) popup_clock_analogue_window

0x5764,	// (0x0003e3b5) popup_clock_digital_window

0x15dc,	// (0x0003a22d) popup_phob_thumbnail_window

0x184f,	// (0x0003a4a0) call_video_uplink_pane_g1

0x576d,	// (0x0003e3be) call_video_uplink_pane_g2

0x0001,

0xf33a,	// (0x00047f8b) call_video_uplink_pane_g

0x1aa8,	// (0x0003a6f9) video_uplink_pane

0x5775,	// (0x0003e3c6) mce_image_pane_g1

0x577f,	// (0x0003e3d0) mce_image_pane_g2

0x5787,	// (0x0003e3d8) mce_image_pane_g3

0x578f,	// (0x0003e3e0) mce_image_pane_g4

0x5797,	// (0x0003e3e8) mce_image_pane_g5

0x0004,

0xf33f,	// (0x00047f90) mce_image_pane_g

0x579f,	// (0x0003e3f0) control_top_pane_stacon_cp01_ParamLimits

0x579f,	// (0x0003e3f0) control_top_pane_stacon_cp01

0x57af,	// (0x0003e400) uni_indicator_pane_stacon_cp01_ParamLimits

0x57af,	// (0x0003e400) uni_indicator_pane_stacon_cp01

0x57c0,	// (0x0003e411) bg_popup_sub_pane_cp03

0x57ca,	// (0x0003e41b) chi_dic_find_pane

0x57d2,	// (0x0003e423) listscroll_chi_dic_pane

0x57db,	// (0x0003e42c) main_pane_chidic_g1

0x57ee,	// (0x0003e43f) chi_dic_find_pane_t1

0x57fc,	// (0x0003e44d) find_chidic_pane

0x5805,	// (0x0003e456) chi_dic_list_pane_ParamLimits

0x5805,	// (0x0003e456) chi_dic_list_pane

0x5816,	// (0x0003e467) scroll_pane_cp020

0x581e,	// (0x0003e46f) find_chidic_pane_t1

0x15dc,	// (0x0003a22d) input_focus_pane_cp06

0x582d,	// (0x0003e47e) list_chi_dic_pane_ParamLimits

0x582d,	// (0x0003e47e) list_chi_dic_pane

0x583f,	// (0x0003e490) list_chi_dic_pane_t1_ParamLimits

0x583f,	// (0x0003e490) list_chi_dic_pane_t1

0x15dc,	// (0x0003a22d) list_highlight_pane_cp020

0x5852,	// (0x0003e4a3) bg_cale_heading_pane_g1

0x585a,	// (0x0003e4ab) bg_cale_heading_pane_g2

0x5862,	// (0x0003e4b3) bg_cale_heading_pane_g3

0x586a,	// (0x0003e4bb) bg_cale_heading_pane_g4

0x5872,	// (0x0003e4c3) bg_cale_heading_pane_g5

0x587a,	// (0x0003e4cb) bg_cale_heading_pane_g6

0x5882,	// (0x0003e4d3) bg_cale_heading_pane_g7

0x588a,	// (0x0003e4db) bg_cale_heading_pane_g8

0x5892,	// (0x0003e4e3) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x00047f9b) bg_cale_heading_pane_g

0x5852,	// (0x0003e4a3) bg_cale_side_pane_g1

0x589a,	// (0x0003e4eb) bg_cale_side_pane_g2

0x58a2,	// (0x0003e4f3) bg_cale_side_pane_g3

0x58aa,	// (0x0003e4fb) bg_cale_side_pane_g4

0x58b2,	// (0x0003e503) bg_cale_side_pane_g5

0x58ba,	// (0x0003e50b) bg_cale_side_pane_g6

0x58c2,	// (0x0003e513) bg_cale_side_pane_g7

0x58ca,	// (0x0003e51b) bg_cale_side_pane_g8

0x58d2,	// (0x0003e523) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x00047fae) bg_cale_side_pane_g

0x58da,	// (0x0003e52b) popup_call_status_window_ParamLimits

0x58da,	// (0x0003e52b) popup_call_status_window

0x5921,	// (0x0003e572) stacon_top_pane

0x5929,	// (0x0003e57a) status_pane_ParamLimits

0x5929,	// (0x0003e57a) status_pane

0x5943,	// (0x0003e594) status_small_pane

0x594b,	// (0x0003e59c) control_pane

0x15dc,	// (0x0003a22d) stacon_bottom_pane

0x5953,	// (0x0003e5a4) list_single_mce_smart_pane_t1_ParamLimits

0x5953,	// (0x0003e5a4) list_single_mce_smart_pane_t1

0x5966,	// (0x0003e5b7) list_single_mce_smart_pane_t2_ParamLimits

0x5966,	// (0x0003e5b7) list_single_mce_smart_pane_t2

0x0001,

0xf370,	// (0x00047fc1) list_single_mce_smart_pane_t_ParamLimits

0xf370,	// (0x00047fc1) list_single_mce_smart_pane_t

0x598e,	// (0x0003e5df) compass_pane

0x5997,	// (0x0003e5e8) main_location2_pane_t1

0x59ad,	// (0x0003e5fe) main_location2_pane_t2

0x59c3,	// (0x0003e614) main_location2_pane_t3

0x0003,

0xf375,	// (0x00047fc6) main_location2_pane_t

0x5a0b,	// (0x0003e65c) compass_pane_g1_ParamLimits

0x5a0b,	// (0x0003e65c) compass_pane_g1

0x5a17,	// (0x0003e668) compass_pane_t1

0x5a26,	// (0x0003e677) compass_pane_t2

0x0005,

0xf37e,	// (0x00047fcf) compass_pane_t

0x5a6d,	// (0x0003e6be) text_secondary_cp61

0x5ae2,	// (0x0003e733) navi_pane_cams_g5

0x5b4b,	// (0x0003e79c) navi_pane_im_t1

0x5b59,	// (0x0003e7aa) navi_pane_mp_g1_ParamLimits

0x5b59,	// (0x0003e7aa) navi_pane_mp_g1

0x5b6d,	// (0x0003e7be) navi_pane_mp_g2_ParamLimits

0x5b6d,	// (0x0003e7be) navi_pane_mp_g2

0x5b79,	// (0x0003e7ca) navi_pane_mp_g3_ParamLimits

0x5b79,	// (0x0003e7ca) navi_pane_mp_g3

0x0002,

0xf392,	// (0x00047fe3) navi_pane_mp_g_ParamLimits

0xf392,	// (0x00047fe3) navi_pane_mp_g

0x5b85,	// (0x0003e7d6) navi_pane_mp_t1

0x5b93,	// (0x0003e7e4) navi_pane_mp_t2

0x0002,

0xf399,	// (0x00047fea) navi_pane_mp_t

0x5c3c,	// (0x0003e88d) navi_pane_vt_g1

0x5b85,	// (0x0003e7d6) navi_pane_vt_t1

0x5c44,	// (0x0003e895) navi_slider_pane

0x1aec,	// (0x0003a73d) zooming_pane

0x5c54,	// (0x0003e8a5) navi_slider_pane_g1

0xeac6,	// (0x00047717) navi_slider_pane_g2

0x0006,

0xf3a0,	// (0x00047ff1) navi_slider_pane_g

0x5c78,	// (0x0003e8c9) aid_levels_zoom

0x5c80,	// (0x0003e8d1) zooming_pane_g1

0x5c88,	// (0x0003e8d9) zooming_pane_g2

0x5c88,	// (0x0003e8d9) zooming_pane_g3

0x0002,

0xf3af,	// (0x00048000) zooming_pane_g

0x5c90,	// (0x0003e8e1) level_10_zoom

0x5c99,	// (0x0003e8ea) level_11_zoom

0x5ca2,	// (0x0003e8f3) level_1_zoom

0x5cab,	// (0x0003e8fc) level_2_zoom

0x5cb4,	// (0x0003e905) level_3_zoom

0x5cbd,	// (0x0003e90e) level_4_zoom

0x5cc6,	// (0x0003e917) level_5_zoom

0x5ccf,	// (0x0003e920) level_6_zoom

0x5cd8,	// (0x0003e929) level_7_zoom

0x5ce1,	// (0x0003e932) level_8_zoom

0x5cea,	// (0x0003e93b) level_9_zoom

0x5cfb,	// (0x0003e94c) popup_phob_thumbnail_window_g1

0x5d03,	// (0x0003e954) popup_phob_thumbnail_window_g2

0x0001,

0xf3b6,	// (0x00048007) popup_phob_thumbnail_window_g

0xc435,	// (0x00045086) level_1_location

0xc43d,	// (0x0004508e) level_2_location

0xc445,	// (0x00045096) level_3_location

0xc44d,	// (0x0004509e) level_4_location

0x1aec,	// (0x0003a73d) level_5_location

0x5d0b,	// (0x0003e95c) mce_icon_pane_g1

0x5d13,	// (0x0003e964) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x0004800c) mce_icon_pane_g

0x5d1b,	// (0x0003e96c) main_mup_pane_g1_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g1

0x5d1b,	// (0x0003e96c) main_mup_pane_g2_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g2

0x5d1b,	// (0x0003e96c) main_mup_pane_g3_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g3

0x5d1b,	// (0x0003e96c) main_mup_pane_g4_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g4

0x5d1b,	// (0x0003e96c) main_mup_pane_g5_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g5

0x5d1b,	// (0x0003e96c) main_mup_pane_g6_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g6

0x5d1b,	// (0x0003e96c) main_mup_pane_g7_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g7

0x5d1b,	// (0x0003e96c) main_mup_pane_g8_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g8

0x5d1b,	// (0x0003e96c) main_mup_pane_g9_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g9

0x5d1b,	// (0x0003e96c) main_mup_pane_g10_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g10

0x5d1b,	// (0x0003e96c) main_mup_pane_g11_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g11

0x18b1,	// (0x0003a502) main_mup_pane_g12_ParamLimits

0x18b1,	// (0x0003a502) main_mup_pane_g12

0x5d1b,	// (0x0003e96c) main_mup_pane_g13_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x00048011) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x00048011) main_mup_pane_g

0x5d29,	// (0x0003e97a) main_mup_pane_t1_ParamLimits

0x5d29,	// (0x0003e97a) main_mup_pane_t1

0x5d29,	// (0x0003e97a) main_mup_pane_t2_ParamLimits

0x5d29,	// (0x0003e97a) main_mup_pane_t2

0x5d29,	// (0x0003e97a) main_mup_pane_t3_ParamLimits

0x5d29,	// (0x0003e97a) main_mup_pane_t3

0x20b0,	// (0x0003ad01) main_mup_pane_t4_ParamLimits

0x20b0,	// (0x0003ad01) main_mup_pane_t4

0x20b0,	// (0x0003ad01) main_mup_pane_t5_ParamLimits

0x20b0,	// (0x0003ad01) main_mup_pane_t5

0x5d3d,	// (0x0003e98e) main_mup_pane_t6_ParamLimits

0x5d3d,	// (0x0003e98e) main_mup_pane_t6

0x0005,

0xf3db,	// (0x0004802c) main_mup_pane_t_ParamLimits

0xf3db,	// (0x0004802c) main_mup_pane_t

0x5d51,	// (0x0003e9a2) mup_progress_pane_ParamLimits

0x5d51,	// (0x0003e9a2) mup_progress_pane

0x5d5f,	// (0x0003e9b0) mup_visualizer_pane_ParamLimits

0x5d5f,	// (0x0003e9b0) mup_visualizer_pane

0x5d5f,	// (0x0003e9b0) mup_volume_pane_ParamLimits

0x5d5f,	// (0x0003e9b0) mup_volume_pane

0x18bf,	// (0x0003a510) mup_visualizer_pane_g1_ParamLimits

0x18bf,	// (0x0003a510) mup_visualizer_pane_g1

0x5d6d,	// (0x0003e9be) mup_visualizer_pane_g2_ParamLimits

0x5d6d,	// (0x0003e9be) mup_visualizer_pane_g2

0x18b1,	// (0x0003a502) mup_visualizer_pane_g3_ParamLimits

0x18b1,	// (0x0003a502) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x00048039) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x00048039) mup_visualizer_pane_g

0x1b46,	// (0x0003a797) mup_volume_pane_g1

0x1b46,	// (0x0003a797) mup_volume_pane_g2

0x0001,

0xf3ef,	// (0x00048040) mup_volume_pane_g

0x1b46,	// (0x0003a797) mup_progress_pane_g1

0x1b46,	// (0x0003a797) mup_progress_pane_g2

0x1b46,	// (0x0003a797) mup_progress_pane_g3

0x0002,

0xf3f4,	// (0x00048045) mup_progress_pane_g

0x15dc,	// (0x0003a22d) bg_popup_window_pane_cp05

0x5d7b,	// (0x0003e9cc) heading_pane_cp02_ParamLimits

0x5d7b,	// (0x0003e9cc) heading_pane_cp02

0x5d95,	// (0x0003e9e6) list_popup_blid_pane

0x5d9d,	// (0x0003e9ee) list_blid_sat_info_pane_ParamLimits

0x5d9d,	// (0x0003e9ee) list_blid_sat_info_pane

0x5db0,	// (0x0003ea01) list_blid_sat_info_pane_g1

0x5db8,	// (0x0003ea09) list_blid_sat_info_pane_t1

0x5e98,	// (0x0003eae9) mup_equalizer_pane_ParamLimits

0x5e98,	// (0x0003eae9) mup_equalizer_pane

0x5eb1,	// (0x0003eb02) mup_equalizer_pane_cp1_ParamLimits

0x5eb1,	// (0x0003eb02) mup_equalizer_pane_cp1

0x5eca,	// (0x0003eb1b) mup_equalizer_pane_cp2_ParamLimits

0x5eca,	// (0x0003eb1b) mup_equalizer_pane_cp2

0x5ee3,	// (0x0003eb34) mup_equalizer_pane_cp3_ParamLimits

0x5ee3,	// (0x0003eb34) mup_equalizer_pane_cp3

0x5efc,	// (0x0003eb4d) mup_equalizer_pane_cp4_ParamLimits

0x5efc,	// (0x0003eb4d) mup_equalizer_pane_cp4

0x5f15,	// (0x0003eb66) mup_equalizer_pane_cp5

0x5f27,	// (0x0003eb78) mup_equalizer_pane_cp6

0x5f39,	// (0x0003eb8a) mup_equalizer_pane_cp7

0xc313,	// (0x00044f64) bg_popup_call_poc_act_pane_g9

0xc31b,	// (0x00044f6c) bg_popup_call_poc_act_pane_g10

0xc323,	// (0x00044f74) bg_popup_call_poc_act_pane_g11

0x000a,

0x1837,	// (0x0003a488) mup_scale_pane

0x184f,	// (0x0003a4a0) mup_scale_pane_g1

0x5f4d,	// (0x0003eb9e) mup_scale_pane_g2

0x0006,

0xf410,	// (0x00048061) mup_scale_pane_g

0x5f83,	// (0x0003ebd4) msg_data_pane

0x5f8b,	// (0x0003ebdc) scroll_pane_cp017

0x2fa2,	// (0x0003bbf3) bg_list_pane_cp04_ParamLimits

0x2fa2,	// (0x0003bbf3) bg_list_pane_cp04

0x5f93,	// (0x0003ebe4) msg_data_pane_g1

0x577f,	// (0x0003e3d0) msg_data_pane_g2

0x5787,	// (0x0003e3d8) msg_data_pane_g3

0x5f9b,	// (0x0003ebec) msg_data_pane_g4

0x5797,	// (0x0003e3e8) msg_data_pane_g5

0x5d0b,	// (0x0003e95c) msg_data_pane_g6

0x5fa3,	// (0x0003ebf4) msg_data_pane_g7

0x0006,

0xf41f,	// (0x00048070) msg_data_pane_g

0x2fc2,	// (0x0003bc13) msg_text_pane_ParamLimits

0x2fc2,	// (0x0003bc13) msg_text_pane

0x5fab,	// (0x0003ebfc) qrid_highlight_pane_cp011_ParamLimits

0x5fab,	// (0x0003ebfc) qrid_highlight_pane_cp011

0x15dc,	// (0x0003a22d) msg_body_pane

0x15dc,	// (0x0003a22d) msg_header_pane

0x5fca,	// (0x0003ec1b) input_focus_pane_cp07

0x2ff6,	// (0x0003bc47) msg_header_pane_t1_ParamLimits

0x2ff6,	// (0x0003bc47) msg_header_pane_t1

0x300c,	// (0x0003bc5d) msg_header_pane_t2_ParamLimits

0x300c,	// (0x0003bc5d) msg_header_pane_t2

0x0001,

0xf433,	// (0x00048084) msg_header_pane_t_ParamLimits

0xf433,	// (0x00048084) msg_header_pane_t

0x5fdf,	// (0x0003ec30) msg_body_pane_g1

0x3023,	// (0x0003bc74) msg_body_pane_t1_ParamLimits

0x3023,	// (0x0003bc74) msg_body_pane_t1

0xb2e1,	// (0x00043f32) msg_body_pane_t2_ParamLimits

0xb2e1,	// (0x00043f32) msg_body_pane_t2

0xb2f3,	// (0x00043f44) msg_body_pane_t3_ParamLimits

0xb2f3,	// (0x00043f44) msg_body_pane_t3

0x0002,

0xf438,	// (0x00048089) msg_body_pane_t_ParamLimits

0xf438,	// (0x00048089) msg_body_pane_t

0x601d,	// (0x0003ec6e) main_viewer_pane_g1_ParamLimits

0x601d,	// (0x0003ec6e) main_viewer_pane_g1

0x6029,	// (0x0003ec7a) main_viewer_pane_g2_ParamLimits

0x6029,	// (0x0003ec7a) main_viewer_pane_g2

0x6035,	// (0x0003ec86) main_viewer_pane_g3_ParamLimits

0x6035,	// (0x0003ec86) main_viewer_pane_g3

0x6044,	// (0x0003ec95) main_viewer_pane_g4_ParamLimits

0x6044,	// (0x0003ec95) main_viewer_pane_g4

0xeaf0,	// (0x00047741) main_viewer_pane_g5_ParamLimits

0xeaf0,	// (0x00047741) main_viewer_pane_g5

0xeaf0,	// (0x00047741) main_viewer_pane_g7_ParamLimits

0xeaf0,	// (0x00047741) main_viewer_pane_g7

0xeb02,	// (0x00047753) main_viewer_pane_g8_ParamLimits

0xeb02,	// (0x00047753) main_viewer_pane_g8

0x0007,

0xf448,	// (0x00048099) main_viewer_pane_g_ParamLimits

0xf448,	// (0x00048099) main_viewer_pane_g

0x6053,	// (0x0003eca4) viewer_content_pane_ParamLimits

0x6053,	// (0x0003eca4) viewer_content_pane

0x6086,	// (0x0003ecd7) main_postcard_pane_g1_ParamLimits

0x6086,	// (0x0003ecd7) main_postcard_pane_g1

0x609a,	// (0x0003eceb) main_postcard_pane_g2_ParamLimits

0x609a,	// (0x0003eceb) main_postcard_pane_g2

0x60ae,	// (0x0003ecff) main_postcard_pane_g3_ParamLimits

0x60ae,	// (0x0003ecff) main_postcard_pane_g3

0x0005,

0xf459,	// (0x000480aa) main_postcard_pane_g_ParamLimits

0xf459,	// (0x000480aa) main_postcard_pane_g

0x60c1,	// (0x0003ed12) main_postcard_pane_g4

0xc516,	// (0x00045167) smil_status_volume_pane_g2

0x60fc,	// (0x0003ed4d) postcard_pane_ParamLimits

0x60fc,	// (0x0003ed4d) postcard_pane

0x613c,	// (0x0003ed8d) postcard_pane_g1_ParamLimits

0x613c,	// (0x0003ed8d) postcard_pane_g1

0x614a,	// (0x0003ed9b) postcard_pane_g2_ParamLimits

0x614a,	// (0x0003ed9b) postcard_pane_g2

0x6156,	// (0x0003eda7) postcard_pane_g3_ParamLimits

0x6156,	// (0x0003eda7) postcard_pane_g3

0x6162,	// (0x0003edb3) postcard_pane_g4_ParamLimits

0x6162,	// (0x0003edb3) postcard_pane_g4

0x6170,	// (0x0003edc1) postcard_pane_g5_ParamLimits

0x6170,	// (0x0003edc1) postcard_pane_g5

0x6185,	// (0x0003edd6) postcard_pane_g6_ParamLimits

0x6185,	// (0x0003edd6) postcard_pane_g6

0x613c,	// (0x0003ed8d) postcard_pane_g7_ParamLimits

0x613c,	// (0x0003ed8d) postcard_pane_g7

0x0006,

0xf466,	// (0x000480b7) postcard_pane_g_ParamLimits

0xf466,	// (0x000480b7) postcard_pane_g

0x6199,	// (0x0003edea) main_mp2_pane_g1_ParamLimits

0x6199,	// (0x0003edea) main_mp2_pane_g1

0x61a5,	// (0x0003edf6) main_mp2_pane_g2_ParamLimits

0x61a5,	// (0x0003edf6) main_mp2_pane_g2

0x61b1,	// (0x0003ee02) main_mp2_pane_g3_ParamLimits

0x61b1,	// (0x0003ee02) main_mp2_pane_g3

0x0002,

0xf475,	// (0x000480c6) main_mp2_pane_g_ParamLimits

0xf475,	// (0x000480c6) main_mp2_pane_g

0x61bd,	// (0x0003ee0e) main_mp2_pane_t1_ParamLimits

0x61bd,	// (0x0003ee0e) main_mp2_pane_t1

0x61d2,	// (0x0003ee23) main_mp2_pane_t2_ParamLimits

0x61d2,	// (0x0003ee23) main_mp2_pane_t2

0x61e4,	// (0x0003ee35) main_mp2_pane_t3_ParamLimits

0x61e4,	// (0x0003ee35) main_mp2_pane_t3

0x0002,

0xf47c,	// (0x000480cd) main_mp2_pane_t_ParamLimits

0xf47c,	// (0x000480cd) main_mp2_pane_t

0x61f6,	// (0x0003ee47) pec_content_pane_ParamLimits

0x61f6,	// (0x0003ee47) pec_content_pane

0x1cb4,	// (0x0003a905) scroll_pane_cp015

0x6208,	// (0x0003ee59) pec_attribute_pane_ParamLimits

0x6208,	// (0x0003ee59) pec_attribute_pane

0x6218,	// (0x0003ee69) pec_content_pane_g1_ParamLimits

0x6218,	// (0x0003ee69) pec_content_pane_g1

0x6224,	// (0x0003ee75) pec_content_pane_t1_ParamLimits

0x6224,	// (0x0003ee75) pec_content_pane_t1

0x6236,	// (0x0003ee87) pec_content_pane_t2_ParamLimits

0x6236,	// (0x0003ee87) pec_content_pane_t2

0x0001,

0xf483,	// (0x000480d4) pec_content_pane_t_ParamLimits

0xf483,	// (0x000480d4) pec_content_pane_t

0x6248,	// (0x0003ee99) list_single_graphic_pane_cp01_ParamLimits

0x6248,	// (0x0003ee99) list_single_graphic_pane_cp01

0x1837,	// (0x0003a488) bg_popup_sub_pane_cp04

0x625d,	// (0x0003eeae) popup_mup_playback_window_g1

0x6269,	// (0x0003eeba) popup_mup_playback_window_t1

0x627e,	// (0x0003eecf) popup_mup_playback_window_t2

0x0001,

0xf488,	// (0x000480d9) popup_mup_playback_window_t

0x62d3,	// (0x0003ef24) main_image_pane_g1_ParamLimits

0x62d3,	// (0x0003ef24) main_image_pane_g1

0x63ae,	// (0x0003efff) scroll_pane_cp018_ParamLimits

0x63ae,	// (0x0003efff) scroll_pane_cp018

0x63c6,	// (0x0003f017) scroll_pane_cp016_ParamLimits

0x63c6,	// (0x0003f017) scroll_pane_cp016

0x63fa,	// (0x0003f04b) smil2_image_pane_ParamLimits

0x63fa,	// (0x0003f04b) smil2_image_pane

0x6422,	// (0x0003f073) smil2_root_pane_ParamLimits

0x6422,	// (0x0003f073) smil2_root_pane

0x645a,	// (0x0003f0ab) smil2_text_pane_ParamLimits

0x645a,	// (0x0003f0ab) smil2_text_pane

0x15dc,	// (0x0003a22d) bg_list_pane_cp06

0x64ce,	// (0x0003f11f) grid_radio_pane

0x15dc,	// (0x0003a22d) bg_popup_window_pane_cp06

0xb305,	// (0x00043f56) main_fmradio_pane_t1

0x567e,	// (0x0003e2cf) heading_pane_cp04

0xb313,	// (0x00043f64) main_fmradio_pane_t2

0xc36b,	// (0x00044fbc) popup_cale_lunar_info_window_g1

0xb321,	// (0x00043f72) main_fmradio_pane_t3

0xc373,	// (0x00044fc4) popup_cale_lunar_info_window_g2

0xb32f,	// (0x00043f80) main_fmradio_pane_t4

0x0001,

0xb33d,	// (0x00043f8e) main_fmradio_pane_t5

0x0004,

0xf57b,	// (0x000481cc) popup_cale_lunar_info_window_g

0xf49d,	// (0x000480ee) main_fmradio_pane_t

0xb34b,	// (0x00043f9c) wait_bar_pane_cp03

0xb353,	// (0x00043fa4) cell_fmradio_pane_ParamLimits

0xb353,	// (0x00043fa4) cell_fmradio_pane

0x613c,	// (0x0003ed8d) cell_fmradio_pane_g1_ParamLimits

0x613c,	// (0x0003ed8d) cell_fmradio_pane_g1

0x15dc,	// (0x0003a22d) grid_highlight_pane_cp011

0xb366,	// (0x00043fb7) poc_content_pane_ParamLimits

0xb366,	// (0x00043fb7) poc_content_pane

0xb379,	// (0x00043fca) scroll_pane_cp019

0x64d6,	// (0x0003f127) popup_call_poc_act_window_ParamLimits

0x64d6,	// (0x0003f127) popup_call_poc_act_window

0x64f6,	// (0x0003f147) popup_call_poc_inact_window_ParamLimits

0x64f6,	// (0x0003f147) popup_call_poc_inact_window

0xf53f,	// (0x00048190) bg_popup_call_poc_act_pane_g

0xc32b,	// (0x00044f7c) bg_popup_call_poc_inact_pane_g1

0xc333,	// (0x00044f84) bg_popup_call_poc_inact_pane_g2

0xb381,	// (0x00043fd2) popup_call_poc_act_window_g2

0xc33b,	// (0x00044f8c) bg_popup_call_poc_inact_pane_g3

0xc2eb,	// (0x00044f3c) bg_popup_call_poc_inact_pane_g4

0xc343,	// (0x00044f94) bg_popup_call_poc_inact_pane_g5

0xb389,	// (0x00043fda) popup_call_poc_act_window_t1_ParamLimits

0xb389,	// (0x00043fda) popup_call_poc_act_window_t1

0xb3b1,	// (0x00044002) popup_call_poc_act_window_t2_ParamLimits

0xb3b1,	// (0x00044002) popup_call_poc_act_window_t2

0xb3d9,	// (0x0004402a) popup_call_poc_act_window_t3_ParamLimits

0xb3d9,	// (0x0004402a) popup_call_poc_act_window_t3

0xb401,	// (0x00044052) popup_call_poc_act_window_t4_ParamLimits

0xb401,	// (0x00044052) popup_call_poc_act_window_t4

0x0003,

0xf4a8,	// (0x000480f9) popup_call_poc_act_window_t_ParamLimits

0xf4a8,	// (0x000480f9) popup_call_poc_act_window_t

0xc34b,	// (0x00044f9c) bg_popup_call_poc_inact_pane_g6

0xc353,	// (0x00044fa4) bg_popup_call_poc_inact_pane_g7

0xc35b,	// (0x00044fac) bg_popup_call_poc_inact_pane_g8

0xb413,	// (0x00044064) popup_call_poc_inact_window_g2

0xc363,	// (0x00044fb4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x000481a7) bg_popup_call_poc_inact_pane_g

0xb41b,	// (0x0004406c) popup_call_poc_inact_window_t1_ParamLimits

0xb41b,	// (0x0004406c) popup_call_poc_inact_window_t1

0xb430,	// (0x00044081) popup_call_poc_inact_window_t2_ParamLimits

0xb430,	// (0x00044081) popup_call_poc_inact_window_t2

0xb445,	// (0x00044096) popup_call_poc_inact_window_t3_ParamLimits

0xb445,	// (0x00044096) popup_call_poc_inact_window_t3

0x0002,

0xf4b1,	// (0x00048102) popup_call_poc_inact_window_t_ParamLimits

0xf4b1,	// (0x00048102) popup_call_poc_inact_window_t

0xc4a4,	// (0x000450f5) context_pane_ParamLimits

0x6c12,	// (0x0003f863) signal_pane_ParamLimits

0x1aec,	// (0x0003a73d) main_call2_pane

0xeb43,	// (0x00047794) popup_phob_thumbnail2_window_ParamLimits

0xeb43,	// (0x00047794) popup_phob_thumbnail2_window

0xead8,	// (0x00047729) aid_hotspot_pointer_arrow_pane

0xeae0,	// (0x00047731) aid_hotspot_pointer_hand_pane

0x67cb,	// (0x0003f41c) phob_pre_status_pane_g5

0x20c4,	// (0x0003ad15) cams_zoom_pane_ParamLimits

0x43fa,	// (0x0003d04b) image_vga_pane_ParamLimits

0x18b1,	// (0x0003a502) main_camera_pane_g1_ParamLimits

0x18b1,	// (0x0003a502) main_camera_pane_g2_ParamLimits

0x18b1,	// (0x0003a502) main_camera_pane_g3_ParamLimits

0x18b1,	// (0x0003a502) main_camera_pane_g4_ParamLimits

0x18b1,	// (0x0003a502) main_camera_pane_g5_ParamLimits

0x18b1,	// (0x0003a502) main_camera_pane_g6_ParamLimits

0x18b1,	// (0x0003a502) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00047e16) main_camera_pane_g_ParamLimits

0x20b0,	// (0x0003ad01) main_camera_pane_t1_ParamLimits

0x20b0,	// (0x0003ad01) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00047e27) main_camera_pane_t_ParamLimits

0x1837,	// (0x0003a488) bg_popup_preview_window_pane_cp01_ParamLimits

0x1837,	// (0x0003a488) bg_popup_preview_window_pane_cp01

0xb45a,	// (0x000440ab) popup_phob_thumbnail2_window_g1_ParamLimits

0xb45a,	// (0x000440ab) popup_phob_thumbnail2_window_g1

0x15dc,	// (0x0003a22d) call2_cli_visual_pane

0x6522,	// (0x0003f173) popup_call2_audio_conf_window_ParamLimits

0x6522,	// (0x0003f173) popup_call2_audio_conf_window

0x6540,	// (0x0003f191) popup_call2_audio_first_window_ParamLimits

0x6540,	// (0x0003f191) popup_call2_audio_first_window

0x65b6,	// (0x0003f207) popup_call2_audio_in_window_ParamLimits

0x65b6,	// (0x0003f207) popup_call2_audio_in_window

0x65ea,	// (0x0003f23b) popup_call2_audio_out_window_ParamLimits

0x65ea,	// (0x0003f23b) popup_call2_audio_out_window

0x663c,	// (0x0003f28d) popup_call2_audio_second_window_ParamLimits

0x663c,	// (0x0003f28d) popup_call2_audio_second_window

0x668e,	// (0x0003f2df) popup_call2_audio_wait_window_ParamLimits

0x668e,	// (0x0003f2df) popup_call2_audio_wait_window

0x15dc,	// (0x0003a22d) bg_popup_call2_act_pane_cp03

0xb466,	// (0x000440b7) list_conf_pane_cp

0xb46e,	// (0x000440bf) popup_call2_audio_conf_window_t1

0x56fd,	// (0x0003e34e) list_single_graphic_popup_conf2_pane_ParamLimits

0x56fd,	// (0x0003e34e) list_single_graphic_popup_conf2_pane

0x5710,	// (0x0003e361) list_highlight_pane_cp04

0xb47c,	// (0x000440cd) list_single_graphic_popup_conf2_pane_g1

0x5721,	// (0x0003e372) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x00048109) list_single_graphic_popup_conf2_pane_g

0xb484,	// (0x000440d5) list_single_graphic_popup_conf2_pane_t1

0xb492,	// (0x000440e3) bg_popup_call2_act_pane_cp01_ParamLimits

0xb492,	// (0x000440e3) bg_popup_call2_act_pane_cp01

0xb51c,	// (0x0004416d) call_type_pane_cp05_ParamLimits

0xb51c,	// (0x0004416d) call_type_pane_cp05

0xb570,	// (0x000441c1) popup_call2_audio_second_window_g1_ParamLimits

0xb570,	// (0x000441c1) popup_call2_audio_second_window_g1

0xb5c4,	// (0x00044215) popup_call2_audio_second_window_g2_ParamLimits

0xb5c4,	// (0x00044215) popup_call2_audio_second_window_g2

0x0002,

0xf4bd,	// (0x0004810e) popup_call2_audio_second_window_g_ParamLimits

0xf4bd,	// (0x0004810e) popup_call2_audio_second_window_g

0xb629,	// (0x0004427a) popup_call2_audio_second_window_t1_ParamLimits

0xb629,	// (0x0004427a) popup_call2_audio_second_window_t1

0xb6e4,	// (0x00044335) popup_call2_audio_second_window_t2_ParamLimits

0xb6e4,	// (0x00044335) popup_call2_audio_second_window_t2

0xb737,	// (0x00044388) popup_call2_audio_second_window_t3_ParamLimits

0xb737,	// (0x00044388) popup_call2_audio_second_window_t3

0x0003,

0xf4c4,	// (0x00048115) popup_call2_audio_second_window_t_ParamLimits

0xf4c4,	// (0x00048115) popup_call2_audio_second_window_t

0x15dc,	// (0x0003a22d) bg_popup_call2_in_pane_cp02

0xb82a,	// (0x0004447b) call_type_pane_cp04

0xb832,	// (0x00044483) popup_call2_audio_wait_window_g1

0xb83a,	// (0x0004448b) popup_call2_audio_wait_window_g2

0x0001,

0xf4cd,	// (0x0004811e) popup_call2_audio_wait_window_g

0xb842,	// (0x00044493) popup_call2_audio_wait_window_t3

0xb850,	// (0x000444a1) bg_popup_call2_act_pane_ParamLimits

0xb850,	// (0x000444a1) bg_popup_call2_act_pane

0xb910,	// (0x00044561) call_type_pane_cp03_ParamLimits

0xb910,	// (0x00044561) call_type_pane_cp03

0xb974,	// (0x000445c5) popup_call2_audio_first_window_g1_ParamLimits

0xb974,	// (0x000445c5) popup_call2_audio_first_window_g1

0xb9e4,	// (0x00044635) popup_call2_audio_first_window_g2_ParamLimits

0xb9e4,	// (0x00044635) popup_call2_audio_first_window_g2

0xba48,	// (0x00044699) popup_call2_audio_first_window_g3_ParamLimits

0xba48,	// (0x00044699) popup_call2_audio_first_window_g3

0x0004,

0xf4d2,	// (0x00048123) popup_call2_audio_first_window_g_ParamLimits

0xf4d2,	// (0x00048123) popup_call2_audio_first_window_g

0xbad0,	// (0x00044721) popup_call2_audio_first_window_t1_ParamLimits

0xbad0,	// (0x00044721) popup_call2_audio_first_window_t1

0xbbd3,	// (0x00044824) popup_call2_audio_first_window_t4_ParamLimits

0xbbd3,	// (0x00044824) popup_call2_audio_first_window_t4

0xbcb6,	// (0x00044907) popup_call2_audio_first_window_t5_ParamLimits

0xbcb6,	// (0x00044907) popup_call2_audio_first_window_t5

0x0003,

0xf4dd,	// (0x0004812e) popup_call2_audio_first_window_t_ParamLimits

0xf4dd,	// (0x0004812e) popup_call2_audio_first_window_t

0x182f,	// (0x0003a480) bg_popup_call2_act_pane_g1

0xc37b,	// (0x00044fcc) popup_cale_lunar_info_window_t1

0xc389,	// (0x00044fda) popup_cale_lunar_info_window_t2

0xc397,	// (0x00044fe8) popup_cale_lunar_info_window_t3

0x15dc,	// (0x0003a22d) bg_popup_call2_bubble_pane

0xbdb7,	// (0x00044a08) bg_popup_call2_in_pane_cp01_ParamLimits

0xbdb7,	// (0x00044a08) bg_popup_call2_in_pane_cp01

0xb82a,	// (0x0004447b) call_type_pane_cp02

0xbdff,	// (0x00044a50) popup_call2_audio_out_window_g1_ParamLimits

0xbdff,	// (0x00044a50) popup_call2_audio_out_window_g1

0xbe2b,	// (0x00044a7c) popup_call2_audio_out_window_g2_ParamLimits

0xbe2b,	// (0x00044a7c) popup_call2_audio_out_window_g2

0xbe53,	// (0x00044aa4) popup_call2_audio_out_window_g3_ParamLimits

0xbe53,	// (0x00044aa4) popup_call2_audio_out_window_g3

0x0003,

0xf4e6,	// (0x00048137) popup_call2_audio_out_window_g_ParamLimits

0xf4e6,	// (0x00048137) popup_call2_audio_out_window_g

0xbe8e,	// (0x00044adf) popup_call2_audio_out_window_t1_ParamLimits

0xbe8e,	// (0x00044adf) popup_call2_audio_out_window_t1

0xbeed,	// (0x00044b3e) popup_call2_audio_out_window_t2_ParamLimits

0xbeed,	// (0x00044b3e) popup_call2_audio_out_window_t2

0xbf41,	// (0x00044b92) popup_call2_audio_out_window_t3_ParamLimits

0xbf41,	// (0x00044b92) popup_call2_audio_out_window_t3

0xbf57,	// (0x00044ba8) popup_call2_audio_out_window_t4_ParamLimits

0xbf57,	// (0x00044ba8) popup_call2_audio_out_window_t4

0xbf6d,	// (0x00044bbe) popup_call2_audio_out_window_t5_ParamLimits

0xbf6d,	// (0x00044bbe) popup_call2_audio_out_window_t5

0x0005,

0xf4ef,	// (0x00048140) popup_call2_audio_out_window_t_ParamLimits

0xf4ef,	// (0x00048140) popup_call2_audio_out_window_t

0xbfd1,	// (0x00044c22) bg_popup_call2_in_pane_ParamLimits

0xbfd1,	// (0x00044c22) bg_popup_call2_in_pane

0xc02d,	// (0x00044c7e) popup_call2_audio_in_window_g1_ParamLimits

0xc02d,	// (0x00044c7e) popup_call2_audio_in_window_g1

0xc065,	// (0x00044cb6) popup_call2_audio_in_window_g2_ParamLimits

0xc065,	// (0x00044cb6) popup_call2_audio_in_window_g2

0xc09d,	// (0x00044cee) popup_call2_audio_in_window_g3_ParamLimits

0xc09d,	// (0x00044cee) popup_call2_audio_in_window_g3

0x0003,

0xf4fc,	// (0x0004814d) popup_call2_audio_in_window_g_ParamLimits

0xf4fc,	// (0x0004814d) popup_call2_audio_in_window_g

0xc0f5,	// (0x00044d46) popup_call2_audio_in_window_t1_ParamLimits

0xc0f5,	// (0x00044d46) popup_call2_audio_in_window_t1

0xc175,	// (0x00044dc6) popup_call2_audio_in_window_t2_ParamLimits

0xc175,	// (0x00044dc6) popup_call2_audio_in_window_t2

0xc1f5,	// (0x00044e46) popup_call2_audio_in_window_t3_ParamLimits

0xc1f5,	// (0x00044e46) popup_call2_audio_in_window_t3

0xc20f,	// (0x00044e60) popup_call2_audio_in_window_t4_ParamLimits

0xc20f,	// (0x00044e60) popup_call2_audio_in_window_t4

0xc221,	// (0x00044e72) popup_call2_audio_in_window_t5_ParamLimits

0xc221,	// (0x00044e72) popup_call2_audio_in_window_t5

0xc236,	// (0x00044e87) popup_call2_audio_in_window_t6_ParamLimits

0xc236,	// (0x00044e87) popup_call2_audio_in_window_t6

0x0005,

0xf505,	// (0x00048156) popup_call2_audio_in_window_t_ParamLimits

0xf505,	// (0x00048156) popup_call2_audio_in_window_t

0x182f,	// (0x0003a480) bg_popup_call2_in_pane_g1

0xc3a5,	// (0x00044ff6) popup_cale_lunar_info_window_t4

0x0003,

0xf580,	// (0x000481d1) popup_cale_lunar_info_window_t

0x1837,	// (0x0003a488) bg_popup_call2_rect_pane_ParamLimits

0x1837,	// (0x0003a488) bg_popup_call2_rect_pane

0x15dc,	// (0x0003a22d) call2_cli_visual_graphic_pane

0x15dc,	// (0x0003a22d) call2_cli_visual_text_pane

0xeb6a,	// (0x000477bb) smil_status_volume_pane_g3

0x0002,

0x184f,	// (0x0003a4a0) call2_cli_visual_graphic_pane_g1

0x184f,	// (0x0003a4a0) call2_cli_visual_graphic_pane_g2

0x184f,	// (0x0003a4a0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf512,	// (0x00048163) call2_cli_visual_graphic_pane_g

0xc24b,	// (0x00044e9c) bg_popup_call2_rect_pane_g1

0x1a10,	// (0x0003a661) bg_popup_call2_rect_pane_g2

0xc253,	// (0x00044ea4) bg_popup_call2_rect_pane_g3

0xc25b,	// (0x00044eac) bg_popup_call2_rect_pane_g4

0xc263,	// (0x00044eb4) bg_popup_call2_rect_pane_g5

0xc26b,	// (0x00044ebc) bg_popup_call2_rect_pane_g6

0xc273,	// (0x00044ec4) bg_popup_call2_rect_pane_g7

0xc27b,	// (0x00044ecc) bg_popup_call2_rect_pane_g8

0xc283,	// (0x00044ed4) bg_popup_call2_rect_pane_g9

0x0008,

0xf519,	// (0x0004816a) bg_popup_call2_rect_pane_g

0xc28b,	// (0x00044edc) bg_popup_call2_bubble_pane_g1

0xc293,	// (0x00044ee4) bg_popup_call2_bubble_pane_g2

0xc29b,	// (0x00044eec) bg_popup_call2_bubble_pane_g3

0xc2a3,	// (0x00044ef4) bg_popup_call2_bubble_pane_g4

0xc2ab,	// (0x00044efc) bg_popup_call2_bubble_pane_g5

0xc2b3,	// (0x00044f04) bg_popup_call2_bubble_pane_g6

0xc2bb,	// (0x00044f0c) bg_popup_call2_bubble_pane_g7

0xc2c3,	// (0x00044f14) bg_popup_call2_bubble_pane_g8

0xc2cb,	// (0x00044f1c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52c,	// (0x0004817d) bg_popup_call2_bubble_pane_g

0x3dbf,	// (0x0003ca10) aid_cale_week_size_cell_pane

0x440d,	// (0x0003d05e) aid_cams_cif_uncrop_pane_ParamLimits

0x440d,	// (0x0003d05e) aid_cams_cif_uncrop_pane

0x45ae,	// (0x0003d1ff) aid_cams_size_cell_ParamLimits

0x45ae,	// (0x0003d1ff) aid_cams_size_cell

0x45c2,	// (0x0003d213) grid_cams_pane_ParamLimits

0x45d7,	// (0x0003d228) linegrid_cams_pane_ParamLimits

0x46a1,	// (0x0003d2f2) call_video_pane_t1

0x46bb,	// (0x0003d30c) call_video_pane_t2

0x0001,

0xf222,	// (0x00047e73) call_video_pane_t

0x4a40,	// (0x0003d691) aid_cale_month_size_cell_pane_ParamLimits

0x4a40,	// (0x0003d691) aid_cale_month_size_cell_pane

0xf5c4,	// (0x00048215) smil_status_volume_pane_g

0xeb77,	// (0x000477c8) volume_smil_pane_ParamLimits

0xb0d3,	// (0x00043d24) aid_popup2_width_pane

0x3d1b,	// (0x0003c96c) cell_qdial_pane_g4_ParamLimits

0x3d1b,	// (0x0003c96c) cell_qdial_pane_g4

0x59eb,	// (0x0003e63c) aid_blid_cardinal_pane_ParamLimits

0x59f7,	// (0x0003e648) aid_blid_destination_pane_ParamLimits

0x59f7,	// (0x0003e648) aid_blid_destination_pane

0x1837,	// (0x0003a488) bg_popup_call_poc_act_pane_ParamLimits

0x1837,	// (0x0003a488) bg_popup_call_poc_act_pane

0x1837,	// (0x0003a488) bg_popup_call_poc_inact_pane_ParamLimits

0x1837,	// (0x0003a488) bg_popup_call_poc_inact_pane

0xc2d3,	// (0x00044f24) bg_popup_call_poc_act_pane_g1

0xc2db,	// (0x00044f2c) bg_popup_call_poc_act_pane_g2

0xc2e3,	// (0x00044f34) bg_popup_call_poc_act_pane_g3

0xc2eb,	// (0x00044f3c) bg_popup_call_poc_act_pane_g4

0xc2f3,	// (0x00044f44) bg_popup_call_poc_act_pane_g5

0xc2fb,	// (0x00044f4c) bg_popup_call_poc_act_pane_g6

0xc303,	// (0x00044f54) bg_popup_call_poc_act_pane_g7

0xc30b,	// (0x00044f5c) bg_popup_call_poc_act_pane_g8

0x15dc,	// (0x0003a22d) main_usb_pane

0xeb22,	// (0x00047773) popup_cale_lunar_info_window

0x4900,	// (0x0003d551) im_reading_pane_t1_ParamLimits

0x1bfd,	// (0x0003a84e) list_im_pane_ParamLimits

0x1c0e,	// (0x0003a85f) scroll_pane_cp07_ParamLimits

0x15dc,	// (0x0003a22d) grid_highlight_pane_cp012

0x1837,	// (0x0003a488) mup_scale_pane_ParamLimits

0x613c,	// (0x0003ed8d) main_usb_pane_g1_ParamLimits

0x613c,	// (0x0003ed8d) main_usb_pane_g1

0x66e8,	// (0x0003f339) main_usb_pane_g2_ParamLimits

0x66e8,	// (0x0003f339) main_usb_pane_g2

0x0001,

0xf569,	// (0x000481ba) main_usb_pane_g_ParamLimits

0xf569,	// (0x000481ba) main_usb_pane_g

0x66fc,	// (0x0003f34d) main_usb_pane_t1_ParamLimits

0x66fc,	// (0x0003f34d) main_usb_pane_t1

0x670e,	// (0x0003f35f) main_usb_pane_t2_ParamLimits

0x670e,	// (0x0003f35f) main_usb_pane_t2

0x6720,	// (0x0003f371) main_usb_pane_t3_ParamLimits

0x6720,	// (0x0003f371) main_usb_pane_t3

0x6732,	// (0x0003f383) main_usb_pane_t4_ParamLimits

0x6732,	// (0x0003f383) main_usb_pane_t4

0x6744,	// (0x0003f395) main_usb_pane_t5_ParamLimits

0x6744,	// (0x0003f395) main_usb_pane_t5

0x6756,	// (0x0003f3a7) main_usb_pane_t6_ParamLimits

0x6756,	// (0x0003f3a7) main_usb_pane_t6

0x0005,

0xf56e,	// (0x000481bf) main_usb_pane_t_ParamLimits

0x5985,	// (0x0003e5d6) aid_text_placing

0x5997,	// (0x0003e5e8) main_location2_pane_t1_ParamLimits

0x59ad,	// (0x0003e5fe) main_location2_pane_t2_ParamLimits

0x59c3,	// (0x0003e614) main_location2_pane_t3_ParamLimits

0x59d9,	// (0x0003e62a) main_location2_pane_t4_ParamLimits

0x59d9,	// (0x0003e62a) main_location2_pane_t4

0xf375,	// (0x00047fc6) main_location2_pane_t_ParamLimits

0x1872,	// (0x0003a4c3) find_pinb_pane_g2_ParamLimits

0x1872,	// (0x0003a4c3) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00047d2b) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00047d2b) find_pinb_pane_g

0x187e,	// (0x0003a4cf) find_pinb_pane_t1_ParamLimits

0x1890,	// (0x0003a4e1) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00047d30) find_pinb_pane_t_ParamLimits

0x15dc,	// (0x0003a22d) main_call3_pane

0x4e3b,	// (0x0003da8c) cale_month_day_heading_pane_t1_ParamLimits

0x4ec1,	// (0x0003db12) cale_month_day_heading_pane_t2_ParamLimits

0x4f52,	// (0x0003dba3) cale_month_day_heading_pane_t3_ParamLimits

0x4fe3,	// (0x0003dc34) cale_month_day_heading_pane_t4_ParamLimits

0x5074,	// (0x0003dcc5) cale_month_day_heading_pane_t5_ParamLimits

0x5105,	// (0x0003dd56) cale_month_day_heading_pane_t6_ParamLimits

0x5196,	// (0x0003dde7) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00047eab) cale_month_day_heading_pane_t_ParamLimits

0x53f2,	// (0x0003e043) smil_status_volume_pane

0x6118,	// (0x0003ed69) postcard_address_pane_ParamLimits

0x6118,	// (0x0003ed69) postcard_address_pane

0x612a,	// (0x0003ed7b) postcard_message_pane_ParamLimits

0x612a,	// (0x0003ed7b) postcard_message_pane

0x66c6,	// (0x0003f317) call2_cli_visual_pane_t1_ParamLimits

0x66c6,	// (0x0003f317) call2_cli_visual_pane_t1

0x6dfe,	// (0x0003fa4f) postcard_message_pane_t1_ParamLimits

0x6dfe,	// (0x0003fa4f) postcard_message_pane_t1

0x6de7,	// (0x0003fa38) postcard_address_pane_t1_ParamLimits

0x6de7,	// (0x0003fa38) postcard_address_pane_t1

0x6dd5,	// (0x0003fa26) popup_call3_audio_in_window_ParamLimits

0x6dd5,	// (0x0003fa26) popup_call3_audio_in_window

0x6c64,	// (0x0003f8b5) bg_popup_call3_in_pane_ParamLimits

0x6c64,	// (0x0003f8b5) bg_popup_call3_in_pane

0x6cd6,	// (0x0003f927) popup_call3_audio_in_window_g1_ParamLimits

0x6cd6,	// (0x0003f927) popup_call3_audio_in_window_g1

0x6cf6,	// (0x0003f947) popup_call3_audio_in_window_g2_ParamLimits

0x6cf6,	// (0x0003f947) popup_call3_audio_in_window_g2

0x6d16,	// (0x0003f967) popup_call3_audio_in_window_g3_ParamLimits

0x6d16,	// (0x0003f967) popup_call3_audio_in_window_g3

0x0003,

0xf5cb,	// (0x0004821c) popup_call3_audio_in_window_g_ParamLimits

0xf5cb,	// (0x0004821c) popup_call3_audio_in_window_g

0x6d47,	// (0x0003f998) popup_call3_audio_in_window_t1_ParamLimits

0x6d47,	// (0x0003f998) popup_call3_audio_in_window_t1

0x6d85,	// (0x0003f9d6) popup_call3_audio_in_window_t2_ParamLimits

0x6d85,	// (0x0003f9d6) popup_call3_audio_in_window_t2

0x6dc3,	// (0x0003fa14) popup_call3_audio_in_window_t3_ParamLimits

0x6dc3,	// (0x0003fa14) popup_call3_audio_in_window_t3

0x0002,

0xf5d4,	// (0x00048225) popup_call3_audio_in_window_t_ParamLimits

0xf5d4,	// (0x00048225) popup_call3_audio_in_window_t

0x1aec,	// (0x0003a73d) bg_popup_call3_rect_pane

0xc24b,	// (0x00044e9c) bg_popup_call3_rect_pane_g1

0x1a10,	// (0x0003a661) bg_popup_call3_rect_pane_g2

0xc253,	// (0x00044ea4) bg_popup_call3_rect_pane_g3

0xc25b,	// (0x00044eac) bg_popup_call3_rect_pane_g4

0xc263,	// (0x00044eb4) bg_popup_call3_rect_pane_g5

0xc26b,	// (0x00044ebc) bg_popup_call3_rect_pane_g6

0xc273,	// (0x00044ec4) bg_popup_call3_rect_pane_g7

0x11c1,	// (0x00039e12) mup_visualizer_osc_pane

0x11c1,	// (0x00039e12) mup_visualizer_spec_pane

0x6c94,	// (0x0003f8e5) call3_video_qcif_pane_ParamLimits

0x6c94,	// (0x0003f8e5) call3_video_qcif_pane

0x6ca5,	// (0x0003f8f6) call3_video_qcif_uncrop_pane_ParamLimits

0x6ca5,	// (0x0003f8f6) call3_video_qcif_uncrop_pane

0x6cb1,	// (0x0003f902) call3_video_subqcif_pane_ParamLimits

0x6cb1,	// (0x0003f902) call3_video_subqcif_pane

0x6cc5,	// (0x0003f916) call3_video_subqcif_uncrop_pane_ParamLimits

0x6cc5,	// (0x0003f916) call3_video_subqcif_uncrop_pane

0x6d36,	// (0x0003f987) popup_call3_audio_in_window_g4_ParamLimits

0x6d36,	// (0x0003f987) popup_call3_audio_in_window_g4

0x11c1,	// (0x00039e12) mup_spec_half_pane

0x11c1,	// (0x00039e12) mup_spec_half_pane_cp

0x11c1,	// (0x00039e12) mup_osc_middle_pane

0x1b46,	// (0x0003a797) mup_visualizer_osc_pane_g1

0xc4f1,	// (0x00045142) mup_spec_bar_pane_ParamLimits

0xc4f1,	// (0x00045142) mup_spec_bar_pane

0x1b46,	// (0x0003a797) mup_spec_bar_pane_g1

0x1b46,	// (0x0003a797) mup_spec_bar_pane_g2

0x0001,

0xf3ef,	// (0x00048040) mup_spec_bar_pane_g

0x3dbf,	// (0x0003ca10) aid_cale_week_size_cell_pane_ParamLimits

0x3dd9,	// (0x0003ca2a) bg_cale_heading_pane_ParamLimits

0x1a4e,	// (0x0003a69f) bg_cale_pane_cp01_ParamLimits

0x3df1,	// (0x0003ca42) cale_week_corner_pane_ParamLimits

0x3e10,	// (0x0003ca61) cale_week_day_heading_pane_ParamLimits

0x3e2d,	// (0x0003ca7e) cale_week_scroll_pane_g1_ParamLimits

0x3e40,	// (0x0003ca91) cale_week_scroll_pane_g2_ParamLimits

0x3e58,	// (0x0003caa9) cale_week_scroll_pane_g3_ParamLimits

0x3e70,	// (0x0003cac1) cale_week_scroll_pane_g4_ParamLimits

0x3e88,	// (0x0003cad9) cale_week_scroll_pane_g5_ParamLimits

0x3ea0,	// (0x0003caf1) cale_week_scroll_pane_g6_ParamLimits

0x3eb8,	// (0x0003cb09) cale_week_scroll_pane_g7_ParamLimits

0x3ed0,	// (0x0003cb21) cale_week_scroll_pane_g8_ParamLimits

0x3eec,	// (0x0003cb3d) cale_week_scroll_pane_g9_ParamLimits

0x3f04,	// (0x0003cb55) cale_week_scroll_pane_g10_ParamLimits

0x3f1c,	// (0x0003cb6d) cale_week_scroll_pane_g11_ParamLimits

0x3f34,	// (0x0003cb85) cale_week_scroll_pane_g12_ParamLimits

0x3f4c,	// (0x0003cb9d) cale_week_scroll_pane_g13_ParamLimits

0x3f64,	// (0x0003cbb5) cale_week_scroll_pane_g14_ParamLimits

0x3f7c,	// (0x0003cbcd) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00047dbc) cale_week_scroll_pane_g_ParamLimits

0x3fb0,	// (0x0003cc01) cale_week_time_pane_ParamLimits

0x3fcc,	// (0x0003cc1d) grid_cale_week_pane_ParamLimits

0x1a6b,	// (0x0003a6bc) listscroll_cale_week_pane_t1

0x1a7d,	// (0x0003a6ce) scroll_pane_cp08_ParamLimits

0x4a95,	// (0x0003d6e6) cale_month_corner_pane_ParamLimits

0x1e3e,	// (0x0003aa8f) cale_month_pane_t1

0x4df1,	// (0x0003da42) cale_month_week_pane_ParamLimits

0x55e0,	// (0x0003e231) popup_call_status_window_g1_ParamLimits

0x55f4,	// (0x0003e245) popup_call_status_window_g2_ParamLimits

0x5608,	// (0x0003e259) popup_call_status_window_g3_ParamLimits

0xf2fc,	// (0x00047f4d) popup_call_status_window_g_ParamLimits

0x566e,	// (0x0003e2bf) aid_call2_pane

0x2fea,	// (0x0003bc3b) msg_header_pane_g1

0x6118,	// (0x0003ed69) postcard_address2_pane_ParamLimits

0x6118,	// (0x0003ed69) postcard_address2_pane

0x612a,	// (0x0003ed7b) postcard_message2_pane_ParamLimits

0x612a,	// (0x0003ed7b) postcard_message2_pane

0x6c20,	// (0x0003f871) message2_row_pane_ParamLimits

0x6c20,	// (0x0003f871) message2_row_pane

0x6c3a,	// (0x0003f88b) address2_row_pane_ParamLimits

0x6c3a,	// (0x0003f88b) address2_row_pane

0xc4bf,	// (0x00045110) postcard_message2_row_pane_g1

0xc4c7,	// (0x00045118) postcard_message2_row_pane_t1

0xc4bf,	// (0x00045110) address2_row_pane_g1

0xc4c7,	// (0x00045118) address2_row_pane_t1

0x43c9,	// (0x0003d01a) aid_size_cell_vorec

0x15dc,	// (0x0003a22d) main_rss_pane

0x6c4d,	// (0x0003f89e) rss_list_single_pane_ParamLimits

0x6c4d,	// (0x0003f89e) rss_list_single_pane

0xc4d5,	// (0x00045126) rss_list_single_pane_t1

0xc4e3,	// (0x00045134) rss_list_single_pane_t2

0x0001,

0xf5bf,	// (0x00048210) rss_list_single_pane_t

0x15dc,	// (0x0003a22d) main_camera2_pane

0x15dc,	// (0x0003a22d) main_video2_pane

0xeb8c,	// (0x000477dd) cams_zoom_pane_cp2_ParamLimits

0xeb8c,	// (0x000477dd) cams_zoom_pane_cp2

0xeb8c,	// (0x000477dd) image2_vga_pane_ParamLimits

0xeb8c,	// (0x000477dd) image2_vga_pane

0xeb9a,	// (0x000477eb) main_camera2_pane_g1_ParamLimits

0xeb9a,	// (0x000477eb) main_camera2_pane_g1

0xeb9a,	// (0x000477eb) main_camera2_pane_g2_ParamLimits

0xeb9a,	// (0x000477eb) main_camera2_pane_g2

0xeb9a,	// (0x000477eb) main_camera2_pane_g3_ParamLimits

0xeb9a,	// (0x000477eb) main_camera2_pane_g3

0xeb9a,	// (0x000477eb) main_camera2_pane_g4_ParamLimits

0xeb9a,	// (0x000477eb) main_camera2_pane_g4

0xeb9a,	// (0x000477eb) main_camera2_pane_g5_ParamLimits

0xeb9a,	// (0x000477eb) main_camera2_pane_g5

0xeb9a,	// (0x000477eb) main_camera2_pane_g6_ParamLimits

0xeb9a,	// (0x000477eb) main_camera2_pane_g6

0xeb9a,	// (0x000477eb) main_camera2_pane_g7_ParamLimits

0xeb9a,	// (0x000477eb) main_camera2_pane_g7

0xeb9a,	// (0x000477eb) main_camera2_pane_g8_ParamLimits

0xeb9a,	// (0x000477eb) main_camera2_pane_g8

0x0008,

0xf5db,	// (0x0004822c) main_camera2_pane_g_ParamLimits

0xf5db,	// (0x0004822c) main_camera2_pane_g

0x6e27,	// (0x0003fa78) main_camera2_pane_t1_ParamLimits

0x6e27,	// (0x0003fa78) main_camera2_pane_t1

0x6e27,	// (0x0003fa78) main_camera2_pane_t2_ParamLimits

0x6e27,	// (0x0003fa78) main_camera2_pane_t2

0x6e27,	// (0x0003fa78) main_camera2_pane_t3_ParamLimits

0x6e27,	// (0x0003fa78) main_camera2_pane_t3

0x6e27,	// (0x0003fa78) main_camera2_pane_t4_ParamLimits

0x6e27,	// (0x0003fa78) main_camera2_pane_t4

0x0006,

0xf5ee,	// (0x0004823f) main_camera2_pane_t_ParamLimits

0xf5ee,	// (0x0004823f) main_camera2_pane_t

0xc529,	// (0x0004517a) cams_zoom_pane_cp4_ParamLimits

0xc529,	// (0x0004517a) cams_zoom_pane_cp4

0xc537,	// (0x00045188) image2_cif_pane_ParamLimits

0xc537,	// (0x00045188) image2_cif_pane

0x20c4,	// (0x0003ad15) image2_subqcif_pane_ParamLimits

0x20c4,	// (0x0003ad15) image2_subqcif_pane

0x6e3b,	// (0x0003fa8c) main_video2_pane_g1_ParamLimits

0x6e3b,	// (0x0003fa8c) main_video2_pane_g1

0x6e3b,	// (0x0003fa8c) main_video2_pane_g2_ParamLimits

0x6e3b,	// (0x0003fa8c) main_video2_pane_g2

0x6e3b,	// (0x0003fa8c) main_video2_pane_g3_ParamLimits

0x6e3b,	// (0x0003fa8c) main_video2_pane_g3

0x6e3b,	// (0x0003fa8c) main_video2_pane_g4_ParamLimits

0x6e3b,	// (0x0003fa8c) main_video2_pane_g4

0x6e3b,	// (0x0003fa8c) main_video2_pane_g5_ParamLimits

0x6e3b,	// (0x0003fa8c) main_video2_pane_g5

0x6e3b,	// (0x0003fa8c) main_video2_pane_g6_ParamLimits

0x6e3b,	// (0x0003fa8c) main_video2_pane_g6

0x0005,

0xf5fd,	// (0x0004824e) main_video2_pane_g_ParamLimits

0xf5fd,	// (0x0004824e) main_video2_pane_g

0x6e49,	// (0x0003fa9a) main_video2_pane_t1_ParamLimits

0x6e49,	// (0x0003fa9a) main_video2_pane_t1

0x6e49,	// (0x0003fa9a) main_video2_pane_t2_ParamLimits

0x6e49,	// (0x0003fa9a) main_video2_pane_t2

0x6e49,	// (0x0003fa9a) main_video2_pane_t3_ParamLimits

0x6e49,	// (0x0003fa9a) main_video2_pane_t3

0x0002,

0xf60a,	// (0x0004825b) main_video2_pane_t_ParamLimits

0xf60a,	// (0x0004825b) main_video2_pane_t

0x6805,	// (0x0003f456) call_muted_g2

0x0001,

0xf5b1,	// (0x00048202) call_muted_g

0x15dc,	// (0x0003a22d) main_mup2_pane

0x5d1b,	// (0x0003e96c) main_mup2_pane_g1_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup2_pane_g1

0x5d1b,	// (0x0003e96c) main_mup2_pane_g2_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup2_pane_g2

0x1b46,	// (0x0003a797) main_mup_pane_g13_cp1

0x11c1,	// (0x00039e12) mup_volume_pane_cp1

0x5d1b,	// (0x0003e96c) main_mup2_pane_g4_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup2_pane_g4

0x5d1b,	// (0x0003e96c) main_mup2_pane_g5_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup2_pane_g5

0x5d1b,	// (0x0003e96c) main_mup2_pane_g6_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup2_pane_g6

0x5d1b,	// (0x0003e96c) main_mup2_pane_g7_ParamLimits

0x5d1b,	// (0x0003e96c) main_mup2_pane_g7

0x0006,

0xf611,	// (0x00048262) main_mup2_pane_g_ParamLimits

0xf611,	// (0x00048262) main_mup2_pane_g

0x5d29,	// (0x0003e97a) main_mup2_pane_t1_ParamLimits

0x5d29,	// (0x0003e97a) main_mup2_pane_t1

0x5d29,	// (0x0003e97a) main_mup2_pane_t2_ParamLimits

0x5d29,	// (0x0003e97a) main_mup2_pane_t2

0x5d29,	// (0x0003e97a) main_mup2_pane_t3_ParamLimits

0x5d29,	// (0x0003e97a) main_mup2_pane_t3

0x5d29,	// (0x0003e97a) main_mup2_pane_t4_ParamLimits

0x5d29,	// (0x0003e97a) main_mup2_pane_t4

0x5d29,	// (0x0003e97a) main_mup2_pane_t5_ParamLimits

0x5d29,	// (0x0003e97a) main_mup2_pane_t5

0x5d29,	// (0x0003e97a) main_mup2_pane_t6_ParamLimits

0x5d29,	// (0x0003e97a) main_mup2_pane_t6

0x0005,

0xf620,	// (0x00048271) main_mup2_pane_t_ParamLimits

0xf620,	// (0x00048271) main_mup2_pane_t

0x5d5f,	// (0x0003e9b0) mup2_visualizer_pane_ParamLimits

0x5d5f,	// (0x0003e9b0) mup2_visualizer_pane

0x5d5f,	// (0x0003e9b0) mup_progress_pane_cp_ParamLimits

0x5d5f,	// (0x0003e9b0) mup_progress_pane_cp

0xc545,	// (0x00045196) mup_volume_pane_cp_ParamLimits

0xc545,	// (0x00045196) mup_volume_pane_cp

0x18b1,	// (0x0003a502) mup2_visualizer_pane_g1_ParamLimits

0x18b1,	// (0x0003a502) mup2_visualizer_pane_g1

0x18bf,	// (0x0003a510) mup2_visualizer_pane_g2_ParamLimits

0x18bf,	// (0x0003a510) mup2_visualizer_pane_g2

0x18bf,	// (0x0003a510) mup2_visualizer_pane_g3_ParamLimits

0x18bf,	// (0x0003a510) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00047d35) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00047d35) mup2_visualizer_pane_g

0x64c6,	// (0x0003f117) aid_size_cell_fmradio

0x697f,	// (0x0003f5d0) aid_height_parent_landcape

0x1c9b,	// (0x0003a8ec) wml_content_pane_cp

0x1ca3,	// (0x0003a8f4) wml_tabs_pane

0x1cac,	// (0x0003a8fd) popup_wml_miniature_window

0x1cb4,	// (0x0003a905) scroll_pane_cp021

0x1cc8,	// (0x0003a919) wml_content_pane_comp8

0x15dc,	// (0x0003a22d) bg_popup_sub_pane_cp05

0xc55b,	// (0x000451ac) popup_wml_miniature_window_g1

0xc563,	// (0x000451b4) wml_miniature_view_pane

0x6e5d,	// (0x0003faae) aid_size_wml_view

0x6e65,	// (0x0003fab6) wml_miniature_view_pane_g1

0x6e6e,	// (0x0003fabf) wml_miniature_view_pane_g2

0x6e77,	// (0x0003fac8) wml_miniature_view_pane_g3

0x6e7f,	// (0x0003fad0) wml_miniature_view_pane_g4

0x6e87,	// (0x0003fad8) wml_miniature_view_pane_g5

0x6e8f,	// (0x0003fae0) wml_miniature_view_pane_g6

0x6e97,	// (0x0003fae8) wml_miniature_view_pane_g7

0x6e9f,	// (0x0003faf0) wml_miniature_view_pane_g8

0x0007,

0xf62d,	// (0x0004827e) wml_miniature_view_pane_g

0xc56b,	// (0x000451bc) background_graphic_ParamLimits

0xc56b,	// (0x000451bc) background_graphic

0xc577,	// (0x000451c8) wml_tabs_2_pane

0xc580,	// (0x000451d1) wml_tabs_3_pane_ParamLimits

0xc580,	// (0x000451d1) wml_tabs_3_pane

0xc592,	// (0x000451e3) wml_tabs_4_pane_ParamLimits

0xc592,	// (0x000451e3) wml_tabs_4_pane

0xc5a8,	// (0x000451f9) wml_tabs_5_pane_ParamLimits

0xc5a8,	// (0x000451f9) wml_tabs_5_pane

0xc5c2,	// (0x00045213) wml_tabs_pane_g2_ParamLimits

0xc5c2,	// (0x00045213) wml_tabs_pane_g2

0xc5d6,	// (0x00045227) wml_tabs_pane_g3_ParamLimits

0xc5d6,	// (0x00045227) wml_tabs_pane_g3

0x6ea7,	// (0x0003faf8) wml_tabs_2_active_pane_ParamLimits

0x6ea7,	// (0x0003faf8) wml_tabs_2_active_pane

0x6eb7,	// (0x0003fb08) wml_tabs_2_passive_pane_ParamLimits

0x6eb7,	// (0x0003fb08) wml_tabs_2_passive_pane

0x6ec7,	// (0x0003fb18) wml_tabs_3_active_pane_cp_ParamLimits

0x6ec7,	// (0x0003fb18) wml_tabs_3_active_pane_cp

0x6ed8,	// (0x0003fb29) wml_tabs_3_passive_pane_ParamLimits

0x6ed8,	// (0x0003fb29) wml_tabs_3_passive_pane

0x6ee9,	// (0x0003fb3a) wml_tabs_3_passive_pane_cp_ParamLimits

0x6ee9,	// (0x0003fb3a) wml_tabs_3_passive_pane_cp

0x6efa,	// (0x0003fb4b) tabs_4_active_pane

0x6f02,	// (0x0003fb53) tabs_4_passive_pane

0x6f0a,	// (0x0003fb5b) tabs_4_passive_pane_cp

0x6f12,	// (0x0003fb63) tabs_4_passive_pane_cp2

0x66e0,	// (0x0003f331) aid_height_text

0x5d5f,	// (0x0003e9b0) mup_volume_cont_pane_ParamLimits

0x5d5f,	// (0x0003e9b0) mup_volume_cont_pane

0x3ad3,	// (0x0003c724) aid_size_cell_pinb

0x11c1,	// (0x00039e12) aid_size_list_pinb

0x5d5f,	// (0x0003e9b0) mup2_volume_cont_pane_ParamLimits

0x5d5f,	// (0x0003e9b0) mup2_volume_cont_pane

0xebbc,	// (0x0004780d) mup2_volume_cont_pane_g1_ParamLimits

0xebbc,	// (0x0004780d) mup2_volume_cont_pane_g1

0x3847,	// (0x0003c498) aid_size_cell_touch_ParamLimits

0x3847,	// (0x0003c498) aid_size_cell_touch

0x3a33,	// (0x0003c684) touch_pane_ParamLimits

0x3a33,	// (0x0003c684) touch_pane

0x11c1,	// (0x00039e12) main_rss2_pane

0xc5f3,	// (0x00045244) listscroll_rss2_pane

0xc5fc,	// (0x0004524d) rss2_navigation_pane

0xc604,	// (0x00045255) list_rss2_pane

0x5816,	// (0x0003e467) scroll_pane_cp22

0xc60c,	// (0x0004525d) rss2_navigation_pane_g1

0xc615,	// (0x00045266) rss2_navigation_pane_g2

0xc61d,	// (0x0004526e) rss2_navigation_pane_g3

0x0002,

0xf63e,	// (0x0004828f) rss2_navigation_pane_g

0xc625,	// (0x00045276) rss2_navigation_pane_t1

0x6f1a,	// (0x0003fb6b) rss2_list_single_pane_ParamLimits

0x6f1a,	// (0x0003fb6b) rss2_list_single_pane

0xc633,	// (0x00045284) rss2_list_single_pane_t2

0xc641,	// (0x00045292) rss2_list_single_pane_t3_ParamLimits

0xc641,	// (0x00045292) rss2_list_single_pane_t3

0xc65e,	// (0x000452af) rss2_list_single_pane_t4

0x53dc,	// (0x0003e02d) smil_status_pane_g1

0x20c4,	// (0x0003ad15) main_image2_pane_ParamLimits

0x20c4,	// (0x0003ad15) main_image2_pane

0xeb9a,	// (0x000477eb) main_camera2_pane_g9_ParamLimits

0xeb9a,	// (0x000477eb) main_camera2_pane_g9

0x6e27,	// (0x0003fa78) main_camera2_pane_t5_ParamLimits

0x6e27,	// (0x0003fa78) main_camera2_pane_t5

0xeba8,	// (0x000477f9) main_camera2_pane_t6_ParamLimits

0xeba8,	// (0x000477f9) main_camera2_pane_t6

0x6f2e,	// (0x0003fb7f) main_image2_pane_g1_ParamLimits

0x6f2e,	// (0x0003fb7f) main_image2_pane_g1

0x6488,	// (0x0003f0d9) smil2_video_pane_ParamLimits

0x6488,	// (0x0003f0d9) smil2_video_pane

0xb0eb,	// (0x00043d3c) aid_zoom_text_primary_cp

0xb114,	// (0x00043d65) popup_preview_fixed_window

0x1bf5,	// (0x0003a846) im_reading_pane_g1

0x6e19,	// (0x0003fa6a) cams2_bc_adjust_pane_cp_ParamLimits

0x6e19,	// (0x0003fa6a) cams2_bc_adjust_pane_cp

0x5d5f,	// (0x0003e9b0) cams2_bc_adjust_pane_ParamLimits

0x5d5f,	// (0x0003e9b0) cams2_bc_adjust_pane

0x1b46,	// (0x0003a797) cams2_bc_adjust_pane_g1

0x11c1,	// (0x00039e12) cams2_slider_pane

0x1b46,	// (0x0003a797) cams2_slider_pane_g1

0x1b46,	// (0x0003a797) cams2_slider_pane_g2

0x0006,

0xf645,	// (0x00048296) cams2_slider_pane_g

0x3b0e,	// (0x0003c75f) calc_display_pane_ParamLimits

0x3b2a,	// (0x0003c77b) calc_paper_pane_ParamLimits

0x3b4b,	// (0x0003c79c) grid_calc_pane_ParamLimits

0xb2c4,	// (0x00043f15) popup_clock_digital_window_t1_ParamLimits

0x6321,	// (0x0003ef72) main_image_pane_t1

0x3af0,	// (0x0003c741) aid_size_cell_calc_ParamLimits

0x3af0,	// (0x0003c741) aid_size_cell_calc

0x69af,	// (0x0003f600) popup_blid_sat_info2_window_ParamLimits

0x69af,	// (0x0003f600) popup_blid_sat_info2_window

0xc66c,	// (0x000452bd) aid_size_cell_blid

0xc537,	// (0x00045188) bg_popup_window_pane_cp07

0xc689,	// (0x000452da) grid_popup_blid_pane

0xc691,	// (0x000452e2) heading_pane_cp05_ParamLimits

0xc691,	// (0x000452e2) heading_pane_cp05

0xc759,	// (0x000453aa) cell_popup_blid_pane_ParamLimits

0xc759,	// (0x000453aa) cell_popup_blid_pane

0xc779,	// (0x000453ca) cell_popup_blid_pane_g1

0xc781,	// (0x000453d2) cell_popup_blid_pane_t1

0x5d5f,	// (0x0003e9b0) mup2_indicator_pane_ParamLimits

0x5d5f,	// (0x0003e9b0) mup2_indicator_pane

0x11c1,	// (0x00039e12) mup2_visualizer_osc_pane

0xc545,	// (0x00045196) mup2_visualizer_spec_pane_ParamLimits

0xc545,	// (0x00045196) mup2_visualizer_spec_pane

0x11c1,	// (0x00039e12) mup2_spec_half_pane

0x11c1,	// (0x00039e12) mup2_spec_half_pane_cp

0x11c1,	// (0x00039e12) mup2_spec_bar_pane_ParamLimits

0x11c1,	// (0x00039e12) mup2_spec_bar_pane

0x1b46,	// (0x0003a797) mup2_spec_bar_pane_g1

0xc78f,	// (0x000453e0) mup2_spec_bar_pane_g2

0x0001,

0xf66b,	// (0x000482bc) mup2_spec_bar_pane_g

0x11c1,	// (0x00039e12) mup2_osc_middle_pane

0x1b46,	// (0x0003a797) mup2_visualizer_osc_pane_g1

0x11eb,	// (0x00039e3c) popup_number_entry_window_t1_ParamLimits

0x11fe,	// (0x00039e4f) popup_number_entry_window_t2_ParamLimits

0x1210,	// (0x00039e61) popup_number_entry_window_t3_ParamLimits

0x3a7b,	// (0x0003c6cc) popup_number_entry_window_t5_ParamLimits

0x3a7b,	// (0x0003c6cc) popup_number_entry_window_t5

0xf085,	// (0x00047cd6) popup_number_entry_window_t_ParamLimits

0x1222,	// (0x00039e73) text_title_cp2_ParamLimits

0xeae8,	// (0x00047739) aid_hotspot_pointer_text2_pane

0xeb0e,	// (0x0004775f) main_viewer_pane_g9_ParamLimits

0xeb0e,	// (0x0004775f) main_viewer_pane_g9

0x1e3e,	// (0x0003aa8f) cale_month_pane_t1_ParamLimits

0x1e64,	// (0x0003aab5) bg_cale_pane_ParamLimits

0x1e7c,	// (0x0003aacd) list_cale_pane_ParamLimits

0x1e8d,	// (0x0003aade) listscroll_cale_day_pane_t1

0x1e9f,	// (0x0003aaf0) scroll_pane_cp09_ParamLimits

0x5dc6,	// (0x0003ea17) main_mup_eq_pane_t1_ParamLimits

0x5dc6,	// (0x0003ea17) main_mup_eq_pane_t1

0x5dde,	// (0x0003ea2f) main_mup_eq_pane_t2_ParamLimits

0x5dde,	// (0x0003ea2f) main_mup_eq_pane_t2

0x5df4,	// (0x0003ea45) main_mup_eq_pane_t3_ParamLimits

0x5df4,	// (0x0003ea45) main_mup_eq_pane_t3

0x5e0a,	// (0x0003ea5b) main_mup_eq_pane_t4_ParamLimits

0x5e0a,	// (0x0003ea5b) main_mup_eq_pane_t4

0x5e20,	// (0x0003ea71) main_mup_eq_pane_t5_ParamLimits

0x5e20,	// (0x0003ea71) main_mup_eq_pane_t5

0x5e36,	// (0x0003ea87) main_mup_eq_pane_t6_ParamLimits

0x5e36,	// (0x0003ea87) main_mup_eq_pane_t6

0x5e48,	// (0x0003ea99) main_mup_eq_pane_t7_ParamLimits

0x5e48,	// (0x0003ea99) main_mup_eq_pane_t7

0x5e5a,	// (0x0003eaab) main_mup_eq_pane_t8_ParamLimits

0x5e5a,	// (0x0003eaab) main_mup_eq_pane_t8

0x5e6c,	// (0x0003eabd) main_mup_eq_pane_t9_ParamLimits

0x5e6c,	// (0x0003eabd) main_mup_eq_pane_t9

0x5e82,	// (0x0003ead3) main_mup_eq_pane_t10_ParamLimits

0x5e82,	// (0x0003ead3) main_mup_eq_pane_t10

0x0009,

0xf3fb,	// (0x0004804c) main_mup_eq_pane_t_ParamLimits

0xf3fb,	// (0x0004804c) main_mup_eq_pane_t

0x5f15,	// (0x0003eb66) mup_equalizer_pane_cp5_ParamLimits

0x5f27,	// (0x0003eb78) mup_equalizer_pane_cp6_ParamLimits

0x5f39,	// (0x0003eb8a) mup_equalizer_pane_cp7_ParamLimits

0x11c1,	// (0x00039e12) main_gallery_pane

0xc4fb,	// (0x0004514c) smil2_volume_pane

0xc503,	// (0x00045154) smil_status_volume_pane_g1_ParamLimits

0xc516,	// (0x00045167) smil_status_volume_pane_g2_ParamLimits

0xeb6a,	// (0x000477bb) smil_status_volume_pane_g3_ParamLimits

0xf5c4,	// (0x00048215) smil_status_volume_pane_g_ParamLimits

0xc537,	// (0x00045188) bg_popup_window_pane_cp07_ParamLimits

0xc674,	// (0x000452c5) blid_firmament_pane

0x20c4,	// (0x0003ad15) aid_size_cell_gallery_ParamLimits

0x20c4,	// (0x0003ad15) aid_size_cell_gallery

0x6f42,	// (0x0003fb93) grid_gallery_pane_ParamLimits

0x6f42,	// (0x0003fb93) grid_gallery_pane

0x6f58,	// (0x0003fba9) cell_gallery_pane_ParamLimits

0x6f58,	// (0x0003fba9) cell_gallery_pane

0x20c4,	// (0x0003ad15) bg_cell_gallery_focus_pane_ParamLimits

0x20c4,	// (0x0003ad15) bg_cell_gallery_focus_pane

0x18b1,	// (0x0003a502) cell_gallery_pane_g1_ParamLimits

0x18b1,	// (0x0003a502) cell_gallery_pane_g1

0x18b1,	// (0x0003a502) cell_gallery_pane_g2_ParamLimits

0x18b1,	// (0x0003a502) cell_gallery_pane_g2

0x18b1,	// (0x0003a502) cell_gallery_pane_g3_ParamLimits

0x18b1,	// (0x0003a502) cell_gallery_pane_g3

0x18bf,	// (0x0003a510) cell_gallery_pane_g4_ParamLimits

0x18bf,	// (0x0003a510) cell_gallery_pane_g4

0x0003,

0xf670,	// (0x000482c1) cell_gallery_pane_g_ParamLimits

0xf670,	// (0x000482c1) cell_gallery_pane_g

0xc799,	// (0x000453ea) bg_cell_gallery_focus_pane_g1

0xc7a1,	// (0x000453f2) bg_cell_gallery_focus_pane_g2

0xc7a9,	// (0x000453fa) bg_cell_gallery_focus_pane_g3

0xc7b1,	// (0x00045402) bg_cell_gallery_focus_pane_g4

0xc7b9,	// (0x0004540a) bg_cell_gallery_focus_pane_g5

0xc7c1,	// (0x00045412) bg_cell_gallery_focus_pane_g6

0xc7c9,	// (0x0004541a) bg_cell_gallery_focus_pane_g7

0xc7d1,	// (0x00045422) bg_cell_gallery_focus_pane_g8

0x0007,

0xf679,	// (0x000482ca) bg_cell_gallery_focus_pane_g

0xc7d9,	// (0x0004542a) aid_firma_cardinal

0xc7ed,	// (0x0004543e) blid_firmament_pane_t1

0xc804,	// (0x00045455) blid_firmament_pane_t2

0xc81b,	// (0x0004546c) blid_firmament_pane_t3

0xc832,	// (0x00045483) blid_firmament_pane_t4

0x0003,

0xf68a,	// (0x000482db) blid_firmament_pane_t

0xc849,	// (0x0004549a) blid_sat_info_pane

0x1b46,	// (0x0003a797) blid_sat_info_pane_g1

0x1b46,	// (0x0003a797) blid_sat_info_pane_g2

0x0001,

0xf3ef,	// (0x00048040) blid_sat_info_pane_g

0xc859,	// (0x000454aa) blid_sat_info_pane_t1

0xc867,	// (0x000454b8) smil2_volume_content_pane

0xc870,	// (0x000454c1) smil2_volume_pane_g1

0xc878,	// (0x000454c9) smil2_volume_content_pane_g1

0xc881,	// (0x000454d2) smil2_volume_content_pane_g2

0xc88a,	// (0x000454db) smil2_volume_content_pane_g3

0xc893,	// (0x000454e4) smil2_volume_content_pane_g4

0xc89c,	// (0x000454ed) smil2_volume_content_pane_g5

0xc8a5,	// (0x000454f6) smil2_volume_content_pane_g6

0xc8ae,	// (0x000454ff) smil2_volume_content_pane_g7

0xc8b7,	// (0x00045508) smil2_volume_content_pane_g8

0xc8c0,	// (0x00045511) smil2_volume_content_pane_g9

0xc8c9,	// (0x0004551a) smil2_volume_content_pane_g10

0x0009,

0xf693,	// (0x000482e4) smil2_volume_content_pane_g

0x4060,	// (0x0003ccb1) cale_week_day_heading_pane_t1_ParamLimits

0x408a,	// (0x0003ccdb) cale_week_day_heading_pane_t2_ParamLimits

0x40b9,	// (0x0003cd0a) cale_week_day_heading_pane_t3_ParamLimits

0x40e8,	// (0x0003cd39) cale_week_day_heading_pane_t4_ParamLimits

0x4117,	// (0x0003cd68) cale_week_day_heading_pane_t5_ParamLimits

0x4146,	// (0x0003cd97) cale_week_day_heading_pane_t6_ParamLimits

0x4175,	// (0x0003cdc6) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00047ddd) cale_week_day_heading_pane_t_ParamLimits

0x1a9a,	// (0x0003a6eb) bg_cale_side_pane_ParamLimits

0x419f,	// (0x0003cdf0) cale_week_time_pane_t1_ParamLimits

0x41d9,	// (0x0003ce2a) cale_week_time_pane_t2_ParamLimits

0x4213,	// (0x0003ce64) cale_week_time_pane_t3_ParamLimits

0x424d,	// (0x0003ce9e) cale_week_time_pane_t4_ParamLimits

0x4287,	// (0x0003ced8) cale_week_time_pane_t5_ParamLimits

0x42c1,	// (0x0003cf12) cale_week_time_pane_t6_ParamLimits

0x42fb,	// (0x0003cf4c) cale_week_time_pane_t7_ParamLimits

0x4335,	// (0x0003cf86) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00047dec) cale_week_time_pane_t_ParamLimits

0x436f,	// (0x0003cfc0) cell_cale_week_pane_g2_ParamLimits

0x1a9a,	// (0x0003a6eb) bg_cale_side_pane_cp01_ParamLimits

0x522b,	// (0x0003de7c) cale_month_week_pane_t1_ParamLimits

0x5244,	// (0x0003de95) cale_month_week_pane_t2_ParamLimits

0x525d,	// (0x0003deae) cale_month_week_pane_t3_ParamLimits

0x5276,	// (0x0003dec7) cale_month_week_pane_t4_ParamLimits

0x528f,	// (0x0003dee0) cale_month_week_pane_t5_ParamLimits

0x52a8,	// (0x0003def9) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00047eba) cale_month_week_pane_t_ParamLimits

0xb226,	// (0x00043e77) cell_cale_month_pane_g1_ParamLimits

0x11c1,	// (0x00039e12) main_cale_event_viewer_pane

0x11c1,	// (0x00039e12) listscroll_cale_event_viewer_pane

0xc8d2,	// (0x00045523) list_cale_ev_pane

0xc8da,	// (0x0004552b) scroll_pane_cp023

0x6f78,	// (0x0003fbc9) field_cale_ev_pane_ParamLimits

0x6f78,	// (0x0003fbc9) field_cale_ev_pane

0xc8e6,	// (0x00045537) field_cale_ev_content_pane_ParamLimits

0xc8e6,	// (0x00045537) field_cale_ev_content_pane

0xc8f2,	// (0x00045543) field_cale_ev_pane_g1_ParamLimits

0xc8f2,	// (0x00045543) field_cale_ev_pane_g1

0xc8fe,	// (0x0004554f) field_cale_ev_pane_g2_ParamLimits

0xc8fe,	// (0x0004554f) field_cale_ev_pane_g2

0xc916,	// (0x00045567) field_cale_ev_pane_g3_ParamLimits

0xc916,	// (0x00045567) field_cale_ev_pane_g3

0x0002,

0xf6a8,	// (0x000482f9) field_cale_ev_pane_g_ParamLimits

0xf6a8,	// (0x000482f9) field_cale_ev_pane_g

0xc92e,	// (0x0004557f) field_cale_ev_pane_t1_ParamLimits

0xc92e,	// (0x0004557f) field_cale_ev_pane_t1

0x3d6f,	// (0x0003c9c0) field_cale_ev_content_pane_t1_ParamLimits

0x3d6f,	// (0x0003c9c0) field_cale_ev_content_pane_t1

0x5fc1,	// (0x0003ec12) bg_button_pane_cp01

0x3daf,	// (0x0003ca00) listscroll_cale_week_pane_ParamLimits

0x1a45,	// (0x0003a696) popup_toolbar_window_cp01

0x1a6b,	// (0x0003a6bc) listscroll_cale_week_pane_t1_ParamLimits

0x3daf,	// (0x0003ca00) listscroll_cale_day_pane_ParamLimits

0x1a45,	// (0x0003a696) popup_toolbar_window_cp02

0x1e8d,	// (0x0003aade) listscroll_cale_day_pane_t1_ParamLimits

0x3daf,	// (0x0003ca00) main_cale_month_pane_ParamLimits

0xeb55,	// (0x000477a6) popup_toolbar_window_cp03_ParamLimits

0xeb55,	// (0x000477a6) popup_toolbar_window_cp03

0x62ff,	// (0x0003ef50) main_image_pane_g2_ParamLimits

0x62ff,	// (0x0003ef50) main_image_pane_g2

0x6310,	// (0x0003ef61) main_image_pane_g3_ParamLimits

0x6310,	// (0x0003ef61) main_image_pane_g3

0x0002,

0xf48d,	// (0x000480de) main_image_pane_g_ParamLimits

0xf48d,	// (0x000480de) main_image_pane_g

0x6321,	// (0x0003ef72) main_image_pane_t1_ParamLimits

0x6338,	// (0x0003ef89) main_image_pane_t2_ParamLimits

0x6338,	// (0x0003ef89) main_image_pane_t2

0x634a,	// (0x0003ef9b) main_image_pane_t3_ParamLimits

0x634a,	// (0x0003ef9b) main_image_pane_t3

0x6372,	// (0x0003efc3) main_image_pane_t4_ParamLimits

0x6372,	// (0x0003efc3) main_image_pane_t4

0x0003,

0xf494,	// (0x000480e5) main_image_pane_t_ParamLimits

0xf494,	// (0x000480e5) main_image_pane_t

0x6392,	// (0x0003efe3) popup_image_details_window_cp01

0x639a,	// (0x0003efeb) popup_toobar_trans_pane_cp01_ParamLimits

0x639a,	// (0x0003efeb) popup_toobar_trans_pane_cp01

0x6a78,	// (0x0003f6c9) popup_image_details_window_ParamLimits

0x6a78,	// (0x0003f6c9) popup_image_details_window

0xeb2a,	// (0x0004777b) popup_image_focus_window

0xeb8c,	// (0x000477dd) camera2_autofocus_pane_ParamLimits

0xeb8c,	// (0x000477dd) camera2_autofocus_pane

0x11c1,	// (0x00039e12) bg_popup_sub_pane_cp06

0xc945,	// (0x00045596) popup_image_focus_window_g1

0xc94d,	// (0x0004559e) popup_image_focus_window_g2

0xc955,	// (0x000455a6) popup_image_focus_window_g3

0xc95d,	// (0x000455ae) popup_image_focus_window_g4

0x0003,

0xf6af,	// (0x00048300) popup_image_focus_window_g

0xc965,	// (0x000455b6) popup_image_focus_window_t1

0xc973,	// (0x000455c4) popup_image_focus_window_t2

0xc982,	// (0x000455d3) popup_image_focus_window_t3

0x0002,

0xf6b8,	// (0x00048309) popup_image_focus_window_t

0x18b1,	// (0x0003a502) camera2_autofocus_pane_g1

0x20c4,	// (0x0003ad15) bg_tb_trans_pane_cp01

0xc990,	// (0x000455e1) popup_image_details_window_g1

0xc9a3,	// (0x000455f4) popup_image_details_window_g2

0x0002,

0xf6ca,	// (0x0004831b) popup_image_details_window_g

0xc9cc,	// (0x0004561d) popup_image_details_window_t1

0xc9de,	// (0x0004562f) popup_image_details_window_t2

0xc9f7,	// (0x00045648) popup_image_details_window_t3

0xca0b,	// (0x0004565c) popup_image_details_window_t4

0xca26,	// (0x00045677) popup_image_details_window_t5

0x0004,

0xf6d1,	// (0x00048322) popup_image_details_window_t

0x190f,	// (0x0003a560) bg_calc_paper_pane_ParamLimits

0x11c1,	// (0x00039e12) grid_highlight_pane_cp013

0xb124,	// (0x00043d75) list_calc_pane_ParamLimits

0xb136,	// (0x00043d87) scroll_pane_cp024

0x1927,	// (0x0003a578) bg_calc_display_pane_ParamLimits

0xb13e,	// (0x00043d8f) calc_display_pane_t1_ParamLimits

0xb153,	// (0x00043da4) calc_display_pane_t2_ParamLimits

0xb168,	// (0x00043db9) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00047d5d) calc_display_pane_t_ParamLimits

0x3cca,	// (0x0003c91b) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00047d7a) cell_calc_pane_g

0x3cd3,	// (0x0003c924) cell_calc_pane_t1

0x197c,	// (0x0003a5cd) grid_highlight_pane_cp02_ParamLimits

0x1992,	// (0x0003a5e3) toolbar_button_pane_cp01_ParamLimits

0x1992,	// (0x0003a5e3) toolbar_button_pane_cp01

0x63dc,	// (0x0003f02d) temp_image_control_pane_ParamLimits

0x63dc,	// (0x0003f02d) temp_image_control_pane

0x20c4,	// (0x0003ad15) main_mp3_pane

0xca40,	// (0x00045691) temp_image_control_pane_g1_ParamLimits

0xca40,	// (0x00045691) temp_image_control_pane_g1

0xca4e,	// (0x0004569f) temp_image_control_pane_g2_ParamLimits

0xca4e,	// (0x0004569f) temp_image_control_pane_g2

0xca60,	// (0x000456b1) temp_image_control_pane_g3_ParamLimits

0xca60,	// (0x000456b1) temp_image_control_pane_g3

0x6f92,	// (0x0003fbe3) temp_image_control_pane_g4_ParamLimits

0x6f92,	// (0x0003fbe3) temp_image_control_pane_g4

0x0003,

0xf6dc,	// (0x0004832d) temp_image_control_pane_g_ParamLimits

0xf6dc,	// (0x0004832d) temp_image_control_pane_g

0xca40,	// (0x00045691) main_mp3_pane_g1

0x6fa3,	// (0x0003fbf4) main_mp3_pane_g2

0x0007,

0xf6e5,	// (0x00048336) main_mp3_pane_g

0xca95,	// (0x000456e6) main_mp3_pane_t1

0x18bf,	// (0x0003a510) main_camera_pane_g8_ParamLimits

0x18bf,	// (0x0003a510) main_camera_pane_g8

0x4556,	// (0x0003d1a7) main_video_pane_g7_ParamLimits

0x4556,	// (0x0003d1a7) main_video_pane_g7

0x5d3d,	// (0x0003e98e) main_camera2_pane_t7_ParamLimits

0x5d3d,	// (0x0003e98e) main_camera2_pane_t7

0x1c5b,	// (0x0003a8ac) scroll_pane_cp025_ParamLimits

0x1c5b,	// (0x0003a8ac) scroll_pane_cp025

0x1c6f,	// (0x0003a8c0) scroll_pane_cp026_ParamLimits

0x1c6f,	// (0x0003a8c0) scroll_pane_cp026

0x1c7e,	// (0x0003a8cf) wml_content_pane_ParamLimits

0x11c1,	// (0x00039e12) main_touch_calib_pane

0x7065,	// (0x0003fcb6) main_touch_calib_pane_g1

0x7077,	// (0x0003fcc8) main_touch_calib_pane_g2

0x7089,	// (0x0003fcda) main_touch_calib_pane_g3

0x709b,	// (0x0003fcec) main_touch_calib_pane_g4

0x0003,

0xf703,	// (0x00048354) main_touch_calib_pane_g

0x70ad,	// (0x0003fcfe) main_touch_calib_pane_t1

0x70c5,	// (0x0003fd16) main_touch_calib_pane_t2

0x0004,

0xf70c,	// (0x0004835d) main_touch_calib_pane_t

0x5ac4,	// (0x0003e715) mup_progress_pane_cp02

0x5af9,	// (0x0003e74a) navi_pane_g1

0x5ba1,	// (0x0003e7f2) navi_pane_mp_t3

0x20c4,	// (0x0003ad15) main_mp3_pane_ParamLimits

0x6bd1,	// (0x0003f822) navi_pane_ParamLimits

0xca40,	// (0x00045691) main_mp3_pane_g1_ParamLimits

0x6fa3,	// (0x0003fbf4) main_mp3_pane_g2_ParamLimits

0x6faf,	// (0x0003fc00) main_mp3_pane_g3_ParamLimits

0x6faf,	// (0x0003fc00) main_mp3_pane_g3

0x6fbb,	// (0x0003fc0c) main_mp3_pane_g4_ParamLimits

0x6fbb,	// (0x0003fc0c) main_mp3_pane_g4

0x18b1,	// (0x0003a502) main_mp3_pane_g5_ParamLimits

0x18b1,	// (0x0003a502) main_mp3_pane_g5

0xca70,	// (0x000456c1) main_mp3_pane_g6_ParamLimits

0xca70,	// (0x000456c1) main_mp3_pane_g6

0xca7d,	// (0x000456ce) main_mp3_pane_g7_ParamLimits

0xca7d,	// (0x000456ce) main_mp3_pane_g7

0xca89,	// (0x000456da) main_mp3_pane_g8_ParamLimits

0xca89,	// (0x000456da) main_mp3_pane_g8

0xf6e5,	// (0x00048336) main_mp3_pane_g_ParamLimits

0x6fc7,	// (0x0003fc18) main_mp3_pane_t2

0x6fd5,	// (0x0003fc26) main_mp3_pane_t3

0xcaa3,	// (0x000456f4) main_mp3_pane_t4

0xcab1,	// (0x00045702) main_mp3_pane_t5

0x0005,

0xf6f6,	// (0x00048347) main_mp3_pane_t

0xcabf,	// (0x00045710) mup_progress_pane_cp01

0xb0eb,	// (0x00043d3c) aid_zoom_text_secondary2

0xc8d2,	// (0x00045523) list_cale_ev2_pane

0xc8da,	// (0x0004552b) scroll_pane_cp023_ParamLimits

0x7113,	// (0x0003fd64) field_cale_ev2_pane_ParamLimits

0x7113,	// (0x0003fd64) field_cale_ev2_pane

0xcac7,	// (0x00045718) field_cale_ev2_pane_g1_ParamLimits

0xcac7,	// (0x00045718) field_cale_ev2_pane_g1

0xcad3,	// (0x00045724) field_cale_ev2_pane_g2_ParamLimits

0xcad3,	// (0x00045724) field_cale_ev2_pane_g2

0xcaeb,	// (0x0004573c) field_cale_ev2_pane_g3_ParamLimits

0xcaeb,	// (0x0004573c) field_cale_ev2_pane_g3

0x0003,

0xf717,	// (0x00048368) field_cale_ev2_pane_g_ParamLimits

0xf717,	// (0x00048368) field_cale_ev2_pane_g

0xcb0f,	// (0x00045760) field_cale_ev2_pane_t1_ParamLimits

0xcb0f,	// (0x00045760) field_cale_ev2_pane_t1

0xcb26,	// (0x00045777) field_cale_ev2_pane_t2_ParamLimits

0xcb26,	// (0x00045777) field_cale_ev2_pane_t2

0x0001,

0xf720,	// (0x00048371) field_cale_ev2_pane_t_ParamLimits

0xf720,	// (0x00048371) field_cale_ev2_pane_t

0x60d4,	// (0x0003ed25) main_postcard_pane_g5_ParamLimits

0x60d4,	// (0x0003ed25) main_postcard_pane_g5

0x60e8,	// (0x0003ed39) main_postcard_pane_g6_ParamLimits

0x60e8,	// (0x0003ed39) main_postcard_pane_g6

0x20c4,	// (0x0003ad15) camera2_autofocus_pane_cp_ParamLimits

0x20c4,	// (0x0003ad15) camera2_autofocus_pane_cp

0x20c4,	// (0x0003ad15) main_mup3_pane

0x7169,	// (0x0003fdba) main_mup3_pane_g1_ParamLimits

0x7169,	// (0x0003fdba) main_mup3_pane_g1

0x718b,	// (0x0003fddc) main_mup3_pane_g2_ParamLimits

0x718b,	// (0x0003fddc) main_mup3_pane_g2

0x71fe,	// (0x0003fe4f) main_mup3_pane_g3_ParamLimits

0x71fe,	// (0x0003fe4f) main_mup3_pane_g3

0x723c,	// (0x0003fe8d) main_mup3_pane_g4_ParamLimits

0x723c,	// (0x0003fe8d) main_mup3_pane_g4

0x727a,	// (0x0003fecb) main_mup3_pane_g5_ParamLimits

0x727a,	// (0x0003fecb) main_mup3_pane_g5

0x72b8,	// (0x0003ff09) main_mup3_pane_g6_ParamLimits

0x72b8,	// (0x0003ff09) main_mup3_pane_g6

0x18bf,	// (0x0003a510) main_mup3_pane_g7_ParamLimits

0x18bf,	// (0x0003a510) main_mup3_pane_g7

0x0007,

0xf730,	// (0x00048381) main_mup3_pane_g_ParamLimits

0xf730,	// (0x00048381) main_mup3_pane_g

0x732e,	// (0x0003ff7f) main_mup3_pane_t1_ParamLimits

0x732e,	// (0x0003ff7f) main_mup3_pane_t1

0x7394,	// (0x0003ffe5) main_mup3_pane_t2_ParamLimits

0x7394,	// (0x0003ffe5) main_mup3_pane_t2

0x745a,	// (0x000400ab) main_mup3_pane_t4_ParamLimits

0x745a,	// (0x000400ab) main_mup3_pane_t4

0x74a8,	// (0x000400f9) main_mup3_pane_t5_ParamLimits

0x74a8,	// (0x000400f9) main_mup3_pane_t5

0x7556,	// (0x000401a7) main_mup3_pane_t6_ParamLimits

0x7556,	// (0x000401a7) main_mup3_pane_t6

0x0005,

0xf741,	// (0x00048392) main_mup3_pane_t_ParamLimits

0xf741,	// (0x00048392) main_mup3_pane_t

0x760a,	// (0x0004025b) mup3_progress_pane_ParamLimits

0x760a,	// (0x0004025b) mup3_progress_pane

0x7686,	// (0x000402d7) popup_mup3_control_window_ParamLimits

0x7686,	// (0x000402d7) popup_mup3_control_window

0xcb3b,	// (0x0004578c) popup_mup3_text_window

0x76b4,	// (0x00040305) mup3_progress_pane_t1

0x76d2,	// (0x00040323) mup3_progress_pane_t2

0xcb43,	// (0x00045794) mup3_progress_pane_t3

0x0002,

0xf74e,	// (0x0004839f) mup3_progress_pane_t

0xcb60,	// (0x000457b1) mup_progress_pane_cp03

0x11c1,	// (0x00039e12) bg_tb_trans_pane_cp04

0x76f0,	// (0x00040341) mup3_volume_pane

0x76f8,	// (0x00040349) popup_mup3_control_window_g1

0x7701,	// (0x00040352) mup3_volume_pane_g1

0x770a,	// (0x0004035b) mup3_volume_pane_g2

0x7713,	// (0x00040364) mup3_volume_pane_g3

0x0002,

0xf755,	// (0x000483a6) mup3_volume_pane_g

0x11c1,	// (0x00039e12) bg_tb_trans_pane_cp03

0xcb70,	// (0x000457c1) popup_mup3_text_window_g1

0xcb78,	// (0x000457c9) popup_mup3_text_window_t1

0x196f,	// (0x0003a5c0) list_calc_item_pane_g1_ParamLimits

0xc5ea,	// (0x0004523b) mup_volume_pane_cp_g1

0x70dd,	// (0x0003fd2e) main_touch_calib_pane_t3

0x70ef,	// (0x0003fd40) main_touch_calib_pane_t4

0x7101,	// (0x0003fd52) main_touch_calib_pane_t5

0xb0cb,	// (0x00043d1c) aid_cell_size_toolbar2

0xb0d3,	// (0x00043d24) aid_popup3_width_pane

0xb0db,	// (0x00043d2c) aid_zoom_text_msg_primary

0x1b1e,	// (0x0003a76f) vorec_t7

0x1933,	// (0x0003a584) bg_calc_paper_pane_g1_ParamLimits

0x193f,	// (0x0003a590) bg_calc_paper_pane_g2_ParamLimits

0x194b,	// (0x0003a59c) bg_calc_paper_pane_g3_ParamLimits

0x1957,	// (0x0003a5a8) bg_calc_paper_pane_g4_ParamLimits

0x1963,	// (0x0003a5b4) bg_calc_paper_pane_g5_ParamLimits

0x3c64,	// (0x0003c8b5) bg_calc_paper_pane_g6_ParamLimits

0x3c73,	// (0x0003c8c4) bg_calc_paper_pane_g7_ParamLimits

0x3c82,	// (0x0003c8d3) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00047d64) bg_calc_paper_pane_g_ParamLimits

0x3c91,	// (0x0003c8e2) calc_bg_paper_pane_g9_ParamLimits

0x446c,	// (0x0003d0bd) image_qvga_pane_ParamLimits

0x446c,	// (0x0003d0bd) image_qvga_pane

0x1837,	// (0x0003a488) bg_popup_sub_pane_cp04_ParamLimits

0x625d,	// (0x0003eeae) popup_mup_playback_window_g1_ParamLimits

0x6269,	// (0x0003eeba) popup_mup_playback_window_t1_ParamLimits

0x627e,	// (0x0003eecf) popup_mup_playback_window_t2_ParamLimits

0xf488,	// (0x000480d9) popup_mup_playback_window_t_ParamLimits

0x18bf,	// (0x0003a510) main_mup2_pane_g3_ParamLimits

0x18bf,	// (0x0003a510) main_mup2_pane_g3

0x473a,	// (0x0003d38b) popup_toolbar_window_cp04

0xb618,	// (0x00044269) popup_call2_audio_second_window_g3_ParamLimits

0xb618,	// (0x00044269) popup_call2_audio_second_window_g3

0xba56,	// (0x000446a7) popup_call2_audio_first_window_g4_ParamLimits

0xba56,	// (0x000446a7) popup_call2_audio_first_window_g4

0xc0d5,	// (0x00044d26) popup_call2_audio_in_window_g4_ParamLimits

0xc0d5,	// (0x00044d26) popup_call2_audio_in_window_g4

0x6293,	// (0x0003eee4) aid_area_sk_bg_cut_ParamLimits

0x6293,	// (0x0003eee4) aid_area_sk_bg_cut

0x62b1,	// (0x0003ef02) aid_area_sk_bg_cut_2_ParamLimits

0x62b1,	// (0x0003ef02) aid_area_sk_bg_cut_2

0x11c1,	// (0x00039e12) aid_placing_details_win

0x11c1,	// (0x00039e12) aid_placing_details_win_2

0x18b1,	// (0x0003a502) camera2_autofocus_pane_g1_ParamLimits

0x39d4,	// (0x0003c625) popup_fixed_preview_cale_window_ParamLimits

0x39d4,	// (0x0003c625) popup_fixed_preview_cale_window

0x5c5d,	// (0x0003e8ae) navi_slider_pane_g3

0x5c66,	// (0x0003e8b7) navi_slider_pane_g4

0x5c6f,	// (0x0003e8c0) navi_slider_pane_g5

0x5c5d,	// (0x0003e8ae) navi_slider_pane_g6

0xeacf,	// (0x00047720) navi_slider_pane_g7

0x5f56,	// (0x0003eba7) mup_scale_pane_g3

0x5f5f,	// (0x0003ebb0) mup_scale_pane_g4

0x5f68,	// (0x0003ebb9) mup_scale_pane_g5

0x5f71,	// (0x0003ebc2) mup_scale_pane_g6

0x5f7a,	// (0x0003ebcb) mup_scale_pane_g7

0x1b46,	// (0x0003a797) cams2_slider_pane_g3

0x1b46,	// (0x0003a797) cams2_slider_pane_g4

0x1b46,	// (0x0003a797) cams2_slider_pane_g5

0x1b46,	// (0x0003a797) cams2_slider_pane_g6

0x1b46,	// (0x0003a797) cams2_slider_pane_g7

0x1b46,	// (0x0003a797) camera2_autofocus_pane_cp_g1

0xc48e,	// (0x000450df) bg_popup_preview_window_pane_cp02_ParamLimits

0xc48e,	// (0x000450df) bg_popup_preview_window_pane_cp02

0xcb86,	// (0x000457d7) list_fp_cale_pane_ParamLimits

0xcb86,	// (0x000457d7) list_fp_cale_pane

0xcb92,	// (0x000457e3) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb92,	// (0x000457e3) popup_fixed_preview_cale_window_t1

0x771c,	// (0x0004036d) popup_fixed_preview_cale_window_t2_ParamLimits

0x771c,	// (0x0004036d) popup_fixed_preview_cale_window_t2

0x7731,	// (0x00040382) popup_fixed_preview_cale_window_t3_ParamLimits

0x7731,	// (0x00040382) popup_fixed_preview_cale_window_t3

0x0002,

0xf75c,	// (0x000483ad) popup_fixed_preview_cale_window_t_ParamLimits

0xf75c,	// (0x000483ad) popup_fixed_preview_cale_window_t

0x7746,	// (0x00040397) list_single_fp_cale_pane_ParamLimits

0x7746,	// (0x00040397) list_single_fp_cale_pane

0xcbb0,	// (0x00045801) list_single_fp_cale_pane_g1_ParamLimits

0xcbb0,	// (0x00045801) list_single_fp_cale_pane_g1

0xcbbc,	// (0x0004580d) list_single_fp_cale_pane_g2_ParamLimits

0xcbbc,	// (0x0004580d) list_single_fp_cale_pane_g2

0x0002,

0xf763,	// (0x000483b4) list_single_fp_cale_pane_g_ParamLimits

0xf763,	// (0x000483b4) list_single_fp_cale_pane_g

0xcbd5,	// (0x00045826) list_single_fp_cale_pane_t1_ParamLimits

0xcbd5,	// (0x00045826) list_single_fp_cale_pane_t1

0xcbe7,	// (0x00045838) list_single_fp_cale_pane_t2_ParamLimits

0xcbe7,	// (0x00045838) list_single_fp_cale_pane_t2

0x0001,

0xf76a,	// (0x000483bb) list_single_fp_cale_pane_t_ParamLimits

0xf76a,	// (0x000483bb) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11c1,	// (0x00039e12) main_dialer_pane

0x775a,	// (0x000403ab) aid_cell_size_keypad

0x11c1,	// (0x00039e12) dialer_ne_pane

0x11c1,	// (0x00039e12) grid_dialer_command_1_pane

0x11c1,	// (0x00039e12) grid_dialer_command_2_pane

0x11c1,	// (0x00039e12) grid_dialer_keypad_pane

0x7764,	// (0x000403b5) bg_popup_call_pane_cp06_ParamLimits

0x7764,	// (0x000403b5) bg_popup_call_pane_cp06

0x7764,	// (0x000403b5) dialer_ne_clear_pane_ParamLimits

0x7764,	// (0x000403b5) dialer_ne_clear_pane

0x1b46,	// (0x0003a797) dialer_ne_pane_g1

0x5d3d,	// (0x0003e98e) dialer_ne_pane_t1_ParamLimits

0x5d3d,	// (0x0003e98e) dialer_ne_pane_t1

0x7772,	// (0x000403c3) dialer_ne_pane_t2_ParamLimits

0x7772,	// (0x000403c3) dialer_ne_pane_t2

0x779a,	// (0x000403eb) dialer_ne_pane_t3_ParamLimits

0x779a,	// (0x000403eb) dialer_ne_pane_t3

0x0002,

0xf76f,	// (0x000483c0) dialer_ne_pane_t_ParamLimits

0xf76f,	// (0x000483c0) dialer_ne_pane_t

0x779a,	// (0x000403eb) dialer_ne_pane_t3_copy1_ParamLimits

0x779a,	// (0x000403eb) dialer_ne_pane_t3_copy1

0x77c7,	// (0x00040418) cell_dialer_keypad_pane_ParamLimits

0x77c7,	// (0x00040418) cell_dialer_keypad_pane

0x77cf,	// (0x00040420) cell_dialer_command_1_pane_ParamLimits

0x77cf,	// (0x00040420) cell_dialer_command_1_pane

0x77c7,	// (0x00040418) cell_dialer_command_2_pane_ParamLimits

0x77c7,	// (0x00040418) cell_dialer_command_2_pane

0x20c4,	// (0x0003ad15) bg_button_pane_cp02_ParamLimits

0x20c4,	// (0x0003ad15) bg_button_pane_cp02

0x18b1,	// (0x0003a502) cell_dialer_keypad_pane_g1_ParamLimits

0x18b1,	// (0x0003a502) cell_dialer_keypad_pane_g1

0x20c4,	// (0x0003ad15) bg_button_pane_cp03_ParamLimits

0x20c4,	// (0x0003ad15) bg_button_pane_cp03

0x18b1,	// (0x0003a502) cell_dialer_command_1_pane_g1_ParamLimits

0x18b1,	// (0x0003a502) cell_dialer_command_1_pane_g1

0x11c1,	// (0x00039e12) bg_button_pane_cp04

0x1b46,	// (0x0003a797) cell_dialer_command_2_pane_g1

0x11c1,	// (0x00039e12) bg_button_pane_cp06

0x1b46,	// (0x0003a797) dialer_ne_clear_pane_g1

0x5b05,	// (0x0003e756) navi_pane_g2

0x5b2e,	// (0x0003e77f) navi_pane_g3

0x0002,

0xf38b,	// (0x00047fdc) navi_pane_g

0x5baf,	// (0x0003e800) navi_pane_mv_g2

0x5bd6,	// (0x0003e827) navi_pane_mv_g5

0x5bde,	// (0x0003e82f) navi_pane_mv_t1

0x1927,	// (0x0003a578) main_clock2_pane

0x781d,	// (0x0004046e) main_clock2_list_pane_ParamLimits

0x781d,	// (0x0004046e) main_clock2_list_pane

0x784f,	// (0x000404a0) main_clock2_pane_t1_ParamLimits

0x784f,	// (0x000404a0) main_clock2_pane_t1

0x7889,	// (0x000404da) main_clock2_pane_t2_ParamLimits

0x7889,	// (0x000404da) main_clock2_pane_t2

0x0004,

0xf77b,	// (0x000483cc) main_clock2_pane_t_ParamLimits

0xf77b,	// (0x000483cc) main_clock2_pane_t

0x791d,	// (0x0004056e) popup_clock_analogue_window_cp03_ParamLimits

0x791d,	// (0x0004056e) popup_clock_analogue_window_cp03

0x7942,	// (0x00040593) popup_clock_digital_window_cp02_ParamLimits

0x7942,	// (0x00040593) popup_clock_digital_window_cp02

0x79b3,	// (0x00040604) main_clock2_list_single_pane_ParamLimits

0x79b3,	// (0x00040604) main_clock2_list_single_pane

0x1aec,	// (0x0003a73d) list_highlight_pane_cp05

0xcc4a,	// (0x0004589b) main_clock2_list_single_pane_t1

0x473a,	// (0x0003d38b) popup_toolbar_window_cp04_ParamLimits

0x18bf,	// (0x0003a510) camera2_autofocus_pane_g2_ParamLimits

0x18bf,	// (0x0003a510) camera2_autofocus_pane_g2

0x18bf,	// (0x0003a510) camera2_autofocus_pane_g3_ParamLimits

0x18bf,	// (0x0003a510) camera2_autofocus_pane_g3

0x18bf,	// (0x0003a510) camera2_autofocus_pane_g4_ParamLimits

0x18bf,	// (0x0003a510) camera2_autofocus_pane_g4

0x18bf,	// (0x0003a510) camera2_autofocus_pane_g5_ParamLimits

0x18bf,	// (0x0003a510) camera2_autofocus_pane_g5

0x0004,

0xf6bf,	// (0x00048310) camera2_autofocus_pane_g_ParamLimits

0xf6bf,	// (0x00048310) camera2_autofocus_pane_g

0x712b,	// (0x0003fd7c) camera2_autofocus_pane_cp_g2

0x7133,	// (0x0003fd84) camera2_autofocus_pane_cp_g3

0x713b,	// (0x0003fd8c) camera2_autofocus_pane_cp_g4

0x7143,	// (0x0003fd94) camera2_autofocus_pane_cp_g5

0x0004,

0xf725,	// (0x00048376) camera2_autofocus_pane_cp_g

0x11c1,	// (0x00039e12) popup_dialer_spcha_window

0x11c1,	// (0x00039e12) bg_popup_sub_pane_cp07

0x11c1,	// (0x00039e12) list_spcha_pane

0x11c1,	// (0x00039e12) list_single_spcha_pane_ParamLimits

0x11c1,	// (0x00039e12) list_single_spcha_pane

0x11c1,	// (0x00039e12) list_highlight_pane_cp06

0xcc58,	// (0x000458a9) list_single_spcha_pane_t1

0xbe7f,	// (0x00044ad0) popup_call2_audio_out_window_g4_ParamLimits

0xbe7f,	// (0x00044ad0) popup_call2_audio_out_window_g4

0x11c1,	// (0x00039e12) main_imed2_pane

0xeb32,	// (0x00047783) popup_imed_adjust2_window

0x6a8e,	// (0x0003f6df) popup_imed_trans_window_ParamLimits

0x6a8e,	// (0x0003f6df) popup_imed_trans_window

0xc6bd,	// (0x0004530e) popup_blid_sat_info2_window_t1

0xc6cb,	// (0x0004531c) popup_blid_sat_info2_window_t2

0x000a,

0xf654,	// (0x000482a5) popup_blid_sat_info2_window_t

0x7a5d,	// (0x000406ae) aid_size_cell_colour_35

0x7a7d,	// (0x000406ce) aid_size_cell_colour_112

0x7a9d,	// (0x000406ee) aid_size_cell_effect

0x5d5f,	// (0x0003e9b0) bg_tb_trans_pane_cp02

0x1f96,	// (0x0003abe7) heading_imed_pane

0x7abd,	// (0x0004070e) listscroll_imed_pane

0xcc68,	// (0x000458b9) heading_imed_pane_g1

0xcc70,	// (0x000458c1) heading_imed_pane_t1

0xcc7e,	// (0x000458cf) grid_imed_colour_35_pane_ParamLimits

0xcc7e,	// (0x000458cf) grid_imed_colour_35_pane

0x7ac9,	// (0x0004071a) grid_imed_effect_pane

0xcc91,	// (0x000458e2) list_imed_aspect_pane

0x7adc,	// (0x0004072d) scroll_pane_cp027_ParamLimits

0x7adc,	// (0x0004072d) scroll_pane_cp027

0x7ae8,	// (0x00040739) cell_imed_effect_pane_ParamLimits

0x7ae8,	// (0x00040739) cell_imed_effect_pane

0xcc99,	// (0x000458ea) cell_imed_colour_pane_ParamLimits

0xcc99,	// (0x000458ea) cell_imed_colour_pane

0xccd3,	// (0x00045924) cell_imed_colour_pane_g1_ParamLimits

0xccd3,	// (0x00045924) cell_imed_colour_pane_g1

0xcce4,	// (0x00045935) hgihlgiht_grid_pane_cp016_ParamLimits

0xcce4,	// (0x00045935) hgihlgiht_grid_pane_cp016

0x7b0d,	// (0x0004075e) cell_imed_effect_pane_g1

0x7b15,	// (0x00040766) grid_highlight_pane_cp017

0xccf5,	// (0x00045946) list_imed_single_pane_ParamLimits

0xccf5,	// (0x00045946) list_imed_single_pane

0x11c1,	// (0x00039e12) list_highlight_pane_cp07

0xcd08,	// (0x00045959) list_imed_aspect_pane_comp1_t1

0x5d5f,	// (0x0003e9b0) bg_tb_trans_pane_cp05

0xcd28,	// (0x00045979) popup_imed_adjust2_window_g1

0xcd4f,	// (0x000459a0) popup_imed_adjust2_window_t1

0xcd67,	// (0x000459b8) slider_imed_adjust_pane

0xcd7b,	// (0x000459cc) slider_imed_adjust_pane_g1

0xcd8b,	// (0x000459dc) slider_imed_adjust_pane_g2

0xcd9b,	// (0x000459ec) slider_imed_adjust_pane_g3

0xcdac,	// (0x000459fd) slider_imed_adjust_pane_g4

0x0003,

0xf798,	// (0x000483e9) slider_imed_adjust_pane_g

0x7b1e,	// (0x0004076f) aid_size_cell_clipart2

0x7b2a,	// (0x0004077b) grid_imed_clipart_pane

0xcdbd,	// (0x00045a0e) scroll_pane_cp031

0x7b34,	// (0x00040785) cell_imed_clipart_pane_ParamLimits

0x7b34,	// (0x00040785) cell_imed_clipart_pane

0x7b4c,	// (0x0004079d) cell_imed_clipart_pane_g1

0x11c1,	// (0x00039e12) grid_highlight_pane_cp014

0x7830,	// (0x00040481) main_clock2_pane_g1_ParamLimits

0x7830,	// (0x00040481) main_clock2_pane_g1

0x795e,	// (0x000405af) aid_call2_pane_cp10

0x7970,	// (0x000405c1) aid_call_pane_cp10

0x5a0b,	// (0x0003e65c) popup_clock_analogue_window_cp10_g1

0x5a0b,	// (0x0003e65c) popup_clock_analogue_window_cp10_g2

0x7982,	// (0x000405d3) popup_clock_analogue_window_cp10_g3

0x7982,	// (0x000405d3) popup_clock_analogue_window_cp10_g4

0x5a0b,	// (0x0003e65c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf786,	// (0x000483d7) popup_clock_analogue_window_cp10_g

0x7994,	// (0x000405e5) popup_clock_analogue_window_cp10_t1

0x79c5,	// (0x00040616) clock_digital_number_pane_cp10_ParamLimits

0x79c5,	// (0x00040616) clock_digital_number_pane_cp10

0x79dd,	// (0x0004062e) clock_digital_number_pane_cp11_ParamLimits

0x79dd,	// (0x0004062e) clock_digital_number_pane_cp11

0x79f5,	// (0x00040646) clock_digital_number_pane_cp12_ParamLimits

0x79f5,	// (0x00040646) clock_digital_number_pane_cp12

0x7a0d,	// (0x0004065e) clock_digital_number_pane_cp13_ParamLimits

0x7a0d,	// (0x0004065e) clock_digital_number_pane_cp13

0x7a25,	// (0x00040676) clock_digital_separator_pane_cp10_ParamLimits

0x7a25,	// (0x00040676) clock_digital_separator_pane_cp10

0x7a3d,	// (0x0004068e) popup_clock_digital_window_cp02_t1_ParamLimits

0x7a3d,	// (0x0004068e) popup_clock_digital_window_cp02_t1

0x182f,	// (0x0003a480) clock_digital_number_pane_cp10_g1

0x182f,	// (0x0003a480) clock_digital_number_pane_cp10_g2

0x0001,

0xf7a1,	// (0x000483f2) clock_digital_number_pane_cp10_g

0x182f,	// (0x0003a480) clock_digital_separator_pane_cp10_g1

0x182f,	// (0x0003a480) clock_digital_separator_pane_g2_cp10

0x5c1c,	// (0x0003e86d) navi_pane_vded_g4

0x5c25,	// (0x0003e876) navi_pane_vded_g5

0x5c2e,	// (0x0003e87f) navi_pane_vded_t1

0x11c1,	// (0x00039e12) main_vded_pane

0x7b55,	// (0x000407a6) main_vded_pane_g1

0x7b5f,	// (0x000407b0) main_vded_pane_g2

0x7b67,	// (0x000407b8) main_vded_pane_g3

0x0002,

0xf7a6,	// (0x000483f7) main_vded_pane_g

0x7b6f,	// (0x000407c0) main_vded_pane_t1

0x7b7d,	// (0x000407ce) main_vded_pane_t2

0x0001,

0xf7ad,	// (0x000483fe) main_vded_pane_t

0x7b8b,	// (0x000407dc) vded_slider_pane

0x7b93,	// (0x000407e4) vded_video_pane

0xcdc5,	// (0x00045a16) vded_video_pane_g1

0x7b9b,	// (0x000407ec) vded_video_pane_g2

0x1b46,	// (0x0003a797) vded_video_pane_g3

0x0002,

0xf7b2,	// (0x00048403) vded_video_pane_g

0xcdcf,	// (0x00045a20) vded_slider_pane_g1

0xc5ea,	// (0x0004523b) vded_slider_pane_g2

0xcdd8,	// (0x00045a29) vded_slider_pane_g3

0xcde1,	// (0x00045a32) vded_slider_pane_g4

0xcdea,	// (0x00045a3b) vded_slider_pane_g5

0x0004,

0xf7b9,	// (0x0004840a) vded_slider_pane_g

0x7670,	// (0x000402c1) mup3_rocker_pane_ParamLimits

0x7670,	// (0x000402c1) mup3_rocker_pane

0x7ba4,	// (0x000407f5) mup3_control_keys_pane_g1

0x7bac,	// (0x000407fd) mup3_control_keys_pane_g2

0x7bb4,	// (0x00040805) mup3_control_keys_pane_g3

0x7bbc,	// (0x0004080d) mup3_control_keys_pane_g4

0x0003,

0xf7c4,	// (0x00048415) mup3_control_keys_pane_g

0x3a07,	// (0x0003c658) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3a07,	// (0x0003c658) popup_toolbar2_fixed_window_cp01

0x769e,	// (0x000402ef) popup_toolbar2_fixed_window_cp02_ParamLimits

0x769e,	// (0x000402ef) popup_toolbar2_fixed_window_cp02

0xb78a,	// (0x000443db) popup_call2_audio_second_window_t4_ParamLimits

0xb78a,	// (0x000443db) popup_call2_audio_second_window_t4

0xbcec,	// (0x0004493d) popup_call2_audio_first_window_t6_ParamLimits

0xbcec,	// (0x0004493d) popup_call2_audio_first_window_t6

0xbf82,	// (0x00044bd3) popup_call2_audio_out_window_t6_ParamLimits

0xbf82,	// (0x00044bd3) popup_call2_audio_out_window_t6

0x11c1,	// (0x00039e12) main_vitu_pane

0x20c4,	// (0x0003ad15) aid_size_cell_itu_ParamLimits

0x20c4,	// (0x0003ad15) aid_size_cell_itu

0x20c4,	// (0x0003ad15) bg_popup_window_pane_cp08_ParamLimits

0x20c4,	// (0x0003ad15) bg_popup_window_pane_cp08

0x20c4,	// (0x0003ad15) field_vitu_entry_pane_ParamLimits

0x20c4,	// (0x0003ad15) field_vitu_entry_pane

0x20c4,	// (0x0003ad15) grid_vitu_function_pane_ParamLimits

0x20c4,	// (0x0003ad15) grid_vitu_function_pane

0x20c4,	// (0x0003ad15) grid_vitu_itu_pane_ParamLimits

0x20c4,	// (0x0003ad15) grid_vitu_itu_pane

0x7bcc,	// (0x0004081d) cell_vitu_itu_pane_ParamLimits

0x7bcc,	// (0x0004081d) cell_vitu_itu_pane

0x20c4,	// (0x0003ad15) cell_vitu_function_pane_ParamLimits

0x20c4,	// (0x0003ad15) cell_vitu_function_pane

0x20c4,	// (0x0003ad15) bg_popup_sub_pane_cp08_ParamLimits

0x20c4,	// (0x0003ad15) bg_popup_sub_pane_cp08

0x20b0,	// (0x0003ad01) field_vitu_entry_pane_t1_ParamLimits

0x20b0,	// (0x0003ad01) field_vitu_entry_pane_t1

0xcdf3,	// (0x00045a44) field_vitu_entry_pane_t2_ParamLimits

0xcdf3,	// (0x00045a44) field_vitu_entry_pane_t2

0x0001,

0xf7d2,	// (0x00048423) field_vitu_entry_pane_t_ParamLimits

0xf7d2,	// (0x00048423) field_vitu_entry_pane_t

0xc537,	// (0x00045188) bg_button_pane_cp05_ParamLimits

0xc537,	// (0x00045188) bg_button_pane_cp05

0xce10,	// (0x00045a61) cell_vitu_itu_pane_g1

0x5d29,	// (0x0003e97a) cell_vitu_itu_pane_t1_ParamLimits

0x5d29,	// (0x0003e97a) cell_vitu_itu_pane_t1

0x5d29,	// (0x0003e97a) cell_vitu_itu_pane_t2_ParamLimits

0x5d29,	// (0x0003e97a) cell_vitu_itu_pane_t2

0x0002,

0xf7d7,	// (0x00048428) cell_vitu_itu_pane_t_ParamLimits

0xf7d7,	// (0x00048428) cell_vitu_itu_pane_t

0x11c1,	// (0x00039e12) bg_button_pane_cp07

0x1b46,	// (0x0003a797) cell_vitu_function_pane_g1

0xb11c,	// (0x00043d6d) main_calc_pane_g1

0x386b,	// (0x0003c4bc) aid_visual_content_pane

0x11c1,	// (0x00039e12) main_vradio_pane

0x18b1,	// (0x0003a502) main_vradio_pane_g1_ParamLimits

0x18b1,	// (0x0003a502) main_vradio_pane_g1

0x18bf,	// (0x0003a510) main_vradio_pane_g2_ParamLimits

0x18bf,	// (0x0003a510) main_vradio_pane_g2

0x0001,

0xf7de,	// (0x0004842f) main_vradio_pane_g_ParamLimits

0xf7de,	// (0x0004842f) main_vradio_pane_g

0x20b0,	// (0x0003ad01) main_vradio_pane_t1_ParamLimits

0x20b0,	// (0x0003ad01) main_vradio_pane_t1

0x20b0,	// (0x0003ad01) main_vradio_pane_t2_ParamLimits

0x20b0,	// (0x0003ad01) main_vradio_pane_t2

0x5d3d,	// (0x0003e98e) main_vradio_pane_t3_ParamLimits

0x5d3d,	// (0x0003e98e) main_vradio_pane_t3

0x0002,

0xf7e3,	// (0x00048434) main_vradio_pane_t_ParamLimits

0xf7e3,	// (0x00048434) main_vradio_pane_t

0x20c4,	// (0x0003ad15) vradio_rocker_control_pane_ParamLimits

0x20c4,	// (0x0003ad15) vradio_rocker_control_pane

0x20c4,	// (0x0003ad15) vradio_station_info_pane_ParamLimits

0x20c4,	// (0x0003ad15) vradio_station_info_pane

0x20c4,	// (0x0003ad15) vradio_frequency_info_pane_ParamLimits

0x20c4,	// (0x0003ad15) vradio_frequency_info_pane

0x1b46,	// (0x0003a797) vradio_station_info_pane_g1

0x5d29,	// (0x0003e97a) vradio_station_info_pane_t1_ParamLimits

0x5d29,	// (0x0003e97a) vradio_station_info_pane_t1

0x5d3d,	// (0x0003e98e) vradio_station_info_pane_t2_ParamLimits

0x5d3d,	// (0x0003e98e) vradio_station_info_pane_t2

0x0001,

0xf7ea,	// (0x0004843b) vradio_station_info_pane_t_ParamLimits

0xf7ea,	// (0x0004843b) vradio_station_info_pane_t

0x11c1,	// (0x00039e12) vradio_tuning_pane

0x7be0,	// (0x00040831) vradio_rocker_control_pane_g1

0xce2c,	// (0x00045a7d) vradio_rocker_control_pane_g2

0x7be8,	// (0x00040839) vradio_rocker_control_pane_g3

0x7bf0,	// (0x00040841) vradio_rocker_control_pane_g4

0x7bf8,	// (0x00040849) vradio_rocker_control_pane_g5

0x0004,

0xf7ef,	// (0x00048440) vradio_rocker_control_pane_g

0x1b46,	// (0x0003a797) vradio_frequency_info_pane_g1

0x20b0,	// (0x0003ad01) vradio_frequency_info_pane_t1_ParamLimits

0x20b0,	// (0x0003ad01) vradio_frequency_info_pane_t1

0x7c00,	// (0x00040851) vradio_tuning_pane_g1

0x7c09,	// (0x0004085a) vradio_tuning_pane_t1

0xb0f3,	// (0x00043d44) area_side_right_pane_ParamLimits

0xb0f3,	// (0x00043d44) area_side_right_pane

0xc455,	// (0x000450a6) status_small_pane_g1

0xc45d,	// (0x000450ae) status_small_pane_g2

0xc466,	// (0x000450b7) status_small_pane_g3

0xc46f,	// (0x000450c0) status_small_pane_g4

0x0003,

0xf5b6,	// (0x00048207) status_small_pane_g

0xc478,	// (0x000450c9) status_small_pane_t1

0x11c1,	// (0x00039e12) main_video3_pane

0xce34,	// (0x00045a85) cams_zoom_vslider_pane

0xce3c,	// (0x00045a8d) image3_wide_pane_ParamLimits

0xce3c,	// (0x00045a8d) image3_wide_pane

0xce56,	// (0x00045aa7) image3_wide_small_pane

0xce60,	// (0x00045ab1) main_video3_pane_g1_ParamLimits

0xce60,	// (0x00045ab1) main_video3_pane_g1

0xce7c,	// (0x00045acd) main_video3_pane_g2_ParamLimits

0xce7c,	// (0x00045acd) main_video3_pane_g2

0x0001,

0xf7fa,	// (0x0004844b) main_video3_pane_g_ParamLimits

0xf7fa,	// (0x0004844b) main_video3_pane_g

0xce98,	// (0x00045ae9) main_video3_pane_t1_ParamLimits

0xce98,	// (0x00045ae9) main_video3_pane_t1

0xcec3,	// (0x00045b14) main_video3_pane_t2_ParamLimits

0xcec3,	// (0x00045b14) main_video3_pane_t2

0xceee,	// (0x00045b3f) main_video3_pane_t3_ParamLimits

0xceee,	// (0x00045b3f) main_video3_pane_t3

0x0002,

0xf7ff,	// (0x00048450) main_video3_pane_t_ParamLimits

0xf7ff,	// (0x00048450) main_video3_pane_t

0xcf19,	// (0x00045b6a) cams_zoom_vslider_pane_g1

0xcf22,	// (0x00045b73) cams_zoom_vslider_pane_g2

0x0001,

0xf806,	// (0x00048457) cams_zoom_vslider_pane_g

0xcf2a,	// (0x00045b7b) small_slider_vertical_pane

0x1b46,	// (0x0003a797) small_slider_vertical_pane_g1

0x1b46,	// (0x0003a797) small_slider_vertical_pane_g2

0xcf32,	// (0x00045b83) small_slider_vertical_pane_g3

0x0002,

0xf80b,	// (0x0004845c) small_slider_vertical_pane_g

0x11c1,	// (0x00039e12) main_hwr_training_pane

0xcf3b,	// (0x00045b8c) hwr_training_instruct_pane_ParamLimits

0xcf3b,	// (0x00045b8c) hwr_training_instruct_pane

0x7c18,	// (0x00040869) hwr_training_navi_pane_ParamLimits

0x7c18,	// (0x00040869) hwr_training_navi_pane

0x7c2f,	// (0x00040880) hwr_training_write_pane_ParamLimits

0x7c2f,	// (0x00040880) hwr_training_write_pane

0x11c1,	// (0x00039e12) bg_frame_shadow_pane

0xcf6a,	// (0x00045bbb) hwr_training_write_pane_g1

0xcf72,	// (0x00045bc3) hwr_training_write_pane_g2

0xcf7a,	// (0x00045bcb) hwr_training_write_pane_g3

0xcf82,	// (0x00045bd3) hwr_training_write_pane_g4

0xcf8a,	// (0x00045bdb) hwr_training_write_pane_g5

0xcf92,	// (0x00045be3) hwr_training_write_pane_g6

0xcf9a,	// (0x00045beb) hwr_training_write_pane_g7

0x0006,

0xf812,	// (0x00048463) hwr_training_write_pane_g

0xebd2,	// (0x00047823) hwr_training_navi_pane_g1_ParamLimits

0xebd2,	// (0x00047823) hwr_training_navi_pane_g1

0xebe4,	// (0x00047835) hwr_training_navi_pane_g2_ParamLimits

0xebe4,	// (0x00047835) hwr_training_navi_pane_g2

0xebf6,	// (0x00047847) hwr_training_navi_pane_g3_ParamLimits

0xebf6,	// (0x00047847) hwr_training_navi_pane_g3

0xec06,	// (0x00047857) hwr_training_navi_pane_g4_ParamLimits

0xec06,	// (0x00047857) hwr_training_navi_pane_g4

0x0004,

0xf821,	// (0x00048472) hwr_training_navi_pane_g_ParamLimits

0xf821,	// (0x00048472) hwr_training_navi_pane_g

0xec13,	// (0x00047864) hwr_training_navi_pane_t1

0x7c6f,	// (0x000408c0) list_single_hwr_training_instruct_pane_ParamLimits

0x7c6f,	// (0x000408c0) list_single_hwr_training_instruct_pane

0xcfa2,	// (0x00045bf3) list_single_hwr_training_instruct_pane_t1

0xc799,	// (0x000453ea) bg_frame_shadow_pane_g1

0xcfb1,	// (0x00045c02) bg_frame_shadow_pane_g2

0xcfb9,	// (0x00045c0a) bg_frame_shadow_pane_g3

0xcfc1,	// (0x00045c12) bg_frame_shadow_pane_g4

0xcfc9,	// (0x00045c1a) bg_frame_shadow_pane_g5

0xcfd1,	// (0x00045c22) bg_frame_shadow_pane_g6

0xcfd9,	// (0x00045c2a) bg_frame_shadow_pane_g7

0x19e8,	// (0x0003a639) bg_frame_shadow_pane_g8

0x0007,

0xf82c,	// (0x0004847d) bg_frame_shadow_pane_g

0x11c1,	// (0x00039e12) main_video_tele_dialer_pane

0x7c87,	// (0x000408d8) aid_size_cell_video_keypad_ParamLimits

0x7c87,	// (0x000408d8) aid_size_cell_video_keypad

0x7ca1,	// (0x000408f2) grid_video_dialer_keypad_pane_ParamLimits

0x7ca1,	// (0x000408f2) grid_video_dialer_keypad_pane

0x7ce3,	// (0x00040934) video_down_pane_cp_ParamLimits

0x7ce3,	// (0x00040934) video_down_pane_cp

0x7d13,	// (0x00040964) cell_video_dialer_keypad_pane_ParamLimits

0x7d13,	// (0x00040964) cell_video_dialer_keypad_pane

0xcfe1,	// (0x00045c32) bg_button_pane_cp08_ParamLimits

0xcfe1,	// (0x00045c32) bg_button_pane_cp08

0x7d35,	// (0x00040986) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7d35,	// (0x00040986) cell_video_dialer_keypad_pane_g1

0x765a,	// (0x000402ab) mup3_rocker2_pane_ParamLimits

0x765a,	// (0x000402ab) mup3_rocker2_pane

0x1b46,	// (0x0003a797) mup3_rocker2_pane_g1

0x6987,	// (0x0003f5d8) main_dialer2_pane

0x11c1,	// (0x00039e12) main_mp4_pane

0xec3f,	// (0x00047890) main_mp4_pane_g1_ParamLimits

0xec3f,	// (0x00047890) main_mp4_pane_g1

0xec3f,	// (0x00047890) main_mp4_pane_g2_ParamLimits

0xec3f,	// (0x00047890) main_mp4_pane_g2

0x7d70,	// (0x000409c1) main_mp4_pane_g3_ParamLimits

0x7d70,	// (0x000409c1) main_mp4_pane_g3

0xec4d,	// (0x0004789e) main_mp4_pane_g4_ParamLimits

0xec4d,	// (0x0004789e) main_mp4_pane_g4

0xec7b,	// (0x000478cc) main_mp4_pane_g5_ParamLimits

0xec7b,	// (0x000478cc) main_mp4_pane_g5

0x0007,

0xf84c,	// (0x0004849d) main_mp4_pane_g_ParamLimits

0xf84c,	// (0x0004849d) main_mp4_pane_g

0xecef,	// (0x00047940) main_mp4_pane_t1_ParamLimits

0xecef,	// (0x00047940) main_mp4_pane_t1

0xed47,	// (0x00047998) main_mp4_pane_t2_ParamLimits

0xed47,	// (0x00047998) main_mp4_pane_t2

0xcfed,	// (0x00045c3e) main_mp4_pane_t3_ParamLimits

0xcfed,	// (0x00045c3e) main_mp4_pane_t3

0xed99,	// (0x000479ea) main_mp4_pane_t4_ParamLimits

0xed99,	// (0x000479ea) main_mp4_pane_t4

0x0003,

0xf85d,	// (0x000484ae) main_mp4_pane_t_ParamLimits

0xf85d,	// (0x000484ae) main_mp4_pane_t

0xedd9,	// (0x00047a2a) mp4_progress_pane_ParamLimits

0xedd9,	// (0x00047a2a) mp4_progress_pane

0xee1d,	// (0x00047a6e) mp4_rocker_pane_ParamLimits

0xee1d,	// (0x00047a6e) mp4_rocker_pane

0xd01b,	// (0x00045c6c) mp4_progress_pane_t1

0xd032,	// (0x00045c83) mp4_progress_pane_t2

0x0001,

0xf866,	// (0x000484b7) mp4_progress_pane_t

0xd049,	// (0x00045c9a) mup_progress_pane_cp04

0x1b46,	// (0x0003a797) mp4_rocker_pane_g1

0x7da0,	// (0x000409f1) aid_cell_size_keypad2_ParamLimits

0x7da0,	// (0x000409f1) aid_cell_size_keypad2

0x7db8,	// (0x00040a09) dialer2_ne_pane_ParamLimits

0x7db8,	// (0x00040a09) dialer2_ne_pane

0x20c4,	// (0x0003ad15) grid_dialer2_keypad_pane_ParamLimits

0x20c4,	// (0x0003ad15) grid_dialer2_keypad_pane

0xc537,	// (0x00045188) bg_popup_call_pane_cp07_ParamLimits

0xc537,	// (0x00045188) bg_popup_call_pane_cp07

0x18db,	// (0x0003a52c) dialer2_ne_pane_t1_ParamLimits

0x18db,	// (0x0003a52c) dialer2_ne_pane_t1

0x7dd3,	// (0x00040a24) cell_dialer2_keypad_pane_ParamLimits

0x7dd3,	// (0x00040a24) cell_dialer2_keypad_pane

0xd055,	// (0x00045ca6) bg_button_pane_pane_cp04_ParamLimits

0xd055,	// (0x00045ca6) bg_button_pane_pane_cp04

0x18b1,	// (0x0003a502) cell_dialer2_keypad_pane_g1_ParamLimits

0x18b1,	// (0x0003a502) cell_dialer2_keypad_pane_g1

0x4628,	// (0x0003d279) aid_placing_vt_set_content_ParamLimits

0x4628,	// (0x0003d279) aid_placing_vt_set_content

0x464a,	// (0x0003d29b) aid_placing_vt_set_title_ParamLimits

0x464a,	// (0x0003d29b) aid_placing_vt_set_title

0x11c1,	// (0x00039e12) main_image3_pane

0x7e29,	// (0x00040a7a) area_side_right_pane_cp01_ParamLimits

0x7e29,	// (0x00040a7a) area_side_right_pane_cp01

0xec3f,	// (0x00047890) main_image3_pane_g1_ParamLimits

0xec3f,	// (0x00047890) main_image3_pane_g1

0x7e40,	// (0x00040a91) main_image3_pane_g2_ParamLimits

0x7e40,	// (0x00040a91) main_image3_pane_g2

0x7e66,	// (0x00040ab7) main_image3_pane_g3_ParamLimits

0x7e66,	// (0x00040ab7) main_image3_pane_g3

0x7e8c,	// (0x00040add) main_image3_pane_g4_ParamLimits

0x7e8c,	// (0x00040add) main_image3_pane_g4

0x0003,

0xf875,	// (0x000484c6) main_image3_pane_g_ParamLimits

0xf875,	// (0x000484c6) main_image3_pane_g

0x7eb2,	// (0x00040b03) main_image3_pane_t1_ParamLimits

0x7eb2,	// (0x00040b03) main_image3_pane_t1

0x7f0a,	// (0x00040b5b) main_image3_pane_t2_ParamLimits

0x7f0a,	// (0x00040b5b) main_image3_pane_t2

0x7f5c,	// (0x00040bad) main_image3_pane_t3_ParamLimits

0x7f5c,	// (0x00040bad) main_image3_pane_t3

0x0003,

0xf87e,	// (0x000484cf) main_image3_pane_t_ParamLimits

0xf87e,	// (0x000484cf) main_image3_pane_t

0x20c4,	// (0x0003ad15) grid_sctrl_middle_pane_cp01_ParamLimits

0x20c4,	// (0x0003ad15) grid_sctrl_middle_pane_cp01

0x7fdc,	// (0x00040c2d) cell_sctrl_middle_pane_cp01_ParamLimits

0x7fdc,	// (0x00040c2d) cell_sctrl_middle_pane_cp01

0x7ff9,	// (0x00040c4a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7ff9,	// (0x00040c4a) cell_sctrl_middle_pane_cp01_g1

0x11c1,	// (0x00039e12) main_call4_pane

0x800f,	// (0x00040c60) aid_size_button_call4_ParamLimits

0x800f,	// (0x00040c60) aid_size_button_call4

0x803c,	// (0x00040c8d) call4_windows_pane_ParamLimits

0x803c,	// (0x00040c8d) call4_windows_pane

0x8052,	// (0x00040ca3) grid_call4_button_pane_ParamLimits

0x8052,	// (0x00040ca3) grid_call4_button_pane

0xd089,	// (0x00045cda) call4_windows_conf_pane

0xd09c,	// (0x00045ced) popup_call4_audio_first_window_ParamLimits

0xd09c,	// (0x00045ced) popup_call4_audio_first_window

0xd0dc,	// (0x00045d2d) popup_call4_audio_second_window_ParamLimits

0xd0dc,	// (0x00045d2d) popup_call4_audio_second_window

0xd0ee,	// (0x00045d3f) popup_call4_audio_wait_window_ParamLimits

0xd0ee,	// (0x00045d3f) popup_call4_audio_wait_window

0x8079,	// (0x00040cca) cell_call4_button_pane_ParamLimits

0x8079,	// (0x00040cca) cell_call4_button_pane

0x809e,	// (0x00040cef) bg_button_pane_cp09_ParamLimits

0x809e,	// (0x00040cef) bg_button_pane_cp09

0x80aa,	// (0x00040cfb) cell_call4_button_pane_g1_ParamLimits

0x80aa,	// (0x00040cfb) cell_call4_button_pane_g1

0x80d0,	// (0x00040d21) cell_call4_button_pane_t1_ParamLimits

0x80d0,	// (0x00040d21) cell_call4_button_pane_t1

0xd102,	// (0x00045d53) popup_call4_audio_conf_window_ParamLimits

0xd102,	// (0x00045d53) popup_call4_audio_conf_window

0x76b4,	// (0x00040305) mup3_progress_pane_t1_ParamLimits

0x76d2,	// (0x00040323) mup3_progress_pane_t2_ParamLimits

0xcb43,	// (0x00045794) mup3_progress_pane_t3_ParamLimits

0xf74e,	// (0x0004839f) mup3_progress_pane_t_ParamLimits

0xcb60,	// (0x000457b1) mup_progress_pane_cp03_ParamLimits

0x7bc4,	// (0x00040815) mup3_control_keys_pane_g4_copy1

0xee07,	// (0x00047a58) mp4_rocker2_pane_ParamLimits

0xee07,	// (0x00047a58) mp4_rocker2_pane

0xd116,	// (0x00045d67) mp4_rocker2_pane_g1

0xd11e,	// (0x00045d6f) mp4_rocker2_pane_g2

0xee9f,	// (0x00047af0) mp4_rocker2_pane_g3

0xeea7,	// (0x00047af8) mp4_rocker2_pane_g4

0xeeaf,	// (0x00047b00) mp4_rocker2_pane_g5

0x0004,

0xf887,	// (0x000484d8) mp4_rocker2_pane_g

0x11c1,	// (0x00039e12) main_camera4_pane

0x11c1,	// (0x00039e12) main_video4_pane

0x7cb5,	// (0x00040906) main_video_tele_dialer_pane_t1_ParamLimits

0x7cb5,	// (0x00040906) main_video_tele_dialer_pane_t1

0x7ccc,	// (0x0004091d) main_video_tele_dialer_pane_t2_ParamLimits

0x7ccc,	// (0x0004091d) main_video_tele_dialer_pane_t2

0x0001,

0xf83d,	// (0x0004848e) main_video_tele_dialer_pane_t_ParamLimits

0xf83d,	// (0x0004848e) main_video_tele_dialer_pane_t

0x810e,	// (0x00040d5f) cam4_autofocus_pane_ParamLimits

0x810e,	// (0x00040d5f) cam4_autofocus_pane

0x8122,	// (0x00040d73) cam4_image_uncrop_pane_ParamLimits

0x8122,	// (0x00040d73) cam4_image_uncrop_pane

0x8139,	// (0x00040d8a) cam4_indicators_pane_ParamLimits

0x8139,	// (0x00040d8a) cam4_indicators_pane

0x815d,	// (0x00040dae) main_camera4_pane_g1_ParamLimits

0x815d,	// (0x00040dae) main_camera4_pane_g1

0x8169,	// (0x00040dba) main_camera4_pane_g2_ParamLimits

0x8169,	// (0x00040dba) main_camera4_pane_g2

0x8169,	// (0x00040dba) main_camera4_pane_g3_ParamLimits

0x8169,	// (0x00040dba) main_camera4_pane_g3

0x8175,	// (0x00040dc6) main_camera4_pane_g4_ParamLimits

0x8175,	// (0x00040dc6) main_camera4_pane_g4

0x8181,	// (0x00040dd2) main_camera4_pane_g5_ParamLimits

0x8181,	// (0x00040dd2) main_camera4_pane_g5

0x0005,

0xf892,	// (0x000484e3) main_camera4_pane_g_ParamLimits

0xf892,	// (0x000484e3) main_camera4_pane_g

0x819e,	// (0x00040def) main_camera4_pane_t1_ParamLimits

0x819e,	// (0x00040def) main_camera4_pane_t1

0x18b1,	// (0x0003a502) bg_tb_trans_pane_cp06

0xeed9,	// (0x00047b2a) cam4_indicators_pane_g1

0xeee9,	// (0x00047b3a) cam4_indicators_pane_g2

0x0002,

0xf8ad,	// (0x000484fe) cam4_indicators_pane_g

0xef09,	// (0x00047b5a) cam4_indicators_pane_t1

0x81f3,	// (0x00040e44) main_video4_pane_g1_ParamLimits

0x81f3,	// (0x00040e44) main_video4_pane_g1

0x8205,	// (0x00040e56) main_video4_pane_g2_ParamLimits

0x8205,	// (0x00040e56) main_video4_pane_g2

0x8205,	// (0x00040e56) main_video4_pane_g3_ParamLimits

0x8205,	// (0x00040e56) main_video4_pane_g3

0x8214,	// (0x00040e65) main_video4_pane_g4_ParamLimits

0x8214,	// (0x00040e65) main_video4_pane_g4

0x0004,

0xf8b4,	// (0x00048505) main_video4_pane_g_ParamLimits

0xf8b4,	// (0x00048505) main_video4_pane_g

0x8232,	// (0x00040e83) vid4_indicators_pane_ParamLimits

0x8232,	// (0x00040e83) vid4_indicators_pane

0x825a,	// (0x00040eab) video4_image_uncrop_cif_pane_ParamLimits

0x825a,	// (0x00040eab) video4_image_uncrop_cif_pane

0x8272,	// (0x00040ec3) video4_image_uncrop_nhd_pane_ParamLimits

0x8272,	// (0x00040ec3) video4_image_uncrop_nhd_pane

0x8286,	// (0x00040ed7) video4_image_uncrop_vga_pane_ParamLimits

0x8286,	// (0x00040ed7) video4_image_uncrop_vga_pane

0x20c4,	// (0x0003ad15) bg_tb_trans_pane_cp07

0xeed9,	// (0x00047b2a) vid4_indicators_pane_g1

0xef2b,	// (0x00047b7c) vid4_indicators_pane_g2

0xef3b,	// (0x00047b8c) vid4_indicators_pane_g3

0x0004,

0xf8bf,	// (0x00048510) vid4_indicators_pane_g

0xef68,	// (0x00047bb9) vid4_indicators_pane_t1

0x829e,	// (0x00040eef) cam4_autofocus_pane_g1

0x82a6,	// (0x00040ef7) cam4_autofocus_pane_g2

0x82ae,	// (0x00040eff) cam4_autofocus_pane_g3

0x0002,

0xf8ca,	// (0x0004851b) cam4_autofocus_pane_g

0x82b6,	// (0x00040f07) cam4_autofocus_pane_g3_copy1

0x7cf7,	// (0x00040948) video_down_pane_cp_t1

0x7d05,	// (0x00040956) video_down_pane_cp_t2

0x0001,

0xf842,	// (0x00048493) video_down_pane_cp_t

0x20c4,	// (0x0003ad15) popup_vitu2_window_ParamLimits

0x20c4,	// (0x0003ad15) popup_vitu2_window

0x82be,	// (0x00040f0f) aid_size_cell2_itu2_ParamLimits

0x82be,	// (0x00040f0f) aid_size_cell2_itu2

0x82e4,	// (0x00040f35) aid_size_cell_itu2_ParamLimits

0x82e4,	// (0x00040f35) aid_size_cell_itu2

0x7764,	// (0x000403b5) bg_popup_window_pane_cp09_ParamLimits

0x7764,	// (0x000403b5) bg_popup_window_pane_cp09

0x8336,	// (0x00040f87) field_vitu2_entry_pane_ParamLimits

0x8336,	// (0x00040f87) field_vitu2_entry_pane

0x8350,	// (0x00040fa1) grid_vitu2_function_pane_ParamLimits

0x8350,	// (0x00040fa1) grid_vitu2_function_pane

0x838b,	// (0x00040fdc) grid_vitu2_itu_pane_ParamLimits

0x838b,	// (0x00040fdc) grid_vitu2_itu_pane

0x83f5,	// (0x00041046) cell_vitu2_itu_pane_ParamLimits

0x83f5,	// (0x00041046) cell_vitu2_itu_pane

0x841d,	// (0x0004106e) cell_vitu2_function_pane_ParamLimits

0x841d,	// (0x0004106e) cell_vitu2_function_pane

0xd126,	// (0x00045d77) bg_popup_call_pane_cp08_ParamLimits

0xd126,	// (0x00045d77) bg_popup_call_pane_cp08

0xd13d,	// (0x00045d8e) field_vitu2_entry_pane_g1

0xd149,	// (0x00045d9a) field_vitu2_entry_pane_g2

0x0002,

0xf8d1,	// (0x00048522) field_vitu2_entry_pane_g

0x304e,	// (0x0003bc9f) field_vitu2_entry_pane_t1_ParamLimits

0x304e,	// (0x0003bc9f) field_vitu2_entry_pane_t1

0xd155,	// (0x00045da6) field_vitu2_entry_pane_t2_ParamLimits

0xd155,	// (0x00045da6) field_vitu2_entry_pane_t2

0x0001,

0xf8d8,	// (0x00048529) field_vitu2_entry_pane_t_ParamLimits

0xf8d8,	// (0x00048529) field_vitu2_entry_pane_t

0x845c,	// (0x000410ad) bg_button_pane_cp010_ParamLimits

0x845c,	// (0x000410ad) bg_button_pane_cp010

0xef82,	// (0x00047bd3) cell_vitu2_itu_pane_g1

0x8478,	// (0x000410c9) cell_vitu2_itu_pane_t1_ParamLimits

0x8478,	// (0x000410c9) cell_vitu2_itu_pane_t1

0x307c,	// (0x0003bccd) cell_vitu2_itu_pane_t2_ParamLimits

0x307c,	// (0x0003bccd) cell_vitu2_itu_pane_t2

0x0002,

0xf8e2,	// (0x00048533) cell_vitu2_itu_pane_t_ParamLimits

0xf8e2,	// (0x00048533) cell_vitu2_itu_pane_t

0x20c4,	// (0x0003ad15) bg_button_pane_cp011

0x84d6,	// (0x00041127) cell_vitu2_function_pane_g1

0x11c1,	// (0x00039e12) main_myfav_hc_pane

0x7fa8,	// (0x00040bf9) popup_image3_note_pane_ParamLimits

0x7fa8,	// (0x00040bf9) popup_image3_note_pane

0x7fc2,	// (0x00040c13) popup_image3_tool_bar_pane_ParamLimits

0x7fc2,	// (0x00040c13) popup_image3_tool_bar_pane

0x310a,	// (0x0003bd5b) cell_vitu2_itu_pane_t3_ParamLimits

0x310a,	// (0x0003bd5b) cell_vitu2_itu_pane_t3

0x11c1,	// (0x00039e12) bg_popup_trans_pane

0xd17a,	// (0x00045dcb) grid_image3_tool_bar_pane

0xd184,	// (0x00045dd5) bg_popup_trans_pane_g1

0x1d64,	// (0x0003a9b5) bg_popup_trans_pane_g2

0xd18c,	// (0x00045ddd) bg_popup_trans_pane_g3

0xd194,	// (0x00045de5) bg_popup_trans_pane_g4

0xd19c,	// (0x00045ded) bg_popup_trans_pane_g5

0xd1a4,	// (0x00045df5) bg_popup_trans_pane_g6

0xd1ac,	// (0x00045dfd) bg_popup_trans_pane_g7

0xd1b4,	// (0x00045e05) bg_popup_trans_pane_g8

0x1d44,	// (0x0003a995) bg_popup_trans_pane_g9

0x0008,

0xf8e9,	// (0x0004853a) bg_popup_trans_pane_g

0xd1bc,	// (0x00045e0d) cell_image3_tool_bar_pane_ParamLimits

0xd1bc,	// (0x00045e0d) cell_image3_tool_bar_pane

0x1b46,	// (0x0003a797) cell_image3_tool_bar_pane_g1

0x11c1,	// (0x00039e12) bg_popup_trans_pane_cp1

0xd1d0,	// (0x00045e21) popup_image3_note_pane_t1

0xd1de,	// (0x00045e2f) popup_image3_note_pane_t2

0xd1ec,	// (0x00045e3d) popup_image3_note_pane_t3

0x0002,

0xf8fc,	// (0x0004854d) popup_image3_note_pane_t

0xd1fa,	// (0x00045e4b) popup_image3_note_pane_t3_copy1

0x84e9,	// (0x0004113a) bg_myfav_hc_instruction_pane_ParamLimits

0x84e9,	// (0x0004113a) bg_myfav_hc_instruction_pane

0x84fb,	// (0x0004114c) cell_myfav_contact_pane_ParamLimits

0x84fb,	// (0x0004114c) cell_myfav_contact_pane

0x8515,	// (0x00041166) cell_myfav_contact_pane_cp1_ParamLimits

0x8515,	// (0x00041166) cell_myfav_contact_pane_cp1

0x852b,	// (0x0004117c) cell_myfav_contact_pane_cp2_ParamLimits

0x852b,	// (0x0004117c) cell_myfav_contact_pane_cp2

0x8541,	// (0x00041192) cell_myfav_contact_pane_cp3_ParamLimits

0x8541,	// (0x00041192) cell_myfav_contact_pane_cp3

0x8556,	// (0x000411a7) cell_myfav_contact_pane_cp4_ParamLimits

0x8556,	// (0x000411a7) cell_myfav_contact_pane_cp4

0x856a,	// (0x000411bb) cell_myfav_contact_pane_cp5_ParamLimits

0x856a,	// (0x000411bb) cell_myfav_contact_pane_cp5

0x857e,	// (0x000411cf) cell_myfav_contact_pane_cp6_ParamLimits

0x857e,	// (0x000411cf) cell_myfav_contact_pane_cp6

0x8592,	// (0x000411e3) cell_myfav_contact_pane_cp7_ParamLimits

0x8592,	// (0x000411e3) cell_myfav_contact_pane_cp7

0xd208,	// (0x00045e59) listscroll_gen_pane_cp05

0x85aa,	// (0x000411fb) main_myfav_hc_pane_g1_ParamLimits

0x85aa,	// (0x000411fb) main_myfav_hc_pane_g1

0x85c0,	// (0x00041211) main_myfav_hc_pane_g2_ParamLimits

0x85c0,	// (0x00041211) main_myfav_hc_pane_g2

0x0002,

0xf903,	// (0x00048554) main_myfav_hc_pane_g_ParamLimits

0xf903,	// (0x00048554) main_myfav_hc_pane_g

0x85ea,	// (0x0004123b) main_myfav_hc_pane_t1_ParamLimits

0x85ea,	// (0x0004123b) main_myfav_hc_pane_t1

0xd211,	// (0x00045e62) main_myfav_hc_pane_t2_ParamLimits

0xd211,	// (0x00045e62) main_myfav_hc_pane_t2

0xd223,	// (0x00045e74) main_myfav_hc_pane_t3_ParamLimits

0xd223,	// (0x00045e74) main_myfav_hc_pane_t3

0x85ff,	// (0x00041250) main_myfav_hc_pane_t4_ParamLimits

0x85ff,	// (0x00041250) main_myfav_hc_pane_t4

0x0004,

0xf90a,	// (0x0004855b) main_myfav_hc_pane_t_ParamLimits

0xf90a,	// (0x0004855b) main_myfav_hc_pane_t

0x1b46,	// (0x0003a797) bg_myfav_hc_instruction_pane_g1

0xd235,	// (0x00045e86) cell_myfav_contact_pane_g1_ParamLimits

0xd235,	// (0x00045e86) cell_myfav_contact_pane_g1

0xd235,	// (0x00045e86) cell_myfav_contact_pane_g2_ParamLimits

0xd235,	// (0x00045e86) cell_myfav_contact_pane_g2

0xd241,	// (0x00045e92) cell_myfav_contact_pane_g3_ParamLimits

0xd241,	// (0x00045e92) cell_myfav_contact_pane_g3

0x18bf,	// (0x0003a510) cell_myfav_contact_pane_g4_ParamLimits

0x18bf,	// (0x0003a510) cell_myfav_contact_pane_g4

0xd24e,	// (0x00045e9f) cell_myfav_contact_pane_g5_ParamLimits

0xd24e,	// (0x00045e9f) cell_myfav_contact_pane_g5

0x0004,

0xf915,	// (0x00048566) cell_myfav_contact_pane_g_ParamLimits

0xf915,	// (0x00048566) cell_myfav_contact_pane_g

0x85d6,	// (0x00041227) main_myfav_hc_pane_g3_ParamLimits

0x85d6,	// (0x00041227) main_myfav_hc_pane_g3

0x398d,	// (0x0003c5de) popup_adpt_find_window

0x8623,	// (0x00041274) afind_page_pane_ParamLimits

0x8623,	// (0x00041274) afind_page_pane

0x8638,	// (0x00041289) aid_size_cell_afind_ParamLimits

0x8638,	// (0x00041289) aid_size_cell_afind

0x8656,	// (0x000412a7) bg_popup_sub_pane_cp09_ParamLimits

0x8656,	// (0x000412a7) bg_popup_sub_pane_cp09

0x8663,	// (0x000412b4) find_pane_cp01_ParamLimits

0x8663,	// (0x000412b4) find_pane_cp01

0xd25a,	// (0x00045eab) grid_afind_control_pane_ParamLimits

0xd25a,	// (0x00045eab) grid_afind_control_pane

0x8670,	// (0x000412c1) grid_afind_pane_ParamLimits

0x8670,	// (0x000412c1) grid_afind_pane

0x868e,	// (0x000412df) cell_afind_pane_ParamLimits

0x868e,	// (0x000412df) cell_afind_pane

0x1b46,	// (0x0003a797) afind_page_pane_g1

0x86dd,	// (0x0004132e) afind_page_pane_g2

0x86e6,	// (0x00041337) afind_page_pane_g3

0x0002,

0xf920,	// (0x00048571) afind_page_pane_g

0x86ef,	// (0x00041340) afind_page_pane_t1

0xd26e,	// (0x00045ebf) cell_afind_grid_control_pane_ParamLimits

0xd26e,	// (0x00045ebf) cell_afind_grid_control_pane

0xd27d,	// (0x00045ece) bg_button_pane_cp69_ParamLimits

0xd27d,	// (0x00045ece) bg_button_pane_cp69

0x870f,	// (0x00041360) cell_afind_pane_g1_ParamLimits

0x870f,	// (0x00041360) cell_afind_pane_g1

0x871c,	// (0x0004136d) cell_afind_pane_t1_ParamLimits

0x871c,	// (0x0004136d) cell_afind_pane_t1

0x1b50,	// (0x0003a7a1) bg_button_pane_cp72

0xd289,	// (0x00045eda) cell_afind_grid_control_pane_g1

0x650b,	// (0x0003f15c) aid_image_placing_area_ParamLimits

0x650b,	// (0x0003f15c) aid_image_placing_area

0x18b1,	// (0x0003a502) field_vitu_entry_pane_g1_ParamLimits

0x18b1,	// (0x0003a502) field_vitu_entry_pane_g1

0x18b1,	// (0x0003a502) field_vitu_entry_pane_g2_ParamLimits

0x18b1,	// (0x0003a502) field_vitu_entry_pane_g2

0x0001,

0xf7cd,	// (0x0004841e) field_vitu_entry_pane_g_ParamLimits

0xf7cd,	// (0x0004841e) field_vitu_entry_pane_g

0xce10,	// (0x00045a61) cell_vitu_itu_pane_g1_ParamLimits

0xcdf3,	// (0x00045a44) cell_vitu_itu_pane_t3_ParamLimits

0xcdf3,	// (0x00045a44) cell_vitu_itu_pane_t3

0xd01b,	// (0x00045c6c) mp4_progress_pane_t1_ParamLimits

0xd032,	// (0x00045c83) mp4_progress_pane_t2_ParamLimits

0xf866,	// (0x000484b7) mp4_progress_pane_t_ParamLimits

0xd049,	// (0x00045c9a) mup_progress_pane_cp04_ParamLimits

0x8611,	// (0x00041262) main_myfav_hc_pane_t5_ParamLimits

0x8611,	// (0x00041262) main_myfav_hc_pane_t5

0xb0e3,	// (0x00043d34) aid_zoom_text_primary

0x398d,	// (0x0003c5de) popup_adpt_find_window_ParamLimits

0x20c4,	// (0x0003ad15) main_cam_set_pane

0x814b,	// (0x00040d9c) cam4_zoom_pane_ParamLimits

0x814b,	// (0x00040d9c) cam4_zoom_pane

0x872e,	// (0x0004137f) main_cam_set_pane_g1_ParamLimits

0x872e,	// (0x0004137f) main_cam_set_pane_g1

0x873c,	// (0x0004138d) main_cam_set_pane_g2_ParamLimits

0x873c,	// (0x0004138d) main_cam_set_pane_g2

0x0001,

0xf927,	// (0x00048578) main_cam_set_pane_g_ParamLimits

0xf927,	// (0x00048578) main_cam_set_pane_g

0x875b,	// (0x000413ac) main_cam_set_pane_t1_ParamLimits

0x875b,	// (0x000413ac) main_cam_set_pane_t1

0x876d,	// (0x000413be) main_cset_listscroll_pane_ParamLimits

0x876d,	// (0x000413be) main_cset_listscroll_pane

0x878f,	// (0x000413e0) main_cset_slider_pane_ParamLimits

0x878f,	// (0x000413e0) main_cset_slider_pane

0xd29a,	// (0x00045eeb) main_cset_list_pane_ParamLimits

0xd29a,	// (0x00045eeb) main_cset_list_pane

0xd2aa,	// (0x00045efb) scroll_pane_cp028

0x87b3,	// (0x00041404) aid_area_touch_slider

0x87cf,	// (0x00041420) cset_slider_pane

0x87f2,	// (0x00041443) main_cset_slider_pane_g1

0x8807,	// (0x00041458) main_cset_slider_pane_g2

0x0011,

0xf92c,	// (0x0004857d) main_cset_slider_pane_g

0xd2e3,	// (0x00045f34) main_cset_slider_pane_t1

0x88c3,	// (0x00041514) main_cset_slider_pane_t2

0x88dd,	// (0x0004152e) main_cset_slider_pane_t3

0x88f7,	// (0x00041548) main_cset_slider_pane_t4

0x8911,	// (0x00041562) main_cset_slider_pane_t5

0x892b,	// (0x0004157c) main_cset_slider_pane_t6

0x8940,	// (0x00041591) main_cset_slider_pane_t7

0x000e,

0xf951,	// (0x000485a2) main_cset_slider_pane_t

0x8a44,	// (0x00041695) cset_list_set_pane_ParamLimits

0x8a44,	// (0x00041695) cset_list_set_pane

0xd37d,	// (0x00045fce) aid_position_infowindow_above

0xd385,	// (0x00045fd6) aid_position_infowindow_below

0x3168,	// (0x0003bdb9) cset_list_set_pane_g1_ParamLimits

0x3168,	// (0x0003bdb9) cset_list_set_pane_g1

0x3174,	// (0x0003bdc5) cset_list_set_pane_g3_ParamLimits

0x3174,	// (0x0003bdc5) cset_list_set_pane_g3

0x0001,

0xf970,	// (0x000485c1) cset_list_set_pane_g_ParamLimits

0xf970,	// (0x000485c1) cset_list_set_pane_g

0x3183,	// (0x0003bdd4) cset_list_set_pane_t1_ParamLimits

0x3183,	// (0x0003bdd4) cset_list_set_pane_t1

0x20c4,	// (0x0003ad15) list_highlight_pane_cp021_ParamLimits

0x20c4,	// (0x0003ad15) list_highlight_pane_cp021

0x5f56,	// (0x0003eba7) cset_slider_pane_g1

0x5f68,	// (0x0003ebb9) cset_slider_pane_g2

0x5f5f,	// (0x0003ebb0) cset_slider_pane_g3

0x0002,

0xf975,	// (0x000485c6) cset_slider_pane_g

0xef94,	// (0x00047be5) aid_area_touch_cam4_zoom

0xef9c,	// (0x00047bed) cam4_zoom_cont_pane

0xefa4,	// (0x00047bf5) cam4_zoom_pane_g1

0xefac,	// (0x00047bfd) cam4_zoom_pane_g2

0x8a55,	// (0x000416a6) cam4_zoom_pane_g3

0x0002,

0xf97c,	// (0x000485cd) cam4_zoom_pane_g

0xd38d,	// (0x00045fde) cam4_zoom_cont_pane_g1

0xd396,	// (0x00045fe7) cam4_zoom_cont_pane_g2

0xd39f,	// (0x00045ff0) cam4_zoom_cont_pane_g3

0x0002,

0xf983,	// (0x000485d4) cam4_zoom_cont_pane_g

0x802d,	// (0x00040c7e) call4_image_pane_ParamLimits

0x802d,	// (0x00040c7e) call4_image_pane

0xd089,	// (0x00045cda) call4_windows_conf_pane_ParamLimits

0xd0bc,	// (0x00045d0d) popup_call4_audio_in_window_ParamLimits

0xd0bc,	// (0x00045d0d) popup_call4_audio_in_window

0x11c1,	// (0x00039e12) bg_popup_call2_act_pane_cp02

0xd0fa,	// (0x00045d4b) call4_list_conf_pane

0x1b46,	// (0x0003a797) call4_image_pane_g1

0x1b46,	// (0x0003a797) call4_image_pane_g2

0x0001,

0xf3ef,	// (0x00048040) call4_image_pane_g

0xd3a8,	// (0x00045ff9) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3a8,	// (0x00045ff9) list_single_graphic_popup_conf4_pane

0x11c1,	// (0x00039e12) list_highlight_pane_cp022

0xd3b5,	// (0x00046006) list_single_graphic_popup_conf4_pane_g1

0x5721,	// (0x0003e372) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98a,	// (0x000485db) list_single_graphic_popup_conf4_pane_g

0xd3bd,	// (0x0004600e) list_single_graphic_popup_conf4_pane_t1

0x4754,	// (0x0003d3a5) popup_vtel_slider_window_ParamLimits

0x4754,	// (0x0003d3a5) popup_vtel_slider_window

0x5d3d,	// (0x0003e98e) dialer2_ne_pane_t2_ParamLimits

0x5d3d,	// (0x0003e98e) dialer2_ne_pane_t2

0x0001,

0xf86b,	// (0x000484bc) dialer2_ne_pane_t_ParamLimits

0xf86b,	// (0x000484bc) dialer2_ne_pane_t

0xc537,	// (0x00045188) bg_popup_sub_pane_cp010_ParamLimits

0xc537,	// (0x00045188) bg_popup_sub_pane_cp010

0x8a5d,	// (0x000416ae) popup_vtel_slider_window_g1_ParamLimits

0x8a5d,	// (0x000416ae) popup_vtel_slider_window_g1

0x8a70,	// (0x000416c1) popup_vtel_slider_window_g2_ParamLimits

0x8a70,	// (0x000416c1) popup_vtel_slider_window_g2

0x0003,

0xf98f,	// (0x000485e0) popup_vtel_slider_window_g_ParamLimits

0xf98f,	// (0x000485e0) popup_vtel_slider_window_g

0x8ac4,	// (0x00041715) vtel_slider_pane_ParamLimits

0x8ac4,	// (0x00041715) vtel_slider_pane

0x8ae6,	// (0x00041737) vtel_slider_pane_g1_ParamLimits

0x8ae6,	// (0x00041737) vtel_slider_pane_g1

0x8afa,	// (0x0004174b) vtel_slider_pane_g2_ParamLimits

0x8afa,	// (0x0004174b) vtel_slider_pane_g2

0x8b12,	// (0x00041763) vtel_slider_pane_g3_ParamLimits

0x8b12,	// (0x00041763) vtel_slider_pane_g3

0x8ae6,	// (0x00041737) vtel_slider_pane_g4_ParamLimits

0x8ae6,	// (0x00041737) vtel_slider_pane_g4

0x8b28,	// (0x00041779) vtel_slider_pane_g5_ParamLimits

0x8b28,	// (0x00041779) vtel_slider_pane_g5

0x0004,

0xf998,	// (0x000485e9) vtel_slider_pane_g_ParamLimits

0xf998,	// (0x000485e9) vtel_slider_pane_g

0x20c4,	// (0x0003ad15) main_gallery2_pane

0x8310,	// (0x00040f61) aid_size_row_itut2_dropdow_list_ParamLimits

0x8310,	// (0x00040f61) aid_size_row_itut2_dropdow_list

0x836c,	// (0x00040fbd) grid_vitu2_function_top_pane_ParamLimits

0x836c,	// (0x00040fbd) grid_vitu2_function_top_pane

0x83b4,	// (0x00041005) popup_vitu2_dropdown_list_window_ParamLimits

0x83b4,	// (0x00041005) popup_vitu2_dropdown_list_window

0x83d3,	// (0x00041024) popup_vitu2_match_list_window

0x8b3e,	// (0x0004178f) cell_vitu2_function_top_pane_ParamLimits

0x8b3e,	// (0x0004178f) cell_vitu2_function_top_pane

0x8b56,	// (0x000417a7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8b56,	// (0x000417a7) cell_vitu2_function_top_pane_cp01

0x8b72,	// (0x000417c3) cell_vitu2_function_top_wide_pane_ParamLimits

0x8b72,	// (0x000417c3) cell_vitu2_function_top_wide_pane

0x20c4,	// (0x0003ad15) bg_button_pane_cp012

0x8b8f,	// (0x000417e0) cell_vitu2_function_top_pane_g1

0xefb4,	// (0x00047c05) bg_button_pane_cp013_ParamLimits

0xefb4,	// (0x00047c05) bg_button_pane_cp013

0x8ba3,	// (0x000417f4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8ba3,	// (0x000417f4) cell_vitu2_function_top_wide_pane_g1

0x20c4,	// (0x0003ad15) bg_popup_sub_pane_cp20

0x8bbb,	// (0x0004180c) list_vitu2_match_list_pane

0xd184,	// (0x00045dd5) bg_popup_sub_pane_cp20_g1

0xd18c,	// (0x00045ddd) bg_popup_sub_pane_cp20_g2

0x1d64,	// (0x0003a9b5) bg_popup_sub_pane_cp20_g3

0xd194,	// (0x00045de5) bg_popup_sub_pane_cp20_g4

0x1d44,	// (0x0003a995) bg_popup_sub_pane_cp20_g5

0xd3d3,	// (0x00046024) bg_popup_sub_pane_cp20_g6

0xd1a4,	// (0x00045df5) bg_popup_sub_pane_cp20_g7

0xd1ac,	// (0x00045dfd) bg_popup_sub_pane_cp20_g8

0xd1b4,	// (0x00045e05) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a3,	// (0x000485f4) bg_popup_sub_pane_cp20_g

0xefd0,	// (0x00047c21) list_vitu2_match_list_item_pane_ParamLimits

0xefd0,	// (0x00047c21) list_vitu2_match_list_item_pane

0xefe2,	// (0x00047c33) list_vitu2_match_list_item_pane_t1

0x11c1,	// (0x00039e12) bg_popup_sub_pane_cp21

0x562a,	// (0x0003e27b) grid_vitu2_dropdown_list_pane

0x8bd9,	// (0x0004182a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8bd9,	// (0x0004182a) cell_vitu2_dropdown_list_char_pane

0x8bfa,	// (0x0004184b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8bfa,	// (0x0004184b) cell_vitu2_dropdown_list_ctrl_pane

0xd3e8,	// (0x00046039) cell_vitu2_dropdown_list_char_pane_g1

0xd3f1,	// (0x00046042) cell_vitu2_dropdown_list_char_pane_g2

0xd3fa,	// (0x0004604b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c0,	// (0x00048611) cell_vitu2_dropdown_list_char_pane_g

0x8c24,	// (0x00041875) cell_vitu2_dropdown_list_char_pane_t1

0x8c32,	// (0x00041883) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8c32,	// (0x00041883) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8c3f,	// (0x00041890) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8c3f,	// (0x00041890) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8c4c,	// (0x0004189d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8c4c,	// (0x0004189d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8c59,	// (0x000418aa) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8c59,	// (0x000418aa) cell_vitu2_dropdown_list_ctrl_pane_g4

0x18b1,	// (0x0003a502) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x18b1,	// (0x0003a502) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c7,	// (0x00048618) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c7,	// (0x00048618) cell_vitu2_dropdown_list_ctrl_pane_g

0x8c75,	// (0x000418c6) aid_size_cell_gallery2_ParamLimits

0x8c75,	// (0x000418c6) aid_size_cell_gallery2

0x8c93,	// (0x000418e4) grid_gallery2_pane_ParamLimits

0x8c93,	// (0x000418e4) grid_gallery2_pane

0x7adc,	// (0x0004072d) scroll_pane_cp029_ParamLimits

0x7adc,	// (0x0004072d) scroll_pane_cp029

0x8ca7,	// (0x000418f8) cell_gallery2_pane_ParamLimits

0x8ca7,	// (0x000418f8) cell_gallery2_pane

0xd403,	// (0x00046054) cell_gallery2_pane_g2

0x8d00,	// (0x00041951) cell_gallery2_pane_g3

0xd40b,	// (0x0004605c) cell_gallery2_pane_g4

0xd413,	// (0x00046064) cell_gallery2_pane_g5

0x1aec,	// (0x0003a73d) grid_highlight_pane_cp10

0x83d3,	// (0x00041024) popup_vitu2_match_list_window_ParamLimits

0x83e4,	// (0x00041035) popup_vitu2_query_window_ParamLimits

0x83e4,	// (0x00041035) popup_vitu2_query_window

0x11c1,	// (0x00039e12) bg_vitu2_candi_button_pane

0xd3e8,	// (0x00046039) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3f1,	// (0x00046042) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3fa,	// (0x0004604b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x3198,	// (0x0003bde9) bg_button_pane_cp015

0x8d08,	// (0x00041959) bg_button_pane_cp016

0x8d1a,	// (0x0004196b) bg_button_pane_cp017

0x5d5f,	// (0x0003e9b0) bg_popup_sub_pane_cp22

0xd41b,	// (0x0004606c) popup_vitu2_query_window_g1

0x31c7,	// (0x0003be18) popup_vitu2_query_window_g2

0x0002,

0xf9d2,	// (0x00048623) popup_vitu2_query_window_g

0x31e2,	// (0x0003be33) popup_vitu2_query_window_t1_ParamLimits

0x31e2,	// (0x0003be33) popup_vitu2_query_window_t1

0x3215,	// (0x0003be66) popup_vitu2_query_window_t2_ParamLimits

0x3215,	// (0x0003be66) popup_vitu2_query_window_t2

0x3227,	// (0x0003be78) popup_vitu2_query_window_t3_ParamLimits

0x3227,	// (0x0003be78) popup_vitu2_query_window_t3

0x8d3c,	// (0x0004198d) popup_vitu2_query_window_t4_ParamLimits

0x8d3c,	// (0x0004198d) popup_vitu2_query_window_t4

0x8d59,	// (0x000419aa) popup_vitu2_query_window_t5_ParamLimits

0x8d59,	// (0x000419aa) popup_vitu2_query_window_t5

0x0006,

0xf9d9,	// (0x0004862a) popup_vitu2_query_window_t_ParamLimits

0xf9d9,	// (0x0004862a) popup_vitu2_query_window_t

0xd292,	// (0x00045ee3) main_cset_text_pane

0x87b3,	// (0x00041404) aid_area_touch_slider_ParamLimits

0x87cf,	// (0x00041420) cset_slider_pane_ParamLimits

0x87f2,	// (0x00041443) main_cset_slider_pane_g1_ParamLimits

0x8807,	// (0x00041458) main_cset_slider_pane_g2_ParamLimits

0xd2b3,	// (0x00045f04) main_cset_slider_pane_g3_ParamLimits

0xd2b3,	// (0x00045f04) main_cset_slider_pane_g3

0x881c,	// (0x0004146d) main_cset_slider_pane_g4_ParamLimits

0x881c,	// (0x0004146d) main_cset_slider_pane_g4

0x882b,	// (0x0004147c) main_cset_slider_pane_g5_ParamLimits

0x882b,	// (0x0004147c) main_cset_slider_pane_g5

0x8837,	// (0x00041488) main_cset_slider_pane_g6_ParamLimits

0x8837,	// (0x00041488) main_cset_slider_pane_g6

0xf92c,	// (0x0004857d) main_cset_slider_pane_g_ParamLimits

0xd2e3,	// (0x00045f34) main_cset_slider_pane_t1_ParamLimits

0x88c3,	// (0x00041514) main_cset_slider_pane_t2_ParamLimits

0x88dd,	// (0x0004152e) main_cset_slider_pane_t3_ParamLimits

0x88f7,	// (0x00041548) main_cset_slider_pane_t4_ParamLimits

0x8911,	// (0x00041562) main_cset_slider_pane_t5_ParamLimits

0x892b,	// (0x0004157c) main_cset_slider_pane_t6_ParamLimits

0x8940,	// (0x00041591) main_cset_slider_pane_t7_ParamLimits

0x896a,	// (0x000415bb) main_cset_slider_pane_t8_ParamLimits

0x896a,	// (0x000415bb) main_cset_slider_pane_t8

0x8992,	// (0x000415e3) main_cset_slider_pane_t9_ParamLimits

0x8992,	// (0x000415e3) main_cset_slider_pane_t9

0x89ba,	// (0x0004160b) main_cset_slider_pane_t10_ParamLimits

0x89ba,	// (0x0004160b) main_cset_slider_pane_t10

0x89e2,	// (0x00041633) main_cset_slider_pane_t11_ParamLimits

0x89e2,	// (0x00041633) main_cset_slider_pane_t11

0x8a0a,	// (0x0004165b) main_cset_slider_pane_t12_ParamLimits

0x8a0a,	// (0x0004165b) main_cset_slider_pane_t12

0x8a27,	// (0x00041678) main_cset_slider_pane_t13_ParamLimits

0x8a27,	// (0x00041678) main_cset_slider_pane_t13

0xf951,	// (0x000485a2) main_cset_slider_pane_t_ParamLimits

0x11c1,	// (0x00039e12) bg_popup_sub_pane_cp011

0xd427,	// (0x00046078) main_cset_text_pane_g1

0xd42f,	// (0x00046080) main_cset_text_pane_t1

0xd43d,	// (0x0004608e) main_cset_text_pane_t2

0xd44b,	// (0x0004609c) main_cset_text_pane_t3

0xd459,	// (0x000460aa) main_cset_text_pane_t4

0xd467,	// (0x000460b8) main_cset_text_pane_t5

0xd475,	// (0x000460c6) main_cset_text_pane_t6

0xd483,	// (0x000460d4) main_cset_text_pane_t7

0x0006,

0xf9e8,	// (0x00048639) main_cset_text_pane_t

0x11c1,	// (0x00039e12) main_cam4_burst_pane

0x11c1,	// (0x00039e12) main_cam5_pane

0x86fd,	// (0x0004134e) bg_button_pane_cp019

0x8706,	// (0x00041357) bg_button_pane_cp020

0xd2bf,	// (0x00045f10) main_cset_slider_pane_g7_ParamLimits

0xd2bf,	// (0x00045f10) main_cset_slider_pane_g7

0xd2cb,	// (0x00045f1c) main_cset_slider_pane_g8_ParamLimits

0xd2cb,	// (0x00045f1c) main_cset_slider_pane_g8

0x884b,	// (0x0004149c) main_cset_slider_pane_g9_ParamLimits

0x884b,	// (0x0004149c) main_cset_slider_pane_g9

0x8857,	// (0x000414a8) main_cset_slider_pane_g10_ParamLimits

0x8857,	// (0x000414a8) main_cset_slider_pane_g10

0x8863,	// (0x000414b4) main_cset_slider_pane_g11_ParamLimits

0x8863,	// (0x000414b4) main_cset_slider_pane_g11

0x886f,	// (0x000414c0) main_cset_slider_pane_g12_ParamLimits

0x886f,	// (0x000414c0) main_cset_slider_pane_g12

0x887b,	// (0x000414cc) main_cset_slider_pane_g13_ParamLimits

0x887b,	// (0x000414cc) main_cset_slider_pane_g13

0x8887,	// (0x000414d8) main_cset_slider_pane_g14_ParamLimits

0x8887,	// (0x000414d8) main_cset_slider_pane_g14

0x8893,	// (0x000414e4) main_cset_slider_pane_g15_ParamLimits

0x8893,	// (0x000414e4) main_cset_slider_pane_g15

0xd30b,	// (0x00045f5c) main_cset_slider_pane_t14_ParamLimits

0xd30b,	// (0x00045f5c) main_cset_slider_pane_t14

0xd344,	// (0x00045f95) main_cset_slider_pane_t15_ParamLimits

0xd344,	// (0x00045f95) main_cset_slider_pane_t15

0x8d76,	// (0x000419c7) aid_cam4_burst_size_cell_ParamLimits

0x8d76,	// (0x000419c7) aid_cam4_burst_size_cell

0x8d96,	// (0x000419e7) grid_cam4_burst_pane_ParamLimits

0x8d96,	// (0x000419e7) grid_cam4_burst_pane

0x8dbc,	// (0x00041a0d) linegrid_cam4_burst_pane_ParamLimits

0x8dbc,	// (0x00041a0d) linegrid_cam4_burst_pane

0x8dde,	// (0x00041a2f) scroll_pane_cp30_ParamLimits

0x8dde,	// (0x00041a2f) scroll_pane_cp30

0x8dea,	// (0x00041a3b) cell_cam4_burst_pane_ParamLimits

0x8dea,	// (0x00041a3b) cell_cam4_burst_pane

0xd491,	// (0x000460e2) linegrid_cam4_burst_pane_g1_ParamLimits

0xd491,	// (0x000460e2) linegrid_cam4_burst_pane_g1

0x8e31,	// (0x00041a82) linegrid_cam4_burst_pane_g2_ParamLimits

0x8e31,	// (0x00041a82) linegrid_cam4_burst_pane_g2

0xd49e,	// (0x000460ef) linegrid_cam4_burst_pane_g3_ParamLimits

0xd49e,	// (0x000460ef) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f7,	// (0x00048648) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f7,	// (0x00048648) linegrid_cam4_burst_pane_g

0x8e42,	// (0x00041a93) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8e42,	// (0x00041a93) linegrid_cam4_burst_pane_g3_copy1

0xd4ab,	// (0x000460fc) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4ab,	// (0x000460fc) linegrid_cam4_burst_pane_g4

0x8e5c,	// (0x00041aad) linegrid_cam4_burst_pane_g5_ParamLimits

0x8e5c,	// (0x00041aad) linegrid_cam4_burst_pane_g5

0x8e6d,	// (0x00041abe) linegrid_cam4_burst_pane_g6_ParamLimits

0x8e6d,	// (0x00041abe) linegrid_cam4_burst_pane_g6

0xd4b8,	// (0x00046109) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4b8,	// (0x00046109) linegrid_cam4_burst_pane_g7

0x8e7e,	// (0x00041acf) cell_cam4_burst_pane_g1

0xd4d1,	// (0x00046122) main_cam5_pane_t1_ParamLimits

0xd4d1,	// (0x00046122) main_cam5_pane_t1

0xd4e3,	// (0x00046134) main_cam5_pane_t2_ParamLimits

0xd4e3,	// (0x00046134) main_cam5_pane_t2

0xd4f5,	// (0x00046146) main_cam5_pane_t3_ParamLimits

0xd4f5,	// (0x00046146) main_cam5_pane_t3

0xd507,	// (0x00046158) main_cam5_pane_t4_ParamLimits

0xd507,	// (0x00046158) main_cam5_pane_t4

0xd51d,	// (0x0004616e) main_cam5_pane_t5_ParamLimits

0xd51d,	// (0x0004616e) main_cam5_pane_t5

0xd52f,	// (0x00046180) main_cam5_pane_t6_ParamLimits

0xd52f,	// (0x00046180) main_cam5_pane_t6

0xd541,	// (0x00046192) main_cam5_pane_t7_ParamLimits

0xd541,	// (0x00046192) main_cam5_pane_t7

0xd553,	// (0x000461a4) main_cam5_pane_t8_ParamLimits

0xd553,	// (0x000461a4) main_cam5_pane_t8

0xd56f,	// (0x000461c0) main_cam5_pane_t9_ParamLimits

0xd56f,	// (0x000461c0) main_cam5_pane_t9

0xd581,	// (0x000461d2) main_cam5_pane_t10_ParamLimits

0xd581,	// (0x000461d2) main_cam5_pane_t10

0xd593,	// (0x000461e4) main_cam5_pane_t11_ParamLimits

0xd593,	// (0x000461e4) main_cam5_pane_t11

0xd5a5,	// (0x000461f6) main_cam5_pane_t12_ParamLimits

0xd5a5,	// (0x000461f6) main_cam5_pane_t12

0xd5ba,	// (0x0004620b) main_cam5_pane_t13_ParamLimits

0xd5ba,	// (0x0004620b) main_cam5_pane_t13

0x000c,

0xfa03,	// (0x00048654) main_cam5_pane_t_ParamLimits

0xfa03,	// (0x00048654) main_cam5_pane_t

0x39eb,	// (0x0003c63c) popup_scut_keymap_window_ParamLimits

0x39eb,	// (0x0003c63c) popup_scut_keymap_window

0x8e93,	// (0x00041ae4) aid_size_cell_brow_shortcut

0x1aec,	// (0x0003a73d) bg_popup_window_pane_cp010

0x8e9f,	// (0x00041af0) grid_scut_pane

0x8ea9,	// (0x00041afa) cell_scut_pane_ParamLimits

0x8ea9,	// (0x00041afa) cell_scut_pane

0x8ebe,	// (0x00041b0f) cell_scut_pane_g1

0xd5d7,	// (0x00046228) cell_scut_pane_t1

0xd5e6,	// (0x00046237) cell_scut_pane_t2

0x8ec7,	// (0x00041b18) cell_scut_pane_t3

0x0002,

0xfa1e,	// (0x0004866f) cell_scut_pane_t

0x72c7,	// (0x0003ff18) main_mup3_pane_g8_ParamLimits

0x72c7,	// (0x0003ff18) main_mup3_pane_g8

0x8324,	// (0x00040f75) area_vitu2_query_pane_ParamLimits

0x8324,	// (0x00040f75) area_vitu2_query_pane

0x31a8,	// (0x0003bdf9) input_focus_pane_cp08

0xd5f5,	// (0x00046246) area_vitu2_query_pane_g1

0x32a5,	// (0x0003bef6) area_vitu2_query_pane_g2

0x0001,

0xfa25,	// (0x00048676) area_vitu2_query_pane_g

0x8ed5,	// (0x00041b26) area_vitu2_query_pane_t1_ParamLimits

0x8ed5,	// (0x00041b26) area_vitu2_query_pane_t1

0x8ee7,	// (0x00041b38) area_vitu2_query_pane_t2_ParamLimits

0x8ee7,	// (0x00041b38) area_vitu2_query_pane_t2

0x32b4,	// (0x0003bf05) area_vitu2_query_pane_t3_ParamLimits

0x32b4,	// (0x0003bf05) area_vitu2_query_pane_t3

0xd601,	// (0x00046252) area_vitu2_query_pane_t4_ParamLimits

0xd601,	// (0x00046252) area_vitu2_query_pane_t4

0xd629,	// (0x0004627a) area_vitu2_query_pane_t5_ParamLimits

0xd629,	// (0x0004627a) area_vitu2_query_pane_t5

0xd651,	// (0x000462a2) area_vitu2_query_pane_t6_ParamLimits

0xd651,	// (0x000462a2) area_vitu2_query_pane_t6

0x0006,

0xfa2a,	// (0x0004867b) area_vitu2_query_pane_t_ParamLimits

0xfa2a,	// (0x0004867b) area_vitu2_query_pane_t

0x8ef9,	// (0x00041b4a) bg_button_pane_cp018

0x8f06,	// (0x00041b57) bg_button_pane_cp021

0x32dc,	// (0x0003bf2d) bg_button_pane_cp022

0x32eb,	// (0x0003bf3c) input_focus_pane_cp09

0x5a7c,	// (0x0003e6cd) aid_size_touch_mv_arrow_left

0x5aa0,	// (0x0003e6f1) aid_size_touch_mv_arrow_right

0x88ab,	// (0x000414fc) main_cset_slider_pane_g16_ParamLimits

0x88ab,	// (0x000414fc) main_cset_slider_pane_g16

0x88b7,	// (0x00041508) main_cset_slider_pane_g17_ParamLimits

0x88b7,	// (0x00041508) main_cset_slider_pane_g17

0x8e7e,	// (0x00041acf) cell_cam4_burst_pane_g1_ParamLimits

0x11c1,	// (0x00039e12) compa_mode_pane

0x8a80,	// (0x000416d1) popup_vtel_slider_window_g3_ParamLimits

0x8a80,	// (0x000416d1) popup_vtel_slider_window_g3

0x8a97,	// (0x000416e8) popup_vtel_slider_window_g4_ParamLimits

0x8a97,	// (0x000416e8) popup_vtel_slider_window_g4

0x8aae,	// (0x000416ff) popup_vtel_slider_window_t1_ParamLimits

0x8aae,	// (0x000416ff) popup_vtel_slider_window_t1

0x11c1,	// (0x00039e12) main_cl_pane

0xeb32,	// (0x00047783) popup_imed_adjust2_window_ParamLimits

0x5d5f,	// (0x0003e9b0) bg_tb_trans_pane_cp05_ParamLimits

0xcd28,	// (0x00045979) popup_imed_adjust2_window_g1_ParamLimits

0xcd37,	// (0x00045988) popup_imed_adjust2_window_g2_ParamLimits

0xcd37,	// (0x00045988) popup_imed_adjust2_window_g2

0xcd43,	// (0x00045994) popup_imed_adjust2_window_g3_ParamLimits

0xcd43,	// (0x00045994) popup_imed_adjust2_window_g3

0x0002,

0xf791,	// (0x000483e2) popup_imed_adjust2_window_g_ParamLimits

0xf791,	// (0x000483e2) popup_imed_adjust2_window_g

0xcd4f,	// (0x000459a0) popup_imed_adjust2_window_t1_ParamLimits

0xcd67,	// (0x000459b8) slider_imed_adjust_pane_ParamLimits

0xcd7b,	// (0x000459cc) slider_imed_adjust_pane_g1_ParamLimits

0xcd8b,	// (0x000459dc) slider_imed_adjust_pane_g2_ParamLimits

0xcd9b,	// (0x000459ec) slider_imed_adjust_pane_g3_ParamLimits

0xcdac,	// (0x000459fd) slider_imed_adjust_pane_g4_ParamLimits

0xf798,	// (0x000483e9) slider_imed_adjust_pane_g_ParamLimits

0x80fa,	// (0x00040d4b) aid_touch_area_cam4_ParamLimits

0x80fa,	// (0x00040d4b) aid_touch_area_cam4

0xeeb7,	// (0x00047b08) battery_pane_cp01

0x8192,	// (0x00040de3) main_camera4_pane_g6_ParamLimits

0x8192,	// (0x00040de3) main_camera4_pane_g6

0x81b3,	// (0x00040e04) main_camera4_pane_t2_ParamLimits

0x81b3,	// (0x00040e04) main_camera4_pane_t2

0x0001,

0xf89f,	// (0x000484f0) main_camera4_pane_t_ParamLimits

0xf89f,	// (0x000484f0) main_camera4_pane_t

0x81e1,	// (0x00040e32) aid_touch_area_vid4_ParamLimits

0x81e1,	// (0x00040e32) aid_touch_area_vid4

0x8223,	// (0x00040e74) main_video4_pane_g5_ParamLimits

0x8223,	// (0x00040e74) main_video4_pane_g5

0x8244,	// (0x00040e95) vid4_progress_pane_ParamLimits

0x8244,	// (0x00040e95) vid4_progress_pane

0xd2d7,	// (0x00045f28) main_cset_slider_pane_g18_ParamLimits

0xd2d7,	// (0x00045f28) main_cset_slider_pane_g18

0xd4c5,	// (0x00046116) cell_cam4_burst_pane_g2_ParamLimits

0xd4c5,	// (0x00046116) cell_cam4_burst_pane_g2

0x0001,

0xf9fe,	// (0x0004864f) cell_cam4_burst_pane_g_ParamLimits

0xf9fe,	// (0x0004864f) cell_cam4_burst_pane_g

0x1927,	// (0x0003a578) bg_cl_pane_ParamLimits

0x1927,	// (0x0003a578) bg_cl_pane

0x8f12,	// (0x00041b63) cl_header_pane_ParamLimits

0x8f12,	// (0x00041b63) cl_header_pane

0x8f26,	// (0x00041b77) cl_listscroll_pane_ParamLimits

0x8f26,	// (0x00041b77) cl_listscroll_pane

0xd69d,	// (0x000462ee) bg_cl_pane_g1

0xd6a5,	// (0x000462f6) bg_cl_pane_g2

0xd6ad,	// (0x000462fe) bg_cl_pane_g3

0xd6b5,	// (0x00046306) bg_cl_pane_g4

0xd6bd,	// (0x0004630e) bg_cl_pane_g5

0xd6c5,	// (0x00046316) bg_cl_pane_g6

0xd6cd,	// (0x0004631e) bg_cl_pane_g7

0xd6d5,	// (0x00046326) bg_cl_pane_g8

0xd6dd,	// (0x0004632e) bg_cl_pane_g9

0x0008,

0xfa39,	// (0x0004868a) bg_cl_pane_g

0x8f36,	// (0x00041b87) aid_height_cl_leading_ParamLimits

0x8f36,	// (0x00041b87) aid_height_cl_leading

0x8f42,	// (0x00041b93) aid_height_cl_text_ParamLimits

0x8f42,	// (0x00041b93) aid_height_cl_text

0x20c4,	// (0x0003ad15) bg_cl_header_pane_ParamLimits

0x20c4,	// (0x0003ad15) bg_cl_header_pane

0x8f61,	// (0x00041bb2) cl_header_pane_g1_ParamLimits

0x8f61,	// (0x00041bb2) cl_header_pane_g1

0x8f77,	// (0x00041bc8) cl_header_pane_t1_ParamLimits

0x8f77,	// (0x00041bc8) cl_header_pane_t1

0xd6e5,	// (0x00046336) cl_list_pane

0xd6ee,	// (0x0004633f) hc_scroll_pane_cp01

0x1d44,	// (0x0003a995) bg_cl_header_pane_g1

0xd184,	// (0x00045dd5) bg_cl_header_pane_g2

0x1d64,	// (0x0003a9b5) bg_cl_header_pane_g3

0xd194,	// (0x00045de5) bg_cl_header_pane_g4

0xd18c,	// (0x00045ddd) bg_cl_header_pane_g5

0xd3d3,	// (0x00046024) bg_cl_header_pane_g6

0xd1ac,	// (0x00045dfd) bg_cl_header_pane_g7

0xd1b4,	// (0x00045e05) bg_cl_header_pane_g8

0xd1a4,	// (0x00045df5) bg_cl_header_pane_g9

0x0008,

0xfa4c,	// (0x0004869d) bg_cl_header_pane_g

0x8f90,	// (0x00041be1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8f90,	// (0x00041be1) hc_cl_list_double_graphic_heading_pane

0x8fa0,	// (0x00041bf1) hc_cl_list_single_graphic_pane_ParamLimits

0x8fa0,	// (0x00041bf1) hc_cl_list_single_graphic_pane

0x8fb3,	// (0x00041c04) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8fb3,	// (0x00041c04) hc_cl_list_single_graphic_pane_g1

0x8fbf,	// (0x00041c10) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8fbf,	// (0x00041c10) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5f,	// (0x000486b0) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5f,	// (0x000486b0) hc_cl_list_single_graphic_pane_g

0x8fd3,	// (0x00041c24) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8fd3,	// (0x00041c24) hc_cl_list_single_graphic_pane_t1

0x8fb3,	// (0x00041c04) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8fb3,	// (0x00041c04) hc_cl_list_double_graphic_heading_pane_g1

0x8fe8,	// (0x00041c39) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8fe8,	// (0x00041c39) hc_cl_list_double_graphic_heading_pane_g2

0x8ffc,	// (0x00041c4d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8ffc,	// (0x00041c4d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa64,	// (0x000486b5) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa64,	// (0x000486b5) hc_cl_list_double_graphic_heading_pane_g

0x9010,	// (0x00041c61) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9010,	// (0x00041c61) hc_cl_list_double_graphic_heading_pane_t1

0x9025,	// (0x00041c76) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9025,	// (0x00041c76) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6b,	// (0x000486bc) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6b,	// (0x000486bc) hc_cl_list_double_graphic_heading_pane_t

0xeff0,	// (0x00047c41) vid4_progress_pane_g1

0xefff,	// (0x00047c50) vid4_progress_pane_g2

0xf00e,	// (0x00047c5f) vid4_progress_pane_g3

0xf01d,	// (0x00047c6e) vid4_progress_pane_g4

0x0004,

0xfa70,	// (0x000486c1) vid4_progress_pane_g

0xf029,	// (0x00047c7a) vid4_progress_pane_t1

0xf03f,	// (0x00047c90) vid4_progress_pane_t2

0x0002,

0xfa7b,	// (0x000486cc) vid4_progress_pane_t

0xf069,	// (0x00047cba) wait_bar_pane_cp07

0xc674,	// (0x000452c5) blid_firmament_pane_ParamLimits

0xc6b5,	// (0x00045306) popup_blid_sat_info2_window_g1

0xc6d9,	// (0x0004532a) popup_blid_sat_info2_window_t3

0xc6e7,	// (0x00045338) popup_blid_sat_info2_window_t4

0xc6f5,	// (0x00045346) popup_blid_sat_info2_window_t5

0xc703,	// (0x00045354) popup_blid_sat_info2_window_t6

0xc713,	// (0x00045364) popup_blid_sat_info2_window_t7

0xc721,	// (0x00045372) popup_blid_sat_info2_window_t8

0xc72f,	// (0x00045380) popup_blid_sat_info2_window_t9

0xc73d,	// (0x0004538e) popup_blid_sat_info2_window_t10

0xc7d9,	// (0x0004542a) aid_firma_cardinal_ParamLimits

0xc7ed,	// (0x0004543e) blid_firmament_pane_t1_ParamLimits

0xc804,	// (0x00045455) blid_firmament_pane_t2_ParamLimits

0xc81b,	// (0x0004546c) blid_firmament_pane_t3_ParamLimits

0xc832,	// (0x00045483) blid_firmament_pane_t4_ParamLimits

0xf68a,	// (0x000482db) blid_firmament_pane_t_ParamLimits

0xc849,	// (0x0004549a) blid_sat_info_pane_ParamLimits

0x20c4,	// (0x0003ad15) main_cam_set_pane_ParamLimits

0x7a5d,	// (0x000406ae) aid_size_cell_colour_35_ParamLimits

0x7a7d,	// (0x000406ce) aid_size_cell_colour_112_ParamLimits

0x7a9d,	// (0x000406ee) aid_size_cell_effect_ParamLimits

0x5d5f,	// (0x0003e9b0) bg_tb_trans_pane_cp02_ParamLimits

0x1f96,	// (0x0003abe7) heading_imed_pane_ParamLimits

0x7abd,	// (0x0004070e) listscroll_imed_pane_ParamLimits

0xba68,	// (0x000446b9) popup_call2_audio_first_window_g5_ParamLimits

0xba68,	// (0x000446b9) popup_call2_audio_first_window_g5

0x7de5,	// (0x00040a36) aid_size_touch_image3_arrow_left_ParamLimits

0x7de5,	// (0x00040a36) aid_size_touch_image3_arrow_left

0x7e05,	// (0x00040a56) aid_size_touch_image3_arrow_right_ParamLimits

0x7e05,	// (0x00040a56) aid_size_touch_image3_arrow_right

0xf054,	// (0x00047ca5) vid4_progress_pane_t3

0x7c46,	// (0x00040897) main_hwr_training_symbol_option_pane_ParamLimits

0x7c46,	// (0x00040897) main_hwr_training_symbol_option_pane

0xcf55,	// (0x00045ba6) popup_hwr_training_preview_window_ParamLimits

0xcf55,	// (0x00045ba6) popup_hwr_training_preview_window

0x7c62,	// (0x000408b3) hwr_training_navi_pane_g5_ParamLimits

0x7c62,	// (0x000408b3) hwr_training_navi_pane_g5

0xd172,	// (0x00045dc3) popup_char_count_window

0x20c4,	// (0x0003ad15) bg_popup_sub_pane_cp20_ParamLimits

0x8bbb,	// (0x0004180c) list_vitu2_match_list_pane_ParamLimits

0x8bca,	// (0x0004181b) vitu2_page_scroll_pane_ParamLimits

0x8bca,	// (0x0004181b) vitu2_page_scroll_pane

0xd722,	// (0x00046373) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd722,	// (0x00046373) list_single_hwr_training_symbol_option_pane

0xd735,	// (0x00046386) list_single_hwr_training_symbol_option_pane_g1

0xd73d,	// (0x0004638e) list_single_hwr_training_symbol_option_pane_t1

0xd74b,	// (0x0004639c) bg_button_pane_cp023

0xd754,	// (0x000463a5) bg_button_pane_cp024

0x9043,	// (0x00041c94) vitu2_page_scroll_pane_g1

0x904b,	// (0x00041c9c) vitu2_page_scroll_pane_g2

0x0001,

0xfa82,	// (0x000486d3) vitu2_page_scroll_pane_g

0x9053,	// (0x00041ca4) vitu2_page_scroll_pane_t1

0xc878,	// (0x000454c9) popup_char_count_window_g1

0xd787,	// (0x000463d8) popup_char_count_window_g2

0xd790,	// (0x000463e1) popup_char_count_window_g3

0x0002,

0xfa87,	// (0x000486d8) popup_char_count_window_g

0xd799,	// (0x000463ea) popup_char_count_window_t1

0x11c1,	// (0x00039e12) main_vded2_pane

0xcd16,	// (0x00045967) aid_size_cell_imed_line

0xcd20,	// (0x00045971) grid_imed_line_width_pane

0xef4c,	// (0x00047b9d) vid4_indicators_pane_g4

0xd7a7,	// (0x000463f8) cell_imed_line_width_pane_ParamLimits

0xd7a7,	// (0x000463f8) cell_imed_line_width_pane

0xd7b9,	// (0x0004640a) cell_imed_line_width_pane_g1

0xd7c2,	// (0x00046413) cell_imed_line_width_pane_g2

0x0001,

0xfa8e,	// (0x000486df) cell_imed_line_width_pane_g

0x9062,	// (0x00041cb3) main_vded2_pane_g1_ParamLimits

0x9062,	// (0x00041cb3) main_vded2_pane_g1

0x9078,	// (0x00041cc9) main_vded2_pane_g2_ParamLimits

0x9078,	// (0x00041cc9) main_vded2_pane_g2

0x0001,

0xfa93,	// (0x000486e4) main_vded2_pane_g_ParamLimits

0xfa93,	// (0x000486e4) main_vded2_pane_g

0x9088,	// (0x00041cd9) vded2_slider_pane_ParamLimits

0x9088,	// (0x00041cd9) vded2_slider_pane

0x909b,	// (0x00041cec) aid_size_touch_vded2_end

0x90a3,	// (0x00041cf4) aid_size_touch_vded2_playhead

0x90ab,	// (0x00041cfc) aid_size_touch_vded2_start

0x90b3,	// (0x00041d04) vded2_slider_bg_pane

0x90bc,	// (0x00041d0d) vded2_slider_pane_g1

0x90c5,	// (0x00041d16) vded2_slider_pane_g2

0x90cd,	// (0x00041d1e) vded2_slider_pane_g3

0x0002,

0xfa98,	// (0x000486e9) vded2_slider_pane_g

0x90d6,	// (0x00041d27) vded2_slider_bg_pane_g1

0x90df,	// (0x00041d30) vded2_slider_bg_pane_g2

0x90e8,	// (0x00041d39) vded2_slider_bg_pane_g3

0x0002,

0xfa9f,	// (0x000486f0) vded2_slider_bg_pane_g

0x6061,	// (0x0003ecb2) aid_postcard_touch_down_pane_ParamLimits

0x6061,	// (0x0003ecb2) aid_postcard_touch_down_pane

0x6073,	// (0x0003ecc4) aid_postcard_touch_up_pane_ParamLimits

0x6073,	// (0x0003ecc4) aid_postcard_touch_up_pane

0x11c1,	// (0x00039e12) main_blid2_pane

0xeb1a,	// (0x0004776b) popup_blid2_search_window

0x11c1,	// (0x00039e12) blid2_gps_pane

0x11c1,	// (0x00039e12) blid2_navig_pane

0x11c1,	// (0x00039e12) blid2_search_pane

0x11c1,	// (0x00039e12) blid2_tripm_pane

0x90f1,	// (0x00041d42) blid2_search_pane_g1_ParamLimits

0x90f1,	// (0x00041d42) blid2_search_pane_g1

0x9105,	// (0x00041d56) blid2_search_pane_t1_ParamLimits

0x9105,	// (0x00041d56) blid2_search_pane_t1

0x9117,	// (0x00041d68) aid_size_cell_blid2_gps_ParamLimits

0x9117,	// (0x00041d68) aid_size_cell_blid2_gps

0x912f,	// (0x00041d80) blid2_gps_pane_g1_ParamLimits

0x912f,	// (0x00041d80) blid2_gps_pane_g1

0x9143,	// (0x00041d94) grid_blid2_satellite_pane_ParamLimits

0x9143,	// (0x00041d94) grid_blid2_satellite_pane

0x9157,	// (0x00041da8) blid2_navig_pane_g1_ParamLimits

0x9157,	// (0x00041da8) blid2_navig_pane_g1

0x9163,	// (0x00041db4) blid2_navig_pane_t1_ParamLimits

0x9163,	// (0x00041db4) blid2_navig_pane_t1

0x917c,	// (0x00041dcd) blid2_navig_pane_t2_ParamLimits

0x917c,	// (0x00041dcd) blid2_navig_pane_t2

0x0001,

0xfaa6,	// (0x000486f7) blid2_navig_pane_t_ParamLimits

0xfaa6,	// (0x000486f7) blid2_navig_pane_t

0x9195,	// (0x00041de6) blid2_navig_ring_pane_ParamLimits

0x9195,	// (0x00041de6) blid2_navig_ring_pane

0x91aa,	// (0x00041dfb) blid2_speed_pane_ParamLimits

0x91aa,	// (0x00041dfb) blid2_speed_pane

0x91b6,	// (0x00041e07) blid2_tripm_pane_g1_ParamLimits

0x91b6,	// (0x00041e07) blid2_tripm_pane_g1

0x91cb,	// (0x00041e1c) blid2_tripm_pane_g2_ParamLimits

0x91cb,	// (0x00041e1c) blid2_tripm_pane_g2

0x91df,	// (0x00041e30) blid2_tripm_pane_g3_ParamLimits

0x91df,	// (0x00041e30) blid2_tripm_pane_g3

0x91f3,	// (0x00041e44) blid2_tripm_pane_g4_ParamLimits

0x91f3,	// (0x00041e44) blid2_tripm_pane_g4

0x9207,	// (0x00041e58) blid2_tripm_pane_g5_ParamLimits

0x9207,	// (0x00041e58) blid2_tripm_pane_g5

0x0005,

0xfaab,	// (0x000486fc) blid2_tripm_pane_g_ParamLimits

0xfaab,	// (0x000486fc) blid2_tripm_pane_g

0x9229,	// (0x00041e7a) blid2_tripm_pane_t1_ParamLimits

0x9229,	// (0x00041e7a) blid2_tripm_pane_t1

0x9240,	// (0x00041e91) blid2_tripm_pane_t2_ParamLimits

0x9240,	// (0x00041e91) blid2_tripm_pane_t2

0x9257,	// (0x00041ea8) blid2_tripm_pane_t3_ParamLimits

0x9257,	// (0x00041ea8) blid2_tripm_pane_t3

0x0003,

0xfab8,	// (0x00048709) blid2_tripm_pane_t_ParamLimits

0xfab8,	// (0x00048709) blid2_tripm_pane_t

0x929a,	// (0x00041eeb) cell_blid2_satellite_pane_ParamLimits

0x929a,	// (0x00041eeb) cell_blid2_satellite_pane

0x92b2,	// (0x00041f03) cell_blid2_satellite_pane_g1

0xd7ca,	// (0x0004641b) cell_blid2_satellite_pane_t1

0x1b46,	// (0x0003a797) blid2_speed_pane_g1

0xd7d8,	// (0x00046429) blid2_speed_pane_t1

0xd7e6,	// (0x00046437) blid2_speed_pane_t2

0x0001,

0xfac1,	// (0x00048712) blid2_speed_pane_t

0x1b46,	// (0x0003a797) blid2_navig_ring_pane_g1

0x92bb,	// (0x00041f0c) blid2_navig_ring_pane_g2

0x92c3,	// (0x00041f14) blid2_navig_ring_pane_g3

0x92cb,	// (0x00041f1c) blid2_navig_ring_pane_g4

0x92d3,	// (0x00041f24) blid2_navig_ring_pane_g5

0x0004,

0xfac6,	// (0x00048717) blid2_navig_ring_pane_g

0x11c1,	// (0x00039e12) bg_popup_window_pane_cp011

0xd7f4,	// (0x00046445) popup_blid2_search_window_g1

0xd7fc,	// (0x0004644d) popup_blid2_search_window_t1

0xd80a,	// (0x0004645b) popup_blid2_search_window_t2

0x0001,

0xfad1,	// (0x00048722) popup_blid2_search_window_t

0x1c53,	// (0x0003a8a4) main_browser_pane_g1

0x1927,	// (0x0003a578) main_browser_pane_ParamLimits

0x20c4,	// (0x0003ad15) bg_button_pane_cp011_ParamLimits

0x84d6,	// (0x00041127) cell_vitu2_function_pane_g1_ParamLimits

0x5d5f,	// (0x0003e9b0) bg_popup_sub_pane_cp22_ParamLimits

0x31a8,	// (0x0003bdf9) input_focus_pane_cp08_ParamLimits

0x8d2c,	// (0x0004197d) popup_vitu2_query_button_pane_ParamLimits

0x8d2c,	// (0x0004197d) popup_vitu2_query_button_pane

0x31bf,	// (0x0003be10) popup_vitu2_query_input_button_pane

0xd41b,	// (0x0004606c) popup_vitu2_query_window_g1_ParamLimits

0x31c7,	// (0x0003be18) popup_vitu2_query_window_g2_ParamLimits

0xf9d2,	// (0x00048623) popup_vitu2_query_window_g_ParamLimits

0x11c1,	// (0x00039e12) bg_button_pane_cp026

0x92db,	// (0x00041f2c) popup_vitu2_query_input_button_pane_g1

0x11c1,	// (0x00039e12) bg_button_pane_cp025

0xd818,	// (0x00046469) popup_vitu2_query_button_pane_t1

0x6fe3,	// (0x0003fc34) main_mp3_pane_t6

0x6ff1,	// (0x0003fc42) popup_slider_window_cp01

0xeed1,	// (0x00047b22) cam4_battery_pane

0xeed1,	// (0x00047b22) cam4_battery_pane_cp02

0xeed1,	// (0x00047b22) cam4_battery_pane_cp01

0xeed1,	// (0x00047b22) cam4_battery_pane_cp03

0x1b46,	// (0x0003a797) cam4_battery_pane_g1

0xd826,	// (0x00046477) cam4_battery_pane_g2

0x0001,

0xfad6,	// (0x00048727) cam4_battery_pane_g

0xc74b,	// (0x0004539c) popup_blid_sat_info2_window_t11

0x5a7c,	// (0x0003e6cd) aid_size_touch_mv_arrow_left_ParamLimits

0x5aa0,	// (0x0003e6f1) aid_size_touch_mv_arrow_right_ParamLimits

0x5af9,	// (0x0003e74a) navi_pane_g1_ParamLimits

0x5b05,	// (0x0003e756) navi_pane_g2_ParamLimits

0x5b2e,	// (0x0003e77f) navi_pane_g3_ParamLimits

0xf38b,	// (0x00047fdc) navi_pane_g_ParamLimits

0x5bde,	// (0x0003e82f) navi_pane_mv_t1_ParamLimits

0x7ac9,	// (0x0004071a) grid_imed_effect_pane_ParamLimits

0x4667,	// (0x0003d2b8) aid_placing_vt_slider_lsc

0x1b95,	// (0x0003a7e6) aid_placing_vt_slider_prt

0x20c4,	// (0x0003ad15) bg_tb_trans_pane_cp01_ParamLimits

0xc990,	// (0x000455e1) popup_image_details_window_g1_ParamLimits

0xc9a3,	// (0x000455f4) popup_image_details_window_g2_ParamLimits

0xc9b8,	// (0x00045609) popup_image_details_window_g3_ParamLimits

0xc9b8,	// (0x00045609) popup_image_details_window_g3

0xf6ca,	// (0x0004831b) popup_image_details_window_g_ParamLimits

0xc9cc,	// (0x0004561d) popup_image_details_window_t1_ParamLimits

0xc9de,	// (0x0004562f) popup_image_details_window_t2_ParamLimits

0xc9f7,	// (0x00045648) popup_image_details_window_t3_ParamLimits

0xca0b,	// (0x0004565c) popup_image_details_window_t4_ParamLimits

0xca26,	// (0x00045677) popup_image_details_window_t5_ParamLimits

0xf6d1,	// (0x00048322) popup_image_details_window_t_ParamLimits

0x8f4e,	// (0x00041b9f) cl_header_name_pane_ParamLimits

0x8f4e,	// (0x00041b9f) cl_header_name_pane

0x92e3,	// (0x00041f34) cl_header_name_pane_t1_ParamLimits

0x92e3,	// (0x00041f34) cl_header_name_pane_t1

0x9304,	// (0x00041f55) cl_header_name_pane_t2_ParamLimits

0x9304,	// (0x00041f55) cl_header_name_pane_t2

0x9346,	// (0x00041f97) cl_header_name_pane_t3_ParamLimits

0x9346,	// (0x00041f97) cl_header_name_pane_t3

0x0002,

0xfadb,	// (0x0004872c) cl_header_name_pane_t_ParamLimits

0xfadb,	// (0x0004872c) cl_header_name_pane_t

0x5baf,	// (0x0003e800) navi_pane_mv_g2_ParamLimits

0xd13d,	// (0x00045d8e) field_vitu2_entry_pane_g1_ParamLimits

0xd149,	// (0x00045d9a) field_vitu2_entry_pane_g2_ParamLimits

0x5d1b,	// (0x0003e96c) field_vitu2_entry_pane_g3_ParamLimits

0x5d1b,	// (0x0003e96c) field_vitu2_entry_pane_g3

0xf8d1,	// (0x00048522) field_vitu2_entry_pane_g_ParamLimits

0xef82,	// (0x00047bd3) cell_vitu2_itu_pane_g1_ParamLimits

0x846a,	// (0x000410bb) cell_vitu2_itu_pane_g2_ParamLimits

0x846a,	// (0x000410bb) cell_vitu2_itu_pane_g2

0x0001,

0xf8dd,	// (0x0004852e) cell_vitu2_itu_pane_g_ParamLimits

0xf8dd,	// (0x0004852e) cell_vitu2_itu_pane_g

0x20c4,	// (0x0003ad15) bg_vkb2_func_pane_cp05_ParamLimits

0x20c4,	// (0x0003ad15) bg_vkb2_func_pane_cp05

0x20c4,	// (0x0003ad15) bg_vkb2_func_pane_cp03

0x20c4,	// (0x0003ad15) bg_vkb2_func_pane_cp04

0x20c4,	// (0x0003ad15) bg_vkb2_func_pane_cp10_ParamLimits

0x20c4,	// (0x0003ad15) bg_vkb2_func_pane_cp10

0x32dc,	// (0x0003bf2d) bg_vkb2_func_pane_cp08

0x8ef9,	// (0x00041b4a) bg_vkb2_func_pane_cp06

0x8f06,	// (0x00041b57) bg_vkb2_func_pane_cp07

0xd75d,	// (0x000463ae) bg_vkb2_func_pane_cp11_ParamLimits

0xd75d,	// (0x000463ae) bg_vkb2_func_pane_cp11

0xd772,	// (0x000463c3) bg_vkb2_func_pane_cp12_ParamLimits

0xd772,	// (0x000463c3) bg_vkb2_func_pane_cp12

0x11c1,	// (0x00039e12) bg_vkb2_func_pane_cp09

0xd184,	// (0x00045dd5) bg_vkb2_func_pane_g1

0x1d64,	// (0x0003a9b5) bg_vkb2_func_pane_g2

0xd18c,	// (0x00045ddd) bg_vkb2_func_pane_g3

0xd194,	// (0x00045de5) bg_vkb2_func_pane_g4

0xd3d3,	// (0x00046024) bg_vkb2_func_pane_g5

0xd1ac,	// (0x00045dfd) bg_vkb2_func_pane_g6

0xd1b4,	// (0x00045e05) bg_vkb2_func_pane_g7

0xd1a4,	// (0x00045df5) bg_vkb2_func_pane_g8

0x1d44,	// (0x0003a995) bg_vkb2_func_pane_g9

0x0008,

0xfae2,	// (0x00048733) bg_vkb2_func_pane_g

0x9219,	// (0x00041e6a) blid2_tripm_pane_g6_ParamLimits

0x9219,	// (0x00041e6a) blid2_tripm_pane_g6

0xd013,	// (0x00045c64) mp4_progress_pane_g1

0x9288,	// (0x00041ed9) blid2_tripm_values_pane_ParamLimits

0x9288,	// (0x00041ed9) blid2_tripm_values_pane

0x9377,	// (0x00041fc8) blid2_tripm_values_pane_t1

0x9385,	// (0x00041fd6) blid2_tripm_values_pane_t2

0x9393,	// (0x00041fe4) blid2_tripm_values_pane_t3

0x93a1,	// (0x00041ff2) blid2_tripm_values_pane_t4

0x93af,	// (0x00042000) blid2_tripm_values_pane_t5

0x93bd,	// (0x0004200e) blid2_tripm_values_pane_t6

0x93cb,	// (0x0004201c) blid2_tripm_values_pane_t7

0x93d9,	// (0x0004202a) blid2_tripm_values_pane_t8

0x93e7,	// (0x00042038) blid2_tripm_values_pane_t9

0x0008,

0xfaf5,	// (0x00048746) blid2_tripm_values_pane_t

0x46a1,	// (0x0003d2f2) call_video_pane_t1_ParamLimits

0x46bb,	// (0x0003d30c) call_video_pane_t2_ParamLimits

0xf222,	// (0x00047e73) call_video_pane_t_ParamLimits

0x2fea,	// (0x0003bc3b) msg_header_pane_g1_ParamLimits

0x5fd3,	// (0x0003ec24) msg_header_pane_g2_ParamLimits

0x5fd3,	// (0x0003ec24) msg_header_pane_g2

0x0001,

0xf42e,	// (0x0004807f) msg_header_pane_g_ParamLimits

0xf42e,	// (0x0004807f) msg_header_pane_g

0x1927,	// (0x0003a578) main_clock2_pane_ParamLimits

0x77e0,	// (0x00040431) grid_clock2_toolbar_pane_ParamLimits

0x77e0,	// (0x00040431) grid_clock2_toolbar_pane

0x77e0,	// (0x00040431) listscroll_clock2_pane_ParamLimits

0x77e0,	// (0x00040431) listscroll_clock2_pane

0x78c3,	// (0x00040514) main_clock2_pane_t3_ParamLimits

0x78c3,	// (0x00040514) main_clock2_pane_t3

0x78e5,	// (0x00040536) main_clock2_pane_t4_ParamLimits

0x78e5,	// (0x00040536) main_clock2_pane_t4

0xd830,	// (0x00046481) cell_clock2_toolbar_pane

0xd838,	// (0x00046489) cell_clock2_toolbar_pane_cp01

0xd838,	// (0x00046489) cell_clock2_toolbar_pane_cp02

0xd840,	// (0x00046491) cell_clock2_toolbar_pane_cp03

0xd848,	// (0x00046499) list_clock2_pane

0xd850,	// (0x000464a1) scroll_pane_cp10

0xd858,	// (0x000464a9) list_single_clock2_pane_ParamLimits

0xd858,	// (0x000464a9) list_single_clock2_pane

0x1aec,	// (0x0003a73d) list_highlight_pane_cp08

0xd865,	// (0x000464b6) list_single_clock2_pane_t1

0xd873,	// (0x000464c4) list_single_clock2_pane_t2

0x0001,

0xfb08,	// (0x00048759) list_single_clock2_pane_t

0x11c1,	// (0x00039e12) bg_button_pane_cp10

0xd881,	// (0x000464d2) cell_clock2_toolbar_pane_g1

0x5fe7,	// (0x0003ec38) aid_main_viewer_pane_g1_ParamLimits

0x5fe7,	// (0x0003ec38) aid_main_viewer_pane_g1

0x5ff3,	// (0x0003ec44) aid_main_viewer_pane_g2_ParamLimits

0x5ff3,	// (0x0003ec44) aid_main_viewer_pane_g2

0x5fff,	// (0x0003ec50) aid_main_viewer_pane_g3_ParamLimits

0x5fff,	// (0x0003ec50) aid_main_viewer_pane_g3

0x600e,	// (0x0003ec5f) aid_main_viewer_pane_g4_ParamLimits

0x600e,	// (0x0003ec5f) aid_main_viewer_pane_g4

0x0003,

0xf43f,	// (0x00048090) aid_main_viewer_pane_g_ParamLimits

0xf43f,	// (0x00048090) aid_main_viewer_pane_g

0x20c4,	// (0x0003ad15) main_calc_pane_ParamLimits

0x6987,	// (0x0003f5d8) main_dialer2_pane_ParamLimits

0x11c1,	// (0x00039e12) main_cam6_pane

0x11c1,	// (0x00039e12) main_vid6_pane

0x77ec,	// (0x0004043d) listscroll_gen_pane_cp06_ParamLimits

0x77ec,	// (0x0004043d) listscroll_gen_pane_cp06

0x7906,	// (0x00040557) main_clock2_pane_t5_ParamLimits

0x7906,	// (0x00040557) main_clock2_pane_t5

0x795e,	// (0x000405af) aid_call2_pane_cp10_ParamLimits

0x7970,	// (0x000405c1) aid_call_pane_cp10_ParamLimits

0x5a0b,	// (0x0003e65c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x5a0b,	// (0x0003e65c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7982,	// (0x000405d3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7982,	// (0x000405d3) popup_clock_analogue_window_cp10_g4_ParamLimits

0x5a0b,	// (0x0003e65c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf786,	// (0x000483d7) popup_clock_analogue_window_cp10_g_ParamLimits

0x7994,	// (0x000405e5) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd06b,	// (0x00045cbc) cell_dialer2_keypad_pane_g2_ParamLimits

0xd06b,	// (0x00045cbc) cell_dialer2_keypad_pane_g2

0x0001,

0xf870,	// (0x000484c1) cell_dialer2_keypad_pane_g_ParamLimits

0xf870,	// (0x000484c1) cell_dialer2_keypad_pane_g

0x20b0,	// (0x0003ad01) cell_dialer2_keypad_pane_t1

0x87a5,	// (0x000413f6) main_cset_text2_pane_ParamLimits

0x87a5,	// (0x000413f6) main_cset_text2_pane

0xd5f5,	// (0x00046246) area_vitu2_query_pane_g1_ParamLimits

0x32a5,	// (0x0003bef6) area_vitu2_query_pane_g2_ParamLimits

0xfa25,	// (0x00048676) area_vitu2_query_pane_g_ParamLimits

0xd679,	// (0x000462ca) area_vitu2_query_pane_t7_ParamLimits

0xd679,	// (0x000462ca) area_vitu2_query_pane_t7

0x8ef9,	// (0x00041b4a) bg_button_pane_cp018_ParamLimits

0x8f06,	// (0x00041b57) bg_button_pane_cp021_ParamLimits

0x32dc,	// (0x0003bf2d) bg_button_pane_cp022_ParamLimits

0x32dc,	// (0x0003bf2d) bg_vkb2_func_pane_cp08_ParamLimits

0x8ef9,	// (0x00041b4a) bg_vkb2_func_pane_cp06_ParamLimits

0x8f06,	// (0x00041b57) bg_vkb2_func_pane_cp07_ParamLimits

0x32eb,	// (0x0003bf3c) input_focus_pane_cp09_ParamLimits

0xf079,	// (0x00047cca) cam6_autofocus_pane_ParamLimits

0xf079,	// (0x00047cca) cam6_autofocus_pane

0x93f5,	// (0x00042046) cam6_image_uncrop_pane_ParamLimits

0x93f5,	// (0x00042046) cam6_image_uncrop_pane

0x9402,	// (0x00042053) cam6_indi_pane_ParamLimits

0x9402,	// (0x00042053) cam6_indi_pane

0x9418,	// (0x00042069) cam6_mode_pane_ParamLimits

0x9418,	// (0x00042069) cam6_mode_pane

0x942a,	// (0x0004207b) cam6_timer_pane_ParamLimits

0x942a,	// (0x0004207b) cam6_timer_pane

0x9436,	// (0x00042087) cam6_zoom_pane_ParamLimits

0x9436,	// (0x00042087) cam6_zoom_pane

0x9442,	// (0x00042093) cam6_mode_pane_g1_ParamLimits

0x9442,	// (0x00042093) cam6_mode_pane_g1

0x9452,	// (0x000420a3) cam6_mode_pane_g2_ParamLimits

0x9452,	// (0x000420a3) cam6_mode_pane_g2

0x9462,	// (0x000420b3) cam6_mode_pane_g3_ParamLimits

0x9462,	// (0x000420b3) cam6_mode_pane_g3

0x9472,	// (0x000420c3) cam6_mode_pane_g4_ParamLimits

0x9472,	// (0x000420c3) cam6_mode_pane_g4

0x0003,

0xfb0d,	// (0x0004875e) cam6_mode_pane_g_ParamLimits

0xfb0d,	// (0x0004875e) cam6_mode_pane_g

0xc529,	// (0x0004517a) bg_tb_trans_pane_cp08_ParamLimits

0xc529,	// (0x0004517a) bg_tb_trans_pane_cp08

0xd889,	// (0x000464da) cam6_battery_pane_ParamLimits

0xd889,	// (0x000464da) cam6_battery_pane

0xd89f,	// (0x000464f0) cam6_indi_pane_g1_ParamLimits

0xd89f,	// (0x000464f0) cam6_indi_pane_g1

0xd8b1,	// (0x00046502) cam6_indi_pane_g2_ParamLimits

0xd8b1,	// (0x00046502) cam6_indi_pane_g2

0xd8c3,	// (0x00046514) cam6_indi_pane_g3_ParamLimits

0xd8c3,	// (0x00046514) cam6_indi_pane_g3

0x0002,

0xfb16,	// (0x00048767) cam6_indi_pane_g_ParamLimits

0xfb16,	// (0x00048767) cam6_indi_pane_g

0xd8d5,	// (0x00046526) cam6_indi_pane_t1_ParamLimits

0xd8d5,	// (0x00046526) cam6_indi_pane_t1

0x829e,	// (0x00040eef) cam6_autofocus_pane_g1

0x82a6,	// (0x00040ef7) cam6_autofocus_pane_g2

0x82ae,	// (0x00040eff) cam6_autofocus_pane_g3

0x82b6,	// (0x00040f07) cam6_autofocus_pane_g4

0x0003,

0xfb1d,	// (0x0004876e) cam6_autofocus_pane_g

0xd8fb,	// (0x0004654c) cam6_timer_pane_g1

0xd903,	// (0x00046554) cam6_timer_pane_t1

0xd911,	// (0x00046562) cam6_zoom_cont_pane

0xd919,	// (0x0004656a) cam6_zoom_pane_g1

0xd921,	// (0x00046572) cam6_zoom_pane_g2

0x9482,	// (0x000420d3) cam6_zoom_pane_g3

0x0002,

0xfb26,	// (0x00048777) cam6_zoom_pane_g

0x1b46,	// (0x0003a797) cam6_battery_pane_g1

0x1b46,	// (0x0003a797) cam6_battery_pane_g2

0x0001,

0xf3ef,	// (0x00048040) cam6_battery_pane_g

0xd929,	// (0x0004657a) cam6_zoom_cont_pane_g1

0xd932,	// (0x00046583) cam6_zoom_cont_pane_g2

0xd93b,	// (0x0004658c) cam6_zoom_cont_pane_g3

0x0002,

0xfb2d,	// (0x0004877e) cam6_zoom_cont_pane_g

0x949f,	// (0x000420f0) cam6_mode_pane_cp_ParamLimits

0x949f,	// (0x000420f0) cam6_mode_pane_cp

0x9436,	// (0x00042087) cam6_zoom_pane_cp_ParamLimits

0x9436,	// (0x00042087) cam6_zoom_pane_cp

0x94b1,	// (0x00042102) vid6_image_uncrop_cif_pane_ParamLimits

0x94b1,	// (0x00042102) vid6_image_uncrop_cif_pane

0x94bf,	// (0x00042110) vid6_image_uncrop_nhd_pane_ParamLimits

0x94bf,	// (0x00042110) vid6_image_uncrop_nhd_pane

0x93f5,	// (0x00042046) vid6_image_uncrop_vga_pane_ParamLimits

0x93f5,	// (0x00042046) vid6_image_uncrop_vga_pane

0x94cc,	// (0x0004211d) vid6_image_uncrop_wvga_pane_ParamLimits

0x94cc,	// (0x0004211d) vid6_image_uncrop_wvga_pane

0x94d9,	// (0x0004212a) vid6_indi_pane_ParamLimits

0x94d9,	// (0x0004212a) vid6_indi_pane

0xc529,	// (0x0004517a) bg_tb_trans_pane_cp09_ParamLimits

0xc529,	// (0x0004517a) bg_tb_trans_pane_cp09

0xd94f,	// (0x000465a0) cam6_battery_pane_cp_ParamLimits

0xd94f,	// (0x000465a0) cam6_battery_pane_cp

0xd95b,	// (0x000465ac) vid6_indi_pane_g1_ParamLimits

0xd95b,	// (0x000465ac) vid6_indi_pane_g1

0xd96d,	// (0x000465be) vid6_indi_pane_g2_ParamLimits

0xd96d,	// (0x000465be) vid6_indi_pane_g2

0xd97f,	// (0x000465d0) vid6_indi_pane_g3_ParamLimits

0xd97f,	// (0x000465d0) vid6_indi_pane_g3

0xd994,	// (0x000465e5) vid6_indi_pane_g4_ParamLimits

0xd994,	// (0x000465e5) vid6_indi_pane_g4

0xd9a9,	// (0x000465fa) vid6_indi_pane_g5_ParamLimits

0xd9a9,	// (0x000465fa) vid6_indi_pane_g5

0x0004,

0xfb34,	// (0x00048785) vid6_indi_pane_g_ParamLimits

0xfb34,	// (0x00048785) vid6_indi_pane_g

0xd9c3,	// (0x00046614) vid6_indi_pane_t1_ParamLimits

0xd9c3,	// (0x00046614) vid6_indi_pane_t1

0xd9d9,	// (0x0004662a) vid6_indi_pane_t2_ParamLimits

0xd9d9,	// (0x0004662a) vid6_indi_pane_t2

0xda01,	// (0x00046652) vid6_indi_pane_t3_ParamLimits

0xda01,	// (0x00046652) vid6_indi_pane_t3

0xda29,	// (0x0004667a) vid6_indi_pane_t4_ParamLimits

0xda29,	// (0x0004667a) vid6_indi_pane_t4

0x0003,

0xfb3f,	// (0x00048790) vid6_indi_pane_t_ParamLimits

0xfb3f,	// (0x00048790) vid6_indi_pane_t

0xda4d,	// (0x0004669e) wait_bar_pane_cp08

0x94f0,	// (0x00042141) main_cset_text2_pane_t1_ParamLimits

0x94f0,	// (0x00042141) main_cset_text2_pane_t1

0x948a,	// (0x000420db) listscroll_gen_pane_cp06_t1_ParamLimits

0x948a,	// (0x000420db) listscroll_gen_pane_cp06_t1

0x11c1,	// (0x00039e12) main_cam6_set_pane

0x18b1,	// (0x0003a502) bg_tb_trans_pane_cp06_ParamLimits

0xeed9,	// (0x00047b2a) cam4_indicators_pane_g1_ParamLimits

0xeee9,	// (0x00047b3a) cam4_indicators_pane_g2_ParamLimits

0xf8ad,	// (0x000484fe) cam4_indicators_pane_g_ParamLimits

0xef09,	// (0x00047b5a) cam4_indicators_pane_t1_ParamLimits

0x20c4,	// (0x0003ad15) bg_tb_trans_pane_cp07_ParamLimits

0xeed9,	// (0x00047b2a) vid4_indicators_pane_g1_ParamLimits

0xef2b,	// (0x00047b7c) vid4_indicators_pane_g2_ParamLimits

0xef3b,	// (0x00047b8c) vid4_indicators_pane_g3_ParamLimits

0xef4c,	// (0x00047b9d) vid4_indicators_pane_g4_ParamLimits

0xf8bf,	// (0x00048510) vid4_indicators_pane_g_ParamLimits

0xef68,	// (0x00047bb9) vid4_indicators_pane_t1_ParamLimits

0xeff0,	// (0x00047c41) vid4_progress_pane_g1_ParamLimits

0xefff,	// (0x00047c50) vid4_progress_pane_g2_ParamLimits

0xf00e,	// (0x00047c5f) vid4_progress_pane_g3_ParamLimits

0xf01d,	// (0x00047c6e) vid4_progress_pane_g4_ParamLimits

0xfa70,	// (0x000486c1) vid4_progress_pane_g_ParamLimits

0xf029,	// (0x00047c7a) vid4_progress_pane_t1_ParamLimits

0xf03f,	// (0x00047c90) vid4_progress_pane_t2_ParamLimits

0xf054,	// (0x00047ca5) vid4_progress_pane_t3_ParamLimits

0xfa7b,	// (0x000486cc) vid4_progress_pane_t_ParamLimits

0xf069,	// (0x00047cba) wait_bar_pane_cp07_ParamLimits

0x950b,	// (0x0004215c) main_cam6_set_pane_g2_ParamLimits

0x950b,	// (0x0004215c) main_cam6_set_pane_g2

0x952d,	// (0x0004217e) main_cset6_listscroll_pane_ParamLimits

0x952d,	// (0x0004217e) main_cset6_listscroll_pane

0x9547,	// (0x00042198) main_cset6_slider_pane_ParamLimits

0x9547,	// (0x00042198) main_cset6_slider_pane

0x955d,	// (0x000421ae) main_cset6_text2_pane_ParamLimits

0x955d,	// (0x000421ae) main_cset6_text2_pane

0xda5d,	// (0x000466ae) main_cset6_text_pane

0xd29a,	// (0x00045eeb) main_cset_list_pane_copy1_ParamLimits

0xd29a,	// (0x00045eeb) main_cset_list_pane_copy1

0xd2aa,	// (0x00045efb) scroll_pane_cp028_copy1

0x956b,	// (0x000421bc) cset_list_set_pane_copy1

0x957d,	// (0x000421ce) aid_position_infowindow_above_copy1

0x9585,	// (0x000421d6) aid_position_infowindow_below_copy1

0x330e,	// (0x0003bf5f) cset_list_set_pane_g1_copy1

0x3316,	// (0x0003bf67) cset_list_set_pane_g3_copy1_ParamLimits

0x3316,	// (0x0003bf67) cset_list_set_pane_g3_copy1

0x3325,	// (0x0003bf76) cset_list_set_pane_t1_copy1_ParamLimits

0x3325,	// (0x0003bf76) cset_list_set_pane_t1_copy1

0x20c4,	// (0x0003ad15) list_highlight_pane_cp021_copy1_ParamLimits

0x20c4,	// (0x0003ad15) list_highlight_pane_cp021_copy1

0xda65,	// (0x000466b6) cset6_slider_pane_ParamLimits

0xda65,	// (0x000466b6) cset6_slider_pane

0xda91,	// (0x000466e2) main_cset6_slider_pane_g1_ParamLimits

0xda91,	// (0x000466e2) main_cset6_slider_pane_g1

0x958d,	// (0x000421de) main_cset6_slider_pane_g2_ParamLimits

0x958d,	// (0x000421de) main_cset6_slider_pane_g2

0xd2bf,	// (0x00045f10) main_cset6_slider_pane_g3_ParamLimits

0xd2bf,	// (0x00045f10) main_cset6_slider_pane_g3

0x8863,	// (0x000414b4) main_cset6_slider_pane_g4_ParamLimits

0x8863,	// (0x000414b4) main_cset6_slider_pane_g4

0x88ab,	// (0x000414fc) main_cset6_slider_pane_g5_ParamLimits

0x88ab,	// (0x000414fc) main_cset6_slider_pane_g5

0xd2bf,	// (0x00045f10) main_cset6_slider_pane_g7_ParamLimits

0xd2bf,	// (0x00045f10) main_cset6_slider_pane_g7

0xd2cb,	// (0x00045f1c) main_cset6_slider_pane_g8_ParamLimits

0xd2cb,	// (0x00045f1c) main_cset6_slider_pane_g8

0x884b,	// (0x0004149c) main_cset6_slider_pane_g9_ParamLimits

0x884b,	// (0x0004149c) main_cset6_slider_pane_g9

0x8857,	// (0x000414a8) main_cset6_slider_pane_g10_ParamLimits

0x8857,	// (0x000414a8) main_cset6_slider_pane_g10

0x8863,	// (0x000414b4) main_cset6_slider_pane_g11_ParamLimits

0x8863,	// (0x000414b4) main_cset6_slider_pane_g11

0x886f,	// (0x000414c0) main_cset6_slider_pane_g12_ParamLimits

0x886f,	// (0x000414c0) main_cset6_slider_pane_g12

0x887b,	// (0x000414cc) main_cset6_slider_pane_g13_ParamLimits

0x887b,	// (0x000414cc) main_cset6_slider_pane_g13

0x8887,	// (0x000414d8) main_cset6_slider_pane_g14_ParamLimits

0x8887,	// (0x000414d8) main_cset6_slider_pane_g14

0x95b5,	// (0x00042206) main_cset6_slider_pane_g15_ParamLimits

0x95b5,	// (0x00042206) main_cset6_slider_pane_g15

0x88ab,	// (0x000414fc) main_cset6_slider_pane_g16_ParamLimits

0x88ab,	// (0x000414fc) main_cset6_slider_pane_g16

0x88b7,	// (0x00041508) main_cset6_slider_pane_g17_ParamLimits

0x88b7,	// (0x00041508) main_cset6_slider_pane_g17

0x0011,

0xfb48,	// (0x00048799) main_cset6_slider_pane_g_ParamLimits

0xfb48,	// (0x00048799) main_cset6_slider_pane_g

0xdab9,	// (0x0004670a) main_cset6_slider_pane_t1_ParamLimits

0xdab9,	// (0x0004670a) main_cset6_slider_pane_t1

0xdafa,	// (0x0004674b) main_cset6_slider_pane_t2_ParamLimits

0xdafa,	// (0x0004674b) main_cset6_slider_pane_t2

0xdb25,	// (0x00046776) main_cset6_slider_pane_t3_ParamLimits

0xdb25,	// (0x00046776) main_cset6_slider_pane_t3

0x95cd,	// (0x0004221e) main_cset6_slider_pane_t4_ParamLimits

0x95cd,	// (0x0004221e) main_cset6_slider_pane_t4

0x95f8,	// (0x00042249) main_cset6_slider_pane_t5_ParamLimits

0x95f8,	// (0x00042249) main_cset6_slider_pane_t5

0xdb50,	// (0x000467a1) main_cset6_slider_pane_t7_ParamLimits

0xdb50,	// (0x000467a1) main_cset6_slider_pane_t7

0x9623,	// (0x00042274) main_cset6_slider_pane_t8_ParamLimits

0x9623,	// (0x00042274) main_cset6_slider_pane_t8

0x9647,	// (0x00042298) main_cset6_slider_pane_t9_ParamLimits

0x9647,	// (0x00042298) main_cset6_slider_pane_t9

0x966b,	// (0x000422bc) main_cset6_slider_pane_t10_ParamLimits

0x966b,	// (0x000422bc) main_cset6_slider_pane_t10

0x968f,	// (0x000422e0) main_cset6_slider_pane_t11_ParamLimits

0x968f,	// (0x000422e0) main_cset6_slider_pane_t11

0xdb86,	// (0x000467d7) main_cset6_slider_pane_t14_ParamLimits

0xdb86,	// (0x000467d7) main_cset6_slider_pane_t14

0xdbbf,	// (0x00046810) main_cset6_slider_pane_t15_ParamLimits

0xdbbf,	// (0x00046810) main_cset6_slider_pane_t15

0x000b,

0xfb6d,	// (0x000487be) main_cset6_slider_pane_t_ParamLimits

0xfb6d,	// (0x000487be) main_cset6_slider_pane_t

0xd38d,	// (0x00045fde) cset_slider_pane_g1_copy1

0xd396,	// (0x00045fe7) cset_slider_pane_g2_copy1

0xd39f,	// (0x00045ff0) cset_slider_pane_g3_copy1

0x11c1,	// (0x00039e12) bg_popup_sub_pane_cp011_copy1

0xd427,	// (0x00046078) main_cset_text_pane_g1_copy1

0xd42f,	// (0x00046080) main_cset_text_pane_t1_copy1

0xd43d,	// (0x0004608e) main_cset_text_pane_t2_copy1

0xd44b,	// (0x0004609c) main_cset_text_pane_t3_copy1

0xd459,	// (0x000460aa) main_cset_text_pane_t4_copy1

0xd467,	// (0x000460b8) main_cset_text_pane_t5_copy1

0xd475,	// (0x000460c6) main_cset_text_pane_t6_copy1

0xd483,	// (0x000460d4) main_cset_text_pane_t7_copy1

0x96b3,	// (0x00042304) main_cset_text2_pane_t1_copy1

0x20c4,	// (0x0003ad15) main_ncimui_pane

0x6b95,	// (0x0003f7e6) popup_query_ncimui_window_ParamLimits

0x6b95,	// (0x0003f7e6) popup_query_ncimui_window

0xcb03,	// (0x00045754) field_cale_ev2_pane_g4_ParamLimits

0xcb03,	// (0x00045754) field_cale_ev2_pane_g4

0x7d4a,	// (0x0004099b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7d4a,	// (0x0004099b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf847,	// (0x00048498) cell_video_dialer_keypad_pane_g_ParamLimits

0xf847,	// (0x00048498) cell_video_dialer_keypad_pane_g

0x7d62,	// (0x000409b3) cell_video_dialer_keypad_pane_t1

0x11c1,	// (0x00039e12) bg_popup_window_pane_cp012

0x567e,	// (0x0003e2cf) heading_pane_cp06

0xdc48,	// (0x00046899) ncim_query_content_pane

0x11c1,	// (0x00039e12) bg_popup_heading_pane_cp01

0xdc50,	// (0x000468a1) ncim_heading_pane_t1

0xdc5e,	// (0x000468af) ncim_indicator_popup_pane

0xdc70,	// (0x000468c1) ncim_query_button_pane

0xdc84,	// (0x000468d5) ncim_query_content_pane_t1

0xdc96,	// (0x000468e7) ncim_query_content_pane_t2

0x0005,

0xfbb1,	// (0x00048802) ncim_query_content_pane_t

0xdcd0,	// (0x00046921) ncim_query_list_pane

0xdce2,	// (0x00046933) ncim_query_popup_pane

0xdc5e,	// (0x000468af) ncim_indicator_popup_pane_ParamLimits

0x97f2,	// (0x00042443) ncim_query_content_pane_g1_ParamLimits

0x97f2,	// (0x00042443) ncim_query_content_pane_g1

0xdc84,	// (0x000468d5) ncim_query_content_pane_t1_ParamLimits

0xdc96,	// (0x000468e7) ncim_query_content_pane_t2_ParamLimits

0x97fe,	// (0x0004244f) ncim_query_content_pane_t3_ParamLimits

0x97fe,	// (0x0004244f) ncim_query_content_pane_t3

0x9826,	// (0x00042477) ncim_query_content_pane_t4_ParamLimits

0x9826,	// (0x00042477) ncim_query_content_pane_t4

0x984e,	// (0x0004249f) ncim_query_content_pane_t5_ParamLimits

0x984e,	// (0x0004249f) ncim_query_content_pane_t5

0xdca8,	// (0x000468f9) ncim_query_content_pane_t6_ParamLimits

0xdca8,	// (0x000468f9) ncim_query_content_pane_t6

0xfbb1,	// (0x00048802) ncim_query_content_pane_t_ParamLimits

0xdcd0,	// (0x00046921) ncim_query_list_pane_ParamLimits

0xdce2,	// (0x00046933) ncim_query_popup_pane_ParamLimits

0xdcf6,	// (0x00046947) wait_bar_pane_cp04

0x11c1,	// (0x00039e12) input_focus_pane_cp011

0xdcfe,	// (0x0004694f) ncim_query_popup_pane_t1

0xdd0c,	// (0x0004695d) ncim_list_query_list_pane_ParamLimits

0xdd0c,	// (0x0004695d) ncim_list_query_list_pane

0x11c1,	// (0x00039e12) bg_button_pane_cp027

0xdd1f,	// (0x00046970) ncim_query_button_pane_g1

0x11c1,	// (0x00039e12) list_highlight_pane_cp012

0xdd29,	// (0x0004697a) ncim_list_query_list_pane_g1

0xdd31,	// (0x00046982) ncim_list_query_list_pane_t1

0xeef9,	// (0x00047b4a) cam4_indicators_pane_g3_ParamLimits

0xeef9,	// (0x00047b4a) cam4_indicators_pane_g3

0xef58,	// (0x00047ba9) vid4_indicators_pane_g5_ParamLimits

0xef58,	// (0x00047ba9) vid4_indicators_pane_g5

0x200d,	// (0x0003ac5e) vid4_progress_pane_g5_ParamLimits

0x200d,	// (0x0003ac5e) vid4_progress_pane_g5

0x96e2,	// (0x00042333) main_ncimui_pane_g1

0x9748,	// (0x00042399) ncimui_group_query_pane_ParamLimits

0x9748,	// (0x00042399) ncimui_group_query_pane

0x9790,	// (0x000423e1) ncimui_list_pane_ParamLimits

0x9790,	// (0x000423e1) ncimui_list_pane

0x97b5,	// (0x00042406) ncimui_text_pane_ParamLimits

0x97b5,	// (0x00042406) ncimui_text_pane

0x9876,	// (0x000424c7) ncimui_text_pane_t1_ParamLimits

0x9876,	// (0x000424c7) ncimui_text_pane_t1

0xdd48,	// (0x00046999) ncimui_list_single_graphic_pane_ParamLimits

0xdd48,	// (0x00046999) ncimui_list_single_graphic_pane

0x9894,	// (0x000424e5) ncimui_query_pane_ParamLimits

0x9894,	// (0x000424e5) ncimui_query_pane

0x11c1,	// (0x00039e12) list_highlight_pane_cp013

0xdd58,	// (0x000469a9) ncim_list_query_list_pane_t1_copy1

0xdd66,	// (0x000469b7) ncim_list_single_graphic_pane_g1

0xdd6e,	// (0x000469bf) ncim_query_button_pane_cp01

0xdd7a,	// (0x000469cb) ncim_query_entry_pane_ParamLimits

0xdd7a,	// (0x000469cb) ncim_query_entry_pane

0xdd8d,	// (0x000469de) ncimui_query_pane_g1

0xdd99,	// (0x000469ea) ncimui_query_pane_t1_ParamLimits

0xdd99,	// (0x000469ea) ncimui_query_pane_t1

0x20c4,	// (0x0003ad15) input_focus_pane_cp012

0xddb2,	// (0x00046a03) ncim_query_entry_pane_t1

0x1927,	// (0x0003a578) main_im_pane_ParamLimits

0x20c4,	// (0x0003ad15) main_mobtv_pane_ParamLimits

0x20c4,	// (0x0003ad15) main_mobtv_pane

0x884b,	// (0x0004149c) main_cset6_slider_pane_g18_ParamLimits

0x884b,	// (0x0004149c) main_cset6_slider_pane_g18

0x887b,	// (0x000414cc) main_cset6_slider_pane_g19_ParamLimits

0x887b,	// (0x000414cc) main_cset6_slider_pane_g19

0x18cd,	// (0x0003a51e) bg_main_mobtv_pane_ParamLimits

0x18cd,	// (0x0003a51e) bg_main_mobtv_pane

0x98a4,	// (0x000424f5) main_mobtv_info_pane

0x98ad,	// (0x000424fe) main_mobtv_loading_pane_ParamLimits

0x98ad,	// (0x000424fe) main_mobtv_loading_pane

0xddc4,	// (0x00046a15) main_mobtv_pg_channel_list_pane

0xddce,	// (0x00046a1f) main_mobtv_pg_hdr_pane

0x98ba,	// (0x0004250b) main_mobtv_programe_curr_pane_ParamLimits

0x98ba,	// (0x0004250b) main_mobtv_programe_curr_pane

0x98c7,	// (0x00042518) main_mobtv_programe_next_pane_ParamLimits

0x98c7,	// (0x00042518) main_mobtv_programe_next_pane

0xddd7,	// (0x00046a28) popup_mobtv_noti_window

0x1b46,	// (0x0003a797) main_tv_pg_hdr_pane_g1

0xdddf,	// (0x00046a30) main_tv_pg_hdr_pane_g2

0xdde7,	// (0x00046a38) main_tv_pg_hdr_pane_g3

0xddef,	// (0x00046a40) main_tv_pg_hdr_pane_g4

0xddf7,	// (0x00046a48) main_tv_pg_hdr_pane_g5

0xddff,	// (0x00046a50) main_tv_pg_hdr_pane_g6

0xde07,	// (0x00046a58) main_tv_pg_hdr_pane_g7

0xde0f,	// (0x00046a60) main_tv_pg_hdr_pane_g8

0xde17,	// (0x00046a68) main_tv_pg_hdr_pane_g9

0xde1f,	// (0x00046a70) main_tv_pg_hdr_pane_g10

0xde29,	// (0x00046a7a) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbe,	// (0x0004880f) main_tv_pg_hdr_pane_g

0xde33,	// (0x00046a84) main_tv_pg_hdr_pane_t1

0xde41,	// (0x00046a92) main_tv_pg_hdr_pane_t2

0xde4f,	// (0x00046aa0) main_tv_pg_hdr_pane_t3

0xde5d,	// (0x00046aae) main_tv_pg_hdr_pane_t4

0xde6b,	// (0x00046abc) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd5,	// (0x00048826) main_tv_pg_hdr_pane_t

0xde79,	// (0x00046aca) single_mobtv_pg_channel_pane_ParamLimits

0xde79,	// (0x00046aca) single_mobtv_pg_channel_pane

0xde8b,	// (0x00046adc) single_mobtv_pg_channel_table_pane

0xde94,	// (0x00046ae5) single_mobtv_pg_channel_thumb_pane

0xde9d,	// (0x00046aee) single_tv_pg_channel_pane_g1

0xdea6,	// (0x00046af7) single_tv_pg_channel_pane_g2

0x0001,

0xfbe0,	// (0x00048831) single_tv_pg_channel_pane_g

0x18b1,	// (0x0003a502) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x18b1,	// (0x0003a502) bg_single_mobtv_pg_channel_thumb_pane

0xdeaf,	// (0x00046b00) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdeaf,	// (0x00046b00) single_mobtv_pg_channel_thumb_pane_g1

0xdebd,	// (0x00046b0e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdebd,	// (0x00046b0e) single_mobtv_pg_channel_thumb_pane_g2

0xdec9,	// (0x00046b1a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdec9,	// (0x00046b1a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe5,	// (0x00048836) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe5,	// (0x00048836) single_mobtv_pg_channel_thumb_pane_g

0xded5,	// (0x00046b26) single_mobtv_pg_channel_thumb_pane_t1

0xdee3,	// (0x00046b34) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbec,	// (0x0004883d) single_mobtv_pg_channel_thumb_pane_t

0x1b46,	// (0x0003a797) bg_single_mobtv_pg_channel_table_pane_g1

0x1b46,	// (0x0003a797) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3ef,	// (0x00048040) bg_single_mobtv_pg_channel_table_pane_g

0xdef1,	// (0x00046b42) single_mobtv_pg_channel_table_pane_t1

0xdeff,	// (0x00046b50) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf1,	// (0x00048842) single_mobtv_pg_channel_table_pane_t

0x98dc,	// (0x0004252d) main_mobtv_info_pane_g1_ParamLimits

0x98dc,	// (0x0004252d) main_mobtv_info_pane_g1

0x98f8,	// (0x00042549) main_mobtv_info_pane_t1_ParamLimits

0x98f8,	// (0x00042549) main_mobtv_info_pane_t1

0x995e,	// (0x000425af) main_mobtv_info_pane_t2_ParamLimits

0x995e,	// (0x000425af) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x0004884c) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x0004884c) main_mobtv_info_pane_t

0x99e1,	// (0x00042632) wait_bar_pane_cp05

0x99f1,	// (0x00042642) main_mobtv_loading_pane_g1_ParamLimits

0x99f1,	// (0x00042642) main_mobtv_loading_pane_g1

0x9a02,	// (0x00042653) main_mobtv_loading_pane_g2_ParamLimits

0x9a02,	// (0x00042653) main_mobtv_loading_pane_g2

0x9a0e,	// (0x0004265f) main_mobtv_loading_pane_g3_ParamLimits

0x9a0e,	// (0x0004265f) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x00048853) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x00048853) main_mobtv_loading_pane_g

0xdf0d,	// (0x00046b5e) main_mobtv_loading_pane_t1_ParamLimits

0xdf0d,	// (0x00046b5e) main_mobtv_loading_pane_t1

0xdf25,	// (0x00046b76) main_mobtv_loading_pane_t2_ParamLimits

0xdf25,	// (0x00046b76) main_mobtv_loading_pane_t2

0x0001,

0xfc09,	// (0x0004885a) main_mobtv_loading_pane_t_ParamLimits

0xfc09,	// (0x0004885a) main_mobtv_loading_pane_t

0x9a1f,	// (0x00042670) wait_bar_pane_cp06_ParamLimits

0x9a1f,	// (0x00042670) wait_bar_pane_cp06

0xdf49,	// (0x00046b9a) main_mobtv_programe_curr_pane_t1

0xdf57,	// (0x00046ba8) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0e,	// (0x0004885f) main_mobtv_programe_curr_pane_t

0xdf65,	// (0x00046bb6) main_mobtv_programe_next_pane_t1

0xdf73,	// (0x00046bc4) main_mobtv_programe_next_pane_t2

0xdf81,	// (0x00046bd2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc13,	// (0x00048864) main_mobtv_programe_next_pane_t

0x11c1,	// (0x00039e12) bg_popup_mobtv_noti_window_pane

0xdf8f,	// (0x00046be0) popup_mobtv_noti_window_g1

0xdf97,	// (0x00046be8) popup_mobtv_noti_window_t1

0xdfa5,	// (0x00046bf6) popup_mobtv_noti_window_t2

0x0001,

0xfc1a,	// (0x0004886b) popup_mobtv_noti_window_t

0x1b46,	// (0x0003a797) bg_popup_mobtv_noti_window_pane_g1

0x11c1,	// (0x00039e12) sc_clock_pane

0x11c1,	// (0x00039e12) main_fs_bigclock_pane

0x9272,	// (0x00041ec3) blid2_tripm_pane_t4_ParamLimits

0x9272,	// (0x00041ec3) blid2_tripm_pane_t4

0x9a2e,	// (0x0004267f) sc_clock_pane_g1_ParamLimits

0x9a2e,	// (0x0004267f) sc_clock_pane_g1

0x9a40,	// (0x00042691) sc_clock_pane_t1_ParamLimits

0x9a40,	// (0x00042691) sc_clock_pane_t1

0x9a62,	// (0x000426b3) sc_clock_pane_t2_ParamLimits

0x9a62,	// (0x000426b3) sc_clock_pane_t2

0x9a78,	// (0x000426c9) sc_clock_pane_t3_ParamLimits

0x9a78,	// (0x000426c9) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x00048870) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x00048870) sc_clock_pane_t

0xa448,	// (0x00043099) main_fs_bigclock_indicator_pane_ParamLimits

0xa448,	// (0x00043099) main_fs_bigclock_indicator_pane

0x9b14,	// (0x00042765) main_fs_bigclock_pane_g1_ParamLimits

0x9b14,	// (0x00042765) main_fs_bigclock_pane_g1

0xa454,	// (0x000430a5) main_fs_bigclock_pane_t1_ParamLimits

0xa454,	// (0x000430a5) main_fs_bigclock_pane_t1

0xa466,	// (0x000430b7) main_fs_bigclock_pane_t2_ParamLimits

0xa466,	// (0x000430b7) main_fs_bigclock_pane_t2

0xa478,	// (0x000430c9) main_fs_bigclock_pane_t3_ParamLimits

0xa478,	// (0x000430c9) main_fs_bigclock_pane_t3

0x0002,

0xfde8,	// (0x00048a39) main_fs_bigclock_pane_t_ParamLimits

0xfde8,	// (0x00048a39) main_fs_bigclock_pane_t

0x0215,	// (0x00038e66) main_fs_bigclock_indicator_pane_g1

0xdc78,	// (0x000468c9) ncim_query_content_pane_g2_ParamLimits

0xdc78,	// (0x000468c9) ncim_query_content_pane_g2

0x0001,

0xfbac,	// (0x000487fd) ncim_query_content_pane_g_ParamLimits

0xfbac,	// (0x000487fd) ncim_query_content_pane_g

0x9a8f,	// (0x000426e0) sc_clock_pane_t4_ParamLimits

0x9a8f,	// (0x000426e0) sc_clock_pane_t4

0x20c4,	// (0x0003ad15) main_radioblah_pane

0xee6d,	// (0x00047abe) cell_call4_button_pane_t1_copy1_ParamLimits

0xee6d,	// (0x00047abe) cell_call4_button_pane_t1_copy1

0x96fa,	// (0x0004234b) main_ncimui_pane_t1_ParamLimits

0x96fa,	// (0x0004234b) main_ncimui_pane_t1

0x9714,	// (0x00042365) main_ncimui_pane_t2_ParamLimits

0x9714,	// (0x00042365) main_ncimui_pane_t2

0x0002,

0xfba5,	// (0x000487f6) main_ncimui_pane_t_ParamLimits

0xfba5,	// (0x000487f6) main_ncimui_pane_t

0xe0e6,	// (0x00046d37) main_radioblah_anim_pane_ParamLimits

0xe0e6,	// (0x00046d37) main_radioblah_anim_pane

0xe0f7,	// (0x00046d48) main_radioblah_info_pane_ParamLimits

0xe0f7,	// (0x00046d48) main_radioblah_info_pane

0xe10b,	// (0x00046d5c) main_radioblah_pane_t1_ParamLimits

0xe10b,	// (0x00046d5c) main_radioblah_pane_t1

0xe127,	// (0x00046d78) main_radioblah_pane_t2_ParamLimits

0xe127,	// (0x00046d78) main_radioblah_pane_t2

0x0003,

0xfc40,	// (0x00048891) main_radioblah_pane_t_ParamLimits

0xfc40,	// (0x00048891) main_radioblah_pane_t

0x9b5e,	// (0x000427af) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9b5e,	// (0x000427af) main_radioblah_rocker_ctrl_pane

0xe16f,	// (0x00046dc0) main_radioblah_info_pane_t1_ParamLimits

0xe16f,	// (0x00046dc0) main_radioblah_info_pane_t1

0x9bb2,	// (0x00042803) main_radioblah_info_pane_t2_ParamLimits

0x9bb2,	// (0x00042803) main_radioblah_info_pane_t2

0x0003,

0xfc49,	// (0x0004889a) main_radioblah_info_pane_t_ParamLimits

0xfc49,	// (0x0004889a) main_radioblah_info_pane_t

0x1b46,	// (0x0003a797) main_radioblah_rocker_ctrl_pane_g1

0x9c60,	// (0x000428b1) main_radioblah_rocker_ctrl_pane_g2

0x9c68,	// (0x000428b9) main_radioblah_rocker_ctrl_pane_g3

0x9c70,	// (0x000428c1) main_radioblah_rocker_ctrl_pane_g4

0x9c78,	// (0x000428c9) main_radioblah_rocker_ctrl_pane_g5

0x9c80,	// (0x000428d1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc52,	// (0x000488a3) main_radioblah_rocker_ctrl_pane_g

0x96b3,	// (0x00042304) main_cset_text2_pane_t1_copy1_ParamLimits

0xeec9,	// (0x00047b1a) cam4_image_uncrop_qvga_pane

0xef23,	// (0x00047b74) vid4_image_uncrop_qcif_pane

0xf079,	// (0x00047cca) cam6_image_uncrop_qvga_pane_ParamLimits

0xf079,	// (0x00047cca) cam6_image_uncrop_qvga_pane

0xd943,	// (0x00046594) vid6_image_uncrop_qcif_pane_ParamLimits

0xd943,	// (0x00046594) vid6_image_uncrop_qcif_pane

0x11c1,	// (0x00039e12) bg_popup_preview_window_pane_cp03

0xdc1e,	// (0x0004686f) list_cset_text2_pane

0xdc26,	// (0x00046877) main_cset6_text2_pane_g1

0xdc2e,	// (0x0004687f) main_cset6_text2_pane_t1

0x9c88,	// (0x000428d9) list_cset_text2_pane_t1_ParamLimits

0x9c88,	// (0x000428d9) list_cset_text2_pane_t1

0x20c4,	// (0x0003ad15) main_radioblah_pane_ParamLimits

0x99cf,	// (0x00042620) main_mobtv_info_pane_t3_ParamLimits

0x99cf,	// (0x00042620) main_mobtv_info_pane_t3

0x9b4c,	// (0x0004279d) main_radioblah_pane_g1

0x9b86,	// (0x000427d7) main_radioblah_info_pane_g1

0x9c05,	// (0x00042856) main_radioblah_info_pane_t3_ParamLimits

0x9c05,	// (0x00042856) main_radioblah_info_pane_t3

0x538d,	// (0x0003dfde) highlight_cell_cale_month_pane_ParamLimits

0x538d,	// (0x0003dfde) highlight_cell_cale_month_pane

0x11c1,	// (0x00039e12) main_phob_fisheye_pane

0xcba4,	// (0x000457f5) scroll_pane_cp0031_ParamLimits

0xcba4,	// (0x000457f5) scroll_pane_cp0031

0xda4d,	// (0x0004669e) wait_bar_pane_cp08_ParamLimits

0x956b,	// (0x000421bc) cset_list_set_pane_copy1_ParamLimits

0xe1a9,	// (0x00046dfa) highlight_cell_cale_month_pane_g1

0x9ca1,	// (0x000428f2) highlight_cell_cale_month_pane_t1

0xe1b1,	// (0x00046e02) list_gen_pane_cp01

0xd2aa,	// (0x00045efb) scroll_pane_01

0x20e4,	// (0x0003ad35) list_single_double_fisheye_pane

0xe1ba,	// (0x00046e0b) list_double_fisheye_pane_g1_ParamLimits

0xe1ba,	// (0x00046e0b) list_double_fisheye_pane_g1

0xe1c6,	// (0x00046e17) list_double_fisheye_pane_g2_ParamLimits

0xe1c6,	// (0x00046e17) list_double_fisheye_pane_g2

0x20ed,	// (0x0003ad3e) list_double_fisheye_pane_g3_ParamLimits

0x20ed,	// (0x0003ad3e) list_double_fisheye_pane_g3

0x0004,

0xfc5f,	// (0x000488b0) list_double_fisheye_pane_g_ParamLimits

0xfc5f,	// (0x000488b0) list_double_fisheye_pane_g

0xe1f7,	// (0x00046e48) list_double_fisheye_pane_t1_ParamLimits

0xe1f7,	// (0x00046e48) list_double_fisheye_pane_t1

0xe212,	// (0x00046e63) list_double_fisheye_pane_t2_ParamLimits

0xe212,	// (0x00046e63) list_double_fisheye_pane_t2

0x0001,

0xfc6a,	// (0x000488bb) list_double_fisheye_pane_t_ParamLimits

0xfc6a,	// (0x000488bb) list_double_fisheye_pane_t

0x11c1,	// (0x00039e12) main_call5_pane

0x9ab8,	// (0x00042709) sc_swipe_pane_ParamLimits

0x9ab8,	// (0x00042709) sc_swipe_pane

0x9cc0,	// (0x00042911) call5_image_pane_ParamLimits

0x9cc0,	// (0x00042911) call5_image_pane

0x9cd5,	// (0x00042926) call5_swipe_1_pane_ParamLimits

0x9cd5,	// (0x00042926) call5_swipe_1_pane

0x9ce6,	// (0x00042937) call5_swipe_2_pane_ParamLimits

0x9ce6,	// (0x00042937) call5_swipe_2_pane

0x9d0b,	// (0x0004295c) popup_call5_audio_first_window_ParamLimits

0x9d0b,	// (0x0004295c) popup_call5_audio_first_window

0x18b1,	// (0x0003a502) call5_swipe_1_pane_g1_ParamLimits

0x18b1,	// (0x0003a502) call5_swipe_1_pane_g1

0xe234,	// (0x00046e85) call5_swipe_1_pane_g2_ParamLimits

0xe234,	// (0x00046e85) call5_swipe_1_pane_g2

0x0001,

0xfc6f,	// (0x000488c0) call5_swipe_1_pane_g_ParamLimits

0xfc6f,	// (0x000488c0) call5_swipe_1_pane_g

0xe240,	// (0x00046e91) call5_swipe_1_pane_t1_ParamLimits

0xe240,	// (0x00046e91) call5_swipe_1_pane_t1

0x18b1,	// (0x0003a502) call5_swipe_2_pane_g1_ParamLimits

0x18b1,	// (0x0003a502) call5_swipe_2_pane_g1

0xe255,	// (0x00046ea6) call5_swipe_2_pane_g2_ParamLimits

0xe255,	// (0x00046ea6) call5_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x000488c5) call5_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x000488c5) call5_swipe_2_pane_g

0xe261,	// (0x00046eb2) call5_swipe_2_pane_t1_ParamLimits

0xe261,	// (0x00046eb2) call5_swipe_2_pane_t1

0xe276,	// (0x00046ec7) sc_swipe_pane_g1_ParamLimits

0xe276,	// (0x00046ec7) sc_swipe_pane_g1

0xe283,	// (0x00046ed4) sc_swipe_pane_g2_ParamLimits

0xe283,	// (0x00046ed4) sc_swipe_pane_g2

0x0001,

0xfc79,	// (0x000488ca) sc_swipe_pane_g_ParamLimits

0xfc79,	// (0x000488ca) sc_swipe_pane_g

0xe28f,	// (0x00046ee0) sc_swipe_pane_t1_ParamLimits

0xe28f,	// (0x00046ee0) sc_swipe_pane_t1

0x11c1,	// (0x00039e12) main_cmail_launcher_pane

0x9d1a,	// (0x0004296b) aid_size_cell_cmail_l_ParamLimits

0x9d1a,	// (0x0004296b) aid_size_cell_cmail_l

0x9d33,	// (0x00042984) grid_cmail_l_pane_ParamLimits

0x9d33,	// (0x00042984) grid_cmail_l_pane

0x9d48,	// (0x00042999) cell_cmail_l_pane_ParamLimits

0x9d48,	// (0x00042999) cell_cmail_l_pane

0x9d6a,	// (0x000429bb) cell_cmail_l_pane_g1_ParamLimits

0x9d6a,	// (0x000429bb) cell_cmail_l_pane_g1

0x9d7a,	// (0x000429cb) cell_cmail_l_pane_t1_ParamLimits

0x9d7a,	// (0x000429cb) cell_cmail_l_pane_t1

0x9d90,	// (0x000429e1) cell_cmail_l_pane_t2_ParamLimits

0x9d90,	// (0x000429e1) cell_cmail_l_pane_t2

0x0001,

0xfc7e,	// (0x000488cf) cell_cmail_l_pane_t_ParamLimits

0xfc7e,	// (0x000488cf) cell_cmail_l_pane_t

0x20c4,	// (0x0003ad15) grid_highlight_pane_cp018_ParamLimits

0x20c4,	// (0x0003ad15) grid_highlight_pane_cp018

0x38fb,	// (0x0003c54c) main2_pane_ParamLimits

0x38fb,	// (0x0003c54c) main2_pane

0x19c8,	// (0x0003a619) popup_sp_fs_action_menu_bg_pane_g1

0x19d0,	// (0x0003a621) popup_sp_fs_action_menu_bg_pane_g2

0x19d8,	// (0x0003a629) popup_sp_fs_action_menu_bg_pane_g3

0x19e0,	// (0x0003a631) popup_sp_fs_action_menu_bg_pane_g4

0x19e8,	// (0x0003a639) popup_sp_fs_action_menu_bg_pane_g5

0x19f0,	// (0x0003a641) popup_sp_fs_action_menu_bg_pane_g6

0x19f8,	// (0x0003a649) popup_sp_fs_action_menu_bg_pane_g7

0x1a00,	// (0x0003a651) popup_sp_fs_action_menu_bg_pane_g8

0x1a08,	// (0x0003a659) popup_sp_fs_action_menu_bg_pane_g9

0x1a10,	// (0x0003a661) popup_sp_fs_action_menu_bg_pane_g10

0x1a10,	// (0x0003a661) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00047d96) popup_sp_fs_action_menu_bg_pane_g

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g3_g1

0xb1f4,	// (0x00043e45) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_x2_t3_g3_g2

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00047e44) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00047e44) list_medium_line_x2_t3_g3_g

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g3_t1

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g3_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g3_t2

0xb213,	// (0x00043e64) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb213,	// (0x00043e64) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00047e4b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00047e4b) list_medium_line_x2_t3_g3_t

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g2_g1

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00047e52) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00047e52) list_medium_line_x2_t3_g2_g

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g2_t1

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g2_t2

0xb213,	// (0x00043e64) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb213,	// (0x00043e64) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00047e4b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00047e4b) list_medium_line_x2_t3_g2_t

0xb1e8,	// (0x00043e39) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t4_g4_g1

0xb1f4,	// (0x00043e45) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_x2_t4_g4_g2

0xb1f4,	// (0x00043e45) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_x2_t4_g4_g3

0xb1e8,	// (0x00043e39) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00047e57) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00047e57) list_medium_line_x2_t4_g4_g

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g4_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g4_t1

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g4_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g4_t2

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g4_t3_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g4_t3

0xb213,	// (0x00043e64) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb213,	// (0x00043e64) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00047e60) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00047e60) list_medium_line_x2_t4_g4_t

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g4_g1

0xb1f4,	// (0x00043e45) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_x2_t2_g4_g2

0xb1f4,	// (0x00043e45) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_x2_t2_g4_g3

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00047e57) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00047e57) list_medium_line_x2_t2_g4_g

0xb200,	// (0x00043e51) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t2_g4_t1

0xb213,	// (0x00043e64) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb213,	// (0x00043e64) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x00047ec7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x00047ec7) list_medium_line_x2_t2_g4_t

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g3_g1

0xb1f4,	// (0x00043e45) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_x2_t2_g3_g2

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00047e44) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00047e44) list_medium_line_x2_t2_g3_g

0xb200,	// (0x00043e51) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t2_g3_t1

0xb213,	// (0x00043e64) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb213,	// (0x00043e64) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x00047ec7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x00047ec7) list_medium_line_x2_t2_g3_t

0x54f6,	// (0x0003e147) main_sp_fs_list_pane_ParamLimits

0x54f6,	// (0x0003e147) main_sp_fs_list_pane

0x5503,	// (0x0003e154) sp_fs_scroll_pane_ParamLimits

0x5503,	// (0x0003e154) sp_fs_scroll_pane

0xb254,	// (0x00043ea5) list_medium_line_x2_t3_t1

0xb254,	// (0x00043ea5) list_medium_line_x2_t3_t2

0xb263,	// (0x00043eb4) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00047f12) list_medium_line_x2_t3_t

0xb254,	// (0x00043ea5) list_medium_line_x3_t4_t1

0xb254,	// (0x00043ea5) list_medium_line_x3_t4_t2

0xb254,	// (0x00043ea5) list_medium_line_x3_t4_t3

0xb254,	// (0x00043ea5) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x00047f19) list_medium_line_x3_t4_t

0xb254,	// (0x00043ea5) list_medium_line_x4_t5_t1

0xb254,	// (0x00043ea5) list_medium_line_x4_t5_t2

0xb254,	// (0x00043ea5) list_medium_line_x4_t5_t3

0xb254,	// (0x00043ea5) list_medium_line_x4_t5_t4

0xb254,	// (0x00043ea5) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00047f22) list_medium_line_x4_t5_t

0xb1e8,	// (0x00043e39) list_medium_line_t4_g4_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_t4_g4_g1

0xb1e8,	// (0x00043e39) list_medium_line_t4_g4_g2_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_t4_g4_g2

0xb1e8,	// (0x00043e39) list_medium_line_t4_g4_g3_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_t4_g4_g3

0xb1e8,	// (0x00043e39) list_medium_line_t4_g4_g4_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_t4_g4_g4

0x0003,

0xf2dc,	// (0x00047f2d) list_medium_line_t4_g4_g_ParamLimits

0xf2dc,	// (0x00047f2d) list_medium_line_t4_g4_g

0xb200,	// (0x00043e51) list_medium_line_t4_g4_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t4_g4_t1

0xb200,	// (0x00043e51) list_medium_line_t4_g4_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t4_g4_t2

0xb200,	// (0x00043e51) list_medium_line_t4_g4_t3_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t4_g4_t3

0xb200,	// (0x00043e51) list_medium_line_t4_g4_t4_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t4_g4_t4

0x0003,

0xf2e5,	// (0x00047f36) list_medium_line_t4_g4_t_ParamLimits

0xf2e5,	// (0x00047f36) list_medium_line_t4_g4_t

0x57e3,	// (0x0003e434) chi_dic_find_pane_g1

0x699b,	// (0x0003f5ec) main_tport_pane

0xb254,	// (0x00043ea5) list_medium_line_plain_t1

0xb1e8,	// (0x00043e39) list_medium_line_t2_g2_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_t2_g2_g1

0xd3db,	// (0x0004602c) list_medium_line_t2_g2_g2_ParamLimits

0xd3db,	// (0x0004602c) list_medium_line_t2_g2_g2

0x0001,

0xf9b6,	// (0x00048607) list_medium_line_t2_g2_g_ParamLimits

0xf9b6,	// (0x00048607) list_medium_line_t2_g2_g

0xb200,	// (0x00043e51) list_medium_line_t2_g2_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t2_g2_t1

0xb200,	// (0x00043e51) list_medium_line_t2_g2_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t2_g2_t2

0x0001,

0xf9bb,	// (0x0004860c) list_medium_line_t2_g2_t_ParamLimits

0xf9bb,	// (0x0004860c) list_medium_line_t2_g2_t

0xd6f7,	// (0x00046348) aid_sp_fs_list_icon_a_sm

0xd6ff,	// (0x00046350) aid_sp_fs_list_icon_d

0xd707,	// (0x00046358) aid_sp_fs_text_primary

0xd710,	// (0x00046361) aid_sp_fs_text_secondary

0x903a,	// (0x00041c8b) list_medium_line

0x903a,	// (0x00041c8b) list_medium_line_g2

0x903a,	// (0x00041c8b) list_medium_line_g3

0x903a,	// (0x00041c8b) list_medium_line_plain

0x903a,	// (0x00041c8b) list_medium_line_plain_t2

0x903a,	// (0x00041c8b) list_medium_line_plain_t3

0x903a,	// (0x00041c8b) list_medium_line_right_icon

0x903a,	// (0x00041c8b) list_medium_line_right_iconx2

0x903a,	// (0x00041c8b) list_medium_line_t2

0x903a,	// (0x00041c8b) list_medium_line_t2_g2

0x903a,	// (0x00041c8b) list_medium_line_t2_g3

0x903a,	// (0x00041c8b) list_medium_line_t2_right_icon

0x903a,	// (0x00041c8b) list_medium_line_t2_right_iconx2

0x903a,	// (0x00041c8b) list_medium_line_t3

0x903a,	// (0x00041c8b) list_medium_line_t3_g2

0x903a,	// (0x00041c8b) list_medium_line_t3_g3

0x903a,	// (0x00041c8b) list_medium_line_t3_right_iconx2

0x20d2,	// (0x0003ad23) list_medium_line_t4_g4

0xd719,	// (0x0004636a) list_medium_line_x2

0xd719,	// (0x0004636a) list_medium_line_x2_t2_g2

0xd719,	// (0x0004636a) list_medium_line_x2_t2_g3

0xd719,	// (0x0004636a) list_medium_line_x2_t2_g4

0xd719,	// (0x0004636a) list_medium_line_x2_t3

0xd719,	// (0x0004636a) list_medium_line_x2_t3_g2

0xd719,	// (0x0004636a) list_medium_line_x2_t3_g3

0xd719,	// (0x0004636a) list_medium_line_x2_t3_g4

0xd719,	// (0x0004636a) list_medium_line_x2_t4_g2

0xd719,	// (0x0004636a) list_medium_line_x2_t4_g4

0x20db,	// (0x0003ad2c) list_medium_line_x3

0x20db,	// (0x0003ad2c) list_medium_line_x3_t4

0x20db,	// (0x0003ad2c) list_medium_line_x3_t4_g4

0x20d2,	// (0x0003ad23) list_medium_line_x4_t4

0x20d2,	// (0x0003ad23) list_medium_line_x4_t4_g7

0x20d2,	// (0x0003ad23) list_medium_line_x4_t5

0x32fa,	// (0x0003bf4b) list_single_fs_dyc_pane_ParamLimits

0x32fa,	// (0x0003bf4b) list_single_fs_dyc_pane

0xb1e8,	// (0x00043e39) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x4_t4_g7_g1

0x18b1,	// (0x0003a502) list_medium_line_x4_t4_g7_g2_ParamLimits

0x18b1,	// (0x0003a502) list_medium_line_x4_t4_g7_g2

0xb1f4,	// (0x00043e45) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_x4_t4_g7_g3

0x18b1,	// (0x0003a502) list_medium_line_x4_t4_g7_g4_ParamLimits

0x18b1,	// (0x0003a502) list_medium_line_x4_t4_g7_g4

0x18b1,	// (0x0003a502) list_medium_line_x4_t4_g7_g5_ParamLimits

0x18b1,	// (0x0003a502) list_medium_line_x4_t4_g7_g5

0x18b1,	// (0x0003a502) list_medium_line_x4_t4_g7_g6_ParamLimits

0x18b1,	// (0x0003a502) list_medium_line_x4_t4_g7_g6

0x18bf,	// (0x0003a510) list_medium_line_x4_t4_g7_g7_ParamLimits

0x18bf,	// (0x0003a510) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb86,	// (0x000487d7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb86,	// (0x000487d7) list_medium_line_x4_t4_g7_g

0xb200,	// (0x00043e51) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x4_t4_g7_t1

0xb200,	// (0x00043e51) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x4_t4_g7_t2

0xb200,	// (0x00043e51) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x4_t4_g7_t3

0xdbf8,	// (0x00046849) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdbf8,	// (0x00046849) list_medium_line_x4_t4_g7_t4

0xdc0b,	// (0x0004685c) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc0b,	// (0x0004685c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb95,	// (0x000487e6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb95,	// (0x000487e6) list_medium_line_x4_t4_g7_t

0x333a,	// (0x0003bf8b) list_single_dyc_row_pane_ParamLimits

0x333a,	// (0x0003bf8b) list_single_dyc_row_pane

0x9caf,	// (0x00042900) call5_gesture_pane_ParamLimits

0x9caf,	// (0x00042900) call5_gesture_pane

0x9cf7,	// (0x00042948) call5_windows_pane_ParamLimits

0x9cf7,	// (0x00042948) call5_windows_pane

0x9da8,	// (0x000429f9) call5_swipe_1_pane_cp_ParamLimits

0x9da8,	// (0x000429f9) call5_swipe_1_pane_cp

0x9db4,	// (0x00042a05) call5_swipe_2_pane_cp_ParamLimits

0x9db4,	// (0x00042a05) call5_swipe_2_pane_cp

0x1aec,	// (0x0003a73d) call5_image_pane_cp

0x9dc0,	// (0x00042a11) popup_call5_audio_first_window_cp_ParamLimits

0x9dc0,	// (0x00042a11) popup_call5_audio_first_window_cp

0xe276,	// (0x00046ec7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe276,	// (0x00046ec7) call5_swipe_1_pane_g1_cp

0xe2a4,	// (0x00046ef5) call5_swipe_1_pane_g2_cp

0xe28f,	// (0x00046ee0) call5_swipe_1_pane_t1_cp_ParamLimits

0xe28f,	// (0x00046ee0) call5_swipe_1_pane_t1_cp

0xe276,	// (0x00046ec7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe276,	// (0x00046ec7) call5_swipe_2_pane_g1_cp

0xe2ac,	// (0x00046efd) call5_swipe_2_pane_g2_cp

0xe2b4,	// (0x00046f05) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2b4,	// (0x00046f05) call5_swipe_2_pane_t1_cp

0x20c4,	// (0x0003ad15) main_sp_fs_email_pane

0xe2c9,	// (0x00046f1a) main_sp_fs_listscroll_pane_te

0x9dcc,	// (0x00042a1d) popup_sp_fs_action_menu_pane_ParamLimits

0x9dcc,	// (0x00042a1d) popup_sp_fs_action_menu_pane

0x1b46,	// (0x0003a797) bg_sp_fs_ctrlbar_pane_g1

0xcdd8,	// (0x00045a29) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcdea,	// (0x00045a3b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcde1,	// (0x00045a32) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1b46,	// (0x0003a797) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc83,	// (0x000488d4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc537,	// (0x00045188) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc537,	// (0x00045188) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2d2,	// (0x00046f23) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2d2,	// (0x00046f23) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2de,	// (0x00046f2f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2de,	// (0x00046f2f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8c,	// (0x000488dd) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8c,	// (0x000488dd) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2ea,	// (0x00046f3b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2ea,	// (0x00046f3b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1a10,	// (0x0003a661) list_medium_line_t2_right_icon_g1

0xb254,	// (0x00043ea5) list_medium_line_t2_right_icon_t1

0xb254,	// (0x00043ea5) list_medium_line_t2_right_icon_t2

0x0001,

0xfc91,	// (0x000488e2) list_medium_line_t2_right_icon_t

0x5d5f,	// (0x0003e9b0) bg_sp_fs_ctrlbar_pane_ParamLimits

0x5d5f,	// (0x0003e9b0) bg_sp_fs_ctrlbar_pane

0x9e44,	// (0x00042a95) main_sp_fs_ctrlbar_button_pane_cp01

0x9e4c,	// (0x00042a9d) main_sp_fs_ctrlbar_ddmenu_pane

0xe33c,	// (0x00046f8d) main_sp_fs_ctrlbar_pane_g1

0xe348,	// (0x00046f99) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc96,	// (0x000488e7) main_sp_fs_ctrlbar_pane_g

0x9e88,	// (0x00042ad9) main_sp_fs_ctrlbar_pane_t1

0x9ed1,	// (0x00042b22) main_sp_fs_ctrlbar_pane

0x9ef2,	// (0x00042b43) main_sp_fs_listscroll_pane_te_cp01

0x3357,	// (0x0003bfa8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3357,	// (0x0003bfa8) popup_sp_fs_action_menu_pane_cp01

0x20c4,	// (0x0003ad15) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x20c4,	// (0x0003ad15) bg_sp_fs_highlight_list_pane_cp01

0x337b,	// (0x0003bfcc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x337b,	// (0x0003bfcc) sp_fs_action_menu_list_gene_pane_g1

0xe36f,	// (0x00046fc0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe36f,	// (0x00046fc0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca4,	// (0x000488f5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca4,	// (0x000488f5) sp_fs_action_menu_list_gene_pane_g

0x338a,	// (0x0003bfdb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x338a,	// (0x0003bfdb) sp_fs_action_menu_list_gene_pane_t1

0x9f12,	// (0x00042b63) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9f12,	// (0x00042b63) sp_fs_action_menu_list_gene_pane

0xe37c,	// (0x00046fcd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe37c,	// (0x00046fcd) popup_sp_fs_action_menu_bg_pane

0x9f2f,	// (0x00042b80) sp_fs_action_menu_list_pane_ParamLimits

0x9f2f,	// (0x00042b80) sp_fs_action_menu_list_pane

0xe38a,	// (0x00046fdb) sp_fs_scroll_pane_cp01_ParamLimits

0xe38a,	// (0x00046fdb) sp_fs_scroll_pane_cp01

0xb254,	// (0x00043ea5) list_medium_line_plain_t2_t1

0xb254,	// (0x00043ea5) list_medium_line_plain_t2_t2

0x0001,

0xfc91,	// (0x000488e2) list_medium_line_plain_t2_t

0xb254,	// (0x00043ea5) list_medium_line_plain_t3_t1

0xb254,	// (0x00043ea5) list_medium_line_plain_t3_t2

0xb254,	// (0x00043ea5) list_medium_line_plain_t3_t3

0x0002,

0xfca9,	// (0x000488fa) list_medium_line_plain_t3_t

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g2_g1

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00047e52) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00047e52) list_medium_line_x2_t2_g2_g

0xb200,	// (0x00043e51) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t2_g2_t1

0xb213,	// (0x00043e64) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb213,	// (0x00043e64) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x00047ec7) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x00047ec7) list_medium_line_x2_t2_g2_t

0xb1e8,	// (0x00043e39) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t4_g2_g1

0xe3b0,	// (0x00047001) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe3b0,	// (0x00047001) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcb0,	// (0x00048901) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcb0,	// (0x00048901) list_medium_line_x2_t4_g2_g

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g2_t1

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g2_t2

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t4_g2_t3

0xb213,	// (0x00043e64) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb213,	// (0x00043e64) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00047e60) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00047e60) list_medium_line_x2_t4_g2_t

0x1a10,	// (0x0003a661) list_medium_line_t3_right_iconx2_g1

0x1b46,	// (0x0003a797) list_medium_line_t3_right_iconx2_g2

0xe3c1,	// (0x00047012) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb5,	// (0x00048906) list_medium_line_t3_right_iconx2_g

0xb254,	// (0x00043ea5) list_medium_line_t3_right_iconx2_t1

0xb254,	// (0x00043ea5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc91,	// (0x000488e2) list_medium_line_t3_right_iconx2_t

0xb1e8,	// (0x00043e39) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x3_t4_g4_g1

0xb1f4,	// (0x00043e45) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_x3_t4_g4_g2

0xb1e8,	// (0x00043e39) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x3_t4_g4_g3

0xb1f4,	// (0x00043e45) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcbc,	// (0x0004890d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcbc,	// (0x0004890d) list_medium_line_x3_t4_g4_g

0xb200,	// (0x00043e51) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x3_t4_g4_t1

0xb200,	// (0x00043e51) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x3_t4_g4_t2

0xb200,	// (0x00043e51) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x3_t4_g4_t3

0xe3ca,	// (0x0004701b) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe3ca,	// (0x0004701b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc5,	// (0x00048916) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc5,	// (0x00048916) list_medium_line_x3_t4_g4_t

0x33a2,	// (0x0003bff3) list_single_dyc_row_text_pane_t1_ParamLimits

0x33a2,	// (0x0003bff3) list_single_dyc_row_text_pane_t1

0x33d9,	// (0x0003c02a) list_single_dyc_row_text_pane_t2_ParamLimits

0x33d9,	// (0x0003c02a) list_single_dyc_row_text_pane_t2

0xe3e7,	// (0x00047038) list_single_dyc_row_text_pane_t3_ParamLimits

0xe3e7,	// (0x00047038) list_single_dyc_row_text_pane_t3

0x0005,

0xfcce,	// (0x0004891f) list_single_dyc_row_text_pane_t_ParamLimits

0xfcce,	// (0x0004891f) list_single_dyc_row_text_pane_t

0xe40b,	// (0x0004705c) list_single_dyc_row_pane_g1_ParamLimits

0xe40b,	// (0x0004705c) list_single_dyc_row_pane_g1

0xe417,	// (0x00047068) list_single_dyc_row_pane_g2_ParamLimits

0xe417,	// (0x00047068) list_single_dyc_row_pane_g2

0xe423,	// (0x00047074) list_single_dyc_row_pane_g3_ParamLimits

0xe423,	// (0x00047074) list_single_dyc_row_pane_g3

0xe42f,	// (0x00047080) list_single_dyc_row_pane_g4_ParamLimits

0xe42f,	// (0x00047080) list_single_dyc_row_pane_g4

0x0003,

0xfcdb,	// (0x0004892c) list_single_dyc_row_pane_g_ParamLimits

0xfcdb,	// (0x0004892c) list_single_dyc_row_pane_g

0xe43b,	// (0x0004708c) list_single_dyc_row_text_pane_ParamLimits

0xe43b,	// (0x0004708c) list_single_dyc_row_text_pane

0x11c1,	// (0x00039e12) bg_sp_fs_scroll_pane

0xe45a,	// (0x000470ab) thumb_sp_fs_scroll_pane

0xb1e8,	// (0x00043e39) list_medium_line_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_g1

0xb200,	// (0x00043e51) list_medium_line_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t1

0xb1e8,	// (0x00043e39) list_medium_line_x2_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_g1

0xd3db,	// (0x0004602c) list_medium_line_x2_g2_ParamLimits

0xd3db,	// (0x0004602c) list_medium_line_x2_g2

0x0001,

0xf9b6,	// (0x00048607) list_medium_line_x2_g_ParamLimits

0xf9b6,	// (0x00048607) list_medium_line_x2_g

0x20b0,	// (0x0003ad01) list_medium_line_x2_t1_ParamLimits

0x20b0,	// (0x0003ad01) list_medium_line_x2_t1

0xb1e8,	// (0x00043e39) list_medium_line_x3_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x3_g1

0xe463,	// (0x000470b4) list_medium_line_x3_g2_ParamLimits

0xe463,	// (0x000470b4) list_medium_line_x3_g2

0x0001,

0xfce4,	// (0x00048935) list_medium_line_x3_g_ParamLimits

0xfce4,	// (0x00048935) list_medium_line_x3_g

0xe470,	// (0x000470c1) list_medium_line_x3_t1_ParamLimits

0xe470,	// (0x000470c1) list_medium_line_x3_t1

0xe484,	// (0x000470d5) thumb_sp_fs_scroll_pane_g1

0xe48d,	// (0x000470de) thumb_sp_fs_scroll_pane_g2

0xe496,	// (0x000470e7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0004893a) thumb_sp_fs_scroll_pane_g

0xe484,	// (0x000470d5) bg_sp_fs_scroll_pane_g1

0xe48d,	// (0x000470de) bg_sp_fs_scroll_pane_g2

0xe496,	// (0x000470e7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce9,	// (0x0004893a) bg_sp_fs_scroll_pane_g

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g4_g1

0xb1f4,	// (0x00043e45) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_x2_t3_g4_g2

0xb1f4,	// (0x00043e45) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_x2_t3_g4_g3

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00047e57) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00047e57) list_medium_line_x2_t3_g4_g

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g4_t1

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_x2_t3_g4_t2

0xb213,	// (0x00043e64) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb213,	// (0x00043e64) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00047e4b) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00047e4b) list_medium_line_x2_t3_g4_t

0xb1e8,	// (0x00043e39) list_medium_line_g2_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_g2_g1

0xd3db,	// (0x0004602c) list_medium_line_g2_g2_ParamLimits

0xd3db,	// (0x0004602c) list_medium_line_g2_g2

0x0001,

0xf9b6,	// (0x00048607) list_medium_line_g2_g_ParamLimits

0xf9b6,	// (0x00048607) list_medium_line_g2_g

0xb200,	// (0x00043e51) list_medium_line_g2_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_g2_t1

0xb1e8,	// (0x00043e39) list_medium_line_t3_g2_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_t3_g2_g1

0xd3db,	// (0x0004602c) list_medium_line_t3_g2_g2_ParamLimits

0xd3db,	// (0x0004602c) list_medium_line_t3_g2_g2

0x0001,

0xf9b6,	// (0x00048607) list_medium_line_t3_g2_g_ParamLimits

0xf9b6,	// (0x00048607) list_medium_line_t3_g2_g

0xb200,	// (0x00043e51) list_medium_line_t3_g2_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t3_g2_t1

0xb200,	// (0x00043e51) list_medium_line_t3_g2_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t3_g2_t2

0xb200,	// (0x00043e51) list_medium_line_t3_g2_t3_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t3_g2_t3

0x0002,

0xfcf0,	// (0x00048941) list_medium_line_t3_g2_t_ParamLimits

0xfcf0,	// (0x00048941) list_medium_line_t3_g2_t

0xd38d,	// (0x00045fde) list_medium_line_right_icon_g1

0xb254,	// (0x00043ea5) list_medium_line_right_icon_t1

0xb1e8,	// (0x00043e39) list_medium_line_t2_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_t2_g1

0xb200,	// (0x00043e51) list_medium_line_t2_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t2_t1

0xb200,	// (0x00043e51) list_medium_line_t2_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t2_t2

0x0001,

0xf9bb,	// (0x0004860c) list_medium_line_t2_t_ParamLimits

0xf9bb,	// (0x0004860c) list_medium_line_t2_t

0xb1e8,	// (0x00043e39) list_medium_line_t3_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_t3_g1

0xb200,	// (0x00043e51) list_medium_line_t3_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t3_t1

0xb200,	// (0x00043e51) list_medium_line_t3_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t3_t2

0xb200,	// (0x00043e51) list_medium_line_t3_t3_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t3_t3

0x0002,

0xfcf0,	// (0x00048941) list_medium_line_t3_t_ParamLimits

0xfcf0,	// (0x00048941) list_medium_line_t3_t

0xb1e8,	// (0x00043e39) list_medium_line_g3_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_g3_g1

0xb1f4,	// (0x00043e45) list_medium_line_g3_g2_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_g3_g2

0xb1f4,	// (0x00043e45) list_medium_line_g3_g3_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_g3_g3

0x0002,

0xfcf7,	// (0x00048948) list_medium_line_g3_g_ParamLimits

0xfcf7,	// (0x00048948) list_medium_line_g3_g

0xb200,	// (0x00043e51) list_medium_line_g3_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_g3_t1

0xb1e8,	// (0x00043e39) list_medium_line_t2_g3_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_t2_g3_g1

0xb1f4,	// (0x00043e45) list_medium_line_t2_g3_g2_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_t2_g3_g2

0xb1f4,	// (0x00043e45) list_medium_line_t2_g3_g3_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_t2_g3_g3

0x0002,

0xfcf7,	// (0x00048948) list_medium_line_t2_g3_g_ParamLimits

0xfcf7,	// (0x00048948) list_medium_line_t2_g3_g

0xb200,	// (0x00043e51) list_medium_line_t2_g3_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t2_g3_t1

0xb200,	// (0x00043e51) list_medium_line_t2_g3_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t2_g3_t2

0x0001,

0xf9bb,	// (0x0004860c) list_medium_line_t2_g3_t_ParamLimits

0xf9bb,	// (0x0004860c) list_medium_line_t2_g3_t

0xb1e8,	// (0x00043e39) list_medium_line_t3_g3_g1_ParamLimits

0xb1e8,	// (0x00043e39) list_medium_line_t3_g3_g1

0xb1f4,	// (0x00043e45) list_medium_line_t3_g3_g2_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_t3_g3_g2

0xb1f4,	// (0x00043e45) list_medium_line_t3_g3_g3_ParamLimits

0xb1f4,	// (0x00043e45) list_medium_line_t3_g3_g3

0x0002,

0xfcf7,	// (0x00048948) list_medium_line_t3_g3_g_ParamLimits

0xfcf7,	// (0x00048948) list_medium_line_t3_g3_g

0xb200,	// (0x00043e51) list_medium_line_t3_g3_t1_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t3_g3_t1

0xb200,	// (0x00043e51) list_medium_line_t3_g3_t2_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t3_g3_t2

0xb200,	// (0x00043e51) list_medium_line_t3_g3_t3_ParamLimits

0xb200,	// (0x00043e51) list_medium_line_t3_g3_t3

0x0002,

0xfcf0,	// (0x00048941) list_medium_line_t3_g3_t_ParamLimits

0xfcf0,	// (0x00048941) list_medium_line_t3_g3_t

0x1a10,	// (0x0003a661) list_medium_line_right_iconx2_g1

0x1a10,	// (0x0003a661) list_medium_line_right_iconx2_g2

0x0001,

0xfcfe,	// (0x0004894f) list_medium_line_right_iconx2_g

0xe49f,	// (0x000470f0) list_medium_line_right_iconx2_t1

0x1a10,	// (0x0003a661) list_medium_line_t2_right_iconx2_g1

0x1a10,	// (0x0003a661) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcfe,	// (0x0004894f) list_medium_line_t2_right_iconx2_g

0xb254,	// (0x00043ea5) list_medium_line_t2_right_iconx2_t1

0xb254,	// (0x00043ea5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc91,	// (0x000488e2) list_medium_line_t2_right_iconx2_t

0xb254,	// (0x00043ea5) list_medium_line_x4_t4_t1

0xb254,	// (0x00043ea5) list_medium_line_x4_t4_t2

0xb254,	// (0x00043ea5) list_medium_line_x4_t4_t3

0xb254,	// (0x00043ea5) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x00047f19) list_medium_line_x4_t4_t

0x9f86,	// (0x00042bd7) tport_appsw_pane_ParamLimits

0x9f86,	// (0x00042bd7) tport_appsw_pane

0x9f97,	// (0x00042be8) tport_contact_pane_ParamLimits

0x9f97,	// (0x00042be8) tport_contact_pane

0x9fab,	// (0x00042bfc) tport_listscroll_pane_ParamLimits

0x9fab,	// (0x00042bfc) tport_listscroll_pane

0x9fc3,	// (0x00042c14) cell_tport_appsw_pane_ParamLimits

0x9fc3,	// (0x00042c14) cell_tport_appsw_pane

0x5d1b,	// (0x0003e96c) tport_appsw_pane_g1_ParamLimits

0x5d1b,	// (0x0003e96c) tport_appsw_pane_g1

0xe4ae,	// (0x000470ff) tport_contact_pane_g1

0xe4b7,	// (0x00047108) tport_contact_pane_t1

0xe4c5,	// (0x00047116) tport_contact_pane_t2

0x0001,

0xfd03,	// (0x00048954) tport_contact_pane_t

0xe4d3,	// (0x00047124) list_tport_pane

0x1a22,	// (0x0003a673) scroll_pane_cp_030

0xe4e4,	// (0x00047135) cell_tport_appsw_pane_g1

0xe4f4,	// (0x00047145) cell_tport_appsw_pane_t1

0xe502,	// (0x00047153) grid_highlight_pane_cp019

0x9ff9,	// (0x00042c4a) list_tport_double_graphic_pane_ParamLimits

0x9ff9,	// (0x00042c4a) list_tport_double_graphic_pane

0x20c4,	// (0x0003ad15) list_highlight_pane_cp023_ParamLimits

0x20c4,	// (0x0003ad15) list_highlight_pane_cp023

0xa006,	// (0x00042c57) list_tport_double_graphic_pane_g1_ParamLimits

0xa006,	// (0x00042c57) list_tport_double_graphic_pane_g1

0xa013,	// (0x00042c64) list_tport_double_graphic_pane_t1_ParamLimits

0xa013,	// (0x00042c64) list_tport_double_graphic_pane_t1

0xa028,	// (0x00042c79) list_tport_double_graphic_pane_t2_ParamLimits

0xa028,	// (0x00042c79) list_tport_double_graphic_pane_t2

0x0001,

0xfd0f,	// (0x00048960) list_tport_double_graphic_pane_t_ParamLimits

0xfd0f,	// (0x00048960) list_tport_double_graphic_pane_t

0x11c1,	// (0x00039e12) main_cale_note_pane

0x8442,	// (0x00041093) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8442,	// (0x00041093) cell_vitu2_function_top_wide_pane_cp01

0x99e1,	// (0x00042632) wait_bar_pane_cp05_ParamLimits

0x20c4,	// (0x0003ad15) listscroll_cmail_pane

0xe50a,	// (0x0004715b) list_cmail_pane

0xa03a,	// (0x00042c8b) list_cmail_body_pane

0xa03a,	// (0x00042c8b) list_single_cmail_header_caption_pane

0xa051,	// (0x00042ca2) list_single_cmail_header_detail_pane_ParamLimits

0xa051,	// (0x00042ca2) list_single_cmail_header_detail_pane

0xe526,	// (0x00047177) list_single_cmail_header_caption_pane_t1

0x34fc,	// (0x0003c14d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x34fc,	// (0x0003c14d) list_single_cmail_header_detail_pane_g1

0xe534,	// (0x00047185) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe534,	// (0x00047185) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd14,	// (0x00048965) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd14,	// (0x00048965) list_single_cmail_header_detail_pane_g

0x3512,	// (0x0003c163) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3512,	// (0x0003c163) list_single_cmail_header_detail_pane_t1

0xe571,	// (0x000471c2) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe571,	// (0x000471c2) list_single_cmail_header_editor_pane_bg

0xe588,	// (0x000471d9) list_cmail_body_pane_g1

0xe591,	// (0x000471e2) list_cmail_body_pane_t1

0xd184,	// (0x00045dd5) list_single_cmail_header_editor_pane_bg_g1

0x1d64,	// (0x0003a9b5) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd194,	// (0x00045de5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd18c,	// (0x00045ddd) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3d3,	// (0x00046024) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1b4,	// (0x00045e05) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1a4,	// (0x00045df5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1ac,	// (0x00045dfd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1d44,	// (0x0003a995) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa07a,	// (0x00042ccb) calenote_gesture_pane_ParamLimits

0xa07a,	// (0x00042ccb) calenote_gesture_pane

0xa096,	// (0x00042ce7) calenote_window_pane_ParamLimits

0xa096,	// (0x00042ce7) calenote_window_pane

0xe59f,	// (0x000471f0) popup_note_window_cp01

0xa0b2,	// (0x00042d03) calenote_swipe_1_pane_ParamLimits

0xa0b2,	// (0x00042d03) calenote_swipe_1_pane

0x9db4,	// (0x00042a05) calenote_swipe_2_pane_ParamLimits

0x9db4,	// (0x00042a05) calenote_swipe_2_pane

0xe276,	// (0x00046ec7) calenote_swipe_1_pane_g1_ParamLimits

0xe276,	// (0x00046ec7) calenote_swipe_1_pane_g1

0xe283,	// (0x00046ed4) calenote_swipe_1_pane_g2_ParamLimits

0xe283,	// (0x00046ed4) calenote_swipe_1_pane_g2

0x0001,

0xfc79,	// (0x000488ca) calenote_swipe_1_pane_g_ParamLimits

0xfc79,	// (0x000488ca) calenote_swipe_1_pane_g

0xe5b1,	// (0x00047202) calenote_swipe_1_pane_t1_ParamLimits

0xe5b1,	// (0x00047202) calenote_swipe_1_pane_t1

0xe276,	// (0x00046ec7) calenote_swipe_2_pane_g1_ParamLimits

0xe276,	// (0x00046ec7) calenote_swipe_2_pane_g1

0xe5d0,	// (0x00047221) calenote_swipe_2_pane_g2_ParamLimits

0xe5d0,	// (0x00047221) calenote_swipe_2_pane_g2

0x0001,

0xfd20,	// (0x00048971) calenote_swipe_2_pane_g_ParamLimits

0xfd20,	// (0x00048971) calenote_swipe_2_pane_g

0xe5dc,	// (0x0004722d) calenote_swipe_2_pane_t1_ParamLimits

0xe5dc,	// (0x0004722d) calenote_swipe_2_pane_t1

0x11c1,	// (0x00039e12) main_mup_navstr_pane

0x7568,	// (0x000401b9) main_mup3_pane_t7_ParamLimits

0x7568,	// (0x000401b9) main_mup3_pane_t7

0xeca9,	// (0x000478fa) main_mp4_pane_g6_ParamLimits

0xeca9,	// (0x000478fa) main_mp4_pane_g6

0xee5b,	// (0x00047aac) main_image3_pane_t4_ParamLimits

0xee5b,	// (0x00047aac) main_image3_pane_t4

0xa0c7,	// (0x00042d18) popup_navstr_preview_pane_ParamLimits

0xa0c7,	// (0x00042d18) popup_navstr_preview_pane

0xa0d7,	// (0x00042d28) scroll_navstr_pane_ParamLimits

0xa0d7,	// (0x00042d28) scroll_navstr_pane

0x11c1,	// (0x00039e12) bg_popup_preview_window_pane_cp04

0xe603,	// (0x00047254) popup_navstr_preview_pane_t1

0xa0eb,	// (0x00042d3c) scroll_navstr_pane_g1_ParamLimits

0xa0eb,	// (0x00042d3c) scroll_navstr_pane_g1

0xa0ff,	// (0x00042d50) scroll_navstr_pane_t1_ParamLimits

0xa0ff,	// (0x00042d50) scroll_navstr_pane_t1

0xe5a8,	// (0x000471f9) bg_button_pane_cp014

0xe5a8,	// (0x000471f9) bg_button_pane_cp030

0xe1da,	// (0x00046e2b) list_double_fisheye_pane_g4_ParamLimits

0xe1da,	// (0x00046e2b) list_double_fisheye_pane_g4

0xe1e6,	// (0x00046e37) list_double_fisheye_pane_g5_ParamLimits

0xe1e6,	// (0x00046e37) list_double_fisheye_pane_g5

0xe51a,	// (0x0004716b) sp_fs_scroll_pane_cp03

0xe33c,	// (0x00046f8d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe348,	// (0x00046f99) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc96,	// (0x000488e7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9e88,	// (0x00042ad9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe512,	// (0x00047163) sp_fs_scroll_pane_cp02

0x1a34,	// (0x0003a685) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1a34,	// (0x0003a685) popup_sp_fs_calendar_preview_list_single_pane

0x11c1,	// (0x00039e12) main_cam6_pano_pane

0x20c4,	// (0x0003ad15) main_mup3_pane_ParamLimits

0x11c1,	// (0x00039e12) main_phacti_pane

0x98d4,	// (0x00042525) bg_button_pane_cp11

0x98ec,	// (0x0004253d) main_mobtv_info_pane_g2_ParamLimits

0x98ec,	// (0x0004253d) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x00048847) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x00048847) main_mobtv_info_pane_g

0x9aa1,	// (0x000426f2) sc_clock_pane_t5_ParamLimits

0x9aa1,	// (0x000426f2) sc_clock_pane_t5

0x9b4c,	// (0x0004279d) main_radioblah_pane_g1_ParamLimits

0xe13f,	// (0x00046d90) main_radioblah_pane_t3_ParamLimits

0xe13f,	// (0x00046d90) main_radioblah_pane_t3

0xe157,	// (0x00046da8) main_radioblah_pane_t4_ParamLimits

0xe157,	// (0x00046da8) main_radioblah_pane_t4

0x9b74,	// (0x000427c5) main_radioblah_text_pane_ParamLimits

0x9b74,	// (0x000427c5) main_radioblah_text_pane

0x9b86,	// (0x000427d7) main_radioblah_info_pane_g1_ParamLimits

0x9c19,	// (0x0004286a) main_radioblah_info_pane_t4_ParamLimits

0x9c19,	// (0x0004286a) main_radioblah_info_pane_t4

0x20c4,	// (0x0003ad15) main_sp_fs_calendar_pane

0xa115,	// (0x00042d66) main_phacti_pane_g1

0xa11d,	// (0x00042d6e) phacti_note_pane_ParamLimits

0xa11d,	// (0x00042d6e) phacti_note_pane

0xe61a,	// (0x0004726b) phacti_term_pane_ParamLimits

0xe61a,	// (0x0004726b) phacti_term_pane

0xe62f,	// (0x00047280) phacti_note_pane_t1_ParamLimits

0xe62f,	// (0x00047280) phacti_note_pane_t1

0xe646,	// (0x00047297) phacti_term_pane_g1

0xe64e,	// (0x0004729f) phacti_term_pane_t1_ParamLimits

0xe64e,	// (0x0004729f) phacti_term_pane_t1

0xe678,	// (0x000472c9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe680,	// (0x000472d1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd2a,	// (0x0004897b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe688,	// (0x000472d9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe688,	// (0x000472d9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe69e,	// (0x000472ef) aid_popup_sp_fs_bg_corner_pane

0x1b46,	// (0x0003a797) popup_sp_fs_calendar_preview_bg_pane_g1

0x11c1,	// (0x00039e12) popup_sp_fs_calendar_preview_bg_pane

0xe6a6,	// (0x000472f7) popup_sp_fs_calendar_preview_list_pane

0x5d5f,	// (0x0003e9b0) bg_main_sp_fs_cale_pane_ParamLimits

0x5d5f,	// (0x0003e9b0) bg_main_sp_fs_cale_pane

0xe6b7,	// (0x00047308) listscroll_cale_mrui_pane_ParamLimits

0xe6b7,	// (0x00047308) listscroll_cale_mrui_pane

0xe6cc,	// (0x0004731d) listscroll_sp_fs_schedule_track_pane

0xe6d5,	// (0x00047326) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe6d5,	// (0x00047326) main_sp_fs_ctrlbar_pane_cp01

0xe6e8,	// (0x00047339) main_sp_fs_ribbon_pane

0xe6f0,	// (0x00047341) popup_sp_fs_cale_preview_window

0xa180,	// (0x00042dd1) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa180,	// (0x00042dd1) list_single_sp_fs_schedule_track_pane

0x20c4,	// (0x0003ad15) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x20c4,	// (0x0003ad15) bg_sp_fs_highlight_list_pane_cp03

0xa194,	// (0x00042de5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa194,	// (0x00042de5) list_single_sp_fs_schedule_track_pane_g1

0xa1a0,	// (0x00042df1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa1a0,	// (0x00042df1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2f,	// (0x00048980) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2f,	// (0x00048980) list_single_sp_fs_schedule_track_pane_g

0xa1ac,	// (0x00042dfd) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa1ac,	// (0x00042dfd) list_single_sp_fs_schedule_track_pane_t1

0xa1c6,	// (0x00042e17) sp_fs_schedule_track_pane_ParamLimits

0xa1c6,	// (0x00042e17) sp_fs_schedule_track_pane

0xe6ff,	// (0x00047350) sp_fs_schedule_track_pane_g1

0xe707,	// (0x00047358) sp_fs_schedule_track_pane_g2

0xe70f,	// (0x00047360) sp_fs_schedule_track_pane_g3

0xe717,	// (0x00047368) sp_fs_schedule_track_pane_g4

0xe71f,	// (0x00047370) sp_fs_schedule_track_pane_g5

0x0004,

0xfd34,	// (0x00048985) sp_fs_schedule_track_pane_g

0xd184,	// (0x00045dd5) bg_sp_fs_schedule_viewer_highlight_g1

0x1d64,	// (0x0003a9b5) bg_sp_fs_schedule_viewer_highlight_g2

0xd18c,	// (0x00045ddd) bg_sp_fs_schedule_viewer_highlight_g3

0xd194,	// (0x00045de5) bg_sp_fs_schedule_viewer_highlight_g4

0xd3d3,	// (0x00046024) bg_sp_fs_schedule_viewer_highlight_g5

0xd1a4,	// (0x00045df5) bg_sp_fs_schedule_viewer_highlight_g6

0xd1ac,	// (0x00045dfd) bg_sp_fs_schedule_viewer_highlight_g7

0xd1b4,	// (0x00045e05) bg_sp_fs_schedule_viewer_highlight_g8

0x1d44,	// (0x0003a995) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3f,	// (0x00048990) bg_sp_fs_schedule_viewer_highlight_g

0x11c1,	// (0x00039e12) bg_main_sp_fs_ribbon_pane

0xa1d7,	// (0x00042e28) main_sp_fs_ribbon_pane_g1

0xe727,	// (0x00047378) main_sp_fs_ribbon_pane_t1

0xa1e0,	// (0x00042e31) main_sp_fs_ribbon_pane_t2

0xe736,	// (0x00047387) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd52,	// (0x000489a3) main_sp_fs_ribbon_pane_t

0xe745,	// (0x00047396) main_sp_fs_ribbon_scheduler_pane

0xe74d,	// (0x0004739e) bg_main_sp_fs_ribbon_pane_g1

0xe756,	// (0x000473a7) bg_main_sp_fs_ribbon_pane_g2

0xe75f,	// (0x000473b0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd59,	// (0x000489aa) bg_main_sp_fs_ribbon_pane_g

0xe767,	// (0x000473b8) main_sp_fs_ribbon_scheduler_pane_g1

0xe770,	// (0x000473c1) main_sp_fs_ribbon_scheduler_pane_g2

0xe779,	// (0x000473ca) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd60,	// (0x000489b1) main_sp_fs_ribbon_scheduler_pane_g

0xe782,	// (0x000473d3) list_cale_mrui_pane

0xa1ef,	// (0x00042e40) sp_fs_scroll_pane_cp07_ParamLimits

0xa1ef,	// (0x00042e40) sp_fs_scroll_pane_cp07

0xa207,	// (0x00042e58) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa207,	// (0x00042e58) bg_sp_fs_schedule_viewer_highlight

0xe78f,	// (0x000473e0) list_single_sp_fs_schedule_track_pane_cp01

0xe797,	// (0x000473e8) list_sp_fs_schedule_track_pane

0xe79f,	// (0x000473f0) sp_fs_scroll_pane_cp06_ParamLimits

0xe79f,	// (0x000473f0) sp_fs_scroll_pane_cp06

0x1b46,	// (0x0003a797) bgmain_sp_fs_calendar_pane_g1

0x354e,	// (0x0003c19f) list_single_cale_mrui_pane_ParamLimits

0x354e,	// (0x0003c19f) list_single_cale_mrui_pane

0xe7b1,	// (0x00047402) list_single_cale_mrui_row_pane_ParamLimits

0xe7b1,	// (0x00047402) list_single_cale_mrui_row_pane

0x356f,	// (0x0003c1c0) list_single_cale_mrui_row_pane_g1_ParamLimits

0x356f,	// (0x0003c1c0) list_single_cale_mrui_row_pane_g1

0x35a7,	// (0x0003c1f8) list_single_cale_mrui_row_pane_t1_ParamLimits

0x35a7,	// (0x0003c1f8) list_single_cale_mrui_row_pane_t1

0x35b9,	// (0x0003c20a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x35b9,	// (0x0003c20a) list_single_cale_mrui_row_pane_t2

0x361f,	// (0x0003c270) list_single_cale_mrui_row_pane_t3_ParamLimits

0x361f,	// (0x0003c270) list_single_cale_mrui_row_pane_t3

0x364e,	// (0x0003c29f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x364e,	// (0x0003c29f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd6e,	// (0x000489bf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd6e,	// (0x000489bf) list_single_cale_mrui_row_pane_t

0x367d,	// (0x0003c2ce) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x367d,	// (0x0003c2ce) list_single_cmail_header_editor_pane_bg_cp01

0x36a1,	// (0x0003c2f2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x36a1,	// (0x0003c2f2) list_single_cmail_header_editor_pane_bg_cp02

0xa217,	// (0x00042e68) main_radioblah_text_pane_t1_ParamLimits

0xa217,	// (0x00042e68) main_radioblah_text_pane_t1

0xe7d4,	// (0x00047425) cam6_indi_pane_cp01

0xe7dc,	// (0x0004742d) cam6_mode_pane_cp01

0xe7e4,	// (0x00047435) cam6_pano_pane

0xe7ed,	// (0x0004743e) cam6_zoom_pane_cp01

0xe7f5,	// (0x00047446) cam6_pano_image_pane

0xe7fe,	// (0x0004744f) cam6_pano_pane_g1

0xdea6,	// (0x00046af7) cam6_pano_pane_g2

0xe807,	// (0x00047458) cam6_pano_pane_g3

0xe810,	// (0x00047461) cam6_pano_pane_g4

0xcdc5,	// (0x00045a16) cam6_pano_pane_g5

0xe819,	// (0x0004746a) cam6_pano_pane_g6

0xe821,	// (0x00047472) cam6_pano_pane_g7

0xe829,	// (0x0004747a) cam6_pano_pane_g8

0xe832,	// (0x00047483) cam6_pano_pane_g9

0x0008,

0xfd77,	// (0x000489c8) cam6_pano_pane_g

0x11c1,	// (0x00039e12) main_browser_tag_pane

0xe5fb,	// (0x0004724c) grid_navstr_albumart_pane

0xe83b,	// (0x0004748c) cell_navstr_albumart_pane_ParamLimits

0xe83b,	// (0x0004748c) cell_navstr_albumart_pane

0x5f93,	// (0x0003ebe4) cell_navstr_albumart_pane_g1

0xc253,	// (0x00044ea4) cell_navstr_albumart_pane_g2

0xc263,	// (0x00044eb4) cell_navstr_albumart_pane_g3

0xc25b,	// (0x00044eac) cell_navstr_albumart_pane_g4

0x0003,

0xfd8a,	// (0x000489db) cell_navstr_albumart_pane_g

0xa230,	// (0x00042e81) bt_list_pane_ParamLimits

0xa230,	// (0x00042e81) bt_list_pane

0xa243,	// (0x00042e94) bt_list_pane_t1

0xa252,	// (0x00042ea3) bt_list_pane_t2

0x0001,

0xfd93,	// (0x000489e4) bt_list_pane_t

0x11c1,	// (0x00039e12) main_cale_prevew_pane

0xa261,	// (0x00042eb2) popup_cale_preview_window_ParamLimits

0xa261,	// (0x00042eb2) popup_cale_preview_window

0x20c4,	// (0x0003ad15) bg_popup_preview_window_pane_cp05_ParamLimits

0x20c4,	// (0x0003ad15) bg_popup_preview_window_pane_cp05

0xe852,	// (0x000474a3) list_cale_preview_pane_ParamLimits

0xe852,	// (0x000474a3) list_cale_preview_pane

0xa276,	// (0x00042ec7) list_double_cale_preview_pane_ParamLimits

0xa276,	// (0x00042ec7) list_double_cale_preview_pane

0xa287,	// (0x00042ed8) list_single_cale_preview_pane_ParamLimits

0xa287,	// (0x00042ed8) list_single_cale_preview_pane

0xe85e,	// (0x000474af) list_single_cale_preview_pane_g1

0xe866,	// (0x000474b7) list_single_cale_preview_pane_t1_ParamLimits

0xe866,	// (0x000474b7) list_single_cale_preview_pane_t1

0xa29b,	// (0x00042eec) list_double_cale_preview_pane_g1

0xa2a3,	// (0x00042ef4) list_double_cale_preview_pane_t1_ParamLimits

0xa2a3,	// (0x00042ef4) list_double_cale_preview_pane_t1

0xa2b8,	// (0x00042f09) list_double_cale_preview_pane_t2_ParamLimits

0xa2b8,	// (0x00042f09) list_double_cale_preview_pane_t2

0x0001,

0xfd98,	// (0x000489e9) list_double_cale_preview_pane_t_ParamLimits

0xfd98,	// (0x000489e9) list_double_cale_preview_pane_t

0x11c1,	// (0x00039e12) main_ezdial_pane

0x20c4,	// (0x0003ad15) main_sp_fs_email_pane_ParamLimits

0x9dfe,	// (0x00042a4f) cmail_ddmenu_btn01_pane_ParamLimits

0x9dfe,	// (0x00042a4f) cmail_ddmenu_btn01_pane

0x9e11,	// (0x00042a62) cmail_ddmenu_btn02_pane_ParamLimits

0x9e11,	// (0x00042a62) cmail_ddmenu_btn02_pane

0x9e34,	// (0x00042a85) cmail_ddmenu_btn03_pane_ParamLimits

0x9e34,	// (0x00042a85) cmail_ddmenu_btn03_pane

0x9ed1,	// (0x00042b22) main_sp_fs_ctrlbar_pane_ParamLimits

0x9ef2,	// (0x00042b43) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa03a,	// (0x00042c8b) list_cmail_body_pane_ParamLimits

0x5fc1,	// (0x0003ec12) bg_button_pane_cp12

0xe540,	// (0x00047191) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe540,	// (0x00047191) list_single_cmail_header_detail_pane_g3

0xe54d,	// (0x0004719e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe54d,	// (0x0004719e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd1b,	// (0x0004896c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd1b,	// (0x0004896c) list_single_cmail_header_detail_pane_t

0xe663,	// (0x000472b4) phacti_term_pane_t2_ParamLimits

0xe663,	// (0x000472b4) phacti_term_pane_t2

0x0001,

0xfd25,	// (0x00048976) phacti_term_pane_t_ParamLimits

0xfd25,	// (0x00048976) phacti_term_pane_t

0xe87b,	// (0x000474cc) aid_size_list_single_double

0xa2d0,	// (0x00042f21) popup_ezdial_listscroll_window

0xa2e6,	// (0x00042f37) popup_number_entry_window_cp01

0x1aec,	// (0x0003a73d) bg_popup_call_pane_cp09

0xe887,	// (0x000474d8) ezdial_list_pane

0xe88f,	// (0x000474e0) scroll_pane_cp23

0x5d5f,	// (0x0003e9b0) bg_button_pane_cp028_ParamLimits

0x5d5f,	// (0x0003e9b0) bg_button_pane_cp028

0xa2f2,	// (0x00042f43) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa2f2,	// (0x00042f43) cmail_ddmenu_btn01_pane_g1

0xa2fe,	// (0x00042f4f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa2fe,	// (0x00042f4f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd9d,	// (0x000489ee) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd9d,	// (0x000489ee) cmail_ddmenu_btn01_pane_g

0xe897,	// (0x000474e8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe897,	// (0x000474e8) cmail_ddmenu_btn01_pane_t1

0x5d5f,	// (0x0003e9b0) bg_button_pane_cp029_ParamLimits

0x5d5f,	// (0x0003e9b0) bg_button_pane_cp029

0xa30a,	// (0x00042f5b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa30a,	// (0x00042f5b) cmail_ddmenu_btn02_pane_g1

0xa322,	// (0x00042f73) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa322,	// (0x00042f73) cmail_ddmenu_btn02_pane_t1

0x20c4,	// (0x0003ad15) bg_button_pane_cp031_ParamLimits

0x20c4,	// (0x0003ad15) bg_button_pane_cp031

0xa30a,	// (0x00042f5b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa30a,	// (0x00042f5b) cmail_ddmenu_btn03_pane_g1

0xa322,	// (0x00042f73) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa322,	// (0x00042f73) cmail_ddmenu_btn03_pane_t1

0x20b0,	// (0x0003ad01) cell_dialer2_keypad_pane_t1_ParamLimits

0xcdf3,	// (0x00045a44) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xcdf3,	// (0x00045a44) cell_dialer2_keypad_pane_t1_copy1

0x9740,	// (0x00042391) ncimui_group_button_pane

0x20c4,	// (0x0003ad15) main_sp_fs_calendar_pane_ParamLimits

0xa03a,	// (0x00042c8b) list_single_cmail_header_caption_pane_ParamLimits

0xe6ae,	// (0x000472ff) aid_recal_txt_sm_pane

0x11c1,	// (0x00039e12) mian_recal_day_pane

0xe6f0,	// (0x00047341) popup_sp_fs_cale_preview_window_ParamLimits

0xe8ac,	// (0x000474fd) list_recal_day_pane

0xe8ee,	// (0x0004753f) list_single_recal_day_pane_ParamLimits

0xe8ee,	// (0x0004753f) list_single_recal_day_pane

0xe900,	// (0x00047551) list_single_recal_day_pane_g1_ParamLimits

0xe900,	// (0x00047551) list_single_recal_day_pane_g1

0xe90c,	// (0x0004755d) list_single_recal_day_pane_g2_ParamLimits

0xe90c,	// (0x0004755d) list_single_recal_day_pane_g2

0xe918,	// (0x00047569) list_single_recal_day_pane_g3_ParamLimits

0xe918,	// (0x00047569) list_single_recal_day_pane_g3

0x36bf,	// (0x0003c310) list_single_recal_day_pane_g4_ParamLimits

0x36bf,	// (0x0003c310) list_single_recal_day_pane_g4

0xe924,	// (0x00047575) list_single_recal_day_pane_g5_ParamLimits

0xe924,	// (0x00047575) list_single_recal_day_pane_g5

0x36d7,	// (0x0003c328) list_single_recal_day_pane_g6_ParamLimits

0x36d7,	// (0x0003c328) list_single_recal_day_pane_g6

0x0004,

0xfdac,	// (0x000489fd) list_single_recal_day_pane_g_ParamLimits

0xfdac,	// (0x000489fd) list_single_recal_day_pane_g

0xe938,	// (0x00047589) list_single_recal_day_pane_t1

0x36e3,	// (0x0003c334) list_single_recal_day_pane_t2

0x0001,

0xfdb7,	// (0x00048a08) list_single_recal_day_pane_t

0xa346,	// (0x00042f97) ncimui_query_button_pane_ParamLimits

0xa346,	// (0x00042f97) ncimui_query_button_pane

0xa356,	// (0x00042fa7) ncimui_query_button_pane_t1_ParamLimits

0xa356,	// (0x00042fa7) ncimui_query_button_pane_t1

0xe94a,	// (0x0004759b) ncimui_query_button_pane_t2_ParamLimits

0xe94a,	// (0x0004759b) ncimui_query_button_pane_t2

0x0001,

0xfdbc,	// (0x00048a0d) ncimui_query_button_pane_t_ParamLimits

0xfdbc,	// (0x00048a0d) ncimui_query_button_pane_t

0xa369,	// (0x00042fba) query_button_pane_ParamLimits

0xa369,	// (0x00042fba) query_button_pane

0x11c1,	// (0x00039e12) bg_button_pane_cp0028

0xe95d,	// (0x000475ae) query_button_pane_t1

0x699b,	// (0x0003f5ec) main_tport_pane_ParamLimits

0x9f4d,	// (0x00042b9e) bg_popup_window_pane_cp01_ParamLimits

0x9f4d,	// (0x00042b9e) bg_popup_window_pane_cp01

0x9f64,	// (0x00042bb5) heading_pane_cp08_ParamLimits

0x9f64,	// (0x00042bb5) heading_pane_cp08

0x9f75,	// (0x00042bc6) heading_pane_cp07_ParamLimits

0x9f75,	// (0x00042bc6) heading_pane_cp07

0xe4e4,	// (0x00047135) cell_tport_appsw_pane_g2

0x0002,

0xfd08,	// (0x00048959) cell_tport_appsw_pane_g

0x2fba,	// (0x0003bc0b) input_candi_list_open_g1

0x1f11,	// (0x0003ab62) list_cale_time_pane_g6_ParamLimits

0x1f11,	// (0x0003ab62) list_cale_time_pane_g6

0x6ff9,	// (0x0003fc4a) aid_size_touch_calib_1_ParamLimits

0x6ff9,	// (0x0003fc4a) aid_size_touch_calib_1

0x700b,	// (0x0003fc5c) aid_size_touch_calib_2_ParamLimits

0x700b,	// (0x0003fc5c) aid_size_touch_calib_2

0x7021,	// (0x0003fc72) aid_size_touch_calib_3_ParamLimits

0x7021,	// (0x0003fc72) aid_size_touch_calib_3

0x7039,	// (0x0003fc8a) aid_size_touch_calib_4_ParamLimits

0x7039,	// (0x0003fc8a) aid_size_touch_calib_4

0x704d,	// (0x0003fc9e) main_touch_calib_button_group_pane_ParamLimits

0x704d,	// (0x0003fc9e) main_touch_calib_button_group_pane

0x7065,	// (0x0003fcb6) main_touch_calib_pane_g1_ParamLimits

0x7077,	// (0x0003fcc8) main_touch_calib_pane_g2_ParamLimits

0x7089,	// (0x0003fcda) main_touch_calib_pane_g3_ParamLimits

0x709b,	// (0x0003fcec) main_touch_calib_pane_g4_ParamLimits

0xf703,	// (0x00048354) main_touch_calib_pane_g_ParamLimits

0x70ad,	// (0x0003fcfe) main_touch_calib_pane_t1_ParamLimits

0x70c5,	// (0x0003fd16) main_touch_calib_pane_t2_ParamLimits

0x70dd,	// (0x0003fd2e) main_touch_calib_pane_t3_ParamLimits

0x70ef,	// (0x0003fd40) main_touch_calib_pane_t4_ParamLimits

0x7101,	// (0x0003fd52) main_touch_calib_pane_t5_ParamLimits

0xf70c,	// (0x0004835d) main_touch_calib_pane_t_ParamLimits

0xcbc8,	// (0x00045819) list_single_fp_cale_pane_g3_ParamLimits

0xcbc8,	// (0x00045819) list_single_fp_cale_pane_g3

0x20c4,	// (0x0003ad15) bg_button_pane_cp012_ParamLimits

0x20c4,	// (0x0003ad15) bg_vkb2_func_pane_cp03_ParamLimits

0x8b8f,	// (0x000417e0) cell_vitu2_function_top_pane_g1_ParamLimits

0x20c4,	// (0x0003ad15) bg_vkb2_func_pane_cp04_ParamLimits

0x96d0,	// (0x00042321) main_ncimui_button_group_pane_ParamLimits

0x96d0,	// (0x00042321) main_ncimui_button_group_pane

0x972e,	// (0x0004237f) main_ncimui_pane_t3_ParamLimits

0x972e,	// (0x0004237f) main_ncimui_pane_t3

0xe611,	// (0x00047262) phacti_button_group_pane

0xe87b,	// (0x000474cc) aid_size_list_single_double_ParamLimits

0xa2d0,	// (0x00042f21) popup_ezdial_listscroll_window_ParamLimits

0xa2e6,	// (0x00042f37) popup_number_entry_window_cp01_ParamLimits

0xa37b,	// (0x00042fcc) phacti_button_pane_ParamLimits

0xa37b,	// (0x00042fcc) phacti_button_pane

0x11c1,	// (0x00039e12) bg_button_pane_cp14

0xe96b,	// (0x000475bc) phacti_button_pane_t1

0xa38a,	// (0x00042fdb) main_touch_calib_button_pane_ParamLimits

0xa38a,	// (0x00042fdb) main_touch_calib_button_pane

0x1927,	// (0x0003a578) bg_button_pane_cp18_ParamLimits

0x1927,	// (0x0003a578) bg_button_pane_cp18

0xa3a5,	// (0x00042ff6) main_touch_calib_button_pane_t1_ParamLimits

0xa3a5,	// (0x00042ff6) main_touch_calib_button_pane_t1

0xa3bb,	// (0x0004300c) main_touch_calib_button_pane_t2_ParamLimits

0xa3bb,	// (0x0004300c) main_touch_calib_button_pane_t2

0x0001,

0xfdc1,	// (0x00048a12) main_touch_calib_button_pane_t_ParamLimits

0xfdc1,	// (0x00048a12) main_touch_calib_button_pane_t

0x11c1,	// (0x00039e12) cell_ncimui_button_pane

0x11c1,	// (0x00039e12) bg_button_pane_cp032

0xe979,	// (0x000475ca) cell_ncimui_button_pane_t1

0xee3b,	// (0x00047a8c) image3_infobar_pane_ParamLimits

0xee3b,	// (0x00047a8c) image3_infobar_pane

0x9ac9,	// (0x0004271a) fs_bigclock_status_pane_ParamLimits

0x9ac9,	// (0x0004271a) fs_bigclock_status_pane

0x9ad6,	// (0x00042727) main_fs_bigclock_clock_pane_ParamLimits

0x9ad6,	// (0x00042727) main_fs_bigclock_clock_pane

0x9af8,	// (0x00042749) main_fs_bigclock_indi_pane_ParamLimits

0x9af8,	// (0x00042749) main_fs_bigclock_indi_pane

0x9b22,	// (0x00042773) main_fs_bigclock_swipe_pane_ParamLimits

0x9b22,	// (0x00042773) main_fs_bigclock_swipe_pane

0x11c1,	// (0x00039e12) main_fs_clock_dumped_data

0xdfb3,	// (0x00046c04) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfb3,	// (0x00046c04) list_single_fs_bigclock_indicator_pane_g1

0xdfcd,	// (0x00046c1e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdfcd,	// (0x00046c1e) list_single_fs_bigclock_indicator_pane_g2

0xdfe7,	// (0x00046c38) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdfe7,	// (0x00046c38) list_single_fs_bigclock_indicator_pane_g3

0xe001,	// (0x00046c52) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe001,	// (0x00046c52) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x0004887b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x0004887b) list_single_fs_bigclock_indicator_pane_g

0xe02a,	// (0x00046c7b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe02a,	// (0x00046c7b) list_single_fs_bigclock_indicator_pane_t1

0xe052,	// (0x00046ca3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe052,	// (0x00046ca3) list_single_fs_bigclock_indicator_pane_t2

0xe07a,	// (0x00046ccb) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe07a,	// (0x00046ccb) list_single_fs_bigclock_indicator_pane_t3

0xe0a2,	// (0x00046cf3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0a2,	// (0x00046cf3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x00048886) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x00048886) list_single_fs_bigclock_indicator_pane_t

0xe987,	// (0x000475d8) image3_infobar_fav_pane_ParamLimits

0xe987,	// (0x000475d8) image3_infobar_fav_pane

0xe997,	// (0x000475e8) image3_infobar_loc_pane_ParamLimits

0xe997,	// (0x000475e8) image3_infobar_loc_pane

0xe9ab,	// (0x000475fc) image3_infobar_time_pane_ParamLimits

0xe9ab,	// (0x000475fc) image3_infobar_time_pane

0x1b46,	// (0x0003a797) image3_infobar_time_pane_g1

0xe9bb,	// (0x0004760c) image3_infobar_time_pane_t1

0x1b46,	// (0x0003a797) image3_infobar_loc_pane_g1

0xe9c9,	// (0x0004761a) image3_infobar_loc_pane_g2

0x0001,

0xfdc6,	// (0x00048a17) image3_infobar_loc_pane_g

0xe9d1,	// (0x00047622) image3_infobar_loc_pane_t1

0x1b46,	// (0x0003a797) image3_infobar_fav_pane_g1

0xe9df,	// (0x00047630) image3_infobar_fav_pane_g2

0x0001,

0xfdcb,	// (0x00048a1c) image3_infobar_fav_pane_g

0xe9e7,	// (0x00047638) fs_bigclock_status_battery_pane

0xe9f0,	// (0x00047641) fs_bigclock_status_signal_pane

0xe9f9,	// (0x0004764a) fs_bigclock_status_title_pane

0xea02,	// (0x00047653) fs_bigclock_status_signal_pane_g1

0xea0b,	// (0x0004765c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdd0,	// (0x00048a21) fs_bigclock_status_signal_pane_g

0xea13,	// (0x00047664) fs_bigclock_status_battery_pane_g1

0xea1c,	// (0x0004766d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd5,	// (0x00048a26) fs_bigclock_status_battery_pane_g

0xea24,	// (0x00047675) fs_bigclock_status_title_pane_t1

0xa3d9,	// (0x0004302a) main_fs_bigclock_clock_pane_g1

0xa3eb,	// (0x0004303c) main_fs_bigclock_clock_pane_g2

0xa3fc,	// (0x0004304d) main_fs_bigclock_clock_pane_g3

0xa3fc,	// (0x0004304d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdda,	// (0x00048a2b) main_fs_bigclock_clock_pane_g

0xa40f,	// (0x00043060) main_fs_bigclock_clock_pane_t1

0xa42a,	// (0x0004307b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfde3,	// (0x00048a34) main_fs_bigclock_clock_pane_t

0xea32,	// (0x00047683) list_single_fs_bigclock_indicator_pane_ParamLimits

0xea32,	// (0x00047683) list_single_fs_bigclock_indicator_pane

0xea43,	// (0x00047694) list_single_fs_bigclock_pane_ParamLimits

0xea43,	// (0x00047694) list_single_fs_bigclock_pane

0x021e,	// (0x00038e6f) main_fs_bigclock_indicator_pane_t1

0x022d,	// (0x00038e7e) list_single_fs_bigclock_pane_g1

0x0235,	// (0x00038e86) list_single_fs_bigclock_pane_t1

0x1b46,	// (0x0003a797) main_fs_bigclock_swipe_pane_g1

0x0275,	// (0x00038ec6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf4,	// (0x00048a45) main_fs_bigclock_swipe_pane_g

0x027d,	// (0x00038ece) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x027d,	// (0x00038ece) main_fs_bigclock_swipe_pane_t1

0x55d0,	// (0x0003e221) call_type_pane_ParamLimits

0x11c1,	// (0x00039e12) main_btmg_pane

0x359b,	// (0x0003c1ec) list_single_cale_mrui_row_pane_g2_ParamLimits

0x359b,	// (0x0003c1ec) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd67,	// (0x000489b8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd67,	// (0x000489b8) list_single_cale_mrui_row_pane_g

0xe8d5,	// (0x00047526) list_recal_vselct_arw_lo_pane

0xe8dd,	// (0x0004752e) list_recal_vselct_arw_up_pane

0xe8e5,	// (0x00047536) list_recal_vselct_pane

0x029a,	// (0x00038eeb) btmg_button_pane

0xa48a,	// (0x000430db) main_btmg_pane_g1

0x11c1,	// (0x00039e12) bg_button_pane_cp044

0x02aa,	// (0x00038efb) btmg_button_pane_t1

0xc486,	// (0x000450d7) aid_listscroll_gen

0x20c4,	// (0x0003ad15) main_cntbar_detail_pane

0xe50a,	// (0x0004715b) list_cmail_folder_pane

0xe51a,	// (0x0004716b) sp_fs_scroll_pane_cp03_ParamLimits

0xa03a,	// (0x00042c8b) list_single_fs_dyc_pane_cp01_ParamLimits

0xa03a,	// (0x00042c8b) list_single_fs_dyc_pane_cp01

0x02b8,	// (0x00038f09) aid_size_cmail_indent

0xea60,	// (0x000476b1) list_single_dyc_row_pane_cp01

0xa4ba,	// (0x0004310b) cntbar_detail_list_pane_ParamLimits

0xa4ba,	// (0x0004310b) cntbar_detail_list_pane

0xa500,	// (0x00043151) main_cntbar_detail_cont_pane_ParamLimits

0xa500,	// (0x00043151) main_cntbar_detail_cont_pane

0xa514,	// (0x00043165) scroll_pane_cp032_ParamLimits

0xa514,	// (0x00043165) scroll_pane_cp032

0xa520,	// (0x00043171) cntbar_detail_list_event_pane_ParamLimits

0xa520,	// (0x00043171) cntbar_detail_list_event_pane

0xa4ca,	// (0x0004311b) cntbar_detail_list_shct_pane

0x0339,	// (0x00038f8a) aid_list_gen

0x1a22,	// (0x0003a673) aid_scroll

0xd6ee,	// (0x0004633f) aid_size_touch_scroll_bar

0xd719,	// (0x0004636a) aid_list_double

0x903a,	// (0x00041c8b) aid_list_single

0x903a,	// (0x00041c8b) aid_list_single_lg

0x36f5,	// (0x0003c346) aid_list_z_g_a_sm

0x36fd,	// (0x0003c34e) aid_list_z_g_d

0x3705,	// (0x0003c356) aid_txt_z_prm

0xea69,	// (0x000476ba) aid_txt_z_prm_cp01

0xea77,	// (0x000476c8) aid_txt_z_sec

0xa531,	// (0x00043182) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa531,	// (0x00043182) main_cntbar_detail_cont_pane_g1

0xa545,	// (0x00043196) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa545,	// (0x00043196) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf9,	// (0x00048a4a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf9,	// (0x00048a4a) main_cntbar_detail_cont_pane_g

0x035b,	// (0x00038fac) main_cntbar_detail_cont_pane_t1

0x0369,	// (0x00038fba) main_cntbar_detail_cont_pane_t2

0x0377,	// (0x00038fc8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdfe,	// (0x00048a4f) main_cntbar_detail_cont_pane_t

0xa555,	// (0x000431a6) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa555,	// (0x000431a6) cell_cntbar_detail_list_shct_pane

0x0397,	// (0x00038fe8) cntbar_detail_list_shct_pane_g1

0x03a0,	// (0x00038ff1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe05,	// (0x00048a56) cntbar_detail_list_shct_pane_g

0xa567,	// (0x000431b8) cntbar_detail_list_event_pane_g1_ParamLimits

0xa567,	// (0x000431b8) cntbar_detail_list_event_pane_g1

0xa573,	// (0x000431c4) cntbar_detail_list_event_pane_g2_ParamLimits

0xa573,	// (0x000431c4) cntbar_detail_list_event_pane_g2

0x0005,

0xfe0a,	// (0x00048a5b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe0a,	// (0x00048a5b) cntbar_detail_list_event_pane_g

0xa5df,	// (0x00043230) cntbar_detail_list_event_pane_t1_ParamLimits

0xa5df,	// (0x00043230) cntbar_detail_list_event_pane_t1

0xa5f4,	// (0x00043245) cntbar_detail_list_event_pane_t2_ParamLimits

0xa5f4,	// (0x00043245) cntbar_detail_list_event_pane_t2

0x0002,

0xfe17,	// (0x00048a68) cntbar_detail_list_event_pane_t_ParamLimits

0xfe17,	// (0x00048a68) cntbar_detail_list_event_pane_t

0x1b46,	// (0x0003a797) cell_cntbar_detail_list_shct_pane_g1

0x5bce,	// (0x0003e81f) navi_pane_mv_g3

0x20c4,	// (0x0003ad15) main_cntbar_detail_pane_ParamLimits

0x11c1,	// (0x00039e12) main_notif_wgt_pane

0xec37,	// (0x00047888) aid_tch_main_mp4_pane_g4

0xee33,	// (0x00047a84) popup_slider_window_cp02

0xe8cb,	// (0x0004751c) list_recal_day_event_pane

0xa492,	// (0x000430e3) cntbar_detail_btn_pane_ParamLimits

0xa492,	// (0x000430e3) cntbar_detail_btn_pane

0xa4a5,	// (0x000430f6) cntbar_detail_btn_pane_cp01_ParamLimits

0xa4a5,	// (0x000430f6) cntbar_detail_btn_pane_cp01

0xa4ca,	// (0x0004311b) cntbar_detail_list_shct_pane_ParamLimits

0xa4da,	// (0x0004312b) cntbar_detail_pane_g1_ParamLimits

0xa4da,	// (0x0004312b) cntbar_detail_pane_g1

0xa4ea,	// (0x0004313b) cntbar_detail_pane_t1_ParamLimits

0xa4ea,	// (0x0004313b) cntbar_detail_pane_t1

0xa57f,	// (0x000431d0) cntbar_detail_list_event_pane_g3_ParamLimits

0xa57f,	// (0x000431d0) cntbar_detail_list_event_pane_g3

0xa597,	// (0x000431e8) cntbar_detail_list_event_pane_g4_ParamLimits

0xa597,	// (0x000431e8) cntbar_detail_list_event_pane_g4

0xa5af,	// (0x00043200) cntbar_detail_list_event_pane_g5_ParamLimits

0xa5af,	// (0x00043200) cntbar_detail_list_event_pane_g5

0xa5c7,	// (0x00043218) cntbar_detail_list_event_pane_g6_ParamLimits

0xa5c7,	// (0x00043218) cntbar_detail_list_event_pane_g6

0xa609,	// (0x0004325a) cntbar_detail_list_event_pane_t3_ParamLimits

0xa609,	// (0x0004325a) cntbar_detail_list_event_pane_t3

0xa61b,	// (0x0004326c) popup_notif_wgt_window_ParamLimits

0xa61b,	// (0x0004326c) popup_notif_wgt_window

0xa630,	// (0x00043281) popup_submenu_window_cp01_ParamLimits

0xa630,	// (0x00043281) popup_submenu_window_cp01

0x1aec,	// (0x0003a73d) bg_popup_window_pane_cp10

0x0477,	// (0x000390c8) listscroll_notif_wgt_pane

0x0488,	// (0x000390d9) list_notif_wgt_window

0x0491,	// (0x000390e2) scroll_pane_cp033

0xa640,	// (0x00043291) list_notif_wgt_row_pane_ParamLimits

0xa640,	// (0x00043291) list_notif_wgt_row_pane

0x04ac,	// (0x000390fd) aid_size_list_notif_wgt_del

0x04b9,	// (0x0003910a) list_notif_wgt_row_pane_g1

0x04c5,	// (0x00039116) list_notif_wgt_row_pane_g2

0x04d9,	// (0x0003912a) list_notif_wgt_row_pane_g3

0x0002,

0xfe1e,	// (0x00048a6f) list_notif_wgt_row_pane_g

0x04e6,	// (0x00039137) list_notif_wgt_row_pane_t1

0x04fc,	// (0x0003914d) list_notif_wgt_row_pane_t2

0x050e,	// (0x0003915f) list_notif_wgt_row_pane_t3

0x0002,

0xfe25,	// (0x00048a76) list_notif_wgt_row_pane_t

0xd3e8,	// (0x00046039) list_recal_day_event_pane_g1

0x0520,	// (0x00039171) list_recal_day_event_pane_t1

0x11c1,	// (0x00039e12) bg_button_pane_cp045

0xa650,	// (0x000432a1) cntbar_detail_btn_pane_t1

0x5d5f,	// (0x0003e9b0) main_callh_pane_ParamLimits

0x5d5f,	// (0x0003e9b0) main_callh_pane

0x11c1,	// (0x00039e12) main_coverflow0_pane

0x11c1,	// (0x00039e12) main_wgtman_pane

0x9b36,	// (0x00042787) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9b36,	// (0x00042787) main_fs_bigclock_unlock_btn_pane

0xe4dc,	// (0x0004712d) bg_button_pane_cp16

0xe4ec,	// (0x0004713d) cell_tport_appsw_pane_g3

0xa65e,	// (0x000432af) cf0_flow_pane_ParamLimits

0xa65e,	// (0x000432af) cf0_flow_pane

0x054c,	// (0x0003919d) listscroll_cf0_pane

0x0555,	// (0x000391a6) main_cf0_pane_g1

0xa673,	// (0x000432c4) main_cf0_pane_t1_ParamLimits

0xa673,	// (0x000432c4) main_cf0_pane_t1

0xa688,	// (0x000432d9) main_cf0_pane_t2_ParamLimits

0xa688,	// (0x000432d9) main_cf0_pane_t2

0x0001,

0xfe31,	// (0x00048a82) main_cf0_pane_t_ParamLimits

0xfe31,	// (0x00048a82) main_cf0_pane_t

0x058b,	// (0x000391dc) scroll_pane_cp11

0xa69d,	// (0x000432ee) cf0_flow_pane_g1

0xa6a5,	// (0x000432f6) cf0_flow_pane_g2

0x0001,

0xfe36,	// (0x00048a87) cf0_flow_pane_g

0xa6ad,	// (0x000432fe) cf0_flow_pane_t1

0x11c1,	// (0x00039e12) main_call6_pane

0x11c1,	// (0x00039e12) main_calllock_pane

0xa6bb,	// (0x0004330c) call6_btn_grp_pane_ParamLimits

0xa6bb,	// (0x0004330c) call6_btn_grp_pane

0xa6d1,	// (0x00043322) call6_pane_g1_ParamLimits

0xa6d1,	// (0x00043322) call6_pane_g1

0xa6e4,	// (0x00043335) popup_call6_1st_window_ParamLimits

0xa6e4,	// (0x00043335) popup_call6_1st_window

0xa6f3,	// (0x00043344) popup_call6_2nd_window_ParamLimits

0xa6f3,	// (0x00043344) popup_call6_2nd_window

0xa702,	// (0x00043353) cell_call6_btn_pane_ParamLimits

0xa702,	// (0x00043353) cell_call6_btn_pane

0x1aec,	// (0x0003a73d) bg_popup_call2_in_pane_cp03

0x05f3,	// (0x00039244) popup_call6_1st_window_g1

0x05fb,	// (0x0003924c) popup_call6_1st_window_g2

0x0603,	// (0x00039254) popup_call6_1st_window_g3

0x0002,

0xfe3b,	// (0x00048a8c) popup_call6_1st_window_g

0x060b,	// (0x0003925c) popup_call6_1st_window_t1

0x061a,	// (0x0003926b) popup_call6_1st_window_t2

0x0628,	// (0x00039279) popup_call6_1st_window_t3

0x0002,

0xfe42,	// (0x00048a93) popup_call6_1st_window_t

0x1aec,	// (0x0003a73d) bg_popup_call2_in_pane_cp04

0x0636,	// (0x00039287) popup_call6_2nd_window_g1

0x063e,	// (0x0003928f) popup_call6_2nd_window_g2

0x0646,	// (0x00039297) popup_call6_2nd_window_g3

0x0002,

0xfe49,	// (0x00048a9a) popup_call6_2nd_window_g

0x064e,	// (0x0003929f) popup_call6_2nd_window_t1

0x11c1,	// (0x00039e12) bg_button_pane_cp15

0x065d,	// (0x000392ae) cell_call6_btn_pane_g1

0x0666,	// (0x000392b7) cell_call6_btn_pane_t1

0xa716,	// (0x00043367) listscroll_wgtman_pane_ParamLimits

0xa716,	// (0x00043367) listscroll_wgtman_pane

0xa737,	// (0x00043388) wgtman_btn_pane_ParamLimits

0xa737,	// (0x00043388) wgtman_btn_pane

0x5816,	// (0x0003e467) aid_scroll_copy1

0x06c4,	// (0x00039315) list_wgtman_pane

0xa777,	// (0x000433c8) wgtman_btn_pane_g1_ParamLimits

0xa777,	// (0x000433c8) wgtman_btn_pane_g1

0xa7a3,	// (0x000433f4) wgtman_btn_pane_t1_ParamLimits

0xa7a3,	// (0x000433f4) wgtman_btn_pane_t1

0x072d,	// (0x0003937e) wgtman_btn_pane_t2_ParamLimits

0x072d,	// (0x0003937e) wgtman_btn_pane_t2

0x0001,

0xfe50,	// (0x00048aa1) wgtman_btn_pane_t_ParamLimits

0xfe50,	// (0x00048aa1) wgtman_btn_pane_t

0xa7e0,	// (0x00043431) listrow_wgtman_pane_ParamLimits

0xa7e0,	// (0x00043431) listrow_wgtman_pane

0xa7f2,	// (0x00043443) listrow_wgtman_pane_g1

0xa7ff,	// (0x00043450) listrow_wgtman_pane_g2

0x0001,

0xfe55,	// (0x00048aa6) listrow_wgtman_pane_g

0x3713,	// (0x0003c364) listrow_wgtman_pane_t1

0x372b,	// (0x0003c37c) listrow_wgtman_pane_t2

0x0001,

0xfe5a,	// (0x00048aab) listrow_wgtman_pane_t

0x3751,	// (0x0003c3a2) wait_bar_pane_cp09

0x077a,	// (0x000393cb) main_calllock_btn_pane

0x0782,	// (0x000393d3) main_calllock_pane_g1

0x11c1,	// (0x00039e12) bg_button_pane_cp17

0x078b,	// (0x000393dc) main_calllock_btn_pane_g1

0x0794,	// (0x000393e5) main_calllock_btn_pane_t1

0x11c1,	// (0x00039e12) main_dialer3_pane

0x11c1,	// (0x00039e12) main_fmrd2_pane

0x1b46,	// (0x0003a797) main_fs_bigclock_unlock_btn_pane_g1

0x07ab,	// (0x000393fc) main_fs_bigclock_unlock_btn_pane_t1

0xa817,	// (0x00043468) area_fmrd2_info_pane_ParamLimits

0xa817,	// (0x00043468) area_fmrd2_info_pane

0xa826,	// (0x00043477) area_fmrd2_visual_pane_ParamLimits

0xa826,	// (0x00043477) area_fmrd2_visual_pane

0xa834,	// (0x00043485) fmrd2_indi_pane_ParamLimits

0xa834,	// (0x00043485) fmrd2_indi_pane

0xa841,	// (0x00043492) area_fmrd2_visual_pane_g1

0xa849,	// (0x0004349a) area_fmrd2_visual_pane_t1

0xa857,	// (0x000434a8) area_fmrd2_visual_pane_t2

0xa865,	// (0x000434b6) area_fmrd2_visual_pane_t3

0x0002,

0xfe64,	// (0x00048ab5) area_fmrd2_visual_pane_t

0xa873,	// (0x000434c4) area_fmrd2_info_pane_g1

0xa87b,	// (0x000434cc) area_fmrd2_info_pane_t1

0xa889,	// (0x000434da) area_fmrd2_info_pane_t2

0xa897,	// (0x000434e8) area_fmrd2_info_pane_t3

0xa8a5,	// (0x000434f6) area_fmrd2_info_pane_t4

0x0003,

0xfe6b,	// (0x00048abc) area_fmrd2_info_pane_t

0xa8b3,	// (0x00043504) fmrd2_indi_pane_t1

0xa8c1,	// (0x00043512) fmrd2_indi_pane_t2

0xa8cf,	// (0x00043520) fmrd2_indi_pane_t3

0x0002,

0xfe74,	// (0x00048ac5) fmrd2_indi_pane_t

0xe010,	// (0x00046c61) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe010,	// (0x00046c61) list_single_fs_bigclock_indicator_pane_g5

0xe0be,	// (0x00046d0f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe0be,	// (0x00046d0f) list_single_fs_bigclock_indicator_pane_t5

0xa131,	// (0x00042d82) aid_cell_bcale_month_pane_ParamLimits

0xa131,	// (0x00042d82) aid_cell_bcale_month_pane

0xa14f,	// (0x00042da0) bcale_month_pane_ParamLimits

0xa14f,	// (0x00042da0) bcale_month_pane

0xa167,	// (0x00042db8) bcale_preview_pane_ParamLimits

0xa167,	// (0x00042db8) bcale_preview_pane

0x0235,	// (0x00038e86) list_single_fs_bigclock_pane_t1_ParamLimits

0x0251,	// (0x00038ea2) list_single_fs_bigclock_pane_t2_ParamLimits

0x0251,	// (0x00038ea2) list_single_fs_bigclock_pane_t2

0x0001,

0xfdef,	// (0x00048a40) list_single_fs_bigclock_pane_t_ParamLimits

0xfdef,	// (0x00048a40) list_single_fs_bigclock_pane_t

0x07a3,	// (0x000393f4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5f,	// (0x00048ab0) main_fs_bigclock_unlock_btn_pane_g

0xa8dd,	// (0x0004352e) aid_dia3_key_size_ParamLimits

0xa8dd,	// (0x0004352e) aid_dia3_key_size

0xa8ec,	// (0x0004353d) aid_dia3_listrow_size_ParamLimits

0xa8ec,	// (0x0004353d) aid_dia3_listrow_size

0xa8ff,	// (0x00043550) dia3_keypad_fun_pane_ParamLimits

0xa8ff,	// (0x00043550) dia3_keypad_fun_pane

0xa913,	// (0x00043564) dia3_keypad_num_pane_ParamLimits

0xa913,	// (0x00043564) dia3_keypad_num_pane

0xa924,	// (0x00043575) dia3_listscroll_pane_ParamLimits

0xa924,	// (0x00043575) dia3_listscroll_pane

0xa935,	// (0x00043586) dia3_numentry_pane_ParamLimits

0xa935,	// (0x00043586) dia3_numentry_pane

0x08c6,	// (0x00039517) dia3_list_pane

0x08cf,	// (0x00039520) scroll_pane_cp12

0x11c1,	// (0x00039e12) bg_dia3_numentry_pane

0xa949,	// (0x0004359a) dia3_numentry_pane_t1

0xa958,	// (0x000435a9) cell_dia3_key_num_pane

0xa960,	// (0x000435b1) cell_dia3_key0_fun_pane_ParamLimits

0xa960,	// (0x000435b1) cell_dia3_key0_fun_pane

0xa974,	// (0x000435c5) cell_dia3_key1_fun_pane_ParamLimits

0xa974,	// (0x000435c5) cell_dia3_key1_fun_pane

0xa98b,	// (0x000435dc) dia3_listrow_pane

0xdd1f,	// (0x00046970) bg_dia3_numentry_pane_g1

0x11c1,	// (0x00039e12) bg_button_pane_cp21

0x0916,	// (0x00039567) cell_dia3_key_num_pane_t1

0x0924,	// (0x00039575) cell_dia3_key_num_pane_t2

0x0933,	// (0x00039584) cell_dia3_key_num_pane_t3

0x0942,	// (0x00039593) cell_dia3_key_num_pane_t4

0x0003,

0xfe7b,	// (0x00048acc) cell_dia3_key_num_pane_t

0x11c1,	// (0x00039e12) bg_button_pane_cp19

0x0951,	// (0x000395a2) cell_dia3_key0_fun_pane_g1

0x11c1,	// (0x00039e12) bg_button_pane_cp20

0xa99d,	// (0x000435ee) cell_dia3_key1_fun_pane_g1

0xa9a5,	// (0x000435f6) area_left_week_number_pane

0xa9b1,	// (0x00043602) area_top_day_name_pane

0xa9c2,	// (0x00043613) frame_month_view_pane

0x098f,	// (0x000395e0) grid_month_view_pane

0xa9d3,	// (0x00043624) cell_top_day_name_pane_ParamLimits

0xa9d3,	// (0x00043624) cell_top_day_name_pane

0xa9f6,	// (0x00043647) cell_area_left_week_number_pane_ParamLimits

0xa9f6,	// (0x00043647) cell_area_left_week_number_pane

0xaa0a,	// (0x0004365b) cell_month_view_pane_ParamLimits

0xaa0a,	// (0x0004365b) cell_month_view_pane

0x09f8,	// (0x00039649) frm_month_g1

0xaa2f,	// (0x00043680) frm_month_g2

0xaa40,	// (0x00043691) frm_month_g3

0xaa51,	// (0x000436a2) frm_month_g4

0xaa62,	// (0x000436b3) frm_month_g5

0xaa73,	// (0x000436c4) frm_month_g6

0xaa84,	// (0x000436d5) frm_month_g7

0x0a5f,	// (0x000396b0) frm_month_g8

0xaa95,	// (0x000436e6) frm_month_g9

0xaaa5,	// (0x000436f6) frm_month_g10

0xaab5,	// (0x00043706) frm_month_g11

0xaac5,	// (0x00043716) frm_month_g12

0xaad5,	// (0x00043726) frm_month_g13

0xaae5,	// (0x00043736) frm_month_g14

0xaaf5,	// (0x00043746) frm_month_g15

0xab07,	// (0x00043758) frm_month_g16

0x000f,

0xfe84,	// (0x00048ad5) frm_month_g

0x0ad4,	// (0x00039725) cell_top_day_name_pane_t1

0xab19,	// (0x0004376a) cell_area_left_week_number_pane_g1

0xab25,	// (0x00043776) cell_area_left_week_number_pane_t1

0x18b1,	// (0x0003a502) cell_month_view_pane_g1

0xab38,	// (0x00043789) cell_month_view_pane_t1

0x11c1,	// (0x00039e12) main_fps_pane

0xe304,	// (0x00046f55) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe304,	// (0x00046f55) cmail_ddmenu_btn02_pane_cp1

0xe320,	// (0x00046f71) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe320,	// (0x00046f71) cmail_ddmenu_btn02_pane_cp2

0xa316,	// (0x00042f67) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa316,	// (0x00042f67) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfda2,	// (0x000489f3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfda2,	// (0x000489f3) cmail_ddmenu_btn02_pane_g

0xa334,	// (0x00042f85) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa334,	// (0x00042f85) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda7,	// (0x000489f8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda7,	// (0x000489f8) cmail_ddmenu_btn02_pane_t

0xab4b,	// (0x0004379c) fps_text_pane_ParamLimits

0xab4b,	// (0x0004379c) fps_text_pane

0xab61,	// (0x000437b2) main_fps_pane_g1_ParamLimits

0xab61,	// (0x000437b2) main_fps_pane_g1

0xab77,	// (0x000437c8) wait_bar_pane_cp010_ParamLimits

0xab77,	// (0x000437c8) wait_bar_pane_cp010

0xab88,	// (0x000437d9) fps_text_pane_t1_ParamLimits

0xab88,	// (0x000437d9) fps_text_pane_t1

0x0d00,	// (0x00039951) cam4_image_uncrop_pane_g1

0x0d09,	// (0x0003995a) cam4_image_uncrop_pane_g2

0x81cf,	// (0x00040e20) cam4_image_uncrop_pane_g3

0x81d8,	// (0x00040e29) cam4_image_uncrop_pane_g4

0x0003,

0xf8a4,	// (0x000484f5) cam4_image_uncrop_pane_g

0xa98b,	// (0x000435dc) dia3_listrow_pane_ParamLimits

0x11c1,	// (0x00039e12) main_phob2_pane

0x9fd4,	// (0x00042c25) cell_tport_appsw_pane_cp02_ParamLimits

0x9fd4,	// (0x00042c25) cell_tport_appsw_pane_cp02

0x9fe4,	// (0x00042c35) cell_tport_appsw_pane_cp03_ParamLimits

0x9fe4,	// (0x00042c35) cell_tport_appsw_pane_cp03

0x11c1,	// (0x00039e12) phob2_contact_card_pane

0x11c1,	// (0x00039e12) phob2_listscroll_pane

0x0b60,	// (0x000397b1) phob2_list_pane

0x0b68,	// (0x000397b9) scroll_pane_cp034

0xaba0,	// (0x000437f1) phob2_cc_data_pane_ParamLimits

0xaba0,	// (0x000437f1) phob2_cc_data_pane

0xabbd,	// (0x0004380e) phob2_cc_listscroll_pane_ParamLimits

0xabbd,	// (0x0004380e) phob2_cc_listscroll_pane

0xa7e0,	// (0x00043431) list_double_large_graphic_phob2_pane_ParamLimits

0xa7e0,	// (0x00043431) list_double_large_graphic_phob2_pane

0xabd9,	// (0x0004382a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xabd9,	// (0x0004382a) list_double_large_graphic_phob2_pane_g1

0x3763,	// (0x0003c3b4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x3763,	// (0x0003c3b4) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfea5,	// (0x00048af6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea5,	// (0x00048af6) list_double_large_graphic_phob2_pane_g

0x3787,	// (0x0003c3d8) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x3787,	// (0x0003c3d8) list_double_large_graphic_phob2_pane_t1

0x379c,	// (0x0003c3ed) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x379c,	// (0x0003c3ed) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeae,	// (0x00048aff) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeae,	// (0x00048aff) list_double_large_graphic_phob2_pane_t

0x11c1,	// (0x00039e12) list_highlight_pane_cp024

0x0bbf,	// (0x00039810) phob2_cc_button_pane

0xabe6,	// (0x00043837) phob2_cc_data_pane_g1_ParamLimits

0xabe6,	// (0x00043837) phob2_cc_data_pane_g1

0xabfd,	// (0x0004384e) phob2_cc_data_pane_g2_ParamLimits

0xabfd,	// (0x0004384e) phob2_cc_data_pane_g2

0x0001,

0xfeb3,	// (0x00048b04) phob2_cc_data_pane_g_ParamLimits

0xfeb3,	// (0x00048b04) phob2_cc_data_pane_g

0xac0f,	// (0x00043860) phob2_cc_data_pane_t1_ParamLimits

0xac0f,	// (0x00043860) phob2_cc_data_pane_t1

0xac27,	// (0x00043878) phob2_cc_data_pane_t2_ParamLimits

0xac27,	// (0x00043878) phob2_cc_data_pane_t2

0xac3f,	// (0x00043890) phob2_cc_data_pane_t3_ParamLimits

0xac3f,	// (0x00043890) phob2_cc_data_pane_t3

0x0002,

0xfeb8,	// (0x00048b09) phob2_cc_data_pane_t_ParamLimits

0xfeb8,	// (0x00048b09) phob2_cc_data_pane_t

0x0c24,	// (0x00039875) phob2_cc_list_pane_ParamLimits

0x0c24,	// (0x00039875) phob2_cc_list_pane

0xdc3c,	// (0x0004688d) scroll_pane_cp035_ParamLimits

0xdc3c,	// (0x0004688d) scroll_pane_cp035

0x20c4,	// (0x0003ad15) bg_button_pane_cp033

0x0c30,	// (0x00039881) phob2_cc_button_pane_g1

0x0c3c,	// (0x0003988d) phob2_cc_button_pane_t1

0x0c51,	// (0x000398a2) phob2_cc_button_pane_t2

0x0001,

0xfebf,	// (0x00048b10) phob2_cc_button_pane_t

0xac57,	// (0x000438a8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xac57,	// (0x000438a8) list_double_large_graphic_phob2_cc_pane

0xac85,	// (0x000438d6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xac85,	// (0x000438d6) list_double_large_graphic_phob2_cc_pane_g1

0x37b1,	// (0x0003c402) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x37b1,	// (0x0003c402) list_double_large_graphic_phob2_cc_pane_g2

0x37bd,	// (0x0003c40e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x37bd,	// (0x0003c40e) list_double_large_graphic_phob2_cc_pane_g3

0x37c9,	// (0x0003c41a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x37c9,	// (0x0003c41a) list_double_large_graphic_phob2_cc_pane_g4

0x37d5,	// (0x0003c426) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x37d5,	// (0x0003c426) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec4,	// (0x00048b15) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec4,	// (0x00048b15) list_double_large_graphic_phob2_cc_pane_g

0x37e1,	// (0x0003c432) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x37e1,	// (0x0003c432) list_double_large_graphic_phob2_cc_pane_t1

0x380a,	// (0x0003c45b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x380a,	// (0x0003c45b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfecf,	// (0x00048b20) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfecf,	// (0x00048b20) list_double_large_graphic_phob2_cc_pane_t

0x0cba,	// (0x0003990b) list_highlight_pane_cp025_ParamLimits

0x0cba,	// (0x0003990b) list_highlight_pane_cp025

0x20c4,	// (0x0003ad15) bg_button_pane_cp033_ParamLimits

0x0c30,	// (0x00039881) phob2_cc_button_pane_g1_ParamLimits

0x0c3c,	// (0x0003988d) phob2_cc_button_pane_t1_ParamLimits

0x0c51,	// (0x000398a2) phob2_cc_button_pane_t2_ParamLimits

0xfebf,	// (0x00048b10) phob2_cc_button_pane_t_ParamLimits

0x3a2b,	// (0x0003c67c) popup_wgtman_window

0xdd3f,	// (0x00046990) scroll_pane_cp038

0xa759,	// (0x000433aa) wgtman_btn_pane_cp_01_ParamLimits

0xa759,	// (0x000433aa) wgtman_btn_pane_cp_01

0x0cc8,	// (0x00039919) wgtman_content_pane

0x0cd1,	// (0x00039922) wgtman_heading_pane

0x11c1,	// (0x00039e12) bg_heading_pane_cp02

0x0cda,	// (0x0003992b) wgtman_heading_pane_g1

0x0ce2,	// (0x00039933) wgtman_heading_pane_t1

0x0cf0,	// (0x00039941) scroll_pane_cp036

0x0cf8,	// (0x00039949) wgtman_list_pane

0xea85,	// (0x000476d6) wgtman_list_pane_t1_ParamLimits

0xea85,	// (0x000476d6) wgtman_list_pane_t1

0xeebf,	// (0x00047b10) cam4_grid_pane

0x3198,	// (0x0003bde9) bg_button_pane_cp015_ParamLimits

0x8d08,	// (0x00041959) bg_button_pane_cp016_ParamLimits

0x8d1a,	// (0x0004196b) bg_button_pane_cp017_ParamLimits

0x31d6,	// (0x0003be27) popup_vitu2_query_window_g3_ParamLimits

0x31d6,	// (0x0003be27) popup_vitu2_query_window_g3

0x324f,	// (0x0003bea0) popup_vitu2_query_window_t6_ParamLimits

0x324f,	// (0x0003bea0) popup_vitu2_query_window_t6

0x327a,	// (0x0003becb) popup_vitu2_query_window_t7_ParamLimits

0x327a,	// (0x0003becb) popup_vitu2_query_window_t7

0x0d00,	// (0x00039951) cam4_grid_pane_g1

0x0d09,	// (0x0003995a) cam4_grid_pane_g2

0x0d12,	// (0x00039963) cam4_grid_pane_g3

0x0d1b,	// (0x0003996c) cam4_grid_pane_g4

0x0003,

0xfed4,	// (0x00048b25) cam4_grid_pane_g

0x4667,	// (0x0003d2b8) aid_placing_vt_slider_lsc_ParamLimits

0x48d7,	// (0x0003d528) vidtel_button_pane_ParamLimits

0x48d7,	// (0x0003d528) vidtel_button_pane

0x11c1,	// (0x00039e12) bg_button_pane_cp034

0xac91,	// (0x000438e2) vidtel_button_pane_g1

0xac99,	// (0x000438ea) vidtel_button_pane_t1

0xd3cb,	// (0x0004601c) aid_size_vtel_slider_touch

0xdc3c,	// (0x0004688d) scroll_pane_cp039

0xdd6e,	// (0x000469bf) ncim_query_button_pane_cp01_ParamLimits

0xdd8d,	// (0x000469de) ncimui_query_pane_g1_ParamLimits

0x20c4,	// (0x0003ad15) input_focus_pane_cp012_ParamLimits

0xddb2,	// (0x00046a03) ncim_query_entry_pane_t1_ParamLimits

0xdc3c,	// (0x0004688d) scroll_pane_cp039_ParamLimits

0x5acc,	// (0x0003e71d) navi_pane_bcale_mc_g1

0x5ad4,	// (0x0003e725) navi_pane_bcale_mc_t1

0xe354,	// (0x00046fa5) main_sp_fs_email_pane_g1

0xe360,	// (0x00046fb1) main_sp_fs_email_pane_g2

0x0001,

0xfc9f,	// (0x000488f0) main_sp_fs_email_pane_g

0xe7c7,	// (0x00047418) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe7c7,	// (0x00047418) list_single_cale_mrui_row_pane_g3

0x36cd,	// (0x0003c31e) list_single_recal_day_pane_g5_event_pane

0xe930,	// (0x00047581) list_single_recal_day_pane_g7

0x0d42,	// (0x00039993) list_recal_day_event_pane_cp01

0x0d4b,	// (0x0003999c) list_recal_vselct_arw_lo_pane_cp01

0x0d53,	// (0x000399a4) list_recal_vselct_arw_up_pane_cp01

0x0d5b,	// (0x000399ac) list_recal_vselct_pane_cp01

0xd3e8,	// (0x00046039) list_recal_day_event_pane_cp01_g1

0xea9c,	// (0x000476ed) list_recal_day_event_pane_cp01_t1

0xe938,	// (0x00047589) list_single_recal_day_pane_t1_ParamLimits

0x36e3,	// (0x0003c334) list_single_recal_day_pane_t2_ParamLimits

0xfdb7,	// (0x00048a08) list_single_recal_day_pane_t_ParamLimits

0x1837,	// (0x0003a488) bg_notes_pane_ParamLimits

0x1901,	// (0x0003a552) list_notes_pane_ParamLimits

0x3c1f,	// (0x0003c870) scroll_pane_cp06_ParamLimits

0x1927,	// (0x0003a578) main_notes_pane_ParamLimits

0x20c4,	// (0x0003ad15) main_welc_pane

0xacc5,	// (0x00043916) main_welc_body_pane_ParamLimits

0xacc5,	// (0x00043916) main_welc_body_pane

0xace1,	// (0x00043932) main_welc_opti_pane_ParamLimits

0xace1,	// (0x00043932) main_welc_opti_pane

0xad4d,	// (0x0004399e) main_welc_pane_t1_ParamLimits

0xad4d,	// (0x0004399e) main_welc_pane_t1

0xae8d,	// (0x00043ade) main_welc_body_row_pane_ParamLimits

0xae8d,	// (0x00043ade) main_welc_body_row_pane

0x5d51,	// (0x0003e9a2) main_welc_opti_row_pane_ParamLimits

0x5d51,	// (0x0003e9a2) main_welc_opti_row_pane

0x0f01,	// (0x00039b52) main_welc_opti_row_pane_g1

0xaea0,	// (0x00043af1) main_welc_opti_row_pane_t1

0x0f18,	// (0x00039b69) main_welc_body_row_pane_t1

0x0480,	// (0x000390d1) popup_notif_wgt_heading_pane

0x04ac,	// (0x000390fd) aid_size_list_notif_wgt_del_ParamLimits

0x04b9,	// (0x0003910a) list_notif_wgt_row_pane_g1_ParamLimits

0x04c5,	// (0x00039116) list_notif_wgt_row_pane_g2_ParamLimits

0x04d9,	// (0x0003912a) list_notif_wgt_row_pane_g3_ParamLimits

0xfe1e,	// (0x00048a6f) list_notif_wgt_row_pane_g_ParamLimits

0x04e6,	// (0x00039137) list_notif_wgt_row_pane_t1_ParamLimits

0x04fc,	// (0x0003914d) list_notif_wgt_row_pane_t2_ParamLimits

0x050e,	// (0x0003915f) list_notif_wgt_row_pane_t3_ParamLimits

0xfe25,	// (0x00048a76) list_notif_wgt_row_pane_t_ParamLimits

0xa7f2,	// (0x00043443) listrow_wgtman_pane_g1_ParamLimits

0xa7ff,	// (0x00043450) listrow_wgtman_pane_g2_ParamLimits

0xfe55,	// (0x00048aa6) listrow_wgtman_pane_g_ParamLimits

0x3713,	// (0x0003c364) listrow_wgtman_pane_t1_ParamLimits

0x372b,	// (0x0003c37c) listrow_wgtman_pane_t2_ParamLimits

0xfe5a,	// (0x00048aab) listrow_wgtman_pane_t_ParamLimits

0x3751,	// (0x0003c3a2) wait_bar_pane_cp09_ParamLimits

0x11c1,	// (0x00039e12) bg_popup_heading_pane_cp02

0x0f27,	// (0x00039b78) popup_notif_wgt_heading_pane_g1

0x0f2f,	// (0x00039b80) popup_notif_wgt_heading_pane_t1

0xc49a,	// (0x000450eb) main_vids_pane

0x11c1,	// (0x00039e12) vids_listscroll_pane

0xaeaf,	// (0x00043b00) scroll_pane_cp040

0x11c1,	// (0x00039e12) vids_list_pane

0x0329,	// (0x00038f7a) vids_list_double_pane_ParamLimits

0x0329,	// (0x00038f7a) vids_list_double_pane

0xaeba,	// (0x00043b0b) vids_list_double_pane_g1

0xaec3,	// (0x00043b14) vids_list_double_pane_t1

0xaed2,	// (0x00043b23) vids_list_double_pane_t2

0x0001,

0xfef3,	// (0x00048b44) vids_list_double_pane_t

0x20c4,	// (0x0003ad15) main_ncimui_pane_ParamLimits

0x96e2,	// (0x00042333) main_ncimui_pane_g1_ParamLimits

0x96ee,	// (0x0004233f) main_ncimui_pane_g2_ParamLimits

0x96ee,	// (0x0004233f) main_ncimui_pane_g2

0x0001,

0xfba0,	// (0x000487f1) main_ncimui_pane_g_ParamLimits

0xfba0,	// (0x000487f1) main_ncimui_pane_g

0xacf8,	// (0x00043949) main_welc_pane_g1_ParamLimits

0xacf8,	// (0x00043949) main_welc_pane_g1

0xad0b,	// (0x0004395c) main_welc_pane_g2_ParamLimits

0xad0b,	// (0x0004395c) main_welc_pane_g2

0x0003,

0xfedd,	// (0x00048b2e) main_welc_pane_g_ParamLimits

0xfedd,	// (0x00048b2e) main_welc_pane_g

0x1837,	// (0x0003a488) listscroll_mce_pane_ParamLimits

0x5c4c,	// (0x0003e89d) wait_bar_pane_cp10

0xc48e,	// (0x000450df) main_cale_day_pane_ParamLimits

0xc48e,	// (0x000450df) main_cale_week_pane_ParamLimits

0x1837,	// (0x0003a488) main_messa_pane_ParamLimits

0x780d,	// (0x0004045e) main_clock2_btn_pane_ParamLimits

0x780d,	// (0x0004045e) main_clock2_btn_pane

0xcc1a,	// (0x0004586b) main_clock2_btn_pane_cp01_ParamLimits

0xcc1a,	// (0x0004586b) main_clock2_btn_pane_cp01

0xe782,	// (0x000473d3) list_cale_mrui_pane_ParamLimits

0x055f,	// (0x000391b0) main_cf0_pane_g2

0x0001,

0xfe2c,	// (0x00048a7d) main_cf0_pane_g

0xa9a5,	// (0x000435f6) area_left_week_number_pane_ParamLimits

0xa9b1,	// (0x00043602) area_top_day_name_pane_ParamLimits

0xa9c2,	// (0x00043613) frame_month_view_pane_ParamLimits

0x098f,	// (0x000395e0) grid_month_view_pane_ParamLimits

0x09f8,	// (0x00039649) frm_month_g1_ParamLimits

0xaa2f,	// (0x00043680) frm_month_g2_ParamLimits

0xaa40,	// (0x00043691) frm_month_g3_ParamLimits

0xaa51,	// (0x000436a2) frm_month_g4_ParamLimits

0xaa62,	// (0x000436b3) frm_month_g5_ParamLimits

0xaa73,	// (0x000436c4) frm_month_g6_ParamLimits

0xaa84,	// (0x000436d5) frm_month_g7_ParamLimits

0x0a5f,	// (0x000396b0) frm_month_g8_ParamLimits

0xaa95,	// (0x000436e6) frm_month_g9_ParamLimits

0xaaa5,	// (0x000436f6) frm_month_g10_ParamLimits

0xaab5,	// (0x00043706) frm_month_g11_ParamLimits

0xaac5,	// (0x00043716) frm_month_g12_ParamLimits

0xaad5,	// (0x00043726) frm_month_g13_ParamLimits

0xaae5,	// (0x00043736) frm_month_g14_ParamLimits

0xaaf5,	// (0x00043746) frm_month_g15_ParamLimits

0xab07,	// (0x00043758) frm_month_g16_ParamLimits

0xfe84,	// (0x00048ad5) frm_month_g_ParamLimits

0x0ad4,	// (0x00039725) cell_top_day_name_pane_t1_ParamLimits

0xab19,	// (0x0004376a) cell_area_left_week_number_pane_g1_ParamLimits

0xab25,	// (0x00043776) cell_area_left_week_number_pane_t1_ParamLimits

0x18b1,	// (0x0003a502) cell_month_view_pane_g1_ParamLimits

0xab38,	// (0x00043789) cell_month_view_pane_t1_ParamLimits

0x182f,	// (0x0003a480) main_clock2_btn_pane_g1

0x0f7e,	// (0x00039bcf) main_clock2_btn_pane_t1

0x20c4,	// (0x0003ad15) listscroll_cmail_pane_ParamLimits

0xe354,	// (0x00046fa5) main_sp_fs_email_pane_g1_ParamLimits

0xe360,	// (0x00046fb1) main_sp_fs_email_pane_g2_ParamLimits

0xfc9f,	// (0x000488f0) main_sp_fs_email_pane_g_ParamLimits

0xe8ac,	// (0x000474fd) list_recal_day_pane_ParamLimits

0xe8bd,	// (0x0004750e) mian_recal_day_pane_t1

0x344f,	// (0x0003c0a0) list_single_dyc_row_text_pane_t4_ParamLimits

0x344f,	// (0x0003c0a0) list_single_dyc_row_text_pane_t4

0x3486,	// (0x0003c0d7) list_single_dyc_row_text_pane_t5_ParamLimits

0x3486,	// (0x0003c0d7) list_single_dyc_row_text_pane_t5

0xe3f9,	// (0x0004704a) list_single_dyc_row_text_pane_t6_ParamLimits

0xe3f9,	// (0x0004704a) list_single_dyc_row_text_pane_t6

0x5442,	// (0x0003e093) aid_mgn_list_cale_time_pane

0x20c4,	// (0x0003ad15) main_gallery2_pane_ParamLimits

0xcc2e,	// (0x0004587f) main_clock2_pane_cp01_t1

0xcc3c,	// (0x0004588d) main_clock2_pane_cp01_t3

0x0001,

0xf776,	// (0x000483c7) main_clock2_pane_cp01_t

0x3f94,	// (0x0003cbe5) cale_week_scroll_pane_g16_ParamLimits

0x3f94,	// (0x0003cbe5) cale_week_scroll_pane_g16

0x1aec,	// (0x0003a73d) vorec_slider_pane

0xac99,	// (0x000438ea) vidtel_button_pane_t1_ParamLimits

0xa3d9,	// (0x0004302a) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa3eb,	// (0x0004303c) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa3fc,	// (0x0004304d) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa3fc,	// (0x0004304d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdda,	// (0x00048a2b) main_fs_bigclock_clock_pane_g_ParamLimits

0xa40f,	// (0x00043060) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa42a,	// (0x0004307b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfde3,	// (0x00048a34) main_fs_bigclock_clock_pane_t_ParamLimits

0x714b,	// (0x0003fd9c) main_mup3_lyrics_pane_ParamLimits

0x714b,	// (0x0003fd9c) main_mup3_lyrics_pane

0xaf04,	// (0x00043b55) main_mup3_lyrics_pane_t1_ParamLimits

0xaf04,	// (0x00043b55) main_mup3_lyrics_pane_t1

0xec21,	// (0x00047872) aid_main_mp4_pane_t1_area

0xec2b,	// (0x0004787c) aid_main_mp4_pane_t2_area

0xecd7,	// (0x00047928) main_mp4_pane_g7_ParamLimits

0xecd7,	// (0x00047928) main_mp4_pane_g7

0xece3,	// (0x00047934) main_mp4_pane_g8_ParamLimits

0xece3,	// (0x00047934) main_mp4_pane_g8

0x8071,	// (0x00040cc2) aid_call6_pane_g1_size

0xac71,	// (0x000438c2) list_double_large_graphic_phob2_other_pane_ParamLimits

0xac71,	// (0x000438c2) list_double_large_graphic_phob2_other_pane

0x5852,	// (0x0003e4a3) list_double_large_graphic_phob2_other_pane_g1

0x11c1,	// (0x00039e12) list_highlight_pane_cp026

0x20c4,	// (0x0003ad15) main_welc_pane_ParamLimits

0x9e56,	// (0x00042aa7) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9e56,	// (0x00042aa7) main_sp_fs_ctrlbar_pane_g3

0x9e6e,	// (0x00042abf) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9e6e,	// (0x00042abf) main_sp_fs_ctrlbar_pane_g4

0x9eb0,	// (0x00042b01) toolbar2_fixed_button_pane_cp01

0x9ebb,	// (0x00042b0c) toolbar2_fixed_button_pane_cp02

0x9ec6,	// (0x00042b17) toolbar2_fixed_button_pane_cp03

0xacaf,	// (0x00043900) list_welc_entry_pane_ParamLimits

0xacaf,	// (0x00043900) list_welc_entry_pane

0xad1e,	// (0x0004396f) main_welc_pane_g3_ParamLimits

0xad1e,	// (0x0004396f) main_welc_pane_g3

0xad67,	// (0x000439b8) main_welc_pane_t2_ParamLimits

0xad67,	// (0x000439b8) main_welc_pane_t2

0xad7d,	// (0x000439ce) main_welc_pane_t3_ParamLimits

0xad7d,	// (0x000439ce) main_welc_pane_t3

0x0005,

0xfee6,	// (0x00048b37) main_welc_pane_t_ParamLimits

0xfee6,	// (0x00048b37) main_welc_pane_t

0xae29,	// (0x00043a7a) welc_button_pane_ParamLimits

0xae29,	// (0x00043a7a) welc_button_pane

0xae7d,	// (0x00043ace) welc_service_logo_pane_ParamLimits

0xae7d,	// (0x00043ace) welc_service_logo_pane

0xaf23,	// (0x00043b74) list_single_welc_entry_pane_ParamLimits

0xaf23,	// (0x00043b74) list_single_welc_entry_pane

0xaf34,	// (0x00043b85) list_single_welc_entry_pane_g1

0xaf3c,	// (0x00043b8d) list_single_welc_entry_pane_t1

0xaf4a,	// (0x00043b9b) list_single_welc_entry_pane_t2

0x0001,

0xfef8,	// (0x00048b49) list_single_welc_entry_pane_t

0x11c1,	// (0x00039e12) bg_button_pane_cp035

0x1003,	// (0x00039c54) welc_button_pane_t1

0x1011,	// (0x00039c62) welc_service_logo_pane_g1

0x101a,	// (0x00039c6b) welc_service_logo_pane_g2

0x0001,

0xfefd,	// (0x00048b4e) welc_service_logo_pane_g

0x11c1,	// (0x00039e12) main_int_radio_pane

0x199e,	// (0x0003a5ef) list_single_fs_dyc_pane_g1

0x376f,	// (0x0003c3c0) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x376f,	// (0x0003c3c0) list_double_large_graphic_phob2_pane_g3

0x377b,	// (0x0003c3cc) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x377b,	// (0x0003c3cc) list_double_large_graphic_phob2_pane_g4

0xaf58,	// (0x00043ba9) main_int_radio1_pane_ParamLimits

0xaf58,	// (0x00043ba9) main_int_radio1_pane

0x1039,	// (0x00039c8a) find_pane_cp02

0xaf75,	// (0x00043bc6) input_focus_pane_cp12_ParamLimits

0xaf75,	// (0x00043bc6) input_focus_pane_cp12

0xaf85,	// (0x00043bd6) input_focus_pane_cp13_ParamLimits

0xaf85,	// (0x00043bd6) input_focus_pane_cp13

0xaf99,	// (0x00043bea) input_focus_pane_cp14_ParamLimits

0xaf99,	// (0x00043bea) input_focus_pane_cp14

0x107e,	// (0x00039ccf) int_radio1_listscroll_pane

0xafad,	// (0x00043bfe) main_int_radio1_pane_g1_ParamLimits

0xafad,	// (0x00043bfe) main_int_radio1_pane_g1

0xafc1,	// (0x00043c12) main_int_radio1_pane_t1_ParamLimits

0xafc1,	// (0x00043c12) main_int_radio1_pane_t1

0xafd8,	// (0x00043c29) main_int_radio1_pane_t2_ParamLimits

0xafd8,	// (0x00043c29) main_int_radio1_pane_t2

0xafef,	// (0x00043c40) main_int_radio1_pane_t3_ParamLimits

0xafef,	// (0x00043c40) main_int_radio1_pane_t3

0xb006,	// (0x00043c57) main_int_radio1_pane_t4_ParamLimits

0xb006,	// (0x00043c57) main_int_radio1_pane_t4

0x10e1,	// (0x00039d32) main_int_radio1_pane_t5_ParamLimits

0x10e1,	// (0x00039d32) main_int_radio1_pane_t5

0xb018,	// (0x00043c69) main_int_radio1_pane_t6_ParamLimits

0xb018,	// (0x00043c69) main_int_radio1_pane_t6

0xb02d,	// (0x00043c7e) main_int_radio1_pane_t7_ParamLimits

0xb02d,	// (0x00043c7e) main_int_radio1_pane_t7

0xb042,	// (0x00043c93) main_int_radio1_pane_t8_ParamLimits

0xb042,	// (0x00043c93) main_int_radio1_pane_t8

0xb05f,	// (0x00043cb0) main_int_radio1_pane_t9_ParamLimits

0xb05f,	// (0x00043cb0) main_int_radio1_pane_t9

0xb071,	// (0x00043cc2) main_int_radio1_pane_t10_ParamLimits

0xb071,	// (0x00043cc2) main_int_radio1_pane_t10

0xb095,	// (0x00043ce6) main_int_radio1_pane_t11_ParamLimits

0xb095,	// (0x00043ce6) main_int_radio1_pane_t11

0xb0b9,	// (0x00043d0a) main_int_radio1_pane_t12_ParamLimits

0xb0b9,	// (0x00043d0a) main_int_radio1_pane_t12

0x000b,

0xff02,	// (0x00048b53) main_int_radio1_pane_t_ParamLimits

0xff02,	// (0x00048b53) main_int_radio1_pane_t

0x11b0,	// (0x00039e01) int_radio_list_pane

0x0b68,	// (0x000397b9) scroll_pane_cp037

0x0744,	// (0x00039395) list_double_large_graphic_int_radio_pane_ParamLimits

0x0744,	// (0x00039395) list_double_large_graphic_int_radio_pane

0x11b8,	// (0x00039e09) list_double_large_graphic_int_radio_pane_g1

0xeaaa,	// (0x000476fb) list_double_large_graphic_int_radio_pane_t1

0xeab8,	// (0x00047709) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xff1b,	// (0x00048b6c) list_double_large_graphic_int_radio_pane_t

0x11c1,	// (0x00039e12) list_highlight_pane_cp027

0x0d72,	// (0x000399c3) main_button_pane_4

0xad2e,	// (0x0004397f) main_welc_pane_g4_ParamLimits

0xad2e,	// (0x0004397f) main_welc_pane_g4

0xad93,	// (0x000439e4) main_welc_pane_t4_ParamLimits

0xad93,	// (0x000439e4) main_welc_pane_t4

0xada8,	// (0x000439f9) main_welc_pane_t5_ParamLimits

0xada8,	// (0x000439f9) main_welc_pane_t5

0xadf0,	// (0x00043a41) main_welc_pane_t6_ParamLimits

0xadf0,	// (0x00043a41) main_welc_pane_t6

0xae3a,	// (0x00043a8b) welc_button_pane_2_ParamLimits

0xae3a,	// (0x00043a8b) welc_button_pane_2

0xae50,	// (0x00043aa1) welc_button_pane_3_ParamLimits

0xae50,	// (0x00043aa1) welc_button_pane_3

0x0d72,	// (0x000399c3) welc_button_pane_4

0xae6b,	// (0x00043abc) welc_button_pane_5_ParamLimits

0xae6b,	// (0x00043abc) welc_button_pane_5

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

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
	0, // AknLayoutScalable_Apps::Tmain_acti_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_sso_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_logo_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_logo_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_sso_logo_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t2_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_gap_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt1_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt2_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt3_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt_Limits_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_widget_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_window_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_window_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tinput_focus_pane_cp10_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tinput_focus_pane_cp10_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t2_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t3_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t3_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t4_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Tbg_button_pane_cp22_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tbg_popup_window_pane_cp11_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tbg_popup_window_pane_cp11_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_sk_window_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_sk_window_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_pane_sig*,
	0, // AknLayoutScalable_Apps::Tscroll_pane_cp21_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tscroll_pane_cp21_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_t1_sig*,
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
