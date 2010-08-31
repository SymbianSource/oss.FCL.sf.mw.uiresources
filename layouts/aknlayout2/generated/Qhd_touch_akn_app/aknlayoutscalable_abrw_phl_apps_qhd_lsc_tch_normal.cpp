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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00025a5a };

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
0x1f56,	// (0x000279b0) Screen

0x1f62,	// (0x000279bc) application_window

0x1fcc,	// (0x00027a26) area_bottom_pane_ParamLimits

0x1fcc,	// (0x00027a26) area_bottom_pane

0x2029,	// (0x00027a83) area_top_pane_ParamLimits

0x2029,	// (0x00027a83) area_top_pane

0x2086,	// (0x00027ae0) call_video_uplink_pane_ParamLimits

0x2086,	// (0x00027ae0) call_video_uplink_pane

0x20b2,	// (0x00027b0c) main_pane_ParamLimits

0x20b2,	// (0x00027b0c) main_pane

0xbdcd,	// (0x00031827) context_pane

0x6961,	// (0x0002c3bb) navi_pane

0x6989,	// (0x0002c3e3) popup_cale_events_window_ParamLimits

0x6989,	// (0x0002c3e3) popup_cale_events_window

0xbde0,	// (0x0003183a) popup_mup_playback_window

0x69a1,	// (0x0002c3fb) signal_pane

0x2be4,	// (0x0002863e) main_browser_pane

0x51bf,	// (0x0002ac19) main_burst_pane

0x66b3,	// (0x0002c10d) main_calc_pane

0x51bf,	// (0x0002ac19) main_cale_day_pane

0x2be4,	// (0x0002863e) main_cale_month_pane

0x51bf,	// (0x0002ac19) main_cale_week_pane

0x51bf,	// (0x0002ac19) main_call_pane

0x26b7,	// (0x00028111) main_call_poc_pane

0x51bf,	// (0x0002ac19) main_camera_pane

0x51bf,	// (0x0002ac19) main_chi_dic_pane

0x4d3e,	// (0x0002a798) main_clock_pane

0x26b7,	// (0x00028111) main_fmradio_pane

0x51bf,	// (0x0002ac19) main_graph_messa_pane

0x26b7,	// (0x00028111) main_help_pane

0x2be4,	// (0x0002863e) main_im_pane

0x2912,	// (0x0002836c) main_image_pane_ParamLimits

0x2912,	// (0x0002836c) main_image_pane

0x26b7,	// (0x00028111) main_location2_pane

0x51bf,	// (0x0002ac19) main_location_pane

0x26b7,	// (0x00028111) main_messa_pane

0x26b7,	// (0x00028111) main_mp2_pane

0x51bf,	// (0x0002ac19) main_mp_pane

0x26b7,	// (0x00028111) main_msg_pane

0x26b7,	// (0x00028111) main_mup_eq_pane

0x26b7,	// (0x00028111) main_mup_pane

0x51bf,	// (0x0002ac19) main_notes_pane

0x26b7,	// (0x00028111) main_pec_pane

0x26b7,	// (0x00028111) main_phob_pane

0x26b7,	// (0x00028111) main_pinb_pane

0x26b7,	// (0x00028111) main_postcard_pane

0x26b7,	// (0x00028111) main_qdial_pane

0x51bf,	// (0x0002ac19) main_skin_pane

0x26b7,	// (0x00028111) main_smil2_pane

0x51bf,	// (0x0002ac19) main_smil_pane

0x51bf,	// (0x0002ac19) main_video_pane

0x51bf,	// (0x0002ac19) main_video_tele_pane

0x2912,	// (0x0002836c) main_viewer_pane_ParamLimits

0x2912,	// (0x0002836c) main_viewer_pane

0x51bf,	// (0x0002ac19) main_vorec_pane

0x6707,	// (0x0002c161) popup_blid_sat_info_window_ParamLimits

0x6707,	// (0x0002c161) popup_blid_sat_info_window

0x675f,	// (0x0002c1b9) popup_dyc_status_message_window_ParamLimits

0x675f,	// (0x0002c1b9) popup_dyc_status_message_window

0x6779,	// (0x0002c1d3) popup_grid_large_graphic_window_ParamLimits

0x6779,	// (0x0002c1d3) popup_grid_large_graphic_window

0x6835,	// (0x0002c28f) popup_loc_request_window_ParamLimits

0x6835,	// (0x0002c28f) popup_loc_request_window

0x6939,	// (0x0002c393) popup_wml_address_window_ParamLimits

0x6939,	// (0x0002c393) popup_wml_address_window

0x64ed,	// (0x0002bf47) call_muted_g1

0x5f2a,	// (0x0002b984) popup_call_audio_conf_window_ParamLimits

0x5f2a,	// (0x0002b984) popup_call_audio_conf_window

0x6501,	// (0x0002bf5b) popup_call_audio_first_window_ParamLimits

0x6501,	// (0x0002bf5b) popup_call_audio_first_window

0x6577,	// (0x0002bfd1) popup_call_audio_in_window_ParamLimits

0x6577,	// (0x0002bfd1) popup_call_audio_in_window

0x65b3,	// (0x0002c00d) popup_call_audio_out_window_ParamLimits

0x65b3,	// (0x0002c00d) popup_call_audio_out_window

0x65ed,	// (0x0002c047) popup_call_audio_second_window_ParamLimits

0x65ed,	// (0x0002c047) popup_call_audio_second_window

0x6643,	// (0x0002c09d) popup_call_audio_wait_window_ParamLimits

0x6643,	// (0x0002c09d) popup_call_audio_wait_window

0x6678,	// (0x0002c0d2) popup_number_entry_window_ParamLimits

0x6678,	// (0x0002c0d2) popup_number_entry_window

0x224c,	// (0x00027ca6) bg_popup_call_pane_cp05_ParamLimits

0x224c,	// (0x00027ca6) bg_popup_call_pane_cp05

0x226c,	// (0x00027cc6) popup_number_entry_window_t1

0x227f,	// (0x00027cd9) popup_number_entry_window_t2

0x2291,	// (0x00027ceb) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00034b46) popup_number_entry_window_t

0x22d7,	// (0x00027d31) text_title_cp2

0x22ea,	// (0x00027d44) bg_popup_call_pane_cp_ParamLimits

0x22ea,	// (0x00027d44) bg_popup_call_pane_cp

0x22f8,	// (0x00027d52) call_thumbnail_pane

0x2300,	// (0x00027d5a) popup_call_audio_in_window_g1_ParamLimits

0x2300,	// (0x00027d5a) popup_call_audio_in_window_g1

0x230c,	// (0x00027d66) popup_call_audio_in_window_g2_ParamLimits

0x230c,	// (0x00027d66) popup_call_audio_in_window_g2

0x2318,	// (0x00027d72) popup_call_audio_in_window_g3_ParamLimits

0x2318,	// (0x00027d72) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00034b4f) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00034b4f) popup_call_audio_in_window_g

0x2324,	// (0x00027d7e) popup_call_audio_in_window_t1_ParamLimits

0x2324,	// (0x00027d7e) popup_call_audio_in_window_t1

0x2340,	// (0x00027d9a) popup_call_audio_in_window_t2_ParamLimits

0x2340,	// (0x00027d9a) popup_call_audio_in_window_t2

0x235c,	// (0x00027db6) popup_call_audio_in_window_t3_ParamLimits

0x235c,	// (0x00027db6) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00034b56) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00034b56) popup_call_audio_in_window_t

0x22ea,	// (0x00027d44) bg_popup_call_pane_cp01_ParamLimits

0x22ea,	// (0x00027d44) bg_popup_call_pane_cp01

0x22f8,	// (0x00027d52) call_thumbnail_pane_cp02

0x236f,	// (0x00027dc9) call_type_pane_cp022

0x2377,	// (0x00027dd1) popup_call_audio_out_window_g1_ParamLimits

0x2377,	// (0x00027dd1) popup_call_audio_out_window_g1

0x2389,	// (0x00027de3) popup_call_audio_out_window_g2_ParamLimits

0x2389,	// (0x00027de3) popup_call_audio_out_window_g2

0x2395,	// (0x00027def) popup_call_audio_out_window_g3_ParamLimits

0x2395,	// (0x00027def) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00034b5d) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00034b5d) popup_call_audio_out_window_g

0x23a7,	// (0x00027e01) popup_call_audio_out_window_t1_ParamLimits

0x23a7,	// (0x00027e01) popup_call_audio_out_window_t1

0x23bf,	// (0x00027e19) popup_call_audio_out_window_t2_ParamLimits

0x23bf,	// (0x00027e19) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00034b64) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00034b64) popup_call_audio_out_window_t

0x23d4,	// (0x00027e2e) bg_popup_call_pane_ParamLimits

0x23d4,	// (0x00027e2e) bg_popup_call_pane

0x2458,	// (0x00027eb2) call_thumbnail_pane_cp_ParamLimits

0x2458,	// (0x00027eb2) call_thumbnail_pane_cp

0x247c,	// (0x00027ed6) call_type_pane_cp01_ParamLimits

0x247c,	// (0x00027ed6) call_type_pane_cp01

0x24c0,	// (0x00027f1a) popup_call_audio_first_window_g1_ParamLimits

0x24c0,	// (0x00027f1a) popup_call_audio_first_window_g1

0x250c,	// (0x00027f66) popup_call_audio_first_window_g2_ParamLimits

0x250c,	// (0x00027f66) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00034b69) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00034b69) popup_call_audio_first_window_g

0x2550,	// (0x00027faa) popup_call_audio_first_window_t1_ParamLimits

0x2550,	// (0x00027faa) popup_call_audio_first_window_t1

0x25fc,	// (0x00028056) popup_call_audio_first_window_t4_ParamLimits

0x25fc,	// (0x00028056) popup_call_audio_first_window_t4

0x2688,	// (0x000280e2) popup_call_audio_first_window_t5_ParamLimits

0x2688,	// (0x000280e2) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00034b6e) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00034b6e) popup_call_audio_first_window_t

0x26b7,	// (0x00028111) bg_popup_call_pane_cp02

0x26c1,	// (0x0002811b) call_type_pane_cp023

0x26c9,	// (0x00028123) popup_call_audio_wait_window_g1

0x26d1,	// (0x0002812b) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00034b75) popup_call_audio_wait_window_g

0x26d9,	// (0x00028133) popup_call_audio_wait_window_t3

0x26e7,	// (0x00028141) bg_popup_call_pane_cp03_ParamLimits

0x26e7,	// (0x00028141) bg_popup_call_pane_cp03

0x2747,	// (0x000281a1) call_thumbnail_pane_cp011_ParamLimits

0x2747,	// (0x000281a1) call_thumbnail_pane_cp011

0x2753,	// (0x000281ad) call_type_pane_cp034_ParamLimits

0x2753,	// (0x000281ad) call_type_pane_cp034

0x278f,	// (0x000281e9) popup_call_audio_second_window_g1_ParamLimits

0x278f,	// (0x000281e9) popup_call_audio_second_window_g1

0x27cb,	// (0x00028225) popup_call_audio_second_window_g2_ParamLimits

0x27cb,	// (0x00028225) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00034b7a) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00034b7a) popup_call_audio_second_window_g

0x2807,	// (0x00028261) popup_call_audio_second_window_t1_ParamLimits

0x2807,	// (0x00028261) popup_call_audio_second_window_t1

0x2888,	// (0x000282e2) popup_call_audio_second_window_t2_ParamLimits

0x2888,	// (0x000282e2) popup_call_audio_second_window_t2

0x28be,	// (0x00028318) popup_call_audio_second_window_t3_ParamLimits

0x28be,	// (0x00028318) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00034b7f) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00034b7f) popup_call_audio_second_window_t

0x26b7,	// (0x00028111) bg_popup_call_pane_cp04

0x28f4,	// (0x0002834e) list_conf_pane

0x28fc,	// (0x00028356) popup_call_audio_conf_window_t1

0x290a,	// (0x00028364) call_thumbnail_pane_g1

0x2912,	// (0x0002836c) bg_pinb_pane_ParamLimits

0x2912,	// (0x0002836c) bg_pinb_pane

0x2920,	// (0x0002837a) find_pinb_pane

0x2929,	// (0x00028383) listscroll_pinb_pane_ParamLimits

0x2929,	// (0x00028383) listscroll_pinb_pane

0x2938,	// (0x00028392) pinb_bg_pane_g1

0x2942,	// (0x0002839c) pinb_bg_pane_g2

0x294e,	// (0x000283a8) pinb_bg_pane_g3

0x295a,	// (0x000283b4) pinb_bg_pane_g4

0x2966,	// (0x000283c0) pinb_bg_pane_g5

0x2972,	// (0x000283cc) pinb_bg_pane_g6

0x297d,	// (0x000283d7) pinb_bg_pane_g7

0x2988,	// (0x000283e2) pinb_bg_pane_g8

0x2993,	// (0x000283ed) pinb_bg_pane_g9

0x299d,	// (0x000283f7) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00034b86) pinb_bg_pane_g

0x29ba,	// (0x00028414) grid_pinb_pane

0x29c3,	// (0x0002841d) list_pinb_pane

0x29cc,	// (0x00028426) scroll_pane_cp01_ParamLimits

0x29cc,	// (0x00028426) scroll_pane_cp01

0x29de,	// (0x00028438) find_pinb_pane_g1_ParamLimits

0x29de,	// (0x00028438) find_pinb_pane_g1

0x29f6,	// (0x00028450) find_pinb_pane_t1

0x2a08,	// (0x00028462) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00034ba0) find_pinb_pane_t

0x2a1d,	// (0x00028477) input_focus_pane_cp01_ParamLimits

0x2a1d,	// (0x00028477) input_focus_pane_cp01

0x2a29,	// (0x00028483) cell_pinb_pane_ParamLimits

0x2a29,	// (0x00028483) cell_pinb_pane

0x2a52,	// (0x000284ac) cell_pinb_pane_g1_ParamLimits

0x2a52,	// (0x000284ac) cell_pinb_pane_g1

0x2a62,	// (0x000284bc) cell_pinb_pane_g2_ParamLimits

0x2a62,	// (0x000284bc) cell_pinb_pane_g2

0x2a6e,	// (0x000284c8) cell_pinb_pane_g3_ParamLimits

0x2a6e,	// (0x000284c8) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00034ba5) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00034ba5) cell_pinb_pane_g

0x26b7,	// (0x00028111) grid_highlight_pane_cp01

0x2a7a,	// (0x000284d4) list_pinb_item_pane_ParamLimits

0x2a7a,	// (0x000284d4) list_pinb_item_pane

0x26b7,	// (0x00028111) list_highlight_pane_cp02

0x2a8c,	// (0x000284e6) list_pinb_item_pane_g1_ParamLimits

0x2a8c,	// (0x000284e6) list_pinb_item_pane_g1

0x2a99,	// (0x000284f3) list_pinb_item_pane_g2_ParamLimits

0x2a99,	// (0x000284f3) list_pinb_item_pane_g2

0x2aa5,	// (0x000284ff) list_pinb_item_pane_g3_ParamLimits

0x2aa5,	// (0x000284ff) list_pinb_item_pane_g3

0x2ab6,	// (0x00028510) list_pinb_item_pane_g4_ParamLimits

0x2ab6,	// (0x00028510) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00034bac) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00034bac) list_pinb_item_pane_g

0x2ac2,	// (0x0002851c) list_pinb_item_pane_t1_ParamLimits

0x2ac2,	// (0x0002851c) list_pinb_item_pane_t1

0x0d37,	// (0x00026791) calc_display_pane

0x0d5f,	// (0x000267b9) calc_paper_pane

0x0d82,	// (0x000267dc) grid_calc_pane

0x26b7,	// (0x00028111) bg_list_pane_cp01

0x2ad9,	// (0x00028533) clock_g1

0x2ae1,	// (0x0002853b) clock_g2

0x0001,

0xf15b,	// (0x00034bb5) clock_g

0x2ae9,	// (0x00028543) clock_t1_ParamLimits

0x2ae9,	// (0x00028543) clock_t1

0x2afe,	// (0x00028558) clock_t2_ParamLimits

0x2afe,	// (0x00028558) clock_t2

0x2b10,	// (0x0002856a) clock_t3_ParamLimits

0x2b10,	// (0x0002856a) clock_t3

0x2b22,	// (0x0002857c) clock_t4_ParamLimits

0x2b22,	// (0x0002857c) clock_t4

0x2b34,	// (0x0002858e) clock_t5_ParamLimits

0x2b34,	// (0x0002858e) clock_t5

0x2b49,	// (0x000285a3) clock_t6_ParamLimits

0x2b49,	// (0x000285a3) clock_t6

0x2b5b,	// (0x000285b5) clock_t7_ParamLimits

0x2b5b,	// (0x000285b5) clock_t7

0x2b6d,	// (0x000285c7) clock_t8_ParamLimits

0x2b6d,	// (0x000285c7) clock_t8

0x2b81,	// (0x000285db) clock_t9_ParamLimits

0x2b81,	// (0x000285db) clock_t9

0x0008,

0xf160,	// (0x00034bba) clock_t_ParamLimits

0xf160,	// (0x00034bba) clock_t

0x2b95,	// (0x000285ef) popup_clock_analogue_window_cp02

0x2b95,	// (0x000285ef) popup_clock_digital_window_cp01

0x2b9d,	// (0x000285f7) listscroll_help_pane

0x26b7,	// (0x00028111) phob_pre_status_pane

0x2ba7,	// (0x00028601) grid_qdial_pane

0x26b7,	// (0x00028111) listscroll_mce_pane

0x2bb1,	// (0x0002860b) bg_notes_pane

0x2bbb,	// (0x00028615) list_notes_pane

0x2bc5,	// (0x0002861f) scroll_pane_cp06

0x2bd0,	// (0x0002862a) bg_calc_paper_pane

0xae89,	// (0x000308e3) list_calc_pane

0x2be4,	// (0x0002863e) bg_calc_display_pane

0x0dac,	// (0x00026806) calc_display_pane_t1

0x0dbe,	// (0x00026818) calc_display_pane_t2

0xaea3,	// (0x000308fd) calc_display_pane_t3

0x0002,

0xf173,	// (0x00034bcd) calc_display_pane_t

0x0dd0,	// (0x0002682a) cell_calc_pane_ParamLimits

0x0dd0,	// (0x0002682a) cell_calc_pane

0x2bf0,	// (0x0002864a) bg_calc_paper_pane_g1

0x2bfc,	// (0x00028656) bg_calc_paper_pane_g2

0x2c08,	// (0x00028662) bg_calc_paper_pane_g3

0x2c14,	// (0x0002866e) bg_calc_paper_pane_g4

0x2c20,	// (0x0002867a) bg_calc_paper_pane_g5

0x2c2c,	// (0x00028686) bg_calc_paper_pane_g6

0x2c3b,	// (0x00028695) bg_calc_paper_pane_g7

0x2c4a,	// (0x000286a4) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00034bd4) bg_calc_paper_pane_g

0x2c5d,	// (0x000286b7) calc_bg_paper_pane_g9

0x2c70,	// (0x000286ca) list_calc_item_pane_ParamLimits

0x2c70,	// (0x000286ca) list_calc_item_pane

0x2c83,	// (0x000286dd) list_calc_item_pane_g1

0xaeb5,	// (0x0003090f) list_calc_item_pane_t1_ParamLimits

0xaeb5,	// (0x0003090f) list_calc_item_pane_t1

0x0e05,	// (0x0002685f) list_calc_item_pane_t2_ParamLimits

0x0e05,	// (0x0002685f) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00034be5) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00034be5) list_calc_item_pane_t

0x2c90,	// (0x000286ea) cell_calc_pane_g1

0x2c9a,	// (0x000286f4) grid_highlight_pane_cp02

0x2cbc,	// (0x00028716) bg_calc_display_pane_g1

0x0e37,	// (0x00026891) bg_calc_display_pane_g2

0x2cc5,	// (0x0002871f) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00034bef) bg_calc_display_pane_g

0x0e41,	// (0x0002689b) cell_qdial_pane_ParamLimits

0x0e41,	// (0x0002689b) cell_qdial_pane

0x2cce,	// (0x00028728) cell_qdial_pane_g1_ParamLimits

0x2cce,	// (0x00028728) cell_qdial_pane_g1

0x2ce4,	// (0x0002873e) cell_qdial_pane_g2_ParamLimits

0x2ce4,	// (0x0002873e) cell_qdial_pane_g2

0x2cf5,	// (0x0002874f) cell_qdial_pane_g3_ParamLimits

0x2cf5,	// (0x0002874f) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00034bf6) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00034bf6) cell_qdial_pane_g

0x2d17,	// (0x00028771) cell_qdial_pane_t1_ParamLimits

0x2d17,	// (0x00028771) cell_qdial_pane_t1

0x2d2f,	// (0x00028789) cell_qdial_pane_t2_ParamLimits

0x2d2f,	// (0x00028789) cell_qdial_pane_t2

0x2d42,	// (0x0002879c) cell_qdial_pane_t3_ParamLimits

0x2d42,	// (0x0002879c) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00034bff) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00034bff) cell_qdial_pane_t

0x26b7,	// (0x00028111) grid_highlight_pane_cp04

0x2d55,	// (0x000287af) thumbnail_qdial_pane_ParamLimits

0x2d55,	// (0x000287af) thumbnail_qdial_pane

0x2db1,	// (0x0002880b) list_help_pane

0x2dba,	// (0x00028814) scroll_pane_cp02

0x2dc3,	// (0x0002881d) help_list_pane_t1_ParamLimits

0x2dc3,	// (0x0002881d) help_list_pane_t1

0xaec7,	// (0x00030921) bg_notes_pane_g2

0xaecf,	// (0x00030929) bg_notes_pane_g3

0xaed7,	// (0x00030931) notes_bg_pane_g1

0xaedf,	// (0x00030939) notes_bg_pane_g4

0xaee7,	// (0x00030941) notes_bg_pane_g5

0xaeef,	// (0x00030949) notes_bg_pane_g6

0xaef7,	// (0x00030951) notes_bg_pane_g7

0xaeff,	// (0x00030959) notes_bg_pane_g8

0xaf07,	// (0x00030961) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00034c1d) notes_bg_pane_g

0x2de0,	// (0x0002883a) list_notes_text_pane_ParamLimits

0x2de0,	// (0x0002883a) list_notes_text_pane

0x2df5,	// (0x0002884f) list_notes_text_pane_g1

0x2dfe,	// (0x00028858) list_notes_text_pane_t1

0x2be4,	// (0x0002863e) listscroll_cale_week_pane

0x2e3a,	// (0x00028894) bg_cale_heading_pane

0x2e4e,	// (0x000288a8) bg_cale_pane_cp01

0x2e67,	// (0x000288c1) cale_week_corner_pane

0x2e7d,	// (0x000288d7) cale_week_day_heading_pane

0x2e91,	// (0x000288eb) cale_week_scroll_pane_g1

0x2ea2,	// (0x000288fc) cale_week_scroll_pane_g2

0x2eb3,	// (0x0002890d) cale_week_scroll_pane_g3

0x2ec4,	// (0x0002891e) cale_week_scroll_pane_g4

0x2ed5,	// (0x0002892f) cale_week_scroll_pane_g5

0x2ee8,	// (0x00028942) cale_week_scroll_pane_g6

0x2efb,	// (0x00028955) cale_week_scroll_pane_g7

0x2f0e,	// (0x00028968) cale_week_scroll_pane_g8

0x2f21,	// (0x0002897b) cale_week_scroll_pane_g9

0x2f32,	// (0x0002898c) cale_week_scroll_pane_g10

0x2f43,	// (0x0002899d) cale_week_scroll_pane_g11

0x2f54,	// (0x000289ae) cale_week_scroll_pane_g12

0x2f65,	// (0x000289bf) cale_week_scroll_pane_g13

0x2f76,	// (0x000289d0) cale_week_scroll_pane_g14

0x2f87,	// (0x000289e1) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00034c2c) cale_week_scroll_pane_g

0x2f98,	// (0x000289f2) cale_week_time_pane

0x2fab,	// (0x00028a05) grid_cale_week_pane

0x2fd2,	// (0x00028a2c) scroll_pane_cp08

0x2fec,	// (0x00028a46) cell_cale_week_pane_ParamLimits

0x2fec,	// (0x00028a46) cell_cale_week_pane

0x302c,	// (0x00028a86) cale_week_day_heading_pane_t1

0x3059,	// (0x00028ab3) cale_week_day_heading_pane_t2

0x3086,	// (0x00028ae0) cale_week_day_heading_pane_t3

0x30b3,	// (0x00028b0d) cale_week_day_heading_pane_t4

0x30e0,	// (0x00028b3a) cale_week_day_heading_pane_t5

0x310d,	// (0x00028b67) cale_week_day_heading_pane_t6

0x313c,	// (0x00028b96) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00034c4b) cale_week_day_heading_pane_t

0x3169,	// (0x00028bc3) bg_cale_side_pane

0x0e55,	// (0x000268af) cale_week_time_pane_t1

0x0e6d,	// (0x000268c7) cale_week_time_pane_t2

0x0e85,	// (0x000268df) cale_week_time_pane_t3

0x0e9d,	// (0x000268f7) cale_week_time_pane_t4

0x0eb5,	// (0x0002690f) cale_week_time_pane_t5

0x0ecd,	// (0x00026927) cale_week_time_pane_t6

0x0ee5,	// (0x0002693f) cale_week_time_pane_t7

0x0efd,	// (0x00026957) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00034c5a) cale_week_time_pane_t

0x3177,	// (0x00028bd1) cell_cale_week_pane_g2

0x3190,	// (0x00028bea) cell_cale_week_pane_g3_ParamLimits

0x3190,	// (0x00028bea) cell_cale_week_pane_g3

0x31a8,	// (0x00028c02) grid_highlight_pane_cp07

0x31b0,	// (0x00028c0a) listscroll_gms_pane

0x31ba,	// (0x00028c14) grid_gms_pane

0x31c3,	// (0x00028c1d) listscroll_gms_pane_g1

0x31cb,	// (0x00028c25) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00034c6b) listscroll_gms_pane_g

0x31d3,	// (0x00028c2d) scroll_pane_cp010

0x31de,	// (0x00028c38) cell_gms_pane_ParamLimits

0x31de,	// (0x00028c38) cell_gms_pane

0x31f1,	// (0x00028c4b) cell_gms_pane_g1

0x31f9,	// (0x00028c53) cell_gms_pane_g2

0x3201,	// (0x00028c5b) cell_gms_pane_g3

0x320a,	// (0x00028c64) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00034c70) cell_gms_pane_g

0x3213,	// (0x00028c6d) grid_highlight_pane_cp09

0x6497,	// (0x0002bef1) phob_pre_status_pane_g1

0x649f,	// (0x0002bef9) phob_pre_status_pane_g2

0x64a7,	// (0x0002bf01) phob_pre_status_pane_g3

0x64af,	// (0x0002bf09) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0003505f) phob_pre_status_pane_g

0x64bf,	// (0x0002bf19) phob_pre_status_pane_t1

0x64cd,	// (0x0002bf27) phob_pre_status_pane_t2

0x64dd,	// (0x0002bf37) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0003506a) phob_pre_status_pane_t

0x26b7,	// (0x00028111) bg_list_pane_cp05

0x0f1d,	// (0x00026977) grid_vorec_pane

0xaf0f,	// (0x00030969) vorec_t1

0xaf1d,	// (0x00030977) vorec_t2

0xaf2b,	// (0x00030985) vorec_t3

0xaf39,	// (0x00030993) vorec_t4

0xaf47,	// (0x000309a1) vorec_t5

0xaf55,	// (0x000309af) vorec_t6

0x0006,

0xf21f,	// (0x00034c79) vorec_t

0xaf71,	// (0x000309cb) wait_bar_pane_cp01

0x321b,	// (0x00028c75) cell_vorec_pane_ParamLimits

0x321b,	// (0x00028c75) cell_vorec_pane

0x322e,	// (0x00028c88) cell_vorec_pane_g1

0x26b7,	// (0x00028111) grid_highlight_pane_cp05

0x3250,	// (0x00028caa) cams_zoom_pane

0x325f,	// (0x00028cb9) image_vga_pane

0x3279,	// (0x00028cd3) main_camera_pane_g1

0x328b,	// (0x00028ce5) main_camera_pane_g2

0x329b,	// (0x00028cf5) main_camera_pane_g3

0x32ab,	// (0x00028d05) main_camera_pane_g4

0x32bb,	// (0x00028d15) main_camera_pane_g5

0x32cb,	// (0x00028d25) main_camera_pane_g6

0x32dd,	// (0x00028d37) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00034c88) main_camera_pane_g

0x32f9,	// (0x00028d53) main_camera_pane_t1

0x330f,	// (0x00028d69) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00034c99) main_camera_pane_t

0x3349,	// (0x00028da3) cams_zoom_pane_cp_ParamLimits

0x3349,	// (0x00028da3) cams_zoom_pane_cp

0x3371,	// (0x00028dcb) image_cif_pane_ParamLimits

0x3371,	// (0x00028dcb) image_cif_pane

0x33ac,	// (0x00028e06) image_subqcif_pane

0x33b4,	// (0x00028e0e) main_video_pane_g1_ParamLimits

0x33b4,	// (0x00028e0e) main_video_pane_g1

0x33d8,	// (0x00028e32) main_video_pane_g2_ParamLimits

0x33d8,	// (0x00028e32) main_video_pane_g2

0x340c,	// (0x00028e66) main_video_pane_g3_ParamLimits

0x340c,	// (0x00028e66) main_video_pane_g3

0x343a,	// (0x00028e94) main_video_pane_g4_ParamLimits

0x343a,	// (0x00028e94) main_video_pane_g4

0x3468,	// (0x00028ec2) main_video_pane_g5_ParamLimits

0x3468,	// (0x00028ec2) main_video_pane_g5

0x3484,	// (0x00028ede) main_video_pane_g6_ParamLimits

0x3484,	// (0x00028ede) main_video_pane_g6

0x0006,

0xf244,	// (0x00034c9e) main_video_pane_g_ParamLimits

0xf244,	// (0x00034c9e) main_video_pane_g

0x34af,	// (0x00028f09) main_video_pane_t1_ParamLimits

0x34af,	// (0x00028f09) main_video_pane_t1

0x34f8,	// (0x00028f52) cams_zoom_pane_g1

0x3501,	// (0x00028f5b) cams_zoom_pane_g2

0x350a,	// (0x00028f64) cams_zoom_pane_g3

0x3513,	// (0x00028f6d) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00034cad) cams_zoom_pane_g

0x3530,	// (0x00028f8a) grid_cams_pane

0x354a,	// (0x00028fa4) linegrid_cams_pane

0x355e,	// (0x00028fb8) cell_cams_pane_ParamLimits

0x355e,	// (0x00028fb8) cell_cams_pane

0x357e,	// (0x00028fd8) cams_burst_image_pane

0x3586,	// (0x00028fe0) cell_cams_pane_g1

0x26b7,	// (0x00028111) grid_highlight_pane_cp03

0x2c90,	// (0x000286ea) mp_bg_pane_g1

0x26b7,	// (0x00028111) bg_list_pane_cp03

0xbca5,	// (0x000316ff) bg_mp_pane

0xbcad,	// (0x00031707) grid_mp_pane

0xbcb5,	// (0x0003170f) media_player_g1

0xbcbd,	// (0x00031717) media_player_t1

0xbccb,	// (0x00031725) media_player_t2

0xbcd9,	// (0x00031733) media_player_t3

0xbce7,	// (0x00031741) media_player_t4

0xbcf5,	// (0x0003174f) media_player_t5

0xbd03,	// (0x0003175d) media_player_t6

0xbd11,	// (0x0003176b) media_player_t7

0x0006,

0xf5ef,	// (0x00035049) media_player_t

0xbd1f,	// (0x00031779) wait_bar_pane_cp02

0xf5d4,	// (0x0003502e) main_usb_pane_t

0x648e,	// (0x0002bee8) cell_mp_pane

0x2c90,	// (0x000286ea) cell_mp_pane_g1

0x26b7,	// (0x00028111) grid_highlight_pane_cp06

0x3680,	// (0x000290da) grid_skin_colour_pane

0x3688,	// (0x000290e2) list_highlight_pane_cp03

0x3690,	// (0x000290ea) skin_g1

0x3698,	// (0x000290f2) skin_t1

0x36a7,	// (0x00029101) skin_t2

0x0001,

0xf288,	// (0x00034ce2) skin_t

0x36b5,	// (0x0002910f) cell_skin_colour_pane_ParamLimits

0x36b5,	// (0x0002910f) cell_skin_colour_pane

0x36d5,	// (0x0002912f) cell_skin_colour_pane_g1

0x373e,	// (0x00029198) call_video_g1_ParamLimits

0x373e,	// (0x00029198) call_video_g1

0x375a,	// (0x000291b4) call_video_g2_ParamLimits

0x375a,	// (0x000291b4) call_video_g2

0x0001,

0xf28d,	// (0x00034ce7) call_video_g_ParamLimits

0xf28d,	// (0x00034ce7) call_video_g

0x37ac,	// (0x00029206) call_video_uplink_pane_cp1_ParamLimits

0x37ac,	// (0x00029206) call_video_uplink_pane_cp1

0x3811,	// (0x0002926b) call_video_uplink_pane_cp2

0x3853,	// (0x000292ad) video_down_crop_pane_ParamLimits

0x3853,	// (0x000292ad) video_down_crop_pane

0x394a,	// (0x000293a4) video_down_pane_ParamLimits

0x394a,	// (0x000293a4) video_down_pane

0x3a41,	// (0x0002949b) video_down_subqcif_pane_ParamLimits

0x3a41,	// (0x0002949b) video_down_subqcif_pane

0x3a59,	// (0x000294b3) video_down_subqcif_pane_cp_ParamLimits

0x3a59,	// (0x000294b3) video_down_subqcif_pane_cp

0x3a94,	// (0x000294ee) im_reading_pane_ParamLimits

0x3a94,	// (0x000294ee) im_reading_pane

0x3aa6,	// (0x00029500) im_writing_pane_ParamLimits

0x3aa6,	// (0x00029500) im_writing_pane

0x3ac4,	// (0x0002951e) im_reading_pane_t1

0x3afd,	// (0x00029557) list_im_pane

0x3b0e,	// (0x00029568) scroll_pane_cp07

0x3b27,	// (0x00029581) im_writing_pane_t1_ParamLimits

0x3b27,	// (0x00029581) im_writing_pane_t1

0x3b3c,	// (0x00029596) im_writing_pane_t2_ParamLimits

0x3b3c,	// (0x00029596) im_writing_pane_t2

0x0001,

0xf297,	// (0x00034cf1) im_writing_pane_t_ParamLimits

0xf297,	// (0x00034cf1) im_writing_pane_t

0x26b7,	// (0x00028111) input_focus_pane_cp04

0x26b7,	// (0x00028111) input_focus_pane_cp05

0x3b59,	// (0x000295b3) list_im_single_pane_ParamLimits

0x3b59,	// (0x000295b3) list_im_single_pane

0x3b6d,	// (0x000295c7) list_single_im_pane_t1

0x644e,	// (0x0002bea8) blid_accuracy_pane

0x6456,	// (0x0002beb0) blid_compass_pane

0x6460,	// (0x0002beba) main_location_t1

0x6470,	// (0x0002beca) main_location_t2

0x6480,	// (0x0002beda) main_location_t3

0x0002,

0xf5fe,	// (0x00035058) main_location_t

0x26b7,	// (0x00028111) aid_levels_location

0x2c90,	// (0x000286ea) blid_accuracy_pane_g1

0x2c90,	// (0x000286ea) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00034d53) blid_accuracy_pane_g

0x3ba7,	// (0x00029601) wml_content_pane

0x3be5,	// (0x0002963f) wml_button_pane_ParamLimits

0x3be5,	// (0x0002963f) wml_button_pane

0x3bf9,	// (0x00029653) wml_list_single_large_pane_ParamLimits

0x3bf9,	// (0x00029653) wml_list_single_large_pane

0x3c0e,	// (0x00029668) wml_list_single_medium_pane_ParamLimits

0x3c0e,	// (0x00029668) wml_list_single_medium_pane

0x3c24,	// (0x0002967e) wml_list_single_small_pane_ParamLimits

0x3c24,	// (0x0002967e) wml_list_single_small_pane

0x3c3c,	// (0x00029696) wml_selection_box_pane_ParamLimits

0x3c3c,	// (0x00029696) wml_selection_box_pane

0x3c4f,	// (0x000296a9) wml_list_single_pane_t1

0x3c5e,	// (0x000296b8) wml_list_single_medium_pane_t1

0x3c6d,	// (0x000296c7) wml_list_single_large_pane_t1

0x3c7c,	// (0x000296d6) input_focus_pane_cp02_ParamLimits

0x3c7c,	// (0x000296d6) input_focus_pane_cp02

0x3c8f,	// (0x000296e9) wml_selection_box_pane_g1

0x3c98,	// (0x000296f2) wml_selection_box_pane_t1_ParamLimits

0x3c98,	// (0x000296f2) wml_selection_box_pane_t1

0x2912,	// (0x0002836c) bg_wml_button_pane_ParamLimits

0x2912,	// (0x0002836c) bg_wml_button_pane

0x3cb0,	// (0x0002970a) wml_button_pane_g1

0x3cb8,	// (0x00029712) wml_button_pane_t1

0x3cb0,	// (0x0002970a) wml_button_bg_pane_g1

0x3cc8,	// (0x00029722) wml_button_bg_pane_g2

0x3cd0,	// (0x0002972a) wml_button_bg_pane_g3

0x3cd8,	// (0x00029732) wml_button_bg_pane_g4

0x3ce0,	// (0x0002973a) wml_button_bg_pane_g5

0x3ce8,	// (0x00029742) wml_button_bg_pane_g6

0x3cf0,	// (0x0002974a) wml_button_bg_pane_g7

0x3cf8,	// (0x00029752) wml_button_bg_pane_g8

0x3d00,	// (0x0002975a) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00034cf6) wml_button_bg_pane_g

0x3d08,	// (0x00029762) bg_list_pane_cp02

0x3d10,	// (0x0002976a) mce_header_pane_ParamLimits

0x3d10,	// (0x0002976a) mce_header_pane

0x3d26,	// (0x00029780) mce_icon_pane

0x3d26,	// (0x00029780) mce_image_pane

0x3d2f,	// (0x00029789) mce_text_pane_ParamLimits

0x3d2f,	// (0x00029789) mce_text_pane

0x3d42,	// (0x0002979c) scroll_pane_cp03

0x3bdd,	// (0x00029637) scroll_pane_cp04

0x3d4c,	// (0x000297a6) scroll_pane_cp05_ParamLimits

0x3d4c,	// (0x000297a6) scroll_pane_cp05

0x3d58,	// (0x000297b2) mce_header_field_pane_ParamLimits

0x3d58,	// (0x000297b2) mce_header_field_pane

0x3d6f,	// (0x000297c9) mce_header_field_pane_2_ParamLimits

0x3d6f,	// (0x000297c9) mce_header_field_pane_2

0x3d85,	// (0x000297df) mce_header_field_pane_3

0x3d8d,	// (0x000297e7) list_single_mce_message_pane_ParamLimits

0x3d8d,	// (0x000297e7) list_single_mce_message_pane

0x3da2,	// (0x000297fc) list_single_mce_smart_pane_ParamLimits

0x3da2,	// (0x000297fc) list_single_mce_smart_pane

0x3dc2,	// (0x0002981c) input_focus_pane_cp03

0x3dcb,	// (0x00029825) list_header_data_pane

0x3dd3,	// (0x0002982d) mce_header_field_pane_t1

0x3de3,	// (0x0002983d) list_single_mce_header_pane_ParamLimits

0x3de3,	// (0x0002983d) list_single_mce_header_pane

0x3df7,	// (0x00029851) list_single_mce_header_pane_t1

0x3e06,	// (0x00029860) list_single_mce_message_pane_g1

0x3e0e,	// (0x00029868) list_single_mce_message_pane_t1

0x3e3a,	// (0x00029894) bg_cale_heading_pane_cp01_ParamLimits

0x3e3a,	// (0x00029894) bg_cale_heading_pane_cp01

0x3e5d,	// (0x000298b7) bg_cale_pane_cp02_ParamLimits

0x3e5d,	// (0x000298b7) bg_cale_pane_cp02

0x3e80,	// (0x000298da) cale_month_corner_pane

0x3e96,	// (0x000298f0) cale_month_day_heading_pane_ParamLimits

0x3e96,	// (0x000298f0) cale_month_day_heading_pane

0x3ec9,	// (0x00029923) cale_month_pane_g1_ParamLimits

0x3ec9,	// (0x00029923) cale_month_pane_g1

0x3ee5,	// (0x0002993f) cale_month_pane_g2_ParamLimits

0x3ee5,	// (0x0002993f) cale_month_pane_g2

0x3f00,	// (0x0002995a) cale_month_pane_g3_ParamLimits

0x3f00,	// (0x0002995a) cale_month_pane_g3

0x3f2c,	// (0x00029986) cale_month_pane_g4_ParamLimits

0x3f2c,	// (0x00029986) cale_month_pane_g4

0x3f58,	// (0x000299b2) cale_month_pane_g5_ParamLimits

0x3f58,	// (0x000299b2) cale_month_pane_g5

0x3f8c,	// (0x000299e6) cale_month_pane_g6_ParamLimits

0x3f8c,	// (0x000299e6) cale_month_pane_g6

0x3fc8,	// (0x00029a22) cale_month_pane_g7_ParamLimits

0x3fc8,	// (0x00029a22) cale_month_pane_g7

0x4004,	// (0x00029a5e) cale_month_pane_g8_ParamLimits

0x4004,	// (0x00029a5e) cale_month_pane_g8

0x4040,	// (0x00029a9a) cale_month_pane_g9_ParamLimits

0x4040,	// (0x00029a9a) cale_month_pane_g9

0x407a,	// (0x00029ad4) cale_month_pane_g10_ParamLimits

0x407a,	// (0x00029ad4) cale_month_pane_g10

0x40b4,	// (0x00029b0e) cale_month_pane_g11_ParamLimits

0x40b4,	// (0x00029b0e) cale_month_pane_g11

0x40ee,	// (0x00029b48) cale_month_pane_g12_ParamLimits

0x40ee,	// (0x00029b48) cale_month_pane_g12

0x4128,	// (0x00029b82) cale_month_pane_g13_ParamLimits

0x4128,	// (0x00029b82) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00034d09) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00034d09) cale_month_pane_g

0x4174,	// (0x00029bce) cale_month_week_pane

0x4187,	// (0x00029be1) grid_cale_month_pane_ParamLimits

0x4187,	// (0x00029be1) grid_cale_month_pane

0x41b5,	// (0x00029c0f) cale_month_day_heading_pane_t1

0x4213,	// (0x00029c6d) cale_month_day_heading_pane_t2

0x4278,	// (0x00029cd2) cale_month_day_heading_pane_t3

0x42dd,	// (0x00029d37) cale_month_day_heading_pane_t4

0x4342,	// (0x00029d9c) cale_month_day_heading_pane_t5

0x43b7,	// (0x00029e11) cale_month_day_heading_pane_t6

0x442c,	// (0x00029e86) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00034d24) cale_month_day_heading_pane_t

0x3169,	// (0x00028bc3) bg_cale_side_pane_cp01

0x44a1,	// (0x00029efb) cale_month_week_pane_t1

0x44b8,	// (0x00029f12) cale_month_week_pane_t2

0x44cf,	// (0x00029f29) cale_month_week_pane_t3

0x44e6,	// (0x00029f40) cale_month_week_pane_t4

0x44fd,	// (0x00029f57) cale_month_week_pane_t5

0x4514,	// (0x00029f6e) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00034d33) cale_month_week_pane_t

0x452b,	// (0x00029f85) cell_cale_month_pane_ParamLimits

0x452b,	// (0x00029f85) cell_cale_month_pane

0xaf79,	// (0x000309d3) cell_cale_month_pane_g1

0x0f25,	// (0x0002697f) cell_cale_month_pane_t1_ParamLimits

0x0f25,	// (0x0002697f) cell_cale_month_pane_t1

0x31a8,	// (0x00028c02) grid_highlight_pane_cp08

0x2c90,	// (0x000286ea) main_smil_g1

0x462b,	// (0x0002a085) smil_status_pane

0x4634,	// (0x0002a08e) smil_text_pane

0xbbc5,	// (0x0003161f) bg_popup_call3_rect_pane_g8

0xbbcd,	// (0x00031627) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00034fec) bg_popup_call3_rect_pane_g

0xbe47,	// (0x000318a1) smil_status_volume_pane_g1

0x4648,	// (0x0002a0a2) smil_status_pane_t1

0xbe7a,	// (0x000318d4) volume_smil_pane

0x465f,	// (0x0002a0b9) list_smil_text_pane

0x4669,	// (0x0002a0c3) scroll_pane_cp011

0x4674,	// (0x0002a0ce) smil_text_list_pane_t1_ParamLimits

0x4674,	// (0x0002a0ce) smil_text_list_pane_t1

0xaf85,	// (0x000309df) aid_volume_smil_ParamLimits

0xaf85,	// (0x000309df) aid_volume_smil

0x2c90,	// (0x000286ea) smil_volume_pane_g1

0x2c90,	// (0x000286ea) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00034d53) smil_volume_pane_g

0x2be4,	// (0x0002863e) listscroll_cale_day_pane

0x46ba,	// (0x0002a114) bg_cale_pane

0x46d2,	// (0x0002a12c) list_cale_pane

0x46e3,	// (0x0002a13d) scroll_pane_cp09

0x46f4,	// (0x0002a14e) cale_bg_pane_g1

0x46fc,	// (0x0002a156) cale_bg_pane_g2

0x4704,	// (0x0002a15e) cale_bg_pane_g3

0x470c,	// (0x0002a166) cale_bg_pane_g4

0x4714,	// (0x0002a16e) cale_bg_pane_g5

0x471c,	// (0x0002a176) cale_bg_pane_g6

0x4724,	// (0x0002a17e) cale_bg_pane_g7

0x472c,	// (0x0002a186) cale_bg_pane_g8

0x4734,	// (0x0002a18e) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00034d58) cale_bg_pane_g

0x321b,	// (0x00028c75) list_cale_time_pane_ParamLimits

0x321b,	// (0x00028c75) list_cale_time_pane

0x473c,	// (0x0002a196) list_cale_time_pane_g1_ParamLimits

0x473c,	// (0x0002a196) list_cale_time_pane_g1

0x4748,	// (0x0002a1a2) list_cale_time_pane_g2_ParamLimits

0x4748,	// (0x0002a1a2) list_cale_time_pane_g2

0x4755,	// (0x0002a1af) list_cale_time_pane_g3_ParamLimits

0x4755,	// (0x0002a1af) list_cale_time_pane_g3

0x4763,	// (0x0002a1bd) list_cale_time_pane_g4_ParamLimits

0x4763,	// (0x0002a1bd) list_cale_time_pane_g4

0x4771,	// (0x0002a1cb) list_cale_time_pane_g5_ParamLimits

0x4771,	// (0x0002a1cb) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00034d6b) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00034d6b) list_cale_time_pane_g

0x478c,	// (0x0002a1e6) list_cale_time_pane_t1_ParamLimits

0x478c,	// (0x0002a1e6) list_cale_time_pane_t1

0x47b4,	// (0x0002a20e) list_cale_time_pane_t2_ParamLimits

0x47b4,	// (0x0002a20e) list_cale_time_pane_t2

0x4f59,	// (0x0002a9b3) aid_blid_cardinal_pane

0x4fa3,	// (0x0002a9fd) compass_pane_t4

0x47dc,	// (0x0002a236) list_cale_time_pane_t4_ParamLimits

0x47dc,	// (0x0002a236) list_cale_time_pane_t4

0x4fb1,	// (0x0002aa0b) compass_pane_t5

0x4fbf,	// (0x0002aa19) compass_pane_t6

0x4fcd,	// (0x0002aa27) compass_pane_t7

0x504d,	// (0x0002aaa7) navi_pane_cc_t1

0x5266,	// (0x0002acc0) aid_phob_thumbnail_center_pane

0x5935,	// (0x0002b38f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00034d78) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00034d78) list_cale_time_pane_t

0x22ea,	// (0x00027d44) bg_popup_window_pane_cp02_ParamLimits

0x22ea,	// (0x00027d44) bg_popup_window_pane_cp02

0x4804,	// (0x0002a25e) heading_pane_cp01_ParamLimits

0x4804,	// (0x0002a25e) heading_pane_cp01

0x4810,	// (0x0002a26a) loc_req_pane_ParamLimits

0x4810,	// (0x0002a26a) loc_req_pane

0x4820,	// (0x0002a27a) loc_type_pane_ParamLimits

0x4820,	// (0x0002a27a) loc_type_pane

0x4832,	// (0x0002a28c) loc_type_pane_t1_ParamLimits

0x4832,	// (0x0002a28c) loc_type_pane_t1

0x4844,	// (0x0002a29e) loc_type_pane_t2_ParamLimits

0x4844,	// (0x0002a29e) loc_type_pane_t2

0x4856,	// (0x0002a2b0) loc_type_pane_t3_ParamLimits

0x4856,	// (0x0002a2b0) loc_type_pane_t3

0x0002,

0xf325,	// (0x00034d7f) loc_type_pane_t_ParamLimits

0xf325,	// (0x00034d7f) loc_type_pane_t

0x4868,	// (0x0002a2c2) list_loc_req_pane

0x4872,	// (0x0002a2cc) scroll_pane_cp012

0x487d,	// (0x0002a2d7) list_single_loc_request_popup_menu_pane_ParamLimits

0x487d,	// (0x0002a2d7) list_single_loc_request_popup_menu_pane

0x488a,	// (0x0002a2e4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x488a,	// (0x0002a2e4) list_single_loc_request_popup_menu_pane_g1

0x4896,	// (0x0002a2f0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4896,	// (0x0002a2f0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00034d86) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00034d86) list_single_loc_request_popup_menu_pane_g

0x48a2,	// (0x0002a2fc) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x48a2,	// (0x0002a2fc) list_single_loc_request_popup_menu_pane_t1

0x2912,	// (0x0002836c) bg_popup_window_pane_cp03_ParamLimits

0x2912,	// (0x0002836c) bg_popup_window_pane_cp03

0x48b8,	// (0x0002a312) heading_loc_req_pane_ParamLimits

0x48b8,	// (0x0002a312) heading_loc_req_pane

0x48c4,	// (0x0002a31e) popup_dyc_status_message_window_g1_ParamLimits

0x48c4,	// (0x0002a31e) popup_dyc_status_message_window_g1

0x48d8,	// (0x0002a332) popup_dyc_status_message_window_t1_ParamLimits

0x48d8,	// (0x0002a332) popup_dyc_status_message_window_t1

0x48ed,	// (0x0002a347) popup_dyc_status_message_window_t2_ParamLimits

0x48ed,	// (0x0002a347) popup_dyc_status_message_window_t2

0x4902,	// (0x0002a35c) popup_dyc_status_message_window_t3_ParamLimits

0x4902,	// (0x0002a35c) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00034d8b) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00034d8b) popup_dyc_status_message_window_t

0x26b7,	// (0x00028111) bg_heading_pane_cp01

0x491e,	// (0x0002a378) heading_loc_req_pane_g1

0x4926,	// (0x0002a380) heading_loc_req_pane_g2

0x492e,	// (0x0002a388) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00034d92) heading_loc_req_pane_g

0x4936,	// (0x0002a390) heading_loc_req_pane_t1

0x4a2c,	// (0x0002a486) bg_popup_sub_pane_cp01_ParamLimits

0x4a2c,	// (0x0002a486) bg_popup_sub_pane_cp01

0x4a3a,	// (0x0002a494) popup_cale_events_window_g1_ParamLimits

0x4a3a,	// (0x0002a494) popup_cale_events_window_g1

0x4a5a,	// (0x0002a4b4) popup_cale_events_window_g2_ParamLimits

0x4a5a,	// (0x0002a4b4) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00034dc6) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00034dc6) popup_cale_events_window_g

0x4a7a,	// (0x0002a4d4) popup_cale_events_window_t1_ParamLimits

0x4a7a,	// (0x0002a4d4) popup_cale_events_window_t1

0x4a8c,	// (0x0002a4e6) popup_cale_events_window_t2_ParamLimits

0x4a8c,	// (0x0002a4e6) popup_cale_events_window_t2

0x4aca,	// (0x0002a524) popup_cale_events_window_t3_ParamLimits

0x4aca,	// (0x0002a524) popup_cale_events_window_t3

0x4b04,	// (0x0002a55e) popup_cale_events_window_t4_ParamLimits

0x4b04,	// (0x0002a55e) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00034dcb) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00034dcb) popup_cale_events_window_t

0x4b3a,	// (0x0002a594) call_type_pane

0x4b4a,	// (0x0002a5a4) popup_call_status_window_g1

0x4b5e,	// (0x0002a5b8) popup_call_status_window_g2

0x4b72,	// (0x0002a5cc) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00034dd4) popup_call_status_window_g

0x4b81,	// (0x0002a5db) call_type_pane_g1

0x4b8a,	// (0x0002a5e4) call_type_pane_g2

0x0001,

0xf381,	// (0x00034ddb) call_type_pane_g

0x26b7,	// (0x00028111) bg_popup_sub_pane_cp02

0x4b93,	// (0x0002a5ed) listscroll_popup_wml_pane

0x4b9b,	// (0x0002a5f5) list_wml_pane

0x4ba5,	// (0x0002a5ff) scroll_pane_cp013

0x4bb0,	// (0x0002a60a) list_single_graphic_popup_wml_pane_ParamLimits

0x4bb0,	// (0x0002a60a) list_single_graphic_popup_wml_pane

0x2c90,	// (0x000286ea) list_single_graphic_popup_wml_pane_g1

0x4bc4,	// (0x0002a61e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00034de0) list_single_graphic_popup_wml_pane_g

0x4bcc,	// (0x0002a626) list_single_graphic_popup_wml_pane_t1

0x4be2,	// (0x0002a63c) aid_call_pane

0x290a,	// (0x00028364) popup_clock_analogue_window_g1

0x290a,	// (0x00028364) popup_clock_analogue_window_g2

0xafa7,	// (0x00030a01) popup_clock_analogue_window_g3

0xafa7,	// (0x00030a01) popup_clock_analogue_window_g4

0x2c90,	// (0x000286ea) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00034de5) popup_clock_analogue_window_g

0xafaf,	// (0x00030a09) popup_clock_analogue_window_t1

0xafbd,	// (0x00030a17) clock_digital_number_pane_ParamLimits

0xafbd,	// (0x00030a17) clock_digital_number_pane

0xafc9,	// (0x00030a23) clock_digital_number_pane_cp02_ParamLimits

0xafc9,	// (0x00030a23) clock_digital_number_pane_cp02

0xafd5,	// (0x00030a2f) clock_digital_number_pane_cp03_ParamLimits

0xafd5,	// (0x00030a2f) clock_digital_number_pane_cp03

0xafe1,	// (0x00030a3b) clock_digital_number_pane_cp04_ParamLimits

0xafe1,	// (0x00030a3b) clock_digital_number_pane_cp04

0xaff1,	// (0x00030a4b) clock_digital_separator_pane_ParamLimits

0xaff1,	// (0x00030a4b) clock_digital_separator_pane

0xaffd,	// (0x00030a57) popup_clock_digital_window_t1

0x2c90,	// (0x000286ea) clock_digital_number_pane_g1

0x2c90,	// (0x000286ea) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00034d53) clock_digital_number_pane_g

0x2c90,	// (0x000286ea) clock_digital_separator_pane_g1

0x2c90,	// (0x000286ea) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00034d53) clock_digital_separator_pane_g

0x26b7,	// (0x00028111) bg_popup_window_pane_cp04

0x4bea,	// (0x0002a644) heading_pane_cp03

0x4bf2,	// (0x0002a64c) listscroll_popup_gms_pane

0x4bfa,	// (0x0002a654) grid_large_graphic_popup_pane

0x4c04,	// (0x0002a65e) listscroll_popup_gms_pane_g1

0x4c0c,	// (0x0002a666) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00034df0) listscroll_popup_gms_pane_g

0x3bdd,	// (0x00029637) scroll_pane_cp014

0x4c14,	// (0x0002a66e) cell_large_graphic_popup_pane_ParamLimits

0x4c14,	// (0x0002a66e) cell_large_graphic_popup_pane

0x4c2c,	// (0x0002a686) cell_large_graphic_popup_pane_g1_ParamLimits

0x4c2c,	// (0x0002a686) cell_large_graphic_popup_pane_g1

0x4c38,	// (0x0002a692) cell_large_graphic_popup_pane_g2_ParamLimits

0x4c38,	// (0x0002a692) cell_large_graphic_popup_pane_g2

0x4c44,	// (0x0002a69e) cell_large_graphic_popup_pane_g3_ParamLimits

0x4c44,	// (0x0002a69e) cell_large_graphic_popup_pane_g3

0x4c51,	// (0x0002a6ab) cell_large_graphic_popup_pane_g4_ParamLimits

0x4c51,	// (0x0002a6ab) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00034df5) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00034df5) cell_large_graphic_popup_pane_g

0x4c61,	// (0x0002a6bb) grid_highlight_pane_cp010

0x2c90,	// (0x000286ea) bg_popup_call_pane_g1

0x4c6b,	// (0x0002a6c5) list_single_graphic_popup_conf_pane_ParamLimits

0x4c6b,	// (0x0002a6c5) list_single_graphic_popup_conf_pane

0x4c7e,	// (0x0002a6d8) list_highlight_pane_cp01

0x4c87,	// (0x0002a6e1) list_single_graphic_popup_conf_pane_g1

0x4c8f,	// (0x0002a6e9) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00034dfe) list_single_graphic_popup_conf_pane_g

0x4c97,	// (0x0002a6f1) list_single_graphic_popup_conf_pane_t1

0x4ca5,	// (0x0002a6ff) linegrid_cams_pane_g1

0x4cae,	// (0x0002a708) linegrid_cams_pane_g2

0x3201,	// (0x00028c5b) linegrid_cams_pane_g3

0x4cb7,	// (0x0002a711) linegrid_cams_pane_g4

0x4cc0,	// (0x0002a71a) linegrid_cams_pane_g5

0x4cc9,	// (0x0002a723) linegrid_cams_pane_g6

0x320a,	// (0x00028c64) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00034e03) linegrid_cams_pane_g

0x4cd4,	// (0x0002a72e) popup_clock_analogue_window

0x4cd4,	// (0x0002a72e) popup_clock_digital_window

0x26b7,	// (0x00028111) popup_phob_thumbnail_window

0x2c90,	// (0x000286ea) call_video_uplink_pane_g1

0x4cdd,	// (0x0002a737) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00034e12) call_video_uplink_pane_g

0x4ce5,	// (0x0002a73f) video_uplink_pane

0x4ced,	// (0x0002a747) mce_image_pane_g1

0x4cf7,	// (0x0002a751) mce_image_pane_g2

0x4d01,	// (0x0002a75b) mce_image_pane_g3

0x4d09,	// (0x0002a763) mce_image_pane_g4

0x4d11,	// (0x0002a76b) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00034e17) mce_image_pane_g

0x4d19,	// (0x0002a773) control_top_pane_stacon_cp01_ParamLimits

0x4d19,	// (0x0002a773) control_top_pane_stacon_cp01

0x4d2d,	// (0x0002a787) uni_indicator_pane_stacon_cp01_ParamLimits

0x4d2d,	// (0x0002a787) uni_indicator_pane_stacon_cp01

0x4d3e,	// (0x0002a798) bg_popup_sub_pane_cp03

0x4d48,	// (0x0002a7a2) chi_dic_find_pane

0x4d50,	// (0x0002a7aa) listscroll_chi_dic_pane

0x4d59,	// (0x0002a7b3) main_pane_chidic_g1

0x4d6c,	// (0x0002a7c6) chi_dic_find_pane_t1

0x4d7a,	// (0x0002a7d4) find_chidic_pane

0x4d83,	// (0x0002a7dd) chi_dic_list_pane_ParamLimits

0x4d83,	// (0x0002a7dd) chi_dic_list_pane

0x4d94,	// (0x0002a7ee) scroll_pane_cp020

0x4d9c,	// (0x0002a7f6) find_chidic_pane_t1

0x26b7,	// (0x00028111) input_focus_pane_cp06

0x4dab,	// (0x0002a805) list_chi_dic_pane_ParamLimits

0x4dab,	// (0x0002a805) list_chi_dic_pane

0x4dbd,	// (0x0002a817) list_chi_dic_pane_t1_ParamLimits

0x4dbd,	// (0x0002a817) list_chi_dic_pane_t1

0x26b7,	// (0x00028111) list_highlight_pane_cp020

0x4dd0,	// (0x0002a82a) bg_cale_heading_pane_g1

0x4dd8,	// (0x0002a832) bg_cale_heading_pane_g2

0x4de0,	// (0x0002a83a) bg_cale_heading_pane_g3

0x4de8,	// (0x0002a842) bg_cale_heading_pane_g4

0x4df2,	// (0x0002a84c) bg_cale_heading_pane_g5

0x4dfc,	// (0x0002a856) bg_cale_heading_pane_g6

0x4e04,	// (0x0002a85e) bg_cale_heading_pane_g7

0x4e0c,	// (0x0002a866) bg_cale_heading_pane_g8

0x4e16,	// (0x0002a870) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00034e22) bg_cale_heading_pane_g

0x4dd0,	// (0x0002a82a) bg_cale_side_pane_g1

0x4e20,	// (0x0002a87a) bg_cale_side_pane_g2

0x4e28,	// (0x0002a882) bg_cale_side_pane_g3

0x4e30,	// (0x0002a88a) bg_cale_side_pane_g4

0x4e38,	// (0x0002a892) bg_cale_side_pane_g5

0x4e40,	// (0x0002a89a) bg_cale_side_pane_g6

0x4e48,	// (0x0002a8a2) bg_cale_side_pane_g7

0x4e50,	// (0x0002a8aa) bg_cale_side_pane_g8

0x4e58,	// (0x0002a8b2) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00034e35) bg_cale_side_pane_g

0x4e60,	// (0x0002a8ba) popup_call_status_window_ParamLimits

0x4e60,	// (0x0002a8ba) popup_call_status_window

0x4ea9,	// (0x0002a903) stacon_top_pane

0x4eb1,	// (0x0002a90b) status_pane_ParamLimits

0x4eb1,	// (0x0002a90b) status_pane

0x4ec6,	// (0x0002a920) status_small_pane

0x4ece,	// (0x0002a928) control_pane

0x26b7,	// (0x00028111) stacon_bottom_pane

0x4ed6,	// (0x0002a930) list_single_mce_smart_pane_t1_ParamLimits

0x4ed6,	// (0x0002a930) list_single_mce_smart_pane_t1

0x4ee9,	// (0x0002a943) list_single_mce_smart_pane_t2_ParamLimits

0x4ee9,	// (0x0002a943) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00034e48) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00034e48) list_single_mce_smart_pane_t

0x4f08,	// (0x0002a962) compass_pane

0x4f11,	// (0x0002a96b) main_location2_pane_t1

0x4f23,	// (0x0002a97d) main_location2_pane_t2

0x4f35,	// (0x0002a98f) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00034e4d) main_location2_pane_t

0x4f79,	// (0x0002a9d3) compass_pane_g1_ParamLimits

0x4f79,	// (0x0002a9d3) compass_pane_g1

0x4f85,	// (0x0002a9df) compass_pane_t1

0x4f94,	// (0x0002a9ee) compass_pane_t2

0x0005,

0xf3fc,	// (0x00034e56) compass_pane_t

0x4fdb,	// (0x0002aa35) text_secondary_cp61

0x5044,	// (0x0002aa9e) navi_pane_cams_g5

0x50be,	// (0x0002ab18) navi_pane_im_t1

0x50cc,	// (0x0002ab26) navi_pane_mp_g1_ParamLimits

0x50cc,	// (0x0002ab26) navi_pane_mp_g1

0x50e0,	// (0x0002ab3a) navi_pane_mp_g2_ParamLimits

0x50e0,	// (0x0002ab3a) navi_pane_mp_g2

0x50ec,	// (0x0002ab46) navi_pane_mp_g3_ParamLimits

0x50ec,	// (0x0002ab46) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00034e6a) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00034e6a) navi_pane_mp_g

0x50f8,	// (0x0002ab52) navi_pane_mp_t1

0x5106,	// (0x0002ab60) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00034e71) navi_pane_mp_t

0x51af,	// (0x0002ac09) navi_pane_vt_g1

0x50f8,	// (0x0002ab52) navi_pane_vt_t1

0x51b7,	// (0x0002ac11) navi_slider_pane

0x51bf,	// (0x0002ac19) zooming_pane

0x51c7,	// (0x0002ac21) navi_slider_pane_g1

0xb01a,	// (0x00030a74) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00034e78) navi_slider_pane_g

0x51eb,	// (0x0002ac45) aid_levels_zoom

0x51f3,	// (0x0002ac4d) zooming_pane_g1

0x51fb,	// (0x0002ac55) zooming_pane_g2

0x51fb,	// (0x0002ac55) zooming_pane_g3

0x0002,

0xf42d,	// (0x00034e87) zooming_pane_g

0x5203,	// (0x0002ac5d) level_10_zoom

0x520c,	// (0x0002ac66) level_11_zoom

0x5215,	// (0x0002ac6f) level_1_zoom

0x521e,	// (0x0002ac78) level_2_zoom

0x5227,	// (0x0002ac81) level_3_zoom

0x5230,	// (0x0002ac8a) level_4_zoom

0x5239,	// (0x0002ac93) level_5_zoom

0x5242,	// (0x0002ac9c) level_6_zoom

0x524b,	// (0x0002aca5) level_7_zoom

0x5254,	// (0x0002acae) level_8_zoom

0x525d,	// (0x0002acb7) level_9_zoom

0x526e,	// (0x0002acc8) popup_phob_thumbnail_window_g1

0x5276,	// (0x0002acd0) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00034e8e) popup_phob_thumbnail_window_g

0xbd27,	// (0x00031781) level_1_location

0xbd2f,	// (0x00031789) level_2_location

0xbd37,	// (0x00031791) level_3_location

0xbd3f,	// (0x00031799) level_4_location

0x51bf,	// (0x0002ac19) level_5_location

0x527e,	// (0x0002acd8) mce_icon_pane_g1

0x5286,	// (0x0002ace0) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00034e93) mce_icon_pane_g

0x528e,	// (0x0002ace8) main_mup_pane_g1_ParamLimits

0x528e,	// (0x0002ace8) main_mup_pane_g1

0x52a4,	// (0x0002acfe) main_mup_pane_g2_ParamLimits

0x52a4,	// (0x0002acfe) main_mup_pane_g2

0x52bc,	// (0x0002ad16) main_mup_pane_g3_ParamLimits

0x52bc,	// (0x0002ad16) main_mup_pane_g3

0x52d4,	// (0x0002ad2e) main_mup_pane_g4_ParamLimits

0x52d4,	// (0x0002ad2e) main_mup_pane_g4

0x52ec,	// (0x0002ad46) main_mup_pane_g5_ParamLimits

0x52ec,	// (0x0002ad46) main_mup_pane_g5

0x5308,	// (0x0002ad62) main_mup_pane_g6_ParamLimits

0x5308,	// (0x0002ad62) main_mup_pane_g6

0x5320,	// (0x0002ad7a) main_mup_pane_g7_ParamLimits

0x5320,	// (0x0002ad7a) main_mup_pane_g7

0x5338,	// (0x0002ad92) main_mup_pane_g8_ParamLimits

0x5338,	// (0x0002ad92) main_mup_pane_g8

0x5352,	// (0x0002adac) main_mup_pane_g9_ParamLimits

0x5352,	// (0x0002adac) main_mup_pane_g9

0x536c,	// (0x0002adc6) main_mup_pane_g10_ParamLimits

0x536c,	// (0x0002adc6) main_mup_pane_g10

0x5386,	// (0x0002ade0) main_mup_pane_g11_ParamLimits

0x5386,	// (0x0002ade0) main_mup_pane_g11

0x539a,	// (0x0002adf4) main_mup_pane_g12_ParamLimits

0x539a,	// (0x0002adf4) main_mup_pane_g12

0x53b0,	// (0x0002ae0a) main_mup_pane_g13_ParamLimits

0x53b0,	// (0x0002ae0a) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00034e98) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00034e98) main_mup_pane_g

0x53c4,	// (0x0002ae1e) main_mup_pane_t1_ParamLimits

0x53c4,	// (0x0002ae1e) main_mup_pane_t1

0x53de,	// (0x0002ae38) main_mup_pane_t2_ParamLimits

0x53de,	// (0x0002ae38) main_mup_pane_t2

0x53f6,	// (0x0002ae50) main_mup_pane_t3_ParamLimits

0x53f6,	// (0x0002ae50) main_mup_pane_t3

0x540e,	// (0x0002ae68) main_mup_pane_t4_ParamLimits

0x540e,	// (0x0002ae68) main_mup_pane_t4

0x542c,	// (0x0002ae86) main_mup_pane_t5_ParamLimits

0x542c,	// (0x0002ae86) main_mup_pane_t5

0x5441,	// (0x0002ae9b) main_mup_pane_t6_ParamLimits

0x5441,	// (0x0002ae9b) main_mup_pane_t6

0x0005,

0xf459,	// (0x00034eb3) main_mup_pane_t_ParamLimits

0xf459,	// (0x00034eb3) main_mup_pane_t

0x5453,	// (0x0002aead) mup_progress_pane_ParamLimits

0x5453,	// (0x0002aead) mup_progress_pane

0x545f,	// (0x0002aeb9) mup_visualizer_pane_ParamLimits

0x545f,	// (0x0002aeb9) mup_visualizer_pane

0x548f,	// (0x0002aee9) mup_volume_pane_ParamLimits

0x548f,	// (0x0002aee9) mup_volume_pane

0x54ad,	// (0x0002af07) mup_visualizer_pane_g1_ParamLimits

0x54ad,	// (0x0002af07) mup_visualizer_pane_g1

0x54ad,	// (0x0002af07) mup_visualizer_pane_g2_ParamLimits

0x54ad,	// (0x0002af07) mup_visualizer_pane_g2

0x4f79,	// (0x0002a9d3) mup_visualizer_pane_g3_ParamLimits

0x4f79,	// (0x0002a9d3) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00034ec0) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00034ec0) mup_visualizer_pane_g

0x2c90,	// (0x000286ea) mup_volume_pane_g1

0x54c3,	// (0x0002af1d) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00034ec7) mup_volume_pane_g

0x2c90,	// (0x000286ea) mup_progress_pane_g1

0x54cc,	// (0x0002af26) mup_progress_pane_g2

0x54d5,	// (0x0002af2f) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00034ecc) mup_progress_pane_g

0x26b7,	// (0x00028111) bg_popup_window_pane_cp05

0x54de,	// (0x0002af38) heading_pane_cp02_ParamLimits

0x54de,	// (0x0002af38) heading_pane_cp02

0x54f8,	// (0x0002af52) list_popup_blid_pane

0x5500,	// (0x0002af5a) list_blid_sat_info_pane_ParamLimits

0x5500,	// (0x0002af5a) list_blid_sat_info_pane

0x5513,	// (0x0002af6d) list_blid_sat_info_pane_g1

0x551b,	// (0x0002af75) list_blid_sat_info_pane_t1

0x5621,	// (0x0002b07b) mup_equalizer_pane_ParamLimits

0x5621,	// (0x0002b07b) mup_equalizer_pane

0x563a,	// (0x0002b094) mup_equalizer_pane_cp1_ParamLimits

0x563a,	// (0x0002b094) mup_equalizer_pane_cp1

0x5657,	// (0x0002b0b1) mup_equalizer_pane_cp2_ParamLimits

0x5657,	// (0x0002b0b1) mup_equalizer_pane_cp2

0x5674,	// (0x0002b0ce) mup_equalizer_pane_cp3_ParamLimits

0x5674,	// (0x0002b0ce) mup_equalizer_pane_cp3

0x5695,	// (0x0002b0ef) mup_equalizer_pane_cp4_ParamLimits

0x5695,	// (0x0002b0ef) mup_equalizer_pane_cp4

0x56b6,	// (0x0002b110) mup_equalizer_pane_cp5

0x56ca,	// (0x0002b124) mup_equalizer_pane_cp6

0x56de,	// (0x0002b138) mup_equalizer_pane_cp7

0xbc45,	// (0x0003169f) bg_popup_call_poc_act_pane_g9

0xbc4d,	// (0x000316a7) bg_popup_call_poc_act_pane_g10

0xbc55,	// (0x000316af) bg_popup_call_poc_act_pane_g11

0x000a,

0x2912,	// (0x0002836c) mup_scale_pane

0x2c90,	// (0x000286ea) mup_scale_pane_g1

0x56f2,	// (0x0002b14c) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00034ee8) mup_scale_pane_g

0x5728,	// (0x0002b182) msg_data_pane

0x5730,	// (0x0002b18a) scroll_pane_cp017

0x5738,	// (0x0002b192) bg_list_pane_cp04_ParamLimits

0x5738,	// (0x0002b192) bg_list_pane_cp04

0x5758,	// (0x0002b1b2) msg_data_pane_g1

0x5760,	// (0x0002b1ba) msg_data_pane_g2

0x576a,	// (0x0002b1c4) msg_data_pane_g3

0x5772,	// (0x0002b1cc) msg_data_pane_g4

0x577a,	// (0x0002b1d4) msg_data_pane_g5

0x5782,	// (0x0002b1dc) msg_data_pane_g6

0x578a,	// (0x0002b1e4) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00034ef7) msg_data_pane_g

0x5792,	// (0x0002b1ec) msg_text_pane_ParamLimits

0x5792,	// (0x0002b1ec) msg_text_pane

0x57b6,	// (0x0002b210) qrid_highlight_pane_cp011_ParamLimits

0x57b6,	// (0x0002b210) qrid_highlight_pane_cp011

0x26b7,	// (0x00028111) msg_body_pane

0x26b7,	// (0x00028111) msg_header_pane

0x57d5,	// (0x0002b22f) input_focus_pane_cp07

0x57f8,	// (0x0002b252) msg_header_pane_t1_ParamLimits

0x57f8,	// (0x0002b252) msg_header_pane_t1

0x580c,	// (0x0002b266) msg_header_pane_t2_ParamLimits

0x580c,	// (0x0002b266) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00034f0b) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00034f0b) msg_header_pane_t

0x581e,	// (0x0002b278) msg_body_pane_g1

0x5826,	// (0x0002b280) msg_body_pane_t1_ParamLimits

0x5826,	// (0x0002b280) msg_body_pane_t1

0x5857,	// (0x0002b2b1) msg_body_pane_t2_ParamLimits

0x5857,	// (0x0002b2b1) msg_body_pane_t2

0x5869,	// (0x0002b2c3) msg_body_pane_t3_ParamLimits

0x5869,	// (0x0002b2c3) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00034f10) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00034f10) msg_body_pane_t

0x0f5d,	// (0x000269b7) main_viewer_pane_g1_ParamLimits

0x0f5d,	// (0x000269b7) main_viewer_pane_g1

0x0f6b,	// (0x000269c5) main_viewer_pane_g2_ParamLimits

0x0f6b,	// (0x000269c5) main_viewer_pane_g2

0x5899,	// (0x0002b2f3) main_viewer_pane_g3_ParamLimits

0x5899,	// (0x0002b2f3) main_viewer_pane_g3

0x58a8,	// (0x0002b302) main_viewer_pane_g4_ParamLimits

0x58a8,	// (0x0002b302) main_viewer_pane_g4

0xb044,	// (0x00030a9e) main_viewer_pane_g5_ParamLimits

0xb044,	// (0x00030a9e) main_viewer_pane_g5

0xb044,	// (0x00030a9e) main_viewer_pane_g7_ParamLimits

0xb044,	// (0x00030a9e) main_viewer_pane_g7

0x488a,	// (0x0002a2e4) main_viewer_pane_g8_ParamLimits

0x488a,	// (0x0002a2e4) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00034f20) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00034f20) main_viewer_pane_g

0x58b7,	// (0x0002b311) viewer_content_pane_ParamLimits

0x58b7,	// (0x0002b311) viewer_content_pane

0x58f2,	// (0x0002b34c) main_postcard_pane_g1_ParamLimits

0x58f2,	// (0x0002b34c) main_postcard_pane_g1

0x5908,	// (0x0002b362) main_postcard_pane_g2_ParamLimits

0x5908,	// (0x0002b362) main_postcard_pane_g2

0x591e,	// (0x0002b378) main_postcard_pane_g3_ParamLimits

0x591e,	// (0x0002b378) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00034f31) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00034f31) main_postcard_pane_g

0x5935,	// (0x0002b38f) main_postcard_pane_g4

0xbe5a,	// (0x000318b4) smil_status_volume_pane_g2

0x5978,	// (0x0002b3d2) postcard_pane_ParamLimits

0x5978,	// (0x0002b3d2) postcard_pane

0x59ba,	// (0x0002b414) postcard_pane_g1_ParamLimits

0x59ba,	// (0x0002b414) postcard_pane_g1

0x59c8,	// (0x0002b422) postcard_pane_g2_ParamLimits

0x59c8,	// (0x0002b422) postcard_pane_g2

0x59d4,	// (0x0002b42e) postcard_pane_g3_ParamLimits

0x59d4,	// (0x0002b42e) postcard_pane_g3

0x59e0,	// (0x0002b43a) postcard_pane_g4_ParamLimits

0x59e0,	// (0x0002b43a) postcard_pane_g4

0x59ee,	// (0x0002b448) postcard_pane_g5_ParamLimits

0x59ee,	// (0x0002b448) postcard_pane_g5

0x5a03,	// (0x0002b45d) postcard_pane_g6_ParamLimits

0x5a03,	// (0x0002b45d) postcard_pane_g6

0x59ba,	// (0x0002b414) postcard_pane_g7_ParamLimits

0x59ba,	// (0x0002b414) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00034f3e) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00034f3e) postcard_pane_g

0x5a17,	// (0x0002b471) main_mp2_pane_g1_ParamLimits

0x5a17,	// (0x0002b471) main_mp2_pane_g1

0x5a23,	// (0x0002b47d) main_mp2_pane_g2_ParamLimits

0x5a23,	// (0x0002b47d) main_mp2_pane_g2

0x5a2f,	// (0x0002b489) main_mp2_pane_g3_ParamLimits

0x5a2f,	// (0x0002b489) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00034f4d) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00034f4d) main_mp2_pane_g

0x5a3b,	// (0x0002b495) main_mp2_pane_t1_ParamLimits

0x5a3b,	// (0x0002b495) main_mp2_pane_t1

0x5a50,	// (0x0002b4aa) main_mp2_pane_t2_ParamLimits

0x5a50,	// (0x0002b4aa) main_mp2_pane_t2

0x5a62,	// (0x0002b4bc) main_mp2_pane_t3_ParamLimits

0x5a62,	// (0x0002b4bc) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00034f54) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00034f54) main_mp2_pane_t

0x5a74,	// (0x0002b4ce) pec_content_pane_ParamLimits

0x5a74,	// (0x0002b4ce) pec_content_pane

0x3bdd,	// (0x00029637) scroll_pane_cp015

0x5a86,	// (0x0002b4e0) pec_attribute_pane_ParamLimits

0x5a86,	// (0x0002b4e0) pec_attribute_pane

0x5a96,	// (0x0002b4f0) pec_content_pane_g1_ParamLimits

0x5a96,	// (0x0002b4f0) pec_content_pane_g1

0x5aa2,	// (0x0002b4fc) pec_content_pane_t1_ParamLimits

0x5aa2,	// (0x0002b4fc) pec_content_pane_t1

0x5ab4,	// (0x0002b50e) pec_content_pane_t2_ParamLimits

0x5ab4,	// (0x0002b50e) pec_content_pane_t2

0x0001,

0xf501,	// (0x00034f5b) pec_content_pane_t_ParamLimits

0xf501,	// (0x00034f5b) pec_content_pane_t

0x5ac6,	// (0x0002b520) list_single_graphic_pane_cp01_ParamLimits

0x5ac6,	// (0x0002b520) list_single_graphic_pane_cp01

0x2912,	// (0x0002836c) bg_popup_sub_pane_cp04

0x5adb,	// (0x0002b535) popup_mup_playback_window_g1

0x5ae7,	// (0x0002b541) popup_mup_playback_window_t1

0x5afc,	// (0x0002b556) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00034f60) popup_mup_playback_window_t

0x5b51,	// (0x0002b5ab) main_image_pane_g1_ParamLimits

0x5b51,	// (0x0002b5ab) main_image_pane_g1

0x5c2e,	// (0x0002b688) scroll_pane_cp018_ParamLimits

0x5c2e,	// (0x0002b688) scroll_pane_cp018

0x5c46,	// (0x0002b6a0) scroll_pane_cp016_ParamLimits

0x5c46,	// (0x0002b6a0) scroll_pane_cp016

0x5c7a,	// (0x0002b6d4) smil2_image_pane_ParamLimits

0x5c7a,	// (0x0002b6d4) smil2_image_pane

0x5caa,	// (0x0002b704) smil2_root_pane_ParamLimits

0x5caa,	// (0x0002b704) smil2_root_pane

0x5ce2,	// (0x0002b73c) smil2_text_pane_ParamLimits

0x5ce2,	// (0x0002b73c) smil2_text_pane

0x26b7,	// (0x00028111) bg_list_pane_cp06

0x5d6a,	// (0x0002b7c4) grid_radio_pane

0x26b7,	// (0x00028111) bg_popup_window_pane_cp06

0x5d72,	// (0x0002b7cc) main_fmradio_pane_t1

0x4bea,	// (0x0002a644) heading_pane_cp04

0x5d80,	// (0x0002b7da) main_fmradio_pane_t2

0xbc5d,	// (0x000316b7) popup_cale_lunar_info_window_g1

0x5d8e,	// (0x0002b7e8) main_fmradio_pane_t3

0xbc65,	// (0x000316bf) popup_cale_lunar_info_window_g2

0x5d9c,	// (0x0002b7f6) main_fmradio_pane_t4

0x0001,

0x5daa,	// (0x0002b804) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0003503b) popup_cale_lunar_info_window_g

0xf51b,	// (0x00034f75) main_fmradio_pane_t

0x5db8,	// (0x0002b812) wait_bar_pane_cp03

0x5dc0,	// (0x0002b81a) cell_fmradio_pane_ParamLimits

0x5dc0,	// (0x0002b81a) cell_fmradio_pane

0x59ba,	// (0x0002b414) cell_fmradio_pane_g1_ParamLimits

0x59ba,	// (0x0002b414) cell_fmradio_pane_g1

0x26b7,	// (0x00028111) grid_highlight_pane_cp011

0x5dd3,	// (0x0002b82d) poc_content_pane_ParamLimits

0x5dd3,	// (0x0002b82d) poc_content_pane

0x5de5,	// (0x0002b83f) scroll_pane_cp019

0x5ded,	// (0x0002b847) popup_call_poc_act_window_ParamLimits

0x5ded,	// (0x0002b847) popup_call_poc_act_window

0x5e11,	// (0x0002b86b) popup_call_poc_inact_window_ParamLimits

0x5e11,	// (0x0002b86b) popup_call_poc_inact_window

0xf5b8,	// (0x00035012) bg_popup_call_poc_act_pane_g

0xbbd5,	// (0x0003162f) bg_popup_call_poc_inact_pane_g1

0xbbdd,	// (0x00031637) bg_popup_call_poc_inact_pane_g2

0x5e2a,	// (0x0002b884) popup_call_poc_act_window_g2

0xbbe5,	// (0x0003163f) bg_popup_call_poc_inact_pane_g3

0xbbed,	// (0x00031647) bg_popup_call_poc_inact_pane_g4

0xbbf5,	// (0x0003164f) bg_popup_call_poc_inact_pane_g5

0x5e32,	// (0x0002b88c) popup_call_poc_act_window_t1_ParamLimits

0x5e32,	// (0x0002b88c) popup_call_poc_act_window_t1

0x5e5a,	// (0x0002b8b4) popup_call_poc_act_window_t2_ParamLimits

0x5e5a,	// (0x0002b8b4) popup_call_poc_act_window_t2

0x5e82,	// (0x0002b8dc) popup_call_poc_act_window_t3_ParamLimits

0x5e82,	// (0x0002b8dc) popup_call_poc_act_window_t3

0x5eaa,	// (0x0002b904) popup_call_poc_act_window_t4_ParamLimits

0x5eaa,	// (0x0002b904) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00034f80) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00034f80) popup_call_poc_act_window_t

0xbbfd,	// (0x00031657) bg_popup_call_poc_inact_pane_g6

0xbc05,	// (0x0003165f) bg_popup_call_poc_inact_pane_g7

0xbc0d,	// (0x00031667) bg_popup_call_poc_inact_pane_g8

0x5ebc,	// (0x0002b916) popup_call_poc_inact_window_g2

0xbc15,	// (0x0003166f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00034fff) bg_popup_call_poc_inact_pane_g

0x5ec4,	// (0x0002b91e) popup_call_poc_inact_window_t1_ParamLimits

0x5ec4,	// (0x0002b91e) popup_call_poc_inact_window_t1

0x5ed9,	// (0x0002b933) popup_call_poc_inact_window_t2_ParamLimits

0x5ed9,	// (0x0002b933) popup_call_poc_inact_window_t2

0x5eee,	// (0x0002b948) popup_call_poc_inact_window_t3_ParamLimits

0x5eee,	// (0x0002b948) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00034f89) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00034f89) popup_call_poc_inact_window_t

0xbdcd,	// (0x00031827) context_pane_ParamLimits

0x69a1,	// (0x0002c3fb) signal_pane_ParamLimits

0x51bf,	// (0x0002ac19) main_call2_pane

0xbdbb,	// (0x00031815) popup_phob_thumbnail2_window_ParamLimits

0xbdbb,	// (0x00031815) popup_phob_thumbnail2_window

0xb02c,	// (0x00030a86) aid_hotspot_pointer_arrow_pane

0xb034,	// (0x00030a8e) aid_hotspot_pointer_hand_pane

0x64b7,	// (0x0002bf11) phob_pre_status_pane_g5

0x3250,	// (0x00028caa) cams_zoom_pane_ParamLimits

0x325f,	// (0x00028cb9) image_vga_pane_ParamLimits

0x3279,	// (0x00028cd3) main_camera_pane_g1_ParamLimits

0x328b,	// (0x00028ce5) main_camera_pane_g2_ParamLimits

0x329b,	// (0x00028cf5) main_camera_pane_g3_ParamLimits

0x32ab,	// (0x00028d05) main_camera_pane_g4_ParamLimits

0x32bb,	// (0x00028d15) main_camera_pane_g5_ParamLimits

0x32cb,	// (0x00028d25) main_camera_pane_g6_ParamLimits

0x32dd,	// (0x00028d37) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00034c88) main_camera_pane_g_ParamLimits

0x32f9,	// (0x00028d53) main_camera_pane_t1_ParamLimits

0x330f,	// (0x00028d69) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00034c99) main_camera_pane_t_ParamLimits

0x2912,	// (0x0002836c) bg_popup_preview_window_pane_cp01_ParamLimits

0x2912,	// (0x0002836c) bg_popup_preview_window_pane_cp01

0x5f03,	// (0x0002b95d) popup_phob_thumbnail2_window_g1_ParamLimits

0x5f03,	// (0x0002b95d) popup_phob_thumbnail2_window_g1

0x26b7,	// (0x00028111) call2_cli_visual_pane

0x5f2a,	// (0x0002b984) popup_call2_audio_conf_window_ParamLimits

0x5f2a,	// (0x0002b984) popup_call2_audio_conf_window

0x5f4a,	// (0x0002b9a4) popup_call2_audio_first_window_ParamLimits

0x5f4a,	// (0x0002b9a4) popup_call2_audio_first_window

0x5fe0,	// (0x0002ba3a) popup_call2_audio_in_window_ParamLimits

0x5fe0,	// (0x0002ba3a) popup_call2_audio_in_window

0x6028,	// (0x0002ba82) popup_call2_audio_out_window_ParamLimits

0x6028,	// (0x0002ba82) popup_call2_audio_out_window

0x6092,	// (0x0002baec) popup_call2_audio_second_window_ParamLimits

0x6092,	// (0x0002baec) popup_call2_audio_second_window

0x60f8,	// (0x0002bb52) popup_call2_audio_wait_window_ParamLimits

0x60f8,	// (0x0002bb52) popup_call2_audio_wait_window

0x26b7,	// (0x00028111) bg_popup_call2_act_pane_cp03

0x28f4,	// (0x0002834e) list_conf_pane_cp

0x6132,	// (0x0002bb8c) popup_call2_audio_conf_window_t1

0x4c6b,	// (0x0002a6c5) list_single_graphic_popup_conf2_pane_ParamLimits

0x4c6b,	// (0x0002a6c5) list_single_graphic_popup_conf2_pane

0x4c7e,	// (0x0002a6d8) list_highlight_pane_cp04

0x6140,	// (0x0002bb9a) list_single_graphic_popup_conf2_pane_g1

0x4c8f,	// (0x0002a6e9) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00034f90) list_single_graphic_popup_conf2_pane_g

0x614a,	// (0x0002bba4) list_single_graphic_popup_conf2_pane_t1

0x6158,	// (0x0002bbb2) bg_popup_call2_act_pane_cp01_ParamLimits

0x6158,	// (0x0002bbb2) bg_popup_call2_act_pane_cp01

0x61e2,	// (0x0002bc3c) call_type_pane_cp05_ParamLimits

0x61e2,	// (0x0002bc3c) call_type_pane_cp05

0x6236,	// (0x0002bc90) popup_call2_audio_second_window_g1_ParamLimits

0x6236,	// (0x0002bc90) popup_call2_audio_second_window_g1

0x628a,	// (0x0002bce4) popup_call2_audio_second_window_g2_ParamLimits

0x628a,	// (0x0002bce4) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00034f95) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00034f95) popup_call2_audio_second_window_g

0x62ef,	// (0x0002bd49) popup_call2_audio_second_window_t1_ParamLimits

0x62ef,	// (0x0002bd49) popup_call2_audio_second_window_t1

0xb062,	// (0x00030abc) popup_call2_audio_second_window_t2_ParamLimits

0xb062,	// (0x00030abc) popup_call2_audio_second_window_t2

0xb0b5,	// (0x00030b0f) popup_call2_audio_second_window_t3_ParamLimits

0xb0b5,	// (0x00030b0f) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00034f9c) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00034f9c) popup_call2_audio_second_window_t

0x26b7,	// (0x00028111) bg_popup_call2_in_pane_cp02

0x26c1,	// (0x0002811b) call_type_pane_cp04

0x26c9,	// (0x00028123) popup_call2_audio_wait_window_g1

0x26d1,	// (0x0002812b) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00034b75) popup_call2_audio_wait_window_g

0x26d9,	// (0x00028133) popup_call2_audio_wait_window_t3

0xb1a8,	// (0x00030c02) bg_popup_call2_act_pane_ParamLimits

0xb1a8,	// (0x00030c02) bg_popup_call2_act_pane

0xb268,	// (0x00030cc2) call_type_pane_cp03_ParamLimits

0xb268,	// (0x00030cc2) call_type_pane_cp03

0xb2cc,	// (0x00030d26) popup_call2_audio_first_window_g1_ParamLimits

0xb2cc,	// (0x00030d26) popup_call2_audio_first_window_g1

0xb33c,	// (0x00030d96) popup_call2_audio_first_window_g2_ParamLimits

0xb33c,	// (0x00030d96) popup_call2_audio_first_window_g2

0x54ad,	// (0x0002af07) popup_call2_audio_first_window_g3_ParamLimits

0x54ad,	// (0x0002af07) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00034fa5) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00034fa5) popup_call2_audio_first_window_g

0xb41a,	// (0x00030e74) popup_call2_audio_first_window_t1_ParamLimits

0xb41a,	// (0x00030e74) popup_call2_audio_first_window_t1

0xb51d,	// (0x00030f77) popup_call2_audio_first_window_t4_ParamLimits

0xb51d,	// (0x00030f77) popup_call2_audio_first_window_t4

0xb600,	// (0x0003105a) popup_call2_audio_first_window_t5_ParamLimits

0xb600,	// (0x0003105a) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00034fb0) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00034fb0) popup_call2_audio_first_window_t

0x290a,	// (0x00028364) bg_popup_call2_act_pane_g1

0xbc6d,	// (0x000316c7) popup_cale_lunar_info_window_t1

0xbc7b,	// (0x000316d5) popup_cale_lunar_info_window_t2

0xbc89,	// (0x000316e3) popup_cale_lunar_info_window_t3

0x26b7,	// (0x00028111) bg_popup_call2_bubble_pane

0xb701,	// (0x0003115b) bg_popup_call2_in_pane_cp01_ParamLimits

0xb701,	// (0x0003115b) bg_popup_call2_in_pane_cp01

0x236f,	// (0x00027dc9) call_type_pane_cp02

0xb749,	// (0x000311a3) popup_call2_audio_out_window_g1_ParamLimits

0xb749,	// (0x000311a3) popup_call2_audio_out_window_g1

0xb775,	// (0x000311cf) popup_call2_audio_out_window_g2_ParamLimits

0xb775,	// (0x000311cf) popup_call2_audio_out_window_g2

0xb79d,	// (0x000311f7) popup_call2_audio_out_window_g3_ParamLimits

0xb79d,	// (0x000311f7) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00034fb9) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00034fb9) popup_call2_audio_out_window_g

0xb7d8,	// (0x00031232) popup_call2_audio_out_window_t1_ParamLimits

0xb7d8,	// (0x00031232) popup_call2_audio_out_window_t1

0xb837,	// (0x00031291) popup_call2_audio_out_window_t2_ParamLimits

0xb837,	// (0x00031291) popup_call2_audio_out_window_t2

0xb88b,	// (0x000312e5) popup_call2_audio_out_window_t3_ParamLimits

0xb88b,	// (0x000312e5) popup_call2_audio_out_window_t3

0xb8a1,	// (0x000312fb) popup_call2_audio_out_window_t4_ParamLimits

0xb8a1,	// (0x000312fb) popup_call2_audio_out_window_t4

0xb8b7,	// (0x00031311) popup_call2_audio_out_window_t5_ParamLimits

0xb8b7,	// (0x00031311) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00034fc2) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00034fc2) popup_call2_audio_out_window_t

0xb91b,	// (0x00031375) bg_popup_call2_in_pane_ParamLimits

0xb91b,	// (0x00031375) bg_popup_call2_in_pane

0xb977,	// (0x000313d1) popup_call2_audio_in_window_g1_ParamLimits

0xb977,	// (0x000313d1) popup_call2_audio_in_window_g1

0xb9af,	// (0x00031409) popup_call2_audio_in_window_g2_ParamLimits

0xb9af,	// (0x00031409) popup_call2_audio_in_window_g2

0xb9e7,	// (0x00031441) popup_call2_audio_in_window_g3_ParamLimits

0xb9e7,	// (0x00031441) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00034fcf) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00034fcf) popup_call2_audio_in_window_g

0xba3f,	// (0x00031499) popup_call2_audio_in_window_t1_ParamLimits

0xba3f,	// (0x00031499) popup_call2_audio_in_window_t1

0xbabf,	// (0x00031519) popup_call2_audio_in_window_t2_ParamLimits

0xbabf,	// (0x00031519) popup_call2_audio_in_window_t2

0xbb3f,	// (0x00031599) popup_call2_audio_in_window_t3_ParamLimits

0xbb3f,	// (0x00031599) popup_call2_audio_in_window_t3

0xbb59,	// (0x000315b3) popup_call2_audio_in_window_t4_ParamLimits

0xbb59,	// (0x000315b3) popup_call2_audio_in_window_t4

0xbb6b,	// (0x000315c5) popup_call2_audio_in_window_t5_ParamLimits

0xbb6b,	// (0x000315c5) popup_call2_audio_in_window_t5

0xbb80,	// (0x000315da) popup_call2_audio_in_window_t6_ParamLimits

0xbb80,	// (0x000315da) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00034fd8) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00034fd8) popup_call2_audio_in_window_t

0x290a,	// (0x00028364) bg_popup_call2_in_pane_g1

0xbc97,	// (0x000316f1) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00035040) popup_cale_lunar_info_window_t

0x2912,	// (0x0002836c) bg_popup_call2_rect_pane_ParamLimits

0x2912,	// (0x0002836c) bg_popup_call2_rect_pane

0x26b7,	// (0x00028111) call2_cli_visual_graphic_pane

0x26b7,	// (0x00028111) call2_cli_visual_text_pane

0xbe6d,	// (0x000318c7) smil_status_volume_pane_g3

0x0002,

0x2c90,	// (0x000286ea) call2_cli_visual_graphic_pane_g1

0x2c90,	// (0x000286ea) call2_cli_visual_graphic_pane_g2

0x2c90,	// (0x000286ea) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00034fe5) call2_cli_visual_graphic_pane_g

0xbb95,	// (0x000315ef) bg_popup_call2_rect_pane_g1

0x2da9,	// (0x00028803) bg_popup_call2_rect_pane_g2

0xbb9d,	// (0x000315f7) bg_popup_call2_rect_pane_g3

0xbba5,	// (0x000315ff) bg_popup_call2_rect_pane_g4

0xbbad,	// (0x00031607) bg_popup_call2_rect_pane_g5

0xbbb5,	// (0x0003160f) bg_popup_call2_rect_pane_g6

0xbbbd,	// (0x00031617) bg_popup_call2_rect_pane_g7

0xbbc5,	// (0x0003161f) bg_popup_call2_rect_pane_g8

0xbbcd,	// (0x00031627) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00034fec) bg_popup_call2_rect_pane_g

0xbbd5,	// (0x0003162f) bg_popup_call2_bubble_pane_g1

0xbbdd,	// (0x00031637) bg_popup_call2_bubble_pane_g2

0xbbe5,	// (0x0003163f) bg_popup_call2_bubble_pane_g3

0xbbed,	// (0x00031647) bg_popup_call2_bubble_pane_g4

0xbbf5,	// (0x0003164f) bg_popup_call2_bubble_pane_g5

0xbbfd,	// (0x00031657) bg_popup_call2_bubble_pane_g6

0xbc05,	// (0x0003165f) bg_popup_call2_bubble_pane_g7

0xbc0d,	// (0x00031667) bg_popup_call2_bubble_pane_g8

0xbc15,	// (0x0003166f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00034fff) bg_popup_call2_bubble_pane_g

0x2e27,	// (0x00028881) aid_cale_week_size_cell_pane

0x3325,	// (0x00028d7f) aid_cams_cif_uncrop_pane_ParamLimits

0x3325,	// (0x00028d7f) aid_cams_cif_uncrop_pane

0x351c,	// (0x00028f76) aid_cams_size_cell_ParamLimits

0x351c,	// (0x00028f76) aid_cams_size_cell

0x3530,	// (0x00028f8a) grid_cams_pane_ParamLimits

0x354a,	// (0x00028fa4) linegrid_cams_pane_ParamLimits

0x3770,	// (0x000291ca) call_video_pane_t1

0x378e,	// (0x000291e8) call_video_pane_t2

0x0001,

0xf292,	// (0x00034cec) call_video_pane_t

0x3e1c,	// (0x00029876) aid_cale_month_size_cell_pane_ParamLimits

0x3e1c,	// (0x00029876) aid_cale_month_size_cell_pane

0xf62f,	// (0x00035089) smil_status_volume_pane_g

0xbe7a,	// (0x000318d4) volume_smil_pane_ParamLimits

0x1f80,	// (0x000279da) aid_popup2_width_pane

0x2d01,	// (0x0002875b) cell_qdial_pane_g4_ParamLimits

0x2d01,	// (0x0002875b) cell_qdial_pane_g4

0x4f59,	// (0x0002a9b3) aid_blid_cardinal_pane_ParamLimits

0x4f65,	// (0x0002a9bf) aid_blid_destination_pane_ParamLimits

0x4f65,	// (0x0002a9bf) aid_blid_destination_pane

0x2912,	// (0x0002836c) bg_popup_call_poc_act_pane_ParamLimits

0x2912,	// (0x0002836c) bg_popup_call_poc_act_pane

0x2912,	// (0x0002836c) bg_popup_call_poc_inact_pane_ParamLimits

0x2912,	// (0x0002836c) bg_popup_call_poc_inact_pane

0xbc1d,	// (0x00031677) bg_popup_call_poc_act_pane_g1

0xbc25,	// (0x0003167f) bg_popup_call_poc_act_pane_g2

0xbc2d,	// (0x00031687) bg_popup_call_poc_act_pane_g3

0xbbed,	// (0x00031647) bg_popup_call_poc_act_pane_g4

0xbbf5,	// (0x0003164f) bg_popup_call_poc_act_pane_g5

0xbc35,	// (0x0003168f) bg_popup_call_poc_act_pane_g6

0xbc05,	// (0x0003165f) bg_popup_call_poc_act_pane_g7

0xbc3d,	// (0x00031697) bg_popup_call_poc_act_pane_g8

0x26b7,	// (0x00028111) main_usb_pane

0xbd96,	// (0x000317f0) popup_cale_lunar_info_window

0x3ac4,	// (0x0002951e) im_reading_pane_t1_ParamLimits

0x3afd,	// (0x00029557) list_im_pane_ParamLimits

0x3b0e,	// (0x00029568) scroll_pane_cp07_ParamLimits

0x26b7,	// (0x00028111) grid_highlight_pane_cp012

0x2912,	// (0x0002836c) mup_scale_pane_ParamLimits

0x59ba,	// (0x0002b414) main_usb_pane_g1_ParamLimits

0x59ba,	// (0x0002b414) main_usb_pane_g1

0x63cc,	// (0x0002be26) main_usb_pane_g2_ParamLimits

0x63cc,	// (0x0002be26) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00035029) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00035029) main_usb_pane_g

0x63e2,	// (0x0002be3c) main_usb_pane_t1_ParamLimits

0x63e2,	// (0x0002be3c) main_usb_pane_t1

0x63f4,	// (0x0002be4e) main_usb_pane_t2_ParamLimits

0x63f4,	// (0x0002be4e) main_usb_pane_t2

0x6406,	// (0x0002be60) main_usb_pane_t3_ParamLimits

0x6406,	// (0x0002be60) main_usb_pane_t3

0x6418,	// (0x0002be72) main_usb_pane_t4_ParamLimits

0x6418,	// (0x0002be72) main_usb_pane_t4

0x642a,	// (0x0002be84) main_usb_pane_t5_ParamLimits

0x642a,	// (0x0002be84) main_usb_pane_t5

0x643c,	// (0x0002be96) main_usb_pane_t6_ParamLimits

0x643c,	// (0x0002be96) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0003502e) main_usb_pane_t_ParamLimits

0x4f08,	// (0x0002a962) aid_text_placing

0x4f11,	// (0x0002a96b) main_location2_pane_t1_ParamLimits

0x4f23,	// (0x0002a97d) main_location2_pane_t2_ParamLimits

0x4f35,	// (0x0002a98f) main_location2_pane_t3_ParamLimits

0x4f47,	// (0x0002a9a1) main_location2_pane_t4_ParamLimits

0x4f47,	// (0x0002a9a1) main_location2_pane_t4

0xf3f3,	// (0x00034e4d) main_location2_pane_t_ParamLimits

0x29ea,	// (0x00028444) find_pinb_pane_g2_ParamLimits

0x29ea,	// (0x00028444) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00034b9b) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00034b9b) find_pinb_pane_g

0x29f6,	// (0x00028450) find_pinb_pane_t1_ParamLimits

0x2a08,	// (0x00028462) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00034ba0) find_pinb_pane_t_ParamLimits

0x26b7,	// (0x00028111) main_call3_pane

0x41b5,	// (0x00029c0f) cale_month_day_heading_pane_t1_ParamLimits

0x4213,	// (0x00029c6d) cale_month_day_heading_pane_t2_ParamLimits

0x4278,	// (0x00029cd2) cale_month_day_heading_pane_t3_ParamLimits

0x42dd,	// (0x00029d37) cale_month_day_heading_pane_t4_ParamLimits

0x4342,	// (0x00029d9c) cale_month_day_heading_pane_t5_ParamLimits

0x43b7,	// (0x00029e11) cale_month_day_heading_pane_t6_ParamLimits

0x442c,	// (0x00029e86) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00034d24) cale_month_day_heading_pane_t_ParamLimits

0x4656,	// (0x0002a0b0) smil_status_volume_pane

0x5996,	// (0x0002b3f0) postcard_address_pane_ParamLimits

0x5996,	// (0x0002b3f0) postcard_address_pane

0x59a8,	// (0x0002b402) postcard_message_pane_ParamLimits

0x59a8,	// (0x0002b402) postcard_message_pane

0x63aa,	// (0x0002be04) call2_cli_visual_pane_t1_ParamLimits

0x63aa,	// (0x0002be04) call2_cli_visual_pane_t1

0x6bce,	// (0x0002c628) postcard_message_pane_t1_ParamLimits

0x6bce,	// (0x0002c628) postcard_message_pane_t1

0x6bb7,	// (0x0002c611) postcard_address_pane_t1_ParamLimits

0x6bb7,	// (0x0002c611) postcard_address_pane_t1

0x6ba3,	// (0x0002c5fd) popup_call3_audio_in_window_ParamLimits

0x6ba3,	// (0x0002c5fd) popup_call3_audio_in_window

0x6a2e,	// (0x0002c488) bg_popup_call3_in_pane_ParamLimits

0x6a2e,	// (0x0002c488) bg_popup_call3_in_pane

0x6aa4,	// (0x0002c4fe) popup_call3_audio_in_window_g1_ParamLimits

0x6aa4,	// (0x0002c4fe) popup_call3_audio_in_window_g1

0x6ac4,	// (0x0002c51e) popup_call3_audio_in_window_g2_ParamLimits

0x6ac4,	// (0x0002c51e) popup_call3_audio_in_window_g2

0x6ae4,	// (0x0002c53e) popup_call3_audio_in_window_g3_ParamLimits

0x6ae4,	// (0x0002c53e) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00035090) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00035090) popup_call3_audio_in_window_g

0x6b15,	// (0x0002c56f) popup_call3_audio_in_window_t1_ParamLimits

0x6b15,	// (0x0002c56f) popup_call3_audio_in_window_t1

0x6b53,	// (0x0002c5ad) popup_call3_audio_in_window_t2_ParamLimits

0x6b53,	// (0x0002c5ad) popup_call3_audio_in_window_t2

0x6b91,	// (0x0002c5eb) popup_call3_audio_in_window_t3_ParamLimits

0x6b91,	// (0x0002c5eb) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00035099) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00035099) popup_call3_audio_in_window_t

0x51bf,	// (0x0002ac19) bg_popup_call3_rect_pane

0xbb95,	// (0x000315ef) bg_popup_call3_rect_pane_g1

0x2da9,	// (0x00028803) bg_popup_call3_rect_pane_g2

0xbb9d,	// (0x000315f7) bg_popup_call3_rect_pane_g3

0xbba5,	// (0x000315ff) bg_popup_call3_rect_pane_g4

0xbbad,	// (0x00031607) bg_popup_call3_rect_pane_g5

0xbbb5,	// (0x0003160f) bg_popup_call3_rect_pane_g6

0xbbbd,	// (0x00031617) bg_popup_call3_rect_pane_g7

0x54a5,	// (0x0002aeff) mup_visualizer_osc_pane

0x54bb,	// (0x0002af15) mup_visualizer_spec_pane

0x6a5e,	// (0x0002c4b8) call3_video_qcif_pane_ParamLimits

0x6a5e,	// (0x0002c4b8) call3_video_qcif_pane

0x6a71,	// (0x0002c4cb) call3_video_qcif_uncrop_pane_ParamLimits

0x6a71,	// (0x0002c4cb) call3_video_qcif_uncrop_pane

0x6a7f,	// (0x0002c4d9) call3_video_subqcif_pane_ParamLimits

0x6a7f,	// (0x0002c4d9) call3_video_subqcif_pane

0x6a93,	// (0x0002c4ed) call3_video_subqcif_uncrop_pane_ParamLimits

0x6a93,	// (0x0002c4ed) call3_video_subqcif_uncrop_pane

0x6b04,	// (0x0002c55e) popup_call3_audio_in_window_g4_ParamLimits

0x6b04,	// (0x0002c55e) popup_call3_audio_in_window_g4

0x6a1d,	// (0x0002c477) mup_spec_half_pane

0x6a26,	// (0x0002c480) mup_spec_half_pane_cp

0xbe2d,	// (0x00031887) mup_osc_middle_pane

0xbe36,	// (0x00031890) mup_visualizer_osc_pane_g1

0x69fd,	// (0x0002c457) mup_spec_bar_pane_ParamLimits

0x69fd,	// (0x0002c457) mup_spec_bar_pane

0xbe1a,	// (0x00031874) mup_spec_bar_pane_g1

0xbe24,	// (0x0003187e) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00035084) mup_spec_bar_pane_g

0x2e27,	// (0x00028881) aid_cale_week_size_cell_pane_ParamLimits

0x2e3a,	// (0x00028894) bg_cale_heading_pane_ParamLimits

0x2e4e,	// (0x000288a8) bg_cale_pane_cp01_ParamLimits

0x2e67,	// (0x000288c1) cale_week_corner_pane_ParamLimits

0x2e7d,	// (0x000288d7) cale_week_day_heading_pane_ParamLimits

0x2e91,	// (0x000288eb) cale_week_scroll_pane_g1_ParamLimits

0x2ea2,	// (0x000288fc) cale_week_scroll_pane_g2_ParamLimits

0x2eb3,	// (0x0002890d) cale_week_scroll_pane_g3_ParamLimits

0x2ec4,	// (0x0002891e) cale_week_scroll_pane_g4_ParamLimits

0x2ed5,	// (0x0002892f) cale_week_scroll_pane_g5_ParamLimits

0x2ee8,	// (0x00028942) cale_week_scroll_pane_g6_ParamLimits

0x2efb,	// (0x00028955) cale_week_scroll_pane_g7_ParamLimits

0x2f0e,	// (0x00028968) cale_week_scroll_pane_g8_ParamLimits

0x2f21,	// (0x0002897b) cale_week_scroll_pane_g9_ParamLimits

0x2f32,	// (0x0002898c) cale_week_scroll_pane_g10_ParamLimits

0x2f43,	// (0x0002899d) cale_week_scroll_pane_g11_ParamLimits

0x2f54,	// (0x000289ae) cale_week_scroll_pane_g12_ParamLimits

0x2f65,	// (0x000289bf) cale_week_scroll_pane_g13_ParamLimits

0x2f76,	// (0x000289d0) cale_week_scroll_pane_g14_ParamLimits

0x2f87,	// (0x000289e1) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00034c2c) cale_week_scroll_pane_g_ParamLimits

0x2f98,	// (0x000289f2) cale_week_time_pane_ParamLimits

0x2fab,	// (0x00028a05) grid_cale_week_pane_ParamLimits

0x2fc0,	// (0x00028a1a) listscroll_cale_week_pane_t1

0x2fd2,	// (0x00028a2c) scroll_pane_cp08_ParamLimits

0x3e80,	// (0x000298da) cale_month_corner_pane_ParamLimits

0x4162,	// (0x00029bbc) cale_month_pane_t1

0x4174,	// (0x00029bce) cale_month_week_pane_ParamLimits

0x4b4a,	// (0x0002a5a4) popup_call_status_window_g1_ParamLimits

0x4b5e,	// (0x0002a5b8) popup_call_status_window_g2_ParamLimits

0x4b72,	// (0x0002a5cc) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00034dd4) popup_call_status_window_g_ParamLimits

0x4bda,	// (0x0002a634) aid_call2_pane

0x57de,	// (0x0002b238) msg_header_pane_g1

0x5996,	// (0x0002b3f0) postcard_address2_pane_ParamLimits

0x5996,	// (0x0002b3f0) postcard_address2_pane

0x59a8,	// (0x0002b402) postcard_message2_pane_ParamLimits

0x59a8,	// (0x0002b402) postcard_message2_pane

0x69af,	// (0x0002c409) message2_row_pane_ParamLimits

0x69af,	// (0x0002c409) message2_row_pane

0x69cb,	// (0x0002c425) address2_row_pane_ParamLimits

0x69cb,	// (0x0002c425) address2_row_pane

0xbde8,	// (0x00031842) postcard_message2_row_pane_g1

0xbdf0,	// (0x0003184a) postcard_message2_row_pane_t1

0xbde8,	// (0x00031842) address2_row_pane_g1

0xbdf0,	// (0x0003184a) address2_row_pane_t1

0x0f15,	// (0x0002696f) aid_size_cell_vorec

0x26b7,	// (0x00028111) main_rss_pane

0x69de,	// (0x0002c438) rss_list_single_pane_ParamLimits

0x69de,	// (0x0002c438) rss_list_single_pane

0xbdfe,	// (0x00031858) rss_list_single_pane_t1

0xbe0c,	// (0x00031866) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0003507f) rss_list_single_pane_t

0x26b7,	// (0x00028111) main_camera2_pane

0x26b7,	// (0x00028111) main_video2_pane

0x0fd7,	// (0x00026a31) cams_zoom_pane_cp2_ParamLimits

0x0fd7,	// (0x00026a31) cams_zoom_pane_cp2

0x0ff7,	// (0x00026a51) image2_vga_pane_ParamLimits

0x0ff7,	// (0x00026a51) image2_vga_pane

0x1048,	// (0x00026aa2) main_camera2_pane_g1_ParamLimits

0x1048,	// (0x00026aa2) main_camera2_pane_g1

0x1068,	// (0x00026ac2) main_camera2_pane_g2_ParamLimits

0x1068,	// (0x00026ac2) main_camera2_pane_g2

0x1088,	// (0x00026ae2) main_camera2_pane_g3_ParamLimits

0x1088,	// (0x00026ae2) main_camera2_pane_g3

0x10a8,	// (0x00026b02) main_camera2_pane_g4_ParamLimits

0x10a8,	// (0x00026b02) main_camera2_pane_g4

0x10c8,	// (0x00026b22) main_camera2_pane_g5_ParamLimits

0x10c8,	// (0x00026b22) main_camera2_pane_g5

0x10e8,	// (0x00026b42) main_camera2_pane_g6_ParamLimits

0x10e8,	// (0x00026b42) main_camera2_pane_g6

0x1108,	// (0x00026b62) main_camera2_pane_g7_ParamLimits

0x1108,	// (0x00026b62) main_camera2_pane_g7

0x1128,	// (0x00026b82) main_camera2_pane_g8_ParamLimits

0x1128,	// (0x00026b82) main_camera2_pane_g8

0x0008,

0xf646,	// (0x000350a0) main_camera2_pane_g_ParamLimits

0xf646,	// (0x000350a0) main_camera2_pane_g

0x1168,	// (0x00026bc2) main_camera2_pane_t1_ParamLimits

0x1168,	// (0x00026bc2) main_camera2_pane_t1

0x119d,	// (0x00026bf7) main_camera2_pane_t2_ParamLimits

0x119d,	// (0x00026bf7) main_camera2_pane_t2

0x11c3,	// (0x00026c1d) main_camera2_pane_t3_ParamLimits

0x11c3,	// (0x00026c1d) main_camera2_pane_t3

0x1221,	// (0x00026c7b) main_camera2_pane_t4_ParamLimits

0x1221,	// (0x00026c7b) main_camera2_pane_t4

0x0006,

0xf659,	// (0x000350b3) main_camera2_pane_t_ParamLimits

0xf659,	// (0x000350b3) main_camera2_pane_t

0x12b3,	// (0x00026d0d) cams_zoom_pane_cp4_ParamLimits

0x12b3,	// (0x00026d0d) cams_zoom_pane_cp4

0x12c9,	// (0x00026d23) image2_cif_pane_ParamLimits

0x12c9,	// (0x00026d23) image2_cif_pane

0x12f4,	// (0x00026d4e) image2_subqcif_pane_ParamLimits

0x12f4,	// (0x00026d4e) image2_subqcif_pane

0x130e,	// (0x00026d68) main_video2_pane_g1_ParamLimits

0x130e,	// (0x00026d68) main_video2_pane_g1

0x1328,	// (0x00026d82) main_video2_pane_g2_ParamLimits

0x1328,	// (0x00026d82) main_video2_pane_g2

0x133e,	// (0x00026d98) main_video2_pane_g3_ParamLimits

0x133e,	// (0x00026d98) main_video2_pane_g3

0x1354,	// (0x00026dae) main_video2_pane_g4_ParamLimits

0x1354,	// (0x00026dae) main_video2_pane_g4

0x136a,	// (0x00026dc4) main_video2_pane_g5_ParamLimits

0x136a,	// (0x00026dc4) main_video2_pane_g5

0x1380,	// (0x00026dda) main_video2_pane_g6_ParamLimits

0x1380,	// (0x00026dda) main_video2_pane_g6

0x0005,

0xf668,	// (0x000350c2) main_video2_pane_g_ParamLimits

0xf668,	// (0x000350c2) main_video2_pane_g

0x139a,	// (0x00026df4) main_video2_pane_t1_ParamLimits

0x139a,	// (0x00026df4) main_video2_pane_t1

0x13be,	// (0x00026e18) main_video2_pane_t2_ParamLimits

0x13be,	// (0x00026e18) main_video2_pane_t2

0x140c,	// (0x00026e66) main_video2_pane_t3_ParamLimits

0x140c,	// (0x00026e66) main_video2_pane_t3

0x0002,

0xf675,	// (0x000350cf) main_video2_pane_t_ParamLimits

0xf675,	// (0x000350cf) main_video2_pane_t

0x64f7,	// (0x0002bf51) call_muted_g2

0x0001,

0xf617,	// (0x00035071) call_muted_g

0x26b7,	// (0x00028111) main_mup2_pane

0x6be9,	// (0x0002c643) main_mup2_pane_g1_ParamLimits

0x6be9,	// (0x0002c643) main_mup2_pane_g1

0x6bf5,	// (0x0002c64f) main_mup2_pane_g2_ParamLimits

0x6bf5,	// (0x0002c64f) main_mup2_pane_g2

0xbf9e,	// (0x000319f8) main_mup_pane_g13_cp1

0xbfa6,	// (0x00031a00) mup_volume_pane_cp1

0x6c11,	// (0x0002c66b) main_mup2_pane_g4_ParamLimits

0x6c11,	// (0x0002c66b) main_mup2_pane_g4

0x6c23,	// (0x0002c67d) main_mup2_pane_g5_ParamLimits

0x6c23,	// (0x0002c67d) main_mup2_pane_g5

0x6c35,	// (0x0002c68f) main_mup2_pane_g6_ParamLimits

0x6c35,	// (0x0002c68f) main_mup2_pane_g6

0x6c47,	// (0x0002c6a1) main_mup2_pane_g7_ParamLimits

0x6c47,	// (0x0002c6a1) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x000350d6) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x000350d6) main_mup2_pane_g

0x6c5f,	// (0x0002c6b9) main_mup2_pane_t1_ParamLimits

0x6c5f,	// (0x0002c6b9) main_mup2_pane_t1

0x6c75,	// (0x0002c6cf) main_mup2_pane_t2_ParamLimits

0x6c75,	// (0x0002c6cf) main_mup2_pane_t2

0x6c8b,	// (0x0002c6e5) main_mup2_pane_t3_ParamLimits

0x6c8b,	// (0x0002c6e5) main_mup2_pane_t3

0x6ca1,	// (0x0002c6fb) main_mup2_pane_t4_ParamLimits

0x6ca1,	// (0x0002c6fb) main_mup2_pane_t4

0x6cb9,	// (0x0002c713) main_mup2_pane_t5_ParamLimits

0x6cb9,	// (0x0002c713) main_mup2_pane_t5

0x6cd1,	// (0x0002c72b) main_mup2_pane_t6_ParamLimits

0x6cd1,	// (0x0002c72b) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x000350e5) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x000350e5) main_mup2_pane_t

0x6d01,	// (0x0002c75b) mup2_visualizer_pane_ParamLimits

0x6d01,	// (0x0002c75b) mup2_visualizer_pane

0x6d2f,	// (0x0002c789) mup_progress_pane_cp_ParamLimits

0x6d2f,	// (0x0002c789) mup_progress_pane_cp

0xbf80,	// (0x000319da) mup_volume_pane_cp_ParamLimits

0xbf80,	// (0x000319da) mup_volume_pane_cp

0x6d43,	// (0x0002c79d) mup2_visualizer_pane_g1_ParamLimits

0x6d43,	// (0x0002c79d) mup2_visualizer_pane_g1

0xbebf,	// (0x00031919) mup2_visualizer_pane_g2_ParamLimits

0xbebf,	// (0x00031919) mup2_visualizer_pane_g2

0x6d5a,	// (0x0002c7b4) mup2_visualizer_pane_g3_ParamLimits

0x6d5a,	// (0x0002c7b4) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x000350f2) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x000350f2) mup2_visualizer_pane_g

0x5d62,	// (0x0002b7bc) aid_size_cell_fmradio

0x66a9,	// (0x0002c103) aid_height_parent_landcape

0x3bc4,	// (0x0002961e) wml_content_pane_cp

0x3bcc,	// (0x00029626) wml_tabs_pane

0x3bd5,	// (0x0002962f) popup_wml_miniature_window

0x3bdd,	// (0x00029637) scroll_pane_cp021

0x3bf1,	// (0x0002964b) wml_content_pane_comp8

0x26b7,	// (0x00028111) bg_popup_sub_pane_cp05

0xbedd,	// (0x00031937) popup_wml_miniature_window_g1

0xbee5,	// (0x0003193f) wml_miniature_view_pane

0x6d66,	// (0x0002c7c0) aid_size_wml_view

0x6d6e,	// (0x0002c7c8) wml_miniature_view_pane_g1

0x6d77,	// (0x0002c7d1) wml_miniature_view_pane_g2

0x6d80,	// (0x0002c7da) wml_miniature_view_pane_g3

0x6d88,	// (0x0002c7e2) wml_miniature_view_pane_g4

0x6d90,	// (0x0002c7ea) wml_miniature_view_pane_g5

0x6d98,	// (0x0002c7f2) wml_miniature_view_pane_g6

0x6da0,	// (0x0002c7fa) wml_miniature_view_pane_g7

0x6da8,	// (0x0002c802) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x000350f9) wml_miniature_view_pane_g

0xbeed,	// (0x00031947) background_graphic_ParamLimits

0xbeed,	// (0x00031947) background_graphic

0xbef9,	// (0x00031953) wml_tabs_2_pane

0xbf02,	// (0x0003195c) wml_tabs_3_pane_ParamLimits

0xbf02,	// (0x0003195c) wml_tabs_3_pane

0xbf14,	// (0x0003196e) wml_tabs_4_pane_ParamLimits

0xbf14,	// (0x0003196e) wml_tabs_4_pane

0xbf2a,	// (0x00031984) wml_tabs_5_pane_ParamLimits

0xbf2a,	// (0x00031984) wml_tabs_5_pane

0xbf44,	// (0x0003199e) wml_tabs_pane_g2_ParamLimits

0xbf44,	// (0x0003199e) wml_tabs_pane_g2

0xbf58,	// (0x000319b2) wml_tabs_pane_g3_ParamLimits

0xbf58,	// (0x000319b2) wml_tabs_pane_g3

0x6db0,	// (0x0002c80a) wml_tabs_2_active_pane_ParamLimits

0x6db0,	// (0x0002c80a) wml_tabs_2_active_pane

0x6dc4,	// (0x0002c81e) wml_tabs_2_passive_pane_ParamLimits

0x6dc4,	// (0x0002c81e) wml_tabs_2_passive_pane

0x6dd8,	// (0x0002c832) wml_tabs_3_active_pane_cp_ParamLimits

0x6dd8,	// (0x0002c832) wml_tabs_3_active_pane_cp

0x6ded,	// (0x0002c847) wml_tabs_3_passive_pane_ParamLimits

0x6ded,	// (0x0002c847) wml_tabs_3_passive_pane

0x6e00,	// (0x0002c85a) wml_tabs_3_passive_pane_cp_ParamLimits

0x6e00,	// (0x0002c85a) wml_tabs_3_passive_pane_cp

0x6e17,	// (0x0002c871) tabs_4_active_pane

0x6e1f,	// (0x0002c879) tabs_4_passive_pane

0x6e29,	// (0x0002c883) tabs_4_passive_pane_cp

0x6e31,	// (0x0002c88b) tabs_4_passive_pane_cp2

0x63c4,	// (0x0002be1e) aid_height_text

0x547b,	// (0x0002aed5) mup_volume_cont_pane_ParamLimits

0x547b,	// (0x0002aed5) mup_volume_cont_pane

0x29a8,	// (0x00028402) aid_size_cell_pinb

0x29b2,	// (0x0002840c) aid_size_list_pinb

0x6d1b,	// (0x0002c775) mup2_volume_cont_pane_ParamLimits

0x6d1b,	// (0x0002c775) mup2_volume_cont_pane

0xbf6c,	// (0x000319c6) mup2_volume_cont_pane_g1_ParamLimits

0xbf6c,	// (0x000319c6) mup2_volume_cont_pane_g1

0x1f8c,	// (0x000279e6) aid_size_cell_touch_ParamLimits

0x1f8c,	// (0x000279e6) aid_size_cell_touch

0x21fa,	// (0x00027c54) touch_pane_ParamLimits

0x21fa,	// (0x00027c54) touch_pane

0x1f6e,	// (0x000279c8) main_rss2_pane

0xbfae,	// (0x00031a08) listscroll_rss2_pane

0xbfb7,	// (0x00031a11) rss2_navigation_pane

0xbfbf,	// (0x00031a19) list_rss2_pane

0x4d94,	// (0x0002a7ee) scroll_pane_cp22

0xbfc7,	// (0x00031a21) rss2_navigation_pane_g1

0xbfd0,	// (0x00031a2a) rss2_navigation_pane_g2

0xbfd8,	// (0x00031a32) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0003510a) rss2_navigation_pane_g

0xbfe0,	// (0x00031a3a) rss2_navigation_pane_t1

0x6e3b,	// (0x0002c895) rss2_list_single_pane_ParamLimits

0x6e3b,	// (0x0002c895) rss2_list_single_pane

0xbfee,	// (0x00031a48) rss2_list_single_pane_t2

0xbffc,	// (0x00031a56) rss2_list_single_pane_t3_ParamLimits

0xbffc,	// (0x00031a56) rss2_list_single_pane_t3

0xc019,	// (0x00031a73) rss2_list_single_pane_t4

0x463e,	// (0x0002a098) smil_status_pane_g1

0x21e0,	// (0x00027c3a) main_image2_pane_ParamLimits

0x21e0,	// (0x00027c3a) main_image2_pane

0x1148,	// (0x00026ba2) main_camera2_pane_g9_ParamLimits

0x1148,	// (0x00026ba2) main_camera2_pane_g9

0x1276,	// (0x00026cd0) main_camera2_pane_t5_ParamLimits

0x1276,	// (0x00026cd0) main_camera2_pane_t5

0xbe8f,	// (0x000318e9) main_camera2_pane_t6_ParamLimits

0xbe8f,	// (0x000318e9) main_camera2_pane_t6

0x6e50,	// (0x0002c8aa) main_image2_pane_g1_ParamLimits

0x6e50,	// (0x0002c8aa) main_image2_pane_g1

0x5d18,	// (0x0002b772) smil2_video_pane_ParamLimits

0x5d18,	// (0x0002b772) smil2_video_pane

0x1fbc,	// (0x00027a16) aid_zoom_text_primary_cp

0x219c,	// (0x00027bf6) popup_preview_fixed_window

0x3abc,	// (0x00029516) im_reading_pane_g1

0x0fbf,	// (0x00026a19) cams2_bc_adjust_pane_cp_ParamLimits

0x0fbf,	// (0x00026a19) cams2_bc_adjust_pane_cp

0x12a5,	// (0x00026cff) cams2_bc_adjust_pane_ParamLimits

0x12a5,	// (0x00026cff) cams2_bc_adjust_pane

0xc027,	// (0x00031a81) cams2_bc_adjust_pane_g1

0xc02f,	// (0x00031a89) cams2_slider_pane

0xc038,	// (0x00031a92) cams2_slider_pane_g1

0xc041,	// (0x00031a9b) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00035111) cams2_slider_pane_g

0x0d37,	// (0x00026791) calc_display_pane_ParamLimits

0x0d5f,	// (0x000267b9) calc_paper_pane_ParamLimits

0x0d82,	// (0x000267dc) grid_calc_pane_ParamLimits

0xaffd,	// (0x00030a57) popup_clock_digital_window_t1_ParamLimits

0x5b9f,	// (0x0002b5f9) main_image_pane_t1

0x0d19,	// (0x00026773) aid_size_cell_calc_ParamLimits

0x0d19,	// (0x00026773) aid_size_cell_calc

0x66ef,	// (0x0002c149) popup_blid_sat_info2_window_ParamLimits

0x66ef,	// (0x0002c149) popup_blid_sat_info2_window

0xc063,	// (0x00031abd) aid_size_cell_blid

0xc06b,	// (0x00031ac5) bg_popup_window_pane_cp07

0xc08e,	// (0x00031ae8) grid_popup_blid_pane

0xc098,	// (0x00031af2) heading_pane_cp05_ParamLimits

0xc098,	// (0x00031af2) heading_pane_cp05

0xc162,	// (0x00031bbc) cell_popup_blid_pane_ParamLimits

0xc162,	// (0x00031bbc) cell_popup_blid_pane

0xc186,	// (0x00031be0) cell_popup_blid_pane_g1

0xc18e,	// (0x00031be8) cell_popup_blid_pane_t1

0x6ceb,	// (0x0002c745) mup2_indicator_pane_ParamLimits

0x6ceb,	// (0x0002c745) mup2_indicator_pane

0x51bf,	// (0x0002ac19) mup2_visualizer_osc_pane

0xbecb,	// (0x00031925) mup2_visualizer_spec_pane_ParamLimits

0xbecb,	// (0x00031925) mup2_visualizer_spec_pane

0x6e66,	// (0x0002c8c0) mup2_spec_half_pane

0x6e6f,	// (0x0002c8c9) mup2_spec_half_pane_cp

0x6e77,	// (0x0002c8d1) mup2_spec_bar_pane_ParamLimits

0x6e77,	// (0x0002c8d1) mup2_spec_bar_pane

0xbe1a,	// (0x00031874) mup2_spec_bar_pane_g1

0xbe24,	// (0x0003187e) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00035084) mup2_spec_bar_pane_g

0x6e97,	// (0x0002c8f1) mup2_osc_middle_pane

0xbe36,	// (0x00031890) mup2_visualizer_osc_pane_g1

0x226c,	// (0x00027cc6) popup_number_entry_window_t1_ParamLimits

0x227f,	// (0x00027cd9) popup_number_entry_window_t2_ParamLimits

0x2291,	// (0x00027ceb) popup_number_entry_window_t3_ParamLimits

0x22a3,	// (0x00027cfd) popup_number_entry_window_t5_ParamLimits

0x22a3,	// (0x00027cfd) popup_number_entry_window_t5

0xf0ec,	// (0x00034b46) popup_number_entry_window_t_ParamLimits

0x22d7,	// (0x00027d31) text_title_cp2_ParamLimits

0xb03c,	// (0x00030a96) aid_hotspot_pointer_text2_pane

0xb056,	// (0x00030ab0) main_viewer_pane_g9_ParamLimits

0xb056,	// (0x00030ab0) main_viewer_pane_g9

0x4162,	// (0x00029bbc) cale_month_pane_t1_ParamLimits

0x46ba,	// (0x0002a114) bg_cale_pane_ParamLimits

0x46d2,	// (0x0002a12c) list_cale_pane_ParamLimits

0x2fc0,	// (0x00028a1a) listscroll_cale_day_pane_t1

0x46e3,	// (0x0002a13d) scroll_pane_cp09_ParamLimits

0x5529,	// (0x0002af83) main_mup_eq_pane_t1_ParamLimits

0x5529,	// (0x0002af83) main_mup_eq_pane_t1

0x5543,	// (0x0002af9d) main_mup_eq_pane_t2_ParamLimits

0x5543,	// (0x0002af9d) main_mup_eq_pane_t2

0x555d,	// (0x0002afb7) main_mup_eq_pane_t3_ParamLimits

0x555d,	// (0x0002afb7) main_mup_eq_pane_t3

0x5579,	// (0x0002afd3) main_mup_eq_pane_t4_ParamLimits

0x5579,	// (0x0002afd3) main_mup_eq_pane_t4

0x5595,	// (0x0002afef) main_mup_eq_pane_t5_ParamLimits

0x5595,	// (0x0002afef) main_mup_eq_pane_t5

0x55b1,	// (0x0002b00b) main_mup_eq_pane_t6_ParamLimits

0x55b1,	// (0x0002b00b) main_mup_eq_pane_t6

0x55c5,	// (0x0002b01f) main_mup_eq_pane_t7_ParamLimits

0x55c5,	// (0x0002b01f) main_mup_eq_pane_t7

0x55d9,	// (0x0002b033) main_mup_eq_pane_t8_ParamLimits

0x55d9,	// (0x0002b033) main_mup_eq_pane_t8

0x55ed,	// (0x0002b047) main_mup_eq_pane_t9_ParamLimits

0x55ed,	// (0x0002b047) main_mup_eq_pane_t9

0x5607,	// (0x0002b061) main_mup_eq_pane_t10_ParamLimits

0x5607,	// (0x0002b061) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00034ed3) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00034ed3) main_mup_eq_pane_t

0x56b6,	// (0x0002b110) mup_equalizer_pane_cp5_ParamLimits

0x56ca,	// (0x0002b124) mup_equalizer_pane_cp6_ParamLimits

0x56de,	// (0x0002b138) mup_equalizer_pane_cp7_ParamLimits

0x1f6e,	// (0x000279c8) main_gallery_pane

0xbe3f,	// (0x00031899) smil2_volume_pane

0xbe47,	// (0x000318a1) smil_status_volume_pane_g1_ParamLimits

0xbe5a,	// (0x000318b4) smil_status_volume_pane_g2_ParamLimits

0xbe6d,	// (0x000318c7) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00035089) smil_status_volume_pane_g_ParamLimits

0xc06b,	// (0x00031ac5) bg_popup_window_pane_cp07_ParamLimits

0xc079,	// (0x00031ad3) blid_firmament_pane

0x6ea0,	// (0x0002c8fa) aid_size_cell_gallery_ParamLimits

0x6ea0,	// (0x0002c8fa) aid_size_cell_gallery

0x6eb6,	// (0x0002c910) grid_gallery_pane_ParamLimits

0x6eb6,	// (0x0002c910) grid_gallery_pane

0x6ecf,	// (0x0002c929) cell_gallery_pane_ParamLimits

0x6ecf,	// (0x0002c929) cell_gallery_pane

0xc19c,	// (0x00031bf6) bg_cell_gallery_focus_pane_ParamLimits

0xc19c,	// (0x00031bf6) bg_cell_gallery_focus_pane

0xc1ae,	// (0x00031c08) cell_gallery_pane_g1_ParamLimits

0xc1ae,	// (0x00031c08) cell_gallery_pane_g1

0x6f18,	// (0x0002c972) cell_gallery_pane_g2_ParamLimits

0x6f18,	// (0x0002c972) cell_gallery_pane_g2

0x6f25,	// (0x0002c97f) cell_gallery_pane_g3_ParamLimits

0x6f25,	// (0x0002c97f) cell_gallery_pane_g3

0xc1ba,	// (0x00031c14) cell_gallery_pane_g4_ParamLimits

0xc1ba,	// (0x00031c14) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00035137) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00035137) cell_gallery_pane_g

0xc1c6,	// (0x00031c20) bg_cell_gallery_focus_pane_g1

0xc1ce,	// (0x00031c28) bg_cell_gallery_focus_pane_g2

0xc1d6,	// (0x00031c30) bg_cell_gallery_focus_pane_g3

0xc1de,	// (0x00031c38) bg_cell_gallery_focus_pane_g4

0xc1e6,	// (0x00031c40) bg_cell_gallery_focus_pane_g5

0xc1ee,	// (0x00031c48) bg_cell_gallery_focus_pane_g6

0xc1f6,	// (0x00031c50) bg_cell_gallery_focus_pane_g7

0xc1fe,	// (0x00031c58) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00035140) bg_cell_gallery_focus_pane_g

0xc206,	// (0x00031c60) aid_firma_cardinal

0xc21a,	// (0x00031c74) blid_firmament_pane_t1

0xc231,	// (0x00031c8b) blid_firmament_pane_t2

0xc248,	// (0x00031ca2) blid_firmament_pane_t3

0xc25f,	// (0x00031cb9) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00035151) blid_firmament_pane_t

0xc276,	// (0x00031cd0) blid_sat_info_pane

0xc286,	// (0x00031ce0) blid_sat_info_pane_g1

0xc286,	// (0x00031ce0) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0003515a) blid_sat_info_pane_g

0xc290,	// (0x00031cea) blid_sat_info_pane_t1

0xc29e,	// (0x00031cf8) smil2_volume_content_pane

0xc2a7,	// (0x00031d01) smil2_volume_pane_g1

0xc2af,	// (0x00031d09) smil2_volume_content_pane_g1

0xc2b8,	// (0x00031d12) smil2_volume_content_pane_g2

0xc2c1,	// (0x00031d1b) smil2_volume_content_pane_g3

0xc2ca,	// (0x00031d24) smil2_volume_content_pane_g4

0xc2d3,	// (0x00031d2d) smil2_volume_content_pane_g5

0xc2dc,	// (0x00031d36) smil2_volume_content_pane_g6

0xc2e5,	// (0x00031d3f) smil2_volume_content_pane_g7

0xc2ee,	// (0x00031d48) smil2_volume_content_pane_g8

0xc2f7,	// (0x00031d51) smil2_volume_content_pane_g9

0xc300,	// (0x00031d5a) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0003515f) smil2_volume_content_pane_g

0x302c,	// (0x00028a86) cale_week_day_heading_pane_t1_ParamLimits

0x3059,	// (0x00028ab3) cale_week_day_heading_pane_t2_ParamLimits

0x3086,	// (0x00028ae0) cale_week_day_heading_pane_t3_ParamLimits

0x30b3,	// (0x00028b0d) cale_week_day_heading_pane_t4_ParamLimits

0x30e0,	// (0x00028b3a) cale_week_day_heading_pane_t5_ParamLimits

0x310d,	// (0x00028b67) cale_week_day_heading_pane_t6_ParamLimits

0x313c,	// (0x00028b96) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00034c4b) cale_week_day_heading_pane_t_ParamLimits

0x3169,	// (0x00028bc3) bg_cale_side_pane_ParamLimits

0x0e55,	// (0x000268af) cale_week_time_pane_t1_ParamLimits

0x0e6d,	// (0x000268c7) cale_week_time_pane_t2_ParamLimits

0x0e85,	// (0x000268df) cale_week_time_pane_t3_ParamLimits

0x0e9d,	// (0x000268f7) cale_week_time_pane_t4_ParamLimits

0x0eb5,	// (0x0002690f) cale_week_time_pane_t5_ParamLimits

0x0ecd,	// (0x00026927) cale_week_time_pane_t6_ParamLimits

0x0ee5,	// (0x0002693f) cale_week_time_pane_t7_ParamLimits

0x0efd,	// (0x00026957) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00034c5a) cale_week_time_pane_t_ParamLimits

0x3177,	// (0x00028bd1) cell_cale_week_pane_g2_ParamLimits

0x3169,	// (0x00028bc3) bg_cale_side_pane_cp01_ParamLimits

0x44a1,	// (0x00029efb) cale_month_week_pane_t1_ParamLimits

0x44b8,	// (0x00029f12) cale_month_week_pane_t2_ParamLimits

0x44cf,	// (0x00029f29) cale_month_week_pane_t3_ParamLimits

0x44e6,	// (0x00029f40) cale_month_week_pane_t4_ParamLimits

0x44fd,	// (0x00029f57) cale_month_week_pane_t5_ParamLimits

0x4514,	// (0x00029f6e) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00034d33) cale_month_week_pane_t_ParamLimits

0xaf79,	// (0x000309d3) cell_cale_month_pane_g1_ParamLimits

0x1f6e,	// (0x000279c8) main_cale_event_viewer_pane

0x1f6e,	// (0x000279c8) listscroll_cale_event_viewer_pane

0xc309,	// (0x00031d63) list_cale_ev_pane

0xc311,	// (0x00031d6b) scroll_pane_cp023

0xc31d,	// (0x00031d77) field_cale_ev_pane_ParamLimits

0xc31d,	// (0x00031d77) field_cale_ev_pane

0xc33b,	// (0x00031d95) field_cale_ev_content_pane_ParamLimits

0xc33b,	// (0x00031d95) field_cale_ev_content_pane

0xc347,	// (0x00031da1) field_cale_ev_pane_g1_ParamLimits

0xc347,	// (0x00031da1) field_cale_ev_pane_g1

0xc353,	// (0x00031dad) field_cale_ev_pane_g2_ParamLimits

0xc353,	// (0x00031dad) field_cale_ev_pane_g2

0xc36b,	// (0x00031dc5) field_cale_ev_pane_g3_ParamLimits

0xc36b,	// (0x00031dc5) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00035174) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00035174) field_cale_ev_pane_g

0xc383,	// (0x00031ddd) field_cale_ev_pane_t1_ParamLimits

0xc383,	// (0x00031ddd) field_cale_ev_pane_t1

0xc39a,	// (0x00031df4) field_cale_ev_content_pane_t1_ParamLimits

0xc39a,	// (0x00031df4) field_cale_ev_content_pane_t1

0x57cc,	// (0x0002b226) bg_button_pane_cp01

0x2be4,	// (0x0002863e) listscroll_cale_week_pane_ParamLimits

0x2e1d,	// (0x00028877) popup_toolbar_window_cp01

0x2fc0,	// (0x00028a1a) listscroll_cale_week_pane_t1_ParamLimits

0x2be4,	// (0x0002863e) listscroll_cale_day_pane_ParamLimits

0x46b0,	// (0x0002a10a) popup_toolbar_window_cp02

0x2fc0,	// (0x00028a1a) listscroll_cale_day_pane_t1_ParamLimits

0x2be4,	// (0x0002863e) main_cale_month_pane_ParamLimits

0x6923,	// (0x0002c37d) popup_toolbar_window_cp03_ParamLimits

0x6923,	// (0x0002c37d) popup_toolbar_window_cp03

0x5b7d,	// (0x0002b5d7) main_image_pane_g2_ParamLimits

0x5b7d,	// (0x0002b5d7) main_image_pane_g2

0x5b8e,	// (0x0002b5e8) main_image_pane_g3_ParamLimits

0x5b8e,	// (0x0002b5e8) main_image_pane_g3

0x0002,

0xf50b,	// (0x00034f65) main_image_pane_g_ParamLimits

0xf50b,	// (0x00034f65) main_image_pane_g

0x5b9f,	// (0x0002b5f9) main_image_pane_t1_ParamLimits

0x5bb6,	// (0x0002b610) main_image_pane_t2_ParamLimits

0x5bb6,	// (0x0002b610) main_image_pane_t2

0x5bc8,	// (0x0002b622) main_image_pane_t3_ParamLimits

0x5bc8,	// (0x0002b622) main_image_pane_t3

0x5bf0,	// (0x0002b64a) main_image_pane_t4_ParamLimits

0x5bf0,	// (0x0002b64a) main_image_pane_t4

0x0003,

0xf512,	// (0x00034f6c) main_image_pane_t_ParamLimits

0xf512,	// (0x00034f6c) main_image_pane_t

0x5c10,	// (0x0002b66a) popup_image_details_window_cp01

0x5c1a,	// (0x0002b674) popup_toobar_trans_pane_cp01_ParamLimits

0x5c1a,	// (0x0002b674) popup_toobar_trans_pane_cp01

0x67ce,	// (0x0002c228) popup_image_details_window_ParamLimits

0x67ce,	// (0x0002c228) popup_image_details_window

0xbda0,	// (0x000317fa) popup_image_focus_window

0x0f79,	// (0x000269d3) camera2_autofocus_pane_ParamLimits

0x0f79,	// (0x000269d3) camera2_autofocus_pane

0x1f6e,	// (0x000279c8) bg_popup_sub_pane_cp06

0xc3b8,	// (0x00031e12) popup_image_focus_window_g1

0xc3c0,	// (0x00031e1a) popup_image_focus_window_g2

0xc3c8,	// (0x00031e22) popup_image_focus_window_g3

0xc3d0,	// (0x00031e2a) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0003517b) popup_image_focus_window_g

0xc3d8,	// (0x00031e32) popup_image_focus_window_t1

0xc3e6,	// (0x00031e40) popup_image_focus_window_t2

0xc3f6,	// (0x00031e50) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00035184) popup_image_focus_window_t

0xc404,	// (0x00031e5e) camera2_autofocus_pane_g1

0x21e0,	// (0x00027c3a) bg_tb_trans_pane_cp01

0xc412,	// (0x00031e6c) popup_image_details_window_g1

0xc425,	// (0x00031e7f) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00035196) popup_image_details_window_g

0xc44e,	// (0x00031ea8) popup_image_details_window_t1

0xc460,	// (0x00031eba) popup_image_details_window_t2

0xc479,	// (0x00031ed3) popup_image_details_window_t3

0xc48d,	// (0x00031ee7) popup_image_details_window_t4

0xc4a8,	// (0x00031f02) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0003519d) popup_image_details_window_t

0x2bd0,	// (0x0002862a) bg_calc_paper_pane_ParamLimits

0xae7f,	// (0x000308d9) grid_highlight_pane_cp013

0xae89,	// (0x000308e3) list_calc_pane_ParamLimits

0xae9b,	// (0x000308f5) scroll_pane_cp024

0x2be4,	// (0x0002863e) bg_calc_display_pane_ParamLimits

0x0dac,	// (0x00026806) calc_display_pane_t1_ParamLimits

0x0dbe,	// (0x00026818) calc_display_pane_t2_ParamLimits

0xaea3,	// (0x000308fd) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00034bcd) calc_display_pane_t_ParamLimits

0x0e1f,	// (0x00026879) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00034bea) cell_calc_pane_g

0x0e28,	// (0x00026882) cell_calc_pane_t1

0x2c9a,	// (0x000286f4) grid_highlight_pane_cp02_ParamLimits

0x2cb0,	// (0x0002870a) toolbar_button_pane_cp01_ParamLimits

0x2cb0,	// (0x0002870a) toolbar_button_pane_cp01

0x5c5c,	// (0x0002b6b6) temp_image_control_pane_ParamLimits

0x5c5c,	// (0x0002b6b6) temp_image_control_pane

0x21e0,	// (0x00027c3a) main_mp3_pane

0xc4c2,	// (0x00031f1c) temp_image_control_pane_g1_ParamLimits

0xc4c2,	// (0x00031f1c) temp_image_control_pane_g1

0xc4d0,	// (0x00031f2a) temp_image_control_pane_g2_ParamLimits

0xc4d0,	// (0x00031f2a) temp_image_control_pane_g2

0xc4e2,	// (0x00031f3c) temp_image_control_pane_g3_ParamLimits

0xc4e2,	// (0x00031f3c) temp_image_control_pane_g3

0x6f62,	// (0x0002c9bc) temp_image_control_pane_g4_ParamLimits

0x6f62,	// (0x0002c9bc) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x000351a8) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x000351a8) temp_image_control_pane_g

0xc4c2,	// (0x00031f1c) main_mp3_pane_g1

0x6f75,	// (0x0002c9cf) main_mp3_pane_g2

0x0007,

0xf757,	// (0x000351b1) main_mp3_pane_g

0xc525,	// (0x00031f7f) main_mp3_pane_t1

0x32ed,	// (0x00028d47) main_camera_pane_g8_ParamLimits

0x32ed,	// (0x00028d47) main_camera_pane_g8

0x349e,	// (0x00028ef8) main_video_pane_g7_ParamLimits

0x349e,	// (0x00028ef8) main_video_pane_g7

0xbead,	// (0x00031907) main_camera2_pane_t7_ParamLimits

0xbead,	// (0x00031907) main_camera2_pane_t7

0x3b84,	// (0x000295de) scroll_pane_cp025_ParamLimits

0x3b84,	// (0x000295de) scroll_pane_cp025

0x3b98,	// (0x000295f2) scroll_pane_cp026_ParamLimits

0x3b98,	// (0x000295f2) scroll_pane_cp026

0x3ba7,	// (0x00029601) wml_content_pane_ParamLimits

0x1f6e,	// (0x000279c8) main_touch_calib_pane

0x703f,	// (0x0002ca99) main_touch_calib_pane_g1

0x704b,	// (0x0002caa5) main_touch_calib_pane_g2

0x7057,	// (0x0002cab1) main_touch_calib_pane_g3

0x7063,	// (0x0002cabd) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x000351cf) main_touch_calib_pane_g

0x706f,	// (0x0002cac9) main_touch_calib_pane_t1

0x7089,	// (0x0002cae3) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x000351d8) main_touch_calib_pane_t

0x503c,	// (0x0002aa96) mup_progress_pane_cp02

0x505b,	// (0x0002aab5) navi_pane_g1

0x5114,	// (0x0002ab6e) navi_pane_mp_t3

0x21e0,	// (0x00027c3a) main_mp3_pane_ParamLimits

0x6961,	// (0x0002c3bb) navi_pane_ParamLimits

0xc4c2,	// (0x00031f1c) main_mp3_pane_g1_ParamLimits

0x6f75,	// (0x0002c9cf) main_mp3_pane_g2_ParamLimits

0x6f83,	// (0x0002c9dd) main_mp3_pane_g3_ParamLimits

0x6f83,	// (0x0002c9dd) main_mp3_pane_g3

0x6f91,	// (0x0002c9eb) main_mp3_pane_g4_ParamLimits

0x6f91,	// (0x0002c9eb) main_mp3_pane_g4

0xc4f2,	// (0x00031f4c) main_mp3_pane_g5_ParamLimits

0xc4f2,	// (0x00031f4c) main_mp3_pane_g5

0xc500,	// (0x00031f5a) main_mp3_pane_g6_ParamLimits

0xc500,	// (0x00031f5a) main_mp3_pane_g6

0xc50d,	// (0x00031f67) main_mp3_pane_g7_ParamLimits

0xc50d,	// (0x00031f67) main_mp3_pane_g7

0xc519,	// (0x00031f73) main_mp3_pane_g8_ParamLimits

0xc519,	// (0x00031f73) main_mp3_pane_g8

0xf757,	// (0x000351b1) main_mp3_pane_g_ParamLimits

0x6f9d,	// (0x0002c9f7) main_mp3_pane_t2

0x6fab,	// (0x0002ca05) main_mp3_pane_t3

0xc533,	// (0x00031f8d) main_mp3_pane_t4

0xc541,	// (0x00031f9b) main_mp3_pane_t5

0x0005,

0xf768,	// (0x000351c2) main_mp3_pane_t

0xc54f,	// (0x00031fa9) mup_progress_pane_cp01

0x1fbc,	// (0x00027a16) aid_zoom_text_secondary2

0xc309,	// (0x00031d63) list_cale_ev2_pane

0xc311,	// (0x00031d6b) scroll_pane_cp023_ParamLimits

0x70df,	// (0x0002cb39) field_cale_ev2_pane_ParamLimits

0x70df,	// (0x0002cb39) field_cale_ev2_pane

0x70ff,	// (0x0002cb59) field_cale_ev2_pane_g1_ParamLimits

0x70ff,	// (0x0002cb59) field_cale_ev2_pane_g1

0x710b,	// (0x0002cb65) field_cale_ev2_pane_g2_ParamLimits

0x710b,	// (0x0002cb65) field_cale_ev2_pane_g2

0x7123,	// (0x0002cb7d) field_cale_ev2_pane_g3_ParamLimits

0x7123,	// (0x0002cb7d) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x000351e3) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x000351e3) field_cale_ev2_pane_g

0x713b,	// (0x0002cb95) field_cale_ev2_pane_t1_ParamLimits

0x713b,	// (0x0002cb95) field_cale_ev2_pane_t1

0x7152,	// (0x0002cbac) field_cale_ev2_pane_t2_ParamLimits

0x7152,	// (0x0002cbac) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x000351ec) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x000351ec) field_cale_ev2_pane_t

0x594c,	// (0x0002b3a6) main_postcard_pane_g5_ParamLimits

0x594c,	// (0x0002b3a6) main_postcard_pane_g5

0x5962,	// (0x0002b3bc) main_postcard_pane_g6_ParamLimits

0x5962,	// (0x0002b3bc) main_postcard_pane_g6

0x3238,	// (0x00028c92) camera2_autofocus_pane_cp_ParamLimits

0x3238,	// (0x00028c92) camera2_autofocus_pane_cp

0x21e0,	// (0x00027c3a) main_mup3_pane

0x7187,	// (0x0002cbe1) main_mup3_pane_g1_ParamLimits

0x7187,	// (0x0002cbe1) main_mup3_pane_g1

0x71a9,	// (0x0002cc03) main_mup3_pane_g2_ParamLimits

0x71a9,	// (0x0002cc03) main_mup3_pane_g2

0x7227,	// (0x0002cc81) main_mup3_pane_g3_ParamLimits

0x7227,	// (0x0002cc81) main_mup3_pane_g3

0x7269,	// (0x0002ccc3) main_mup3_pane_g4_ParamLimits

0x7269,	// (0x0002ccc3) main_mup3_pane_g4

0x72ab,	// (0x0002cd05) main_mup3_pane_g5_ParamLimits

0x72ab,	// (0x0002cd05) main_mup3_pane_g5

0x72ed,	// (0x0002cd47) main_mup3_pane_g6_ParamLimits

0x72ed,	// (0x0002cd47) main_mup3_pane_g6

0xc563,	// (0x00031fbd) main_mup3_pane_g7_ParamLimits

0xc563,	// (0x00031fbd) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x000351fc) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x000351fc) main_mup3_pane_g

0x7367,	// (0x0002cdc1) main_mup3_pane_t1_ParamLimits

0x7367,	// (0x0002cdc1) main_mup3_pane_t1

0x73d7,	// (0x0002ce31) main_mup3_pane_t2_ParamLimits

0x73d7,	// (0x0002ce31) main_mup3_pane_t2

0x74a7,	// (0x0002cf01) main_mup3_pane_t4_ParamLimits

0x74a7,	// (0x0002cf01) main_mup3_pane_t4

0x74fd,	// (0x0002cf57) main_mup3_pane_t5_ParamLimits

0x74fd,	// (0x0002cf57) main_mup3_pane_t5

0x75b1,	// (0x0002d00b) main_mup3_pane_t6_ParamLimits

0x75b1,	// (0x0002d00b) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0003520d) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0003520d) main_mup3_pane_t

0x7665,	// (0x0002d0bf) mup3_progress_pane_ParamLimits

0x7665,	// (0x0002d0bf) mup3_progress_pane

0x76e7,	// (0x0002d141) popup_mup3_control_window_ParamLimits

0x76e7,	// (0x0002d141) popup_mup3_control_window

0xc571,	// (0x00031fcb) popup_mup3_text_window

0x7719,	// (0x0002d173) mup3_progress_pane_t1

0x7730,	// (0x0002d18a) mup3_progress_pane_t2

0xc579,	// (0x00031fd3) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0003521a) mup3_progress_pane_t

0xc590,	// (0x00031fea) mup_progress_pane_cp03

0x1f6e,	// (0x000279c8) bg_tb_trans_pane_cp04

0x7747,	// (0x0002d1a1) mup3_volume_pane

0x774f,	// (0x0002d1a9) popup_mup3_control_window_g1

0x7758,	// (0x0002d1b2) mup3_volume_pane_g1

0x7761,	// (0x0002d1bb) mup3_volume_pane_g2

0x776a,	// (0x0002d1c4) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00035221) mup3_volume_pane_g

0x1f6e,	// (0x000279c8) bg_tb_trans_pane_cp03

0xc5a0,	// (0x00031ffa) popup_mup3_text_window_g1

0xc5a8,	// (0x00032002) popup_mup3_text_window_t1

0x2c83,	// (0x000286dd) list_calc_item_pane_g1_ParamLimits

0xbf95,	// (0x000319ef) mup_volume_pane_cp_g1

0x70a3,	// (0x0002cafd) main_touch_calib_pane_t3

0x70b7,	// (0x0002cb11) main_touch_calib_pane_t4

0x70cb,	// (0x0002cb25) main_touch_calib_pane_t5

0x1f78,	// (0x000279d2) aid_cell_size_toolbar2

0x1f80,	// (0x000279da) aid_popup3_width_pane

0x1fbc,	// (0x00027a16) aid_zoom_text_msg_primary

0xaf63,	// (0x000309bd) vorec_t7

0x2bf0,	// (0x0002864a) bg_calc_paper_pane_g1_ParamLimits

0x2bfc,	// (0x00028656) bg_calc_paper_pane_g2_ParamLimits

0x2c08,	// (0x00028662) bg_calc_paper_pane_g3_ParamLimits

0x2c14,	// (0x0002866e) bg_calc_paper_pane_g4_ParamLimits

0x2c20,	// (0x0002867a) bg_calc_paper_pane_g5_ParamLimits

0x2c2c,	// (0x00028686) bg_calc_paper_pane_g6_ParamLimits

0x2c3b,	// (0x00028695) bg_calc_paper_pane_g7_ParamLimits

0x2c4a,	// (0x000286a4) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00034bd4) bg_calc_paper_pane_g_ParamLimits

0x2c5d,	// (0x000286b7) calc_bg_paper_pane_g9_ParamLimits

0x3392,	// (0x00028dec) image_qvga_pane_ParamLimits

0x3392,	// (0x00028dec) image_qvga_pane

0x2912,	// (0x0002836c) bg_popup_sub_pane_cp04_ParamLimits

0x5adb,	// (0x0002b535) popup_mup_playback_window_g1_ParamLimits

0x5ae7,	// (0x0002b541) popup_mup_playback_window_t1_ParamLimits

0x5afc,	// (0x0002b556) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00034f60) popup_mup_playback_window_t_ParamLimits

0x6c05,	// (0x0002c65f) main_mup2_pane_g3_ParamLimits

0x6c05,	// (0x0002c65f) main_mup2_pane_g3

0x3819,	// (0x00029273) popup_toolbar_window_cp04

0x62de,	// (0x0002bd38) popup_call2_audio_second_window_g3_ParamLimits

0x62de,	// (0x0002bd38) popup_call2_audio_second_window_g3

0xb3a0,	// (0x00030dfa) popup_call2_audio_first_window_g4_ParamLimits

0xb3a0,	// (0x00030dfa) popup_call2_audio_first_window_g4

0xba1f,	// (0x00031479) popup_call2_audio_in_window_g4_ParamLimits

0xba1f,	// (0x00031479) popup_call2_audio_in_window_g4

0x5b11,	// (0x0002b56b) aid_area_sk_bg_cut_ParamLimits

0x5b11,	// (0x0002b56b) aid_area_sk_bg_cut

0x5b2f,	// (0x0002b589) aid_area_sk_bg_cut_2_ParamLimits

0x5b2f,	// (0x0002b589) aid_area_sk_bg_cut_2

0x6f08,	// (0x0002c962) aid_placing_details_win

0x6f10,	// (0x0002c96a) aid_placing_details_win_2

0xc404,	// (0x00031e5e) camera2_autofocus_pane_g1_ParamLimits

0x2181,	// (0x00027bdb) popup_fixed_preview_cale_window_ParamLimits

0x2181,	// (0x00027bdb) popup_fixed_preview_cale_window

0x51d0,	// (0x0002ac2a) navi_slider_pane_g3

0x51d9,	// (0x0002ac33) navi_slider_pane_g4

0x51e2,	// (0x0002ac3c) navi_slider_pane_g5

0x51d0,	// (0x0002ac2a) navi_slider_pane_g6

0xb023,	// (0x00030a7d) navi_slider_pane_g7

0x56fb,	// (0x0002b155) mup_scale_pane_g3

0x5704,	// (0x0002b15e) mup_scale_pane_g4

0x570d,	// (0x0002b167) mup_scale_pane_g5

0x5716,	// (0x0002b170) mup_scale_pane_g6

0x571f,	// (0x0002b179) mup_scale_pane_g7

0x51d0,	// (0x0002ac2a) cams2_slider_pane_g3

0xc04a,	// (0x00031aa4) cams2_slider_pane_g4

0xc052,	// (0x00031aac) cams2_slider_pane_g5

0x51d0,	// (0x0002ac2a) cams2_slider_pane_g6

0xc05a,	// (0x00031ab4) cams2_slider_pane_g7

0xc286,	// (0x00031ce0) camera2_autofocus_pane_cp_g1

0xc5b6,	// (0x00032010) bg_popup_preview_window_pane_cp02_ParamLimits

0xc5b6,	// (0x00032010) bg_popup_preview_window_pane_cp02

0xc5c2,	// (0x0003201c) list_fp_cale_pane_ParamLimits

0xc5c2,	// (0x0003201c) list_fp_cale_pane

0xc5ce,	// (0x00032028) popup_fixed_preview_cale_window_t1_ParamLimits

0xc5ce,	// (0x00032028) popup_fixed_preview_cale_window_t1

0x7773,	// (0x0002d1cd) popup_fixed_preview_cale_window_t2_ParamLimits

0x7773,	// (0x0002d1cd) popup_fixed_preview_cale_window_t2

0x7788,	// (0x0002d1e2) popup_fixed_preview_cale_window_t3_ParamLimits

0x7788,	// (0x0002d1e2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00035228) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00035228) popup_fixed_preview_cale_window_t

0x779d,	// (0x0002d1f7) list_single_fp_cale_pane_ParamLimits

0x779d,	// (0x0002d1f7) list_single_fp_cale_pane

0xc5ec,	// (0x00032046) list_single_fp_cale_pane_g1_ParamLimits

0xc5ec,	// (0x00032046) list_single_fp_cale_pane_g1

0xc5f8,	// (0x00032052) list_single_fp_cale_pane_g2_ParamLimits

0xc5f8,	// (0x00032052) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0003522f) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0003522f) list_single_fp_cale_pane_g

0xc611,	// (0x0003206b) list_single_fp_cale_pane_t1_ParamLimits

0xc611,	// (0x0003206b) list_single_fp_cale_pane_t1

0xc623,	// (0x0003207d) list_single_fp_cale_pane_t2_ParamLimits

0xc623,	// (0x0003207d) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00035236) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00035236) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1f6e,	// (0x000279c8) main_dialer_pane

0x77b2,	// (0x0002d20c) aid_cell_size_keypad

0x77bc,	// (0x0002d216) dialer_ne_pane

0x77c4,	// (0x0002d21e) grid_dialer_command_1_pane

0x77cc,	// (0x0002d226) grid_dialer_command_2_pane

0x77d4,	// (0x0002d22e) grid_dialer_keypad_pane

0x77e6,	// (0x0002d240) bg_popup_call_pane_cp06_ParamLimits

0x77e6,	// (0x0002d240) bg_popup_call_pane_cp06

0x77f2,	// (0x0002d24c) dialer_ne_clear_pane_ParamLimits

0x77f2,	// (0x0002d24c) dialer_ne_clear_pane

0xc656,	// (0x000320b0) dialer_ne_pane_g1

0xc65e,	// (0x000320b8) dialer_ne_pane_t1_ParamLimits

0xc65e,	// (0x000320b8) dialer_ne_pane_t1

0x77fe,	// (0x0002d258) dialer_ne_pane_t2_ParamLimits

0x77fe,	// (0x0002d258) dialer_ne_pane_t2

0x7828,	// (0x0002d282) dialer_ne_pane_t3_ParamLimits

0x7828,	// (0x0002d282) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0003523b) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0003523b) dialer_ne_pane_t

0x7858,	// (0x0002d2b2) dialer_ne_pane_t3_copy1_ParamLimits

0x7858,	// (0x0002d2b2) dialer_ne_pane_t3_copy1

0x7887,	// (0x0002d2e1) cell_dialer_keypad_pane_ParamLimits

0x7887,	// (0x0002d2e1) cell_dialer_keypad_pane

0x789e,	// (0x0002d2f8) cell_dialer_command_1_pane_ParamLimits

0x789e,	// (0x0002d2f8) cell_dialer_command_1_pane

0x78b4,	// (0x0002d30e) cell_dialer_command_2_pane_ParamLimits

0x78b4,	// (0x0002d30e) cell_dialer_command_2_pane

0xc670,	// (0x000320ca) bg_button_pane_cp02_ParamLimits

0xc670,	// (0x000320ca) bg_button_pane_cp02

0x78c3,	// (0x0002d31d) cell_dialer_keypad_pane_g1_ParamLimits

0x78c3,	// (0x0002d31d) cell_dialer_keypad_pane_g1

0xc670,	// (0x000320ca) bg_button_pane_cp03_ParamLimits

0xc670,	// (0x000320ca) bg_button_pane_cp03

0x78d7,	// (0x0002d331) cell_dialer_command_1_pane_g1_ParamLimits

0x78d7,	// (0x0002d331) cell_dialer_command_1_pane_g1

0xc67c,	// (0x000320d6) bg_button_pane_cp04

0x78eb,	// (0x0002d345) cell_dialer_command_2_pane_g1

0x51bf,	// (0x0002ac19) bg_button_pane_cp06

0xc684,	// (0x000320de) dialer_ne_clear_pane_g1

0x5067,	// (0x0002aac1) navi_pane_g2

0x5095,	// (0x0002aaef) navi_pane_g3

0x0002,

0xf409,	// (0x00034e63) navi_pane_g

0x5122,	// (0x0002ab7c) navi_pane_mv_g2

0x5149,	// (0x0002aba3) navi_pane_mv_g5

0x5151,	// (0x0002abab) navi_pane_mv_t1

0x2be4,	// (0x0002863e) main_clock2_pane

0x791f,	// (0x0002d379) main_clock2_list_pane_ParamLimits

0x791f,	// (0x0002d379) main_clock2_list_pane

0x7955,	// (0x0002d3af) main_clock2_pane_t1_ParamLimits

0x7955,	// (0x0002d3af) main_clock2_pane_t1

0x7991,	// (0x0002d3eb) main_clock2_pane_t2_ParamLimits

0x7991,	// (0x0002d3eb) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00035242) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00035242) main_clock2_pane_t

0x7a1b,	// (0x0002d475) popup_clock_analogue_window_cp03_ParamLimits

0x7a1b,	// (0x0002d475) popup_clock_analogue_window_cp03

0x7a40,	// (0x0002d49a) popup_clock_digital_window_cp02_ParamLimits

0x7a40,	// (0x0002d49a) popup_clock_digital_window_cp02

0x7ab1,	// (0x0002d50b) main_clock2_list_single_pane_ParamLimits

0x7ab1,	// (0x0002d50b) main_clock2_list_single_pane

0x51bf,	// (0x0002ac19) list_highlight_pane_cp05

0xc68c,	// (0x000320e6) main_clock2_list_single_pane_t1

0x3819,	// (0x00029273) popup_toolbar_window_cp04_ParamLimits

0x6f32,	// (0x0002c98c) camera2_autofocus_pane_g2_ParamLimits

0x6f32,	// (0x0002c98c) camera2_autofocus_pane_g2

0x6f3e,	// (0x0002c998) camera2_autofocus_pane_g3_ParamLimits

0x6f3e,	// (0x0002c998) camera2_autofocus_pane_g3

0x6f4a,	// (0x0002c9a4) camera2_autofocus_pane_g4_ParamLimits

0x6f4a,	// (0x0002c9a4) camera2_autofocus_pane_g4

0x6f56,	// (0x0002c9b0) camera2_autofocus_pane_g5_ParamLimits

0x6f56,	// (0x0002c9b0) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0003518b) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0003518b) camera2_autofocus_pane_g

0x7167,	// (0x0002cbc1) camera2_autofocus_pane_cp_g2

0x716f,	// (0x0002cbc9) camera2_autofocus_pane_cp_g3

0x7177,	// (0x0002cbd1) camera2_autofocus_pane_cp_g4

0x717f,	// (0x0002cbd9) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x000351f1) camera2_autofocus_pane_cp_g

0x77de,	// (0x0002d238) popup_dialer_spcha_window

0x1f6e,	// (0x000279c8) bg_popup_sub_pane_cp07

0xc69a,	// (0x000320f4) list_spcha_pane

0xc6a2,	// (0x000320fc) list_single_spcha_pane_ParamLimits

0xc6a2,	// (0x000320fc) list_single_spcha_pane

0x1f6e,	// (0x000279c8) list_highlight_pane_cp06

0xc6b3,	// (0x0003210d) list_single_spcha_pane_t1

0xb7c9,	// (0x00031223) popup_call2_audio_out_window_g4_ParamLimits

0xb7c9,	// (0x00031223) popup_call2_audio_out_window_g4

0x1f6e,	// (0x000279c8) main_imed2_pane

0xbda8,	// (0x00031802) popup_imed_adjust2_window

0x67e6,	// (0x0002c240) popup_imed_trans_window_ParamLimits

0x67e6,	// (0x0002c240) popup_imed_trans_window

0xc0c4,	// (0x00031b1e) popup_blid_sat_info2_window_t1

0xc0d2,	// (0x00031b2c) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00035120) popup_blid_sat_info2_window_t

0x7ae3,	// (0x0002d53d) aid_size_cell_colour_35

0x7b03,	// (0x0002d55d) aid_size_cell_colour_112

0x7b23,	// (0x0002d57d) aid_size_cell_effect

0xbd80,	// (0x000317da) bg_tb_trans_pane_cp02

0x4804,	// (0x0002a25e) heading_imed_pane

0x7b43,	// (0x0002d59d) listscroll_imed_pane

0xc6c1,	// (0x0003211b) heading_imed_pane_g1

0xc6c9,	// (0x00032123) heading_imed_pane_t1

0xc6d7,	// (0x00032131) grid_imed_colour_35_pane_ParamLimits

0xc6d7,	// (0x00032131) grid_imed_colour_35_pane

0x7b4f,	// (0x0002d5a9) grid_imed_effect_pane

0xc6ee,	// (0x00032148) list_imed_aspect_pane

0x7b65,	// (0x0002d5bf) scroll_pane_cp027_ParamLimits

0x7b65,	// (0x0002d5bf) scroll_pane_cp027

0x7b76,	// (0x0002d5d0) cell_imed_effect_pane_ParamLimits

0x7b76,	// (0x0002d5d0) cell_imed_effect_pane

0xc6f6,	// (0x00032150) cell_imed_colour_pane_ParamLimits

0xc6f6,	// (0x00032150) cell_imed_colour_pane

0xc738,	// (0x00032192) cell_imed_colour_pane_g1_ParamLimits

0xc738,	// (0x00032192) cell_imed_colour_pane_g1

0xc749,	// (0x000321a3) hgihlgiht_grid_pane_cp016_ParamLimits

0xc749,	// (0x000321a3) hgihlgiht_grid_pane_cp016

0x7b9d,	// (0x0002d5f7) cell_imed_effect_pane_g1

0x7ba5,	// (0x0002d5ff) grid_highlight_pane_cp017

0xc75a,	// (0x000321b4) list_imed_single_pane_ParamLimits

0xc75a,	// (0x000321b4) list_imed_single_pane

0x1f6e,	// (0x000279c8) list_highlight_pane_cp07

0xc76f,	// (0x000321c9) list_imed_aspect_pane_comp1_t1

0xbd80,	// (0x000317da) bg_tb_trans_pane_cp05

0xc791,	// (0x000321eb) popup_imed_adjust2_window_g1

0xc7b8,	// (0x00032212) popup_imed_adjust2_window_t1

0xc7d0,	// (0x0003222a) slider_imed_adjust_pane

0xc7e4,	// (0x0003223e) slider_imed_adjust_pane_g1

0xc7f4,	// (0x0003224e) slider_imed_adjust_pane_g2

0xc804,	// (0x0003225e) slider_imed_adjust_pane_g3

0xc815,	// (0x0003226f) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0003525f) slider_imed_adjust_pane_g

0x7bae,	// (0x0002d608) aid_size_cell_clipart2

0x7bba,	// (0x0002d614) grid_imed_clipart_pane

0xc826,	// (0x00032280) scroll_pane_cp031

0x7bc4,	// (0x0002d61e) cell_imed_clipart_pane_ParamLimits

0x7bc4,	// (0x0002d61e) cell_imed_clipart_pane

0x7be6,	// (0x0002d640) cell_imed_clipart_pane_g1

0x1f6e,	// (0x000279c8) grid_highlight_pane_cp014

0x7934,	// (0x0002d38e) main_clock2_pane_g1_ParamLimits

0x7934,	// (0x0002d38e) main_clock2_pane_g1

0x7a5c,	// (0x0002d4b6) aid_call2_pane_cp10

0x7a6e,	// (0x0002d4c8) aid_call_pane_cp10

0x4f79,	// (0x0002a9d3) popup_clock_analogue_window_cp10_g1

0x4f79,	// (0x0002a9d3) popup_clock_analogue_window_cp10_g2

0x7a80,	// (0x0002d4da) popup_clock_analogue_window_cp10_g3

0x7a80,	// (0x0002d4da) popup_clock_analogue_window_cp10_g4

0x4f79,	// (0x0002a9d3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0003524d) popup_clock_analogue_window_cp10_g

0x7a92,	// (0x0002d4ec) popup_clock_analogue_window_cp10_t1

0x1450,	// (0x00026eaa) clock_digital_number_pane_cp10_ParamLimits

0x1450,	// (0x00026eaa) clock_digital_number_pane_cp10

0x1468,	// (0x00026ec2) clock_digital_number_pane_cp11_ParamLimits

0x1468,	// (0x00026ec2) clock_digital_number_pane_cp11

0x1480,	// (0x00026eda) clock_digital_number_pane_cp12_ParamLimits

0x1480,	// (0x00026eda) clock_digital_number_pane_cp12

0x1498,	// (0x00026ef2) clock_digital_number_pane_cp13_ParamLimits

0x1498,	// (0x00026ef2) clock_digital_number_pane_cp13

0x14b0,	// (0x00026f0a) clock_digital_separator_pane_cp10_ParamLimits

0x14b0,	// (0x00026f0a) clock_digital_separator_pane_cp10

0x7ac3,	// (0x0002d51d) popup_clock_digital_window_cp02_t1_ParamLimits

0x7ac3,	// (0x0002d51d) popup_clock_digital_window_cp02_t1

0x290a,	// (0x00028364) clock_digital_number_pane_cp10_g1

0x290a,	// (0x00028364) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00035268) clock_digital_number_pane_cp10_g

0x290a,	// (0x00028364) clock_digital_separator_pane_cp10_g1

0x290a,	// (0x00028364) clock_digital_separator_pane_g2_cp10

0x518f,	// (0x0002abe9) navi_pane_vded_g4

0x5198,	// (0x0002abf2) navi_pane_vded_g5

0x51a1,	// (0x0002abfb) navi_pane_vded_t1

0x1f6e,	// (0x000279c8) main_vded_pane

0x7bef,	// (0x0002d649) main_vded_pane_g1

0x7bf9,	// (0x0002d653) main_vded_pane_g2

0x7c03,	// (0x0002d65d) main_vded_pane_g3

0x0002,

0xf813,	// (0x0003526d) main_vded_pane_g

0x7c0d,	// (0x0002d667) main_vded_pane_t1

0x7c1b,	// (0x0002d675) main_vded_pane_t2

0x0001,

0xf81a,	// (0x00035274) main_vded_pane_t

0x7c29,	// (0x0002d683) vded_slider_pane

0x7c31,	// (0x0002d68b) vded_video_pane

0xc82e,	// (0x00032288) vded_video_pane_g1

0x7c39,	// (0x0002d693) vded_video_pane_g2

0xc286,	// (0x00031ce0) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00035279) vded_video_pane_g

0xc838,	// (0x00032292) vded_slider_pane_g1

0xbf95,	// (0x000319ef) vded_slider_pane_g2

0xc841,	// (0x0003229b) vded_slider_pane_g3

0xc84a,	// (0x000322a4) vded_slider_pane_g4

0xc853,	// (0x000322ad) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00035280) vded_slider_pane_g

0x76cf,	// (0x0002d129) mup3_rocker_pane_ParamLimits

0x76cf,	// (0x0002d129) mup3_rocker_pane

0x7c42,	// (0x0002d69c) mup3_control_keys_pane_g1

0x7c4a,	// (0x0002d6a4) mup3_control_keys_pane_g2

0x7c52,	// (0x0002d6ac) mup3_control_keys_pane_g3

0x7c5a,	// (0x0002d6b4) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0003528b) mup3_control_keys_pane_g

0x21c2,	// (0x00027c1c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x21c2,	// (0x00027c1c) popup_toolbar2_fixed_window_cp01

0x7703,	// (0x0002d15d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7703,	// (0x0002d15d) popup_toolbar2_fixed_window_cp02

0xb108,	// (0x00030b62) popup_call2_audio_second_window_t4_ParamLimits

0xb108,	// (0x00030b62) popup_call2_audio_second_window_t4

0xb636,	// (0x00031090) popup_call2_audio_first_window_t6_ParamLimits

0xb636,	// (0x00031090) popup_call2_audio_first_window_t6

0xb8cc,	// (0x00031326) popup_call2_audio_out_window_t6_ParamLimits

0xb8cc,	// (0x00031326) popup_call2_audio_out_window_t6

0x1f6e,	// (0x000279c8) main_vitu_pane

0x7c6a,	// (0x0002d6c4) aid_size_cell_itu_ParamLimits

0x7c6a,	// (0x0002d6c4) aid_size_cell_itu

0x21e0,	// (0x00027c3a) bg_popup_window_pane_cp08_ParamLimits

0x21e0,	// (0x00027c3a) bg_popup_window_pane_cp08

0x7c80,	// (0x0002d6da) field_vitu_entry_pane_ParamLimits

0x7c80,	// (0x0002d6da) field_vitu_entry_pane

0x7c97,	// (0x0002d6f1) grid_vitu_function_pane_ParamLimits

0x7c97,	// (0x0002d6f1) grid_vitu_function_pane

0x7cb2,	// (0x0002d70c) grid_vitu_itu_pane_ParamLimits

0x7cb2,	// (0x0002d70c) grid_vitu_itu_pane

0x7cd0,	// (0x0002d72a) cell_vitu_itu_pane_ParamLimits

0x7cd0,	// (0x0002d72a) cell_vitu_itu_pane

0x7cf2,	// (0x0002d74c) cell_vitu_function_pane_ParamLimits

0x7cf2,	// (0x0002d74c) cell_vitu_function_pane

0x21e0,	// (0x00027c3a) bg_popup_sub_pane_cp08_ParamLimits

0x21e0,	// (0x00027c3a) bg_popup_sub_pane_cp08

0x7d0b,	// (0x0002d765) field_vitu_entry_pane_t1_ParamLimits

0x7d0b,	// (0x0002d765) field_vitu_entry_pane_t1

0xc874,	// (0x000322ce) field_vitu_entry_pane_t2_ParamLimits

0xc874,	// (0x000322ce) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00035299) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00035299) field_vitu_entry_pane_t

0xc891,	// (0x000322eb) bg_button_pane_cp05_ParamLimits

0xc891,	// (0x000322eb) bg_button_pane_cp05

0x7d29,	// (0x0002d783) cell_vitu_itu_pane_g1

0x7d41,	// (0x0002d79b) cell_vitu_itu_pane_t1_ParamLimits

0x7d41,	// (0x0002d79b) cell_vitu_itu_pane_t1

0x7d53,	// (0x0002d7ad) cell_vitu_itu_pane_t2_ParamLimits

0x7d53,	// (0x0002d7ad) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0003529e) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0003529e) cell_vitu_itu_pane_t

0xc89f,	// (0x000322f9) bg_button_pane_cp07

0x7d88,	// (0x0002d7e2) cell_vitu_function_pane_g1

0xae77,	// (0x000308d1) main_calc_pane_g1

0x1fb0,	// (0x00027a0a) aid_visual_content_pane

0x1f6e,	// (0x000279c8) main_vradio_pane

0x7d91,	// (0x0002d7eb) main_vradio_pane_g1_ParamLimits

0x7d91,	// (0x0002d7eb) main_vradio_pane_g1

0xc8a9,	// (0x00032303) main_vradio_pane_g2_ParamLimits

0xc8a9,	// (0x00032303) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x000352a5) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x000352a5) main_vradio_pane_g

0x7daa,	// (0x0002d804) main_vradio_pane_t1_ParamLimits

0x7daa,	// (0x0002d804) main_vradio_pane_t1

0x7dbf,	// (0x0002d819) main_vradio_pane_t2_ParamLimits

0x7dbf,	// (0x0002d819) main_vradio_pane_t2

0xc8b6,	// (0x00032310) main_vradio_pane_t3_ParamLimits

0xc8b6,	// (0x00032310) main_vradio_pane_t3

0x0002,

0xf850,	// (0x000352aa) main_vradio_pane_t_ParamLimits

0xf850,	// (0x000352aa) main_vradio_pane_t

0x7dd4,	// (0x0002d82e) vradio_rocker_control_pane_ParamLimits

0x7dd4,	// (0x0002d82e) vradio_rocker_control_pane

0x7de6,	// (0x0002d840) vradio_station_info_pane_ParamLimits

0x7de6,	// (0x0002d840) vradio_station_info_pane

0xc8ca,	// (0x00032324) vradio_frequency_info_pane_ParamLimits

0xc8ca,	// (0x00032324) vradio_frequency_info_pane

0xc286,	// (0x00031ce0) vradio_station_info_pane_g1

0xc8d9,	// (0x00032333) vradio_station_info_pane_t1_ParamLimits

0xc8d9,	// (0x00032333) vradio_station_info_pane_t1

0xc8fb,	// (0x00032355) vradio_station_info_pane_t2_ParamLimits

0xc8fb,	// (0x00032355) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x000352b1) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x000352b1) vradio_station_info_pane_t

0xc90d,	// (0x00032367) vradio_tuning_pane

0xc915,	// (0x0003236f) vradio_rocker_control_pane_g1

0xc91d,	// (0x00032377) vradio_rocker_control_pane_g2

0xc925,	// (0x0003237f) vradio_rocker_control_pane_g3

0xc92d,	// (0x00032387) vradio_rocker_control_pane_g4

0xc935,	// (0x0003238f) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x000352b6) vradio_rocker_control_pane_g

0x7df8,	// (0x0002d852) vradio_frequency_info_pane_g1

0xc93d,	// (0x00032397) vradio_frequency_info_pane_t1_ParamLimits

0xc93d,	// (0x00032397) vradio_frequency_info_pane_t1

0x7e02,	// (0x0002d85c) vradio_tuning_pane_g1

0x7e0d,	// (0x0002d867) vradio_tuning_pane_t1

0x2005,	// (0x00027a5f) area_side_right_pane_ParamLimits

0x2005,	// (0x00027a5f) area_side_right_pane

0xbd47,	// (0x000317a1) status_small_pane_g1

0xbd4f,	// (0x000317a9) status_small_pane_g2

0xbd58,	// (0x000317b2) status_small_pane_g3

0xbd61,	// (0x000317bb) status_small_pane_g4

0x0003,

0xf61c,	// (0x00035076) status_small_pane_g

0xbd6a,	// (0x000317c4) status_small_pane_t1

0x1f6e,	// (0x000279c8) main_video3_pane

0xc951,	// (0x000323ab) cams_zoom_vslider_pane

0xc959,	// (0x000323b3) image3_wide_pane_ParamLimits

0xc959,	// (0x000323b3) image3_wide_pane

0xc973,	// (0x000323cd) image3_wide_small_pane

0xc97f,	// (0x000323d9) main_video3_pane_g1_ParamLimits

0xc97f,	// (0x000323d9) main_video3_pane_g1

0xc99b,	// (0x000323f5) main_video3_pane_g2_ParamLimits

0xc99b,	// (0x000323f5) main_video3_pane_g2

0x0001,

0xf867,	// (0x000352c1) main_video3_pane_g_ParamLimits

0xf867,	// (0x000352c1) main_video3_pane_g

0xc9b7,	// (0x00032411) main_video3_pane_t1_ParamLimits

0xc9b7,	// (0x00032411) main_video3_pane_t1

0xc9e2,	// (0x0003243c) main_video3_pane_t2_ParamLimits

0xc9e2,	// (0x0003243c) main_video3_pane_t2

0xca0d,	// (0x00032467) main_video3_pane_t3_ParamLimits

0xca0d,	// (0x00032467) main_video3_pane_t3

0x0002,

0xf86c,	// (0x000352c6) main_video3_pane_t_ParamLimits

0xf86c,	// (0x000352c6) main_video3_pane_t

0xca3a,	// (0x00032494) cams_zoom_vslider_pane_g1

0xca43,	// (0x0003249d) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x000352cd) cams_zoom_vslider_pane_g

0xca4b,	// (0x000324a5) small_slider_vertical_pane

0xc286,	// (0x00031ce0) small_slider_vertical_pane_g1

0xc286,	// (0x00031ce0) small_slider_vertical_pane_g2

0xca53,	// (0x000324ad) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x000352d2) small_slider_vertical_pane_g

0x1f6e,	// (0x000279c8) main_hwr_training_pane

0xca5c,	// (0x000324b6) hwr_training_instruct_pane_ParamLimits

0xca5c,	// (0x000324b6) hwr_training_instruct_pane

0x7e1c,	// (0x0002d876) hwr_training_navi_pane_ParamLimits

0x7e1c,	// (0x0002d876) hwr_training_navi_pane

0x7e3b,	// (0x0002d895) hwr_training_write_pane_ParamLimits

0x7e3b,	// (0x0002d895) hwr_training_write_pane

0x1f6e,	// (0x000279c8) bg_frame_shadow_pane

0xca93,	// (0x000324ed) hwr_training_write_pane_g1

0xca9b,	// (0x000324f5) hwr_training_write_pane_g2

0xcaa3,	// (0x000324fd) hwr_training_write_pane_g3

0xcaab,	// (0x00032505) hwr_training_write_pane_g4

0xcab3,	// (0x0003250d) hwr_training_write_pane_g5

0xcabb,	// (0x00032515) hwr_training_write_pane_g6

0xcac3,	// (0x0003251d) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x000352d9) hwr_training_write_pane_g

0xcacb,	// (0x00032525) hwr_training_navi_pane_g1_ParamLimits

0xcacb,	// (0x00032525) hwr_training_navi_pane_g1

0xcadd,	// (0x00032537) hwr_training_navi_pane_g2_ParamLimits

0xcadd,	// (0x00032537) hwr_training_navi_pane_g2

0xcaef,	// (0x00032549) hwr_training_navi_pane_g3_ParamLimits

0xcaef,	// (0x00032549) hwr_training_navi_pane_g3

0xcaff,	// (0x00032559) hwr_training_navi_pane_g4_ParamLimits

0xcaff,	// (0x00032559) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x000352e8) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x000352e8) hwr_training_navi_pane_g

0xcb0c,	// (0x00032566) hwr_training_navi_pane_t1

0x7e76,	// (0x0002d8d0) list_single_hwr_training_instruct_pane_ParamLimits

0x7e76,	// (0x0002d8d0) list_single_hwr_training_instruct_pane

0xcb1a,	// (0x00032574) list_single_hwr_training_instruct_pane_t1

0xc1c6,	// (0x00031c20) bg_frame_shadow_pane_g1

0xcb29,	// (0x00032583) bg_frame_shadow_pane_g2

0xcb31,	// (0x0003258b) bg_frame_shadow_pane_g3

0xcb39,	// (0x00032593) bg_frame_shadow_pane_g4

0xcb41,	// (0x0003259b) bg_frame_shadow_pane_g5

0xcb49,	// (0x000325a3) bg_frame_shadow_pane_g6

0xcb51,	// (0x000325ab) bg_frame_shadow_pane_g7

0x2d81,	// (0x000287db) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x000352f3) bg_frame_shadow_pane_g

0x1f6e,	// (0x000279c8) main_video_tele_dialer_pane

0x14d5,	// (0x00026f2f) aid_size_cell_video_keypad_ParamLimits

0x14d5,	// (0x00026f2f) aid_size_cell_video_keypad

0x14ef,	// (0x00026f49) grid_video_dialer_keypad_pane_ParamLimits

0x14ef,	// (0x00026f49) grid_video_dialer_keypad_pane

0x1539,	// (0x00026f93) video_down_pane_cp_ParamLimits

0x1539,	// (0x00026f93) video_down_pane_cp

0x1549,	// (0x00026fa3) cell_video_dialer_keypad_pane_ParamLimits

0x1549,	// (0x00026fa3) cell_video_dialer_keypad_pane

0xcb75,	// (0x000325cf) bg_button_pane_cp08_ParamLimits

0xcb75,	// (0x000325cf) bg_button_pane_cp08

0x7e8b,	// (0x0002d8e5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7e8b,	// (0x0002d8e5) cell_video_dialer_keypad_pane_g1

0x76b9,	// (0x0002d113) mup3_rocker2_pane_ParamLimits

0x76b9,	// (0x0002d113) mup3_rocker2_pane

0xc286,	// (0x00031ce0) mup3_rocker2_pane_g1

0x66c7,	// (0x0002c121) main_dialer2_pane

0x1f6e,	// (0x000279c8) main_mp4_pane

0xcb89,	// (0x000325e3) main_mp4_pane_g1_ParamLimits

0xcb89,	// (0x000325e3) main_mp4_pane_g1

0xcb89,	// (0x000325e3) main_mp4_pane_g2_ParamLimits

0xcb89,	// (0x000325e3) main_mp4_pane_g2

0x156b,	// (0x00026fc5) main_mp4_pane_g3_ParamLimits

0x156b,	// (0x00026fc5) main_mp4_pane_g3

0xcb97,	// (0x000325f1) main_mp4_pane_g4_ParamLimits

0xcb97,	// (0x000325f1) main_mp4_pane_g4

0xcbbf,	// (0x00032619) main_mp4_pane_g5_ParamLimits

0xcbbf,	// (0x00032619) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00035313) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00035313) main_mp4_pane_g

0xcc0f,	// (0x00032669) main_mp4_pane_t1_ParamLimits

0xcc0f,	// (0x00032669) main_mp4_pane_t1

0xcc6b,	// (0x000326c5) main_mp4_pane_t2_ParamLimits

0xcc6b,	// (0x000326c5) main_mp4_pane_t2

0xccbd,	// (0x00032717) main_mp4_pane_t3_ParamLimits

0xccbd,	// (0x00032717) main_mp4_pane_t3

0xccdd,	// (0x00032737) main_mp4_pane_t4_ParamLimits

0xccdd,	// (0x00032737) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00035320) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00035320) main_mp4_pane_t

0xcd21,	// (0x0003277b) mp4_progress_pane_ParamLimits

0xcd21,	// (0x0003277b) mp4_progress_pane

0xcd6b,	// (0x000327c5) mp4_rocker_pane_ParamLimits

0xcd6b,	// (0x000327c5) mp4_rocker_pane

0xcd93,	// (0x000327ed) mp4_progress_pane_t1

0xcdac,	// (0x00032806) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00035329) mp4_progress_pane_t

0xcdc5,	// (0x0003281f) mup_progress_pane_cp04

0xcdd1,	// (0x0003282b) mp4_rocker_pane_g1

0x15a7,	// (0x00027001) aid_cell_size_keypad2_ParamLimits

0x15a7,	// (0x00027001) aid_cell_size_keypad2

0x15bd,	// (0x00027017) dialer2_ne_pane_ParamLimits

0x15bd,	// (0x00027017) dialer2_ne_pane

0x15d7,	// (0x00027031) grid_dialer2_keypad_pane_ParamLimits

0x15d7,	// (0x00027031) grid_dialer2_keypad_pane

0xc06b,	// (0x00031ac5) bg_popup_call_pane_cp07_ParamLimits

0xc06b,	// (0x00031ac5) bg_popup_call_pane_cp07

0x7ec5,	// (0x0002d91f) dialer2_ne_pane_t1_ParamLimits

0x7ec5,	// (0x0002d91f) dialer2_ne_pane_t1

0x15f3,	// (0x0002704d) cell_dialer2_keypad_pane_ParamLimits

0x15f3,	// (0x0002704d) cell_dialer2_keypad_pane

0xcded,	// (0x00032847) bg_button_pane_pane_cp04_ParamLimits

0xcded,	// (0x00032847) bg_button_pane_pane_cp04

0x7f00,	// (0x0002d95a) cell_dialer2_keypad_pane_g1_ParamLimits

0x7f00,	// (0x0002d95a) cell_dialer2_keypad_pane_g1

0x36dd,	// (0x00029137) aid_placing_vt_set_content_ParamLimits

0x36dd,	// (0x00029137) aid_placing_vt_set_content

0x3703,	// (0x0002915d) aid_placing_vt_set_title_ParamLimits

0x3703,	// (0x0002915d) aid_placing_vt_set_title

0x1f6e,	// (0x000279c8) main_image3_pane

0x1673,	// (0x000270cd) area_side_right_pane_cp01_ParamLimits

0x1673,	// (0x000270cd) area_side_right_pane_cp01

0xcb89,	// (0x000325e3) main_image3_pane_g1_ParamLimits

0xcb89,	// (0x000325e3) main_image3_pane_g1

0x168a,	// (0x000270e4) main_image3_pane_g2_ParamLimits

0x168a,	// (0x000270e4) main_image3_pane_g2

0x16b2,	// (0x0002710c) main_image3_pane_g3_ParamLimits

0x16b2,	// (0x0002710c) main_image3_pane_g3

0x16dc,	// (0x00027136) main_image3_pane_g4_ParamLimits

0x16dc,	// (0x00027136) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00035338) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00035338) main_image3_pane_g

0x1706,	// (0x00027160) main_image3_pane_t1_ParamLimits

0x1706,	// (0x00027160) main_image3_pane_t1

0x175e,	// (0x000271b8) main_image3_pane_t2_ParamLimits

0x175e,	// (0x000271b8) main_image3_pane_t2

0x17b0,	// (0x0002720a) main_image3_pane_t3_ParamLimits

0x17b0,	// (0x0002720a) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00035341) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00035341) main_image3_pane_t

0x21e0,	// (0x00027c3a) grid_sctrl_middle_pane_cp01_ParamLimits

0x21e0,	// (0x00027c3a) grid_sctrl_middle_pane_cp01

0x7f68,	// (0x0002d9c2) cell_sctrl_middle_pane_cp01_ParamLimits

0x7f68,	// (0x0002d9c2) cell_sctrl_middle_pane_cp01

0x7f85,	// (0x0002d9df) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7f85,	// (0x0002d9df) cell_sctrl_middle_pane_cp01_g1

0x1f6e,	// (0x000279c8) main_call4_pane

0x7f9b,	// (0x0002d9f5) aid_size_button_call4_ParamLimits

0x7f9b,	// (0x0002d9f5) aid_size_button_call4

0x7fcc,	// (0x0002da26) call4_windows_pane_ParamLimits

0x7fcc,	// (0x0002da26) call4_windows_pane

0x7fec,	// (0x0002da46) grid_call4_button_pane_ParamLimits

0x7fec,	// (0x0002da46) grid_call4_button_pane

0xce2b,	// (0x00032885) call4_windows_conf_pane

0xce42,	// (0x0003289c) popup_call4_audio_first_window_ParamLimits

0xce42,	// (0x0003289c) popup_call4_audio_first_window

0xce8e,	// (0x000328e8) popup_call4_audio_second_window_ParamLimits

0xce8e,	// (0x000328e8) popup_call4_audio_second_window

0xcea2,	// (0x000328fc) popup_call4_audio_wait_window_ParamLimits

0xcea2,	// (0x000328fc) popup_call4_audio_wait_window

0x8019,	// (0x0002da73) cell_call4_button_pane_ParamLimits

0x8019,	// (0x0002da73) cell_call4_button_pane

0x8042,	// (0x0002da9c) bg_button_pane_cp09_ParamLimits

0x8042,	// (0x0002da9c) bg_button_pane_cp09

0x804e,	// (0x0002daa8) cell_call4_button_pane_g1_ParamLimits

0x804e,	// (0x0002daa8) cell_call4_button_pane_g1

0x8074,	// (0x0002dace) cell_call4_button_pane_t1_ParamLimits

0x8074,	// (0x0002dace) cell_call4_button_pane_t1

0xceea,	// (0x00032944) popup_call4_audio_conf_window_ParamLimits

0xceea,	// (0x00032944) popup_call4_audio_conf_window

0x7719,	// (0x0002d173) mup3_progress_pane_t1_ParamLimits

0x7730,	// (0x0002d18a) mup3_progress_pane_t2_ParamLimits

0xc579,	// (0x00031fd3) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0003521a) mup3_progress_pane_t_ParamLimits

0xc590,	// (0x00031fea) mup_progress_pane_cp03_ParamLimits

0x7c62,	// (0x0002d6bc) mup3_control_keys_pane_g4_copy1

0xcd4f,	// (0x000327a9) mp4_rocker2_pane_ParamLimits

0xcd4f,	// (0x000327a9) mp4_rocker2_pane

0xcefe,	// (0x00032958) mp4_rocker2_pane_g1

0xcf06,	// (0x00032960) mp4_rocker2_pane_g2

0xcf0e,	// (0x00032968) mp4_rocker2_pane_g3

0xcf16,	// (0x00032970) mp4_rocker2_pane_g4

0xcf1e,	// (0x00032978) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0003534a) mp4_rocker2_pane_g

0x1f6e,	// (0x000279c8) main_camera4_pane

0x1f6e,	// (0x000279c8) main_video4_pane

0x1507,	// (0x00026f61) main_video_tele_dialer_pane_t1_ParamLimits

0x1507,	// (0x00026f61) main_video_tele_dialer_pane_t1

0x1520,	// (0x00026f7a) main_video_tele_dialer_pane_t2_ParamLimits

0x1520,	// (0x00026f7a) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00035304) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00035304) main_video_tele_dialer_pane_t

0x1850,	// (0x000272aa) cam4_autofocus_pane_ParamLimits

0x1850,	// (0x000272aa) cam4_autofocus_pane

0x1866,	// (0x000272c0) cam4_image_uncrop_pane_ParamLimits

0x1866,	// (0x000272c0) cam4_image_uncrop_pane

0x1880,	// (0x000272da) cam4_indicators_pane_ParamLimits

0x1880,	// (0x000272da) cam4_indicators_pane

0x18ab,	// (0x00027305) main_camera4_pane_g1_ParamLimits

0x18ab,	// (0x00027305) main_camera4_pane_g1

0x18be,	// (0x00027318) main_camera4_pane_g2_ParamLimits

0x18be,	// (0x00027318) main_camera4_pane_g2

0x18d1,	// (0x0002732b) main_camera4_pane_g3_ParamLimits

0x18d1,	// (0x0002732b) main_camera4_pane_g3

0x18e4,	// (0x0002733e) main_camera4_pane_g4_ParamLimits

0x18e4,	// (0x0002733e) main_camera4_pane_g4

0x18f7,	// (0x00027351) main_camera4_pane_g5_ParamLimits

0x18f7,	// (0x00027351) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00035355) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00035355) main_camera4_pane_g

0x191b,	// (0x00027375) main_camera4_pane_t1_ParamLimits

0x191b,	// (0x00027375) main_camera4_pane_t1

0xcf54,	// (0x000329ae) bg_tb_trans_pane_cp06

0xcf6a,	// (0x000329c4) cam4_indicators_pane_g1

0xcf7b,	// (0x000329d5) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00035370) cam4_indicators_pane_g

0xcf99,	// (0x000329f3) cam4_indicators_pane_t1

0x196b,	// (0x000273c5) main_video4_pane_g1_ParamLimits

0x196b,	// (0x000273c5) main_video4_pane_g1

0x197e,	// (0x000273d8) main_video4_pane_g2_ParamLimits

0x197e,	// (0x000273d8) main_video4_pane_g2

0x1992,	// (0x000273ec) main_video4_pane_g3_ParamLimits

0x1992,	// (0x000273ec) main_video4_pane_g3

0x19a6,	// (0x00027400) main_video4_pane_g4_ParamLimits

0x19a6,	// (0x00027400) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00035377) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00035377) main_video4_pane_g

0x19ce,	// (0x00027428) vid4_indicators_pane_ParamLimits

0x19ce,	// (0x00027428) vid4_indicators_pane

0x19fe,	// (0x00027458) video4_image_uncrop_cif_pane_ParamLimits

0x19fe,	// (0x00027458) video4_image_uncrop_cif_pane

0x1a18,	// (0x00027472) video4_image_uncrop_nhd_pane_ParamLimits

0x1a18,	// (0x00027472) video4_image_uncrop_nhd_pane

0x1866,	// (0x000272c0) video4_image_uncrop_vga_pane_ParamLimits

0x1866,	// (0x000272c0) video4_image_uncrop_vga_pane

0xcfbb,	// (0x00032a15) bg_tb_trans_pane_cp07

0x1a2c,	// (0x00027486) vid4_indicators_pane_g1

0x1a39,	// (0x00027493) vid4_indicators_pane_g2

0x1a46,	// (0x000274a0) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00035382) vid4_indicators_pane_g

0x1a6b,	// (0x000274c5) vid4_indicators_pane_t1

0x80ae,	// (0x0002db08) cam4_autofocus_pane_g1

0x80b6,	// (0x0002db10) cam4_autofocus_pane_g2

0x80be,	// (0x0002db18) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0003538d) cam4_autofocus_pane_g

0x80c6,	// (0x0002db20) cam4_autofocus_pane_g3_copy1

0xcb59,	// (0x000325b3) video_down_pane_cp_t1

0xcb67,	// (0x000325c1) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00035309) video_down_pane_cp_t

0x21e0,	// (0x00027c3a) popup_vitu2_window_ParamLimits

0x21e0,	// (0x00027c3a) popup_vitu2_window

0x1a7d,	// (0x000274d7) aid_size_cell2_itu2_ParamLimits

0x1a7d,	// (0x000274d7) aid_size_cell2_itu2

0x1aa3,	// (0x000274fd) aid_size_cell_itu2_ParamLimits

0x1aa3,	// (0x000274fd) aid_size_cell_itu2

0x1aff,	// (0x00027559) bg_popup_window_pane_cp09_ParamLimits

0x1aff,	// (0x00027559) bg_popup_window_pane_cp09

0x1b0d,	// (0x00027567) field_vitu2_entry_pane_ParamLimits

0x1b0d,	// (0x00027567) field_vitu2_entry_pane

0x1b33,	// (0x0002758d) grid_vitu2_function_pane_ParamLimits

0x1b33,	// (0x0002758d) grid_vitu2_function_pane

0x1b84,	// (0x000275de) grid_vitu2_itu_pane_ParamLimits

0x1b84,	// (0x000275de) grid_vitu2_itu_pane

0x1c17,	// (0x00027671) cell_vitu2_itu_pane_ParamLimits

0x1c17,	// (0x00027671) cell_vitu2_itu_pane

0x1c3b,	// (0x00027695) cell_vitu2_function_pane_ParamLimits

0x1c3b,	// (0x00027695) cell_vitu2_function_pane

0xcfd3,	// (0x00032a2d) bg_popup_call_pane_cp08_ParamLimits

0xcfd3,	// (0x00032a2d) bg_popup_call_pane_cp08

0xcfec,	// (0x00032a46) field_vitu2_entry_pane_g1

0xcff8,	// (0x00032a52) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00035394) field_vitu2_entry_pane_g

0xd012,	// (0x00032a6c) field_vitu2_entry_pane_t1_ParamLimits

0xd012,	// (0x00032a6c) field_vitu2_entry_pane_t1

0xd041,	// (0x00032a9b) field_vitu2_entry_pane_t2_ParamLimits

0xd041,	// (0x00032a9b) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0003539b) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0003539b) field_vitu2_entry_pane_t

0x1c7a,	// (0x000276d4) bg_button_pane_cp010_ParamLimits

0x1c7a,	// (0x000276d4) bg_button_pane_cp010

0x1c88,	// (0x000276e2) cell_vitu2_itu_pane_g1

0x1ca6,	// (0x00027700) cell_vitu2_itu_pane_t1_ParamLimits

0x1ca6,	// (0x00027700) cell_vitu2_itu_pane_t1

0x1d0c,	// (0x00027766) cell_vitu2_itu_pane_t2_ParamLimits

0x1d0c,	// (0x00027766) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x000353a5) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x000353a5) cell_vitu2_itu_pane_t

0xd066,	// (0x00032ac0) bg_button_pane_cp011

0x1de8,	// (0x00027842) cell_vitu2_function_pane_g1

0x1f6e,	// (0x000279c8) main_myfav_hc_pane

0x1800,	// (0x0002725a) popup_image3_note_pane_ParamLimits

0x1800,	// (0x0002725a) popup_image3_note_pane

0x181c,	// (0x00027276) popup_image3_tool_bar_pane_ParamLimits

0x181c,	// (0x00027276) popup_image3_tool_bar_pane

0x1d90,	// (0x000277ea) cell_vitu2_itu_pane_t3_ParamLimits

0x1d90,	// (0x000277ea) cell_vitu2_itu_pane_t3

0x1f6e,	// (0x000279c8) bg_popup_trans_pane

0xd074,	// (0x00032ace) grid_image3_tool_bar_pane

0xd07e,	// (0x00032ad8) bg_popup_trans_pane_g1

0x3cd0,	// (0x0002972a) bg_popup_trans_pane_g2

0xd086,	// (0x00032ae0) bg_popup_trans_pane_g3

0xd08e,	// (0x00032ae8) bg_popup_trans_pane_g4

0xd096,	// (0x00032af0) bg_popup_trans_pane_g5

0xd09e,	// (0x00032af8) bg_popup_trans_pane_g6

0xd0a6,	// (0x00032b00) bg_popup_trans_pane_g7

0xd0ae,	// (0x00032b08) bg_popup_trans_pane_g8

0x3cb0,	// (0x0002970a) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x000353ac) bg_popup_trans_pane_g

0xd0b6,	// (0x00032b10) cell_image3_tool_bar_pane_ParamLimits

0xd0b6,	// (0x00032b10) cell_image3_tool_bar_pane

0xc286,	// (0x00031ce0) cell_image3_tool_bar_pane_g1

0x1f6e,	// (0x000279c8) bg_popup_trans_pane_cp1

0xd0ca,	// (0x00032b24) popup_image3_note_pane_t1

0xd0d8,	// (0x00032b32) popup_image3_note_pane_t2

0xd0e6,	// (0x00032b40) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x000353bf) popup_image3_note_pane_t

0xd0f4,	// (0x00032b4e) popup_image3_note_pane_t3_copy1

0x80ce,	// (0x0002db28) bg_myfav_hc_instruction_pane_ParamLimits

0x80ce,	// (0x0002db28) bg_myfav_hc_instruction_pane

0x80e2,	// (0x0002db3c) cell_myfav_contact_pane_ParamLimits

0x80e2,	// (0x0002db3c) cell_myfav_contact_pane

0x8100,	// (0x0002db5a) cell_myfav_contact_pane_cp1_ParamLimits

0x8100,	// (0x0002db5a) cell_myfav_contact_pane_cp1

0x8118,	// (0x0002db72) cell_myfav_contact_pane_cp2_ParamLimits

0x8118,	// (0x0002db72) cell_myfav_contact_pane_cp2

0x8130,	// (0x0002db8a) cell_myfav_contact_pane_cp3_ParamLimits

0x8130,	// (0x0002db8a) cell_myfav_contact_pane_cp3

0x8147,	// (0x0002dba1) cell_myfav_contact_pane_cp4_ParamLimits

0x8147,	// (0x0002dba1) cell_myfav_contact_pane_cp4

0x815f,	// (0x0002dbb9) cell_myfav_contact_pane_cp5_ParamLimits

0x815f,	// (0x0002dbb9) cell_myfav_contact_pane_cp5

0x8173,	// (0x0002dbcd) cell_myfav_contact_pane_cp6_ParamLimits

0x8173,	// (0x0002dbcd) cell_myfav_contact_pane_cp6

0x8189,	// (0x0002dbe3) cell_myfav_contact_pane_cp7_ParamLimits

0x8189,	// (0x0002dbe3) cell_myfav_contact_pane_cp7

0xd102,	// (0x00032b5c) listscroll_gen_pane_cp05

0x81a3,	// (0x0002dbfd) main_myfav_hc_pane_g1_ParamLimits

0x81a3,	// (0x0002dbfd) main_myfav_hc_pane_g1

0x81bd,	// (0x0002dc17) main_myfav_hc_pane_g2_ParamLimits

0x81bd,	// (0x0002dc17) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x000353c6) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x000353c6) main_myfav_hc_pane_g

0x81ef,	// (0x0002dc49) main_myfav_hc_pane_t1_ParamLimits

0x81ef,	// (0x0002dc49) main_myfav_hc_pane_t1

0xd10b,	// (0x00032b65) main_myfav_hc_pane_t2_ParamLimits

0xd10b,	// (0x00032b65) main_myfav_hc_pane_t2

0xd11d,	// (0x00032b77) main_myfav_hc_pane_t3_ParamLimits

0xd11d,	// (0x00032b77) main_myfav_hc_pane_t3

0x8206,	// (0x0002dc60) main_myfav_hc_pane_t4_ParamLimits

0x8206,	// (0x0002dc60) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x000353cd) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x000353cd) main_myfav_hc_pane_t

0xc286,	// (0x00031ce0) bg_myfav_hc_instruction_pane_g1

0xd12f,	// (0x00032b89) cell_myfav_contact_pane_g1_ParamLimits

0xd12f,	// (0x00032b89) cell_myfav_contact_pane_g1

0xd12f,	// (0x00032b89) cell_myfav_contact_pane_g2_ParamLimits

0xd12f,	// (0x00032b89) cell_myfav_contact_pane_g2

0xd13b,	// (0x00032b95) cell_myfav_contact_pane_g3_ParamLimits

0xd13b,	// (0x00032b95) cell_myfav_contact_pane_g3

0xc563,	// (0x00031fbd) cell_myfav_contact_pane_g4_ParamLimits

0xc563,	// (0x00031fbd) cell_myfav_contact_pane_g4

0xd148,	// (0x00032ba2) cell_myfav_contact_pane_g5_ParamLimits

0xd148,	// (0x00032ba2) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x000353d8) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x000353d8) cell_myfav_contact_pane_g

0x81d7,	// (0x0002dc31) main_myfav_hc_pane_g3_ParamLimits

0x81d7,	// (0x0002dc31) main_myfav_hc_pane_g3

0x211a,	// (0x00027b74) popup_adpt_find_window

0x822e,	// (0x0002dc88) afind_page_pane_ParamLimits

0x822e,	// (0x0002dc88) afind_page_pane

0x8243,	// (0x0002dc9d) aid_size_cell_afind_ParamLimits

0x8243,	// (0x0002dc9d) aid_size_cell_afind

0x8261,	// (0x0002dcbb) bg_popup_sub_pane_cp09_ParamLimits

0x8261,	// (0x0002dcbb) bg_popup_sub_pane_cp09

0x826e,	// (0x0002dcc8) find_pane_cp01_ParamLimits

0x826e,	// (0x0002dcc8) find_pane_cp01

0xd154,	// (0x00032bae) grid_afind_control_pane_ParamLimits

0xd154,	// (0x00032bae) grid_afind_control_pane

0x827b,	// (0x0002dcd5) grid_afind_pane_ParamLimits

0x827b,	// (0x0002dcd5) grid_afind_pane

0x829d,	// (0x0002dcf7) cell_afind_pane_ParamLimits

0x829d,	// (0x0002dcf7) cell_afind_pane

0xc286,	// (0x00031ce0) afind_page_pane_g1

0x82fe,	// (0x0002dd58) afind_page_pane_g2

0x8307,	// (0x0002dd61) afind_page_pane_g3

0x0002,

0xf989,	// (0x000353e3) afind_page_pane_g

0x8310,	// (0x0002dd6a) afind_page_pane_t1

0xd168,	// (0x00032bc2) cell_afind_grid_control_pane_ParamLimits

0xd168,	// (0x00032bc2) cell_afind_grid_control_pane

0xcded,	// (0x00032847) bg_button_pane_cp69_ParamLimits

0xcded,	// (0x00032847) bg_button_pane_cp69

0x8330,	// (0x0002dd8a) cell_afind_pane_g1_ParamLimits

0x8330,	// (0x0002dd8a) cell_afind_pane_g1

0x833d,	// (0x0002dd97) cell_afind_pane_t1_ParamLimits

0x833d,	// (0x0002dd97) cell_afind_pane_t1

0x357e,	// (0x00028fd8) bg_button_pane_cp72

0xd177,	// (0x00032bd1) cell_afind_grid_control_pane_g1

0x5f0f,	// (0x0002b969) aid_image_placing_area_ParamLimits

0x5f0f,	// (0x0002b969) aid_image_placing_area

0xc85c,	// (0x000322b6) field_vitu_entry_pane_g1_ParamLimits

0xc85c,	// (0x000322b6) field_vitu_entry_pane_g1

0xc868,	// (0x000322c2) field_vitu_entry_pane_g2_ParamLimits

0xc868,	// (0x000322c2) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00035294) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00035294) field_vitu_entry_pane_g

0x7d29,	// (0x0002d783) cell_vitu_itu_pane_g1_ParamLimits

0x7d6b,	// (0x0002d7c5) cell_vitu_itu_pane_t3_ParamLimits

0x7d6b,	// (0x0002d7c5) cell_vitu_itu_pane_t3

0xcd93,	// (0x000327ed) mp4_progress_pane_t1_ParamLimits

0xcdac,	// (0x00032806) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00035329) mp4_progress_pane_t_ParamLimits

0xcdc5,	// (0x0003281f) mup_progress_pane_cp04_ParamLimits

0x821a,	// (0x0002dc74) main_myfav_hc_pane_t5_ParamLimits

0x821a,	// (0x0002dc74) main_myfav_hc_pane_t5

0x1fc4,	// (0x00027a1e) aid_zoom_text_primary

0x211a,	// (0x00027b74) popup_adpt_find_window_ParamLimits

0x21e0,	// (0x00027c3a) main_cam_set_pane

0x1897,	// (0x000272f1) cam4_zoom_pane_ParamLimits

0x1897,	// (0x000272f1) cam4_zoom_pane

0x834f,	// (0x0002dda9) main_cam_set_pane_g1_ParamLimits

0x834f,	// (0x0002dda9) main_cam_set_pane_g1

0x835d,	// (0x0002ddb7) main_cam_set_pane_g2_ParamLimits

0x835d,	// (0x0002ddb7) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x000353ea) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x000353ea) main_cam_set_pane_g

0x837e,	// (0x0002ddd8) main_cam_set_pane_t1_ParamLimits

0x837e,	// (0x0002ddd8) main_cam_set_pane_t1

0x8399,	// (0x0002ddf3) main_cset_listscroll_pane_ParamLimits

0x8399,	// (0x0002ddf3) main_cset_listscroll_pane

0x83b9,	// (0x0002de13) main_cset_slider_pane_ParamLimits

0x83b9,	// (0x0002de13) main_cset_slider_pane

0xd188,	// (0x00032be2) main_cset_list_pane_ParamLimits

0xd188,	// (0x00032be2) main_cset_list_pane

0xd198,	// (0x00032bf2) scroll_pane_cp028

0x83df,	// (0x0002de39) aid_area_touch_slider

0x83fb,	// (0x0002de55) cset_slider_pane

0x8425,	// (0x0002de7f) main_cset_slider_pane_g1

0x843a,	// (0x0002de94) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x000353ef) main_cset_slider_pane_g

0xd1d1,	// (0x00032c2b) main_cset_slider_pane_t1

0x84f6,	// (0x0002df50) main_cset_slider_pane_t2

0x8510,	// (0x0002df6a) main_cset_slider_pane_t3

0x852a,	// (0x0002df84) main_cset_slider_pane_t4

0x8544,	// (0x0002df9e) main_cset_slider_pane_t5

0x855e,	// (0x0002dfb8) main_cset_slider_pane_t6

0x8573,	// (0x0002dfcd) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00035414) main_cset_slider_pane_t

0x8677,	// (0x0002e0d1) cset_list_set_pane_ParamLimits

0x8677,	// (0x0002e0d1) cset_list_set_pane

0x8689,	// (0x0002e0e3) aid_position_infowindow_above

0x8691,	// (0x0002e0eb) aid_position_infowindow_below

0x8699,	// (0x0002e0f3) cset_list_set_pane_g1_ParamLimits

0x8699,	// (0x0002e0f3) cset_list_set_pane_g1

0xd271,	// (0x00032ccb) cset_list_set_pane_g3_ParamLimits

0xd271,	// (0x00032ccb) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00035433) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00035433) cset_list_set_pane_g

0xd280,	// (0x00032cda) cset_list_set_pane_t1_ParamLimits

0xd280,	// (0x00032cda) cset_list_set_pane_t1

0x21e0,	// (0x00027c3a) list_highlight_pane_cp021_ParamLimits

0x21e0,	// (0x00027c3a) list_highlight_pane_cp021

0x56fb,	// (0x0002b155) cset_slider_pane_g1

0x570d,	// (0x0002b167) cset_slider_pane_g2

0x5704,	// (0x0002b15e) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00035438) cset_slider_pane_g

0xd295,	// (0x00032cef) aid_area_touch_cam4_zoom

0xd29d,	// (0x00032cf7) cam4_zoom_cont_pane

0xd2a5,	// (0x00032cff) cam4_zoom_pane_g1

0xd2ad,	// (0x00032d07) cam4_zoom_pane_g2

0x1dfc,	// (0x00027856) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0003543f) cam4_zoom_pane_g

0xd2b5,	// (0x00032d0f) cam4_zoom_cont_pane_g1

0xd2be,	// (0x00032d18) cam4_zoom_cont_pane_g2

0xd2c7,	// (0x00032d21) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00035446) cam4_zoom_cont_pane_g

0x7fb9,	// (0x0002da13) call4_image_pane_ParamLimits

0x7fb9,	// (0x0002da13) call4_image_pane

0xce2b,	// (0x00032885) call4_windows_conf_pane_ParamLimits

0xce6c,	// (0x000328c6) popup_call4_audio_in_window_ParamLimits

0xce6c,	// (0x000328c6) popup_call4_audio_in_window

0x1f6e,	// (0x000279c8) bg_popup_call2_act_pane_cp02

0xcee2,	// (0x0003293c) call4_list_conf_pane

0xc286,	// (0x00031ce0) call4_image_pane_g1

0xc286,	// (0x00031ce0) call4_image_pane_g2

0x0001,

0xf700,	// (0x0003515a) call4_image_pane_g

0xd2d0,	// (0x00032d2a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd2d0,	// (0x00032d2a) list_single_graphic_popup_conf4_pane

0x1f6e,	// (0x000279c8) list_highlight_pane_cp022

0xd2e3,	// (0x00032d3d) list_single_graphic_popup_conf4_pane_g1

0x4c8f,	// (0x0002a6e9) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0003544d) list_single_graphic_popup_conf4_pane_g

0xd2eb,	// (0x00032d45) list_single_graphic_popup_conf4_pane_t1

0x3839,	// (0x00029293) popup_vtel_slider_window_ParamLimits

0x3839,	// (0x00029293) popup_vtel_slider_window

0xcddb,	// (0x00032835) dialer2_ne_pane_t2_ParamLimits

0xcddb,	// (0x00032835) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0003532e) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0003532e) dialer2_ne_pane_t

0xc06b,	// (0x00031ac5) bg_popup_sub_pane_cp010_ParamLimits

0xc06b,	// (0x00031ac5) bg_popup_sub_pane_cp010

0x86a5,	// (0x0002e0ff) popup_vtel_slider_window_g1_ParamLimits

0x86a5,	// (0x0002e0ff) popup_vtel_slider_window_g1

0x86b8,	// (0x0002e112) popup_vtel_slider_window_g2_ParamLimits

0x86b8,	// (0x0002e112) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00035452) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00035452) popup_vtel_slider_window_g

0x870e,	// (0x0002e168) vtel_slider_pane_ParamLimits

0x870e,	// (0x0002e168) vtel_slider_pane

0x8730,	// (0x0002e18a) vtel_slider_pane_g1_ParamLimits

0x8730,	// (0x0002e18a) vtel_slider_pane_g1

0x8744,	// (0x0002e19e) vtel_slider_pane_g2_ParamLimits

0x8744,	// (0x0002e19e) vtel_slider_pane_g2

0x875c,	// (0x0002e1b6) vtel_slider_pane_g3_ParamLimits

0x875c,	// (0x0002e1b6) vtel_slider_pane_g3

0x8730,	// (0x0002e18a) vtel_slider_pane_g4_ParamLimits

0x8730,	// (0x0002e18a) vtel_slider_pane_g4

0x8772,	// (0x0002e1cc) vtel_slider_pane_g5_ParamLimits

0x8772,	// (0x0002e1cc) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0003545b) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0003545b) vtel_slider_pane_g

0x1f6e,	// (0x000279c8) main_gallery2_pane

0x1acf,	// (0x00027529) aid_size_row_itut2_dropdow_list_ParamLimits

0x1acf,	// (0x00027529) aid_size_row_itut2_dropdow_list

0x1b5b,	// (0x000275b5) grid_vitu2_function_top_pane_ParamLimits

0x1b5b,	// (0x000275b5) grid_vitu2_function_top_pane

0x1bc0,	// (0x0002761a) popup_vitu2_dropdown_list_window_ParamLimits

0x1bc0,	// (0x0002761a) popup_vitu2_dropdown_list_window

0x1be9,	// (0x00027643) popup_vitu2_match_list_window

0x1e04,	// (0x0002785e) cell_vitu2_function_top_pane_ParamLimits

0x1e04,	// (0x0002785e) cell_vitu2_function_top_pane

0x1e22,	// (0x0002787c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1e22,	// (0x0002787c) cell_vitu2_function_top_pane_cp01

0x1e40,	// (0x0002789a) cell_vitu2_function_top_wide_pane_ParamLimits

0x1e40,	// (0x0002789a) cell_vitu2_function_top_wide_pane

0xd066,	// (0x00032ac0) bg_button_pane_cp012

0x1e5e,	// (0x000278b8) cell_vitu2_function_top_pane_g1

0xd30f,	// (0x00032d69) bg_button_pane_cp013_ParamLimits

0xd30f,	// (0x00032d69) bg_button_pane_cp013

0x8788,	// (0x0002e1e2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8788,	// (0x0002e1e2) cell_vitu2_function_top_wide_pane_g1

0xd066,	// (0x00032ac0) bg_popup_sub_pane_cp20

0x1e72,	// (0x000278cc) list_vitu2_match_list_pane

0xd07e,	// (0x00032ad8) bg_popup_sub_pane_cp20_g1

0xd086,	// (0x00032ae0) bg_popup_sub_pane_cp20_g2

0x3cd0,	// (0x0002972a) bg_popup_sub_pane_cp20_g3

0xd08e,	// (0x00032ae8) bg_popup_sub_pane_cp20_g4

0x3cb0,	// (0x0002970a) bg_popup_sub_pane_cp20_g5

0xd32b,	// (0x00032d85) bg_popup_sub_pane_cp20_g6

0xd09e,	// (0x00032af8) bg_popup_sub_pane_cp20_g7

0xd0a6,	// (0x00032b00) bg_popup_sub_pane_cp20_g8

0xd0ae,	// (0x00032b08) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00035466) bg_popup_sub_pane_cp20_g

0xd333,	// (0x00032d8d) list_vitu2_match_list_item_pane_ParamLimits

0xd333,	// (0x00032d8d) list_vitu2_match_list_item_pane

0xd345,	// (0x00032d9f) list_vitu2_match_list_item_pane_t1

0xae7f,	// (0x000308d9) bg_popup_sub_pane_cp21

0xd36b,	// (0x00032dc5) grid_vitu2_dropdown_list_pane

0x1e90,	// (0x000278ea) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1e90,	// (0x000278ea) cell_vitu2_dropdown_list_char_pane

0x1eb1,	// (0x0002790b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1eb1,	// (0x0002790b) cell_vitu2_dropdown_list_ctrl_pane

0xd373,	// (0x00032dcd) cell_vitu2_dropdown_list_char_pane_g1

0xd37c,	// (0x00032dd6) cell_vitu2_dropdown_list_char_pane_g2

0xd385,	// (0x00032ddf) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x00035483) cell_vitu2_dropdown_list_char_pane_g

0x1edd,	// (0x00027937) cell_vitu2_dropdown_list_char_pane_t1

0x87d5,	// (0x0002e22f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x87d5,	// (0x0002e22f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x87e2,	// (0x0002e23c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x87e2,	// (0x0002e23c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x87ef,	// (0x0002e249) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x87ef,	// (0x0002e249) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1eeb,	// (0x00027945) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1eeb,	// (0x00027945) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf54,	// (0x000329ae) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf54,	// (0x000329ae) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0003548a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0003548a) cell_vitu2_dropdown_list_ctrl_pane_g

0x87fc,	// (0x0002e256) aid_size_cell_gallery2_ParamLimits

0x87fc,	// (0x0002e256) aid_size_cell_gallery2

0x8812,	// (0x0002e26c) grid_gallery2_pane_ParamLimits

0x8812,	// (0x0002e26c) grid_gallery2_pane

0x8826,	// (0x0002e280) scroll_pane_cp029_ParamLimits

0x8826,	// (0x0002e280) scroll_pane_cp029

0x8832,	// (0x0002e28c) cell_gallery2_pane_ParamLimits

0x8832,	// (0x0002e28c) cell_gallery2_pane

0xd38e,	// (0x00032de8) cell_gallery2_pane_g2

0x8868,	// (0x0002e2c2) cell_gallery2_pane_g3

0xd398,	// (0x00032df2) cell_gallery2_pane_g4

0xd3a0,	// (0x00032dfa) cell_gallery2_pane_g5

0x51bf,	// (0x0002ac19) grid_highlight_pane_cp10

0x1be9,	// (0x00027643) popup_vitu2_match_list_window_ParamLimits

0x1c00,	// (0x0002765a) popup_vitu2_query_window_ParamLimits

0x1c00,	// (0x0002765a) popup_vitu2_query_window

0xae7f,	// (0x000308d9) bg_vitu2_candi_button_pane

0xd373,	// (0x00032dcd) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd37c,	// (0x00032dd6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd385,	// (0x00032ddf) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8870,	// (0x0002e2ca) bg_button_pane_cp015

0x8882,	// (0x0002e2dc) bg_button_pane_cp016

0x8895,	// (0x0002e2ef) bg_button_pane_cp017

0xbd80,	// (0x000317da) bg_popup_sub_pane_cp22

0xd3a8,	// (0x00032e02) popup_vitu2_query_window_g1

0x88da,	// (0x0002e334) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00035495) popup_vitu2_query_window_g

0x88f9,	// (0x0002e353) popup_vitu2_query_window_t1_ParamLimits

0x88f9,	// (0x0002e353) popup_vitu2_query_window_t1

0x892e,	// (0x0002e388) popup_vitu2_query_window_t2_ParamLimits

0x892e,	// (0x0002e388) popup_vitu2_query_window_t2

0x8940,	// (0x0002e39a) popup_vitu2_query_window_t3_ParamLimits

0x8940,	// (0x0002e39a) popup_vitu2_query_window_t3

0x8968,	// (0x0002e3c2) popup_vitu2_query_window_t4_ParamLimits

0x8968,	// (0x0002e3c2) popup_vitu2_query_window_t4

0x8989,	// (0x0002e3e3) popup_vitu2_query_window_t5_ParamLimits

0x8989,	// (0x0002e3e3) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0003549c) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0003549c) popup_vitu2_query_window_t

0xd180,	// (0x00032bda) main_cset_text_pane

0x83df,	// (0x0002de39) aid_area_touch_slider_ParamLimits

0x83fb,	// (0x0002de55) cset_slider_pane_ParamLimits

0x8425,	// (0x0002de7f) main_cset_slider_pane_g1_ParamLimits

0x843a,	// (0x0002de94) main_cset_slider_pane_g2_ParamLimits

0xd1a1,	// (0x00032bfb) main_cset_slider_pane_g3_ParamLimits

0xd1a1,	// (0x00032bfb) main_cset_slider_pane_g3

0x844f,	// (0x0002dea9) main_cset_slider_pane_g4_ParamLimits

0x844f,	// (0x0002dea9) main_cset_slider_pane_g4

0x845e,	// (0x0002deb8) main_cset_slider_pane_g5_ParamLimits

0x845e,	// (0x0002deb8) main_cset_slider_pane_g5

0x846a,	// (0x0002dec4) main_cset_slider_pane_g6_ParamLimits

0x846a,	// (0x0002dec4) main_cset_slider_pane_g6

0xf995,	// (0x000353ef) main_cset_slider_pane_g_ParamLimits

0xd1d1,	// (0x00032c2b) main_cset_slider_pane_t1_ParamLimits

0x84f6,	// (0x0002df50) main_cset_slider_pane_t2_ParamLimits

0x8510,	// (0x0002df6a) main_cset_slider_pane_t3_ParamLimits

0x852a,	// (0x0002df84) main_cset_slider_pane_t4_ParamLimits

0x8544,	// (0x0002df9e) main_cset_slider_pane_t5_ParamLimits

0x855e,	// (0x0002dfb8) main_cset_slider_pane_t6_ParamLimits

0x8573,	// (0x0002dfcd) main_cset_slider_pane_t7_ParamLimits

0x859d,	// (0x0002dff7) main_cset_slider_pane_t8_ParamLimits

0x859d,	// (0x0002dff7) main_cset_slider_pane_t8

0x85c5,	// (0x0002e01f) main_cset_slider_pane_t9_ParamLimits

0x85c5,	// (0x0002e01f) main_cset_slider_pane_t9

0x85ed,	// (0x0002e047) main_cset_slider_pane_t10_ParamLimits

0x85ed,	// (0x0002e047) main_cset_slider_pane_t10

0x8615,	// (0x0002e06f) main_cset_slider_pane_t11_ParamLimits

0x8615,	// (0x0002e06f) main_cset_slider_pane_t11

0x863d,	// (0x0002e097) main_cset_slider_pane_t12_ParamLimits

0x863d,	// (0x0002e097) main_cset_slider_pane_t12

0x865a,	// (0x0002e0b4) main_cset_slider_pane_t13_ParamLimits

0x865a,	// (0x0002e0b4) main_cset_slider_pane_t13

0xf9ba,	// (0x00035414) main_cset_slider_pane_t_ParamLimits

0x1f6e,	// (0x000279c8) bg_popup_sub_pane_cp011

0xd3b4,	// (0x00032e0e) main_cset_text_pane_g1

0xd3bc,	// (0x00032e16) main_cset_text_pane_t1

0xd3ca,	// (0x00032e24) main_cset_text_pane_t2

0xd3d8,	// (0x00032e32) main_cset_text_pane_t3

0xd3e6,	// (0x00032e40) main_cset_text_pane_t4

0xd3f4,	// (0x00032e4e) main_cset_text_pane_t5

0xd402,	// (0x00032e5c) main_cset_text_pane_t6

0xd410,	// (0x00032e6a) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x000354ab) main_cset_text_pane_t

0x1f6e,	// (0x000279c8) main_cam4_burst_pane

0x1f6e,	// (0x000279c8) main_cam5_pane

0x831e,	// (0x0002dd78) bg_button_pane_cp019

0x8327,	// (0x0002dd81) bg_button_pane_cp020

0xd1ad,	// (0x00032c07) main_cset_slider_pane_g7_ParamLimits

0xd1ad,	// (0x00032c07) main_cset_slider_pane_g7

0xd1b9,	// (0x00032c13) main_cset_slider_pane_g8_ParamLimits

0xd1b9,	// (0x00032c13) main_cset_slider_pane_g8

0x847e,	// (0x0002ded8) main_cset_slider_pane_g9_ParamLimits

0x847e,	// (0x0002ded8) main_cset_slider_pane_g9

0x848a,	// (0x0002dee4) main_cset_slider_pane_g10_ParamLimits

0x848a,	// (0x0002dee4) main_cset_slider_pane_g10

0x8496,	// (0x0002def0) main_cset_slider_pane_g11_ParamLimits

0x8496,	// (0x0002def0) main_cset_slider_pane_g11

0x84a2,	// (0x0002defc) main_cset_slider_pane_g12_ParamLimits

0x84a2,	// (0x0002defc) main_cset_slider_pane_g12

0x84ae,	// (0x0002df08) main_cset_slider_pane_g13_ParamLimits

0x84ae,	// (0x0002df08) main_cset_slider_pane_g13

0x84ba,	// (0x0002df14) main_cset_slider_pane_g14_ParamLimits

0x84ba,	// (0x0002df14) main_cset_slider_pane_g14

0x84c6,	// (0x0002df20) main_cset_slider_pane_g15_ParamLimits

0x84c6,	// (0x0002df20) main_cset_slider_pane_g15

0xd1ff,	// (0x00032c59) main_cset_slider_pane_t14_ParamLimits

0xd1ff,	// (0x00032c59) main_cset_slider_pane_t14

0xd238,	// (0x00032c92) main_cset_slider_pane_t15_ParamLimits

0xd238,	// (0x00032c92) main_cset_slider_pane_t15

0x8a00,	// (0x0002e45a) aid_cam4_burst_size_cell_ParamLimits

0x8a00,	// (0x0002e45a) aid_cam4_burst_size_cell

0x8a20,	// (0x0002e47a) grid_cam4_burst_pane_ParamLimits

0x8a20,	// (0x0002e47a) grid_cam4_burst_pane

0x8a58,	// (0x0002e4b2) linegrid_cam4_burst_pane_ParamLimits

0x8a58,	// (0x0002e4b2) linegrid_cam4_burst_pane

0xd41e,	// (0x00032e78) scroll_pane_cp30_ParamLimits

0xd41e,	// (0x00032e78) scroll_pane_cp30

0x8a7c,	// (0x0002e4d6) cell_cam4_burst_pane_ParamLimits

0x8a7c,	// (0x0002e4d6) cell_cam4_burst_pane

0xd42a,	// (0x00032e84) linegrid_cam4_burst_pane_g1_ParamLimits

0xd42a,	// (0x00032e84) linegrid_cam4_burst_pane_g1

0x8ac9,	// (0x0002e523) linegrid_cam4_burst_pane_g2_ParamLimits

0x8ac9,	// (0x0002e523) linegrid_cam4_burst_pane_g2

0xd437,	// (0x00032e91) linegrid_cam4_burst_pane_g3_ParamLimits

0xd437,	// (0x00032e91) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x000354ba) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x000354ba) linegrid_cam4_burst_pane_g

0x8ada,	// (0x0002e534) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8ada,	// (0x0002e534) linegrid_cam4_burst_pane_g3_copy1

0xd444,	// (0x00032e9e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd444,	// (0x00032e9e) linegrid_cam4_burst_pane_g4

0x8af4,	// (0x0002e54e) linegrid_cam4_burst_pane_g5_ParamLimits

0x8af4,	// (0x0002e54e) linegrid_cam4_burst_pane_g5

0x8b05,	// (0x0002e55f) linegrid_cam4_burst_pane_g6_ParamLimits

0x8b05,	// (0x0002e55f) linegrid_cam4_burst_pane_g6

0xd451,	// (0x00032eab) linegrid_cam4_burst_pane_g7_ParamLimits

0xd451,	// (0x00032eab) linegrid_cam4_burst_pane_g7

0x8b1c,	// (0x0002e576) cell_cam4_burst_pane_g1

0xd46a,	// (0x00032ec4) main_cam5_pane_t1_ParamLimits

0xd46a,	// (0x00032ec4) main_cam5_pane_t1

0xd47c,	// (0x00032ed6) main_cam5_pane_t2_ParamLimits

0xd47c,	// (0x00032ed6) main_cam5_pane_t2

0xd48e,	// (0x00032ee8) main_cam5_pane_t3_ParamLimits

0xd48e,	// (0x00032ee8) main_cam5_pane_t3

0xd4a0,	// (0x00032efa) main_cam5_pane_t4_ParamLimits

0xd4a0,	// (0x00032efa) main_cam5_pane_t4

0xd4b8,	// (0x00032f12) main_cam5_pane_t5_ParamLimits

0xd4b8,	// (0x00032f12) main_cam5_pane_t5

0xd4cc,	// (0x00032f26) main_cam5_pane_t6_ParamLimits

0xd4cc,	// (0x00032f26) main_cam5_pane_t6

0xd4e0,	// (0x00032f3a) main_cam5_pane_t7_ParamLimits

0xd4e0,	// (0x00032f3a) main_cam5_pane_t7

0xd4f2,	// (0x00032f4c) main_cam5_pane_t8_ParamLimits

0xd4f2,	// (0x00032f4c) main_cam5_pane_t8

0xd50e,	// (0x00032f68) main_cam5_pane_t9_ParamLimits

0xd50e,	// (0x00032f68) main_cam5_pane_t9

0xd520,	// (0x00032f7a) main_cam5_pane_t10_ParamLimits

0xd520,	// (0x00032f7a) main_cam5_pane_t10

0xd532,	// (0x00032f8c) main_cam5_pane_t11_ParamLimits

0xd532,	// (0x00032f8c) main_cam5_pane_t11

0xd544,	// (0x00032f9e) main_cam5_pane_t12_ParamLimits

0xd544,	// (0x00032f9e) main_cam5_pane_t12

0xd559,	// (0x00032fb3) main_cam5_pane_t13_ParamLimits

0xd559,	// (0x00032fb3) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x000354c6) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x000354c6) main_cam5_pane_t

0x21a6,	// (0x00027c00) popup_scut_keymap_window_ParamLimits

0x21a6,	// (0x00027c00) popup_scut_keymap_window

0x8b2f,	// (0x0002e589) aid_size_cell_brow_shortcut

0x51bf,	// (0x0002ac19) bg_popup_window_pane_cp010

0x8b3b,	// (0x0002e595) grid_scut_pane

0x8b47,	// (0x0002e5a1) cell_scut_pane_ParamLimits

0x8b47,	// (0x0002e5a1) cell_scut_pane

0x8b5e,	// (0x0002e5b8) cell_scut_pane_g1

0xd576,	// (0x00032fd0) cell_scut_pane_t1

0xd585,	// (0x00032fdf) cell_scut_pane_t2

0x8b67,	// (0x0002e5c1) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x000354e1) cell_scut_pane_t

0x72fe,	// (0x0002cd58) main_mup3_pane_g8_ParamLimits

0x72fe,	// (0x0002cd58) main_mup3_pane_g8

0x1ae7,	// (0x00027541) area_vitu2_query_pane_ParamLimits

0x1ae7,	// (0x00027541) area_vitu2_query_pane

0x88a8,	// (0x0002e302) input_focus_pane_cp08

0xd594,	// (0x00032fee) area_vitu2_query_pane_g1

0x8b75,	// (0x0002e5cf) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x000354e8) area_vitu2_query_pane_g

0x8b86,	// (0x0002e5e0) area_vitu2_query_pane_t1_ParamLimits

0x8b86,	// (0x0002e5e0) area_vitu2_query_pane_t1

0x8b9a,	// (0x0002e5f4) area_vitu2_query_pane_t2_ParamLimits

0x8b9a,	// (0x0002e5f4) area_vitu2_query_pane_t2

0x8bae,	// (0x0002e608) area_vitu2_query_pane_t3_ParamLimits

0x8bae,	// (0x0002e608) area_vitu2_query_pane_t3

0xd5a0,	// (0x00032ffa) area_vitu2_query_pane_t4_ParamLimits

0xd5a0,	// (0x00032ffa) area_vitu2_query_pane_t4

0xd5c8,	// (0x00033022) area_vitu2_query_pane_t5_ParamLimits

0xd5c8,	// (0x00033022) area_vitu2_query_pane_t5

0xd5f0,	// (0x0003304a) area_vitu2_query_pane_t6_ParamLimits

0xd5f0,	// (0x0003304a) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x000354ed) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x000354ed) area_vitu2_query_pane_t

0x8bd6,	// (0x0002e630) bg_button_pane_cp018

0x8be4,	// (0x0002e63e) bg_button_pane_cp021

0x8bf0,	// (0x0002e64a) bg_button_pane_cp022

0x8bff,	// (0x0002e659) input_focus_pane_cp09

0x4fea,	// (0x0002aa44) aid_size_touch_mv_arrow_left

0x5013,	// (0x0002aa6d) aid_size_touch_mv_arrow_right

0x84de,	// (0x0002df38) main_cset_slider_pane_g16_ParamLimits

0x84de,	// (0x0002df38) main_cset_slider_pane_g16

0x84ea,	// (0x0002df44) main_cset_slider_pane_g17_ParamLimits

0x84ea,	// (0x0002df44) main_cset_slider_pane_g17

0x8b1c,	// (0x0002e576) cell_cam4_burst_pane_g1_ParamLimits

0x1f6e,	// (0x000279c8) compa_mode_pane

0x86c8,	// (0x0002e122) popup_vtel_slider_window_g3_ParamLimits

0x86c8,	// (0x0002e122) popup_vtel_slider_window_g3

0x86df,	// (0x0002e139) popup_vtel_slider_window_g4_ParamLimits

0x86df,	// (0x0002e139) popup_vtel_slider_window_g4

0x86f6,	// (0x0002e150) popup_vtel_slider_window_t1_ParamLimits

0x86f6,	// (0x0002e150) popup_vtel_slider_window_t1

0x1f6e,	// (0x000279c8) main_cl_pane

0xbda8,	// (0x00031802) popup_imed_adjust2_window_ParamLimits

0xbd80,	// (0x000317da) bg_tb_trans_pane_cp05_ParamLimits

0xc791,	// (0x000321eb) popup_imed_adjust2_window_g1_ParamLimits

0xc7a0,	// (0x000321fa) popup_imed_adjust2_window_g2_ParamLimits

0xc7a0,	// (0x000321fa) popup_imed_adjust2_window_g2

0xc7ac,	// (0x00032206) popup_imed_adjust2_window_g3_ParamLimits

0xc7ac,	// (0x00032206) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00035258) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00035258) popup_imed_adjust2_window_g

0xc7b8,	// (0x00032212) popup_imed_adjust2_window_t1_ParamLimits

0xc7d0,	// (0x0003222a) slider_imed_adjust_pane_ParamLimits

0xc7e4,	// (0x0003223e) slider_imed_adjust_pane_g1_ParamLimits

0xc7f4,	// (0x0003224e) slider_imed_adjust_pane_g2_ParamLimits

0xc804,	// (0x0003225e) slider_imed_adjust_pane_g3_ParamLimits

0xc815,	// (0x0003226f) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0003525f) slider_imed_adjust_pane_g_ParamLimits

0x1838,	// (0x00027292) aid_touch_area_cam4_ParamLimits

0x1838,	// (0x00027292) aid_touch_area_cam4

0xcf26,	// (0x00032980) battery_pane_cp01

0x1908,	// (0x00027362) main_camera4_pane_g6_ParamLimits

0x1908,	// (0x00027362) main_camera4_pane_g6

0x1932,	// (0x0002738c) main_camera4_pane_t2_ParamLimits

0x1932,	// (0x0002738c) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00035362) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00035362) main_camera4_pane_t

0x1953,	// (0x000273ad) aid_touch_area_vid4_ParamLimits

0x1953,	// (0x000273ad) aid_touch_area_vid4

0x19ba,	// (0x00027414) main_video4_pane_g5_ParamLimits

0x19ba,	// (0x00027414) main_video4_pane_g5

0x19e5,	// (0x0002743f) vid4_progress_pane_ParamLimits

0x19e5,	// (0x0002743f) vid4_progress_pane

0xd1c5,	// (0x00032c1f) main_cset_slider_pane_g18_ParamLimits

0xd1c5,	// (0x00032c1f) main_cset_slider_pane_g18

0xd45e,	// (0x00032eb8) cell_cam4_burst_pane_g2_ParamLimits

0xd45e,	// (0x00032eb8) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x000354c1) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x000354c1) cell_cam4_burst_pane_g

0x2be4,	// (0x0002863e) bg_cl_pane_ParamLimits

0x2be4,	// (0x0002863e) bg_cl_pane

0x8c0e,	// (0x0002e668) cl_header_pane_ParamLimits

0x8c0e,	// (0x0002e668) cl_header_pane

0x8c22,	// (0x0002e67c) cl_listscroll_pane_ParamLimits

0x8c22,	// (0x0002e67c) cl_listscroll_pane

0xd63c,	// (0x00033096) bg_cl_pane_g1

0xd644,	// (0x0003309e) bg_cl_pane_g2

0xd64c,	// (0x000330a6) bg_cl_pane_g3

0xd654,	// (0x000330ae) bg_cl_pane_g4

0xd65c,	// (0x000330b6) bg_cl_pane_g5

0xd664,	// (0x000330be) bg_cl_pane_g6

0xd66c,	// (0x000330c6) bg_cl_pane_g7

0xd674,	// (0x000330ce) bg_cl_pane_g8

0xd67c,	// (0x000330d6) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x000354fc) bg_cl_pane_g

0x8c32,	// (0x0002e68c) aid_height_cl_leading_ParamLimits

0x8c32,	// (0x0002e68c) aid_height_cl_leading

0x8c3e,	// (0x0002e698) aid_height_cl_text_ParamLimits

0x8c3e,	// (0x0002e698) aid_height_cl_text

0x21e0,	// (0x00027c3a) bg_cl_header_pane_ParamLimits

0x21e0,	// (0x00027c3a) bg_cl_header_pane

0x8c5d,	// (0x0002e6b7) cl_header_pane_g1_ParamLimits

0x8c5d,	// (0x0002e6b7) cl_header_pane_g1

0x8c73,	// (0x0002e6cd) cl_header_pane_t1_ParamLimits

0x8c73,	// (0x0002e6cd) cl_header_pane_t1

0xd684,	// (0x000330de) cl_list_pane

0xd198,	// (0x00032bf2) hc_scroll_pane_cp01

0x3cb0,	// (0x0002970a) bg_cl_header_pane_g1

0xd07e,	// (0x00032ad8) bg_cl_header_pane_g2

0x3cd0,	// (0x0002972a) bg_cl_header_pane_g3

0xd08e,	// (0x00032ae8) bg_cl_header_pane_g4

0xd086,	// (0x00032ae0) bg_cl_header_pane_g5

0xd32b,	// (0x00032d85) bg_cl_header_pane_g6

0xd0a6,	// (0x00032b00) bg_cl_header_pane_g7

0xd0ae,	// (0x00032b08) bg_cl_header_pane_g8

0xd09e,	// (0x00032af8) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0003550f) bg_cl_header_pane_g

0x8c8c,	// (0x0002e6e6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8c8c,	// (0x0002e6e6) hc_cl_list_double_graphic_heading_pane

0x8c9d,	// (0x0002e6f7) hc_cl_list_single_graphic_pane_ParamLimits

0x8c9d,	// (0x0002e6f7) hc_cl_list_single_graphic_pane

0x8cb3,	// (0x0002e70d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8cb3,	// (0x0002e70d) hc_cl_list_single_graphic_pane_g1

0x8cbf,	// (0x0002e719) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8cbf,	// (0x0002e719) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00035522) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00035522) hc_cl_list_single_graphic_pane_g

0x8cd3,	// (0x0002e72d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8cd3,	// (0x0002e72d) hc_cl_list_single_graphic_pane_t1

0x8cb3,	// (0x0002e70d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8cb3,	// (0x0002e70d) hc_cl_list_double_graphic_heading_pane_g1

0x8ce8,	// (0x0002e742) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8ce8,	// (0x0002e742) hc_cl_list_double_graphic_heading_pane_g2

0x8cfc,	// (0x0002e756) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8cfc,	// (0x0002e756) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00035527) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00035527) hc_cl_list_double_graphic_heading_pane_g

0x8d10,	// (0x0002e76a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8d10,	// (0x0002e76a) hc_cl_list_double_graphic_heading_pane_t1

0x8d25,	// (0x0002e77f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8d25,	// (0x0002e77f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0003552e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0003552e) hc_cl_list_double_graphic_heading_pane_t

0xd695,	// (0x000330ef) vid4_progress_pane_g1

0xd6a5,	// (0x000330ff) vid4_progress_pane_g2

0x488a,	// (0x0002a2e4) vid4_progress_pane_g3

0xd6b5,	// (0x0003310f) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x00035533) vid4_progress_pane_g

0xd6d3,	// (0x0003312d) vid4_progress_pane_t1

0xd6e8,	// (0x00033142) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0003553e) vid4_progress_pane_t

0xd713,	// (0x0003316d) wait_bar_pane_cp07

0xc079,	// (0x00031ad3) blid_firmament_pane_ParamLimits

0xc0bc,	// (0x00031b16) popup_blid_sat_info2_window_g1

0xc0e0,	// (0x00031b3a) popup_blid_sat_info2_window_t3

0xc0ee,	// (0x00031b48) popup_blid_sat_info2_window_t4

0xc0fc,	// (0x00031b56) popup_blid_sat_info2_window_t5

0xc10a,	// (0x00031b64) popup_blid_sat_info2_window_t6

0xc11a,	// (0x00031b74) popup_blid_sat_info2_window_t7

0xc128,	// (0x00031b82) popup_blid_sat_info2_window_t8

0xc136,	// (0x00031b90) popup_blid_sat_info2_window_t9

0xc144,	// (0x00031b9e) popup_blid_sat_info2_window_t10

0xc206,	// (0x00031c60) aid_firma_cardinal_ParamLimits

0xc21a,	// (0x00031c74) blid_firmament_pane_t1_ParamLimits

0xc231,	// (0x00031c8b) blid_firmament_pane_t2_ParamLimits

0xc248,	// (0x00031ca2) blid_firmament_pane_t3_ParamLimits

0xc25f,	// (0x00031cb9) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00035151) blid_firmament_pane_t_ParamLimits

0xc276,	// (0x00031cd0) blid_sat_info_pane_ParamLimits

0x21e0,	// (0x00027c3a) main_cam_set_pane_ParamLimits

0x7ae3,	// (0x0002d53d) aid_size_cell_colour_35_ParamLimits

0x7b03,	// (0x0002d55d) aid_size_cell_colour_112_ParamLimits

0x7b23,	// (0x0002d57d) aid_size_cell_effect_ParamLimits

0xbd80,	// (0x000317da) bg_tb_trans_pane_cp02_ParamLimits

0x4804,	// (0x0002a25e) heading_imed_pane_ParamLimits

0x7b43,	// (0x0002d59d) listscroll_imed_pane_ParamLimits

0xb3b2,	// (0x00030e0c) popup_call2_audio_first_window_g5_ParamLimits

0xb3b2,	// (0x00030e0c) popup_call2_audio_first_window_g5

0x1615,	// (0x0002706f) aid_size_touch_image3_arrow_left_ParamLimits

0x1615,	// (0x0002706f) aid_size_touch_image3_arrow_left

0x1641,	// (0x0002709b) aid_size_touch_image3_arrow_right_ParamLimits

0x1641,	// (0x0002709b) aid_size_touch_image3_arrow_right

0xd6fe,	// (0x00033158) vid4_progress_pane_t3

0x7e56,	// (0x0002d8b0) main_hwr_training_symbol_option_pane_ParamLimits

0x7e56,	// (0x0002d8b0) main_hwr_training_symbol_option_pane

0xca7e,	// (0x000324d8) popup_hwr_training_preview_window_ParamLimits

0xca7e,	// (0x000324d8) popup_hwr_training_preview_window

0x14c8,	// (0x00026f22) hwr_training_navi_pane_g5_ParamLimits

0x14c8,	// (0x00026f22) hwr_training_navi_pane_g5

0xd05e,	// (0x00032ab8) popup_char_count_window

0xd066,	// (0x00032ac0) bg_popup_sub_pane_cp20_ParamLimits

0x1e72,	// (0x000278cc) list_vitu2_match_list_pane_ParamLimits

0x1e81,	// (0x000278db) vitu2_page_scroll_pane_ParamLimits

0x1e81,	// (0x000278db) vitu2_page_scroll_pane

0xd77f,	// (0x000331d9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd77f,	// (0x000331d9) list_single_hwr_training_symbol_option_pane

0xd792,	// (0x000331ec) list_single_hwr_training_symbol_option_pane_g1

0xd79a,	// (0x000331f4) list_single_hwr_training_symbol_option_pane_t1

0xd7a8,	// (0x00033202) bg_button_pane_cp023

0xd7b1,	// (0x0003320b) bg_button_pane_cp024

0x8d3a,	// (0x0002e794) vitu2_page_scroll_pane_g1

0x8d42,	// (0x0002e79c) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00035545) vitu2_page_scroll_pane_g

0x8d4a,	// (0x0002e7a4) vitu2_page_scroll_pane_t1

0xd7e4,	// (0x0003323e) popup_char_count_window_g1

0xd7ed,	// (0x00033247) popup_char_count_window_g2

0xd7f6,	// (0x00033250) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0003554a) popup_char_count_window_g

0xd7ff,	// (0x00033259) popup_char_count_window_t1

0x1f6e,	// (0x000279c8) main_vded2_pane

0xc77d,	// (0x000321d7) aid_size_cell_imed_line

0xc787,	// (0x000321e1) grid_imed_line_width_pane

0x1a53,	// (0x000274ad) vid4_indicators_pane_g4

0xd80d,	// (0x00033267) cell_imed_line_width_pane_ParamLimits

0xd80d,	// (0x00033267) cell_imed_line_width_pane

0xd821,	// (0x0003327b) cell_imed_line_width_pane_g1

0xc027,	// (0x00031a81) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00035551) cell_imed_line_width_pane_g

0x8d59,	// (0x0002e7b3) main_vded2_pane_g1_ParamLimits

0x8d59,	// (0x0002e7b3) main_vded2_pane_g1

0x8d6f,	// (0x0002e7c9) main_vded2_pane_g2_ParamLimits

0x8d6f,	// (0x0002e7c9) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00035556) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00035556) main_vded2_pane_g

0x8d81,	// (0x0002e7db) vded2_slider_pane_ParamLimits

0x8d81,	// (0x0002e7db) vded2_slider_pane

0x8d91,	// (0x0002e7eb) aid_size_touch_vded2_end

0x8d9b,	// (0x0002e7f5) aid_size_touch_vded2_playhead

0xd82a,	// (0x00033284) aid_size_touch_vded2_start

0xd832,	// (0x0003328c) vded2_slider_bg_pane

0xd83b,	// (0x00033295) vded2_slider_pane_g1

0xd844,	// (0x0003329e) vded2_slider_pane_g2

0x8da5,	// (0x0002e7ff) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0003555b) vded2_slider_pane_g

0xd84c,	// (0x000332a6) vded2_slider_bg_pane_g1

0xd855,	// (0x000332af) vded2_slider_bg_pane_g2

0xd85e,	// (0x000332b8) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x00035562) vded2_slider_bg_pane_g

0x58c5,	// (0x0002b31f) aid_postcard_touch_down_pane_ParamLimits

0x58c5,	// (0x0002b31f) aid_postcard_touch_down_pane

0x58db,	// (0x0002b335) aid_postcard_touch_up_pane_ParamLimits

0x58db,	// (0x0002b335) aid_postcard_touch_up_pane

0x1f6e,	// (0x000279c8) main_blid2_pane

0xbd8e,	// (0x000317e8) popup_blid2_search_window

0x1f6e,	// (0x000279c8) blid2_gps_pane

0x1f6e,	// (0x000279c8) blid2_navig_pane

0x1f6e,	// (0x000279c8) blid2_search_pane

0x1f6e,	// (0x000279c8) blid2_tripm_pane

0x8db0,	// (0x0002e80a) blid2_search_pane_g1_ParamLimits

0x8db0,	// (0x0002e80a) blid2_search_pane_g1

0x8dca,	// (0x0002e824) blid2_search_pane_t1_ParamLimits

0x8dca,	// (0x0002e824) blid2_search_pane_t1

0x8ddc,	// (0x0002e836) aid_size_cell_blid2_gps_ParamLimits

0x8ddc,	// (0x0002e836) aid_size_cell_blid2_gps

0x8df4,	// (0x0002e84e) blid2_gps_pane_g1_ParamLimits

0x8df4,	// (0x0002e84e) blid2_gps_pane_g1

0x8e08,	// (0x0002e862) grid_blid2_satellite_pane_ParamLimits

0x8e08,	// (0x0002e862) grid_blid2_satellite_pane

0x8e22,	// (0x0002e87c) blid2_navig_pane_g1_ParamLimits

0x8e22,	// (0x0002e87c) blid2_navig_pane_g1

0x8e2e,	// (0x0002e888) blid2_navig_pane_t1_ParamLimits

0x8e2e,	// (0x0002e888) blid2_navig_pane_t1

0x8e49,	// (0x0002e8a3) blid2_navig_pane_t2_ParamLimits

0x8e49,	// (0x0002e8a3) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00035569) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00035569) blid2_navig_pane_t

0x8e64,	// (0x0002e8be) blid2_navig_ring_pane_ParamLimits

0x8e64,	// (0x0002e8be) blid2_navig_ring_pane

0x8e7d,	// (0x0002e8d7) blid2_speed_pane_ParamLimits

0x8e7d,	// (0x0002e8d7) blid2_speed_pane

0x8e89,	// (0x0002e8e3) blid2_tripm_pane_g1_ParamLimits

0x8e89,	// (0x0002e8e3) blid2_tripm_pane_g1

0x8ea2,	// (0x0002e8fc) blid2_tripm_pane_g2_ParamLimits

0x8ea2,	// (0x0002e8fc) blid2_tripm_pane_g2

0x8eb6,	// (0x0002e910) blid2_tripm_pane_g3_ParamLimits

0x8eb6,	// (0x0002e910) blid2_tripm_pane_g3

0x8eca,	// (0x0002e924) blid2_tripm_pane_g4_ParamLimits

0x8eca,	// (0x0002e924) blid2_tripm_pane_g4

0x8ede,	// (0x0002e938) blid2_tripm_pane_g5_ParamLimits

0x8ede,	// (0x0002e938) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0003556e) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0003556e) blid2_tripm_pane_g

0x8f04,	// (0x0002e95e) blid2_tripm_pane_t1_ParamLimits

0x8f04,	// (0x0002e95e) blid2_tripm_pane_t1

0x8f1f,	// (0x0002e979) blid2_tripm_pane_t2_ParamLimits

0x8f1f,	// (0x0002e979) blid2_tripm_pane_t2

0x8f38,	// (0x0002e992) blid2_tripm_pane_t3_ParamLimits

0x8f38,	// (0x0002e992) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0003557b) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0003557b) blid2_tripm_pane_t

0x8f7f,	// (0x0002e9d9) cell_blid2_satellite_pane_ParamLimits

0x8f7f,	// (0x0002e9d9) cell_blid2_satellite_pane

0x8f9d,	// (0x0002e9f7) cell_blid2_satellite_pane_g1

0xd867,	// (0x000332c1) cell_blid2_satellite_pane_t1

0xc286,	// (0x00031ce0) blid2_speed_pane_g1

0xd875,	// (0x000332cf) blid2_speed_pane_t1

0xd883,	// (0x000332dd) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x00035584) blid2_speed_pane_t

0xc286,	// (0x00031ce0) blid2_navig_ring_pane_g1

0x8fa6,	// (0x0002ea00) blid2_navig_ring_pane_g2

0x8fae,	// (0x0002ea08) blid2_navig_ring_pane_g3

0x8fb6,	// (0x0002ea10) blid2_navig_ring_pane_g4

0x8fbe,	// (0x0002ea18) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x00035589) blid2_navig_ring_pane_g

0x1f6e,	// (0x000279c8) bg_popup_window_pane_cp011

0xd891,	// (0x000332eb) popup_blid2_search_window_g1

0xd899,	// (0x000332f3) popup_blid2_search_window_t1

0xd8a7,	// (0x00033301) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x00035594) popup_blid2_search_window_t

0x3b7c,	// (0x000295d6) main_browser_pane_g1

0x2be4,	// (0x0002863e) main_browser_pane_ParamLimits

0xd066,	// (0x00032ac0) bg_button_pane_cp011_ParamLimits

0x1de8,	// (0x00027842) cell_vitu2_function_pane_g1_ParamLimits

0xbd80,	// (0x000317da) bg_popup_sub_pane_cp22_ParamLimits

0x88a8,	// (0x0002e302) input_focus_pane_cp08_ParamLimits

0x88bf,	// (0x0002e319) popup_vitu2_query_button_pane_ParamLimits

0x88bf,	// (0x0002e319) popup_vitu2_query_button_pane

0x88d0,	// (0x0002e32a) popup_vitu2_query_input_button_pane

0xd3a8,	// (0x00032e02) popup_vitu2_query_window_g1_ParamLimits

0x88da,	// (0x0002e334) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00035495) popup_vitu2_query_window_g_ParamLimits

0x1f6e,	// (0x000279c8) bg_button_pane_cp026

0x8fc6,	// (0x0002ea20) popup_vitu2_query_input_button_pane_g1

0x1f6e,	// (0x000279c8) bg_button_pane_cp025

0xd8b5,	// (0x0003330f) popup_vitu2_query_button_pane_t1

0x6fb9,	// (0x0002ca13) main_mp3_pane_t6

0x6fc7,	// (0x0002ca21) popup_slider_window_cp01

0xcf62,	// (0x000329bc) cam4_battery_pane

0xcfc9,	// (0x00032a23) cam4_battery_pane_cp02

0xd68d,	// (0x000330e7) cam4_battery_pane_cp01

0xd68d,	// (0x000330e7) cam4_battery_pane_cp03

0xcdd1,	// (0x0003282b) cam4_battery_pane_g1

0xc286,	// (0x00031ce0) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00035599) cam4_battery_pane_g

0xc152,	// (0x00031bac) popup_blid_sat_info2_window_t11

0x4fea,	// (0x0002aa44) aid_size_touch_mv_arrow_left_ParamLimits

0x5013,	// (0x0002aa6d) aid_size_touch_mv_arrow_right_ParamLimits

0x505b,	// (0x0002aab5) navi_pane_g1_ParamLimits

0x5067,	// (0x0002aac1) navi_pane_g2_ParamLimits

0x5095,	// (0x0002aaef) navi_pane_g3_ParamLimits

0xf409,	// (0x00034e63) navi_pane_g_ParamLimits

0x5151,	// (0x0002abab) navi_pane_mv_t1_ParamLimits

0x7b4f,	// (0x0002d5a9) grid_imed_effect_pane_ParamLimits

0x3724,	// (0x0002917e) aid_placing_vt_slider_lsc

0x3734,	// (0x0002918e) aid_placing_vt_slider_prt

0x21e0,	// (0x00027c3a) bg_tb_trans_pane_cp01_ParamLimits

0xc412,	// (0x00031e6c) popup_image_details_window_g1_ParamLimits

0xc425,	// (0x00031e7f) popup_image_details_window_g2_ParamLimits

0xc43a,	// (0x00031e94) popup_image_details_window_g3_ParamLimits

0xc43a,	// (0x00031e94) popup_image_details_window_g3

0xf73c,	// (0x00035196) popup_image_details_window_g_ParamLimits

0xc44e,	// (0x00031ea8) popup_image_details_window_t1_ParamLimits

0xc460,	// (0x00031eba) popup_image_details_window_t2_ParamLimits

0xc479,	// (0x00031ed3) popup_image_details_window_t3_ParamLimits

0xc48d,	// (0x00031ee7) popup_image_details_window_t4_ParamLimits

0xc4a8,	// (0x00031f02) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0003519d) popup_image_details_window_t_ParamLimits

0x8c4a,	// (0x0002e6a4) cl_header_name_pane_ParamLimits

0x8c4a,	// (0x0002e6a4) cl_header_name_pane

0x8fce,	// (0x0002ea28) cl_header_name_pane_t1_ParamLimits

0x8fce,	// (0x0002ea28) cl_header_name_pane_t1

0x8fef,	// (0x0002ea49) cl_header_name_pane_t2_ParamLimits

0x8fef,	// (0x0002ea49) cl_header_name_pane_t2

0x9031,	// (0x0002ea8b) cl_header_name_pane_t3_ParamLimits

0x9031,	// (0x0002ea8b) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0003559e) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0003559e) cl_header_name_pane_t

0x5122,	// (0x0002ab7c) navi_pane_mv_g2_ParamLimits

0xcfec,	// (0x00032a46) field_vitu2_entry_pane_g1_ParamLimits

0xcff8,	// (0x00032a52) field_vitu2_entry_pane_g2_ParamLimits

0xd004,	// (0x00032a5e) field_vitu2_entry_pane_g3_ParamLimits

0xd004,	// (0x00032a5e) field_vitu2_entry_pane_g3

0xf93a,	// (0x00035394) field_vitu2_entry_pane_g_ParamLimits

0x1c88,	// (0x000276e2) cell_vitu2_itu_pane_g1_ParamLimits

0x1c98,	// (0x000276f2) cell_vitu2_itu_pane_g2_ParamLimits

0x1c98,	// (0x000276f2) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x000353a0) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x000353a0) cell_vitu2_itu_pane_g

0xd066,	// (0x00032ac0) bg_vkb2_func_pane_cp05_ParamLimits

0xd066,	// (0x00032ac0) bg_vkb2_func_pane_cp05

0xd066,	// (0x00032ac0) bg_vkb2_func_pane_cp03

0xd066,	// (0x00032ac0) bg_vkb2_func_pane_cp04

0xd066,	// (0x00032ac0) bg_vkb2_func_pane_cp10_ParamLimits

0xd066,	// (0x00032ac0) bg_vkb2_func_pane_cp10

0x8bf0,	// (0x0002e64a) bg_vkb2_func_pane_cp08

0x8bd6,	// (0x0002e630) bg_vkb2_func_pane_cp06

0x8be4,	// (0x0002e63e) bg_vkb2_func_pane_cp07

0xd7ba,	// (0x00033214) bg_vkb2_func_pane_cp11_ParamLimits

0xd7ba,	// (0x00033214) bg_vkb2_func_pane_cp11

0xd7cf,	// (0x00033229) bg_vkb2_func_pane_cp12_ParamLimits

0xd7cf,	// (0x00033229) bg_vkb2_func_pane_cp12

0x1f6e,	// (0x000279c8) bg_vkb2_func_pane_cp09

0xd07e,	// (0x00032ad8) bg_vkb2_func_pane_g1

0x3cd0,	// (0x0002972a) bg_vkb2_func_pane_g2

0xd086,	// (0x00032ae0) bg_vkb2_func_pane_g3

0xd08e,	// (0x00032ae8) bg_vkb2_func_pane_g4

0xd32b,	// (0x00032d85) bg_vkb2_func_pane_g5

0xd0a6,	// (0x00032b00) bg_vkb2_func_pane_g6

0xd0ae,	// (0x00032b08) bg_vkb2_func_pane_g7

0xd09e,	// (0x00032af8) bg_vkb2_func_pane_g8

0x3cb0,	// (0x0002970a) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x000355a5) bg_vkb2_func_pane_g

0x8ef2,	// (0x0002e94c) blid2_tripm_pane_g6_ParamLimits

0x8ef2,	// (0x0002e94c) blid2_tripm_pane_g6

0xcd8b,	// (0x000327e5) mp4_progress_pane_g1

0x8f6b,	// (0x0002e9c5) blid2_tripm_values_pane_ParamLimits

0x8f6b,	// (0x0002e9c5) blid2_tripm_values_pane

0x9062,	// (0x0002eabc) blid2_tripm_values_pane_t1

0x9070,	// (0x0002eaca) blid2_tripm_values_pane_t2

0x907e,	// (0x0002ead8) blid2_tripm_values_pane_t3

0x908c,	// (0x0002eae6) blid2_tripm_values_pane_t4

0x909a,	// (0x0002eaf4) blid2_tripm_values_pane_t5

0x90a8,	// (0x0002eb02) blid2_tripm_values_pane_t6

0x90b6,	// (0x0002eb10) blid2_tripm_values_pane_t7

0x90c4,	// (0x0002eb1e) blid2_tripm_values_pane_t8

0x90d2,	// (0x0002eb2c) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x000355b8) blid2_tripm_values_pane_t

0x3770,	// (0x000291ca) call_video_pane_t1_ParamLimits

0x378e,	// (0x000291e8) call_video_pane_t2_ParamLimits

0xf292,	// (0x00034cec) call_video_pane_t_ParamLimits

0x57de,	// (0x0002b238) msg_header_pane_g1_ParamLimits

0x57ec,	// (0x0002b246) msg_header_pane_g2_ParamLimits

0x57ec,	// (0x0002b246) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00034f06) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00034f06) msg_header_pane_g

0x2be4,	// (0x0002863e) main_clock2_pane_ParamLimits

0x78f3,	// (0x0002d34d) grid_clock2_toolbar_pane_ParamLimits

0x78f3,	// (0x0002d34d) grid_clock2_toolbar_pane

0x78f3,	// (0x0002d34d) listscroll_clock2_pane_ParamLimits

0x78f3,	// (0x0002d34d) listscroll_clock2_pane

0x79cf,	// (0x0002d429) main_clock2_pane_t3_ParamLimits

0x79cf,	// (0x0002d429) main_clock2_pane_t3

0x79ea,	// (0x0002d444) main_clock2_pane_t4_ParamLimits

0x79ea,	// (0x0002d444) main_clock2_pane_t4

0xd8c3,	// (0x0003331d) cell_clock2_toolbar_pane

0xd8cb,	// (0x00033325) cell_clock2_toolbar_pane_cp01

0xd8cb,	// (0x00033325) cell_clock2_toolbar_pane_cp02

0xd8d3,	// (0x0003332d) cell_clock2_toolbar_pane_cp03

0xd8db,	// (0x00033335) list_clock2_pane

0x4d94,	// (0x0002a7ee) scroll_pane_cp10

0xd8e3,	// (0x0003333d) list_single_clock2_pane_ParamLimits

0xd8e3,	// (0x0003333d) list_single_clock2_pane

0x51bf,	// (0x0002ac19) list_highlight_pane_cp08

0xd8f0,	// (0x0003334a) list_single_clock2_pane_t1

0xd8fe,	// (0x00033358) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x000355cb) list_single_clock2_pane_t

0x1f6e,	// (0x000279c8) bg_button_pane_cp10

0xd90c,	// (0x00033366) cell_clock2_toolbar_pane_g1

0x0f41,	// (0x0002699b) aid_main_viewer_pane_g1_ParamLimits

0x0f41,	// (0x0002699b) aid_main_viewer_pane_g1

0x0f4f,	// (0x000269a9) aid_main_viewer_pane_g2_ParamLimits

0x0f4f,	// (0x000269a9) aid_main_viewer_pane_g2

0x587b,	// (0x0002b2d5) aid_main_viewer_pane_g3_ParamLimits

0x587b,	// (0x0002b2d5) aid_main_viewer_pane_g3

0x588a,	// (0x0002b2e4) aid_main_viewer_pane_g4_ParamLimits

0x588a,	// (0x0002b2e4) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00034f17) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00034f17) aid_main_viewer_pane_g

0x66b3,	// (0x0002c10d) main_calc_pane_ParamLimits

0x66c7,	// (0x0002c121) main_dialer2_pane_ParamLimits

0x1f6e,	// (0x000279c8) main_cam6_pane

0x1f6e,	// (0x000279c8) main_vid6_pane

0x78ff,	// (0x0002d359) listscroll_gen_pane_cp06_ParamLimits

0x78ff,	// (0x0002d359) listscroll_gen_pane_cp06

0x7a05,	// (0x0002d45f) main_clock2_pane_t5_ParamLimits

0x7a05,	// (0x0002d45f) main_clock2_pane_t5

0x7a5c,	// (0x0002d4b6) aid_call2_pane_cp10_ParamLimits

0x7a6e,	// (0x0002d4c8) aid_call_pane_cp10_ParamLimits

0x4f79,	// (0x0002a9d3) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4f79,	// (0x0002a9d3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7a80,	// (0x0002d4da) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7a80,	// (0x0002d4da) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4f79,	// (0x0002a9d3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0003524d) popup_clock_analogue_window_cp10_g_ParamLimits

0x7a92,	// (0x0002d4ec) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7f15,	// (0x0002d96f) cell_dialer2_keypad_pane_g2_ParamLimits

0x7f15,	// (0x0002d96f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00035333) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00035333) cell_dialer2_keypad_pane_g

0x7f31,	// (0x0002d98b) cell_dialer2_keypad_pane_t1

0x83d1,	// (0x0002de2b) main_cset_text2_pane_ParamLimits

0x83d1,	// (0x0002de2b) main_cset_text2_pane

0xd594,	// (0x00032fee) area_vitu2_query_pane_g1_ParamLimits

0x8b75,	// (0x0002e5cf) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x000354e8) area_vitu2_query_pane_g_ParamLimits

0xd618,	// (0x00033072) area_vitu2_query_pane_t7_ParamLimits

0xd618,	// (0x00033072) area_vitu2_query_pane_t7

0x8bd6,	// (0x0002e630) bg_button_pane_cp018_ParamLimits

0x8be4,	// (0x0002e63e) bg_button_pane_cp021_ParamLimits

0x8bf0,	// (0x0002e64a) bg_button_pane_cp022_ParamLimits

0x8bf0,	// (0x0002e64a) bg_vkb2_func_pane_cp08_ParamLimits

0x8bd6,	// (0x0002e630) bg_vkb2_func_pane_cp06_ParamLimits

0x8be4,	// (0x0002e63e) bg_vkb2_func_pane_cp07_ParamLimits

0x8bff,	// (0x0002e659) input_focus_pane_cp09_ParamLimits

0xd914,	// (0x0003336e) cam6_autofocus_pane_ParamLimits

0xd914,	// (0x0003336e) cam6_autofocus_pane

0x1f07,	// (0x00027961) cam6_image_uncrop_pane_ParamLimits

0x1f07,	// (0x00027961) cam6_image_uncrop_pane

0x1f16,	// (0x00027970) cam6_indi_pane_ParamLimits

0x1f16,	// (0x00027970) cam6_indi_pane

0x1f2c,	// (0x00027986) cam6_mode_pane_ParamLimits

0x1f2c,	// (0x00027986) cam6_mode_pane

0x1f3e,	// (0x00027998) cam6_timer_pane_ParamLimits

0x1f3e,	// (0x00027998) cam6_timer_pane

0x1f4a,	// (0x000279a4) cam6_zoom_pane_ParamLimits

0x1f4a,	// (0x000279a4) cam6_zoom_pane

0x90e0,	// (0x0002eb3a) cam6_mode_pane_g1_ParamLimits

0x90e0,	// (0x0002eb3a) cam6_mode_pane_g1

0x90f0,	// (0x0002eb4a) cam6_mode_pane_g2_ParamLimits

0x90f0,	// (0x0002eb4a) cam6_mode_pane_g2

0x9100,	// (0x0002eb5a) cam6_mode_pane_g3_ParamLimits

0x9100,	// (0x0002eb5a) cam6_mode_pane_g3

0x9110,	// (0x0002eb6a) cam6_mode_pane_g4_ParamLimits

0x9110,	// (0x0002eb6a) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x000355d0) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x000355d0) cam6_mode_pane_g

0xd922,	// (0x0003337c) bg_tb_trans_pane_cp08_ParamLimits

0xd922,	// (0x0003337c) bg_tb_trans_pane_cp08

0xd930,	// (0x0003338a) cam6_battery_pane_ParamLimits

0xd930,	// (0x0003338a) cam6_battery_pane

0xd946,	// (0x000333a0) cam6_indi_pane_g1_ParamLimits

0xd946,	// (0x000333a0) cam6_indi_pane_g1

0xd958,	// (0x000333b2) cam6_indi_pane_g2_ParamLimits

0xd958,	// (0x000333b2) cam6_indi_pane_g2

0xd96a,	// (0x000333c4) cam6_indi_pane_g3_ParamLimits

0xd96a,	// (0x000333c4) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x000355d9) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x000355d9) cam6_indi_pane_g

0xd97c,	// (0x000333d6) cam6_indi_pane_t1_ParamLimits

0xd97c,	// (0x000333d6) cam6_indi_pane_t1

0x9120,	// (0x0002eb7a) cam6_autofocus_pane_g1

0x9128,	// (0x0002eb82) cam6_autofocus_pane_g2

0x9130,	// (0x0002eb8a) cam6_autofocus_pane_g3

0x9138,	// (0x0002eb92) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x000355e0) cam6_autofocus_pane_g

0xd9a2,	// (0x000333fc) cam6_timer_pane_g1

0xd9aa,	// (0x00033404) cam6_timer_pane_t1

0xd9b8,	// (0x00033412) cam6_zoom_cont_pane

0xd9c0,	// (0x0003341a) cam6_zoom_pane_g1

0xd9c8,	// (0x00033422) cam6_zoom_pane_g2

0x9140,	// (0x0002eb9a) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x000355e9) cam6_zoom_pane_g

0xc286,	// (0x00031ce0) cam6_battery_pane_g1

0xc286,	// (0x00031ce0) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0003515a) cam6_battery_pane_g

0xd9d0,	// (0x0003342a) cam6_zoom_cont_pane_g1

0xd9d9,	// (0x00033433) cam6_zoom_cont_pane_g2

0xd9e2,	// (0x0003343c) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x000355f0) cam6_zoom_cont_pane_g

0x915d,	// (0x0002ebb7) cam6_mode_pane_cp_ParamLimits

0x915d,	// (0x0002ebb7) cam6_mode_pane_cp

0x916f,	// (0x0002ebc9) cam6_zoom_pane_cp_ParamLimits

0x916f,	// (0x0002ebc9) cam6_zoom_pane_cp

0x917b,	// (0x0002ebd5) vid6_image_uncrop_cif_pane_ParamLimits

0x917b,	// (0x0002ebd5) vid6_image_uncrop_cif_pane

0x918b,	// (0x0002ebe5) vid6_image_uncrop_nhd_pane_ParamLimits

0x918b,	// (0x0002ebe5) vid6_image_uncrop_nhd_pane

0x919a,	// (0x0002ebf4) vid6_image_uncrop_vga_pane_ParamLimits

0x919a,	// (0x0002ebf4) vid6_image_uncrop_vga_pane

0x91a9,	// (0x0002ec03) vid6_image_uncrop_wvga_pane_ParamLimits

0x91a9,	// (0x0002ec03) vid6_image_uncrop_wvga_pane

0x91b8,	// (0x0002ec12) vid6_indi_pane_ParamLimits

0x91b8,	// (0x0002ec12) vid6_indi_pane

0xd922,	// (0x0003337c) bg_tb_trans_pane_cp09_ParamLimits

0xd922,	// (0x0003337c) bg_tb_trans_pane_cp09

0xd9fa,	// (0x00033454) cam6_battery_pane_cp_ParamLimits

0xd9fa,	// (0x00033454) cam6_battery_pane_cp

0xda06,	// (0x00033460) vid6_indi_pane_g1_ParamLimits

0xda06,	// (0x00033460) vid6_indi_pane_g1

0xda18,	// (0x00033472) vid6_indi_pane_g2_ParamLimits

0xda18,	// (0x00033472) vid6_indi_pane_g2

0xda2a,	// (0x00033484) vid6_indi_pane_g3_ParamLimits

0xda2a,	// (0x00033484) vid6_indi_pane_g3

0xda3f,	// (0x00033499) vid6_indi_pane_g4_ParamLimits

0xda3f,	// (0x00033499) vid6_indi_pane_g4

0xda54,	// (0x000334ae) vid6_indi_pane_g5_ParamLimits

0xda54,	// (0x000334ae) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x000355f7) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x000355f7) vid6_indi_pane_g

0xda6e,	// (0x000334c8) vid6_indi_pane_t1_ParamLimits

0xda6e,	// (0x000334c8) vid6_indi_pane_t1

0xda84,	// (0x000334de) vid6_indi_pane_t2_ParamLimits

0xda84,	// (0x000334de) vid6_indi_pane_t2

0xdaac,	// (0x00033506) vid6_indi_pane_t3_ParamLimits

0xdaac,	// (0x00033506) vid6_indi_pane_t3

0xdad4,	// (0x0003352e) vid6_indi_pane_t4_ParamLimits

0xdad4,	// (0x0003352e) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x00035602) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x00035602) vid6_indi_pane_t

0xdaf8,	// (0x00033552) wait_bar_pane_cp08

0x91d0,	// (0x0002ec2a) main_cset_text2_pane_t1_ParamLimits

0x91d0,	// (0x0002ec2a) main_cset_text2_pane_t1

0x9148,	// (0x0002eba2) listscroll_gen_pane_cp06_t1_ParamLimits

0x9148,	// (0x0002eba2) listscroll_gen_pane_cp06_t1

0x1f6e,	// (0x000279c8) main_cam6_set_pane

0xcf54,	// (0x000329ae) bg_tb_trans_pane_cp06_ParamLimits

0xcf6a,	// (0x000329c4) cam4_indicators_pane_g1_ParamLimits

0xcf7b,	// (0x000329d5) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00035370) cam4_indicators_pane_g_ParamLimits

0xcf99,	// (0x000329f3) cam4_indicators_pane_t1_ParamLimits

0xcfbb,	// (0x00032a15) bg_tb_trans_pane_cp07_ParamLimits

0x1a2c,	// (0x00027486) vid4_indicators_pane_g1_ParamLimits

0x1a39,	// (0x00027493) vid4_indicators_pane_g2_ParamLimits

0x1a46,	// (0x000274a0) vid4_indicators_pane_g3_ParamLimits

0x1a53,	// (0x000274ad) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00035382) vid4_indicators_pane_g_ParamLimits

0x1a6b,	// (0x000274c5) vid4_indicators_pane_t1_ParamLimits

0xd695,	// (0x000330ef) vid4_progress_pane_g1_ParamLimits

0xd6a5,	// (0x000330ff) vid4_progress_pane_g2_ParamLimits

0x488a,	// (0x0002a2e4) vid4_progress_pane_g3_ParamLimits

0xd6b5,	// (0x0003310f) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x00035533) vid4_progress_pane_g_ParamLimits

0xd6d3,	// (0x0003312d) vid4_progress_pane_t1_ParamLimits

0xd6e8,	// (0x00033142) vid4_progress_pane_t2_ParamLimits

0xd6fe,	// (0x00033158) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0003553e) vid4_progress_pane_t_ParamLimits

0xd713,	// (0x0003316d) wait_bar_pane_cp07_ParamLimits

0x91ed,	// (0x0002ec47) main_cam6_set_pane_g2_ParamLimits

0x91ed,	// (0x0002ec47) main_cam6_set_pane_g2

0x9211,	// (0x0002ec6b) main_cset6_listscroll_pane_ParamLimits

0x9211,	// (0x0002ec6b) main_cset6_listscroll_pane

0x9231,	// (0x0002ec8b) main_cset6_slider_pane_ParamLimits

0x9231,	// (0x0002ec8b) main_cset6_slider_pane

0x9247,	// (0x0002eca1) main_cset6_text2_pane_ParamLimits

0x9247,	// (0x0002eca1) main_cset6_text2_pane

0xdb07,	// (0x00033561) main_cset6_text_pane

0xdb0f,	// (0x00033569) main_cset_list_pane_copy1_ParamLimits

0xdb0f,	// (0x00033569) main_cset_list_pane_copy1

0xdb1f,	// (0x00033579) scroll_pane_cp028_copy1

0x9255,	// (0x0002ecaf) cset_list_set_pane_copy1

0x9266,	// (0x0002ecc0) aid_position_infowindow_above_copy1

0x926e,	// (0x0002ecc8) aid_position_infowindow_below_copy1

0x9276,	// (0x0002ecd0) cset_list_set_pane_g1_copy1

0x927e,	// (0x0002ecd8) cset_list_set_pane_g3_copy1_ParamLimits

0x927e,	// (0x0002ecd8) cset_list_set_pane_g3_copy1

0x928d,	// (0x0002ece7) cset_list_set_pane_t1_copy1_ParamLimits

0x928d,	// (0x0002ece7) cset_list_set_pane_t1_copy1

0x21e0,	// (0x00027c3a) list_highlight_pane_cp021_copy1_ParamLimits

0x21e0,	// (0x00027c3a) list_highlight_pane_cp021_copy1

0xdb28,	// (0x00033582) cset6_slider_pane_ParamLimits

0xdb28,	// (0x00033582) cset6_slider_pane

0xdb54,	// (0x000335ae) main_cset6_slider_pane_g1_ParamLimits

0xdb54,	// (0x000335ae) main_cset6_slider_pane_g1

0x92a2,	// (0x0002ecfc) main_cset6_slider_pane_g2_ParamLimits

0x92a2,	// (0x0002ecfc) main_cset6_slider_pane_g2

0xdb7c,	// (0x000335d6) main_cset6_slider_pane_g3_ParamLimits

0xdb7c,	// (0x000335d6) main_cset6_slider_pane_g3

0x92ca,	// (0x0002ed24) main_cset6_slider_pane_g4_ParamLimits

0x92ca,	// (0x0002ed24) main_cset6_slider_pane_g4

0x92d6,	// (0x0002ed30) main_cset6_slider_pane_g5_ParamLimits

0x92d6,	// (0x0002ed30) main_cset6_slider_pane_g5

0xd1ad,	// (0x00032c07) main_cset6_slider_pane_g7_ParamLimits

0xd1ad,	// (0x00032c07) main_cset6_slider_pane_g7

0xd1b9,	// (0x00032c13) main_cset6_slider_pane_g8_ParamLimits

0xd1b9,	// (0x00032c13) main_cset6_slider_pane_g8

0x847e,	// (0x0002ded8) main_cset6_slider_pane_g9_ParamLimits

0x847e,	// (0x0002ded8) main_cset6_slider_pane_g9

0x848a,	// (0x0002dee4) main_cset6_slider_pane_g10_ParamLimits

0x848a,	// (0x0002dee4) main_cset6_slider_pane_g10

0x8496,	// (0x0002def0) main_cset6_slider_pane_g11_ParamLimits

0x8496,	// (0x0002def0) main_cset6_slider_pane_g11

0x84a2,	// (0x0002defc) main_cset6_slider_pane_g12_ParamLimits

0x84a2,	// (0x0002defc) main_cset6_slider_pane_g12

0x84ae,	// (0x0002df08) main_cset6_slider_pane_g13_ParamLimits

0x84ae,	// (0x0002df08) main_cset6_slider_pane_g13

0x84ba,	// (0x0002df14) main_cset6_slider_pane_g14_ParamLimits

0x84ba,	// (0x0002df14) main_cset6_slider_pane_g14

0x92e2,	// (0x0002ed3c) main_cset6_slider_pane_g15_ParamLimits

0x92e2,	// (0x0002ed3c) main_cset6_slider_pane_g15

0x84de,	// (0x0002df38) main_cset6_slider_pane_g16_ParamLimits

0x84de,	// (0x0002df38) main_cset6_slider_pane_g16

0x84ea,	// (0x0002df44) main_cset6_slider_pane_g17_ParamLimits

0x84ea,	// (0x0002df44) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0003560b) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0003560b) main_cset6_slider_pane_g

0xdb88,	// (0x000335e2) main_cset6_slider_pane_t1_ParamLimits

0xdb88,	// (0x000335e2) main_cset6_slider_pane_t1

0x9312,	// (0x0002ed6c) main_cset6_slider_pane_t2_ParamLimits

0x9312,	// (0x0002ed6c) main_cset6_slider_pane_t2

0x933d,	// (0x0002ed97) main_cset6_slider_pane_t3_ParamLimits

0x933d,	// (0x0002ed97) main_cset6_slider_pane_t3

0x9368,	// (0x0002edc2) main_cset6_slider_pane_t4_ParamLimits

0x9368,	// (0x0002edc2) main_cset6_slider_pane_t4

0x9393,	// (0x0002eded) main_cset6_slider_pane_t5_ParamLimits

0x9393,	// (0x0002eded) main_cset6_slider_pane_t5

0xdbc9,	// (0x00033623) main_cset6_slider_pane_t7_ParamLimits

0xdbc9,	// (0x00033623) main_cset6_slider_pane_t7

0x93be,	// (0x0002ee18) main_cset6_slider_pane_t8_ParamLimits

0x93be,	// (0x0002ee18) main_cset6_slider_pane_t8

0x93e2,	// (0x0002ee3c) main_cset6_slider_pane_t9_ParamLimits

0x93e2,	// (0x0002ee3c) main_cset6_slider_pane_t9

0x9406,	// (0x0002ee60) main_cset6_slider_pane_t10_ParamLimits

0x9406,	// (0x0002ee60) main_cset6_slider_pane_t10

0x942a,	// (0x0002ee84) main_cset6_slider_pane_t11_ParamLimits

0x942a,	// (0x0002ee84) main_cset6_slider_pane_t11

0xdbff,	// (0x00033659) main_cset6_slider_pane_t14_ParamLimits

0xdbff,	// (0x00033659) main_cset6_slider_pane_t14

0xdc38,	// (0x00033692) main_cset6_slider_pane_t15_ParamLimits

0xdc38,	// (0x00033692) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x00035630) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x00035630) main_cset6_slider_pane_t

0xdc71,	// (0x000336cb) cset_slider_pane_g1_copy1

0xdc7a,	// (0x000336d4) cset_slider_pane_g2_copy1

0xdc83,	// (0x000336dd) cset_slider_pane_g3_copy1

0x1f6e,	// (0x000279c8) bg_popup_sub_pane_cp011_copy1

0xd3b4,	// (0x00032e0e) main_cset_text_pane_g1_copy1

0xd3bc,	// (0x00032e16) main_cset_text_pane_t1_copy1

0xd3ca,	// (0x00032e24) main_cset_text_pane_t2_copy1

0xd3d8,	// (0x00032e32) main_cset_text_pane_t3_copy1

0xd3e6,	// (0x00032e40) main_cset_text_pane_t4_copy1

0xd3f4,	// (0x00032e4e) main_cset_text_pane_t5_copy1

0xd402,	// (0x00032e5c) main_cset_text_pane_t6_copy1

0xd410,	// (0x00032e6a) main_cset_text_pane_t7_copy1

0x944e,	// (0x0002eea8) main_cset_text2_pane_t1_copy1

0x1f6e,	// (0x000279c8) main_ncimui_pane

0x6909,	// (0x0002c363) popup_query_ncimui_window_ParamLimits

0x6909,	// (0x0002c363) popup_query_ncimui_window

0xc557,	// (0x00031fb1) field_cale_ev2_pane_g4_ParamLimits

0xc557,	// (0x00031fb1) field_cale_ev2_pane_g4

0x7e9f,	// (0x0002d8f9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7e9f,	// (0x0002d8f9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0003530e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0003530e) cell_video_dialer_keypad_pane_g

0x7eb7,	// (0x0002d911) cell_video_dialer_keypad_pane_t1

0x1f6e,	// (0x000279c8) bg_popup_window_pane_cp012

0x4bea,	// (0x0002a644) heading_pane_cp06

0xdd7b,	// (0x000337d5) ncim_query_content_pane

0x1f6e,	// (0x000279c8) bg_popup_heading_pane_cp01

0xdd83,	// (0x000337dd) ncim_heading_pane_t1

0xdd91,	// (0x000337eb) ncim_indicator_popup_pane

0xdda3,	// (0x000337fd) ncim_query_button_pane

0xddb7,	// (0x00033811) ncim_query_content_pane_t1

0xddc9,	// (0x00033823) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0003566f) ncim_query_content_pane_t

0xde03,	// (0x0003385d) ncim_query_list_pane

0xde15,	// (0x0003386f) ncim_query_popup_pane

0xdd91,	// (0x000337eb) ncim_indicator_popup_pane_ParamLimits

0x9563,	// (0x0002efbd) ncim_query_content_pane_g1_ParamLimits

0x9563,	// (0x0002efbd) ncim_query_content_pane_g1

0xddb7,	// (0x00033811) ncim_query_content_pane_t1_ParamLimits

0xddc9,	// (0x00033823) ncim_query_content_pane_t2_ParamLimits

0x956f,	// (0x0002efc9) ncim_query_content_pane_t3_ParamLimits

0x956f,	// (0x0002efc9) ncim_query_content_pane_t3

0x9597,	// (0x0002eff1) ncim_query_content_pane_t4_ParamLimits

0x9597,	// (0x0002eff1) ncim_query_content_pane_t4

0x95bf,	// (0x0002f019) ncim_query_content_pane_t5_ParamLimits

0x95bf,	// (0x0002f019) ncim_query_content_pane_t5

0xdddb,	// (0x00033835) ncim_query_content_pane_t6_ParamLimits

0xdddb,	// (0x00033835) ncim_query_content_pane_t6

0xfc15,	// (0x0003566f) ncim_query_content_pane_t_ParamLimits

0xde03,	// (0x0003385d) ncim_query_list_pane_ParamLimits

0xde15,	// (0x0003386f) ncim_query_popup_pane_ParamLimits

0xde29,	// (0x00033883) wait_bar_pane_cp04

0x1f6e,	// (0x000279c8) input_focus_pane_cp011

0xde31,	// (0x0003388b) ncim_query_popup_pane_t1

0xde3f,	// (0x00033899) ncim_list_query_list_pane_ParamLimits

0xde3f,	// (0x00033899) ncim_list_query_list_pane

0x1f6e,	// (0x000279c8) bg_button_pane_cp027

0xde4c,	// (0x000338a6) ncim_query_button_pane_g1

0x1f6e,	// (0x000279c8) list_highlight_pane_cp012

0xde56,	// (0x000338b0) ncim_list_query_list_pane_g1

0xde5e,	// (0x000338b8) ncim_list_query_list_pane_t1

0xcf8a,	// (0x000329e4) cam4_indicators_pane_g3_ParamLimits

0xcf8a,	// (0x000329e4) cam4_indicators_pane_g3

0x1a5f,	// (0x000274b9) vid4_indicators_pane_g5_ParamLimits

0x1a5f,	// (0x000274b9) vid4_indicators_pane_g5

0xd6c4,	// (0x0003311e) vid4_progress_pane_g5_ParamLimits

0xd6c4,	// (0x0003311e) vid4_progress_pane_g5

0x947c,	// (0x0002eed6) main_ncimui_pane_g1

0x94d2,	// (0x0002ef2c) ncimui_group_query_pane_ParamLimits

0x94d2,	// (0x0002ef2c) ncimui_group_query_pane

0x950e,	// (0x0002ef68) ncimui_list_pane_ParamLimits

0x950e,	// (0x0002ef68) ncimui_list_pane

0x952f,	// (0x0002ef89) ncimui_text_pane_ParamLimits

0x952f,	// (0x0002ef89) ncimui_text_pane

0x95e7,	// (0x0002f041) ncimui_text_pane_t1_ParamLimits

0x95e7,	// (0x0002f041) ncimui_text_pane_t1

0xde6c,	// (0x000338c6) ncimui_list_single_graphic_pane_ParamLimits

0xde6c,	// (0x000338c6) ncimui_list_single_graphic_pane

0x9605,	// (0x0002f05f) ncimui_query_pane_ParamLimits

0x9605,	// (0x0002f05f) ncimui_query_pane

0x1f6e,	// (0x000279c8) list_highlight_pane_cp013

0xde7c,	// (0x000338d6) ncim_list_query_list_pane_t1_copy1

0xde56,	// (0x000338b0) ncim_list_single_graphic_pane_g1

0xde8a,	// (0x000338e4) ncim_query_button_pane_cp01

0xde96,	// (0x000338f0) ncim_query_entry_pane_ParamLimits

0xde96,	// (0x000338f0) ncim_query_entry_pane

0xdea9,	// (0x00033903) ncimui_query_pane_g1

0xdeb5,	// (0x0003390f) ncimui_query_pane_t1_ParamLimits

0xdeb5,	// (0x0003390f) ncimui_query_pane_t1

0x21e0,	// (0x00027c3a) input_focus_pane_cp012

0xdece,	// (0x00033928) ncim_query_entry_pane_t1

0x2be4,	// (0x0002863e) main_im_pane_ParamLimits

0x21e0,	// (0x00027c3a) main_mobtv_pane_ParamLimits

0x21e0,	// (0x00027c3a) main_mobtv_pane

0x92fa,	// (0x0002ed54) main_cset6_slider_pane_g18_ParamLimits

0x92fa,	// (0x0002ed54) main_cset6_slider_pane_g18

0x9306,	// (0x0002ed60) main_cset6_slider_pane_g19_ParamLimits

0x9306,	// (0x0002ed60) main_cset6_slider_pane_g19

0xdee0,	// (0x0003393a) bg_main_mobtv_pane_ParamLimits

0xdee0,	// (0x0003393a) bg_main_mobtv_pane

0x9618,	// (0x0002f072) main_mobtv_info_pane

0x9621,	// (0x0002f07b) main_mobtv_loading_pane_ParamLimits

0x9621,	// (0x0002f07b) main_mobtv_loading_pane

0xdeee,	// (0x00033948) main_mobtv_pg_channel_list_pane

0xdef8,	// (0x00033952) main_mobtv_pg_hdr_pane

0x962e,	// (0x0002f088) main_mobtv_programe_curr_pane_ParamLimits

0x962e,	// (0x0002f088) main_mobtv_programe_curr_pane

0x963b,	// (0x0002f095) main_mobtv_programe_next_pane_ParamLimits

0x963b,	// (0x0002f095) main_mobtv_programe_next_pane

0xdf01,	// (0x0003395b) popup_mobtv_noti_window

0xc286,	// (0x00031ce0) main_tv_pg_hdr_pane_g1

0xdf09,	// (0x00033963) main_tv_pg_hdr_pane_g2

0xdf11,	// (0x0003396b) main_tv_pg_hdr_pane_g3

0xdf19,	// (0x00033973) main_tv_pg_hdr_pane_g4

0xdf21,	// (0x0003397b) main_tv_pg_hdr_pane_g5

0xdf2b,	// (0x00033985) main_tv_pg_hdr_pane_g6

0xdf35,	// (0x0003398f) main_tv_pg_hdr_pane_g7

0xdf3f,	// (0x00033999) main_tv_pg_hdr_pane_g8

0xdf49,	// (0x000339a3) main_tv_pg_hdr_pane_g9

0xdf53,	// (0x000339ad) main_tv_pg_hdr_pane_g10

0xdf5d,	// (0x000339b7) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0003567c) main_tv_pg_hdr_pane_g

0xdf67,	// (0x000339c1) main_tv_pg_hdr_pane_t1

0xdf75,	// (0x000339cf) main_tv_pg_hdr_pane_t2

0xdf83,	// (0x000339dd) main_tv_pg_hdr_pane_t3

0xdf93,	// (0x000339ed) main_tv_pg_hdr_pane_t4

0xdfa3,	// (0x000339fd) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x00035693) main_tv_pg_hdr_pane_t

0xdfb3,	// (0x00033a0d) single_mobtv_pg_channel_pane_ParamLimits

0xdfb3,	// (0x00033a0d) single_mobtv_pg_channel_pane

0xdfc5,	// (0x00033a1f) single_mobtv_pg_channel_table_pane

0xdfce,	// (0x00033a28) single_mobtv_pg_channel_thumb_pane

0xdfd7,	// (0x00033a31) single_tv_pg_channel_pane_g1

0xdfe0,	// (0x00033a3a) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0003569e) single_tv_pg_channel_pane_g

0xc4f2,	// (0x00031f4c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc4f2,	// (0x00031f4c) bg_single_mobtv_pg_channel_thumb_pane

0xdfe9,	// (0x00033a43) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfe9,	// (0x00033a43) single_mobtv_pg_channel_thumb_pane_g1

0xdff7,	// (0x00033a51) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdff7,	// (0x00033a51) single_mobtv_pg_channel_thumb_pane_g2

0xe003,	// (0x00033a5d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe003,	// (0x00033a5d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x000356a3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x000356a3) single_mobtv_pg_channel_thumb_pane_g

0xe00f,	// (0x00033a69) single_mobtv_pg_channel_thumb_pane_t1

0xe01d,	// (0x00033a77) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x000356aa) single_mobtv_pg_channel_thumb_pane_t

0xc286,	// (0x00031ce0) bg_single_mobtv_pg_channel_table_pane_g1

0xc286,	// (0x00031ce0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0003515a) bg_single_mobtv_pg_channel_table_pane_g

0xe02b,	// (0x00033a85) single_mobtv_pg_channel_table_pane_t1

0xe039,	// (0x00033a93) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x000356af) single_mobtv_pg_channel_table_pane_t

0x9650,	// (0x0002f0aa) main_mobtv_info_pane_g1_ParamLimits

0x9650,	// (0x0002f0aa) main_mobtv_info_pane_g1

0x966e,	// (0x0002f0c8) main_mobtv_info_pane_t1_ParamLimits

0x966e,	// (0x0002f0c8) main_mobtv_info_pane_t1

0x96e6,	// (0x0002f140) main_mobtv_info_pane_t2_ParamLimits

0x96e6,	// (0x0002f140) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x000356b9) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x000356b9) main_mobtv_info_pane_t

0x9775,	// (0x0002f1cf) wait_bar_pane_cp05

0x9787,	// (0x0002f1e1) main_mobtv_loading_pane_g1_ParamLimits

0x9787,	// (0x0002f1e1) main_mobtv_loading_pane_g1

0x979a,	// (0x0002f1f4) main_mobtv_loading_pane_g2_ParamLimits

0x979a,	// (0x0002f1f4) main_mobtv_loading_pane_g2

0x97a6,	// (0x0002f200) main_mobtv_loading_pane_g3_ParamLimits

0x97a6,	// (0x0002f200) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x000356c0) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x000356c0) main_mobtv_loading_pane_g

0xe047,	// (0x00033aa1) main_mobtv_loading_pane_t1_ParamLimits

0xe047,	// (0x00033aa1) main_mobtv_loading_pane_t1

0xe05f,	// (0x00033ab9) main_mobtv_loading_pane_t2_ParamLimits

0xe05f,	// (0x00033ab9) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x000356c7) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x000356c7) main_mobtv_loading_pane_t

0x97b9,	// (0x0002f213) wait_bar_pane_cp06_ParamLimits

0x97b9,	// (0x0002f213) wait_bar_pane_cp06

0xe083,	// (0x00033add) main_mobtv_programe_curr_pane_t1

0xe091,	// (0x00033aeb) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x000356cc) main_mobtv_programe_curr_pane_t

0xe09f,	// (0x00033af9) main_mobtv_programe_next_pane_t1

0xe0ad,	// (0x00033b07) main_mobtv_programe_next_pane_t2

0xe0bb,	// (0x00033b15) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x000356d1) main_mobtv_programe_next_pane_t

0x1f6e,	// (0x000279c8) bg_popup_mobtv_noti_window_pane

0xe0c9,	// (0x00033b23) popup_mobtv_noti_window_g1

0xe0d1,	// (0x00033b2b) popup_mobtv_noti_window_t1

0xe0df,	// (0x00033b39) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x000356d8) popup_mobtv_noti_window_t

0xc286,	// (0x00031ce0) bg_popup_mobtv_noti_window_pane_g1

0x1f6e,	// (0x000279c8) sc_clock_pane

0x1f6e,	// (0x000279c8) main_fs_bigclock_pane

0x8f55,	// (0x0002e9af) blid2_tripm_pane_t4_ParamLimits

0x8f55,	// (0x0002e9af) blid2_tripm_pane_t4

0x97c8,	// (0x0002f222) sc_clock_pane_g1_ParamLimits

0x97c8,	// (0x0002f222) sc_clock_pane_g1

0x97da,	// (0x0002f234) sc_clock_pane_t1_ParamLimits

0x97da,	// (0x0002f234) sc_clock_pane_t1

0x97fc,	// (0x0002f256) sc_clock_pane_t2_ParamLimits

0x97fc,	// (0x0002f256) sc_clock_pane_t2

0x9814,	// (0x0002f26e) sc_clock_pane_t3_ParamLimits

0x9814,	// (0x0002f26e) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x000356dd) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x000356dd) sc_clock_pane_t

0xa5eb,	// (0x00030045) main_fs_bigclock_indicator_pane_ParamLimits

0xa5eb,	// (0x00030045) main_fs_bigclock_indicator_pane

0xc4c2,	// (0x00031f1c) main_fs_bigclock_pane_g1_ParamLimits

0xc4c2,	// (0x00031f1c) main_fs_bigclock_pane_g1

0xa5f7,	// (0x00030051) main_fs_bigclock_pane_t1_ParamLimits

0xa5f7,	// (0x00030051) main_fs_bigclock_pane_t1

0xa609,	// (0x00030063) main_fs_bigclock_pane_t2_ParamLimits

0xa609,	// (0x00030063) main_fs_bigclock_pane_t2

0xa61d,	// (0x00030077) main_fs_bigclock_pane_t3_ParamLimits

0xa61d,	// (0x00030077) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x000358d7) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x000358d7) main_fs_bigclock_pane_t

0xecd5,	// (0x0003472f) main_fs_bigclock_indicator_pane_g1

0xddab,	// (0x00033805) ncim_query_content_pane_g2_ParamLimits

0xddab,	// (0x00033805) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0003566a) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0003566a) ncim_query_content_pane_g

0x982b,	// (0x0002f285) sc_clock_pane_t4_ParamLimits

0x982b,	// (0x0002f285) sc_clock_pane_t4

0x21e0,	// (0x00027c3a) main_radioblah_pane

0xceb0,	// (0x0003290a) cell_call4_button_pane_t1_copy1_ParamLimits

0xceb0,	// (0x0003290a) cell_call4_button_pane_t1_copy1

0x9484,	// (0x0002eede) main_ncimui_pane_t1_ParamLimits

0x9484,	// (0x0002eede) main_ncimui_pane_t1

0x949e,	// (0x0002eef8) main_ncimui_pane_t2_ParamLimits

0x949e,	// (0x0002eef8) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x00035663) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x00035663) main_ncimui_pane_t

0xe20d,	// (0x00033c67) main_radioblah_anim_pane_ParamLimits

0xe20d,	// (0x00033c67) main_radioblah_anim_pane

0xe21e,	// (0x00033c78) main_radioblah_info_pane_ParamLimits

0xe21e,	// (0x00033c78) main_radioblah_info_pane

0xe232,	// (0x00033c8c) main_radioblah_pane_t1_ParamLimits

0xe232,	// (0x00033c8c) main_radioblah_pane_t1

0xe24e,	// (0x00033ca8) main_radioblah_pane_t2_ParamLimits

0xe24e,	// (0x00033ca8) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x000356fe) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x000356fe) main_radioblah_pane_t

0x98d4,	// (0x0002f32e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x98d4,	// (0x0002f32e) main_radioblah_rocker_ctrl_pane

0xe296,	// (0x00033cf0) main_radioblah_info_pane_t1_ParamLimits

0xe296,	// (0x00033cf0) main_radioblah_info_pane_t1

0x992c,	// (0x0002f386) main_radioblah_info_pane_t2_ParamLimits

0x992c,	// (0x0002f386) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x00035707) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x00035707) main_radioblah_info_pane_t

0xc286,	// (0x00031ce0) main_radioblah_rocker_ctrl_pane_g1

0x99dc,	// (0x0002f436) main_radioblah_rocker_ctrl_pane_g2

0x99e4,	// (0x0002f43e) main_radioblah_rocker_ctrl_pane_g3

0x99ec,	// (0x0002f446) main_radioblah_rocker_ctrl_pane_g4

0x99f4,	// (0x0002f44e) main_radioblah_rocker_ctrl_pane_g5

0x99fc,	// (0x0002f456) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x00035710) main_radioblah_rocker_ctrl_pane_g

0x944e,	// (0x0002eea8) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf3a,	// (0x00032994) cam4_image_uncrop_qvga_pane

0xcfb3,	// (0x00032a0d) vid4_image_uncrop_qcif_pane

0xd914,	// (0x0003336e) cam6_image_uncrop_qvga_pane_ParamLimits

0xd914,	// (0x0003336e) cam6_image_uncrop_qvga_pane

0xd9ea,	// (0x00033444) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9ea,	// (0x00033444) vid6_image_uncrop_qcif_pane

0x1f6e,	// (0x000279c8) bg_popup_preview_window_pane_cp03

0xdd5d,	// (0x000337b7) list_cset_text2_pane

0xdd65,	// (0x000337bf) main_cset6_text2_pane_g1

0xdd6d,	// (0x000337c7) main_cset6_text2_pane_t1

0x9a04,	// (0x0002f45e) list_cset_text2_pane_t1_ParamLimits

0x9a04,	// (0x0002f45e) list_cset_text2_pane_t1

0x21e0,	// (0x00027c3a) main_radioblah_pane_ParamLimits

0x9761,	// (0x0002f1bb) main_mobtv_info_pane_t3_ParamLimits

0x9761,	// (0x0002f1bb) main_mobtv_info_pane_t3

0x98c2,	// (0x0002f31c) main_radioblah_pane_g1

0x98fc,	// (0x0002f356) main_radioblah_info_pane_g1

0x9981,	// (0x0002f3db) main_radioblah_info_pane_t3_ParamLimits

0x9981,	// (0x0002f3db) main_radioblah_info_pane_t3

0x45e3,	// (0x0002a03d) highlight_cell_cale_month_pane_ParamLimits

0x45e3,	// (0x0002a03d) highlight_cell_cale_month_pane

0x1f6e,	// (0x000279c8) main_phob_fisheye_pane

0xc5e0,	// (0x0003203a) scroll_pane_cp0031_ParamLimits

0xc5e0,	// (0x0003203a) scroll_pane_cp0031

0xdaf8,	// (0x00033552) wait_bar_pane_cp08_ParamLimits

0x9255,	// (0x0002ecaf) cset_list_set_pane_copy1_ParamLimits

0xe2d0,	// (0x00033d2a) highlight_cell_cale_month_pane_g1

0x9a1d,	// (0x0002f477) highlight_cell_cale_month_pane_t1

0xd684,	// (0x000330de) list_gen_pane_cp01

0xd198,	// (0x00032bf2) scroll_pane_01

0xe2d8,	// (0x00033d32) list_single_double_fisheye_pane

0x9a2b,	// (0x0002f485) list_double_fisheye_pane_g1_ParamLimits

0x9a2b,	// (0x0002f485) list_double_fisheye_pane_g1

0x9a37,	// (0x0002f491) list_double_fisheye_pane_g2_ParamLimits

0x9a37,	// (0x0002f491) list_double_fisheye_pane_g2

0x9a4b,	// (0x0002f4a5) list_double_fisheye_pane_g3_ParamLimits

0x9a4b,	// (0x0002f4a5) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0003571d) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0003571d) list_double_fisheye_pane_g

0x9a74,	// (0x0002f4ce) list_double_fisheye_pane_t1_ParamLimits

0x9a74,	// (0x0002f4ce) list_double_fisheye_pane_t1

0x9a8f,	// (0x0002f4e9) list_double_fisheye_pane_t2_ParamLimits

0x9a8f,	// (0x0002f4e9) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00035728) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00035728) list_double_fisheye_pane_t

0x1f6e,	// (0x000279c8) main_call5_pane

0x9856,	// (0x0002f2b0) sc_swipe_pane_ParamLimits

0x9856,	// (0x0002f2b0) sc_swipe_pane

0x9ac4,	// (0x0002f51e) call5_image_pane_ParamLimits

0x9ac4,	// (0x0002f51e) call5_image_pane

0x9ae1,	// (0x0002f53b) call5_swipe_1_pane_ParamLimits

0x9ae1,	// (0x0002f53b) call5_swipe_1_pane

0x9af4,	// (0x0002f54e) call5_swipe_2_pane_ParamLimits

0x9af4,	// (0x0002f54e) call5_swipe_2_pane

0x9b1f,	// (0x0002f579) popup_call5_audio_first_window_ParamLimits

0x9b1f,	// (0x0002f579) popup_call5_audio_first_window

0xc4f2,	// (0x00031f4c) call5_swipe_1_pane_g1_ParamLimits

0xc4f2,	// (0x00031f4c) call5_swipe_1_pane_g1

0xe2e1,	// (0x00033d3b) call5_swipe_1_pane_g2_ParamLimits

0xe2e1,	// (0x00033d3b) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0003572d) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0003572d) call5_swipe_1_pane_g

0xe2ed,	// (0x00033d47) call5_swipe_1_pane_t1_ParamLimits

0xe2ed,	// (0x00033d47) call5_swipe_1_pane_t1

0xc4f2,	// (0x00031f4c) call5_swipe_2_pane_g1_ParamLimits

0xc4f2,	// (0x00031f4c) call5_swipe_2_pane_g1

0xe302,	// (0x00033d5c) call5_swipe_2_pane_g2_ParamLimits

0xe302,	// (0x00033d5c) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x00035732) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x00035732) call5_swipe_2_pane_g

0xe30e,	// (0x00033d68) call5_swipe_2_pane_t1_ParamLimits

0xe30e,	// (0x00033d68) call5_swipe_2_pane_t1

0xe323,	// (0x00033d7d) sc_swipe_pane_g1_ParamLimits

0xe323,	// (0x00033d7d) sc_swipe_pane_g1

0xe330,	// (0x00033d8a) sc_swipe_pane_g2_ParamLimits

0xe330,	// (0x00033d8a) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x00035737) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x00035737) sc_swipe_pane_g

0xe33c,	// (0x00033d96) sc_swipe_pane_t1_ParamLimits

0xe33c,	// (0x00033d96) sc_swipe_pane_t1

0x1f6e,	// (0x000279c8) main_cmail_launcher_pane

0x9b30,	// (0x0002f58a) aid_size_cell_cmail_l_ParamLimits

0x9b30,	// (0x0002f58a) aid_size_cell_cmail_l

0x9b4a,	// (0x0002f5a4) grid_cmail_l_pane_ParamLimits

0x9b4a,	// (0x0002f5a4) grid_cmail_l_pane

0x9b65,	// (0x0002f5bf) cell_cmail_l_pane_ParamLimits

0x9b65,	// (0x0002f5bf) cell_cmail_l_pane

0x9b8b,	// (0x0002f5e5) cell_cmail_l_pane_g1_ParamLimits

0x9b8b,	// (0x0002f5e5) cell_cmail_l_pane_g1

0x9b97,	// (0x0002f5f1) cell_cmail_l_pane_t1_ParamLimits

0x9b97,	// (0x0002f5f1) cell_cmail_l_pane_t1

0xe351,	// (0x00033dab) cell_cmail_l_pane_t2_ParamLimits

0xe351,	// (0x00033dab) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0003573c) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0003573c) cell_cmail_l_pane_t

0x21e0,	// (0x00027c3a) grid_highlight_pane_cp018_ParamLimits

0x21e0,	// (0x00027c3a) grid_highlight_pane_cp018

0x209a,	// (0x00027af4) main2_pane_ParamLimits

0x209a,	// (0x00027af4) main2_pane

0x2d61,	// (0x000287bb) popup_sp_fs_action_menu_bg_pane_g1

0x2d69,	// (0x000287c3) popup_sp_fs_action_menu_bg_pane_g2

0x2d71,	// (0x000287cb) popup_sp_fs_action_menu_bg_pane_g3

0x2d79,	// (0x000287d3) popup_sp_fs_action_menu_bg_pane_g4

0x2d81,	// (0x000287db) popup_sp_fs_action_menu_bg_pane_g5

0x2d89,	// (0x000287e3) popup_sp_fs_action_menu_bg_pane_g6

0x2d91,	// (0x000287eb) popup_sp_fs_action_menu_bg_pane_g7

0x2d99,	// (0x000287f3) popup_sp_fs_action_menu_bg_pane_g8

0x2da1,	// (0x000287fb) popup_sp_fs_action_menu_bg_pane_g9

0x2da9,	// (0x00028803) popup_sp_fs_action_menu_bg_pane_g10

0x2da9,	// (0x00028803) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00034c06) popup_sp_fs_action_menu_bg_pane_g

0x358e,	// (0x00028fe8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x2_t3_g3_g1

0x359a,	// (0x00028ff4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x359a,	// (0x00028ff4) list_medium_line_x2_t3_g3_g2

0x35a6,	// (0x00029000) list_medium_line_x2_t3_g3_g3_ParamLimits

0x35a6,	// (0x00029000) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00034cb6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00034cb6) list_medium_line_x2_t3_g3_g

0x35b2,	// (0x0002900c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x35b2,	// (0x0002900c) list_medium_line_x2_t3_g3_t1

0x35c7,	// (0x00029021) list_medium_line_x2_t3_g3_t2_ParamLimits

0x35c7,	// (0x00029021) list_medium_line_x2_t3_g3_t2

0x35db,	// (0x00029035) list_medium_line_x2_t3_g3_t3_ParamLimits

0x35db,	// (0x00029035) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00034cbd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00034cbd) list_medium_line_x2_t3_g3_t

0x358e,	// (0x00028fe8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x2_t3_g2_g1

0x35a6,	// (0x00029000) list_medium_line_x2_t3_g2_g2_ParamLimits

0x35a6,	// (0x00029000) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00034cc4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00034cc4) list_medium_line_x2_t3_g2_g

0x35f0,	// (0x0002904a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x35f0,	// (0x0002904a) list_medium_line_x2_t3_g2_t1

0x3606,	// (0x00029060) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3606,	// (0x00029060) list_medium_line_x2_t3_g2_t2

0x35db,	// (0x00029035) list_medium_line_x2_t3_g2_t3_ParamLimits

0x35db,	// (0x00029035) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00034cc9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00034cc9) list_medium_line_x2_t3_g2_t

0x358e,	// (0x00028fe8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x2_t4_g4_g1

0x3618,	// (0x00029072) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3618,	// (0x00029072) list_medium_line_x2_t4_g4_g2

0x359a,	// (0x00028ff4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x359a,	// (0x00028ff4) list_medium_line_x2_t4_g4_g3

0x3624,	// (0x0002907e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3624,	// (0x0002907e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00034cd0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00034cd0) list_medium_line_x2_t4_g4_g

0x3630,	// (0x0002908a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3630,	// (0x0002908a) list_medium_line_x2_t4_g4_t1

0x3647,	// (0x000290a1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3647,	// (0x000290a1) list_medium_line_x2_t4_g4_t2

0x365c,	// (0x000290b6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x365c,	// (0x000290b6) list_medium_line_x2_t4_g4_t3

0x366e,	// (0x000290c8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x366e,	// (0x000290c8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00034cd9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00034cd9) list_medium_line_x2_t4_g4_t

0x358e,	// (0x00028fe8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x2_t2_g4_g1

0x3618,	// (0x00029072) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3618,	// (0x00029072) list_medium_line_x2_t2_g4_g2

0x359a,	// (0x00028ff4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x359a,	// (0x00028ff4) list_medium_line_x2_t2_g4_g3

0x35a6,	// (0x00029000) list_medium_line_x2_t2_g4_g4_ParamLimits

0x35a6,	// (0x00029000) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00034d40) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00034d40) list_medium_line_x2_t2_g4_g

0x4601,	// (0x0002a05b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4601,	// (0x0002a05b) list_medium_line_x2_t2_g4_t1

0x35db,	// (0x00029035) list_medium_line_x2_t2_g4_t2_ParamLimits

0x35db,	// (0x00029035) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00034d49) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00034d49) list_medium_line_x2_t2_g4_t

0x358e,	// (0x00028fe8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x2_t2_g3_g1

0x359a,	// (0x00028ff4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x359a,	// (0x00028ff4) list_medium_line_x2_t2_g3_g2

0x35a6,	// (0x00029000) list_medium_line_x2_t2_g3_g3_ParamLimits

0x35a6,	// (0x00029000) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00034cb6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00034cb6) list_medium_line_x2_t2_g3_g

0x4616,	// (0x0002a070) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4616,	// (0x0002a070) list_medium_line_x2_t2_g3_t1

0x35db,	// (0x00029035) list_medium_line_x2_t2_g3_t2_ParamLimits

0x35db,	// (0x00029035) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00034d4e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00034d4e) list_medium_line_x2_t2_g3_t

0x4945,	// (0x0002a39f) main_sp_fs_list_pane_ParamLimits

0x4945,	// (0x0002a39f) main_sp_fs_list_pane

0x4951,	// (0x0002a3ab) sp_fs_scroll_pane_ParamLimits

0x4951,	// (0x0002a3ab) sp_fs_scroll_pane

0x495d,	// (0x0002a3b7) list_medium_line_x2_t3_t1

0x496d,	// (0x0002a3c7) list_medium_line_x2_t3_t2

0x497b,	// (0x0002a3d5) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00034d99) list_medium_line_x2_t3_t

0x4989,	// (0x0002a3e3) list_medium_line_x3_t4_t1

0x4999,	// (0x0002a3f3) list_medium_line_x3_t4_t2

0x49a7,	// (0x0002a401) list_medium_line_x3_t4_t3

0x497b,	// (0x0002a3d5) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00034da0) list_medium_line_x3_t4_t

0x49b5,	// (0x0002a40f) list_medium_line_x4_t5_t1

0x49c5,	// (0x0002a41f) list_medium_line_x4_t5_t2

0x49a7,	// (0x0002a401) list_medium_line_x4_t5_t3

0x49d3,	// (0x0002a42d) list_medium_line_x4_t5_t4

0x497b,	// (0x0002a3d5) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00034da9) list_medium_line_x4_t5_t

0x358e,	// (0x00028fe8) list_medium_line_t4_g4_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_t4_g4_g1

0x3624,	// (0x0002907e) list_medium_line_t4_g4_g2_ParamLimits

0x3624,	// (0x0002907e) list_medium_line_t4_g4_g2

0x49e1,	// (0x0002a43b) list_medium_line_t4_g4_g3_ParamLimits

0x49e1,	// (0x0002a43b) list_medium_line_t4_g4_g3

0x35a6,	// (0x00029000) list_medium_line_t4_g4_g4_ParamLimits

0x35a6,	// (0x00029000) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00034db4) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00034db4) list_medium_line_t4_g4_g

0x49ed,	// (0x0002a447) list_medium_line_t4_g4_t1_ParamLimits

0x49ed,	// (0x0002a447) list_medium_line_t4_g4_t1

0x4a02,	// (0x0002a45c) list_medium_line_t4_g4_t2_ParamLimits

0x4a02,	// (0x0002a45c) list_medium_line_t4_g4_t2

0x4a17,	// (0x0002a471) list_medium_line_t4_g4_t3_ParamLimits

0x4a17,	// (0x0002a471) list_medium_line_t4_g4_t3

0x35db,	// (0x00029035) list_medium_line_t4_g4_t4_ParamLimits

0x35db,	// (0x00029035) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00034dbd) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00034dbd) list_medium_line_t4_g4_t

0x4d61,	// (0x0002a7bb) chi_dic_find_pane_g1

0x66db,	// (0x0002c135) main_tport_pane

0xd301,	// (0x00032d5b) list_medium_line_plain_t1

0xd353,	// (0x00032dad) list_medium_line_t2_g2_g1_ParamLimits

0xd353,	// (0x00032dad) list_medium_line_t2_g2_g1

0xd35f,	// (0x00032db9) list_medium_line_t2_g2_g2_ParamLimits

0xd35f,	// (0x00032db9) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00035479) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00035479) list_medium_line_t2_g2_g

0x87a0,	// (0x0002e1fa) list_medium_line_t2_g2_t1_ParamLimits

0x87a0,	// (0x0002e1fa) list_medium_line_t2_g2_t1

0x87ba,	// (0x0002e214) list_medium_line_t2_g2_t2_ParamLimits

0x87ba,	// (0x0002e214) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0003547e) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0003547e) list_medium_line_t2_g2_t

0xd725,	// (0x0003317f) aid_sp_fs_list_icon_a_sm

0xd72d,	// (0x00033187) aid_sp_fs_list_icon_d

0xd735,	// (0x0003318f) aid_sp_fs_text_primary

0xd73e,	// (0x00033198) aid_sp_fs_text_secondary

0xd747,	// (0x000331a1) list_medium_line

0xd747,	// (0x000331a1) list_medium_line_g2

0xd747,	// (0x000331a1) list_medium_line_g3

0xd747,	// (0x000331a1) list_medium_line_plain

0xd747,	// (0x000331a1) list_medium_line_plain_t2

0xd747,	// (0x000331a1) list_medium_line_plain_t3

0xd747,	// (0x000331a1) list_medium_line_right_icon

0xd747,	// (0x000331a1) list_medium_line_right_iconx2

0xd747,	// (0x000331a1) list_medium_line_t2

0xd747,	// (0x000331a1) list_medium_line_t2_g2

0xd747,	// (0x000331a1) list_medium_line_t2_g3

0xd747,	// (0x000331a1) list_medium_line_t2_right_icon

0xd747,	// (0x000331a1) list_medium_line_t2_right_iconx2

0xd747,	// (0x000331a1) list_medium_line_t3

0xd747,	// (0x000331a1) list_medium_line_t3_g2

0xd747,	// (0x000331a1) list_medium_line_t3_g3

0xd747,	// (0x000331a1) list_medium_line_t3_right_iconx2

0xd750,	// (0x000331aa) list_medium_line_t4_g4

0xd759,	// (0x000331b3) list_medium_line_x2

0xd759,	// (0x000331b3) list_medium_line_x2_t2_g2

0xd759,	// (0x000331b3) list_medium_line_x2_t2_g3

0xd759,	// (0x000331b3) list_medium_line_x2_t2_g4

0xd759,	// (0x000331b3) list_medium_line_x2_t3

0xd759,	// (0x000331b3) list_medium_line_x2_t3_g2

0xd759,	// (0x000331b3) list_medium_line_x2_t3_g3

0xd759,	// (0x000331b3) list_medium_line_x2_t3_g4

0xd759,	// (0x000331b3) list_medium_line_x2_t4_g2

0xd759,	// (0x000331b3) list_medium_line_x2_t4_g4

0xd762,	// (0x000331bc) list_medium_line_x3

0xd762,	// (0x000331bc) list_medium_line_x3_t4

0xd762,	// (0x000331bc) list_medium_line_x3_t4_g4

0xd750,	// (0x000331aa) list_medium_line_x4_t4

0xd750,	// (0x000331aa) list_medium_line_x4_t4_g7

0xd750,	// (0x000331aa) list_medium_line_x4_t5

0xd76b,	// (0x000331c5) list_single_fs_dyc_pane_ParamLimits

0xd76b,	// (0x000331c5) list_single_fs_dyc_pane

0x358e,	// (0x00028fe8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x4_t4_g7_g1

0xdc8c,	// (0x000336e6) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdc8c,	// (0x000336e6) list_medium_line_x4_t4_g7_g2

0xdc98,	// (0x000336f2) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc98,	// (0x000336f2) list_medium_line_x4_t4_g7_g3

0xdca7,	// (0x00033701) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdca7,	// (0x00033701) list_medium_line_x4_t4_g7_g4

0xdcb3,	// (0x0003370d) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdcb3,	// (0x0003370d) list_medium_line_x4_t4_g7_g5

0xdcc2,	// (0x0003371c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdcc2,	// (0x0003371c) list_medium_line_x4_t4_g7_g6

0xdcd1,	// (0x0003372b) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdcd1,	// (0x0003372b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00035649) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00035649) list_medium_line_x4_t4_g7_g

0xdcdd,	// (0x00033737) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdcdd,	// (0x00033737) list_medium_line_x4_t4_g7_t1

0xdcf2,	// (0x0003374c) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdcf2,	// (0x0003374c) list_medium_line_x4_t4_g7_t2

0xdd07,	// (0x00033761) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdd07,	// (0x00033761) list_medium_line_x4_t4_g7_t3

0xdd1c,	// (0x00033776) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdd1c,	// (0x00033776) list_medium_line_x4_t4_g7_t4

0xdd2e,	// (0x00033788) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdd2e,	// (0x00033788) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x00035658) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x00035658) list_medium_line_x4_t4_g7_t

0xdd40,	// (0x0003379a) list_single_dyc_row_pane_ParamLimits

0xdd40,	// (0x0003379a) list_single_dyc_row_pane

0x9ab1,	// (0x0002f50b) call5_gesture_pane_ParamLimits

0x9ab1,	// (0x0002f50b) call5_gesture_pane

0x9b07,	// (0x0002f561) call5_windows_pane_ParamLimits

0x9b07,	// (0x0002f561) call5_windows_pane

0x9bad,	// (0x0002f607) call5_swipe_1_pane_cp_ParamLimits

0x9bad,	// (0x0002f607) call5_swipe_1_pane_cp

0x9bb9,	// (0x0002f613) call5_swipe_2_pane_cp_ParamLimits

0x9bb9,	// (0x0002f613) call5_swipe_2_pane_cp

0x51bf,	// (0x0002ac19) call5_image_pane_cp

0x9bc5,	// (0x0002f61f) popup_call5_audio_first_window_cp_ParamLimits

0x9bc5,	// (0x0002f61f) popup_call5_audio_first_window_cp

0xe323,	// (0x00033d7d) call5_swipe_1_pane_g1_cp_ParamLimits

0xe323,	// (0x00033d7d) call5_swipe_1_pane_g1_cp

0xe363,	// (0x00033dbd) call5_swipe_1_pane_g2_cp

0xe33c,	// (0x00033d96) call5_swipe_1_pane_t1_cp_ParamLimits

0xe33c,	// (0x00033d96) call5_swipe_1_pane_t1_cp

0xe323,	// (0x00033d7d) call5_swipe_2_pane_g1_cp_ParamLimits

0xe323,	// (0x00033d7d) call5_swipe_2_pane_g1_cp

0xe36b,	// (0x00033dc5) call5_swipe_2_pane_g2_cp

0xe373,	// (0x00033dcd) call5_swipe_2_pane_t1_cp_ParamLimits

0xe373,	// (0x00033dcd) call5_swipe_2_pane_t1_cp

0x21e0,	// (0x00027c3a) main_sp_fs_email_pane

0xe388,	// (0x00033de2) main_sp_fs_listscroll_pane_te

0xe391,	// (0x00033deb) popup_sp_fs_action_menu_pane_ParamLimits

0xe391,	// (0x00033deb) popup_sp_fs_action_menu_pane

0xc286,	// (0x00031ce0) bg_sp_fs_ctrlbar_pane_g1

0xe3d5,	// (0x00033e2f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3de,	// (0x00033e38) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3e7,	// (0x00033e41) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc286,	// (0x00031ce0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x00035741) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc06b,	// (0x00031ac5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc06b,	// (0x00031ac5) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3f0,	// (0x00033e4a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3f0,	// (0x00033e4a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3fc,	// (0x00033e56) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3fc,	// (0x00033e56) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0003574a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0003574a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe408,	// (0x00033e62) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe408,	// (0x00033e62) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe422,	// (0x00033e7c) list_medium_line_t2_right_icon_g1

0x9bd3,	// (0x0002f62d) list_medium_line_t2_right_icon_t1

0x9be3,	// (0x0002f63d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0003574f) list_medium_line_t2_right_icon_t

0xbd80,	// (0x000317da) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbd80,	// (0x000317da) bg_sp_fs_ctrlbar_pane

0x9c3d,	// (0x0002f697) main_sp_fs_ctrlbar_button_pane_cp01

0x9c47,	// (0x0002f6a1) main_sp_fs_ctrlbar_ddmenu_pane

0xe462,	// (0x00033ebc) main_sp_fs_ctrlbar_pane_g1

0xe46e,	// (0x00033ec8) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x00035754) main_sp_fs_ctrlbar_pane_g

0xe47a,	// (0x00033ed4) main_sp_fs_ctrlbar_pane_t1

0x9c51,	// (0x0002f6ab) main_sp_fs_ctrlbar_pane

0x9c75,	// (0x0002f6cf) main_sp_fs_listscroll_pane_te_cp01

0x9c95,	// (0x0002f6ef) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9c95,	// (0x0002f6ef) popup_sp_fs_action_menu_pane_cp01

0x21e0,	// (0x00027c3a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x21e0,	// (0x00027c3a) bg_sp_fs_highlight_list_pane_cp01

0xe48f,	// (0x00033ee9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe48f,	// (0x00033ee9) sp_fs_action_menu_list_gene_pane_g1

0xe49e,	// (0x00033ef8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe49e,	// (0x00033ef8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00035759) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00035759) sp_fs_action_menu_list_gene_pane_g

0xe4ab,	// (0x00033f05) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4ab,	// (0x00033f05) sp_fs_action_menu_list_gene_pane_t1

0xe4c3,	// (0x00033f1d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4c3,	// (0x00033f1d) sp_fs_action_menu_list_gene_pane

0xe4e4,	// (0x00033f3e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4e4,	// (0x00033f3e) popup_sp_fs_action_menu_bg_pane

0xe4f2,	// (0x00033f4c) sp_fs_action_menu_list_pane_ParamLimits

0xe4f2,	// (0x00033f4c) sp_fs_action_menu_list_pane

0xe514,	// (0x00033f6e) sp_fs_scroll_pane_cp01_ParamLimits

0xe514,	// (0x00033f6e) sp_fs_scroll_pane_cp01

0x9caf,	// (0x0002f709) list_medium_line_plain_t2_t1

0x9cbf,	// (0x0002f719) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0003575e) list_medium_line_plain_t2_t

0x9ccf,	// (0x0002f729) list_medium_line_plain_t3_t1

0x9cdf,	// (0x0002f739) list_medium_line_plain_t3_t2

0x9ced,	// (0x0002f747) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00035763) list_medium_line_plain_t3_t

0x358e,	// (0x00028fe8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x2_t2_g2_g1

0x35a6,	// (0x00029000) list_medium_line_x2_t2_g2_g2_ParamLimits

0x35a6,	// (0x00029000) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00034cc4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00034cc4) list_medium_line_x2_t2_g2_g

0x49ed,	// (0x0002a447) list_medium_line_x2_t2_g2_t1_ParamLimits

0x49ed,	// (0x0002a447) list_medium_line_x2_t2_g2_t1

0x35db,	// (0x00029035) list_medium_line_x2_t2_g2_t2_ParamLimits

0x35db,	// (0x00029035) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0003576a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0003576a) list_medium_line_x2_t2_g2_t

0x358e,	// (0x00028fe8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x2_t4_g2_g1

0x35a6,	// (0x00029000) list_medium_line_x2_t4_g2_g2_ParamLimits

0x35a6,	// (0x00029000) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x00034cc4) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x00034cc4) list_medium_line_x2_t4_g2_g

0x9cfb,	// (0x0002f755) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9cfb,	// (0x0002f755) list_medium_line_x2_t4_g2_t1

0x9d15,	// (0x0002f76f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9d15,	// (0x0002f76f) list_medium_line_x2_t4_g2_t2

0x9d2a,	// (0x0002f784) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9d2a,	// (0x0002f784) list_medium_line_x2_t4_g2_t3

0x35db,	// (0x00029035) list_medium_line_x2_t4_g2_t4_ParamLimits

0x35db,	// (0x00029035) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0003576f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0003576f) list_medium_line_x2_t4_g2_t

0xe53a,	// (0x00033f94) list_medium_line_t3_right_iconx2_g1

0xe422,	// (0x00033e7c) list_medium_line_t3_right_iconx2_g2

0x9d3f,	// (0x0002f799) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00035778) list_medium_line_t3_right_iconx2_g

0x9d49,	// (0x0002f7a3) list_medium_line_t3_right_iconx2_t1

0x9d59,	// (0x0002f7b3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0003577f) list_medium_line_t3_right_iconx2_t

0x358e,	// (0x00028fe8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x3_t4_g4_g1

0x359a,	// (0x00028ff4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x359a,	// (0x00028ff4) list_medium_line_x3_t4_g4_g2

0x3624,	// (0x0002907e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3624,	// (0x0002907e) list_medium_line_x3_t4_g4_g3

0xe542,	// (0x00033f9c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe542,	// (0x00033f9c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x00035784) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x00035784) list_medium_line_x3_t4_g4_g

0x9d67,	// (0x0002f7c1) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9d67,	// (0x0002f7c1) list_medium_line_x3_t4_g4_t1

0x9d7e,	// (0x0002f7d8) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9d7e,	// (0x0002f7d8) list_medium_line_x3_t4_g4_t2

0x4a02,	// (0x0002a45c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4a02,	// (0x0002a45c) list_medium_line_x3_t4_g4_t3

0xe54e,	// (0x00033fa8) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe54e,	// (0x00033fa8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0003578d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0003578d) list_medium_line_x3_t4_g4_t

0x9d99,	// (0x0002f7f3) list_single_dyc_row_text_pane_t1_ParamLimits

0x9d99,	// (0x0002f7f3) list_single_dyc_row_text_pane_t1

0x9de2,	// (0x0002f83c) list_single_dyc_row_text_pane_t2_ParamLimits

0x9de2,	// (0x0002f83c) list_single_dyc_row_text_pane_t2

0xe56b,	// (0x00033fc5) list_single_dyc_row_text_pane_t3_ParamLimits

0xe56b,	// (0x00033fc5) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00035796) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00035796) list_single_dyc_row_text_pane_t

0xe57d,	// (0x00033fd7) list_single_dyc_row_pane_g1_ParamLimits

0xe57d,	// (0x00033fd7) list_single_dyc_row_pane_g1

0xe589,	// (0x00033fe3) list_single_dyc_row_pane_g2_ParamLimits

0xe589,	// (0x00033fe3) list_single_dyc_row_pane_g2

0xe595,	// (0x00033fef) list_single_dyc_row_pane_g3_ParamLimits

0xe595,	// (0x00033fef) list_single_dyc_row_pane_g3

0xe5a1,	// (0x00033ffb) list_single_dyc_row_pane_g4_ParamLimits

0xe5a1,	// (0x00033ffb) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x0003579d) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x0003579d) list_single_dyc_row_pane_g

0xe5ad,	// (0x00034007) list_single_dyc_row_text_pane_ParamLimits

0xe5ad,	// (0x00034007) list_single_dyc_row_text_pane

0x1f6e,	// (0x000279c8) bg_sp_fs_scroll_pane

0xe5cc,	// (0x00034026) thumb_sp_fs_scroll_pane

0xd353,	// (0x00032dad) list_medium_line_g1_ParamLimits

0xd353,	// (0x00032dad) list_medium_line_g1

0xe5d5,	// (0x0003402f) list_medium_line_t1_ParamLimits

0xe5d5,	// (0x0003402f) list_medium_line_t1

0x358e,	// (0x00028fe8) list_medium_line_x2_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x2_g1

0x359a,	// (0x00028ff4) list_medium_line_x2_g2_ParamLimits

0x359a,	// (0x00028ff4) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x000357a6) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x000357a6) list_medium_line_x2_g

0xe5ea,	// (0x00034044) list_medium_line_x2_t1_ParamLimits

0xe5ea,	// (0x00034044) list_medium_line_x2_t1

0x358e,	// (0x00028fe8) list_medium_line_x3_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x3_g1

0x359a,	// (0x00028ff4) list_medium_line_x3_g2_ParamLimits

0x359a,	// (0x00028ff4) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x000357a6) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x000357a6) list_medium_line_x3_g

0xe5ea,	// (0x00034044) list_medium_line_x3_t1_ParamLimits

0xe5ea,	// (0x00034044) list_medium_line_x3_t1

0xe600,	// (0x0003405a) thumb_sp_fs_scroll_pane_g1

0xe609,	// (0x00034063) thumb_sp_fs_scroll_pane_g2

0xe612,	// (0x0003406c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x000357ab) thumb_sp_fs_scroll_pane_g

0xe600,	// (0x0003405a) bg_sp_fs_scroll_pane_g1

0xe609,	// (0x00034063) bg_sp_fs_scroll_pane_g2

0xe612,	// (0x0003406c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x000357ab) bg_sp_fs_scroll_pane_g

0x358e,	// (0x00028fe8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x358e,	// (0x00028fe8) list_medium_line_x2_t3_g4_g1

0x3618,	// (0x00029072) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3618,	// (0x00029072) list_medium_line_x2_t3_g4_g2

0x359a,	// (0x00028ff4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x359a,	// (0x00028ff4) list_medium_line_x2_t3_g4_g3

0x35a6,	// (0x00029000) list_medium_line_x2_t3_g4_g4_ParamLimits

0x35a6,	// (0x00029000) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00034d40) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00034d40) list_medium_line_x2_t3_g4_g

0x9e3c,	// (0x0002f896) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9e3c,	// (0x0002f896) list_medium_line_x2_t3_g4_t1

0x9e56,	// (0x0002f8b0) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9e56,	// (0x0002f8b0) list_medium_line_x2_t3_g4_t2

0x35db,	// (0x00029035) list_medium_line_x2_t3_g4_t3_ParamLimits

0x35db,	// (0x00029035) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x000357b2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x000357b2) list_medium_line_x2_t3_g4_t

0xd353,	// (0x00032dad) list_medium_line_g2_g1_ParamLimits

0xd353,	// (0x00032dad) list_medium_line_g2_g1

0xd35f,	// (0x00032db9) list_medium_line_g2_g2_ParamLimits

0xd35f,	// (0x00032db9) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00035479) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00035479) list_medium_line_g2_g

0xe61b,	// (0x00034075) list_medium_line_g2_t1_ParamLimits

0xe61b,	// (0x00034075) list_medium_line_g2_t1

0xd353,	// (0x00032dad) list_medium_line_t3_g2_g1_ParamLimits

0xd353,	// (0x00032dad) list_medium_line_t3_g2_g1

0xd35f,	// (0x00032db9) list_medium_line_t3_g2_g2_ParamLimits

0xd35f,	// (0x00032db9) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00035479) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00035479) list_medium_line_t3_g2_g

0x9e70,	// (0x0002f8ca) list_medium_line_t3_g2_t1_ParamLimits

0x9e70,	// (0x0002f8ca) list_medium_line_t3_g2_t1

0x9e8a,	// (0x0002f8e4) list_medium_line_t3_g2_t2_ParamLimits

0x9e8a,	// (0x0002f8e4) list_medium_line_t3_g2_t2

0x9e9f,	// (0x0002f8f9) list_medium_line_t3_g2_t3_ParamLimits

0x9e9f,	// (0x0002f8f9) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x000357b9) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x000357b9) list_medium_line_t3_g2_t

0xe422,	// (0x00033e7c) list_medium_line_right_icon_g1

0xe630,	// (0x0003408a) list_medium_line_right_icon_t1

0xd353,	// (0x00032dad) list_medium_line_t2_g1_ParamLimits

0xd353,	// (0x00032dad) list_medium_line_t2_g1

0x9eb9,	// (0x0002f913) list_medium_line_t2_t1_ParamLimits

0x9eb9,	// (0x0002f913) list_medium_line_t2_t1

0x9ed3,	// (0x0002f92d) list_medium_line_t2_t2_ParamLimits

0x9ed3,	// (0x0002f92d) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x000357c0) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x000357c0) list_medium_line_t2_t

0xd353,	// (0x00032dad) list_medium_line_t3_g1_ParamLimits

0xd353,	// (0x00032dad) list_medium_line_t3_g1

0x9eec,	// (0x0002f946) list_medium_line_t3_t1_ParamLimits

0x9eec,	// (0x0002f946) list_medium_line_t3_t1

0x9f03,	// (0x0002f95d) list_medium_line_t3_t2_ParamLimits

0x9f03,	// (0x0002f95d) list_medium_line_t3_t2

0x9f18,	// (0x0002f972) list_medium_line_t3_t3_ParamLimits

0x9f18,	// (0x0002f972) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x000357c5) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x000357c5) list_medium_line_t3_t

0xd353,	// (0x00032dad) list_medium_line_g3_g1_ParamLimits

0xd353,	// (0x00032dad) list_medium_line_g3_g1

0xe63e,	// (0x00034098) list_medium_line_g3_g2_ParamLimits

0xe63e,	// (0x00034098) list_medium_line_g3_g2

0xd35f,	// (0x00032db9) list_medium_line_g3_g3_ParamLimits

0xd35f,	// (0x00032db9) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x000357cc) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x000357cc) list_medium_line_g3_g

0xe64a,	// (0x000340a4) list_medium_line_g3_t1_ParamLimits

0xe64a,	// (0x000340a4) list_medium_line_g3_t1

0xd353,	// (0x00032dad) list_medium_line_t2_g3_g1_ParamLimits

0xd353,	// (0x00032dad) list_medium_line_t2_g3_g1

0xe63e,	// (0x00034098) list_medium_line_t2_g3_g2_ParamLimits

0xe63e,	// (0x00034098) list_medium_line_t2_g3_g2

0xd35f,	// (0x00032db9) list_medium_line_t2_g3_g3_ParamLimits

0xd35f,	// (0x00032db9) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x000357cc) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x000357cc) list_medium_line_t2_g3_g

0x9f2a,	// (0x0002f984) list_medium_line_t2_g3_t1_ParamLimits

0x9f2a,	// (0x0002f984) list_medium_line_t2_g3_t1

0x9f44,	// (0x0002f99e) list_medium_line_t2_g3_t2_ParamLimits

0x9f44,	// (0x0002f99e) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x000357d3) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x000357d3) list_medium_line_t2_g3_t

0xd353,	// (0x00032dad) list_medium_line_t3_g3_g1_ParamLimits

0xd353,	// (0x00032dad) list_medium_line_t3_g3_g1

0xe63e,	// (0x00034098) list_medium_line_t3_g3_g2_ParamLimits

0xe63e,	// (0x00034098) list_medium_line_t3_g3_g2

0xd35f,	// (0x00032db9) list_medium_line_t3_g3_g3_ParamLimits

0xd35f,	// (0x00032db9) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x000357cc) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x000357cc) list_medium_line_t3_g3_g

0x9f5f,	// (0x0002f9b9) list_medium_line_t3_g3_t1_ParamLimits

0x9f5f,	// (0x0002f9b9) list_medium_line_t3_g3_t1

0x9f78,	// (0x0002f9d2) list_medium_line_t3_g3_t2_ParamLimits

0x9f78,	// (0x0002f9d2) list_medium_line_t3_g3_t2

0x9f8e,	// (0x0002f9e8) list_medium_line_t3_g3_t3_ParamLimits

0x9f8e,	// (0x0002f9e8) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x000357d8) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x000357d8) list_medium_line_t3_g3_t

0xe53a,	// (0x00033f94) list_medium_line_right_iconx2_g1

0xe422,	// (0x00033e7c) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x000357df) list_medium_line_right_iconx2_g

0xe65f,	// (0x000340b9) list_medium_line_right_iconx2_t1

0xe53a,	// (0x00033f94) list_medium_line_t2_right_iconx2_g1

0xe422,	// (0x00033e7c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x000357df) list_medium_line_t2_right_iconx2_g

0x9fa8,	// (0x0002fa02) list_medium_line_t2_right_iconx2_t1

0x9fb8,	// (0x0002fa12) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x000357e4) list_medium_line_t2_right_iconx2_t

0xe66d,	// (0x000340c7) list_medium_line_x4_t4_t1

0x9fca,	// (0x0002fa24) list_medium_line_x4_t4_t2

0x9fda,	// (0x0002fa34) list_medium_line_x4_t4_t3

0x9fea,	// (0x0002fa44) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x000357e9) list_medium_line_x4_t4_t

0xa03d,	// (0x0002fa97) tport_appsw_pane_ParamLimits

0xa03d,	// (0x0002fa97) tport_appsw_pane

0xa04e,	// (0x0002faa8) tport_contact_pane_ParamLimits

0xa04e,	// (0x0002faa8) tport_contact_pane

0xa067,	// (0x0002fac1) tport_listscroll_pane_ParamLimits

0xa067,	// (0x0002fac1) tport_listscroll_pane

0xa082,	// (0x0002fadc) cell_tport_appsw_pane_ParamLimits

0xa082,	// (0x0002fadc) cell_tport_appsw_pane

0xd004,	// (0x00032a5e) tport_appsw_pane_g1_ParamLimits

0xd004,	// (0x00032a5e) tport_appsw_pane_g1

0xe67b,	// (0x000340d5) tport_contact_pane_g1

0xde31,	// (0x0003388b) tport_contact_pane_t1

0xe684,	// (0x000340de) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x000357f2) tport_contact_pane_t

0xe692,	// (0x000340ec) list_tport_pane

0xe69b,	// (0x000340f5) scroll_pane_cp_030

0xe6ac,	// (0x00034106) cell_tport_appsw_pane_g1

0xe6bc,	// (0x00034116) cell_tport_appsw_pane_t1

0x1f6e,	// (0x000279c8) grid_highlight_pane_cp019

0xa0c2,	// (0x0002fb1c) list_tport_double_graphic_pane_ParamLimits

0xa0c2,	// (0x0002fb1c) list_tport_double_graphic_pane

0x21e0,	// (0x00027c3a) list_highlight_pane_cp023_ParamLimits

0x21e0,	// (0x00027c3a) list_highlight_pane_cp023

0xa0cf,	// (0x0002fb29) list_tport_double_graphic_pane_g1_ParamLimits

0xa0cf,	// (0x0002fb29) list_tport_double_graphic_pane_g1

0xa0dc,	// (0x0002fb36) list_tport_double_graphic_pane_t1_ParamLimits

0xa0dc,	// (0x0002fb36) list_tport_double_graphic_pane_t1

0xa0f1,	// (0x0002fb4b) list_tport_double_graphic_pane_t2_ParamLimits

0xa0f1,	// (0x0002fb4b) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x000357fe) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x000357fe) list_tport_double_graphic_pane_t

0x1f6e,	// (0x000279c8) main_cale_note_pane

0x1c60,	// (0x000276ba) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1c60,	// (0x000276ba) cell_vitu2_function_top_wide_pane_cp01

0x9775,	// (0x0002f1cf) wait_bar_pane_cp05_ParamLimits

0x1f6e,	// (0x000279c8) listscroll_cmail_pane

0xe6d2,	// (0x0003412c) list_cmail_pane

0xd2d0,	// (0x00032d2a) list_cmail_body_pane

0xa10d,	// (0x0002fb67) list_single_cmail_header_caption_pane

0xa123,	// (0x0002fb7d) list_single_cmail_header_detail_pane_ParamLimits

0xa123,	// (0x0002fb7d) list_single_cmail_header_detail_pane

0xa14c,	// (0x0002fba6) list_single_cmail_header_caption_pane_t1

0xa15c,	// (0x0002fbb6) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa15c,	// (0x0002fbb6) list_single_cmail_header_detail_pane_g1

0xe6f3,	// (0x0003414d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6f3,	// (0x0003414d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00035803) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00035803) list_single_cmail_header_detail_pane_g

0xe70c,	// (0x00034166) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe70c,	// (0x00034166) list_single_cmail_header_detail_pane_t1

0xe742,	// (0x0003419c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe742,	// (0x0003419c) list_single_cmail_header_editor_pane_bg

0xdfe0,	// (0x00033a3a) list_cmail_body_pane_g1

0xe754,	// (0x000341ae) list_cmail_body_pane_t1

0xd07e,	// (0x00032ad8) list_single_cmail_header_editor_pane_bg_g1

0x3cd0,	// (0x0002972a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd08e,	// (0x00032ae8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd086,	// (0x00032ae0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd32b,	// (0x00032d85) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd0ae,	// (0x00032b08) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd09e,	// (0x00032af8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd0a6,	// (0x00032b00) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3cb0,	// (0x0002970a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa19a,	// (0x0002fbf4) calenote_gesture_pane_ParamLimits

0xa19a,	// (0x0002fbf4) calenote_gesture_pane

0xa1ba,	// (0x0002fc14) calenote_window_pane_ParamLimits

0xa1ba,	// (0x0002fc14) calenote_window_pane

0xe762,	// (0x000341bc) popup_note_window_cp01

0xa1d6,	// (0x0002fc30) calenote_swipe_1_pane_ParamLimits

0xa1d6,	// (0x0002fc30) calenote_swipe_1_pane

0x9bb9,	// (0x0002f613) calenote_swipe_2_pane_ParamLimits

0x9bb9,	// (0x0002f613) calenote_swipe_2_pane

0xe323,	// (0x00033d7d) calenote_swipe_1_pane_g1_ParamLimits

0xe323,	// (0x00033d7d) calenote_swipe_1_pane_g1

0xe330,	// (0x00033d8a) calenote_swipe_1_pane_g2_ParamLimits

0xe330,	// (0x00033d8a) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x00035737) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x00035737) calenote_swipe_1_pane_g

0xe774,	// (0x000341ce) calenote_swipe_1_pane_t1_ParamLimits

0xe774,	// (0x000341ce) calenote_swipe_1_pane_t1

0xe323,	// (0x00033d7d) calenote_swipe_2_pane_g1_ParamLimits

0xe323,	// (0x00033d7d) calenote_swipe_2_pane_g1

0xe793,	// (0x000341ed) calenote_swipe_2_pane_g2_ParamLimits

0xe793,	// (0x000341ed) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x0003580f) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x0003580f) calenote_swipe_2_pane_g

0xe79f,	// (0x000341f9) calenote_swipe_2_pane_t1_ParamLimits

0xe79f,	// (0x000341f9) calenote_swipe_2_pane_t1

0x1f6e,	// (0x000279c8) main_mup_navstr_pane

0x75c3,	// (0x0002d01d) main_mup3_pane_t7_ParamLimits

0x75c3,	// (0x0002d01d) main_mup3_pane_t7

0xcbe7,	// (0x00032641) main_mp4_pane_g6_ParamLimits

0xcbe7,	// (0x00032641) main_mp4_pane_g6

0xce19,	// (0x00032873) main_image3_pane_t4_ParamLimits

0xce19,	// (0x00032873) main_image3_pane_t4

0xa1eb,	// (0x0002fc45) popup_navstr_preview_pane_ParamLimits

0xa1eb,	// (0x0002fc45) popup_navstr_preview_pane

0xa1ff,	// (0x0002fc59) scroll_navstr_pane_ParamLimits

0xa1ff,	// (0x0002fc59) scroll_navstr_pane

0x1f6e,	// (0x000279c8) bg_popup_preview_window_pane_cp04

0xe7c6,	// (0x00034220) popup_navstr_preview_pane_t1

0xa213,	// (0x0002fc6d) scroll_navstr_pane_g1_ParamLimits

0xa213,	// (0x0002fc6d) scroll_navstr_pane_g1

0xa227,	// (0x0002fc81) scroll_navstr_pane_t1_ParamLimits

0xa227,	// (0x0002fc81) scroll_navstr_pane_t1

0xe76b,	// (0x000341c5) bg_button_pane_cp014

0xe76b,	// (0x000341c5) bg_button_pane_cp030

0x9a57,	// (0x0002f4b1) list_double_fisheye_pane_g4_ParamLimits

0x9a57,	// (0x0002f4b1) list_double_fisheye_pane_g4

0x9a63,	// (0x0002f4bd) list_double_fisheye_pane_g5_ParamLimits

0x9a63,	// (0x0002f4bd) list_double_fisheye_pane_g5

0xe6da,	// (0x00034134) sp_fs_scroll_pane_cp03

0xe462,	// (0x00033ebc) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe46e,	// (0x00033ec8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x00035754) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe47a,	// (0x00033ed4) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa103,	// (0x0002fb5d) sp_fs_scroll_pane_cp02

0x2e0c,	// (0x00028866) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2e0c,	// (0x00028866) popup_sp_fs_calendar_preview_list_single_pane

0x1f6e,	// (0x000279c8) main_cam6_pano_pane

0x21e0,	// (0x00027c3a) main_mup3_pane_ParamLimits

0x1f6e,	// (0x000279c8) main_phacti_pane

0x9648,	// (0x0002f0a2) bg_button_pane_cp11

0x9662,	// (0x0002f0bc) main_mobtv_info_pane_g2_ParamLimits

0x9662,	// (0x0002f0bc) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x000356b4) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x000356b4) main_mobtv_info_pane_g

0x983d,	// (0x0002f297) sc_clock_pane_t5_ParamLimits

0x983d,	// (0x0002f297) sc_clock_pane_t5

0x98c2,	// (0x0002f31c) main_radioblah_pane_g1_ParamLimits

0xe266,	// (0x00033cc0) main_radioblah_pane_t3_ParamLimits

0xe266,	// (0x00033cc0) main_radioblah_pane_t3

0xe27e,	// (0x00033cd8) main_radioblah_pane_t4_ParamLimits

0xe27e,	// (0x00033cd8) main_radioblah_pane_t4

0x98ea,	// (0x0002f344) main_radioblah_text_pane_ParamLimits

0x98ea,	// (0x0002f344) main_radioblah_text_pane

0x98fc,	// (0x0002f356) main_radioblah_info_pane_g1_ParamLimits

0x9995,	// (0x0002f3ef) main_radioblah_info_pane_t4_ParamLimits

0x9995,	// (0x0002f3ef) main_radioblah_info_pane_t4

0x21e0,	// (0x00027c3a) main_sp_fs_calendar_pane

0xa23e,	// (0x0002fc98) main_phacti_pane_g1

0xa246,	// (0x0002fca0) phacti_note_pane_ParamLimits

0xa246,	// (0x0002fca0) phacti_note_pane

0xe7dd,	// (0x00034237) phacti_term_pane_ParamLimits

0xe7dd,	// (0x00034237) phacti_term_pane

0xe7f2,	// (0x0003424c) phacti_note_pane_t1_ParamLimits

0xe7f2,	// (0x0003424c) phacti_note_pane_t1

0xe809,	// (0x00034263) phacti_term_pane_g1

0xe811,	// (0x0003426b) phacti_term_pane_t1_ParamLimits

0xe811,	// (0x0003426b) phacti_term_pane_t1

0xe83b,	// (0x00034295) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3586,	// (0x00028fe0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00035819) popup_sp_fs_calendar_preview_list_single_pane_g

0xe843,	// (0x0003429d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe843,	// (0x0003429d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe858,	// (0x000342b2) aid_popup_sp_fs_bg_corner_pane

0xc286,	// (0x00031ce0) popup_sp_fs_calendar_preview_bg_pane_g1

0x1f6e,	// (0x000279c8) popup_sp_fs_calendar_preview_bg_pane

0xe860,	// (0x000342ba) popup_sp_fs_calendar_preview_list_pane

0x21e0,	// (0x00027c3a) bg_main_sp_fs_cale_pane_ParamLimits

0x21e0,	// (0x00027c3a) bg_main_sp_fs_cale_pane

0xe871,	// (0x000342cb) listscroll_cale_mrui_pane_ParamLimits

0xe871,	// (0x000342cb) listscroll_cale_mrui_pane

0xe885,	// (0x000342df) listscroll_sp_fs_schedule_track_pane

0xe88e,	// (0x000342e8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe88e,	// (0x000342e8) main_sp_fs_ctrlbar_pane_cp01

0xe89f,	// (0x000342f9) main_sp_fs_ribbon_pane

0xe8a7,	// (0x00034301) popup_sp_fs_cale_preview_window

0xa29d,	// (0x0002fcf7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa29d,	// (0x0002fcf7) list_single_sp_fs_schedule_track_pane

0x21e0,	// (0x00027c3a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x21e0,	// (0x00027c3a) bg_sp_fs_highlight_list_pane_cp03

0xa2af,	// (0x0002fd09) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa2af,	// (0x0002fd09) list_single_sp_fs_schedule_track_pane_g1

0xa2bb,	// (0x0002fd15) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa2bb,	// (0x0002fd15) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0003581e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0003581e) list_single_sp_fs_schedule_track_pane_g

0xa2c7,	// (0x0002fd21) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa2c7,	// (0x0002fd21) list_single_sp_fs_schedule_track_pane_t1

0xa2e1,	// (0x0002fd3b) sp_fs_schedule_track_pane_ParamLimits

0xa2e1,	// (0x0002fd3b) sp_fs_schedule_track_pane

0xe8b9,	// (0x00034313) sp_fs_schedule_track_pane_g1

0xe8c1,	// (0x0003431b) sp_fs_schedule_track_pane_g2

0xe8c9,	// (0x00034323) sp_fs_schedule_track_pane_g3

0xe8d1,	// (0x0003432b) sp_fs_schedule_track_pane_g4

0xe8d9,	// (0x00034333) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x00035823) sp_fs_schedule_track_pane_g

0xd07e,	// (0x00032ad8) bg_sp_fs_schedule_viewer_highlight_g1

0x3cd0,	// (0x0002972a) bg_sp_fs_schedule_viewer_highlight_g2

0xd086,	// (0x00032ae0) bg_sp_fs_schedule_viewer_highlight_g3

0xd08e,	// (0x00032ae8) bg_sp_fs_schedule_viewer_highlight_g4

0xd32b,	// (0x00032d85) bg_sp_fs_schedule_viewer_highlight_g5

0xd09e,	// (0x00032af8) bg_sp_fs_schedule_viewer_highlight_g6

0xd0a6,	// (0x00032b00) bg_sp_fs_schedule_viewer_highlight_g7

0xd0ae,	// (0x00032b08) bg_sp_fs_schedule_viewer_highlight_g8

0x3cb0,	// (0x0002970a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0003582e) bg_sp_fs_schedule_viewer_highlight_g

0x1f6e,	// (0x000279c8) bg_main_sp_fs_ribbon_pane

0xa2f2,	// (0x0002fd4c) main_sp_fs_ribbon_pane_g1

0xe8e1,	// (0x0003433b) main_sp_fs_ribbon_pane_t1

0xa2fb,	// (0x0002fd55) main_sp_fs_ribbon_pane_t2

0xe8f0,	// (0x0003434a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00035841) main_sp_fs_ribbon_pane_t

0xe8ff,	// (0x00034359) main_sp_fs_ribbon_scheduler_pane

0xe907,	// (0x00034361) bg_main_sp_fs_ribbon_pane_g1

0xe910,	// (0x0003436a) bg_main_sp_fs_ribbon_pane_g2

0xe919,	// (0x00034373) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00035848) bg_main_sp_fs_ribbon_pane_g

0xe921,	// (0x0003437b) main_sp_fs_ribbon_scheduler_pane_g1

0xe92a,	// (0x00034384) main_sp_fs_ribbon_scheduler_pane_g2

0xe933,	// (0x0003438d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0003584f) main_sp_fs_ribbon_scheduler_pane_g

0xe93c,	// (0x00034396) list_cale_mrui_pane

0xa30a,	// (0x0002fd64) sp_fs_scroll_pane_cp07_ParamLimits

0xa30a,	// (0x0002fd64) sp_fs_scroll_pane_cp07

0xa31e,	// (0x0002fd78) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa31e,	// (0x0002fd78) bg_sp_fs_schedule_viewer_highlight

0xe945,	// (0x0003439f) list_single_sp_fs_schedule_track_pane_cp01

0xe94d,	// (0x000343a7) list_sp_fs_schedule_track_pane

0xe955,	// (0x000343af) sp_fs_scroll_pane_cp06_ParamLimits

0xe955,	// (0x000343af) sp_fs_scroll_pane_cp06

0xc286,	// (0x00031ce0) bgmain_sp_fs_calendar_pane_g1

0xa32e,	// (0x0002fd88) list_single_cale_mrui_pane_ParamLimits

0xa32e,	// (0x0002fd88) list_single_cale_mrui_pane

0xe967,	// (0x000343c1) list_single_cale_mrui_row_pane_ParamLimits

0xe967,	// (0x000343c1) list_single_cale_mrui_row_pane

0xe974,	// (0x000343ce) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe974,	// (0x000343ce) list_single_cale_mrui_row_pane_g1

0xe9ac,	// (0x00034406) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9ac,	// (0x00034406) list_single_cale_mrui_row_pane_t1

0xa34e,	// (0x0002fda8) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa34e,	// (0x0002fda8) list_single_cale_mrui_row_pane_t2

0xe9be,	// (0x00034418) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9be,	// (0x00034418) list_single_cale_mrui_row_pane_t3

0xe9ed,	// (0x00034447) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9ed,	// (0x00034447) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0003585b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0003585b) list_single_cale_mrui_row_pane_t

0xa3b6,	// (0x0002fe10) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa3b6,	// (0x0002fe10) list_single_cmail_header_editor_pane_bg_cp01

0xa3dc,	// (0x0002fe36) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa3dc,	// (0x0002fe36) list_single_cmail_header_editor_pane_bg_cp02

0xa3fc,	// (0x0002fe56) main_radioblah_text_pane_t1_ParamLimits

0xa3fc,	// (0x0002fe56) main_radioblah_text_pane_t1

0xea1c,	// (0x00034476) cam6_indi_pane_cp01

0xea24,	// (0x0003447e) cam6_mode_pane_cp01

0xea2c,	// (0x00034486) cam6_pano_pane

0xea35,	// (0x0003448f) cam6_zoom_pane_cp01

0xea3d,	// (0x00034497) cam6_pano_image_pane

0xea48,	// (0x000344a2) cam6_pano_pane_g1

0xdfe0,	// (0x00033a3a) cam6_pano_pane_g2

0xea51,	// (0x000344ab) cam6_pano_pane_g3

0xea5a,	// (0x000344b4) cam6_pano_pane_g4

0xc82e,	// (0x00032288) cam6_pano_pane_g5

0xea63,	// (0x000344bd) cam6_pano_pane_g6

0xea6d,	// (0x000344c7) cam6_pano_pane_g7

0xea75,	// (0x000344cf) cam6_pano_pane_g8

0xea7e,	// (0x000344d8) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x00035864) cam6_pano_pane_g

0x1f6e,	// (0x000279c8) main_browser_tag_pane

0xe7be,	// (0x00034218) grid_navstr_albumart_pane

0xea89,	// (0x000344e3) cell_navstr_albumart_pane_ParamLimits

0xea89,	// (0x000344e3) cell_navstr_albumart_pane

0xeaac,	// (0x00034506) cell_navstr_albumart_pane_g1

0xbb9d,	// (0x000315f7) cell_navstr_albumart_pane_g2

0xbbad,	// (0x00031607) cell_navstr_albumart_pane_g3

0xbba5,	// (0x000315ff) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x00035877) cell_navstr_albumart_pane_g

0xa416,	// (0x0002fe70) bt_list_pane_ParamLimits

0xa416,	// (0x0002fe70) bt_list_pane

0xa42a,	// (0x0002fe84) bt_list_pane_t1

0xa439,	// (0x0002fe93) bt_list_pane_t2

0x0001,

0xfe26,	// (0x00035880) bt_list_pane_t

0x1f6e,	// (0x000279c8) main_cale_prevew_pane

0xa448,	// (0x0002fea2) popup_cale_preview_window_ParamLimits

0xa448,	// (0x0002fea2) popup_cale_preview_window

0x21e0,	// (0x00027c3a) bg_popup_preview_window_pane_cp05_ParamLimits

0x21e0,	// (0x00027c3a) bg_popup_preview_window_pane_cp05

0xeab4,	// (0x0003450e) list_cale_preview_pane_ParamLimits

0xeab4,	// (0x0003450e) list_cale_preview_pane

0xa463,	// (0x0002febd) list_double_cale_preview_pane_ParamLimits

0xa463,	// (0x0002febd) list_double_cale_preview_pane

0xa475,	// (0x0002fecf) list_single_cale_preview_pane_ParamLimits

0xa475,	// (0x0002fecf) list_single_cale_preview_pane

0xa48b,	// (0x0002fee5) list_single_cale_preview_pane_g1

0xa493,	// (0x0002feed) list_single_cale_preview_pane_t1_ParamLimits

0xa493,	// (0x0002feed) list_single_cale_preview_pane_t1

0xa4a8,	// (0x0002ff02) list_double_cale_preview_pane_g1

0xa4b0,	// (0x0002ff0a) list_double_cale_preview_pane_t1_ParamLimits

0xa4b0,	// (0x0002ff0a) list_double_cale_preview_pane_t1

0xa4c5,	// (0x0002ff1f) list_double_cale_preview_pane_t2_ParamLimits

0xa4c5,	// (0x0002ff1f) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x00035885) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x00035885) list_double_cale_preview_pane_t

0x1f6e,	// (0x000279c8) main_ezdial_pane

0x21e0,	// (0x00027c3a) main_sp_fs_email_pane_ParamLimits

0x9bf5,	// (0x0002f64f) cmail_ddmenu_btn01_pane_ParamLimits

0x9bf5,	// (0x0002f64f) cmail_ddmenu_btn01_pane

0x9c08,	// (0x0002f662) cmail_ddmenu_btn02_pane_ParamLimits

0x9c08,	// (0x0002f662) cmail_ddmenu_btn02_pane

0x9c2b,	// (0x0002f685) cmail_ddmenu_btn03_pane_ParamLimits

0x9c2b,	// (0x0002f685) cmail_ddmenu_btn03_pane

0x9c51,	// (0x0002f6ab) main_sp_fs_ctrlbar_pane_ParamLimits

0x9c75,	// (0x0002f6cf) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd2d0,	// (0x00032d2a) list_cmail_body_pane_ParamLimits

0xe6ea,	// (0x00034144) bg_button_pane_cp12

0xe6ff,	// (0x00034159) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6ff,	// (0x00034159) list_single_cmail_header_detail_pane_g3

0xa174,	// (0x0002fbce) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa174,	// (0x0002fbce) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x0003580a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x0003580a) list_single_cmail_header_detail_pane_t

0xe826,	// (0x00034280) phacti_term_pane_t2_ParamLimits

0xe826,	// (0x00034280) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x00035814) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x00035814) phacti_term_pane_t

0xeac0,	// (0x0003451a) aid_size_list_single_double

0xa4dd,	// (0x0002ff37) popup_ezdial_listscroll_window

0xa4f9,	// (0x0002ff53) popup_number_entry_window_cp01

0x51bf,	// (0x0002ac19) bg_popup_call_pane_cp09

0xeacc,	// (0x00034526) ezdial_list_pane

0xead4,	// (0x0003452e) scroll_pane_cp23

0xbd80,	// (0x000317da) bg_button_pane_cp028_ParamLimits

0xbd80,	// (0x000317da) bg_button_pane_cp028

0xa507,	// (0x0002ff61) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa507,	// (0x0002ff61) cmail_ddmenu_btn01_pane_g1

0xa513,	// (0x0002ff6d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa513,	// (0x0002ff6d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x0003588a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x0003588a) cmail_ddmenu_btn01_pane_g

0xeadc,	// (0x00034536) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeadc,	// (0x00034536) cmail_ddmenu_btn01_pane_t1

0xbd80,	// (0x000317da) bg_button_pane_cp029_ParamLimits

0xbd80,	// (0x000317da) bg_button_pane_cp029

0xa51f,	// (0x0002ff79) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa51f,	// (0x0002ff79) cmail_ddmenu_btn02_pane_g1

0xa537,	// (0x0002ff91) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa537,	// (0x0002ff91) cmail_ddmenu_btn02_pane_t1

0x21e0,	// (0x00027c3a) bg_button_pane_cp031_ParamLimits

0x21e0,	// (0x00027c3a) bg_button_pane_cp031

0xa51f,	// (0x0002ff79) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa51f,	// (0x0002ff79) cmail_ddmenu_btn03_pane_g1

0xa537,	// (0x0002ff91) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa537,	// (0x0002ff91) cmail_ddmenu_btn03_pane_t1

0x7f31,	// (0x0002d98b) cell_dialer2_keypad_pane_t1_ParamLimits

0x7f4b,	// (0x0002d9a5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7f4b,	// (0x0002d9a5) cell_dialer2_keypad_pane_t1_copy1

0x94ca,	// (0x0002ef24) ncimui_group_button_pane

0x21e0,	// (0x00027c3a) main_sp_fs_calendar_pane_ParamLimits

0xa10d,	// (0x0002fb67) list_single_cmail_header_caption_pane_ParamLimits

0xe868,	// (0x000342c2) aid_recal_txt_sm_pane

0x1f6e,	// (0x000279c8) mian_recal_day_pane

0xe8a7,	// (0x00034301) popup_sp_fs_cale_preview_window_ParamLimits

0x1f6e,	// (0x000279c8) list_recal_day_pane

0xeb13,	// (0x0003456d) list_single_recal_day_pane_ParamLimits

0xeb13,	// (0x0003456d) list_single_recal_day_pane

0xeb25,	// (0x0003457f) list_single_recal_day_pane_g1_ParamLimits

0xeb25,	// (0x0003457f) list_single_recal_day_pane_g1

0xeb31,	// (0x0003458b) list_single_recal_day_pane_g2_ParamLimits

0xeb31,	// (0x0003458b) list_single_recal_day_pane_g2

0xeb40,	// (0x0003459a) list_single_recal_day_pane_g3_ParamLimits

0xeb40,	// (0x0003459a) list_single_recal_day_pane_g3

0xa55b,	// (0x0002ffb5) list_single_recal_day_pane_g4_ParamLimits

0xa55b,	// (0x0002ffb5) list_single_recal_day_pane_g4

0xeb4c,	// (0x000345a6) list_single_recal_day_pane_g5_ParamLimits

0xeb4c,	// (0x000345a6) list_single_recal_day_pane_g5

0xeb5b,	// (0x000345b5) list_single_recal_day_pane_g6_ParamLimits

0xeb5b,	// (0x000345b5) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x00035899) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x00035899) list_single_recal_day_pane_g

0xeb67,	// (0x000345c1) list_single_recal_day_pane_t1

0xeb75,	// (0x000345cf) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x000358a6) list_single_recal_day_pane_t

0xa56e,	// (0x0002ffc8) ncimui_query_button_pane_ParamLimits

0xa56e,	// (0x0002ffc8) ncimui_query_button_pane

0xa57e,	// (0x0002ffd8) ncimui_query_button_pane_t1_ParamLimits

0xa57e,	// (0x0002ffd8) ncimui_query_button_pane_t1

0xeb83,	// (0x000345dd) ncimui_query_button_pane_t2_ParamLimits

0xeb83,	// (0x000345dd) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x000358ab) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x000358ab) ncimui_query_button_pane_t

0xa591,	// (0x0002ffeb) query_button_pane_ParamLimits

0xa591,	// (0x0002ffeb) query_button_pane

0x1f6e,	// (0x000279c8) bg_button_pane_cp0028

0xeb96,	// (0x000345f0) query_button_pane_t1

0x66db,	// (0x0002c135) main_tport_pane_ParamLimits

0x9ffa,	// (0x0002fa54) bg_popup_window_pane_cp01_ParamLimits

0x9ffa,	// (0x0002fa54) bg_popup_window_pane_cp01

0xa014,	// (0x0002fa6e) heading_pane_cp08_ParamLimits

0xa014,	// (0x0002fa6e) heading_pane_cp08

0xa028,	// (0x0002fa82) heading_pane_cp07_ParamLimits

0xa028,	// (0x0002fa82) heading_pane_cp07

0xe6ac,	// (0x00034106) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x000357f7) cell_tport_appsw_pane_g

0x5750,	// (0x0002b1aa) input_candi_list_open_g1

0x477f,	// (0x0002a1d9) list_cale_time_pane_g6_ParamLimits

0x477f,	// (0x0002a1d9) list_cale_time_pane_g6

0x6fd1,	// (0x0002ca2b) aid_size_touch_calib_1_ParamLimits

0x6fd1,	// (0x0002ca2b) aid_size_touch_calib_1

0x6fdd,	// (0x0002ca37) aid_size_touch_calib_2_ParamLimits

0x6fdd,	// (0x0002ca37) aid_size_touch_calib_2

0x6ff3,	// (0x0002ca4d) aid_size_touch_calib_3_ParamLimits

0x6ff3,	// (0x0002ca4d) aid_size_touch_calib_3

0x7011,	// (0x0002ca6b) aid_size_touch_calib_4_ParamLimits

0x7011,	// (0x0002ca6b) aid_size_touch_calib_4

0x7027,	// (0x0002ca81) main_touch_calib_button_group_pane_ParamLimits

0x7027,	// (0x0002ca81) main_touch_calib_button_group_pane

0x703f,	// (0x0002ca99) main_touch_calib_pane_g1_ParamLimits

0x704b,	// (0x0002caa5) main_touch_calib_pane_g2_ParamLimits

0x7057,	// (0x0002cab1) main_touch_calib_pane_g3_ParamLimits

0x7063,	// (0x0002cabd) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x000351cf) main_touch_calib_pane_g_ParamLimits

0x706f,	// (0x0002cac9) main_touch_calib_pane_t1_ParamLimits

0x7089,	// (0x0002cae3) main_touch_calib_pane_t2_ParamLimits

0x70a3,	// (0x0002cafd) main_touch_calib_pane_t3_ParamLimits

0x70b7,	// (0x0002cb11) main_touch_calib_pane_t4_ParamLimits

0x70cb,	// (0x0002cb25) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x000351d8) main_touch_calib_pane_t_ParamLimits

0xc604,	// (0x0003205e) list_single_fp_cale_pane_g3_ParamLimits

0xc604,	// (0x0003205e) list_single_fp_cale_pane_g3

0xd066,	// (0x00032ac0) bg_button_pane_cp012_ParamLimits

0xd066,	// (0x00032ac0) bg_vkb2_func_pane_cp03_ParamLimits

0x1e5e,	// (0x000278b8) cell_vitu2_function_top_pane_g1_ParamLimits

0xd066,	// (0x00032ac0) bg_vkb2_func_pane_cp04_ParamLimits

0x946a,	// (0x0002eec4) main_ncimui_button_group_pane_ParamLimits

0x946a,	// (0x0002eec4) main_ncimui_button_group_pane

0x94b8,	// (0x0002ef12) main_ncimui_pane_t3_ParamLimits

0x94b8,	// (0x0002ef12) main_ncimui_pane_t3

0xe7d4,	// (0x0003422e) phacti_button_group_pane

0xeac0,	// (0x0003451a) aid_size_list_single_double_ParamLimits

0xa4dd,	// (0x0002ff37) popup_ezdial_listscroll_window_ParamLimits

0xa4f9,	// (0x0002ff53) popup_number_entry_window_cp01_ParamLimits

0xa5a4,	// (0x0002fffe) phacti_button_pane_ParamLimits

0xa5a4,	// (0x0002fffe) phacti_button_pane

0x1f6e,	// (0x000279c8) bg_button_pane_cp14

0xeba4,	// (0x000345fe) phacti_button_pane_t1

0xa5b5,	// (0x0003000f) main_touch_calib_button_pane_ParamLimits

0xa5b5,	// (0x0003000f) main_touch_calib_button_pane

0x2be4,	// (0x0002863e) bg_button_pane_cp18_ParamLimits

0x2be4,	// (0x0002863e) bg_button_pane_cp18

0xebb2,	// (0x0003460c) main_touch_calib_button_pane_t1_ParamLimits

0xebb2,	// (0x0003460c) main_touch_calib_button_pane_t1

0xebc8,	// (0x00034622) main_touch_calib_button_pane_t2_ParamLimits

0xebc8,	// (0x00034622) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x000358b0) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x000358b0) main_touch_calib_button_pane_t

0x1f6e,	// (0x000279c8) cell_ncimui_button_pane

0x1f6e,	// (0x000279c8) bg_button_pane_cp032

0xebe6,	// (0x00034640) cell_ncimui_button_pane_t1

0xcdf9,	// (0x00032853) image3_infobar_pane_ParamLimits

0xcdf9,	// (0x00032853) image3_infobar_pane

0x9869,	// (0x0002f2c3) fs_bigclock_status_pane_ParamLimits

0x9869,	// (0x0002f2c3) fs_bigclock_status_pane

0x9876,	// (0x0002f2d0) main_fs_bigclock_clock_pane_ParamLimits

0x9876,	// (0x0002f2d0) main_fs_bigclock_clock_pane

0x9889,	// (0x0002f2e3) main_fs_bigclock_indi_pane_ParamLimits

0x9889,	// (0x0002f2e3) main_fs_bigclock_indi_pane

0x98a1,	// (0x0002f2fb) main_fs_bigclock_swipe_pane_ParamLimits

0x98a1,	// (0x0002f2fb) main_fs_bigclock_swipe_pane

0x1f6e,	// (0x000279c8) main_fs_clock_dumped_data

0xe0ed,	// (0x00033b47) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0ed,	// (0x00033b47) list_single_fs_bigclock_indicator_pane_g1

0xe109,	// (0x00033b63) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe109,	// (0x00033b63) list_single_fs_bigclock_indicator_pane_g2

0xe123,	// (0x00033b7d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe123,	// (0x00033b7d) list_single_fs_bigclock_indicator_pane_g3

0xe13d,	// (0x00033b97) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe13d,	// (0x00033b97) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x000356e8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x000356e8) list_single_fs_bigclock_indicator_pane_g

0xe163,	// (0x00033bbd) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe163,	// (0x00033bbd) list_single_fs_bigclock_indicator_pane_t1

0xe18b,	// (0x00033be5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe18b,	// (0x00033be5) list_single_fs_bigclock_indicator_pane_t2

0xe1b3,	// (0x00033c0d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1b3,	// (0x00033c0d) list_single_fs_bigclock_indicator_pane_t3

0xe1db,	// (0x00033c35) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1db,	// (0x00033c35) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x000356f3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x000356f3) list_single_fs_bigclock_indicator_pane_t

0xebf4,	// (0x0003464e) image3_infobar_fav_pane_ParamLimits

0xebf4,	// (0x0003464e) image3_infobar_fav_pane

0xec04,	// (0x0003465e) image3_infobar_loc_pane_ParamLimits

0xec04,	// (0x0003465e) image3_infobar_loc_pane

0xec18,	// (0x00034672) image3_infobar_time_pane_ParamLimits

0xec18,	// (0x00034672) image3_infobar_time_pane

0xc286,	// (0x00031ce0) image3_infobar_time_pane_g1

0xec28,	// (0x00034682) image3_infobar_time_pane_t1

0xc286,	// (0x00031ce0) image3_infobar_loc_pane_g1

0xec36,	// (0x00034690) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x000358b5) image3_infobar_loc_pane_g

0xec3e,	// (0x00034698) image3_infobar_loc_pane_t1

0xc286,	// (0x00031ce0) image3_infobar_fav_pane_g1

0xec4c,	// (0x000346a6) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x000358ba) image3_infobar_fav_pane_g

0xec54,	// (0x000346ae) fs_bigclock_status_battery_pane

0xec5d,	// (0x000346b7) fs_bigclock_status_signal_pane

0xec66,	// (0x000346c0) fs_bigclock_status_title_pane

0xec6f,	// (0x000346c9) fs_bigclock_status_signal_pane_g1

0xec78,	// (0x000346d2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x000358bf) fs_bigclock_status_signal_pane_g

0xec80,	// (0x000346da) fs_bigclock_status_battery_pane_g1

0xec89,	// (0x000346e3) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x000358c4) fs_bigclock_status_battery_pane_g

0xec91,	// (0x000346eb) fs_bigclock_status_title_pane_t1

0xc286,	// (0x00031ce0) main_fs_bigclock_clock_pane_g1

0xec9f,	// (0x000346f9) main_fs_bigclock_clock_pane_g2

0xec9f,	// (0x000346f9) main_fs_bigclock_clock_pane_g3

0xec9f,	// (0x000346f9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x000358c9) main_fs_bigclock_clock_pane_g

0xeca7,	// (0x00034701) main_fs_bigclock_clock_pane_t1

0xecb5,	// (0x0003470f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x000358d2) main_fs_bigclock_clock_pane_t

0xecc4,	// (0x0003471e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecc4,	// (0x0003471e) list_single_fs_bigclock_indicator_pane

0xa5ca,	// (0x00030024) list_single_fs_bigclock_pane_ParamLimits

0xa5ca,	// (0x00030024) list_single_fs_bigclock_pane

0xecde,	// (0x00034738) main_fs_bigclock_indicator_pane_t1

0xeced,	// (0x00034747) list_single_fs_bigclock_pane_g1

0xecf5,	// (0x0003474f) list_single_fs_bigclock_pane_t1

0xc286,	// (0x00031ce0) main_fs_bigclock_swipe_pane_g1

0xed33,	// (0x0003478d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x000358e3) main_fs_bigclock_swipe_pane_g

0xed3b,	// (0x00034795) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed3b,	// (0x00034795) main_fs_bigclock_swipe_pane_t1

0x4b3a,	// (0x0002a594) call_type_pane_ParamLimits

0x1f6e,	// (0x000279c8) main_btmg_pane

0xe9a0,	// (0x000343fa) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9a0,	// (0x000343fa) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x00035856) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00035856) list_single_cale_mrui_row_pane_g

0xeafa,	// (0x00034554) list_recal_vselct_arw_lo_pane

0xeb02,	// (0x0003455c) list_recal_vselct_arw_up_pane

0xeb0a,	// (0x00034564) list_recal_vselct_pane

0xed58,	// (0x000347b2) btmg_button_pane

0xa62f,	// (0x00030089) main_btmg_pane_g1

0x1f6e,	// (0x000279c8) bg_button_pane_cp044

0xed62,	// (0x000347bc) btmg_button_pane_t1

0xbd78,	// (0x000317d2) aid_listscroll_gen

0x21e0,	// (0x00027c3a) main_cntbar_detail_pane

0xe6ca,	// (0x00034124) list_cmail_folder_pane

0xe6da,	// (0x00034134) sp_fs_scroll_pane_cp03_ParamLimits

0xa10d,	// (0x0002fb67) list_single_fs_dyc_pane_cp01_ParamLimits

0xa10d,	// (0x0002fb67) list_single_fs_dyc_pane_cp01

0xed70,	// (0x000347ca) aid_size_cmail_indent

0xed79,	// (0x000347d3) list_single_dyc_row_pane_cp01

0xa665,	// (0x000300bf) cntbar_detail_list_pane_ParamLimits

0xa665,	// (0x000300bf) cntbar_detail_list_pane

0xa6b1,	// (0x0003010b) main_cntbar_detail_cont_pane_ParamLimits

0xa6b1,	// (0x0003010b) main_cntbar_detail_cont_pane

0x4951,	// (0x0002a3ab) scroll_pane_cp032_ParamLimits

0x4951,	// (0x0002a3ab) scroll_pane_cp032

0xa6c5,	// (0x0003011f) cntbar_detail_list_event_pane_ParamLimits

0xa6c5,	// (0x0003011f) cntbar_detail_list_event_pane

0xa675,	// (0x000300cf) cntbar_detail_list_shct_pane

0x3d26,	// (0x00029780) aid_list_gen

0xed82,	// (0x000347dc) aid_scroll

0xed8b,	// (0x000347e5) aid_size_touch_scroll_bar

0xa6d5,	// (0x0003012f) aid_list_double

0xed94,	// (0x000347ee) aid_list_single

0xa6d5,	// (0x0003012f) aid_list_single_lg

0xed9d,	// (0x000347f7) aid_list_z_g_a_sm

0xeda5,	// (0x000347ff) aid_list_z_g_d

0xedad,	// (0x00034807) aid_txt_z_prm

0xa6de,	// (0x00030138) aid_txt_z_prm_cp01

0xa6ec,	// (0x00030146) aid_txt_z_sec

0xa6fa,	// (0x00030154) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa6fa,	// (0x00030154) main_cntbar_detail_cont_pane_g1

0xa70e,	// (0x00030168) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa70e,	// (0x00030168) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x000358e8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x000358e8) main_cntbar_detail_cont_pane_g

0xedbb,	// (0x00034815) main_cntbar_detail_cont_pane_t1

0xedc9,	// (0x00034823) main_cntbar_detail_cont_pane_t2

0xedd7,	// (0x00034831) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x000358ed) main_cntbar_detail_cont_pane_t

0xa71e,	// (0x00030178) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa71e,	// (0x00030178) cell_cntbar_detail_list_shct_pane

0xede5,	// (0x0003483f) cntbar_detail_list_shct_pane_g1

0xedee,	// (0x00034848) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x000358f4) cntbar_detail_list_shct_pane_g

0xa732,	// (0x0003018c) cntbar_detail_list_event_pane_g1_ParamLimits

0xa732,	// (0x0003018c) cntbar_detail_list_event_pane_g1

0xa73e,	// (0x00030198) cntbar_detail_list_event_pane_g2_ParamLimits

0xa73e,	// (0x00030198) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x000358f9) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x000358f9) cntbar_detail_list_event_pane_g

0xa7aa,	// (0x00030204) cntbar_detail_list_event_pane_t1_ParamLimits

0xa7aa,	// (0x00030204) cntbar_detail_list_event_pane_t1

0xa7bf,	// (0x00030219) cntbar_detail_list_event_pane_t2_ParamLimits

0xa7bf,	// (0x00030219) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00035906) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00035906) cntbar_detail_list_event_pane_t

0xc286,	// (0x00031ce0) cell_cntbar_detail_list_shct_pane_g1

0x5141,	// (0x0002ab9b) navi_pane_mv_g3

0x21e0,	// (0x00027c3a) main_cntbar_detail_pane_ParamLimits

0x1f6e,	// (0x000279c8) main_notif_wgt_pane

0xcb81,	// (0x000325db) aid_tch_main_mp4_pane_g4

0xcd83,	// (0x000327dd) popup_slider_window_cp02

0xeaf1,	// (0x0003454b) list_recal_day_event_pane

0xa639,	// (0x00030093) cntbar_detail_btn_pane_ParamLimits

0xa639,	// (0x00030093) cntbar_detail_btn_pane

0xa64f,	// (0x000300a9) cntbar_detail_btn_pane_cp01_ParamLimits

0xa64f,	// (0x000300a9) cntbar_detail_btn_pane_cp01

0xa675,	// (0x000300cf) cntbar_detail_list_shct_pane_ParamLimits

0xa685,	// (0x000300df) cntbar_detail_pane_g1_ParamLimits

0xa685,	// (0x000300df) cntbar_detail_pane_g1

0xa695,	// (0x000300ef) cntbar_detail_pane_t1_ParamLimits

0xa695,	// (0x000300ef) cntbar_detail_pane_t1

0xa74a,	// (0x000301a4) cntbar_detail_list_event_pane_g3_ParamLimits

0xa74a,	// (0x000301a4) cntbar_detail_list_event_pane_g3

0xa762,	// (0x000301bc) cntbar_detail_list_event_pane_g4_ParamLimits

0xa762,	// (0x000301bc) cntbar_detail_list_event_pane_g4

0xa77a,	// (0x000301d4) cntbar_detail_list_event_pane_g5_ParamLimits

0xa77a,	// (0x000301d4) cntbar_detail_list_event_pane_g5

0xa792,	// (0x000301ec) cntbar_detail_list_event_pane_g6_ParamLimits

0xa792,	// (0x000301ec) cntbar_detail_list_event_pane_g6

0xa7d4,	// (0x0003022e) cntbar_detail_list_event_pane_t3_ParamLimits

0xa7d4,	// (0x0003022e) cntbar_detail_list_event_pane_t3

0xa7e6,	// (0x00030240) popup_notif_wgt_window_ParamLimits

0xa7e6,	// (0x00030240) popup_notif_wgt_window

0xa7ff,	// (0x00030259) popup_submenu_window_cp01_ParamLimits

0xa7ff,	// (0x00030259) popup_submenu_window_cp01

0x51bf,	// (0x0002ac19) bg_popup_window_pane_cp10

0xedf7,	// (0x00034851) listscroll_notif_wgt_pane

0xee01,	// (0x0003485b) list_notif_wgt_window

0xee0a,	// (0x00034864) scroll_pane_cp033

0xee13,	// (0x0003486d) list_notif_wgt_row_pane_ParamLimits

0xee13,	// (0x0003486d) list_notif_wgt_row_pane

0xee25,	// (0x0003487f) aid_size_list_notif_wgt_del

0xee2e,	// (0x00034888) list_notif_wgt_row_pane_g1

0xee36,	// (0x00034890) list_notif_wgt_row_pane_g2

0xee3e,	// (0x00034898) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0003590d) list_notif_wgt_row_pane_g

0xee47,	// (0x000348a1) list_notif_wgt_row_pane_t1

0xee55,	// (0x000348af) list_notif_wgt_row_pane_t2

0xee63,	// (0x000348bd) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x00035914) list_notif_wgt_row_pane_t

0xd385,	// (0x00032ddf) list_recal_day_event_pane_g1

0xee71,	// (0x000348cb) list_recal_day_event_pane_t1

0x1f6e,	// (0x000279c8) bg_button_pane_cp045

0xee80,	// (0x000348da) cntbar_detail_btn_pane_t1

0xbd80,	// (0x000317da) main_callh_pane_ParamLimits

0xbd80,	// (0x000317da) main_callh_pane

0x1f6e,	// (0x000279c8) main_coverflow0_pane

0x1f6e,	// (0x000279c8) main_wgtman_pane

0x98af,	// (0x0002f309) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x98af,	// (0x0002f309) main_fs_bigclock_unlock_btn_pane

0xe6a4,	// (0x000340fe) bg_button_pane_cp16

0xe6b4,	// (0x0003410e) cell_tport_appsw_pane_g3

0xa811,	// (0x0003026b) cf0_flow_pane_ParamLimits

0xa811,	// (0x0003026b) cf0_flow_pane

0xee8e,	// (0x000348e8) listscroll_cf0_pane

0xee97,	// (0x000348f1) main_cf0_pane_g1

0xa826,	// (0x00030280) main_cf0_pane_t1_ParamLimits

0xa826,	// (0x00030280) main_cf0_pane_t1

0xa83d,	// (0x00030297) main_cf0_pane_t2_ParamLimits

0xa83d,	// (0x00030297) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x0003591b) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x0003591b) main_cf0_pane_t

0xeea1,	// (0x000348fb) scroll_pane_cp11

0xa854,	// (0x000302ae) cf0_flow_pane_g1

0xa85c,	// (0x000302b6) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00035920) cf0_flow_pane_g

0xa864,	// (0x000302be) cf0_flow_pane_t1

0x1f6e,	// (0x000279c8) main_call6_pane

0x1f6e,	// (0x000279c8) main_calllock_pane

0xa872,	// (0x000302cc) call6_btn_grp_pane_ParamLimits

0xa872,	// (0x000302cc) call6_btn_grp_pane

0xa88c,	// (0x000302e6) call6_pane_g1_ParamLimits

0xa88c,	// (0x000302e6) call6_pane_g1

0xa8a1,	// (0x000302fb) popup_call6_1st_window_ParamLimits

0xa8a1,	// (0x000302fb) popup_call6_1st_window

0xa8b2,	// (0x0003030c) popup_call6_2nd_window_ParamLimits

0xa8b2,	// (0x0003030c) popup_call6_2nd_window

0xa8c3,	// (0x0003031d) cell_call6_btn_pane_ParamLimits

0xa8c3,	// (0x0003031d) cell_call6_btn_pane

0x51bf,	// (0x0002ac19) bg_popup_call2_in_pane_cp03

0xeeac,	// (0x00034906) popup_call6_1st_window_g1

0xeeb4,	// (0x0003490e) popup_call6_1st_window_g2

0xeebc,	// (0x00034916) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00035925) popup_call6_1st_window_g

0xeec4,	// (0x0003491e) popup_call6_1st_window_t1

0xeed3,	// (0x0003492d) popup_call6_1st_window_t2

0xeee3,	// (0x0003493d) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0003592c) popup_call6_1st_window_t

0x51bf,	// (0x0002ac19) bg_popup_call2_in_pane_cp04

0xeeac,	// (0x00034906) popup_call6_2nd_window_g1

0xeeb4,	// (0x0003490e) popup_call6_2nd_window_g2

0xeebc,	// (0x00034916) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00035925) popup_call6_2nd_window_g

0xeec4,	// (0x0003491e) popup_call6_2nd_window_t1

0x1f6e,	// (0x000279c8) bg_button_pane_cp15

0xeef3,	// (0x0003494d) cell_call6_btn_pane_g1

0xeefc,	// (0x00034956) cell_call6_btn_pane_t1

0xa8d7,	// (0x00030331) listscroll_wgtman_pane_ParamLimits

0xa8d7,	// (0x00030331) listscroll_wgtman_pane

0xa8fa,	// (0x00030354) wgtman_btn_pane_ParamLimits

0xa8fa,	// (0x00030354) wgtman_btn_pane

0x4d94,	// (0x0002a7ee) aid_scroll_copy1

0xef0b,	// (0x00034965) list_wgtman_pane

0xa93d,	// (0x00030397) wgtman_btn_pane_g1_ParamLimits

0xa93d,	// (0x00030397) wgtman_btn_pane_g1

0xa969,	// (0x000303c3) wgtman_btn_pane_t1_ParamLimits

0xa969,	// (0x000303c3) wgtman_btn_pane_t1

0xef15,	// (0x0003496f) wgtman_btn_pane_t2_ParamLimits

0xef15,	// (0x0003496f) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00035933) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00035933) wgtman_btn_pane_t

0xa9a6,	// (0x00030400) listrow_wgtman_pane_ParamLimits

0xa9a6,	// (0x00030400) listrow_wgtman_pane

0xa9b8,	// (0x00030412) listrow_wgtman_pane_g1

0xa9c1,	// (0x0003041b) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00035938) listrow_wgtman_pane_g

0xa9cb,	// (0x00030425) listrow_wgtman_pane_t1

0xa9d9,	// (0x00030433) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0003593d) listrow_wgtman_pane_t

0xa9e7,	// (0x00030441) wait_bar_pane_cp09

0xef2c,	// (0x00034986) main_calllock_btn_pane

0xef36,	// (0x00034990) main_calllock_pane_g1

0x1f6e,	// (0x000279c8) bg_button_pane_cp17

0xef42,	// (0x0003499c) main_calllock_btn_pane_g1

0xef4b,	// (0x000349a5) main_calllock_btn_pane_t1

0x1f6e,	// (0x000279c8) main_dialer3_pane

0x1f6e,	// (0x000279c8) main_fmrd2_pane

0xc286,	// (0x00031ce0) main_fs_bigclock_unlock_btn_pane_g1

0xef62,	// (0x000349bc) main_fs_bigclock_unlock_btn_pane_t1

0xa9ef,	// (0x00030449) area_fmrd2_info_pane_ParamLimits

0xa9ef,	// (0x00030449) area_fmrd2_info_pane

0xaa00,	// (0x0003045a) area_fmrd2_visual_pane_ParamLimits

0xaa00,	// (0x0003045a) area_fmrd2_visual_pane

0xaa0e,	// (0x00030468) fmrd2_indi_pane_ParamLimits

0xaa0e,	// (0x00030468) fmrd2_indi_pane

0xaa1b,	// (0x00030475) area_fmrd2_visual_pane_g1

0xaa23,	// (0x0003047d) area_fmrd2_visual_pane_t1

0xaa33,	// (0x0003048d) area_fmrd2_visual_pane_t2

0xaa43,	// (0x0003049d) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00035947) area_fmrd2_visual_pane_t

0xaa53,	// (0x000304ad) area_fmrd2_info_pane_g1

0xaa5b,	// (0x000304b5) area_fmrd2_info_pane_t1

0xaa6b,	// (0x000304c5) area_fmrd2_info_pane_t2

0xaa7b,	// (0x000304d5) area_fmrd2_info_pane_t3

0xaa8b,	// (0x000304e5) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0003594e) area_fmrd2_info_pane_t

0xaa99,	// (0x000304f3) fmrd2_indi_pane_t1

0xaaa9,	// (0x00030503) fmrd2_indi_pane_t2

0xaab9,	// (0x00030513) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00035957) fmrd2_indi_pane_t

0xe14c,	// (0x00033ba6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe14c,	// (0x00033ba6) list_single_fs_bigclock_indicator_pane_g5

0xe1f0,	// (0x00033c4a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1f0,	// (0x00033c4a) list_single_fs_bigclock_indicator_pane_t5

0xa25a,	// (0x0002fcb4) aid_cell_bcale_month_pane_ParamLimits

0xa25a,	// (0x0002fcb4) aid_cell_bcale_month_pane

0xa26c,	// (0x0002fcc6) bcale_month_pane_ParamLimits

0xa26c,	// (0x0002fcc6) bcale_month_pane

0xa284,	// (0x0002fcde) bcale_preview_pane_ParamLimits

0xa284,	// (0x0002fcde) bcale_preview_pane

0xecf5,	// (0x0003474f) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0f,	// (0x00034769) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0f,	// (0x00034769) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x000358de) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x000358de) list_single_fs_bigclock_pane_t

0xef5a,	// (0x000349b4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00035942) main_fs_bigclock_unlock_btn_pane_g

0xaac9,	// (0x00030523) aid_dia3_key_size_ParamLimits

0xaac9,	// (0x00030523) aid_dia3_key_size

0xaad8,	// (0x00030532) aid_dia3_listrow_size_ParamLimits

0xaad8,	// (0x00030532) aid_dia3_listrow_size

0xaaed,	// (0x00030547) dia3_keypad_fun_pane_ParamLimits

0xaaed,	// (0x00030547) dia3_keypad_fun_pane

0xab09,	// (0x00030563) dia3_keypad_num_pane_ParamLimits

0xab09,	// (0x00030563) dia3_keypad_num_pane

0xab24,	// (0x0003057e) dia3_listscroll_pane_ParamLimits

0xab24,	// (0x0003057e) dia3_listscroll_pane

0xab37,	// (0x00030591) dia3_numentry_pane_ParamLimits

0xab37,	// (0x00030591) dia3_numentry_pane

0xef70,	// (0x000349ca) dia3_list_pane

0xef7b,	// (0x000349d5) scroll_pane_cp12

0x1f6e,	// (0x000279c8) bg_dia3_numentry_pane

0xab4b,	// (0x000305a5) dia3_numentry_pane_t1

0xab5a,	// (0x000305b4) cell_dia3_key_num_pane

0xab62,	// (0x000305bc) cell_dia3_key0_fun_pane_ParamLimits

0xab62,	// (0x000305bc) cell_dia3_key0_fun_pane

0xab76,	// (0x000305d0) cell_dia3_key1_fun_pane_ParamLimits

0xab76,	// (0x000305d0) cell_dia3_key1_fun_pane

0xab8e,	// (0x000305e8) dia3_listrow_pane

0xde4c,	// (0x000338a6) bg_dia3_numentry_pane_g1

0x1f6e,	// (0x000279c8) bg_button_pane_cp21

0xef86,	// (0x000349e0) cell_dia3_key_num_pane_t1

0xef94,	// (0x000349ee) cell_dia3_key_num_pane_t2

0xefa3,	// (0x000349fd) cell_dia3_key_num_pane_t3

0xefb2,	// (0x00034a0c) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0003595e) cell_dia3_key_num_pane_t

0x1f6e,	// (0x000279c8) bg_button_pane_cp19

0xaba0,	// (0x000305fa) cell_dia3_key0_fun_pane_g1

0x1f6e,	// (0x000279c8) bg_button_pane_cp20

0xaba8,	// (0x00030602) cell_dia3_key1_fun_pane_g1

0xabb0,	// (0x0003060a) area_left_week_number_pane

0xabb9,	// (0x00030613) area_top_day_name_pane

0xabc2,	// (0x0003061c) frame_month_view_pane

0xabca,	// (0x00030624) grid_month_view_pane

0xabd4,	// (0x0003062e) cell_top_day_name_pane_ParamLimits

0xabd4,	// (0x0003062e) cell_top_day_name_pane

0xabea,	// (0x00030644) cell_area_left_week_number_pane_ParamLimits

0xabea,	// (0x00030644) cell_area_left_week_number_pane

0xabfe,	// (0x00030658) cell_month_view_pane_ParamLimits

0xabfe,	// (0x00030658) cell_month_view_pane

0xefc1,	// (0x00034a1b) frm_month_g1

0xac19,	// (0x00030673) frm_month_g2

0xac21,	// (0x0003067b) frm_month_g3

0xac29,	// (0x00030683) frm_month_g4

0xac31,	// (0x0003068b) frm_month_g5

0xac39,	// (0x00030693) frm_month_g6

0xac41,	// (0x0003069b) frm_month_g7

0xefca,	// (0x00034a24) frm_month_g8

0xac49,	// (0x000306a3) frm_month_g9

0xac52,	// (0x000306ac) frm_month_g10

0xac5b,	// (0x000306b5) frm_month_g11

0xac64,	// (0x000306be) frm_month_g12

0xac6d,	// (0x000306c7) frm_month_g13

0xac76,	// (0x000306d0) frm_month_g14

0xac7f,	// (0x000306d9) frm_month_g15

0xac88,	// (0x000306e2) frm_month_g16

0x000f,

0xff0d,	// (0x00035967) frm_month_g

0xac91,	// (0x000306eb) cell_top_day_name_pane_t1

0xaca0,	// (0x000306fa) cell_area_left_week_number_pane_g1

0xac91,	// (0x000306eb) cell_area_left_week_number_pane_t1

0xc286,	// (0x00031ce0) cell_month_view_pane_g1

0xaca8,	// (0x00030702) cell_month_view_pane_t1

0x1f6e,	// (0x000279c8) main_fps_pane

0xe42a,	// (0x00033e84) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe42a,	// (0x00033e84) cmail_ddmenu_btn02_pane_cp1

0xe446,	// (0x00033ea0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe446,	// (0x00033ea0) cmail_ddmenu_btn02_pane_cp2

0xa52b,	// (0x0002ff85) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa52b,	// (0x0002ff85) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x0003588f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x0003588f) cmail_ddmenu_btn02_pane_g

0xa549,	// (0x0002ffa3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa549,	// (0x0002ffa3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x00035894) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x00035894) cmail_ddmenu_btn02_pane_t

0xacb7,	// (0x00030711) fps_text_pane_ParamLimits

0xacb7,	// (0x00030711) fps_text_pane

0xacce,	// (0x00030728) main_fps_pane_g1_ParamLimits

0xacce,	// (0x00030728) main_fps_pane_g1

0xace8,	// (0x00030742) wait_bar_pane_cp010_ParamLimits

0xace8,	// (0x00030742) wait_bar_pane_cp010

0xacf9,	// (0x00030753) fps_text_pane_t1_ParamLimits

0xacf9,	// (0x00030753) fps_text_pane_t1

0xcf42,	// (0x0003299c) cam4_image_uncrop_pane_g1

0xcf4b,	// (0x000329a5) cam4_image_uncrop_pane_g2

0x809a,	// (0x0002daf4) cam4_image_uncrop_pane_g3

0x80a3,	// (0x0002dafd) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00035367) cam4_image_uncrop_pane_g

0xab8e,	// (0x000305e8) dia3_listrow_pane_ParamLimits

0x1f6e,	// (0x000279c8) main_phob2_pane

0xa093,	// (0x0002faed) cell_tport_appsw_pane_cp02_ParamLimits

0xa093,	// (0x0002faed) cell_tport_appsw_pane_cp02

0xa0a7,	// (0x0002fb01) cell_tport_appsw_pane_cp03_ParamLimits

0xa0a7,	// (0x0002fb01) cell_tport_appsw_pane_cp03

0x1f6e,	// (0x000279c8) phob2_contact_card_pane

0x1f6e,	// (0x000279c8) phob2_listscroll_pane

0xefd3,	// (0x00034a2d) phob2_list_pane

0xefdb,	// (0x00034a35) scroll_pane_cp034

0xad11,	// (0x0003076b) phob2_cc_data_pane_ParamLimits

0xad11,	// (0x0003076b) phob2_cc_data_pane

0xad30,	// (0x0003078a) phob2_cc_listscroll_pane_ParamLimits

0xad30,	// (0x0003078a) phob2_cc_listscroll_pane

0xad4e,	// (0x000307a8) list_double_large_graphic_phob2_pane_ParamLimits

0xad4e,	// (0x000307a8) list_double_large_graphic_phob2_pane

0xefe3,	// (0x00034a3d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xefe3,	// (0x00034a3d) list_double_large_graphic_phob2_pane_g1

0xeff0,	// (0x00034a4a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xeff0,	// (0x00034a4a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00035988) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00035988) list_double_large_graphic_phob2_pane_g

0xeffc,	// (0x00034a56) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xeffc,	// (0x00034a56) list_double_large_graphic_phob2_pane_t1

0xf011,	// (0x00034a6b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xf011,	// (0x00034a6b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0003598d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0003598d) list_double_large_graphic_phob2_pane_t

0x1f6e,	// (0x000279c8) list_highlight_pane_cp024

0xf023,	// (0x00034a7d) phob2_cc_button_pane

0xad60,	// (0x000307ba) phob2_cc_data_pane_g1_ParamLimits

0xad60,	// (0x000307ba) phob2_cc_data_pane_g1

0xad75,	// (0x000307cf) phob2_cc_data_pane_g2_ParamLimits

0xad75,	// (0x000307cf) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00035992) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00035992) phob2_cc_data_pane_g

0xad87,	// (0x000307e1) phob2_cc_data_pane_t1_ParamLimits

0xad87,	// (0x000307e1) phob2_cc_data_pane_t1

0xad9f,	// (0x000307f9) phob2_cc_data_pane_t2_ParamLimits

0xad9f,	// (0x000307f9) phob2_cc_data_pane_t2

0xadb7,	// (0x00030811) phob2_cc_data_pane_t3_ParamLimits

0xadb7,	// (0x00030811) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00035997) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00035997) phob2_cc_data_pane_t

0xf02b,	// (0x00034a85) phob2_cc_list_pane_ParamLimits

0xf02b,	// (0x00034a85) phob2_cc_list_pane

0xd41e,	// (0x00032e78) scroll_pane_cp035_ParamLimits

0xd41e,	// (0x00032e78) scroll_pane_cp035

0x21e0,	// (0x00027c3a) bg_button_pane_cp033

0xf037,	// (0x00034a91) phob2_cc_button_pane_g1

0xf043,	// (0x00034a9d) phob2_cc_button_pane_t1

0xf058,	// (0x00034ab2) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x0003599e) phob2_cc_button_pane_t

0xadcf,	// (0x00030829) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xadcf,	// (0x00030829) list_double_large_graphic_phob2_cc_pane

0xade1,	// (0x0003083b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xade1,	// (0x0003083b) list_double_large_graphic_phob2_cc_pane_g1

0xaded,	// (0x00030847) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaded,	// (0x00030847) list_double_large_graphic_phob2_cc_pane_g2

0xadf9,	// (0x00030853) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xadf9,	// (0x00030853) list_double_large_graphic_phob2_cc_pane_g3

0xae05,	// (0x0003085f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xae05,	// (0x0003085f) list_double_large_graphic_phob2_cc_pane_g4

0xae11,	// (0x0003086b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xae11,	// (0x0003086b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x000359a3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x000359a3) list_double_large_graphic_phob2_cc_pane_g

0xae1d,	// (0x00030877) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xae1d,	// (0x00030877) list_double_large_graphic_phob2_cc_pane_t1

0xae46,	// (0x000308a0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xae46,	// (0x000308a0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x000359ae) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x000359ae) list_double_large_graphic_phob2_cc_pane_t

0xf06a,	// (0x00034ac4) list_highlight_pane_cp025_ParamLimits

0xf06a,	// (0x00034ac4) list_highlight_pane_cp025

0x21e0,	// (0x00027c3a) bg_button_pane_cp033_ParamLimits

0xf037,	// (0x00034a91) phob2_cc_button_pane_g1_ParamLimits

0xf043,	// (0x00034a9d) phob2_cc_button_pane_t1_ParamLimits

0xf058,	// (0x00034ab2) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x0003599e) phob2_cc_button_pane_t_ParamLimits

0x21ee,	// (0x00027c48) popup_wgtman_window

0xd198,	// (0x00032bf2) scroll_pane_cp038

0xa91f,	// (0x00030379) wgtman_btn_pane_cp_01_ParamLimits

0xa91f,	// (0x00030379) wgtman_btn_pane_cp_01

0xf078,	// (0x00034ad2) wgtman_content_pane

0xf081,	// (0x00034adb) wgtman_heading_pane

0x1f6e,	// (0x000279c8) bg_heading_pane_cp02

0xf08a,	// (0x00034ae4) wgtman_heading_pane_g1

0xf092,	// (0x00034aec) wgtman_heading_pane_t1

0xf0a0,	// (0x00034afa) scroll_pane_cp036

0xf0a8,	// (0x00034b02) wgtman_list_pane

0xf0b0,	// (0x00034b0a) wgtman_list_pane_t1_ParamLimits

0xf0b0,	// (0x00034b0a) wgtman_list_pane_t1

0xcf2e,	// (0x00032988) cam4_grid_pane

0x8870,	// (0x0002e2ca) bg_button_pane_cp015_ParamLimits

0x8882,	// (0x0002e2dc) bg_button_pane_cp016_ParamLimits

0x8895,	// (0x0002e2ef) bg_button_pane_cp017_ParamLimits

0x88ed,	// (0x0002e347) popup_vitu2_query_window_g3_ParamLimits

0x88ed,	// (0x0002e347) popup_vitu2_query_window_g3

0x89aa,	// (0x0002e404) popup_vitu2_query_window_t6_ParamLimits

0x89aa,	// (0x0002e404) popup_vitu2_query_window_t6

0x89d5,	// (0x0002e42f) popup_vitu2_query_window_t7_ParamLimits

0x89d5,	// (0x0002e42f) popup_vitu2_query_window_t7

0xcf42,	// (0x0003299c) cam4_grid_pane_g1

0xcf4b,	// (0x000329a5) cam4_grid_pane_g2

0xf0ca,	// (0x00034b24) cam4_grid_pane_g3

0xf0d3,	// (0x00034b2d) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x000359b3) cam4_grid_pane_g

0x3724,	// (0x0002917e) aid_placing_vt_slider_lsc_ParamLimits

0x3a7d,	// (0x000294d7) vidtel_button_pane_ParamLimits

0x3a7d,	// (0x000294d7) vidtel_button_pane

0x1f6e,	// (0x000279c8) bg_button_pane_cp034

0xae6f,	// (0x000308c9) vidtel_button_pane_g1

0xf0de,	// (0x00034b38) vidtel_button_pane_t1

0xd2f9,	// (0x00032d53) aid_size_vtel_slider_touch

0xd41e,	// (0x00032e78) scroll_pane_cp039

0xde8a,	// (0x000338e4) ncim_query_button_pane_cp01_ParamLimits

0xdea9,	// (0x00033903) ncimui_query_pane_g1_ParamLimits

0x21e0,	// (0x00027c3a) input_focus_pane_cp012_ParamLimits

0xdece,	// (0x00033928) ncim_query_entry_pane_t1_ParamLimits

0xd41e,	// (0x00032e78) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
