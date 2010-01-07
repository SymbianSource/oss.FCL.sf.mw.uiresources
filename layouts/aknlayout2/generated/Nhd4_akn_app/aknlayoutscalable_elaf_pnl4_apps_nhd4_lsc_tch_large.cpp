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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00070127 };

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
0x2534,	// (0x0007265b) Screen

0x2540,	// (0x00072667) application_window

0x259a,	// (0x000726c1) area_bottom_pane_ParamLimits

0x259a,	// (0x000726c1) area_bottom_pane

0x25f7,	// (0x0007271e) area_top_pane_ParamLimits

0x25f7,	// (0x0007271e) area_top_pane

0x2654,	// (0x0007277b) call_video_uplink_pane_ParamLimits

0x2654,	// (0x0007277b) call_video_uplink_pane

0x2685,	// (0x000727ac) main_pane_ParamLimits

0x2685,	// (0x000727ac) main_pane

0xd02c,	// (0x0007d153) context_pane

0x5fcb,	// (0x000760f2) navi_pane

0x5ff3,	// (0x0007611a) popup_cale_events_window_ParamLimits

0x5ff3,	// (0x0007611a) popup_cale_events_window

0xd03f,	// (0x0007d166) popup_mup_playback_window

0x600b,	// (0x00076132) signal_pane

0x324b,	// (0x00073372) main_browser_pane

0xbb7e,	// (0x0007bca5) main_burst_pane

0x5d2b,	// (0x00075e52) main_calc_pane

0xbb7e,	// (0x0007bca5) main_cale_day_pane

0x324b,	// (0x00073372) main_cale_month_pane

0xbb7e,	// (0x0007bca5) main_cale_week_pane

0xbb7e,	// (0x0007bca5) main_call_pane

0x2c80,	// (0x00072da7) main_call_poc_pane

0xbb7e,	// (0x0007bca5) main_camera_pane

0xbb7e,	// (0x0007bca5) main_chi_dic_pane

0xba0d,	// (0x0007bb34) main_clock_pane

0x2c80,	// (0x00072da7) main_fmradio_pane

0xbb7e,	// (0x0007bca5) main_graph_messa_pane

0x2c80,	// (0x00072da7) main_help_pane

0x324b,	// (0x00073372) main_im_pane

0x2edb,	// (0x00073002) main_image_pane_ParamLimits

0x2edb,	// (0x00073002) main_image_pane

0x2c80,	// (0x00072da7) main_location2_pane

0xbb7e,	// (0x0007bca5) main_location_pane

0x2c80,	// (0x00072da7) main_messa_pane

0x2c80,	// (0x00072da7) main_mp2_pane

0xbb7e,	// (0x0007bca5) main_mp_pane

0x2c80,	// (0x00072da7) main_msg_pane

0x2c80,	// (0x00072da7) main_mup_eq_pane

0x2c80,	// (0x00072da7) main_mup_pane

0xbb7e,	// (0x0007bca5) main_notes_pane

0x2c80,	// (0x00072da7) main_pec_pane

0x2c80,	// (0x00072da7) main_phob_pane

0x2c80,	// (0x00072da7) main_pinb_pane

0x2c80,	// (0x00072da7) main_postcard_pane

0x2c80,	// (0x00072da7) main_qdial_pane

0xbb7e,	// (0x0007bca5) main_skin_pane

0x2c80,	// (0x00072da7) main_smil2_pane

0xbb7e,	// (0x0007bca5) main_smil_pane

0xbb7e,	// (0x0007bca5) main_video_pane

0xbb7e,	// (0x0007bca5) main_video_tele_pane

0x2edb,	// (0x00073002) main_viewer_pane_ParamLimits

0x2edb,	// (0x00073002) main_viewer_pane

0xbb7e,	// (0x0007bca5) main_vorec_pane

0x5d7f,	// (0x00075ea6) popup_blid_sat_info_window_ParamLimits

0x5d7f,	// (0x00075ea6) popup_blid_sat_info_window

0x5dd7,	// (0x00075efe) popup_dyc_status_message_window_ParamLimits

0x5dd7,	// (0x00075efe) popup_dyc_status_message_window

0x5def,	// (0x00075f16) popup_grid_large_graphic_window_ParamLimits

0x5def,	// (0x00075f16) popup_grid_large_graphic_window

0x5ea5,	// (0x00075fcc) popup_loc_request_window_ParamLimits

0x5ea5,	// (0x00075fcc) popup_loc_request_window

0x5fa3,	// (0x000760ca) popup_wml_address_window_ParamLimits

0x5fa3,	// (0x000760ca) popup_wml_address_window

0x5b65,	// (0x00075c8c) call_muted_g1

0x5815,	// (0x0007593c) popup_call_audio_conf_window_ParamLimits

0x5815,	// (0x0007593c) popup_call_audio_conf_window

0x5b79,	// (0x00075ca0) popup_call_audio_first_window_ParamLimits

0x5b79,	// (0x00075ca0) popup_call_audio_first_window

0x5bef,	// (0x00075d16) popup_call_audio_in_window_ParamLimits

0x5bef,	// (0x00075d16) popup_call_audio_in_window

0x5c2b,	// (0x00075d52) popup_call_audio_out_window_ParamLimits

0x5c2b,	// (0x00075d52) popup_call_audio_out_window

0x5c65,	// (0x00075d8c) popup_call_audio_second_window_ParamLimits

0x5c65,	// (0x00075d8c) popup_call_audio_second_window

0x5cbb,	// (0x00075de2) popup_call_audio_wait_window_ParamLimits

0x5cbb,	// (0x00075de2) popup_call_audio_wait_window

0x5cf0,	// (0x00075e17) popup_number_entry_window_ParamLimits

0x5cf0,	// (0x00075e17) popup_number_entry_window

0x2816,	// (0x0007293d) bg_popup_call_pane_cp05_ParamLimits

0x2816,	// (0x0007293d) bg_popup_call_pane_cp05

0x2836,	// (0x0007295d) popup_number_entry_window_t1

0x2849,	// (0x00072970) popup_number_entry_window_t2

0x285b,	// (0x00072982) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0007f222) popup_number_entry_window_t

0x28a2,	// (0x000729c9) text_title_cp2

0x28b5,	// (0x000729dc) bg_popup_call_pane_cp_ParamLimits

0x28b5,	// (0x000729dc) bg_popup_call_pane_cp

0x28c3,	// (0x000729ea) call_thumbnail_pane

0x28cb,	// (0x000729f2) popup_call_audio_in_window_g1_ParamLimits

0x28cb,	// (0x000729f2) popup_call_audio_in_window_g1

0x28d7,	// (0x000729fe) popup_call_audio_in_window_g2_ParamLimits

0x28d7,	// (0x000729fe) popup_call_audio_in_window_g2

0x28e3,	// (0x00072a0a) popup_call_audio_in_window_g3_ParamLimits

0x28e3,	// (0x00072a0a) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0007f22b) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0007f22b) popup_call_audio_in_window_g

0x28ef,	// (0x00072a16) popup_call_audio_in_window_t1_ParamLimits

0x28ef,	// (0x00072a16) popup_call_audio_in_window_t1

0x290a,	// (0x00072a31) popup_call_audio_in_window_t2_ParamLimits

0x290a,	// (0x00072a31) popup_call_audio_in_window_t2

0x2925,	// (0x00072a4c) popup_call_audio_in_window_t3_ParamLimits

0x2925,	// (0x00072a4c) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0007f232) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0007f232) popup_call_audio_in_window_t

0x28b5,	// (0x000729dc) bg_popup_call_pane_cp01_ParamLimits

0x28b5,	// (0x000729dc) bg_popup_call_pane_cp01

0x28c3,	// (0x000729ea) call_thumbnail_pane_cp02

0x2938,	// (0x00072a5f) call_type_pane_cp022

0x2940,	// (0x00072a67) popup_call_audio_out_window_g1_ParamLimits

0x2940,	// (0x00072a67) popup_call_audio_out_window_g1

0x2952,	// (0x00072a79) popup_call_audio_out_window_g2_ParamLimits

0x2952,	// (0x00072a79) popup_call_audio_out_window_g2

0x295e,	// (0x00072a85) popup_call_audio_out_window_g3_ParamLimits

0x295e,	// (0x00072a85) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0007f239) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0007f239) popup_call_audio_out_window_g

0x2970,	// (0x00072a97) popup_call_audio_out_window_t1_ParamLimits

0x2970,	// (0x00072a97) popup_call_audio_out_window_t1

0x2988,	// (0x00072aaf) popup_call_audio_out_window_t2_ParamLimits

0x2988,	// (0x00072aaf) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0007f240) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0007f240) popup_call_audio_out_window_t

0x299d,	// (0x00072ac4) bg_popup_call_pane_ParamLimits

0x299d,	// (0x00072ac4) bg_popup_call_pane

0x2a21,	// (0x00072b48) call_thumbnail_pane_cp_ParamLimits

0x2a21,	// (0x00072b48) call_thumbnail_pane_cp

0x2a45,	// (0x00072b6c) call_type_pane_cp01_ParamLimits

0x2a45,	// (0x00072b6c) call_type_pane_cp01

0x2a89,	// (0x00072bb0) popup_call_audio_first_window_g1_ParamLimits

0x2a89,	// (0x00072bb0) popup_call_audio_first_window_g1

0x2ad5,	// (0x00072bfc) popup_call_audio_first_window_g2_ParamLimits

0x2ad5,	// (0x00072bfc) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0007f245) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0007f245) popup_call_audio_first_window_g

0x2b19,	// (0x00072c40) popup_call_audio_first_window_t1_ParamLimits

0x2b19,	// (0x00072c40) popup_call_audio_first_window_t1

0x2bc5,	// (0x00072cec) popup_call_audio_first_window_t4_ParamLimits

0x2bc5,	// (0x00072cec) popup_call_audio_first_window_t4

0x2c51,	// (0x00072d78) popup_call_audio_first_window_t5_ParamLimits

0x2c51,	// (0x00072d78) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0007f24a) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0007f24a) popup_call_audio_first_window_t

0x2c80,	// (0x00072da7) bg_popup_call_pane_cp02

0x2c8a,	// (0x00072db1) call_type_pane_cp023

0x2c92,	// (0x00072db9) popup_call_audio_wait_window_g1

0x2c9a,	// (0x00072dc1) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0007f251) popup_call_audio_wait_window_g

0x2ca2,	// (0x00072dc9) popup_call_audio_wait_window_t3

0x2cb0,	// (0x00072dd7) bg_popup_call_pane_cp03_ParamLimits

0x2cb0,	// (0x00072dd7) bg_popup_call_pane_cp03

0x2d10,	// (0x00072e37) call_thumbnail_pane_cp011_ParamLimits

0x2d10,	// (0x00072e37) call_thumbnail_pane_cp011

0x2d1c,	// (0x00072e43) call_type_pane_cp034_ParamLimits

0x2d1c,	// (0x00072e43) call_type_pane_cp034

0x2d58,	// (0x00072e7f) popup_call_audio_second_window_g1_ParamLimits

0x2d58,	// (0x00072e7f) popup_call_audio_second_window_g1

0x2d94,	// (0x00072ebb) popup_call_audio_second_window_g2_ParamLimits

0x2d94,	// (0x00072ebb) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0007f256) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0007f256) popup_call_audio_second_window_g

0x2dd0,	// (0x00072ef7) popup_call_audio_second_window_t1_ParamLimits

0x2dd0,	// (0x00072ef7) popup_call_audio_second_window_t1

0x2e51,	// (0x00072f78) popup_call_audio_second_window_t2_ParamLimits

0x2e51,	// (0x00072f78) popup_call_audio_second_window_t2

0x2e87,	// (0x00072fae) popup_call_audio_second_window_t3_ParamLimits

0x2e87,	// (0x00072fae) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0007f25b) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0007f25b) popup_call_audio_second_window_t

0x2c80,	// (0x00072da7) bg_popup_call_pane_cp04

0x2ebd,	// (0x00072fe4) list_conf_pane

0x2ec5,	// (0x00072fec) popup_call_audio_conf_window_t1

0x2ed3,	// (0x00072ffa) call_thumbnail_pane_g1

0x2edb,	// (0x00073002) bg_pinb_pane_ParamLimits

0x2edb,	// (0x00073002) bg_pinb_pane

0x2ee9,	// (0x00073010) find_pinb_pane

0x2ef2,	// (0x00073019) listscroll_pinb_pane_ParamLimits

0x2ef2,	// (0x00073019) listscroll_pinb_pane

0x2f01,	// (0x00073028) pinb_bg_pane_g1

0x2f0b,	// (0x00073032) pinb_bg_pane_g2

0x2f17,	// (0x0007303e) pinb_bg_pane_g3

0x2f23,	// (0x0007304a) pinb_bg_pane_g4

0x2f2f,	// (0x00073056) pinb_bg_pane_g5

0x2f3b,	// (0x00073062) pinb_bg_pane_g6

0x2f46,	// (0x0007306d) pinb_bg_pane_g7

0x2f51,	// (0x00073078) pinb_bg_pane_g8

0x2f5c,	// (0x00073083) pinb_bg_pane_g9

0x2f66,	// (0x0007308d) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0007f262) pinb_bg_pane_g

0x2f83,	// (0x000730aa) grid_pinb_pane

0x2f8c,	// (0x000730b3) list_pinb_pane

0x2f95,	// (0x000730bc) scroll_pane_cp01_ParamLimits

0x2f95,	// (0x000730bc) scroll_pane_cp01

0x2fa7,	// (0x000730ce) find_pinb_pane_g1_ParamLimits

0x2fa7,	// (0x000730ce) find_pinb_pane_g1

0x2fbf,	// (0x000730e6) find_pinb_pane_t1

0x2fd1,	// (0x000730f8) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0007f27c) find_pinb_pane_t

0x2fe6,	// (0x0007310d) input_focus_pane_cp01_ParamLimits

0x2fe6,	// (0x0007310d) input_focus_pane_cp01

0x2ff2,	// (0x00073119) cell_pinb_pane_ParamLimits

0x2ff2,	// (0x00073119) cell_pinb_pane

0x3024,	// (0x0007314b) cell_pinb_pane_g1_ParamLimits

0x3024,	// (0x0007314b) cell_pinb_pane_g1

0x3034,	// (0x0007315b) cell_pinb_pane_g2_ParamLimits

0x3034,	// (0x0007315b) cell_pinb_pane_g2

0x3040,	// (0x00073167) cell_pinb_pane_g3_ParamLimits

0x3040,	// (0x00073167) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0007f281) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0007f281) cell_pinb_pane_g

0x2c80,	// (0x00072da7) grid_highlight_pane_cp01

0x304c,	// (0x00073173) list_pinb_item_pane_ParamLimits

0x304c,	// (0x00073173) list_pinb_item_pane

0x2c80,	// (0x00072da7) list_highlight_pane_cp02

0x3060,	// (0x00073187) list_pinb_item_pane_g1_ParamLimits

0x3060,	// (0x00073187) list_pinb_item_pane_g1

0x306d,	// (0x00073194) list_pinb_item_pane_g2_ParamLimits

0x306d,	// (0x00073194) list_pinb_item_pane_g2

0x3079,	// (0x000731a0) list_pinb_item_pane_g3_ParamLimits

0x3079,	// (0x000731a0) list_pinb_item_pane_g3

0x308a,	// (0x000731b1) list_pinb_item_pane_g4_ParamLimits

0x308a,	// (0x000731b1) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0007f288) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0007f288) list_pinb_item_pane_g

0x3096,	// (0x000731bd) list_pinb_item_pane_t1_ParamLimits

0x3096,	// (0x000731bd) list_pinb_item_pane_t1

0x30cb,	// (0x000731f2) calc_display_pane

0x30f1,	// (0x00073218) calc_paper_pane

0x3114,	// (0x0007323b) grid_calc_pane

0x2c80,	// (0x00072da7) bg_list_pane_cp01

0x3140,	// (0x00073267) clock_g1

0x3148,	// (0x0007326f) clock_g2

0x0001,

0xf16a,	// (0x0007f291) clock_g

0x3150,	// (0x00073277) clock_t1_ParamLimits

0x3150,	// (0x00073277) clock_t1

0x3165,	// (0x0007328c) clock_t2_ParamLimits

0x3165,	// (0x0007328c) clock_t2

0x3177,	// (0x0007329e) clock_t3_ParamLimits

0x3177,	// (0x0007329e) clock_t3

0x3189,	// (0x000732b0) clock_t4_ParamLimits

0x3189,	// (0x000732b0) clock_t4

0x319b,	// (0x000732c2) clock_t5_ParamLimits

0x319b,	// (0x000732c2) clock_t5

0x31b0,	// (0x000732d7) clock_t6_ParamLimits

0x31b0,	// (0x000732d7) clock_t6

0x31c2,	// (0x000732e9) clock_t7_ParamLimits

0x31c2,	// (0x000732e9) clock_t7

0x31d4,	// (0x000732fb) clock_t8_ParamLimits

0x31d4,	// (0x000732fb) clock_t8

0x31e8,	// (0x0007330f) clock_t9_ParamLimits

0x31e8,	// (0x0007330f) clock_t9

0x0008,

0xf16f,	// (0x0007f296) clock_t_ParamLimits

0xf16f,	// (0x0007f296) clock_t

0x31fc,	// (0x00073323) popup_clock_analogue_window_cp02

0x31fc,	// (0x00073323) popup_clock_digital_window_cp01

0x3204,	// (0x0007332b) listscroll_help_pane

0x2c80,	// (0x00072da7) phob_pre_status_pane

0x320e,	// (0x00073335) grid_qdial_pane

0x2c80,	// (0x00072da7) listscroll_mce_pane

0x3218,	// (0x0007333f) bg_notes_pane

0x3222,	// (0x00073349) list_notes_pane

0x322c,	// (0x00073353) scroll_pane_cp06

0x3237,	// (0x0007335e) bg_calc_paper_pane

0xb278,	// (0x0007b39f) list_calc_pane

0x324b,	// (0x00073372) bg_calc_display_pane

0x3257,	// (0x0007337e) calc_display_pane_t1

0x3269,	// (0x00073390) calc_display_pane_t2

0xb292,	// (0x0007b3b9) calc_display_pane_t3

0x0002,

0xf182,	// (0x0007f2a9) calc_display_pane_t

0x327b,	// (0x000733a2) cell_calc_pane_ParamLimits

0x327b,	// (0x000733a2) cell_calc_pane

0x32b0,	// (0x000733d7) bg_calc_paper_pane_g1

0x32bc,	// (0x000733e3) bg_calc_paper_pane_g2

0x32c8,	// (0x000733ef) bg_calc_paper_pane_g3

0x32d4,	// (0x000733fb) bg_calc_paper_pane_g4

0x32e0,	// (0x00073407) bg_calc_paper_pane_g5

0x32ec,	// (0x00073413) bg_calc_paper_pane_g6

0x32fb,	// (0x00073422) bg_calc_paper_pane_g7

0x330a,	// (0x00073431) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0007f2b0) bg_calc_paper_pane_g

0x331d,	// (0x00073444) calc_bg_paper_pane_g9

0x3330,	// (0x00073457) list_calc_item_pane_ParamLimits

0x3330,	// (0x00073457) list_calc_item_pane

0x3346,	// (0x0007346d) list_calc_item_pane_g1

0xb2a4,	// (0x0007b3cb) list_calc_item_pane_t1_ParamLimits

0xb2a4,	// (0x0007b3cb) list_calc_item_pane_t1

0x3353,	// (0x0007347a) list_calc_item_pane_t2_ParamLimits

0x3353,	// (0x0007347a) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0007f2c1) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0007f2c1) list_calc_item_pane_t

0x336f,	// (0x00073496) cell_calc_pane_g1

0x3391,	// (0x000734b8) grid_highlight_pane_cp02

0x33b3,	// (0x000734da) bg_calc_display_pane_g1

0xb2b6,	// (0x0007b3dd) bg_calc_display_pane_g2

0x33bc,	// (0x000734e3) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0007f2cb) bg_calc_display_pane_g

0x33c5,	// (0x000734ec) cell_qdial_pane_ParamLimits

0x33c5,	// (0x000734ec) cell_qdial_pane

0x33d9,	// (0x00073500) cell_qdial_pane_g1_ParamLimits

0x33d9,	// (0x00073500) cell_qdial_pane_g1

0x33ef,	// (0x00073516) cell_qdial_pane_g2_ParamLimits

0x33ef,	// (0x00073516) cell_qdial_pane_g2

0x3400,	// (0x00073527) cell_qdial_pane_g3_ParamLimits

0x3400,	// (0x00073527) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0007f2d2) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0007f2d2) cell_qdial_pane_g

0x3422,	// (0x00073549) cell_qdial_pane_t1_ParamLimits

0x3422,	// (0x00073549) cell_qdial_pane_t1

0x343a,	// (0x00073561) cell_qdial_pane_t2_ParamLimits

0x343a,	// (0x00073561) cell_qdial_pane_t2

0x344d,	// (0x00073574) cell_qdial_pane_t3_ParamLimits

0x344d,	// (0x00073574) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0007f2db) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0007f2db) cell_qdial_pane_t

0x2c80,	// (0x00072da7) grid_highlight_pane_cp04

0x3460,	// (0x00073587) thumbnail_qdial_pane_ParamLimits

0x3460,	// (0x00073587) thumbnail_qdial_pane

0x34bc,	// (0x000735e3) list_help_pane

0x34c5,	// (0x000735ec) scroll_pane_cp02

0x34ce,	// (0x000735f5) help_list_pane_t1_ParamLimits

0x34ce,	// (0x000735f5) help_list_pane_t1

0xb2c0,	// (0x0007b3e7) bg_notes_pane_g2

0xb2c8,	// (0x0007b3ef) bg_notes_pane_g3

0xb2d0,	// (0x0007b3f7) notes_bg_pane_g1

0xb2d8,	// (0x0007b3ff) notes_bg_pane_g4

0xb2e0,	// (0x0007b407) notes_bg_pane_g5

0xb2e8,	// (0x0007b40f) notes_bg_pane_g6

0xb2f0,	// (0x0007b417) notes_bg_pane_g7

0xb2f8,	// (0x0007b41f) notes_bg_pane_g8

0xb300,	// (0x0007b427) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0007f2f9) notes_bg_pane_g

0x094f,	// (0x00070a76) list_notes_text_pane_ParamLimits

0x094f,	// (0x00070a76) list_notes_text_pane

0x34ee,	// (0x00073615) list_notes_text_pane_g1

0x1b42,	// (0x00071c69) list_notes_text_pane_t1

0x324b,	// (0x00073372) listscroll_cale_week_pane

0x3525,	// (0x0007364c) bg_cale_heading_pane

0x353d,	// (0x00073664) bg_cale_pane_cp01

0x3556,	// (0x0007367d) cale_week_corner_pane

0x3567,	// (0x0007368e) cale_week_day_heading_pane

0x357f,	// (0x000736a6) cale_week_scroll_pane_g1

0x3594,	// (0x000736bb) cale_week_scroll_pane_g2

0x35a5,	// (0x000736cc) cale_week_scroll_pane_g3

0x35b6,	// (0x000736dd) cale_week_scroll_pane_g4

0x35c7,	// (0x000736ee) cale_week_scroll_pane_g5

0x35d8,	// (0x000736ff) cale_week_scroll_pane_g6

0x35e9,	// (0x00073710) cale_week_scroll_pane_g7

0x35fa,	// (0x00073721) cale_week_scroll_pane_g8

0x360b,	// (0x00073732) cale_week_scroll_pane_g9

0x361c,	// (0x00073743) cale_week_scroll_pane_g10

0x362d,	// (0x00073754) cale_week_scroll_pane_g11

0x363e,	// (0x00073765) cale_week_scroll_pane_g12

0x364f,	// (0x00073776) cale_week_scroll_pane_g13

0x3660,	// (0x00073787) cale_week_scroll_pane_g14

0x3671,	// (0x00073798) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0007f308) cale_week_scroll_pane_g

0x3682,	// (0x000737a9) cale_week_time_pane

0x3693,	// (0x000737ba) grid_cale_week_pane

0x36b8,	// (0x000737df) scroll_pane_cp08

0x36d2,	// (0x000737f9) cell_cale_week_pane_ParamLimits

0x36d2,	// (0x000737f9) cell_cale_week_pane

0x370e,	// (0x00073835) cale_week_day_heading_pane_t1

0x3722,	// (0x00073849) cale_week_day_heading_pane_t2

0x3736,	// (0x0007385d) cale_week_day_heading_pane_t3

0x374a,	// (0x00073871) cale_week_day_heading_pane_t4

0x375e,	// (0x00073885) cale_week_day_heading_pane_t5

0x3772,	// (0x00073899) cale_week_day_heading_pane_t6

0x3786,	// (0x000738ad) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0007f327) cale_week_day_heading_pane_t

0x379a,	// (0x000738c1) bg_cale_side_pane

0x37a8,	// (0x000738cf) cale_week_time_pane_t1

0x37c0,	// (0x000738e7) cale_week_time_pane_t2

0x37d8,	// (0x000738ff) cale_week_time_pane_t3

0x37f0,	// (0x00073917) cale_week_time_pane_t4

0x3808,	// (0x0007392f) cale_week_time_pane_t5

0x3820,	// (0x00073947) cale_week_time_pane_t6

0x3838,	// (0x0007395f) cale_week_time_pane_t7

0x3850,	// (0x00073977) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0007f336) cale_week_time_pane_t

0x3868,	// (0x0007398f) cell_cale_week_pane_g2

0x3884,	// (0x000739ab) cell_cale_week_pane_g3_ParamLimits

0x3884,	// (0x000739ab) cell_cale_week_pane_g3

0x389c,	// (0x000739c3) grid_highlight_pane_cp07

0x38a4,	// (0x000739cb) listscroll_gms_pane

0x38ae,	// (0x000739d5) grid_gms_pane

0x38b7,	// (0x000739de) listscroll_gms_pane_g1

0x38bf,	// (0x000739e6) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0007f347) listscroll_gms_pane_g

0x38c7,	// (0x000739ee) scroll_pane_cp010

0x38d2,	// (0x000739f9) cell_gms_pane_ParamLimits

0x38d2,	// (0x000739f9) cell_gms_pane

0x38e5,	// (0x00073a0c) cell_gms_pane_g1

0x38ed,	// (0x00073a14) cell_gms_pane_g2

0x34ee,	// (0x00073615) cell_gms_pane_g3

0x38f5,	// (0x00073a1c) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0007f34c) cell_gms_pane_g

0x38fe,	// (0x00073a25) grid_highlight_pane_cp09

0x5b0d,	// (0x00075c34) phob_pre_status_pane_g1

0x5b15,	// (0x00075c3c) phob_pre_status_pane_g2

0x5b1d,	// (0x00075c44) phob_pre_status_pane_g3

0x5b25,	// (0x00075c4c) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0007f73b) phob_pre_status_pane_g

0x5b37,	// (0x00075c5e) phob_pre_status_pane_t1

0x5b45,	// (0x00075c6c) phob_pre_status_pane_t2

0x5b55,	// (0x00075c7c) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0007f746) phob_pre_status_pane_t

0x2c80,	// (0x00072da7) bg_list_pane_cp05

0xb310,	// (0x0007b437) grid_vorec_pane

0xb318,	// (0x0007b43f) vorec_t1

0xb326,	// (0x0007b44d) vorec_t2

0xb334,	// (0x0007b45b) vorec_t3

0xb342,	// (0x0007b469) vorec_t4

0xb350,	// (0x0007b477) vorec_t5

0xb35e,	// (0x0007b485) vorec_t6

0x0006,

0xf22e,	// (0x0007f355) vorec_t

0xb37a,	// (0x0007b4a1) wait_bar_pane_cp01

0x3906,	// (0x00073a2d) cell_vorec_pane_ParamLimits

0x3906,	// (0x00073a2d) cell_vorec_pane

0x3919,	// (0x00073a40) cell_vorec_pane_g1

0x2c80,	// (0x00072da7) grid_highlight_pane_cp05

0x393b,	// (0x00073a62) cams_zoom_pane

0x394a,	// (0x00073a71) image_vga_pane

0x3964,	// (0x00073a8b) main_camera_pane_g1

0x3976,	// (0x00073a9d) main_camera_pane_g2

0x3988,	// (0x00073aaf) main_camera_pane_g3

0x399a,	// (0x00073ac1) main_camera_pane_g4

0x39ac,	// (0x00073ad3) main_camera_pane_g5

0x39be,	// (0x00073ae5) main_camera_pane_g6

0x39d0,	// (0x00073af7) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0007f364) main_camera_pane_g

0x39ee,	// (0x00073b15) main_camera_pane_t1

0x3a04,	// (0x00073b2b) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0007f375) main_camera_pane_t

0x3a40,	// (0x00073b67) cams_zoom_pane_cp_ParamLimits

0x3a40,	// (0x00073b67) cams_zoom_pane_cp

0x3a68,	// (0x00073b8f) image_cif_pane_ParamLimits

0x3a68,	// (0x00073b8f) image_cif_pane

0x3aa3,	// (0x00073bca) image_subqcif_pane

0x3aab,	// (0x00073bd2) main_video_pane_g1_ParamLimits

0x3aab,	// (0x00073bd2) main_video_pane_g1

0x3acf,	// (0x00073bf6) main_video_pane_g2_ParamLimits

0x3acf,	// (0x00073bf6) main_video_pane_g2

0x3b05,	// (0x00073c2c) main_video_pane_g3_ParamLimits

0x3b05,	// (0x00073c2c) main_video_pane_g3

0x3b35,	// (0x00073c5c) main_video_pane_g4_ParamLimits

0x3b35,	// (0x00073c5c) main_video_pane_g4

0x3b65,	// (0x00073c8c) main_video_pane_g5_ParamLimits

0x3b65,	// (0x00073c8c) main_video_pane_g5

0x3b7f,	// (0x00073ca6) main_video_pane_g6_ParamLimits

0x3b7f,	// (0x00073ca6) main_video_pane_g6

0x0006,

0xf253,	// (0x0007f37a) main_video_pane_g_ParamLimits

0xf253,	// (0x0007f37a) main_video_pane_g

0x3baa,	// (0x00073cd1) main_video_pane_t1_ParamLimits

0x3baa,	// (0x00073cd1) main_video_pane_t1

0x3bf3,	// (0x00073d1a) cams_zoom_pane_g1

0x3bfc,	// (0x00073d23) cams_zoom_pane_g2

0x3c05,	// (0x00073d2c) cams_zoom_pane_g3

0x3c0e,	// (0x00073d35) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0007f389) cams_zoom_pane_g

0x3c2b,	// (0x00073d52) grid_cams_pane

0x3c45,	// (0x00073d6c) linegrid_cams_pane

0x3c58,	// (0x00073d7f) cell_cams_pane_ParamLimits

0x3c58,	// (0x00073d7f) cell_cams_pane

0x3c78,	// (0x00073d9f) cams_burst_image_pane

0x3c80,	// (0x00073da7) cell_cams_pane_g1

0x2c80,	// (0x00072da7) grid_highlight_pane_cp03

0x336f,	// (0x00073496) mp_bg_pane_g1

0x2c80,	// (0x00072da7) bg_list_pane_cp03

0xcf04,	// (0x0007d02b) bg_mp_pane

0xcf0c,	// (0x0007d033) grid_mp_pane

0xcf14,	// (0x0007d03b) media_player_g1

0xcf1c,	// (0x0007d043) media_player_t1

0xcf2a,	// (0x0007d051) media_player_t2

0xcf38,	// (0x0007d05f) media_player_t3

0xcf46,	// (0x0007d06d) media_player_t4

0xcf54,	// (0x0007d07b) media_player_t5

0xcf62,	// (0x0007d089) media_player_t6

0xcf70,	// (0x0007d097) media_player_t7

0x0006,

0xf5fe,	// (0x0007f725) media_player_t

0xcf7e,	// (0x0007d0a5) wait_bar_pane_cp02

0xf5e3,	// (0x0007f70a) main_usb_pane_t

0x5b04,	// (0x00075c2b) cell_mp_pane

0x336f,	// (0x00073496) cell_mp_pane_g1

0x2c80,	// (0x00072da7) grid_highlight_pane_cp06

0x3c88,	// (0x00073daf) grid_skin_colour_pane

0x3c90,	// (0x00073db7) list_highlight_pane_cp03

0x3c98,	// (0x00073dbf) skin_g1

0x3ca0,	// (0x00073dc7) skin_t1

0x3caf,	// (0x00073dd6) skin_t2

0x0001,

0xf297,	// (0x0007f3be) skin_t

0x3cbd,	// (0x00073de4) cell_skin_colour_pane_ParamLimits

0x3cbd,	// (0x00073de4) cell_skin_colour_pane

0x3cdd,	// (0x00073e04) cell_skin_colour_pane_g1

0x3d35,	// (0x00073e5c) call_video_g1_ParamLimits

0x3d35,	// (0x00073e5c) call_video_g1

0x3d51,	// (0x00073e78) call_video_g2_ParamLimits

0x3d51,	// (0x00073e78) call_video_g2

0x0001,

0xf29c,	// (0x0007f3c3) call_video_g_ParamLimits

0xf29c,	// (0x0007f3c3) call_video_g

0x3d87,	// (0x00073eae) call_video_uplink_pane_cp1_ParamLimits

0x3d87,	// (0x00073eae) call_video_uplink_pane_cp1

0x3dcb,	// (0x00073ef2) call_video_uplink_pane_cp2

0x3e0d,	// (0x00073f34) video_down_crop_pane_ParamLimits

0x3e0d,	// (0x00073f34) video_down_crop_pane

0x3ed3,	// (0x00073ffa) video_down_pane_ParamLimits

0x3ed3,	// (0x00073ffa) video_down_pane

0x3fa4,	// (0x000740cb) video_down_subqcif_pane_ParamLimits

0x3fa4,	// (0x000740cb) video_down_subqcif_pane

0x3fbc,	// (0x000740e3) video_down_subqcif_pane_cp_ParamLimits

0x3fbc,	// (0x000740e3) video_down_subqcif_pane_cp

0x3fe0,	// (0x00074107) im_reading_pane_ParamLimits

0x3fe0,	// (0x00074107) im_reading_pane

0x3ff2,	// (0x00074119) im_writing_pane_ParamLimits

0x3ff2,	// (0x00074119) im_writing_pane

0x4010,	// (0x00074137) im_reading_pane_t1

0x404c,	// (0x00074173) list_im_pane

0x405d,	// (0x00074184) scroll_pane_cp07

0x4076,	// (0x0007419d) im_writing_pane_t1_ParamLimits

0x4076,	// (0x0007419d) im_writing_pane_t1

0x408b,	// (0x000741b2) im_writing_pane_t2_ParamLimits

0x408b,	// (0x000741b2) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0007f3cd) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0007f3cd) im_writing_pane_t

0x2c80,	// (0x00072da7) input_focus_pane_cp04

0x2c80,	// (0x00072da7) input_focus_pane_cp05

0x40a8,	// (0x000741cf) list_im_single_pane_ParamLimits

0x40a8,	// (0x000741cf) list_im_single_pane

0x40be,	// (0x000741e5) list_single_im_pane_t1

0x5ac4,	// (0x00075beb) blid_accuracy_pane

0x5acc,	// (0x00075bf3) blid_compass_pane

0x5ad6,	// (0x00075bfd) main_location_t1

0x5ae6,	// (0x00075c0d) main_location_t2

0x5af6,	// (0x00075c1d) main_location_t3

0x0002,

0xf60d,	// (0x0007f734) main_location_t

0x2c80,	// (0x00072da7) aid_levels_location

0x336f,	// (0x00073496) blid_accuracy_pane_g1

0x336f,	// (0x00073496) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0007f42f) blid_accuracy_pane_g

0x40f8,	// (0x0007421f) wml_content_pane

0x4136,	// (0x0007425d) wml_button_pane_ParamLimits

0x4136,	// (0x0007425d) wml_button_pane

0x414a,	// (0x00074271) wml_list_single_large_pane_ParamLimits

0x414a,	// (0x00074271) wml_list_single_large_pane

0x4161,	// (0x00074288) wml_list_single_medium_pane_ParamLimits

0x4161,	// (0x00074288) wml_list_single_medium_pane

0x4179,	// (0x000742a0) wml_list_single_small_pane_ParamLimits

0x4179,	// (0x000742a0) wml_list_single_small_pane

0x4197,	// (0x000742be) wml_selection_box_pane_ParamLimits

0x4197,	// (0x000742be) wml_selection_box_pane

0x41aa,	// (0x000742d1) wml_list_single_pane_t1

0x41b9,	// (0x000742e0) wml_list_single_medium_pane_t1

0x41c8,	// (0x000742ef) wml_list_single_large_pane_t1

0x41d7,	// (0x000742fe) input_focus_pane_cp02_ParamLimits

0x41d7,	// (0x000742fe) input_focus_pane_cp02

0x41ea,	// (0x00074311) wml_selection_box_pane_g1

0x41f3,	// (0x0007431a) wml_selection_box_pane_t1_ParamLimits

0x41f3,	// (0x0007431a) wml_selection_box_pane_t1

0x2edb,	// (0x00073002) bg_wml_button_pane_ParamLimits

0x2edb,	// (0x00073002) bg_wml_button_pane

0x420b,	// (0x00074332) wml_button_pane_g1

0x4213,	// (0x0007433a) wml_button_pane_t1

0x420b,	// (0x00074332) wml_button_bg_pane_g1

0x4223,	// (0x0007434a) wml_button_bg_pane_g2

0x422b,	// (0x00074352) wml_button_bg_pane_g3

0x4233,	// (0x0007435a) wml_button_bg_pane_g4

0x423b,	// (0x00074362) wml_button_bg_pane_g5

0x4243,	// (0x0007436a) wml_button_bg_pane_g6

0x424b,	// (0x00074372) wml_button_bg_pane_g7

0x4253,	// (0x0007437a) wml_button_bg_pane_g8

0x425b,	// (0x00074382) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0007f3d2) wml_button_bg_pane_g

0x4263,	// (0x0007438a) bg_list_pane_cp02

0x426b,	// (0x00074392) mce_header_pane_ParamLimits

0x426b,	// (0x00074392) mce_header_pane

0x4281,	// (0x000743a8) mce_icon_pane

0x4281,	// (0x000743a8) mce_image_pane

0x428a,	// (0x000743b1) mce_text_pane_ParamLimits

0x428a,	// (0x000743b1) mce_text_pane

0x429d,	// (0x000743c4) scroll_pane_cp03

0x412e,	// (0x00074255) scroll_pane_cp04

0xb440,	// (0x0007b567) scroll_pane_cp05_ParamLimits

0xb440,	// (0x0007b567) scroll_pane_cp05

0x42a7,	// (0x000743ce) mce_header_field_pane_ParamLimits

0x42a7,	// (0x000743ce) mce_header_field_pane

0x42be,	// (0x000743e5) mce_header_field_pane_2_ParamLimits

0x42be,	// (0x000743e5) mce_header_field_pane_2

0x42d4,	// (0x000743fb) mce_header_field_pane_3

0x42dc,	// (0x00074403) list_single_mce_message_pane_ParamLimits

0x42dc,	// (0x00074403) list_single_mce_message_pane

0x42f4,	// (0x0007441b) list_single_mce_smart_pane_ParamLimits

0x42f4,	// (0x0007441b) list_single_mce_smart_pane

0xb44c,	// (0x0007b573) input_focus_pane_cp03

0xb455,	// (0x0007b57c) list_header_data_pane

0x4317,	// (0x0007443e) mce_header_field_pane_t1

0x4327,	// (0x0007444e) list_single_mce_header_pane_ParamLimits

0x4327,	// (0x0007444e) list_single_mce_header_pane

0xb45d,	// (0x0007b584) list_single_mce_header_pane_t1

0xb46c,	// (0x0007b593) list_single_mce_message_pane_g1

0xb474,	// (0x0007b59b) list_single_mce_message_pane_t1

0x4359,	// (0x00074480) bg_cale_heading_pane_cp01_ParamLimits

0x4359,	// (0x00074480) bg_cale_heading_pane_cp01

0xb482,	// (0x0007b5a9) bg_cale_pane_cp02_ParamLimits

0xb482,	// (0x0007b5a9) bg_cale_pane_cp02

0x437c,	// (0x000744a3) cale_month_corner_pane

0x4392,	// (0x000744b9) cale_month_day_heading_pane_ParamLimits

0x4392,	// (0x000744b9) cale_month_day_heading_pane

0x43bd,	// (0x000744e4) cale_month_pane_g1_ParamLimits

0x43bd,	// (0x000744e4) cale_month_pane_g1

0x43d9,	// (0x00074500) cale_month_pane_g2_ParamLimits

0x43d9,	// (0x00074500) cale_month_pane_g2

0x43f2,	// (0x00074519) cale_month_pane_g3_ParamLimits

0x43f2,	// (0x00074519) cale_month_pane_g3

0x441e,	// (0x00074545) cale_month_pane_g4_ParamLimits

0x441e,	// (0x00074545) cale_month_pane_g4

0x444a,	// (0x00074571) cale_month_pane_g5_ParamLimits

0x444a,	// (0x00074571) cale_month_pane_g5

0x4476,	// (0x0007459d) cale_month_pane_g6_ParamLimits

0x4476,	// (0x0007459d) cale_month_pane_g6

0x44a2,	// (0x000745c9) cale_month_pane_g7_ParamLimits

0x44a2,	// (0x000745c9) cale_month_pane_g7

0x44ce,	// (0x000745f5) cale_month_pane_g8_ParamLimits

0x44ce,	// (0x000745f5) cale_month_pane_g8

0x4502,	// (0x00074629) cale_month_pane_g9_ParamLimits

0x4502,	// (0x00074629) cale_month_pane_g9

0x4534,	// (0x0007465b) cale_month_pane_g10_ParamLimits

0x4534,	// (0x0007465b) cale_month_pane_g10

0x4566,	// (0x0007468d) cale_month_pane_g11_ParamLimits

0x4566,	// (0x0007468d) cale_month_pane_g11

0x4598,	// (0x000746bf) cale_month_pane_g12_ParamLimits

0x4598,	// (0x000746bf) cale_month_pane_g12

0x45ca,	// (0x000746f1) cale_month_pane_g13_ParamLimits

0x45ca,	// (0x000746f1) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0007f3e5) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0007f3e5) cale_month_pane_g

0x45fc,	// (0x00074723) cale_month_week_pane

0x460d,	// (0x00074734) grid_cale_month_pane_ParamLimits

0x460d,	// (0x00074734) grid_cale_month_pane

0x4633,	// (0x0007475a) cale_month_day_heading_pane_t1

0x4691,	// (0x000747b8) cale_month_day_heading_pane_t2

0x46f6,	// (0x0007481d) cale_month_day_heading_pane_t3

0x475b,	// (0x00074882) cale_month_day_heading_pane_t4

0x47c0,	// (0x000748e7) cale_month_day_heading_pane_t5

0x4825,	// (0x0007494c) cale_month_day_heading_pane_t6

0x488a,	// (0x000749b1) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0007f400) cale_month_day_heading_pane_t

0x379a,	// (0x000738c1) bg_cale_side_pane_cp01

0x48ef,	// (0x00074a16) cale_month_week_pane_t1

0x4906,	// (0x00074a2d) cale_month_week_pane_t2

0x491d,	// (0x00074a44) cale_month_week_pane_t3

0x4934,	// (0x00074a5b) cale_month_week_pane_t4

0x494b,	// (0x00074a72) cale_month_week_pane_t5

0x4962,	// (0x00074a89) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0007f40f) cale_month_week_pane_t

0x4979,	// (0x00074aa0) cell_cale_month_pane_ParamLimits

0x4979,	// (0x00074aa0) cell_cale_month_pane

0xb4e1,	// (0x0007b608) cell_cale_month_pane_g1

0x4a1f,	// (0x00074b46) cell_cale_month_pane_t1_ParamLimits

0x4a1f,	// (0x00074b46) cell_cale_month_pane_t1

0x389c,	// (0x000739c3) grid_highlight_pane_cp08

0x336f,	// (0x00073496) main_smil_g1

0x4a3b,	// (0x00074b62) smil_status_pane

0xb4ed,	// (0x0007b614) smil_text_pane

0xce24,	// (0x0007cf4b) bg_popup_call3_rect_pane_g8

0xce2c,	// (0x0007cf53) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0007f6c8) bg_popup_call3_rect_pane_g

0xd0a6,	// (0x0007d1cd) smil_status_volume_pane_g1

0xb4f7,	// (0x0007b61e) smil_status_pane_t1

0xd0d9,	// (0x0007d200) volume_smil_pane

0xb50e,	// (0x0007b635) list_smil_text_pane

0x4a50,	// (0x00074b77) scroll_pane_cp011

0x4a5b,	// (0x00074b82) smil_text_list_pane_t1_ParamLimits

0x4a5b,	// (0x00074b82) smil_text_list_pane_t1

0xb518,	// (0x0007b63f) aid_volume_smil_ParamLimits

0xb518,	// (0x0007b63f) aid_volume_smil

0x336f,	// (0x00073496) smil_volume_pane_g1

0x336f,	// (0x00073496) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0007f42f) smil_volume_pane_g

0x324b,	// (0x00073372) listscroll_cale_day_pane

0xb53a,	// (0x0007b661) bg_cale_pane

0xb552,	// (0x0007b679) list_cale_pane

0xb563,	// (0x0007b68a) scroll_pane_cp09

0xb574,	// (0x0007b69b) cale_bg_pane_g1

0xb57c,	// (0x0007b6a3) cale_bg_pane_g2

0xb584,	// (0x0007b6ab) cale_bg_pane_g3

0xb58c,	// (0x0007b6b3) cale_bg_pane_g4

0xb594,	// (0x0007b6bb) cale_bg_pane_g5

0xb59c,	// (0x0007b6c3) cale_bg_pane_g6

0xb5a4,	// (0x0007b6cb) cale_bg_pane_g7

0xb5ac,	// (0x0007b6d3) cale_bg_pane_g8

0xb5b4,	// (0x0007b6db) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0007f434) cale_bg_pane_g

0x4aaf,	// (0x00074bd6) list_cale_time_pane_ParamLimits

0x4aaf,	// (0x00074bd6) list_cale_time_pane

0x4ac4,	// (0x00074beb) list_cale_time_pane_g1_ParamLimits

0x4ac4,	// (0x00074beb) list_cale_time_pane_g1

0xb5bc,	// (0x0007b6e3) list_cale_time_pane_g2_ParamLimits

0xb5bc,	// (0x0007b6e3) list_cale_time_pane_g2

0x4ad0,	// (0x00074bf7) list_cale_time_pane_g3_ParamLimits

0x4ad0,	// (0x00074bf7) list_cale_time_pane_g3

0x4aec,	// (0x00074c13) list_cale_time_pane_g4_ParamLimits

0x4aec,	// (0x00074c13) list_cale_time_pane_g4

0x4afa,	// (0x00074c21) list_cale_time_pane_g5_ParamLimits

0x4afa,	// (0x00074c21) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0007f447) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0007f447) list_cale_time_pane_g

0x4b08,	// (0x00074c2f) list_cale_time_pane_t1_ParamLimits

0x4b08,	// (0x00074c2f) list_cale_time_pane_t1

0x4b30,	// (0x00074c57) list_cale_time_pane_t2_ParamLimits

0x4b30,	// (0x00074c57) list_cale_time_pane_t2

0x4e03,	// (0x00074f2a) aid_blid_cardinal_pane

0x4e41,	// (0x00074f68) compass_pane_t4

0x4b58,	// (0x00074c7f) list_cale_time_pane_t4_ParamLimits

0x4b58,	// (0x00074c7f) list_cale_time_pane_t4

0x4e4f,	// (0x00074f76) compass_pane_t5

0x4e5d,	// (0x00074f84) compass_pane_t6

0x4e6b,	// (0x00074f92) compass_pane_t7

0xbad0,	// (0x0007bbf7) navi_pane_cc_t1

0xbc37,	// (0x0007bd5e) aid_phob_thumbnail_center_pane

0x54d0,	// (0x000755f7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0007f454) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0007f454) list_cale_time_pane_t

0x28b5,	// (0x000729dc) bg_popup_window_pane_cp02_ParamLimits

0x28b5,	// (0x000729dc) bg_popup_window_pane_cp02

0xb5d6,	// (0x0007b6fd) heading_pane_cp01_ParamLimits

0xb5d6,	// (0x0007b6fd) heading_pane_cp01

0xb5e2,	// (0x0007b709) loc_req_pane_ParamLimits

0xb5e2,	// (0x0007b709) loc_req_pane

0xb5f2,	// (0x0007b719) loc_type_pane_ParamLimits

0xb5f2,	// (0x0007b719) loc_type_pane

0xb604,	// (0x0007b72b) loc_type_pane_t1_ParamLimits

0xb604,	// (0x0007b72b) loc_type_pane_t1

0xb616,	// (0x0007b73d) loc_type_pane_t2_ParamLimits

0xb616,	// (0x0007b73d) loc_type_pane_t2

0xb628,	// (0x0007b74f) loc_type_pane_t3_ParamLimits

0xb628,	// (0x0007b74f) loc_type_pane_t3

0x0002,

0xf334,	// (0x0007f45b) loc_type_pane_t_ParamLimits

0xf334,	// (0x0007f45b) loc_type_pane_t

0xb63a,	// (0x0007b761) list_loc_req_pane

0xb644,	// (0x0007b76b) scroll_pane_cp012

0x4b80,	// (0x00074ca7) list_single_loc_request_popup_menu_pane_ParamLimits

0x4b80,	// (0x00074ca7) list_single_loc_request_popup_menu_pane

0xb64f,	// (0x0007b776) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb64f,	// (0x0007b776) list_single_loc_request_popup_menu_pane_g1

0xb65b,	// (0x0007b782) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb65b,	// (0x0007b782) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0007f462) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0007f462) list_single_loc_request_popup_menu_pane_g

0xb667,	// (0x0007b78e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb667,	// (0x0007b78e) list_single_loc_request_popup_menu_pane_t1

0x2edb,	// (0x00073002) bg_popup_window_pane_cp03_ParamLimits

0x2edb,	// (0x00073002) bg_popup_window_pane_cp03

0x08a6,	// (0x000709cd) heading_loc_req_pane_ParamLimits

0x08a6,	// (0x000709cd) heading_loc_req_pane

0x4b8d,	// (0x00074cb4) popup_dyc_status_message_window_g1_ParamLimits

0x4b8d,	// (0x00074cb4) popup_dyc_status_message_window_g1

0x4ba1,	// (0x00074cc8) popup_dyc_status_message_window_t1_ParamLimits

0x4ba1,	// (0x00074cc8) popup_dyc_status_message_window_t1

0x4bb6,	// (0x00074cdd) popup_dyc_status_message_window_t2_ParamLimits

0x4bb6,	// (0x00074cdd) popup_dyc_status_message_window_t2

0x4bcb,	// (0x00074cf2) popup_dyc_status_message_window_t3_ParamLimits

0x4bcb,	// (0x00074cf2) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0007f467) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0007f467) popup_dyc_status_message_window_t

0x2c80,	// (0x00072da7) bg_heading_pane_cp01

0xb67d,	// (0x0007b7a4) heading_loc_req_pane_g1

0xb685,	// (0x0007b7ac) heading_loc_req_pane_g2

0xb68d,	// (0x0007b7b4) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0007f46e) heading_loc_req_pane_g

0xb695,	// (0x0007b7bc) heading_loc_req_pane_t1

0xb71b,	// (0x0007b842) bg_popup_sub_pane_cp01_ParamLimits

0xb71b,	// (0x0007b842) bg_popup_sub_pane_cp01

0xb729,	// (0x0007b850) popup_cale_events_window_g1_ParamLimits

0xb729,	// (0x0007b850) popup_cale_events_window_g1

0xb749,	// (0x0007b870) popup_cale_events_window_g2_ParamLimits

0xb749,	// (0x0007b870) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0007f4a2) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0007f4a2) popup_cale_events_window_g

0xb769,	// (0x0007b890) popup_cale_events_window_t1_ParamLimits

0xb769,	// (0x0007b890) popup_cale_events_window_t1

0xb77b,	// (0x0007b8a2) popup_cale_events_window_t2_ParamLimits

0xb77b,	// (0x0007b8a2) popup_cale_events_window_t2

0xb7b9,	// (0x0007b8e0) popup_cale_events_window_t3_ParamLimits

0xb7b9,	// (0x0007b8e0) popup_cale_events_window_t3

0xb7f3,	// (0x0007b91a) popup_cale_events_window_t4_ParamLimits

0xb7f3,	// (0x0007b91a) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0007f4a7) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0007f4a7) popup_cale_events_window_t

0x4bff,	// (0x00074d26) call_type_pane

0x4c0f,	// (0x00074d36) popup_call_status_window_g1

0x4c23,	// (0x00074d4a) popup_call_status_window_g2

0x4c37,	// (0x00074d5e) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0007f4b0) popup_call_status_window_g

0xb829,	// (0x0007b950) call_type_pane_g1

0xb832,	// (0x0007b959) call_type_pane_g2

0x0001,

0xf390,	// (0x0007f4b7) call_type_pane_g

0x2c80,	// (0x00072da7) bg_popup_sub_pane_cp02

0xb83b,	// (0x0007b962) listscroll_popup_wml_pane

0xb843,	// (0x0007b96a) list_wml_pane

0xb84d,	// (0x0007b974) scroll_pane_cp013

0xb858,	// (0x0007b97f) list_single_graphic_popup_wml_pane_ParamLimits

0xb858,	// (0x0007b97f) list_single_graphic_popup_wml_pane

0x336f,	// (0x00073496) list_single_graphic_popup_wml_pane_g1

0xb86c,	// (0x0007b993) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0007f4bc) list_single_graphic_popup_wml_pane_g

0xb874,	// (0x0007b99b) list_single_graphic_popup_wml_pane_t1

0xb88a,	// (0x0007b9b1) aid_call_pane

0x2ed3,	// (0x00072ffa) popup_clock_analogue_window_g1

0x2ed3,	// (0x00072ffa) popup_clock_analogue_window_g2

0xb892,	// (0x0007b9b9) popup_clock_analogue_window_g3

0xb892,	// (0x0007b9b9) popup_clock_analogue_window_g4

0x336f,	// (0x00073496) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0007f4c1) popup_clock_analogue_window_g

0xb89a,	// (0x0007b9c1) popup_clock_analogue_window_t1

0xb8a8,	// (0x0007b9cf) clock_digital_number_pane_ParamLimits

0xb8a8,	// (0x0007b9cf) clock_digital_number_pane

0xb8b4,	// (0x0007b9db) clock_digital_number_pane_cp02_ParamLimits

0xb8b4,	// (0x0007b9db) clock_digital_number_pane_cp02

0xb8c0,	// (0x0007b9e7) clock_digital_number_pane_cp03_ParamLimits

0xb8c0,	// (0x0007b9e7) clock_digital_number_pane_cp03

0xb8cc,	// (0x0007b9f3) clock_digital_number_pane_cp04_ParamLimits

0xb8cc,	// (0x0007b9f3) clock_digital_number_pane_cp04

0xb8d8,	// (0x0007b9ff) clock_digital_separator_pane_ParamLimits

0xb8d8,	// (0x0007b9ff) clock_digital_separator_pane

0xb8e4,	// (0x0007ba0b) popup_clock_digital_window_t1

0x336f,	// (0x00073496) clock_digital_number_pane_g1

0x336f,	// (0x00073496) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0007f42f) clock_digital_number_pane_g

0x336f,	// (0x00073496) clock_digital_separator_pane_g1

0x336f,	// (0x00073496) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0007f42f) clock_digital_separator_pane_g

0x2c80,	// (0x00072da7) bg_popup_window_pane_cp04

0xb901,	// (0x0007ba28) heading_pane_cp03

0xb909,	// (0x0007ba30) listscroll_popup_gms_pane

0xb911,	// (0x0007ba38) grid_large_graphic_popup_pane

0xb91b,	// (0x0007ba42) listscroll_popup_gms_pane_g1

0xb923,	// (0x0007ba4a) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0007f4cc) listscroll_popup_gms_pane_g

0x412e,	// (0x00074255) scroll_pane_cp014

0xb92b,	// (0x0007ba52) cell_large_graphic_popup_pane_ParamLimits

0xb92b,	// (0x0007ba52) cell_large_graphic_popup_pane

0xb943,	// (0x0007ba6a) cell_large_graphic_popup_pane_g1_ParamLimits

0xb943,	// (0x0007ba6a) cell_large_graphic_popup_pane_g1

0xb94f,	// (0x0007ba76) cell_large_graphic_popup_pane_g2_ParamLimits

0xb94f,	// (0x0007ba76) cell_large_graphic_popup_pane_g2

0xb95b,	// (0x0007ba82) cell_large_graphic_popup_pane_g3_ParamLimits

0xb95b,	// (0x0007ba82) cell_large_graphic_popup_pane_g3

0xb968,	// (0x0007ba8f) cell_large_graphic_popup_pane_g4_ParamLimits

0xb968,	// (0x0007ba8f) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0007f4d1) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0007f4d1) cell_large_graphic_popup_pane_g

0xb978,	// (0x0007ba9f) grid_highlight_pane_cp010

0x336f,	// (0x00073496) bg_popup_call_pane_g1

0xb982,	// (0x0007baa9) list_single_graphic_popup_conf_pane_ParamLimits

0xb982,	// (0x0007baa9) list_single_graphic_popup_conf_pane

0xb994,	// (0x0007babb) list_highlight_pane_cp01

0xb99d,	// (0x0007bac4) list_single_graphic_popup_conf_pane_g1

0xb9a5,	// (0x0007bacc) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0007f4da) list_single_graphic_popup_conf_pane_g

0xb9ad,	// (0x0007bad4) list_single_graphic_popup_conf_pane_t1

0xb9bb,	// (0x0007bae2) linegrid_cams_pane_g1

0x4c47,	// (0x00074d6e) linegrid_cams_pane_g2

0x34ee,	// (0x00073615) linegrid_cams_pane_g3

0xb9c4,	// (0x0007baeb) linegrid_cams_pane_g4

0x4c50,	// (0x00074d77) linegrid_cams_pane_g5

0x4c59,	// (0x00074d80) linegrid_cams_pane_g6

0x38f5,	// (0x00073a1c) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0007f4df) linegrid_cams_pane_g

0xb9cd,	// (0x0007baf4) popup_clock_analogue_window

0xb9cd,	// (0x0007baf4) popup_clock_digital_window

0x2c80,	// (0x00072da7) popup_phob_thumbnail_window

0x336f,	// (0x00073496) call_video_uplink_pane_g1

0xb9d6,	// (0x0007bafd) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0007f4ee) call_video_uplink_pane_g

0x389c,	// (0x000739c3) video_uplink_pane

0xb9de,	// (0x0007bb05) mce_image_pane_g1

0x4c64,	// (0x00074d8b) mce_image_pane_g2

0x4c6c,	// (0x00074d93) mce_image_pane_g3

0x4c74,	// (0x00074d9b) mce_image_pane_g4

0x4c7c,	// (0x00074da3) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0007f4f3) mce_image_pane_g

0xb9e8,	// (0x0007bb0f) control_top_pane_stacon_cp01_ParamLimits

0xb9e8,	// (0x0007bb0f) control_top_pane_stacon_cp01

0xb9fc,	// (0x0007bb23) uni_indicator_pane_stacon_cp01_ParamLimits

0xb9fc,	// (0x0007bb23) uni_indicator_pane_stacon_cp01

0xba0d,	// (0x0007bb34) bg_popup_sub_pane_cp03

0x4c84,	// (0x00074dab) chi_dic_find_pane

0x4c8c,	// (0x00074db3) listscroll_chi_dic_pane

0x4c95,	// (0x00074dbc) main_pane_chidic_g1

0x4ca8,	// (0x00074dcf) chi_dic_find_pane_t1

0xba17,	// (0x0007bb3e) find_chidic_pane

0xba20,	// (0x0007bb47) chi_dic_list_pane_ParamLimits

0xba20,	// (0x0007bb47) chi_dic_list_pane

0xba31,	// (0x0007bb58) scroll_pane_cp020

0x4cb6,	// (0x00074ddd) find_chidic_pane_t1

0x2c80,	// (0x00072da7) input_focus_pane_cp06

0x4cc5,	// (0x00074dec) list_chi_dic_pane_ParamLimits

0x4cc5,	// (0x00074dec) list_chi_dic_pane

0xba39,	// (0x0007bb60) list_chi_dic_pane_t1_ParamLimits

0xba39,	// (0x0007bb60) list_chi_dic_pane_t1

0x2c80,	// (0x00072da7) list_highlight_pane_cp020

0xba4c,	// (0x0007bb73) bg_cale_heading_pane_g1

0x4cd9,	// (0x00074e00) bg_cale_heading_pane_g2

0x4ce1,	// (0x00074e08) bg_cale_heading_pane_g3

0x4ce9,	// (0x00074e10) bg_cale_heading_pane_g4

0x4cf3,	// (0x00074e1a) bg_cale_heading_pane_g5

0x4cfd,	// (0x00074e24) bg_cale_heading_pane_g6

0x4d05,	// (0x00074e2c) bg_cale_heading_pane_g7

0x4d0d,	// (0x00074e34) bg_cale_heading_pane_g8

0x4d17,	// (0x00074e3e) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0007f4fe) bg_cale_heading_pane_g

0xba4c,	// (0x0007bb73) bg_cale_side_pane_g1

0x4d21,	// (0x00074e48) bg_cale_side_pane_g2

0x4d29,	// (0x00074e50) bg_cale_side_pane_g3

0x4d31,	// (0x00074e58) bg_cale_side_pane_g4

0x4d39,	// (0x00074e60) bg_cale_side_pane_g5

0x4d41,	// (0x00074e68) bg_cale_side_pane_g6

0x4d49,	// (0x00074e70) bg_cale_side_pane_g7

0x4d51,	// (0x00074e78) bg_cale_side_pane_g8

0x4d59,	// (0x00074e80) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0007f511) bg_cale_side_pane_g

0x4d61,	// (0x00074e88) popup_call_status_window_ParamLimits

0x4d61,	// (0x00074e88) popup_call_status_window

0xba54,	// (0x0007bb7b) stacon_top_pane

0xba5c,	// (0x0007bb83) status_pane_ParamLimits

0xba5c,	// (0x0007bb83) status_pane

0xba71,	// (0x0007bb98) status_small_pane

0xba79,	// (0x0007bba0) control_pane

0x2c80,	// (0x00072da7) stacon_bottom_pane

0xba81,	// (0x0007bba8) list_single_mce_smart_pane_t1_ParamLimits

0xba81,	// (0x0007bba8) list_single_mce_smart_pane_t1

0xba94,	// (0x0007bbbb) list_single_mce_smart_pane_t2_ParamLimits

0xba94,	// (0x0007bbbb) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0007f524) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0007f524) list_single_mce_smart_pane_t

0x4da8,	// (0x00074ecf) compass_pane

0x4db1,	// (0x00074ed8) main_location2_pane_t1

0x4dc5,	// (0x00074eec) main_location2_pane_t2

0x4dd9,	// (0x00074f00) main_location2_pane_t3

0x0003,

0xf402,	// (0x0007f529) main_location2_pane_t

0xbab3,	// (0x0007bbda) compass_pane_g1_ParamLimits

0xbab3,	// (0x0007bbda) compass_pane_g1

0x4e23,	// (0x00074f4a) compass_pane_t1

0x4e32,	// (0x00074f59) compass_pane_t2

0x0005,

0xf40b,	// (0x0007f532) compass_pane_t

0x4e79,	// (0x00074fa0) text_secondary_cp61

0xbac7,	// (0x0007bbee) navi_pane_cams_g5

0xbaea,	// (0x0007bc11) navi_pane_im_t1

0xbaf8,	// (0x0007bc1f) navi_pane_mp_g1_ParamLimits

0xbaf8,	// (0x0007bc1f) navi_pane_mp_g1

0xbb0c,	// (0x0007bc33) navi_pane_mp_g2_ParamLimits

0xbb0c,	// (0x0007bc33) navi_pane_mp_g2

0xbb18,	// (0x0007bc3f) navi_pane_mp_g3_ParamLimits

0xbb18,	// (0x0007bc3f) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0007f546) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0007f546) navi_pane_mp_g

0xbb24,	// (0x0007bc4b) navi_pane_mp_t1

0xbb32,	// (0x0007bc59) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0007f54d) navi_pane_mp_t

0xbb6e,	// (0x0007bc95) navi_pane_vt_g1

0xbb24,	// (0x0007bc4b) navi_pane_vt_t1

0xbb76,	// (0x0007bc9d) navi_slider_pane

0xbb7e,	// (0x0007bca5) zooming_pane

0xbb86,	// (0x0007bcad) navi_slider_pane_g1

0xbb8f,	// (0x0007bcb6) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0007f554) navi_slider_pane_g

0xbbbc,	// (0x0007bce3) aid_levels_zoom

0xbbc4,	// (0x0007bceb) zooming_pane_g1

0xbbcc,	// (0x0007bcf3) zooming_pane_g2

0xbbcc,	// (0x0007bcf3) zooming_pane_g3

0x0002,

0xf43c,	// (0x0007f563) zooming_pane_g

0xbbd4,	// (0x0007bcfb) level_10_zoom

0xbbdd,	// (0x0007bd04) level_11_zoom

0xbbe6,	// (0x0007bd0d) level_1_zoom

0xbbef,	// (0x0007bd16) level_2_zoom

0xbbf8,	// (0x0007bd1f) level_3_zoom

0xbc01,	// (0x0007bd28) level_4_zoom

0xbc0a,	// (0x0007bd31) level_5_zoom

0xbc13,	// (0x0007bd3a) level_6_zoom

0xbc1c,	// (0x0007bd43) level_7_zoom

0xbc25,	// (0x0007bd4c) level_8_zoom

0xbc2e,	// (0x0007bd55) level_9_zoom

0xbc3f,	// (0x0007bd66) popup_phob_thumbnail_window_g1

0xbc47,	// (0x0007bd6e) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0007f56a) popup_phob_thumbnail_window_g

0xcf86,	// (0x0007d0ad) level_1_location

0xcf8e,	// (0x0007d0b5) level_2_location

0xcf96,	// (0x0007d0bd) level_3_location

0xcf9e,	// (0x0007d0c5) level_4_location

0xbb7e,	// (0x0007bca5) level_5_location

0x4fa2,	// (0x000750c9) mce_icon_pane_g1

0x4faa,	// (0x000750d1) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0007f56f) mce_icon_pane_g

0x4fb2,	// (0x000750d9) main_mup_pane_g1_ParamLimits

0x4fb2,	// (0x000750d9) main_mup_pane_g1

0x4fc8,	// (0x000750ef) main_mup_pane_g2_ParamLimits

0x4fc8,	// (0x000750ef) main_mup_pane_g2

0x4fe0,	// (0x00075107) main_mup_pane_g3_ParamLimits

0x4fe0,	// (0x00075107) main_mup_pane_g3

0x4ff8,	// (0x0007511f) main_mup_pane_g4_ParamLimits

0x4ff8,	// (0x0007511f) main_mup_pane_g4

0x5010,	// (0x00075137) main_mup_pane_g5_ParamLimits

0x5010,	// (0x00075137) main_mup_pane_g5

0x502c,	// (0x00075153) main_mup_pane_g6_ParamLimits

0x502c,	// (0x00075153) main_mup_pane_g6

0x5044,	// (0x0007516b) main_mup_pane_g7_ParamLimits

0x5044,	// (0x0007516b) main_mup_pane_g7

0x505c,	// (0x00075183) main_mup_pane_g8_ParamLimits

0x505c,	// (0x00075183) main_mup_pane_g8

0x5074,	// (0x0007519b) main_mup_pane_g9_ParamLimits

0x5074,	// (0x0007519b) main_mup_pane_g9

0x508e,	// (0x000751b5) main_mup_pane_g10_ParamLimits

0x508e,	// (0x000751b5) main_mup_pane_g10

0x50a8,	// (0x000751cf) main_mup_pane_g11_ParamLimits

0x50a8,	// (0x000751cf) main_mup_pane_g11

0x50bc,	// (0x000751e3) main_mup_pane_g12_ParamLimits

0x50bc,	// (0x000751e3) main_mup_pane_g12

0x50d2,	// (0x000751f9) main_mup_pane_g13_ParamLimits

0x50d2,	// (0x000751f9) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0007f574) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0007f574) main_mup_pane_g

0x50e6,	// (0x0007520d) main_mup_pane_t1_ParamLimits

0x50e6,	// (0x0007520d) main_mup_pane_t1

0x5100,	// (0x00075227) main_mup_pane_t2_ParamLimits

0x5100,	// (0x00075227) main_mup_pane_t2

0x5118,	// (0x0007523f) main_mup_pane_t3_ParamLimits

0x5118,	// (0x0007523f) main_mup_pane_t3

0x5130,	// (0x00075257) main_mup_pane_t4_ParamLimits

0x5130,	// (0x00075257) main_mup_pane_t4

0x514e,	// (0x00075275) main_mup_pane_t5_ParamLimits

0x514e,	// (0x00075275) main_mup_pane_t5

0x5163,	// (0x0007528a) main_mup_pane_t6_ParamLimits

0x5163,	// (0x0007528a) main_mup_pane_t6

0x0005,

0xf468,	// (0x0007f58f) main_mup_pane_t_ParamLimits

0xf468,	// (0x0007f58f) main_mup_pane_t

0x5175,	// (0x0007529c) mup_progress_pane_ParamLimits

0x5175,	// (0x0007529c) mup_progress_pane

0x5181,	// (0x000752a8) mup_visualizer_pane_ParamLimits

0x5181,	// (0x000752a8) mup_visualizer_pane

0x51b5,	// (0x000752dc) mup_volume_pane_ParamLimits

0x51b5,	// (0x000752dc) mup_volume_pane

0xbc4f,	// (0x0007bd76) mup_visualizer_pane_g1_ParamLimits

0xbc4f,	// (0x0007bd76) mup_visualizer_pane_g1

0xbc4f,	// (0x0007bd76) mup_visualizer_pane_g2_ParamLimits

0xbc4f,	// (0x0007bd76) mup_visualizer_pane_g2

0xbab3,	// (0x0007bbda) mup_visualizer_pane_g3_ParamLimits

0xbab3,	// (0x0007bbda) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0007f59c) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0007f59c) mup_visualizer_pane_g

0x336f,	// (0x00073496) mup_volume_pane_g1

0xbc65,	// (0x0007bd8c) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0007f5a3) mup_volume_pane_g

0x336f,	// (0x00073496) mup_progress_pane_g1

0xbc6e,	// (0x0007bd95) mup_progress_pane_g2

0xbc77,	// (0x0007bd9e) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0007f5a8) mup_progress_pane_g

0x2c80,	// (0x00072da7) bg_popup_window_pane_cp05

0xbc80,	// (0x0007bda7) heading_pane_cp02_ParamLimits

0xbc80,	// (0x0007bda7) heading_pane_cp02

0xbc9a,	// (0x0007bdc1) list_popup_blid_pane

0xbca2,	// (0x0007bdc9) list_blid_sat_info_pane_ParamLimits

0xbca2,	// (0x0007bdc9) list_blid_sat_info_pane

0xbcb5,	// (0x0007bddc) list_blid_sat_info_pane_g1

0xbcbd,	// (0x0007bde4) list_blid_sat_info_pane_t1

0x52cb,	// (0x000753f2) mup_equalizer_pane_ParamLimits

0x52cb,	// (0x000753f2) mup_equalizer_pane

0x52e4,	// (0x0007540b) mup_equalizer_pane_cp1_ParamLimits

0x52e4,	// (0x0007540b) mup_equalizer_pane_cp1

0x5301,	// (0x00075428) mup_equalizer_pane_cp2_ParamLimits

0x5301,	// (0x00075428) mup_equalizer_pane_cp2

0x531e,	// (0x00075445) mup_equalizer_pane_cp3_ParamLimits

0x531e,	// (0x00075445) mup_equalizer_pane_cp3

0x533f,	// (0x00075466) mup_equalizer_pane_cp4_ParamLimits

0x533f,	// (0x00075466) mup_equalizer_pane_cp4

0x5360,	// (0x00075487) mup_equalizer_pane_cp5

0x5374,	// (0x0007549b) mup_equalizer_pane_cp6

0x5388,	// (0x000754af) mup_equalizer_pane_cp7

0xcea4,	// (0x0007cfcb) bg_popup_call_poc_act_pane_g9

0xceac,	// (0x0007cfd3) bg_popup_call_poc_act_pane_g10

0xceb4,	// (0x0007cfdb) bg_popup_call_poc_act_pane_g11

0x000a,

0x2edb,	// (0x00073002) mup_scale_pane

0x336f,	// (0x00073496) mup_scale_pane_g1

0xbccb,	// (0x0007bdf2) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0007f5c4) mup_scale_pane_g

0xbcef,	// (0x0007be16) msg_data_pane

0xbcf7,	// (0x0007be1e) scroll_pane_cp017

0x1bfc,	// (0x00071d23) bg_list_pane_cp04_ParamLimits

0x1bfc,	// (0x00071d23) bg_list_pane_cp04

0xbcff,	// (0x0007be26) msg_data_pane_g1

0x53ae,	// (0x000754d5) msg_data_pane_g2

0x4c6c,	// (0x00074d93) msg_data_pane_g3

0x53b6,	// (0x000754dd) msg_data_pane_g4

0x53be,	// (0x000754e5) msg_data_pane_g5

0x53c6,	// (0x000754ed) msg_data_pane_g6

0x53ce,	// (0x000754f5) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0007f5d3) msg_data_pane_g

0x1c1c,	// (0x00071d43) msg_text_pane_ParamLimits

0x1c1c,	// (0x00071d43) msg_text_pane

0x53d6,	// (0x000754fd) qrid_highlight_pane_cp011_ParamLimits

0x53d6,	// (0x000754fd) qrid_highlight_pane_cp011

0x2c80,	// (0x00072da7) msg_body_pane

0x2c80,	// (0x00072da7) msg_header_pane

0xbd10,	// (0x0007be37) input_focus_pane_cp07

0x1c50,	// (0x00071d77) msg_header_pane_t1_ParamLimits

0x1c50,	// (0x00071d77) msg_header_pane_t1

0x1c64,	// (0x00071d8b) msg_header_pane_t2_ParamLimits

0x1c64,	// (0x00071d8b) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0007f5e7) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0007f5e7) msg_header_pane_t

0xbd25,	// (0x0007be4c) msg_body_pane_g1

0x1c76,	// (0x00071d9d) msg_body_pane_t1_ParamLimits

0x1c76,	// (0x00071d9d) msg_body_pane_t1

0x1ca7,	// (0x00071dce) msg_body_pane_t2_ParamLimits

0x1ca7,	// (0x00071dce) msg_body_pane_t2

0x1cb9,	// (0x00071de0) msg_body_pane_t3_ParamLimits

0x1cb9,	// (0x00071de0) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0007f5ec) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0007f5ec) msg_body_pane_t

0x5426,	// (0x0007554d) main_viewer_pane_g1_ParamLimits

0x5426,	// (0x0007554d) main_viewer_pane_g1

0x5434,	// (0x0007555b) main_viewer_pane_g2_ParamLimits

0x5434,	// (0x0007555b) main_viewer_pane_g2

0x5442,	// (0x00075569) main_viewer_pane_g3_ParamLimits

0x5442,	// (0x00075569) main_viewer_pane_g3

0x5451,	// (0x00075578) main_viewer_pane_g4_ParamLimits

0x5451,	// (0x00075578) main_viewer_pane_g4

0xbd45,	// (0x0007be6c) main_viewer_pane_g5_ParamLimits

0xbd45,	// (0x0007be6c) main_viewer_pane_g5

0xbd45,	// (0x0007be6c) main_viewer_pane_g7_ParamLimits

0xbd45,	// (0x0007be6c) main_viewer_pane_g7

0xbd57,	// (0x0007be7e) main_viewer_pane_g8_ParamLimits

0xbd57,	// (0x0007be7e) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0007f5fc) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0007f5fc) main_viewer_pane_g

0xbd6f,	// (0x0007be96) viewer_content_pane_ParamLimits

0xbd6f,	// (0x0007be96) viewer_content_pane

0x548d,	// (0x000755b4) main_postcard_pane_g1_ParamLimits

0x548d,	// (0x000755b4) main_postcard_pane_g1

0x54a3,	// (0x000755ca) main_postcard_pane_g2_ParamLimits

0x54a3,	// (0x000755ca) main_postcard_pane_g2

0x54b9,	// (0x000755e0) main_postcard_pane_g3_ParamLimits

0x54b9,	// (0x000755e0) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0007f60d) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0007f60d) main_postcard_pane_g

0x54d0,	// (0x000755f7) main_postcard_pane_g4

0xd0b9,	// (0x0007d1e0) smil_status_volume_pane_g2

0x5513,	// (0x0007563a) postcard_pane_ParamLimits

0x5513,	// (0x0007563a) postcard_pane

0xbd7d,	// (0x0007bea4) postcard_pane_g1_ParamLimits

0xbd7d,	// (0x0007bea4) postcard_pane_g1

0x5555,	// (0x0007567c) postcard_pane_g2_ParamLimits

0x5555,	// (0x0007567c) postcard_pane_g2

0x5561,	// (0x00075688) postcard_pane_g3_ParamLimits

0x5561,	// (0x00075688) postcard_pane_g3

0xbd8b,	// (0x0007beb2) postcard_pane_g4_ParamLimits

0xbd8b,	// (0x0007beb2) postcard_pane_g4

0x556d,	// (0x00075694) postcard_pane_g5_ParamLimits

0x556d,	// (0x00075694) postcard_pane_g5

0x5582,	// (0x000756a9) postcard_pane_g6_ParamLimits

0x5582,	// (0x000756a9) postcard_pane_g6

0xbd7d,	// (0x0007bea4) postcard_pane_g7_ParamLimits

0xbd7d,	// (0x0007bea4) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0007f61a) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0007f61a) postcard_pane_g

0x5596,	// (0x000756bd) main_mp2_pane_g1_ParamLimits

0x5596,	// (0x000756bd) main_mp2_pane_g1

0x55a2,	// (0x000756c9) main_mp2_pane_g2_ParamLimits

0x55a2,	// (0x000756c9) main_mp2_pane_g2

0x55ae,	// (0x000756d5) main_mp2_pane_g3_ParamLimits

0x55ae,	// (0x000756d5) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0007f629) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0007f629) main_mp2_pane_g

0x55ba,	// (0x000756e1) main_mp2_pane_t1_ParamLimits

0x55ba,	// (0x000756e1) main_mp2_pane_t1

0x55cf,	// (0x000756f6) main_mp2_pane_t2_ParamLimits

0x55cf,	// (0x000756f6) main_mp2_pane_t2

0x55e1,	// (0x00075708) main_mp2_pane_t3_ParamLimits

0x55e1,	// (0x00075708) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0007f630) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0007f630) main_mp2_pane_t

0xbd99,	// (0x0007bec0) pec_content_pane_ParamLimits

0xbd99,	// (0x0007bec0) pec_content_pane

0x412e,	// (0x00074255) scroll_pane_cp015

0xbdab,	// (0x0007bed2) pec_attribute_pane_ParamLimits

0xbdab,	// (0x0007bed2) pec_attribute_pane

0x55f3,	// (0x0007571a) pec_content_pane_g1_ParamLimits

0x55f3,	// (0x0007571a) pec_content_pane_g1

0xbdbb,	// (0x0007bee2) pec_content_pane_t1_ParamLimits

0xbdbb,	// (0x0007bee2) pec_content_pane_t1

0xbdcd,	// (0x0007bef4) pec_content_pane_t2_ParamLimits

0xbdcd,	// (0x0007bef4) pec_content_pane_t2

0x0001,

0xf510,	// (0x0007f637) pec_content_pane_t_ParamLimits

0xf510,	// (0x0007f637) pec_content_pane_t

0x5601,	// (0x00075728) list_single_graphic_pane_cp01_ParamLimits

0x5601,	// (0x00075728) list_single_graphic_pane_cp01

0x2edb,	// (0x00073002) bg_popup_sub_pane_cp04

0xbddf,	// (0x0007bf06) popup_mup_playback_window_g1

0xbdeb,	// (0x0007bf12) popup_mup_playback_window_t1

0xbe00,	// (0x0007bf27) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0007f63c) popup_mup_playback_window_t

0xbe37,	// (0x0007bf5e) main_image_pane_g1_ParamLimits

0xbe37,	// (0x0007bf5e) main_image_pane_g1

0xbe7a,	// (0x0007bfa1) scroll_pane_cp018_ParamLimits

0xbe7a,	// (0x0007bfa1) scroll_pane_cp018

0xbe92,	// (0x0007bfb9) scroll_pane_cp016_ParamLimits

0xbe92,	// (0x0007bfb9) scroll_pane_cp016

0x56d1,	// (0x000757f8) smil2_image_pane_ParamLimits

0x56d1,	// (0x000757f8) smil2_image_pane

0x5705,	// (0x0007582c) smil2_root_pane_ParamLimits

0x5705,	// (0x0007582c) smil2_root_pane

0x573d,	// (0x00075864) smil2_text_pane_ParamLimits

0x573d,	// (0x00075864) smil2_text_pane

0x2c80,	// (0x00072da7) bg_list_pane_cp06

0xbece,	// (0x0007bff5) grid_radio_pane

0x2c80,	// (0x00072da7) bg_popup_window_pane_cp06

0xbed6,	// (0x0007bffd) main_fmradio_pane_t1

0xb901,	// (0x0007ba28) heading_pane_cp04

0xbee4,	// (0x0007c00b) main_fmradio_pane_t2

0xcebc,	// (0x0007cfe3) popup_cale_lunar_info_window_g1

0xbef2,	// (0x0007c019) main_fmradio_pane_t3

0xcec4,	// (0x0007cfeb) popup_cale_lunar_info_window_g2

0xbf00,	// (0x0007c027) main_fmradio_pane_t4

0x0001,

0xbf0e,	// (0x0007c035) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0007f717) popup_cale_lunar_info_window_g

0xf52a,	// (0x0007f651) main_fmradio_pane_t

0xbf1c,	// (0x0007c043) wait_bar_pane_cp03

0xbf24,	// (0x0007c04b) cell_fmradio_pane_ParamLimits

0xbf24,	// (0x0007c04b) cell_fmradio_pane

0xbd7d,	// (0x0007bea4) cell_fmradio_pane_g1_ParamLimits

0xbd7d,	// (0x0007bea4) cell_fmradio_pane_g1

0x2c80,	// (0x00072da7) grid_highlight_pane_cp011

0xbf37,	// (0x0007c05e) poc_content_pane_ParamLimits

0xbf37,	// (0x0007c05e) poc_content_pane

0xbf49,	// (0x0007c070) scroll_pane_cp019

0x57bd,	// (0x000758e4) popup_call_poc_act_window_ParamLimits

0x57bd,	// (0x000758e4) popup_call_poc_act_window

0x57e1,	// (0x00075908) popup_call_poc_inact_window_ParamLimits

0x57e1,	// (0x00075908) popup_call_poc_inact_window

0xf5c7,	// (0x0007f6ee) bg_popup_call_poc_act_pane_g

0xce34,	// (0x0007cf5b) bg_popup_call_poc_inact_pane_g1

0xce3c,	// (0x0007cf63) bg_popup_call_poc_inact_pane_g2

0xbf51,	// (0x0007c078) popup_call_poc_act_window_g2

0xce44,	// (0x0007cf6b) bg_popup_call_poc_inact_pane_g3

0xce4c,	// (0x0007cf73) bg_popup_call_poc_inact_pane_g4

0xce54,	// (0x0007cf7b) bg_popup_call_poc_inact_pane_g5

0xbf59,	// (0x0007c080) popup_call_poc_act_window_t1_ParamLimits

0xbf59,	// (0x0007c080) popup_call_poc_act_window_t1

0xbf81,	// (0x0007c0a8) popup_call_poc_act_window_t2_ParamLimits

0xbf81,	// (0x0007c0a8) popup_call_poc_act_window_t2

0xbfa9,	// (0x0007c0d0) popup_call_poc_act_window_t3_ParamLimits

0xbfa9,	// (0x0007c0d0) popup_call_poc_act_window_t3

0xbfd1,	// (0x0007c0f8) popup_call_poc_act_window_t4_ParamLimits

0xbfd1,	// (0x0007c0f8) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0007f65c) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0007f65c) popup_call_poc_act_window_t

0xce5c,	// (0x0007cf83) bg_popup_call_poc_inact_pane_g6

0xce64,	// (0x0007cf8b) bg_popup_call_poc_inact_pane_g7

0xce6c,	// (0x0007cf93) bg_popup_call_poc_inact_pane_g8

0xbfe3,	// (0x0007c10a) popup_call_poc_inact_window_g2

0xce74,	// (0x0007cf9b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0007f6db) bg_popup_call_poc_inact_pane_g

0xbfeb,	// (0x0007c112) popup_call_poc_inact_window_t1_ParamLimits

0xbfeb,	// (0x0007c112) popup_call_poc_inact_window_t1

0xc000,	// (0x0007c127) popup_call_poc_inact_window_t2_ParamLimits

0xc000,	// (0x0007c127) popup_call_poc_inact_window_t2

0xc015,	// (0x0007c13c) popup_call_poc_inact_window_t3_ParamLimits

0xc015,	// (0x0007c13c) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0007f665) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0007f665) popup_call_poc_inact_window_t

0xd02c,	// (0x0007d153) context_pane_ParamLimits

0x600b,	// (0x00076132) signal_pane_ParamLimits

0xbb7e,	// (0x0007bca5) main_call2_pane

0xd01a,	// (0x0007d141) popup_phob_thumbnail2_window_ParamLimits

0xd01a,	// (0x0007d141) popup_phob_thumbnail2_window

0xbd2d,	// (0x0007be54) aid_hotspot_pointer_arrow_pane

0xbd35,	// (0x0007be5c) aid_hotspot_pointer_hand_pane

0x5b2f,	// (0x00075c56) phob_pre_status_pane_g5

0x393b,	// (0x00073a62) cams_zoom_pane_ParamLimits

0x394a,	// (0x00073a71) image_vga_pane_ParamLimits

0x3964,	// (0x00073a8b) main_camera_pane_g1_ParamLimits

0x3976,	// (0x00073a9d) main_camera_pane_g2_ParamLimits

0x3988,	// (0x00073aaf) main_camera_pane_g3_ParamLimits

0x399a,	// (0x00073ac1) main_camera_pane_g4_ParamLimits

0x39ac,	// (0x00073ad3) main_camera_pane_g5_ParamLimits

0x39be,	// (0x00073ae5) main_camera_pane_g6_ParamLimits

0x39d0,	// (0x00073af7) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0007f364) main_camera_pane_g_ParamLimits

0x39ee,	// (0x00073b15) main_camera_pane_t1_ParamLimits

0x3a04,	// (0x00073b2b) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0007f375) main_camera_pane_t_ParamLimits

0x2edb,	// (0x00073002) bg_popup_preview_window_pane_cp01_ParamLimits

0x2edb,	// (0x00073002) bg_popup_preview_window_pane_cp01

0xc02a,	// (0x0007c151) popup_phob_thumbnail2_window_g1_ParamLimits

0xc02a,	// (0x0007c151) popup_phob_thumbnail2_window_g1

0x2c80,	// (0x00072da7) call2_cli_visual_pane

0x5815,	// (0x0007593c) popup_call2_audio_conf_window_ParamLimits

0x5815,	// (0x0007593c) popup_call2_audio_conf_window

0x5835,	// (0x0007595c) popup_call2_audio_first_window_ParamLimits

0x5835,	// (0x0007595c) popup_call2_audio_first_window

0x58cb,	// (0x000759f2) popup_call2_audio_in_window_ParamLimits

0x58cb,	// (0x000759f2) popup_call2_audio_in_window

0x5913,	// (0x00075a3a) popup_call2_audio_out_window_ParamLimits

0x5913,	// (0x00075a3a) popup_call2_audio_out_window

0x597d,	// (0x00075aa4) popup_call2_audio_second_window_ParamLimits

0x597d,	// (0x00075aa4) popup_call2_audio_second_window

0x59e3,	// (0x00075b0a) popup_call2_audio_wait_window_ParamLimits

0x59e3,	// (0x00075b0a) popup_call2_audio_wait_window

0x2c80,	// (0x00072da7) bg_popup_call2_act_pane_cp03

0x2ebd,	// (0x00072fe4) list_conf_pane_cp

0xc036,	// (0x0007c15d) popup_call2_audio_conf_window_t1

0xc044,	// (0x0007c16b) list_single_graphic_popup_conf2_pane_ParamLimits

0xc044,	// (0x0007c16b) list_single_graphic_popup_conf2_pane

0xb994,	// (0x0007babb) list_highlight_pane_cp04

0xc057,	// (0x0007c17e) list_single_graphic_popup_conf2_pane_g1

0xb9a5,	// (0x0007bacc) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0007f66c) list_single_graphic_popup_conf2_pane_g

0xc061,	// (0x0007c188) list_single_graphic_popup_conf2_pane_t1

0xc06f,	// (0x0007c196) bg_popup_call2_act_pane_cp01_ParamLimits

0xc06f,	// (0x0007c196) bg_popup_call2_act_pane_cp01

0xc0f9,	// (0x0007c220) call_type_pane_cp05_ParamLimits

0xc0f9,	// (0x0007c220) call_type_pane_cp05

0xc14d,	// (0x0007c274) popup_call2_audio_second_window_g1_ParamLimits

0xc14d,	// (0x0007c274) popup_call2_audio_second_window_g1

0xc1a1,	// (0x0007c2c8) popup_call2_audio_second_window_g2_ParamLimits

0xc1a1,	// (0x0007c2c8) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0007f671) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0007f671) popup_call2_audio_second_window_g

0xc206,	// (0x0007c32d) popup_call2_audio_second_window_t1_ParamLimits

0xc206,	// (0x0007c32d) popup_call2_audio_second_window_t1

0xc2c1,	// (0x0007c3e8) popup_call2_audio_second_window_t2_ParamLimits

0xc2c1,	// (0x0007c3e8) popup_call2_audio_second_window_t2

0xc314,	// (0x0007c43b) popup_call2_audio_second_window_t3_ParamLimits

0xc314,	// (0x0007c43b) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0007f678) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0007f678) popup_call2_audio_second_window_t

0x2c80,	// (0x00072da7) bg_popup_call2_in_pane_cp02

0x2c8a,	// (0x00072db1) call_type_pane_cp04

0x2c92,	// (0x00072db9) popup_call2_audio_wait_window_g1

0x2c9a,	// (0x00072dc1) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0007f251) popup_call2_audio_wait_window_g

0x2ca2,	// (0x00072dc9) popup_call2_audio_wait_window_t3

0xc407,	// (0x0007c52e) bg_popup_call2_act_pane_ParamLimits

0xc407,	// (0x0007c52e) bg_popup_call2_act_pane

0xc4c7,	// (0x0007c5ee) call_type_pane_cp03_ParamLimits

0xc4c7,	// (0x0007c5ee) call_type_pane_cp03

0xc52b,	// (0x0007c652) popup_call2_audio_first_window_g1_ParamLimits

0xc52b,	// (0x0007c652) popup_call2_audio_first_window_g1

0xc59b,	// (0x0007c6c2) popup_call2_audio_first_window_g2_ParamLimits

0xc59b,	// (0x0007c6c2) popup_call2_audio_first_window_g2

0xbc4f,	// (0x0007bd76) popup_call2_audio_first_window_g3_ParamLimits

0xbc4f,	// (0x0007bd76) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0007f681) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0007f681) popup_call2_audio_first_window_g

0xc679,	// (0x0007c7a0) popup_call2_audio_first_window_t1_ParamLimits

0xc679,	// (0x0007c7a0) popup_call2_audio_first_window_t1

0xc77c,	// (0x0007c8a3) popup_call2_audio_first_window_t4_ParamLimits

0xc77c,	// (0x0007c8a3) popup_call2_audio_first_window_t4

0xc85f,	// (0x0007c986) popup_call2_audio_first_window_t5_ParamLimits

0xc85f,	// (0x0007c986) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0007f68c) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0007f68c) popup_call2_audio_first_window_t

0x2ed3,	// (0x00072ffa) bg_popup_call2_act_pane_g1

0xcecc,	// (0x0007cff3) popup_cale_lunar_info_window_t1

0xceda,	// (0x0007d001) popup_cale_lunar_info_window_t2

0xcee8,	// (0x0007d00f) popup_cale_lunar_info_window_t3

0x2c80,	// (0x00072da7) bg_popup_call2_bubble_pane

0xc960,	// (0x0007ca87) bg_popup_call2_in_pane_cp01_ParamLimits

0xc960,	// (0x0007ca87) bg_popup_call2_in_pane_cp01

0x2938,	// (0x00072a5f) call_type_pane_cp02

0xc9a8,	// (0x0007cacf) popup_call2_audio_out_window_g1_ParamLimits

0xc9a8,	// (0x0007cacf) popup_call2_audio_out_window_g1

0xc9d4,	// (0x0007cafb) popup_call2_audio_out_window_g2_ParamLimits

0xc9d4,	// (0x0007cafb) popup_call2_audio_out_window_g2

0xc9fc,	// (0x0007cb23) popup_call2_audio_out_window_g3_ParamLimits

0xc9fc,	// (0x0007cb23) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0007f695) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0007f695) popup_call2_audio_out_window_g

0xca37,	// (0x0007cb5e) popup_call2_audio_out_window_t1_ParamLimits

0xca37,	// (0x0007cb5e) popup_call2_audio_out_window_t1

0xca96,	// (0x0007cbbd) popup_call2_audio_out_window_t2_ParamLimits

0xca96,	// (0x0007cbbd) popup_call2_audio_out_window_t2

0xcaea,	// (0x0007cc11) popup_call2_audio_out_window_t3_ParamLimits

0xcaea,	// (0x0007cc11) popup_call2_audio_out_window_t3

0xcb00,	// (0x0007cc27) popup_call2_audio_out_window_t4_ParamLimits

0xcb00,	// (0x0007cc27) popup_call2_audio_out_window_t4

0xcb16,	// (0x0007cc3d) popup_call2_audio_out_window_t5_ParamLimits

0xcb16,	// (0x0007cc3d) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0007f69e) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0007f69e) popup_call2_audio_out_window_t

0xcb7a,	// (0x0007cca1) bg_popup_call2_in_pane_ParamLimits

0xcb7a,	// (0x0007cca1) bg_popup_call2_in_pane

0xcbd6,	// (0x0007ccfd) popup_call2_audio_in_window_g1_ParamLimits

0xcbd6,	// (0x0007ccfd) popup_call2_audio_in_window_g1

0xcc0e,	// (0x0007cd35) popup_call2_audio_in_window_g2_ParamLimits

0xcc0e,	// (0x0007cd35) popup_call2_audio_in_window_g2

0xcc46,	// (0x0007cd6d) popup_call2_audio_in_window_g3_ParamLimits

0xcc46,	// (0x0007cd6d) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0007f6ab) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0007f6ab) popup_call2_audio_in_window_g

0xcc9e,	// (0x0007cdc5) popup_call2_audio_in_window_t1_ParamLimits

0xcc9e,	// (0x0007cdc5) popup_call2_audio_in_window_t1

0xcd1e,	// (0x0007ce45) popup_call2_audio_in_window_t2_ParamLimits

0xcd1e,	// (0x0007ce45) popup_call2_audio_in_window_t2

0xcd9e,	// (0x0007cec5) popup_call2_audio_in_window_t3_ParamLimits

0xcd9e,	// (0x0007cec5) popup_call2_audio_in_window_t3

0xcdb8,	// (0x0007cedf) popup_call2_audio_in_window_t4_ParamLimits

0xcdb8,	// (0x0007cedf) popup_call2_audio_in_window_t4

0xcdca,	// (0x0007cef1) popup_call2_audio_in_window_t5_ParamLimits

0xcdca,	// (0x0007cef1) popup_call2_audio_in_window_t5

0xcddf,	// (0x0007cf06) popup_call2_audio_in_window_t6_ParamLimits

0xcddf,	// (0x0007cf06) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0007f6b4) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0007f6b4) popup_call2_audio_in_window_t

0x2ed3,	// (0x00072ffa) bg_popup_call2_in_pane_g1

0xcef6,	// (0x0007d01d) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0007f71c) popup_cale_lunar_info_window_t

0x2edb,	// (0x00073002) bg_popup_call2_rect_pane_ParamLimits

0x2edb,	// (0x00073002) bg_popup_call2_rect_pane

0x2c80,	// (0x00072da7) call2_cli_visual_graphic_pane

0x2c80,	// (0x00072da7) call2_cli_visual_text_pane

0xd0cc,	// (0x0007d1f3) smil_status_volume_pane_g3

0x0002,

0x336f,	// (0x00073496) call2_cli_visual_graphic_pane_g1

0x336f,	// (0x00073496) call2_cli_visual_graphic_pane_g2

0x336f,	// (0x00073496) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0007f6c1) call2_cli_visual_graphic_pane_g

0xcdf4,	// (0x0007cf1b) bg_popup_call2_rect_pane_g1

0x34b4,	// (0x000735db) bg_popup_call2_rect_pane_g2

0xcdfc,	// (0x0007cf23) bg_popup_call2_rect_pane_g3

0xce04,	// (0x0007cf2b) bg_popup_call2_rect_pane_g4

0xce0c,	// (0x0007cf33) bg_popup_call2_rect_pane_g5

0xce14,	// (0x0007cf3b) bg_popup_call2_rect_pane_g6

0xce1c,	// (0x0007cf43) bg_popup_call2_rect_pane_g7

0xce24,	// (0x0007cf4b) bg_popup_call2_rect_pane_g8

0xce2c,	// (0x0007cf53) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0007f6c8) bg_popup_call2_rect_pane_g

0xce34,	// (0x0007cf5b) bg_popup_call2_bubble_pane_g1

0xce3c,	// (0x0007cf63) bg_popup_call2_bubble_pane_g2

0xce44,	// (0x0007cf6b) bg_popup_call2_bubble_pane_g3

0xce4c,	// (0x0007cf73) bg_popup_call2_bubble_pane_g4

0xce54,	// (0x0007cf7b) bg_popup_call2_bubble_pane_g5

0xce5c,	// (0x0007cf83) bg_popup_call2_bubble_pane_g6

0xce64,	// (0x0007cf8b) bg_popup_call2_bubble_pane_g7

0xce6c,	// (0x0007cf93) bg_popup_call2_bubble_pane_g8

0xce74,	// (0x0007cf9b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0007f6db) bg_popup_call2_bubble_pane_g

0x3512,	// (0x00073639) aid_cale_week_size_cell_pane

0x3a1c,	// (0x00073b43) aid_cams_cif_uncrop_pane_ParamLimits

0x3a1c,	// (0x00073b43) aid_cams_cif_uncrop_pane

0x3c17,	// (0x00073d3e) aid_cams_size_cell_ParamLimits

0x3c17,	// (0x00073d3e) aid_cams_size_cell

0x3c2b,	// (0x00073d52) grid_cams_pane_ParamLimits

0x3c45,	// (0x00073d6c) linegrid_cams_pane_ParamLimits

0x3d63,	// (0x00073e8a) call_video_pane_t1

0x3d75,	// (0x00073e9c) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0007f3c8) call_video_pane_t

0x433b,	// (0x00074462) aid_cale_month_size_cell_pane_ParamLimits

0x433b,	// (0x00074462) aid_cale_month_size_cell_pane

0xf63e,	// (0x0007f765) smil_status_volume_pane_g

0xd0d9,	// (0x0007d200) volume_smil_pane_ParamLimits

0x255e,	// (0x00072685) aid_popup2_width_pane

0x340c,	// (0x00073533) cell_qdial_pane_g4_ParamLimits

0x340c,	// (0x00073533) cell_qdial_pane_g4

0x4e03,	// (0x00074f2a) aid_blid_cardinal_pane_ParamLimits

0x4e0f,	// (0x00074f36) aid_blid_destination_pane_ParamLimits

0x4e0f,	// (0x00074f36) aid_blid_destination_pane

0x2edb,	// (0x00073002) bg_popup_call_poc_act_pane_ParamLimits

0x2edb,	// (0x00073002) bg_popup_call_poc_act_pane

0x2edb,	// (0x00073002) bg_popup_call_poc_inact_pane_ParamLimits

0x2edb,	// (0x00073002) bg_popup_call_poc_inact_pane

0xce7c,	// (0x0007cfa3) bg_popup_call_poc_act_pane_g1

0xce84,	// (0x0007cfab) bg_popup_call_poc_act_pane_g2

0xce8c,	// (0x0007cfb3) bg_popup_call_poc_act_pane_g3

0xce4c,	// (0x0007cf73) bg_popup_call_poc_act_pane_g4

0xce54,	// (0x0007cf7b) bg_popup_call_poc_act_pane_g5

0xce94,	// (0x0007cfbb) bg_popup_call_poc_act_pane_g6

0xce64,	// (0x0007cf8b) bg_popup_call_poc_act_pane_g7

0xce9c,	// (0x0007cfc3) bg_popup_call_poc_act_pane_g8

0x2c80,	// (0x00072da7) main_usb_pane

0xcff5,	// (0x0007d11c) popup_cale_lunar_info_window

0x4010,	// (0x00074137) im_reading_pane_t1_ParamLimits

0x404c,	// (0x00074173) list_im_pane_ParamLimits

0x405d,	// (0x00074184) scroll_pane_cp07_ParamLimits

0x2c80,	// (0x00072da7) grid_highlight_pane_cp012

0x2edb,	// (0x00073002) mup_scale_pane_ParamLimits

0xbd7d,	// (0x0007bea4) main_usb_pane_g1_ParamLimits

0xbd7d,	// (0x0007bea4) main_usb_pane_g1

0x5a42,	// (0x00075b69) main_usb_pane_g2_ParamLimits

0x5a42,	// (0x00075b69) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0007f705) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0007f705) main_usb_pane_g

0x5a58,	// (0x00075b7f) main_usb_pane_t1_ParamLimits

0x5a58,	// (0x00075b7f) main_usb_pane_t1

0x5a6a,	// (0x00075b91) main_usb_pane_t2_ParamLimits

0x5a6a,	// (0x00075b91) main_usb_pane_t2

0x5a7c,	// (0x00075ba3) main_usb_pane_t3_ParamLimits

0x5a7c,	// (0x00075ba3) main_usb_pane_t3

0x5a8e,	// (0x00075bb5) main_usb_pane_t4_ParamLimits

0x5a8e,	// (0x00075bb5) main_usb_pane_t4

0x5aa0,	// (0x00075bc7) main_usb_pane_t5_ParamLimits

0x5aa0,	// (0x00075bc7) main_usb_pane_t5

0x5ab2,	// (0x00075bd9) main_usb_pane_t6_ParamLimits

0x5ab2,	// (0x00075bd9) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0007f70a) main_usb_pane_t_ParamLimits

0x4da8,	// (0x00074ecf) aid_text_placing

0x4db1,	// (0x00074ed8) main_location2_pane_t1_ParamLimits

0x4dc5,	// (0x00074eec) main_location2_pane_t2_ParamLimits

0x4dd9,	// (0x00074f00) main_location2_pane_t3_ParamLimits

0x4def,	// (0x00074f16) main_location2_pane_t4_ParamLimits

0x4def,	// (0x00074f16) main_location2_pane_t4

0xf402,	// (0x0007f529) main_location2_pane_t_ParamLimits

0x2fb3,	// (0x000730da) find_pinb_pane_g2_ParamLimits

0x2fb3,	// (0x000730da) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0007f277) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0007f277) find_pinb_pane_g

0x2fbf,	// (0x000730e6) find_pinb_pane_t1_ParamLimits

0x2fd1,	// (0x000730f8) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0007f27c) find_pinb_pane_t_ParamLimits

0x2c80,	// (0x00072da7) main_call3_pane

0x4633,	// (0x0007475a) cale_month_day_heading_pane_t1_ParamLimits

0x4691,	// (0x000747b8) cale_month_day_heading_pane_t2_ParamLimits

0x46f6,	// (0x0007481d) cale_month_day_heading_pane_t3_ParamLimits

0x475b,	// (0x00074882) cale_month_day_heading_pane_t4_ParamLimits

0x47c0,	// (0x000748e7) cale_month_day_heading_pane_t5_ParamLimits

0x4825,	// (0x0007494c) cale_month_day_heading_pane_t6_ParamLimits

0x488a,	// (0x000749b1) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0007f400) cale_month_day_heading_pane_t_ParamLimits

0xb505,	// (0x0007b62c) smil_status_volume_pane

0x5531,	// (0x00075658) postcard_address_pane_ParamLimits

0x5531,	// (0x00075658) postcard_address_pane

0x5543,	// (0x0007566a) postcard_message_pane_ParamLimits

0x5543,	// (0x0007566a) postcard_message_pane

0x5a1d,	// (0x00075b44) call2_cli_visual_pane_t1_ParamLimits

0x5a1d,	// (0x00075b44) call2_cli_visual_pane_t1

0x6239,	// (0x00076360) postcard_message_pane_t1_ParamLimits

0x6239,	// (0x00076360) postcard_message_pane_t1

0x6222,	// (0x00076349) postcard_address_pane_t1_ParamLimits

0x6222,	// (0x00076349) postcard_address_pane_t1

0x620e,	// (0x00076335) popup_call3_audio_in_window_ParamLimits

0x620e,	// (0x00076335) popup_call3_audio_in_window

0x609d,	// (0x000761c4) bg_popup_call3_in_pane_ParamLimits

0x609d,	// (0x000761c4) bg_popup_call3_in_pane

0x610f,	// (0x00076236) popup_call3_audio_in_window_g1_ParamLimits

0x610f,	// (0x00076236) popup_call3_audio_in_window_g1

0x612f,	// (0x00076256) popup_call3_audio_in_window_g2_ParamLimits

0x612f,	// (0x00076256) popup_call3_audio_in_window_g2

0x614f,	// (0x00076276) popup_call3_audio_in_window_g3_ParamLimits

0x614f,	// (0x00076276) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0007f76c) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0007f76c) popup_call3_audio_in_window_g

0x6180,	// (0x000762a7) popup_call3_audio_in_window_t1_ParamLimits

0x6180,	// (0x000762a7) popup_call3_audio_in_window_t1

0x61be,	// (0x000762e5) popup_call3_audio_in_window_t2_ParamLimits

0x61be,	// (0x000762e5) popup_call3_audio_in_window_t2

0x61fc,	// (0x00076323) popup_call3_audio_in_window_t3_ParamLimits

0x61fc,	// (0x00076323) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0007f775) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0007f775) popup_call3_audio_in_window_t

0xbb7e,	// (0x0007bca5) bg_popup_call3_rect_pane

0xcdf4,	// (0x0007cf1b) bg_popup_call3_rect_pane_g1

0x34b4,	// (0x000735db) bg_popup_call3_rect_pane_g2

0xcdfc,	// (0x0007cf23) bg_popup_call3_rect_pane_g3

0xce04,	// (0x0007cf2b) bg_popup_call3_rect_pane_g4

0xce0c,	// (0x0007cf33) bg_popup_call3_rect_pane_g5

0xce14,	// (0x0007cf3b) bg_popup_call3_rect_pane_g6

0xce1c,	// (0x0007cf43) bg_popup_call3_rect_pane_g7

0x51cb,	// (0x000752f2) mup_visualizer_osc_pane

0xbc5d,	// (0x0007bd84) mup_visualizer_spec_pane

0x60cd,	// (0x000761f4) call3_video_qcif_pane_ParamLimits

0x60cd,	// (0x000761f4) call3_video_qcif_pane

0x60de,	// (0x00076205) call3_video_qcif_uncrop_pane_ParamLimits

0x60de,	// (0x00076205) call3_video_qcif_uncrop_pane

0x60ea,	// (0x00076211) call3_video_subqcif_pane_ParamLimits

0x60ea,	// (0x00076211) call3_video_subqcif_pane

0x60fe,	// (0x00076225) call3_video_subqcif_uncrop_pane_ParamLimits

0x60fe,	// (0x00076225) call3_video_subqcif_uncrop_pane

0x616f,	// (0x00076296) popup_call3_audio_in_window_g4_ParamLimits

0x616f,	// (0x00076296) popup_call3_audio_in_window_g4

0x608c,	// (0x000761b3) mup_spec_half_pane

0x6095,	// (0x000761bc) mup_spec_half_pane_cp

0xd08c,	// (0x0007d1b3) mup_osc_middle_pane

0xd095,	// (0x0007d1bc) mup_visualizer_osc_pane_g1

0x606c,	// (0x00076193) mup_spec_bar_pane_ParamLimits

0x606c,	// (0x00076193) mup_spec_bar_pane

0xd079,	// (0x0007d1a0) mup_spec_bar_pane_g1

0xd083,	// (0x0007d1aa) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0007f760) mup_spec_bar_pane_g

0x3512,	// (0x00073639) aid_cale_week_size_cell_pane_ParamLimits

0x3525,	// (0x0007364c) bg_cale_heading_pane_ParamLimits

0x353d,	// (0x00073664) bg_cale_pane_cp01_ParamLimits

0x3556,	// (0x0007367d) cale_week_corner_pane_ParamLimits

0x3567,	// (0x0007368e) cale_week_day_heading_pane_ParamLimits

0x357f,	// (0x000736a6) cale_week_scroll_pane_g1_ParamLimits

0x3594,	// (0x000736bb) cale_week_scroll_pane_g2_ParamLimits

0x35a5,	// (0x000736cc) cale_week_scroll_pane_g3_ParamLimits

0x35b6,	// (0x000736dd) cale_week_scroll_pane_g4_ParamLimits

0x35c7,	// (0x000736ee) cale_week_scroll_pane_g5_ParamLimits

0x35d8,	// (0x000736ff) cale_week_scroll_pane_g6_ParamLimits

0x35e9,	// (0x00073710) cale_week_scroll_pane_g7_ParamLimits

0x35fa,	// (0x00073721) cale_week_scroll_pane_g8_ParamLimits

0x360b,	// (0x00073732) cale_week_scroll_pane_g9_ParamLimits

0x361c,	// (0x00073743) cale_week_scroll_pane_g10_ParamLimits

0x362d,	// (0x00073754) cale_week_scroll_pane_g11_ParamLimits

0x363e,	// (0x00073765) cale_week_scroll_pane_g12_ParamLimits

0x364f,	// (0x00073776) cale_week_scroll_pane_g13_ParamLimits

0x3660,	// (0x00073787) cale_week_scroll_pane_g14_ParamLimits

0x3671,	// (0x00073798) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0007f308) cale_week_scroll_pane_g_ParamLimits

0x3682,	// (0x000737a9) cale_week_time_pane_ParamLimits

0x3693,	// (0x000737ba) grid_cale_week_pane_ParamLimits

0x36a6,	// (0x000737cd) listscroll_cale_week_pane_t1

0x36b8,	// (0x000737df) scroll_pane_cp08_ParamLimits

0x437c,	// (0x000744a3) cale_month_corner_pane_ParamLimits

0xb4a5,	// (0x0007b5cc) cale_month_pane_t1

0x45fc,	// (0x00074723) cale_month_week_pane_ParamLimits

0x4c0f,	// (0x00074d36) popup_call_status_window_g1_ParamLimits

0x4c23,	// (0x00074d4a) popup_call_status_window_g2_ParamLimits

0x4c37,	// (0x00074d5e) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0007f4b0) popup_call_status_window_g_ParamLimits

0xb882,	// (0x0007b9a9) aid_call2_pane

0x1c42,	// (0x00071d69) msg_header_pane_g1

0x5531,	// (0x00075658) postcard_address2_pane_ParamLimits

0x5531,	// (0x00075658) postcard_address2_pane

0x5543,	// (0x0007566a) postcard_message2_pane_ParamLimits

0x5543,	// (0x0007566a) postcard_message2_pane

0x6019,	// (0x00076140) message2_row_pane_ParamLimits

0x6019,	// (0x00076140) message2_row_pane

0x6038,	// (0x0007615f) address2_row_pane_ParamLimits

0x6038,	// (0x0007615f) address2_row_pane

0xd047,	// (0x0007d16e) postcard_message2_row_pane_g1

0xd04f,	// (0x0007d176) postcard_message2_row_pane_t1

0xd047,	// (0x0007d16e) address2_row_pane_g1

0xd04f,	// (0x0007d176) address2_row_pane_t1

0xb308,	// (0x0007b42f) aid_size_cell_vorec

0x2c80,	// (0x00072da7) main_rss_pane

0x604b,	// (0x00076172) rss_list_single_pane_ParamLimits

0x604b,	// (0x00076172) rss_list_single_pane

0xd05d,	// (0x0007d184) rss_list_single_pane_t1

0xd06b,	// (0x0007d192) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0007f75b) rss_list_single_pane_t

0x2c80,	// (0x00072da7) main_camera2_pane

0x2c80,	// (0x00072da7) main_video2_pane

0x62b2,	// (0x000763d9) cams_zoom_pane_cp2_ParamLimits

0x62b2,	// (0x000763d9) cams_zoom_pane_cp2

0x62d2,	// (0x000763f9) image2_vga_pane_ParamLimits

0x62d2,	// (0x000763f9) image2_vga_pane

0x6323,	// (0x0007644a) main_camera2_pane_g1_ParamLimits

0x6323,	// (0x0007644a) main_camera2_pane_g1

0x6343,	// (0x0007646a) main_camera2_pane_g2_ParamLimits

0x6343,	// (0x0007646a) main_camera2_pane_g2

0x6363,	// (0x0007648a) main_camera2_pane_g3_ParamLimits

0x6363,	// (0x0007648a) main_camera2_pane_g3

0x6383,	// (0x000764aa) main_camera2_pane_g4_ParamLimits

0x6383,	// (0x000764aa) main_camera2_pane_g4

0x63a3,	// (0x000764ca) main_camera2_pane_g5_ParamLimits

0x63a3,	// (0x000764ca) main_camera2_pane_g5

0x63c3,	// (0x000764ea) main_camera2_pane_g6_ParamLimits

0x63c3,	// (0x000764ea) main_camera2_pane_g6

0x63e3,	// (0x0007650a) main_camera2_pane_g7_ParamLimits

0x63e3,	// (0x0007650a) main_camera2_pane_g7

0x6403,	// (0x0007652a) main_camera2_pane_g8_ParamLimits

0x6403,	// (0x0007652a) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0007f77c) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0007f77c) main_camera2_pane_g

0x6443,	// (0x0007656a) main_camera2_pane_t1_ParamLimits

0x6443,	// (0x0007656a) main_camera2_pane_t1

0x6478,	// (0x0007659f) main_camera2_pane_t2_ParamLimits

0x6478,	// (0x0007659f) main_camera2_pane_t2

0x649e,	// (0x000765c5) main_camera2_pane_t3_ParamLimits

0x649e,	// (0x000765c5) main_camera2_pane_t3

0x64fc,	// (0x00076623) main_camera2_pane_t4_ParamLimits

0x64fc,	// (0x00076623) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0007f78f) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0007f78f) main_camera2_pane_t

0x658e,	// (0x000766b5) cams_zoom_pane_cp4_ParamLimits

0x658e,	// (0x000766b5) cams_zoom_pane_cp4

0x65a4,	// (0x000766cb) image2_cif_pane_ParamLimits

0x65a4,	// (0x000766cb) image2_cif_pane

0x65cf,	// (0x000766f6) image2_subqcif_pane_ParamLimits

0x65cf,	// (0x000766f6) image2_subqcif_pane

0x65e9,	// (0x00076710) main_video2_pane_g1_ParamLimits

0x65e9,	// (0x00076710) main_video2_pane_g1

0x6603,	// (0x0007672a) main_video2_pane_g2_ParamLimits

0x6603,	// (0x0007672a) main_video2_pane_g2

0x6619,	// (0x00076740) main_video2_pane_g3_ParamLimits

0x6619,	// (0x00076740) main_video2_pane_g3

0x662f,	// (0x00076756) main_video2_pane_g4_ParamLimits

0x662f,	// (0x00076756) main_video2_pane_g4

0x6645,	// (0x0007676c) main_video2_pane_g5_ParamLimits

0x6645,	// (0x0007676c) main_video2_pane_g5

0x665b,	// (0x00076782) main_video2_pane_g6_ParamLimits

0x665b,	// (0x00076782) main_video2_pane_g6

0x0005,

0xf677,	// (0x0007f79e) main_video2_pane_g_ParamLimits

0xf677,	// (0x0007f79e) main_video2_pane_g

0x6675,	// (0x0007679c) main_video2_pane_t1_ParamLimits

0x6675,	// (0x0007679c) main_video2_pane_t1

0x6699,	// (0x000767c0) main_video2_pane_t2_ParamLimits

0x6699,	// (0x000767c0) main_video2_pane_t2

0x66e7,	// (0x0007680e) main_video2_pane_t3_ParamLimits

0x66e7,	// (0x0007680e) main_video2_pane_t3

0x0002,

0xf684,	// (0x0007f7ab) main_video2_pane_t_ParamLimits

0xf684,	// (0x0007f7ab) main_video2_pane_t

0x5b6f,	// (0x00075c96) call_muted_g2

0x0001,

0xf626,	// (0x0007f74d) call_muted_g

0x2c80,	// (0x00072da7) main_mup2_pane

0x672f,	// (0x00076856) main_mup2_pane_g1_ParamLimits

0x672f,	// (0x00076856) main_mup2_pane_g1

0x673b,	// (0x00076862) main_mup2_pane_g2_ParamLimits

0x673b,	// (0x00076862) main_mup2_pane_g2

0xd1fd,	// (0x0007d324) main_mup_pane_g13_cp1

0xd205,	// (0x0007d32c) mup_volume_pane_cp1

0x6757,	// (0x0007687e) main_mup2_pane_g4_ParamLimits

0x6757,	// (0x0007687e) main_mup2_pane_g4

0x6769,	// (0x00076890) main_mup2_pane_g5_ParamLimits

0x6769,	// (0x00076890) main_mup2_pane_g5

0x677b,	// (0x000768a2) main_mup2_pane_g6_ParamLimits

0x677b,	// (0x000768a2) main_mup2_pane_g6

0x678d,	// (0x000768b4) main_mup2_pane_g7_ParamLimits

0x678d,	// (0x000768b4) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0007f7b2) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0007f7b2) main_mup2_pane_g

0x67a5,	// (0x000768cc) main_mup2_pane_t1_ParamLimits

0x67a5,	// (0x000768cc) main_mup2_pane_t1

0x67bb,	// (0x000768e2) main_mup2_pane_t2_ParamLimits

0x67bb,	// (0x000768e2) main_mup2_pane_t2

0x67d1,	// (0x000768f8) main_mup2_pane_t3_ParamLimits

0x67d1,	// (0x000768f8) main_mup2_pane_t3

0x67e7,	// (0x0007690e) main_mup2_pane_t4_ParamLimits

0x67e7,	// (0x0007690e) main_mup2_pane_t4

0x67ff,	// (0x00076926) main_mup2_pane_t5_ParamLimits

0x67ff,	// (0x00076926) main_mup2_pane_t5

0x6817,	// (0x0007693e) main_mup2_pane_t6_ParamLimits

0x6817,	// (0x0007693e) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0007f7c1) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0007f7c1) main_mup2_pane_t

0x6847,	// (0x0007696e) mup2_visualizer_pane_ParamLimits

0x6847,	// (0x0007696e) mup2_visualizer_pane

0x6875,	// (0x0007699c) mup_progress_pane_cp_ParamLimits

0x6875,	// (0x0007699c) mup_progress_pane_cp

0xd1df,	// (0x0007d306) mup_volume_pane_cp_ParamLimits

0xd1df,	// (0x0007d306) mup_volume_pane_cp

0x6889,	// (0x000769b0) mup2_visualizer_pane_g1_ParamLimits

0x6889,	// (0x000769b0) mup2_visualizer_pane_g1

0xd11e,	// (0x0007d245) mup2_visualizer_pane_g2_ParamLimits

0xd11e,	// (0x0007d245) mup2_visualizer_pane_g2

0x68a0,	// (0x000769c7) mup2_visualizer_pane_g3_ParamLimits

0x68a0,	// (0x000769c7) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0007f7ce) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0007f7ce) mup2_visualizer_pane_g

0xbec6,	// (0x0007bfed) aid_size_cell_fmradio

0x5d21,	// (0x00075e48) aid_height_parent_landcape

0x4115,	// (0x0007423c) wml_content_pane_cp

0x411d,	// (0x00074244) wml_tabs_pane

0x4126,	// (0x0007424d) popup_wml_miniature_window

0x412e,	// (0x00074255) scroll_pane_cp021

0x4142,	// (0x00074269) wml_content_pane_comp8

0x2c80,	// (0x00072da7) bg_popup_sub_pane_cp05

0xd13c,	// (0x0007d263) popup_wml_miniature_window_g1

0xd144,	// (0x0007d26b) wml_miniature_view_pane

0x68ac,	// (0x000769d3) aid_size_wml_view

0x68b4,	// (0x000769db) wml_miniature_view_pane_g1

0x68bd,	// (0x000769e4) wml_miniature_view_pane_g2

0x68c6,	// (0x000769ed) wml_miniature_view_pane_g3

0x68ce,	// (0x000769f5) wml_miniature_view_pane_g4

0x68d6,	// (0x000769fd) wml_miniature_view_pane_g5

0x68de,	// (0x00076a05) wml_miniature_view_pane_g6

0x68e6,	// (0x00076a0d) wml_miniature_view_pane_g7

0x68ee,	// (0x00076a15) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0007f7d5) wml_miniature_view_pane_g

0xd14c,	// (0x0007d273) background_graphic_ParamLimits

0xd14c,	// (0x0007d273) background_graphic

0xd158,	// (0x0007d27f) wml_tabs_2_pane

0xd161,	// (0x0007d288) wml_tabs_3_pane_ParamLimits

0xd161,	// (0x0007d288) wml_tabs_3_pane

0xd173,	// (0x0007d29a) wml_tabs_4_pane_ParamLimits

0xd173,	// (0x0007d29a) wml_tabs_4_pane

0xd189,	// (0x0007d2b0) wml_tabs_5_pane_ParamLimits

0xd189,	// (0x0007d2b0) wml_tabs_5_pane

0xd1a3,	// (0x0007d2ca) wml_tabs_pane_g2_ParamLimits

0xd1a3,	// (0x0007d2ca) wml_tabs_pane_g2

0xd1b7,	// (0x0007d2de) wml_tabs_pane_g3_ParamLimits

0xd1b7,	// (0x0007d2de) wml_tabs_pane_g3

0x68f6,	// (0x00076a1d) wml_tabs_2_active_pane_ParamLimits

0x68f6,	// (0x00076a1d) wml_tabs_2_active_pane

0x690a,	// (0x00076a31) wml_tabs_2_passive_pane_ParamLimits

0x690a,	// (0x00076a31) wml_tabs_2_passive_pane

0x691e,	// (0x00076a45) wml_tabs_3_active_pane_cp_ParamLimits

0x691e,	// (0x00076a45) wml_tabs_3_active_pane_cp

0x6933,	// (0x00076a5a) wml_tabs_3_passive_pane_ParamLimits

0x6933,	// (0x00076a5a) wml_tabs_3_passive_pane

0x6946,	// (0x00076a6d) wml_tabs_3_passive_pane_cp_ParamLimits

0x6946,	// (0x00076a6d) wml_tabs_3_passive_pane_cp

0x695d,	// (0x00076a84) tabs_4_active_pane

0x6965,	// (0x00076a8c) tabs_4_passive_pane

0x696f,	// (0x00076a96) tabs_4_passive_pane_cp

0x6977,	// (0x00076a9e) tabs_4_passive_pane_cp2

0x5a3a,	// (0x00075b61) aid_height_text

0x519d,	// (0x000752c4) mup_volume_cont_pane_ParamLimits

0x519d,	// (0x000752c4) mup_volume_cont_pane

0x2f71,	// (0x00073098) aid_size_cell_pinb

0x2f7b,	// (0x000730a2) aid_size_list_pinb

0x6861,	// (0x00076988) mup2_volume_cont_pane_ParamLimits

0x6861,	// (0x00076988) mup2_volume_cont_pane

0xd1cb,	// (0x0007d2f2) mup2_volume_cont_pane_g1_ParamLimits

0xd1cb,	// (0x0007d2f2) mup2_volume_cont_pane_g1

0x256a,	// (0x00072691) aid_size_cell_touch_ParamLimits

0x256a,	// (0x00072691) aid_size_cell_touch

0x27c4,	// (0x000728eb) touch_pane_ParamLimits

0x27c4,	// (0x000728eb) touch_pane

0x254c,	// (0x00072673) main_rss2_pane

0xd20d,	// (0x0007d334) listscroll_rss2_pane

0xd216,	// (0x0007d33d) rss2_navigation_pane

0xd21e,	// (0x0007d345) list_rss2_pane

0xba31,	// (0x0007bb58) scroll_pane_cp22

0xd226,	// (0x0007d34d) rss2_navigation_pane_g1

0xd22f,	// (0x0007d356) rss2_navigation_pane_g2

0xd237,	// (0x0007d35e) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0007f7e6) rss2_navigation_pane_g

0xd23f,	// (0x0007d366) rss2_navigation_pane_t1

0x6981,	// (0x00076aa8) rss2_list_single_pane_ParamLimits

0x6981,	// (0x00076aa8) rss2_list_single_pane

0xd24d,	// (0x0007d374) rss2_list_single_pane_t2

0xd25b,	// (0x0007d382) rss2_list_single_pane_t3_ParamLimits

0xd25b,	// (0x0007d382) rss2_list_single_pane_t3

0xec6a,	// (0x0007ed91) rss2_list_single_pane_t4

0x4a46,	// (0x00074b6d) smil_status_pane_g1

0xb262,	// (0x0007b389) main_image2_pane_ParamLimits

0xb262,	// (0x0007b389) main_image2_pane

0x6423,	// (0x0007654a) main_camera2_pane_g9_ParamLimits

0x6423,	// (0x0007654a) main_camera2_pane_g9

0x6551,	// (0x00076678) main_camera2_pane_t5_ParamLimits

0x6551,	// (0x00076678) main_camera2_pane_t5

0xd0ee,	// (0x0007d215) main_camera2_pane_t6_ParamLimits

0xd0ee,	// (0x0007d215) main_camera2_pane_t6

0x6999,	// (0x00076ac0) main_image2_pane_g1_ParamLimits

0x6999,	// (0x00076ac0) main_image2_pane_g1

0x5773,	// (0x0007589a) smil2_video_pane_ParamLimits

0x5773,	// (0x0007589a) smil2_video_pane

0xb25a,	// (0x0007b381) aid_zoom_text_primary_cp

0x2774,	// (0x0007289b) popup_preview_fixed_window

0x4008,	// (0x0007412f) im_reading_pane_g1

0x629a,	// (0x000763c1) cams2_bc_adjust_pane_cp_ParamLimits

0x629a,	// (0x000763c1) cams2_bc_adjust_pane_cp

0x6580,	// (0x000766a7) cams2_bc_adjust_pane_ParamLimits

0x6580,	// (0x000766a7) cams2_bc_adjust_pane

0xec78,	// (0x0007ed9f) cams2_bc_adjust_pane_g1

0xec80,	// (0x0007eda7) cams2_slider_pane

0xec89,	// (0x0007edb0) cams2_slider_pane_g1

0xec92,	// (0x0007edb9) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0007f7ed) cams2_slider_pane_g

0x30cb,	// (0x000731f2) calc_display_pane_ParamLimits

0x30f1,	// (0x00073218) calc_paper_pane_ParamLimits

0x3114,	// (0x0007323b) grid_calc_pane_ParamLimits

0xb8e4,	// (0x0007ba0b) popup_clock_digital_window_t1_ParamLimits

0xbe63,	// (0x0007bf8a) main_image_pane_t1

0x30ad,	// (0x000731d4) aid_size_cell_calc_ParamLimits

0x30ad,	// (0x000731d4) aid_size_cell_calc

0x5d67,	// (0x00075e8e) popup_blid_sat_info2_window_ParamLimits

0x5d67,	// (0x00075e8e) popup_blid_sat_info2_window

0xecb4,	// (0x0007eddb) aid_size_cell_blid

0xecbc,	// (0x0007ede3) bg_popup_window_pane_cp07

0xecdf,	// (0x0007ee06) grid_popup_blid_pane

0x028c,	// (0x000703b3) heading_pane_cp05_ParamLimits

0x028c,	// (0x000703b3) heading_pane_cp05

0x0356,	// (0x0007047d) cell_popup_blid_pane_ParamLimits

0x0356,	// (0x0007047d) cell_popup_blid_pane

0x037c,	// (0x000704a3) cell_popup_blid_pane_g1

0x0384,	// (0x000704ab) cell_popup_blid_pane_t1

0x6831,	// (0x00076958) mup2_indicator_pane_ParamLimits

0x6831,	// (0x00076958) mup2_indicator_pane

0xbb7e,	// (0x0007bca5) mup2_visualizer_osc_pane

0xd12a,	// (0x0007d251) mup2_visualizer_spec_pane_ParamLimits

0xd12a,	// (0x0007d251) mup2_visualizer_spec_pane

0x69af,	// (0x00076ad6) mup2_spec_half_pane

0x69b8,	// (0x00076adf) mup2_spec_half_pane_cp

0x69c0,	// (0x00076ae7) mup2_spec_bar_pane_ParamLimits

0x69c0,	// (0x00076ae7) mup2_spec_bar_pane

0xd079,	// (0x0007d1a0) mup2_spec_bar_pane_g1

0xd083,	// (0x0007d1aa) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0007f760) mup2_spec_bar_pane_g

0x69e0,	// (0x00076b07) mup2_osc_middle_pane

0xd095,	// (0x0007d1bc) mup2_visualizer_osc_pane_g1

0x2836,	// (0x0007295d) popup_number_entry_window_t1_ParamLimits

0x2849,	// (0x00072970) popup_number_entry_window_t2_ParamLimits

0x285b,	// (0x00072982) popup_number_entry_window_t3_ParamLimits

0x286d,	// (0x00072994) popup_number_entry_window_t5_ParamLimits

0x286d,	// (0x00072994) popup_number_entry_window_t5

0xf0fb,	// (0x0007f222) popup_number_entry_window_t_ParamLimits

0x28a2,	// (0x000729c9) text_title_cp2_ParamLimits

0xbd3d,	// (0x0007be64) aid_hotspot_pointer_text2_pane

0xbd63,	// (0x0007be8a) main_viewer_pane_g9_ParamLimits

0xbd63,	// (0x0007be8a) main_viewer_pane_g9

0xb4a5,	// (0x0007b5cc) cale_month_pane_t1_ParamLimits

0xb53a,	// (0x0007b661) bg_cale_pane_ParamLimits

0xb552,	// (0x0007b679) list_cale_pane_ParamLimits

0x36a6,	// (0x000737cd) listscroll_cale_day_pane_t1

0xb563,	// (0x0007b68a) scroll_pane_cp09_ParamLimits

0x51d3,	// (0x000752fa) main_mup_eq_pane_t1_ParamLimits

0x51d3,	// (0x000752fa) main_mup_eq_pane_t1

0x51ed,	// (0x00075314) main_mup_eq_pane_t2_ParamLimits

0x51ed,	// (0x00075314) main_mup_eq_pane_t2

0x5207,	// (0x0007532e) main_mup_eq_pane_t3_ParamLimits

0x5207,	// (0x0007532e) main_mup_eq_pane_t3

0x5223,	// (0x0007534a) main_mup_eq_pane_t4_ParamLimits

0x5223,	// (0x0007534a) main_mup_eq_pane_t4

0x523f,	// (0x00075366) main_mup_eq_pane_t5_ParamLimits

0x523f,	// (0x00075366) main_mup_eq_pane_t5

0x525b,	// (0x00075382) main_mup_eq_pane_t6_ParamLimits

0x525b,	// (0x00075382) main_mup_eq_pane_t6

0x526f,	// (0x00075396) main_mup_eq_pane_t7_ParamLimits

0x526f,	// (0x00075396) main_mup_eq_pane_t7

0x5283,	// (0x000753aa) main_mup_eq_pane_t8_ParamLimits

0x5283,	// (0x000753aa) main_mup_eq_pane_t8

0x5297,	// (0x000753be) main_mup_eq_pane_t9_ParamLimits

0x5297,	// (0x000753be) main_mup_eq_pane_t9

0x52b1,	// (0x000753d8) main_mup_eq_pane_t10_ParamLimits

0x52b1,	// (0x000753d8) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0007f5af) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0007f5af) main_mup_eq_pane_t

0x5360,	// (0x00075487) mup_equalizer_pane_cp5_ParamLimits

0x5374,	// (0x0007549b) mup_equalizer_pane_cp6_ParamLimits

0x5388,	// (0x000754af) mup_equalizer_pane_cp7_ParamLimits

0x254c,	// (0x00072673) main_gallery_pane

0xd09e,	// (0x0007d1c5) smil2_volume_pane

0xd0a6,	// (0x0007d1cd) smil_status_volume_pane_g1_ParamLimits

0xd0b9,	// (0x0007d1e0) smil_status_volume_pane_g2_ParamLimits

0xd0cc,	// (0x0007d1f3) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0007f765) smil_status_volume_pane_g_ParamLimits

0xecbc,	// (0x0007ede3) bg_popup_window_pane_cp07_ParamLimits

0xecca,	// (0x0007edf1) blid_firmament_pane

0x69e9,	// (0x00076b10) aid_size_cell_gallery_ParamLimits

0x69e9,	// (0x00076b10) aid_size_cell_gallery

0x69ff,	// (0x00076b26) grid_gallery_pane_ParamLimits

0x69ff,	// (0x00076b26) grid_gallery_pane

0x6a18,	// (0x00076b3f) cell_gallery_pane_ParamLimits

0x6a18,	// (0x00076b3f) cell_gallery_pane

0x0392,	// (0x000704b9) bg_cell_gallery_focus_pane_ParamLimits

0x0392,	// (0x000704b9) bg_cell_gallery_focus_pane

0x03a4,	// (0x000704cb) cell_gallery_pane_g1_ParamLimits

0x03a4,	// (0x000704cb) cell_gallery_pane_g1

0x6a61,	// (0x00076b88) cell_gallery_pane_g2_ParamLimits

0x6a61,	// (0x00076b88) cell_gallery_pane_g2

0x6a6e,	// (0x00076b95) cell_gallery_pane_g3_ParamLimits

0x6a6e,	// (0x00076b95) cell_gallery_pane_g3

0x03b0,	// (0x000704d7) cell_gallery_pane_g4_ParamLimits

0x03b0,	// (0x000704d7) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0007f813) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0007f813) cell_gallery_pane_g

0x03bc,	// (0x000704e3) bg_cell_gallery_focus_pane_g1

0x03c4,	// (0x000704eb) bg_cell_gallery_focus_pane_g2

0x03cc,	// (0x000704f3) bg_cell_gallery_focus_pane_g3

0x03d4,	// (0x000704fb) bg_cell_gallery_focus_pane_g4

0x03dc,	// (0x00070503) bg_cell_gallery_focus_pane_g5

0x03e4,	// (0x0007050b) bg_cell_gallery_focus_pane_g6

0x03ec,	// (0x00070513) bg_cell_gallery_focus_pane_g7

0x03f4,	// (0x0007051b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0007f81c) bg_cell_gallery_focus_pane_g

0x03fc,	// (0x00070523) aid_firma_cardinal

0x0410,	// (0x00070537) blid_firmament_pane_t1

0x0427,	// (0x0007054e) blid_firmament_pane_t2

0x043e,	// (0x00070565) blid_firmament_pane_t3

0x0455,	// (0x0007057c) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0007f82d) blid_firmament_pane_t

0x046c,	// (0x00070593) blid_sat_info_pane

0x047c,	// (0x000705a3) blid_sat_info_pane_g1

0x047c,	// (0x000705a3) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0007f836) blid_sat_info_pane_g

0x0486,	// (0x000705ad) blid_sat_info_pane_t1

0x0494,	// (0x000705bb) smil2_volume_content_pane

0x049d,	// (0x000705c4) smil2_volume_pane_g1

0x04a5,	// (0x000705cc) smil2_volume_content_pane_g1

0x04ae,	// (0x000705d5) smil2_volume_content_pane_g2

0x04b7,	// (0x000705de) smil2_volume_content_pane_g3

0x04c0,	// (0x000705e7) smil2_volume_content_pane_g4

0x04c9,	// (0x000705f0) smil2_volume_content_pane_g5

0x04d2,	// (0x000705f9) smil2_volume_content_pane_g6

0x04db,	// (0x00070602) smil2_volume_content_pane_g7

0x04e4,	// (0x0007060b) smil2_volume_content_pane_g8

0x04ed,	// (0x00070614) smil2_volume_content_pane_g9

0x04f6,	// (0x0007061d) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0007f83b) smil2_volume_content_pane_g

0x370e,	// (0x00073835) cale_week_day_heading_pane_t1_ParamLimits

0x3722,	// (0x00073849) cale_week_day_heading_pane_t2_ParamLimits

0x3736,	// (0x0007385d) cale_week_day_heading_pane_t3_ParamLimits

0x374a,	// (0x00073871) cale_week_day_heading_pane_t4_ParamLimits

0x375e,	// (0x00073885) cale_week_day_heading_pane_t5_ParamLimits

0x3772,	// (0x00073899) cale_week_day_heading_pane_t6_ParamLimits

0x3786,	// (0x000738ad) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0007f327) cale_week_day_heading_pane_t_ParamLimits

0x379a,	// (0x000738c1) bg_cale_side_pane_ParamLimits

0x37a8,	// (0x000738cf) cale_week_time_pane_t1_ParamLimits

0x37c0,	// (0x000738e7) cale_week_time_pane_t2_ParamLimits

0x37d8,	// (0x000738ff) cale_week_time_pane_t3_ParamLimits

0x37f0,	// (0x00073917) cale_week_time_pane_t4_ParamLimits

0x3808,	// (0x0007392f) cale_week_time_pane_t5_ParamLimits

0x3820,	// (0x00073947) cale_week_time_pane_t6_ParamLimits

0x3838,	// (0x0007395f) cale_week_time_pane_t7_ParamLimits

0x3850,	// (0x00073977) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0007f336) cale_week_time_pane_t_ParamLimits

0x3868,	// (0x0007398f) cell_cale_week_pane_g2_ParamLimits

0x379a,	// (0x000738c1) bg_cale_side_pane_cp01_ParamLimits

0x48ef,	// (0x00074a16) cale_month_week_pane_t1_ParamLimits

0x4906,	// (0x00074a2d) cale_month_week_pane_t2_ParamLimits

0x491d,	// (0x00074a44) cale_month_week_pane_t3_ParamLimits

0x4934,	// (0x00074a5b) cale_month_week_pane_t4_ParamLimits

0x494b,	// (0x00074a72) cale_month_week_pane_t5_ParamLimits

0x4962,	// (0x00074a89) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0007f40f) cale_month_week_pane_t_ParamLimits

0xb4e1,	// (0x0007b608) cell_cale_month_pane_g1_ParamLimits

0x254c,	// (0x00072673) main_cale_event_viewer_pane

0x254c,	// (0x00072673) listscroll_cale_event_viewer_pane

0x04ff,	// (0x00070626) list_cale_ev_pane

0x0507,	// (0x0007062e) scroll_pane_cp023

0x0513,	// (0x0007063a) field_cale_ev_pane_ParamLimits

0x0513,	// (0x0007063a) field_cale_ev_pane

0x052d,	// (0x00070654) field_cale_ev_content_pane_ParamLimits

0x052d,	// (0x00070654) field_cale_ev_content_pane

0x0539,	// (0x00070660) field_cale_ev_pane_g1_ParamLimits

0x0539,	// (0x00070660) field_cale_ev_pane_g1

0x0545,	// (0x0007066c) field_cale_ev_pane_g2_ParamLimits

0x0545,	// (0x0007066c) field_cale_ev_pane_g2

0x055d,	// (0x00070684) field_cale_ev_pane_g3_ParamLimits

0x055d,	// (0x00070684) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0007f850) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0007f850) field_cale_ev_pane_g

0x0575,	// (0x0007069c) field_cale_ev_pane_t1_ParamLimits

0x0575,	// (0x0007069c) field_cale_ev_pane_t1

0x058c,	// (0x000706b3) field_cale_ev_content_pane_t1_ParamLimits

0x058c,	// (0x000706b3) field_cale_ev_content_pane_t1

0xbd07,	// (0x0007be2e) bg_button_pane_cp01

0x324b,	// (0x00073372) listscroll_cale_week_pane_ParamLimits

0x3508,	// (0x0007362f) popup_toolbar_window_cp01

0x36a6,	// (0x000737cd) listscroll_cale_week_pane_t1_ParamLimits

0x324b,	// (0x00073372) listscroll_cale_day_pane_ParamLimits

0x4aa5,	// (0x00074bcc) popup_toolbar_window_cp02

0x36a6,	// (0x000737cd) listscroll_cale_day_pane_t1_ParamLimits

0x324b,	// (0x00073372) main_cale_month_pane_ParamLimits

0x5f8d,	// (0x000760b4) popup_toolbar_window_cp03_ParamLimits

0x5f8d,	// (0x000760b4) popup_toolbar_window_cp03

0x5637,	// (0x0007575e) main_image_pane_g2_ParamLimits

0x5637,	// (0x0007575e) main_image_pane_g2

0x5648,	// (0x0007576f) main_image_pane_g3_ParamLimits

0x5648,	// (0x0007576f) main_image_pane_g3

0x0002,

0xf51a,	// (0x0007f641) main_image_pane_g_ParamLimits

0xf51a,	// (0x0007f641) main_image_pane_g

0xbe63,	// (0x0007bf8a) main_image_pane_t1_ParamLimits

0x5659,	// (0x00075780) main_image_pane_t2_ParamLimits

0x5659,	// (0x00075780) main_image_pane_t2

0x566b,	// (0x00075792) main_image_pane_t3_ParamLimits

0x566b,	// (0x00075792) main_image_pane_t3

0x5693,	// (0x000757ba) main_image_pane_t4_ParamLimits

0x5693,	// (0x000757ba) main_image_pane_t4

0x0003,

0xf521,	// (0x0007f648) main_image_pane_t_ParamLimits

0xf521,	// (0x0007f648) main_image_pane_t

0x56b3,	// (0x000757da) popup_image_details_window_cp01

0x56bd,	// (0x000757e4) popup_toobar_trans_pane_cp01_ParamLimits

0x56bd,	// (0x000757e4) popup_toobar_trans_pane_cp01

0x5e3e,	// (0x00075f65) popup_image_details_window_ParamLimits

0x5e3e,	// (0x00075f65) popup_image_details_window

0xcfff,	// (0x0007d126) popup_image_focus_window

0x6254,	// (0x0007637b) camera2_autofocus_pane_ParamLimits

0x6254,	// (0x0007637b) camera2_autofocus_pane

0x254c,	// (0x00072673) bg_popup_sub_pane_cp06

0x05a9,	// (0x000706d0) popup_image_focus_window_g1

0x05b1,	// (0x000706d8) popup_image_focus_window_g2

0x05b9,	// (0x000706e0) popup_image_focus_window_g3

0x05c1,	// (0x000706e8) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0007f857) popup_image_focus_window_g

0x05c9,	// (0x000706f0) popup_image_focus_window_t1

0x05d7,	// (0x000706fe) popup_image_focus_window_t2

0x05e7,	// (0x0007070e) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0007f860) popup_image_focus_window_t

0x05f5,	// (0x0007071c) camera2_autofocus_pane_g1

0xb262,	// (0x0007b389) bg_tb_trans_pane_cp01

0x0603,	// (0x0007072a) popup_image_details_window_g1

0x0616,	// (0x0007073d) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0007f872) popup_image_details_window_g

0x063f,	// (0x00070766) popup_image_details_window_t1

0x0651,	// (0x00070778) popup_image_details_window_t2

0x066a,	// (0x00070791) popup_image_details_window_t3

0x067e,	// (0x000707a5) popup_image_details_window_t4

0x0699,	// (0x000707c0) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0007f879) popup_image_details_window_t

0x3237,	// (0x0007335e) bg_calc_paper_pane_ParamLimits

0x254c,	// (0x00072673) grid_highlight_pane_cp013

0xb278,	// (0x0007b39f) list_calc_pane_ParamLimits

0xb28a,	// (0x0007b3b1) scroll_pane_cp024

0x324b,	// (0x00073372) bg_calc_display_pane_ParamLimits

0x3257,	// (0x0007337e) calc_display_pane_t1_ParamLimits

0x3269,	// (0x00073390) calc_display_pane_t2_ParamLimits

0xb292,	// (0x0007b3b9) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0007f2a9) calc_display_pane_t_ParamLimits

0x3379,	// (0x000734a0) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0007f2c6) cell_calc_pane_g

0x3382,	// (0x000734a9) cell_calc_pane_t1

0x3391,	// (0x000734b8) grid_highlight_pane_cp02_ParamLimits

0x33a7,	// (0x000734ce) toolbar_button_pane_cp01_ParamLimits

0x33a7,	// (0x000734ce) toolbar_button_pane_cp01

0xbea8,	// (0x0007bfcf) temp_image_control_pane_ParamLimits

0xbea8,	// (0x0007bfcf) temp_image_control_pane

0xb262,	// (0x0007b389) main_mp3_pane

0x06b3,	// (0x000707da) temp_image_control_pane_g1_ParamLimits

0x06b3,	// (0x000707da) temp_image_control_pane_g1

0x06c1,	// (0x000707e8) temp_image_control_pane_g2_ParamLimits

0x06c1,	// (0x000707e8) temp_image_control_pane_g2

0x06d3,	// (0x000707fa) temp_image_control_pane_g3_ParamLimits

0x06d3,	// (0x000707fa) temp_image_control_pane_g3

0x6aab,	// (0x00076bd2) temp_image_control_pane_g4_ParamLimits

0x6aab,	// (0x00076bd2) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0007f884) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0007f884) temp_image_control_pane_g

0x06b3,	// (0x000707da) main_mp3_pane_g1

0x6abe,	// (0x00076be5) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0007f88d) main_mp3_pane_g

0x0716,	// (0x0007083d) main_mp3_pane_t1

0x39e2,	// (0x00073b09) main_camera_pane_g8_ParamLimits

0x39e2,	// (0x00073b09) main_camera_pane_g8

0x3b99,	// (0x00073cc0) main_video_pane_g7_ParamLimits

0x3b99,	// (0x00073cc0) main_video_pane_g7

0xd10c,	// (0x0007d233) main_camera2_pane_t7_ParamLimits

0xd10c,	// (0x0007d233) main_camera2_pane_t7

0x40d5,	// (0x000741fc) scroll_pane_cp025_ParamLimits

0x40d5,	// (0x000741fc) scroll_pane_cp025

0x40e9,	// (0x00074210) scroll_pane_cp026_ParamLimits

0x40e9,	// (0x00074210) scroll_pane_cp026

0x40f8,	// (0x0007421f) wml_content_pane_ParamLimits

0x254c,	// (0x00072673) main_touch_calib_pane

0x6b89,	// (0x00076cb0) main_touch_calib_pane_g1

0x6b95,	// (0x00076cbc) main_touch_calib_pane_g2

0x6ba1,	// (0x00076cc8) main_touch_calib_pane_g3

0x6bad,	// (0x00076cd4) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0007f8ab) main_touch_calib_pane_g

0x6bb9,	// (0x00076ce0) main_touch_calib_pane_t1

0x6bd3,	// (0x00076cfa) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0007f8b4) main_touch_calib_pane_t

0xbabf,	// (0x0007bbe6) mup_progress_pane_cp02

0xbade,	// (0x0007bc05) navi_pane_g1

0xbb40,	// (0x0007bc67) navi_pane_mp_t3

0xb262,	// (0x0007b389) main_mp3_pane_ParamLimits

0x5fcb,	// (0x000760f2) navi_pane_ParamLimits

0x06b3,	// (0x000707da) main_mp3_pane_g1_ParamLimits

0x6abe,	// (0x00076be5) main_mp3_pane_g2_ParamLimits

0x6acc,	// (0x00076bf3) main_mp3_pane_g3_ParamLimits

0x6acc,	// (0x00076bf3) main_mp3_pane_g3

0x6ada,	// (0x00076c01) main_mp3_pane_g4_ParamLimits

0x6ada,	// (0x00076c01) main_mp3_pane_g4

0x06e3,	// (0x0007080a) main_mp3_pane_g5_ParamLimits

0x06e3,	// (0x0007080a) main_mp3_pane_g5

0x06f1,	// (0x00070818) main_mp3_pane_g6_ParamLimits

0x06f1,	// (0x00070818) main_mp3_pane_g6

0x06fe,	// (0x00070825) main_mp3_pane_g7_ParamLimits

0x06fe,	// (0x00070825) main_mp3_pane_g7

0x070a,	// (0x00070831) main_mp3_pane_g8_ParamLimits

0x070a,	// (0x00070831) main_mp3_pane_g8

0xf766,	// (0x0007f88d) main_mp3_pane_g_ParamLimits

0x6ae8,	// (0x00076c0f) main_mp3_pane_t2

0x6af6,	// (0x00076c1d) main_mp3_pane_t3

0x0724,	// (0x0007084b) main_mp3_pane_t4

0x0732,	// (0x00070859) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0007f89e) main_mp3_pane_t

0x0740,	// (0x00070867) mup_progress_pane_cp01

0xb25a,	// (0x0007b381) aid_zoom_text_secondary2

0x04ff,	// (0x00070626) list_cale_ev2_pane

0x0507,	// (0x0007062e) scroll_pane_cp023_ParamLimits

0x6c29,	// (0x00076d50) field_cale_ev2_pane_ParamLimits

0x6c29,	// (0x00076d50) field_cale_ev2_pane

0x6c4f,	// (0x00076d76) field_cale_ev2_pane_g1_ParamLimits

0x6c4f,	// (0x00076d76) field_cale_ev2_pane_g1

0x6c5b,	// (0x00076d82) field_cale_ev2_pane_g2_ParamLimits

0x6c5b,	// (0x00076d82) field_cale_ev2_pane_g2

0x6c73,	// (0x00076d9a) field_cale_ev2_pane_g3_ParamLimits

0x6c73,	// (0x00076d9a) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0007f8bf) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0007f8bf) field_cale_ev2_pane_g

0xd278,	// (0x0007d39f) field_cale_ev2_pane_t1_ParamLimits

0xd278,	// (0x0007d39f) field_cale_ev2_pane_t1

0xd28f,	// (0x0007d3b6) field_cale_ev2_pane_t2_ParamLimits

0xd28f,	// (0x0007d3b6) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0007f8c8) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0007f8c8) field_cale_ev2_pane_t

0x54e7,	// (0x0007560e) main_postcard_pane_g5_ParamLimits

0x54e7,	// (0x0007560e) main_postcard_pane_g5

0x54fd,	// (0x00075624) main_postcard_pane_g6_ParamLimits

0x54fd,	// (0x00075624) main_postcard_pane_g6

0x3923,	// (0x00073a4a) camera2_autofocus_pane_cp_ParamLimits

0x3923,	// (0x00073a4a) camera2_autofocus_pane_cp

0xb262,	// (0x0007b389) main_mup3_pane

0x6cab,	// (0x00076dd2) main_mup3_pane_g1_ParamLimits

0x6cab,	// (0x00076dd2) main_mup3_pane_g1

0x6ccd,	// (0x00076df4) main_mup3_pane_g2_ParamLimits

0x6ccd,	// (0x00076df4) main_mup3_pane_g2

0x6d4e,	// (0x00076e75) main_mup3_pane_g3_ParamLimits

0x6d4e,	// (0x00076e75) main_mup3_pane_g3

0x6d90,	// (0x00076eb7) main_mup3_pane_g4_ParamLimits

0x6d90,	// (0x00076eb7) main_mup3_pane_g4

0x6dd2,	// (0x00076ef9) main_mup3_pane_g5_ParamLimits

0x6dd2,	// (0x00076ef9) main_mup3_pane_g5

0x6e16,	// (0x00076f3d) main_mup3_pane_g6_ParamLimits

0x6e16,	// (0x00076f3d) main_mup3_pane_g6

0x0748,	// (0x0007086f) main_mup3_pane_g7_ParamLimits

0x0748,	// (0x0007086f) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0007f8d8) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0007f8d8) main_mup3_pane_g

0x6e92,	// (0x00076fb9) main_mup3_pane_t1_ParamLimits

0x6e92,	// (0x00076fb9) main_mup3_pane_t1

0x6f06,	// (0x0007702d) main_mup3_pane_t2_ParamLimits

0x6f06,	// (0x0007702d) main_mup3_pane_t2

0x6fda,	// (0x00077101) main_mup3_pane_t4_ParamLimits

0x6fda,	// (0x00077101) main_mup3_pane_t4

0x7034,	// (0x0007715b) main_mup3_pane_t5_ParamLimits

0x7034,	// (0x0007715b) main_mup3_pane_t5

0x70e8,	// (0x0007720f) main_mup3_pane_t6_ParamLimits

0x70e8,	// (0x0007720f) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0007f8e9) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0007f8e9) main_mup3_pane_t

0x719c,	// (0x000772c3) mup3_progress_pane_ParamLimits

0x719c,	// (0x000772c3) mup3_progress_pane

0x7218,	// (0x0007733f) popup_mup3_control_window_ParamLimits

0x7218,	// (0x0007733f) popup_mup3_control_window

0x0756,	// (0x0007087d) popup_mup3_text_window

0x724a,	// (0x00077371) mup3_progress_pane_t1

0x7261,	// (0x00077388) mup3_progress_pane_t2

0x075e,	// (0x00070885) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0007f8f6) mup3_progress_pane_t

0x0775,	// (0x0007089c) mup_progress_pane_cp03

0x254c,	// (0x00072673) bg_tb_trans_pane_cp04

0x7278,	// (0x0007739f) mup3_volume_pane

0x7280,	// (0x000773a7) popup_mup3_control_window_g1

0x7289,	// (0x000773b0) mup3_volume_pane_g1

0x7292,	// (0x000773b9) mup3_volume_pane_g2

0x729b,	// (0x000773c2) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0007f8fd) mup3_volume_pane_g

0x254c,	// (0x00072673) bg_tb_trans_pane_cp03

0x0785,	// (0x000708ac) popup_mup3_text_window_g1

0x078d,	// (0x000708b4) popup_mup3_text_window_t1

0x3346,	// (0x0007346d) list_calc_item_pane_g1_ParamLimits

0xd1f4,	// (0x0007d31b) mup_volume_pane_cp_g1

0x6bed,	// (0x00076d14) main_touch_calib_pane_t3

0x6c01,	// (0x00076d28) main_touch_calib_pane_t4

0x6c15,	// (0x00076d3c) main_touch_calib_pane_t5

0x2556,	// (0x0007267d) aid_cell_size_toolbar2

0x255e,	// (0x00072685) aid_popup3_width_pane

0xb24a,	// (0x0007b371) aid_zoom_text_msg_primary

0xb36c,	// (0x0007b493) vorec_t7

0x32b0,	// (0x000733d7) bg_calc_paper_pane_g1_ParamLimits

0x32bc,	// (0x000733e3) bg_calc_paper_pane_g2_ParamLimits

0x32c8,	// (0x000733ef) bg_calc_paper_pane_g3_ParamLimits

0x32d4,	// (0x000733fb) bg_calc_paper_pane_g4_ParamLimits

0x32e0,	// (0x00073407) bg_calc_paper_pane_g5_ParamLimits

0x32ec,	// (0x00073413) bg_calc_paper_pane_g6_ParamLimits

0x32fb,	// (0x00073422) bg_calc_paper_pane_g7_ParamLimits

0x330a,	// (0x00073431) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0007f2b0) bg_calc_paper_pane_g_ParamLimits

0x331d,	// (0x00073444) calc_bg_paper_pane_g9_ParamLimits

0x3a89,	// (0x00073bb0) image_qvga_pane_ParamLimits

0x3a89,	// (0x00073bb0) image_qvga_pane

0x2edb,	// (0x00073002) bg_popup_sub_pane_cp04_ParamLimits

0xbddf,	// (0x0007bf06) popup_mup_playback_window_g1_ParamLimits

0xbdeb,	// (0x0007bf12) popup_mup_playback_window_t1_ParamLimits

0xbe00,	// (0x0007bf27) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0007f63c) popup_mup_playback_window_t_ParamLimits

0x674b,	// (0x00076872) main_mup2_pane_g3_ParamLimits

0x674b,	// (0x00076872) main_mup2_pane_g3

0x3dd3,	// (0x00073efa) popup_toolbar_window_cp04

0xc1f5,	// (0x0007c31c) popup_call2_audio_second_window_g3_ParamLimits

0xc1f5,	// (0x0007c31c) popup_call2_audio_second_window_g3

0xc5ff,	// (0x0007c726) popup_call2_audio_first_window_g4_ParamLimits

0xc5ff,	// (0x0007c726) popup_call2_audio_first_window_g4

0xcc7e,	// (0x0007cda5) popup_call2_audio_in_window_g4_ParamLimits

0xcc7e,	// (0x0007cda5) popup_call2_audio_in_window_g4

0x5619,	// (0x00075740) aid_area_sk_bg_cut_ParamLimits

0x5619,	// (0x00075740) aid_area_sk_bg_cut

0xbe15,	// (0x0007bf3c) aid_area_sk_bg_cut_2_ParamLimits

0xbe15,	// (0x0007bf3c) aid_area_sk_bg_cut_2

0x6a51,	// (0x00076b78) aid_placing_details_win

0x6a59,	// (0x00076b80) aid_placing_details_win_2

0x05f5,	// (0x0007071c) camera2_autofocus_pane_g1_ParamLimits

0x2759,	// (0x00072880) popup_fixed_preview_cale_window_ParamLimits

0x2759,	// (0x00072880) popup_fixed_preview_cale_window

0xbb98,	// (0x0007bcbf) navi_slider_pane_g3

0xbba1,	// (0x0007bcc8) navi_slider_pane_g4

0xbbaa,	// (0x0007bcd1) navi_slider_pane_g5

0xbb98,	// (0x0007bcbf) navi_slider_pane_g6

0xbbb3,	// (0x0007bcda) navi_slider_pane_g7

0xbcd4,	// (0x0007bdfb) mup_scale_pane_g3

0xbcdd,	// (0x0007be04) mup_scale_pane_g4

0xbce6,	// (0x0007be0d) mup_scale_pane_g5

0x539c,	// (0x000754c3) mup_scale_pane_g6

0x53a5,	// (0x000754cc) mup_scale_pane_g7

0xbb98,	// (0x0007bcbf) cams2_slider_pane_g3

0xec9b,	// (0x0007edc2) cams2_slider_pane_g4

0xeca3,	// (0x0007edca) cams2_slider_pane_g5

0xbb98,	// (0x0007bcbf) cams2_slider_pane_g6

0xecab,	// (0x0007edd2) cams2_slider_pane_g7

0x047c,	// (0x000705a3) camera2_autofocus_pane_cp_g1

0x079b,	// (0x000708c2) bg_popup_preview_window_pane_cp02_ParamLimits

0x079b,	// (0x000708c2) bg_popup_preview_window_pane_cp02

0x07a7,	// (0x000708ce) list_fp_cale_pane_ParamLimits

0x07a7,	// (0x000708ce) list_fp_cale_pane

0x07b3,	// (0x000708da) popup_fixed_preview_cale_window_t1_ParamLimits

0x07b3,	// (0x000708da) popup_fixed_preview_cale_window_t1

0x72a4,	// (0x000773cb) popup_fixed_preview_cale_window_t2_ParamLimits

0x72a4,	// (0x000773cb) popup_fixed_preview_cale_window_t2

0x72b9,	// (0x000773e0) popup_fixed_preview_cale_window_t3_ParamLimits

0x72b9,	// (0x000773e0) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0007f904) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0007f904) popup_fixed_preview_cale_window_t

0x72ce,	// (0x000773f5) list_single_fp_cale_pane_ParamLimits

0x72ce,	// (0x000773f5) list_single_fp_cale_pane

0x07d1,	// (0x000708f8) list_single_fp_cale_pane_g1_ParamLimits

0x07d1,	// (0x000708f8) list_single_fp_cale_pane_g1

0x07dd,	// (0x00070904) list_single_fp_cale_pane_g2_ParamLimits

0x07dd,	// (0x00070904) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0007f90b) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0007f90b) list_single_fp_cale_pane_g

0x07f6,	// (0x0007091d) list_single_fp_cale_pane_t1_ParamLimits

0x07f6,	// (0x0007091d) list_single_fp_cale_pane_t1

0x0808,	// (0x0007092f) list_single_fp_cale_pane_t2_ParamLimits

0x0808,	// (0x0007092f) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0007f912) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0007f912) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x254c,	// (0x00072673) main_dialer_pane

0x72e6,	// (0x0007740d) aid_cell_size_keypad

0x72f0,	// (0x00077417) dialer_ne_pane

0x72f8,	// (0x0007741f) grid_dialer_command_1_pane

0x7300,	// (0x00077427) grid_dialer_command_2_pane

0x7308,	// (0x0007742f) grid_dialer_keypad_pane

0x731a,	// (0x00077441) bg_popup_call_pane_cp06_ParamLimits

0x731a,	// (0x00077441) bg_popup_call_pane_cp06

0x7326,	// (0x0007744d) dialer_ne_clear_pane_ParamLimits

0x7326,	// (0x0007744d) dialer_ne_clear_pane

0x083b,	// (0x00070962) dialer_ne_pane_g1

0x0843,	// (0x0007096a) dialer_ne_pane_t1_ParamLimits

0x0843,	// (0x0007096a) dialer_ne_pane_t1

0x7332,	// (0x00077459) dialer_ne_pane_t2_ParamLimits

0x7332,	// (0x00077459) dialer_ne_pane_t2

0x735c,	// (0x00077483) dialer_ne_pane_t3_ParamLimits

0x735c,	// (0x00077483) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0007f917) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0007f917) dialer_ne_pane_t

0x738c,	// (0x000774b3) dialer_ne_pane_t3_copy1_ParamLimits

0x738c,	// (0x000774b3) dialer_ne_pane_t3_copy1

0x73bb,	// (0x000774e2) cell_dialer_keypad_pane_ParamLimits

0x73bb,	// (0x000774e2) cell_dialer_keypad_pane

0x73d2,	// (0x000774f9) cell_dialer_command_1_pane_ParamLimits

0x73d2,	// (0x000774f9) cell_dialer_command_1_pane

0x73e8,	// (0x0007750f) cell_dialer_command_2_pane_ParamLimits

0x73e8,	// (0x0007750f) cell_dialer_command_2_pane

0x0855,	// (0x0007097c) bg_button_pane_cp02_ParamLimits

0x0855,	// (0x0007097c) bg_button_pane_cp02

0x73f7,	// (0x0007751e) cell_dialer_keypad_pane_g1_ParamLimits

0x73f7,	// (0x0007751e) cell_dialer_keypad_pane_g1

0x0855,	// (0x0007097c) bg_button_pane_cp03_ParamLimits

0x0855,	// (0x0007097c) bg_button_pane_cp03

0x740c,	// (0x00077533) cell_dialer_command_1_pane_g1_ParamLimits

0x740c,	// (0x00077533) cell_dialer_command_1_pane_g1

0x0861,	// (0x00070988) bg_button_pane_cp04

0x7420,	// (0x00077547) cell_dialer_command_2_pane_g1

0xbb7e,	// (0x0007bca5) bg_button_pane_cp06

0x0869,	// (0x00070990) dialer_ne_clear_pane_g1

0x4eda,	// (0x00075001) navi_pane_g2

0x4f08,	// (0x0007502f) navi_pane_g3

0x0002,

0xf418,	// (0x0007f53f) navi_pane_g

0x4f31,	// (0x00075058) navi_pane_mv_g2

0x4f58,	// (0x0007507f) navi_pane_mv_g5

0x4f60,	// (0x00075087) navi_pane_mv_t1

0x324b,	// (0x00073372) main_clock2_pane

0x7453,	// (0x0007757a) main_clock2_list_pane_ParamLimits

0x7453,	// (0x0007757a) main_clock2_list_pane

0x7489,	// (0x000775b0) main_clock2_pane_t1_ParamLimits

0x7489,	// (0x000775b0) main_clock2_pane_t1

0x74c7,	// (0x000775ee) main_clock2_pane_t2_ParamLimits

0x74c7,	// (0x000775ee) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0007f91e) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0007f91e) main_clock2_pane_t

0x7551,	// (0x00077678) popup_clock_analogue_window_cp03_ParamLimits

0x7551,	// (0x00077678) popup_clock_analogue_window_cp03

0x7578,	// (0x0007769f) popup_clock_digital_window_cp02_ParamLimits

0x7578,	// (0x0007769f) popup_clock_digital_window_cp02

0x75ed,	// (0x00077714) main_clock2_list_single_pane_ParamLimits

0x75ed,	// (0x00077714) main_clock2_list_single_pane

0xbb7e,	// (0x0007bca5) list_highlight_pane_cp05

0x0871,	// (0x00070998) main_clock2_list_single_pane_t1

0x3dd3,	// (0x00073efa) popup_toolbar_window_cp04_ParamLimits

0x6a7b,	// (0x00076ba2) camera2_autofocus_pane_g2_ParamLimits

0x6a7b,	// (0x00076ba2) camera2_autofocus_pane_g2

0x6a87,	// (0x00076bae) camera2_autofocus_pane_g3_ParamLimits

0x6a87,	// (0x00076bae) camera2_autofocus_pane_g3

0x6a93,	// (0x00076bba) camera2_autofocus_pane_g4_ParamLimits

0x6a93,	// (0x00076bba) camera2_autofocus_pane_g4

0x6a9f,	// (0x00076bc6) camera2_autofocus_pane_g5_ParamLimits

0x6a9f,	// (0x00076bc6) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0007f867) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0007f867) camera2_autofocus_pane_g

0x6c8b,	// (0x00076db2) camera2_autofocus_pane_cp_g2

0x6c93,	// (0x00076dba) camera2_autofocus_pane_cp_g3

0x6c9b,	// (0x00076dc2) camera2_autofocus_pane_cp_g4

0x6ca3,	// (0x00076dca) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0007f8cd) camera2_autofocus_pane_cp_g

0x7312,	// (0x00077439) popup_dialer_spcha_window

0x254c,	// (0x00072673) bg_popup_sub_pane_cp07

0x087f,	// (0x000709a6) list_spcha_pane

0x0887,	// (0x000709ae) list_single_spcha_pane_ParamLimits

0x0887,	// (0x000709ae) list_single_spcha_pane

0x254c,	// (0x00072673) list_highlight_pane_cp06

0x0898,	// (0x000709bf) list_single_spcha_pane_t1

0xca28,	// (0x0007cb4f) popup_call2_audio_out_window_g4_ParamLimits

0xca28,	// (0x0007cb4f) popup_call2_audio_out_window_g4

0x254c,	// (0x00072673) main_imed2_pane

0xd007,	// (0x0007d12e) popup_imed_adjust2_window

0x5e56,	// (0x00075f7d) popup_imed_trans_window_ParamLimits

0x5e56,	// (0x00075f7d) popup_imed_trans_window

0x02b8,	// (0x000703df) popup_blid_sat_info2_window_t1

0x02c6,	// (0x000703ed) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0007f7fc) popup_blid_sat_info2_window_t

0x7697,	// (0x000777be) aid_size_cell_colour_35

0x76b7,	// (0x000777de) aid_size_cell_colour_112

0x76d7,	// (0x000777fe) aid_size_cell_effect

0xcfdf,	// (0x0007d106) bg_tb_trans_pane_cp02

0xb5d6,	// (0x0007b6fd) heading_imed_pane

0x76f7,	// (0x0007781e) listscroll_imed_pane

0x08b2,	// (0x000709d9) heading_imed_pane_g1

0x08ba,	// (0x000709e1) heading_imed_pane_t1

0x08c8,	// (0x000709ef) grid_imed_colour_35_pane_ParamLimits

0x08c8,	// (0x000709ef) grid_imed_colour_35_pane

0x7703,	// (0x0007782a) grid_imed_effect_pane

0x08e3,	// (0x00070a0a) list_imed_aspect_pane

0x7718,	// (0x0007783f) scroll_pane_cp027_ParamLimits

0x7718,	// (0x0007783f) scroll_pane_cp027

0x7729,	// (0x00077850) cell_imed_effect_pane_ParamLimits

0x7729,	// (0x00077850) cell_imed_effect_pane

0x08eb,	// (0x00070a12) cell_imed_colour_pane_ParamLimits

0x08eb,	// (0x00070a12) cell_imed_colour_pane

0x092d,	// (0x00070a54) cell_imed_colour_pane_g1_ParamLimits

0x092d,	// (0x00070a54) cell_imed_colour_pane_g1

0x093e,	// (0x00070a65) hgihlgiht_grid_pane_cp016_ParamLimits

0x093e,	// (0x00070a65) hgihlgiht_grid_pane_cp016

0x7750,	// (0x00077877) cell_imed_effect_pane_g1

0x7758,	// (0x0007787f) grid_highlight_pane_cp017

0x094f,	// (0x00070a76) list_imed_single_pane_ParamLimits

0x094f,	// (0x00070a76) list_imed_single_pane

0x254c,	// (0x00072673) list_highlight_pane_cp07

0x0966,	// (0x00070a8d) list_imed_aspect_pane_comp1_t1

0xcfdf,	// (0x0007d106) bg_tb_trans_pane_cp05

0x0988,	// (0x00070aaf) popup_imed_adjust2_window_g1

0x09af,	// (0x00070ad6) popup_imed_adjust2_window_t1

0x09c7,	// (0x00070aee) slider_imed_adjust_pane

0x09db,	// (0x00070b02) slider_imed_adjust_pane_g1

0x09eb,	// (0x00070b12) slider_imed_adjust_pane_g2

0x09fb,	// (0x00070b22) slider_imed_adjust_pane_g3

0x0a0c,	// (0x00070b33) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0007f93b) slider_imed_adjust_pane_g

0x7761,	// (0x00077888) aid_size_cell_clipart2

0x776d,	// (0x00077894) grid_imed_clipart_pane

0x0a1d,	// (0x00070b44) scroll_pane_cp031

0x7777,	// (0x0007789e) cell_imed_clipart_pane_ParamLimits

0x7777,	// (0x0007789e) cell_imed_clipart_pane

0x779e,	// (0x000778c5) cell_imed_clipart_pane_g1

0x254c,	// (0x00072673) grid_highlight_pane_cp014

0x7468,	// (0x0007758f) main_clock2_pane_g1_ParamLimits

0x7468,	// (0x0007758f) main_clock2_pane_g1

0x7598,	// (0x000776bf) aid_call2_pane_cp10

0x75aa,	// (0x000776d1) aid_call_pane_cp10

0xbab3,	// (0x0007bbda) popup_clock_analogue_window_cp10_g1

0xbab3,	// (0x0007bbda) popup_clock_analogue_window_cp10_g2

0x75bc,	// (0x000776e3) popup_clock_analogue_window_cp10_g3

0x75bc,	// (0x000776e3) popup_clock_analogue_window_cp10_g4

0xbab3,	// (0x0007bbda) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0007f929) popup_clock_analogue_window_cp10_g

0x75ce,	// (0x000776f5) popup_clock_analogue_window_cp10_t1

0x75ff,	// (0x00077726) clock_digital_number_pane_cp10_ParamLimits

0x75ff,	// (0x00077726) clock_digital_number_pane_cp10

0x7617,	// (0x0007773e) clock_digital_number_pane_cp11_ParamLimits

0x7617,	// (0x0007773e) clock_digital_number_pane_cp11

0x762f,	// (0x00077756) clock_digital_number_pane_cp12_ParamLimits

0x762f,	// (0x00077756) clock_digital_number_pane_cp12

0x7647,	// (0x0007776e) clock_digital_number_pane_cp13_ParamLimits

0x7647,	// (0x0007776e) clock_digital_number_pane_cp13

0x765f,	// (0x00077786) clock_digital_separator_pane_cp10_ParamLimits

0x765f,	// (0x00077786) clock_digital_separator_pane_cp10

0x7677,	// (0x0007779e) popup_clock_digital_window_cp02_t1_ParamLimits

0x7677,	// (0x0007779e) popup_clock_digital_window_cp02_t1

0x2ed3,	// (0x00072ffa) clock_digital_number_pane_cp10_g1

0x2ed3,	// (0x00072ffa) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0007f944) clock_digital_number_pane_cp10_g

0x2ed3,	// (0x00072ffa) clock_digital_separator_pane_cp10_g1

0x2ed3,	// (0x00072ffa) clock_digital_separator_pane_g2_cp10

0xbb4e,	// (0x0007bc75) navi_pane_vded_g4

0xbb57,	// (0x0007bc7e) navi_pane_vded_g5

0xbb60,	// (0x0007bc87) navi_pane_vded_t1

0x254c,	// (0x00072673) main_vded_pane

0x77a7,	// (0x000778ce) main_vded_pane_g1

0x77b3,	// (0x000778da) main_vded_pane_g2

0x77bd,	// (0x000778e4) main_vded_pane_g3

0x0002,

0xf822,	// (0x0007f949) main_vded_pane_g

0x77c7,	// (0x000778ee) main_vded_pane_t1

0x77d5,	// (0x000778fc) main_vded_pane_t2

0x0001,

0xf829,	// (0x0007f950) main_vded_pane_t

0x77e3,	// (0x0007790a) vded_slider_pane

0x77ed,	// (0x00077914) vded_video_pane

0x0a25,	// (0x00070b4c) vded_video_pane_g1

0x77f7,	// (0x0007791e) vded_video_pane_g2

0x047c,	// (0x000705a3) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0007f955) vded_video_pane_g

0x0a2f,	// (0x00070b56) vded_slider_pane_g1

0xd1f4,	// (0x0007d31b) vded_slider_pane_g2

0x0a38,	// (0x00070b5f) vded_slider_pane_g3

0x0a41,	// (0x00070b68) vded_slider_pane_g4

0x0a4a,	// (0x00070b71) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0007f95c) vded_slider_pane_g

0x7200,	// (0x00077327) mup3_rocker_pane_ParamLimits

0x7200,	// (0x00077327) mup3_rocker_pane

0x7800,	// (0x00077927) mup3_control_keys_pane_g1

0x7808,	// (0x0007792f) mup3_control_keys_pane_g2

0x7810,	// (0x00077937) mup3_control_keys_pane_g3

0x7818,	// (0x0007793f) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0007f967) mup3_control_keys_pane_g

0x279a,	// (0x000728c1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x279a,	// (0x000728c1) popup_toolbar2_fixed_window_cp01

0x7234,	// (0x0007735b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7234,	// (0x0007735b) popup_toolbar2_fixed_window_cp02

0xc367,	// (0x0007c48e) popup_call2_audio_second_window_t4_ParamLimits

0xc367,	// (0x0007c48e) popup_call2_audio_second_window_t4

0xc895,	// (0x0007c9bc) popup_call2_audio_first_window_t6_ParamLimits

0xc895,	// (0x0007c9bc) popup_call2_audio_first_window_t6

0xcb2b,	// (0x0007cc52) popup_call2_audio_out_window_t6_ParamLimits

0xcb2b,	// (0x0007cc52) popup_call2_audio_out_window_t6

0x254c,	// (0x00072673) main_vitu_pane

0x7828,	// (0x0007794f) aid_size_cell_itu_ParamLimits

0x7828,	// (0x0007794f) aid_size_cell_itu

0xb262,	// (0x0007b389) bg_popup_window_pane_cp08_ParamLimits

0xb262,	// (0x0007b389) bg_popup_window_pane_cp08

0x783e,	// (0x00077965) field_vitu_entry_pane_ParamLimits

0x783e,	// (0x00077965) field_vitu_entry_pane

0x7855,	// (0x0007797c) grid_vitu_function_pane_ParamLimits

0x7855,	// (0x0007797c) grid_vitu_function_pane

0x7870,	// (0x00077997) grid_vitu_itu_pane_ParamLimits

0x7870,	// (0x00077997) grid_vitu_itu_pane

0x788e,	// (0x000779b5) cell_vitu_itu_pane_ParamLimits

0x788e,	// (0x000779b5) cell_vitu_itu_pane

0x78b2,	// (0x000779d9) cell_vitu_function_pane_ParamLimits

0x78b2,	// (0x000779d9) cell_vitu_function_pane

0xb262,	// (0x0007b389) bg_popup_sub_pane_cp08_ParamLimits

0xb262,	// (0x0007b389) bg_popup_sub_pane_cp08

0x78cd,	// (0x000779f4) field_vitu_entry_pane_t1_ParamLimits

0x78cd,	// (0x000779f4) field_vitu_entry_pane_t1

0x0a6b,	// (0x00070b92) field_vitu_entry_pane_t2_ParamLimits

0x0a6b,	// (0x00070b92) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0007f975) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0007f975) field_vitu_entry_pane_t

0x0a88,	// (0x00070baf) bg_button_pane_cp05_ParamLimits

0x0a88,	// (0x00070baf) bg_button_pane_cp05

0x78ed,	// (0x00077a14) cell_vitu_itu_pane_g1

0x7905,	// (0x00077a2c) cell_vitu_itu_pane_t1_ParamLimits

0x7905,	// (0x00077a2c) cell_vitu_itu_pane_t1

0x7917,	// (0x00077a3e) cell_vitu_itu_pane_t2_ParamLimits

0x7917,	// (0x00077a3e) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0007f97a) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0007f97a) cell_vitu_itu_pane_t

0x0a96,	// (0x00070bbd) bg_button_pane_cp07

0x794c,	// (0x00077a73) cell_vitu_function_pane_g1

0xb270,	// (0x0007b397) main_calc_pane_g1

0x258e,	// (0x000726b5) aid_visual_content_pane

0x254c,	// (0x00072673) main_vradio_pane

0x7955,	// (0x00077a7c) main_vradio_pane_g1_ParamLimits

0x7955,	// (0x00077a7c) main_vradio_pane_g1

0x0aa0,	// (0x00070bc7) main_vradio_pane_g2_ParamLimits

0x0aa0,	// (0x00070bc7) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0007f981) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0007f981) main_vradio_pane_g

0x796e,	// (0x00077a95) main_vradio_pane_t1_ParamLimits

0x796e,	// (0x00077a95) main_vradio_pane_t1

0x7983,	// (0x00077aaa) main_vradio_pane_t2_ParamLimits

0x7983,	// (0x00077aaa) main_vradio_pane_t2

0x0aad,	// (0x00070bd4) main_vradio_pane_t3_ParamLimits

0x0aad,	// (0x00070bd4) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0007f986) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0007f986) main_vradio_pane_t

0x7998,	// (0x00077abf) vradio_rocker_control_pane_ParamLimits

0x7998,	// (0x00077abf) vradio_rocker_control_pane

0x79aa,	// (0x00077ad1) vradio_station_info_pane_ParamLimits

0x79aa,	// (0x00077ad1) vradio_station_info_pane

0x0ac1,	// (0x00070be8) vradio_frequency_info_pane_ParamLimits

0x0ac1,	// (0x00070be8) vradio_frequency_info_pane

0x047c,	// (0x000705a3) vradio_station_info_pane_g1

0x0ad0,	// (0x00070bf7) vradio_station_info_pane_t1_ParamLimits

0x0ad0,	// (0x00070bf7) vradio_station_info_pane_t1

0x0af2,	// (0x00070c19) vradio_station_info_pane_t2_ParamLimits

0x0af2,	// (0x00070c19) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0007f98d) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0007f98d) vradio_station_info_pane_t

0x0b04,	// (0x00070c2b) vradio_tuning_pane

0x0b0c,	// (0x00070c33) vradio_rocker_control_pane_g1

0x0b14,	// (0x00070c3b) vradio_rocker_control_pane_g2

0x0b1c,	// (0x00070c43) vradio_rocker_control_pane_g3

0x0b24,	// (0x00070c4b) vradio_rocker_control_pane_g4

0x0b2c,	// (0x00070c53) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0007f992) vradio_rocker_control_pane_g

0x79bc,	// (0x00077ae3) vradio_frequency_info_pane_g1

0x0b34,	// (0x00070c5b) vradio_frequency_info_pane_t1_ParamLimits

0x0b34,	// (0x00070c5b) vradio_frequency_info_pane_t1

0x79c6,	// (0x00077aed) vradio_tuning_pane_g1

0x79d1,	// (0x00077af8) vradio_tuning_pane_t1

0x25d3,	// (0x000726fa) area_side_right_pane_ParamLimits

0x25d3,	// (0x000726fa) area_side_right_pane

0xcfa6,	// (0x0007d0cd) status_small_pane_g1

0xcfae,	// (0x0007d0d5) status_small_pane_g2

0xcfb7,	// (0x0007d0de) status_small_pane_g3

0xcfc0,	// (0x0007d0e7) status_small_pane_g4

0x0003,

0xf62b,	// (0x0007f752) status_small_pane_g

0xcfc9,	// (0x0007d0f0) status_small_pane_t1

0x254c,	// (0x00072673) main_video3_pane

0x0b48,	// (0x00070c6f) cams_zoom_vslider_pane

0x0b50,	// (0x00070c77) image3_wide_pane_ParamLimits

0x0b50,	// (0x00070c77) image3_wide_pane

0x0b6a,	// (0x00070c91) image3_wide_small_pane

0x0b76,	// (0x00070c9d) main_video3_pane_g1_ParamLimits

0x0b76,	// (0x00070c9d) main_video3_pane_g1

0x0b92,	// (0x00070cb9) main_video3_pane_g2_ParamLimits

0x0b92,	// (0x00070cb9) main_video3_pane_g2

0x0001,

0xf876,	// (0x0007f99d) main_video3_pane_g_ParamLimits

0xf876,	// (0x0007f99d) main_video3_pane_g

0x0bae,	// (0x00070cd5) main_video3_pane_t1_ParamLimits

0x0bae,	// (0x00070cd5) main_video3_pane_t1

0x0bd9,	// (0x00070d00) main_video3_pane_t2_ParamLimits

0x0bd9,	// (0x00070d00) main_video3_pane_t2

0x0c04,	// (0x00070d2b) main_video3_pane_t3_ParamLimits

0x0c04,	// (0x00070d2b) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0007f9a2) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0007f9a2) main_video3_pane_t

0x0c31,	// (0x00070d58) cams_zoom_vslider_pane_g1

0x0c3a,	// (0x00070d61) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0007f9a9) cams_zoom_vslider_pane_g

0x0c42,	// (0x00070d69) small_slider_vertical_pane

0x047c,	// (0x000705a3) small_slider_vertical_pane_g1

0x047c,	// (0x000705a3) small_slider_vertical_pane_g2

0x0c4a,	// (0x00070d71) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0007f9ae) small_slider_vertical_pane_g

0x254c,	// (0x00072673) main_hwr_training_pane

0x0c53,	// (0x00070d7a) hwr_training_instruct_pane_ParamLimits

0x0c53,	// (0x00070d7a) hwr_training_instruct_pane

0x79e0,	// (0x00077b07) hwr_training_navi_pane_ParamLimits

0x79e0,	// (0x00077b07) hwr_training_navi_pane

0x79ff,	// (0x00077b26) hwr_training_write_pane_ParamLimits

0x79ff,	// (0x00077b26) hwr_training_write_pane

0x254c,	// (0x00072673) bg_frame_shadow_pane

0x0c8a,	// (0x00070db1) hwr_training_write_pane_g1

0x0c92,	// (0x00070db9) hwr_training_write_pane_g2

0x0c9a,	// (0x00070dc1) hwr_training_write_pane_g3

0x0ca2,	// (0x00070dc9) hwr_training_write_pane_g4

0x0caa,	// (0x00070dd1) hwr_training_write_pane_g5

0x0cb2,	// (0x00070dd9) hwr_training_write_pane_g6

0x0cba,	// (0x00070de1) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0007f9b5) hwr_training_write_pane_g

0xecf5,	// (0x0007ee1c) hwr_training_navi_pane_g1_ParamLimits

0xecf5,	// (0x0007ee1c) hwr_training_navi_pane_g1

0xed07,	// (0x0007ee2e) hwr_training_navi_pane_g2_ParamLimits

0xed07,	// (0x0007ee2e) hwr_training_navi_pane_g2

0xed19,	// (0x0007ee40) hwr_training_navi_pane_g3_ParamLimits

0xed19,	// (0x0007ee40) hwr_training_navi_pane_g3

0xed29,	// (0x0007ee50) hwr_training_navi_pane_g4_ParamLimits

0xed29,	// (0x0007ee50) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0007f9c4) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0007f9c4) hwr_training_navi_pane_g

0xed36,	// (0x0007ee5d) hwr_training_navi_pane_t1

0x7a49,	// (0x00077b70) list_single_hwr_training_instruct_pane_ParamLimits

0x7a49,	// (0x00077b70) list_single_hwr_training_instruct_pane

0x7a66,	// (0x00077b8d) list_single_hwr_training_instruct_pane_t1

0x03bc,	// (0x000704e3) bg_frame_shadow_pane_g1

0x7a75,	// (0x00077b9c) bg_frame_shadow_pane_g2

0x7a7d,	// (0x00077ba4) bg_frame_shadow_pane_g3

0x7a85,	// (0x00077bac) bg_frame_shadow_pane_g4

0x7a8d,	// (0x00077bb4) bg_frame_shadow_pane_g5

0x7a95,	// (0x00077bbc) bg_frame_shadow_pane_g6

0x7a9d,	// (0x00077bc4) bg_frame_shadow_pane_g7

0x348c,	// (0x000735b3) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0007f9cf) bg_frame_shadow_pane_g

0x254c,	// (0x00072673) main_video_tele_dialer_pane

0x7aa5,	// (0x00077bcc) aid_size_cell_video_keypad_ParamLimits

0x7aa5,	// (0x00077bcc) aid_size_cell_video_keypad

0x7abf,	// (0x00077be6) grid_video_dialer_keypad_pane_ParamLimits

0x7abf,	// (0x00077be6) grid_video_dialer_keypad_pane

0x7b0b,	// (0x00077c32) video_down_pane_cp_ParamLimits

0x7b0b,	// (0x00077c32) video_down_pane_cp

0x7b3f,	// (0x00077c66) cell_video_dialer_keypad_pane_ParamLimits

0x7b3f,	// (0x00077c66) cell_video_dialer_keypad_pane

0x7b61,	// (0x00077c88) bg_button_pane_cp08_ParamLimits

0x7b61,	// (0x00077c88) bg_button_pane_cp08

0x7b6d,	// (0x00077c94) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7b6d,	// (0x00077c94) cell_video_dialer_keypad_pane_g1

0x71ea,	// (0x00077311) mup3_rocker2_pane_ParamLimits

0x71ea,	// (0x00077311) mup3_rocker2_pane

0x047c,	// (0x000705a3) mup3_rocker2_pane_g1

0x5d3f,	// (0x00075e66) main_dialer2_pane

0x254c,	// (0x00072673) main_mp4_pane

0xed4c,	// (0x0007ee73) main_mp4_pane_g1_ParamLimits

0xed4c,	// (0x0007ee73) main_mp4_pane_g1

0xed4c,	// (0x0007ee73) main_mp4_pane_g2_ParamLimits

0xed4c,	// (0x0007ee73) main_mp4_pane_g2

0x7ba8,	// (0x00077ccf) main_mp4_pane_g3_ParamLimits

0x7ba8,	// (0x00077ccf) main_mp4_pane_g3

0xed5a,	// (0x0007ee81) main_mp4_pane_g4_ParamLimits

0xed5a,	// (0x0007ee81) main_mp4_pane_g4

0xed82,	// (0x0007eea9) main_mp4_pane_g5_ParamLimits

0xed82,	// (0x0007eea9) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0007f9ef) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0007f9ef) main_mp4_pane_g

0xedd2,	// (0x0007eef9) main_mp4_pane_t1_ParamLimits

0xedd2,	// (0x0007eef9) main_mp4_pane_t1

0xee2e,	// (0x0007ef55) main_mp4_pane_t2_ParamLimits

0xee2e,	// (0x0007ef55) main_mp4_pane_t2

0x7be4,	// (0x00077d0b) main_mp4_pane_t3_ParamLimits

0x7be4,	// (0x00077d0b) main_mp4_pane_t3

0xee80,	// (0x0007efa7) main_mp4_pane_t4_ParamLimits

0xee80,	// (0x0007efa7) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0007f9fc) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0007f9fc) main_mp4_pane_t

0xeec4,	// (0x0007efeb) mp4_progress_pane_ParamLimits

0xeec4,	// (0x0007efeb) mp4_progress_pane

0xef0e,	// (0x0007f035) mp4_rocker_pane_ParamLimits

0xef0e,	// (0x0007f035) mp4_rocker_pane

0x7c0c,	// (0x00077d33) mp4_progress_pane_t1

0x7c25,	// (0x00077d4c) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0007fa05) mp4_progress_pane_t

0x7c3e,	// (0x00077d65) mup_progress_pane_cp04

0x047c,	// (0x000705a3) mp4_rocker_pane_g1

0x7c4a,	// (0x00077d71) aid_cell_size_keypad2_ParamLimits

0x7c4a,	// (0x00077d71) aid_cell_size_keypad2

0x7c60,	// (0x00077d87) dialer2_ne_pane_ParamLimits

0x7c60,	// (0x00077d87) dialer2_ne_pane

0x7c7a,	// (0x00077da1) grid_dialer2_keypad_pane_ParamLimits

0x7c7a,	// (0x00077da1) grid_dialer2_keypad_pane

0xecbc,	// (0x0007ede3) bg_popup_call_pane_cp07_ParamLimits

0xecbc,	// (0x0007ede3) bg_popup_call_pane_cp07

0x7c98,	// (0x00077dbf) dialer2_ne_pane_t1_ParamLimits

0x7c98,	// (0x00077dbf) dialer2_ne_pane_t1

0x7ce9,	// (0x00077e10) cell_dialer2_keypad_pane_ParamLimits

0x7ce9,	// (0x00077e10) cell_dialer2_keypad_pane

0x7d0d,	// (0x00077e34) bg_button_pane_pane_cp04_ParamLimits

0x7d0d,	// (0x00077e34) bg_button_pane_pane_cp04

0x7d19,	// (0x00077e40) cell_dialer2_keypad_pane_g1_ParamLimits

0x7d19,	// (0x00077e40) cell_dialer2_keypad_pane_g1

0x3ce5,	// (0x00073e0c) aid_placing_vt_set_content_ParamLimits

0x3ce5,	// (0x00073e0c) aid_placing_vt_set_content

0x3d07,	// (0x00073e2e) aid_placing_vt_set_title_ParamLimits

0x3d07,	// (0x00073e2e) aid_placing_vt_set_title

0x254c,	// (0x00072673) main_image3_pane

0x7ddf,	// (0x00077f06) area_side_right_pane_cp01_ParamLimits

0x7ddf,	// (0x00077f06) area_side_right_pane_cp01

0xed4c,	// (0x0007ee73) main_image3_pane_g1_ParamLimits

0xed4c,	// (0x0007ee73) main_image3_pane_g1

0x7df6,	// (0x00077f1d) main_image3_pane_g2_ParamLimits

0x7df6,	// (0x00077f1d) main_image3_pane_g2

0x7e1e,	// (0x00077f45) main_image3_pane_g3_ParamLimits

0x7e1e,	// (0x00077f45) main_image3_pane_g3

0x7e48,	// (0x00077f6f) main_image3_pane_g4_ParamLimits

0x7e48,	// (0x00077f6f) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0007fa14) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0007fa14) main_image3_pane_g

0x7e72,	// (0x00077f99) main_image3_pane_t1_ParamLimits

0x7e72,	// (0x00077f99) main_image3_pane_t1

0x7eca,	// (0x00077ff1) main_image3_pane_t2_ParamLimits

0x7eca,	// (0x00077ff1) main_image3_pane_t2

0x7f1c,	// (0x00078043) main_image3_pane_t3_ParamLimits

0x7f1c,	// (0x00078043) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0007fa1d) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0007fa1d) main_image3_pane_t

0xb262,	// (0x0007b389) grid_sctrl_middle_pane_cp01_ParamLimits

0xb262,	// (0x0007b389) grid_sctrl_middle_pane_cp01

0x7fa4,	// (0x000780cb) cell_sctrl_middle_pane_cp01_ParamLimits

0x7fa4,	// (0x000780cb) cell_sctrl_middle_pane_cp01

0x7fc1,	// (0x000780e8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7fc1,	// (0x000780e8) cell_sctrl_middle_pane_cp01_g1

0x254c,	// (0x00072673) main_call4_pane

0x7fd7,	// (0x000780fe) aid_size_button_call4_ParamLimits

0x7fd7,	// (0x000780fe) aid_size_button_call4

0x8008,	// (0x0007812f) call4_windows_pane_ParamLimits

0x8008,	// (0x0007812f) call4_windows_pane

0x8028,	// (0x0007814f) grid_call4_button_pane_ParamLimits

0x8028,	// (0x0007814f) grid_call4_button_pane

0x8055,	// (0x0007817c) call4_windows_conf_pane

0x806a,	// (0x00078191) popup_call4_audio_first_window_ParamLimits

0x806a,	// (0x00078191) popup_call4_audio_first_window

0x80b6,	// (0x000781dd) popup_call4_audio_second_window_ParamLimits

0x80b6,	// (0x000781dd) popup_call4_audio_second_window

0x80ca,	// (0x000781f1) popup_call4_audio_wait_window_ParamLimits

0x80ca,	// (0x000781f1) popup_call4_audio_wait_window

0x80d8,	// (0x000781ff) cell_call4_button_pane_ParamLimits

0x80d8,	// (0x000781ff) cell_call4_button_pane

0x8101,	// (0x00078228) bg_button_pane_cp09_ParamLimits

0x8101,	// (0x00078228) bg_button_pane_cp09

0x810d,	// (0x00078234) cell_call4_button_pane_g1_ParamLimits

0x810d,	// (0x00078234) cell_call4_button_pane_g1

0x8133,	// (0x0007825a) cell_call4_button_pane_t1_ParamLimits

0x8133,	// (0x0007825a) cell_call4_button_pane_t1

0x8197,	// (0x000782be) popup_call4_audio_conf_window_ParamLimits

0x8197,	// (0x000782be) popup_call4_audio_conf_window

0x724a,	// (0x00077371) mup3_progress_pane_t1_ParamLimits

0x7261,	// (0x00077388) mup3_progress_pane_t2_ParamLimits

0x075e,	// (0x00070885) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0007f8f6) mup3_progress_pane_t_ParamLimits

0x0775,	// (0x0007089c) mup_progress_pane_cp03_ParamLimits

0x7820,	// (0x00077947) mup3_control_keys_pane_g4_copy1

0xeef2,	// (0x0007f019) mp4_rocker2_pane_ParamLimits

0xeef2,	// (0x0007f019) mp4_rocker2_pane

0x81ab,	// (0x000782d2) mp4_rocker2_pane_g1

0x81b3,	// (0x000782da) mp4_rocker2_pane_g2

0xef60,	// (0x0007f087) mp4_rocker2_pane_g3

0xef68,	// (0x0007f08f) mp4_rocker2_pane_g4

0xef70,	// (0x0007f097) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0007fa26) mp4_rocker2_pane_g

0x254c,	// (0x00072673) main_camera4_pane

0x254c,	// (0x00072673) main_video4_pane

0x7adb,	// (0x00077c02) main_video_tele_dialer_pane_t1_ParamLimits

0x7adb,	// (0x00077c02) main_video_tele_dialer_pane_t1

0x7af3,	// (0x00077c1a) main_video_tele_dialer_pane_t2_ParamLimits

0x7af3,	// (0x00077c1a) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0007f9e0) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0007f9e0) main_video_tele_dialer_pane_t

0x81d3,	// (0x000782fa) cam4_autofocus_pane_ParamLimits

0x81d3,	// (0x000782fa) cam4_autofocus_pane

0x81e9,	// (0x00078310) cam4_image_uncrop_pane_ParamLimits

0x81e9,	// (0x00078310) cam4_image_uncrop_pane

0x8203,	// (0x0007832a) cam4_indicators_pane_ParamLimits

0x8203,	// (0x0007832a) cam4_indicators_pane

0x822e,	// (0x00078355) main_camera4_pane_g1_ParamLimits

0x822e,	// (0x00078355) main_camera4_pane_g1

0x8241,	// (0x00078368) main_camera4_pane_g2_ParamLimits

0x8241,	// (0x00078368) main_camera4_pane_g2

0x8254,	// (0x0007837b) main_camera4_pane_g3_ParamLimits

0x8254,	// (0x0007837b) main_camera4_pane_g3

0x8267,	// (0x0007838e) main_camera4_pane_g4_ParamLimits

0x8267,	// (0x0007838e) main_camera4_pane_g4

0x827a,	// (0x000783a1) main_camera4_pane_g5_ParamLimits

0x827a,	// (0x000783a1) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0007fa31) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0007fa31) main_camera4_pane_g

0x829e,	// (0x000783c5) main_camera4_pane_t1_ParamLimits

0x829e,	// (0x000783c5) main_camera4_pane_t1

0x06e3,	// (0x0007080a) bg_tb_trans_pane_cp06

0xef90,	// (0x0007f0b7) cam4_indicators_pane_g1

0xefa1,	// (0x0007f0c8) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0007fa4c) cam4_indicators_pane_g

0xefbf,	// (0x0007f0e6) cam4_indicators_pane_t1

0x8314,	// (0x0007843b) main_video4_pane_g1_ParamLimits

0x8314,	// (0x0007843b) main_video4_pane_g1

0x8327,	// (0x0007844e) main_video4_pane_g2_ParamLimits

0x8327,	// (0x0007844e) main_video4_pane_g2

0x833b,	// (0x00078462) main_video4_pane_g3_ParamLimits

0x833b,	// (0x00078462) main_video4_pane_g3

0x834f,	// (0x00078476) main_video4_pane_g4_ParamLimits

0x834f,	// (0x00078476) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0007fa53) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0007fa53) main_video4_pane_g

0x8377,	// (0x0007849e) vid4_indicators_pane_ParamLimits

0x8377,	// (0x0007849e) vid4_indicators_pane

0x83a9,	// (0x000784d0) video4_image_uncrop_cif_pane_ParamLimits

0x83a9,	// (0x000784d0) video4_image_uncrop_cif_pane

0x83c3,	// (0x000784ea) video4_image_uncrop_nhd_pane_ParamLimits

0x83c3,	// (0x000784ea) video4_image_uncrop_nhd_pane

0x81e9,	// (0x00078310) video4_image_uncrop_vga_pane_ParamLimits

0x81e9,	// (0x00078310) video4_image_uncrop_vga_pane

0xd2a4,	// (0x0007d3cb) bg_tb_trans_pane_cp07

0x83d7,	// (0x000784fe) vid4_indicators_pane_g1

0x83e4,	// (0x0007850b) vid4_indicators_pane_g2

0x83f1,	// (0x00078518) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0007fa5e) vid4_indicators_pane_g

0x8416,	// (0x0007853d) vid4_indicators_pane_t1

0x8428,	// (0x0007854f) cam4_autofocus_pane_g1

0x8430,	// (0x00078557) cam4_autofocus_pane_g2

0x8438,	// (0x0007855f) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0007fa69) cam4_autofocus_pane_g

0x8440,	// (0x00078567) cam4_autofocus_pane_g3_copy1

0x7b23,	// (0x00077c4a) video_down_pane_cp_t1

0x7b31,	// (0x00077c58) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0007f9e5) video_down_pane_cp_t

0xb262,	// (0x0007b389) popup_vitu2_window_ParamLimits

0xb262,	// (0x0007b389) popup_vitu2_window

0x8448,	// (0x0007856f) aid_size_cell2_itu2_ParamLimits

0x8448,	// (0x0007856f) aid_size_cell2_itu2

0x846e,	// (0x00078595) aid_size_cell_itu2_ParamLimits

0x846e,	// (0x00078595) aid_size_cell_itu2

0x84ca,	// (0x000785f1) bg_popup_window_pane_cp09_ParamLimits

0x84ca,	// (0x000785f1) bg_popup_window_pane_cp09

0x84d8,	// (0x000785ff) field_vitu2_entry_pane_ParamLimits

0x84d8,	// (0x000785ff) field_vitu2_entry_pane

0x84fe,	// (0x00078625) grid_vitu2_function_pane_ParamLimits

0x84fe,	// (0x00078625) grid_vitu2_function_pane

0x854f,	// (0x00078676) grid_vitu2_itu_pane_ParamLimits

0x854f,	// (0x00078676) grid_vitu2_itu_pane

0x85e0,	// (0x00078707) cell_vitu2_itu_pane_ParamLimits

0x85e0,	// (0x00078707) cell_vitu2_itu_pane

0x8604,	// (0x0007872b) cell_vitu2_function_pane_ParamLimits

0x8604,	// (0x0007872b) cell_vitu2_function_pane

0x8643,	// (0x0007876a) bg_popup_call_pane_cp08_ParamLimits

0x8643,	// (0x0007876a) bg_popup_call_pane_cp08

0x865c,	// (0x00078783) field_vitu2_entry_pane_g1

0x8668,	// (0x0007878f) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0007fa70) field_vitu2_entry_pane_g

0x1ccb,	// (0x00071df2) field_vitu2_entry_pane_t1_ParamLimits

0x1ccb,	// (0x00071df2) field_vitu2_entry_pane_t1

0xd2b2,	// (0x0007d3d9) field_vitu2_entry_pane_t2_ParamLimits

0xd2b2,	// (0x0007d3d9) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0007fa77) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0007fa77) field_vitu2_entry_pane_t

0x868a,	// (0x000787b1) bg_button_pane_cp010_ParamLimits

0x868a,	// (0x000787b1) bg_button_pane_cp010

0x8698,	// (0x000787bf) cell_vitu2_itu_pane_g1

0x86b6,	// (0x000787dd) cell_vitu2_itu_pane_t1_ParamLimits

0x86b6,	// (0x000787dd) cell_vitu2_itu_pane_t1

0x1cfc,	// (0x00071e23) cell_vitu2_itu_pane_t2_ParamLimits

0x1cfc,	// (0x00071e23) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0007fa81) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0007fa81) cell_vitu2_itu_pane_t

0xb262,	// (0x0007b389) bg_button_pane_cp011

0x871c,	// (0x00078843) cell_vitu2_function_pane_g1

0x254c,	// (0x00072673) main_myfav_hc_pane

0x7f6c,	// (0x00078093) popup_image3_note_pane_ParamLimits

0x7f6c,	// (0x00078093) popup_image3_note_pane

0x7f88,	// (0x000780af) popup_image3_tool_bar_pane_ParamLimits

0x7f88,	// (0x000780af) popup_image3_tool_bar_pane

0x1d80,	// (0x00071ea7) cell_vitu2_itu_pane_t3_ParamLimits

0x1d80,	// (0x00071ea7) cell_vitu2_itu_pane_t3

0x254c,	// (0x00072673) bg_popup_trans_pane

0x8730,	// (0x00078857) grid_image3_tool_bar_pane

0x873a,	// (0x00078861) bg_popup_trans_pane_g1

0x422b,	// (0x00074352) bg_popup_trans_pane_g2

0x8742,	// (0x00078869) bg_popup_trans_pane_g3

0x874a,	// (0x00078871) bg_popup_trans_pane_g4

0x8752,	// (0x00078879) bg_popup_trans_pane_g5

0x875a,	// (0x00078881) bg_popup_trans_pane_g6

0x8762,	// (0x00078889) bg_popup_trans_pane_g7

0x876a,	// (0x00078891) bg_popup_trans_pane_g8

0x420b,	// (0x00074332) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0007fa88) bg_popup_trans_pane_g

0x8772,	// (0x00078899) cell_image3_tool_bar_pane_ParamLimits

0x8772,	// (0x00078899) cell_image3_tool_bar_pane

0x047c,	// (0x000705a3) cell_image3_tool_bar_pane_g1

0x254c,	// (0x00072673) bg_popup_trans_pane_cp1

0x8786,	// (0x000788ad) popup_image3_note_pane_t1

0x8794,	// (0x000788bb) popup_image3_note_pane_t2

0x87a2,	// (0x000788c9) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0007fa9b) popup_image3_note_pane_t

0x87b0,	// (0x000788d7) popup_image3_note_pane_t3_copy1

0x87be,	// (0x000788e5) bg_myfav_hc_instruction_pane_ParamLimits

0x87be,	// (0x000788e5) bg_myfav_hc_instruction_pane

0x87d4,	// (0x000788fb) cell_myfav_contact_pane_ParamLimits

0x87d4,	// (0x000788fb) cell_myfav_contact_pane

0x87f0,	// (0x00078917) cell_myfav_contact_pane_cp1_ParamLimits

0x87f0,	// (0x00078917) cell_myfav_contact_pane_cp1

0x8808,	// (0x0007892f) cell_myfav_contact_pane_cp2_ParamLimits

0x8808,	// (0x0007892f) cell_myfav_contact_pane_cp2

0x8820,	// (0x00078947) cell_myfav_contact_pane_cp3_ParamLimits

0x8820,	// (0x00078947) cell_myfav_contact_pane_cp3

0x8837,	// (0x0007895e) cell_myfav_contact_pane_cp4_ParamLimits

0x8837,	// (0x0007895e) cell_myfav_contact_pane_cp4

0x884f,	// (0x00078976) cell_myfav_contact_pane_cp5_ParamLimits

0x884f,	// (0x00078976) cell_myfav_contact_pane_cp5

0x8863,	// (0x0007898a) cell_myfav_contact_pane_cp6_ParamLimits

0x8863,	// (0x0007898a) cell_myfav_contact_pane_cp6

0x8879,	// (0x000789a0) cell_myfav_contact_pane_cp7_ParamLimits

0x8879,	// (0x000789a0) cell_myfav_contact_pane_cp7

0x8893,	// (0x000789ba) listscroll_gen_pane_cp05

0x889c,	// (0x000789c3) main_myfav_hc_pane_g1_ParamLimits

0x889c,	// (0x000789c3) main_myfav_hc_pane_g1

0x88b6,	// (0x000789dd) main_myfav_hc_pane_g2_ParamLimits

0x88b6,	// (0x000789dd) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0007faa2) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0007faa2) main_myfav_hc_pane_g

0x88e8,	// (0x00078a0f) main_myfav_hc_pane_t1_ParamLimits

0x88e8,	// (0x00078a0f) main_myfav_hc_pane_t1

0x88ff,	// (0x00078a26) main_myfav_hc_pane_t2_ParamLimits

0x88ff,	// (0x00078a26) main_myfav_hc_pane_t2

0x8911,	// (0x00078a38) main_myfav_hc_pane_t3_ParamLimits

0x8911,	// (0x00078a38) main_myfav_hc_pane_t3

0x8923,	// (0x00078a4a) main_myfav_hc_pane_t4_ParamLimits

0x8923,	// (0x00078a4a) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0007faa9) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0007faa9) main_myfav_hc_pane_t

0x047c,	// (0x000705a3) bg_myfav_hc_instruction_pane_g1

0x894b,	// (0x00078a72) cell_myfav_contact_pane_g1_ParamLimits

0x894b,	// (0x00078a72) cell_myfav_contact_pane_g1

0x894b,	// (0x00078a72) cell_myfav_contact_pane_g2_ParamLimits

0x894b,	// (0x00078a72) cell_myfav_contact_pane_g2

0x8957,	// (0x00078a7e) cell_myfav_contact_pane_g3_ParamLimits

0x8957,	// (0x00078a7e) cell_myfav_contact_pane_g3

0x0748,	// (0x0007086f) cell_myfav_contact_pane_g4_ParamLimits

0x0748,	// (0x0007086f) cell_myfav_contact_pane_g4

0x8964,	// (0x00078a8b) cell_myfav_contact_pane_g5_ParamLimits

0x8964,	// (0x00078a8b) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0007fab4) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0007fab4) cell_myfav_contact_pane_g

0x88d0,	// (0x000789f7) main_myfav_hc_pane_g3_ParamLimits

0x88d0,	// (0x000789f7) main_myfav_hc_pane_g3

0x26f1,	// (0x00072818) popup_adpt_find_window

0x8970,	// (0x00078a97) afind_page_pane_ParamLimits

0x8970,	// (0x00078a97) afind_page_pane

0x8985,	// (0x00078aac) aid_size_cell_afind_ParamLimits

0x8985,	// (0x00078aac) aid_size_cell_afind

0x89a3,	// (0x00078aca) bg_popup_sub_pane_cp09_ParamLimits

0x89a3,	// (0x00078aca) bg_popup_sub_pane_cp09

0x89b0,	// (0x00078ad7) find_pane_cp01_ParamLimits

0x89b0,	// (0x00078ad7) find_pane_cp01

0x89bd,	// (0x00078ae4) grid_afind_control_pane_ParamLimits

0x89bd,	// (0x00078ae4) grid_afind_control_pane

0x89d1,	// (0x00078af8) grid_afind_pane_ParamLimits

0x89d1,	// (0x00078af8) grid_afind_pane

0x89f3,	// (0x00078b1a) cell_afind_pane_ParamLimits

0x89f3,	// (0x00078b1a) cell_afind_pane

0x047c,	// (0x000705a3) afind_page_pane_g1

0x8a54,	// (0x00078b7b) afind_page_pane_g2

0x8a5d,	// (0x00078b84) afind_page_pane_g3

0x0002,

0xf998,	// (0x0007fabf) afind_page_pane_g

0x8a66,	// (0x00078b8d) afind_page_pane_t1

0x8a86,	// (0x00078bad) cell_afind_grid_control_pane_ParamLimits

0x8a86,	// (0x00078bad) cell_afind_grid_control_pane

0x7d0d,	// (0x00077e34) bg_button_pane_cp69_ParamLimits

0x7d0d,	// (0x00077e34) bg_button_pane_cp69

0x8a95,	// (0x00078bbc) cell_afind_pane_g1_ParamLimits

0x8a95,	// (0x00078bbc) cell_afind_pane_g1

0x8aa2,	// (0x00078bc9) cell_afind_pane_t1_ParamLimits

0x8aa2,	// (0x00078bc9) cell_afind_pane_t1

0x3c78,	// (0x00073d9f) bg_button_pane_cp72

0x8ab4,	// (0x00078bdb) cell_afind_grid_control_pane_g1

0x57fa,	// (0x00075921) aid_image_placing_area_ParamLimits

0x57fa,	// (0x00075921) aid_image_placing_area

0x0a53,	// (0x00070b7a) field_vitu_entry_pane_g1_ParamLimits

0x0a53,	// (0x00070b7a) field_vitu_entry_pane_g1

0x0a5f,	// (0x00070b86) field_vitu_entry_pane_g2_ParamLimits

0x0a5f,	// (0x00070b86) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0007f970) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0007f970) field_vitu_entry_pane_g

0x78ed,	// (0x00077a14) cell_vitu_itu_pane_g1_ParamLimits

0x792f,	// (0x00077a56) cell_vitu_itu_pane_t3_ParamLimits

0x792f,	// (0x00077a56) cell_vitu_itu_pane_t3

0x7c0c,	// (0x00077d33) mp4_progress_pane_t1_ParamLimits

0x7c25,	// (0x00077d4c) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0007fa05) mp4_progress_pane_t_ParamLimits

0x7c3e,	// (0x00077d65) mup_progress_pane_cp04_ParamLimits

0x8937,	// (0x00078a5e) main_myfav_hc_pane_t5_ParamLimits

0x8937,	// (0x00078a5e) main_myfav_hc_pane_t5

0xb252,	// (0x0007b379) aid_zoom_text_primary

0x26f1,	// (0x00072818) popup_adpt_find_window_ParamLimits

0xb262,	// (0x0007b389) main_cam_set_pane

0x821a,	// (0x00078341) cam4_zoom_pane_ParamLimits

0x821a,	// (0x00078341) cam4_zoom_pane

0x8abd,	// (0x00078be4) main_cam_set_pane_g1_ParamLimits

0x8abd,	// (0x00078be4) main_cam_set_pane_g1

0x8acb,	// (0x00078bf2) main_cam_set_pane_g2_ParamLimits

0x8acb,	// (0x00078bf2) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0007fac6) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0007fac6) main_cam_set_pane_g

0x8aec,	// (0x00078c13) main_cam_set_pane_t1_ParamLimits

0x8aec,	// (0x00078c13) main_cam_set_pane_t1

0x8b07,	// (0x00078c2e) main_cset_listscroll_pane_ParamLimits

0x8b07,	// (0x00078c2e) main_cset_listscroll_pane

0x8b27,	// (0x00078c4e) main_cset_slider_pane_ParamLimits

0x8b27,	// (0x00078c4e) main_cset_slider_pane

0x8b55,	// (0x00078c7c) main_cset_list_pane_ParamLimits

0x8b55,	// (0x00078c7c) main_cset_list_pane

0x8b65,	// (0x00078c8c) scroll_pane_cp028

0x8b6e,	// (0x00078c95) aid_area_touch_slider

0x8b8a,	// (0x00078cb1) cset_slider_pane

0x8bb4,	// (0x00078cdb) main_cset_slider_pane_g1

0x8bc9,	// (0x00078cf0) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0007facb) main_cset_slider_pane_g

0x8cb5,	// (0x00078ddc) main_cset_slider_pane_t1

0x8ce3,	// (0x00078e0a) main_cset_slider_pane_t2

0x8cfd,	// (0x00078e24) main_cset_slider_pane_t3

0x8d17,	// (0x00078e3e) main_cset_slider_pane_t4

0x8d31,	// (0x00078e58) main_cset_slider_pane_t5

0x8d4d,	// (0x00078e74) main_cset_slider_pane_t6

0x8d62,	// (0x00078e89) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0007faf0) main_cset_slider_pane_t

0x8ed8,	// (0x00078fff) cset_list_set_pane_ParamLimits

0x8ed8,	// (0x00078fff) cset_list_set_pane

0x8eec,	// (0x00079013) aid_position_infowindow_above

0x8ef4,	// (0x0007901b) aid_position_infowindow_below

0x8efc,	// (0x00079023) cset_list_set_pane_g1_ParamLimits

0x8efc,	// (0x00079023) cset_list_set_pane_g1

0x1dd8,	// (0x00071eff) cset_list_set_pane_g3_ParamLimits

0x1dd8,	// (0x00071eff) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0007fb0f) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0007fb0f) cset_list_set_pane_g

0x1de7,	// (0x00071f0e) cset_list_set_pane_t1_ParamLimits

0x1de7,	// (0x00071f0e) cset_list_set_pane_t1

0xb262,	// (0x0007b389) list_highlight_pane_cp021_ParamLimits

0xb262,	// (0x0007b389) list_highlight_pane_cp021

0xbcd4,	// (0x0007bdfb) cset_slider_pane_g1

0xbce6,	// (0x0007be0d) cset_slider_pane_g2

0xbcdd,	// (0x0007be04) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0007fb14) cset_slider_pane_g

0xefe9,	// (0x0007f110) aid_area_touch_cam4_zoom

0xeff1,	// (0x0007f118) cam4_zoom_cont_pane

0xeff9,	// (0x0007f120) cam4_zoom_pane_g1

0xf001,	// (0x0007f128) cam4_zoom_pane_g2

0x8f08,	// (0x0007902f) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0007fb1b) cam4_zoom_pane_g

0xd2cf,	// (0x0007d3f6) cam4_zoom_cont_pane_g1

0xd2d8,	// (0x0007d3ff) cam4_zoom_cont_pane_g2

0xd2e1,	// (0x0007d408) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0007fb22) cam4_zoom_cont_pane_g

0x7ff5,	// (0x0007811c) call4_image_pane_ParamLimits

0x7ff5,	// (0x0007811c) call4_image_pane

0x8055,	// (0x0007817c) call4_windows_conf_pane_ParamLimits

0x8094,	// (0x000781bb) popup_call4_audio_in_window_ParamLimits

0x8094,	// (0x000781bb) popup_call4_audio_in_window

0x254c,	// (0x00072673) bg_popup_call2_act_pane_cp02

0x818f,	// (0x000782b6) call4_list_conf_pane

0x047c,	// (0x000705a3) call4_image_pane_g1

0x047c,	// (0x000705a3) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0007f836) call4_image_pane_g

0x8f10,	// (0x00079037) list_single_graphic_popup_conf4_pane_ParamLimits

0x8f10,	// (0x00079037) list_single_graphic_popup_conf4_pane

0x254c,	// (0x00072673) list_highlight_pane_cp022

0x8f23,	// (0x0007904a) list_single_graphic_popup_conf4_pane_g1

0xb9a5,	// (0x0007bacc) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0007fb29) list_single_graphic_popup_conf4_pane_g

0x8f2b,	// (0x00079052) list_single_graphic_popup_conf4_pane_t1

0x3df3,	// (0x00073f1a) popup_vtel_slider_window_ParamLimits

0x3df3,	// (0x00073f1a) popup_vtel_slider_window

0x7cd7,	// (0x00077dfe) dialer2_ne_pane_t2_ParamLimits

0x7cd7,	// (0x00077dfe) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0007fa0a) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0007fa0a) dialer2_ne_pane_t

0xecbc,	// (0x0007ede3) bg_popup_sub_pane_cp010_ParamLimits

0xecbc,	// (0x0007ede3) bg_popup_sub_pane_cp010

0x8f39,	// (0x00079060) popup_vtel_slider_window_g1_ParamLimits

0x8f39,	// (0x00079060) popup_vtel_slider_window_g1

0x8f4c,	// (0x00079073) popup_vtel_slider_window_g2_ParamLimits

0x8f4c,	// (0x00079073) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0007fb2e) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0007fb2e) popup_vtel_slider_window_g

0x8fa2,	// (0x000790c9) vtel_slider_pane_ParamLimits

0x8fa2,	// (0x000790c9) vtel_slider_pane

0x8fc4,	// (0x000790eb) vtel_slider_pane_g1_ParamLimits

0x8fc4,	// (0x000790eb) vtel_slider_pane_g1

0x8fd8,	// (0x000790ff) vtel_slider_pane_g2_ParamLimits

0x8fd8,	// (0x000790ff) vtel_slider_pane_g2

0x8ff0,	// (0x00079117) vtel_slider_pane_g3_ParamLimits

0x8ff0,	// (0x00079117) vtel_slider_pane_g3

0x8fc4,	// (0x000790eb) vtel_slider_pane_g4_ParamLimits

0x8fc4,	// (0x000790eb) vtel_slider_pane_g4

0x9006,	// (0x0007912d) vtel_slider_pane_g5_ParamLimits

0x9006,	// (0x0007912d) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0007fb37) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0007fb37) vtel_slider_pane_g

0x254c,	// (0x00072673) main_gallery2_pane

0x849a,	// (0x000785c1) aid_size_row_itut2_dropdow_list_ParamLimits

0x849a,	// (0x000785c1) aid_size_row_itut2_dropdow_list

0x8526,	// (0x0007864d) grid_vitu2_function_top_pane_ParamLimits

0x8526,	// (0x0007864d) grid_vitu2_function_top_pane

0x858b,	// (0x000786b2) popup_vitu2_dropdown_list_window_ParamLimits

0x858b,	// (0x000786b2) popup_vitu2_dropdown_list_window

0x85b4,	// (0x000786db) popup_vitu2_match_list_window

0x901c,	// (0x00079143) cell_vitu2_function_top_pane_ParamLimits

0x901c,	// (0x00079143) cell_vitu2_function_top_pane

0x903a,	// (0x00079161) cell_vitu2_function_top_pane_cp01_ParamLimits

0x903a,	// (0x00079161) cell_vitu2_function_top_pane_cp01

0x9058,	// (0x0007917f) cell_vitu2_function_top_wide_pane_ParamLimits

0x9058,	// (0x0007917f) cell_vitu2_function_top_wide_pane

0xb262,	// (0x0007b389) bg_button_pane_cp012

0x9076,	// (0x0007919d) cell_vitu2_function_top_pane_g1

0xf009,	// (0x0007f130) bg_button_pane_cp013_ParamLimits

0xf009,	// (0x0007f130) bg_button_pane_cp013

0x908a,	// (0x000791b1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x908a,	// (0x000791b1) cell_vitu2_function_top_wide_pane_g1

0xb262,	// (0x0007b389) bg_popup_sub_pane_cp20

0x90a2,	// (0x000791c9) list_vitu2_match_list_pane

0x873a,	// (0x00078861) bg_popup_sub_pane_cp20_g1

0x8742,	// (0x00078869) bg_popup_sub_pane_cp20_g2

0x422b,	// (0x00074352) bg_popup_sub_pane_cp20_g3

0x874a,	// (0x00078871) bg_popup_sub_pane_cp20_g4

0x420b,	// (0x00074332) bg_popup_sub_pane_cp20_g5

0x90c0,	// (0x000791e7) bg_popup_sub_pane_cp20_g6

0x875a,	// (0x00078881) bg_popup_sub_pane_cp20_g7

0x8762,	// (0x00078889) bg_popup_sub_pane_cp20_g8

0x876a,	// (0x00078891) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0007fb42) bg_popup_sub_pane_cp20_g

0xf025,	// (0x0007f14c) list_vitu2_match_list_item_pane_ParamLimits

0xf025,	// (0x0007f14c) list_vitu2_match_list_item_pane

0xf037,	// (0x0007f15e) list_vitu2_match_list_item_pane_t1

0x254c,	// (0x00072673) bg_popup_sub_pane_cp21

0xb83b,	// (0x0007b962) grid_vitu2_dropdown_list_pane

0x90c8,	// (0x000791ef) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x90c8,	// (0x000791ef) cell_vitu2_dropdown_list_char_pane

0x90e9,	// (0x00079210) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x90e9,	// (0x00079210) cell_vitu2_dropdown_list_ctrl_pane

0x9115,	// (0x0007923c) cell_vitu2_dropdown_list_char_pane_g1

0x911e,	// (0x00079245) cell_vitu2_dropdown_list_char_pane_g2

0x9127,	// (0x0007924e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0007fb5f) cell_vitu2_dropdown_list_char_pane_g

0x9130,	// (0x00079257) cell_vitu2_dropdown_list_char_pane_t1

0x913e,	// (0x00079265) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x913e,	// (0x00079265) cell_vitu2_dropdown_list_ctrl_pane_g1

0x914e,	// (0x00079275) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x914e,	// (0x00079275) cell_vitu2_dropdown_list_ctrl_pane_g2

0x915f,	// (0x00079286) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x915f,	// (0x00079286) cell_vitu2_dropdown_list_ctrl_pane_g3

0x916f,	// (0x00079296) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x916f,	// (0x00079296) cell_vitu2_dropdown_list_ctrl_pane_g4

0x06e3,	// (0x0007080a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x06e3,	// (0x0007080a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0007fb66) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0007fb66) cell_vitu2_dropdown_list_ctrl_pane_g

0x918b,	// (0x000792b2) aid_size_cell_gallery2_ParamLimits

0x918b,	// (0x000792b2) aid_size_cell_gallery2

0x91a1,	// (0x000792c8) grid_gallery2_pane_ParamLimits

0x91a1,	// (0x000792c8) grid_gallery2_pane

0x91b5,	// (0x000792dc) scroll_pane_cp029_ParamLimits

0x91b5,	// (0x000792dc) scroll_pane_cp029

0x91c1,	// (0x000792e8) cell_gallery2_pane_ParamLimits

0x91c1,	// (0x000792e8) cell_gallery2_pane

0x91f7,	// (0x0007931e) cell_gallery2_pane_g2

0x9201,	// (0x00079328) cell_gallery2_pane_g3

0x9209,	// (0x00079330) cell_gallery2_pane_g4

0x9211,	// (0x00079338) cell_gallery2_pane_g5

0xbb7e,	// (0x0007bca5) grid_highlight_pane_cp10

0x85b4,	// (0x000786db) popup_vitu2_match_list_window_ParamLimits

0x85c9,	// (0x000786f0) popup_vitu2_query_window_ParamLimits

0x85c9,	// (0x000786f0) popup_vitu2_query_window

0x254c,	// (0x00072673) bg_vitu2_candi_button_pane

0x9115,	// (0x0007923c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x911e,	// (0x00079245) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x9127,	// (0x0007924e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1e2d,	// (0x00071f54) bg_button_pane_cp015

0x9219,	// (0x00079340) bg_button_pane_cp016

0x9223,	// (0x0007934a) bg_button_pane_cp017

0xb262,	// (0x0007b389) bg_popup_sub_pane_cp22

0x923e,	// (0x00079365) popup_vitu2_query_window_g1

0x924a,	// (0x00079371) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0007fb71) popup_vitu2_query_window_g

0x1e44,	// (0x00071f6b) popup_vitu2_query_window_t1_ParamLimits

0x1e44,	// (0x00071f6b) popup_vitu2_query_window_t1

0x1e6c,	// (0x00071f93) popup_vitu2_query_window_t2_ParamLimits

0x1e6c,	// (0x00071f93) popup_vitu2_query_window_t2

0x1e7e,	// (0x00071fa5) popup_vitu2_query_window_t3_ParamLimits

0x1e7e,	// (0x00071fa5) popup_vitu2_query_window_t3

0x9258,	// (0x0007937f) popup_vitu2_query_window_t4_ParamLimits

0x9258,	// (0x0007937f) popup_vitu2_query_window_t4

0x926c,	// (0x00079393) popup_vitu2_query_window_t5_ParamLimits

0x926c,	// (0x00079393) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0007fb76) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0007fb76) popup_vitu2_query_window_t

0x8b4d,	// (0x00078c74) main_cset_text_pane

0x8b6e,	// (0x00078c95) aid_area_touch_slider_ParamLimits

0x8b8a,	// (0x00078cb1) cset_slider_pane_ParamLimits

0x8bb4,	// (0x00078cdb) main_cset_slider_pane_g1_ParamLimits

0x8bc9,	// (0x00078cf0) main_cset_slider_pane_g2_ParamLimits

0x8bde,	// (0x00078d05) main_cset_slider_pane_g3_ParamLimits

0x8bde,	// (0x00078d05) main_cset_slider_pane_g3

0x8bea,	// (0x00078d11) main_cset_slider_pane_g4_ParamLimits

0x8bea,	// (0x00078d11) main_cset_slider_pane_g4

0x8bf9,	// (0x00078d20) main_cset_slider_pane_g5_ParamLimits

0x8bf9,	// (0x00078d20) main_cset_slider_pane_g5

0x8c05,	// (0x00078d2c) main_cset_slider_pane_g6_ParamLimits

0x8c05,	// (0x00078d2c) main_cset_slider_pane_g6

0xf9a4,	// (0x0007facb) main_cset_slider_pane_g_ParamLimits

0x8cb5,	// (0x00078ddc) main_cset_slider_pane_t1_ParamLimits

0x8ce3,	// (0x00078e0a) main_cset_slider_pane_t2_ParamLimits

0x8cfd,	// (0x00078e24) main_cset_slider_pane_t3_ParamLimits

0x8d17,	// (0x00078e3e) main_cset_slider_pane_t4_ParamLimits

0x8d31,	// (0x00078e58) main_cset_slider_pane_t5_ParamLimits

0x8d4d,	// (0x00078e74) main_cset_slider_pane_t6_ParamLimits

0x8d62,	// (0x00078e89) main_cset_slider_pane_t7_ParamLimits

0x8d8c,	// (0x00078eb3) main_cset_slider_pane_t8_ParamLimits

0x8d8c,	// (0x00078eb3) main_cset_slider_pane_t8

0x8db4,	// (0x00078edb) main_cset_slider_pane_t9_ParamLimits

0x8db4,	// (0x00078edb) main_cset_slider_pane_t9

0x8ddc,	// (0x00078f03) main_cset_slider_pane_t10_ParamLimits

0x8ddc,	// (0x00078f03) main_cset_slider_pane_t10

0x8e04,	// (0x00078f2b) main_cset_slider_pane_t11_ParamLimits

0x8e04,	// (0x00078f2b) main_cset_slider_pane_t11

0x8e2c,	// (0x00078f53) main_cset_slider_pane_t12_ParamLimits

0x8e2c,	// (0x00078f53) main_cset_slider_pane_t12

0x8e49,	// (0x00078f70) main_cset_slider_pane_t13_ParamLimits

0x8e49,	// (0x00078f70) main_cset_slider_pane_t13

0xf9c9,	// (0x0007faf0) main_cset_slider_pane_t_ParamLimits

0x254c,	// (0x00072673) bg_popup_sub_pane_cp011

0x9280,	// (0x000793a7) main_cset_text_pane_g1

0x9288,	// (0x000793af) main_cset_text_pane_t1

0x9296,	// (0x000793bd) main_cset_text_pane_t2

0x92a4,	// (0x000793cb) main_cset_text_pane_t3

0x92b2,	// (0x000793d9) main_cset_text_pane_t4

0x92c0,	// (0x000793e7) main_cset_text_pane_t5

0x92ce,	// (0x000793f5) main_cset_text_pane_t6

0x92dc,	// (0x00079403) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0007fb81) main_cset_text_pane_t

0x254c,	// (0x00072673) main_cam4_burst_pane

0x254c,	// (0x00072673) main_cam5_pane

0x8a74,	// (0x00078b9b) bg_button_pane_cp019

0x8a7d,	// (0x00078ba4) bg_button_pane_cp020

0x8c19,	// (0x00078d40) main_cset_slider_pane_g7_ParamLimits

0x8c19,	// (0x00078d40) main_cset_slider_pane_g7

0x8c25,	// (0x00078d4c) main_cset_slider_pane_g8_ParamLimits

0x8c25,	// (0x00078d4c) main_cset_slider_pane_g8

0x8c31,	// (0x00078d58) main_cset_slider_pane_g9_ParamLimits

0x8c31,	// (0x00078d58) main_cset_slider_pane_g9

0x8c3d,	// (0x00078d64) main_cset_slider_pane_g10_ParamLimits

0x8c3d,	// (0x00078d64) main_cset_slider_pane_g10

0x8c49,	// (0x00078d70) main_cset_slider_pane_g11_ParamLimits

0x8c49,	// (0x00078d70) main_cset_slider_pane_g11

0x8c55,	// (0x00078d7c) main_cset_slider_pane_g12_ParamLimits

0x8c55,	// (0x00078d7c) main_cset_slider_pane_g12

0x8c61,	// (0x00078d88) main_cset_slider_pane_g13_ParamLimits

0x8c61,	// (0x00078d88) main_cset_slider_pane_g13

0x8c6d,	// (0x00078d94) main_cset_slider_pane_g14_ParamLimits

0x8c6d,	// (0x00078d94) main_cset_slider_pane_g14

0x8c79,	// (0x00078da0) main_cset_slider_pane_g15_ParamLimits

0x8c79,	// (0x00078da0) main_cset_slider_pane_g15

0x8e66,	// (0x00078f8d) main_cset_slider_pane_t14_ParamLimits

0x8e66,	// (0x00078f8d) main_cset_slider_pane_t14

0x8e9f,	// (0x00078fc6) main_cset_slider_pane_t15_ParamLimits

0x8e9f,	// (0x00078fc6) main_cset_slider_pane_t15

0x92ea,	// (0x00079411) aid_cam4_burst_size_cell_ParamLimits

0x92ea,	// (0x00079411) aid_cam4_burst_size_cell

0x930a,	// (0x00079431) grid_cam4_burst_pane_ParamLimits

0x930a,	// (0x00079431) grid_cam4_burst_pane

0x9342,	// (0x00079469) linegrid_cam4_burst_pane_ParamLimits

0x9342,	// (0x00079469) linegrid_cam4_burst_pane

0x018a,	// (0x000702b1) scroll_pane_cp30_ParamLimits

0x018a,	// (0x000702b1) scroll_pane_cp30

0x9368,	// (0x0007948f) cell_cam4_burst_pane_ParamLimits

0x9368,	// (0x0007948f) cell_cam4_burst_pane

0x93b5,	// (0x000794dc) linegrid_cam4_burst_pane_g1_ParamLimits

0x93b5,	// (0x000794dc) linegrid_cam4_burst_pane_g1

0x93c2,	// (0x000794e9) linegrid_cam4_burst_pane_g2_ParamLimits

0x93c2,	// (0x000794e9) linegrid_cam4_burst_pane_g2

0x93d3,	// (0x000794fa) linegrid_cam4_burst_pane_g3_ParamLimits

0x93d3,	// (0x000794fa) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0007fb90) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0007fb90) linegrid_cam4_burst_pane_g

0x93e0,	// (0x00079507) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x93e0,	// (0x00079507) linegrid_cam4_burst_pane_g3_copy1

0x93fa,	// (0x00079521) linegrid_cam4_burst_pane_g4_ParamLimits

0x93fa,	// (0x00079521) linegrid_cam4_burst_pane_g4

0x9407,	// (0x0007952e) linegrid_cam4_burst_pane_g5_ParamLimits

0x9407,	// (0x0007952e) linegrid_cam4_burst_pane_g5

0x9418,	// (0x0007953f) linegrid_cam4_burst_pane_g6_ParamLimits

0x9418,	// (0x0007953f) linegrid_cam4_burst_pane_g6

0x942f,	// (0x00079556) linegrid_cam4_burst_pane_g7_ParamLimits

0x942f,	// (0x00079556) linegrid_cam4_burst_pane_g7

0x943c,	// (0x00079563) cell_cam4_burst_pane_g1

0x945b,	// (0x00079582) main_cam5_pane_t1_ParamLimits

0x945b,	// (0x00079582) main_cam5_pane_t1

0x946d,	// (0x00079594) main_cam5_pane_t2_ParamLimits

0x946d,	// (0x00079594) main_cam5_pane_t2

0x947f,	// (0x000795a6) main_cam5_pane_t3_ParamLimits

0x947f,	// (0x000795a6) main_cam5_pane_t3

0x9491,	// (0x000795b8) main_cam5_pane_t4_ParamLimits

0x9491,	// (0x000795b8) main_cam5_pane_t4

0x94a7,	// (0x000795ce) main_cam5_pane_t5_ParamLimits

0x94a7,	// (0x000795ce) main_cam5_pane_t5

0x94b9,	// (0x000795e0) main_cam5_pane_t6_ParamLimits

0x94b9,	// (0x000795e0) main_cam5_pane_t6

0x94cd,	// (0x000795f4) main_cam5_pane_t7_ParamLimits

0x94cd,	// (0x000795f4) main_cam5_pane_t7

0x94df,	// (0x00079606) main_cam5_pane_t8_ParamLimits

0x94df,	// (0x00079606) main_cam5_pane_t8

0x94fb,	// (0x00079622) main_cam5_pane_t9_ParamLimits

0x94fb,	// (0x00079622) main_cam5_pane_t9

0x950d,	// (0x00079634) main_cam5_pane_t10_ParamLimits

0x950d,	// (0x00079634) main_cam5_pane_t10

0x951f,	// (0x00079646) main_cam5_pane_t11_ParamLimits

0x951f,	// (0x00079646) main_cam5_pane_t11

0x9531,	// (0x00079658) main_cam5_pane_t12_ParamLimits

0x9531,	// (0x00079658) main_cam5_pane_t12

0x9546,	// (0x0007966d) main_cam5_pane_t13_ParamLimits

0x9546,	// (0x0007966d) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0007fb9c) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0007fb9c) main_cam5_pane_t

0x277e,	// (0x000728a5) popup_scut_keymap_window_ParamLimits

0x277e,	// (0x000728a5) popup_scut_keymap_window

0x9563,	// (0x0007968a) aid_size_cell_brow_shortcut

0xbb7e,	// (0x0007bca5) bg_popup_window_pane_cp010

0x956f,	// (0x00079696) grid_scut_pane

0x957b,	// (0x000796a2) cell_scut_pane_ParamLimits

0x957b,	// (0x000796a2) cell_scut_pane

0x9592,	// (0x000796b9) cell_scut_pane_g1

0x959b,	// (0x000796c2) cell_scut_pane_t1

0x95aa,	// (0x000796d1) cell_scut_pane_t2

0x95b9,	// (0x000796e0) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0007fbb7) cell_scut_pane_t

0x6e29,	// (0x00076f50) main_mup3_pane_g8_ParamLimits

0x6e29,	// (0x00076f50) main_mup3_pane_g8

0x84b2,	// (0x000785d9) area_vitu2_query_pane_ParamLimits

0x84b2,	// (0x000785d9) area_vitu2_query_pane

0x1e37,	// (0x00071f5e) input_focus_pane_cp08

0x95c7,	// (0x000796ee) area_vitu2_query_pane_g1

0x1ea6,	// (0x00071fcd) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0007fbbe) area_vitu2_query_pane_g

0x95d3,	// (0x000796fa) area_vitu2_query_pane_t1_ParamLimits

0x95d3,	// (0x000796fa) area_vitu2_query_pane_t1

0x95e7,	// (0x0007970e) area_vitu2_query_pane_t2_ParamLimits

0x95e7,	// (0x0007970e) area_vitu2_query_pane_t2

0x1eb7,	// (0x00071fde) area_vitu2_query_pane_t3_ParamLimits

0x1eb7,	// (0x00071fde) area_vitu2_query_pane_t3

0xd310,	// (0x0007d437) area_vitu2_query_pane_t4_ParamLimits

0xd310,	// (0x0007d437) area_vitu2_query_pane_t4

0xd338,	// (0x0007d45f) area_vitu2_query_pane_t5_ParamLimits

0xd338,	// (0x0007d45f) area_vitu2_query_pane_t5

0xd360,	// (0x0007d487) area_vitu2_query_pane_t6_ParamLimits

0xd360,	// (0x0007d487) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0007fbc3) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0007fbc3) area_vitu2_query_pane_t

0x95fb,	// (0x00079722) bg_button_pane_cp018

0x9609,	// (0x00079730) bg_button_pane_cp021

0x1edf,	// (0x00072006) bg_button_pane_cp022

0x1ef0,	// (0x00072017) input_focus_pane_cp09

0x4e88,	// (0x00074faf) aid_size_touch_mv_arrow_left

0x4eb1,	// (0x00074fd8) aid_size_touch_mv_arrow_right

0x8c91,	// (0x00078db8) main_cset_slider_pane_g16_ParamLimits

0x8c91,	// (0x00078db8) main_cset_slider_pane_g16

0x8c9d,	// (0x00078dc4) main_cset_slider_pane_g17_ParamLimits

0x8c9d,	// (0x00078dc4) main_cset_slider_pane_g17

0x943c,	// (0x00079563) cell_cam4_burst_pane_g1_ParamLimits

0x254c,	// (0x00072673) compa_mode_pane

0x8f5c,	// (0x00079083) popup_vtel_slider_window_g3_ParamLimits

0x8f5c,	// (0x00079083) popup_vtel_slider_window_g3

0x8f73,	// (0x0007909a) popup_vtel_slider_window_g4_ParamLimits

0x8f73,	// (0x0007909a) popup_vtel_slider_window_g4

0x8f8a,	// (0x000790b1) popup_vtel_slider_window_t1_ParamLimits

0x8f8a,	// (0x000790b1) popup_vtel_slider_window_t1

0x254c,	// (0x00072673) main_cl_pane

0xd007,	// (0x0007d12e) popup_imed_adjust2_window_ParamLimits

0xcfdf,	// (0x0007d106) bg_tb_trans_pane_cp05_ParamLimits

0x0988,	// (0x00070aaf) popup_imed_adjust2_window_g1_ParamLimits

0x0997,	// (0x00070abe) popup_imed_adjust2_window_g2_ParamLimits

0x0997,	// (0x00070abe) popup_imed_adjust2_window_g2

0x09a3,	// (0x00070aca) popup_imed_adjust2_window_g3_ParamLimits

0x09a3,	// (0x00070aca) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0007f934) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0007f934) popup_imed_adjust2_window_g

0x09af,	// (0x00070ad6) popup_imed_adjust2_window_t1_ParamLimits

0x09c7,	// (0x00070aee) slider_imed_adjust_pane_ParamLimits

0x09db,	// (0x00070b02) slider_imed_adjust_pane_g1_ParamLimits

0x09eb,	// (0x00070b12) slider_imed_adjust_pane_g2_ParamLimits

0x09fb,	// (0x00070b22) slider_imed_adjust_pane_g3_ParamLimits

0x0a0c,	// (0x00070b33) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0007f93b) slider_imed_adjust_pane_g_ParamLimits

0x81bb,	// (0x000782e2) aid_touch_area_cam4_ParamLimits

0x81bb,	// (0x000782e2) aid_touch_area_cam4

0xef78,	// (0x0007f09f) battery_pane_cp01

0x828b,	// (0x000783b2) main_camera4_pane_g6_ParamLimits

0x828b,	// (0x000783b2) main_camera4_pane_g6

0x82b5,	// (0x000783dc) main_camera4_pane_t2_ParamLimits

0x82b5,	// (0x000783dc) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0007fa3e) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0007fa3e) main_camera4_pane_t

0x82fc,	// (0x00078423) aid_touch_area_vid4_ParamLimits

0x82fc,	// (0x00078423) aid_touch_area_vid4

0x8363,	// (0x0007848a) main_video4_pane_g5_ParamLimits

0x8363,	// (0x0007848a) main_video4_pane_g5

0x838e,	// (0x000784b5) vid4_progress_pane_ParamLimits

0x838e,	// (0x000784b5) vid4_progress_pane

0x8ca9,	// (0x00078dd0) main_cset_slider_pane_g18_ParamLimits

0x8ca9,	// (0x00078dd0) main_cset_slider_pane_g18

0x944f,	// (0x00079576) cell_cam4_burst_pane_g2_ParamLimits

0x944f,	// (0x00079576) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0007fb97) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0007fb97) cell_cam4_burst_pane_g

0x324b,	// (0x00073372) bg_cl_pane_ParamLimits

0x324b,	// (0x00073372) bg_cl_pane

0x9615,	// (0x0007973c) cl_header_pane_ParamLimits

0x9615,	// (0x0007973c) cl_header_pane

0x9629,	// (0x00079750) cl_listscroll_pane_ParamLimits

0x9629,	// (0x00079750) cl_listscroll_pane

0xd3ac,	// (0x0007d4d3) bg_cl_pane_g1

0xd3b4,	// (0x0007d4db) bg_cl_pane_g2

0xd3bc,	// (0x0007d4e3) bg_cl_pane_g3

0xd3c4,	// (0x0007d4eb) bg_cl_pane_g4

0xd3cc,	// (0x0007d4f3) bg_cl_pane_g5

0xd3d4,	// (0x0007d4fb) bg_cl_pane_g6

0xd3dc,	// (0x0007d503) bg_cl_pane_g7

0xd3e4,	// (0x0007d50b) bg_cl_pane_g8

0xd3ec,	// (0x0007d513) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0007fbd2) bg_cl_pane_g

0x9639,	// (0x00079760) aid_height_cl_leading_ParamLimits

0x9639,	// (0x00079760) aid_height_cl_leading

0x9645,	// (0x0007976c) aid_height_cl_text_ParamLimits

0x9645,	// (0x0007976c) aid_height_cl_text

0xb262,	// (0x0007b389) bg_cl_header_pane_ParamLimits

0xb262,	// (0x0007b389) bg_cl_header_pane

0x9664,	// (0x0007978b) cl_header_pane_g1_ParamLimits

0x9664,	// (0x0007978b) cl_header_pane_g1

0x967a,	// (0x000797a1) cl_header_pane_t1_ParamLimits

0x967a,	// (0x000797a1) cl_header_pane_t1

0xd3f4,	// (0x0007d51b) cl_list_pane

0x8b65,	// (0x00078c8c) hc_scroll_pane_cp01

0x420b,	// (0x00074332) bg_cl_header_pane_g1

0x873a,	// (0x00078861) bg_cl_header_pane_g2

0x422b,	// (0x00074352) bg_cl_header_pane_g3

0x874a,	// (0x00078871) bg_cl_header_pane_g4

0x8742,	// (0x00078869) bg_cl_header_pane_g5

0x90c0,	// (0x000791e7) bg_cl_header_pane_g6

0x8762,	// (0x00078889) bg_cl_header_pane_g7

0x876a,	// (0x00078891) bg_cl_header_pane_g8

0x875a,	// (0x00078881) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0007fbe5) bg_cl_header_pane_g

0x9693,	// (0x000797ba) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9693,	// (0x000797ba) hc_cl_list_double_graphic_heading_pane

0x96a7,	// (0x000797ce) hc_cl_list_single_graphic_pane_ParamLimits

0x96a7,	// (0x000797ce) hc_cl_list_single_graphic_pane

0x96c1,	// (0x000797e8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x96c1,	// (0x000797e8) hc_cl_list_single_graphic_pane_g1

0x96cd,	// (0x000797f4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x96cd,	// (0x000797f4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0007fbf8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0007fbf8) hc_cl_list_single_graphic_pane_g

0x96e1,	// (0x00079808) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x96e1,	// (0x00079808) hc_cl_list_single_graphic_pane_t1

0x96c1,	// (0x000797e8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x96c1,	// (0x000797e8) hc_cl_list_double_graphic_heading_pane_g1

0x96f6,	// (0x0007981d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x96f6,	// (0x0007981d) hc_cl_list_double_graphic_heading_pane_g2

0x970a,	// (0x00079831) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x970a,	// (0x00079831) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0007fbfd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0007fbfd) hc_cl_list_double_graphic_heading_pane_g

0x971e,	// (0x00079845) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x971e,	// (0x00079845) hc_cl_list_double_graphic_heading_pane_t1

0x9733,	// (0x0007985a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9733,	// (0x0007985a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0007fc04) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0007fc04) hc_cl_list_double_graphic_heading_pane_t

0xf04d,	// (0x0007f174) vid4_progress_pane_g1

0xf05d,	// (0x0007f184) vid4_progress_pane_g2

0xf06d,	// (0x0007f194) vid4_progress_pane_g3

0xefa1,	// (0x0007f0c8) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0007fc09) vid4_progress_pane_g

0xf079,	// (0x0007f1a0) vid4_progress_pane_t1

0xf08e,	// (0x0007f1b5) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0007fc14) vid4_progress_pane_t

0xf0b9,	// (0x0007f1e0) wait_bar_pane_cp07

0xecca,	// (0x0007edf1) blid_firmament_pane_ParamLimits

0x02b0,	// (0x000703d7) popup_blid_sat_info2_window_g1

0x02d4,	// (0x000703fb) popup_blid_sat_info2_window_t3

0x02e2,	// (0x00070409) popup_blid_sat_info2_window_t4

0x02f0,	// (0x00070417) popup_blid_sat_info2_window_t5

0x02fe,	// (0x00070425) popup_blid_sat_info2_window_t6

0x030e,	// (0x00070435) popup_blid_sat_info2_window_t7

0x031c,	// (0x00070443) popup_blid_sat_info2_window_t8

0x032a,	// (0x00070451) popup_blid_sat_info2_window_t9

0x0338,	// (0x0007045f) popup_blid_sat_info2_window_t10

0x03fc,	// (0x00070523) aid_firma_cardinal_ParamLimits

0x0410,	// (0x00070537) blid_firmament_pane_t1_ParamLimits

0x0427,	// (0x0007054e) blid_firmament_pane_t2_ParamLimits

0x043e,	// (0x00070565) blid_firmament_pane_t3_ParamLimits

0x0455,	// (0x0007057c) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0007f82d) blid_firmament_pane_t_ParamLimits

0x046c,	// (0x00070593) blid_sat_info_pane_ParamLimits

0xb262,	// (0x0007b389) main_cam_set_pane_ParamLimits

0x7697,	// (0x000777be) aid_size_cell_colour_35_ParamLimits

0x76b7,	// (0x000777de) aid_size_cell_colour_112_ParamLimits

0x76d7,	// (0x000777fe) aid_size_cell_effect_ParamLimits

0xcfdf,	// (0x0007d106) bg_tb_trans_pane_cp02_ParamLimits

0xb5d6,	// (0x0007b6fd) heading_imed_pane_ParamLimits

0x76f7,	// (0x0007781e) listscroll_imed_pane_ParamLimits

0xc611,	// (0x0007c738) popup_call2_audio_first_window_g5_ParamLimits

0xc611,	// (0x0007c738) popup_call2_audio_first_window_g5

0x7d81,	// (0x00077ea8) aid_size_touch_image3_arrow_left_ParamLimits

0x7d81,	// (0x00077ea8) aid_size_touch_image3_arrow_left

0x7dad,	// (0x00077ed4) aid_size_touch_image3_arrow_right_ParamLimits

0x7dad,	// (0x00077ed4) aid_size_touch_image3_arrow_right

0xf0a4,	// (0x0007f1cb) vid4_progress_pane_t3

0x7a1a,	// (0x00077b41) main_hwr_training_symbol_option_pane_ParamLimits

0x7a1a,	// (0x00077b41) main_hwr_training_symbol_option_pane

0x0c75,	// (0x00070d9c) popup_hwr_training_preview_window_ParamLimits

0x0c75,	// (0x00070d9c) popup_hwr_training_preview_window

0x7a3a,	// (0x00077b61) hwr_training_navi_pane_g5_ParamLimits

0x7a3a,	// (0x00077b61) hwr_training_navi_pane_g5

0x8682,	// (0x000787a9) popup_char_count_window

0xb262,	// (0x0007b389) bg_popup_sub_pane_cp20_ParamLimits

0x90a2,	// (0x000791c9) list_vitu2_match_list_pane_ParamLimits

0x90b1,	// (0x000791d8) vitu2_page_scroll_pane_ParamLimits

0x90b1,	// (0x000791d8) vitu2_page_scroll_pane

0xd44f,	// (0x0007d576) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd44f,	// (0x0007d576) list_single_hwr_training_symbol_option_pane

0xd462,	// (0x0007d589) list_single_hwr_training_symbol_option_pane_g1

0xd46a,	// (0x0007d591) list_single_hwr_training_symbol_option_pane_t1

0xd478,	// (0x0007d59f) bg_button_pane_cp023

0xd481,	// (0x0007d5a8) bg_button_pane_cp024

0x9748,	// (0x0007986f) vitu2_page_scroll_pane_g1

0x9750,	// (0x00079877) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0007fc1b) vitu2_page_scroll_pane_g

0x9758,	// (0x0007987f) vitu2_page_scroll_pane_t1

0xd1f4,	// (0x0007d31b) popup_char_count_window_g1

0xd4b4,	// (0x0007d5db) popup_char_count_window_g2

0xd4bd,	// (0x0007d5e4) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0007fc20) popup_char_count_window_g

0xd4c6,	// (0x0007d5ed) popup_char_count_window_t1

0x254c,	// (0x00072673) main_vded2_pane

0x0974,	// (0x00070a9b) aid_size_cell_imed_line

0x097e,	// (0x00070aa5) grid_imed_line_width_pane

0x83fe,	// (0x00078525) vid4_indicators_pane_g4

0xd4d4,	// (0x0007d5fb) cell_imed_line_width_pane_ParamLimits

0xd4d4,	// (0x0007d5fb) cell_imed_line_width_pane

0xd4e8,	// (0x0007d60f) cell_imed_line_width_pane_g1

0x0cc2,	// (0x00070de9) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0007fc27) cell_imed_line_width_pane_g

0x9767,	// (0x0007988e) main_vded2_pane_g1_ParamLimits

0x9767,	// (0x0007988e) main_vded2_pane_g1

0x977d,	// (0x000798a4) main_vded2_pane_g2_ParamLimits

0x977d,	// (0x000798a4) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0007fc2c) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0007fc2c) main_vded2_pane_g

0x978f,	// (0x000798b6) vded2_slider_pane_ParamLimits

0x978f,	// (0x000798b6) vded2_slider_pane

0x979f,	// (0x000798c6) aid_size_touch_vded2_end

0x97a9,	// (0x000798d0) aid_size_touch_vded2_playhead

0xd4f1,	// (0x0007d618) aid_size_touch_vded2_start

0xd4f9,	// (0x0007d620) vded2_slider_bg_pane

0xd502,	// (0x0007d629) vded2_slider_pane_g1

0xd50b,	// (0x0007d632) vded2_slider_pane_g2

0x97b3,	// (0x000798da) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0007fc31) vded2_slider_pane_g

0xd513,	// (0x0007d63a) vded2_slider_bg_pane_g1

0xd51c,	// (0x0007d643) vded2_slider_bg_pane_g2

0xd525,	// (0x0007d64c) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0007fc38) vded2_slider_bg_pane_g

0x5460,	// (0x00075587) aid_postcard_touch_down_pane_ParamLimits

0x5460,	// (0x00075587) aid_postcard_touch_down_pane

0x5476,	// (0x0007559d) aid_postcard_touch_up_pane_ParamLimits

0x5476,	// (0x0007559d) aid_postcard_touch_up_pane

0x254c,	// (0x00072673) main_blid2_pane

0xcfed,	// (0x0007d114) popup_blid2_search_window

0x254c,	// (0x00072673) blid2_gps_pane

0x254c,	// (0x00072673) blid2_navig_pane

0x254c,	// (0x00072673) blid2_search_pane

0x254c,	// (0x00072673) blid2_tripm_pane

0x97be,	// (0x000798e5) blid2_search_pane_g1_ParamLimits

0x97be,	// (0x000798e5) blid2_search_pane_g1

0x97d6,	// (0x000798fd) blid2_search_pane_t1_ParamLimits

0x97d6,	// (0x000798fd) blid2_search_pane_t1

0x97e8,	// (0x0007990f) aid_size_cell_blid2_gps_ParamLimits

0x97e8,	// (0x0007990f) aid_size_cell_blid2_gps

0x9800,	// (0x00079927) blid2_gps_pane_g1_ParamLimits

0x9800,	// (0x00079927) blid2_gps_pane_g1

0x9814,	// (0x0007993b) grid_blid2_satellite_pane_ParamLimits

0x9814,	// (0x0007993b) grid_blid2_satellite_pane

0x982e,	// (0x00079955) blid2_navig_pane_g1_ParamLimits

0x982e,	// (0x00079955) blid2_navig_pane_g1

0x983a,	// (0x00079961) blid2_navig_pane_t1_ParamLimits

0x983a,	// (0x00079961) blid2_navig_pane_t1

0x9855,	// (0x0007997c) blid2_navig_pane_t2_ParamLimits

0x9855,	// (0x0007997c) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0007fc3f) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0007fc3f) blid2_navig_pane_t

0x9870,	// (0x00079997) blid2_navig_ring_pane_ParamLimits

0x9870,	// (0x00079997) blid2_navig_ring_pane

0x9889,	// (0x000799b0) blid2_speed_pane_ParamLimits

0x9889,	// (0x000799b0) blid2_speed_pane

0x9895,	// (0x000799bc) blid2_tripm_pane_g1_ParamLimits

0x9895,	// (0x000799bc) blid2_tripm_pane_g1

0x98b0,	// (0x000799d7) blid2_tripm_pane_g2_ParamLimits

0x98b0,	// (0x000799d7) blid2_tripm_pane_g2

0x98c4,	// (0x000799eb) blid2_tripm_pane_g3_ParamLimits

0x98c4,	// (0x000799eb) blid2_tripm_pane_g3

0x98d8,	// (0x000799ff) blid2_tripm_pane_g4_ParamLimits

0x98d8,	// (0x000799ff) blid2_tripm_pane_g4

0x98ec,	// (0x00079a13) blid2_tripm_pane_g5_ParamLimits

0x98ec,	// (0x00079a13) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0007fc44) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0007fc44) blid2_tripm_pane_g

0x9912,	// (0x00079a39) blid2_tripm_pane_t1_ParamLimits

0x9912,	// (0x00079a39) blid2_tripm_pane_t1

0x992d,	// (0x00079a54) blid2_tripm_pane_t2_ParamLimits

0x992d,	// (0x00079a54) blid2_tripm_pane_t2

0x9948,	// (0x00079a6f) blid2_tripm_pane_t3_ParamLimits

0x9948,	// (0x00079a6f) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0007fc51) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0007fc51) blid2_tripm_pane_t

0x998f,	// (0x00079ab6) cell_blid2_satellite_pane_ParamLimits

0x998f,	// (0x00079ab6) cell_blid2_satellite_pane

0x99ad,	// (0x00079ad4) cell_blid2_satellite_pane_g1

0xd52e,	// (0x0007d655) cell_blid2_satellite_pane_t1

0x047c,	// (0x000705a3) blid2_speed_pane_g1

0xd53c,	// (0x0007d663) blid2_speed_pane_t1

0xd54a,	// (0x0007d671) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0007fc5a) blid2_speed_pane_t

0x047c,	// (0x000705a3) blid2_navig_ring_pane_g1

0x99b6,	// (0x00079add) blid2_navig_ring_pane_g2

0x99be,	// (0x00079ae5) blid2_navig_ring_pane_g3

0x99c6,	// (0x00079aed) blid2_navig_ring_pane_g4

0x99ce,	// (0x00079af5) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0007fc5f) blid2_navig_ring_pane_g

0x254c,	// (0x00072673) bg_popup_window_pane_cp011

0xd558,	// (0x0007d67f) popup_blid2_search_window_g1

0xd560,	// (0x0007d687) popup_blid2_search_window_t1

0xd56e,	// (0x0007d695) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0007fc6a) popup_blid2_search_window_t

0x40cd,	// (0x000741f4) main_browser_pane_g1

0x324b,	// (0x00073372) main_browser_pane_ParamLimits

0xb262,	// (0x0007b389) bg_button_pane_cp011_ParamLimits

0x871c,	// (0x00078843) cell_vitu2_function_pane_g1_ParamLimits

0xb262,	// (0x0007b389) bg_popup_sub_pane_cp22_ParamLimits

0x1e37,	// (0x00071f5e) input_focus_pane_cp08_ParamLimits

0x922d,	// (0x00079354) popup_vitu2_query_button_pane_ParamLimits

0x922d,	// (0x00079354) popup_vitu2_query_button_pane

0x1e2d,	// (0x00071f54) popup_vitu2_query_input_button_pane

0x923e,	// (0x00079365) popup_vitu2_query_window_g1_ParamLimits

0x924a,	// (0x00079371) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0007fb71) popup_vitu2_query_window_g_ParamLimits

0x254c,	// (0x00072673) bg_button_pane_cp026

0x99d6,	// (0x00079afd) popup_vitu2_query_input_button_pane_g1

0x254c,	// (0x00072673) bg_button_pane_cp025

0xd57c,	// (0x0007d6a3) popup_vitu2_query_button_pane_t1

0x6b04,	// (0x00076c2b) main_mp3_pane_t6

0x6b12,	// (0x00076c39) popup_slider_window_cp01

0xef88,	// (0x0007f0af) cam4_battery_pane

0xefe1,	// (0x0007f108) cam4_battery_pane_cp02

0xf045,	// (0x0007f16c) cam4_battery_pane_cp01

0xf045,	// (0x0007f16c) cam4_battery_pane_cp03

0x047c,	// (0x000705a3) cam4_battery_pane_g1

0x99de,	// (0x00079b05) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0007fc6f) cam4_battery_pane_g

0x0346,	// (0x0007046d) popup_blid_sat_info2_window_t11

0x4e88,	// (0x00074faf) aid_size_touch_mv_arrow_left_ParamLimits

0x4eb1,	// (0x00074fd8) aid_size_touch_mv_arrow_right_ParamLimits

0xbade,	// (0x0007bc05) navi_pane_g1_ParamLimits

0x4eda,	// (0x00075001) navi_pane_g2_ParamLimits

0x4f08,	// (0x0007502f) navi_pane_g3_ParamLimits

0xf418,	// (0x0007f53f) navi_pane_g_ParamLimits

0x4f60,	// (0x00075087) navi_pane_mv_t1_ParamLimits

0x7703,	// (0x0007782a) grid_imed_effect_pane_ParamLimits

0x3d23,	// (0x00073e4a) aid_placing_vt_slider_lsc

0x3d2b,	// (0x00073e52) aid_placing_vt_slider_prt

0xb262,	// (0x0007b389) bg_tb_trans_pane_cp01_ParamLimits

0x0603,	// (0x0007072a) popup_image_details_window_g1_ParamLimits

0x0616,	// (0x0007073d) popup_image_details_window_g2_ParamLimits

0x062b,	// (0x00070752) popup_image_details_window_g3_ParamLimits

0x062b,	// (0x00070752) popup_image_details_window_g3

0xf74b,	// (0x0007f872) popup_image_details_window_g_ParamLimits

0x063f,	// (0x00070766) popup_image_details_window_t1_ParamLimits

0x0651,	// (0x00070778) popup_image_details_window_t2_ParamLimits

0x066a,	// (0x00070791) popup_image_details_window_t3_ParamLimits

0x067e,	// (0x000707a5) popup_image_details_window_t4_ParamLimits

0x0699,	// (0x000707c0) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0007f879) popup_image_details_window_t_ParamLimits

0x9651,	// (0x00079778) cl_header_name_pane_ParamLimits

0x9651,	// (0x00079778) cl_header_name_pane

0x99e8,	// (0x00079b0f) cl_header_name_pane_t1_ParamLimits

0x99e8,	// (0x00079b0f) cl_header_name_pane_t1

0x9a09,	// (0x00079b30) cl_header_name_pane_t2_ParamLimits

0x9a09,	// (0x00079b30) cl_header_name_pane_t2

0x9a4b,	// (0x00079b72) cl_header_name_pane_t3_ParamLimits

0x9a4b,	// (0x00079b72) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0007fc74) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0007fc74) cl_header_name_pane_t

0x4f31,	// (0x00075058) navi_pane_mv_g2_ParamLimits

0x865c,	// (0x00078783) field_vitu2_entry_pane_g1_ParamLimits

0x8668,	// (0x0007878f) field_vitu2_entry_pane_g2_ParamLimits

0x8674,	// (0x0007879b) field_vitu2_entry_pane_g3_ParamLimits

0x8674,	// (0x0007879b) field_vitu2_entry_pane_g3

0xf949,	// (0x0007fa70) field_vitu2_entry_pane_g_ParamLimits

0x8698,	// (0x000787bf) cell_vitu2_itu_pane_g1_ParamLimits

0x86a8,	// (0x000787cf) cell_vitu2_itu_pane_g2_ParamLimits

0x86a8,	// (0x000787cf) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0007fa7c) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0007fa7c) cell_vitu2_itu_pane_g

0xb262,	// (0x0007b389) bg_vkb2_func_pane_cp05_ParamLimits

0xb262,	// (0x0007b389) bg_vkb2_func_pane_cp05

0xb262,	// (0x0007b389) bg_vkb2_func_pane_cp03

0xb262,	// (0x0007b389) bg_vkb2_func_pane_cp04

0xb262,	// (0x0007b389) bg_vkb2_func_pane_cp10_ParamLimits

0xb262,	// (0x0007b389) bg_vkb2_func_pane_cp10

0x1edf,	// (0x00072006) bg_vkb2_func_pane_cp08

0x95fb,	// (0x00079722) bg_vkb2_func_pane_cp06

0x9609,	// (0x00079730) bg_vkb2_func_pane_cp07

0xd48a,	// (0x0007d5b1) bg_vkb2_func_pane_cp11_ParamLimits

0xd48a,	// (0x0007d5b1) bg_vkb2_func_pane_cp11

0xd49f,	// (0x0007d5c6) bg_vkb2_func_pane_cp12_ParamLimits

0xd49f,	// (0x0007d5c6) bg_vkb2_func_pane_cp12

0x254c,	// (0x00072673) bg_vkb2_func_pane_cp09

0x873a,	// (0x00078861) bg_vkb2_func_pane_g1

0x422b,	// (0x00074352) bg_vkb2_func_pane_g2

0x8742,	// (0x00078869) bg_vkb2_func_pane_g3

0x874a,	// (0x00078871) bg_vkb2_func_pane_g4

0x90c0,	// (0x000791e7) bg_vkb2_func_pane_g5

0x8762,	// (0x00078889) bg_vkb2_func_pane_g6

0x876a,	// (0x00078891) bg_vkb2_func_pane_g7

0x875a,	// (0x00078881) bg_vkb2_func_pane_g8

0x420b,	// (0x00074332) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0007fc7b) bg_vkb2_func_pane_g

0x9900,	// (0x00079a27) blid2_tripm_pane_g6_ParamLimits

0x9900,	// (0x00079a27) blid2_tripm_pane_g6

0x7c04,	// (0x00077d2b) mp4_progress_pane_g1

0x997b,	// (0x00079aa2) blid2_tripm_values_pane_ParamLimits

0x997b,	// (0x00079aa2) blid2_tripm_values_pane

0x9a7c,	// (0x00079ba3) blid2_tripm_values_pane_t1

0x9a8a,	// (0x00079bb1) blid2_tripm_values_pane_t2

0x9a98,	// (0x00079bbf) blid2_tripm_values_pane_t3

0x9aa6,	// (0x00079bcd) blid2_tripm_values_pane_t4

0x9ab4,	// (0x00079bdb) blid2_tripm_values_pane_t5

0x9ac2,	// (0x00079be9) blid2_tripm_values_pane_t6

0x9ad0,	// (0x00079bf7) blid2_tripm_values_pane_t7

0x9ade,	// (0x00079c05) blid2_tripm_values_pane_t8

0x9aec,	// (0x00079c13) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0007fc8e) blid2_tripm_values_pane_t

0x3d63,	// (0x00073e8a) call_video_pane_t1_ParamLimits

0x3d75,	// (0x00073e9c) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0007f3c8) call_video_pane_t_ParamLimits

0x1c42,	// (0x00071d69) msg_header_pane_g1_ParamLimits

0xbd19,	// (0x0007be40) msg_header_pane_g2_ParamLimits

0xbd19,	// (0x0007be40) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0007f5e2) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0007f5e2) msg_header_pane_g

0x324b,	// (0x00073372) main_clock2_pane_ParamLimits

0x7428,	// (0x0007754f) grid_clock2_toolbar_pane_ParamLimits

0x7428,	// (0x0007754f) grid_clock2_toolbar_pane

0x7428,	// (0x0007754f) listscroll_clock2_pane_ParamLimits

0x7428,	// (0x0007754f) listscroll_clock2_pane

0x7505,	// (0x0007762c) main_clock2_pane_t3_ParamLimits

0x7505,	// (0x0007762c) main_clock2_pane_t3

0x7520,	// (0x00077647) main_clock2_pane_t4_ParamLimits

0x7520,	// (0x00077647) main_clock2_pane_t4

0xd58a,	// (0x0007d6b1) cell_clock2_toolbar_pane

0xd592,	// (0x0007d6b9) cell_clock2_toolbar_pane_cp01

0xd592,	// (0x0007d6b9) cell_clock2_toolbar_pane_cp02

0xd59a,	// (0x0007d6c1) cell_clock2_toolbar_pane_cp03

0xd5a2,	// (0x0007d6c9) list_clock2_pane

0xba31,	// (0x0007bb58) scroll_pane_cp10

0xd5aa,	// (0x0007d6d1) list_single_clock2_pane_ParamLimits

0xd5aa,	// (0x0007d6d1) list_single_clock2_pane

0xbb7e,	// (0x0007bca5) list_highlight_pane_cp08

0xd5b7,	// (0x0007d6de) list_single_clock2_pane_t1

0xd5c5,	// (0x0007d6ec) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0007fca1) list_single_clock2_pane_t

0x254c,	// (0x00072673) bg_button_pane_cp10

0xd5d3,	// (0x0007d6fa) cell_clock2_toolbar_pane_g1

0x53ec,	// (0x00075513) aid_main_viewer_pane_g1_ParamLimits

0x53ec,	// (0x00075513) aid_main_viewer_pane_g1

0x53fa,	// (0x00075521) aid_main_viewer_pane_g2_ParamLimits

0x53fa,	// (0x00075521) aid_main_viewer_pane_g2

0x5408,	// (0x0007552f) aid_main_viewer_pane_g3_ParamLimits

0x5408,	// (0x0007552f) aid_main_viewer_pane_g3

0x5417,	// (0x0007553e) aid_main_viewer_pane_g4_ParamLimits

0x5417,	// (0x0007553e) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0007f5f3) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0007f5f3) aid_main_viewer_pane_g

0x5d2b,	// (0x00075e52) main_calc_pane_ParamLimits

0x5d3f,	// (0x00075e66) main_dialer2_pane_ParamLimits

0x254c,	// (0x00072673) main_cam6_pane

0x254c,	// (0x00072673) main_vid6_pane

0x7434,	// (0x0007755b) listscroll_gen_pane_cp06_ParamLimits

0x7434,	// (0x0007755b) listscroll_gen_pane_cp06

0x753b,	// (0x00077662) main_clock2_pane_t5_ParamLimits

0x753b,	// (0x00077662) main_clock2_pane_t5

0x7598,	// (0x000776bf) aid_call2_pane_cp10_ParamLimits

0x75aa,	// (0x000776d1) aid_call_pane_cp10_ParamLimits

0xbab3,	// (0x0007bbda) popup_clock_analogue_window_cp10_g1_ParamLimits

0xbab3,	// (0x0007bbda) popup_clock_analogue_window_cp10_g2_ParamLimits

0x75bc,	// (0x000776e3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x75bc,	// (0x000776e3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xbab3,	// (0x0007bbda) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0007f929) popup_clock_analogue_window_cp10_g_ParamLimits

0x75ce,	// (0x000776f5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7d2e,	// (0x00077e55) cell_dialer2_keypad_pane_g2_ParamLimits

0x7d2e,	// (0x00077e55) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0007fa0f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0007fa0f) cell_dialer2_keypad_pane_g

0x7d4a,	// (0x00077e71) cell_dialer2_keypad_pane_t1

0x8b3f,	// (0x00078c66) main_cset_text2_pane_ParamLimits

0x8b3f,	// (0x00078c66) main_cset_text2_pane

0x95c7,	// (0x000796ee) area_vitu2_query_pane_g1_ParamLimits

0x1ea6,	// (0x00071fcd) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0007fbbe) area_vitu2_query_pane_g_ParamLimits

0xd388,	// (0x0007d4af) area_vitu2_query_pane_t7_ParamLimits

0xd388,	// (0x0007d4af) area_vitu2_query_pane_t7

0x95fb,	// (0x00079722) bg_button_pane_cp018_ParamLimits

0x9609,	// (0x00079730) bg_button_pane_cp021_ParamLimits

0x1edf,	// (0x00072006) bg_button_pane_cp022_ParamLimits

0x1edf,	// (0x00072006) bg_vkb2_func_pane_cp08_ParamLimits

0x95fb,	// (0x00079722) bg_vkb2_func_pane_cp06_ParamLimits

0x9609,	// (0x00079730) bg_vkb2_func_pane_cp07_ParamLimits

0x1ef0,	// (0x00072017) input_focus_pane_cp09_ParamLimits

0xf0d1,	// (0x0007f1f8) cam6_autofocus_pane_ParamLimits

0xf0d1,	// (0x0007f1f8) cam6_autofocus_pane

0x9afa,	// (0x00079c21) cam6_image_uncrop_pane_ParamLimits

0x9afa,	// (0x00079c21) cam6_image_uncrop_pane

0x9b09,	// (0x00079c30) cam6_indi_pane_ParamLimits

0x9b09,	// (0x00079c30) cam6_indi_pane

0x9b1f,	// (0x00079c46) cam6_mode_pane_ParamLimits

0x9b1f,	// (0x00079c46) cam6_mode_pane

0x9b31,	// (0x00079c58) cam6_timer_pane_ParamLimits

0x9b31,	// (0x00079c58) cam6_timer_pane

0x9b3d,	// (0x00079c64) cam6_zoom_pane_ParamLimits

0x9b3d,	// (0x00079c64) cam6_zoom_pane

0x9b49,	// (0x00079c70) cam6_mode_pane_g1_ParamLimits

0x9b49,	// (0x00079c70) cam6_mode_pane_g1

0x9b59,	// (0x00079c80) cam6_mode_pane_g2_ParamLimits

0x9b59,	// (0x00079c80) cam6_mode_pane_g2

0x9b69,	// (0x00079c90) cam6_mode_pane_g3_ParamLimits

0x9b69,	// (0x00079c90) cam6_mode_pane_g3

0x9b79,	// (0x00079ca0) cam6_mode_pane_g4_ParamLimits

0x9b79,	// (0x00079ca0) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0007fca6) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0007fca6) cam6_mode_pane_g

0xd5db,	// (0x0007d702) bg_tb_trans_pane_cp08_ParamLimits

0xd5db,	// (0x0007d702) bg_tb_trans_pane_cp08

0xd5e9,	// (0x0007d710) cam6_battery_pane_ParamLimits

0xd5e9,	// (0x0007d710) cam6_battery_pane

0xd5ff,	// (0x0007d726) cam6_indi_pane_g1_ParamLimits

0xd5ff,	// (0x0007d726) cam6_indi_pane_g1

0xd611,	// (0x0007d738) cam6_indi_pane_g2_ParamLimits

0xd611,	// (0x0007d738) cam6_indi_pane_g2

0xd623,	// (0x0007d74a) cam6_indi_pane_g3_ParamLimits

0xd623,	// (0x0007d74a) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0007fcaf) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0007fcaf) cam6_indi_pane_g

0xd635,	// (0x0007d75c) cam6_indi_pane_t1_ParamLimits

0xd635,	// (0x0007d75c) cam6_indi_pane_t1

0x9b89,	// (0x00079cb0) cam6_autofocus_pane_g1

0x9b91,	// (0x00079cb8) cam6_autofocus_pane_g2

0x9b99,	// (0x00079cc0) cam6_autofocus_pane_g3

0x9ba1,	// (0x00079cc8) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0007fcb6) cam6_autofocus_pane_g

0xd65b,	// (0x0007d782) cam6_timer_pane_g1

0xd663,	// (0x0007d78a) cam6_timer_pane_t1

0xd671,	// (0x0007d798) cam6_zoom_cont_pane

0xd679,	// (0x0007d7a0) cam6_zoom_pane_g1

0xd681,	// (0x0007d7a8) cam6_zoom_pane_g2

0x9ba9,	// (0x00079cd0) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0007fcbf) cam6_zoom_pane_g

0x047c,	// (0x000705a3) cam6_battery_pane_g1

0x047c,	// (0x000705a3) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0007f836) cam6_battery_pane_g

0xd689,	// (0x0007d7b0) cam6_zoom_cont_pane_g1

0xd692,	// (0x0007d7b9) cam6_zoom_cont_pane_g2

0xd69b,	// (0x0007d7c2) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0007fcc6) cam6_zoom_cont_pane_g

0x9bc6,	// (0x00079ced) cam6_mode_pane_cp_ParamLimits

0x9bc6,	// (0x00079ced) cam6_mode_pane_cp

0x9b3d,	// (0x00079c64) cam6_zoom_pane_cp_ParamLimits

0x9b3d,	// (0x00079c64) cam6_zoom_pane_cp

0x9bd8,	// (0x00079cff) vid6_image_uncrop_cif_pane_ParamLimits

0x9bd8,	// (0x00079cff) vid6_image_uncrop_cif_pane

0x9be8,	// (0x00079d0f) vid6_image_uncrop_nhd_pane_ParamLimits

0x9be8,	// (0x00079d0f) vid6_image_uncrop_nhd_pane

0x9afa,	// (0x00079c21) vid6_image_uncrop_vga_pane_ParamLimits

0x9afa,	// (0x00079c21) vid6_image_uncrop_vga_pane

0x9bf7,	// (0x00079d1e) vid6_image_uncrop_wvga_pane_ParamLimits

0x9bf7,	// (0x00079d1e) vid6_image_uncrop_wvga_pane

0x9c06,	// (0x00079d2d) vid6_indi_pane_ParamLimits

0x9c06,	// (0x00079d2d) vid6_indi_pane

0xd5db,	// (0x0007d702) bg_tb_trans_pane_cp09_ParamLimits

0xd5db,	// (0x0007d702) bg_tb_trans_pane_cp09

0xd6b3,	// (0x0007d7da) cam6_battery_pane_cp_ParamLimits

0xd6b3,	// (0x0007d7da) cam6_battery_pane_cp

0xd6bf,	// (0x0007d7e6) vid6_indi_pane_g1_ParamLimits

0xd6bf,	// (0x0007d7e6) vid6_indi_pane_g1

0xd6d1,	// (0x0007d7f8) vid6_indi_pane_g2_ParamLimits

0xd6d1,	// (0x0007d7f8) vid6_indi_pane_g2

0xd6e3,	// (0x0007d80a) vid6_indi_pane_g3_ParamLimits

0xd6e3,	// (0x0007d80a) vid6_indi_pane_g3

0xd6f8,	// (0x0007d81f) vid6_indi_pane_g4_ParamLimits

0xd6f8,	// (0x0007d81f) vid6_indi_pane_g4

0xd70d,	// (0x0007d834) vid6_indi_pane_g5_ParamLimits

0xd70d,	// (0x0007d834) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x0007fccd) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x0007fccd) vid6_indi_pane_g

0xd727,	// (0x0007d84e) vid6_indi_pane_t1_ParamLimits

0xd727,	// (0x0007d84e) vid6_indi_pane_t1

0xd73d,	// (0x0007d864) vid6_indi_pane_t2_ParamLimits

0xd73d,	// (0x0007d864) vid6_indi_pane_t2

0xd765,	// (0x0007d88c) vid6_indi_pane_t3_ParamLimits

0xd765,	// (0x0007d88c) vid6_indi_pane_t3

0xd78d,	// (0x0007d8b4) vid6_indi_pane_t4_ParamLimits

0xd78d,	// (0x0007d8b4) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0007fcd8) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0007fcd8) vid6_indi_pane_t

0xd7b1,	// (0x0007d8d8) wait_bar_pane_cp08

0x9c1e,	// (0x00079d45) main_cset_text2_pane_t1_ParamLimits

0x9c1e,	// (0x00079d45) main_cset_text2_pane_t1

0x9bb1,	// (0x00079cd8) listscroll_gen_pane_cp06_t1_ParamLimits

0x9bb1,	// (0x00079cd8) listscroll_gen_pane_cp06_t1

0x254c,	// (0x00072673) main_cam6_set_pane

0x06e3,	// (0x0007080a) bg_tb_trans_pane_cp06_ParamLimits

0xef90,	// (0x0007f0b7) cam4_indicators_pane_g1_ParamLimits

0xefa1,	// (0x0007f0c8) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0007fa4c) cam4_indicators_pane_g_ParamLimits

0xefbf,	// (0x0007f0e6) cam4_indicators_pane_t1_ParamLimits

0xd2a4,	// (0x0007d3cb) bg_tb_trans_pane_cp07_ParamLimits

0x83d7,	// (0x000784fe) vid4_indicators_pane_g1_ParamLimits

0x83e4,	// (0x0007850b) vid4_indicators_pane_g2_ParamLimits

0x83f1,	// (0x00078518) vid4_indicators_pane_g3_ParamLimits

0x83fe,	// (0x00078525) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0007fa5e) vid4_indicators_pane_g_ParamLimits

0x8416,	// (0x0007853d) vid4_indicators_pane_t1_ParamLimits

0xf04d,	// (0x0007f174) vid4_progress_pane_g1_ParamLimits

0xf05d,	// (0x0007f184) vid4_progress_pane_g2_ParamLimits

0xf06d,	// (0x0007f194) vid4_progress_pane_g3_ParamLimits

0xefa1,	// (0x0007f0c8) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0007fc09) vid4_progress_pane_g_ParamLimits

0xf079,	// (0x0007f1a0) vid4_progress_pane_t1_ParamLimits

0xf08e,	// (0x0007f1b5) vid4_progress_pane_t2_ParamLimits

0xf0a4,	// (0x0007f1cb) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0007fc14) vid4_progress_pane_t_ParamLimits

0xf0b9,	// (0x0007f1e0) wait_bar_pane_cp07_ParamLimits

0x9c3e,	// (0x00079d65) main_cam6_set_pane_g2_ParamLimits

0x9c3e,	// (0x00079d65) main_cam6_set_pane_g2

0x9c62,	// (0x00079d89) main_cset6_listscroll_pane_ParamLimits

0x9c62,	// (0x00079d89) main_cset6_listscroll_pane

0x9c7e,	// (0x00079da5) main_cset6_slider_pane_ParamLimits

0x9c7e,	// (0x00079da5) main_cset6_slider_pane

0x9c94,	// (0x00079dbb) main_cset6_text2_pane_ParamLimits

0x9c94,	// (0x00079dbb) main_cset6_text2_pane

0xd7c0,	// (0x0007d8e7) main_cset6_text_pane

0xd7c8,	// (0x0007d8ef) main_cset_list_pane_copy1_ParamLimits

0xd7c8,	// (0x0007d8ef) main_cset_list_pane_copy1

0xd7d8,	// (0x0007d8ff) scroll_pane_cp028_copy1

0x9ca2,	// (0x00079dc9) cset_list_set_pane_copy1

0x9cb5,	// (0x00079ddc) aid_position_infowindow_above_copy1

0x9cbd,	// (0x00079de4) aid_position_infowindow_below_copy1

0xf0df,	// (0x0007f206) cset_list_set_pane_g1_copy1

0x1dd8,	// (0x00071eff) cset_list_set_pane_g3_copy1_ParamLimits

0x1dd8,	// (0x00071eff) cset_list_set_pane_g3_copy1

0x1de7,	// (0x00071f0e) cset_list_set_pane_t1_copy1_ParamLimits

0x1de7,	// (0x00071f0e) cset_list_set_pane_t1_copy1

0xb262,	// (0x0007b389) list_highlight_pane_cp021_copy1_ParamLimits

0xb262,	// (0x0007b389) list_highlight_pane_cp021_copy1

0xd7e1,	// (0x0007d908) cset6_slider_pane_ParamLimits

0xd7e1,	// (0x0007d908) cset6_slider_pane

0xd80d,	// (0x0007d934) main_cset6_slider_pane_g1_ParamLimits

0xd80d,	// (0x0007d934) main_cset6_slider_pane_g1

0x9cc5,	// (0x00079dec) main_cset6_slider_pane_g2_ParamLimits

0x9cc5,	// (0x00079dec) main_cset6_slider_pane_g2

0x8c19,	// (0x00078d40) main_cset6_slider_pane_g3_ParamLimits

0x8c19,	// (0x00078d40) main_cset6_slider_pane_g3

0x8c49,	// (0x00078d70) main_cset6_slider_pane_g4_ParamLimits

0x8c49,	// (0x00078d70) main_cset6_slider_pane_g4

0x8c91,	// (0x00078db8) main_cset6_slider_pane_g5_ParamLimits

0x8c91,	// (0x00078db8) main_cset6_slider_pane_g5

0x8c19,	// (0x00078d40) main_cset6_slider_pane_g7_ParamLimits

0x8c19,	// (0x00078d40) main_cset6_slider_pane_g7

0x8c25,	// (0x00078d4c) main_cset6_slider_pane_g8_ParamLimits

0x8c25,	// (0x00078d4c) main_cset6_slider_pane_g8

0x8c31,	// (0x00078d58) main_cset6_slider_pane_g9_ParamLimits

0x8c31,	// (0x00078d58) main_cset6_slider_pane_g9

0x8c3d,	// (0x00078d64) main_cset6_slider_pane_g10_ParamLimits

0x8c3d,	// (0x00078d64) main_cset6_slider_pane_g10

0x8c49,	// (0x00078d70) main_cset6_slider_pane_g11_ParamLimits

0x8c49,	// (0x00078d70) main_cset6_slider_pane_g11

0x8c55,	// (0x00078d7c) main_cset6_slider_pane_g12_ParamLimits

0x8c55,	// (0x00078d7c) main_cset6_slider_pane_g12

0x8c61,	// (0x00078d88) main_cset6_slider_pane_g13_ParamLimits

0x8c61,	// (0x00078d88) main_cset6_slider_pane_g13

0x8c6d,	// (0x00078d94) main_cset6_slider_pane_g14_ParamLimits

0x8c6d,	// (0x00078d94) main_cset6_slider_pane_g14

0x9ced,	// (0x00079e14) main_cset6_slider_pane_g15_ParamLimits

0x9ced,	// (0x00079e14) main_cset6_slider_pane_g15

0x8c91,	// (0x00078db8) main_cset6_slider_pane_g16_ParamLimits

0x8c91,	// (0x00078db8) main_cset6_slider_pane_g16

0x8c9d,	// (0x00078dc4) main_cset6_slider_pane_g17_ParamLimits

0x8c9d,	// (0x00078dc4) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x0007fce1) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x0007fce1) main_cset6_slider_pane_g

0xd835,	// (0x0007d95c) main_cset6_slider_pane_t1_ParamLimits

0xd835,	// (0x0007d95c) main_cset6_slider_pane_t1

0x9d05,	// (0x00079e2c) main_cset6_slider_pane_t2_ParamLimits

0x9d05,	// (0x00079e2c) main_cset6_slider_pane_t2

0x9d30,	// (0x00079e57) main_cset6_slider_pane_t3_ParamLimits

0x9d30,	// (0x00079e57) main_cset6_slider_pane_t3

0x9d5b,	// (0x00079e82) main_cset6_slider_pane_t4_ParamLimits

0x9d5b,	// (0x00079e82) main_cset6_slider_pane_t4

0x9d86,	// (0x00079ead) main_cset6_slider_pane_t5_ParamLimits

0x9d86,	// (0x00079ead) main_cset6_slider_pane_t5

0xd876,	// (0x0007d99d) main_cset6_slider_pane_t7_ParamLimits

0xd876,	// (0x0007d99d) main_cset6_slider_pane_t7

0x9db1,	// (0x00079ed8) main_cset6_slider_pane_t8_ParamLimits

0x9db1,	// (0x00079ed8) main_cset6_slider_pane_t8

0x9dd5,	// (0x00079efc) main_cset6_slider_pane_t9_ParamLimits

0x9dd5,	// (0x00079efc) main_cset6_slider_pane_t9

0x9df9,	// (0x00079f20) main_cset6_slider_pane_t10_ParamLimits

0x9df9,	// (0x00079f20) main_cset6_slider_pane_t10

0x9e1d,	// (0x00079f44) main_cset6_slider_pane_t11_ParamLimits

0x9e1d,	// (0x00079f44) main_cset6_slider_pane_t11

0xd8ac,	// (0x0007d9d3) main_cset6_slider_pane_t14_ParamLimits

0xd8ac,	// (0x0007d9d3) main_cset6_slider_pane_t14

0xd8e5,	// (0x0007da0c) main_cset6_slider_pane_t15_ParamLimits

0xd8e5,	// (0x0007da0c) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0007fd06) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0007fd06) main_cset6_slider_pane_t

0xd2cf,	// (0x0007d3f6) cset_slider_pane_g1_copy1

0xd2d8,	// (0x0007d3ff) cset_slider_pane_g2_copy1

0xd2e1,	// (0x0007d408) cset_slider_pane_g3_copy1

0x254c,	// (0x00072673) bg_popup_sub_pane_cp011_copy1

0x9280,	// (0x000793a7) main_cset_text_pane_g1_copy1

0x9288,	// (0x000793af) main_cset_text_pane_t1_copy1

0x9296,	// (0x000793bd) main_cset_text_pane_t2_copy1

0x92a4,	// (0x000793cb) main_cset_text_pane_t3_copy1

0x92b2,	// (0x000793d9) main_cset_text_pane_t4_copy1

0x92c0,	// (0x000793e7) main_cset_text_pane_t5_copy1

0x92ce,	// (0x000793f5) main_cset_text_pane_t6_copy1

0x92dc,	// (0x00079403) main_cset_text_pane_t7_copy1

0x9c1e,	// (0x00079d45) main_cset_text2_pane_t1_copy1

0x254c,	// (0x00072673) main_ncimui_pane

0x5f75,	// (0x0007609c) popup_query_ncimui_window_ParamLimits

0x5f75,	// (0x0007609c) popup_query_ncimui_window

0xece9,	// (0x0007ee10) field_cale_ev2_pane_g4_ParamLimits

0xece9,	// (0x0007ee10) field_cale_ev2_pane_g4

0x7b82,	// (0x00077ca9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7b82,	// (0x00077ca9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0007f9ea) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0007f9ea) cell_video_dialer_keypad_pane_g

0x7b9a,	// (0x00077cc1) cell_video_dialer_keypad_pane_t1

0x254c,	// (0x00072673) bg_popup_window_pane_cp012

0xb901,	// (0x0007ba28) heading_pane_cp06

0xda0d,	// (0x0007db34) ncim_query_content_pane

0x254c,	// (0x00072673) bg_popup_heading_pane_cp01

0xda15,	// (0x0007db3c) ncim_heading_pane_t1

0xda23,	// (0x0007db4a) ncim_indicator_popup_pane

0xda35,	// (0x0007db5c) ncim_query_button_pane

0xda49,	// (0x0007db70) ncim_query_content_pane_t1

0xda5b,	// (0x0007db82) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0007fd45) ncim_query_content_pane_t

0xda95,	// (0x0007dbbc) ncim_query_list_pane

0xdaa7,	// (0x0007dbce) ncim_query_popup_pane

0xda23,	// (0x0007db4a) ncim_indicator_popup_pane_ParamLimits

0x9f07,	// (0x0007a02e) ncim_query_content_pane_g1_ParamLimits

0x9f07,	// (0x0007a02e) ncim_query_content_pane_g1

0xda49,	// (0x0007db70) ncim_query_content_pane_t1_ParamLimits

0xda5b,	// (0x0007db82) ncim_query_content_pane_t2_ParamLimits

0x9f13,	// (0x0007a03a) ncim_query_content_pane_t3_ParamLimits

0x9f13,	// (0x0007a03a) ncim_query_content_pane_t3

0x9f3b,	// (0x0007a062) ncim_query_content_pane_t4_ParamLimits

0x9f3b,	// (0x0007a062) ncim_query_content_pane_t4

0x9f63,	// (0x0007a08a) ncim_query_content_pane_t5_ParamLimits

0x9f63,	// (0x0007a08a) ncim_query_content_pane_t5

0xda6d,	// (0x0007db94) ncim_query_content_pane_t6_ParamLimits

0xda6d,	// (0x0007db94) ncim_query_content_pane_t6

0xfc1e,	// (0x0007fd45) ncim_query_content_pane_t_ParamLimits

0xda95,	// (0x0007dbbc) ncim_query_list_pane_ParamLimits

0xdaa7,	// (0x0007dbce) ncim_query_popup_pane_ParamLimits

0xdabb,	// (0x0007dbe2) wait_bar_pane_cp04

0x254c,	// (0x00072673) input_focus_pane_cp011

0xdac3,	// (0x0007dbea) ncim_query_popup_pane_t1

0xdad1,	// (0x0007dbf8) ncim_list_query_list_pane_ParamLimits

0xdad1,	// (0x0007dbf8) ncim_list_query_list_pane

0x254c,	// (0x00072673) bg_button_pane_cp027

0xdae4,	// (0x0007dc0b) ncim_query_button_pane_g1

0x254c,	// (0x00072673) list_highlight_pane_cp012

0xdaee,	// (0x0007dc15) ncim_list_query_list_pane_g1

0xdaf6,	// (0x0007dc1d) ncim_list_query_list_pane_t1

0xefb0,	// (0x0007f0d7) cam4_indicators_pane_g3_ParamLimits

0xefb0,	// (0x0007f0d7) cam4_indicators_pane_g3

0x840a,	// (0x00078531) vid4_indicators_pane_g5_ParamLimits

0x840a,	// (0x00078531) vid4_indicators_pane_g5

0xefb0,	// (0x0007f0d7) vid4_progress_pane_g5_ParamLimits

0xefb0,	// (0x0007f0d7) vid4_progress_pane_g5

0x9e4f,	// (0x00079f76) main_ncimui_pane_g1

0x9e95,	// (0x00079fbc) ncimui_group_query_pane_ParamLimits

0x9e95,	// (0x00079fbc) ncimui_group_query_pane

0x9ec9,	// (0x00079ff0) ncimui_list_pane_ParamLimits

0x9ec9,	// (0x00079ff0) ncimui_list_pane

0x9ee3,	// (0x0007a00a) ncimui_text_pane_ParamLimits

0x9ee3,	// (0x0007a00a) ncimui_text_pane

0x9f8b,	// (0x0007a0b2) ncimui_text_pane_t1_ParamLimits

0x9f8b,	// (0x0007a0b2) ncimui_text_pane_t1

0xdb04,	// (0x0007dc2b) ncimui_list_single_graphic_pane_ParamLimits

0xdb04,	// (0x0007dc2b) ncimui_list_single_graphic_pane

0x9fb1,	// (0x0007a0d8) ncimui_query_pane_ParamLimits

0x9fb1,	// (0x0007a0d8) ncimui_query_pane

0x254c,	// (0x00072673) list_highlight_pane_cp013

0xdb14,	// (0x0007dc3b) ncim_list_query_list_pane_t1_copy1

0xdaee,	// (0x0007dc15) ncim_list_single_graphic_pane_g1

0xdb22,	// (0x0007dc49) ncim_query_button_pane_cp01

0xdb2a,	// (0x0007dc51) ncim_query_entry_pane_ParamLimits

0xdb2a,	// (0x0007dc51) ncim_query_entry_pane

0xdb3a,	// (0x0007dc61) ncimui_query_pane_g1

0xdb42,	// (0x0007dc69) ncimui_query_pane_t1_ParamLimits

0xdb42,	// (0x0007dc69) ncimui_query_pane_t1

0x254c,	// (0x00072673) input_focus_pane_cp012

0xdac3,	// (0x0007dbea) ncim_query_entry_pane_t1

0x324b,	// (0x00073372) main_im_pane_ParamLimits

0xb262,	// (0x0007b389) main_mobtv_pane_ParamLimits

0xb262,	// (0x0007b389) main_mobtv_pane

0x8c31,	// (0x00078d58) main_cset6_slider_pane_g18_ParamLimits

0x8c31,	// (0x00078d58) main_cset6_slider_pane_g18

0x8c61,	// (0x00078d88) main_cset6_slider_pane_g19_ParamLimits

0x8c61,	// (0x00078d88) main_cset6_slider_pane_g19

0xdb58,	// (0x0007dc7f) bg_main_mobtv_pane_ParamLimits

0xdb58,	// (0x0007dc7f) bg_main_mobtv_pane

0x9fc1,	// (0x0007a0e8) main_mobtv_info_pane

0x9fca,	// (0x0007a0f1) main_mobtv_loading_pane_ParamLimits

0x9fca,	// (0x0007a0f1) main_mobtv_loading_pane

0xdb66,	// (0x0007dc8d) main_mobtv_pg_channel_list_pane

0xdb70,	// (0x0007dc97) main_mobtv_pg_hdr_pane

0x9fd7,	// (0x0007a0fe) main_mobtv_programe_curr_pane_ParamLimits

0x9fd7,	// (0x0007a0fe) main_mobtv_programe_curr_pane

0x9fe4,	// (0x0007a10b) main_mobtv_programe_next_pane_ParamLimits

0x9fe4,	// (0x0007a10b) main_mobtv_programe_next_pane

0xdb79,	// (0x0007dca0) popup_mobtv_noti_window

0x047c,	// (0x000705a3) main_tv_pg_hdr_pane_g1

0xdb81,	// (0x0007dca8) main_tv_pg_hdr_pane_g2

0xdb89,	// (0x0007dcb0) main_tv_pg_hdr_pane_g3

0xdb91,	// (0x0007dcb8) main_tv_pg_hdr_pane_g4

0xdb99,	// (0x0007dcc0) main_tv_pg_hdr_pane_g5

0xdba3,	// (0x0007dcca) main_tv_pg_hdr_pane_g6

0xdbad,	// (0x0007dcd4) main_tv_pg_hdr_pane_g7

0xdbb7,	// (0x0007dcde) main_tv_pg_hdr_pane_g8

0xdbc1,	// (0x0007dce8) main_tv_pg_hdr_pane_g9

0xdbcb,	// (0x0007dcf2) main_tv_pg_hdr_pane_g10

0xdbd5,	// (0x0007dcfc) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0007fd52) main_tv_pg_hdr_pane_g

0xdbdf,	// (0x0007dd06) main_tv_pg_hdr_pane_t1

0xdbed,	// (0x0007dd14) main_tv_pg_hdr_pane_t2

0xdbfb,	// (0x0007dd22) main_tv_pg_hdr_pane_t3

0xdc0b,	// (0x0007dd32) main_tv_pg_hdr_pane_t4

0xdc1b,	// (0x0007dd42) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0007fd69) main_tv_pg_hdr_pane_t

0xdc2b,	// (0x0007dd52) single_mobtv_pg_channel_pane_ParamLimits

0xdc2b,	// (0x0007dd52) single_mobtv_pg_channel_pane

0xdc3d,	// (0x0007dd64) single_mobtv_pg_channel_table_pane

0xdc46,	// (0x0007dd6d) single_mobtv_pg_channel_thumb_pane

0xdc4f,	// (0x0007dd76) single_tv_pg_channel_pane_g1

0xdc58,	// (0x0007dd7f) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0007fd74) single_tv_pg_channel_pane_g

0x06e3,	// (0x0007080a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x06e3,	// (0x0007080a) bg_single_mobtv_pg_channel_thumb_pane

0xdc61,	// (0x0007dd88) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc61,	// (0x0007dd88) single_mobtv_pg_channel_thumb_pane_g1

0xdc6f,	// (0x0007dd96) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc6f,	// (0x0007dd96) single_mobtv_pg_channel_thumb_pane_g2

0xdc7b,	// (0x0007dda2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc7b,	// (0x0007dda2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0007fd79) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0007fd79) single_mobtv_pg_channel_thumb_pane_g

0xdc87,	// (0x0007ddae) single_mobtv_pg_channel_thumb_pane_t1

0xdc95,	// (0x0007ddbc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0007fd80) single_mobtv_pg_channel_thumb_pane_t

0x047c,	// (0x000705a3) bg_single_mobtv_pg_channel_table_pane_g1

0x047c,	// (0x000705a3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0007f836) bg_single_mobtv_pg_channel_table_pane_g

0xdca3,	// (0x0007ddca) single_mobtv_pg_channel_table_pane_t1

0xdcb1,	// (0x0007ddd8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0007fd85) single_mobtv_pg_channel_table_pane_t

0x9ff9,	// (0x0007a120) main_mobtv_info_pane_g1_ParamLimits

0x9ff9,	// (0x0007a120) main_mobtv_info_pane_g1

0xa017,	// (0x0007a13e) main_mobtv_info_pane_t1_ParamLimits

0xa017,	// (0x0007a13e) main_mobtv_info_pane_t1

0xa08f,	// (0x0007a1b6) main_mobtv_info_pane_t2_ParamLimits

0xa08f,	// (0x0007a1b6) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0007fd8f) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0007fd8f) main_mobtv_info_pane_t

0xa11e,	// (0x0007a245) wait_bar_pane_cp05

0xa130,	// (0x0007a257) main_mobtv_loading_pane_g1_ParamLimits

0xa130,	// (0x0007a257) main_mobtv_loading_pane_g1

0xa143,	// (0x0007a26a) main_mobtv_loading_pane_g2_ParamLimits

0xa143,	// (0x0007a26a) main_mobtv_loading_pane_g2

0xa14f,	// (0x0007a276) main_mobtv_loading_pane_g3_ParamLimits

0xa14f,	// (0x0007a276) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0007fd96) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0007fd96) main_mobtv_loading_pane_g

0xdcbf,	// (0x0007dde6) main_mobtv_loading_pane_t1_ParamLimits

0xdcbf,	// (0x0007dde6) main_mobtv_loading_pane_t1

0xdcd7,	// (0x0007ddfe) main_mobtv_loading_pane_t2_ParamLimits

0xdcd7,	// (0x0007ddfe) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0007fd9d) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0007fd9d) main_mobtv_loading_pane_t

0xa162,	// (0x0007a289) wait_bar_pane_cp06_ParamLimits

0xa162,	// (0x0007a289) wait_bar_pane_cp06

0xdcfb,	// (0x0007de22) main_mobtv_programe_curr_pane_t1

0xdd09,	// (0x0007de30) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0007fda2) main_mobtv_programe_curr_pane_t

0xdd17,	// (0x0007de3e) main_mobtv_programe_next_pane_t1

0xdd25,	// (0x0007de4c) main_mobtv_programe_next_pane_t2

0xdd33,	// (0x0007de5a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0007fda7) main_mobtv_programe_next_pane_t

0x254c,	// (0x00072673) bg_popup_mobtv_noti_window_pane

0xdd41,	// (0x0007de68) popup_mobtv_noti_window_g1

0xdd49,	// (0x0007de70) popup_mobtv_noti_window_t1

0xdd57,	// (0x0007de7e) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x0007fdae) popup_mobtv_noti_window_t

0x047c,	// (0x000705a3) bg_popup_mobtv_noti_window_pane_g1

0x254c,	// (0x00072673) sc_clock_pane

0x254c,	// (0x00072673) main_fs_bigclock_pane

0x9965,	// (0x00079a8c) blid2_tripm_pane_t4_ParamLimits

0x9965,	// (0x00079a8c) blid2_tripm_pane_t4

0xa171,	// (0x0007a298) sc_clock_pane_g1_ParamLimits

0xa171,	// (0x0007a298) sc_clock_pane_g1

0xa183,	// (0x0007a2aa) sc_clock_pane_t1_ParamLimits

0xa183,	// (0x0007a2aa) sc_clock_pane_t1

0xa1a5,	// (0x0007a2cc) sc_clock_pane_t2_ParamLimits

0xa1a5,	// (0x0007a2cc) sc_clock_pane_t2

0xa1bd,	// (0x0007a2e4) sc_clock_pane_t3_ParamLimits

0xa1bd,	// (0x0007a2e4) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0007fdb3) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0007fdb3) sc_clock_pane_t

0xaa6c,	// (0x0007ab93) main_fs_bigclock_indicator_pane_ParamLimits

0xaa6c,	// (0x0007ab93) main_fs_bigclock_indicator_pane

0x06b3,	// (0x000707da) main_fs_bigclock_pane_g1_ParamLimits

0x06b3,	// (0x000707da) main_fs_bigclock_pane_g1

0xaa78,	// (0x0007ab9f) main_fs_bigclock_pane_t1_ParamLimits

0xaa78,	// (0x0007ab9f) main_fs_bigclock_pane_t1

0xaa8a,	// (0x0007abb1) main_fs_bigclock_pane_t2_ParamLimits

0xaa8a,	// (0x0007abb1) main_fs_bigclock_pane_t2

0xaa9c,	// (0x0007abc3) main_fs_bigclock_pane_t3_ParamLimits

0xaa9c,	// (0x0007abc3) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x0007ffb2) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0007ffb2) main_fs_bigclock_pane_t

0xe961,	// (0x0007ea88) main_fs_bigclock_indicator_pane_g1

0xda3d,	// (0x0007db64) ncim_query_content_pane_g2_ParamLimits

0xda3d,	// (0x0007db64) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0007fd40) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0007fd40) ncim_query_content_pane_g

0xa1d4,	// (0x0007a2fb) sc_clock_pane_t4_ParamLimits

0xa1d4,	// (0x0007a2fb) sc_clock_pane_t4

0xb262,	// (0x0007b389) main_radioblah_pane

0x815d,	// (0x00078284) cell_call4_button_pane_t1_copy1_ParamLimits

0x815d,	// (0x00078284) cell_call4_button_pane_t1_copy1

0x9e57,	// (0x00079f7e) main_ncimui_pane_t1_ParamLimits

0x9e57,	// (0x00079f7e) main_ncimui_pane_t1

0x9e69,	// (0x00079f90) main_ncimui_pane_t2_ParamLimits

0x9e69,	// (0x00079f90) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0007fd39) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0007fd39) main_ncimui_pane_t

0xde87,	// (0x0007dfae) main_radioblah_anim_pane_ParamLimits

0xde87,	// (0x0007dfae) main_radioblah_anim_pane

0xde98,	// (0x0007dfbf) main_radioblah_info_pane_ParamLimits

0xde98,	// (0x0007dfbf) main_radioblah_info_pane

0xdeac,	// (0x0007dfd3) main_radioblah_pane_t1_ParamLimits

0xdeac,	// (0x0007dfd3) main_radioblah_pane_t1

0xdec8,	// (0x0007dfef) main_radioblah_pane_t2_ParamLimits

0xdec8,	// (0x0007dfef) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0007fdd4) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0007fdd4) main_radioblah_pane_t

0xa27d,	// (0x0007a3a4) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa27d,	// (0x0007a3a4) main_radioblah_rocker_ctrl_pane

0xdf10,	// (0x0007e037) main_radioblah_info_pane_t1_ParamLimits

0xdf10,	// (0x0007e037) main_radioblah_info_pane_t1

0xa2d5,	// (0x0007a3fc) main_radioblah_info_pane_t2_ParamLimits

0xa2d5,	// (0x0007a3fc) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x0007fddd) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x0007fddd) main_radioblah_info_pane_t

0x047c,	// (0x000705a3) main_radioblah_rocker_ctrl_pane_g1

0xa387,	// (0x0007a4ae) main_radioblah_rocker_ctrl_pane_g2

0xa38f,	// (0x0007a4b6) main_radioblah_rocker_ctrl_pane_g3

0xa397,	// (0x0007a4be) main_radioblah_rocker_ctrl_pane_g4

0xa39f,	// (0x0007a4c6) main_radioblah_rocker_ctrl_pane_g5

0xa3a7,	// (0x0007a4ce) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0007fde6) main_radioblah_rocker_ctrl_pane_g

0x9c1e,	// (0x00079d45) main_cset_text2_pane_t1_copy1_ParamLimits

0xef80,	// (0x0007f0a7) cam4_image_uncrop_qvga_pane

0xefd9,	// (0x0007f100) vid4_image_uncrop_qcif_pane

0xf0d1,	// (0x0007f1f8) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0d1,	// (0x0007f1f8) cam6_image_uncrop_qvga_pane

0xd6a3,	// (0x0007d7ca) vid6_image_uncrop_qcif_pane_ParamLimits

0xd6a3,	// (0x0007d7ca) vid6_image_uncrop_qcif_pane

0x254c,	// (0x00072673) bg_popup_preview_window_pane_cp03

0xd9ef,	// (0x0007db16) list_cset_text2_pane

0xd9f7,	// (0x0007db1e) main_cset6_text2_pane_g1

0xd9ff,	// (0x0007db26) main_cset6_text2_pane_t1

0xa3af,	// (0x0007a4d6) list_cset_text2_pane_t1_ParamLimits

0xa3af,	// (0x0007a4d6) list_cset_text2_pane_t1

0xb262,	// (0x0007b389) main_radioblah_pane_ParamLimits

0xa10a,	// (0x0007a231) main_mobtv_info_pane_t3_ParamLimits

0xa10a,	// (0x0007a231) main_mobtv_info_pane_t3

0xa26b,	// (0x0007a392) main_radioblah_pane_g1

0xa2a5,	// (0x0007a3cc) main_radioblah_info_pane_g1

0xa32c,	// (0x0007a453) main_radioblah_info_pane_t3_ParamLimits

0xa32c,	// (0x0007a453) main_radioblah_info_pane_t3

0x4a01,	// (0x00074b28) highlight_cell_cale_month_pane_ParamLimits

0x4a01,	// (0x00074b28) highlight_cell_cale_month_pane

0x254c,	// (0x00072673) main_phob_fisheye_pane

0x07c5,	// (0x000708ec) scroll_pane_cp0031_ParamLimits

0x07c5,	// (0x000708ec) scroll_pane_cp0031

0xd7b1,	// (0x0007d8d8) wait_bar_pane_cp08_ParamLimits

0x9ca2,	// (0x00079dc9) cset_list_set_pane_copy1_ParamLimits

0xdf4a,	// (0x0007e071) highlight_cell_cale_month_pane_g1

0xa3cc,	// (0x0007a4f3) highlight_cell_cale_month_pane_t1

0xd3f4,	// (0x0007d51b) list_gen_pane_cp01

0x8b65,	// (0x00078c8c) scroll_pane_01

0xd429,	// (0x0007d550) list_single_double_fisheye_pane

0x1f01,	// (0x00072028) list_double_fisheye_pane_g1_ParamLimits

0x1f01,	// (0x00072028) list_double_fisheye_pane_g1

0x1f0d,	// (0x00072034) list_double_fisheye_pane_g2_ParamLimits

0x1f0d,	// (0x00072034) list_double_fisheye_pane_g2

0xa3da,	// (0x0007a501) list_double_fisheye_pane_g3_ParamLimits

0xa3da,	// (0x0007a501) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0007fdf3) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0007fdf3) list_double_fisheye_pane_g

0x1f3e,	// (0x00072065) list_double_fisheye_pane_t1_ParamLimits

0x1f3e,	// (0x00072065) list_double_fisheye_pane_t1

0x1f59,	// (0x00072080) list_double_fisheye_pane_t2_ParamLimits

0x1f59,	// (0x00072080) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x0007fdfe) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x0007fdfe) list_double_fisheye_pane_t

0x254c,	// (0x00072673) main_call5_pane

0xa1ff,	// (0x0007a326) sc_swipe_pane_ParamLimits

0xa1ff,	// (0x0007a326) sc_swipe_pane

0xa3f9,	// (0x0007a520) call5_image_pane_ParamLimits

0xa3f9,	// (0x0007a520) call5_image_pane

0xa416,	// (0x0007a53d) call5_swipe_1_pane_ParamLimits

0xa416,	// (0x0007a53d) call5_swipe_1_pane

0xa429,	// (0x0007a550) call5_swipe_2_pane_ParamLimits

0xa429,	// (0x0007a550) call5_swipe_2_pane

0xa454,	// (0x0007a57b) popup_call5_audio_first_window_ParamLimits

0xa454,	// (0x0007a57b) popup_call5_audio_first_window

0x06e3,	// (0x0007080a) call5_swipe_1_pane_g1_ParamLimits

0x06e3,	// (0x0007080a) call5_swipe_1_pane_g1

0xdf52,	// (0x0007e079) call5_swipe_1_pane_g2_ParamLimits

0xdf52,	// (0x0007e079) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0007fe03) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0007fe03) call5_swipe_1_pane_g

0xdf5e,	// (0x0007e085) call5_swipe_1_pane_t1_ParamLimits

0xdf5e,	// (0x0007e085) call5_swipe_1_pane_t1

0x06e3,	// (0x0007080a) call5_swipe_2_pane_g1_ParamLimits

0x06e3,	// (0x0007080a) call5_swipe_2_pane_g1

0xdf73,	// (0x0007e09a) call5_swipe_2_pane_g2_ParamLimits

0xdf73,	// (0x0007e09a) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0007fe08) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0007fe08) call5_swipe_2_pane_g

0xdf7f,	// (0x0007e0a6) call5_swipe_2_pane_t1_ParamLimits

0xdf7f,	// (0x0007e0a6) call5_swipe_2_pane_t1

0xdf94,	// (0x0007e0bb) sc_swipe_pane_g1_ParamLimits

0xdf94,	// (0x0007e0bb) sc_swipe_pane_g1

0xdfa1,	// (0x0007e0c8) sc_swipe_pane_g2_ParamLimits

0xdfa1,	// (0x0007e0c8) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0007fe0d) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0007fe0d) sc_swipe_pane_g

0xdfad,	// (0x0007e0d4) sc_swipe_pane_t1_ParamLimits

0xdfad,	// (0x0007e0d4) sc_swipe_pane_t1

0x254c,	// (0x00072673) main_cmail_launcher_pane

0xa465,	// (0x0007a58c) aid_size_cell_cmail_l_ParamLimits

0xa465,	// (0x0007a58c) aid_size_cell_cmail_l

0xa47f,	// (0x0007a5a6) grid_cmail_l_pane_ParamLimits

0xa47f,	// (0x0007a5a6) grid_cmail_l_pane

0xa49a,	// (0x0007a5c1) cell_cmail_l_pane_ParamLimits

0xa49a,	// (0x0007a5c1) cell_cmail_l_pane

0xa4c0,	// (0x0007a5e7) cell_cmail_l_pane_g1_ParamLimits

0xa4c0,	// (0x0007a5e7) cell_cmail_l_pane_g1

0xa4cc,	// (0x0007a5f3) cell_cmail_l_pane_t1_ParamLimits

0xa4cc,	// (0x0007a5f3) cell_cmail_l_pane_t1

0xdfc2,	// (0x0007e0e9) cell_cmail_l_pane_t2_ParamLimits

0xdfc2,	// (0x0007e0e9) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x0007fe12) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x0007fe12) cell_cmail_l_pane_t

0xb262,	// (0x0007b389) grid_highlight_pane_cp018_ParamLimits

0xb262,	// (0x0007b389) grid_highlight_pane_cp018

0x2668,	// (0x0007278f) main2_pane_ParamLimits

0x2668,	// (0x0007278f) main2_pane

0x346c,	// (0x00073593) popup_sp_fs_action_menu_bg_pane_g1

0x3474,	// (0x0007359b) popup_sp_fs_action_menu_bg_pane_g2

0x347c,	// (0x000735a3) popup_sp_fs_action_menu_bg_pane_g3

0x3484,	// (0x000735ab) popup_sp_fs_action_menu_bg_pane_g4

0x348c,	// (0x000735b3) popup_sp_fs_action_menu_bg_pane_g5

0x3494,	// (0x000735bb) popup_sp_fs_action_menu_bg_pane_g6

0x349c,	// (0x000735c3) popup_sp_fs_action_menu_bg_pane_g7

0x34a4,	// (0x000735cb) popup_sp_fs_action_menu_bg_pane_g8

0x34ac,	// (0x000735d3) popup_sp_fs_action_menu_bg_pane_g9

0x34b4,	// (0x000735db) popup_sp_fs_action_menu_bg_pane_g10

0x34b4,	// (0x000735db) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0007f2e2) popup_sp_fs_action_menu_bg_pane_g

0xb382,	// (0x0007b4a9) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x2_t3_g3_g1

0xb38e,	// (0x0007b4b5) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb38e,	// (0x0007b4b5) list_medium_line_x2_t3_g3_g2

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0007f392) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0007f392) list_medium_line_x2_t3_g3_g

0xb3a6,	// (0x0007b4cd) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb3a6,	// (0x0007b4cd) list_medium_line_x2_t3_g3_t1

0x1b50,	// (0x00071c77) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b50,	// (0x00071c77) list_medium_line_x2_t3_g3_t2

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0007f399) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0007f399) list_medium_line_x2_t3_g3_t

0xb382,	// (0x0007b4a9) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x2_t3_g2_g1

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0007f3a0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0007f3a0) list_medium_line_x2_t3_g2_g

0xb3d0,	// (0x0007b4f7) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb3d0,	// (0x0007b4f7) list_medium_line_x2_t3_g2_t1

0xb3e6,	// (0x0007b50d) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb3e6,	// (0x0007b50d) list_medium_line_x2_t3_g2_t2

0xb3f8,	// (0x0007b51f) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb3f8,	// (0x0007b51f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0007f3a5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0007f3a5) list_medium_line_x2_t3_g2_t

0xb382,	// (0x0007b4a9) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x2_t4_g4_g1

0xb416,	// (0x0007b53d) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb416,	// (0x0007b53d) list_medium_line_x2_t4_g4_g2

0xb38e,	// (0x0007b4b5) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb38e,	// (0x0007b4b5) list_medium_line_x2_t4_g4_g3

0xb422,	// (0x0007b549) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb422,	// (0x0007b549) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0007f3ac) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0007f3ac) list_medium_line_x2_t4_g4_g

0x1b64,	// (0x00071c8b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1b64,	// (0x00071c8b) list_medium_line_x2_t4_g4_t1

0x1b7b,	// (0x00071ca2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1b7b,	// (0x00071ca2) list_medium_line_x2_t4_g4_t2

0x1b90,	// (0x00071cb7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1b90,	// (0x00071cb7) list_medium_line_x2_t4_g4_t3

0xb42e,	// (0x0007b555) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb42e,	// (0x0007b555) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0007f3b5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0007f3b5) list_medium_line_x2_t4_g4_t

0xb382,	// (0x0007b4a9) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x2_t2_g4_g1

0xb416,	// (0x0007b53d) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb416,	// (0x0007b53d) list_medium_line_x2_t2_g4_g2

0xb38e,	// (0x0007b4b5) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb38e,	// (0x0007b4b5) list_medium_line_x2_t2_g4_g3

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0007f41c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0007f41c) list_medium_line_x2_t2_g4_g

0xb4b7,	// (0x0007b5de) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb4b7,	// (0x0007b5de) list_medium_line_x2_t2_g4_t1

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0007f425) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0007f425) list_medium_line_x2_t2_g4_t

0xb382,	// (0x0007b4a9) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x2_t2_g3_g1

0xb38e,	// (0x0007b4b5) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb38e,	// (0x0007b4b5) list_medium_line_x2_t2_g3_g2

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0007f392) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0007f392) list_medium_line_x2_t2_g3_g

0xb4cc,	// (0x0007b5f3) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb4cc,	// (0x0007b5f3) list_medium_line_x2_t2_g3_t1

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0007f42a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0007f42a) list_medium_line_x2_t2_g3_t

0x4be7,	// (0x00074d0e) main_sp_fs_list_pane_ParamLimits

0x4be7,	// (0x00074d0e) main_sp_fs_list_pane

0x4bf3,	// (0x00074d1a) sp_fs_scroll_pane_ParamLimits

0x4bf3,	// (0x00074d1a) sp_fs_scroll_pane

0x1ba2,	// (0x00071cc9) list_medium_line_x2_t3_t1

0x1bb2,	// (0x00071cd9) list_medium_line_x2_t3_t2

0xb6a4,	// (0x0007b7cb) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0007f475) list_medium_line_x2_t3_t

0x1bc0,	// (0x00071ce7) list_medium_line_x3_t4_t1

0x1bd0,	// (0x00071cf7) list_medium_line_x3_t4_t2

0xb6b2,	// (0x0007b7d9) list_medium_line_x3_t4_t3

0xb6a4,	// (0x0007b7cb) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0007f47c) list_medium_line_x3_t4_t

0x1bde,	// (0x00071d05) list_medium_line_x4_t5_t1

0x1bee,	// (0x00071d15) list_medium_line_x4_t5_t2

0xb6b2,	// (0x0007b7d9) list_medium_line_x4_t5_t3

0xb6c0,	// (0x0007b7e7) list_medium_line_x4_t5_t4

0xb6a4,	// (0x0007b7cb) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0007f485) list_medium_line_x4_t5_t

0xb382,	// (0x0007b4a9) list_medium_line_t4_g4_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_t4_g4_g1

0xb422,	// (0x0007b549) list_medium_line_t4_g4_g2_ParamLimits

0xb422,	// (0x0007b549) list_medium_line_t4_g4_g2

0xb6ce,	// (0x0007b7f5) list_medium_line_t4_g4_g3_ParamLimits

0xb6ce,	// (0x0007b7f5) list_medium_line_t4_g4_g3

0xb39a,	// (0x0007b4c1) list_medium_line_t4_g4_g4_ParamLimits

0xb39a,	// (0x0007b4c1) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0007f490) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0007f490) list_medium_line_t4_g4_g

0xb6da,	// (0x0007b801) list_medium_line_t4_g4_t1_ParamLimits

0xb6da,	// (0x0007b801) list_medium_line_t4_g4_t1

0xb6ef,	// (0x0007b816) list_medium_line_t4_g4_t2_ParamLimits

0xb6ef,	// (0x0007b816) list_medium_line_t4_g4_t2

0xb705,	// (0x0007b82c) list_medium_line_t4_g4_t3_ParamLimits

0xb705,	// (0x0007b82c) list_medium_line_t4_g4_t3

0xb3bb,	// (0x0007b4e2) list_medium_line_t4_g4_t4_ParamLimits

0xb3bb,	// (0x0007b4e2) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0007f499) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0007f499) list_medium_line_t4_g4_t

0x4c9d,	// (0x00074dc4) chi_dic_find_pane_g1

0x5d53,	// (0x00075e7a) main_tport_pane

0xd2ea,	// (0x0007d411) list_medium_line_plain_t1

0xd2f8,	// (0x0007d41f) list_medium_line_t2_g2_g1_ParamLimits

0xd2f8,	// (0x0007d41f) list_medium_line_t2_g2_g1

0xd304,	// (0x0007d42b) list_medium_line_t2_g2_g2_ParamLimits

0xd304,	// (0x0007d42b) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0007fb55) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0007fb55) list_medium_line_t2_g2_g

0x1dfc,	// (0x00071f23) list_medium_line_t2_g2_t1_ParamLimits

0x1dfc,	// (0x00071f23) list_medium_line_t2_g2_t1

0x1e16,	// (0x00071f3d) list_medium_line_t2_g2_t2_ParamLimits

0x1e16,	// (0x00071f3d) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0007fb5a) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0007fb5a) list_medium_line_t2_g2_t

0xd3fd,	// (0x0007d524) aid_sp_fs_list_icon_a_sm

0xf0c9,	// (0x0007f1f0) aid_sp_fs_list_icon_d

0xd405,	// (0x0007d52c) aid_sp_fs_text_primary

0xd40e,	// (0x0007d535) aid_sp_fs_text_secondary

0xd417,	// (0x0007d53e) list_medium_line

0xd417,	// (0x0007d53e) list_medium_line_g2

0xd417,	// (0x0007d53e) list_medium_line_g3

0xd417,	// (0x0007d53e) list_medium_line_plain

0xd417,	// (0x0007d53e) list_medium_line_plain_t2

0xd417,	// (0x0007d53e) list_medium_line_plain_t3

0xd417,	// (0x0007d53e) list_medium_line_right_icon

0xd417,	// (0x0007d53e) list_medium_line_right_iconx2

0xd417,	// (0x0007d53e) list_medium_line_t2

0xd417,	// (0x0007d53e) list_medium_line_t2_g2

0xd417,	// (0x0007d53e) list_medium_line_t2_g3

0xd417,	// (0x0007d53e) list_medium_line_t2_right_icon

0xd417,	// (0x0007d53e) list_medium_line_t2_right_iconx2

0xd417,	// (0x0007d53e) list_medium_line_t3

0xd417,	// (0x0007d53e) list_medium_line_t3_g2

0xd417,	// (0x0007d53e) list_medium_line_t3_g3

0xd417,	// (0x0007d53e) list_medium_line_t3_right_iconx2

0xd420,	// (0x0007d547) list_medium_line_t4_g4

0xd429,	// (0x0007d550) list_medium_line_x2

0xd429,	// (0x0007d550) list_medium_line_x2_t2_g2

0xd429,	// (0x0007d550) list_medium_line_x2_t2_g3

0xd429,	// (0x0007d550) list_medium_line_x2_t2_g4

0xd429,	// (0x0007d550) list_medium_line_x2_t3

0xd429,	// (0x0007d550) list_medium_line_x2_t3_g2

0xd429,	// (0x0007d550) list_medium_line_x2_t3_g3

0xd429,	// (0x0007d550) list_medium_line_x2_t3_g4

0xd429,	// (0x0007d550) list_medium_line_x2_t4_g2

0xd429,	// (0x0007d550) list_medium_line_x2_t4_g4

0xd432,	// (0x0007d559) list_medium_line_x3

0xd432,	// (0x0007d559) list_medium_line_x3_t4

0xd432,	// (0x0007d559) list_medium_line_x3_t4_g4

0xd420,	// (0x0007d547) list_medium_line_x4_t4

0xd420,	// (0x0007d547) list_medium_line_x4_t4_g7

0xd420,	// (0x0007d547) list_medium_line_x4_t5

0xd43b,	// (0x0007d562) list_single_fs_dyc_pane_ParamLimits

0xd43b,	// (0x0007d562) list_single_fs_dyc_pane

0xb382,	// (0x0007b4a9) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x4_t4_g7_g1

0xd91e,	// (0x0007da45) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd91e,	// (0x0007da45) list_medium_line_x4_t4_g7_g2

0xd92a,	// (0x0007da51) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd92a,	// (0x0007da51) list_medium_line_x4_t4_g7_g3

0xd939,	// (0x0007da60) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd939,	// (0x0007da60) list_medium_line_x4_t4_g7_g4

0xd945,	// (0x0007da6c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd945,	// (0x0007da6c) list_medium_line_x4_t4_g7_g5

0xd954,	// (0x0007da7b) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd954,	// (0x0007da7b) list_medium_line_x4_t4_g7_g6

0xd963,	// (0x0007da8a) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd963,	// (0x0007da8a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x0007fd1f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x0007fd1f) list_medium_line_x4_t4_g7_g

0xd96f,	// (0x0007da96) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd96f,	// (0x0007da96) list_medium_line_x4_t4_g7_t1

0xd984,	// (0x0007daab) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd984,	// (0x0007daab) list_medium_line_x4_t4_g7_t2

0xd999,	// (0x0007dac0) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd999,	// (0x0007dac0) list_medium_line_x4_t4_g7_t3

0xd9ae,	// (0x0007dad5) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd9ae,	// (0x0007dad5) list_medium_line_x4_t4_g7_t4

0xd9c0,	// (0x0007dae7) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd9c0,	// (0x0007dae7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0007fd2e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0007fd2e) list_medium_line_x4_t4_g7_t

0xd9d2,	// (0x0007daf9) list_single_dyc_row_pane_ParamLimits

0xd9d2,	// (0x0007daf9) list_single_dyc_row_pane

0xa3e6,	// (0x0007a50d) call5_gesture_pane_ParamLimits

0xa3e6,	// (0x0007a50d) call5_gesture_pane

0xa43c,	// (0x0007a563) call5_windows_pane_ParamLimits

0xa43c,	// (0x0007a563) call5_windows_pane

0xa4e2,	// (0x0007a609) call5_swipe_1_pane_cp_ParamLimits

0xa4e2,	// (0x0007a609) call5_swipe_1_pane_cp

0xa4ee,	// (0x0007a615) call5_swipe_2_pane_cp_ParamLimits

0xa4ee,	// (0x0007a615) call5_swipe_2_pane_cp

0xbb7e,	// (0x0007bca5) call5_image_pane_cp

0xa4fa,	// (0x0007a621) popup_call5_audio_first_window_cp_ParamLimits

0xa4fa,	// (0x0007a621) popup_call5_audio_first_window_cp

0xdf94,	// (0x0007e0bb) call5_swipe_1_pane_g1_cp_ParamLimits

0xdf94,	// (0x0007e0bb) call5_swipe_1_pane_g1_cp

0xdfd4,	// (0x0007e0fb) call5_swipe_1_pane_g2_cp

0xdfad,	// (0x0007e0d4) call5_swipe_1_pane_t1_cp_ParamLimits

0xdfad,	// (0x0007e0d4) call5_swipe_1_pane_t1_cp

0xdf94,	// (0x0007e0bb) call5_swipe_2_pane_g1_cp_ParamLimits

0xdf94,	// (0x0007e0bb) call5_swipe_2_pane_g1_cp

0xdfdc,	// (0x0007e103) call5_swipe_2_pane_g2_cp

0xdfe4,	// (0x0007e10b) call5_swipe_2_pane_t1_cp_ParamLimits

0xdfe4,	// (0x0007e10b) call5_swipe_2_pane_t1_cp

0xb262,	// (0x0007b389) main_sp_fs_email_pane

0xdff9,	// (0x0007e120) main_sp_fs_listscroll_pane_te

0xe002,	// (0x0007e129) popup_sp_fs_action_menu_pane_ParamLimits

0xe002,	// (0x0007e129) popup_sp_fs_action_menu_pane

0x047c,	// (0x000705a3) bg_sp_fs_ctrlbar_pane_g1

0xe044,	// (0x0007e16b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe04d,	// (0x0007e174) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe056,	// (0x0007e17d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x047c,	// (0x000705a3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0007fe17) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xecbc,	// (0x0007ede3) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xecbc,	// (0x0007ede3) bg_sp_fs_ctrlbar_ddmenu_pane

0xe05f,	// (0x0007e186) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe05f,	// (0x0007e186) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe06b,	// (0x0007e192) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe06b,	// (0x0007e192) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x0007fe20) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x0007fe20) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe077,	// (0x0007e19e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe077,	// (0x0007e19e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe091,	// (0x0007e1b8) list_medium_line_t2_right_icon_g1

0x1f7b,	// (0x000720a2) list_medium_line_t2_right_icon_t1

0x1f8b,	// (0x000720b2) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0007fe25) list_medium_line_t2_right_icon_t

0xcfdf,	// (0x0007d106) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcfdf,	// (0x0007d106) bg_sp_fs_ctrlbar_pane

0xa54e,	// (0x0007a675) main_sp_fs_ctrlbar_button_pane_cp01

0xa556,	// (0x0007a67d) main_sp_fs_ctrlbar_ddmenu_pane

0x0cca,	// (0x00070df1) main_sp_fs_ctrlbar_pane_g1

0xe0d1,	// (0x0007e1f8) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0007fe2a) main_sp_fs_ctrlbar_pane_g

0xe0dd,	// (0x0007e204) main_sp_fs_ctrlbar_pane_t1

0x1f9b,	// (0x000720c2) main_sp_fs_ctrlbar_pane

0x1fbf,	// (0x000720e6) main_sp_fs_listscroll_pane_te_cp01

0x1fdf,	// (0x00072106) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1fdf,	// (0x00072106) popup_sp_fs_action_menu_pane_cp01

0xb262,	// (0x0007b389) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb262,	// (0x0007b389) bg_sp_fs_highlight_list_pane_cp01

0xe0f2,	// (0x0007e219) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe0f2,	// (0x0007e219) sp_fs_action_menu_list_gene_pane_g1

0xe101,	// (0x0007e228) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe101,	// (0x0007e228) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x0007fe2f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x0007fe2f) sp_fs_action_menu_list_gene_pane_g

0xe10e,	// (0x0007e235) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe10e,	// (0x0007e235) sp_fs_action_menu_list_gene_pane_t1

0xe126,	// (0x0007e24d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe126,	// (0x0007e24d) sp_fs_action_menu_list_gene_pane

0xe145,	// (0x0007e26c) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe145,	// (0x0007e26c) popup_sp_fs_action_menu_bg_pane

0xe153,	// (0x0007e27a) sp_fs_action_menu_list_pane_ParamLimits

0xe153,	// (0x0007e27a) sp_fs_action_menu_list_pane

0xe173,	// (0x0007e29a) sp_fs_scroll_pane_cp01_ParamLimits

0xe173,	// (0x0007e29a) sp_fs_scroll_pane_cp01

0x1ff9,	// (0x00072120) list_medium_line_plain_t2_t1

0x2009,	// (0x00072130) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0007fe34) list_medium_line_plain_t2_t

0x2019,	// (0x00072140) list_medium_line_plain_t3_t1

0x2029,	// (0x00072150) list_medium_line_plain_t3_t2

0x2037,	// (0x0007215e) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0007fe39) list_medium_line_plain_t3_t

0xb382,	// (0x0007b4a9) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x2_t2_g2_g1

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0007f3a0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0007f3a0) list_medium_line_x2_t2_g2_g

0xb6da,	// (0x0007b801) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb6da,	// (0x0007b801) list_medium_line_x2_t2_g2_t1

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0007fe40) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0007fe40) list_medium_line_x2_t2_g2_t

0xb382,	// (0x0007b4a9) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x2_t4_g2_g1

0xe199,	// (0x0007e2c0) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe199,	// (0x0007e2c0) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x0007fe45) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x0007fe45) list_medium_line_x2_t4_g2_g

0x2045,	// (0x0007216c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2045,	// (0x0007216c) list_medium_line_x2_t4_g2_t1

0x205c,	// (0x00072183) list_medium_line_x2_t4_g2_t2_ParamLimits

0x205c,	// (0x00072183) list_medium_line_x2_t4_g2_t2

0x2071,	// (0x00072198) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2071,	// (0x00072198) list_medium_line_x2_t4_g2_t3

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x0007fe4a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x0007fe4a) list_medium_line_x2_t4_g2_t

0xe1ab,	// (0x0007e2d2) list_medium_line_t3_right_iconx2_g1

0xe091,	// (0x0007e1b8) list_medium_line_t3_right_iconx2_g2

0x2083,	// (0x000721aa) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x0007fe53) list_medium_line_t3_right_iconx2_g

0x208d,	// (0x000721b4) list_medium_line_t3_right_iconx2_t1

0x209d,	// (0x000721c4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x0007fe5a) list_medium_line_t3_right_iconx2_t

0xb382,	// (0x0007b4a9) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x3_t4_g4_g1

0xb38e,	// (0x0007b4b5) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb38e,	// (0x0007b4b5) list_medium_line_x3_t4_g4_g2

0xb422,	// (0x0007b549) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb422,	// (0x0007b549) list_medium_line_x3_t4_g4_g3

0xe1b3,	// (0x0007e2da) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe1b3,	// (0x0007e2da) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x0007fe5f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x0007fe5f) list_medium_line_x3_t4_g4_g

0x20ab,	// (0x000721d2) list_medium_line_x3_t4_g4_t1_ParamLimits

0x20ab,	// (0x000721d2) list_medium_line_x3_t4_g4_t1

0x20c2,	// (0x000721e9) list_medium_line_x3_t4_g4_t2_ParamLimits

0x20c2,	// (0x000721e9) list_medium_line_x3_t4_g4_t2

0xe1bf,	// (0x0007e2e6) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe1bf,	// (0x0007e2e6) list_medium_line_x3_t4_g4_t3

0xe1d4,	// (0x0007e2fb) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe1d4,	// (0x0007e2fb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x0007fe68) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x0007fe68) list_medium_line_x3_t4_g4_t

0x20db,	// (0x00072202) list_single_dyc_row_text_pane_t1_ParamLimits

0x20db,	// (0x00072202) list_single_dyc_row_text_pane_t1

0x2124,	// (0x0007224b) list_single_dyc_row_text_pane_t2_ParamLimits

0x2124,	// (0x0007224b) list_single_dyc_row_text_pane_t2

0xe1f1,	// (0x0007e318) list_single_dyc_row_text_pane_t3_ParamLimits

0xe1f1,	// (0x0007e318) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x0007fe71) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x0007fe71) list_single_dyc_row_text_pane_t

0xe203,	// (0x0007e32a) list_single_dyc_row_pane_g1_ParamLimits

0xe203,	// (0x0007e32a) list_single_dyc_row_pane_g1

0xe20f,	// (0x0007e336) list_single_dyc_row_pane_g2_ParamLimits

0xe20f,	// (0x0007e336) list_single_dyc_row_pane_g2

0xe21b,	// (0x0007e342) list_single_dyc_row_pane_g3_ParamLimits

0xe21b,	// (0x0007e342) list_single_dyc_row_pane_g3

0xe227,	// (0x0007e34e) list_single_dyc_row_pane_g4_ParamLimits

0xe227,	// (0x0007e34e) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x0007fe78) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x0007fe78) list_single_dyc_row_pane_g

0xe233,	// (0x0007e35a) list_single_dyc_row_text_pane_ParamLimits

0xe233,	// (0x0007e35a) list_single_dyc_row_text_pane

0x254c,	// (0x00072673) bg_sp_fs_scroll_pane

0xe252,	// (0x0007e379) thumb_sp_fs_scroll_pane

0xd2f8,	// (0x0007d41f) list_medium_line_g1_ParamLimits

0xd2f8,	// (0x0007d41f) list_medium_line_g1

0xe25b,	// (0x0007e382) list_medium_line_t1_ParamLimits

0xe25b,	// (0x0007e382) list_medium_line_t1

0xb382,	// (0x0007b4a9) list_medium_line_x2_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x2_g1

0xb38e,	// (0x0007b4b5) list_medium_line_x2_g2_ParamLimits

0xb38e,	// (0x0007b4b5) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x0007fe81) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x0007fe81) list_medium_line_x2_g

0xe270,	// (0x0007e397) list_medium_line_x2_t1_ParamLimits

0xe270,	// (0x0007e397) list_medium_line_x2_t1

0xb382,	// (0x0007b4a9) list_medium_line_x3_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x3_g1

0xb38e,	// (0x0007b4b5) list_medium_line_x3_g2_ParamLimits

0xb38e,	// (0x0007b4b5) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x0007fe81) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x0007fe81) list_medium_line_x3_g

0xe270,	// (0x0007e397) list_medium_line_x3_t1_ParamLimits

0xe270,	// (0x0007e397) list_medium_line_x3_t1

0xe286,	// (0x0007e3ad) thumb_sp_fs_scroll_pane_g1

0xe28f,	// (0x0007e3b6) thumb_sp_fs_scroll_pane_g2

0xe298,	// (0x0007e3bf) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0007fe86) thumb_sp_fs_scroll_pane_g

0xe286,	// (0x0007e3ad) bg_sp_fs_scroll_pane_g1

0xe28f,	// (0x0007e3b6) bg_sp_fs_scroll_pane_g2

0xe298,	// (0x0007e3bf) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0007fe86) bg_sp_fs_scroll_pane_g

0xb382,	// (0x0007b4a9) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb382,	// (0x0007b4a9) list_medium_line_x2_t3_g4_g1

0xb416,	// (0x0007b53d) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb416,	// (0x0007b53d) list_medium_line_x2_t3_g4_g2

0xb38e,	// (0x0007b4b5) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb38e,	// (0x0007b4b5) list_medium_line_x2_t3_g4_g3

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb39a,	// (0x0007b4c1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0007f41c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0007f41c) list_medium_line_x2_t3_g4_g

0x217e,	// (0x000722a5) list_medium_line_x2_t3_g4_t1_ParamLimits

0x217e,	// (0x000722a5) list_medium_line_x2_t3_g4_t1

0x2194,	// (0x000722bb) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2194,	// (0x000722bb) list_medium_line_x2_t3_g4_t2

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb3bb,	// (0x0007b4e2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x0007fe8d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x0007fe8d) list_medium_line_x2_t3_g4_t

0xd2f8,	// (0x0007d41f) list_medium_line_g2_g1_ParamLimits

0xd2f8,	// (0x0007d41f) list_medium_line_g2_g1

0xd304,	// (0x0007d42b) list_medium_line_g2_g2_ParamLimits

0xd304,	// (0x0007d42b) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0007fb55) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0007fb55) list_medium_line_g2_g

0xe2a1,	// (0x0007e3c8) list_medium_line_g2_t1_ParamLimits

0xe2a1,	// (0x0007e3c8) list_medium_line_g2_t1

0xd2f8,	// (0x0007d41f) list_medium_line_t3_g2_g1_ParamLimits

0xd2f8,	// (0x0007d41f) list_medium_line_t3_g2_g1

0xd304,	// (0x0007d42b) list_medium_line_t3_g2_g2_ParamLimits

0xd304,	// (0x0007d42b) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0007fb55) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0007fb55) list_medium_line_t3_g2_g

0x21ad,	// (0x000722d4) list_medium_line_t3_g2_t1_ParamLimits

0x21ad,	// (0x000722d4) list_medium_line_t3_g2_t1

0x21c4,	// (0x000722eb) list_medium_line_t3_g2_t2_ParamLimits

0x21c4,	// (0x000722eb) list_medium_line_t3_g2_t2

0x21d9,	// (0x00072300) list_medium_line_t3_g2_t3_ParamLimits

0x21d9,	// (0x00072300) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x0007fe94) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x0007fe94) list_medium_line_t3_g2_t

0xe091,	// (0x0007e1b8) list_medium_line_right_icon_g1

0xe2b6,	// (0x0007e3dd) list_medium_line_right_icon_t1

0xd2f8,	// (0x0007d41f) list_medium_line_t2_g1_ParamLimits

0xd2f8,	// (0x0007d41f) list_medium_line_t2_g1

0x21f2,	// (0x00072319) list_medium_line_t2_t1_ParamLimits

0x21f2,	// (0x00072319) list_medium_line_t2_t1

0x220c,	// (0x00072333) list_medium_line_t2_t2_ParamLimits

0x220c,	// (0x00072333) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x0007fe9b) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x0007fe9b) list_medium_line_t2_t

0xd2f8,	// (0x0007d41f) list_medium_line_t3_g1_ParamLimits

0xd2f8,	// (0x0007d41f) list_medium_line_t3_g1

0x2221,	// (0x00072348) list_medium_line_t3_t1_ParamLimits

0x2221,	// (0x00072348) list_medium_line_t3_t1

0x223b,	// (0x00072362) list_medium_line_t3_t2_ParamLimits

0x223b,	// (0x00072362) list_medium_line_t3_t2

0x2250,	// (0x00072377) list_medium_line_t3_t3_ParamLimits

0x2250,	// (0x00072377) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x0007fea0) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x0007fea0) list_medium_line_t3_t

0xd2f8,	// (0x0007d41f) list_medium_line_g3_g1_ParamLimits

0xd2f8,	// (0x0007d41f) list_medium_line_g3_g1

0xe2c4,	// (0x0007e3eb) list_medium_line_g3_g2_ParamLimits

0xe2c4,	// (0x0007e3eb) list_medium_line_g3_g2

0xd304,	// (0x0007d42b) list_medium_line_g3_g3_ParamLimits

0xd304,	// (0x0007d42b) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x0007fea7) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x0007fea7) list_medium_line_g3_g

0xe2d0,	// (0x0007e3f7) list_medium_line_g3_t1_ParamLimits

0xe2d0,	// (0x0007e3f7) list_medium_line_g3_t1

0xd2f8,	// (0x0007d41f) list_medium_line_t2_g3_g1_ParamLimits

0xd2f8,	// (0x0007d41f) list_medium_line_t2_g3_g1

0xe2c4,	// (0x0007e3eb) list_medium_line_t2_g3_g2_ParamLimits

0xe2c4,	// (0x0007e3eb) list_medium_line_t2_g3_g2

0xd304,	// (0x0007d42b) list_medium_line_t2_g3_g3_ParamLimits

0xd304,	// (0x0007d42b) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x0007fea7) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x0007fea7) list_medium_line_t2_g3_g

0x2265,	// (0x0007238c) list_medium_line_t2_g3_t1_ParamLimits

0x2265,	// (0x0007238c) list_medium_line_t2_g3_t1

0x227c,	// (0x000723a3) list_medium_line_t2_g3_t2_ParamLimits

0x227c,	// (0x000723a3) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x0007feae) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x0007feae) list_medium_line_t2_g3_t

0xd2f8,	// (0x0007d41f) list_medium_line_t3_g3_g1_ParamLimits

0xd2f8,	// (0x0007d41f) list_medium_line_t3_g3_g1

0xe2c4,	// (0x0007e3eb) list_medium_line_t3_g3_g2_ParamLimits

0xe2c4,	// (0x0007e3eb) list_medium_line_t3_g3_g2

0xd304,	// (0x0007d42b) list_medium_line_t3_g3_g3_ParamLimits

0xd304,	// (0x0007d42b) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x0007fea7) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x0007fea7) list_medium_line_t3_g3_g

0x2295,	// (0x000723bc) list_medium_line_t3_g3_t1_ParamLimits

0x2295,	// (0x000723bc) list_medium_line_t3_g3_t1

0x22ae,	// (0x000723d5) list_medium_line_t3_g3_t2_ParamLimits

0x22ae,	// (0x000723d5) list_medium_line_t3_g3_t2

0x22c4,	// (0x000723eb) list_medium_line_t3_g3_t3_ParamLimits

0x22c4,	// (0x000723eb) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x0007feb3) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x0007feb3) list_medium_line_t3_g3_t

0xe1ab,	// (0x0007e2d2) list_medium_line_right_iconx2_g1

0xe091,	// (0x0007e1b8) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x0007feba) list_medium_line_right_iconx2_g

0xe2e5,	// (0x0007e40c) list_medium_line_right_iconx2_t1

0xe1ab,	// (0x0007e2d2) list_medium_line_t2_right_iconx2_g1

0xe091,	// (0x0007e1b8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x0007feba) list_medium_line_t2_right_iconx2_g

0x22de,	// (0x00072405) list_medium_line_t2_right_iconx2_t1

0x22ee,	// (0x00072415) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x0007febf) list_medium_line_t2_right_iconx2_t

0xe2f3,	// (0x0007e41a) list_medium_line_x4_t4_t1

0x22fc,	// (0x00072423) list_medium_line_x4_t4_t2

0x230c,	// (0x00072433) list_medium_line_x4_t4_t3

0x231c,	// (0x00072443) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x0007fec4) list_medium_line_x4_t4_t

0xa5a3,	// (0x0007a6ca) tport_appsw_pane_ParamLimits

0xa5a3,	// (0x0007a6ca) tport_appsw_pane

0xa5b4,	// (0x0007a6db) tport_contact_pane_ParamLimits

0xa5b4,	// (0x0007a6db) tport_contact_pane

0xa5cd,	// (0x0007a6f4) tport_listscroll_pane_ParamLimits

0xa5cd,	// (0x0007a6f4) tport_listscroll_pane

0xa5e8,	// (0x0007a70f) cell_tport_appsw_pane_ParamLimits

0xa5e8,	// (0x0007a70f) cell_tport_appsw_pane

0x8674,	// (0x0007879b) tport_appsw_pane_g1_ParamLimits

0x8674,	// (0x0007879b) tport_appsw_pane_g1

0xe301,	// (0x0007e428) tport_contact_pane_g1

0xe30a,	// (0x0007e431) tport_contact_pane_t1

0xe318,	// (0x0007e43f) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x0007fecd) tport_contact_pane_t

0xe326,	// (0x0007e44d) list_tport_pane

0xe32f,	// (0x0007e456) scroll_pane_cp_030

0xe340,	// (0x0007e467) cell_tport_appsw_pane_g1

0xe350,	// (0x0007e477) cell_tport_appsw_pane_t1

0x254c,	// (0x00072673) grid_highlight_pane_cp019

0xa628,	// (0x0007a74f) list_tport_double_graphic_pane_ParamLimits

0xa628,	// (0x0007a74f) list_tport_double_graphic_pane

0xb262,	// (0x0007b389) list_highlight_pane_cp023_ParamLimits

0xb262,	// (0x0007b389) list_highlight_pane_cp023

0xa635,	// (0x0007a75c) list_tport_double_graphic_pane_g1_ParamLimits

0xa635,	// (0x0007a75c) list_tport_double_graphic_pane_g1

0xa642,	// (0x0007a769) list_tport_double_graphic_pane_t1_ParamLimits

0xa642,	// (0x0007a769) list_tport_double_graphic_pane_t1

0xa657,	// (0x0007a77e) list_tport_double_graphic_pane_t2_ParamLimits

0xa657,	// (0x0007a77e) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x0007fed9) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x0007fed9) list_tport_double_graphic_pane_t

0x254c,	// (0x00072673) main_cale_note_pane

0x8629,	// (0x00078750) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8629,	// (0x00078750) cell_vitu2_function_top_wide_pane_cp01

0xa11e,	// (0x0007a245) wait_bar_pane_cp05_ParamLimits

0x254c,	// (0x00072673) listscroll_cmail_pane

0xe366,	// (0x0007e48d) list_cmail_pane

0xa673,	// (0x0007a79a) list_cmail_body_pane

0xa68b,	// (0x0007a7b2) list_single_cmail_header_caption_pane

0xa6a7,	// (0x0007a7ce) list_single_cmail_header_detail_pane_ParamLimits

0xa6a7,	// (0x0007a7ce) list_single_cmail_header_detail_pane

0xa6d3,	// (0x0007a7fa) list_single_cmail_header_caption_pane_t1

0x232c,	// (0x00072453) list_single_cmail_header_detail_pane_g1_ParamLimits

0x232c,	// (0x00072453) list_single_cmail_header_detail_pane_g1

0xf0e7,	// (0x0007f20e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0e7,	// (0x0007f20e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x0007fede) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x0007fede) list_single_cmail_header_detail_pane_g

0xe393,	// (0x0007e4ba) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe393,	// (0x0007e4ba) list_single_cmail_header_detail_pane_t1

0xe3c5,	// (0x0007e4ec) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe3c5,	// (0x0007e4ec) list_single_cmail_header_editor_pane_bg

0xe3d7,	// (0x0007e4fe) list_cmail_body_pane_g1

0xe3e0,	// (0x0007e507) list_cmail_body_pane_t1

0x873a,	// (0x00078861) list_single_cmail_header_editor_pane_bg_g1

0x422b,	// (0x00074352) list_single_cmail_header_editor_pane_bg_g1_copy1

0x874a,	// (0x00078871) list_single_cmail_header_editor_pane_bg_g1_copy2

0x8742,	// (0x00078869) list_single_cmail_header_editor_pane_bg_g1_copy3

0x90c0,	// (0x000791e7) list_single_cmail_header_editor_pane_bg_g1_copy4

0x876a,	// (0x00078891) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x875a,	// (0x00078881) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x8762,	// (0x00078889) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x420b,	// (0x00074332) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa6e3,	// (0x0007a80a) calenote_gesture_pane_ParamLimits

0xa6e3,	// (0x0007a80a) calenote_gesture_pane

0xa703,	// (0x0007a82a) calenote_window_pane_ParamLimits

0xa703,	// (0x0007a82a) calenote_window_pane

0xe3ee,	// (0x0007e515) popup_note_window_cp01

0xa71f,	// (0x0007a846) calenote_swipe_1_pane_ParamLimits

0xa71f,	// (0x0007a846) calenote_swipe_1_pane

0xa4ee,	// (0x0007a615) calenote_swipe_2_pane_ParamLimits

0xa4ee,	// (0x0007a615) calenote_swipe_2_pane

0xdf94,	// (0x0007e0bb) calenote_swipe_1_pane_g1_ParamLimits

0xdf94,	// (0x0007e0bb) calenote_swipe_1_pane_g1

0xdfa1,	// (0x0007e0c8) calenote_swipe_1_pane_g2_ParamLimits

0xdfa1,	// (0x0007e0c8) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0007fe0d) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0007fe0d) calenote_swipe_1_pane_g

0xe400,	// (0x0007e527) calenote_swipe_1_pane_t1_ParamLimits

0xe400,	// (0x0007e527) calenote_swipe_1_pane_t1

0xdf94,	// (0x0007e0bb) calenote_swipe_2_pane_g1_ParamLimits

0xdf94,	// (0x0007e0bb) calenote_swipe_2_pane_g1

0xe41f,	// (0x0007e546) calenote_swipe_2_pane_g2_ParamLimits

0xe41f,	// (0x0007e546) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x0007feea) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x0007feea) calenote_swipe_2_pane_g

0xe42b,	// (0x0007e552) calenote_swipe_2_pane_t1_ParamLimits

0xe42b,	// (0x0007e552) calenote_swipe_2_pane_t1

0x254c,	// (0x00072673) main_mup_navstr_pane

0x70fa,	// (0x00077221) main_mup3_pane_t7_ParamLimits

0x70fa,	// (0x00077221) main_mup3_pane_t7

0xedaa,	// (0x0007eed1) main_mp4_pane_g6_ParamLimits

0xedaa,	// (0x0007eed1) main_mp4_pane_g6

0xef4e,	// (0x0007f075) main_image3_pane_t4_ParamLimits

0xef4e,	// (0x0007f075) main_image3_pane_t4

0xa734,	// (0x0007a85b) popup_navstr_preview_pane_ParamLimits

0xa734,	// (0x0007a85b) popup_navstr_preview_pane

0xa748,	// (0x0007a86f) scroll_navstr_pane_ParamLimits

0xa748,	// (0x0007a86f) scroll_navstr_pane

0x254c,	// (0x00072673) bg_popup_preview_window_pane_cp04

0xe452,	// (0x0007e579) popup_navstr_preview_pane_t1

0xa75c,	// (0x0007a883) scroll_navstr_pane_g1_ParamLimits

0xa75c,	// (0x0007a883) scroll_navstr_pane_g1

0xa770,	// (0x0007a897) scroll_navstr_pane_t1_ParamLimits

0xa770,	// (0x0007a897) scroll_navstr_pane_t1

0xe3f7,	// (0x0007e51e) bg_button_pane_cp014

0xe3f7,	// (0x0007e51e) bg_button_pane_cp030

0x1f21,	// (0x00072048) list_double_fisheye_pane_g4_ParamLimits

0x1f21,	// (0x00072048) list_double_fisheye_pane_g4

0x1f2d,	// (0x00072054) list_double_fisheye_pane_g5_ParamLimits

0x1f2d,	// (0x00072054) list_double_fisheye_pane_g5

0xe36e,	// (0x0007e495) sp_fs_scroll_pane_cp03

0x0cca,	// (0x00070df1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe0d1,	// (0x0007e1f8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0007fe2a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe0dd,	// (0x0007e204) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa669,	// (0x0007a790) sp_fs_scroll_pane_cp02

0x34f7,	// (0x0007361e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x34f7,	// (0x0007361e) popup_sp_fs_calendar_preview_list_single_pane

0x254c,	// (0x00072673) main_cam6_pano_pane

0xb262,	// (0x0007b389) main_mup3_pane_ParamLimits

0x254c,	// (0x00072673) main_phacti_pane

0x9ff1,	// (0x0007a118) bg_button_pane_cp11

0xa00b,	// (0x0007a132) main_mobtv_info_pane_g2_ParamLimits

0xa00b,	// (0x0007a132) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0007fd8a) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0007fd8a) main_mobtv_info_pane_g

0xa1e6,	// (0x0007a30d) sc_clock_pane_t5_ParamLimits

0xa1e6,	// (0x0007a30d) sc_clock_pane_t5

0xa26b,	// (0x0007a392) main_radioblah_pane_g1_ParamLimits

0xdee0,	// (0x0007e007) main_radioblah_pane_t3_ParamLimits

0xdee0,	// (0x0007e007) main_radioblah_pane_t3

0xdef8,	// (0x0007e01f) main_radioblah_pane_t4_ParamLimits

0xdef8,	// (0x0007e01f) main_radioblah_pane_t4

0xa293,	// (0x0007a3ba) main_radioblah_text_pane_ParamLimits

0xa293,	// (0x0007a3ba) main_radioblah_text_pane

0xa2a5,	// (0x0007a3cc) main_radioblah_info_pane_g1_ParamLimits

0xa340,	// (0x0007a467) main_radioblah_info_pane_t4_ParamLimits

0xa340,	// (0x0007a467) main_radioblah_info_pane_t4

0xb262,	// (0x0007b389) main_sp_fs_calendar_pane

0xa786,	// (0x0007a8ad) main_phacti_pane_g1

0xa78e,	// (0x0007a8b5) phacti_note_pane_ParamLimits

0xa78e,	// (0x0007a8b5) phacti_note_pane

0xe469,	// (0x0007e590) phacti_term_pane_ParamLimits

0xe469,	// (0x0007e590) phacti_term_pane

0xe47e,	// (0x0007e5a5) phacti_note_pane_t1_ParamLimits

0xe47e,	// (0x0007e5a5) phacti_note_pane_t1

0xe495,	// (0x0007e5bc) phacti_term_pane_g1

0xe49d,	// (0x0007e5c4) phacti_term_pane_t1_ParamLimits

0xe49d,	// (0x0007e5c4) phacti_term_pane_t1

0xe4c7,	// (0x0007e5ee) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe4cf,	// (0x0007e5f6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0007fef4) popup_sp_fs_calendar_preview_list_single_pane_g

0xe4d7,	// (0x0007e5fe) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe4d7,	// (0x0007e5fe) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe4ed,	// (0x0007e614) aid_popup_sp_fs_bg_corner_pane

0x047c,	// (0x000705a3) popup_sp_fs_calendar_preview_bg_pane_g1

0x254c,	// (0x00072673) popup_sp_fs_calendar_preview_bg_pane

0xe4f5,	// (0x0007e61c) popup_sp_fs_calendar_preview_list_pane

0xb262,	// (0x0007b389) bg_main_sp_fs_cale_pane_ParamLimits

0xb262,	// (0x0007b389) bg_main_sp_fs_cale_pane

0xe506,	// (0x0007e62d) listscroll_cale_mrui_pane_ParamLimits

0xe506,	// (0x0007e62d) listscroll_cale_mrui_pane

0xe51a,	// (0x0007e641) listscroll_sp_fs_schedule_track_pane

0xe523,	// (0x0007e64a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe523,	// (0x0007e64a) main_sp_fs_ctrlbar_pane_cp01

0xe534,	// (0x0007e65b) main_sp_fs_ribbon_pane

0xe53c,	// (0x0007e663) popup_sp_fs_cale_preview_window

0xa7e9,	// (0x0007a910) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa7e9,	// (0x0007a910) list_single_sp_fs_schedule_track_pane

0xb262,	// (0x0007b389) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb262,	// (0x0007b389) bg_sp_fs_highlight_list_pane_cp03

0xa7ff,	// (0x0007a926) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa7ff,	// (0x0007a926) list_single_sp_fs_schedule_track_pane_g1

0xa80b,	// (0x0007a932) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa80b,	// (0x0007a932) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x0007fef9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x0007fef9) list_single_sp_fs_schedule_track_pane_g

0xa817,	// (0x0007a93e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa817,	// (0x0007a93e) list_single_sp_fs_schedule_track_pane_t1

0xa831,	// (0x0007a958) sp_fs_schedule_track_pane_ParamLimits

0xa831,	// (0x0007a958) sp_fs_schedule_track_pane

0xe54e,	// (0x0007e675) sp_fs_schedule_track_pane_g1

0xe556,	// (0x0007e67d) sp_fs_schedule_track_pane_g2

0xe55e,	// (0x0007e685) sp_fs_schedule_track_pane_g3

0xe566,	// (0x0007e68d) sp_fs_schedule_track_pane_g4

0xe56e,	// (0x0007e695) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x0007fefe) sp_fs_schedule_track_pane_g

0x873a,	// (0x00078861) bg_sp_fs_schedule_viewer_highlight_g1

0x422b,	// (0x00074352) bg_sp_fs_schedule_viewer_highlight_g2

0x8742,	// (0x00078869) bg_sp_fs_schedule_viewer_highlight_g3

0x874a,	// (0x00078871) bg_sp_fs_schedule_viewer_highlight_g4

0x90c0,	// (0x000791e7) bg_sp_fs_schedule_viewer_highlight_g5

0x875a,	// (0x00078881) bg_sp_fs_schedule_viewer_highlight_g6

0x8762,	// (0x00078889) bg_sp_fs_schedule_viewer_highlight_g7

0x876a,	// (0x00078891) bg_sp_fs_schedule_viewer_highlight_g8

0x420b,	// (0x00074332) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x0007ff09) bg_sp_fs_schedule_viewer_highlight_g

0x254c,	// (0x00072673) bg_main_sp_fs_ribbon_pane

0xa842,	// (0x0007a969) main_sp_fs_ribbon_pane_g1

0xe576,	// (0x0007e69d) main_sp_fs_ribbon_pane_t1

0xa84b,	// (0x0007a972) main_sp_fs_ribbon_pane_t2

0xe585,	// (0x0007e6ac) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x0007ff1c) main_sp_fs_ribbon_pane_t

0xe594,	// (0x0007e6bb) main_sp_fs_ribbon_scheduler_pane

0xe59c,	// (0x0007e6c3) bg_main_sp_fs_ribbon_pane_g1

0xe5a5,	// (0x0007e6cc) bg_main_sp_fs_ribbon_pane_g2

0xe5ae,	// (0x0007e6d5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x0007ff23) bg_main_sp_fs_ribbon_pane_g

0xe5b6,	// (0x0007e6dd) main_sp_fs_ribbon_scheduler_pane_g1

0xe5bf,	// (0x0007e6e6) main_sp_fs_ribbon_scheduler_pane_g2

0xe5c8,	// (0x0007e6ef) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x0007ff2a) main_sp_fs_ribbon_scheduler_pane_g

0xe5d1,	// (0x0007e6f8) list_cale_mrui_pane

0xa85a,	// (0x0007a981) sp_fs_scroll_pane_cp07_ParamLimits

0xa85a,	// (0x0007a981) sp_fs_scroll_pane_cp07

0xa870,	// (0x0007a997) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa870,	// (0x0007a997) bg_sp_fs_schedule_viewer_highlight

0xe5da,	// (0x0007e701) list_single_sp_fs_schedule_track_pane_cp01

0xe5e2,	// (0x0007e709) list_sp_fs_schedule_track_pane

0xe5ea,	// (0x0007e711) sp_fs_scroll_pane_cp06_ParamLimits

0xe5ea,	// (0x0007e711) sp_fs_scroll_pane_cp06

0x047c,	// (0x000705a3) bgmain_sp_fs_calendar_pane_g1

0x236a,	// (0x00072491) list_single_cale_mrui_pane_ParamLimits

0x236a,	// (0x00072491) list_single_cale_mrui_pane

0xe5fc,	// (0x0007e723) list_single_cale_mrui_row_pane_ParamLimits

0xe5fc,	// (0x0007e723) list_single_cale_mrui_row_pane

0xe609,	// (0x0007e730) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe609,	// (0x0007e730) list_single_cale_mrui_row_pane_g1

0xe641,	// (0x0007e768) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe641,	// (0x0007e768) list_single_cale_mrui_row_pane_t1

0x238c,	// (0x000724b3) list_single_cale_mrui_row_pane_t2_ParamLimits

0x238c,	// (0x000724b3) list_single_cale_mrui_row_pane_t2

0xe653,	// (0x0007e77a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe653,	// (0x0007e77a) list_single_cale_mrui_row_pane_t3

0xe682,	// (0x0007e7a9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe682,	// (0x0007e7a9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x0007ff36) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x0007ff36) list_single_cale_mrui_row_pane_t

0x23f4,	// (0x0007251b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x23f4,	// (0x0007251b) list_single_cmail_header_editor_pane_bg_cp01

0x241a,	// (0x00072541) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x241a,	// (0x00072541) list_single_cmail_header_editor_pane_bg_cp02

0xa880,	// (0x0007a9a7) main_radioblah_text_pane_t1_ParamLimits

0xa880,	// (0x0007a9a7) main_radioblah_text_pane_t1

0xe6b1,	// (0x0007e7d8) cam6_indi_pane_cp01

0xe6b9,	// (0x0007e7e0) cam6_mode_pane_cp01

0xe6c1,	// (0x0007e7e8) cam6_pano_pane

0xe6ca,	// (0x0007e7f1) cam6_zoom_pane_cp01

0xe6d2,	// (0x0007e7f9) cam6_pano_image_pane

0xe6dd,	// (0x0007e804) cam6_pano_pane_g1

0xdc58,	// (0x0007dd7f) cam6_pano_pane_g2

0xe6e6,	// (0x0007e80d) cam6_pano_pane_g3

0xe6ef,	// (0x0007e816) cam6_pano_pane_g4

0x0a25,	// (0x00070b4c) cam6_pano_pane_g5

0xe6f8,	// (0x0007e81f) cam6_pano_pane_g6

0xe702,	// (0x0007e829) cam6_pano_pane_g7

0xe70a,	// (0x0007e831) cam6_pano_pane_g8

0xe713,	// (0x0007e83a) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x0007ff3f) cam6_pano_pane_g

0x254c,	// (0x00072673) main_browser_tag_pane

0xe44a,	// (0x0007e571) grid_navstr_albumart_pane

0xe71e,	// (0x0007e845) cell_navstr_albumart_pane_ParamLimits

0xe71e,	// (0x0007e845) cell_navstr_albumart_pane

0xbcff,	// (0x0007be26) cell_navstr_albumart_pane_g1

0xcdfc,	// (0x0007cf23) cell_navstr_albumart_pane_g2

0xce0c,	// (0x0007cf33) cell_navstr_albumart_pane_g3

0xce04,	// (0x0007cf2b) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x0007ff52) cell_navstr_albumart_pane_g

0xa89b,	// (0x0007a9c2) bt_list_pane_ParamLimits

0xa89b,	// (0x0007a9c2) bt_list_pane

0xa8b0,	// (0x0007a9d7) bt_list_pane_t1

0xa8bf,	// (0x0007a9e6) bt_list_pane_t2

0x0001,

0xfe34,	// (0x0007ff5b) bt_list_pane_t

0x254c,	// (0x00072673) main_cale_prevew_pane

0xa8ce,	// (0x0007a9f5) popup_cale_preview_window_ParamLimits

0xa8ce,	// (0x0007a9f5) popup_cale_preview_window

0xb262,	// (0x0007b389) bg_popup_preview_window_pane_cp05_ParamLimits

0xb262,	// (0x0007b389) bg_popup_preview_window_pane_cp05

0xe740,	// (0x0007e867) list_cale_preview_pane_ParamLimits

0xe740,	// (0x0007e867) list_cale_preview_pane

0xa8e3,	// (0x0007aa0a) list_double_cale_preview_pane_ParamLimits

0xa8e3,	// (0x0007aa0a) list_double_cale_preview_pane

0xa8f5,	// (0x0007aa1c) list_single_cale_preview_pane_ParamLimits

0xa8f5,	// (0x0007aa1c) list_single_cale_preview_pane

0xa909,	// (0x0007aa30) list_single_cale_preview_pane_g1

0xa911,	// (0x0007aa38) list_single_cale_preview_pane_t1_ParamLimits

0xa911,	// (0x0007aa38) list_single_cale_preview_pane_t1

0xa926,	// (0x0007aa4d) list_double_cale_preview_pane_g1

0xa92e,	// (0x0007aa55) list_double_cale_preview_pane_t1_ParamLimits

0xa92e,	// (0x0007aa55) list_double_cale_preview_pane_t1

0xa943,	// (0x0007aa6a) list_double_cale_preview_pane_t2_ParamLimits

0xa943,	// (0x0007aa6a) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x0007ff60) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x0007ff60) list_double_cale_preview_pane_t

0x254c,	// (0x00072673) main_ezdial_pane

0xb262,	// (0x0007b389) main_sp_fs_email_pane_ParamLimits

0xa506,	// (0x0007a62d) cmail_ddmenu_btn01_pane_ParamLimits

0xa506,	// (0x0007a62d) cmail_ddmenu_btn01_pane

0xa519,	// (0x0007a640) cmail_ddmenu_btn02_pane_ParamLimits

0xa519,	// (0x0007a640) cmail_ddmenu_btn02_pane

0xa53c,	// (0x0007a663) cmail_ddmenu_btn03_pane_ParamLimits

0xa53c,	// (0x0007a663) cmail_ddmenu_btn03_pane

0x1f9b,	// (0x000720c2) main_sp_fs_ctrlbar_pane_ParamLimits

0x1fbf,	// (0x000720e6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa673,	// (0x0007a79a) list_cmail_body_pane_ParamLimits

0xe37d,	// (0x0007e4a4) bg_button_pane_cp12

0xe386,	// (0x0007e4ad) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe386,	// (0x0007e4ad) list_single_cmail_header_detail_pane_g3

0x2344,	// (0x0007246b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2344,	// (0x0007246b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0007fee5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0007fee5) list_single_cmail_header_detail_pane_t

0xe4b2,	// (0x0007e5d9) phacti_term_pane_t2_ParamLimits

0xe4b2,	// (0x0007e5d9) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x0007feef) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x0007feef) phacti_term_pane_t

0xe74c,	// (0x0007e873) aid_size_list_single_double

0xa95b,	// (0x0007aa82) popup_ezdial_listscroll_window

0xa977,	// (0x0007aa9e) popup_number_entry_window_cp01

0xbb7e,	// (0x0007bca5) bg_popup_call_pane_cp09

0xe758,	// (0x0007e87f) ezdial_list_pane

0xe760,	// (0x0007e887) scroll_pane_cp23

0xcfdf,	// (0x0007d106) bg_button_pane_cp028_ParamLimits

0xcfdf,	// (0x0007d106) bg_button_pane_cp028

0xa985,	// (0x0007aaac) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa985,	// (0x0007aaac) cmail_ddmenu_btn01_pane_g1

0xa991,	// (0x0007aab8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa991,	// (0x0007aab8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x0007ff65) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x0007ff65) cmail_ddmenu_btn01_pane_g

0xe768,	// (0x0007e88f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe768,	// (0x0007e88f) cmail_ddmenu_btn01_pane_t1

0xcfdf,	// (0x0007d106) bg_button_pane_cp029_ParamLimits

0xcfdf,	// (0x0007d106) bg_button_pane_cp029

0xa99d,	// (0x0007aac4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa99d,	// (0x0007aac4) cmail_ddmenu_btn02_pane_g1

0xa9b5,	// (0x0007aadc) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa9b5,	// (0x0007aadc) cmail_ddmenu_btn02_pane_t1

0xb262,	// (0x0007b389) bg_button_pane_cp031_ParamLimits

0xb262,	// (0x0007b389) bg_button_pane_cp031

0xa99d,	// (0x0007aac4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa99d,	// (0x0007aac4) cmail_ddmenu_btn03_pane_g1

0xa9b5,	// (0x0007aadc) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa9b5,	// (0x0007aadc) cmail_ddmenu_btn03_pane_t1

0x7d4a,	// (0x00077e71) cell_dialer2_keypad_pane_t1_ParamLimits

0x7d64,	// (0x00077e8b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7d64,	// (0x00077e8b) cell_dialer2_keypad_pane_t1_copy1

0x9e8d,	// (0x00079fb4) ncimui_group_button_pane

0xb262,	// (0x0007b389) main_sp_fs_calendar_pane_ParamLimits

0xa68b,	// (0x0007a7b2) list_single_cmail_header_caption_pane_ParamLimits

0xe4fd,	// (0x0007e624) aid_recal_txt_sm_pane

0x254c,	// (0x00072673) mian_recal_day_pane

0xe53c,	// (0x0007e663) popup_sp_fs_cale_preview_window_ParamLimits

0x254c,	// (0x00072673) list_recal_day_pane

0xe79f,	// (0x0007e8c6) list_single_recal_day_pane_ParamLimits

0xe79f,	// (0x0007e8c6) list_single_recal_day_pane

0xe7b1,	// (0x0007e8d8) list_single_recal_day_pane_g1_ParamLimits

0xe7b1,	// (0x0007e8d8) list_single_recal_day_pane_g1

0xe7bd,	// (0x0007e8e4) list_single_recal_day_pane_g2_ParamLimits

0xe7bd,	// (0x0007e8e4) list_single_recal_day_pane_g2

0xe7cc,	// (0x0007e8f3) list_single_recal_day_pane_g3_ParamLimits

0xe7cc,	// (0x0007e8f3) list_single_recal_day_pane_g3

0xa9d9,	// (0x0007ab00) list_single_recal_day_pane_g4_ParamLimits

0xa9d9,	// (0x0007ab00) list_single_recal_day_pane_g4

0xe7d8,	// (0x0007e8ff) list_single_recal_day_pane_g5_ParamLimits

0xe7d8,	// (0x0007e8ff) list_single_recal_day_pane_g5

0xe7e7,	// (0x0007e90e) list_single_recal_day_pane_g6_ParamLimits

0xe7e7,	// (0x0007e90e) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x0007ff74) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x0007ff74) list_single_recal_day_pane_g

0xe7f3,	// (0x0007e91a) list_single_recal_day_pane_t1

0xe801,	// (0x0007e928) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x0007ff81) list_single_recal_day_pane_t

0xa9ec,	// (0x0007ab13) ncimui_query_button_pane_ParamLimits

0xa9ec,	// (0x0007ab13) ncimui_query_button_pane

0xa9fc,	// (0x0007ab23) ncimui_query_button_pane_t1_ParamLimits

0xa9fc,	// (0x0007ab23) ncimui_query_button_pane_t1

0xe80f,	// (0x0007e936) ncimui_query_button_pane_t2_ParamLimits

0xe80f,	// (0x0007e936) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x0007ff86) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x0007ff86) ncimui_query_button_pane_t

0xaa0f,	// (0x0007ab36) query_button_pane_ParamLimits

0xaa0f,	// (0x0007ab36) query_button_pane

0x254c,	// (0x00072673) bg_button_pane_cp0028

0xe822,	// (0x0007e949) query_button_pane_t1

0x5d53,	// (0x00075e7a) main_tport_pane_ParamLimits

0xa560,	// (0x0007a687) bg_popup_window_pane_cp01_ParamLimits

0xa560,	// (0x0007a687) bg_popup_window_pane_cp01

0xa57a,	// (0x0007a6a1) heading_pane_cp08_ParamLimits

0xa57a,	// (0x0007a6a1) heading_pane_cp08

0xa58e,	// (0x0007a6b5) heading_pane_cp07_ParamLimits

0xa58e,	// (0x0007a6b5) heading_pane_cp07

0xe340,	// (0x0007e467) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0007fed2) cell_tport_appsw_pane_g

0x1c14,	// (0x00071d3b) input_candi_list_open_g1

0xb5c9,	// (0x0007b6f0) list_cale_time_pane_g6_ParamLimits

0xb5c9,	// (0x0007b6f0) list_cale_time_pane_g6

0x6b1c,	// (0x00076c43) aid_size_touch_calib_1_ParamLimits

0x6b1c,	// (0x00076c43) aid_size_touch_calib_1

0x6b28,	// (0x00076c4f) aid_size_touch_calib_2_ParamLimits

0x6b28,	// (0x00076c4f) aid_size_touch_calib_2

0x6b3e,	// (0x00076c65) aid_size_touch_calib_3_ParamLimits

0x6b3e,	// (0x00076c65) aid_size_touch_calib_3

0x6b5c,	// (0x00076c83) aid_size_touch_calib_4_ParamLimits

0x6b5c,	// (0x00076c83) aid_size_touch_calib_4

0x6b72,	// (0x00076c99) main_touch_calib_button_group_pane_ParamLimits

0x6b72,	// (0x00076c99) main_touch_calib_button_group_pane

0x6b89,	// (0x00076cb0) main_touch_calib_pane_g1_ParamLimits

0x6b95,	// (0x00076cbc) main_touch_calib_pane_g2_ParamLimits

0x6ba1,	// (0x00076cc8) main_touch_calib_pane_g3_ParamLimits

0x6bad,	// (0x00076cd4) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0007f8ab) main_touch_calib_pane_g_ParamLimits

0x6bb9,	// (0x00076ce0) main_touch_calib_pane_t1_ParamLimits

0x6bd3,	// (0x00076cfa) main_touch_calib_pane_t2_ParamLimits

0x6bed,	// (0x00076d14) main_touch_calib_pane_t3_ParamLimits

0x6c01,	// (0x00076d28) main_touch_calib_pane_t4_ParamLimits

0x6c15,	// (0x00076d3c) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0007f8b4) main_touch_calib_pane_t_ParamLimits

0x07e9,	// (0x00070910) list_single_fp_cale_pane_g3_ParamLimits

0x07e9,	// (0x00070910) list_single_fp_cale_pane_g3

0xb262,	// (0x0007b389) bg_button_pane_cp012_ParamLimits

0xb262,	// (0x0007b389) bg_vkb2_func_pane_cp03_ParamLimits

0x9076,	// (0x0007919d) cell_vitu2_function_top_pane_g1_ParamLimits

0xb262,	// (0x0007b389) bg_vkb2_func_pane_cp04_ParamLimits

0x9e41,	// (0x00079f68) main_ncimui_button_group_pane_ParamLimits

0x9e41,	// (0x00079f68) main_ncimui_button_group_pane

0x9e7b,	// (0x00079fa2) main_ncimui_pane_t3_ParamLimits

0x9e7b,	// (0x00079fa2) main_ncimui_pane_t3

0xe460,	// (0x0007e587) phacti_button_group_pane

0xe74c,	// (0x0007e873) aid_size_list_single_double_ParamLimits

0xa95b,	// (0x0007aa82) popup_ezdial_listscroll_window_ParamLimits

0xa977,	// (0x0007aa9e) popup_number_entry_window_cp01_ParamLimits

0xaa22,	// (0x0007ab49) phacti_button_pane_ParamLimits

0xaa22,	// (0x0007ab49) phacti_button_pane

0x254c,	// (0x00072673) bg_button_pane_cp14

0xe830,	// (0x0007e957) phacti_button_pane_t1

0xaa33,	// (0x0007ab5a) main_touch_calib_button_pane_ParamLimits

0xaa33,	// (0x0007ab5a) main_touch_calib_button_pane

0x324b,	// (0x00073372) bg_button_pane_cp18_ParamLimits

0x324b,	// (0x00073372) bg_button_pane_cp18

0xe83e,	// (0x0007e965) main_touch_calib_button_pane_t1_ParamLimits

0xe83e,	// (0x0007e965) main_touch_calib_button_pane_t1

0xe854,	// (0x0007e97b) main_touch_calib_button_pane_t2_ParamLimits

0xe854,	// (0x0007e97b) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x0007ff8b) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x0007ff8b) main_touch_calib_button_pane_t

0x254c,	// (0x00072673) cell_ncimui_button_pane

0x254c,	// (0x00072673) bg_button_pane_cp032

0xe872,	// (0x0007e999) cell_ncimui_button_pane_t1

0xef2e,	// (0x0007f055) image3_infobar_pane_ParamLimits

0xef2e,	// (0x0007f055) image3_infobar_pane

0xa212,	// (0x0007a339) fs_bigclock_status_pane_ParamLimits

0xa212,	// (0x0007a339) fs_bigclock_status_pane

0xa21f,	// (0x0007a346) main_fs_bigclock_clock_pane_ParamLimits

0xa21f,	// (0x0007a346) main_fs_bigclock_clock_pane

0xa232,	// (0x0007a359) main_fs_bigclock_indi_pane_ParamLimits

0xa232,	// (0x0007a359) main_fs_bigclock_indi_pane

0xa24a,	// (0x0007a371) main_fs_bigclock_swipe_pane_ParamLimits

0xa24a,	// (0x0007a371) main_fs_bigclock_swipe_pane

0x254c,	// (0x00072673) main_fs_clock_dumped_data

0xdd65,	// (0x0007de8c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdd65,	// (0x0007de8c) list_single_fs_bigclock_indicator_pane_g1

0xdd83,	// (0x0007deaa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdd83,	// (0x0007deaa) list_single_fs_bigclock_indicator_pane_g2

0xdd9d,	// (0x0007dec4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdd9d,	// (0x0007dec4) list_single_fs_bigclock_indicator_pane_g3

0xddb7,	// (0x0007dede) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xddb7,	// (0x0007dede) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x0007fdbe) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x0007fdbe) list_single_fs_bigclock_indicator_pane_g

0xdddd,	// (0x0007df04) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdddd,	// (0x0007df04) list_single_fs_bigclock_indicator_pane_t1

0xde05,	// (0x0007df2c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde05,	// (0x0007df2c) list_single_fs_bigclock_indicator_pane_t2

0xde2d,	// (0x0007df54) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xde2d,	// (0x0007df54) list_single_fs_bigclock_indicator_pane_t3

0xde55,	// (0x0007df7c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xde55,	// (0x0007df7c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x0007fdc9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x0007fdc9) list_single_fs_bigclock_indicator_pane_t

0xe880,	// (0x0007e9a7) image3_infobar_fav_pane_ParamLimits

0xe880,	// (0x0007e9a7) image3_infobar_fav_pane

0xe890,	// (0x0007e9b7) image3_infobar_loc_pane_ParamLimits

0xe890,	// (0x0007e9b7) image3_infobar_loc_pane

0xe8a4,	// (0x0007e9cb) image3_infobar_time_pane_ParamLimits

0xe8a4,	// (0x0007e9cb) image3_infobar_time_pane

0x047c,	// (0x000705a3) image3_infobar_time_pane_g1

0xe8b4,	// (0x0007e9db) image3_infobar_time_pane_t1

0x047c,	// (0x000705a3) image3_infobar_loc_pane_g1

0xe8c2,	// (0x0007e9e9) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x0007ff90) image3_infobar_loc_pane_g

0xe8ca,	// (0x0007e9f1) image3_infobar_loc_pane_t1

0x047c,	// (0x000705a3) image3_infobar_fav_pane_g1

0xe8d8,	// (0x0007e9ff) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x0007ff95) image3_infobar_fav_pane_g

0xe8e0,	// (0x0007ea07) fs_bigclock_status_battery_pane

0xe8e9,	// (0x0007ea10) fs_bigclock_status_signal_pane

0xe8f2,	// (0x0007ea19) fs_bigclock_status_title_pane

0xe8fb,	// (0x0007ea22) fs_bigclock_status_signal_pane_g1

0xe904,	// (0x0007ea2b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x0007ff9a) fs_bigclock_status_signal_pane_g

0xe90c,	// (0x0007ea33) fs_bigclock_status_battery_pane_g1

0xe915,	// (0x0007ea3c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x0007ff9f) fs_bigclock_status_battery_pane_g

0xe91d,	// (0x0007ea44) fs_bigclock_status_title_pane_t1

0x047c,	// (0x000705a3) main_fs_bigclock_clock_pane_g1

0xe92b,	// (0x0007ea52) main_fs_bigclock_clock_pane_g2

0xe92b,	// (0x0007ea52) main_fs_bigclock_clock_pane_g3

0xe92b,	// (0x0007ea52) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x0007ffa4) main_fs_bigclock_clock_pane_g

0xe933,	// (0x0007ea5a) main_fs_bigclock_clock_pane_t1

0xe941,	// (0x0007ea68) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x0007ffad) main_fs_bigclock_clock_pane_t

0xe950,	// (0x0007ea77) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe950,	// (0x0007ea77) list_single_fs_bigclock_indicator_pane

0xaa48,	// (0x0007ab6f) list_single_fs_bigclock_pane_ParamLimits

0xaa48,	// (0x0007ab6f) list_single_fs_bigclock_pane

0xe96a,	// (0x0007ea91) main_fs_bigclock_indicator_pane_t1

0xe979,	// (0x0007eaa0) list_single_fs_bigclock_pane_g1

0xe981,	// (0x0007eaa8) list_single_fs_bigclock_pane_t1

0x047c,	// (0x000705a3) main_fs_bigclock_swipe_pane_g1

0xe9bf,	// (0x0007eae6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x0007ffbe) main_fs_bigclock_swipe_pane_g

0xe9c7,	// (0x0007eaee) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe9c7,	// (0x0007eaee) main_fs_bigclock_swipe_pane_t1

0x4bff,	// (0x00074d26) call_type_pane_ParamLimits

0x254c,	// (0x00072673) main_btmg_pane

0xe635,	// (0x0007e75c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe635,	// (0x0007e75c) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x0007ff31) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x0007ff31) list_single_cale_mrui_row_pane_g

0xe786,	// (0x0007e8ad) list_recal_vselct_arw_lo_pane

0xe78e,	// (0x0007e8b5) list_recal_vselct_arw_up_pane

0xe796,	// (0x0007e8bd) list_recal_vselct_pane

0xe9e4,	// (0x0007eb0b) btmg_button_pane

0xaaae,	// (0x0007abd5) main_btmg_pane_g1

0x254c,	// (0x00072673) bg_button_pane_cp044

0xe9ee,	// (0x0007eb15) btmg_button_pane_t1

0xcfd7,	// (0x0007d0fe) aid_listscroll_gen

0xb262,	// (0x0007b389) main_cntbar_detail_pane

0xe35e,	// (0x0007e485) list_cmail_folder_pane

0xe36e,	// (0x0007e495) sp_fs_scroll_pane_cp03_ParamLimits

0x243a,	// (0x00072561) list_single_fs_dyc_pane_cp01_ParamLimits

0x243a,	// (0x00072561) list_single_fs_dyc_pane_cp01

0xe9fc,	// (0x0007eb23) aid_size_cmail_indent

0xea05,	// (0x0007eb2c) list_single_dyc_row_pane_cp01

0xaae4,	// (0x0007ac0b) cntbar_detail_list_pane_ParamLimits

0xaae4,	// (0x0007ac0b) cntbar_detail_list_pane

0xab30,	// (0x0007ac57) main_cntbar_detail_cont_pane_ParamLimits

0xab30,	// (0x0007ac57) main_cntbar_detail_cont_pane

0x4bf3,	// (0x00074d1a) scroll_pane_cp032_ParamLimits

0x4bf3,	// (0x00074d1a) scroll_pane_cp032

0xab44,	// (0x0007ac6b) cntbar_detail_list_event_pane_ParamLimits

0xab44,	// (0x0007ac6b) cntbar_detail_list_event_pane

0xaaf4,	// (0x0007ac1b) cntbar_detail_list_shct_pane

0x4281,	// (0x000743a8) aid_list_gen

0xea0e,	// (0x0007eb35) aid_scroll

0xea17,	// (0x0007eb3e) aid_size_touch_scroll_bar

0x023f,	// (0x00070366) aid_list_double

0xea20,	// (0x0007eb47) aid_list_single

0xea29,	// (0x0007eb50) aid_list_single_lg

0xea32,	// (0x0007eb59) aid_list_z_g_a_sm

0xf0f3,	// (0x0007f21a) aid_list_z_g_d

0xea3a,	// (0x0007eb61) aid_txt_z_prm

0x2457,	// (0x0007257e) aid_txt_z_prm_cp01

0x2465,	// (0x0007258c) aid_txt_z_sec

0xab54,	// (0x0007ac7b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xab54,	// (0x0007ac7b) main_cntbar_detail_cont_pane_g1

0xab68,	// (0x0007ac8f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xab68,	// (0x0007ac8f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x0007ffc3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x0007ffc3) main_cntbar_detail_cont_pane_g

0xea48,	// (0x0007eb6f) main_cntbar_detail_cont_pane_t1

0xea56,	// (0x0007eb7d) main_cntbar_detail_cont_pane_t2

0xea64,	// (0x0007eb8b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x0007ffc8) main_cntbar_detail_cont_pane_t

0xab78,	// (0x0007ac9f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xab78,	// (0x0007ac9f) cell_cntbar_detail_list_shct_pane

0xea72,	// (0x0007eb99) cntbar_detail_list_shct_pane_g1

0xea7b,	// (0x0007eba2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x0007ffcf) cntbar_detail_list_shct_pane_g

0xab8c,	// (0x0007acb3) cntbar_detail_list_event_pane_g1_ParamLimits

0xab8c,	// (0x0007acb3) cntbar_detail_list_event_pane_g1

0xab98,	// (0x0007acbf) cntbar_detail_list_event_pane_g2_ParamLimits

0xab98,	// (0x0007acbf) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x0007ffd4) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x0007ffd4) cntbar_detail_list_event_pane_g

0xac04,	// (0x0007ad2b) cntbar_detail_list_event_pane_t1_ParamLimits

0xac04,	// (0x0007ad2b) cntbar_detail_list_event_pane_t1

0xac19,	// (0x0007ad40) cntbar_detail_list_event_pane_t2_ParamLimits

0xac19,	// (0x0007ad40) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x0007ffe1) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x0007ffe1) cntbar_detail_list_event_pane_t

0x047c,	// (0x000705a3) cell_cntbar_detail_list_shct_pane_g1

0x4f50,	// (0x00075077) navi_pane_mv_g3

0xb262,	// (0x0007b389) main_cntbar_detail_pane_ParamLimits

0x254c,	// (0x00072673) main_notif_wgt_pane

0xed44,	// (0x0007ee6b) aid_tch_main_mp4_pane_g4

0xef26,	// (0x0007f04d) popup_slider_window_cp02

0xe77d,	// (0x0007e8a4) list_recal_day_event_pane

0xaab8,	// (0x0007abdf) cntbar_detail_btn_pane_ParamLimits

0xaab8,	// (0x0007abdf) cntbar_detail_btn_pane

0xaace,	// (0x0007abf5) cntbar_detail_btn_pane_cp01_ParamLimits

0xaace,	// (0x0007abf5) cntbar_detail_btn_pane_cp01

0xaaf4,	// (0x0007ac1b) cntbar_detail_list_shct_pane_ParamLimits

0xab04,	// (0x0007ac2b) cntbar_detail_pane_g1_ParamLimits

0xab04,	// (0x0007ac2b) cntbar_detail_pane_g1

0xab14,	// (0x0007ac3b) cntbar_detail_pane_t1_ParamLimits

0xab14,	// (0x0007ac3b) cntbar_detail_pane_t1

0xaba4,	// (0x0007accb) cntbar_detail_list_event_pane_g3_ParamLimits

0xaba4,	// (0x0007accb) cntbar_detail_list_event_pane_g3

0xabbc,	// (0x0007ace3) cntbar_detail_list_event_pane_g4_ParamLimits

0xabbc,	// (0x0007ace3) cntbar_detail_list_event_pane_g4

0xabd4,	// (0x0007acfb) cntbar_detail_list_event_pane_g5_ParamLimits

0xabd4,	// (0x0007acfb) cntbar_detail_list_event_pane_g5

0xabec,	// (0x0007ad13) cntbar_detail_list_event_pane_g6_ParamLimits

0xabec,	// (0x0007ad13) cntbar_detail_list_event_pane_g6

0xac2e,	// (0x0007ad55) cntbar_detail_list_event_pane_t3_ParamLimits

0xac2e,	// (0x0007ad55) cntbar_detail_list_event_pane_t3

0xac40,	// (0x0007ad67) popup_notif_wgt_window_ParamLimits

0xac40,	// (0x0007ad67) popup_notif_wgt_window

0xac59,	// (0x0007ad80) popup_submenu_window_cp01_ParamLimits

0xac59,	// (0x0007ad80) popup_submenu_window_cp01

0xbb7e,	// (0x0007bca5) bg_popup_window_pane_cp10

0xea84,	// (0x0007ebab) listscroll_notif_wgt_pane

0xea8e,	// (0x0007ebb5) list_notif_wgt_window

0xea97,	// (0x0007ebbe) scroll_pane_cp033

0xeaa0,	// (0x0007ebc7) list_notif_wgt_row_pane_ParamLimits

0xeaa0,	// (0x0007ebc7) list_notif_wgt_row_pane

0xeab4,	// (0x0007ebdb) aid_size_list_notif_wgt_del

0xeabd,	// (0x0007ebe4) list_notif_wgt_row_pane_g1

0xeac5,	// (0x0007ebec) list_notif_wgt_row_pane_g2

0xeacd,	// (0x0007ebf4) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x0007ffe8) list_notif_wgt_row_pane_g

0xead6,	// (0x0007ebfd) list_notif_wgt_row_pane_t1

0xeae4,	// (0x0007ec0b) list_notif_wgt_row_pane_t2

0xeaf2,	// (0x0007ec19) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x0007ffef) list_notif_wgt_row_pane_t

0x9115,	// (0x0007923c) list_recal_day_event_pane_g1

0xeb00,	// (0x0007ec27) list_recal_day_event_pane_t1

0x254c,	// (0x00072673) bg_button_pane_cp045

0xeb0f,	// (0x0007ec36) cntbar_detail_btn_pane_t1

0xcfdf,	// (0x0007d106) main_callh_pane_ParamLimits

0xcfdf,	// (0x0007d106) main_callh_pane

0x254c,	// (0x00072673) main_coverflow0_pane

0x254c,	// (0x00072673) main_wgtman_pane

0xa258,	// (0x0007a37f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa258,	// (0x0007a37f) main_fs_bigclock_unlock_btn_pane

0xe338,	// (0x0007e45f) bg_button_pane_cp16

0xe348,	// (0x0007e46f) cell_tport_appsw_pane_g3

0xac6b,	// (0x0007ad92) cf0_flow_pane_ParamLimits

0xac6b,	// (0x0007ad92) cf0_flow_pane

0xeb1d,	// (0x0007ec44) listscroll_cf0_pane

0xeb26,	// (0x0007ec4d) main_cf0_pane_g1

0xac80,	// (0x0007ada7) main_cf0_pane_t1_ParamLimits

0xac80,	// (0x0007ada7) main_cf0_pane_t1

0xac98,	// (0x0007adbf) main_cf0_pane_t2_ParamLimits

0xac98,	// (0x0007adbf) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0007fff6) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0007fff6) main_cf0_pane_t

0xeb30,	// (0x0007ec57) scroll_pane_cp11

0xacb0,	// (0x0007add7) cf0_flow_pane_g1

0xacb8,	// (0x0007addf) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0007fffb) cf0_flow_pane_g

0xacc0,	// (0x0007ade7) cf0_flow_pane_t1

0x254c,	// (0x00072673) main_call6_pane

0x254c,	// (0x00072673) main_calllock_pane

0xacce,	// (0x0007adf5) call6_btn_grp_pane_ParamLimits

0xacce,	// (0x0007adf5) call6_btn_grp_pane

0xace8,	// (0x0007ae0f) call6_pane_g1_ParamLimits

0xace8,	// (0x0007ae0f) call6_pane_g1

0xacfd,	// (0x0007ae24) popup_call6_1st_window_ParamLimits

0xacfd,	// (0x0007ae24) popup_call6_1st_window

0xad0e,	// (0x0007ae35) popup_call6_2nd_window_ParamLimits

0xad0e,	// (0x0007ae35) popup_call6_2nd_window

0xad1f,	// (0x0007ae46) cell_call6_btn_pane_ParamLimits

0xad1f,	// (0x0007ae46) cell_call6_btn_pane

0xbb7e,	// (0x0007bca5) bg_popup_call2_in_pane_cp03

0xeb3b,	// (0x0007ec62) popup_call6_1st_window_g1

0xeb43,	// (0x0007ec6a) popup_call6_1st_window_g2

0xeb4b,	// (0x0007ec72) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00080000) popup_call6_1st_window_g

0xeb53,	// (0x0007ec7a) popup_call6_1st_window_t1

0xeb62,	// (0x0007ec89) popup_call6_1st_window_t2

0xeb72,	// (0x0007ec99) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00080007) popup_call6_1st_window_t

0xbb7e,	// (0x0007bca5) bg_popup_call2_in_pane_cp04

0xeb3b,	// (0x0007ec62) popup_call6_2nd_window_g1

0xeb43,	// (0x0007ec6a) popup_call6_2nd_window_g2

0xeb4b,	// (0x0007ec72) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00080000) popup_call6_2nd_window_g

0xeb53,	// (0x0007ec7a) popup_call6_2nd_window_t1

0x254c,	// (0x00072673) bg_button_pane_cp15

0xeb82,	// (0x0007eca9) cell_call6_btn_pane_g1

0xeb8b,	// (0x0007ecb2) cell_call6_btn_pane_t1

0xad33,	// (0x0007ae5a) listscroll_wgtman_pane_ParamLimits

0xad33,	// (0x0007ae5a) listscroll_wgtman_pane

0xad56,	// (0x0007ae7d) wgtman_btn_pane_ParamLimits

0xad56,	// (0x0007ae7d) wgtman_btn_pane

0xba31,	// (0x0007bb58) aid_scroll_copy1

0xeb9a,	// (0x0007ecc1) list_wgtman_pane

0xad99,	// (0x0007aec0) wgtman_btn_pane_g1_ParamLimits

0xad99,	// (0x0007aec0) wgtman_btn_pane_g1

0xadc5,	// (0x0007aeec) wgtman_btn_pane_t1_ParamLimits

0xadc5,	// (0x0007aeec) wgtman_btn_pane_t1

0xeba4,	// (0x0007eccb) wgtman_btn_pane_t2_ParamLimits

0xeba4,	// (0x0007eccb) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0008000e) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0008000e) wgtman_btn_pane_t

0xae02,	// (0x0007af29) listrow_wgtman_pane_ParamLimits

0xae02,	// (0x0007af29) listrow_wgtman_pane

0xae15,	// (0x0007af3c) listrow_wgtman_pane_g1

0xae1e,	// (0x0007af45) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00080013) listrow_wgtman_pane_g

0x2473,	// (0x0007259a) listrow_wgtman_pane_t1

0x2481,	// (0x000725a8) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00080018) listrow_wgtman_pane_t

0x248f,	// (0x000725b6) wait_bar_pane_cp09

0xebbb,	// (0x0007ece2) main_calllock_btn_pane

0xebc5,	// (0x0007ecec) main_calllock_pane_g1

0x254c,	// (0x00072673) bg_button_pane_cp17

0xebd0,	// (0x0007ecf7) main_calllock_btn_pane_g1

0xebd9,	// (0x0007ed00) main_calllock_btn_pane_t1

0x254c,	// (0x00072673) main_dialer3_pane

0x254c,	// (0x00072673) main_fmrd2_pane

0x047c,	// (0x000705a3) main_fs_bigclock_unlock_btn_pane_g1

0xebf0,	// (0x0007ed17) main_fs_bigclock_unlock_btn_pane_t1

0xae28,	// (0x0007af4f) area_fmrd2_info_pane_ParamLimits

0xae28,	// (0x0007af4f) area_fmrd2_info_pane

0xae39,	// (0x0007af60) area_fmrd2_visual_pane_ParamLimits

0xae39,	// (0x0007af60) area_fmrd2_visual_pane

0xae47,	// (0x0007af6e) fmrd2_indi_pane_ParamLimits

0xae47,	// (0x0007af6e) fmrd2_indi_pane

0xae54,	// (0x0007af7b) area_fmrd2_visual_pane_g1

0xae5c,	// (0x0007af83) area_fmrd2_visual_pane_t1

0xae6c,	// (0x0007af93) area_fmrd2_visual_pane_t2

0xae7c,	// (0x0007afa3) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00080022) area_fmrd2_visual_pane_t

0xae8c,	// (0x0007afb3) area_fmrd2_info_pane_g1

0xae94,	// (0x0007afbb) area_fmrd2_info_pane_t1

0xaea4,	// (0x0007afcb) area_fmrd2_info_pane_t2

0xaeb4,	// (0x0007afdb) area_fmrd2_info_pane_t3

0xaec4,	// (0x0007afeb) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00080029) area_fmrd2_info_pane_t

0xaed2,	// (0x0007aff9) fmrd2_indi_pane_t1

0xaee2,	// (0x0007b009) fmrd2_indi_pane_t2

0xaef2,	// (0x0007b019) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00080032) fmrd2_indi_pane_t

0xddc6,	// (0x0007deed) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xddc6,	// (0x0007deed) list_single_fs_bigclock_indicator_pane_g5

0xde6a,	// (0x0007df91) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xde6a,	// (0x0007df91) list_single_fs_bigclock_indicator_pane_t5

0xa7a2,	// (0x0007a8c9) aid_cell_bcale_month_pane_ParamLimits

0xa7a2,	// (0x0007a8c9) aid_cell_bcale_month_pane

0xa7b4,	// (0x0007a8db) bcale_month_pane_ParamLimits

0xa7b4,	// (0x0007a8db) bcale_month_pane

0xa7ce,	// (0x0007a8f5) bcale_preview_pane_ParamLimits

0xa7ce,	// (0x0007a8f5) bcale_preview_pane

0xe981,	// (0x0007eaa8) list_single_fs_bigclock_pane_t1_ParamLimits

0xe99b,	// (0x0007eac2) list_single_fs_bigclock_pane_t2_ParamLimits

0xe99b,	// (0x0007eac2) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x0007ffb9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x0007ffb9) list_single_fs_bigclock_pane_t

0xebe8,	// (0x0007ed0f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0008001d) main_fs_bigclock_unlock_btn_pane_g

0xaf02,	// (0x0007b029) aid_dia3_key_size_ParamLimits

0xaf02,	// (0x0007b029) aid_dia3_key_size

0xaf11,	// (0x0007b038) aid_dia3_listrow_size_ParamLimits

0xaf11,	// (0x0007b038) aid_dia3_listrow_size

0xaf26,	// (0x0007b04d) dia3_keypad_fun_pane_ParamLimits

0xaf26,	// (0x0007b04d) dia3_keypad_fun_pane

0xaf42,	// (0x0007b069) dia3_keypad_num_pane_ParamLimits

0xaf42,	// (0x0007b069) dia3_keypad_num_pane

0xaf5d,	// (0x0007b084) dia3_listscroll_pane_ParamLimits

0xaf5d,	// (0x0007b084) dia3_listscroll_pane

0xaf70,	// (0x0007b097) dia3_numentry_pane_ParamLimits

0xaf70,	// (0x0007b097) dia3_numentry_pane

0xebfe,	// (0x0007ed25) dia3_list_pane

0xec09,	// (0x0007ed30) scroll_pane_cp12

0x254c,	// (0x00072673) bg_dia3_numentry_pane

0xaf84,	// (0x0007b0ab) dia3_numentry_pane_t1

0xaf93,	// (0x0007b0ba) cell_dia3_key_num_pane

0xaf9b,	// (0x0007b0c2) cell_dia3_key0_fun_pane_ParamLimits

0xaf9b,	// (0x0007b0c2) cell_dia3_key0_fun_pane

0xafaf,	// (0x0007b0d6) cell_dia3_key1_fun_pane_ParamLimits

0xafaf,	// (0x0007b0d6) cell_dia3_key1_fun_pane

0xafc7,	// (0x0007b0ee) dia3_listrow_pane

0xdae4,	// (0x0007dc0b) bg_dia3_numentry_pane_g1

0x254c,	// (0x00072673) bg_button_pane_cp21

0xec14,	// (0x0007ed3b) cell_dia3_key_num_pane_t1

0xec22,	// (0x0007ed49) cell_dia3_key_num_pane_t2

0xec31,	// (0x0007ed58) cell_dia3_key_num_pane_t3

0xec40,	// (0x0007ed67) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00080039) cell_dia3_key_num_pane_t

0x254c,	// (0x00072673) bg_button_pane_cp19

0xafd9,	// (0x0007b100) cell_dia3_key0_fun_pane_g1

0x254c,	// (0x00072673) bg_button_pane_cp20

0xafe1,	// (0x0007b108) cell_dia3_key1_fun_pane_g1

0xafe9,	// (0x0007b110) area_left_week_number_pane

0xaff2,	// (0x0007b119) area_top_day_name_pane

0xaffb,	// (0x0007b122) frame_month_view_pane

0xb007,	// (0x0007b12e) grid_month_view_pane

0xb011,	// (0x0007b138) cell_top_day_name_pane_ParamLimits

0xb011,	// (0x0007b138) cell_top_day_name_pane

0xb029,	// (0x0007b150) cell_area_left_week_number_pane_ParamLimits

0xb029,	// (0x0007b150) cell_area_left_week_number_pane

0xb03d,	// (0x0007b164) cell_month_view_pane_ParamLimits

0xb03d,	// (0x0007b164) cell_month_view_pane

0xec4f,	// (0x0007ed76) frm_month_g1

0xb058,	// (0x0007b17f) frm_month_g2

0xb062,	// (0x0007b189) frm_month_g3

0xb06c,	// (0x0007b193) frm_month_g4

0xb076,	// (0x0007b19d) frm_month_g5

0xb080,	// (0x0007b1a7) frm_month_g6

0xb08a,	// (0x0007b1b1) frm_month_g7

0xec58,	// (0x0007ed7f) frm_month_g8

0xb096,	// (0x0007b1bd) frm_month_g9

0xb09f,	// (0x0007b1c6) frm_month_g10

0xb0a8,	// (0x0007b1cf) frm_month_g11

0xb0b1,	// (0x0007b1d8) frm_month_g12

0xb0ba,	// (0x0007b1e1) frm_month_g13

0xb0c3,	// (0x0007b1ea) frm_month_g14

0xec61,	// (0x0007ed88) frm_month_g15

0xb0cc,	// (0x0007b1f3) frm_month_g16

0x000f,

0xff1b,	// (0x00080042) frm_month_g

0xb0d7,	// (0x0007b1fe) cell_top_day_name_pane_t1

0xb0e6,	// (0x0007b20d) cell_area_left_week_number_pane_g1

0xb0d7,	// (0x0007b1fe) cell_area_left_week_number_pane_t1

0x047c,	// (0x000705a3) cell_month_view_pane_g1

0xb0ee,	// (0x0007b215) cell_month_view_pane_t1

0x254c,	// (0x00072673) main_fps_pane

0xe099,	// (0x0007e1c0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe099,	// (0x0007e1c0) cmail_ddmenu_btn02_pane_cp1

0xe0b5,	// (0x0007e1dc) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe0b5,	// (0x0007e1dc) cmail_ddmenu_btn02_pane_cp2

0xa9a9,	// (0x0007aad0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa9a9,	// (0x0007aad0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x0007ff6a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x0007ff6a) cmail_ddmenu_btn02_pane_g

0xa9c7,	// (0x0007aaee) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa9c7,	// (0x0007aaee) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x0007ff6f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x0007ff6f) cmail_ddmenu_btn02_pane_t

0xb0fd,	// (0x0007b224) fps_text_pane_ParamLimits

0xb0fd,	// (0x0007b224) fps_text_pane

0xb114,	// (0x0007b23b) main_fps_pane_g1_ParamLimits

0xb114,	// (0x0007b23b) main_fps_pane_g1

0xb12e,	// (0x0007b255) wait_bar_pane_cp010_ParamLimits

0xb12e,	// (0x0007b255) wait_bar_pane_cp010

0xb13f,	// (0x0007b266) fps_text_pane_t1_ParamLimits

0xb13f,	// (0x0007b266) fps_text_pane_t1

0x82d6,	// (0x000783fd) cam4_image_uncrop_pane_g1

0x82df,	// (0x00078406) cam4_image_uncrop_pane_g2

0x82e8,	// (0x0007840f) cam4_image_uncrop_pane_g3

0x82f1,	// (0x00078418) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0007fa43) cam4_image_uncrop_pane_g

0xafc7,	// (0x0007b0ee) dia3_listrow_pane_ParamLimits

0x254c,	// (0x00072673) main_phob2_pane

0xa5f9,	// (0x0007a720) cell_tport_appsw_pane_cp02_ParamLimits

0xa5f9,	// (0x0007a720) cell_tport_appsw_pane_cp02

0xa60d,	// (0x0007a734) cell_tport_appsw_pane_cp03_ParamLimits

0xa60d,	// (0x0007a734) cell_tport_appsw_pane_cp03

0x254c,	// (0x00072673) phob2_contact_card_pane

0x254c,	// (0x00072673) phob2_listscroll_pane

0x00a8,	// (0x000701cf) phob2_list_pane

0x00b0,	// (0x000701d7) scroll_pane_cp034

0xb157,	// (0x0007b27e) phob2_cc_data_pane_ParamLimits

0xb157,	// (0x0007b27e) phob2_cc_data_pane

0xb176,	// (0x0007b29d) phob2_cc_listscroll_pane_ParamLimits

0xb176,	// (0x0007b29d) phob2_cc_listscroll_pane

0x8772,	// (0x00078899) list_double_large_graphic_phob2_pane_ParamLimits

0x8772,	// (0x00078899) list_double_large_graphic_phob2_pane

0xb194,	// (0x0007b2bb) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb194,	// (0x0007b2bb) list_double_large_graphic_phob2_pane_g1

0x2497,	// (0x000725be) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2497,	// (0x000725be) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x00080063) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x00080063) list_double_large_graphic_phob2_pane_g

0x24a3,	// (0x000725ca) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x24a3,	// (0x000725ca) list_double_large_graphic_phob2_pane_t1

0x24b8,	// (0x000725df) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x24b8,	// (0x000725df) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x00080068) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x00080068) list_double_large_graphic_phob2_pane_t

0x254c,	// (0x00072673) list_highlight_pane_cp024

0x0128,	// (0x0007024f) phob2_cc_button_pane

0xb1a1,	// (0x0007b2c8) phob2_cc_data_pane_g1_ParamLimits

0xb1a1,	// (0x0007b2c8) phob2_cc_data_pane_g1

0xb1b6,	// (0x0007b2dd) phob2_cc_data_pane_g2_ParamLimits

0xb1b6,	// (0x0007b2dd) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0008006d) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0008006d) phob2_cc_data_pane_g

0xb1c8,	// (0x0007b2ef) phob2_cc_data_pane_t1_ParamLimits

0xb1c8,	// (0x0007b2ef) phob2_cc_data_pane_t1

0xb1e0,	// (0x0007b307) phob2_cc_data_pane_t2_ParamLimits

0xb1e0,	// (0x0007b307) phob2_cc_data_pane_t2

0xb1f8,	// (0x0007b31f) phob2_cc_data_pane_t3_ParamLimits

0xb1f8,	// (0x0007b31f) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x00080072) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x00080072) phob2_cc_data_pane_t

0x017e,	// (0x000702a5) phob2_cc_list_pane_ParamLimits

0x017e,	// (0x000702a5) phob2_cc_list_pane

0x018a,	// (0x000702b1) scroll_pane_cp035_ParamLimits

0x018a,	// (0x000702b1) scroll_pane_cp035

0xb262,	// (0x0007b389) bg_button_pane_cp033

0x0196,	// (0x000702bd) phob2_cc_button_pane_g1

0x01a2,	// (0x000702c9) phob2_cc_button_pane_t1

0x01b7,	// (0x000702de) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x00080079) phob2_cc_button_pane_t

0xb212,	// (0x0007b339) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb212,	// (0x0007b339) list_double_large_graphic_phob2_cc_pane

0xb226,	// (0x0007b34d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb226,	// (0x0007b34d) list_double_large_graphic_phob2_cc_pane_g1

0xb232,	// (0x0007b359) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb232,	// (0x0007b359) list_double_large_graphic_phob2_cc_pane_g2

0xb23e,	// (0x0007b365) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb23e,	// (0x0007b365) list_double_large_graphic_phob2_cc_pane_g3

0x24ca,	// (0x000725f1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x24ca,	// (0x000725f1) list_double_large_graphic_phob2_cc_pane_g4

0x24d6,	// (0x000725fd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x24d6,	// (0x000725fd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0008007e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0008007e) list_double_large_graphic_phob2_cc_pane_g

0x24e2,	// (0x00072609) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x24e2,	// (0x00072609) list_double_large_graphic_phob2_cc_pane_t1

0x250b,	// (0x00072632) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x250b,	// (0x00072632) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x00080089) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x00080089) list_double_large_graphic_phob2_cc_pane_t

0x0228,	// (0x0007034f) list_highlight_pane_cp025_ParamLimits

0x0228,	// (0x0007034f) list_highlight_pane_cp025

0xb262,	// (0x0007b389) bg_button_pane_cp033_ParamLimits

0x0196,	// (0x000702bd) phob2_cc_button_pane_g1_ParamLimits

0x01a2,	// (0x000702c9) phob2_cc_button_pane_t1_ParamLimits

0x01b7,	// (0x000702de) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x00080079) phob2_cc_button_pane_t_ParamLimits

0x27b8,	// (0x000728df) popup_wgtman_window

0x8b65,	// (0x00078c8c) scroll_pane_cp038

0xad7b,	// (0x0007aea2) wgtman_btn_pane_cp_01_ParamLimits

0xad7b,	// (0x0007aea2) wgtman_btn_pane_cp_01

0x0236,	// (0x0007035d) wgtman_content_pane

0x023f,	// (0x00070366) wgtman_heading_pane

0x254c,	// (0x00072673) bg_heading_pane_cp02

0x0248,	// (0x0007036f) wgtman_heading_pane_g1

0x0250,	// (0x00070377) wgtman_heading_pane_t1

0x025e,	// (0x00070385) scroll_pane_cp036

0x0266,	// (0x0007038d) wgtman_list_pane

0x026e,	// (0x00070395) wgtman_list_pane_t1_ParamLimits

0x026e,	// (0x00070395) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
