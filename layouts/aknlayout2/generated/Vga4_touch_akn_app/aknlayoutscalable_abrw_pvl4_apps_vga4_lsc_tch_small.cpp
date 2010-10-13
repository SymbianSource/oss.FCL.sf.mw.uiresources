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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00064763 };

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
0x01d1,	// (0x00064934) Screen

0x01dd,	// (0x00064940) application_window

0x0219,	// (0x0006497c) area_bottom_pane_ParamLimits

0x0219,	// (0x0006497c) area_bottom_pane

0x0252,	// (0x000649b5) area_top_pane_ParamLimits

0x0252,	// (0x000649b5) area_top_pane

0xa3f5,	// (0x0006eb58) call_video_uplink_pane_ParamLimits

0xa3f5,	// (0x0006eb58) call_video_uplink_pane

0x02e0,	// (0x00064a43) main_pane_ParamLimits

0x02e0,	// (0x00064a43) main_pane

0xde8b,	// (0x000725ee) context_pane

0x331e,	// (0x00067a81) navi_pane

0x3355,	// (0x00067ab8) popup_cale_events_window_ParamLimits

0x3355,	// (0x00067ab8) popup_cale_events_window

0xde9e,	// (0x00072601) popup_mup_playback_window

0x336d,	// (0x00067ad0) signal_pane

0xc02b,	// (0x0007078e) main_browser_pane

0xc1c9,	// (0x0007092c) main_burst_pane

0x3026,	// (0x00067789) main_calc_pane

0xde7f,	// (0x000725e2) main_cale_day_pane

0x303a,	// (0x0006779d) main_cale_month_pane

0xde7f,	// (0x000725e2) main_cale_week_pane

0xc1c9,	// (0x0007092c) main_call_pane

0xa873,	// (0x0006efd6) main_call_poc_pane

0xc1c9,	// (0x0007092c) main_camera_pane

0xc1c9,	// (0x0007092c) main_chi_dic_pane

0xc98e,	// (0x000710f1) main_clock_pane

0xa873,	// (0x0006efd6) main_fmradio_pane

0xc1c9,	// (0x0007092c) main_graph_messa_pane

0xa873,	// (0x0006efd6) main_help_pane

0xc02b,	// (0x0007078e) main_im_pane

0xaace,	// (0x0006f231) main_image_pane_ParamLimits

0xaace,	// (0x0006f231) main_image_pane

0xa873,	// (0x0006efd6) main_location2_pane

0xc1c9,	// (0x0007092c) main_location_pane

0xaace,	// (0x0006f231) main_messa_pane

0xa873,	// (0x0006efd6) main_mp2_pane

0xc1c9,	// (0x0007092c) main_mp_pane

0xa873,	// (0x0006efd6) main_msg_pane

0xa873,	// (0x0006efd6) main_mup_eq_pane

0xa873,	// (0x0006efd6) main_mup_pane

0xc02b,	// (0x0007078e) main_notes_pane

0xa873,	// (0x0006efd6) main_pec_pane

0xa873,	// (0x0006efd6) main_phob_pane

0xa873,	// (0x0006efd6) main_pinb_pane

0xa873,	// (0x0006efd6) main_postcard_pane

0xa873,	// (0x0006efd6) main_qdial_pane

0xc1c9,	// (0x0007092c) main_skin_pane

0xa873,	// (0x0006efd6) main_smil2_pane

0xc1c9,	// (0x0007092c) main_smil_pane

0xc1c9,	// (0x0007092c) main_video_pane

0xc1c9,	// (0x0007092c) main_video_tele_pane

0xaace,	// (0x0006f231) main_viewer_pane_ParamLimits

0xaace,	// (0x0006f231) main_viewer_pane

0xc1c9,	// (0x0007092c) main_vorec_pane

0x308c,	// (0x000677ef) popup_blid_sat_info_window_ParamLimits

0x308c,	// (0x000677ef) popup_blid_sat_info_window

0x30f0,	// (0x00067853) popup_dyc_status_message_window_ParamLimits

0x30f0,	// (0x00067853) popup_dyc_status_message_window

0x310a,	// (0x0006786d) popup_grid_large_graphic_window_ParamLimits

0x310a,	// (0x0006786d) popup_grid_large_graphic_window

0x31cc,	// (0x0006792f) popup_loc_request_window_ParamLimits

0x31cc,	// (0x0006792f) popup_loc_request_window

0x32f2,	// (0x00067a55) popup_wml_address_window_ParamLimits

0x32f2,	// (0x00067a55) popup_wml_address_window

0x2e64,	// (0x000675c7) call_muted_g1

0x2b3d,	// (0x000672a0) popup_call_audio_conf_window_ParamLimits

0x2b3d,	// (0x000672a0) popup_call_audio_conf_window

0x2e74,	// (0x000675d7) popup_call_audio_first_window_ParamLimits

0x2e74,	// (0x000675d7) popup_call_audio_first_window

0x2eea,	// (0x0006764d) popup_call_audio_in_window_ParamLimits

0x2eea,	// (0x0006764d) popup_call_audio_in_window

0x2f26,	// (0x00067689) popup_call_audio_out_window_ParamLimits

0x2f26,	// (0x00067689) popup_call_audio_out_window

0x2f60,	// (0x000676c3) popup_call_audio_second_window_ParamLimits

0x2f60,	// (0x000676c3) popup_call_audio_second_window

0x2fb6,	// (0x00067719) popup_call_audio_wait_window_ParamLimits

0x2fb6,	// (0x00067719) popup_call_audio_wait_window

0x2feb,	// (0x0006774e) popup_number_entry_window_ParamLimits

0x2feb,	// (0x0006774e) popup_number_entry_window

0xa42b,	// (0x0006eb8e) bg_popup_call_pane_cp05_ParamLimits

0xa42b,	// (0x0006eb8e) bg_popup_call_pane_cp05

0xa44b,	// (0x0006ebae) popup_number_entry_window_t1

0xa45e,	// (0x0006ebc1) popup_number_entry_window_t2

0xa470,	// (0x0006ebd3) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x000737a3) popup_number_entry_window_t

0xa4b7,	// (0x0006ec1a) text_title_cp2

0xa4ca,	// (0x0006ec2d) bg_popup_call_pane_cp_ParamLimits

0xa4ca,	// (0x0006ec2d) bg_popup_call_pane_cp

0xa4d8,	// (0x0006ec3b) call_thumbnail_pane

0xa4e0,	// (0x0006ec43) popup_call_audio_in_window_g1_ParamLimits

0xa4e0,	// (0x0006ec43) popup_call_audio_in_window_g1

0xa4ec,	// (0x0006ec4f) popup_call_audio_in_window_g2_ParamLimits

0xa4ec,	// (0x0006ec4f) popup_call_audio_in_window_g2

0xa4f8,	// (0x0006ec5b) popup_call_audio_in_window_g3_ParamLimits

0xa4f8,	// (0x0006ec5b) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x000737ac) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x000737ac) popup_call_audio_in_window_g

0xa504,	// (0x0006ec67) popup_call_audio_in_window_t1_ParamLimits

0xa504,	// (0x0006ec67) popup_call_audio_in_window_t1

0xa520,	// (0x0006ec83) popup_call_audio_in_window_t2_ParamLimits

0xa520,	// (0x0006ec83) popup_call_audio_in_window_t2

0xa53c,	// (0x0006ec9f) popup_call_audio_in_window_t3_ParamLimits

0xa53c,	// (0x0006ec9f) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x000737b3) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x000737b3) popup_call_audio_in_window_t

0xa4ca,	// (0x0006ec2d) bg_popup_call_pane_cp01_ParamLimits

0xa4ca,	// (0x0006ec2d) bg_popup_call_pane_cp01

0xa4d8,	// (0x0006ec3b) call_thumbnail_pane_cp02

0xa54f,	// (0x0006ecb2) call_type_pane_cp022

0xa557,	// (0x0006ecba) popup_call_audio_out_window_g1_ParamLimits

0xa557,	// (0x0006ecba) popup_call_audio_out_window_g1

0xa569,	// (0x0006eccc) popup_call_audio_out_window_g2_ParamLimits

0xa569,	// (0x0006eccc) popup_call_audio_out_window_g2

0xa575,	// (0x0006ecd8) popup_call_audio_out_window_g3_ParamLimits

0xa575,	// (0x0006ecd8) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x000737ba) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x000737ba) popup_call_audio_out_window_g

0xa587,	// (0x0006ecea) popup_call_audio_out_window_t1_ParamLimits

0xa587,	// (0x0006ecea) popup_call_audio_out_window_t1

0xa59f,	// (0x0006ed02) popup_call_audio_out_window_t2_ParamLimits

0xa59f,	// (0x0006ed02) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x000737c1) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x000737c1) popup_call_audio_out_window_t

0xa5b4,	// (0x0006ed17) bg_popup_call_pane_ParamLimits

0xa5b4,	// (0x0006ed17) bg_popup_call_pane

0x03ff,	// (0x00064b62) call_thumbnail_pane_cp_ParamLimits

0x03ff,	// (0x00064b62) call_thumbnail_pane_cp

0xa638,	// (0x0006ed9b) call_type_pane_cp01_ParamLimits

0xa638,	// (0x0006ed9b) call_type_pane_cp01

0xa67c,	// (0x0006eddf) popup_call_audio_first_window_g1_ParamLimits

0xa67c,	// (0x0006eddf) popup_call_audio_first_window_g1

0xa6c8,	// (0x0006ee2b) popup_call_audio_first_window_g2_ParamLimits

0xa6c8,	// (0x0006ee2b) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x000737c6) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x000737c6) popup_call_audio_first_window_g

0xa70c,	// (0x0006ee6f) popup_call_audio_first_window_t1_ParamLimits

0xa70c,	// (0x0006ee6f) popup_call_audio_first_window_t1

0xa7b8,	// (0x0006ef1b) popup_call_audio_first_window_t4_ParamLimits

0xa7b8,	// (0x0006ef1b) popup_call_audio_first_window_t4

0xa844,	// (0x0006efa7) popup_call_audio_first_window_t5_ParamLimits

0xa844,	// (0x0006efa7) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x000737cb) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x000737cb) popup_call_audio_first_window_t

0xa873,	// (0x0006efd6) bg_popup_call_pane_cp02

0xa87d,	// (0x0006efe0) call_type_pane_cp023

0xa885,	// (0x0006efe8) popup_call_audio_wait_window_g1

0xa88d,	// (0x0006eff0) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x000737d2) popup_call_audio_wait_window_g

0xa895,	// (0x0006eff8) popup_call_audio_wait_window_t3

0xa8a3,	// (0x0006f006) bg_popup_call_pane_cp03_ParamLimits

0xa8a3,	// (0x0006f006) bg_popup_call_pane_cp03

0xa903,	// (0x0006f066) call_thumbnail_pane_cp011_ParamLimits

0xa903,	// (0x0006f066) call_thumbnail_pane_cp011

0xa90f,	// (0x0006f072) call_type_pane_cp034_ParamLimits

0xa90f,	// (0x0006f072) call_type_pane_cp034

0xa94b,	// (0x0006f0ae) popup_call_audio_second_window_g1_ParamLimits

0xa94b,	// (0x0006f0ae) popup_call_audio_second_window_g1

0xa987,	// (0x0006f0ea) popup_call_audio_second_window_g2_ParamLimits

0xa987,	// (0x0006f0ea) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x000737d7) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x000737d7) popup_call_audio_second_window_g

0xa9c3,	// (0x0006f126) popup_call_audio_second_window_t1_ParamLimits

0xa9c3,	// (0x0006f126) popup_call_audio_second_window_t1

0xaa44,	// (0x0006f1a7) popup_call_audio_second_window_t2_ParamLimits

0xaa44,	// (0x0006f1a7) popup_call_audio_second_window_t2

0xaa7a,	// (0x0006f1dd) popup_call_audio_second_window_t3_ParamLimits

0xaa7a,	// (0x0006f1dd) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x000737dc) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x000737dc) popup_call_audio_second_window_t

0xa873,	// (0x0006efd6) bg_popup_call_pane_cp04

0xaab0,	// (0x0006f213) list_conf_pane

0xaab8,	// (0x0006f21b) popup_call_audio_conf_window_t1

0xaac6,	// (0x0006f229) call_thumbnail_pane_g1

0xaace,	// (0x0006f231) bg_pinb_pane_ParamLimits

0xaace,	// (0x0006f231) bg_pinb_pane

0xaadc,	// (0x0006f23f) find_pinb_pane

0xaace,	// (0x0006f231) listscroll_pinb_pane_ParamLimits

0xaace,	// (0x0006f231) listscroll_pinb_pane

0xaae6,	// (0x0006f249) pinb_bg_pane_g1

0xaae6,	// (0x0006f249) pinb_bg_pane_g2

0xaae6,	// (0x0006f249) pinb_bg_pane_g3

0xaae6,	// (0x0006f249) pinb_bg_pane_g4

0xaae6,	// (0x0006f249) pinb_bg_pane_g5

0xaae6,	// (0x0006f249) pinb_bg_pane_g6

0xaae6,	// (0x0006f249) pinb_bg_pane_g7

0xaae6,	// (0x0006f249) pinb_bg_pane_g8

0xaae6,	// (0x0006f249) pinb_bg_pane_g9

0xaae6,	// (0x0006f249) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x000737e3) pinb_bg_pane_g

0xa396,	// (0x0006eaf9) grid_pinb_pane

0xa396,	// (0x0006eaf9) list_pinb_pane

0xaaf0,	// (0x0006f253) scroll_pane_cp01_ParamLimits

0xaaf0,	// (0x0006f253) scroll_pane_cp01

0xaafe,	// (0x0006f261) find_pinb_pane_g1_ParamLimits

0xaafe,	// (0x0006f261) find_pinb_pane_g1

0xab16,	// (0x0006f279) find_pinb_pane_t1

0xab28,	// (0x0006f28b) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x000737fd) find_pinb_pane_t

0xab3d,	// (0x0006f2a0) input_focus_pane_cp01_ParamLimits

0xab3d,	// (0x0006f2a0) input_focus_pane_cp01

0xab49,	// (0x0006f2ac) cell_pinb_pane_ParamLimits

0xab49,	// (0x0006f2ac) cell_pinb_pane

0xab57,	// (0x0006f2ba) cell_pinb_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) cell_pinb_pane_g1

0xab65,	// (0x0006f2c8) cell_pinb_pane_g2_ParamLimits

0xab65,	// (0x0006f2c8) cell_pinb_pane_g2

0xab65,	// (0x0006f2c8) cell_pinb_pane_g3_ParamLimits

0xab65,	// (0x0006f2c8) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00073802) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00073802) cell_pinb_pane_g

0xa873,	// (0x0006efd6) grid_highlight_pane_cp01

0xab49,	// (0x0006f2ac) list_pinb_item_pane_ParamLimits

0xab49,	// (0x0006f2ac) list_pinb_item_pane

0xa396,	// (0x0006eaf9) list_highlight_pane_cp02

0xab73,	// (0x0006f2d6) list_pinb_item_pane_g1_ParamLimits

0xab73,	// (0x0006f2d6) list_pinb_item_pane_g1

0xab65,	// (0x0006f2c8) list_pinb_item_pane_g2_ParamLimits

0xab65,	// (0x0006f2c8) list_pinb_item_pane_g2

0xab57,	// (0x0006f2ba) list_pinb_item_pane_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_pinb_item_pane_g3

0xab65,	// (0x0006f2c8) list_pinb_item_pane_g4_ParamLimits

0xab65,	// (0x0006f2c8) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00073809) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00073809) list_pinb_item_pane_g

0xab81,	// (0x0006f2e4) list_pinb_item_pane_t1_ParamLimits

0xab81,	// (0x0006f2e4) list_pinb_item_pane_t1

0x0443,	// (0x00064ba6) calc_display_pane

0x0468,	// (0x00064bcb) calc_paper_pane

0x048b,	// (0x00064bee) grid_calc_pane

0xa396,	// (0x0006eaf9) bg_list_pane_cp01

0xbfcd,	// (0x00070730) clock_g1

0xbfcd,	// (0x00070730) clock_g2

0x0001,

0xf0af,	// (0x00073812) clock_g

0xbfd7,	// (0x0007073a) clock_t1_ParamLimits

0xbfd7,	// (0x0007073a) clock_t1

0xbfeb,	// (0x0007074e) clock_t2_ParamLimits

0xbfeb,	// (0x0007074e) clock_t2

0xbfeb,	// (0x0007074e) clock_t3_ParamLimits

0xbfeb,	// (0x0007074e) clock_t3

0xbfeb,	// (0x0007074e) clock_t4_ParamLimits

0xbfeb,	// (0x0007074e) clock_t4

0xbfd7,	// (0x0007073a) clock_t5_ParamLimits

0xbfd7,	// (0x0007073a) clock_t5

0xbfeb,	// (0x0007074e) clock_t6_ParamLimits

0xbfeb,	// (0x0007074e) clock_t6

0xbfeb,	// (0x0007074e) clock_t7_ParamLimits

0xbfeb,	// (0x0007074e) clock_t7

0xbfeb,	// (0x0007074e) clock_t8_ParamLimits

0xbfeb,	// (0x0007074e) clock_t8

0xbfeb,	// (0x0007074e) clock_t9_ParamLimits

0xbfeb,	// (0x0007074e) clock_t9

0x0008,

0xf0b4,	// (0x00073817) clock_t_ParamLimits

0xf0b4,	// (0x00073817) clock_t

0xa396,	// (0x0006eaf9) popup_clock_analogue_window_cp02

0xa396,	// (0x0006eaf9) popup_clock_digital_window_cp01

0xa873,	// (0x0006efd6) listscroll_help_pane

0xa873,	// (0x0006efd6) phob_pre_status_pane

0xbfff,	// (0x00070762) grid_qdial_pane

0xaace,	// (0x0006f231) listscroll_mce_pane

0xaace,	// (0x0006f231) bg_notes_pane

0xc009,	// (0x0007076c) list_notes_pane

0x04b9,	// (0x00064c1c) scroll_pane_cp06

0xc017,	// (0x0007077a) bg_calc_paper_pane

0xab9d,	// (0x0006f300) list_calc_pane

0xc02b,	// (0x0007078e) bg_calc_display_pane

0x04cd,	// (0x00064c30) calc_display_pane_t1

0x04e2,	// (0x00064c45) calc_display_pane_t2

0xabb7,	// (0x0006f31a) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0007382a) calc_display_pane_t

0x04f7,	// (0x00064c5a) cell_calc_pane_ParamLimits

0x04f7,	// (0x00064c5a) cell_calc_pane

0xc037,	// (0x0007079a) bg_calc_paper_pane_g1

0xc043,	// (0x000707a6) bg_calc_paper_pane_g2

0xc04f,	// (0x000707b2) bg_calc_paper_pane_g3

0xc05b,	// (0x000707be) bg_calc_paper_pane_g4

0xc067,	// (0x000707ca) bg_calc_paper_pane_g5

0x0532,	// (0x00064c95) bg_calc_paper_pane_g6

0x0545,	// (0x00064ca8) bg_calc_paper_pane_g7

0x0558,	// (0x00064cbb) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00073831) bg_calc_paper_pane_g

0x056b,	// (0x00064cce) calc_bg_paper_pane_g9

0x057e,	// (0x00064ce1) list_calc_item_pane_ParamLimits

0x057e,	// (0x00064ce1) list_calc_item_pane

0xc073,	// (0x000707d6) list_calc_item_pane_g1

0xabc9,	// (0x0006f32c) list_calc_item_pane_t1_ParamLimits

0xabc9,	// (0x0006f32c) list_calc_item_pane_t1

0x0596,	// (0x00064cf9) list_calc_item_pane_t2_ParamLimits

0x0596,	// (0x00064cf9) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00073842) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00073842) list_calc_item_pane_t

0xaae6,	// (0x0006f249) cell_calc_pane_g1

0xc080,	// (0x000707e3) grid_highlight_pane_cp02

0x05c8,	// (0x00064d2b) bg_calc_display_pane_g1

0x05d1,	// (0x00064d34) bg_calc_display_pane_g2

0xcda7,	// (0x0007150a) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0007384c) bg_calc_display_pane_g

0x05db,	// (0x00064d3e) cell_qdial_pane_ParamLimits

0x05db,	// (0x00064d3e) cell_qdial_pane

0x05ef,	// (0x00064d52) cell_qdial_pane_g1_ParamLimits

0x05ef,	// (0x00064d52) cell_qdial_pane_g1

0x0605,	// (0x00064d68) cell_qdial_pane_g2_ParamLimits

0x0605,	// (0x00064d68) cell_qdial_pane_g2

0xc0a2,	// (0x00070805) cell_qdial_pane_g3_ParamLimits

0xc0a2,	// (0x00070805) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00073853) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00073853) cell_qdial_pane_g

0x062c,	// (0x00064d8f) cell_qdial_pane_t1_ParamLimits

0x062c,	// (0x00064d8f) cell_qdial_pane_t1

0x0644,	// (0x00064da7) cell_qdial_pane_t2_ParamLimits

0x0644,	// (0x00064da7) cell_qdial_pane_t2

0x0657,	// (0x00064dba) cell_qdial_pane_t3_ParamLimits

0x0657,	// (0x00064dba) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0007385c) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0007385c) cell_qdial_pane_t

0xa873,	// (0x0006efd6) grid_highlight_pane_cp04

0xc0ae,	// (0x00070811) thumbnail_qdial_pane_ParamLimits

0xc0ae,	// (0x00070811) thumbnail_qdial_pane

0xc10a,	// (0x0007086d) list_help_pane

0xc113,	// (0x00070876) scroll_pane_cp02

0x066a,	// (0x00064dcd) help_list_pane_t1_ParamLimits

0x066a,	// (0x00064dcd) help_list_pane_t1

0xabdb,	// (0x0006f33e) bg_notes_pane_g2

0xabe3,	// (0x0006f346) bg_notes_pane_g3

0xabeb,	// (0x0006f34e) notes_bg_pane_g1

0xabf3,	// (0x0006f356) notes_bg_pane_g4

0xabfb,	// (0x0006f35e) notes_bg_pane_g5

0xac03,	// (0x0006f366) notes_bg_pane_g6

0xac0b,	// (0x0006f36e) notes_bg_pane_g7

0xac13,	// (0x0006f376) notes_bg_pane_g8

0xac1b,	// (0x0006f37e) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0007387a) notes_bg_pane_g

0x068e,	// (0x00064df1) list_notes_text_pane_ParamLimits

0x068e,	// (0x00064df1) list_notes_text_pane

0xc11c,	// (0x0007087f) list_notes_text_pane_g1

0xcdb0,	// (0x00071513) list_notes_text_pane_t1

0x06a5,	// (0x00064e08) listscroll_cale_week_pane

0x06cf,	// (0x00064e32) bg_cale_heading_pane

0x06f3,	// (0x00064e56) bg_cale_pane_cp01

0x0710,	// (0x00064e73) cale_week_corner_pane

0x072f,	// (0x00064e92) cale_week_day_heading_pane

0x0758,	// (0x00064ebb) cale_week_scroll_pane_g1

0x0777,	// (0x00064eda) cale_week_scroll_pane_g2

0x078f,	// (0x00064ef2) cale_week_scroll_pane_g3

0x07a7,	// (0x00064f0a) cale_week_scroll_pane_g4

0x07bf,	// (0x00064f22) cale_week_scroll_pane_g5

0x07df,	// (0x00064f42) cale_week_scroll_pane_g6

0x07ff,	// (0x00064f62) cale_week_scroll_pane_g7

0x0823,	// (0x00064f86) cale_week_scroll_pane_g8

0x0847,	// (0x00064faa) cale_week_scroll_pane_g9

0x085f,	// (0x00064fc2) cale_week_scroll_pane_g10

0x0877,	// (0x00064fda) cale_week_scroll_pane_g11

0x088f,	// (0x00064ff2) cale_week_scroll_pane_g12

0x08b3,	// (0x00065016) cale_week_scroll_pane_g13

0x08b3,	// (0x00065016) cale_week_scroll_pane_g14

0x08b3,	// (0x00065016) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00073889) cale_week_scroll_pane_g

0x08fb,	// (0x0006505e) cale_week_time_pane

0x091f,	// (0x00065082) grid_cale_week_pane

0xc151,	// (0x000708b4) scroll_pane_cp08

0x0951,	// (0x000650b4) cell_cale_week_pane_ParamLimits

0x0951,	// (0x000650b4) cell_cale_week_pane

0x09ed,	// (0x00065150) cale_week_day_heading_pane_t1

0x0a17,	// (0x0006517a) cale_week_day_heading_pane_t2

0x0a46,	// (0x000651a9) cale_week_day_heading_pane_t3

0x0a75,	// (0x000651d8) cale_week_day_heading_pane_t4

0x0aa4,	// (0x00065207) cale_week_day_heading_pane_t5

0x0ad7,	// (0x0006523a) cale_week_day_heading_pane_t6

0x0b0e,	// (0x00065271) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x000738aa) cale_week_day_heading_pane_t

0xc16e,	// (0x000708d1) bg_cale_side_pane

0x0b38,	// (0x0006529b) cale_week_time_pane_t1

0x0b52,	// (0x000652b5) cale_week_time_pane_t2

0x0b6c,	// (0x000652cf) cale_week_time_pane_t3

0x0b86,	// (0x000652e9) cale_week_time_pane_t4

0x0ba0,	// (0x00065303) cale_week_time_pane_t5

0x0bba,	// (0x0006531d) cale_week_time_pane_t6

0x0bda,	// (0x0006533d) cale_week_time_pane_t7

0x0c00,	// (0x00065363) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x000738b9) cale_week_time_pane_t

0x0c26,	// (0x00065389) cell_cale_week_pane_g2

0x0c4a,	// (0x000653ad) cell_cale_week_pane_g3_ParamLimits

0x0c4a,	// (0x000653ad) cell_cale_week_pane_g3

0xc17c,	// (0x000708df) grid_highlight_pane_cp07

0xc184,	// (0x000708e7) listscroll_gms_pane

0xc18e,	// (0x000708f1) grid_gms_pane

0xc197,	// (0x000708fa) listscroll_gms_pane_g1

0xc19f,	// (0x00070902) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x000738ca) listscroll_gms_pane_g

0x0c62,	// (0x000653c5) scroll_pane_cp010

0x0c6d,	// (0x000653d0) cell_gms_pane_ParamLimits

0x0c6d,	// (0x000653d0) cell_gms_pane

0x0c84,	// (0x000653e7) cell_gms_pane_g1

0xc1a7,	// (0x0007090a) cell_gms_pane_g2

0xc1af,	// (0x00070912) cell_gms_pane_g3

0xc1b8,	// (0x0007091b) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x000738cf) cell_gms_pane_g

0xc1c1,	// (0x00070924) grid_highlight_pane_cp09

0x2de8,	// (0x0006754b) phob_pre_status_pane_g1

0x2df0,	// (0x00067553) phob_pre_status_pane_g2

0x2df8,	// (0x0006755b) phob_pre_status_pane_g3

0x2e00,	// (0x00067563) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x00073c7e) phob_pre_status_pane_g

0x2e10,	// (0x00067573) phob_pre_status_pane_t1

0x2e20,	// (0x00067583) phob_pre_status_pane_t2

0x2e30,	// (0x00067593) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x00073c89) phob_pre_status_pane_t

0xc1c9,	// (0x0007092c) bg_list_pane_cp05

0x0c94,	// (0x000653f7) grid_vorec_pane

0x0c9e,	// (0x00065401) vorec_t1

0x0cac,	// (0x0006540f) vorec_t2

0x0cba,	// (0x0006541d) vorec_t3

0x0cc8,	// (0x0006542b) vorec_t4

0xcd99,	// (0x000714fc) vorec_t5

0x9519,	// (0x0006dc7c) vorec_t6

0x0004,

0xf175,	// (0x000738d8) vorec_t

0x9527,	// (0x0006dc8a) wait_bar_pane_cp01

0x0ce4,	// (0x00065447) cell_vorec_pane_ParamLimits

0x0ce4,	// (0x00065447) cell_vorec_pane

0xac23,	// (0x0006f386) cell_vorec_pane_g1

0xa873,	// (0x0006efd6) grid_highlight_pane_cp05

0xaaf0,	// (0x0006f253) cams_zoom_pane

0xaaf0,	// (0x0006f253) image_vga_pane

0xab57,	// (0x0006f2ba) main_camera_pane_g1

0xab57,	// (0x0006f2ba) main_camera_pane_g2

0xab57,	// (0x0006f2ba) main_camera_pane_g3

0xab57,	// (0x0006f2ba) main_camera_pane_g4

0xab57,	// (0x0006f2ba) main_camera_pane_g5

0xab57,	// (0x0006f2ba) main_camera_pane_g6

0xab57,	// (0x0006f2ba) main_camera_pane_g7

0x0007,

0xf180,	// (0x000738e3) main_camera_pane_g

0xbfd7,	// (0x0007073a) main_camera_pane_t1

0xbfd7,	// (0x0007073a) main_camera_pane_t2

0x0001,

0xf191,	// (0x000738f4) main_camera_pane_t

0x0d0d,	// (0x00065470) cams_zoom_pane_cp_ParamLimits

0x0d0d,	// (0x00065470) cams_zoom_pane_cp

0x0d41,	// (0x000654a4) image_cif_pane_ParamLimits

0x0d41,	// (0x000654a4) image_cif_pane

0xa396,	// (0x0006eaf9) image_subqcif_pane

0x0d53,	// (0x000654b6) main_video_pane_g1_ParamLimits

0x0d53,	// (0x000654b6) main_video_pane_g1

0x0d81,	// (0x000654e4) main_video_pane_g2_ParamLimits

0x0d81,	// (0x000654e4) main_video_pane_g2

0x0dbb,	// (0x0006551e) main_video_pane_g3_ParamLimits

0x0dbb,	// (0x0006551e) main_video_pane_g3

0x0dbb,	// (0x0006551e) main_video_pane_g4_ParamLimits

0x0dbb,	// (0x0006551e) main_video_pane_g4

0x0def,	// (0x00065552) main_video_pane_g5_ParamLimits

0x0def,	// (0x00065552) main_video_pane_g5

0xc1d1,	// (0x00070934) main_video_pane_g6_ParamLimits

0xc1d1,	// (0x00070934) main_video_pane_g6

0x0006,

0xf196,	// (0x000738f9) main_video_pane_g_ParamLimits

0xf196,	// (0x000738f9) main_video_pane_g

0x0e0b,	// (0x0006556e) main_video_pane_t1_ParamLimits

0x0e0b,	// (0x0006556e) main_video_pane_t1

0xbfcd,	// (0x00070730) cams_zoom_pane_g1

0xbfcd,	// (0x00070730) cams_zoom_pane_g2

0xbfcd,	// (0x00070730) cams_zoom_pane_g3

0xbfcd,	// (0x00070730) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00073908) cams_zoom_pane_g

0xaaf0,	// (0x0006f253) grid_cams_pane

0xaaf0,	// (0x0006f253) linegrid_cams_pane

0x0e4f,	// (0x000655b2) cell_cams_pane_ParamLimits

0x0e4f,	// (0x000655b2) cell_cams_pane

0xa396,	// (0x0006eaf9) cams_burst_image_pane

0xbfcd,	// (0x00070730) cell_cams_pane_g1

0xa396,	// (0x0006eaf9) grid_highlight_pane_cp03

0xaae6,	// (0x0006f249) mp_bg_pane_g1

0xa396,	// (0x0006eaf9) bg_list_pane_cp03

0xa396,	// (0x0006eaf9) bg_mp_pane

0xa396,	// (0x0006eaf9) grid_mp_pane

0xbfcd,	// (0x00070730) media_player_g1

0xc723,	// (0x00070e86) media_player_t1

0xc723,	// (0x00070e86) media_player_t2

0xc723,	// (0x00070e86) media_player_t3

0xc723,	// (0x00070e86) media_player_t4

0xc723,	// (0x00070e86) media_player_t5

0xc723,	// (0x00070e86) media_player_t6

0xc723,	// (0x00070e86) media_player_t7

0x0006,

0xf505,	// (0x00073c68) media_player_t

0xa396,	// (0x0006eaf9) wait_bar_pane_cp02

0xf4ea,	// (0x00073c4d) main_usb_pane_t

0xc98e,	// (0x000710f1) cell_mp_pane

0xaae6,	// (0x0006f249) cell_mp_pane_g1

0xa873,	// (0x0006efd6) grid_highlight_pane_cp06

0xc1eb,	// (0x0007094e) grid_skin_colour_pane

0xc1f3,	// (0x00070956) list_highlight_pane_cp03

0x0e64,	// (0x000655c7) skin_g1

0xc1fb,	// (0x0007095e) skin_t1

0xc20a,	// (0x0007096d) skin_t2

0x0001,

0xf1d3,	// (0x00073936) skin_t

0x0e6c,	// (0x000655cf) cell_skin_colour_pane_ParamLimits

0x0e6c,	// (0x000655cf) cell_skin_colour_pane

0xc218,	// (0x0007097b) cell_skin_colour_pane_g1

0x0edf,	// (0x00065642) call_video_g1_ParamLimits

0x0edf,	// (0x00065642) call_video_g1

0x0efb,	// (0x0006565e) call_video_g2_ParamLimits

0x0efb,	// (0x0006565e) call_video_g2

0x0001,

0xf1d8,	// (0x0007393b) call_video_g_ParamLimits

0xf1d8,	// (0x0007393b) call_video_g

0x0f40,	// (0x000656a3) call_video_uplink_pane_cp1_ParamLimits

0x0f40,	// (0x000656a3) call_video_uplink_pane_cp1

0xc22a,	// (0x0007098d) call_video_uplink_pane_cp2

0x0fe1,	// (0x00065744) video_down_crop_pane_ParamLimits

0x0fe1,	// (0x00065744) video_down_crop_pane

0x10ca,	// (0x0006582d) video_down_pane_ParamLimits

0x10ca,	// (0x0006582d) video_down_pane

0xc232,	// (0x00070995) video_down_subqcif_pane_ParamLimits

0xc232,	// (0x00070995) video_down_subqcif_pane

0xc24c,	// (0x000709af) video_down_subqcif_pane_cp_ParamLimits

0xc24c,	// (0x000709af) video_down_subqcif_pane_cp

0xc274,	// (0x000709d7) im_reading_pane_ParamLimits

0xc274,	// (0x000709d7) im_reading_pane

0x11d5,	// (0x00065938) im_writing_pane_ParamLimits

0x11d5,	// (0x00065938) im_writing_pane

0x11f3,	// (0x00065956) im_reading_pane_t1

0xc28e,	// (0x000709f1) list_im_pane

0xc29f,	// (0x00070a02) scroll_pane_cp07

0x1232,	// (0x00065995) im_writing_pane_t1_ParamLimits

0x1232,	// (0x00065995) im_writing_pane_t1

0xc2b8,	// (0x00070a1b) im_writing_pane_t2_ParamLimits

0xc2b8,	// (0x00070a1b) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00073945) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00073945) im_writing_pane_t

0xa873,	// (0x0006efd6) input_focus_pane_cp04

0xa873,	// (0x0006efd6) input_focus_pane_cp05

0x1247,	// (0x000659aa) list_im_single_pane_ParamLimits

0x1247,	// (0x000659aa) list_im_single_pane

0xc2d5,	// (0x00070a38) list_single_im_pane_t1

0xc1c9,	// (0x0007092c) blid_accuracy_pane

0xc1c9,	// (0x0007092c) blid_compass_pane

0xde37,	// (0x0007259a) main_location_t1

0xde37,	// (0x0007259a) main_location_t2

0xde37,	// (0x0007259a) main_location_t3

0x0002,

0xf514,	// (0x00073c77) main_location_t

0xa873,	// (0x0006efd6) aid_levels_location

0xaae6,	// (0x0006f249) blid_accuracy_pane_g1

0xaae6,	// (0x0006f249) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x00073994) blid_accuracy_pane_g

0xc30f,	// (0x00070a72) wml_content_pane

0xc34d,	// (0x00070ab0) wml_button_pane_ParamLimits

0xc34d,	// (0x00070ab0) wml_button_pane

0x125d,	// (0x000659c0) wml_list_single_large_pane_ParamLimits

0x125d,	// (0x000659c0) wml_list_single_large_pane

0x1276,	// (0x000659d9) wml_list_single_medium_pane_ParamLimits

0x1276,	// (0x000659d9) wml_list_single_medium_pane

0x1290,	// (0x000659f3) wml_list_single_small_pane_ParamLimits

0x1290,	// (0x000659f3) wml_list_single_small_pane

0xc361,	// (0x00070ac4) wml_selection_box_pane_ParamLimits

0xc361,	// (0x00070ac4) wml_selection_box_pane

0xc374,	// (0x00070ad7) wml_list_single_pane_t1

0xc383,	// (0x00070ae6) wml_list_single_medium_pane_t1

0xc392,	// (0x00070af5) wml_list_single_large_pane_t1

0xc3a1,	// (0x00070b04) input_focus_pane_cp02_ParamLimits

0xc3a1,	// (0x00070b04) input_focus_pane_cp02

0xc3b4,	// (0x00070b17) wml_selection_box_pane_g1

0xc3bd,	// (0x00070b20) wml_selection_box_pane_t1_ParamLimits

0xc3bd,	// (0x00070b20) wml_selection_box_pane_t1

0xaace,	// (0x0006f231) bg_wml_button_pane_ParamLimits

0xaace,	// (0x0006f231) bg_wml_button_pane

0xc3d5,	// (0x00070b38) wml_button_pane_g1

0xc3dd,	// (0x00070b40) wml_button_pane_t1

0xc3d5,	// (0x00070b38) wml_button_bg_pane_g1

0xc3ed,	// (0x00070b50) wml_button_bg_pane_g2

0xc3f5,	// (0x00070b58) wml_button_bg_pane_g3

0xc3fd,	// (0x00070b60) wml_button_bg_pane_g4

0xc405,	// (0x00070b68) wml_button_bg_pane_g5

0xc40d,	// (0x00070b70) wml_button_bg_pane_g6

0xc415,	// (0x00070b78) wml_button_bg_pane_g7

0xc41d,	// (0x00070b80) wml_button_bg_pane_g8

0xc425,	// (0x00070b88) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0007394a) wml_button_bg_pane_g

0x12ac,	// (0x00065a0f) bg_list_pane_cp02

0xc42d,	// (0x00070b90) mce_header_pane_ParamLimits

0xc42d,	// (0x00070b90) mce_header_pane

0xc443,	// (0x00070ba6) mce_icon_pane

0xc443,	// (0x00070ba6) mce_image_pane

0xc44c,	// (0x00070baf) mce_text_pane_ParamLimits

0xc44c,	// (0x00070baf) mce_text_pane

0x12b6,	// (0x00065a19) scroll_pane_cp03

0xc345,	// (0x00070aa8) scroll_pane_cp04

0xc45f,	// (0x00070bc2) scroll_pane_cp05_ParamLimits

0xc45f,	// (0x00070bc2) scroll_pane_cp05

0x12c0,	// (0x00065a23) mce_header_field_pane_ParamLimits

0x12c0,	// (0x00065a23) mce_header_field_pane

0x12d9,	// (0x00065a3c) mce_header_field_pane_2_ParamLimits

0x12d9,	// (0x00065a3c) mce_header_field_pane_2

0x12ef,	// (0x00065a52) mce_header_field_pane_3

0x12f7,	// (0x00065a5a) list_single_mce_message_pane_ParamLimits

0x12f7,	// (0x00065a5a) list_single_mce_message_pane

0x1313,	// (0x00065a76) list_single_mce_smart_pane_ParamLimits

0x1313,	// (0x00065a76) list_single_mce_smart_pane

0xc46b,	// (0x00070bce) input_focus_pane_cp03

0xc474,	// (0x00070bd7) list_header_data_pane

0x133a,	// (0x00065a9d) mce_header_field_pane_t1

0x134a,	// (0x00065aad) list_single_mce_header_pane_ParamLimits

0x134a,	// (0x00065aad) list_single_mce_header_pane

0xc47c,	// (0x00070bdf) list_single_mce_header_pane_t1

0xc48b,	// (0x00070bee) list_single_mce_message_pane_g1

0xc493,	// (0x00070bf6) list_single_mce_message_pane_t1

0x1384,	// (0x00065ae7) bg_cale_heading_pane_cp01_ParamLimits

0x1384,	// (0x00065ae7) bg_cale_heading_pane_cp01

0xc4a1,	// (0x00070c04) bg_cale_pane_cp02_ParamLimits

0xc4a1,	// (0x00070c04) bg_cale_pane_cp02

0x13d6,	// (0x00065b39) cale_month_corner_pane

0x13f5,	// (0x00065b58) cale_month_day_heading_pane_ParamLimits

0x13f5,	// (0x00065b58) cale_month_day_heading_pane

0x145f,	// (0x00065bc2) cale_month_pane_g1_ParamLimits

0x145f,	// (0x00065bc2) cale_month_pane_g1

0x14a6,	// (0x00065c09) cale_month_pane_g2_ParamLimits

0x14a6,	// (0x00065c09) cale_month_pane_g2

0x14e2,	// (0x00065c45) cale_month_pane_g3_ParamLimits

0x14e2,	// (0x00065c45) cale_month_pane_g3

0x1536,	// (0x00065c99) cale_month_pane_g4_ParamLimits

0x1536,	// (0x00065c99) cale_month_pane_g4

0x158a,	// (0x00065ced) cale_month_pane_g5_ParamLimits

0x158a,	// (0x00065ced) cale_month_pane_g5

0x15e6,	// (0x00065d49) cale_month_pane_g6_ParamLimits

0x15e6,	// (0x00065d49) cale_month_pane_g6

0x164e,	// (0x00065db1) cale_month_pane_g7_ParamLimits

0x164e,	// (0x00065db1) cale_month_pane_g7

0x16ba,	// (0x00065e1d) cale_month_pane_g8_ParamLimits

0x16ba,	// (0x00065e1d) cale_month_pane_g8

0x1726,	// (0x00065e89) cale_month_pane_g9_ParamLimits

0x1726,	// (0x00065e89) cale_month_pane_g9

0x178a,	// (0x00065eed) cale_month_pane_g10_ParamLimits

0x178a,	// (0x00065eed) cale_month_pane_g10

0x17dc,	// (0x00065f3f) cale_month_pane_g11_ParamLimits

0x17dc,	// (0x00065f3f) cale_month_pane_g11

0x182e,	// (0x00065f91) cale_month_pane_g12_ParamLimits

0x182e,	// (0x00065f91) cale_month_pane_g12

0x1886,	// (0x00065fe9) cale_month_pane_g13_ParamLimits

0x1886,	// (0x00065fe9) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0007395d) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0007395d) cale_month_pane_g

0x18de,	// (0x00066041) cale_month_week_pane

0x1902,	// (0x00066065) grid_cale_month_pane_ParamLimits

0x1902,	// (0x00066065) grid_cale_month_pane

0x1963,	// (0x000660c6) cale_month_day_heading_pane_t1

0x19e9,	// (0x0006614c) cale_month_day_heading_pane_t2

0x1a62,	// (0x000661c5) cale_month_day_heading_pane_t3

0x1adb,	// (0x0006623e) cale_month_day_heading_pane_t4

0x1b5c,	// (0x000662bf) cale_month_day_heading_pane_t5

0x1be5,	// (0x00066348) cale_month_day_heading_pane_t6

0x1c76,	// (0x000663d9) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00073978) cale_month_day_heading_pane_t

0xc16e,	// (0x000708d1) bg_cale_side_pane_cp01

0x1d07,	// (0x0006646a) cale_month_week_pane_t1

0x1d20,	// (0x00066483) cale_month_week_pane_t2

0x1d39,	// (0x0006649c) cale_month_week_pane_t3

0x1d52,	// (0x000664b5) cale_month_week_pane_t4

0x1d6b,	// (0x000664ce) cale_month_week_pane_t5

0x1d84,	// (0x000664e7) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00073987) cale_month_week_pane_t

0x1da9,	// (0x0006650c) cell_cale_month_pane_ParamLimits

0x1da9,	// (0x0006650c) cell_cale_month_pane

0xac2d,	// (0x0006f390) cell_cale_month_pane_g1

0x1ee7,	// (0x0006664a) cell_cale_month_pane_t1_ParamLimits

0x1ee7,	// (0x0006664a) cell_cale_month_pane_t1

0xc17c,	// (0x000708df) grid_highlight_pane_cp08

0xaae6,	// (0x0006f249) main_smil_g1

0x1f13,	// (0x00066676) smil_status_pane

0xc4e0,	// (0x00070c43) smil_text_pane

0xdd4d,	// (0x000724b0) bg_popup_call3_rect_pane_g8

0xdd55,	// (0x000724b8) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x00073c10) bg_popup_call3_rect_pane_g

0xdf00,	// (0x00072663) smil_status_volume_pane_g1

0xc4ea,	// (0x00070c4d) smil_status_pane_t1

0xad83,	// (0x0006f4e6) volume_smil_pane

0xc501,	// (0x00070c64) list_smil_text_pane

0x1f28,	// (0x0006668b) scroll_pane_cp011

0x1f33,	// (0x00066696) smil_text_list_pane_t1_ParamLimits

0x1f33,	// (0x00066696) smil_text_list_pane_t1

0xac39,	// (0x0006f39c) aid_volume_smil_ParamLimits

0xac39,	// (0x0006f39c) aid_volume_smil

0xaae6,	// (0x0006f249) smil_volume_pane_g1

0xaae6,	// (0x0006f249) smil_volume_pane_g2

0x0001,

0xf231,	// (0x00073994) smil_volume_pane_g

0x06a5,	// (0x00064e08) listscroll_cale_day_pane

0xc50b,	// (0x00070c6e) bg_cale_pane

0xc523,	// (0x00070c86) list_cale_pane

0xc546,	// (0x00070ca9) scroll_pane_cp09

0xc557,	// (0x00070cba) cale_bg_pane_g1

0xc55f,	// (0x00070cc2) cale_bg_pane_g2

0xc567,	// (0x00070cca) cale_bg_pane_g3

0xc56f,	// (0x00070cd2) cale_bg_pane_g4

0xc577,	// (0x00070cda) cale_bg_pane_g5

0xc57f,	// (0x00070ce2) cale_bg_pane_g6

0xc587,	// (0x00070cea) cale_bg_pane_g7

0xc58f,	// (0x00070cf2) cale_bg_pane_g8

0xc597,	// (0x00070cfa) cale_bg_pane_g9

0x0008,

0xf236,	// (0x00073999) cale_bg_pane_g

0xc59f,	// (0x00070d02) list_cale_time_pane_ParamLimits

0xc59f,	// (0x00070d02) list_cale_time_pane

0xc5b6,	// (0x00070d19) list_cale_time_pane_g1_ParamLimits

0xc5b6,	// (0x00070d19) list_cale_time_pane_g1

0xc5c2,	// (0x00070d25) list_cale_time_pane_g2_ParamLimits

0xc5c2,	// (0x00070d25) list_cale_time_pane_g2

0x1f87,	// (0x000666ea) list_cale_time_pane_g3_ParamLimits

0x1f87,	// (0x000666ea) list_cale_time_pane_g3

0x1f95,	// (0x000666f8) list_cale_time_pane_g4_ParamLimits

0x1f95,	// (0x000666f8) list_cale_time_pane_g4

0x1fa3,	// (0x00066706) list_cale_time_pane_g5_ParamLimits

0x1fa3,	// (0x00066706) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x000739ac) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x000739ac) list_cale_time_pane_g

0xc5dc,	// (0x00070d3f) list_cale_time_pane_t1_ParamLimits

0xc5dc,	// (0x00070d3f) list_cale_time_pane_t1

0xc604,	// (0x00070d67) list_cale_time_pane_t2_ParamLimits

0xc604,	// (0x00070d67) list_cale_time_pane_t2

0x2261,	// (0x000669c4) aid_blid_cardinal_pane

0x229f,	// (0x00066a02) compass_pane_t4

0xc62c,	// (0x00070d8f) list_cale_time_pane_t4_ParamLimits

0xc62c,	// (0x00070d8f) list_cale_time_pane_t4

0x22ad,	// (0x00066a10) compass_pane_t5

0x22bd,	// (0x00066a20) compass_pane_t6

0x22cb,	// (0x00066a2e) compass_pane_t7

0xca3e,	// (0x000711a1) navi_pane_cc_t1

0xcb8b,	// (0x000712ee) aid_phob_thumbnail_center_pane

0x27f6,	// (0x00066f59) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x000739b9) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x000739b9) list_cale_time_pane_t

0xa4ca,	// (0x0006ec2d) bg_popup_window_pane_cp02_ParamLimits

0xa4ca,	// (0x0006ec2d) bg_popup_window_pane_cp02

0xc654,	// (0x00070db7) heading_pane_cp01_ParamLimits

0xc654,	// (0x00070db7) heading_pane_cp01

0xc660,	// (0x00070dc3) loc_req_pane_ParamLimits

0xc660,	// (0x00070dc3) loc_req_pane

0xc670,	// (0x00070dd3) loc_type_pane_ParamLimits

0xc670,	// (0x00070dd3) loc_type_pane

0xc682,	// (0x00070de5) loc_type_pane_t1_ParamLimits

0xc682,	// (0x00070de5) loc_type_pane_t1

0xc694,	// (0x00070df7) loc_type_pane_t2_ParamLimits

0xc694,	// (0x00070df7) loc_type_pane_t2

0xc6a6,	// (0x00070e09) loc_type_pane_t3_ParamLimits

0xc6a6,	// (0x00070e09) loc_type_pane_t3

0x0002,

0xf25d,	// (0x000739c0) loc_type_pane_t_ParamLimits

0xf25d,	// (0x000739c0) loc_type_pane_t

0xc6b8,	// (0x00070e1b) list_loc_req_pane

0xc6c2,	// (0x00070e25) scroll_pane_cp012

0x1fb1,	// (0x00066714) list_single_loc_request_popup_menu_pane_ParamLimits

0x1fb1,	// (0x00066714) list_single_loc_request_popup_menu_pane

0xc6cd,	// (0x00070e30) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc6cd,	// (0x00070e30) list_single_loc_request_popup_menu_pane_g1

0xc6d9,	// (0x00070e3c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc6d9,	// (0x00070e3c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x000739c7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x000739c7) list_single_loc_request_popup_menu_pane_g

0xc6e5,	// (0x00070e48) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc6e5,	// (0x00070e48) list_single_loc_request_popup_menu_pane_t1

0xaace,	// (0x0006f231) bg_popup_window_pane_cp03_ParamLimits

0xaace,	// (0x0006f231) bg_popup_window_pane_cp03

0xcdbe,	// (0x00071521) heading_loc_req_pane_ParamLimits

0xcdbe,	// (0x00071521) heading_loc_req_pane

0x1fbe,	// (0x00066721) popup_dyc_status_message_window_g1_ParamLimits

0x1fbe,	// (0x00066721) popup_dyc_status_message_window_g1

0x1fd2,	// (0x00066735) popup_dyc_status_message_window_t1_ParamLimits

0x1fd2,	// (0x00066735) popup_dyc_status_message_window_t1

0x1fe7,	// (0x0006674a) popup_dyc_status_message_window_t2_ParamLimits

0x1fe7,	// (0x0006674a) popup_dyc_status_message_window_t2

0x1ffc,	// (0x0006675f) popup_dyc_status_message_window_t3_ParamLimits

0x1ffc,	// (0x0006675f) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x000739cc) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x000739cc) popup_dyc_status_message_window_t

0xa873,	// (0x0006efd6) bg_heading_pane_cp01

0xc6fb,	// (0x00070e5e) heading_loc_req_pane_g1

0xc703,	// (0x00070e66) heading_loc_req_pane_g2

0xc70b,	// (0x00070e6e) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x000739d3) heading_loc_req_pane_g

0xc713,	// (0x00070e76) heading_loc_req_pane_t1

0xc733,	// (0x00070e96) bg_popup_sub_pane_cp01_ParamLimits

0xc733,	// (0x00070e96) bg_popup_sub_pane_cp01

0xc741,	// (0x00070ea4) popup_cale_events_window_g1_ParamLimits

0xc741,	// (0x00070ea4) popup_cale_events_window_g1

0xc761,	// (0x00070ec4) popup_cale_events_window_g2_ParamLimits

0xc761,	// (0x00070ec4) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x000739f5) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x000739f5) popup_cale_events_window_g

0xc781,	// (0x00070ee4) popup_cale_events_window_t1_ParamLimits

0xc781,	// (0x00070ee4) popup_cale_events_window_t1

0xc793,	// (0x00070ef6) popup_cale_events_window_t2_ParamLimits

0xc793,	// (0x00070ef6) popup_cale_events_window_t2

0xc7d1,	// (0x00070f34) popup_cale_events_window_t3_ParamLimits

0xc7d1,	// (0x00070f34) popup_cale_events_window_t3

0xc80b,	// (0x00070f6e) popup_cale_events_window_t4_ParamLimits

0xc80b,	// (0x00070f6e) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x000739fa) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x000739fa) popup_cale_events_window_t

0x2030,	// (0x00066793) call_type_pane

0x2040,	// (0x000667a3) popup_call_status_window_g1

0x2054,	// (0x000667b7) popup_call_status_window_g2

0x2068,	// (0x000667cb) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x00073a03) popup_call_status_window_g

0xc841,	// (0x00070fa4) call_type_pane_g1

0xc84a,	// (0x00070fad) call_type_pane_g2

0x0001,

0xf2a7,	// (0x00073a0a) call_type_pane_g

0xa873,	// (0x0006efd6) bg_popup_sub_pane_cp02

0xc853,	// (0x00070fb6) listscroll_popup_wml_pane

0xc85b,	// (0x00070fbe) list_wml_pane

0xc865,	// (0x00070fc8) scroll_pane_cp013

0xc870,	// (0x00070fd3) list_single_graphic_popup_wml_pane_ParamLimits

0xc870,	// (0x00070fd3) list_single_graphic_popup_wml_pane

0xaae6,	// (0x0006f249) list_single_graphic_popup_wml_pane_g1

0xc884,	// (0x00070fe7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x00073a0f) list_single_graphic_popup_wml_pane_g

0xc88c,	// (0x00070fef) list_single_graphic_popup_wml_pane_t1

0xc8a2,	// (0x00071005) aid_call_pane

0xaac6,	// (0x0006f229) popup_clock_analogue_window_g1

0xaac6,	// (0x0006f229) popup_clock_analogue_window_g2

0xac5b,	// (0x0006f3be) popup_clock_analogue_window_g3

0xac5b,	// (0x0006f3be) popup_clock_analogue_window_g4

0xaae6,	// (0x0006f249) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x00073a14) popup_clock_analogue_window_g

0xac63,	// (0x0006f3c6) popup_clock_analogue_window_t1

0xac71,	// (0x0006f3d4) clock_digital_number_pane_ParamLimits

0xac71,	// (0x0006f3d4) clock_digital_number_pane

0xac7d,	// (0x0006f3e0) clock_digital_number_pane_cp02_ParamLimits

0xac7d,	// (0x0006f3e0) clock_digital_number_pane_cp02

0xac89,	// (0x0006f3ec) clock_digital_number_pane_cp03_ParamLimits

0xac89,	// (0x0006f3ec) clock_digital_number_pane_cp03

0xac95,	// (0x0006f3f8) clock_digital_number_pane_cp04_ParamLimits

0xac95,	// (0x0006f3f8) clock_digital_number_pane_cp04

0xaca1,	// (0x0006f404) clock_digital_separator_pane_ParamLimits

0xaca1,	// (0x0006f404) clock_digital_separator_pane

0xacad,	// (0x0006f410) popup_clock_digital_window_t1

0xaae6,	// (0x0006f249) clock_digital_number_pane_g1

0xaae6,	// (0x0006f249) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x00073994) clock_digital_number_pane_g

0xaae6,	// (0x0006f249) clock_digital_separator_pane_g1

0xaae6,	// (0x0006f249) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x00073994) clock_digital_separator_pane_g

0xa873,	// (0x0006efd6) bg_popup_window_pane_cp04

0xc8aa,	// (0x0007100d) heading_pane_cp03

0xc1c9,	// (0x0007092c) listscroll_popup_gms_pane

0xa873,	// (0x0006efd6) grid_large_graphic_popup_pane

0xc8b3,	// (0x00071016) listscroll_popup_gms_pane_g1

0xc8bc,	// (0x0007101f) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x00073a1f) listscroll_popup_gms_pane_g

0xc8c5,	// (0x00071028) scroll_pane_cp014

0xab49,	// (0x0006f2ac) cell_large_graphic_popup_pane_ParamLimits

0xab49,	// (0x0006f2ac) cell_large_graphic_popup_pane

0xab57,	// (0x0006f2ba) cell_large_graphic_popup_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) cell_large_graphic_popup_pane_g1

0xc8ce,	// (0x00071031) cell_large_graphic_popup_pane_g2_ParamLimits

0xc8ce,	// (0x00071031) cell_large_graphic_popup_pane_g2

0xc8dc,	// (0x0007103f) cell_large_graphic_popup_pane_g3_ParamLimits

0xc8dc,	// (0x0007103f) cell_large_graphic_popup_pane_g3

0xc8ea,	// (0x0007104d) cell_large_graphic_popup_pane_g4_ParamLimits

0xc8ea,	// (0x0007104d) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x00073a24) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x00073a24) cell_large_graphic_popup_pane_g

0xa873,	// (0x0006efd6) grid_highlight_pane_cp010

0xaae6,	// (0x0006f249) bg_popup_call_pane_g1

0xc8fb,	// (0x0007105e) list_single_graphic_popup_conf_pane_ParamLimits

0xc8fb,	// (0x0007105e) list_single_graphic_popup_conf_pane

0xc90d,	// (0x00071070) list_highlight_pane_cp01

0xc916,	// (0x00071079) list_single_graphic_popup_conf_pane_g1

0xc91e,	// (0x00071081) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x00073a2d) list_single_graphic_popup_conf_pane_g

0xc926,	// (0x00071089) list_single_graphic_popup_conf_pane_t1

0xc934,	// (0x00071097) linegrid_cams_pane_g1

0x2078,	// (0x000667db) linegrid_cams_pane_g2

0xc1af,	// (0x00070912) linegrid_cams_pane_g3

0xc93d,	// (0x000710a0) linegrid_cams_pane_g4

0x2081,	// (0x000667e4) linegrid_cams_pane_g5

0x208a,	// (0x000667ed) linegrid_cams_pane_g6

0xc1b8,	// (0x0007091b) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x00073a32) linegrid_cams_pane_g

0xc946,	// (0x000710a9) popup_clock_analogue_window

0xc946,	// (0x000710a9) popup_clock_digital_window

0xa873,	// (0x0006efd6) popup_phob_thumbnail_window

0xaae6,	// (0x0006f249) call_video_uplink_pane_g1

0xc94f,	// (0x000710b2) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x00073a41) call_video_uplink_pane_g

0xc957,	// (0x000710ba) video_uplink_pane

0xc95f,	// (0x000710c2) mce_image_pane_g1

0x2095,	// (0x000667f8) mce_image_pane_g2

0x209f,	// (0x00066802) mce_image_pane_g3

0x20a9,	// (0x0006680c) mce_image_pane_g4

0x20b1,	// (0x00066814) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x00073a46) mce_image_pane_g

0xc969,	// (0x000710cc) control_top_pane_stacon_cp01_ParamLimits

0xc969,	// (0x000710cc) control_top_pane_stacon_cp01

0xc97d,	// (0x000710e0) uni_indicator_pane_stacon_cp01_ParamLimits

0xc97d,	// (0x000710e0) uni_indicator_pane_stacon_cp01

0xc98e,	// (0x000710f1) bg_popup_sub_pane_cp03

0x20b9,	// (0x0006681c) chi_dic_find_pane

0x20c1,	// (0x00066824) listscroll_chi_dic_pane

0x20ca,	// (0x0006682d) main_pane_chidic_g1

0x20dd,	// (0x00066840) chi_dic_find_pane_t1

0xc998,	// (0x000710fb) find_chidic_pane

0xc9a1,	// (0x00071104) chi_dic_list_pane_ParamLimits

0xc9a1,	// (0x00071104) chi_dic_list_pane

0xc9b2,	// (0x00071115) scroll_pane_cp020

0x20eb,	// (0x0006684e) find_chidic_pane_t1

0xa873,	// (0x0006efd6) input_focus_pane_cp06

0x20fa,	// (0x0006685d) list_chi_dic_pane_ParamLimits

0x20fa,	// (0x0006685d) list_chi_dic_pane

0x210c,	// (0x0006686f) list_chi_dic_pane_t1_ParamLimits

0x210c,	// (0x0006686f) list_chi_dic_pane_t1

0xa873,	// (0x0006efd6) list_highlight_pane_cp020

0xc9ba,	// (0x0007111d) bg_cale_heading_pane_g1

0x211f,	// (0x00066882) bg_cale_heading_pane_g2

0x2127,	// (0x0006688a) bg_cale_heading_pane_g3

0x212f,	// (0x00066892) bg_cale_heading_pane_g4

0x2139,	// (0x0006689c) bg_cale_heading_pane_g5

0x2143,	// (0x000668a6) bg_cale_heading_pane_g6

0x214b,	// (0x000668ae) bg_cale_heading_pane_g7

0x2153,	// (0x000668b6) bg_cale_heading_pane_g8

0x215d,	// (0x000668c0) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x00073a51) bg_cale_heading_pane_g

0xc9ba,	// (0x0007111d) bg_cale_side_pane_g1

0x2167,	// (0x000668ca) bg_cale_side_pane_g2

0x2171,	// (0x000668d4) bg_cale_side_pane_g3

0x217b,	// (0x000668de) bg_cale_side_pane_g4

0x2185,	// (0x000668e8) bg_cale_side_pane_g5

0x218f,	// (0x000668f2) bg_cale_side_pane_g6

0x2199,	// (0x000668fc) bg_cale_side_pane_g7

0x21a3,	// (0x00066906) bg_cale_side_pane_g8

0x21ab,	// (0x0006690e) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x00073a64) bg_cale_side_pane_g

0x21b3,	// (0x00066916) popup_call_status_window_ParamLimits

0x21b3,	// (0x00066916) popup_call_status_window

0xc9c2,	// (0x00071125) stacon_top_pane

0xc9ca,	// (0x0007112d) status_pane_ParamLimits

0xc9ca,	// (0x0007112d) status_pane

0xc9df,	// (0x00071142) status_small_pane

0xc9e7,	// (0x0007114a) control_pane

0xa873,	// (0x0006efd6) stacon_bottom_pane

0xc9ef,	// (0x00071152) list_single_mce_smart_pane_t1_ParamLimits

0xc9ef,	// (0x00071152) list_single_mce_smart_pane_t1

0xca02,	// (0x00071165) list_single_mce_smart_pane_t2_ParamLimits

0xca02,	// (0x00071165) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x00073a77) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x00073a77) list_single_mce_smart_pane_t

0x2200,	// (0x00066963) compass_pane

0x220b,	// (0x0006696e) main_location2_pane_t1

0x2221,	// (0x00066984) main_location2_pane_t2

0x2237,	// (0x0006699a) main_location2_pane_t3

0x0003,

0xf319,	// (0x00073a7c) main_location2_pane_t

0xca21,	// (0x00071184) compass_pane_g1_ParamLimits

0xca21,	// (0x00071184) compass_pane_g1

0x2281,	// (0x000669e4) compass_pane_t1

0x2290,	// (0x000669f3) compass_pane_t2

0x0005,

0xf322,	// (0x00073a85) compass_pane_t

0x22db,	// (0x00066a3e) text_secondary_cp61

0xca35,	// (0x00071198) navi_pane_cams_g5

0xca58,	// (0x000711bb) navi_pane_im_t1

0xca66,	// (0x000711c9) navi_pane_mp_g1_ParamLimits

0xca66,	// (0x000711c9) navi_pane_mp_g1

0xca7a,	// (0x000711dd) navi_pane_mp_g2_ParamLimits

0xca7a,	// (0x000711dd) navi_pane_mp_g2

0xca86,	// (0x000711e9) navi_pane_mp_g3_ParamLimits

0xca86,	// (0x000711e9) navi_pane_mp_g3

0x0002,

0xf336,	// (0x00073a99) navi_pane_mp_g_ParamLimits

0xf336,	// (0x00073a99) navi_pane_mp_g

0xca92,	// (0x000711f5) navi_pane_mp_t1

0xcaa0,	// (0x00071203) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x00073aa0) navi_pane_mp_t

0xcadc,	// (0x0007123f) navi_pane_vt_g1

0xca92,	// (0x000711f5) navi_pane_vt_t1

0xcae4,	// (0x00071247) navi_slider_pane

0xc1c9,	// (0x0007092c) zooming_pane

0xcaec,	// (0x0007124f) navi_slider_pane_g1

0xacca,	// (0x0006f42d) navi_slider_pane_g2

0x0006,

0xf344,	// (0x00073aa7) navi_slider_pane_g

0xcb10,	// (0x00071273) aid_levels_zoom

0xcb18,	// (0x0007127b) zooming_pane_g1

0xcb20,	// (0x00071283) zooming_pane_g2

0xcb20,	// (0x00071283) zooming_pane_g3

0x0002,

0xf353,	// (0x00073ab6) zooming_pane_g

0xcb28,	// (0x0007128b) level_10_zoom

0xcb31,	// (0x00071294) level_11_zoom

0xcb3a,	// (0x0007129d) level_1_zoom

0xcb43,	// (0x000712a6) level_2_zoom

0xcb4c,	// (0x000712af) level_3_zoom

0xcb55,	// (0x000712b8) level_4_zoom

0xcb5e,	// (0x000712c1) level_5_zoom

0xcb67,	// (0x000712ca) level_6_zoom

0xcb70,	// (0x000712d3) level_7_zoom

0xcb79,	// (0x000712dc) level_8_zoom

0xcb82,	// (0x000712e5) level_9_zoom

0xcb93,	// (0x000712f6) popup_phob_thumbnail_window_g1

0xcb9b,	// (0x000712fe) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x00073abd) popup_phob_thumbnail_window_g

0x2e40,	// (0x000675a3) level_1_location

0x2e48,	// (0x000675ab) level_2_location

0x2e50,	// (0x000675b3) level_3_location

0x2e5a,	// (0x000675bd) level_4_location

0xc1c9,	// (0x0007092c) level_5_location

0x2424,	// (0x00066b87) mce_icon_pane_g1

0x242e,	// (0x00066b91) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x00073ac2) mce_icon_pane_g

0xcdca,	// (0x0007152d) main_mup_pane_g1_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g1

0xcdca,	// (0x0007152d) main_mup_pane_g2_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g2

0xcdca,	// (0x0007152d) main_mup_pane_g3_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g3

0xcdca,	// (0x0007152d) main_mup_pane_g4_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g4

0xcdca,	// (0x0007152d) main_mup_pane_g5_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g5

0xcdca,	// (0x0007152d) main_mup_pane_g6_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g6

0xcdca,	// (0x0007152d) main_mup_pane_g7_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g7

0xcdca,	// (0x0007152d) main_mup_pane_g8_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g8

0xcdca,	// (0x0007152d) main_mup_pane_g9_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g9

0xcdca,	// (0x0007152d) main_mup_pane_g10_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g10

0xcdca,	// (0x0007152d) main_mup_pane_g11_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g11

0xab57,	// (0x0006f2ba) main_mup_pane_g12_ParamLimits

0xab57,	// (0x0006f2ba) main_mup_pane_g12

0xcdca,	// (0x0007152d) main_mup_pane_g13_ParamLimits

0xcdca,	// (0x0007152d) main_mup_pane_g13

0x000c,

0xf364,	// (0x00073ac7) main_mup_pane_g_ParamLimits

0xf364,	// (0x00073ac7) main_mup_pane_g

0xcdd8,	// (0x0007153b) main_mup_pane_t1_ParamLimits

0xcdd8,	// (0x0007153b) main_mup_pane_t1

0xcdd8,	// (0x0007153b) main_mup_pane_t2_ParamLimits

0xcdd8,	// (0x0007153b) main_mup_pane_t2

0xcdd8,	// (0x0007153b) main_mup_pane_t3_ParamLimits

0xcdd8,	// (0x0007153b) main_mup_pane_t3

0xbfd7,	// (0x0007073a) main_mup_pane_t4_ParamLimits

0xbfd7,	// (0x0007073a) main_mup_pane_t4

0xbfd7,	// (0x0007073a) main_mup_pane_t5_ParamLimits

0xbfd7,	// (0x0007073a) main_mup_pane_t5

0xbfeb,	// (0x0007074e) main_mup_pane_t6_ParamLimits

0xbfeb,	// (0x0007074e) main_mup_pane_t6

0x0005,

0xf37f,	// (0x00073ae2) main_mup_pane_t_ParamLimits

0xf37f,	// (0x00073ae2) main_mup_pane_t

0xab49,	// (0x0006f2ac) mup_progress_pane_ParamLimits

0xab49,	// (0x0006f2ac) mup_progress_pane

0xcba3,	// (0x00071306) mup_visualizer_pane_ParamLimits

0xcba3,	// (0x00071306) mup_visualizer_pane

0xcba3,	// (0x00071306) mup_volume_pane_ParamLimits

0xcba3,	// (0x00071306) mup_volume_pane

0xab65,	// (0x0006f2c8) mup_visualizer_pane_g1_ParamLimits

0xab65,	// (0x0006f2c8) mup_visualizer_pane_g1

0xcbb1,	// (0x00071314) mup_visualizer_pane_g2_ParamLimits

0xcbb1,	// (0x00071314) mup_visualizer_pane_g2

0xab57,	// (0x0006f2ba) mup_visualizer_pane_g3_ParamLimits

0xab57,	// (0x0006f2ba) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x00073aef) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x00073aef) mup_visualizer_pane_g

0xbfcd,	// (0x00070730) mup_volume_pane_g1

0xbfcd,	// (0x00070730) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00073812) mup_volume_pane_g

0xbfcd,	// (0x00070730) mup_progress_pane_g1

0xbfcd,	// (0x00070730) mup_progress_pane_g2

0xbfcd,	// (0x00070730) mup_progress_pane_g3

0x0002,

0xf393,	// (0x00073af6) mup_progress_pane_g

0xa873,	// (0x0006efd6) bg_popup_window_pane_cp05

0xcbbf,	// (0x00071322) heading_pane_cp02_ParamLimits

0xcbbf,	// (0x00071322) heading_pane_cp02

0xcbdb,	// (0x0007133e) list_popup_blid_pane

0xcbe3,	// (0x00071346) list_blid_sat_info_pane_ParamLimits

0xcbe3,	// (0x00071346) list_blid_sat_info_pane

0xcbf6,	// (0x00071359) list_blid_sat_info_pane_g1

0xcbfe,	// (0x00071361) list_blid_sat_info_pane_t1

0x2542,	// (0x00066ca5) mup_equalizer_pane_ParamLimits

0x2542,	// (0x00066ca5) mup_equalizer_pane

0x2563,	// (0x00066cc6) mup_equalizer_pane_cp1_ParamLimits

0x2563,	// (0x00066cc6) mup_equalizer_pane_cp1

0x2584,	// (0x00066ce7) mup_equalizer_pane_cp2_ParamLimits

0x2584,	// (0x00066ce7) mup_equalizer_pane_cp2

0x25a9,	// (0x00066d0c) mup_equalizer_pane_cp3_ParamLimits

0x25a9,	// (0x00066d0c) mup_equalizer_pane_cp3

0x25d2,	// (0x00066d35) mup_equalizer_pane_cp4_ParamLimits

0x25d2,	// (0x00066d35) mup_equalizer_pane_cp4

0x25fb,	// (0x00066d5e) mup_equalizer_pane_cp5

0x2613,	// (0x00066d76) mup_equalizer_pane_cp6

0x262b,	// (0x00066d8e) mup_equalizer_pane_cp7

0xddcd,	// (0x00072530) bg_popup_call_poc_act_pane_g9

0xddd5,	// (0x00072538) bg_popup_call_poc_act_pane_g10

0xdddd,	// (0x00072540) bg_popup_call_poc_act_pane_g11

0x000a,

0xaace,	// (0x0006f231) mup_scale_pane

0xaae6,	// (0x0006f249) mup_scale_pane_g1

0xcc0c,	// (0x0007136f) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x00073b12) mup_scale_pane_g

0xcc30,	// (0x00071393) msg_data_pane

0xcc38,	// (0x0007139b) scroll_pane_cp017

0x2655,	// (0x00066db8) bg_list_pane_cp04_ParamLimits

0x2655,	// (0x00066db8) bg_list_pane_cp04

0xcc40,	// (0x000713a3) msg_data_pane_g1

0x2673,	// (0x00066dd6) msg_data_pane_g2

0x267d,	// (0x00066de0) msg_data_pane_g3

0x2687,	// (0x00066dea) msg_data_pane_g4

0x268f,	// (0x00066df2) msg_data_pane_g5

0x2697,	// (0x00066dfa) msg_data_pane_g6

0x269f,	// (0x00066e02) msg_data_pane_g7

0x0006,

0xf3be,	// (0x00073b21) msg_data_pane_g

0x26a7,	// (0x00066e0a) msg_text_pane_ParamLimits

0x26a7,	// (0x00066e0a) msg_text_pane

0x26ec,	// (0x00066e4f) qrid_highlight_pane_cp011_ParamLimits

0x26ec,	// (0x00066e4f) qrid_highlight_pane_cp011

0xa873,	// (0x0006efd6) msg_body_pane

0xaace,	// (0x0006f231) msg_header_pane

0xcdf4,	// (0x00071557) input_focus_pane_cp07

0xce09,	// (0x0007156c) msg_header_pane_t1_ParamLimits

0xce09,	// (0x0007156c) msg_header_pane_t1

0xce25,	// (0x00071588) msg_header_pane_t2_ParamLimits

0xce25,	// (0x00071588) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x00073b35) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x00073b35) msg_header_pane_t

0xcc68,	// (0x000713cb) msg_body_pane_g1

0xce45,	// (0x000715a8) msg_body_pane_t1_ParamLimits

0xce45,	// (0x000715a8) msg_body_pane_t1

0xce76,	// (0x000715d9) msg_body_pane_t2_ParamLimits

0xce76,	// (0x000715d9) msg_body_pane_t2

0xce88,	// (0x000715eb) msg_body_pane_t3_ParamLimits

0xce88,	// (0x000715eb) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x00073b3a) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x00073b3a) msg_body_pane_t

0x274a,	// (0x00066ead) main_viewer_pane_g1_ParamLimits

0x274a,	// (0x00066ead) main_viewer_pane_g1

0x2758,	// (0x00066ebb) main_viewer_pane_g2_ParamLimits

0x2758,	// (0x00066ebb) main_viewer_pane_g2

0x2766,	// (0x00066ec9) main_viewer_pane_g3_ParamLimits

0x2766,	// (0x00066ec9) main_viewer_pane_g3

0x2775,	// (0x00066ed8) main_viewer_pane_g4_ParamLimits

0x2775,	// (0x00066ed8) main_viewer_pane_g4

0xacf4,	// (0x0006f457) main_viewer_pane_g5_ParamLimits

0xacf4,	// (0x0006f457) main_viewer_pane_g5

0xacf4,	// (0x0006f457) main_viewer_pane_g7_ParamLimits

0xacf4,	// (0x0006f457) main_viewer_pane_g7

0xad06,	// (0x0006f469) main_viewer_pane_g8_ParamLimits

0xad06,	// (0x0006f469) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x00073b4a) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x00073b4a) main_viewer_pane_g

0xcc70,	// (0x000713d3) viewer_content_pane_ParamLimits

0xcc70,	// (0x000713d3) viewer_content_pane

0x27b3,	// (0x00066f16) main_postcard_pane_g1_ParamLimits

0x27b3,	// (0x00066f16) main_postcard_pane_g1

0x27c9,	// (0x00066f2c) main_postcard_pane_g2_ParamLimits

0x27c9,	// (0x00066f2c) main_postcard_pane_g2

0x27df,	// (0x00066f42) main_postcard_pane_g3_ParamLimits

0x27df,	// (0x00066f42) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x00073b5b) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x00073b5b) main_postcard_pane_g

0x27f6,	// (0x00066f59) main_postcard_pane_g4

0xdf13,	// (0x00072676) smil_status_volume_pane_g2

0x2839,	// (0x00066f9c) postcard_pane_ParamLimits

0x2839,	// (0x00066f9c) postcard_pane

0xcc7e,	// (0x000713e1) postcard_pane_g1_ParamLimits

0xcc7e,	// (0x000713e1) postcard_pane_g1

0x2889,	// (0x00066fec) postcard_pane_g2_ParamLimits

0x2889,	// (0x00066fec) postcard_pane_g2

0x2895,	// (0x00066ff8) postcard_pane_g3_ParamLimits

0x2895,	// (0x00066ff8) postcard_pane_g3

0xcc8c,	// (0x000713ef) postcard_pane_g4_ParamLimits

0xcc8c,	// (0x000713ef) postcard_pane_g4

0x28a1,	// (0x00067004) postcard_pane_g5_ParamLimits

0x28a1,	// (0x00067004) postcard_pane_g5

0x28b6,	// (0x00067019) postcard_pane_g6_ParamLimits

0x28b6,	// (0x00067019) postcard_pane_g6

0xcc7e,	// (0x000713e1) postcard_pane_g7_ParamLimits

0xcc7e,	// (0x000713e1) postcard_pane_g7

0x0006,

0xf405,	// (0x00073b68) postcard_pane_g_ParamLimits

0xf405,	// (0x00073b68) postcard_pane_g

0x28ce,	// (0x00067031) main_mp2_pane_g1_ParamLimits

0x28ce,	// (0x00067031) main_mp2_pane_g1

0x28dc,	// (0x0006703f) main_mp2_pane_g2_ParamLimits

0x28dc,	// (0x0006703f) main_mp2_pane_g2

0x28e8,	// (0x0006704b) main_mp2_pane_g3_ParamLimits

0x28e8,	// (0x0006704b) main_mp2_pane_g3

0x0002,

0xf414,	// (0x00073b77) main_mp2_pane_g_ParamLimits

0xf414,	// (0x00073b77) main_mp2_pane_g

0x28f4,	// (0x00067057) main_mp2_pane_t1_ParamLimits

0x28f4,	// (0x00067057) main_mp2_pane_t1

0x290b,	// (0x0006706e) main_mp2_pane_t2_ParamLimits

0x290b,	// (0x0006706e) main_mp2_pane_t2

0x291d,	// (0x00067080) main_mp2_pane_t3_ParamLimits

0x291d,	// (0x00067080) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x00073b7e) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x00073b7e) main_mp2_pane_t

0xaaf0,	// (0x0006f253) pec_content_pane_ParamLimits

0xaaf0,	// (0x0006f253) pec_content_pane

0xa396,	// (0x0006eaf9) scroll_pane_cp015

0xcba3,	// (0x00071306) pec_attribute_pane_ParamLimits

0xcba3,	// (0x00071306) pec_attribute_pane

0xab57,	// (0x0006f2ba) pec_content_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) pec_content_pane_g1

0xcc9a,	// (0x000713fd) pec_content_pane_t1_ParamLimits

0xcc9a,	// (0x000713fd) pec_content_pane_t1

0xccae,	// (0x00071411) pec_content_pane_t2_ParamLimits

0xccae,	// (0x00071411) pec_content_pane_t2

0x0001,

0xf422,	// (0x00073b85) pec_content_pane_t_ParamLimits

0xf422,	// (0x00073b85) pec_content_pane_t

0xab49,	// (0x0006f2ac) list_single_graphic_pane_cp01_ParamLimits

0xab49,	// (0x0006f2ac) list_single_graphic_pane_cp01

0xaace,	// (0x0006f231) bg_popup_sub_pane_cp04

0xccc2,	// (0x00071425) popup_mup_playback_window_g1

0xccce,	// (0x00071431) popup_mup_playback_window_t1

0xcce3,	// (0x00071446) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x00073b8a) popup_mup_playback_window_t

0xcd1a,	// (0x0007147d) main_image_pane_g1_ParamLimits

0xcd1a,	// (0x0007147d) main_image_pane_g1

0xcd5d,	// (0x000714c0) scroll_pane_cp018_ParamLimits

0xcd5d,	// (0x000714c0) scroll_pane_cp018

0xcd75,	// (0x000714d8) scroll_pane_cp016_ParamLimits

0xcd75,	// (0x000714d8) scroll_pane_cp016

0x29e7,	// (0x0006714a) smil2_image_pane_ParamLimits

0x29e7,	// (0x0006714a) smil2_image_pane

0x2a1d,	// (0x00067180) smil2_root_pane_ParamLimits

0x2a1d,	// (0x00067180) smil2_root_pane

0x2a55,	// (0x000671b8) smil2_text_pane_ParamLimits

0x2a55,	// (0x000671b8) smil2_text_pane

0xa396,	// (0x0006eaf9) bg_list_pane_cp06

0xa396,	// (0x0006eaf9) grid_radio_pane

0xa873,	// (0x0006efd6) bg_popup_window_pane_cp06

0xc723,	// (0x00070e86) main_fmradio_pane_t1

0xdde5,	// (0x00072548) heading_pane_cp04

0xc723,	// (0x00070e86) main_fmradio_pane_t2

0xdded,	// (0x00072550) popup_cale_lunar_info_window_g1

0xc723,	// (0x00070e86) main_fmradio_pane_t3

0xddf5,	// (0x00072558) popup_cale_lunar_info_window_g2

0xc723,	// (0x00070e86) main_fmradio_pane_t4

0x0001,

0xc723,	// (0x00070e86) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x00073c5a) popup_cale_lunar_info_window_g

0xf287,	// (0x000739ea) main_fmradio_pane_t

0xa396,	// (0x0006eaf9) wait_bar_pane_cp03

0xab49,	// (0x0006f2ac) cell_fmradio_pane_ParamLimits

0xab49,	// (0x0006f2ac) cell_fmradio_pane

0xab57,	// (0x0006f2ba) cell_fmradio_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) cell_fmradio_pane_g1

0xa396,	// (0x0006eaf9) grid_highlight_pane_cp011

0xceb8,	// (0x0007161b) poc_content_pane_ParamLimits

0xceb8,	// (0x0007161b) poc_content_pane

0xceca,	// (0x0007162d) scroll_pane_cp019

0x2ae5,	// (0x00067248) popup_call_poc_act_window_ParamLimits

0x2ae5,	// (0x00067248) popup_call_poc_act_window

0x2b09,	// (0x0006726c) popup_call_poc_inact_window_ParamLimits

0x2b09,	// (0x0006726c) popup_call_poc_inact_window

0xf4d3,	// (0x00073c36) bg_popup_call_poc_act_pane_g

0xdd5d,	// (0x000724c0) bg_popup_call_poc_inact_pane_g1

0xdd65,	// (0x000724c8) bg_popup_call_poc_inact_pane_g2

0xced2,	// (0x00071635) popup_call_poc_act_window_g2

0xdd6d,	// (0x000724d0) bg_popup_call_poc_inact_pane_g3

0xdd75,	// (0x000724d8) bg_popup_call_poc_inact_pane_g4

0xdd7d,	// (0x000724e0) bg_popup_call_poc_inact_pane_g5

0xceda,	// (0x0007163d) popup_call_poc_act_window_t1_ParamLimits

0xceda,	// (0x0007163d) popup_call_poc_act_window_t1

0xcf02,	// (0x00071665) popup_call_poc_act_window_t2_ParamLimits

0xcf02,	// (0x00071665) popup_call_poc_act_window_t2

0xcf2a,	// (0x0007168d) popup_call_poc_act_window_t3_ParamLimits

0xcf2a,	// (0x0007168d) popup_call_poc_act_window_t3

0xcf52,	// (0x000716b5) popup_call_poc_act_window_t4_ParamLimits

0xcf52,	// (0x000716b5) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x00073b9f) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x00073b9f) popup_call_poc_act_window_t

0xdd85,	// (0x000724e8) bg_popup_call_poc_inact_pane_g6

0xdd8d,	// (0x000724f0) bg_popup_call_poc_inact_pane_g7

0xdd95,	// (0x000724f8) bg_popup_call_poc_inact_pane_g8

0xcf64,	// (0x000716c7) popup_call_poc_inact_window_g2

0xdd9d,	// (0x00072500) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x00073c23) bg_popup_call_poc_inact_pane_g

0xcf6c,	// (0x000716cf) popup_call_poc_inact_window_t1_ParamLimits

0xcf6c,	// (0x000716cf) popup_call_poc_inact_window_t1

0xcf81,	// (0x000716e4) popup_call_poc_inact_window_t2_ParamLimits

0xcf81,	// (0x000716e4) popup_call_poc_inact_window_t2

0xcf96,	// (0x000716f9) popup_call_poc_inact_window_t3_ParamLimits

0xcf96,	// (0x000716f9) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x00073ba8) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x00073ba8) popup_call_poc_inact_window_t

0xde8b,	// (0x000725ee) context_pane_ParamLimits

0x336d,	// (0x00067ad0) signal_pane_ParamLimits

0xc1c9,	// (0x0007092c) main_call2_pane

0xad4f,	// (0x0006f4b2) popup_phob_thumbnail2_window_ParamLimits

0xad4f,	// (0x0006f4b2) popup_phob_thumbnail2_window

0xacdc,	// (0x0006f43f) aid_hotspot_pointer_arrow_pane

0xace4,	// (0x0006f447) aid_hotspot_pointer_hand_pane

0x2e08,	// (0x0006756b) phob_pre_status_pane_g5

0xaaf0,	// (0x0006f253) cams_zoom_pane_ParamLimits

0xaaf0,	// (0x0006f253) image_vga_pane_ParamLimits

0xab57,	// (0x0006f2ba) main_camera_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) main_camera_pane_g2_ParamLimits

0xab57,	// (0x0006f2ba) main_camera_pane_g3_ParamLimits

0xab57,	// (0x0006f2ba) main_camera_pane_g4_ParamLimits

0xab57,	// (0x0006f2ba) main_camera_pane_g5_ParamLimits

0xab57,	// (0x0006f2ba) main_camera_pane_g6_ParamLimits

0xab57,	// (0x0006f2ba) main_camera_pane_g7_ParamLimits

0xf180,	// (0x000738e3) main_camera_pane_g_ParamLimits

0xbfd7,	// (0x0007073a) main_camera_pane_t1_ParamLimits

0xbfd7,	// (0x0007073a) main_camera_pane_t2_ParamLimits

0xf191,	// (0x000738f4) main_camera_pane_t_ParamLimits

0xaace,	// (0x0006f231) bg_popup_preview_window_pane_cp01_ParamLimits

0xaace,	// (0x0006f231) bg_popup_preview_window_pane_cp01

0xcfab,	// (0x0007170e) popup_phob_thumbnail2_window_g1_ParamLimits

0xcfab,	// (0x0007170e) popup_phob_thumbnail2_window_g1

0xa873,	// (0x0006efd6) call2_cli_visual_pane

0x2b3d,	// (0x000672a0) popup_call2_audio_conf_window_ParamLimits

0x2b3d,	// (0x000672a0) popup_call2_audio_conf_window

0x2b65,	// (0x000672c8) popup_call2_audio_first_window_ParamLimits

0x2b65,	// (0x000672c8) popup_call2_audio_first_window

0x2bfb,	// (0x0006735e) popup_call2_audio_in_window_ParamLimits

0x2bfb,	// (0x0006735e) popup_call2_audio_in_window

0x2c47,	// (0x000673aa) popup_call2_audio_out_window_ParamLimits

0x2c47,	// (0x000673aa) popup_call2_audio_out_window

0x2cb9,	// (0x0006741c) popup_call2_audio_second_window_ParamLimits

0x2cb9,	// (0x0006741c) popup_call2_audio_second_window

0x2d1f,	// (0x00067482) popup_call2_audio_wait_window_ParamLimits

0x2d1f,	// (0x00067482) popup_call2_audio_wait_window

0xa873,	// (0x0006efd6) bg_popup_call2_act_pane_cp03

0xaab0,	// (0x0006f213) list_conf_pane_cp

0xcfb7,	// (0x0007171a) popup_call2_audio_conf_window_t1

0xcfc5,	// (0x00071728) list_single_graphic_popup_conf2_pane_ParamLimits

0xcfc5,	// (0x00071728) list_single_graphic_popup_conf2_pane

0xc90d,	// (0x00071070) list_highlight_pane_cp04

0xcfd8,	// (0x0007173b) list_single_graphic_popup_conf2_pane_g1

0xc91e,	// (0x00071081) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x00073baf) list_single_graphic_popup_conf2_pane_g

0xcfe2,	// (0x00071745) list_single_graphic_popup_conf2_pane_t1

0xcff0,	// (0x00071753) bg_popup_call2_act_pane_cp01_ParamLimits

0xcff0,	// (0x00071753) bg_popup_call2_act_pane_cp01

0xd07a,	// (0x000717dd) call_type_pane_cp05_ParamLimits

0xd07a,	// (0x000717dd) call_type_pane_cp05

0xd0ce,	// (0x00071831) popup_call2_audio_second_window_g1_ParamLimits

0xd0ce,	// (0x00071831) popup_call2_audio_second_window_g1

0xd122,	// (0x00071885) popup_call2_audio_second_window_g2_ParamLimits

0xd122,	// (0x00071885) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x00073bb4) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x00073bb4) popup_call2_audio_second_window_g

0xd187,	// (0x000718ea) popup_call2_audio_second_window_t1_ParamLimits

0xd187,	// (0x000718ea) popup_call2_audio_second_window_t1

0xd242,	// (0x000719a5) popup_call2_audio_second_window_t2_ParamLimits

0xd242,	// (0x000719a5) popup_call2_audio_second_window_t2

0xd295,	// (0x000719f8) popup_call2_audio_second_window_t3_ParamLimits

0xd295,	// (0x000719f8) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x00073bbb) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x00073bbb) popup_call2_audio_second_window_t

0xa873,	// (0x0006efd6) bg_popup_call2_in_pane_cp02

0xa87d,	// (0x0006efe0) call_type_pane_cp04

0x2d59,	// (0x000674bc) popup_call2_audio_wait_window_g1

0x2d61,	// (0x000674c4) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x00073bc4) popup_call2_audio_wait_window_g

0xa895,	// (0x0006eff8) popup_call2_audio_wait_window_t3

0xd388,	// (0x00071aeb) bg_popup_call2_act_pane_ParamLimits

0xd388,	// (0x00071aeb) bg_popup_call2_act_pane

0xd448,	// (0x00071bab) call_type_pane_cp03_ParamLimits

0xd448,	// (0x00071bab) call_type_pane_cp03

0xd4ac,	// (0x00071c0f) popup_call2_audio_first_window_g1_ParamLimits

0xd4ac,	// (0x00071c0f) popup_call2_audio_first_window_g1

0xd51c,	// (0x00071c7f) popup_call2_audio_first_window_g2_ParamLimits

0xd51c,	// (0x00071c7f) popup_call2_audio_first_window_g2

0xcd8b,	// (0x000714ee) popup_call2_audio_first_window_g3_ParamLimits

0xcd8b,	// (0x000714ee) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x00073bc9) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x00073bc9) popup_call2_audio_first_window_g

0xd5fa,	// (0x00071d5d) popup_call2_audio_first_window_t1_ParamLimits

0xd5fa,	// (0x00071d5d) popup_call2_audio_first_window_t1

0xd6fd,	// (0x00071e60) popup_call2_audio_first_window_t4_ParamLimits

0xd6fd,	// (0x00071e60) popup_call2_audio_first_window_t4

0xd7e0,	// (0x00071f43) popup_call2_audio_first_window_t5_ParamLimits

0xd7e0,	// (0x00071f43) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x00073bd4) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x00073bd4) popup_call2_audio_first_window_t

0xaac6,	// (0x0006f229) bg_popup_call2_act_pane_g1

0xddff,	// (0x00072562) popup_cale_lunar_info_window_t1

0xde0d,	// (0x00072570) popup_cale_lunar_info_window_t2

0xde1b,	// (0x0007257e) popup_cale_lunar_info_window_t3

0xa873,	// (0x0006efd6) bg_popup_call2_bubble_pane

0xd8e1,	// (0x00072044) bg_popup_call2_in_pane_cp01_ParamLimits

0xd8e1,	// (0x00072044) bg_popup_call2_in_pane_cp01

0xa54f,	// (0x0006ecb2) call_type_pane_cp02

0x2d69,	// (0x000674cc) popup_call2_audio_out_window_g1_ParamLimits

0x2d69,	// (0x000674cc) popup_call2_audio_out_window_g1

0xd929,	// (0x0007208c) popup_call2_audio_out_window_g2_ParamLimits

0xd929,	// (0x0007208c) popup_call2_audio_out_window_g2

0x2d95,	// (0x000674f8) popup_call2_audio_out_window_g3_ParamLimits

0x2d95,	// (0x000674f8) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x00073bdd) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x00073bdd) popup_call2_audio_out_window_g

0xd960,	// (0x000720c3) popup_call2_audio_out_window_t1_ParamLimits

0xd960,	// (0x000720c3) popup_call2_audio_out_window_t1

0xd9bf,	// (0x00072122) popup_call2_audio_out_window_t2_ParamLimits

0xd9bf,	// (0x00072122) popup_call2_audio_out_window_t2

0xda13,	// (0x00072176) popup_call2_audio_out_window_t3_ParamLimits

0xda13,	// (0x00072176) popup_call2_audio_out_window_t3

0xda29,	// (0x0007218c) popup_call2_audio_out_window_t4_ParamLimits

0xda29,	// (0x0007218c) popup_call2_audio_out_window_t4

0xda3f,	// (0x000721a2) popup_call2_audio_out_window_t5_ParamLimits

0xda3f,	// (0x000721a2) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x00073be6) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x00073be6) popup_call2_audio_out_window_t

0xdaa3,	// (0x00072206) bg_popup_call2_in_pane_ParamLimits

0xdaa3,	// (0x00072206) bg_popup_call2_in_pane

0xdaff,	// (0x00072262) popup_call2_audio_in_window_g1_ParamLimits

0xdaff,	// (0x00072262) popup_call2_audio_in_window_g1

0xdb37,	// (0x0007229a) popup_call2_audio_in_window_g2_ParamLimits

0xdb37,	// (0x0007229a) popup_call2_audio_in_window_g2

0xdb6f,	// (0x000722d2) popup_call2_audio_in_window_g3_ParamLimits

0xdb6f,	// (0x000722d2) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x00073bf3) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x00073bf3) popup_call2_audio_in_window_g

0xdbc7,	// (0x0007232a) popup_call2_audio_in_window_t1_ParamLimits

0xdbc7,	// (0x0007232a) popup_call2_audio_in_window_t1

0xdc47,	// (0x000723aa) popup_call2_audio_in_window_t2_ParamLimits

0xdc47,	// (0x000723aa) popup_call2_audio_in_window_t2

0xdcc7,	// (0x0007242a) popup_call2_audio_in_window_t3_ParamLimits

0xdcc7,	// (0x0007242a) popup_call2_audio_in_window_t3

0xdce1,	// (0x00072444) popup_call2_audio_in_window_t4_ParamLimits

0xdce1,	// (0x00072444) popup_call2_audio_in_window_t4

0xdcf3,	// (0x00072456) popup_call2_audio_in_window_t5_ParamLimits

0xdcf3,	// (0x00072456) popup_call2_audio_in_window_t5

0xdd08,	// (0x0007246b) popup_call2_audio_in_window_t6_ParamLimits

0xdd08,	// (0x0007246b) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x00073bfc) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x00073bfc) popup_call2_audio_in_window_t

0xaac6,	// (0x0006f229) bg_popup_call2_in_pane_g1

0xde29,	// (0x0007258c) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x00073c5f) popup_cale_lunar_info_window_t

0xaace,	// (0x0006f231) bg_popup_call2_rect_pane_ParamLimits

0xaace,	// (0x0006f231) bg_popup_call2_rect_pane

0xa873,	// (0x0006efd6) call2_cli_visual_graphic_pane

0xa873,	// (0x0006efd6) call2_cli_visual_text_pane

0xad76,	// (0x0006f4d9) smil_status_volume_pane_g3

0x0002,

0xaae6,	// (0x0006f249) call2_cli_visual_graphic_pane_g1

0xaae6,	// (0x0006f249) call2_cli_visual_graphic_pane_g2

0xaae6,	// (0x0006f249) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x00073c09) call2_cli_visual_graphic_pane_g

0xdd1d,	// (0x00072480) bg_popup_call2_rect_pane_g1

0xc102,	// (0x00070865) bg_popup_call2_rect_pane_g2

0xdd25,	// (0x00072488) bg_popup_call2_rect_pane_g3

0xdd2d,	// (0x00072490) bg_popup_call2_rect_pane_g4

0xdd35,	// (0x00072498) bg_popup_call2_rect_pane_g5

0xdd3d,	// (0x000724a0) bg_popup_call2_rect_pane_g6

0xdd45,	// (0x000724a8) bg_popup_call2_rect_pane_g7

0xdd4d,	// (0x000724b0) bg_popup_call2_rect_pane_g8

0xdd55,	// (0x000724b8) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x00073c10) bg_popup_call2_rect_pane_g

0xdd5d,	// (0x000724c0) bg_popup_call2_bubble_pane_g1

0xdd65,	// (0x000724c8) bg_popup_call2_bubble_pane_g2

0xdd6d,	// (0x000724d0) bg_popup_call2_bubble_pane_g3

0xdd75,	// (0x000724d8) bg_popup_call2_bubble_pane_g4

0xdd7d,	// (0x000724e0) bg_popup_call2_bubble_pane_g5

0xdd85,	// (0x000724e8) bg_popup_call2_bubble_pane_g6

0xdd8d,	// (0x000724f0) bg_popup_call2_bubble_pane_g7

0xdd95,	// (0x000724f8) bg_popup_call2_bubble_pane_g8

0xdd9d,	// (0x00072500) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x00073c23) bg_popup_call2_bubble_pane_g

0x06b5,	// (0x00064e18) aid_cale_week_size_cell_pane

0x0cf9,	// (0x0006545c) aid_cams_cif_uncrop_pane_ParamLimits

0x0cf9,	// (0x0006545c) aid_cams_cif_uncrop_pane

0xaaf0,	// (0x0006f253) aid_cams_size_cell_ParamLimits

0xaaf0,	// (0x0006f253) aid_cams_size_cell

0xaaf0,	// (0x0006f253) grid_cams_pane_ParamLimits

0xaaf0,	// (0x0006f253) linegrid_cams_pane_ParamLimits

0x0f0c,	// (0x0006566f) call_video_pane_t1

0x0f26,	// (0x00065689) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00073940) call_video_pane_t

0x135e,	// (0x00065ac1) aid_cale_month_size_cell_pane_ParamLimits

0x135e,	// (0x00065ac1) aid_cale_month_size_cell_pane

0xf540,	// (0x00073ca3) smil_status_volume_pane_g

0xad83,	// (0x0006f4e6) volume_smil_pane_ParamLimits

0xa3a8,	// (0x0006eb0b) aid_popup2_width_pane

0x0616,	// (0x00064d79) cell_qdial_pane_g4_ParamLimits

0x0616,	// (0x00064d79) cell_qdial_pane_g4

0x2261,	// (0x000669c4) aid_blid_cardinal_pane_ParamLimits

0x226d,	// (0x000669d0) aid_blid_destination_pane_ParamLimits

0x226d,	// (0x000669d0) aid_blid_destination_pane

0xaace,	// (0x0006f231) bg_popup_call_poc_act_pane_ParamLimits

0xaace,	// (0x0006f231) bg_popup_call_poc_act_pane

0xaace,	// (0x0006f231) bg_popup_call_poc_inact_pane_ParamLimits

0xaace,	// (0x0006f231) bg_popup_call_poc_inact_pane

0xdda5,	// (0x00072508) bg_popup_call_poc_act_pane_g1

0xddad,	// (0x00072510) bg_popup_call_poc_act_pane_g2

0xddb5,	// (0x00072518) bg_popup_call_poc_act_pane_g3

0xdd75,	// (0x000724d8) bg_popup_call_poc_act_pane_g4

0xdd7d,	// (0x000724e0) bg_popup_call_poc_act_pane_g5

0xddbd,	// (0x00072520) bg_popup_call_poc_act_pane_g6

0xdd8d,	// (0x000724f0) bg_popup_call_poc_act_pane_g7

0xddc5,	// (0x00072528) bg_popup_call_poc_act_pane_g8

0xa873,	// (0x0006efd6) main_usb_pane

0xad26,	// (0x0006f489) popup_cale_lunar_info_window

0x11f3,	// (0x00065956) im_reading_pane_t1_ParamLimits

0xc28e,	// (0x000709f1) list_im_pane_ParamLimits

0xc29f,	// (0x00070a02) scroll_pane_cp07_ParamLimits

0xa873,	// (0x0006efd6) grid_highlight_pane_cp012

0xaace,	// (0x0006f231) mup_scale_pane_ParamLimits

0xab57,	// (0x0006f2ba) main_usb_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) main_usb_pane_g1

0xab57,	// (0x0006f2ba) main_usb_pane_g2_ParamLimits

0xab57,	// (0x0006f2ba) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x0007391f) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x0007391f) main_usb_pane_g

0xbfd7,	// (0x0007073a) main_usb_pane_t1_ParamLimits

0xbfd7,	// (0x0007073a) main_usb_pane_t1

0xbfd7,	// (0x0007073a) main_usb_pane_t2_ParamLimits

0xbfd7,	// (0x0007073a) main_usb_pane_t2

0xbfd7,	// (0x0007073a) main_usb_pane_t3_ParamLimits

0xbfd7,	// (0x0007073a) main_usb_pane_t3

0xbfd7,	// (0x0007073a) main_usb_pane_t4_ParamLimits

0xbfd7,	// (0x0007073a) main_usb_pane_t4

0xbfd7,	// (0x0007073a) main_usb_pane_t5_ParamLimits

0xbfd7,	// (0x0007073a) main_usb_pane_t5

0xbfd7,	// (0x0007073a) main_usb_pane_t6_ParamLimits

0xbfd7,	// (0x0007073a) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x00073c4d) main_usb_pane_t_ParamLimits

0x2200,	// (0x00066963) aid_text_placing

0x220b,	// (0x0006696e) main_location2_pane_t1_ParamLimits

0x2221,	// (0x00066984) main_location2_pane_t2_ParamLimits

0x2237,	// (0x0006699a) main_location2_pane_t3_ParamLimits

0x224d,	// (0x000669b0) main_location2_pane_t4_ParamLimits

0x224d,	// (0x000669b0) main_location2_pane_t4

0xf319,	// (0x00073a7c) main_location2_pane_t_ParamLimits

0xab0a,	// (0x0006f26d) find_pinb_pane_g2_ParamLimits

0xab0a,	// (0x0006f26d) find_pinb_pane_g2

0x0001,

0xf095,	// (0x000737f8) find_pinb_pane_g_ParamLimits

0xf095,	// (0x000737f8) find_pinb_pane_g

0xab16,	// (0x0006f279) find_pinb_pane_t1_ParamLimits

0xab28,	// (0x0006f28b) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x000737fd) find_pinb_pane_t_ParamLimits

0xa873,	// (0x0006efd6) main_call3_pane

0x1963,	// (0x000660c6) cale_month_day_heading_pane_t1_ParamLimits

0x19e9,	// (0x0006614c) cale_month_day_heading_pane_t2_ParamLimits

0x1a62,	// (0x000661c5) cale_month_day_heading_pane_t3_ParamLimits

0x1adb,	// (0x0006623e) cale_month_day_heading_pane_t4_ParamLimits

0x1b5c,	// (0x000662bf) cale_month_day_heading_pane_t5_ParamLimits

0x1be5,	// (0x00066348) cale_month_day_heading_pane_t6_ParamLimits

0x1c76,	// (0x000663d9) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00073978) cale_month_day_heading_pane_t_ParamLimits

0xc4f8,	// (0x00070c5b) smil_status_volume_pane

0x285d,	// (0x00066fc0) postcard_address_pane_ParamLimits

0x285d,	// (0x00066fc0) postcard_address_pane

0x2873,	// (0x00066fd6) postcard_message_pane_ParamLimits

0x2873,	// (0x00066fd6) postcard_message_pane

0x2dc1,	// (0x00067524) call2_cli_visual_pane_t1_ParamLimits

0x2dc1,	// (0x00067524) call2_cli_visual_pane_t1

0xdf3e,	// (0x000726a1) postcard_message_pane_t1_ParamLimits

0xdf3e,	// (0x000726a1) postcard_message_pane_t1

0xdf26,	// (0x00072689) postcard_address_pane_t1_ParamLimits

0xdf26,	// (0x00072689) postcard_address_pane_t1

0x3529,	// (0x00067c8c) popup_call3_audio_in_window_ParamLimits

0x3529,	// (0x00067c8c) popup_call3_audio_in_window

0x33ae,	// (0x00067b11) bg_popup_call3_in_pane_ParamLimits

0x33ae,	// (0x00067b11) bg_popup_call3_in_pane

0x342a,	// (0x00067b8d) popup_call3_audio_in_window_g1_ParamLimits

0x342a,	// (0x00067b8d) popup_call3_audio_in_window_g1

0x344a,	// (0x00067bad) popup_call3_audio_in_window_g2_ParamLimits

0x344a,	// (0x00067bad) popup_call3_audio_in_window_g2

0x346a,	// (0x00067bcd) popup_call3_audio_in_window_g3_ParamLimits

0x346a,	// (0x00067bcd) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x00073caa) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x00073caa) popup_call3_audio_in_window_g

0x349b,	// (0x00067bfe) popup_call3_audio_in_window_t1_ParamLimits

0x349b,	// (0x00067bfe) popup_call3_audio_in_window_t1

0x34d9,	// (0x00067c3c) popup_call3_audio_in_window_t2_ParamLimits

0x34d9,	// (0x00067c3c) popup_call3_audio_in_window_t2

0x3517,	// (0x00067c7a) popup_call3_audio_in_window_t3_ParamLimits

0x3517,	// (0x00067c7a) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x00073cb3) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x00073cb3) popup_call3_audio_in_window_t

0xc1c9,	// (0x0007092c) bg_popup_call3_rect_pane

0xdd1d,	// (0x00072480) bg_popup_call3_rect_pane_g1

0xc102,	// (0x00070865) bg_popup_call3_rect_pane_g2

0xdd25,	// (0x00072488) bg_popup_call3_rect_pane_g3

0xdd2d,	// (0x00072490) bg_popup_call3_rect_pane_g4

0xdd35,	// (0x00072498) bg_popup_call3_rect_pane_g5

0xdd3d,	// (0x000724a0) bg_popup_call3_rect_pane_g6

0xdd45,	// (0x000724a8) bg_popup_call3_rect_pane_g7

0xa396,	// (0x0006eaf9) mup_visualizer_osc_pane

0xa396,	// (0x0006eaf9) mup_visualizer_spec_pane

0x33de,	// (0x00067b41) call3_video_qcif_pane_ParamLimits

0x33de,	// (0x00067b41) call3_video_qcif_pane

0x33f1,	// (0x00067b54) call3_video_qcif_uncrop_pane_ParamLimits

0x33f1,	// (0x00067b54) call3_video_qcif_uncrop_pane

0x3401,	// (0x00067b64) call3_video_subqcif_pane_ParamLimits

0x3401,	// (0x00067b64) call3_video_subqcif_pane

0x3417,	// (0x00067b7a) call3_video_subqcif_uncrop_pane_ParamLimits

0x3417,	// (0x00067b7a) call3_video_subqcif_uncrop_pane

0x348a,	// (0x00067bed) popup_call3_audio_in_window_g4_ParamLimits

0x348a,	// (0x00067bed) popup_call3_audio_in_window_g4

0xa396,	// (0x0006eaf9) mup_spec_half_pane

0xa396,	// (0x0006eaf9) mup_spec_half_pane_cp

0xa396,	// (0x0006eaf9) mup_osc_middle_pane

0xbfcd,	// (0x00070730) mup_visualizer_osc_pane_g1

0xded9,	// (0x0007263c) mup_spec_bar_pane_ParamLimits

0xded9,	// (0x0007263c) mup_spec_bar_pane

0xbfcd,	// (0x00070730) mup_spec_bar_pane_g1

0xbfcd,	// (0x00070730) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00073812) mup_spec_bar_pane_g

0x06b5,	// (0x00064e18) aid_cale_week_size_cell_pane_ParamLimits

0x06cf,	// (0x00064e32) bg_cale_heading_pane_ParamLimits

0x06f3,	// (0x00064e56) bg_cale_pane_cp01_ParamLimits

0x0710,	// (0x00064e73) cale_week_corner_pane_ParamLimits

0x072f,	// (0x00064e92) cale_week_day_heading_pane_ParamLimits

0x0758,	// (0x00064ebb) cale_week_scroll_pane_g1_ParamLimits

0x0777,	// (0x00064eda) cale_week_scroll_pane_g2_ParamLimits

0x078f,	// (0x00064ef2) cale_week_scroll_pane_g3_ParamLimits

0x07a7,	// (0x00064f0a) cale_week_scroll_pane_g4_ParamLimits

0x07bf,	// (0x00064f22) cale_week_scroll_pane_g5_ParamLimits

0x07df,	// (0x00064f42) cale_week_scroll_pane_g6_ParamLimits

0x07ff,	// (0x00064f62) cale_week_scroll_pane_g7_ParamLimits

0x0823,	// (0x00064f86) cale_week_scroll_pane_g8_ParamLimits

0x0847,	// (0x00064faa) cale_week_scroll_pane_g9_ParamLimits

0x085f,	// (0x00064fc2) cale_week_scroll_pane_g10_ParamLimits

0x0877,	// (0x00064fda) cale_week_scroll_pane_g11_ParamLimits

0x088f,	// (0x00064ff2) cale_week_scroll_pane_g12_ParamLimits

0x08b3,	// (0x00065016) cale_week_scroll_pane_g13_ParamLimits

0x08b3,	// (0x00065016) cale_week_scroll_pane_g14_ParamLimits

0x08b3,	// (0x00065016) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00073889) cale_week_scroll_pane_g_ParamLimits

0x08fb,	// (0x0006505e) cale_week_time_pane_ParamLimits

0x091f,	// (0x00065082) grid_cale_week_pane_ParamLimits

0xc13f,	// (0x000708a2) listscroll_cale_week_pane_t1

0xc151,	// (0x000708b4) scroll_pane_cp08_ParamLimits

0x13d6,	// (0x00065b39) cale_month_corner_pane_ParamLimits

0xc4ce,	// (0x00070c31) cale_month_pane_t1

0x18de,	// (0x00066041) cale_month_week_pane_ParamLimits

0x2040,	// (0x000667a3) popup_call_status_window_g1_ParamLimits

0x2054,	// (0x000667b7) popup_call_status_window_g2_ParamLimits

0x2068,	// (0x000667cb) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x00073a03) popup_call_status_window_g_ParamLimits

0xc89a,	// (0x00070ffd) aid_call2_pane

0x2702,	// (0x00066e65) msg_header_pane_g1

0x285d,	// (0x00066fc0) postcard_address2_pane_ParamLimits

0x285d,	// (0x00066fc0) postcard_address2_pane

0x2873,	// (0x00066fd6) postcard_message2_pane_ParamLimits

0x2873,	// (0x00066fd6) postcard_message2_pane

0x337b,	// (0x00067ade) message2_row_pane_ParamLimits

0x337b,	// (0x00067ade) message2_row_pane

0x339b,	// (0x00067afe) address2_row_pane_ParamLimits

0x339b,	// (0x00067afe) address2_row_pane

0xdea6,	// (0x00072609) postcard_message2_row_pane_g1

0xdeae,	// (0x00072611) postcard_message2_row_pane_t1

0xdea6,	// (0x00072609) address2_row_pane_g1

0xdeae,	// (0x00072611) address2_row_pane_t1

0x0c8c,	// (0x000653ef) aid_size_cell_vorec

0xa873,	// (0x0006efd6) main_rss_pane

0xdebc,	// (0x0007261f) rss_list_single_pane_ParamLimits

0xdebc,	// (0x0007261f) rss_list_single_pane

0xdeca,	// (0x0007262d) rss_list_single_pane_t1

0xdeca,	// (0x0007262d) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x00073c9e) rss_list_single_pane_t

0xa873,	// (0x0006efd6) main_camera2_pane

0xa873,	// (0x0006efd6) main_video2_pane

0xad98,	// (0x0006f4fb) cams_zoom_pane_cp2_ParamLimits

0xad98,	// (0x0006f4fb) cams_zoom_pane_cp2

0xad98,	// (0x0006f4fb) image2_vga_pane_ParamLimits

0xad98,	// (0x0006f4fb) image2_vga_pane

0xada6,	// (0x0006f509) main_camera2_pane_g1_ParamLimits

0xada6,	// (0x0006f509) main_camera2_pane_g1

0xada6,	// (0x0006f509) main_camera2_pane_g2_ParamLimits

0xada6,	// (0x0006f509) main_camera2_pane_g2

0xada6,	// (0x0006f509) main_camera2_pane_g3_ParamLimits

0xada6,	// (0x0006f509) main_camera2_pane_g3

0xada6,	// (0x0006f509) main_camera2_pane_g4_ParamLimits

0xada6,	// (0x0006f509) main_camera2_pane_g4

0xada6,	// (0x0006f509) main_camera2_pane_g5_ParamLimits

0xada6,	// (0x0006f509) main_camera2_pane_g5

0xada6,	// (0x0006f509) main_camera2_pane_g6_ParamLimits

0xada6,	// (0x0006f509) main_camera2_pane_g6

0xada6,	// (0x0006f509) main_camera2_pane_g7_ParamLimits

0xada6,	// (0x0006f509) main_camera2_pane_g7

0xada6,	// (0x0006f509) main_camera2_pane_g8_ParamLimits

0xada6,	// (0x0006f509) main_camera2_pane_g8

0x0008,

0xf557,	// (0x00073cba) main_camera2_pane_g_ParamLimits

0xf557,	// (0x00073cba) main_camera2_pane_g

0x354b,	// (0x00067cae) main_camera2_pane_t1_ParamLimits

0x354b,	// (0x00067cae) main_camera2_pane_t1

0x354b,	// (0x00067cae) main_camera2_pane_t2_ParamLimits

0x354b,	// (0x00067cae) main_camera2_pane_t2

0x354b,	// (0x00067cae) main_camera2_pane_t3_ParamLimits

0x354b,	// (0x00067cae) main_camera2_pane_t3

0x354b,	// (0x00067cae) main_camera2_pane_t4_ParamLimits

0x354b,	// (0x00067cae) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x00073ccd) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x00073ccd) main_camera2_pane_t

0xadea,	// (0x0006f54d) cams_zoom_pane_cp4_ParamLimits

0xadea,	// (0x0006f54d) cams_zoom_pane_cp4

0x355f,	// (0x00067cc2) image2_cif_pane_ParamLimits

0x355f,	// (0x00067cc2) image2_cif_pane

0xa413,	// (0x0006eb76) image2_subqcif_pane_ParamLimits

0xa413,	// (0x0006eb76) image2_subqcif_pane

0x356d,	// (0x00067cd0) main_video2_pane_g1_ParamLimits

0x356d,	// (0x00067cd0) main_video2_pane_g1

0x356d,	// (0x00067cd0) main_video2_pane_g2_ParamLimits

0x356d,	// (0x00067cd0) main_video2_pane_g2

0x356d,	// (0x00067cd0) main_video2_pane_g3_ParamLimits

0x356d,	// (0x00067cd0) main_video2_pane_g3

0x356d,	// (0x00067cd0) main_video2_pane_g4_ParamLimits

0x356d,	// (0x00067cd0) main_video2_pane_g4

0x356d,	// (0x00067cd0) main_video2_pane_g5_ParamLimits

0x356d,	// (0x00067cd0) main_video2_pane_g5

0x356d,	// (0x00067cd0) main_video2_pane_g6_ParamLimits

0x356d,	// (0x00067cd0) main_video2_pane_g6

0x0005,

0xf579,	// (0x00073cdc) main_video2_pane_g_ParamLimits

0xf579,	// (0x00073cdc) main_video2_pane_g

0x357b,	// (0x00067cde) main_video2_pane_t1_ParamLimits

0x357b,	// (0x00067cde) main_video2_pane_t1

0x357b,	// (0x00067cde) main_video2_pane_t2_ParamLimits

0x357b,	// (0x00067cde) main_video2_pane_t2

0x357b,	// (0x00067cde) main_video2_pane_t3_ParamLimits

0x357b,	// (0x00067cde) main_video2_pane_t3

0x0002,

0xf586,	// (0x00073ce9) main_video2_pane_t_ParamLimits

0xf586,	// (0x00073ce9) main_video2_pane_t

0x2e6c,	// (0x000675cf) call_muted_g2

0x0001,

0xf52d,	// (0x00073c90) call_muted_g

0xa873,	// (0x0006efd6) main_mup2_pane

0xcdca,	// (0x0007152d) main_mup2_pane_g1_ParamLimits

0xcdca,	// (0x0007152d) main_mup2_pane_g1

0xcdca,	// (0x0007152d) main_mup2_pane_g2_ParamLimits

0xcdca,	// (0x0007152d) main_mup2_pane_g2

0x363c,	// (0x00067d9f) main_mup_pane_g13_cp1

0xa421,	// (0x0006eb84) mup_volume_pane_cp1

0xcdca,	// (0x0007152d) main_mup2_pane_g4_ParamLimits

0xcdca,	// (0x0007152d) main_mup2_pane_g4

0xcdca,	// (0x0007152d) main_mup2_pane_g5_ParamLimits

0xcdca,	// (0x0007152d) main_mup2_pane_g5

0xcdca,	// (0x0007152d) main_mup2_pane_g6_ParamLimits

0xcdca,	// (0x0007152d) main_mup2_pane_g6

0xcdca,	// (0x0007152d) main_mup2_pane_g7_ParamLimits

0xcdca,	// (0x0007152d) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x00073cf0) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x00073cf0) main_mup2_pane_g

0xcdd8,	// (0x0007153b) main_mup2_pane_t1_ParamLimits

0xcdd8,	// (0x0007153b) main_mup2_pane_t1

0xcdd8,	// (0x0007153b) main_mup2_pane_t2_ParamLimits

0xcdd8,	// (0x0007153b) main_mup2_pane_t2

0xcdd8,	// (0x0007153b) main_mup2_pane_t3_ParamLimits

0xcdd8,	// (0x0007153b) main_mup2_pane_t3

0xcdd8,	// (0x0007153b) main_mup2_pane_t4_ParamLimits

0xcdd8,	// (0x0007153b) main_mup2_pane_t4

0xcdd8,	// (0x0007153b) main_mup2_pane_t5_ParamLimits

0xcdd8,	// (0x0007153b) main_mup2_pane_t5

0xcdd8,	// (0x0007153b) main_mup2_pane_t6_ParamLimits

0xcdd8,	// (0x0007153b) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x00073cff) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x00073cff) main_mup2_pane_t

0xcba3,	// (0x00071306) mup2_visualizer_pane_ParamLimits

0xcba3,	// (0x00071306) mup2_visualizer_pane

0xcba3,	// (0x00071306) mup_progress_pane_cp_ParamLimits

0xcba3,	// (0x00071306) mup_progress_pane_cp

0xae0e,	// (0x0006f571) mup_volume_pane_cp_ParamLimits

0xae0e,	// (0x0006f571) mup_volume_pane_cp

0xab57,	// (0x0006f2ba) mup2_visualizer_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) mup2_visualizer_pane_g1

0xab65,	// (0x0006f2c8) mup2_visualizer_pane_g2_ParamLimits

0xab65,	// (0x0006f2c8) mup2_visualizer_pane_g2

0xab65,	// (0x0006f2c8) mup2_visualizer_pane_g3_ParamLimits

0xab65,	// (0x0006f2c8) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00073802) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00073802) mup2_visualizer_pane_g

0xa396,	// (0x0006eaf9) aid_size_cell_fmradio

0x301c,	// (0x0006777f) aid_height_parent_landcape

0xc32c,	// (0x00070a8f) wml_content_pane_cp

0xc334,	// (0x00070a97) wml_tabs_pane

0xc33d,	// (0x00070aa0) popup_wml_miniature_window

0xc345,	// (0x00070aa8) scroll_pane_cp021

0xc359,	// (0x00070abc) wml_content_pane_comp8

0xa873,	// (0x0006efd6) bg_popup_sub_pane_cp05

0xdf70,	// (0x000726d3) popup_wml_miniature_window_g1

0xdf78,	// (0x000726db) wml_miniature_view_pane

0x358f,	// (0x00067cf2) aid_size_wml_view

0x3597,	// (0x00067cfa) wml_miniature_view_pane_g1

0x35a0,	// (0x00067d03) wml_miniature_view_pane_g2

0x35a9,	// (0x00067d0c) wml_miniature_view_pane_g3

0x35b1,	// (0x00067d14) wml_miniature_view_pane_g4

0x35b9,	// (0x00067d1c) wml_miniature_view_pane_g5

0x35c1,	// (0x00067d24) wml_miniature_view_pane_g6

0x35c9,	// (0x00067d2c) wml_miniature_view_pane_g7

0x35d1,	// (0x00067d34) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x00073d0c) wml_miniature_view_pane_g

0xdf80,	// (0x000726e3) background_graphic_ParamLimits

0xdf80,	// (0x000726e3) background_graphic

0xdf8c,	// (0x000726ef) wml_tabs_2_pane

0xdf95,	// (0x000726f8) wml_tabs_3_pane_ParamLimits

0xdf95,	// (0x000726f8) wml_tabs_3_pane

0xdfa7,	// (0x0007270a) wml_tabs_4_pane_ParamLimits

0xdfa7,	// (0x0007270a) wml_tabs_4_pane

0xdfbd,	// (0x00072720) wml_tabs_5_pane_ParamLimits

0xdfbd,	// (0x00072720) wml_tabs_5_pane

0xdfd7,	// (0x0007273a) wml_tabs_pane_g2_ParamLimits

0xdfd7,	// (0x0007273a) wml_tabs_pane_g2

0xdfec,	// (0x0007274f) wml_tabs_pane_g3_ParamLimits

0xdfec,	// (0x0007274f) wml_tabs_pane_g3

0xe001,	// (0x00072764) wml_tabs_2_active_pane_ParamLimits

0xe001,	// (0x00072764) wml_tabs_2_active_pane

0xe001,	// (0x00072764) wml_tabs_2_passive_pane_ParamLimits

0xe001,	// (0x00072764) wml_tabs_2_passive_pane

0x35d9,	// (0x00067d3c) wml_tabs_3_active_pane_cp_ParamLimits

0x35d9,	// (0x00067d3c) wml_tabs_3_active_pane_cp

0x35ee,	// (0x00067d51) wml_tabs_3_passive_pane_ParamLimits

0x35ee,	// (0x00067d51) wml_tabs_3_passive_pane

0x3601,	// (0x00067d64) wml_tabs_3_passive_pane_cp_ParamLimits

0x3601,	// (0x00067d64) wml_tabs_3_passive_pane_cp

0x3618,	// (0x00067d7b) tabs_4_active_pane

0x3620,	// (0x00067d83) tabs_4_passive_pane

0x362a,	// (0x00067d8d) tabs_4_passive_pane_cp

0x3632,	// (0x00067d95) tabs_4_passive_pane_cp2

0x2de0,	// (0x00067543) aid_height_text

0xcba3,	// (0x00071306) mup_volume_cont_pane_ParamLimits

0xcba3,	// (0x00071306) mup_volume_cont_pane

0xa396,	// (0x0006eaf9) aid_size_cell_pinb

0xa396,	// (0x0006eaf9) aid_size_list_pinb

0xcba3,	// (0x00071306) mup2_volume_cont_pane_ParamLimits

0xcba3,	// (0x00071306) mup2_volume_cont_pane

0xadf8,	// (0x0006f55b) mup2_volume_cont_pane_g1_ParamLimits

0xadf8,	// (0x0006f55b) mup2_volume_cont_pane_g1

0x01e9,	// (0x0006494c) aid_size_cell_touch_ParamLimits

0x01e9,	// (0x0006494c) aid_size_cell_touch

0x03ad,	// (0x00064b10) touch_pane_ParamLimits

0x03ad,	// (0x00064b10) touch_pane

0xa421,	// (0x0006eb84) main_rss2_pane

0xe018,	// (0x0007277b) listscroll_rss2_pane

0xe021,	// (0x00072784) rss2_navigation_pane

0xe029,	// (0x0007278c) list_rss2_pane

0xc9b2,	// (0x00071115) scroll_pane_cp22

0xe031,	// (0x00072794) rss2_navigation_pane_g1

0xe03a,	// (0x0007279d) rss2_navigation_pane_g2

0xe042,	// (0x000727a5) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x00073d1d) rss2_navigation_pane_g

0xe04a,	// (0x000727ad) rss2_navigation_pane_t1

0x3646,	// (0x00067da9) rss2_list_single_pane_ParamLimits

0x3646,	// (0x00067da9) rss2_list_single_pane

0xe058,	// (0x000727bb) rss2_list_single_pane_t2

0xe066,	// (0x000727c9) rss2_list_single_pane_t3_ParamLimits

0xe066,	// (0x000727c9) rss2_list_single_pane_t3

0xe083,	// (0x000727e6) rss2_list_single_pane_t4

0x1f1e,	// (0x00066681) smil_status_pane_g1

0xa413,	// (0x0006eb76) main_image2_pane_ParamLimits

0xa413,	// (0x0006eb76) main_image2_pane

0xada6,	// (0x0006f509) main_camera2_pane_g9_ParamLimits

0xada6,	// (0x0006f509) main_camera2_pane_g9

0x354b,	// (0x00067cae) main_camera2_pane_t5_ParamLimits

0x354b,	// (0x00067cae) main_camera2_pane_t5

0xadb4,	// (0x0006f517) main_camera2_pane_t6_ParamLimits

0xadb4,	// (0x0006f517) main_camera2_pane_t6

0x365d,	// (0x00067dc0) main_image2_pane_g1_ParamLimits

0x365d,	// (0x00067dc0) main_image2_pane_g1

0x2a8f,	// (0x000671f2) smil2_video_pane_ParamLimits

0x2a8f,	// (0x000671f2) smil2_video_pane

0xa3c4,	// (0x0006eb27) aid_zoom_text_primary_cp

0xa409,	// (0x0006eb6c) popup_preview_fixed_window

0xc286,	// (0x000709e9) im_reading_pane_g1

0x353d,	// (0x00067ca0) cams2_bc_adjust_pane_cp_ParamLimits

0x353d,	// (0x00067ca0) cams2_bc_adjust_pane_cp

0xaddc,	// (0x0006f53f) cams2_bc_adjust_pane_ParamLimits

0xaddc,	// (0x0006f53f) cams2_bc_adjust_pane

0x363c,	// (0x00067d9f) cams2_bc_adjust_pane_g1

0xa421,	// (0x0006eb84) cams2_slider_pane

0x363c,	// (0x00067d9f) cams2_slider_pane_g1

0x363c,	// (0x00067d9f) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x00073d24) cams2_slider_pane_g

0x0443,	// (0x00064ba6) calc_display_pane_ParamLimits

0x0468,	// (0x00064bcb) calc_paper_pane_ParamLimits

0x048b,	// (0x00064bee) grid_calc_pane_ParamLimits

0xacad,	// (0x0006f410) popup_clock_digital_window_t1_ParamLimits

0xcd46,	// (0x000714a9) main_image_pane_t1

0x0423,	// (0x00064b86) aid_size_cell_calc_ParamLimits

0x0423,	// (0x00064b86) aid_size_cell_calc

0x3072,	// (0x000677d5) popup_blid_sat_info2_window_ParamLimits

0x3072,	// (0x000677d5) popup_blid_sat_info2_window

0xe091,	// (0x000727f4) aid_size_cell_blid

0xe099,	// (0x000727fc) bg_popup_window_pane_cp07

0xe0bc,	// (0x0007281f) grid_popup_blid_pane

0xe0c6,	// (0x00072829) heading_pane_cp05_ParamLimits

0xe0c6,	// (0x00072829) heading_pane_cp05

0xe190,	// (0x000728f3) cell_popup_blid_pane_ParamLimits

0xe190,	// (0x000728f3) cell_popup_blid_pane

0xe1ba,	// (0x0007291d) cell_popup_blid_pane_g1

0xe1c2,	// (0x00072925) cell_popup_blid_pane_t1

0xcba3,	// (0x00071306) mup2_indicator_pane_ParamLimits

0xcba3,	// (0x00071306) mup2_indicator_pane

0xa396,	// (0x0006eaf9) mup2_visualizer_osc_pane

0xdf5a,	// (0x000726bd) mup2_visualizer_spec_pane_ParamLimits

0xdf5a,	// (0x000726bd) mup2_visualizer_spec_pane

0xa396,	// (0x0006eaf9) mup2_spec_half_pane

0xa396,	// (0x0006eaf9) mup2_spec_half_pane_cp

0xe1d0,	// (0x00072933) mup2_spec_bar_pane_ParamLimits

0xe1d0,	// (0x00072933) mup2_spec_bar_pane

0xbfcd,	// (0x00070730) mup2_spec_bar_pane_g1

0xe1ef,	// (0x00072952) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x00073d4a) mup2_spec_bar_pane_g

0xa396,	// (0x0006eaf9) mup2_osc_middle_pane

0xbfcd,	// (0x00070730) mup2_visualizer_osc_pane_g1

0xa44b,	// (0x0006ebae) popup_number_entry_window_t1_ParamLimits

0xa45e,	// (0x0006ebc1) popup_number_entry_window_t2_ParamLimits

0xa470,	// (0x0006ebd3) popup_number_entry_window_t3_ParamLimits

0xa482,	// (0x0006ebe5) popup_number_entry_window_t5_ParamLimits

0xa482,	// (0x0006ebe5) popup_number_entry_window_t5

0xf040,	// (0x000737a3) popup_number_entry_window_t_ParamLimits

0xa4b7,	// (0x0006ec1a) text_title_cp2_ParamLimits

0xacec,	// (0x0006f44f) aid_hotspot_pointer_text2_pane

0xad12,	// (0x0006f475) main_viewer_pane_g9_ParamLimits

0xad12,	// (0x0006f475) main_viewer_pane_g9

0xc4ce,	// (0x00070c31) cale_month_pane_t1_ParamLimits

0xc50b,	// (0x00070c6e) bg_cale_pane_ParamLimits

0xc523,	// (0x00070c86) list_cale_pane_ParamLimits

0xc534,	// (0x00070c97) listscroll_cale_day_pane_t1

0xc546,	// (0x00070ca9) scroll_pane_cp09_ParamLimits

0x2436,	// (0x00066b99) main_mup_eq_pane_t1_ParamLimits

0x2436,	// (0x00066b99) main_mup_eq_pane_t1

0x2452,	// (0x00066bb5) main_mup_eq_pane_t2_ParamLimits

0x2452,	// (0x00066bb5) main_mup_eq_pane_t2

0x246e,	// (0x00066bd1) main_mup_eq_pane_t3_ParamLimits

0x246e,	// (0x00066bd1) main_mup_eq_pane_t3

0x248c,	// (0x00066bef) main_mup_eq_pane_t4_ParamLimits

0x248c,	// (0x00066bef) main_mup_eq_pane_t4

0x24aa,	// (0x00066c0d) main_mup_eq_pane_t5_ParamLimits

0x24aa,	// (0x00066c0d) main_mup_eq_pane_t5

0x24c8,	// (0x00066c2b) main_mup_eq_pane_t6_ParamLimits

0x24c8,	// (0x00066c2b) main_mup_eq_pane_t6

0x24de,	// (0x00066c41) main_mup_eq_pane_t7_ParamLimits

0x24de,	// (0x00066c41) main_mup_eq_pane_t7

0x24f4,	// (0x00066c57) main_mup_eq_pane_t8_ParamLimits

0x24f4,	// (0x00066c57) main_mup_eq_pane_t8

0x250a,	// (0x00066c6d) main_mup_eq_pane_t9_ParamLimits

0x250a,	// (0x00066c6d) main_mup_eq_pane_t9

0x2526,	// (0x00066c89) main_mup_eq_pane_t10_ParamLimits

0x2526,	// (0x00066c89) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x00073afd) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x00073afd) main_mup_eq_pane_t

0x25fb,	// (0x00066d5e) mup_equalizer_pane_cp5_ParamLimits

0x2613,	// (0x00066d76) mup_equalizer_pane_cp6_ParamLimits

0x262b,	// (0x00066d8e) mup_equalizer_pane_cp7_ParamLimits

0xa421,	// (0x0006eb84) main_gallery_pane

0xdef8,	// (0x0007265b) smil2_volume_pane

0xdf00,	// (0x00072663) smil_status_volume_pane_g1_ParamLimits

0xdf13,	// (0x00072676) smil_status_volume_pane_g2_ParamLimits

0xad76,	// (0x0006f4d9) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x00073ca3) smil_status_volume_pane_g_ParamLimits

0xe099,	// (0x000727fc) bg_popup_window_pane_cp07_ParamLimits

0xe0a7,	// (0x0007280a) blid_firmament_pane

0xaaf0,	// (0x0006f253) aid_size_cell_gallery_ParamLimits

0xaaf0,	// (0x0006f253) aid_size_cell_gallery

0xaaf0,	// (0x0006f253) grid_gallery_pane_ParamLimits

0xaaf0,	// (0x0006f253) grid_gallery_pane

0xe099,	// (0x000727fc) cell_gallery_pane_ParamLimits

0xe099,	// (0x000727fc) cell_gallery_pane

0xaaf0,	// (0x0006f253) bg_cell_gallery_focus_pane_ParamLimits

0xaaf0,	// (0x0006f253) bg_cell_gallery_focus_pane

0xab57,	// (0x0006f2ba) cell_gallery_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) cell_gallery_pane_g1

0xab57,	// (0x0006f2ba) cell_gallery_pane_g2_ParamLimits

0xab57,	// (0x0006f2ba) cell_gallery_pane_g2

0xab57,	// (0x0006f2ba) cell_gallery_pane_g3_ParamLimits

0xab57,	// (0x0006f2ba) cell_gallery_pane_g3

0xab65,	// (0x0006f2c8) cell_gallery_pane_g4_ParamLimits

0xab65,	// (0x0006f2c8) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x00073d4f) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x00073d4f) cell_gallery_pane_g

0xe1f9,	// (0x0007295c) bg_cell_gallery_focus_pane_g1

0xe201,	// (0x00072964) bg_cell_gallery_focus_pane_g2

0xe209,	// (0x0007296c) bg_cell_gallery_focus_pane_g3

0xe211,	// (0x00072974) bg_cell_gallery_focus_pane_g4

0xe219,	// (0x0007297c) bg_cell_gallery_focus_pane_g5

0xe221,	// (0x00072984) bg_cell_gallery_focus_pane_g6

0xe229,	// (0x0007298c) bg_cell_gallery_focus_pane_g7

0xe231,	// (0x00072994) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x00073d58) bg_cell_gallery_focus_pane_g

0xe239,	// (0x0007299c) aid_firma_cardinal

0xe24d,	// (0x000729b0) blid_firmament_pane_t1

0xe264,	// (0x000729c7) blid_firmament_pane_t2

0xe27b,	// (0x000729de) blid_firmament_pane_t3

0xe292,	// (0x000729f5) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x00073d69) blid_firmament_pane_t

0xe2a9,	// (0x00072a0c) blid_sat_info_pane

0xbfcd,	// (0x00070730) blid_sat_info_pane_g1

0xbfcd,	// (0x00070730) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00073812) blid_sat_info_pane_g

0xe2b9,	// (0x00072a1c) blid_sat_info_pane_t1

0xe2c7,	// (0x00072a2a) smil2_volume_content_pane

0xe2d0,	// (0x00072a33) smil2_volume_pane_g1

0xcda7,	// (0x0007150a) smil2_volume_content_pane_g1

0xe2d8,	// (0x00072a3b) smil2_volume_content_pane_g2

0xe2e1,	// (0x00072a44) smil2_volume_content_pane_g3

0xe2ea,	// (0x00072a4d) smil2_volume_content_pane_g4

0xe2f3,	// (0x00072a56) smil2_volume_content_pane_g5

0xe2fc,	// (0x00072a5f) smil2_volume_content_pane_g6

0xe305,	// (0x00072a68) smil2_volume_content_pane_g7

0xe30e,	// (0x00072a71) smil2_volume_content_pane_g8

0xe317,	// (0x00072a7a) smil2_volume_content_pane_g9

0xe320,	// (0x00072a83) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x00073d72) smil2_volume_content_pane_g

0x09ed,	// (0x00065150) cale_week_day_heading_pane_t1_ParamLimits

0x0a17,	// (0x0006517a) cale_week_day_heading_pane_t2_ParamLimits

0x0a46,	// (0x000651a9) cale_week_day_heading_pane_t3_ParamLimits

0x0a75,	// (0x000651d8) cale_week_day_heading_pane_t4_ParamLimits

0x0aa4,	// (0x00065207) cale_week_day_heading_pane_t5_ParamLimits

0x0ad7,	// (0x0006523a) cale_week_day_heading_pane_t6_ParamLimits

0x0b0e,	// (0x00065271) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x000738aa) cale_week_day_heading_pane_t_ParamLimits

0xc16e,	// (0x000708d1) bg_cale_side_pane_ParamLimits

0x0b38,	// (0x0006529b) cale_week_time_pane_t1_ParamLimits

0x0b52,	// (0x000652b5) cale_week_time_pane_t2_ParamLimits

0x0b6c,	// (0x000652cf) cale_week_time_pane_t3_ParamLimits

0x0b86,	// (0x000652e9) cale_week_time_pane_t4_ParamLimits

0x0ba0,	// (0x00065303) cale_week_time_pane_t5_ParamLimits

0x0bba,	// (0x0006531d) cale_week_time_pane_t6_ParamLimits

0x0bda,	// (0x0006533d) cale_week_time_pane_t7_ParamLimits

0x0c00,	// (0x00065363) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x000738b9) cale_week_time_pane_t_ParamLimits

0x0c26,	// (0x00065389) cell_cale_week_pane_g2_ParamLimits

0xc16e,	// (0x000708d1) bg_cale_side_pane_cp01_ParamLimits

0x1d07,	// (0x0006646a) cale_month_week_pane_t1_ParamLimits

0x1d20,	// (0x00066483) cale_month_week_pane_t2_ParamLimits

0x1d39,	// (0x0006649c) cale_month_week_pane_t3_ParamLimits

0x1d52,	// (0x000664b5) cale_month_week_pane_t4_ParamLimits

0x1d6b,	// (0x000664ce) cale_month_week_pane_t5_ParamLimits

0x1d84,	// (0x000664e7) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00073987) cale_month_week_pane_t_ParamLimits

0xac2d,	// (0x0006f390) cell_cale_month_pane_g1_ParamLimits

0xa421,	// (0x0006eb84) main_cale_event_viewer_pane

0xa396,	// (0x0006eaf9) listscroll_cale_event_viewer_pane

0xe329,	// (0x00072a8c) list_cale_ev_pane

0xe331,	// (0x00072a94) scroll_pane_cp023

0x3673,	// (0x00067dd6) field_cale_ev_pane_ParamLimits

0x3673,	// (0x00067dd6) field_cale_ev_pane

0xe33d,	// (0x00072aa0) field_cale_ev_content_pane_ParamLimits

0xe33d,	// (0x00072aa0) field_cale_ev_content_pane

0xe349,	// (0x00072aac) field_cale_ev_pane_g1_ParamLimits

0xe349,	// (0x00072aac) field_cale_ev_pane_g1

0xe355,	// (0x00072ab8) field_cale_ev_pane_g2_ParamLimits

0xe355,	// (0x00072ab8) field_cale_ev_pane_g2

0xe36d,	// (0x00072ad0) field_cale_ev_pane_g3_ParamLimits

0xe36d,	// (0x00072ad0) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x00073d87) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x00073d87) field_cale_ev_pane_g

0xe385,	// (0x00072ae8) field_cale_ev_pane_t1_ParamLimits

0xe385,	// (0x00072ae8) field_cale_ev_pane_t1

0x3697,	// (0x00067dfa) field_cale_ev_content_pane_t1_ParamLimits

0x3697,	// (0x00067dfa) field_cale_ev_content_pane_t1

0xcc48,	// (0x000713ab) bg_button_pane_cp01

0x06a5,	// (0x00064e08) listscroll_cale_week_pane_ParamLimits

0xc136,	// (0x00070899) popup_toolbar_window_cp01

0xc13f,	// (0x000708a2) listscroll_cale_week_pane_t1_ParamLimits

0x06a5,	// (0x00064e08) listscroll_cale_day_pane_ParamLimits

0xc136,	// (0x00070899) popup_toolbar_window_cp02

0xc534,	// (0x00070c97) listscroll_cale_day_pane_t1_ParamLimits

0x303a,	// (0x0006779d) main_cale_month_pane_ParamLimits

0xad61,	// (0x0006f4c4) popup_toolbar_window_cp03_ParamLimits

0xad61,	// (0x0006f4c4) popup_toolbar_window_cp03

0x294d,	// (0x000670b0) main_image_pane_g2_ParamLimits

0x294d,	// (0x000670b0) main_image_pane_g2

0x295e,	// (0x000670c1) main_image_pane_g3_ParamLimits

0x295e,	// (0x000670c1) main_image_pane_g3

0x0002,

0xf42c,	// (0x00073b8f) main_image_pane_g_ParamLimits

0xf42c,	// (0x00073b8f) main_image_pane_g

0xcd46,	// (0x000714a9) main_image_pane_t1_ParamLimits

0x296f,	// (0x000670d2) main_image_pane_t2_ParamLimits

0x296f,	// (0x000670d2) main_image_pane_t2

0x2981,	// (0x000670e4) main_image_pane_t3_ParamLimits

0x2981,	// (0x000670e4) main_image_pane_t3

0x29a9,	// (0x0006710c) main_image_pane_t4_ParamLimits

0x29a9,	// (0x0006710c) main_image_pane_t4

0x0003,

0xf433,	// (0x00073b96) main_image_pane_t_ParamLimits

0xf433,	// (0x00073b96) main_image_pane_t

0x29c9,	// (0x0006712c) popup_image_details_window_cp01

0x29d3,	// (0x00067136) popup_toobar_trans_pane_cp01_ParamLimits

0x29d3,	// (0x00067136) popup_toobar_trans_pane_cp01

0x3165,	// (0x000678c8) popup_image_details_window_ParamLimits

0x3165,	// (0x000678c8) popup_image_details_window

0xad32,	// (0x0006f495) popup_image_focus_window

0xad98,	// (0x0006f4fb) camera2_autofocus_pane_ParamLimits

0xad98,	// (0x0006f4fb) camera2_autofocus_pane

0xa396,	// (0x0006eaf9) bg_popup_sub_pane_cp06

0xe39c,	// (0x00072aff) popup_image_focus_window_g1

0xe3a4,	// (0x00072b07) popup_image_focus_window_g2

0xe3ac,	// (0x00072b0f) popup_image_focus_window_g3

0xe3b4,	// (0x00072b17) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x00073d8e) popup_image_focus_window_g

0xe3bc,	// (0x00072b1f) popup_image_focus_window_t1

0xe3ca,	// (0x00072b2d) popup_image_focus_window_t2

0xe3da,	// (0x00072b3d) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x00073d97) popup_image_focus_window_t

0xab57,	// (0x0006f2ba) camera2_autofocus_pane_g1

0xaaf0,	// (0x0006f253) bg_tb_trans_pane_cp01

0xe3e8,	// (0x00072b4b) popup_image_details_window_g1

0xe3fb,	// (0x00072b5e) popup_image_details_window_g2

0x0002,

0xf646,	// (0x00073da9) popup_image_details_window_g

0xe424,	// (0x00072b87) popup_image_details_window_t1

0xe436,	// (0x00072b99) popup_image_details_window_t2

0xe44f,	// (0x00072bb2) popup_image_details_window_t3

0xe463,	// (0x00072bc6) popup_image_details_window_t4

0xe47e,	// (0x00072be1) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x00073db0) popup_image_details_window_t

0xc017,	// (0x0007077a) bg_calc_paper_pane_ParamLimits

0xa421,	// (0x0006eb84) grid_highlight_pane_cp013

0xab9d,	// (0x0006f300) list_calc_pane_ParamLimits

0xabaf,	// (0x0006f312) scroll_pane_cp024

0xc02b,	// (0x0007078e) bg_calc_display_pane_ParamLimits

0x04cd,	// (0x00064c30) calc_display_pane_t1_ParamLimits

0x04e2,	// (0x00064c45) calc_display_pane_t2_ParamLimits

0xabb7,	// (0x0006f31a) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0007382a) calc_display_pane_t_ParamLimits

0x05b0,	// (0x00064d13) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00073847) cell_calc_pane_g

0x05b9,	// (0x00064d1c) cell_calc_pane_t1

0xc080,	// (0x000707e3) grid_highlight_pane_cp02_ParamLimits

0xc096,	// (0x000707f9) toolbar_button_pane_cp01_ParamLimits

0xc096,	// (0x000707f9) toolbar_button_pane_cp01

0xce9a,	// (0x000715fd) temp_image_control_pane_ParamLimits

0xce9a,	// (0x000715fd) temp_image_control_pane

0xa413,	// (0x0006eb76) main_mp3_pane

0xe498,	// (0x00072bfb) temp_image_control_pane_g1_ParamLimits

0xe498,	// (0x00072bfb) temp_image_control_pane_g1

0xe4a6,	// (0x00072c09) temp_image_control_pane_g2_ParamLimits

0xe4a6,	// (0x00072c09) temp_image_control_pane_g2

0xe4b8,	// (0x00072c1b) temp_image_control_pane_g3_ParamLimits

0xe4b8,	// (0x00072c1b) temp_image_control_pane_g3

0x36b8,	// (0x00067e1b) temp_image_control_pane_g4_ParamLimits

0x36b8,	// (0x00067e1b) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x00073dbb) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x00073dbb) temp_image_control_pane_g

0xe498,	// (0x00072bfb) main_mp3_pane_g1

0x36cb,	// (0x00067e2e) main_mp3_pane_g2

0x0007,

0xf661,	// (0x00073dc4) main_mp3_pane_g

0xe4ed,	// (0x00072c50) main_mp3_pane_t1

0xab65,	// (0x0006f2c8) main_camera_pane_g8_ParamLimits

0xab65,	// (0x0006f2c8) main_camera_pane_g8

0x0dfd,	// (0x00065560) main_video_pane_g7_ParamLimits

0x0dfd,	// (0x00065560) main_video_pane_g7

0xadc8,	// (0x0006f52b) main_camera2_pane_t7_ParamLimits

0xadc8,	// (0x0006f52b) main_camera2_pane_t7

0xc2ec,	// (0x00070a4f) scroll_pane_cp025_ParamLimits

0xc2ec,	// (0x00070a4f) scroll_pane_cp025

0xc300,	// (0x00070a63) scroll_pane_cp026_ParamLimits

0xc300,	// (0x00070a63) scroll_pane_cp026

0xc30f,	// (0x00070a72) wml_content_pane_ParamLimits

0xa421,	// (0x0006eb84) main_touch_calib_pane

0x379d,	// (0x00067f00) main_touch_calib_pane_g1

0x37af,	// (0x00067f12) main_touch_calib_pane_g2

0x37c1,	// (0x00067f24) main_touch_calib_pane_g3

0x37d3,	// (0x00067f36) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x00073de2) main_touch_calib_pane_g

0x37e5,	// (0x00067f48) main_touch_calib_pane_t1

0x37ff,	// (0x00067f62) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x00073deb) main_touch_calib_pane_t

0xca2d,	// (0x00071190) mup_progress_pane_cp02

0xca4c,	// (0x000711af) navi_pane_g1

0xcaae,	// (0x00071211) navi_pane_mp_t3

0xa413,	// (0x0006eb76) main_mp3_pane_ParamLimits

0x331e,	// (0x00067a81) navi_pane_ParamLimits

0xe498,	// (0x00072bfb) main_mp3_pane_g1_ParamLimits

0x36cb,	// (0x00067e2e) main_mp3_pane_g2_ParamLimits

0x36d7,	// (0x00067e3a) main_mp3_pane_g3_ParamLimits

0x36d7,	// (0x00067e3a) main_mp3_pane_g3

0x36e5,	// (0x00067e48) main_mp3_pane_g4_ParamLimits

0x36e5,	// (0x00067e48) main_mp3_pane_g4

0xab57,	// (0x0006f2ba) main_mp3_pane_g5_ParamLimits

0xab57,	// (0x0006f2ba) main_mp3_pane_g5

0xe4c8,	// (0x00072c2b) main_mp3_pane_g6_ParamLimits

0xe4c8,	// (0x00072c2b) main_mp3_pane_g6

0xe4d5,	// (0x00072c38) main_mp3_pane_g7_ParamLimits

0xe4d5,	// (0x00072c38) main_mp3_pane_g7

0xe4e1,	// (0x00072c44) main_mp3_pane_g8_ParamLimits

0xe4e1,	// (0x00072c44) main_mp3_pane_g8

0xf661,	// (0x00073dc4) main_mp3_pane_g_ParamLimits

0x36f1,	// (0x00067e54) main_mp3_pane_t2

0x36ff,	// (0x00067e62) main_mp3_pane_t3

0xe4fb,	// (0x00072c5e) main_mp3_pane_t4

0xe509,	// (0x00072c6c) main_mp3_pane_t5

0x0005,

0xf672,	// (0x00073dd5) main_mp3_pane_t

0xe517,	// (0x00072c7a) mup_progress_pane_cp01

0xa3c4,	// (0x0006eb27) aid_zoom_text_secondary2

0xe329,	// (0x00072a8c) list_cale_ev2_pane

0xe331,	// (0x00072a94) scroll_pane_cp023_ParamLimits

0x3859,	// (0x00067fbc) field_cale_ev2_pane_ParamLimits

0x3859,	// (0x00067fbc) field_cale_ev2_pane

0x387d,	// (0x00067fe0) field_cale_ev2_pane_g1_ParamLimits

0x387d,	// (0x00067fe0) field_cale_ev2_pane_g1

0x3889,	// (0x00067fec) field_cale_ev2_pane_g2_ParamLimits

0x3889,	// (0x00067fec) field_cale_ev2_pane_g2

0x38a1,	// (0x00068004) field_cale_ev2_pane_g3_ParamLimits

0x38a1,	// (0x00068004) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x00073df6) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x00073df6) field_cale_ev2_pane_g

0x38b9,	// (0x0006801c) field_cale_ev2_pane_t1_ParamLimits

0x38b9,	// (0x0006801c) field_cale_ev2_pane_t1

0x38d0,	// (0x00068033) field_cale_ev2_pane_t2_ParamLimits

0x38d0,	// (0x00068033) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x00073dff) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x00073dff) field_cale_ev2_pane_t

0x280d,	// (0x00066f70) main_postcard_pane_g5_ParamLimits

0x280d,	// (0x00066f70) main_postcard_pane_g5

0x2823,	// (0x00066f86) main_postcard_pane_g6_ParamLimits

0x2823,	// (0x00066f86) main_postcard_pane_g6

0xaaf0,	// (0x0006f253) camera2_autofocus_pane_cp_ParamLimits

0xaaf0,	// (0x0006f253) camera2_autofocus_pane_cp

0xa413,	// (0x0006eb76) main_mup3_pane

0x392f,	// (0x00068092) main_mup3_pane_g1_ParamLimits

0x392f,	// (0x00068092) main_mup3_pane_g1

0x3951,	// (0x000680b4) main_mup3_pane_g2_ParamLimits

0x3951,	// (0x000680b4) main_mup3_pane_g2

0x39cc,	// (0x0006812f) main_mup3_pane_g3_ParamLimits

0x39cc,	// (0x0006812f) main_mup3_pane_g3

0x3a36,	// (0x00068199) main_mup3_pane_g4_ParamLimits

0x3a36,	// (0x00068199) main_mup3_pane_g4

0x3aa0,	// (0x00068203) main_mup3_pane_g5_ParamLimits

0x3aa0,	// (0x00068203) main_mup3_pane_g5

0x3b0a,	// (0x0006826d) main_mup3_pane_g6_ParamLimits

0x3b0a,	// (0x0006826d) main_mup3_pane_g6

0xab65,	// (0x0006f2c8) main_mup3_pane_g7_ParamLimits

0xab65,	// (0x0006f2c8) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x00073e0f) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x00073e0f) main_mup3_pane_g

0x3b8e,	// (0x000682f1) main_mup3_pane_t1_ParamLimits

0x3b8e,	// (0x000682f1) main_mup3_pane_t1

0x3bf8,	// (0x0006835b) main_mup3_pane_t2_ParamLimits

0x3bf8,	// (0x0006835b) main_mup3_pane_t2

0x3cce,	// (0x00068431) main_mup3_pane_t4_ParamLimits

0x3cce,	// (0x00068431) main_mup3_pane_t4

0x3d2c,	// (0x0006848f) main_mup3_pane_t5_ParamLimits

0x3d2c,	// (0x0006848f) main_mup3_pane_t5

0x3df4,	// (0x00068557) main_mup3_pane_t6_ParamLimits

0x3df4,	// (0x00068557) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x00073e20) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x00073e20) main_mup3_pane_t

0x3eac,	// (0x0006860f) mup3_progress_pane_ParamLimits

0x3eac,	// (0x0006860f) mup3_progress_pane

0x3f44,	// (0x000686a7) popup_mup3_control_window_ParamLimits

0x3f44,	// (0x000686a7) popup_mup3_control_window

0xe52b,	// (0x00072c8e) popup_mup3_text_window

0x3f7a,	// (0x000686dd) mup3_progress_pane_t1

0x3f99,	// (0x000686fc) mup3_progress_pane_t2

0xe533,	// (0x00072c96) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x00073e2d) mup3_progress_pane_t

0xe550,	// (0x00072cb3) mup_progress_pane_cp03

0xa396,	// (0x0006eaf9) bg_tb_trans_pane_cp04

0x3fb8,	// (0x0006871b) mup3_volume_pane

0x3fc0,	// (0x00068723) popup_mup3_control_window_g1

0x3fc9,	// (0x0006872c) mup3_volume_pane_g1

0x3fd2,	// (0x00068735) mup3_volume_pane_g2

0x3fdb,	// (0x0006873e) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x00073e34) mup3_volume_pane_g

0xa396,	// (0x0006eaf9) bg_tb_trans_pane_cp03

0xe560,	// (0x00072cc3) popup_mup3_text_window_g1

0xe568,	// (0x00072ccb) popup_mup3_text_window_t1

0xc073,	// (0x000707d6) list_calc_item_pane_g1_ParamLimits

0xe00f,	// (0x00072772) mup_volume_pane_cp_g1

0x3819,	// (0x00067f7c) main_touch_calib_pane_t3

0x382d,	// (0x00067f90) main_touch_calib_pane_t4

0x3843,	// (0x00067fa6) main_touch_calib_pane_t5

0xa3a0,	// (0x0006eb03) aid_cell_size_toolbar2

0xa3a8,	// (0x0006eb0b) aid_popup3_width_pane

0xa3b4,	// (0x0006eb17) aid_zoom_text_msg_primary

0x0cd6,	// (0x00065439) vorec_t7

0xc037,	// (0x0007079a) bg_calc_paper_pane_g1_ParamLimits

0xc043,	// (0x000707a6) bg_calc_paper_pane_g2_ParamLimits

0xc04f,	// (0x000707b2) bg_calc_paper_pane_g3_ParamLimits

0xc05b,	// (0x000707be) bg_calc_paper_pane_g4_ParamLimits

0xc067,	// (0x000707ca) bg_calc_paper_pane_g5_ParamLimits

0x0532,	// (0x00064c95) bg_calc_paper_pane_g6_ParamLimits

0x0545,	// (0x00064ca8) bg_calc_paper_pane_g7_ParamLimits

0x0558,	// (0x00064cbb) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00073831) bg_calc_paper_pane_g_ParamLimits

0x056b,	// (0x00064cce) calc_bg_paper_pane_g9_ParamLimits

0xaaf0,	// (0x0006f253) image_qvga_pane_ParamLimits

0xaaf0,	// (0x0006f253) image_qvga_pane

0xaace,	// (0x0006f231) bg_popup_sub_pane_cp04_ParamLimits

0xccc2,	// (0x00071425) popup_mup_playback_window_g1_ParamLimits

0xccce,	// (0x00071431) popup_mup_playback_window_t1_ParamLimits

0xcce3,	// (0x00071446) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x00073b8a) popup_mup_playback_window_t_ParamLimits

0xab65,	// (0x0006f2c8) main_mup2_pane_g3_ParamLimits

0xab65,	// (0x0006f2c8) main_mup2_pane_g3

0x0fa5,	// (0x00065708) popup_toolbar_window_cp04

0xd176,	// (0x000718d9) popup_call2_audio_second_window_g3_ParamLimits

0xd176,	// (0x000718d9) popup_call2_audio_second_window_g3

0xd580,	// (0x00071ce3) popup_call2_audio_first_window_g4_ParamLimits

0xd580,	// (0x00071ce3) popup_call2_audio_first_window_g4

0xdba7,	// (0x0007230a) popup_call2_audio_in_window_g4_ParamLimits

0xdba7,	// (0x0007230a) popup_call2_audio_in_window_g4

0x292f,	// (0x00067092) aid_area_sk_bg_cut_ParamLimits

0x292f,	// (0x00067092) aid_area_sk_bg_cut

0xccf8,	// (0x0007145b) aid_area_sk_bg_cut_2_ParamLimits

0xccf8,	// (0x0007145b) aid_area_sk_bg_cut_2

0xa396,	// (0x0006eaf9) aid_placing_details_win

0xa396,	// (0x0006eaf9) aid_placing_details_win_2

0xab57,	// (0x0006f2ba) camera2_autofocus_pane_g1_ParamLimits

0x0348,	// (0x00064aab) popup_fixed_preview_cale_window_ParamLimits

0x0348,	// (0x00064aab) popup_fixed_preview_cale_window

0xcaf5,	// (0x00071258) navi_slider_pane_g3

0xcafe,	// (0x00071261) navi_slider_pane_g4

0xcb07,	// (0x0007126a) navi_slider_pane_g5

0xcaf5,	// (0x00071258) navi_slider_pane_g6

0xacd3,	// (0x0006f436) navi_slider_pane_g7

0xcc15,	// (0x00071378) mup_scale_pane_g3

0xcc1e,	// (0x00071381) mup_scale_pane_g4

0xcc27,	// (0x0007138a) mup_scale_pane_g5

0x2643,	// (0x00066da6) mup_scale_pane_g6

0x264c,	// (0x00066daf) mup_scale_pane_g7

0x363c,	// (0x00067d9f) cams2_slider_pane_g3

0x363c,	// (0x00067d9f) cams2_slider_pane_g4

0x363c,	// (0x00067d9f) cams2_slider_pane_g5

0x363c,	// (0x00067d9f) cams2_slider_pane_g6

0x363c,	// (0x00067d9f) cams2_slider_pane_g7

0xbfcd,	// (0x00070730) camera2_autofocus_pane_cp_g1

0xde7f,	// (0x000725e2) bg_popup_preview_window_pane_cp02_ParamLimits

0xde7f,	// (0x000725e2) bg_popup_preview_window_pane_cp02

0xe576,	// (0x00072cd9) list_fp_cale_pane_ParamLimits

0xe576,	// (0x00072cd9) list_fp_cale_pane

0xe582,	// (0x00072ce5) popup_fixed_preview_cale_window_t1_ParamLimits

0xe582,	// (0x00072ce5) popup_fixed_preview_cale_window_t1

0x3fe4,	// (0x00068747) popup_fixed_preview_cale_window_t2_ParamLimits

0x3fe4,	// (0x00068747) popup_fixed_preview_cale_window_t2

0x3ff9,	// (0x0006875c) popup_fixed_preview_cale_window_t3_ParamLimits

0x3ff9,	// (0x0006875c) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x00073e3b) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x00073e3b) popup_fixed_preview_cale_window_t

0x4010,	// (0x00068773) list_single_fp_cale_pane_ParamLimits

0x4010,	// (0x00068773) list_single_fp_cale_pane

0xe5a0,	// (0x00072d03) list_single_fp_cale_pane_g1_ParamLimits

0xe5a0,	// (0x00072d03) list_single_fp_cale_pane_g1

0xe5ac,	// (0x00072d0f) list_single_fp_cale_pane_g2_ParamLimits

0xe5ac,	// (0x00072d0f) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x00073e42) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x00073e42) list_single_fp_cale_pane_g

0xe5c5,	// (0x00072d28) list_single_fp_cale_pane_t1_ParamLimits

0xe5c5,	// (0x00072d28) list_single_fp_cale_pane_t1

0xe5d7,	// (0x00072d3a) list_single_fp_cale_pane_t2_ParamLimits

0xe5d7,	// (0x00072d3a) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x00073e49) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x00073e49) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa421,	// (0x0006eb84) main_dialer_pane

0xa396,	// (0x0006eaf9) aid_cell_size_keypad

0xa396,	// (0x0006eaf9) dialer_ne_pane

0xa396,	// (0x0006eaf9) grid_dialer_command_1_pane

0xa396,	// (0x0006eaf9) grid_dialer_command_2_pane

0xa396,	// (0x0006eaf9) grid_dialer_keypad_pane

0x4025,	// (0x00068788) bg_popup_call_pane_cp06_ParamLimits

0x4025,	// (0x00068788) bg_popup_call_pane_cp06

0x4025,	// (0x00068788) dialer_ne_clear_pane_ParamLimits

0x4025,	// (0x00068788) dialer_ne_clear_pane

0xbfcd,	// (0x00070730) dialer_ne_pane_g1

0xbfeb,	// (0x0007074e) dialer_ne_pane_t1_ParamLimits

0xbfeb,	// (0x0007074e) dialer_ne_pane_t1

0x4033,	// (0x00068796) dialer_ne_pane_t2_ParamLimits

0x4033,	// (0x00068796) dialer_ne_pane_t2

0x405b,	// (0x000687be) dialer_ne_pane_t3_ParamLimits

0x405b,	// (0x000687be) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x00073e4e) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x00073e4e) dialer_ne_pane_t

0x405b,	// (0x000687be) dialer_ne_pane_t3_copy1_ParamLimits

0x405b,	// (0x000687be) dialer_ne_pane_t3_copy1

0xe60a,	// (0x00072d6d) cell_dialer_keypad_pane_ParamLimits

0xe60a,	// (0x00072d6d) cell_dialer_keypad_pane

0xaaf0,	// (0x0006f253) cell_dialer_command_1_pane_ParamLimits

0xaaf0,	// (0x0006f253) cell_dialer_command_1_pane

0xe621,	// (0x00072d84) cell_dialer_command_2_pane_ParamLimits

0xe621,	// (0x00072d84) cell_dialer_command_2_pane

0xaaf0,	// (0x0006f253) bg_button_pane_cp02_ParamLimits

0xaaf0,	// (0x0006f253) bg_button_pane_cp02

0xab57,	// (0x0006f2ba) cell_dialer_keypad_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) cell_dialer_keypad_pane_g1

0xaaf0,	// (0x0006f253) bg_button_pane_cp03_ParamLimits

0xaaf0,	// (0x0006f253) bg_button_pane_cp03

0xab57,	// (0x0006f2ba) cell_dialer_command_1_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) cell_dialer_command_1_pane_g1

0xa396,	// (0x0006eaf9) bg_button_pane_cp04

0xbfcd,	// (0x00070730) cell_dialer_command_2_pane_g1

0xa396,	// (0x0006eaf9) bg_button_pane_cp06

0xbfcd,	// (0x00070730) dialer_ne_clear_pane_g1

0x2352,	// (0x00066ab5) navi_pane_g2

0x2380,	// (0x00066ae3) navi_pane_g3

0x0002,

0xf32f,	// (0x00073a92) navi_pane_g

0x23ab,	// (0x00066b0e) navi_pane_mv_g2

0x23d2,	// (0x00066b35) navi_pane_mv_g5

0x23da,	// (0x00066b3d) navi_pane_mv_t1

0xc02b,	// (0x0007078e) main_clock2_pane

0xaaf0,	// (0x0006f253) main_clock2_list_pane_ParamLimits

0xaaf0,	// (0x0006f253) main_clock2_list_pane

0x40ec,	// (0x0006884f) main_clock2_pane_t1_ParamLimits

0x40ec,	// (0x0006884f) main_clock2_pane_t1

0x4127,	// (0x0006888a) main_clock2_pane_t2_ParamLimits

0x4127,	// (0x0006888a) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x00073e5a) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x00073e5a) main_clock2_pane_t

0x41c6,	// (0x00068929) popup_clock_analogue_window_cp03_ParamLimits

0x41c6,	// (0x00068929) popup_clock_analogue_window_cp03

0x41eb,	// (0x0006894e) popup_clock_digital_window_cp02_ParamLimits

0x41eb,	// (0x0006894e) popup_clock_digital_window_cp02

0x4264,	// (0x000689c7) main_clock2_list_single_pane_ParamLimits

0x4264,	// (0x000689c7) main_clock2_list_single_pane

0xc1c9,	// (0x0007092c) list_highlight_pane_cp05

0xe662,	// (0x00072dc5) main_clock2_list_single_pane_t1

0x0fa5,	// (0x00065708) popup_toolbar_window_cp04_ParamLimits

0xab65,	// (0x0006f2c8) camera2_autofocus_pane_g2_ParamLimits

0xab65,	// (0x0006f2c8) camera2_autofocus_pane_g2

0xab65,	// (0x0006f2c8) camera2_autofocus_pane_g3_ParamLimits

0xab65,	// (0x0006f2c8) camera2_autofocus_pane_g3

0xab65,	// (0x0006f2c8) camera2_autofocus_pane_g4_ParamLimits

0xab65,	// (0x0006f2c8) camera2_autofocus_pane_g4

0xab65,	// (0x0006f2c8) camera2_autofocus_pane_g5_ParamLimits

0xab65,	// (0x0006f2c8) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x00073d9e) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x00073d9e) camera2_autofocus_pane_g

0x38e5,	// (0x00068048) camera2_autofocus_pane_cp_g2

0x38ed,	// (0x00068050) camera2_autofocus_pane_cp_g3

0x38f5,	// (0x00068058) camera2_autofocus_pane_cp_g4

0x38fd,	// (0x00068060) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x00073e04) camera2_autofocus_pane_cp_g

0xa396,	// (0x0006eaf9) popup_dialer_spcha_window

0xa396,	// (0x0006eaf9) bg_popup_sub_pane_cp07

0xa396,	// (0x0006eaf9) list_spcha_pane

0xe670,	// (0x00072dd3) list_single_spcha_pane_ParamLimits

0xe670,	// (0x00072dd3) list_single_spcha_pane

0xa396,	// (0x0006eaf9) list_highlight_pane_cp06

0xc723,	// (0x00070e86) list_single_spcha_pane_t1

0xd951,	// (0x000720b4) popup_call2_audio_out_window_g4_ParamLimits

0xd951,	// (0x000720b4) popup_call2_audio_out_window_g4

0xa421,	// (0x0006eb84) main_imed2_pane

0xad3c,	// (0x0006f49f) popup_imed_adjust2_window

0x317d,	// (0x000678e0) popup_imed_trans_window_ParamLimits

0x317d,	// (0x000678e0) popup_imed_trans_window

0xe0f2,	// (0x00072855) popup_blid_sat_info2_window_t1

0xe100,	// (0x00072863) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x00073d33) popup_blid_sat_info2_window_t

0x431f,	// (0x00068a82) aid_size_cell_colour_35

0x433f,	// (0x00068aa2) aid_size_cell_colour_112

0x435f,	// (0x00068ac2) aid_size_cell_effect

0xcba3,	// (0x00071306) bg_tb_trans_pane_cp02

0xc654,	// (0x00070db7) heading_imed_pane

0x437f,	// (0x00068ae2) listscroll_imed_pane

0xe682,	// (0x00072de5) heading_imed_pane_g1

0xe68a,	// (0x00072ded) heading_imed_pane_t1

0xe698,	// (0x00072dfb) grid_imed_colour_35_pane_ParamLimits

0xe698,	// (0x00072dfb) grid_imed_colour_35_pane

0x438b,	// (0x00068aee) grid_imed_effect_pane

0xe6b4,	// (0x00072e17) list_imed_aspect_pane

0x43a2,	// (0x00068b05) scroll_pane_cp027_ParamLimits

0x43a2,	// (0x00068b05) scroll_pane_cp027

0x43b3,	// (0x00068b16) cell_imed_effect_pane_ParamLimits

0x43b3,	// (0x00068b16) cell_imed_effect_pane

0xe6bc,	// (0x00072e1f) cell_imed_colour_pane_ParamLimits

0xe6bc,	// (0x00072e1f) cell_imed_colour_pane

0xe706,	// (0x00072e69) cell_imed_colour_pane_g1_ParamLimits

0xe706,	// (0x00072e69) cell_imed_colour_pane_g1

0xe717,	// (0x00072e7a) hgihlgiht_grid_pane_cp016_ParamLimits

0xe717,	// (0x00072e7a) hgihlgiht_grid_pane_cp016

0x43de,	// (0x00068b41) cell_imed_effect_pane_g1

0x43e6,	// (0x00068b49) grid_highlight_pane_cp017

0xe728,	// (0x00072e8b) list_imed_single_pane_ParamLimits

0xe728,	// (0x00072e8b) list_imed_single_pane

0xa396,	// (0x0006eaf9) list_highlight_pane_cp07

0xe73c,	// (0x00072e9f) list_imed_aspect_pane_comp1_t1

0xcba3,	// (0x00071306) bg_tb_trans_pane_cp05

0xe75e,	// (0x00072ec1) popup_imed_adjust2_window_g1

0xe785,	// (0x00072ee8) popup_imed_adjust2_window_t1

0xe79d,	// (0x00072f00) slider_imed_adjust_pane

0xe7b1,	// (0x00072f14) slider_imed_adjust_pane_g1

0xe7c1,	// (0x00072f24) slider_imed_adjust_pane_g2

0xe7d1,	// (0x00072f34) slider_imed_adjust_pane_g3

0xe7e2,	// (0x00072f45) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x00073e77) slider_imed_adjust_pane_g

0x43ef,	// (0x00068b52) aid_size_cell_clipart2

0xe7f3,	// (0x00072f56) grid_imed_clipart_pane

0xcc38,	// (0x0007139b) scroll_pane_cp031

0x43fb,	// (0x00068b5e) cell_imed_clipart_pane_ParamLimits

0x43fb,	// (0x00068b5e) cell_imed_clipart_pane

0x4418,	// (0x00068b7b) cell_imed_clipart_pane_g1

0xa396,	// (0x0006eaf9) grid_highlight_pane_cp014

0x40ca,	// (0x0006882d) main_clock2_pane_g1_ParamLimits

0x40ca,	// (0x0006882d) main_clock2_pane_g1

0x420b,	// (0x0006896e) aid_call2_pane_cp10

0x421d,	// (0x00068980) aid_call_pane_cp10

0xca21,	// (0x00071184) popup_clock_analogue_window_cp10_g1

0xca21,	// (0x00071184) popup_clock_analogue_window_cp10_g2

0x422f,	// (0x00068992) popup_clock_analogue_window_cp10_g3

0x422f,	// (0x00068992) popup_clock_analogue_window_cp10_g4

0xca21,	// (0x00071184) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x00073e65) popup_clock_analogue_window_cp10_g

0x4245,	// (0x000689a8) popup_clock_analogue_window_cp10_t1

0x4276,	// (0x000689d9) clock_digital_number_pane_cp10_ParamLimits

0x4276,	// (0x000689d9) clock_digital_number_pane_cp10

0x4290,	// (0x000689f3) clock_digital_number_pane_cp11_ParamLimits

0x4290,	// (0x000689f3) clock_digital_number_pane_cp11

0x42aa,	// (0x00068a0d) clock_digital_number_pane_cp12_ParamLimits

0x42aa,	// (0x00068a0d) clock_digital_number_pane_cp12

0x42c6,	// (0x00068a29) clock_digital_number_pane_cp13_ParamLimits

0x42c6,	// (0x00068a29) clock_digital_number_pane_cp13

0x42e2,	// (0x00068a45) clock_digital_separator_pane_cp10_ParamLimits

0x42e2,	// (0x00068a45) clock_digital_separator_pane_cp10

0x42fe,	// (0x00068a61) popup_clock_digital_window_cp02_t1_ParamLimits

0x42fe,	// (0x00068a61) popup_clock_digital_window_cp02_t1

0xaac6,	// (0x0006f229) clock_digital_number_pane_cp10_g1

0xaac6,	// (0x0006f229) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x00073e80) clock_digital_number_pane_cp10_g

0xaac6,	// (0x0006f229) clock_digital_separator_pane_cp10_g1

0xaac6,	// (0x0006f229) clock_digital_separator_pane_g2_cp10

0xcabc,	// (0x0007121f) navi_pane_vded_g4

0xcac5,	// (0x00071228) navi_pane_vded_g5

0xcace,	// (0x00071231) navi_pane_vded_t1

0xa421,	// (0x0006eb84) main_vded_pane

0x4421,	// (0x00068b84) main_vded_pane_g1

0x442d,	// (0x00068b90) main_vded_pane_g2

0x4439,	// (0x00068b9c) main_vded_pane_g3

0x0002,

0xf722,	// (0x00073e85) main_vded_pane_g

0x4445,	// (0x00068ba8) main_vded_pane_t1

0x4453,	// (0x00068bb6) main_vded_pane_t2

0x0001,

0xf729,	// (0x00073e8c) main_vded_pane_t

0x4461,	// (0x00068bc4) vded_slider_pane

0x446b,	// (0x00068bce) vded_video_pane

0xe7fd,	// (0x00072f60) vded_video_pane_g1

0x4477,	// (0x00068bda) vded_video_pane_g2

0xbfcd,	// (0x00070730) vded_video_pane_g3

0x0002,

0xf72e,	// (0x00073e91) vded_video_pane_g

0xe807,	// (0x00072f6a) vded_slider_pane_g1

0xe00f,	// (0x00072772) vded_slider_pane_g2

0xe810,	// (0x00072f73) vded_slider_pane_g3

0xe819,	// (0x00072f7c) vded_slider_pane_g4

0xe822,	// (0x00072f85) vded_slider_pane_g5

0x0004,

0xf735,	// (0x00073e98) vded_slider_pane_g

0x3f2e,	// (0x00068691) mup3_rocker_pane_ParamLimits

0x3f2e,	// (0x00068691) mup3_rocker_pane

0x4480,	// (0x00068be3) mup3_control_keys_pane_g1

0x4488,	// (0x00068beb) mup3_control_keys_pane_g2

0x4490,	// (0x00068bf3) mup3_control_keys_pane_g3

0x4498,	// (0x00068bfb) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x00073ea3) mup3_control_keys_pane_g

0x037d,	// (0x00064ae0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x037d,	// (0x00064ae0) popup_toolbar2_fixed_window_cp01

0x3f64,	// (0x000686c7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x3f64,	// (0x000686c7) popup_toolbar2_fixed_window_cp02

0xd2e8,	// (0x00071a4b) popup_call2_audio_second_window_t4_ParamLimits

0xd2e8,	// (0x00071a4b) popup_call2_audio_second_window_t4

0xd816,	// (0x00071f79) popup_call2_audio_first_window_t6_ParamLimits

0xd816,	// (0x00071f79) popup_call2_audio_first_window_t6

0xda54,	// (0x000721b7) popup_call2_audio_out_window_t6_ParamLimits

0xda54,	// (0x000721b7) popup_call2_audio_out_window_t6

0xa421,	// (0x0006eb84) main_vitu_pane

0xaaf0,	// (0x0006f253) aid_size_cell_itu_ParamLimits

0xaaf0,	// (0x0006f253) aid_size_cell_itu

0xaaf0,	// (0x0006f253) bg_popup_window_pane_cp08_ParamLimits

0xaaf0,	// (0x0006f253) bg_popup_window_pane_cp08

0xaaf0,	// (0x0006f253) field_vitu_entry_pane_ParamLimits

0xaaf0,	// (0x0006f253) field_vitu_entry_pane

0xaaf0,	// (0x0006f253) grid_vitu_function_pane_ParamLimits

0xaaf0,	// (0x0006f253) grid_vitu_function_pane

0xaaf0,	// (0x0006f253) grid_vitu_itu_pane_ParamLimits

0xaaf0,	// (0x0006f253) grid_vitu_itu_pane

0xaaf0,	// (0x0006f253) cell_vitu_itu_pane_ParamLimits

0xaaf0,	// (0x0006f253) cell_vitu_itu_pane

0xaaf0,	// (0x0006f253) cell_vitu_function_pane_ParamLimits

0xaaf0,	// (0x0006f253) cell_vitu_function_pane

0xaaf0,	// (0x0006f253) bg_popup_sub_pane_cp08_ParamLimits

0xaaf0,	// (0x0006f253) bg_popup_sub_pane_cp08

0xbfd7,	// (0x0007073a) field_vitu_entry_pane_t1_ParamLimits

0xbfd7,	// (0x0007073a) field_vitu_entry_pane_t1

0xe82b,	// (0x00072f8e) field_vitu_entry_pane_t2_ParamLimits

0xe82b,	// (0x00072f8e) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x00073eac) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x00073eac) field_vitu_entry_pane_t

0xe099,	// (0x000727fc) bg_button_pane_cp05_ParamLimits

0xe099,	// (0x000727fc) bg_button_pane_cp05

0xe848,	// (0x00072fab) cell_vitu_itu_pane_g1

0xcdd8,	// (0x0007153b) cell_vitu_itu_pane_t1_ParamLimits

0xcdd8,	// (0x0007153b) cell_vitu_itu_pane_t1

0xcdd8,	// (0x0007153b) cell_vitu_itu_pane_t2_ParamLimits

0xcdd8,	// (0x0007153b) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x00073eb1) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x00073eb1) cell_vitu_itu_pane_t

0xa396,	// (0x0006eaf9) bg_button_pane_cp07

0xbfcd,	// (0x00070730) cell_vitu_function_pane_g1

0xab95,	// (0x0006f2f8) main_calc_pane_g1

0x020d,	// (0x00064970) aid_visual_content_pane

0xa421,	// (0x0006eb84) main_vradio_pane

0xab57,	// (0x0006f2ba) main_vradio_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) main_vradio_pane_g1

0xab65,	// (0x0006f2c8) main_vradio_pane_g2_ParamLimits

0xab65,	// (0x0006f2c8) main_vradio_pane_g2

0x0001,

0xf755,	// (0x00073eb8) main_vradio_pane_g_ParamLimits

0xf755,	// (0x00073eb8) main_vradio_pane_g

0xbfd7,	// (0x0007073a) main_vradio_pane_t1_ParamLimits

0xbfd7,	// (0x0007073a) main_vradio_pane_t1

0xbfd7,	// (0x0007073a) main_vradio_pane_t2_ParamLimits

0xbfd7,	// (0x0007073a) main_vradio_pane_t2

0xbfeb,	// (0x0007074e) main_vradio_pane_t3_ParamLimits

0xbfeb,	// (0x0007074e) main_vradio_pane_t3

0x0002,

0xf75a,	// (0x00073ebd) main_vradio_pane_t_ParamLimits

0xf75a,	// (0x00073ebd) main_vradio_pane_t

0xaaf0,	// (0x0006f253) vradio_rocker_control_pane_ParamLimits

0xaaf0,	// (0x0006f253) vradio_rocker_control_pane

0xaaf0,	// (0x0006f253) vradio_station_info_pane_ParamLimits

0xaaf0,	// (0x0006f253) vradio_station_info_pane

0xaaf0,	// (0x0006f253) vradio_frequency_info_pane_ParamLimits

0xaaf0,	// (0x0006f253) vradio_frequency_info_pane

0xbfcd,	// (0x00070730) vradio_station_info_pane_g1

0xcdd8,	// (0x0007153b) vradio_station_info_pane_t1_ParamLimits

0xcdd8,	// (0x0007153b) vradio_station_info_pane_t1

0xbfeb,	// (0x0007074e) vradio_station_info_pane_t2_ParamLimits

0xbfeb,	// (0x0007074e) vradio_station_info_pane_t2

0x0001,

0xf761,	// (0x00073ec4) vradio_station_info_pane_t_ParamLimits

0xf761,	// (0x00073ec4) vradio_station_info_pane_t

0xa396,	// (0x0006eaf9) vradio_tuning_pane

0x44a8,	// (0x00068c0b) vradio_rocker_control_pane_g1

0xe864,	// (0x00072fc7) vradio_rocker_control_pane_g2

0x44b2,	// (0x00068c15) vradio_rocker_control_pane_g3

0x44bc,	// (0x00068c1f) vradio_rocker_control_pane_g4

0x44c6,	// (0x00068c29) vradio_rocker_control_pane_g5

0x0004,

0xf766,	// (0x00073ec9) vradio_rocker_control_pane_g

0xbfcd,	// (0x00070730) vradio_frequency_info_pane_g1

0xbfd7,	// (0x0007073a) vradio_frequency_info_pane_t1_ParamLimits

0xbfd7,	// (0x0007073a) vradio_frequency_info_pane_t1

0x44d0,	// (0x00068c33) vradio_tuning_pane_g1

0x44db,	// (0x00068c3e) vradio_tuning_pane_t1

0xa3cc,	// (0x0006eb2f) area_side_right_pane_ParamLimits

0xa3cc,	// (0x0006eb2f) area_side_right_pane

0xde46,	// (0x000725a9) status_small_pane_g1

0xde4e,	// (0x000725b1) status_small_pane_g2

0xde57,	// (0x000725ba) status_small_pane_g3

0xde60,	// (0x000725c3) status_small_pane_g4

0x0003,

0xf532,	// (0x00073c95) status_small_pane_g

0xde69,	// (0x000725cc) status_small_pane_t1

0xa421,	// (0x0006eb84) main_video3_pane

0xa396,	// (0x0006eaf9) cams_zoom_vslider_pane

0xe86c,	// (0x00072fcf) image3_wide_pane_ParamLimits

0xe86c,	// (0x00072fcf) image3_wide_pane

0xa396,	// (0x0006eaf9) image3_wide_small_pane

0xe886,	// (0x00072fe9) main_video3_pane_g1_ParamLimits

0xe886,	// (0x00072fe9) main_video3_pane_g1

0xe886,	// (0x00072fe9) main_video3_pane_g2_ParamLimits

0xe886,	// (0x00072fe9) main_video3_pane_g2

0x0001,

0xf771,	// (0x00073ed4) main_video3_pane_g_ParamLimits

0xf771,	// (0x00073ed4) main_video3_pane_g

0xe8a4,	// (0x00073007) main_video3_pane_t1_ParamLimits

0xe8a4,	// (0x00073007) main_video3_pane_t1

0xe8a4,	// (0x00073007) main_video3_pane_t2_ParamLimits

0xe8a4,	// (0x00073007) main_video3_pane_t2

0xe8a4,	// (0x00073007) main_video3_pane_t3_ParamLimits

0xe8a4,	// (0x00073007) main_video3_pane_t3

0x0002,

0xf776,	// (0x00073ed9) main_video3_pane_t_ParamLimits

0xf776,	// (0x00073ed9) main_video3_pane_t

0xbfcd,	// (0x00070730) cams_zoom_vslider_pane_g1

0xbfcd,	// (0x00070730) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00073812) cams_zoom_vslider_pane_g

0xa396,	// (0x0006eaf9) small_slider_vertical_pane

0xbfcd,	// (0x00070730) small_slider_vertical_pane_g1

0xbfcd,	// (0x00070730) small_slider_vertical_pane_g2

0xe8cb,	// (0x0007302e) small_slider_vertical_pane_g3

0x0002,

0xf77d,	// (0x00073ee0) small_slider_vertical_pane_g

0xa421,	// (0x0006eb84) main_hwr_training_pane

0xe8d4,	// (0x00073037) hwr_training_instruct_pane_ParamLimits

0xe8d4,	// (0x00073037) hwr_training_instruct_pane

0x44ea,	// (0x00068c4d) hwr_training_navi_pane_ParamLimits

0x44ea,	// (0x00068c4d) hwr_training_navi_pane

0x4509,	// (0x00068c6c) hwr_training_write_pane_ParamLimits

0x4509,	// (0x00068c6c) hwr_training_write_pane

0xa396,	// (0x0006eaf9) bg_frame_shadow_pane

0xe90b,	// (0x0007306e) hwr_training_write_pane_g1

0xe913,	// (0x00073076) hwr_training_write_pane_g2

0xe91b,	// (0x0007307e) hwr_training_write_pane_g3

0xe923,	// (0x00073086) hwr_training_write_pane_g4

0xe92b,	// (0x0007308e) hwr_training_write_pane_g5

0xe933,	// (0x00073096) hwr_training_write_pane_g6

0xe93b,	// (0x0007309e) hwr_training_write_pane_g7

0x0006,

0xf784,	// (0x00073ee7) hwr_training_write_pane_g

0xae24,	// (0x0006f587) hwr_training_navi_pane_g1_ParamLimits

0xae24,	// (0x0006f587) hwr_training_navi_pane_g1

0xae36,	// (0x0006f599) hwr_training_navi_pane_g2_ParamLimits

0xae36,	// (0x0006f599) hwr_training_navi_pane_g2

0xae48,	// (0x0006f5ab) hwr_training_navi_pane_g3_ParamLimits

0xae48,	// (0x0006f5ab) hwr_training_navi_pane_g3

0xae58,	// (0x0006f5bb) hwr_training_navi_pane_g4_ParamLimits

0xae58,	// (0x0006f5bb) hwr_training_navi_pane_g4

0x0004,

0xf793,	// (0x00073ef6) hwr_training_navi_pane_g_ParamLimits

0xf793,	// (0x00073ef6) hwr_training_navi_pane_g

0xae65,	// (0x0006f5c8) hwr_training_navi_pane_t1

0x4551,	// (0x00068cb4) list_single_hwr_training_instruct_pane_ParamLimits

0x4551,	// (0x00068cb4) list_single_hwr_training_instruct_pane

0xe943,	// (0x000730a6) list_single_hwr_training_instruct_pane_t1

0xe1f9,	// (0x0007295c) bg_frame_shadow_pane_g1

0xe952,	// (0x000730b5) bg_frame_shadow_pane_g2

0xe95a,	// (0x000730bd) bg_frame_shadow_pane_g3

0xe984,	// (0x000730e7) bg_frame_shadow_pane_g4

0xe98c,	// (0x000730ef) bg_frame_shadow_pane_g5

0xe994,	// (0x000730f7) bg_frame_shadow_pane_g6

0xe99c,	// (0x000730ff) bg_frame_shadow_pane_g7

0xc0da,	// (0x0007083d) bg_frame_shadow_pane_g8

0x0007,

0xf79e,	// (0x00073f01) bg_frame_shadow_pane_g

0xa421,	// (0x0006eb84) main_video_tele_dialer_pane

0x456d,	// (0x00068cd0) aid_size_cell_video_keypad_ParamLimits

0x456d,	// (0x00068cd0) aid_size_cell_video_keypad

0x4587,	// (0x00068cea) grid_video_dialer_keypad_pane_ParamLimits

0x4587,	// (0x00068cea) grid_video_dialer_keypad_pane

0x45d3,	// (0x00068d36) video_down_pane_cp_ParamLimits

0x45d3,	// (0x00068d36) video_down_pane_cp

0x4605,	// (0x00068d68) cell_video_dialer_keypad_pane_ParamLimits

0x4605,	// (0x00068d68) cell_video_dialer_keypad_pane

0xe9a4,	// (0x00073107) bg_button_pane_cp08_ParamLimits

0xe9a4,	// (0x00073107) bg_button_pane_cp08

0x462b,	// (0x00068d8e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x462b,	// (0x00068d8e) cell_video_dialer_keypad_pane_g1

0x3f18,	// (0x0006867b) mup3_rocker2_pane_ParamLimits

0x3f18,	// (0x0006867b) mup3_rocker2_pane

0xbfcd,	// (0x00070730) mup3_rocker2_pane_g1

0x304a,	// (0x000677ad) main_dialer2_pane

0xa421,	// (0x0006eb84) main_mp4_pane

0xae91,	// (0x0006f5f4) main_mp4_pane_g1_ParamLimits

0xae91,	// (0x0006f5f4) main_mp4_pane_g1

0xae91,	// (0x0006f5f4) main_mp4_pane_g2_ParamLimits

0xae91,	// (0x0006f5f4) main_mp4_pane_g2

0x4666,	// (0x00068dc9) main_mp4_pane_g3_ParamLimits

0x4666,	// (0x00068dc9) main_mp4_pane_g3

0xaeaf,	// (0x0006f612) main_mp4_pane_g4_ParamLimits

0xaeaf,	// (0x0006f612) main_mp4_pane_g4

0xaed7,	// (0x0006f63a) main_mp4_pane_g5_ParamLimits

0xaed7,	// (0x0006f63a) main_mp4_pane_g5

0x0007,

0xf7be,	// (0x00073f21) main_mp4_pane_g_ParamLimits

0xf7be,	// (0x00073f21) main_mp4_pane_g

0xaf3f,	// (0x0006f6a2) main_mp4_pane_t1_ParamLimits

0xaf3f,	// (0x0006f6a2) main_mp4_pane_t1

0xafa1,	// (0x0006f704) main_mp4_pane_t2_ParamLimits

0xafa1,	// (0x0006f704) main_mp4_pane_t2

0xb005,	// (0x0006f768) main_mp4_pane_t3_ParamLimits

0xb005,	// (0x0006f768) main_mp4_pane_t3

0xb063,	// (0x0006f7c6) main_mp4_pane_t4_ParamLimits

0xb063,	// (0x0006f7c6) main_mp4_pane_t4

0x0003,

0xf7cf,	// (0x00073f32) main_mp4_pane_t_ParamLimits

0xf7cf,	// (0x00073f32) main_mp4_pane_t

0xb0c1,	// (0x0006f824) mp4_progress_pane_ParamLimits

0xb0c1,	// (0x0006f824) mp4_progress_pane

0xb0f5,	// (0x0006f858) mp4_rocker_pane_ParamLimits

0xb0f5,	// (0x0006f858) mp4_rocker_pane

0xe9b8,	// (0x0007311b) mp4_progress_pane_t1

0xe9da,	// (0x0007313d) mp4_progress_pane_t2

0x0001,

0xf7d8,	// (0x00073f3b) mp4_progress_pane_t

0xe9fc,	// (0x0007315f) mup_progress_pane_cp04

0x363c,	// (0x00067d9f) mp4_rocker_pane_g1

0xa413,	// (0x0006eb76) aid_cell_size_keypad2_ParamLimits

0xa413,	// (0x0006eb76) aid_cell_size_keypad2

0xa413,	// (0x0006eb76) dialer2_ne_pane_ParamLimits

0xa413,	// (0x0006eb76) dialer2_ne_pane

0xa413,	// (0x0006eb76) grid_dialer2_keypad_pane_ParamLimits

0xa413,	// (0x0006eb76) grid_dialer2_keypad_pane

0xe099,	// (0x000727fc) bg_popup_call_pane_cp07_ParamLimits

0xe099,	// (0x000727fc) bg_popup_call_pane_cp07

0x4698,	// (0x00068dfb) dialer2_ne_pane_t1_ParamLimits

0x4698,	// (0x00068dfb) dialer2_ne_pane_t1

0x46d8,	// (0x00068e3b) cell_dialer2_keypad_pane_ParamLimits

0x46d8,	// (0x00068e3b) cell_dialer2_keypad_pane

0xe099,	// (0x000727fc) bg_button_pane_pane_cp04_ParamLimits

0xe099,	// (0x000727fc) bg_button_pane_pane_cp04

0xab57,	// (0x0006f2ba) cell_dialer2_keypad_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) cell_dialer2_keypad_pane_g1

0x0e8c,	// (0x000655ef) aid_placing_vt_set_content_ParamLimits

0x0e8c,	// (0x000655ef) aid_placing_vt_set_content

0x0eb0,	// (0x00065613) aid_placing_vt_set_title_ParamLimits

0x0eb0,	// (0x00065613) aid_placing_vt_set_title

0xa421,	// (0x0006eb84) main_image3_pane

0x474d,	// (0x00068eb0) area_side_right_pane_cp01_ParamLimits

0x474d,	// (0x00068eb0) area_side_right_pane_cp01

0x4766,	// (0x00068ec9) main_image3_pane_g1_ParamLimits

0x4766,	// (0x00068ec9) main_image3_pane_g1

0x4774,	// (0x00068ed7) main_image3_pane_g2_ParamLimits

0x4774,	// (0x00068ed7) main_image3_pane_g2

0x479c,	// (0x00068eff) main_image3_pane_g3_ParamLimits

0x479c,	// (0x00068eff) main_image3_pane_g3

0x47c6,	// (0x00068f29) main_image3_pane_g4_ParamLimits

0x47c6,	// (0x00068f29) main_image3_pane_g4

0x0003,

0xf7e7,	// (0x00073f4a) main_image3_pane_g_ParamLimits

0xf7e7,	// (0x00073f4a) main_image3_pane_g

0x47f0,	// (0x00068f53) main_image3_pane_t1_ParamLimits

0x47f0,	// (0x00068f53) main_image3_pane_t1

0x4848,	// (0x00068fab) main_image3_pane_t2_ParamLimits

0x4848,	// (0x00068fab) main_image3_pane_t2

0x489a,	// (0x00068ffd) main_image3_pane_t3_ParamLimits

0x489a,	// (0x00068ffd) main_image3_pane_t3

0x0003,

0xf7f0,	// (0x00073f53) main_image3_pane_t_ParamLimits

0xf7f0,	// (0x00073f53) main_image3_pane_t

0xaaf0,	// (0x0006f253) grid_sctrl_middle_pane_cp01_ParamLimits

0xaaf0,	// (0x0006f253) grid_sctrl_middle_pane_cp01

0x4922,	// (0x00069085) cell_sctrl_middle_pane_cp01_ParamLimits

0x4922,	// (0x00069085) cell_sctrl_middle_pane_cp01

0x493f,	// (0x000690a2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x493f,	// (0x000690a2) cell_sctrl_middle_pane_cp01_g1

0xa421,	// (0x0006eb84) main_call4_pane

0x4954,	// (0x000690b7) aid_size_button_call4_ParamLimits

0x4954,	// (0x000690b7) aid_size_button_call4

0x4987,	// (0x000690ea) call4_windows_pane_ParamLimits

0x4987,	// (0x000690ea) call4_windows_pane

0x49a6,	// (0x00069109) grid_call4_button_pane_ParamLimits

0x49a6,	// (0x00069109) grid_call4_button_pane

0x49dd,	// (0x00069140) call4_windows_conf_pane

0x49f6,	// (0x00069159) popup_call4_audio_first_window_ParamLimits

0x49f6,	// (0x00069159) popup_call4_audio_first_window

0x4a46,	// (0x000691a9) popup_call4_audio_second_window_ParamLimits

0x4a46,	// (0x000691a9) popup_call4_audio_second_window

0x4a5f,	// (0x000691c2) popup_call4_audio_wait_window_ParamLimits

0x4a5f,	// (0x000691c2) popup_call4_audio_wait_window

0x4a6d,	// (0x000691d0) cell_call4_button_pane_ParamLimits

0x4a6d,	// (0x000691d0) cell_call4_button_pane

0x4a94,	// (0x000691f7) bg_button_pane_cp09_ParamLimits

0x4a94,	// (0x000691f7) bg_button_pane_cp09

0x4aa0,	// (0x00069203) cell_call4_button_pane_g1_ParamLimits

0x4aa0,	// (0x00069203) cell_call4_button_pane_g1

0x4ac6,	// (0x00069229) cell_call4_button_pane_t1_ParamLimits

0x4ac6,	// (0x00069229) cell_call4_button_pane_t1

0xea45,	// (0x000731a8) popup_call4_audio_conf_window_ParamLimits

0xea45,	// (0x000731a8) popup_call4_audio_conf_window

0x3f7a,	// (0x000686dd) mup3_progress_pane_t1_ParamLimits

0x3f99,	// (0x000686fc) mup3_progress_pane_t2_ParamLimits

0xe533,	// (0x00072c96) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x00073e2d) mup3_progress_pane_t_ParamLimits

0xe550,	// (0x00072cb3) mup_progress_pane_cp03_ParamLimits

0x44a0,	// (0x00068c03) mup3_control_keys_pane_g4_copy1

0xb0f5,	// (0x0006f858) mp4_rocker2_pane_ParamLimits

0xb0f5,	// (0x0006f858) mp4_rocker2_pane

0xb171,	// (0x0006f8d4) mp4_rocker2_pane_g1

0xb171,	// (0x0006f8d4) mp4_rocker2_pane_g2

0xb171,	// (0x0006f8d4) mp4_rocker2_pane_g3

0xb171,	// (0x0006f8d4) mp4_rocker2_pane_g4

0xb171,	// (0x0006f8d4) mp4_rocker2_pane_g5

0x0004,

0xf7f9,	// (0x00073f5c) mp4_rocker2_pane_g

0xa421,	// (0x0006eb84) main_camera4_pane

0xa421,	// (0x0006eb84) main_video4_pane

0x45a1,	// (0x00068d04) main_video_tele_dialer_pane_t1_ParamLimits

0x45a1,	// (0x00068d04) main_video_tele_dialer_pane_t1

0x45ba,	// (0x00068d1d) main_video_tele_dialer_pane_t2_ParamLimits

0x45ba,	// (0x00068d1d) main_video_tele_dialer_pane_t2

0x0001,

0xf7af,	// (0x00073f12) main_video_tele_dialer_pane_t_ParamLimits

0xf7af,	// (0x00073f12) main_video_tele_dialer_pane_t

0x4b04,	// (0x00069267) cam4_autofocus_pane_ParamLimits

0x4b04,	// (0x00069267) cam4_autofocus_pane

0x4b1a,	// (0x0006927d) cam4_image_uncrop_pane_ParamLimits

0x4b1a,	// (0x0006927d) cam4_image_uncrop_pane

0x4b33,	// (0x00069296) cam4_indicators_pane_ParamLimits

0x4b33,	// (0x00069296) cam4_indicators_pane

0x4b63,	// (0x000692c6) main_camera4_pane_g1_ParamLimits

0x4b63,	// (0x000692c6) main_camera4_pane_g1

0x4b75,	// (0x000692d8) main_camera4_pane_g2_ParamLimits

0x4b75,	// (0x000692d8) main_camera4_pane_g2

0x4b88,	// (0x000692eb) main_camera4_pane_g3_ParamLimits

0x4b88,	// (0x000692eb) main_camera4_pane_g3

0x4b9b,	// (0x000692fe) main_camera4_pane_g4_ParamLimits

0x4b9b,	// (0x000692fe) main_camera4_pane_g4

0x4bae,	// (0x00069311) main_camera4_pane_g5_ParamLimits

0x4bae,	// (0x00069311) main_camera4_pane_g5

0x0005,

0xf804,	// (0x00073f67) main_camera4_pane_g_ParamLimits

0xf804,	// (0x00073f67) main_camera4_pane_g

0x4bd2,	// (0x00069335) main_camera4_pane_t1_ParamLimits

0x4bd2,	// (0x00069335) main_camera4_pane_t1

0x4c1e,	// (0x00069381) bg_tb_trans_pane_cp06

0xb1b3,	// (0x0006f916) cam4_indicators_pane_g1

0xb1c4,	// (0x0006f927) cam4_indicators_pane_g2

0x0002,

0xf81f,	// (0x00073f82) cam4_indicators_pane_g

0xb1dc,	// (0x0006f93f) cam4_indicators_pane_t1

0x4c44,	// (0x000693a7) main_video4_pane_g1_ParamLimits

0x4c44,	// (0x000693a7) main_video4_pane_g1

0x4c53,	// (0x000693b6) main_video4_pane_g2_ParamLimits

0x4c53,	// (0x000693b6) main_video4_pane_g2

0x4c63,	// (0x000693c6) main_video4_pane_g3_ParamLimits

0x4c63,	// (0x000693c6) main_video4_pane_g3

0x4c73,	// (0x000693d6) main_video4_pane_g4_ParamLimits

0x4c73,	// (0x000693d6) main_video4_pane_g4

0x0004,

0xf826,	// (0x00073f89) main_video4_pane_g_ParamLimits

0xf826,	// (0x00073f89) main_video4_pane_g

0x4c93,	// (0x000693f6) vid4_indicators_pane_ParamLimits

0x4c93,	// (0x000693f6) vid4_indicators_pane

0x4cbd,	// (0x00069420) video4_image_uncrop_cif_pane_ParamLimits

0x4cbd,	// (0x00069420) video4_image_uncrop_cif_pane

0x4cd7,	// (0x0006943a) video4_image_uncrop_nhd_pane_ParamLimits

0x4cd7,	// (0x0006943a) video4_image_uncrop_nhd_pane

0x4b1a,	// (0x0006927d) video4_image_uncrop_vga_pane_ParamLimits

0x4b1a,	// (0x0006927d) video4_image_uncrop_vga_pane

0xa413,	// (0x0006eb76) bg_tb_trans_pane_cp07

0xb20a,	// (0x0006f96d) vid4_indicators_pane_g1

0xb220,	// (0x0006f983) vid4_indicators_pane_g2

0xb234,	// (0x0006f997) vid4_indicators_pane_g3

0x0004,

0xf831,	// (0x00073f94) vid4_indicators_pane_g

0xb265,	// (0x0006f9c8) vid4_indicators_pane_t1

0x4cee,	// (0x00069451) cam4_autofocus_pane_g1

0x4cf6,	// (0x00069459) cam4_autofocus_pane_g2

0x4cfe,	// (0x00069461) cam4_autofocus_pane_g3

0x0002,

0xf83c,	// (0x00073f9f) cam4_autofocus_pane_g

0x4d06,	// (0x00069469) cam4_autofocus_pane_g3_copy1

0x45e9,	// (0x00068d4c) video_down_pane_cp_t1

0x45f7,	// (0x00068d5a) video_down_pane_cp_t2

0x0001,

0xf7b4,	// (0x00073f17) video_down_pane_cp_t

0xa413,	// (0x0006eb76) popup_vitu2_window_ParamLimits

0xa413,	// (0x0006eb76) popup_vitu2_window

0x4d0e,	// (0x00069471) aid_size_cell2_itu2_ParamLimits

0x4d0e,	// (0x00069471) aid_size_cell2_itu2

0x4d34,	// (0x00069497) aid_size_cell_itu2_ParamLimits

0x4d34,	// (0x00069497) aid_size_cell_itu2

0x4d92,	// (0x000694f5) bg_popup_window_pane_cp09_ParamLimits

0x4d92,	// (0x000694f5) bg_popup_window_pane_cp09

0x4da0,	// (0x00069503) field_vitu2_entry_pane_ParamLimits

0x4da0,	// (0x00069503) field_vitu2_entry_pane

0x4dc8,	// (0x0006952b) grid_vitu2_function_pane_ParamLimits

0x4dc8,	// (0x0006952b) grid_vitu2_function_pane

0x4e19,	// (0x0006957c) grid_vitu2_itu_pane_ParamLimits

0x4e19,	// (0x0006957c) grid_vitu2_itu_pane

0x4ea9,	// (0x0006960c) cell_vitu2_itu_pane_ParamLimits

0x4ea9,	// (0x0006960c) cell_vitu2_itu_pane

0x4ed7,	// (0x0006963a) cell_vitu2_function_pane_ParamLimits

0x4ed7,	// (0x0006963a) cell_vitu2_function_pane

0xea5f,	// (0x000731c2) bg_popup_call_pane_cp08_ParamLimits

0xea5f,	// (0x000731c2) bg_popup_call_pane_cp08

0xea76,	// (0x000731d9) field_vitu2_entry_pane_g1

0xea82,	// (0x000731e5) field_vitu2_entry_pane_g2

0x0002,

0xf843,	// (0x00073fa6) field_vitu2_entry_pane_g

0x4f1b,	// (0x0006967e) field_vitu2_entry_pane_t1_ParamLimits

0x4f1b,	// (0x0006967e) field_vitu2_entry_pane_t1

0xea8e,	// (0x000731f1) field_vitu2_entry_pane_t2_ParamLimits

0xea8e,	// (0x000731f1) field_vitu2_entry_pane_t2

0x0001,

0xf84a,	// (0x00073fad) field_vitu2_entry_pane_t_ParamLimits

0xf84a,	// (0x00073fad) field_vitu2_entry_pane_t

0x4f4b,	// (0x000696ae) bg_button_pane_cp010_ParamLimits

0x4f4b,	// (0x000696ae) bg_button_pane_cp010

0x4f59,	// (0x000696bc) cell_vitu2_itu_pane_g1

0x4f7f,	// (0x000696e2) cell_vitu2_itu_pane_t1_ParamLimits

0x4f7f,	// (0x000696e2) cell_vitu2_itu_pane_t1

0x00e5,	// (0x00064848) cell_vitu2_itu_pane_t2_ParamLimits

0x00e5,	// (0x00064848) cell_vitu2_itu_pane_t2

0x0002,

0xf854,	// (0x00073fb7) cell_vitu2_itu_pane_t_ParamLimits

0xf854,	// (0x00073fb7) cell_vitu2_itu_pane_t

0xa413,	// (0x0006eb76) bg_button_pane_cp011

0x4fdd,	// (0x00069740) cell_vitu2_function_pane_g1

0xa421,	// (0x0006eb84) main_myfav_hc_pane

0x48ea,	// (0x0006904d) popup_image3_note_pane_ParamLimits

0x48ea,	// (0x0006904d) popup_image3_note_pane

0x4906,	// (0x00069069) popup_image3_tool_bar_pane_ParamLimits

0x4906,	// (0x00069069) popup_image3_tool_bar_pane

0x0173,	// (0x000648d6) cell_vitu2_itu_pane_t3_ParamLimits

0x0173,	// (0x000648d6) cell_vitu2_itu_pane_t3

0xa396,	// (0x0006eaf9) bg_popup_trans_pane

0xeab3,	// (0x00073216) grid_image3_tool_bar_pane

0xeabd,	// (0x00073220) bg_popup_trans_pane_g1

0xc3f5,	// (0x00070b58) bg_popup_trans_pane_g2

0xeac5,	// (0x00073228) bg_popup_trans_pane_g3

0xeacd,	// (0x00073230) bg_popup_trans_pane_g4

0xead5,	// (0x00073238) bg_popup_trans_pane_g5

0xeadd,	// (0x00073240) bg_popup_trans_pane_g6

0xeae5,	// (0x00073248) bg_popup_trans_pane_g7

0xeaed,	// (0x00073250) bg_popup_trans_pane_g8

0xc3d5,	// (0x00070b38) bg_popup_trans_pane_g9

0x0008,

0xf85b,	// (0x00073fbe) bg_popup_trans_pane_g

0xeaf5,	// (0x00073258) cell_image3_tool_bar_pane_ParamLimits

0xeaf5,	// (0x00073258) cell_image3_tool_bar_pane

0xbfcd,	// (0x00070730) cell_image3_tool_bar_pane_g1

0xa396,	// (0x0006eaf9) bg_popup_trans_pane_cp1

0xeb0b,	// (0x0007326e) popup_image3_note_pane_t1

0xeb19,	// (0x0007327c) popup_image3_note_pane_t2

0xeb27,	// (0x0007328a) popup_image3_note_pane_t3

0x0002,

0xf86e,	// (0x00073fd1) popup_image3_note_pane_t

0xeb37,	// (0x0007329a) popup_image3_note_pane_t3_copy1

0x4ff1,	// (0x00069754) bg_myfav_hc_instruction_pane_ParamLimits

0x4ff1,	// (0x00069754) bg_myfav_hc_instruction_pane

0x5009,	// (0x0006976c) cell_myfav_contact_pane_ParamLimits

0x5009,	// (0x0006976c) cell_myfav_contact_pane

0x5025,	// (0x00069788) cell_myfav_contact_pane_cp1_ParamLimits

0x5025,	// (0x00069788) cell_myfav_contact_pane_cp1

0x503d,	// (0x000697a0) cell_myfav_contact_pane_cp2_ParamLimits

0x503d,	// (0x000697a0) cell_myfav_contact_pane_cp2

0x5055,	// (0x000697b8) cell_myfav_contact_pane_cp3_ParamLimits

0x5055,	// (0x000697b8) cell_myfav_contact_pane_cp3

0x506c,	// (0x000697cf) cell_myfav_contact_pane_cp4_ParamLimits

0x506c,	// (0x000697cf) cell_myfav_contact_pane_cp4

0x5084,	// (0x000697e7) cell_myfav_contact_pane_cp5_ParamLimits

0x5084,	// (0x000697e7) cell_myfav_contact_pane_cp5

0x5098,	// (0x000697fb) cell_myfav_contact_pane_cp6_ParamLimits

0x5098,	// (0x000697fb) cell_myfav_contact_pane_cp6

0x50ae,	// (0x00069811) cell_myfav_contact_pane_cp7_ParamLimits

0x50ae,	// (0x00069811) cell_myfav_contact_pane_cp7

0xeb45,	// (0x000732a8) listscroll_gen_pane_cp05

0x50c6,	// (0x00069829) main_myfav_hc_pane_g1_ParamLimits

0x50c6,	// (0x00069829) main_myfav_hc_pane_g1

0x50e0,	// (0x00069843) main_myfav_hc_pane_g2_ParamLimits

0x50e0,	// (0x00069843) main_myfav_hc_pane_g2

0x0002,

0xf875,	// (0x00073fd8) main_myfav_hc_pane_g_ParamLimits

0xf875,	// (0x00073fd8) main_myfav_hc_pane_g

0x5114,	// (0x00069877) main_myfav_hc_pane_t1_ParamLimits

0x5114,	// (0x00069877) main_myfav_hc_pane_t1

0xeb4e,	// (0x000732b1) main_myfav_hc_pane_t2_ParamLimits

0xeb4e,	// (0x000732b1) main_myfav_hc_pane_t2

0xeb60,	// (0x000732c3) main_myfav_hc_pane_t3_ParamLimits

0xeb60,	// (0x000732c3) main_myfav_hc_pane_t3

0x512b,	// (0x0006988e) main_myfav_hc_pane_t4_ParamLimits

0x512b,	// (0x0006988e) main_myfav_hc_pane_t4

0x0004,

0xf87c,	// (0x00073fdf) main_myfav_hc_pane_t_ParamLimits

0xf87c,	// (0x00073fdf) main_myfav_hc_pane_t

0xbfcd,	// (0x00070730) bg_myfav_hc_instruction_pane_g1

0xeb72,	// (0x000732d5) cell_myfav_contact_pane_g1_ParamLimits

0xeb72,	// (0x000732d5) cell_myfav_contact_pane_g1

0xeb72,	// (0x000732d5) cell_myfav_contact_pane_g2_ParamLimits

0xeb72,	// (0x000732d5) cell_myfav_contact_pane_g2

0xeb7e,	// (0x000732e1) cell_myfav_contact_pane_g3_ParamLimits

0xeb7e,	// (0x000732e1) cell_myfav_contact_pane_g3

0xab65,	// (0x0006f2c8) cell_myfav_contact_pane_g4_ParamLimits

0xab65,	// (0x0006f2c8) cell_myfav_contact_pane_g4

0xeb8b,	// (0x000732ee) cell_myfav_contact_pane_g5_ParamLimits

0xeb8b,	// (0x000732ee) cell_myfav_contact_pane_g5

0x0004,

0xf887,	// (0x00073fea) cell_myfav_contact_pane_g_ParamLimits

0xf887,	// (0x00073fea) cell_myfav_contact_pane_g

0x50fa,	// (0x0006985d) main_myfav_hc_pane_g3_ParamLimits

0x50fa,	// (0x0006985d) main_myfav_hc_pane_g3

0x007f,	// (0x000647e2) popup_adpt_find_window

0x5155,	// (0x000698b8) afind_page_pane_ParamLimits

0x5155,	// (0x000698b8) afind_page_pane

0x516b,	// (0x000698ce) aid_size_cell_afind_ParamLimits

0x516b,	// (0x000698ce) aid_size_cell_afind

0x5189,	// (0x000698ec) bg_popup_sub_pane_cp09_ParamLimits

0x5189,	// (0x000698ec) bg_popup_sub_pane_cp09

0x519b,	// (0x000698fe) find_pane_cp01_ParamLimits

0x519b,	// (0x000698fe) find_pane_cp01

0xeb97,	// (0x000732fa) grid_afind_control_pane_ParamLimits

0xeb97,	// (0x000732fa) grid_afind_control_pane

0x51af,	// (0x00069912) grid_afind_pane_ParamLimits

0x51af,	// (0x00069912) grid_afind_pane

0x51d1,	// (0x00069934) cell_afind_pane_ParamLimits

0x51d1,	// (0x00069934) cell_afind_pane

0xbfcd,	// (0x00070730) afind_page_pane_g1

0x523a,	// (0x0006999d) afind_page_pane_g2

0x5242,	// (0x000699a5) afind_page_pane_g3

0x0002,

0xf892,	// (0x00073ff5) afind_page_pane_g

0x524a,	// (0x000699ad) afind_page_pane_t1

0xebbd,	// (0x00073320) cell_afind_grid_control_pane_ParamLimits

0xebbd,	// (0x00073320) cell_afind_grid_control_pane

0xebcc,	// (0x0007332f) bg_button_pane_cp69_ParamLimits

0xebcc,	// (0x0007332f) bg_button_pane_cp69

0x5258,	// (0x000699bb) cell_afind_pane_g1_ParamLimits

0x5258,	// (0x000699bb) cell_afind_pane_g1

0x5265,	// (0x000699c8) cell_afind_pane_t1_ParamLimits

0x5265,	// (0x000699c8) cell_afind_pane_t1

0xebd8,	// (0x0007333b) bg_button_pane_cp72

0xebe0,	// (0x00073343) cell_afind_grid_control_pane_g1

0x2b22,	// (0x00067285) aid_image_placing_area_ParamLimits

0x2b22,	// (0x00067285) aid_image_placing_area

0xab57,	// (0x0006f2ba) field_vitu_entry_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) field_vitu_entry_pane_g1

0xab57,	// (0x0006f2ba) field_vitu_entry_pane_g2_ParamLimits

0xab57,	// (0x0006f2ba) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0007391f) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0007391f) field_vitu_entry_pane_g

0xe848,	// (0x00072fab) cell_vitu_itu_pane_g1_ParamLimits

0xe82b,	// (0x00072f8e) cell_vitu_itu_pane_t3_ParamLimits

0xe82b,	// (0x00072f8e) cell_vitu_itu_pane_t3

0xe9b8,	// (0x0007311b) mp4_progress_pane_t1_ParamLimits

0xe9da,	// (0x0007313d) mp4_progress_pane_t2_ParamLimits

0xf7d8,	// (0x00073f3b) mp4_progress_pane_t_ParamLimits

0xe9fc,	// (0x0007315f) mup_progress_pane_cp04_ParamLimits

0x513f,	// (0x000698a2) main_myfav_hc_pane_t5_ParamLimits

0x513f,	// (0x000698a2) main_myfav_hc_pane_t5

0xa3bc,	// (0x0006eb1f) aid_zoom_text_primary

0x007f,	// (0x000647e2) popup_adpt_find_window_ParamLimits

0xa413,	// (0x0006eb76) main_cam_set_pane

0x4b4c,	// (0x000692af) cam4_zoom_pane_ParamLimits

0x4b4c,	// (0x000692af) cam4_zoom_pane

0x5277,	// (0x000699da) main_cam_set_pane_g1_ParamLimits

0x5277,	// (0x000699da) main_cam_set_pane_g1

0x5285,	// (0x000699e8) main_cam_set_pane_g2_ParamLimits

0x5285,	// (0x000699e8) main_cam_set_pane_g2

0x0001,

0xf899,	// (0x00073ffc) main_cam_set_pane_g_ParamLimits

0xf899,	// (0x00073ffc) main_cam_set_pane_g

0x52a6,	// (0x00069a09) main_cam_set_pane_t1_ParamLimits

0x52a6,	// (0x00069a09) main_cam_set_pane_t1

0x52c1,	// (0x00069a24) main_cset_listscroll_pane_ParamLimits

0x52c1,	// (0x00069a24) main_cset_listscroll_pane

0x52e9,	// (0x00069a4c) main_cset_slider_pane_ParamLimits

0x52e9,	// (0x00069a4c) main_cset_slider_pane

0xebf1,	// (0x00073354) main_cset_list_pane_ParamLimits

0xebf1,	// (0x00073354) main_cset_list_pane

0xec01,	// (0x00073364) scroll_pane_cp028

0x5313,	// (0x00069a76) aid_area_touch_slider

0x532f,	// (0x00069a92) cset_slider_pane

0x5352,	// (0x00069ab5) main_cset_slider_pane_g1

0x5367,	// (0x00069aca) main_cset_slider_pane_g2

0x0011,

0xf89e,	// (0x00074001) main_cset_slider_pane_g

0xec3a,	// (0x0007339d) main_cset_slider_pane_t1

0x5429,	// (0x00069b8c) main_cset_slider_pane_t2

0x5443,	// (0x00069ba6) main_cset_slider_pane_t3

0x545d,	// (0x00069bc0) main_cset_slider_pane_t4

0x5477,	// (0x00069bda) main_cset_slider_pane_t5

0x5495,	// (0x00069bf8) main_cset_slider_pane_t6

0x54aa,	// (0x00069c0d) main_cset_slider_pane_t7

0x000e,

0xf8c3,	// (0x00074026) main_cset_slider_pane_t

0x55b6,	// (0x00069d19) cset_list_set_pane_ParamLimits

0x55b6,	// (0x00069d19) cset_list_set_pane

0xecd4,	// (0x00073437) aid_position_infowindow_above

0xecdc,	// (0x0007343f) aid_position_infowindow_below

0x55ca,	// (0x00069d2d) cset_list_set_pane_g1_ParamLimits

0x55ca,	// (0x00069d2d) cset_list_set_pane_g1

0x55d6,	// (0x00069d39) cset_list_set_pane_g3_ParamLimits

0x55d6,	// (0x00069d39) cset_list_set_pane_g3

0x0001,

0xf8e2,	// (0x00074045) cset_list_set_pane_g_ParamLimits

0xf8e2,	// (0x00074045) cset_list_set_pane_g

0x55e5,	// (0x00069d48) cset_list_set_pane_t1_ParamLimits

0x55e5,	// (0x00069d48) cset_list_set_pane_t1

0xaaf0,	// (0x0006f253) list_highlight_pane_cp021_ParamLimits

0xaaf0,	// (0x0006f253) list_highlight_pane_cp021

0xcc15,	// (0x00071378) cset_slider_pane_g1

0xcc27,	// (0x0007138a) cset_slider_pane_g2

0xcc1e,	// (0x00071381) cset_slider_pane_g3

0x0002,

0xf8e7,	// (0x0007404a) cset_slider_pane_g

0xc8c5,	// (0x00071028) aid_area_touch_cam4_zoom

0x55fa,	// (0x00069d5d) cam4_zoom_cont_pane

0x5602,	// (0x00069d65) cam4_zoom_pane_g1

0x560a,	// (0x00069d6d) cam4_zoom_pane_g2

0x5612,	// (0x00069d75) cam4_zoom_pane_g3

0x0002,

0xf8ee,	// (0x00074051) cam4_zoom_pane_g

0xb27c,	// (0x0006f9df) cam4_zoom_cont_pane_g1

0xb285,	// (0x0006f9e8) cam4_zoom_cont_pane_g2

0xb28e,	// (0x0006f9f1) cam4_zoom_cont_pane_g3

0x0002,

0xf8f5,	// (0x00074058) cam4_zoom_cont_pane_g

0x4972,	// (0x000690d5) call4_image_pane_ParamLimits

0x4972,	// (0x000690d5) call4_image_pane

0x49dd,	// (0x00069140) call4_windows_conf_pane_ParamLimits

0x4a24,	// (0x00069187) popup_call4_audio_in_window_ParamLimits

0x4a24,	// (0x00069187) popup_call4_audio_in_window

0xa396,	// (0x0006eaf9) bg_popup_call2_act_pane_cp02

0xea3d,	// (0x000731a0) call4_list_conf_pane

0xbfcd,	// (0x00070730) call4_image_pane_g1

0xbfcd,	// (0x00070730) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00073812) call4_image_pane_g

0xece4,	// (0x00073447) list_single_graphic_popup_conf4_pane_ParamLimits

0xece4,	// (0x00073447) list_single_graphic_popup_conf4_pane

0xa396,	// (0x0006eaf9) list_highlight_pane_cp022

0xecf9,	// (0x0007345c) list_single_graphic_popup_conf4_pane_g1

0xc91e,	// (0x00071081) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8fc,	// (0x0007405f) list_single_graphic_popup_conf4_pane_g

0xed01,	// (0x00073464) list_single_graphic_popup_conf4_pane_t1

0x0fc7,	// (0x0006572a) popup_vtel_slider_window_ParamLimits

0x0fc7,	// (0x0006572a) popup_vtel_slider_window

0xea0f,	// (0x00073172) dialer2_ne_pane_t2_ParamLimits

0xea0f,	// (0x00073172) dialer2_ne_pane_t2

0x0001,

0xf7dd,	// (0x00073f40) dialer2_ne_pane_t_ParamLimits

0xf7dd,	// (0x00073f40) dialer2_ne_pane_t

0xe099,	// (0x000727fc) bg_popup_sub_pane_cp010_ParamLimits

0xe099,	// (0x000727fc) bg_popup_sub_pane_cp010

0x561a,	// (0x00069d7d) popup_vtel_slider_window_g1_ParamLimits

0x561a,	// (0x00069d7d) popup_vtel_slider_window_g1

0x562d,	// (0x00069d90) popup_vtel_slider_window_g2_ParamLimits

0x562d,	// (0x00069d90) popup_vtel_slider_window_g2

0x0003,

0xf901,	// (0x00074064) popup_vtel_slider_window_g_ParamLimits

0xf901,	// (0x00074064) popup_vtel_slider_window_g

0x5683,	// (0x00069de6) vtel_slider_pane_ParamLimits

0x5683,	// (0x00069de6) vtel_slider_pane

0x56a5,	// (0x00069e08) vtel_slider_pane_g1_ParamLimits

0x56a5,	// (0x00069e08) vtel_slider_pane_g1

0x56b9,	// (0x00069e1c) vtel_slider_pane_g2_ParamLimits

0x56b9,	// (0x00069e1c) vtel_slider_pane_g2

0x56d1,	// (0x00069e34) vtel_slider_pane_g3_ParamLimits

0x56d1,	// (0x00069e34) vtel_slider_pane_g3

0x56a5,	// (0x00069e08) vtel_slider_pane_g4_ParamLimits

0x56a5,	// (0x00069e08) vtel_slider_pane_g4

0x56e7,	// (0x00069e4a) vtel_slider_pane_g5_ParamLimits

0x56e7,	// (0x00069e4a) vtel_slider_pane_g5

0x0004,

0xf90a,	// (0x0007406d) vtel_slider_pane_g_ParamLimits

0xf90a,	// (0x0007406d) vtel_slider_pane_g

0xa413,	// (0x0006eb76) main_gallery2_pane

0x4d60,	// (0x000694c3) aid_size_row_itut2_dropdow_list_ParamLimits

0x4d60,	// (0x000694c3) aid_size_row_itut2_dropdow_list

0x4df0,	// (0x00069553) grid_vitu2_function_top_pane_ParamLimits

0x4df0,	// (0x00069553) grid_vitu2_function_top_pane

0x4e54,	// (0x000695b7) popup_vitu2_dropdown_list_window_ParamLimits

0x4e54,	// (0x000695b7) popup_vitu2_dropdown_list_window

0x4e7b,	// (0x000695de) popup_vitu2_match_list_window

0x56fd,	// (0x00069e60) cell_vitu2_function_top_pane_ParamLimits

0x56fd,	// (0x00069e60) cell_vitu2_function_top_pane

0x5717,	// (0x00069e7a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5717,	// (0x00069e7a) cell_vitu2_function_top_pane_cp01

0x5733,	// (0x00069e96) cell_vitu2_function_top_wide_pane_ParamLimits

0x5733,	// (0x00069e96) cell_vitu2_function_top_wide_pane

0xa413,	// (0x0006eb76) bg_button_pane_cp012

0x5751,	// (0x00069eb4) cell_vitu2_function_top_pane_g1

0xb297,	// (0x0006f9fa) bg_button_pane_cp013_ParamLimits

0xb297,	// (0x0006f9fa) bg_button_pane_cp013

0x5765,	// (0x00069ec8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5765,	// (0x00069ec8) cell_vitu2_function_top_wide_pane_g1

0xa413,	// (0x0006eb76) bg_popup_sub_pane_cp20

0x577d,	// (0x00069ee0) list_vitu2_match_list_pane

0xeabd,	// (0x00073220) bg_popup_sub_pane_cp20_g1

0xeac5,	// (0x00073228) bg_popup_sub_pane_cp20_g2

0xc3f5,	// (0x00070b58) bg_popup_sub_pane_cp20_g3

0xeacd,	// (0x00073230) bg_popup_sub_pane_cp20_g4

0xc3d5,	// (0x00070b38) bg_popup_sub_pane_cp20_g5

0xed17,	// (0x0007347a) bg_popup_sub_pane_cp20_g6

0xeadd,	// (0x00073240) bg_popup_sub_pane_cp20_g7

0xeae5,	// (0x00073248) bg_popup_sub_pane_cp20_g8

0xeaed,	// (0x00073250) bg_popup_sub_pane_cp20_g9

0x0008,

0xf915,	// (0x00074078) bg_popup_sub_pane_cp20_g

0xb2b3,	// (0x0006fa16) list_vitu2_match_list_item_pane_ParamLimits

0xb2b3,	// (0x0006fa16) list_vitu2_match_list_item_pane

0xb2c5,	// (0x0006fa28) list_vitu2_match_list_item_pane_t1

0xa421,	// (0x0006eb84) bg_popup_sub_pane_cp21

0xc1c9,	// (0x0007092c) grid_vitu2_dropdown_list_pane

0x5795,	// (0x00069ef8) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5795,	// (0x00069ef8) cell_vitu2_dropdown_list_char_pane

0x57b7,	// (0x00069f1a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x57b7,	// (0x00069f1a) cell_vitu2_dropdown_list_ctrl_pane

0xed1f,	// (0x00073482) cell_vitu2_dropdown_list_char_pane_g1

0xed28,	// (0x0007348b) cell_vitu2_dropdown_list_char_pane_g2

0xed31,	// (0x00073494) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf928,	// (0x0007408b) cell_vitu2_dropdown_list_char_pane_g

0x57e1,	// (0x00069f44) cell_vitu2_dropdown_list_char_pane_t1

0x57ef,	// (0x00069f52) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x57ef,	// (0x00069f52) cell_vitu2_dropdown_list_ctrl_pane_g1

0x57ff,	// (0x00069f62) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x57ff,	// (0x00069f62) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5810,	// (0x00069f73) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5810,	// (0x00069f73) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5820,	// (0x00069f83) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5820,	// (0x00069f83) cell_vitu2_dropdown_list_ctrl_pane_g4

0x4c1e,	// (0x00069381) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x4c1e,	// (0x00069381) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf92f,	// (0x00074092) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf92f,	// (0x00074092) cell_vitu2_dropdown_list_ctrl_pane_g

0x583c,	// (0x00069f9f) aid_size_cell_gallery2_ParamLimits

0x583c,	// (0x00069f9f) aid_size_cell_gallery2

0x585a,	// (0x00069fbd) grid_gallery2_pane_ParamLimits

0x585a,	// (0x00069fbd) grid_gallery2_pane

0x5874,	// (0x00069fd7) scroll_pane_cp029_ParamLimits

0x5874,	// (0x00069fd7) scroll_pane_cp029

0x5885,	// (0x00069fe8) cell_gallery2_pane_ParamLimits

0x5885,	// (0x00069fe8) cell_gallery2_pane

0xed3a,	// (0x0007349d) cell_gallery2_pane_g2

0x58e9,	// (0x0006a04c) cell_gallery2_pane_g3

0xed42,	// (0x000734a5) cell_gallery2_pane_g4

0xed4a,	// (0x000734ad) cell_gallery2_pane_g5

0xc1c9,	// (0x0007092c) grid_highlight_pane_cp10

0x4e7b,	// (0x000695de) popup_vitu2_match_list_window_ParamLimits

0x4e92,	// (0x000695f5) popup_vitu2_query_window_ParamLimits

0x4e92,	// (0x000695f5) popup_vitu2_query_window

0xa421,	// (0x0006eb84) bg_vitu2_candi_button_pane

0xed1f,	// (0x00073482) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed28,	// (0x0007348b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed31,	// (0x00073494) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x58f1,	// (0x0006a054) bg_button_pane_cp015

0x5908,	// (0x0006a06b) bg_button_pane_cp016

0x5914,	// (0x0006a077) bg_button_pane_cp017

0xcba3,	// (0x00071306) bg_popup_sub_pane_cp22

0xed52,	// (0x000734b5) popup_vitu2_query_window_g1

0x5955,	// (0x0006a0b8) popup_vitu2_query_window_g2

0x0002,

0xf93a,	// (0x0007409d) popup_vitu2_query_window_g

0x597b,	// (0x0006a0de) popup_vitu2_query_window_t1_ParamLimits

0x597b,	// (0x0006a0de) popup_vitu2_query_window_t1

0x59b0,	// (0x0006a113) popup_vitu2_query_window_t2_ParamLimits

0x59b0,	// (0x0006a113) popup_vitu2_query_window_t2

0x59c2,	// (0x0006a125) popup_vitu2_query_window_t3_ParamLimits

0x59c2,	// (0x0006a125) popup_vitu2_query_window_t3

0x59ea,	// (0x0006a14d) popup_vitu2_query_window_t4_ParamLimits

0x59ea,	// (0x0006a14d) popup_vitu2_query_window_t4

0x59fe,	// (0x0006a161) popup_vitu2_query_window_t5_ParamLimits

0x59fe,	// (0x0006a161) popup_vitu2_query_window_t5

0x0006,

0xf941,	// (0x000740a4) popup_vitu2_query_window_t_ParamLimits

0xf941,	// (0x000740a4) popup_vitu2_query_window_t

0xebe9,	// (0x0007334c) main_cset_text_pane

0x5313,	// (0x00069a76) aid_area_touch_slider_ParamLimits

0x532f,	// (0x00069a92) cset_slider_pane_ParamLimits

0x5352,	// (0x00069ab5) main_cset_slider_pane_g1_ParamLimits

0x5367,	// (0x00069aca) main_cset_slider_pane_g2_ParamLimits

0xec0a,	// (0x0007336d) main_cset_slider_pane_g3_ParamLimits

0xec0a,	// (0x0007336d) main_cset_slider_pane_g3

0x537c,	// (0x00069adf) main_cset_slider_pane_g4_ParamLimits

0x537c,	// (0x00069adf) main_cset_slider_pane_g4

0x538b,	// (0x00069aee) main_cset_slider_pane_g5_ParamLimits

0x538b,	// (0x00069aee) main_cset_slider_pane_g5

0x5399,	// (0x00069afc) main_cset_slider_pane_g6_ParamLimits

0x5399,	// (0x00069afc) main_cset_slider_pane_g6

0xf89e,	// (0x00074001) main_cset_slider_pane_g_ParamLimits

0xec3a,	// (0x0007339d) main_cset_slider_pane_t1_ParamLimits

0x5429,	// (0x00069b8c) main_cset_slider_pane_t2_ParamLimits

0x5443,	// (0x00069ba6) main_cset_slider_pane_t3_ParamLimits

0x545d,	// (0x00069bc0) main_cset_slider_pane_t4_ParamLimits

0x5477,	// (0x00069bda) main_cset_slider_pane_t5_ParamLimits

0x5495,	// (0x00069bf8) main_cset_slider_pane_t6_ParamLimits

0x54aa,	// (0x00069c0d) main_cset_slider_pane_t7_ParamLimits

0x54d8,	// (0x00069c3b) main_cset_slider_pane_t8_ParamLimits

0x54d8,	// (0x00069c3b) main_cset_slider_pane_t8

0x5500,	// (0x00069c63) main_cset_slider_pane_t9_ParamLimits

0x5500,	// (0x00069c63) main_cset_slider_pane_t9

0x5528,	// (0x00069c8b) main_cset_slider_pane_t10_ParamLimits

0x5528,	// (0x00069c8b) main_cset_slider_pane_t10

0x5550,	// (0x00069cb3) main_cset_slider_pane_t11_ParamLimits

0x5550,	// (0x00069cb3) main_cset_slider_pane_t11

0x557a,	// (0x00069cdd) main_cset_slider_pane_t12_ParamLimits

0x557a,	// (0x00069cdd) main_cset_slider_pane_t12

0x5597,	// (0x00069cfa) main_cset_slider_pane_t13_ParamLimits

0x5597,	// (0x00069cfa) main_cset_slider_pane_t13

0xf8c3,	// (0x00074026) main_cset_slider_pane_t_ParamLimits

0xa396,	// (0x0006eaf9) bg_popup_sub_pane_cp011

0xed5e,	// (0x000734c1) main_cset_text_pane_g1

0xed66,	// (0x000734c9) main_cset_text_pane_t1

0xed74,	// (0x000734d7) main_cset_text_pane_t2

0xed82,	// (0x000734e5) main_cset_text_pane_t3

0xed90,	// (0x000734f3) main_cset_text_pane_t4

0xed9e,	// (0x00073501) main_cset_text_pane_t5

0xedac,	// (0x0007350f) main_cset_text_pane_t6

0xedba,	// (0x0007351d) main_cset_text_pane_t7

0x0006,

0xf950,	// (0x000740b3) main_cset_text_pane_t

0xa421,	// (0x0006eb84) main_cam4_burst_pane

0xa421,	// (0x0006eb84) main_cam5_pane

0xebab,	// (0x0007330e) bg_button_pane_cp019

0xebb4,	// (0x00073317) bg_button_pane_cp020

0xec16,	// (0x00073379) main_cset_slider_pane_g7_ParamLimits

0xec16,	// (0x00073379) main_cset_slider_pane_g7

0xec22,	// (0x00073385) main_cset_slider_pane_g8_ParamLimits

0xec22,	// (0x00073385) main_cset_slider_pane_g8

0x53ad,	// (0x00069b10) main_cset_slider_pane_g9_ParamLimits

0x53ad,	// (0x00069b10) main_cset_slider_pane_g9

0x53b9,	// (0x00069b1c) main_cset_slider_pane_g10_ParamLimits

0x53b9,	// (0x00069b1c) main_cset_slider_pane_g10

0x53c5,	// (0x00069b28) main_cset_slider_pane_g11_ParamLimits

0x53c5,	// (0x00069b28) main_cset_slider_pane_g11

0x53d1,	// (0x00069b34) main_cset_slider_pane_g12_ParamLimits

0x53d1,	// (0x00069b34) main_cset_slider_pane_g12

0x53dd,	// (0x00069b40) main_cset_slider_pane_g13_ParamLimits

0x53dd,	// (0x00069b40) main_cset_slider_pane_g13

0x53e9,	// (0x00069b4c) main_cset_slider_pane_g14_ParamLimits

0x53e9,	// (0x00069b4c) main_cset_slider_pane_g14

0x53f5,	// (0x00069b58) main_cset_slider_pane_g15_ParamLimits

0x53f5,	// (0x00069b58) main_cset_slider_pane_g15

0xec62,	// (0x000733c5) main_cset_slider_pane_t14_ParamLimits

0xec62,	// (0x000733c5) main_cset_slider_pane_t14

0xec9b,	// (0x000733fe) main_cset_slider_pane_t15_ParamLimits

0xec9b,	// (0x000733fe) main_cset_slider_pane_t15

0x5a68,	// (0x0006a1cb) aid_cam4_burst_size_cell_ParamLimits

0x5a68,	// (0x0006a1cb) aid_cam4_burst_size_cell

0x5a88,	// (0x0006a1eb) grid_cam4_burst_pane_ParamLimits

0x5a88,	// (0x0006a1eb) grid_cam4_burst_pane

0x5ac2,	// (0x0006a225) linegrid_cam4_burst_pane_ParamLimits

0x5ac2,	// (0x0006a225) linegrid_cam4_burst_pane

0x5ae4,	// (0x0006a247) scroll_pane_cp30_ParamLimits

0x5ae4,	// (0x0006a247) scroll_pane_cp30

0x5af0,	// (0x0006a253) cell_cam4_burst_pane_ParamLimits

0x5af0,	// (0x0006a253) cell_cam4_burst_pane

0xedc8,	// (0x0007352b) linegrid_cam4_burst_pane_g1_ParamLimits

0xedc8,	// (0x0007352b) linegrid_cam4_burst_pane_g1

0x5b45,	// (0x0006a2a8) linegrid_cam4_burst_pane_g2_ParamLimits

0x5b45,	// (0x0006a2a8) linegrid_cam4_burst_pane_g2

0xedd5,	// (0x00073538) linegrid_cam4_burst_pane_g3_ParamLimits

0xedd5,	// (0x00073538) linegrid_cam4_burst_pane_g3

0x0002,

0xf95f,	// (0x000740c2) linegrid_cam4_burst_pane_g_ParamLimits

0xf95f,	// (0x000740c2) linegrid_cam4_burst_pane_g

0x5b56,	// (0x0006a2b9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5b56,	// (0x0006a2b9) linegrid_cam4_burst_pane_g3_copy1

0xede2,	// (0x00073545) linegrid_cam4_burst_pane_g4_ParamLimits

0xede2,	// (0x00073545) linegrid_cam4_burst_pane_g4

0x5b74,	// (0x0006a2d7) linegrid_cam4_burst_pane_g5_ParamLimits

0x5b74,	// (0x0006a2d7) linegrid_cam4_burst_pane_g5

0x5b85,	// (0x0006a2e8) linegrid_cam4_burst_pane_g6_ParamLimits

0x5b85,	// (0x0006a2e8) linegrid_cam4_burst_pane_g6

0xedef,	// (0x00073552) linegrid_cam4_burst_pane_g7_ParamLimits

0xedef,	// (0x00073552) linegrid_cam4_burst_pane_g7

0x5b9c,	// (0x0006a2ff) cell_cam4_burst_pane_g1

0xee08,	// (0x0007356b) main_cam5_pane_t1_ParamLimits

0xee08,	// (0x0007356b) main_cam5_pane_t1

0xee1a,	// (0x0007357d) main_cam5_pane_t2_ParamLimits

0xee1a,	// (0x0007357d) main_cam5_pane_t2

0xee2c,	// (0x0007358f) main_cam5_pane_t3_ParamLimits

0xee2c,	// (0x0007358f) main_cam5_pane_t3

0xee3e,	// (0x000735a1) main_cam5_pane_t4_ParamLimits

0xee3e,	// (0x000735a1) main_cam5_pane_t4

0xee56,	// (0x000735b9) main_cam5_pane_t5_ParamLimits

0xee56,	// (0x000735b9) main_cam5_pane_t5

0xee6a,	// (0x000735cd) main_cam5_pane_t6_ParamLimits

0xee6a,	// (0x000735cd) main_cam5_pane_t6

0xee7e,	// (0x000735e1) main_cam5_pane_t7_ParamLimits

0xee7e,	// (0x000735e1) main_cam5_pane_t7

0xee90,	// (0x000735f3) main_cam5_pane_t8_ParamLimits

0xee90,	// (0x000735f3) main_cam5_pane_t8

0xeeae,	// (0x00073611) main_cam5_pane_t9_ParamLimits

0xeeae,	// (0x00073611) main_cam5_pane_t9

0xeec0,	// (0x00073623) main_cam5_pane_t10_ParamLimits

0xeec0,	// (0x00073623) main_cam5_pane_t10

0xeed2,	// (0x00073635) main_cam5_pane_t11_ParamLimits

0xeed2,	// (0x00073635) main_cam5_pane_t11

0xeee6,	// (0x00073649) main_cam5_pane_t12_ParamLimits

0xeee6,	// (0x00073649) main_cam5_pane_t12

0xeefd,	// (0x00073660) main_cam5_pane_t13_ParamLimits

0xeefd,	// (0x00073660) main_cam5_pane_t13

0x000c,

0xf96b,	// (0x000740ce) main_cam5_pane_t_ParamLimits

0xf96b,	// (0x000740ce) main_cam5_pane_t

0x0361,	// (0x00064ac4) popup_scut_keymap_window_ParamLimits

0x0361,	// (0x00064ac4) popup_scut_keymap_window

0x5baf,	// (0x0006a312) aid_size_cell_brow_shortcut

0xc1c9,	// (0x0007092c) bg_popup_window_pane_cp010

0x5bbb,	// (0x0006a31e) grid_scut_pane

0x5bc7,	// (0x0006a32a) cell_scut_pane_ParamLimits

0x5bc7,	// (0x0006a32a) cell_scut_pane

0x5be0,	// (0x0006a343) cell_scut_pane_g1

0xef20,	// (0x00073683) cell_scut_pane_t1

0xef2f,	// (0x00073692) cell_scut_pane_t2

0x5be9,	// (0x0006a34c) cell_scut_pane_t3

0x0002,

0xf986,	// (0x000740e9) cell_scut_pane_t

0x3b1d,	// (0x00068280) main_mup3_pane_g8_ParamLimits

0x3b1d,	// (0x00068280) main_mup3_pane_g8

0x4d7a,	// (0x000694dd) area_vitu2_query_pane_ParamLimits

0x4d7a,	// (0x000694dd) area_vitu2_query_pane

0x5920,	// (0x0006a083) input_focus_pane_cp08

0xef3e,	// (0x000736a1) area_vitu2_query_pane_g1

0x5bf7,	// (0x0006a35a) area_vitu2_query_pane_g2

0x0001,

0xf98d,	// (0x000740f0) area_vitu2_query_pane_g

0x5c0c,	// (0x0006a36f) area_vitu2_query_pane_t1_ParamLimits

0x5c0c,	// (0x0006a36f) area_vitu2_query_pane_t1

0x5c20,	// (0x0006a383) area_vitu2_query_pane_t2_ParamLimits

0x5c20,	// (0x0006a383) area_vitu2_query_pane_t2

0x5c34,	// (0x0006a397) area_vitu2_query_pane_t3_ParamLimits

0x5c34,	// (0x0006a397) area_vitu2_query_pane_t3

0xef4a,	// (0x000736ad) area_vitu2_query_pane_t4_ParamLimits

0xef4a,	// (0x000736ad) area_vitu2_query_pane_t4

0xef72,	// (0x000736d5) area_vitu2_query_pane_t5_ParamLimits

0xef72,	// (0x000736d5) area_vitu2_query_pane_t5

0xef9a,	// (0x000736fd) area_vitu2_query_pane_t6_ParamLimits

0xef9a,	// (0x000736fd) area_vitu2_query_pane_t6

0x0006,

0xf992,	// (0x000740f5) area_vitu2_query_pane_t_ParamLimits

0xf992,	// (0x000740f5) area_vitu2_query_pane_t

0x5c60,	// (0x0006a3c3) bg_button_pane_cp018

0x5c6c,	// (0x0006a3cf) bg_button_pane_cp021

0x5c78,	// (0x0006a3db) bg_button_pane_cp022

0x5c9f,	// (0x0006a402) input_focus_pane_cp09

0x22ea,	// (0x00066a4d) aid_size_touch_mv_arrow_left

0x2313,	// (0x00066a76) aid_size_touch_mv_arrow_right

0x540d,	// (0x00069b70) main_cset_slider_pane_g16_ParamLimits

0x540d,	// (0x00069b70) main_cset_slider_pane_g16

0x541b,	// (0x00069b7e) main_cset_slider_pane_g17_ParamLimits

0x541b,	// (0x00069b7e) main_cset_slider_pane_g17

0x5b9c,	// (0x0006a2ff) cell_cam4_burst_pane_g1_ParamLimits

0xa396,	// (0x0006eaf9) compa_mode_pane

0x563d,	// (0x00069da0) popup_vtel_slider_window_g3_ParamLimits

0x563d,	// (0x00069da0) popup_vtel_slider_window_g3

0x5654,	// (0x00069db7) popup_vtel_slider_window_g4_ParamLimits

0x5654,	// (0x00069db7) popup_vtel_slider_window_g4

0x566b,	// (0x00069dce) popup_vtel_slider_window_t1_ParamLimits

0x566b,	// (0x00069dce) popup_vtel_slider_window_t1

0xa421,	// (0x0006eb84) main_cl_pane

0xad3c,	// (0x0006f49f) popup_imed_adjust2_window_ParamLimits

0xcba3,	// (0x00071306) bg_tb_trans_pane_cp05_ParamLimits

0xe75e,	// (0x00072ec1) popup_imed_adjust2_window_g1_ParamLimits

0xe76d,	// (0x00072ed0) popup_imed_adjust2_window_g2_ParamLimits

0xe76d,	// (0x00072ed0) popup_imed_adjust2_window_g2

0xe779,	// (0x00072edc) popup_imed_adjust2_window_g3_ParamLimits

0xe779,	// (0x00072edc) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x00073e70) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x00073e70) popup_imed_adjust2_window_g

0xe785,	// (0x00072ee8) popup_imed_adjust2_window_t1_ParamLimits

0xe79d,	// (0x00072f00) slider_imed_adjust_pane_ParamLimits

0xe7b1,	// (0x00072f14) slider_imed_adjust_pane_g1_ParamLimits

0xe7c1,	// (0x00072f24) slider_imed_adjust_pane_g2_ParamLimits

0xe7d1,	// (0x00072f34) slider_imed_adjust_pane_g3_ParamLimits

0xe7e2,	// (0x00072f45) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x00073e77) slider_imed_adjust_pane_g_ParamLimits

0x4aec,	// (0x0006924f) aid_touch_area_cam4_ParamLimits

0x4aec,	// (0x0006924f) aid_touch_area_cam4

0xb179,	// (0x0006f8dc) battery_pane_cp01

0x4bbf,	// (0x00069322) main_camera4_pane_g6_ParamLimits

0x4bbf,	// (0x00069322) main_camera4_pane_g6

0x4be9,	// (0x0006934c) main_camera4_pane_t2_ParamLimits

0x4be9,	// (0x0006934c) main_camera4_pane_t2

0x0001,

0xf811,	// (0x00073f74) main_camera4_pane_t_ParamLimits

0xf811,	// (0x00073f74) main_camera4_pane_t

0x4c2c,	// (0x0006938f) aid_touch_area_vid4_ParamLimits

0x4c2c,	// (0x0006938f) aid_touch_area_vid4

0x4c83,	// (0x000693e6) main_video4_pane_g5_ParamLimits

0x4c83,	// (0x000693e6) main_video4_pane_g5

0x4ca9,	// (0x0006940c) vid4_progress_pane_ParamLimits

0x4ca9,	// (0x0006940c) vid4_progress_pane

0xec2e,	// (0x00073391) main_cset_slider_pane_g18_ParamLimits

0xec2e,	// (0x00073391) main_cset_slider_pane_g18

0xedfc,	// (0x0007355f) cell_cam4_burst_pane_g2_ParamLimits

0xedfc,	// (0x0007355f) cell_cam4_burst_pane_g2

0x0001,

0xf966,	// (0x000740c9) cell_cam4_burst_pane_g_ParamLimits

0xf966,	// (0x000740c9) cell_cam4_burst_pane_g

0xc02b,	// (0x0007078e) bg_cl_pane_ParamLimits

0xc02b,	// (0x0007078e) bg_cl_pane

0x5cb0,	// (0x0006a413) cl_header_pane_ParamLimits

0x5cb0,	// (0x0006a413) cl_header_pane

0x5cc4,	// (0x0006a427) cl_listscroll_pane_ParamLimits

0x5cc4,	// (0x0006a427) cl_listscroll_pane

0xefe6,	// (0x00073749) bg_cl_pane_g1

0xefee,	// (0x00073751) bg_cl_pane_g2

0xeff6,	// (0x00073759) bg_cl_pane_g3

0xeffe,	// (0x00073761) bg_cl_pane_g4

0xf006,	// (0x00073769) bg_cl_pane_g5

0xf00e,	// (0x00073771) bg_cl_pane_g6

0xf016,	// (0x00073779) bg_cl_pane_g7

0xf01e,	// (0x00073781) bg_cl_pane_g8

0xf026,	// (0x00073789) bg_cl_pane_g9

0x0008,

0xf9a1,	// (0x00074104) bg_cl_pane_g

0x5cd4,	// (0x0006a437) aid_height_cl_leading_ParamLimits

0x5cd4,	// (0x0006a437) aid_height_cl_leading

0x5ce0,	// (0x0006a443) aid_height_cl_text_ParamLimits

0x5ce0,	// (0x0006a443) aid_height_cl_text

0xaaf0,	// (0x0006f253) bg_cl_header_pane_ParamLimits

0xaaf0,	// (0x0006f253) bg_cl_header_pane

0x5cff,	// (0x0006a462) cl_header_pane_g1_ParamLimits

0x5cff,	// (0x0006a462) cl_header_pane_g1

0x5d15,	// (0x0006a478) cl_header_pane_t1_ParamLimits

0x5d15,	// (0x0006a478) cl_header_pane_t1

0xf02e,	// (0x00073791) cl_list_pane

0xec01,	// (0x00073364) hc_scroll_pane_cp01

0xc3d5,	// (0x00070b38) bg_cl_header_pane_g1

0xeabd,	// (0x00073220) bg_cl_header_pane_g2

0xc3f5,	// (0x00070b58) bg_cl_header_pane_g3

0xeacd,	// (0x00073230) bg_cl_header_pane_g4

0xeac5,	// (0x00073228) bg_cl_header_pane_g5

0xed17,	// (0x0007347a) bg_cl_header_pane_g6

0xeae5,	// (0x00073248) bg_cl_header_pane_g7

0xeaed,	// (0x00073250) bg_cl_header_pane_g8

0xeadd,	// (0x00073240) bg_cl_header_pane_g9

0x0008,

0xf9b4,	// (0x00074117) bg_cl_header_pane_g

0x5d2e,	// (0x0006a491) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5d2e,	// (0x0006a491) hc_cl_list_double_graphic_heading_pane

0x5d41,	// (0x0006a4a4) hc_cl_list_single_graphic_pane_ParamLimits

0x5d41,	// (0x0006a4a4) hc_cl_list_single_graphic_pane

0x5d59,	// (0x0006a4bc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5d59,	// (0x0006a4bc) hc_cl_list_single_graphic_pane_g1

0x5d65,	// (0x0006a4c8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5d65,	// (0x0006a4c8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9c7,	// (0x0007412a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9c7,	// (0x0007412a) hc_cl_list_single_graphic_pane_g

0x5d79,	// (0x0006a4dc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5d79,	// (0x0006a4dc) hc_cl_list_single_graphic_pane_t1

0x5d59,	// (0x0006a4bc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5d59,	// (0x0006a4bc) hc_cl_list_double_graphic_heading_pane_g1

0x5d8e,	// (0x0006a4f1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5d8e,	// (0x0006a4f1) hc_cl_list_double_graphic_heading_pane_g2

0x5da2,	// (0x0006a505) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5da2,	// (0x0006a505) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9cc,	// (0x0007412f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9cc,	// (0x0007412f) hc_cl_list_double_graphic_heading_pane_g

0x5db6,	// (0x0006a519) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5db6,	// (0x0006a519) hc_cl_list_double_graphic_heading_pane_t1

0x5dcb,	// (0x0006a52e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5dcb,	// (0x0006a52e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d3,	// (0x00074136) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d3,	// (0x00074136) hc_cl_list_double_graphic_heading_pane_t

0xb2db,	// (0x0006fa3e) vid4_progress_pane_g1

0xb2eb,	// (0x0006fa4e) vid4_progress_pane_g2

0x5de0,	// (0x0006a543) vid4_progress_pane_g3

0xb2fb,	// (0x0006fa5e) vid4_progress_pane_g4

0x0004,

0xf9d8,	// (0x0007413b) vid4_progress_pane_g

0x5df2,	// (0x0006a555) vid4_progress_pane_t1

0xb319,	// (0x0006fa7c) vid4_progress_pane_t2

0x0002,

0xf9e3,	// (0x00074146) vid4_progress_pane_t

0x5e0c,	// (0x0006a56f) wait_bar_pane_cp07

0xe0a7,	// (0x0007280a) blid_firmament_pane_ParamLimits

0xe0ea,	// (0x0007284d) popup_blid_sat_info2_window_g1

0xe10e,	// (0x00072871) popup_blid_sat_info2_window_t3

0xe11c,	// (0x0007287f) popup_blid_sat_info2_window_t4

0xe12a,	// (0x0007288d) popup_blid_sat_info2_window_t5

0xe138,	// (0x0007289b) popup_blid_sat_info2_window_t6

0xe148,	// (0x000728ab) popup_blid_sat_info2_window_t7

0xe156,	// (0x000728b9) popup_blid_sat_info2_window_t8

0xe164,	// (0x000728c7) popup_blid_sat_info2_window_t9

0xe172,	// (0x000728d5) popup_blid_sat_info2_window_t10

0xe239,	// (0x0007299c) aid_firma_cardinal_ParamLimits

0xe24d,	// (0x000729b0) blid_firmament_pane_t1_ParamLimits

0xe264,	// (0x000729c7) blid_firmament_pane_t2_ParamLimits

0xe27b,	// (0x000729de) blid_firmament_pane_t3_ParamLimits

0xe292,	// (0x000729f5) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x00073d69) blid_firmament_pane_t_ParamLimits

0xe2a9,	// (0x00072a0c) blid_sat_info_pane_ParamLimits

0xa413,	// (0x0006eb76) main_cam_set_pane_ParamLimits

0x431f,	// (0x00068a82) aid_size_cell_colour_35_ParamLimits

0x433f,	// (0x00068aa2) aid_size_cell_colour_112_ParamLimits

0x435f,	// (0x00068ac2) aid_size_cell_effect_ParamLimits

0xcba3,	// (0x00071306) bg_tb_trans_pane_cp02_ParamLimits

0xc654,	// (0x00070db7) heading_imed_pane_ParamLimits

0x437f,	// (0x00068ae2) listscroll_imed_pane_ParamLimits

0xd592,	// (0x00071cf5) popup_call2_audio_first_window_g5_ParamLimits

0xd592,	// (0x00071cf5) popup_call2_audio_first_window_g5

0x46ef,	// (0x00068e52) aid_size_touch_image3_arrow_left_ParamLimits

0x46ef,	// (0x00068e52) aid_size_touch_image3_arrow_left

0x471b,	// (0x00068e7e) aid_size_touch_image3_arrow_right_ParamLimits

0x471b,	// (0x00068e7e) aid_size_touch_image3_arrow_right

0xb332,	// (0x0006fa95) vid4_progress_pane_t3

0x4524,	// (0x00068c87) main_hwr_training_symbol_option_pane_ParamLimits

0x4524,	// (0x00068c87) main_hwr_training_symbol_option_pane

0xe8f6,	// (0x00073059) popup_hwr_training_preview_window_ParamLimits

0xe8f6,	// (0x00073059) popup_hwr_training_preview_window

0x4544,	// (0x00068ca7) hwr_training_navi_pane_g5_ParamLimits

0x4544,	// (0x00068ca7) hwr_training_navi_pane_g5

0xeaab,	// (0x0007320e) popup_char_count_window

0xa413,	// (0x0006eb76) bg_popup_sub_pane_cp20_ParamLimits

0x577d,	// (0x00069ee0) list_vitu2_match_list_pane_ParamLimits

0x5789,	// (0x00069eec) vitu2_page_scroll_pane_ParamLimits

0x5789,	// (0x00069eec) vitu2_page_scroll_pane

0x5e55,	// (0x0006a5b8) list_single_hwr_training_symbol_option_pane_ParamLimits

0x5e55,	// (0x0006a5b8) list_single_hwr_training_symbol_option_pane

0x5e68,	// (0x0006a5cb) list_single_hwr_training_symbol_option_pane_g1

0x5e70,	// (0x0006a5d3) list_single_hwr_training_symbol_option_pane_t1

0x5e7e,	// (0x0006a5e1) bg_button_pane_cp023

0x5e87,	// (0x0006a5ea) bg_button_pane_cp024

0x5eba,	// (0x0006a61d) vitu2_page_scroll_pane_g1

0x5ec2,	// (0x0006a625) vitu2_page_scroll_pane_g2

0x0001,

0xf9ea,	// (0x0007414d) vitu2_page_scroll_pane_g

0x5eca,	// (0x0006a62d) vitu2_page_scroll_pane_t1

0x5ed9,	// (0x0006a63c) popup_char_count_window_g1

0x5ee2,	// (0x0006a645) popup_char_count_window_g2

0x5eeb,	// (0x0006a64e) popup_char_count_window_g3

0x0002,

0xf9ef,	// (0x00074152) popup_char_count_window_g

0x5ef4,	// (0x0006a657) popup_char_count_window_t1

0xa421,	// (0x0006eb84) main_vded2_pane

0xe74a,	// (0x00072ead) aid_size_cell_imed_line

0xe754,	// (0x00072eb7) grid_imed_line_width_pane

0xb247,	// (0x0006f9aa) vid4_indicators_pane_g4

0x5f02,	// (0x0006a665) cell_imed_line_width_pane_ParamLimits

0x5f02,	// (0x0006a665) cell_imed_line_width_pane

0x5f18,	// (0x0006a67b) cell_imed_line_width_pane_g1

0x5f21,	// (0x0006a684) cell_imed_line_width_pane_g2

0x0001,

0xf9f6,	// (0x00074159) cell_imed_line_width_pane_g

0x5f29,	// (0x0006a68c) main_vded2_pane_g1_ParamLimits

0x5f29,	// (0x0006a68c) main_vded2_pane_g1

0x5f44,	// (0x0006a6a7) main_vded2_pane_g2_ParamLimits

0x5f44,	// (0x0006a6a7) main_vded2_pane_g2

0x0001,

0xf9fb,	// (0x0007415e) main_vded2_pane_g_ParamLimits

0xf9fb,	// (0x0007415e) main_vded2_pane_g

0x5f56,	// (0x0006a6b9) vded2_slider_pane_ParamLimits

0x5f56,	// (0x0006a6b9) vded2_slider_pane

0x5f66,	// (0x0006a6c9) aid_size_touch_vded2_end

0x5f70,	// (0x0006a6d3) aid_size_touch_vded2_playhead

0x5f7a,	// (0x0006a6dd) aid_size_touch_vded2_start

0x5f82,	// (0x0006a6e5) vded2_slider_bg_pane

0x5f8b,	// (0x0006a6ee) vded2_slider_pane_g1

0x5f94,	// (0x0006a6f7) vded2_slider_pane_g2

0x5f9c,	// (0x0006a6ff) vded2_slider_pane_g3

0x0002,

0xfa00,	// (0x00074163) vded2_slider_pane_g

0x5fa7,	// (0x0006a70a) vded2_slider_bg_pane_g1

0x5fb0,	// (0x0006a713) vded2_slider_bg_pane_g2

0x5fb9,	// (0x0006a71c) vded2_slider_bg_pane_g3

0x0002,

0xfa07,	// (0x0007416a) vded2_slider_bg_pane_g

0x2784,	// (0x00066ee7) aid_postcard_touch_down_pane_ParamLimits

0x2784,	// (0x00066ee7) aid_postcard_touch_down_pane

0x279c,	// (0x00066eff) aid_postcard_touch_up_pane_ParamLimits

0x279c,	// (0x00066eff) aid_postcard_touch_up_pane

0xa421,	// (0x0006eb84) main_blid2_pane

0xad1e,	// (0x0006f481) popup_blid2_search_window

0xa396,	// (0x0006eaf9) blid2_gps_pane

0xa396,	// (0x0006eaf9) blid2_navig_pane

0xa396,	// (0x0006eaf9) blid2_search_pane

0xa396,	// (0x0006eaf9) blid2_tripm_pane

0x5fc2,	// (0x0006a725) blid2_search_pane_g1_ParamLimits

0x5fc2,	// (0x0006a725) blid2_search_pane_g1

0x5fd5,	// (0x0006a738) blid2_search_pane_t1_ParamLimits

0x5fd5,	// (0x0006a738) blid2_search_pane_t1

0x5fe7,	// (0x0006a74a) aid_size_cell_blid2_gps_ParamLimits

0x5fe7,	// (0x0006a74a) aid_size_cell_blid2_gps

0x5fff,	// (0x0006a762) blid2_gps_pane_g1_ParamLimits

0x5fff,	// (0x0006a762) blid2_gps_pane_g1

0x6013,	// (0x0006a776) grid_blid2_satellite_pane_ParamLimits

0x6013,	// (0x0006a776) grid_blid2_satellite_pane

0x602b,	// (0x0006a78e) blid2_navig_pane_g1_ParamLimits

0x602b,	// (0x0006a78e) blid2_navig_pane_g1

0x6037,	// (0x0006a79a) blid2_navig_pane_t1_ParamLimits

0x6037,	// (0x0006a79a) blid2_navig_pane_t1

0x6052,	// (0x0006a7b5) blid2_navig_pane_t2_ParamLimits

0x6052,	// (0x0006a7b5) blid2_navig_pane_t2

0x0001,

0xfa0e,	// (0x00074171) blid2_navig_pane_t_ParamLimits

0xfa0e,	// (0x00074171) blid2_navig_pane_t

0x606d,	// (0x0006a7d0) blid2_navig_ring_pane_ParamLimits

0x606d,	// (0x0006a7d0) blid2_navig_ring_pane

0x6088,	// (0x0006a7eb) blid2_speed_pane_ParamLimits

0x6088,	// (0x0006a7eb) blid2_speed_pane

0x6094,	// (0x0006a7f7) blid2_tripm_pane_g1_ParamLimits

0x6094,	// (0x0006a7f7) blid2_tripm_pane_g1

0x60af,	// (0x0006a812) blid2_tripm_pane_g2_ParamLimits

0x60af,	// (0x0006a812) blid2_tripm_pane_g2

0x60c2,	// (0x0006a825) blid2_tripm_pane_g3_ParamLimits

0x60c2,	// (0x0006a825) blid2_tripm_pane_g3

0x60d3,	// (0x0006a836) blid2_tripm_pane_g4_ParamLimits

0x60d3,	// (0x0006a836) blid2_tripm_pane_g4

0x60e4,	// (0x0006a847) blid2_tripm_pane_g5_ParamLimits

0x60e4,	// (0x0006a847) blid2_tripm_pane_g5

0x0005,

0xfa13,	// (0x00074176) blid2_tripm_pane_g_ParamLimits

0xfa13,	// (0x00074176) blid2_tripm_pane_g

0x610a,	// (0x0006a86d) blid2_tripm_pane_t1_ParamLimits

0x610a,	// (0x0006a86d) blid2_tripm_pane_t1

0x6123,	// (0x0006a886) blid2_tripm_pane_t2_ParamLimits

0x6123,	// (0x0006a886) blid2_tripm_pane_t2

0x613c,	// (0x0006a89f) blid2_tripm_pane_t3_ParamLimits

0x613c,	// (0x0006a89f) blid2_tripm_pane_t3

0x0003,

0xfa20,	// (0x00074183) blid2_tripm_pane_t_ParamLimits

0xfa20,	// (0x00074183) blid2_tripm_pane_t

0x6183,	// (0x0006a8e6) cell_blid2_satellite_pane_ParamLimits

0x6183,	// (0x0006a8e6) cell_blid2_satellite_pane

0x619f,	// (0x0006a902) cell_blid2_satellite_pane_g1

0x61a8,	// (0x0006a90b) cell_blid2_satellite_pane_t1

0xbfcd,	// (0x00070730) blid2_speed_pane_g1

0x61b6,	// (0x0006a919) blid2_speed_pane_t1

0x61c4,	// (0x0006a927) blid2_speed_pane_t2

0x0001,

0xfa29,	// (0x0007418c) blid2_speed_pane_t

0xbfcd,	// (0x00070730) blid2_navig_ring_pane_g1

0x61d2,	// (0x0006a935) blid2_navig_ring_pane_g2

0x61da,	// (0x0006a93d) blid2_navig_ring_pane_g3

0x61e2,	// (0x0006a945) blid2_navig_ring_pane_g4

0x61ea,	// (0x0006a94d) blid2_navig_ring_pane_g5

0x0004,

0xfa2e,	// (0x00074191) blid2_navig_ring_pane_g

0xa396,	// (0x0006eaf9) bg_popup_window_pane_cp011

0x61f2,	// (0x0006a955) popup_blid2_search_window_g1

0x61fa,	// (0x0006a95d) popup_blid2_search_window_t1

0x6208,	// (0x0006a96b) popup_blid2_search_window_t2

0x0001,

0xfa39,	// (0x0007419c) popup_blid2_search_window_t

0xc2e4,	// (0x00070a47) main_browser_pane_g1

0xc02b,	// (0x0007078e) main_browser_pane_ParamLimits

0xa413,	// (0x0006eb76) bg_button_pane_cp011_ParamLimits

0x4fdd,	// (0x00069740) cell_vitu2_function_pane_g1_ParamLimits

0xcba3,	// (0x00071306) bg_popup_sub_pane_cp22_ParamLimits

0x5920,	// (0x0006a083) input_focus_pane_cp08_ParamLimits

0x593c,	// (0x0006a09f) popup_vitu2_query_button_pane_ParamLimits

0x593c,	// (0x0006a09f) popup_vitu2_query_button_pane

0x594b,	// (0x0006a0ae) popup_vitu2_query_input_button_pane

0xed52,	// (0x000734b5) popup_vitu2_query_window_g1_ParamLimits

0x5955,	// (0x0006a0b8) popup_vitu2_query_window_g2_ParamLimits

0xf93a,	// (0x0007409d) popup_vitu2_query_window_g_ParamLimits

0xa396,	// (0x0006eaf9) bg_button_pane_cp026

0x6216,	// (0x0006a979) popup_vitu2_query_input_button_pane_g1

0xa396,	// (0x0006eaf9) bg_button_pane_cp025

0x621e,	// (0x0006a981) popup_vitu2_query_button_pane_t1

0x370d,	// (0x00067e70) main_mp3_pane_t6

0x371b,	// (0x00067e7e) popup_slider_window_cp01

0xb1ab,	// (0x0006f90e) cam4_battery_pane

0xb200,	// (0x0006f963) cam4_battery_pane_cp02

0xb2d3,	// (0x0006fa36) cam4_battery_pane_cp01

0xb2d3,	// (0x0006fa36) cam4_battery_pane_cp03

0x363c,	// (0x00067d9f) cam4_battery_pane_g1

0xbfcd,	// (0x00070730) cam4_battery_pane_g2

0x0001,

0xfa3e,	// (0x000741a1) cam4_battery_pane_g

0xe180,	// (0x000728e3) popup_blid_sat_info2_window_t11

0x22ea,	// (0x00066a4d) aid_size_touch_mv_arrow_left_ParamLimits

0x2313,	// (0x00066a76) aid_size_touch_mv_arrow_right_ParamLimits

0xca4c,	// (0x000711af) navi_pane_g1_ParamLimits

0x2352,	// (0x00066ab5) navi_pane_g2_ParamLimits

0x2380,	// (0x00066ae3) navi_pane_g3_ParamLimits

0xf32f,	// (0x00073a92) navi_pane_g_ParamLimits

0x23da,	// (0x00066b3d) navi_pane_mv_t1_ParamLimits

0x438b,	// (0x00068aee) grid_imed_effect_pane_ParamLimits

0x0ecf,	// (0x00065632) aid_placing_vt_slider_lsc

0xc220,	// (0x00070983) aid_placing_vt_slider_prt

0xaaf0,	// (0x0006f253) bg_tb_trans_pane_cp01_ParamLimits

0xe3e8,	// (0x00072b4b) popup_image_details_window_g1_ParamLimits

0xe3fb,	// (0x00072b5e) popup_image_details_window_g2_ParamLimits

0xe410,	// (0x00072b73) popup_image_details_window_g3_ParamLimits

0xe410,	// (0x00072b73) popup_image_details_window_g3

0xf646,	// (0x00073da9) popup_image_details_window_g_ParamLimits

0xe424,	// (0x00072b87) popup_image_details_window_t1_ParamLimits

0xe436,	// (0x00072b99) popup_image_details_window_t2_ParamLimits

0xe44f,	// (0x00072bb2) popup_image_details_window_t3_ParamLimits

0xe463,	// (0x00072bc6) popup_image_details_window_t4_ParamLimits

0xe47e,	// (0x00072be1) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x00073db0) popup_image_details_window_t_ParamLimits

0x5cec,	// (0x0006a44f) cl_header_name_pane_ParamLimits

0x5cec,	// (0x0006a44f) cl_header_name_pane

0x622c,	// (0x0006a98f) cl_header_name_pane_t1_ParamLimits

0x622c,	// (0x0006a98f) cl_header_name_pane_t1

0x624d,	// (0x0006a9b0) cl_header_name_pane_t2_ParamLimits

0x624d,	// (0x0006a9b0) cl_header_name_pane_t2

0x628f,	// (0x0006a9f2) cl_header_name_pane_t3_ParamLimits

0x628f,	// (0x0006a9f2) cl_header_name_pane_t3

0x0002,

0xfa43,	// (0x000741a6) cl_header_name_pane_t_ParamLimits

0xfa43,	// (0x000741a6) cl_header_name_pane_t

0x23ab,	// (0x00066b0e) navi_pane_mv_g2_ParamLimits

0xea76,	// (0x000731d9) field_vitu2_entry_pane_g1_ParamLimits

0xea82,	// (0x000731e5) field_vitu2_entry_pane_g2_ParamLimits

0xcdca,	// (0x0007152d) field_vitu2_entry_pane_g3_ParamLimits

0xcdca,	// (0x0007152d) field_vitu2_entry_pane_g3

0xf843,	// (0x00073fa6) field_vitu2_entry_pane_g_ParamLimits

0x4f59,	// (0x000696bc) cell_vitu2_itu_pane_g1_ParamLimits

0x4f71,	// (0x000696d4) cell_vitu2_itu_pane_g2_ParamLimits

0x4f71,	// (0x000696d4) cell_vitu2_itu_pane_g2

0x0001,

0xf84f,	// (0x00073fb2) cell_vitu2_itu_pane_g_ParamLimits

0xf84f,	// (0x00073fb2) cell_vitu2_itu_pane_g

0xa413,	// (0x0006eb76) bg_vkb2_func_pane_cp05_ParamLimits

0xa413,	// (0x0006eb76) bg_vkb2_func_pane_cp05

0xa413,	// (0x0006eb76) bg_vkb2_func_pane_cp03

0xa413,	// (0x0006eb76) bg_vkb2_func_pane_cp04

0xa413,	// (0x0006eb76) bg_vkb2_func_pane_cp10_ParamLimits

0xa413,	// (0x0006eb76) bg_vkb2_func_pane_cp10

0x5c8b,	// (0x0006a3ee) bg_vkb2_func_pane_cp08

0x5c60,	// (0x0006a3c3) bg_vkb2_func_pane_cp06

0x5c6c,	// (0x0006a3cf) bg_vkb2_func_pane_cp07

0x5e90,	// (0x0006a5f3) bg_vkb2_func_pane_cp11_ParamLimits

0x5e90,	// (0x0006a5f3) bg_vkb2_func_pane_cp11

0x5ea5,	// (0x0006a608) bg_vkb2_func_pane_cp12_ParamLimits

0x5ea5,	// (0x0006a608) bg_vkb2_func_pane_cp12

0xa396,	// (0x0006eaf9) bg_vkb2_func_pane_cp09

0xeabd,	// (0x00073220) bg_vkb2_func_pane_g1

0xc3f5,	// (0x00070b58) bg_vkb2_func_pane_g2

0xeac5,	// (0x00073228) bg_vkb2_func_pane_g3

0xeacd,	// (0x00073230) bg_vkb2_func_pane_g4

0xed17,	// (0x0007347a) bg_vkb2_func_pane_g5

0xeae5,	// (0x00073248) bg_vkb2_func_pane_g6

0xeaed,	// (0x00073250) bg_vkb2_func_pane_g7

0xeadd,	// (0x00073240) bg_vkb2_func_pane_g8

0xc3d5,	// (0x00070b38) bg_vkb2_func_pane_g9

0x0008,

0xfa4a,	// (0x000741ad) bg_vkb2_func_pane_g

0x60f8,	// (0x0006a85b) blid2_tripm_pane_g6_ParamLimits

0x60f8,	// (0x0006a85b) blid2_tripm_pane_g6

0xe9b0,	// (0x00073113) mp4_progress_pane_g1

0x616f,	// (0x0006a8d2) blid2_tripm_values_pane_ParamLimits

0x616f,	// (0x0006a8d2) blid2_tripm_values_pane

0x62c0,	// (0x0006aa23) blid2_tripm_values_pane_t1

0x62ce,	// (0x0006aa31) blid2_tripm_values_pane_t2

0x62dc,	// (0x0006aa3f) blid2_tripm_values_pane_t3

0x62ea,	// (0x0006aa4d) blid2_tripm_values_pane_t4

0x62f8,	// (0x0006aa5b) blid2_tripm_values_pane_t5

0x6306,	// (0x0006aa69) blid2_tripm_values_pane_t6

0x6314,	// (0x0006aa77) blid2_tripm_values_pane_t7

0x6322,	// (0x0006aa85) blid2_tripm_values_pane_t8

0x6330,	// (0x0006aa93) blid2_tripm_values_pane_t9

0x0008,

0xfa5d,	// (0x000741c0) blid2_tripm_values_pane_t

0x0f0c,	// (0x0006566f) call_video_pane_t1_ParamLimits

0x0f26,	// (0x00065689) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00073940) call_video_pane_t_ParamLimits

0x2702,	// (0x00066e65) msg_header_pane_g1_ParamLimits

0xcc5c,	// (0x000713bf) msg_header_pane_g2_ParamLimits

0xcc5c,	// (0x000713bf) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x00073b30) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x00073b30) msg_header_pane_g

0xc02b,	// (0x0007078e) main_clock2_pane_ParamLimits

0x4088,	// (0x000687eb) grid_clock2_toolbar_pane_ParamLimits

0x4088,	// (0x000687eb) grid_clock2_toolbar_pane

0x4088,	// (0x000687eb) listscroll_clock2_pane_ParamLimits

0x4088,	// (0x000687eb) listscroll_clock2_pane

0x4167,	// (0x000688ca) main_clock2_pane_t3_ParamLimits

0x4167,	// (0x000688ca) main_clock2_pane_t3

0x418a,	// (0x000688ed) main_clock2_pane_t4_ParamLimits

0x418a,	// (0x000688ed) main_clock2_pane_t4

0x633e,	// (0x0006aaa1) cell_clock2_toolbar_pane

0x6346,	// (0x0006aaa9) cell_clock2_toolbar_pane_cp01

0x6346,	// (0x0006aaa9) cell_clock2_toolbar_pane_cp02

0x634e,	// (0x0006aab1) cell_clock2_toolbar_pane_cp03

0x6356,	// (0x0006aab9) list_clock2_pane

0xc9b2,	// (0x00071115) scroll_pane_cp10

0x635e,	// (0x0006aac1) list_single_clock2_pane_ParamLimits

0x635e,	// (0x0006aac1) list_single_clock2_pane

0xc1c9,	// (0x0007092c) list_highlight_pane_cp08

0x636b,	// (0x0006aace) list_single_clock2_pane_t1

0x6379,	// (0x0006aadc) list_single_clock2_pane_t2

0x0001,

0xfa70,	// (0x000741d3) list_single_clock2_pane_t

0xa396,	// (0x0006eaf9) bg_button_pane_cp10

0x6387,	// (0x0006aaea) cell_clock2_toolbar_pane_g1

0x2710,	// (0x00066e73) aid_main_viewer_pane_g1_ParamLimits

0x2710,	// (0x00066e73) aid_main_viewer_pane_g1

0x271e,	// (0x00066e81) aid_main_viewer_pane_g2_ParamLimits

0x271e,	// (0x00066e81) aid_main_viewer_pane_g2

0x272c,	// (0x00066e8f) aid_main_viewer_pane_g3_ParamLimits

0x272c,	// (0x00066e8f) aid_main_viewer_pane_g3

0x273b,	// (0x00066e9e) aid_main_viewer_pane_g4_ParamLimits

0x273b,	// (0x00066e9e) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x00073b41) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x00073b41) aid_main_viewer_pane_g

0x3026,	// (0x00067789) main_calc_pane_ParamLimits

0x304a,	// (0x000677ad) main_dialer2_pane_ParamLimits

0xa421,	// (0x0006eb84) main_cam6_pane

0xa421,	// (0x0006eb84) main_vid6_pane

0x4094,	// (0x000687f7) listscroll_gen_pane_cp06_ParamLimits

0x4094,	// (0x000687f7) listscroll_gen_pane_cp06

0x41ad,	// (0x00068910) main_clock2_pane_t5_ParamLimits

0x41ad,	// (0x00068910) main_clock2_pane_t5

0x420b,	// (0x0006896e) aid_call2_pane_cp10_ParamLimits

0x421d,	// (0x00068980) aid_call_pane_cp10_ParamLimits

0xca21,	// (0x00071184) popup_clock_analogue_window_cp10_g1_ParamLimits

0xca21,	// (0x00071184) popup_clock_analogue_window_cp10_g2_ParamLimits

0x422f,	// (0x00068992) popup_clock_analogue_window_cp10_g3_ParamLimits

0x422f,	// (0x00068992) popup_clock_analogue_window_cp10_g4_ParamLimits

0xca21,	// (0x00071184) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x00073e65) popup_clock_analogue_window_cp10_g_ParamLimits

0x4245,	// (0x000689a8) popup_clock_analogue_window_cp10_t1_ParamLimits

0xea21,	// (0x00073184) cell_dialer2_keypad_pane_g2_ParamLimits

0xea21,	// (0x00073184) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e2,	// (0x00073f45) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e2,	// (0x00073f45) cell_dialer2_keypad_pane_g

0xbfd7,	// (0x0007073a) cell_dialer2_keypad_pane_t1

0x5305,	// (0x00069a68) main_cset_text2_pane_ParamLimits

0x5305,	// (0x00069a68) main_cset_text2_pane

0xef3e,	// (0x000736a1) area_vitu2_query_pane_g1_ParamLimits

0x5bf7,	// (0x0006a35a) area_vitu2_query_pane_g2_ParamLimits

0xf98d,	// (0x000740f0) area_vitu2_query_pane_g_ParamLimits

0xefc2,	// (0x00073725) area_vitu2_query_pane_t7_ParamLimits

0xefc2,	// (0x00073725) area_vitu2_query_pane_t7

0x5c60,	// (0x0006a3c3) bg_button_pane_cp018_ParamLimits

0x5c6c,	// (0x0006a3cf) bg_button_pane_cp021_ParamLimits

0x5c78,	// (0x0006a3db) bg_button_pane_cp022_ParamLimits

0x5c8b,	// (0x0006a3ee) bg_vkb2_func_pane_cp08_ParamLimits

0x5c60,	// (0x0006a3c3) bg_vkb2_func_pane_cp06_ParamLimits

0x5c6c,	// (0x0006a3cf) bg_vkb2_func_pane_cp07_ParamLimits

0x5c9f,	// (0x0006a402) input_focus_pane_cp09_ParamLimits

0xb347,	// (0x0006faaa) cam6_autofocus_pane_ParamLimits

0xb347,	// (0x0006faaa) cam6_autofocus_pane

0x638f,	// (0x0006aaf2) cam6_image_uncrop_pane_ParamLimits

0x638f,	// (0x0006aaf2) cam6_image_uncrop_pane

0x639f,	// (0x0006ab02) cam6_indi_pane_ParamLimits

0x639f,	// (0x0006ab02) cam6_indi_pane

0x63b5,	// (0x0006ab18) cam6_mode_pane_ParamLimits

0x63b5,	// (0x0006ab18) cam6_mode_pane

0x63c7,	// (0x0006ab2a) cam6_timer_pane_ParamLimits

0x63c7,	// (0x0006ab2a) cam6_timer_pane

0x63d3,	// (0x0006ab36) cam6_zoom_pane_ParamLimits

0x63d3,	// (0x0006ab36) cam6_zoom_pane

0x63e1,	// (0x0006ab44) cam6_mode_pane_g1_ParamLimits

0x63e1,	// (0x0006ab44) cam6_mode_pane_g1

0x63f1,	// (0x0006ab54) cam6_mode_pane_g2_ParamLimits

0x63f1,	// (0x0006ab54) cam6_mode_pane_g2

0x6401,	// (0x0006ab64) cam6_mode_pane_g3_ParamLimits

0x6401,	// (0x0006ab64) cam6_mode_pane_g3

0x6411,	// (0x0006ab74) cam6_mode_pane_g4_ParamLimits

0x6411,	// (0x0006ab74) cam6_mode_pane_g4

0x0003,

0xfa75,	// (0x000741d8) cam6_mode_pane_g_ParamLimits

0xfa75,	// (0x000741d8) cam6_mode_pane_g

0xe962,	// (0x000730c5) bg_tb_trans_pane_cp08_ParamLimits

0xe962,	// (0x000730c5) bg_tb_trans_pane_cp08

0x6421,	// (0x0006ab84) cam6_battery_pane_ParamLimits

0x6421,	// (0x0006ab84) cam6_battery_pane

0x6437,	// (0x0006ab9a) cam6_indi_pane_g1_ParamLimits

0x6437,	// (0x0006ab9a) cam6_indi_pane_g1

0x6449,	// (0x0006abac) cam6_indi_pane_g2_ParamLimits

0x6449,	// (0x0006abac) cam6_indi_pane_g2

0x645b,	// (0x0006abbe) cam6_indi_pane_g3_ParamLimits

0x645b,	// (0x0006abbe) cam6_indi_pane_g3

0x0002,

0xfa7e,	// (0x000741e1) cam6_indi_pane_g_ParamLimits

0xfa7e,	// (0x000741e1) cam6_indi_pane_g

0x646d,	// (0x0006abd0) cam6_indi_pane_t1_ParamLimits

0x646d,	// (0x0006abd0) cam6_indi_pane_t1

0x4cf6,	// (0x00069459) cam6_autofocus_pane_g1

0x4cee,	// (0x00069451) cam6_autofocus_pane_g2

0x4d06,	// (0x00069469) cam6_autofocus_pane_g3

0x4cfe,	// (0x00069461) cam6_autofocus_pane_g4

0x0003,

0xfa85,	// (0x000741e8) cam6_autofocus_pane_g

0x6493,	// (0x0006abf6) cam6_timer_pane_g1

0x649b,	// (0x0006abfe) cam6_timer_pane_t1

0x64a9,	// (0x0006ac0c) cam6_zoom_cont_pane

0x64b1,	// (0x0006ac14) cam6_zoom_pane_g1

0x64ba,	// (0x0006ac1d) cam6_zoom_pane_g2

0x64c3,	// (0x0006ac26) cam6_zoom_pane_g3

0x0002,

0xfa8e,	// (0x000741f1) cam6_zoom_pane_g

0xbfcd,	// (0x00070730) cam6_battery_pane_g1

0xbfcd,	// (0x00070730) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00073812) cam6_battery_pane_g

0x64b1,	// (0x0006ac14) cam6_zoom_cont_pane_g1

0x64ba,	// (0x0006ac1d) cam6_zoom_cont_pane_g2

0x64cc,	// (0x0006ac2f) cam6_zoom_cont_pane_g3

0x0002,

0xfa95,	// (0x000741f8) cam6_zoom_cont_pane_g

0x64e9,	// (0x0006ac4c) cam6_mode_pane_cp_ParamLimits

0x64e9,	// (0x0006ac4c) cam6_mode_pane_cp

0x64fb,	// (0x0006ac5e) cam6_zoom_pane_cp_ParamLimits

0x64fb,	// (0x0006ac5e) cam6_zoom_pane_cp

0x6509,	// (0x0006ac6c) vid6_image_uncrop_cif_pane_ParamLimits

0x6509,	// (0x0006ac6c) vid6_image_uncrop_cif_pane

0x6519,	// (0x0006ac7c) vid6_image_uncrop_nhd_pane_ParamLimits

0x6519,	// (0x0006ac7c) vid6_image_uncrop_nhd_pane

0x6538,	// (0x0006ac9b) vid6_image_uncrop_vga_pane_ParamLimits

0x6538,	// (0x0006ac9b) vid6_image_uncrop_vga_pane

0x6547,	// (0x0006acaa) vid6_image_uncrop_wvga_pane_ParamLimits

0x6547,	// (0x0006acaa) vid6_image_uncrop_wvga_pane

0x6556,	// (0x0006acb9) vid6_indi_pane_ParamLimits

0x6556,	// (0x0006acb9) vid6_indi_pane

0xe962,	// (0x000730c5) bg_tb_trans_pane_cp09_ParamLimits

0xe962,	// (0x000730c5) bg_tb_trans_pane_cp09

0x656e,	// (0x0006acd1) cam6_battery_pane_cp_ParamLimits

0x656e,	// (0x0006acd1) cam6_battery_pane_cp

0x657a,	// (0x0006acdd) vid6_indi_pane_g1_ParamLimits

0x657a,	// (0x0006acdd) vid6_indi_pane_g1

0x658c,	// (0x0006acef) vid6_indi_pane_g2_ParamLimits

0x658c,	// (0x0006acef) vid6_indi_pane_g2

0x659e,	// (0x0006ad01) vid6_indi_pane_g3_ParamLimits

0x659e,	// (0x0006ad01) vid6_indi_pane_g3

0x65b5,	// (0x0006ad18) vid6_indi_pane_g4_ParamLimits

0x65b5,	// (0x0006ad18) vid6_indi_pane_g4

0x65cc,	// (0x0006ad2f) vid6_indi_pane_g5_ParamLimits

0x65cc,	// (0x0006ad2f) vid6_indi_pane_g5

0x0004,

0xfa9c,	// (0x000741ff) vid6_indi_pane_g_ParamLimits

0xfa9c,	// (0x000741ff) vid6_indi_pane_g

0x65e6,	// (0x0006ad49) vid6_indi_pane_t1_ParamLimits

0x65e6,	// (0x0006ad49) vid6_indi_pane_t1

0x65fc,	// (0x0006ad5f) vid6_indi_pane_t2_ParamLimits

0x65fc,	// (0x0006ad5f) vid6_indi_pane_t2

0x6624,	// (0x0006ad87) vid6_indi_pane_t3_ParamLimits

0x6624,	// (0x0006ad87) vid6_indi_pane_t3

0x664c,	// (0x0006adaf) vid6_indi_pane_t4_ParamLimits

0x664c,	// (0x0006adaf) vid6_indi_pane_t4

0x0003,

0xfaa7,	// (0x0007420a) vid6_indi_pane_t_ParamLimits

0xfaa7,	// (0x0007420a) vid6_indi_pane_t

0x6670,	// (0x0006add3) wait_bar_pane_cp08

0x667f,	// (0x0006ade2) main_cset_text2_pane_t1_ParamLimits

0x667f,	// (0x0006ade2) main_cset_text2_pane_t1

0x64d4,	// (0x0006ac37) listscroll_gen_pane_cp06_t1_ParamLimits

0x64d4,	// (0x0006ac37) listscroll_gen_pane_cp06_t1

0xa421,	// (0x0006eb84) main_cam6_set_pane

0x4c1e,	// (0x00069381) bg_tb_trans_pane_cp06_ParamLimits

0xb1b3,	// (0x0006f916) cam4_indicators_pane_g1_ParamLimits

0xb1c4,	// (0x0006f927) cam4_indicators_pane_g2_ParamLimits

0xf81f,	// (0x00073f82) cam4_indicators_pane_g_ParamLimits

0xb1dc,	// (0x0006f93f) cam4_indicators_pane_t1_ParamLimits

0xa413,	// (0x0006eb76) bg_tb_trans_pane_cp07_ParamLimits

0xb20a,	// (0x0006f96d) vid4_indicators_pane_g1_ParamLimits

0xb220,	// (0x0006f983) vid4_indicators_pane_g2_ParamLimits

0xb234,	// (0x0006f997) vid4_indicators_pane_g3_ParamLimits

0xb247,	// (0x0006f9aa) vid4_indicators_pane_g4_ParamLimits

0xf831,	// (0x00073f94) vid4_indicators_pane_g_ParamLimits

0xb265,	// (0x0006f9c8) vid4_indicators_pane_t1_ParamLimits

0xb2db,	// (0x0006fa3e) vid4_progress_pane_g1_ParamLimits

0xb2eb,	// (0x0006fa4e) vid4_progress_pane_g2_ParamLimits

0x5de0,	// (0x0006a543) vid4_progress_pane_g3_ParamLimits

0xb2fb,	// (0x0006fa5e) vid4_progress_pane_g4_ParamLimits

0xf9d8,	// (0x0007413b) vid4_progress_pane_g_ParamLimits

0x5df2,	// (0x0006a555) vid4_progress_pane_t1_ParamLimits

0xb319,	// (0x0006fa7c) vid4_progress_pane_t2_ParamLimits

0xb332,	// (0x0006fa95) vid4_progress_pane_t3_ParamLimits

0xf9e3,	// (0x00074146) vid4_progress_pane_t_ParamLimits

0x5e0c,	// (0x0006a56f) wait_bar_pane_cp07_ParamLimits

0x66a0,	// (0x0006ae03) main_cam6_set_pane_g2_ParamLimits

0x66a0,	// (0x0006ae03) main_cam6_set_pane_g2

0x66c6,	// (0x0006ae29) main_cset6_listscroll_pane_ParamLimits

0x66c6,	// (0x0006ae29) main_cset6_listscroll_pane

0x66e4,	// (0x0006ae47) main_cset6_slider_pane_ParamLimits

0x66e4,	// (0x0006ae47) main_cset6_slider_pane

0x66fa,	// (0x0006ae5d) main_cset6_text2_pane_ParamLimits

0x66fa,	// (0x0006ae5d) main_cset6_text2_pane

0x6708,	// (0x0006ae6b) main_cset6_text_pane

0x6710,	// (0x0006ae73) main_cset_list_pane_copy1_ParamLimits

0x6710,	// (0x0006ae73) main_cset_list_pane_copy1

0x6720,	// (0x0006ae83) scroll_pane_cp028_copy1

0x6729,	// (0x0006ae8c) cset_list_set_pane_copy1

0x673d,	// (0x0006aea0) aid_position_infowindow_above_copy1

0x6745,	// (0x0006aea8) aid_position_infowindow_below_copy1

0x674d,	// (0x0006aeb0) cset_list_set_pane_g1_copy1

0x6755,	// (0x0006aeb8) cset_list_set_pane_g3_copy1_ParamLimits

0x6755,	// (0x0006aeb8) cset_list_set_pane_g3_copy1

0x6764,	// (0x0006aec7) cset_list_set_pane_t1_copy1_ParamLimits

0x6764,	// (0x0006aec7) cset_list_set_pane_t1_copy1

0xaaf0,	// (0x0006f253) list_highlight_pane_cp021_copy1_ParamLimits

0xaaf0,	// (0x0006f253) list_highlight_pane_cp021_copy1

0x6779,	// (0x0006aedc) cset6_slider_pane_ParamLimits

0x6779,	// (0x0006aedc) cset6_slider_pane

0x67a5,	// (0x0006af08) main_cset6_slider_pane_g1_ParamLimits

0x67a5,	// (0x0006af08) main_cset6_slider_pane_g1

0x67cd,	// (0x0006af30) main_cset6_slider_pane_g2_ParamLimits

0x67cd,	// (0x0006af30) main_cset6_slider_pane_g2

0x67f5,	// (0x0006af58) main_cset6_slider_pane_g3_ParamLimits

0x67f5,	// (0x0006af58) main_cset6_slider_pane_g3

0x6801,	// (0x0006af64) main_cset6_slider_pane_g4_ParamLimits

0x6801,	// (0x0006af64) main_cset6_slider_pane_g4

0x680d,	// (0x0006af70) main_cset6_slider_pane_g5_ParamLimits

0x680d,	// (0x0006af70) main_cset6_slider_pane_g5

0xec16,	// (0x00073379) main_cset6_slider_pane_g7_ParamLimits

0xec16,	// (0x00073379) main_cset6_slider_pane_g7

0xec22,	// (0x00073385) main_cset6_slider_pane_g8_ParamLimits

0xec22,	// (0x00073385) main_cset6_slider_pane_g8

0x53ad,	// (0x00069b10) main_cset6_slider_pane_g9_ParamLimits

0x53ad,	// (0x00069b10) main_cset6_slider_pane_g9

0x53b9,	// (0x00069b1c) main_cset6_slider_pane_g10_ParamLimits

0x53b9,	// (0x00069b1c) main_cset6_slider_pane_g10

0x53c5,	// (0x00069b28) main_cset6_slider_pane_g11_ParamLimits

0x53c5,	// (0x00069b28) main_cset6_slider_pane_g11

0x53d1,	// (0x00069b34) main_cset6_slider_pane_g12_ParamLimits

0x53d1,	// (0x00069b34) main_cset6_slider_pane_g12

0x53dd,	// (0x00069b40) main_cset6_slider_pane_g13_ParamLimits

0x53dd,	// (0x00069b40) main_cset6_slider_pane_g13

0x53e9,	// (0x00069b4c) main_cset6_slider_pane_g14_ParamLimits

0x53e9,	// (0x00069b4c) main_cset6_slider_pane_g14

0x681b,	// (0x0006af7e) main_cset6_slider_pane_g15_ParamLimits

0x681b,	// (0x0006af7e) main_cset6_slider_pane_g15

0x540d,	// (0x00069b70) main_cset6_slider_pane_g16_ParamLimits

0x540d,	// (0x00069b70) main_cset6_slider_pane_g16

0x541b,	// (0x00069b7e) main_cset6_slider_pane_g17_ParamLimits

0x541b,	// (0x00069b7e) main_cset6_slider_pane_g17

0x0011,

0xfab0,	// (0x00074213) main_cset6_slider_pane_g_ParamLimits

0xfab0,	// (0x00074213) main_cset6_slider_pane_g

0x684b,	// (0x0006afae) main_cset6_slider_pane_t1_ParamLimits

0x684b,	// (0x0006afae) main_cset6_slider_pane_t1

0x688c,	// (0x0006afef) main_cset6_slider_pane_t2_ParamLimits

0x688c,	// (0x0006afef) main_cset6_slider_pane_t2

0x68b7,	// (0x0006b01a) main_cset6_slider_pane_t3_ParamLimits

0x68b7,	// (0x0006b01a) main_cset6_slider_pane_t3

0x68e2,	// (0x0006b045) main_cset6_slider_pane_t4_ParamLimits

0x68e2,	// (0x0006b045) main_cset6_slider_pane_t4

0x690d,	// (0x0006b070) main_cset6_slider_pane_t5_ParamLimits

0x690d,	// (0x0006b070) main_cset6_slider_pane_t5

0x693a,	// (0x0006b09d) main_cset6_slider_pane_t7_ParamLimits

0x693a,	// (0x0006b09d) main_cset6_slider_pane_t7

0x6970,	// (0x0006b0d3) main_cset6_slider_pane_t8_ParamLimits

0x6970,	// (0x0006b0d3) main_cset6_slider_pane_t8

0x6994,	// (0x0006b0f7) main_cset6_slider_pane_t9_ParamLimits

0x6994,	// (0x0006b0f7) main_cset6_slider_pane_t9

0x69b8,	// (0x0006b11b) main_cset6_slider_pane_t10_ParamLimits

0x69b8,	// (0x0006b11b) main_cset6_slider_pane_t10

0x69dc,	// (0x0006b13f) main_cset6_slider_pane_t11_ParamLimits

0x69dc,	// (0x0006b13f) main_cset6_slider_pane_t11

0x6a02,	// (0x0006b165) main_cset6_slider_pane_t14_ParamLimits

0x6a02,	// (0x0006b165) main_cset6_slider_pane_t14

0x6a3b,	// (0x0006b19e) main_cset6_slider_pane_t15_ParamLimits

0x6a3b,	// (0x0006b19e) main_cset6_slider_pane_t15

0x000b,

0xfad5,	// (0x00074238) main_cset6_slider_pane_t_ParamLimits

0xfad5,	// (0x00074238) main_cset6_slider_pane_t

0x6a74,	// (0x0006b1d7) cset_slider_pane_g1_copy1

0x6a7d,	// (0x0006b1e0) cset_slider_pane_g2_copy1

0x6a86,	// (0x0006b1e9) cset_slider_pane_g3_copy1

0xa396,	// (0x0006eaf9) bg_popup_sub_pane_cp011_copy1

0x6ab5,	// (0x0006b218) main_cset_text_pane_g1_copy1

0xed66,	// (0x000734c9) main_cset_text_pane_t1_copy1

0xed74,	// (0x000734d7) main_cset_text_pane_t2_copy1

0xed82,	// (0x000734e5) main_cset_text_pane_t3_copy1

0xed90,	// (0x000734f3) main_cset_text_pane_t4_copy1

0xed9e,	// (0x00073501) main_cset_text_pane_t5_copy1

0x6abd,	// (0x0006b220) main_cset_text_pane_t6_copy1

0x6acb,	// (0x0006b22e) main_cset_text_pane_t7_copy1

0x667f,	// (0x0006ade2) main_cset_text2_pane_t1_copy1

0xa413,	// (0x0006eb76) main_ncimui_pane

0x32d8,	// (0x00067a3b) popup_query_ncimui_window_ParamLimits

0x32d8,	// (0x00067a3b) popup_query_ncimui_window

0xe51f,	// (0x00072c82) field_cale_ev2_pane_g4_ParamLimits

0xe51f,	// (0x00072c82) field_cale_ev2_pane_g4

0x4640,	// (0x00068da3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4640,	// (0x00068da3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7b9,	// (0x00073f1c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7b9,	// (0x00073f1c) cell_video_dialer_keypad_pane_g

0x4658,	// (0x00068dbb) cell_video_dialer_keypad_pane_t1

0xa396,	// (0x0006eaf9) bg_popup_window_pane_cp012

0xdde5,	// (0x00072548) heading_pane_cp06

0x6c20,	// (0x0006b383) ncim_query_content_pane

0xa396,	// (0x0006eaf9) bg_popup_heading_pane_cp01

0x6c28,	// (0x0006b38b) ncim_heading_pane_t1

0x6c36,	// (0x0006b399) ncim_indicator_popup_pane

0x6c48,	// (0x0006b3ab) ncim_query_button_pane

0x6c6a,	// (0x0006b3cd) ncim_query_content_pane_t1

0x6c7c,	// (0x0006b3df) ncim_query_content_pane_t2

0x0005,

0xfb19,	// (0x0007427c) ncim_query_content_pane_t

0x6d2e,	// (0x0006b491) ncim_query_list_pane

0x6d40,	// (0x0006b4a3) ncim_query_popup_pane

0x6c36,	// (0x0006b399) ncim_indicator_popup_pane_ParamLimits

0x6c50,	// (0x0006b3b3) ncim_query_content_pane_g1_ParamLimits

0x6c50,	// (0x0006b3b3) ncim_query_content_pane_g1

0x6c6a,	// (0x0006b3cd) ncim_query_content_pane_t1_ParamLimits

0x6c7c,	// (0x0006b3df) ncim_query_content_pane_t2_ParamLimits

0x6c8e,	// (0x0006b3f1) ncim_query_content_pane_t3_ParamLimits

0x6c8e,	// (0x0006b3f1) ncim_query_content_pane_t3

0x6cb6,	// (0x0006b419) ncim_query_content_pane_t4_ParamLimits

0x6cb6,	// (0x0006b419) ncim_query_content_pane_t4

0x6cde,	// (0x0006b441) ncim_query_content_pane_t5_ParamLimits

0x6cde,	// (0x0006b441) ncim_query_content_pane_t5

0x6d06,	// (0x0006b469) ncim_query_content_pane_t6_ParamLimits

0x6d06,	// (0x0006b469) ncim_query_content_pane_t6

0xfb19,	// (0x0007427c) ncim_query_content_pane_t_ParamLimits

0x6d2e,	// (0x0006b491) ncim_query_list_pane_ParamLimits

0x6d40,	// (0x0006b4a3) ncim_query_popup_pane_ParamLimits

0x6d54,	// (0x0006b4b7) wait_bar_pane_cp04

0xa396,	// (0x0006eaf9) input_focus_pane_cp011

0x6d5c,	// (0x0006b4bf) ncim_query_popup_pane_t1

0x6d6a,	// (0x0006b4cd) ncim_list_query_list_pane_ParamLimits

0x6d6a,	// (0x0006b4cd) ncim_list_query_list_pane

0xa396,	// (0x0006eaf9) bg_button_pane_cp027

0x6d7d,	// (0x0006b4e0) ncim_query_button_pane_g1

0xa396,	// (0x0006eaf9) list_highlight_pane_cp012

0x6d87,	// (0x0006b4ea) ncim_list_query_list_pane_g1

0x6d8f,	// (0x0006b4f2) ncim_list_query_list_pane_t1

0xb1d0,	// (0x0006f933) cam4_indicators_pane_g3_ParamLimits

0xb1d0,	// (0x0006f933) cam4_indicators_pane_g3

0xb253,	// (0x0006f9b6) vid4_indicators_pane_g5_ParamLimits

0xb253,	// (0x0006f9b6) vid4_indicators_pane_g5

0xb30a,	// (0x0006fa6d) vid4_progress_pane_g5_ParamLimits

0xb30a,	// (0x0006fa6d) vid4_progress_pane_g5

0x6b0b,	// (0x0006b26e) main_ncimui_pane_g1

0x6b74,	// (0x0006b2d7) ncimui_group_query_pane_ParamLimits

0x6b74,	// (0x0006b2d7) ncimui_group_query_pane

0x6bbc,	// (0x0006b31f) ncimui_list_pane_ParamLimits

0x6bbc,	// (0x0006b31f) ncimui_list_pane

0x6be3,	// (0x0006b346) ncimui_text_pane_ParamLimits

0x6be3,	// (0x0006b346) ncimui_text_pane

0x6d9d,	// (0x0006b500) ncimui_text_pane_t1_ParamLimits

0x6d9d,	// (0x0006b500) ncimui_text_pane_t1

0x6dbb,	// (0x0006b51e) ncimui_list_single_graphic_pane_ParamLimits

0x6dbb,	// (0x0006b51e) ncimui_list_single_graphic_pane

0x6dcb,	// (0x0006b52e) ncimui_query_pane_ParamLimits

0x6dcb,	// (0x0006b52e) ncimui_query_pane

0xa396,	// (0x0006eaf9) list_highlight_pane_cp013

0x6dde,	// (0x0006b541) ncim_list_query_list_pane_t1_copy1

0x6d87,	// (0x0006b4ea) ncim_list_single_graphic_pane_g1

0x6dec,	// (0x0006b54f) ncim_query_button_pane_cp01

0x6df8,	// (0x0006b55b) ncim_query_entry_pane_ParamLimits

0x6df8,	// (0x0006b55b) ncim_query_entry_pane

0x6e0b,	// (0x0006b56e) ncimui_query_pane_g1

0x6e17,	// (0x0006b57a) ncimui_query_pane_t1_ParamLimits

0x6e17,	// (0x0006b57a) ncimui_query_pane_t1

0xaaf0,	// (0x0006f253) input_focus_pane_cp012

0x6e30,	// (0x0006b593) ncim_query_entry_pane_t1

0xc02b,	// (0x0007078e) main_im_pane_ParamLimits

0xa413,	// (0x0006eb76) main_mobtv_pane_ParamLimits

0xa413,	// (0x0006eb76) main_mobtv_pane

0x6833,	// (0x0006af96) main_cset6_slider_pane_g18_ParamLimits

0x6833,	// (0x0006af96) main_cset6_slider_pane_g18

0x683f,	// (0x0006afa2) main_cset6_slider_pane_g19_ParamLimits

0x683f,	// (0x0006afa2) main_cset6_slider_pane_g19

0xab73,	// (0x0006f2d6) bg_main_mobtv_pane_ParamLimits

0xab73,	// (0x0006f2d6) bg_main_mobtv_pane

0x6e42,	// (0x0006b5a5) main_mobtv_info_pane

0x6e4d,	// (0x0006b5b0) main_mobtv_loading_pane_ParamLimits

0x6e4d,	// (0x0006b5b0) main_mobtv_loading_pane

0x6e5a,	// (0x0006b5bd) main_mobtv_pg_channel_list_pane

0x6e64,	// (0x0006b5c7) main_mobtv_pg_hdr_pane

0x6e6d,	// (0x0006b5d0) main_mobtv_programe_curr_pane_ParamLimits

0x6e6d,	// (0x0006b5d0) main_mobtv_programe_curr_pane

0x6e7a,	// (0x0006b5dd) main_mobtv_programe_next_pane_ParamLimits

0x6e7a,	// (0x0006b5dd) main_mobtv_programe_next_pane

0x6e87,	// (0x0006b5ea) popup_mobtv_noti_window

0xbfcd,	// (0x00070730) main_tv_pg_hdr_pane_g1

0x6e91,	// (0x0006b5f4) main_tv_pg_hdr_pane_g2

0x6e99,	// (0x0006b5fc) main_tv_pg_hdr_pane_g3

0x6ea1,	// (0x0006b604) main_tv_pg_hdr_pane_g4

0x6ea9,	// (0x0006b60c) main_tv_pg_hdr_pane_g5

0x6eb3,	// (0x0006b616) main_tv_pg_hdr_pane_g6

0x6ebd,	// (0x0006b620) main_tv_pg_hdr_pane_g7

0x6ec7,	// (0x0006b62a) main_tv_pg_hdr_pane_g8

0x6ed1,	// (0x0006b634) main_tv_pg_hdr_pane_g9

0x6edb,	// (0x0006b63e) main_tv_pg_hdr_pane_g10

0x6ee5,	// (0x0006b648) main_tv_pg_hdr_pane_g11

0x000a,

0xfb26,	// (0x00074289) main_tv_pg_hdr_pane_g

0x6eef,	// (0x0006b652) main_tv_pg_hdr_pane_t1

0x6efd,	// (0x0006b660) main_tv_pg_hdr_pane_t2

0x6f0b,	// (0x0006b66e) main_tv_pg_hdr_pane_t3

0x6f1b,	// (0x0006b67e) main_tv_pg_hdr_pane_t4

0x6f2b,	// (0x0006b68e) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3d,	// (0x000742a0) main_tv_pg_hdr_pane_t

0x6f3b,	// (0x0006b69e) single_mobtv_pg_channel_pane_ParamLimits

0x6f3b,	// (0x0006b69e) single_mobtv_pg_channel_pane

0x6f4d,	// (0x0006b6b0) single_mobtv_pg_channel_table_pane

0x6f56,	// (0x0006b6b9) single_mobtv_pg_channel_thumb_pane

0x6f5f,	// (0x0006b6c2) single_tv_pg_channel_pane_g1

0x6f68,	// (0x0006b6cb) single_tv_pg_channel_pane_g2

0x0001,

0xfb48,	// (0x000742ab) single_tv_pg_channel_pane_g

0xab57,	// (0x0006f2ba) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xab57,	// (0x0006f2ba) bg_single_mobtv_pg_channel_thumb_pane

0x6f71,	// (0x0006b6d4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x6f71,	// (0x0006b6d4) single_mobtv_pg_channel_thumb_pane_g1

0x6f7f,	// (0x0006b6e2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x6f7f,	// (0x0006b6e2) single_mobtv_pg_channel_thumb_pane_g2

0x6f8b,	// (0x0006b6ee) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x6f8b,	// (0x0006b6ee) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4d,	// (0x000742b0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4d,	// (0x000742b0) single_mobtv_pg_channel_thumb_pane_g

0x6f97,	// (0x0006b6fa) single_mobtv_pg_channel_thumb_pane_t1

0x6fa5,	// (0x0006b708) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb54,	// (0x000742b7) single_mobtv_pg_channel_thumb_pane_t

0xbfcd,	// (0x00070730) bg_single_mobtv_pg_channel_table_pane_g1

0xbfcd,	// (0x00070730) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00073812) bg_single_mobtv_pg_channel_table_pane_g

0x6fb3,	// (0x0006b716) single_mobtv_pg_channel_table_pane_t1

0x6fc1,	// (0x0006b724) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb59,	// (0x000742bc) single_mobtv_pg_channel_table_pane_t

0x6fd7,	// (0x0006b73a) main_mobtv_info_pane_g1_ParamLimits

0x6fd7,	// (0x0006b73a) main_mobtv_info_pane_g1

0x6ff5,	// (0x0006b758) main_mobtv_info_pane_t1_ParamLimits

0x6ff5,	// (0x0006b758) main_mobtv_info_pane_t1

0x706d,	// (0x0006b7d0) main_mobtv_info_pane_t2_ParamLimits

0x706d,	// (0x0006b7d0) main_mobtv_info_pane_t2

0x0002,

0xfb63,	// (0x000742c6) main_mobtv_info_pane_t_ParamLimits

0xfb63,	// (0x000742c6) main_mobtv_info_pane_t

0x70fe,	// (0x0006b861) wait_bar_pane_cp05

0x7110,	// (0x0006b873) main_mobtv_loading_pane_g1_ParamLimits

0x7110,	// (0x0006b873) main_mobtv_loading_pane_g1

0x7121,	// (0x0006b884) main_mobtv_loading_pane_g2_ParamLimits

0x7121,	// (0x0006b884) main_mobtv_loading_pane_g2

0x712d,	// (0x0006b890) main_mobtv_loading_pane_g3_ParamLimits

0x712d,	// (0x0006b890) main_mobtv_loading_pane_g3

0x0002,

0xfb6a,	// (0x000742cd) main_mobtv_loading_pane_g_ParamLimits

0xfb6a,	// (0x000742cd) main_mobtv_loading_pane_g

0x7140,	// (0x0006b8a3) main_mobtv_loading_pane_t1_ParamLimits

0x7140,	// (0x0006b8a3) main_mobtv_loading_pane_t1

0x7158,	// (0x0006b8bb) main_mobtv_loading_pane_t2_ParamLimits

0x7158,	// (0x0006b8bb) main_mobtv_loading_pane_t2

0x0001,

0xfb71,	// (0x000742d4) main_mobtv_loading_pane_t_ParamLimits

0xfb71,	// (0x000742d4) main_mobtv_loading_pane_t

0x717c,	// (0x0006b8df) wait_bar_pane_cp06_ParamLimits

0x717c,	// (0x0006b8df) wait_bar_pane_cp06

0x718b,	// (0x0006b8ee) main_mobtv_programe_curr_pane_t1

0x7199,	// (0x0006b8fc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb76,	// (0x000742d9) main_mobtv_programe_curr_pane_t

0x71a7,	// (0x0006b90a) main_mobtv_programe_next_pane_t1

0x71b5,	// (0x0006b918) main_mobtv_programe_next_pane_t2

0x71c3,	// (0x0006b926) main_mobtv_programe_next_pane_t3

0x0002,

0xfb7b,	// (0x000742de) main_mobtv_programe_next_pane_t

0xa396,	// (0x0006eaf9) bg_popup_mobtv_noti_window_pane

0x71d1,	// (0x0006b934) popup_mobtv_noti_window_g1

0x71d9,	// (0x0006b93c) popup_mobtv_noti_window_t1

0x71e7,	// (0x0006b94a) popup_mobtv_noti_window_t2

0x0001,

0xfb82,	// (0x000742e5) popup_mobtv_noti_window_t

0xbfcd,	// (0x00070730) bg_popup_mobtv_noti_window_pane_g1

0xa421,	// (0x0006eb84) sc_clock_pane

0xa421,	// (0x0006eb84) main_fs_bigclock_pane

0x6159,	// (0x0006a8bc) blid2_tripm_pane_t4_ParamLimits

0x6159,	// (0x0006a8bc) blid2_tripm_pane_t4

0xab57,	// (0x0006f2ba) sc_clock_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) sc_clock_pane_g1

0xbfd7,	// (0x0007073a) sc_clock_pane_t1_ParamLimits

0xbfd7,	// (0x0007073a) sc_clock_pane_t1

0xbfd7,	// (0x0007073a) sc_clock_pane_t2_ParamLimits

0xbfd7,	// (0x0007073a) sc_clock_pane_t2

0xbfd7,	// (0x0007073a) sc_clock_pane_t3_ParamLimits

0xbfd7,	// (0x0007073a) sc_clock_pane_t3

0x0004,

0xfb87,	// (0x000742ea) sc_clock_pane_t_ParamLimits

0xfb87,	// (0x000742ea) sc_clock_pane_t

0x8602,	// (0x0006cd65) main_fs_bigclock_indicator_pane_ParamLimits

0x8602,	// (0x0006cd65) main_fs_bigclock_indicator_pane

0x7266,	// (0x0006b9c9) main_fs_bigclock_pane_g1_ParamLimits

0x7266,	// (0x0006b9c9) main_fs_bigclock_pane_g1

0x860e,	// (0x0006cd71) main_fs_bigclock_pane_t1_ParamLimits

0x860e,	// (0x0006cd71) main_fs_bigclock_pane_t1

0x8620,	// (0x0006cd83) main_fs_bigclock_pane_t2_ParamLimits

0x8620,	// (0x0006cd83) main_fs_bigclock_pane_t2

0x8634,	// (0x0006cd97) main_fs_bigclock_pane_t3_ParamLimits

0x8634,	// (0x0006cd97) main_fs_bigclock_pane_t3

0x0002,

0xfd18,	// (0x0007447b) main_fs_bigclock_pane_t_ParamLimits

0xfd18,	// (0x0007447b) main_fs_bigclock_pane_t

0xb6d7,	// (0x0006fe3a) main_fs_bigclock_indicator_pane_g1

0x6c5c,	// (0x0006b3bf) ncim_query_content_pane_g2_ParamLimits

0x6c5c,	// (0x0006b3bf) ncim_query_content_pane_g2

0x0001,

0xfb14,	// (0x00074277) ncim_query_content_pane_g_ParamLimits

0xfb14,	// (0x00074277) ncim_query_content_pane_g

0xbfd7,	// (0x0007073a) sc_clock_pane_t4_ParamLimits

0xbfd7,	// (0x0007073a) sc_clock_pane_t4

0xa413,	// (0x0006eb76) main_radioblah_pane

0xb13f,	// (0x0006f8a2) cell_call4_button_pane_t1_copy1_ParamLimits

0xb13f,	// (0x0006f8a2) cell_call4_button_pane_t1_copy1

0x6b23,	// (0x0006b286) main_ncimui_pane_t1_ParamLimits

0x6b23,	// (0x0006b286) main_ncimui_pane_t1

0x6b3d,	// (0x0006b2a0) main_ncimui_pane_t2_ParamLimits

0x6b3d,	// (0x0006b2a0) main_ncimui_pane_t2

0x0002,

0xfb0d,	// (0x00074270) main_ncimui_pane_t_ParamLimits

0xfb0d,	// (0x00074270) main_ncimui_pane_t

0xcba3,	// (0x00071306) main_radioblah_anim_pane_ParamLimits

0xcba3,	// (0x00071306) main_radioblah_anim_pane

0xcba3,	// (0x00071306) main_radioblah_info_pane_ParamLimits

0xcba3,	// (0x00071306) main_radioblah_info_pane

0xcdd8,	// (0x0007153b) main_radioblah_pane_t1_ParamLimits

0xcdd8,	// (0x0007153b) main_radioblah_pane_t1

0xcdd8,	// (0x0007153b) main_radioblah_pane_t2_ParamLimits

0xcdd8,	// (0x0007153b) main_radioblah_pane_t2

0x0003,

0xfba8,	// (0x0007430b) main_radioblah_pane_t_ParamLimits

0xfba8,	// (0x0007430b) main_radioblah_pane_t

0xaaf0,	// (0x0006f253) main_radioblah_rocker_ctrl_pane_ParamLimits

0xaaf0,	// (0x0006f253) main_radioblah_rocker_ctrl_pane

0xe970,	// (0x000730d3) main_radioblah_info_pane_t1_ParamLimits

0xe970,	// (0x000730d3) main_radioblah_info_pane_t1

0x742d,	// (0x0006bb90) main_radioblah_info_pane_t2_ParamLimits

0x742d,	// (0x0006bb90) main_radioblah_info_pane_t2

0x0003,

0xfbb1,	// (0x00074314) main_radioblah_info_pane_t_ParamLimits

0xfbb1,	// (0x00074314) main_radioblah_info_pane_t

0xbfcd,	// (0x00070730) main_radioblah_rocker_ctrl_pane_g1

0xbfcd,	// (0x00070730) main_radioblah_rocker_ctrl_pane_g2

0xbfcd,	// (0x00070730) main_radioblah_rocker_ctrl_pane_g3

0xbfcd,	// (0x00070730) main_radioblah_rocker_ctrl_pane_g4

0xbfcd,	// (0x00070730) main_radioblah_rocker_ctrl_pane_g5

0xbfcd,	// (0x00070730) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbba,	// (0x0007431d) main_radioblah_rocker_ctrl_pane_g

0x667f,	// (0x0006ade2) main_cset_text2_pane_t1_copy1_ParamLimits

0xb18d,	// (0x0006f8f0) cam4_image_uncrop_qvga_pane

0xb1f6,	// (0x0006f959) vid4_image_uncrop_qcif_pane

0xb347,	// (0x0006faaa) cam6_image_uncrop_qvga_pane_ParamLimits

0xb347,	// (0x0006faaa) cam6_image_uncrop_qvga_pane

0x6528,	// (0x0006ac8b) vid6_image_uncrop_qcif_pane_ParamLimits

0x6528,	// (0x0006ac8b) vid6_image_uncrop_qcif_pane

0xa396,	// (0x0006eaf9) bg_popup_preview_window_pane_cp03

0x6ad9,	// (0x0006b23c) list_cset_text2_pane

0x6ae1,	// (0x0006b244) main_cset6_text2_pane_g1

0x6ae9,	// (0x0006b24c) main_cset6_text2_pane_t1

0xb355,	// (0x0006fab8) list_cset_text2_pane_t1_ParamLimits

0xb355,	// (0x0006fab8) list_cset_text2_pane_t1

0xa413,	// (0x0006eb76) main_radioblah_pane_ParamLimits

0x70ea,	// (0x0006b84d) main_mobtv_info_pane_t3_ParamLimits

0x70ea,	// (0x0006b84d) main_mobtv_info_pane_t3

0xcdca,	// (0x0007152d) main_radioblah_pane_g1

0x73fd,	// (0x0006bb60) main_radioblah_info_pane_g1

0xbfeb,	// (0x0007074e) main_radioblah_info_pane_t3_ParamLimits

0xbfeb,	// (0x0007074e) main_radioblah_info_pane_t3

0x1ec1,	// (0x00066624) highlight_cell_cale_month_pane_ParamLimits

0x1ec1,	// (0x00066624) highlight_cell_cale_month_pane

0xa421,	// (0x0006eb84) main_phob_fisheye_pane

0xe594,	// (0x00072cf7) scroll_pane_cp0031_ParamLimits

0xe594,	// (0x00072cf7) scroll_pane_cp0031

0x6670,	// (0x0006add3) wait_bar_pane_cp08_ParamLimits

0x6729,	// (0x0006ae8c) cset_list_set_pane_copy1_ParamLimits

0x747c,	// (0x0006bbdf) highlight_cell_cale_month_pane_g1

0x7484,	// (0x0006bbe7) highlight_cell_cale_month_pane_t1

0xf02e,	// (0x00073791) list_gen_pane_cp01

0xec01,	// (0x00073364) scroll_pane_01

0x7492,	// (0x0006bbf5) list_single_double_fisheye_pane

0x749b,	// (0x0006bbfe) list_double_fisheye_pane_g1_ParamLimits

0x749b,	// (0x0006bbfe) list_double_fisheye_pane_g1

0x74a7,	// (0x0006bc0a) list_double_fisheye_pane_g2_ParamLimits

0x74a7,	// (0x0006bc0a) list_double_fisheye_pane_g2

0x74bb,	// (0x0006bc1e) list_double_fisheye_pane_g3_ParamLimits

0x74bb,	// (0x0006bc1e) list_double_fisheye_pane_g3

0x0004,

0xfbc7,	// (0x0007432a) list_double_fisheye_pane_g_ParamLimits

0xfbc7,	// (0x0007432a) list_double_fisheye_pane_g

0x74e4,	// (0x0006bc47) list_double_fisheye_pane_t1_ParamLimits

0x74e4,	// (0x0006bc47) list_double_fisheye_pane_t1

0x74ff,	// (0x0006bc62) list_double_fisheye_pane_t2_ParamLimits

0x74ff,	// (0x0006bc62) list_double_fisheye_pane_t2

0x0001,

0xfbd2,	// (0x00074335) list_double_fisheye_pane_t_ParamLimits

0xfbd2,	// (0x00074335) list_double_fisheye_pane_t

0xa421,	// (0x0006eb84) main_call5_pane

0xaaf0,	// (0x0006f253) sc_swipe_pane_ParamLimits

0xaaf0,	// (0x0006f253) sc_swipe_pane

0x7534,	// (0x0006bc97) call5_image_pane_ParamLimits

0x7534,	// (0x0006bc97) call5_image_pane

0x7551,	// (0x0006bcb4) call5_swipe_1_pane_ParamLimits

0x7551,	// (0x0006bcb4) call5_swipe_1_pane

0x7564,	// (0x0006bcc7) call5_swipe_2_pane_ParamLimits

0x7564,	// (0x0006bcc7) call5_swipe_2_pane

0x758f,	// (0x0006bcf2) popup_call5_audio_first_window_ParamLimits

0x758f,	// (0x0006bcf2) popup_call5_audio_first_window

0xab57,	// (0x0006f2ba) call5_swipe_1_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) call5_swipe_1_pane_g1

0x75a4,	// (0x0006bd07) call5_swipe_1_pane_g2_ParamLimits

0x75a4,	// (0x0006bd07) call5_swipe_1_pane_g2

0x0001,

0xfbd7,	// (0x0007433a) call5_swipe_1_pane_g_ParamLimits

0xfbd7,	// (0x0007433a) call5_swipe_1_pane_g

0x75b0,	// (0x0006bd13) call5_swipe_1_pane_t1_ParamLimits

0x75b0,	// (0x0006bd13) call5_swipe_1_pane_t1

0xab57,	// (0x0006f2ba) call5_swipe_2_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) call5_swipe_2_pane_g1

0x75c5,	// (0x0006bd28) call5_swipe_2_pane_g2_ParamLimits

0x75c5,	// (0x0006bd28) call5_swipe_2_pane_g2

0x0001,

0xfbdc,	// (0x0007433f) call5_swipe_2_pane_g_ParamLimits

0xfbdc,	// (0x0007433f) call5_swipe_2_pane_g

0x75d1,	// (0x0006bd34) call5_swipe_2_pane_t1_ParamLimits

0x75d1,	// (0x0006bd34) call5_swipe_2_pane_t1

0xab57,	// (0x0006f2ba) sc_swipe_pane_g1_ParamLimits

0xab57,	// (0x0006f2ba) sc_swipe_pane_g1

0xab65,	// (0x0006f2c8) sc_swipe_pane_g2_ParamLimits

0xab65,	// (0x0006f2c8) sc_swipe_pane_g2

0x0001,

0xf755,	// (0x00073eb8) sc_swipe_pane_g_ParamLimits

0xf755,	// (0x00073eb8) sc_swipe_pane_g

0xbfd7,	// (0x0007073a) sc_swipe_pane_t1_ParamLimits

0xbfd7,	// (0x0007073a) sc_swipe_pane_t1

0xa421,	// (0x0006eb84) main_cmail_launcher_pane

0x75e6,	// (0x0006bd49) aid_size_cell_cmail_l_ParamLimits

0x75e6,	// (0x0006bd49) aid_size_cell_cmail_l

0x75fb,	// (0x0006bd5e) grid_cmail_l_pane_ParamLimits

0x75fb,	// (0x0006bd5e) grid_cmail_l_pane

0x7615,	// (0x0006bd78) cell_cmail_l_pane_ParamLimits

0x7615,	// (0x0006bd78) cell_cmail_l_pane

0x7636,	// (0x0006bd99) cell_cmail_l_pane_g1_ParamLimits

0x7636,	// (0x0006bd99) cell_cmail_l_pane_g1

0x7642,	// (0x0006bda5) cell_cmail_l_pane_t1_ParamLimits

0x7642,	// (0x0006bda5) cell_cmail_l_pane_t1

0x7658,	// (0x0006bdbb) cell_cmail_l_pane_t2_ParamLimits

0x7658,	// (0x0006bdbb) cell_cmail_l_pane_t2

0x0001,

0xfbe1,	// (0x00074344) cell_cmail_l_pane_t_ParamLimits

0xfbe1,	// (0x00074344) cell_cmail_l_pane_t

0xaaf0,	// (0x0006f253) grid_highlight_pane_cp018_ParamLimits

0xaaf0,	// (0x0006f253) grid_highlight_pane_cp018

0x02af,	// (0x00064a12) main2_pane_ParamLimits

0x02af,	// (0x00064a12) main2_pane

0xc0ba,	// (0x0007081d) popup_sp_fs_action_menu_bg_pane_g1

0xc0c2,	// (0x00070825) popup_sp_fs_action_menu_bg_pane_g2

0xc0ca,	// (0x0007082d) popup_sp_fs_action_menu_bg_pane_g3

0xc0d2,	// (0x00070835) popup_sp_fs_action_menu_bg_pane_g4

0xc0da,	// (0x0007083d) popup_sp_fs_action_menu_bg_pane_g5

0xc0e2,	// (0x00070845) popup_sp_fs_action_menu_bg_pane_g6

0xc0ea,	// (0x0007084d) popup_sp_fs_action_menu_bg_pane_g7

0xc0f2,	// (0x00070855) popup_sp_fs_action_menu_bg_pane_g8

0xc0fa,	// (0x0007085d) popup_sp_fs_action_menu_bg_pane_g9

0xc102,	// (0x00070865) popup_sp_fs_action_menu_bg_pane_g10

0xc102,	// (0x00070865) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00073863) popup_sp_fs_action_menu_bg_pane_g

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g3_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g3_g1

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g3_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g3_g2

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g3_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00073911) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00073911) list_medium_line_x2_t3_g3_g

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g3_t1

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g3_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g3_t2

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00073918) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00073918) list_medium_line_x2_t3_g3_t

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g2_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g2_g1

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g2_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0007391f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0007391f) list_medium_line_x2_t3_g2_g

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g2_t1

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g2_t2

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00073918) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00073918) list_medium_line_x2_t3_g2_t

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g4_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g4_g1

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g4_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g4_g2

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g4_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g4_g3

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g4_g4_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00073924) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00073924) list_medium_line_x2_t4_g4_g

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g4_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g4_t1

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g4_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g4_t2

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g4_t3_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g4_t3

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007392d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007392d) list_medium_line_x2_t4_g4_t

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g4_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g4_g1

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g4_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g4_g2

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g4_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g4_g3

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g4_g4_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00073924) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00073924) list_medium_line_x2_t2_g4_g

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g4_t1

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x000738f4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x000738f4) list_medium_line_x2_t2_g4_t

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g3_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g3_g1

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g3_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g3_g2

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g3_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00073911) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00073911) list_medium_line_x2_t2_g3_g

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g3_t1

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x000738f4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x000738f4) list_medium_line_x2_t2_g3_t

0x2018,	// (0x0006677b) main_sp_fs_list_pane_ParamLimits

0x2018,	// (0x0006677b) main_sp_fs_list_pane

0x2024,	// (0x00066787) sp_fs_scroll_pane_ParamLimits

0x2024,	// (0x00066787) sp_fs_scroll_pane

0xc723,	// (0x00070e86) list_medium_line_x2_t3_t1

0xc723,	// (0x00070e86) list_medium_line_x2_t3_t2

0xc723,	// (0x00070e86) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x000739da) list_medium_line_x2_t3_t

0xc723,	// (0x00070e86) list_medium_line_x3_t4_t1

0xc723,	// (0x00070e86) list_medium_line_x3_t4_t2

0xc723,	// (0x00070e86) list_medium_line_x3_t4_t3

0xc723,	// (0x00070e86) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x000739e1) list_medium_line_x3_t4_t

0xc723,	// (0x00070e86) list_medium_line_x4_t5_t1

0xc723,	// (0x00070e86) list_medium_line_x4_t5_t2

0xc723,	// (0x00070e86) list_medium_line_x4_t5_t3

0xc723,	// (0x00070e86) list_medium_line_x4_t5_t4

0xc723,	// (0x00070e86) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x000739ea) list_medium_line_x4_t5_t

0xab57,	// (0x0006f2ba) list_medium_line_t4_g4_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t4_g4_g1

0xab57,	// (0x0006f2ba) list_medium_line_t4_g4_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t4_g4_g2

0xab57,	// (0x0006f2ba) list_medium_line_t4_g4_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t4_g4_g3

0xab57,	// (0x0006f2ba) list_medium_line_t4_g4_g4_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00073924) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00073924) list_medium_line_t4_g4_g

0xbfd7,	// (0x0007073a) list_medium_line_t4_g4_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t4_g4_t1

0xbfd7,	// (0x0007073a) list_medium_line_t4_g4_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t4_g4_t2

0xbfd7,	// (0x0007073a) list_medium_line_t4_g4_t3_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t4_g4_t3

0xbfd7,	// (0x0007073a) list_medium_line_t4_g4_t4_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007392d) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007392d) list_medium_line_t4_g4_t

0x20d2,	// (0x00066835) chi_dic_find_pane_g1

0x305e,	// (0x000677c1) main_tport_pane

0xc723,	// (0x00070e86) list_medium_line_plain_t1

0xab57,	// (0x0006f2ba) list_medium_line_t2_g2_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t2_g2_g1

0xab57,	// (0x0006f2ba) list_medium_line_t2_g2_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0007391f) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0007391f) list_medium_line_t2_g2_g

0xbfd7,	// (0x0007073a) list_medium_line_t2_g2_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t2_g2_t1

0xbfd7,	// (0x0007073a) list_medium_line_t2_g2_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x000738f4) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x000738f4) list_medium_line_t2_g2_t

0x5e1f,	// (0x0006a582) aid_sp_fs_list_icon_a_sm

0x5e27,	// (0x0006a58a) aid_sp_fs_list_icon_d

0x5e2f,	// (0x0006a592) aid_sp_fs_text_primary

0x5e38,	// (0x0006a59b) aid_sp_fs_text_secondary

0xa396,	// (0x0006eaf9) list_medium_line

0xa396,	// (0x0006eaf9) list_medium_line_g2

0xa396,	// (0x0006eaf9) list_medium_line_g3

0xa396,	// (0x0006eaf9) list_medium_line_plain

0xa396,	// (0x0006eaf9) list_medium_line_plain_t2

0xa396,	// (0x0006eaf9) list_medium_line_plain_t3

0xa396,	// (0x0006eaf9) list_medium_line_right_icon

0xa396,	// (0x0006eaf9) list_medium_line_right_iconx2

0xa396,	// (0x0006eaf9) list_medium_line_t2

0xa396,	// (0x0006eaf9) list_medium_line_t2_g2

0xa396,	// (0x0006eaf9) list_medium_line_t2_g3

0xa396,	// (0x0006eaf9) list_medium_line_t2_right_icon

0xa396,	// (0x0006eaf9) list_medium_line_t2_right_iconx2

0xa396,	// (0x0006eaf9) list_medium_line_t3

0xa396,	// (0x0006eaf9) list_medium_line_t3_g2

0xa396,	// (0x0006eaf9) list_medium_line_t3_g3

0xa396,	// (0x0006eaf9) list_medium_line_t3_right_iconx2

0xa396,	// (0x0006eaf9) list_medium_line_t4_g4

0xa396,	// (0x0006eaf9) list_medium_line_x2

0xa396,	// (0x0006eaf9) list_medium_line_x2_t2_g2

0xa396,	// (0x0006eaf9) list_medium_line_x2_t2_g3

0xa396,	// (0x0006eaf9) list_medium_line_x2_t2_g4

0xa396,	// (0x0006eaf9) list_medium_line_x2_t3

0xa396,	// (0x0006eaf9) list_medium_line_x2_t3_g2

0xa396,	// (0x0006eaf9) list_medium_line_x2_t3_g3

0xa396,	// (0x0006eaf9) list_medium_line_x2_t3_g4

0xa396,	// (0x0006eaf9) list_medium_line_x2_t4_g2

0xa396,	// (0x0006eaf9) list_medium_line_x2_t4_g4

0xa396,	// (0x0006eaf9) list_medium_line_x3

0xa396,	// (0x0006eaf9) list_medium_line_x3_t4

0xa396,	// (0x0006eaf9) list_medium_line_x3_t4_g4

0xa396,	// (0x0006eaf9) list_medium_line_x4_t4

0xa396,	// (0x0006eaf9) list_medium_line_x4_t4_g7

0xa396,	// (0x0006eaf9) list_medium_line_x4_t5

0x5e41,	// (0x0006a5a4) list_single_fs_dyc_pane_ParamLimits

0x5e41,	// (0x0006a5a4) list_single_fs_dyc_pane

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g1

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g2

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g3

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g4_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g4

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g5_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g5

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g6_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x4_t4_g7_g6

0xab65,	// (0x0006f2c8) list_medium_line_x4_t4_g7_g7_ParamLimits

0xab65,	// (0x0006f2c8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaee,	// (0x00074251) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaee,	// (0x00074251) list_medium_line_x4_t4_g7_g

0xbfd7,	// (0x0007073a) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x4_t4_g7_t1

0xbfd7,	// (0x0007073a) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x4_t4_g7_t2

0xbfd7,	// (0x0007073a) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x4_t4_g7_t3

0xbfeb,	// (0x0007074e) list_medium_line_x4_t4_g7_t4_ParamLimits

0xbfeb,	// (0x0007074e) list_medium_line_x4_t4_g7_t4

0xbfeb,	// (0x0007074e) list_medium_line_x4_t4_g7_t5_ParamLimits

0xbfeb,	// (0x0007074e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafd,	// (0x00074260) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafd,	// (0x00074260) list_medium_line_x4_t4_g7_t

0x6a8f,	// (0x0006b1f2) list_single_dyc_row_pane_ParamLimits

0x6a8f,	// (0x0006b1f2) list_single_dyc_row_pane

0x7521,	// (0x0006bc84) call5_gesture_pane_ParamLimits

0x7521,	// (0x0006bc84) call5_gesture_pane

0x7577,	// (0x0006bcda) call5_windows_pane_ParamLimits

0x7577,	// (0x0006bcda) call5_windows_pane

0x7675,	// (0x0006bdd8) call5_swipe_1_pane_cp_ParamLimits

0x7675,	// (0x0006bdd8) call5_swipe_1_pane_cp

0x7681,	// (0x0006bde4) call5_swipe_2_pane_cp_ParamLimits

0x7681,	// (0x0006bde4) call5_swipe_2_pane_cp

0xc1c9,	// (0x0007092c) call5_image_pane_cp

0x768d,	// (0x0006bdf0) popup_call5_audio_first_window_cp_ParamLimits

0x768d,	// (0x0006bdf0) popup_call5_audio_first_window_cp

0x769b,	// (0x0006bdfe) call5_swipe_1_pane_g1_cp_ParamLimits

0x769b,	// (0x0006bdfe) call5_swipe_1_pane_g1_cp

0x76a8,	// (0x0006be0b) call5_swipe_1_pane_g2_cp

0x76b0,	// (0x0006be13) call5_swipe_1_pane_t1_cp_ParamLimits

0x76b0,	// (0x0006be13) call5_swipe_1_pane_t1_cp

0x769b,	// (0x0006bdfe) call5_swipe_2_pane_g1_cp_ParamLimits

0x769b,	// (0x0006bdfe) call5_swipe_2_pane_g1_cp

0x76c5,	// (0x0006be28) call5_swipe_2_pane_g2_cp

0x76cd,	// (0x0006be30) call5_swipe_2_pane_t1_cp_ParamLimits

0x76cd,	// (0x0006be30) call5_swipe_2_pane_t1_cp

0xaaf0,	// (0x0006f253) main_sp_fs_email_pane

0xf037,	// (0x0007379a) main_sp_fs_listscroll_pane_te

0x76e2,	// (0x0006be45) popup_sp_fs_action_menu_pane_ParamLimits

0x76e2,	// (0x0006be45) popup_sp_fs_action_menu_pane

0xbfcd,	// (0x00070730) bg_sp_fs_ctrlbar_pane_g1

0x7728,	// (0x0006be8b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x7731,	// (0x0006be94) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x773a,	// (0x0006be9d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbfcd,	// (0x00070730) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe6,	// (0x00074349) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe099,	// (0x000727fc) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe099,	// (0x000727fc) bg_sp_fs_ctrlbar_ddmenu_pane

0x7743,	// (0x0006bea6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x7743,	// (0x0006bea6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x774f,	// (0x0006beb2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x774f,	// (0x0006beb2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbef,	// (0x00074352) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbef,	// (0x00074352) main_sp_fs_ctrlbar_ddmenu_pane_g

0x775b,	// (0x0006bebe) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x775b,	// (0x0006bebe) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbfcd,	// (0x00070730) list_medium_line_t2_right_icon_g1

0xc723,	// (0x00070e86) list_medium_line_t2_right_icon_t1

0xc723,	// (0x00070e86) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf4,	// (0x00074357) list_medium_line_t2_right_icon_t

0xcba3,	// (0x00071306) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcba3,	// (0x00071306) bg_sp_fs_ctrlbar_pane

0x77fc,	// (0x0006bf5f) main_sp_fs_ctrlbar_button_pane_cp01

0x7806,	// (0x0006bf69) main_sp_fs_ctrlbar_ddmenu_pane

0x7810,	// (0x0006bf73) main_sp_fs_ctrlbar_pane_g1

0x781c,	// (0x0006bf7f) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbf9,	// (0x0007435c) main_sp_fs_ctrlbar_pane_g

0x785c,	// (0x0006bfbf) main_sp_fs_ctrlbar_pane_t1

0x789b,	// (0x0006bffe) main_sp_fs_ctrlbar_pane

0x78da,	// (0x0006c03d) main_sp_fs_listscroll_pane_te_cp01

0x7906,	// (0x0006c069) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7906,	// (0x0006c069) popup_sp_fs_action_menu_pane_cp01

0xaaf0,	// (0x0006f253) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaaf0,	// (0x0006f253) bg_sp_fs_highlight_list_pane_cp01

0x792b,	// (0x0006c08e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x792b,	// (0x0006c08e) sp_fs_action_menu_list_gene_pane_g1

0x793a,	// (0x0006c09d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x793a,	// (0x0006c09d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc07,	// (0x0007436a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc07,	// (0x0007436a) sp_fs_action_menu_list_gene_pane_g

0x7947,	// (0x0006c0aa) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7947,	// (0x0006c0aa) sp_fs_action_menu_list_gene_pane_t1

0x795f,	// (0x0006c0c2) sp_fs_action_menu_list_gene_pane_ParamLimits

0x795f,	// (0x0006c0c2) sp_fs_action_menu_list_gene_pane

0x7982,	// (0x0006c0e5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x7982,	// (0x0006c0e5) popup_sp_fs_action_menu_bg_pane

0x7990,	// (0x0006c0f3) sp_fs_action_menu_list_pane_ParamLimits

0x7990,	// (0x0006c0f3) sp_fs_action_menu_list_pane

0x79b4,	// (0x0006c117) sp_fs_scroll_pane_cp01_ParamLimits

0x79b4,	// (0x0006c117) sp_fs_scroll_pane_cp01

0xc723,	// (0x00070e86) list_medium_line_plain_t2_t1

0xc723,	// (0x00070e86) list_medium_line_plain_t2_t2

0x0001,

0xfbf4,	// (0x00074357) list_medium_line_plain_t2_t

0xc723,	// (0x00070e86) list_medium_line_plain_t3_t1

0xc723,	// (0x00070e86) list_medium_line_plain_t3_t2

0xc723,	// (0x00070e86) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x000739da) list_medium_line_plain_t3_t

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g2_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g2_g1

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g2_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0007391f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0007391f) list_medium_line_x2_t2_g2_g

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g2_t1

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x000738f4) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x000738f4) list_medium_line_x2_t2_g2_t

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g2_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g2_g1

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g2_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0007391f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0007391f) list_medium_line_x2_t4_g2_g

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g2_t1

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g2_t2

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g2_t3

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0007392d) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0007392d) list_medium_line_x2_t4_g2_t

0xbfcd,	// (0x00070730) list_medium_line_t3_right_iconx2_g1

0xbfcd,	// (0x00070730) list_medium_line_t3_right_iconx2_g2

0xbfcd,	// (0x00070730) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x00073af6) list_medium_line_t3_right_iconx2_g

0xc723,	// (0x00070e86) list_medium_line_t3_right_iconx2_t1

0xc723,	// (0x00070e86) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf4,	// (0x00074357) list_medium_line_t3_right_iconx2_t

0xab57,	// (0x0006f2ba) list_medium_line_x3_t4_g4_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x3_t4_g4_g1

0xab57,	// (0x0006f2ba) list_medium_line_x3_t4_g4_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x3_t4_g4_g2

0xab57,	// (0x0006f2ba) list_medium_line_x3_t4_g4_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x3_t4_g4_g3

0xab57,	// (0x0006f2ba) list_medium_line_x3_t4_g4_g4_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00073924) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00073924) list_medium_line_x3_t4_g4_g

0xbfd7,	// (0x0007073a) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x3_t4_g4_t1

0xbfd7,	// (0x0007073a) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x3_t4_g4_t2

0xbfd7,	// (0x0007073a) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x3_t4_g4_t3

0xbfd7,	// (0x0007073a) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007392d) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007392d) list_medium_line_x3_t4_g4_t

0x79da,	// (0x0006c13d) list_single_dyc_row_text_pane_t1_ParamLimits

0x79da,	// (0x0006c13d) list_single_dyc_row_text_pane_t1

0x7a23,	// (0x0006c186) list_single_dyc_row_text_pane_t2_ParamLimits

0x7a23,	// (0x0006c186) list_single_dyc_row_text_pane_t2

0x7a99,	// (0x0006c1fc) list_single_dyc_row_text_pane_t3_ParamLimits

0x7a99,	// (0x0006c1fc) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0c,	// (0x0007436f) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0c,	// (0x0007436f) list_single_dyc_row_text_pane_t

0x7b7c,	// (0x0006c2df) list_single_dyc_row_pane_g1_ParamLimits

0x7b7c,	// (0x0006c2df) list_single_dyc_row_pane_g1

0x7b88,	// (0x0006c2eb) list_single_dyc_row_pane_g2_ParamLimits

0x7b88,	// (0x0006c2eb) list_single_dyc_row_pane_g2

0x7b94,	// (0x0006c2f7) list_single_dyc_row_pane_g3_ParamLimits

0x7b94,	// (0x0006c2f7) list_single_dyc_row_pane_g3

0x7ba0,	// (0x0006c303) list_single_dyc_row_pane_g4_ParamLimits

0x7ba0,	// (0x0006c303) list_single_dyc_row_pane_g4

0x0003,

0xfc19,	// (0x0007437c) list_single_dyc_row_pane_g_ParamLimits

0xfc19,	// (0x0007437c) list_single_dyc_row_pane_g

0x7bac,	// (0x0006c30f) list_single_dyc_row_text_pane_ParamLimits

0x7bac,	// (0x0006c30f) list_single_dyc_row_text_pane

0xa396,	// (0x0006eaf9) bg_sp_fs_scroll_pane

0x7bcb,	// (0x0006c32e) thumb_sp_fs_scroll_pane

0xab57,	// (0x0006f2ba) list_medium_line_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_g1

0xbfd7,	// (0x0007073a) list_medium_line_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t1

0xab57,	// (0x0006f2ba) list_medium_line_x2_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_g1

0xab57,	// (0x0006f2ba) list_medium_line_x2_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0007391f) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0007391f) list_medium_line_x2_g

0xbfd7,	// (0x0007073a) list_medium_line_x2_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t1

0xab57,	// (0x0006f2ba) list_medium_line_x3_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x3_g1

0x4c1e,	// (0x00069381) list_medium_line_x3_g2_ParamLimits

0x4c1e,	// (0x00069381) list_medium_line_x3_g2

0x0001,

0xfc22,	// (0x00074385) list_medium_line_x3_g_ParamLimits

0xfc22,	// (0x00074385) list_medium_line_x3_g

0x7bd4,	// (0x0006c337) list_medium_line_x3_t1_ParamLimits

0x7bd4,	// (0x0006c337) list_medium_line_x3_t1

0x7be8,	// (0x0006c34b) thumb_sp_fs_scroll_pane_g1

0x7bf1,	// (0x0006c354) thumb_sp_fs_scroll_pane_g2

0x7bfa,	// (0x0006c35d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x0007438a) thumb_sp_fs_scroll_pane_g

0x7be8,	// (0x0006c34b) bg_sp_fs_scroll_pane_g1

0x7bf1,	// (0x0006c354) bg_sp_fs_scroll_pane_g2

0x7bfa,	// (0x0006c35d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x0007438a) bg_sp_fs_scroll_pane_g

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g4_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g4_g1

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g4_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g4_g2

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g4_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g4_g3

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g4_g4_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00073924) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00073924) list_medium_line_x2_t3_g4_g

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g4_t1

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g4_t2

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00073918) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00073918) list_medium_line_x2_t3_g4_t

0xab57,	// (0x0006f2ba) list_medium_line_g2_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_g2_g1

0xab57,	// (0x0006f2ba) list_medium_line_g2_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0007391f) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0007391f) list_medium_line_g2_g

0xbfd7,	// (0x0007073a) list_medium_line_g2_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_g2_t1

0xab57,	// (0x0006f2ba) list_medium_line_t3_g2_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t3_g2_g1

0xab57,	// (0x0006f2ba) list_medium_line_t3_g2_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0007391f) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0007391f) list_medium_line_t3_g2_g

0xbfd7,	// (0x0007073a) list_medium_line_t3_g2_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t3_g2_t1

0xbfd7,	// (0x0007073a) list_medium_line_t3_g2_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t3_g2_t2

0xbfd7,	// (0x0007073a) list_medium_line_t3_g2_t3_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00073918) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00073918) list_medium_line_t3_g2_t

0xbfcd,	// (0x00070730) list_medium_line_right_icon_g1

0xc723,	// (0x00070e86) list_medium_line_right_icon_t1

0xab57,	// (0x0006f2ba) list_medium_line_t2_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t2_g1

0xbfd7,	// (0x0007073a) list_medium_line_t2_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t2_t1

0xbfd7,	// (0x0007073a) list_medium_line_t2_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x000738f4) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x000738f4) list_medium_line_t2_t

0xab57,	// (0x0006f2ba) list_medium_line_t3_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t3_g1

0xbfd7,	// (0x0007073a) list_medium_line_t3_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t3_t1

0xbfd7,	// (0x0007073a) list_medium_line_t3_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t3_t2

0xbfd7,	// (0x0007073a) list_medium_line_t3_t3_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00073918) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00073918) list_medium_line_t3_t

0xab57,	// (0x0006f2ba) list_medium_line_g3_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_g3_g1

0xab57,	// (0x0006f2ba) list_medium_line_g3_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_g3_g2

0xab57,	// (0x0006f2ba) list_medium_line_g3_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00073911) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00073911) list_medium_line_g3_g

0xbfd7,	// (0x0007073a) list_medium_line_g3_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_g3_t1

0xab57,	// (0x0006f2ba) list_medium_line_t2_g3_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t2_g3_g1

0xab57,	// (0x0006f2ba) list_medium_line_t2_g3_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t2_g3_g2

0xab57,	// (0x0006f2ba) list_medium_line_t2_g3_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00073911) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00073911) list_medium_line_t2_g3_g

0xbfd7,	// (0x0007073a) list_medium_line_t2_g3_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t2_g3_t1

0xbfd7,	// (0x0007073a) list_medium_line_t2_g3_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x000738f4) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x000738f4) list_medium_line_t2_g3_t

0xab57,	// (0x0006f2ba) list_medium_line_t3_g3_g1_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t3_g3_g1

0xab57,	// (0x0006f2ba) list_medium_line_t3_g3_g2_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t3_g3_g2

0xab57,	// (0x0006f2ba) list_medium_line_t3_g3_g3_ParamLimits

0xab57,	// (0x0006f2ba) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00073911) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00073911) list_medium_line_t3_g3_g

0xbfd7,	// (0x0007073a) list_medium_line_t3_g3_t1_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t3_g3_t1

0xbfd7,	// (0x0007073a) list_medium_line_t3_g3_t2_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t3_g3_t2

0xbfd7,	// (0x0007073a) list_medium_line_t3_g3_t3_ParamLimits

0xbfd7,	// (0x0007073a) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00073918) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00073918) list_medium_line_t3_g3_t

0xbfcd,	// (0x00070730) list_medium_line_right_iconx2_g1

0xbfcd,	// (0x00070730) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00073812) list_medium_line_right_iconx2_g

0xc723,	// (0x00070e86) list_medium_line_right_iconx2_t1

0xbfcd,	// (0x00070730) list_medium_line_t2_right_iconx2_g1

0xbfcd,	// (0x00070730) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00073812) list_medium_line_t2_right_iconx2_g

0xc723,	// (0x00070e86) list_medium_line_t2_right_iconx2_t1

0xc723,	// (0x00070e86) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf4,	// (0x00074357) list_medium_line_t2_right_iconx2_t

0xc723,	// (0x00070e86) list_medium_line_x4_t4_t1

0xc723,	// (0x00070e86) list_medium_line_x4_t4_t2

0xc723,	// (0x00070e86) list_medium_line_x4_t4_t3

0xc723,	// (0x00070e86) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x000739e1) list_medium_line_x4_t4_t

0x7c47,	// (0x0006c3aa) tport_appsw_pane_ParamLimits

0x7c47,	// (0x0006c3aa) tport_appsw_pane

0x7c5f,	// (0x0006c3c2) tport_contact_pane_ParamLimits

0x7c5f,	// (0x0006c3c2) tport_contact_pane

0x7c7a,	// (0x0006c3dd) tport_listscroll_pane_ParamLimits

0x7c7a,	// (0x0006c3dd) tport_listscroll_pane

0x7c92,	// (0x0006c3f5) cell_tport_appsw_pane_ParamLimits

0x7c92,	// (0x0006c3f5) cell_tport_appsw_pane

0xcdca,	// (0x0007152d) tport_appsw_pane_g1_ParamLimits

0xcdca,	// (0x0007152d) tport_appsw_pane_g1

0x7cdc,	// (0x0006c43f) tport_contact_pane_g1

0x7ce5,	// (0x0006c448) tport_contact_pane_t1

0x7cf3,	// (0x0006c456) tport_contact_pane_t2

0x0001,

0xfc2e,	// (0x00074391) tport_contact_pane_t

0x7d01,	// (0x0006c464) list_tport_pane

0x7d0a,	// (0x0006c46d) scroll_pane_cp_030

0x7d1b,	// (0x0006c47e) cell_tport_appsw_pane_g1

0x7d2b,	// (0x0006c48e) cell_tport_appsw_pane_t1

0x7d39,	// (0x0006c49c) grid_highlight_pane_cp019

0x7d41,	// (0x0006c4a4) list_tport_double_graphic_pane_ParamLimits

0x7d41,	// (0x0006c4a4) list_tport_double_graphic_pane

0xaaf0,	// (0x0006f253) list_highlight_pane_cp023_ParamLimits

0xaaf0,	// (0x0006f253) list_highlight_pane_cp023

0x7d4e,	// (0x0006c4b1) list_tport_double_graphic_pane_g1_ParamLimits

0x7d4e,	// (0x0006c4b1) list_tport_double_graphic_pane_g1

0x7d5b,	// (0x0006c4be) list_tport_double_graphic_pane_t1_ParamLimits

0x7d5b,	// (0x0006c4be) list_tport_double_graphic_pane_t1

0x7d70,	// (0x0006c4d3) list_tport_double_graphic_pane_t2_ParamLimits

0x7d70,	// (0x0006c4d3) list_tport_double_graphic_pane_t2

0x0001,

0xfc3a,	// (0x0007439d) list_tport_double_graphic_pane_t_ParamLimits

0xfc3a,	// (0x0007439d) list_tport_double_graphic_pane_t

0xa396,	// (0x0006eaf9) main_cale_note_pane

0x4f00,	// (0x00069663) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4f00,	// (0x00069663) cell_vitu2_function_top_wide_pane_cp01

0x70fe,	// (0x0006b861) wait_bar_pane_cp05_ParamLimits

0xaaf0,	// (0x0006f253) listscroll_cmail_pane

0x7d8a,	// (0x0006c4ed) list_cmail_pane

0x7da1,	// (0x0006c504) list_cmail_body_pane

0x7db8,	// (0x0006c51b) list_single_cmail_header_caption_pane

0x7dd2,	// (0x0006c535) list_single_cmail_header_detail_pane_ParamLimits

0x7dd2,	// (0x0006c535) list_single_cmail_header_detail_pane

0x7e05,	// (0x0006c568) list_single_cmail_header_caption_pane_t1

0x7e1c,	// (0x0006c57f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7e1c,	// (0x0006c57f) list_single_cmail_header_detail_pane_g1

0x7e34,	// (0x0006c597) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7e34,	// (0x0006c597) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc3f,	// (0x000743a2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc3f,	// (0x000743a2) list_single_cmail_header_detail_pane_g

0x7e4d,	// (0x0006c5b0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7e4d,	// (0x0006c5b0) list_single_cmail_header_detail_pane_t1

0x7ead,	// (0x0006c610) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7ead,	// (0x0006c610) list_single_cmail_header_editor_pane_bg

0x6f68,	// (0x0006b6cb) list_cmail_body_pane_g1

0x7ec0,	// (0x0006c623) list_cmail_body_pane_t1

0xeabd,	// (0x00073220) list_single_cmail_header_editor_pane_bg_g1

0xc3f5,	// (0x00070b58) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeacd,	// (0x00073230) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeac5,	// (0x00073228) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed17,	// (0x0007347a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeaed,	// (0x00073250) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeadd,	// (0x00073240) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeae5,	// (0x00073248) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc3d5,	// (0x00070b38) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7ece,	// (0x0006c631) calenote_gesture_pane_ParamLimits

0x7ece,	// (0x0006c631) calenote_gesture_pane

0x7eee,	// (0x0006c651) calenote_window_pane_ParamLimits

0x7eee,	// (0x0006c651) calenote_window_pane

0x7f0a,	// (0x0006c66d) popup_note_window_cp01

0x7f13,	// (0x0006c676) calenote_swipe_1_pane_ParamLimits

0x7f13,	// (0x0006c676) calenote_swipe_1_pane

0x7681,	// (0x0006bde4) calenote_swipe_2_pane_ParamLimits

0x7681,	// (0x0006bde4) calenote_swipe_2_pane

0x769b,	// (0x0006bdfe) calenote_swipe_1_pane_g1_ParamLimits

0x769b,	// (0x0006bdfe) calenote_swipe_1_pane_g1

0x7f31,	// (0x0006c694) calenote_swipe_1_pane_g2_ParamLimits

0x7f31,	// (0x0006c694) calenote_swipe_1_pane_g2

0x0001,

0xfc4b,	// (0x000743ae) calenote_swipe_1_pane_g_ParamLimits

0xfc4b,	// (0x000743ae) calenote_swipe_1_pane_g

0x7f3d,	// (0x0006c6a0) calenote_swipe_1_pane_t1_ParamLimits

0x7f3d,	// (0x0006c6a0) calenote_swipe_1_pane_t1

0x769b,	// (0x0006bdfe) calenote_swipe_2_pane_g1_ParamLimits

0x769b,	// (0x0006bdfe) calenote_swipe_2_pane_g1

0x7f5c,	// (0x0006c6bf) calenote_swipe_2_pane_g2_ParamLimits

0x7f5c,	// (0x0006c6bf) calenote_swipe_2_pane_g2

0x0001,

0xfc50,	// (0x000743b3) calenote_swipe_2_pane_g_ParamLimits

0xfc50,	// (0x000743b3) calenote_swipe_2_pane_g

0x7f68,	// (0x0006c6cb) calenote_swipe_2_pane_t1_ParamLimits

0x7f68,	// (0x0006c6cb) calenote_swipe_2_pane_t1

0xa396,	// (0x0006eaf9) main_mup_navstr_pane

0x3e06,	// (0x00068569) main_mup3_pane_t7_ParamLimits

0x3e06,	// (0x00068569) main_mup3_pane_t7

0xaeff,	// (0x0006f662) main_mp4_pane_g6_ParamLimits

0xaeff,	// (0x0006f662) main_mp4_pane_g6

0xb12d,	// (0x0006f890) main_image3_pane_t4_ParamLimits

0xb12d,	// (0x0006f890) main_image3_pane_t4

0x7f8f,	// (0x0006c6f2) popup_navstr_preview_pane_ParamLimits

0x7f8f,	// (0x0006c6f2) popup_navstr_preview_pane

0x7f9f,	// (0x0006c702) scroll_navstr_pane_ParamLimits

0x7f9f,	// (0x0006c702) scroll_navstr_pane

0xa396,	// (0x0006eaf9) bg_popup_preview_window_pane_cp04

0x7fb3,	// (0x0006c716) popup_navstr_preview_pane_t1

0x7fc1,	// (0x0006c724) scroll_navstr_pane_g1_ParamLimits

0x7fc1,	// (0x0006c724) scroll_navstr_pane_g1

0x7fd5,	// (0x0006c738) scroll_navstr_pane_t1_ParamLimits

0x7fd5,	// (0x0006c738) scroll_navstr_pane_t1

0x7f28,	// (0x0006c68b) bg_button_pane_cp014

0x7f28,	// (0x0006c68b) bg_button_pane_cp030

0x74c7,	// (0x0006bc2a) list_double_fisheye_pane_g4_ParamLimits

0x74c7,	// (0x0006bc2a) list_double_fisheye_pane_g4

0x74d3,	// (0x0006bc36) list_double_fisheye_pane_g5_ParamLimits

0x74d3,	// (0x0006bc36) list_double_fisheye_pane_g5

0x2024,	// (0x00066787) sp_fs_scroll_pane_cp03

0x7810,	// (0x0006bf73) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x781c,	// (0x0006bf7f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbf9,	// (0x0007435c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x785c,	// (0x0006bfbf) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x7d99,	// (0x0006c4fc) sp_fs_scroll_pane_cp02

0xc125,	// (0x00070888) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc125,	// (0x00070888) popup_sp_fs_calendar_preview_list_single_pane

0xa396,	// (0x0006eaf9) main_cam6_pano_pane

0xa413,	// (0x0006eb76) main_mup3_pane_ParamLimits

0xa396,	// (0x0006eaf9) main_phacti_pane

0x6fcf,	// (0x0006b732) bg_button_pane_cp11

0x6fe9,	// (0x0006b74c) main_mobtv_info_pane_g2_ParamLimits

0x6fe9,	// (0x0006b74c) main_mobtv_info_pane_g2

0x0001,

0xfb5e,	// (0x000742c1) main_mobtv_info_pane_g_ParamLimits

0xfb5e,	// (0x000742c1) main_mobtv_info_pane_g

0xbfd7,	// (0x0007073a) sc_clock_pane_t5_ParamLimits

0xbfd7,	// (0x0007073a) sc_clock_pane_t5

0xcdca,	// (0x0007152d) main_radioblah_pane_g1_ParamLimits

0xcdd8,	// (0x0007153b) main_radioblah_pane_t3_ParamLimits

0xcdd8,	// (0x0007153b) main_radioblah_pane_t3

0xcdd8,	// (0x0007153b) main_radioblah_pane_t4_ParamLimits

0xcdd8,	// (0x0007153b) main_radioblah_pane_t4

0xaaf0,	// (0x0006f253) main_radioblah_text_pane_ParamLimits

0xaaf0,	// (0x0006f253) main_radioblah_text_pane

0x73fd,	// (0x0006bb60) main_radioblah_info_pane_g1_ParamLimits

0x7441,	// (0x0006bba4) main_radioblah_info_pane_t4_ParamLimits

0x7441,	// (0x0006bba4) main_radioblah_info_pane_t4

0xaaf0,	// (0x0006f253) main_sp_fs_calendar_pane

0x7fec,	// (0x0006c74f) main_phacti_pane_g1

0x7ffd,	// (0x0006c760) phacti_note_pane_ParamLimits

0x7ffd,	// (0x0006c760) phacti_note_pane

0x8011,	// (0x0006c774) phacti_term_pane_ParamLimits

0x8011,	// (0x0006c774) phacti_term_pane

0x8026,	// (0x0006c789) phacti_note_pane_t1_ParamLimits

0x8026,	// (0x0006c789) phacti_note_pane_t1

0x803d,	// (0x0006c7a0) phacti_term_pane_g1

0x8045,	// (0x0006c7a8) phacti_term_pane_t1_ParamLimits

0x8045,	// (0x0006c7a8) phacti_term_pane_t1

0x806f,	// (0x0006c7d2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb36f,	// (0x0006fad2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5a,	// (0x000743bd) popup_sp_fs_calendar_preview_list_single_pane_g

0xb377,	// (0x0006fada) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb377,	// (0x0006fada) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb38d,	// (0x0006faf0) aid_popup_sp_fs_bg_corner_pane

0xbfcd,	// (0x00070730) popup_sp_fs_calendar_preview_bg_pane_g1

0xa396,	// (0x0006eaf9) popup_sp_fs_calendar_preview_bg_pane

0xb395,	// (0x0006faf8) popup_sp_fs_calendar_preview_list_pane

0xcba3,	// (0x00071306) bg_main_sp_fs_cale_pane_ParamLimits

0xcba3,	// (0x00071306) bg_main_sp_fs_cale_pane

0x80e1,	// (0x0006c844) listscroll_cale_mrui_pane_ParamLimits

0x80e1,	// (0x0006c844) listscroll_cale_mrui_pane

0x80f6,	// (0x0006c859) listscroll_sp_fs_schedule_track_pane

0x80ff,	// (0x0006c862) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x80ff,	// (0x0006c862) main_sp_fs_ctrlbar_pane_cp01

0xb39d,	// (0x0006fb00) main_sp_fs_ribbon_pane

0x8112,	// (0x0006c875) popup_sp_fs_cale_preview_window

0x8124,	// (0x0006c887) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8124,	// (0x0006c887) list_single_sp_fs_schedule_track_pane

0xaaf0,	// (0x0006f253) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xaaf0,	// (0x0006f253) bg_sp_fs_highlight_list_pane_cp03

0x8137,	// (0x0006c89a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8137,	// (0x0006c89a) list_single_sp_fs_schedule_track_pane_g1

0x8143,	// (0x0006c8a6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8143,	// (0x0006c8a6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc5f,	// (0x000743c2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc5f,	// (0x000743c2) list_single_sp_fs_schedule_track_pane_g

0x814f,	// (0x0006c8b2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x814f,	// (0x0006c8b2) list_single_sp_fs_schedule_track_pane_t1

0x8171,	// (0x0006c8d4) sp_fs_schedule_track_pane_ParamLimits

0x8171,	// (0x0006c8d4) sp_fs_schedule_track_pane

0xb3a5,	// (0x0006fb08) sp_fs_schedule_track_pane_g1

0xb3ad,	// (0x0006fb10) sp_fs_schedule_track_pane_g2

0xb3b5,	// (0x0006fb18) sp_fs_schedule_track_pane_g3

0xb3bd,	// (0x0006fb20) sp_fs_schedule_track_pane_g4

0xb3c5,	// (0x0006fb28) sp_fs_schedule_track_pane_g5

0x0004,

0xfc64,	// (0x000743c7) sp_fs_schedule_track_pane_g

0xeabd,	// (0x00073220) bg_sp_fs_schedule_viewer_highlight_g1

0xc3f5,	// (0x00070b58) bg_sp_fs_schedule_viewer_highlight_g2

0xeac5,	// (0x00073228) bg_sp_fs_schedule_viewer_highlight_g3

0xeacd,	// (0x00073230) bg_sp_fs_schedule_viewer_highlight_g4

0xed17,	// (0x0007347a) bg_sp_fs_schedule_viewer_highlight_g5

0xeadd,	// (0x00073240) bg_sp_fs_schedule_viewer_highlight_g6

0xeae5,	// (0x00073248) bg_sp_fs_schedule_viewer_highlight_g7

0xeaed,	// (0x00073250) bg_sp_fs_schedule_viewer_highlight_g8

0xc3d5,	// (0x00070b38) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc6f,	// (0x000743d2) bg_sp_fs_schedule_viewer_highlight_g

0xa396,	// (0x0006eaf9) bg_main_sp_fs_ribbon_pane

0x8186,	// (0x0006c8e9) main_sp_fs_ribbon_pane_g1

0xb3cd,	// (0x0006fb30) main_sp_fs_ribbon_pane_t1

0x818f,	// (0x0006c8f2) main_sp_fs_ribbon_pane_t2

0xb3dc,	// (0x0006fb3f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc82,	// (0x000743e5) main_sp_fs_ribbon_pane_t

0xb3eb,	// (0x0006fb4e) main_sp_fs_ribbon_scheduler_pane

0xb3f3,	// (0x0006fb56) bg_main_sp_fs_ribbon_pane_g1

0xb3fc,	// (0x0006fb5f) bg_main_sp_fs_ribbon_pane_g2

0xb405,	// (0x0006fb68) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc89,	// (0x000743ec) bg_main_sp_fs_ribbon_pane_g

0xb40d,	// (0x0006fb70) main_sp_fs_ribbon_scheduler_pane_g1

0xb416,	// (0x0006fb79) main_sp_fs_ribbon_scheduler_pane_g2

0xb41f,	// (0x0006fb82) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc90,	// (0x000743f3) main_sp_fs_ribbon_scheduler_pane_g

0xb428,	// (0x0006fb8b) list_cale_mrui_pane

0x819e,	// (0x0006c901) sp_fs_scroll_pane_cp07_ParamLimits

0x819e,	// (0x0006c901) sp_fs_scroll_pane_cp07

0x81ba,	// (0x0006c91d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x81ba,	// (0x0006c91d) bg_sp_fs_schedule_viewer_highlight

0xb435,	// (0x0006fb98) list_single_sp_fs_schedule_track_pane_cp01

0xb43d,	// (0x0006fba0) list_sp_fs_schedule_track_pane

0xb445,	// (0x0006fba8) sp_fs_scroll_pane_cp06_ParamLimits

0xb445,	// (0x0006fba8) sp_fs_scroll_pane_cp06

0xbfcd,	// (0x00070730) bgmain_sp_fs_calendar_pane_g1

0x81cc,	// (0x0006c92f) list_single_cale_mrui_pane_ParamLimits

0x81cc,	// (0x0006c92f) list_single_cale_mrui_pane

0x81ef,	// (0x0006c952) list_single_cale_mrui_row_pane_ParamLimits

0x81ef,	// (0x0006c952) list_single_cale_mrui_row_pane

0x81fc,	// (0x0006c95f) list_single_cale_mrui_row_pane_g1_ParamLimits

0x81fc,	// (0x0006c95f) list_single_cale_mrui_row_pane_g1

0x8234,	// (0x0006c997) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8234,	// (0x0006c997) list_single_cale_mrui_row_pane_t1

0x8246,	// (0x0006c9a9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8246,	// (0x0006c9a9) list_single_cale_mrui_row_pane_t2

0x82ac,	// (0x0006ca0f) list_single_cale_mrui_row_pane_t3_ParamLimits

0x82ac,	// (0x0006ca0f) list_single_cale_mrui_row_pane_t3

0x82db,	// (0x0006ca3e) list_single_cale_mrui_row_pane_t4_ParamLimits

0x82db,	// (0x0006ca3e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc9e,	// (0x00074401) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc9e,	// (0x00074401) list_single_cale_mrui_row_pane_t

0x830a,	// (0x0006ca6d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x830a,	// (0x0006ca6d) list_single_cmail_header_editor_pane_bg_cp01

0x8336,	// (0x0006ca99) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8336,	// (0x0006ca99) list_single_cmail_header_editor_pane_bg_cp02

0xb464,	// (0x0006fbc7) main_radioblah_text_pane_t1_ParamLimits

0xb464,	// (0x0006fbc7) main_radioblah_text_pane_t1

0xb47e,	// (0x0006fbe1) cam6_indi_pane_cp01

0xb486,	// (0x0006fbe9) cam6_mode_pane_cp01

0xb48e,	// (0x0006fbf1) cam6_pano_pane

0xb497,	// (0x0006fbfa) cam6_zoom_pane_cp01

0xb4a1,	// (0x0006fc04) cam6_pano_image_pane

0xb4aa,	// (0x0006fc0d) cam6_pano_pane_g1

0x6f68,	// (0x0006b6cb) cam6_pano_pane_g2

0xb4b3,	// (0x0006fc16) cam6_pano_pane_g3

0xb4bc,	// (0x0006fc1f) cam6_pano_pane_g4

0xe7fd,	// (0x00072f60) cam6_pano_pane_g5

0xb4c5,	// (0x0006fc28) cam6_pano_pane_g6

0xb4cd,	// (0x0006fc30) cam6_pano_pane_g7

0xb4d5,	// (0x0006fc38) cam6_pano_pane_g8

0xb4de,	// (0x0006fc41) cam6_pano_pane_g9

0x0008,

0xfca7,	// (0x0007440a) cam6_pano_pane_g

0xa396,	// (0x0006eaf9) main_browser_tag_pane

0x7f87,	// (0x0006c6ea) grid_navstr_albumart_pane

0xb4e9,	// (0x0006fc4c) cell_navstr_albumart_pane_ParamLimits

0xb4e9,	// (0x0006fc4c) cell_navstr_albumart_pane

0xb505,	// (0x0006fc68) cell_navstr_albumart_pane_g1

0xdd25,	// (0x00072488) cell_navstr_albumart_pane_g2

0xdd35,	// (0x00072498) cell_navstr_albumart_pane_g3

0xdd2d,	// (0x00072490) cell_navstr_albumart_pane_g4

0x0003,

0xfcba,	// (0x0007441d) cell_navstr_albumart_pane_g

0x8354,	// (0x0006cab7) bt_list_pane_ParamLimits

0x8354,	// (0x0006cab7) bt_list_pane

0x836a,	// (0x0006cacd) bt_list_pane_t1

0x8379,	// (0x0006cadc) bt_list_pane_t2

0x0001,

0xfcc3,	// (0x00074426) bt_list_pane_t

0xa396,	// (0x0006eaf9) main_cale_prevew_pane

0x8388,	// (0x0006caeb) popup_cale_preview_window_ParamLimits

0x8388,	// (0x0006caeb) popup_cale_preview_window

0xaaf0,	// (0x0006f253) bg_popup_preview_window_pane_cp05_ParamLimits

0xaaf0,	// (0x0006f253) bg_popup_preview_window_pane_cp05

0xb50d,	// (0x0006fc70) list_cale_preview_pane_ParamLimits

0xb50d,	// (0x0006fc70) list_cale_preview_pane

0x83a5,	// (0x0006cb08) list_double_cale_preview_pane_ParamLimits

0x83a5,	// (0x0006cb08) list_double_cale_preview_pane

0x83b9,	// (0x0006cb1c) list_single_cale_preview_pane_ParamLimits

0x83b9,	// (0x0006cb1c) list_single_cale_preview_pane

0x83d1,	// (0x0006cb34) list_single_cale_preview_pane_g1

0x83d9,	// (0x0006cb3c) list_single_cale_preview_pane_t1_ParamLimits

0x83d9,	// (0x0006cb3c) list_single_cale_preview_pane_t1

0x83ee,	// (0x0006cb51) list_double_cale_preview_pane_g1

0x83f6,	// (0x0006cb59) list_double_cale_preview_pane_t1_ParamLimits

0x83f6,	// (0x0006cb59) list_double_cale_preview_pane_t1

0x840b,	// (0x0006cb6e) list_double_cale_preview_pane_t2_ParamLimits

0x840b,	// (0x0006cb6e) list_double_cale_preview_pane_t2

0x0001,

0xfcc8,	// (0x0007442b) list_double_cale_preview_pane_t_ParamLimits

0xfcc8,	// (0x0007442b) list_double_cale_preview_pane_t

0xa396,	// (0x0006eaf9) main_ezdial_pane

0xaaf0,	// (0x0006f253) main_sp_fs_email_pane_ParamLimits

0x7775,	// (0x0006bed8) cmail_ddmenu_btn01_pane_ParamLimits

0x7775,	// (0x0006bed8) cmail_ddmenu_btn01_pane

0x7788,	// (0x0006beeb) cmail_ddmenu_btn02_pane_ParamLimits

0x7788,	// (0x0006beeb) cmail_ddmenu_btn02_pane

0x77e5,	// (0x0006bf48) cmail_ddmenu_btn03_pane_ParamLimits

0x77e5,	// (0x0006bf48) cmail_ddmenu_btn03_pane

0x789b,	// (0x0006bffe) main_sp_fs_ctrlbar_pane_ParamLimits

0x78da,	// (0x0006c03d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7da1,	// (0x0006c504) list_cmail_body_pane_ParamLimits

0x7e13,	// (0x0006c576) bg_button_pane_cp12

0x7e40,	// (0x0006c5a3) list_single_cmail_header_detail_pane_g3_ParamLimits

0x7e40,	// (0x0006c5a3) list_single_cmail_header_detail_pane_g3

0x7e89,	// (0x0006c5ec) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7e89,	// (0x0006c5ec) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc46,	// (0x000743a9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc46,	// (0x000743a9) list_single_cmail_header_detail_pane_t

0x805a,	// (0x0006c7bd) phacti_term_pane_t2_ParamLimits

0x805a,	// (0x0006c7bd) phacti_term_pane_t2

0x0001,

0xfc55,	// (0x000743b8) phacti_term_pane_t_ParamLimits

0xfc55,	// (0x000743b8) phacti_term_pane_t

0xb519,	// (0x0006fc7c) aid_size_list_single_double

0x8423,	// (0x0006cb86) popup_ezdial_listscroll_window

0xb525,	// (0x0006fc88) popup_number_entry_window_cp01

0xc1c9,	// (0x0007092c) bg_popup_call_pane_cp09

0xb532,	// (0x0006fc95) ezdial_list_pane

0xb53a,	// (0x0006fc9d) scroll_pane_cp23

0xcba3,	// (0x00071306) bg_button_pane_cp028_ParamLimits

0xcba3,	// (0x00071306) bg_button_pane_cp028

0x843f,	// (0x0006cba2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x843f,	// (0x0006cba2) cmail_ddmenu_btn01_pane_g1

0x844e,	// (0x0006cbb1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x844e,	// (0x0006cbb1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfccd,	// (0x00074430) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfccd,	// (0x00074430) cmail_ddmenu_btn01_pane_g

0xb542,	// (0x0006fca5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb542,	// (0x0006fca5) cmail_ddmenu_btn01_pane_t1

0xcba3,	// (0x00071306) bg_button_pane_cp029_ParamLimits

0xcba3,	// (0x00071306) bg_button_pane_cp029

0x8464,	// (0x0006cbc7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8464,	// (0x0006cbc7) cmail_ddmenu_btn02_pane_g1

0x847f,	// (0x0006cbe2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x847f,	// (0x0006cbe2) cmail_ddmenu_btn02_pane_t1

0xaaf0,	// (0x0006f253) bg_button_pane_cp031_ParamLimits

0xaaf0,	// (0x0006f253) bg_button_pane_cp031

0x8464,	// (0x0006cbc7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8464,	// (0x0006cbc7) cmail_ddmenu_btn03_pane_g1

0x847f,	// (0x0006cbe2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x847f,	// (0x0006cbe2) cmail_ddmenu_btn03_pane_t1

0xbfd7,	// (0x0007073a) cell_dialer2_keypad_pane_t1_ParamLimits

0xe82b,	// (0x00072f8e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xe82b,	// (0x00072f8e) cell_dialer2_keypad_pane_t1_copy1

0x6b6c,	// (0x0006b2cf) ncimui_group_button_pane

0xaaf0,	// (0x0006f253) main_sp_fs_calendar_pane_ParamLimits

0x7db8,	// (0x0006c51b) list_single_cmail_header_caption_pane_ParamLimits

0x8095,	// (0x0006c7f8) aid_recal_txt_sm_pane

0xa396,	// (0x0006eaf9) mian_recal_day_pane

0x8112,	// (0x0006c875) popup_sp_fs_cale_preview_window_ParamLimits

0xb558,	// (0x0006fcbb) list_recal_day_pane

0x84c2,	// (0x0006cc25) list_single_recal_day_pane_ParamLimits

0x84c2,	// (0x0006cc25) list_single_recal_day_pane

0xb57f,	// (0x0006fce2) list_single_recal_day_pane_g1_ParamLimits

0xb57f,	// (0x0006fce2) list_single_recal_day_pane_g1

0x84d4,	// (0x0006cc37) list_single_recal_day_pane_g2_ParamLimits

0x84d4,	// (0x0006cc37) list_single_recal_day_pane_g2

0x84e0,	// (0x0006cc43) list_single_recal_day_pane_g3_ParamLimits

0x84e0,	// (0x0006cc43) list_single_recal_day_pane_g3

0x84ec,	// (0x0006cc4f) list_single_recal_day_pane_g4_ParamLimits

0x84ec,	// (0x0006cc4f) list_single_recal_day_pane_g4

0x84fa,	// (0x0006cc5d) list_single_recal_day_pane_g5_ParamLimits

0x84fa,	// (0x0006cc5d) list_single_recal_day_pane_g5

0x8510,	// (0x0006cc73) list_single_recal_day_pane_g6_ParamLimits

0x8510,	// (0x0006cc73) list_single_recal_day_pane_g6

0x0004,

0xfcdc,	// (0x0007443f) list_single_recal_day_pane_g_ParamLimits

0xfcdc,	// (0x0007443f) list_single_recal_day_pane_g

0x8524,	// (0x0006cc87) list_single_recal_day_pane_t1

0x8536,	// (0x0006cc99) list_single_recal_day_pane_t2

0x0001,

0xfce7,	// (0x0007444a) list_single_recal_day_pane_t

0x8548,	// (0x0006ccab) ncimui_query_button_pane_ParamLimits

0x8548,	// (0x0006ccab) ncimui_query_button_pane

0x8558,	// (0x0006ccbb) ncimui_query_button_pane_t1_ParamLimits

0x8558,	// (0x0006ccbb) ncimui_query_button_pane_t1

0xb58b,	// (0x0006fcee) ncimui_query_button_pane_t2_ParamLimits

0xb58b,	// (0x0006fcee) ncimui_query_button_pane_t2

0x0001,

0xfcec,	// (0x0007444f) ncimui_query_button_pane_t_ParamLimits

0xfcec,	// (0x0007444f) ncimui_query_button_pane_t

0x856b,	// (0x0006ccce) query_button_pane_ParamLimits

0x856b,	// (0x0006ccce) query_button_pane

0xa396,	// (0x0006eaf9) bg_button_pane_cp0028

0xb59e,	// (0x0006fd01) query_button_pane_t1

0x305e,	// (0x000677c1) main_tport_pane_ParamLimits

0x7c03,	// (0x0006c366) bg_popup_window_pane_cp01_ParamLimits

0x7c03,	// (0x0006c366) bg_popup_window_pane_cp01

0x7c1c,	// (0x0006c37f) heading_pane_cp08_ParamLimits

0x7c1c,	// (0x0006c37f) heading_pane_cp08

0x7c32,	// (0x0006c395) heading_pane_cp07_ParamLimits

0x7c32,	// (0x0006c395) heading_pane_cp07

0x7d1b,	// (0x0006c47e) cell_tport_appsw_pane_g2

0x0002,

0xfc33,	// (0x00074396) cell_tport_appsw_pane_g

0xcdec,	// (0x0007154f) input_candi_list_open_g1

0xc5cf,	// (0x00070d32) list_cale_time_pane_g6_ParamLimits

0xc5cf,	// (0x00070d32) list_cale_time_pane_g6

0x3725,	// (0x00067e88) aid_size_touch_calib_1_ParamLimits

0x3725,	// (0x00067e88) aid_size_touch_calib_1

0x3737,	// (0x00067e9a) aid_size_touch_calib_2_ParamLimits

0x3737,	// (0x00067e9a) aid_size_touch_calib_2

0x374f,	// (0x00067eb2) aid_size_touch_calib_3_ParamLimits

0x374f,	// (0x00067eb2) aid_size_touch_calib_3

0x376d,	// (0x00067ed0) aid_size_touch_calib_4_ParamLimits

0x376d,	// (0x00067ed0) aid_size_touch_calib_4

0x3785,	// (0x00067ee8) main_touch_calib_button_group_pane_ParamLimits

0x3785,	// (0x00067ee8) main_touch_calib_button_group_pane

0x379d,	// (0x00067f00) main_touch_calib_pane_g1_ParamLimits

0x37af,	// (0x00067f12) main_touch_calib_pane_g2_ParamLimits

0x37c1,	// (0x00067f24) main_touch_calib_pane_g3_ParamLimits

0x37d3,	// (0x00067f36) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x00073de2) main_touch_calib_pane_g_ParamLimits

0x37e5,	// (0x00067f48) main_touch_calib_pane_t1_ParamLimits

0x37ff,	// (0x00067f62) main_touch_calib_pane_t2_ParamLimits

0x3819,	// (0x00067f7c) main_touch_calib_pane_t3_ParamLimits

0x382d,	// (0x00067f90) main_touch_calib_pane_t4_ParamLimits

0x3843,	// (0x00067fa6) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x00073deb) main_touch_calib_pane_t_ParamLimits

0xe5b8,	// (0x00072d1b) list_single_fp_cale_pane_g3_ParamLimits

0xe5b8,	// (0x00072d1b) list_single_fp_cale_pane_g3

0xa413,	// (0x0006eb76) bg_button_pane_cp012_ParamLimits

0xa413,	// (0x0006eb76) bg_vkb2_func_pane_cp03_ParamLimits

0x5751,	// (0x00069eb4) cell_vitu2_function_top_pane_g1_ParamLimits

0xa413,	// (0x0006eb76) bg_vkb2_func_pane_cp04_ParamLimits

0x6af7,	// (0x0006b25a) main_ncimui_button_group_pane_ParamLimits

0x6af7,	// (0x0006b25a) main_ncimui_button_group_pane

0x6b57,	// (0x0006b2ba) main_ncimui_pane_t3_ParamLimits

0x6b57,	// (0x0006b2ba) main_ncimui_pane_t3

0x7ff4,	// (0x0006c757) phacti_button_group_pane

0xb519,	// (0x0006fc7c) aid_size_list_single_double_ParamLimits

0x8423,	// (0x0006cb86) popup_ezdial_listscroll_window_ParamLimits

0xb525,	// (0x0006fc88) popup_number_entry_window_cp01_ParamLimits

0x857e,	// (0x0006cce1) phacti_button_pane_ParamLimits

0x857e,	// (0x0006cce1) phacti_button_pane

0xa396,	// (0x0006eaf9) bg_button_pane_cp14

0xb5ac,	// (0x0006fd0f) phacti_button_pane_t1

0x858f,	// (0x0006ccf2) main_touch_calib_button_pane_ParamLimits

0x858f,	// (0x0006ccf2) main_touch_calib_button_pane

0xc02b,	// (0x0007078e) bg_button_pane_cp18_ParamLimits

0xc02b,	// (0x0007078e) bg_button_pane_cp18

0xb5ba,	// (0x0006fd1d) main_touch_calib_button_pane_t1_ParamLimits

0xb5ba,	// (0x0006fd1d) main_touch_calib_button_pane_t1

0xb5d0,	// (0x0006fd33) main_touch_calib_button_pane_t2_ParamLimits

0xb5d0,	// (0x0006fd33) main_touch_calib_button_pane_t2

0x0001,

0xfcf1,	// (0x00074454) main_touch_calib_button_pane_t_ParamLimits

0xfcf1,	// (0x00074454) main_touch_calib_button_pane_t

0xa396,	// (0x0006eaf9) cell_ncimui_button_pane

0xa396,	// (0x0006eaf9) bg_button_pane_cp032

0xb5ee,	// (0x0006fd51) cell_ncimui_button_pane_t1

0xb10b,	// (0x0006f86e) image3_infobar_pane_ParamLimits

0xb10b,	// (0x0006f86e) image3_infobar_pane

0x71f5,	// (0x0006b958) fs_bigclock_status_pane_ParamLimits

0x71f5,	// (0x0006b958) fs_bigclock_status_pane

0x7202,	// (0x0006b965) main_fs_bigclock_clock_pane_ParamLimits

0x7202,	// (0x0006b965) main_fs_bigclock_clock_pane

0x7234,	// (0x0006b997) main_fs_bigclock_indi_pane_ParamLimits

0x7234,	// (0x0006b997) main_fs_bigclock_indi_pane

0x7274,	// (0x0006b9d7) main_fs_bigclock_swipe_pane_ParamLimits

0x7274,	// (0x0006b9d7) main_fs_bigclock_swipe_pane

0xa396,	// (0x0006eaf9) main_fs_clock_dumped_data

0x72c0,	// (0x0006ba23) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x72c0,	// (0x0006ba23) list_single_fs_bigclock_indicator_pane_g1

0x72d9,	// (0x0006ba3c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x72d9,	// (0x0006ba3c) list_single_fs_bigclock_indicator_pane_g2

0x72f3,	// (0x0006ba56) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x72f3,	// (0x0006ba56) list_single_fs_bigclock_indicator_pane_g3

0x730d,	// (0x0006ba70) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x730d,	// (0x0006ba70) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb92,	// (0x000742f5) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb92,	// (0x000742f5) list_single_fs_bigclock_indicator_pane_g

0x733c,	// (0x0006ba9f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x733c,	// (0x0006ba9f) list_single_fs_bigclock_indicator_pane_t1

0x7364,	// (0x0006bac7) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7364,	// (0x0006bac7) list_single_fs_bigclock_indicator_pane_t2

0x738c,	// (0x0006baef) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x738c,	// (0x0006baef) list_single_fs_bigclock_indicator_pane_t3

0x73b4,	// (0x0006bb17) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x73b4,	// (0x0006bb17) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9d,	// (0x00074300) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9d,	// (0x00074300) list_single_fs_bigclock_indicator_pane_t

0xb5fc,	// (0x0006fd5f) image3_infobar_fav_pane_ParamLimits

0xb5fc,	// (0x0006fd5f) image3_infobar_fav_pane

0xb60c,	// (0x0006fd6f) image3_infobar_loc_pane_ParamLimits

0xb60c,	// (0x0006fd6f) image3_infobar_loc_pane

0xb622,	// (0x0006fd85) image3_infobar_time_pane_ParamLimits

0xb622,	// (0x0006fd85) image3_infobar_time_pane

0xbfcd,	// (0x00070730) image3_infobar_time_pane_g1

0xb632,	// (0x0006fd95) image3_infobar_time_pane_t1

0xbfcd,	// (0x00070730) image3_infobar_loc_pane_g1

0xb640,	// (0x0006fda3) image3_infobar_loc_pane_g2

0x0001,

0xfcf6,	// (0x00074459) image3_infobar_loc_pane_g

0xb648,	// (0x0006fdab) image3_infobar_loc_pane_t1

0xbfcd,	// (0x00070730) image3_infobar_fav_pane_g1

0xb656,	// (0x0006fdb9) image3_infobar_fav_pane_g2

0x0001,

0xfcfb,	// (0x0007445e) image3_infobar_fav_pane_g

0xb65e,	// (0x0006fdc1) fs_bigclock_status_battery_pane

0xb667,	// (0x0006fdca) fs_bigclock_status_signal_pane

0xb670,	// (0x0006fdd3) fs_bigclock_status_title_pane

0xb679,	// (0x0006fddc) fs_bigclock_status_signal_pane_g1

0xb682,	// (0x0006fde5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd00,	// (0x00074463) fs_bigclock_status_signal_pane_g

0xb68a,	// (0x0006fded) fs_bigclock_status_battery_pane_g1

0xb693,	// (0x0006fdf6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd05,	// (0x00074468) fs_bigclock_status_battery_pane_g

0xb69b,	// (0x0006fdfe) fs_bigclock_status_title_pane_t1

0x85a4,	// (0x0006cd07) main_fs_bigclock_clock_pane_g1

0x85a4,	// (0x0006cd07) main_fs_bigclock_clock_pane_g2

0x85b7,	// (0x0006cd1a) main_fs_bigclock_clock_pane_g3

0x85b7,	// (0x0006cd1a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0a,	// (0x0007446d) main_fs_bigclock_clock_pane_g

0x85ce,	// (0x0006cd31) main_fs_bigclock_clock_pane_t1

0x85e4,	// (0x0006cd47) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd13,	// (0x00074476) main_fs_bigclock_clock_pane_t

0xb6a9,	// (0x0006fe0c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb6a9,	// (0x0006fe0c) list_single_fs_bigclock_indicator_pane

0xb6ba,	// (0x0006fe1d) list_single_fs_bigclock_pane_ParamLimits

0xb6ba,	// (0x0006fe1d) list_single_fs_bigclock_pane

0xb6e0,	// (0x0006fe43) main_fs_bigclock_indicator_pane_t1

0xb6ef,	// (0x0006fe52) list_single_fs_bigclock_pane_g1

0xb6f7,	// (0x0006fe5a) list_single_fs_bigclock_pane_t1

0xbfcd,	// (0x00070730) main_fs_bigclock_swipe_pane_g1

0xb73a,	// (0x0006fe9d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd24,	// (0x00074487) main_fs_bigclock_swipe_pane_g

0xb742,	// (0x0006fea5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb742,	// (0x0006fea5) main_fs_bigclock_swipe_pane_t1

0x2030,	// (0x00066793) call_type_pane_ParamLimits

0xa396,	// (0x0006eaf9) main_btmg_pane

0x8228,	// (0x0006c98b) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8228,	// (0x0006c98b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc97,	// (0x000743fa) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc97,	// (0x000743fa) list_single_cale_mrui_row_pane_g

0x84b0,	// (0x0006cc13) list_recal_vselct_arw_lo_pane

0xb577,	// (0x0006fcda) list_recal_vselct_arw_up_pane

0x84b8,	// (0x0006cc1b) list_recal_vselct_pane

0x8646,	// (0x0006cda9) btmg_button_pane

0x8650,	// (0x0006cdb3) main_btmg_pane_g1

0xa396,	// (0x0006eaf9) bg_button_pane_cp044

0xb75f,	// (0x0006fec2) btmg_button_pane_t1

0xde77,	// (0x000725da) aid_listscroll_gen

0xaaf0,	// (0x0006f253) main_cntbar_detail_pane

0x7d82,	// (0x0006c4e5) list_cmail_folder_pane

0x2024,	// (0x00066787) sp_fs_scroll_pane_cp03_ParamLimits

0x865a,	// (0x0006cdbd) list_single_fs_dyc_pane_cp01_ParamLimits

0x865a,	// (0x0006cdbd) list_single_fs_dyc_pane_cp01

0xb76d,	// (0x0006fed0) aid_size_cmail_indent

0x8675,	// (0x0006cdd8) list_single_dyc_row_pane_cp01

0x86b2,	// (0x0006ce15) cntbar_detail_list_pane_ParamLimits

0x86b2,	// (0x0006ce15) cntbar_detail_list_pane

0x8704,	// (0x0006ce67) main_cntbar_detail_cont_pane_ParamLimits

0x8704,	// (0x0006ce67) main_cntbar_detail_cont_pane

0x2024,	// (0x00066787) scroll_pane_cp032_ParamLimits

0x2024,	// (0x00066787) scroll_pane_cp032

0x8718,	// (0x0006ce7b) cntbar_detail_list_event_pane_ParamLimits

0x8718,	// (0x0006ce7b) cntbar_detail_list_event_pane

0x86c4,	// (0x0006ce27) cntbar_detail_list_shct_pane

0xc443,	// (0x00070ba6) aid_list_gen

0xb776,	// (0x0006fed9) aid_scroll

0xb77f,	// (0x0006fee2) aid_size_touch_scroll_bar

0x8728,	// (0x0006ce8b) aid_list_double

0x8731,	// (0x0006ce94) aid_list_single

0x8728,	// (0x0006ce8b) aid_list_single_lg

0x873a,	// (0x0006ce9d) aid_list_z_g_a_sm

0x8742,	// (0x0006cea5) aid_list_z_g_d

0x874a,	// (0x0006cead) aid_txt_z_prm

0x8758,	// (0x0006cebb) aid_txt_z_prm_cp01

0x8766,	// (0x0006cec9) aid_txt_z_sec

0x8774,	// (0x0006ced7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8774,	// (0x0006ced7) main_cntbar_detail_cont_pane_g1

0x8788,	// (0x0006ceeb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8788,	// (0x0006ceeb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd29,	// (0x0007448c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd29,	// (0x0007448c) main_cntbar_detail_cont_pane_g

0xb788,	// (0x0006feeb) main_cntbar_detail_cont_pane_t1

0xb796,	// (0x0006fef9) main_cntbar_detail_cont_pane_t2

0xb7a4,	// (0x0006ff07) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd2e,	// (0x00074491) main_cntbar_detail_cont_pane_t

0x8798,	// (0x0006cefb) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8798,	// (0x0006cefb) cell_cntbar_detail_list_shct_pane

0xb7b2,	// (0x0006ff15) cntbar_detail_list_shct_pane_g1

0xb7bb,	// (0x0006ff1e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd35,	// (0x00074498) cntbar_detail_list_shct_pane_g

0x87aa,	// (0x0006cf0d) cntbar_detail_list_event_pane_g1_ParamLimits

0x87aa,	// (0x0006cf0d) cntbar_detail_list_event_pane_g1

0x87b6,	// (0x0006cf19) cntbar_detail_list_event_pane_g2_ParamLimits

0x87b6,	// (0x0006cf19) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3a,	// (0x0007449d) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3a,	// (0x0007449d) cntbar_detail_list_event_pane_g

0x8824,	// (0x0006cf87) cntbar_detail_list_event_pane_t1_ParamLimits

0x8824,	// (0x0006cf87) cntbar_detail_list_event_pane_t1

0x8839,	// (0x0006cf9c) cntbar_detail_list_event_pane_t2_ParamLimits

0x8839,	// (0x0006cf9c) cntbar_detail_list_event_pane_t2

0x0002,

0xfd47,	// (0x000744aa) cntbar_detail_list_event_pane_t_ParamLimits

0xfd47,	// (0x000744aa) cntbar_detail_list_event_pane_t

0xbfcd,	// (0x00070730) cell_cntbar_detail_list_shct_pane_g1

0x23ca,	// (0x00066b2d) navi_pane_mv_g3

0xaaf0,	// (0x0006f253) main_cntbar_detail_pane_ParamLimits

0xa396,	// (0x0006eaf9) main_notif_wgt_pane

0xae89,	// (0x0006f5ec) aid_tch_main_mp4_pane_g4

0xb101,	// (0x0006f864) popup_slider_window_cp02

0x84a6,	// (0x0006cc09) list_recal_day_event_pane

0x867e,	// (0x0006cde1) cntbar_detail_btn_pane_ParamLimits

0x867e,	// (0x0006cde1) cntbar_detail_btn_pane

0x8697,	// (0x0006cdfa) cntbar_detail_btn_pane_cp01_ParamLimits

0x8697,	// (0x0006cdfa) cntbar_detail_btn_pane_cp01

0x86c4,	// (0x0006ce27) cntbar_detail_list_shct_pane_ParamLimits

0x86d4,	// (0x0006ce37) cntbar_detail_pane_g1_ParamLimits

0x86d4,	// (0x0006ce37) cntbar_detail_pane_g1

0x86e8,	// (0x0006ce4b) cntbar_detail_pane_t1_ParamLimits

0x86e8,	// (0x0006ce4b) cntbar_detail_pane_t1

0x87c2,	// (0x0006cf25) cntbar_detail_list_event_pane_g3_ParamLimits

0x87c2,	// (0x0006cf25) cntbar_detail_list_event_pane_g3

0x87da,	// (0x0006cf3d) cntbar_detail_list_event_pane_g4_ParamLimits

0x87da,	// (0x0006cf3d) cntbar_detail_list_event_pane_g4

0x87f2,	// (0x0006cf55) cntbar_detail_list_event_pane_g5_ParamLimits

0x87f2,	// (0x0006cf55) cntbar_detail_list_event_pane_g5

0x880a,	// (0x0006cf6d) cntbar_detail_list_event_pane_g6_ParamLimits

0x880a,	// (0x0006cf6d) cntbar_detail_list_event_pane_g6

0x884e,	// (0x0006cfb1) cntbar_detail_list_event_pane_t3_ParamLimits

0x884e,	// (0x0006cfb1) cntbar_detail_list_event_pane_t3

0x8860,	// (0x0006cfc3) popup_notif_wgt_window_ParamLimits

0x8860,	// (0x0006cfc3) popup_notif_wgt_window

0x8879,	// (0x0006cfdc) popup_submenu_window_cp01_ParamLimits

0x8879,	// (0x0006cfdc) popup_submenu_window_cp01

0xc1c9,	// (0x0007092c) bg_popup_window_pane_cp10

0xb7c4,	// (0x0006ff27) listscroll_notif_wgt_pane

0xb7d6,	// (0x0006ff39) list_notif_wgt_window

0xb7df,	// (0x0006ff42) scroll_pane_cp033

0x888d,	// (0x0006cff0) list_notif_wgt_row_pane_ParamLimits

0x888d,	// (0x0006cff0) list_notif_wgt_row_pane

0xb7e8,	// (0x0006ff4b) aid_size_list_notif_wgt_del

0xb7f5,	// (0x0006ff58) list_notif_wgt_row_pane_g1

0xb801,	// (0x0006ff64) list_notif_wgt_row_pane_g2

0xb810,	// (0x0006ff73) list_notif_wgt_row_pane_g3

0x0002,

0xfd4e,	// (0x000744b1) list_notif_wgt_row_pane_g

0xb81d,	// (0x0006ff80) list_notif_wgt_row_pane_t1

0xb833,	// (0x0006ff96) list_notif_wgt_row_pane_t2

0xb845,	// (0x0006ffa8) list_notif_wgt_row_pane_t3

0x0002,

0xfd55,	// (0x000744b8) list_notif_wgt_row_pane_t

0xed31,	// (0x00073494) list_recal_day_event_pane_g1

0xb857,	// (0x0006ffba) list_recal_day_event_pane_t1

0xa396,	// (0x0006eaf9) bg_button_pane_cp045

0x889d,	// (0x0006d000) cntbar_detail_btn_pane_t1

0xcba3,	// (0x00071306) main_callh_pane_ParamLimits

0xcba3,	// (0x00071306) main_callh_pane

0xa396,	// (0x0006eaf9) main_coverflow0_pane

0xa396,	// (0x0006eaf9) main_wgtman_pane

0x7295,	// (0x0006b9f8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7295,	// (0x0006b9f8) main_fs_bigclock_unlock_btn_pane

0x7d13,	// (0x0006c476) bg_button_pane_cp16

0x7d23,	// (0x0006c486) cell_tport_appsw_pane_g3

0x88ab,	// (0x0006d00e) cf0_flow_pane_ParamLimits

0x88ab,	// (0x0006d00e) cf0_flow_pane

0xb866,	// (0x0006ffc9) listscroll_cf0_pane

0xb871,	// (0x0006ffd4) main_cf0_pane_g1

0x88c0,	// (0x0006d023) main_cf0_pane_t1_ParamLimits

0x88c0,	// (0x0006d023) main_cf0_pane_t1

0x88d7,	// (0x0006d03a) main_cf0_pane_t2_ParamLimits

0x88d7,	// (0x0006d03a) main_cf0_pane_t2

0x0001,

0xfd61,	// (0x000744c4) main_cf0_pane_t_ParamLimits

0xfd61,	// (0x000744c4) main_cf0_pane_t

0xb883,	// (0x0006ffe6) scroll_pane_cp11

0x88ee,	// (0x0006d051) cf0_flow_pane_g1

0x88fa,	// (0x0006d05d) cf0_flow_pane_g2

0x0001,

0xfd66,	// (0x000744c9) cf0_flow_pane_g

0x8906,	// (0x0006d069) cf0_flow_pane_t1

0xa396,	// (0x0006eaf9) main_call6_pane

0xa396,	// (0x0006eaf9) main_calllock_pane

0x8918,	// (0x0006d07b) call6_btn_grp_pane_ParamLimits

0x8918,	// (0x0006d07b) call6_btn_grp_pane

0x8932,	// (0x0006d095) call6_pane_g1_ParamLimits

0x8932,	// (0x0006d095) call6_pane_g1

0x894b,	// (0x0006d0ae) popup_call6_1st_window_ParamLimits

0x894b,	// (0x0006d0ae) popup_call6_1st_window

0x895f,	// (0x0006d0c2) popup_call6_2nd_window_ParamLimits

0x895f,	// (0x0006d0c2) popup_call6_2nd_window

0x8973,	// (0x0006d0d6) cell_call6_btn_pane_ParamLimits

0x8973,	// (0x0006d0d6) cell_call6_btn_pane

0xc1c9,	// (0x0007092c) bg_popup_call2_in_pane_cp03

0xb88e,	// (0x0006fff1) popup_call6_1st_window_g1

0xb896,	// (0x0006fff9) popup_call6_1st_window_g2

0xb89e,	// (0x00070001) popup_call6_1st_window_g3

0x0002,

0xfd6b,	// (0x000744ce) popup_call6_1st_window_g

0xb8a6,	// (0x00070009) popup_call6_1st_window_t1

0xb8b5,	// (0x00070018) popup_call6_1st_window_t2

0xb8c5,	// (0x00070028) popup_call6_1st_window_t3

0x0002,

0xfd72,	// (0x000744d5) popup_call6_1st_window_t

0xc1c9,	// (0x0007092c) bg_popup_call2_in_pane_cp04

0xb8d5,	// (0x00070038) popup_call6_2nd_window_g1

0xb8dd,	// (0x00070040) popup_call6_2nd_window_g2

0xb8e5,	// (0x00070048) popup_call6_2nd_window_g3

0x0002,

0xfd79,	// (0x000744dc) popup_call6_2nd_window_g

0xb8ed,	// (0x00070050) popup_call6_2nd_window_t1

0xa421,	// (0x0006eb84) bg_button_pane_cp15

0xb8fc,	// (0x0007005f) cell_call6_btn_pane_g1

0xb905,	// (0x00070068) cell_call6_btn_pane_t1

0x8987,	// (0x0006d0ea) listscroll_wgtman_pane_ParamLimits

0x8987,	// (0x0006d0ea) listscroll_wgtman_pane

0x89a8,	// (0x0006d10b) wgtman_btn_pane_ParamLimits

0x89a8,	// (0x0006d10b) wgtman_btn_pane

0xc9b2,	// (0x00071115) aid_scroll_copy1

0xb914,	// (0x00070077) list_wgtman_pane

0x89eb,	// (0x0006d14e) wgtman_btn_pane_g1_ParamLimits

0x89eb,	// (0x0006d14e) wgtman_btn_pane_g1

0x8a17,	// (0x0006d17a) wgtman_btn_pane_t1_ParamLimits

0x8a17,	// (0x0006d17a) wgtman_btn_pane_t1

0xb91e,	// (0x00070081) wgtman_btn_pane_t2_ParamLimits

0xb91e,	// (0x00070081) wgtman_btn_pane_t2

0x0001,

0xfd80,	// (0x000744e3) wgtman_btn_pane_t_ParamLimits

0xfd80,	// (0x000744e3) wgtman_btn_pane_t

0x8a54,	// (0x0006d1b7) listrow_wgtman_pane_ParamLimits

0x8a54,	// (0x0006d1b7) listrow_wgtman_pane

0x8a68,	// (0x0006d1cb) listrow_wgtman_pane_g1

0x8a75,	// (0x0006d1d8) listrow_wgtman_pane_g2

0x0001,

0xfd85,	// (0x000744e8) listrow_wgtman_pane_g

0x8a93,	// (0x0006d1f6) listrow_wgtman_pane_t1

0x8aab,	// (0x0006d20e) listrow_wgtman_pane_t2

0x0001,

0xfd8a,	// (0x000744ed) listrow_wgtman_pane_t

0x8ad1,	// (0x0006d234) wait_bar_pane_cp09

0xb935,	// (0x00070098) main_calllock_btn_pane

0xb93f,	// (0x000700a2) main_calllock_pane_g1

0xa396,	// (0x0006eaf9) bg_button_pane_cp17

0xb94b,	// (0x000700ae) main_calllock_btn_pane_g1

0xb954,	// (0x000700b7) main_calllock_btn_pane_t1

0xa396,	// (0x0006eaf9) main_dialer3_pane

0xa396,	// (0x0006eaf9) main_fmrd2_pane

0xbfcd,	// (0x00070730) main_fs_bigclock_unlock_btn_pane_g1

0x8aeb,	// (0x0006d24e) main_fs_bigclock_unlock_btn_pane_t1

0x8af9,	// (0x0006d25c) area_fmrd2_info_pane_ParamLimits

0x8af9,	// (0x0006d25c) area_fmrd2_info_pane

0x8b0a,	// (0x0006d26d) area_fmrd2_visual_pane_ParamLimits

0x8b0a,	// (0x0006d26d) area_fmrd2_visual_pane

0x8b18,	// (0x0006d27b) fmrd2_indi_pane_ParamLimits

0x8b18,	// (0x0006d27b) fmrd2_indi_pane

0x8b25,	// (0x0006d288) area_fmrd2_visual_pane_g1

0x8b2d,	// (0x0006d290) area_fmrd2_visual_pane_t1

0x8b3d,	// (0x0006d2a0) area_fmrd2_visual_pane_t2

0x8b4d,	// (0x0006d2b0) area_fmrd2_visual_pane_t3

0x0002,

0xfd94,	// (0x000744f7) area_fmrd2_visual_pane_t

0x8b5d,	// (0x0006d2c0) area_fmrd2_info_pane_g1

0x8b65,	// (0x0006d2c8) area_fmrd2_info_pane_t1

0x8b75,	// (0x0006d2d8) area_fmrd2_info_pane_t2

0x8b85,	// (0x0006d2e8) area_fmrd2_info_pane_t3

0x8b95,	// (0x0006d2f8) area_fmrd2_info_pane_t4

0x0003,

0xfd9b,	// (0x000744fe) area_fmrd2_info_pane_t

0x8ba5,	// (0x0006d308) fmrd2_indi_pane_t1

0x8bb5,	// (0x0006d318) fmrd2_indi_pane_t2

0x8bc5,	// (0x0006d328) fmrd2_indi_pane_t3

0x0002,

0xfda4,	// (0x00074507) fmrd2_indi_pane_t

0x731e,	// (0x0006ba81) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x731e,	// (0x0006ba81) list_single_fs_bigclock_indicator_pane_g5

0x73d3,	// (0x0006bb36) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x73d3,	// (0x0006bb36) list_single_fs_bigclock_indicator_pane_t5

0x8077,	// (0x0006c7da) aid_cell_bcale_month_pane_ParamLimits

0x8077,	// (0x0006c7da) aid_cell_bcale_month_pane

0x809e,	// (0x0006c801) bcale_month_pane_ParamLimits

0x809e,	// (0x0006c801) bcale_month_pane

0x80c2,	// (0x0006c825) bcale_preview_pane_ParamLimits

0x80c2,	// (0x0006c825) bcale_preview_pane

0xb6f7,	// (0x0006fe5a) list_single_fs_bigclock_pane_t1_ParamLimits

0xb716,	// (0x0006fe79) list_single_fs_bigclock_pane_t2_ParamLimits

0xb716,	// (0x0006fe79) list_single_fs_bigclock_pane_t2

0x0001,

0xfd1f,	// (0x00074482) list_single_fs_bigclock_pane_t_ParamLimits

0xfd1f,	// (0x00074482) list_single_fs_bigclock_pane_t

0x8ae3,	// (0x0006d246) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd8f,	// (0x000744f2) main_fs_bigclock_unlock_btn_pane_g

0x8bd5,	// (0x0006d338) aid_dia3_key_size_ParamLimits

0x8bd5,	// (0x0006d338) aid_dia3_key_size

0x8be9,	// (0x0006d34c) aid_dia3_listrow_size_ParamLimits

0x8be9,	// (0x0006d34c) aid_dia3_listrow_size

0x8c03,	// (0x0006d366) dia3_keypad_fun_pane_ParamLimits

0x8c03,	// (0x0006d366) dia3_keypad_fun_pane

0x8c1d,	// (0x0006d380) dia3_keypad_num_pane_ParamLimits

0x8c1d,	// (0x0006d380) dia3_keypad_num_pane

0x8c37,	// (0x0006d39a) dia3_listscroll_pane_ParamLimits

0x8c37,	// (0x0006d39a) dia3_listscroll_pane

0x8c4d,	// (0x0006d3b0) dia3_numentry_pane_ParamLimits

0x8c4d,	// (0x0006d3b0) dia3_numentry_pane

0xb963,	// (0x000700c6) dia3_list_pane

0x8c67,	// (0x0006d3ca) scroll_pane_cp12

0xa396,	// (0x0006eaf9) bg_dia3_numentry_pane

0x8c72,	// (0x0006d3d5) dia3_numentry_pane_t1

0x8c81,	// (0x0006d3e4) cell_dia3_key_num_pane

0x8c89,	// (0x0006d3ec) cell_dia3_key0_fun_pane_ParamLimits

0x8c89,	// (0x0006d3ec) cell_dia3_key0_fun_pane

0x8c9d,	// (0x0006d400) cell_dia3_key1_fun_pane_ParamLimits

0x8c9d,	// (0x0006d400) cell_dia3_key1_fun_pane

0x8cb2,	// (0x0006d415) dia3_listrow_pane

0x6d7d,	// (0x0006b4e0) bg_dia3_numentry_pane_g1

0xa396,	// (0x0006eaf9) bg_button_pane_cp21

0x8cc4,	// (0x0006d427) cell_dia3_key_num_pane_t1

0x8cd2,	// (0x0006d435) cell_dia3_key_num_pane_t2

0x8cd2,	// (0x0006d435) cell_dia3_key_num_pane_t3

0x8cd2,	// (0x0006d435) cell_dia3_key_num_pane_t4

0x0003,

0xfdab,	// (0x0007450e) cell_dia3_key_num_pane_t

0xa396,	// (0x0006eaf9) bg_button_pane_cp19

0x8ce1,	// (0x0006d444) cell_dia3_key0_fun_pane_g1

0xa396,	// (0x0006eaf9) bg_button_pane_cp20

0x8ce9,	// (0x0006d44c) cell_dia3_key1_fun_pane_g1

0x8cf1,	// (0x0006d454) area_left_week_number_pane

0x8cff,	// (0x0006d462) area_top_day_name_pane

0x8d12,	// (0x0006d475) frame_month_view_pane

0xb96e,	// (0x000700d1) grid_month_view_pane

0x8d27,	// (0x0006d48a) cell_top_day_name_pane_ParamLimits

0x8d27,	// (0x0006d48a) cell_top_day_name_pane

0x8d56,	// (0x0006d4b9) cell_area_left_week_number_pane_ParamLimits

0x8d56,	// (0x0006d4b9) cell_area_left_week_number_pane

0x8d6c,	// (0x0006d4cf) cell_month_view_pane_ParamLimits

0x8d6c,	// (0x0006d4cf) cell_month_view_pane

0xb97c,	// (0x000700df) frm_month_g1

0x8d9d,	// (0x0006d500) frm_month_g2

0x8db0,	// (0x0006d513) frm_month_g3

0x8dc3,	// (0x0006d526) frm_month_g4

0x8dd6,	// (0x0006d539) frm_month_g5

0x8de9,	// (0x0006d54c) frm_month_g6

0x8dfe,	// (0x0006d561) frm_month_g7

0xb989,	// (0x000700ec) frm_month_g8

0x8e13,	// (0x0006d576) frm_month_g9

0x8e23,	// (0x0006d586) frm_month_g10

0x8e33,	// (0x0006d596) frm_month_g11

0x8e43,	// (0x0006d5a6) frm_month_g12

0x8e55,	// (0x0006d5b8) frm_month_g13

0x8e69,	// (0x0006d5cc) frm_month_g14

0x8e7d,	// (0x0006d5e0) frm_month_g15

0x8e91,	// (0x0006d5f4) frm_month_g16

0x000f,

0xfdb4,	// (0x00074517) frm_month_g

0xb996,	// (0x000700f9) cell_top_day_name_pane_t1

0x8ea5,	// (0x0006d608) cell_area_left_week_number_pane_g1

0x8eb1,	// (0x0006d614) cell_area_left_week_number_pane_t1

0xab57,	// (0x0006f2ba) cell_month_view_pane_g1

0x8ec4,	// (0x0006d627) cell_month_view_pane_t1

0xa396,	// (0x0006eaf9) main_fps_pane

0x77ab,	// (0x0006bf0e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x77ab,	// (0x0006bf0e) cmail_ddmenu_btn02_pane_cp1

0x77c7,	// (0x0006bf2a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x77c7,	// (0x0006bf2a) cmail_ddmenu_btn02_pane_cp2

0x8473,	// (0x0006cbd6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8473,	// (0x0006cbd6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd2,	// (0x00074435) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd2,	// (0x00074435) cmail_ddmenu_btn02_pane_g

0x8494,	// (0x0006cbf7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8494,	// (0x0006cbf7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcd7,	// (0x0007443a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcd7,	// (0x0007443a) cmail_ddmenu_btn02_pane_t

0x8ed7,	// (0x0006d63a) fps_text_pane_ParamLimits

0x8ed7,	// (0x0006d63a) fps_text_pane

0x8eee,	// (0x0006d651) main_fps_pane_g1_ParamLimits

0x8eee,	// (0x0006d651) main_fps_pane_g1

0x8f06,	// (0x0006d669) wait_bar_pane_cp010_ParamLimits

0x8f06,	// (0x0006d669) wait_bar_pane_cp010

0x8f19,	// (0x0006d67c) fps_text_pane_t1_ParamLimits

0x8f19,	// (0x0006d67c) fps_text_pane_t1

0xb197,	// (0x0006f8fa) cam4_image_uncrop_pane_g1

0xb1a0,	// (0x0006f903) cam4_image_uncrop_pane_g2

0x4c0a,	// (0x0006936d) cam4_image_uncrop_pane_g3

0x4c13,	// (0x00069376) cam4_image_uncrop_pane_g4

0x0003,

0xf816,	// (0x00073f79) cam4_image_uncrop_pane_g

0x8cb2,	// (0x0006d415) dia3_listrow_pane_ParamLimits

0xa396,	// (0x0006eaf9) main_phob2_pane

0x7cab,	// (0x0006c40e) cell_tport_appsw_pane_cp02_ParamLimits

0x7cab,	// (0x0006c40e) cell_tport_appsw_pane_cp02

0x7cbf,	// (0x0006c422) cell_tport_appsw_pane_cp03_ParamLimits

0x7cbf,	// (0x0006c422) cell_tport_appsw_pane_cp03

0xa396,	// (0x0006eaf9) phob2_contact_card_pane

0xa396,	// (0x0006eaf9) phob2_listscroll_pane

0xb9a9,	// (0x0007010c) phob2_list_pane

0xb9b1,	// (0x00070114) scroll_pane_cp034

0x8f31,	// (0x0006d694) phob2_cc_data_pane_ParamLimits

0x8f31,	// (0x0006d694) phob2_cc_data_pane

0x8f4a,	// (0x0006d6ad) phob2_cc_listscroll_pane_ParamLimits

0x8f4a,	// (0x0006d6ad) phob2_cc_listscroll_pane

0x8f6b,	// (0x0006d6ce) list_double_large_graphic_phob2_pane_ParamLimits

0x8f6b,	// (0x0006d6ce) list_double_large_graphic_phob2_pane

0x8f7f,	// (0x0006d6e2) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8f7f,	// (0x0006d6e2) list_double_large_graphic_phob2_pane_g1

0x8f8c,	// (0x0006d6ef) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8f8c,	// (0x0006d6ef) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdd5,	// (0x00074538) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd5,	// (0x00074538) list_double_large_graphic_phob2_pane_g

0x8fb2,	// (0x0006d715) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8fb2,	// (0x0006d715) list_double_large_graphic_phob2_pane_t1

0x8fc7,	// (0x0006d72a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8fc7,	// (0x0006d72a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdde,	// (0x00074541) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdde,	// (0x00074541) list_double_large_graphic_phob2_pane_t

0xa396,	// (0x0006eaf9) list_highlight_pane_cp024

0x8fdc,	// (0x0006d73f) phob2_cc_button_pane

0x8fe8,	// (0x0006d74b) phob2_cc_data_pane_g1_ParamLimits

0x8fe8,	// (0x0006d74b) phob2_cc_data_pane_g1

0x8ffe,	// (0x0006d761) phob2_cc_data_pane_g2_ParamLimits

0x8ffe,	// (0x0006d761) phob2_cc_data_pane_g2

0x0001,

0xfde3,	// (0x00074546) phob2_cc_data_pane_g_ParamLimits

0xfde3,	// (0x00074546) phob2_cc_data_pane_g

0x9016,	// (0x0006d779) phob2_cc_data_pane_t1_ParamLimits

0x9016,	// (0x0006d779) phob2_cc_data_pane_t1

0x9046,	// (0x0006d7a9) phob2_cc_data_pane_t2_ParamLimits

0x9046,	// (0x0006d7a9) phob2_cc_data_pane_t2

0x9076,	// (0x0006d7d9) phob2_cc_data_pane_t3_ParamLimits

0x9076,	// (0x0006d7d9) phob2_cc_data_pane_t3

0x0002,

0xfde8,	// (0x0007454b) phob2_cc_data_pane_t_ParamLimits

0xfde8,	// (0x0007454b) phob2_cc_data_pane_t

0xb9b9,	// (0x0007011c) phob2_cc_list_pane_ParamLimits

0xb9b9,	// (0x0007011c) phob2_cc_list_pane

0x5ae4,	// (0x0006a247) scroll_pane_cp035_ParamLimits

0x5ae4,	// (0x0006a247) scroll_pane_cp035

0xaaf0,	// (0x0006f253) bg_button_pane_cp033

0x90a6,	// (0x0006d809) phob2_cc_button_pane_g1

0x90b2,	// (0x0006d815) phob2_cc_button_pane_t1

0x90c7,	// (0x0006d82a) phob2_cc_button_pane_t2

0x0001,

0xfdef,	// (0x00074552) phob2_cc_button_pane_t

0x90d9,	// (0x0006d83c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x90d9,	// (0x0006d83c) list_double_large_graphic_phob2_cc_pane

0x9110,	// (0x0006d873) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9110,	// (0x0006d873) list_double_large_graphic_phob2_cc_pane_g1

0x911c,	// (0x0006d87f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x911c,	// (0x0006d87f) list_double_large_graphic_phob2_cc_pane_g2

0x9128,	// (0x0006d88b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9128,	// (0x0006d88b) list_double_large_graphic_phob2_cc_pane_g3

0x9134,	// (0x0006d897) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9134,	// (0x0006d897) list_double_large_graphic_phob2_cc_pane_g4

0x9140,	// (0x0006d8a3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9140,	// (0x0006d8a3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf4,	// (0x00074557) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf4,	// (0x00074557) list_double_large_graphic_phob2_cc_pane_g

0x914c,	// (0x0006d8af) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x914c,	// (0x0006d8af) list_double_large_graphic_phob2_cc_pane_t1

0x9175,	// (0x0006d8d8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9175,	// (0x0006d8d8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdff,	// (0x00074562) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdff,	// (0x00074562) list_double_large_graphic_phob2_cc_pane_t

0xb9c5,	// (0x00070128) list_highlight_pane_cp025_ParamLimits

0xb9c5,	// (0x00070128) list_highlight_pane_cp025

0xaaf0,	// (0x0006f253) bg_button_pane_cp033_ParamLimits

0x90a6,	// (0x0006d809) phob2_cc_button_pane_g1_ParamLimits

0x90b2,	// (0x0006d815) phob2_cc_button_pane_t1_ParamLimits

0x90c7,	// (0x0006d82a) phob2_cc_button_pane_t2_ParamLimits

0xfdef,	// (0x00074552) phob2_cc_button_pane_t_ParamLimits

0x03a1,	// (0x00064b04) popup_wgtman_window

0xec01,	// (0x00073364) scroll_pane_cp038

0x89cd,	// (0x0006d130) wgtman_btn_pane_cp_01_ParamLimits

0x89cd,	// (0x0006d130) wgtman_btn_pane_cp_01

0xb9d3,	// (0x00070136) wgtman_content_pane

0xb9dc,	// (0x0007013f) wgtman_heading_pane

0xa396,	// (0x0006eaf9) bg_heading_pane_cp02

0xb9e5,	// (0x00070148) wgtman_heading_pane_g1

0xb9ed,	// (0x00070150) wgtman_heading_pane_t1

0xb9fb,	// (0x0007015e) scroll_pane_cp036

0xba03,	// (0x00070166) wgtman_list_pane

0xb355,	// (0x0006fab8) wgtman_list_pane_t1_ParamLimits

0xb355,	// (0x0006fab8) wgtman_list_pane_t1

0xb181,	// (0x0006f8e4) cam4_grid_pane

0x58f1,	// (0x0006a054) bg_button_pane_cp015_ParamLimits

0x5908,	// (0x0006a06b) bg_button_pane_cp016_ParamLimits

0x5914,	// (0x0006a077) bg_button_pane_cp017_ParamLimits

0x596f,	// (0x0006a0d2) popup_vitu2_query_window_g3_ParamLimits

0x596f,	// (0x0006a0d2) popup_vitu2_query_window_g3

0x5a12,	// (0x0006a175) popup_vitu2_query_window_t6_ParamLimits

0x5a12,	// (0x0006a175) popup_vitu2_query_window_t6

0x5a3d,	// (0x0006a1a0) popup_vitu2_query_window_t7_ParamLimits

0x5a3d,	// (0x0006a1a0) popup_vitu2_query_window_t7

0xb197,	// (0x0006f8fa) cam4_grid_pane_g1

0xb1a0,	// (0x0006f903) cam4_grid_pane_g2

0xba0b,	// (0x0007016e) cam4_grid_pane_g3

0xba14,	// (0x00070177) cam4_grid_pane_g4

0x0003,

0xfe04,	// (0x00074567) cam4_grid_pane_g

0x0ecf,	// (0x00065632) aid_placing_vt_slider_lsc_ParamLimits

0x11bc,	// (0x0006591f) vidtel_button_pane_ParamLimits

0x11bc,	// (0x0006591f) vidtel_button_pane

0xa396,	// (0x0006eaf9) bg_button_pane_cp034

0xba1f,	// (0x00070182) vidtel_button_pane_g1

0xba27,	// (0x0007018a) vidtel_button_pane_t1

0xed0f,	// (0x00073472) aid_size_vtel_slider_touch

0x5ae4,	// (0x0006a247) scroll_pane_cp039

0x6dec,	// (0x0006b54f) ncim_query_button_pane_cp01_ParamLimits

0x6e0b,	// (0x0006b56e) ncimui_query_pane_g1_ParamLimits

0xaaf0,	// (0x0006f253) input_focus_pane_cp012_ParamLimits

0x6e30,	// (0x0006b593) ncim_query_entry_pane_t1_ParamLimits

0x5ae4,	// (0x0006a247) scroll_pane_cp039_ParamLimits

0x233c,	// (0x00066a9f) navi_pane_bcale_mc_g1

0x2344,	// (0x00066aa7) navi_pane_bcale_mc_t1

0x78bf,	// (0x0006c022) main_sp_fs_email_pane_g1

0x78cb,	// (0x0006c02e) main_sp_fs_email_pane_g2

0x0001,

0xfc02,	// (0x00074365) main_sp_fs_email_pane_g

0xb457,	// (0x0006fbba) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb457,	// (0x0006fbba) list_single_cale_mrui_row_pane_g3

0x8506,	// (0x0006cc69) list_single_recal_day_pane_g5_event_pane

0x851c,	// (0x0006cc7f) list_single_recal_day_pane_g7

0xba3d,	// (0x000701a0) list_recal_day_event_pane_cp01

0xba46,	// (0x000701a9) list_recal_vselct_arw_lo_pane_cp01

0xba4e,	// (0x000701b1) list_recal_vselct_arw_up_pane_cp01

0xba56,	// (0x000701b9) list_recal_vselct_pane_cp01

0xed31,	// (0x00073494) list_recal_day_event_pane_cp01_g1

0x919e,	// (0x0006d901) list_recal_day_event_pane_cp01_t1

0x8524,	// (0x0006cc87) list_single_recal_day_pane_t1_ParamLimits

0x8536,	// (0x0006cc99) list_single_recal_day_pane_t2_ParamLimits

0xfce7,	// (0x0007444a) list_single_recal_day_pane_t_ParamLimits

0xaace,	// (0x0006f231) bg_notes_pane_ParamLimits

0xc009,	// (0x0007076c) list_notes_pane_ParamLimits

0x04b9,	// (0x00064c1c) scroll_pane_cp06_ParamLimits

0xc02b,	// (0x0007078e) main_notes_pane_ParamLimits

0xaaf0,	// (0x0006f253) main_welc_pane

0x91da,	// (0x0006d93d) main_welc_body_pane_ParamLimits

0x91da,	// (0x0006d93d) main_welc_body_pane

0x91f9,	// (0x0006d95c) main_welc_opti_pane_ParamLimits

0x91f9,	// (0x0006d95c) main_welc_opti_pane

0x9287,	// (0x0006d9ea) main_welc_pane_t1_ParamLimits

0x9287,	// (0x0006d9ea) main_welc_pane_t1

0x94af,	// (0x0006dc12) main_welc_body_row_pane_ParamLimits

0x94af,	// (0x0006dc12) main_welc_body_row_pane

0xab49,	// (0x0006f2ac) main_welc_opti_row_pane_ParamLimits

0xab49,	// (0x0006f2ac) main_welc_opti_row_pane

0xba70,	// (0x000701d3) main_welc_opti_row_pane_g1

0x94c3,	// (0x0006dc26) main_welc_opti_row_pane_t1

0xba78,	// (0x000701db) main_welc_body_row_pane_t1

0xb7ce,	// (0x0006ff31) popup_notif_wgt_heading_pane

0xb7e8,	// (0x0006ff4b) aid_size_list_notif_wgt_del_ParamLimits

0xb7f5,	// (0x0006ff58) list_notif_wgt_row_pane_g1_ParamLimits

0xb801,	// (0x0006ff64) list_notif_wgt_row_pane_g2_ParamLimits

0xb810,	// (0x0006ff73) list_notif_wgt_row_pane_g3_ParamLimits

0xfd4e,	// (0x000744b1) list_notif_wgt_row_pane_g_ParamLimits

0xb81d,	// (0x0006ff80) list_notif_wgt_row_pane_t1_ParamLimits

0xb833,	// (0x0006ff96) list_notif_wgt_row_pane_t2_ParamLimits

0xb845,	// (0x0006ffa8) list_notif_wgt_row_pane_t3_ParamLimits

0xfd55,	// (0x000744b8) list_notif_wgt_row_pane_t_ParamLimits

0x8a68,	// (0x0006d1cb) listrow_wgtman_pane_g1_ParamLimits

0x8a75,	// (0x0006d1d8) listrow_wgtman_pane_g2_ParamLimits

0xfd85,	// (0x000744e8) listrow_wgtman_pane_g_ParamLimits

0x8a93,	// (0x0006d1f6) listrow_wgtman_pane_t1_ParamLimits

0x8aab,	// (0x0006d20e) listrow_wgtman_pane_t2_ParamLimits

0xfd8a,	// (0x000744ed) listrow_wgtman_pane_t_ParamLimits

0x8ad1,	// (0x0006d234) wait_bar_pane_cp09_ParamLimits

0xa396,	// (0x0006eaf9) bg_popup_heading_pane_cp02

0xba87,	// (0x000701ea) popup_notif_wgt_heading_pane_g1

0xba8f,	// (0x000701f2) popup_notif_wgt_heading_pane_t1

0xa396,	// (0x0006eaf9) main_vids_pane

0xa396,	// (0x0006eaf9) vids_listscroll_pane

0x94d2,	// (0x0006dc35) scroll_pane_cp040

0xa396,	// (0x0006eaf9) vids_list_pane

0x94dd,	// (0x0006dc40) vids_list_double_pane_ParamLimits

0x94dd,	// (0x0006dc40) vids_list_double_pane

0x94f0,	// (0x0006dc53) vids_list_double_pane_g1

0x94f9,	// (0x0006dc5c) vids_list_double_pane_t1

0x9509,	// (0x0006dc6c) vids_list_double_pane_t2

0x0001,

0xfe23,	// (0x00074586) vids_list_double_pane_t

0xa413,	// (0x0006eb76) main_ncimui_pane_ParamLimits

0x6b0b,	// (0x0006b26e) main_ncimui_pane_g1_ParamLimits

0x6b17,	// (0x0006b27a) main_ncimui_pane_g2_ParamLimits

0x6b17,	// (0x0006b27a) main_ncimui_pane_g2

0x0001,

0xfb08,	// (0x0007426b) main_ncimui_pane_g_ParamLimits

0xfb08,	// (0x0007426b) main_ncimui_pane_g

0x9218,	// (0x0006d97b) main_welc_pane_g1_ParamLimits

0x9218,	// (0x0006d97b) main_welc_pane_g1

0x922d,	// (0x0006d990) main_welc_pane_g2_ParamLimits

0x922d,	// (0x0006d990) main_welc_pane_g2

0x0003,

0xfe0d,	// (0x00074570) main_welc_pane_g_ParamLimits

0xfe0d,	// (0x00074570) main_welc_pane_g

0xaace,	// (0x0006f231) listscroll_mce_pane_ParamLimits

0x241c,	// (0x00066b7f) wait_bar_pane_cp10

0xde7f,	// (0x000725e2) main_cale_day_pane_ParamLimits

0xde7f,	// (0x000725e2) main_cale_week_pane_ParamLimits

0xaace,	// (0x0006f231) main_messa_pane_ParamLimits

0x40b8,	// (0x0006881b) main_clock2_btn_pane_ParamLimits

0x40b8,	// (0x0006881b) main_clock2_btn_pane

0xe632,	// (0x00072d95) main_clock2_btn_pane_cp01_ParamLimits

0xe632,	// (0x00072d95) main_clock2_btn_pane_cp01

0xb428,	// (0x0006fb8b) list_cale_mrui_pane_ParamLimits

0xb87b,	// (0x0006ffde) main_cf0_pane_g2

0x0001,

0xfd5c,	// (0x000744bf) main_cf0_pane_g

0x8cf1,	// (0x0006d454) area_left_week_number_pane_ParamLimits

0x8cff,	// (0x0006d462) area_top_day_name_pane_ParamLimits

0x8d12,	// (0x0006d475) frame_month_view_pane_ParamLimits

0xb96e,	// (0x000700d1) grid_month_view_pane_ParamLimits

0xb97c,	// (0x000700df) frm_month_g1_ParamLimits

0x8d9d,	// (0x0006d500) frm_month_g2_ParamLimits

0x8db0,	// (0x0006d513) frm_month_g3_ParamLimits

0x8dc3,	// (0x0006d526) frm_month_g4_ParamLimits

0x8dd6,	// (0x0006d539) frm_month_g5_ParamLimits

0x8de9,	// (0x0006d54c) frm_month_g6_ParamLimits

0x8dfe,	// (0x0006d561) frm_month_g7_ParamLimits

0xb989,	// (0x000700ec) frm_month_g8_ParamLimits

0x8e13,	// (0x0006d576) frm_month_g9_ParamLimits

0x8e23,	// (0x0006d586) frm_month_g10_ParamLimits

0x8e33,	// (0x0006d596) frm_month_g11_ParamLimits

0x8e43,	// (0x0006d5a6) frm_month_g12_ParamLimits

0x8e55,	// (0x0006d5b8) frm_month_g13_ParamLimits

0x8e69,	// (0x0006d5cc) frm_month_g14_ParamLimits

0x8e7d,	// (0x0006d5e0) frm_month_g15_ParamLimits

0x8e91,	// (0x0006d5f4) frm_month_g16_ParamLimits

0xfdb4,	// (0x00074517) frm_month_g_ParamLimits

0xb996,	// (0x000700f9) cell_top_day_name_pane_t1_ParamLimits

0x8ea5,	// (0x0006d608) cell_area_left_week_number_pane_g1_ParamLimits

0x8eb1,	// (0x0006d614) cell_area_left_week_number_pane_t1_ParamLimits

0xab57,	// (0x0006f2ba) cell_month_view_pane_g1_ParamLimits

0x8ec4,	// (0x0006d627) cell_month_view_pane_t1_ParamLimits

0xaac6,	// (0x0006f229) main_clock2_btn_pane_g1

0xba9d,	// (0x00070200) main_clock2_btn_pane_t1

0xaaf0,	// (0x0006f253) listscroll_cmail_pane_ParamLimits

0x78bf,	// (0x0006c022) main_sp_fs_email_pane_g1_ParamLimits

0x78cb,	// (0x0006c02e) main_sp_fs_email_pane_g2_ParamLimits

0xfc02,	// (0x00074365) main_sp_fs_email_pane_g_ParamLimits

0xb558,	// (0x0006fcbb) list_recal_day_pane_ParamLimits

0xb569,	// (0x0006fccc) mian_recal_day_pane_t1

0x7aab,	// (0x0006c20e) list_single_dyc_row_text_pane_t4_ParamLimits

0x7aab,	// (0x0006c20e) list_single_dyc_row_text_pane_t4

0x7af4,	// (0x0006c257) list_single_dyc_row_text_pane_t5_ParamLimits

0x7af4,	// (0x0006c257) list_single_dyc_row_text_pane_t5

0x7b6a,	// (0x0006c2cd) list_single_dyc_row_text_pane_t6_ParamLimits

0x7b6a,	// (0x0006c2cd) list_single_dyc_row_text_pane_t6

0x1f7f,	// (0x000666e2) aid_mgn_list_cale_time_pane

0xa413,	// (0x0006eb76) main_gallery2_pane_ParamLimits

0xe646,	// (0x00072da9) main_clock2_pane_cp01_t1

0xe654,	// (0x00072db7) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x00073e55) main_clock2_pane_cp01_t

0x08d7,	// (0x0006503a) cale_week_scroll_pane_g16_ParamLimits

0x08d7,	// (0x0006503a) cale_week_scroll_pane_g16

0xc1c9,	// (0x0007092c) vorec_slider_pane

0xba27,	// (0x0007018a) vidtel_button_pane_t1_ParamLimits

0x85a4,	// (0x0006cd07) main_fs_bigclock_clock_pane_g1_ParamLimits

0x85a4,	// (0x0006cd07) main_fs_bigclock_clock_pane_g2_ParamLimits

0x85b7,	// (0x0006cd1a) main_fs_bigclock_clock_pane_g3_ParamLimits

0x85b7,	// (0x0006cd1a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0a,	// (0x0007446d) main_fs_bigclock_clock_pane_g_ParamLimits

0x85ce,	// (0x0006cd31) main_fs_bigclock_clock_pane_t1_ParamLimits

0x85e4,	// (0x0006cd47) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd13,	// (0x00074476) main_fs_bigclock_clock_pane_t_ParamLimits

0x3905,	// (0x00068068) main_mup3_lyrics_pane_ParamLimits

0x3905,	// (0x00068068) main_mup3_lyrics_pane

0x9531,	// (0x0006dc94) main_mup3_lyrics_pane_t1_ParamLimits

0x9531,	// (0x0006dc94) main_mup3_lyrics_pane_t1

0xae73,	// (0x0006f5d6) aid_main_mp4_pane_t1_area

0xae7d,	// (0x0006f5e0) aid_main_mp4_pane_t2_area

0xaf27,	// (0x0006f68a) main_mp4_pane_g7_ParamLimits

0xaf27,	// (0x0006f68a) main_mp4_pane_g7

0xaf33,	// (0x0006f696) main_mp4_pane_g8_ParamLimits

0xaf33,	// (0x0006f696) main_mp4_pane_g8

0x49d1,	// (0x00069134) aid_call6_pane_g1_size

0x90f8,	// (0x0006d85b) list_double_large_graphic_phob2_other_pane_ParamLimits

0x90f8,	// (0x0006d85b) list_double_large_graphic_phob2_other_pane

0xc557,	// (0x00070cba) list_double_large_graphic_phob2_other_pane_g1

0xa396,	// (0x0006eaf9) list_highlight_pane_cp026

0xaaf0,	// (0x0006f253) main_welc_pane_ParamLimits

0x7828,	// (0x0006bf8b) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7828,	// (0x0006bf8b) main_sp_fs_ctrlbar_pane_g3

0x7842,	// (0x0006bfa5) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7842,	// (0x0006bfa5) main_sp_fs_ctrlbar_pane_g4

0x7876,	// (0x0006bfd9) toolbar2_fixed_button_pane_cp01

0x7881,	// (0x0006bfe4) toolbar2_fixed_button_pane_cp02

0x788e,	// (0x0006bff1) toolbar2_fixed_button_pane_cp03

0x91bf,	// (0x0006d922) list_welc_entry_pane_ParamLimits

0x91bf,	// (0x0006d922) list_welc_entry_pane

0x9242,	// (0x0006d9a5) main_welc_pane_g3_ParamLimits

0x9242,	// (0x0006d9a5) main_welc_pane_g3

0x92a9,	// (0x0006da0c) main_welc_pane_t2_ParamLimits

0x92a9,	// (0x0006da0c) main_welc_pane_t2

0x92cc,	// (0x0006da2f) main_welc_pane_t3_ParamLimits

0x92cc,	// (0x0006da2f) main_welc_pane_t3

0x0005,

0xfe16,	// (0x00074579) main_welc_pane_t_ParamLimits

0xfe16,	// (0x00074579) main_welc_pane_t

0x9404,	// (0x0006db67) welc_button_pane_ParamLimits

0x9404,	// (0x0006db67) welc_button_pane

0x9497,	// (0x0006dbfa) welc_service_logo_pane_ParamLimits

0x9497,	// (0x0006dbfa) welc_service_logo_pane

0x954c,	// (0x0006dcaf) list_single_welc_entry_pane_ParamLimits

0x954c,	// (0x0006dcaf) list_single_welc_entry_pane

0x955d,	// (0x0006dcc0) list_single_welc_entry_pane_g1

0x9565,	// (0x0006dcc8) list_single_welc_entry_pane_t1

0x9573,	// (0x0006dcd6) list_single_welc_entry_pane_t2

0x0001,

0xfe28,	// (0x0007458b) list_single_welc_entry_pane_t

0xa396,	// (0x0006eaf9) bg_button_pane_cp035

0xbaab,	// (0x0007020e) welc_button_pane_t1

0x9581,	// (0x0006dce4) welc_service_logo_pane_g1

0x958a,	// (0x0006dced) welc_service_logo_pane_g2

0x0001,

0xfe2d,	// (0x00074590) welc_service_logo_pane_g

0xa421,	// (0x0006eb84) main_int_radio_pane

0x6aac,	// (0x0006b20f) list_single_fs_dyc_pane_g1

0x8f98,	// (0x0006d6fb) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8f98,	// (0x0006d6fb) list_double_large_graphic_phob2_pane_g3

0x8fa4,	// (0x0006d707) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8fa4,	// (0x0006d707) list_double_large_graphic_phob2_pane_g4

0x9593,	// (0x0006dcf6) main_int_radio1_pane_ParamLimits

0x9593,	// (0x0006dcf6) main_int_radio1_pane

0xbab9,	// (0x0007021c) find_pane_cp02

0x95b0,	// (0x0006dd13) input_focus_pane_cp12_ParamLimits

0x95b0,	// (0x0006dd13) input_focus_pane_cp12

0x95c0,	// (0x0006dd23) input_focus_pane_cp13_ParamLimits

0x95c0,	// (0x0006dd23) input_focus_pane_cp13

0x95d4,	// (0x0006dd37) input_focus_pane_cp14_ParamLimits

0x95d4,	// (0x0006dd37) input_focus_pane_cp14

0xbac2,	// (0x00070225) int_radio1_listscroll_pane

0x95e8,	// (0x0006dd4b) main_int_radio1_pane_g1_ParamLimits

0x95e8,	// (0x0006dd4b) main_int_radio1_pane_g1

0x95fe,	// (0x0006dd61) main_int_radio1_pane_t1_ParamLimits

0x95fe,	// (0x0006dd61) main_int_radio1_pane_t1

0x9617,	// (0x0006dd7a) main_int_radio1_pane_t2_ParamLimits

0x9617,	// (0x0006dd7a) main_int_radio1_pane_t2

0x9632,	// (0x0006dd95) main_int_radio1_pane_t3_ParamLimits

0x9632,	// (0x0006dd95) main_int_radio1_pane_t3

0x964d,	// (0x0006ddb0) main_int_radio1_pane_t4_ParamLimits

0x964d,	// (0x0006ddb0) main_int_radio1_pane_t4

0xbacc,	// (0x0007022f) main_int_radio1_pane_t5_ParamLimits

0xbacc,	// (0x0007022f) main_int_radio1_pane_t5

0x965f,	// (0x0006ddc2) main_int_radio1_pane_t6_ParamLimits

0x965f,	// (0x0006ddc2) main_int_radio1_pane_t6

0x9674,	// (0x0006ddd7) main_int_radio1_pane_t7_ParamLimits

0x9674,	// (0x0006ddd7) main_int_radio1_pane_t7

0x9689,	// (0x0006ddec) main_int_radio1_pane_t8_ParamLimits

0x9689,	// (0x0006ddec) main_int_radio1_pane_t8

0x96a6,	// (0x0006de09) main_int_radio1_pane_t9_ParamLimits

0x96a6,	// (0x0006de09) main_int_radio1_pane_t9

0x96b8,	// (0x0006de1b) main_int_radio1_pane_t10_ParamLimits

0x96b8,	// (0x0006de1b) main_int_radio1_pane_t10

0x96de,	// (0x0006de41) main_int_radio1_pane_t11_ParamLimits

0x96de,	// (0x0006de41) main_int_radio1_pane_t11

0x9704,	// (0x0006de67) main_int_radio1_pane_t12_ParamLimits

0x9704,	// (0x0006de67) main_int_radio1_pane_t12

0x000b,

0xfe32,	// (0x00074595) main_int_radio1_pane_t_ParamLimits

0xfe32,	// (0x00074595) main_int_radio1_pane_t

0xb9a9,	// (0x0007010c) int_radio_list_pane

0xb9b1,	// (0x00070114) scroll_pane_cp037

0xbade,	// (0x00070241) list_double_large_graphic_int_radio_pane_ParamLimits

0xbade,	// (0x00070241) list_double_large_graphic_int_radio_pane

0xbaf2,	// (0x00070255) list_double_large_graphic_int_radio_pane_g1

0x9716,	// (0x0006de79) list_double_large_graphic_int_radio_pane_t1

0x9724,	// (0x0006de87) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe4b,	// (0x000745ae) list_double_large_graphic_int_radio_pane_t

0xa396,	// (0x0006eaf9) list_highlight_pane_cp027

0xba60,	// (0x000701c3) main_button_pane_4

0x9256,	// (0x0006d9b9) main_welc_pane_g4_ParamLimits

0x9256,	// (0x0006d9b9) main_welc_pane_g4

0x92ef,	// (0x0006da52) main_welc_pane_t4_ParamLimits

0x92ef,	// (0x0006da52) main_welc_pane_t4

0x9306,	// (0x0006da69) main_welc_pane_t5_ParamLimits

0x9306,	// (0x0006da69) main_welc_pane_t5

0x9345,	// (0x0006daa8) main_welc_pane_t6_ParamLimits

0x9345,	// (0x0006daa8) main_welc_pane_t6

0x9419,	// (0x0006db7c) welc_button_pane_2_ParamLimits

0x9419,	// (0x0006db7c) welc_button_pane_2

0x943c,	// (0x0006db9f) welc_button_pane_3_ParamLimits

0x943c,	// (0x0006db9f) welc_button_pane_3

0xba68,	// (0x000701cb) welc_button_pane_4

0x9464,	// (0x0006dbc7) welc_button_pane_5_ParamLimits

0x9464,	// (0x0006dbc7) welc_button_pane_5

0x020d,	// (0x00064970) main_popup_welc_pane

0xbb13,	// (0x00070276) main_welc_sk_g3

0xbb1d,	// (0x00070280) main_welc_sk_g4

0xbb27,	// (0x0007028a) main_welc_sk_t3

0xbb37,	// (0x0007029a) main_welc_sk_t4

0xbb47,	// (0x000702aa) popup_welc_pane_t4

0xbb55,	// (0x000702b8) popup_welc_pane_t5

0xbb63,	// (0x000702c6) popup_welc_pane_t6

0xa421,	// (0x0006eb84) main_acti_pane

0xa396,	// (0x0006eaf9) main_sso_pane

0x9732,	// (0x0006de95) sso_body_pane_ParamLimits

0x9732,	// (0x0006de95) sso_body_pane

0x9747,	// (0x0006deaa) sso_logo_pane_ParamLimits

0x9747,	// (0x0006deaa) sso_logo_pane

0x9780,	// (0x0006dee3) sso_sk_pane_ParamLimits

0x9780,	// (0x0006dee3) sso_sk_pane

0xbba5,	// (0x00070308) main_sso_logo_pane_g1

0x9792,	// (0x0006def5) sso_sk_pane_t1_ParamLimits

0x9792,	// (0x0006def5) sso_sk_pane_t1

0x97ac,	// (0x0006df0f) sso_sk_pane_t2_ParamLimits

0x97ac,	// (0x0006df0f) sso_sk_pane_t2

0x0001,

0xfe50,	// (0x000745b3) sso_sk_pane_t_ParamLimits

0xfe50,	// (0x000745b3) sso_sk_pane_t

0xbbb0,	// (0x00070313) aid_sso_gap

0xbbb9,	// (0x0007031c) aid_sso_txt1

0xbbc3,	// (0x00070326) aid_sso_txt2

0xbbcd,	// (0x00070330) aid_sso_txt3

0x0002,

0xfe55,	// (0x000745b8) aid_sso_txt

0xbbd7,	// (0x0007033a) aid_sso_widget

0x9816,	// (0x0006df79) sso_btn_pane_ParamLimits

0x9816,	// (0x0006df79) sso_btn_pane

0x989a,	// (0x0006dffd) sso_option_pane_ParamLimits

0x989a,	// (0x0006dffd) sso_option_pane

0x9958,	// (0x0006e0bb) sso_query_pane_ParamLimits

0x9958,	// (0x0006e0bb) sso_query_pane

0x99ae,	// (0x0006e111) sso_query_pane_cp01_ParamLimits

0x99ae,	// (0x0006e111) sso_query_pane_cp01

0x9a0e,	// (0x0006e171) sso_t_hdr_pane_ParamLimits

0x9a0e,	// (0x0006e171) sso_t_hdr_pane

0x9a38,	// (0x0006e19b) sso_t_nml_pane_ParamLimits

0x9a38,	// (0x0006e19b) sso_t_nml_pane

0xbbe1,	// (0x00070344) sso_t_sub_pane

0x9754,	// (0x0006deb7) sso_popup_window_ParamLimits

0x9754,	// (0x0006deb7) sso_popup_window

0x97c2,	// (0x0006df25) sso_apps_pane_ParamLimits

0x97c2,	// (0x0006df25) sso_apps_pane

0x97ec,	// (0x0006df4f) sso_body_pane_g1

0x97f6,	// (0x0006df59) sso_body_pane_t1

0x9806,	// (0x0006df69) sso_body_pane_t2

0x0001,

0xfe5c,	// (0x000745bf) sso_body_pane_t

0x9862,	// (0x0006dfc5) sso_btn_pane_cp01_ParamLimits

0x9862,	// (0x0006dfc5) sso_btn_pane_cp01

0x992c,	// (0x0006e08f) sso_prog_pane_ParamLimits

0x992c,	// (0x0006e08f) sso_prog_pane

0x9a8e,	// (0x0006e1f1) sso_t_hdr_pane_t1_ParamLimits

0x9a8e,	// (0x0006e1f1) sso_t_hdr_pane_t1

0xbbf6,	// (0x00070359) input_focus_pane_cp10_ParamLimits

0xbbf6,	// (0x00070359) input_focus_pane_cp10

0xbc0a,	// (0x0007036d) sso_query_pane_t1_ParamLimits

0xbc0a,	// (0x0007036d) sso_query_pane_t1

0xbc1d,	// (0x00070380) sso_query_pane_t2_ParamLimits

0xbc1d,	// (0x00070380) sso_query_pane_t2

0xbc37,	// (0x0007039a) sso_query_pane_t3_ParamLimits

0xbc37,	// (0x0007039a) sso_query_pane_t3

0xbc61,	// (0x000703c4) sso_query_pane_t4_ParamLimits

0xbc61,	// (0x000703c4) sso_query_pane_t4

0x0003,

0xfe61,	// (0x000745c4) sso_query_pane_t_ParamLimits

0xfe61,	// (0x000745c4) sso_query_pane_t

0xbb0a,	// (0x0007026d) bg_button_pane_cp22

0xbafb,	// (0x0007025e) sso_btn_pane_t1

0x9aa1,	// (0x0006e204) sso_t_nml_pane_t1_ParamLimits

0x9aa1,	// (0x0006e204) sso_t_nml_pane_t1

0xbc85,	// (0x000703e8) sso_option_row_pane_ParamLimits

0xbc85,	// (0x000703e8) sso_option_row_pane

0xbc92,	// (0x000703f5) sso_t_sub_pane_t1_ParamLimits

0xbc92,	// (0x000703f5) sso_t_sub_pane_t1

0xaaf0,	// (0x0006f253) bg_popup_window_pane_cp11_ParamLimits

0xaaf0,	// (0x0006f253) bg_popup_window_pane_cp11

0xbcaf,	// (0x00070412) popup_sk_window_cp01_ParamLimits

0xbcaf,	// (0x00070412) popup_sk_window_cp01

0xbcbc,	// (0x0007041f) sso_popup_body_pane_ParamLimits

0xbcbc,	// (0x0007041f) sso_popup_body_pane

0xbcc9,	// (0x0007042c) scroll_pane_cp21_ParamLimits

0xbcc9,	// (0x0007042c) scroll_pane_cp21

0xbcd6,	// (0x00070439) sso_popup_body_t_pane_ParamLimits

0xbcd6,	// (0x00070439) sso_popup_body_t_pane

0xbce3,	// (0x00070446) sso_popup_body_t_hdr_pane_ParamLimits

0xbce3,	// (0x00070446) sso_popup_body_t_hdr_pane

0x9abc,	// (0x0006e21f) sso_popup_body_t_nml_pane_ParamLimits

0x9abc,	// (0x0006e21f) sso_popup_body_t_nml_pane

0x9ae3,	// (0x0006e246) sso_popup_body_t_sub_pane_ParamLimits

0x9ae3,	// (0x0006e246) sso_popup_body_t_sub_pane

0xbcf5,	// (0x00070458) sso_popup_body_t_hdr_pane_t1

0x9b06,	// (0x0006e269) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9b06,	// (0x0006e269) sso_popup_body_t_nml_pane_t1

0xbd05,	// (0x00070468) sso_popup_body_t_sub_pane_t1_ParamLimits

0xbd05,	// (0x00070468) sso_popup_body_t_sub_pane_t1

0xbfcd,	// (0x00070730) sso_prog_pane_g1

0x9b3e,	// (0x0006e2a1) sso_apps_pane_comp1_ParamLimits

0x9b3e,	// (0x0006e2a1) sso_apps_pane_comp1

0xbd2a,	// (0x0007048d) sso_apps_pane_comp1_g1

0xbd32,	// (0x00070495) sso_apps_pane_comp1_t1

0xbd4e,	// (0x000704b1) sso_option_row_pane_g1

0xbd56,	// (0x000704b9) sso_option_row_pane_t1

0x7d8a,	// (0x0006c4ed) list_cmail_pane_ParamLimits

0xa396,	// (0x0006eaf9) main_call7_pane

0x91ac,	// (0x0006d90f) bg_welc_area_ParamLimits

0x91ac,	// (0x0006d90f) bg_welc_area

0x9383,	// (0x0006dae6) sso_t_hdr_pane_a_t1_ParamLimits

0x9383,	// (0x0006dae6) sso_t_hdr_pane_a_t1

0x939c,	// (0x0006daff) sso_t_nml_pane_a_t1_ParamLimits

0x939c,	// (0x0006daff) sso_t_nml_pane_a_t1

0x93cb,	// (0x0006db2e) sso_t_sub_pane_a_t1_ParamLimits

0x93cb,	// (0x0006db2e) sso_t_sub_pane_a_t1

0x947d,	// (0x0006dbe0) welc_button_pane_cp01_ParamLimits

0x947d,	// (0x0006dbe0) welc_button_pane_cp01

0xbafb,	// (0x0007025e) sso_btn_pane_t1_copy1

0xbb0a,	// (0x0007026d) welc_button_pane_2_comp1

0xbb73,	// (0x000702d6) sso_t_hdr_pane_p_t1

0xbb83,	// (0x000702e6) sso_t_nml_pane_p_t1

0xbb93,	// (0x000702f6) sso_t_sub_pane_p_t1

0xa396,	// (0x0006eaf9) main_att_pane

0xa396,	// (0x0006eaf9) main_vod_pane

0xbbe1,	// (0x00070344) sso_t_sub_pane_ParamLimits

0xbd40,	// (0x000704a3) input_focus_pane_cp10_t1

0xbd56,	// (0x000704b9) sso_option_row_pane_t1_ParamLimits

0x9b58,	// (0x0006e2bb) main_att_body_pane_ParamLimits

0x9b58,	// (0x0006e2bb) main_att_body_pane

0x9b6e,	// (0x0006e2d1) att_btn_emg_pane_ParamLimits

0x9b6e,	// (0x0006e2d1) att_btn_emg_pane

0x9b8d,	// (0x0006e2f0) att_btn_pane_ParamLimits

0x9b8d,	// (0x0006e2f0) att_btn_pane

0x9c02,	// (0x0006e365) att_btn_pane_cp01_ParamLimits

0x9c02,	// (0x0006e365) att_btn_pane_cp01

0x9c22,	// (0x0006e385) att_li_srv_pane_ParamLimits

0x9c22,	// (0x0006e385) att_li_srv_pane

0x9c3f,	// (0x0006e3a2) att_opt_pane_ParamLimits

0x9c3f,	// (0x0006e3a2) att_opt_pane

0x9c89,	// (0x0006e3ec) att_query_pane_ParamLimits

0x9c89,	// (0x0006e3ec) att_query_pane

0x9d02,	// (0x0006e465) att_query_pane_cp01_ParamLimits

0x9d02,	// (0x0006e465) att_query_pane_cp01

0x9d4e,	// (0x0006e4b1) att_t_hdr_pane_ParamLimits

0x9d4e,	// (0x0006e4b1) att_t_hdr_pane

0x9dbe,	// (0x0006e521) att_t_nml_pane_ParamLimits

0x9dbe,	// (0x0006e521) att_t_nml_pane

0x9e38,	// (0x0006e59b) att_t_nml_pane_cp01_ParamLimits

0x9e38,	// (0x0006e59b) att_t_nml_pane_cp01

0x9e66,	// (0x0006e5c9) att_t_nmlb_pane_ParamLimits

0x9e66,	// (0x0006e5c9) att_t_nmlb_pane

0x9ed3,	// (0x0006e636) att_term_pane_ParamLimits

0x9ed3,	// (0x0006e636) att_term_pane

0x9f1f,	// (0x0006e682) main_att_body_pane_g1_ParamLimits

0x9f1f,	// (0x0006e682) main_att_body_pane_g1

0xbd6f,	// (0x000704d2) att_t_hdr_pane_t1_ParamLimits

0xbd6f,	// (0x000704d2) att_t_hdr_pane_t1

0xbd88,	// (0x000704eb) att_t_nml_pane_t1_ParamLimits

0xbd88,	// (0x000704eb) att_t_nml_pane_t1

0xbdad,	// (0x00070510) att_btn_pane_t1

0xbb0a,	// (0x0007026d) bg_button_pane_cp23

0x9f4d,	// (0x0006e6b0) att_li_srv_row_pane_ParamLimits

0x9f4d,	// (0x0006e6b0) att_li_srv_row_pane

0xbdbd,	// (0x00070520) att_t_nmlb_pane_t1_ParamLimits

0xbdbd,	// (0x00070520) att_t_nmlb_pane_t1

0xbddb,	// (0x0007053e) att_query_pane_t1

0xbdea,	// (0x0007054d) att_query_pane_t2

0xbdf9,	// (0x0007055c) att_query_pane_t3

0x0002,

0xfe6a,	// (0x000745cd) att_query_pane_t

0xbe08,	// (0x0007056b) input_focus_pane_cp11

0xbe11,	// (0x00070574) att_term_pane_t1_ParamLimits

0xbe11,	// (0x00070574) att_term_pane_t1

0xa396,	// (0x0006eaf9) att_opt_row_pane

0xbd4e,	// (0x000704b1) att_opt_row_pane_g1

0xbe2e,	// (0x00070591) att_opt_row_pane_t1_ParamLimits

0xbe2e,	// (0x00070591) att_opt_row_pane_t1

0x9f5d,	// (0x0006e6c0) att_li_srv_row_pane_g1

0x9f65,	// (0x0006e6c8) att_li_srv_row_pane_t1_ParamLimits

0x9f65,	// (0x0006e6c8) att_li_srv_row_pane_t1

0x9f7a,	// (0x0006e6dd) att_li_srv_row_pane_t2_ParamLimits

0x9f7a,	// (0x0006e6dd) att_li_srv_row_pane_t2

0x0001,

0xfe71,	// (0x000745d4) att_li_srv_row_pane_t_ParamLimits

0xfe71,	// (0x000745d4) att_li_srv_row_pane_t

0xbe47,	// (0x000705aa) att_btn_close_pane_g1

0xa396,	// (0x0006eaf9) bg_button_pane_cp24

0x9f8f,	// (0x0006e6f2) main_vod_body_pane_ParamLimits

0x9f8f,	// (0x0006e6f2) main_vod_body_pane

0x9fa3,	// (0x0006e706) main_vod_body_pane_g1_ParamLimits

0x9fa3,	// (0x0006e706) main_vod_body_pane_g1

0x9fd7,	// (0x0006e73a) scroll_pane_cp24_ParamLimits

0x9fd7,	// (0x0006e73a) scroll_pane_cp24

0xa025,	// (0x0006e788) vod_btn_pane_ParamLimits

0xa025,	// (0x0006e788) vod_btn_pane

0xa067,	// (0x0006e7ca) vod_det_pane_ParamLimits

0xa067,	// (0x0006e7ca) vod_det_pane

0xa09b,	// (0x0006e7fe) vod_logo_g1_ParamLimits

0xa09b,	// (0x0006e7fe) vod_logo_g1

0xa0e9,	// (0x0006e84c) vod_opt_pane_ParamLimits

0xa0e9,	// (0x0006e84c) vod_opt_pane

0xa11c,	// (0x0006e87f) vod_opt_pane_cp01_ParamLimits

0xa11c,	// (0x0006e87f) vod_opt_pane_cp01

0xa148,	// (0x0006e8ab) vod_query_pane_ParamLimits

0xa148,	// (0x0006e8ab) vod_query_pane

0xa173,	// (0x0006e8d6) vod_query_pane_cp01_ParamLimits

0xa173,	// (0x0006e8d6) vod_query_pane_cp01

0xa17f,	// (0x0006e8e2) vod_t_nml_pane_ParamLimits

0xa17f,	// (0x0006e8e2) vod_t_nml_pane

0xa234,	// (0x0006e997) vod_t_nml_pane_cp01_ParamLimits

0xa234,	// (0x0006e997) vod_t_nml_pane_cp01

0xa270,	// (0x0006e9d3) vod_t_sub_pane_ParamLimits

0xa270,	// (0x0006e9d3) vod_t_sub_pane

0xa2a1,	// (0x0006ea04) vod_t_sub_pane_cp01_ParamLimits

0xa2a1,	// (0x0006ea04) vod_t_sub_pane_cp01

0xbe08,	// (0x0007056b) vod_query_field_pane

0xbe4f,	// (0x000705b2) vod_query_pane_t1

0xbb0a,	// (0x0007026d) bg_button_pane_cp25

0xbe5e,	// (0x000705c1) sso_btn_pane_t1_copy2

0xa2cd,	// (0x0006ea30) vod_t_nml_pane_t1_ParamLimits

0xa2cd,	// (0x0006ea30) vod_t_nml_pane_t1

0xbe6d,	// (0x000705d0) vod_opt_row_pane_ParamLimits

0xbe6d,	// (0x000705d0) vod_opt_row_pane

0xbe7f,	// (0x000705e2) vod_t_sub_pane_t1_ParamLimits

0xbe7f,	// (0x000705e2) vod_t_sub_pane_t1

0xbe98,	// (0x000705fb) vod_det_cell_pane_ParamLimits

0xbe98,	// (0x000705fb) vod_det_cell_pane

0xa396,	// (0x0006eaf9) input_focus_pane_cp15

0xbea9,	// (0x0007060c) vod_query_field_pane_t1

0xbeb7,	// (0x0007061a) vod_opt_row_pane_g1_ParamLimits

0xbeb7,	// (0x0007061a) vod_opt_row_pane_g1

0xbec3,	// (0x00070626) vod_opt_row_pane_t1_ParamLimits

0xbec3,	// (0x00070626) vod_opt_row_pane_t1

0xbee2,	// (0x00070645) vod_det_cell_field_pane

0xbeeb,	// (0x0007064e) vod_det_cell_pane_g1

0xbef3,	// (0x00070656) vod_det_cell_pane_t1

0xa396,	// (0x0006eaf9) input_focus_pane_cp16

0xbf02,	// (0x00070665) vod_det_cell_field_pane_t1

0xa302,	// (0x0006ea65) call7_btn_grp_pane_ParamLimits

0xa302,	// (0x0006ea65) call7_btn_grp_pane

0xaaf0,	// (0x0006f253) call7_bubble_pane_ParamLimits

0xaaf0,	// (0x0006f253) call7_bubble_pane

0xa31c,	// (0x0006ea7f) cell_call7_btn_pane_ParamLimits

0xa31c,	// (0x0006ea7f) cell_call7_btn_pane

0xa330,	// (0x0006ea93) call7_pane_g1_ParamLimits

0xa330,	// (0x0006ea93) call7_pane_g1

0xa342,	// (0x0006eaa5) call7_windows_conf_pane_ParamLimits

0xa342,	// (0x0006eaa5) call7_windows_conf_pane

0xa360,	// (0x0006eac3) popup_call7_1st_window_ParamLimits

0xa360,	// (0x0006eac3) popup_call7_1st_window

0xa372,	// (0x0006ead5) popup_call7_2nd_window_ParamLimits

0xa372,	// (0x0006ead5) popup_call7_2nd_window

0xa384,	// (0x0006eae7) popup_call7_3rd_window_ParamLimits

0xa384,	// (0x0006eae7) popup_call7_3rd_window

0xa396,	// (0x0006eaf9) bg_button_pane_cp26

0xb94b,	// (0x000700ae) cell_call7_btn_pane_g1

0xbf10,	// (0x00070673) cell_call7_btn_pane_t1

0xa396,	// (0x0006eaf9) bg_popup_window_pane_cp12

0xbf1f,	// (0x00070682) popup_call7_1st_window_g1

0xbf27,	// (0x0007068a) popup_call7_1st_window_g2

0xbf2f,	// (0x00070692) popup_call7_1st_window_g3

0x0002,

0xfe76,	// (0x000745d9) popup_call7_1st_window_g

0xbf37,	// (0x0007069a) popup_call7_1st_window_t1

0xbf46,	// (0x000706a9) popup_call7_1st_window_t2

0xbf56,	// (0x000706b9) popup_call7_1st_window_t3

0x0002,

0xfe7d,	// (0x000745e0) popup_call7_1st_window_t

0xa396,	// (0x0006eaf9) bg_popup_window_pane_cp13

0xbf66,	// (0x000706c9) popup_call7_2nd_window_g1

0xbf6e,	// (0x000706d1) popup_call7_2nd_window_g2

0xbf76,	// (0x000706d9) popup_call7_2nd_window_g3

0x0002,

0xfe84,	// (0x000745e7) popup_call7_2nd_window_g

0xbf37,	// (0x0007069a) popup_call7_2nd_window_t1

0xa396,	// (0x0006eaf9) bg_popup_window_pane_cp14

0xbf7e,	// (0x000706e1) call7_list_conf_pane

0xbf86,	// (0x000706e9) call7_list_conf_row_pane_ParamLimits

0xbf86,	// (0x000706e9) call7_list_conf_row_pane

0xbf99,	// (0x000706fc) call7_list_conf_row_pane_g1

0xbfa1,	// (0x00070704) call7_list_conf_row_pane_g2

0x0001,

0xfe8b,	// (0x000745ee) call7_list_conf_row_pane_g

0xbfa9,	// (0x0007070c) call7_list_conf_row_pane_t1

0xa396,	// (0x0006eaf9) list_highlight_pane_cp22

0x98f4,	// (0x0006e057) sso_option_pane_cp01_ParamLimits

0x98f4,	// (0x0006e057) sso_option_pane_cp01

0xaace,	// (0x0006f231) msg_header_pane_ParamLimits

0xcc48,	// (0x000713ab) bg_button_pane_cp01_ParamLimits

0xcdf4,	// (0x00071557) input_focus_pane_cp07_ParamLimits

0x78fa,	// (0x0006c05d) popup_email_progress_window

0xbfcd,	// (0x00070730) popup_email_progress_window_g1

0xbfb7,	// (0x0007071a) popup_email_progress_window_g2

0x0001,

0xfe90,	// (0x000745f3) popup_email_progress_window_g

0xbfbf,	// (0x00070722) popup_email_progress_window_t1
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
