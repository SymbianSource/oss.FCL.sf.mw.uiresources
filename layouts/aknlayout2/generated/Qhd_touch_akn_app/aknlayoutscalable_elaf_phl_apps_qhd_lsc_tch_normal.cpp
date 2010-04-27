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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000eef8 };

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
0x01b4,	// (0x0000f0ac) Screen

0x01c0,	// (0x0000f0b8) application_window

0x01fc,	// (0x0000f0f4) area_bottom_pane_ParamLimits

0x01fc,	// (0x0000f0f4) area_bottom_pane

0x0235,	// (0x0000f12d) area_top_pane_ParamLimits

0x0235,	// (0x0000f12d) area_top_pane

0x94eb,	// (0x000183e3) call_video_uplink_pane_ParamLimits

0x94eb,	// (0x000183e3) call_video_uplink_pane

0x02c3,	// (0x0000f1bb) main_pane_ParamLimits

0x02c3,	// (0x0000f1bb) main_pane

0xbee3,	// (0x0001addb) context_pane

0x38b5,	// (0x000127ad) navi_pane

0x38e7,	// (0x000127df) popup_cale_events_window_ParamLimits

0x38e7,	// (0x000127df) popup_cale_events_window

0xbef6,	// (0x0001adee) popup_mup_playback_window

0x38ff,	// (0x000127f7) signal_pane

0x9c6c,	// (0x00018b64) main_browser_pane

0x9e9d,	// (0x00018d95) main_burst_pane

0x3615,	// (0x0001250d) main_calc_pane

0xbe75,	// (0x0001ad6d) main_cale_day_pane

0x0919,	// (0x0000f811) main_cale_month_pane

0xbe75,	// (0x0001ad6d) main_cale_week_pane

0x9e9d,	// (0x00018d95) main_call_pane

0x992a,	// (0x00018822) main_call_poc_pane

0x9e9d,	// (0x00018d95) main_camera_pane

0x9e9d,	// (0x00018d95) main_chi_dic_pane

0xa72b,	// (0x00019623) main_clock_pane

0x992a,	// (0x00018822) main_fmradio_pane

0x9e9d,	// (0x00018d95) main_graph_messa_pane

0x992a,	// (0x00018822) main_help_pane

0x9c6c,	// (0x00018b64) main_im_pane

0x9b85,	// (0x00018a7d) main_image_pane_ParamLimits

0x9b85,	// (0x00018a7d) main_image_pane

0x992a,	// (0x00018822) main_location2_pane

0x9e9d,	// (0x00018d95) main_location_pane

0x9b85,	// (0x00018a7d) main_messa_pane

0x992a,	// (0x00018822) main_mp2_pane

0x9e9d,	// (0x00018d95) main_mp_pane

0x992a,	// (0x00018822) main_msg_pane

0x992a,	// (0x00018822) main_mup_eq_pane

0x992a,	// (0x00018822) main_mup_pane

0x9c6c,	// (0x00018b64) main_notes_pane

0x992a,	// (0x00018822) main_pec_pane

0x992a,	// (0x00018822) main_phob_pane

0x992a,	// (0x00018822) main_pinb_pane

0x992a,	// (0x00018822) main_postcard_pane

0x992a,	// (0x00018822) main_qdial_pane

0x9e9d,	// (0x00018d95) main_skin_pane

0x992a,	// (0x00018822) main_smil2_pane

0x9e9d,	// (0x00018d95) main_smil_pane

0x9e9d,	// (0x00018d95) main_video_pane

0x9e9d,	// (0x00018d95) main_video_tele_pane

0x9b85,	// (0x00018a7d) main_viewer_pane_ParamLimits

0x9b85,	// (0x00018a7d) main_viewer_pane

0x9e9d,	// (0x00018d95) main_vorec_pane

0x3669,	// (0x00012561) popup_blid_sat_info_window_ParamLimits

0x3669,	// (0x00012561) popup_blid_sat_info_window

0x36c1,	// (0x000125b9) popup_dyc_status_message_window_ParamLimits

0x36c1,	// (0x000125b9) popup_dyc_status_message_window

0x36db,	// (0x000125d3) popup_grid_large_graphic_window_ParamLimits

0x36db,	// (0x000125d3) popup_grid_large_graphic_window

0x3797,	// (0x0001268f) popup_loc_request_window_ParamLimits

0x3797,	// (0x0001268f) popup_loc_request_window

0x388d,	// (0x00012785) popup_wml_address_window_ParamLimits

0x388d,	// (0x00012785) popup_wml_address_window

0x344f,	// (0x00012347) call_muted_g1

0x3104,	// (0x00011ffc) popup_call_audio_conf_window_ParamLimits

0x3104,	// (0x00011ffc) popup_call_audio_conf_window

0x3463,	// (0x0001235b) popup_call_audio_first_window_ParamLimits

0x3463,	// (0x0001235b) popup_call_audio_first_window

0x34d9,	// (0x000123d1) popup_call_audio_in_window_ParamLimits

0x34d9,	// (0x000123d1) popup_call_audio_in_window

0x3515,	// (0x0001240d) popup_call_audio_out_window_ParamLimits

0x3515,	// (0x0001240d) popup_call_audio_out_window

0x354f,	// (0x00012447) popup_call_audio_second_window_ParamLimits

0x354f,	// (0x00012447) popup_call_audio_second_window

0x35a5,	// (0x0001249d) popup_call_audio_wait_window_ParamLimits

0x35a5,	// (0x0001249d) popup_call_audio_wait_window

0x35da,	// (0x000124d2) popup_number_entry_window_ParamLimits

0x35da,	// (0x000124d2) popup_number_entry_window

0x9517,	// (0x0001840f) bg_popup_call_pane_cp05_ParamLimits

0x9517,	// (0x0001840f) bg_popup_call_pane_cp05

0x9537,	// (0x0001842f) popup_number_entry_window_t1

0x954a,	// (0x00018442) popup_number_entry_window_t2

0x955c,	// (0x00018454) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0001dfc2) popup_number_entry_window_t

0x956e,	// (0x00018466) text_title_cp2

0x9581,	// (0x00018479) bg_popup_call_pane_cp_ParamLimits

0x9581,	// (0x00018479) bg_popup_call_pane_cp

0x958f,	// (0x00018487) call_thumbnail_pane

0x9597,	// (0x0001848f) popup_call_audio_in_window_g1_ParamLimits

0x9597,	// (0x0001848f) popup_call_audio_in_window_g1

0x95a3,	// (0x0001849b) popup_call_audio_in_window_g2_ParamLimits

0x95a3,	// (0x0001849b) popup_call_audio_in_window_g2

0x95af,	// (0x000184a7) popup_call_audio_in_window_g3_ParamLimits

0x95af,	// (0x000184a7) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0001dfcb) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0001dfcb) popup_call_audio_in_window_g

0x95bb,	// (0x000184b3) popup_call_audio_in_window_t1_ParamLimits

0x95bb,	// (0x000184b3) popup_call_audio_in_window_t1

0x95d7,	// (0x000184cf) popup_call_audio_in_window_t2_ParamLimits

0x95d7,	// (0x000184cf) popup_call_audio_in_window_t2

0x95f3,	// (0x000184eb) popup_call_audio_in_window_t3_ParamLimits

0x95f3,	// (0x000184eb) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0001dfd2) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0001dfd2) popup_call_audio_in_window_t

0x9581,	// (0x00018479) bg_popup_call_pane_cp01_ParamLimits

0x9581,	// (0x00018479) bg_popup_call_pane_cp01

0x958f,	// (0x00018487) call_thumbnail_pane_cp02

0x9606,	// (0x000184fe) call_type_pane_cp022

0x960e,	// (0x00018506) popup_call_audio_out_window_g1_ParamLimits

0x960e,	// (0x00018506) popup_call_audio_out_window_g1

0x9620,	// (0x00018518) popup_call_audio_out_window_g2_ParamLimits

0x9620,	// (0x00018518) popup_call_audio_out_window_g2

0x962c,	// (0x00018524) popup_call_audio_out_window_g3_ParamLimits

0x962c,	// (0x00018524) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0001dfd9) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0001dfd9) popup_call_audio_out_window_g

0x963e,	// (0x00018536) popup_call_audio_out_window_t1_ParamLimits

0x963e,	// (0x00018536) popup_call_audio_out_window_t1

0x9656,	// (0x0001854e) popup_call_audio_out_window_t2_ParamLimits

0x9656,	// (0x0001854e) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0001dfe0) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0001dfe0) popup_call_audio_out_window_t

0x966b,	// (0x00018563) bg_popup_call_pane_ParamLimits

0x966b,	// (0x00018563) bg_popup_call_pane

0x047f,	// (0x0000f377) call_thumbnail_pane_cp_ParamLimits

0x047f,	// (0x0000f377) call_thumbnail_pane_cp

0x96ef,	// (0x000185e7) call_type_pane_cp01_ParamLimits

0x96ef,	// (0x000185e7) call_type_pane_cp01

0x9733,	// (0x0001862b) popup_call_audio_first_window_g1_ParamLimits

0x9733,	// (0x0001862b) popup_call_audio_first_window_g1

0x977f,	// (0x00018677) popup_call_audio_first_window_g2_ParamLimits

0x977f,	// (0x00018677) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0001dfe5) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0001dfe5) popup_call_audio_first_window_g

0x97c3,	// (0x000186bb) popup_call_audio_first_window_t1_ParamLimits

0x97c3,	// (0x000186bb) popup_call_audio_first_window_t1

0x986f,	// (0x00018767) popup_call_audio_first_window_t4_ParamLimits

0x986f,	// (0x00018767) popup_call_audio_first_window_t4

0x98fb,	// (0x000187f3) popup_call_audio_first_window_t5_ParamLimits

0x98fb,	// (0x000187f3) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0001dfea) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0001dfea) popup_call_audio_first_window_t

0x992a,	// (0x00018822) bg_popup_call_pane_cp02

0x9934,	// (0x0001882c) call_type_pane_cp023

0x993c,	// (0x00018834) popup_call_audio_wait_window_g1

0x9944,	// (0x0001883c) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001dff1) popup_call_audio_wait_window_g

0x994c,	// (0x00018844) popup_call_audio_wait_window_t3

0x995a,	// (0x00018852) bg_popup_call_pane_cp03_ParamLimits

0x995a,	// (0x00018852) bg_popup_call_pane_cp03

0x99ba,	// (0x000188b2) call_thumbnail_pane_cp011_ParamLimits

0x99ba,	// (0x000188b2) call_thumbnail_pane_cp011

0x99c6,	// (0x000188be) call_type_pane_cp034_ParamLimits

0x99c6,	// (0x000188be) call_type_pane_cp034

0x9a02,	// (0x000188fa) popup_call_audio_second_window_g1_ParamLimits

0x9a02,	// (0x000188fa) popup_call_audio_second_window_g1

0x9a3e,	// (0x00018936) popup_call_audio_second_window_g2_ParamLimits

0x9a3e,	// (0x00018936) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0001dff6) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0001dff6) popup_call_audio_second_window_g

0x9a7a,	// (0x00018972) popup_call_audio_second_window_t1_ParamLimits

0x9a7a,	// (0x00018972) popup_call_audio_second_window_t1

0x9afb,	// (0x000189f3) popup_call_audio_second_window_t2_ParamLimits

0x9afb,	// (0x000189f3) popup_call_audio_second_window_t2

0x9b31,	// (0x00018a29) popup_call_audio_second_window_t3_ParamLimits

0x9b31,	// (0x00018a29) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0001dffb) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0001dffb) popup_call_audio_second_window_t

0x992a,	// (0x00018822) bg_popup_call_pane_cp04

0x9b67,	// (0x00018a5f) list_conf_pane

0x9b6f,	// (0x00018a67) popup_call_audio_conf_window_t1

0x9b7d,	// (0x00018a75) call_thumbnail_pane_g1

0x9b85,	// (0x00018a7d) bg_pinb_pane_ParamLimits

0x9b85,	// (0x00018a7d) bg_pinb_pane

0x9b93,	// (0x00018a8b) find_pinb_pane

0x9b9c,	// (0x00018a94) listscroll_pinb_pane_ParamLimits

0x9b9c,	// (0x00018a94) listscroll_pinb_pane

0x9bab,	// (0x00018aa3) pinb_bg_pane_g1

0x04a3,	// (0x0000f39b) pinb_bg_pane_g2

0x04af,	// (0x0000f3a7) pinb_bg_pane_g3

0x04bb,	// (0x0000f3b3) pinb_bg_pane_g4

0x04c7,	// (0x0000f3bf) pinb_bg_pane_g5

0x04d3,	// (0x0000f3cb) pinb_bg_pane_g6

0x04de,	// (0x0000f3d6) pinb_bg_pane_g7

0x04e9,	// (0x0000f3e1) pinb_bg_pane_g8

0x04f4,	// (0x0000f3ec) pinb_bg_pane_g9

0x04fe,	// (0x0000f3f6) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0001e002) pinb_bg_pane_g

0x051b,	// (0x0000f413) grid_pinb_pane

0x0524,	// (0x0000f41c) list_pinb_pane

0x052d,	// (0x0000f425) scroll_pane_cp01_ParamLimits

0x052d,	// (0x0000f425) scroll_pane_cp01

0x9bb5,	// (0x00018aad) find_pinb_pane_g1_ParamLimits

0x9bb5,	// (0x00018aad) find_pinb_pane_g1

0x9bcd,	// (0x00018ac5) find_pinb_pane_t1

0x9bdf,	// (0x00018ad7) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0001e01c) find_pinb_pane_t

0x9bf4,	// (0x00018aec) input_focus_pane_cp01_ParamLimits

0x9bf4,	// (0x00018aec) input_focus_pane_cp01

0x053f,	// (0x0000f437) cell_pinb_pane_ParamLimits

0x053f,	// (0x0000f437) cell_pinb_pane

0x0568,	// (0x0000f460) cell_pinb_pane_g1_ParamLimits

0x0568,	// (0x0000f460) cell_pinb_pane_g1

0x0578,	// (0x0000f470) cell_pinb_pane_g2_ParamLimits

0x0578,	// (0x0000f470) cell_pinb_pane_g2

0x9c00,	// (0x00018af8) cell_pinb_pane_g3_ParamLimits

0x9c00,	// (0x00018af8) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0001e021) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0001e021) cell_pinb_pane_g

0x992a,	// (0x00018822) grid_highlight_pane_cp01

0x0584,	// (0x0000f47c) list_pinb_item_pane_ParamLimits

0x0584,	// (0x0000f47c) list_pinb_item_pane

0x992a,	// (0x00018822) list_highlight_pane_cp02

0x0596,	// (0x0000f48e) list_pinb_item_pane_g1_ParamLimits

0x0596,	// (0x0000f48e) list_pinb_item_pane_g1

0x05a3,	// (0x0000f49b) list_pinb_item_pane_g2_ParamLimits

0x05a3,	// (0x0000f49b) list_pinb_item_pane_g2

0x05af,	// (0x0000f4a7) list_pinb_item_pane_g3_ParamLimits

0x05af,	// (0x0000f4a7) list_pinb_item_pane_g3

0x05c0,	// (0x0000f4b8) list_pinb_item_pane_g4_ParamLimits

0x05c0,	// (0x0000f4b8) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0001e028) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0001e028) list_pinb_item_pane_g

0x05cc,	// (0x0000f4c4) list_pinb_item_pane_t1_ParamLimits

0x05cc,	// (0x0000f4c4) list_pinb_item_pane_t1

0x0601,	// (0x0000f4f9) calc_display_pane

0x0629,	// (0x0000f521) calc_paper_pane

0x064c,	// (0x0000f544) grid_calc_pane

0x992a,	// (0x00018822) bg_list_pane_cp01

0x067a,	// (0x0000f572) clock_g1

0x0682,	// (0x0000f57a) clock_g2

0x0001,

0xf139,	// (0x0001e031) clock_g

0x068a,	// (0x0000f582) clock_t1_ParamLimits

0x068a,	// (0x0000f582) clock_t1

0x069f,	// (0x0000f597) clock_t2_ParamLimits

0x069f,	// (0x0000f597) clock_t2

0x06b1,	// (0x0000f5a9) clock_t3_ParamLimits

0x06b1,	// (0x0000f5a9) clock_t3

0x06c3,	// (0x0000f5bb) clock_t4_ParamLimits

0x06c3,	// (0x0000f5bb) clock_t4

0x06d5,	// (0x0000f5cd) clock_t5_ParamLimits

0x06d5,	// (0x0000f5cd) clock_t5

0x06ea,	// (0x0000f5e2) clock_t6_ParamLimits

0x06ea,	// (0x0000f5e2) clock_t6

0x06fc,	// (0x0000f5f4) clock_t7_ParamLimits

0x06fc,	// (0x0000f5f4) clock_t7

0x070e,	// (0x0000f606) clock_t8_ParamLimits

0x070e,	// (0x0000f606) clock_t8

0x0722,	// (0x0000f61a) clock_t9_ParamLimits

0x0722,	// (0x0000f61a) clock_t9

0x0008,

0xf13e,	// (0x0001e036) clock_t_ParamLimits

0xf13e,	// (0x0001e036) clock_t

0x9c14,	// (0x00018b0c) popup_clock_analogue_window_cp02

0x9c14,	// (0x00018b0c) popup_clock_digital_window_cp01

0x9c1c,	// (0x00018b14) listscroll_help_pane

0x992a,	// (0x00018822) phob_pre_status_pane

0x9c26,	// (0x00018b1e) grid_qdial_pane

0x9b85,	// (0x00018a7d) listscroll_mce_pane

0x9b85,	// (0x00018a7d) bg_notes_pane

0x9c30,	// (0x00018b28) list_notes_pane

0x0736,	// (0x0000f62e) scroll_pane_cp06

0x9c3e,	// (0x00018b36) bg_calc_paper_pane

0x9c52,	// (0x00018b4a) list_calc_pane

0x9c6c,	// (0x00018b64) bg_calc_display_pane

0x074a,	// (0x0000f642) calc_display_pane_t1

0x075c,	// (0x0000f654) calc_display_pane_t2

0x9c78,	// (0x00018b70) calc_display_pane_t3

0x0002,

0xf151,	// (0x0001e049) calc_display_pane_t

0x076e,	// (0x0000f666) cell_calc_pane_ParamLimits

0x076e,	// (0x0000f666) cell_calc_pane

0x9c8a,	// (0x00018b82) bg_calc_paper_pane_g1

0x9c96,	// (0x00018b8e) bg_calc_paper_pane_g2

0x9ca2,	// (0x00018b9a) bg_calc_paper_pane_g3

0x9cae,	// (0x00018ba6) bg_calc_paper_pane_g4

0x9cba,	// (0x00018bb2) bg_calc_paper_pane_g5

0x07a3,	// (0x0000f69b) bg_calc_paper_pane_g6

0x07b2,	// (0x0000f6aa) bg_calc_paper_pane_g7

0x07c1,	// (0x0000f6b9) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0001e050) bg_calc_paper_pane_g

0x07d4,	// (0x0000f6cc) calc_bg_paper_pane_g9

0x07e7,	// (0x0000f6df) list_calc_item_pane_ParamLimits

0x07e7,	// (0x0000f6df) list_calc_item_pane

0x9cc6,	// (0x00018bbe) list_calc_item_pane_g1

0x9cd3,	// (0x00018bcb) list_calc_item_pane_t1_ParamLimits

0x9cd3,	// (0x00018bcb) list_calc_item_pane_t1

0x07fc,	// (0x0000f6f4) list_calc_item_pane_t2_ParamLimits

0x07fc,	// (0x0000f6f4) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0001e061) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0001e061) list_calc_item_pane_t

0x9ce5,	// (0x00018bdd) cell_calc_pane_g1

0x9cef,	// (0x00018be7) grid_highlight_pane_cp02

0x082e,	// (0x0000f726) bg_calc_display_pane_g1

0x0837,	// (0x0000f72f) bg_calc_display_pane_g2

0x0841,	// (0x0000f739) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0001e06b) bg_calc_display_pane_g

0x084a,	// (0x0000f742) cell_qdial_pane_ParamLimits

0x084a,	// (0x0000f742) cell_qdial_pane

0x085e,	// (0x0000f756) cell_qdial_pane_g1_ParamLimits

0x085e,	// (0x0000f756) cell_qdial_pane_g1

0x0874,	// (0x0000f76c) cell_qdial_pane_g2_ParamLimits

0x0874,	// (0x0000f76c) cell_qdial_pane_g2

0x9d11,	// (0x00018c09) cell_qdial_pane_g3_ParamLimits

0x9d11,	// (0x00018c09) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0001e072) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0001e072) cell_qdial_pane_g

0x089b,	// (0x0000f793) cell_qdial_pane_t1_ParamLimits

0x089b,	// (0x0000f793) cell_qdial_pane_t1

0x08b3,	// (0x0000f7ab) cell_qdial_pane_t2_ParamLimits

0x08b3,	// (0x0000f7ab) cell_qdial_pane_t2

0x08c6,	// (0x0000f7be) cell_qdial_pane_t3_ParamLimits

0x08c6,	// (0x0000f7be) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0001e07b) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0001e07b) cell_qdial_pane_t

0x992a,	// (0x00018822) grid_highlight_pane_cp04

0x9d1d,	// (0x00018c15) thumbnail_qdial_pane_ParamLimits

0x9d1d,	// (0x00018c15) thumbnail_qdial_pane

0x9d79,	// (0x00018c71) list_help_pane

0x9d82,	// (0x00018c7a) scroll_pane_cp02

0x08d9,	// (0x0000f7d1) help_list_pane_t1_ParamLimits

0x08d9,	// (0x0000f7d1) help_list_pane_t1

0x9d8b,	// (0x00018c83) bg_notes_pane_g2

0x9d93,	// (0x00018c8b) bg_notes_pane_g3

0x9d9b,	// (0x00018c93) notes_bg_pane_g1

0x9da3,	// (0x00018c9b) notes_bg_pane_g4

0x9dab,	// (0x00018ca3) notes_bg_pane_g5

0x9db3,	// (0x00018cab) notes_bg_pane_g6

0x9dbb,	// (0x00018cb3) notes_bg_pane_g7

0x9dc3,	// (0x00018cbb) notes_bg_pane_g8

0x9dcb,	// (0x00018cc3) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0001e099) notes_bg_pane_g

0x08f6,	// (0x0000f7ee) list_notes_text_pane_ParamLimits

0x08f6,	// (0x0000f7ee) list_notes_text_pane

0x9dd3,	// (0x00018ccb) list_notes_text_pane_g1

0x090b,	// (0x0000f803) list_notes_text_pane_t1

0x0919,	// (0x0000f811) listscroll_cale_week_pane

0x0945,	// (0x0000f83d) bg_cale_heading_pane

0x9df6,	// (0x00018cee) bg_cale_pane_cp01

0x095d,	// (0x0000f855) cale_week_corner_pane

0x097c,	// (0x0000f874) cale_week_day_heading_pane

0x0999,	// (0x0000f891) cale_week_scroll_pane_g1

0x09ac,	// (0x0000f8a4) cale_week_scroll_pane_g2

0x09c4,	// (0x0000f8bc) cale_week_scroll_pane_g3

0x09dc,	// (0x0000f8d4) cale_week_scroll_pane_g4

0x09f4,	// (0x0000f8ec) cale_week_scroll_pane_g5

0x0a14,	// (0x0000f90c) cale_week_scroll_pane_g6

0x0a34,	// (0x0000f92c) cale_week_scroll_pane_g7

0x0a54,	// (0x0000f94c) cale_week_scroll_pane_g8

0x0a78,	// (0x0000f970) cale_week_scroll_pane_g9

0x0a90,	// (0x0000f988) cale_week_scroll_pane_g10

0x0aa8,	// (0x0000f9a0) cale_week_scroll_pane_g11

0x0ac0,	// (0x0000f9b8) cale_week_scroll_pane_g12

0x0ad8,	// (0x0000f9d0) cale_week_scroll_pane_g13

0x0ad8,	// (0x0000f9d0) cale_week_scroll_pane_g14

0x0ad8,	// (0x0000f9d0) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0001e0a8) cale_week_scroll_pane_g

0x0b14,	// (0x0000fa0c) cale_week_time_pane

0x0b38,	// (0x0000fa30) grid_cale_week_pane

0x9e25,	// (0x00018d1d) scroll_pane_cp08

0x0b5e,	// (0x0000fa56) cell_cale_week_pane_ParamLimits

0x0b5e,	// (0x0000fa56) cell_cale_week_pane

0x0bec,	// (0x0000fae4) cale_week_day_heading_pane_t1

0x0c31,	// (0x0000fb29) cale_week_day_heading_pane_t2

0x0c7b,	// (0x0000fb73) cale_week_day_heading_pane_t3

0x0cc5,	// (0x0000fbbd) cale_week_day_heading_pane_t4

0x0d0f,	// (0x0000fc07) cale_week_day_heading_pane_t5

0x0d61,	// (0x0000fc59) cale_week_day_heading_pane_t6

0x0db3,	// (0x0000fcab) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0001e0c9) cale_week_day_heading_pane_t

0x9e42,	// (0x00018d3a) bg_cale_side_pane

0x0df8,	// (0x0000fcf0) cale_week_time_pane_t1

0x0e12,	// (0x0000fd0a) cale_week_time_pane_t2

0x0e2c,	// (0x0000fd24) cale_week_time_pane_t3

0x0e46,	// (0x0000fd3e) cale_week_time_pane_t4

0x0e60,	// (0x0000fd58) cale_week_time_pane_t5

0x0e7a,	// (0x0000fd72) cale_week_time_pane_t6

0x0e94,	// (0x0000fd8c) cale_week_time_pane_t7

0x0eae,	// (0x0000fda6) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0001e0d8) cale_week_time_pane_t

0x0ece,	// (0x0000fdc6) cell_cale_week_pane_g2

0x0eed,	// (0x0000fde5) cell_cale_week_pane_g3_ParamLimits

0x0eed,	// (0x0000fde5) cell_cale_week_pane_g3

0x9e50,	// (0x00018d48) grid_highlight_pane_cp07

0x9e58,	// (0x00018d50) listscroll_gms_pane

0x9e62,	// (0x00018d5a) grid_gms_pane

0x9e6b,	// (0x00018d63) listscroll_gms_pane_g1

0x9e73,	// (0x00018d6b) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0001e0e9) listscroll_gms_pane_g

0x0f05,	// (0x0000fdfd) scroll_pane_cp010

0x0f10,	// (0x0000fe08) cell_gms_pane_ParamLimits

0x0f10,	// (0x0000fe08) cell_gms_pane

0x0f23,	// (0x0000fe1b) cell_gms_pane_g1

0x9e7b,	// (0x00018d73) cell_gms_pane_g2

0x9e83,	// (0x00018d7b) cell_gms_pane_g3

0x9e8c,	// (0x00018d84) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0001e0ee) cell_gms_pane_g

0x9e95,	// (0x00018d8d) grid_highlight_pane_cp09

0x33f9,	// (0x000122f1) phob_pre_status_pane_g1

0x3401,	// (0x000122f9) phob_pre_status_pane_g2

0x3409,	// (0x00012301) phob_pre_status_pane_g3

0x3411,	// (0x00012309) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0001e4d9) phob_pre_status_pane_g

0x3421,	// (0x00012319) phob_pre_status_pane_t1

0x342f,	// (0x00012327) phob_pre_status_pane_t2

0x343f,	// (0x00012337) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0001e4e4) phob_pre_status_pane_t

0x9e9d,	// (0x00018d95) bg_list_pane_cp05

0x0f33,	// (0x0000fe2b) grid_vorec_pane

0x0f3b,	// (0x0000fe33) vorec_t1

0x0f49,	// (0x0000fe41) vorec_t2

0x0f57,	// (0x0000fe4f) vorec_t3

0x0f65,	// (0x0000fe5d) vorec_t4

0x9473,	// (0x0001836b) vorec_t5

0x9481,	// (0x00018379) vorec_t6

0x0004,

0xf1ff,	// (0x0001e0f7) vorec_t

0x948f,	// (0x00018387) wait_bar_pane_cp01

0x0f81,	// (0x0000fe79) cell_vorec_pane_ParamLimits

0x0f81,	// (0x0000fe79) cell_vorec_pane

0x9ea5,	// (0x00018d9d) cell_vorec_pane_g1

0x992a,	// (0x00018822) grid_highlight_pane_cp05

0x0fa9,	// (0x0000fea1) cams_zoom_pane

0x0fb8,	// (0x0000feb0) image_vga_pane

0x0fd2,	// (0x0000feca) main_camera_pane_g1

0x0fe4,	// (0x0000fedc) main_camera_pane_g2

0x0ff4,	// (0x0000feec) main_camera_pane_g3

0x1004,	// (0x0000fefc) main_camera_pane_g4

0x1014,	// (0x0000ff0c) main_camera_pane_g5

0x1024,	// (0x0000ff1c) main_camera_pane_g6

0x1036,	// (0x0000ff2e) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001e102) main_camera_pane_g

0x1046,	// (0x0000ff3e) main_camera_pane_t1

0x105c,	// (0x0000ff54) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001e113) main_camera_pane_t

0x1096,	// (0x0000ff8e) cams_zoom_pane_cp_ParamLimits

0x1096,	// (0x0000ff8e) cams_zoom_pane_cp

0x10be,	// (0x0000ffb6) image_cif_pane_ParamLimits

0x10be,	// (0x0000ffb6) image_cif_pane

0x10f4,	// (0x0000ffec) image_subqcif_pane

0x10fc,	// (0x0000fff4) main_video_pane_g1_ParamLimits

0x10fc,	// (0x0000fff4) main_video_pane_g1

0x1120,	// (0x00010018) main_video_pane_g2_ParamLimits

0x1120,	// (0x00010018) main_video_pane_g2

0x1154,	// (0x0001004c) main_video_pane_g3_ParamLimits

0x1154,	// (0x0001004c) main_video_pane_g3

0x1182,	// (0x0001007a) main_video_pane_g4_ParamLimits

0x1182,	// (0x0001007a) main_video_pane_g4

0x11b0,	// (0x000100a8) main_video_pane_g5_ParamLimits

0x11b0,	// (0x000100a8) main_video_pane_g5

0x9ebb,	// (0x00018db3) main_video_pane_g6_ParamLimits

0x9ebb,	// (0x00018db3) main_video_pane_g6

0x0006,

0xf220,	// (0x0001e118) main_video_pane_g_ParamLimits

0xf220,	// (0x0001e118) main_video_pane_g

0x11d9,	// (0x000100d1) main_video_pane_t1_ParamLimits

0x11d9,	// (0x000100d1) main_video_pane_t1

0x9ed5,	// (0x00018dcd) cams_zoom_pane_g1

0x9ede,	// (0x00018dd6) cams_zoom_pane_g2

0x9ee7,	// (0x00018ddf) cams_zoom_pane_g3

0x9ef0,	// (0x00018de8) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001e127) cams_zoom_pane_g

0x1236,	// (0x0001012e) grid_cams_pane

0x1250,	// (0x00010148) linegrid_cams_pane

0x1264,	// (0x0001015c) cell_cams_pane_ParamLimits

0x1264,	// (0x0001015c) cell_cams_pane

0x9ef9,	// (0x00018df1) cams_burst_image_pane

0x9f01,	// (0x00018df9) cell_cams_pane_g1

0x992a,	// (0x00018822) grid_highlight_pane_cp03

0x9ce5,	// (0x00018bdd) mp_bg_pane_g1

0x992a,	// (0x00018822) bg_list_pane_cp03

0xbd9a,	// (0x0001ac92) bg_mp_pane

0xbda2,	// (0x0001ac9a) grid_mp_pane

0xbdaa,	// (0x0001aca2) media_player_g1

0xbdb2,	// (0x0001acaa) media_player_t1

0xbdc0,	// (0x0001acb8) media_player_t2

0xbdce,	// (0x0001acc6) media_player_t3

0xbddc,	// (0x0001acd4) media_player_t4

0xbdea,	// (0x0001ace2) media_player_t5

0xbdf8,	// (0x0001acf0) media_player_t6

0xbe06,	// (0x0001acfe) media_player_t7

0x0006,

0xf5cb,	// (0x0001e4c3) media_player_t

0xbe14,	// (0x0001ad0c) wait_bar_pane_cp02

0xf5b0,	// (0x0001e4a8) main_usb_pane_t

0x33f0,	// (0x000122e8) cell_mp_pane

0x9ce5,	// (0x00018bdd) cell_mp_pane_g1

0x992a,	// (0x00018822) grid_highlight_pane_cp06

0x9f09,	// (0x00018e01) grid_skin_colour_pane

0x9f11,	// (0x00018e09) list_highlight_pane_cp03

0x139b,	// (0x00010293) skin_g1

0x9f19,	// (0x00018e11) skin_t1

0x9f28,	// (0x00018e20) skin_t2

0x0001,

0xf264,	// (0x0001e15c) skin_t

0x13a3,	// (0x0001029b) cell_skin_colour_pane_ParamLimits

0x13a3,	// (0x0001029b) cell_skin_colour_pane

0x9f36,	// (0x00018e2e) cell_skin_colour_pane_g1

0x141c,	// (0x00010314) call_video_g1_ParamLimits

0x141c,	// (0x00010314) call_video_g1

0x1438,	// (0x00010330) call_video_g2_ParamLimits

0x1438,	// (0x00010330) call_video_g2

0x0001,

0xf269,	// (0x0001e161) call_video_g_ParamLimits

0xf269,	// (0x0001e161) call_video_g

0x148a,	// (0x00010382) call_video_uplink_pane_cp1_ParamLimits

0x148a,	// (0x00010382) call_video_uplink_pane_cp1

0x9f48,	// (0x00018e40) call_video_uplink_pane_cp2

0x1529,	// (0x00010421) video_down_crop_pane_ParamLimits

0x1529,	// (0x00010421) video_down_crop_pane

0x1620,	// (0x00010518) video_down_pane_ParamLimits

0x1620,	// (0x00010518) video_down_pane

0x9f50,	// (0x00018e48) video_down_subqcif_pane_ParamLimits

0x9f50,	// (0x00018e48) video_down_subqcif_pane

0x9f68,	// (0x00018e60) video_down_subqcif_pane_cp_ParamLimits

0x9f68,	// (0x00018e60) video_down_subqcif_pane_cp

0x9f8e,	// (0x00018e86) im_reading_pane_ParamLimits

0x9f8e,	// (0x00018e86) im_reading_pane

0x172e,	// (0x00010626) im_writing_pane_ParamLimits

0x172e,	// (0x00010626) im_writing_pane

0x1744,	// (0x0001063c) im_reading_pane_t1

0x9fa8,	// (0x00018ea0) list_im_pane

0x9fb9,	// (0x00018eb1) scroll_pane_cp07

0x177d,	// (0x00010675) im_writing_pane_t1_ParamLimits

0x177d,	// (0x00010675) im_writing_pane_t1

0x9fd2,	// (0x00018eca) im_writing_pane_t2_ParamLimits

0x9fd2,	// (0x00018eca) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001e16b) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001e16b) im_writing_pane_t

0x992a,	// (0x00018822) input_focus_pane_cp04

0x992a,	// (0x00018822) input_focus_pane_cp05

0x1792,	// (0x0001068a) list_im_single_pane_ParamLimits

0x1792,	// (0x0001068a) list_im_single_pane

0x17a6,	// (0x0001069e) list_single_im_pane_t1

0x33b0,	// (0x000122a8) blid_accuracy_pane

0x33b8,	// (0x000122b0) blid_compass_pane

0x33c2,	// (0x000122ba) main_location_t1

0x33d2,	// (0x000122ca) main_location_t2

0x33e2,	// (0x000122da) main_location_t3

0x0002,

0xf5da,	// (0x0001e4d2) main_location_t

0x992a,	// (0x00018822) aid_levels_location

0x9ce5,	// (0x00018bdd) blid_accuracy_pane_g1

0x9ce5,	// (0x00018bdd) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001e1cd) blid_accuracy_pane_g

0xa01a,	// (0x00018f12) wml_content_pane

0xa058,	// (0x00018f50) wml_button_pane_ParamLimits

0xa058,	// (0x00018f50) wml_button_pane

0x17b5,	// (0x000106ad) wml_list_single_large_pane_ParamLimits

0x17b5,	// (0x000106ad) wml_list_single_large_pane

0x17ca,	// (0x000106c2) wml_list_single_medium_pane_ParamLimits

0x17ca,	// (0x000106c2) wml_list_single_medium_pane

0x17e0,	// (0x000106d8) wml_list_single_small_pane_ParamLimits

0x17e0,	// (0x000106d8) wml_list_single_small_pane

0xa06c,	// (0x00018f64) wml_selection_box_pane_ParamLimits

0xa06c,	// (0x00018f64) wml_selection_box_pane

0xa07f,	// (0x00018f77) wml_list_single_pane_t1

0xa08e,	// (0x00018f86) wml_list_single_medium_pane_t1

0xa09d,	// (0x00018f95) wml_list_single_large_pane_t1

0xa0ac,	// (0x00018fa4) input_focus_pane_cp02_ParamLimits

0xa0ac,	// (0x00018fa4) input_focus_pane_cp02

0xa0bf,	// (0x00018fb7) wml_selection_box_pane_g1

0xa0c8,	// (0x00018fc0) wml_selection_box_pane_t1_ParamLimits

0xa0c8,	// (0x00018fc0) wml_selection_box_pane_t1

0x9b85,	// (0x00018a7d) bg_wml_button_pane_ParamLimits

0x9b85,	// (0x00018a7d) bg_wml_button_pane

0xa0e0,	// (0x00018fd8) wml_button_pane_g1

0xa0e8,	// (0x00018fe0) wml_button_pane_t1

0xa0e0,	// (0x00018fd8) wml_button_bg_pane_g1

0xa0f8,	// (0x00018ff0) wml_button_bg_pane_g2

0xa100,	// (0x00018ff8) wml_button_bg_pane_g3

0xa108,	// (0x00019000) wml_button_bg_pane_g4

0xa110,	// (0x00019008) wml_button_bg_pane_g5

0xa118,	// (0x00019010) wml_button_bg_pane_g6

0xa120,	// (0x00019018) wml_button_bg_pane_g7

0xa128,	// (0x00019020) wml_button_bg_pane_g8

0xa130,	// (0x00019028) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001e170) wml_button_bg_pane_g

0x17f8,	// (0x000106f0) bg_list_pane_cp02

0xa138,	// (0x00019030) mce_header_pane_ParamLimits

0xa138,	// (0x00019030) mce_header_pane

0xa14e,	// (0x00019046) mce_icon_pane

0xa14e,	// (0x00019046) mce_image_pane

0xa157,	// (0x0001904f) mce_text_pane_ParamLimits

0xa157,	// (0x0001904f) mce_text_pane

0x1800,	// (0x000106f8) scroll_pane_cp03

0xa050,	// (0x00018f48) scroll_pane_cp04

0xa16a,	// (0x00019062) scroll_pane_cp05_ParamLimits

0xa16a,	// (0x00019062) scroll_pane_cp05

0x180a,	// (0x00010702) mce_header_field_pane_ParamLimits

0x180a,	// (0x00010702) mce_header_field_pane

0x1821,	// (0x00010719) mce_header_field_pane_2_ParamLimits

0x1821,	// (0x00010719) mce_header_field_pane_2

0x1837,	// (0x0001072f) mce_header_field_pane_3

0x183f,	// (0x00010737) list_single_mce_message_pane_ParamLimits

0x183f,	// (0x00010737) list_single_mce_message_pane

0x1854,	// (0x0001074c) list_single_mce_smart_pane_ParamLimits

0x1854,	// (0x0001074c) list_single_mce_smart_pane

0xa176,	// (0x0001906e) input_focus_pane_cp03

0xa17f,	// (0x00019077) list_header_data_pane

0x1874,	// (0x0001076c) mce_header_field_pane_t1

0x1884,	// (0x0001077c) list_single_mce_header_pane_ParamLimits

0x1884,	// (0x0001077c) list_single_mce_header_pane

0xa187,	// (0x0001907f) list_single_mce_header_pane_t1

0xa196,	// (0x0001908e) list_single_mce_message_pane_g1

0xa19e,	// (0x00019096) list_single_mce_message_pane_t1

0x18be,	// (0x000107b6) bg_cale_heading_pane_cp01_ParamLimits

0x18be,	// (0x000107b6) bg_cale_heading_pane_cp01

0xa1ac,	// (0x000190a4) bg_cale_pane_cp02_ParamLimits

0xa1ac,	// (0x000190a4) bg_cale_pane_cp02

0x18ed,	// (0x000107e5) cale_month_corner_pane

0x190c,	// (0x00010804) cale_month_day_heading_pane_ParamLimits

0x190c,	// (0x00010804) cale_month_day_heading_pane

0x1953,	// (0x0001084b) cale_month_pane_g1_ParamLimits

0x1953,	// (0x0001084b) cale_month_pane_g1

0x1977,	// (0x0001086f) cale_month_pane_g2_ParamLimits

0x1977,	// (0x0001086f) cale_month_pane_g2

0x19a7,	// (0x0001089f) cale_month_pane_g3_ParamLimits

0x19a7,	// (0x0001089f) cale_month_pane_g3

0x19e3,	// (0x000108db) cale_month_pane_g4_ParamLimits

0x19e3,	// (0x000108db) cale_month_pane_g4

0x1a1f,	// (0x00010917) cale_month_pane_g5_ParamLimits

0x1a1f,	// (0x00010917) cale_month_pane_g5

0x1a67,	// (0x0001095f) cale_month_pane_g6_ParamLimits

0x1a67,	// (0x0001095f) cale_month_pane_g6

0x1ab3,	// (0x000109ab) cale_month_pane_g7_ParamLimits

0x1ab3,	// (0x000109ab) cale_month_pane_g7

0x1b07,	// (0x000109ff) cale_month_pane_g8_ParamLimits

0x1b07,	// (0x000109ff) cale_month_pane_g8

0x1b5b,	// (0x00010a53) cale_month_pane_g9_ParamLimits

0x1b5b,	// (0x00010a53) cale_month_pane_g9

0x1bad,	// (0x00010aa5) cale_month_pane_g10_ParamLimits

0x1bad,	// (0x00010aa5) cale_month_pane_g10

0x1bff,	// (0x00010af7) cale_month_pane_g11_ParamLimits

0x1bff,	// (0x00010af7) cale_month_pane_g11

0x1c51,	// (0x00010b49) cale_month_pane_g12_ParamLimits

0x1c51,	// (0x00010b49) cale_month_pane_g12

0x1ca3,	// (0x00010b9b) cale_month_pane_g13_ParamLimits

0x1ca3,	// (0x00010b9b) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001e183) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001e183) cale_month_pane_g

0x1cf5,	// (0x00010bed) cale_month_week_pane

0x1d19,	// (0x00010c11) grid_cale_month_pane_ParamLimits

0x1d19,	// (0x00010c11) grid_cale_month_pane

0x1d57,	// (0x00010c4f) cale_month_day_heading_pane_t1

0x1ddd,	// (0x00010cd5) cale_month_day_heading_pane_t2

0x1e6e,	// (0x00010d66) cale_month_day_heading_pane_t3

0x1eff,	// (0x00010df7) cale_month_day_heading_pane_t4

0x1f94,	// (0x00010e8c) cale_month_day_heading_pane_t5

0x2035,	// (0x00010f2d) cale_month_day_heading_pane_t6

0x20d6,	// (0x00010fce) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001e19e) cale_month_day_heading_pane_t

0x9e42,	// (0x00018d3a) bg_cale_side_pane_cp01

0x217f,	// (0x00011077) cale_month_week_pane_t1

0x2198,	// (0x00011090) cale_month_week_pane_t2

0x21b1,	// (0x000110a9) cale_month_week_pane_t3

0x21ca,	// (0x000110c2) cale_month_week_pane_t4

0x21e3,	// (0x000110db) cale_month_week_pane_t5

0x21fc,	// (0x000110f4) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001e1ad) cale_month_week_pane_t

0x2215,	// (0x0001110d) cell_cale_month_pane_ParamLimits

0x2215,	// (0x0001110d) cell_cale_month_pane

0xa1eb,	// (0x000190e3) cell_cale_month_pane_g1

0x2369,	// (0x00011261) cell_cale_month_pane_t1_ParamLimits

0x2369,	// (0x00011261) cell_cale_month_pane_t1

0x9e50,	// (0x00018d48) grid_highlight_pane_cp08

0x9ce5,	// (0x00018bdd) main_smil_g1

0x2389,	// (0x00011281) smil_status_pane

0xa1f7,	// (0x000190ef) smil_text_pane

0xbcba,	// (0x0001abb2) bg_popup_call3_rect_pane_g8

0xbcc2,	// (0x0001abba) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e466) bg_popup_call3_rect_pane_g

0xbf5d,	// (0x0001ae55) smil_status_volume_pane_g1

0xa201,	// (0x000190f9) smil_status_pane_t1

0xbf90,	// (0x0001ae88) volume_smil_pane

0xa218,	// (0x00019110) list_smil_text_pane

0x239c,	// (0x00011294) scroll_pane_cp011

0x23a7,	// (0x0001129f) smil_text_list_pane_t1_ParamLimits

0x23a7,	// (0x0001129f) smil_text_list_pane_t1

0xa222,	// (0x0001911a) aid_volume_smil_ParamLimits

0xa222,	// (0x0001911a) aid_volume_smil

0x9ce5,	// (0x00018bdd) smil_volume_pane_g1

0x9ce5,	// (0x00018bdd) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001e1cd) smil_volume_pane_g

0x0919,	// (0x0000f811) listscroll_cale_day_pane

0xa244,	// (0x0001913c) bg_cale_pane

0xa25c,	// (0x00019154) list_cale_pane

0xa27f,	// (0x00019177) scroll_pane_cp09

0xa290,	// (0x00019188) cale_bg_pane_g1

0xa298,	// (0x00019190) cale_bg_pane_g2

0xa2a0,	// (0x00019198) cale_bg_pane_g3

0xa2a8,	// (0x000191a0) cale_bg_pane_g4

0xa2b0,	// (0x000191a8) cale_bg_pane_g5

0xa2b8,	// (0x000191b0) cale_bg_pane_g6

0xa2c0,	// (0x000191b8) cale_bg_pane_g7

0xa2c8,	// (0x000191c0) cale_bg_pane_g8

0xa2d0,	// (0x000191c8) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001e1d2) cale_bg_pane_g

0x23eb,	// (0x000112e3) list_cale_time_pane_ParamLimits

0x23eb,	// (0x000112e3) list_cale_time_pane

0xa2d8,	// (0x000191d0) list_cale_time_pane_g1_ParamLimits

0xa2d8,	// (0x000191d0) list_cale_time_pane_g1

0xa2e4,	// (0x000191dc) list_cale_time_pane_g2_ParamLimits

0xa2e4,	// (0x000191dc) list_cale_time_pane_g2

0x2400,	// (0x000112f8) list_cale_time_pane_g3_ParamLimits

0x2400,	// (0x000112f8) list_cale_time_pane_g3

0x240e,	// (0x00011306) list_cale_time_pane_g4_ParamLimits

0x240e,	// (0x00011306) list_cale_time_pane_g4

0x241c,	// (0x00011314) list_cale_time_pane_g5_ParamLimits

0x241c,	// (0x00011314) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001e1e5) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001e1e5) list_cale_time_pane_g

0xa2fe,	// (0x000191f6) list_cale_time_pane_t1_ParamLimits

0xa2fe,	// (0x000191f6) list_cale_time_pane_t1

0xa326,	// (0x0001921e) list_cale_time_pane_t2_ParamLimits

0xa326,	// (0x0001921e) list_cale_time_pane_t2

0x277f,	// (0x00011677) aid_blid_cardinal_pane

0x27bd,	// (0x000116b5) compass_pane_t4

0xa34e,	// (0x00019246) list_cale_time_pane_t4_ParamLimits

0xa34e,	// (0x00019246) list_cale_time_pane_t4

0x27cb,	// (0x000116c3) compass_pane_t5

0x27d9,	// (0x000116d1) compass_pane_t6

0x27e7,	// (0x000116df) compass_pane_t7

0xa870,	// (0x00019768) navi_pane_cc_t1

0xaa5f,	// (0x00019957) aid_phob_thumbnail_center_pane

0x2dc8,	// (0x00011cc0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001e1f2) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001e1f2) list_cale_time_pane_t

0x9581,	// (0x00018479) bg_popup_window_pane_cp02_ParamLimits

0x9581,	// (0x00018479) bg_popup_window_pane_cp02

0xa376,	// (0x0001926e) heading_pane_cp01_ParamLimits

0xa376,	// (0x0001926e) heading_pane_cp01

0xa382,	// (0x0001927a) loc_req_pane_ParamLimits

0xa382,	// (0x0001927a) loc_req_pane

0xa392,	// (0x0001928a) loc_type_pane_ParamLimits

0xa392,	// (0x0001928a) loc_type_pane

0xa3a4,	// (0x0001929c) loc_type_pane_t1_ParamLimits

0xa3a4,	// (0x0001929c) loc_type_pane_t1

0xa3b6,	// (0x000192ae) loc_type_pane_t2_ParamLimits

0xa3b6,	// (0x000192ae) loc_type_pane_t2

0xa3c8,	// (0x000192c0) loc_type_pane_t3_ParamLimits

0xa3c8,	// (0x000192c0) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001e1f9) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001e1f9) loc_type_pane_t

0xa3da,	// (0x000192d2) list_loc_req_pane

0xa3e4,	// (0x000192dc) scroll_pane_cp012

0x242a,	// (0x00011322) list_single_loc_request_popup_menu_pane_ParamLimits

0x242a,	// (0x00011322) list_single_loc_request_popup_menu_pane

0xa3ef,	// (0x000192e7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa3ef,	// (0x000192e7) list_single_loc_request_popup_menu_pane_g1

0xa3fb,	// (0x000192f3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa3fb,	// (0x000192f3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001e200) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001e200) list_single_loc_request_popup_menu_pane_g

0xa407,	// (0x000192ff) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa407,	// (0x000192ff) list_single_loc_request_popup_menu_pane_t1

0x9b85,	// (0x00018a7d) bg_popup_window_pane_cp03_ParamLimits

0x9b85,	// (0x00018a7d) bg_popup_window_pane_cp03

0xa41d,	// (0x00019315) heading_loc_req_pane_ParamLimits

0xa41d,	// (0x00019315) heading_loc_req_pane

0x2437,	// (0x0001132f) popup_dyc_status_message_window_g1_ParamLimits

0x2437,	// (0x0001132f) popup_dyc_status_message_window_g1

0x244b,	// (0x00011343) popup_dyc_status_message_window_t1_ParamLimits

0x244b,	// (0x00011343) popup_dyc_status_message_window_t1

0x2460,	// (0x00011358) popup_dyc_status_message_window_t2_ParamLimits

0x2460,	// (0x00011358) popup_dyc_status_message_window_t2

0x2475,	// (0x0001136d) popup_dyc_status_message_window_t3_ParamLimits

0x2475,	// (0x0001136d) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001e205) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001e205) popup_dyc_status_message_window_t

0x992a,	// (0x00018822) bg_heading_pane_cp01

0xa429,	// (0x00019321) heading_loc_req_pane_g1

0xa431,	// (0x00019329) heading_loc_req_pane_g2

0xa439,	// (0x00019331) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001e20c) heading_loc_req_pane_g

0xa441,	// (0x00019339) heading_loc_req_pane_t1

0xa450,	// (0x00019348) bg_popup_sub_pane_cp01_ParamLimits

0xa450,	// (0x00019348) bg_popup_sub_pane_cp01

0xa45e,	// (0x00019356) popup_cale_events_window_g1_ParamLimits

0xa45e,	// (0x00019356) popup_cale_events_window_g1

0xa47e,	// (0x00019376) popup_cale_events_window_g2_ParamLimits

0xa47e,	// (0x00019376) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001e240) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001e240) popup_cale_events_window_g

0xa49e,	// (0x00019396) popup_cale_events_window_t1_ParamLimits

0xa49e,	// (0x00019396) popup_cale_events_window_t1

0xa4b0,	// (0x000193a8) popup_cale_events_window_t2_ParamLimits

0xa4b0,	// (0x000193a8) popup_cale_events_window_t2

0xa4ee,	// (0x000193e6) popup_cale_events_window_t3_ParamLimits

0xa4ee,	// (0x000193e6) popup_cale_events_window_t3

0xa528,	// (0x00019420) popup_cale_events_window_t4_ParamLimits

0xa528,	// (0x00019420) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001e245) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001e245) popup_cale_events_window_t

0x257a,	// (0x00011472) call_type_pane

0x258a,	// (0x00011482) popup_call_status_window_g1

0x259e,	// (0x00011496) popup_call_status_window_g2

0x25b2,	// (0x000114aa) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001e24e) popup_call_status_window_g

0xa55e,	// (0x00019456) call_type_pane_g1

0xa567,	// (0x0001945f) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001e255) call_type_pane_g

0x992a,	// (0x00018822) bg_popup_sub_pane_cp02

0xa570,	// (0x00019468) listscroll_popup_wml_pane

0xa578,	// (0x00019470) list_wml_pane

0xa582,	// (0x0001947a) scroll_pane_cp013

0xa58d,	// (0x00019485) list_single_graphic_popup_wml_pane_ParamLimits

0xa58d,	// (0x00019485) list_single_graphic_popup_wml_pane

0x9ce5,	// (0x00018bdd) list_single_graphic_popup_wml_pane_g1

0xa5a1,	// (0x00019499) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001e25a) list_single_graphic_popup_wml_pane_g

0xa5a9,	// (0x000194a1) list_single_graphic_popup_wml_pane_t1

0xa5bf,	// (0x000194b7) aid_call_pane

0x9b7d,	// (0x00018a75) popup_clock_analogue_window_g1

0x9b7d,	// (0x00018a75) popup_clock_analogue_window_g2

0xa5c7,	// (0x000194bf) popup_clock_analogue_window_g3

0xa5c7,	// (0x000194bf) popup_clock_analogue_window_g4

0x9ce5,	// (0x00018bdd) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001e25f) popup_clock_analogue_window_g

0xa5cf,	// (0x000194c7) popup_clock_analogue_window_t1

0xa5dd,	// (0x000194d5) clock_digital_number_pane_ParamLimits

0xa5dd,	// (0x000194d5) clock_digital_number_pane

0xa5e9,	// (0x000194e1) clock_digital_number_pane_cp02_ParamLimits

0xa5e9,	// (0x000194e1) clock_digital_number_pane_cp02

0xa5f5,	// (0x000194ed) clock_digital_number_pane_cp03_ParamLimits

0xa5f5,	// (0x000194ed) clock_digital_number_pane_cp03

0xa601,	// (0x000194f9) clock_digital_number_pane_cp04_ParamLimits

0xa601,	// (0x000194f9) clock_digital_number_pane_cp04

0xa611,	// (0x00019509) clock_digital_separator_pane_ParamLimits

0xa611,	// (0x00019509) clock_digital_separator_pane

0xa61d,	// (0x00019515) popup_clock_digital_window_t1

0x9ce5,	// (0x00018bdd) clock_digital_number_pane_g1

0x9ce5,	// (0x00018bdd) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001e1cd) clock_digital_number_pane_g

0x9ce5,	// (0x00018bdd) clock_digital_separator_pane_g1

0x9ce5,	// (0x00018bdd) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001e1cd) clock_digital_separator_pane_g

0x992a,	// (0x00018822) bg_popup_window_pane_cp04

0xa63a,	// (0x00019532) heading_pane_cp03

0xa642,	// (0x0001953a) listscroll_popup_gms_pane

0xa64a,	// (0x00019542) grid_large_graphic_popup_pane

0xa654,	// (0x0001954c) listscroll_popup_gms_pane_g1

0xa65c,	// (0x00019554) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001e26a) listscroll_popup_gms_pane_g

0xa050,	// (0x00018f48) scroll_pane_cp014

0x25c1,	// (0x000114b9) cell_large_graphic_popup_pane_ParamLimits

0x25c1,	// (0x000114b9) cell_large_graphic_popup_pane

0x25d9,	// (0x000114d1) cell_large_graphic_popup_pane_g1_ParamLimits

0x25d9,	// (0x000114d1) cell_large_graphic_popup_pane_g1

0xa664,	// (0x0001955c) cell_large_graphic_popup_pane_g2_ParamLimits

0xa664,	// (0x0001955c) cell_large_graphic_popup_pane_g2

0xa670,	// (0x00019568) cell_large_graphic_popup_pane_g3_ParamLimits

0xa670,	// (0x00019568) cell_large_graphic_popup_pane_g3

0xa67d,	// (0x00019575) cell_large_graphic_popup_pane_g4_ParamLimits

0xa67d,	// (0x00019575) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001e26f) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001e26f) cell_large_graphic_popup_pane_g

0xa68d,	// (0x00019585) grid_highlight_pane_cp010

0x9ce5,	// (0x00018bdd) bg_popup_call_pane_g1

0xa697,	// (0x0001958f) list_single_graphic_popup_conf_pane_ParamLimits

0xa697,	// (0x0001958f) list_single_graphic_popup_conf_pane

0xa6aa,	// (0x000195a2) list_highlight_pane_cp01

0xa6b3,	// (0x000195ab) list_single_graphic_popup_conf_pane_g1

0xa6bb,	// (0x000195b3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001e278) list_single_graphic_popup_conf_pane_g

0xa6c3,	// (0x000195bb) list_single_graphic_popup_conf_pane_t1

0xa6d1,	// (0x000195c9) linegrid_cams_pane_g1

0x25e5,	// (0x000114dd) linegrid_cams_pane_g2

0x9e83,	// (0x00018d7b) linegrid_cams_pane_g3

0xa6da,	// (0x000195d2) linegrid_cams_pane_g4

0x25ee,	// (0x000114e6) linegrid_cams_pane_g5

0x25f7,	// (0x000114ef) linegrid_cams_pane_g6

0x9e8c,	// (0x00018d84) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001e27d) linegrid_cams_pane_g

0xa6e3,	// (0x000195db) popup_clock_analogue_window

0xa6e3,	// (0x000195db) popup_clock_digital_window

0x992a,	// (0x00018822) popup_phob_thumbnail_window

0x9ce5,	// (0x00018bdd) call_video_uplink_pane_g1

0xa6ec,	// (0x000195e4) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001e28c) call_video_uplink_pane_g

0xa6f4,	// (0x000195ec) video_uplink_pane

0xa6fc,	// (0x000195f4) mce_image_pane_g1

0x2602,	// (0x000114fa) mce_image_pane_g2

0x260c,	// (0x00011504) mce_image_pane_g3

0x2614,	// (0x0001150c) mce_image_pane_g4

0x261c,	// (0x00011514) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001e291) mce_image_pane_g

0xa706,	// (0x000195fe) control_top_pane_stacon_cp01_ParamLimits

0xa706,	// (0x000195fe) control_top_pane_stacon_cp01

0xa71a,	// (0x00019612) uni_indicator_pane_stacon_cp01_ParamLimits

0xa71a,	// (0x00019612) uni_indicator_pane_stacon_cp01

0xa72b,	// (0x00019623) bg_popup_sub_pane_cp03

0xa735,	// (0x0001962d) chi_dic_find_pane

0x2624,	// (0x0001151c) listscroll_chi_dic_pane

0xa73d,	// (0x00019635) main_pane_chidic_g1

0xa745,	// (0x0001963d) chi_dic_find_pane_t1

0xa753,	// (0x0001964b) find_chidic_pane

0xa75c,	// (0x00019654) chi_dic_list_pane_ParamLimits

0xa75c,	// (0x00019654) chi_dic_list_pane

0xa76d,	// (0x00019665) scroll_pane_cp020

0xa775,	// (0x0001966d) find_chidic_pane_t1

0x992a,	// (0x00018822) input_focus_pane_cp06

0x2638,	// (0x00011530) list_chi_dic_pane_ParamLimits

0x2638,	// (0x00011530) list_chi_dic_pane

0x264a,	// (0x00011542) list_chi_dic_pane_t1_ParamLimits

0x264a,	// (0x00011542) list_chi_dic_pane_t1

0x992a,	// (0x00018822) list_highlight_pane_cp020

0xa784,	// (0x0001967c) bg_cale_heading_pane_g1

0x265d,	// (0x00011555) bg_cale_heading_pane_g2

0x2665,	// (0x0001155d) bg_cale_heading_pane_g3

0x266d,	// (0x00011565) bg_cale_heading_pane_g4

0x2677,	// (0x0001156f) bg_cale_heading_pane_g5

0x2681,	// (0x00011579) bg_cale_heading_pane_g6

0x2689,	// (0x00011581) bg_cale_heading_pane_g7

0x2691,	// (0x00011589) bg_cale_heading_pane_g8

0x269b,	// (0x00011593) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001e29c) bg_cale_heading_pane_g

0xa784,	// (0x0001967c) bg_cale_side_pane_g1

0x26a5,	// (0x0001159d) bg_cale_side_pane_g2

0x26ad,	// (0x000115a5) bg_cale_side_pane_g3

0x26b5,	// (0x000115ad) bg_cale_side_pane_g4

0x26bd,	// (0x000115b5) bg_cale_side_pane_g5

0x26c5,	// (0x000115bd) bg_cale_side_pane_g6

0x26cd,	// (0x000115c5) bg_cale_side_pane_g7

0x26d5,	// (0x000115cd) bg_cale_side_pane_g8

0x26dd,	// (0x000115d5) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001e2af) bg_cale_side_pane_g

0x26e5,	// (0x000115dd) popup_call_status_window_ParamLimits

0x26e5,	// (0x000115dd) popup_call_status_window

0xa78c,	// (0x00019684) stacon_top_pane

0xa794,	// (0x0001968c) status_pane_ParamLimits

0xa794,	// (0x0001968c) status_pane

0xa7a9,	// (0x000196a1) status_small_pane

0xa7b1,	// (0x000196a9) control_pane

0x992a,	// (0x00018822) stacon_bottom_pane

0xa7b9,	// (0x000196b1) list_single_mce_smart_pane_t1_ParamLimits

0xa7b9,	// (0x000196b1) list_single_mce_smart_pane_t1

0xa7cc,	// (0x000196c4) list_single_mce_smart_pane_t2_ParamLimits

0xa7cc,	// (0x000196c4) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001e2c2) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001e2c2) list_single_mce_smart_pane_t

0x272e,	// (0x00011626) compass_pane

0x2737,	// (0x0001162f) main_location2_pane_t1

0x2749,	// (0x00011641) main_location2_pane_t2

0x275b,	// (0x00011653) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001e2c7) main_location2_pane_t

0xa7eb,	// (0x000196e3) compass_pane_g1_ParamLimits

0xa7eb,	// (0x000196e3) compass_pane_g1

0x279f,	// (0x00011697) compass_pane_t1

0x27ae,	// (0x000116a6) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001e2d0) compass_pane_t

0x27f5,	// (0x000116ed) text_secondary_cp61

0xa867,	// (0x0001975f) navi_pane_cams_g5

0xa8e3,	// (0x000197db) navi_pane_im_t1

0xa8f1,	// (0x000197e9) navi_pane_mp_g1_ParamLimits

0xa8f1,	// (0x000197e9) navi_pane_mp_g1

0xa905,	// (0x000197fd) navi_pane_mp_g2_ParamLimits

0xa905,	// (0x000197fd) navi_pane_mp_g2

0xa911,	// (0x00019809) navi_pane_mp_g3_ParamLimits

0xa911,	// (0x00019809) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001e2e4) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001e2e4) navi_pane_mp_g

0xa91d,	// (0x00019815) navi_pane_mp_t1

0xa92b,	// (0x00019823) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001e2eb) navi_pane_mp_t

0xa996,	// (0x0001988e) navi_pane_vt_g1

0xa91d,	// (0x00019815) navi_pane_vt_t1

0xa99e,	// (0x00019896) navi_slider_pane

0x9e9d,	// (0x00018d95) zooming_pane

0xa9ae,	// (0x000198a6) navi_slider_pane_g1

0xa9b7,	// (0x000198af) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001e2f2) navi_slider_pane_g

0xa9e4,	// (0x000198dc) aid_levels_zoom

0xa9ec,	// (0x000198e4) zooming_pane_g1

0xa9f4,	// (0x000198ec) zooming_pane_g2

0xa9f4,	// (0x000198ec) zooming_pane_g3

0x0002,

0xf409,	// (0x0001e301) zooming_pane_g

0xa9fc,	// (0x000198f4) level_10_zoom

0xaa05,	// (0x000198fd) level_11_zoom

0xaa0e,	// (0x00019906) level_1_zoom

0xaa17,	// (0x0001990f) level_2_zoom

0xaa20,	// (0x00019918) level_3_zoom

0xaa29,	// (0x00019921) level_4_zoom

0xaa32,	// (0x0001992a) level_5_zoom

0xaa3b,	// (0x00019933) level_6_zoom

0xaa44,	// (0x0001993c) level_7_zoom

0xaa4d,	// (0x00019945) level_8_zoom

0xaa56,	// (0x0001994e) level_9_zoom

0xaa67,	// (0x0001995f) popup_phob_thumbnail_window_g1

0xaa6f,	// (0x00019967) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001e308) popup_phob_thumbnail_window_g

0xbe1c,	// (0x0001ad14) level_1_location

0xbe24,	// (0x0001ad1c) level_2_location

0xbe2c,	// (0x0001ad24) level_3_location

0xbe34,	// (0x0001ad2c) level_4_location

0x9e9d,	// (0x00018d95) level_5_location

0x2846,	// (0x0001173e) mce_icon_pane_g1

0x2850,	// (0x00011748) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001e30d) mce_icon_pane_g

0x2858,	// (0x00011750) main_mup_pane_g1_ParamLimits

0x2858,	// (0x00011750) main_mup_pane_g1

0x286e,	// (0x00011766) main_mup_pane_g2_ParamLimits

0x286e,	// (0x00011766) main_mup_pane_g2

0x2886,	// (0x0001177e) main_mup_pane_g3_ParamLimits

0x2886,	// (0x0001177e) main_mup_pane_g3

0x289e,	// (0x00011796) main_mup_pane_g4_ParamLimits

0x289e,	// (0x00011796) main_mup_pane_g4

0x28b6,	// (0x000117ae) main_mup_pane_g5_ParamLimits

0x28b6,	// (0x000117ae) main_mup_pane_g5

0x28d2,	// (0x000117ca) main_mup_pane_g6_ParamLimits

0x28d2,	// (0x000117ca) main_mup_pane_g6

0x28ea,	// (0x000117e2) main_mup_pane_g7_ParamLimits

0x28ea,	// (0x000117e2) main_mup_pane_g7

0x2902,	// (0x000117fa) main_mup_pane_g8_ParamLimits

0x2902,	// (0x000117fa) main_mup_pane_g8

0x291c,	// (0x00011814) main_mup_pane_g9_ParamLimits

0x291c,	// (0x00011814) main_mup_pane_g9

0x2936,	// (0x0001182e) main_mup_pane_g10_ParamLimits

0x2936,	// (0x0001182e) main_mup_pane_g10

0x2950,	// (0x00011848) main_mup_pane_g11_ParamLimits

0x2950,	// (0x00011848) main_mup_pane_g11

0x2964,	// (0x0001185c) main_mup_pane_g12_ParamLimits

0x2964,	// (0x0001185c) main_mup_pane_g12

0x297a,	// (0x00011872) main_mup_pane_g13_ParamLimits

0x297a,	// (0x00011872) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001e312) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001e312) main_mup_pane_g

0x298e,	// (0x00011886) main_mup_pane_t1_ParamLimits

0x298e,	// (0x00011886) main_mup_pane_t1

0x29a8,	// (0x000118a0) main_mup_pane_t2_ParamLimits

0x29a8,	// (0x000118a0) main_mup_pane_t2

0x29c0,	// (0x000118b8) main_mup_pane_t3_ParamLimits

0x29c0,	// (0x000118b8) main_mup_pane_t3

0x29d8,	// (0x000118d0) main_mup_pane_t4_ParamLimits

0x29d8,	// (0x000118d0) main_mup_pane_t4

0x29f6,	// (0x000118ee) main_mup_pane_t5_ParamLimits

0x29f6,	// (0x000118ee) main_mup_pane_t5

0x2a0b,	// (0x00011903) main_mup_pane_t6_ParamLimits

0x2a0b,	// (0x00011903) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001e32d) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001e32d) main_mup_pane_t

0x2a1d,	// (0x00011915) mup_progress_pane_ParamLimits

0x2a1d,	// (0x00011915) mup_progress_pane

0x2a29,	// (0x00011921) mup_visualizer_pane_ParamLimits

0x2a29,	// (0x00011921) mup_visualizer_pane

0x2a59,	// (0x00011951) mup_volume_pane_ParamLimits

0x2a59,	// (0x00011951) mup_volume_pane

0xaa77,	// (0x0001996f) mup_visualizer_pane_g1_ParamLimits

0xaa77,	// (0x0001996f) mup_visualizer_pane_g1

0xaa77,	// (0x0001996f) mup_visualizer_pane_g2_ParamLimits

0xaa77,	// (0x0001996f) mup_visualizer_pane_g2

0xa7eb,	// (0x000196e3) mup_visualizer_pane_g3_ParamLimits

0xa7eb,	// (0x000196e3) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001e33a) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001e33a) mup_visualizer_pane_g

0x9ce5,	// (0x00018bdd) mup_volume_pane_g1

0xaa8d,	// (0x00019985) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001e341) mup_volume_pane_g

0x9ce5,	// (0x00018bdd) mup_progress_pane_g1

0xaa96,	// (0x0001998e) mup_progress_pane_g2

0xaa9f,	// (0x00019997) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001e346) mup_progress_pane_g

0x992a,	// (0x00018822) bg_popup_window_pane_cp05

0xaaa8,	// (0x000199a0) heading_pane_cp02_ParamLimits

0xaaa8,	// (0x000199a0) heading_pane_cp02

0xaac2,	// (0x000199ba) list_popup_blid_pane

0xaaca,	// (0x000199c2) list_blid_sat_info_pane_ParamLimits

0xaaca,	// (0x000199c2) list_blid_sat_info_pane

0xaadd,	// (0x000199d5) list_blid_sat_info_pane_g1

0xaae5,	// (0x000199dd) list_blid_sat_info_pane_t1

0x2b6f,	// (0x00011a67) mup_equalizer_pane_ParamLimits

0x2b6f,	// (0x00011a67) mup_equalizer_pane

0x2b88,	// (0x00011a80) mup_equalizer_pane_cp1_ParamLimits

0x2b88,	// (0x00011a80) mup_equalizer_pane_cp1

0x2ba5,	// (0x00011a9d) mup_equalizer_pane_cp2_ParamLimits

0x2ba5,	// (0x00011a9d) mup_equalizer_pane_cp2

0x2bc2,	// (0x00011aba) mup_equalizer_pane_cp3_ParamLimits

0x2bc2,	// (0x00011aba) mup_equalizer_pane_cp3

0x2be3,	// (0x00011adb) mup_equalizer_pane_cp4_ParamLimits

0x2be3,	// (0x00011adb) mup_equalizer_pane_cp4

0x2c04,	// (0x00011afc) mup_equalizer_pane_cp5

0x2c18,	// (0x00011b10) mup_equalizer_pane_cp6

0x2c2c,	// (0x00011b24) mup_equalizer_pane_cp7

0xbd3a,	// (0x0001ac32) bg_popup_call_poc_act_pane_g9

0xbd42,	// (0x0001ac3a) bg_popup_call_poc_act_pane_g10

0xbd4a,	// (0x0001ac42) bg_popup_call_poc_act_pane_g11

0x000a,

0x9b85,	// (0x00018a7d) mup_scale_pane

0x9ce5,	// (0x00018bdd) mup_scale_pane_g1

0xaaf3,	// (0x000199eb) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001e362) mup_scale_pane_g

0xab17,	// (0x00019a0f) msg_data_pane

0xab1f,	// (0x00019a17) scroll_pane_cp017

0x2c52,	// (0x00011b4a) bg_list_pane_cp04_ParamLimits

0x2c52,	// (0x00011b4a) bg_list_pane_cp04

0xab2f,	// (0x00019a27) msg_data_pane_g1

0x2c6a,	// (0x00011b62) msg_data_pane_g2

0x2c74,	// (0x00011b6c) msg_data_pane_g3

0x2c7c,	// (0x00011b74) msg_data_pane_g4

0x2c84,	// (0x00011b7c) msg_data_pane_g5

0x2c8c,	// (0x00011b84) msg_data_pane_g6

0x2c94,	// (0x00011b8c) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001e371) msg_data_pane_g

0x2c9c,	// (0x00011b94) msg_text_pane_ParamLimits

0x2c9c,	// (0x00011b94) msg_text_pane

0x2cc0,	// (0x00011bb8) qrid_highlight_pane_cp011_ParamLimits

0x2cc0,	// (0x00011bb8) qrid_highlight_pane_cp011

0x992a,	// (0x00018822) msg_body_pane

0x992a,	// (0x00018822) msg_header_pane

0xab40,	// (0x00019a38) input_focus_pane_cp07

0xab55,	// (0x00019a4d) msg_header_pane_t1_ParamLimits

0xab55,	// (0x00019a4d) msg_header_pane_t1

0xab67,	// (0x00019a5f) msg_header_pane_t2_ParamLimits

0xab67,	// (0x00019a5f) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001e385) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001e385) msg_header_pane_t

0xab79,	// (0x00019a71) msg_body_pane_g1

0xab81,	// (0x00019a79) msg_body_pane_t1_ParamLimits

0xab81,	// (0x00019a79) msg_body_pane_t1

0xabb2,	// (0x00019aaa) msg_body_pane_t2_ParamLimits

0xabb2,	// (0x00019aaa) msg_body_pane_t2

0xabc4,	// (0x00019abc) msg_body_pane_t3_ParamLimits

0xabc4,	// (0x00019abc) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001e38a) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001e38a) msg_body_pane_t

0x2d1e,	// (0x00011c16) main_viewer_pane_g1_ParamLimits

0x2d1e,	// (0x00011c16) main_viewer_pane_g1

0x2d2c,	// (0x00011c24) main_viewer_pane_g2_ParamLimits

0x2d2c,	// (0x00011c24) main_viewer_pane_g2

0x2d3a,	// (0x00011c32) main_viewer_pane_g3_ParamLimits

0x2d3a,	// (0x00011c32) main_viewer_pane_g3

0x2d49,	// (0x00011c41) main_viewer_pane_g4_ParamLimits

0x2d49,	// (0x00011c41) main_viewer_pane_g4

0xabee,	// (0x00019ae6) main_viewer_pane_g5_ParamLimits

0xabee,	// (0x00019ae6) main_viewer_pane_g5

0xabee,	// (0x00019ae6) main_viewer_pane_g7_ParamLimits

0xabee,	// (0x00019ae6) main_viewer_pane_g7

0xac00,	// (0x00019af8) main_viewer_pane_g8_ParamLimits

0xac00,	// (0x00019af8) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001e39a) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001e39a) main_viewer_pane_g

0xac18,	// (0x00019b10) viewer_content_pane_ParamLimits

0xac18,	// (0x00019b10) viewer_content_pane

0x2d85,	// (0x00011c7d) main_postcard_pane_g1_ParamLimits

0x2d85,	// (0x00011c7d) main_postcard_pane_g1

0x2d9b,	// (0x00011c93) main_postcard_pane_g2_ParamLimits

0x2d9b,	// (0x00011c93) main_postcard_pane_g2

0x2db1,	// (0x00011ca9) main_postcard_pane_g3_ParamLimits

0x2db1,	// (0x00011ca9) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001e3ab) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001e3ab) main_postcard_pane_g

0x2dc8,	// (0x00011cc0) main_postcard_pane_g4

0xbf70,	// (0x0001ae68) smil_status_volume_pane_g2

0x2e0b,	// (0x00011d03) postcard_pane_ParamLimits

0x2e0b,	// (0x00011d03) postcard_pane

0xac26,	// (0x00019b1e) postcard_pane_g1_ParamLimits

0xac26,	// (0x00019b1e) postcard_pane_g1

0x2e4d,	// (0x00011d45) postcard_pane_g2_ParamLimits

0x2e4d,	// (0x00011d45) postcard_pane_g2

0x2e59,	// (0x00011d51) postcard_pane_g3_ParamLimits

0x2e59,	// (0x00011d51) postcard_pane_g3

0xac34,	// (0x00019b2c) postcard_pane_g4_ParamLimits

0xac34,	// (0x00019b2c) postcard_pane_g4

0x2e65,	// (0x00011d5d) postcard_pane_g5_ParamLimits

0x2e65,	// (0x00011d5d) postcard_pane_g5

0x2e7a,	// (0x00011d72) postcard_pane_g6_ParamLimits

0x2e7a,	// (0x00011d72) postcard_pane_g6

0xac26,	// (0x00019b1e) postcard_pane_g7_ParamLimits

0xac26,	// (0x00019b1e) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001e3b8) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001e3b8) postcard_pane_g

0x2e8e,	// (0x00011d86) main_mp2_pane_g1_ParamLimits

0x2e8e,	// (0x00011d86) main_mp2_pane_g1

0x2e9a,	// (0x00011d92) main_mp2_pane_g2_ParamLimits

0x2e9a,	// (0x00011d92) main_mp2_pane_g2

0x2ea6,	// (0x00011d9e) main_mp2_pane_g3_ParamLimits

0x2ea6,	// (0x00011d9e) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001e3c7) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001e3c7) main_mp2_pane_g

0x2eb2,	// (0x00011daa) main_mp2_pane_t1_ParamLimits

0x2eb2,	// (0x00011daa) main_mp2_pane_t1

0x2ec7,	// (0x00011dbf) main_mp2_pane_t2_ParamLimits

0x2ec7,	// (0x00011dbf) main_mp2_pane_t2

0x2ed9,	// (0x00011dd1) main_mp2_pane_t3_ParamLimits

0x2ed9,	// (0x00011dd1) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001e3ce) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001e3ce) main_mp2_pane_t

0xac42,	// (0x00019b3a) pec_content_pane_ParamLimits

0xac42,	// (0x00019b3a) pec_content_pane

0xa050,	// (0x00018f48) scroll_pane_cp015

0xac54,	// (0x00019b4c) pec_attribute_pane_ParamLimits

0xac54,	// (0x00019b4c) pec_attribute_pane

0x2eeb,	// (0x00011de3) pec_content_pane_g1_ParamLimits

0x2eeb,	// (0x00011de3) pec_content_pane_g1

0xac64,	// (0x00019b5c) pec_content_pane_t1_ParamLimits

0xac64,	// (0x00019b5c) pec_content_pane_t1

0xac76,	// (0x00019b6e) pec_content_pane_t2_ParamLimits

0xac76,	// (0x00019b6e) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001e3d5) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001e3d5) pec_content_pane_t

0x2ef7,	// (0x00011def) list_single_graphic_pane_cp01_ParamLimits

0x2ef7,	// (0x00011def) list_single_graphic_pane_cp01

0x9b85,	// (0x00018a7d) bg_popup_sub_pane_cp04

0xac88,	// (0x00019b80) popup_mup_playback_window_g1

0xac94,	// (0x00019b8c) popup_mup_playback_window_t1

0xaca9,	// (0x00019ba1) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001e3da) popup_mup_playback_window_t

0xace0,	// (0x00019bd8) main_image_pane_g1_ParamLimits

0xace0,	// (0x00019bd8) main_image_pane_g1

0xad23,	// (0x00019c1b) scroll_pane_cp018_ParamLimits

0xad23,	// (0x00019c1b) scroll_pane_cp018

0xad3b,	// (0x00019c33) scroll_pane_cp016_ParamLimits

0xad3b,	// (0x00019c33) scroll_pane_cp016

0x2fc4,	// (0x00011ebc) smil2_image_pane_ParamLimits

0x2fc4,	// (0x00011ebc) smil2_image_pane

0x2ff4,	// (0x00011eec) smil2_root_pane_ParamLimits

0x2ff4,	// (0x00011eec) smil2_root_pane

0x302c,	// (0x00011f24) smil2_text_pane_ParamLimits

0x302c,	// (0x00011f24) smil2_text_pane

0x992a,	// (0x00018822) bg_list_pane_cp06

0xad77,	// (0x00019c6f) grid_radio_pane

0x992a,	// (0x00018822) bg_popup_window_pane_cp06

0xad7f,	// (0x00019c77) main_fmradio_pane_t1

0xa63a,	// (0x00019532) heading_pane_cp04

0xad8d,	// (0x00019c85) main_fmradio_pane_t2

0xbd52,	// (0x0001ac4a) popup_cale_lunar_info_window_g1

0xad9b,	// (0x00019c93) main_fmradio_pane_t3

0xbd5a,	// (0x0001ac52) popup_cale_lunar_info_window_g2

0xada9,	// (0x00019ca1) main_fmradio_pane_t4

0x0001,

0xadb7,	// (0x00019caf) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0001e4b5) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001e3ef) main_fmradio_pane_t

0xadc5,	// (0x00019cbd) wait_bar_pane_cp03

0xadcd,	// (0x00019cc5) cell_fmradio_pane_ParamLimits

0xadcd,	// (0x00019cc5) cell_fmradio_pane

0xac26,	// (0x00019b1e) cell_fmradio_pane_g1_ParamLimits

0xac26,	// (0x00019b1e) cell_fmradio_pane_g1

0x992a,	// (0x00018822) grid_highlight_pane_cp011

0xade0,	// (0x00019cd8) poc_content_pane_ParamLimits

0xade0,	// (0x00019cd8) poc_content_pane

0xadf2,	// (0x00019cea) scroll_pane_cp019

0x30ac,	// (0x00011fa4) popup_call_poc_act_window_ParamLimits

0x30ac,	// (0x00011fa4) popup_call_poc_act_window

0x30d0,	// (0x00011fc8) popup_call_poc_inact_window_ParamLimits

0x30d0,	// (0x00011fc8) popup_call_poc_inact_window

0xf594,	// (0x0001e48c) bg_popup_call_poc_act_pane_g

0xbcca,	// (0x0001abc2) bg_popup_call_poc_inact_pane_g1

0xbcd2,	// (0x0001abca) bg_popup_call_poc_inact_pane_g2

0xadfa,	// (0x00019cf2) popup_call_poc_act_window_g2

0xbcda,	// (0x0001abd2) bg_popup_call_poc_inact_pane_g3

0xbce2,	// (0x0001abda) bg_popup_call_poc_inact_pane_g4

0xbcea,	// (0x0001abe2) bg_popup_call_poc_inact_pane_g5

0xae02,	// (0x00019cfa) popup_call_poc_act_window_t1_ParamLimits

0xae02,	// (0x00019cfa) popup_call_poc_act_window_t1

0xae2a,	// (0x00019d22) popup_call_poc_act_window_t2_ParamLimits

0xae2a,	// (0x00019d22) popup_call_poc_act_window_t2

0xae52,	// (0x00019d4a) popup_call_poc_act_window_t3_ParamLimits

0xae52,	// (0x00019d4a) popup_call_poc_act_window_t3

0xae7a,	// (0x00019d72) popup_call_poc_act_window_t4_ParamLimits

0xae7a,	// (0x00019d72) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001e3fa) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001e3fa) popup_call_poc_act_window_t

0xbcf2,	// (0x0001abea) bg_popup_call_poc_inact_pane_g6

0xbcfa,	// (0x0001abf2) bg_popup_call_poc_inact_pane_g7

0xbd02,	// (0x0001abfa) bg_popup_call_poc_inact_pane_g8

0xae8c,	// (0x00019d84) popup_call_poc_inact_window_g2

0xbd0a,	// (0x0001ac02) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0001e479) bg_popup_call_poc_inact_pane_g

0xae94,	// (0x00019d8c) popup_call_poc_inact_window_t1_ParamLimits

0xae94,	// (0x00019d8c) popup_call_poc_inact_window_t1

0xaea9,	// (0x00019da1) popup_call_poc_inact_window_t2_ParamLimits

0xaea9,	// (0x00019da1) popup_call_poc_inact_window_t2

0xaebe,	// (0x00019db6) popup_call_poc_inact_window_t3_ParamLimits

0xaebe,	// (0x00019db6) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001e403) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001e403) popup_call_poc_inact_window_t

0xbee3,	// (0x0001addb) context_pane_ParamLimits

0x38ff,	// (0x000127f7) signal_pane_ParamLimits

0x9e9d,	// (0x00018d95) main_call2_pane

0xbebc,	// (0x0001adb4) popup_phob_thumbnail2_window_ParamLimits

0xbebc,	// (0x0001adb4) popup_phob_thumbnail2_window

0xabd6,	// (0x00019ace) aid_hotspot_pointer_arrow_pane

0xabde,	// (0x00019ad6) aid_hotspot_pointer_hand_pane

0x3419,	// (0x00012311) phob_pre_status_pane_g5

0x0fa9,	// (0x0000fea1) cams_zoom_pane_ParamLimits

0x0fb8,	// (0x0000feb0) image_vga_pane_ParamLimits

0x0fd2,	// (0x0000feca) main_camera_pane_g1_ParamLimits

0x0fe4,	// (0x0000fedc) main_camera_pane_g2_ParamLimits

0x0ff4,	// (0x0000feec) main_camera_pane_g3_ParamLimits

0x1004,	// (0x0000fefc) main_camera_pane_g4_ParamLimits

0x1014,	// (0x0000ff0c) main_camera_pane_g5_ParamLimits

0x1024,	// (0x0000ff1c) main_camera_pane_g6_ParamLimits

0x1036,	// (0x0000ff2e) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001e102) main_camera_pane_g_ParamLimits

0x1046,	// (0x0000ff3e) main_camera_pane_t1_ParamLimits

0x105c,	// (0x0000ff54) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001e113) main_camera_pane_t_ParamLimits

0x9b85,	// (0x00018a7d) bg_popup_preview_window_pane_cp01_ParamLimits

0x9b85,	// (0x00018a7d) bg_popup_preview_window_pane_cp01

0xaed3,	// (0x00019dcb) popup_phob_thumbnail2_window_g1_ParamLimits

0xaed3,	// (0x00019dcb) popup_phob_thumbnail2_window_g1

0x992a,	// (0x00018822) call2_cli_visual_pane

0x3104,	// (0x00011ffc) popup_call2_audio_conf_window_ParamLimits

0x3104,	// (0x00011ffc) popup_call2_audio_conf_window

0x3124,	// (0x0001201c) popup_call2_audio_first_window_ParamLimits

0x3124,	// (0x0001201c) popup_call2_audio_first_window

0x31ba,	// (0x000120b2) popup_call2_audio_in_window_ParamLimits

0x31ba,	// (0x000120b2) popup_call2_audio_in_window

0x3202,	// (0x000120fa) popup_call2_audio_out_window_ParamLimits

0x3202,	// (0x000120fa) popup_call2_audio_out_window

0x326c,	// (0x00012164) popup_call2_audio_second_window_ParamLimits

0x326c,	// (0x00012164) popup_call2_audio_second_window

0x32d2,	// (0x000121ca) popup_call2_audio_wait_window_ParamLimits

0x32d2,	// (0x000121ca) popup_call2_audio_wait_window

0x992a,	// (0x00018822) bg_popup_call2_act_pane_cp03

0x9b67,	// (0x00018a5f) list_conf_pane_cp

0xaedf,	// (0x00019dd7) popup_call2_audio_conf_window_t1

0xa697,	// (0x0001958f) list_single_graphic_popup_conf2_pane_ParamLimits

0xa697,	// (0x0001958f) list_single_graphic_popup_conf2_pane

0xa6aa,	// (0x000195a2) list_highlight_pane_cp04

0xaeed,	// (0x00019de5) list_single_graphic_popup_conf2_pane_g1

0xa6bb,	// (0x000195b3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001e40a) list_single_graphic_popup_conf2_pane_g

0xaef7,	// (0x00019def) list_single_graphic_popup_conf2_pane_t1

0xaf05,	// (0x00019dfd) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf05,	// (0x00019dfd) bg_popup_call2_act_pane_cp01

0xaf8f,	// (0x00019e87) call_type_pane_cp05_ParamLimits

0xaf8f,	// (0x00019e87) call_type_pane_cp05

0xafe3,	// (0x00019edb) popup_call2_audio_second_window_g1_ParamLimits

0xafe3,	// (0x00019edb) popup_call2_audio_second_window_g1

0xb037,	// (0x00019f2f) popup_call2_audio_second_window_g2_ParamLimits

0xb037,	// (0x00019f2f) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001e40f) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001e40f) popup_call2_audio_second_window_g

0xb09c,	// (0x00019f94) popup_call2_audio_second_window_t1_ParamLimits

0xb09c,	// (0x00019f94) popup_call2_audio_second_window_t1

0xb157,	// (0x0001a04f) popup_call2_audio_second_window_t2_ParamLimits

0xb157,	// (0x0001a04f) popup_call2_audio_second_window_t2

0xb1aa,	// (0x0001a0a2) popup_call2_audio_second_window_t3_ParamLimits

0xb1aa,	// (0x0001a0a2) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001e416) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001e416) popup_call2_audio_second_window_t

0x992a,	// (0x00018822) bg_popup_call2_in_pane_cp02

0x9934,	// (0x0001882c) call_type_pane_cp04

0x993c,	// (0x00018834) popup_call2_audio_wait_window_g1

0x9944,	// (0x0001883c) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001dff1) popup_call2_audio_wait_window_g

0x994c,	// (0x00018844) popup_call2_audio_wait_window_t3

0xb29d,	// (0x0001a195) bg_popup_call2_act_pane_ParamLimits

0xb29d,	// (0x0001a195) bg_popup_call2_act_pane

0xb35d,	// (0x0001a255) call_type_pane_cp03_ParamLimits

0xb35d,	// (0x0001a255) call_type_pane_cp03

0xb3c1,	// (0x0001a2b9) popup_call2_audio_first_window_g1_ParamLimits

0xb3c1,	// (0x0001a2b9) popup_call2_audio_first_window_g1

0xb431,	// (0x0001a329) popup_call2_audio_first_window_g2_ParamLimits

0xb431,	// (0x0001a329) popup_call2_audio_first_window_g2

0xaa77,	// (0x0001996f) popup_call2_audio_first_window_g3_ParamLimits

0xaa77,	// (0x0001996f) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001e41f) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001e41f) popup_call2_audio_first_window_g

0xb50f,	// (0x0001a407) popup_call2_audio_first_window_t1_ParamLimits

0xb50f,	// (0x0001a407) popup_call2_audio_first_window_t1

0xb612,	// (0x0001a50a) popup_call2_audio_first_window_t4_ParamLimits

0xb612,	// (0x0001a50a) popup_call2_audio_first_window_t4

0xb6f5,	// (0x0001a5ed) popup_call2_audio_first_window_t5_ParamLimits

0xb6f5,	// (0x0001a5ed) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001e42a) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001e42a) popup_call2_audio_first_window_t

0x9b7d,	// (0x00018a75) bg_popup_call2_act_pane_g1

0xbd62,	// (0x0001ac5a) popup_cale_lunar_info_window_t1

0xbd70,	// (0x0001ac68) popup_cale_lunar_info_window_t2

0xbd7e,	// (0x0001ac76) popup_cale_lunar_info_window_t3

0x992a,	// (0x00018822) bg_popup_call2_bubble_pane

0xb7f6,	// (0x0001a6ee) bg_popup_call2_in_pane_cp01_ParamLimits

0xb7f6,	// (0x0001a6ee) bg_popup_call2_in_pane_cp01

0x9606,	// (0x000184fe) call_type_pane_cp02

0xb83e,	// (0x0001a736) popup_call2_audio_out_window_g1_ParamLimits

0xb83e,	// (0x0001a736) popup_call2_audio_out_window_g1

0xb86a,	// (0x0001a762) popup_call2_audio_out_window_g2_ParamLimits

0xb86a,	// (0x0001a762) popup_call2_audio_out_window_g2

0xb892,	// (0x0001a78a) popup_call2_audio_out_window_g3_ParamLimits

0xb892,	// (0x0001a78a) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001e433) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001e433) popup_call2_audio_out_window_g

0xb8cd,	// (0x0001a7c5) popup_call2_audio_out_window_t1_ParamLimits

0xb8cd,	// (0x0001a7c5) popup_call2_audio_out_window_t1

0xb92c,	// (0x0001a824) popup_call2_audio_out_window_t2_ParamLimits

0xb92c,	// (0x0001a824) popup_call2_audio_out_window_t2

0xb980,	// (0x0001a878) popup_call2_audio_out_window_t3_ParamLimits

0xb980,	// (0x0001a878) popup_call2_audio_out_window_t3

0xb996,	// (0x0001a88e) popup_call2_audio_out_window_t4_ParamLimits

0xb996,	// (0x0001a88e) popup_call2_audio_out_window_t4

0xb9ac,	// (0x0001a8a4) popup_call2_audio_out_window_t5_ParamLimits

0xb9ac,	// (0x0001a8a4) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001e43c) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001e43c) popup_call2_audio_out_window_t

0xba10,	// (0x0001a908) bg_popup_call2_in_pane_ParamLimits

0xba10,	// (0x0001a908) bg_popup_call2_in_pane

0xba6c,	// (0x0001a964) popup_call2_audio_in_window_g1_ParamLimits

0xba6c,	// (0x0001a964) popup_call2_audio_in_window_g1

0xbaa4,	// (0x0001a99c) popup_call2_audio_in_window_g2_ParamLimits

0xbaa4,	// (0x0001a99c) popup_call2_audio_in_window_g2

0xbadc,	// (0x0001a9d4) popup_call2_audio_in_window_g3_ParamLimits

0xbadc,	// (0x0001a9d4) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001e449) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001e449) popup_call2_audio_in_window_g

0xbb34,	// (0x0001aa2c) popup_call2_audio_in_window_t1_ParamLimits

0xbb34,	// (0x0001aa2c) popup_call2_audio_in_window_t1

0xbbb4,	// (0x0001aaac) popup_call2_audio_in_window_t2_ParamLimits

0xbbb4,	// (0x0001aaac) popup_call2_audio_in_window_t2

0xbc34,	// (0x0001ab2c) popup_call2_audio_in_window_t3_ParamLimits

0xbc34,	// (0x0001ab2c) popup_call2_audio_in_window_t3

0xbc4e,	// (0x0001ab46) popup_call2_audio_in_window_t4_ParamLimits

0xbc4e,	// (0x0001ab46) popup_call2_audio_in_window_t4

0xbc60,	// (0x0001ab58) popup_call2_audio_in_window_t5_ParamLimits

0xbc60,	// (0x0001ab58) popup_call2_audio_in_window_t5

0xbc75,	// (0x0001ab6d) popup_call2_audio_in_window_t6_ParamLimits

0xbc75,	// (0x0001ab6d) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001e452) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001e452) popup_call2_audio_in_window_t

0x9b7d,	// (0x00018a75) bg_popup_call2_in_pane_g1

0xbd8c,	// (0x0001ac84) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0001e4ba) popup_cale_lunar_info_window_t

0x9b85,	// (0x00018a7d) bg_popup_call2_rect_pane_ParamLimits

0x9b85,	// (0x00018a7d) bg_popup_call2_rect_pane

0x992a,	// (0x00018822) call2_cli_visual_graphic_pane

0x992a,	// (0x00018822) call2_cli_visual_text_pane

0xbf83,	// (0x0001ae7b) smil_status_volume_pane_g3

0x0002,

0x9ce5,	// (0x00018bdd) call2_cli_visual_graphic_pane_g1

0x9ce5,	// (0x00018bdd) call2_cli_visual_graphic_pane_g2

0x9ce5,	// (0x00018bdd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001e45f) call2_cli_visual_graphic_pane_g

0xbc8a,	// (0x0001ab82) bg_popup_call2_rect_pane_g1

0x9d71,	// (0x00018c69) bg_popup_call2_rect_pane_g2

0xbc92,	// (0x0001ab8a) bg_popup_call2_rect_pane_g3

0xbc9a,	// (0x0001ab92) bg_popup_call2_rect_pane_g4

0xbca2,	// (0x0001ab9a) bg_popup_call2_rect_pane_g5

0xbcaa,	// (0x0001aba2) bg_popup_call2_rect_pane_g6

0xbcb2,	// (0x0001abaa) bg_popup_call2_rect_pane_g7

0xbcba,	// (0x0001abb2) bg_popup_call2_rect_pane_g8

0xbcc2,	// (0x0001abba) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e466) bg_popup_call2_rect_pane_g

0xbcca,	// (0x0001abc2) bg_popup_call2_bubble_pane_g1

0xbcd2,	// (0x0001abca) bg_popup_call2_bubble_pane_g2

0xbcda,	// (0x0001abd2) bg_popup_call2_bubble_pane_g3

0xbce2,	// (0x0001abda) bg_popup_call2_bubble_pane_g4

0xbcea,	// (0x0001abe2) bg_popup_call2_bubble_pane_g5

0xbcf2,	// (0x0001abea) bg_popup_call2_bubble_pane_g6

0xbcfa,	// (0x0001abf2) bg_popup_call2_bubble_pane_g7

0xbd02,	// (0x0001abfa) bg_popup_call2_bubble_pane_g8

0xbd0a,	// (0x0001ac02) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001e479) bg_popup_call2_bubble_pane_g

0x092b,	// (0x0000f823) aid_cale_week_size_cell_pane

0x1072,	// (0x0000ff6a) aid_cams_cif_uncrop_pane_ParamLimits

0x1072,	// (0x0000ff6a) aid_cams_cif_uncrop_pane

0x1222,	// (0x0001011a) aid_cams_size_cell_ParamLimits

0x1222,	// (0x0001011a) aid_cams_size_cell

0x1236,	// (0x0001012e) grid_cams_pane_ParamLimits

0x1250,	// (0x00010148) linegrid_cams_pane_ParamLimits

0x144e,	// (0x00010346) call_video_pane_t1

0x146c,	// (0x00010364) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001e166) call_video_pane_t

0x1898,	// (0x00010790) aid_cale_month_size_cell_pane_ParamLimits

0x1898,	// (0x00010790) aid_cale_month_size_cell_pane

0xf60b,	// (0x0001e503) smil_status_volume_pane_g

0xbf90,	// (0x0001ae88) volume_smil_pane_ParamLimits

0x94ab,	// (0x000183a3) aid_popup2_width_pane

0x0885,	// (0x0000f77d) cell_qdial_pane_g4_ParamLimits

0x0885,	// (0x0000f77d) cell_qdial_pane_g4

0x277f,	// (0x00011677) aid_blid_cardinal_pane_ParamLimits

0x278b,	// (0x00011683) aid_blid_destination_pane_ParamLimits

0x278b,	// (0x00011683) aid_blid_destination_pane

0x9b85,	// (0x00018a7d) bg_popup_call_poc_act_pane_ParamLimits

0x9b85,	// (0x00018a7d) bg_popup_call_poc_act_pane

0x9b85,	// (0x00018a7d) bg_popup_call_poc_inact_pane_ParamLimits

0x9b85,	// (0x00018a7d) bg_popup_call_poc_inact_pane

0xbd12,	// (0x0001ac0a) bg_popup_call_poc_act_pane_g1

0xbd1a,	// (0x0001ac12) bg_popup_call_poc_act_pane_g2

0xbd22,	// (0x0001ac1a) bg_popup_call_poc_act_pane_g3

0xbce2,	// (0x0001abda) bg_popup_call_poc_act_pane_g4

0xbcea,	// (0x0001abe2) bg_popup_call_poc_act_pane_g5

0xbd2a,	// (0x0001ac22) bg_popup_call_poc_act_pane_g6

0xbcfa,	// (0x0001abf2) bg_popup_call_poc_act_pane_g7

0xbd32,	// (0x0001ac2a) bg_popup_call_poc_act_pane_g8

0x992a,	// (0x00018822) main_usb_pane

0xbe97,	// (0x0001ad8f) popup_cale_lunar_info_window

0x1744,	// (0x0001063c) im_reading_pane_t1_ParamLimits

0x9fa8,	// (0x00018ea0) list_im_pane_ParamLimits

0x9fb9,	// (0x00018eb1) scroll_pane_cp07_ParamLimits

0x992a,	// (0x00018822) grid_highlight_pane_cp012

0x9b85,	// (0x00018a7d) mup_scale_pane_ParamLimits

0xac26,	// (0x00019b1e) main_usb_pane_g1_ParamLimits

0xac26,	// (0x00019b1e) main_usb_pane_g1

0x332e,	// (0x00012226) main_usb_pane_g2_ParamLimits

0x332e,	// (0x00012226) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0001e4a3) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0001e4a3) main_usb_pane_g

0x3344,	// (0x0001223c) main_usb_pane_t1_ParamLimits

0x3344,	// (0x0001223c) main_usb_pane_t1

0x3356,	// (0x0001224e) main_usb_pane_t2_ParamLimits

0x3356,	// (0x0001224e) main_usb_pane_t2

0x3368,	// (0x00012260) main_usb_pane_t3_ParamLimits

0x3368,	// (0x00012260) main_usb_pane_t3

0x337a,	// (0x00012272) main_usb_pane_t4_ParamLimits

0x337a,	// (0x00012272) main_usb_pane_t4

0x338c,	// (0x00012284) main_usb_pane_t5_ParamLimits

0x338c,	// (0x00012284) main_usb_pane_t5

0x339e,	// (0x00012296) main_usb_pane_t6_ParamLimits

0x339e,	// (0x00012296) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0001e4a8) main_usb_pane_t_ParamLimits

0x272e,	// (0x00011626) aid_text_placing

0x2737,	// (0x0001162f) main_location2_pane_t1_ParamLimits

0x2749,	// (0x00011641) main_location2_pane_t2_ParamLimits

0x275b,	// (0x00011653) main_location2_pane_t3_ParamLimits

0x276d,	// (0x00011665) main_location2_pane_t4_ParamLimits

0x276d,	// (0x00011665) main_location2_pane_t4

0xf3cf,	// (0x0001e2c7) main_location2_pane_t_ParamLimits

0x9bc1,	// (0x00018ab9) find_pinb_pane_g2_ParamLimits

0x9bc1,	// (0x00018ab9) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0001e017) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0001e017) find_pinb_pane_g

0x9bcd,	// (0x00018ac5) find_pinb_pane_t1_ParamLimits

0x9bdf,	// (0x00018ad7) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0001e01c) find_pinb_pane_t_ParamLimits

0x992a,	// (0x00018822) main_call3_pane

0x1d57,	// (0x00010c4f) cale_month_day_heading_pane_t1_ParamLimits

0x1ddd,	// (0x00010cd5) cale_month_day_heading_pane_t2_ParamLimits

0x1e6e,	// (0x00010d66) cale_month_day_heading_pane_t3_ParamLimits

0x1eff,	// (0x00010df7) cale_month_day_heading_pane_t4_ParamLimits

0x1f94,	// (0x00010e8c) cale_month_day_heading_pane_t5_ParamLimits

0x2035,	// (0x00010f2d) cale_month_day_heading_pane_t6_ParamLimits

0x20d6,	// (0x00010fce) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001e19e) cale_month_day_heading_pane_t_ParamLimits

0xa20f,	// (0x00019107) smil_status_volume_pane

0x2e29,	// (0x00011d21) postcard_address_pane_ParamLimits

0x2e29,	// (0x00011d21) postcard_address_pane

0x2e3b,	// (0x00011d33) postcard_message_pane_ParamLimits

0x2e3b,	// (0x00011d33) postcard_message_pane

0x330c,	// (0x00012204) call2_cli_visual_pane_t1_ParamLimits

0x330c,	// (0x00012204) call2_cli_visual_pane_t1

0x3b2c,	// (0x00012a24) postcard_message_pane_t1_ParamLimits

0x3b2c,	// (0x00012a24) postcard_message_pane_t1

0x3b15,	// (0x00012a0d) postcard_address_pane_t1_ParamLimits

0x3b15,	// (0x00012a0d) postcard_address_pane_t1

0x3b01,	// (0x000129f9) popup_call3_audio_in_window_ParamLimits

0x3b01,	// (0x000129f9) popup_call3_audio_in_window

0x398c,	// (0x00012884) bg_popup_call3_in_pane_ParamLimits

0x398c,	// (0x00012884) bg_popup_call3_in_pane

0x3a02,	// (0x000128fa) popup_call3_audio_in_window_g1_ParamLimits

0x3a02,	// (0x000128fa) popup_call3_audio_in_window_g1

0x3a22,	// (0x0001291a) popup_call3_audio_in_window_g2_ParamLimits

0x3a22,	// (0x0001291a) popup_call3_audio_in_window_g2

0x3a42,	// (0x0001293a) popup_call3_audio_in_window_g3_ParamLimits

0x3a42,	// (0x0001293a) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0001e50a) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0001e50a) popup_call3_audio_in_window_g

0x3a73,	// (0x0001296b) popup_call3_audio_in_window_t1_ParamLimits

0x3a73,	// (0x0001296b) popup_call3_audio_in_window_t1

0x3ab1,	// (0x000129a9) popup_call3_audio_in_window_t2_ParamLimits

0x3ab1,	// (0x000129a9) popup_call3_audio_in_window_t2

0x3aef,	// (0x000129e7) popup_call3_audio_in_window_t3_ParamLimits

0x3aef,	// (0x000129e7) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0001e513) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0001e513) popup_call3_audio_in_window_t

0x9e9d,	// (0x00018d95) bg_popup_call3_rect_pane

0xbc8a,	// (0x0001ab82) bg_popup_call3_rect_pane_g1

0x9d71,	// (0x00018c69) bg_popup_call3_rect_pane_g2

0xbc92,	// (0x0001ab8a) bg_popup_call3_rect_pane_g3

0xbc9a,	// (0x0001ab92) bg_popup_call3_rect_pane_g4

0xbca2,	// (0x0001ab9a) bg_popup_call3_rect_pane_g5

0xbcaa,	// (0x0001aba2) bg_popup_call3_rect_pane_g6

0xbcb2,	// (0x0001abaa) bg_popup_call3_rect_pane_g7

0x2a6f,	// (0x00011967) mup_visualizer_osc_pane

0xaa85,	// (0x0001997d) mup_visualizer_spec_pane

0x39bc,	// (0x000128b4) call3_video_qcif_pane_ParamLimits

0x39bc,	// (0x000128b4) call3_video_qcif_pane

0x39cf,	// (0x000128c7) call3_video_qcif_uncrop_pane_ParamLimits

0x39cf,	// (0x000128c7) call3_video_qcif_uncrop_pane

0x39dd,	// (0x000128d5) call3_video_subqcif_pane_ParamLimits

0x39dd,	// (0x000128d5) call3_video_subqcif_pane

0x39f1,	// (0x000128e9) call3_video_subqcif_uncrop_pane_ParamLimits

0x39f1,	// (0x000128e9) call3_video_subqcif_uncrop_pane

0x3a62,	// (0x0001295a) popup_call3_audio_in_window_g4_ParamLimits

0x3a62,	// (0x0001295a) popup_call3_audio_in_window_g4

0x397b,	// (0x00012873) mup_spec_half_pane

0x3984,	// (0x0001287c) mup_spec_half_pane_cp

0xbf43,	// (0x0001ae3b) mup_osc_middle_pane

0xbf4c,	// (0x0001ae44) mup_visualizer_osc_pane_g1

0x395b,	// (0x00012853) mup_spec_bar_pane_ParamLimits

0x395b,	// (0x00012853) mup_spec_bar_pane

0xbf30,	// (0x0001ae28) mup_spec_bar_pane_g1

0xbf3a,	// (0x0001ae32) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e4fe) mup_spec_bar_pane_g

0x092b,	// (0x0000f823) aid_cale_week_size_cell_pane_ParamLimits

0x0945,	// (0x0000f83d) bg_cale_heading_pane_ParamLimits

0x9df6,	// (0x00018cee) bg_cale_pane_cp01_ParamLimits

0x095d,	// (0x0000f855) cale_week_corner_pane_ParamLimits

0x097c,	// (0x0000f874) cale_week_day_heading_pane_ParamLimits

0x0999,	// (0x0000f891) cale_week_scroll_pane_g1_ParamLimits

0x09ac,	// (0x0000f8a4) cale_week_scroll_pane_g2_ParamLimits

0x09c4,	// (0x0000f8bc) cale_week_scroll_pane_g3_ParamLimits

0x09dc,	// (0x0000f8d4) cale_week_scroll_pane_g4_ParamLimits

0x09f4,	// (0x0000f8ec) cale_week_scroll_pane_g5_ParamLimits

0x0a14,	// (0x0000f90c) cale_week_scroll_pane_g6_ParamLimits

0x0a34,	// (0x0000f92c) cale_week_scroll_pane_g7_ParamLimits

0x0a54,	// (0x0000f94c) cale_week_scroll_pane_g8_ParamLimits

0x0a78,	// (0x0000f970) cale_week_scroll_pane_g9_ParamLimits

0x0a90,	// (0x0000f988) cale_week_scroll_pane_g10_ParamLimits

0x0aa8,	// (0x0000f9a0) cale_week_scroll_pane_g11_ParamLimits

0x0ac0,	// (0x0000f9b8) cale_week_scroll_pane_g12_ParamLimits

0x0ad8,	// (0x0000f9d0) cale_week_scroll_pane_g13_ParamLimits

0x0ad8,	// (0x0000f9d0) cale_week_scroll_pane_g14_ParamLimits

0x0ad8,	// (0x0000f9d0) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0001e0a8) cale_week_scroll_pane_g_ParamLimits

0x0b14,	// (0x0000fa0c) cale_week_time_pane_ParamLimits

0x0b38,	// (0x0000fa30) grid_cale_week_pane_ParamLimits

0x9e13,	// (0x00018d0b) listscroll_cale_week_pane_t1

0x9e25,	// (0x00018d1d) scroll_pane_cp08_ParamLimits

0x18ed,	// (0x000107e5) cale_month_corner_pane_ParamLimits

0xa1d9,	// (0x000190d1) cale_month_pane_t1

0x1cf5,	// (0x00010bed) cale_month_week_pane_ParamLimits

0x258a,	// (0x00011482) popup_call_status_window_g1_ParamLimits

0x259e,	// (0x00011496) popup_call_status_window_g2_ParamLimits

0x25b2,	// (0x000114aa) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001e24e) popup_call_status_window_g_ParamLimits

0xa5b7,	// (0x000194af) aid_call2_pane

0x2cd6,	// (0x00011bce) msg_header_pane_g1

0x2e29,	// (0x00011d21) postcard_address2_pane_ParamLimits

0x2e29,	// (0x00011d21) postcard_address2_pane

0x2e3b,	// (0x00011d33) postcard_message2_pane_ParamLimits

0x2e3b,	// (0x00011d33) postcard_message2_pane

0x390d,	// (0x00012805) message2_row_pane_ParamLimits

0x390d,	// (0x00012805) message2_row_pane

0x3929,	// (0x00012821) address2_row_pane_ParamLimits

0x3929,	// (0x00012821) address2_row_pane

0xbefe,	// (0x0001adf6) postcard_message2_row_pane_g1

0xbf06,	// (0x0001adfe) postcard_message2_row_pane_t1

0xbefe,	// (0x0001adf6) address2_row_pane_g1

0xbf06,	// (0x0001adfe) address2_row_pane_t1

0x0f2b,	// (0x0000fe23) aid_size_cell_vorec

0x992a,	// (0x00018822) main_rss_pane

0x393c,	// (0x00012834) rss_list_single_pane_ParamLimits

0x393c,	// (0x00012834) rss_list_single_pane

0xbf14,	// (0x0001ae0c) rss_list_single_pane_t1

0xbf22,	// (0x0001ae1a) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0001e4f9) rss_list_single_pane_t

0x992a,	// (0x00018822) main_camera2_pane

0x992a,	// (0x00018822) main_video2_pane

0x3ba5,	// (0x00012a9d) cams_zoom_pane_cp2_ParamLimits

0x3ba5,	// (0x00012a9d) cams_zoom_pane_cp2

0x3bc5,	// (0x00012abd) image2_vga_pane_ParamLimits

0x3bc5,	// (0x00012abd) image2_vga_pane

0x3c16,	// (0x00012b0e) main_camera2_pane_g1_ParamLimits

0x3c16,	// (0x00012b0e) main_camera2_pane_g1

0x3c36,	// (0x00012b2e) main_camera2_pane_g2_ParamLimits

0x3c36,	// (0x00012b2e) main_camera2_pane_g2

0x3c56,	// (0x00012b4e) main_camera2_pane_g3_ParamLimits

0x3c56,	// (0x00012b4e) main_camera2_pane_g3

0x3c76,	// (0x00012b6e) main_camera2_pane_g4_ParamLimits

0x3c76,	// (0x00012b6e) main_camera2_pane_g4

0x3c96,	// (0x00012b8e) main_camera2_pane_g5_ParamLimits

0x3c96,	// (0x00012b8e) main_camera2_pane_g5

0x3cb6,	// (0x00012bae) main_camera2_pane_g6_ParamLimits

0x3cb6,	// (0x00012bae) main_camera2_pane_g6

0x3cd6,	// (0x00012bce) main_camera2_pane_g7_ParamLimits

0x3cd6,	// (0x00012bce) main_camera2_pane_g7

0x3cf6,	// (0x00012bee) main_camera2_pane_g8_ParamLimits

0x3cf6,	// (0x00012bee) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0001e51a) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0001e51a) main_camera2_pane_g

0x3d36,	// (0x00012c2e) main_camera2_pane_t1_ParamLimits

0x3d36,	// (0x00012c2e) main_camera2_pane_t1

0x3d6b,	// (0x00012c63) main_camera2_pane_t2_ParamLimits

0x3d6b,	// (0x00012c63) main_camera2_pane_t2

0x3d91,	// (0x00012c89) main_camera2_pane_t3_ParamLimits

0x3d91,	// (0x00012c89) main_camera2_pane_t3

0x3def,	// (0x00012ce7) main_camera2_pane_t4_ParamLimits

0x3def,	// (0x00012ce7) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0001e52d) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0001e52d) main_camera2_pane_t

0x3e81,	// (0x00012d79) cams_zoom_pane_cp4_ParamLimits

0x3e81,	// (0x00012d79) cams_zoom_pane_cp4

0x3e97,	// (0x00012d8f) image2_cif_pane_ParamLimits

0x3e97,	// (0x00012d8f) image2_cif_pane

0x3ec2,	// (0x00012dba) image2_subqcif_pane_ParamLimits

0x3ec2,	// (0x00012dba) image2_subqcif_pane

0x3edc,	// (0x00012dd4) main_video2_pane_g1_ParamLimits

0x3edc,	// (0x00012dd4) main_video2_pane_g1

0x3ef6,	// (0x00012dee) main_video2_pane_g2_ParamLimits

0x3ef6,	// (0x00012dee) main_video2_pane_g2

0x3f0c,	// (0x00012e04) main_video2_pane_g3_ParamLimits

0x3f0c,	// (0x00012e04) main_video2_pane_g3

0x3f22,	// (0x00012e1a) main_video2_pane_g4_ParamLimits

0x3f22,	// (0x00012e1a) main_video2_pane_g4

0x3f38,	// (0x00012e30) main_video2_pane_g5_ParamLimits

0x3f38,	// (0x00012e30) main_video2_pane_g5

0x3f4e,	// (0x00012e46) main_video2_pane_g6_ParamLimits

0x3f4e,	// (0x00012e46) main_video2_pane_g6

0x0005,

0xf644,	// (0x0001e53c) main_video2_pane_g_ParamLimits

0xf644,	// (0x0001e53c) main_video2_pane_g

0x3f68,	// (0x00012e60) main_video2_pane_t1_ParamLimits

0x3f68,	// (0x00012e60) main_video2_pane_t1

0x3f8c,	// (0x00012e84) main_video2_pane_t2_ParamLimits

0x3f8c,	// (0x00012e84) main_video2_pane_t2

0x3fda,	// (0x00012ed2) main_video2_pane_t3_ParamLimits

0x3fda,	// (0x00012ed2) main_video2_pane_t3

0x0002,

0xf651,	// (0x0001e549) main_video2_pane_t_ParamLimits

0xf651,	// (0x0001e549) main_video2_pane_t

0x3459,	// (0x00012351) call_muted_g2

0x0001,

0xf5f3,	// (0x0001e4eb) call_muted_g

0x992a,	// (0x00018822) main_mup2_pane

0x401e,	// (0x00012f16) main_mup2_pane_g1_ParamLimits

0x401e,	// (0x00012f16) main_mup2_pane_g1

0x402a,	// (0x00012f22) main_mup2_pane_g2_ParamLimits

0x402a,	// (0x00012f22) main_mup2_pane_g2

0xc0b4,	// (0x0001afac) main_mup_pane_g13_cp1

0xc0bc,	// (0x0001afb4) mup_volume_pane_cp1

0x4046,	// (0x00012f3e) main_mup2_pane_g4_ParamLimits

0x4046,	// (0x00012f3e) main_mup2_pane_g4

0x4058,	// (0x00012f50) main_mup2_pane_g5_ParamLimits

0x4058,	// (0x00012f50) main_mup2_pane_g5

0x406a,	// (0x00012f62) main_mup2_pane_g6_ParamLimits

0x406a,	// (0x00012f62) main_mup2_pane_g6

0x407c,	// (0x00012f74) main_mup2_pane_g7_ParamLimits

0x407c,	// (0x00012f74) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0001e550) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0001e550) main_mup2_pane_g

0x4094,	// (0x00012f8c) main_mup2_pane_t1_ParamLimits

0x4094,	// (0x00012f8c) main_mup2_pane_t1

0x40aa,	// (0x00012fa2) main_mup2_pane_t2_ParamLimits

0x40aa,	// (0x00012fa2) main_mup2_pane_t2

0x40c0,	// (0x00012fb8) main_mup2_pane_t3_ParamLimits

0x40c0,	// (0x00012fb8) main_mup2_pane_t3

0x40d6,	// (0x00012fce) main_mup2_pane_t4_ParamLimits

0x40d6,	// (0x00012fce) main_mup2_pane_t4

0x40ee,	// (0x00012fe6) main_mup2_pane_t5_ParamLimits

0x40ee,	// (0x00012fe6) main_mup2_pane_t5

0x4106,	// (0x00012ffe) main_mup2_pane_t6_ParamLimits

0x4106,	// (0x00012ffe) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0001e55f) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0001e55f) main_mup2_pane_t

0x4136,	// (0x0001302e) mup2_visualizer_pane_ParamLimits

0x4136,	// (0x0001302e) mup2_visualizer_pane

0x4164,	// (0x0001305c) mup_progress_pane_cp_ParamLimits

0x4164,	// (0x0001305c) mup_progress_pane_cp

0xc096,	// (0x0001af8e) mup_volume_pane_cp_ParamLimits

0xc096,	// (0x0001af8e) mup_volume_pane_cp

0x4178,	// (0x00013070) mup2_visualizer_pane_g1_ParamLimits

0x4178,	// (0x00013070) mup2_visualizer_pane_g1

0xbfd5,	// (0x0001aecd) mup2_visualizer_pane_g2_ParamLimits

0xbfd5,	// (0x0001aecd) mup2_visualizer_pane_g2

0x418f,	// (0x00013087) mup2_visualizer_pane_g3_ParamLimits

0x418f,	// (0x00013087) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0001e56c) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0001e56c) mup2_visualizer_pane_g

0xad6f,	// (0x00019c67) aid_size_cell_fmradio

0x360b,	// (0x00012503) aid_height_parent_landcape

0xa037,	// (0x00018f2f) wml_content_pane_cp

0xa03f,	// (0x00018f37) wml_tabs_pane

0xa048,	// (0x00018f40) popup_wml_miniature_window

0xa050,	// (0x00018f48) scroll_pane_cp021

0xa064,	// (0x00018f5c) wml_content_pane_comp8

0x992a,	// (0x00018822) bg_popup_sub_pane_cp05

0xbff3,	// (0x0001aeeb) popup_wml_miniature_window_g1

0xbffb,	// (0x0001aef3) wml_miniature_view_pane

0x419b,	// (0x00013093) aid_size_wml_view

0x41a3,	// (0x0001309b) wml_miniature_view_pane_g1

0x41ac,	// (0x000130a4) wml_miniature_view_pane_g2

0x41b5,	// (0x000130ad) wml_miniature_view_pane_g3

0x41bd,	// (0x000130b5) wml_miniature_view_pane_g4

0x41c5,	// (0x000130bd) wml_miniature_view_pane_g5

0x41cd,	// (0x000130c5) wml_miniature_view_pane_g6

0x41d5,	// (0x000130cd) wml_miniature_view_pane_g7

0x41dd,	// (0x000130d5) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0001e573) wml_miniature_view_pane_g

0xc003,	// (0x0001aefb) background_graphic_ParamLimits

0xc003,	// (0x0001aefb) background_graphic

0xc00f,	// (0x0001af07) wml_tabs_2_pane

0xc018,	// (0x0001af10) wml_tabs_3_pane_ParamLimits

0xc018,	// (0x0001af10) wml_tabs_3_pane

0xc02a,	// (0x0001af22) wml_tabs_4_pane_ParamLimits

0xc02a,	// (0x0001af22) wml_tabs_4_pane

0xc040,	// (0x0001af38) wml_tabs_5_pane_ParamLimits

0xc040,	// (0x0001af38) wml_tabs_5_pane

0xc05a,	// (0x0001af52) wml_tabs_pane_g2_ParamLimits

0xc05a,	// (0x0001af52) wml_tabs_pane_g2

0xc06e,	// (0x0001af66) wml_tabs_pane_g3_ParamLimits

0xc06e,	// (0x0001af66) wml_tabs_pane_g3

0x41e5,	// (0x000130dd) wml_tabs_2_active_pane_ParamLimits

0x41e5,	// (0x000130dd) wml_tabs_2_active_pane

0x41f9,	// (0x000130f1) wml_tabs_2_passive_pane_ParamLimits

0x41f9,	// (0x000130f1) wml_tabs_2_passive_pane

0x420d,	// (0x00013105) wml_tabs_3_active_pane_cp_ParamLimits

0x420d,	// (0x00013105) wml_tabs_3_active_pane_cp

0x4222,	// (0x0001311a) wml_tabs_3_passive_pane_ParamLimits

0x4222,	// (0x0001311a) wml_tabs_3_passive_pane

0x4235,	// (0x0001312d) wml_tabs_3_passive_pane_cp_ParamLimits

0x4235,	// (0x0001312d) wml_tabs_3_passive_pane_cp

0x424c,	// (0x00013144) tabs_4_active_pane

0x4254,	// (0x0001314c) tabs_4_passive_pane

0x425e,	// (0x00013156) tabs_4_passive_pane_cp

0x4266,	// (0x0001315e) tabs_4_passive_pane_cp2

0x3326,	// (0x0001221e) aid_height_text

0x2a45,	// (0x0001193d) mup_volume_cont_pane_ParamLimits

0x2a45,	// (0x0001193d) mup_volume_cont_pane

0x0509,	// (0x0000f401) aid_size_cell_pinb

0x0513,	// (0x0000f40b) aid_size_list_pinb

0x4150,	// (0x00013048) mup2_volume_cont_pane_ParamLimits

0x4150,	// (0x00013048) mup2_volume_cont_pane

0xc082,	// (0x0001af7a) mup2_volume_cont_pane_g1_ParamLimits

0xc082,	// (0x0001af7a) mup2_volume_cont_pane_g1

0x01cc,	// (0x0000f0c4) aid_size_cell_touch_ParamLimits

0x01cc,	// (0x0000f0c4) aid_size_cell_touch

0x03f9,	// (0x0000f2f1) touch_pane_ParamLimits

0x03f9,	// (0x0000f2f1) touch_pane

0x9499,	// (0x00018391) main_rss2_pane

0xc0c4,	// (0x0001afbc) listscroll_rss2_pane

0xc0cd,	// (0x0001afc5) rss2_navigation_pane

0xc0d5,	// (0x0001afcd) list_rss2_pane

0xa76d,	// (0x00019665) scroll_pane_cp22

0xc0dd,	// (0x0001afd5) rss2_navigation_pane_g1

0xc0e6,	// (0x0001afde) rss2_navigation_pane_g2

0xc0ee,	// (0x0001afe6) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0001e584) rss2_navigation_pane_g

0xc0f6,	// (0x0001afee) rss2_navigation_pane_t1

0x4270,	// (0x00013168) rss2_list_single_pane_ParamLimits

0x4270,	// (0x00013168) rss2_list_single_pane

0xc104,	// (0x0001affc) rss2_list_single_pane_t2

0xc112,	// (0x0001b00a) rss2_list_single_pane_t3_ParamLimits

0xc112,	// (0x0001b00a) rss2_list_single_pane_t3

0xc12f,	// (0x0001b027) rss2_list_single_pane_t4

0x2392,	// (0x0001128a) smil_status_pane_g1

0x9509,	// (0x00018401) main_image2_pane_ParamLimits

0x9509,	// (0x00018401) main_image2_pane

0x3d16,	// (0x00012c0e) main_camera2_pane_g9_ParamLimits

0x3d16,	// (0x00012c0e) main_camera2_pane_g9

0x3e44,	// (0x00012d3c) main_camera2_pane_t5_ParamLimits

0x3e44,	// (0x00012d3c) main_camera2_pane_t5

0xbfa5,	// (0x0001ae9d) main_camera2_pane_t6_ParamLimits

0xbfa5,	// (0x0001ae9d) main_camera2_pane_t6

0x4285,	// (0x0001317d) main_image2_pane_g1_ParamLimits

0x4285,	// (0x0001317d) main_image2_pane_g1

0x3062,	// (0x00011f5a) smil2_video_pane_ParamLimits

0x3062,	// (0x00011f5a) smil2_video_pane

0x94b7,	// (0x000183af) aid_zoom_text_primary_cp

0x94ff,	// (0x000183f7) popup_preview_fixed_window

0x9fa0,	// (0x00018e98) im_reading_pane_g1

0x3b8d,	// (0x00012a85) cams2_bc_adjust_pane_cp_ParamLimits

0x3b8d,	// (0x00012a85) cams2_bc_adjust_pane_cp

0x3e73,	// (0x00012d6b) cams2_bc_adjust_pane_ParamLimits

0x3e73,	// (0x00012d6b) cams2_bc_adjust_pane

0xc13d,	// (0x0001b035) cams2_bc_adjust_pane_g1

0xc145,	// (0x0001b03d) cams2_slider_pane

0xc14e,	// (0x0001b046) cams2_slider_pane_g1

0xc157,	// (0x0001b04f) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0001e58b) cams2_slider_pane_g

0x0601,	// (0x0000f4f9) calc_display_pane_ParamLimits

0x0629,	// (0x0000f521) calc_paper_pane_ParamLimits

0x064c,	// (0x0000f544) grid_calc_pane_ParamLimits

0xa61d,	// (0x00019515) popup_clock_digital_window_t1_ParamLimits

0xad0c,	// (0x00019c04) main_image_pane_t1

0x05e3,	// (0x0000f4db) aid_size_cell_calc_ParamLimits

0x05e3,	// (0x0000f4db) aid_size_cell_calc

0x3651,	// (0x00012549) popup_blid_sat_info2_window_ParamLimits

0x3651,	// (0x00012549) popup_blid_sat_info2_window

0xc179,	// (0x0001b071) aid_size_cell_blid

0xc181,	// (0x0001b079) bg_popup_window_pane_cp07

0xc1a4,	// (0x0001b09c) grid_popup_blid_pane

0xc1ae,	// (0x0001b0a6) heading_pane_cp05_ParamLimits

0xc1ae,	// (0x0001b0a6) heading_pane_cp05

0xc278,	// (0x0001b170) cell_popup_blid_pane_ParamLimits

0xc278,	// (0x0001b170) cell_popup_blid_pane

0xc29c,	// (0x0001b194) cell_popup_blid_pane_g1

0xc2a4,	// (0x0001b19c) cell_popup_blid_pane_t1

0x4120,	// (0x00013018) mup2_indicator_pane_ParamLimits

0x4120,	// (0x00013018) mup2_indicator_pane

0x9e9d,	// (0x00018d95) mup2_visualizer_osc_pane

0xbfe1,	// (0x0001aed9) mup2_visualizer_spec_pane_ParamLimits

0xbfe1,	// (0x0001aed9) mup2_visualizer_spec_pane

0x429b,	// (0x00013193) mup2_spec_half_pane

0x42a4,	// (0x0001319c) mup2_spec_half_pane_cp

0x42ac,	// (0x000131a4) mup2_spec_bar_pane_ParamLimits

0x42ac,	// (0x000131a4) mup2_spec_bar_pane

0xbf30,	// (0x0001ae28) mup2_spec_bar_pane_g1

0xbf3a,	// (0x0001ae32) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e4fe) mup2_spec_bar_pane_g

0x42cc,	// (0x000131c4) mup2_osc_middle_pane

0xbf4c,	// (0x0001ae44) mup2_visualizer_osc_pane_g1

0x9537,	// (0x0001842f) popup_number_entry_window_t1_ParamLimits

0x954a,	// (0x00018442) popup_number_entry_window_t2_ParamLimits

0x955c,	// (0x00018454) popup_number_entry_window_t3_ParamLimits

0x044b,	// (0x0000f343) popup_number_entry_window_t5_ParamLimits

0x044b,	// (0x0000f343) popup_number_entry_window_t5

0xf0ca,	// (0x0001dfc2) popup_number_entry_window_t_ParamLimits

0x956e,	// (0x00018466) text_title_cp2_ParamLimits

0xabe6,	// (0x00019ade) aid_hotspot_pointer_text2_pane

0xac0c,	// (0x00019b04) main_viewer_pane_g9_ParamLimits

0xac0c,	// (0x00019b04) main_viewer_pane_g9

0xa1d9,	// (0x000190d1) cale_month_pane_t1_ParamLimits

0xa244,	// (0x0001913c) bg_cale_pane_ParamLimits

0xa25c,	// (0x00019154) list_cale_pane_ParamLimits

0xa26d,	// (0x00019165) listscroll_cale_day_pane_t1

0xa27f,	// (0x00019177) scroll_pane_cp09_ParamLimits

0x2a77,	// (0x0001196f) main_mup_eq_pane_t1_ParamLimits

0x2a77,	// (0x0001196f) main_mup_eq_pane_t1

0x2a91,	// (0x00011989) main_mup_eq_pane_t2_ParamLimits

0x2a91,	// (0x00011989) main_mup_eq_pane_t2

0x2aab,	// (0x000119a3) main_mup_eq_pane_t3_ParamLimits

0x2aab,	// (0x000119a3) main_mup_eq_pane_t3

0x2ac7,	// (0x000119bf) main_mup_eq_pane_t4_ParamLimits

0x2ac7,	// (0x000119bf) main_mup_eq_pane_t4

0x2ae3,	// (0x000119db) main_mup_eq_pane_t5_ParamLimits

0x2ae3,	// (0x000119db) main_mup_eq_pane_t5

0x2aff,	// (0x000119f7) main_mup_eq_pane_t6_ParamLimits

0x2aff,	// (0x000119f7) main_mup_eq_pane_t6

0x2b13,	// (0x00011a0b) main_mup_eq_pane_t7_ParamLimits

0x2b13,	// (0x00011a0b) main_mup_eq_pane_t7

0x2b27,	// (0x00011a1f) main_mup_eq_pane_t8_ParamLimits

0x2b27,	// (0x00011a1f) main_mup_eq_pane_t8

0x2b3b,	// (0x00011a33) main_mup_eq_pane_t9_ParamLimits

0x2b3b,	// (0x00011a33) main_mup_eq_pane_t9

0x2b55,	// (0x00011a4d) main_mup_eq_pane_t10_ParamLimits

0x2b55,	// (0x00011a4d) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001e34d) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001e34d) main_mup_eq_pane_t

0x2c04,	// (0x00011afc) mup_equalizer_pane_cp5_ParamLimits

0x2c18,	// (0x00011b10) mup_equalizer_pane_cp6_ParamLimits

0x2c2c,	// (0x00011b24) mup_equalizer_pane_cp7_ParamLimits

0x9499,	// (0x00018391) main_gallery_pane

0xbf55,	// (0x0001ae4d) smil2_volume_pane

0xbf5d,	// (0x0001ae55) smil_status_volume_pane_g1_ParamLimits

0xbf70,	// (0x0001ae68) smil_status_volume_pane_g2_ParamLimits

0xbf83,	// (0x0001ae7b) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0001e503) smil_status_volume_pane_g_ParamLimits

0xc181,	// (0x0001b079) bg_popup_window_pane_cp07_ParamLimits

0xc18f,	// (0x0001b087) blid_firmament_pane

0x42d5,	// (0x000131cd) aid_size_cell_gallery_ParamLimits

0x42d5,	// (0x000131cd) aid_size_cell_gallery

0x42eb,	// (0x000131e3) grid_gallery_pane_ParamLimits

0x42eb,	// (0x000131e3) grid_gallery_pane

0x4304,	// (0x000131fc) cell_gallery_pane_ParamLimits

0x4304,	// (0x000131fc) cell_gallery_pane

0xc2b2,	// (0x0001b1aa) bg_cell_gallery_focus_pane_ParamLimits

0xc2b2,	// (0x0001b1aa) bg_cell_gallery_focus_pane

0xc2c4,	// (0x0001b1bc) cell_gallery_pane_g1_ParamLimits

0xc2c4,	// (0x0001b1bc) cell_gallery_pane_g1

0x434d,	// (0x00013245) cell_gallery_pane_g2_ParamLimits

0x434d,	// (0x00013245) cell_gallery_pane_g2

0x435a,	// (0x00013252) cell_gallery_pane_g3_ParamLimits

0x435a,	// (0x00013252) cell_gallery_pane_g3

0xc2d0,	// (0x0001b1c8) cell_gallery_pane_g4_ParamLimits

0xc2d0,	// (0x0001b1c8) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0001e5b1) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0001e5b1) cell_gallery_pane_g

0xc2dc,	// (0x0001b1d4) bg_cell_gallery_focus_pane_g1

0xc2e4,	// (0x0001b1dc) bg_cell_gallery_focus_pane_g2

0xc2ec,	// (0x0001b1e4) bg_cell_gallery_focus_pane_g3

0xc2f4,	// (0x0001b1ec) bg_cell_gallery_focus_pane_g4

0xc2fc,	// (0x0001b1f4) bg_cell_gallery_focus_pane_g5

0xc304,	// (0x0001b1fc) bg_cell_gallery_focus_pane_g6

0xc30c,	// (0x0001b204) bg_cell_gallery_focus_pane_g7

0xc314,	// (0x0001b20c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0001e5ba) bg_cell_gallery_focus_pane_g

0xc31c,	// (0x0001b214) aid_firma_cardinal

0xc330,	// (0x0001b228) blid_firmament_pane_t1

0xc347,	// (0x0001b23f) blid_firmament_pane_t2

0xc35e,	// (0x0001b256) blid_firmament_pane_t3

0xc375,	// (0x0001b26d) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0001e5cb) blid_firmament_pane_t

0xc38c,	// (0x0001b284) blid_sat_info_pane

0xc39c,	// (0x0001b294) blid_sat_info_pane_g1

0xc39c,	// (0x0001b294) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d4) blid_sat_info_pane_g

0xc3a6,	// (0x0001b29e) blid_sat_info_pane_t1

0xc3b4,	// (0x0001b2ac) smil2_volume_content_pane

0xc3bd,	// (0x0001b2b5) smil2_volume_pane_g1

0xc3c5,	// (0x0001b2bd) smil2_volume_content_pane_g1

0xc3ce,	// (0x0001b2c6) smil2_volume_content_pane_g2

0xc3d7,	// (0x0001b2cf) smil2_volume_content_pane_g3

0xc3e0,	// (0x0001b2d8) smil2_volume_content_pane_g4

0xc3e9,	// (0x0001b2e1) smil2_volume_content_pane_g5

0xc3f2,	// (0x0001b2ea) smil2_volume_content_pane_g6

0xc3fb,	// (0x0001b2f3) smil2_volume_content_pane_g7

0xc404,	// (0x0001b2fc) smil2_volume_content_pane_g8

0xc40d,	// (0x0001b305) smil2_volume_content_pane_g9

0xc416,	// (0x0001b30e) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0001e5d9) smil2_volume_content_pane_g

0x0bec,	// (0x0000fae4) cale_week_day_heading_pane_t1_ParamLimits

0x0c31,	// (0x0000fb29) cale_week_day_heading_pane_t2_ParamLimits

0x0c7b,	// (0x0000fb73) cale_week_day_heading_pane_t3_ParamLimits

0x0cc5,	// (0x0000fbbd) cale_week_day_heading_pane_t4_ParamLimits

0x0d0f,	// (0x0000fc07) cale_week_day_heading_pane_t5_ParamLimits

0x0d61,	// (0x0000fc59) cale_week_day_heading_pane_t6_ParamLimits

0x0db3,	// (0x0000fcab) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0001e0c9) cale_week_day_heading_pane_t_ParamLimits

0x9e42,	// (0x00018d3a) bg_cale_side_pane_ParamLimits

0x0df8,	// (0x0000fcf0) cale_week_time_pane_t1_ParamLimits

0x0e12,	// (0x0000fd0a) cale_week_time_pane_t2_ParamLimits

0x0e2c,	// (0x0000fd24) cale_week_time_pane_t3_ParamLimits

0x0e46,	// (0x0000fd3e) cale_week_time_pane_t4_ParamLimits

0x0e60,	// (0x0000fd58) cale_week_time_pane_t5_ParamLimits

0x0e7a,	// (0x0000fd72) cale_week_time_pane_t6_ParamLimits

0x0e94,	// (0x0000fd8c) cale_week_time_pane_t7_ParamLimits

0x0eae,	// (0x0000fda6) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0001e0d8) cale_week_time_pane_t_ParamLimits

0x0ece,	// (0x0000fdc6) cell_cale_week_pane_g2_ParamLimits

0x9e42,	// (0x00018d3a) bg_cale_side_pane_cp01_ParamLimits

0x217f,	// (0x00011077) cale_month_week_pane_t1_ParamLimits

0x2198,	// (0x00011090) cale_month_week_pane_t2_ParamLimits

0x21b1,	// (0x000110a9) cale_month_week_pane_t3_ParamLimits

0x21ca,	// (0x000110c2) cale_month_week_pane_t4_ParamLimits

0x21e3,	// (0x000110db) cale_month_week_pane_t5_ParamLimits

0x21fc,	// (0x000110f4) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001e1ad) cale_month_week_pane_t_ParamLimits

0xa1eb,	// (0x000190e3) cell_cale_month_pane_g1_ParamLimits

0x9499,	// (0x00018391) main_cale_event_viewer_pane

0x9499,	// (0x00018391) listscroll_cale_event_viewer_pane

0xc41f,	// (0x0001b317) list_cale_ev_pane

0xc427,	// (0x0001b31f) scroll_pane_cp023

0xc433,	// (0x0001b32b) field_cale_ev_pane_ParamLimits

0xc433,	// (0x0001b32b) field_cale_ev_pane

0xc451,	// (0x0001b349) field_cale_ev_content_pane_ParamLimits

0xc451,	// (0x0001b349) field_cale_ev_content_pane

0xc45d,	// (0x0001b355) field_cale_ev_pane_g1_ParamLimits

0xc45d,	// (0x0001b355) field_cale_ev_pane_g1

0xc469,	// (0x0001b361) field_cale_ev_pane_g2_ParamLimits

0xc469,	// (0x0001b361) field_cale_ev_pane_g2

0xc481,	// (0x0001b379) field_cale_ev_pane_g3_ParamLimits

0xc481,	// (0x0001b379) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0001e5ee) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0001e5ee) field_cale_ev_pane_g

0xc499,	// (0x0001b391) field_cale_ev_pane_t1_ParamLimits

0xc499,	// (0x0001b391) field_cale_ev_pane_t1

0xc4b0,	// (0x0001b3a8) field_cale_ev_content_pane_t1_ParamLimits

0xc4b0,	// (0x0001b3a8) field_cale_ev_content_pane_t1

0xab37,	// (0x00019a2f) bg_button_pane_cp01

0x0919,	// (0x0000f811) listscroll_cale_week_pane_ParamLimits

0x9ded,	// (0x00018ce5) popup_toolbar_window_cp01

0x9e13,	// (0x00018d0b) listscroll_cale_week_pane_t1_ParamLimits

0x0919,	// (0x0000f811) listscroll_cale_day_pane_ParamLimits

0x9ded,	// (0x00018ce5) popup_toolbar_window_cp02

0xa26d,	// (0x00019165) listscroll_cale_day_pane_t1_ParamLimits

0x0919,	// (0x0000f811) main_cale_month_pane_ParamLimits

0xbece,	// (0x0001adc6) popup_toolbar_window_cp03_ParamLimits

0xbece,	// (0x0001adc6) popup_toolbar_window_cp03

0x2f2a,	// (0x00011e22) main_image_pane_g2_ParamLimits

0x2f2a,	// (0x00011e22) main_image_pane_g2

0x2f3b,	// (0x00011e33) main_image_pane_g3_ParamLimits

0x2f3b,	// (0x00011e33) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001e3df) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001e3df) main_image_pane_g

0xad0c,	// (0x00019c04) main_image_pane_t1_ParamLimits

0x2f4c,	// (0x00011e44) main_image_pane_t2_ParamLimits

0x2f4c,	// (0x00011e44) main_image_pane_t2

0x2f5e,	// (0x00011e56) main_image_pane_t3_ParamLimits

0x2f5e,	// (0x00011e56) main_image_pane_t3

0x2f86,	// (0x00011e7e) main_image_pane_t4_ParamLimits

0x2f86,	// (0x00011e7e) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001e3e6) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001e3e6) main_image_pane_t

0x2fa6,	// (0x00011e9e) popup_image_details_window_cp01

0x2fb0,	// (0x00011ea8) popup_toobar_trans_pane_cp01_ParamLimits

0x2fb0,	// (0x00011ea8) popup_toobar_trans_pane_cp01

0x3730,	// (0x00012628) popup_image_details_window_ParamLimits

0x3730,	// (0x00012628) popup_image_details_window

0xbea1,	// (0x0001ad99) popup_image_focus_window

0x3b47,	// (0x00012a3f) camera2_autofocus_pane_ParamLimits

0x3b47,	// (0x00012a3f) camera2_autofocus_pane

0x9499,	// (0x00018391) bg_popup_sub_pane_cp06

0xc4ce,	// (0x0001b3c6) popup_image_focus_window_g1

0xc4d6,	// (0x0001b3ce) popup_image_focus_window_g2

0xc4de,	// (0x0001b3d6) popup_image_focus_window_g3

0xc4e6,	// (0x0001b3de) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0001e5f5) popup_image_focus_window_g

0xc4ee,	// (0x0001b3e6) popup_image_focus_window_t1

0xc4fc,	// (0x0001b3f4) popup_image_focus_window_t2

0xc50c,	// (0x0001b404) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0001e5fe) popup_image_focus_window_t

0xc51a,	// (0x0001b412) camera2_autofocus_pane_g1

0x9509,	// (0x00018401) bg_tb_trans_pane_cp01

0xc528,	// (0x0001b420) popup_image_details_window_g1

0xc53b,	// (0x0001b433) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0001e610) popup_image_details_window_g

0xc564,	// (0x0001b45c) popup_image_details_window_t1

0xc576,	// (0x0001b46e) popup_image_details_window_t2

0xc58f,	// (0x0001b487) popup_image_details_window_t3

0xc5a3,	// (0x0001b49b) popup_image_details_window_t4

0xc5be,	// (0x0001b4b6) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0001e617) popup_image_details_window_t

0x9c3e,	// (0x00018b36) bg_calc_paper_pane_ParamLimits

0x9499,	// (0x00018391) grid_highlight_pane_cp013

0x9c52,	// (0x00018b4a) list_calc_pane_ParamLimits

0x9c64,	// (0x00018b5c) scroll_pane_cp024

0x9c6c,	// (0x00018b64) bg_calc_display_pane_ParamLimits

0x074a,	// (0x0000f642) calc_display_pane_t1_ParamLimits

0x075c,	// (0x0000f654) calc_display_pane_t2_ParamLimits

0x9c78,	// (0x00018b70) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0001e049) calc_display_pane_t_ParamLimits

0x0816,	// (0x0000f70e) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0001e066) cell_calc_pane_g

0x081f,	// (0x0000f717) cell_calc_pane_t1

0x9cef,	// (0x00018be7) grid_highlight_pane_cp02_ParamLimits

0x9d05,	// (0x00018bfd) toolbar_button_pane_cp01_ParamLimits

0x9d05,	// (0x00018bfd) toolbar_button_pane_cp01

0xad51,	// (0x00019c49) temp_image_control_pane_ParamLimits

0xad51,	// (0x00019c49) temp_image_control_pane

0x9509,	// (0x00018401) main_mp3_pane

0xc5d8,	// (0x0001b4d0) temp_image_control_pane_g1_ParamLimits

0xc5d8,	// (0x0001b4d0) temp_image_control_pane_g1

0xc5e6,	// (0x0001b4de) temp_image_control_pane_g2_ParamLimits

0xc5e6,	// (0x0001b4de) temp_image_control_pane_g2

0xc5f8,	// (0x0001b4f0) temp_image_control_pane_g3_ParamLimits

0xc5f8,	// (0x0001b4f0) temp_image_control_pane_g3

0x4397,	// (0x0001328f) temp_image_control_pane_g4_ParamLimits

0x4397,	// (0x0001328f) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0001e622) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0001e622) temp_image_control_pane_g

0xc5d8,	// (0x0001b4d0) main_mp3_pane_g1

0x43aa,	// (0x000132a2) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0001e62b) main_mp3_pane_g

0xc63b,	// (0x0001b533) main_mp3_pane_t1

0x9eaf,	// (0x00018da7) main_camera_pane_g8_ParamLimits

0x9eaf,	// (0x00018da7) main_camera_pane_g8

0x11c8,	// (0x000100c0) main_video_pane_g7_ParamLimits

0x11c8,	// (0x000100c0) main_video_pane_g7

0xbfc3,	// (0x0001aebb) main_camera2_pane_t7_ParamLimits

0xbfc3,	// (0x0001aebb) main_camera2_pane_t7

0x9ff7,	// (0x00018eef) scroll_pane_cp025_ParamLimits

0x9ff7,	// (0x00018eef) scroll_pane_cp025

0xa00b,	// (0x00018f03) scroll_pane_cp026_ParamLimits

0xa00b,	// (0x00018f03) scroll_pane_cp026

0xa01a,	// (0x00018f12) wml_content_pane_ParamLimits

0x9499,	// (0x00018391) main_touch_calib_pane

0x447e,	// (0x00013376) main_touch_calib_pane_g1

0x4490,	// (0x00013388) main_touch_calib_pane_g2

0x44a2,	// (0x0001339a) main_touch_calib_pane_g3

0x44b4,	// (0x000133ac) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0001e649) main_touch_calib_pane_g

0x44c6,	// (0x000133be) main_touch_calib_pane_t1

0x44e0,	// (0x000133d8) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0001e652) main_touch_calib_pane_t

0xa849,	// (0x00019741) mup_progress_pane_cp02

0xa87e,	// (0x00019776) navi_pane_g1

0xa939,	// (0x00019831) navi_pane_mp_t3

0x9509,	// (0x00018401) main_mp3_pane_ParamLimits

0x38b5,	// (0x000127ad) navi_pane_ParamLimits

0xc5d8,	// (0x0001b4d0) main_mp3_pane_g1_ParamLimits

0x43aa,	// (0x000132a2) main_mp3_pane_g2_ParamLimits

0x43b8,	// (0x000132b0) main_mp3_pane_g3_ParamLimits

0x43b8,	// (0x000132b0) main_mp3_pane_g3

0x43c6,	// (0x000132be) main_mp3_pane_g4_ParamLimits

0x43c6,	// (0x000132be) main_mp3_pane_g4

0xc608,	// (0x0001b500) main_mp3_pane_g5_ParamLimits

0xc608,	// (0x0001b500) main_mp3_pane_g5

0xc616,	// (0x0001b50e) main_mp3_pane_g6_ParamLimits

0xc616,	// (0x0001b50e) main_mp3_pane_g6

0xc623,	// (0x0001b51b) main_mp3_pane_g7_ParamLimits

0xc623,	// (0x0001b51b) main_mp3_pane_g7

0xc62f,	// (0x0001b527) main_mp3_pane_g8_ParamLimits

0xc62f,	// (0x0001b527) main_mp3_pane_g8

0xf733,	// (0x0001e62b) main_mp3_pane_g_ParamLimits

0x43d2,	// (0x000132ca) main_mp3_pane_t2

0x43e0,	// (0x000132d8) main_mp3_pane_t3

0xc649,	// (0x0001b541) main_mp3_pane_t4

0xc657,	// (0x0001b54f) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0001e63c) main_mp3_pane_t

0xc665,	// (0x0001b55d) mup_progress_pane_cp01

0x94b7,	// (0x000183af) aid_zoom_text_secondary2

0xc41f,	// (0x0001b317) list_cale_ev2_pane

0xc427,	// (0x0001b31f) scroll_pane_cp023_ParamLimits

0x4536,	// (0x0001342e) field_cale_ev2_pane_ParamLimits

0x4536,	// (0x0001342e) field_cale_ev2_pane

0x4556,	// (0x0001344e) field_cale_ev2_pane_g1_ParamLimits

0x4556,	// (0x0001344e) field_cale_ev2_pane_g1

0x4562,	// (0x0001345a) field_cale_ev2_pane_g2_ParamLimits

0x4562,	// (0x0001345a) field_cale_ev2_pane_g2

0x457a,	// (0x00013472) field_cale_ev2_pane_g3_ParamLimits

0x457a,	// (0x00013472) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0001e65d) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0001e65d) field_cale_ev2_pane_g

0x4592,	// (0x0001348a) field_cale_ev2_pane_t1_ParamLimits

0x4592,	// (0x0001348a) field_cale_ev2_pane_t1

0x45a9,	// (0x000134a1) field_cale_ev2_pane_t2_ParamLimits

0x45a9,	// (0x000134a1) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0001e666) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0001e666) field_cale_ev2_pane_t

0x2ddf,	// (0x00011cd7) main_postcard_pane_g5_ParamLimits

0x2ddf,	// (0x00011cd7) main_postcard_pane_g5

0x2df5,	// (0x00011ced) main_postcard_pane_g6_ParamLimits

0x2df5,	// (0x00011ced) main_postcard_pane_g6

0x0f94,	// (0x0000fe8c) camera2_autofocus_pane_cp_ParamLimits

0x0f94,	// (0x0000fe8c) camera2_autofocus_pane_cp

0x9509,	// (0x00018401) main_mup3_pane

0x45be,	// (0x000134b6) main_mup3_pane_g1_ParamLimits

0x45be,	// (0x000134b6) main_mup3_pane_g1

0x45e0,	// (0x000134d8) main_mup3_pane_g2_ParamLimits

0x45e0,	// (0x000134d8) main_mup3_pane_g2

0x465e,	// (0x00013556) main_mup3_pane_g3_ParamLimits

0x465e,	// (0x00013556) main_mup3_pane_g3

0x46a4,	// (0x0001359c) main_mup3_pane_g4_ParamLimits

0x46a4,	// (0x0001359c) main_mup3_pane_g4

0x46ea,	// (0x000135e2) main_mup3_pane_g5_ParamLimits

0x46ea,	// (0x000135e2) main_mup3_pane_g5

0x4730,	// (0x00013628) main_mup3_pane_g6_ParamLimits

0x4730,	// (0x00013628) main_mup3_pane_g6

0xc699,	// (0x0001b591) main_mup3_pane_g7_ParamLimits

0xc699,	// (0x0001b591) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0001e676) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0001e676) main_mup3_pane_g

0x47ae,	// (0x000136a6) main_mup3_pane_t1_ParamLimits

0x47ae,	// (0x000136a6) main_mup3_pane_t1

0x4822,	// (0x0001371a) main_mup3_pane_t2_ParamLimits

0x4822,	// (0x0001371a) main_mup3_pane_t2

0x48f6,	// (0x000137ee) main_mup3_pane_t4_ParamLimits

0x48f6,	// (0x000137ee) main_mup3_pane_t4

0x494c,	// (0x00013844) main_mup3_pane_t5_ParamLimits

0x494c,	// (0x00013844) main_mup3_pane_t5

0x4a08,	// (0x00013900) main_mup3_pane_t6_ParamLimits

0x4a08,	// (0x00013900) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0001e687) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0001e687) main_mup3_pane_t

0x4ac0,	// (0x000139b8) mup3_progress_pane_ParamLimits

0x4ac0,	// (0x000139b8) mup3_progress_pane

0x4b56,	// (0x00013a4e) popup_mup3_control_window_ParamLimits

0x4b56,	// (0x00013a4e) popup_mup3_control_window

0xc6a7,	// (0x0001b59f) popup_mup3_text_window

0x4b88,	// (0x00013a80) mup3_progress_pane_t1

0x4ba7,	// (0x00013a9f) mup3_progress_pane_t2

0xc6af,	// (0x0001b5a7) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0001e694) mup3_progress_pane_t

0xc6cc,	// (0x0001b5c4) mup_progress_pane_cp03

0x9499,	// (0x00018391) bg_tb_trans_pane_cp04

0x4bc6,	// (0x00013abe) mup3_volume_pane

0x4bce,	// (0x00013ac6) popup_mup3_control_window_g1

0x4bd7,	// (0x00013acf) mup3_volume_pane_g1

0x4be0,	// (0x00013ad8) mup3_volume_pane_g2

0x4be9,	// (0x00013ae1) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0001e69b) mup3_volume_pane_g

0x9499,	// (0x00018391) bg_tb_trans_pane_cp03

0xc6dc,	// (0x0001b5d4) popup_mup3_text_window_g1

0xc6e4,	// (0x0001b5dc) popup_mup3_text_window_t1

0x9cc6,	// (0x00018bbe) list_calc_item_pane_g1_ParamLimits

0xc0ab,	// (0x0001afa3) mup_volume_pane_cp_g1

0x44fa,	// (0x000133f2) main_touch_calib_pane_t3

0x450e,	// (0x00013406) main_touch_calib_pane_t4

0x4522,	// (0x0001341a) main_touch_calib_pane_t5

0x94a3,	// (0x0001839b) aid_cell_size_toolbar2

0x94ab,	// (0x000183a3) aid_popup3_width_pane

0x94b7,	// (0x000183af) aid_zoom_text_msg_primary

0x0f73,	// (0x0000fe6b) vorec_t7

0x9c8a,	// (0x00018b82) bg_calc_paper_pane_g1_ParamLimits

0x9c96,	// (0x00018b8e) bg_calc_paper_pane_g2_ParamLimits

0x9ca2,	// (0x00018b9a) bg_calc_paper_pane_g3_ParamLimits

0x9cae,	// (0x00018ba6) bg_calc_paper_pane_g4_ParamLimits

0x9cba,	// (0x00018bb2) bg_calc_paper_pane_g5_ParamLimits

0x07a3,	// (0x0000f69b) bg_calc_paper_pane_g6_ParamLimits

0x07b2,	// (0x0000f6aa) bg_calc_paper_pane_g7_ParamLimits

0x07c1,	// (0x0000f6b9) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0001e050) bg_calc_paper_pane_g_ParamLimits

0x07d4,	// (0x0000f6cc) calc_bg_paper_pane_g9_ParamLimits

0x10df,	// (0x0000ffd7) image_qvga_pane_ParamLimits

0x10df,	// (0x0000ffd7) image_qvga_pane

0x9b85,	// (0x00018a7d) bg_popup_sub_pane_cp04_ParamLimits

0xac88,	// (0x00019b80) popup_mup_playback_window_g1_ParamLimits

0xac94,	// (0x00019b8c) popup_mup_playback_window_t1_ParamLimits

0xaca9,	// (0x00019ba1) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001e3da) popup_mup_playback_window_t_ParamLimits

0x403a,	// (0x00012f32) main_mup2_pane_g3_ParamLimits

0x403a,	// (0x00012f32) main_mup2_pane_g3

0x14ef,	// (0x000103e7) popup_toolbar_window_cp04

0xb08b,	// (0x00019f83) popup_call2_audio_second_window_g3_ParamLimits

0xb08b,	// (0x00019f83) popup_call2_audio_second_window_g3

0xb495,	// (0x0001a38d) popup_call2_audio_first_window_g4_ParamLimits

0xb495,	// (0x0001a38d) popup_call2_audio_first_window_g4

0xbb14,	// (0x0001aa0c) popup_call2_audio_in_window_g4_ParamLimits

0xbb14,	// (0x0001aa0c) popup_call2_audio_in_window_g4

0x2f0c,	// (0x00011e04) aid_area_sk_bg_cut_ParamLimits

0x2f0c,	// (0x00011e04) aid_area_sk_bg_cut

0xacbe,	// (0x00019bb6) aid_area_sk_bg_cut_2_ParamLimits

0xacbe,	// (0x00019bb6) aid_area_sk_bg_cut_2

0x433d,	// (0x00013235) aid_placing_details_win

0x4345,	// (0x0001323d) aid_placing_details_win_2

0xc51a,	// (0x0001b412) camera2_autofocus_pane_g1_ParamLimits

0x0392,	// (0x0000f28a) popup_fixed_preview_cale_window_ParamLimits

0x0392,	// (0x0000f28a) popup_fixed_preview_cale_window

0xa9c0,	// (0x000198b8) navi_slider_pane_g3

0xa9c9,	// (0x000198c1) navi_slider_pane_g4

0xa9d2,	// (0x000198ca) navi_slider_pane_g5

0xa9c0,	// (0x000198b8) navi_slider_pane_g6

0xa9db,	// (0x000198d3) navi_slider_pane_g7

0xaafc,	// (0x000199f4) mup_scale_pane_g3

0xab05,	// (0x000199fd) mup_scale_pane_g4

0xab0e,	// (0x00019a06) mup_scale_pane_g5

0x2c40,	// (0x00011b38) mup_scale_pane_g6

0x2c49,	// (0x00011b41) mup_scale_pane_g7

0xa9c0,	// (0x000198b8) cams2_slider_pane_g3

0xc160,	// (0x0001b058) cams2_slider_pane_g4

0xc168,	// (0x0001b060) cams2_slider_pane_g5

0xa9c0,	// (0x000198b8) cams2_slider_pane_g6

0xc170,	// (0x0001b068) cams2_slider_pane_g7

0xc39c,	// (0x0001b294) camera2_autofocus_pane_cp_g1

0xbe75,	// (0x0001ad6d) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe75,	// (0x0001ad6d) bg_popup_preview_window_pane_cp02

0xc6f2,	// (0x0001b5ea) list_fp_cale_pane_ParamLimits

0xc6f2,	// (0x0001b5ea) list_fp_cale_pane

0xc6fe,	// (0x0001b5f6) popup_fixed_preview_cale_window_t1_ParamLimits

0xc6fe,	// (0x0001b5f6) popup_fixed_preview_cale_window_t1

0x4bf2,	// (0x00013aea) popup_fixed_preview_cale_window_t2_ParamLimits

0x4bf2,	// (0x00013aea) popup_fixed_preview_cale_window_t2

0x4c07,	// (0x00013aff) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c07,	// (0x00013aff) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0001e6a2) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0001e6a2) popup_fixed_preview_cale_window_t

0x4c1c,	// (0x00013b14) list_single_fp_cale_pane_ParamLimits

0x4c1c,	// (0x00013b14) list_single_fp_cale_pane

0xc71c,	// (0x0001b614) list_single_fp_cale_pane_g1_ParamLimits

0xc71c,	// (0x0001b614) list_single_fp_cale_pane_g1

0xc728,	// (0x0001b620) list_single_fp_cale_pane_g2_ParamLimits

0xc728,	// (0x0001b620) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0001e6a9) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0001e6a9) list_single_fp_cale_pane_g

0xc741,	// (0x0001b639) list_single_fp_cale_pane_t1_ParamLimits

0xc741,	// (0x0001b639) list_single_fp_cale_pane_t1

0xc753,	// (0x0001b64b) list_single_fp_cale_pane_t2_ParamLimits

0xc753,	// (0x0001b64b) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0001e6b0) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0001e6b0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9499,	// (0x00018391) main_dialer_pane

0x4c31,	// (0x00013b29) aid_cell_size_keypad

0x4c3b,	// (0x00013b33) dialer_ne_pane

0x4c43,	// (0x00013b3b) grid_dialer_command_1_pane

0x4c4b,	// (0x00013b43) grid_dialer_command_2_pane

0x4c53,	// (0x00013b4b) grid_dialer_keypad_pane

0x4c65,	// (0x00013b5d) bg_popup_call_pane_cp06_ParamLimits

0x4c65,	// (0x00013b5d) bg_popup_call_pane_cp06

0x4c71,	// (0x00013b69) dialer_ne_clear_pane_ParamLimits

0x4c71,	// (0x00013b69) dialer_ne_clear_pane

0xc786,	// (0x0001b67e) dialer_ne_pane_g1

0xc78e,	// (0x0001b686) dialer_ne_pane_t1_ParamLimits

0xc78e,	// (0x0001b686) dialer_ne_pane_t1

0x4c7d,	// (0x00013b75) dialer_ne_pane_t2_ParamLimits

0x4c7d,	// (0x00013b75) dialer_ne_pane_t2

0x4ca7,	// (0x00013b9f) dialer_ne_pane_t3_ParamLimits

0x4ca7,	// (0x00013b9f) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0001e6b5) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0001e6b5) dialer_ne_pane_t

0x4cd7,	// (0x00013bcf) dialer_ne_pane_t3_copy1_ParamLimits

0x4cd7,	// (0x00013bcf) dialer_ne_pane_t3_copy1

0x4d06,	// (0x00013bfe) cell_dialer_keypad_pane_ParamLimits

0x4d06,	// (0x00013bfe) cell_dialer_keypad_pane

0x4d1d,	// (0x00013c15) cell_dialer_command_1_pane_ParamLimits

0x4d1d,	// (0x00013c15) cell_dialer_command_1_pane

0x4d33,	// (0x00013c2b) cell_dialer_command_2_pane_ParamLimits

0x4d33,	// (0x00013c2b) cell_dialer_command_2_pane

0xc7a0,	// (0x0001b698) bg_button_pane_cp02_ParamLimits

0xc7a0,	// (0x0001b698) bg_button_pane_cp02

0x4d42,	// (0x00013c3a) cell_dialer_keypad_pane_g1_ParamLimits

0x4d42,	// (0x00013c3a) cell_dialer_keypad_pane_g1

0xc7a0,	// (0x0001b698) bg_button_pane_cp03_ParamLimits

0xc7a0,	// (0x0001b698) bg_button_pane_cp03

0x4d56,	// (0x00013c4e) cell_dialer_command_1_pane_g1_ParamLimits

0x4d56,	// (0x00013c4e) cell_dialer_command_1_pane_g1

0xc7ac,	// (0x0001b6a4) bg_button_pane_cp04

0x4d6a,	// (0x00013c62) cell_dialer_command_2_pane_g1

0x9e9d,	// (0x00018d95) bg_button_pane_cp06

0xc7b4,	// (0x0001b6ac) dialer_ne_clear_pane_g1

0xa88a,	// (0x00019782) navi_pane_g2

0xa8b8,	// (0x000197b0) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001e2dd) navi_pane_g

0xa947,	// (0x0001983f) navi_pane_mv_g2

0xa96e,	// (0x00019866) navi_pane_mv_g5

0x2804,	// (0x000116fc) navi_pane_mv_t1

0x9c6c,	// (0x00018b64) main_clock2_pane

0x4db5,	// (0x00013cad) main_clock2_list_pane_ParamLimits

0x4db5,	// (0x00013cad) main_clock2_list_pane

0x4deb,	// (0x00013ce3) main_clock2_pane_t1_ParamLimits

0x4deb,	// (0x00013ce3) main_clock2_pane_t1

0x4e27,	// (0x00013d1f) main_clock2_pane_t2_ParamLimits

0x4e27,	// (0x00013d1f) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001e6c1) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001e6c1) main_clock2_pane_t

0x4ec5,	// (0x00013dbd) popup_clock_analogue_window_cp03_ParamLimits

0x4ec5,	// (0x00013dbd) popup_clock_analogue_window_cp03

0x4eea,	// (0x00013de2) popup_clock_digital_window_cp02_ParamLimits

0x4eea,	// (0x00013de2) popup_clock_digital_window_cp02

0x4f5b,	// (0x00013e53) main_clock2_list_single_pane_ParamLimits

0x4f5b,	// (0x00013e53) main_clock2_list_single_pane

0x9e9d,	// (0x00018d95) list_highlight_pane_cp05

0xc7f2,	// (0x0001b6ea) main_clock2_list_single_pane_t1

0x14ef,	// (0x000103e7) popup_toolbar_window_cp04_ParamLimits

0x4367,	// (0x0001325f) camera2_autofocus_pane_g2_ParamLimits

0x4367,	// (0x0001325f) camera2_autofocus_pane_g2

0x4373,	// (0x0001326b) camera2_autofocus_pane_g3_ParamLimits

0x4373,	// (0x0001326b) camera2_autofocus_pane_g3

0x437f,	// (0x00013277) camera2_autofocus_pane_g4_ParamLimits

0x437f,	// (0x00013277) camera2_autofocus_pane_g4

0x438b,	// (0x00013283) camera2_autofocus_pane_g5_ParamLimits

0x438b,	// (0x00013283) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0001e605) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0001e605) camera2_autofocus_pane_g

0xc679,	// (0x0001b571) camera2_autofocus_pane_cp_g2

0xc681,	// (0x0001b579) camera2_autofocus_pane_cp_g3

0xc689,	// (0x0001b581) camera2_autofocus_pane_cp_g4

0xc691,	// (0x0001b589) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0001e66b) camera2_autofocus_pane_cp_g

0x4c5d,	// (0x00013b55) popup_dialer_spcha_window

0x9499,	// (0x00018391) bg_popup_sub_pane_cp07

0xc800,	// (0x0001b6f8) list_spcha_pane

0xc808,	// (0x0001b700) list_single_spcha_pane_ParamLimits

0xc808,	// (0x0001b700) list_single_spcha_pane

0x9499,	// (0x00018391) list_highlight_pane_cp06

0xc819,	// (0x0001b711) list_single_spcha_pane_t1

0xb8be,	// (0x0001a7b6) popup_call2_audio_out_window_g4_ParamLimits

0xb8be,	// (0x0001a7b6) popup_call2_audio_out_window_g4

0x9499,	// (0x00018391) main_imed2_pane

0xbea9,	// (0x0001ada1) popup_imed_adjust2_window

0x3748,	// (0x00012640) popup_imed_trans_window_ParamLimits

0x3748,	// (0x00012640) popup_imed_trans_window

0xc1da,	// (0x0001b0d2) popup_blid_sat_info2_window_t1

0xc1e8,	// (0x0001b0e0) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0001e59a) popup_blid_sat_info2_window_t

0x5005,	// (0x00013efd) aid_size_cell_colour_35

0x5025,	// (0x00013f1d) aid_size_cell_colour_112

0x5045,	// (0x00013f3d) aid_size_cell_effect

0xbe81,	// (0x0001ad79) bg_tb_trans_pane_cp02

0xa376,	// (0x0001926e) heading_imed_pane

0x5065,	// (0x00013f5d) listscroll_imed_pane

0xc827,	// (0x0001b71f) heading_imed_pane_g1

0xc82f,	// (0x0001b727) heading_imed_pane_t1

0xc83d,	// (0x0001b735) grid_imed_colour_35_pane_ParamLimits

0xc83d,	// (0x0001b735) grid_imed_colour_35_pane

0x5071,	// (0x00013f69) grid_imed_effect_pane

0xc854,	// (0x0001b74c) list_imed_aspect_pane

0x5087,	// (0x00013f7f) scroll_pane_cp027_ParamLimits

0x5087,	// (0x00013f7f) scroll_pane_cp027

0x5098,	// (0x00013f90) cell_imed_effect_pane_ParamLimits

0x5098,	// (0x00013f90) cell_imed_effect_pane

0xc85c,	// (0x0001b754) cell_imed_colour_pane_ParamLimits

0xc85c,	// (0x0001b754) cell_imed_colour_pane

0xc89e,	// (0x0001b796) cell_imed_colour_pane_g1_ParamLimits

0xc89e,	// (0x0001b796) cell_imed_colour_pane_g1

0xc8af,	// (0x0001b7a7) hgihlgiht_grid_pane_cp016_ParamLimits

0xc8af,	// (0x0001b7a7) hgihlgiht_grid_pane_cp016

0x50bf,	// (0x00013fb7) cell_imed_effect_pane_g1

0x50c7,	// (0x00013fbf) grid_highlight_pane_cp017

0xc8c0,	// (0x0001b7b8) list_imed_single_pane_ParamLimits

0xc8c0,	// (0x0001b7b8) list_imed_single_pane

0x9499,	// (0x00018391) list_highlight_pane_cp07

0xc8d5,	// (0x0001b7cd) list_imed_aspect_pane_comp1_t1

0xbe81,	// (0x0001ad79) bg_tb_trans_pane_cp05

0xc8f7,	// (0x0001b7ef) popup_imed_adjust2_window_g1

0xc91e,	// (0x0001b816) popup_imed_adjust2_window_t1

0xc936,	// (0x0001b82e) slider_imed_adjust_pane

0xc94a,	// (0x0001b842) slider_imed_adjust_pane_g1

0xc95a,	// (0x0001b852) slider_imed_adjust_pane_g2

0xc96a,	// (0x0001b862) slider_imed_adjust_pane_g3

0xc97b,	// (0x0001b873) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001e6de) slider_imed_adjust_pane_g

0x50d0,	// (0x00013fc8) aid_size_cell_clipart2

0x50dc,	// (0x00013fd4) grid_imed_clipart_pane

0xc98c,	// (0x0001b884) scroll_pane_cp031

0x50e6,	// (0x00013fde) cell_imed_clipart_pane_ParamLimits

0x50e6,	// (0x00013fde) cell_imed_clipart_pane

0x5108,	// (0x00014000) cell_imed_clipart_pane_g1

0x9499,	// (0x00018391) grid_highlight_pane_cp014

0x4dca,	// (0x00013cc2) main_clock2_pane_g1_ParamLimits

0x4dca,	// (0x00013cc2) main_clock2_pane_g1

0x4f06,	// (0x00013dfe) aid_call2_pane_cp10

0x4f18,	// (0x00013e10) aid_call_pane_cp10

0xa7eb,	// (0x000196e3) popup_clock_analogue_window_cp10_g1

0xa7eb,	// (0x000196e3) popup_clock_analogue_window_cp10_g2

0x4f2a,	// (0x00013e22) popup_clock_analogue_window_cp10_g3

0x4f2a,	// (0x00013e22) popup_clock_analogue_window_cp10_g4

0xa7eb,	// (0x000196e3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001e6cc) popup_clock_analogue_window_cp10_g

0x4f3c,	// (0x00013e34) popup_clock_analogue_window_cp10_t1

0x4f6d,	// (0x00013e65) clock_digital_number_pane_cp10_ParamLimits

0x4f6d,	// (0x00013e65) clock_digital_number_pane_cp10

0x4f85,	// (0x00013e7d) clock_digital_number_pane_cp11_ParamLimits

0x4f85,	// (0x00013e7d) clock_digital_number_pane_cp11

0x4f9d,	// (0x00013e95) clock_digital_number_pane_cp12_ParamLimits

0x4f9d,	// (0x00013e95) clock_digital_number_pane_cp12

0x4fb5,	// (0x00013ead) clock_digital_number_pane_cp13_ParamLimits

0x4fb5,	// (0x00013ead) clock_digital_number_pane_cp13

0x4fcd,	// (0x00013ec5) clock_digital_separator_pane_cp10_ParamLimits

0x4fcd,	// (0x00013ec5) clock_digital_separator_pane_cp10

0x4fe5,	// (0x00013edd) popup_clock_digital_window_cp02_t1_ParamLimits

0x4fe5,	// (0x00013edd) popup_clock_digital_window_cp02_t1

0x9b7d,	// (0x00018a75) clock_digital_number_pane_cp10_g1

0x9b7d,	// (0x00018a75) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001e6e7) clock_digital_number_pane_cp10_g

0x9b7d,	// (0x00018a75) clock_digital_separator_pane_cp10_g1

0x9b7d,	// (0x00018a75) clock_digital_separator_pane_g2_cp10

0xa976,	// (0x0001986e) navi_pane_vded_g4

0xa97f,	// (0x00019877) navi_pane_vded_g5

0xa988,	// (0x00019880) navi_pane_vded_t1

0x9499,	// (0x00018391) main_vded_pane

0x5111,	// (0x00014009) main_vded_pane_g1

0x511b,	// (0x00014013) main_vded_pane_g2

0x5125,	// (0x0001401d) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001e6ec) main_vded_pane_g

0x512f,	// (0x00014027) main_vded_pane_t1

0x513d,	// (0x00014035) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001e6f3) main_vded_pane_t

0x514b,	// (0x00014043) vded_slider_pane

0x5153,	// (0x0001404b) vded_video_pane

0xc994,	// (0x0001b88c) vded_video_pane_g1

0x515b,	// (0x00014053) vded_video_pane_g2

0xc39c,	// (0x0001b294) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001e6f8) vded_video_pane_g

0xc99e,	// (0x0001b896) vded_slider_pane_g1

0xc0ab,	// (0x0001afa3) vded_slider_pane_g2

0xc9a7,	// (0x0001b89f) vded_slider_pane_g3

0xc9b0,	// (0x0001b8a8) vded_slider_pane_g4

0xc9b9,	// (0x0001b8b1) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001e6ff) vded_slider_pane_g

0x4b3e,	// (0x00013a36) mup3_rocker_pane_ParamLimits

0x4b3e,	// (0x00013a36) mup3_rocker_pane

0x5164,	// (0x0001405c) mup3_control_keys_pane_g1

0x516c,	// (0x00014064) mup3_control_keys_pane_g2

0x5174,	// (0x0001406c) mup3_control_keys_pane_g3

0x517c,	// (0x00014074) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001e70a) mup3_control_keys_pane_g

0x03c9,	// (0x0000f2c1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x03c9,	// (0x0000f2c1) popup_toolbar2_fixed_window_cp01

0x4b72,	// (0x00013a6a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b72,	// (0x00013a6a) popup_toolbar2_fixed_window_cp02

0xb1fd,	// (0x0001a0f5) popup_call2_audio_second_window_t4_ParamLimits

0xb1fd,	// (0x0001a0f5) popup_call2_audio_second_window_t4

0xb72b,	// (0x0001a623) popup_call2_audio_first_window_t6_ParamLimits

0xb72b,	// (0x0001a623) popup_call2_audio_first_window_t6

0xb9c1,	// (0x0001a8b9) popup_call2_audio_out_window_t6_ParamLimits

0xb9c1,	// (0x0001a8b9) popup_call2_audio_out_window_t6

0x9499,	// (0x00018391) main_vitu_pane

0x518c,	// (0x00014084) aid_size_cell_itu_ParamLimits

0x518c,	// (0x00014084) aid_size_cell_itu

0x9509,	// (0x00018401) bg_popup_window_pane_cp08_ParamLimits

0x9509,	// (0x00018401) bg_popup_window_pane_cp08

0x51a2,	// (0x0001409a) field_vitu_entry_pane_ParamLimits

0x51a2,	// (0x0001409a) field_vitu_entry_pane

0x51b9,	// (0x000140b1) grid_vitu_function_pane_ParamLimits

0x51b9,	// (0x000140b1) grid_vitu_function_pane

0x51d4,	// (0x000140cc) grid_vitu_itu_pane_ParamLimits

0x51d4,	// (0x000140cc) grid_vitu_itu_pane

0x51f2,	// (0x000140ea) cell_vitu_itu_pane_ParamLimits

0x51f2,	// (0x000140ea) cell_vitu_itu_pane

0x5214,	// (0x0001410c) cell_vitu_function_pane_ParamLimits

0x5214,	// (0x0001410c) cell_vitu_function_pane

0x9509,	// (0x00018401) bg_popup_sub_pane_cp08_ParamLimits

0x9509,	// (0x00018401) bg_popup_sub_pane_cp08

0x522d,	// (0x00014125) field_vitu_entry_pane_t1_ParamLimits

0x522d,	// (0x00014125) field_vitu_entry_pane_t1

0xc9da,	// (0x0001b8d2) field_vitu_entry_pane_t2_ParamLimits

0xc9da,	// (0x0001b8d2) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001e718) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001e718) field_vitu_entry_pane_t

0xc9f7,	// (0x0001b8ef) bg_button_pane_cp05_ParamLimits

0xc9f7,	// (0x0001b8ef) bg_button_pane_cp05

0x524b,	// (0x00014143) cell_vitu_itu_pane_g1

0x5263,	// (0x0001415b) cell_vitu_itu_pane_t1_ParamLimits

0x5263,	// (0x0001415b) cell_vitu_itu_pane_t1

0x5275,	// (0x0001416d) cell_vitu_itu_pane_t2_ParamLimits

0x5275,	// (0x0001416d) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001e71d) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001e71d) cell_vitu_itu_pane_t

0xca05,	// (0x0001b8fd) bg_button_pane_cp07

0x52aa,	// (0x000141a2) cell_vitu_function_pane_g1

0x9c0c,	// (0x00018b04) main_calc_pane_g1

0x01f0,	// (0x0000f0e8) aid_visual_content_pane

0x9499,	// (0x00018391) main_vradio_pane

0x52b3,	// (0x000141ab) main_vradio_pane_g1_ParamLimits

0x52b3,	// (0x000141ab) main_vradio_pane_g1

0xca0f,	// (0x0001b907) main_vradio_pane_g2_ParamLimits

0xca0f,	// (0x0001b907) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001e724) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001e724) main_vradio_pane_g

0x52cc,	// (0x000141c4) main_vradio_pane_t1_ParamLimits

0x52cc,	// (0x000141c4) main_vradio_pane_t1

0x52e1,	// (0x000141d9) main_vradio_pane_t2_ParamLimits

0x52e1,	// (0x000141d9) main_vradio_pane_t2

0xca1c,	// (0x0001b914) main_vradio_pane_t3_ParamLimits

0xca1c,	// (0x0001b914) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001e729) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001e729) main_vradio_pane_t

0x52f6,	// (0x000141ee) vradio_rocker_control_pane_ParamLimits

0x52f6,	// (0x000141ee) vradio_rocker_control_pane

0x5308,	// (0x00014200) vradio_station_info_pane_ParamLimits

0x5308,	// (0x00014200) vradio_station_info_pane

0xca30,	// (0x0001b928) vradio_frequency_info_pane_ParamLimits

0xca30,	// (0x0001b928) vradio_frequency_info_pane

0xc39c,	// (0x0001b294) vradio_station_info_pane_g1

0xca3f,	// (0x0001b937) vradio_station_info_pane_t1_ParamLimits

0xca3f,	// (0x0001b937) vradio_station_info_pane_t1

0xca61,	// (0x0001b959) vradio_station_info_pane_t2_ParamLimits

0xca61,	// (0x0001b959) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001e730) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001e730) vradio_station_info_pane_t

0xca73,	// (0x0001b96b) vradio_tuning_pane

0xca7b,	// (0x0001b973) vradio_rocker_control_pane_g1

0xca83,	// (0x0001b97b) vradio_rocker_control_pane_g2

0xca8b,	// (0x0001b983) vradio_rocker_control_pane_g3

0xca93,	// (0x0001b98b) vradio_rocker_control_pane_g4

0xca9b,	// (0x0001b993) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001e735) vradio_rocker_control_pane_g

0x531a,	// (0x00014212) vradio_frequency_info_pane_g1

0xcaa3,	// (0x0001b99b) vradio_frequency_info_pane_t1_ParamLimits

0xcaa3,	// (0x0001b99b) vradio_frequency_info_pane_t1

0x5324,	// (0x0001421c) vradio_tuning_pane_g1

0x532f,	// (0x00014227) vradio_tuning_pane_t1

0x94c7,	// (0x000183bf) area_side_right_pane_ParamLimits

0x94c7,	// (0x000183bf) area_side_right_pane

0xbe3c,	// (0x0001ad34) status_small_pane_g1

0xbe44,	// (0x0001ad3c) status_small_pane_g2

0xbe4d,	// (0x0001ad45) status_small_pane_g3

0xbe56,	// (0x0001ad4e) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0001e4f0) status_small_pane_g

0xbe5f,	// (0x0001ad57) status_small_pane_t1

0x9499,	// (0x00018391) main_video3_pane

0xcab7,	// (0x0001b9af) cams_zoom_vslider_pane

0xcabf,	// (0x0001b9b7) image3_wide_pane_ParamLimits

0xcabf,	// (0x0001b9b7) image3_wide_pane

0xcad9,	// (0x0001b9d1) image3_wide_small_pane

0xcae5,	// (0x0001b9dd) main_video3_pane_g1_ParamLimits

0xcae5,	// (0x0001b9dd) main_video3_pane_g1

0xcb01,	// (0x0001b9f9) main_video3_pane_g2_ParamLimits

0xcb01,	// (0x0001b9f9) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001e740) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001e740) main_video3_pane_g

0xcb1d,	// (0x0001ba15) main_video3_pane_t1_ParamLimits

0xcb1d,	// (0x0001ba15) main_video3_pane_t1

0xcb48,	// (0x0001ba40) main_video3_pane_t2_ParamLimits

0xcb48,	// (0x0001ba40) main_video3_pane_t2

0xcb73,	// (0x0001ba6b) main_video3_pane_t3_ParamLimits

0xcb73,	// (0x0001ba6b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001e745) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001e745) main_video3_pane_t

0xcba0,	// (0x0001ba98) cams_zoom_vslider_pane_g1

0xcba9,	// (0x0001baa1) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001e74c) cams_zoom_vslider_pane_g

0xcbb1,	// (0x0001baa9) small_slider_vertical_pane

0xc39c,	// (0x0001b294) small_slider_vertical_pane_g1

0xc39c,	// (0x0001b294) small_slider_vertical_pane_g2

0xcbb9,	// (0x0001bab1) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001e751) small_slider_vertical_pane_g

0x9499,	// (0x00018391) main_hwr_training_pane

0xcbc2,	// (0x0001baba) hwr_training_instruct_pane_ParamLimits

0xcbc2,	// (0x0001baba) hwr_training_instruct_pane

0x533e,	// (0x00014236) hwr_training_navi_pane_ParamLimits

0x533e,	// (0x00014236) hwr_training_navi_pane

0x535d,	// (0x00014255) hwr_training_write_pane_ParamLimits

0x535d,	// (0x00014255) hwr_training_write_pane

0x9499,	// (0x00018391) bg_frame_shadow_pane

0xcbf9,	// (0x0001baf1) hwr_training_write_pane_g1

0xcc01,	// (0x0001baf9) hwr_training_write_pane_g2

0xcc09,	// (0x0001bb01) hwr_training_write_pane_g3

0xcc11,	// (0x0001bb09) hwr_training_write_pane_g4

0xcc19,	// (0x0001bb11) hwr_training_write_pane_g5

0xcc21,	// (0x0001bb19) hwr_training_write_pane_g6

0xcc29,	// (0x0001bb21) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001e758) hwr_training_write_pane_g

0xcc31,	// (0x0001bb29) hwr_training_navi_pane_g1_ParamLimits

0xcc31,	// (0x0001bb29) hwr_training_navi_pane_g1

0xcc43,	// (0x0001bb3b) hwr_training_navi_pane_g2_ParamLimits

0xcc43,	// (0x0001bb3b) hwr_training_navi_pane_g2

0xcc55,	// (0x0001bb4d) hwr_training_navi_pane_g3_ParamLimits

0xcc55,	// (0x0001bb4d) hwr_training_navi_pane_g3

0xcc65,	// (0x0001bb5d) hwr_training_navi_pane_g4_ParamLimits

0xcc65,	// (0x0001bb5d) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001e767) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001e767) hwr_training_navi_pane_g

0xcc72,	// (0x0001bb6a) hwr_training_navi_pane_t1

0x53a5,	// (0x0001429d) list_single_hwr_training_instruct_pane_ParamLimits

0x53a5,	// (0x0001429d) list_single_hwr_training_instruct_pane

0xcc80,	// (0x0001bb78) list_single_hwr_training_instruct_pane_t1

0xc2dc,	// (0x0001b1d4) bg_frame_shadow_pane_g1

0xcc8f,	// (0x0001bb87) bg_frame_shadow_pane_g2

0xcc97,	// (0x0001bb8f) bg_frame_shadow_pane_g3

0xcc9f,	// (0x0001bb97) bg_frame_shadow_pane_g4

0xcca7,	// (0x0001bb9f) bg_frame_shadow_pane_g5

0xccaf,	// (0x0001bba7) bg_frame_shadow_pane_g6

0xccb7,	// (0x0001bbaf) bg_frame_shadow_pane_g7

0x9d49,	// (0x00018c41) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001e772) bg_frame_shadow_pane_g

0x9499,	// (0x00018391) main_video_tele_dialer_pane

0x53ba,	// (0x000142b2) aid_size_cell_video_keypad_ParamLimits

0x53ba,	// (0x000142b2) aid_size_cell_video_keypad

0x53d4,	// (0x000142cc) grid_video_dialer_keypad_pane_ParamLimits

0x53d4,	// (0x000142cc) grid_video_dialer_keypad_pane

0x5420,	// (0x00014318) video_down_pane_cp_ParamLimits

0x5420,	// (0x00014318) video_down_pane_cp

0x5452,	// (0x0001434a) cell_video_dialer_keypad_pane_ParamLimits

0x5452,	// (0x0001434a) cell_video_dialer_keypad_pane

0xccbf,	// (0x0001bbb7) bg_button_pane_cp08_ParamLimits

0xccbf,	// (0x0001bbb7) bg_button_pane_cp08

0x5474,	// (0x0001436c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5474,	// (0x0001436c) cell_video_dialer_keypad_pane_g1

0x4b28,	// (0x00013a20) mup3_rocker2_pane_ParamLimits

0x4b28,	// (0x00013a20) mup3_rocker2_pane

0xc39c,	// (0x0001b294) mup3_rocker2_pane_g1

0x3629,	// (0x00012521) main_dialer2_pane

0x9499,	// (0x00018391) main_mp4_pane

0xccd3,	// (0x0001bbcb) main_mp4_pane_g1_ParamLimits

0xccd3,	// (0x0001bbcb) main_mp4_pane_g1

0xccd3,	// (0x0001bbcb) main_mp4_pane_g2_ParamLimits

0xccd3,	// (0x0001bbcb) main_mp4_pane_g2

0x54ab,	// (0x000143a3) main_mp4_pane_g3_ParamLimits

0x54ab,	// (0x000143a3) main_mp4_pane_g3

0xcce1,	// (0x0001bbd9) main_mp4_pane_g4_ParamLimits

0xcce1,	// (0x0001bbd9) main_mp4_pane_g4

0xcd09,	// (0x0001bc01) main_mp4_pane_g5_ParamLimits

0xcd09,	// (0x0001bc01) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001e792) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001e792) main_mp4_pane_g

0xcd59,	// (0x0001bc51) main_mp4_pane_t1_ParamLimits

0xcd59,	// (0x0001bc51) main_mp4_pane_t1

0xcdb5,	// (0x0001bcad) main_mp4_pane_t2_ParamLimits

0xcdb5,	// (0x0001bcad) main_mp4_pane_t2

0xce07,	// (0x0001bcff) main_mp4_pane_t3_ParamLimits

0xce07,	// (0x0001bcff) main_mp4_pane_t3

0xce27,	// (0x0001bd1f) main_mp4_pane_t4_ParamLimits

0xce27,	// (0x0001bd1f) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001e79f) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001e79f) main_mp4_pane_t

0xce6b,	// (0x0001bd63) mp4_progress_pane_ParamLimits

0xce6b,	// (0x0001bd63) mp4_progress_pane

0xceb5,	// (0x0001bdad) mp4_rocker_pane_ParamLimits

0xceb5,	// (0x0001bdad) mp4_rocker_pane

0xcedd,	// (0x0001bdd5) mp4_progress_pane_t1

0xcef6,	// (0x0001bdee) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001e7a8) mp4_progress_pane_t

0xcf0f,	// (0x0001be07) mup_progress_pane_cp04

0xc39c,	// (0x0001b294) mp4_rocker_pane_g1

0x54e7,	// (0x000143df) aid_cell_size_keypad2_ParamLimits

0x54e7,	// (0x000143df) aid_cell_size_keypad2

0x54fd,	// (0x000143f5) dialer2_ne_pane_ParamLimits

0x54fd,	// (0x000143f5) dialer2_ne_pane

0x5517,	// (0x0001440f) grid_dialer2_keypad_pane_ParamLimits

0x5517,	// (0x0001440f) grid_dialer2_keypad_pane

0xc181,	// (0x0001b079) bg_popup_call_pane_cp07_ParamLimits

0xc181,	// (0x0001b079) bg_popup_call_pane_cp07

0x5533,	// (0x0001442b) dialer2_ne_pane_t1_ParamLimits

0x5533,	// (0x0001442b) dialer2_ne_pane_t1

0x556e,	// (0x00014466) cell_dialer2_keypad_pane_ParamLimits

0x556e,	// (0x00014466) cell_dialer2_keypad_pane

0xcf2d,	// (0x0001be25) bg_button_pane_pane_cp04_ParamLimits

0xcf2d,	// (0x0001be25) bg_button_pane_pane_cp04

0x5590,	// (0x00014488) cell_dialer2_keypad_pane_g1_ParamLimits

0x5590,	// (0x00014488) cell_dialer2_keypad_pane_g1

0x13c3,	// (0x000102bb) aid_placing_vt_set_content_ParamLimits

0x13c3,	// (0x000102bb) aid_placing_vt_set_content

0x13eb,	// (0x000102e3) aid_placing_vt_set_title_ParamLimits

0x13eb,	// (0x000102e3) aid_placing_vt_set_title

0x9499,	// (0x00018391) main_image3_pane

0x5656,	// (0x0001454e) area_side_right_pane_cp01_ParamLimits

0x5656,	// (0x0001454e) area_side_right_pane_cp01

0xccd3,	// (0x0001bbcb) main_image3_pane_g1_ParamLimits

0xccd3,	// (0x0001bbcb) main_image3_pane_g1

0x566d,	// (0x00014565) main_image3_pane_g2_ParamLimits

0x566d,	// (0x00014565) main_image3_pane_g2

0x5695,	// (0x0001458d) main_image3_pane_g3_ParamLimits

0x5695,	// (0x0001458d) main_image3_pane_g3

0x56bf,	// (0x000145b7) main_image3_pane_g4_ParamLimits

0x56bf,	// (0x000145b7) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001e7b7) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001e7b7) main_image3_pane_g

0x56e9,	// (0x000145e1) main_image3_pane_t1_ParamLimits

0x56e9,	// (0x000145e1) main_image3_pane_t1

0x5741,	// (0x00014639) main_image3_pane_t2_ParamLimits

0x5741,	// (0x00014639) main_image3_pane_t2

0x5793,	// (0x0001468b) main_image3_pane_t3_ParamLimits

0x5793,	// (0x0001468b) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001e7c0) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001e7c0) main_image3_pane_t

0x9509,	// (0x00018401) grid_sctrl_middle_pane_cp01_ParamLimits

0x9509,	// (0x00018401) grid_sctrl_middle_pane_cp01

0x581b,	// (0x00014713) cell_sctrl_middle_pane_cp01_ParamLimits

0x581b,	// (0x00014713) cell_sctrl_middle_pane_cp01

0x5838,	// (0x00014730) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5838,	// (0x00014730) cell_sctrl_middle_pane_cp01_g1

0x9499,	// (0x00018391) main_call4_pane

0x584e,	// (0x00014746) aid_size_button_call4_ParamLimits

0x584e,	// (0x00014746) aid_size_button_call4

0x587f,	// (0x00014777) call4_windows_pane_ParamLimits

0x587f,	// (0x00014777) call4_windows_pane

0x589f,	// (0x00014797) grid_call4_button_pane_ParamLimits

0x589f,	// (0x00014797) grid_call4_button_pane

0xcf6b,	// (0x0001be63) call4_windows_conf_pane

0xcf82,	// (0x0001be7a) popup_call4_audio_first_window_ParamLimits

0xcf82,	// (0x0001be7a) popup_call4_audio_first_window

0xcfce,	// (0x0001bec6) popup_call4_audio_second_window_ParamLimits

0xcfce,	// (0x0001bec6) popup_call4_audio_second_window

0xcfe2,	// (0x0001beda) popup_call4_audio_wait_window_ParamLimits

0xcfe2,	// (0x0001beda) popup_call4_audio_wait_window

0x58cc,	// (0x000147c4) cell_call4_button_pane_ParamLimits

0x58cc,	// (0x000147c4) cell_call4_button_pane

0x58f5,	// (0x000147ed) bg_button_pane_cp09_ParamLimits

0x58f5,	// (0x000147ed) bg_button_pane_cp09

0x5901,	// (0x000147f9) cell_call4_button_pane_g1_ParamLimits

0x5901,	// (0x000147f9) cell_call4_button_pane_g1

0x5927,	// (0x0001481f) cell_call4_button_pane_t1_ParamLimits

0x5927,	// (0x0001481f) cell_call4_button_pane_t1

0xd02a,	// (0x0001bf22) popup_call4_audio_conf_window_ParamLimits

0xd02a,	// (0x0001bf22) popup_call4_audio_conf_window

0x4b88,	// (0x00013a80) mup3_progress_pane_t1_ParamLimits

0x4ba7,	// (0x00013a9f) mup3_progress_pane_t2_ParamLimits

0xc6af,	// (0x0001b5a7) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0001e694) mup3_progress_pane_t_ParamLimits

0xc6cc,	// (0x0001b5c4) mup_progress_pane_cp03_ParamLimits

0x5184,	// (0x0001407c) mup3_control_keys_pane_g4_copy1

0xce99,	// (0x0001bd91) mp4_rocker2_pane_ParamLimits

0xce99,	// (0x0001bd91) mp4_rocker2_pane

0xd03e,	// (0x0001bf36) mp4_rocker2_pane_g1

0xd046,	// (0x0001bf3e) mp4_rocker2_pane_g2

0xd04e,	// (0x0001bf46) mp4_rocker2_pane_g3

0xd056,	// (0x0001bf4e) mp4_rocker2_pane_g4

0xd05e,	// (0x0001bf56) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001e7c9) mp4_rocker2_pane_g

0x9499,	// (0x00018391) main_camera4_pane

0x9499,	// (0x00018391) main_video4_pane

0x53ee,	// (0x000142e6) main_video_tele_dialer_pane_t1_ParamLimits

0x53ee,	// (0x000142e6) main_video_tele_dialer_pane_t1

0x5407,	// (0x000142ff) main_video_tele_dialer_pane_t2_ParamLimits

0x5407,	// (0x000142ff) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001e783) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001e783) main_video_tele_dialer_pane_t

0x5965,	// (0x0001485d) cam4_autofocus_pane_ParamLimits

0x5965,	// (0x0001485d) cam4_autofocus_pane

0x597b,	// (0x00014873) cam4_image_uncrop_pane_ParamLimits

0x597b,	// (0x00014873) cam4_image_uncrop_pane

0x5995,	// (0x0001488d) cam4_indicators_pane_ParamLimits

0x5995,	// (0x0001488d) cam4_indicators_pane

0x59c0,	// (0x000148b8) main_camera4_pane_g1_ParamLimits

0x59c0,	// (0x000148b8) main_camera4_pane_g1

0x59d2,	// (0x000148ca) main_camera4_pane_g2_ParamLimits

0x59d2,	// (0x000148ca) main_camera4_pane_g2

0x59e5,	// (0x000148dd) main_camera4_pane_g3_ParamLimits

0x59e5,	// (0x000148dd) main_camera4_pane_g3

0x59f8,	// (0x000148f0) main_camera4_pane_g4_ParamLimits

0x59f8,	// (0x000148f0) main_camera4_pane_g4

0x5a0b,	// (0x00014903) main_camera4_pane_g5_ParamLimits

0x5a0b,	// (0x00014903) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001e7d4) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001e7d4) main_camera4_pane_g

0x5a2f,	// (0x00014927) main_camera4_pane_t1_ParamLimits

0x5a2f,	// (0x00014927) main_camera4_pane_t1

0xc608,	// (0x0001b500) bg_tb_trans_pane_cp06

0xd08a,	// (0x0001bf82) cam4_indicators_pane_g1

0xd09b,	// (0x0001bf93) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001e7ef) cam4_indicators_pane_g

0xd0b9,	// (0x0001bfb1) cam4_indicators_pane_t1

0x5a93,	// (0x0001498b) main_video4_pane_g1_ParamLimits

0x5a93,	// (0x0001498b) main_video4_pane_g1

0x5aa2,	// (0x0001499a) main_video4_pane_g2_ParamLimits

0x5aa2,	// (0x0001499a) main_video4_pane_g2

0x5ab1,	// (0x000149a9) main_video4_pane_g3_ParamLimits

0x5ab1,	// (0x000149a9) main_video4_pane_g3

0x5ac0,	// (0x000149b8) main_video4_pane_g4_ParamLimits

0x5ac0,	// (0x000149b8) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001e7f6) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001e7f6) main_video4_pane_g

0x5ade,	// (0x000149d6) vid4_indicators_pane_ParamLimits

0x5ade,	// (0x000149d6) vid4_indicators_pane

0x5b0c,	// (0x00014a04) video4_image_uncrop_cif_pane_ParamLimits

0x5b0c,	// (0x00014a04) video4_image_uncrop_cif_pane

0x5b26,	// (0x00014a1e) video4_image_uncrop_nhd_pane_ParamLimits

0x5b26,	// (0x00014a1e) video4_image_uncrop_nhd_pane

0x597b,	// (0x00014873) video4_image_uncrop_vga_pane_ParamLimits

0x597b,	// (0x00014873) video4_image_uncrop_vga_pane

0x9509,	// (0x00018401) bg_tb_trans_pane_cp07

0xd0e5,	// (0x0001bfdd) vid4_indicators_pane_g1

0xd0f9,	// (0x0001bff1) vid4_indicators_pane_g2

0xd10d,	// (0x0001c005) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001e801) vid4_indicators_pane_g

0xd13c,	// (0x0001c034) vid4_indicators_pane_t1

0x5b3a,	// (0x00014a32) cam4_autofocus_pane_g1

0x5b42,	// (0x00014a3a) cam4_autofocus_pane_g2

0x5b4a,	// (0x00014a42) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001e80c) cam4_autofocus_pane_g

0x5b52,	// (0x00014a4a) cam4_autofocus_pane_g3_copy1

0x5436,	// (0x0001432e) video_down_pane_cp_t1

0x5444,	// (0x0001433c) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001e788) video_down_pane_cp_t

0x9509,	// (0x00018401) popup_vitu2_window_ParamLimits

0x9509,	// (0x00018401) popup_vitu2_window

0x5b5a,	// (0x00014a52) aid_size_cell2_itu2_ParamLimits

0x5b5a,	// (0x00014a52) aid_size_cell2_itu2

0x5b80,	// (0x00014a78) aid_size_cell_itu2_ParamLimits

0x5b80,	// (0x00014a78) aid_size_cell_itu2

0x5bdc,	// (0x00014ad4) bg_popup_window_pane_cp09_ParamLimits

0x5bdc,	// (0x00014ad4) bg_popup_window_pane_cp09

0x5bea,	// (0x00014ae2) field_vitu2_entry_pane_ParamLimits

0x5bea,	// (0x00014ae2) field_vitu2_entry_pane

0x5c10,	// (0x00014b08) grid_vitu2_function_pane_ParamLimits

0x5c10,	// (0x00014b08) grid_vitu2_function_pane

0x5c61,	// (0x00014b59) grid_vitu2_itu_pane_ParamLimits

0x5c61,	// (0x00014b59) grid_vitu2_itu_pane

0x5cf9,	// (0x00014bf1) cell_vitu2_itu_pane_ParamLimits

0x5cf9,	// (0x00014bf1) cell_vitu2_itu_pane

0x5d25,	// (0x00014c1d) cell_vitu2_function_pane_ParamLimits

0x5d25,	// (0x00014c1d) cell_vitu2_function_pane

0xd153,	// (0x0001c04b) bg_popup_call_pane_cp08_ParamLimits

0xd153,	// (0x0001c04b) bg_popup_call_pane_cp08

0xd16a,	// (0x0001c062) field_vitu2_entry_pane_g1

0xd176,	// (0x0001c06e) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001e813) field_vitu2_entry_pane_g

0x5d64,	// (0x00014c5c) field_vitu2_entry_pane_t1_ParamLimits

0x5d64,	// (0x00014c5c) field_vitu2_entry_pane_t1

0xd190,	// (0x0001c088) field_vitu2_entry_pane_t2_ParamLimits

0xd190,	// (0x0001c088) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001e81a) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001e81a) field_vitu2_entry_pane_t

0x5d93,	// (0x00014c8b) bg_button_pane_cp010_ParamLimits

0x5d93,	// (0x00014c8b) bg_button_pane_cp010

0xd1b5,	// (0x0001c0ad) cell_vitu2_itu_pane_g1

0x5daf,	// (0x00014ca7) cell_vitu2_itu_pane_t1_ParamLimits

0x5daf,	// (0x00014ca7) cell_vitu2_itu_pane_t1

0x5e0d,	// (0x00014d05) cell_vitu2_itu_pane_t2_ParamLimits

0x5e0d,	// (0x00014d05) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001e824) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001e824) cell_vitu2_itu_pane_t

0x9509,	// (0x00018401) bg_button_pane_cp011

0x5ef9,	// (0x00014df1) cell_vitu2_function_pane_g1

0x9499,	// (0x00018391) main_myfav_hc_pane

0x57e3,	// (0x000146db) popup_image3_note_pane_ParamLimits

0x57e3,	// (0x000146db) popup_image3_note_pane

0x57ff,	// (0x000146f7) popup_image3_tool_bar_pane_ParamLimits

0x57ff,	// (0x000146f7) popup_image3_tool_bar_pane

0x5e9b,	// (0x00014d93) cell_vitu2_itu_pane_t3_ParamLimits

0x5e9b,	// (0x00014d93) cell_vitu2_itu_pane_t3

0x9499,	// (0x00018391) bg_popup_trans_pane

0xd1c7,	// (0x0001c0bf) grid_image3_tool_bar_pane

0xd1d1,	// (0x0001c0c9) bg_popup_trans_pane_g1

0xa100,	// (0x00018ff8) bg_popup_trans_pane_g2

0xd1d9,	// (0x0001c0d1) bg_popup_trans_pane_g3

0xd1e1,	// (0x0001c0d9) bg_popup_trans_pane_g4

0xd1e9,	// (0x0001c0e1) bg_popup_trans_pane_g5

0xd1f1,	// (0x0001c0e9) bg_popup_trans_pane_g6

0xd1f9,	// (0x0001c0f1) bg_popup_trans_pane_g7

0xd201,	// (0x0001c0f9) bg_popup_trans_pane_g8

0xa0e0,	// (0x00018fd8) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001e82b) bg_popup_trans_pane_g

0xd209,	// (0x0001c101) cell_image3_tool_bar_pane_ParamLimits

0xd209,	// (0x0001c101) cell_image3_tool_bar_pane

0xc39c,	// (0x0001b294) cell_image3_tool_bar_pane_g1

0x9499,	// (0x00018391) bg_popup_trans_pane_cp1

0xd21d,	// (0x0001c115) popup_image3_note_pane_t1

0xd22b,	// (0x0001c123) popup_image3_note_pane_t2

0xd239,	// (0x0001c131) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001e83e) popup_image3_note_pane_t

0xd247,	// (0x0001c13f) popup_image3_note_pane_t3_copy1

0x5f0d,	// (0x00014e05) bg_myfav_hc_instruction_pane_ParamLimits

0x5f0d,	// (0x00014e05) bg_myfav_hc_instruction_pane

0x5f21,	// (0x00014e19) cell_myfav_contact_pane_ParamLimits

0x5f21,	// (0x00014e19) cell_myfav_contact_pane

0x5f3f,	// (0x00014e37) cell_myfav_contact_pane_cp1_ParamLimits

0x5f3f,	// (0x00014e37) cell_myfav_contact_pane_cp1

0x5f57,	// (0x00014e4f) cell_myfav_contact_pane_cp2_ParamLimits

0x5f57,	// (0x00014e4f) cell_myfav_contact_pane_cp2

0x5f6f,	// (0x00014e67) cell_myfav_contact_pane_cp3_ParamLimits

0x5f6f,	// (0x00014e67) cell_myfav_contact_pane_cp3

0x5f86,	// (0x00014e7e) cell_myfav_contact_pane_cp4_ParamLimits

0x5f86,	// (0x00014e7e) cell_myfav_contact_pane_cp4

0x5f9e,	// (0x00014e96) cell_myfav_contact_pane_cp5_ParamLimits

0x5f9e,	// (0x00014e96) cell_myfav_contact_pane_cp5

0x5fb2,	// (0x00014eaa) cell_myfav_contact_pane_cp6_ParamLimits

0x5fb2,	// (0x00014eaa) cell_myfav_contact_pane_cp6

0x5fc8,	// (0x00014ec0) cell_myfav_contact_pane_cp7_ParamLimits

0x5fc8,	// (0x00014ec0) cell_myfav_contact_pane_cp7

0xd255,	// (0x0001c14d) listscroll_gen_pane_cp05

0x5fe2,	// (0x00014eda) main_myfav_hc_pane_g1_ParamLimits

0x5fe2,	// (0x00014eda) main_myfav_hc_pane_g1

0x5ffc,	// (0x00014ef4) main_myfav_hc_pane_g2_ParamLimits

0x5ffc,	// (0x00014ef4) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001e845) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001e845) main_myfav_hc_pane_g

0x602e,	// (0x00014f26) main_myfav_hc_pane_t1_ParamLimits

0x602e,	// (0x00014f26) main_myfav_hc_pane_t1

0xd25e,	// (0x0001c156) main_myfav_hc_pane_t2_ParamLimits

0xd25e,	// (0x0001c156) main_myfav_hc_pane_t2

0xd270,	// (0x0001c168) main_myfav_hc_pane_t3_ParamLimits

0xd270,	// (0x0001c168) main_myfav_hc_pane_t3

0x6045,	// (0x00014f3d) main_myfav_hc_pane_t4_ParamLimits

0x6045,	// (0x00014f3d) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001e84c) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001e84c) main_myfav_hc_pane_t

0xc39c,	// (0x0001b294) bg_myfav_hc_instruction_pane_g1

0xd2b8,	// (0x0001c1b0) cell_myfav_contact_pane_g1_ParamLimits

0xd2b8,	// (0x0001c1b0) cell_myfav_contact_pane_g1

0xd2b8,	// (0x0001c1b0) cell_myfav_contact_pane_g2_ParamLimits

0xd2b8,	// (0x0001c1b0) cell_myfav_contact_pane_g2

0xd2c4,	// (0x0001c1bc) cell_myfav_contact_pane_g3_ParamLimits

0xd2c4,	// (0x0001c1bc) cell_myfav_contact_pane_g3

0xc699,	// (0x0001b591) cell_myfav_contact_pane_g4_ParamLimits

0xc699,	// (0x0001b591) cell_myfav_contact_pane_g4

0xd2d1,	// (0x0001c1c9) cell_myfav_contact_pane_g5_ParamLimits

0xd2d1,	// (0x0001c1c9) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001e857) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001e857) cell_myfav_contact_pane_g

0x6016,	// (0x00014f0e) main_myfav_hc_pane_g3_ParamLimits

0x6016,	// (0x00014f0e) main_myfav_hc_pane_g3

0x032b,	// (0x0000f223) popup_adpt_find_window

0x606d,	// (0x00014f65) afind_page_pane_ParamLimits

0x606d,	// (0x00014f65) afind_page_pane

0x6082,	// (0x00014f7a) aid_size_cell_afind_ParamLimits

0x6082,	// (0x00014f7a) aid_size_cell_afind

0x60a0,	// (0x00014f98) bg_popup_sub_pane_cp09_ParamLimits

0x60a0,	// (0x00014f98) bg_popup_sub_pane_cp09

0x60ad,	// (0x00014fa5) find_pane_cp01_ParamLimits

0x60ad,	// (0x00014fa5) find_pane_cp01

0xd2dd,	// (0x0001c1d5) grid_afind_control_pane_ParamLimits

0xd2dd,	// (0x0001c1d5) grid_afind_control_pane

0x60ba,	// (0x00014fb2) grid_afind_pane_ParamLimits

0x60ba,	// (0x00014fb2) grid_afind_pane

0x60dc,	// (0x00014fd4) cell_afind_pane_ParamLimits

0x60dc,	// (0x00014fd4) cell_afind_pane

0xc39c,	// (0x0001b294) afind_page_pane_g1

0x6143,	// (0x0001503b) afind_page_pane_g2

0x614c,	// (0x00015044) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001e862) afind_page_pane_g

0x6155,	// (0x0001504d) afind_page_pane_t1

0xd2f1,	// (0x0001c1e9) cell_afind_grid_control_pane_ParamLimits

0xd2f1,	// (0x0001c1e9) cell_afind_grid_control_pane

0xcf2d,	// (0x0001be25) bg_button_pane_cp69_ParamLimits

0xcf2d,	// (0x0001be25) bg_button_pane_cp69

0x6175,	// (0x0001506d) cell_afind_pane_g1_ParamLimits

0x6175,	// (0x0001506d) cell_afind_pane_g1

0x6182,	// (0x0001507a) cell_afind_pane_t1_ParamLimits

0x6182,	// (0x0001507a) cell_afind_pane_t1

0x9ef9,	// (0x00018df1) bg_button_pane_cp72

0xd300,	// (0x0001c1f8) cell_afind_grid_control_pane_g1

0x30e9,	// (0x00011fe1) aid_image_placing_area_ParamLimits

0x30e9,	// (0x00011fe1) aid_image_placing_area

0xc9c2,	// (0x0001b8ba) field_vitu_entry_pane_g1_ParamLimits

0xc9c2,	// (0x0001b8ba) field_vitu_entry_pane_g1

0xc9ce,	// (0x0001b8c6) field_vitu_entry_pane_g2_ParamLimits

0xc9ce,	// (0x0001b8c6) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001e713) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001e713) field_vitu_entry_pane_g

0x524b,	// (0x00014143) cell_vitu_itu_pane_g1_ParamLimits

0x528d,	// (0x00014185) cell_vitu_itu_pane_t3_ParamLimits

0x528d,	// (0x00014185) cell_vitu_itu_pane_t3

0xcedd,	// (0x0001bdd5) mp4_progress_pane_t1_ParamLimits

0xcef6,	// (0x0001bdee) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001e7a8) mp4_progress_pane_t_ParamLimits

0xcf0f,	// (0x0001be07) mup_progress_pane_cp04_ParamLimits

0x6059,	// (0x00014f51) main_myfav_hc_pane_t5_ParamLimits

0x6059,	// (0x00014f51) main_myfav_hc_pane_t5

0x94bf,	// (0x000183b7) aid_zoom_text_primary

0x032b,	// (0x0000f223) popup_adpt_find_window_ParamLimits

0x9509,	// (0x00018401) main_cam_set_pane

0x59ac,	// (0x000148a4) cam4_zoom_pane_ParamLimits

0x59ac,	// (0x000148a4) cam4_zoom_pane

0x6194,	// (0x0001508c) main_cam_set_pane_g1_ParamLimits

0x6194,	// (0x0001508c) main_cam_set_pane_g1

0x61a2,	// (0x0001509a) main_cam_set_pane_g2_ParamLimits

0x61a2,	// (0x0001509a) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001e869) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001e869) main_cam_set_pane_g

0x61c3,	// (0x000150bb) main_cam_set_pane_t1_ParamLimits

0x61c3,	// (0x000150bb) main_cam_set_pane_t1

0x61de,	// (0x000150d6) main_cset_listscroll_pane_ParamLimits

0x61de,	// (0x000150d6) main_cset_listscroll_pane

0x61fe,	// (0x000150f6) main_cset_slider_pane_ParamLimits

0x61fe,	// (0x000150f6) main_cset_slider_pane

0xd311,	// (0x0001c209) main_cset_list_pane_ParamLimits

0xd311,	// (0x0001c209) main_cset_list_pane

0xd321,	// (0x0001c219) scroll_pane_cp028

0x6224,	// (0x0001511c) aid_area_touch_slider

0x6240,	// (0x00015138) cset_slider_pane

0x626a,	// (0x00015162) main_cset_slider_pane_g1

0x627f,	// (0x00015177) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001e86e) main_cset_slider_pane_g

0xd35a,	// (0x0001c252) main_cset_slider_pane_t1

0x633b,	// (0x00015233) main_cset_slider_pane_t2

0x6355,	// (0x0001524d) main_cset_slider_pane_t3

0x636f,	// (0x00015267) main_cset_slider_pane_t4

0x6389,	// (0x00015281) main_cset_slider_pane_t5

0x63a3,	// (0x0001529b) main_cset_slider_pane_t6

0x63b8,	// (0x000152b0) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001e893) main_cset_slider_pane_t

0x64bc,	// (0x000153b4) cset_list_set_pane_ParamLimits

0x64bc,	// (0x000153b4) cset_list_set_pane

0x64ce,	// (0x000153c6) aid_position_infowindow_above

0x64d6,	// (0x000153ce) aid_position_infowindow_below

0xd3fa,	// (0x0001c2f2) cset_list_set_pane_g1_ParamLimits

0xd3fa,	// (0x0001c2f2) cset_list_set_pane_g1

0xd406,	// (0x0001c2fe) cset_list_set_pane_g3_ParamLimits

0xd406,	// (0x0001c2fe) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001e8b2) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001e8b2) cset_list_set_pane_g

0xd415,	// (0x0001c30d) cset_list_set_pane_t1_ParamLimits

0xd415,	// (0x0001c30d) cset_list_set_pane_t1

0x9509,	// (0x00018401) list_highlight_pane_cp021_ParamLimits

0x9509,	// (0x00018401) list_highlight_pane_cp021

0xaafc,	// (0x000199f4) cset_slider_pane_g1

0xab0e,	// (0x00019a06) cset_slider_pane_g2

0xab05,	// (0x000199fd) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001e8b7) cset_slider_pane_g

0xd42a,	// (0x0001c322) aid_area_touch_cam4_zoom

0xd432,	// (0x0001c32a) cam4_zoom_cont_pane

0xd43a,	// (0x0001c332) cam4_zoom_pane_g1

0xd442,	// (0x0001c33a) cam4_zoom_pane_g2

0x64de,	// (0x000153d6) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001e8be) cam4_zoom_pane_g

0xd44a,	// (0x0001c342) cam4_zoom_cont_pane_g1

0xd453,	// (0x0001c34b) cam4_zoom_cont_pane_g2

0xd45c,	// (0x0001c354) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001e8c5) cam4_zoom_cont_pane_g

0x586c,	// (0x00014764) call4_image_pane_ParamLimits

0x586c,	// (0x00014764) call4_image_pane

0xcf6b,	// (0x0001be63) call4_windows_conf_pane_ParamLimits

0xcfac,	// (0x0001bea4) popup_call4_audio_in_window_ParamLimits

0xcfac,	// (0x0001bea4) popup_call4_audio_in_window

0x9499,	// (0x00018391) bg_popup_call2_act_pane_cp02

0xd022,	// (0x0001bf1a) call4_list_conf_pane

0xc39c,	// (0x0001b294) call4_image_pane_g1

0xc39c,	// (0x0001b294) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d4) call4_image_pane_g

0xd465,	// (0x0001c35d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd465,	// (0x0001c35d) list_single_graphic_popup_conf4_pane

0x9499,	// (0x00018391) list_highlight_pane_cp022

0xd478,	// (0x0001c370) list_single_graphic_popup_conf4_pane_g1

0xa6bb,	// (0x000195b3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001e8cc) list_single_graphic_popup_conf4_pane_g

0xd480,	// (0x0001c378) list_single_graphic_popup_conf4_pane_t1

0x150f,	// (0x00010407) popup_vtel_slider_window_ParamLimits

0x150f,	// (0x00010407) popup_vtel_slider_window

0xcf1b,	// (0x0001be13) dialer2_ne_pane_t2_ParamLimits

0xcf1b,	// (0x0001be13) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001e7ad) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001e7ad) dialer2_ne_pane_t

0xc181,	// (0x0001b079) bg_popup_sub_pane_cp010_ParamLimits

0xc181,	// (0x0001b079) bg_popup_sub_pane_cp010

0x64e6,	// (0x000153de) popup_vtel_slider_window_g1_ParamLimits

0x64e6,	// (0x000153de) popup_vtel_slider_window_g1

0x64f9,	// (0x000153f1) popup_vtel_slider_window_g2_ParamLimits

0x64f9,	// (0x000153f1) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001e8d1) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001e8d1) popup_vtel_slider_window_g

0x654f,	// (0x00015447) vtel_slider_pane_ParamLimits

0x654f,	// (0x00015447) vtel_slider_pane

0x6571,	// (0x00015469) vtel_slider_pane_g1_ParamLimits

0x6571,	// (0x00015469) vtel_slider_pane_g1

0x6585,	// (0x0001547d) vtel_slider_pane_g2_ParamLimits

0x6585,	// (0x0001547d) vtel_slider_pane_g2

0x659d,	// (0x00015495) vtel_slider_pane_g3_ParamLimits

0x659d,	// (0x00015495) vtel_slider_pane_g3

0x6571,	// (0x00015469) vtel_slider_pane_g4_ParamLimits

0x6571,	// (0x00015469) vtel_slider_pane_g4

0x65b3,	// (0x000154ab) vtel_slider_pane_g5_ParamLimits

0x65b3,	// (0x000154ab) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001e8da) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001e8da) vtel_slider_pane_g

0x9509,	// (0x00018401) main_gallery2_pane

0x5bac,	// (0x00014aa4) aid_size_row_itut2_dropdow_list_ParamLimits

0x5bac,	// (0x00014aa4) aid_size_row_itut2_dropdow_list

0x5c38,	// (0x00014b30) grid_vitu2_function_top_pane_ParamLimits

0x5c38,	// (0x00014b30) grid_vitu2_function_top_pane

0x5ca2,	// (0x00014b9a) popup_vitu2_dropdown_list_window_ParamLimits

0x5ca2,	// (0x00014b9a) popup_vitu2_dropdown_list_window

0x5ccb,	// (0x00014bc3) popup_vitu2_match_list_window

0x65d7,	// (0x000154cf) cell_vitu2_function_top_pane_ParamLimits

0x65d7,	// (0x000154cf) cell_vitu2_function_top_pane

0x65ef,	// (0x000154e7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x65ef,	// (0x000154e7) cell_vitu2_function_top_pane_cp01

0x660b,	// (0x00015503) cell_vitu2_function_top_wide_pane_ParamLimits

0x660b,	// (0x00015503) cell_vitu2_function_top_wide_pane

0x9509,	// (0x00018401) bg_button_pane_cp012

0x6627,	// (0x0001551f) cell_vitu2_function_top_pane_g1

0xd496,	// (0x0001c38e) bg_button_pane_cp013_ParamLimits

0xd496,	// (0x0001c38e) bg_button_pane_cp013

0x663b,	// (0x00015533) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x663b,	// (0x00015533) cell_vitu2_function_top_wide_pane_g1

0x9509,	// (0x00018401) bg_popup_sub_pane_cp20

0x6653,	// (0x0001554b) list_vitu2_match_list_pane

0xd1d1,	// (0x0001c0c9) bg_popup_sub_pane_cp20_g1

0xd1d9,	// (0x0001c0d1) bg_popup_sub_pane_cp20_g2

0xa100,	// (0x00018ff8) bg_popup_sub_pane_cp20_g3

0xd1e1,	// (0x0001c0d9) bg_popup_sub_pane_cp20_g4

0xa0e0,	// (0x00018fd8) bg_popup_sub_pane_cp20_g5

0xd4b2,	// (0x0001c3aa) bg_popup_sub_pane_cp20_g6

0xd1f1,	// (0x0001c0e9) bg_popup_sub_pane_cp20_g7

0xd1f9,	// (0x0001c0f1) bg_popup_sub_pane_cp20_g8

0xd201,	// (0x0001c0f9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001e8e5) bg_popup_sub_pane_cp20_g

0xd4ba,	// (0x0001c3b2) list_vitu2_match_list_item_pane_ParamLimits

0xd4ba,	// (0x0001c3b2) list_vitu2_match_list_item_pane

0xd4cc,	// (0x0001c3c4) list_vitu2_match_list_item_pane_t1

0x9499,	// (0x00018391) bg_popup_sub_pane_cp21

0xa570,	// (0x00019468) grid_vitu2_dropdown_list_pane

0x66bb,	// (0x000155b3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x66bb,	// (0x000155b3) cell_vitu2_dropdown_list_char_pane

0x66dc,	// (0x000155d4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x66dc,	// (0x000155d4) cell_vitu2_dropdown_list_ctrl_pane

0xd4da,	// (0x0001c3d2) cell_vitu2_dropdown_list_char_pane_g1

0xd4e3,	// (0x0001c3db) cell_vitu2_dropdown_list_char_pane_g2

0xd4ec,	// (0x0001c3e4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001e902) cell_vitu2_dropdown_list_char_pane_g

0x6708,	// (0x00015600) cell_vitu2_dropdown_list_char_pane_t1

0x6716,	// (0x0001560e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6716,	// (0x0001560e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6723,	// (0x0001561b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6723,	// (0x0001561b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6730,	// (0x00015628) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6730,	// (0x00015628) cell_vitu2_dropdown_list_ctrl_pane_g3

0x673d,	// (0x00015635) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x673d,	// (0x00015635) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc608,	// (0x0001b500) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc608,	// (0x0001b500) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001e909) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001e909) cell_vitu2_dropdown_list_ctrl_pane_g

0x6759,	// (0x00015651) aid_size_cell_gallery2_ParamLimits

0x6759,	// (0x00015651) aid_size_cell_gallery2

0x6777,	// (0x0001566f) grid_gallery2_pane_ParamLimits

0x6777,	// (0x0001566f) grid_gallery2_pane

0x6791,	// (0x00015689) scroll_pane_cp029_ParamLimits

0x6791,	// (0x00015689) scroll_pane_cp029

0x679d,	// (0x00015695) cell_gallery2_pane_ParamLimits

0x679d,	// (0x00015695) cell_gallery2_pane

0xd4f5,	// (0x0001c3ed) cell_gallery2_pane_g2

0x67f8,	// (0x000156f0) cell_gallery2_pane_g3

0xd4fd,	// (0x0001c3f5) cell_gallery2_pane_g4

0xd505,	// (0x0001c3fd) cell_gallery2_pane_g5

0x9e9d,	// (0x00018d95) grid_highlight_pane_cp10

0x5ccb,	// (0x00014bc3) popup_vitu2_match_list_window_ParamLimits

0x5ce2,	// (0x00014bda) popup_vitu2_query_window_ParamLimits

0x5ce2,	// (0x00014bda) popup_vitu2_query_window

0x9499,	// (0x00018391) bg_vitu2_candi_button_pane

0xd4da,	// (0x0001c3d2) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4e3,	// (0x0001c3db) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4ec,	// (0x0001c3e4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6800,	// (0x000156f8) bg_button_pane_cp015

0x6812,	// (0x0001570a) bg_button_pane_cp016

0x6825,	// (0x0001571d) bg_button_pane_cp017

0xbe81,	// (0x0001ad79) bg_popup_sub_pane_cp22

0xd50d,	// (0x0001c405) popup_vitu2_query_window_g1

0x686a,	// (0x00015762) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001e914) popup_vitu2_query_window_g

0x6889,	// (0x00015781) popup_vitu2_query_window_t1_ParamLimits

0x6889,	// (0x00015781) popup_vitu2_query_window_t1

0x68be,	// (0x000157b6) popup_vitu2_query_window_t2_ParamLimits

0x68be,	// (0x000157b6) popup_vitu2_query_window_t2

0x68d0,	// (0x000157c8) popup_vitu2_query_window_t3_ParamLimits

0x68d0,	// (0x000157c8) popup_vitu2_query_window_t3

0x68f8,	// (0x000157f0) popup_vitu2_query_window_t4_ParamLimits

0x68f8,	// (0x000157f0) popup_vitu2_query_window_t4

0x6919,	// (0x00015811) popup_vitu2_query_window_t5_ParamLimits

0x6919,	// (0x00015811) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001e91b) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001e91b) popup_vitu2_query_window_t

0xd309,	// (0x0001c201) main_cset_text_pane

0x6224,	// (0x0001511c) aid_area_touch_slider_ParamLimits

0x6240,	// (0x00015138) cset_slider_pane_ParamLimits

0x626a,	// (0x00015162) main_cset_slider_pane_g1_ParamLimits

0x627f,	// (0x00015177) main_cset_slider_pane_g2_ParamLimits

0xd32a,	// (0x0001c222) main_cset_slider_pane_g3_ParamLimits

0xd32a,	// (0x0001c222) main_cset_slider_pane_g3

0x6294,	// (0x0001518c) main_cset_slider_pane_g4_ParamLimits

0x6294,	// (0x0001518c) main_cset_slider_pane_g4

0x62a3,	// (0x0001519b) main_cset_slider_pane_g5_ParamLimits

0x62a3,	// (0x0001519b) main_cset_slider_pane_g5

0x62af,	// (0x000151a7) main_cset_slider_pane_g6_ParamLimits

0x62af,	// (0x000151a7) main_cset_slider_pane_g6

0xf976,	// (0x0001e86e) main_cset_slider_pane_g_ParamLimits

0xd35a,	// (0x0001c252) main_cset_slider_pane_t1_ParamLimits

0x633b,	// (0x00015233) main_cset_slider_pane_t2_ParamLimits

0x6355,	// (0x0001524d) main_cset_slider_pane_t3_ParamLimits

0x636f,	// (0x00015267) main_cset_slider_pane_t4_ParamLimits

0x6389,	// (0x00015281) main_cset_slider_pane_t5_ParamLimits

0x63a3,	// (0x0001529b) main_cset_slider_pane_t6_ParamLimits

0x63b8,	// (0x000152b0) main_cset_slider_pane_t7_ParamLimits

0x63e2,	// (0x000152da) main_cset_slider_pane_t8_ParamLimits

0x63e2,	// (0x000152da) main_cset_slider_pane_t8

0x640a,	// (0x00015302) main_cset_slider_pane_t9_ParamLimits

0x640a,	// (0x00015302) main_cset_slider_pane_t9

0x6432,	// (0x0001532a) main_cset_slider_pane_t10_ParamLimits

0x6432,	// (0x0001532a) main_cset_slider_pane_t10

0x645a,	// (0x00015352) main_cset_slider_pane_t11_ParamLimits

0x645a,	// (0x00015352) main_cset_slider_pane_t11

0x6482,	// (0x0001537a) main_cset_slider_pane_t12_ParamLimits

0x6482,	// (0x0001537a) main_cset_slider_pane_t12

0x649f,	// (0x00015397) main_cset_slider_pane_t13_ParamLimits

0x649f,	// (0x00015397) main_cset_slider_pane_t13

0xf99b,	// (0x0001e893) main_cset_slider_pane_t_ParamLimits

0x9499,	// (0x00018391) bg_popup_sub_pane_cp011

0xd519,	// (0x0001c411) main_cset_text_pane_g1

0xd521,	// (0x0001c419) main_cset_text_pane_t1

0xd52f,	// (0x0001c427) main_cset_text_pane_t2

0xd53d,	// (0x0001c435) main_cset_text_pane_t3

0xd54b,	// (0x0001c443) main_cset_text_pane_t4

0xd559,	// (0x0001c451) main_cset_text_pane_t5

0xd567,	// (0x0001c45f) main_cset_text_pane_t6

0xd575,	// (0x0001c46d) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001e92a) main_cset_text_pane_t

0x9499,	// (0x00018391) main_cam4_burst_pane

0x9499,	// (0x00018391) main_cam5_pane

0x6163,	// (0x0001505b) bg_button_pane_cp019

0x616c,	// (0x00015064) bg_button_pane_cp020

0xd336,	// (0x0001c22e) main_cset_slider_pane_g7_ParamLimits

0xd336,	// (0x0001c22e) main_cset_slider_pane_g7

0xd342,	// (0x0001c23a) main_cset_slider_pane_g8_ParamLimits

0xd342,	// (0x0001c23a) main_cset_slider_pane_g8

0x62c3,	// (0x000151bb) main_cset_slider_pane_g9_ParamLimits

0x62c3,	// (0x000151bb) main_cset_slider_pane_g9

0x62cf,	// (0x000151c7) main_cset_slider_pane_g10_ParamLimits

0x62cf,	// (0x000151c7) main_cset_slider_pane_g10

0x62db,	// (0x000151d3) main_cset_slider_pane_g11_ParamLimits

0x62db,	// (0x000151d3) main_cset_slider_pane_g11

0x62e7,	// (0x000151df) main_cset_slider_pane_g12_ParamLimits

0x62e7,	// (0x000151df) main_cset_slider_pane_g12

0x62f3,	// (0x000151eb) main_cset_slider_pane_g13_ParamLimits

0x62f3,	// (0x000151eb) main_cset_slider_pane_g13

0x62ff,	// (0x000151f7) main_cset_slider_pane_g14_ParamLimits

0x62ff,	// (0x000151f7) main_cset_slider_pane_g14

0x630b,	// (0x00015203) main_cset_slider_pane_g15_ParamLimits

0x630b,	// (0x00015203) main_cset_slider_pane_g15

0xd388,	// (0x0001c280) main_cset_slider_pane_t14_ParamLimits

0xd388,	// (0x0001c280) main_cset_slider_pane_t14

0xd3c1,	// (0x0001c2b9) main_cset_slider_pane_t15_ParamLimits

0xd3c1,	// (0x0001c2b9) main_cset_slider_pane_t15

0x6990,	// (0x00015888) aid_cam4_burst_size_cell_ParamLimits

0x6990,	// (0x00015888) aid_cam4_burst_size_cell

0x69b0,	// (0x000158a8) grid_cam4_burst_pane_ParamLimits

0x69b0,	// (0x000158a8) grid_cam4_burst_pane

0x69e8,	// (0x000158e0) linegrid_cam4_burst_pane_ParamLimits

0x69e8,	// (0x000158e0) linegrid_cam4_burst_pane

0xd583,	// (0x0001c47b) scroll_pane_cp30_ParamLimits

0xd583,	// (0x0001c47b) scroll_pane_cp30

0x6a0c,	// (0x00015904) cell_cam4_burst_pane_ParamLimits

0x6a0c,	// (0x00015904) cell_cam4_burst_pane

0xd58f,	// (0x0001c487) linegrid_cam4_burst_pane_g1_ParamLimits

0xd58f,	// (0x0001c487) linegrid_cam4_burst_pane_g1

0x6a59,	// (0x00015951) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a59,	// (0x00015951) linegrid_cam4_burst_pane_g2

0xd59c,	// (0x0001c494) linegrid_cam4_burst_pane_g3_ParamLimits

0xd59c,	// (0x0001c494) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001e939) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001e939) linegrid_cam4_burst_pane_g

0x6a6a,	// (0x00015962) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a6a,	// (0x00015962) linegrid_cam4_burst_pane_g3_copy1

0xd5a9,	// (0x0001c4a1) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5a9,	// (0x0001c4a1) linegrid_cam4_burst_pane_g4

0x6a84,	// (0x0001597c) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a84,	// (0x0001597c) linegrid_cam4_burst_pane_g5

0x6a95,	// (0x0001598d) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a95,	// (0x0001598d) linegrid_cam4_burst_pane_g6

0xd5b6,	// (0x0001c4ae) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5b6,	// (0x0001c4ae) linegrid_cam4_burst_pane_g7

0x6aac,	// (0x000159a4) cell_cam4_burst_pane_g1

0xd5cf,	// (0x0001c4c7) main_cam5_pane_t1_ParamLimits

0xd5cf,	// (0x0001c4c7) main_cam5_pane_t1

0xd5e1,	// (0x0001c4d9) main_cam5_pane_t2_ParamLimits

0xd5e1,	// (0x0001c4d9) main_cam5_pane_t2

0xd5f3,	// (0x0001c4eb) main_cam5_pane_t3_ParamLimits

0xd5f3,	// (0x0001c4eb) main_cam5_pane_t3

0xd605,	// (0x0001c4fd) main_cam5_pane_t4_ParamLimits

0xd605,	// (0x0001c4fd) main_cam5_pane_t4

0xd61d,	// (0x0001c515) main_cam5_pane_t5_ParamLimits

0xd61d,	// (0x0001c515) main_cam5_pane_t5

0xd631,	// (0x0001c529) main_cam5_pane_t6_ParamLimits

0xd631,	// (0x0001c529) main_cam5_pane_t6

0xd645,	// (0x0001c53d) main_cam5_pane_t7_ParamLimits

0xd645,	// (0x0001c53d) main_cam5_pane_t7

0xd657,	// (0x0001c54f) main_cam5_pane_t8_ParamLimits

0xd657,	// (0x0001c54f) main_cam5_pane_t8

0xd673,	// (0x0001c56b) main_cam5_pane_t9_ParamLimits

0xd673,	// (0x0001c56b) main_cam5_pane_t9

0xd685,	// (0x0001c57d) main_cam5_pane_t10_ParamLimits

0xd685,	// (0x0001c57d) main_cam5_pane_t10

0xd697,	// (0x0001c58f) main_cam5_pane_t11_ParamLimits

0xd697,	// (0x0001c58f) main_cam5_pane_t11

0xd6a9,	// (0x0001c5a1) main_cam5_pane_t12_ParamLimits

0xd6a9,	// (0x0001c5a1) main_cam5_pane_t12

0xd6be,	// (0x0001c5b6) main_cam5_pane_t13_ParamLimits

0xd6be,	// (0x0001c5b6) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001e945) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001e945) main_cam5_pane_t

0x03ad,	// (0x0000f2a5) popup_scut_keymap_window_ParamLimits

0x03ad,	// (0x0000f2a5) popup_scut_keymap_window

0x6abf,	// (0x000159b7) aid_size_cell_brow_shortcut

0x9e9d,	// (0x00018d95) bg_popup_window_pane_cp010

0x6acb,	// (0x000159c3) grid_scut_pane

0x6ad7,	// (0x000159cf) cell_scut_pane_ParamLimits

0x6ad7,	// (0x000159cf) cell_scut_pane

0x6aee,	// (0x000159e6) cell_scut_pane_g1

0xd6db,	// (0x0001c5d3) cell_scut_pane_t1

0xd6ea,	// (0x0001c5e2) cell_scut_pane_t2

0x6af7,	// (0x000159ef) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001e960) cell_scut_pane_t

0x4741,	// (0x00013639) main_mup3_pane_g8_ParamLimits

0x4741,	// (0x00013639) main_mup3_pane_g8

0x5bc4,	// (0x00014abc) area_vitu2_query_pane_ParamLimits

0x5bc4,	// (0x00014abc) area_vitu2_query_pane

0x6838,	// (0x00015730) input_focus_pane_cp08

0xd6f9,	// (0x0001c5f1) area_vitu2_query_pane_g1

0x6b05,	// (0x000159fd) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001e967) area_vitu2_query_pane_g

0x6b16,	// (0x00015a0e) area_vitu2_query_pane_t1_ParamLimits

0x6b16,	// (0x00015a0e) area_vitu2_query_pane_t1

0x6b2a,	// (0x00015a22) area_vitu2_query_pane_t2_ParamLimits

0x6b2a,	// (0x00015a22) area_vitu2_query_pane_t2

0x6b3e,	// (0x00015a36) area_vitu2_query_pane_t3_ParamLimits

0x6b3e,	// (0x00015a36) area_vitu2_query_pane_t3

0xd705,	// (0x0001c5fd) area_vitu2_query_pane_t4_ParamLimits

0xd705,	// (0x0001c5fd) area_vitu2_query_pane_t4

0xd72d,	// (0x0001c625) area_vitu2_query_pane_t5_ParamLimits

0xd72d,	// (0x0001c625) area_vitu2_query_pane_t5

0xd755,	// (0x0001c64d) area_vitu2_query_pane_t6_ParamLimits

0xd755,	// (0x0001c64d) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001e96c) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001e96c) area_vitu2_query_pane_t

0x6b66,	// (0x00015a5e) bg_button_pane_cp018

0x6b74,	// (0x00015a6c) bg_button_pane_cp021

0x6b80,	// (0x00015a78) bg_button_pane_cp022

0x6b8f,	// (0x00015a87) input_focus_pane_cp09

0xa7f7,	// (0x000196ef) aid_size_touch_mv_arrow_left

0xa820,	// (0x00019718) aid_size_touch_mv_arrow_right

0x6323,	// (0x0001521b) main_cset_slider_pane_g16_ParamLimits

0x6323,	// (0x0001521b) main_cset_slider_pane_g16

0x632f,	// (0x00015227) main_cset_slider_pane_g17_ParamLimits

0x632f,	// (0x00015227) main_cset_slider_pane_g17

0x6aac,	// (0x000159a4) cell_cam4_burst_pane_g1_ParamLimits

0x9499,	// (0x00018391) compa_mode_pane

0x6509,	// (0x00015401) popup_vtel_slider_window_g3_ParamLimits

0x6509,	// (0x00015401) popup_vtel_slider_window_g3

0x6520,	// (0x00015418) popup_vtel_slider_window_g4_ParamLimits

0x6520,	// (0x00015418) popup_vtel_slider_window_g4

0x6537,	// (0x0001542f) popup_vtel_slider_window_t1_ParamLimits

0x6537,	// (0x0001542f) popup_vtel_slider_window_t1

0x9499,	// (0x00018391) main_cl_pane

0xbea9,	// (0x0001ada1) popup_imed_adjust2_window_ParamLimits

0xbe81,	// (0x0001ad79) bg_tb_trans_pane_cp05_ParamLimits

0xc8f7,	// (0x0001b7ef) popup_imed_adjust2_window_g1_ParamLimits

0xc906,	// (0x0001b7fe) popup_imed_adjust2_window_g2_ParamLimits

0xc906,	// (0x0001b7fe) popup_imed_adjust2_window_g2

0xc912,	// (0x0001b80a) popup_imed_adjust2_window_g3_ParamLimits

0xc912,	// (0x0001b80a) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001e6d7) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001e6d7) popup_imed_adjust2_window_g

0xc91e,	// (0x0001b816) popup_imed_adjust2_window_t1_ParamLimits

0xc936,	// (0x0001b82e) slider_imed_adjust_pane_ParamLimits

0xc94a,	// (0x0001b842) slider_imed_adjust_pane_g1_ParamLimits

0xc95a,	// (0x0001b852) slider_imed_adjust_pane_g2_ParamLimits

0xc96a,	// (0x0001b862) slider_imed_adjust_pane_g3_ParamLimits

0xc97b,	// (0x0001b873) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001e6de) slider_imed_adjust_pane_g_ParamLimits

0x594d,	// (0x00014845) aid_touch_area_cam4_ParamLimits

0x594d,	// (0x00014845) aid_touch_area_cam4

0xd066,	// (0x0001bf5e) battery_pane_cp01

0x5a1c,	// (0x00014914) main_camera4_pane_g6_ParamLimits

0x5a1c,	// (0x00014914) main_camera4_pane_g6

0x5a46,	// (0x0001493e) main_camera4_pane_t2_ParamLimits

0x5a46,	// (0x0001493e) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001e7e1) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001e7e1) main_camera4_pane_t

0x5a7b,	// (0x00014973) aid_touch_area_vid4_ParamLimits

0x5a7b,	// (0x00014973) aid_touch_area_vid4

0x5acf,	// (0x000149c7) main_video4_pane_g5_ParamLimits

0x5acf,	// (0x000149c7) main_video4_pane_g5

0x5af4,	// (0x000149ec) vid4_progress_pane_ParamLimits

0x5af4,	// (0x000149ec) vid4_progress_pane

0xd34e,	// (0x0001c246) main_cset_slider_pane_g18_ParamLimits

0xd34e,	// (0x0001c246) main_cset_slider_pane_g18

0xd5c3,	// (0x0001c4bb) cell_cam4_burst_pane_g2_ParamLimits

0xd5c3,	// (0x0001c4bb) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001e940) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001e940) cell_cam4_burst_pane_g

0x9c6c,	// (0x00018b64) bg_cl_pane_ParamLimits

0x9c6c,	// (0x00018b64) bg_cl_pane

0x6b9e,	// (0x00015a96) cl_header_pane_ParamLimits

0x6b9e,	// (0x00015a96) cl_header_pane

0x6bb2,	// (0x00015aaa) cl_listscroll_pane_ParamLimits

0x6bb2,	// (0x00015aaa) cl_listscroll_pane

0xd7a1,	// (0x0001c699) bg_cl_pane_g1

0xd7a9,	// (0x0001c6a1) bg_cl_pane_g2

0xd7b1,	// (0x0001c6a9) bg_cl_pane_g3

0xd7b9,	// (0x0001c6b1) bg_cl_pane_g4

0xd7c1,	// (0x0001c6b9) bg_cl_pane_g5

0xd7c9,	// (0x0001c6c1) bg_cl_pane_g6

0xd7d1,	// (0x0001c6c9) bg_cl_pane_g7

0xd7d9,	// (0x0001c6d1) bg_cl_pane_g8

0xd7e1,	// (0x0001c6d9) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001e97b) bg_cl_pane_g

0x6bc2,	// (0x00015aba) aid_height_cl_leading_ParamLimits

0x6bc2,	// (0x00015aba) aid_height_cl_leading

0x6bce,	// (0x00015ac6) aid_height_cl_text_ParamLimits

0x6bce,	// (0x00015ac6) aid_height_cl_text

0x9509,	// (0x00018401) bg_cl_header_pane_ParamLimits

0x9509,	// (0x00018401) bg_cl_header_pane

0x6bed,	// (0x00015ae5) cl_header_pane_g1_ParamLimits

0x6bed,	// (0x00015ae5) cl_header_pane_g1

0x6c03,	// (0x00015afb) cl_header_pane_t1_ParamLimits

0x6c03,	// (0x00015afb) cl_header_pane_t1

0xd7e9,	// (0x0001c6e1) cl_list_pane

0xd321,	// (0x0001c219) hc_scroll_pane_cp01

0xa0e0,	// (0x00018fd8) bg_cl_header_pane_g1

0xd1d1,	// (0x0001c0c9) bg_cl_header_pane_g2

0xa100,	// (0x00018ff8) bg_cl_header_pane_g3

0xd1e1,	// (0x0001c0d9) bg_cl_header_pane_g4

0xd1d9,	// (0x0001c0d1) bg_cl_header_pane_g5

0xd4b2,	// (0x0001c3aa) bg_cl_header_pane_g6

0xd1f9,	// (0x0001c0f1) bg_cl_header_pane_g7

0xd201,	// (0x0001c0f9) bg_cl_header_pane_g8

0xd1f1,	// (0x0001c0e9) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001e98e) bg_cl_header_pane_g

0x6c1c,	// (0x00015b14) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c1c,	// (0x00015b14) hc_cl_list_double_graphic_heading_pane

0x6c2d,	// (0x00015b25) hc_cl_list_single_graphic_pane_ParamLimits

0x6c2d,	// (0x00015b25) hc_cl_list_single_graphic_pane

0x6c43,	// (0x00015b3b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c43,	// (0x00015b3b) hc_cl_list_single_graphic_pane_g1

0x6c4f,	// (0x00015b47) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c4f,	// (0x00015b47) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001e9a1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001e9a1) hc_cl_list_single_graphic_pane_g

0x6c63,	// (0x00015b5b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c63,	// (0x00015b5b) hc_cl_list_single_graphic_pane_t1

0x6c43,	// (0x00015b3b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c43,	// (0x00015b3b) hc_cl_list_double_graphic_heading_pane_g1

0x6c78,	// (0x00015b70) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c78,	// (0x00015b70) hc_cl_list_double_graphic_heading_pane_g2

0x6c8c,	// (0x00015b84) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c8c,	// (0x00015b84) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001e9a6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001e9a6) hc_cl_list_double_graphic_heading_pane_g

0x6ca0,	// (0x00015b98) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6ca0,	// (0x00015b98) hc_cl_list_double_graphic_heading_pane_t1

0x6cb5,	// (0x00015bad) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6cb5,	// (0x00015bad) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001e9ad) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001e9ad) hc_cl_list_double_graphic_heading_pane_t

0xd7fa,	// (0x0001c6f2) vid4_progress_pane_g1

0xd80a,	// (0x0001c702) vid4_progress_pane_g2

0x6cca,	// (0x00015bc2) vid4_progress_pane_g3

0xd81a,	// (0x0001c712) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001e9b2) vid4_progress_pane_g

0x6cdc,	// (0x00015bd4) vid4_progress_pane_t1

0xd832,	// (0x0001c72a) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001e9bd) vid4_progress_pane_t

0x6cf4,	// (0x00015bec) wait_bar_pane_cp07

0xc18f,	// (0x0001b087) blid_firmament_pane_ParamLimits

0xc1d2,	// (0x0001b0ca) popup_blid_sat_info2_window_g1

0xc1f6,	// (0x0001b0ee) popup_blid_sat_info2_window_t3

0xc204,	// (0x0001b0fc) popup_blid_sat_info2_window_t4

0xc212,	// (0x0001b10a) popup_blid_sat_info2_window_t5

0xc220,	// (0x0001b118) popup_blid_sat_info2_window_t6

0xc230,	// (0x0001b128) popup_blid_sat_info2_window_t7

0xc23e,	// (0x0001b136) popup_blid_sat_info2_window_t8

0xc24c,	// (0x0001b144) popup_blid_sat_info2_window_t9

0xc25a,	// (0x0001b152) popup_blid_sat_info2_window_t10

0xc31c,	// (0x0001b214) aid_firma_cardinal_ParamLimits

0xc330,	// (0x0001b228) blid_firmament_pane_t1_ParamLimits

0xc347,	// (0x0001b23f) blid_firmament_pane_t2_ParamLimits

0xc35e,	// (0x0001b256) blid_firmament_pane_t3_ParamLimits

0xc375,	// (0x0001b26d) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0001e5cb) blid_firmament_pane_t_ParamLimits

0xc38c,	// (0x0001b284) blid_sat_info_pane_ParamLimits

0x9509,	// (0x00018401) main_cam_set_pane_ParamLimits

0x5005,	// (0x00013efd) aid_size_cell_colour_35_ParamLimits

0x5025,	// (0x00013f1d) aid_size_cell_colour_112_ParamLimits

0x5045,	// (0x00013f3d) aid_size_cell_effect_ParamLimits

0xbe81,	// (0x0001ad79) bg_tb_trans_pane_cp02_ParamLimits

0xa376,	// (0x0001926e) heading_imed_pane_ParamLimits

0x5065,	// (0x00013f5d) listscroll_imed_pane_ParamLimits

0xb4a7,	// (0x0001a39f) popup_call2_audio_first_window_g5_ParamLimits

0xb4a7,	// (0x0001a39f) popup_call2_audio_first_window_g5

0x55f8,	// (0x000144f0) aid_size_touch_image3_arrow_left_ParamLimits

0x55f8,	// (0x000144f0) aid_size_touch_image3_arrow_left

0x5624,	// (0x0001451c) aid_size_touch_image3_arrow_right_ParamLimits

0x5624,	// (0x0001451c) aid_size_touch_image3_arrow_right

0xd847,	// (0x0001c73f) vid4_progress_pane_t3

0x5378,	// (0x00014270) main_hwr_training_symbol_option_pane_ParamLimits

0x5378,	// (0x00014270) main_hwr_training_symbol_option_pane

0xcbe4,	// (0x0001badc) popup_hwr_training_preview_window_ParamLimits

0xcbe4,	// (0x0001badc) popup_hwr_training_preview_window

0x5398,	// (0x00014290) hwr_training_navi_pane_g5_ParamLimits

0x5398,	// (0x00014290) hwr_training_navi_pane_g5

0xd1ad,	// (0x0001c0a5) popup_char_count_window

0x9509,	// (0x00018401) bg_popup_sub_pane_cp20_ParamLimits

0x6653,	// (0x0001554b) list_vitu2_match_list_pane_ParamLimits

0x6662,	// (0x0001555a) vitu2_page_scroll_pane_ParamLimits

0x6662,	// (0x0001555a) vitu2_page_scroll_pane

0xd87e,	// (0x0001c776) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd87e,	// (0x0001c776) list_single_hwr_training_symbol_option_pane

0xd891,	// (0x0001c789) list_single_hwr_training_symbol_option_pane_g1

0xd899,	// (0x0001c791) list_single_hwr_training_symbol_option_pane_t1

0xd8a7,	// (0x0001c79f) bg_button_pane_cp023

0xd8b0,	// (0x0001c7a8) bg_button_pane_cp024

0x6d3f,	// (0x00015c37) vitu2_page_scroll_pane_g1

0x6d47,	// (0x00015c3f) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001e9c4) vitu2_page_scroll_pane_g

0x6d4f,	// (0x00015c47) vitu2_page_scroll_pane_t1

0xc0ab,	// (0x0001afa3) popup_char_count_window_g1

0xd8e3,	// (0x0001c7db) popup_char_count_window_g2

0xd8ec,	// (0x0001c7e4) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001e9c9) popup_char_count_window_g

0xd8f5,	// (0x0001c7ed) popup_char_count_window_t1

0x9499,	// (0x00018391) main_vded2_pane

0xc8e3,	// (0x0001b7db) aid_size_cell_imed_line

0xc8ed,	// (0x0001b7e5) grid_imed_line_width_pane

0xd11e,	// (0x0001c016) vid4_indicators_pane_g4

0xd903,	// (0x0001c7fb) cell_imed_line_width_pane_ParamLimits

0xd903,	// (0x0001c7fb) cell_imed_line_width_pane

0xd917,	// (0x0001c80f) cell_imed_line_width_pane_g1

0xd920,	// (0x0001c818) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001e9d0) cell_imed_line_width_pane_g

0x6d5e,	// (0x00015c56) main_vded2_pane_g1_ParamLimits

0x6d5e,	// (0x00015c56) main_vded2_pane_g1

0x6d74,	// (0x00015c6c) main_vded2_pane_g2_ParamLimits

0x6d74,	// (0x00015c6c) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001e9d5) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001e9d5) main_vded2_pane_g

0x6d86,	// (0x00015c7e) vded2_slider_pane_ParamLimits

0x6d86,	// (0x00015c7e) vded2_slider_pane

0x6d96,	// (0x00015c8e) aid_size_touch_vded2_end

0x6da0,	// (0x00015c98) aid_size_touch_vded2_playhead

0xd928,	// (0x0001c820) aid_size_touch_vded2_start

0xd930,	// (0x0001c828) vded2_slider_bg_pane

0xd939,	// (0x0001c831) vded2_slider_pane_g1

0xd942,	// (0x0001c83a) vded2_slider_pane_g2

0x6daa,	// (0x00015ca2) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001e9da) vded2_slider_pane_g

0xd94a,	// (0x0001c842) vded2_slider_bg_pane_g1

0xd953,	// (0x0001c84b) vded2_slider_bg_pane_g2

0xd95c,	// (0x0001c854) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001e9e1) vded2_slider_bg_pane_g

0x2d58,	// (0x00011c50) aid_postcard_touch_down_pane_ParamLimits

0x2d58,	// (0x00011c50) aid_postcard_touch_down_pane

0x2d6e,	// (0x00011c66) aid_postcard_touch_up_pane_ParamLimits

0x2d6e,	// (0x00011c66) aid_postcard_touch_up_pane

0x9499,	// (0x00018391) main_blid2_pane

0xbe8f,	// (0x0001ad87) popup_blid2_search_window

0x9499,	// (0x00018391) blid2_gps_pane

0x9499,	// (0x00018391) blid2_navig_pane

0x9499,	// (0x00018391) blid2_search_pane

0x9499,	// (0x00018391) blid2_tripm_pane

0x6db5,	// (0x00015cad) blid2_search_pane_g1_ParamLimits

0x6db5,	// (0x00015cad) blid2_search_pane_g1

0x6dcf,	// (0x00015cc7) blid2_search_pane_t1_ParamLimits

0x6dcf,	// (0x00015cc7) blid2_search_pane_t1

0x6de1,	// (0x00015cd9) aid_size_cell_blid2_gps_ParamLimits

0x6de1,	// (0x00015cd9) aid_size_cell_blid2_gps

0x6df9,	// (0x00015cf1) blid2_gps_pane_g1_ParamLimits

0x6df9,	// (0x00015cf1) blid2_gps_pane_g1

0x6e0d,	// (0x00015d05) grid_blid2_satellite_pane_ParamLimits

0x6e0d,	// (0x00015d05) grid_blid2_satellite_pane

0x6e27,	// (0x00015d1f) blid2_navig_pane_g1_ParamLimits

0x6e27,	// (0x00015d1f) blid2_navig_pane_g1

0x6e33,	// (0x00015d2b) blid2_navig_pane_t1_ParamLimits

0x6e33,	// (0x00015d2b) blid2_navig_pane_t1

0x6e4e,	// (0x00015d46) blid2_navig_pane_t2_ParamLimits

0x6e4e,	// (0x00015d46) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001e9e8) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001e9e8) blid2_navig_pane_t

0x6e69,	// (0x00015d61) blid2_navig_ring_pane_ParamLimits

0x6e69,	// (0x00015d61) blid2_navig_ring_pane

0x6e82,	// (0x00015d7a) blid2_speed_pane_ParamLimits

0x6e82,	// (0x00015d7a) blid2_speed_pane

0x6e8e,	// (0x00015d86) blid2_tripm_pane_g1_ParamLimits

0x6e8e,	// (0x00015d86) blid2_tripm_pane_g1

0x6ea7,	// (0x00015d9f) blid2_tripm_pane_g2_ParamLimits

0x6ea7,	// (0x00015d9f) blid2_tripm_pane_g2

0x6ebb,	// (0x00015db3) blid2_tripm_pane_g3_ParamLimits

0x6ebb,	// (0x00015db3) blid2_tripm_pane_g3

0x6ecf,	// (0x00015dc7) blid2_tripm_pane_g4_ParamLimits

0x6ecf,	// (0x00015dc7) blid2_tripm_pane_g4

0x6ee3,	// (0x00015ddb) blid2_tripm_pane_g5_ParamLimits

0x6ee3,	// (0x00015ddb) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001e9ed) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001e9ed) blid2_tripm_pane_g

0x6f09,	// (0x00015e01) blid2_tripm_pane_t1_ParamLimits

0x6f09,	// (0x00015e01) blid2_tripm_pane_t1

0x6f24,	// (0x00015e1c) blid2_tripm_pane_t2_ParamLimits

0x6f24,	// (0x00015e1c) blid2_tripm_pane_t2

0x6f3d,	// (0x00015e35) blid2_tripm_pane_t3_ParamLimits

0x6f3d,	// (0x00015e35) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001e9fa) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001e9fa) blid2_tripm_pane_t

0x6f84,	// (0x00015e7c) cell_blid2_satellite_pane_ParamLimits

0x6f84,	// (0x00015e7c) cell_blid2_satellite_pane

0x6fa2,	// (0x00015e9a) cell_blid2_satellite_pane_g1

0xd965,	// (0x0001c85d) cell_blid2_satellite_pane_t1

0xc39c,	// (0x0001b294) blid2_speed_pane_g1

0xd973,	// (0x0001c86b) blid2_speed_pane_t1

0xd981,	// (0x0001c879) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001ea03) blid2_speed_pane_t

0xc39c,	// (0x0001b294) blid2_navig_ring_pane_g1

0x6fab,	// (0x00015ea3) blid2_navig_ring_pane_g2

0x6fb3,	// (0x00015eab) blid2_navig_ring_pane_g3

0x6fbb,	// (0x00015eb3) blid2_navig_ring_pane_g4

0x6fc3,	// (0x00015ebb) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001ea08) blid2_navig_ring_pane_g

0x9499,	// (0x00018391) bg_popup_window_pane_cp011

0xd98f,	// (0x0001c887) popup_blid2_search_window_g1

0xd997,	// (0x0001c88f) popup_blid2_search_window_t1

0xd9a5,	// (0x0001c89d) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001ea13) popup_blid2_search_window_t

0x9fef,	// (0x00018ee7) main_browser_pane_g1

0x9c6c,	// (0x00018b64) main_browser_pane_ParamLimits

0x9509,	// (0x00018401) bg_button_pane_cp011_ParamLimits

0x5ef9,	// (0x00014df1) cell_vitu2_function_pane_g1_ParamLimits

0xbe81,	// (0x0001ad79) bg_popup_sub_pane_cp22_ParamLimits

0x6838,	// (0x00015730) input_focus_pane_cp08_ParamLimits

0x684f,	// (0x00015747) popup_vitu2_query_button_pane_ParamLimits

0x684f,	// (0x00015747) popup_vitu2_query_button_pane

0x6860,	// (0x00015758) popup_vitu2_query_input_button_pane

0xd50d,	// (0x0001c405) popup_vitu2_query_window_g1_ParamLimits

0x686a,	// (0x00015762) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001e914) popup_vitu2_query_window_g_ParamLimits

0x9499,	// (0x00018391) bg_button_pane_cp026

0x6fcb,	// (0x00015ec3) popup_vitu2_query_input_button_pane_g1

0x9499,	// (0x00018391) bg_button_pane_cp025

0xd9b3,	// (0x0001c8ab) popup_vitu2_query_button_pane_t1

0x43ee,	// (0x000132e6) main_mp3_pane_t6

0x43fc,	// (0x000132f4) popup_slider_window_cp01

0xd082,	// (0x0001bf7a) cam4_battery_pane

0xd0db,	// (0x0001bfd3) cam4_battery_pane_cp02

0xd7f2,	// (0x0001c6ea) cam4_battery_pane_cp01

0xd7f2,	// (0x0001c6ea) cam4_battery_pane_cp03

0xc39c,	// (0x0001b294) cam4_battery_pane_g1

0xd9c1,	// (0x0001c8b9) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001ea18) cam4_battery_pane_g

0xc268,	// (0x0001b160) popup_blid_sat_info2_window_t11

0xa7f7,	// (0x000196ef) aid_size_touch_mv_arrow_left_ParamLimits

0xa820,	// (0x00019718) aid_size_touch_mv_arrow_right_ParamLimits

0xa87e,	// (0x00019776) navi_pane_g1_ParamLimits

0xa88a,	// (0x00019782) navi_pane_g2_ParamLimits

0xa8b8,	// (0x000197b0) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001e2dd) navi_pane_g_ParamLimits

0x2804,	// (0x000116fc) navi_pane_mv_t1_ParamLimits

0x5071,	// (0x00013f69) grid_imed_effect_pane_ParamLimits

0x140c,	// (0x00010304) aid_placing_vt_slider_lsc

0x9f3e,	// (0x00018e36) aid_placing_vt_slider_prt

0x9509,	// (0x00018401) bg_tb_trans_pane_cp01_ParamLimits

0xc528,	// (0x0001b420) popup_image_details_window_g1_ParamLimits

0xc53b,	// (0x0001b433) popup_image_details_window_g2_ParamLimits

0xc550,	// (0x0001b448) popup_image_details_window_g3_ParamLimits

0xc550,	// (0x0001b448) popup_image_details_window_g3

0xf718,	// (0x0001e610) popup_image_details_window_g_ParamLimits

0xc564,	// (0x0001b45c) popup_image_details_window_t1_ParamLimits

0xc576,	// (0x0001b46e) popup_image_details_window_t2_ParamLimits

0xc58f,	// (0x0001b487) popup_image_details_window_t3_ParamLimits

0xc5a3,	// (0x0001b49b) popup_image_details_window_t4_ParamLimits

0xc5be,	// (0x0001b4b6) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0001e617) popup_image_details_window_t_ParamLimits

0x6bda,	// (0x00015ad2) cl_header_name_pane_ParamLimits

0x6bda,	// (0x00015ad2) cl_header_name_pane

0x6fd3,	// (0x00015ecb) cl_header_name_pane_t1_ParamLimits

0x6fd3,	// (0x00015ecb) cl_header_name_pane_t1

0x6ff4,	// (0x00015eec) cl_header_name_pane_t2_ParamLimits

0x6ff4,	// (0x00015eec) cl_header_name_pane_t2

0x7036,	// (0x00015f2e) cl_header_name_pane_t3_ParamLimits

0x7036,	// (0x00015f2e) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001ea1d) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001ea1d) cl_header_name_pane_t

0xa947,	// (0x0001983f) navi_pane_mv_g2_ParamLimits

0xd16a,	// (0x0001c062) field_vitu2_entry_pane_g1_ParamLimits

0xd176,	// (0x0001c06e) field_vitu2_entry_pane_g2_ParamLimits

0xd182,	// (0x0001c07a) field_vitu2_entry_pane_g3_ParamLimits

0xd182,	// (0x0001c07a) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001e813) field_vitu2_entry_pane_g_ParamLimits

0xd1b5,	// (0x0001c0ad) cell_vitu2_itu_pane_g1_ParamLimits

0x5da1,	// (0x00014c99) cell_vitu2_itu_pane_g2_ParamLimits

0x5da1,	// (0x00014c99) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001e81f) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001e81f) cell_vitu2_itu_pane_g

0x9509,	// (0x00018401) bg_vkb2_func_pane_cp05_ParamLimits

0x9509,	// (0x00018401) bg_vkb2_func_pane_cp05

0x9509,	// (0x00018401) bg_vkb2_func_pane_cp03

0x9509,	// (0x00018401) bg_vkb2_func_pane_cp04

0x9509,	// (0x00018401) bg_vkb2_func_pane_cp10_ParamLimits

0x9509,	// (0x00018401) bg_vkb2_func_pane_cp10

0x6b80,	// (0x00015a78) bg_vkb2_func_pane_cp08

0x6b66,	// (0x00015a5e) bg_vkb2_func_pane_cp06

0x6b74,	// (0x00015a6c) bg_vkb2_func_pane_cp07

0xd8b9,	// (0x0001c7b1) bg_vkb2_func_pane_cp11_ParamLimits

0xd8b9,	// (0x0001c7b1) bg_vkb2_func_pane_cp11

0xd8ce,	// (0x0001c7c6) bg_vkb2_func_pane_cp12_ParamLimits

0xd8ce,	// (0x0001c7c6) bg_vkb2_func_pane_cp12

0x9499,	// (0x00018391) bg_vkb2_func_pane_cp09

0xd1d1,	// (0x0001c0c9) bg_vkb2_func_pane_g1

0xa100,	// (0x00018ff8) bg_vkb2_func_pane_g2

0xd1d9,	// (0x0001c0d1) bg_vkb2_func_pane_g3

0xd1e1,	// (0x0001c0d9) bg_vkb2_func_pane_g4

0xd4b2,	// (0x0001c3aa) bg_vkb2_func_pane_g5

0xd1f9,	// (0x0001c0f1) bg_vkb2_func_pane_g6

0xd201,	// (0x0001c0f9) bg_vkb2_func_pane_g7

0xd1f1,	// (0x0001c0e9) bg_vkb2_func_pane_g8

0xa0e0,	// (0x00018fd8) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001ea24) bg_vkb2_func_pane_g

0x6ef7,	// (0x00015def) blid2_tripm_pane_g6_ParamLimits

0x6ef7,	// (0x00015def) blid2_tripm_pane_g6

0xced5,	// (0x0001bdcd) mp4_progress_pane_g1

0x6f70,	// (0x00015e68) blid2_tripm_values_pane_ParamLimits

0x6f70,	// (0x00015e68) blid2_tripm_values_pane

0x7067,	// (0x00015f5f) blid2_tripm_values_pane_t1

0x7075,	// (0x00015f6d) blid2_tripm_values_pane_t2

0x7083,	// (0x00015f7b) blid2_tripm_values_pane_t3

0x7091,	// (0x00015f89) blid2_tripm_values_pane_t4

0x709f,	// (0x00015f97) blid2_tripm_values_pane_t5

0x70ad,	// (0x00015fa5) blid2_tripm_values_pane_t6

0x70bb,	// (0x00015fb3) blid2_tripm_values_pane_t7

0x70c9,	// (0x00015fc1) blid2_tripm_values_pane_t8

0x70d7,	// (0x00015fcf) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001ea37) blid2_tripm_values_pane_t

0x144e,	// (0x00010346) call_video_pane_t1_ParamLimits

0x146c,	// (0x00010364) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001e166) call_video_pane_t_ParamLimits

0x2cd6,	// (0x00011bce) msg_header_pane_g1_ParamLimits

0xab49,	// (0x00019a41) msg_header_pane_g2_ParamLimits

0xab49,	// (0x00019a41) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001e380) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001e380) msg_header_pane_g

0x9c6c,	// (0x00018b64) main_clock2_pane_ParamLimits

0x4d72,	// (0x00013c6a) grid_clock2_toolbar_pane_ParamLimits

0x4d72,	// (0x00013c6a) grid_clock2_toolbar_pane

0x4d72,	// (0x00013c6a) listscroll_clock2_pane_ParamLimits

0x4d72,	// (0x00013c6a) listscroll_clock2_pane

0x4e65,	// (0x00013d5d) main_clock2_pane_t3_ParamLimits

0x4e65,	// (0x00013d5d) main_clock2_pane_t3

0x4e89,	// (0x00013d81) main_clock2_pane_t4_ParamLimits

0x4e89,	// (0x00013d81) main_clock2_pane_t4

0xd9cb,	// (0x0001c8c3) cell_clock2_toolbar_pane

0xd9d3,	// (0x0001c8cb) cell_clock2_toolbar_pane_cp01

0xd9d3,	// (0x0001c8cb) cell_clock2_toolbar_pane_cp02

0xd9db,	// (0x0001c8d3) cell_clock2_toolbar_pane_cp03

0xd9e3,	// (0x0001c8db) list_clock2_pane

0xa76d,	// (0x00019665) scroll_pane_cp10

0xd9eb,	// (0x0001c8e3) list_single_clock2_pane_ParamLimits

0xd9eb,	// (0x0001c8e3) list_single_clock2_pane

0x9e9d,	// (0x00018d95) list_highlight_pane_cp08

0xd9f8,	// (0x0001c8f0) list_single_clock2_pane_t1

0xda06,	// (0x0001c8fe) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001ea4a) list_single_clock2_pane_t

0x9499,	// (0x00018391) bg_button_pane_cp10

0xda14,	// (0x0001c90c) cell_clock2_toolbar_pane_g1

0x2ce4,	// (0x00011bdc) aid_main_viewer_pane_g1_ParamLimits

0x2ce4,	// (0x00011bdc) aid_main_viewer_pane_g1

0x2cf2,	// (0x00011bea) aid_main_viewer_pane_g2_ParamLimits

0x2cf2,	// (0x00011bea) aid_main_viewer_pane_g2

0x2d00,	// (0x00011bf8) aid_main_viewer_pane_g3_ParamLimits

0x2d00,	// (0x00011bf8) aid_main_viewer_pane_g3

0x2d0f,	// (0x00011c07) aid_main_viewer_pane_g4_ParamLimits

0x2d0f,	// (0x00011c07) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001e391) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001e391) aid_main_viewer_pane_g

0x3615,	// (0x0001250d) main_calc_pane_ParamLimits

0x3629,	// (0x00012521) main_dialer2_pane_ParamLimits

0x9499,	// (0x00018391) main_cam6_pane

0x9499,	// (0x00018391) main_vid6_pane

0x4d7e,	// (0x00013c76) listscroll_gen_pane_cp06_ParamLimits

0x4d7e,	// (0x00013c76) listscroll_gen_pane_cp06

0x4eac,	// (0x00013da4) main_clock2_pane_t5_ParamLimits

0x4eac,	// (0x00013da4) main_clock2_pane_t5

0x4f06,	// (0x00013dfe) aid_call2_pane_cp10_ParamLimits

0x4f18,	// (0x00013e10) aid_call_pane_cp10_ParamLimits

0xa7eb,	// (0x000196e3) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa7eb,	// (0x000196e3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f2a,	// (0x00013e22) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f2a,	// (0x00013e22) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa7eb,	// (0x000196e3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001e6cc) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f3c,	// (0x00013e34) popup_clock_analogue_window_cp10_t1_ParamLimits

0x55a5,	// (0x0001449d) cell_dialer2_keypad_pane_g2_ParamLimits

0x55a5,	// (0x0001449d) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001e7b2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001e7b2) cell_dialer2_keypad_pane_g

0x55c1,	// (0x000144b9) cell_dialer2_keypad_pane_t1

0x6216,	// (0x0001510e) main_cset_text2_pane_ParamLimits

0x6216,	// (0x0001510e) main_cset_text2_pane

0xd6f9,	// (0x0001c5f1) area_vitu2_query_pane_g1_ParamLimits

0x6b05,	// (0x000159fd) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001e967) area_vitu2_query_pane_g_ParamLimits

0xd77d,	// (0x0001c675) area_vitu2_query_pane_t7_ParamLimits

0xd77d,	// (0x0001c675) area_vitu2_query_pane_t7

0x6b66,	// (0x00015a5e) bg_button_pane_cp018_ParamLimits

0x6b74,	// (0x00015a6c) bg_button_pane_cp021_ParamLimits

0x6b80,	// (0x00015a78) bg_button_pane_cp022_ParamLimits

0x6b80,	// (0x00015a78) bg_vkb2_func_pane_cp08_ParamLimits

0x6b66,	// (0x00015a5e) bg_vkb2_func_pane_cp06_ParamLimits

0x6b74,	// (0x00015a6c) bg_vkb2_func_pane_cp07_ParamLimits

0x6b8f,	// (0x00015a87) input_focus_pane_cp09_ParamLimits

0xda1c,	// (0x0001c914) cam6_autofocus_pane_ParamLimits

0xda1c,	// (0x0001c914) cam6_autofocus_pane

0x70e5,	// (0x00015fdd) cam6_image_uncrop_pane_ParamLimits

0x70e5,	// (0x00015fdd) cam6_image_uncrop_pane

0x70f4,	// (0x00015fec) cam6_indi_pane_ParamLimits

0x70f4,	// (0x00015fec) cam6_indi_pane

0x710a,	// (0x00016002) cam6_mode_pane_ParamLimits

0x710a,	// (0x00016002) cam6_mode_pane

0x711c,	// (0x00016014) cam6_timer_pane_ParamLimits

0x711c,	// (0x00016014) cam6_timer_pane

0x7128,	// (0x00016020) cam6_zoom_pane_ParamLimits

0x7128,	// (0x00016020) cam6_zoom_pane

0x7134,	// (0x0001602c) cam6_mode_pane_g1_ParamLimits

0x7134,	// (0x0001602c) cam6_mode_pane_g1

0x7144,	// (0x0001603c) cam6_mode_pane_g2_ParamLimits

0x7144,	// (0x0001603c) cam6_mode_pane_g2

0x7154,	// (0x0001604c) cam6_mode_pane_g3_ParamLimits

0x7154,	// (0x0001604c) cam6_mode_pane_g3

0x7164,	// (0x0001605c) cam6_mode_pane_g4_ParamLimits

0x7164,	// (0x0001605c) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001ea4f) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001ea4f) cam6_mode_pane_g

0xd282,	// (0x0001c17a) bg_tb_trans_pane_cp08_ParamLimits

0xd282,	// (0x0001c17a) bg_tb_trans_pane_cp08

0xda2a,	// (0x0001c922) cam6_battery_pane_ParamLimits

0xda2a,	// (0x0001c922) cam6_battery_pane

0xda40,	// (0x0001c938) cam6_indi_pane_g1_ParamLimits

0xda40,	// (0x0001c938) cam6_indi_pane_g1

0xda52,	// (0x0001c94a) cam6_indi_pane_g2_ParamLimits

0xda52,	// (0x0001c94a) cam6_indi_pane_g2

0xda64,	// (0x0001c95c) cam6_indi_pane_g3_ParamLimits

0xda64,	// (0x0001c95c) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001ea58) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001ea58) cam6_indi_pane_g

0xda76,	// (0x0001c96e) cam6_indi_pane_t1_ParamLimits

0xda76,	// (0x0001c96e) cam6_indi_pane_t1

0x7174,	// (0x0001606c) cam6_autofocus_pane_g1

0x717c,	// (0x00016074) cam6_autofocus_pane_g2

0x7184,	// (0x0001607c) cam6_autofocus_pane_g3

0x718c,	// (0x00016084) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001ea5f) cam6_autofocus_pane_g

0xda9c,	// (0x0001c994) cam6_timer_pane_g1

0xdaa4,	// (0x0001c99c) cam6_timer_pane_t1

0xdab2,	// (0x0001c9aa) cam6_zoom_cont_pane

0xdaba,	// (0x0001c9b2) cam6_zoom_pane_g1

0xdac2,	// (0x0001c9ba) cam6_zoom_pane_g2

0x7194,	// (0x0001608c) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001ea68) cam6_zoom_pane_g

0xc39c,	// (0x0001b294) cam6_battery_pane_g1

0xc39c,	// (0x0001b294) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d4) cam6_battery_pane_g

0xdaca,	// (0x0001c9c2) cam6_zoom_cont_pane_g1

0xdad3,	// (0x0001c9cb) cam6_zoom_cont_pane_g2

0xdadc,	// (0x0001c9d4) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001ea6f) cam6_zoom_cont_pane_g

0x71b1,	// (0x000160a9) cam6_mode_pane_cp_ParamLimits

0x71b1,	// (0x000160a9) cam6_mode_pane_cp

0x7128,	// (0x00016020) cam6_zoom_pane_cp_ParamLimits

0x7128,	// (0x00016020) cam6_zoom_pane_cp

0x71c3,	// (0x000160bb) vid6_image_uncrop_cif_pane_ParamLimits

0x71c3,	// (0x000160bb) vid6_image_uncrop_cif_pane

0x71d3,	// (0x000160cb) vid6_image_uncrop_nhd_pane_ParamLimits

0x71d3,	// (0x000160cb) vid6_image_uncrop_nhd_pane

0x70e5,	// (0x00015fdd) vid6_image_uncrop_vga_pane_ParamLimits

0x70e5,	// (0x00015fdd) vid6_image_uncrop_vga_pane

0x71e2,	// (0x000160da) vid6_image_uncrop_wvga_pane_ParamLimits

0x71e2,	// (0x000160da) vid6_image_uncrop_wvga_pane

0x71f1,	// (0x000160e9) vid6_indi_pane_ParamLimits

0x71f1,	// (0x000160e9) vid6_indi_pane

0xd282,	// (0x0001c17a) bg_tb_trans_pane_cp09_ParamLimits

0xd282,	// (0x0001c17a) bg_tb_trans_pane_cp09

0xdaf4,	// (0x0001c9ec) cam6_battery_pane_cp_ParamLimits

0xdaf4,	// (0x0001c9ec) cam6_battery_pane_cp

0xdb00,	// (0x0001c9f8) vid6_indi_pane_g1_ParamLimits

0xdb00,	// (0x0001c9f8) vid6_indi_pane_g1

0xdb12,	// (0x0001ca0a) vid6_indi_pane_g2_ParamLimits

0xdb12,	// (0x0001ca0a) vid6_indi_pane_g2

0xdb24,	// (0x0001ca1c) vid6_indi_pane_g3_ParamLimits

0xdb24,	// (0x0001ca1c) vid6_indi_pane_g3

0xdb39,	// (0x0001ca31) vid6_indi_pane_g4_ParamLimits

0xdb39,	// (0x0001ca31) vid6_indi_pane_g4

0xdb4e,	// (0x0001ca46) vid6_indi_pane_g5_ParamLimits

0xdb4e,	// (0x0001ca46) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001ea76) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001ea76) vid6_indi_pane_g

0xdb68,	// (0x0001ca60) vid6_indi_pane_t1_ParamLimits

0xdb68,	// (0x0001ca60) vid6_indi_pane_t1

0xdb7e,	// (0x0001ca76) vid6_indi_pane_t2_ParamLimits

0xdb7e,	// (0x0001ca76) vid6_indi_pane_t2

0xdba6,	// (0x0001ca9e) vid6_indi_pane_t3_ParamLimits

0xdba6,	// (0x0001ca9e) vid6_indi_pane_t3

0xdbce,	// (0x0001cac6) vid6_indi_pane_t4_ParamLimits

0xdbce,	// (0x0001cac6) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001ea81) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001ea81) vid6_indi_pane_t

0xdbf2,	// (0x0001caea) wait_bar_pane_cp08

0x7209,	// (0x00016101) main_cset_text2_pane_t1_ParamLimits

0x7209,	// (0x00016101) main_cset_text2_pane_t1

0x719c,	// (0x00016094) listscroll_gen_pane_cp06_t1_ParamLimits

0x719c,	// (0x00016094) listscroll_gen_pane_cp06_t1

0x9499,	// (0x00018391) main_cam6_set_pane

0xc608,	// (0x0001b500) bg_tb_trans_pane_cp06_ParamLimits

0xd08a,	// (0x0001bf82) cam4_indicators_pane_g1_ParamLimits

0xd09b,	// (0x0001bf93) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001e7ef) cam4_indicators_pane_g_ParamLimits

0xd0b9,	// (0x0001bfb1) cam4_indicators_pane_t1_ParamLimits

0x9509,	// (0x00018401) bg_tb_trans_pane_cp07_ParamLimits

0xd0e5,	// (0x0001bfdd) vid4_indicators_pane_g1_ParamLimits

0xd0f9,	// (0x0001bff1) vid4_indicators_pane_g2_ParamLimits

0xd10d,	// (0x0001c005) vid4_indicators_pane_g3_ParamLimits

0xd11e,	// (0x0001c016) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001e801) vid4_indicators_pane_g_ParamLimits

0xd13c,	// (0x0001c034) vid4_indicators_pane_t1_ParamLimits

0xd7fa,	// (0x0001c6f2) vid4_progress_pane_g1_ParamLimits

0xd80a,	// (0x0001c702) vid4_progress_pane_g2_ParamLimits

0x6cca,	// (0x00015bc2) vid4_progress_pane_g3_ParamLimits

0xd81a,	// (0x0001c712) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001e9b2) vid4_progress_pane_g_ParamLimits

0x6cdc,	// (0x00015bd4) vid4_progress_pane_t1_ParamLimits

0xd832,	// (0x0001c72a) vid4_progress_pane_t2_ParamLimits

0xd847,	// (0x0001c73f) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001e9bd) vid4_progress_pane_t_ParamLimits

0x6cf4,	// (0x00015bec) wait_bar_pane_cp07_ParamLimits

0x7226,	// (0x0001611e) main_cam6_set_pane_g2_ParamLimits

0x7226,	// (0x0001611e) main_cam6_set_pane_g2

0x724a,	// (0x00016142) main_cset6_listscroll_pane_ParamLimits

0x724a,	// (0x00016142) main_cset6_listscroll_pane

0x726a,	// (0x00016162) main_cset6_slider_pane_ParamLimits

0x726a,	// (0x00016162) main_cset6_slider_pane

0x7280,	// (0x00016178) main_cset6_text2_pane_ParamLimits

0x7280,	// (0x00016178) main_cset6_text2_pane

0xdc01,	// (0x0001caf9) main_cset6_text_pane

0xdc09,	// (0x0001cb01) main_cset_list_pane_copy1_ParamLimits

0xdc09,	// (0x0001cb01) main_cset_list_pane_copy1

0xdc19,	// (0x0001cb11) scroll_pane_cp028_copy1

0x728e,	// (0x00016186) cset_list_set_pane_copy1

0x729f,	// (0x00016197) aid_position_infowindow_above_copy1

0x72a7,	// (0x0001619f) aid_position_infowindow_below_copy1

0x72af,	// (0x000161a7) cset_list_set_pane_g1_copy1

0x72b7,	// (0x000161af) cset_list_set_pane_g3_copy1_ParamLimits

0x72b7,	// (0x000161af) cset_list_set_pane_g3_copy1

0x72c6,	// (0x000161be) cset_list_set_pane_t1_copy1_ParamLimits

0x72c6,	// (0x000161be) cset_list_set_pane_t1_copy1

0x9509,	// (0x00018401) list_highlight_pane_cp021_copy1_ParamLimits

0x9509,	// (0x00018401) list_highlight_pane_cp021_copy1

0xdc22,	// (0x0001cb1a) cset6_slider_pane_ParamLimits

0xdc22,	// (0x0001cb1a) cset6_slider_pane

0xdc4e,	// (0x0001cb46) main_cset6_slider_pane_g1_ParamLimits

0xdc4e,	// (0x0001cb46) main_cset6_slider_pane_g1

0x72db,	// (0x000161d3) main_cset6_slider_pane_g2_ParamLimits

0x72db,	// (0x000161d3) main_cset6_slider_pane_g2

0xdc76,	// (0x0001cb6e) main_cset6_slider_pane_g3_ParamLimits

0xdc76,	// (0x0001cb6e) main_cset6_slider_pane_g3

0x7303,	// (0x000161fb) main_cset6_slider_pane_g4_ParamLimits

0x7303,	// (0x000161fb) main_cset6_slider_pane_g4

0x730f,	// (0x00016207) main_cset6_slider_pane_g5_ParamLimits

0x730f,	// (0x00016207) main_cset6_slider_pane_g5

0xd336,	// (0x0001c22e) main_cset6_slider_pane_g7_ParamLimits

0xd336,	// (0x0001c22e) main_cset6_slider_pane_g7

0xd342,	// (0x0001c23a) main_cset6_slider_pane_g8_ParamLimits

0xd342,	// (0x0001c23a) main_cset6_slider_pane_g8

0x62c3,	// (0x000151bb) main_cset6_slider_pane_g9_ParamLimits

0x62c3,	// (0x000151bb) main_cset6_slider_pane_g9

0x62cf,	// (0x000151c7) main_cset6_slider_pane_g10_ParamLimits

0x62cf,	// (0x000151c7) main_cset6_slider_pane_g10

0x62db,	// (0x000151d3) main_cset6_slider_pane_g11_ParamLimits

0x62db,	// (0x000151d3) main_cset6_slider_pane_g11

0x62e7,	// (0x000151df) main_cset6_slider_pane_g12_ParamLimits

0x62e7,	// (0x000151df) main_cset6_slider_pane_g12

0x62f3,	// (0x000151eb) main_cset6_slider_pane_g13_ParamLimits

0x62f3,	// (0x000151eb) main_cset6_slider_pane_g13

0x62ff,	// (0x000151f7) main_cset6_slider_pane_g14_ParamLimits

0x62ff,	// (0x000151f7) main_cset6_slider_pane_g14

0x731b,	// (0x00016213) main_cset6_slider_pane_g15_ParamLimits

0x731b,	// (0x00016213) main_cset6_slider_pane_g15

0x6323,	// (0x0001521b) main_cset6_slider_pane_g16_ParamLimits

0x6323,	// (0x0001521b) main_cset6_slider_pane_g16

0x632f,	// (0x00015227) main_cset6_slider_pane_g17_ParamLimits

0x632f,	// (0x00015227) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001ea8a) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001ea8a) main_cset6_slider_pane_g

0xdc82,	// (0x0001cb7a) main_cset6_slider_pane_t1_ParamLimits

0xdc82,	// (0x0001cb7a) main_cset6_slider_pane_t1

0x734b,	// (0x00016243) main_cset6_slider_pane_t2_ParamLimits

0x734b,	// (0x00016243) main_cset6_slider_pane_t2

0x7376,	// (0x0001626e) main_cset6_slider_pane_t3_ParamLimits

0x7376,	// (0x0001626e) main_cset6_slider_pane_t3

0x73a1,	// (0x00016299) main_cset6_slider_pane_t4_ParamLimits

0x73a1,	// (0x00016299) main_cset6_slider_pane_t4

0x73cc,	// (0x000162c4) main_cset6_slider_pane_t5_ParamLimits

0x73cc,	// (0x000162c4) main_cset6_slider_pane_t5

0xdcc3,	// (0x0001cbbb) main_cset6_slider_pane_t7_ParamLimits

0xdcc3,	// (0x0001cbbb) main_cset6_slider_pane_t7

0x73f7,	// (0x000162ef) main_cset6_slider_pane_t8_ParamLimits

0x73f7,	// (0x000162ef) main_cset6_slider_pane_t8

0x741b,	// (0x00016313) main_cset6_slider_pane_t9_ParamLimits

0x741b,	// (0x00016313) main_cset6_slider_pane_t9

0x743f,	// (0x00016337) main_cset6_slider_pane_t10_ParamLimits

0x743f,	// (0x00016337) main_cset6_slider_pane_t10

0x7463,	// (0x0001635b) main_cset6_slider_pane_t11_ParamLimits

0x7463,	// (0x0001635b) main_cset6_slider_pane_t11

0xdcf9,	// (0x0001cbf1) main_cset6_slider_pane_t14_ParamLimits

0xdcf9,	// (0x0001cbf1) main_cset6_slider_pane_t14

0xdd32,	// (0x0001cc2a) main_cset6_slider_pane_t15_ParamLimits

0xdd32,	// (0x0001cc2a) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001eaaf) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001eaaf) main_cset6_slider_pane_t

0xd44a,	// (0x0001c342) cset_slider_pane_g1_copy1

0xd453,	// (0x0001c34b) cset_slider_pane_g2_copy1

0xd45c,	// (0x0001c354) cset_slider_pane_g3_copy1

0x9499,	// (0x00018391) bg_popup_sub_pane_cp011_copy1

0xdd6b,	// (0x0001cc63) main_cset_text_pane_g1_copy1

0xd521,	// (0x0001c419) main_cset_text_pane_t1_copy1

0xd52f,	// (0x0001c427) main_cset_text_pane_t2_copy1

0xd53d,	// (0x0001c435) main_cset_text_pane_t3_copy1

0xd54b,	// (0x0001c443) main_cset_text_pane_t4_copy1

0xd559,	// (0x0001c451) main_cset_text_pane_t5_copy1

0xdd73,	// (0x0001cc6b) main_cset_text_pane_t6_copy1

0xd575,	// (0x0001c46d) main_cset_text_pane_t7_copy1

0x7209,	// (0x00016101) main_cset_text2_pane_t1_copy1

0x9509,	// (0x00018401) main_ncimui_pane

0x3873,	// (0x0001276b) popup_query_ncimui_window_ParamLimits

0x3873,	// (0x0001276b) popup_query_ncimui_window

0xc66d,	// (0x0001b565) field_cale_ev2_pane_g4_ParamLimits

0xc66d,	// (0x0001b565) field_cale_ev2_pane_g4

0x5485,	// (0x0001437d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5485,	// (0x0001437d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001e78d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001e78d) cell_video_dialer_keypad_pane_g

0x549d,	// (0x00014395) cell_video_dialer_keypad_pane_t1

0x9499,	// (0x00018391) bg_popup_window_pane_cp012

0xa63a,	// (0x00019532) heading_pane_cp06

0xdd9f,	// (0x0001cc97) ncim_query_content_pane

0x9499,	// (0x00018391) bg_popup_heading_pane_cp01

0xdda7,	// (0x0001cc9f) ncim_heading_pane_t1

0xddb5,	// (0x0001ccad) ncim_indicator_popup_pane

0xddc7,	// (0x0001ccbf) ncim_query_button_pane

0xdddb,	// (0x0001ccd3) ncim_query_content_pane_t1

0xdded,	// (0x0001cce5) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001eaf3) ncim_query_content_pane_t

0xde27,	// (0x0001cd1f) ncim_query_list_pane

0xde39,	// (0x0001cd31) ncim_query_popup_pane

0xddb5,	// (0x0001ccad) ncim_indicator_popup_pane_ParamLimits

0x767e,	// (0x00016576) ncim_query_content_pane_g1_ParamLimits

0x767e,	// (0x00016576) ncim_query_content_pane_g1

0xdddb,	// (0x0001ccd3) ncim_query_content_pane_t1_ParamLimits

0xdded,	// (0x0001cce5) ncim_query_content_pane_t2_ParamLimits

0x768a,	// (0x00016582) ncim_query_content_pane_t3_ParamLimits

0x768a,	// (0x00016582) ncim_query_content_pane_t3

0x76b2,	// (0x000165aa) ncim_query_content_pane_t4_ParamLimits

0x76b2,	// (0x000165aa) ncim_query_content_pane_t4

0x76da,	// (0x000165d2) ncim_query_content_pane_t5_ParamLimits

0x76da,	// (0x000165d2) ncim_query_content_pane_t5

0xddff,	// (0x0001ccf7) ncim_query_content_pane_t6_ParamLimits

0xddff,	// (0x0001ccf7) ncim_query_content_pane_t6

0xfbfb,	// (0x0001eaf3) ncim_query_content_pane_t_ParamLimits

0xde27,	// (0x0001cd1f) ncim_query_list_pane_ParamLimits

0xde39,	// (0x0001cd31) ncim_query_popup_pane_ParamLimits

0xde4d,	// (0x0001cd45) wait_bar_pane_cp04

0x9499,	// (0x00018391) input_focus_pane_cp011

0xde55,	// (0x0001cd4d) ncim_query_popup_pane_t1

0xde63,	// (0x0001cd5b) ncim_list_query_list_pane_ParamLimits

0xde63,	// (0x0001cd5b) ncim_list_query_list_pane

0x9499,	// (0x00018391) bg_button_pane_cp027

0xde70,	// (0x0001cd68) ncim_query_button_pane_g1

0x9499,	// (0x00018391) list_highlight_pane_cp012

0xde7a,	// (0x0001cd72) ncim_list_query_list_pane_g1

0xde82,	// (0x0001cd7a) ncim_list_query_list_pane_t1

0xd0aa,	// (0x0001bfa2) cam4_indicators_pane_g3_ParamLimits

0xd0aa,	// (0x0001bfa2) cam4_indicators_pane_g3

0xd12a,	// (0x0001c022) vid4_indicators_pane_g5_ParamLimits

0xd12a,	// (0x0001c022) vid4_indicators_pane_g5

0xd826,	// (0x0001c71e) vid4_progress_pane_g5_ParamLimits

0xd826,	// (0x0001c71e) vid4_progress_pane_g5

0x756c,	// (0x00016464) main_ncimui_pane_g1

0x75d2,	// (0x000164ca) ncimui_group_query_pane_ParamLimits

0x75d2,	// (0x000164ca) ncimui_group_query_pane

0x761a,	// (0x00016512) ncimui_list_pane_ParamLimits

0x761a,	// (0x00016512) ncimui_list_pane

0x7641,	// (0x00016539) ncimui_text_pane_ParamLimits

0x7641,	// (0x00016539) ncimui_text_pane

0x7702,	// (0x000165fa) ncimui_text_pane_t1_ParamLimits

0x7702,	// (0x000165fa) ncimui_text_pane_t1

0xde90,	// (0x0001cd88) ncimui_list_single_graphic_pane_ParamLimits

0xde90,	// (0x0001cd88) ncimui_list_single_graphic_pane

0x7720,	// (0x00016618) ncimui_query_pane_ParamLimits

0x7720,	// (0x00016618) ncimui_query_pane

0x9499,	// (0x00018391) list_highlight_pane_cp013

0xdea0,	// (0x0001cd98) ncim_list_query_list_pane_t1_copy1

0xde7a,	// (0x0001cd72) ncim_list_single_graphic_pane_g1

0xdeae,	// (0x0001cda6) ncim_query_button_pane_cp01

0xdeba,	// (0x0001cdb2) ncim_query_entry_pane_ParamLimits

0xdeba,	// (0x0001cdb2) ncim_query_entry_pane

0xdecd,	// (0x0001cdc5) ncimui_query_pane_g1

0xded9,	// (0x0001cdd1) ncimui_query_pane_t1_ParamLimits

0xded9,	// (0x0001cdd1) ncimui_query_pane_t1

0x9509,	// (0x00018401) input_focus_pane_cp012

0xdef2,	// (0x0001cdea) ncim_query_entry_pane_t1

0x9c6c,	// (0x00018b64) main_im_pane_ParamLimits

0x9509,	// (0x00018401) main_mobtv_pane_ParamLimits

0x9509,	// (0x00018401) main_mobtv_pane

0x7333,	// (0x0001622b) main_cset6_slider_pane_g18_ParamLimits

0x7333,	// (0x0001622b) main_cset6_slider_pane_g18

0x733f,	// (0x00016237) main_cset6_slider_pane_g19_ParamLimits

0x733f,	// (0x00016237) main_cset6_slider_pane_g19

0xd290,	// (0x0001c188) bg_main_mobtv_pane_ParamLimits

0xd290,	// (0x0001c188) bg_main_mobtv_pane

0x7733,	// (0x0001662b) main_mobtv_info_pane

0x773c,	// (0x00016634) main_mobtv_loading_pane_ParamLimits

0x773c,	// (0x00016634) main_mobtv_loading_pane

0xdf04,	// (0x0001cdfc) main_mobtv_pg_channel_list_pane

0xdf0e,	// (0x0001ce06) main_mobtv_pg_hdr_pane

0x7749,	// (0x00016641) main_mobtv_programe_curr_pane_ParamLimits

0x7749,	// (0x00016641) main_mobtv_programe_curr_pane

0x7756,	// (0x0001664e) main_mobtv_programe_next_pane_ParamLimits

0x7756,	// (0x0001664e) main_mobtv_programe_next_pane

0xdf17,	// (0x0001ce0f) popup_mobtv_noti_window

0xc39c,	// (0x0001b294) main_tv_pg_hdr_pane_g1

0xdf1f,	// (0x0001ce17) main_tv_pg_hdr_pane_g2

0xdf27,	// (0x0001ce1f) main_tv_pg_hdr_pane_g3

0xdf2f,	// (0x0001ce27) main_tv_pg_hdr_pane_g4

0xdf37,	// (0x0001ce2f) main_tv_pg_hdr_pane_g5

0xdf41,	// (0x0001ce39) main_tv_pg_hdr_pane_g6

0xdf4b,	// (0x0001ce43) main_tv_pg_hdr_pane_g7

0xdf55,	// (0x0001ce4d) main_tv_pg_hdr_pane_g8

0xdf5f,	// (0x0001ce57) main_tv_pg_hdr_pane_g9

0xdf69,	// (0x0001ce61) main_tv_pg_hdr_pane_g10

0xdf73,	// (0x0001ce6b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001eb00) main_tv_pg_hdr_pane_g

0xdf7d,	// (0x0001ce75) main_tv_pg_hdr_pane_t1

0xdf8b,	// (0x0001ce83) main_tv_pg_hdr_pane_t2

0xdf99,	// (0x0001ce91) main_tv_pg_hdr_pane_t3

0xdfa9,	// (0x0001cea1) main_tv_pg_hdr_pane_t4

0xdfb9,	// (0x0001ceb1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001eb17) main_tv_pg_hdr_pane_t

0xdfc9,	// (0x0001cec1) single_mobtv_pg_channel_pane_ParamLimits

0xdfc9,	// (0x0001cec1) single_mobtv_pg_channel_pane

0xdfdb,	// (0x0001ced3) single_mobtv_pg_channel_table_pane

0xdfe4,	// (0x0001cedc) single_mobtv_pg_channel_thumb_pane

0xdfed,	// (0x0001cee5) single_tv_pg_channel_pane_g1

0xdff6,	// (0x0001ceee) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001eb22) single_tv_pg_channel_pane_g

0xc608,	// (0x0001b500) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc608,	// (0x0001b500) bg_single_mobtv_pg_channel_thumb_pane

0xdfff,	// (0x0001cef7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfff,	// (0x0001cef7) single_mobtv_pg_channel_thumb_pane_g1

0xe00d,	// (0x0001cf05) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe00d,	// (0x0001cf05) single_mobtv_pg_channel_thumb_pane_g2

0xe019,	// (0x0001cf11) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe019,	// (0x0001cf11) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001eb27) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001eb27) single_mobtv_pg_channel_thumb_pane_g

0xe025,	// (0x0001cf1d) single_mobtv_pg_channel_thumb_pane_t1

0xe033,	// (0x0001cf2b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001eb2e) single_mobtv_pg_channel_thumb_pane_t

0xc39c,	// (0x0001b294) bg_single_mobtv_pg_channel_table_pane_g1

0xc39c,	// (0x0001b294) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d4) bg_single_mobtv_pg_channel_table_pane_g

0xe041,	// (0x0001cf39) single_mobtv_pg_channel_table_pane_t1

0xe04f,	// (0x0001cf47) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001eb33) single_mobtv_pg_channel_table_pane_t

0x776b,	// (0x00016663) main_mobtv_info_pane_g1_ParamLimits

0x776b,	// (0x00016663) main_mobtv_info_pane_g1

0x7789,	// (0x00016681) main_mobtv_info_pane_t1_ParamLimits

0x7789,	// (0x00016681) main_mobtv_info_pane_t1

0x7801,	// (0x000166f9) main_mobtv_info_pane_t2_ParamLimits

0x7801,	// (0x000166f9) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001eb3d) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001eb3d) main_mobtv_info_pane_t

0x7890,	// (0x00016788) wait_bar_pane_cp05

0x78a2,	// (0x0001679a) main_mobtv_loading_pane_g1_ParamLimits

0x78a2,	// (0x0001679a) main_mobtv_loading_pane_g1

0x78b5,	// (0x000167ad) main_mobtv_loading_pane_g2_ParamLimits

0x78b5,	// (0x000167ad) main_mobtv_loading_pane_g2

0x78c1,	// (0x000167b9) main_mobtv_loading_pane_g3_ParamLimits

0x78c1,	// (0x000167b9) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001eb44) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001eb44) main_mobtv_loading_pane_g

0xe05d,	// (0x0001cf55) main_mobtv_loading_pane_t1_ParamLimits

0xe05d,	// (0x0001cf55) main_mobtv_loading_pane_t1

0xe075,	// (0x0001cf6d) main_mobtv_loading_pane_t2_ParamLimits

0xe075,	// (0x0001cf6d) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001eb4b) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001eb4b) main_mobtv_loading_pane_t

0x78d4,	// (0x000167cc) wait_bar_pane_cp06_ParamLimits

0x78d4,	// (0x000167cc) wait_bar_pane_cp06

0xe099,	// (0x0001cf91) main_mobtv_programe_curr_pane_t1

0xe0a7,	// (0x0001cf9f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001eb50) main_mobtv_programe_curr_pane_t

0xe0b5,	// (0x0001cfad) main_mobtv_programe_next_pane_t1

0xe0c3,	// (0x0001cfbb) main_mobtv_programe_next_pane_t2

0xe0d1,	// (0x0001cfc9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001eb55) main_mobtv_programe_next_pane_t

0x9499,	// (0x00018391) bg_popup_mobtv_noti_window_pane

0xe0df,	// (0x0001cfd7) popup_mobtv_noti_window_g1

0xe0e7,	// (0x0001cfdf) popup_mobtv_noti_window_t1

0xe0f5,	// (0x0001cfed) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001eb5c) popup_mobtv_noti_window_t

0xc39c,	// (0x0001b294) bg_popup_mobtv_noti_window_pane_g1

0x9499,	// (0x00018391) sc_clock_pane

0x9499,	// (0x00018391) main_fs_bigclock_pane

0x6f5a,	// (0x00015e52) blid2_tripm_pane_t4_ParamLimits

0x6f5a,	// (0x00015e52) blid2_tripm_pane_t4

0x78e3,	// (0x000167db) sc_clock_pane_g1_ParamLimits

0x78e3,	// (0x000167db) sc_clock_pane_g1

0x78f5,	// (0x000167ed) sc_clock_pane_t1_ParamLimits

0x78f5,	// (0x000167ed) sc_clock_pane_t1

0x7917,	// (0x0001680f) sc_clock_pane_t2_ParamLimits

0x7917,	// (0x0001680f) sc_clock_pane_t2

0x792f,	// (0x00016827) sc_clock_pane_t3_ParamLimits

0x792f,	// (0x00016827) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001eb61) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001eb61) sc_clock_pane_t

0x8965,	// (0x0001785d) main_fs_bigclock_indicator_pane_ParamLimits

0x8965,	// (0x0001785d) main_fs_bigclock_indicator_pane

0x79cf,	// (0x000168c7) main_fs_bigclock_pane_g1_ParamLimits

0x79cf,	// (0x000168c7) main_fs_bigclock_pane_g1

0x8971,	// (0x00017869) main_fs_bigclock_pane_t1_ParamLimits

0x8971,	// (0x00017869) main_fs_bigclock_pane_t1

0x8983,	// (0x0001787b) main_fs_bigclock_pane_t2_ParamLimits

0x8983,	// (0x0001787b) main_fs_bigclock_pane_t2

0x8997,	// (0x0001788f) main_fs_bigclock_pane_t3_ParamLimits

0x8997,	// (0x0001788f) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001ed66) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001ed66) main_fs_bigclock_pane_t

0xec62,	// (0x0001db5a) main_fs_bigclock_indicator_pane_g1

0xddcf,	// (0x0001ccc7) ncim_query_content_pane_g2_ParamLimits

0xddcf,	// (0x0001ccc7) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001eaee) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001eaee) ncim_query_content_pane_g

0x7948,	// (0x00016840) sc_clock_pane_t4_ParamLimits

0x7948,	// (0x00016840) sc_clock_pane_t4

0x9509,	// (0x00018401) main_radioblah_pane

0xcff0,	// (0x0001bee8) cell_call4_button_pane_t1_copy1_ParamLimits

0xcff0,	// (0x0001bee8) cell_call4_button_pane_t1_copy1

0x7584,	// (0x0001647c) main_ncimui_pane_t1_ParamLimits

0x7584,	// (0x0001647c) main_ncimui_pane_t1

0x759e,	// (0x00016496) main_ncimui_pane_t2_ParamLimits

0x759e,	// (0x00016496) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001eae7) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001eae7) main_ncimui_pane_t

0xe239,	// (0x0001d131) main_radioblah_anim_pane_ParamLimits

0xe239,	// (0x0001d131) main_radioblah_anim_pane

0xe24a,	// (0x0001d142) main_radioblah_info_pane_ParamLimits

0xe24a,	// (0x0001d142) main_radioblah_info_pane

0xe25e,	// (0x0001d156) main_radioblah_pane_t1_ParamLimits

0xe25e,	// (0x0001d156) main_radioblah_pane_t1

0xe27a,	// (0x0001d172) main_radioblah_pane_t2_ParamLimits

0xe27a,	// (0x0001d172) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001eb82) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001eb82) main_radioblah_pane_t

0x7a27,	// (0x0001691f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a27,	// (0x0001691f) main_radioblah_rocker_ctrl_pane

0xe2c2,	// (0x0001d1ba) main_radioblah_info_pane_t1_ParamLimits

0xe2c2,	// (0x0001d1ba) main_radioblah_info_pane_t1

0x7a7f,	// (0x00016977) main_radioblah_info_pane_t2_ParamLimits

0x7a7f,	// (0x00016977) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001eb8b) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001eb8b) main_radioblah_info_pane_t

0xc39c,	// (0x0001b294) main_radioblah_rocker_ctrl_pane_g1

0x7b2f,	// (0x00016a27) main_radioblah_rocker_ctrl_pane_g2

0x7b37,	// (0x00016a2f) main_radioblah_rocker_ctrl_pane_g3

0x7b3f,	// (0x00016a37) main_radioblah_rocker_ctrl_pane_g4

0x7b47,	// (0x00016a3f) main_radioblah_rocker_ctrl_pane_g5

0x7b4f,	// (0x00016a47) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001eb94) main_radioblah_rocker_ctrl_pane_g

0x7209,	// (0x00016101) main_cset_text2_pane_t1_copy1_ParamLimits

0xd07a,	// (0x0001bf72) cam4_image_uncrop_qvga_pane

0xd0d3,	// (0x0001bfcb) vid4_image_uncrop_qcif_pane

0xda1c,	// (0x0001c914) cam6_image_uncrop_qvga_pane_ParamLimits

0xda1c,	// (0x0001c914) cam6_image_uncrop_qvga_pane

0xdae4,	// (0x0001c9dc) vid6_image_uncrop_qcif_pane_ParamLimits

0xdae4,	// (0x0001c9dc) vid6_image_uncrop_qcif_pane

0x9499,	// (0x00018391) bg_popup_preview_window_pane_cp03

0xdd81,	// (0x0001cc79) list_cset_text2_pane

0xdd89,	// (0x0001cc81) main_cset6_text2_pane_g1

0xdd91,	// (0x0001cc89) main_cset6_text2_pane_t1

0x7b57,	// (0x00016a4f) list_cset_text2_pane_t1_ParamLimits

0x7b57,	// (0x00016a4f) list_cset_text2_pane_t1

0x9509,	// (0x00018401) main_radioblah_pane_ParamLimits

0x787c,	// (0x00016774) main_mobtv_info_pane_t3_ParamLimits

0x787c,	// (0x00016774) main_mobtv_info_pane_t3

0x7a15,	// (0x0001690d) main_radioblah_pane_g1

0x7a4f,	// (0x00016947) main_radioblah_info_pane_g1

0x7ad4,	// (0x000169cc) main_radioblah_info_pane_t3_ParamLimits

0x7ad4,	// (0x000169cc) main_radioblah_info_pane_t3

0x2319,	// (0x00011211) highlight_cell_cale_month_pane_ParamLimits

0x2319,	// (0x00011211) highlight_cell_cale_month_pane

0x9499,	// (0x00018391) main_phob_fisheye_pane

0xc710,	// (0x0001b608) scroll_pane_cp0031_ParamLimits

0xc710,	// (0x0001b608) scroll_pane_cp0031

0xdbf2,	// (0x0001caea) wait_bar_pane_cp08_ParamLimits

0x728e,	// (0x00016186) cset_list_set_pane_copy1_ParamLimits

0xe2fc,	// (0x0001d1f4) highlight_cell_cale_month_pane_g1

0x7b70,	// (0x00016a68) highlight_cell_cale_month_pane_t1

0xd7e9,	// (0x0001c6e1) list_gen_pane_cp01

0xd321,	// (0x0001c219) scroll_pane_01

0xe304,	// (0x0001d1fc) list_single_double_fisheye_pane

0x7b7e,	// (0x00016a76) list_double_fisheye_pane_g1_ParamLimits

0x7b7e,	// (0x00016a76) list_double_fisheye_pane_g1

0x7b8a,	// (0x00016a82) list_double_fisheye_pane_g2_ParamLimits

0x7b8a,	// (0x00016a82) list_double_fisheye_pane_g2

0x7b9e,	// (0x00016a96) list_double_fisheye_pane_g3_ParamLimits

0x7b9e,	// (0x00016a96) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001eba1) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001eba1) list_double_fisheye_pane_g

0x7bc7,	// (0x00016abf) list_double_fisheye_pane_t1_ParamLimits

0x7bc7,	// (0x00016abf) list_double_fisheye_pane_t1

0x7be2,	// (0x00016ada) list_double_fisheye_pane_t2_ParamLimits

0x7be2,	// (0x00016ada) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001ebac) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001ebac) list_double_fisheye_pane_t

0x9499,	// (0x00018391) main_call5_pane

0x7973,	// (0x0001686b) sc_swipe_pane_ParamLimits

0x7973,	// (0x0001686b) sc_swipe_pane

0x7c17,	// (0x00016b0f) call5_image_pane_ParamLimits

0x7c17,	// (0x00016b0f) call5_image_pane

0x7c34,	// (0x00016b2c) call5_swipe_1_pane_ParamLimits

0x7c34,	// (0x00016b2c) call5_swipe_1_pane

0x7c47,	// (0x00016b3f) call5_swipe_2_pane_ParamLimits

0x7c47,	// (0x00016b3f) call5_swipe_2_pane

0x7c72,	// (0x00016b6a) popup_call5_audio_first_window_ParamLimits

0x7c72,	// (0x00016b6a) popup_call5_audio_first_window

0xc608,	// (0x0001b500) call5_swipe_1_pane_g1_ParamLimits

0xc608,	// (0x0001b500) call5_swipe_1_pane_g1

0xe30d,	// (0x0001d205) call5_swipe_1_pane_g2_ParamLimits

0xe30d,	// (0x0001d205) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001ebb1) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001ebb1) call5_swipe_1_pane_g

0xe319,	// (0x0001d211) call5_swipe_1_pane_t1_ParamLimits

0xe319,	// (0x0001d211) call5_swipe_1_pane_t1

0xc608,	// (0x0001b500) call5_swipe_2_pane_g1_ParamLimits

0xc608,	// (0x0001b500) call5_swipe_2_pane_g1

0xe32e,	// (0x0001d226) call5_swipe_2_pane_g2_ParamLimits

0xe32e,	// (0x0001d226) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001ebb6) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001ebb6) call5_swipe_2_pane_g

0xe33a,	// (0x0001d232) call5_swipe_2_pane_t1_ParamLimits

0xe33a,	// (0x0001d232) call5_swipe_2_pane_t1

0xe34f,	// (0x0001d247) sc_swipe_pane_g1_ParamLimits

0xe34f,	// (0x0001d247) sc_swipe_pane_g1

0xe35c,	// (0x0001d254) sc_swipe_pane_g2_ParamLimits

0xe35c,	// (0x0001d254) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001ebbb) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001ebbb) sc_swipe_pane_g

0xe368,	// (0x0001d260) sc_swipe_pane_t1_ParamLimits

0xe368,	// (0x0001d260) sc_swipe_pane_t1

0x9499,	// (0x00018391) main_cmail_launcher_pane

0x7c83,	// (0x00016b7b) aid_size_cell_cmail_l_ParamLimits

0x7c83,	// (0x00016b7b) aid_size_cell_cmail_l

0x7c9d,	// (0x00016b95) grid_cmail_l_pane_ParamLimits

0x7c9d,	// (0x00016b95) grid_cmail_l_pane

0x7cb8,	// (0x00016bb0) cell_cmail_l_pane_ParamLimits

0x7cb8,	// (0x00016bb0) cell_cmail_l_pane

0x7cde,	// (0x00016bd6) cell_cmail_l_pane_g1_ParamLimits

0x7cde,	// (0x00016bd6) cell_cmail_l_pane_g1

0x7cea,	// (0x00016be2) cell_cmail_l_pane_t1_ParamLimits

0x7cea,	// (0x00016be2) cell_cmail_l_pane_t1

0xe37d,	// (0x0001d275) cell_cmail_l_pane_t2_ParamLimits

0xe37d,	// (0x0001d275) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001ebc0) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001ebc0) cell_cmail_l_pane_t

0x9509,	// (0x00018401) grid_highlight_pane_cp018_ParamLimits

0x9509,	// (0x00018401) grid_highlight_pane_cp018

0x0292,	// (0x0000f18a) main2_pane_ParamLimits

0x0292,	// (0x0000f18a) main2_pane

0x9d29,	// (0x00018c21) popup_sp_fs_action_menu_bg_pane_g1

0x9d31,	// (0x00018c29) popup_sp_fs_action_menu_bg_pane_g2

0x9d39,	// (0x00018c31) popup_sp_fs_action_menu_bg_pane_g3

0x9d41,	// (0x00018c39) popup_sp_fs_action_menu_bg_pane_g4

0x9d49,	// (0x00018c41) popup_sp_fs_action_menu_bg_pane_g5

0x9d51,	// (0x00018c49) popup_sp_fs_action_menu_bg_pane_g6

0x9d59,	// (0x00018c51) popup_sp_fs_action_menu_bg_pane_g7

0x9d61,	// (0x00018c59) popup_sp_fs_action_menu_bg_pane_g8

0x9d69,	// (0x00018c61) popup_sp_fs_action_menu_bg_pane_g9

0x9d71,	// (0x00018c69) popup_sp_fs_action_menu_bg_pane_g10

0x9d71,	// (0x00018c69) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0001e082) popup_sp_fs_action_menu_bg_pane_g

0x1284,	// (0x0001017c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x2_t3_g3_g1

0x1290,	// (0x00010188) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1290,	// (0x00010188) list_medium_line_x2_t3_g3_g2

0x129c,	// (0x00010194) list_medium_line_x2_t3_g3_g3_ParamLimits

0x129c,	// (0x00010194) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001e130) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001e130) list_medium_line_x2_t3_g3_g

0x12a8,	// (0x000101a0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x12a8,	// (0x000101a0) list_medium_line_x2_t3_g3_t1

0x12bd,	// (0x000101b5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x12bd,	// (0x000101b5) list_medium_line_x2_t3_g3_t2

0x12d1,	// (0x000101c9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x12d1,	// (0x000101c9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001e137) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001e137) list_medium_line_x2_t3_g3_t

0x1284,	// (0x0001017c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x2_t3_g2_g1

0x129c,	// (0x00010194) list_medium_line_x2_t3_g2_g2_ParamLimits

0x129c,	// (0x00010194) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001e13e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001e13e) list_medium_line_x2_t3_g2_g

0x12e6,	// (0x000101de) list_medium_line_x2_t3_g2_t1_ParamLimits

0x12e6,	// (0x000101de) list_medium_line_x2_t3_g2_t1

0x12fc,	// (0x000101f4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x12fc,	// (0x000101f4) list_medium_line_x2_t3_g2_t2

0x130e,	// (0x00010206) list_medium_line_x2_t3_g2_t3_ParamLimits

0x130e,	// (0x00010206) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001e143) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001e143) list_medium_line_x2_t3_g2_t

0x1284,	// (0x0001017c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x2_t4_g4_g1

0x132c,	// (0x00010224) list_medium_line_x2_t4_g4_g2_ParamLimits

0x132c,	// (0x00010224) list_medium_line_x2_t4_g4_g2

0x1290,	// (0x00010188) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1290,	// (0x00010188) list_medium_line_x2_t4_g4_g3

0x1338,	// (0x00010230) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1338,	// (0x00010230) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001e14a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001e14a) list_medium_line_x2_t4_g4_g

0x1344,	// (0x0001023c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1344,	// (0x0001023c) list_medium_line_x2_t4_g4_t1

0x135e,	// (0x00010256) list_medium_line_x2_t4_g4_t2_ParamLimits

0x135e,	// (0x00010256) list_medium_line_x2_t4_g4_t2

0x1374,	// (0x0001026c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1374,	// (0x0001026c) list_medium_line_x2_t4_g4_t3

0x1389,	// (0x00010281) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1389,	// (0x00010281) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001e153) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001e153) list_medium_line_x2_t4_g4_t

0x1284,	// (0x0001017c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x2_t2_g4_g1

0x132c,	// (0x00010224) list_medium_line_x2_t2_g4_g2_ParamLimits

0x132c,	// (0x00010224) list_medium_line_x2_t2_g4_g2

0x1290,	// (0x00010188) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1290,	// (0x00010188) list_medium_line_x2_t2_g4_g3

0x129c,	// (0x00010194) list_medium_line_x2_t2_g4_g4_ParamLimits

0x129c,	// (0x00010194) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001e1ba) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001e1ba) list_medium_line_x2_t2_g4_g

0x233f,	// (0x00011237) list_medium_line_x2_t2_g4_t1_ParamLimits

0x233f,	// (0x00011237) list_medium_line_x2_t2_g4_t1

0x12d1,	// (0x000101c9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x12d1,	// (0x000101c9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001e1c3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001e1c3) list_medium_line_x2_t2_g4_t

0x1284,	// (0x0001017c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x2_t2_g3_g1

0x1290,	// (0x00010188) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1290,	// (0x00010188) list_medium_line_x2_t2_g3_g2

0x129c,	// (0x00010194) list_medium_line_x2_t2_g3_g3_ParamLimits

0x129c,	// (0x00010194) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001e130) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001e130) list_medium_line_x2_t2_g3_g

0x2354,	// (0x0001124c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2354,	// (0x0001124c) list_medium_line_x2_t2_g3_t1

0x12d1,	// (0x000101c9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x12d1,	// (0x000101c9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001e1c8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001e1c8) list_medium_line_x2_t2_g3_t

0x2491,	// (0x00011389) main_sp_fs_list_pane_ParamLimits

0x2491,	// (0x00011389) main_sp_fs_list_pane

0xd2ac,	// (0x0001c1a4) sp_fs_scroll_pane_ParamLimits

0xd2ac,	// (0x0001c1a4) sp_fs_scroll_pane

0x249d,	// (0x00011395) list_medium_line_x2_t3_t1

0x24ad,	// (0x000113a5) list_medium_line_x2_t3_t2

0x24bb,	// (0x000113b3) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001e213) list_medium_line_x2_t3_t

0x24c9,	// (0x000113c1) list_medium_line_x3_t4_t1

0x24d9,	// (0x000113d1) list_medium_line_x3_t4_t2

0x24e7,	// (0x000113df) list_medium_line_x3_t4_t3

0x24bb,	// (0x000113b3) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001e21a) list_medium_line_x3_t4_t

0x24f5,	// (0x000113ed) list_medium_line_x4_t5_t1

0x2505,	// (0x000113fd) list_medium_line_x4_t5_t2

0x24e7,	// (0x000113df) list_medium_line_x4_t5_t3

0x2513,	// (0x0001140b) list_medium_line_x4_t5_t4

0x24bb,	// (0x000113b3) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001e223) list_medium_line_x4_t5_t

0x1284,	// (0x0001017c) list_medium_line_t4_g4_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_t4_g4_g1

0x2521,	// (0x00011419) list_medium_line_t4_g4_g2_ParamLimits

0x2521,	// (0x00011419) list_medium_line_t4_g4_g2

0x252d,	// (0x00011425) list_medium_line_t4_g4_g3_ParamLimits

0x252d,	// (0x00011425) list_medium_line_t4_g4_g3

0x129c,	// (0x00010194) list_medium_line_t4_g4_g4_ParamLimits

0x129c,	// (0x00010194) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001e22e) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001e22e) list_medium_line_t4_g4_g

0x2539,	// (0x00011431) list_medium_line_t4_g4_t1_ParamLimits

0x2539,	// (0x00011431) list_medium_line_t4_g4_t1

0x254e,	// (0x00011446) list_medium_line_t4_g4_t2_ParamLimits

0x254e,	// (0x00011446) list_medium_line_t4_g4_t2

0x2564,	// (0x0001145c) list_medium_line_t4_g4_t3_ParamLimits

0x2564,	// (0x0001145c) list_medium_line_t4_g4_t3

0x12d1,	// (0x000101c9) list_medium_line_t4_g4_t4_ParamLimits

0x12d1,	// (0x000101c9) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001e237) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001e237) list_medium_line_t4_g4_t

0x262d,	// (0x00011525) chi_dic_find_pane_g1

0x363d,	// (0x00012535) main_tport_pane

0x65c9,	// (0x000154c1) list_medium_line_plain_t1

0x6671,	// (0x00015569) list_medium_line_t2_g2_g1_ParamLimits

0x6671,	// (0x00015569) list_medium_line_t2_g2_g1

0x667d,	// (0x00015575) list_medium_line_t2_g2_g2_ParamLimits

0x667d,	// (0x00015575) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001e8f8) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001e8f8) list_medium_line_t2_g2_g

0x6689,	// (0x00015581) list_medium_line_t2_g2_t1_ParamLimits

0x6689,	// (0x00015581) list_medium_line_t2_g2_t1

0x66a0,	// (0x00015598) list_medium_line_t2_g2_t2_ParamLimits

0x66a0,	// (0x00015598) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001e8fd) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001e8fd) list_medium_line_t2_g2_t

0xd85c,	// (0x0001c754) aid_sp_fs_list_icon_a_sm

0xd864,	// (0x0001c75c) aid_sp_fs_list_icon_d

0xd86c,	// (0x0001c764) aid_sp_fs_text_primary

0xd875,	// (0x0001c76d) aid_sp_fs_text_secondary

0x6d07,	// (0x00015bff) list_medium_line

0x6d07,	// (0x00015bff) list_medium_line_g2

0x6d07,	// (0x00015bff) list_medium_line_g3

0x6d07,	// (0x00015bff) list_medium_line_plain

0x6d07,	// (0x00015bff) list_medium_line_plain_t2

0x6d07,	// (0x00015bff) list_medium_line_plain_t3

0x6d07,	// (0x00015bff) list_medium_line_right_icon

0x6d07,	// (0x00015bff) list_medium_line_right_iconx2

0x6d07,	// (0x00015bff) list_medium_line_t2

0x6d07,	// (0x00015bff) list_medium_line_t2_g2

0x6d07,	// (0x00015bff) list_medium_line_t2_g3

0x6d07,	// (0x00015bff) list_medium_line_t2_right_icon

0x6d07,	// (0x00015bff) list_medium_line_t2_right_iconx2

0x6d07,	// (0x00015bff) list_medium_line_t3

0x6d07,	// (0x00015bff) list_medium_line_t3_g2

0x6d07,	// (0x00015bff) list_medium_line_t3_g3

0x6d07,	// (0x00015bff) list_medium_line_t3_right_iconx2

0x6d10,	// (0x00015c08) list_medium_line_t4_g4

0x6d19,	// (0x00015c11) list_medium_line_x2

0x6d19,	// (0x00015c11) list_medium_line_x2_t2_g2

0x6d19,	// (0x00015c11) list_medium_line_x2_t2_g3

0x6d19,	// (0x00015c11) list_medium_line_x2_t2_g4

0x6d19,	// (0x00015c11) list_medium_line_x2_t3

0x6d19,	// (0x00015c11) list_medium_line_x2_t3_g2

0x6d19,	// (0x00015c11) list_medium_line_x2_t3_g3

0x6d19,	// (0x00015c11) list_medium_line_x2_t3_g4

0x6d19,	// (0x00015c11) list_medium_line_x2_t4_g2

0x6d19,	// (0x00015c11) list_medium_line_x2_t4_g4

0x6d22,	// (0x00015c1a) list_medium_line_x3

0x6d22,	// (0x00015c1a) list_medium_line_x3_t4

0x6d22,	// (0x00015c1a) list_medium_line_x3_t4_g4

0x6d10,	// (0x00015c08) list_medium_line_x4_t4

0x6d10,	// (0x00015c08) list_medium_line_x4_t4_g7

0x6d10,	// (0x00015c08) list_medium_line_x4_t5

0x6d2b,	// (0x00015c23) list_single_fs_dyc_pane_ParamLimits

0x6d2b,	// (0x00015c23) list_single_fs_dyc_pane

0x1284,	// (0x0001017c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x4_t4_g7_g1

0x7487,	// (0x0001637f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7487,	// (0x0001637f) list_medium_line_x4_t4_g7_g2

0x7493,	// (0x0001638b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7493,	// (0x0001638b) list_medium_line_x4_t4_g7_g3

0x74a2,	// (0x0001639a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74a2,	// (0x0001639a) list_medium_line_x4_t4_g7_g4

0x74ae,	// (0x000163a6) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74ae,	// (0x000163a6) list_medium_line_x4_t4_g7_g5

0x74bd,	// (0x000163b5) list_medium_line_x4_t4_g7_g6_ParamLimits

0x74bd,	// (0x000163b5) list_medium_line_x4_t4_g7_g6

0x74cc,	// (0x000163c4) list_medium_line_x4_t4_g7_g7_ParamLimits

0x74cc,	// (0x000163c4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001eac8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001eac8) list_medium_line_x4_t4_g7_g

0x74d8,	// (0x000163d0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x74d8,	// (0x000163d0) list_medium_line_x4_t4_g7_t1

0x74ed,	// (0x000163e5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x74ed,	// (0x000163e5) list_medium_line_x4_t4_g7_t2

0x7502,	// (0x000163fa) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7502,	// (0x000163fa) list_medium_line_x4_t4_g7_t3

0x7517,	// (0x0001640f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7517,	// (0x0001640f) list_medium_line_x4_t4_g7_t4

0x7529,	// (0x00016421) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7529,	// (0x00016421) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001ead7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001ead7) list_medium_line_x4_t4_g7_t

0x753b,	// (0x00016433) list_single_dyc_row_pane_ParamLimits

0x753b,	// (0x00016433) list_single_dyc_row_pane

0x7c04,	// (0x00016afc) call5_gesture_pane_ParamLimits

0x7c04,	// (0x00016afc) call5_gesture_pane

0x7c5a,	// (0x00016b52) call5_windows_pane_ParamLimits

0x7c5a,	// (0x00016b52) call5_windows_pane

0x7d00,	// (0x00016bf8) call5_swipe_1_pane_cp_ParamLimits

0x7d00,	// (0x00016bf8) call5_swipe_1_pane_cp

0x7d0c,	// (0x00016c04) call5_swipe_2_pane_cp_ParamLimits

0x7d0c,	// (0x00016c04) call5_swipe_2_pane_cp

0x9e9d,	// (0x00018d95) call5_image_pane_cp

0x7d18,	// (0x00016c10) popup_call5_audio_first_window_cp_ParamLimits

0x7d18,	// (0x00016c10) popup_call5_audio_first_window_cp

0xe34f,	// (0x0001d247) call5_swipe_1_pane_g1_cp_ParamLimits

0xe34f,	// (0x0001d247) call5_swipe_1_pane_g1_cp

0xe38f,	// (0x0001d287) call5_swipe_1_pane_g2_cp

0xe368,	// (0x0001d260) call5_swipe_1_pane_t1_cp_ParamLimits

0xe368,	// (0x0001d260) call5_swipe_1_pane_t1_cp

0xe34f,	// (0x0001d247) call5_swipe_2_pane_g1_cp_ParamLimits

0xe34f,	// (0x0001d247) call5_swipe_2_pane_g1_cp

0xe397,	// (0x0001d28f) call5_swipe_2_pane_g2_cp

0xe39f,	// (0x0001d297) call5_swipe_2_pane_t1_cp_ParamLimits

0xe39f,	// (0x0001d297) call5_swipe_2_pane_t1_cp

0x9509,	// (0x00018401) main_sp_fs_email_pane

0xe3b4,	// (0x0001d2ac) main_sp_fs_listscroll_pane_te

0x7d26,	// (0x00016c1e) popup_sp_fs_action_menu_pane_ParamLimits

0x7d26,	// (0x00016c1e) popup_sp_fs_action_menu_pane

0xc39c,	// (0x0001b294) bg_sp_fs_ctrlbar_pane_g1

0xc9a7,	// (0x0001b89f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc9b9,	// (0x0001b8b1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc9b0,	// (0x0001b8a8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc39c,	// (0x0001b294) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001ebc5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc181,	// (0x0001b079) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc181,	// (0x0001b079) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3bd,	// (0x0001d2b5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3bd,	// (0x0001d2b5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3c9,	// (0x0001d2c1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3c9,	// (0x0001d2c1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001ebce) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001ebce) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3d5,	// (0x0001d2cd) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3d5,	// (0x0001d2cd) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d6a,	// (0x00016c62) list_medium_line_t2_right_icon_g1

0x7d72,	// (0x00016c6a) list_medium_line_t2_right_icon_t1

0x7d82,	// (0x00016c7a) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001ebd3) list_medium_line_t2_right_icon_t

0xbe81,	// (0x0001ad79) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbe81,	// (0x0001ad79) bg_sp_fs_ctrlbar_pane

0x7ddc,	// (0x00016cd4) main_sp_fs_ctrlbar_button_pane_cp01

0x7de6,	// (0x00016cde) main_sp_fs_ctrlbar_ddmenu_pane

0xe427,	// (0x0001d31f) main_sp_fs_ctrlbar_pane_g1

0xe433,	// (0x0001d32b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001ebd8) main_sp_fs_ctrlbar_pane_g

0xe43f,	// (0x0001d337) main_sp_fs_ctrlbar_pane_t1

0x7df0,	// (0x00016ce8) main_sp_fs_ctrlbar_pane

0x7e14,	// (0x00016d0c) main_sp_fs_listscroll_pane_te_cp01

0x7e34,	// (0x00016d2c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e34,	// (0x00016d2c) popup_sp_fs_action_menu_pane_cp01

0x9509,	// (0x00018401) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9509,	// (0x00018401) bg_sp_fs_highlight_list_pane_cp01

0xe46f,	// (0x0001d367) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe46f,	// (0x0001d367) sp_fs_action_menu_list_gene_pane_g1

0xe47e,	// (0x0001d376) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe47e,	// (0x0001d376) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001ebe2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001ebe2) sp_fs_action_menu_list_gene_pane_g

0xe48b,	// (0x0001d383) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe48b,	// (0x0001d383) sp_fs_action_menu_list_gene_pane_t1

0xe4a3,	// (0x0001d39b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4a3,	// (0x0001d39b) sp_fs_action_menu_list_gene_pane

0xe4c2,	// (0x0001d3ba) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4c2,	// (0x0001d3ba) popup_sp_fs_action_menu_bg_pane

0xe4d0,	// (0x0001d3c8) sp_fs_action_menu_list_pane_ParamLimits

0xe4d0,	// (0x0001d3c8) sp_fs_action_menu_list_pane

0x7e64,	// (0x00016d5c) sp_fs_scroll_pane_cp01_ParamLimits

0x7e64,	// (0x00016d5c) sp_fs_scroll_pane_cp01

0x7e8a,	// (0x00016d82) list_medium_line_plain_t2_t1

0x7e9a,	// (0x00016d92) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001ebe7) list_medium_line_plain_t2_t

0x7eaa,	// (0x00016da2) list_medium_line_plain_t3_t1

0x7eba,	// (0x00016db2) list_medium_line_plain_t3_t2

0x7ec8,	// (0x00016dc0) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001ebec) list_medium_line_plain_t3_t

0x1284,	// (0x0001017c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x2_t2_g2_g1

0x129c,	// (0x00010194) list_medium_line_x2_t2_g2_g2_ParamLimits

0x129c,	// (0x00010194) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001e13e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001e13e) list_medium_line_x2_t2_g2_g

0x2539,	// (0x00011431) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2539,	// (0x00011431) list_medium_line_x2_t2_g2_t1

0x12d1,	// (0x000101c9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x12d1,	// (0x000101c9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001ebf3) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001ebf3) list_medium_line_x2_t2_g2_t

0x1284,	// (0x0001017c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x2_t4_g2_g1

0x129c,	// (0x00010194) list_medium_line_x2_t4_g2_g2_ParamLimits

0x129c,	// (0x00010194) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001e13e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001e13e) list_medium_line_x2_t4_g2_g

0x7ed6,	// (0x00016dce) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7ed6,	// (0x00016dce) list_medium_line_x2_t4_g2_t1

0x7eed,	// (0x00016de5) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7eed,	// (0x00016de5) list_medium_line_x2_t4_g2_t2

0x7f02,	// (0x00016dfa) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f02,	// (0x00016dfa) list_medium_line_x2_t4_g2_t3

0x12d1,	// (0x000101c9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x12d1,	// (0x000101c9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001ebf8) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001ebf8) list_medium_line_x2_t4_g2_t

0x7f14,	// (0x00016e0c) list_medium_line_t3_right_iconx2_g1

0x7d6a,	// (0x00016c62) list_medium_line_t3_right_iconx2_g2

0x7f1c,	// (0x00016e14) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001ec01) list_medium_line_t3_right_iconx2_g

0x7f26,	// (0x00016e1e) list_medium_line_t3_right_iconx2_t1

0x7f36,	// (0x00016e2e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001ec08) list_medium_line_t3_right_iconx2_t

0x1284,	// (0x0001017c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x3_t4_g4_g1

0x1290,	// (0x00010188) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1290,	// (0x00010188) list_medium_line_x3_t4_g4_g2

0x2521,	// (0x00011419) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2521,	// (0x00011419) list_medium_line_x3_t4_g4_g3

0x7f44,	// (0x00016e3c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f44,	// (0x00016e3c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001ec0d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001ec0d) list_medium_line_x3_t4_g4_g

0x7f50,	// (0x00016e48) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f50,	// (0x00016e48) list_medium_line_x3_t4_g4_t1

0x7f67,	// (0x00016e5f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f67,	// (0x00016e5f) list_medium_line_x3_t4_g4_t2

0x7f82,	// (0x00016e7a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7f82,	// (0x00016e7a) list_medium_line_x3_t4_g4_t3

0x7f97,	// (0x00016e8f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f97,	// (0x00016e8f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001ec16) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001ec16) list_medium_line_x3_t4_g4_t

0x7fb4,	// (0x00016eac) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fb4,	// (0x00016eac) list_single_dyc_row_text_pane_t1

0x7ffd,	// (0x00016ef5) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ffd,	// (0x00016ef5) list_single_dyc_row_text_pane_t2

0xe4f0,	// (0x0001d3e8) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4f0,	// (0x0001d3e8) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001ec1f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001ec1f) list_single_dyc_row_text_pane_t

0xe514,	// (0x0001d40c) list_single_dyc_row_pane_g1_ParamLimits

0xe514,	// (0x0001d40c) list_single_dyc_row_pane_g1

0xe520,	// (0x0001d418) list_single_dyc_row_pane_g2_ParamLimits

0xe520,	// (0x0001d418) list_single_dyc_row_pane_g2

0xe52c,	// (0x0001d424) list_single_dyc_row_pane_g3_ParamLimits

0xe52c,	// (0x0001d424) list_single_dyc_row_pane_g3

0xe538,	// (0x0001d430) list_single_dyc_row_pane_g4_ParamLimits

0xe538,	// (0x0001d430) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001ec2c) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001ec2c) list_single_dyc_row_pane_g

0xe544,	// (0x0001d43c) list_single_dyc_row_text_pane_ParamLimits

0xe544,	// (0x0001d43c) list_single_dyc_row_text_pane

0x9499,	// (0x00018391) bg_sp_fs_scroll_pane

0xe563,	// (0x0001d45b) thumb_sp_fs_scroll_pane

0x6671,	// (0x00015569) list_medium_line_g1_ParamLimits

0x6671,	// (0x00015569) list_medium_line_g1

0x8132,	// (0x0001702a) list_medium_line_t1_ParamLimits

0x8132,	// (0x0001702a) list_medium_line_t1

0x1284,	// (0x0001017c) list_medium_line_x2_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x2_g1

0x1290,	// (0x00010188) list_medium_line_x2_g2_ParamLimits

0x1290,	// (0x00010188) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001ec35) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001ec35) list_medium_line_x2_g

0xe56c,	// (0x0001d464) list_medium_line_x2_t1_ParamLimits

0xe56c,	// (0x0001d464) list_medium_line_x2_t1

0x1284,	// (0x0001017c) list_medium_line_x3_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x3_g1

0x1290,	// (0x00010188) list_medium_line_x3_g2_ParamLimits

0x1290,	// (0x00010188) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001ec35) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001ec35) list_medium_line_x3_g

0xe56c,	// (0x0001d464) list_medium_line_x3_t1_ParamLimits

0xe56c,	// (0x0001d464) list_medium_line_x3_t1

0xe582,	// (0x0001d47a) thumb_sp_fs_scroll_pane_g1

0xe58b,	// (0x0001d483) thumb_sp_fs_scroll_pane_g2

0xe594,	// (0x0001d48c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ec3a) thumb_sp_fs_scroll_pane_g

0xe582,	// (0x0001d47a) bg_sp_fs_scroll_pane_g1

0xe58b,	// (0x0001d483) bg_sp_fs_scroll_pane_g2

0xe594,	// (0x0001d48c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ec3a) bg_sp_fs_scroll_pane_g

0x1284,	// (0x0001017c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1284,	// (0x0001017c) list_medium_line_x2_t3_g4_g1

0x132c,	// (0x00010224) list_medium_line_x2_t3_g4_g2_ParamLimits

0x132c,	// (0x00010224) list_medium_line_x2_t3_g4_g2

0x1290,	// (0x00010188) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1290,	// (0x00010188) list_medium_line_x2_t3_g4_g3

0x129c,	// (0x00010194) list_medium_line_x2_t3_g4_g4_ParamLimits

0x129c,	// (0x00010194) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001e1ba) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001e1ba) list_medium_line_x2_t3_g4_g

0x8147,	// (0x0001703f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8147,	// (0x0001703f) list_medium_line_x2_t3_g4_t1

0x8161,	// (0x00017059) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8161,	// (0x00017059) list_medium_line_x2_t3_g4_t2

0x12d1,	// (0x000101c9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x12d1,	// (0x000101c9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001ec41) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001ec41) list_medium_line_x2_t3_g4_t

0x6671,	// (0x00015569) list_medium_line_g2_g1_ParamLimits

0x6671,	// (0x00015569) list_medium_line_g2_g1

0x667d,	// (0x00015575) list_medium_line_g2_g2_ParamLimits

0x667d,	// (0x00015575) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001e8f8) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001e8f8) list_medium_line_g2_g

0x817b,	// (0x00017073) list_medium_line_g2_t1_ParamLimits

0x817b,	// (0x00017073) list_medium_line_g2_t1

0x6671,	// (0x00015569) list_medium_line_t3_g2_g1_ParamLimits

0x6671,	// (0x00015569) list_medium_line_t3_g2_g1

0x667d,	// (0x00015575) list_medium_line_t3_g2_g2_ParamLimits

0x667d,	// (0x00015575) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001e8f8) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001e8f8) list_medium_line_t3_g2_g

0x8190,	// (0x00017088) list_medium_line_t3_g2_t1_ParamLimits

0x8190,	// (0x00017088) list_medium_line_t3_g2_t1

0x81aa,	// (0x000170a2) list_medium_line_t3_g2_t2_ParamLimits

0x81aa,	// (0x000170a2) list_medium_line_t3_g2_t2

0x81bf,	// (0x000170b7) list_medium_line_t3_g2_t3_ParamLimits

0x81bf,	// (0x000170b7) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001ec48) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001ec48) list_medium_line_t3_g2_t

0x7d6a,	// (0x00016c62) list_medium_line_right_icon_g1

0x81d9,	// (0x000170d1) list_medium_line_right_icon_t1

0x6671,	// (0x00015569) list_medium_line_t2_g1_ParamLimits

0x6671,	// (0x00015569) list_medium_line_t2_g1

0x81e7,	// (0x000170df) list_medium_line_t2_t1_ParamLimits

0x81e7,	// (0x000170df) list_medium_line_t2_t1

0x8201,	// (0x000170f9) list_medium_line_t2_t2_ParamLimits

0x8201,	// (0x000170f9) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001ec4f) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001ec4f) list_medium_line_t2_t

0x6671,	// (0x00015569) list_medium_line_t3_g1_ParamLimits

0x6671,	// (0x00015569) list_medium_line_t3_g1

0x821a,	// (0x00017112) list_medium_line_t3_t1_ParamLimits

0x821a,	// (0x00017112) list_medium_line_t3_t1

0x8231,	// (0x00017129) list_medium_line_t3_t2_ParamLimits

0x8231,	// (0x00017129) list_medium_line_t3_t2

0x8246,	// (0x0001713e) list_medium_line_t3_t3_ParamLimits

0x8246,	// (0x0001713e) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001ec54) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001ec54) list_medium_line_t3_t

0x6671,	// (0x00015569) list_medium_line_g3_g1_ParamLimits

0x6671,	// (0x00015569) list_medium_line_g3_g1

0x8258,	// (0x00017150) list_medium_line_g3_g2_ParamLimits

0x8258,	// (0x00017150) list_medium_line_g3_g2

0x667d,	// (0x00015575) list_medium_line_g3_g3_ParamLimits

0x667d,	// (0x00015575) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001ec5b) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001ec5b) list_medium_line_g3_g

0x8264,	// (0x0001715c) list_medium_line_g3_t1_ParamLimits

0x8264,	// (0x0001715c) list_medium_line_g3_t1

0x6671,	// (0x00015569) list_medium_line_t2_g3_g1_ParamLimits

0x6671,	// (0x00015569) list_medium_line_t2_g3_g1

0x8258,	// (0x00017150) list_medium_line_t2_g3_g2_ParamLimits

0x8258,	// (0x00017150) list_medium_line_t2_g3_g2

0x667d,	// (0x00015575) list_medium_line_t2_g3_g3_ParamLimits

0x667d,	// (0x00015575) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001ec5b) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001ec5b) list_medium_line_t2_g3_g

0x8279,	// (0x00017171) list_medium_line_t2_g3_t1_ParamLimits

0x8279,	// (0x00017171) list_medium_line_t2_g3_t1

0x8290,	// (0x00017188) list_medium_line_t2_g3_t2_ParamLimits

0x8290,	// (0x00017188) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001ec62) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001ec62) list_medium_line_t2_g3_t

0x6671,	// (0x00015569) list_medium_line_t3_g3_g1_ParamLimits

0x6671,	// (0x00015569) list_medium_line_t3_g3_g1

0x8258,	// (0x00017150) list_medium_line_t3_g3_g2_ParamLimits

0x8258,	// (0x00017150) list_medium_line_t3_g3_g2

0x667d,	// (0x00015575) list_medium_line_t3_g3_g3_ParamLimits

0x667d,	// (0x00015575) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001ec5b) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001ec5b) list_medium_line_t3_g3_g

0x82ab,	// (0x000171a3) list_medium_line_t3_g3_t1_ParamLimits

0x82ab,	// (0x000171a3) list_medium_line_t3_g3_t1

0x82bf,	// (0x000171b7) list_medium_line_t3_g3_t2_ParamLimits

0x82bf,	// (0x000171b7) list_medium_line_t3_g3_t2

0x82d1,	// (0x000171c9) list_medium_line_t3_g3_t3_ParamLimits

0x82d1,	// (0x000171c9) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001ec67) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001ec67) list_medium_line_t3_g3_t

0x7f14,	// (0x00016e0c) list_medium_line_right_iconx2_g1

0x7d6a,	// (0x00016c62) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ec6e) list_medium_line_right_iconx2_g

0x82e5,	// (0x000171dd) list_medium_line_right_iconx2_t1

0x7f14,	// (0x00016e0c) list_medium_line_t2_right_iconx2_g1

0x7d6a,	// (0x00016c62) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ec6e) list_medium_line_t2_right_iconx2_g

0x82f3,	// (0x000171eb) list_medium_line_t2_right_iconx2_t1

0x8303,	// (0x000171fb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001ec73) list_medium_line_t2_right_iconx2_t

0x8315,	// (0x0001720d) list_medium_line_x4_t4_t1

0x8323,	// (0x0001721b) list_medium_line_x4_t4_t2

0x8333,	// (0x0001722b) list_medium_line_x4_t4_t3

0x8343,	// (0x0001723b) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001ec78) list_medium_line_x4_t4_t

0x8396,	// (0x0001728e) tport_appsw_pane_ParamLimits

0x8396,	// (0x0001728e) tport_appsw_pane

0x83ae,	// (0x000172a6) tport_contact_pane_ParamLimits

0x83ae,	// (0x000172a6) tport_contact_pane

0x83c6,	// (0x000172be) tport_listscroll_pane_ParamLimits

0x83c6,	// (0x000172be) tport_listscroll_pane

0x83e0,	// (0x000172d8) cell_tport_appsw_pane_ParamLimits

0x83e0,	// (0x000172d8) cell_tport_appsw_pane

0xd182,	// (0x0001c07a) tport_appsw_pane_g1_ParamLimits

0xd182,	// (0x0001c07a) tport_appsw_pane_g1

0xe59d,	// (0x0001d495) tport_contact_pane_g1

0xde55,	// (0x0001cd4d) tport_contact_pane_t1

0xe5a6,	// (0x0001d49e) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001ec81) tport_contact_pane_t

0xe5b4,	// (0x0001d4ac) list_tport_pane

0xe5bd,	// (0x0001d4b5) scroll_pane_cp_030

0x8428,	// (0x00017320) cell_tport_appsw_pane_g1

0x8438,	// (0x00017330) cell_tport_appsw_pane_t1

0x8446,	// (0x0001733e) grid_highlight_pane_cp019

0x844e,	// (0x00017346) list_tport_double_graphic_pane_ParamLimits

0x844e,	// (0x00017346) list_tport_double_graphic_pane

0x9509,	// (0x00018401) list_highlight_pane_cp023_ParamLimits

0x9509,	// (0x00018401) list_highlight_pane_cp023

0x845b,	// (0x00017353) list_tport_double_graphic_pane_g1_ParamLimits

0x845b,	// (0x00017353) list_tport_double_graphic_pane_g1

0x8468,	// (0x00017360) list_tport_double_graphic_pane_t1_ParamLimits

0x8468,	// (0x00017360) list_tport_double_graphic_pane_t1

0x847d,	// (0x00017375) list_tport_double_graphic_pane_t2_ParamLimits

0x847d,	// (0x00017375) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001ec8d) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001ec8d) list_tport_double_graphic_pane_t

0x9499,	// (0x00018391) main_cale_note_pane

0x5d4a,	// (0x00014c42) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d4a,	// (0x00014c42) cell_vitu2_function_top_wide_pane_cp01

0x7890,	// (0x00016788) wait_bar_pane_cp05_ParamLimits

0x9509,	// (0x00018401) listscroll_cmail_pane

0xe5c6,	// (0x0001d4be) list_cmail_pane

0xd209,	// (0x0001c101) list_cmail_body_pane

0x848f,	// (0x00017387) list_single_cmail_header_caption_pane

0x84a6,	// (0x0001739e) list_single_cmail_header_detail_pane_ParamLimits

0x84a6,	// (0x0001739e) list_single_cmail_header_detail_pane

0xe5d6,	// (0x0001d4ce) list_single_cmail_header_caption_pane_t1

0x84d0,	// (0x000173c8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84d0,	// (0x000173c8) list_single_cmail_header_detail_pane_g1

0xe5ed,	// (0x0001d4e5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5ed,	// (0x0001d4e5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001ec92) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001ec92) list_single_cmail_header_detail_pane_g

0xe606,	// (0x0001d4fe) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe606,	// (0x0001d4fe) list_single_cmail_header_detail_pane_t1

0xe666,	// (0x0001d55e) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe666,	// (0x0001d55e) list_single_cmail_header_editor_pane_bg

0xdff6,	// (0x0001ceee) list_cmail_body_pane_g1

0xe67d,	// (0x0001d575) list_cmail_body_pane_t1

0xd1d1,	// (0x0001c0c9) list_single_cmail_header_editor_pane_bg_g1

0xa100,	// (0x00018ff8) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1e1,	// (0x0001c0d9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1d9,	// (0x0001c0d1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4b2,	// (0x0001c3aa) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd201,	// (0x0001c0f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1f1,	// (0x0001c0e9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1f9,	// (0x0001c0f1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa0e0,	// (0x00018fd8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84e8,	// (0x000173e0) calenote_gesture_pane_ParamLimits

0x84e8,	// (0x000173e0) calenote_gesture_pane

0x8508,	// (0x00017400) calenote_window_pane_ParamLimits

0x8508,	// (0x00017400) calenote_window_pane

0xe68b,	// (0x0001d583) popup_note_window_cp01

0x8524,	// (0x0001741c) calenote_swipe_1_pane_ParamLimits

0x8524,	// (0x0001741c) calenote_swipe_1_pane

0x7d0c,	// (0x00016c04) calenote_swipe_2_pane_ParamLimits

0x7d0c,	// (0x00016c04) calenote_swipe_2_pane

0xe34f,	// (0x0001d247) calenote_swipe_1_pane_g1_ParamLimits

0xe34f,	// (0x0001d247) calenote_swipe_1_pane_g1

0xe35c,	// (0x0001d254) calenote_swipe_1_pane_g2_ParamLimits

0xe35c,	// (0x0001d254) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001ebbb) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001ebbb) calenote_swipe_1_pane_g

0xe69d,	// (0x0001d595) calenote_swipe_1_pane_t1_ParamLimits

0xe69d,	// (0x0001d595) calenote_swipe_1_pane_t1

0xe34f,	// (0x0001d247) calenote_swipe_2_pane_g1_ParamLimits

0xe34f,	// (0x0001d247) calenote_swipe_2_pane_g1

0xe6bc,	// (0x0001d5b4) calenote_swipe_2_pane_g2_ParamLimits

0xe6bc,	// (0x0001d5b4) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001ec9e) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001ec9e) calenote_swipe_2_pane_g

0xe6c8,	// (0x0001d5c0) calenote_swipe_2_pane_t1_ParamLimits

0xe6c8,	// (0x0001d5c0) calenote_swipe_2_pane_t1

0x9499,	// (0x00018391) main_mup_navstr_pane

0x4a1a,	// (0x00013912) main_mup3_pane_t7_ParamLimits

0x4a1a,	// (0x00013912) main_mup3_pane_t7

0xcd31,	// (0x0001bc29) main_mp4_pane_g6_ParamLimits

0xcd31,	// (0x0001bc29) main_mp4_pane_g6

0xcf59,	// (0x0001be51) main_image3_pane_t4_ParamLimits

0xcf59,	// (0x0001be51) main_image3_pane_t4

0x8539,	// (0x00017431) popup_navstr_preview_pane_ParamLimits

0x8539,	// (0x00017431) popup_navstr_preview_pane

0x854d,	// (0x00017445) scroll_navstr_pane_ParamLimits

0x854d,	// (0x00017445) scroll_navstr_pane

0x9499,	// (0x00018391) bg_popup_preview_window_pane_cp04

0xe6ef,	// (0x0001d5e7) popup_navstr_preview_pane_t1

0x8561,	// (0x00017459) scroll_navstr_pane_g1_ParamLimits

0x8561,	// (0x00017459) scroll_navstr_pane_g1

0x8575,	// (0x0001746d) scroll_navstr_pane_t1_ParamLimits

0x8575,	// (0x0001746d) scroll_navstr_pane_t1

0xe694,	// (0x0001d58c) bg_button_pane_cp014

0xe694,	// (0x0001d58c) bg_button_pane_cp030

0x7baa,	// (0x00016aa2) list_double_fisheye_pane_g4_ParamLimits

0x7baa,	// (0x00016aa2) list_double_fisheye_pane_g4

0x7bb6,	// (0x00016aae) list_double_fisheye_pane_g5_ParamLimits

0x7bb6,	// (0x00016aae) list_double_fisheye_pane_g5

0xd2ac,	// (0x0001c1a4) sp_fs_scroll_pane_cp03

0xe427,	// (0x0001d31f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe433,	// (0x0001d32b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001ebd8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe43f,	// (0x0001d337) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5ce,	// (0x0001d4c6) sp_fs_scroll_pane_cp02

0x9ddc,	// (0x00018cd4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9ddc,	// (0x00018cd4) popup_sp_fs_calendar_preview_list_single_pane

0x9499,	// (0x00018391) main_cam6_pano_pane

0x9509,	// (0x00018401) main_mup3_pane_ParamLimits

0x9499,	// (0x00018391) main_phacti_pane

0x7763,	// (0x0001665b) bg_button_pane_cp11

0x777d,	// (0x00016675) main_mobtv_info_pane_g2_ParamLimits

0x777d,	// (0x00016675) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001eb38) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001eb38) main_mobtv_info_pane_g

0x795a,	// (0x00016852) sc_clock_pane_t5_ParamLimits

0x795a,	// (0x00016852) sc_clock_pane_t5

0x7a15,	// (0x0001690d) main_radioblah_pane_g1_ParamLimits

0xe292,	// (0x0001d18a) main_radioblah_pane_t3_ParamLimits

0xe292,	// (0x0001d18a) main_radioblah_pane_t3

0xe2aa,	// (0x0001d1a2) main_radioblah_pane_t4_ParamLimits

0xe2aa,	// (0x0001d1a2) main_radioblah_pane_t4

0x7a3d,	// (0x00016935) main_radioblah_text_pane_ParamLimits

0x7a3d,	// (0x00016935) main_radioblah_text_pane

0x7a4f,	// (0x00016947) main_radioblah_info_pane_g1_ParamLimits

0x7ae8,	// (0x000169e0) main_radioblah_info_pane_t4_ParamLimits

0x7ae8,	// (0x000169e0) main_radioblah_info_pane_t4

0x9509,	// (0x00018401) main_sp_fs_calendar_pane

0x858c,	// (0x00017484) main_phacti_pane_g1

0x8594,	// (0x0001748c) phacti_note_pane_ParamLimits

0x8594,	// (0x0001748c) phacti_note_pane

0xe706,	// (0x0001d5fe) phacti_term_pane_ParamLimits

0xe706,	// (0x0001d5fe) phacti_term_pane

0xe71b,	// (0x0001d613) phacti_note_pane_t1_ParamLimits

0xe71b,	// (0x0001d613) phacti_note_pane_t1

0xe732,	// (0x0001d62a) phacti_term_pane_g1

0xe73a,	// (0x0001d632) phacti_term_pane_t1_ParamLimits

0xe73a,	// (0x0001d632) phacti_term_pane_t1

0xe764,	// (0x0001d65c) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9f01,	// (0x00018df9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001eca8) popup_sp_fs_calendar_preview_list_single_pane_g

0xe76c,	// (0x0001d664) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe76c,	// (0x0001d664) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe781,	// (0x0001d679) aid_popup_sp_fs_bg_corner_pane

0xc39c,	// (0x0001b294) popup_sp_fs_calendar_preview_bg_pane_g1

0x9499,	// (0x00018391) popup_sp_fs_calendar_preview_bg_pane

0xe789,	// (0x0001d681) popup_sp_fs_calendar_preview_list_pane

0xbe81,	// (0x0001ad79) bg_main_sp_fs_cale_pane_ParamLimits

0xbe81,	// (0x0001ad79) bg_main_sp_fs_cale_pane

0xe791,	// (0x0001d689) listscroll_cale_mrui_pane_ParamLimits

0xe791,	// (0x0001d689) listscroll_cale_mrui_pane

0xe7a6,	// (0x0001d69e) listscroll_sp_fs_schedule_track_pane

0xe7af,	// (0x0001d6a7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7af,	// (0x0001d6a7) main_sp_fs_ctrlbar_pane_cp01

0xe7c2,	// (0x0001d6ba) main_sp_fs_ribbon_pane

0xe7ca,	// (0x0001d6c2) popup_sp_fs_cale_preview_window

0x8609,	// (0x00017501) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8609,	// (0x00017501) list_single_sp_fs_schedule_track_pane

0x9509,	// (0x00018401) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9509,	// (0x00018401) bg_sp_fs_highlight_list_pane_cp03

0x861d,	// (0x00017515) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x861d,	// (0x00017515) list_single_sp_fs_schedule_track_pane_g1

0x8629,	// (0x00017521) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8629,	// (0x00017521) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001ecad) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001ecad) list_single_sp_fs_schedule_track_pane_g

0x8635,	// (0x0001752d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8635,	// (0x0001752d) list_single_sp_fs_schedule_track_pane_t1

0x864f,	// (0x00017547) sp_fs_schedule_track_pane_ParamLimits

0x864f,	// (0x00017547) sp_fs_schedule_track_pane

0xe7dc,	// (0x0001d6d4) sp_fs_schedule_track_pane_g1

0xe7e4,	// (0x0001d6dc) sp_fs_schedule_track_pane_g2

0xe7ec,	// (0x0001d6e4) sp_fs_schedule_track_pane_g3

0xe7f4,	// (0x0001d6ec) sp_fs_schedule_track_pane_g4

0xe7fc,	// (0x0001d6f4) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001ecb2) sp_fs_schedule_track_pane_g

0xd1d1,	// (0x0001c0c9) bg_sp_fs_schedule_viewer_highlight_g1

0xa100,	// (0x00018ff8) bg_sp_fs_schedule_viewer_highlight_g2

0xd1d9,	// (0x0001c0d1) bg_sp_fs_schedule_viewer_highlight_g3

0xd1e1,	// (0x0001c0d9) bg_sp_fs_schedule_viewer_highlight_g4

0xd4b2,	// (0x0001c3aa) bg_sp_fs_schedule_viewer_highlight_g5

0xd1f1,	// (0x0001c0e9) bg_sp_fs_schedule_viewer_highlight_g6

0xd1f9,	// (0x0001c0f1) bg_sp_fs_schedule_viewer_highlight_g7

0xd201,	// (0x0001c0f9) bg_sp_fs_schedule_viewer_highlight_g8

0xa0e0,	// (0x00018fd8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001ecbd) bg_sp_fs_schedule_viewer_highlight_g

0x9499,	// (0x00018391) bg_main_sp_fs_ribbon_pane

0x8660,	// (0x00017558) main_sp_fs_ribbon_pane_g1

0xe804,	// (0x0001d6fc) main_sp_fs_ribbon_pane_t1

0x8669,	// (0x00017561) main_sp_fs_ribbon_pane_t2

0xe813,	// (0x0001d70b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001ecd0) main_sp_fs_ribbon_pane_t

0xe822,	// (0x0001d71a) main_sp_fs_ribbon_scheduler_pane

0xe82a,	// (0x0001d722) bg_main_sp_fs_ribbon_pane_g1

0xe833,	// (0x0001d72b) bg_main_sp_fs_ribbon_pane_g2

0xe83c,	// (0x0001d734) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001ecd7) bg_main_sp_fs_ribbon_pane_g

0xe844,	// (0x0001d73c) main_sp_fs_ribbon_scheduler_pane_g1

0xe84d,	// (0x0001d745) main_sp_fs_ribbon_scheduler_pane_g2

0xe856,	// (0x0001d74e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001ecde) main_sp_fs_ribbon_scheduler_pane_g

0xe85f,	// (0x0001d757) list_cale_mrui_pane

0x8678,	// (0x00017570) sp_fs_scroll_pane_cp07_ParamLimits

0x8678,	// (0x00017570) sp_fs_scroll_pane_cp07

0x8694,	// (0x0001758c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8694,	// (0x0001758c) bg_sp_fs_schedule_viewer_highlight

0xe86c,	// (0x0001d764) list_single_sp_fs_schedule_track_pane_cp01

0xe874,	// (0x0001d76c) list_sp_fs_schedule_track_pane

0xe87c,	// (0x0001d774) sp_fs_scroll_pane_cp06_ParamLimits

0xe87c,	// (0x0001d774) sp_fs_scroll_pane_cp06

0xc39c,	// (0x0001b294) bgmain_sp_fs_calendar_pane_g1

0x86a4,	// (0x0001759c) list_single_cale_mrui_pane_ParamLimits

0x86a4,	// (0x0001759c) list_single_cale_mrui_pane

0xe88e,	// (0x0001d786) list_single_cale_mrui_row_pane_ParamLimits

0xe88e,	// (0x0001d786) list_single_cale_mrui_row_pane

0xe89b,	// (0x0001d793) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe89b,	// (0x0001d793) list_single_cale_mrui_row_pane_g1

0xe8e0,	// (0x0001d7d8) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8e0,	// (0x0001d7d8) list_single_cale_mrui_row_pane_t1

0x86c5,	// (0x000175bd) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86c5,	// (0x000175bd) list_single_cale_mrui_row_pane_t2

0xe8f2,	// (0x0001d7ea) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8f2,	// (0x0001d7ea) list_single_cale_mrui_row_pane_t3

0xe921,	// (0x0001d819) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe921,	// (0x0001d819) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001ecec) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001ecec) list_single_cale_mrui_row_pane_t

0x872d,	// (0x00017625) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x872d,	// (0x00017625) list_single_cmail_header_editor_pane_bg_cp01

0x8753,	// (0x0001764b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8753,	// (0x0001764b) list_single_cmail_header_editor_pane_bg_cp02

0x8773,	// (0x0001766b) main_radioblah_text_pane_t1_ParamLimits

0x8773,	// (0x0001766b) main_radioblah_text_pane_t1

0xe950,	// (0x0001d848) cam6_indi_pane_cp01

0xe958,	// (0x0001d850) cam6_mode_pane_cp01

0xe960,	// (0x0001d858) cam6_pano_pane

0xe969,	// (0x0001d861) cam6_zoom_pane_cp01

0xe971,	// (0x0001d869) cam6_pano_image_pane

0xe97c,	// (0x0001d874) cam6_pano_pane_g1

0xdff6,	// (0x0001ceee) cam6_pano_pane_g2

0xe985,	// (0x0001d87d) cam6_pano_pane_g3

0xe98e,	// (0x0001d886) cam6_pano_pane_g4

0xc994,	// (0x0001b88c) cam6_pano_pane_g5

0xe997,	// (0x0001d88f) cam6_pano_pane_g6

0xe9a1,	// (0x0001d899) cam6_pano_pane_g7

0xe9a9,	// (0x0001d8a1) cam6_pano_pane_g8

0xe9b2,	// (0x0001d8aa) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001ecf5) cam6_pano_pane_g

0x9499,	// (0x00018391) main_browser_tag_pane

0xe6e7,	// (0x0001d5df) grid_navstr_albumart_pane

0xe9bd,	// (0x0001d8b5) cell_navstr_albumart_pane_ParamLimits

0xe9bd,	// (0x0001d8b5) cell_navstr_albumart_pane

0xe9dd,	// (0x0001d8d5) cell_navstr_albumart_pane_g1

0xbc92,	// (0x0001ab8a) cell_navstr_albumart_pane_g2

0xbca2,	// (0x0001ab9a) cell_navstr_albumart_pane_g3

0xbc9a,	// (0x0001ab92) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001ed08) cell_navstr_albumart_pane_g

0x878d,	// (0x00017685) bt_list_pane_ParamLimits

0x878d,	// (0x00017685) bt_list_pane

0x87a1,	// (0x00017699) bt_list_pane_t1

0x87b0,	// (0x000176a8) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001ed11) bt_list_pane_t

0x9499,	// (0x00018391) main_cale_prevew_pane

0x87bf,	// (0x000176b7) popup_cale_preview_window_ParamLimits

0x87bf,	// (0x000176b7) popup_cale_preview_window

0x9509,	// (0x00018401) bg_popup_preview_window_pane_cp05_ParamLimits

0x9509,	// (0x00018401) bg_popup_preview_window_pane_cp05

0xe9e5,	// (0x0001d8dd) list_cale_preview_pane_ParamLimits

0xe9e5,	// (0x0001d8dd) list_cale_preview_pane

0x87da,	// (0x000176d2) list_double_cale_preview_pane_ParamLimits

0x87da,	// (0x000176d2) list_double_cale_preview_pane

0x87ec,	// (0x000176e4) list_single_cale_preview_pane_ParamLimits

0x87ec,	// (0x000176e4) list_single_cale_preview_pane

0x8802,	// (0x000176fa) list_single_cale_preview_pane_g1

0x880a,	// (0x00017702) list_single_cale_preview_pane_t1_ParamLimits

0x880a,	// (0x00017702) list_single_cale_preview_pane_t1

0x881f,	// (0x00017717) list_double_cale_preview_pane_g1

0x8827,	// (0x0001771f) list_double_cale_preview_pane_t1_ParamLimits

0x8827,	// (0x0001771f) list_double_cale_preview_pane_t1

0x883c,	// (0x00017734) list_double_cale_preview_pane_t2_ParamLimits

0x883c,	// (0x00017734) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001ed16) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001ed16) list_double_cale_preview_pane_t

0x9499,	// (0x00018391) main_ezdial_pane

0x9509,	// (0x00018401) main_sp_fs_email_pane_ParamLimits

0x7d94,	// (0x00016c8c) cmail_ddmenu_btn01_pane_ParamLimits

0x7d94,	// (0x00016c8c) cmail_ddmenu_btn01_pane

0x7da7,	// (0x00016c9f) cmail_ddmenu_btn02_pane_ParamLimits

0x7da7,	// (0x00016c9f) cmail_ddmenu_btn02_pane

0x7dca,	// (0x00016cc2) cmail_ddmenu_btn03_pane_ParamLimits

0x7dca,	// (0x00016cc2) cmail_ddmenu_btn03_pane

0x7df0,	// (0x00016ce8) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e14,	// (0x00016d0c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd209,	// (0x0001c101) list_cmail_body_pane_ParamLimits

0xe5e4,	// (0x0001d4dc) bg_button_pane_cp12

0xe5f9,	// (0x0001d4f1) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5f9,	// (0x0001d4f1) list_single_cmail_header_detail_pane_g3

0xe642,	// (0x0001d53a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe642,	// (0x0001d53a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001ec99) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001ec99) list_single_cmail_header_detail_pane_t

0xe74f,	// (0x0001d647) phacti_term_pane_t2_ParamLimits

0xe74f,	// (0x0001d647) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001eca3) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001eca3) phacti_term_pane_t

0xe9f1,	// (0x0001d8e9) aid_size_list_single_double

0x8854,	// (0x0001774c) popup_ezdial_listscroll_window

0x8870,	// (0x00017768) popup_number_entry_window_cp01

0x9e9d,	// (0x00018d95) bg_popup_call_pane_cp09

0xe9fd,	// (0x0001d8f5) ezdial_list_pane

0xea05,	// (0x0001d8fd) scroll_pane_cp23

0xbe81,	// (0x0001ad79) bg_button_pane_cp028_ParamLimits

0xbe81,	// (0x0001ad79) bg_button_pane_cp028

0x887e,	// (0x00017776) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x887e,	// (0x00017776) cmail_ddmenu_btn01_pane_g1

0x888a,	// (0x00017782) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x888a,	// (0x00017782) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001ed1b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001ed1b) cmail_ddmenu_btn01_pane_g

0xea0d,	// (0x0001d905) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea0d,	// (0x0001d905) cmail_ddmenu_btn01_pane_t1

0xbe81,	// (0x0001ad79) bg_button_pane_cp029_ParamLimits

0xbe81,	// (0x0001ad79) bg_button_pane_cp029

0x889e,	// (0x00017796) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x889e,	// (0x00017796) cmail_ddmenu_btn02_pane_g1

0x88b6,	// (0x000177ae) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88b6,	// (0x000177ae) cmail_ddmenu_btn02_pane_t1

0x9509,	// (0x00018401) bg_button_pane_cp031_ParamLimits

0x9509,	// (0x00018401) bg_button_pane_cp031

0x889e,	// (0x00017796) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x889e,	// (0x00017796) cmail_ddmenu_btn03_pane_g1

0x88b6,	// (0x000177ae) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88b6,	// (0x000177ae) cmail_ddmenu_btn03_pane_t1

0x55c1,	// (0x000144b9) cell_dialer2_keypad_pane_t1_ParamLimits

0x55db,	// (0x000144d3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x55db,	// (0x000144d3) cell_dialer2_keypad_pane_t1_copy1

0x75ca,	// (0x000164c2) ncimui_group_button_pane

0x9509,	// (0x00018401) main_sp_fs_calendar_pane_ParamLimits

0x848f,	// (0x00017387) list_single_cmail_header_caption_pane_ParamLimits

0xd875,	// (0x0001c76d) aid_recal_txt_sm_pane

0x9499,	// (0x00018391) mian_recal_day_pane

0xe7ca,	// (0x0001d6c2) popup_sp_fs_cale_preview_window_ParamLimits

0xea23,	// (0x0001d91b) list_recal_day_pane

0xea77,	// (0x0001d96f) list_single_recal_day_pane_ParamLimits

0xea77,	// (0x0001d96f) list_single_recal_day_pane

0xea89,	// (0x0001d981) list_single_recal_day_pane_g1_ParamLimits

0xea89,	// (0x0001d981) list_single_recal_day_pane_g1

0xea95,	// (0x0001d98d) list_single_recal_day_pane_g2_ParamLimits

0xea95,	// (0x0001d98d) list_single_recal_day_pane_g2

0xeaa5,	// (0x0001d99d) list_single_recal_day_pane_g3_ParamLimits

0xeaa5,	// (0x0001d99d) list_single_recal_day_pane_g3

0x88da,	// (0x000177d2) list_single_recal_day_pane_g4_ParamLimits

0x88da,	// (0x000177d2) list_single_recal_day_pane_g4

0xeab1,	// (0x0001d9a9) list_single_recal_day_pane_g5_ParamLimits

0xeab1,	// (0x0001d9a9) list_single_recal_day_pane_g5

0xeac1,	// (0x0001d9b9) list_single_recal_day_pane_g6_ParamLimits

0xeac1,	// (0x0001d9b9) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001ed2a) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001ed2a) list_single_recal_day_pane_g

0xead5,	// (0x0001d9cd) list_single_recal_day_pane_t1

0xeae7,	// (0x0001d9df) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001ed35) list_single_recal_day_pane_t

0x88fa,	// (0x000177f2) ncimui_query_button_pane_ParamLimits

0x88fa,	// (0x000177f2) ncimui_query_button_pane

0x890a,	// (0x00017802) ncimui_query_button_pane_t1_ParamLimits

0x890a,	// (0x00017802) ncimui_query_button_pane_t1

0xeaf9,	// (0x0001d9f1) ncimui_query_button_pane_t2_ParamLimits

0xeaf9,	// (0x0001d9f1) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001ed3a) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001ed3a) ncimui_query_button_pane_t

0x891d,	// (0x00017815) query_button_pane_ParamLimits

0x891d,	// (0x00017815) query_button_pane

0x9499,	// (0x00018391) bg_button_pane_cp0028

0xeb0c,	// (0x0001da04) query_button_pane_t1

0x363d,	// (0x00012535) main_tport_pane_ParamLimits

0x8353,	// (0x0001724b) bg_popup_window_pane_cp01_ParamLimits

0x8353,	// (0x0001724b) bg_popup_window_pane_cp01

0x836e,	// (0x00017266) heading_pane_cp08_ParamLimits

0x836e,	// (0x00017266) heading_pane_cp08

0x8381,	// (0x00017279) heading_pane_cp07_ParamLimits

0x8381,	// (0x00017279) heading_pane_cp07

0x8428,	// (0x00017320) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001ec86) cell_tport_appsw_pane_g

0xab27,	// (0x00019a1f) input_candi_list_open_g1

0xa2f1,	// (0x000191e9) list_cale_time_pane_g6_ParamLimits

0xa2f1,	// (0x000191e9) list_cale_time_pane_g6

0x4406,	// (0x000132fe) aid_size_touch_calib_1_ParamLimits

0x4406,	// (0x000132fe) aid_size_touch_calib_1

0x4418,	// (0x00013310) aid_size_touch_calib_2_ParamLimits

0x4418,	// (0x00013310) aid_size_touch_calib_2

0x4430,	// (0x00013328) aid_size_touch_calib_3_ParamLimits

0x4430,	// (0x00013328) aid_size_touch_calib_3

0x444e,	// (0x00013346) aid_size_touch_calib_4_ParamLimits

0x444e,	// (0x00013346) aid_size_touch_calib_4

0x4466,	// (0x0001335e) main_touch_calib_button_group_pane_ParamLimits

0x4466,	// (0x0001335e) main_touch_calib_button_group_pane

0x447e,	// (0x00013376) main_touch_calib_pane_g1_ParamLimits

0x4490,	// (0x00013388) main_touch_calib_pane_g2_ParamLimits

0x44a2,	// (0x0001339a) main_touch_calib_pane_g3_ParamLimits

0x44b4,	// (0x000133ac) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0001e649) main_touch_calib_pane_g_ParamLimits

0x44c6,	// (0x000133be) main_touch_calib_pane_t1_ParamLimits

0x44e0,	// (0x000133d8) main_touch_calib_pane_t2_ParamLimits

0x44fa,	// (0x000133f2) main_touch_calib_pane_t3_ParamLimits

0x450e,	// (0x00013406) main_touch_calib_pane_t4_ParamLimits

0x4522,	// (0x0001341a) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0001e652) main_touch_calib_pane_t_ParamLimits

0xc734,	// (0x0001b62c) list_single_fp_cale_pane_g3_ParamLimits

0xc734,	// (0x0001b62c) list_single_fp_cale_pane_g3

0x9509,	// (0x00018401) bg_button_pane_cp012_ParamLimits

0x9509,	// (0x00018401) bg_vkb2_func_pane_cp03_ParamLimits

0x6627,	// (0x0001551f) cell_vitu2_function_top_pane_g1_ParamLimits

0x9509,	// (0x00018401) bg_vkb2_func_pane_cp04_ParamLimits

0x7558,	// (0x00016450) main_ncimui_button_group_pane_ParamLimits

0x7558,	// (0x00016450) main_ncimui_button_group_pane

0x75b8,	// (0x000164b0) main_ncimui_pane_t3_ParamLimits

0x75b8,	// (0x000164b0) main_ncimui_pane_t3

0xe6fd,	// (0x0001d5f5) phacti_button_group_pane

0xe9f1,	// (0x0001d8e9) aid_size_list_single_double_ParamLimits

0x8854,	// (0x0001774c) popup_ezdial_listscroll_window_ParamLimits

0x8870,	// (0x00017768) popup_number_entry_window_cp01_ParamLimits

0x8930,	// (0x00017828) phacti_button_pane_ParamLimits

0x8930,	// (0x00017828) phacti_button_pane

0x9499,	// (0x00018391) bg_button_pane_cp14

0xeb1a,	// (0x0001da12) phacti_button_pane_t1

0x8941,	// (0x00017839) main_touch_calib_button_pane_ParamLimits

0x8941,	// (0x00017839) main_touch_calib_button_pane

0x9c6c,	// (0x00018b64) bg_button_pane_cp18_ParamLimits

0x9c6c,	// (0x00018b64) bg_button_pane_cp18

0xeb28,	// (0x0001da20) main_touch_calib_button_pane_t1_ParamLimits

0xeb28,	// (0x0001da20) main_touch_calib_button_pane_t1

0xeb3e,	// (0x0001da36) main_touch_calib_button_pane_t2_ParamLimits

0xeb3e,	// (0x0001da36) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001ed3f) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001ed3f) main_touch_calib_button_pane_t

0x9499,	// (0x00018391) cell_ncimui_button_pane

0x9499,	// (0x00018391) bg_button_pane_cp032

0xeb5c,	// (0x0001da54) cell_ncimui_button_pane_t1

0xcf39,	// (0x0001be31) image3_infobar_pane_ParamLimits

0xcf39,	// (0x0001be31) image3_infobar_pane

0x7986,	// (0x0001687e) fs_bigclock_status_pane_ParamLimits

0x7986,	// (0x0001687e) fs_bigclock_status_pane

0x7993,	// (0x0001688b) main_fs_bigclock_clock_pane_ParamLimits

0x7993,	// (0x0001688b) main_fs_bigclock_clock_pane

0x79b3,	// (0x000168ab) main_fs_bigclock_indi_pane_ParamLimits

0x79b3,	// (0x000168ab) main_fs_bigclock_indi_pane

0x79dd,	// (0x000168d5) main_fs_bigclock_swipe_pane_ParamLimits

0x79dd,	// (0x000168d5) main_fs_bigclock_swipe_pane

0x9499,	// (0x00018391) main_fs_clock_dumped_data

0xe103,	// (0x0001cffb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe103,	// (0x0001cffb) list_single_fs_bigclock_indicator_pane_g1

0xe11e,	// (0x0001d016) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe11e,	// (0x0001d016) list_single_fs_bigclock_indicator_pane_g2

0xe138,	// (0x0001d030) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe138,	// (0x0001d030) list_single_fs_bigclock_indicator_pane_g3

0xe152,	// (0x0001d04a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe152,	// (0x0001d04a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001eb6c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001eb6c) list_single_fs_bigclock_indicator_pane_g

0xe17d,	// (0x0001d075) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe17d,	// (0x0001d075) list_single_fs_bigclock_indicator_pane_t1

0xe1a5,	// (0x0001d09d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1a5,	// (0x0001d09d) list_single_fs_bigclock_indicator_pane_t2

0xe1cd,	// (0x0001d0c5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1cd,	// (0x0001d0c5) list_single_fs_bigclock_indicator_pane_t3

0xe1f5,	// (0x0001d0ed) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1f5,	// (0x0001d0ed) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001eb77) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001eb77) list_single_fs_bigclock_indicator_pane_t

0xeb6a,	// (0x0001da62) image3_infobar_fav_pane_ParamLimits

0xeb6a,	// (0x0001da62) image3_infobar_fav_pane

0xeb7a,	// (0x0001da72) image3_infobar_loc_pane_ParamLimits

0xeb7a,	// (0x0001da72) image3_infobar_loc_pane

0xeb8e,	// (0x0001da86) image3_infobar_time_pane_ParamLimits

0xeb8e,	// (0x0001da86) image3_infobar_time_pane

0xc39c,	// (0x0001b294) image3_infobar_time_pane_g1

0xeb9e,	// (0x0001da96) image3_infobar_time_pane_t1

0xc39c,	// (0x0001b294) image3_infobar_loc_pane_g1

0xebac,	// (0x0001daa4) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001ed44) image3_infobar_loc_pane_g

0xebb4,	// (0x0001daac) image3_infobar_loc_pane_t1

0xc39c,	// (0x0001b294) image3_infobar_fav_pane_g1

0xebc2,	// (0x0001daba) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001ed49) image3_infobar_fav_pane_g

0xebca,	// (0x0001dac2) fs_bigclock_status_battery_pane

0xebd3,	// (0x0001dacb) fs_bigclock_status_signal_pane

0xebdc,	// (0x0001dad4) fs_bigclock_status_title_pane

0xebe5,	// (0x0001dadd) fs_bigclock_status_signal_pane_g1

0xebee,	// (0x0001dae6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001ed4e) fs_bigclock_status_signal_pane_g

0xebf6,	// (0x0001daee) fs_bigclock_status_battery_pane_g1

0xebff,	// (0x0001daf7) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001ed53) fs_bigclock_status_battery_pane_g

0xec07,	// (0x0001daff) fs_bigclock_status_title_pane_t1

0xc39c,	// (0x0001b294) main_fs_bigclock_clock_pane_g1

0xec15,	// (0x0001db0d) main_fs_bigclock_clock_pane_g2

0xec1e,	// (0x0001db16) main_fs_bigclock_clock_pane_g3

0xec1e,	// (0x0001db16) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001ed58) main_fs_bigclock_clock_pane_g

0xec26,	// (0x0001db1e) main_fs_bigclock_clock_pane_t1

0x8956,	// (0x0001784e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001ed61) main_fs_bigclock_clock_pane_t

0xec34,	// (0x0001db2c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec34,	// (0x0001db2c) list_single_fs_bigclock_indicator_pane

0xec45,	// (0x0001db3d) list_single_fs_bigclock_pane_ParamLimits

0xec45,	// (0x0001db3d) list_single_fs_bigclock_pane

0xec6b,	// (0x0001db63) main_fs_bigclock_indicator_pane_t1

0xec7a,	// (0x0001db72) list_single_fs_bigclock_pane_g1

0xec82,	// (0x0001db7a) list_single_fs_bigclock_pane_t1

0xc39c,	// (0x0001b294) main_fs_bigclock_swipe_pane_g1

0xecc5,	// (0x0001dbbd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001ed72) main_fs_bigclock_swipe_pane_g

0xeccd,	// (0x0001dbc5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeccd,	// (0x0001dbc5) main_fs_bigclock_swipe_pane_t1

0x257a,	// (0x00011472) call_type_pane_ParamLimits

0x9499,	// (0x00018391) main_btmg_pane

0xe8c7,	// (0x0001d7bf) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8c7,	// (0x0001d7bf) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001ece5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001ece5) list_single_cale_mrui_row_pane_g

0xea4c,	// (0x0001d944) list_recal_vselct_arw_lo_pane

0xea54,	// (0x0001d94c) list_recal_vselct_arw_up_pane

0xea5c,	// (0x0001d954) list_recal_vselct_pane

0x89a9,	// (0x000178a1) btmg_button_pane

0x89b3,	// (0x000178ab) main_btmg_pane_g1

0x9499,	// (0x00018391) bg_button_pane_cp044

0xecea,	// (0x0001dbe2) btmg_button_pane_t1

0xbe6d,	// (0x0001ad65) aid_listscroll_gen

0x9509,	// (0x00018401) main_cntbar_detail_pane

0xe5c6,	// (0x0001d4be) list_cmail_folder_pane

0xd2ac,	// (0x0001c1a4) sp_fs_scroll_pane_cp03_ParamLimits

0x848f,	// (0x00017387) list_single_fs_dyc_pane_cp01_ParamLimits

0x848f,	// (0x00017387) list_single_fs_dyc_pane_cp01

0xecf8,	// (0x0001dbf0) aid_size_cmail_indent

0xed01,	// (0x0001dbf9) list_single_dyc_row_pane_cp01

0x89ef,	// (0x000178e7) cntbar_detail_list_pane_ParamLimits

0x89ef,	// (0x000178e7) cntbar_detail_list_pane

0x8a3b,	// (0x00017933) main_cntbar_detail_cont_pane_ParamLimits

0x8a3b,	// (0x00017933) main_cntbar_detail_cont_pane

0xd2ac,	// (0x0001c1a4) scroll_pane_cp032_ParamLimits

0xd2ac,	// (0x0001c1a4) scroll_pane_cp032

0x8a4f,	// (0x00017947) cntbar_detail_list_event_pane_ParamLimits

0x8a4f,	// (0x00017947) cntbar_detail_list_event_pane

0x89ff,	// (0x000178f7) cntbar_detail_list_shct_pane

0xa14e,	// (0x00019046) aid_list_gen

0xed0a,	// (0x0001dc02) aid_scroll

0xed13,	// (0x0001dc0b) aid_size_touch_scroll_bar

0x6d19,	// (0x00015c11) aid_list_double

0x6d07,	// (0x00015bff) aid_list_single

0x6d07,	// (0x00015bff) aid_list_single_lg

0x8a5f,	// (0x00017957) aid_list_z_g_a_sm

0x8a67,	// (0x0001795f) aid_list_z_g_d

0x8a6f,	// (0x00017967) aid_txt_z_prm

0x8a7d,	// (0x00017975) aid_txt_z_prm_cp01

0x8a8b,	// (0x00017983) aid_txt_z_sec

0x8a99,	// (0x00017991) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a99,	// (0x00017991) main_cntbar_detail_cont_pane_g1

0x8aad,	// (0x000179a5) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8aad,	// (0x000179a5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001ed77) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001ed77) main_cntbar_detail_cont_pane_g

0xed1c,	// (0x0001dc14) main_cntbar_detail_cont_pane_t1

0xed2a,	// (0x0001dc22) main_cntbar_detail_cont_pane_t2

0xed38,	// (0x0001dc30) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001ed7c) main_cntbar_detail_cont_pane_t

0x8abd,	// (0x000179b5) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8abd,	// (0x000179b5) cell_cntbar_detail_list_shct_pane

0xed46,	// (0x0001dc3e) cntbar_detail_list_shct_pane_g1

0xed4f,	// (0x0001dc47) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001ed83) cntbar_detail_list_shct_pane_g

0x8ad1,	// (0x000179c9) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ad1,	// (0x000179c9) cntbar_detail_list_event_pane_g1

0x8add,	// (0x000179d5) cntbar_detail_list_event_pane_g2_ParamLimits

0x8add,	// (0x000179d5) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001ed88) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001ed88) cntbar_detail_list_event_pane_g

0x8b49,	// (0x00017a41) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b49,	// (0x00017a41) cntbar_detail_list_event_pane_t1

0x8b5e,	// (0x00017a56) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b5e,	// (0x00017a56) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001ed95) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001ed95) cntbar_detail_list_event_pane_t

0xc39c,	// (0x0001b294) cell_cntbar_detail_list_shct_pane_g1

0xa966,	// (0x0001985e) navi_pane_mv_g3

0x9509,	// (0x00018401) main_cntbar_detail_pane_ParamLimits

0x9499,	// (0x00018391) main_notif_wgt_pane

0xcccb,	// (0x0001bbc3) aid_tch_main_mp4_pane_g4

0xcecd,	// (0x0001bdc5) popup_slider_window_cp02

0xea42,	// (0x0001d93a) list_recal_day_event_pane

0x89bd,	// (0x000178b5) cntbar_detail_btn_pane_ParamLimits

0x89bd,	// (0x000178b5) cntbar_detail_btn_pane

0x89d6,	// (0x000178ce) cntbar_detail_btn_pane_cp01_ParamLimits

0x89d6,	// (0x000178ce) cntbar_detail_btn_pane_cp01

0x89ff,	// (0x000178f7) cntbar_detail_list_shct_pane_ParamLimits

0x8a0f,	// (0x00017907) cntbar_detail_pane_g1_ParamLimits

0x8a0f,	// (0x00017907) cntbar_detail_pane_g1

0x8a1f,	// (0x00017917) cntbar_detail_pane_t1_ParamLimits

0x8a1f,	// (0x00017917) cntbar_detail_pane_t1

0x8ae9,	// (0x000179e1) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ae9,	// (0x000179e1) cntbar_detail_list_event_pane_g3

0x8b01,	// (0x000179f9) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b01,	// (0x000179f9) cntbar_detail_list_event_pane_g4

0x8b19,	// (0x00017a11) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b19,	// (0x00017a11) cntbar_detail_list_event_pane_g5

0x8b31,	// (0x00017a29) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b31,	// (0x00017a29) cntbar_detail_list_event_pane_g6

0x8b73,	// (0x00017a6b) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b73,	// (0x00017a6b) cntbar_detail_list_event_pane_t3

0x8b85,	// (0x00017a7d) popup_notif_wgt_window_ParamLimits

0x8b85,	// (0x00017a7d) popup_notif_wgt_window

0x8b9e,	// (0x00017a96) popup_submenu_window_cp01_ParamLimits

0x8b9e,	// (0x00017a96) popup_submenu_window_cp01

0x9e9d,	// (0x00018d95) bg_popup_window_pane_cp10

0xed58,	// (0x0001dc50) listscroll_notif_wgt_pane

0xed6a,	// (0x0001dc62) list_notif_wgt_window

0xed73,	// (0x0001dc6b) scroll_pane_cp033

0x8bb4,	// (0x00017aac) list_notif_wgt_row_pane_ParamLimits

0x8bb4,	// (0x00017aac) list_notif_wgt_row_pane

0xed7c,	// (0x0001dc74) aid_size_list_notif_wgt_del

0xed89,	// (0x0001dc81) list_notif_wgt_row_pane_g1

0xed95,	// (0x0001dc8d) list_notif_wgt_row_pane_g2

0xeda9,	// (0x0001dca1) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001ed9c) list_notif_wgt_row_pane_g

0xedb6,	// (0x0001dcae) list_notif_wgt_row_pane_t1

0xedcc,	// (0x0001dcc4) list_notif_wgt_row_pane_t2

0xedde,	// (0x0001dcd6) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001eda3) list_notif_wgt_row_pane_t

0xd4da,	// (0x0001c3d2) list_recal_day_event_pane_g1

0xedf0,	// (0x0001dce8) list_recal_day_event_pane_t1

0x9499,	// (0x00018391) bg_button_pane_cp045

0x8bc4,	// (0x00017abc) cntbar_detail_btn_pane_t1

0xbe81,	// (0x0001ad79) main_callh_pane_ParamLimits

0xbe81,	// (0x0001ad79) main_callh_pane

0x9499,	// (0x00018391) main_coverflow0_pane

0x9499,	// (0x00018391) main_wgtman_pane

0x79f5,	// (0x000168ed) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79f5,	// (0x000168ed) main_fs_bigclock_unlock_btn_pane

0x8420,	// (0x00017318) bg_button_pane_cp16

0x8430,	// (0x00017328) cell_tport_appsw_pane_g3

0x8bd2,	// (0x00017aca) cf0_flow_pane_ParamLimits

0x8bd2,	// (0x00017aca) cf0_flow_pane

0xedff,	// (0x0001dcf7) listscroll_cf0_pane

0xee0a,	// (0x0001dd02) main_cf0_pane_g1

0x8be7,	// (0x00017adf) main_cf0_pane_t1_ParamLimits

0x8be7,	// (0x00017adf) main_cf0_pane_t1

0x8bfe,	// (0x00017af6) main_cf0_pane_t2_ParamLimits

0x8bfe,	// (0x00017af6) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001edaf) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001edaf) main_cf0_pane_t

0xee1c,	// (0x0001dd14) scroll_pane_cp11

0x8c15,	// (0x00017b0d) cf0_flow_pane_g1

0x8c1d,	// (0x00017b15) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001edb4) cf0_flow_pane_g

0x8c25,	// (0x00017b1d) cf0_flow_pane_t1

0x9499,	// (0x00018391) main_call6_pane

0x9499,	// (0x00018391) main_calllock_pane

0x8c33,	// (0x00017b2b) call6_btn_grp_pane_ParamLimits

0x8c33,	// (0x00017b2b) call6_btn_grp_pane

0x8c4d,	// (0x00017b45) call6_pane_g1_ParamLimits

0x8c4d,	// (0x00017b45) call6_pane_g1

0x8c62,	// (0x00017b5a) popup_call6_1st_window_ParamLimits

0x8c62,	// (0x00017b5a) popup_call6_1st_window

0x8c73,	// (0x00017b6b) popup_call6_2nd_window_ParamLimits

0x8c73,	// (0x00017b6b) popup_call6_2nd_window

0x8c84,	// (0x00017b7c) cell_call6_btn_pane_ParamLimits

0x8c84,	// (0x00017b7c) cell_call6_btn_pane

0x9e9d,	// (0x00018d95) bg_popup_call2_in_pane_cp03

0xee27,	// (0x0001dd1f) popup_call6_1st_window_g1

0xee2f,	// (0x0001dd27) popup_call6_1st_window_g2

0xee37,	// (0x0001dd2f) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001edb9) popup_call6_1st_window_g

0xee3f,	// (0x0001dd37) popup_call6_1st_window_t1

0xee4e,	// (0x0001dd46) popup_call6_1st_window_t2

0xee5e,	// (0x0001dd56) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001edc0) popup_call6_1st_window_t

0x9e9d,	// (0x00018d95) bg_popup_call2_in_pane_cp04

0xee27,	// (0x0001dd1f) popup_call6_2nd_window_g1

0xee2f,	// (0x0001dd27) popup_call6_2nd_window_g2

0xee37,	// (0x0001dd2f) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001edb9) popup_call6_2nd_window_g

0xee3f,	// (0x0001dd37) popup_call6_2nd_window_t1

0x9499,	// (0x00018391) bg_button_pane_cp15

0xee6e,	// (0x0001dd66) cell_call6_btn_pane_g1

0xee77,	// (0x0001dd6f) cell_call6_btn_pane_t1

0x8c98,	// (0x00017b90) listscroll_wgtman_pane_ParamLimits

0x8c98,	// (0x00017b90) listscroll_wgtman_pane

0x8cb9,	// (0x00017bb1) wgtman_btn_pane_ParamLimits

0x8cb9,	// (0x00017bb1) wgtman_btn_pane

0xa76d,	// (0x00019665) aid_scroll_copy1

0xee86,	// (0x0001dd7e) list_wgtman_pane

0x8cfc,	// (0x00017bf4) wgtman_btn_pane_g1_ParamLimits

0x8cfc,	// (0x00017bf4) wgtman_btn_pane_g1

0x8d28,	// (0x00017c20) wgtman_btn_pane_t1_ParamLimits

0x8d28,	// (0x00017c20) wgtman_btn_pane_t1

0xee90,	// (0x0001dd88) wgtman_btn_pane_t2_ParamLimits

0xee90,	// (0x0001dd88) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001edc7) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001edc7) wgtman_btn_pane_t

0x8d65,	// (0x00017c5d) listrow_wgtman_pane_ParamLimits

0x8d65,	// (0x00017c5d) listrow_wgtman_pane

0x8d77,	// (0x00017c6f) listrow_wgtman_pane_g1

0x8d84,	// (0x00017c7c) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001edcc) listrow_wgtman_pane_g

0x8da2,	// (0x00017c9a) listrow_wgtman_pane_t1

0x8dba,	// (0x00017cb2) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001edd1) listrow_wgtman_pane_t

0x8de0,	// (0x00017cd8) wait_bar_pane_cp09

0xeea7,	// (0x0001dd9f) main_calllock_btn_pane

0xeeb1,	// (0x0001dda9) main_calllock_pane_g1

0x9499,	// (0x00018391) bg_button_pane_cp17

0xeebd,	// (0x0001ddb5) main_calllock_btn_pane_g1

0xeec6,	// (0x0001ddbe) main_calllock_btn_pane_t1

0x9499,	// (0x00018391) main_dialer3_pane

0x9499,	// (0x00018391) main_fmrd2_pane

0xc39c,	// (0x0001b294) main_fs_bigclock_unlock_btn_pane_g1

0xeedd,	// (0x0001ddd5) main_fs_bigclock_unlock_btn_pane_t1

0x8df2,	// (0x00017cea) area_fmrd2_info_pane_ParamLimits

0x8df2,	// (0x00017cea) area_fmrd2_info_pane

0x8e03,	// (0x00017cfb) area_fmrd2_visual_pane_ParamLimits

0x8e03,	// (0x00017cfb) area_fmrd2_visual_pane

0x8e11,	// (0x00017d09) fmrd2_indi_pane_ParamLimits

0x8e11,	// (0x00017d09) fmrd2_indi_pane

0x8e1e,	// (0x00017d16) area_fmrd2_visual_pane_g1

0x8e26,	// (0x00017d1e) area_fmrd2_visual_pane_t1

0x8e36,	// (0x00017d2e) area_fmrd2_visual_pane_t2

0x8e46,	// (0x00017d3e) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001eddb) area_fmrd2_visual_pane_t

0x8e56,	// (0x00017d4e) area_fmrd2_info_pane_g1

0x8e5e,	// (0x00017d56) area_fmrd2_info_pane_t1

0x8e6e,	// (0x00017d66) area_fmrd2_info_pane_t2

0x8e7e,	// (0x00017d76) area_fmrd2_info_pane_t3

0x8e8e,	// (0x00017d86) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001ede2) area_fmrd2_info_pane_t

0x8e9c,	// (0x00017d94) fmrd2_indi_pane_t1

0x8eac,	// (0x00017da4) fmrd2_indi_pane_t2

0x8ebc,	// (0x00017db4) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001edeb) fmrd2_indi_pane_t

0xe161,	// (0x0001d059) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe161,	// (0x0001d059) list_single_fs_bigclock_indicator_pane_g5

0xe211,	// (0x0001d109) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe211,	// (0x0001d109) list_single_fs_bigclock_indicator_pane_t5

0x85a8,	// (0x000174a0) aid_cell_bcale_month_pane_ParamLimits

0x85a8,	// (0x000174a0) aid_cell_bcale_month_pane

0x85c6,	// (0x000174be) bcale_month_pane_ParamLimits

0x85c6,	// (0x000174be) bcale_month_pane

0x85ea,	// (0x000174e2) bcale_preview_pane_ParamLimits

0x85ea,	// (0x000174e2) bcale_preview_pane

0xec82,	// (0x0001db7a) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca1,	// (0x0001db99) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca1,	// (0x0001db99) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001ed6d) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001ed6d) list_single_fs_bigclock_pane_t

0xeed5,	// (0x0001ddcd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001edd6) main_fs_bigclock_unlock_btn_pane_g

0x8ecc,	// (0x00017dc4) aid_dia3_key_size_ParamLimits

0x8ecc,	// (0x00017dc4) aid_dia3_key_size

0x8edb,	// (0x00017dd3) aid_dia3_listrow_size_ParamLimits

0x8edb,	// (0x00017dd3) aid_dia3_listrow_size

0x8ef0,	// (0x00017de8) dia3_keypad_fun_pane_ParamLimits

0x8ef0,	// (0x00017de8) dia3_keypad_fun_pane

0x8f0c,	// (0x00017e04) dia3_keypad_num_pane_ParamLimits

0x8f0c,	// (0x00017e04) dia3_keypad_num_pane

0x8f27,	// (0x00017e1f) dia3_listscroll_pane_ParamLimits

0x8f27,	// (0x00017e1f) dia3_listscroll_pane

0x8f3a,	// (0x00017e32) dia3_numentry_pane_ParamLimits

0x8f3a,	// (0x00017e32) dia3_numentry_pane

0xeeeb,	// (0x0001dde3) dia3_list_pane

0xeef6,	// (0x0001ddee) scroll_pane_cp12

0x9499,	// (0x00018391) bg_dia3_numentry_pane

0x8f4e,	// (0x00017e46) dia3_numentry_pane_t1

0x8f5d,	// (0x00017e55) cell_dia3_key_num_pane

0x8f65,	// (0x00017e5d) cell_dia3_key0_fun_pane_ParamLimits

0x8f65,	// (0x00017e5d) cell_dia3_key0_fun_pane

0x8f79,	// (0x00017e71) cell_dia3_key1_fun_pane_ParamLimits

0x8f79,	// (0x00017e71) cell_dia3_key1_fun_pane

0x8f91,	// (0x00017e89) dia3_listrow_pane

0xde70,	// (0x0001cd68) bg_dia3_numentry_pane_g1

0x9499,	// (0x00018391) bg_button_pane_cp21

0xef01,	// (0x0001ddf9) cell_dia3_key_num_pane_t1

0xef0f,	// (0x0001de07) cell_dia3_key_num_pane_t2

0xef1e,	// (0x0001de16) cell_dia3_key_num_pane_t3

0xef2d,	// (0x0001de25) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001edf2) cell_dia3_key_num_pane_t

0x9499,	// (0x00018391) bg_button_pane_cp19

0x8fa3,	// (0x00017e9b) cell_dia3_key0_fun_pane_g1

0x9499,	// (0x00018391) bg_button_pane_cp20

0x8fab,	// (0x00017ea3) cell_dia3_key1_fun_pane_g1

0x8fb3,	// (0x00017eab) area_left_week_number_pane

0x8fbf,	// (0x00017eb7) area_top_day_name_pane

0x8fd2,	// (0x00017eca) frame_month_view_pane

0xef3c,	// (0x0001de34) grid_month_view_pane

0x8fe5,	// (0x00017edd) cell_top_day_name_pane_ParamLimits

0x8fe5,	// (0x00017edd) cell_top_day_name_pane

0x9012,	// (0x00017f0a) cell_area_left_week_number_pane_ParamLimits

0x9012,	// (0x00017f0a) cell_area_left_week_number_pane

0x9026,	// (0x00017f1e) cell_month_view_pane_ParamLimits

0x9026,	// (0x00017f1e) cell_month_view_pane

0xef4a,	// (0x0001de42) frm_month_g1

0x9053,	// (0x00017f4b) frm_month_g2

0x9066,	// (0x00017f5e) frm_month_g3

0x9079,	// (0x00017f71) frm_month_g4

0x908c,	// (0x00017f84) frm_month_g5

0x909f,	// (0x00017f97) frm_month_g6

0x90b2,	// (0x00017faa) frm_month_g7

0xef57,	// (0x0001de4f) frm_month_g8

0x90c5,	// (0x00017fbd) frm_month_g9

0x90d5,	// (0x00017fcd) frm_month_g10

0x90e5,	// (0x00017fdd) frm_month_g11

0x90f5,	// (0x00017fed) frm_month_g12

0x9107,	// (0x00017fff) frm_month_g13

0x9119,	// (0x00018011) frm_month_g14

0x912d,	// (0x00018025) frm_month_g15

0x9141,	// (0x00018039) frm_month_g16

0x000f,

0xff03,	// (0x0001edfb) frm_month_g

0xef64,	// (0x0001de5c) cell_top_day_name_pane_t1

0x9155,	// (0x0001804d) cell_area_left_week_number_pane_g1

0x9161,	// (0x00018059) cell_area_left_week_number_pane_t1

0xc608,	// (0x0001b500) cell_month_view_pane_g1

0x9174,	// (0x0001806c) cell_month_view_pane_t1

0x9499,	// (0x00018391) main_fps_pane

0xe3ef,	// (0x0001d2e7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3ef,	// (0x0001d2e7) cmail_ddmenu_btn02_pane_cp1

0xe40b,	// (0x0001d303) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe40b,	// (0x0001d303) cmail_ddmenu_btn02_pane_cp2

0x88aa,	// (0x000177a2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88aa,	// (0x000177a2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001ed20) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001ed20) cmail_ddmenu_btn02_pane_g

0x88c8,	// (0x000177c0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88c8,	// (0x000177c0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001ed25) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001ed25) cmail_ddmenu_btn02_pane_t

0x9187,	// (0x0001807f) fps_text_pane_ParamLimits

0x9187,	// (0x0001807f) fps_text_pane

0x919e,	// (0x00018096) main_fps_pane_g1_ParamLimits

0x919e,	// (0x00018096) main_fps_pane_g1

0x91b8,	// (0x000180b0) wait_bar_pane_cp010_ParamLimits

0x91b8,	// (0x000180b0) wait_bar_pane_cp010

0x91c9,	// (0x000180c1) fps_text_pane_t1_ParamLimits

0x91c9,	// (0x000180c1) fps_text_pane_t1

0xea65,	// (0x0001d95d) cam4_image_uncrop_pane_g1

0xea6e,	// (0x0001d966) cam4_image_uncrop_pane_g2

0x5a67,	// (0x0001495f) cam4_image_uncrop_pane_g3

0x5a70,	// (0x00014968) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001e7e6) cam4_image_uncrop_pane_g

0x8f91,	// (0x00017e89) dia3_listrow_pane_ParamLimits

0x9499,	// (0x00018391) main_phob2_pane

0x83f1,	// (0x000172e9) cell_tport_appsw_pane_cp02_ParamLimits

0x83f1,	// (0x000172e9) cell_tport_appsw_pane_cp02

0x8405,	// (0x000172fd) cell_tport_appsw_pane_cp03_ParamLimits

0x8405,	// (0x000172fd) cell_tport_appsw_pane_cp03

0x9499,	// (0x00018391) phob2_contact_card_pane

0x9499,	// (0x00018391) phob2_listscroll_pane

0xef77,	// (0x0001de6f) phob2_list_pane

0xef7f,	// (0x0001de77) scroll_pane_cp034

0x91e1,	// (0x000180d9) phob2_cc_data_pane_ParamLimits

0x91e1,	// (0x000180d9) phob2_cc_data_pane

0x9200,	// (0x000180f8) phob2_cc_listscroll_pane_ParamLimits

0x9200,	// (0x000180f8) phob2_cc_listscroll_pane

0x921e,	// (0x00018116) list_double_large_graphic_phob2_pane_ParamLimits

0x921e,	// (0x00018116) list_double_large_graphic_phob2_pane

0x9230,	// (0x00018128) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9230,	// (0x00018128) list_double_large_graphic_phob2_pane_g1

0xef87,	// (0x0001de7f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef87,	// (0x0001de7f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001ee1c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001ee1c) list_double_large_graphic_phob2_pane_g

0x9246,	// (0x0001813e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9246,	// (0x0001813e) list_double_large_graphic_phob2_pane_t1

0x925b,	// (0x00018153) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x925b,	// (0x00018153) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001ee21) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001ee21) list_double_large_graphic_phob2_pane_t

0x9499,	// (0x00018391) list_highlight_pane_cp024

0x926d,	// (0x00018165) phob2_cc_button_pane

0x9275,	// (0x0001816d) phob2_cc_data_pane_g1_ParamLimits

0x9275,	// (0x0001816d) phob2_cc_data_pane_g1

0x928a,	// (0x00018182) phob2_cc_data_pane_g2_ParamLimits

0x928a,	// (0x00018182) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001ee26) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001ee26) phob2_cc_data_pane_g

0x929a,	// (0x00018192) phob2_cc_data_pane_t1_ParamLimits

0x929a,	// (0x00018192) phob2_cc_data_pane_t1

0x92b2,	// (0x000181aa) phob2_cc_data_pane_t2_ParamLimits

0x92b2,	// (0x000181aa) phob2_cc_data_pane_t2

0x92ca,	// (0x000181c2) phob2_cc_data_pane_t3_ParamLimits

0x92ca,	// (0x000181c2) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001ee2b) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001ee2b) phob2_cc_data_pane_t

0xef93,	// (0x0001de8b) phob2_cc_list_pane_ParamLimits

0xef93,	// (0x0001de8b) phob2_cc_list_pane

0xd583,	// (0x0001c47b) scroll_pane_cp035_ParamLimits

0xd583,	// (0x0001c47b) scroll_pane_cp035

0x9509,	// (0x00018401) bg_button_pane_cp033

0xef9f,	// (0x0001de97) phob2_cc_button_pane_g1

0xefab,	// (0x0001dea3) phob2_cc_button_pane_t1

0xefc0,	// (0x0001deb8) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001ee32) phob2_cc_button_pane_t

0x92e2,	// (0x000181da) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92e2,	// (0x000181da) list_double_large_graphic_phob2_cc_pane

0x92f4,	// (0x000181ec) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92f4,	// (0x000181ec) list_double_large_graphic_phob2_cc_pane_g1

0x9300,	// (0x000181f8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9300,	// (0x000181f8) list_double_large_graphic_phob2_cc_pane_g2

0x930c,	// (0x00018204) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x930c,	// (0x00018204) list_double_large_graphic_phob2_cc_pane_g3

0x9318,	// (0x00018210) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9318,	// (0x00018210) list_double_large_graphic_phob2_cc_pane_g4

0x9324,	// (0x0001821c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9324,	// (0x0001821c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001ee37) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001ee37) list_double_large_graphic_phob2_cc_pane_g

0x9330,	// (0x00018228) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9330,	// (0x00018228) list_double_large_graphic_phob2_cc_pane_t1

0x9359,	// (0x00018251) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9359,	// (0x00018251) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001ee42) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001ee42) list_double_large_graphic_phob2_cc_pane_t

0xefd2,	// (0x0001deca) list_highlight_pane_cp025_ParamLimits

0xefd2,	// (0x0001deca) list_highlight_pane_cp025

0x9509,	// (0x00018401) bg_button_pane_cp033_ParamLimits

0xef9f,	// (0x0001de97) phob2_cc_button_pane_g1_ParamLimits

0xefab,	// (0x0001dea3) phob2_cc_button_pane_t1_ParamLimits

0xefc0,	// (0x0001deb8) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001ee32) phob2_cc_button_pane_t_ParamLimits

0x03ed,	// (0x0000f2e5) popup_wgtman_window

0xd321,	// (0x0001c219) scroll_pane_cp038

0x8cde,	// (0x00017bd6) wgtman_btn_pane_cp_01_ParamLimits

0x8cde,	// (0x00017bd6) wgtman_btn_pane_cp_01

0xefe0,	// (0x0001ded8) wgtman_content_pane

0xefe9,	// (0x0001dee1) wgtman_heading_pane

0x9499,	// (0x00018391) bg_heading_pane_cp02

0xeff2,	// (0x0001deea) wgtman_heading_pane_g1

0xeffa,	// (0x0001def2) wgtman_heading_pane_t1

0xf008,	// (0x0001df00) scroll_pane_cp036

0xf010,	// (0x0001df08) wgtman_list_pane

0xf018,	// (0x0001df10) wgtman_list_pane_t1_ParamLimits

0xf018,	// (0x0001df10) wgtman_list_pane_t1

0xd06e,	// (0x0001bf66) cam4_grid_pane

0x6800,	// (0x000156f8) bg_button_pane_cp015_ParamLimits

0x6812,	// (0x0001570a) bg_button_pane_cp016_ParamLimits

0x6825,	// (0x0001571d) bg_button_pane_cp017_ParamLimits

0x687d,	// (0x00015775) popup_vitu2_query_window_g3_ParamLimits

0x687d,	// (0x00015775) popup_vitu2_query_window_g3

0x693a,	// (0x00015832) popup_vitu2_query_window_t6_ParamLimits

0x693a,	// (0x00015832) popup_vitu2_query_window_t6

0x6965,	// (0x0001585d) popup_vitu2_query_window_t7_ParamLimits

0x6965,	// (0x0001585d) popup_vitu2_query_window_t7

0xea65,	// (0x0001d95d) cam4_grid_pane_g1

0xea6e,	// (0x0001d966) cam4_grid_pane_g2

0xf032,	// (0x0001df2a) cam4_grid_pane_g3

0xf03b,	// (0x0001df33) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001ee47) cam4_grid_pane_g

0x140c,	// (0x00010304) aid_placing_vt_slider_lsc_ParamLimits

0x1717,	// (0x0001060f) vidtel_button_pane_ParamLimits

0x1717,	// (0x0001060f) vidtel_button_pane

0xf046,	// (0x0001df3e) bg_button_pane_cp034

0x9382,	// (0x0001827a) vidtel_button_pane_g1

0xf050,	// (0x0001df48) vidtel_button_pane_t1

0xd48e,	// (0x0001c386) aid_size_vtel_slider_touch

0xd583,	// (0x0001c47b) scroll_pane_cp039

0xdeae,	// (0x0001cda6) ncim_query_button_pane_cp01_ParamLimits

0xdecd,	// (0x0001cdc5) ncimui_query_pane_g1_ParamLimits

0x9509,	// (0x00018401) input_focus_pane_cp012_ParamLimits

0xdef2,	// (0x0001cdea) ncim_query_entry_pane_t1_ParamLimits

0xd583,	// (0x0001c47b) scroll_pane_cp039_ParamLimits

0xa851,	// (0x00019749) navi_pane_bcale_mc_g1

0xa859,	// (0x00019751) navi_pane_bcale_mc_t1

0xe454,	// (0x0001d34c) main_sp_fs_email_pane_g1

0xe460,	// (0x0001d358) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001ebdd) main_sp_fs_email_pane_g

0xe8d3,	// (0x0001d7cb) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8d3,	// (0x0001d7cb) list_single_cale_mrui_row_pane_g3

0x88f0,	// (0x000177e8) list_single_recal_day_pane_g5_event_pane

0xeacd,	// (0x0001d9c5) list_single_recal_day_pane_g7

0xf05e,	// (0x0001df56) list_recal_day_event_pane_cp01

0xf067,	// (0x0001df5f) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0001df67) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0001df6f) list_recal_vselct_pane_cp01

0xd4da,	// (0x0001c3d2) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0001df79) list_recal_day_event_pane_cp01_t1

0xead5,	// (0x0001d9cd) list_single_recal_day_pane_t1_ParamLimits

0xeae7,	// (0x0001d9df) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001ed35) list_single_recal_day_pane_t_ParamLimits

0x9b85,	// (0x00018a7d) bg_notes_pane_ParamLimits

0x9c30,	// (0x00018b28) list_notes_pane_ParamLimits

0x0736,	// (0x0000f62e) scroll_pane_cp06_ParamLimits

0x9c6c,	// (0x00018b64) main_notes_pane_ParamLimits

0x9499,	// (0x00018391) main_welc_pane

0x938a,	// (0x00018282) main_welc_body_pane_ParamLimits

0x938a,	// (0x00018282) main_welc_body_pane

0x93a8,	// (0x000182a0) main_welc_opti_pane_ParamLimits

0x93a8,	// (0x000182a0) main_welc_opti_pane

0x93ed,	// (0x000182e5) main_welc_pane_t1_ParamLimits

0x93ed,	// (0x000182e5) main_welc_pane_t1

0x940b,	// (0x00018303) main_welc_body_row_pane_ParamLimits

0x940b,	// (0x00018303) main_welc_body_row_pane

0xd29e,	// (0x0001c196) main_welc_opti_row_pane_ParamLimits

0xd29e,	// (0x0001c196) main_welc_opti_row_pane

0xf08f,	// (0x0001df87) main_welc_opti_row_pane_g1

0x941f,	// (0x00018317) main_welc_opti_row_pane_t1

0xf097,	// (0x0001df8f) main_welc_body_row_pane_t1

0xed62,	// (0x0001dc5a) popup_notif_wgt_heading_pane

0xed7c,	// (0x0001dc74) aid_size_list_notif_wgt_del_ParamLimits

0xed89,	// (0x0001dc81) list_notif_wgt_row_pane_g1_ParamLimits

0xed95,	// (0x0001dc8d) list_notif_wgt_row_pane_g2_ParamLimits

0xeda9,	// (0x0001dca1) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001ed9c) list_notif_wgt_row_pane_g_ParamLimits

0xedb6,	// (0x0001dcae) list_notif_wgt_row_pane_t1_ParamLimits

0xedcc,	// (0x0001dcc4) list_notif_wgt_row_pane_t2_ParamLimits

0xedde,	// (0x0001dcd6) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001eda3) list_notif_wgt_row_pane_t_ParamLimits

0x8d77,	// (0x00017c6f) listrow_wgtman_pane_g1_ParamLimits

0x8d84,	// (0x00017c7c) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001edcc) listrow_wgtman_pane_g_ParamLimits

0x8da2,	// (0x00017c9a) listrow_wgtman_pane_t1_ParamLimits

0x8dba,	// (0x00017cb2) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001edd1) listrow_wgtman_pane_t_ParamLimits

0x8de0,	// (0x00017cd8) wait_bar_pane_cp09_ParamLimits

0x9499,	// (0x00018391) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0001df9e) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0001dfa6) popup_notif_wgt_heading_pane_t1

0x9499,	// (0x00018391) main_vids_pane

0x9499,	// (0x00018391) vids_listscroll_pane

0x942e,	// (0x00018326) scroll_pane_cp040

0x9499,	// (0x00018391) vids_list_pane

0x9439,	// (0x00018331) vids_list_double_pane_ParamLimits

0x9439,	// (0x00018331) vids_list_double_pane

0x944a,	// (0x00018342) vids_list_double_pane_g1

0x9453,	// (0x0001834b) vids_list_double_pane_t1

0x9463,	// (0x0001835b) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001ee55) vids_list_double_pane_t

0x9509,	// (0x00018401) main_ncimui_pane_ParamLimits

0x756c,	// (0x00016464) main_ncimui_pane_g1_ParamLimits

0x7578,	// (0x00016470) main_ncimui_pane_g2_ParamLimits

0x7578,	// (0x00016470) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001eae2) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001eae2) main_ncimui_pane_g

0x93c3,	// (0x000182bb) main_welc_pane_g1_ParamLimits

0x93c3,	// (0x000182bb) main_welc_pane_g1

0x93d8,	// (0x000182d0) main_welc_pane_g2_ParamLimits

0x93d8,	// (0x000182d0) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001ee50) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001ee50) main_welc_pane_g

0x9b85,	// (0x00018a7d) listscroll_mce_pane_ParamLimits

0xa9a6,	// (0x0001989e) wait_bar_pane_cp10

0xbe75,	// (0x0001ad6d) main_cale_day_pane_ParamLimits

0xbe75,	// (0x0001ad6d) main_cale_week_pane_ParamLimits

0x9b85,	// (0x00018a7d) main_messa_pane_ParamLimits

0x4da3,	// (0x00013c9b) main_clock2_btn_pane_ParamLimits

0x4da3,	// (0x00013c9b) main_clock2_btn_pane

0xc7bc,	// (0x0001b6b4) main_clock2_btn_pane_cp01_ParamLimits

0xc7bc,	// (0x0001b6b4) main_clock2_btn_pane_cp01

0xe85f,	// (0x0001d757) list_cale_mrui_pane_ParamLimits

0xee14,	// (0x0001dd0c) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001edaa) main_cf0_pane_g

0x8fb3,	// (0x00017eab) area_left_week_number_pane_ParamLimits

0x8fbf,	// (0x00017eb7) area_top_day_name_pane_ParamLimits

0x8fd2,	// (0x00017eca) frame_month_view_pane_ParamLimits

0xef3c,	// (0x0001de34) grid_month_view_pane_ParamLimits

0xef4a,	// (0x0001de42) frm_month_g1_ParamLimits

0x9053,	// (0x00017f4b) frm_month_g2_ParamLimits

0x9066,	// (0x00017f5e) frm_month_g3_ParamLimits

0x9079,	// (0x00017f71) frm_month_g4_ParamLimits

0x908c,	// (0x00017f84) frm_month_g5_ParamLimits

0x909f,	// (0x00017f97) frm_month_g6_ParamLimits

0x90b2,	// (0x00017faa) frm_month_g7_ParamLimits

0xef57,	// (0x0001de4f) frm_month_g8_ParamLimits

0x90c5,	// (0x00017fbd) frm_month_g9_ParamLimits

0x90d5,	// (0x00017fcd) frm_month_g10_ParamLimits

0x90e5,	// (0x00017fdd) frm_month_g11_ParamLimits

0x90f5,	// (0x00017fed) frm_month_g12_ParamLimits

0x9107,	// (0x00017fff) frm_month_g13_ParamLimits

0x9119,	// (0x00018011) frm_month_g14_ParamLimits

0x912d,	// (0x00018025) frm_month_g15_ParamLimits

0x9141,	// (0x00018039) frm_month_g16_ParamLimits

0xff03,	// (0x0001edfb) frm_month_g_ParamLimits

0xef64,	// (0x0001de5c) cell_top_day_name_pane_t1_ParamLimits

0x9155,	// (0x0001804d) cell_area_left_week_number_pane_g1_ParamLimits

0x9161,	// (0x00018059) cell_area_left_week_number_pane_t1_ParamLimits

0xc608,	// (0x0001b500) cell_month_view_pane_g1_ParamLimits

0x9174,	// (0x0001806c) cell_month_view_pane_t1_ParamLimits

0x9b7d,	// (0x00018a75) main_clock2_btn_pane_g1

0xf0bc,	// (0x0001dfb4) main_clock2_btn_pane_t1

0x9509,	// (0x00018401) listscroll_cmail_pane_ParamLimits

0xe454,	// (0x0001d34c) main_sp_fs_email_pane_g1_ParamLimits

0xe460,	// (0x0001d358) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001ebdd) main_sp_fs_email_pane_g_ParamLimits

0xea23,	// (0x0001d91b) list_recal_day_pane_ParamLimits

0xea34,	// (0x0001d92c) mian_recal_day_pane_t1

0x8073,	// (0x00016f6b) list_single_dyc_row_text_pane_t4_ParamLimits

0x8073,	// (0x00016f6b) list_single_dyc_row_text_pane_t4

0x80bc,	// (0x00016fb4) list_single_dyc_row_text_pane_t5_ParamLimits

0x80bc,	// (0x00016fb4) list_single_dyc_row_text_pane_t5

0xe502,	// (0x0001d3fa) list_single_dyc_row_text_pane_t6_ParamLimits

0xe502,	// (0x0001d3fa) list_single_dyc_row_text_pane_t6

0x23e3,	// (0x000112db) aid_mgn_list_cale_time_pane

0x9509,	// (0x00018401) main_gallery2_pane_ParamLimits

0xc7d2,	// (0x0001b6ca) main_clock2_pane_cp01_t1

0xc7e2,	// (0x0001b6da) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0001e6bc) main_clock2_pane_cp01_t

0x0af0,	// (0x0000f9e8) cale_week_scroll_pane_g16_ParamLimits

0x0af0,	// (0x0000f9e8) cale_week_scroll_pane_g16

0x9e9d,	// (0x00018d95) vorec_slider_pane
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
