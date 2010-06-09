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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00073fd4 };

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
0x6d3b,	// (0x0007ad0f) Screen

0x6d47,	// (0x0007ad1b) application_window

0x6da3,	// (0x0007ad77) area_bottom_pane_ParamLimits

0x6da3,	// (0x0007ad77) area_bottom_pane

0x6dfc,	// (0x0007add0) area_top_pane_ParamLimits

0x6dfc,	// (0x0007add0) area_top_pane

0x6e60,	// (0x0007ae34) call_video_uplink_pane_ParamLimits

0x6e60,	// (0x0007ae34) call_video_uplink_pane

0x6e9f,	// (0x0007ae73) main_pane_ParamLimits

0x6e9f,	// (0x0007ae73) main_pane

0x3964,	// (0x00077938) context_pane

0xa0a8,	// (0x0007e07c) navi_pane

0xa0ce,	// (0x0007e0a2) popup_cale_events_window_ParamLimits

0xa0ce,	// (0x0007e0a2) popup_cale_events_window

0x3977,	// (0x0007794b) popup_mup_playback_window

0xa0e6,	// (0x0007e0ba) signal_pane

0x13e8,	// (0x000753bc) main_browser_pane

0x1ae6,	// (0x00075aba) main_burst_pane

0x9f34,	// (0x0007df08) main_calc_pane

0x394a,	// (0x0007791e) main_cale_day_pane

0x75dc,	// (0x0007b5b0) main_cale_month_pane

0x394a,	// (0x0007791e) main_cale_week_pane

0x1ae6,	// (0x00075aba) main_call_pane

0x0cf8,	// (0x00074ccc) main_call_poc_pane

0x1ae6,	// (0x00075aba) main_camera_pane

0x1ae6,	// (0x00075aba) main_chi_dic_pane

0x22c9,	// (0x0007629d) main_clock_pane

0x0cf8,	// (0x00074ccc) main_fmradio_pane

0x1ae6,	// (0x00075aba) main_graph_messa_pane

0x0cf8,	// (0x00074ccc) main_help_pane

0x13e8,	// (0x000753bc) main_im_pane

0x1323,	// (0x000752f7) main_image_pane_ParamLimits

0x1323,	// (0x000752f7) main_image_pane

0x0cf8,	// (0x00074ccc) main_location2_pane

0x1ae6,	// (0x00075aba) main_location_pane

0x1323,	// (0x000752f7) main_messa_pane

0x0cf8,	// (0x00074ccc) main_mp2_pane

0x1ae6,	// (0x00075aba) main_mp_pane

0x0cf8,	// (0x00074ccc) main_msg_pane

0x0cf8,	// (0x00074ccc) main_mup_eq_pane

0x0cf8,	// (0x00074ccc) main_mup_pane

0x13e8,	// (0x000753bc) main_notes_pane

0x0cf8,	// (0x00074ccc) main_pec_pane

0x0cf8,	// (0x00074ccc) main_phob_pane

0x0cf8,	// (0x00074ccc) main_pinb_pane

0x0cf8,	// (0x00074ccc) main_postcard_pane

0x0cf8,	// (0x00074ccc) main_qdial_pane

0x1ae6,	// (0x00075aba) main_skin_pane

0x0cf8,	// (0x00074ccc) main_smil2_pane

0x1ae6,	// (0x00075aba) main_smil_pane

0x1ae6,	// (0x00075aba) main_video_pane

0x1ae6,	// (0x00075aba) main_video_tele_pane

0x1323,	// (0x000752f7) main_viewer_pane_ParamLimits

0x1323,	// (0x000752f7) main_viewer_pane

0x1ae6,	// (0x00075aba) main_vorec_pane

0x9f72,	// (0x0007df46) popup_blid_sat_info_window_ParamLimits

0x9f72,	// (0x0007df46) popup_blid_sat_info_window

0x9f92,	// (0x0007df66) popup_dyc_status_message_window_ParamLimits

0x9f92,	// (0x0007df66) popup_dyc_status_message_window

0x9fa2,	// (0x0007df76) popup_grid_large_graphic_window_ParamLimits

0x9fa2,	// (0x0007df76) popup_grid_large_graphic_window

0xa033,	// (0x0007e007) popup_loc_request_window_ParamLimits

0xa033,	// (0x0007e007) popup_loc_request_window

0xa080,	// (0x0007e054) popup_wml_address_window_ParamLimits

0xa080,	// (0x0007e054) popup_wml_address_window

0x9e0c,	// (0x0007dde0) call_muted_g1

0x9ace,	// (0x0007daa2) popup_call_audio_conf_window_ParamLimits

0x9ace,	// (0x0007daa2) popup_call_audio_conf_window

0x9e1c,	// (0x0007ddf0) popup_call_audio_first_window_ParamLimits

0x9e1c,	// (0x0007ddf0) popup_call_audio_first_window

0x9e5c,	// (0x0007de30) popup_call_audio_in_window_ParamLimits

0x9e5c,	// (0x0007de30) popup_call_audio_in_window

0x9e80,	// (0x0007de54) popup_call_audio_out_window_ParamLimits

0x9e80,	// (0x0007de54) popup_call_audio_out_window

0x9ea2,	// (0x0007de76) popup_call_audio_second_window_ParamLimits

0x9ea2,	// (0x0007de76) popup_call_audio_second_window

0x9ed2,	// (0x0007dea6) popup_call_audio_wait_window_ParamLimits

0x9ed2,	// (0x0007dea6) popup_call_audio_wait_window

0x9ef3,	// (0x0007dec7) popup_number_entry_window_ParamLimits

0x9ef3,	// (0x0007dec7) popup_number_entry_window

0x08e5,	// (0x000748b9) bg_popup_call_pane_cp05_ParamLimits

0x08e5,	// (0x000748b9) bg_popup_call_pane_cp05

0x0905,	// (0x000748d9) popup_number_entry_window_t1

0x0918,	// (0x000748ec) popup_number_entry_window_t2

0x092a,	// (0x000748fe) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0008309e) popup_number_entry_window_t

0x093c,	// (0x00074910) text_title_cp2

0x094f,	// (0x00074923) bg_popup_call_pane_cp_ParamLimits

0x094f,	// (0x00074923) bg_popup_call_pane_cp

0x095d,	// (0x00074931) call_thumbnail_pane

0x0965,	// (0x00074939) popup_call_audio_in_window_g1_ParamLimits

0x0965,	// (0x00074939) popup_call_audio_in_window_g1

0x0971,	// (0x00074945) popup_call_audio_in_window_g2_ParamLimits

0x0971,	// (0x00074945) popup_call_audio_in_window_g2

0x097d,	// (0x00074951) popup_call_audio_in_window_g3_ParamLimits

0x097d,	// (0x00074951) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000830a7) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000830a7) popup_call_audio_in_window_g

0x0989,	// (0x0007495d) popup_call_audio_in_window_t1_ParamLimits

0x0989,	// (0x0007495d) popup_call_audio_in_window_t1

0x09a5,	// (0x00074979) popup_call_audio_in_window_t2_ParamLimits

0x09a5,	// (0x00074979) popup_call_audio_in_window_t2

0x09c1,	// (0x00074995) popup_call_audio_in_window_t3_ParamLimits

0x09c1,	// (0x00074995) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000830ae) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000830ae) popup_call_audio_in_window_t

0x094f,	// (0x00074923) bg_popup_call_pane_cp01_ParamLimits

0x094f,	// (0x00074923) bg_popup_call_pane_cp01

0x095d,	// (0x00074931) call_thumbnail_pane_cp02

0x09d4,	// (0x000749a8) call_type_pane_cp022

0x09dc,	// (0x000749b0) popup_call_audio_out_window_g1_ParamLimits

0x09dc,	// (0x000749b0) popup_call_audio_out_window_g1

0x09ee,	// (0x000749c2) popup_call_audio_out_window_g2_ParamLimits

0x09ee,	// (0x000749c2) popup_call_audio_out_window_g2

0x09fa,	// (0x000749ce) popup_call_audio_out_window_g3_ParamLimits

0x09fa,	// (0x000749ce) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000830b5) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000830b5) popup_call_audio_out_window_g

0x0a0c,	// (0x000749e0) popup_call_audio_out_window_t1_ParamLimits

0x0a0c,	// (0x000749e0) popup_call_audio_out_window_t1

0x0a24,	// (0x000749f8) popup_call_audio_out_window_t2_ParamLimits

0x0a24,	// (0x000749f8) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000830bc) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000830bc) popup_call_audio_out_window_t

0x0a39,	// (0x00074a0d) bg_popup_call_pane_ParamLimits

0x0a39,	// (0x00074a0d) bg_popup_call_pane

0x70a0,	// (0x0007b074) call_thumbnail_pane_cp_ParamLimits

0x70a0,	// (0x0007b074) call_thumbnail_pane_cp

0x0abd,	// (0x00074a91) call_type_pane_cp01_ParamLimits

0x0abd,	// (0x00074a91) call_type_pane_cp01

0x0b01,	// (0x00074ad5) popup_call_audio_first_window_g1_ParamLimits

0x0b01,	// (0x00074ad5) popup_call_audio_first_window_g1

0x0b4d,	// (0x00074b21) popup_call_audio_first_window_g2_ParamLimits

0x0b4d,	// (0x00074b21) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000830c1) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000830c1) popup_call_audio_first_window_g

0x0b91,	// (0x00074b65) popup_call_audio_first_window_t1_ParamLimits

0x0b91,	// (0x00074b65) popup_call_audio_first_window_t1

0x0c3d,	// (0x00074c11) popup_call_audio_first_window_t4_ParamLimits

0x0c3d,	// (0x00074c11) popup_call_audio_first_window_t4

0x0cc9,	// (0x00074c9d) popup_call_audio_first_window_t5_ParamLimits

0x0cc9,	// (0x00074c9d) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000830c6) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000830c6) popup_call_audio_first_window_t

0x0cf8,	// (0x00074ccc) bg_popup_call_pane_cp02

0x0d02,	// (0x00074cd6) call_type_pane_cp023

0x0d0a,	// (0x00074cde) popup_call_audio_wait_window_g1

0x0d12,	// (0x00074ce6) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000830cd) popup_call_audio_wait_window_g

0x0d1a,	// (0x00074cee) popup_call_audio_wait_window_t3

0x0d28,	// (0x00074cfc) bg_popup_call_pane_cp03_ParamLimits

0x0d28,	// (0x00074cfc) bg_popup_call_pane_cp03

0x1158,	// (0x0007512c) call_thumbnail_pane_cp011_ParamLimits

0x1158,	// (0x0007512c) call_thumbnail_pane_cp011

0x1164,	// (0x00075138) call_type_pane_cp034_ParamLimits

0x1164,	// (0x00075138) call_type_pane_cp034

0x11a0,	// (0x00075174) popup_call_audio_second_window_g1_ParamLimits

0x11a0,	// (0x00075174) popup_call_audio_second_window_g1

0x11dc,	// (0x000751b0) popup_call_audio_second_window_g2_ParamLimits

0x11dc,	// (0x000751b0) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000830d2) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000830d2) popup_call_audio_second_window_g

0x1218,	// (0x000751ec) popup_call_audio_second_window_t1_ParamLimits

0x1218,	// (0x000751ec) popup_call_audio_second_window_t1

0x1299,	// (0x0007526d) popup_call_audio_second_window_t2_ParamLimits

0x1299,	// (0x0007526d) popup_call_audio_second_window_t2

0x12cf,	// (0x000752a3) popup_call_audio_second_window_t3_ParamLimits

0x12cf,	// (0x000752a3) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000830d7) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000830d7) popup_call_audio_second_window_t

0x0cf8,	// (0x00074ccc) bg_popup_call_pane_cp04

0x1305,	// (0x000752d9) list_conf_pane

0x130d,	// (0x000752e1) popup_call_audio_conf_window_t1

0x131b,	// (0x000752ef) call_thumbnail_pane_g1

0x1323,	// (0x000752f7) bg_pinb_pane_ParamLimits

0x1323,	// (0x000752f7) bg_pinb_pane

0x1331,	// (0x00075305) find_pinb_pane

0x133a,	// (0x0007530e) listscroll_pinb_pane_ParamLimits

0x133a,	// (0x0007530e) listscroll_pinb_pane

0x1349,	// (0x0007531d) pinb_bg_pane_g1

0x70c4,	// (0x0007b098) pinb_bg_pane_g2

0x70d0,	// (0x0007b0a4) pinb_bg_pane_g3

0x70dc,	// (0x0007b0b0) pinb_bg_pane_g4

0x70e8,	// (0x0007b0bc) pinb_bg_pane_g5

0x70f4,	// (0x0007b0c8) pinb_bg_pane_g6

0x70ff,	// (0x0007b0d3) pinb_bg_pane_g7

0x710a,	// (0x0007b0de) pinb_bg_pane_g8

0x7115,	// (0x0007b0e9) pinb_bg_pane_g9

0x711f,	// (0x0007b0f3) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000830de) pinb_bg_pane_g

0x713c,	// (0x0007b110) grid_pinb_pane

0x7147,	// (0x0007b11b) list_pinb_pane

0x7152,	// (0x0007b126) scroll_pane_cp01_ParamLimits

0x7152,	// (0x0007b126) scroll_pane_cp01

0x1353,	// (0x00075327) find_pinb_pane_g1_ParamLimits

0x1353,	// (0x00075327) find_pinb_pane_g1

0x136b,	// (0x0007533f) find_pinb_pane_t1

0x137d,	// (0x00075351) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000830f8) find_pinb_pane_t

0x1392,	// (0x00075366) input_focus_pane_cp01_ParamLimits

0x1392,	// (0x00075366) input_focus_pane_cp01

0x7164,	// (0x0007b138) cell_pinb_pane_ParamLimits

0x7164,	// (0x0007b138) cell_pinb_pane

0x718c,	// (0x0007b160) cell_pinb_pane_g1_ParamLimits

0x718c,	// (0x0007b160) cell_pinb_pane_g1

0x71a1,	// (0x0007b175) cell_pinb_pane_g2_ParamLimits

0x71a1,	// (0x0007b175) cell_pinb_pane_g2

0x139e,	// (0x00075372) cell_pinb_pane_g3_ParamLimits

0x139e,	// (0x00075372) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000830fd) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000830fd) cell_pinb_pane_g

0x0cf8,	// (0x00074ccc) grid_highlight_pane_cp01

0x71ad,	// (0x0007b181) list_pinb_item_pane_ParamLimits

0x71ad,	// (0x0007b181) list_pinb_item_pane

0x0cf8,	// (0x00074ccc) list_highlight_pane_cp02

0x71d3,	// (0x0007b1a7) list_pinb_item_pane_g1_ParamLimits

0x71d3,	// (0x0007b1a7) list_pinb_item_pane_g1

0x71e0,	// (0x0007b1b4) list_pinb_item_pane_g2_ParamLimits

0x71e0,	// (0x0007b1b4) list_pinb_item_pane_g2

0x71ec,	// (0x0007b1c0) list_pinb_item_pane_g3_ParamLimits

0x71ec,	// (0x0007b1c0) list_pinb_item_pane_g3

0x71fd,	// (0x0007b1d1) list_pinb_item_pane_g4_ParamLimits

0x71fd,	// (0x0007b1d1) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00083104) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00083104) list_pinb_item_pane_g

0x7209,	// (0x0007b1dd) list_pinb_item_pane_t1_ParamLimits

0x7209,	// (0x0007b1dd) list_pinb_item_pane_t1

0x723a,	// (0x0007b20e) calc_display_pane

0x7258,	// (0x0007b22c) calc_paper_pane

0x7274,	// (0x0007b248) grid_calc_pane

0x0cf8,	// (0x00074ccc) bg_list_pane_cp01

0x72a0,	// (0x0007b274) clock_g1

0x72a8,	// (0x0007b27c) clock_g2

0x0001,

0xf139,	// (0x0008310d) clock_g

0x72b2,	// (0x0007b286) clock_t1_ParamLimits

0x72b2,	// (0x0007b286) clock_t1

0x72c7,	// (0x0007b29b) clock_t2_ParamLimits

0x72c7,	// (0x0007b29b) clock_t2

0x72d9,	// (0x0007b2ad) clock_t3_ParamLimits

0x72d9,	// (0x0007b2ad) clock_t3

0x72eb,	// (0x0007b2bf) clock_t4_ParamLimits

0x72eb,	// (0x0007b2bf) clock_t4

0x72fd,	// (0x0007b2d1) clock_t5_ParamLimits

0x72fd,	// (0x0007b2d1) clock_t5

0x7312,	// (0x0007b2e6) clock_t6_ParamLimits

0x7312,	// (0x0007b2e6) clock_t6

0x7324,	// (0x0007b2f8) clock_t7_ParamLimits

0x7324,	// (0x0007b2f8) clock_t7

0x7336,	// (0x0007b30a) clock_t8_ParamLimits

0x7336,	// (0x0007b30a) clock_t8

0x734c,	// (0x0007b320) clock_t9_ParamLimits

0x734c,	// (0x0007b320) clock_t9

0x0008,

0xf13e,	// (0x00083112) clock_t_ParamLimits

0xf13e,	// (0x00083112) clock_t

0x13aa,	// (0x0007537e) popup_clock_analogue_window_cp02

0x13aa,	// (0x0007537e) popup_clock_digital_window_cp01

0x13b2,	// (0x00075386) listscroll_help_pane

0x0cf8,	// (0x00074ccc) phob_pre_status_pane

0x13bc,	// (0x00075390) grid_qdial_pane

0x1323,	// (0x000752f7) listscroll_mce_pane

0x1323,	// (0x000752f7) bg_notes_pane

0x13c6,	// (0x0007539a) list_notes_pane

0x7362,	// (0x0007b336) scroll_pane_cp06

0x13d4,	// (0x000753a8) bg_calc_paper_pane

0x7371,	// (0x0007b345) list_calc_pane

0x13e8,	// (0x000753bc) bg_calc_display_pane

0x738b,	// (0x0007b35f) calc_display_pane_t1

0x73a0,	// (0x0007b374) calc_display_pane_t2

0x73b5,	// (0x0007b389) calc_display_pane_t3

0x0002,

0xf151,	// (0x00083125) calc_display_pane_t

0x73c7,	// (0x0007b39b) cell_calc_pane_ParamLimits

0x73c7,	// (0x0007b39b) cell_calc_pane

0x13f4,	// (0x000753c8) bg_calc_paper_pane_g1

0x140c,	// (0x000753e0) bg_calc_paper_pane_g2

0x1400,	// (0x000753d4) bg_calc_paper_pane_g3

0x1424,	// (0x000753f8) bg_calc_paper_pane_g4

0x1418,	// (0x000753ec) bg_calc_paper_pane_g5

0x73f4,	// (0x0007b3c8) bg_calc_paper_pane_g6

0x7405,	// (0x0007b3d9) bg_calc_paper_pane_g7

0x7416,	// (0x0007b3ea) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0008312c) bg_calc_paper_pane_g

0x7427,	// (0x0007b3fb) calc_bg_paper_pane_g9

0x7438,	// (0x0007b40c) list_calc_item_pane_ParamLimits

0x7438,	// (0x0007b40c) list_calc_item_pane

0x1430,	// (0x00075404) list_calc_item_pane_g1

0x7467,	// (0x0007b43b) list_calc_item_pane_t1_ParamLimits

0x7467,	// (0x0007b43b) list_calc_item_pane_t1

0x7479,	// (0x0007b44d) list_calc_item_pane_t2_ParamLimits

0x7479,	// (0x0007b44d) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0008313d) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0008313d) list_calc_item_pane_t

0x143d,	// (0x00075411) cell_calc_pane_g1

0x1447,	// (0x0007541b) grid_highlight_pane_cp02

0x3d87,	// (0x00077d5b) bg_calc_display_pane_g1

0x74a9,	// (0x0007b47d) bg_calc_display_pane_g2

0x74b3,	// (0x0007b487) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x00083147) bg_calc_display_pane_g

0x74bc,	// (0x0007b490) cell_qdial_pane_ParamLimits

0x74bc,	// (0x0007b490) cell_qdial_pane

0x74d0,	// (0x0007b4a4) cell_qdial_pane_g1_ParamLimits

0x74d0,	// (0x0007b4a4) cell_qdial_pane_g1

0x74dd,	// (0x0007b4b1) cell_qdial_pane_g2_ParamLimits

0x74dd,	// (0x0007b4b1) cell_qdial_pane_g2

0x19a2,	// (0x00075976) cell_qdial_pane_g3_ParamLimits

0x19a2,	// (0x00075976) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0008314e) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0008314e) cell_qdial_pane_g

0x74fb,	// (0x0007b4cf) cell_qdial_pane_t1_ParamLimits

0x74fb,	// (0x0007b4cf) cell_qdial_pane_t1

0x7513,	// (0x0007b4e7) cell_qdial_pane_t2_ParamLimits

0x7513,	// (0x0007b4e7) cell_qdial_pane_t2

0x7526,	// (0x0007b4fa) cell_qdial_pane_t3_ParamLimits

0x7526,	// (0x0007b4fa) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x00083157) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x00083157) cell_qdial_pane_t

0x0cf8,	// (0x00074ccc) grid_highlight_pane_cp04

0x19ae,	// (0x00075982) thumbnail_qdial_pane_ParamLimits

0x19ae,	// (0x00075982) thumbnail_qdial_pane

0x1a0a,	// (0x000759de) list_help_pane

0x1a13,	// (0x000759e7) scroll_pane_cp02

0x7539,	// (0x0007b50d) help_list_pane_t1_ParamLimits

0x7539,	// (0x0007b50d) help_list_pane_t1

0x756c,	// (0x0007b540) bg_notes_pane_g2

0x7574,	// (0x0007b548) bg_notes_pane_g3

0x757c,	// (0x0007b550) notes_bg_pane_g1

0x7584,	// (0x0007b558) notes_bg_pane_g4

0x758c,	// (0x0007b560) notes_bg_pane_g5

0x7594,	// (0x0007b568) notes_bg_pane_g6

0x759c,	// (0x0007b570) notes_bg_pane_g7

0x75a4,	// (0x0007b578) notes_bg_pane_g8

0x75ac,	// (0x0007b580) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00083175) notes_bg_pane_g

0x75b4,	// (0x0007b588) list_notes_text_pane_ParamLimits

0x75b4,	// (0x0007b588) list_notes_text_pane

0x1a1c,	// (0x000759f0) list_notes_text_pane_g1

0x5af2,	// (0x00079ac6) list_notes_text_pane_t1

0x75dc,	// (0x0007b5b0) listscroll_cale_week_pane

0x7601,	// (0x0007b5d5) bg_cale_heading_pane

0x1a3f,	// (0x00075a13) bg_cale_pane_cp01

0x7621,	// (0x0007b5f5) cale_week_corner_pane

0x763b,	// (0x0007b60f) cale_week_day_heading_pane

0x765b,	// (0x0007b62f) cale_week_scroll_pane_g1

0x7676,	// (0x0007b64a) cale_week_scroll_pane_g2

0x7689,	// (0x0007b65d) cale_week_scroll_pane_g3

0x769c,	// (0x0007b670) cale_week_scroll_pane_g4

0x76af,	// (0x0007b683) cale_week_scroll_pane_g5

0x76c2,	// (0x0007b696) cale_week_scroll_pane_g6

0x76d5,	// (0x0007b6a9) cale_week_scroll_pane_g7

0x76ea,	// (0x0007b6be) cale_week_scroll_pane_g8

0x76ff,	// (0x0007b6d3) cale_week_scroll_pane_g9

0x7712,	// (0x0007b6e6) cale_week_scroll_pane_g10

0x7725,	// (0x0007b6f9) cale_week_scroll_pane_g11

0x7738,	// (0x0007b70c) cale_week_scroll_pane_g12

0x774f,	// (0x0007b723) cale_week_scroll_pane_g13

0x776a,	// (0x0007b73e) cale_week_scroll_pane_g14

0x7785,	// (0x0007b759) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00083184) cale_week_scroll_pane_g

0x77b5,	// (0x0007b789) cale_week_time_pane

0x77ca,	// (0x0007b79e) grid_cale_week_pane

0x1a6e,	// (0x00075a42) scroll_pane_cp08

0x77e9,	// (0x0007b7bd) cell_cale_week_pane_ParamLimits

0x77e9,	// (0x0007b7bd) cell_cale_week_pane

0x784b,	// (0x0007b81f) cale_week_day_heading_pane_t1

0x7866,	// (0x0007b83a) cale_week_day_heading_pane_t2

0x7881,	// (0x0007b855) cale_week_day_heading_pane_t3

0x789c,	// (0x0007b870) cale_week_day_heading_pane_t4

0x78b7,	// (0x0007b88b) cale_week_day_heading_pane_t5

0x78d2,	// (0x0007b8a6) cale_week_day_heading_pane_t6

0x78ed,	// (0x0007b8c1) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000831a5) cale_week_day_heading_pane_t

0x1a8b,	// (0x00075a5f) bg_cale_side_pane

0x7908,	// (0x0007b8dc) cale_week_time_pane_t1

0x7922,	// (0x0007b8f6) cale_week_time_pane_t2

0x793c,	// (0x0007b910) cale_week_time_pane_t3

0x7956,	// (0x0007b92a) cale_week_time_pane_t4

0x7970,	// (0x0007b944) cale_week_time_pane_t5

0x798a,	// (0x0007b95e) cale_week_time_pane_t6

0x79a8,	// (0x0007b97c) cale_week_time_pane_t7

0x79ca,	// (0x0007b99e) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000831b4) cale_week_time_pane_t

0x79ee,	// (0x0007b9c2) cell_cale_week_pane_g2

0x7a12,	// (0x0007b9e6) cell_cale_week_pane_g3_ParamLimits

0x7a12,	// (0x0007b9e6) cell_cale_week_pane_g3

0x1a99,	// (0x00075a6d) grid_highlight_pane_cp07

0x1aa1,	// (0x00075a75) listscroll_gms_pane

0x1aab,	// (0x00075a7f) grid_gms_pane

0x1ab4,	// (0x00075a88) listscroll_gms_pane_g1

0x1abc,	// (0x00075a90) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000831c5) listscroll_gms_pane_g

0x7a2a,	// (0x0007b9fe) scroll_pane_cp010

0x7a35,	// (0x0007ba09) cell_gms_pane_ParamLimits

0x7a35,	// (0x0007ba09) cell_gms_pane

0x7a48,	// (0x0007ba1c) cell_gms_pane_g1

0x1ac4,	// (0x00075a98) cell_gms_pane_g2

0x1acc,	// (0x00075aa0) cell_gms_pane_g3

0x1ad5,	// (0x00075aa9) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000831ca) cell_gms_pane_g

0x1ade,	// (0x00075ab2) grid_highlight_pane_cp09

0x9db4,	// (0x0007dd88) phob_pre_status_pane_g1

0x9dbc,	// (0x0007dd90) phob_pre_status_pane_g2

0x9dc4,	// (0x0007dd98) phob_pre_status_pane_g3

0x9dcc,	// (0x0007dda0) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000835b5) phob_pre_status_pane_g

0x9ddc,	// (0x0007ddb0) phob_pre_status_pane_t1

0x9dec,	// (0x0007ddc0) phob_pre_status_pane_t2

0x9dfc,	// (0x0007ddd0) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000835c0) phob_pre_status_pane_t

0x1ae6,	// (0x00075aba) bg_list_pane_cp05

0x7a58,	// (0x0007ba2c) grid_vorec_pane

0x7a62,	// (0x0007ba36) vorec_t1

0x7a70,	// (0x0007ba44) vorec_t2

0x7a7e,	// (0x0007ba52) vorec_t3

0x7a8c,	// (0x0007ba60) vorec_t4

0xec9c,	// (0x00082c70) vorec_t5

0xecaa,	// (0x00082c7e) vorec_t6

0x0004,

0xf1ff,	// (0x000831d3) vorec_t

0xecb8,	// (0x00082c8c) wait_bar_pane_cp01

0x7aa8,	// (0x0007ba7c) cell_vorec_pane_ParamLimits

0x7aa8,	// (0x0007ba7c) cell_vorec_pane

0x7abb,	// (0x0007ba8f) cell_vorec_pane_g1

0x0cf8,	// (0x00074ccc) grid_highlight_pane_cp05

0x7ad5,	// (0x0007baa9) cams_zoom_pane

0x7ae1,	// (0x0007bab5) image_vga_pane

0x7af0,	// (0x0007bac4) main_camera_pane_g1

0x7afe,	// (0x0007bad2) main_camera_pane_g2

0x7b0a,	// (0x0007bade) main_camera_pane_g3

0x7b16,	// (0x0007baea) main_camera_pane_g4

0x7b22,	// (0x0007baf6) main_camera_pane_g5

0x7b2e,	// (0x0007bb02) main_camera_pane_g6

0x7b3a,	// (0x0007bb0e) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000831de) main_camera_pane_g

0x7b46,	// (0x0007bb1a) main_camera_pane_t1

0x7b58,	// (0x0007bb2c) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000831ef) main_camera_pane_t

0x7b79,	// (0x0007bb4d) cams_zoom_pane_cp_ParamLimits

0x7b79,	// (0x0007bb4d) cams_zoom_pane_cp

0x7b9d,	// (0x0007bb71) image_cif_pane_ParamLimits

0x7b9d,	// (0x0007bb71) image_cif_pane

0x7bbb,	// (0x0007bb8f) image_subqcif_pane

0x7bc3,	// (0x0007bb97) main_video_pane_g1_ParamLimits

0x7bc3,	// (0x0007bb97) main_video_pane_g1

0x7be3,	// (0x0007bbb7) main_video_pane_g2_ParamLimits

0x7be3,	// (0x0007bbb7) main_video_pane_g2

0x7c13,	// (0x0007bbe7) main_video_pane_g3_ParamLimits

0x7c13,	// (0x0007bbe7) main_video_pane_g3

0x7c3c,	// (0x0007bc10) main_video_pane_g4_ParamLimits

0x7c3c,	// (0x0007bc10) main_video_pane_g4

0x7c65,	// (0x0007bc39) main_video_pane_g5_ParamLimits

0x7c65,	// (0x0007bc39) main_video_pane_g5

0x1afa,	// (0x00075ace) main_video_pane_g6_ParamLimits

0x1afa,	// (0x00075ace) main_video_pane_g6

0x0006,

0xf220,	// (0x000831f4) main_video_pane_g_ParamLimits

0xf220,	// (0x000831f4) main_video_pane_g

0x7c87,	// (0x0007bc5b) main_video_pane_t1_ParamLimits

0x7c87,	// (0x0007bc5b) main_video_pane_t1

0x1b14,	// (0x00075ae8) cams_zoom_pane_g1

0x1b1d,	// (0x00075af1) cams_zoom_pane_g2

0x1b26,	// (0x00075afa) cams_zoom_pane_g3

0x1b2f,	// (0x00075b03) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00083203) cams_zoom_pane_g

0x7cd1,	// (0x0007bca5) grid_cams_pane

0x7cdf,	// (0x0007bcb3) linegrid_cams_pane

0x7ced,	// (0x0007bcc1) cell_cams_pane_ParamLimits

0x7ced,	// (0x0007bcc1) cell_cams_pane

0x1b38,	// (0x00075b0c) cams_burst_image_pane

0x1b40,	// (0x00075b14) cell_cams_pane_g1

0x0cf8,	// (0x00074ccc) grid_highlight_pane_cp03

0x143d,	// (0x00075411) mp_bg_pane_g1

0x0cf8,	// (0x00074ccc) bg_list_pane_cp03

0x386f,	// (0x00077843) bg_mp_pane

0x3877,	// (0x0007784b) grid_mp_pane

0x387f,	// (0x00077853) media_player_g1

0x3887,	// (0x0007785b) media_player_t1

0x3895,	// (0x00077869) media_player_t2

0x38a3,	// (0x00077877) media_player_t3

0x38b1,	// (0x00077885) media_player_t4

0x38bf,	// (0x00077893) media_player_t5

0x38cd,	// (0x000778a1) media_player_t6

0x38db,	// (0x000778af) media_player_t7

0x0006,

0xf5cb,	// (0x0008359f) media_player_t

0x38e9,	// (0x000778bd) wait_bar_pane_cp02

0xf5b0,	// (0x00083584) main_usb_pane_t

0x9dab,	// (0x0007dd7f) cell_mp_pane

0x143d,	// (0x00075411) cell_mp_pane_g1

0x0cf8,	// (0x00074ccc) grid_highlight_pane_cp06

0x1b48,	// (0x00075b1c) grid_skin_colour_pane

0x1b50,	// (0x00075b24) list_highlight_pane_cp03

0x7d18,	// (0x0007bcec) skin_g1

0x1b58,	// (0x00075b2c) skin_t1

0x1b67,	// (0x00075b3b) skin_t2

0x0001,

0xf264,	// (0x00083238) skin_t

0x7d22,	// (0x0007bcf6) cell_skin_colour_pane_ParamLimits

0x7d22,	// (0x0007bcf6) cell_skin_colour_pane

0x1b75,	// (0x00075b49) cell_skin_colour_pane_g1

0x7da6,	// (0x0007bd7a) call_video_g1_ParamLimits

0x7da6,	// (0x0007bd7a) call_video_g1

0x7db6,	// (0x0007bd8a) call_video_g2_ParamLimits

0x7db6,	// (0x0007bd8a) call_video_g2

0x0001,

0xf269,	// (0x0008323d) call_video_g_ParamLimits

0xf269,	// (0x0008323d) call_video_g

0x7e10,	// (0x0007bde4) call_video_uplink_pane_cp1_ParamLimits

0x7e10,	// (0x0007bde4) call_video_uplink_pane_cp1

0x1b87,	// (0x00075b5b) call_video_uplink_pane_cp2

0x7edc,	// (0x0007beb0) video_down_crop_pane_ParamLimits

0x7edc,	// (0x0007beb0) video_down_crop_pane

0x7fda,	// (0x0007bfae) video_down_pane_ParamLimits

0x7fda,	// (0x0007bfae) video_down_pane

0x1b8f,	// (0x00075b63) video_down_subqcif_pane_ParamLimits

0x1b8f,	// (0x00075b63) video_down_subqcif_pane

0x1ba7,	// (0x00075b7b) video_down_subqcif_pane_cp_ParamLimits

0x1ba7,	// (0x00075b7b) video_down_subqcif_pane_cp

0x1bcd,	// (0x00075ba1) im_reading_pane_ParamLimits

0x1bcd,	// (0x00075ba1) im_reading_pane

0x80fa,	// (0x0007c0ce) im_writing_pane_ParamLimits

0x80fa,	// (0x0007c0ce) im_writing_pane

0x8118,	// (0x0007c0ec) im_reading_pane_t1

0x1be7,	// (0x00075bbb) list_im_pane

0x1bf8,	// (0x00075bcc) scroll_pane_cp07

0x816c,	// (0x0007c140) im_writing_pane_t1_ParamLimits

0x816c,	// (0x0007c140) im_writing_pane_t1

0x1c11,	// (0x00075be5) im_writing_pane_t2_ParamLimits

0x1c11,	// (0x00075be5) im_writing_pane_t2

0x0001,

0xf273,	// (0x00083247) im_writing_pane_t_ParamLimits

0xf273,	// (0x00083247) im_writing_pane_t

0x0cf8,	// (0x00074ccc) input_focus_pane_cp04

0x0cf8,	// (0x00074ccc) input_focus_pane_cp05

0x8181,	// (0x0007c155) list_im_single_pane_ParamLimits

0x8181,	// (0x0007c155) list_im_single_pane

0x81a5,	// (0x0007c179) list_single_im_pane_t1

0x9d6f,	// (0x0007dd43) blid_accuracy_pane

0x9d77,	// (0x0007dd4b) blid_compass_pane

0x9d81,	// (0x0007dd55) main_location_t1

0x9d8f,	// (0x0007dd63) main_location_t2

0x9d9d,	// (0x0007dd71) main_location_t3

0x0002,

0xf5da,	// (0x000835ae) main_location_t

0x0cf8,	// (0x00074ccc) aid_levels_location

0x143d,	// (0x00075411) blid_accuracy_pane_g1

0x143d,	// (0x00075411) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000832a9) blid_accuracy_pane_g

0x1c59,	// (0x00075c2d) wml_content_pane

0x1c97,	// (0x00075c6b) wml_button_pane_ParamLimits

0x1c97,	// (0x00075c6b) wml_button_pane

0x81b4,	// (0x0007c188) wml_list_single_large_pane_ParamLimits

0x81b4,	// (0x0007c188) wml_list_single_large_pane

0x81de,	// (0x0007c1b2) wml_list_single_medium_pane_ParamLimits

0x81de,	// (0x0007c1b2) wml_list_single_medium_pane

0x820f,	// (0x0007c1e3) wml_list_single_small_pane_ParamLimits

0x820f,	// (0x0007c1e3) wml_list_single_small_pane

0x1cab,	// (0x00075c7f) wml_selection_box_pane_ParamLimits

0x1cab,	// (0x00075c7f) wml_selection_box_pane

0x1cbe,	// (0x00075c92) wml_list_single_pane_t1

0x1ccd,	// (0x00075ca1) wml_list_single_medium_pane_t1

0x1cdc,	// (0x00075cb0) wml_list_single_large_pane_t1

0x1ceb,	// (0x00075cbf) input_focus_pane_cp02_ParamLimits

0x1ceb,	// (0x00075cbf) input_focus_pane_cp02

0x1cfe,	// (0x00075cd2) wml_selection_box_pane_g1

0x1d07,	// (0x00075cdb) wml_selection_box_pane_t1_ParamLimits

0x1d07,	// (0x00075cdb) wml_selection_box_pane_t1

0x1323,	// (0x000752f7) bg_wml_button_pane_ParamLimits

0x1323,	// (0x000752f7) bg_wml_button_pane

0x1d1f,	// (0x00075cf3) wml_button_pane_g1

0x1d27,	// (0x00075cfb) wml_button_pane_t1

0x1d1f,	// (0x00075cf3) wml_button_bg_pane_g1

0x1d37,	// (0x00075d0b) wml_button_bg_pane_g2

0x1d3f,	// (0x00075d13) wml_button_bg_pane_g3

0x1d47,	// (0x00075d1b) wml_button_bg_pane_g4

0x1d4f,	// (0x00075d23) wml_button_bg_pane_g5

0x1d57,	// (0x00075d2b) wml_button_bg_pane_g6

0x1d5f,	// (0x00075d33) wml_button_bg_pane_g7

0x1d67,	// (0x00075d3b) wml_button_bg_pane_g8

0x1d6f,	// (0x00075d43) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0008324c) wml_button_bg_pane_g

0x8249,	// (0x0007c21d) bg_list_pane_cp02

0x1d77,	// (0x00075d4b) mce_header_pane_ParamLimits

0x1d77,	// (0x00075d4b) mce_header_pane

0x1d8d,	// (0x00075d61) mce_icon_pane

0x1d8d,	// (0x00075d61) mce_image_pane

0x1d96,	// (0x00075d6a) mce_text_pane_ParamLimits

0x1d96,	// (0x00075d6a) mce_text_pane

0x8253,	// (0x0007c227) scroll_pane_cp03

0x1c8f,	// (0x00075c63) scroll_pane_cp04

0x1da9,	// (0x00075d7d) scroll_pane_cp05_ParamLimits

0x1da9,	// (0x00075d7d) scroll_pane_cp05

0x825d,	// (0x0007c231) mce_header_field_pane_ParamLimits

0x825d,	// (0x0007c231) mce_header_field_pane

0x827d,	// (0x0007c251) mce_header_field_pane_2_ParamLimits

0x827d,	// (0x0007c251) mce_header_field_pane_2

0x8293,	// (0x0007c267) mce_header_field_pane_3

0x829b,	// (0x0007c26f) list_single_mce_message_pane_ParamLimits

0x829b,	// (0x0007c26f) list_single_mce_message_pane

0x82c6,	// (0x0007c29a) list_single_mce_smart_pane_ParamLimits

0x82c6,	// (0x0007c29a) list_single_mce_smart_pane

0x1db5,	// (0x00075d89) input_focus_pane_cp03

0x1dbe,	// (0x00075d92) list_header_data_pane

0x82fc,	// (0x0007c2d0) mce_header_field_pane_t1

0x830a,	// (0x0007c2de) list_single_mce_header_pane_ParamLimits

0x830a,	// (0x0007c2de) list_single_mce_header_pane

0x1dc6,	// (0x00075d9a) list_single_mce_header_pane_t1

0x1dd5,	// (0x00075da9) list_single_mce_message_pane_g1

0x1ddd,	// (0x00075db1) list_single_mce_message_pane_t1

0x835c,	// (0x0007c330) bg_cale_heading_pane_cp01_ParamLimits

0x835c,	// (0x0007c330) bg_cale_heading_pane_cp01

0x1deb,	// (0x00075dbf) bg_cale_pane_cp02_ParamLimits

0x1deb,	// (0x00075dbf) bg_cale_pane_cp02

0x83aa,	// (0x0007c37e) cale_month_corner_pane

0x83c9,	// (0x0007c39d) cale_month_day_heading_pane_ParamLimits

0x83c9,	// (0x0007c39d) cale_month_day_heading_pane

0x842f,	// (0x0007c403) cale_month_pane_g1_ParamLimits

0x842f,	// (0x0007c403) cale_month_pane_g1

0x8472,	// (0x0007c446) cale_month_pane_g2_ParamLimits

0x8472,	// (0x0007c446) cale_month_pane_g2

0x84aa,	// (0x0007c47e) cale_month_pane_g3_ParamLimits

0x84aa,	// (0x0007c47e) cale_month_pane_g3

0x84f6,	// (0x0007c4ca) cale_month_pane_g4_ParamLimits

0x84f6,	// (0x0007c4ca) cale_month_pane_g4

0x8542,	// (0x0007c516) cale_month_pane_g5_ParamLimits

0x8542,	// (0x0007c516) cale_month_pane_g5

0x858e,	// (0x0007c562) cale_month_pane_g6_ParamLimits

0x858e,	// (0x0007c562) cale_month_pane_g6

0x85da,	// (0x0007c5ae) cale_month_pane_g7_ParamLimits

0x85da,	// (0x0007c5ae) cale_month_pane_g7

0x863e,	// (0x0007c612) cale_month_pane_g8_ParamLimits

0x863e,	// (0x0007c612) cale_month_pane_g8

0x86a2,	// (0x0007c676) cale_month_pane_g9_ParamLimits

0x86a2,	// (0x0007c676) cale_month_pane_g9

0x8700,	// (0x0007c6d4) cale_month_pane_g10_ParamLimits

0x8700,	// (0x0007c6d4) cale_month_pane_g10

0x875c,	// (0x0007c730) cale_month_pane_g11_ParamLimits

0x875c,	// (0x0007c730) cale_month_pane_g11

0x87b0,	// (0x0007c784) cale_month_pane_g12_ParamLimits

0x87b0,	// (0x0007c784) cale_month_pane_g12

0x8806,	// (0x0007c7da) cale_month_pane_g13_ParamLimits

0x8806,	// (0x0007c7da) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0008325f) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0008325f) cale_month_pane_g

0x885c,	// (0x0007c830) cale_month_week_pane

0x8880,	// (0x0007c854) grid_cale_month_pane_ParamLimits

0x8880,	// (0x0007c854) grid_cale_month_pane

0x88d9,	// (0x0007c8ad) cale_month_day_heading_pane_t1

0x895f,	// (0x0007c933) cale_month_day_heading_pane_t2

0x89d8,	// (0x0007c9ac) cale_month_day_heading_pane_t3

0x8a51,	// (0x0007ca25) cale_month_day_heading_pane_t4

0x8aca,	// (0x0007ca9e) cale_month_day_heading_pane_t5

0x8b43,	// (0x0007cb17) cale_month_day_heading_pane_t6

0x8bbc,	// (0x0007cb90) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0008327a) cale_month_day_heading_pane_t

0x1a8b,	// (0x00075a5f) bg_cale_side_pane_cp01

0x8c4d,	// (0x0007cc21) cale_month_week_pane_t1

0x8c66,	// (0x0007cc3a) cale_month_week_pane_t2

0x8c7f,	// (0x0007cc53) cale_month_week_pane_t3

0x8c98,	// (0x0007cc6c) cale_month_week_pane_t4

0x8cb1,	// (0x0007cc85) cale_month_week_pane_t5

0x8cd2,	// (0x0007cca6) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x00083289) cale_month_week_pane_t

0x8cf3,	// (0x0007ccc7) cell_cale_month_pane_ParamLimits

0x8cf3,	// (0x0007ccc7) cell_cale_month_pane

0x8e15,	// (0x0007cde9) cell_cale_month_pane_g1

0x8e21,	// (0x0007cdf5) cell_cale_month_pane_t1_ParamLimits

0x8e21,	// (0x0007cdf5) cell_cale_month_pane_t1

0x1a99,	// (0x00075a6d) grid_highlight_pane_cp08

0x143d,	// (0x00075411) main_smil_g1

0x8e4d,	// (0x0007ce21) smil_status_pane

0x1e2a,	// (0x00075dfe) smil_text_pane

0x378f,	// (0x00077763) bg_popup_call3_rect_pane_g8

0x3797,	// (0x0007776b) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00083542) bg_popup_call3_rect_pane_g

0x39f1,	// (0x000779c5) smil_status_volume_pane_g1

0x1e34,	// (0x00075e08) smil_status_pane_t1

0xa199,	// (0x0007e16d) volume_smil_pane

0x1e4b,	// (0x00075e1f) list_smil_text_pane

0x8e60,	// (0x0007ce34) scroll_pane_cp011

0x8e6b,	// (0x0007ce3f) smil_text_list_pane_t1_ParamLimits

0x8e6b,	// (0x0007ce3f) smil_text_list_pane_t1

0x8ee3,	// (0x0007ceb7) aid_volume_smil_ParamLimits

0x8ee3,	// (0x0007ceb7) aid_volume_smil

0x143d,	// (0x00075411) smil_volume_pane_g1

0x143d,	// (0x00075411) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000832a9) smil_volume_pane_g

0x75dc,	// (0x0007b5b0) listscroll_cale_day_pane

0x1e55,	// (0x00075e29) bg_cale_pane

0x1e6d,	// (0x00075e41) list_cale_pane

0x1e90,	// (0x00075e64) scroll_pane_cp09

0x1ea1,	// (0x00075e75) cale_bg_pane_g1

0x1ea9,	// (0x00075e7d) cale_bg_pane_g2

0x1eb1,	// (0x00075e85) cale_bg_pane_g3

0x1eb9,	// (0x00075e8d) cale_bg_pane_g4

0x1ec1,	// (0x00075e95) cale_bg_pane_g5

0x1ec9,	// (0x00075e9d) cale_bg_pane_g6

0x1ed1,	// (0x00075ea5) cale_bg_pane_g7

0x1ed9,	// (0x00075ead) cale_bg_pane_g8

0x1ee1,	// (0x00075eb5) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000832ae) cale_bg_pane_g

0x8f0d,	// (0x0007cee1) list_cale_time_pane_ParamLimits

0x8f0d,	// (0x0007cee1) list_cale_time_pane

0x1ee9,	// (0x00075ebd) list_cale_time_pane_g1_ParamLimits

0x1ee9,	// (0x00075ebd) list_cale_time_pane_g1

0x1ef5,	// (0x00075ec9) list_cale_time_pane_g2_ParamLimits

0x1ef5,	// (0x00075ec9) list_cale_time_pane_g2

0x8f2f,	// (0x0007cf03) list_cale_time_pane_g3_ParamLimits

0x8f2f,	// (0x0007cf03) list_cale_time_pane_g3

0x8f3d,	// (0x0007cf11) list_cale_time_pane_g4_ParamLimits

0x8f3d,	// (0x0007cf11) list_cale_time_pane_g4

0x8f4b,	// (0x0007cf1f) list_cale_time_pane_g5_ParamLimits

0x8f4b,	// (0x0007cf1f) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000832c1) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000832c1) list_cale_time_pane_g

0x1f0f,	// (0x00075ee3) list_cale_time_pane_t1_ParamLimits

0x1f0f,	// (0x00075ee3) list_cale_time_pane_t1

0x1f37,	// (0x00075f0b) list_cale_time_pane_t2_ParamLimits

0x1f37,	// (0x00075f0b) list_cale_time_pane_t2

0x9212,	// (0x0007d1e6) aid_blid_cardinal_pane

0x9254,	// (0x0007d228) compass_pane_t4

0x1f5f,	// (0x00075f33) list_cale_time_pane_t4_ParamLimits

0x1f5f,	// (0x00075f33) list_cale_time_pane_t4

0x9262,	// (0x0007d236) compass_pane_t5

0x9272,	// (0x0007d246) compass_pane_t6

0x9280,	// (0x0007d254) compass_pane_t7

0x240e,	// (0x000763e2) navi_pane_cc_t1

0x25eb,	// (0x000765bf) aid_phob_thumbnail_center_pane

0x9875,	// (0x0007d849) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000832ce) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000832ce) list_cale_time_pane_t

0x094f,	// (0x00074923) bg_popup_window_pane_cp02_ParamLimits

0x094f,	// (0x00074923) bg_popup_window_pane_cp02

0x1f87,	// (0x00075f5b) heading_pane_cp01_ParamLimits

0x1f87,	// (0x00075f5b) heading_pane_cp01

0x1f93,	// (0x00075f67) loc_req_pane_ParamLimits

0x1f93,	// (0x00075f67) loc_req_pane

0x1fa3,	// (0x00075f77) loc_type_pane_ParamLimits

0x1fa3,	// (0x00075f77) loc_type_pane

0x1fb5,	// (0x00075f89) loc_type_pane_t1_ParamLimits

0x1fb5,	// (0x00075f89) loc_type_pane_t1

0x1fc7,	// (0x00075f9b) loc_type_pane_t2_ParamLimits

0x1fc7,	// (0x00075f9b) loc_type_pane_t2

0x1fd9,	// (0x00075fad) loc_type_pane_t3_ParamLimits

0x1fd9,	// (0x00075fad) loc_type_pane_t3

0x0002,

0xf301,	// (0x000832d5) loc_type_pane_t_ParamLimits

0xf301,	// (0x000832d5) loc_type_pane_t

0x1feb,	// (0x00075fbf) list_loc_req_pane

0x1ff5,	// (0x00075fc9) scroll_pane_cp012

0x8f59,	// (0x0007cf2d) list_single_loc_request_popup_menu_pane_ParamLimits

0x8f59,	// (0x0007cf2d) list_single_loc_request_popup_menu_pane

0x2000,	// (0x00075fd4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2000,	// (0x00075fd4) list_single_loc_request_popup_menu_pane_g1

0x200c,	// (0x00075fe0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x200c,	// (0x00075fe0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000832dc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000832dc) list_single_loc_request_popup_menu_pane_g

0x2018,	// (0x00075fec) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2018,	// (0x00075fec) list_single_loc_request_popup_menu_pane_t1

0x8f6b,	// (0x0007cf3f) bg_popup_window_pane_cp03_ParamLimits

0x8f6b,	// (0x0007cf3f) bg_popup_window_pane_cp03

0x8f79,	// (0x0007cf4d) heading_loc_req_pane_ParamLimits

0x8f79,	// (0x0007cf4d) heading_loc_req_pane

0x8f85,	// (0x0007cf59) popup_dyc_status_message_window_g1_ParamLimits

0x8f85,	// (0x0007cf59) popup_dyc_status_message_window_g1

0x8f91,	// (0x0007cf65) popup_dyc_status_message_window_t1_ParamLimits

0x8f91,	// (0x0007cf65) popup_dyc_status_message_window_t1

0x8fa3,	// (0x0007cf77) popup_dyc_status_message_window_t2_ParamLimits

0x8fa3,	// (0x0007cf77) popup_dyc_status_message_window_t2

0x8fb5,	// (0x0007cf89) popup_dyc_status_message_window_t3_ParamLimits

0x8fb5,	// (0x0007cf89) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000832e1) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000832e1) popup_dyc_status_message_window_t

0x0cf8,	// (0x00074ccc) bg_heading_pane_cp01

0x203a,	// (0x0007600e) heading_loc_req_pane_g1

0x2042,	// (0x00076016) heading_loc_req_pane_g2

0x204a,	// (0x0007601e) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000832e8) heading_loc_req_pane_g

0x2052,	// (0x00076026) heading_loc_req_pane_t1

0x2061,	// (0x00076035) bg_popup_sub_pane_cp01_ParamLimits

0x2061,	// (0x00076035) bg_popup_sub_pane_cp01

0x206f,	// (0x00076043) popup_cale_events_window_g1_ParamLimits

0x206f,	// (0x00076043) popup_cale_events_window_g1

0x208f,	// (0x00076063) popup_cale_events_window_g2_ParamLimits

0x208f,	// (0x00076063) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0008331c) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0008331c) popup_cale_events_window_g

0x20af,	// (0x00076083) popup_cale_events_window_t1_ParamLimits

0x20af,	// (0x00076083) popup_cale_events_window_t1

0x20c1,	// (0x00076095) popup_cale_events_window_t2_ParamLimits

0x20c1,	// (0x00076095) popup_cale_events_window_t2

0x20ff,	// (0x000760d3) popup_cale_events_window_t3_ParamLimits

0x20ff,	// (0x000760d3) popup_cale_events_window_t3

0x2139,	// (0x0007610d) popup_cale_events_window_t4_ParamLimits

0x2139,	// (0x0007610d) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00083321) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00083321) popup_cale_events_window_t

0x8fdf,	// (0x0007cfb3) call_type_pane

0x2603,	// (0x000765d7) popup_call_status_window_g1

0x8feb,	// (0x0007cfbf) popup_call_status_window_g2

0x8ff7,	// (0x0007cfcb) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0008332a) popup_call_status_window_g

0x216f,	// (0x00076143) call_type_pane_g1

0x2178,	// (0x0007614c) call_type_pane_g2

0x0001,

0xf35d,	// (0x00083331) call_type_pane_g

0x0cf8,	// (0x00074ccc) bg_popup_sub_pane_cp02

0x2181,	// (0x00076155) listscroll_popup_wml_pane

0x2189,	// (0x0007615d) list_wml_pane

0x2193,	// (0x00076167) scroll_pane_cp013

0x219e,	// (0x00076172) list_single_graphic_popup_wml_pane_ParamLimits

0x219e,	// (0x00076172) list_single_graphic_popup_wml_pane

0x143d,	// (0x00075411) list_single_graphic_popup_wml_pane_g1

0x21b2,	// (0x00076186) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00083336) list_single_graphic_popup_wml_pane_g

0x21ba,	// (0x0007618e) list_single_graphic_popup_wml_pane_t1

0x21c8,	// (0x0007619c) aid_call_pane

0x131b,	// (0x000752ef) popup_clock_analogue_window_g1

0x131b,	// (0x000752ef) popup_clock_analogue_window_g2

0x9003,	// (0x0007cfd7) popup_clock_analogue_window_g3

0x9003,	// (0x0007cfd7) popup_clock_analogue_window_g4

0x143d,	// (0x00075411) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0008333b) popup_clock_analogue_window_g

0x900b,	// (0x0007cfdf) popup_clock_analogue_window_t1

0x9019,	// (0x0007cfed) clock_digital_number_pane_ParamLimits

0x9019,	// (0x0007cfed) clock_digital_number_pane

0x9025,	// (0x0007cff9) clock_digital_number_pane_cp02_ParamLimits

0x9025,	// (0x0007cff9) clock_digital_number_pane_cp02

0x9031,	// (0x0007d005) clock_digital_number_pane_cp03_ParamLimits

0x9031,	// (0x0007d005) clock_digital_number_pane_cp03

0x903d,	// (0x0007d011) clock_digital_number_pane_cp04_ParamLimits

0x903d,	// (0x0007d011) clock_digital_number_pane_cp04

0x904d,	// (0x0007d021) clock_digital_separator_pane_ParamLimits

0x904d,	// (0x0007d021) clock_digital_separator_pane

0x9059,	// (0x0007d02d) popup_clock_digital_window_t1

0x143d,	// (0x00075411) clock_digital_number_pane_g1

0x143d,	// (0x00075411) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000832a9) clock_digital_number_pane_g

0x143d,	// (0x00075411) clock_digital_separator_pane_g1

0x143d,	// (0x00075411) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000832a9) clock_digital_separator_pane_g

0x0cf8,	// (0x00074ccc) bg_popup_window_pane_cp04

0x21d8,	// (0x000761ac) heading_pane_cp03

0x21e0,	// (0x000761b4) listscroll_popup_gms_pane

0x21e8,	// (0x000761bc) grid_large_graphic_popup_pane

0x21f2,	// (0x000761c6) listscroll_popup_gms_pane_g1

0x21fa,	// (0x000761ce) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00083346) listscroll_popup_gms_pane_g

0x1c8f,	// (0x00075c63) scroll_pane_cp014

0x9076,	// (0x0007d04a) cell_large_graphic_popup_pane_ParamLimits

0x9076,	// (0x0007d04a) cell_large_graphic_popup_pane

0x908e,	// (0x0007d062) cell_large_graphic_popup_pane_g1_ParamLimits

0x908e,	// (0x0007d062) cell_large_graphic_popup_pane_g1

0x2202,	// (0x000761d6) cell_large_graphic_popup_pane_g2_ParamLimits

0x2202,	// (0x000761d6) cell_large_graphic_popup_pane_g2

0x220e,	// (0x000761e2) cell_large_graphic_popup_pane_g3_ParamLimits

0x220e,	// (0x000761e2) cell_large_graphic_popup_pane_g3

0x221b,	// (0x000761ef) cell_large_graphic_popup_pane_g4_ParamLimits

0x221b,	// (0x000761ef) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0008334b) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0008334b) cell_large_graphic_popup_pane_g

0x222b,	// (0x000761ff) grid_highlight_pane_cp010

0x143d,	// (0x00075411) bg_popup_call_pane_g1

0x2235,	// (0x00076209) list_single_graphic_popup_conf_pane_ParamLimits

0x2235,	// (0x00076209) list_single_graphic_popup_conf_pane

0x2248,	// (0x0007621c) list_highlight_pane_cp01

0x2251,	// (0x00076225) list_single_graphic_popup_conf_pane_g1

0x2259,	// (0x0007622d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00083354) list_single_graphic_popup_conf_pane_g

0x2261,	// (0x00076235) list_single_graphic_popup_conf_pane_t1

0x226f,	// (0x00076243) linegrid_cams_pane_g1

0x909a,	// (0x0007d06e) linegrid_cams_pane_g2

0x1acc,	// (0x00075aa0) linegrid_cams_pane_g3

0x2278,	// (0x0007624c) linegrid_cams_pane_g4

0x90a3,	// (0x0007d077) linegrid_cams_pane_g5

0x90ac,	// (0x0007d080) linegrid_cams_pane_g6

0x1ad5,	// (0x00075aa9) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00083359) linegrid_cams_pane_g

0x2281,	// (0x00076255) popup_clock_analogue_window

0x2281,	// (0x00076255) popup_clock_digital_window

0x0cf8,	// (0x00074ccc) popup_phob_thumbnail_window

0x143d,	// (0x00075411) call_video_uplink_pane_g1

0x228a,	// (0x0007625e) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x00083368) call_video_uplink_pane_g

0x2292,	// (0x00076266) video_uplink_pane

0x229a,	// (0x0007626e) mce_image_pane_g1

0x90b5,	// (0x0007d089) mce_image_pane_g2

0x90bf,	// (0x0007d093) mce_image_pane_g3

0x90c7,	// (0x0007d09b) mce_image_pane_g4

0x90cf,	// (0x0007d0a3) mce_image_pane_g5

0x0004,

0xf399,	// (0x0008336d) mce_image_pane_g

0x22a4,	// (0x00076278) control_top_pane_stacon_cp01_ParamLimits

0x22a4,	// (0x00076278) control_top_pane_stacon_cp01

0x22b8,	// (0x0007628c) uni_indicator_pane_stacon_cp01_ParamLimits

0x22b8,	// (0x0007628c) uni_indicator_pane_stacon_cp01

0x22c9,	// (0x0007629d) bg_popup_sub_pane_cp03

0x22d3,	// (0x000762a7) chi_dic_find_pane

0x90d7,	// (0x0007d0ab) listscroll_chi_dic_pane

0x22db,	// (0x000762af) main_pane_chidic_g1

0x22e3,	// (0x000762b7) chi_dic_find_pane_t1

0x22f1,	// (0x000762c5) find_chidic_pane

0x22fa,	// (0x000762ce) chi_dic_list_pane_ParamLimits

0x22fa,	// (0x000762ce) chi_dic_list_pane

0x230b,	// (0x000762df) scroll_pane_cp020

0x2313,	// (0x000762e7) find_chidic_pane_t1

0x0cf8,	// (0x00074ccc) input_focus_pane_cp06

0x90eb,	// (0x0007d0bf) list_chi_dic_pane_ParamLimits

0x90eb,	// (0x0007d0bf) list_chi_dic_pane

0x9105,	// (0x0007d0d9) list_chi_dic_pane_t1_ParamLimits

0x9105,	// (0x0007d0d9) list_chi_dic_pane_t1

0x0cf8,	// (0x00074ccc) list_highlight_pane_cp020

0x2322,	// (0x000762f6) bg_cale_heading_pane_g1

0x9118,	// (0x0007d0ec) bg_cale_heading_pane_g2

0x9120,	// (0x0007d0f4) bg_cale_heading_pane_g3

0x9128,	// (0x0007d0fc) bg_cale_heading_pane_g4

0x9132,	// (0x0007d106) bg_cale_heading_pane_g5

0x913c,	// (0x0007d110) bg_cale_heading_pane_g6

0x9144,	// (0x0007d118) bg_cale_heading_pane_g7

0x914c,	// (0x0007d120) bg_cale_heading_pane_g8

0x9156,	// (0x0007d12a) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x00083378) bg_cale_heading_pane_g

0x2322,	// (0x000762f6) bg_cale_side_pane_g1

0x9160,	// (0x0007d134) bg_cale_side_pane_g2

0x916a,	// (0x0007d13e) bg_cale_side_pane_g3

0x9174,	// (0x0007d148) bg_cale_side_pane_g4

0x917e,	// (0x0007d152) bg_cale_side_pane_g5

0x9188,	// (0x0007d15c) bg_cale_side_pane_g6

0x9192,	// (0x0007d166) bg_cale_side_pane_g7

0x919c,	// (0x0007d170) bg_cale_side_pane_g8

0x91a4,	// (0x0007d178) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0008338b) bg_cale_side_pane_g

0x91ac,	// (0x0007d180) popup_call_status_window_ParamLimits

0x91ac,	// (0x0007d180) popup_call_status_window

0x232a,	// (0x000762fe) stacon_top_pane

0x2332,	// (0x00076306) status_pane_ParamLimits

0x2332,	// (0x00076306) status_pane

0x2347,	// (0x0007631b) status_small_pane

0x234f,	// (0x00076323) control_pane

0x0cf8,	// (0x00074ccc) stacon_bottom_pane

0x2357,	// (0x0007632b) list_single_mce_smart_pane_t1_ParamLimits

0x2357,	// (0x0007632b) list_single_mce_smart_pane_t1

0x236a,	// (0x0007633e) list_single_mce_smart_pane_t2_ParamLimits

0x236a,	// (0x0007633e) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0008339e) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0008339e) list_single_mce_smart_pane_t

0x91b8,	// (0x0007d18c) compass_pane

0x91c4,	// (0x0007d198) main_location2_pane_t1

0x91d8,	// (0x0007d1ac) main_location2_pane_t2

0x91ec,	// (0x0007d1c0) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000833a3) main_location2_pane_t

0x2389,	// (0x0007635d) compass_pane_g1_ParamLimits

0x2389,	// (0x0007635d) compass_pane_g1

0x9236,	// (0x0007d20a) compass_pane_t1

0x9245,	// (0x0007d219) compass_pane_t2

0x0005,

0xf3d8,	// (0x000833ac) compass_pane_t

0x9290,	// (0x0007d264) text_secondary_cp61

0x2405,	// (0x000763d9) navi_pane_cams_g5

0x2481,	// (0x00076455) navi_pane_im_t1

0x248f,	// (0x00076463) navi_pane_mp_g1_ParamLimits

0x248f,	// (0x00076463) navi_pane_mp_g1

0x24a3,	// (0x00076477) navi_pane_mp_g2_ParamLimits

0x24a3,	// (0x00076477) navi_pane_mp_g2

0x24af,	// (0x00076483) navi_pane_mp_g3_ParamLimits

0x24af,	// (0x00076483) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000833c0) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000833c0) navi_pane_mp_g

0x24bb,	// (0x0007648f) navi_pane_mp_t1

0x24c9,	// (0x0007649d) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000833c7) navi_pane_mp_t

0x2534,	// (0x00076508) navi_pane_vt_g1

0x24bb,	// (0x0007648f) navi_pane_vt_t1

0x253c,	// (0x00076510) navi_slider_pane

0x1ae6,	// (0x00075aba) zooming_pane

0x254c,	// (0x00076520) navi_slider_pane_g1

0x92cb,	// (0x0007d29f) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000833ce) navi_slider_pane_g

0x2570,	// (0x00076544) aid_levels_zoom

0x2578,	// (0x0007654c) zooming_pane_g1

0x2580,	// (0x00076554) zooming_pane_g2

0x2580,	// (0x00076554) zooming_pane_g3

0x0002,

0xf409,	// (0x000833dd) zooming_pane_g

0x2588,	// (0x0007655c) level_10_zoom

0x2591,	// (0x00076565) level_11_zoom

0x259a,	// (0x0007656e) level_1_zoom

0x25a3,	// (0x00076577) level_2_zoom

0x25ac,	// (0x00076580) level_3_zoom

0x25b5,	// (0x00076589) level_4_zoom

0x25be,	// (0x00076592) level_5_zoom

0x25c7,	// (0x0007659b) level_6_zoom

0x25d0,	// (0x000765a4) level_7_zoom

0x25d9,	// (0x000765ad) level_8_zoom

0x25e2,	// (0x000765b6) level_9_zoom

0x25f3,	// (0x000765c7) popup_phob_thumbnail_window_g1

0x25fb,	// (0x000765cf) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000833e4) popup_phob_thumbnail_window_g

0x38f1,	// (0x000778c5) level_1_location

0x38f9,	// (0x000778cd) level_2_location

0x3901,	// (0x000778d5) level_3_location

0x3909,	// (0x000778dd) level_4_location

0x1ae6,	// (0x00075aba) level_5_location

0x92dd,	// (0x0007d2b1) mce_icon_pane_g1

0x92e5,	// (0x0007d2b9) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000833e9) mce_icon_pane_g

0x92ed,	// (0x0007d2c1) main_mup_pane_g1_ParamLimits

0x92ed,	// (0x0007d2c1) main_mup_pane_g1

0x9305,	// (0x0007d2d9) main_mup_pane_g2_ParamLimits

0x9305,	// (0x0007d2d9) main_mup_pane_g2

0x9321,	// (0x0007d2f5) main_mup_pane_g3_ParamLimits

0x9321,	// (0x0007d2f5) main_mup_pane_g3

0x933d,	// (0x0007d311) main_mup_pane_g4_ParamLimits

0x933d,	// (0x0007d311) main_mup_pane_g4

0x9359,	// (0x0007d32d) main_mup_pane_g5_ParamLimits

0x9359,	// (0x0007d32d) main_mup_pane_g5

0x937a,	// (0x0007d34e) main_mup_pane_g6_ParamLimits

0x937a,	// (0x0007d34e) main_mup_pane_g6

0x9396,	// (0x0007d36a) main_mup_pane_g7_ParamLimits

0x9396,	// (0x0007d36a) main_mup_pane_g7

0x93b2,	// (0x0007d386) main_mup_pane_g8_ParamLimits

0x93b2,	// (0x0007d386) main_mup_pane_g8

0x93d2,	// (0x0007d3a6) main_mup_pane_g9_ParamLimits

0x93d2,	// (0x0007d3a6) main_mup_pane_g9

0x93f1,	// (0x0007d3c5) main_mup_pane_g10_ParamLimits

0x93f1,	// (0x0007d3c5) main_mup_pane_g10

0x9410,	// (0x0007d3e4) main_mup_pane_g11_ParamLimits

0x9410,	// (0x0007d3e4) main_mup_pane_g11

0x9428,	// (0x0007d3fc) main_mup_pane_g12_ParamLimits

0x9428,	// (0x0007d3fc) main_mup_pane_g12

0x9436,	// (0x0007d40a) main_mup_pane_g13_ParamLimits

0x9436,	// (0x0007d40a) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000833ee) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000833ee) main_mup_pane_g

0x944c,	// (0x0007d420) main_mup_pane_t1_ParamLimits

0x944c,	// (0x0007d420) main_mup_pane_t1

0x9469,	// (0x0007d43d) main_mup_pane_t2_ParamLimits

0x9469,	// (0x0007d43d) main_mup_pane_t2

0x9483,	// (0x0007d457) main_mup_pane_t3_ParamLimits

0x9483,	// (0x0007d457) main_mup_pane_t3

0x949d,	// (0x0007d471) main_mup_pane_t4_ParamLimits

0x949d,	// (0x0007d471) main_mup_pane_t4

0x94af,	// (0x0007d483) main_mup_pane_t5_ParamLimits

0x94af,	// (0x0007d483) main_mup_pane_t5

0x94c1,	// (0x0007d495) main_mup_pane_t6_ParamLimits

0x94c1,	// (0x0007d495) main_mup_pane_t6

0x0005,

0xf435,	// (0x00083409) main_mup_pane_t_ParamLimits

0xf435,	// (0x00083409) main_mup_pane_t

0x94d7,	// (0x0007d4ab) mup_progress_pane_ParamLimits

0x94d7,	// (0x0007d4ab) mup_progress_pane

0x94e3,	// (0x0007d4b7) mup_visualizer_pane_ParamLimits

0x94e3,	// (0x0007d4b7) mup_visualizer_pane

0x951d,	// (0x0007d4f1) mup_volume_pane_ParamLimits

0x951d,	// (0x0007d4f1) mup_volume_pane

0x2603,	// (0x000765d7) mup_visualizer_pane_g1_ParamLimits

0x2603,	// (0x000765d7) mup_visualizer_pane_g1

0x2603,	// (0x000765d7) mup_visualizer_pane_g2_ParamLimits

0x2603,	// (0x000765d7) mup_visualizer_pane_g2

0x2389,	// (0x0007635d) mup_visualizer_pane_g3_ParamLimits

0x2389,	// (0x0007635d) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00083416) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00083416) mup_visualizer_pane_g

0x143d,	// (0x00075411) mup_volume_pane_g1

0x2619,	// (0x000765ed) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0008341d) mup_volume_pane_g

0x143d,	// (0x00075411) mup_progress_pane_g1

0x2622,	// (0x000765f6) mup_progress_pane_g2

0x262b,	// (0x000765ff) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00083422) mup_progress_pane_g

0x0cf8,	// (0x00074ccc) bg_popup_window_pane_cp05

0x2634,	// (0x00076608) heading_pane_cp02_ParamLimits

0x2634,	// (0x00076608) heading_pane_cp02

0x264e,	// (0x00076622) list_popup_blid_pane

0x2656,	// (0x0007662a) list_blid_sat_info_pane_ParamLimits

0x2656,	// (0x0007662a) list_blid_sat_info_pane

0x2669,	// (0x0007663d) list_blid_sat_info_pane_g1

0x2671,	// (0x00076645) list_blid_sat_info_pane_t1

0x962a,	// (0x0007d5fe) mup_equalizer_pane_ParamLimits

0x962a,	// (0x0007d5fe) mup_equalizer_pane

0x964b,	// (0x0007d61f) mup_equalizer_pane_cp1_ParamLimits

0x964b,	// (0x0007d61f) mup_equalizer_pane_cp1

0x966c,	// (0x0007d640) mup_equalizer_pane_cp2_ParamLimits

0x966c,	// (0x0007d640) mup_equalizer_pane_cp2

0x968d,	// (0x0007d661) mup_equalizer_pane_cp3_ParamLimits

0x968d,	// (0x0007d661) mup_equalizer_pane_cp3

0x96ae,	// (0x0007d682) mup_equalizer_pane_cp4_ParamLimits

0x96ae,	// (0x0007d682) mup_equalizer_pane_cp4

0x96cf,	// (0x0007d6a3) mup_equalizer_pane_cp5

0x96e5,	// (0x0007d6b9) mup_equalizer_pane_cp6

0x96fd,	// (0x0007d6d1) mup_equalizer_pane_cp7

0x380f,	// (0x000777e3) bg_popup_call_poc_act_pane_g9

0x3817,	// (0x000777eb) bg_popup_call_poc_act_pane_g10

0x381f,	// (0x000777f3) bg_popup_call_poc_act_pane_g11

0x000a,

0x1323,	// (0x000752f7) mup_scale_pane

0x143d,	// (0x00075411) mup_scale_pane_g1

0x267f,	// (0x00076653) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0008343e) mup_scale_pane_g

0x26a3,	// (0x00076677) msg_data_pane

0x26ab,	// (0x0007667f) scroll_pane_cp017

0x5ce4,	// (0x00079cb8) bg_list_pane_cp04_ParamLimits

0x5ce4,	// (0x00079cb8) bg_list_pane_cp04

0x26b3,	// (0x00076687) msg_data_pane_g1

0x9727,	// (0x0007d6fb) msg_data_pane_g2

0x9731,	// (0x0007d705) msg_data_pane_g3

0x9739,	// (0x0007d70d) msg_data_pane_g4

0x9741,	// (0x0007d715) msg_data_pane_g5

0x9749,	// (0x0007d71d) msg_data_pane_g6

0x9751,	// (0x0007d725) msg_data_pane_g7

0x0006,

0xf479,	// (0x0008344d) msg_data_pane_g

0x5d0a,	// (0x00079cde) msg_text_pane_ParamLimits

0x5d0a,	// (0x00079cde) msg_text_pane

0x9759,	// (0x0007d72d) qrid_highlight_pane_cp011_ParamLimits

0x9759,	// (0x0007d72d) qrid_highlight_pane_cp011

0x0cf8,	// (0x00074ccc) msg_body_pane

0x0cf8,	// (0x00074ccc) msg_header_pane

0x26c4,	// (0x00076698) input_focus_pane_cp07

0x5d5d,	// (0x00079d31) msg_header_pane_t1_ParamLimits

0x5d5d,	// (0x00079d31) msg_header_pane_t1

0x5d6f,	// (0x00079d43) msg_header_pane_t2_ParamLimits

0x5d6f,	// (0x00079d43) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00083461) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00083461) msg_header_pane_t

0x26d9,	// (0x000766ad) msg_body_pane_g1

0x5d81,	// (0x00079d55) msg_body_pane_t1_ParamLimits

0x5d81,	// (0x00079d55) msg_body_pane_t1

0x5db2,	// (0x00079d86) msg_body_pane_t2_ParamLimits

0x5db2,	// (0x00079d86) msg_body_pane_t2

0x5dc4,	// (0x00079d98) msg_body_pane_t3_ParamLimits

0x5dc4,	// (0x00079d98) msg_body_pane_t3

0x0002,

0xf492,	// (0x00083466) msg_body_pane_t_ParamLimits

0xf492,	// (0x00083466) msg_body_pane_t

0x97c5,	// (0x0007d799) main_viewer_pane_g1_ParamLimits

0x97c5,	// (0x0007d799) main_viewer_pane_g1

0x97d1,	// (0x0007d7a5) main_viewer_pane_g2_ParamLimits

0x97d1,	// (0x0007d7a5) main_viewer_pane_g2

0x97dd,	// (0x0007d7b1) main_viewer_pane_g3_ParamLimits

0x97dd,	// (0x0007d7b1) main_viewer_pane_g3

0x97ee,	// (0x0007d7c2) main_viewer_pane_g4_ParamLimits

0x97ee,	// (0x0007d7c2) main_viewer_pane_g4

0x97ff,	// (0x0007d7d3) main_viewer_pane_g5_ParamLimits

0x97ff,	// (0x0007d7d3) main_viewer_pane_g5

0x97ff,	// (0x0007d7d3) main_viewer_pane_g7_ParamLimits

0x97ff,	// (0x0007d7d3) main_viewer_pane_g7

0x9811,	// (0x0007d7e5) main_viewer_pane_g8_ParamLimits

0x9811,	// (0x0007d7e5) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00083476) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00083476) main_viewer_pane_g

0x26e1,	// (0x000766b5) viewer_content_pane_ParamLimits

0x26e1,	// (0x000766b5) viewer_content_pane

0x9849,	// (0x0007d81d) main_postcard_pane_g1_ParamLimits

0x9849,	// (0x0007d81d) main_postcard_pane_g1

0x9857,	// (0x0007d82b) main_postcard_pane_g2_ParamLimits

0x9857,	// (0x0007d82b) main_postcard_pane_g2

0x9865,	// (0x0007d839) main_postcard_pane_g3_ParamLimits

0x9865,	// (0x0007d839) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00083487) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00083487) main_postcard_pane_g

0x9875,	// (0x0007d849) main_postcard_pane_g4

0x39de,	// (0x000779b2) smil_status_volume_pane_g2

0x98a1,	// (0x0007d875) postcard_pane_ParamLimits

0x98a1,	// (0x0007d875) postcard_pane

0x2603,	// (0x000765d7) postcard_pane_g1_ParamLimits

0x2603,	// (0x000765d7) postcard_pane_g1

0x98d3,	// (0x0007d8a7) postcard_pane_g2_ParamLimits

0x98d3,	// (0x0007d8a7) postcard_pane_g2

0x98df,	// (0x0007d8b3) postcard_pane_g3_ParamLimits

0x98df,	// (0x0007d8b3) postcard_pane_g3

0x26fd,	// (0x000766d1) postcard_pane_g4_ParamLimits

0x26fd,	// (0x000766d1) postcard_pane_g4

0x98eb,	// (0x0007d8bf) postcard_pane_g5_ParamLimits

0x98eb,	// (0x0007d8bf) postcard_pane_g5

0x98f7,	// (0x0007d8cb) postcard_pane_g6_ParamLimits

0x98f7,	// (0x0007d8cb) postcard_pane_g6

0x26ef,	// (0x000766c3) postcard_pane_g7_ParamLimits

0x26ef,	// (0x000766c3) postcard_pane_g7

0x0006,

0xf4c0,	// (0x00083494) postcard_pane_g_ParamLimits

0xf4c0,	// (0x00083494) postcard_pane_g

0x9903,	// (0x0007d8d7) main_mp2_pane_g1_ParamLimits

0x9903,	// (0x0007d8d7) main_mp2_pane_g1

0x990f,	// (0x0007d8e3) main_mp2_pane_g2_ParamLimits

0x990f,	// (0x0007d8e3) main_mp2_pane_g2

0x991b,	// (0x0007d8ef) main_mp2_pane_g3_ParamLimits

0x991b,	// (0x0007d8ef) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000834a3) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000834a3) main_mp2_pane_g

0x9927,	// (0x0007d8fb) main_mp2_pane_t1_ParamLimits

0x9927,	// (0x0007d8fb) main_mp2_pane_t1

0x993e,	// (0x0007d912) main_mp2_pane_t2_ParamLimits

0x993e,	// (0x0007d912) main_mp2_pane_t2

0x9952,	// (0x0007d926) main_mp2_pane_t3_ParamLimits

0x9952,	// (0x0007d926) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000834aa) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000834aa) main_mp2_pane_t

0x270b,	// (0x000766df) pec_content_pane_ParamLimits

0x270b,	// (0x000766df) pec_content_pane

0x1c8f,	// (0x00075c63) scroll_pane_cp015

0x271d,	// (0x000766f1) pec_attribute_pane_ParamLimits

0x271d,	// (0x000766f1) pec_attribute_pane

0x9964,	// (0x0007d938) pec_content_pane_g1_ParamLimits

0x9964,	// (0x0007d938) pec_content_pane_g1

0x272d,	// (0x00076701) pec_content_pane_t1_ParamLimits

0x272d,	// (0x00076701) pec_content_pane_t1

0x273f,	// (0x00076713) pec_content_pane_t2_ParamLimits

0x273f,	// (0x00076713) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000834b1) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000834b1) pec_content_pane_t

0x9970,	// (0x0007d944) list_single_graphic_pane_cp01_ParamLimits

0x9970,	// (0x0007d944) list_single_graphic_pane_cp01

0x1323,	// (0x000752f7) bg_popup_sub_pane_cp04

0x2751,	// (0x00076725) popup_mup_playback_window_g1

0x275d,	// (0x00076731) popup_mup_playback_window_t1

0x2772,	// (0x00076746) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000834b6) popup_mup_playback_window_t

0x27a9,	// (0x0007677d) main_image_pane_g1_ParamLimits

0x27a9,	// (0x0007677d) main_image_pane_g1

0x27ec,	// (0x000767c0) scroll_pane_cp018_ParamLimits

0x27ec,	// (0x000767c0) scroll_pane_cp018

0x2804,	// (0x000767d8) scroll_pane_cp016_ParamLimits

0x2804,	// (0x000767d8) scroll_pane_cp016

0x9a09,	// (0x0007d9dd) smil2_image_pane_ParamLimits

0x9a09,	// (0x0007d9dd) smil2_image_pane

0x9a39,	// (0x0007da0d) smil2_root_pane_ParamLimits

0x9a39,	// (0x0007da0d) smil2_root_pane

0x9a65,	// (0x0007da39) smil2_text_pane_ParamLimits

0x9a65,	// (0x0007da39) smil2_text_pane

0x0cf8,	// (0x00074ccc) bg_list_pane_cp06

0x2840,	// (0x00076814) grid_radio_pane

0x0cf8,	// (0x00074ccc) bg_popup_window_pane_cp06

0x2848,	// (0x0007681c) main_fmradio_pane_t1

0x21d8,	// (0x000761ac) heading_pane_cp04

0x2856,	// (0x0007682a) main_fmradio_pane_t2

0x3827,	// (0x000777fb) popup_cale_lunar_info_window_g1

0x2864,	// (0x00076838) main_fmradio_pane_t3

0x382f,	// (0x00077803) popup_cale_lunar_info_window_g2

0x2872,	// (0x00076846) main_fmradio_pane_t4

0x0001,

0x2880,	// (0x00076854) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x00083591) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000834cb) main_fmradio_pane_t

0x288e,	// (0x00076862) wait_bar_pane_cp03

0x2896,	// (0x0007686a) cell_fmradio_pane_ParamLimits

0x2896,	// (0x0007686a) cell_fmradio_pane

0x26ef,	// (0x000766c3) cell_fmradio_pane_g1_ParamLimits

0x26ef,	// (0x000766c3) cell_fmradio_pane_g1

0x0cf8,	// (0x00074ccc) grid_highlight_pane_cp011

0x28a9,	// (0x0007687d) poc_content_pane_ParamLimits

0x28a9,	// (0x0007687d) poc_content_pane

0x28bb,	// (0x0007688f) scroll_pane_cp019

0x9aa5,	// (0x0007da79) popup_call_poc_act_window_ParamLimits

0x9aa5,	// (0x0007da79) popup_call_poc_act_window

0x9ab2,	// (0x0007da86) popup_call_poc_inact_window_ParamLimits

0x9ab2,	// (0x0007da86) popup_call_poc_inact_window

0xf594,	// (0x00083568) bg_popup_call_poc_act_pane_g

0x379f,	// (0x00077773) bg_popup_call_poc_inact_pane_g1

0x37a7,	// (0x0007777b) bg_popup_call_poc_inact_pane_g2

0x28c3,	// (0x00076897) popup_call_poc_act_window_g2

0x37af,	// (0x00077783) bg_popup_call_poc_inact_pane_g3

0x37b7,	// (0x0007778b) bg_popup_call_poc_inact_pane_g4

0x37bf,	// (0x00077793) bg_popup_call_poc_inact_pane_g5

0x28cb,	// (0x0007689f) popup_call_poc_act_window_t1_ParamLimits

0x28cb,	// (0x0007689f) popup_call_poc_act_window_t1

0x28f3,	// (0x000768c7) popup_call_poc_act_window_t2_ParamLimits

0x28f3,	// (0x000768c7) popup_call_poc_act_window_t2

0x291b,	// (0x000768ef) popup_call_poc_act_window_t3_ParamLimits

0x291b,	// (0x000768ef) popup_call_poc_act_window_t3

0x2943,	// (0x00076917) popup_call_poc_act_window_t4_ParamLimits

0x2943,	// (0x00076917) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000834d6) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000834d6) popup_call_poc_act_window_t

0x37c7,	// (0x0007779b) bg_popup_call_poc_inact_pane_g6

0x37cf,	// (0x000777a3) bg_popup_call_poc_inact_pane_g7

0x37d7,	// (0x000777ab) bg_popup_call_poc_inact_pane_g8

0x2955,	// (0x00076929) popup_call_poc_inact_window_g2

0x37df,	// (0x000777b3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x00083555) bg_popup_call_poc_inact_pane_g

0x295d,	// (0x00076931) popup_call_poc_inact_window_t1_ParamLimits

0x295d,	// (0x00076931) popup_call_poc_inact_window_t1

0x2972,	// (0x00076946) popup_call_poc_inact_window_t2_ParamLimits

0x2972,	// (0x00076946) popup_call_poc_inact_window_t2

0x2987,	// (0x0007695b) popup_call_poc_inact_window_t3_ParamLimits

0x2987,	// (0x0007695b) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000834df) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000834df) popup_call_poc_inact_window_t

0x3964,	// (0x00077938) context_pane_ParamLimits

0xa0e6,	// (0x0007e0ba) signal_pane_ParamLimits

0x1ae6,	// (0x00075aba) main_call2_pane

0xa059,	// (0x0007e02d) popup_phob_thumbnail2_window_ParamLimits

0xa059,	// (0x0007e02d) popup_phob_thumbnail2_window

0x9773,	// (0x0007d747) aid_hotspot_pointer_arrow_pane

0x977b,	// (0x0007d74f) aid_hotspot_pointer_hand_pane

0x9dd4,	// (0x0007dda8) phob_pre_status_pane_g5

0x7ad5,	// (0x0007baa9) cams_zoom_pane_ParamLimits

0x7ae1,	// (0x0007bab5) image_vga_pane_ParamLimits

0x7af0,	// (0x0007bac4) main_camera_pane_g1_ParamLimits

0x7afe,	// (0x0007bad2) main_camera_pane_g2_ParamLimits

0x7b0a,	// (0x0007bade) main_camera_pane_g3_ParamLimits

0x7b16,	// (0x0007baea) main_camera_pane_g4_ParamLimits

0x7b22,	// (0x0007baf6) main_camera_pane_g5_ParamLimits

0x7b2e,	// (0x0007bb02) main_camera_pane_g6_ParamLimits

0x7b3a,	// (0x0007bb0e) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000831de) main_camera_pane_g_ParamLimits

0x7b46,	// (0x0007bb1a) main_camera_pane_t1_ParamLimits

0x7b58,	// (0x0007bb2c) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000831ef) main_camera_pane_t_ParamLimits

0x1323,	// (0x000752f7) bg_popup_preview_window_pane_cp01_ParamLimits

0x1323,	// (0x000752f7) bg_popup_preview_window_pane_cp01

0x299c,	// (0x00076970) popup_phob_thumbnail2_window_g1_ParamLimits

0x299c,	// (0x00076970) popup_phob_thumbnail2_window_g1

0x0cf8,	// (0x00074ccc) call2_cli_visual_pane

0x9ace,	// (0x0007daa2) popup_call2_audio_conf_window_ParamLimits

0x9ace,	// (0x0007daa2) popup_call2_audio_conf_window

0x9ae3,	// (0x0007dab7) popup_call2_audio_first_window_ParamLimits

0x9ae3,	// (0x0007dab7) popup_call2_audio_first_window

0x9b81,	// (0x0007db55) popup_call2_audio_in_window_ParamLimits

0x9b81,	// (0x0007db55) popup_call2_audio_in_window

0x9bc3,	// (0x0007db97) popup_call2_audio_out_window_ParamLimits

0x9bc3,	// (0x0007db97) popup_call2_audio_out_window

0x9c25,	// (0x0007dbf9) popup_call2_audio_second_window_ParamLimits

0x9c25,	// (0x0007dbf9) popup_call2_audio_second_window

0x9c83,	// (0x0007dc57) popup_call2_audio_wait_window_ParamLimits

0x9c83,	// (0x0007dc57) popup_call2_audio_wait_window

0x0cf8,	// (0x00074ccc) bg_popup_call2_act_pane_cp03

0x1305,	// (0x000752d9) list_conf_pane_cp

0x29a8,	// (0x0007697c) popup_call2_audio_conf_window_t1

0x2235,	// (0x00076209) list_single_graphic_popup_conf2_pane_ParamLimits

0x2235,	// (0x00076209) list_single_graphic_popup_conf2_pane

0x2248,	// (0x0007621c) list_highlight_pane_cp04

0x29b6,	// (0x0007698a) list_single_graphic_popup_conf2_pane_g1

0x2259,	// (0x0007622d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000834e6) list_single_graphic_popup_conf2_pane_g

0x29c0,	// (0x00076994) list_single_graphic_popup_conf2_pane_t1

0x29ce,	// (0x000769a2) bg_popup_call2_act_pane_cp01_ParamLimits

0x29ce,	// (0x000769a2) bg_popup_call2_act_pane_cp01

0x2a58,	// (0x00076a2c) call_type_pane_cp05_ParamLimits

0x2a58,	// (0x00076a2c) call_type_pane_cp05

0x2aac,	// (0x00076a80) popup_call2_audio_second_window_g1_ParamLimits

0x2aac,	// (0x00076a80) popup_call2_audio_second_window_g1

0x2b00,	// (0x00076ad4) popup_call2_audio_second_window_g2_ParamLimits

0x2b00,	// (0x00076ad4) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000834eb) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000834eb) popup_call2_audio_second_window_g

0x2b65,	// (0x00076b39) popup_call2_audio_second_window_t1_ParamLimits

0x2b65,	// (0x00076b39) popup_call2_audio_second_window_t1

0x2c20,	// (0x00076bf4) popup_call2_audio_second_window_t2_ParamLimits

0x2c20,	// (0x00076bf4) popup_call2_audio_second_window_t2

0x2c73,	// (0x00076c47) popup_call2_audio_second_window_t3_ParamLimits

0x2c73,	// (0x00076c47) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000834f2) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000834f2) popup_call2_audio_second_window_t

0x0cf8,	// (0x00074ccc) bg_popup_call2_in_pane_cp02

0x0d02,	// (0x00074cd6) call_type_pane_cp04

0x0d0a,	// (0x00074cde) popup_call2_audio_wait_window_g1

0x0d12,	// (0x00074ce6) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000830cd) popup_call2_audio_wait_window_g

0x0d1a,	// (0x00074cee) popup_call2_audio_wait_window_t3

0x2d66,	// (0x00076d3a) bg_popup_call2_act_pane_ParamLimits

0x2d66,	// (0x00076d3a) bg_popup_call2_act_pane

0x2e26,	// (0x00076dfa) call_type_pane_cp03_ParamLimits

0x2e26,	// (0x00076dfa) call_type_pane_cp03

0x2e8a,	// (0x00076e5e) popup_call2_audio_first_window_g1_ParamLimits

0x2e8a,	// (0x00076e5e) popup_call2_audio_first_window_g1

0x2efa,	// (0x00076ece) popup_call2_audio_first_window_g2_ParamLimits

0x2efa,	// (0x00076ece) popup_call2_audio_first_window_g2

0x2603,	// (0x000765d7) popup_call2_audio_first_window_g3_ParamLimits

0x2603,	// (0x000765d7) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000834fb) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000834fb) popup_call2_audio_first_window_g

0x2fd8,	// (0x00076fac) popup_call2_audio_first_window_t1_ParamLimits

0x2fd8,	// (0x00076fac) popup_call2_audio_first_window_t1

0x30db,	// (0x000770af) popup_call2_audio_first_window_t4_ParamLimits

0x30db,	// (0x000770af) popup_call2_audio_first_window_t4

0x31be,	// (0x00077192) popup_call2_audio_first_window_t5_ParamLimits

0x31be,	// (0x00077192) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00083506) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00083506) popup_call2_audio_first_window_t

0x131b,	// (0x000752ef) bg_popup_call2_act_pane_g1

0x3837,	// (0x0007780b) popup_cale_lunar_info_window_t1

0x3845,	// (0x00077819) popup_cale_lunar_info_window_t2

0x3853,	// (0x00077827) popup_cale_lunar_info_window_t3

0x0cf8,	// (0x00074ccc) bg_popup_call2_bubble_pane

0x32cb,	// (0x0007729f) bg_popup_call2_in_pane_cp01_ParamLimits

0x32cb,	// (0x0007729f) bg_popup_call2_in_pane_cp01

0x09d4,	// (0x000749a8) call_type_pane_cp02

0x3313,	// (0x000772e7) popup_call2_audio_out_window_g1_ParamLimits

0x3313,	// (0x000772e7) popup_call2_audio_out_window_g1

0x333f,	// (0x00077313) popup_call2_audio_out_window_g2_ParamLimits

0x333f,	// (0x00077313) popup_call2_audio_out_window_g2

0x3367,	// (0x0007733b) popup_call2_audio_out_window_g3_ParamLimits

0x3367,	// (0x0007733b) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0008350f) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0008350f) popup_call2_audio_out_window_g

0x33a2,	// (0x00077376) popup_call2_audio_out_window_t1_ParamLimits

0x33a2,	// (0x00077376) popup_call2_audio_out_window_t1

0x3401,	// (0x000773d5) popup_call2_audio_out_window_t2_ParamLimits

0x3401,	// (0x000773d5) popup_call2_audio_out_window_t2

0x3455,	// (0x00077429) popup_call2_audio_out_window_t3_ParamLimits

0x3455,	// (0x00077429) popup_call2_audio_out_window_t3

0x346b,	// (0x0007743f) popup_call2_audio_out_window_t4_ParamLimits

0x346b,	// (0x0007743f) popup_call2_audio_out_window_t4

0x3481,	// (0x00077455) popup_call2_audio_out_window_t5_ParamLimits

0x3481,	// (0x00077455) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00083518) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00083518) popup_call2_audio_out_window_t

0x34e5,	// (0x000774b9) bg_popup_call2_in_pane_ParamLimits

0x34e5,	// (0x000774b9) bg_popup_call2_in_pane

0x3541,	// (0x00077515) popup_call2_audio_in_window_g1_ParamLimits

0x3541,	// (0x00077515) popup_call2_audio_in_window_g1

0x3579,	// (0x0007754d) popup_call2_audio_in_window_g2_ParamLimits

0x3579,	// (0x0007754d) popup_call2_audio_in_window_g2

0x35b1,	// (0x00077585) popup_call2_audio_in_window_g3_ParamLimits

0x35b1,	// (0x00077585) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00083525) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00083525) popup_call2_audio_in_window_g

0x3609,	// (0x000775dd) popup_call2_audio_in_window_t1_ParamLimits

0x3609,	// (0x000775dd) popup_call2_audio_in_window_t1

0x3689,	// (0x0007765d) popup_call2_audio_in_window_t2_ParamLimits

0x3689,	// (0x0007765d) popup_call2_audio_in_window_t2

0x3709,	// (0x000776dd) popup_call2_audio_in_window_t3_ParamLimits

0x3709,	// (0x000776dd) popup_call2_audio_in_window_t3

0x3723,	// (0x000776f7) popup_call2_audio_in_window_t4_ParamLimits

0x3723,	// (0x000776f7) popup_call2_audio_in_window_t4

0x3735,	// (0x00077709) popup_call2_audio_in_window_t5_ParamLimits

0x3735,	// (0x00077709) popup_call2_audio_in_window_t5

0x374a,	// (0x0007771e) popup_call2_audio_in_window_t6_ParamLimits

0x374a,	// (0x0007771e) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0008352e) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0008352e) popup_call2_audio_in_window_t

0x131b,	// (0x000752ef) bg_popup_call2_in_pane_g1

0x3861,	// (0x00077835) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x00083596) popup_cale_lunar_info_window_t

0x1323,	// (0x000752f7) bg_popup_call2_rect_pane_ParamLimits

0x1323,	// (0x000752f7) bg_popup_call2_rect_pane

0x0cf8,	// (0x00074ccc) call2_cli_visual_graphic_pane

0x0cf8,	// (0x00074ccc) call2_cli_visual_text_pane

0xa18c,	// (0x0007e160) smil_status_volume_pane_g3

0x0002,

0x143d,	// (0x00075411) call2_cli_visual_graphic_pane_g1

0x143d,	// (0x00075411) call2_cli_visual_graphic_pane_g2

0x143d,	// (0x00075411) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0008353b) call2_cli_visual_graphic_pane_g

0x375f,	// (0x00077733) bg_popup_call2_rect_pane_g1

0x1a02,	// (0x000759d6) bg_popup_call2_rect_pane_g2

0x3767,	// (0x0007773b) bg_popup_call2_rect_pane_g3

0x376f,	// (0x00077743) bg_popup_call2_rect_pane_g4

0x3777,	// (0x0007774b) bg_popup_call2_rect_pane_g5

0x377f,	// (0x00077753) bg_popup_call2_rect_pane_g6

0x3787,	// (0x0007775b) bg_popup_call2_rect_pane_g7

0x378f,	// (0x00077763) bg_popup_call2_rect_pane_g8

0x3797,	// (0x0007776b) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00083542) bg_popup_call2_rect_pane_g

0x379f,	// (0x00077773) bg_popup_call2_bubble_pane_g1

0x37a7,	// (0x0007777b) bg_popup_call2_bubble_pane_g2

0x37af,	// (0x00077783) bg_popup_call2_bubble_pane_g3

0x37b7,	// (0x0007778b) bg_popup_call2_bubble_pane_g4

0x37bf,	// (0x00077793) bg_popup_call2_bubble_pane_g5

0x37c7,	// (0x0007779b) bg_popup_call2_bubble_pane_g6

0x37cf,	// (0x000777a3) bg_popup_call2_bubble_pane_g7

0x37d7,	// (0x000777ab) bg_popup_call2_bubble_pane_g8

0x37df,	// (0x000777b3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00083555) bg_popup_call2_bubble_pane_g

0x75ec,	// (0x0007b5c0) aid_cale_week_size_cell_pane

0x7b6a,	// (0x0007bb3e) aid_cams_cif_uncrop_pane_ParamLimits

0x7b6a,	// (0x0007bb3e) aid_cams_cif_uncrop_pane

0x7cc5,	// (0x0007bc99) aid_cams_size_cell_ParamLimits

0x7cc5,	// (0x0007bc99) aid_cams_size_cell

0x7cd1,	// (0x0007bca5) grid_cams_pane_ParamLimits

0x7cdf,	// (0x0007bcb3) linegrid_cams_pane_ParamLimits

0x7dce,	// (0x0007bda2) call_video_pane_t1

0x7def,	// (0x0007bdc3) call_video_pane_t2

0x0001,

0xf26e,	// (0x00083242) call_video_pane_t

0x8336,	// (0x0007c30a) aid_cale_month_size_cell_pane_ParamLimits

0x8336,	// (0x0007c30a) aid_cale_month_size_cell_pane

0xf60b,	// (0x000835df) smil_status_volume_pane_g

0xa199,	// (0x0007e16d) volume_smil_pane_ParamLimits

0x6d5b,	// (0x0007ad2f) aid_popup2_width_pane

0x74ee,	// (0x0007b4c2) cell_qdial_pane_g4_ParamLimits

0x74ee,	// (0x0007b4c2) cell_qdial_pane_g4

0x9212,	// (0x0007d1e6) aid_blid_cardinal_pane_ParamLimits

0x9222,	// (0x0007d1f6) aid_blid_destination_pane_ParamLimits

0x9222,	// (0x0007d1f6) aid_blid_destination_pane

0x1323,	// (0x000752f7) bg_popup_call_poc_act_pane_ParamLimits

0x1323,	// (0x000752f7) bg_popup_call_poc_act_pane

0x1323,	// (0x000752f7) bg_popup_call_poc_inact_pane_ParamLimits

0x1323,	// (0x000752f7) bg_popup_call_poc_inact_pane

0x37e7,	// (0x000777bb) bg_popup_call_poc_act_pane_g1

0x37ef,	// (0x000777c3) bg_popup_call_poc_act_pane_g2

0x37f7,	// (0x000777cb) bg_popup_call_poc_act_pane_g3

0x37b7,	// (0x0007778b) bg_popup_call_poc_act_pane_g4

0x37bf,	// (0x00077793) bg_popup_call_poc_act_pane_g5

0x37ff,	// (0x000777d3) bg_popup_call_poc_act_pane_g6

0x37cf,	// (0x000777a3) bg_popup_call_poc_act_pane_g7

0x3807,	// (0x000777db) bg_popup_call_poc_act_pane_g8

0x0cf8,	// (0x00074ccc) main_usb_pane

0x9f88,	// (0x0007df5c) popup_cale_lunar_info_window

0x8118,	// (0x0007c0ec) im_reading_pane_t1_ParamLimits

0x1be7,	// (0x00075bbb) list_im_pane_ParamLimits

0x1bf8,	// (0x00075bcc) scroll_pane_cp07_ParamLimits

0x0cf8,	// (0x00074ccc) grid_highlight_pane_cp012

0x1323,	// (0x000752f7) mup_scale_pane_ParamLimits

0x2603,	// (0x000765d7) main_usb_pane_g1_ParamLimits

0x2603,	// (0x000765d7) main_usb_pane_g1

0x9cf7,	// (0x0007dccb) main_usb_pane_g2_ParamLimits

0x9cf7,	// (0x0007dccb) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0008357f) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0008357f) main_usb_pane_g

0x9d03,	// (0x0007dcd7) main_usb_pane_t1_ParamLimits

0x9d03,	// (0x0007dcd7) main_usb_pane_t1

0x9d15,	// (0x0007dce9) main_usb_pane_t2_ParamLimits

0x9d15,	// (0x0007dce9) main_usb_pane_t2

0x9d27,	// (0x0007dcfb) main_usb_pane_t3_ParamLimits

0x9d27,	// (0x0007dcfb) main_usb_pane_t3

0x9d39,	// (0x0007dd0d) main_usb_pane_t4_ParamLimits

0x9d39,	// (0x0007dd0d) main_usb_pane_t4

0x9d4b,	// (0x0007dd1f) main_usb_pane_t5_ParamLimits

0x9d4b,	// (0x0007dd1f) main_usb_pane_t5

0x9d5d,	// (0x0007dd31) main_usb_pane_t6_ParamLimits

0x9d5d,	// (0x0007dd31) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x00083584) main_usb_pane_t_ParamLimits

0x91b8,	// (0x0007d18c) aid_text_placing

0x91c4,	// (0x0007d198) main_location2_pane_t1_ParamLimits

0x91d8,	// (0x0007d1ac) main_location2_pane_t2_ParamLimits

0x91ec,	// (0x0007d1c0) main_location2_pane_t3_ParamLimits

0x9200,	// (0x0007d1d4) main_location2_pane_t4_ParamLimits

0x9200,	// (0x0007d1d4) main_location2_pane_t4

0xf3cf,	// (0x000833a3) main_location2_pane_t_ParamLimits

0x135f,	// (0x00075333) find_pinb_pane_g2_ParamLimits

0x135f,	// (0x00075333) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000830f3) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000830f3) find_pinb_pane_g

0x136b,	// (0x0007533f) find_pinb_pane_t1_ParamLimits

0x137d,	// (0x00075351) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000830f8) find_pinb_pane_t_ParamLimits

0x0cf8,	// (0x00074ccc) main_call3_pane

0x88d9,	// (0x0007c8ad) cale_month_day_heading_pane_t1_ParamLimits

0x895f,	// (0x0007c933) cale_month_day_heading_pane_t2_ParamLimits

0x89d8,	// (0x0007c9ac) cale_month_day_heading_pane_t3_ParamLimits

0x8a51,	// (0x0007ca25) cale_month_day_heading_pane_t4_ParamLimits

0x8aca,	// (0x0007ca9e) cale_month_day_heading_pane_t5_ParamLimits

0x8b43,	// (0x0007cb17) cale_month_day_heading_pane_t6_ParamLimits

0x8bbc,	// (0x0007cb90) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0008327a) cale_month_day_heading_pane_t_ParamLimits

0x1e42,	// (0x00075e16) smil_status_volume_pane

0x98bb,	// (0x0007d88f) postcard_address_pane_ParamLimits

0x98bb,	// (0x0007d88f) postcard_address_pane

0x98c7,	// (0x0007d89b) postcard_message_pane_ParamLimits

0x98c7,	// (0x0007d89b) postcard_message_pane

0x9cc2,	// (0x0007dc96) call2_cli_visual_pane_t1_ParamLimits

0x9cc2,	// (0x0007dc96) call2_cli_visual_pane_t1

0xa2f0,	// (0x0007e2c4) postcard_message_pane_t1_ParamLimits

0xa2f0,	// (0x0007e2c4) postcard_message_pane_t1

0xa2d9,	// (0x0007e2ad) postcard_address_pane_t1_ParamLimits

0xa2d9,	// (0x0007e2ad) postcard_address_pane_t1

0xa2ca,	// (0x0007e29e) popup_call3_audio_in_window_ParamLimits

0xa2ca,	// (0x0007e29e) popup_call3_audio_in_window

0xa1ae,	// (0x0007e182) bg_popup_call3_in_pane_ParamLimits

0xa1ae,	// (0x0007e182) bg_popup_call3_in_pane

0xa210,	// (0x0007e1e4) popup_call3_audio_in_window_g1_ParamLimits

0xa210,	// (0x0007e1e4) popup_call3_audio_in_window_g1

0xa228,	// (0x0007e1fc) popup_call3_audio_in_window_g2_ParamLimits

0xa228,	// (0x0007e1fc) popup_call3_audio_in_window_g2

0xa240,	// (0x0007e214) popup_call3_audio_in_window_g3_ParamLimits

0xa240,	// (0x0007e214) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000835e6) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000835e6) popup_call3_audio_in_window_g

0xa268,	// (0x0007e23c) popup_call3_audio_in_window_t1_ParamLimits

0xa268,	// (0x0007e23c) popup_call3_audio_in_window_t1

0xa290,	// (0x0007e264) popup_call3_audio_in_window_t2_ParamLimits

0xa290,	// (0x0007e264) popup_call3_audio_in_window_t2

0xa2b8,	// (0x0007e28c) popup_call3_audio_in_window_t3_ParamLimits

0xa2b8,	// (0x0007e28c) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000835ef) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000835ef) popup_call3_audio_in_window_t

0x1ae6,	// (0x00075aba) bg_popup_call3_rect_pane

0x375f,	// (0x00077733) bg_popup_call3_rect_pane_g1

0x1a02,	// (0x000759d6) bg_popup_call3_rect_pane_g2

0x3767,	// (0x0007773b) bg_popup_call3_rect_pane_g3

0x376f,	// (0x00077743) bg_popup_call3_rect_pane_g4

0x3777,	// (0x0007774b) bg_popup_call3_rect_pane_g5

0x377f,	// (0x00077753) bg_popup_call3_rect_pane_g6

0x3787,	// (0x0007775b) bg_popup_call3_rect_pane_g7

0x9538,	// (0x0007d50c) mup_visualizer_osc_pane

0x2611,	// (0x000765e5) mup_visualizer_spec_pane

0xa1ce,	// (0x0007e1a2) call3_video_qcif_pane_ParamLimits

0xa1ce,	// (0x0007e1a2) call3_video_qcif_pane

0xa1e0,	// (0x0007e1b4) call3_video_qcif_uncrop_pane_ParamLimits

0xa1e0,	// (0x0007e1b4) call3_video_qcif_uncrop_pane

0xa1ee,	// (0x0007e1c2) call3_video_subqcif_pane_ParamLimits

0xa1ee,	// (0x0007e1c2) call3_video_subqcif_pane

0xa200,	// (0x0007e1d4) call3_video_subqcif_uncrop_pane_ParamLimits

0xa200,	// (0x0007e1d4) call3_video_subqcif_uncrop_pane

0xa258,	// (0x0007e22c) popup_call3_audio_in_window_g4_ParamLimits

0xa258,	// (0x0007e22c) popup_call3_audio_in_window_g4

0xa17b,	// (0x0007e14f) mup_spec_half_pane

0xa184,	// (0x0007e158) mup_spec_half_pane_cp

0x39c4,	// (0x00077998) mup_osc_middle_pane

0x39cd,	// (0x000779a1) mup_visualizer_osc_pane_g1

0xa15c,	// (0x0007e130) mup_spec_bar_pane_ParamLimits

0xa15c,	// (0x0007e130) mup_spec_bar_pane

0x39b1,	// (0x00077985) mup_spec_bar_pane_g1

0x39bb,	// (0x0007798f) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000835da) mup_spec_bar_pane_g

0x75ec,	// (0x0007b5c0) aid_cale_week_size_cell_pane_ParamLimits

0x7601,	// (0x0007b5d5) bg_cale_heading_pane_ParamLimits

0x1a3f,	// (0x00075a13) bg_cale_pane_cp01_ParamLimits

0x7621,	// (0x0007b5f5) cale_week_corner_pane_ParamLimits

0x763b,	// (0x0007b60f) cale_week_day_heading_pane_ParamLimits

0x765b,	// (0x0007b62f) cale_week_scroll_pane_g1_ParamLimits

0x7676,	// (0x0007b64a) cale_week_scroll_pane_g2_ParamLimits

0x7689,	// (0x0007b65d) cale_week_scroll_pane_g3_ParamLimits

0x769c,	// (0x0007b670) cale_week_scroll_pane_g4_ParamLimits

0x76af,	// (0x0007b683) cale_week_scroll_pane_g5_ParamLimits

0x76c2,	// (0x0007b696) cale_week_scroll_pane_g6_ParamLimits

0x76d5,	// (0x0007b6a9) cale_week_scroll_pane_g7_ParamLimits

0x76ea,	// (0x0007b6be) cale_week_scroll_pane_g8_ParamLimits

0x76ff,	// (0x0007b6d3) cale_week_scroll_pane_g9_ParamLimits

0x7712,	// (0x0007b6e6) cale_week_scroll_pane_g10_ParamLimits

0x7725,	// (0x0007b6f9) cale_week_scroll_pane_g11_ParamLimits

0x7738,	// (0x0007b70c) cale_week_scroll_pane_g12_ParamLimits

0x774f,	// (0x0007b723) cale_week_scroll_pane_g13_ParamLimits

0x776a,	// (0x0007b73e) cale_week_scroll_pane_g14_ParamLimits

0x7785,	// (0x0007b759) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00083184) cale_week_scroll_pane_g_ParamLimits

0x77b5,	// (0x0007b789) cale_week_time_pane_ParamLimits

0x77ca,	// (0x0007b79e) grid_cale_week_pane_ParamLimits

0x1a5c,	// (0x00075a30) listscroll_cale_week_pane_t1

0x1a6e,	// (0x00075a42) scroll_pane_cp08_ParamLimits

0x83aa,	// (0x0007c37e) cale_month_corner_pane_ParamLimits

0x1e18,	// (0x00075dec) cale_month_pane_t1

0x885c,	// (0x0007c830) cale_month_week_pane_ParamLimits

0x2603,	// (0x000765d7) popup_call_status_window_g1_ParamLimits

0x8feb,	// (0x0007cfbf) popup_call_status_window_g2_ParamLimits

0x8ff7,	// (0x0007cfcb) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0008332a) popup_call_status_window_g_ParamLimits

0x21d0,	// (0x000761a4) aid_call2_pane

0x5d51,	// (0x00079d25) msg_header_pane_g1

0x98bb,	// (0x0007d88f) postcard_address2_pane_ParamLimits

0x98bb,	// (0x0007d88f) postcard_address2_pane

0x98c7,	// (0x0007d89b) postcard_message2_pane_ParamLimits

0x98c7,	// (0x0007d89b) postcard_message2_pane

0xa0f4,	// (0x0007e0c8) message2_row_pane_ParamLimits

0xa0f4,	// (0x0007e0c8) message2_row_pane

0xa10f,	// (0x0007e0e3) address2_row_pane_ParamLimits

0xa10f,	// (0x0007e0e3) address2_row_pane

0x397f,	// (0x00077953) postcard_message2_row_pane_g1

0x3987,	// (0x0007795b) postcard_message2_row_pane_t1

0x397f,	// (0x00077953) address2_row_pane_g1

0x3987,	// (0x0007795b) address2_row_pane_t1

0x7a50,	// (0x0007ba24) aid_size_cell_vorec

0x0cf8,	// (0x00074ccc) main_rss_pane

0xa122,	// (0x0007e0f6) rss_list_single_pane_ParamLimits

0xa122,	// (0x0007e0f6) rss_list_single_pane

0x3995,	// (0x00077969) rss_list_single_pane_t1

0x39a3,	// (0x00077977) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000835d5) rss_list_single_pane_t

0x0cf8,	// (0x00074ccc) main_camera2_pane

0x0cf8,	// (0x00074ccc) main_video2_pane

0xa354,	// (0x0007e328) cams_zoom_pane_cp2_ParamLimits

0xa354,	// (0x0007e328) cams_zoom_pane_cp2

0xa360,	// (0x0007e334) image2_vga_pane_ParamLimits

0xa360,	// (0x0007e334) image2_vga_pane

0xa36f,	// (0x0007e343) main_camera2_pane_g1_ParamLimits

0xa36f,	// (0x0007e343) main_camera2_pane_g1

0xa37b,	// (0x0007e34f) main_camera2_pane_g2_ParamLimits

0xa37b,	// (0x0007e34f) main_camera2_pane_g2

0xa387,	// (0x0007e35b) main_camera2_pane_g3_ParamLimits

0xa387,	// (0x0007e35b) main_camera2_pane_g3

0xa393,	// (0x0007e367) main_camera2_pane_g4_ParamLimits

0xa393,	// (0x0007e367) main_camera2_pane_g4

0xa39f,	// (0x0007e373) main_camera2_pane_g5_ParamLimits

0xa39f,	// (0x0007e373) main_camera2_pane_g5

0xa3ab,	// (0x0007e37f) main_camera2_pane_g6_ParamLimits

0xa3ab,	// (0x0007e37f) main_camera2_pane_g6

0xa3b7,	// (0x0007e38b) main_camera2_pane_g7_ParamLimits

0xa3b7,	// (0x0007e38b) main_camera2_pane_g7

0xa3c3,	// (0x0007e397) main_camera2_pane_g8_ParamLimits

0xa3c3,	// (0x0007e397) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000835f6) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000835f6) main_camera2_pane_g

0xa3db,	// (0x0007e3af) main_camera2_pane_t1_ParamLimits

0xa3db,	// (0x0007e3af) main_camera2_pane_t1

0xa3ed,	// (0x0007e3c1) main_camera2_pane_t2_ParamLimits

0xa3ed,	// (0x0007e3c1) main_camera2_pane_t2

0xa3ff,	// (0x0007e3d3) main_camera2_pane_t3_ParamLimits

0xa3ff,	// (0x0007e3d3) main_camera2_pane_t3

0xa411,	// (0x0007e3e5) main_camera2_pane_t4_ParamLimits

0xa411,	// (0x0007e3e5) main_camera2_pane_t4

0x0006,

0xf635,	// (0x00083609) main_camera2_pane_t_ParamLimits

0xf635,	// (0x00083609) main_camera2_pane_t

0xa473,	// (0x0007e447) cams_zoom_pane_cp4_ParamLimits

0xa473,	// (0x0007e447) cams_zoom_pane_cp4

0xa483,	// (0x0007e457) image2_cif_pane_ParamLimits

0xa483,	// (0x0007e457) image2_cif_pane

0xa498,	// (0x0007e46c) image2_subqcif_pane_ParamLimits

0xa498,	// (0x0007e46c) image2_subqcif_pane

0xa4a7,	// (0x0007e47b) main_video2_pane_g1_ParamLimits

0xa4a7,	// (0x0007e47b) main_video2_pane_g1

0xa4b9,	// (0x0007e48d) main_video2_pane_g2_ParamLimits

0xa4b9,	// (0x0007e48d) main_video2_pane_g2

0xa4c9,	// (0x0007e49d) main_video2_pane_g3_ParamLimits

0xa4c9,	// (0x0007e49d) main_video2_pane_g3

0xa4d9,	// (0x0007e4ad) main_video2_pane_g4_ParamLimits

0xa4d9,	// (0x0007e4ad) main_video2_pane_g4

0xa4e9,	// (0x0007e4bd) main_video2_pane_g5_ParamLimits

0xa4e9,	// (0x0007e4bd) main_video2_pane_g5

0xa4f9,	// (0x0007e4cd) main_video2_pane_g6_ParamLimits

0xa4f9,	// (0x0007e4cd) main_video2_pane_g6

0x0005,

0xf644,	// (0x00083618) main_video2_pane_g_ParamLimits

0xf644,	// (0x00083618) main_video2_pane_g

0xa50b,	// (0x0007e4df) main_video2_pane_t1_ParamLimits

0xa50b,	// (0x0007e4df) main_video2_pane_t1

0xa525,	// (0x0007e4f9) main_video2_pane_t2_ParamLimits

0xa525,	// (0x0007e4f9) main_video2_pane_t2

0xa54b,	// (0x0007e51f) main_video2_pane_t3_ParamLimits

0xa54b,	// (0x0007e51f) main_video2_pane_t3

0x0002,

0xf651,	// (0x00083625) main_video2_pane_t_ParamLimits

0xf651,	// (0x00083625) main_video2_pane_t

0x9e14,	// (0x0007dde8) call_muted_g2

0x0001,

0xf5f3,	// (0x000835c7) call_muted_g

0x0cf8,	// (0x00074ccc) main_mup2_pane

0x3a32,	// (0x00077a06) main_mup2_pane_g1_ParamLimits

0x3a32,	// (0x00077a06) main_mup2_pane_g1

0xa571,	// (0x0007e545) main_mup2_pane_g2_ParamLimits

0xa571,	// (0x0007e545) main_mup2_pane_g2

0xa7f3,	// (0x0007e7c7) main_mup_pane_g13_cp1

0xa7fb,	// (0x0007e7cf) mup_volume_pane_cp1

0xa591,	// (0x0007e565) main_mup2_pane_g4_ParamLimits

0xa591,	// (0x0007e565) main_mup2_pane_g4

0xa5a6,	// (0x0007e57a) main_mup2_pane_g5_ParamLimits

0xa5a6,	// (0x0007e57a) main_mup2_pane_g5

0xa5bb,	// (0x0007e58f) main_mup2_pane_g6_ParamLimits

0xa5bb,	// (0x0007e58f) main_mup2_pane_g6

0xa5d0,	// (0x0007e5a4) main_mup2_pane_g7_ParamLimits

0xa5d0,	// (0x0007e5a4) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0008362c) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0008362c) main_mup2_pane_g

0xa5ec,	// (0x0007e5c0) main_mup2_pane_t1_ParamLimits

0xa5ec,	// (0x0007e5c0) main_mup2_pane_t1

0xa603,	// (0x0007e5d7) main_mup2_pane_t2_ParamLimits

0xa603,	// (0x0007e5d7) main_mup2_pane_t2

0xa61a,	// (0x0007e5ee) main_mup2_pane_t3_ParamLimits

0xa61a,	// (0x0007e5ee) main_mup2_pane_t3

0xa631,	// (0x0007e605) main_mup2_pane_t4_ParamLimits

0xa631,	// (0x0007e605) main_mup2_pane_t4

0xa64b,	// (0x0007e61f) main_mup2_pane_t5_ParamLimits

0xa64b,	// (0x0007e61f) main_mup2_pane_t5

0xa665,	// (0x0007e639) main_mup2_pane_t6_ParamLimits

0xa665,	// (0x0007e639) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0008363b) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0008363b) main_mup2_pane_t

0xa69d,	// (0x0007e671) mup2_visualizer_pane_ParamLimits

0xa69d,	// (0x0007e671) mup2_visualizer_pane

0xa6d3,	// (0x0007e6a7) mup_progress_pane_cp_ParamLimits

0xa6d3,	// (0x0007e6a7) mup_progress_pane_cp

0xa7de,	// (0x0007e7b2) mup_volume_pane_cp_ParamLimits

0xa7de,	// (0x0007e7b2) mup_volume_pane_cp

0xa6ea,	// (0x0007e6be) mup2_visualizer_pane_g1_ParamLimits

0xa6ea,	// (0x0007e6be) mup2_visualizer_pane_g1

0x3a04,	// (0x000779d8) mup2_visualizer_pane_g2_ParamLimits

0x3a04,	// (0x000779d8) mup2_visualizer_pane_g2

0xa6ff,	// (0x0007e6d3) mup2_visualizer_pane_g3_ParamLimits

0xa6ff,	// (0x0007e6d3) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x00083648) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x00083648) mup2_visualizer_pane_g

0x2838,	// (0x0007680c) aid_size_cell_fmradio

0x9f2a,	// (0x0007defe) aid_height_parent_landcape

0x1c76,	// (0x00075c4a) wml_content_pane_cp

0x1c7e,	// (0x00075c52) wml_tabs_pane

0x1c87,	// (0x00075c5b) popup_wml_miniature_window

0x1c8f,	// (0x00075c63) scroll_pane_cp021

0x1ca3,	// (0x00075c77) wml_content_pane_comp8

0x0cf8,	// (0x00074ccc) bg_popup_sub_pane_cp05

0x3a22,	// (0x000779f6) popup_wml_miniature_window_g1

0x3a2a,	// (0x000779fe) wml_miniature_view_pane

0xa70d,	// (0x0007e6e1) aid_size_wml_view

0xa715,	// (0x0007e6e9) wml_miniature_view_pane_g1

0xa71e,	// (0x0007e6f2) wml_miniature_view_pane_g2

0xa727,	// (0x0007e6fb) wml_miniature_view_pane_g3

0xa72f,	// (0x0007e703) wml_miniature_view_pane_g4

0xa737,	// (0x0007e70b) wml_miniature_view_pane_g5

0xa73f,	// (0x0007e713) wml_miniature_view_pane_g6

0xa747,	// (0x0007e71b) wml_miniature_view_pane_g7

0xa74f,	// (0x0007e723) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0008364f) wml_miniature_view_pane_g

0x3a32,	// (0x00077a06) background_graphic_ParamLimits

0x3a32,	// (0x00077a06) background_graphic

0x3a3e,	// (0x00077a12) wml_tabs_2_pane

0x3a47,	// (0x00077a1b) wml_tabs_3_pane_ParamLimits

0x3a47,	// (0x00077a1b) wml_tabs_3_pane

0x3a59,	// (0x00077a2d) wml_tabs_4_pane_ParamLimits

0x3a59,	// (0x00077a2d) wml_tabs_4_pane

0x3a6f,	// (0x00077a43) wml_tabs_5_pane_ParamLimits

0x3a6f,	// (0x00077a43) wml_tabs_5_pane

0x3a89,	// (0x00077a5d) wml_tabs_pane_g2_ParamLimits

0x3a89,	// (0x00077a5d) wml_tabs_pane_g2

0x3a9d,	// (0x00077a71) wml_tabs_pane_g3_ParamLimits

0x3a9d,	// (0x00077a71) wml_tabs_pane_g3

0xa757,	// (0x0007e72b) wml_tabs_2_active_pane_ParamLimits

0xa757,	// (0x0007e72b) wml_tabs_2_active_pane

0xa767,	// (0x0007e73b) wml_tabs_2_passive_pane_ParamLimits

0xa767,	// (0x0007e73b) wml_tabs_2_passive_pane

0xa777,	// (0x0007e74b) wml_tabs_3_active_pane_cp_ParamLimits

0xa777,	// (0x0007e74b) wml_tabs_3_active_pane_cp

0xa788,	// (0x0007e75c) wml_tabs_3_passive_pane_ParamLimits

0xa788,	// (0x0007e75c) wml_tabs_3_passive_pane

0xa799,	// (0x0007e76d) wml_tabs_3_passive_pane_cp_ParamLimits

0xa799,	// (0x0007e76d) wml_tabs_3_passive_pane_cp

0xa7aa,	// (0x0007e77e) tabs_4_active_pane

0xa7b2,	// (0x0007e786) tabs_4_passive_pane

0xa7ba,	// (0x0007e78e) tabs_4_passive_pane_cp

0xa7c2,	// (0x0007e796) tabs_4_passive_pane_cp2

0x9cef,	// (0x0007dcc3) aid_height_text

0x9505,	// (0x0007d4d9) mup_volume_cont_pane_ParamLimits

0x9505,	// (0x0007d4d9) mup_volume_cont_pane

0x712a,	// (0x0007b0fe) aid_size_cell_pinb

0x7134,	// (0x0007b108) aid_size_list_pinb

0xa6bc,	// (0x0007e690) mup2_volume_cont_pane_ParamLimits

0xa6bc,	// (0x0007e690) mup2_volume_cont_pane

0xa7ca,	// (0x0007e79e) mup2_volume_cont_pane_g1_ParamLimits

0xa7ca,	// (0x0007e79e) mup2_volume_cont_pane_g1

0x6d67,	// (0x0007ad3b) aid_size_cell_touch_ParamLimits

0x6d67,	// (0x0007ad3b) aid_size_cell_touch

0x7010,	// (0x0007afe4) touch_pane_ParamLimits

0x7010,	// (0x0007afe4) touch_pane

0x08db,	// (0x000748af) main_rss2_pane

0x3aba,	// (0x00077a8e) listscroll_rss2_pane

0x3ac3,	// (0x00077a97) rss2_navigation_pane

0x3acb,	// (0x00077a9f) list_rss2_pane

0x230b,	// (0x000762df) scroll_pane_cp22

0x3ad3,	// (0x00077aa7) rss2_navigation_pane_g1

0x3adc,	// (0x00077ab0) rss2_navigation_pane_g2

0x3ae4,	// (0x00077ab8) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x00083660) rss2_navigation_pane_g

0x3aec,	// (0x00077ac0) rss2_navigation_pane_t1

0xa803,	// (0x0007e7d7) rss2_list_single_pane_ParamLimits

0xa803,	// (0x0007e7d7) rss2_list_single_pane

0x3afa,	// (0x00077ace) rss2_list_single_pane_t2

0x3b08,	// (0x00077adc) rss2_list_single_pane_t3_ParamLimits

0x3b08,	// (0x00077adc) rss2_list_single_pane_t3

0x3b25,	// (0x00077af9) rss2_list_single_pane_t4

0x8e58,	// (0x0007ce2c) smil_status_pane_g1

0x145d,	// (0x00075431) main_image2_pane_ParamLimits

0x145d,	// (0x00075431) main_image2_pane

0xa3cf,	// (0x0007e3a3) main_camera2_pane_g9_ParamLimits

0xa3cf,	// (0x0007e3a3) main_camera2_pane_g9

0xa423,	// (0x0007e3f7) main_camera2_pane_t5_ParamLimits

0xa423,	// (0x0007e3f7) main_camera2_pane_t5

0xa435,	// (0x0007e409) main_camera2_pane_t6_ParamLimits

0xa435,	// (0x0007e409) main_camera2_pane_t6

0xa834,	// (0x0007e808) main_image2_pane_g1_ParamLimits

0xa834,	// (0x0007e808) main_image2_pane_g1

0x9a8f,	// (0x0007da63) smil2_video_pane_ParamLimits

0x9a8f,	// (0x0007da63) smil2_video_pane

0x6d9b,	// (0x0007ad6f) aid_zoom_text_primary_cp

0x6fb9,	// (0x0007af8d) popup_preview_fixed_window

0x1bdf,	// (0x00075bb3) im_reading_pane_g1

0xa319,	// (0x0007e2ed) cams2_bc_adjust_pane_cp_ParamLimits

0xa319,	// (0x0007e2ed) cams2_bc_adjust_pane_cp

0xa465,	// (0x0007e439) cams2_bc_adjust_pane_ParamLimits

0xa465,	// (0x0007e439) cams2_bc_adjust_pane

0xa840,	// (0x0007e814) cams2_bc_adjust_pane_g1

0xa848,	// (0x0007e81c) cams2_slider_pane

0xa851,	// (0x0007e825) cams2_slider_pane_g1

0xa85a,	// (0x0007e82e) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x00083667) cams2_slider_pane_g

0x723a,	// (0x0007b20e) calc_display_pane_ParamLimits

0x7258,	// (0x0007b22c) calc_paper_pane_ParamLimits

0x7274,	// (0x0007b248) grid_calc_pane_ParamLimits

0x9059,	// (0x0007d02d) popup_clock_digital_window_t1_ParamLimits

0x27d5,	// (0x000767a9) main_image_pane_t1

0x7220,	// (0x0007b1f4) aid_size_cell_calc_ParamLimits

0x7220,	// (0x0007b1f4) aid_size_cell_calc

0x9f64,	// (0x0007df38) popup_blid_sat_info2_window_ParamLimits

0x9f64,	// (0x0007df38) popup_blid_sat_info2_window

0x3b3b,	// (0x00077b0f) aid_size_cell_blid

0x3b43,	// (0x00077b17) bg_popup_window_pane_cp07

0x3b66,	// (0x00077b3a) grid_popup_blid_pane

0x3b70,	// (0x00077b44) heading_pane_cp05_ParamLimits

0x3b70,	// (0x00077b44) heading_pane_cp05

0x3c3a,	// (0x00077c0e) cell_popup_blid_pane_ParamLimits

0x3c3a,	// (0x00077c0e) cell_popup_blid_pane

0x3c5e,	// (0x00077c32) cell_popup_blid_pane_g1

0x3c66,	// (0x00077c3a) cell_popup_blid_pane_t1

0xa682,	// (0x0007e656) mup2_indicator_pane_ParamLimits

0xa682,	// (0x0007e656) mup2_indicator_pane

0x1ae6,	// (0x00075aba) mup2_visualizer_osc_pane

0x3a10,	// (0x000779e4) mup2_visualizer_spec_pane_ParamLimits

0x3a10,	// (0x000779e4) mup2_visualizer_spec_pane

0xa874,	// (0x0007e848) mup2_spec_half_pane

0xa87d,	// (0x0007e851) mup2_spec_half_pane_cp

0xa887,	// (0x0007e85b) mup2_spec_bar_pane_ParamLimits

0xa887,	// (0x0007e85b) mup2_spec_bar_pane

0x39b1,	// (0x00077985) mup2_spec_bar_pane_g1

0x39bb,	// (0x0007798f) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000835da) mup2_spec_bar_pane_g

0xa8a6,	// (0x0007e87a) mup2_osc_middle_pane

0x39cd,	// (0x000779a1) mup2_visualizer_osc_pane_g1

0x0905,	// (0x000748d9) popup_number_entry_window_t1_ParamLimits

0x0918,	// (0x000748ec) popup_number_entry_window_t2_ParamLimits

0x092a,	// (0x000748fe) popup_number_entry_window_t3_ParamLimits

0x7067,	// (0x0007b03b) popup_number_entry_window_t5_ParamLimits

0x7067,	// (0x0007b03b) popup_number_entry_window_t5

0xf0ca,	// (0x0008309e) popup_number_entry_window_t_ParamLimits

0x093c,	// (0x00074910) text_title_cp2_ParamLimits

0x9783,	// (0x0007d757) aid_hotspot_pointer_text2_pane

0x981d,	// (0x0007d7f1) main_viewer_pane_g9_ParamLimits

0x981d,	// (0x0007d7f1) main_viewer_pane_g9

0x1e18,	// (0x00075dec) cale_month_pane_t1_ParamLimits

0x1e55,	// (0x00075e29) bg_cale_pane_ParamLimits

0x1e6d,	// (0x00075e41) list_cale_pane_ParamLimits

0x1e7e,	// (0x00075e52) listscroll_cale_day_pane_t1

0x1e90,	// (0x00075e64) scroll_pane_cp09_ParamLimits

0x9540,	// (0x0007d514) main_mup_eq_pane_t1_ParamLimits

0x9540,	// (0x0007d514) main_mup_eq_pane_t1

0x955a,	// (0x0007d52e) main_mup_eq_pane_t2_ParamLimits

0x955a,	// (0x0007d52e) main_mup_eq_pane_t2

0x9574,	// (0x0007d548) main_mup_eq_pane_t3_ParamLimits

0x9574,	// (0x0007d548) main_mup_eq_pane_t3

0x958c,	// (0x0007d560) main_mup_eq_pane_t4_ParamLimits

0x958c,	// (0x0007d560) main_mup_eq_pane_t4

0x95a4,	// (0x0007d578) main_mup_eq_pane_t5_ParamLimits

0x95a4,	// (0x0007d578) main_mup_eq_pane_t5

0x95bc,	// (0x0007d590) main_mup_eq_pane_t6_ParamLimits

0x95bc,	// (0x0007d590) main_mup_eq_pane_t6

0x95d0,	// (0x0007d5a4) main_mup_eq_pane_t7_ParamLimits

0x95d0,	// (0x0007d5a4) main_mup_eq_pane_t7

0x95e4,	// (0x0007d5b8) main_mup_eq_pane_t8_ParamLimits

0x95e4,	// (0x0007d5b8) main_mup_eq_pane_t8

0x95fa,	// (0x0007d5ce) main_mup_eq_pane_t9_ParamLimits

0x95fa,	// (0x0007d5ce) main_mup_eq_pane_t9

0x9612,	// (0x0007d5e6) main_mup_eq_pane_t10_ParamLimits

0x9612,	// (0x0007d5e6) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00083429) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00083429) main_mup_eq_pane_t

0x96cf,	// (0x0007d6a3) mup_equalizer_pane_cp5_ParamLimits

0x96e5,	// (0x0007d6b9) mup_equalizer_pane_cp6_ParamLimits

0x96fd,	// (0x0007d6d1) mup_equalizer_pane_cp7_ParamLimits

0x08db,	// (0x000748af) main_gallery_pane

0x39d6,	// (0x000779aa) smil2_volume_pane

0x39f1,	// (0x000779c5) smil_status_volume_pane_g1_ParamLimits

0x39de,	// (0x000779b2) smil_status_volume_pane_g2_ParamLimits

0xa18c,	// (0x0007e160) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000835df) smil_status_volume_pane_g_ParamLimits

0x3b43,	// (0x00077b17) bg_popup_window_pane_cp07_ParamLimits

0x3b51,	// (0x00077b25) blid_firmament_pane

0xa8af,	// (0x0007e883) aid_size_cell_gallery_ParamLimits

0xa8af,	// (0x0007e883) aid_size_cell_gallery

0xa8bd,	// (0x0007e891) grid_gallery_pane_ParamLimits

0xa8bd,	// (0x0007e891) grid_gallery_pane

0xa8cd,	// (0x0007e8a1) cell_gallery_pane_ParamLimits

0xa8cd,	// (0x0007e8a1) cell_gallery_pane

0x3c74,	// (0x00077c48) bg_cell_gallery_focus_pane_ParamLimits

0x3c74,	// (0x00077c48) bg_cell_gallery_focus_pane

0x3c86,	// (0x00077c5a) cell_gallery_pane_g1_ParamLimits

0x3c86,	// (0x00077c5a) cell_gallery_pane_g1

0xa91b,	// (0x0007e8ef) cell_gallery_pane_g2_ParamLimits

0xa91b,	// (0x0007e8ef) cell_gallery_pane_g2

0xa928,	// (0x0007e8fc) cell_gallery_pane_g3_ParamLimits

0xa928,	// (0x0007e8fc) cell_gallery_pane_g3

0x3c92,	// (0x00077c66) cell_gallery_pane_g4_ParamLimits

0x3c92,	// (0x00077c66) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0008368d) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0008368d) cell_gallery_pane_g

0x3c9e,	// (0x00077c72) bg_cell_gallery_focus_pane_g1

0x3ca6,	// (0x00077c7a) bg_cell_gallery_focus_pane_g2

0x3cae,	// (0x00077c82) bg_cell_gallery_focus_pane_g3

0x3cb6,	// (0x00077c8a) bg_cell_gallery_focus_pane_g4

0x3cbe,	// (0x00077c92) bg_cell_gallery_focus_pane_g5

0x3cc6,	// (0x00077c9a) bg_cell_gallery_focus_pane_g6

0x3cce,	// (0x00077ca2) bg_cell_gallery_focus_pane_g7

0x3cd6,	// (0x00077caa) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x00083696) bg_cell_gallery_focus_pane_g

0x3cde,	// (0x00077cb2) aid_firma_cardinal

0x3cf2,	// (0x00077cc6) blid_firmament_pane_t1

0x3d09,	// (0x00077cdd) blid_firmament_pane_t2

0x3d20,	// (0x00077cf4) blid_firmament_pane_t3

0x3d37,	// (0x00077d0b) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000836a7) blid_firmament_pane_t

0x3d4e,	// (0x00077d22) blid_sat_info_pane

0x3d5e,	// (0x00077d32) blid_sat_info_pane_g1

0x3d5e,	// (0x00077d32) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000836b0) blid_sat_info_pane_g

0x3d68,	// (0x00077d3c) blid_sat_info_pane_t1

0x3d76,	// (0x00077d4a) smil2_volume_content_pane

0x3d7f,	// (0x00077d53) smil2_volume_pane_g1

0x3d87,	// (0x00077d5b) smil2_volume_content_pane_g1

0x3d90,	// (0x00077d64) smil2_volume_content_pane_g2

0x3d99,	// (0x00077d6d) smil2_volume_content_pane_g3

0x3da2,	// (0x00077d76) smil2_volume_content_pane_g4

0x3dab,	// (0x00077d7f) smil2_volume_content_pane_g5

0x3db4,	// (0x00077d88) smil2_volume_content_pane_g6

0x3dbd,	// (0x00077d91) smil2_volume_content_pane_g7

0x3dc6,	// (0x00077d9a) smil2_volume_content_pane_g8

0x3dcf,	// (0x00077da3) smil2_volume_content_pane_g9

0x3dd8,	// (0x00077dac) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000836b5) smil2_volume_content_pane_g

0x784b,	// (0x0007b81f) cale_week_day_heading_pane_t1_ParamLimits

0x7866,	// (0x0007b83a) cale_week_day_heading_pane_t2_ParamLimits

0x7881,	// (0x0007b855) cale_week_day_heading_pane_t3_ParamLimits

0x789c,	// (0x0007b870) cale_week_day_heading_pane_t4_ParamLimits

0x78b7,	// (0x0007b88b) cale_week_day_heading_pane_t5_ParamLimits

0x78d2,	// (0x0007b8a6) cale_week_day_heading_pane_t6_ParamLimits

0x78ed,	// (0x0007b8c1) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000831a5) cale_week_day_heading_pane_t_ParamLimits

0x1a8b,	// (0x00075a5f) bg_cale_side_pane_ParamLimits

0x7908,	// (0x0007b8dc) cale_week_time_pane_t1_ParamLimits

0x7922,	// (0x0007b8f6) cale_week_time_pane_t2_ParamLimits

0x793c,	// (0x0007b910) cale_week_time_pane_t3_ParamLimits

0x7956,	// (0x0007b92a) cale_week_time_pane_t4_ParamLimits

0x7970,	// (0x0007b944) cale_week_time_pane_t5_ParamLimits

0x798a,	// (0x0007b95e) cale_week_time_pane_t6_ParamLimits

0x79a8,	// (0x0007b97c) cale_week_time_pane_t7_ParamLimits

0x79ca,	// (0x0007b99e) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000831b4) cale_week_time_pane_t_ParamLimits

0x79ee,	// (0x0007b9c2) cell_cale_week_pane_g2_ParamLimits

0x1a8b,	// (0x00075a5f) bg_cale_side_pane_cp01_ParamLimits

0x8c4d,	// (0x0007cc21) cale_month_week_pane_t1_ParamLimits

0x8c66,	// (0x0007cc3a) cale_month_week_pane_t2_ParamLimits

0x8c7f,	// (0x0007cc53) cale_month_week_pane_t3_ParamLimits

0x8c98,	// (0x0007cc6c) cale_month_week_pane_t4_ParamLimits

0x8cb1,	// (0x0007cc85) cale_month_week_pane_t5_ParamLimits

0x8cd2,	// (0x0007cca6) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x00083289) cale_month_week_pane_t_ParamLimits

0x8e15,	// (0x0007cde9) cell_cale_month_pane_g1_ParamLimits

0x08db,	// (0x000748af) main_cale_event_viewer_pane

0x08db,	// (0x000748af) listscroll_cale_event_viewer_pane

0x3de1,	// (0x00077db5) list_cale_ev_pane

0x3de9,	// (0x00077dbd) scroll_pane_cp023

0x3df5,	// (0x00077dc9) field_cale_ev_pane_ParamLimits

0x3df5,	// (0x00077dc9) field_cale_ev_pane

0x3e13,	// (0x00077de7) field_cale_ev_content_pane_ParamLimits

0x3e13,	// (0x00077de7) field_cale_ev_content_pane

0x3e1f,	// (0x00077df3) field_cale_ev_pane_g1_ParamLimits

0x3e1f,	// (0x00077df3) field_cale_ev_pane_g1

0x3e2b,	// (0x00077dff) field_cale_ev_pane_g2_ParamLimits

0x3e2b,	// (0x00077dff) field_cale_ev_pane_g2

0x3e43,	// (0x00077e17) field_cale_ev_pane_g3_ParamLimits

0x3e43,	// (0x00077e17) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000836ca) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000836ca) field_cale_ev_pane_g

0x3e5b,	// (0x00077e2f) field_cale_ev_pane_t1_ParamLimits

0x3e5b,	// (0x00077e2f) field_cale_ev_pane_t1

0x3e72,	// (0x00077e46) field_cale_ev_content_pane_t1_ParamLimits

0x3e72,	// (0x00077e46) field_cale_ev_content_pane_t1

0x26bb,	// (0x0007668f) bg_button_pane_cp01

0x75dc,	// (0x0007b5b0) listscroll_cale_week_pane_ParamLimits

0x1a36,	// (0x00075a0a) popup_toolbar_window_cp01

0x1a5c,	// (0x00075a30) listscroll_cale_week_pane_t1_ParamLimits

0x75dc,	// (0x0007b5b0) listscroll_cale_day_pane_ParamLimits

0x1a36,	// (0x00075a0a) popup_toolbar_window_cp02

0x1e7e,	// (0x00075e52) listscroll_cale_day_pane_t1_ParamLimits

0x75dc,	// (0x0007b5b0) main_cale_month_pane_ParamLimits

0xa06b,	// (0x0007e03f) popup_toolbar_window_cp03_ParamLimits

0xa06b,	// (0x0007e03f) popup_toolbar_window_cp03

0x99a5,	// (0x0007d979) main_image_pane_g2_ParamLimits

0x99a5,	// (0x0007d979) main_image_pane_g2

0x99b1,	// (0x0007d985) main_image_pane_g3_ParamLimits

0x99b1,	// (0x0007d985) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000834bb) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000834bb) main_image_pane_g

0x27d5,	// (0x000767a9) main_image_pane_t1_ParamLimits

0x99bd,	// (0x0007d991) main_image_pane_t2_ParamLimits

0x99bd,	// (0x0007d991) main_image_pane_t2

0x99cf,	// (0x0007d9a3) main_image_pane_t3_ParamLimits

0x99cf,	// (0x0007d9a3) main_image_pane_t3

0x99e1,	// (0x0007d9b5) main_image_pane_t4_ParamLimits

0x99e1,	// (0x0007d9b5) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000834c2) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000834c2) main_image_pane_t

0x99f3,	// (0x0007d9c7) popup_image_details_window_cp01

0x99fd,	// (0x0007d9d1) popup_toobar_trans_pane_cp01_ParamLimits

0x99fd,	// (0x0007d9d1) popup_toobar_trans_pane_cp01

0x9fbb,	// (0x0007df8f) popup_image_details_window_ParamLimits

0x9fbb,	// (0x0007df8f) popup_image_details_window

0x9fc9,	// (0x0007df9d) popup_image_focus_window

0xa30b,	// (0x0007e2df) camera2_autofocus_pane_ParamLimits

0xa30b,	// (0x0007e2df) camera2_autofocus_pane

0x08db,	// (0x000748af) bg_popup_sub_pane_cp06

0x3e90,	// (0x00077e64) popup_image_focus_window_g1

0x3e98,	// (0x00077e6c) popup_image_focus_window_g2

0x3ea0,	// (0x00077e74) popup_image_focus_window_g3

0x3ea8,	// (0x00077e7c) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000836d1) popup_image_focus_window_g

0x3eb0,	// (0x00077e84) popup_image_focus_window_t1

0x3ebe,	// (0x00077e92) popup_image_focus_window_t2

0x3ece,	// (0x00077ea2) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000836da) popup_image_focus_window_t

0x3edc,	// (0x00077eb0) camera2_autofocus_pane_g1

0x145d,	// (0x00075431) bg_tb_trans_pane_cp01

0x3eea,	// (0x00077ebe) popup_image_details_window_g1

0x3efd,	// (0x00077ed1) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000836ec) popup_image_details_window_g

0x3f26,	// (0x00077efa) popup_image_details_window_t1

0x3f38,	// (0x00077f0c) popup_image_details_window_t2

0x3f51,	// (0x00077f25) popup_image_details_window_t3

0x3f65,	// (0x00077f39) popup_image_details_window_t4

0x3f80,	// (0x00077f54) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000836f3) popup_image_details_window_t

0x13d4,	// (0x000753a8) bg_calc_paper_pane_ParamLimits

0x08db,	// (0x000748af) grid_highlight_pane_cp013

0x7371,	// (0x0007b345) list_calc_pane_ParamLimits

0x7383,	// (0x0007b357) scroll_pane_cp024

0x13e8,	// (0x000753bc) bg_calc_display_pane_ParamLimits

0x738b,	// (0x0007b35f) calc_display_pane_t1_ParamLimits

0x73a0,	// (0x0007b374) calc_display_pane_t2_ParamLimits

0x73b5,	// (0x0007b389) calc_display_pane_t3_ParamLimits

0xf151,	// (0x00083125) calc_display_pane_t_ParamLimits

0x7491,	// (0x0007b465) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x00083142) cell_calc_pane_g

0x749a,	// (0x0007b46e) cell_calc_pane_t1

0x1447,	// (0x0007541b) grid_highlight_pane_cp02_ParamLimits

0x1996,	// (0x0007596a) toolbar_button_pane_cp01_ParamLimits

0x1996,	// (0x0007596a) toolbar_button_pane_cp01

0x281a,	// (0x000767ee) temp_image_control_pane_ParamLimits

0x281a,	// (0x000767ee) temp_image_control_pane

0x145d,	// (0x00075431) main_mp3_pane

0x3f9a,	// (0x00077f6e) temp_image_control_pane_g1_ParamLimits

0x3f9a,	// (0x00077f6e) temp_image_control_pane_g1

0x3fa8,	// (0x00077f7c) temp_image_control_pane_g2_ParamLimits

0x3fa8,	// (0x00077f7c) temp_image_control_pane_g2

0x3fba,	// (0x00077f8e) temp_image_control_pane_g3_ParamLimits

0x3fba,	// (0x00077f8e) temp_image_control_pane_g3

0xa965,	// (0x0007e939) temp_image_control_pane_g4_ParamLimits

0xa965,	// (0x0007e939) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000836fe) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000836fe) temp_image_control_pane_g

0x3f9a,	// (0x00077f6e) main_mp3_pane_g1

0xa976,	// (0x0007e94a) main_mp3_pane_g2

0x0007,

0xf733,	// (0x00083707) main_mp3_pane_g

0x3ffd,	// (0x00077fd1) main_mp3_pane_t1

0x1aee,	// (0x00075ac2) main_camera_pane_g8_ParamLimits

0x1aee,	// (0x00075ac2) main_camera_pane_g8

0x7c7b,	// (0x0007bc4f) main_video_pane_g7_ParamLimits

0x7c7b,	// (0x0007bc4f) main_video_pane_g7

0xa453,	// (0x0007e427) main_camera2_pane_t7_ParamLimits

0xa453,	// (0x0007e427) main_camera2_pane_t7

0x1c36,	// (0x00075c0a) scroll_pane_cp025_ParamLimits

0x1c36,	// (0x00075c0a) scroll_pane_cp025

0x1c4a,	// (0x00075c1e) scroll_pane_cp026_ParamLimits

0x1c4a,	// (0x00075c1e) scroll_pane_cp026

0x1c59,	// (0x00075c2d) wml_content_pane_ParamLimits

0x08db,	// (0x000748af) main_touch_calib_pane

0xaa1a,	// (0x0007e9ee) main_touch_calib_pane_g1

0xaa26,	// (0x0007e9fa) main_touch_calib_pane_g2

0xaa32,	// (0x0007ea06) main_touch_calib_pane_g3

0xaa3e,	// (0x0007ea12) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x00083725) main_touch_calib_pane_g

0xaa4a,	// (0x0007ea1e) main_touch_calib_pane_t1

0xaa63,	// (0x0007ea37) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0008372e) main_touch_calib_pane_t

0x23e7,	// (0x000763bb) mup_progress_pane_cp02

0x241c,	// (0x000763f0) navi_pane_g1

0x24d7,	// (0x000764ab) navi_pane_mp_t3

0x145d,	// (0x00075431) main_mp3_pane_ParamLimits

0xa0a8,	// (0x0007e07c) navi_pane_ParamLimits

0x3f9a,	// (0x00077f6e) main_mp3_pane_g1_ParamLimits

0xa976,	// (0x0007e94a) main_mp3_pane_g2_ParamLimits

0xa982,	// (0x0007e956) main_mp3_pane_g3_ParamLimits

0xa982,	// (0x0007e956) main_mp3_pane_g3

0xa98e,	// (0x0007e962) main_mp3_pane_g4_ParamLimits

0xa98e,	// (0x0007e962) main_mp3_pane_g4

0x3fca,	// (0x00077f9e) main_mp3_pane_g5_ParamLimits

0x3fca,	// (0x00077f9e) main_mp3_pane_g5

0x3fd8,	// (0x00077fac) main_mp3_pane_g6_ParamLimits

0x3fd8,	// (0x00077fac) main_mp3_pane_g6

0x3fe5,	// (0x00077fb9) main_mp3_pane_g7_ParamLimits

0x3fe5,	// (0x00077fb9) main_mp3_pane_g7

0x3ff1,	// (0x00077fc5) main_mp3_pane_g8_ParamLimits

0x3ff1,	// (0x00077fc5) main_mp3_pane_g8

0xf733,	// (0x00083707) main_mp3_pane_g_ParamLimits

0xa99a,	// (0x0007e96e) main_mp3_pane_t2

0xa9aa,	// (0x0007e97e) main_mp3_pane_t3

0x400b,	// (0x00077fdf) main_mp3_pane_t4

0x4019,	// (0x00077fed) main_mp3_pane_t5

0x0005,

0xf744,	// (0x00083718) main_mp3_pane_t

0x4027,	// (0x00077ffb) mup_progress_pane_cp01

0x6d9b,	// (0x0007ad6f) aid_zoom_text_secondary2

0x3de1,	// (0x00077db5) list_cale_ev2_pane

0x3de9,	// (0x00077dbd) scroll_pane_cp023_ParamLimits

0xaabe,	// (0x0007ea92) field_cale_ev2_pane_ParamLimits

0xaabe,	// (0x0007ea92) field_cale_ev2_pane

0xaae7,	// (0x0007eabb) field_cale_ev2_pane_g1_ParamLimits

0xaae7,	// (0x0007eabb) field_cale_ev2_pane_g1

0xaaf3,	// (0x0007eac7) field_cale_ev2_pane_g2_ParamLimits

0xaaf3,	// (0x0007eac7) field_cale_ev2_pane_g2

0xab0b,	// (0x0007eadf) field_cale_ev2_pane_g3_ParamLimits

0xab0b,	// (0x0007eadf) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x00083739) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x00083739) field_cale_ev2_pane_g

0x5dd6,	// (0x00079daa) field_cale_ev2_pane_t1_ParamLimits

0x5dd6,	// (0x00079daa) field_cale_ev2_pane_t1

0x5ded,	// (0x00079dc1) field_cale_ev2_pane_t2_ParamLimits

0x5ded,	// (0x00079dc1) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x00083742) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x00083742) field_cale_ev2_pane_t

0x9885,	// (0x0007d859) main_postcard_pane_g5_ParamLimits

0x9885,	// (0x0007d859) main_postcard_pane_g5

0x9893,	// (0x0007d867) main_postcard_pane_g6_ParamLimits

0x9893,	// (0x0007d867) main_postcard_pane_g6

0x7ac5,	// (0x0007ba99) camera2_autofocus_pane_cp_ParamLimits

0x7ac5,	// (0x0007ba99) camera2_autofocus_pane_cp

0x145d,	// (0x00075431) main_mup3_pane

0xab4e,	// (0x0007eb22) main_mup3_pane_g1_ParamLimits

0xab4e,	// (0x0007eb22) main_mup3_pane_g1

0xab6f,	// (0x0007eb43) main_mup3_pane_g2_ParamLimits

0xab6f,	// (0x0007eb43) main_mup3_pane_g2

0xabe7,	// (0x0007ebbb) main_mup3_pane_g3_ParamLimits

0xabe7,	// (0x0007ebbb) main_mup3_pane_g3

0xac2a,	// (0x0007ebfe) main_mup3_pane_g4_ParamLimits

0xac2a,	// (0x0007ebfe) main_mup3_pane_g4

0xac6d,	// (0x0007ec41) main_mup3_pane_g5_ParamLimits

0xac6d,	// (0x0007ec41) main_mup3_pane_g5

0xacb0,	// (0x0007ec84) main_mup3_pane_g6_ParamLimits

0xacb0,	// (0x0007ec84) main_mup3_pane_g6

0x404f,	// (0x00078023) main_mup3_pane_g7_ParamLimits

0x404f,	// (0x00078023) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x00083752) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x00083752) main_mup3_pane_g

0xad26,	// (0x0007ecfa) main_mup3_pane_t1_ParamLimits

0xad26,	// (0x0007ecfa) main_mup3_pane_t1

0xad95,	// (0x0007ed69) main_mup3_pane_t2_ParamLimits

0xad95,	// (0x0007ed69) main_mup3_pane_t2

0xae5e,	// (0x0007ee32) main_mup3_pane_t4_ParamLimits

0xae5e,	// (0x0007ee32) main_mup3_pane_t4

0xaeac,	// (0x0007ee80) main_mup3_pane_t5_ParamLimits

0xaeac,	// (0x0007ee80) main_mup3_pane_t5

0xaf5c,	// (0x0007ef30) main_mup3_pane_t6_ParamLimits

0xaf5c,	// (0x0007ef30) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x00083763) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x00083763) main_mup3_pane_t

0xb008,	// (0x0007efdc) mup3_progress_pane_ParamLimits

0xb008,	// (0x0007efdc) mup3_progress_pane

0xb086,	// (0x0007f05a) popup_mup3_control_window_ParamLimits

0xb086,	// (0x0007f05a) popup_mup3_control_window

0x405d,	// (0x00078031) popup_mup3_text_window

0xb09f,	// (0x0007f073) mup3_progress_pane_t1

0xb0be,	// (0x0007f092) mup3_progress_pane_t2

0x4065,	// (0x00078039) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x00083770) mup3_progress_pane_t

0x4082,	// (0x00078056) mup_progress_pane_cp03

0x08db,	// (0x000748af) bg_tb_trans_pane_cp04

0xb0dd,	// (0x0007f0b1) mup3_volume_pane

0xb0e5,	// (0x0007f0b9) popup_mup3_control_window_g1

0xb0ee,	// (0x0007f0c2) mup3_volume_pane_g1

0xb0f7,	// (0x0007f0cb) mup3_volume_pane_g2

0xb100,	// (0x0007f0d4) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x00083777) mup3_volume_pane_g

0x08db,	// (0x000748af) bg_tb_trans_pane_cp03

0x4092,	// (0x00078066) popup_mup3_text_window_g1

0x409a,	// (0x0007806e) popup_mup3_text_window_t1

0x1430,	// (0x00075404) list_calc_item_pane_g1_ParamLimits

0x3ab1,	// (0x00077a85) mup_volume_pane_cp_g1

0xaa7c,	// (0x0007ea50) main_touch_calib_pane_t3

0xaa92,	// (0x0007ea66) main_touch_calib_pane_t4

0xaaa8,	// (0x0007ea7c) main_touch_calib_pane_t5

0x6d53,	// (0x0007ad27) aid_cell_size_toolbar2

0x6d5b,	// (0x0007ad2f) aid_popup3_width_pane

0x5ae2,	// (0x00079ab6) aid_zoom_text_msg_primary

0x7a9a,	// (0x0007ba6e) vorec_t7

0x13f4,	// (0x000753c8) bg_calc_paper_pane_g1_ParamLimits

0x140c,	// (0x000753e0) bg_calc_paper_pane_g2_ParamLimits

0x1400,	// (0x000753d4) bg_calc_paper_pane_g3_ParamLimits

0x1424,	// (0x000753f8) bg_calc_paper_pane_g4_ParamLimits

0x1418,	// (0x000753ec) bg_calc_paper_pane_g5_ParamLimits

0x73f4,	// (0x0007b3c8) bg_calc_paper_pane_g6_ParamLimits

0x7405,	// (0x0007b3d9) bg_calc_paper_pane_g7_ParamLimits

0x7416,	// (0x0007b3ea) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0008312c) bg_calc_paper_pane_g_ParamLimits

0x7427,	// (0x0007b3fb) calc_bg_paper_pane_g9_ParamLimits

0x7bac,	// (0x0007bb80) image_qvga_pane_ParamLimits

0x7bac,	// (0x0007bb80) image_qvga_pane

0x1323,	// (0x000752f7) bg_popup_sub_pane_cp04_ParamLimits

0x2751,	// (0x00076725) popup_mup_playback_window_g1_ParamLimits

0x275d,	// (0x00076731) popup_mup_playback_window_t1_ParamLimits

0x2772,	// (0x00076746) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000834b6) popup_mup_playback_window_t_ParamLimits

0xa582,	// (0x0007e556) main_mup2_pane_g3_ParamLimits

0xa582,	// (0x0007e556) main_mup2_pane_g3

0x7e7c,	// (0x0007be50) popup_toolbar_window_cp04

0x2b54,	// (0x00076b28) popup_call2_audio_second_window_g3_ParamLimits

0x2b54,	// (0x00076b28) popup_call2_audio_second_window_g3

0x2f5e,	// (0x00076f32) popup_call2_audio_first_window_g4_ParamLimits

0x2f5e,	// (0x00076f32) popup_call2_audio_first_window_g4

0x35e9,	// (0x000775bd) popup_call2_audio_in_window_g4_ParamLimits

0x35e9,	// (0x000775bd) popup_call2_audio_in_window_g4

0x9998,	// (0x0007d96c) aid_area_sk_bg_cut_ParamLimits

0x9998,	// (0x0007d96c) aid_area_sk_bg_cut

0x2787,	// (0x0007675b) aid_area_sk_bg_cut_2_ParamLimits

0x2787,	// (0x0007675b) aid_area_sk_bg_cut_2

0xa90b,	// (0x0007e8df) aid_placing_details_win

0xa913,	// (0x0007e8e7) aid_placing_details_win_2

0x3edc,	// (0x00077eb0) camera2_autofocus_pane_g1_ParamLimits

0x6faa,	// (0x0007af7e) popup_fixed_preview_cale_window_ParamLimits

0x6faa,	// (0x0007af7e) popup_fixed_preview_cale_window

0x2567,	// (0x0007653b) navi_slider_pane_g3

0x255e,	// (0x00076532) navi_slider_pane_g4

0x2555,	// (0x00076529) navi_slider_pane_g5

0x2567,	// (0x0007653b) navi_slider_pane_g6

0x92d4,	// (0x0007d2a8) navi_slider_pane_g7

0x2688,	// (0x0007665c) mup_scale_pane_g3

0x2691,	// (0x00076665) mup_scale_pane_g4

0x269a,	// (0x0007666e) mup_scale_pane_g5

0x9715,	// (0x0007d6e9) mup_scale_pane_g6

0x971e,	// (0x0007d6f2) mup_scale_pane_g7

0x2567,	// (0x0007653b) cams2_slider_pane_g3

0x3b33,	// (0x00077b07) cams2_slider_pane_g4

0xa863,	// (0x0007e837) cams2_slider_pane_g5

0x2567,	// (0x0007653b) cams2_slider_pane_g6

0xa86b,	// (0x0007e83f) cams2_slider_pane_g7

0x3d5e,	// (0x00077d32) camera2_autofocus_pane_cp_g1

0x394a,	// (0x0007791e) bg_popup_preview_window_pane_cp02_ParamLimits

0x394a,	// (0x0007791e) bg_popup_preview_window_pane_cp02

0x40a8,	// (0x0007807c) list_fp_cale_pane_ParamLimits

0x40a8,	// (0x0007807c) list_fp_cale_pane

0x40b4,	// (0x00078088) popup_fixed_preview_cale_window_t1_ParamLimits

0x40b4,	// (0x00078088) popup_fixed_preview_cale_window_t1

0xb109,	// (0x0007f0dd) popup_fixed_preview_cale_window_t2_ParamLimits

0xb109,	// (0x0007f0dd) popup_fixed_preview_cale_window_t2

0xb11e,	// (0x0007f0f2) popup_fixed_preview_cale_window_t3_ParamLimits

0xb11e,	// (0x0007f0f2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0008377e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0008377e) popup_fixed_preview_cale_window_t

0xb133,	// (0x0007f107) list_single_fp_cale_pane_ParamLimits

0xb133,	// (0x0007f107) list_single_fp_cale_pane

0x40d2,	// (0x000780a6) list_single_fp_cale_pane_g1_ParamLimits

0x40d2,	// (0x000780a6) list_single_fp_cale_pane_g1

0x40de,	// (0x000780b2) list_single_fp_cale_pane_g2_ParamLimits

0x40de,	// (0x000780b2) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x00083785) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x00083785) list_single_fp_cale_pane_g

0x40f7,	// (0x000780cb) list_single_fp_cale_pane_t1_ParamLimits

0x40f7,	// (0x000780cb) list_single_fp_cale_pane_t1

0x4109,	// (0x000780dd) list_single_fp_cale_pane_t2_ParamLimits

0x4109,	// (0x000780dd) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0008378c) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0008378c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x08db,	// (0x000748af) main_dialer_pane

0xb146,	// (0x0007f11a) aid_cell_size_keypad

0xb150,	// (0x0007f124) dialer_ne_pane

0xb15a,	// (0x0007f12e) grid_dialer_command_1_pane

0xb162,	// (0x0007f136) grid_dialer_command_2_pane

0xb16a,	// (0x0007f13e) grid_dialer_keypad_pane

0xb17c,	// (0x0007f150) bg_popup_call_pane_cp06_ParamLimits

0xb17c,	// (0x0007f150) bg_popup_call_pane_cp06

0xb188,	// (0x0007f15c) dialer_ne_clear_pane_ParamLimits

0xb188,	// (0x0007f15c) dialer_ne_clear_pane

0x413c,	// (0x00078110) dialer_ne_pane_g1

0x4144,	// (0x00078118) dialer_ne_pane_t1_ParamLimits

0x4144,	// (0x00078118) dialer_ne_pane_t1

0xb194,	// (0x0007f168) dialer_ne_pane_t2_ParamLimits

0xb194,	// (0x0007f168) dialer_ne_pane_t2

0xb1b1,	// (0x0007f185) dialer_ne_pane_t3_ParamLimits

0xb1b1,	// (0x0007f185) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x00083791) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x00083791) dialer_ne_pane_t

0xb1d5,	// (0x0007f1a9) dialer_ne_pane_t3_copy1_ParamLimits

0xb1d5,	// (0x0007f1a9) dialer_ne_pane_t3_copy1

0xb1f9,	// (0x0007f1cd) cell_dialer_keypad_pane_ParamLimits

0xb1f9,	// (0x0007f1cd) cell_dialer_keypad_pane

0xb210,	// (0x0007f1e4) cell_dialer_command_1_pane_ParamLimits

0xb210,	// (0x0007f1e4) cell_dialer_command_1_pane

0xb226,	// (0x0007f1fa) cell_dialer_command_2_pane_ParamLimits

0xb226,	// (0x0007f1fa) cell_dialer_command_2_pane

0x4156,	// (0x0007812a) bg_button_pane_cp02_ParamLimits

0x4156,	// (0x0007812a) bg_button_pane_cp02

0xb235,	// (0x0007f209) cell_dialer_keypad_pane_g1_ParamLimits

0xb235,	// (0x0007f209) cell_dialer_keypad_pane_g1

0x4156,	// (0x0007812a) bg_button_pane_cp03_ParamLimits

0x4156,	// (0x0007812a) bg_button_pane_cp03

0xb24a,	// (0x0007f21e) cell_dialer_command_1_pane_g1_ParamLimits

0xb24a,	// (0x0007f21e) cell_dialer_command_1_pane_g1

0x4162,	// (0x00078136) bg_button_pane_cp04

0xb25e,	// (0x0007f232) cell_dialer_command_2_pane_g1

0x1ae6,	// (0x00075aba) bg_button_pane_cp06

0x416a,	// (0x0007813e) dialer_ne_clear_pane_g1

0x2428,	// (0x000763fc) navi_pane_g2

0x2456,	// (0x0007642a) navi_pane_g3

0x0002,

0xf3e5,	// (0x000833b9) navi_pane_g

0x24e5,	// (0x000764b9) navi_pane_mv_g2

0x250c,	// (0x000764e0) navi_pane_mv_g5

0x929f,	// (0x0007d273) navi_pane_mv_t1

0x13e8,	// (0x000753bc) main_clock2_pane

0xb29e,	// (0x0007f272) main_clock2_list_pane_ParamLimits

0xb29e,	// (0x0007f272) main_clock2_list_pane

0xb2c6,	// (0x0007f29a) main_clock2_pane_t1_ParamLimits

0xb2c6,	// (0x0007f29a) main_clock2_pane_t1

0xb2e8,	// (0x0007f2bc) main_clock2_pane_t2_ParamLimits

0xb2e8,	// (0x0007f2bc) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0008379d) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0008379d) main_clock2_pane_t

0xb343,	// (0x0007f317) popup_clock_analogue_window_cp03_ParamLimits

0xb343,	// (0x0007f317) popup_clock_analogue_window_cp03

0xb361,	// (0x0007f335) popup_clock_digital_window_cp02_ParamLimits

0xb361,	// (0x0007f335) popup_clock_digital_window_cp02

0xb3ce,	// (0x0007f3a2) main_clock2_list_single_pane_ParamLimits

0xb3ce,	// (0x0007f3a2) main_clock2_list_single_pane

0x1ae6,	// (0x00075aba) list_highlight_pane_cp05

0x41a8,	// (0x0007817c) main_clock2_list_single_pane_t1

0x7e7c,	// (0x0007be50) popup_toolbar_window_cp04_ParamLimits

0xa935,	// (0x0007e909) camera2_autofocus_pane_g2_ParamLimits

0xa935,	// (0x0007e909) camera2_autofocus_pane_g2

0xa941,	// (0x0007e915) camera2_autofocus_pane_g3_ParamLimits

0xa941,	// (0x0007e915) camera2_autofocus_pane_g3

0xa94d,	// (0x0007e921) camera2_autofocus_pane_g4_ParamLimits

0xa94d,	// (0x0007e921) camera2_autofocus_pane_g4

0xa959,	// (0x0007e92d) camera2_autofocus_pane_g5_ParamLimits

0xa959,	// (0x0007e92d) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000836e1) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000836e1) camera2_autofocus_pane_g

0x402f,	// (0x00078003) camera2_autofocus_pane_cp_g2

0x4037,	// (0x0007800b) camera2_autofocus_pane_cp_g3

0x403f,	// (0x00078013) camera2_autofocus_pane_cp_g4

0x4047,	// (0x0007801b) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x00083747) camera2_autofocus_pane_cp_g

0xb174,	// (0x0007f148) popup_dialer_spcha_window

0x08db,	// (0x000748af) bg_popup_sub_pane_cp07

0x41b6,	// (0x0007818a) list_spcha_pane

0x41be,	// (0x00078192) list_single_spcha_pane_ParamLimits

0x41be,	// (0x00078192) list_single_spcha_pane

0x08db,	// (0x000748af) list_highlight_pane_cp06

0x41cf,	// (0x000781a3) list_single_spcha_pane_t1

0x3393,	// (0x00077367) popup_call2_audio_out_window_g4_ParamLimits

0x3393,	// (0x00077367) popup_call2_audio_out_window_g4

0x08db,	// (0x000748af) main_imed2_pane

0x9fd1,	// (0x0007dfa5) popup_imed_adjust2_window

0x9fe4,	// (0x0007dfb8) popup_imed_trans_window_ParamLimits

0x9fe4,	// (0x0007dfb8) popup_imed_trans_window

0x3b9c,	// (0x00077b70) popup_blid_sat_info2_window_t1

0x3baa,	// (0x00077b7e) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x00083676) popup_blid_sat_info2_window_t

0xb477,	// (0x0007f44b) aid_size_cell_colour_35

0xb491,	// (0x0007f465) aid_size_cell_colour_112

0xb4a8,	// (0x0007f47c) aid_size_cell_effect

0x145d,	// (0x00075431) bg_tb_trans_pane_cp02

0x202e,	// (0x00076002) heading_imed_pane

0xb4c2,	// (0x0007f496) listscroll_imed_pane

0x41dd,	// (0x000781b1) heading_imed_pane_g1

0x41e5,	// (0x000781b9) heading_imed_pane_t1

0x41f3,	// (0x000781c7) grid_imed_colour_35_pane_ParamLimits

0x41f3,	// (0x000781c7) grid_imed_colour_35_pane

0xb4ce,	// (0x0007f4a2) grid_imed_effect_pane

0x420a,	// (0x000781de) list_imed_aspect_pane

0xb4de,	// (0x0007f4b2) scroll_pane_cp027_ParamLimits

0xb4de,	// (0x0007f4b2) scroll_pane_cp027

0xb4ea,	// (0x0007f4be) cell_imed_effect_pane_ParamLimits

0xb4ea,	// (0x0007f4be) cell_imed_effect_pane

0x4212,	// (0x000781e6) cell_imed_colour_pane_ParamLimits

0x4212,	// (0x000781e6) cell_imed_colour_pane

0x4254,	// (0x00078228) cell_imed_colour_pane_g1_ParamLimits

0x4254,	// (0x00078228) cell_imed_colour_pane_g1

0x4265,	// (0x00078239) hgihlgiht_grid_pane_cp016_ParamLimits

0x4265,	// (0x00078239) hgihlgiht_grid_pane_cp016

0xb502,	// (0x0007f4d6) cell_imed_effect_pane_g1

0xb50a,	// (0x0007f4de) grid_highlight_pane_cp017

0x4276,	// (0x0007824a) list_imed_single_pane_ParamLimits

0x4276,	// (0x0007824a) list_imed_single_pane

0x08db,	// (0x000748af) list_highlight_pane_cp07

0x428b,	// (0x0007825f) list_imed_aspect_pane_comp1_t1

0x3956,	// (0x0007792a) bg_tb_trans_pane_cp05

0x42ad,	// (0x00078281) popup_imed_adjust2_window_g1

0x42d4,	// (0x000782a8) popup_imed_adjust2_window_t1

0x42ec,	// (0x000782c0) slider_imed_adjust_pane

0x4300,	// (0x000782d4) slider_imed_adjust_pane_g1

0x4310,	// (0x000782e4) slider_imed_adjust_pane_g2

0x4320,	// (0x000782f4) slider_imed_adjust_pane_g3

0x4331,	// (0x00078305) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000837ba) slider_imed_adjust_pane_g

0xb513,	// (0x0007f4e7) aid_size_cell_clipart2

0xb51f,	// (0x0007f4f3) grid_imed_clipart_pane

0x4342,	// (0x00078316) scroll_pane_cp031

0xb529,	// (0x0007f4fd) cell_imed_clipart_pane_ParamLimits

0xb529,	// (0x0007f4fd) cell_imed_clipart_pane

0xb54b,	// (0x0007f51f) cell_imed_clipart_pane_g1

0x08db,	// (0x000748af) grid_highlight_pane_cp014

0xb2aa,	// (0x0007f27e) main_clock2_pane_g1_ParamLimits

0xb2aa,	// (0x0007f27e) main_clock2_pane_g1

0xb379,	// (0x0007f34d) aid_call2_pane_cp10

0xb38b,	// (0x0007f35f) aid_call_pane_cp10

0x2389,	// (0x0007635d) popup_clock_analogue_window_cp10_g1

0x2389,	// (0x0007635d) popup_clock_analogue_window_cp10_g2

0xb39d,	// (0x0007f371) popup_clock_analogue_window_cp10_g3

0xb39d,	// (0x0007f371) popup_clock_analogue_window_cp10_g4

0x2389,	// (0x0007635d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000837a8) popup_clock_analogue_window_cp10_g

0xb3af,	// (0x0007f383) popup_clock_analogue_window_cp10_t1

0xb3e0,	// (0x0007f3b4) clock_digital_number_pane_cp10_ParamLimits

0xb3e0,	// (0x0007f3b4) clock_digital_number_pane_cp10

0xb3f8,	// (0x0007f3cc) clock_digital_number_pane_cp11_ParamLimits

0xb3f8,	// (0x0007f3cc) clock_digital_number_pane_cp11

0xb410,	// (0x0007f3e4) clock_digital_number_pane_cp12_ParamLimits

0xb410,	// (0x0007f3e4) clock_digital_number_pane_cp12

0xb428,	// (0x0007f3fc) clock_digital_number_pane_cp13_ParamLimits

0xb428,	// (0x0007f3fc) clock_digital_number_pane_cp13

0xb440,	// (0x0007f414) clock_digital_separator_pane_cp10_ParamLimits

0xb440,	// (0x0007f414) clock_digital_separator_pane_cp10

0xb458,	// (0x0007f42c) popup_clock_digital_window_cp02_t1_ParamLimits

0xb458,	// (0x0007f42c) popup_clock_digital_window_cp02_t1

0x131b,	// (0x000752ef) clock_digital_number_pane_cp10_g1

0x131b,	// (0x000752ef) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000837c3) clock_digital_number_pane_cp10_g

0x131b,	// (0x000752ef) clock_digital_separator_pane_cp10_g1

0x131b,	// (0x000752ef) clock_digital_separator_pane_g2_cp10

0x2514,	// (0x000764e8) navi_pane_vded_g4

0x251d,	// (0x000764f1) navi_pane_vded_g5

0x2526,	// (0x000764fa) navi_pane_vded_t1

0x08db,	// (0x000748af) main_vded_pane

0xb554,	// (0x0007f528) main_vded_pane_g1

0xb560,	// (0x0007f534) main_vded_pane_g2

0xb56a,	// (0x0007f53e) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000837c8) main_vded_pane_g

0xb574,	// (0x0007f548) main_vded_pane_t1

0xb582,	// (0x0007f556) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000837cf) main_vded_pane_t

0xb590,	// (0x0007f564) vded_slider_pane

0xb59a,	// (0x0007f56e) vded_video_pane

0x434a,	// (0x0007831e) vded_video_pane_g1

0xb5a4,	// (0x0007f578) vded_video_pane_g2

0x3d5e,	// (0x00077d32) vded_video_pane_g3

0x0002,

0xf800,	// (0x000837d4) vded_video_pane_g

0x4354,	// (0x00078328) vded_slider_pane_g1

0x3ab1,	// (0x00077a85) vded_slider_pane_g2

0x435d,	// (0x00078331) vded_slider_pane_g3

0x4366,	// (0x0007833a) vded_slider_pane_g4

0x436f,	// (0x00078343) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000837db) vded_slider_pane_g

0xb078,	// (0x0007f04c) mup3_rocker_pane_ParamLimits

0xb078,	// (0x0007f04c) mup3_rocker_pane

0xb5ad,	// (0x0007f581) mup3_control_keys_pane_g1

0xb5b5,	// (0x0007f589) mup3_control_keys_pane_g2

0xb5bd,	// (0x0007f591) mup3_control_keys_pane_g3

0xb5c5,	// (0x0007f599) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000837e6) mup3_control_keys_pane_g

0x6fd2,	// (0x0007afa6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6fd2,	// (0x0007afa6) popup_toolbar2_fixed_window_cp01

0xb092,	// (0x0007f066) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb092,	// (0x0007f066) popup_toolbar2_fixed_window_cp02

0x2cc6,	// (0x00076c9a) popup_call2_audio_second_window_t4_ParamLimits

0x2cc6,	// (0x00076c9a) popup_call2_audio_second_window_t4

0x31f4,	// (0x000771c8) popup_call2_audio_first_window_t6_ParamLimits

0x31f4,	// (0x000771c8) popup_call2_audio_first_window_t6

0x3496,	// (0x0007746a) popup_call2_audio_out_window_t6_ParamLimits

0x3496,	// (0x0007746a) popup_call2_audio_out_window_t6

0x08db,	// (0x000748af) main_vitu_pane

0xb5d5,	// (0x0007f5a9) aid_size_cell_itu_ParamLimits

0xb5d5,	// (0x0007f5a9) aid_size_cell_itu

0x4c37,	// (0x00078c0b) bg_popup_window_pane_cp08_ParamLimits

0x4c37,	// (0x00078c0b) bg_popup_window_pane_cp08

0xb5e3,	// (0x0007f5b7) field_vitu_entry_pane_ParamLimits

0xb5e3,	// (0x0007f5b7) field_vitu_entry_pane

0xb5f2,	// (0x0007f5c6) grid_vitu_function_pane_ParamLimits

0xb5f2,	// (0x0007f5c6) grid_vitu_function_pane

0xb602,	// (0x0007f5d6) grid_vitu_itu_pane_ParamLimits

0xb602,	// (0x0007f5d6) grid_vitu_itu_pane

0xb612,	// (0x0007f5e6) cell_vitu_itu_pane_ParamLimits

0xb612,	// (0x0007f5e6) cell_vitu_itu_pane

0xb627,	// (0x0007f5fb) cell_vitu_function_pane_ParamLimits

0xb627,	// (0x0007f5fb) cell_vitu_function_pane

0x145d,	// (0x00075431) bg_popup_sub_pane_cp08_ParamLimits

0x145d,	// (0x00075431) bg_popup_sub_pane_cp08

0xb639,	// (0x0007f60d) field_vitu_entry_pane_t1_ParamLimits

0xb639,	// (0x0007f60d) field_vitu_entry_pane_t1

0x4390,	// (0x00078364) field_vitu_entry_pane_t2_ParamLimits

0x4390,	// (0x00078364) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000837f4) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000837f4) field_vitu_entry_pane_t

0x43ad,	// (0x00078381) bg_button_pane_cp05_ParamLimits

0x43ad,	// (0x00078381) bg_button_pane_cp05

0xb655,	// (0x0007f629) cell_vitu_itu_pane_g1

0xb66d,	// (0x0007f641) cell_vitu_itu_pane_t1_ParamLimits

0xb66d,	// (0x0007f641) cell_vitu_itu_pane_t1

0xb67f,	// (0x0007f653) cell_vitu_itu_pane_t2_ParamLimits

0xb67f,	// (0x0007f653) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000837f9) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000837f9) cell_vitu_itu_pane_t

0x43bb,	// (0x0007838f) bg_button_pane_cp07

0xb6b4,	// (0x0007f688) cell_vitu_function_pane_g1

0x7298,	// (0x0007b26c) main_calc_pane_g1

0x6d8f,	// (0x0007ad63) aid_visual_content_pane

0x08db,	// (0x000748af) main_vradio_pane

0xb6bd,	// (0x0007f691) main_vradio_pane_g1_ParamLimits

0xb6bd,	// (0x0007f691) main_vradio_pane_g1

0x43c5,	// (0x00078399) main_vradio_pane_g2_ParamLimits

0x43c5,	// (0x00078399) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x00083800) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x00083800) main_vradio_pane_g

0xb6cd,	// (0x0007f6a1) main_vradio_pane_t1_ParamLimits

0xb6cd,	// (0x0007f6a1) main_vradio_pane_t1

0xb6df,	// (0x0007f6b3) main_vradio_pane_t2_ParamLimits

0xb6df,	// (0x0007f6b3) main_vradio_pane_t2

0x43d2,	// (0x000783a6) main_vradio_pane_t3_ParamLimits

0x43d2,	// (0x000783a6) main_vradio_pane_t3

0x0002,

0xf831,	// (0x00083805) main_vradio_pane_t_ParamLimits

0xf831,	// (0x00083805) main_vradio_pane_t

0xb6f1,	// (0x0007f6c5) vradio_rocker_control_pane_ParamLimits

0xb6f1,	// (0x0007f6c5) vradio_rocker_control_pane

0xb6fd,	// (0x0007f6d1) vradio_station_info_pane_ParamLimits

0xb6fd,	// (0x0007f6d1) vradio_station_info_pane

0x43e6,	// (0x000783ba) vradio_frequency_info_pane_ParamLimits

0x43e6,	// (0x000783ba) vradio_frequency_info_pane

0x3d5e,	// (0x00077d32) vradio_station_info_pane_g1

0x43f5,	// (0x000783c9) vradio_station_info_pane_t1_ParamLimits

0x43f5,	// (0x000783c9) vradio_station_info_pane_t1

0x4417,	// (0x000783eb) vradio_station_info_pane_t2_ParamLimits

0x4417,	// (0x000783eb) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0008380c) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0008380c) vradio_station_info_pane_t

0x4429,	// (0x000783fd) vradio_tuning_pane

0x4431,	// (0x00078405) vradio_rocker_control_pane_g1

0x4439,	// (0x0007840d) vradio_rocker_control_pane_g2

0x4441,	// (0x00078415) vradio_rocker_control_pane_g3

0x4449,	// (0x0007841d) vradio_rocker_control_pane_g4

0x4451,	// (0x00078425) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x00083811) vradio_rocker_control_pane_g

0xb70c,	// (0x0007f6e0) vradio_frequency_info_pane_g1

0x4459,	// (0x0007842d) vradio_frequency_info_pane_t1_ParamLimits

0x4459,	// (0x0007842d) vradio_frequency_info_pane_t1

0xb716,	// (0x0007f6ea) vradio_tuning_pane_g1

0xb71f,	// (0x0007f6f3) vradio_tuning_pane_t1

0x6dd8,	// (0x0007adac) area_side_right_pane_ParamLimits

0x6dd8,	// (0x0007adac) area_side_right_pane

0x3911,	// (0x000778e5) status_small_pane_g1

0x3919,	// (0x000778ed) status_small_pane_g2

0x3922,	// (0x000778f6) status_small_pane_g3

0x392b,	// (0x000778ff) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000835cc) status_small_pane_g

0x3934,	// (0x00077908) status_small_pane_t1

0x08db,	// (0x000748af) main_video3_pane

0x446d,	// (0x00078441) cams_zoom_vslider_pane

0x4475,	// (0x00078449) image3_wide_pane_ParamLimits

0x4475,	// (0x00078449) image3_wide_pane

0x448f,	// (0x00078463) image3_wide_small_pane

0x449b,	// (0x0007846f) main_video3_pane_g1_ParamLimits

0x449b,	// (0x0007846f) main_video3_pane_g1

0x44b7,	// (0x0007848b) main_video3_pane_g2_ParamLimits

0x44b7,	// (0x0007848b) main_video3_pane_g2

0x0001,

0xf848,	// (0x0008381c) main_video3_pane_g_ParamLimits

0xf848,	// (0x0008381c) main_video3_pane_g

0x44d3,	// (0x000784a7) main_video3_pane_t1_ParamLimits

0x44d3,	// (0x000784a7) main_video3_pane_t1

0x44fe,	// (0x000784d2) main_video3_pane_t2_ParamLimits

0x44fe,	// (0x000784d2) main_video3_pane_t2

0x4529,	// (0x000784fd) main_video3_pane_t3_ParamLimits

0x4529,	// (0x000784fd) main_video3_pane_t3

0x0002,

0xf84d,	// (0x00083821) main_video3_pane_t_ParamLimits

0xf84d,	// (0x00083821) main_video3_pane_t

0x4556,	// (0x0007852a) cams_zoom_vslider_pane_g1

0x455f,	// (0x00078533) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x00083828) cams_zoom_vslider_pane_g

0x4567,	// (0x0007853b) small_slider_vertical_pane

0x3d5e,	// (0x00077d32) small_slider_vertical_pane_g1

0x3d5e,	// (0x00077d32) small_slider_vertical_pane_g2

0x456f,	// (0x00078543) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0008382d) small_slider_vertical_pane_g

0x08db,	// (0x000748af) main_hwr_training_pane

0x4578,	// (0x0007854c) hwr_training_instruct_pane_ParamLimits

0x4578,	// (0x0007854c) hwr_training_instruct_pane

0xb72e,	// (0x0007f702) hwr_training_navi_pane_ParamLimits

0xb72e,	// (0x0007f702) hwr_training_navi_pane

0xb748,	// (0x0007f71c) hwr_training_write_pane_ParamLimits

0xb748,	// (0x0007f71c) hwr_training_write_pane

0x08db,	// (0x000748af) bg_frame_shadow_pane

0x45af,	// (0x00078583) hwr_training_write_pane_g1

0x45b7,	// (0x0007858b) hwr_training_write_pane_g2

0x45bf,	// (0x00078593) hwr_training_write_pane_g3

0x45c7,	// (0x0007859b) hwr_training_write_pane_g4

0x45cf,	// (0x000785a3) hwr_training_write_pane_g5

0x45d7,	// (0x000785ab) hwr_training_write_pane_g6

0x45df,	// (0x000785b3) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x00083834) hwr_training_write_pane_g

0xb780,	// (0x0007f754) hwr_training_navi_pane_g1_ParamLimits

0xb780,	// (0x0007f754) hwr_training_navi_pane_g1

0xb792,	// (0x0007f766) hwr_training_navi_pane_g2_ParamLimits

0xb792,	// (0x0007f766) hwr_training_navi_pane_g2

0xb7a4,	// (0x0007f778) hwr_training_navi_pane_g3_ParamLimits

0xb7a4,	// (0x0007f778) hwr_training_navi_pane_g3

0xb7b4,	// (0x0007f788) hwr_training_navi_pane_g4_ParamLimits

0xb7b4,	// (0x0007f788) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x00083843) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x00083843) hwr_training_navi_pane_g

0xb7ce,	// (0x0007f7a2) hwr_training_navi_pane_t1

0xb7dc,	// (0x0007f7b0) list_single_hwr_training_instruct_pane_ParamLimits

0xb7dc,	// (0x0007f7b0) list_single_hwr_training_instruct_pane

0x45e7,	// (0x000785bb) list_single_hwr_training_instruct_pane_t1

0x3c9e,	// (0x00077c72) bg_frame_shadow_pane_g1

0x45f6,	// (0x000785ca) bg_frame_shadow_pane_g2

0x45fe,	// (0x000785d2) bg_frame_shadow_pane_g3

0x4606,	// (0x000785da) bg_frame_shadow_pane_g4

0x460e,	// (0x000785e2) bg_frame_shadow_pane_g5

0x4616,	// (0x000785ea) bg_frame_shadow_pane_g6

0x461e,	// (0x000785f2) bg_frame_shadow_pane_g7

0x19da,	// (0x000759ae) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0008384e) bg_frame_shadow_pane_g

0x08db,	// (0x000748af) main_video_tele_dialer_pane

0xb801,	// (0x0007f7d5) aid_size_cell_video_keypad_ParamLimits

0xb801,	// (0x0007f7d5) aid_size_cell_video_keypad

0xb811,	// (0x0007f7e5) grid_video_dialer_keypad_pane_ParamLimits

0xb811,	// (0x0007f7e5) grid_video_dialer_keypad_pane

0xb845,	// (0x0007f819) video_down_pane_cp_ParamLimits

0xb845,	// (0x0007f819) video_down_pane_cp

0xb86f,	// (0x0007f843) cell_video_dialer_keypad_pane_ParamLimits

0xb86f,	// (0x0007f843) cell_video_dialer_keypad_pane

0x4626,	// (0x000785fa) bg_button_pane_cp08_ParamLimits

0x4626,	// (0x000785fa) bg_button_pane_cp08

0xb884,	// (0x0007f858) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb884,	// (0x0007f858) cell_video_dialer_keypad_pane_g1

0xb06c,	// (0x0007f040) mup3_rocker2_pane_ParamLimits

0xb06c,	// (0x0007f040) mup3_rocker2_pane

0x3d5e,	// (0x00077d32) mup3_rocker2_pane_g1

0x9f41,	// (0x0007df15) main_dialer2_pane

0x08db,	// (0x000748af) main_mp4_pane

0xb8c3,	// (0x0007f897) main_mp4_pane_g1_ParamLimits

0xb8c3,	// (0x0007f897) main_mp4_pane_g1

0xb8d1,	// (0x0007f8a5) main_mp4_pane_g2_ParamLimits

0xb8d1,	// (0x0007f8a5) main_mp4_pane_g2

0xb8df,	// (0x0007f8b3) main_mp4_pane_g3_ParamLimits

0xb8df,	// (0x0007f8b3) main_mp4_pane_g3

0xb924,	// (0x0007f8f8) main_mp4_pane_g4_ParamLimits

0xb924,	// (0x0007f8f8) main_mp4_pane_g4

0xb94c,	// (0x0007f920) main_mp4_pane_g5_ParamLimits

0xb94c,	// (0x0007f920) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0008386e) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0008386e) main_mp4_pane_g

0xb99c,	// (0x0007f970) main_mp4_pane_t1_ParamLimits

0xb99c,	// (0x0007f970) main_mp4_pane_t1

0xb9f8,	// (0x0007f9cc) main_mp4_pane_t2_ParamLimits

0xb9f8,	// (0x0007f9cc) main_mp4_pane_t2

0x4632,	// (0x00078606) main_mp4_pane_t3_ParamLimits

0x4632,	// (0x00078606) main_mp4_pane_t3

0xba4a,	// (0x0007fa1e) main_mp4_pane_t4_ParamLimits

0xba4a,	// (0x0007fa1e) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0008387b) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0008387b) main_mp4_pane_t

0xba8e,	// (0x0007fa62) mp4_progress_pane_ParamLimits

0xba8e,	// (0x0007fa62) mp4_progress_pane

0xbad8,	// (0x0007faac) mp4_rocker_pane_ParamLimits

0xbad8,	// (0x0007faac) mp4_rocker_pane

0x465a,	// (0x0007862e) mp4_progress_pane_t1

0x4673,	// (0x00078647) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x00083884) mp4_progress_pane_t

0x468c,	// (0x00078660) mup_progress_pane_cp04

0x3d5e,	// (0x00077d32) mp4_rocker_pane_g1

0xbaf8,	// (0x0007facc) aid_cell_size_keypad2_ParamLimits

0xbaf8,	// (0x0007facc) aid_cell_size_keypad2

0xbb08,	// (0x0007fadc) dialer2_ne_pane_ParamLimits

0xbb08,	// (0x0007fadc) dialer2_ne_pane

0xbb16,	// (0x0007faea) grid_dialer2_keypad_pane_ParamLimits

0xbb16,	// (0x0007faea) grid_dialer2_keypad_pane

0x4c29,	// (0x00078bfd) bg_popup_call_pane_cp07_ParamLimits

0x4c29,	// (0x00078bfd) bg_popup_call_pane_cp07

0xbb26,	// (0x0007fafa) dialer2_ne_pane_t1_ParamLimits

0xbb26,	// (0x0007fafa) dialer2_ne_pane_t1

0xbb4b,	// (0x0007fb1f) cell_dialer2_keypad_pane_ParamLimits

0xbb4b,	// (0x0007fb1f) cell_dialer2_keypad_pane

0x46aa,	// (0x0007867e) bg_button_pane_pane_cp04_ParamLimits

0x46aa,	// (0x0007867e) bg_button_pane_pane_cp04

0xbb60,	// (0x0007fb34) cell_dialer2_keypad_pane_g1_ParamLimits

0xbb60,	// (0x0007fb34) cell_dialer2_keypad_pane_g1

0x7d3e,	// (0x0007bd12) aid_placing_vt_set_content_ParamLimits

0x7d3e,	// (0x0007bd12) aid_placing_vt_set_content

0x7d6a,	// (0x0007bd3e) aid_placing_vt_set_title_ParamLimits

0x7d6a,	// (0x0007bd3e) aid_placing_vt_set_title

0x08db,	// (0x000748af) main_image3_pane

0xbbfa,	// (0x0007fbce) area_side_right_pane_cp01_ParamLimits

0xbbfa,	// (0x0007fbce) area_side_right_pane_cp01

0xecf4,	// (0x00082cc8) main_image3_pane_g1_ParamLimits

0xecf4,	// (0x00082cc8) main_image3_pane_g1

0xbc27,	// (0x0007fbfb) main_image3_pane_g2_ParamLimits

0xbc27,	// (0x0007fbfb) main_image3_pane_g2

0xbc40,	// (0x0007fc14) main_image3_pane_g3_ParamLimits

0xbc40,	// (0x0007fc14) main_image3_pane_g3

0xbc59,	// (0x0007fc2d) main_image3_pane_g4_ParamLimits

0xbc59,	// (0x0007fc2d) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x00083893) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x00083893) main_image3_pane_g

0xbc72,	// (0x0007fc46) main_image3_pane_t1_ParamLimits

0xbc72,	// (0x0007fc46) main_image3_pane_t1

0xbc97,	// (0x0007fc6b) main_image3_pane_t2_ParamLimits

0xbc97,	// (0x0007fc6b) main_image3_pane_t2

0xbcb6,	// (0x0007fc8a) main_image3_pane_t3_ParamLimits

0xbcb6,	// (0x0007fc8a) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0008389c) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0008389c) main_image3_pane_t

0x4c37,	// (0x00078c0b) grid_sctrl_middle_pane_cp01_ParamLimits

0x4c37,	// (0x00078c0b) grid_sctrl_middle_pane_cp01

0xbd17,	// (0x0007fceb) cell_sctrl_middle_pane_cp01_ParamLimits

0xbd17,	// (0x0007fceb) cell_sctrl_middle_pane_cp01

0xbd28,	// (0x0007fcfc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbd28,	// (0x0007fcfc) cell_sctrl_middle_pane_cp01_g1

0x08db,	// (0x000748af) main_call4_pane

0xbd35,	// (0x0007fd09) aid_size_button_call4_ParamLimits

0xbd35,	// (0x0007fd09) aid_size_button_call4

0xbd65,	// (0x0007fd39) call4_windows_pane_ParamLimits

0xbd65,	// (0x0007fd39) call4_windows_pane

0xbd7f,	// (0x0007fd53) grid_call4_button_pane_ParamLimits

0xbd7f,	// (0x0007fd53) grid_call4_button_pane

0x46b6,	// (0x0007868a) call4_windows_conf_pane

0x46cd,	// (0x000786a1) popup_call4_audio_first_window_ParamLimits

0x46cd,	// (0x000786a1) popup_call4_audio_first_window

0x4715,	// (0x000786e9) popup_call4_audio_second_window_ParamLimits

0x4715,	// (0x000786e9) popup_call4_audio_second_window

0x472e,	// (0x00078702) popup_call4_audio_wait_window_ParamLimits

0x472e,	// (0x00078702) popup_call4_audio_wait_window

0xbda3,	// (0x0007fd77) cell_call4_button_pane_ParamLimits

0xbda3,	// (0x0007fd77) cell_call4_button_pane

0xbdc8,	// (0x0007fd9c) bg_button_pane_cp09_ParamLimits

0xbdc8,	// (0x0007fd9c) bg_button_pane_cp09

0xbdd4,	// (0x0007fda8) cell_call4_button_pane_g1_ParamLimits

0xbdd4,	// (0x0007fda8) cell_call4_button_pane_g1

0xbde1,	// (0x0007fdb5) cell_call4_button_pane_t1_ParamLimits

0xbde1,	// (0x0007fdb5) cell_call4_button_pane_t1

0x4744,	// (0x00078718) popup_call4_audio_conf_window_ParamLimits

0x4744,	// (0x00078718) popup_call4_audio_conf_window

0xb09f,	// (0x0007f073) mup3_progress_pane_t1_ParamLimits

0xb0be,	// (0x0007f092) mup3_progress_pane_t2_ParamLimits

0x4065,	// (0x00078039) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x00083770) mup3_progress_pane_t_ParamLimits

0x4082,	// (0x00078056) mup_progress_pane_cp03_ParamLimits

0xb5cd,	// (0x0007f5a1) mup3_control_keys_pane_g4_copy1

0xbabc,	// (0x0007fa90) mp4_rocker2_pane_ParamLimits

0xbabc,	// (0x0007fa90) mp4_rocker2_pane

0x4760,	// (0x00078734) mp4_rocker2_pane_g1

0x4758,	// (0x0007872c) mp4_rocker2_pane_g2

0xbe25,	// (0x0007fdf9) mp4_rocker2_pane_g3

0xbe2d,	// (0x0007fe01) mp4_rocker2_pane_g4

0xbe35,	// (0x0007fe09) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000838a5) mp4_rocker2_pane_g

0x08db,	// (0x000748af) main_camera4_pane

0x08db,	// (0x000748af) main_video4_pane

0xb821,	// (0x0007f7f5) main_video_tele_dialer_pane_t1_ParamLimits

0xb821,	// (0x0007f7f5) main_video_tele_dialer_pane_t1

0xb833,	// (0x0007f807) main_video_tele_dialer_pane_t2_ParamLimits

0xb833,	// (0x0007f807) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0008385f) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0008385f) main_video_tele_dialer_pane_t

0xbe55,	// (0x0007fe29) cam4_autofocus_pane_ParamLimits

0xbe55,	// (0x0007fe29) cam4_autofocus_pane

0xbe6f,	// (0x0007fe43) cam4_image_uncrop_pane_ParamLimits

0xbe6f,	// (0x0007fe43) cam4_image_uncrop_pane

0xbe86,	// (0x0007fe5a) cam4_indicators_pane_ParamLimits

0xbe86,	// (0x0007fe5a) cam4_indicators_pane

0xbea2,	// (0x0007fe76) main_camera4_pane_g1_ParamLimits

0xbea2,	// (0x0007fe76) main_camera4_pane_g1

0xbeae,	// (0x0007fe82) main_camera4_pane_g2_ParamLimits

0xbeae,	// (0x0007fe82) main_camera4_pane_g2

0xbeae,	// (0x0007fe82) main_camera4_pane_g3_ParamLimits

0xbeae,	// (0x0007fe82) main_camera4_pane_g3

0xbeba,	// (0x0007fe8e) main_camera4_pane_g4_ParamLimits

0xbeba,	// (0x0007fe8e) main_camera4_pane_g4

0xbec6,	// (0x0007fe9a) main_camera4_pane_g5_ParamLimits

0xbec6,	// (0x0007fe9a) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000838b0) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000838b0) main_camera4_pane_g

0xbee0,	// (0x0007feb4) main_camera4_pane_t1_ParamLimits

0xbee0,	// (0x0007feb4) main_camera4_pane_t1

0x3fca,	// (0x00077f9e) bg_tb_trans_pane_cp06

0xbf30,	// (0x0007ff04) cam4_indicators_pane_g1

0xbf41,	// (0x0007ff15) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000838cb) cam4_indicators_pane_g

0xbf5f,	// (0x0007ff33) cam4_indicators_pane_t1

0xbf89,	// (0x0007ff5d) main_video4_pane_g1_ParamLimits

0xbf89,	// (0x0007ff5d) main_video4_pane_g1

0xbf95,	// (0x0007ff69) main_video4_pane_g2_ParamLimits

0xbf95,	// (0x0007ff69) main_video4_pane_g2

0xbfa1,	// (0x0007ff75) main_video4_pane_g3_ParamLimits

0xbfa1,	// (0x0007ff75) main_video4_pane_g3

0xbfad,	// (0x0007ff81) main_video4_pane_g4_ParamLimits

0xbfad,	// (0x0007ff81) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000838d2) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000838d2) main_video4_pane_g

0xbfcd,	// (0x0007ffa1) vid4_indicators_pane_ParamLimits

0xbfcd,	// (0x0007ffa1) vid4_indicators_pane

0xbfec,	// (0x0007ffc0) video4_image_uncrop_cif_pane_ParamLimits

0xbfec,	// (0x0007ffc0) video4_image_uncrop_cif_pane

0xbffb,	// (0x0007ffcf) video4_image_uncrop_nhd_pane_ParamLimits

0xbffb,	// (0x0007ffcf) video4_image_uncrop_nhd_pane

0xbe6f,	// (0x0007fe43) video4_image_uncrop_vga_pane_ParamLimits

0xbe6f,	// (0x0007fe43) video4_image_uncrop_vga_pane

0x145d,	// (0x00075431) bg_tb_trans_pane_cp07

0xc012,	// (0x0007ffe6) vid4_indicators_pane_g1

0xc026,	// (0x0007fffa) vid4_indicators_pane_g2

0xc03a,	// (0x0008000e) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000838dd) vid4_indicators_pane_g

0xc069,	// (0x0008003d) vid4_indicators_pane_t1

0xc080,	// (0x00080054) cam4_autofocus_pane_g1

0xc088,	// (0x0008005c) cam4_autofocus_pane_g2

0xc090,	// (0x00080064) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000838e8) cam4_autofocus_pane_g

0xc098,	// (0x0008006c) cam4_autofocus_pane_g3_copy1

0xb853,	// (0x0007f827) video_down_pane_cp_t1

0xb861,	// (0x0007f835) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x00083864) video_down_pane_cp_t

0x4c37,	// (0x00078c0b) popup_vitu2_window_ParamLimits

0x4c37,	// (0x00078c0b) popup_vitu2_window

0xc0a0,	// (0x00080074) aid_size_cell2_itu2_ParamLimits

0xc0a0,	// (0x00080074) aid_size_cell2_itu2

0xc0c2,	// (0x00080096) aid_size_cell_itu2_ParamLimits

0xc0c2,	// (0x00080096) aid_size_cell_itu2

0x4c29,	// (0x00078bfd) bg_popup_window_pane_cp09_ParamLimits

0x4c29,	// (0x00078bfd) bg_popup_window_pane_cp09

0xc106,	// (0x000800da) field_vitu2_entry_pane_ParamLimits

0xc106,	// (0x000800da) field_vitu2_entry_pane

0xc126,	// (0x000800fa) grid_vitu2_function_pane_ParamLimits

0xc126,	// (0x000800fa) grid_vitu2_function_pane

0xc16a,	// (0x0008013e) grid_vitu2_itu_pane_ParamLimits

0xc16a,	// (0x0008013e) grid_vitu2_itu_pane

0xc1e6,	// (0x000801ba) cell_vitu2_itu_pane_ParamLimits

0xc1e6,	// (0x000801ba) cell_vitu2_itu_pane

0xc1ff,	// (0x000801d3) cell_vitu2_function_pane_ParamLimits

0xc1ff,	// (0x000801d3) cell_vitu2_function_pane

0x4768,	// (0x0007873c) bg_popup_call_pane_cp08_ParamLimits

0x4768,	// (0x0007873c) bg_popup_call_pane_cp08

0x477f,	// (0x00078753) field_vitu2_entry_pane_g1

0x478b,	// (0x0007875f) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000838ef) field_vitu2_entry_pane_g

0x5e02,	// (0x00079dd6) field_vitu2_entry_pane_t1_ParamLimits

0x5e02,	// (0x00079dd6) field_vitu2_entry_pane_t1

0x5e32,	// (0x00079e06) field_vitu2_entry_pane_t2_ParamLimits

0x5e32,	// (0x00079e06) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000838f6) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000838f6) field_vitu2_entry_pane_t

0xc240,	// (0x00080214) bg_button_pane_cp010_ParamLimits

0xc240,	// (0x00080214) bg_button_pane_cp010

0xc24e,	// (0x00080222) cell_vitu2_itu_pane_g1

0xc26e,	// (0x00080242) cell_vitu2_itu_pane_t1_ParamLimits

0xc26e,	// (0x00080242) cell_vitu2_itu_pane_t1

0x5e4f,	// (0x00079e23) cell_vitu2_itu_pane_t2_ParamLimits

0x5e4f,	// (0x00079e23) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00083900) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00083900) cell_vitu2_itu_pane_t

0x145d,	// (0x00075431) bg_button_pane_cp011

0xc2ba,	// (0x0008028e) cell_vitu2_function_pane_g1

0x08db,	// (0x000748af) main_myfav_hc_pane

0xbcf8,	// (0x0007fccc) popup_image3_note_pane_ParamLimits

0xbcf8,	// (0x0007fccc) popup_image3_note_pane

0xbd06,	// (0x0007fcda) popup_image3_tool_bar_pane_ParamLimits

0xbd06,	// (0x0007fcda) popup_image3_tool_bar_pane

0x5ec5,	// (0x00079e99) cell_vitu2_itu_pane_t3_ParamLimits

0x5ec5,	// (0x00079e99) cell_vitu2_itu_pane_t3

0x08db,	// (0x000748af) bg_popup_trans_pane

0x47ad,	// (0x00078781) grid_image3_tool_bar_pane

0x47b7,	// (0x0007878b) bg_popup_trans_pane_g1

0x1d3f,	// (0x00075d13) bg_popup_trans_pane_g2

0x47bf,	// (0x00078793) bg_popup_trans_pane_g3

0x47c7,	// (0x0007879b) bg_popup_trans_pane_g4

0x47cf,	// (0x000787a3) bg_popup_trans_pane_g5

0x47d7,	// (0x000787ab) bg_popup_trans_pane_g6

0x47df,	// (0x000787b3) bg_popup_trans_pane_g7

0x47e7,	// (0x000787bb) bg_popup_trans_pane_g8

0x1d1f,	// (0x00075cf3) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00083907) bg_popup_trans_pane_g

0x47ef,	// (0x000787c3) cell_image3_tool_bar_pane_ParamLimits

0x47ef,	// (0x000787c3) cell_image3_tool_bar_pane

0x3d5e,	// (0x00077d32) cell_image3_tool_bar_pane_g1

0x08db,	// (0x000748af) bg_popup_trans_pane_cp1

0x4803,	// (0x000787d7) popup_image3_note_pane_t1

0x4811,	// (0x000787e5) popup_image3_note_pane_t2

0x481f,	// (0x000787f3) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0008391a) popup_image3_note_pane_t

0x482d,	// (0x00078801) popup_image3_note_pane_t3_copy1

0xc2ce,	// (0x000802a2) bg_myfav_hc_instruction_pane_ParamLimits

0xc2ce,	// (0x000802a2) bg_myfav_hc_instruction_pane

0xc2e6,	// (0x000802ba) cell_myfav_contact_pane_ParamLimits

0xc2e6,	// (0x000802ba) cell_myfav_contact_pane

0xc300,	// (0x000802d4) cell_myfav_contact_pane_cp1_ParamLimits

0xc300,	// (0x000802d4) cell_myfav_contact_pane_cp1

0xc318,	// (0x000802ec) cell_myfav_contact_pane_cp2_ParamLimits

0xc318,	// (0x000802ec) cell_myfav_contact_pane_cp2

0xc330,	// (0x00080304) cell_myfav_contact_pane_cp3_ParamLimits

0xc330,	// (0x00080304) cell_myfav_contact_pane_cp3

0xc347,	// (0x0008031b) cell_myfav_contact_pane_cp4_ParamLimits

0xc347,	// (0x0008031b) cell_myfav_contact_pane_cp4

0xc35d,	// (0x00080331) cell_myfav_contact_pane_cp5_ParamLimits

0xc35d,	// (0x00080331) cell_myfav_contact_pane_cp5

0xc371,	// (0x00080345) cell_myfav_contact_pane_cp6_ParamLimits

0xc371,	// (0x00080345) cell_myfav_contact_pane_cp6

0xc385,	// (0x00080359) cell_myfav_contact_pane_cp7_ParamLimits

0xc385,	// (0x00080359) cell_myfav_contact_pane_cp7

0x483b,	// (0x0007880f) listscroll_gen_pane_cp05

0xc39d,	// (0x00080371) main_myfav_hc_pane_g1_ParamLimits

0xc39d,	// (0x00080371) main_myfav_hc_pane_g1

0xc3b3,	// (0x00080387) main_myfav_hc_pane_g2_ParamLimits

0xc3b3,	// (0x00080387) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x00083921) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x00083921) main_myfav_hc_pane_g

0xc3e1,	// (0x000803b5) main_myfav_hc_pane_t1_ParamLimits

0xc3e1,	// (0x000803b5) main_myfav_hc_pane_t1

0x4844,	// (0x00078818) main_myfav_hc_pane_t2_ParamLimits

0x4844,	// (0x00078818) main_myfav_hc_pane_t2

0x4856,	// (0x0007882a) main_myfav_hc_pane_t3_ParamLimits

0x4856,	// (0x0007882a) main_myfav_hc_pane_t3

0xc3f8,	// (0x000803cc) main_myfav_hc_pane_t4_ParamLimits

0xc3f8,	// (0x000803cc) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x00083928) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x00083928) main_myfav_hc_pane_t

0x3d5e,	// (0x00077d32) bg_myfav_hc_instruction_pane_g1

0x4868,	// (0x0007883c) cell_myfav_contact_pane_g1_ParamLimits

0x4868,	// (0x0007883c) cell_myfav_contact_pane_g1

0x4868,	// (0x0007883c) cell_myfav_contact_pane_g2_ParamLimits

0x4868,	// (0x0007883c) cell_myfav_contact_pane_g2

0x4874,	// (0x00078848) cell_myfav_contact_pane_g3_ParamLimits

0x4874,	// (0x00078848) cell_myfav_contact_pane_g3

0x404f,	// (0x00078023) cell_myfav_contact_pane_g4_ParamLimits

0x404f,	// (0x00078023) cell_myfav_contact_pane_g4

0x4881,	// (0x00078855) cell_myfav_contact_pane_g5_ParamLimits

0x4881,	// (0x00078855) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x00083933) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x00083933) cell_myfav_contact_pane_g

0xc3c9,	// (0x0008039d) main_myfav_hc_pane_g3_ParamLimits

0xc3c9,	// (0x0008039d) main_myfav_hc_pane_g3

0x6f0d,	// (0x0007aee1) popup_adpt_find_window

0xc422,	// (0x000803f6) afind_page_pane_ParamLimits

0xc422,	// (0x000803f6) afind_page_pane

0xc42f,	// (0x00080403) aid_size_cell_afind_ParamLimits

0xc42f,	// (0x00080403) aid_size_cell_afind

0xc449,	// (0x0008041d) bg_popup_sub_pane_cp09_ParamLimits

0xc449,	// (0x0008041d) bg_popup_sub_pane_cp09

0xc456,	// (0x0008042a) find_pane_cp01_ParamLimits

0xc456,	// (0x0008042a) find_pane_cp01

0x488d,	// (0x00078861) grid_afind_control_pane_ParamLimits

0x488d,	// (0x00078861) grid_afind_control_pane

0xc463,	// (0x00080437) grid_afind_pane_ParamLimits

0xc463,	// (0x00080437) grid_afind_pane

0xc47f,	// (0x00080453) cell_afind_pane_ParamLimits

0xc47f,	// (0x00080453) cell_afind_pane

0x3d5e,	// (0x00077d32) afind_page_pane_g1

0xc4c7,	// (0x0008049b) afind_page_pane_g2

0xc4d0,	// (0x000804a4) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0008393e) afind_page_pane_g

0xc4d9,	// (0x000804ad) afind_page_pane_t1

0x48a1,	// (0x00078875) cell_afind_grid_control_pane_ParamLimits

0x48a1,	// (0x00078875) cell_afind_grid_control_pane

0x46aa,	// (0x0007867e) bg_button_pane_cp69_ParamLimits

0x46aa,	// (0x0007867e) bg_button_pane_cp69

0xc4f9,	// (0x000804cd) cell_afind_pane_g1_ParamLimits

0xc4f9,	// (0x000804cd) cell_afind_pane_g1

0xc506,	// (0x000804da) cell_afind_pane_t1_ParamLimits

0xc506,	// (0x000804da) cell_afind_pane_t1

0x1b38,	// (0x00075b0c) bg_button_pane_cp72

0x48b0,	// (0x00078884) cell_afind_grid_control_pane_g1

0x9abf,	// (0x0007da93) aid_image_placing_area_ParamLimits

0x9abf,	// (0x0007da93) aid_image_placing_area

0x4378,	// (0x0007834c) field_vitu_entry_pane_g1_ParamLimits

0x4378,	// (0x0007834c) field_vitu_entry_pane_g1

0x4384,	// (0x00078358) field_vitu_entry_pane_g2_ParamLimits

0x4384,	// (0x00078358) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000837ef) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000837ef) field_vitu_entry_pane_g

0xb655,	// (0x0007f629) cell_vitu_itu_pane_g1_ParamLimits

0xb697,	// (0x0007f66b) cell_vitu_itu_pane_t3_ParamLimits

0xb697,	// (0x0007f66b) cell_vitu_itu_pane_t3

0x465a,	// (0x0007862e) mp4_progress_pane_t1_ParamLimits

0x4673,	// (0x00078647) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x00083884) mp4_progress_pane_t_ParamLimits

0x468c,	// (0x00078660) mup_progress_pane_cp04_ParamLimits

0xc40c,	// (0x000803e0) main_myfav_hc_pane_t5_ParamLimits

0xc40c,	// (0x000803e0) main_myfav_hc_pane_t5

0x5aea,	// (0x00079abe) aid_zoom_text_primary

0x6f0d,	// (0x0007aee1) popup_adpt_find_window_ParamLimits

0x145d,	// (0x00075431) main_cam_set_pane

0xbe94,	// (0x0007fe68) cam4_zoom_pane_ParamLimits

0xbe94,	// (0x0007fe68) cam4_zoom_pane

0xc518,	// (0x000804ec) main_cam_set_pane_g1_ParamLimits

0xc518,	// (0x000804ec) main_cam_set_pane_g1

0xc526,	// (0x000804fa) main_cam_set_pane_g2_ParamLimits

0xc526,	// (0x000804fa) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x00083945) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x00083945) main_cam_set_pane_g

0xc532,	// (0x00080506) main_cam_set_pane_t1_ParamLimits

0xc532,	// (0x00080506) main_cam_set_pane_t1

0xc54e,	// (0x00080522) main_cset_listscroll_pane_ParamLimits

0xc54e,	// (0x00080522) main_cset_listscroll_pane

0xc579,	// (0x0008054d) main_cset_slider_pane_ParamLimits

0xc579,	// (0x0008054d) main_cset_slider_pane

0x48c1,	// (0x00078895) main_cset_list_pane_ParamLimits

0x48c1,	// (0x00078895) main_cset_list_pane

0x48d1,	// (0x000788a5) scroll_pane_cp028

0xc598,	// (0x0008056c) aid_area_touch_slider

0xc5b4,	// (0x00080588) cset_slider_pane

0xc5de,	// (0x000805b2) main_cset_slider_pane_g1

0xc5f3,	// (0x000805c7) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0008394a) main_cset_slider_pane_g

0x490a,	// (0x000788de) main_cset_slider_pane_t1

0xc6b5,	// (0x00080689) main_cset_slider_pane_t2

0xc6cf,	// (0x000806a3) main_cset_slider_pane_t3

0xc6e9,	// (0x000806bd) main_cset_slider_pane_t4

0xc703,	// (0x000806d7) main_cset_slider_pane_t5

0xc721,	// (0x000806f5) main_cset_slider_pane_t6

0xc738,	// (0x0008070c) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0008396f) main_cset_slider_pane_t

0xc844,	// (0x00080818) cset_list_set_pane_ParamLimits

0xc844,	// (0x00080818) cset_list_set_pane

0xc85a,	// (0x0008082e) aid_position_infowindow_above

0xc862,	// (0x00080836) aid_position_infowindow_below

0xc86a,	// (0x0008083e) cset_list_set_pane_g1_ParamLimits

0xc86a,	// (0x0008083e) cset_list_set_pane_g1

0x5f17,	// (0x00079eeb) cset_list_set_pane_g3_ParamLimits

0x5f17,	// (0x00079eeb) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0008398e) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0008398e) cset_list_set_pane_g

0x5f26,	// (0x00079efa) cset_list_set_pane_t1_ParamLimits

0x5f26,	// (0x00079efa) cset_list_set_pane_t1

0x145d,	// (0x00075431) list_highlight_pane_cp021_ParamLimits

0x145d,	// (0x00075431) list_highlight_pane_cp021

0x2688,	// (0x0007665c) cset_slider_pane_g1

0x269a,	// (0x0007666e) cset_slider_pane_g2

0x2691,	// (0x00076665) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x00083993) cset_slider_pane_g

0xc876,	// (0x0008084a) aid_area_touch_cam4_zoom

0xc87e,	// (0x00080852) cam4_zoom_cont_pane

0xc886,	// (0x0008085a) cam4_zoom_pane_g1

0xc88e,	// (0x00080862) cam4_zoom_pane_g2

0xc896,	// (0x0008086a) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0008399a) cam4_zoom_pane_g

0x4b4e,	// (0x00078b22) cam4_zoom_cont_pane_g1

0x4b57,	// (0x00078b2b) cam4_zoom_cont_pane_g2

0x4b60,	// (0x00078b34) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000839a1) cam4_zoom_cont_pane_g

0xbd4f,	// (0x0007fd23) call4_image_pane_ParamLimits

0xbd4f,	// (0x0007fd23) call4_image_pane

0x46b6,	// (0x0007868a) call4_windows_conf_pane_ParamLimits

0x46f3,	// (0x000786c7) popup_call4_audio_in_window_ParamLimits

0x46f3,	// (0x000786c7) popup_call4_audio_in_window

0x08db,	// (0x000748af) bg_popup_call2_act_pane_cp02

0x473c,	// (0x00078710) call4_list_conf_pane

0x3d5e,	// (0x00077d32) call4_image_pane_g1

0x3d5e,	// (0x00077d32) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000836b0) call4_image_pane_g

0x49aa,	// (0x0007897e) list_single_graphic_popup_conf4_pane_ParamLimits

0x49aa,	// (0x0007897e) list_single_graphic_popup_conf4_pane

0x08db,	// (0x000748af) list_highlight_pane_cp022

0x49bd,	// (0x00078991) list_single_graphic_popup_conf4_pane_g1

0x2259,	// (0x0007622d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000839a8) list_single_graphic_popup_conf4_pane_g

0x49c5,	// (0x00078999) list_single_graphic_popup_conf4_pane_t1

0x7ece,	// (0x0007bea2) popup_vtel_slider_window_ParamLimits

0x7ece,	// (0x0007bea2) popup_vtel_slider_window

0x4698,	// (0x0007866c) dialer2_ne_pane_t2_ParamLimits

0x4698,	// (0x0007866c) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00083889) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00083889) dialer2_ne_pane_t

0x145d,	// (0x00075431) bg_popup_sub_pane_cp010_ParamLimits

0x145d,	// (0x00075431) bg_popup_sub_pane_cp010

0xc89e,	// (0x00080872) popup_vtel_slider_window_g1_ParamLimits

0xc89e,	// (0x00080872) popup_vtel_slider_window_g1

0xc8aa,	// (0x0008087e) popup_vtel_slider_window_g2_ParamLimits

0xc8aa,	// (0x0008087e) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000839ad) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000839ad) popup_vtel_slider_window_g

0xc8f2,	// (0x000808c6) vtel_slider_pane_ParamLimits

0xc8f2,	// (0x000808c6) vtel_slider_pane

0xc901,	// (0x000808d5) vtel_slider_pane_g1_ParamLimits

0xc901,	// (0x000808d5) vtel_slider_pane_g1

0xc90e,	// (0x000808e2) vtel_slider_pane_g2_ParamLimits

0xc90e,	// (0x000808e2) vtel_slider_pane_g2

0xc91b,	// (0x000808ef) vtel_slider_pane_g3_ParamLimits

0xc91b,	// (0x000808ef) vtel_slider_pane_g3

0xc901,	// (0x000808d5) vtel_slider_pane_g4_ParamLimits

0xc901,	// (0x000808d5) vtel_slider_pane_g4

0xc928,	// (0x000808fc) vtel_slider_pane_g5_ParamLimits

0xc928,	// (0x000808fc) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000839b6) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000839b6) vtel_slider_pane_g

0x145d,	// (0x00075431) main_gallery2_pane

0xc0e8,	// (0x000800bc) aid_size_row_itut2_dropdow_list_ParamLimits

0xc0e8,	// (0x000800bc) aid_size_row_itut2_dropdow_list

0xc148,	// (0x0008011c) grid_vitu2_function_top_pane_ParamLimits

0xc148,	// (0x0008011c) grid_vitu2_function_top_pane

0xc1a2,	// (0x00080176) popup_vitu2_dropdown_list_window_ParamLimits

0xc1a2,	// (0x00080176) popup_vitu2_dropdown_list_window

0xc1c2,	// (0x00080196) popup_vitu2_match_list_window

0xc935,	// (0x00080909) cell_vitu2_function_top_pane_ParamLimits

0xc935,	// (0x00080909) cell_vitu2_function_top_pane

0xc94f,	// (0x00080923) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc94f,	// (0x00080923) cell_vitu2_function_top_pane_cp01

0xc96b,	// (0x0008093f) cell_vitu2_function_top_wide_pane_ParamLimits

0xc96b,	// (0x0008093f) cell_vitu2_function_top_wide_pane

0x145d,	// (0x00075431) bg_button_pane_cp012

0xc987,	// (0x0008095b) cell_vitu2_function_top_pane_g1

0xc99b,	// (0x0008096f) bg_button_pane_cp013_ParamLimits

0xc99b,	// (0x0008096f) bg_button_pane_cp013

0xc9b7,	// (0x0008098b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc9b7,	// (0x0008098b) cell_vitu2_function_top_wide_pane_g1

0x4c37,	// (0x00078c0b) bg_popup_sub_pane_cp20

0xc9cf,	// (0x000809a3) list_vitu2_match_list_pane

0x47b7,	// (0x0007878b) bg_popup_sub_pane_cp20_g1

0x47bf,	// (0x00078793) bg_popup_sub_pane_cp20_g2

0x1d3f,	// (0x00075d13) bg_popup_sub_pane_cp20_g3

0x47c7,	// (0x0007879b) bg_popup_sub_pane_cp20_g4

0x1d1f,	// (0x00075cf3) bg_popup_sub_pane_cp20_g5

0x49db,	// (0x000789af) bg_popup_sub_pane_cp20_g6

0x47d7,	// (0x000787ab) bg_popup_sub_pane_cp20_g7

0x47df,	// (0x000787b3) bg_popup_sub_pane_cp20_g8

0x47e7,	// (0x000787bb) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000839c1) bg_popup_sub_pane_cp20_g

0xc9e7,	// (0x000809bb) list_vitu2_match_list_item_pane_ParamLimits

0xc9e7,	// (0x000809bb) list_vitu2_match_list_item_pane

0xc9f9,	// (0x000809cd) list_vitu2_match_list_item_pane_t1

0x08db,	// (0x000748af) bg_popup_sub_pane_cp21

0x2181,	// (0x00076155) grid_vitu2_dropdown_list_pane

0xca13,	// (0x000809e7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xca13,	// (0x000809e7) cell_vitu2_dropdown_list_char_pane

0xca34,	// (0x00080a08) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xca34,	// (0x00080a08) cell_vitu2_dropdown_list_ctrl_pane

0x49f5,	// (0x000789c9) cell_vitu2_dropdown_list_char_pane_g1

0x49ec,	// (0x000789c0) cell_vitu2_dropdown_list_char_pane_g2

0x49e3,	// (0x000789b7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000839de) cell_vitu2_dropdown_list_char_pane_g

0xca60,	// (0x00080a34) cell_vitu2_dropdown_list_char_pane_t1

0xca6e,	// (0x00080a42) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xca6e,	// (0x00080a42) cell_vitu2_dropdown_list_ctrl_pane_g1

0xca7e,	// (0x00080a52) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xca7e,	// (0x00080a52) cell_vitu2_dropdown_list_ctrl_pane_g2

0xca8f,	// (0x00080a63) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xca8f,	// (0x00080a63) cell_vitu2_dropdown_list_ctrl_pane_g3

0xca9f,	// (0x00080a73) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xca9f,	// (0x00080a73) cell_vitu2_dropdown_list_ctrl_pane_g4

0x3fca,	// (0x00077f9e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x3fca,	// (0x00077f9e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000839e5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000839e5) cell_vitu2_dropdown_list_ctrl_pane_g

0xcabb,	// (0x00080a8f) aid_size_cell_gallery2_ParamLimits

0xcabb,	// (0x00080a8f) aid_size_cell_gallery2

0xcad5,	// (0x00080aa9) grid_gallery2_pane_ParamLimits

0xcad5,	// (0x00080aa9) grid_gallery2_pane

0xcaec,	// (0x00080ac0) scroll_pane_cp029_ParamLimits

0xcaec,	// (0x00080ac0) scroll_pane_cp029

0xcafc,	// (0x00080ad0) cell_gallery2_pane_ParamLimits

0xcafc,	// (0x00080ad0) cell_gallery2_pane

0x49fe,	// (0x000789d2) cell_gallery2_pane_g2

0xf0c2,	// (0x00083096) cell_gallery2_pane_g3

0x4a06,	// (0x000789da) cell_gallery2_pane_g4

0x4a0e,	// (0x000789e2) cell_gallery2_pane_g5

0x1ae6,	// (0x00075aba) grid_highlight_pane_cp10

0xc1c2,	// (0x00080196) popup_vitu2_match_list_window_ParamLimits

0xc1d6,	// (0x000801aa) popup_vitu2_query_window_ParamLimits

0xc1d6,	// (0x000801aa) popup_vitu2_query_window

0x08db,	// (0x000748af) bg_vitu2_candi_button_pane

0x49f5,	// (0x000789c9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x49ec,	// (0x000789c0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x49e3,	// (0x000789b7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5f85,	// (0x00079f59) bg_button_pane_cp015

0xcb51,	// (0x00080b25) bg_button_pane_cp016

0xcb64,	// (0x00080b38) bg_button_pane_cp017

0x3956,	// (0x0007792a) bg_popup_sub_pane_cp22

0x4a16,	// (0x000789ea) popup_vitu2_query_window_g1

0x5fb8,	// (0x00079f8c) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000839f0) popup_vitu2_query_window_g

0x5fd5,	// (0x00079fa9) popup_vitu2_query_window_t1_ParamLimits

0x5fd5,	// (0x00079fa9) popup_vitu2_query_window_t1

0x6008,	// (0x00079fdc) popup_vitu2_query_window_t2_ParamLimits

0x6008,	// (0x00079fdc) popup_vitu2_query_window_t2

0x601a,	// (0x00079fee) popup_vitu2_query_window_t3_ParamLimits

0x601a,	// (0x00079fee) popup_vitu2_query_window_t3

0xcb88,	// (0x00080b5c) popup_vitu2_query_window_t4_ParamLimits

0xcb88,	// (0x00080b5c) popup_vitu2_query_window_t4

0xcba9,	// (0x00080b7d) popup_vitu2_query_window_t5_ParamLimits

0xcba9,	// (0x00080b7d) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000839f7) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000839f7) popup_vitu2_query_window_t

0x48b9,	// (0x0007888d) main_cset_text_pane

0xc598,	// (0x0008056c) aid_area_touch_slider_ParamLimits

0xc5b4,	// (0x00080588) cset_slider_pane_ParamLimits

0xc5de,	// (0x000805b2) main_cset_slider_pane_g1_ParamLimits

0xc5f3,	// (0x000805c7) main_cset_slider_pane_g2_ParamLimits

0x48da,	// (0x000788ae) main_cset_slider_pane_g3_ParamLimits

0x48da,	// (0x000788ae) main_cset_slider_pane_g3

0xc608,	// (0x000805dc) main_cset_slider_pane_g4_ParamLimits

0xc608,	// (0x000805dc) main_cset_slider_pane_g4

0xc617,	// (0x000805eb) main_cset_slider_pane_g5_ParamLimits

0xc617,	// (0x000805eb) main_cset_slider_pane_g5

0xc625,	// (0x000805f9) main_cset_slider_pane_g6_ParamLimits

0xc625,	// (0x000805f9) main_cset_slider_pane_g6

0xf976,	// (0x0008394a) main_cset_slider_pane_g_ParamLimits

0x490a,	// (0x000788de) main_cset_slider_pane_t1_ParamLimits

0xc6b5,	// (0x00080689) main_cset_slider_pane_t2_ParamLimits

0xc6cf,	// (0x000806a3) main_cset_slider_pane_t3_ParamLimits

0xc6e9,	// (0x000806bd) main_cset_slider_pane_t4_ParamLimits

0xc703,	// (0x000806d7) main_cset_slider_pane_t5_ParamLimits

0xc721,	// (0x000806f5) main_cset_slider_pane_t6_ParamLimits

0xc738,	// (0x0008070c) main_cset_slider_pane_t7_ParamLimits

0xc766,	// (0x0008073a) main_cset_slider_pane_t8_ParamLimits

0xc766,	// (0x0008073a) main_cset_slider_pane_t8

0xc78e,	// (0x00080762) main_cset_slider_pane_t9_ParamLimits

0xc78e,	// (0x00080762) main_cset_slider_pane_t9

0xc7b6,	// (0x0008078a) main_cset_slider_pane_t10_ParamLimits

0xc7b6,	// (0x0008078a) main_cset_slider_pane_t10

0xc7de,	// (0x000807b2) main_cset_slider_pane_t11_ParamLimits

0xc7de,	// (0x000807b2) main_cset_slider_pane_t11

0xc808,	// (0x000807dc) main_cset_slider_pane_t12_ParamLimits

0xc808,	// (0x000807dc) main_cset_slider_pane_t12

0xc825,	// (0x000807f9) main_cset_slider_pane_t13_ParamLimits

0xc825,	// (0x000807f9) main_cset_slider_pane_t13

0xf99b,	// (0x0008396f) main_cset_slider_pane_t_ParamLimits

0x08db,	// (0x000748af) bg_popup_sub_pane_cp011

0x4a22,	// (0x000789f6) main_cset_text_pane_g1

0x4a2a,	// (0x000789fe) main_cset_text_pane_t1

0x4a38,	// (0x00078a0c) main_cset_text_pane_t2

0x4a46,	// (0x00078a1a) main_cset_text_pane_t3

0x4a54,	// (0x00078a28) main_cset_text_pane_t4

0x4a62,	// (0x00078a36) main_cset_text_pane_t5

0x4a70,	// (0x00078a44) main_cset_text_pane_t6

0x4a7e,	// (0x00078a52) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00083a06) main_cset_text_pane_t

0x08db,	// (0x000748af) main_cam4_burst_pane

0x08db,	// (0x000748af) main_cam5_pane

0xc4e7,	// (0x000804bb) bg_button_pane_cp019

0xc4f0,	// (0x000804c4) bg_button_pane_cp020

0x48e6,	// (0x000788ba) main_cset_slider_pane_g7_ParamLimits

0x48e6,	// (0x000788ba) main_cset_slider_pane_g7

0x48f2,	// (0x000788c6) main_cset_slider_pane_g8_ParamLimits

0x48f2,	// (0x000788c6) main_cset_slider_pane_g8

0xc639,	// (0x0008060d) main_cset_slider_pane_g9_ParamLimits

0xc639,	// (0x0008060d) main_cset_slider_pane_g9

0xc645,	// (0x00080619) main_cset_slider_pane_g10_ParamLimits

0xc645,	// (0x00080619) main_cset_slider_pane_g10

0xc651,	// (0x00080625) main_cset_slider_pane_g11_ParamLimits

0xc651,	// (0x00080625) main_cset_slider_pane_g11

0xc65d,	// (0x00080631) main_cset_slider_pane_g12_ParamLimits

0xc65d,	// (0x00080631) main_cset_slider_pane_g12

0xc669,	// (0x0008063d) main_cset_slider_pane_g13_ParamLimits

0xc669,	// (0x0008063d) main_cset_slider_pane_g13

0xc675,	// (0x00080649) main_cset_slider_pane_g14_ParamLimits

0xc675,	// (0x00080649) main_cset_slider_pane_g14

0xc681,	// (0x00080655) main_cset_slider_pane_g15_ParamLimits

0xc681,	// (0x00080655) main_cset_slider_pane_g15

0x4938,	// (0x0007890c) main_cset_slider_pane_t14_ParamLimits

0x4938,	// (0x0007890c) main_cset_slider_pane_t14

0x4971,	// (0x00078945) main_cset_slider_pane_t15_ParamLimits

0x4971,	// (0x00078945) main_cset_slider_pane_t15

0xcbca,	// (0x00080b9e) aid_cam4_burst_size_cell_ParamLimits

0xcbca,	// (0x00080b9e) aid_cam4_burst_size_cell

0xcbe6,	// (0x00080bba) grid_cam4_burst_pane_ParamLimits

0xcbe6,	// (0x00080bba) grid_cam4_burst_pane

0xcc16,	// (0x00080bea) linegrid_cam4_burst_pane_ParamLimits

0xcc16,	// (0x00080bea) linegrid_cam4_burst_pane

0xcc36,	// (0x00080c0a) scroll_pane_cp30_ParamLimits

0xcc36,	// (0x00080c0a) scroll_pane_cp30

0xcc42,	// (0x00080c16) cell_cam4_burst_pane_ParamLimits

0xcc42,	// (0x00080c16) cell_cam4_burst_pane

0x4a98,	// (0x00078a6c) linegrid_cam4_burst_pane_g1_ParamLimits

0x4a98,	// (0x00078a6c) linegrid_cam4_burst_pane_g1

0xcc7e,	// (0x00080c52) linegrid_cam4_burst_pane_g2_ParamLimits

0xcc7e,	// (0x00080c52) linegrid_cam4_burst_pane_g2

0x4aa5,	// (0x00078a79) linegrid_cam4_burst_pane_g3_ParamLimits

0x4aa5,	// (0x00078a79) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00083a15) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00083a15) linegrid_cam4_burst_pane_g

0xcc8f,	// (0x00080c63) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcc8f,	// (0x00080c63) linegrid_cam4_burst_pane_g3_copy1

0x4ab2,	// (0x00078a86) linegrid_cam4_burst_pane_g4_ParamLimits

0x4ab2,	// (0x00078a86) linegrid_cam4_burst_pane_g4

0xcca9,	// (0x00080c7d) linegrid_cam4_burst_pane_g5_ParamLimits

0xcca9,	// (0x00080c7d) linegrid_cam4_burst_pane_g5

0xccba,	// (0x00080c8e) linegrid_cam4_burst_pane_g6_ParamLimits

0xccba,	// (0x00080c8e) linegrid_cam4_burst_pane_g6

0x4abf,	// (0x00078a93) linegrid_cam4_burst_pane_g7_ParamLimits

0x4abf,	// (0x00078a93) linegrid_cam4_burst_pane_g7

0xcccb,	// (0x00080c9f) cell_cam4_burst_pane_g1

0x4ad8,	// (0x00078aac) main_cam5_pane_t1_ParamLimits

0x4ad8,	// (0x00078aac) main_cam5_pane_t1

0x4aea,	// (0x00078abe) main_cam5_pane_t2_ParamLimits

0x4aea,	// (0x00078abe) main_cam5_pane_t2

0x4afc,	// (0x00078ad0) main_cam5_pane_t3_ParamLimits

0x4afc,	// (0x00078ad0) main_cam5_pane_t3

0x4b0e,	// (0x00078ae2) main_cam5_pane_t4_ParamLimits

0x4b0e,	// (0x00078ae2) main_cam5_pane_t4

0x4b26,	// (0x00078afa) main_cam5_pane_t5_ParamLimits

0x4b26,	// (0x00078afa) main_cam5_pane_t5

0x4b3a,	// (0x00078b0e) main_cam5_pane_t6_ParamLimits

0x4b3a,	// (0x00078b0e) main_cam5_pane_t6

0x4b69,	// (0x00078b3d) main_cam5_pane_t7_ParamLimits

0x4b69,	// (0x00078b3d) main_cam5_pane_t7

0x4b7b,	// (0x00078b4f) main_cam5_pane_t8_ParamLimits

0x4b7b,	// (0x00078b4f) main_cam5_pane_t8

0x4b97,	// (0x00078b6b) main_cam5_pane_t9_ParamLimits

0x4b97,	// (0x00078b6b) main_cam5_pane_t9

0x4ba9,	// (0x00078b7d) main_cam5_pane_t10_ParamLimits

0x4ba9,	// (0x00078b7d) main_cam5_pane_t10

0x4bbb,	// (0x00078b8f) main_cam5_pane_t11_ParamLimits

0x4bbb,	// (0x00078b8f) main_cam5_pane_t11

0x4bcd,	// (0x00078ba1) main_cam5_pane_t12_ParamLimits

0x4bcd,	// (0x00078ba1) main_cam5_pane_t12

0x4be2,	// (0x00078bb6) main_cam5_pane_t13_ParamLimits

0x4be2,	// (0x00078bb6) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00083a21) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00083a21) main_cam5_pane_t

0x6fc3,	// (0x0007af97) popup_scut_keymap_window_ParamLimits

0x6fc3,	// (0x0007af97) popup_scut_keymap_window

0xccde,	// (0x00080cb2) aid_size_cell_brow_shortcut

0x1ae6,	// (0x00075aba) bg_popup_window_pane_cp010

0xccea,	// (0x00080cbe) grid_scut_pane

0xccf6,	// (0x00080cca) cell_scut_pane_ParamLimits

0xccf6,	// (0x00080cca) cell_scut_pane

0xcd0d,	// (0x00080ce1) cell_scut_pane_g1

0x4bff,	// (0x00078bd3) cell_scut_pane_t1

0x4c0e,	// (0x00078be2) cell_scut_pane_t2

0xcd16,	// (0x00080cea) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x00083a3c) cell_scut_pane_t

0xacbe,	// (0x0007ec92) main_mup3_pane_g8_ParamLimits

0xacbe,	// (0x0007ec92) main_mup3_pane_g8

0xc0f6,	// (0x000800ca) area_vitu2_query_pane_ParamLimits

0xc0f6,	// (0x000800ca) area_vitu2_query_pane

0x5f97,	// (0x00079f6b) input_focus_pane_cp08

0x4c1d,	// (0x00078bf1) area_vitu2_query_pane_g1

0x6098,	// (0x0007a06c) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00083a43) area_vitu2_query_pane_g

0xcd24,	// (0x00080cf8) area_vitu2_query_pane_t1_ParamLimits

0xcd24,	// (0x00080cf8) area_vitu2_query_pane_t1

0xcd38,	// (0x00080d0c) area_vitu2_query_pane_t2_ParamLimits

0xcd38,	// (0x00080d0c) area_vitu2_query_pane_t2

0x60a9,	// (0x0007a07d) area_vitu2_query_pane_t3_ParamLimits

0x60a9,	// (0x0007a07d) area_vitu2_query_pane_t3

0x60d1,	// (0x0007a0a5) area_vitu2_query_pane_t4_ParamLimits

0x60d1,	// (0x0007a0a5) area_vitu2_query_pane_t4

0x60f9,	// (0x0007a0cd) area_vitu2_query_pane_t5_ParamLimits

0x60f9,	// (0x0007a0cd) area_vitu2_query_pane_t5

0x6121,	// (0x0007a0f5) area_vitu2_query_pane_t6_ParamLimits

0x6121,	// (0x0007a0f5) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00083a48) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00083a48) area_vitu2_query_pane_t

0xcd4c,	// (0x00080d20) bg_button_pane_cp018

0xcd5a,	// (0x00080d2e) bg_button_pane_cp021

0x616d,	// (0x0007a141) bg_button_pane_cp022

0x617e,	// (0x0007a152) input_focus_pane_cp09

0x2395,	// (0x00076369) aid_size_touch_mv_arrow_left

0x23be,	// (0x00076392) aid_size_touch_mv_arrow_right

0xc699,	// (0x0008066d) main_cset_slider_pane_g16_ParamLimits

0xc699,	// (0x0008066d) main_cset_slider_pane_g16

0xc6a7,	// (0x0008067b) main_cset_slider_pane_g17_ParamLimits

0xc6a7,	// (0x0008067b) main_cset_slider_pane_g17

0xcccb,	// (0x00080c9f) cell_cam4_burst_pane_g1_ParamLimits

0x08db,	// (0x000748af) compa_mode_pane

0xc8b6,	// (0x0008088a) popup_vtel_slider_window_g3_ParamLimits

0xc8b6,	// (0x0008088a) popup_vtel_slider_window_g3

0xc8ca,	// (0x0008089e) popup_vtel_slider_window_g4_ParamLimits

0xc8ca,	// (0x0008089e) popup_vtel_slider_window_g4

0xc8de,	// (0x000808b2) popup_vtel_slider_window_t1_ParamLimits

0xc8de,	// (0x000808b2) popup_vtel_slider_window_t1

0x08db,	// (0x000748af) main_cl_pane

0x9fd1,	// (0x0007dfa5) popup_imed_adjust2_window_ParamLimits

0x3956,	// (0x0007792a) bg_tb_trans_pane_cp05_ParamLimits

0x42ad,	// (0x00078281) popup_imed_adjust2_window_g1_ParamLimits

0x42bc,	// (0x00078290) popup_imed_adjust2_window_g2_ParamLimits

0x42bc,	// (0x00078290) popup_imed_adjust2_window_g2

0x42c8,	// (0x0007829c) popup_imed_adjust2_window_g3_ParamLimits

0x42c8,	// (0x0007829c) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000837b3) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000837b3) popup_imed_adjust2_window_g

0x42d4,	// (0x000782a8) popup_imed_adjust2_window_t1_ParamLimits

0x42ec,	// (0x000782c0) slider_imed_adjust_pane_ParamLimits

0x4300,	// (0x000782d4) slider_imed_adjust_pane_g1_ParamLimits

0x4310,	// (0x000782e4) slider_imed_adjust_pane_g2_ParamLimits

0x4320,	// (0x000782f4) slider_imed_adjust_pane_g3_ParamLimits

0x4331,	// (0x00078305) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000837ba) slider_imed_adjust_pane_g_ParamLimits

0xbe3d,	// (0x0007fe11) aid_touch_area_cam4_ParamLimits

0xbe3d,	// (0x0007fe11) aid_touch_area_cam4

0xbe4d,	// (0x0007fe21) battery_pane_cp01

0xbed4,	// (0x0007fea8) main_camera4_pane_g6_ParamLimits

0xbed4,	// (0x0007fea8) main_camera4_pane_g6

0xbef2,	// (0x0007fec6) main_camera4_pane_t2_ParamLimits

0xbef2,	// (0x0007fec6) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000838bd) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000838bd) main_camera4_pane_t

0xbf79,	// (0x0007ff4d) aid_touch_area_vid4_ParamLimits

0xbf79,	// (0x0007ff4d) aid_touch_area_vid4

0xbfb9,	// (0x0007ff8d) main_video4_pane_g5_ParamLimits

0xbfb9,	// (0x0007ff8d) main_video4_pane_g5

0xbfdd,	// (0x0007ffb1) vid4_progress_pane_ParamLimits

0xbfdd,	// (0x0007ffb1) vid4_progress_pane

0x48fe,	// (0x000788d2) main_cset_slider_pane_g18_ParamLimits

0x48fe,	// (0x000788d2) main_cset_slider_pane_g18

0x4acc,	// (0x00078aa0) cell_cam4_burst_pane_g2_ParamLimits

0x4acc,	// (0x00078aa0) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x00083a1c) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x00083a1c) cell_cam4_burst_pane_g

0xcd66,	// (0x00080d3a) bg_cl_pane_ParamLimits

0xcd66,	// (0x00080d3a) bg_cl_pane

0xcd72,	// (0x00080d46) cl_header_pane_ParamLimits

0xcd72,	// (0x00080d46) cl_header_pane

0xcd7e,	// (0x00080d52) cl_listscroll_pane_ParamLimits

0xcd7e,	// (0x00080d52) cl_listscroll_pane

0xed02,	// (0x00082cd6) bg_cl_pane_g1

0xed0a,	// (0x00082cde) bg_cl_pane_g2

0xed12,	// (0x00082ce6) bg_cl_pane_g3

0xed1a,	// (0x00082cee) bg_cl_pane_g4

0xed22,	// (0x00082cf6) bg_cl_pane_g5

0xed2a,	// (0x00082cfe) bg_cl_pane_g6

0xed32,	// (0x00082d06) bg_cl_pane_g7

0xed3a,	// (0x00082d0e) bg_cl_pane_g8

0xed42,	// (0x00082d16) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00083a57) bg_cl_pane_g

0xcd8a,	// (0x00080d5e) aid_height_cl_leading_ParamLimits

0xcd8a,	// (0x00080d5e) aid_height_cl_leading

0xcd96,	// (0x00080d6a) aid_height_cl_text_ParamLimits

0xcd96,	// (0x00080d6a) aid_height_cl_text

0x4c37,	// (0x00078c0b) bg_cl_header_pane_ParamLimits

0x4c37,	// (0x00078c0b) bg_cl_header_pane

0xcdae,	// (0x00080d82) cl_header_pane_g1_ParamLimits

0xcdae,	// (0x00080d82) cl_header_pane_g1

0xcdbb,	// (0x00080d8f) cl_header_pane_t1_ParamLimits

0xcdbb,	// (0x00080d8f) cl_header_pane_t1

0xed4a,	// (0x00082d1e) cl_list_pane

0x48d1,	// (0x000788a5) hc_scroll_pane_cp01

0x1d1f,	// (0x00075cf3) bg_cl_header_pane_g1

0x47b7,	// (0x0007878b) bg_cl_header_pane_g2

0x1d3f,	// (0x00075d13) bg_cl_header_pane_g3

0x47c7,	// (0x0007879b) bg_cl_header_pane_g4

0x47bf,	// (0x00078793) bg_cl_header_pane_g5

0x49db,	// (0x000789af) bg_cl_header_pane_g6

0x47df,	// (0x000787b3) bg_cl_header_pane_g7

0x47e7,	// (0x000787bb) bg_cl_header_pane_g8

0x47d7,	// (0x000787ab) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x00083a6a) bg_cl_header_pane_g

0xcdcd,	// (0x00080da1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcdcd,	// (0x00080da1) hc_cl_list_double_graphic_heading_pane

0xcdde,	// (0x00080db2) hc_cl_list_single_graphic_pane_ParamLimits

0xcdde,	// (0x00080db2) hc_cl_list_single_graphic_pane

0xcdf7,	// (0x00080dcb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcdf7,	// (0x00080dcb) hc_cl_list_single_graphic_pane_g1

0xce03,	// (0x00080dd7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xce03,	// (0x00080dd7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00083a7d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00083a7d) hc_cl_list_single_graphic_pane_g

0xce17,	// (0x00080deb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xce17,	// (0x00080deb) hc_cl_list_single_graphic_pane_t1

0xcdf7,	// (0x00080dcb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcdf7,	// (0x00080dcb) hc_cl_list_double_graphic_heading_pane_g1

0xce2c,	// (0x00080e00) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xce2c,	// (0x00080e00) hc_cl_list_double_graphic_heading_pane_g2

0xce40,	// (0x00080e14) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xce40,	// (0x00080e14) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00083a82) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00083a82) hc_cl_list_double_graphic_heading_pane_g

0xce54,	// (0x00080e28) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xce54,	// (0x00080e28) hc_cl_list_double_graphic_heading_pane_t1

0xce69,	// (0x00080e3d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xce69,	// (0x00080e3d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00083a89) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00083a89) hc_cl_list_double_graphic_heading_pane_t

0xce86,	// (0x00080e5a) vid4_progress_pane_g1

0xce96,	// (0x00080e6a) vid4_progress_pane_g2

0xcea6,	// (0x00080e7a) vid4_progress_pane_g3

0xceb8,	// (0x00080e8c) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00083a8e) vid4_progress_pane_g

0xced0,	// (0x00080ea4) vid4_progress_pane_t1

0xcee6,	// (0x00080eba) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00083a99) vid4_progress_pane_t

0xcf10,	// (0x00080ee4) wait_bar_pane_cp07

0x3b51,	// (0x00077b25) blid_firmament_pane_ParamLimits

0x3b94,	// (0x00077b68) popup_blid_sat_info2_window_g1

0x3bb8,	// (0x00077b8c) popup_blid_sat_info2_window_t3

0x3bc6,	// (0x00077b9a) popup_blid_sat_info2_window_t4

0x3bd4,	// (0x00077ba8) popup_blid_sat_info2_window_t5

0x3be2,	// (0x00077bb6) popup_blid_sat_info2_window_t6

0x3bf2,	// (0x00077bc6) popup_blid_sat_info2_window_t7

0x3c00,	// (0x00077bd4) popup_blid_sat_info2_window_t8

0x3c0e,	// (0x00077be2) popup_blid_sat_info2_window_t9

0x3c1c,	// (0x00077bf0) popup_blid_sat_info2_window_t10

0x3cde,	// (0x00077cb2) aid_firma_cardinal_ParamLimits

0x3cf2,	// (0x00077cc6) blid_firmament_pane_t1_ParamLimits

0x3d09,	// (0x00077cdd) blid_firmament_pane_t2_ParamLimits

0x3d20,	// (0x00077cf4) blid_firmament_pane_t3_ParamLimits

0x3d37,	// (0x00077d0b) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000836a7) blid_firmament_pane_t_ParamLimits

0x3d4e,	// (0x00077d22) blid_sat_info_pane_ParamLimits

0x145d,	// (0x00075431) main_cam_set_pane_ParamLimits

0xb477,	// (0x0007f44b) aid_size_cell_colour_35_ParamLimits

0xb491,	// (0x0007f465) aid_size_cell_colour_112_ParamLimits

0xb4a8,	// (0x0007f47c) aid_size_cell_effect_ParamLimits

0x145d,	// (0x00075431) bg_tb_trans_pane_cp02_ParamLimits

0x202e,	// (0x00076002) heading_imed_pane_ParamLimits

0xb4c2,	// (0x0007f496) listscroll_imed_pane_ParamLimits

0x2f70,	// (0x00076f44) popup_call2_audio_first_window_g5_ParamLimits

0x2f70,	// (0x00076f44) popup_call2_audio_first_window_g5

0xbbc8,	// (0x0007fb9c) aid_size_touch_image3_arrow_left_ParamLimits

0xbbc8,	// (0x0007fb9c) aid_size_touch_image3_arrow_left

0xbbde,	// (0x0007fbb2) aid_size_touch_image3_arrow_right_ParamLimits

0xbbde,	// (0x0007fbb2) aid_size_touch_image3_arrow_right

0xcefb,	// (0x00080ecf) vid4_progress_pane_t3

0xb760,	// (0x0007f734) main_hwr_training_symbol_option_pane_ParamLimits

0xb760,	// (0x0007f734) main_hwr_training_symbol_option_pane

0x459a,	// (0x0007856e) popup_hwr_training_preview_window_ParamLimits

0x459a,	// (0x0007856e) popup_hwr_training_preview_window

0xb7c1,	// (0x0007f795) hwr_training_navi_pane_g5_ParamLimits

0xb7c1,	// (0x0007f795) hwr_training_navi_pane_g5

0x47a5,	// (0x00078779) popup_char_count_window

0x4c37,	// (0x00078c0b) bg_popup_sub_pane_cp20_ParamLimits

0xc9cf,	// (0x000809a3) list_vitu2_match_list_pane_ParamLimits

0xc9db,	// (0x000809af) vitu2_page_scroll_pane_ParamLimits

0xc9db,	// (0x000809af) vitu2_page_scroll_pane

0xed5c,	// (0x00082d30) list_single_hwr_training_symbol_option_pane_ParamLimits

0xed5c,	// (0x00082d30) list_single_hwr_training_symbol_option_pane

0xed6f,	// (0x00082d43) list_single_hwr_training_symbol_option_pane_g1

0xed77,	// (0x00082d4b) list_single_hwr_training_symbol_option_pane_t1

0xed85,	// (0x00082d59) bg_button_pane_cp023

0xed8e,	// (0x00082d62) bg_button_pane_cp024

0xcf46,	// (0x00080f1a) vitu2_page_scroll_pane_g1

0xcf4e,	// (0x00080f22) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00083aa0) vitu2_page_scroll_pane_g

0xcf56,	// (0x00080f2a) vitu2_page_scroll_pane_t1

0x3ab1,	// (0x00077a85) popup_char_count_window_g1

0xedc1,	// (0x00082d95) popup_char_count_window_g2

0xedca,	// (0x00082d9e) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00083aa5) popup_char_count_window_g

0xedd3,	// (0x00082da7) popup_char_count_window_t1

0x08db,	// (0x000748af) main_vded2_pane

0x4299,	// (0x0007826d) aid_size_cell_imed_line

0x42a3,	// (0x00078277) grid_imed_line_width_pane

0xc04b,	// (0x0008001f) vid4_indicators_pane_g4

0xede1,	// (0x00082db5) cell_imed_line_width_pane_ParamLimits

0xede1,	// (0x00082db5) cell_imed_line_width_pane

0xedf5,	// (0x00082dc9) cell_imed_line_width_pane_g1

0xedfe,	// (0x00082dd2) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00083aac) cell_imed_line_width_pane_g

0xcf65,	// (0x00080f39) main_vded2_pane_g1_ParamLimits

0xcf65,	// (0x00080f39) main_vded2_pane_g1

0xcf72,	// (0x00080f46) main_vded2_pane_g2_ParamLimits

0xcf72,	// (0x00080f46) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00083ab1) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00083ab1) main_vded2_pane_g

0xcf80,	// (0x00080f54) vded2_slider_pane_ParamLimits

0xcf80,	// (0x00080f54) vded2_slider_pane

0xcf8d,	// (0x00080f61) aid_size_touch_vded2_end

0xcf97,	// (0x00080f6b) aid_size_touch_vded2_playhead

0xee06,	// (0x00082dda) aid_size_touch_vded2_start

0xee0e,	// (0x00082de2) vded2_slider_bg_pane

0xee17,	// (0x00082deb) vded2_slider_pane_g1

0xee20,	// (0x00082df4) vded2_slider_pane_g2

0xcf9f,	// (0x00080f73) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00083ab6) vded2_slider_pane_g

0xee28,	// (0x00082dfc) vded2_slider_bg_pane_g1

0xee31,	// (0x00082e05) vded2_slider_bg_pane_g2

0xee3a,	// (0x00082e0e) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00083abd) vded2_slider_bg_pane_g

0x9829,	// (0x0007d7fd) aid_postcard_touch_down_pane_ParamLimits

0x9829,	// (0x0007d7fd) aid_postcard_touch_down_pane

0x9839,	// (0x0007d80d) aid_postcard_touch_up_pane_ParamLimits

0x9839,	// (0x0007d80d) aid_postcard_touch_up_pane

0x08db,	// (0x000748af) main_blid2_pane

0x9f5c,	// (0x0007df30) popup_blid2_search_window

0x08db,	// (0x000748af) blid2_gps_pane

0x08db,	// (0x000748af) blid2_navig_pane

0x08db,	// (0x000748af) blid2_search_pane

0x08db,	// (0x000748af) blid2_tripm_pane

0xcfa8,	// (0x00080f7c) blid2_search_pane_g1_ParamLimits

0xcfa8,	// (0x00080f7c) blid2_search_pane_g1

0xcfb8,	// (0x00080f8c) blid2_search_pane_t1_ParamLimits

0xcfb8,	// (0x00080f8c) blid2_search_pane_t1

0xcfca,	// (0x00080f9e) aid_size_cell_blid2_gps_ParamLimits

0xcfca,	// (0x00080f9e) aid_size_cell_blid2_gps

0xcfda,	// (0x00080fae) blid2_gps_pane_g1_ParamLimits

0xcfda,	// (0x00080fae) blid2_gps_pane_g1

0xcfe6,	// (0x00080fba) grid_blid2_satellite_pane_ParamLimits

0xcfe6,	// (0x00080fba) grid_blid2_satellite_pane

0xcff6,	// (0x00080fca) blid2_navig_pane_g1_ParamLimits

0xcff6,	// (0x00080fca) blid2_navig_pane_g1

0xd002,	// (0x00080fd6) blid2_navig_pane_t1_ParamLimits

0xd002,	// (0x00080fd6) blid2_navig_pane_t1

0xd014,	// (0x00080fe8) blid2_navig_pane_t2_ParamLimits

0xd014,	// (0x00080fe8) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00083ac4) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00083ac4) blid2_navig_pane_t

0xd026,	// (0x00080ffa) blid2_navig_ring_pane_ParamLimits

0xd026,	// (0x00080ffa) blid2_navig_ring_pane

0xd036,	// (0x0008100a) blid2_speed_pane_ParamLimits

0xd036,	// (0x0008100a) blid2_speed_pane

0xd042,	// (0x00081016) blid2_tripm_pane_g1_ParamLimits

0xd042,	// (0x00081016) blid2_tripm_pane_g1

0xd052,	// (0x00081026) blid2_tripm_pane_g2_ParamLimits

0xd052,	// (0x00081026) blid2_tripm_pane_g2

0xd05e,	// (0x00081032) blid2_tripm_pane_g3_ParamLimits

0xd05e,	// (0x00081032) blid2_tripm_pane_g3

0xd06a,	// (0x0008103e) blid2_tripm_pane_g4_ParamLimits

0xd06a,	// (0x0008103e) blid2_tripm_pane_g4

0xd076,	// (0x0008104a) blid2_tripm_pane_g5_ParamLimits

0xd076,	// (0x0008104a) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00083ac9) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00083ac9) blid2_tripm_pane_g

0xd092,	// (0x00081066) blid2_tripm_pane_t1_ParamLimits

0xd092,	// (0x00081066) blid2_tripm_pane_t1

0xd0a6,	// (0x0008107a) blid2_tripm_pane_t2_ParamLimits

0xd0a6,	// (0x0008107a) blid2_tripm_pane_t2

0xd0b8,	// (0x0008108c) blid2_tripm_pane_t3_ParamLimits

0xd0b8,	// (0x0008108c) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00083ad6) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00083ad6) blid2_tripm_pane_t

0xd0ea,	// (0x000810be) cell_blid2_satellite_pane_ParamLimits

0xd0ea,	// (0x000810be) cell_blid2_satellite_pane

0xd104,	// (0x000810d8) cell_blid2_satellite_pane_g1

0xee43,	// (0x00082e17) cell_blid2_satellite_pane_t1

0x3d5e,	// (0x00077d32) blid2_speed_pane_g1

0xee51,	// (0x00082e25) blid2_speed_pane_t1

0xee5f,	// (0x00082e33) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00083adf) blid2_speed_pane_t

0x3d5e,	// (0x00077d32) blid2_navig_ring_pane_g1

0xd10d,	// (0x000810e1) blid2_navig_ring_pane_g2

0xd115,	// (0x000810e9) blid2_navig_ring_pane_g3

0xd11d,	// (0x000810f1) blid2_navig_ring_pane_g4

0xd125,	// (0x000810f9) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00083ae4) blid2_navig_ring_pane_g

0x08db,	// (0x000748af) bg_popup_window_pane_cp011

0xee6d,	// (0x00082e41) popup_blid2_search_window_g1

0xee75,	// (0x00082e49) popup_blid2_search_window_t1

0xee83,	// (0x00082e57) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00083aef) popup_blid2_search_window_t

0x1c2e,	// (0x00075c02) main_browser_pane_g1

0x13e8,	// (0x000753bc) main_browser_pane_ParamLimits

0x145d,	// (0x00075431) bg_button_pane_cp011_ParamLimits

0xc2ba,	// (0x0008028e) cell_vitu2_function_pane_g1_ParamLimits

0x3956,	// (0x0007792a) bg_popup_sub_pane_cp22_ParamLimits

0x5f97,	// (0x00079f6b) input_focus_pane_cp08_ParamLimits

0xcb77,	// (0x00080b4b) popup_vitu2_query_button_pane_ParamLimits

0xcb77,	// (0x00080b4b) popup_vitu2_query_button_pane

0x5fae,	// (0x00079f82) popup_vitu2_query_input_button_pane

0x4a16,	// (0x000789ea) popup_vitu2_query_window_g1_ParamLimits

0x5fb8,	// (0x00079f8c) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000839f0) popup_vitu2_query_window_g_ParamLimits

0x08db,	// (0x000748af) bg_button_pane_cp026

0xd12d,	// (0x00081101) popup_vitu2_query_input_button_pane_g1

0x08db,	// (0x000748af) bg_button_pane_cp025

0xee91,	// (0x00082e65) popup_vitu2_query_button_pane_t1

0xa9ba,	// (0x0007e98e) main_mp3_pane_t6

0xa9ca,	// (0x0007e99e) popup_slider_window_cp01

0xbf28,	// (0x0007fefc) cam4_battery_pane

0xc008,	// (0x0007ffdc) cam4_battery_pane_cp02

0xce7e,	// (0x00080e52) cam4_battery_pane_cp01

0xce7e,	// (0x00080e52) cam4_battery_pane_cp03

0x3d5e,	// (0x00077d32) cam4_battery_pane_g1

0xee9f,	// (0x00082e73) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00083af4) cam4_battery_pane_g

0x3c2a,	// (0x00077bfe) popup_blid_sat_info2_window_t11

0x2395,	// (0x00076369) aid_size_touch_mv_arrow_left_ParamLimits

0x23be,	// (0x00076392) aid_size_touch_mv_arrow_right_ParamLimits

0x241c,	// (0x000763f0) navi_pane_g1_ParamLimits

0x2428,	// (0x000763fc) navi_pane_g2_ParamLimits

0x2456,	// (0x0007642a) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000833b9) navi_pane_g_ParamLimits

0x929f,	// (0x0007d273) navi_pane_mv_t1_ParamLimits

0xb4ce,	// (0x0007f4a2) grid_imed_effect_pane_ParamLimits

0x7d8e,	// (0x0007bd62) aid_placing_vt_slider_lsc

0x1b7d,	// (0x00075b51) aid_placing_vt_slider_prt

0x145d,	// (0x00075431) bg_tb_trans_pane_cp01_ParamLimits

0x3eea,	// (0x00077ebe) popup_image_details_window_g1_ParamLimits

0x3efd,	// (0x00077ed1) popup_image_details_window_g2_ParamLimits

0x3f12,	// (0x00077ee6) popup_image_details_window_g3_ParamLimits

0x3f12,	// (0x00077ee6) popup_image_details_window_g3

0xf718,	// (0x000836ec) popup_image_details_window_g_ParamLimits

0x3f26,	// (0x00077efa) popup_image_details_window_t1_ParamLimits

0x3f38,	// (0x00077f0c) popup_image_details_window_t2_ParamLimits

0x3f51,	// (0x00077f25) popup_image_details_window_t3_ParamLimits

0x3f65,	// (0x00077f39) popup_image_details_window_t4_ParamLimits

0x3f80,	// (0x00077f54) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000836f3) popup_image_details_window_t_ParamLimits

0xcda2,	// (0x00080d76) cl_header_name_pane_ParamLimits

0xcda2,	// (0x00080d76) cl_header_name_pane

0xd135,	// (0x00081109) cl_header_name_pane_t1_ParamLimits

0xd135,	// (0x00081109) cl_header_name_pane_t1

0xd14c,	// (0x00081120) cl_header_name_pane_t2_ParamLimits

0xd14c,	// (0x00081120) cl_header_name_pane_t2

0xd176,	// (0x0008114a) cl_header_name_pane_t3_ParamLimits

0xd176,	// (0x0008114a) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00083af9) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00083af9) cl_header_name_pane_t

0x24e5,	// (0x000764b9) navi_pane_mv_g2_ParamLimits

0x477f,	// (0x00078753) field_vitu2_entry_pane_g1_ParamLimits

0x478b,	// (0x0007875f) field_vitu2_entry_pane_g2_ParamLimits

0x4797,	// (0x0007876b) field_vitu2_entry_pane_g3_ParamLimits

0x4797,	// (0x0007876b) field_vitu2_entry_pane_g3

0xf91b,	// (0x000838ef) field_vitu2_entry_pane_g_ParamLimits

0xc24e,	// (0x00080222) cell_vitu2_itu_pane_g1_ParamLimits

0xc260,	// (0x00080234) cell_vitu2_itu_pane_g2_ParamLimits

0xc260,	// (0x00080234) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000838fb) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000838fb) cell_vitu2_itu_pane_g

0x145d,	// (0x00075431) bg_vkb2_func_pane_cp05_ParamLimits

0x145d,	// (0x00075431) bg_vkb2_func_pane_cp05

0x145d,	// (0x00075431) bg_vkb2_func_pane_cp03

0x145d,	// (0x00075431) bg_vkb2_func_pane_cp04

0x145d,	// (0x00075431) bg_vkb2_func_pane_cp10_ParamLimits

0x145d,	// (0x00075431) bg_vkb2_func_pane_cp10

0x616d,	// (0x0007a141) bg_vkb2_func_pane_cp08

0xcd4c,	// (0x00080d20) bg_vkb2_func_pane_cp06

0xcd5a,	// (0x00080d2e) bg_vkb2_func_pane_cp07

0xed97,	// (0x00082d6b) bg_vkb2_func_pane_cp11_ParamLimits

0xed97,	// (0x00082d6b) bg_vkb2_func_pane_cp11

0xedac,	// (0x00082d80) bg_vkb2_func_pane_cp12_ParamLimits

0xedac,	// (0x00082d80) bg_vkb2_func_pane_cp12

0x08db,	// (0x000748af) bg_vkb2_func_pane_cp09

0x47b7,	// (0x0007878b) bg_vkb2_func_pane_g1

0x1d3f,	// (0x00075d13) bg_vkb2_func_pane_g2

0x47bf,	// (0x00078793) bg_vkb2_func_pane_g3

0x47c7,	// (0x0007879b) bg_vkb2_func_pane_g4

0x49db,	// (0x000789af) bg_vkb2_func_pane_g5

0x47df,	// (0x000787b3) bg_vkb2_func_pane_g6

0x47e7,	// (0x000787bb) bg_vkb2_func_pane_g7

0x47d7,	// (0x000787ab) bg_vkb2_func_pane_g8

0x1d1f,	// (0x00075cf3) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00083b00) bg_vkb2_func_pane_g

0xd084,	// (0x00081058) blid2_tripm_pane_g6_ParamLimits

0xd084,	// (0x00081058) blid2_tripm_pane_g6

0x4652,	// (0x00078626) mp4_progress_pane_g1

0xd0de,	// (0x000810b2) blid2_tripm_values_pane_ParamLimits

0xd0de,	// (0x000810b2) blid2_tripm_values_pane

0xd19b,	// (0x0008116f) blid2_tripm_values_pane_t1

0xd1a9,	// (0x0008117d) blid2_tripm_values_pane_t2

0xd1b7,	// (0x0008118b) blid2_tripm_values_pane_t3

0xd1c5,	// (0x00081199) blid2_tripm_values_pane_t4

0xd1d3,	// (0x000811a7) blid2_tripm_values_pane_t5

0xd1e1,	// (0x000811b5) blid2_tripm_values_pane_t6

0xd1ef,	// (0x000811c3) blid2_tripm_values_pane_t7

0xd1fd,	// (0x000811d1) blid2_tripm_values_pane_t8

0xd20b,	// (0x000811df) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00083b13) blid2_tripm_values_pane_t

0x7dce,	// (0x0007bda2) call_video_pane_t1_ParamLimits

0x7def,	// (0x0007bdc3) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00083242) call_video_pane_t_ParamLimits

0x5d51,	// (0x00079d25) msg_header_pane_g1_ParamLimits

0x26cd,	// (0x000766a1) msg_header_pane_g2_ParamLimits

0x26cd,	// (0x000766a1) msg_header_pane_g2

0x0001,

0xf488,	// (0x0008345c) msg_header_pane_g_ParamLimits

0xf488,	// (0x0008345c) msg_header_pane_g

0x13e8,	// (0x000753bc) main_clock2_pane_ParamLimits

0xb266,	// (0x0007f23a) grid_clock2_toolbar_pane_ParamLimits

0xb266,	// (0x0007f23a) grid_clock2_toolbar_pane

0xb266,	// (0x0007f23a) listscroll_clock2_pane_ParamLimits

0xb266,	// (0x0007f23a) listscroll_clock2_pane

0xb30c,	// (0x0007f2e0) main_clock2_pane_t3_ParamLimits

0xb30c,	// (0x0007f2e0) main_clock2_pane_t3

0xb31e,	// (0x0007f2f2) main_clock2_pane_t4_ParamLimits

0xb31e,	// (0x0007f2f2) main_clock2_pane_t4

0xeea9,	// (0x00082e7d) cell_clock2_toolbar_pane

0xeeb1,	// (0x00082e85) cell_clock2_toolbar_pane_cp01

0xeeb1,	// (0x00082e85) cell_clock2_toolbar_pane_cp02

0xeeb9,	// (0x00082e8d) cell_clock2_toolbar_pane_cp03

0xeec1,	// (0x00082e95) list_clock2_pane

0x230b,	// (0x000762df) scroll_pane_cp10

0xeec9,	// (0x00082e9d) list_single_clock2_pane_ParamLimits

0xeec9,	// (0x00082e9d) list_single_clock2_pane

0x1ae6,	// (0x00075aba) list_highlight_pane_cp08

0xeed6,	// (0x00082eaa) list_single_clock2_pane_t1

0xeee4,	// (0x00082eb8) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00083b26) list_single_clock2_pane_t

0x08db,	// (0x000748af) bg_button_pane_cp10

0xeef2,	// (0x00082ec6) cell_clock2_toolbar_pane_g1

0x978b,	// (0x0007d75f) aid_main_viewer_pane_g1_ParamLimits

0x978b,	// (0x0007d75f) aid_main_viewer_pane_g1

0x9797,	// (0x0007d76b) aid_main_viewer_pane_g2_ParamLimits

0x9797,	// (0x0007d76b) aid_main_viewer_pane_g2

0x97a3,	// (0x0007d777) aid_main_viewer_pane_g3_ParamLimits

0x97a3,	// (0x0007d777) aid_main_viewer_pane_g3

0x97b4,	// (0x0007d788) aid_main_viewer_pane_g4_ParamLimits

0x97b4,	// (0x0007d788) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0008346d) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0008346d) aid_main_viewer_pane_g

0x9f34,	// (0x0007df08) main_calc_pane_ParamLimits

0x9f41,	// (0x0007df15) main_dialer2_pane_ParamLimits

0x08db,	// (0x000748af) main_cam6_pane

0x08db,	// (0x000748af) main_vid6_pane

0xb272,	// (0x0007f246) listscroll_gen_pane_cp06_ParamLimits

0xb272,	// (0x0007f246) listscroll_gen_pane_cp06

0xb330,	// (0x0007f304) main_clock2_pane_t5_ParamLimits

0xb330,	// (0x0007f304) main_clock2_pane_t5

0xb379,	// (0x0007f34d) aid_call2_pane_cp10_ParamLimits

0xb38b,	// (0x0007f35f) aid_call_pane_cp10_ParamLimits

0x2389,	// (0x0007635d) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2389,	// (0x0007635d) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb39d,	// (0x0007f371) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb39d,	// (0x0007f371) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2389,	// (0x0007635d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000837a8) popup_clock_analogue_window_cp10_g_ParamLimits

0xb3af,	// (0x0007f383) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbb75,	// (0x0007fb49) cell_dialer2_keypad_pane_g2_ParamLimits

0xbb75,	// (0x0007fb49) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0008388e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0008388e) cell_dialer2_keypad_pane_g

0xbb91,	// (0x0007fb65) cell_dialer2_keypad_pane_t1

0xc585,	// (0x00080559) main_cset_text2_pane_ParamLimits

0xc585,	// (0x00080559) main_cset_text2_pane

0x4c1d,	// (0x00078bf1) area_vitu2_query_pane_g1_ParamLimits

0x6098,	// (0x0007a06c) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00083a43) area_vitu2_query_pane_g_ParamLimits

0x6149,	// (0x0007a11d) area_vitu2_query_pane_t7_ParamLimits

0x6149,	// (0x0007a11d) area_vitu2_query_pane_t7

0xcd4c,	// (0x00080d20) bg_button_pane_cp018_ParamLimits

0xcd5a,	// (0x00080d2e) bg_button_pane_cp021_ParamLimits

0x616d,	// (0x0007a141) bg_button_pane_cp022_ParamLimits

0x616d,	// (0x0007a141) bg_vkb2_func_pane_cp08_ParamLimits

0xcd4c,	// (0x00080d20) bg_vkb2_func_pane_cp06_ParamLimits

0xcd5a,	// (0x00080d2e) bg_vkb2_func_pane_cp07_ParamLimits

0x617e,	// (0x0007a152) input_focus_pane_cp09_ParamLimits

0xd219,	// (0x000811ed) cam6_autofocus_pane_ParamLimits

0xd219,	// (0x000811ed) cam6_autofocus_pane

0xd23b,	// (0x0008120f) cam6_image_uncrop_pane_ParamLimits

0xd23b,	// (0x0008120f) cam6_image_uncrop_pane

0xd268,	// (0x0008123c) cam6_indi_pane_ParamLimits

0xd268,	// (0x0008123c) cam6_indi_pane

0xd282,	// (0x00081256) cam6_mode_pane_ParamLimits

0xd282,	// (0x00081256) cam6_mode_pane

0xd296,	// (0x0008126a) cam6_timer_pane_ParamLimits

0xd296,	// (0x0008126a) cam6_timer_pane

0xd2a2,	// (0x00081276) cam6_zoom_pane_ParamLimits

0xd2a2,	// (0x00081276) cam6_zoom_pane

0xd2ba,	// (0x0008128e) cam6_mode_pane_g1_ParamLimits

0xd2ba,	// (0x0008128e) cam6_mode_pane_g1

0xd2c6,	// (0x0008129a) cam6_mode_pane_g2_ParamLimits

0xd2c6,	// (0x0008129a) cam6_mode_pane_g2

0xd2d2,	// (0x000812a6) cam6_mode_pane_g3_ParamLimits

0xd2d2,	// (0x000812a6) cam6_mode_pane_g3

0xd2de,	// (0x000812b2) cam6_mode_pane_g4_ParamLimits

0xd2de,	// (0x000812b2) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00083b2b) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00083b2b) cam6_mode_pane_g

0x4c29,	// (0x00078bfd) bg_tb_trans_pane_cp08_ParamLimits

0x4c29,	// (0x00078bfd) bg_tb_trans_pane_cp08

0xeefa,	// (0x00082ece) cam6_battery_pane_ParamLimits

0xeefa,	// (0x00082ece) cam6_battery_pane

0xef10,	// (0x00082ee4) cam6_indi_pane_g1_ParamLimits

0xef10,	// (0x00082ee4) cam6_indi_pane_g1

0xef22,	// (0x00082ef6) cam6_indi_pane_g2_ParamLimits

0xef22,	// (0x00082ef6) cam6_indi_pane_g2

0xef34,	// (0x00082f08) cam6_indi_pane_g3_ParamLimits

0xef34,	// (0x00082f08) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00083b34) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00083b34) cam6_indi_pane_g

0xef46,	// (0x00082f1a) cam6_indi_pane_t1_ParamLimits

0xef46,	// (0x00082f1a) cam6_indi_pane_t1

0xc080,	// (0x00080054) cam6_autofocus_pane_g1

0xc088,	// (0x0008005c) cam6_autofocus_pane_g2

0xc090,	// (0x00080064) cam6_autofocus_pane_g3

0xc098,	// (0x0008006c) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00083b3b) cam6_autofocus_pane_g

0xef6c,	// (0x00082f40) cam6_timer_pane_g1

0xef74,	// (0x00082f48) cam6_timer_pane_t1

0xef82,	// (0x00082f56) cam6_zoom_cont_pane

0xef8a,	// (0x00082f5e) cam6_zoom_pane_g1

0xef92,	// (0x00082f66) cam6_zoom_pane_g2

0xd2ea,	// (0x000812be) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00083b44) cam6_zoom_pane_g

0x3d5e,	// (0x00077d32) cam6_battery_pane_g1

0x3d5e,	// (0x00077d32) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000836b0) cam6_battery_pane_g

0xef9a,	// (0x00082f6e) cam6_zoom_cont_pane_g1

0xefa3,	// (0x00082f77) cam6_zoom_cont_pane_g2

0xefac,	// (0x00082f80) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00083b4b) cam6_zoom_cont_pane_g

0xd307,	// (0x000812db) cam6_mode_pane_cp_ParamLimits

0xd307,	// (0x000812db) cam6_mode_pane_cp

0xd2a2,	// (0x00081276) cam6_zoom_pane_cp_ParamLimits

0xd2a2,	// (0x00081276) cam6_zoom_pane_cp

0xd31b,	// (0x000812ef) vid6_image_uncrop_cif_pane_ParamLimits

0xd31b,	// (0x000812ef) vid6_image_uncrop_cif_pane

0xd347,	// (0x0008131b) vid6_image_uncrop_nhd_pane_ParamLimits

0xd347,	// (0x0008131b) vid6_image_uncrop_nhd_pane

0xd23b,	// (0x0008120f) vid6_image_uncrop_vga_pane_ParamLimits

0xd23b,	// (0x0008120f) vid6_image_uncrop_vga_pane

0xd364,	// (0x00081338) vid6_image_uncrop_wvga_pane_ParamLimits

0xd364,	// (0x00081338) vid6_image_uncrop_wvga_pane

0xd381,	// (0x00081355) vid6_indi_pane_ParamLimits

0xd381,	// (0x00081355) vid6_indi_pane

0x4c29,	// (0x00078bfd) bg_tb_trans_pane_cp09_ParamLimits

0x4c29,	// (0x00078bfd) bg_tb_trans_pane_cp09

0xefc4,	// (0x00082f98) cam6_battery_pane_cp_ParamLimits

0xefc4,	// (0x00082f98) cam6_battery_pane_cp

0xefd0,	// (0x00082fa4) vid6_indi_pane_g1_ParamLimits

0xefd0,	// (0x00082fa4) vid6_indi_pane_g1

0xefe2,	// (0x00082fb6) vid6_indi_pane_g2_ParamLimits

0xefe2,	// (0x00082fb6) vid6_indi_pane_g2

0xeff4,	// (0x00082fc8) vid6_indi_pane_g3_ParamLimits

0xeff4,	// (0x00082fc8) vid6_indi_pane_g3

0xf009,	// (0x00082fdd) vid6_indi_pane_g4_ParamLimits

0xf009,	// (0x00082fdd) vid6_indi_pane_g4

0xf01e,	// (0x00082ff2) vid6_indi_pane_g5_ParamLimits

0xf01e,	// (0x00082ff2) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00083b52) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00083b52) vid6_indi_pane_g

0xf038,	// (0x0008300c) vid6_indi_pane_t1_ParamLimits

0xf038,	// (0x0008300c) vid6_indi_pane_t1

0xf04e,	// (0x00083022) vid6_indi_pane_t2_ParamLimits

0xf04e,	// (0x00083022) vid6_indi_pane_t2

0xf076,	// (0x0008304a) vid6_indi_pane_t3_ParamLimits

0xf076,	// (0x0008304a) vid6_indi_pane_t3

0xf09e,	// (0x00083072) vid6_indi_pane_t4_ParamLimits

0xf09e,	// (0x00083072) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x00083b5d) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x00083b5d) vid6_indi_pane_t

0x009c,	// (0x00074070) wait_bar_pane_cp08

0xd3a6,	// (0x0008137a) main_cset_text2_pane_t1_ParamLimits

0xd3a6,	// (0x0008137a) main_cset_text2_pane_t1

0xd2f2,	// (0x000812c6) listscroll_gen_pane_cp06_t1_ParamLimits

0xd2f2,	// (0x000812c6) listscroll_gen_pane_cp06_t1

0x08db,	// (0x000748af) main_cam6_set_pane

0x3fca,	// (0x00077f9e) bg_tb_trans_pane_cp06_ParamLimits

0xbf30,	// (0x0007ff04) cam4_indicators_pane_g1_ParamLimits

0xbf41,	// (0x0007ff15) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000838cb) cam4_indicators_pane_g_ParamLimits

0xbf5f,	// (0x0007ff33) cam4_indicators_pane_t1_ParamLimits

0x145d,	// (0x00075431) bg_tb_trans_pane_cp07_ParamLimits

0xc012,	// (0x0007ffe6) vid4_indicators_pane_g1_ParamLimits

0xc026,	// (0x0007fffa) vid4_indicators_pane_g2_ParamLimits

0xc03a,	// (0x0008000e) vid4_indicators_pane_g3_ParamLimits

0xc04b,	// (0x0008001f) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000838dd) vid4_indicators_pane_g_ParamLimits

0xc069,	// (0x0008003d) vid4_indicators_pane_t1_ParamLimits

0xce86,	// (0x00080e5a) vid4_progress_pane_g1_ParamLimits

0xce96,	// (0x00080e6a) vid4_progress_pane_g2_ParamLimits

0xcea6,	// (0x00080e7a) vid4_progress_pane_g3_ParamLimits

0xceb8,	// (0x00080e8c) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00083a8e) vid4_progress_pane_g_ParamLimits

0xced0,	// (0x00080ea4) vid4_progress_pane_t1_ParamLimits

0xcee6,	// (0x00080eba) vid4_progress_pane_t2_ParamLimits

0xcefb,	// (0x00080ecf) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00083a99) vid4_progress_pane_t_ParamLimits

0xcf10,	// (0x00080ee4) wait_bar_pane_cp07_ParamLimits

0xd3d9,	// (0x000813ad) main_cam6_set_pane_g2_ParamLimits

0xd3d9,	// (0x000813ad) main_cam6_set_pane_g2

0xd3e5,	// (0x000813b9) main_cset6_listscroll_pane_ParamLimits

0xd3e5,	// (0x000813b9) main_cset6_listscroll_pane

0xd410,	// (0x000813e4) main_cset6_slider_pane_ParamLimits

0xd410,	// (0x000813e4) main_cset6_slider_pane

0xd41c,	// (0x000813f0) main_cset6_text2_pane_ParamLimits

0xd41c,	// (0x000813f0) main_cset6_text2_pane

0x00ab,	// (0x0007407f) main_cset6_text_pane

0x00b3,	// (0x00074087) main_cset_list_pane_copy1_ParamLimits

0x00b3,	// (0x00074087) main_cset_list_pane_copy1

0x00c3,	// (0x00074097) scroll_pane_cp028_copy1

0xd42f,	// (0x00081403) cset_list_set_pane_copy1

0xd442,	// (0x00081416) aid_position_infowindow_above_copy1

0xd44a,	// (0x0008141e) aid_position_infowindow_below_copy1

0xd452,	// (0x00081426) cset_list_set_pane_g1_copy1

0x5f17,	// (0x00079eeb) cset_list_set_pane_g3_copy1_ParamLimits

0x5f17,	// (0x00079eeb) cset_list_set_pane_g3_copy1

0x5f26,	// (0x00079efa) cset_list_set_pane_t1_copy1_ParamLimits

0x5f26,	// (0x00079efa) cset_list_set_pane_t1_copy1

0x145d,	// (0x00075431) list_highlight_pane_cp021_copy1_ParamLimits

0x145d,	// (0x00075431) list_highlight_pane_cp021_copy1

0x00cc,	// (0x000740a0) cset6_slider_pane_ParamLimits

0x00cc,	// (0x000740a0) cset6_slider_pane

0x00f8,	// (0x000740cc) main_cset6_slider_pane_g1_ParamLimits

0x00f8,	// (0x000740cc) main_cset6_slider_pane_g1

0xd45a,	// (0x0008142e) main_cset6_slider_pane_g2_ParamLimits

0xd45a,	// (0x0008142e) main_cset6_slider_pane_g2

0x0120,	// (0x000740f4) main_cset6_slider_pane_g3_ParamLimits

0x0120,	// (0x000740f4) main_cset6_slider_pane_g3

0xd482,	// (0x00081456) main_cset6_slider_pane_g4_ParamLimits

0xd482,	// (0x00081456) main_cset6_slider_pane_g4

0xd48e,	// (0x00081462) main_cset6_slider_pane_g5_ParamLimits

0xd48e,	// (0x00081462) main_cset6_slider_pane_g5

0x48e6,	// (0x000788ba) main_cset6_slider_pane_g7_ParamLimits

0x48e6,	// (0x000788ba) main_cset6_slider_pane_g7

0x48f2,	// (0x000788c6) main_cset6_slider_pane_g8_ParamLimits

0x48f2,	// (0x000788c6) main_cset6_slider_pane_g8

0xd49c,	// (0x00081470) main_cset6_slider_pane_g9_ParamLimits

0xd49c,	// (0x00081470) main_cset6_slider_pane_g9

0xd4a8,	// (0x0008147c) main_cset6_slider_pane_g10_ParamLimits

0xd4a8,	// (0x0008147c) main_cset6_slider_pane_g10

0xd4b4,	// (0x00081488) main_cset6_slider_pane_g11_ParamLimits

0xd4b4,	// (0x00081488) main_cset6_slider_pane_g11

0xd4c0,	// (0x00081494) main_cset6_slider_pane_g12_ParamLimits

0xd4c0,	// (0x00081494) main_cset6_slider_pane_g12

0xd4cc,	// (0x000814a0) main_cset6_slider_pane_g13_ParamLimits

0xd4cc,	// (0x000814a0) main_cset6_slider_pane_g13

0xd4d8,	// (0x000814ac) main_cset6_slider_pane_g14_ParamLimits

0xd4d8,	// (0x000814ac) main_cset6_slider_pane_g14

0xd4e4,	// (0x000814b8) main_cset6_slider_pane_g15_ParamLimits

0xd4e4,	// (0x000814b8) main_cset6_slider_pane_g15

0xd4fc,	// (0x000814d0) main_cset6_slider_pane_g16_ParamLimits

0xd4fc,	// (0x000814d0) main_cset6_slider_pane_g16

0xd50a,	// (0x000814de) main_cset6_slider_pane_g17_ParamLimits

0xd50a,	// (0x000814de) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00083b66) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00083b66) main_cset6_slider_pane_g

0x012c,	// (0x00074100) main_cset6_slider_pane_t1_ParamLimits

0x012c,	// (0x00074100) main_cset6_slider_pane_t1

0xd530,	// (0x00081504) main_cset6_slider_pane_t2_ParamLimits

0xd530,	// (0x00081504) main_cset6_slider_pane_t2

0xd55b,	// (0x0008152f) main_cset6_slider_pane_t3_ParamLimits

0xd55b,	// (0x0008152f) main_cset6_slider_pane_t3

0xd586,	// (0x0008155a) main_cset6_slider_pane_t4_ParamLimits

0xd586,	// (0x0008155a) main_cset6_slider_pane_t4

0xd5b1,	// (0x00081585) main_cset6_slider_pane_t5_ParamLimits

0xd5b1,	// (0x00081585) main_cset6_slider_pane_t5

0x016d,	// (0x00074141) main_cset6_slider_pane_t7_ParamLimits

0x016d,	// (0x00074141) main_cset6_slider_pane_t7

0xd5de,	// (0x000815b2) main_cset6_slider_pane_t8_ParamLimits

0xd5de,	// (0x000815b2) main_cset6_slider_pane_t8

0xd602,	// (0x000815d6) main_cset6_slider_pane_t9_ParamLimits

0xd602,	// (0x000815d6) main_cset6_slider_pane_t9

0xd626,	// (0x000815fa) main_cset6_slider_pane_t10_ParamLimits

0xd626,	// (0x000815fa) main_cset6_slider_pane_t10

0xd64a,	// (0x0008161e) main_cset6_slider_pane_t11_ParamLimits

0xd64a,	// (0x0008161e) main_cset6_slider_pane_t11

0x01a3,	// (0x00074177) main_cset6_slider_pane_t14_ParamLimits

0x01a3,	// (0x00074177) main_cset6_slider_pane_t14

0x01dc,	// (0x000741b0) main_cset6_slider_pane_t15_ParamLimits

0x01dc,	// (0x000741b0) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00083b8b) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00083b8b) main_cset6_slider_pane_t

0x4b4e,	// (0x00078b22) cset_slider_pane_g1_copy1

0x4b57,	// (0x00078b2b) cset_slider_pane_g2_copy1

0x4b60,	// (0x00078b34) cset_slider_pane_g3_copy1

0x08db,	// (0x000748af) bg_popup_sub_pane_cp011_copy1

0x0215,	// (0x000741e9) main_cset_text_pane_g1_copy1

0x4a2a,	// (0x000789fe) main_cset_text_pane_t1_copy1

0x4a38,	// (0x00078a0c) main_cset_text_pane_t2_copy1

0x4a46,	// (0x00078a1a) main_cset_text_pane_t3_copy1

0x4a54,	// (0x00078a28) main_cset_text_pane_t4_copy1

0x4a62,	// (0x00078a36) main_cset_text_pane_t5_copy1

0x021d,	// (0x000741f1) main_cset_text_pane_t6_copy1

0x022b,	// (0x000741ff) main_cset_text_pane_t7_copy1

0xd689,	// (0x0008165d) main_cset_text2_pane_t1_copy1

0x145d,	// (0x00075431) main_ncimui_pane

0x9f92,	// (0x0007df66) popup_query_ncimui_window_ParamLimits

0x9f92,	// (0x0007df66) popup_query_ncimui_window

0xab23,	// (0x0007eaf7) field_cale_ev2_pane_g4_ParamLimits

0xab23,	// (0x0007eaf7) field_cale_ev2_pane_g4

0xb895,	// (0x0007f869) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb895,	// (0x0007f869) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x00083869) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x00083869) cell_video_dialer_keypad_pane_g

0xb8ad,	// (0x0007f881) cell_video_dialer_keypad_pane_t1

0x08db,	// (0x000748af) bg_popup_window_pane_cp012

0x21d8,	// (0x000761ac) heading_pane_cp06

0x0257,	// (0x0007422b) ncim_query_content_pane

0x08db,	// (0x000748af) bg_popup_heading_pane_cp01

0x025f,	// (0x00074233) ncim_heading_pane_t1

0x026d,	// (0x00074241) ncim_indicator_popup_pane

0x027f,	// (0x00074253) ncim_query_button_pane

0x0293,	// (0x00074267) ncim_query_content_pane_t1

0x02a5,	// (0x00074279) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00083bcf) ncim_query_content_pane_t

0x02df,	// (0x000742b3) ncim_query_list_pane

0x02f1,	// (0x000742c5) ncim_query_popup_pane

0x026d,	// (0x00074241) ncim_indicator_popup_pane_ParamLimits

0xd7dc,	// (0x000817b0) ncim_query_content_pane_g1_ParamLimits

0xd7dc,	// (0x000817b0) ncim_query_content_pane_g1

0x0293,	// (0x00074267) ncim_query_content_pane_t1_ParamLimits

0x02a5,	// (0x00074279) ncim_query_content_pane_t2_ParamLimits

0xd7e8,	// (0x000817bc) ncim_query_content_pane_t3_ParamLimits

0xd7e8,	// (0x000817bc) ncim_query_content_pane_t3

0xd805,	// (0x000817d9) ncim_query_content_pane_t4_ParamLimits

0xd805,	// (0x000817d9) ncim_query_content_pane_t4

0xd822,	// (0x000817f6) ncim_query_content_pane_t5_ParamLimits

0xd822,	// (0x000817f6) ncim_query_content_pane_t5

0x02b7,	// (0x0007428b) ncim_query_content_pane_t6_ParamLimits

0x02b7,	// (0x0007428b) ncim_query_content_pane_t6

0xfbfb,	// (0x00083bcf) ncim_query_content_pane_t_ParamLimits

0x02df,	// (0x000742b3) ncim_query_list_pane_ParamLimits

0x02f1,	// (0x000742c5) ncim_query_popup_pane_ParamLimits

0x0305,	// (0x000742d9) wait_bar_pane_cp04

0x08db,	// (0x000748af) input_focus_pane_cp011

0x030d,	// (0x000742e1) ncim_query_popup_pane_t1

0x031b,	// (0x000742ef) ncim_list_query_list_pane_ParamLimits

0x031b,	// (0x000742ef) ncim_list_query_list_pane

0x08db,	// (0x000748af) bg_button_pane_cp027

0x0328,	// (0x000742fc) ncim_query_button_pane_g1

0x08db,	// (0x000748af) list_highlight_pane_cp012

0x0332,	// (0x00074306) ncim_list_query_list_pane_g1

0x033a,	// (0x0007430e) ncim_list_query_list_pane_t1

0xbf50,	// (0x0007ff24) cam4_indicators_pane_g3_ParamLimits

0xbf50,	// (0x0007ff24) cam4_indicators_pane_g3

0xc057,	// (0x0008002b) vid4_indicators_pane_g5_ParamLimits

0xc057,	// (0x0008002b) vid4_indicators_pane_g5

0xcec4,	// (0x00080e98) vid4_progress_pane_g5_ParamLimits

0xcec4,	// (0x00080e98) vid4_progress_pane_g5

0xd6c8,	// (0x0008169c) main_ncimui_pane_g1

0xd730,	// (0x00081704) ncimui_group_query_pane_ParamLimits

0xd730,	// (0x00081704) ncimui_group_query_pane

0xd778,	// (0x0008174c) ncimui_list_pane_ParamLimits

0xd778,	// (0x0008174c) ncimui_list_pane

0xd79f,	// (0x00081773) ncimui_text_pane_ParamLimits

0xd79f,	// (0x00081773) ncimui_text_pane

0xd83f,	// (0x00081813) ncimui_text_pane_t1_ParamLimits

0xd83f,	// (0x00081813) ncimui_text_pane_t1

0x0348,	// (0x0007431c) ncimui_list_single_graphic_pane_ParamLimits

0x0348,	// (0x0007431c) ncimui_list_single_graphic_pane

0xd85e,	// (0x00081832) ncimui_query_pane_ParamLimits

0xd85e,	// (0x00081832) ncimui_query_pane

0x08db,	// (0x000748af) list_highlight_pane_cp013

0x0358,	// (0x0007432c) ncim_list_query_list_pane_t1_copy1

0x0332,	// (0x00074306) ncim_list_single_graphic_pane_g1

0xd871,	// (0x00081845) ncim_query_button_pane_cp01

0xd87d,	// (0x00081851) ncim_query_entry_pane_ParamLimits

0xd87d,	// (0x00081851) ncim_query_entry_pane

0xd890,	// (0x00081864) ncimui_query_pane_g1

0xd89c,	// (0x00081870) ncimui_query_pane_t1_ParamLimits

0xd89c,	// (0x00081870) ncimui_query_pane_t1

0x145d,	// (0x00075431) input_focus_pane_cp012

0x0366,	// (0x0007433a) ncim_query_entry_pane_t1

0x13e8,	// (0x000753bc) main_im_pane_ParamLimits

0x145d,	// (0x00075431) main_mobtv_pane_ParamLimits

0x145d,	// (0x00075431) main_mobtv_pane

0xd518,	// (0x000814ec) main_cset6_slider_pane_g18_ParamLimits

0xd518,	// (0x000814ec) main_cset6_slider_pane_g18

0xd524,	// (0x000814f8) main_cset6_slider_pane_g19_ParamLimits

0xd524,	// (0x000814f8) main_cset6_slider_pane_g19

0x4797,	// (0x0007876b) bg_main_mobtv_pane_ParamLimits

0x4797,	// (0x0007876b) bg_main_mobtv_pane

0xd8b5,	// (0x00081889) main_mobtv_info_pane

0xd8c0,	// (0x00081894) main_mobtv_loading_pane_ParamLimits

0xd8c0,	// (0x00081894) main_mobtv_loading_pane

0x0378,	// (0x0007434c) main_mobtv_pg_channel_list_pane

0x0382,	// (0x00074356) main_mobtv_pg_hdr_pane

0xd8cd,	// (0x000818a1) main_mobtv_programe_curr_pane_ParamLimits

0xd8cd,	// (0x000818a1) main_mobtv_programe_curr_pane

0xd8da,	// (0x000818ae) main_mobtv_programe_next_pane_ParamLimits

0xd8da,	// (0x000818ae) main_mobtv_programe_next_pane

0x038b,	// (0x0007435f) popup_mobtv_noti_window

0x3d5e,	// (0x00077d32) main_tv_pg_hdr_pane_g1

0x0393,	// (0x00074367) main_tv_pg_hdr_pane_g2

0x039b,	// (0x0007436f) main_tv_pg_hdr_pane_g3

0x03a3,	// (0x00074377) main_tv_pg_hdr_pane_g4

0x03ab,	// (0x0007437f) main_tv_pg_hdr_pane_g5

0x03b5,	// (0x00074389) main_tv_pg_hdr_pane_g6

0x03bf,	// (0x00074393) main_tv_pg_hdr_pane_g7

0x03c9,	// (0x0007439d) main_tv_pg_hdr_pane_g8

0x03d3,	// (0x000743a7) main_tv_pg_hdr_pane_g9

0x03dd,	// (0x000743b1) main_tv_pg_hdr_pane_g10

0x03e7,	// (0x000743bb) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00083bdc) main_tv_pg_hdr_pane_g

0x03f1,	// (0x000743c5) main_tv_pg_hdr_pane_t1

0x03ff,	// (0x000743d3) main_tv_pg_hdr_pane_t2

0x040d,	// (0x000743e1) main_tv_pg_hdr_pane_t3

0x041d,	// (0x000743f1) main_tv_pg_hdr_pane_t4

0x042d,	// (0x00074401) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00083bf3) main_tv_pg_hdr_pane_t

0x043d,	// (0x00074411) single_mobtv_pg_channel_pane_ParamLimits

0x043d,	// (0x00074411) single_mobtv_pg_channel_pane

0x044f,	// (0x00074423) single_mobtv_pg_channel_table_pane

0x0458,	// (0x0007442c) single_mobtv_pg_channel_thumb_pane

0x0461,	// (0x00074435) single_tv_pg_channel_pane_g1

0x046a,	// (0x0007443e) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00083bfe) single_tv_pg_channel_pane_g

0x3fca,	// (0x00077f9e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3fca,	// (0x00077f9e) bg_single_mobtv_pg_channel_thumb_pane

0x0473,	// (0x00074447) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0473,	// (0x00074447) single_mobtv_pg_channel_thumb_pane_g1

0x0481,	// (0x00074455) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0481,	// (0x00074455) single_mobtv_pg_channel_thumb_pane_g2

0x048d,	// (0x00074461) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x048d,	// (0x00074461) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00083c03) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00083c03) single_mobtv_pg_channel_thumb_pane_g

0x0499,	// (0x0007446d) single_mobtv_pg_channel_thumb_pane_t1

0x04a7,	// (0x0007447b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00083c0a) single_mobtv_pg_channel_thumb_pane_t

0x3d5e,	// (0x00077d32) bg_single_mobtv_pg_channel_table_pane_g1

0x3d5e,	// (0x00077d32) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000836b0) bg_single_mobtv_pg_channel_table_pane_g

0x04b5,	// (0x00074489) single_mobtv_pg_channel_table_pane_t1

0x04c3,	// (0x00074497) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00083c0f) single_mobtv_pg_channel_table_pane_t

0xd8ef,	// (0x000818c3) main_mobtv_info_pane_g1_ParamLimits

0xd8ef,	// (0x000818c3) main_mobtv_info_pane_g1

0xd90b,	// (0x000818df) main_mobtv_info_pane_t1_ParamLimits

0xd90b,	// (0x000818df) main_mobtv_info_pane_t1

0xd983,	// (0x00081957) main_mobtv_info_pane_t2_ParamLimits

0xd983,	// (0x00081957) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00083c19) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00083c19) main_mobtv_info_pane_t

0xda12,	// (0x000819e6) wait_bar_pane_cp05

0xda24,	// (0x000819f8) main_mobtv_loading_pane_g1_ParamLimits

0xda24,	// (0x000819f8) main_mobtv_loading_pane_g1

0xda32,	// (0x00081a06) main_mobtv_loading_pane_g2_ParamLimits

0xda32,	// (0x00081a06) main_mobtv_loading_pane_g2

0xda3e,	// (0x00081a12) main_mobtv_loading_pane_g3_ParamLimits

0xda3e,	// (0x00081a12) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00083c20) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00083c20) main_mobtv_loading_pane_g

0x04d1,	// (0x000744a5) main_mobtv_loading_pane_t1_ParamLimits

0x04d1,	// (0x000744a5) main_mobtv_loading_pane_t1

0x04e9,	// (0x000744bd) main_mobtv_loading_pane_t2_ParamLimits

0x04e9,	// (0x000744bd) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00083c27) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00083c27) main_mobtv_loading_pane_t

0xda4c,	// (0x00081a20) wait_bar_pane_cp06_ParamLimits

0xda4c,	// (0x00081a20) wait_bar_pane_cp06

0x050d,	// (0x000744e1) main_mobtv_programe_curr_pane_t1

0x051b,	// (0x000744ef) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00083c2c) main_mobtv_programe_curr_pane_t

0x0529,	// (0x000744fd) main_mobtv_programe_next_pane_t1

0x0537,	// (0x0007450b) main_mobtv_programe_next_pane_t2

0x0545,	// (0x00074519) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x00083c31) main_mobtv_programe_next_pane_t

0x08db,	// (0x000748af) bg_popup_mobtv_noti_window_pane

0x0553,	// (0x00074527) popup_mobtv_noti_window_g1

0x055b,	// (0x0007452f) popup_mobtv_noti_window_t1

0x0569,	// (0x0007453d) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00083c38) popup_mobtv_noti_window_t

0x3d5e,	// (0x00077d32) bg_popup_mobtv_noti_window_pane_g1

0x08db,	// (0x000748af) sc_clock_pane

0x08db,	// (0x000748af) main_fs_bigclock_pane

0xd0cc,	// (0x000810a0) blid2_tripm_pane_t4_ParamLimits

0xd0cc,	// (0x000810a0) blid2_tripm_pane_t4

0xda58,	// (0x00081a2c) sc_clock_pane_g1_ParamLimits

0xda58,	// (0x00081a2c) sc_clock_pane_g1

0xda66,	// (0x00081a3a) sc_clock_pane_t1_ParamLimits

0xda66,	// (0x00081a3a) sc_clock_pane_t1

0xda79,	// (0x00081a4d) sc_clock_pane_t2_ParamLimits

0xda79,	// (0x00081a4d) sc_clock_pane_t2

0xda8b,	// (0x00081a5f) sc_clock_pane_t3_ParamLimits

0xda8b,	// (0x00081a5f) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x00083c3d) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x00083c3d) sc_clock_pane_t

0xe39e,	// (0x00082372) main_fs_bigclock_indicator_pane_ParamLimits

0xe39e,	// (0x00082372) main_fs_bigclock_indicator_pane

0xdb0e,	// (0x00081ae2) main_fs_bigclock_pane_g1_ParamLimits

0xdb0e,	// (0x00081ae2) main_fs_bigclock_pane_g1

0xe3aa,	// (0x0008237e) main_fs_bigclock_pane_t1_ParamLimits

0xe3aa,	// (0x0008237e) main_fs_bigclock_pane_t1

0xe3bc,	// (0x00082390) main_fs_bigclock_pane_t2_ParamLimits

0xe3bc,	// (0x00082390) main_fs_bigclock_pane_t2

0xe3d0,	// (0x000823a4) main_fs_bigclock_pane_t3_ParamLimits

0xe3d0,	// (0x000823a4) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00083e47) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00083e47) main_fs_bigclock_pane_t

0x1582,	// (0x00075556) main_fs_bigclock_indicator_pane_g1

0x0287,	// (0x0007425b) ncim_query_content_pane_g2_ParamLimits

0x0287,	// (0x0007425b) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00083bca) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00083bca) ncim_query_content_pane_g

0xda9f,	// (0x00081a73) sc_clock_pane_t4_ParamLimits

0xda9f,	// (0x00081a73) sc_clock_pane_t4

0x145d,	// (0x00075431) main_radioblah_pane

0xbdf3,	// (0x0007fdc7) cell_call4_button_pane_t1_copy1_ParamLimits

0xbdf3,	// (0x0007fdc7) cell_call4_button_pane_t1_copy1

0xd6e2,	// (0x000816b6) main_ncimui_pane_t1_ParamLimits

0xd6e2,	// (0x000816b6) main_ncimui_pane_t1

0xd6fc,	// (0x000816d0) main_ncimui_pane_t2_ParamLimits

0xd6fc,	// (0x000816d0) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00083bc3) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00083bc3) main_ncimui_pane_t

0x06ae,	// (0x00074682) main_radioblah_anim_pane_ParamLimits

0x06ae,	// (0x00074682) main_radioblah_anim_pane

0x06bf,	// (0x00074693) main_radioblah_info_pane_ParamLimits

0x06bf,	// (0x00074693) main_radioblah_info_pane

0x06d3,	// (0x000746a7) main_radioblah_pane_t1_ParamLimits

0x06d3,	// (0x000746a7) main_radioblah_pane_t1

0x06ef,	// (0x000746c3) main_radioblah_pane_t2_ParamLimits

0x06ef,	// (0x000746c3) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x00083c5e) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x00083c5e) main_radioblah_pane_t

0xdb64,	// (0x00081b38) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdb64,	// (0x00081b38) main_radioblah_rocker_ctrl_pane

0x0737,	// (0x0007470b) main_radioblah_info_pane_t1_ParamLimits

0x0737,	// (0x0007470b) main_radioblah_info_pane_t1

0xdba9,	// (0x00081b7d) main_radioblah_info_pane_t2_ParamLimits

0xdba9,	// (0x00081b7d) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00083c67) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00083c67) main_radioblah_info_pane_t

0x3d5e,	// (0x00077d32) main_radioblah_rocker_ctrl_pane_g1

0xdc59,	// (0x00081c2d) main_radioblah_rocker_ctrl_pane_g2

0xdc61,	// (0x00081c35) main_radioblah_rocker_ctrl_pane_g3

0xdc69,	// (0x00081c3d) main_radioblah_rocker_ctrl_pane_g4

0xdc71,	// (0x00081c45) main_radioblah_rocker_ctrl_pane_g5

0xdc79,	// (0x00081c4d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00083c70) main_radioblah_rocker_ctrl_pane_g

0xd689,	// (0x0008165d) main_cset_text2_pane_t1_copy1_ParamLimits

0xbe7e,	// (0x0007fe52) cam4_image_uncrop_qvga_pane

0xbfc5,	// (0x0007ff99) vid4_image_uncrop_qcif_pane

0xd25a,	// (0x0008122e) cam6_image_uncrop_qvga_pane_ParamLimits

0xd25a,	// (0x0008122e) cam6_image_uncrop_qvga_pane

0xefb4,	// (0x00082f88) vid6_image_uncrop_qcif_pane_ParamLimits

0xefb4,	// (0x00082f88) vid6_image_uncrop_qcif_pane

0x08db,	// (0x000748af) bg_popup_preview_window_pane_cp03

0x0239,	// (0x0007420d) list_cset_text2_pane

0x0241,	// (0x00074215) main_cset6_text2_pane_g1

0x0249,	// (0x0007421d) main_cset6_text2_pane_t1

0xdc81,	// (0x00081c55) list_cset_text2_pane_t1_ParamLimits

0xdc81,	// (0x00081c55) list_cset_text2_pane_t1

0x145d,	// (0x00075431) main_radioblah_pane_ParamLimits

0xd9fe,	// (0x000819d2) main_mobtv_info_pane_t3_ParamLimits

0xd9fe,	// (0x000819d2) main_mobtv_info_pane_t3

0xdb52,	// (0x00081b26) main_radioblah_pane_g1

0xdb7d,	// (0x00081b51) main_radioblah_info_pane_g1

0xdbfe,	// (0x00081bd2) main_radioblah_info_pane_t3_ParamLimits

0xdbfe,	// (0x00081bd2) main_radioblah_info_pane_t3

0x8def,	// (0x0007cdc3) highlight_cell_cale_month_pane_ParamLimits

0x8def,	// (0x0007cdc3) highlight_cell_cale_month_pane

0x08db,	// (0x000748af) main_phob_fisheye_pane

0x40c6,	// (0x0007809a) scroll_pane_cp0031_ParamLimits

0x40c6,	// (0x0007809a) scroll_pane_cp0031

0x009c,	// (0x00074070) wait_bar_pane_cp08_ParamLimits

0xd42f,	// (0x00081403) cset_list_set_pane_copy1_ParamLimits

0x0771,	// (0x00074745) highlight_cell_cale_month_pane_g1

0xdc9e,	// (0x00081c72) highlight_cell_cale_month_pane_t1

0xed4a,	// (0x00082d1e) list_gen_pane_cp01

0x48d1,	// (0x000788a5) scroll_pane_01

0x6271,	// (0x0007a245) list_single_double_fisheye_pane

0x627a,	// (0x0007a24e) list_double_fisheye_pane_g1_ParamLimits

0x627a,	// (0x0007a24e) list_double_fisheye_pane_g1

0x6286,	// (0x0007a25a) list_double_fisheye_pane_g2_ParamLimits

0x6286,	// (0x0007a25a) list_double_fisheye_pane_g2

0x629a,	// (0x0007a26e) list_double_fisheye_pane_g3_ParamLimits

0x629a,	// (0x0007a26e) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00083c7d) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00083c7d) list_double_fisheye_pane_g

0x62c3,	// (0x0007a297) list_double_fisheye_pane_t1_ParamLimits

0x62c3,	// (0x0007a297) list_double_fisheye_pane_t1

0x62de,	// (0x0007a2b2) list_double_fisheye_pane_t2_ParamLimits

0x62de,	// (0x0007a2b2) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00083c88) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00083c88) list_double_fisheye_pane_t

0x08db,	// (0x000748af) main_call5_pane

0xdac5,	// (0x00081a99) sc_swipe_pane_ParamLimits

0xdac5,	// (0x00081a99) sc_swipe_pane

0xdcb8,	// (0x00081c8c) call5_image_pane_ParamLimits

0xdcb8,	// (0x00081c8c) call5_image_pane

0xdcc8,	// (0x00081c9c) call5_swipe_1_pane_ParamLimits

0xdcc8,	// (0x00081c9c) call5_swipe_1_pane

0xdcd4,	// (0x00081ca8) call5_swipe_2_pane_ParamLimits

0xdcd4,	// (0x00081ca8) call5_swipe_2_pane

0xdcee,	// (0x00081cc2) popup_call5_audio_first_window_ParamLimits

0xdcee,	// (0x00081cc2) popup_call5_audio_first_window

0x3fca,	// (0x00077f9e) call5_swipe_1_pane_g1_ParamLimits

0x3fca,	// (0x00077f9e) call5_swipe_1_pane_g1

0x0779,	// (0x0007474d) call5_swipe_1_pane_g2_ParamLimits

0x0779,	// (0x0007474d) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00083c8d) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00083c8d) call5_swipe_1_pane_g

0x0785,	// (0x00074759) call5_swipe_1_pane_t1_ParamLimits

0x0785,	// (0x00074759) call5_swipe_1_pane_t1

0x3fca,	// (0x00077f9e) call5_swipe_2_pane_g1_ParamLimits

0x3fca,	// (0x00077f9e) call5_swipe_2_pane_g1

0x079a,	// (0x0007476e) call5_swipe_2_pane_g2_ParamLimits

0x079a,	// (0x0007476e) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00083c92) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00083c92) call5_swipe_2_pane_g

0x07a6,	// (0x0007477a) call5_swipe_2_pane_t1_ParamLimits

0x07a6,	// (0x0007477a) call5_swipe_2_pane_t1

0x07bb,	// (0x0007478f) sc_swipe_pane_g1_ParamLimits

0x07bb,	// (0x0007478f) sc_swipe_pane_g1

0x07c8,	// (0x0007479c) sc_swipe_pane_g2_ParamLimits

0x07c8,	// (0x0007479c) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00083c97) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00083c97) sc_swipe_pane_g

0x07d4,	// (0x000747a8) sc_swipe_pane_t1_ParamLimits

0x07d4,	// (0x000747a8) sc_swipe_pane_t1

0x08db,	// (0x000748af) main_cmail_launcher_pane

0xdcfc,	// (0x00081cd0) aid_size_cell_cmail_l_ParamLimits

0xdcfc,	// (0x00081cd0) aid_size_cell_cmail_l

0xdd0a,	// (0x00081cde) grid_cmail_l_pane_ParamLimits

0xdd0a,	// (0x00081cde) grid_cmail_l_pane

0xdd1a,	// (0x00081cee) cell_cmail_l_pane_ParamLimits

0xdd1a,	// (0x00081cee) cell_cmail_l_pane

0x07e9,	// (0x000747bd) cell_cmail_l_pane_g1_ParamLimits

0x07e9,	// (0x000747bd) cell_cmail_l_pane_g1

0x07f5,	// (0x000747c9) cell_cmail_l_pane_t1_ParamLimits

0x07f5,	// (0x000747c9) cell_cmail_l_pane_t1

0x080b,	// (0x000747df) cell_cmail_l_pane_t2_ParamLimits

0x080b,	// (0x000747df) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00083c9c) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00083c9c) cell_cmail_l_pane_t

0x145d,	// (0x00075431) grid_highlight_pane_cp018_ParamLimits

0x145d,	// (0x00075431) grid_highlight_pane_cp018

0x6e74,	// (0x0007ae48) main2_pane_ParamLimits

0x6e74,	// (0x0007ae48) main2_pane

0x19ba,	// (0x0007598e) popup_sp_fs_action_menu_bg_pane_g1

0x19c2,	// (0x00075996) popup_sp_fs_action_menu_bg_pane_g2

0x19ca,	// (0x0007599e) popup_sp_fs_action_menu_bg_pane_g3

0x19d2,	// (0x000759a6) popup_sp_fs_action_menu_bg_pane_g4

0x19da,	// (0x000759ae) popup_sp_fs_action_menu_bg_pane_g5

0x19e2,	// (0x000759b6) popup_sp_fs_action_menu_bg_pane_g6

0x19ea,	// (0x000759be) popup_sp_fs_action_menu_bg_pane_g7

0x19f2,	// (0x000759c6) popup_sp_fs_action_menu_bg_pane_g8

0x19fa,	// (0x000759ce) popup_sp_fs_action_menu_bg_pane_g9

0x1a02,	// (0x000759d6) popup_sp_fs_action_menu_bg_pane_g10

0x1a02,	// (0x000759d6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0008315e) popup_sp_fs_action_menu_bg_pane_g

0x5b00,	// (0x00079ad4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x2_t3_g3_g1

0x7d00,	// (0x0007bcd4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x7d00,	// (0x0007bcd4) list_medium_line_x2_t3_g3_g2

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008320c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008320c) list_medium_line_x2_t3_g3_g

0x5b18,	// (0x00079aec) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5b18,	// (0x00079aec) list_medium_line_x2_t3_g3_t1

0x5b2d,	// (0x00079b01) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5b2d,	// (0x00079b01) list_medium_line_x2_t3_g3_t2

0x5b3f,	// (0x00079b13) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5b3f,	// (0x00079b13) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00083213) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00083213) list_medium_line_x2_t3_g3_t

0x5b00,	// (0x00079ad4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x2_t3_g2_g1

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008321a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008321a) list_medium_line_x2_t3_g2_g

0x5b54,	// (0x00079b28) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5b54,	// (0x00079b28) list_medium_line_x2_t3_g2_t1

0x5b6a,	// (0x00079b3e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5b6a,	// (0x00079b3e) list_medium_line_x2_t3_g2_t2

0x5b3f,	// (0x00079b13) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5b3f,	// (0x00079b13) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0008321f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0008321f) list_medium_line_x2_t3_g2_t

0x5b00,	// (0x00079ad4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x2_t4_g4_g1

0x7d0c,	// (0x0007bce0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x7d0c,	// (0x0007bce0) list_medium_line_x2_t4_g4_g2

0x7d00,	// (0x0007bcd4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x7d00,	// (0x0007bcd4) list_medium_line_x2_t4_g4_g3

0x5b7c,	// (0x00079b50) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5b7c,	// (0x00079b50) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00083226) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00083226) list_medium_line_x2_t4_g4_g

0x5b88,	// (0x00079b5c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5b88,	// (0x00079b5c) list_medium_line_x2_t4_g4_t1

0x5ba2,	// (0x00079b76) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5ba2,	// (0x00079b76) list_medium_line_x2_t4_g4_t2

0x5bb8,	// (0x00079b8c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5bb8,	// (0x00079b8c) list_medium_line_x2_t4_g4_t3

0x5bcd,	// (0x00079ba1) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5bcd,	// (0x00079ba1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0008322f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0008322f) list_medium_line_x2_t4_g4_t

0x5b00,	// (0x00079ad4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x2_t2_g4_g1

0x7d0c,	// (0x0007bce0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x7d0c,	// (0x0007bce0) list_medium_line_x2_t2_g4_g2

0x7d00,	// (0x0007bcd4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x7d00,	// (0x0007bcd4) list_medium_line_x2_t2_g4_g3

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00083296) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00083296) list_medium_line_x2_t2_g4_g

0x5bdf,	// (0x00079bb3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5bdf,	// (0x00079bb3) list_medium_line_x2_t2_g4_t1

0x5b3f,	// (0x00079b13) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5b3f,	// (0x00079b13) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0008329f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0008329f) list_medium_line_x2_t2_g4_t

0x5b00,	// (0x00079ad4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x2_t2_g3_g1

0x7d00,	// (0x0007bcd4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x7d00,	// (0x0007bcd4) list_medium_line_x2_t2_g3_g2

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008320c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008320c) list_medium_line_x2_t2_g3_g

0x5bf4,	// (0x00079bc8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5bf4,	// (0x00079bc8) list_medium_line_x2_t2_g3_t1

0x5b3f,	// (0x00079b13) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5b3f,	// (0x00079b13) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000832a4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000832a4) list_medium_line_x2_t2_g3_t

0x8fc7,	// (0x0007cf9b) main_sp_fs_list_pane_ParamLimits

0x8fc7,	// (0x0007cf9b) main_sp_fs_list_pane

0x8fd3,	// (0x0007cfa7) sp_fs_scroll_pane_ParamLimits

0x8fd3,	// (0x0007cfa7) sp_fs_scroll_pane

0x5c09,	// (0x00079bdd) list_medium_line_x2_t3_t1

0x5c19,	// (0x00079bed) list_medium_line_x2_t3_t2

0x5c27,	// (0x00079bfb) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000832ef) list_medium_line_x2_t3_t

0x5c35,	// (0x00079c09) list_medium_line_x3_t4_t1

0x5c45,	// (0x00079c19) list_medium_line_x3_t4_t2

0x5c53,	// (0x00079c27) list_medium_line_x3_t4_t3

0x5c27,	// (0x00079bfb) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000832f6) list_medium_line_x3_t4_t

0x5c61,	// (0x00079c35) list_medium_line_x4_t5_t1

0x5c71,	// (0x00079c45) list_medium_line_x4_t5_t2

0x5c53,	// (0x00079c27) list_medium_line_x4_t5_t3

0x5c7f,	// (0x00079c53) list_medium_line_x4_t5_t4

0x5c27,	// (0x00079bfb) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000832ff) list_medium_line_x4_t5_t

0x5b00,	// (0x00079ad4) list_medium_line_t4_g4_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_t4_g4_g1

0x5c8d,	// (0x00079c61) list_medium_line_t4_g4_g2_ParamLimits

0x5c8d,	// (0x00079c61) list_medium_line_t4_g4_g2

0x5c99,	// (0x00079c6d) list_medium_line_t4_g4_g3_ParamLimits

0x5c99,	// (0x00079c6d) list_medium_line_t4_g4_g3

0x5b0c,	// (0x00079ae0) list_medium_line_t4_g4_g4_ParamLimits

0x5b0c,	// (0x00079ae0) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008330a) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008330a) list_medium_line_t4_g4_g

0x5ca5,	// (0x00079c79) list_medium_line_t4_g4_t1_ParamLimits

0x5ca5,	// (0x00079c79) list_medium_line_t4_g4_t1

0x5cba,	// (0x00079c8e) list_medium_line_t4_g4_t2_ParamLimits

0x5cba,	// (0x00079c8e) list_medium_line_t4_g4_t2

0x5ccf,	// (0x00079ca3) list_medium_line_t4_g4_t3_ParamLimits

0x5ccf,	// (0x00079ca3) list_medium_line_t4_g4_t3

0x5b3f,	// (0x00079b13) list_medium_line_t4_g4_t4_ParamLimits

0x5b3f,	// (0x00079b13) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00083313) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00083313) list_medium_line_t4_g4_t

0x90e0,	// (0x0007d0b4) chi_dic_find_pane_g1

0x9f4f,	// (0x0007df23) main_tport_pane

0x5f3b,	// (0x00079f0f) list_medium_line_plain_t1

0x5f49,	// (0x00079f1d) list_medium_line_t2_g2_g1_ParamLimits

0x5f49,	// (0x00079f1d) list_medium_line_t2_g2_g1

0xca07,	// (0x000809db) list_medium_line_t2_g2_g2_ParamLimits

0xca07,	// (0x000809db) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000839d4) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000839d4) list_medium_line_t2_g2_g

0x5f55,	// (0x00079f29) list_medium_line_t2_g2_t1_ParamLimits

0x5f55,	// (0x00079f29) list_medium_line_t2_g2_t1

0x5f6f,	// (0x00079f43) list_medium_line_t2_g2_t2_ParamLimits

0x5f6f,	// (0x00079f43) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000839d9) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000839d9) list_medium_line_t2_g2_t

0x618f,	// (0x0007a163) aid_sp_fs_list_icon_a_sm

0xcf23,	// (0x00080ef7) aid_sp_fs_list_icon_d

0x0079,	// (0x0007404d) aid_sp_fs_text_primary

0x6197,	// (0x0007a16b) aid_sp_fs_text_secondary

0xcf2b,	// (0x00080eff) list_medium_line

0xcf2b,	// (0x00080eff) list_medium_line_g2

0xcf2b,	// (0x00080eff) list_medium_line_g3

0xcf2b,	// (0x00080eff) list_medium_line_plain

0xcf2b,	// (0x00080eff) list_medium_line_plain_t2

0xcf2b,	// (0x00080eff) list_medium_line_plain_t3

0xcf2b,	// (0x00080eff) list_medium_line_right_icon

0xcf2b,	// (0x00080eff) list_medium_line_right_iconx2

0xcf2b,	// (0x00080eff) list_medium_line_t2

0xcf2b,	// (0x00080eff) list_medium_line_t2_g2

0xcf2b,	// (0x00080eff) list_medium_line_t2_g3

0xcf2b,	// (0x00080eff) list_medium_line_t2_right_icon

0xcf2b,	// (0x00080eff) list_medium_line_t2_right_iconx2

0xcf2b,	// (0x00080eff) list_medium_line_t3

0xcf2b,	// (0x00080eff) list_medium_line_t3_g2

0xcf2b,	// (0x00080eff) list_medium_line_t3_g3

0xcf2b,	// (0x00080eff) list_medium_line_t3_right_iconx2

0xcf34,	// (0x00080f08) list_medium_line_t4_g4

0xed53,	// (0x00082d27) list_medium_line_x2

0xed53,	// (0x00082d27) list_medium_line_x2_t2_g2

0xed53,	// (0x00082d27) list_medium_line_x2_t2_g3

0xed53,	// (0x00082d27) list_medium_line_x2_t2_g4

0xed53,	// (0x00082d27) list_medium_line_x2_t3

0xed53,	// (0x00082d27) list_medium_line_x2_t3_g2

0xed53,	// (0x00082d27) list_medium_line_x2_t3_g3

0xed53,	// (0x00082d27) list_medium_line_x2_t3_g4

0xed53,	// (0x00082d27) list_medium_line_x2_t4_g2

0xed53,	// (0x00082d27) list_medium_line_x2_t4_g4

0xcf3d,	// (0x00080f11) list_medium_line_x3

0xcf3d,	// (0x00080f11) list_medium_line_x3_t4

0xcf3d,	// (0x00080f11) list_medium_line_x3_t4_g4

0xcf34,	// (0x00080f08) list_medium_line_x4_t4

0xcf34,	// (0x00080f08) list_medium_line_x4_t4_g7

0xcf34,	// (0x00080f08) list_medium_line_x4_t5

0x61a0,	// (0x0007a174) list_single_fs_dyc_pane_ParamLimits

0x61a0,	// (0x0007a174) list_single_fs_dyc_pane

0x5b00,	// (0x00079ad4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x4_t4_g7_g1

0x61b4,	// (0x0007a188) list_medium_line_x4_t4_g7_g2_ParamLimits

0x61b4,	// (0x0007a188) list_medium_line_x4_t4_g7_g2

0xd66e,	// (0x00081642) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd66e,	// (0x00081642) list_medium_line_x4_t4_g7_g3

0xd67d,	// (0x00081651) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd67d,	// (0x00081651) list_medium_line_x4_t4_g7_g4

0x61c0,	// (0x0007a194) list_medium_line_x4_t4_g7_g5_ParamLimits

0x61c0,	// (0x0007a194) list_medium_line_x4_t4_g7_g5

0x61cf,	// (0x0007a1a3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x61cf,	// (0x0007a1a3) list_medium_line_x4_t4_g7_g6

0x61de,	// (0x0007a1b2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x61de,	// (0x0007a1b2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00083ba4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00083ba4) list_medium_line_x4_t4_g7_g

0x61ea,	// (0x0007a1be) list_medium_line_x4_t4_g7_t1_ParamLimits

0x61ea,	// (0x0007a1be) list_medium_line_x4_t4_g7_t1

0x61ff,	// (0x0007a1d3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x61ff,	// (0x0007a1d3) list_medium_line_x4_t4_g7_t2

0x6214,	// (0x0007a1e8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6214,	// (0x0007a1e8) list_medium_line_x4_t4_g7_t3

0x6229,	// (0x0007a1fd) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6229,	// (0x0007a1fd) list_medium_line_x4_t4_g7_t4

0x623b,	// (0x0007a20f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x623b,	// (0x0007a20f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00083bb3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00083bb3) list_medium_line_x4_t4_g7_t

0x624d,	// (0x0007a221) list_single_dyc_row_pane_ParamLimits

0x624d,	// (0x0007a221) list_single_dyc_row_pane

0xdcac,	// (0x00081c80) call5_gesture_pane_ParamLimits

0xdcac,	// (0x00081c80) call5_gesture_pane

0xdce0,	// (0x00081cb4) call5_windows_pane_ParamLimits

0xdce0,	// (0x00081cb4) call5_windows_pane

0xdd33,	// (0x00081d07) call5_swipe_1_pane_cp_ParamLimits

0xdd33,	// (0x00081d07) call5_swipe_1_pane_cp

0xdd3f,	// (0x00081d13) call5_swipe_2_pane_cp_ParamLimits

0xdd3f,	// (0x00081d13) call5_swipe_2_pane_cp

0x1ae6,	// (0x00075aba) call5_image_pane_cp

0xdd4b,	// (0x00081d1f) popup_call5_audio_first_window_cp_ParamLimits

0xdd4b,	// (0x00081d1f) popup_call5_audio_first_window_cp

0x07bb,	// (0x0007478f) call5_swipe_1_pane_g1_cp_ParamLimits

0x07bb,	// (0x0007478f) call5_swipe_1_pane_g1_cp

0x0828,	// (0x000747fc) call5_swipe_1_pane_g2_cp

0x07d4,	// (0x000747a8) call5_swipe_1_pane_t1_cp_ParamLimits

0x07d4,	// (0x000747a8) call5_swipe_1_pane_t1_cp

0x07bb,	// (0x0007478f) call5_swipe_2_pane_g1_cp_ParamLimits

0x07bb,	// (0x0007478f) call5_swipe_2_pane_g1_cp

0x0830,	// (0x00074804) call5_swipe_2_pane_g2_cp

0x0838,	// (0x0007480c) call5_swipe_2_pane_t1_cp_ParamLimits

0x0838,	// (0x0007480c) call5_swipe_2_pane_t1_cp

0x145d,	// (0x00075431) main_sp_fs_email_pane

0x084d,	// (0x00074821) main_sp_fs_listscroll_pane_te

0xdd59,	// (0x00081d2d) popup_sp_fs_action_menu_pane_ParamLimits

0xdd59,	// (0x00081d2d) popup_sp_fs_action_menu_pane

0x3d5e,	// (0x00077d32) bg_sp_fs_ctrlbar_pane_g1

0x0856,	// (0x0007482a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x085f,	// (0x00074833) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0868,	// (0x0007483c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x3d5e,	// (0x00077d32) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00083ca1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3b43,	// (0x00077b17) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3b43,	// (0x00077b17) bg_sp_fs_ctrlbar_ddmenu_pane

0x0871,	// (0x00074845) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0871,	// (0x00074845) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x087d,	// (0x00074851) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x087d,	// (0x00074851) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00083caa) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00083caa) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0889,	// (0x0007485d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0889,	// (0x0007485d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xdd9d,	// (0x00081d71) list_medium_line_t2_right_icon_g1

0x6300,	// (0x0007a2d4) list_medium_line_t2_right_icon_t1

0x6310,	// (0x0007a2e4) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00083caf) list_medium_line_t2_right_icon_t

0x3956,	// (0x0007792a) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3956,	// (0x0007792a) bg_sp_fs_ctrlbar_pane

0xddfc,	// (0x00081dd0) main_sp_fs_ctrlbar_button_pane_cp01

0xde04,	// (0x00081dd8) main_sp_fs_ctrlbar_ddmenu_pane

0x0d88,	// (0x00074d5c) main_sp_fs_ctrlbar_pane_g1

0x0d94,	// (0x00074d68) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00083cb4) main_sp_fs_ctrlbar_pane_g

0x0da0,	// (0x00074d74) main_sp_fs_ctrlbar_pane_t1

0xde0e,	// (0x00081de2) main_sp_fs_ctrlbar_pane

0xde24,	// (0x00081df8) main_sp_fs_listscroll_pane_te_cp01

0x631e,	// (0x0007a2f2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x631e,	// (0x0007a2f2) popup_sp_fs_action_menu_pane_cp01

0x145d,	// (0x00075431) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x145d,	// (0x00075431) bg_sp_fs_highlight_list_pane_cp01

0x6348,	// (0x0007a31c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6348,	// (0x0007a31c) sp_fs_action_menu_list_gene_pane_g1

0x0dd0,	// (0x00074da4) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0dd0,	// (0x00074da4) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00083cbe) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00083cbe) sp_fs_action_menu_list_gene_pane_g

0x6357,	// (0x0007a32b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6357,	// (0x0007a32b) sp_fs_action_menu_list_gene_pane_t1

0x636f,	// (0x0007a343) sp_fs_action_menu_list_gene_pane_ParamLimits

0x636f,	// (0x0007a343) sp_fs_action_menu_list_gene_pane

0x0ddd,	// (0x00074db1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0ddd,	// (0x00074db1) popup_sp_fs_action_menu_bg_pane

0x6390,	// (0x0007a364) sp_fs_action_menu_list_pane_ParamLimits

0x6390,	// (0x0007a364) sp_fs_action_menu_list_pane

0xde35,	// (0x00081e09) sp_fs_scroll_pane_cp01_ParamLimits

0xde35,	// (0x00081e09) sp_fs_scroll_pane_cp01

0x63b2,	// (0x0007a386) list_medium_line_plain_t2_t1

0x63c2,	// (0x0007a396) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00083cc3) list_medium_line_plain_t2_t

0x63d0,	// (0x0007a3a4) list_medium_line_plain_t3_t1

0x63e0,	// (0x0007a3b4) list_medium_line_plain_t3_t2

0x63ee,	// (0x0007a3c2) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00083cc8) list_medium_line_plain_t3_t

0x5b00,	// (0x00079ad4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x2_t2_g2_g1

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008321a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008321a) list_medium_line_x2_t2_g2_g

0x5ca5,	// (0x00079c79) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5ca5,	// (0x00079c79) list_medium_line_x2_t2_g2_t1

0x5b3f,	// (0x00079b13) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5b3f,	// (0x00079b13) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00083ccf) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00083ccf) list_medium_line_x2_t2_g2_t

0x5b00,	// (0x00079ad4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x2_t4_g2_g1

0x63fc,	// (0x0007a3d0) list_medium_line_x2_t4_g2_g2_ParamLimits

0x63fc,	// (0x0007a3d0) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00083cd4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00083cd4) list_medium_line_x2_t4_g2_g

0x640e,	// (0x0007a3e2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x640e,	// (0x0007a3e2) list_medium_line_x2_t4_g2_t1

0x6428,	// (0x0007a3fc) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6428,	// (0x0007a3fc) list_medium_line_x2_t4_g2_t2

0x643e,	// (0x0007a412) list_medium_line_x2_t4_g2_t3_ParamLimits

0x643e,	// (0x0007a412) list_medium_line_x2_t4_g2_t3

0x5b3f,	// (0x00079b13) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5b3f,	// (0x00079b13) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00083cd9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00083cd9) list_medium_line_x2_t4_g2_t

0xde5b,	// (0x00081e2f) list_medium_line_t3_right_iconx2_g1

0xdd9d,	// (0x00081d71) list_medium_line_t3_right_iconx2_g2

0x6453,	// (0x0007a427) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00083ce2) list_medium_line_t3_right_iconx2_g

0x645b,	// (0x0007a42f) list_medium_line_t3_right_iconx2_t1

0x646b,	// (0x0007a43f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00083ce9) list_medium_line_t3_right_iconx2_t

0x5b00,	// (0x00079ad4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x3_t4_g4_g1

0x7d00,	// (0x0007bcd4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x7d00,	// (0x0007bcd4) list_medium_line_x3_t4_g4_g2

0x5c8d,	// (0x00079c61) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5c8d,	// (0x00079c61) list_medium_line_x3_t4_g4_g3

0xde63,	// (0x00081e37) list_medium_line_x3_t4_g4_g4_ParamLimits

0xde63,	// (0x00081e37) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00083cee) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00083cee) list_medium_line_x3_t4_g4_g

0x6479,	// (0x0007a44d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6479,	// (0x0007a44d) list_medium_line_x3_t4_g4_t1

0x6490,	// (0x0007a464) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6490,	// (0x0007a464) list_medium_line_x3_t4_g4_t2

0x5cba,	// (0x00079c8e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5cba,	// (0x00079c8e) list_medium_line_x3_t4_g4_t3

0x64a5,	// (0x0007a479) list_medium_line_x3_t4_g4_t4_ParamLimits

0x64a5,	// (0x0007a479) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00083cf7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00083cf7) list_medium_line_x3_t4_g4_t

0x64c2,	// (0x0007a496) list_single_dyc_row_text_pane_t1_ParamLimits

0x64c2,	// (0x0007a496) list_single_dyc_row_text_pane_t1

0x64f9,	// (0x0007a4cd) list_single_dyc_row_text_pane_t2_ParamLimits

0x64f9,	// (0x0007a4cd) list_single_dyc_row_text_pane_t2

0x656f,	// (0x0007a543) list_single_dyc_row_text_pane_t3_ParamLimits

0x656f,	// (0x0007a543) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00083d00) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00083d00) list_single_dyc_row_text_pane_t

0x6640,	// (0x0007a614) list_single_dyc_row_pane_g1_ParamLimits

0x6640,	// (0x0007a614) list_single_dyc_row_pane_g1

0x664c,	// (0x0007a620) list_single_dyc_row_pane_g2_ParamLimits

0x664c,	// (0x0007a620) list_single_dyc_row_pane_g2

0x6658,	// (0x0007a62c) list_single_dyc_row_pane_g3_ParamLimits

0x6658,	// (0x0007a62c) list_single_dyc_row_pane_g3

0x6664,	// (0x0007a638) list_single_dyc_row_pane_g4_ParamLimits

0x6664,	// (0x0007a638) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00083d0d) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00083d0d) list_single_dyc_row_pane_g

0x6670,	// (0x0007a644) list_single_dyc_row_text_pane_ParamLimits

0x6670,	// (0x0007a644) list_single_dyc_row_text_pane

0x08db,	// (0x000748af) bg_sp_fs_scroll_pane

0x0deb,	// (0x00074dbf) thumb_sp_fs_scroll_pane

0x5f49,	// (0x00079f1d) list_medium_line_g1_ParamLimits

0x5f49,	// (0x00079f1d) list_medium_line_g1

0x668f,	// (0x0007a663) list_medium_line_t1_ParamLimits

0x668f,	// (0x0007a663) list_medium_line_t1

0x5b00,	// (0x00079ad4) list_medium_line_x2_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x2_g1

0x7d00,	// (0x0007bcd4) list_medium_line_x2_g2_ParamLimits

0x7d00,	// (0x0007bcd4) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00083d16) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00083d16) list_medium_line_x2_g

0x66a4,	// (0x0007a678) list_medium_line_x2_t1_ParamLimits

0x66a4,	// (0x0007a678) list_medium_line_x2_t1

0x5b00,	// (0x00079ad4) list_medium_line_x3_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x3_g1

0x7d00,	// (0x0007bcd4) list_medium_line_x3_g2_ParamLimits

0x7d00,	// (0x0007bcd4) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00083d16) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00083d16) list_medium_line_x3_g

0x66a4,	// (0x0007a678) list_medium_line_x3_t1_ParamLimits

0x66a4,	// (0x0007a678) list_medium_line_x3_t1

0x0df4,	// (0x00074dc8) thumb_sp_fs_scroll_pane_g1

0x0dfd,	// (0x00074dd1) thumb_sp_fs_scroll_pane_g2

0x0e06,	// (0x00074dda) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00083d1b) thumb_sp_fs_scroll_pane_g

0x0df4,	// (0x00074dc8) bg_sp_fs_scroll_pane_g1

0x0dfd,	// (0x00074dd1) bg_sp_fs_scroll_pane_g2

0x0e06,	// (0x00074dda) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00083d1b) bg_sp_fs_scroll_pane_g

0x5b00,	// (0x00079ad4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5b00,	// (0x00079ad4) list_medium_line_x2_t3_g4_g1

0x7d0c,	// (0x0007bce0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x7d0c,	// (0x0007bce0) list_medium_line_x2_t3_g4_g2

0x7d00,	// (0x0007bcd4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x7d00,	// (0x0007bcd4) list_medium_line_x2_t3_g4_g3

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5b0c,	// (0x00079ae0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00083296) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00083296) list_medium_line_x2_t3_g4_g

0x66ba,	// (0x0007a68e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x66ba,	// (0x0007a68e) list_medium_line_x2_t3_g4_t1

0x66d0,	// (0x0007a6a4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x66d0,	// (0x0007a6a4) list_medium_line_x2_t3_g4_t2

0x5b3f,	// (0x00079b13) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5b3f,	// (0x00079b13) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00083d22) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00083d22) list_medium_line_x2_t3_g4_t

0x5f49,	// (0x00079f1d) list_medium_line_g2_g1_ParamLimits

0x5f49,	// (0x00079f1d) list_medium_line_g2_g1

0xca07,	// (0x000809db) list_medium_line_g2_g2_ParamLimits

0xca07,	// (0x000809db) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000839d4) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000839d4) list_medium_line_g2_g

0x66ea,	// (0x0007a6be) list_medium_line_g2_t1_ParamLimits

0x66ea,	// (0x0007a6be) list_medium_line_g2_t1

0x5f49,	// (0x00079f1d) list_medium_line_t3_g2_g1_ParamLimits

0x5f49,	// (0x00079f1d) list_medium_line_t3_g2_g1

0xca07,	// (0x000809db) list_medium_line_t3_g2_g2_ParamLimits

0xca07,	// (0x000809db) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000839d4) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000839d4) list_medium_line_t3_g2_g

0x66ff,	// (0x0007a6d3) list_medium_line_t3_g2_t1_ParamLimits

0x66ff,	// (0x0007a6d3) list_medium_line_t3_g2_t1

0x6719,	// (0x0007a6ed) list_medium_line_t3_g2_t2_ParamLimits

0x6719,	// (0x0007a6ed) list_medium_line_t3_g2_t2

0x672f,	// (0x0007a703) list_medium_line_t3_g2_t3_ParamLimits

0x672f,	// (0x0007a703) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00083d29) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00083d29) list_medium_line_t3_g2_t

0xdd9d,	// (0x00081d71) list_medium_line_right_icon_g1

0x6745,	// (0x0007a719) list_medium_line_right_icon_t1

0x5f49,	// (0x00079f1d) list_medium_line_t2_g1_ParamLimits

0x5f49,	// (0x00079f1d) list_medium_line_t2_g1

0x6753,	// (0x0007a727) list_medium_line_t2_t1_ParamLimits

0x6753,	// (0x0007a727) list_medium_line_t2_t1

0x676d,	// (0x0007a741) list_medium_line_t2_t2_ParamLimits

0x676d,	// (0x0007a741) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00083d30) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00083d30) list_medium_line_t2_t

0x5f49,	// (0x00079f1d) list_medium_line_t3_g1_ParamLimits

0x5f49,	// (0x00079f1d) list_medium_line_t3_g1

0x6782,	// (0x0007a756) list_medium_line_t3_t1_ParamLimits

0x6782,	// (0x0007a756) list_medium_line_t3_t1

0x679c,	// (0x0007a770) list_medium_line_t3_t2_ParamLimits

0x679c,	// (0x0007a770) list_medium_line_t3_t2

0x67b2,	// (0x0007a786) list_medium_line_t3_t3_ParamLimits

0x67b2,	// (0x0007a786) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00083d35) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00083d35) list_medium_line_t3_t

0x5f49,	// (0x00079f1d) list_medium_line_g3_g1_ParamLimits

0x5f49,	// (0x00079f1d) list_medium_line_g3_g1

0xde6f,	// (0x00081e43) list_medium_line_g3_g2_ParamLimits

0xde6f,	// (0x00081e43) list_medium_line_g3_g2

0xca07,	// (0x000809db) list_medium_line_g3_g3_ParamLimits

0xca07,	// (0x000809db) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00083d3c) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00083d3c) list_medium_line_g3_g

0x67c7,	// (0x0007a79b) list_medium_line_g3_t1_ParamLimits

0x67c7,	// (0x0007a79b) list_medium_line_g3_t1

0x5f49,	// (0x00079f1d) list_medium_line_t2_g3_g1_ParamLimits

0x5f49,	// (0x00079f1d) list_medium_line_t2_g3_g1

0xde6f,	// (0x00081e43) list_medium_line_t2_g3_g2_ParamLimits

0xde6f,	// (0x00081e43) list_medium_line_t2_g3_g2

0xca07,	// (0x000809db) list_medium_line_t2_g3_g3_ParamLimits

0xca07,	// (0x000809db) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00083d3c) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00083d3c) list_medium_line_t2_g3_g

0x67dc,	// (0x0007a7b0) list_medium_line_t2_g3_t1_ParamLimits

0x67dc,	// (0x0007a7b0) list_medium_line_t2_g3_t1

0x67f6,	// (0x0007a7ca) list_medium_line_t2_g3_t2_ParamLimits

0x67f6,	// (0x0007a7ca) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00083d43) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00083d43) list_medium_line_t2_g3_t

0x5f49,	// (0x00079f1d) list_medium_line_t3_g3_g1_ParamLimits

0x5f49,	// (0x00079f1d) list_medium_line_t3_g3_g1

0xde6f,	// (0x00081e43) list_medium_line_t3_g3_g2_ParamLimits

0xde6f,	// (0x00081e43) list_medium_line_t3_g3_g2

0xca07,	// (0x000809db) list_medium_line_t3_g3_g3_ParamLimits

0xca07,	// (0x000809db) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00083d3c) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00083d3c) list_medium_line_t3_g3_g

0x680c,	// (0x0007a7e0) list_medium_line_t3_g3_t1_ParamLimits

0x680c,	// (0x0007a7e0) list_medium_line_t3_g3_t1

0x6825,	// (0x0007a7f9) list_medium_line_t3_g3_t2_ParamLimits

0x6825,	// (0x0007a7f9) list_medium_line_t3_g3_t2

0x683b,	// (0x0007a80f) list_medium_line_t3_g3_t3_ParamLimits

0x683b,	// (0x0007a80f) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00083d48) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00083d48) list_medium_line_t3_g3_t

0xde5b,	// (0x00081e2f) list_medium_line_right_iconx2_g1

0xdd9d,	// (0x00081d71) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00083d4f) list_medium_line_right_iconx2_g

0xde7b,	// (0x00081e4f) list_medium_line_right_iconx2_t1

0xde5b,	// (0x00081e2f) list_medium_line_t2_right_iconx2_g1

0xdd9d,	// (0x00081d71) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00083d4f) list_medium_line_t2_right_iconx2_g

0x6851,	// (0x0007a825) list_medium_line_t2_right_iconx2_t1

0x6861,	// (0x0007a835) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00083d54) list_medium_line_t2_right_iconx2_t

0x686f,	// (0x0007a843) list_medium_line_x4_t4_t1

0x687d,	// (0x0007a851) list_medium_line_x4_t4_t2

0x688d,	// (0x0007a861) list_medium_line_x4_t4_t3

0x689d,	// (0x0007a871) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00083d59) list_medium_line_x4_t4_t

0xdeb3,	// (0x00081e87) tport_appsw_pane_ParamLimits

0xdeb3,	// (0x00081e87) tport_appsw_pane

0xdec1,	// (0x00081e95) tport_contact_pane_ParamLimits

0xdec1,	// (0x00081e95) tport_contact_pane

0xded1,	// (0x00081ea5) tport_listscroll_pane_ParamLimits

0xded1,	// (0x00081ea5) tport_listscroll_pane

0xdee1,	// (0x00081eb5) cell_tport_appsw_pane_ParamLimits

0xdee1,	// (0x00081eb5) cell_tport_appsw_pane

0x404f,	// (0x00078023) tport_appsw_pane_g1_ParamLimits

0x404f,	// (0x00078023) tport_appsw_pane_g1

0x0e0f,	// (0x00074de3) tport_contact_pane_g1

0x030d,	// (0x000742e1) tport_contact_pane_t1

0x0e18,	// (0x00074dec) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00083d62) tport_contact_pane_t

0x0e26,	// (0x00074dfa) list_tport_pane

0x0e2f,	// (0x00074e03) scroll_pane_cp_030

0xdf14,	// (0x00081ee8) cell_tport_appsw_pane_g1

0xdf24,	// (0x00081ef8) cell_tport_appsw_pane_t1

0xdf32,	// (0x00081f06) grid_highlight_pane_cp019

0xdf3a,	// (0x00081f0e) list_tport_double_graphic_pane_ParamLimits

0xdf3a,	// (0x00081f0e) list_tport_double_graphic_pane

0x145d,	// (0x00075431) list_highlight_pane_cp023_ParamLimits

0x145d,	// (0x00075431) list_highlight_pane_cp023

0xdf4b,	// (0x00081f1f) list_tport_double_graphic_pane_g1_ParamLimits

0xdf4b,	// (0x00081f1f) list_tport_double_graphic_pane_g1

0xdf58,	// (0x00081f2c) list_tport_double_graphic_pane_t1_ParamLimits

0xdf58,	// (0x00081f2c) list_tport_double_graphic_pane_t1

0xdf6d,	// (0x00081f41) list_tport_double_graphic_pane_t2_ParamLimits

0xdf6d,	// (0x00081f41) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00083d6e) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00083d6e) list_tport_double_graphic_pane_t

0x08db,	// (0x000748af) main_cale_note_pane

0xc226,	// (0x000801fa) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc226,	// (0x000801fa) cell_vitu2_function_top_wide_pane_cp01

0xda12,	// (0x000819e6) wait_bar_pane_cp05_ParamLimits

0x145d,	// (0x00075431) listscroll_cmail_pane

0x0e38,	// (0x00074e0c) list_cmail_pane

0xdf7f,	// (0x00081f53) list_cmail_body_pane

0xdfa6,	// (0x00081f7a) list_single_cmail_header_caption_pane

0xdfd1,	// (0x00081fa5) list_single_cmail_header_detail_pane_ParamLimits

0xdfd1,	// (0x00081fa5) list_single_cmail_header_detail_pane

0x0e48,	// (0x00074e1c) list_single_cmail_header_caption_pane_t1

0x68ad,	// (0x0007a881) list_single_cmail_header_detail_pane_g1_ParamLimits

0x68ad,	// (0x0007a881) list_single_cmail_header_detail_pane_g1

0xe007,	// (0x00081fdb) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe007,	// (0x00081fdb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00083d73) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00083d73) list_single_cmail_header_detail_pane_g

0x68c3,	// (0x0007a897) list_single_cmail_header_detail_pane_t1_ParamLimits

0x68c3,	// (0x0007a897) list_single_cmail_header_detail_pane_t1

0x6923,	// (0x0007a8f7) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6923,	// (0x0007a8f7) list_single_cmail_header_editor_pane_bg

0x046a,	// (0x0007443e) list_cmail_body_pane_g1

0x0e6c,	// (0x00074e40) list_cmail_body_pane_t1

0x47b7,	// (0x0007878b) list_single_cmail_header_editor_pane_bg_g1

0x1d3f,	// (0x00075d13) list_single_cmail_header_editor_pane_bg_g1_copy1

0x47c7,	// (0x0007879b) list_single_cmail_header_editor_pane_bg_g1_copy2

0x47bf,	// (0x00078793) list_single_cmail_header_editor_pane_bg_g1_copy3

0x49db,	// (0x000789af) list_single_cmail_header_editor_pane_bg_g1_copy4

0x47e7,	// (0x000787bb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x47d7,	// (0x000787ab) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x47df,	// (0x000787b3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1d1f,	// (0x00075cf3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe013,	// (0x00081fe7) calenote_gesture_pane_ParamLimits

0xe013,	// (0x00081fe7) calenote_gesture_pane

0xe02d,	// (0x00082001) calenote_window_pane_ParamLimits

0xe02d,	// (0x00082001) calenote_window_pane

0x0e7a,	// (0x00074e4e) popup_note_window_cp01

0xe045,	// (0x00082019) calenote_swipe_1_pane_ParamLimits

0xe045,	// (0x00082019) calenote_swipe_1_pane

0xdd3f,	// (0x00081d13) calenote_swipe_2_pane_ParamLimits

0xdd3f,	// (0x00081d13) calenote_swipe_2_pane

0x07bb,	// (0x0007478f) calenote_swipe_1_pane_g1_ParamLimits

0x07bb,	// (0x0007478f) calenote_swipe_1_pane_g1

0x07c8,	// (0x0007479c) calenote_swipe_1_pane_g2_ParamLimits

0x07c8,	// (0x0007479c) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00083c97) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00083c97) calenote_swipe_1_pane_g

0x0e8c,	// (0x00074e60) calenote_swipe_1_pane_t1_ParamLimits

0x0e8c,	// (0x00074e60) calenote_swipe_1_pane_t1

0x07bb,	// (0x0007478f) calenote_swipe_2_pane_g1_ParamLimits

0x07bb,	// (0x0007478f) calenote_swipe_2_pane_g1

0x0eab,	// (0x00074e7f) calenote_swipe_2_pane_g2_ParamLimits

0x0eab,	// (0x00074e7f) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00083d7f) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00083d7f) calenote_swipe_2_pane_g

0x0eb7,	// (0x00074e8b) calenote_swipe_2_pane_t1_ParamLimits

0x0eb7,	// (0x00074e8b) calenote_swipe_2_pane_t1

0x08db,	// (0x000748af) main_mup_navstr_pane

0xaf6e,	// (0x0007ef42) main_mup3_pane_t7_ParamLimits

0xaf6e,	// (0x0007ef42) main_mup3_pane_t7

0xb974,	// (0x0007f948) main_mp4_pane_g6_ParamLimits

0xb974,	// (0x0007f948) main_mp4_pane_g6

0xbce6,	// (0x0007fcba) main_image3_pane_t4_ParamLimits

0xbce6,	// (0x0007fcba) main_image3_pane_t4

0xe058,	// (0x0008202c) popup_navstr_preview_pane_ParamLimits

0xe058,	// (0x0008202c) popup_navstr_preview_pane

0xe064,	// (0x00082038) scroll_navstr_pane_ParamLimits

0xe064,	// (0x00082038) scroll_navstr_pane

0x08db,	// (0x000748af) bg_popup_preview_window_pane_cp04

0x0ede,	// (0x00074eb2) popup_navstr_preview_pane_t1

0xe070,	// (0x00082044) scroll_navstr_pane_g1_ParamLimits

0xe070,	// (0x00082044) scroll_navstr_pane_g1

0xe07d,	// (0x00082051) scroll_navstr_pane_t1_ParamLimits

0xe07d,	// (0x00082051) scroll_navstr_pane_t1

0x0e83,	// (0x00074e57) bg_button_pane_cp014

0x0e83,	// (0x00074e57) bg_button_pane_cp030

0x62a6,	// (0x0007a27a) list_double_fisheye_pane_g4_ParamLimits

0x62a6,	// (0x0007a27a) list_double_fisheye_pane_g4

0x62b2,	// (0x0007a286) list_double_fisheye_pane_g5_ParamLimits

0x62b2,	// (0x0007a286) list_double_fisheye_pane_g5

0x32bf,	// (0x00077293) sp_fs_scroll_pane_cp03

0x0d88,	// (0x00074d5c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0d94,	// (0x00074d68) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00083cb4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x0da0,	// (0x00074d74) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0e40,	// (0x00074e14) sp_fs_scroll_pane_cp02

0x1a25,	// (0x000759f9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1a25,	// (0x000759f9) popup_sp_fs_calendar_preview_list_single_pane

0x08db,	// (0x000748af) main_cam6_pano_pane

0x145d,	// (0x00075431) main_mup3_pane_ParamLimits

0x08db,	// (0x000748af) main_phacti_pane

0xd8e7,	// (0x000818bb) bg_button_pane_cp11

0xd8ff,	// (0x000818d3) main_mobtv_info_pane_g2_ParamLimits

0xd8ff,	// (0x000818d3) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00083c14) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00083c14) main_mobtv_info_pane_g

0xdab1,	// (0x00081a85) sc_clock_pane_t5_ParamLimits

0xdab1,	// (0x00081a85) sc_clock_pane_t5

0xdb52,	// (0x00081b26) main_radioblah_pane_g1_ParamLimits

0x0707,	// (0x000746db) main_radioblah_pane_t3_ParamLimits

0x0707,	// (0x000746db) main_radioblah_pane_t3

0x071f,	// (0x000746f3) main_radioblah_pane_t4_ParamLimits

0x071f,	// (0x000746f3) main_radioblah_pane_t4

0xdb70,	// (0x00081b44) main_radioblah_text_pane_ParamLimits

0xdb70,	// (0x00081b44) main_radioblah_text_pane

0xdb7d,	// (0x00081b51) main_radioblah_info_pane_g1_ParamLimits

0xdc12,	// (0x00081be6) main_radioblah_info_pane_t4_ParamLimits

0xdc12,	// (0x00081be6) main_radioblah_info_pane_t4

0x145d,	// (0x00075431) main_sp_fs_calendar_pane

0xe08f,	// (0x00082063) main_phacti_pane_g1

0xe097,	// (0x0008206b) phacti_note_pane_ParamLimits

0xe097,	// (0x0008206b) phacti_note_pane

0x0ef5,	// (0x00074ec9) phacti_term_pane_ParamLimits

0x0ef5,	// (0x00074ec9) phacti_term_pane

0x0f0a,	// (0x00074ede) phacti_note_pane_t1_ParamLimits

0x0f0a,	// (0x00074ede) phacti_note_pane_t1

0x693a,	// (0x0007a90e) phacti_term_pane_g1

0x6942,	// (0x0007a916) phacti_term_pane_t1_ParamLimits

0x6942,	// (0x0007a916) phacti_term_pane_t1

0x0f21,	// (0x00074ef5) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1ac4,	// (0x00075a98) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00083d89) popup_sp_fs_calendar_preview_list_single_pane_g

0x0f29,	// (0x00074efd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0f29,	// (0x00074efd) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0f3f,	// (0x00074f13) aid_popup_sp_fs_bg_corner_pane

0x3d5e,	// (0x00077d32) popup_sp_fs_calendar_preview_bg_pane_g1

0x08db,	// (0x000748af) popup_sp_fs_calendar_preview_bg_pane

0x0f47,	// (0x00074f1b) popup_sp_fs_calendar_preview_list_pane

0x3956,	// (0x0007792a) bg_main_sp_fs_cale_pane_ParamLimits

0x3956,	// (0x0007792a) bg_main_sp_fs_cale_pane

0x696c,	// (0x0007a940) listscroll_cale_mrui_pane_ParamLimits

0x696c,	// (0x0007a940) listscroll_cale_mrui_pane

0x6981,	// (0x0007a955) listscroll_sp_fs_schedule_track_pane

0x698a,	// (0x0007a95e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x698a,	// (0x0007a95e) main_sp_fs_ctrlbar_pane_cp01

0x0f4f,	// (0x00074f23) main_sp_fs_ribbon_pane

0x699d,	// (0x0007a971) popup_sp_fs_cale_preview_window

0xe103,	// (0x000820d7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe103,	// (0x000820d7) list_single_sp_fs_schedule_track_pane

0x4c37,	// (0x00078c0b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4c37,	// (0x00078c0b) bg_sp_fs_highlight_list_pane_cp03

0xe125,	// (0x000820f9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe125,	// (0x000820f9) list_single_sp_fs_schedule_track_pane_g1

0xe131,	// (0x00082105) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe131,	// (0x00082105) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00083d8e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00083d8e) list_single_sp_fs_schedule_track_pane_g

0xe13d,	// (0x00082111) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe13d,	// (0x00082111) list_single_sp_fs_schedule_track_pane_t1

0xe155,	// (0x00082129) sp_fs_schedule_track_pane_ParamLimits

0xe155,	// (0x00082129) sp_fs_schedule_track_pane

0x0f57,	// (0x00074f2b) sp_fs_schedule_track_pane_g1

0x0f5f,	// (0x00074f33) sp_fs_schedule_track_pane_g2

0x0f67,	// (0x00074f3b) sp_fs_schedule_track_pane_g3

0x0f6f,	// (0x00074f43) sp_fs_schedule_track_pane_g4

0x0f77,	// (0x00074f4b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00083d93) sp_fs_schedule_track_pane_g

0x47b7,	// (0x0007878b) bg_sp_fs_schedule_viewer_highlight_g1

0x1d3f,	// (0x00075d13) bg_sp_fs_schedule_viewer_highlight_g2

0x47bf,	// (0x00078793) bg_sp_fs_schedule_viewer_highlight_g3

0x47c7,	// (0x0007879b) bg_sp_fs_schedule_viewer_highlight_g4

0x49db,	// (0x000789af) bg_sp_fs_schedule_viewer_highlight_g5

0x47d7,	// (0x000787ab) bg_sp_fs_schedule_viewer_highlight_g6

0x47df,	// (0x000787b3) bg_sp_fs_schedule_viewer_highlight_g7

0x47e7,	// (0x000787bb) bg_sp_fs_schedule_viewer_highlight_g8

0x1d1f,	// (0x00075cf3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00083d9e) bg_sp_fs_schedule_viewer_highlight_g

0x08db,	// (0x000748af) bg_main_sp_fs_ribbon_pane

0xe165,	// (0x00082139) main_sp_fs_ribbon_pane_g1

0x0f7f,	// (0x00074f53) main_sp_fs_ribbon_pane_t1

0xe16e,	// (0x00082142) main_sp_fs_ribbon_pane_t2

0x0f8e,	// (0x00074f62) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00083db1) main_sp_fs_ribbon_pane_t

0x0f9d,	// (0x00074f71) main_sp_fs_ribbon_scheduler_pane

0x0fa5,	// (0x00074f79) bg_main_sp_fs_ribbon_pane_g1

0x0fae,	// (0x00074f82) bg_main_sp_fs_ribbon_pane_g2

0x0fb7,	// (0x00074f8b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00083db8) bg_main_sp_fs_ribbon_pane_g

0x0fbf,	// (0x00074f93) main_sp_fs_ribbon_scheduler_pane_g1

0x0fc8,	// (0x00074f9c) main_sp_fs_ribbon_scheduler_pane_g2

0x0fd1,	// (0x00074fa5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00083dbf) main_sp_fs_ribbon_scheduler_pane_g

0x0fda,	// (0x00074fae) list_cale_mrui_pane

0xe17d,	// (0x00082151) sp_fs_scroll_pane_cp07_ParamLimits

0xe17d,	// (0x00082151) sp_fs_scroll_pane_cp07

0xe199,	// (0x0008216d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe199,	// (0x0008216d) bg_sp_fs_schedule_viewer_highlight

0x0fe7,	// (0x00074fbb) list_single_sp_fs_schedule_track_pane_cp01

0x0fef,	// (0x00074fc3) list_sp_fs_schedule_track_pane

0x0ff7,	// (0x00074fcb) sp_fs_scroll_pane_cp06_ParamLimits

0x0ff7,	// (0x00074fcb) sp_fs_scroll_pane_cp06

0x3d5e,	// (0x00077d32) bgmain_sp_fs_calendar_pane_g1

0x69af,	// (0x0007a983) list_single_cale_mrui_pane_ParamLimits

0x69af,	// (0x0007a983) list_single_cale_mrui_pane

0x69dc,	// (0x0007a9b0) list_single_cale_mrui_row_pane_ParamLimits

0x69dc,	// (0x0007a9b0) list_single_cale_mrui_row_pane

0x69e9,	// (0x0007a9bd) list_single_cale_mrui_row_pane_g1_ParamLimits

0x69e9,	// (0x0007a9bd) list_single_cale_mrui_row_pane_g1

0x6a21,	// (0x0007a9f5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6a21,	// (0x0007a9f5) list_single_cale_mrui_row_pane_t1

0x6a33,	// (0x0007aa07) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6a33,	// (0x0007aa07) list_single_cale_mrui_row_pane_t2

0x6a99,	// (0x0007aa6d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6a99,	// (0x0007aa6d) list_single_cale_mrui_row_pane_t3

0x6ac8,	// (0x0007aa9c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6ac8,	// (0x0007aa9c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00083dcd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00083dcd) list_single_cale_mrui_row_pane_t

0x6af7,	// (0x0007aacb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6af7,	// (0x0007aacb) list_single_cmail_header_editor_pane_bg_cp01

0x6b17,	// (0x0007aaeb) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6b17,	// (0x0007aaeb) list_single_cmail_header_editor_pane_bg_cp02

0xe1a6,	// (0x0008217a) main_radioblah_text_pane_t1_ParamLimits

0xe1a6,	// (0x0008217a) main_radioblah_text_pane_t1

0x1016,	// (0x00074fea) cam6_indi_pane_cp01

0x101e,	// (0x00074ff2) cam6_mode_pane_cp01

0x1026,	// (0x00074ffa) cam6_pano_pane

0x102f,	// (0x00075003) cam6_zoom_pane_cp01

0x1037,	// (0x0007500b) cam6_pano_image_pane

0x1042,	// (0x00075016) cam6_pano_pane_g1

0x046a,	// (0x0007443e) cam6_pano_pane_g2

0x104b,	// (0x0007501f) cam6_pano_pane_g3

0x1054,	// (0x00075028) cam6_pano_pane_g4

0x434a,	// (0x0007831e) cam6_pano_pane_g5

0x105d,	// (0x00075031) cam6_pano_pane_g6

0xf0c2,	// (0x00083096) cam6_pano_pane_g7

0x1067,	// (0x0007503b) cam6_pano_pane_g8

0x1070,	// (0x00075044) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00083dd6) cam6_pano_pane_g

0x08db,	// (0x000748af) main_browser_tag_pane

0x0ed6,	// (0x00074eaa) grid_navstr_albumart_pane

0x107b,	// (0x0007504f) cell_navstr_albumart_pane_ParamLimits

0x107b,	// (0x0007504f) cell_navstr_albumart_pane

0x109b,	// (0x0007506f) cell_navstr_albumart_pane_g1

0x3767,	// (0x0007773b) cell_navstr_albumart_pane_g2

0x3777,	// (0x0007774b) cell_navstr_albumart_pane_g3

0x376f,	// (0x00077743) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00083de9) cell_navstr_albumart_pane_g

0xe1c1,	// (0x00082195) bt_list_pane_ParamLimits

0xe1c1,	// (0x00082195) bt_list_pane

0xe1e1,	// (0x000821b5) bt_list_pane_t1

0xe1f0,	// (0x000821c4) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00083df2) bt_list_pane_t

0x08db,	// (0x000748af) main_cale_prevew_pane

0xe1ff,	// (0x000821d3) popup_cale_preview_window_ParamLimits

0xe1ff,	// (0x000821d3) popup_cale_preview_window

0x145d,	// (0x00075431) bg_popup_preview_window_pane_cp05_ParamLimits

0x145d,	// (0x00075431) bg_popup_preview_window_pane_cp05

0x10a3,	// (0x00075077) list_cale_preview_pane_ParamLimits

0x10a3,	// (0x00075077) list_cale_preview_pane

0xe218,	// (0x000821ec) list_double_cale_preview_pane_ParamLimits

0xe218,	// (0x000821ec) list_double_cale_preview_pane

0xe22a,	// (0x000821fe) list_single_cale_preview_pane_ParamLimits

0xe22a,	// (0x000821fe) list_single_cale_preview_pane

0xe240,	// (0x00082214) list_single_cale_preview_pane_g1

0xe248,	// (0x0008221c) list_single_cale_preview_pane_t1_ParamLimits

0xe248,	// (0x0008221c) list_single_cale_preview_pane_t1

0xe25d,	// (0x00082231) list_double_cale_preview_pane_g1

0xe265,	// (0x00082239) list_double_cale_preview_pane_t1_ParamLimits

0xe265,	// (0x00082239) list_double_cale_preview_pane_t1

0xe27a,	// (0x0008224e) list_double_cale_preview_pane_t2_ParamLimits

0xe27a,	// (0x0008224e) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00083df7) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00083df7) list_double_cale_preview_pane_t

0x08db,	// (0x000748af) main_ezdial_pane

0x145d,	// (0x00075431) main_sp_fs_email_pane_ParamLimits

0xdda5,	// (0x00081d79) cmail_ddmenu_btn01_pane_ParamLimits

0xdda5,	// (0x00081d79) cmail_ddmenu_btn01_pane

0xddc2,	// (0x00081d96) cmail_ddmenu_btn02_pane_ParamLimits

0xddc2,	// (0x00081d96) cmail_ddmenu_btn02_pane

0xdde0,	// (0x00081db4) cmail_ddmenu_btn03_pane_ParamLimits

0xdde0,	// (0x00081db4) cmail_ddmenu_btn03_pane

0xde0e,	// (0x00081de2) main_sp_fs_ctrlbar_pane_ParamLimits

0xde24,	// (0x00081df8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdf7f,	// (0x00081f53) list_cmail_body_pane_ParamLimits

0x0e56,	// (0x00074e2a) bg_button_pane_cp12

0x0e5f,	// (0x00074e33) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0e5f,	// (0x00074e33) list_single_cmail_header_detail_pane_g3

0x68ff,	// (0x0007a8d3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x68ff,	// (0x0007a8d3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00083d7a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00083d7a) list_single_cmail_header_detail_pane_t

0x6957,	// (0x0007a92b) phacti_term_pane_t2_ParamLimits

0x6957,	// (0x0007a92b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00083d84) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00083d84) phacti_term_pane_t

0x10af,	// (0x00075083) aid_size_list_single_double

0xe292,	// (0x00082266) popup_ezdial_listscroll_window

0xe2b3,	// (0x00082287) popup_number_entry_window_cp01

0x1ae6,	// (0x00075aba) bg_popup_call_pane_cp09

0x10bb,	// (0x0007508f) ezdial_list_pane

0x10c3,	// (0x00075097) scroll_pane_cp23

0x3b43,	// (0x00077b17) bg_button_pane_cp028_ParamLimits

0x3b43,	// (0x00077b17) bg_button_pane_cp028

0xe2c1,	// (0x00082295) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe2c1,	// (0x00082295) cmail_ddmenu_btn01_pane_g1

0xe2d1,	// (0x000822a5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe2d1,	// (0x000822a5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00083dfc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00083dfc) cmail_ddmenu_btn01_pane_g

0x10cb,	// (0x0007509f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x10cb,	// (0x0007509f) cmail_ddmenu_btn01_pane_t1

0x3956,	// (0x0007792a) bg_button_pane_cp029_ParamLimits

0x3956,	// (0x0007792a) bg_button_pane_cp029

0xe2d1,	// (0x000822a5) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe2d1,	// (0x000822a5) cmail_ddmenu_btn02_pane_g1

0xe2ea,	// (0x000822be) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe2ea,	// (0x000822be) cmail_ddmenu_btn02_pane_t1

0x4c37,	// (0x00078c0b) bg_button_pane_cp031_ParamLimits

0x4c37,	// (0x00078c0b) bg_button_pane_cp031

0xe2d1,	// (0x000822a5) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe2d1,	// (0x000822a5) cmail_ddmenu_btn03_pane_g1

0xe2ea,	// (0x000822be) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe2ea,	// (0x000822be) cmail_ddmenu_btn03_pane_t1

0xbb91,	// (0x0007fb65) cell_dialer2_keypad_pane_t1_ParamLimits

0xbbab,	// (0x0007fb7f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbbab,	// (0x0007fb7f) cell_dialer2_keypad_pane_t1_copy1

0xd728,	// (0x000816fc) ncimui_group_button_pane

0x145d,	// (0x00075431) main_sp_fs_calendar_pane_ParamLimits

0xdfa6,	// (0x00081f7a) list_single_cmail_header_caption_pane_ParamLimits

0xe0cb,	// (0x0008209f) aid_recal_txt_sm_pane

0x08db,	// (0x000748af) mian_recal_day_pane

0x699d,	// (0x0007a971) popup_sp_fs_cale_preview_window_ParamLimits

0x10e0,	// (0x000750b4) list_recal_day_pane

0x6b4e,	// (0x0007ab22) list_single_recal_day_pane_ParamLimits

0x6b4e,	// (0x0007ab22) list_single_recal_day_pane

0x1107,	// (0x000750db) list_single_recal_day_pane_g1_ParamLimits

0x1107,	// (0x000750db) list_single_recal_day_pane_g1

0x6b60,	// (0x0007ab34) list_single_recal_day_pane_g2_ParamLimits

0x6b60,	// (0x0007ab34) list_single_recal_day_pane_g2

0x6b6c,	// (0x0007ab40) list_single_recal_day_pane_g3_ParamLimits

0x6b6c,	// (0x0007ab40) list_single_recal_day_pane_g3

0x6b78,	// (0x0007ab4c) list_single_recal_day_pane_g4_ParamLimits

0x6b78,	// (0x0007ab4c) list_single_recal_day_pane_g4

0x6b86,	// (0x0007ab5a) list_single_recal_day_pane_g5_ParamLimits

0x6b86,	// (0x0007ab5a) list_single_recal_day_pane_g5

0x6b9c,	// (0x0007ab70) list_single_recal_day_pane_g6_ParamLimits

0x6b9c,	// (0x0007ab70) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00083e0b) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00083e0b) list_single_recal_day_pane_g

0x6bb0,	// (0x0007ab84) list_single_recal_day_pane_t1

0x6bc2,	// (0x0007ab96) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00083e16) list_single_recal_day_pane_t

0xe30e,	// (0x000822e2) ncimui_query_button_pane_ParamLimits

0xe30e,	// (0x000822e2) ncimui_query_button_pane

0xe31e,	// (0x000822f2) ncimui_query_button_pane_t1_ParamLimits

0xe31e,	// (0x000822f2) ncimui_query_button_pane_t1

0x1113,	// (0x000750e7) ncimui_query_button_pane_t2_ParamLimits

0x1113,	// (0x000750e7) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00083e1b) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00083e1b) ncimui_query_button_pane_t

0xe331,	// (0x00082305) query_button_pane_ParamLimits

0xe331,	// (0x00082305) query_button_pane

0x08db,	// (0x000748af) bg_button_pane_cp0028

0x1126,	// (0x000750fa) query_button_pane_t1

0x9f4f,	// (0x0007df23) main_tport_pane_ParamLimits

0xde89,	// (0x00081e5d) bg_popup_window_pane_cp01_ParamLimits

0xde89,	// (0x00081e5d) bg_popup_window_pane_cp01

0xde97,	// (0x00081e6b) heading_pane_cp08_ParamLimits

0xde97,	// (0x00081e6b) heading_pane_cp08

0xdea5,	// (0x00081e79) heading_pane_cp07_ParamLimits

0xdea5,	// (0x00081e79) heading_pane_cp07

0xdf14,	// (0x00081ee8) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00083d67) cell_tport_appsw_pane_g

0x5d02,	// (0x00079cd6) input_candi_list_open_g1

0x1f02,	// (0x00075ed6) list_cale_time_pane_g6_ParamLimits

0x1f02,	// (0x00075ed6) list_cale_time_pane_g6

0xa9d4,	// (0x0007e9a8) aid_size_touch_calib_1_ParamLimits

0xa9d4,	// (0x0007e9a8) aid_size_touch_calib_1

0xa9e0,	// (0x0007e9b4) aid_size_touch_calib_2_ParamLimits

0xa9e0,	// (0x0007e9b4) aid_size_touch_calib_2

0xa9ee,	// (0x0007e9c2) aid_size_touch_calib_3_ParamLimits

0xa9ee,	// (0x0007e9c2) aid_size_touch_calib_3

0xa9fe,	// (0x0007e9d2) aid_size_touch_calib_4_ParamLimits

0xa9fe,	// (0x0007e9d2) aid_size_touch_calib_4

0xaa0c,	// (0x0007e9e0) main_touch_calib_button_group_pane_ParamLimits

0xaa0c,	// (0x0007e9e0) main_touch_calib_button_group_pane

0xaa1a,	// (0x0007e9ee) main_touch_calib_pane_g1_ParamLimits

0xaa26,	// (0x0007e9fa) main_touch_calib_pane_g2_ParamLimits

0xaa32,	// (0x0007ea06) main_touch_calib_pane_g3_ParamLimits

0xaa3e,	// (0x0007ea12) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x00083725) main_touch_calib_pane_g_ParamLimits

0xaa4a,	// (0x0007ea1e) main_touch_calib_pane_t1_ParamLimits

0xaa63,	// (0x0007ea37) main_touch_calib_pane_t2_ParamLimits

0xaa7c,	// (0x0007ea50) main_touch_calib_pane_t3_ParamLimits

0xaa92,	// (0x0007ea66) main_touch_calib_pane_t4_ParamLimits

0xaaa8,	// (0x0007ea7c) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0008372e) main_touch_calib_pane_t_ParamLimits

0x40ea,	// (0x000780be) list_single_fp_cale_pane_g3_ParamLimits

0x40ea,	// (0x000780be) list_single_fp_cale_pane_g3

0x145d,	// (0x00075431) bg_button_pane_cp012_ParamLimits

0x145d,	// (0x00075431) bg_vkb2_func_pane_cp03_ParamLimits

0xc987,	// (0x0008095b) cell_vitu2_function_top_pane_g1_ParamLimits

0x145d,	// (0x00075431) bg_vkb2_func_pane_cp04_ParamLimits

0xd6b0,	// (0x00081684) main_ncimui_button_group_pane_ParamLimits

0xd6b0,	// (0x00081684) main_ncimui_button_group_pane

0xd716,	// (0x000816ea) main_ncimui_pane_t3_ParamLimits

0xd716,	// (0x000816ea) main_ncimui_pane_t3

0x0eec,	// (0x00074ec0) phacti_button_group_pane

0x10af,	// (0x00075083) aid_size_list_single_double_ParamLimits

0xe292,	// (0x00082266) popup_ezdial_listscroll_window_ParamLimits

0xe2b3,	// (0x00082287) popup_number_entry_window_cp01_ParamLimits

0xe33e,	// (0x00082312) phacti_button_pane_ParamLimits

0xe33e,	// (0x00082312) phacti_button_pane

0x08db,	// (0x000748af) bg_button_pane_cp14

0x1134,	// (0x00075108) phacti_button_pane_t1

0xe34f,	// (0x00082323) main_touch_calib_button_pane_ParamLimits

0xe34f,	// (0x00082323) main_touch_calib_button_pane

0x13e8,	// (0x000753bc) bg_button_pane_cp18_ParamLimits

0x13e8,	// (0x000753bc) bg_button_pane_cp18

0x1142,	// (0x00075116) main_touch_calib_button_pane_t1_ParamLimits

0x1142,	// (0x00075116) main_touch_calib_button_pane_t1

0x147d,	// (0x00075451) main_touch_calib_button_pane_t2_ParamLimits

0x147d,	// (0x00075451) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00083e20) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00083e20) main_touch_calib_button_pane_t

0x08db,	// (0x000748af) cell_ncimui_button_pane

0x08db,	// (0x000748af) bg_button_pane_cp032

0x149b,	// (0x0007546f) cell_ncimui_button_pane_t1

0xbc07,	// (0x0007fbdb) image3_infobar_pane_ParamLimits

0xbc07,	// (0x0007fbdb) image3_infobar_pane

0xdad3,	// (0x00081aa7) fs_bigclock_status_pane_ParamLimits

0xdad3,	// (0x00081aa7) fs_bigclock_status_pane

0xdae0,	// (0x00081ab4) main_fs_bigclock_clock_pane_ParamLimits

0xdae0,	// (0x00081ab4) main_fs_bigclock_clock_pane

0xdaf4,	// (0x00081ac8) main_fs_bigclock_indi_pane_ParamLimits

0xdaf4,	// (0x00081ac8) main_fs_bigclock_indi_pane

0xdb1c,	// (0x00081af0) main_fs_bigclock_swipe_pane_ParamLimits

0xdb1c,	// (0x00081af0) main_fs_bigclock_swipe_pane

0x08db,	// (0x000748af) main_fs_clock_dumped_data

0x0577,	// (0x0007454b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x0577,	// (0x0007454b) list_single_fs_bigclock_indicator_pane_g1

0x0592,	// (0x00074566) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x0592,	// (0x00074566) list_single_fs_bigclock_indicator_pane_g2

0x05ac,	// (0x00074580) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x05ac,	// (0x00074580) list_single_fs_bigclock_indicator_pane_g3

0x05c6,	// (0x0007459a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x05c6,	// (0x0007459a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00083c48) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00083c48) list_single_fs_bigclock_indicator_pane_g

0x05f1,	// (0x000745c5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x05f1,	// (0x000745c5) list_single_fs_bigclock_indicator_pane_t1

0x0619,	// (0x000745ed) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x0619,	// (0x000745ed) list_single_fs_bigclock_indicator_pane_t2

0x0641,	// (0x00074615) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x0641,	// (0x00074615) list_single_fs_bigclock_indicator_pane_t3

0x0669,	// (0x0007463d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x0669,	// (0x0007463d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00083c53) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00083c53) list_single_fs_bigclock_indicator_pane_t

0x14a9,	// (0x0007547d) image3_infobar_fav_pane_ParamLimits

0x14a9,	// (0x0007547d) image3_infobar_fav_pane

0x14b9,	// (0x0007548d) image3_infobar_loc_pane_ParamLimits

0x14b9,	// (0x0007548d) image3_infobar_loc_pane

0x14cd,	// (0x000754a1) image3_infobar_time_pane_ParamLimits

0x14cd,	// (0x000754a1) image3_infobar_time_pane

0x3d5e,	// (0x00077d32) image3_infobar_time_pane_g1

0x14dd,	// (0x000754b1) image3_infobar_time_pane_t1

0x3d5e,	// (0x00077d32) image3_infobar_loc_pane_g1

0x14eb,	// (0x000754bf) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00083e25) image3_infobar_loc_pane_g

0x14f3,	// (0x000754c7) image3_infobar_loc_pane_t1

0x3d5e,	// (0x00077d32) image3_infobar_fav_pane_g1

0x1501,	// (0x000754d5) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00083e2a) image3_infobar_fav_pane_g

0x1509,	// (0x000754dd) fs_bigclock_status_battery_pane

0x1512,	// (0x000754e6) fs_bigclock_status_signal_pane

0x151b,	// (0x000754ef) fs_bigclock_status_title_pane

0x1524,	// (0x000754f8) fs_bigclock_status_signal_pane_g1

0x152d,	// (0x00075501) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00083e2f) fs_bigclock_status_signal_pane_g

0x1535,	// (0x00075509) fs_bigclock_status_battery_pane_g1

0x153e,	// (0x00075512) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00083e34) fs_bigclock_status_battery_pane_g

0x1546,	// (0x0007551a) fs_bigclock_status_title_pane_t1

0xe35f,	// (0x00082333) main_fs_bigclock_clock_pane_g1

0xe35f,	// (0x00082333) main_fs_bigclock_clock_pane_g2

0xe36c,	// (0x00082340) main_fs_bigclock_clock_pane_g3

0xe36c,	// (0x00082340) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00083e39) main_fs_bigclock_clock_pane_g

0xe378,	// (0x0008234c) main_fs_bigclock_clock_pane_t1

0xe38b,	// (0x0008235f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00083e42) main_fs_bigclock_clock_pane_t

0x1554,	// (0x00075528) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1554,	// (0x00075528) list_single_fs_bigclock_indicator_pane

0x1565,	// (0x00075539) list_single_fs_bigclock_pane_ParamLimits

0x1565,	// (0x00075539) list_single_fs_bigclock_pane

0x158b,	// (0x0007555f) main_fs_bigclock_indicator_pane_t1

0x159a,	// (0x0007556e) list_single_fs_bigclock_pane_g1

0x15a2,	// (0x00075576) list_single_fs_bigclock_pane_t1

0x3d5e,	// (0x00077d32) main_fs_bigclock_swipe_pane_g1

0x15e5,	// (0x000755b9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00083e53) main_fs_bigclock_swipe_pane_g

0x15ed,	// (0x000755c1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x15ed,	// (0x000755c1) main_fs_bigclock_swipe_pane_t1

0x8fdf,	// (0x0007cfb3) call_type_pane_ParamLimits

0x08db,	// (0x000748af) main_btmg_pane

0x6a15,	// (0x0007a9e9) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6a15,	// (0x0007a9e9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00083dc6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00083dc6) list_single_cale_mrui_row_pane_g

0x6b3d,	// (0x0007ab11) list_recal_vselct_arw_lo_pane

0x10ff,	// (0x000750d3) list_recal_vselct_arw_up_pane

0x6b45,	// (0x0007ab19) list_recal_vselct_pane

0xe3e2,	// (0x000823b6) btmg_button_pane

0xe3ee,	// (0x000823c2) main_btmg_pane_g1

0x08db,	// (0x000748af) bg_button_pane_cp044

0x160a,	// (0x000755de) btmg_button_pane_t1

0x3942,	// (0x00077916) aid_listscroll_gen

0x145d,	// (0x00075431) main_cntbar_detail_pane

0x0e38,	// (0x00074e0c) list_cmail_folder_pane

0x32bf,	// (0x00077293) sp_fs_scroll_pane_cp03_ParamLimits

0x6bd4,	// (0x0007aba8) list_single_fs_dyc_pane_cp01_ParamLimits

0x6bd4,	// (0x0007aba8) list_single_fs_dyc_pane_cp01

0x1618,	// (0x000755ec) aid_size_cmail_indent

0x6bf9,	// (0x0007abcd) list_single_dyc_row_pane_cp01

0xe416,	// (0x000823ea) cntbar_detail_list_pane_ParamLimits

0xe416,	// (0x000823ea) cntbar_detail_list_pane

0xe450,	// (0x00082424) main_cntbar_detail_cont_pane_ParamLimits

0xe450,	// (0x00082424) main_cntbar_detail_cont_pane

0x8fd3,	// (0x0007cfa7) scroll_pane_cp032_ParamLimits

0x8fd3,	// (0x0007cfa7) scroll_pane_cp032

0xe45c,	// (0x00082430) cntbar_detail_list_event_pane_ParamLimits

0xe45c,	// (0x00082430) cntbar_detail_list_event_pane

0xe422,	// (0x000823f6) cntbar_detail_list_shct_pane

0x1d8d,	// (0x00075d61) aid_list_gen

0x1621,	// (0x000755f5) aid_scroll

0x162a,	// (0x000755fe) aid_size_touch_scroll_bar

0xed53,	// (0x00082d27) aid_list_double

0xe470,	// (0x00082444) aid_list_single

0xcf2b,	// (0x00080eff) aid_list_single_lg

0x6c02,	// (0x0007abd6) aid_list_z_g_a_sm

0xe479,	// (0x0008244d) aid_list_z_g_d

0x6c0a,	// (0x0007abde) aid_txt_z_prm

0x6c18,	// (0x0007abec) aid_txt_z_prm_cp01

0x6c26,	// (0x0007abfa) aid_txt_z_sec

0xe481,	// (0x00082455) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe481,	// (0x00082455) main_cntbar_detail_cont_pane_g1

0xe48e,	// (0x00082462) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe48e,	// (0x00082462) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00083e58) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00083e58) main_cntbar_detail_cont_pane_g

0x1633,	// (0x00075607) main_cntbar_detail_cont_pane_t1

0x1641,	// (0x00075615) main_cntbar_detail_cont_pane_t2

0x164f,	// (0x00075623) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00083e5d) main_cntbar_detail_cont_pane_t

0xe49a,	// (0x0008246e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe49a,	// (0x0008246e) cell_cntbar_detail_list_shct_pane

0x165d,	// (0x00075631) cntbar_detail_list_shct_pane_g1

0x1666,	// (0x0007563a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00083e64) cntbar_detail_list_shct_pane_g

0xe4ae,	// (0x00082482) cntbar_detail_list_event_pane_g1_ParamLimits

0xe4ae,	// (0x00082482) cntbar_detail_list_event_pane_g1

0xe4ba,	// (0x0008248e) cntbar_detail_list_event_pane_g2_ParamLimits

0xe4ba,	// (0x0008248e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00083e69) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00083e69) cntbar_detail_list_event_pane_g

0xe526,	// (0x000824fa) cntbar_detail_list_event_pane_t1_ParamLimits

0xe526,	// (0x000824fa) cntbar_detail_list_event_pane_t1

0xe53b,	// (0x0008250f) cntbar_detail_list_event_pane_t2_ParamLimits

0xe53b,	// (0x0008250f) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00083e76) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00083e76) cntbar_detail_list_event_pane_t

0x3d5e,	// (0x00077d32) cell_cntbar_detail_list_shct_pane_g1

0x2504,	// (0x000764d8) navi_pane_mv_g3

0x145d,	// (0x00075431) main_cntbar_detail_pane_ParamLimits

0x08db,	// (0x000748af) main_notif_wgt_pane

0xb8bb,	// (0x0007f88f) aid_tch_main_mp4_pane_g4

0xbaf0,	// (0x0007fac4) popup_slider_window_cp02

0x6b33,	// (0x0007ab07) list_recal_day_event_pane

0xe3f6,	// (0x000823ca) cntbar_detail_btn_pane_ParamLimits

0xe3f6,	// (0x000823ca) cntbar_detail_btn_pane

0xe406,	// (0x000823da) cntbar_detail_btn_pane_cp01_ParamLimits

0xe406,	// (0x000823da) cntbar_detail_btn_pane_cp01

0xe422,	// (0x000823f6) cntbar_detail_list_shct_pane_ParamLimits

0xe42e,	// (0x00082402) cntbar_detail_pane_g1_ParamLimits

0xe42e,	// (0x00082402) cntbar_detail_pane_g1

0xe43a,	// (0x0008240e) cntbar_detail_pane_t1_ParamLimits

0xe43a,	// (0x0008240e) cntbar_detail_pane_t1

0xe4c6,	// (0x0008249a) cntbar_detail_list_event_pane_g3_ParamLimits

0xe4c6,	// (0x0008249a) cntbar_detail_list_event_pane_g3

0xe4de,	// (0x000824b2) cntbar_detail_list_event_pane_g4_ParamLimits

0xe4de,	// (0x000824b2) cntbar_detail_list_event_pane_g4

0xe4f6,	// (0x000824ca) cntbar_detail_list_event_pane_g5_ParamLimits

0xe4f6,	// (0x000824ca) cntbar_detail_list_event_pane_g5

0xe50e,	// (0x000824e2) cntbar_detail_list_event_pane_g6_ParamLimits

0xe50e,	// (0x000824e2) cntbar_detail_list_event_pane_g6

0xe550,	// (0x00082524) cntbar_detail_list_event_pane_t3_ParamLimits

0xe550,	// (0x00082524) cntbar_detail_list_event_pane_t3

0xe562,	// (0x00082536) popup_notif_wgt_window_ParamLimits

0xe562,	// (0x00082536) popup_notif_wgt_window

0xe572,	// (0x00082546) popup_submenu_window_cp01_ParamLimits

0xe572,	// (0x00082546) popup_submenu_window_cp01

0x1ae6,	// (0x00075aba) bg_popup_window_pane_cp10

0x166f,	// (0x00075643) listscroll_notif_wgt_pane

0x1681,	// (0x00075655) list_notif_wgt_window

0x168a,	// (0x0007565e) scroll_pane_cp033

0xe584,	// (0x00082558) list_notif_wgt_row_pane_ParamLimits

0xe584,	// (0x00082558) list_notif_wgt_row_pane

0x1693,	// (0x00075667) aid_size_list_notif_wgt_del

0x16a0,	// (0x00075674) list_notif_wgt_row_pane_g1

0x16ac,	// (0x00075680) list_notif_wgt_row_pane_g2

0x16bb,	// (0x0007568f) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00083e7d) list_notif_wgt_row_pane_g

0x16c8,	// (0x0007569c) list_notif_wgt_row_pane_t1

0x16de,	// (0x000756b2) list_notif_wgt_row_pane_t2

0x16f0,	// (0x000756c4) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00083e84) list_notif_wgt_row_pane_t

0x49f5,	// (0x000789c9) list_recal_day_event_pane_g1

0x1702,	// (0x000756d6) list_recal_day_event_pane_t1

0x08db,	// (0x000748af) bg_button_pane_cp045

0xe596,	// (0x0008256a) cntbar_detail_btn_pane_t1

0x3956,	// (0x0007792a) main_callh_pane_ParamLimits

0x3956,	// (0x0007792a) main_callh_pane

0x08db,	// (0x000748af) main_coverflow0_pane

0x08db,	// (0x000748af) main_wgtman_pane

0xdb34,	// (0x00081b08) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdb34,	// (0x00081b08) main_fs_bigclock_unlock_btn_pane

0xdf0c,	// (0x00081ee0) bg_button_pane_cp16

0xdf1c,	// (0x00081ef0) cell_tport_appsw_pane_g3

0xe5a4,	// (0x00082578) cf0_flow_pane_ParamLimits

0xe5a4,	// (0x00082578) cf0_flow_pane

0x1711,	// (0x000756e5) listscroll_cf0_pane

0x171c,	// (0x000756f0) main_cf0_pane_g1

0xe5b3,	// (0x00082587) main_cf0_pane_t1_ParamLimits

0xe5b3,	// (0x00082587) main_cf0_pane_t1

0xe5c7,	// (0x0008259b) main_cf0_pane_t2_ParamLimits

0xe5c7,	// (0x0008259b) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00083e90) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00083e90) main_cf0_pane_t

0x172e,	// (0x00075702) scroll_pane_cp11

0xe5db,	// (0x000825af) cf0_flow_pane_g1

0xe5e3,	// (0x000825b7) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00083e95) cf0_flow_pane_g

0xe5eb,	// (0x000825bf) cf0_flow_pane_t1

0x08db,	// (0x000748af) main_call6_pane

0x08db,	// (0x000748af) main_calllock_pane

0xe5f9,	// (0x000825cd) call6_btn_grp_pane_ParamLimits

0xe5f9,	// (0x000825cd) call6_btn_grp_pane

0xe608,	// (0x000825dc) call6_pane_g1_ParamLimits

0xe608,	// (0x000825dc) call6_pane_g1

0xe618,	// (0x000825ec) popup_call6_1st_window_ParamLimits

0xe618,	// (0x000825ec) popup_call6_1st_window

0xe626,	// (0x000825fa) popup_call6_2nd_window_ParamLimits

0xe626,	// (0x000825fa) popup_call6_2nd_window

0xe634,	// (0x00082608) cell_call6_btn_pane_ParamLimits

0xe634,	// (0x00082608) cell_call6_btn_pane

0x1ae6,	// (0x00075aba) bg_popup_call2_in_pane_cp03

0x1739,	// (0x0007570d) popup_call6_1st_window_g1

0x1741,	// (0x00075715) popup_call6_1st_window_g2

0x1749,	// (0x0007571d) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00083e9a) popup_call6_1st_window_g

0x1751,	// (0x00075725) popup_call6_1st_window_t1

0x1760,	// (0x00075734) popup_call6_1st_window_t2

0x176e,	// (0x00075742) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00083ea1) popup_call6_1st_window_t

0x1ae6,	// (0x00075aba) bg_popup_call2_in_pane_cp04

0x1739,	// (0x0007570d) popup_call6_2nd_window_g1

0x1741,	// (0x00075715) popup_call6_2nd_window_g2

0x1749,	// (0x0007571d) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00083e9a) popup_call6_2nd_window_g

0x1751,	// (0x00075725) popup_call6_2nd_window_t1

0x08db,	// (0x000748af) bg_button_pane_cp15

0x17b3,	// (0x00075787) cell_call6_btn_pane_g1

0xe643,	// (0x00082617) cell_call6_btn_pane_t1

0xe652,	// (0x00082626) listscroll_wgtman_pane_ParamLimits

0xe652,	// (0x00082626) listscroll_wgtman_pane

0xe66e,	// (0x00082642) wgtman_btn_pane_ParamLimits

0xe66e,	// (0x00082642) wgtman_btn_pane

0x230b,	// (0x000762df) aid_scroll_copy1

0x177c,	// (0x00075750) list_wgtman_pane

0xe6a3,	// (0x00082677) wgtman_btn_pane_g1_ParamLimits

0xe6a3,	// (0x00082677) wgtman_btn_pane_g1

0xe6cb,	// (0x0008269f) wgtman_btn_pane_t1_ParamLimits

0xe6cb,	// (0x0008269f) wgtman_btn_pane_t1

0x1786,	// (0x0007575a) wgtman_btn_pane_t2_ParamLimits

0x1786,	// (0x0007575a) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00083ea8) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00083ea8) wgtman_btn_pane_t

0xe702,	// (0x000826d6) listrow_wgtman_pane_ParamLimits

0xe702,	// (0x000826d6) listrow_wgtman_pane

0xe71d,	// (0x000826f1) listrow_wgtman_pane_g1

0xe72a,	// (0x000826fe) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00083ead) listrow_wgtman_pane_g

0x6c34,	// (0x0007ac08) listrow_wgtman_pane_t1

0x6c4c,	// (0x0007ac20) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00083eb2) listrow_wgtman_pane_t

0x6c72,	// (0x0007ac46) wait_bar_pane_cp09

0x179d,	// (0x00075771) main_calllock_btn_pane

0x17a7,	// (0x0007577b) main_calllock_pane_g1

0x08db,	// (0x000748af) bg_button_pane_cp17

0x17b3,	// (0x00075787) main_calllock_btn_pane_g1

0x17bc,	// (0x00075790) main_calllock_btn_pane_t1

0x08db,	// (0x000748af) main_dialer3_pane

0x08db,	// (0x000748af) main_fmrd2_pane

0x3d5e,	// (0x00077d32) main_fs_bigclock_unlock_btn_pane_g1

0xe750,	// (0x00082724) main_fs_bigclock_unlock_btn_pane_t1

0xe75e,	// (0x00082732) area_fmrd2_info_pane_ParamLimits

0xe75e,	// (0x00082732) area_fmrd2_info_pane

0xe76c,	// (0x00082740) area_fmrd2_visual_pane_ParamLimits

0xe76c,	// (0x00082740) area_fmrd2_visual_pane

0xe77a,	// (0x0008274e) fmrd2_indi_pane_ParamLimits

0xe77a,	// (0x0008274e) fmrd2_indi_pane

0xe787,	// (0x0008275b) area_fmrd2_visual_pane_g1

0xe78f,	// (0x00082763) area_fmrd2_visual_pane_t1

0xe79f,	// (0x00082773) area_fmrd2_visual_pane_t2

0xe7af,	// (0x00082783) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00083ebc) area_fmrd2_visual_pane_t

0xe7bf,	// (0x00082793) area_fmrd2_info_pane_g1

0xe7c7,	// (0x0008279b) area_fmrd2_info_pane_t1

0xe7d7,	// (0x000827ab) area_fmrd2_info_pane_t2

0xe7e7,	// (0x000827bb) area_fmrd2_info_pane_t3

0xe7f7,	// (0x000827cb) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00083ec3) area_fmrd2_info_pane_t

0xe805,	// (0x000827d9) fmrd2_indi_pane_t1

0xe815,	// (0x000827e9) fmrd2_indi_pane_t2

0xe825,	// (0x000827f9) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00083ecc) fmrd2_indi_pane_t

0x05d5,	// (0x000745a9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x05d5,	// (0x000745a9) list_single_fs_bigclock_indicator_pane_g5

0x0686,	// (0x0007465a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x0686,	// (0x0007465a) list_single_fs_bigclock_indicator_pane_t5

0xe0ad,	// (0x00082081) aid_cell_bcale_month_pane_ParamLimits

0xe0ad,	// (0x00082081) aid_cell_bcale_month_pane

0xe0d4,	// (0x000820a8) bcale_month_pane_ParamLimits

0xe0d4,	// (0x000820a8) bcale_month_pane

0xe0f2,	// (0x000820c6) bcale_preview_pane_ParamLimits

0xe0f2,	// (0x000820c6) bcale_preview_pane

0x15a2,	// (0x00075576) list_single_fs_bigclock_pane_t1_ParamLimits

0x15c1,	// (0x00075595) list_single_fs_bigclock_pane_t2_ParamLimits

0x15c1,	// (0x00075595) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00083e4e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00083e4e) list_single_fs_bigclock_pane_t

0xe748,	// (0x0008271c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00083eb7) main_fs_bigclock_unlock_btn_pane_g

0xe833,	// (0x00082807) aid_dia3_key_size_ParamLimits

0xe833,	// (0x00082807) aid_dia3_key_size

0xe83f,	// (0x00082813) aid_dia3_listrow_size_ParamLimits

0xe83f,	// (0x00082813) aid_dia3_listrow_size

0xe84f,	// (0x00082823) dia3_keypad_fun_pane_ParamLimits

0xe84f,	// (0x00082823) dia3_keypad_fun_pane

0xe861,	// (0x00082835) dia3_keypad_num_pane_ParamLimits

0xe861,	// (0x00082835) dia3_keypad_num_pane

0xe873,	// (0x00082847) dia3_listscroll_pane_ParamLimits

0xe873,	// (0x00082847) dia3_listscroll_pane

0xe881,	// (0x00082855) dia3_numentry_pane_ParamLimits

0xe881,	// (0x00082855) dia3_numentry_pane

0x17cb,	// (0x0007579f) dia3_list_pane

0x17d6,	// (0x000757aa) scroll_pane_cp12

0x08db,	// (0x000748af) bg_dia3_numentry_pane

0xe88f,	// (0x00082863) dia3_numentry_pane_t1

0xe89e,	// (0x00082872) cell_dia3_key_num_pane

0xe8a6,	// (0x0008287a) cell_dia3_key0_fun_pane_ParamLimits

0xe8a6,	// (0x0008287a) cell_dia3_key0_fun_pane

0xe8b3,	// (0x00082887) cell_dia3_key1_fun_pane_ParamLimits

0xe8b3,	// (0x00082887) cell_dia3_key1_fun_pane

0xe8c0,	// (0x00082894) dia3_listrow_pane

0x0328,	// (0x000742fc) bg_dia3_numentry_pane_g1

0x08db,	// (0x000748af) bg_button_pane_cp21

0x17e1,	// (0x000757b5) cell_dia3_key_num_pane_t1

0x17ef,	// (0x000757c3) cell_dia3_key_num_pane_t2

0x17fe,	// (0x000757d2) cell_dia3_key_num_pane_t3

0x180d,	// (0x000757e1) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00083ed3) cell_dia3_key_num_pane_t

0x08db,	// (0x000748af) bg_button_pane_cp19

0xe8cd,	// (0x000828a1) cell_dia3_key0_fun_pane_g1

0x08db,	// (0x000748af) bg_button_pane_cp20

0xe8d5,	// (0x000828a9) cell_dia3_key1_fun_pane_g1

0xe8dd,	// (0x000828b1) area_left_week_number_pane

0xe8f0,	// (0x000828c4) area_top_day_name_pane

0xe8fe,	// (0x000828d2) frame_month_view_pane

0x181c,	// (0x000757f0) grid_month_view_pane

0xe913,	// (0x000828e7) cell_top_day_name_pane_ParamLimits

0xe913,	// (0x000828e7) cell_top_day_name_pane

0xe92d,	// (0x00082901) cell_area_left_week_number_pane_ParamLimits

0xe92d,	// (0x00082901) cell_area_left_week_number_pane

0xe950,	// (0x00082924) cell_month_view_pane_ParamLimits

0xe950,	// (0x00082924) cell_month_view_pane

0x182a,	// (0x000757fe) frm_month_g1

0xe97c,	// (0x00082950) frm_month_g2

0xe98d,	// (0x00082961) frm_month_g3

0xe99e,	// (0x00082972) frm_month_g4

0xe9af,	// (0x00082983) frm_month_g5

0xe9c2,	// (0x00082996) frm_month_g6

0xe9d5,	// (0x000829a9) frm_month_g7

0x1837,	// (0x0007580b) frm_month_g8

0xe9e8,	// (0x000829bc) frm_month_g9

0xe9f5,	// (0x000829c9) frm_month_g10

0xea02,	// (0x000829d6) frm_month_g11

0xea0f,	// (0x000829e3) frm_month_g12

0xea1c,	// (0x000829f0) frm_month_g13

0xea29,	// (0x000829fd) frm_month_g14

0xea38,	// (0x00082a0c) frm_month_g15

0xea47,	// (0x00082a1b) frm_month_g16

0x000f,

0xff08,	// (0x00083edc) frm_month_g

0x1844,	// (0x00075818) cell_top_day_name_pane_t1

0xea56,	// (0x00082a2a) cell_area_left_week_number_pane_g1

0xea65,	// (0x00082a39) cell_area_left_week_number_pane_t1

0x3fca,	// (0x00077f9e) cell_month_view_pane_g1

0xea7b,	// (0x00082a4f) cell_month_view_pane_t1

0x08db,	// (0x000748af) main_fps_pane

0x08a3,	// (0x00074877) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x08a3,	// (0x00074877) cmail_ddmenu_btn02_pane_cp1

0x08bf,	// (0x00074893) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x08bf,	// (0x00074893) cmail_ddmenu_btn02_pane_cp2

0xe2dd,	// (0x000822b1) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe2dd,	// (0x000822b1) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00083e01) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00083e01) cmail_ddmenu_btn02_pane_g

0xe2fc,	// (0x000822d0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe2fc,	// (0x000822d0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00083e06) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00083e06) cmail_ddmenu_btn02_pane_t

0xea91,	// (0x00082a65) fps_text_pane_ParamLimits

0xea91,	// (0x00082a65) fps_text_pane

0xea9e,	// (0x00082a72) main_fps_pane_g1_ParamLimits

0xea9e,	// (0x00082a72) main_fps_pane_g1

0xeaac,	// (0x00082a80) wait_bar_pane_cp010_ParamLimits

0xeaac,	// (0x00082a80) wait_bar_pane_cp010

0xeab8,	// (0x00082a8c) fps_text_pane_t1_ParamLimits

0xeab8,	// (0x00082a8c) fps_text_pane_t1

0xbf04,	// (0x0007fed8) cam4_image_uncrop_pane_g1

0xbf0d,	// (0x0007fee1) cam4_image_uncrop_pane_g2

0xbf16,	// (0x0007feea) cam4_image_uncrop_pane_g3

0xbf1f,	// (0x0007fef3) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000838c2) cam4_image_uncrop_pane_g

0xe8c0,	// (0x00082894) dia3_listrow_pane_ParamLimits

0x08db,	// (0x000748af) main_phob2_pane

0xdeee,	// (0x00081ec2) cell_tport_appsw_pane_cp02_ParamLimits

0xdeee,	// (0x00081ec2) cell_tport_appsw_pane_cp02

0xdefd,	// (0x00081ed1) cell_tport_appsw_pane_cp03_ParamLimits

0xdefd,	// (0x00081ed1) cell_tport_appsw_pane_cp03

0x08db,	// (0x000748af) phob2_contact_card_pane

0x08db,	// (0x000748af) phob2_listscroll_pane

0x1857,	// (0x0007582b) phob2_list_pane

0x185f,	// (0x00075833) scroll_pane_cp034

0xead1,	// (0x00082aa5) phob2_cc_data_pane_ParamLimits

0xead1,	// (0x00082aa5) phob2_cc_data_pane

0xeaeb,	// (0x00082abf) phob2_cc_listscroll_pane_ParamLimits

0xeaeb,	// (0x00082abf) phob2_cc_listscroll_pane

0xe702,	// (0x000826d6) list_double_large_graphic_phob2_pane_ParamLimits

0xe702,	// (0x000826d6) list_double_large_graphic_phob2_pane

0xeb05,	// (0x00082ad9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeb05,	// (0x00082ad9) list_double_large_graphic_phob2_pane_g1

0x6c84,	// (0x0007ac58) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x6c84,	// (0x0007ac58) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00083efd) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00083efd) list_double_large_graphic_phob2_pane_g

0x6c90,	// (0x0007ac64) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6c90,	// (0x0007ac64) list_double_large_graphic_phob2_pane_t1

0x6ca5,	// (0x0007ac79) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6ca5,	// (0x0007ac79) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00083f02) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00083f02) list_double_large_graphic_phob2_pane_t

0x08db,	// (0x000748af) list_highlight_pane_cp024

0xeb1b,	// (0x00082aef) phob2_cc_button_pane

0xeb23,	// (0x00082af7) phob2_cc_data_pane_g1_ParamLimits

0xeb23,	// (0x00082af7) phob2_cc_data_pane_g1

0xeb2f,	// (0x00082b03) phob2_cc_data_pane_g2_ParamLimits

0xeb2f,	// (0x00082b03) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00083f07) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00083f07) phob2_cc_data_pane_g

0xeb3b,	// (0x00082b0f) phob2_cc_data_pane_t1_ParamLimits

0xeb3b,	// (0x00082b0f) phob2_cc_data_pane_t1

0xeb4d,	// (0x00082b21) phob2_cc_data_pane_t2_ParamLimits

0xeb4d,	// (0x00082b21) phob2_cc_data_pane_t2

0xeb5f,	// (0x00082b33) phob2_cc_data_pane_t3_ParamLimits

0xeb5f,	// (0x00082b33) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00083f0c) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00083f0c) phob2_cc_data_pane_t

0x1867,	// (0x0007583b) phob2_cc_list_pane_ParamLimits

0x1867,	// (0x0007583b) phob2_cc_list_pane

0x4a8c,	// (0x00078a60) scroll_pane_cp035_ParamLimits

0x4a8c,	// (0x00078a60) scroll_pane_cp035

0x145d,	// (0x00075431) bg_button_pane_cp033

0x1873,	// (0x00075847) phob2_cc_button_pane_g1

0x187f,	// (0x00075853) phob2_cc_button_pane_t1

0x1894,	// (0x00075868) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00083f13) phob2_cc_button_pane_t

0xeb71,	// (0x00082b45) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xeb71,	// (0x00082b45) list_double_large_graphic_phob2_cc_pane

0xeb98,	// (0x00082b6c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xeb98,	// (0x00082b6c) list_double_large_graphic_phob2_cc_pane_g1

0xeba9,	// (0x00082b7d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xeba9,	// (0x00082b7d) list_double_large_graphic_phob2_cc_pane_g2

0x6cb7,	// (0x0007ac8b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6cb7,	// (0x0007ac8b) list_double_large_graphic_phob2_cc_pane_g3

0x6cc3,	// (0x0007ac97) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6cc3,	// (0x0007ac97) list_double_large_graphic_phob2_cc_pane_g4

0x6ccf,	// (0x0007aca3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6ccf,	// (0x0007aca3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00083f18) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00083f18) list_double_large_graphic_phob2_cc_pane_g

0x6cdb,	// (0x0007acaf) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6cdb,	// (0x0007acaf) list_double_large_graphic_phob2_cc_pane_t1

0x6d04,	// (0x0007acd8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6d04,	// (0x0007acd8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00083f23) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00083f23) list_double_large_graphic_phob2_cc_pane_t

0x18a6,	// (0x0007587a) list_highlight_pane_cp025_ParamLimits

0x18a6,	// (0x0007587a) list_highlight_pane_cp025

0x145d,	// (0x00075431) bg_button_pane_cp033_ParamLimits

0x1873,	// (0x00075847) phob2_cc_button_pane_g1_ParamLimits

0x187f,	// (0x00075853) phob2_cc_button_pane_t1_ParamLimits

0x1894,	// (0x00075868) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00083f13) phob2_cc_button_pane_t_ParamLimits

0x7004,	// (0x0007afd8) popup_wgtman_window

0x48d1,	// (0x000788a5) scroll_pane_cp038

0xe68b,	// (0x0008265f) wgtman_btn_pane_cp_01_ParamLimits

0xe68b,	// (0x0008265f) wgtman_btn_pane_cp_01

0x18b4,	// (0x00075888) wgtman_content_pane

0x18bd,	// (0x00075891) wgtman_heading_pane

0x08db,	// (0x000748af) bg_heading_pane_cp02

0x18c6,	// (0x0007589a) wgtman_heading_pane_g1

0x18ce,	// (0x000758a2) wgtman_heading_pane_t1

0x18dc,	// (0x000758b0) scroll_pane_cp036

0x18e4,	// (0x000758b8) wgtman_list_pane

0x18ec,	// (0x000758c0) wgtman_list_pane_t1_ParamLimits

0x18ec,	// (0x000758c0) wgtman_list_pane_t1

0xbe63,	// (0x0007fe37) cam4_grid_pane

0x5f85,	// (0x00079f59) bg_button_pane_cp015_ParamLimits

0xcb51,	// (0x00080b25) bg_button_pane_cp016_ParamLimits

0xcb64,	// (0x00080b38) bg_button_pane_cp017_ParamLimits

0x5fc9,	// (0x00079f9d) popup_vitu2_query_window_g3_ParamLimits

0x5fc9,	// (0x00079f9d) popup_vitu2_query_window_g3

0x6042,	// (0x0007a016) popup_vitu2_query_window_t6_ParamLimits

0x6042,	// (0x0007a016) popup_vitu2_query_window_t6

0x606d,	// (0x0007a041) popup_vitu2_query_window_t7_ParamLimits

0x606d,	// (0x0007a041) popup_vitu2_query_window_t7

0x146b,	// (0x0007543f) cam4_grid_pane_g1

0x1474,	// (0x00075448) cam4_grid_pane_g2

0x1906,	// (0x000758da) cam4_grid_pane_g3

0x190f,	// (0x000758e3) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00083f28) cam4_grid_pane_g

0x7d8e,	// (0x0007bd62) aid_placing_vt_slider_lsc_ParamLimits

0x80da,	// (0x0007c0ae) vidtel_button_pane_ParamLimits

0x80da,	// (0x0007c0ae) vidtel_button_pane

0x08db,	// (0x000748af) bg_button_pane_cp034

0x191a,	// (0x000758ee) vidtel_button_pane_g1

0x1922,	// (0x000758f6) vidtel_button_pane_t1

0x49d3,	// (0x000789a7) aid_size_vtel_slider_touch

0x4a8c,	// (0x00078a60) scroll_pane_cp039

0xd871,	// (0x00081845) ncim_query_button_pane_cp01_ParamLimits

0xd890,	// (0x00081864) ncimui_query_pane_g1_ParamLimits

0x145d,	// (0x00075431) input_focus_pane_cp012_ParamLimits

0x0366,	// (0x0007433a) ncim_query_entry_pane_t1_ParamLimits

0x4a8c,	// (0x00078a60) scroll_pane_cp039_ParamLimits

0x23ef,	// (0x000763c3) navi_pane_bcale_mc_g1

0x23f7,	// (0x000763cb) navi_pane_bcale_mc_t1

0x0db5,	// (0x00074d89) main_sp_fs_email_pane_g1

0x0dc1,	// (0x00074d95) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00083cb9) main_sp_fs_email_pane_g

0x1009,	// (0x00074fdd) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1009,	// (0x00074fdd) list_single_cale_mrui_row_pane_g3

0x6b92,	// (0x0007ab66) list_single_recal_day_pane_g5_event_pane

0x6ba8,	// (0x0007ab7c) list_single_recal_day_pane_g7

0x1938,	// (0x0007590c) list_recal_day_event_pane_cp01

0x1941,	// (0x00075915) list_recal_vselct_arw_lo_pane_cp01

0x1949,	// (0x0007591d) list_recal_vselct_arw_up_pane_cp01

0x1951,	// (0x00075925) list_recal_vselct_pane_cp01

0x49f5,	// (0x000789c9) list_recal_day_event_pane_cp01_g1

0x6d2d,	// (0x0007ad01) list_recal_day_event_pane_cp01_t1

0x6bb0,	// (0x0007ab84) list_single_recal_day_pane_t1_ParamLimits

0x6bc2,	// (0x0007ab96) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00083e16) list_single_recal_day_pane_t_ParamLimits

0x1323,	// (0x000752f7) bg_notes_pane_ParamLimits

0x13c6,	// (0x0007539a) list_notes_pane_ParamLimits

0x7362,	// (0x0007b336) scroll_pane_cp06_ParamLimits

0x13e8,	// (0x000753bc) main_notes_pane_ParamLimits

0x08db,	// (0x000748af) main_welc_pane

0xebb5,	// (0x00082b89) main_welc_body_pane_ParamLimits

0xebb5,	// (0x00082b89) main_welc_body_pane

0xebcf,	// (0x00082ba3) main_welc_opti_pane_ParamLimits

0xebcf,	// (0x00082ba3) main_welc_opti_pane

0xec02,	// (0x00082bd6) main_welc_pane_t1_ParamLimits

0xec02,	// (0x00082bd6) main_welc_pane_t1

0xec1c,	// (0x00082bf0) main_welc_body_row_pane_ParamLimits

0xec1c,	// (0x00082bf0) main_welc_body_row_pane

0x4c37,	// (0x00078c0b) main_welc_opti_row_pane_ParamLimits

0x4c37,	// (0x00078c0b) main_welc_opti_row_pane

0x195b,	// (0x0007592f) main_welc_opti_row_pane_g1

0xec41,	// (0x00082c15) main_welc_opti_row_pane_t1

0x1963,	// (0x00075937) main_welc_body_row_pane_t1

0x1679,	// (0x0007564d) popup_notif_wgt_heading_pane

0x1693,	// (0x00075667) aid_size_list_notif_wgt_del_ParamLimits

0x16a0,	// (0x00075674) list_notif_wgt_row_pane_g1_ParamLimits

0x16ac,	// (0x00075680) list_notif_wgt_row_pane_g2_ParamLimits

0x16bb,	// (0x0007568f) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00083e7d) list_notif_wgt_row_pane_g_ParamLimits

0x16c8,	// (0x0007569c) list_notif_wgt_row_pane_t1_ParamLimits

0x16de,	// (0x000756b2) list_notif_wgt_row_pane_t2_ParamLimits

0x16f0,	// (0x000756c4) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00083e84) list_notif_wgt_row_pane_t_ParamLimits

0xe71d,	// (0x000826f1) listrow_wgtman_pane_g1_ParamLimits

0xe72a,	// (0x000826fe) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00083ead) listrow_wgtman_pane_g_ParamLimits

0x6c34,	// (0x0007ac08) listrow_wgtman_pane_t1_ParamLimits

0x6c4c,	// (0x0007ac20) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00083eb2) listrow_wgtman_pane_t_ParamLimits

0x6c72,	// (0x0007ac46) wait_bar_pane_cp09_ParamLimits

0x08db,	// (0x000748af) bg_popup_heading_pane_cp02

0x1972,	// (0x00075946) popup_notif_wgt_heading_pane_g1

0x197a,	// (0x0007594e) popup_notif_wgt_heading_pane_t1

0x08db,	// (0x000748af) main_vids_pane

0x08db,	// (0x000748af) vids_listscroll_pane

0xec50,	// (0x00082c24) scroll_pane_cp040

0x08db,	// (0x000748af) vids_list_pane

0xec5b,	// (0x00082c2f) vids_list_double_pane_ParamLimits

0xec5b,	// (0x00082c2f) vids_list_double_pane

0xec75,	// (0x00082c49) vids_list_double_pane_g1

0xec7e,	// (0x00082c52) vids_list_double_pane_t1

0xec8e,	// (0x00082c62) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00083f36) vids_list_double_pane_t

0x145d,	// (0x00075431) main_ncimui_pane_ParamLimits

0xd6c8,	// (0x0008169c) main_ncimui_pane_g1_ParamLimits

0xd6d4,	// (0x000816a8) main_ncimui_pane_g2_ParamLimits

0xd6d4,	// (0x000816a8) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00083bbe) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00083bbe) main_ncimui_pane_g

0xebe8,	// (0x00082bbc) main_welc_pane_g1_ParamLimits

0xebe8,	// (0x00082bbc) main_welc_pane_g1

0xebf4,	// (0x00082bc8) main_welc_pane_g2_ParamLimits

0xebf4,	// (0x00082bc8) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00083f31) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00083f31) main_welc_pane_g

0x1323,	// (0x000752f7) listscroll_mce_pane_ParamLimits

0x2544,	// (0x00076518) wait_bar_pane_cp10

0x394a,	// (0x0007791e) main_cale_day_pane_ParamLimits

0x394a,	// (0x0007791e) main_cale_week_pane_ParamLimits

0x1323,	// (0x000752f7) main_messa_pane_ParamLimits

0xb292,	// (0x0007f266) main_clock2_btn_pane_ParamLimits

0xb292,	// (0x0007f266) main_clock2_btn_pane

0x4172,	// (0x00078146) main_clock2_btn_pane_cp01_ParamLimits

0x4172,	// (0x00078146) main_clock2_btn_pane_cp01

0x0fda,	// (0x00074fae) list_cale_mrui_pane_ParamLimits

0x1726,	// (0x000756fa) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00083e8b) main_cf0_pane_g

0xe8dd,	// (0x000828b1) area_left_week_number_pane_ParamLimits

0xe8f0,	// (0x000828c4) area_top_day_name_pane_ParamLimits

0xe8fe,	// (0x000828d2) frame_month_view_pane_ParamLimits

0x181c,	// (0x000757f0) grid_month_view_pane_ParamLimits

0x182a,	// (0x000757fe) frm_month_g1_ParamLimits

0xe97c,	// (0x00082950) frm_month_g2_ParamLimits

0xe98d,	// (0x00082961) frm_month_g3_ParamLimits

0xe99e,	// (0x00082972) frm_month_g4_ParamLimits

0xe9af,	// (0x00082983) frm_month_g5_ParamLimits

0xe9c2,	// (0x00082996) frm_month_g6_ParamLimits

0xe9d5,	// (0x000829a9) frm_month_g7_ParamLimits

0x1837,	// (0x0007580b) frm_month_g8_ParamLimits

0xe9e8,	// (0x000829bc) frm_month_g9_ParamLimits

0xe9f5,	// (0x000829c9) frm_month_g10_ParamLimits

0xea02,	// (0x000829d6) frm_month_g11_ParamLimits

0xea0f,	// (0x000829e3) frm_month_g12_ParamLimits

0xea1c,	// (0x000829f0) frm_month_g13_ParamLimits

0xea29,	// (0x000829fd) frm_month_g14_ParamLimits

0xea38,	// (0x00082a0c) frm_month_g15_ParamLimits

0xea47,	// (0x00082a1b) frm_month_g16_ParamLimits

0xff08,	// (0x00083edc) frm_month_g_ParamLimits

0x1844,	// (0x00075818) cell_top_day_name_pane_t1_ParamLimits

0xea56,	// (0x00082a2a) cell_area_left_week_number_pane_g1_ParamLimits

0xea65,	// (0x00082a39) cell_area_left_week_number_pane_t1_ParamLimits

0x3fca,	// (0x00077f9e) cell_month_view_pane_g1_ParamLimits

0xea7b,	// (0x00082a4f) cell_month_view_pane_t1_ParamLimits

0x131b,	// (0x000752ef) main_clock2_btn_pane_g1

0x1988,	// (0x0007595c) main_clock2_btn_pane_t1

0x145d,	// (0x00075431) listscroll_cmail_pane_ParamLimits

0x0db5,	// (0x00074d89) main_sp_fs_email_pane_g1_ParamLimits

0x0dc1,	// (0x00074d95) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00083cb9) main_sp_fs_email_pane_g_ParamLimits

0x10e0,	// (0x000750b4) list_recal_day_pane_ParamLimits

0x10f1,	// (0x000750c5) mian_recal_day_pane_t1

0x6581,	// (0x0007a555) list_single_dyc_row_text_pane_t4_ParamLimits

0x6581,	// (0x0007a555) list_single_dyc_row_text_pane_t4

0x65b8,	// (0x0007a58c) list_single_dyc_row_text_pane_t5_ParamLimits

0x65b8,	// (0x0007a58c) list_single_dyc_row_text_pane_t5

0x662e,	// (0x0007a602) list_single_dyc_row_text_pane_t6_ParamLimits

0x662e,	// (0x0007a602) list_single_dyc_row_text_pane_t6

0x8f05,	// (0x0007ced9) aid_mgn_list_cale_time_pane

0x145d,	// (0x00075431) main_gallery2_pane_ParamLimits

0x4188,	// (0x0007815c) main_clock2_pane_cp01_t1

0x4198,	// (0x0007816c) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x00083798) main_clock2_pane_cp01_t

0x77a0,	// (0x0007b774) cale_week_scroll_pane_g16_ParamLimits

0x77a0,	// (0x0007b774) cale_week_scroll_pane_g16

0x1ae6,	// (0x00075aba) vorec_slider_pane

0x1922,	// (0x000758f6) vidtel_button_pane_t1_ParamLimits

0xe35f,	// (0x00082333) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe35f,	// (0x00082333) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe36c,	// (0x00082340) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe36c,	// (0x00082340) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x00083e39) main_fs_bigclock_clock_pane_g_ParamLimits

0xe378,	// (0x0008234c) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe38b,	// (0x0008235f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x00083e42) main_fs_bigclock_clock_pane_t_ParamLimits

0xab2f,	// (0x0007eb03) main_mup3_lyrics_pane_ParamLimits

0xab2f,	// (0x0007eb03) main_mup3_lyrics_pane

0xecc2,	// (0x00082c96) main_mup3_lyrics_pane_t1_ParamLimits

0xecc2,	// (0x00082c96) main_mup3_lyrics_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
