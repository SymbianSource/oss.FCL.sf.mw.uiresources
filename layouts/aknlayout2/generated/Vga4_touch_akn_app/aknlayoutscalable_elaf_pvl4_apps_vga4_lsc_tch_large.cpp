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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008129a };

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
0x0a57,	// (0x00081cf1) Screen

0x0a63,	// (0x00081cfd) application_window

0x0a9f,	// (0x00081d39) area_bottom_pane_ParamLimits

0x0a9f,	// (0x00081d39) area_bottom_pane

0x0ad8,	// (0x00081d72) area_top_pane_ParamLimits

0x0ad8,	// (0x00081d72) area_top_pane

0xac5a,	// (0x0008bef4) call_video_uplink_pane_ParamLimits

0xac5a,	// (0x0008bef4) call_video_uplink_pane

0x0b66,	// (0x00081e00) main_pane_ParamLimits

0x0b66,	// (0x00081e00) main_pane

0x4b6e,	// (0x00085e08) context_pane

0x4b81,	// (0x00085e1b) navi_pane

0x4bb8,	// (0x00085e52) popup_cale_events_window_ParamLimits

0x4bb8,	// (0x00085e52) popup_cale_events_window

0x4bd0,	// (0x00085e6a) popup_mup_playback_window

0x4bd8,	// (0x00085e72) signal_pane

0xdcaa,	// (0x0008ef44) main_browser_pane

0xde48,	// (0x0008f0e2) main_burst_pane

0x487a,	// (0x00085b14) main_calc_pane

0x488e,	// (0x00085b28) main_cale_day_pane

0x0f91,	// (0x0008222b) main_cale_month_pane

0x488e,	// (0x00085b28) main_cale_week_pane

0xde48,	// (0x0008f0e2) main_call_pane

0xd2c3,	// (0x0008e55d) main_call_poc_pane

0xde48,	// (0x0008f0e2) main_camera_pane

0xde48,	// (0x0008f0e2) main_chi_dic_pane

0xec13,	// (0x0008fead) main_clock_pane

0xd2c3,	// (0x0008e55d) main_fmradio_pane

0xde48,	// (0x0008f0e2) main_graph_messa_pane

0xd2c3,	// (0x0008e55d) main_help_pane

0xdcaa,	// (0x0008ef44) main_im_pane

0xd51e,	// (0x0008e7b8) main_image_pane_ParamLimits

0xd51e,	// (0x0008e7b8) main_image_pane

0xd2c3,	// (0x0008e55d) main_location2_pane

0xde48,	// (0x0008f0e2) main_location_pane

0xd51e,	// (0x0008e7b8) main_messa_pane

0xd2c3,	// (0x0008e55d) main_mp2_pane

0xde48,	// (0x0008f0e2) main_mp_pane

0xd2c3,	// (0x0008e55d) main_msg_pane

0xd2c3,	// (0x0008e55d) main_mup_eq_pane

0xd2c3,	// (0x0008e55d) main_mup_pane

0xdcaa,	// (0x0008ef44) main_notes_pane

0xd2c3,	// (0x0008e55d) main_pec_pane

0xd2c3,	// (0x0008e55d) main_phob_pane

0xd2c3,	// (0x0008e55d) main_pinb_pane

0xd2c3,	// (0x0008e55d) main_postcard_pane

0xd2c3,	// (0x0008e55d) main_qdial_pane

0xde48,	// (0x0008f0e2) main_skin_pane

0xd2c3,	// (0x0008e55d) main_smil2_pane

0xde48,	// (0x0008f0e2) main_smil_pane

0xde48,	// (0x0008f0e2) main_video_pane

0xde48,	// (0x0008f0e2) main_video_tele_pane

0xd51e,	// (0x0008e7b8) main_viewer_pane_ParamLimits

0xd51e,	// (0x0008e7b8) main_viewer_pane

0xde48,	// (0x0008f0e2) main_vorec_pane

0x48dc,	// (0x00085b76) popup_blid_sat_info_window_ParamLimits

0x48dc,	// (0x00085b76) popup_blid_sat_info_window

0x4940,	// (0x00085bda) popup_dyc_status_message_window_ParamLimits

0x4940,	// (0x00085bda) popup_dyc_status_message_window

0x495a,	// (0x00085bf4) popup_grid_large_graphic_window_ParamLimits

0x495a,	// (0x00085bf4) popup_grid_large_graphic_window

0x4a1c,	// (0x00085cb6) popup_loc_request_window_ParamLimits

0x4a1c,	// (0x00085cb6) popup_loc_request_window

0x4b42,	// (0x00085ddc) popup_wml_address_window_ParamLimits

0x4b42,	// (0x00085ddc) popup_wml_address_window

0x467f,	// (0x00085919) call_muted_g1

0x34c9,	// (0x00084763) popup_call_audio_conf_window_ParamLimits

0x34c9,	// (0x00084763) popup_call_audio_conf_window

0x468f,	// (0x00085929) popup_call_audio_first_window_ParamLimits

0x468f,	// (0x00085929) popup_call_audio_first_window

0x4705,	// (0x0008599f) popup_call_audio_in_window_ParamLimits

0x4705,	// (0x0008599f) popup_call_audio_in_window

0x4741,	// (0x000859db) popup_call_audio_out_window_ParamLimits

0x4741,	// (0x000859db) popup_call_audio_out_window

0x477b,	// (0x00085a15) popup_call_audio_second_window_ParamLimits

0x477b,	// (0x00085a15) popup_call_audio_second_window

0x47d1,	// (0x00085a6b) popup_call_audio_wait_window_ParamLimits

0x47d1,	// (0x00085a6b) popup_call_audio_wait_window

0x4806,	// (0x00085aa0) popup_number_entry_window_ParamLimits

0x4806,	// (0x00085aa0) popup_number_entry_window

0xc24c,	// (0x0008d4e6) bg_popup_call_pane_cp05_ParamLimits

0xc24c,	// (0x0008d4e6) bg_popup_call_pane_cp05

0xc26c,	// (0x0008d506) popup_number_entry_window_t1

0xc27f,	// (0x0008d519) popup_number_entry_window_t2

0xc291,	// (0x0008d52b) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x000902da) popup_number_entry_window_t

0xc2d8,	// (0x0008d572) text_title_cp2

0xc2eb,	// (0x0008d585) bg_popup_call_pane_cp_ParamLimits

0xc2eb,	// (0x0008d585) bg_popup_call_pane_cp

0xc2f9,	// (0x0008d593) call_thumbnail_pane

0xc301,	// (0x0008d59b) popup_call_audio_in_window_g1_ParamLimits

0xc301,	// (0x0008d59b) popup_call_audio_in_window_g1

0xc30d,	// (0x0008d5a7) popup_call_audio_in_window_g2_ParamLimits

0xc30d,	// (0x0008d5a7) popup_call_audio_in_window_g2

0xc319,	// (0x0008d5b3) popup_call_audio_in_window_g3_ParamLimits

0xc319,	// (0x0008d5b3) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x000902e3) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x000902e3) popup_call_audio_in_window_g

0xcf54,	// (0x0008e1ee) popup_call_audio_in_window_t1_ParamLimits

0xcf54,	// (0x0008e1ee) popup_call_audio_in_window_t1

0xcf70,	// (0x0008e20a) popup_call_audio_in_window_t2_ParamLimits

0xcf70,	// (0x0008e20a) popup_call_audio_in_window_t2

0xcf8c,	// (0x0008e226) popup_call_audio_in_window_t3_ParamLimits

0xcf8c,	// (0x0008e226) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x000902ea) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x000902ea) popup_call_audio_in_window_t

0xc2eb,	// (0x0008d585) bg_popup_call_pane_cp01_ParamLimits

0xc2eb,	// (0x0008d585) bg_popup_call_pane_cp01

0xc2f9,	// (0x0008d593) call_thumbnail_pane_cp02

0xcf9f,	// (0x0008e239) call_type_pane_cp022

0xcfa7,	// (0x0008e241) popup_call_audio_out_window_g1_ParamLimits

0xcfa7,	// (0x0008e241) popup_call_audio_out_window_g1

0xcfb9,	// (0x0008e253) popup_call_audio_out_window_g2_ParamLimits

0xcfb9,	// (0x0008e253) popup_call_audio_out_window_g2

0xcfc5,	// (0x0008e25f) popup_call_audio_out_window_g3_ParamLimits

0xcfc5,	// (0x0008e25f) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x000902f1) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x000902f1) popup_call_audio_out_window_g

0xcfd7,	// (0x0008e271) popup_call_audio_out_window_t1_ParamLimits

0xcfd7,	// (0x0008e271) popup_call_audio_out_window_t1

0xcfef,	// (0x0008e289) popup_call_audio_out_window_t2_ParamLimits

0xcfef,	// (0x0008e289) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x000902f8) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x000902f8) popup_call_audio_out_window_t

0xd004,	// (0x0008e29e) bg_popup_call_pane_ParamLimits

0xd004,	// (0x0008e29e) bg_popup_call_pane

0x0ceb,	// (0x00081f85) call_thumbnail_pane_cp_ParamLimits

0x0ceb,	// (0x00081f85) call_thumbnail_pane_cp

0xd088,	// (0x0008e322) call_type_pane_cp01_ParamLimits

0xd088,	// (0x0008e322) call_type_pane_cp01

0xd0cc,	// (0x0008e366) popup_call_audio_first_window_g1_ParamLimits

0xd0cc,	// (0x0008e366) popup_call_audio_first_window_g1

0xd118,	// (0x0008e3b2) popup_call_audio_first_window_g2_ParamLimits

0xd118,	// (0x0008e3b2) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x000902fd) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x000902fd) popup_call_audio_first_window_g

0xd15c,	// (0x0008e3f6) popup_call_audio_first_window_t1_ParamLimits

0xd15c,	// (0x0008e3f6) popup_call_audio_first_window_t1

0xd208,	// (0x0008e4a2) popup_call_audio_first_window_t4_ParamLimits

0xd208,	// (0x0008e4a2) popup_call_audio_first_window_t4

0xd294,	// (0x0008e52e) popup_call_audio_first_window_t5_ParamLimits

0xd294,	// (0x0008e52e) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00090302) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00090302) popup_call_audio_first_window_t

0xd2c3,	// (0x0008e55d) bg_popup_call_pane_cp02

0xd2cd,	// (0x0008e567) call_type_pane_cp023

0xd2d5,	// (0x0008e56f) popup_call_audio_wait_window_g1

0xd2dd,	// (0x0008e577) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00090309) popup_call_audio_wait_window_g

0xd2e5,	// (0x0008e57f) popup_call_audio_wait_window_t3

0xd2f3,	// (0x0008e58d) bg_popup_call_pane_cp03_ParamLimits

0xd2f3,	// (0x0008e58d) bg_popup_call_pane_cp03

0xd353,	// (0x0008e5ed) call_thumbnail_pane_cp011_ParamLimits

0xd353,	// (0x0008e5ed) call_thumbnail_pane_cp011

0xd35f,	// (0x0008e5f9) call_type_pane_cp034_ParamLimits

0xd35f,	// (0x0008e5f9) call_type_pane_cp034

0xd39b,	// (0x0008e635) popup_call_audio_second_window_g1_ParamLimits

0xd39b,	// (0x0008e635) popup_call_audio_second_window_g1

0xd3d7,	// (0x0008e671) popup_call_audio_second_window_g2_ParamLimits

0xd3d7,	// (0x0008e671) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x0009030e) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x0009030e) popup_call_audio_second_window_g

0xd413,	// (0x0008e6ad) popup_call_audio_second_window_t1_ParamLimits

0xd413,	// (0x0008e6ad) popup_call_audio_second_window_t1

0xd494,	// (0x0008e72e) popup_call_audio_second_window_t2_ParamLimits

0xd494,	// (0x0008e72e) popup_call_audio_second_window_t2

0xd4ca,	// (0x0008e764) popup_call_audio_second_window_t3_ParamLimits

0xd4ca,	// (0x0008e764) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00090313) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00090313) popup_call_audio_second_window_t

0xd2c3,	// (0x0008e55d) bg_popup_call_pane_cp04

0xd500,	// (0x0008e79a) list_conf_pane

0xd508,	// (0x0008e7a2) popup_call_audio_conf_window_t1

0xd516,	// (0x0008e7b0) call_thumbnail_pane_g1

0xd51e,	// (0x0008e7b8) bg_pinb_pane_ParamLimits

0xd51e,	// (0x0008e7b8) bg_pinb_pane

0xd52c,	// (0x0008e7c6) find_pinb_pane

0xd51e,	// (0x0008e7b8) listscroll_pinb_pane_ParamLimits

0xd51e,	// (0x0008e7b8) listscroll_pinb_pane

0xd536,	// (0x0008e7d0) pinb_bg_pane_g1

0xd536,	// (0x0008e7d0) pinb_bg_pane_g2

0xd536,	// (0x0008e7d0) pinb_bg_pane_g3

0xd536,	// (0x0008e7d0) pinb_bg_pane_g4

0xd536,	// (0x0008e7d0) pinb_bg_pane_g5

0xd536,	// (0x0008e7d0) pinb_bg_pane_g6

0xd536,	// (0x0008e7d0) pinb_bg_pane_g7

0xd536,	// (0x0008e7d0) pinb_bg_pane_g8

0xd536,	// (0x0008e7d0) pinb_bg_pane_g9

0xd536,	// (0x0008e7d0) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x0009031a) pinb_bg_pane_g

0xc242,	// (0x0008d4dc) grid_pinb_pane

0xc242,	// (0x0008d4dc) list_pinb_pane

0xcf46,	// (0x0008e1e0) scroll_pane_cp01_ParamLimits

0xcf46,	// (0x0008e1e0) scroll_pane_cp01

0xd540,	// (0x0008e7da) find_pinb_pane_g1_ParamLimits

0xd540,	// (0x0008e7da) find_pinb_pane_g1

0xd558,	// (0x0008e7f2) find_pinb_pane_t1

0xd56a,	// (0x0008e804) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x00090334) find_pinb_pane_t

0xd57f,	// (0x0008e819) input_focus_pane_cp01_ParamLimits

0xd57f,	// (0x0008e819) input_focus_pane_cp01

0xc325,	// (0x0008d5bf) cell_pinb_pane_ParamLimits

0xc325,	// (0x0008d5bf) cell_pinb_pane

0xd58b,	// (0x0008e825) cell_pinb_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) cell_pinb_pane_g1

0xd599,	// (0x0008e833) cell_pinb_pane_g2_ParamLimits

0xd599,	// (0x0008e833) cell_pinb_pane_g2

0xd599,	// (0x0008e833) cell_pinb_pane_g3_ParamLimits

0xd599,	// (0x0008e833) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00090339) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00090339) cell_pinb_pane_g

0xd2c3,	// (0x0008e55d) grid_highlight_pane_cp01

0xc325,	// (0x0008d5bf) list_pinb_item_pane_ParamLimits

0xc325,	// (0x0008d5bf) list_pinb_item_pane

0xc242,	// (0x0008d4dc) list_highlight_pane_cp02

0xd5a7,	// (0x0008e841) list_pinb_item_pane_g1_ParamLimits

0xd5a7,	// (0x0008e841) list_pinb_item_pane_g1

0xd599,	// (0x0008e833) list_pinb_item_pane_g2_ParamLimits

0xd599,	// (0x0008e833) list_pinb_item_pane_g2

0xd58b,	// (0x0008e825) list_pinb_item_pane_g3_ParamLimits

0xd58b,	// (0x0008e825) list_pinb_item_pane_g3

0xd599,	// (0x0008e833) list_pinb_item_pane_g4_ParamLimits

0xd599,	// (0x0008e833) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00090340) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00090340) list_pinb_item_pane_g

0xd5b5,	// (0x0008e84f) list_pinb_item_pane_t1_ParamLimits

0xd5b5,	// (0x0008e84f) list_pinb_item_pane_t1

0x0d2f,	// (0x00081fc9) calc_display_pane

0x0d54,	// (0x00081fee) calc_paper_pane

0x0d77,	// (0x00082011) grid_calc_pane

0xc242,	// (0x0008d4dc) bg_list_pane_cp01

0xdc4c,	// (0x0008eee6) clock_g1

0xdc4c,	// (0x0008eee6) clock_g2

0x0001,

0xf0af,	// (0x00090349) clock_g

0xdc56,	// (0x0008eef0) clock_t1_ParamLimits

0xdc56,	// (0x0008eef0) clock_t1

0xdc6a,	// (0x0008ef04) clock_t2_ParamLimits

0xdc6a,	// (0x0008ef04) clock_t2

0xdc6a,	// (0x0008ef04) clock_t3_ParamLimits

0xdc6a,	// (0x0008ef04) clock_t3

0xdc6a,	// (0x0008ef04) clock_t4_ParamLimits

0xdc6a,	// (0x0008ef04) clock_t4

0xdc56,	// (0x0008eef0) clock_t5_ParamLimits

0xdc56,	// (0x0008eef0) clock_t5

0xdc6a,	// (0x0008ef04) clock_t6_ParamLimits

0xdc6a,	// (0x0008ef04) clock_t6

0xdc6a,	// (0x0008ef04) clock_t7_ParamLimits

0xdc6a,	// (0x0008ef04) clock_t7

0xdc6a,	// (0x0008ef04) clock_t8_ParamLimits

0xdc6a,	// (0x0008ef04) clock_t8

0xdc6a,	// (0x0008ef04) clock_t9_ParamLimits

0xdc6a,	// (0x0008ef04) clock_t9

0x0008,

0xf0b4,	// (0x0009034e) clock_t_ParamLimits

0xf0b4,	// (0x0009034e) clock_t

0xc242,	// (0x0008d4dc) popup_clock_analogue_window_cp02

0xc242,	// (0x0008d4dc) popup_clock_digital_window_cp01

0xd2c3,	// (0x0008e55d) listscroll_help_pane

0xd2c3,	// (0x0008e55d) phob_pre_status_pane

0xdc7e,	// (0x0008ef18) grid_qdial_pane

0xd51e,	// (0x0008e7b8) listscroll_mce_pane

0xd51e,	// (0x0008e7b8) bg_notes_pane

0xdc88,	// (0x0008ef22) list_notes_pane

0x0da5,	// (0x0008203f) scroll_pane_cp06

0xdc96,	// (0x0008ef30) bg_calc_paper_pane

0xac80,	// (0x0008bf1a) list_calc_pane

0xdcaa,	// (0x0008ef44) bg_calc_display_pane

0x0db9,	// (0x00082053) calc_display_pane_t1

0x0dce,	// (0x00082068) calc_display_pane_t2

0xac9a,	// (0x0008bf34) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00090361) calc_display_pane_t

0x0de3,	// (0x0008207d) cell_calc_pane_ParamLimits

0x0de3,	// (0x0008207d) cell_calc_pane

0xdcb6,	// (0x0008ef50) bg_calc_paper_pane_g1

0xdcc2,	// (0x0008ef5c) bg_calc_paper_pane_g2

0xdcce,	// (0x0008ef68) bg_calc_paper_pane_g3

0xdcda,	// (0x0008ef74) bg_calc_paper_pane_g4

0xdce6,	// (0x0008ef80) bg_calc_paper_pane_g5

0x0e1e,	// (0x000820b8) bg_calc_paper_pane_g6

0x0e31,	// (0x000820cb) bg_calc_paper_pane_g7

0x0e44,	// (0x000820de) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00090368) bg_calc_paper_pane_g

0x0e57,	// (0x000820f1) calc_bg_paper_pane_g9

0x0e6a,	// (0x00082104) list_calc_item_pane_ParamLimits

0x0e6a,	// (0x00082104) list_calc_item_pane

0xdcf2,	// (0x0008ef8c) list_calc_item_pane_g1

0xacac,	// (0x0008bf46) list_calc_item_pane_t1_ParamLimits

0xacac,	// (0x0008bf46) list_calc_item_pane_t1

0x0e82,	// (0x0008211c) list_calc_item_pane_t2_ParamLimits

0x0e82,	// (0x0008211c) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00090379) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00090379) list_calc_item_pane_t

0xd536,	// (0x0008e7d0) cell_calc_pane_g1

0xdcff,	// (0x0008ef99) grid_highlight_pane_cp02

0xe955,	// (0x0008fbef) bg_calc_display_pane_g1

0x0eb4,	// (0x0008214e) bg_calc_display_pane_g2

0x0ebe,	// (0x00082158) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00090383) bg_calc_display_pane_g

0x0ec7,	// (0x00082161) cell_qdial_pane_ParamLimits

0x0ec7,	// (0x00082161) cell_qdial_pane

0x0edb,	// (0x00082175) cell_qdial_pane_g1_ParamLimits

0x0edb,	// (0x00082175) cell_qdial_pane_g1

0x0ef1,	// (0x0008218b) cell_qdial_pane_g2_ParamLimits

0x0ef1,	// (0x0008218b) cell_qdial_pane_g2

0xdd21,	// (0x0008efbb) cell_qdial_pane_g3_ParamLimits

0xdd21,	// (0x0008efbb) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x0009038a) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x0009038a) cell_qdial_pane_g

0x0f18,	// (0x000821b2) cell_qdial_pane_t1_ParamLimits

0x0f18,	// (0x000821b2) cell_qdial_pane_t1

0x0f30,	// (0x000821ca) cell_qdial_pane_t2_ParamLimits

0x0f30,	// (0x000821ca) cell_qdial_pane_t2

0x0f43,	// (0x000821dd) cell_qdial_pane_t3_ParamLimits

0x0f43,	// (0x000821dd) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00090393) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00090393) cell_qdial_pane_t

0xd2c3,	// (0x0008e55d) grid_highlight_pane_cp04

0xdd2d,	// (0x0008efc7) thumbnail_qdial_pane_ParamLimits

0xdd2d,	// (0x0008efc7) thumbnail_qdial_pane

0xdd89,	// (0x0008f023) list_help_pane

0xdd92,	// (0x0008f02c) scroll_pane_cp02

0x0f56,	// (0x000821f0) help_list_pane_t1_ParamLimits

0x0f56,	// (0x000821f0) help_list_pane_t1

0xacbe,	// (0x0008bf58) bg_notes_pane_g2

0xacc6,	// (0x0008bf60) bg_notes_pane_g3

0xacce,	// (0x0008bf68) notes_bg_pane_g1

0xacd6,	// (0x0008bf70) notes_bg_pane_g4

0xacde,	// (0x0008bf78) notes_bg_pane_g5

0xace6,	// (0x0008bf80) notes_bg_pane_g6

0xacee,	// (0x0008bf88) notes_bg_pane_g7

0xacf6,	// (0x0008bf90) notes_bg_pane_g8

0xacfe,	// (0x0008bf98) notes_bg_pane_g9

0x0006,

0xf117,	// (0x000903b1) notes_bg_pane_g

0x0f7a,	// (0x00082214) list_notes_text_pane_ParamLimits

0x0f7a,	// (0x00082214) list_notes_text_pane

0xdd9b,	// (0x0008f035) list_notes_text_pane_g1

0xad06,	// (0x0008bfa0) list_notes_text_pane_t1

0x0f91,	// (0x0008222b) listscroll_cale_week_pane

0x0fbb,	// (0x00082255) bg_cale_heading_pane

0x0fdf,	// (0x00082279) bg_cale_pane_cp01

0x0ffc,	// (0x00082296) cale_week_corner_pane

0x101b,	// (0x000822b5) cale_week_day_heading_pane

0x1044,	// (0x000822de) cale_week_scroll_pane_g1

0x1063,	// (0x000822fd) cale_week_scroll_pane_g2

0x107b,	// (0x00082315) cale_week_scroll_pane_g3

0x1093,	// (0x0008232d) cale_week_scroll_pane_g4

0x10ab,	// (0x00082345) cale_week_scroll_pane_g5

0x10cb,	// (0x00082365) cale_week_scroll_pane_g6

0x10eb,	// (0x00082385) cale_week_scroll_pane_g7

0x110f,	// (0x000823a9) cale_week_scroll_pane_g8

0x1133,	// (0x000823cd) cale_week_scroll_pane_g9

0x114b,	// (0x000823e5) cale_week_scroll_pane_g10

0x1163,	// (0x000823fd) cale_week_scroll_pane_g11

0x117b,	// (0x00082415) cale_week_scroll_pane_g12

0x119f,	// (0x00082439) cale_week_scroll_pane_g13

0x119f,	// (0x00082439) cale_week_scroll_pane_g14

0x119f,	// (0x00082439) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x000903c0) cale_week_scroll_pane_g

0x11e7,	// (0x00082481) cale_week_time_pane

0x120b,	// (0x000824a5) grid_cale_week_pane

0xddd0,	// (0x0008f06a) scroll_pane_cp08

0x123d,	// (0x000824d7) cell_cale_week_pane_ParamLimits

0x123d,	// (0x000824d7) cell_cale_week_pane

0x12d9,	// (0x00082573) cale_week_day_heading_pane_t1

0x1303,	// (0x0008259d) cale_week_day_heading_pane_t2

0x1332,	// (0x000825cc) cale_week_day_heading_pane_t3

0x1361,	// (0x000825fb) cale_week_day_heading_pane_t4

0x1390,	// (0x0008262a) cale_week_day_heading_pane_t5

0x13c3,	// (0x0008265d) cale_week_day_heading_pane_t6

0x13fa,	// (0x00082694) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x000903e1) cale_week_day_heading_pane_t

0xdded,	// (0x0008f087) bg_cale_side_pane

0x1424,	// (0x000826be) cale_week_time_pane_t1

0x143e,	// (0x000826d8) cale_week_time_pane_t2

0x1458,	// (0x000826f2) cale_week_time_pane_t3

0x1472,	// (0x0008270c) cale_week_time_pane_t4

0x148c,	// (0x00082726) cale_week_time_pane_t5

0x14a6,	// (0x00082740) cale_week_time_pane_t6

0x14c6,	// (0x00082760) cale_week_time_pane_t7

0x14ec,	// (0x00082786) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x000903f0) cale_week_time_pane_t

0x1512,	// (0x000827ac) cell_cale_week_pane_g2

0x1536,	// (0x000827d0) cell_cale_week_pane_g3_ParamLimits

0x1536,	// (0x000827d0) cell_cale_week_pane_g3

0xddfb,	// (0x0008f095) grid_highlight_pane_cp07

0xde03,	// (0x0008f09d) listscroll_gms_pane

0xde0d,	// (0x0008f0a7) grid_gms_pane

0xde16,	// (0x0008f0b0) listscroll_gms_pane_g1

0xde1e,	// (0x0008f0b8) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00090401) listscroll_gms_pane_g

0x154e,	// (0x000827e8) scroll_pane_cp010

0x1559,	// (0x000827f3) cell_gms_pane_ParamLimits

0x1559,	// (0x000827f3) cell_gms_pane

0x1570,	// (0x0008280a) cell_gms_pane_g1

0xde26,	// (0x0008f0c0) cell_gms_pane_g2

0xde2e,	// (0x0008f0c8) cell_gms_pane_g3

0xde37,	// (0x0008f0d1) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00090406) cell_gms_pane_g

0xde40,	// (0x0008f0da) grid_highlight_pane_cp09

0x4603,	// (0x0008589d) phob_pre_status_pane_g1

0x460b,	// (0x000858a5) phob_pre_status_pane_g2

0x4613,	// (0x000858ad) phob_pre_status_pane_g3

0x461b,	// (0x000858b5) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x000907b5) phob_pre_status_pane_g

0x462b,	// (0x000858c5) phob_pre_status_pane_t1

0x463b,	// (0x000858d5) phob_pre_status_pane_t2

0x464b,	// (0x000858e5) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x000907c0) phob_pre_status_pane_t

0xde48,	// (0x0008f0e2) bg_list_pane_cp05

0x1580,	// (0x0008281a) grid_vorec_pane

0x158a,	// (0x00082824) vorec_t1

0x1598,	// (0x00082832) vorec_t2

0x15a6,	// (0x00082840) vorec_t3

0x15b4,	// (0x0008284e) vorec_t4

0xc218,	// (0x0008d4b2) vorec_t5

0x9dbe,	// (0x0008b058) vorec_t6

0x0004,

0xf175,	// (0x0009040f) vorec_t

0x9dcc,	// (0x0008b066) wait_bar_pane_cp01

0x15d0,	// (0x0008286a) cell_vorec_pane_ParamLimits

0x15d0,	// (0x0008286a) cell_vorec_pane

0xad14,	// (0x0008bfae) cell_vorec_pane_g1

0xd2c3,	// (0x0008e55d) grid_highlight_pane_cp05

0xcf46,	// (0x0008e1e0) cams_zoom_pane

0xcf46,	// (0x0008e1e0) image_vga_pane

0xd58b,	// (0x0008e825) main_camera_pane_g1

0xd58b,	// (0x0008e825) main_camera_pane_g2

0xd58b,	// (0x0008e825) main_camera_pane_g3

0xd58b,	// (0x0008e825) main_camera_pane_g4

0xd58b,	// (0x0008e825) main_camera_pane_g5

0xd58b,	// (0x0008e825) main_camera_pane_g6

0xd58b,	// (0x0008e825) main_camera_pane_g7

0x0007,

0xf180,	// (0x0009041a) main_camera_pane_g

0xdc56,	// (0x0008eef0) main_camera_pane_t1

0xdc56,	// (0x0008eef0) main_camera_pane_t2

0x0001,

0xf191,	// (0x0009042b) main_camera_pane_t

0x15f9,	// (0x00082893) cams_zoom_pane_cp_ParamLimits

0x15f9,	// (0x00082893) cams_zoom_pane_cp

0x162d,	// (0x000828c7) image_cif_pane_ParamLimits

0x162d,	// (0x000828c7) image_cif_pane

0xc242,	// (0x0008d4dc) image_subqcif_pane

0x163f,	// (0x000828d9) main_video_pane_g1_ParamLimits

0x163f,	// (0x000828d9) main_video_pane_g1

0x166d,	// (0x00082907) main_video_pane_g2_ParamLimits

0x166d,	// (0x00082907) main_video_pane_g2

0x16a7,	// (0x00082941) main_video_pane_g3_ParamLimits

0x16a7,	// (0x00082941) main_video_pane_g3

0x16a7,	// (0x00082941) main_video_pane_g4_ParamLimits

0x16a7,	// (0x00082941) main_video_pane_g4

0x16db,	// (0x00082975) main_video_pane_g5_ParamLimits

0x16db,	// (0x00082975) main_video_pane_g5

0xde50,	// (0x0008f0ea) main_video_pane_g6_ParamLimits

0xde50,	// (0x0008f0ea) main_video_pane_g6

0x0006,

0xf196,	// (0x00090430) main_video_pane_g_ParamLimits

0xf196,	// (0x00090430) main_video_pane_g

0x16f7,	// (0x00082991) main_video_pane_t1_ParamLimits

0x16f7,	// (0x00082991) main_video_pane_t1

0xdc4c,	// (0x0008eee6) cams_zoom_pane_g1

0xdc4c,	// (0x0008eee6) cams_zoom_pane_g2

0xdc4c,	// (0x0008eee6) cams_zoom_pane_g3

0xdc4c,	// (0x0008eee6) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x0009043f) cams_zoom_pane_g

0xcf46,	// (0x0008e1e0) grid_cams_pane

0xcf46,	// (0x0008e1e0) linegrid_cams_pane

0x173b,	// (0x000829d5) cell_cams_pane_ParamLimits

0x173b,	// (0x000829d5) cell_cams_pane

0xc242,	// (0x0008d4dc) cams_burst_image_pane

0xdc4c,	// (0x0008eee6) cell_cams_pane_g1

0xc242,	// (0x0008d4dc) grid_highlight_pane_cp03

0xd536,	// (0x0008e7d0) mp_bg_pane_g1

0xc242,	// (0x0008d4dc) bg_list_pane_cp03

0xc242,	// (0x0008d4dc) bg_mp_pane

0xc242,	// (0x0008d4dc) grid_mp_pane

0xdc4c,	// (0x0008eee6) media_player_g1

0xe9a8,	// (0x0008fc42) media_player_t1

0xe9a8,	// (0x0008fc42) media_player_t2

0xe9a8,	// (0x0008fc42) media_player_t3

0xe9a8,	// (0x0008fc42) media_player_t4

0xe9a8,	// (0x0008fc42) media_player_t5

0xe9a8,	// (0x0008fc42) media_player_t6

0xe9a8,	// (0x0008fc42) media_player_t7

0x0006,

0xf505,	// (0x0009079f) media_player_t

0xc242,	// (0x0008d4dc) wait_bar_pane_cp02

0xf4ea,	// (0x00090784) main_usb_pane_t

0xec13,	// (0x0008fead) cell_mp_pane

0xd536,	// (0x0008e7d0) cell_mp_pane_g1

0xd2c3,	// (0x0008e55d) grid_highlight_pane_cp06

0xde6a,	// (0x0008f104) grid_skin_colour_pane

0xde72,	// (0x0008f10c) list_highlight_pane_cp03

0x1750,	// (0x000829ea) skin_g1

0xde7a,	// (0x0008f114) skin_t1

0xde89,	// (0x0008f123) skin_t2

0x0001,

0xf1d3,	// (0x0009046d) skin_t

0x1758,	// (0x000829f2) cell_skin_colour_pane_ParamLimits

0x1758,	// (0x000829f2) cell_skin_colour_pane

0xde97,	// (0x0008f131) cell_skin_colour_pane_g1

0x17cb,	// (0x00082a65) call_video_g1_ParamLimits

0x17cb,	// (0x00082a65) call_video_g1

0x17e7,	// (0x00082a81) call_video_g2_ParamLimits

0x17e7,	// (0x00082a81) call_video_g2

0x0001,

0xf1d8,	// (0x00090472) call_video_g_ParamLimits

0xf1d8,	// (0x00090472) call_video_g

0x182c,	// (0x00082ac6) call_video_uplink_pane_cp1_ParamLimits

0x182c,	// (0x00082ac6) call_video_uplink_pane_cp1

0xdea9,	// (0x0008f143) call_video_uplink_pane_cp2

0x18cd,	// (0x00082b67) video_down_crop_pane_ParamLimits

0x18cd,	// (0x00082b67) video_down_crop_pane

0x19b6,	// (0x00082c50) video_down_pane_ParamLimits

0x19b6,	// (0x00082c50) video_down_pane

0xdeb1,	// (0x0008f14b) video_down_subqcif_pane_ParamLimits

0xdeb1,	// (0x0008f14b) video_down_subqcif_pane

0xdecb,	// (0x0008f165) video_down_subqcif_pane_cp_ParamLimits

0xdecb,	// (0x0008f165) video_down_subqcif_pane_cp

0xdef3,	// (0x0008f18d) im_reading_pane_ParamLimits

0xdef3,	// (0x0008f18d) im_reading_pane

0x1ac1,	// (0x00082d5b) im_writing_pane_ParamLimits

0x1ac1,	// (0x00082d5b) im_writing_pane

0x1adf,	// (0x00082d79) im_reading_pane_t1

0xdf0d,	// (0x0008f1a7) list_im_pane

0xdf1e,	// (0x0008f1b8) scroll_pane_cp07

0x1b1e,	// (0x00082db8) im_writing_pane_t1_ParamLimits

0x1b1e,	// (0x00082db8) im_writing_pane_t1

0xdf37,	// (0x0008f1d1) im_writing_pane_t2_ParamLimits

0xdf37,	// (0x0008f1d1) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x0009047c) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x0009047c) im_writing_pane_t

0xd2c3,	// (0x0008e55d) input_focus_pane_cp04

0xd2c3,	// (0x0008e55d) input_focus_pane_cp05

0x1b33,	// (0x00082dcd) list_im_single_pane_ParamLimits

0x1b33,	// (0x00082dcd) list_im_single_pane

0xdf54,	// (0x0008f1ee) list_single_im_pane_t1

0xde48,	// (0x0008f0e2) blid_accuracy_pane

0xde48,	// (0x0008f0e2) blid_compass_pane

0x45f4,	// (0x0008588e) main_location_t1

0x45f4,	// (0x0008588e) main_location_t2

0x45f4,	// (0x0008588e) main_location_t3

0x0002,

0xf514,	// (0x000907ae) main_location_t

0xd2c3,	// (0x0008e55d) aid_levels_location

0xd536,	// (0x0008e7d0) blid_accuracy_pane_g1

0xd536,	// (0x0008e7d0) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x000904cb) blid_accuracy_pane_g

0xdf8e,	// (0x0008f228) wml_content_pane

0xdfcc,	// (0x0008f266) wml_button_pane_ParamLimits

0xdfcc,	// (0x0008f266) wml_button_pane

0x1b49,	// (0x00082de3) wml_list_single_large_pane_ParamLimits

0x1b49,	// (0x00082de3) wml_list_single_large_pane

0x1b62,	// (0x00082dfc) wml_list_single_medium_pane_ParamLimits

0x1b62,	// (0x00082dfc) wml_list_single_medium_pane

0x1b7c,	// (0x00082e16) wml_list_single_small_pane_ParamLimits

0x1b7c,	// (0x00082e16) wml_list_single_small_pane

0xdfe0,	// (0x0008f27a) wml_selection_box_pane_ParamLimits

0xdfe0,	// (0x0008f27a) wml_selection_box_pane

0xdff3,	// (0x0008f28d) wml_list_single_pane_t1

0xe002,	// (0x0008f29c) wml_list_single_medium_pane_t1

0xe011,	// (0x0008f2ab) wml_list_single_large_pane_t1

0xe020,	// (0x0008f2ba) input_focus_pane_cp02_ParamLimits

0xe020,	// (0x0008f2ba) input_focus_pane_cp02

0xe033,	// (0x0008f2cd) wml_selection_box_pane_g1

0xe03c,	// (0x0008f2d6) wml_selection_box_pane_t1_ParamLimits

0xe03c,	// (0x0008f2d6) wml_selection_box_pane_t1

0xd51e,	// (0x0008e7b8) bg_wml_button_pane_ParamLimits

0xd51e,	// (0x0008e7b8) bg_wml_button_pane

0xe054,	// (0x0008f2ee) wml_button_pane_g1

0xe05c,	// (0x0008f2f6) wml_button_pane_t1

0xe054,	// (0x0008f2ee) wml_button_bg_pane_g1

0xe06c,	// (0x0008f306) wml_button_bg_pane_g2

0xe074,	// (0x0008f30e) wml_button_bg_pane_g3

0xe07c,	// (0x0008f316) wml_button_bg_pane_g4

0xe084,	// (0x0008f31e) wml_button_bg_pane_g5

0xe08c,	// (0x0008f326) wml_button_bg_pane_g6

0xe094,	// (0x0008f32e) wml_button_bg_pane_g7

0xe09c,	// (0x0008f336) wml_button_bg_pane_g8

0xe0a4,	// (0x0008f33e) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00090481) wml_button_bg_pane_g

0x1b98,	// (0x00082e32) bg_list_pane_cp02

0xe0ac,	// (0x0008f346) mce_header_pane_ParamLimits

0xe0ac,	// (0x0008f346) mce_header_pane

0xe0c2,	// (0x0008f35c) mce_icon_pane

0xe0c2,	// (0x0008f35c) mce_image_pane

0xe0cb,	// (0x0008f365) mce_text_pane_ParamLimits

0xe0cb,	// (0x0008f365) mce_text_pane

0x1ba2,	// (0x00082e3c) scroll_pane_cp03

0xdfc4,	// (0x0008f25e) scroll_pane_cp04

0xe0de,	// (0x0008f378) scroll_pane_cp05_ParamLimits

0xe0de,	// (0x0008f378) scroll_pane_cp05

0x1bac,	// (0x00082e46) mce_header_field_pane_ParamLimits

0x1bac,	// (0x00082e46) mce_header_field_pane

0x1bc5,	// (0x00082e5f) mce_header_field_pane_2_ParamLimits

0x1bc5,	// (0x00082e5f) mce_header_field_pane_2

0x1bdb,	// (0x00082e75) mce_header_field_pane_3

0x1be3,	// (0x00082e7d) list_single_mce_message_pane_ParamLimits

0x1be3,	// (0x00082e7d) list_single_mce_message_pane

0x1bff,	// (0x00082e99) list_single_mce_smart_pane_ParamLimits

0x1bff,	// (0x00082e99) list_single_mce_smart_pane

0xe0ea,	// (0x0008f384) input_focus_pane_cp03

0xe0f3,	// (0x0008f38d) list_header_data_pane

0x1c26,	// (0x00082ec0) mce_header_field_pane_t1

0x1c36,	// (0x00082ed0) list_single_mce_header_pane_ParamLimits

0x1c36,	// (0x00082ed0) list_single_mce_header_pane

0xe0fb,	// (0x0008f395) list_single_mce_header_pane_t1

0xe10a,	// (0x0008f3a4) list_single_mce_message_pane_g1

0xe112,	// (0x0008f3ac) list_single_mce_message_pane_t1

0x1c70,	// (0x00082f0a) bg_cale_heading_pane_cp01_ParamLimits

0x1c70,	// (0x00082f0a) bg_cale_heading_pane_cp01

0xe120,	// (0x0008f3ba) bg_cale_pane_cp02_ParamLimits

0xe120,	// (0x0008f3ba) bg_cale_pane_cp02

0x1cc2,	// (0x00082f5c) cale_month_corner_pane

0x1ce1,	// (0x00082f7b) cale_month_day_heading_pane_ParamLimits

0x1ce1,	// (0x00082f7b) cale_month_day_heading_pane

0x1d4b,	// (0x00082fe5) cale_month_pane_g1_ParamLimits

0x1d4b,	// (0x00082fe5) cale_month_pane_g1

0x1d92,	// (0x0008302c) cale_month_pane_g2_ParamLimits

0x1d92,	// (0x0008302c) cale_month_pane_g2

0x1dce,	// (0x00083068) cale_month_pane_g3_ParamLimits

0x1dce,	// (0x00083068) cale_month_pane_g3

0x1e22,	// (0x000830bc) cale_month_pane_g4_ParamLimits

0x1e22,	// (0x000830bc) cale_month_pane_g4

0x1e76,	// (0x00083110) cale_month_pane_g5_ParamLimits

0x1e76,	// (0x00083110) cale_month_pane_g5

0x1ed2,	// (0x0008316c) cale_month_pane_g6_ParamLimits

0x1ed2,	// (0x0008316c) cale_month_pane_g6

0x1f3a,	// (0x000831d4) cale_month_pane_g7_ParamLimits

0x1f3a,	// (0x000831d4) cale_month_pane_g7

0x1fa6,	// (0x00083240) cale_month_pane_g8_ParamLimits

0x1fa6,	// (0x00083240) cale_month_pane_g8

0x2012,	// (0x000832ac) cale_month_pane_g9_ParamLimits

0x2012,	// (0x000832ac) cale_month_pane_g9

0x2076,	// (0x00083310) cale_month_pane_g10_ParamLimits

0x2076,	// (0x00083310) cale_month_pane_g10

0x20c8,	// (0x00083362) cale_month_pane_g11_ParamLimits

0x20c8,	// (0x00083362) cale_month_pane_g11

0x211a,	// (0x000833b4) cale_month_pane_g12_ParamLimits

0x211a,	// (0x000833b4) cale_month_pane_g12

0x2172,	// (0x0008340c) cale_month_pane_g13_ParamLimits

0x2172,	// (0x0008340c) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00090494) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00090494) cale_month_pane_g

0x21ca,	// (0x00083464) cale_month_week_pane

0x21ee,	// (0x00083488) grid_cale_month_pane_ParamLimits

0x21ee,	// (0x00083488) grid_cale_month_pane

0x224f,	// (0x000834e9) cale_month_day_heading_pane_t1

0x22d5,	// (0x0008356f) cale_month_day_heading_pane_t2

0x234e,	// (0x000835e8) cale_month_day_heading_pane_t3

0x23c7,	// (0x00083661) cale_month_day_heading_pane_t4

0x2448,	// (0x000836e2) cale_month_day_heading_pane_t5

0x24d1,	// (0x0008376b) cale_month_day_heading_pane_t6

0x2562,	// (0x000837fc) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x000904af) cale_month_day_heading_pane_t

0xdded,	// (0x0008f087) bg_cale_side_pane_cp01

0x25f3,	// (0x0008388d) cale_month_week_pane_t1

0x260c,	// (0x000838a6) cale_month_week_pane_t2

0x2625,	// (0x000838bf) cale_month_week_pane_t3

0x263e,	// (0x000838d8) cale_month_week_pane_t4

0x2657,	// (0x000838f1) cale_month_week_pane_t5

0x2670,	// (0x0008390a) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x000904be) cale_month_week_pane_t

0x2695,	// (0x0008392f) cell_cale_month_pane_ParamLimits

0x2695,	// (0x0008392f) cell_cale_month_pane

0xad1e,	// (0x0008bfb8) cell_cale_month_pane_g1

0x27d3,	// (0x00083a6d) cell_cale_month_pane_t1_ParamLimits

0x27d3,	// (0x00083a6d) cell_cale_month_pane_t1

0xddfb,	// (0x0008f095) grid_highlight_pane_cp08

0xd536,	// (0x0008e7d0) main_smil_g1

0x27ff,	// (0x00083a99) smil_status_pane

0xe15f,	// (0x0008f3f9) smil_text_pane

0x4502,	// (0x0008579c) bg_popup_call3_rect_pane_g8

0x450a,	// (0x000857a4) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x00090747) bg_popup_call3_rect_pane_g

0x4c73,	// (0x00085f0d) smil_status_volume_pane_g1

0xe169,	// (0x0008f403) smil_status_pane_t1

0xae89,	// (0x0008c123) volume_smil_pane

0xe180,	// (0x0008f41a) list_smil_text_pane

0x2814,	// (0x00083aae) scroll_pane_cp011

0x281f,	// (0x00083ab9) smil_text_list_pane_t1_ParamLimits

0x281f,	// (0x00083ab9) smil_text_list_pane_t1

0xad2a,	// (0x0008bfc4) aid_volume_smil_ParamLimits

0xad2a,	// (0x0008bfc4) aid_volume_smil

0xd536,	// (0x0008e7d0) smil_volume_pane_g1

0xd536,	// (0x0008e7d0) smil_volume_pane_g2

0x0001,

0xf231,	// (0x000904cb) smil_volume_pane_g

0x0f91,	// (0x0008222b) listscroll_cale_day_pane

0xe18a,	// (0x0008f424) bg_cale_pane

0xe1a2,	// (0x0008f43c) list_cale_pane

0xe1c5,	// (0x0008f45f) scroll_pane_cp09

0xe1d6,	// (0x0008f470) cale_bg_pane_g1

0xe1de,	// (0x0008f478) cale_bg_pane_g2

0xe1e6,	// (0x0008f480) cale_bg_pane_g3

0xe1ee,	// (0x0008f488) cale_bg_pane_g4

0xe1f6,	// (0x0008f490) cale_bg_pane_g5

0xe1fe,	// (0x0008f498) cale_bg_pane_g6

0xe206,	// (0x0008f4a0) cale_bg_pane_g7

0xe20e,	// (0x0008f4a8) cale_bg_pane_g8

0xe216,	// (0x0008f4b0) cale_bg_pane_g9

0x0008,

0xf236,	// (0x000904d0) cale_bg_pane_g

0xe21e,	// (0x0008f4b8) list_cale_time_pane_ParamLimits

0xe21e,	// (0x0008f4b8) list_cale_time_pane

0xe235,	// (0x0008f4cf) list_cale_time_pane_g1_ParamLimits

0xe235,	// (0x0008f4cf) list_cale_time_pane_g1

0xe241,	// (0x0008f4db) list_cale_time_pane_g2_ParamLimits

0xe241,	// (0x0008f4db) list_cale_time_pane_g2

0x2873,	// (0x00083b0d) list_cale_time_pane_g3_ParamLimits

0x2873,	// (0x00083b0d) list_cale_time_pane_g3

0x2881,	// (0x00083b1b) list_cale_time_pane_g4_ParamLimits

0x2881,	// (0x00083b1b) list_cale_time_pane_g4

0x288f,	// (0x00083b29) list_cale_time_pane_g5_ParamLimits

0x288f,	// (0x00083b29) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x000904e3) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x000904e3) list_cale_time_pane_g

0xe25b,	// (0x0008f4f5) list_cale_time_pane_t1_ParamLimits

0xe25b,	// (0x0008f4f5) list_cale_time_pane_t1

0xe283,	// (0x0008f51d) list_cale_time_pane_t2_ParamLimits

0xe283,	// (0x0008f51d) list_cale_time_pane_t2

0x2b41,	// (0x00083ddb) aid_blid_cardinal_pane

0x2b7f,	// (0x00083e19) compass_pane_t4

0xe2ab,	// (0x0008f545) list_cale_time_pane_t4_ParamLimits

0xe2ab,	// (0x0008f545) list_cale_time_pane_t4

0x2b8d,	// (0x00083e27) compass_pane_t5

0x2b9d,	// (0x00083e37) compass_pane_t6

0x2bab,	// (0x00083e45) compass_pane_t7

0xecc3,	// (0x0008ff5d) navi_pane_cc_t1

0xee10,	// (0x000900aa) aid_phob_thumbnail_center_pane

0x3065,	// (0x000842ff) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x000904f0) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x000904f0) list_cale_time_pane_t

0xc2eb,	// (0x0008d585) bg_popup_window_pane_cp02_ParamLimits

0xc2eb,	// (0x0008d585) bg_popup_window_pane_cp02

0xe2d3,	// (0x0008f56d) heading_pane_cp01_ParamLimits

0xe2d3,	// (0x0008f56d) heading_pane_cp01

0xe2df,	// (0x0008f579) loc_req_pane_ParamLimits

0xe2df,	// (0x0008f579) loc_req_pane

0xe2ef,	// (0x0008f589) loc_type_pane_ParamLimits

0xe2ef,	// (0x0008f589) loc_type_pane

0xe301,	// (0x0008f59b) loc_type_pane_t1_ParamLimits

0xe301,	// (0x0008f59b) loc_type_pane_t1

0xe313,	// (0x0008f5ad) loc_type_pane_t2_ParamLimits

0xe313,	// (0x0008f5ad) loc_type_pane_t2

0xe325,	// (0x0008f5bf) loc_type_pane_t3_ParamLimits

0xe325,	// (0x0008f5bf) loc_type_pane_t3

0x0002,

0xf25d,	// (0x000904f7) loc_type_pane_t_ParamLimits

0xf25d,	// (0x000904f7) loc_type_pane_t

0xe337,	// (0x0008f5d1) list_loc_req_pane

0xe341,	// (0x0008f5db) scroll_pane_cp012

0x289d,	// (0x00083b37) list_single_loc_request_popup_menu_pane_ParamLimits

0x289d,	// (0x00083b37) list_single_loc_request_popup_menu_pane

0xe34c,	// (0x0008f5e6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe34c,	// (0x0008f5e6) list_single_loc_request_popup_menu_pane_g1

0xe358,	// (0x0008f5f2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe358,	// (0x0008f5f2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x000904fe) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x000904fe) list_single_loc_request_popup_menu_pane_g

0xe95e,	// (0x0008fbf8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe95e,	// (0x0008fbf8) list_single_loc_request_popup_menu_pane_t1

0xd51e,	// (0x0008e7b8) bg_popup_window_pane_cp03_ParamLimits

0xd51e,	// (0x0008e7b8) bg_popup_window_pane_cp03

0xe974,	// (0x0008fc0e) heading_loc_req_pane_ParamLimits

0xe974,	// (0x0008fc0e) heading_loc_req_pane

0x28aa,	// (0x00083b44) popup_dyc_status_message_window_g1_ParamLimits

0x28aa,	// (0x00083b44) popup_dyc_status_message_window_g1

0x28be,	// (0x00083b58) popup_dyc_status_message_window_t1_ParamLimits

0x28be,	// (0x00083b58) popup_dyc_status_message_window_t1

0x28d3,	// (0x00083b6d) popup_dyc_status_message_window_t2_ParamLimits

0x28d3,	// (0x00083b6d) popup_dyc_status_message_window_t2

0x28e8,	// (0x00083b82) popup_dyc_status_message_window_t3_ParamLimits

0x28e8,	// (0x00083b82) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x00090503) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x00090503) popup_dyc_status_message_window_t

0xd2c3,	// (0x0008e55d) bg_heading_pane_cp01

0xe980,	// (0x0008fc1a) heading_loc_req_pane_g1

0xe988,	// (0x0008fc22) heading_loc_req_pane_g2

0xe990,	// (0x0008fc2a) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x0009050a) heading_loc_req_pane_g

0xe998,	// (0x0008fc32) heading_loc_req_pane_t1

0xe9b8,	// (0x0008fc52) bg_popup_sub_pane_cp01_ParamLimits

0xe9b8,	// (0x0008fc52) bg_popup_sub_pane_cp01

0xe9c6,	// (0x0008fc60) popup_cale_events_window_g1_ParamLimits

0xe9c6,	// (0x0008fc60) popup_cale_events_window_g1

0xe9e6,	// (0x0008fc80) popup_cale_events_window_g2_ParamLimits

0xe9e6,	// (0x0008fc80) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x0009052c) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x0009052c) popup_cale_events_window_g

0xea06,	// (0x0008fca0) popup_cale_events_window_t1_ParamLimits

0xea06,	// (0x0008fca0) popup_cale_events_window_t1

0xea18,	// (0x0008fcb2) popup_cale_events_window_t2_ParamLimits

0xea18,	// (0x0008fcb2) popup_cale_events_window_t2

0xea56,	// (0x0008fcf0) popup_cale_events_window_t3_ParamLimits

0xea56,	// (0x0008fcf0) popup_cale_events_window_t3

0xea90,	// (0x0008fd2a) popup_cale_events_window_t4_ParamLimits

0xea90,	// (0x0008fd2a) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x00090531) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x00090531) popup_cale_events_window_t

0x2910,	// (0x00083baa) call_type_pane

0x2920,	// (0x00083bba) popup_call_status_window_g1

0x2934,	// (0x00083bce) popup_call_status_window_g2

0x2948,	// (0x00083be2) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x0009053a) popup_call_status_window_g

0xeac6,	// (0x0008fd60) call_type_pane_g1

0xeacf,	// (0x0008fd69) call_type_pane_g2

0x0001,

0xf2a7,	// (0x00090541) call_type_pane_g

0xd2c3,	// (0x0008e55d) bg_popup_sub_pane_cp02

0xead8,	// (0x0008fd72) listscroll_popup_wml_pane

0xeae0,	// (0x0008fd7a) list_wml_pane

0xeaea,	// (0x0008fd84) scroll_pane_cp013

0xeaf5,	// (0x0008fd8f) list_single_graphic_popup_wml_pane_ParamLimits

0xeaf5,	// (0x0008fd8f) list_single_graphic_popup_wml_pane

0xd536,	// (0x0008e7d0) list_single_graphic_popup_wml_pane_g1

0xeb09,	// (0x0008fda3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x00090546) list_single_graphic_popup_wml_pane_g

0xeb11,	// (0x0008fdab) list_single_graphic_popup_wml_pane_t1

0xeb27,	// (0x0008fdc1) aid_call_pane

0xd516,	// (0x0008e7b0) popup_clock_analogue_window_g1

0xd516,	// (0x0008e7b0) popup_clock_analogue_window_g2

0xad4c,	// (0x0008bfe6) popup_clock_analogue_window_g3

0xad4c,	// (0x0008bfe6) popup_clock_analogue_window_g4

0xd536,	// (0x0008e7d0) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x0009054b) popup_clock_analogue_window_g

0xad54,	// (0x0008bfee) popup_clock_analogue_window_t1

0xad62,	// (0x0008bffc) clock_digital_number_pane_ParamLimits

0xad62,	// (0x0008bffc) clock_digital_number_pane

0xad6e,	// (0x0008c008) clock_digital_number_pane_cp02_ParamLimits

0xad6e,	// (0x0008c008) clock_digital_number_pane_cp02

0xad7a,	// (0x0008c014) clock_digital_number_pane_cp03_ParamLimits

0xad7a,	// (0x0008c014) clock_digital_number_pane_cp03

0xad86,	// (0x0008c020) clock_digital_number_pane_cp04_ParamLimits

0xad86,	// (0x0008c020) clock_digital_number_pane_cp04

0xad92,	// (0x0008c02c) clock_digital_separator_pane_ParamLimits

0xad92,	// (0x0008c02c) clock_digital_separator_pane

0xad9e,	// (0x0008c038) popup_clock_digital_window_t1

0xd536,	// (0x0008e7d0) clock_digital_number_pane_g1

0xd536,	// (0x0008e7d0) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x000904cb) clock_digital_number_pane_g

0xd536,	// (0x0008e7d0) clock_digital_separator_pane_g1

0xd536,	// (0x0008e7d0) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x000904cb) clock_digital_separator_pane_g

0xd2c3,	// (0x0008e55d) bg_popup_window_pane_cp04

0xeb2f,	// (0x0008fdc9) heading_pane_cp03

0xde48,	// (0x0008f0e2) listscroll_popup_gms_pane

0xd2c3,	// (0x0008e55d) grid_large_graphic_popup_pane

0xeb38,	// (0x0008fdd2) listscroll_popup_gms_pane_g1

0xeb41,	// (0x0008fddb) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x00090556) listscroll_popup_gms_pane_g

0xeb4a,	// (0x0008fde4) scroll_pane_cp014

0xc325,	// (0x0008d5bf) cell_large_graphic_popup_pane_ParamLimits

0xc325,	// (0x0008d5bf) cell_large_graphic_popup_pane

0xd58b,	// (0x0008e825) cell_large_graphic_popup_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) cell_large_graphic_popup_pane_g1

0xeb53,	// (0x0008fded) cell_large_graphic_popup_pane_g2_ParamLimits

0xeb53,	// (0x0008fded) cell_large_graphic_popup_pane_g2

0xeb61,	// (0x0008fdfb) cell_large_graphic_popup_pane_g3_ParamLimits

0xeb61,	// (0x0008fdfb) cell_large_graphic_popup_pane_g3

0xeb6f,	// (0x0008fe09) cell_large_graphic_popup_pane_g4_ParamLimits

0xeb6f,	// (0x0008fe09) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x0009055b) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x0009055b) cell_large_graphic_popup_pane_g

0xd2c3,	// (0x0008e55d) grid_highlight_pane_cp010

0xd536,	// (0x0008e7d0) bg_popup_call_pane_g1

0xeb80,	// (0x0008fe1a) list_single_graphic_popup_conf_pane_ParamLimits

0xeb80,	// (0x0008fe1a) list_single_graphic_popup_conf_pane

0xeb92,	// (0x0008fe2c) list_highlight_pane_cp01

0xeb9b,	// (0x0008fe35) list_single_graphic_popup_conf_pane_g1

0xeba3,	// (0x0008fe3d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x00090564) list_single_graphic_popup_conf_pane_g

0xebab,	// (0x0008fe45) list_single_graphic_popup_conf_pane_t1

0xebb9,	// (0x0008fe53) linegrid_cams_pane_g1

0x2958,	// (0x00083bf2) linegrid_cams_pane_g2

0xde2e,	// (0x0008f0c8) linegrid_cams_pane_g3

0xebc2,	// (0x0008fe5c) linegrid_cams_pane_g4

0x2961,	// (0x00083bfb) linegrid_cams_pane_g5

0x296a,	// (0x00083c04) linegrid_cams_pane_g6

0xde37,	// (0x0008f0d1) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x00090569) linegrid_cams_pane_g

0xebcb,	// (0x0008fe65) popup_clock_analogue_window

0xebcb,	// (0x0008fe65) popup_clock_digital_window

0xd2c3,	// (0x0008e55d) popup_phob_thumbnail_window

0xd536,	// (0x0008e7d0) call_video_uplink_pane_g1

0xebd4,	// (0x0008fe6e) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x00090578) call_video_uplink_pane_g

0xebdc,	// (0x0008fe76) video_uplink_pane

0xebe4,	// (0x0008fe7e) mce_image_pane_g1

0x2975,	// (0x00083c0f) mce_image_pane_g2

0x297f,	// (0x00083c19) mce_image_pane_g3

0x2989,	// (0x00083c23) mce_image_pane_g4

0x2991,	// (0x00083c2b) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x0009057d) mce_image_pane_g

0xebee,	// (0x0008fe88) control_top_pane_stacon_cp01_ParamLimits

0xebee,	// (0x0008fe88) control_top_pane_stacon_cp01

0xec02,	// (0x0008fe9c) uni_indicator_pane_stacon_cp01_ParamLimits

0xec02,	// (0x0008fe9c) uni_indicator_pane_stacon_cp01

0xec13,	// (0x0008fead) bg_popup_sub_pane_cp03

0x2999,	// (0x00083c33) chi_dic_find_pane

0x29a1,	// (0x00083c3b) listscroll_chi_dic_pane

0x29aa,	// (0x00083c44) main_pane_chidic_g1

0x29bd,	// (0x00083c57) chi_dic_find_pane_t1

0xec1d,	// (0x0008feb7) find_chidic_pane

0xec26,	// (0x0008fec0) chi_dic_list_pane_ParamLimits

0xec26,	// (0x0008fec0) chi_dic_list_pane

0xec37,	// (0x0008fed1) scroll_pane_cp020

0x29cb,	// (0x00083c65) find_chidic_pane_t1

0xd2c3,	// (0x0008e55d) input_focus_pane_cp06

0x29da,	// (0x00083c74) list_chi_dic_pane_ParamLimits

0x29da,	// (0x00083c74) list_chi_dic_pane

0x29ec,	// (0x00083c86) list_chi_dic_pane_t1_ParamLimits

0x29ec,	// (0x00083c86) list_chi_dic_pane_t1

0xd2c3,	// (0x0008e55d) list_highlight_pane_cp020

0xec3f,	// (0x0008fed9) bg_cale_heading_pane_g1

0x29ff,	// (0x00083c99) bg_cale_heading_pane_g2

0x2a07,	// (0x00083ca1) bg_cale_heading_pane_g3

0x2a0f,	// (0x00083ca9) bg_cale_heading_pane_g4

0x2a19,	// (0x00083cb3) bg_cale_heading_pane_g5

0x2a23,	// (0x00083cbd) bg_cale_heading_pane_g6

0x2a2b,	// (0x00083cc5) bg_cale_heading_pane_g7

0x2a33,	// (0x00083ccd) bg_cale_heading_pane_g8

0x2a3d,	// (0x00083cd7) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x00090588) bg_cale_heading_pane_g

0xec3f,	// (0x0008fed9) bg_cale_side_pane_g1

0x2a47,	// (0x00083ce1) bg_cale_side_pane_g2

0x2a51,	// (0x00083ceb) bg_cale_side_pane_g3

0x2a5b,	// (0x00083cf5) bg_cale_side_pane_g4

0x2a65,	// (0x00083cff) bg_cale_side_pane_g5

0x2a6f,	// (0x00083d09) bg_cale_side_pane_g6

0x2a79,	// (0x00083d13) bg_cale_side_pane_g7

0x2a83,	// (0x00083d1d) bg_cale_side_pane_g8

0x2a8b,	// (0x00083d25) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x0009059b) bg_cale_side_pane_g

0x2a93,	// (0x00083d2d) popup_call_status_window_ParamLimits

0x2a93,	// (0x00083d2d) popup_call_status_window

0xec47,	// (0x0008fee1) stacon_top_pane

0xec4f,	// (0x0008fee9) status_pane_ParamLimits

0xec4f,	// (0x0008fee9) status_pane

0xec64,	// (0x0008fefe) status_small_pane

0xec6c,	// (0x0008ff06) control_pane

0xd2c3,	// (0x0008e55d) stacon_bottom_pane

0xec74,	// (0x0008ff0e) list_single_mce_smart_pane_t1_ParamLimits

0xec74,	// (0x0008ff0e) list_single_mce_smart_pane_t1

0xec87,	// (0x0008ff21) list_single_mce_smart_pane_t2_ParamLimits

0xec87,	// (0x0008ff21) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x000905ae) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x000905ae) list_single_mce_smart_pane_t

0x2ae0,	// (0x00083d7a) compass_pane

0x2aeb,	// (0x00083d85) main_location2_pane_t1

0x2b01,	// (0x00083d9b) main_location2_pane_t2

0x2b17,	// (0x00083db1) main_location2_pane_t3

0x0003,

0xf319,	// (0x000905b3) main_location2_pane_t

0xeca6,	// (0x0008ff40) compass_pane_g1_ParamLimits

0xeca6,	// (0x0008ff40) compass_pane_g1

0x2b61,	// (0x00083dfb) compass_pane_t1

0x2b70,	// (0x00083e0a) compass_pane_t2

0x0005,

0xf322,	// (0x000905bc) compass_pane_t

0x2bbb,	// (0x00083e55) text_secondary_cp61

0xecba,	// (0x0008ff54) navi_pane_cams_g5

0xecdd,	// (0x0008ff77) navi_pane_im_t1

0xeceb,	// (0x0008ff85) navi_pane_mp_g1_ParamLimits

0xeceb,	// (0x0008ff85) navi_pane_mp_g1

0xecff,	// (0x0008ff99) navi_pane_mp_g2_ParamLimits

0xecff,	// (0x0008ff99) navi_pane_mp_g2

0xed0b,	// (0x0008ffa5) navi_pane_mp_g3_ParamLimits

0xed0b,	// (0x0008ffa5) navi_pane_mp_g3

0x0002,

0xf336,	// (0x000905d0) navi_pane_mp_g_ParamLimits

0xf336,	// (0x000905d0) navi_pane_mp_g

0xed17,	// (0x0008ffb1) navi_pane_mp_t1

0xed25,	// (0x0008ffbf) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x000905d7) navi_pane_mp_t

0xed61,	// (0x0008fffb) navi_pane_vt_g1

0xed17,	// (0x0008ffb1) navi_pane_vt_t1

0xed69,	// (0x00090003) navi_slider_pane

0xde48,	// (0x0008f0e2) zooming_pane

0xed71,	// (0x0009000b) navi_slider_pane_g1

0xadbb,	// (0x0008c055) navi_slider_pane_g2

0x0006,

0xf344,	// (0x000905de) navi_slider_pane_g

0xed95,	// (0x0009002f) aid_levels_zoom

0xed9d,	// (0x00090037) zooming_pane_g1

0xeda5,	// (0x0009003f) zooming_pane_g2

0xeda5,	// (0x0009003f) zooming_pane_g3

0x0002,

0xf353,	// (0x000905ed) zooming_pane_g

0xedad,	// (0x00090047) level_10_zoom

0xedb6,	// (0x00090050) level_11_zoom

0xedbf,	// (0x00090059) level_1_zoom

0xedc8,	// (0x00090062) level_2_zoom

0xedd1,	// (0x0009006b) level_3_zoom

0xedda,	// (0x00090074) level_4_zoom

0xede3,	// (0x0009007d) level_5_zoom

0xedec,	// (0x00090086) level_6_zoom

0xedf5,	// (0x0009008f) level_7_zoom

0xedfe,	// (0x00090098) level_8_zoom

0xee07,	// (0x000900a1) level_9_zoom

0xee18,	// (0x000900b2) popup_phob_thumbnail_window_g1

0xee20,	// (0x000900ba) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x000905f4) popup_phob_thumbnail_window_g

0x465b,	// (0x000858f5) level_1_location

0x4663,	// (0x000858fd) level_2_location

0x466b,	// (0x00085905) level_3_location

0x4675,	// (0x0008590f) level_4_location

0xde48,	// (0x0008f0e2) level_5_location

0x2d04,	// (0x00083f9e) mce_icon_pane_g1

0x2d0e,	// (0x00083fa8) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x000905f9) mce_icon_pane_g

0xee28,	// (0x000900c2) main_mup_pane_g1_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g1

0xee28,	// (0x000900c2) main_mup_pane_g2_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g2

0xee28,	// (0x000900c2) main_mup_pane_g3_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g3

0xee28,	// (0x000900c2) main_mup_pane_g4_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g4

0xee28,	// (0x000900c2) main_mup_pane_g5_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g5

0xee28,	// (0x000900c2) main_mup_pane_g6_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g6

0xee28,	// (0x000900c2) main_mup_pane_g7_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g7

0xee28,	// (0x000900c2) main_mup_pane_g8_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g8

0xee28,	// (0x000900c2) main_mup_pane_g9_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g9

0xee28,	// (0x000900c2) main_mup_pane_g10_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g10

0xee28,	// (0x000900c2) main_mup_pane_g11_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g11

0xd58b,	// (0x0008e825) main_mup_pane_g12_ParamLimits

0xd58b,	// (0x0008e825) main_mup_pane_g12

0xee28,	// (0x000900c2) main_mup_pane_g13_ParamLimits

0xee28,	// (0x000900c2) main_mup_pane_g13

0x000c,

0xf364,	// (0x000905fe) main_mup_pane_g_ParamLimits

0xf364,	// (0x000905fe) main_mup_pane_g

0xee36,	// (0x000900d0) main_mup_pane_t1_ParamLimits

0xee36,	// (0x000900d0) main_mup_pane_t1

0xee36,	// (0x000900d0) main_mup_pane_t2_ParamLimits

0xee36,	// (0x000900d0) main_mup_pane_t2

0xee36,	// (0x000900d0) main_mup_pane_t3_ParamLimits

0xee36,	// (0x000900d0) main_mup_pane_t3

0xdc56,	// (0x0008eef0) main_mup_pane_t4_ParamLimits

0xdc56,	// (0x0008eef0) main_mup_pane_t4

0xdc56,	// (0x0008eef0) main_mup_pane_t5_ParamLimits

0xdc56,	// (0x0008eef0) main_mup_pane_t5

0xdc6a,	// (0x0008ef04) main_mup_pane_t6_ParamLimits

0xdc6a,	// (0x0008ef04) main_mup_pane_t6

0x0005,

0xf37f,	// (0x00090619) main_mup_pane_t_ParamLimits

0xf37f,	// (0x00090619) main_mup_pane_t

0xc325,	// (0x0008d5bf) mup_progress_pane_ParamLimits

0xc325,	// (0x0008d5bf) mup_progress_pane

0xee4a,	// (0x000900e4) mup_visualizer_pane_ParamLimits

0xee4a,	// (0x000900e4) mup_visualizer_pane

0xee4a,	// (0x000900e4) mup_volume_pane_ParamLimits

0xee4a,	// (0x000900e4) mup_volume_pane

0xd599,	// (0x0008e833) mup_visualizer_pane_g1_ParamLimits

0xd599,	// (0x0008e833) mup_visualizer_pane_g1

0xee58,	// (0x000900f2) mup_visualizer_pane_g2_ParamLimits

0xee58,	// (0x000900f2) mup_visualizer_pane_g2

0xd58b,	// (0x0008e825) mup_visualizer_pane_g3_ParamLimits

0xd58b,	// (0x0008e825) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x00090626) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x00090626) mup_visualizer_pane_g

0xdc4c,	// (0x0008eee6) mup_volume_pane_g1

0xdc4c,	// (0x0008eee6) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00090349) mup_volume_pane_g

0xdc4c,	// (0x0008eee6) mup_progress_pane_g1

0xdc4c,	// (0x0008eee6) mup_progress_pane_g2

0xdc4c,	// (0x0008eee6) mup_progress_pane_g3

0x0002,

0xf393,	// (0x0009062d) mup_progress_pane_g

0xd2c3,	// (0x0008e55d) bg_popup_window_pane_cp05

0xee66,	// (0x00090100) heading_pane_cp02_ParamLimits

0xee66,	// (0x00090100) heading_pane_cp02

0xee82,	// (0x0009011c) list_popup_blid_pane

0xee8a,	// (0x00090124) list_blid_sat_info_pane_ParamLimits

0xee8a,	// (0x00090124) list_blid_sat_info_pane

0xee9d,	// (0x00090137) list_blid_sat_info_pane_g1

0xeea5,	// (0x0009013f) list_blid_sat_info_pane_t1

0x2e22,	// (0x000840bc) mup_equalizer_pane_ParamLimits

0x2e22,	// (0x000840bc) mup_equalizer_pane

0x2e43,	// (0x000840dd) mup_equalizer_pane_cp1_ParamLimits

0x2e43,	// (0x000840dd) mup_equalizer_pane_cp1

0x2e64,	// (0x000840fe) mup_equalizer_pane_cp2_ParamLimits

0x2e64,	// (0x000840fe) mup_equalizer_pane_cp2

0x2e89,	// (0x00084123) mup_equalizer_pane_cp3_ParamLimits

0x2e89,	// (0x00084123) mup_equalizer_pane_cp3

0x2eb2,	// (0x0008414c) mup_equalizer_pane_cp4_ParamLimits

0x2eb2,	// (0x0008414c) mup_equalizer_pane_cp4

0x2edb,	// (0x00084175) mup_equalizer_pane_cp5

0x2ef3,	// (0x0008418d) mup_equalizer_pane_cp6

0x2f0b,	// (0x000841a5) mup_equalizer_pane_cp7

0x458a,	// (0x00085824) bg_popup_call_poc_act_pane_g9

0x4592,	// (0x0008582c) bg_popup_call_poc_act_pane_g10

0x459a,	// (0x00085834) bg_popup_call_poc_act_pane_g11

0x000a,

0xd51e,	// (0x0008e7b8) mup_scale_pane

0xd536,	// (0x0008e7d0) mup_scale_pane_g1

0xeeb3,	// (0x0009014d) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x00090649) mup_scale_pane_g

0xeed7,	// (0x00090171) msg_data_pane

0xeedf,	// (0x00090179) scroll_pane_cp017

0x0158,	// (0x000813f2) bg_list_pane_cp04_ParamLimits

0x0158,	// (0x000813f2) bg_list_pane_cp04

0xeee7,	// (0x00090181) msg_data_pane_g1

0x2f35,	// (0x000841cf) msg_data_pane_g2

0x2f3f,	// (0x000841d9) msg_data_pane_g3

0x2f49,	// (0x000841e3) msg_data_pane_g4

0x2f51,	// (0x000841eb) msg_data_pane_g5

0x2f59,	// (0x000841f3) msg_data_pane_g6

0x2f61,	// (0x000841fb) msg_data_pane_g7

0x0006,

0xf3be,	// (0x00090658) msg_data_pane_g

0x0180,	// (0x0008141a) msg_text_pane_ParamLimits

0x0180,	// (0x0008141a) msg_text_pane

0x2f69,	// (0x00084203) qrid_highlight_pane_cp011_ParamLimits

0x2f69,	// (0x00084203) qrid_highlight_pane_cp011

0xd2c3,	// (0x0008e55d) msg_body_pane

0xd51e,	// (0x0008e7b8) msg_header_pane

0xadcd,	// (0x0008c067) input_focus_pane_cp07

0x01ca,	// (0x00081464) msg_header_pane_t1_ParamLimits

0x01ca,	// (0x00081464) msg_header_pane_t1

0x01e6,	// (0x00081480) msg_header_pane_t2_ParamLimits

0x01e6,	// (0x00081480) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x0009066c) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x0009066c) msg_header_pane_t

0xef0f,	// (0x000901a9) msg_body_pane_g1

0x0206,	// (0x000814a0) msg_body_pane_t1_ParamLimits

0x0206,	// (0x000814a0) msg_body_pane_t1

0x0237,	// (0x000814d1) msg_body_pane_t2_ParamLimits

0x0237,	// (0x000814d1) msg_body_pane_t2

0x0249,	// (0x000814e3) msg_body_pane_t3_ParamLimits

0x0249,	// (0x000814e3) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x00090671) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x00090671) msg_body_pane_t

0x2fb9,	// (0x00084253) main_viewer_pane_g1_ParamLimits

0x2fb9,	// (0x00084253) main_viewer_pane_g1

0x2fc7,	// (0x00084261) main_viewer_pane_g2_ParamLimits

0x2fc7,	// (0x00084261) main_viewer_pane_g2

0x2fd5,	// (0x0008426f) main_viewer_pane_g3_ParamLimits

0x2fd5,	// (0x0008426f) main_viewer_pane_g3

0x2fe4,	// (0x0008427e) main_viewer_pane_g4_ParamLimits

0x2fe4,	// (0x0008427e) main_viewer_pane_g4

0xadfa,	// (0x0008c094) main_viewer_pane_g5_ParamLimits

0xadfa,	// (0x0008c094) main_viewer_pane_g5

0xadfa,	// (0x0008c094) main_viewer_pane_g7_ParamLimits

0xadfa,	// (0x0008c094) main_viewer_pane_g7

0xae0c,	// (0x0008c0a6) main_viewer_pane_g8_ParamLimits

0xae0c,	// (0x0008c0a6) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x00090681) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x00090681) main_viewer_pane_g

0xef17,	// (0x000901b1) viewer_content_pane_ParamLimits

0xef17,	// (0x000901b1) viewer_content_pane

0x3022,	// (0x000842bc) main_postcard_pane_g1_ParamLimits

0x3022,	// (0x000842bc) main_postcard_pane_g1

0x3038,	// (0x000842d2) main_postcard_pane_g2_ParamLimits

0x3038,	// (0x000842d2) main_postcard_pane_g2

0x304e,	// (0x000842e8) main_postcard_pane_g3_ParamLimits

0x304e,	// (0x000842e8) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x00090692) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x00090692) main_postcard_pane_g

0x3065,	// (0x000842ff) main_postcard_pane_g4

0x4c86,	// (0x00085f20) smil_status_volume_pane_g2

0x30a8,	// (0x00084342) postcard_pane_ParamLimits

0x30a8,	// (0x00084342) postcard_pane

0xef25,	// (0x000901bf) postcard_pane_g1_ParamLimits

0xef25,	// (0x000901bf) postcard_pane_g1

0x30f8,	// (0x00084392) postcard_pane_g2_ParamLimits

0x30f8,	// (0x00084392) postcard_pane_g2

0x3104,	// (0x0008439e) postcard_pane_g3_ParamLimits

0x3104,	// (0x0008439e) postcard_pane_g3

0xef33,	// (0x000901cd) postcard_pane_g4_ParamLimits

0xef33,	// (0x000901cd) postcard_pane_g4

0x3110,	// (0x000843aa) postcard_pane_g5_ParamLimits

0x3110,	// (0x000843aa) postcard_pane_g5

0x3125,	// (0x000843bf) postcard_pane_g6_ParamLimits

0x3125,	// (0x000843bf) postcard_pane_g6

0xef25,	// (0x000901bf) postcard_pane_g7_ParamLimits

0xef25,	// (0x000901bf) postcard_pane_g7

0x0006,

0xf405,	// (0x0009069f) postcard_pane_g_ParamLimits

0xf405,	// (0x0009069f) postcard_pane_g

0x313d,	// (0x000843d7) main_mp2_pane_g1_ParamLimits

0x313d,	// (0x000843d7) main_mp2_pane_g1

0x314b,	// (0x000843e5) main_mp2_pane_g2_ParamLimits

0x314b,	// (0x000843e5) main_mp2_pane_g2

0x3157,	// (0x000843f1) main_mp2_pane_g3_ParamLimits

0x3157,	// (0x000843f1) main_mp2_pane_g3

0x0002,

0xf414,	// (0x000906ae) main_mp2_pane_g_ParamLimits

0xf414,	// (0x000906ae) main_mp2_pane_g

0x3163,	// (0x000843fd) main_mp2_pane_t1_ParamLimits

0x3163,	// (0x000843fd) main_mp2_pane_t1

0x317a,	// (0x00084414) main_mp2_pane_t2_ParamLimits

0x317a,	// (0x00084414) main_mp2_pane_t2

0x318c,	// (0x00084426) main_mp2_pane_t3_ParamLimits

0x318c,	// (0x00084426) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x000906b5) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x000906b5) main_mp2_pane_t

0xcf46,	// (0x0008e1e0) pec_content_pane_ParamLimits

0xcf46,	// (0x0008e1e0) pec_content_pane

0xc242,	// (0x0008d4dc) scroll_pane_cp015

0xee4a,	// (0x000900e4) pec_attribute_pane_ParamLimits

0xee4a,	// (0x000900e4) pec_attribute_pane

0xd58b,	// (0x0008e825) pec_content_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) pec_content_pane_g1

0xef41,	// (0x000901db) pec_content_pane_t1_ParamLimits

0xef41,	// (0x000901db) pec_content_pane_t1

0xef55,	// (0x000901ef) pec_content_pane_t2_ParamLimits

0xef55,	// (0x000901ef) pec_content_pane_t2

0x0001,

0xf422,	// (0x000906bc) pec_content_pane_t_ParamLimits

0xf422,	// (0x000906bc) pec_content_pane_t

0xc325,	// (0x0008d5bf) list_single_graphic_pane_cp01_ParamLimits

0xc325,	// (0x0008d5bf) list_single_graphic_pane_cp01

0xd51e,	// (0x0008e7b8) bg_popup_sub_pane_cp04

0xef69,	// (0x00090203) popup_mup_playback_window_g1

0xef75,	// (0x0009020f) popup_mup_playback_window_t1

0xef8a,	// (0x00090224) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x000906c1) popup_mup_playback_window_t

0xefc1,	// (0x0009025b) main_image_pane_g1_ParamLimits

0xefc1,	// (0x0009025b) main_image_pane_g1

0xf004,	// (0x0009029e) scroll_pane_cp018_ParamLimits

0xf004,	// (0x0009029e) scroll_pane_cp018

0xf01c,	// (0x000902b6) scroll_pane_cp016_ParamLimits

0xf01c,	// (0x000902b6) scroll_pane_cp016

0x3274,	// (0x0008450e) smil2_image_pane_ParamLimits

0x3274,	// (0x0008450e) smil2_image_pane

0x32aa,	// (0x00084544) smil2_root_pane_ParamLimits

0x32aa,	// (0x00084544) smil2_root_pane

0x32e2,	// (0x0008457c) smil2_text_pane_ParamLimits

0x32e2,	// (0x0008457c) smil2_text_pane

0xc242,	// (0x0008d4dc) bg_list_pane_cp06

0xc242,	// (0x0008d4dc) grid_radio_pane

0xd2c3,	// (0x0008e55d) bg_popup_window_pane_cp06

0xe9a8,	// (0x0008fc42) main_fmradio_pane_t1

0x45a2,	// (0x0008583c) heading_pane_cp04

0xe9a8,	// (0x0008fc42) main_fmradio_pane_t2

0x45aa,	// (0x00085844) popup_cale_lunar_info_window_g1

0xe9a8,	// (0x0008fc42) main_fmradio_pane_t3

0x45b2,	// (0x0008584c) popup_cale_lunar_info_window_g2

0xe9a8,	// (0x0008fc42) main_fmradio_pane_t4

0x0001,

0xe9a8,	// (0x0008fc42) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x00090791) popup_cale_lunar_info_window_g

0xf287,	// (0x00090521) main_fmradio_pane_t

0xc242,	// (0x0008d4dc) wait_bar_pane_cp03

0xc325,	// (0x0008d5bf) cell_fmradio_pane_ParamLimits

0xc325,	// (0x0008d5bf) cell_fmradio_pane

0xd58b,	// (0x0008e825) cell_fmradio_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) cell_fmradio_pane_g1

0xc242,	// (0x0008d4dc) grid_highlight_pane_cp011

0x3372,	// (0x0008460c) poc_content_pane_ParamLimits

0x3372,	// (0x0008460c) poc_content_pane

0x3384,	// (0x0008461e) scroll_pane_cp019

0x338c,	// (0x00084626) popup_call_poc_act_window_ParamLimits

0x338c,	// (0x00084626) popup_call_poc_act_window

0x33b0,	// (0x0008464a) popup_call_poc_inact_window_ParamLimits

0x33b0,	// (0x0008464a) popup_call_poc_inact_window

0xf4d3,	// (0x0009076d) bg_popup_call_poc_act_pane_g

0x4512,	// (0x000857ac) bg_popup_call_poc_inact_pane_g1

0x451a,	// (0x000857b4) bg_popup_call_poc_inact_pane_g2

0x33c9,	// (0x00084663) popup_call_poc_act_window_g2

0x4522,	// (0x000857bc) bg_popup_call_poc_inact_pane_g3

0x452a,	// (0x000857c4) bg_popup_call_poc_inact_pane_g4

0x4532,	// (0x000857cc) bg_popup_call_poc_inact_pane_g5

0x33d1,	// (0x0008466b) popup_call_poc_act_window_t1_ParamLimits

0x33d1,	// (0x0008466b) popup_call_poc_act_window_t1

0x33f9,	// (0x00084693) popup_call_poc_act_window_t2_ParamLimits

0x33f9,	// (0x00084693) popup_call_poc_act_window_t2

0x3421,	// (0x000846bb) popup_call_poc_act_window_t3_ParamLimits

0x3421,	// (0x000846bb) popup_call_poc_act_window_t3

0x3449,	// (0x000846e3) popup_call_poc_act_window_t4_ParamLimits

0x3449,	// (0x000846e3) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x000906d6) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x000906d6) popup_call_poc_act_window_t

0x453a,	// (0x000857d4) bg_popup_call_poc_inact_pane_g6

0x4542,	// (0x000857dc) bg_popup_call_poc_inact_pane_g7

0x454a,	// (0x000857e4) bg_popup_call_poc_inact_pane_g8

0x345b,	// (0x000846f5) popup_call_poc_inact_window_g2

0x4552,	// (0x000857ec) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x0009075a) bg_popup_call_poc_inact_pane_g

0x3463,	// (0x000846fd) popup_call_poc_inact_window_t1_ParamLimits

0x3463,	// (0x000846fd) popup_call_poc_inact_window_t1

0x3478,	// (0x00084712) popup_call_poc_inact_window_t2_ParamLimits

0x3478,	// (0x00084712) popup_call_poc_inact_window_t2

0x348d,	// (0x00084727) popup_call_poc_inact_window_t3_ParamLimits

0x348d,	// (0x00084727) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x000906df) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x000906df) popup_call_poc_inact_window_t

0x4b6e,	// (0x00085e08) context_pane_ParamLimits

0x4bd8,	// (0x00085e72) signal_pane_ParamLimits

0xde48,	// (0x0008f0e2) main_call2_pane

0xae55,	// (0x0008c0ef) popup_phob_thumbnail2_window_ParamLimits

0xae55,	// (0x0008c0ef) popup_phob_thumbnail2_window

0xade2,	// (0x0008c07c) aid_hotspot_pointer_arrow_pane

0xadea,	// (0x0008c084) aid_hotspot_pointer_hand_pane

0x4623,	// (0x000858bd) phob_pre_status_pane_g5

0xcf46,	// (0x0008e1e0) cams_zoom_pane_ParamLimits

0xcf46,	// (0x0008e1e0) image_vga_pane_ParamLimits

0xd58b,	// (0x0008e825) main_camera_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) main_camera_pane_g2_ParamLimits

0xd58b,	// (0x0008e825) main_camera_pane_g3_ParamLimits

0xd58b,	// (0x0008e825) main_camera_pane_g4_ParamLimits

0xd58b,	// (0x0008e825) main_camera_pane_g5_ParamLimits

0xd58b,	// (0x0008e825) main_camera_pane_g6_ParamLimits

0xd58b,	// (0x0008e825) main_camera_pane_g7_ParamLimits

0xf180,	// (0x0009041a) main_camera_pane_g_ParamLimits

0xdc56,	// (0x0008eef0) main_camera_pane_t1_ParamLimits

0xdc56,	// (0x0008eef0) main_camera_pane_t2_ParamLimits

0xf191,	// (0x0009042b) main_camera_pane_t_ParamLimits

0xd51e,	// (0x0008e7b8) bg_popup_preview_window_pane_cp01_ParamLimits

0xd51e,	// (0x0008e7b8) bg_popup_preview_window_pane_cp01

0x34a2,	// (0x0008473c) popup_phob_thumbnail2_window_g1_ParamLimits

0x34a2,	// (0x0008473c) popup_phob_thumbnail2_window_g1

0xd2c3,	// (0x0008e55d) call2_cli_visual_pane

0x34c9,	// (0x00084763) popup_call2_audio_conf_window_ParamLimits

0x34c9,	// (0x00084763) popup_call2_audio_conf_window

0x34f1,	// (0x0008478b) popup_call2_audio_first_window_ParamLimits

0x34f1,	// (0x0008478b) popup_call2_audio_first_window

0x3587,	// (0x00084821) popup_call2_audio_in_window_ParamLimits

0x3587,	// (0x00084821) popup_call2_audio_in_window

0x35d3,	// (0x0008486d) popup_call2_audio_out_window_ParamLimits

0x35d3,	// (0x0008486d) popup_call2_audio_out_window

0x3645,	// (0x000848df) popup_call2_audio_second_window_ParamLimits

0x3645,	// (0x000848df) popup_call2_audio_second_window

0x36ab,	// (0x00084945) popup_call2_audio_wait_window_ParamLimits

0x36ab,	// (0x00084945) popup_call2_audio_wait_window

0xd2c3,	// (0x0008e55d) bg_popup_call2_act_pane_cp03

0xd500,	// (0x0008e79a) list_conf_pane_cp

0x36e5,	// (0x0008497f) popup_call2_audio_conf_window_t1

0x36f3,	// (0x0008498d) list_single_graphic_popup_conf2_pane_ParamLimits

0x36f3,	// (0x0008498d) list_single_graphic_popup_conf2_pane

0xeb92,	// (0x0008fe2c) list_highlight_pane_cp04

0x3706,	// (0x000849a0) list_single_graphic_popup_conf2_pane_g1

0xeba3,	// (0x0008fe3d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x000906e6) list_single_graphic_popup_conf2_pane_g

0x3710,	// (0x000849aa) list_single_graphic_popup_conf2_pane_t1

0x371e,	// (0x000849b8) bg_popup_call2_act_pane_cp01_ParamLimits

0x371e,	// (0x000849b8) bg_popup_call2_act_pane_cp01

0x37a8,	// (0x00084a42) call_type_pane_cp05_ParamLimits

0x37a8,	// (0x00084a42) call_type_pane_cp05

0x37fc,	// (0x00084a96) popup_call2_audio_second_window_g1_ParamLimits

0x37fc,	// (0x00084a96) popup_call2_audio_second_window_g1

0x3850,	// (0x00084aea) popup_call2_audio_second_window_g2_ParamLimits

0x3850,	// (0x00084aea) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x000906eb) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x000906eb) popup_call2_audio_second_window_g

0x38b5,	// (0x00084b4f) popup_call2_audio_second_window_t1_ParamLimits

0x38b5,	// (0x00084b4f) popup_call2_audio_second_window_t1

0x3970,	// (0x00084c0a) popup_call2_audio_second_window_t2_ParamLimits

0x3970,	// (0x00084c0a) popup_call2_audio_second_window_t2

0x39c3,	// (0x00084c5d) popup_call2_audio_second_window_t3_ParamLimits

0x39c3,	// (0x00084c5d) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x000906f2) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x000906f2) popup_call2_audio_second_window_t

0xd2c3,	// (0x0008e55d) bg_popup_call2_in_pane_cp02

0xd2cd,	// (0x0008e567) call_type_pane_cp04

0x3ab6,	// (0x00084d50) popup_call2_audio_wait_window_g1

0x3abe,	// (0x00084d58) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x000906fb) popup_call2_audio_wait_window_g

0xd2e5,	// (0x0008e57f) popup_call2_audio_wait_window_t3

0x3ac6,	// (0x00084d60) bg_popup_call2_act_pane_ParamLimits

0x3ac6,	// (0x00084d60) bg_popup_call2_act_pane

0x3b86,	// (0x00084e20) call_type_pane_cp03_ParamLimits

0x3b86,	// (0x00084e20) call_type_pane_cp03

0x3bea,	// (0x00084e84) popup_call2_audio_first_window_g1_ParamLimits

0x3bea,	// (0x00084e84) popup_call2_audio_first_window_g1

0x3c5a,	// (0x00084ef4) popup_call2_audio_first_window_g2_ParamLimits

0x3c5a,	// (0x00084ef4) popup_call2_audio_first_window_g2

0xf032,	// (0x000902cc) popup_call2_audio_first_window_g3_ParamLimits

0xf032,	// (0x000902cc) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x00090700) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x00090700) popup_call2_audio_first_window_g

0x3d38,	// (0x00084fd2) popup_call2_audio_first_window_t1_ParamLimits

0x3d38,	// (0x00084fd2) popup_call2_audio_first_window_t1

0x3e3b,	// (0x000850d5) popup_call2_audio_first_window_t4_ParamLimits

0x3e3b,	// (0x000850d5) popup_call2_audio_first_window_t4

0x3f1e,	// (0x000851b8) popup_call2_audio_first_window_t5_ParamLimits

0x3f1e,	// (0x000851b8) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x0009070b) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x0009070b) popup_call2_audio_first_window_t

0xd516,	// (0x0008e7b0) bg_popup_call2_act_pane_g1

0x45bc,	// (0x00085856) popup_cale_lunar_info_window_t1

0x45ca,	// (0x00085864) popup_cale_lunar_info_window_t2

0x45d8,	// (0x00085872) popup_cale_lunar_info_window_t3

0xd2c3,	// (0x0008e55d) bg_popup_call2_bubble_pane

0x401f,	// (0x000852b9) bg_popup_call2_in_pane_cp01_ParamLimits

0x401f,	// (0x000852b9) bg_popup_call2_in_pane_cp01

0xcf9f,	// (0x0008e239) call_type_pane_cp02

0x4067,	// (0x00085301) popup_call2_audio_out_window_g1_ParamLimits

0x4067,	// (0x00085301) popup_call2_audio_out_window_g1

0x4093,	// (0x0008532d) popup_call2_audio_out_window_g2_ParamLimits

0x4093,	// (0x0008532d) popup_call2_audio_out_window_g2

0x40bb,	// (0x00085355) popup_call2_audio_out_window_g3_ParamLimits

0x40bb,	// (0x00085355) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x00090714) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x00090714) popup_call2_audio_out_window_g

0x40f6,	// (0x00085390) popup_call2_audio_out_window_t1_ParamLimits

0x40f6,	// (0x00085390) popup_call2_audio_out_window_t1

0x4155,	// (0x000853ef) popup_call2_audio_out_window_t2_ParamLimits

0x4155,	// (0x000853ef) popup_call2_audio_out_window_t2

0x41a9,	// (0x00085443) popup_call2_audio_out_window_t3_ParamLimits

0x41a9,	// (0x00085443) popup_call2_audio_out_window_t3

0x41bf,	// (0x00085459) popup_call2_audio_out_window_t4_ParamLimits

0x41bf,	// (0x00085459) popup_call2_audio_out_window_t4

0x41d5,	// (0x0008546f) popup_call2_audio_out_window_t5_ParamLimits

0x41d5,	// (0x0008546f) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x0009071d) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x0009071d) popup_call2_audio_out_window_t

0x4239,	// (0x000854d3) bg_popup_call2_in_pane_ParamLimits

0x4239,	// (0x000854d3) bg_popup_call2_in_pane

0x4295,	// (0x0008552f) popup_call2_audio_in_window_g1_ParamLimits

0x4295,	// (0x0008552f) popup_call2_audio_in_window_g1

0x42cd,	// (0x00085567) popup_call2_audio_in_window_g2_ParamLimits

0x42cd,	// (0x00085567) popup_call2_audio_in_window_g2

0x4305,	// (0x0008559f) popup_call2_audio_in_window_g3_ParamLimits

0x4305,	// (0x0008559f) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x0009072a) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x0009072a) popup_call2_audio_in_window_g

0x435d,	// (0x000855f7) popup_call2_audio_in_window_t1_ParamLimits

0x435d,	// (0x000855f7) popup_call2_audio_in_window_t1

0x43dd,	// (0x00085677) popup_call2_audio_in_window_t2_ParamLimits

0x43dd,	// (0x00085677) popup_call2_audio_in_window_t2

0x445d,	// (0x000856f7) popup_call2_audio_in_window_t3_ParamLimits

0x445d,	// (0x000856f7) popup_call2_audio_in_window_t3

0x4477,	// (0x00085711) popup_call2_audio_in_window_t4_ParamLimits

0x4477,	// (0x00085711) popup_call2_audio_in_window_t4

0x4489,	// (0x00085723) popup_call2_audio_in_window_t5_ParamLimits

0x4489,	// (0x00085723) popup_call2_audio_in_window_t5

0x449e,	// (0x00085738) popup_call2_audio_in_window_t6_ParamLimits

0x449e,	// (0x00085738) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x00090733) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x00090733) popup_call2_audio_in_window_t

0xd516,	// (0x0008e7b0) bg_popup_call2_in_pane_g1

0x45e6,	// (0x00085880) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x00090796) popup_cale_lunar_info_window_t

0xd51e,	// (0x0008e7b8) bg_popup_call2_rect_pane_ParamLimits

0xd51e,	// (0x0008e7b8) bg_popup_call2_rect_pane

0xd2c3,	// (0x0008e55d) call2_cli_visual_graphic_pane

0xd2c3,	// (0x0008e55d) call2_cli_visual_text_pane

0xae7c,	// (0x0008c116) smil_status_volume_pane_g3

0x0002,

0xd536,	// (0x0008e7d0) call2_cli_visual_graphic_pane_g1

0xd536,	// (0x0008e7d0) call2_cli_visual_graphic_pane_g2

0xd536,	// (0x0008e7d0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x00090740) call2_cli_visual_graphic_pane_g

0x44d2,	// (0x0008576c) bg_popup_call2_rect_pane_g1

0xdd81,	// (0x0008f01b) bg_popup_call2_rect_pane_g2

0x44da,	// (0x00085774) bg_popup_call2_rect_pane_g3

0x44e2,	// (0x0008577c) bg_popup_call2_rect_pane_g4

0x44ea,	// (0x00085784) bg_popup_call2_rect_pane_g5

0x44f2,	// (0x0008578c) bg_popup_call2_rect_pane_g6

0x44fa,	// (0x00085794) bg_popup_call2_rect_pane_g7

0x4502,	// (0x0008579c) bg_popup_call2_rect_pane_g8

0x450a,	// (0x000857a4) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x00090747) bg_popup_call2_rect_pane_g

0x4512,	// (0x000857ac) bg_popup_call2_bubble_pane_g1

0x451a,	// (0x000857b4) bg_popup_call2_bubble_pane_g2

0x4522,	// (0x000857bc) bg_popup_call2_bubble_pane_g3

0x452a,	// (0x000857c4) bg_popup_call2_bubble_pane_g4

0x4532,	// (0x000857cc) bg_popup_call2_bubble_pane_g5

0x453a,	// (0x000857d4) bg_popup_call2_bubble_pane_g6

0x4542,	// (0x000857dc) bg_popup_call2_bubble_pane_g7

0x454a,	// (0x000857e4) bg_popup_call2_bubble_pane_g8

0x4552,	// (0x000857ec) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x0009075a) bg_popup_call2_bubble_pane_g

0x0fa1,	// (0x0008223b) aid_cale_week_size_cell_pane

0x15e5,	// (0x0008287f) aid_cams_cif_uncrop_pane_ParamLimits

0x15e5,	// (0x0008287f) aid_cams_cif_uncrop_pane

0xcf46,	// (0x0008e1e0) aid_cams_size_cell_ParamLimits

0xcf46,	// (0x0008e1e0) aid_cams_size_cell

0xcf46,	// (0x0008e1e0) grid_cams_pane_ParamLimits

0xcf46,	// (0x0008e1e0) linegrid_cams_pane_ParamLimits

0x17f8,	// (0x00082a92) call_video_pane_t1

0x1812,	// (0x00082aac) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00090477) call_video_pane_t

0x1c4a,	// (0x00082ee4) aid_cale_month_size_cell_pane_ParamLimits

0x1c4a,	// (0x00082ee4) aid_cale_month_size_cell_pane

0xf540,	// (0x000907da) smil_status_volume_pane_g

0xae89,	// (0x0008c123) volume_smil_pane_ParamLimits

0xac0d,	// (0x0008bea7) aid_popup2_width_pane

0x0f02,	// (0x0008219c) cell_qdial_pane_g4_ParamLimits

0x0f02,	// (0x0008219c) cell_qdial_pane_g4

0x2b41,	// (0x00083ddb) aid_blid_cardinal_pane_ParamLimits

0x2b4d,	// (0x00083de7) aid_blid_destination_pane_ParamLimits

0x2b4d,	// (0x00083de7) aid_blid_destination_pane

0xd51e,	// (0x0008e7b8) bg_popup_call_poc_act_pane_ParamLimits

0xd51e,	// (0x0008e7b8) bg_popup_call_poc_act_pane

0xd51e,	// (0x0008e7b8) bg_popup_call_poc_inact_pane_ParamLimits

0xd51e,	// (0x0008e7b8) bg_popup_call_poc_inact_pane

0x4562,	// (0x000857fc) bg_popup_call_poc_act_pane_g1

0x456a,	// (0x00085804) bg_popup_call_poc_act_pane_g2

0x4572,	// (0x0008580c) bg_popup_call_poc_act_pane_g3

0x452a,	// (0x000857c4) bg_popup_call_poc_act_pane_g4

0x4532,	// (0x000857cc) bg_popup_call_poc_act_pane_g5

0x457a,	// (0x00085814) bg_popup_call_poc_act_pane_g6

0x4542,	// (0x000857dc) bg_popup_call_poc_act_pane_g7

0x4582,	// (0x0008581c) bg_popup_call_poc_act_pane_g8

0xd2c3,	// (0x0008e55d) main_usb_pane

0xae2c,	// (0x0008c0c6) popup_cale_lunar_info_window

0x1adf,	// (0x00082d79) im_reading_pane_t1_ParamLimits

0xdf0d,	// (0x0008f1a7) list_im_pane_ParamLimits

0xdf1e,	// (0x0008f1b8) scroll_pane_cp07_ParamLimits

0xd2c3,	// (0x0008e55d) grid_highlight_pane_cp012

0xd51e,	// (0x0008e7b8) mup_scale_pane_ParamLimits

0xd58b,	// (0x0008e825) main_usb_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) main_usb_pane_g1

0xd58b,	// (0x0008e825) main_usb_pane_g2_ParamLimits

0xd58b,	// (0x0008e825) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x00090456) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x00090456) main_usb_pane_g

0xdc56,	// (0x0008eef0) main_usb_pane_t1_ParamLimits

0xdc56,	// (0x0008eef0) main_usb_pane_t1

0xdc56,	// (0x0008eef0) main_usb_pane_t2_ParamLimits

0xdc56,	// (0x0008eef0) main_usb_pane_t2

0xdc56,	// (0x0008eef0) main_usb_pane_t3_ParamLimits

0xdc56,	// (0x0008eef0) main_usb_pane_t3

0xdc56,	// (0x0008eef0) main_usb_pane_t4_ParamLimits

0xdc56,	// (0x0008eef0) main_usb_pane_t4

0xdc56,	// (0x0008eef0) main_usb_pane_t5_ParamLimits

0xdc56,	// (0x0008eef0) main_usb_pane_t5

0xdc56,	// (0x0008eef0) main_usb_pane_t6_ParamLimits

0xdc56,	// (0x0008eef0) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x00090784) main_usb_pane_t_ParamLimits

0x2ae0,	// (0x00083d7a) aid_text_placing

0x2aeb,	// (0x00083d85) main_location2_pane_t1_ParamLimits

0x2b01,	// (0x00083d9b) main_location2_pane_t2_ParamLimits

0x2b17,	// (0x00083db1) main_location2_pane_t3_ParamLimits

0x2b2d,	// (0x00083dc7) main_location2_pane_t4_ParamLimits

0x2b2d,	// (0x00083dc7) main_location2_pane_t4

0xf319,	// (0x000905b3) main_location2_pane_t_ParamLimits

0xd54c,	// (0x0008e7e6) find_pinb_pane_g2_ParamLimits

0xd54c,	// (0x0008e7e6) find_pinb_pane_g2

0x0001,

0xf095,	// (0x0009032f) find_pinb_pane_g_ParamLimits

0xf095,	// (0x0009032f) find_pinb_pane_g

0xd558,	// (0x0008e7f2) find_pinb_pane_t1_ParamLimits

0xd56a,	// (0x0008e804) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x00090334) find_pinb_pane_t_ParamLimits

0xd2c3,	// (0x0008e55d) main_call3_pane

0x224f,	// (0x000834e9) cale_month_day_heading_pane_t1_ParamLimits

0x22d5,	// (0x0008356f) cale_month_day_heading_pane_t2_ParamLimits

0x234e,	// (0x000835e8) cale_month_day_heading_pane_t3_ParamLimits

0x23c7,	// (0x00083661) cale_month_day_heading_pane_t4_ParamLimits

0x2448,	// (0x000836e2) cale_month_day_heading_pane_t5_ParamLimits

0x24d1,	// (0x0008376b) cale_month_day_heading_pane_t6_ParamLimits

0x2562,	// (0x000837fc) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x000904af) cale_month_day_heading_pane_t_ParamLimits

0xe177,	// (0x0008f411) smil_status_volume_pane

0x30cc,	// (0x00084366) postcard_address_pane_ParamLimits

0x30cc,	// (0x00084366) postcard_address_pane

0x30e2,	// (0x0008437c) postcard_message_pane_ParamLimits

0x30e2,	// (0x0008437c) postcard_message_pane

0x44b3,	// (0x0008574d) call2_cli_visual_pane_t1_ParamLimits

0x44b3,	// (0x0008574d) call2_cli_visual_pane_t1

0x4e40,	// (0x000860da) postcard_message_pane_t1_ParamLimits

0x4e40,	// (0x000860da) postcard_message_pane_t1

0x4e28,	// (0x000860c2) postcard_address_pane_t1_ParamLimits

0x4e28,	// (0x000860c2) postcard_address_pane_t1

0x4e14,	// (0x000860ae) popup_call3_audio_in_window_ParamLimits

0x4e14,	// (0x000860ae) popup_call3_audio_in_window

0x4c99,	// (0x00085f33) bg_popup_call3_in_pane_ParamLimits

0x4c99,	// (0x00085f33) bg_popup_call3_in_pane

0x4d15,	// (0x00085faf) popup_call3_audio_in_window_g1_ParamLimits

0x4d15,	// (0x00085faf) popup_call3_audio_in_window_g1

0x4d35,	// (0x00085fcf) popup_call3_audio_in_window_g2_ParamLimits

0x4d35,	// (0x00085fcf) popup_call3_audio_in_window_g2

0x4d55,	// (0x00085fef) popup_call3_audio_in_window_g3_ParamLimits

0x4d55,	// (0x00085fef) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x000907e1) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x000907e1) popup_call3_audio_in_window_g

0x4d86,	// (0x00086020) popup_call3_audio_in_window_t1_ParamLimits

0x4d86,	// (0x00086020) popup_call3_audio_in_window_t1

0x4dc4,	// (0x0008605e) popup_call3_audio_in_window_t2_ParamLimits

0x4dc4,	// (0x0008605e) popup_call3_audio_in_window_t2

0x4e02,	// (0x0008609c) popup_call3_audio_in_window_t3_ParamLimits

0x4e02,	// (0x0008609c) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x000907ea) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x000907ea) popup_call3_audio_in_window_t

0xde48,	// (0x0008f0e2) bg_popup_call3_rect_pane

0x44d2,	// (0x0008576c) bg_popup_call3_rect_pane_g1

0xdd81,	// (0x0008f01b) bg_popup_call3_rect_pane_g2

0x44da,	// (0x00085774) bg_popup_call3_rect_pane_g3

0x44e2,	// (0x0008577c) bg_popup_call3_rect_pane_g4

0x44ea,	// (0x00085784) bg_popup_call3_rect_pane_g5

0x44f2,	// (0x0008578c) bg_popup_call3_rect_pane_g6

0x44fa,	// (0x00085794) bg_popup_call3_rect_pane_g7

0xc242,	// (0x0008d4dc) mup_visualizer_osc_pane

0xc242,	// (0x0008d4dc) mup_visualizer_spec_pane

0x4cc9,	// (0x00085f63) call3_video_qcif_pane_ParamLimits

0x4cc9,	// (0x00085f63) call3_video_qcif_pane

0x4cdc,	// (0x00085f76) call3_video_qcif_uncrop_pane_ParamLimits

0x4cdc,	// (0x00085f76) call3_video_qcif_uncrop_pane

0x4cec,	// (0x00085f86) call3_video_subqcif_pane_ParamLimits

0x4cec,	// (0x00085f86) call3_video_subqcif_pane

0x4d02,	// (0x00085f9c) call3_video_subqcif_uncrop_pane_ParamLimits

0x4d02,	// (0x00085f9c) call3_video_subqcif_uncrop_pane

0x4d75,	// (0x0008600f) popup_call3_audio_in_window_g4_ParamLimits

0x4d75,	// (0x0008600f) popup_call3_audio_in_window_g4

0xc242,	// (0x0008d4dc) mup_spec_half_pane

0xc242,	// (0x0008d4dc) mup_spec_half_pane_cp

0xc242,	// (0x0008d4dc) mup_osc_middle_pane

0xdc4c,	// (0x0008eee6) mup_visualizer_osc_pane_g1

0x4c4c,	// (0x00085ee6) mup_spec_bar_pane_ParamLimits

0x4c4c,	// (0x00085ee6) mup_spec_bar_pane

0xdc4c,	// (0x0008eee6) mup_spec_bar_pane_g1

0xdc4c,	// (0x0008eee6) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00090349) mup_spec_bar_pane_g

0x0fa1,	// (0x0008223b) aid_cale_week_size_cell_pane_ParamLimits

0x0fbb,	// (0x00082255) bg_cale_heading_pane_ParamLimits

0x0fdf,	// (0x00082279) bg_cale_pane_cp01_ParamLimits

0x0ffc,	// (0x00082296) cale_week_corner_pane_ParamLimits

0x101b,	// (0x000822b5) cale_week_day_heading_pane_ParamLimits

0x1044,	// (0x000822de) cale_week_scroll_pane_g1_ParamLimits

0x1063,	// (0x000822fd) cale_week_scroll_pane_g2_ParamLimits

0x107b,	// (0x00082315) cale_week_scroll_pane_g3_ParamLimits

0x1093,	// (0x0008232d) cale_week_scroll_pane_g4_ParamLimits

0x10ab,	// (0x00082345) cale_week_scroll_pane_g5_ParamLimits

0x10cb,	// (0x00082365) cale_week_scroll_pane_g6_ParamLimits

0x10eb,	// (0x00082385) cale_week_scroll_pane_g7_ParamLimits

0x110f,	// (0x000823a9) cale_week_scroll_pane_g8_ParamLimits

0x1133,	// (0x000823cd) cale_week_scroll_pane_g9_ParamLimits

0x114b,	// (0x000823e5) cale_week_scroll_pane_g10_ParamLimits

0x1163,	// (0x000823fd) cale_week_scroll_pane_g11_ParamLimits

0x117b,	// (0x00082415) cale_week_scroll_pane_g12_ParamLimits

0x119f,	// (0x00082439) cale_week_scroll_pane_g13_ParamLimits

0x119f,	// (0x00082439) cale_week_scroll_pane_g14_ParamLimits

0x119f,	// (0x00082439) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x000903c0) cale_week_scroll_pane_g_ParamLimits

0x11e7,	// (0x00082481) cale_week_time_pane_ParamLimits

0x120b,	// (0x000824a5) grid_cale_week_pane_ParamLimits

0xddbe,	// (0x0008f058) listscroll_cale_week_pane_t1

0xddd0,	// (0x0008f06a) scroll_pane_cp08_ParamLimits

0x1cc2,	// (0x00082f5c) cale_month_corner_pane_ParamLimits

0xe14d,	// (0x0008f3e7) cale_month_pane_t1

0x21ca,	// (0x00083464) cale_month_week_pane_ParamLimits

0x2920,	// (0x00083bba) popup_call_status_window_g1_ParamLimits

0x2934,	// (0x00083bce) popup_call_status_window_g2_ParamLimits

0x2948,	// (0x00083be2) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x0009053a) popup_call_status_window_g_ParamLimits

0xeb1f,	// (0x0008fdb9) aid_call2_pane

0x01bc,	// (0x00081456) msg_header_pane_g1

0x30cc,	// (0x00084366) postcard_address2_pane_ParamLimits

0x30cc,	// (0x00084366) postcard_address2_pane

0x30e2,	// (0x0008437c) postcard_message2_pane_ParamLimits

0x30e2,	// (0x0008437c) postcard_message2_pane

0x4be6,	// (0x00085e80) message2_row_pane_ParamLimits

0x4be6,	// (0x00085e80) message2_row_pane

0x4c06,	// (0x00085ea0) address2_row_pane_ParamLimits

0x4c06,	// (0x00085ea0) address2_row_pane

0x4c19,	// (0x00085eb3) postcard_message2_row_pane_g1

0x4c21,	// (0x00085ebb) postcard_message2_row_pane_t1

0x4c19,	// (0x00085eb3) address2_row_pane_g1

0x4c21,	// (0x00085ebb) address2_row_pane_t1

0x1578,	// (0x00082812) aid_size_cell_vorec

0xd2c3,	// (0x0008e55d) main_rss_pane

0x4c2f,	// (0x00085ec9) rss_list_single_pane_ParamLimits

0x4c2f,	// (0x00085ec9) rss_list_single_pane

0x4c3d,	// (0x00085ed7) rss_list_single_pane_t1

0x4c3d,	// (0x00085ed7) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x000907d5) rss_list_single_pane_t

0xd2c3,	// (0x0008e55d) main_camera2_pane

0xd2c3,	// (0x0008e55d) main_video2_pane

0xae9e,	// (0x0008c138) cams_zoom_pane_cp2_ParamLimits

0xae9e,	// (0x0008c138) cams_zoom_pane_cp2

0xae9e,	// (0x0008c138) image2_vga_pane_ParamLimits

0xae9e,	// (0x0008c138) image2_vga_pane

0xaeac,	// (0x0008c146) main_camera2_pane_g1_ParamLimits

0xaeac,	// (0x0008c146) main_camera2_pane_g1

0xaeac,	// (0x0008c146) main_camera2_pane_g2_ParamLimits

0xaeac,	// (0x0008c146) main_camera2_pane_g2

0xaeac,	// (0x0008c146) main_camera2_pane_g3_ParamLimits

0xaeac,	// (0x0008c146) main_camera2_pane_g3

0xaeac,	// (0x0008c146) main_camera2_pane_g4_ParamLimits

0xaeac,	// (0x0008c146) main_camera2_pane_g4

0xaeac,	// (0x0008c146) main_camera2_pane_g5_ParamLimits

0xaeac,	// (0x0008c146) main_camera2_pane_g5

0xaeac,	// (0x0008c146) main_camera2_pane_g6_ParamLimits

0xaeac,	// (0x0008c146) main_camera2_pane_g6

0xaeac,	// (0x0008c146) main_camera2_pane_g7_ParamLimits

0xaeac,	// (0x0008c146) main_camera2_pane_g7

0xaeac,	// (0x0008c146) main_camera2_pane_g8_ParamLimits

0xaeac,	// (0x0008c146) main_camera2_pane_g8

0x0008,

0xf557,	// (0x000907f1) main_camera2_pane_g_ParamLimits

0xf557,	// (0x000907f1) main_camera2_pane_g

0x4e6a,	// (0x00086104) main_camera2_pane_t1_ParamLimits

0x4e6a,	// (0x00086104) main_camera2_pane_t1

0x4e6a,	// (0x00086104) main_camera2_pane_t2_ParamLimits

0x4e6a,	// (0x00086104) main_camera2_pane_t2

0x4e6a,	// (0x00086104) main_camera2_pane_t3_ParamLimits

0x4e6a,	// (0x00086104) main_camera2_pane_t3

0x4e6a,	// (0x00086104) main_camera2_pane_t4_ParamLimits

0x4e6a,	// (0x00086104) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x00090804) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x00090804) main_camera2_pane_t

0xaece,	// (0x0008c168) cams_zoom_pane_cp4_ParamLimits

0xaece,	// (0x0008c168) cams_zoom_pane_cp4

0x4e7e,	// (0x00086118) image2_cif_pane_ParamLimits

0x4e7e,	// (0x00086118) image2_cif_pane

0xcf46,	// (0x0008e1e0) image2_subqcif_pane_ParamLimits

0xcf46,	// (0x0008e1e0) image2_subqcif_pane

0x4e8c,	// (0x00086126) main_video2_pane_g1_ParamLimits

0x4e8c,	// (0x00086126) main_video2_pane_g1

0x4e8c,	// (0x00086126) main_video2_pane_g2_ParamLimits

0x4e8c,	// (0x00086126) main_video2_pane_g2

0x4e8c,	// (0x00086126) main_video2_pane_g3_ParamLimits

0x4e8c,	// (0x00086126) main_video2_pane_g3

0x4e8c,	// (0x00086126) main_video2_pane_g4_ParamLimits

0x4e8c,	// (0x00086126) main_video2_pane_g4

0x4e8c,	// (0x00086126) main_video2_pane_g5_ParamLimits

0x4e8c,	// (0x00086126) main_video2_pane_g5

0x4e8c,	// (0x00086126) main_video2_pane_g6_ParamLimits

0x4e8c,	// (0x00086126) main_video2_pane_g6

0x0005,

0xf579,	// (0x00090813) main_video2_pane_g_ParamLimits

0xf579,	// (0x00090813) main_video2_pane_g

0x4e9a,	// (0x00086134) main_video2_pane_t1_ParamLimits

0x4e9a,	// (0x00086134) main_video2_pane_t1

0x4e9a,	// (0x00086134) main_video2_pane_t2_ParamLimits

0x4e9a,	// (0x00086134) main_video2_pane_t2

0x4e9a,	// (0x00086134) main_video2_pane_t3_ParamLimits

0x4e9a,	// (0x00086134) main_video2_pane_t3

0x0002,

0xf586,	// (0x00090820) main_video2_pane_t_ParamLimits

0xf586,	// (0x00090820) main_video2_pane_t

0x4687,	// (0x00085921) call_muted_g2

0x0001,

0xf52d,	// (0x000907c7) call_muted_g

0xd2c3,	// (0x0008e55d) main_mup2_pane

0xee28,	// (0x000900c2) main_mup2_pane_g1_ParamLimits

0xee28,	// (0x000900c2) main_mup2_pane_g1

0xee28,	// (0x000900c2) main_mup2_pane_g2_ParamLimits

0xee28,	// (0x000900c2) main_mup2_pane_g2

0xdc4c,	// (0x0008eee6) main_mup_pane_g13_cp1

0xc242,	// (0x0008d4dc) mup_volume_pane_cp1

0xee28,	// (0x000900c2) main_mup2_pane_g4_ParamLimits

0xee28,	// (0x000900c2) main_mup2_pane_g4

0xee28,	// (0x000900c2) main_mup2_pane_g5_ParamLimits

0xee28,	// (0x000900c2) main_mup2_pane_g5

0xee28,	// (0x000900c2) main_mup2_pane_g6_ParamLimits

0xee28,	// (0x000900c2) main_mup2_pane_g6

0xee28,	// (0x000900c2) main_mup2_pane_g7_ParamLimits

0xee28,	// (0x000900c2) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x00090827) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x00090827) main_mup2_pane_g

0xee36,	// (0x000900d0) main_mup2_pane_t1_ParamLimits

0xee36,	// (0x000900d0) main_mup2_pane_t1

0xee36,	// (0x000900d0) main_mup2_pane_t2_ParamLimits

0xee36,	// (0x000900d0) main_mup2_pane_t2

0xee36,	// (0x000900d0) main_mup2_pane_t3_ParamLimits

0xee36,	// (0x000900d0) main_mup2_pane_t3

0xee36,	// (0x000900d0) main_mup2_pane_t4_ParamLimits

0xee36,	// (0x000900d0) main_mup2_pane_t4

0xee36,	// (0x000900d0) main_mup2_pane_t5_ParamLimits

0xee36,	// (0x000900d0) main_mup2_pane_t5

0xee36,	// (0x000900d0) main_mup2_pane_t6_ParamLimits

0xee36,	// (0x000900d0) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x00090836) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x00090836) main_mup2_pane_t

0xee4a,	// (0x000900e4) mup2_visualizer_pane_ParamLimits

0xee4a,	// (0x000900e4) mup2_visualizer_pane

0xee4a,	// (0x000900e4) mup_progress_pane_cp_ParamLimits

0xee4a,	// (0x000900e4) mup_progress_pane_cp

0x4eae,	// (0x00086148) mup_volume_pane_cp_ParamLimits

0x4eae,	// (0x00086148) mup_volume_pane_cp

0xd58b,	// (0x0008e825) mup2_visualizer_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) mup2_visualizer_pane_g1

0xd599,	// (0x0008e833) mup2_visualizer_pane_g2_ParamLimits

0xd599,	// (0x0008e833) mup2_visualizer_pane_g2

0xd599,	// (0x0008e833) mup2_visualizer_pane_g3_ParamLimits

0xd599,	// (0x0008e833) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00090339) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00090339) mup2_visualizer_pane_g

0xc242,	// (0x0008d4dc) aid_size_cell_fmradio

0x4868,	// (0x00085b02) aid_height_parent_landcape

0xdfab,	// (0x0008f245) wml_content_pane_cp

0xdfb3,	// (0x0008f24d) wml_tabs_pane

0xdfbc,	// (0x0008f256) popup_wml_miniature_window

0xdfc4,	// (0x0008f25e) scroll_pane_cp021

0xdfd8,	// (0x0008f272) wml_content_pane_comp8

0xd2c3,	// (0x0008e55d) bg_popup_sub_pane_cp05

0x4ec4,	// (0x0008615e) popup_wml_miniature_window_g1

0x4ecc,	// (0x00086166) wml_miniature_view_pane

0x4ed4,	// (0x0008616e) aid_size_wml_view

0x4edc,	// (0x00086176) wml_miniature_view_pane_g1

0x4ee5,	// (0x0008617f) wml_miniature_view_pane_g2

0x4eee,	// (0x00086188) wml_miniature_view_pane_g3

0x4ef6,	// (0x00086190) wml_miniature_view_pane_g4

0x4efe,	// (0x00086198) wml_miniature_view_pane_g5

0x4f06,	// (0x000861a0) wml_miniature_view_pane_g6

0x4f0e,	// (0x000861a8) wml_miniature_view_pane_g7

0x4f16,	// (0x000861b0) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x00090843) wml_miniature_view_pane_g

0x4f1e,	// (0x000861b8) background_graphic_ParamLimits

0x4f1e,	// (0x000861b8) background_graphic

0x4f2a,	// (0x000861c4) wml_tabs_2_pane

0x4f33,	// (0x000861cd) wml_tabs_3_pane_ParamLimits

0x4f33,	// (0x000861cd) wml_tabs_3_pane

0x4f45,	// (0x000861df) wml_tabs_4_pane_ParamLimits

0x4f45,	// (0x000861df) wml_tabs_4_pane

0x4f5b,	// (0x000861f5) wml_tabs_5_pane_ParamLimits

0x4f5b,	// (0x000861f5) wml_tabs_5_pane

0x4f75,	// (0x0008620f) wml_tabs_pane_g2_ParamLimits

0x4f75,	// (0x0008620f) wml_tabs_pane_g2

0x4f8a,	// (0x00086224) wml_tabs_pane_g3_ParamLimits

0x4f8a,	// (0x00086224) wml_tabs_pane_g3

0x4f9f,	// (0x00086239) wml_tabs_2_active_pane_ParamLimits

0x4f9f,	// (0x00086239) wml_tabs_2_active_pane

0x4f9f,	// (0x00086239) wml_tabs_2_passive_pane_ParamLimits

0x4f9f,	// (0x00086239) wml_tabs_2_passive_pane

0x4fad,	// (0x00086247) wml_tabs_3_active_pane_cp_ParamLimits

0x4fad,	// (0x00086247) wml_tabs_3_active_pane_cp

0x4fc2,	// (0x0008625c) wml_tabs_3_passive_pane_ParamLimits

0x4fc2,	// (0x0008625c) wml_tabs_3_passive_pane

0x4fd5,	// (0x0008626f) wml_tabs_3_passive_pane_cp_ParamLimits

0x4fd5,	// (0x0008626f) wml_tabs_3_passive_pane_cp

0x4fec,	// (0x00086286) tabs_4_active_pane

0x4ff4,	// (0x0008628e) tabs_4_passive_pane

0x4ffe,	// (0x00086298) tabs_4_passive_pane_cp

0x5006,	// (0x000862a0) tabs_4_passive_pane_cp2

0x455a,	// (0x000857f4) aid_height_text

0xee4a,	// (0x000900e4) mup_volume_cont_pane_ParamLimits

0xee4a,	// (0x000900e4) mup_volume_cont_pane

0xc242,	// (0x0008d4dc) aid_size_cell_pinb

0xc242,	// (0x0008d4dc) aid_size_list_pinb

0xee4a,	// (0x000900e4) mup2_volume_cont_pane_ParamLimits

0xee4a,	// (0x000900e4) mup2_volume_cont_pane

0xaedc,	// (0x0008c176) mup2_volume_cont_pane_g1_ParamLimits

0xaedc,	// (0x0008c176) mup2_volume_cont_pane_g1

0x0a6f,	// (0x00081d09) aid_size_cell_touch_ParamLimits

0x0a6f,	// (0x00081d09) aid_size_cell_touch

0x0c99,	// (0x00081f33) touch_pane_ParamLimits

0x0c99,	// (0x00081f33) touch_pane

0xc242,	// (0x0008d4dc) main_rss2_pane

0x5019,	// (0x000862b3) listscroll_rss2_pane

0x5022,	// (0x000862bc) rss2_navigation_pane

0x502a,	// (0x000862c4) list_rss2_pane

0xec37,	// (0x0008fed1) scroll_pane_cp22

0x5032,	// (0x000862cc) rss2_navigation_pane_g1

0x503b,	// (0x000862d5) rss2_navigation_pane_g2

0x5043,	// (0x000862dd) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x00090854) rss2_navigation_pane_g

0x504b,	// (0x000862e5) rss2_navigation_pane_t1

0x5059,	// (0x000862f3) rss2_list_single_pane_ParamLimits

0x5059,	// (0x000862f3) rss2_list_single_pane

0x5070,	// (0x0008630a) rss2_list_single_pane_t2

0x507e,	// (0x00086318) rss2_list_single_pane_t3_ParamLimits

0x507e,	// (0x00086318) rss2_list_single_pane_t3

0x509b,	// (0x00086335) rss2_list_single_pane_t4

0x280a,	// (0x00083aa4) smil_status_pane_g1

0xcf46,	// (0x0008e1e0) main_image2_pane_ParamLimits

0xcf46,	// (0x0008e1e0) main_image2_pane

0xaeac,	// (0x0008c146) main_camera2_pane_g9_ParamLimits

0xaeac,	// (0x0008c146) main_camera2_pane_g9

0x4e6a,	// (0x00086104) main_camera2_pane_t5_ParamLimits

0x4e6a,	// (0x00086104) main_camera2_pane_t5

0xaeba,	// (0x0008c154) main_camera2_pane_t6_ParamLimits

0xaeba,	// (0x0008c154) main_camera2_pane_t6

0x50a9,	// (0x00086343) main_image2_pane_g1_ParamLimits

0x50a9,	// (0x00086343) main_image2_pane_g1

0x331c,	// (0x000845b6) smil2_video_pane_ParamLimits

0x331c,	// (0x000845b6) smil2_video_pane

0xac29,	// (0x0008bec3) aid_zoom_text_primary_cp

0xac6e,	// (0x0008bf08) popup_preview_fixed_window

0xdf05,	// (0x0008f19f) im_reading_pane_g1

0x4e5c,	// (0x000860f6) cams2_bc_adjust_pane_cp_ParamLimits

0x4e5c,	// (0x000860f6) cams2_bc_adjust_pane_cp

0xee4a,	// (0x000900e4) cams2_bc_adjust_pane_ParamLimits

0xee4a,	// (0x000900e4) cams2_bc_adjust_pane

0xdc4c,	// (0x0008eee6) cams2_bc_adjust_pane_g1

0xc242,	// (0x0008d4dc) cams2_slider_pane

0xdc4c,	// (0x0008eee6) cams2_slider_pane_g1

0xdc4c,	// (0x0008eee6) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x0009085b) cams2_slider_pane_g

0x0d2f,	// (0x00081fc9) calc_display_pane_ParamLimits

0x0d54,	// (0x00081fee) calc_paper_pane_ParamLimits

0x0d77,	// (0x00082011) grid_calc_pane_ParamLimits

0xad9e,	// (0x0008c038) popup_clock_digital_window_t1_ParamLimits

0xefed,	// (0x00090287) main_image_pane_t1

0x0d0f,	// (0x00081fa9) aid_size_cell_calc_ParamLimits

0x0d0f,	// (0x00081fa9) aid_size_cell_calc

0x48c2,	// (0x00085b5c) popup_blid_sat_info2_window_ParamLimits

0x48c2,	// (0x00085b5c) popup_blid_sat_info2_window

0x50bf,	// (0x00086359) aid_size_cell_blid

0x4e7e,	// (0x00086118) bg_popup_window_pane_cp07

0x50dc,	// (0x00086376) grid_popup_blid_pane

0x50e6,	// (0x00086380) heading_pane_cp05_ParamLimits

0x50e6,	// (0x00086380) heading_pane_cp05

0x51b0,	// (0x0008644a) cell_popup_blid_pane_ParamLimits

0x51b0,	// (0x0008644a) cell_popup_blid_pane

0x51da,	// (0x00086474) cell_popup_blid_pane_g1

0x51e2,	// (0x0008647c) cell_popup_blid_pane_t1

0xee4a,	// (0x000900e4) mup2_indicator_pane_ParamLimits

0xee4a,	// (0x000900e4) mup2_indicator_pane

0xc242,	// (0x0008d4dc) mup2_visualizer_osc_pane

0x4eae,	// (0x00086148) mup2_visualizer_spec_pane_ParamLimits

0x4eae,	// (0x00086148) mup2_visualizer_spec_pane

0xc242,	// (0x0008d4dc) mup2_spec_half_pane

0xc242,	// (0x0008d4dc) mup2_spec_half_pane_cp

0x51f0,	// (0x0008648a) mup2_spec_bar_pane_ParamLimits

0x51f0,	// (0x0008648a) mup2_spec_bar_pane

0xdc4c,	// (0x0008eee6) mup2_spec_bar_pane_g1

0x520f,	// (0x000864a9) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x00090881) mup2_spec_bar_pane_g

0xc242,	// (0x0008d4dc) mup2_osc_middle_pane

0xdc4c,	// (0x0008eee6) mup2_visualizer_osc_pane_g1

0xc26c,	// (0x0008d506) popup_number_entry_window_t1_ParamLimits

0xc27f,	// (0x0008d519) popup_number_entry_window_t2_ParamLimits

0xc291,	// (0x0008d52b) popup_number_entry_window_t3_ParamLimits

0xc2a3,	// (0x0008d53d) popup_number_entry_window_t5_ParamLimits

0xc2a3,	// (0x0008d53d) popup_number_entry_window_t5

0xf040,	// (0x000902da) popup_number_entry_window_t_ParamLimits

0xc2d8,	// (0x0008d572) text_title_cp2_ParamLimits

0xadf2,	// (0x0008c08c) aid_hotspot_pointer_text2_pane

0xae18,	// (0x0008c0b2) main_viewer_pane_g9_ParamLimits

0xae18,	// (0x0008c0b2) main_viewer_pane_g9

0xe14d,	// (0x0008f3e7) cale_month_pane_t1_ParamLimits

0xe18a,	// (0x0008f424) bg_cale_pane_ParamLimits

0xe1a2,	// (0x0008f43c) list_cale_pane_ParamLimits

0xe1b3,	// (0x0008f44d) listscroll_cale_day_pane_t1

0xe1c5,	// (0x0008f45f) scroll_pane_cp09_ParamLimits

0x2d16,	// (0x00083fb0) main_mup_eq_pane_t1_ParamLimits

0x2d16,	// (0x00083fb0) main_mup_eq_pane_t1

0x2d32,	// (0x00083fcc) main_mup_eq_pane_t2_ParamLimits

0x2d32,	// (0x00083fcc) main_mup_eq_pane_t2

0x2d4e,	// (0x00083fe8) main_mup_eq_pane_t3_ParamLimits

0x2d4e,	// (0x00083fe8) main_mup_eq_pane_t3

0x2d6c,	// (0x00084006) main_mup_eq_pane_t4_ParamLimits

0x2d6c,	// (0x00084006) main_mup_eq_pane_t4

0x2d8a,	// (0x00084024) main_mup_eq_pane_t5_ParamLimits

0x2d8a,	// (0x00084024) main_mup_eq_pane_t5

0x2da8,	// (0x00084042) main_mup_eq_pane_t6_ParamLimits

0x2da8,	// (0x00084042) main_mup_eq_pane_t6

0x2dbe,	// (0x00084058) main_mup_eq_pane_t7_ParamLimits

0x2dbe,	// (0x00084058) main_mup_eq_pane_t7

0x2dd4,	// (0x0008406e) main_mup_eq_pane_t8_ParamLimits

0x2dd4,	// (0x0008406e) main_mup_eq_pane_t8

0x2dea,	// (0x00084084) main_mup_eq_pane_t9_ParamLimits

0x2dea,	// (0x00084084) main_mup_eq_pane_t9

0x2e06,	// (0x000840a0) main_mup_eq_pane_t10_ParamLimits

0x2e06,	// (0x000840a0) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x00090634) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x00090634) main_mup_eq_pane_t

0x2edb,	// (0x00084175) mup_equalizer_pane_cp5_ParamLimits

0x2ef3,	// (0x0008418d) mup_equalizer_pane_cp6_ParamLimits

0x2f0b,	// (0x000841a5) mup_equalizer_pane_cp7_ParamLimits

0xc242,	// (0x0008d4dc) main_gallery_pane

0x4c6b,	// (0x00085f05) smil2_volume_pane

0x4c73,	// (0x00085f0d) smil_status_volume_pane_g1_ParamLimits

0x4c86,	// (0x00085f20) smil_status_volume_pane_g2_ParamLimits

0xae7c,	// (0x0008c116) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x000907da) smil_status_volume_pane_g_ParamLimits

0x4e7e,	// (0x00086118) bg_popup_window_pane_cp07_ParamLimits

0x50c7,	// (0x00086361) blid_firmament_pane

0xcf46,	// (0x0008e1e0) aid_size_cell_gallery_ParamLimits

0xcf46,	// (0x0008e1e0) aid_size_cell_gallery

0xcf46,	// (0x0008e1e0) grid_gallery_pane_ParamLimits

0xcf46,	// (0x0008e1e0) grid_gallery_pane

0x4e7e,	// (0x00086118) cell_gallery_pane_ParamLimits

0x4e7e,	// (0x00086118) cell_gallery_pane

0xcf46,	// (0x0008e1e0) bg_cell_gallery_focus_pane_ParamLimits

0xcf46,	// (0x0008e1e0) bg_cell_gallery_focus_pane

0xd58b,	// (0x0008e825) cell_gallery_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) cell_gallery_pane_g1

0xd58b,	// (0x0008e825) cell_gallery_pane_g2_ParamLimits

0xd58b,	// (0x0008e825) cell_gallery_pane_g2

0xd58b,	// (0x0008e825) cell_gallery_pane_g3_ParamLimits

0xd58b,	// (0x0008e825) cell_gallery_pane_g3

0xd599,	// (0x0008e833) cell_gallery_pane_g4_ParamLimits

0xd599,	// (0x0008e833) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x00090886) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x00090886) cell_gallery_pane_g

0x5219,	// (0x000864b3) bg_cell_gallery_focus_pane_g1

0x5221,	// (0x000864bb) bg_cell_gallery_focus_pane_g2

0x5229,	// (0x000864c3) bg_cell_gallery_focus_pane_g3

0x5231,	// (0x000864cb) bg_cell_gallery_focus_pane_g4

0x5239,	// (0x000864d3) bg_cell_gallery_focus_pane_g5

0x5241,	// (0x000864db) bg_cell_gallery_focus_pane_g6

0x5249,	// (0x000864e3) bg_cell_gallery_focus_pane_g7

0x5251,	// (0x000864eb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x0009088f) bg_cell_gallery_focus_pane_g

0x5259,	// (0x000864f3) aid_firma_cardinal

0x526d,	// (0x00086507) blid_firmament_pane_t1

0x5284,	// (0x0008651e) blid_firmament_pane_t2

0x529b,	// (0x00086535) blid_firmament_pane_t3

0x52b2,	// (0x0008654c) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x000908a0) blid_firmament_pane_t

0x52c9,	// (0x00086563) blid_sat_info_pane

0xdc4c,	// (0x0008eee6) blid_sat_info_pane_g1

0xdc4c,	// (0x0008eee6) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00090349) blid_sat_info_pane_g

0x52d9,	// (0x00086573) blid_sat_info_pane_t1

0x52e7,	// (0x00086581) smil2_volume_content_pane

0x52f0,	// (0x0008658a) smil2_volume_pane_g1

0xe955,	// (0x0008fbef) smil2_volume_content_pane_g1

0x52f8,	// (0x00086592) smil2_volume_content_pane_g2

0x5301,	// (0x0008659b) smil2_volume_content_pane_g3

0x530a,	// (0x000865a4) smil2_volume_content_pane_g4

0x5313,	// (0x000865ad) smil2_volume_content_pane_g5

0x531c,	// (0x000865b6) smil2_volume_content_pane_g6

0x5325,	// (0x000865bf) smil2_volume_content_pane_g7

0x532e,	// (0x000865c8) smil2_volume_content_pane_g8

0x5337,	// (0x000865d1) smil2_volume_content_pane_g9

0x5340,	// (0x000865da) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x000908a9) smil2_volume_content_pane_g

0x12d9,	// (0x00082573) cale_week_day_heading_pane_t1_ParamLimits

0x1303,	// (0x0008259d) cale_week_day_heading_pane_t2_ParamLimits

0x1332,	// (0x000825cc) cale_week_day_heading_pane_t3_ParamLimits

0x1361,	// (0x000825fb) cale_week_day_heading_pane_t4_ParamLimits

0x1390,	// (0x0008262a) cale_week_day_heading_pane_t5_ParamLimits

0x13c3,	// (0x0008265d) cale_week_day_heading_pane_t6_ParamLimits

0x13fa,	// (0x00082694) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x000903e1) cale_week_day_heading_pane_t_ParamLimits

0xdded,	// (0x0008f087) bg_cale_side_pane_ParamLimits

0x1424,	// (0x000826be) cale_week_time_pane_t1_ParamLimits

0x143e,	// (0x000826d8) cale_week_time_pane_t2_ParamLimits

0x1458,	// (0x000826f2) cale_week_time_pane_t3_ParamLimits

0x1472,	// (0x0008270c) cale_week_time_pane_t4_ParamLimits

0x148c,	// (0x00082726) cale_week_time_pane_t5_ParamLimits

0x14a6,	// (0x00082740) cale_week_time_pane_t6_ParamLimits

0x14c6,	// (0x00082760) cale_week_time_pane_t7_ParamLimits

0x14ec,	// (0x00082786) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x000903f0) cale_week_time_pane_t_ParamLimits

0x1512,	// (0x000827ac) cell_cale_week_pane_g2_ParamLimits

0xdded,	// (0x0008f087) bg_cale_side_pane_cp01_ParamLimits

0x25f3,	// (0x0008388d) cale_month_week_pane_t1_ParamLimits

0x260c,	// (0x000838a6) cale_month_week_pane_t2_ParamLimits

0x2625,	// (0x000838bf) cale_month_week_pane_t3_ParamLimits

0x263e,	// (0x000838d8) cale_month_week_pane_t4_ParamLimits

0x2657,	// (0x000838f1) cale_month_week_pane_t5_ParamLimits

0x2670,	// (0x0008390a) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x000904be) cale_month_week_pane_t_ParamLimits

0xad1e,	// (0x0008bfb8) cell_cale_month_pane_g1_ParamLimits

0xc242,	// (0x0008d4dc) main_cale_event_viewer_pane

0xc242,	// (0x0008d4dc) listscroll_cale_event_viewer_pane

0x5349,	// (0x000865e3) list_cale_ev_pane

0x5351,	// (0x000865eb) scroll_pane_cp023

0x535d,	// (0x000865f7) field_cale_ev_pane_ParamLimits

0x535d,	// (0x000865f7) field_cale_ev_pane

0x5381,	// (0x0008661b) field_cale_ev_content_pane_ParamLimits

0x5381,	// (0x0008661b) field_cale_ev_content_pane

0x538d,	// (0x00086627) field_cale_ev_pane_g1_ParamLimits

0x538d,	// (0x00086627) field_cale_ev_pane_g1

0x5399,	// (0x00086633) field_cale_ev_pane_g2_ParamLimits

0x5399,	// (0x00086633) field_cale_ev_pane_g2

0x53b1,	// (0x0008664b) field_cale_ev_pane_g3_ParamLimits

0x53b1,	// (0x0008664b) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x000908be) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x000908be) field_cale_ev_pane_g

0x53c9,	// (0x00086663) field_cale_ev_pane_t1_ParamLimits

0x53c9,	// (0x00086663) field_cale_ev_pane_t1

0x53e0,	// (0x0008667a) field_cale_ev_content_pane_t1_ParamLimits

0x53e0,	// (0x0008667a) field_cale_ev_content_pane_t1

0xeeef,	// (0x00090189) bg_button_pane_cp01

0x0f91,	// (0x0008222b) listscroll_cale_week_pane_ParamLimits

0xddb5,	// (0x0008f04f) popup_toolbar_window_cp01

0xddbe,	// (0x0008f058) listscroll_cale_week_pane_t1_ParamLimits

0x0f91,	// (0x0008222b) listscroll_cale_day_pane_ParamLimits

0xddb5,	// (0x0008f04f) popup_toolbar_window_cp02

0xe1b3,	// (0x0008f44d) listscroll_cale_day_pane_t1_ParamLimits

0x0f91,	// (0x0008222b) main_cale_month_pane_ParamLimits

0xae67,	// (0x0008c101) popup_toolbar_window_cp03_ParamLimits

0xae67,	// (0x0008c101) popup_toolbar_window_cp03

0x31bc,	// (0x00084456) main_image_pane_g2_ParamLimits

0x31bc,	// (0x00084456) main_image_pane_g2

0x31cd,	// (0x00084467) main_image_pane_g3_ParamLimits

0x31cd,	// (0x00084467) main_image_pane_g3

0x0002,

0xf42c,	// (0x000906c6) main_image_pane_g_ParamLimits

0xf42c,	// (0x000906c6) main_image_pane_g

0xefed,	// (0x00090287) main_image_pane_t1_ParamLimits

0x31de,	// (0x00084478) main_image_pane_t2_ParamLimits

0x31de,	// (0x00084478) main_image_pane_t2

0x31f0,	// (0x0008448a) main_image_pane_t3_ParamLimits

0x31f0,	// (0x0008448a) main_image_pane_t3

0x3218,	// (0x000844b2) main_image_pane_t4_ParamLimits

0x3218,	// (0x000844b2) main_image_pane_t4

0x0003,

0xf433,	// (0x000906cd) main_image_pane_t_ParamLimits

0xf433,	// (0x000906cd) main_image_pane_t

0x3238,	// (0x000844d2) popup_image_details_window_cp01

0x3242,	// (0x000844dc) popup_toobar_trans_pane_cp01_ParamLimits

0x3242,	// (0x000844dc) popup_toobar_trans_pane_cp01

0x49b5,	// (0x00085c4f) popup_image_details_window_ParamLimits

0x49b5,	// (0x00085c4f) popup_image_details_window

0xae38,	// (0x0008c0d2) popup_image_focus_window

0xae9e,	// (0x0008c138) camera2_autofocus_pane_ParamLimits

0xae9e,	// (0x0008c138) camera2_autofocus_pane

0xc242,	// (0x0008d4dc) bg_popup_sub_pane_cp06

0x5401,	// (0x0008669b) popup_image_focus_window_g1

0x5409,	// (0x000866a3) popup_image_focus_window_g2

0x5411,	// (0x000866ab) popup_image_focus_window_g3

0x5419,	// (0x000866b3) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x000908c5) popup_image_focus_window_g

0x5421,	// (0x000866bb) popup_image_focus_window_t1

0x542f,	// (0x000866c9) popup_image_focus_window_t2

0x543f,	// (0x000866d9) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x000908ce) popup_image_focus_window_t

0xd58b,	// (0x0008e825) camera2_autofocus_pane_g1

0xcf46,	// (0x0008e1e0) bg_tb_trans_pane_cp01

0x544d,	// (0x000866e7) popup_image_details_window_g1

0x5460,	// (0x000866fa) popup_image_details_window_g2

0x0002,

0xf646,	// (0x000908e0) popup_image_details_window_g

0x5489,	// (0x00086723) popup_image_details_window_t1

0x549b,	// (0x00086735) popup_image_details_window_t2

0x54b4,	// (0x0008674e) popup_image_details_window_t3

0x54c8,	// (0x00086762) popup_image_details_window_t4

0x54e3,	// (0x0008677d) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x000908e7) popup_image_details_window_t

0xdc96,	// (0x0008ef30) bg_calc_paper_pane_ParamLimits

0xc242,	// (0x0008d4dc) grid_highlight_pane_cp013

0xac80,	// (0x0008bf1a) list_calc_pane_ParamLimits

0xac92,	// (0x0008bf2c) scroll_pane_cp024

0xdcaa,	// (0x0008ef44) bg_calc_display_pane_ParamLimits

0x0db9,	// (0x00082053) calc_display_pane_t1_ParamLimits

0x0dce,	// (0x00082068) calc_display_pane_t2_ParamLimits

0xac9a,	// (0x0008bf34) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00090361) calc_display_pane_t_ParamLimits

0x0e9c,	// (0x00082136) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x0009037e) cell_calc_pane_g

0x0ea5,	// (0x0008213f) cell_calc_pane_t1

0xdcff,	// (0x0008ef99) grid_highlight_pane_cp02_ParamLimits

0xdd15,	// (0x0008efaf) toolbar_button_pane_cp01_ParamLimits

0xdd15,	// (0x0008efaf) toolbar_button_pane_cp01

0x3256,	// (0x000844f0) temp_image_control_pane_ParamLimits

0x3256,	// (0x000844f0) temp_image_control_pane

0xcf46,	// (0x0008e1e0) main_mp3_pane

0x54fd,	// (0x00086797) temp_image_control_pane_g1_ParamLimits

0x54fd,	// (0x00086797) temp_image_control_pane_g1

0x550b,	// (0x000867a5) temp_image_control_pane_g2_ParamLimits

0x550b,	// (0x000867a5) temp_image_control_pane_g2

0x551d,	// (0x000867b7) temp_image_control_pane_g3_ParamLimits

0x551d,	// (0x000867b7) temp_image_control_pane_g3

0x552d,	// (0x000867c7) temp_image_control_pane_g4_ParamLimits

0x552d,	// (0x000867c7) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x000908f2) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x000908f2) temp_image_control_pane_g

0x54fd,	// (0x00086797) main_mp3_pane_g1

0x5540,	// (0x000867da) main_mp3_pane_g2

0x0007,

0xf661,	// (0x000908fb) main_mp3_pane_g

0x558b,	// (0x00086825) main_mp3_pane_t1

0xd599,	// (0x0008e833) main_camera_pane_g8_ParamLimits

0xd599,	// (0x0008e833) main_camera_pane_g8

0x16e9,	// (0x00082983) main_video_pane_g7_ParamLimits

0x16e9,	// (0x00082983) main_video_pane_g7

0xdc6a,	// (0x0008ef04) main_camera2_pane_t7_ParamLimits

0xdc6a,	// (0x0008ef04) main_camera2_pane_t7

0xdf6b,	// (0x0008f205) scroll_pane_cp025_ParamLimits

0xdf6b,	// (0x0008f205) scroll_pane_cp025

0xdf7f,	// (0x0008f219) scroll_pane_cp026_ParamLimits

0xdf7f,	// (0x0008f219) scroll_pane_cp026

0xdf8e,	// (0x0008f228) wml_content_pane_ParamLimits

0xc242,	// (0x0008d4dc) main_touch_calib_pane

0x5669,	// (0x00086903) main_touch_calib_pane_g1

0x567b,	// (0x00086915) main_touch_calib_pane_g2

0x568d,	// (0x00086927) main_touch_calib_pane_g3

0x569f,	// (0x00086939) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x00090919) main_touch_calib_pane_g

0x56b1,	// (0x0008694b) main_touch_calib_pane_t1

0x56cb,	// (0x00086965) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x00090922) main_touch_calib_pane_t

0xecb2,	// (0x0008ff4c) mup_progress_pane_cp02

0xecd1,	// (0x0008ff6b) navi_pane_g1

0xed33,	// (0x0008ffcd) navi_pane_mp_t3

0xcf46,	// (0x0008e1e0) main_mp3_pane_ParamLimits

0x4b81,	// (0x00085e1b) navi_pane_ParamLimits

0x54fd,	// (0x00086797) main_mp3_pane_g1_ParamLimits

0x5540,	// (0x000867da) main_mp3_pane_g2_ParamLimits

0x554c,	// (0x000867e6) main_mp3_pane_g3_ParamLimits

0x554c,	// (0x000867e6) main_mp3_pane_g3

0x555a,	// (0x000867f4) main_mp3_pane_g4_ParamLimits

0x555a,	// (0x000867f4) main_mp3_pane_g4

0xd58b,	// (0x0008e825) main_mp3_pane_g5_ParamLimits

0xd58b,	// (0x0008e825) main_mp3_pane_g5

0x5566,	// (0x00086800) main_mp3_pane_g6_ParamLimits

0x5566,	// (0x00086800) main_mp3_pane_g6

0x5573,	// (0x0008680d) main_mp3_pane_g7_ParamLimits

0x5573,	// (0x0008680d) main_mp3_pane_g7

0x557f,	// (0x00086819) main_mp3_pane_g8_ParamLimits

0x557f,	// (0x00086819) main_mp3_pane_g8

0xf661,	// (0x000908fb) main_mp3_pane_g_ParamLimits

0x5599,	// (0x00086833) main_mp3_pane_t2

0x55a7,	// (0x00086841) main_mp3_pane_t3

0x55b5,	// (0x0008684f) main_mp3_pane_t4

0x55c3,	// (0x0008685d) main_mp3_pane_t5

0x0005,

0xf672,	// (0x0009090c) main_mp3_pane_t

0x55df,	// (0x00086879) mup_progress_pane_cp01

0xac29,	// (0x0008bec3) aid_zoom_text_secondary2

0x5349,	// (0x000865e3) list_cale_ev2_pane

0x5351,	// (0x000865eb) scroll_pane_cp023_ParamLimits

0x5725,	// (0x000869bf) field_cale_ev2_pane_ParamLimits

0x5725,	// (0x000869bf) field_cale_ev2_pane

0x5749,	// (0x000869e3) field_cale_ev2_pane_g1_ParamLimits

0x5749,	// (0x000869e3) field_cale_ev2_pane_g1

0x5755,	// (0x000869ef) field_cale_ev2_pane_g2_ParamLimits

0x5755,	// (0x000869ef) field_cale_ev2_pane_g2

0x576d,	// (0x00086a07) field_cale_ev2_pane_g3_ParamLimits

0x576d,	// (0x00086a07) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x0009092d) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x0009092d) field_cale_ev2_pane_g

0x025b,	// (0x000814f5) field_cale_ev2_pane_t1_ParamLimits

0x025b,	// (0x000814f5) field_cale_ev2_pane_t1

0x0272,	// (0x0008150c) field_cale_ev2_pane_t2_ParamLimits

0x0272,	// (0x0008150c) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x00090936) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x00090936) field_cale_ev2_pane_t

0x307c,	// (0x00084316) main_postcard_pane_g5_ParamLimits

0x307c,	// (0x00084316) main_postcard_pane_g5

0x3092,	// (0x0008432c) main_postcard_pane_g6_ParamLimits

0x3092,	// (0x0008432c) main_postcard_pane_g6

0xcf46,	// (0x0008e1e0) camera2_autofocus_pane_cp_ParamLimits

0xcf46,	// (0x0008e1e0) camera2_autofocus_pane_cp

0xcf46,	// (0x0008e1e0) main_mup3_pane

0x57cf,	// (0x00086a69) main_mup3_pane_g1_ParamLimits

0x57cf,	// (0x00086a69) main_mup3_pane_g1

0x57f1,	// (0x00086a8b) main_mup3_pane_g2_ParamLimits

0x57f1,	// (0x00086a8b) main_mup3_pane_g2

0x586c,	// (0x00086b06) main_mup3_pane_g3_ParamLimits

0x586c,	// (0x00086b06) main_mup3_pane_g3

0x58d6,	// (0x00086b70) main_mup3_pane_g4_ParamLimits

0x58d6,	// (0x00086b70) main_mup3_pane_g4

0x5940,	// (0x00086bda) main_mup3_pane_g5_ParamLimits

0x5940,	// (0x00086bda) main_mup3_pane_g5

0x59aa,	// (0x00086c44) main_mup3_pane_g6_ParamLimits

0x59aa,	// (0x00086c44) main_mup3_pane_g6

0xd599,	// (0x0008e833) main_mup3_pane_g7_ParamLimits

0xd599,	// (0x0008e833) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x00090946) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x00090946) main_mup3_pane_g

0x5a2e,	// (0x00086cc8) main_mup3_pane_t1_ParamLimits

0x5a2e,	// (0x00086cc8) main_mup3_pane_t1

0x5a98,	// (0x00086d32) main_mup3_pane_t2_ParamLimits

0x5a98,	// (0x00086d32) main_mup3_pane_t2

0x5b6e,	// (0x00086e08) main_mup3_pane_t4_ParamLimits

0x5b6e,	// (0x00086e08) main_mup3_pane_t4

0x5bcc,	// (0x00086e66) main_mup3_pane_t5_ParamLimits

0x5bcc,	// (0x00086e66) main_mup3_pane_t5

0x5c94,	// (0x00086f2e) main_mup3_pane_t6_ParamLimits

0x5c94,	// (0x00086f2e) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x00090957) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x00090957) main_mup3_pane_t

0x5d4c,	// (0x00086fe6) mup3_progress_pane_ParamLimits

0x5d4c,	// (0x00086fe6) mup3_progress_pane

0x5de4,	// (0x0008707e) popup_mup3_control_window_ParamLimits

0x5de4,	// (0x0008707e) popup_mup3_control_window

0x5e04,	// (0x0008709e) popup_mup3_text_window

0x5e22,	// (0x000870bc) mup3_progress_pane_t1

0x5e41,	// (0x000870db) mup3_progress_pane_t2

0x5e60,	// (0x000870fa) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x00090964) mup3_progress_pane_t

0xaefe,	// (0x0008c198) mup_progress_pane_cp03

0xc242,	// (0x0008d4dc) bg_tb_trans_pane_cp04

0x5e7d,	// (0x00087117) mup3_volume_pane

0x5e85,	// (0x0008711f) popup_mup3_control_window_g1

0x5e8e,	// (0x00087128) mup3_volume_pane_g1

0x5e97,	// (0x00087131) mup3_volume_pane_g2

0x5ea0,	// (0x0008713a) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x0009096b) mup3_volume_pane_g

0xc242,	// (0x0008d4dc) bg_tb_trans_pane_cp03

0xaf0e,	// (0x0008c1a8) popup_mup3_text_window_g1

0xaf16,	// (0x0008c1b0) popup_mup3_text_window_t1

0xdcf2,	// (0x0008ef8c) list_calc_item_pane_g1_ParamLimits

0x5010,	// (0x000862aa) mup_volume_pane_cp_g1

0x56e5,	// (0x0008697f) main_touch_calib_pane_t3

0x56f9,	// (0x00086993) main_touch_calib_pane_t4

0x570f,	// (0x000869a9) main_touch_calib_pane_t5

0xac05,	// (0x0008be9f) aid_cell_size_toolbar2

0xac0d,	// (0x0008bea7) aid_popup3_width_pane

0xac19,	// (0x0008beb3) aid_zoom_text_msg_primary

0x15c2,	// (0x0008285c) vorec_t7

0xdcb6,	// (0x0008ef50) bg_calc_paper_pane_g1_ParamLimits

0xdcc2,	// (0x0008ef5c) bg_calc_paper_pane_g2_ParamLimits

0xdcce,	// (0x0008ef68) bg_calc_paper_pane_g3_ParamLimits

0xdcda,	// (0x0008ef74) bg_calc_paper_pane_g4_ParamLimits

0xdce6,	// (0x0008ef80) bg_calc_paper_pane_g5_ParamLimits

0x0e1e,	// (0x000820b8) bg_calc_paper_pane_g6_ParamLimits

0x0e31,	// (0x000820cb) bg_calc_paper_pane_g7_ParamLimits

0x0e44,	// (0x000820de) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00090368) bg_calc_paper_pane_g_ParamLimits

0x0e57,	// (0x000820f1) calc_bg_paper_pane_g9_ParamLimits

0xcf46,	// (0x0008e1e0) image_qvga_pane_ParamLimits

0xcf46,	// (0x0008e1e0) image_qvga_pane

0xd51e,	// (0x0008e7b8) bg_popup_sub_pane_cp04_ParamLimits

0xef69,	// (0x00090203) popup_mup_playback_window_g1_ParamLimits

0xef75,	// (0x0009020f) popup_mup_playback_window_t1_ParamLimits

0xef8a,	// (0x00090224) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x000906c1) popup_mup_playback_window_t_ParamLimits

0xd599,	// (0x0008e833) main_mup2_pane_g3_ParamLimits

0xd599,	// (0x0008e833) main_mup2_pane_g3

0x1891,	// (0x00082b2b) popup_toolbar_window_cp04

0x38a4,	// (0x00084b3e) popup_call2_audio_second_window_g3_ParamLimits

0x38a4,	// (0x00084b3e) popup_call2_audio_second_window_g3

0x3cbe,	// (0x00084f58) popup_call2_audio_first_window_g4_ParamLimits

0x3cbe,	// (0x00084f58) popup_call2_audio_first_window_g4

0x433d,	// (0x000855d7) popup_call2_audio_in_window_g4_ParamLimits

0x433d,	// (0x000855d7) popup_call2_audio_in_window_g4

0x319e,	// (0x00084438) aid_area_sk_bg_cut_ParamLimits

0x319e,	// (0x00084438) aid_area_sk_bg_cut

0xef9f,	// (0x00090239) aid_area_sk_bg_cut_2_ParamLimits

0xef9f,	// (0x00090239) aid_area_sk_bg_cut_2

0xc242,	// (0x0008d4dc) aid_placing_details_win

0xc242,	// (0x0008d4dc) aid_placing_details_win_2

0xd58b,	// (0x0008e825) camera2_autofocus_pane_g1_ParamLimits

0x0c34,	// (0x00081ece) popup_fixed_preview_cale_window_ParamLimits

0x0c34,	// (0x00081ece) popup_fixed_preview_cale_window

0xed7a,	// (0x00090014) navi_slider_pane_g3

0xed83,	// (0x0009001d) navi_slider_pane_g4

0xed8c,	// (0x00090026) navi_slider_pane_g5

0xed7a,	// (0x00090014) navi_slider_pane_g6

0xadc4,	// (0x0008c05e) navi_slider_pane_g7

0xeebc,	// (0x00090156) mup_scale_pane_g3

0xeec5,	// (0x0009015f) mup_scale_pane_g4

0xeece,	// (0x00090168) mup_scale_pane_g5

0x2f23,	// (0x000841bd) mup_scale_pane_g6

0x2f2c,	// (0x000841c6) mup_scale_pane_g7

0xdc4c,	// (0x0008eee6) cams2_slider_pane_g3

0xdc4c,	// (0x0008eee6) cams2_slider_pane_g4

0xdc4c,	// (0x0008eee6) cams2_slider_pane_g5

0xdc4c,	// (0x0008eee6) cams2_slider_pane_g6

0xdc4c,	// (0x0008eee6) cams2_slider_pane_g7

0xdc4c,	// (0x0008eee6) camera2_autofocus_pane_cp_g1

0x488e,	// (0x00085b28) bg_popup_preview_window_pane_cp02_ParamLimits

0x488e,	// (0x00085b28) bg_popup_preview_window_pane_cp02

0xaf24,	// (0x0008c1be) list_fp_cale_pane_ParamLimits

0xaf24,	// (0x0008c1be) list_fp_cale_pane

0xaf30,	// (0x0008c1ca) popup_fixed_preview_cale_window_t1_ParamLimits

0xaf30,	// (0x0008c1ca) popup_fixed_preview_cale_window_t1

0x5ea9,	// (0x00087143) popup_fixed_preview_cale_window_t2_ParamLimits

0x5ea9,	// (0x00087143) popup_fixed_preview_cale_window_t2

0x5ebe,	// (0x00087158) popup_fixed_preview_cale_window_t3_ParamLimits

0x5ebe,	// (0x00087158) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x00090972) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x00090972) popup_fixed_preview_cale_window_t

0x5ed5,	// (0x0008716f) list_single_fp_cale_pane_ParamLimits

0x5ed5,	// (0x0008716f) list_single_fp_cale_pane

0xaf4e,	// (0x0008c1e8) list_single_fp_cale_pane_g1_ParamLimits

0xaf4e,	// (0x0008c1e8) list_single_fp_cale_pane_g1

0xaf5a,	// (0x0008c1f4) list_single_fp_cale_pane_g2_ParamLimits

0xaf5a,	// (0x0008c1f4) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x00090979) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x00090979) list_single_fp_cale_pane_g

0xaf73,	// (0x0008c20d) list_single_fp_cale_pane_t1_ParamLimits

0xaf73,	// (0x0008c20d) list_single_fp_cale_pane_t1

0xaf85,	// (0x0008c21f) list_single_fp_cale_pane_t2_ParamLimits

0xaf85,	// (0x0008c21f) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x00090980) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x00090980) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc242,	// (0x0008d4dc) main_dialer_pane

0xc242,	// (0x0008d4dc) aid_cell_size_keypad

0xc242,	// (0x0008d4dc) dialer_ne_pane

0xc242,	// (0x0008d4dc) grid_dialer_command_1_pane

0xc242,	// (0x0008d4dc) grid_dialer_command_2_pane

0xc242,	// (0x0008d4dc) grid_dialer_keypad_pane

0x5eea,	// (0x00087184) bg_popup_call_pane_cp06_ParamLimits

0x5eea,	// (0x00087184) bg_popup_call_pane_cp06

0x5eea,	// (0x00087184) dialer_ne_clear_pane_ParamLimits

0x5eea,	// (0x00087184) dialer_ne_clear_pane

0xdc4c,	// (0x0008eee6) dialer_ne_pane_g1

0xdc6a,	// (0x0008ef04) dialer_ne_pane_t1_ParamLimits

0xdc6a,	// (0x0008ef04) dialer_ne_pane_t1

0x5ef8,	// (0x00087192) dialer_ne_pane_t2_ParamLimits

0x5ef8,	// (0x00087192) dialer_ne_pane_t2

0x5f20,	// (0x000871ba) dialer_ne_pane_t3_ParamLimits

0x5f20,	// (0x000871ba) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x00090985) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x00090985) dialer_ne_pane_t

0x5f20,	// (0x000871ba) dialer_ne_pane_t3_copy1_ParamLimits

0x5f20,	// (0x000871ba) dialer_ne_pane_t3_copy1

0xafb8,	// (0x0008c252) cell_dialer_keypad_pane_ParamLimits

0xafb8,	// (0x0008c252) cell_dialer_keypad_pane

0xcf46,	// (0x0008e1e0) cell_dialer_command_1_pane_ParamLimits

0xcf46,	// (0x0008e1e0) cell_dialer_command_1_pane

0xafcf,	// (0x0008c269) cell_dialer_command_2_pane_ParamLimits

0xafcf,	// (0x0008c269) cell_dialer_command_2_pane

0xcf46,	// (0x0008e1e0) bg_button_pane_cp02_ParamLimits

0xcf46,	// (0x0008e1e0) bg_button_pane_cp02

0xd58b,	// (0x0008e825) cell_dialer_keypad_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) cell_dialer_keypad_pane_g1

0xcf46,	// (0x0008e1e0) bg_button_pane_cp03_ParamLimits

0xcf46,	// (0x0008e1e0) bg_button_pane_cp03

0xd58b,	// (0x0008e825) cell_dialer_command_1_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) cell_dialer_command_1_pane_g1

0xc242,	// (0x0008d4dc) bg_button_pane_cp04

0xdc4c,	// (0x0008eee6) cell_dialer_command_2_pane_g1

0xc242,	// (0x0008d4dc) bg_button_pane_cp06

0xdc4c,	// (0x0008eee6) dialer_ne_clear_pane_g1

0x2c32,	// (0x00083ecc) navi_pane_g2

0x2c60,	// (0x00083efa) navi_pane_g3

0x0002,

0xf32f,	// (0x000905c9) navi_pane_g

0x2c8b,	// (0x00083f25) navi_pane_mv_g2

0x2cb2,	// (0x00083f4c) navi_pane_mv_g5

0x2cba,	// (0x00083f54) navi_pane_mv_t1

0xdcaa,	// (0x0008ef44) main_clock2_pane

0xcf46,	// (0x0008e1e0) main_clock2_list_pane_ParamLimits

0xcf46,	// (0x0008e1e0) main_clock2_list_pane

0x5fb1,	// (0x0008724b) main_clock2_pane_t1_ParamLimits

0x5fb1,	// (0x0008724b) main_clock2_pane_t1

0x5fec,	// (0x00087286) main_clock2_pane_t2_ParamLimits

0x5fec,	// (0x00087286) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x00090991) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x00090991) main_clock2_pane_t

0x608b,	// (0x00087325) popup_clock_analogue_window_cp03_ParamLimits

0x608b,	// (0x00087325) popup_clock_analogue_window_cp03

0x60b0,	// (0x0008734a) popup_clock_digital_window_cp02_ParamLimits

0x60b0,	// (0x0008734a) popup_clock_digital_window_cp02

0x6129,	// (0x000873c3) main_clock2_list_single_pane_ParamLimits

0x6129,	// (0x000873c3) main_clock2_list_single_pane

0xde48,	// (0x0008f0e2) list_highlight_pane_cp05

0xb010,	// (0x0008c2aa) main_clock2_list_single_pane_t1

0x1891,	// (0x00082b2b) popup_toolbar_window_cp04_ParamLimits

0xd599,	// (0x0008e833) camera2_autofocus_pane_g2_ParamLimits

0xd599,	// (0x0008e833) camera2_autofocus_pane_g2

0xd599,	// (0x0008e833) camera2_autofocus_pane_g3_ParamLimits

0xd599,	// (0x0008e833) camera2_autofocus_pane_g3

0xd599,	// (0x0008e833) camera2_autofocus_pane_g4_ParamLimits

0xd599,	// (0x0008e833) camera2_autofocus_pane_g4

0xd599,	// (0x0008e833) camera2_autofocus_pane_g5_ParamLimits

0xd599,	// (0x0008e833) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x000908d5) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x000908d5) camera2_autofocus_pane_g

0x5785,	// (0x00086a1f) camera2_autofocus_pane_cp_g2

0x578d,	// (0x00086a27) camera2_autofocus_pane_cp_g3

0x5795,	// (0x00086a2f) camera2_autofocus_pane_cp_g4

0x579d,	// (0x00086a37) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x0009093b) camera2_autofocus_pane_cp_g

0xc242,	// (0x0008d4dc) popup_dialer_spcha_window

0xc242,	// (0x0008d4dc) bg_popup_sub_pane_cp07

0xc242,	// (0x0008d4dc) list_spcha_pane

0xb01e,	// (0x0008c2b8) list_single_spcha_pane_ParamLimits

0xb01e,	// (0x0008c2b8) list_single_spcha_pane

0xc242,	// (0x0008d4dc) list_highlight_pane_cp06

0xe9a8,	// (0x0008fc42) list_single_spcha_pane_t1

0x40e7,	// (0x00085381) popup_call2_audio_out_window_g4_ParamLimits

0x40e7,	// (0x00085381) popup_call2_audio_out_window_g4

0xc242,	// (0x0008d4dc) main_imed2_pane

0xae42,	// (0x0008c0dc) popup_imed_adjust2_window

0x49cd,	// (0x00085c67) popup_imed_trans_window_ParamLimits

0x49cd,	// (0x00085c67) popup_imed_trans_window

0x5112,	// (0x000863ac) popup_blid_sat_info2_window_t1

0x5120,	// (0x000863ba) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x0009086a) popup_blid_sat_info2_window_t

0x61e4,	// (0x0008747e) aid_size_cell_colour_35

0x6204,	// (0x0008749e) aid_size_cell_colour_112

0x6224,	// (0x000874be) aid_size_cell_effect

0xee4a,	// (0x000900e4) bg_tb_trans_pane_cp02

0xe2d3,	// (0x0008f56d) heading_imed_pane

0x6244,	// (0x000874de) listscroll_imed_pane

0xb030,	// (0x0008c2ca) heading_imed_pane_g1

0xb038,	// (0x0008c2d2) heading_imed_pane_t1

0xb046,	// (0x0008c2e0) grid_imed_colour_35_pane_ParamLimits

0xb046,	// (0x0008c2e0) grid_imed_colour_35_pane

0x6250,	// (0x000874ea) grid_imed_effect_pane

0xb062,	// (0x0008c2fc) list_imed_aspect_pane

0x6267,	// (0x00087501) scroll_pane_cp027_ParamLimits

0x6267,	// (0x00087501) scroll_pane_cp027

0x6278,	// (0x00087512) cell_imed_effect_pane_ParamLimits

0x6278,	// (0x00087512) cell_imed_effect_pane

0xb06a,	// (0x0008c304) cell_imed_colour_pane_ParamLimits

0xb06a,	// (0x0008c304) cell_imed_colour_pane

0xb0b4,	// (0x0008c34e) cell_imed_colour_pane_g1_ParamLimits

0xb0b4,	// (0x0008c34e) cell_imed_colour_pane_g1

0xb0c5,	// (0x0008c35f) hgihlgiht_grid_pane_cp016_ParamLimits

0xb0c5,	// (0x0008c35f) hgihlgiht_grid_pane_cp016

0x62a3,	// (0x0008753d) cell_imed_effect_pane_g1

0x62ab,	// (0x00087545) grid_highlight_pane_cp017

0xb0d6,	// (0x0008c370) list_imed_single_pane_ParamLimits

0xb0d6,	// (0x0008c370) list_imed_single_pane

0xc242,	// (0x0008d4dc) list_highlight_pane_cp07

0xb0ea,	// (0x0008c384) list_imed_aspect_pane_comp1_t1

0xee4a,	// (0x000900e4) bg_tb_trans_pane_cp05

0xb10c,	// (0x0008c3a6) popup_imed_adjust2_window_g1

0xb133,	// (0x0008c3cd) popup_imed_adjust2_window_t1

0xb14b,	// (0x0008c3e5) slider_imed_adjust_pane

0xb15f,	// (0x0008c3f9) slider_imed_adjust_pane_g1

0xb16f,	// (0x0008c409) slider_imed_adjust_pane_g2

0xb17f,	// (0x0008c419) slider_imed_adjust_pane_g3

0xb190,	// (0x0008c42a) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x000909ae) slider_imed_adjust_pane_g

0x62b4,	// (0x0008754e) aid_size_cell_clipart2

0xb1a1,	// (0x0008c43b) grid_imed_clipart_pane

0xeedf,	// (0x00090179) scroll_pane_cp031

0x62c0,	// (0x0008755a) cell_imed_clipart_pane_ParamLimits

0x62c0,	// (0x0008755a) cell_imed_clipart_pane

0x62dd,	// (0x00087577) cell_imed_clipart_pane_g1

0xc242,	// (0x0008d4dc) grid_highlight_pane_cp014

0x5f8f,	// (0x00087229) main_clock2_pane_g1_ParamLimits

0x5f8f,	// (0x00087229) main_clock2_pane_g1

0x60d0,	// (0x0008736a) aid_call2_pane_cp10

0x60e2,	// (0x0008737c) aid_call_pane_cp10

0xeca6,	// (0x0008ff40) popup_clock_analogue_window_cp10_g1

0xeca6,	// (0x0008ff40) popup_clock_analogue_window_cp10_g2

0x60f4,	// (0x0008738e) popup_clock_analogue_window_cp10_g3

0x60f4,	// (0x0008738e) popup_clock_analogue_window_cp10_g4

0xeca6,	// (0x0008ff40) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x0009099c) popup_clock_analogue_window_cp10_g

0x610a,	// (0x000873a4) popup_clock_analogue_window_cp10_t1

0x613b,	// (0x000873d5) clock_digital_number_pane_cp10_ParamLimits

0x613b,	// (0x000873d5) clock_digital_number_pane_cp10

0x6155,	// (0x000873ef) clock_digital_number_pane_cp11_ParamLimits

0x6155,	// (0x000873ef) clock_digital_number_pane_cp11

0x616f,	// (0x00087409) clock_digital_number_pane_cp12_ParamLimits

0x616f,	// (0x00087409) clock_digital_number_pane_cp12

0x618b,	// (0x00087425) clock_digital_number_pane_cp13_ParamLimits

0x618b,	// (0x00087425) clock_digital_number_pane_cp13

0x61a7,	// (0x00087441) clock_digital_separator_pane_cp10_ParamLimits

0x61a7,	// (0x00087441) clock_digital_separator_pane_cp10

0x61c3,	// (0x0008745d) popup_clock_digital_window_cp02_t1_ParamLimits

0x61c3,	// (0x0008745d) popup_clock_digital_window_cp02_t1

0xd516,	// (0x0008e7b0) clock_digital_number_pane_cp10_g1

0xd516,	// (0x0008e7b0) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x000909b7) clock_digital_number_pane_cp10_g

0xd516,	// (0x0008e7b0) clock_digital_separator_pane_cp10_g1

0xd516,	// (0x0008e7b0) clock_digital_separator_pane_g2_cp10

0xed41,	// (0x0008ffdb) navi_pane_vded_g4

0xed4a,	// (0x0008ffe4) navi_pane_vded_g5

0xed53,	// (0x0008ffed) navi_pane_vded_t1

0xc242,	// (0x0008d4dc) main_vded_pane

0x62e6,	// (0x00087580) main_vded_pane_g1

0x62f2,	// (0x0008758c) main_vded_pane_g2

0x62fe,	// (0x00087598) main_vded_pane_g3

0x0002,

0xf722,	// (0x000909bc) main_vded_pane_g

0x630a,	// (0x000875a4) main_vded_pane_t1

0x6318,	// (0x000875b2) main_vded_pane_t2

0x0001,

0xf729,	// (0x000909c3) main_vded_pane_t

0x6326,	// (0x000875c0) vded_slider_pane

0x6330,	// (0x000875ca) vded_video_pane

0xb1ab,	// (0x0008c445) vded_video_pane_g1

0x633c,	// (0x000875d6) vded_video_pane_g2

0xdc4c,	// (0x0008eee6) vded_video_pane_g3

0x0002,

0xf72e,	// (0x000909c8) vded_video_pane_g

0xb1b5,	// (0x0008c44f) vded_slider_pane_g1

0x5010,	// (0x000862aa) vded_slider_pane_g2

0xb1be,	// (0x0008c458) vded_slider_pane_g3

0xb1c7,	// (0x0008c461) vded_slider_pane_g4

0xb1d0,	// (0x0008c46a) vded_slider_pane_g5

0x0004,

0xf735,	// (0x000909cf) vded_slider_pane_g

0x5dce,	// (0x00087068) mup3_rocker_pane_ParamLimits

0x5dce,	// (0x00087068) mup3_rocker_pane

0x6345,	// (0x000875df) mup3_control_keys_pane_g1

0x634d,	// (0x000875e7) mup3_control_keys_pane_g2

0x6355,	// (0x000875ef) mup3_control_keys_pane_g3

0x635d,	// (0x000875f7) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x000909da) mup3_control_keys_pane_g

0x0c69,	// (0x00081f03) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c69,	// (0x00081f03) popup_toolbar2_fixed_window_cp01

0x5e0c,	// (0x000870a6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5e0c,	// (0x000870a6) popup_toolbar2_fixed_window_cp02

0x3a16,	// (0x00084cb0) popup_call2_audio_second_window_t4_ParamLimits

0x3a16,	// (0x00084cb0) popup_call2_audio_second_window_t4

0x3f54,	// (0x000851ee) popup_call2_audio_first_window_t6_ParamLimits

0x3f54,	// (0x000851ee) popup_call2_audio_first_window_t6

0x41ea,	// (0x00085484) popup_call2_audio_out_window_t6_ParamLimits

0x41ea,	// (0x00085484) popup_call2_audio_out_window_t6

0xc242,	// (0x0008d4dc) main_vitu_pane

0xcf46,	// (0x0008e1e0) aid_size_cell_itu_ParamLimits

0xcf46,	// (0x0008e1e0) aid_size_cell_itu

0xcf46,	// (0x0008e1e0) bg_popup_window_pane_cp08_ParamLimits

0xcf46,	// (0x0008e1e0) bg_popup_window_pane_cp08

0xcf46,	// (0x0008e1e0) field_vitu_entry_pane_ParamLimits

0xcf46,	// (0x0008e1e0) field_vitu_entry_pane

0xcf46,	// (0x0008e1e0) grid_vitu_function_pane_ParamLimits

0xcf46,	// (0x0008e1e0) grid_vitu_function_pane

0xcf46,	// (0x0008e1e0) grid_vitu_itu_pane_ParamLimits

0xcf46,	// (0x0008e1e0) grid_vitu_itu_pane

0xcf46,	// (0x0008e1e0) cell_vitu_itu_pane_ParamLimits

0xcf46,	// (0x0008e1e0) cell_vitu_itu_pane

0xcf46,	// (0x0008e1e0) cell_vitu_function_pane_ParamLimits

0xcf46,	// (0x0008e1e0) cell_vitu_function_pane

0xcf46,	// (0x0008e1e0) bg_popup_sub_pane_cp08_ParamLimits

0xcf46,	// (0x0008e1e0) bg_popup_sub_pane_cp08

0xdc56,	// (0x0008eef0) field_vitu_entry_pane_t1_ParamLimits

0xdc56,	// (0x0008eef0) field_vitu_entry_pane_t1

0xb1d9,	// (0x0008c473) field_vitu_entry_pane_t2_ParamLimits

0xb1d9,	// (0x0008c473) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x000909e3) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x000909e3) field_vitu_entry_pane_t

0x4e7e,	// (0x00086118) bg_button_pane_cp05_ParamLimits

0x4e7e,	// (0x00086118) bg_button_pane_cp05

0xb1f6,	// (0x0008c490) cell_vitu_itu_pane_g1

0xee36,	// (0x000900d0) cell_vitu_itu_pane_t1_ParamLimits

0xee36,	// (0x000900d0) cell_vitu_itu_pane_t1

0xee36,	// (0x000900d0) cell_vitu_itu_pane_t2_ParamLimits

0xee36,	// (0x000900d0) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x000909e8) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x000909e8) cell_vitu_itu_pane_t

0xc242,	// (0x0008d4dc) bg_button_pane_cp07

0xdc4c,	// (0x0008eee6) cell_vitu_function_pane_g1

0xac78,	// (0x0008bf12) main_calc_pane_g1

0x0a93,	// (0x00081d2d) aid_visual_content_pane

0xc242,	// (0x0008d4dc) main_vradio_pane

0xd58b,	// (0x0008e825) main_vradio_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) main_vradio_pane_g1

0xd599,	// (0x0008e833) main_vradio_pane_g2_ParamLimits

0xd599,	// (0x0008e833) main_vradio_pane_g2

0x0001,

0xf755,	// (0x000909ef) main_vradio_pane_g_ParamLimits

0xf755,	// (0x000909ef) main_vradio_pane_g

0xdc56,	// (0x0008eef0) main_vradio_pane_t1_ParamLimits

0xdc56,	// (0x0008eef0) main_vradio_pane_t1

0xdc56,	// (0x0008eef0) main_vradio_pane_t2_ParamLimits

0xdc56,	// (0x0008eef0) main_vradio_pane_t2

0xdc6a,	// (0x0008ef04) main_vradio_pane_t3_ParamLimits

0xdc6a,	// (0x0008ef04) main_vradio_pane_t3

0x0002,

0xf75a,	// (0x000909f4) main_vradio_pane_t_ParamLimits

0xf75a,	// (0x000909f4) main_vradio_pane_t

0xcf46,	// (0x0008e1e0) vradio_rocker_control_pane_ParamLimits

0xcf46,	// (0x0008e1e0) vradio_rocker_control_pane

0xcf46,	// (0x0008e1e0) vradio_station_info_pane_ParamLimits

0xcf46,	// (0x0008e1e0) vradio_station_info_pane

0xcf46,	// (0x0008e1e0) vradio_frequency_info_pane_ParamLimits

0xcf46,	// (0x0008e1e0) vradio_frequency_info_pane

0xdc4c,	// (0x0008eee6) vradio_station_info_pane_g1

0xee36,	// (0x000900d0) vradio_station_info_pane_t1_ParamLimits

0xee36,	// (0x000900d0) vradio_station_info_pane_t1

0xdc6a,	// (0x0008ef04) vradio_station_info_pane_t2_ParamLimits

0xdc6a,	// (0x0008ef04) vradio_station_info_pane_t2

0x0001,

0xf761,	// (0x000909fb) vradio_station_info_pane_t_ParamLimits

0xf761,	// (0x000909fb) vradio_station_info_pane_t

0xc242,	// (0x0008d4dc) vradio_tuning_pane

0x636d,	// (0x00087607) vradio_rocker_control_pane_g1

0xb212,	// (0x0008c4ac) vradio_rocker_control_pane_g2

0x6377,	// (0x00087611) vradio_rocker_control_pane_g3

0x6381,	// (0x0008761b) vradio_rocker_control_pane_g4

0x638b,	// (0x00087625) vradio_rocker_control_pane_g5

0x0004,

0xf766,	// (0x00090a00) vradio_rocker_control_pane_g

0xdc4c,	// (0x0008eee6) vradio_frequency_info_pane_g1

0xdc56,	// (0x0008eef0) vradio_frequency_info_pane_t1_ParamLimits

0xdc56,	// (0x0008eef0) vradio_frequency_info_pane_t1

0x6395,	// (0x0008762f) vradio_tuning_pane_g1

0x63a0,	// (0x0008763a) vradio_tuning_pane_t1

0xac31,	// (0x0008becb) area_side_right_pane_ParamLimits

0xac31,	// (0x0008becb) area_side_right_pane

0x4837,	// (0x00085ad1) status_small_pane_g1

0x483f,	// (0x00085ad9) status_small_pane_g2

0x4848,	// (0x00085ae2) status_small_pane_g3

0x4851,	// (0x00085aeb) status_small_pane_g4

0x0003,

0xf532,	// (0x000907cc) status_small_pane_g

0x485a,	// (0x00085af4) status_small_pane_t1

0xc242,	// (0x0008d4dc) main_video3_pane

0xc242,	// (0x0008d4dc) cams_zoom_vslider_pane

0xb21a,	// (0x0008c4b4) image3_wide_pane_ParamLimits

0xb21a,	// (0x0008c4b4) image3_wide_pane

0xc242,	// (0x0008d4dc) image3_wide_small_pane

0xb234,	// (0x0008c4ce) main_video3_pane_g1_ParamLimits

0xb234,	// (0x0008c4ce) main_video3_pane_g1

0xb234,	// (0x0008c4ce) main_video3_pane_g2_ParamLimits

0xb234,	// (0x0008c4ce) main_video3_pane_g2

0x0001,

0xf771,	// (0x00090a0b) main_video3_pane_g_ParamLimits

0xf771,	// (0x00090a0b) main_video3_pane_g

0xb252,	// (0x0008c4ec) main_video3_pane_t1_ParamLimits

0xb252,	// (0x0008c4ec) main_video3_pane_t1

0xb252,	// (0x0008c4ec) main_video3_pane_t2_ParamLimits

0xb252,	// (0x0008c4ec) main_video3_pane_t2

0xb252,	// (0x0008c4ec) main_video3_pane_t3_ParamLimits

0xb252,	// (0x0008c4ec) main_video3_pane_t3

0x0002,

0xf776,	// (0x00090a10) main_video3_pane_t_ParamLimits

0xf776,	// (0x00090a10) main_video3_pane_t

0xdc4c,	// (0x0008eee6) cams_zoom_vslider_pane_g1

0xdc4c,	// (0x0008eee6) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00090349) cams_zoom_vslider_pane_g

0xc242,	// (0x0008d4dc) small_slider_vertical_pane

0xdc4c,	// (0x0008eee6) small_slider_vertical_pane_g1

0xdc4c,	// (0x0008eee6) small_slider_vertical_pane_g2

0xb279,	// (0x0008c513) small_slider_vertical_pane_g3

0x0002,

0xf77d,	// (0x00090a17) small_slider_vertical_pane_g

0xc242,	// (0x0008d4dc) main_hwr_training_pane

0xb282,	// (0x0008c51c) hwr_training_instruct_pane_ParamLimits

0xb282,	// (0x0008c51c) hwr_training_instruct_pane

0x63af,	// (0x00087649) hwr_training_navi_pane_ParamLimits

0x63af,	// (0x00087649) hwr_training_navi_pane

0x63ce,	// (0x00087668) hwr_training_write_pane_ParamLimits

0x63ce,	// (0x00087668) hwr_training_write_pane

0xc242,	// (0x0008d4dc) bg_frame_shadow_pane

0xb2b9,	// (0x0008c553) hwr_training_write_pane_g1

0xb2c1,	// (0x0008c55b) hwr_training_write_pane_g2

0xb2c9,	// (0x0008c563) hwr_training_write_pane_g3

0xb2d1,	// (0x0008c56b) hwr_training_write_pane_g4

0xb2d9,	// (0x0008c573) hwr_training_write_pane_g5

0xb2e1,	// (0x0008c57b) hwr_training_write_pane_g6

0xb2e9,	// (0x0008c583) hwr_training_write_pane_g7

0x0006,

0xf784,	// (0x00090a1e) hwr_training_write_pane_g

0xb2f1,	// (0x0008c58b) hwr_training_navi_pane_g1_ParamLimits

0xb2f1,	// (0x0008c58b) hwr_training_navi_pane_g1

0xb303,	// (0x0008c59d) hwr_training_navi_pane_g2_ParamLimits

0xb303,	// (0x0008c59d) hwr_training_navi_pane_g2

0xb315,	// (0x0008c5af) hwr_training_navi_pane_g3_ParamLimits

0xb315,	// (0x0008c5af) hwr_training_navi_pane_g3

0xb325,	// (0x0008c5bf) hwr_training_navi_pane_g4_ParamLimits

0xb325,	// (0x0008c5bf) hwr_training_navi_pane_g4

0x0004,

0xf793,	// (0x00090a2d) hwr_training_navi_pane_g_ParamLimits

0xf793,	// (0x00090a2d) hwr_training_navi_pane_g

0xb332,	// (0x0008c5cc) hwr_training_navi_pane_t1

0x6416,	// (0x000876b0) list_single_hwr_training_instruct_pane_ParamLimits

0x6416,	// (0x000876b0) list_single_hwr_training_instruct_pane

0xb340,	// (0x0008c5da) list_single_hwr_training_instruct_pane_t1

0x5219,	// (0x000864b3) bg_frame_shadow_pane_g1

0xb34f,	// (0x0008c5e9) bg_frame_shadow_pane_g2

0xb357,	// (0x0008c5f1) bg_frame_shadow_pane_g3

0xb35f,	// (0x0008c5f9) bg_frame_shadow_pane_g4

0xb367,	// (0x0008c601) bg_frame_shadow_pane_g5

0xb36f,	// (0x0008c609) bg_frame_shadow_pane_g6

0xb377,	// (0x0008c611) bg_frame_shadow_pane_g7

0xdd59,	// (0x0008eff3) bg_frame_shadow_pane_g8

0x0007,

0xf79e,	// (0x00090a38) bg_frame_shadow_pane_g

0xc242,	// (0x0008d4dc) main_video_tele_dialer_pane

0x6432,	// (0x000876cc) aid_size_cell_video_keypad_ParamLimits

0x6432,	// (0x000876cc) aid_size_cell_video_keypad

0x644c,	// (0x000876e6) grid_video_dialer_keypad_pane_ParamLimits

0x644c,	// (0x000876e6) grid_video_dialer_keypad_pane

0x6498,	// (0x00087732) video_down_pane_cp_ParamLimits

0x6498,	// (0x00087732) video_down_pane_cp

0x64ca,	// (0x00087764) cell_video_dialer_keypad_pane_ParamLimits

0x64ca,	// (0x00087764) cell_video_dialer_keypad_pane

0xb37f,	// (0x0008c619) bg_button_pane_cp08_ParamLimits

0xb37f,	// (0x0008c619) bg_button_pane_cp08

0x64f0,	// (0x0008778a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x64f0,	// (0x0008778a) cell_video_dialer_keypad_pane_g1

0x5db8,	// (0x00087052) mup3_rocker2_pane_ParamLimits

0x5db8,	// (0x00087052) mup3_rocker2_pane

0xdc4c,	// (0x0008eee6) mup3_rocker2_pane_g1

0x489a,	// (0x00085b34) main_dialer2_pane

0xc242,	// (0x0008d4dc) main_mp4_pane

0xb3a9,	// (0x0008c643) main_mp4_pane_g1_ParamLimits

0xb3a9,	// (0x0008c643) main_mp4_pane_g1

0xb3a9,	// (0x0008c643) main_mp4_pane_g2_ParamLimits

0xb3a9,	// (0x0008c643) main_mp4_pane_g2

0x652b,	// (0x000877c5) main_mp4_pane_g3_ParamLimits

0x652b,	// (0x000877c5) main_mp4_pane_g3

0xb3c7,	// (0x0008c661) main_mp4_pane_g4_ParamLimits

0xb3c7,	// (0x0008c661) main_mp4_pane_g4

0xb3ef,	// (0x0008c689) main_mp4_pane_g5_ParamLimits

0xb3ef,	// (0x0008c689) main_mp4_pane_g5

0x0007,

0xf7be,	// (0x00090a58) main_mp4_pane_g_ParamLimits

0xf7be,	// (0x00090a58) main_mp4_pane_g

0xb457,	// (0x0008c6f1) main_mp4_pane_t1_ParamLimits

0xb457,	// (0x0008c6f1) main_mp4_pane_t1

0xb4b9,	// (0x0008c753) main_mp4_pane_t2_ParamLimits

0xb4b9,	// (0x0008c753) main_mp4_pane_t2

0xb51d,	// (0x0008c7b7) main_mp4_pane_t3_ParamLimits

0xb51d,	// (0x0008c7b7) main_mp4_pane_t3

0xb57b,	// (0x0008c815) main_mp4_pane_t4_ParamLimits

0xb57b,	// (0x0008c815) main_mp4_pane_t4

0x0003,

0xf7cf,	// (0x00090a69) main_mp4_pane_t_ParamLimits

0xf7cf,	// (0x00090a69) main_mp4_pane_t

0xb5d9,	// (0x0008c873) mp4_progress_pane_ParamLimits

0xb5d9,	// (0x0008c873) mp4_progress_pane

0xb60d,	// (0x0008c8a7) mp4_rocker_pane_ParamLimits

0xb60d,	// (0x0008c8a7) mp4_rocker_pane

0xb62b,	// (0x0008c8c5) mp4_progress_pane_t1

0xb64d,	// (0x0008c8e7) mp4_progress_pane_t2

0x0001,

0xf7d8,	// (0x00090a72) mp4_progress_pane_t

0xb66f,	// (0x0008c909) mup_progress_pane_cp04

0xdc4c,	// (0x0008eee6) mp4_rocker_pane_g1

0xcf46,	// (0x0008e1e0) aid_cell_size_keypad2_ParamLimits

0xcf46,	// (0x0008e1e0) aid_cell_size_keypad2

0xcf46,	// (0x0008e1e0) dialer2_ne_pane_ParamLimits

0xcf46,	// (0x0008e1e0) dialer2_ne_pane

0xcf46,	// (0x0008e1e0) grid_dialer2_keypad_pane_ParamLimits

0xcf46,	// (0x0008e1e0) grid_dialer2_keypad_pane

0x4e7e,	// (0x00086118) bg_popup_call_pane_cp07_ParamLimits

0x4e7e,	// (0x00086118) bg_popup_call_pane_cp07

0x655d,	// (0x000877f7) dialer2_ne_pane_t1_ParamLimits

0x655d,	// (0x000877f7) dialer2_ne_pane_t1

0x659d,	// (0x00087837) cell_dialer2_keypad_pane_ParamLimits

0x659d,	// (0x00087837) cell_dialer2_keypad_pane

0x4e7e,	// (0x00086118) bg_button_pane_pane_cp04_ParamLimits

0x4e7e,	// (0x00086118) bg_button_pane_pane_cp04

0xd58b,	// (0x0008e825) cell_dialer2_keypad_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) cell_dialer2_keypad_pane_g1

0x1778,	// (0x00082a12) aid_placing_vt_set_content_ParamLimits

0x1778,	// (0x00082a12) aid_placing_vt_set_content

0x179c,	// (0x00082a36) aid_placing_vt_set_title_ParamLimits

0x179c,	// (0x00082a36) aid_placing_vt_set_title

0xc242,	// (0x0008d4dc) main_image3_pane

0x6612,	// (0x000878ac) area_side_right_pane_cp01_ParamLimits

0x6612,	// (0x000878ac) area_side_right_pane_cp01

0x662b,	// (0x000878c5) main_image3_pane_g1_ParamLimits

0x662b,	// (0x000878c5) main_image3_pane_g1

0x6639,	// (0x000878d3) main_image3_pane_g2_ParamLimits

0x6639,	// (0x000878d3) main_image3_pane_g2

0x6661,	// (0x000878fb) main_image3_pane_g3_ParamLimits

0x6661,	// (0x000878fb) main_image3_pane_g3

0x668b,	// (0x00087925) main_image3_pane_g4_ParamLimits

0x668b,	// (0x00087925) main_image3_pane_g4

0x0003,

0xf7e7,	// (0x00090a81) main_image3_pane_g_ParamLimits

0xf7e7,	// (0x00090a81) main_image3_pane_g

0x66b5,	// (0x0008794f) main_image3_pane_t1_ParamLimits

0x66b5,	// (0x0008794f) main_image3_pane_t1

0x670d,	// (0x000879a7) main_image3_pane_t2_ParamLimits

0x670d,	// (0x000879a7) main_image3_pane_t2

0x675f,	// (0x000879f9) main_image3_pane_t3_ParamLimits

0x675f,	// (0x000879f9) main_image3_pane_t3

0x0003,

0xf7f0,	// (0x00090a8a) main_image3_pane_t_ParamLimits

0xf7f0,	// (0x00090a8a) main_image3_pane_t

0xcf46,	// (0x0008e1e0) grid_sctrl_middle_pane_cp01_ParamLimits

0xcf46,	// (0x0008e1e0) grid_sctrl_middle_pane_cp01

0x67e7,	// (0x00087a81) cell_sctrl_middle_pane_cp01_ParamLimits

0x67e7,	// (0x00087a81) cell_sctrl_middle_pane_cp01

0x6804,	// (0x00087a9e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6804,	// (0x00087a9e) cell_sctrl_middle_pane_cp01_g1

0xc242,	// (0x0008d4dc) main_call4_pane

0x6819,	// (0x00087ab3) aid_size_button_call4_ParamLimits

0x6819,	// (0x00087ab3) aid_size_button_call4

0x684c,	// (0x00087ae6) call4_windows_pane_ParamLimits

0x684c,	// (0x00087ae6) call4_windows_pane

0x686b,	// (0x00087b05) grid_call4_button_pane_ParamLimits

0x686b,	// (0x00087b05) grid_call4_button_pane

0x68a2,	// (0x00087b3c) call4_windows_conf_pane

0x68bb,	// (0x00087b55) popup_call4_audio_first_window_ParamLimits

0x68bb,	// (0x00087b55) popup_call4_audio_first_window

0x690b,	// (0x00087ba5) popup_call4_audio_second_window_ParamLimits

0x690b,	// (0x00087ba5) popup_call4_audio_second_window

0x6924,	// (0x00087bbe) popup_call4_audio_wait_window_ParamLimits

0x6924,	// (0x00087bbe) popup_call4_audio_wait_window

0x6932,	// (0x00087bcc) cell_call4_button_pane_ParamLimits

0x6932,	// (0x00087bcc) cell_call4_button_pane

0x6959,	// (0x00087bf3) bg_button_pane_cp09_ParamLimits

0x6959,	// (0x00087bf3) bg_button_pane_cp09

0x6965,	// (0x00087bff) cell_call4_button_pane_g1_ParamLimits

0x6965,	// (0x00087bff) cell_call4_button_pane_g1

0x698b,	// (0x00087c25) cell_call4_button_pane_t1_ParamLimits

0x698b,	// (0x00087c25) cell_call4_button_pane_t1

0xb71e,	// (0x0008c9b8) popup_call4_audio_conf_window_ParamLimits

0xb71e,	// (0x0008c9b8) popup_call4_audio_conf_window

0x5e22,	// (0x000870bc) mup3_progress_pane_t1_ParamLimits

0x5e41,	// (0x000870db) mup3_progress_pane_t2_ParamLimits

0x5e60,	// (0x000870fa) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x00090964) mup3_progress_pane_t_ParamLimits

0xaefe,	// (0x0008c198) mup_progress_pane_cp03_ParamLimits

0x6365,	// (0x000875ff) mup3_control_keys_pane_g4_copy1

0xb60d,	// (0x0008c8a7) mp4_rocker2_pane_ParamLimits

0xb60d,	// (0x0008c8a7) mp4_rocker2_pane

0xb738,	// (0x0008c9d2) mp4_rocker2_pane_g1

0xb738,	// (0x0008c9d2) mp4_rocker2_pane_g2

0xb738,	// (0x0008c9d2) mp4_rocker2_pane_g3

0xb738,	// (0x0008c9d2) mp4_rocker2_pane_g4

0xb738,	// (0x0008c9d2) mp4_rocker2_pane_g5

0x0004,

0xf7f9,	// (0x00090a93) mp4_rocker2_pane_g

0xc242,	// (0x0008d4dc) main_camera4_pane

0xc242,	// (0x0008d4dc) main_video4_pane

0x6466,	// (0x00087700) main_video_tele_dialer_pane_t1_ParamLimits

0x6466,	// (0x00087700) main_video_tele_dialer_pane_t1

0x647f,	// (0x00087719) main_video_tele_dialer_pane_t2_ParamLimits

0x647f,	// (0x00087719) main_video_tele_dialer_pane_t2

0x0001,

0xf7af,	// (0x00090a49) main_video_tele_dialer_pane_t_ParamLimits

0xf7af,	// (0x00090a49) main_video_tele_dialer_pane_t

0x69c9,	// (0x00087c63) cam4_autofocus_pane_ParamLimits

0x69c9,	// (0x00087c63) cam4_autofocus_pane

0x69df,	// (0x00087c79) cam4_image_uncrop_pane_ParamLimits

0x69df,	// (0x00087c79) cam4_image_uncrop_pane

0x69f8,	// (0x00087c92) cam4_indicators_pane_ParamLimits

0x69f8,	// (0x00087c92) cam4_indicators_pane

0x6a28,	// (0x00087cc2) main_camera4_pane_g1_ParamLimits

0x6a28,	// (0x00087cc2) main_camera4_pane_g1

0x6a3a,	// (0x00087cd4) main_camera4_pane_g2_ParamLimits

0x6a3a,	// (0x00087cd4) main_camera4_pane_g2

0x6a4d,	// (0x00087ce7) main_camera4_pane_g3_ParamLimits

0x6a4d,	// (0x00087ce7) main_camera4_pane_g3

0x6a60,	// (0x00087cfa) main_camera4_pane_g4_ParamLimits

0x6a60,	// (0x00087cfa) main_camera4_pane_g4

0x6a73,	// (0x00087d0d) main_camera4_pane_g5_ParamLimits

0x6a73,	// (0x00087d0d) main_camera4_pane_g5

0x0005,

0xf804,	// (0x00090a9e) main_camera4_pane_g_ParamLimits

0xf804,	// (0x00090a9e) main_camera4_pane_g

0x6a97,	// (0x00087d31) main_camera4_pane_t1_ParamLimits

0x6a97,	// (0x00087d31) main_camera4_pane_t1

0xd58b,	// (0x0008e825) bg_tb_trans_pane_cp06

0xb766,	// (0x0008ca00) cam4_indicators_pane_g1

0xb777,	// (0x0008ca11) cam4_indicators_pane_g2

0x0002,

0xf81f,	// (0x00090ab9) cam4_indicators_pane_g

0xb78f,	// (0x0008ca29) cam4_indicators_pane_t1

0x6afb,	// (0x00087d95) main_video4_pane_g1_ParamLimits

0x6afb,	// (0x00087d95) main_video4_pane_g1

0x6b0a,	// (0x00087da4) main_video4_pane_g2_ParamLimits

0x6b0a,	// (0x00087da4) main_video4_pane_g2

0x6b1a,	// (0x00087db4) main_video4_pane_g3_ParamLimits

0x6b1a,	// (0x00087db4) main_video4_pane_g3

0x6b2a,	// (0x00087dc4) main_video4_pane_g4_ParamLimits

0x6b2a,	// (0x00087dc4) main_video4_pane_g4

0x0004,

0xf826,	// (0x00090ac0) main_video4_pane_g_ParamLimits

0xf826,	// (0x00090ac0) main_video4_pane_g

0x6b4a,	// (0x00087de4) vid4_indicators_pane_ParamLimits

0x6b4a,	// (0x00087de4) vid4_indicators_pane

0x6b74,	// (0x00087e0e) video4_image_uncrop_cif_pane_ParamLimits

0x6b74,	// (0x00087e0e) video4_image_uncrop_cif_pane

0x6b8e,	// (0x00087e28) video4_image_uncrop_nhd_pane_ParamLimits

0x6b8e,	// (0x00087e28) video4_image_uncrop_nhd_pane

0x69df,	// (0x00087c79) video4_image_uncrop_vga_pane_ParamLimits

0x69df,	// (0x00087c79) video4_image_uncrop_vga_pane

0xcf46,	// (0x0008e1e0) bg_tb_trans_pane_cp07

0xb7bd,	// (0x0008ca57) vid4_indicators_pane_g1

0xb7d3,	// (0x0008ca6d) vid4_indicators_pane_g2

0xb7e7,	// (0x0008ca81) vid4_indicators_pane_g3

0x0004,

0xf831,	// (0x00090acb) vid4_indicators_pane_g

0xb818,	// (0x0008cab2) vid4_indicators_pane_t1

0x6ba5,	// (0x00087e3f) cam4_autofocus_pane_g1

0x6bad,	// (0x00087e47) cam4_autofocus_pane_g2

0x6bb5,	// (0x00087e4f) cam4_autofocus_pane_g3

0x0002,

0xf83c,	// (0x00090ad6) cam4_autofocus_pane_g

0x6bbd,	// (0x00087e57) cam4_autofocus_pane_g3_copy1

0x64ae,	// (0x00087748) video_down_pane_cp_t1

0x64bc,	// (0x00087756) video_down_pane_cp_t2

0x0001,

0xf7b4,	// (0x00090a4e) video_down_pane_cp_t

0xcf46,	// (0x0008e1e0) popup_vitu2_window_ParamLimits

0xcf46,	// (0x0008e1e0) popup_vitu2_window

0x6bc5,	// (0x00087e5f) aid_size_cell2_itu2_ParamLimits

0x6bc5,	// (0x00087e5f) aid_size_cell2_itu2

0x6beb,	// (0x00087e85) aid_size_cell_itu2_ParamLimits

0x6beb,	// (0x00087e85) aid_size_cell_itu2

0x5eea,	// (0x00087184) bg_popup_window_pane_cp09_ParamLimits

0x5eea,	// (0x00087184) bg_popup_window_pane_cp09

0x6c49,	// (0x00087ee3) field_vitu2_entry_pane_ParamLimits

0x6c49,	// (0x00087ee3) field_vitu2_entry_pane

0x6c71,	// (0x00087f0b) grid_vitu2_function_pane_ParamLimits

0x6c71,	// (0x00087f0b) grid_vitu2_function_pane

0x6cc2,	// (0x00087f5c) grid_vitu2_itu_pane_ParamLimits

0x6cc2,	// (0x00087f5c) grid_vitu2_itu_pane

0x6d52,	// (0x00087fec) cell_vitu2_itu_pane_ParamLimits

0x6d52,	// (0x00087fec) cell_vitu2_itu_pane

0x6d80,	// (0x0008801a) cell_vitu2_function_pane_ParamLimits

0x6d80,	// (0x0008801a) cell_vitu2_function_pane

0xb82f,	// (0x0008cac9) bg_popup_call_pane_cp08_ParamLimits

0xb82f,	// (0x0008cac9) bg_popup_call_pane_cp08

0xb846,	// (0x0008cae0) field_vitu2_entry_pane_g1

0xb852,	// (0x0008caec) field_vitu2_entry_pane_g2

0x0002,

0xf843,	// (0x00090add) field_vitu2_entry_pane_g

0xb85e,	// (0x0008caf8) field_vitu2_entry_pane_t1_ParamLimits

0xb85e,	// (0x0008caf8) field_vitu2_entry_pane_t1

0xb88d,	// (0x0008cb27) field_vitu2_entry_pane_t2_ParamLimits

0xb88d,	// (0x0008cb27) field_vitu2_entry_pane_t2

0x0001,

0xf84a,	// (0x00090ae4) field_vitu2_entry_pane_t_ParamLimits

0xf84a,	// (0x00090ae4) field_vitu2_entry_pane_t

0x6dc4,	// (0x0008805e) bg_button_pane_cp010_ParamLimits

0x6dc4,	// (0x0008805e) bg_button_pane_cp010

0x6dd2,	// (0x0008806c) cell_vitu2_itu_pane_g1

0x6df8,	// (0x00088092) cell_vitu2_itu_pane_t1_ParamLimits

0x6df8,	// (0x00088092) cell_vitu2_itu_pane_t1

0x0287,	// (0x00081521) cell_vitu2_itu_pane_t2_ParamLimits

0x0287,	// (0x00081521) cell_vitu2_itu_pane_t2

0x0002,

0xf854,	// (0x00090aee) cell_vitu2_itu_pane_t_ParamLimits

0xf854,	// (0x00090aee) cell_vitu2_itu_pane_t

0xcf46,	// (0x0008e1e0) bg_button_pane_cp011

0x6e56,	// (0x000880f0) cell_vitu2_function_pane_g1

0xc242,	// (0x0008d4dc) main_myfav_hc_pane

0x67af,	// (0x00087a49) popup_image3_note_pane_ParamLimits

0x67af,	// (0x00087a49) popup_image3_note_pane

0x67cb,	// (0x00087a65) popup_image3_tool_bar_pane_ParamLimits

0x67cb,	// (0x00087a65) popup_image3_tool_bar_pane

0x0315,	// (0x000815af) cell_vitu2_itu_pane_t3_ParamLimits

0x0315,	// (0x000815af) cell_vitu2_itu_pane_t3

0xc242,	// (0x0008d4dc) bg_popup_trans_pane

0xb8b2,	// (0x0008cb4c) grid_image3_tool_bar_pane

0xb8bc,	// (0x0008cb56) bg_popup_trans_pane_g1

0xe074,	// (0x0008f30e) bg_popup_trans_pane_g2

0xb8c4,	// (0x0008cb5e) bg_popup_trans_pane_g3

0xb8cc,	// (0x0008cb66) bg_popup_trans_pane_g4

0xb8d4,	// (0x0008cb6e) bg_popup_trans_pane_g5

0xb8dc,	// (0x0008cb76) bg_popup_trans_pane_g6

0xb8e4,	// (0x0008cb7e) bg_popup_trans_pane_g7

0xb8ec,	// (0x0008cb86) bg_popup_trans_pane_g8

0xe054,	// (0x0008f2ee) bg_popup_trans_pane_g9

0x0008,

0xf85b,	// (0x00090af5) bg_popup_trans_pane_g

0xb8f4,	// (0x0008cb8e) cell_image3_tool_bar_pane_ParamLimits

0xb8f4,	// (0x0008cb8e) cell_image3_tool_bar_pane

0xdc4c,	// (0x0008eee6) cell_image3_tool_bar_pane_g1

0xc242,	// (0x0008d4dc) bg_popup_trans_pane_cp1

0xb90a,	// (0x0008cba4) popup_image3_note_pane_t1

0xb918,	// (0x0008cbb2) popup_image3_note_pane_t2

0xb926,	// (0x0008cbc0) popup_image3_note_pane_t3

0x0002,

0xf86e,	// (0x00090b08) popup_image3_note_pane_t

0xb936,	// (0x0008cbd0) popup_image3_note_pane_t3_copy1

0x6e6a,	// (0x00088104) bg_myfav_hc_instruction_pane_ParamLimits

0x6e6a,	// (0x00088104) bg_myfav_hc_instruction_pane

0x6e82,	// (0x0008811c) cell_myfav_contact_pane_ParamLimits

0x6e82,	// (0x0008811c) cell_myfav_contact_pane

0x6e9e,	// (0x00088138) cell_myfav_contact_pane_cp1_ParamLimits

0x6e9e,	// (0x00088138) cell_myfav_contact_pane_cp1

0x6eb6,	// (0x00088150) cell_myfav_contact_pane_cp2_ParamLimits

0x6eb6,	// (0x00088150) cell_myfav_contact_pane_cp2

0x6ece,	// (0x00088168) cell_myfav_contact_pane_cp3_ParamLimits

0x6ece,	// (0x00088168) cell_myfav_contact_pane_cp3

0x6ee5,	// (0x0008817f) cell_myfav_contact_pane_cp4_ParamLimits

0x6ee5,	// (0x0008817f) cell_myfav_contact_pane_cp4

0x6efd,	// (0x00088197) cell_myfav_contact_pane_cp5_ParamLimits

0x6efd,	// (0x00088197) cell_myfav_contact_pane_cp5

0x6f11,	// (0x000881ab) cell_myfav_contact_pane_cp6_ParamLimits

0x6f11,	// (0x000881ab) cell_myfav_contact_pane_cp6

0x6f27,	// (0x000881c1) cell_myfav_contact_pane_cp7_ParamLimits

0x6f27,	// (0x000881c1) cell_myfav_contact_pane_cp7

0xb944,	// (0x0008cbde) listscroll_gen_pane_cp05

0x6f3f,	// (0x000881d9) main_myfav_hc_pane_g1_ParamLimits

0x6f3f,	// (0x000881d9) main_myfav_hc_pane_g1

0x6f59,	// (0x000881f3) main_myfav_hc_pane_g2_ParamLimits

0x6f59,	// (0x000881f3) main_myfav_hc_pane_g2

0x0002,

0xf875,	// (0x00090b0f) main_myfav_hc_pane_g_ParamLimits

0xf875,	// (0x00090b0f) main_myfav_hc_pane_g

0x6f8d,	// (0x00088227) main_myfav_hc_pane_t1_ParamLimits

0x6f8d,	// (0x00088227) main_myfav_hc_pane_t1

0xb94d,	// (0x0008cbe7) main_myfav_hc_pane_t2_ParamLimits

0xb94d,	// (0x0008cbe7) main_myfav_hc_pane_t2

0xb95f,	// (0x0008cbf9) main_myfav_hc_pane_t3_ParamLimits

0xb95f,	// (0x0008cbf9) main_myfav_hc_pane_t3

0x6fa4,	// (0x0008823e) main_myfav_hc_pane_t4_ParamLimits

0x6fa4,	// (0x0008823e) main_myfav_hc_pane_t4

0x0004,

0xf87c,	// (0x00090b16) main_myfav_hc_pane_t_ParamLimits

0xf87c,	// (0x00090b16) main_myfav_hc_pane_t

0xdc4c,	// (0x0008eee6) bg_myfav_hc_instruction_pane_g1

0xb971,	// (0x0008cc0b) cell_myfav_contact_pane_g1_ParamLimits

0xb971,	// (0x0008cc0b) cell_myfav_contact_pane_g1

0xb971,	// (0x0008cc0b) cell_myfav_contact_pane_g2_ParamLimits

0xb971,	// (0x0008cc0b) cell_myfav_contact_pane_g2

0xb97d,	// (0x0008cc17) cell_myfav_contact_pane_g3_ParamLimits

0xb97d,	// (0x0008cc17) cell_myfav_contact_pane_g3

0xd599,	// (0x0008e833) cell_myfav_contact_pane_g4_ParamLimits

0xd599,	// (0x0008e833) cell_myfav_contact_pane_g4

0xb98a,	// (0x0008cc24) cell_myfav_contact_pane_g5_ParamLimits

0xb98a,	// (0x0008cc24) cell_myfav_contact_pane_g5

0x0004,

0xf887,	// (0x00090b21) cell_myfav_contact_pane_g_ParamLimits

0xf887,	// (0x00090b21) cell_myfav_contact_pane_g

0x6f73,	// (0x0008820d) main_myfav_hc_pane_g3_ParamLimits

0x6f73,	// (0x0008820d) main_myfav_hc_pane_g3

0x0bce,	// (0x00081e68) popup_adpt_find_window

0x6fce,	// (0x00088268) afind_page_pane_ParamLimits

0x6fce,	// (0x00088268) afind_page_pane

0x6fe4,	// (0x0008827e) aid_size_cell_afind_ParamLimits

0x6fe4,	// (0x0008827e) aid_size_cell_afind

0x7002,	// (0x0008829c) bg_popup_sub_pane_cp09_ParamLimits

0x7002,	// (0x0008829c) bg_popup_sub_pane_cp09

0x7014,	// (0x000882ae) find_pane_cp01_ParamLimits

0x7014,	// (0x000882ae) find_pane_cp01

0xb996,	// (0x0008cc30) grid_afind_control_pane_ParamLimits

0xb996,	// (0x0008cc30) grid_afind_control_pane

0x7028,	// (0x000882c2) grid_afind_pane_ParamLimits

0x7028,	// (0x000882c2) grid_afind_pane

0x704a,	// (0x000882e4) cell_afind_pane_ParamLimits

0x704a,	// (0x000882e4) cell_afind_pane

0xdc4c,	// (0x0008eee6) afind_page_pane_g1

0x70b3,	// (0x0008834d) afind_page_pane_g2

0x70bb,	// (0x00088355) afind_page_pane_g3

0x0002,

0xf892,	// (0x00090b2c) afind_page_pane_g

0x70c3,	// (0x0008835d) afind_page_pane_t1

0xb9bc,	// (0x0008cc56) cell_afind_grid_control_pane_ParamLimits

0xb9bc,	// (0x0008cc56) cell_afind_grid_control_pane

0xb9cb,	// (0x0008cc65) bg_button_pane_cp69_ParamLimits

0xb9cb,	// (0x0008cc65) bg_button_pane_cp69

0x70d1,	// (0x0008836b) cell_afind_pane_g1_ParamLimits

0x70d1,	// (0x0008836b) cell_afind_pane_g1

0x70de,	// (0x00088378) cell_afind_pane_t1_ParamLimits

0x70de,	// (0x00088378) cell_afind_pane_t1

0xb9d7,	// (0x0008cc71) bg_button_pane_cp72

0xb9df,	// (0x0008cc79) cell_afind_grid_control_pane_g1

0x34ae,	// (0x00084748) aid_image_placing_area_ParamLimits

0x34ae,	// (0x00084748) aid_image_placing_area

0xd58b,	// (0x0008e825) field_vitu_entry_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) field_vitu_entry_pane_g1

0xd58b,	// (0x0008e825) field_vitu_entry_pane_g2_ParamLimits

0xd58b,	// (0x0008e825) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00090456) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00090456) field_vitu_entry_pane_g

0xb1f6,	// (0x0008c490) cell_vitu_itu_pane_g1_ParamLimits

0xb1d9,	// (0x0008c473) cell_vitu_itu_pane_t3_ParamLimits

0xb1d9,	// (0x0008c473) cell_vitu_itu_pane_t3

0xb62b,	// (0x0008c8c5) mp4_progress_pane_t1_ParamLimits

0xb64d,	// (0x0008c8e7) mp4_progress_pane_t2_ParamLimits

0xf7d8,	// (0x00090a72) mp4_progress_pane_t_ParamLimits

0xb66f,	// (0x0008c909) mup_progress_pane_cp04_ParamLimits

0x6fb8,	// (0x00088252) main_myfav_hc_pane_t5_ParamLimits

0x6fb8,	// (0x00088252) main_myfav_hc_pane_t5

0xac21,	// (0x0008bebb) aid_zoom_text_primary

0x0bce,	// (0x00081e68) popup_adpt_find_window_ParamLimits

0xcf46,	// (0x0008e1e0) main_cam_set_pane

0x6a11,	// (0x00087cab) cam4_zoom_pane_ParamLimits

0x6a11,	// (0x00087cab) cam4_zoom_pane

0x70f0,	// (0x0008838a) main_cam_set_pane_g1_ParamLimits

0x70f0,	// (0x0008838a) main_cam_set_pane_g1

0x70fe,	// (0x00088398) main_cam_set_pane_g2_ParamLimits

0x70fe,	// (0x00088398) main_cam_set_pane_g2

0x0001,

0xf899,	// (0x00090b33) main_cam_set_pane_g_ParamLimits

0xf899,	// (0x00090b33) main_cam_set_pane_g

0x711f,	// (0x000883b9) main_cam_set_pane_t1_ParamLimits

0x711f,	// (0x000883b9) main_cam_set_pane_t1

0x713a,	// (0x000883d4) main_cset_listscroll_pane_ParamLimits

0x713a,	// (0x000883d4) main_cset_listscroll_pane

0x7162,	// (0x000883fc) main_cset_slider_pane_ParamLimits

0x7162,	// (0x000883fc) main_cset_slider_pane

0xb9f0,	// (0x0008cc8a) main_cset_list_pane_ParamLimits

0xb9f0,	// (0x0008cc8a) main_cset_list_pane

0xba00,	// (0x0008cc9a) scroll_pane_cp028

0x718c,	// (0x00088426) aid_area_touch_slider

0x71a8,	// (0x00088442) cset_slider_pane

0x71cb,	// (0x00088465) main_cset_slider_pane_g1

0x71e0,	// (0x0008847a) main_cset_slider_pane_g2

0x0011,

0xf89e,	// (0x00090b38) main_cset_slider_pane_g

0xba39,	// (0x0008ccd3) main_cset_slider_pane_t1

0x72a2,	// (0x0008853c) main_cset_slider_pane_t2

0x72bc,	// (0x00088556) main_cset_slider_pane_t3

0x72d6,	// (0x00088570) main_cset_slider_pane_t4

0x72f0,	// (0x0008858a) main_cset_slider_pane_t5

0x730e,	// (0x000885a8) main_cset_slider_pane_t6

0x7323,	// (0x000885bd) main_cset_slider_pane_t7

0x000e,

0xf8c3,	// (0x00090b5d) main_cset_slider_pane_t

0x742f,	// (0x000886c9) cset_list_set_pane_ParamLimits

0x742f,	// (0x000886c9) cset_list_set_pane

0xbad3,	// (0x0008cd6d) aid_position_infowindow_above

0xbadb,	// (0x0008cd75) aid_position_infowindow_below

0x7443,	// (0x000886dd) cset_list_set_pane_g1_ParamLimits

0x7443,	// (0x000886dd) cset_list_set_pane_g1

0x0373,	// (0x0008160d) cset_list_set_pane_g3_ParamLimits

0x0373,	// (0x0008160d) cset_list_set_pane_g3

0x0001,

0xf8e2,	// (0x00090b7c) cset_list_set_pane_g_ParamLimits

0xf8e2,	// (0x00090b7c) cset_list_set_pane_g

0x0382,	// (0x0008161c) cset_list_set_pane_t1_ParamLimits

0x0382,	// (0x0008161c) cset_list_set_pane_t1

0xcf46,	// (0x0008e1e0) list_highlight_pane_cp021_ParamLimits

0xcf46,	// (0x0008e1e0) list_highlight_pane_cp021

0xeebc,	// (0x00090156) cset_slider_pane_g1

0xeece,	// (0x00090168) cset_slider_pane_g2

0xeec5,	// (0x0009015f) cset_slider_pane_g3

0x0002,

0xf8e7,	// (0x00090b81) cset_slider_pane_g

0xbae3,	// (0x0008cd7d) aid_area_touch_cam4_zoom

0x744f,	// (0x000886e9) cam4_zoom_cont_pane

0x7457,	// (0x000886f1) cam4_zoom_pane_g1

0x745f,	// (0x000886f9) cam4_zoom_pane_g2

0x7467,	// (0x00088701) cam4_zoom_pane_g3

0x0002,

0xf8ee,	// (0x00090b88) cam4_zoom_pane_g

0xbaec,	// (0x0008cd86) cam4_zoom_cont_pane_g1

0xbaf5,	// (0x0008cd8f) cam4_zoom_cont_pane_g2

0xbafe,	// (0x0008cd98) cam4_zoom_cont_pane_g3

0x0002,

0xf8f5,	// (0x00090b8f) cam4_zoom_cont_pane_g

0x6837,	// (0x00087ad1) call4_image_pane_ParamLimits

0x6837,	// (0x00087ad1) call4_image_pane

0x68a2,	// (0x00087b3c) call4_windows_conf_pane_ParamLimits

0x68e9,	// (0x00087b83) popup_call4_audio_in_window_ParamLimits

0x68e9,	// (0x00087b83) popup_call4_audio_in_window

0xc242,	// (0x0008d4dc) bg_popup_call2_act_pane_cp02

0xb716,	// (0x0008c9b0) call4_list_conf_pane

0xdc4c,	// (0x0008eee6) call4_image_pane_g1

0xdc4c,	// (0x0008eee6) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00090349) call4_image_pane_g

0xbb07,	// (0x0008cda1) list_single_graphic_popup_conf4_pane_ParamLimits

0xbb07,	// (0x0008cda1) list_single_graphic_popup_conf4_pane

0xc242,	// (0x0008d4dc) list_highlight_pane_cp022

0xbb1c,	// (0x0008cdb6) list_single_graphic_popup_conf4_pane_g1

0xeba3,	// (0x0008fe3d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8fc,	// (0x00090b96) list_single_graphic_popup_conf4_pane_g

0xbb24,	// (0x0008cdbe) list_single_graphic_popup_conf4_pane_t1

0x18b3,	// (0x00082b4d) popup_vtel_slider_window_ParamLimits

0x18b3,	// (0x00082b4d) popup_vtel_slider_window

0xb682,	// (0x0008c91c) dialer2_ne_pane_t2_ParamLimits

0xb682,	// (0x0008c91c) dialer2_ne_pane_t2

0x0001,

0xf7dd,	// (0x00090a77) dialer2_ne_pane_t_ParamLimits

0xf7dd,	// (0x00090a77) dialer2_ne_pane_t

0x4e7e,	// (0x00086118) bg_popup_sub_pane_cp010_ParamLimits

0x4e7e,	// (0x00086118) bg_popup_sub_pane_cp010

0x746f,	// (0x00088709) popup_vtel_slider_window_g1_ParamLimits

0x746f,	// (0x00088709) popup_vtel_slider_window_g1

0x7482,	// (0x0008871c) popup_vtel_slider_window_g2_ParamLimits

0x7482,	// (0x0008871c) popup_vtel_slider_window_g2

0x0003,

0xf901,	// (0x00090b9b) popup_vtel_slider_window_g_ParamLimits

0xf901,	// (0x00090b9b) popup_vtel_slider_window_g

0x74d8,	// (0x00088772) vtel_slider_pane_ParamLimits

0x74d8,	// (0x00088772) vtel_slider_pane

0x74fa,	// (0x00088794) vtel_slider_pane_g1_ParamLimits

0x74fa,	// (0x00088794) vtel_slider_pane_g1

0x750e,	// (0x000887a8) vtel_slider_pane_g2_ParamLimits

0x750e,	// (0x000887a8) vtel_slider_pane_g2

0x7526,	// (0x000887c0) vtel_slider_pane_g3_ParamLimits

0x7526,	// (0x000887c0) vtel_slider_pane_g3

0x74fa,	// (0x00088794) vtel_slider_pane_g4_ParamLimits

0x74fa,	// (0x00088794) vtel_slider_pane_g4

0x753c,	// (0x000887d6) vtel_slider_pane_g5_ParamLimits

0x753c,	// (0x000887d6) vtel_slider_pane_g5

0x0004,

0xf90a,	// (0x00090ba4) vtel_slider_pane_g_ParamLimits

0xf90a,	// (0x00090ba4) vtel_slider_pane_g

0xcf46,	// (0x0008e1e0) main_gallery2_pane

0x6c17,	// (0x00087eb1) aid_size_row_itut2_dropdow_list_ParamLimits

0x6c17,	// (0x00087eb1) aid_size_row_itut2_dropdow_list

0x6c99,	// (0x00087f33) grid_vitu2_function_top_pane_ParamLimits

0x6c99,	// (0x00087f33) grid_vitu2_function_top_pane

0x6cfd,	// (0x00087f97) popup_vitu2_dropdown_list_window_ParamLimits

0x6cfd,	// (0x00087f97) popup_vitu2_dropdown_list_window

0x6d24,	// (0x00087fbe) popup_vitu2_match_list_window

0x7552,	// (0x000887ec) cell_vitu2_function_top_pane_ParamLimits

0x7552,	// (0x000887ec) cell_vitu2_function_top_pane

0x756c,	// (0x00088806) cell_vitu2_function_top_pane_cp01_ParamLimits

0x756c,	// (0x00088806) cell_vitu2_function_top_pane_cp01

0x7588,	// (0x00088822) cell_vitu2_function_top_wide_pane_ParamLimits

0x7588,	// (0x00088822) cell_vitu2_function_top_wide_pane

0xcf46,	// (0x0008e1e0) bg_button_pane_cp012

0x75a6,	// (0x00088840) cell_vitu2_function_top_pane_g1

0xbb3a,	// (0x0008cdd4) bg_button_pane_cp013_ParamLimits

0xbb3a,	// (0x0008cdd4) bg_button_pane_cp013

0x75ba,	// (0x00088854) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x75ba,	// (0x00088854) cell_vitu2_function_top_wide_pane_g1

0xcf46,	// (0x0008e1e0) bg_popup_sub_pane_cp20

0x75d2,	// (0x0008886c) list_vitu2_match_list_pane

0xb8bc,	// (0x0008cb56) bg_popup_sub_pane_cp20_g1

0xb8c4,	// (0x0008cb5e) bg_popup_sub_pane_cp20_g2

0xe074,	// (0x0008f30e) bg_popup_sub_pane_cp20_g3

0xb8cc,	// (0x0008cb66) bg_popup_sub_pane_cp20_g4

0xe054,	// (0x0008f2ee) bg_popup_sub_pane_cp20_g5

0xbb56,	// (0x0008cdf0) bg_popup_sub_pane_cp20_g6

0xb8dc,	// (0x0008cb76) bg_popup_sub_pane_cp20_g7

0xb8e4,	// (0x0008cb7e) bg_popup_sub_pane_cp20_g8

0xb8ec,	// (0x0008cb86) bg_popup_sub_pane_cp20_g9

0x0008,

0xf915,	// (0x00090baf) bg_popup_sub_pane_cp20_g

0xbb5e,	// (0x0008cdf8) list_vitu2_match_list_item_pane_ParamLimits

0xbb5e,	// (0x0008cdf8) list_vitu2_match_list_item_pane

0xbb70,	// (0x0008ce0a) list_vitu2_match_list_item_pane_t1

0xc242,	// (0x0008d4dc) bg_popup_sub_pane_cp21

0xde48,	// (0x0008f0e2) grid_vitu2_dropdown_list_pane

0x75ea,	// (0x00088884) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x75ea,	// (0x00088884) cell_vitu2_dropdown_list_char_pane

0x760c,	// (0x000888a6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x760c,	// (0x000888a6) cell_vitu2_dropdown_list_ctrl_pane

0xbb7e,	// (0x0008ce18) cell_vitu2_dropdown_list_char_pane_g1

0xbb87,	// (0x0008ce21) cell_vitu2_dropdown_list_char_pane_g2

0xbb90,	// (0x0008ce2a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf928,	// (0x00090bc2) cell_vitu2_dropdown_list_char_pane_g

0x7636,	// (0x000888d0) cell_vitu2_dropdown_list_char_pane_t1

0x7644,	// (0x000888de) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7644,	// (0x000888de) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7654,	// (0x000888ee) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7654,	// (0x000888ee) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7665,	// (0x000888ff) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7665,	// (0x000888ff) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7675,	// (0x0008890f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7675,	// (0x0008890f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd58b,	// (0x0008e825) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd58b,	// (0x0008e825) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf92f,	// (0x00090bc9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf92f,	// (0x00090bc9) cell_vitu2_dropdown_list_ctrl_pane_g

0x7691,	// (0x0008892b) aid_size_cell_gallery2_ParamLimits

0x7691,	// (0x0008892b) aid_size_cell_gallery2

0x76af,	// (0x00088949) grid_gallery2_pane_ParamLimits

0x76af,	// (0x00088949) grid_gallery2_pane

0x76c9,	// (0x00088963) scroll_pane_cp029_ParamLimits

0x76c9,	// (0x00088963) scroll_pane_cp029

0x76da,	// (0x00088974) cell_gallery2_pane_ParamLimits

0x76da,	// (0x00088974) cell_gallery2_pane

0xbb99,	// (0x0008ce33) cell_gallery2_pane_g2

0x773e,	// (0x000889d8) cell_gallery2_pane_g3

0xbba1,	// (0x0008ce3b) cell_gallery2_pane_g4

0xbba9,	// (0x0008ce43) cell_gallery2_pane_g5

0xde48,	// (0x0008f0e2) grid_highlight_pane_cp10

0x6d24,	// (0x00087fbe) popup_vitu2_match_list_window_ParamLimits

0x6d3b,	// (0x00087fd5) popup_vitu2_query_window_ParamLimits

0x6d3b,	// (0x00087fd5) popup_vitu2_query_window

0xc242,	// (0x0008d4dc) bg_vitu2_candi_button_pane

0xbb7e,	// (0x0008ce18) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xbb87,	// (0x0008ce21) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xbb90,	// (0x0008ce2a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0397,	// (0x00081631) bg_button_pane_cp015

0x7746,	// (0x000889e0) bg_button_pane_cp016

0x7752,	// (0x000889ec) bg_button_pane_cp017

0xee4a,	// (0x000900e4) bg_popup_sub_pane_cp22

0xbbb1,	// (0x0008ce4b) popup_vitu2_query_window_g1

0x03d4,	// (0x0008166e) popup_vitu2_query_window_g2

0x0002,

0xf93a,	// (0x00090bd4) popup_vitu2_query_window_g

0x03ee,	// (0x00081688) popup_vitu2_query_window_t1_ParamLimits

0x03ee,	// (0x00081688) popup_vitu2_query_window_t1

0x0423,	// (0x000816bd) popup_vitu2_query_window_t2_ParamLimits

0x0423,	// (0x000816bd) popup_vitu2_query_window_t2

0x0435,	// (0x000816cf) popup_vitu2_query_window_t3_ParamLimits

0x0435,	// (0x000816cf) popup_vitu2_query_window_t3

0x7779,	// (0x00088a13) popup_vitu2_query_window_t4_ParamLimits

0x7779,	// (0x00088a13) popup_vitu2_query_window_t4

0x778d,	// (0x00088a27) popup_vitu2_query_window_t5_ParamLimits

0x778d,	// (0x00088a27) popup_vitu2_query_window_t5

0x0006,

0xf941,	// (0x00090bdb) popup_vitu2_query_window_t_ParamLimits

0xf941,	// (0x00090bdb) popup_vitu2_query_window_t

0xb9e8,	// (0x0008cc82) main_cset_text_pane

0x718c,	// (0x00088426) aid_area_touch_slider_ParamLimits

0x71a8,	// (0x00088442) cset_slider_pane_ParamLimits

0x71cb,	// (0x00088465) main_cset_slider_pane_g1_ParamLimits

0x71e0,	// (0x0008847a) main_cset_slider_pane_g2_ParamLimits

0xba09,	// (0x0008cca3) main_cset_slider_pane_g3_ParamLimits

0xba09,	// (0x0008cca3) main_cset_slider_pane_g3

0x71f5,	// (0x0008848f) main_cset_slider_pane_g4_ParamLimits

0x71f5,	// (0x0008848f) main_cset_slider_pane_g4

0x7204,	// (0x0008849e) main_cset_slider_pane_g5_ParamLimits

0x7204,	// (0x0008849e) main_cset_slider_pane_g5

0x7212,	// (0x000884ac) main_cset_slider_pane_g6_ParamLimits

0x7212,	// (0x000884ac) main_cset_slider_pane_g6

0xf89e,	// (0x00090b38) main_cset_slider_pane_g_ParamLimits

0xba39,	// (0x0008ccd3) main_cset_slider_pane_t1_ParamLimits

0x72a2,	// (0x0008853c) main_cset_slider_pane_t2_ParamLimits

0x72bc,	// (0x00088556) main_cset_slider_pane_t3_ParamLimits

0x72d6,	// (0x00088570) main_cset_slider_pane_t4_ParamLimits

0x72f0,	// (0x0008858a) main_cset_slider_pane_t5_ParamLimits

0x730e,	// (0x000885a8) main_cset_slider_pane_t6_ParamLimits

0x7323,	// (0x000885bd) main_cset_slider_pane_t7_ParamLimits

0x7351,	// (0x000885eb) main_cset_slider_pane_t8_ParamLimits

0x7351,	// (0x000885eb) main_cset_slider_pane_t8

0x7379,	// (0x00088613) main_cset_slider_pane_t9_ParamLimits

0x7379,	// (0x00088613) main_cset_slider_pane_t9

0x73a1,	// (0x0008863b) main_cset_slider_pane_t10_ParamLimits

0x73a1,	// (0x0008863b) main_cset_slider_pane_t10

0x73c9,	// (0x00088663) main_cset_slider_pane_t11_ParamLimits

0x73c9,	// (0x00088663) main_cset_slider_pane_t11

0x73f3,	// (0x0008868d) main_cset_slider_pane_t12_ParamLimits

0x73f3,	// (0x0008868d) main_cset_slider_pane_t12

0x7410,	// (0x000886aa) main_cset_slider_pane_t13_ParamLimits

0x7410,	// (0x000886aa) main_cset_slider_pane_t13

0xf8c3,	// (0x00090b5d) main_cset_slider_pane_t_ParamLimits

0xc242,	// (0x0008d4dc) bg_popup_sub_pane_cp011

0xbbbd,	// (0x0008ce57) main_cset_text_pane_g1

0xbbc5,	// (0x0008ce5f) main_cset_text_pane_t1

0xbbd3,	// (0x0008ce6d) main_cset_text_pane_t2

0xbbe1,	// (0x0008ce7b) main_cset_text_pane_t3

0xbbef,	// (0x0008ce89) main_cset_text_pane_t4

0xbbfd,	// (0x0008ce97) main_cset_text_pane_t5

0xbc0b,	// (0x0008cea5) main_cset_text_pane_t6

0xbc19,	// (0x0008ceb3) main_cset_text_pane_t7

0x0006,

0xf950,	// (0x00090bea) main_cset_text_pane_t

0xc242,	// (0x0008d4dc) main_cam4_burst_pane

0xc242,	// (0x0008d4dc) main_cam5_pane

0xb9aa,	// (0x0008cc44) bg_button_pane_cp019

0xb9b3,	// (0x0008cc4d) bg_button_pane_cp020

0xba15,	// (0x0008ccaf) main_cset_slider_pane_g7_ParamLimits

0xba15,	// (0x0008ccaf) main_cset_slider_pane_g7

0xba21,	// (0x0008ccbb) main_cset_slider_pane_g8_ParamLimits

0xba21,	// (0x0008ccbb) main_cset_slider_pane_g8

0x7226,	// (0x000884c0) main_cset_slider_pane_g9_ParamLimits

0x7226,	// (0x000884c0) main_cset_slider_pane_g9

0x7232,	// (0x000884cc) main_cset_slider_pane_g10_ParamLimits

0x7232,	// (0x000884cc) main_cset_slider_pane_g10

0x723e,	// (0x000884d8) main_cset_slider_pane_g11_ParamLimits

0x723e,	// (0x000884d8) main_cset_slider_pane_g11

0x724a,	// (0x000884e4) main_cset_slider_pane_g12_ParamLimits

0x724a,	// (0x000884e4) main_cset_slider_pane_g12

0x7256,	// (0x000884f0) main_cset_slider_pane_g13_ParamLimits

0x7256,	// (0x000884f0) main_cset_slider_pane_g13

0x7262,	// (0x000884fc) main_cset_slider_pane_g14_ParamLimits

0x7262,	// (0x000884fc) main_cset_slider_pane_g14

0x726e,	// (0x00088508) main_cset_slider_pane_g15_ParamLimits

0x726e,	// (0x00088508) main_cset_slider_pane_g15

0xba61,	// (0x0008ccfb) main_cset_slider_pane_t14_ParamLimits

0xba61,	// (0x0008ccfb) main_cset_slider_pane_t14

0xba9a,	// (0x0008cd34) main_cset_slider_pane_t15_ParamLimits

0xba9a,	// (0x0008cd34) main_cset_slider_pane_t15

0x77a1,	// (0x00088a3b) aid_cam4_burst_size_cell_ParamLimits

0x77a1,	// (0x00088a3b) aid_cam4_burst_size_cell

0x77c1,	// (0x00088a5b) grid_cam4_burst_pane_ParamLimits

0x77c1,	// (0x00088a5b) grid_cam4_burst_pane

0x77fb,	// (0x00088a95) linegrid_cam4_burst_pane_ParamLimits

0x77fb,	// (0x00088a95) linegrid_cam4_burst_pane

0xc33f,	// (0x0008d5d9) scroll_pane_cp30_ParamLimits

0xc33f,	// (0x0008d5d9) scroll_pane_cp30

0x781d,	// (0x00088ab7) cell_cam4_burst_pane_ParamLimits

0x781d,	// (0x00088ab7) cell_cam4_burst_pane

0xbc27,	// (0x0008cec1) linegrid_cam4_burst_pane_g1_ParamLimits

0xbc27,	// (0x0008cec1) linegrid_cam4_burst_pane_g1

0x7872,	// (0x00088b0c) linegrid_cam4_burst_pane_g2_ParamLimits

0x7872,	// (0x00088b0c) linegrid_cam4_burst_pane_g2

0xbc34,	// (0x0008cece) linegrid_cam4_burst_pane_g3_ParamLimits

0xbc34,	// (0x0008cece) linegrid_cam4_burst_pane_g3

0x0002,

0xf95f,	// (0x00090bf9) linegrid_cam4_burst_pane_g_ParamLimits

0xf95f,	// (0x00090bf9) linegrid_cam4_burst_pane_g

0x7883,	// (0x00088b1d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7883,	// (0x00088b1d) linegrid_cam4_burst_pane_g3_copy1

0xbc41,	// (0x0008cedb) linegrid_cam4_burst_pane_g4_ParamLimits

0xbc41,	// (0x0008cedb) linegrid_cam4_burst_pane_g4

0x78a1,	// (0x00088b3b) linegrid_cam4_burst_pane_g5_ParamLimits

0x78a1,	// (0x00088b3b) linegrid_cam4_burst_pane_g5

0x78b2,	// (0x00088b4c) linegrid_cam4_burst_pane_g6_ParamLimits

0x78b2,	// (0x00088b4c) linegrid_cam4_burst_pane_g6

0xbc4e,	// (0x0008cee8) linegrid_cam4_burst_pane_g7_ParamLimits

0xbc4e,	// (0x0008cee8) linegrid_cam4_burst_pane_g7

0x78c9,	// (0x00088b63) cell_cam4_burst_pane_g1

0xbc67,	// (0x0008cf01) main_cam5_pane_t1_ParamLimits

0xbc67,	// (0x0008cf01) main_cam5_pane_t1

0xbc79,	// (0x0008cf13) main_cam5_pane_t2_ParamLimits

0xbc79,	// (0x0008cf13) main_cam5_pane_t2

0xbc8b,	// (0x0008cf25) main_cam5_pane_t3_ParamLimits

0xbc8b,	// (0x0008cf25) main_cam5_pane_t3

0xbc9d,	// (0x0008cf37) main_cam5_pane_t4_ParamLimits

0xbc9d,	// (0x0008cf37) main_cam5_pane_t4

0xbcb5,	// (0x0008cf4f) main_cam5_pane_t5_ParamLimits

0xbcb5,	// (0x0008cf4f) main_cam5_pane_t5

0xbcc9,	// (0x0008cf63) main_cam5_pane_t6_ParamLimits

0xbcc9,	// (0x0008cf63) main_cam5_pane_t6

0xbcdd,	// (0x0008cf77) main_cam5_pane_t7_ParamLimits

0xbcdd,	// (0x0008cf77) main_cam5_pane_t7

0xbcef,	// (0x0008cf89) main_cam5_pane_t8_ParamLimits

0xbcef,	// (0x0008cf89) main_cam5_pane_t8

0xbd0d,	// (0x0008cfa7) main_cam5_pane_t9_ParamLimits

0xbd0d,	// (0x0008cfa7) main_cam5_pane_t9

0xbd1f,	// (0x0008cfb9) main_cam5_pane_t10_ParamLimits

0xbd1f,	// (0x0008cfb9) main_cam5_pane_t10

0xbd31,	// (0x0008cfcb) main_cam5_pane_t11_ParamLimits

0xbd31,	// (0x0008cfcb) main_cam5_pane_t11

0xbd45,	// (0x0008cfdf) main_cam5_pane_t12_ParamLimits

0xbd45,	// (0x0008cfdf) main_cam5_pane_t12

0xbd5c,	// (0x0008cff6) main_cam5_pane_t13_ParamLimits

0xbd5c,	// (0x0008cff6) main_cam5_pane_t13

0x000c,

0xf96b,	// (0x00090c05) main_cam5_pane_t_ParamLimits

0xf96b,	// (0x00090c05) main_cam5_pane_t

0x0c4d,	// (0x00081ee7) popup_scut_keymap_window_ParamLimits

0x0c4d,	// (0x00081ee7) popup_scut_keymap_window

0x78dc,	// (0x00088b76) aid_size_cell_brow_shortcut

0xde48,	// (0x0008f0e2) bg_popup_window_pane_cp010

0x78e8,	// (0x00088b82) grid_scut_pane

0x78f4,	// (0x00088b8e) cell_scut_pane_ParamLimits

0x78f4,	// (0x00088b8e) cell_scut_pane

0x790d,	// (0x00088ba7) cell_scut_pane_g1

0xbd7f,	// (0x0008d019) cell_scut_pane_t1

0xbd8e,	// (0x0008d028) cell_scut_pane_t2

0x7916,	// (0x00088bb0) cell_scut_pane_t3

0x0002,

0xf986,	// (0x00090c20) cell_scut_pane_t

0x59bd,	// (0x00086c57) main_mup3_pane_g8_ParamLimits

0x59bd,	// (0x00086c57) main_mup3_pane_g8

0x6c31,	// (0x00087ecb) area_vitu2_query_pane_ParamLimits

0x6c31,	// (0x00087ecb) area_vitu2_query_pane

0x03ae,	// (0x00081648) input_focus_pane_cp08

0xbd9d,	// (0x0008d037) area_vitu2_query_pane_g1

0x04b3,	// (0x0008174d) area_vitu2_query_pane_g2

0x0001,

0xf98d,	// (0x00090c27) area_vitu2_query_pane_g

0x7924,	// (0x00088bbe) area_vitu2_query_pane_t1_ParamLimits

0x7924,	// (0x00088bbe) area_vitu2_query_pane_t1

0x7938,	// (0x00088bd2) area_vitu2_query_pane_t2_ParamLimits

0x7938,	// (0x00088bd2) area_vitu2_query_pane_t2

0x04c8,	// (0x00081762) area_vitu2_query_pane_t3_ParamLimits

0x04c8,	// (0x00081762) area_vitu2_query_pane_t3

0xbda9,	// (0x0008d043) area_vitu2_query_pane_t4_ParamLimits

0xbda9,	// (0x0008d043) area_vitu2_query_pane_t4

0xbdd1,	// (0x0008d06b) area_vitu2_query_pane_t5_ParamLimits

0xbdd1,	// (0x0008d06b) area_vitu2_query_pane_t5

0xbdf9,	// (0x0008d093) area_vitu2_query_pane_t6_ParamLimits

0xbdf9,	// (0x0008d093) area_vitu2_query_pane_t6

0x0006,

0xf992,	// (0x00090c2c) area_vitu2_query_pane_t_ParamLimits

0xf992,	// (0x00090c2c) area_vitu2_query_pane_t

0x794c,	// (0x00088be6) bg_button_pane_cp018

0x7958,	// (0x00088bf2) bg_button_pane_cp021

0x04f4,	// (0x0008178e) bg_button_pane_cp022

0x051f,	// (0x000817b9) input_focus_pane_cp09

0x2bca,	// (0x00083e64) aid_size_touch_mv_arrow_left

0x2bf3,	// (0x00083e8d) aid_size_touch_mv_arrow_right

0x7286,	// (0x00088520) main_cset_slider_pane_g16_ParamLimits

0x7286,	// (0x00088520) main_cset_slider_pane_g16

0x7294,	// (0x0008852e) main_cset_slider_pane_g17_ParamLimits

0x7294,	// (0x0008852e) main_cset_slider_pane_g17

0x78c9,	// (0x00088b63) cell_cam4_burst_pane_g1_ParamLimits

0xc242,	// (0x0008d4dc) compa_mode_pane

0x7492,	// (0x0008872c) popup_vtel_slider_window_g3_ParamLimits

0x7492,	// (0x0008872c) popup_vtel_slider_window_g3

0x74a9,	// (0x00088743) popup_vtel_slider_window_g4_ParamLimits

0x74a9,	// (0x00088743) popup_vtel_slider_window_g4

0x74c0,	// (0x0008875a) popup_vtel_slider_window_t1_ParamLimits

0x74c0,	// (0x0008875a) popup_vtel_slider_window_t1

0xc242,	// (0x0008d4dc) main_cl_pane

0xae42,	// (0x0008c0dc) popup_imed_adjust2_window_ParamLimits

0xee4a,	// (0x000900e4) bg_tb_trans_pane_cp05_ParamLimits

0xb10c,	// (0x0008c3a6) popup_imed_adjust2_window_g1_ParamLimits

0xb11b,	// (0x0008c3b5) popup_imed_adjust2_window_g2_ParamLimits

0xb11b,	// (0x0008c3b5) popup_imed_adjust2_window_g2

0xb127,	// (0x0008c3c1) popup_imed_adjust2_window_g3_ParamLimits

0xb127,	// (0x0008c3c1) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x000909a7) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x000909a7) popup_imed_adjust2_window_g

0xb133,	// (0x0008c3cd) popup_imed_adjust2_window_t1_ParamLimits

0xb14b,	// (0x0008c3e5) slider_imed_adjust_pane_ParamLimits

0xb15f,	// (0x0008c3f9) slider_imed_adjust_pane_g1_ParamLimits

0xb16f,	// (0x0008c409) slider_imed_adjust_pane_g2_ParamLimits

0xb17f,	// (0x0008c419) slider_imed_adjust_pane_g3_ParamLimits

0xb190,	// (0x0008c42a) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x000909ae) slider_imed_adjust_pane_g_ParamLimits

0x69b1,	// (0x00087c4b) aid_touch_area_cam4_ParamLimits

0x69b1,	// (0x00087c4b) aid_touch_area_cam4

0xb740,	// (0x0008c9da) battery_pane_cp01

0x6a84,	// (0x00087d1e) main_camera4_pane_g6_ParamLimits

0x6a84,	// (0x00087d1e) main_camera4_pane_g6

0x6aae,	// (0x00087d48) main_camera4_pane_t2_ParamLimits

0x6aae,	// (0x00087d48) main_camera4_pane_t2

0x0001,

0xf811,	// (0x00090aab) main_camera4_pane_t_ParamLimits

0xf811,	// (0x00090aab) main_camera4_pane_t

0x6ae3,	// (0x00087d7d) aid_touch_area_vid4_ParamLimits

0x6ae3,	// (0x00087d7d) aid_touch_area_vid4

0x6b3a,	// (0x00087dd4) main_video4_pane_g5_ParamLimits

0x6b3a,	// (0x00087dd4) main_video4_pane_g5

0x6b60,	// (0x00087dfa) vid4_progress_pane_ParamLimits

0x6b60,	// (0x00087dfa) vid4_progress_pane

0xba2d,	// (0x0008ccc7) main_cset_slider_pane_g18_ParamLimits

0xba2d,	// (0x0008ccc7) main_cset_slider_pane_g18

0xbc5b,	// (0x0008cef5) cell_cam4_burst_pane_g2_ParamLimits

0xbc5b,	// (0x0008cef5) cell_cam4_burst_pane_g2

0x0001,

0xf966,	// (0x00090c00) cell_cam4_burst_pane_g_ParamLimits

0xf966,	// (0x00090c00) cell_cam4_burst_pane_g

0xdcaa,	// (0x0008ef44) bg_cl_pane_ParamLimits

0xdcaa,	// (0x0008ef44) bg_cl_pane

0x7964,	// (0x00088bfe) cl_header_pane_ParamLimits

0x7964,	// (0x00088bfe) cl_header_pane

0x7978,	// (0x00088c12) cl_listscroll_pane_ParamLimits

0x7978,	// (0x00088c12) cl_listscroll_pane

0xbe45,	// (0x0008d0df) bg_cl_pane_g1

0xbe4d,	// (0x0008d0e7) bg_cl_pane_g2

0xbe55,	// (0x0008d0ef) bg_cl_pane_g3

0xbe5d,	// (0x0008d0f7) bg_cl_pane_g4

0xbe65,	// (0x0008d0ff) bg_cl_pane_g5

0xbe6d,	// (0x0008d107) bg_cl_pane_g6

0xbe75,	// (0x0008d10f) bg_cl_pane_g7

0xbe7d,	// (0x0008d117) bg_cl_pane_g8

0xbe85,	// (0x0008d11f) bg_cl_pane_g9

0x0008,

0xf9a1,	// (0x00090c3b) bg_cl_pane_g

0x7988,	// (0x00088c22) aid_height_cl_leading_ParamLimits

0x7988,	// (0x00088c22) aid_height_cl_leading

0x7994,	// (0x00088c2e) aid_height_cl_text_ParamLimits

0x7994,	// (0x00088c2e) aid_height_cl_text

0xcf46,	// (0x0008e1e0) bg_cl_header_pane_ParamLimits

0xcf46,	// (0x0008e1e0) bg_cl_header_pane

0x79b3,	// (0x00088c4d) cl_header_pane_g1_ParamLimits

0x79b3,	// (0x00088c4d) cl_header_pane_g1

0x79c9,	// (0x00088c63) cl_header_pane_t1_ParamLimits

0x79c9,	// (0x00088c63) cl_header_pane_t1

0xbe8d,	// (0x0008d127) cl_list_pane

0xba00,	// (0x0008cc9a) hc_scroll_pane_cp01

0xe054,	// (0x0008f2ee) bg_cl_header_pane_g1

0xb8bc,	// (0x0008cb56) bg_cl_header_pane_g2

0xe074,	// (0x0008f30e) bg_cl_header_pane_g3

0xb8cc,	// (0x0008cb66) bg_cl_header_pane_g4

0xb8c4,	// (0x0008cb5e) bg_cl_header_pane_g5

0xbb56,	// (0x0008cdf0) bg_cl_header_pane_g6

0xb8e4,	// (0x0008cb7e) bg_cl_header_pane_g7

0xb8ec,	// (0x0008cb86) bg_cl_header_pane_g8

0xb8dc,	// (0x0008cb76) bg_cl_header_pane_g9

0x0008,

0xf9b4,	// (0x00090c4e) bg_cl_header_pane_g

0x79e2,	// (0x00088c7c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x79e2,	// (0x00088c7c) hc_cl_list_double_graphic_heading_pane

0x79f5,	// (0x00088c8f) hc_cl_list_single_graphic_pane_ParamLimits

0x79f5,	// (0x00088c8f) hc_cl_list_single_graphic_pane

0x7a0d,	// (0x00088ca7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7a0d,	// (0x00088ca7) hc_cl_list_single_graphic_pane_g1

0x7a19,	// (0x00088cb3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7a19,	// (0x00088cb3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9c7,	// (0x00090c61) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9c7,	// (0x00090c61) hc_cl_list_single_graphic_pane_g

0x7a2d,	// (0x00088cc7) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7a2d,	// (0x00088cc7) hc_cl_list_single_graphic_pane_t1

0x7a0d,	// (0x00088ca7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7a0d,	// (0x00088ca7) hc_cl_list_double_graphic_heading_pane_g1

0x7a42,	// (0x00088cdc) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7a42,	// (0x00088cdc) hc_cl_list_double_graphic_heading_pane_g2

0x7a56,	// (0x00088cf0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7a56,	// (0x00088cf0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9cc,	// (0x00090c66) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9cc,	// (0x00090c66) hc_cl_list_double_graphic_heading_pane_g

0x7a6a,	// (0x00088d04) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7a6a,	// (0x00088d04) hc_cl_list_double_graphic_heading_pane_t1

0x7a7f,	// (0x00088d19) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7a7f,	// (0x00088d19) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d3,	// (0x00090c6d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d3,	// (0x00090c6d) hc_cl_list_double_graphic_heading_pane_t

0xbe9e,	// (0x0008d138) vid4_progress_pane_g1

0xbeae,	// (0x0008d148) vid4_progress_pane_g2

0x7a94,	// (0x00088d2e) vid4_progress_pane_g3

0xbebe,	// (0x0008d158) vid4_progress_pane_g4

0x0004,

0xf9d8,	// (0x00090c72) vid4_progress_pane_g

0x7aa6,	// (0x00088d40) vid4_progress_pane_t1

0xbedc,	// (0x0008d176) vid4_progress_pane_t2

0x0002,

0xf9e3,	// (0x00090c7d) vid4_progress_pane_t

0x7ac0,	// (0x00088d5a) wait_bar_pane_cp07

0x50c7,	// (0x00086361) blid_firmament_pane_ParamLimits

0x510a,	// (0x000863a4) popup_blid_sat_info2_window_g1

0x512e,	// (0x000863c8) popup_blid_sat_info2_window_t3

0x513c,	// (0x000863d6) popup_blid_sat_info2_window_t4

0x514a,	// (0x000863e4) popup_blid_sat_info2_window_t5

0x5158,	// (0x000863f2) popup_blid_sat_info2_window_t6

0x5168,	// (0x00086402) popup_blid_sat_info2_window_t7

0x5176,	// (0x00086410) popup_blid_sat_info2_window_t8

0x5184,	// (0x0008641e) popup_blid_sat_info2_window_t9

0x5192,	// (0x0008642c) popup_blid_sat_info2_window_t10

0x5259,	// (0x000864f3) aid_firma_cardinal_ParamLimits

0x526d,	// (0x00086507) blid_firmament_pane_t1_ParamLimits

0x5284,	// (0x0008651e) blid_firmament_pane_t2_ParamLimits

0x529b,	// (0x00086535) blid_firmament_pane_t3_ParamLimits

0x52b2,	// (0x0008654c) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x000908a0) blid_firmament_pane_t_ParamLimits

0x52c9,	// (0x00086563) blid_sat_info_pane_ParamLimits

0xcf46,	// (0x0008e1e0) main_cam_set_pane_ParamLimits

0x61e4,	// (0x0008747e) aid_size_cell_colour_35_ParamLimits

0x6204,	// (0x0008749e) aid_size_cell_colour_112_ParamLimits

0x6224,	// (0x000874be) aid_size_cell_effect_ParamLimits

0xee4a,	// (0x000900e4) bg_tb_trans_pane_cp02_ParamLimits

0xe2d3,	// (0x0008f56d) heading_imed_pane_ParamLimits

0x6244,	// (0x000874de) listscroll_imed_pane_ParamLimits

0x3cd0,	// (0x00084f6a) popup_call2_audio_first_window_g5_ParamLimits

0x3cd0,	// (0x00084f6a) popup_call2_audio_first_window_g5

0x65b4,	// (0x0008784e) aid_size_touch_image3_arrow_left_ParamLimits

0x65b4,	// (0x0008784e) aid_size_touch_image3_arrow_left

0x65e0,	// (0x0008787a) aid_size_touch_image3_arrow_right_ParamLimits

0x65e0,	// (0x0008787a) aid_size_touch_image3_arrow_right

0xbef5,	// (0x0008d18f) vid4_progress_pane_t3

0x63e9,	// (0x00087683) main_hwr_training_symbol_option_pane_ParamLimits

0x63e9,	// (0x00087683) main_hwr_training_symbol_option_pane

0xb2a4,	// (0x0008c53e) popup_hwr_training_preview_window_ParamLimits

0xb2a4,	// (0x0008c53e) popup_hwr_training_preview_window

0x6409,	// (0x000876a3) hwr_training_navi_pane_g5_ParamLimits

0x6409,	// (0x000876a3) hwr_training_navi_pane_g5

0xb8aa,	// (0x0008cb44) popup_char_count_window

0xcf46,	// (0x0008e1e0) bg_popup_sub_pane_cp20_ParamLimits

0x75d2,	// (0x0008886c) list_vitu2_match_list_pane_ParamLimits

0x75de,	// (0x00088878) vitu2_page_scroll_pane_ParamLimits

0x75de,	// (0x00088878) vitu2_page_scroll_pane

0xc354,	// (0x0008d5ee) list_single_hwr_training_symbol_option_pane_ParamLimits

0xc354,	// (0x0008d5ee) list_single_hwr_training_symbol_option_pane

0xc367,	// (0x0008d601) list_single_hwr_training_symbol_option_pane_g1

0xc36f,	// (0x0008d609) list_single_hwr_training_symbol_option_pane_t1

0xc37d,	// (0x0008d617) bg_button_pane_cp023

0xc386,	// (0x0008d620) bg_button_pane_cp024

0xc3b9,	// (0x0008d653) vitu2_page_scroll_pane_g1

0xc3c1,	// (0x0008d65b) vitu2_page_scroll_pane_g2

0x0001,

0xf9ea,	// (0x00090c84) vitu2_page_scroll_pane_g

0xc3c9,	// (0x0008d663) vitu2_page_scroll_pane_t1

0xc3d8,	// (0x0008d672) popup_char_count_window_g1

0xc3e1,	// (0x0008d67b) popup_char_count_window_g2

0xc3ea,	// (0x0008d684) popup_char_count_window_g3

0x0002,

0xf9ef,	// (0x00090c89) popup_char_count_window_g

0xc3f3,	// (0x0008d68d) popup_char_count_window_t1

0xc242,	// (0x0008d4dc) main_vded2_pane

0xb0f8,	// (0x0008c392) aid_size_cell_imed_line

0xb102,	// (0x0008c39c) grid_imed_line_width_pane

0xb7fa,	// (0x0008ca94) vid4_indicators_pane_g4

0xc401,	// (0x0008d69b) cell_imed_line_width_pane_ParamLimits

0xc401,	// (0x0008d69b) cell_imed_line_width_pane

0xc417,	// (0x0008d6b1) cell_imed_line_width_pane_g1

0xc420,	// (0x0008d6ba) cell_imed_line_width_pane_g2

0x0001,

0xf9f6,	// (0x00090c90) cell_imed_line_width_pane_g

0x7ad3,	// (0x00088d6d) main_vded2_pane_g1_ParamLimits

0x7ad3,	// (0x00088d6d) main_vded2_pane_g1

0x7aee,	// (0x00088d88) main_vded2_pane_g2_ParamLimits

0x7aee,	// (0x00088d88) main_vded2_pane_g2

0x0001,

0xf9fb,	// (0x00090c95) main_vded2_pane_g_ParamLimits

0xf9fb,	// (0x00090c95) main_vded2_pane_g

0x7b00,	// (0x00088d9a) vded2_slider_pane_ParamLimits

0x7b00,	// (0x00088d9a) vded2_slider_pane

0x7b10,	// (0x00088daa) aid_size_touch_vded2_end

0x7b1a,	// (0x00088db4) aid_size_touch_vded2_playhead

0xc428,	// (0x0008d6c2) aid_size_touch_vded2_start

0xc430,	// (0x0008d6ca) vded2_slider_bg_pane

0xc439,	// (0x0008d6d3) vded2_slider_pane_g1

0xc442,	// (0x0008d6dc) vded2_slider_pane_g2

0x7b24,	// (0x00088dbe) vded2_slider_pane_g3

0x0002,

0xfa00,	// (0x00090c9a) vded2_slider_pane_g

0xc44a,	// (0x0008d6e4) vded2_slider_bg_pane_g1

0xc453,	// (0x0008d6ed) vded2_slider_bg_pane_g2

0xc45c,	// (0x0008d6f6) vded2_slider_bg_pane_g3

0x0002,

0xfa07,	// (0x00090ca1) vded2_slider_bg_pane_g

0x2ff3,	// (0x0008428d) aid_postcard_touch_down_pane_ParamLimits

0x2ff3,	// (0x0008428d) aid_postcard_touch_down_pane

0x300b,	// (0x000842a5) aid_postcard_touch_up_pane_ParamLimits

0x300b,	// (0x000842a5) aid_postcard_touch_up_pane

0xc242,	// (0x0008d4dc) main_blid2_pane

0xae24,	// (0x0008c0be) popup_blid2_search_window

0xc242,	// (0x0008d4dc) blid2_gps_pane

0xc242,	// (0x0008d4dc) blid2_navig_pane

0xc242,	// (0x0008d4dc) blid2_search_pane

0xc242,	// (0x0008d4dc) blid2_tripm_pane

0x7b2f,	// (0x00088dc9) blid2_search_pane_g1_ParamLimits

0x7b2f,	// (0x00088dc9) blid2_search_pane_g1

0x7b42,	// (0x00088ddc) blid2_search_pane_t1_ParamLimits

0x7b42,	// (0x00088ddc) blid2_search_pane_t1

0x7b54,	// (0x00088dee) aid_size_cell_blid2_gps_ParamLimits

0x7b54,	// (0x00088dee) aid_size_cell_blid2_gps

0x7b6c,	// (0x00088e06) blid2_gps_pane_g1_ParamLimits

0x7b6c,	// (0x00088e06) blid2_gps_pane_g1

0x7b80,	// (0x00088e1a) grid_blid2_satellite_pane_ParamLimits

0x7b80,	// (0x00088e1a) grid_blid2_satellite_pane

0x7b98,	// (0x00088e32) blid2_navig_pane_g1_ParamLimits

0x7b98,	// (0x00088e32) blid2_navig_pane_g1

0x7ba4,	// (0x00088e3e) blid2_navig_pane_t1_ParamLimits

0x7ba4,	// (0x00088e3e) blid2_navig_pane_t1

0x7bbf,	// (0x00088e59) blid2_navig_pane_t2_ParamLimits

0x7bbf,	// (0x00088e59) blid2_navig_pane_t2

0x0001,

0xfa0e,	// (0x00090ca8) blid2_navig_pane_t_ParamLimits

0xfa0e,	// (0x00090ca8) blid2_navig_pane_t

0x7bda,	// (0x00088e74) blid2_navig_ring_pane_ParamLimits

0x7bda,	// (0x00088e74) blid2_navig_ring_pane

0x7bf5,	// (0x00088e8f) blid2_speed_pane_ParamLimits

0x7bf5,	// (0x00088e8f) blid2_speed_pane

0x7c01,	// (0x00088e9b) blid2_tripm_pane_g1_ParamLimits

0x7c01,	// (0x00088e9b) blid2_tripm_pane_g1

0x7c1c,	// (0x00088eb6) blid2_tripm_pane_g2_ParamLimits

0x7c1c,	// (0x00088eb6) blid2_tripm_pane_g2

0x7c2f,	// (0x00088ec9) blid2_tripm_pane_g3_ParamLimits

0x7c2f,	// (0x00088ec9) blid2_tripm_pane_g3

0x7c40,	// (0x00088eda) blid2_tripm_pane_g4_ParamLimits

0x7c40,	// (0x00088eda) blid2_tripm_pane_g4

0x7c51,	// (0x00088eeb) blid2_tripm_pane_g5_ParamLimits

0x7c51,	// (0x00088eeb) blid2_tripm_pane_g5

0x0005,

0xfa13,	// (0x00090cad) blid2_tripm_pane_g_ParamLimits

0xfa13,	// (0x00090cad) blid2_tripm_pane_g

0x7c77,	// (0x00088f11) blid2_tripm_pane_t1_ParamLimits

0x7c77,	// (0x00088f11) blid2_tripm_pane_t1

0x7c90,	// (0x00088f2a) blid2_tripm_pane_t2_ParamLimits

0x7c90,	// (0x00088f2a) blid2_tripm_pane_t2

0x7ca9,	// (0x00088f43) blid2_tripm_pane_t3_ParamLimits

0x7ca9,	// (0x00088f43) blid2_tripm_pane_t3

0x0003,

0xfa20,	// (0x00090cba) blid2_tripm_pane_t_ParamLimits

0xfa20,	// (0x00090cba) blid2_tripm_pane_t

0x7cf0,	// (0x00088f8a) cell_blid2_satellite_pane_ParamLimits

0x7cf0,	// (0x00088f8a) cell_blid2_satellite_pane

0x7d0c,	// (0x00088fa6) cell_blid2_satellite_pane_g1

0xc465,	// (0x0008d6ff) cell_blid2_satellite_pane_t1

0xdc4c,	// (0x0008eee6) blid2_speed_pane_g1

0xc473,	// (0x0008d70d) blid2_speed_pane_t1

0xc481,	// (0x0008d71b) blid2_speed_pane_t2

0x0001,

0xfa29,	// (0x00090cc3) blid2_speed_pane_t

0xdc4c,	// (0x0008eee6) blid2_navig_ring_pane_g1

0x7d15,	// (0x00088faf) blid2_navig_ring_pane_g2

0x7d1d,	// (0x00088fb7) blid2_navig_ring_pane_g3

0x7d25,	// (0x00088fbf) blid2_navig_ring_pane_g4

0x7d2d,	// (0x00088fc7) blid2_navig_ring_pane_g5

0x0004,

0xfa2e,	// (0x00090cc8) blid2_navig_ring_pane_g

0xc242,	// (0x0008d4dc) bg_popup_window_pane_cp011

0xc48f,	// (0x0008d729) popup_blid2_search_window_g1

0xc497,	// (0x0008d731) popup_blid2_search_window_t1

0xc4a5,	// (0x0008d73f) popup_blid2_search_window_t2

0x0001,

0xfa39,	// (0x00090cd3) popup_blid2_search_window_t

0xdf63,	// (0x0008f1fd) main_browser_pane_g1

0xdcaa,	// (0x0008ef44) main_browser_pane_ParamLimits

0xcf46,	// (0x0008e1e0) bg_button_pane_cp011_ParamLimits

0x6e56,	// (0x000880f0) cell_vitu2_function_pane_g1_ParamLimits

0xee4a,	// (0x000900e4) bg_popup_sub_pane_cp22_ParamLimits

0x03ae,	// (0x00081648) input_focus_pane_cp08_ParamLimits

0x775e,	// (0x000889f8) popup_vitu2_query_button_pane_ParamLimits

0x775e,	// (0x000889f8) popup_vitu2_query_button_pane

0x03ca,	// (0x00081664) popup_vitu2_query_input_button_pane

0xbbb1,	// (0x0008ce4b) popup_vitu2_query_window_g1_ParamLimits

0x03d4,	// (0x0008166e) popup_vitu2_query_window_g2_ParamLimits

0xf93a,	// (0x00090bd4) popup_vitu2_query_window_g_ParamLimits

0xc242,	// (0x0008d4dc) bg_button_pane_cp026

0x7d35,	// (0x00088fcf) popup_vitu2_query_input_button_pane_g1

0xc242,	// (0x0008d4dc) bg_button_pane_cp025

0xc4b3,	// (0x0008d74d) popup_vitu2_query_button_pane_t1

0x55d1,	// (0x0008686b) main_mp3_pane_t6

0x55e7,	// (0x00086881) popup_slider_window_cp01

0xb75e,	// (0x0008c9f8) cam4_battery_pane

0xb7b3,	// (0x0008ca4d) cam4_battery_pane_cp02

0xbe96,	// (0x0008d130) cam4_battery_pane_cp01

0xbe96,	// (0x0008d130) cam4_battery_pane_cp03

0xdc4c,	// (0x0008eee6) cam4_battery_pane_g1

0xc4c1,	// (0x0008d75b) cam4_battery_pane_g2

0x0001,

0xfa3e,	// (0x00090cd8) cam4_battery_pane_g

0x51a0,	// (0x0008643a) popup_blid_sat_info2_window_t11

0x2bca,	// (0x00083e64) aid_size_touch_mv_arrow_left_ParamLimits

0x2bf3,	// (0x00083e8d) aid_size_touch_mv_arrow_right_ParamLimits

0xecd1,	// (0x0008ff6b) navi_pane_g1_ParamLimits

0x2c32,	// (0x00083ecc) navi_pane_g2_ParamLimits

0x2c60,	// (0x00083efa) navi_pane_g3_ParamLimits

0xf32f,	// (0x000905c9) navi_pane_g_ParamLimits

0x2cba,	// (0x00083f54) navi_pane_mv_t1_ParamLimits

0x6250,	// (0x000874ea) grid_imed_effect_pane_ParamLimits

0x17bb,	// (0x00082a55) aid_placing_vt_slider_lsc

0xde9f,	// (0x0008f139) aid_placing_vt_slider_prt

0xcf46,	// (0x0008e1e0) bg_tb_trans_pane_cp01_ParamLimits

0x544d,	// (0x000866e7) popup_image_details_window_g1_ParamLimits

0x5460,	// (0x000866fa) popup_image_details_window_g2_ParamLimits

0x5475,	// (0x0008670f) popup_image_details_window_g3_ParamLimits

0x5475,	// (0x0008670f) popup_image_details_window_g3

0xf646,	// (0x000908e0) popup_image_details_window_g_ParamLimits

0x5489,	// (0x00086723) popup_image_details_window_t1_ParamLimits

0x549b,	// (0x00086735) popup_image_details_window_t2_ParamLimits

0x54b4,	// (0x0008674e) popup_image_details_window_t3_ParamLimits

0x54c8,	// (0x00086762) popup_image_details_window_t4_ParamLimits

0x54e3,	// (0x0008677d) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x000908e7) popup_image_details_window_t_ParamLimits

0x79a0,	// (0x00088c3a) cl_header_name_pane_ParamLimits

0x79a0,	// (0x00088c3a) cl_header_name_pane

0x7d3d,	// (0x00088fd7) cl_header_name_pane_t1_ParamLimits

0x7d3d,	// (0x00088fd7) cl_header_name_pane_t1

0x7d5e,	// (0x00088ff8) cl_header_name_pane_t2_ParamLimits

0x7d5e,	// (0x00088ff8) cl_header_name_pane_t2

0x7da0,	// (0x0008903a) cl_header_name_pane_t3_ParamLimits

0x7da0,	// (0x0008903a) cl_header_name_pane_t3

0x0002,

0xfa43,	// (0x00090cdd) cl_header_name_pane_t_ParamLimits

0xfa43,	// (0x00090cdd) cl_header_name_pane_t

0x2c8b,	// (0x00083f25) navi_pane_mv_g2_ParamLimits

0xb846,	// (0x0008cae0) field_vitu2_entry_pane_g1_ParamLimits

0xb852,	// (0x0008caec) field_vitu2_entry_pane_g2_ParamLimits

0xee28,	// (0x000900c2) field_vitu2_entry_pane_g3_ParamLimits

0xee28,	// (0x000900c2) field_vitu2_entry_pane_g3

0xf843,	// (0x00090add) field_vitu2_entry_pane_g_ParamLimits

0x6dd2,	// (0x0008806c) cell_vitu2_itu_pane_g1_ParamLimits

0x6dea,	// (0x00088084) cell_vitu2_itu_pane_g2_ParamLimits

0x6dea,	// (0x00088084) cell_vitu2_itu_pane_g2

0x0001,

0xf84f,	// (0x00090ae9) cell_vitu2_itu_pane_g_ParamLimits

0xf84f,	// (0x00090ae9) cell_vitu2_itu_pane_g

0xcf46,	// (0x0008e1e0) bg_vkb2_func_pane_cp05_ParamLimits

0xcf46,	// (0x0008e1e0) bg_vkb2_func_pane_cp05

0xcf46,	// (0x0008e1e0) bg_vkb2_func_pane_cp03

0xcf46,	// (0x0008e1e0) bg_vkb2_func_pane_cp04

0xcf46,	// (0x0008e1e0) bg_vkb2_func_pane_cp10_ParamLimits

0xcf46,	// (0x0008e1e0) bg_vkb2_func_pane_cp10

0x0509,	// (0x000817a3) bg_vkb2_func_pane_cp08

0x794c,	// (0x00088be6) bg_vkb2_func_pane_cp06

0x7958,	// (0x00088bf2) bg_vkb2_func_pane_cp07

0xc38f,	// (0x0008d629) bg_vkb2_func_pane_cp11_ParamLimits

0xc38f,	// (0x0008d629) bg_vkb2_func_pane_cp11

0xc3a4,	// (0x0008d63e) bg_vkb2_func_pane_cp12_ParamLimits

0xc3a4,	// (0x0008d63e) bg_vkb2_func_pane_cp12

0xc242,	// (0x0008d4dc) bg_vkb2_func_pane_cp09

0xb8bc,	// (0x0008cb56) bg_vkb2_func_pane_g1

0xe074,	// (0x0008f30e) bg_vkb2_func_pane_g2

0xb8c4,	// (0x0008cb5e) bg_vkb2_func_pane_g3

0xb8cc,	// (0x0008cb66) bg_vkb2_func_pane_g4

0xbb56,	// (0x0008cdf0) bg_vkb2_func_pane_g5

0xb8e4,	// (0x0008cb7e) bg_vkb2_func_pane_g6

0xb8ec,	// (0x0008cb86) bg_vkb2_func_pane_g7

0xb8dc,	// (0x0008cb76) bg_vkb2_func_pane_g8

0xe054,	// (0x0008f2ee) bg_vkb2_func_pane_g9

0x0008,

0xfa4a,	// (0x00090ce4) bg_vkb2_func_pane_g

0x7c65,	// (0x00088eff) blid2_tripm_pane_g6_ParamLimits

0x7c65,	// (0x00088eff) blid2_tripm_pane_g6

0xb623,	// (0x0008c8bd) mp4_progress_pane_g1

0x7cdc,	// (0x00088f76) blid2_tripm_values_pane_ParamLimits

0x7cdc,	// (0x00088f76) blid2_tripm_values_pane

0x7dd1,	// (0x0008906b) blid2_tripm_values_pane_t1

0x7ddf,	// (0x00089079) blid2_tripm_values_pane_t2

0xc4cb,	// (0x0008d765) blid2_tripm_values_pane_t3

0x7ded,	// (0x00089087) blid2_tripm_values_pane_t4

0x7dfb,	// (0x00089095) blid2_tripm_values_pane_t5

0x7e09,	// (0x000890a3) blid2_tripm_values_pane_t6

0xc4d9,	// (0x0008d773) blid2_tripm_values_pane_t7

0x7e17,	// (0x000890b1) blid2_tripm_values_pane_t8

0x7e25,	// (0x000890bf) blid2_tripm_values_pane_t9

0x0008,

0xfa5d,	// (0x00090cf7) blid2_tripm_values_pane_t

0x17f8,	// (0x00082a92) call_video_pane_t1_ParamLimits

0x1812,	// (0x00082aac) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00090477) call_video_pane_t_ParamLimits

0x01bc,	// (0x00081456) msg_header_pane_g1_ParamLimits

0xef03,	// (0x0009019d) msg_header_pane_g2_ParamLimits

0xef03,	// (0x0009019d) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x00090667) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x00090667) msg_header_pane_g

0xdcaa,	// (0x0008ef44) main_clock2_pane_ParamLimits

0x5f4d,	// (0x000871e7) grid_clock2_toolbar_pane_ParamLimits

0x5f4d,	// (0x000871e7) grid_clock2_toolbar_pane

0x5f4d,	// (0x000871e7) listscroll_clock2_pane_ParamLimits

0x5f4d,	// (0x000871e7) listscroll_clock2_pane

0x602c,	// (0x000872c6) main_clock2_pane_t3_ParamLimits

0x602c,	// (0x000872c6) main_clock2_pane_t3

0x604f,	// (0x000872e9) main_clock2_pane_t4_ParamLimits

0x604f,	// (0x000872e9) main_clock2_pane_t4

0xc4e7,	// (0x0008d781) cell_clock2_toolbar_pane

0xc4ef,	// (0x0008d789) cell_clock2_toolbar_pane_cp01

0xc4ef,	// (0x0008d789) cell_clock2_toolbar_pane_cp02

0xc4f7,	// (0x0008d791) cell_clock2_toolbar_pane_cp03

0xc4ff,	// (0x0008d799) list_clock2_pane

0xec37,	// (0x0008fed1) scroll_pane_cp10

0xc507,	// (0x0008d7a1) list_single_clock2_pane_ParamLimits

0xc507,	// (0x0008d7a1) list_single_clock2_pane

0xde48,	// (0x0008f0e2) list_highlight_pane_cp08

0xc514,	// (0x0008d7ae) list_single_clock2_pane_t1

0xc522,	// (0x0008d7bc) list_single_clock2_pane_t2

0x0001,

0xfa70,	// (0x00090d0a) list_single_clock2_pane_t

0xc242,	// (0x0008d4dc) bg_button_pane_cp10

0xc530,	// (0x0008d7ca) cell_clock2_toolbar_pane_g1

0x2f7f,	// (0x00084219) aid_main_viewer_pane_g1_ParamLimits

0x2f7f,	// (0x00084219) aid_main_viewer_pane_g1

0x2f8d,	// (0x00084227) aid_main_viewer_pane_g2_ParamLimits

0x2f8d,	// (0x00084227) aid_main_viewer_pane_g2

0x2f9b,	// (0x00084235) aid_main_viewer_pane_g3_ParamLimits

0x2f9b,	// (0x00084235) aid_main_viewer_pane_g3

0x2faa,	// (0x00084244) aid_main_viewer_pane_g4_ParamLimits

0x2faa,	// (0x00084244) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x00090678) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x00090678) aid_main_viewer_pane_g

0x487a,	// (0x00085b14) main_calc_pane_ParamLimits

0x489a,	// (0x00085b34) main_dialer2_pane_ParamLimits

0xc242,	// (0x0008d4dc) main_cam6_pane

0xc242,	// (0x0008d4dc) main_vid6_pane

0x5f59,	// (0x000871f3) listscroll_gen_pane_cp06_ParamLimits

0x5f59,	// (0x000871f3) listscroll_gen_pane_cp06

0x6072,	// (0x0008730c) main_clock2_pane_t5_ParamLimits

0x6072,	// (0x0008730c) main_clock2_pane_t5

0x60d0,	// (0x0008736a) aid_call2_pane_cp10_ParamLimits

0x60e2,	// (0x0008737c) aid_call_pane_cp10_ParamLimits

0xeca6,	// (0x0008ff40) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeca6,	// (0x0008ff40) popup_clock_analogue_window_cp10_g2_ParamLimits

0x60f4,	// (0x0008738e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x60f4,	// (0x0008738e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeca6,	// (0x0008ff40) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x0009099c) popup_clock_analogue_window_cp10_g_ParamLimits

0x610a,	// (0x000873a4) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb694,	// (0x0008c92e) cell_dialer2_keypad_pane_g2_ParamLimits

0xb694,	// (0x0008c92e) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e2,	// (0x00090a7c) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e2,	// (0x00090a7c) cell_dialer2_keypad_pane_g

0xdc56,	// (0x0008eef0) cell_dialer2_keypad_pane_t1

0x717e,	// (0x00088418) main_cset_text2_pane_ParamLimits

0x717e,	// (0x00088418) main_cset_text2_pane

0xbd9d,	// (0x0008d037) area_vitu2_query_pane_g1_ParamLimits

0x04b3,	// (0x0008174d) area_vitu2_query_pane_g2_ParamLimits

0xf98d,	// (0x00090c27) area_vitu2_query_pane_g_ParamLimits

0xbe21,	// (0x0008d0bb) area_vitu2_query_pane_t7_ParamLimits

0xbe21,	// (0x0008d0bb) area_vitu2_query_pane_t7

0x794c,	// (0x00088be6) bg_button_pane_cp018_ParamLimits

0x7958,	// (0x00088bf2) bg_button_pane_cp021_ParamLimits

0x04f4,	// (0x0008178e) bg_button_pane_cp022_ParamLimits

0x0509,	// (0x000817a3) bg_vkb2_func_pane_cp08_ParamLimits

0x794c,	// (0x00088be6) bg_vkb2_func_pane_cp06_ParamLimits

0x7958,	// (0x00088bf2) bg_vkb2_func_pane_cp07_ParamLimits

0x051f,	// (0x000817b9) input_focus_pane_cp09_ParamLimits

0xbf23,	// (0x0008d1bd) cam6_autofocus_pane_ParamLimits

0xbf23,	// (0x0008d1bd) cam6_autofocus_pane

0x7e33,	// (0x000890cd) cam6_image_uncrop_pane_ParamLimits

0x7e33,	// (0x000890cd) cam6_image_uncrop_pane

0x7e43,	// (0x000890dd) cam6_indi_pane_ParamLimits

0x7e43,	// (0x000890dd) cam6_indi_pane

0x7e59,	// (0x000890f3) cam6_mode_pane_ParamLimits

0x7e59,	// (0x000890f3) cam6_mode_pane

0x7e6b,	// (0x00089105) cam6_timer_pane_ParamLimits

0x7e6b,	// (0x00089105) cam6_timer_pane

0x7e77,	// (0x00089111) cam6_zoom_pane_ParamLimits

0x7e77,	// (0x00089111) cam6_zoom_pane

0x7e85,	// (0x0008911f) cam6_mode_pane_g1_ParamLimits

0x7e85,	// (0x0008911f) cam6_mode_pane_g1

0x7e95,	// (0x0008912f) cam6_mode_pane_g2_ParamLimits

0x7e95,	// (0x0008912f) cam6_mode_pane_g2

0x7ea5,	// (0x0008913f) cam6_mode_pane_g3_ParamLimits

0x7ea5,	// (0x0008913f) cam6_mode_pane_g3

0x7eb5,	// (0x0008914f) cam6_mode_pane_g4_ParamLimits

0x7eb5,	// (0x0008914f) cam6_mode_pane_g4

0x0003,

0xfa75,	// (0x00090d0f) cam6_mode_pane_g_ParamLimits

0xfa75,	// (0x00090d0f) cam6_mode_pane_g

0xaece,	// (0x0008c168) bg_tb_trans_pane_cp08_ParamLimits

0xaece,	// (0x0008c168) bg_tb_trans_pane_cp08

0xc538,	// (0x0008d7d2) cam6_battery_pane_ParamLimits

0xc538,	// (0x0008d7d2) cam6_battery_pane

0xc54e,	// (0x0008d7e8) cam6_indi_pane_g1_ParamLimits

0xc54e,	// (0x0008d7e8) cam6_indi_pane_g1

0xc560,	// (0x0008d7fa) cam6_indi_pane_g2_ParamLimits

0xc560,	// (0x0008d7fa) cam6_indi_pane_g2

0xc572,	// (0x0008d80c) cam6_indi_pane_g3_ParamLimits

0xc572,	// (0x0008d80c) cam6_indi_pane_g3

0x0002,

0xfa7e,	// (0x00090d18) cam6_indi_pane_g_ParamLimits

0xfa7e,	// (0x00090d18) cam6_indi_pane_g

0xc584,	// (0x0008d81e) cam6_indi_pane_t1_ParamLimits

0xc584,	// (0x0008d81e) cam6_indi_pane_t1

0x6ba5,	// (0x00087e3f) cam6_autofocus_pane_g1

0x6bad,	// (0x00087e47) cam6_autofocus_pane_g2

0x6bb5,	// (0x00087e4f) cam6_autofocus_pane_g3

0x6bbd,	// (0x00087e57) cam6_autofocus_pane_g4

0x0003,

0xfa85,	// (0x00090d1f) cam6_autofocus_pane_g

0xc5aa,	// (0x0008d844) cam6_timer_pane_g1

0xc5b2,	// (0x0008d84c) cam6_timer_pane_t1

0xc5c0,	// (0x0008d85a) cam6_zoom_cont_pane

0xc5c8,	// (0x0008d862) cam6_zoom_pane_g1

0xc5d1,	// (0x0008d86b) cam6_zoom_pane_g2

0x7ec5,	// (0x0008915f) cam6_zoom_pane_g3

0x0002,

0xfa8e,	// (0x00090d28) cam6_zoom_pane_g

0xdc4c,	// (0x0008eee6) cam6_battery_pane_g1

0xdc4c,	// (0x0008eee6) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00090349) cam6_battery_pane_g

0xc5c8,	// (0x0008d862) cam6_zoom_cont_pane_g1

0xc5d1,	// (0x0008d86b) cam6_zoom_cont_pane_g2

0xc5da,	// (0x0008d874) cam6_zoom_cont_pane_g3

0x0002,

0xfa95,	// (0x00090d2f) cam6_zoom_cont_pane_g

0x7ee3,	// (0x0008917d) cam6_mode_pane_cp_ParamLimits

0x7ee3,	// (0x0008917d) cam6_mode_pane_cp

0x7ef5,	// (0x0008918f) cam6_zoom_pane_cp_ParamLimits

0x7ef5,	// (0x0008918f) cam6_zoom_pane_cp

0x7f03,	// (0x0008919d) vid6_image_uncrop_cif_pane_ParamLimits

0x7f03,	// (0x0008919d) vid6_image_uncrop_cif_pane

0x7f13,	// (0x000891ad) vid6_image_uncrop_nhd_pane_ParamLimits

0x7f13,	// (0x000891ad) vid6_image_uncrop_nhd_pane

0x7f22,	// (0x000891bc) vid6_image_uncrop_vga_pane_ParamLimits

0x7f22,	// (0x000891bc) vid6_image_uncrop_vga_pane

0x7f31,	// (0x000891cb) vid6_image_uncrop_wvga_pane_ParamLimits

0x7f31,	// (0x000891cb) vid6_image_uncrop_wvga_pane

0x7f40,	// (0x000891da) vid6_indi_pane_ParamLimits

0x7f40,	// (0x000891da) vid6_indi_pane

0xaece,	// (0x0008c168) bg_tb_trans_pane_cp09_ParamLimits

0xaece,	// (0x0008c168) bg_tb_trans_pane_cp09

0xc5f2,	// (0x0008d88c) cam6_battery_pane_cp_ParamLimits

0xc5f2,	// (0x0008d88c) cam6_battery_pane_cp

0xc5fe,	// (0x0008d898) vid6_indi_pane_g1_ParamLimits

0xc5fe,	// (0x0008d898) vid6_indi_pane_g1

0xc610,	// (0x0008d8aa) vid6_indi_pane_g2_ParamLimits

0xc610,	// (0x0008d8aa) vid6_indi_pane_g2

0xc622,	// (0x0008d8bc) vid6_indi_pane_g3_ParamLimits

0xc622,	// (0x0008d8bc) vid6_indi_pane_g3

0xc639,	// (0x0008d8d3) vid6_indi_pane_g4_ParamLimits

0xc639,	// (0x0008d8d3) vid6_indi_pane_g4

0xc650,	// (0x0008d8ea) vid6_indi_pane_g5_ParamLimits

0xc650,	// (0x0008d8ea) vid6_indi_pane_g5

0x0004,

0xfa9c,	// (0x00090d36) vid6_indi_pane_g_ParamLimits

0xfa9c,	// (0x00090d36) vid6_indi_pane_g

0xc66a,	// (0x0008d904) vid6_indi_pane_t1_ParamLimits

0xc66a,	// (0x0008d904) vid6_indi_pane_t1

0xc680,	// (0x0008d91a) vid6_indi_pane_t2_ParamLimits

0xc680,	// (0x0008d91a) vid6_indi_pane_t2

0xc6a8,	// (0x0008d942) vid6_indi_pane_t3_ParamLimits

0xc6a8,	// (0x0008d942) vid6_indi_pane_t3

0xc6d0,	// (0x0008d96a) vid6_indi_pane_t4_ParamLimits

0xc6d0,	// (0x0008d96a) vid6_indi_pane_t4

0x0003,

0xfaa7,	// (0x00090d41) vid6_indi_pane_t_ParamLimits

0xfaa7,	// (0x00090d41) vid6_indi_pane_t

0xc6f4,	// (0x0008d98e) wait_bar_pane_cp08

0x7f58,	// (0x000891f2) main_cset_text2_pane_t1_ParamLimits

0x7f58,	// (0x000891f2) main_cset_text2_pane_t1

0x7ece,	// (0x00089168) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ece,	// (0x00089168) listscroll_gen_pane_cp06_t1

0xc242,	// (0x0008d4dc) main_cam6_set_pane

0xd58b,	// (0x0008e825) bg_tb_trans_pane_cp06_ParamLimits

0xb766,	// (0x0008ca00) cam4_indicators_pane_g1_ParamLimits

0xb777,	// (0x0008ca11) cam4_indicators_pane_g2_ParamLimits

0xf81f,	// (0x00090ab9) cam4_indicators_pane_g_ParamLimits

0xb78f,	// (0x0008ca29) cam4_indicators_pane_t1_ParamLimits

0xcf46,	// (0x0008e1e0) bg_tb_trans_pane_cp07_ParamLimits

0xb7bd,	// (0x0008ca57) vid4_indicators_pane_g1_ParamLimits

0xb7d3,	// (0x0008ca6d) vid4_indicators_pane_g2_ParamLimits

0xb7e7,	// (0x0008ca81) vid4_indicators_pane_g3_ParamLimits

0xb7fa,	// (0x0008ca94) vid4_indicators_pane_g4_ParamLimits

0xf831,	// (0x00090acb) vid4_indicators_pane_g_ParamLimits

0xb818,	// (0x0008cab2) vid4_indicators_pane_t1_ParamLimits

0xbe9e,	// (0x0008d138) vid4_progress_pane_g1_ParamLimits

0xbeae,	// (0x0008d148) vid4_progress_pane_g2_ParamLimits

0x7a94,	// (0x00088d2e) vid4_progress_pane_g3_ParamLimits

0xbebe,	// (0x0008d158) vid4_progress_pane_g4_ParamLimits

0xf9d8,	// (0x00090c72) vid4_progress_pane_g_ParamLimits

0x7aa6,	// (0x00088d40) vid4_progress_pane_t1_ParamLimits

0xbedc,	// (0x0008d176) vid4_progress_pane_t2_ParamLimits

0xbef5,	// (0x0008d18f) vid4_progress_pane_t3_ParamLimits

0xf9e3,	// (0x00090c7d) vid4_progress_pane_t_ParamLimits

0x7ac0,	// (0x00088d5a) wait_bar_pane_cp07_ParamLimits

0x7f79,	// (0x00089213) main_cam6_set_pane_g2_ParamLimits

0x7f79,	// (0x00089213) main_cam6_set_pane_g2

0x7f9f,	// (0x00089239) main_cset6_listscroll_pane_ParamLimits

0x7f9f,	// (0x00089239) main_cset6_listscroll_pane

0x7fbd,	// (0x00089257) main_cset6_slider_pane_ParamLimits

0x7fbd,	// (0x00089257) main_cset6_slider_pane

0x7fd3,	// (0x0008926d) main_cset6_text2_pane_ParamLimits

0x7fd3,	// (0x0008926d) main_cset6_text2_pane

0xc703,	// (0x0008d99d) main_cset6_text_pane

0xc70b,	// (0x0008d9a5) main_cset_list_pane_copy1_ParamLimits

0xc70b,	// (0x0008d9a5) main_cset_list_pane_copy1

0xc71b,	// (0x0008d9b5) scroll_pane_cp028_copy1

0x7fe1,	// (0x0008927b) cset_list_set_pane_copy1

0x7ff5,	// (0x0008928f) aid_position_infowindow_above_copy1

0x7ffd,	// (0x00089297) aid_position_infowindow_below_copy1

0x8005,	// (0x0008929f) cset_list_set_pane_g1_copy1

0x0544,	// (0x000817de) cset_list_set_pane_g3_copy1_ParamLimits

0x0544,	// (0x000817de) cset_list_set_pane_g3_copy1

0x0553,	// (0x000817ed) cset_list_set_pane_t1_copy1_ParamLimits

0x0553,	// (0x000817ed) cset_list_set_pane_t1_copy1

0xcf46,	// (0x0008e1e0) list_highlight_pane_cp021_copy1_ParamLimits

0xcf46,	// (0x0008e1e0) list_highlight_pane_cp021_copy1

0xc724,	// (0x0008d9be) cset6_slider_pane_ParamLimits

0xc724,	// (0x0008d9be) cset6_slider_pane

0xc750,	// (0x0008d9ea) main_cset6_slider_pane_g1_ParamLimits

0xc750,	// (0x0008d9ea) main_cset6_slider_pane_g1

0x800d,	// (0x000892a7) main_cset6_slider_pane_g2_ParamLimits

0x800d,	// (0x000892a7) main_cset6_slider_pane_g2

0xc778,	// (0x0008da12) main_cset6_slider_pane_g3_ParamLimits

0xc778,	// (0x0008da12) main_cset6_slider_pane_g3

0x8035,	// (0x000892cf) main_cset6_slider_pane_g4_ParamLimits

0x8035,	// (0x000892cf) main_cset6_slider_pane_g4

0x8041,	// (0x000892db) main_cset6_slider_pane_g5_ParamLimits

0x8041,	// (0x000892db) main_cset6_slider_pane_g5

0xba15,	// (0x0008ccaf) main_cset6_slider_pane_g7_ParamLimits

0xba15,	// (0x0008ccaf) main_cset6_slider_pane_g7

0xba21,	// (0x0008ccbb) main_cset6_slider_pane_g8_ParamLimits

0xba21,	// (0x0008ccbb) main_cset6_slider_pane_g8

0x7226,	// (0x000884c0) main_cset6_slider_pane_g9_ParamLimits

0x7226,	// (0x000884c0) main_cset6_slider_pane_g9

0x7232,	// (0x000884cc) main_cset6_slider_pane_g10_ParamLimits

0x7232,	// (0x000884cc) main_cset6_slider_pane_g10

0x723e,	// (0x000884d8) main_cset6_slider_pane_g11_ParamLimits

0x723e,	// (0x000884d8) main_cset6_slider_pane_g11

0x724a,	// (0x000884e4) main_cset6_slider_pane_g12_ParamLimits

0x724a,	// (0x000884e4) main_cset6_slider_pane_g12

0x7256,	// (0x000884f0) main_cset6_slider_pane_g13_ParamLimits

0x7256,	// (0x000884f0) main_cset6_slider_pane_g13

0x7262,	// (0x000884fc) main_cset6_slider_pane_g14_ParamLimits

0x7262,	// (0x000884fc) main_cset6_slider_pane_g14

0x804f,	// (0x000892e9) main_cset6_slider_pane_g15_ParamLimits

0x804f,	// (0x000892e9) main_cset6_slider_pane_g15

0x7286,	// (0x00088520) main_cset6_slider_pane_g16_ParamLimits

0x7286,	// (0x00088520) main_cset6_slider_pane_g16

0x7294,	// (0x0008852e) main_cset6_slider_pane_g17_ParamLimits

0x7294,	// (0x0008852e) main_cset6_slider_pane_g17

0x0011,

0xfab0,	// (0x00090d4a) main_cset6_slider_pane_g_ParamLimits

0xfab0,	// (0x00090d4a) main_cset6_slider_pane_g

0xc784,	// (0x0008da1e) main_cset6_slider_pane_t1_ParamLimits

0xc784,	// (0x0008da1e) main_cset6_slider_pane_t1

0x807f,	// (0x00089319) main_cset6_slider_pane_t2_ParamLimits

0x807f,	// (0x00089319) main_cset6_slider_pane_t2

0x80aa,	// (0x00089344) main_cset6_slider_pane_t3_ParamLimits

0x80aa,	// (0x00089344) main_cset6_slider_pane_t3

0x80d5,	// (0x0008936f) main_cset6_slider_pane_t4_ParamLimits

0x80d5,	// (0x0008936f) main_cset6_slider_pane_t4

0x8100,	// (0x0008939a) main_cset6_slider_pane_t5_ParamLimits

0x8100,	// (0x0008939a) main_cset6_slider_pane_t5

0xc7c5,	// (0x0008da5f) main_cset6_slider_pane_t7_ParamLimits

0xc7c5,	// (0x0008da5f) main_cset6_slider_pane_t7

0x812d,	// (0x000893c7) main_cset6_slider_pane_t8_ParamLimits

0x812d,	// (0x000893c7) main_cset6_slider_pane_t8

0x8151,	// (0x000893eb) main_cset6_slider_pane_t9_ParamLimits

0x8151,	// (0x000893eb) main_cset6_slider_pane_t9

0x8175,	// (0x0008940f) main_cset6_slider_pane_t10_ParamLimits

0x8175,	// (0x0008940f) main_cset6_slider_pane_t10

0x8199,	// (0x00089433) main_cset6_slider_pane_t11_ParamLimits

0x8199,	// (0x00089433) main_cset6_slider_pane_t11

0xc7fb,	// (0x0008da95) main_cset6_slider_pane_t14_ParamLimits

0xc7fb,	// (0x0008da95) main_cset6_slider_pane_t14

0xc834,	// (0x0008dace) main_cset6_slider_pane_t15_ParamLimits

0xc834,	// (0x0008dace) main_cset6_slider_pane_t15

0x000b,

0xfad5,	// (0x00090d6f) main_cset6_slider_pane_t_ParamLimits

0xfad5,	// (0x00090d6f) main_cset6_slider_pane_t

0xc86d,	// (0x0008db07) cset_slider_pane_g1_copy1

0xc876,	// (0x0008db10) cset_slider_pane_g2_copy1

0xc87f,	// (0x0008db19) cset_slider_pane_g3_copy1

0xc242,	// (0x0008d4dc) bg_popup_sub_pane_cp011_copy1

0xc891,	// (0x0008db2b) main_cset_text_pane_g1_copy1

0xbbc5,	// (0x0008ce5f) main_cset_text_pane_t1_copy1

0xbbd3,	// (0x0008ce6d) main_cset_text_pane_t2_copy1

0xbbe1,	// (0x0008ce7b) main_cset_text_pane_t3_copy1

0xbbef,	// (0x0008ce89) main_cset_text_pane_t4_copy1

0xbbfd,	// (0x0008ce97) main_cset_text_pane_t5_copy1

0xc899,	// (0x0008db33) main_cset_text_pane_t6_copy1

0xc8a7,	// (0x0008db41) main_cset_text_pane_t7_copy1

0x7f58,	// (0x000891f2) main_cset_text2_pane_t1_copy1

0xcf46,	// (0x0008e1e0) main_ncimui_pane

0x4b28,	// (0x00085dc2) popup_query_ncimui_window_ParamLimits

0x4b28,	// (0x00085dc2) popup_query_ncimui_window

0xaef2,	// (0x0008c18c) field_cale_ev2_pane_g4_ParamLimits

0xaef2,	// (0x0008c18c) field_cale_ev2_pane_g4

0x6505,	// (0x0008779f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6505,	// (0x0008779f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7b9,	// (0x00090a53) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7b9,	// (0x00090a53) cell_video_dialer_keypad_pane_g

0x651d,	// (0x000877b7) cell_video_dialer_keypad_pane_t1

0xc242,	// (0x0008d4dc) bg_popup_window_pane_cp012

0x45a2,	// (0x0008583c) heading_pane_cp06

0xc8d3,	// (0x0008db6d) ncim_query_content_pane

0xc242,	// (0x0008d4dc) bg_popup_heading_pane_cp01

0xc8db,	// (0x0008db75) ncim_heading_pane_t1

0xc8e9,	// (0x0008db83) ncim_indicator_popup_pane

0xc8fb,	// (0x0008db95) ncim_query_button_pane

0xc911,	// (0x0008dbab) ncim_query_content_pane_t1

0xc923,	// (0x0008dbbd) ncim_query_content_pane_t2

0x0005,

0xfb19,	// (0x00090db3) ncim_query_content_pane_t

0xc95d,	// (0x0008dbf7) ncim_query_list_pane

0xc96f,	// (0x0008dc09) ncim_query_popup_pane

0xc8e9,	// (0x0008db83) ncim_indicator_popup_pane_ParamLimits

0x82e8,	// (0x00089582) ncim_query_content_pane_g1_ParamLimits

0x82e8,	// (0x00089582) ncim_query_content_pane_g1

0xc911,	// (0x0008dbab) ncim_query_content_pane_t1_ParamLimits

0xc923,	// (0x0008dbbd) ncim_query_content_pane_t2_ParamLimits

0x82f4,	// (0x0008958e) ncim_query_content_pane_t3_ParamLimits

0x82f4,	// (0x0008958e) ncim_query_content_pane_t3

0x831c,	// (0x000895b6) ncim_query_content_pane_t4_ParamLimits

0x831c,	// (0x000895b6) ncim_query_content_pane_t4

0x8344,	// (0x000895de) ncim_query_content_pane_t5_ParamLimits

0x8344,	// (0x000895de) ncim_query_content_pane_t5

0xc935,	// (0x0008dbcf) ncim_query_content_pane_t6_ParamLimits

0xc935,	// (0x0008dbcf) ncim_query_content_pane_t6

0xfb19,	// (0x00090db3) ncim_query_content_pane_t_ParamLimits

0xc95d,	// (0x0008dbf7) ncim_query_list_pane_ParamLimits

0xc96f,	// (0x0008dc09) ncim_query_popup_pane_ParamLimits

0xc983,	// (0x0008dc1d) wait_bar_pane_cp04

0xc242,	// (0x0008d4dc) input_focus_pane_cp011

0xc98b,	// (0x0008dc25) ncim_query_popup_pane_t1

0xc999,	// (0x0008dc33) ncim_list_query_list_pane_ParamLimits

0xc999,	// (0x0008dc33) ncim_list_query_list_pane

0xc242,	// (0x0008d4dc) bg_button_pane_cp027

0xc9ac,	// (0x0008dc46) ncim_query_button_pane_g1

0xc242,	// (0x0008d4dc) list_highlight_pane_cp012

0xc9b6,	// (0x0008dc50) ncim_list_query_list_pane_g1

0xc9be,	// (0x0008dc58) ncim_list_query_list_pane_t1

0xb783,	// (0x0008ca1d) cam4_indicators_pane_g3_ParamLimits

0xb783,	// (0x0008ca1d) cam4_indicators_pane_g3

0xb806,	// (0x0008caa0) vid4_indicators_pane_g5_ParamLimits

0xb806,	// (0x0008caa0) vid4_indicators_pane_g5

0xbecd,	// (0x0008d167) vid4_progress_pane_g5_ParamLimits

0xbecd,	// (0x0008d167) vid4_progress_pane_g5

0x81d3,	// (0x0008946d) main_ncimui_pane_g1

0x823c,	// (0x000894d6) ncimui_group_query_pane_ParamLimits

0x823c,	// (0x000894d6) ncimui_group_query_pane

0x8284,	// (0x0008951e) ncimui_list_pane_ParamLimits

0x8284,	// (0x0008951e) ncimui_list_pane

0x82ab,	// (0x00089545) ncimui_text_pane_ParamLimits

0x82ab,	// (0x00089545) ncimui_text_pane

0x836c,	// (0x00089606) ncimui_text_pane_t1_ParamLimits

0x836c,	// (0x00089606) ncimui_text_pane_t1

0xc9cc,	// (0x0008dc66) ncimui_list_single_graphic_pane_ParamLimits

0xc9cc,	// (0x0008dc66) ncimui_list_single_graphic_pane

0x838a,	// (0x00089624) ncimui_query_pane_ParamLimits

0x838a,	// (0x00089624) ncimui_query_pane

0xc242,	// (0x0008d4dc) list_highlight_pane_cp013

0xc9dc,	// (0x0008dc76) ncim_list_query_list_pane_t1_copy1

0xc9b6,	// (0x0008dc50) ncim_list_single_graphic_pane_g1

0x839d,	// (0x00089637) ncim_query_button_pane_cp01

0x83a9,	// (0x00089643) ncim_query_entry_pane_ParamLimits

0x83a9,	// (0x00089643) ncim_query_entry_pane

0x83bc,	// (0x00089656) ncimui_query_pane_g1

0x83c8,	// (0x00089662) ncimui_query_pane_t1_ParamLimits

0x83c8,	// (0x00089662) ncimui_query_pane_t1

0xcf46,	// (0x0008e1e0) input_focus_pane_cp012

0xc9ea,	// (0x0008dc84) ncim_query_entry_pane_t1

0xdcaa,	// (0x0008ef44) main_im_pane_ParamLimits

0xcf46,	// (0x0008e1e0) main_mobtv_pane_ParamLimits

0xcf46,	// (0x0008e1e0) main_mobtv_pane

0x8067,	// (0x00089301) main_cset6_slider_pane_g18_ParamLimits

0x8067,	// (0x00089301) main_cset6_slider_pane_g18

0x8073,	// (0x0008930d) main_cset6_slider_pane_g19_ParamLimits

0x8073,	// (0x0008930d) main_cset6_slider_pane_g19

0xd5a7,	// (0x0008e841) bg_main_mobtv_pane_ParamLimits

0xd5a7,	// (0x0008e841) bg_main_mobtv_pane

0x83e1,	// (0x0008967b) main_mobtv_info_pane

0x83ec,	// (0x00089686) main_mobtv_loading_pane_ParamLimits

0x83ec,	// (0x00089686) main_mobtv_loading_pane

0xc9fc,	// (0x0008dc96) main_mobtv_pg_channel_list_pane

0xca06,	// (0x0008dca0) main_mobtv_pg_hdr_pane

0x83f9,	// (0x00089693) main_mobtv_programe_curr_pane_ParamLimits

0x83f9,	// (0x00089693) main_mobtv_programe_curr_pane

0x8406,	// (0x000896a0) main_mobtv_programe_next_pane_ParamLimits

0x8406,	// (0x000896a0) main_mobtv_programe_next_pane

0xca0f,	// (0x0008dca9) popup_mobtv_noti_window

0xdc4c,	// (0x0008eee6) main_tv_pg_hdr_pane_g1

0xca19,	// (0x0008dcb3) main_tv_pg_hdr_pane_g2

0xca21,	// (0x0008dcbb) main_tv_pg_hdr_pane_g3

0xca29,	// (0x0008dcc3) main_tv_pg_hdr_pane_g4

0xca31,	// (0x0008dccb) main_tv_pg_hdr_pane_g5

0xca3b,	// (0x0008dcd5) main_tv_pg_hdr_pane_g6

0xca45,	// (0x0008dcdf) main_tv_pg_hdr_pane_g7

0xca4f,	// (0x0008dce9) main_tv_pg_hdr_pane_g8

0xca59,	// (0x0008dcf3) main_tv_pg_hdr_pane_g9

0xca63,	// (0x0008dcfd) main_tv_pg_hdr_pane_g10

0xca6d,	// (0x0008dd07) main_tv_pg_hdr_pane_g11

0x000a,

0xfb26,	// (0x00090dc0) main_tv_pg_hdr_pane_g

0xca77,	// (0x0008dd11) main_tv_pg_hdr_pane_t1

0xca85,	// (0x0008dd1f) main_tv_pg_hdr_pane_t2

0xca93,	// (0x0008dd2d) main_tv_pg_hdr_pane_t3

0xcaa3,	// (0x0008dd3d) main_tv_pg_hdr_pane_t4

0xcab3,	// (0x0008dd4d) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3d,	// (0x00090dd7) main_tv_pg_hdr_pane_t

0xcac3,	// (0x0008dd5d) single_mobtv_pg_channel_pane_ParamLimits

0xcac3,	// (0x0008dd5d) single_mobtv_pg_channel_pane

0xcad5,	// (0x0008dd6f) single_mobtv_pg_channel_table_pane

0xcade,	// (0x0008dd78) single_mobtv_pg_channel_thumb_pane

0xcae7,	// (0x0008dd81) single_tv_pg_channel_pane_g1

0xcaf0,	// (0x0008dd8a) single_tv_pg_channel_pane_g2

0x0001,

0xfb48,	// (0x00090de2) single_tv_pg_channel_pane_g

0xd58b,	// (0x0008e825) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd58b,	// (0x0008e825) bg_single_mobtv_pg_channel_thumb_pane

0xcaf9,	// (0x0008dd93) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xcaf9,	// (0x0008dd93) single_mobtv_pg_channel_thumb_pane_g1

0xcb07,	// (0x0008dda1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xcb07,	// (0x0008dda1) single_mobtv_pg_channel_thumb_pane_g2

0xcb13,	// (0x0008ddad) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xcb13,	// (0x0008ddad) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4d,	// (0x00090de7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4d,	// (0x00090de7) single_mobtv_pg_channel_thumb_pane_g

0xcb1f,	// (0x0008ddb9) single_mobtv_pg_channel_thumb_pane_t1

0xcb2d,	// (0x0008ddc7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb54,	// (0x00090dee) single_mobtv_pg_channel_thumb_pane_t

0xdc4c,	// (0x0008eee6) bg_single_mobtv_pg_channel_table_pane_g1

0xdc4c,	// (0x0008eee6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00090349) bg_single_mobtv_pg_channel_table_pane_g

0xcb3b,	// (0x0008ddd5) single_mobtv_pg_channel_table_pane_t1

0xcb49,	// (0x0008dde3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb59,	// (0x00090df3) single_mobtv_pg_channel_table_pane_t

0x841b,	// (0x000896b5) main_mobtv_info_pane_g1_ParamLimits

0x841b,	// (0x000896b5) main_mobtv_info_pane_g1

0x8439,	// (0x000896d3) main_mobtv_info_pane_t1_ParamLimits

0x8439,	// (0x000896d3) main_mobtv_info_pane_t1

0x84b1,	// (0x0008974b) main_mobtv_info_pane_t2_ParamLimits

0x84b1,	// (0x0008974b) main_mobtv_info_pane_t2

0x0002,

0xfb63,	// (0x00090dfd) main_mobtv_info_pane_t_ParamLimits

0xfb63,	// (0x00090dfd) main_mobtv_info_pane_t

0x8542,	// (0x000897dc) wait_bar_pane_cp05

0x8554,	// (0x000897ee) main_mobtv_loading_pane_g1_ParamLimits

0x8554,	// (0x000897ee) main_mobtv_loading_pane_g1

0x8565,	// (0x000897ff) main_mobtv_loading_pane_g2_ParamLimits

0x8565,	// (0x000897ff) main_mobtv_loading_pane_g2

0x8571,	// (0x0008980b) main_mobtv_loading_pane_g3_ParamLimits

0x8571,	// (0x0008980b) main_mobtv_loading_pane_g3

0x0002,

0xfb6a,	// (0x00090e04) main_mobtv_loading_pane_g_ParamLimits

0xfb6a,	// (0x00090e04) main_mobtv_loading_pane_g

0xcb57,	// (0x0008ddf1) main_mobtv_loading_pane_t1_ParamLimits

0xcb57,	// (0x0008ddf1) main_mobtv_loading_pane_t1

0xcb6f,	// (0x0008de09) main_mobtv_loading_pane_t2_ParamLimits

0xcb6f,	// (0x0008de09) main_mobtv_loading_pane_t2

0x0001,

0xfb71,	// (0x00090e0b) main_mobtv_loading_pane_t_ParamLimits

0xfb71,	// (0x00090e0b) main_mobtv_loading_pane_t

0x8584,	// (0x0008981e) wait_bar_pane_cp06_ParamLimits

0x8584,	// (0x0008981e) wait_bar_pane_cp06

0xcb93,	// (0x0008de2d) main_mobtv_programe_curr_pane_t1

0xcba1,	// (0x0008de3b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb76,	// (0x00090e10) main_mobtv_programe_curr_pane_t

0xcbaf,	// (0x0008de49) main_mobtv_programe_next_pane_t1

0xcbbd,	// (0x0008de57) main_mobtv_programe_next_pane_t2

0xcbcb,	// (0x0008de65) main_mobtv_programe_next_pane_t3

0x0002,

0xfb7b,	// (0x00090e15) main_mobtv_programe_next_pane_t

0xc242,	// (0x0008d4dc) bg_popup_mobtv_noti_window_pane

0xcbd9,	// (0x0008de73) popup_mobtv_noti_window_g1

0xcbe1,	// (0x0008de7b) popup_mobtv_noti_window_t1

0xcbef,	// (0x0008de89) popup_mobtv_noti_window_t2

0x0001,

0xfb82,	// (0x00090e1c) popup_mobtv_noti_window_t

0xdc4c,	// (0x0008eee6) bg_popup_mobtv_noti_window_pane_g1

0xc242,	// (0x0008d4dc) sc_clock_pane

0xc242,	// (0x0008d4dc) main_fs_bigclock_pane

0x7cc6,	// (0x00088f60) blid2_tripm_pane_t4_ParamLimits

0x7cc6,	// (0x00088f60) blid2_tripm_pane_t4

0xd58b,	// (0x0008e825) sc_clock_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) sc_clock_pane_g1

0xdc56,	// (0x0008eef0) sc_clock_pane_t1_ParamLimits

0xdc56,	// (0x0008eef0) sc_clock_pane_t1

0xdc56,	// (0x0008eef0) sc_clock_pane_t2_ParamLimits

0xdc56,	// (0x0008eef0) sc_clock_pane_t2

0xdc56,	// (0x0008eef0) sc_clock_pane_t3_ParamLimits

0xdc56,	// (0x0008eef0) sc_clock_pane_t3

0x0004,

0xfb87,	// (0x00090e21) sc_clock_pane_t_ParamLimits

0xfb87,	// (0x00090e21) sc_clock_pane_t

0x9028,	// (0x0008a2c2) main_fs_bigclock_indicator_pane_ParamLimits

0x9028,	// (0x0008a2c2) main_fs_bigclock_indicator_pane

0x8604,	// (0x0008989e) main_fs_bigclock_pane_g1_ParamLimits

0x8604,	// (0x0008989e) main_fs_bigclock_pane_g1

0x9034,	// (0x0008a2ce) main_fs_bigclock_pane_t1_ParamLimits

0x9034,	// (0x0008a2ce) main_fs_bigclock_pane_t1

0x9046,	// (0x0008a2e0) main_fs_bigclock_pane_t2_ParamLimits

0x9046,	// (0x0008a2e0) main_fs_bigclock_pane_t2

0x905a,	// (0x0008a2f4) main_fs_bigclock_pane_t3_ParamLimits

0x905a,	// (0x0008a2f4) main_fs_bigclock_pane_t3

0x0002,

0xfd18,	// (0x00090fb2) main_fs_bigclock_pane_t_ParamLimits

0xfd18,	// (0x00090fb2) main_fs_bigclock_pane_t

0xd95f,	// (0x0008ebf9) main_fs_bigclock_indicator_pane_g1

0xc903,	// (0x0008db9d) ncim_query_content_pane_g2_ParamLimits

0xc903,	// (0x0008db9d) ncim_query_content_pane_g2

0x0001,

0xfb14,	// (0x00090dae) ncim_query_content_pane_g_ParamLimits

0xfb14,	// (0x00090dae) ncim_query_content_pane_g

0xdc56,	// (0x0008eef0) sc_clock_pane_t4_ParamLimits

0xdc56,	// (0x0008eef0) sc_clock_pane_t4

0xcf46,	// (0x0008e1e0) main_radioblah_pane

0xb6e4,	// (0x0008c97e) cell_call4_button_pane_t1_copy1_ParamLimits

0xb6e4,	// (0x0008c97e) cell_call4_button_pane_t1_copy1

0x81eb,	// (0x00089485) main_ncimui_pane_t1_ParamLimits

0x81eb,	// (0x00089485) main_ncimui_pane_t1

0x8205,	// (0x0008949f) main_ncimui_pane_t2_ParamLimits

0x8205,	// (0x0008949f) main_ncimui_pane_t2

0x0002,

0xfb0d,	// (0x00090da7) main_ncimui_pane_t_ParamLimits

0xfb0d,	// (0x00090da7) main_ncimui_pane_t

0xee4a,	// (0x000900e4) main_radioblah_anim_pane_ParamLimits

0xee4a,	// (0x000900e4) main_radioblah_anim_pane

0xee4a,	// (0x000900e4) main_radioblah_info_pane_ParamLimits

0xee4a,	// (0x000900e4) main_radioblah_info_pane

0xee36,	// (0x000900d0) main_radioblah_pane_t1_ParamLimits

0xee36,	// (0x000900d0) main_radioblah_pane_t1

0xee36,	// (0x000900d0) main_radioblah_pane_t2_ParamLimits

0xee36,	// (0x000900d0) main_radioblah_pane_t2

0x0003,

0xfba8,	// (0x00090e42) main_radioblah_pane_t_ParamLimits

0xfba8,	// (0x00090e42) main_radioblah_pane_t

0xcf46,	// (0x0008e1e0) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcf46,	// (0x0008e1e0) main_radioblah_rocker_ctrl_pane

0xaeba,	// (0x0008c154) main_radioblah_info_pane_t1_ParamLimits

0xaeba,	// (0x0008c154) main_radioblah_info_pane_t1

0xcc2d,	// (0x0008dec7) main_radioblah_info_pane_t2_ParamLimits

0xcc2d,	// (0x0008dec7) main_radioblah_info_pane_t2

0x0003,

0xfbb1,	// (0x00090e4b) main_radioblah_info_pane_t_ParamLimits

0xfbb1,	// (0x00090e4b) main_radioblah_info_pane_t

0xdc4c,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g1

0xdc4c,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g2

0xdc4c,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g3

0xdc4c,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g4

0xdc4c,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g5

0xdc4c,	// (0x0008eee6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbba,	// (0x00090e54) main_radioblah_rocker_ctrl_pane_g

0x7f58,	// (0x000891f2) main_cset_text2_pane_t1_copy1_ParamLimits

0xb754,	// (0x0008c9ee) cam4_image_uncrop_qvga_pane

0xb7a9,	// (0x0008ca43) vid4_image_uncrop_qcif_pane

0xbf23,	// (0x0008d1bd) cam6_image_uncrop_qvga_pane_ParamLimits

0xbf23,	// (0x0008d1bd) cam6_image_uncrop_qvga_pane

0xc5e2,	// (0x0008d87c) vid6_image_uncrop_qcif_pane_ParamLimits

0xc5e2,	// (0x0008d87c) vid6_image_uncrop_qcif_pane

0xc242,	// (0x0008d4dc) bg_popup_preview_window_pane_cp03

0xc8b5,	// (0x0008db4f) list_cset_text2_pane

0xc8bd,	// (0x0008db57) main_cset6_text2_pane_g1

0xc8c5,	// (0x0008db5f) main_cset6_text2_pane_t1

0xd5dd,	// (0x0008e877) list_cset_text2_pane_t1_ParamLimits

0xd5dd,	// (0x0008e877) list_cset_text2_pane_t1

0xcf46,	// (0x0008e1e0) main_radioblah_pane_ParamLimits

0x852e,	// (0x000897c8) main_mobtv_info_pane_t3_ParamLimits

0x852e,	// (0x000897c8) main_mobtv_info_pane_t3

0xee28,	// (0x000900c2) main_radioblah_pane_g1

0xcbfd,	// (0x0008de97) main_radioblah_info_pane_g1

0xdc6a,	// (0x0008ef04) main_radioblah_info_pane_t3_ParamLimits

0xdc6a,	// (0x0008ef04) main_radioblah_info_pane_t3

0x27ad,	// (0x00083a47) highlight_cell_cale_month_pane_ParamLimits

0x27ad,	// (0x00083a47) highlight_cell_cale_month_pane

0xc242,	// (0x0008d4dc) main_phob_fisheye_pane

0xaf42,	// (0x0008c1dc) scroll_pane_cp0031_ParamLimits

0xaf42,	// (0x0008c1dc) scroll_pane_cp0031

0xc6f4,	// (0x0008d98e) wait_bar_pane_cp08_ParamLimits

0x7fe1,	// (0x0008927b) cset_list_set_pane_copy1_ParamLimits

0xcc7c,	// (0x0008df16) highlight_cell_cale_month_pane_g1

0x879b,	// (0x00089a35) highlight_cell_cale_month_pane_t1

0xbe8d,	// (0x0008d127) list_gen_pane_cp01

0xba00,	// (0x0008cc9a) scroll_pane_01

0x87a9,	// (0x00089a43) list_single_double_fisheye_pane

0x0585,	// (0x0008181f) list_double_fisheye_pane_g1_ParamLimits

0x0585,	// (0x0008181f) list_double_fisheye_pane_g1

0x0591,	// (0x0008182b) list_double_fisheye_pane_g2_ParamLimits

0x0591,	// (0x0008182b) list_double_fisheye_pane_g2

0x87b2,	// (0x00089a4c) list_double_fisheye_pane_g3_ParamLimits

0x87b2,	// (0x00089a4c) list_double_fisheye_pane_g3

0x0004,

0xfbc7,	// (0x00090e61) list_double_fisheye_pane_g_ParamLimits

0xfbc7,	// (0x00090e61) list_double_fisheye_pane_g

0x05c2,	// (0x0008185c) list_double_fisheye_pane_t1_ParamLimits

0x05c2,	// (0x0008185c) list_double_fisheye_pane_t1

0x05dd,	// (0x00081877) list_double_fisheye_pane_t2_ParamLimits

0x05dd,	// (0x00081877) list_double_fisheye_pane_t2

0x0001,

0xfbd2,	// (0x00090e6c) list_double_fisheye_pane_t_ParamLimits

0xfbd2,	// (0x00090e6c) list_double_fisheye_pane_t

0xc242,	// (0x0008d4dc) main_call5_pane

0xcf46,	// (0x0008e1e0) sc_swipe_pane_ParamLimits

0xcf46,	// (0x0008e1e0) sc_swipe_pane

0x87d1,	// (0x00089a6b) call5_image_pane_ParamLimits

0x87d1,	// (0x00089a6b) call5_image_pane

0x87ee,	// (0x00089a88) call5_swipe_1_pane_ParamLimits

0x87ee,	// (0x00089a88) call5_swipe_1_pane

0x8801,	// (0x00089a9b) call5_swipe_2_pane_ParamLimits

0x8801,	// (0x00089a9b) call5_swipe_2_pane

0x882c,	// (0x00089ac6) popup_call5_audio_first_window_ParamLimits

0x882c,	// (0x00089ac6) popup_call5_audio_first_window

0xd58b,	// (0x0008e825) call5_swipe_1_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) call5_swipe_1_pane_g1

0xcc84,	// (0x0008df1e) call5_swipe_1_pane_g2_ParamLimits

0xcc84,	// (0x0008df1e) call5_swipe_1_pane_g2

0x0001,

0xfbd7,	// (0x00090e71) call5_swipe_1_pane_g_ParamLimits

0xfbd7,	// (0x00090e71) call5_swipe_1_pane_g

0xcc90,	// (0x0008df2a) call5_swipe_1_pane_t1_ParamLimits

0xcc90,	// (0x0008df2a) call5_swipe_1_pane_t1

0xd58b,	// (0x0008e825) call5_swipe_2_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) call5_swipe_2_pane_g1

0xcca5,	// (0x0008df3f) call5_swipe_2_pane_g2_ParamLimits

0xcca5,	// (0x0008df3f) call5_swipe_2_pane_g2

0x0001,

0xfbdc,	// (0x00090e76) call5_swipe_2_pane_g_ParamLimits

0xfbdc,	// (0x00090e76) call5_swipe_2_pane_g

0xccb1,	// (0x0008df4b) call5_swipe_2_pane_t1_ParamLimits

0xccb1,	// (0x0008df4b) call5_swipe_2_pane_t1

0xd58b,	// (0x0008e825) sc_swipe_pane_g1_ParamLimits

0xd58b,	// (0x0008e825) sc_swipe_pane_g1

0xd599,	// (0x0008e833) sc_swipe_pane_g2_ParamLimits

0xd599,	// (0x0008e833) sc_swipe_pane_g2

0x0001,

0xf755,	// (0x000909ef) sc_swipe_pane_g_ParamLimits

0xf755,	// (0x000909ef) sc_swipe_pane_g

0xdc56,	// (0x0008eef0) sc_swipe_pane_t1_ParamLimits

0xdc56,	// (0x0008eef0) sc_swipe_pane_t1

0xc242,	// (0x0008d4dc) main_cmail_launcher_pane

0x8841,	// (0x00089adb) aid_size_cell_cmail_l_ParamLimits

0x8841,	// (0x00089adb) aid_size_cell_cmail_l

0x8856,	// (0x00089af0) grid_cmail_l_pane_ParamLimits

0x8856,	// (0x00089af0) grid_cmail_l_pane

0x8870,	// (0x00089b0a) cell_cmail_l_pane_ParamLimits

0x8870,	// (0x00089b0a) cell_cmail_l_pane

0x8891,	// (0x00089b2b) cell_cmail_l_pane_g1_ParamLimits

0x8891,	// (0x00089b2b) cell_cmail_l_pane_g1

0x889d,	// (0x00089b37) cell_cmail_l_pane_t1_ParamLimits

0x889d,	// (0x00089b37) cell_cmail_l_pane_t1

0x88b3,	// (0x00089b4d) cell_cmail_l_pane_t2_ParamLimits

0x88b3,	// (0x00089b4d) cell_cmail_l_pane_t2

0x0001,

0xfbe1,	// (0x00090e7b) cell_cmail_l_pane_t_ParamLimits

0xfbe1,	// (0x00090e7b) cell_cmail_l_pane_t

0xcf46,	// (0x0008e1e0) grid_highlight_pane_cp018_ParamLimits

0xcf46,	// (0x0008e1e0) grid_highlight_pane_cp018

0x0b35,	// (0x00081dcf) main2_pane_ParamLimits

0x0b35,	// (0x00081dcf) main2_pane

0xdd39,	// (0x0008efd3) popup_sp_fs_action_menu_bg_pane_g1

0xdd41,	// (0x0008efdb) popup_sp_fs_action_menu_bg_pane_g2

0xdd49,	// (0x0008efe3) popup_sp_fs_action_menu_bg_pane_g3

0xdd51,	// (0x0008efeb) popup_sp_fs_action_menu_bg_pane_g4

0xdd59,	// (0x0008eff3) popup_sp_fs_action_menu_bg_pane_g5

0xdd61,	// (0x0008effb) popup_sp_fs_action_menu_bg_pane_g6

0xdd69,	// (0x0008f003) popup_sp_fs_action_menu_bg_pane_g7

0xdd71,	// (0x0008f00b) popup_sp_fs_action_menu_bg_pane_g8

0xdd79,	// (0x0008f013) popup_sp_fs_action_menu_bg_pane_g9

0xdd81,	// (0x0008f01b) popup_sp_fs_action_menu_bg_pane_g10

0xdd81,	// (0x0008f01b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x0009039a) popup_sp_fs_action_menu_bg_pane_g

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g3_g1

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g3_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g3_g2

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g3_g3_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00090448) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00090448) list_medium_line_x2_t3_g3_g

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g3_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g3_t1

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g3_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g3_t2

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g3_t3_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x0009044f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x0009044f) list_medium_line_x2_t3_g3_t

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g2_g1

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g2_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00090456) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00090456) list_medium_line_x2_t3_g2_g

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g2_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g2_t1

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g2_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g2_t2

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g2_t3_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x0009044f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x0009044f) list_medium_line_x2_t3_g2_t

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g4_g1

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g4_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g4_g2

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g4_g3_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g4_g3

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g4_g4_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x0009045b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x0009045b) list_medium_line_x2_t4_g4_g

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g4_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g4_t1

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g4_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g4_t2

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g4_t3_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g4_t3

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g4_t4_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00090464) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00090464) list_medium_line_x2_t4_g4_t

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g4_g1

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g4_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g4_g2

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g4_g3_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g4_g3

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g4_g4_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x0009045b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x0009045b) list_medium_line_x2_t2_g4_g

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g4_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g4_t1

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g4_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x0009042b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x0009042b) list_medium_line_x2_t2_g4_t

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g3_g1

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g3_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g3_g2

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g3_g3_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00090448) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00090448) list_medium_line_x2_t2_g3_g

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g3_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g3_t1

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g3_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x0009042b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x0009042b) list_medium_line_x2_t2_g3_t

0x2904,	// (0x00083b9e) main_sp_fs_list_pane_ParamLimits

0x2904,	// (0x00083b9e) main_sp_fs_list_pane

0xc333,	// (0x0008d5cd) sp_fs_scroll_pane_ParamLimits

0xc333,	// (0x0008d5cd) sp_fs_scroll_pane

0xe9a8,	// (0x0008fc42) list_medium_line_x2_t3_t1

0xe9a8,	// (0x0008fc42) list_medium_line_x2_t3_t2

0xe9a8,	// (0x0008fc42) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x00090511) list_medium_line_x2_t3_t

0xe9a8,	// (0x0008fc42) list_medium_line_x3_t4_t1

0xe9a8,	// (0x0008fc42) list_medium_line_x3_t4_t2

0xe9a8,	// (0x0008fc42) list_medium_line_x3_t4_t3

0xe9a8,	// (0x0008fc42) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x00090518) list_medium_line_x3_t4_t

0xe9a8,	// (0x0008fc42) list_medium_line_x4_t5_t1

0xe9a8,	// (0x0008fc42) list_medium_line_x4_t5_t2

0xe9a8,	// (0x0008fc42) list_medium_line_x4_t5_t3

0xe9a8,	// (0x0008fc42) list_medium_line_x4_t5_t4

0xe9a8,	// (0x0008fc42) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x00090521) list_medium_line_x4_t5_t

0xd58b,	// (0x0008e825) list_medium_line_t4_g4_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t4_g4_g1

0xd58b,	// (0x0008e825) list_medium_line_t4_g4_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t4_g4_g2

0xd58b,	// (0x0008e825) list_medium_line_t4_g4_g3_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t4_g4_g3

0xd58b,	// (0x0008e825) list_medium_line_t4_g4_g4_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x0009045b) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x0009045b) list_medium_line_t4_g4_g

0xdc56,	// (0x0008eef0) list_medium_line_t4_g4_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t4_g4_t1

0xdc56,	// (0x0008eef0) list_medium_line_t4_g4_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t4_g4_t2

0xdc56,	// (0x0008eef0) list_medium_line_t4_g4_t3_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t4_g4_t3

0xdc56,	// (0x0008eef0) list_medium_line_t4_g4_t4_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00090464) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00090464) list_medium_line_t4_g4_t

0x29b2,	// (0x00083c4c) chi_dic_find_pane_g1

0x48ae,	// (0x00085b48) main_tport_pane

0xe9a8,	// (0x0008fc42) list_medium_line_plain_t1

0xd58b,	// (0x0008e825) list_medium_line_t2_g2_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t2_g2_g1

0xd58b,	// (0x0008e825) list_medium_line_t2_g2_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00090456) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00090456) list_medium_line_t2_g2_g

0xdc56,	// (0x0008eef0) list_medium_line_t2_g2_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t2_g2_t1

0xdc56,	// (0x0008eef0) list_medium_line_t2_g2_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x0009042b) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x0009042b) list_medium_line_t2_g2_t

0xbf0a,	// (0x0008d1a4) aid_sp_fs_list_icon_a_sm

0xbf12,	// (0x0008d1ac) aid_sp_fs_list_icon_d

0xc34b,	// (0x0008d5e5) aid_sp_fs_text_primary

0xbf1a,	// (0x0008d1b4) aid_sp_fs_text_secondary

0xc242,	// (0x0008d4dc) list_medium_line

0xc242,	// (0x0008d4dc) list_medium_line_g2

0xc242,	// (0x0008d4dc) list_medium_line_g3

0xc242,	// (0x0008d4dc) list_medium_line_plain

0xc242,	// (0x0008d4dc) list_medium_line_plain_t2

0xc242,	// (0x0008d4dc) list_medium_line_plain_t3

0xc242,	// (0x0008d4dc) list_medium_line_right_icon

0xc242,	// (0x0008d4dc) list_medium_line_right_iconx2

0xc242,	// (0x0008d4dc) list_medium_line_t2

0xc242,	// (0x0008d4dc) list_medium_line_t2_g2

0xc242,	// (0x0008d4dc) list_medium_line_t2_g3

0xc242,	// (0x0008d4dc) list_medium_line_t2_right_icon

0xc242,	// (0x0008d4dc) list_medium_line_t2_right_iconx2

0xc242,	// (0x0008d4dc) list_medium_line_t3

0xc242,	// (0x0008d4dc) list_medium_line_t3_g2

0xc242,	// (0x0008d4dc) list_medium_line_t3_g3

0xc242,	// (0x0008d4dc) list_medium_line_t3_right_iconx2

0xc242,	// (0x0008d4dc) list_medium_line_t4_g4

0xc242,	// (0x0008d4dc) list_medium_line_x2

0xc242,	// (0x0008d4dc) list_medium_line_x2_t2_g2

0xc242,	// (0x0008d4dc) list_medium_line_x2_t2_g3

0xc242,	// (0x0008d4dc) list_medium_line_x2_t2_g4

0xc242,	// (0x0008d4dc) list_medium_line_x2_t3

0xc242,	// (0x0008d4dc) list_medium_line_x2_t3_g2

0xc242,	// (0x0008d4dc) list_medium_line_x2_t3_g3

0xc242,	// (0x0008d4dc) list_medium_line_x2_t3_g4

0xc242,	// (0x0008d4dc) list_medium_line_x2_t4_g2

0xc242,	// (0x0008d4dc) list_medium_line_x2_t4_g4

0xc242,	// (0x0008d4dc) list_medium_line_x3

0xc242,	// (0x0008d4dc) list_medium_line_x3_t4

0xc242,	// (0x0008d4dc) list_medium_line_x3_t4_g4

0xc242,	// (0x0008d4dc) list_medium_line_x4_t4

0xc242,	// (0x0008d4dc) list_medium_line_x4_t4_g7

0xc242,	// (0x0008d4dc) list_medium_line_x4_t5

0x0530,	// (0x000817ca) list_single_fs_dyc_pane_ParamLimits

0x0530,	// (0x000817ca) list_single_fs_dyc_pane

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g1

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g2

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g3

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g4

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g5

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x4_t4_g7_g6

0xd599,	// (0x0008e833) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd599,	// (0x0008e833) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaee,	// (0x00090d88) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaee,	// (0x00090d88) list_medium_line_x4_t4_g7_g

0xdc56,	// (0x0008eef0) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x4_t4_g7_t1

0xdc56,	// (0x0008eef0) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x4_t4_g7_t2

0xdc56,	// (0x0008eef0) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x4_t4_g7_t3

0xdc6a,	// (0x0008ef04) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc6a,	// (0x0008ef04) list_medium_line_x4_t4_g7_t4

0xdc6a,	// (0x0008ef04) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc6a,	// (0x0008ef04) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafd,	// (0x00090d97) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafd,	// (0x00090d97) list_medium_line_x4_t4_g7_t

0x0568,	// (0x00081802) list_single_dyc_row_pane_ParamLimits

0x0568,	// (0x00081802) list_single_dyc_row_pane

0x87be,	// (0x00089a58) call5_gesture_pane_ParamLimits

0x87be,	// (0x00089a58) call5_gesture_pane

0x8814,	// (0x00089aae) call5_windows_pane_ParamLimits

0x8814,	// (0x00089aae) call5_windows_pane

0x88d0,	// (0x00089b6a) call5_swipe_1_pane_cp_ParamLimits

0x88d0,	// (0x00089b6a) call5_swipe_1_pane_cp

0x88dc,	// (0x00089b76) call5_swipe_2_pane_cp_ParamLimits

0x88dc,	// (0x00089b76) call5_swipe_2_pane_cp

0xde48,	// (0x0008f0e2) call5_image_pane_cp

0x88e8,	// (0x00089b82) popup_call5_audio_first_window_cp_ParamLimits

0x88e8,	// (0x00089b82) popup_call5_audio_first_window_cp

0xccc6,	// (0x0008df60) call5_swipe_1_pane_g1_cp_ParamLimits

0xccc6,	// (0x0008df60) call5_swipe_1_pane_g1_cp

0xccd3,	// (0x0008df6d) call5_swipe_1_pane_g2_cp

0xccdb,	// (0x0008df75) call5_swipe_1_pane_t1_cp_ParamLimits

0xccdb,	// (0x0008df75) call5_swipe_1_pane_t1_cp

0xccc6,	// (0x0008df60) call5_swipe_2_pane_g1_cp_ParamLimits

0xccc6,	// (0x0008df60) call5_swipe_2_pane_g1_cp

0xccf0,	// (0x0008df8a) call5_swipe_2_pane_g2_cp

0xccf8,	// (0x0008df92) call5_swipe_2_pane_t1_cp_ParamLimits

0xccf8,	// (0x0008df92) call5_swipe_2_pane_t1_cp

0xcf46,	// (0x0008e1e0) main_sp_fs_email_pane

0xbae3,	// (0x0008cd7d) main_sp_fs_listscroll_pane_te

0x88f6,	// (0x00089b90) popup_sp_fs_action_menu_pane_ParamLimits

0x88f6,	// (0x00089b90) popup_sp_fs_action_menu_pane

0xdc4c,	// (0x0008eee6) bg_sp_fs_ctrlbar_pane_g1

0xcd0d,	// (0x0008dfa7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd16,	// (0x0008dfb0) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcd1f,	// (0x0008dfb9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xdc4c,	// (0x0008eee6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe6,	// (0x00090e80) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4e7e,	// (0x00086118) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4e7e,	// (0x00086118) bg_sp_fs_ctrlbar_ddmenu_pane

0xcd28,	// (0x0008dfc2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xcd28,	// (0x0008dfc2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd34,	// (0x0008dfce) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xcd34,	// (0x0008dfce) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbef,	// (0x00090e89) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbef,	// (0x00090e89) main_sp_fs_ctrlbar_ddmenu_pane_g

0xcd40,	// (0x0008dfda) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xcd40,	// (0x0008dfda) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xdc4c,	// (0x0008eee6) list_medium_line_t2_right_icon_g1

0xe9a8,	// (0x0008fc42) list_medium_line_t2_right_icon_t1

0xe9a8,	// (0x0008fc42) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf4,	// (0x00090e8e) list_medium_line_t2_right_icon_t

0xee4a,	// (0x000900e4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xee4a,	// (0x000900e4) bg_sp_fs_ctrlbar_pane

0x8989,	// (0x00089c23) main_sp_fs_ctrlbar_button_pane_cp01

0x8993,	// (0x00089c2d) main_sp_fs_ctrlbar_ddmenu_pane

0xcd94,	// (0x0008e02e) main_sp_fs_ctrlbar_pane_g1

0xcda0,	// (0x0008e03a) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbf9,	// (0x00090e93) main_sp_fs_ctrlbar_pane_g

0x89d1,	// (0x00089c6b) main_sp_fs_ctrlbar_pane_t1

0x8a10,	// (0x00089caa) main_sp_fs_ctrlbar_pane

0x8a34,	// (0x00089cce) main_sp_fs_listscroll_pane_te_cp01

0x05ff,	// (0x00081899) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x05ff,	// (0x00081899) popup_sp_fs_action_menu_pane_cp01

0xcf46,	// (0x0008e1e0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcf46,	// (0x0008e1e0) bg_sp_fs_highlight_list_pane_cp01

0xbf31,	// (0x0008d1cb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xbf31,	// (0x0008d1cb) sp_fs_action_menu_list_gene_pane_g1

0xcdc7,	// (0x0008e061) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcdc7,	// (0x0008e061) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc07,	// (0x00090ea1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc07,	// (0x00090ea1) sp_fs_action_menu_list_gene_pane_g

0xbf40,	// (0x0008d1da) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xbf40,	// (0x0008d1da) sp_fs_action_menu_list_gene_pane_t1

0xbf58,	// (0x0008d1f2) sp_fs_action_menu_list_gene_pane_ParamLimits

0xbf58,	// (0x0008d1f2) sp_fs_action_menu_list_gene_pane

0xcdd4,	// (0x0008e06e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcdd4,	// (0x0008e06e) popup_sp_fs_action_menu_bg_pane

0xbf7b,	// (0x0008d215) sp_fs_action_menu_list_pane_ParamLimits

0xbf7b,	// (0x0008d215) sp_fs_action_menu_list_pane

0x8a60,	// (0x00089cfa) sp_fs_scroll_pane_cp01_ParamLimits

0x8a60,	// (0x00089cfa) sp_fs_scroll_pane_cp01

0xe9a8,	// (0x0008fc42) list_medium_line_plain_t2_t1

0xe9a8,	// (0x0008fc42) list_medium_line_plain_t2_t2

0x0001,

0xfbf4,	// (0x00090e8e) list_medium_line_plain_t2_t

0xe9a8,	// (0x0008fc42) list_medium_line_plain_t3_t1

0xe9a8,	// (0x0008fc42) list_medium_line_plain_t3_t2

0xe9a8,	// (0x0008fc42) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x00090511) list_medium_line_plain_t3_t

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g2_g1

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g2_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00090456) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00090456) list_medium_line_x2_t2_g2_g

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g2_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g2_t1

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g2_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x0009042b) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x0009042b) list_medium_line_x2_t2_g2_t

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g2_g1

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00090456) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00090456) list_medium_line_x2_t4_g2_g

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g2_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g2_t1

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g2_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g2_t2

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g2_t3_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g2_t3

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g2_t4_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00090464) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00090464) list_medium_line_x2_t4_g2_t

0xdc4c,	// (0x0008eee6) list_medium_line_t3_right_iconx2_g1

0xdc4c,	// (0x0008eee6) list_medium_line_t3_right_iconx2_g2

0xdc4c,	// (0x0008eee6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x0009062d) list_medium_line_t3_right_iconx2_g

0xe9a8,	// (0x0008fc42) list_medium_line_t3_right_iconx2_t1

0xe9a8,	// (0x0008fc42) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf4,	// (0x00090e8e) list_medium_line_t3_right_iconx2_t

0xd58b,	// (0x0008e825) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x3_t4_g4_g1

0xd58b,	// (0x0008e825) list_medium_line_x3_t4_g4_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x3_t4_g4_g2

0xd58b,	// (0x0008e825) list_medium_line_x3_t4_g4_g3_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x3_t4_g4_g3

0xd58b,	// (0x0008e825) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x0009045b) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x0009045b) list_medium_line_x3_t4_g4_g

0xdc56,	// (0x0008eef0) list_medium_line_x3_t4_g4_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x3_t4_g4_t1

0xdc56,	// (0x0008eef0) list_medium_line_x3_t4_g4_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x3_t4_g4_t2

0xdc56,	// (0x0008eef0) list_medium_line_x3_t4_g4_t3_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x3_t4_g4_t3

0xdc56,	// (0x0008eef0) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00090464) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00090464) list_medium_line_x3_t4_g4_t

0x0624,	// (0x000818be) list_single_dyc_row_text_pane_t1_ParamLimits

0x0624,	// (0x000818be) list_single_dyc_row_text_pane_t1

0x066d,	// (0x00081907) list_single_dyc_row_text_pane_t2_ParamLimits

0x066d,	// (0x00081907) list_single_dyc_row_text_pane_t2

0xbf9f,	// (0x0008d239) list_single_dyc_row_text_pane_t3_ParamLimits

0xbf9f,	// (0x0008d239) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0c,	// (0x00090ea6) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0c,	// (0x00090ea6) list_single_dyc_row_text_pane_t

0xbfc3,	// (0x0008d25d) list_single_dyc_row_pane_g1_ParamLimits

0xbfc3,	// (0x0008d25d) list_single_dyc_row_pane_g1

0xbfcf,	// (0x0008d269) list_single_dyc_row_pane_g2_ParamLimits

0xbfcf,	// (0x0008d269) list_single_dyc_row_pane_g2

0xbfdb,	// (0x0008d275) list_single_dyc_row_pane_g3_ParamLimits

0xbfdb,	// (0x0008d275) list_single_dyc_row_pane_g3

0xbfe7,	// (0x0008d281) list_single_dyc_row_pane_g4_ParamLimits

0xbfe7,	// (0x0008d281) list_single_dyc_row_pane_g4

0x0003,

0xfc19,	// (0x00090eb3) list_single_dyc_row_pane_g_ParamLimits

0xfc19,	// (0x00090eb3) list_single_dyc_row_pane_g

0xbff3,	// (0x0008d28d) list_single_dyc_row_text_pane_ParamLimits

0xbff3,	// (0x0008d28d) list_single_dyc_row_text_pane

0xc242,	// (0x0008d4dc) bg_sp_fs_scroll_pane

0xcde2,	// (0x0008e07c) thumb_sp_fs_scroll_pane

0xd58b,	// (0x0008e825) list_medium_line_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_g1

0xdc56,	// (0x0008eef0) list_medium_line_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t1

0xd58b,	// (0x0008e825) list_medium_line_x2_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_g1

0xd58b,	// (0x0008e825) list_medium_line_x2_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00090456) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00090456) list_medium_line_x2_g

0xdc56,	// (0x0008eef0) list_medium_line_x2_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t1

0xd58b,	// (0x0008e825) list_medium_line_x3_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x3_g1

0xcdeb,	// (0x0008e085) list_medium_line_x3_g2_ParamLimits

0xcdeb,	// (0x0008e085) list_medium_line_x3_g2

0x0001,

0xfc22,	// (0x00090ebc) list_medium_line_x3_g_ParamLimits

0xfc22,	// (0x00090ebc) list_medium_line_x3_g

0xcdf9,	// (0x0008e093) list_medium_line_x3_t1_ParamLimits

0xcdf9,	// (0x0008e093) list_medium_line_x3_t1

0xce0d,	// (0x0008e0a7) thumb_sp_fs_scroll_pane_g1

0xce16,	// (0x0008e0b0) thumb_sp_fs_scroll_pane_g2

0xce1f,	// (0x0008e0b9) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x00090ec1) thumb_sp_fs_scroll_pane_g

0xce0d,	// (0x0008e0a7) bg_sp_fs_scroll_pane_g1

0xce16,	// (0x0008e0b0) bg_sp_fs_scroll_pane_g2

0xce1f,	// (0x0008e0b9) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x00090ec1) bg_sp_fs_scroll_pane_g

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g4_g1

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g4_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g4_g2

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g4_g3_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g4_g3

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g4_g4_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x0009045b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x0009045b) list_medium_line_x2_t3_g4_g

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g4_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g4_t1

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g4_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g4_t2

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g4_t3_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x0009044f) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x0009044f) list_medium_line_x2_t3_g4_t

0xd58b,	// (0x0008e825) list_medium_line_g2_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_g2_g1

0xd58b,	// (0x0008e825) list_medium_line_g2_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00090456) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00090456) list_medium_line_g2_g

0xdc56,	// (0x0008eef0) list_medium_line_g2_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_g2_t1

0xd58b,	// (0x0008e825) list_medium_line_t3_g2_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t3_g2_g1

0xd58b,	// (0x0008e825) list_medium_line_t3_g2_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00090456) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00090456) list_medium_line_t3_g2_g

0xdc56,	// (0x0008eef0) list_medium_line_t3_g2_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t3_g2_t1

0xdc56,	// (0x0008eef0) list_medium_line_t3_g2_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t3_g2_t2

0xdc56,	// (0x0008eef0) list_medium_line_t3_g2_t3_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x0009044f) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x0009044f) list_medium_line_t3_g2_t

0xdc4c,	// (0x0008eee6) list_medium_line_right_icon_g1

0xe9a8,	// (0x0008fc42) list_medium_line_right_icon_t1

0xd58b,	// (0x0008e825) list_medium_line_t2_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t2_g1

0xdc56,	// (0x0008eef0) list_medium_line_t2_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t2_t1

0xdc56,	// (0x0008eef0) list_medium_line_t2_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x0009042b) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x0009042b) list_medium_line_t2_t

0xd58b,	// (0x0008e825) list_medium_line_t3_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t3_g1

0xdc56,	// (0x0008eef0) list_medium_line_t3_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t3_t1

0xdc56,	// (0x0008eef0) list_medium_line_t3_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t3_t2

0xdc56,	// (0x0008eef0) list_medium_line_t3_t3_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x0009044f) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x0009044f) list_medium_line_t3_t

0xd58b,	// (0x0008e825) list_medium_line_g3_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_g3_g1

0xd58b,	// (0x0008e825) list_medium_line_g3_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_g3_g2

0xd58b,	// (0x0008e825) list_medium_line_g3_g3_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00090448) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00090448) list_medium_line_g3_g

0xdc56,	// (0x0008eef0) list_medium_line_g3_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_g3_t1

0xd58b,	// (0x0008e825) list_medium_line_t2_g3_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t2_g3_g1

0xd58b,	// (0x0008e825) list_medium_line_t2_g3_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t2_g3_g2

0xd58b,	// (0x0008e825) list_medium_line_t2_g3_g3_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00090448) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00090448) list_medium_line_t2_g3_g

0xdc56,	// (0x0008eef0) list_medium_line_t2_g3_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t2_g3_t1

0xdc56,	// (0x0008eef0) list_medium_line_t2_g3_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x0009042b) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x0009042b) list_medium_line_t2_g3_t

0xd58b,	// (0x0008e825) list_medium_line_t3_g3_g1_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t3_g3_g1

0xd58b,	// (0x0008e825) list_medium_line_t3_g3_g2_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t3_g3_g2

0xd58b,	// (0x0008e825) list_medium_line_t3_g3_g3_ParamLimits

0xd58b,	// (0x0008e825) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00090448) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00090448) list_medium_line_t3_g3_g

0xdc56,	// (0x0008eef0) list_medium_line_t3_g3_t1_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t3_g3_t1

0xdc56,	// (0x0008eef0) list_medium_line_t3_g3_t2_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t3_g3_t2

0xdc56,	// (0x0008eef0) list_medium_line_t3_g3_t3_ParamLimits

0xdc56,	// (0x0008eef0) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x0009044f) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x0009044f) list_medium_line_t3_g3_t

0xdc4c,	// (0x0008eee6) list_medium_line_right_iconx2_g1

0xdc4c,	// (0x0008eee6) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00090349) list_medium_line_right_iconx2_g

0xe9a8,	// (0x0008fc42) list_medium_line_right_iconx2_t1

0xdc4c,	// (0x0008eee6) list_medium_line_t2_right_iconx2_g1

0xdc4c,	// (0x0008eee6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00090349) list_medium_line_t2_right_iconx2_g

0xe9a8,	// (0x0008fc42) list_medium_line_t2_right_iconx2_t1

0xe9a8,	// (0x0008fc42) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf4,	// (0x00090e8e) list_medium_line_t2_right_iconx2_t

0xe9a8,	// (0x0008fc42) list_medium_line_x4_t4_t1

0xe9a8,	// (0x0008fc42) list_medium_line_x4_t4_t2

0xe9a8,	// (0x0008fc42) list_medium_line_x4_t4_t3

0xe9a8,	// (0x0008fc42) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x00090518) list_medium_line_x4_t4_t

0x8aca,	// (0x00089d64) tport_appsw_pane_ParamLimits

0x8aca,	// (0x00089d64) tport_appsw_pane

0x8ae2,	// (0x00089d7c) tport_contact_pane_ParamLimits

0x8ae2,	// (0x00089d7c) tport_contact_pane

0x8afd,	// (0x00089d97) tport_listscroll_pane_ParamLimits

0x8afd,	// (0x00089d97) tport_listscroll_pane

0x8b15,	// (0x00089daf) cell_tport_appsw_pane_ParamLimits

0x8b15,	// (0x00089daf) cell_tport_appsw_pane

0xee28,	// (0x000900c2) tport_appsw_pane_g1_ParamLimits

0xee28,	// (0x000900c2) tport_appsw_pane_g1

0x8b5f,	// (0x00089df9) tport_contact_pane_g1

0x8b68,	// (0x00089e02) tport_contact_pane_t1

0x8b76,	// (0x00089e10) tport_contact_pane_t2

0x0001,

0xfc2e,	// (0x00090ec8) tport_contact_pane_t

0xce28,	// (0x0008e0c2) list_tport_pane

0xce31,	// (0x0008e0cb) scroll_pane_cp_030

0x8b8c,	// (0x00089e26) cell_tport_appsw_pane_g1

0x8b9c,	// (0x00089e36) cell_tport_appsw_pane_t1

0x8baa,	// (0x00089e44) grid_highlight_pane_cp019

0x8bb2,	// (0x00089e4c) list_tport_double_graphic_pane_ParamLimits

0x8bb2,	// (0x00089e4c) list_tport_double_graphic_pane

0xcf46,	// (0x0008e1e0) list_highlight_pane_cp023_ParamLimits

0xcf46,	// (0x0008e1e0) list_highlight_pane_cp023

0x8bbf,	// (0x00089e59) list_tport_double_graphic_pane_g1_ParamLimits

0x8bbf,	// (0x00089e59) list_tport_double_graphic_pane_g1

0x8bcc,	// (0x00089e66) list_tport_double_graphic_pane_t1_ParamLimits

0x8bcc,	// (0x00089e66) list_tport_double_graphic_pane_t1

0x8be1,	// (0x00089e7b) list_tport_double_graphic_pane_t2_ParamLimits

0x8be1,	// (0x00089e7b) list_tport_double_graphic_pane_t2

0x0001,

0xfc3a,	// (0x00090ed4) list_tport_double_graphic_pane_t_ParamLimits

0xfc3a,	// (0x00090ed4) list_tport_double_graphic_pane_t

0xc242,	// (0x0008d4dc) main_cale_note_pane

0x6da9,	// (0x00088043) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6da9,	// (0x00088043) cell_vitu2_function_top_wide_pane_cp01

0x8542,	// (0x000897dc) wait_bar_pane_cp05_ParamLimits

0xcf46,	// (0x0008e1e0) listscroll_cmail_pane

0xce42,	// (0x0008e0dc) list_cmail_pane

0x8bf3,	// (0x00089e8d) list_cmail_body_pane

0x8c0a,	// (0x00089ea4) list_single_cmail_header_caption_pane

0x8c24,	// (0x00089ebe) list_single_cmail_header_detail_pane_ParamLimits

0x8c24,	// (0x00089ebe) list_single_cmail_header_detail_pane

0xce59,	// (0x0008e0f3) list_single_cmail_header_caption_pane_t1

0x07a2,	// (0x00081a3c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x07a2,	// (0x00081a3c) list_single_cmail_header_detail_pane_g1

0xc012,	// (0x0008d2ac) list_single_cmail_header_detail_pane_g2_ParamLimits

0xc012,	// (0x0008d2ac) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc3f,	// (0x00090ed9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc3f,	// (0x00090ed9) list_single_cmail_header_detail_pane_g

0x07ba,	// (0x00081a54) list_single_cmail_header_detail_pane_t1_ParamLimits

0x07ba,	// (0x00081a54) list_single_cmail_header_detail_pane_t1

0x07f6,	// (0x00081a90) list_single_cmail_header_editor_pane_bg_ParamLimits

0x07f6,	// (0x00081a90) list_single_cmail_header_editor_pane_bg

0xcaf0,	// (0x0008dd8a) list_cmail_body_pane_g1

0xce7d,	// (0x0008e117) list_cmail_body_pane_t1

0xb8bc,	// (0x0008cb56) list_single_cmail_header_editor_pane_bg_g1

0xe074,	// (0x0008f30e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb8cc,	// (0x0008cb66) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb8c4,	// (0x0008cb5e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xbb56,	// (0x0008cdf0) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb8ec,	// (0x0008cb86) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb8dc,	// (0x0008cb76) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb8e4,	// (0x0008cb7e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe054,	// (0x0008f2ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c57,	// (0x00089ef1) calenote_gesture_pane_ParamLimits

0x8c57,	// (0x00089ef1) calenote_gesture_pane

0x8c77,	// (0x00089f11) calenote_window_pane_ParamLimits

0x8c77,	// (0x00089f11) calenote_window_pane

0xce8b,	// (0x0008e125) popup_note_window_cp01

0x8c93,	// (0x00089f2d) calenote_swipe_1_pane_ParamLimits

0x8c93,	// (0x00089f2d) calenote_swipe_1_pane

0x88dc,	// (0x00089b76) calenote_swipe_2_pane_ParamLimits

0x88dc,	// (0x00089b76) calenote_swipe_2_pane

0xccc6,	// (0x0008df60) calenote_swipe_1_pane_g1_ParamLimits

0xccc6,	// (0x0008df60) calenote_swipe_1_pane_g1

0xce9d,	// (0x0008e137) calenote_swipe_1_pane_g2_ParamLimits

0xce9d,	// (0x0008e137) calenote_swipe_1_pane_g2

0x0001,

0xfc4b,	// (0x00090ee5) calenote_swipe_1_pane_g_ParamLimits

0xfc4b,	// (0x00090ee5) calenote_swipe_1_pane_g

0xcea9,	// (0x0008e143) calenote_swipe_1_pane_t1_ParamLimits

0xcea9,	// (0x0008e143) calenote_swipe_1_pane_t1

0xccc6,	// (0x0008df60) calenote_swipe_2_pane_g1_ParamLimits

0xccc6,	// (0x0008df60) calenote_swipe_2_pane_g1

0xcec8,	// (0x0008e162) calenote_swipe_2_pane_g2_ParamLimits

0xcec8,	// (0x0008e162) calenote_swipe_2_pane_g2

0x0001,

0xfc50,	// (0x00090eea) calenote_swipe_2_pane_g_ParamLimits

0xfc50,	// (0x00090eea) calenote_swipe_2_pane_g

0xced4,	// (0x0008e16e) calenote_swipe_2_pane_t1_ParamLimits

0xced4,	// (0x0008e16e) calenote_swipe_2_pane_t1

0xc242,	// (0x0008d4dc) main_mup_navstr_pane

0x5ca6,	// (0x00086f40) main_mup3_pane_t7_ParamLimits

0x5ca6,	// (0x00086f40) main_mup3_pane_t7

0xb417,	// (0x0008c6b1) main_mp4_pane_g6_ParamLimits

0xb417,	// (0x0008c6b1) main_mp4_pane_g6

0xb6d2,	// (0x0008c96c) main_image3_pane_t4_ParamLimits

0xb6d2,	// (0x0008c96c) main_image3_pane_t4

0x8ca8,	// (0x00089f42) popup_navstr_preview_pane_ParamLimits

0x8ca8,	// (0x00089f42) popup_navstr_preview_pane

0x8cb8,	// (0x00089f52) scroll_navstr_pane_ParamLimits

0x8cb8,	// (0x00089f52) scroll_navstr_pane

0xc242,	// (0x0008d4dc) bg_popup_preview_window_pane_cp04

0xcefb,	// (0x0008e195) popup_navstr_preview_pane_t1

0x8ccc,	// (0x00089f66) scroll_navstr_pane_g1_ParamLimits

0x8ccc,	// (0x00089f66) scroll_navstr_pane_g1

0x8ce0,	// (0x00089f7a) scroll_navstr_pane_t1_ParamLimits

0x8ce0,	// (0x00089f7a) scroll_navstr_pane_t1

0xce94,	// (0x0008e12e) bg_button_pane_cp014

0xce94,	// (0x0008e12e) bg_button_pane_cp030

0x05a5,	// (0x0008183f) list_double_fisheye_pane_g4_ParamLimits

0x05a5,	// (0x0008183f) list_double_fisheye_pane_g4

0x05b1,	// (0x0008184b) list_double_fisheye_pane_g5_ParamLimits

0x05b1,	// (0x0008184b) list_double_fisheye_pane_g5

0xc333,	// (0x0008d5cd) sp_fs_scroll_pane_cp03

0xcd94,	// (0x0008e02e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcda0,	// (0x0008e03a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbf9,	// (0x00090e93) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x89d1,	// (0x00089c6b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xce51,	// (0x0008e0eb) sp_fs_scroll_pane_cp02

0xdda4,	// (0x0008f03e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdda4,	// (0x0008f03e) popup_sp_fs_calendar_preview_list_single_pane

0xc242,	// (0x0008d4dc) main_cam6_pano_pane

0xcf46,	// (0x0008e1e0) main_mup3_pane_ParamLimits

0xc242,	// (0x0008d4dc) main_phacti_pane

0x8413,	// (0x000896ad) bg_button_pane_cp11

0x842d,	// (0x000896c7) main_mobtv_info_pane_g2_ParamLimits

0x842d,	// (0x000896c7) main_mobtv_info_pane_g2

0x0001,

0xfb5e,	// (0x00090df8) main_mobtv_info_pane_g_ParamLimits

0xfb5e,	// (0x00090df8) main_mobtv_info_pane_g

0xdc56,	// (0x0008eef0) sc_clock_pane_t5_ParamLimits

0xdc56,	// (0x0008eef0) sc_clock_pane_t5

0xee28,	// (0x000900c2) main_radioblah_pane_g1_ParamLimits

0xee36,	// (0x000900d0) main_radioblah_pane_t3_ParamLimits

0xee36,	// (0x000900d0) main_radioblah_pane_t3

0xee36,	// (0x000900d0) main_radioblah_pane_t4_ParamLimits

0xee36,	// (0x000900d0) main_radioblah_pane_t4

0xcf46,	// (0x0008e1e0) main_radioblah_text_pane_ParamLimits

0xcf46,	// (0x0008e1e0) main_radioblah_text_pane

0xcbfd,	// (0x0008de97) main_radioblah_info_pane_g1_ParamLimits

0xcc41,	// (0x0008dedb) main_radioblah_info_pane_t4_ParamLimits

0xcc41,	// (0x0008dedb) main_radioblah_info_pane_t4

0xcf46,	// (0x0008e1e0) main_sp_fs_calendar_pane

0x8cf7,	// (0x00089f91) main_phacti_pane_g1

0x8cff,	// (0x00089f99) phacti_note_pane_ParamLimits

0x8cff,	// (0x00089f99) phacti_note_pane

0xcf12,	// (0x0008e1ac) phacti_term_pane_ParamLimits

0xcf12,	// (0x0008e1ac) phacti_term_pane

0xcf27,	// (0x0008e1c1) phacti_note_pane_t1_ParamLimits

0xcf27,	// (0x0008e1c1) phacti_note_pane_t1

0xc042,	// (0x0008d2dc) phacti_term_pane_g1

0xc04a,	// (0x0008d2e4) phacti_term_pane_t1_ParamLimits

0xc04a,	// (0x0008d2e4) phacti_term_pane_t1

0xcf3e,	// (0x0008e1d8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd5f7,	// (0x0008e891) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5a,	// (0x00090ef4) popup_sp_fs_calendar_preview_list_single_pane_g

0xd5ff,	// (0x0008e899) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd5ff,	// (0x0008e899) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd615,	// (0x0008e8af) aid_popup_sp_fs_bg_corner_pane

0xdc4c,	// (0x0008eee6) popup_sp_fs_calendar_preview_bg_pane_g1

0xc242,	// (0x0008d4dc) popup_sp_fs_calendar_preview_bg_pane

0xd61d,	// (0x0008e8b7) popup_sp_fs_calendar_preview_list_pane

0xee4a,	// (0x000900e4) bg_main_sp_fs_cale_pane_ParamLimits

0xee4a,	// (0x000900e4) bg_main_sp_fs_cale_pane

0xc07d,	// (0x0008d317) listscroll_cale_mrui_pane_ParamLimits

0xc07d,	// (0x0008d317) listscroll_cale_mrui_pane

0xc092,	// (0x0008d32c) listscroll_sp_fs_schedule_track_pane

0xc09b,	// (0x0008d335) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xc09b,	// (0x0008d335) main_sp_fs_ctrlbar_pane_cp01

0xd625,	// (0x0008e8bf) main_sp_fs_ribbon_pane

0xc0ae,	// (0x0008d348) popup_sp_fs_cale_preview_window

0x8d74,	// (0x0008a00e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d74,	// (0x0008a00e) list_single_sp_fs_schedule_track_pane

0xcf46,	// (0x0008e1e0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xcf46,	// (0x0008e1e0) bg_sp_fs_highlight_list_pane_cp03

0x8d87,	// (0x0008a021) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d87,	// (0x0008a021) list_single_sp_fs_schedule_track_pane_g1

0x8d93,	// (0x0008a02d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d93,	// (0x0008a02d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc5f,	// (0x00090ef9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc5f,	// (0x00090ef9) list_single_sp_fs_schedule_track_pane_g

0x8d9f,	// (0x0008a039) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d9f,	// (0x0008a039) list_single_sp_fs_schedule_track_pane_t1

0x8dc1,	// (0x0008a05b) sp_fs_schedule_track_pane_ParamLimits

0x8dc1,	// (0x0008a05b) sp_fs_schedule_track_pane

0xd62d,	// (0x0008e8c7) sp_fs_schedule_track_pane_g1

0xd635,	// (0x0008e8cf) sp_fs_schedule_track_pane_g2

0xd63d,	// (0x0008e8d7) sp_fs_schedule_track_pane_g3

0xd645,	// (0x0008e8df) sp_fs_schedule_track_pane_g4

0xd64d,	// (0x0008e8e7) sp_fs_schedule_track_pane_g5

0x0004,

0xfc64,	// (0x00090efe) sp_fs_schedule_track_pane_g

0xb8bc,	// (0x0008cb56) bg_sp_fs_schedule_viewer_highlight_g1

0xe074,	// (0x0008f30e) bg_sp_fs_schedule_viewer_highlight_g2

0xb8c4,	// (0x0008cb5e) bg_sp_fs_schedule_viewer_highlight_g3

0xb8cc,	// (0x0008cb66) bg_sp_fs_schedule_viewer_highlight_g4

0xbb56,	// (0x0008cdf0) bg_sp_fs_schedule_viewer_highlight_g5

0xb8dc,	// (0x0008cb76) bg_sp_fs_schedule_viewer_highlight_g6

0xb8e4,	// (0x0008cb7e) bg_sp_fs_schedule_viewer_highlight_g7

0xb8ec,	// (0x0008cb86) bg_sp_fs_schedule_viewer_highlight_g8

0xe054,	// (0x0008f2ee) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc6f,	// (0x00090f09) bg_sp_fs_schedule_viewer_highlight_g

0xc242,	// (0x0008d4dc) bg_main_sp_fs_ribbon_pane

0x8dd6,	// (0x0008a070) main_sp_fs_ribbon_pane_g1

0xd655,	// (0x0008e8ef) main_sp_fs_ribbon_pane_t1

0x8ddf,	// (0x0008a079) main_sp_fs_ribbon_pane_t2

0xd664,	// (0x0008e8fe) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc82,	// (0x00090f1c) main_sp_fs_ribbon_pane_t

0xd673,	// (0x0008e90d) main_sp_fs_ribbon_scheduler_pane

0xd67b,	// (0x0008e915) bg_main_sp_fs_ribbon_pane_g1

0xd684,	// (0x0008e91e) bg_main_sp_fs_ribbon_pane_g2

0xd68d,	// (0x0008e927) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc89,	// (0x00090f23) bg_main_sp_fs_ribbon_pane_g

0xd695,	// (0x0008e92f) main_sp_fs_ribbon_scheduler_pane_g1

0xd69e,	// (0x0008e938) main_sp_fs_ribbon_scheduler_pane_g2

0xd6a7,	// (0x0008e941) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc90,	// (0x00090f2a) main_sp_fs_ribbon_scheduler_pane_g

0xd6b0,	// (0x0008e94a) list_cale_mrui_pane

0x8dee,	// (0x0008a088) sp_fs_scroll_pane_cp07_ParamLimits

0x8dee,	// (0x0008a088) sp_fs_scroll_pane_cp07

0x8e0a,	// (0x0008a0a4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e0a,	// (0x0008a0a4) bg_sp_fs_schedule_viewer_highlight

0xd6bd,	// (0x0008e957) list_single_sp_fs_schedule_track_pane_cp01

0xd6c5,	// (0x0008e95f) list_sp_fs_schedule_track_pane

0xd6cd,	// (0x0008e967) sp_fs_scroll_pane_cp06_ParamLimits

0xd6cd,	// (0x0008e967) sp_fs_scroll_pane_cp06

0xdc4c,	// (0x0008eee6) bgmain_sp_fs_calendar_pane_g1

0x080d,	// (0x00081aa7) list_single_cale_mrui_pane_ParamLimits

0x080d,	// (0x00081aa7) list_single_cale_mrui_pane

0xc0c0,	// (0x0008d35a) list_single_cale_mrui_row_pane_ParamLimits

0xc0c0,	// (0x0008d35a) list_single_cale_mrui_row_pane

0xc0cd,	// (0x0008d367) list_single_cale_mrui_row_pane_g1_ParamLimits

0xc0cd,	// (0x0008d367) list_single_cale_mrui_row_pane_g1

0xc105,	// (0x0008d39f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xc105,	// (0x0008d39f) list_single_cale_mrui_row_pane_t1

0x082d,	// (0x00081ac7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x082d,	// (0x00081ac7) list_single_cale_mrui_row_pane_t2

0xc117,	// (0x0008d3b1) list_single_cale_mrui_row_pane_t3_ParamLimits

0xc117,	// (0x0008d3b1) list_single_cale_mrui_row_pane_t3

0xc146,	// (0x0008d3e0) list_single_cale_mrui_row_pane_t4_ParamLimits

0xc146,	// (0x0008d3e0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc9e,	// (0x00090f38) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc9e,	// (0x00090f38) list_single_cale_mrui_row_pane_t

0x0893,	// (0x00081b2d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0893,	// (0x00081b2d) list_single_cmail_header_editor_pane_bg_cp01

0x08bf,	// (0x00081b59) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x08bf,	// (0x00081b59) list_single_cmail_header_editor_pane_bg_cp02

0xd6ec,	// (0x0008e986) main_radioblah_text_pane_t1_ParamLimits

0xd6ec,	// (0x0008e986) main_radioblah_text_pane_t1

0xd706,	// (0x0008e9a0) cam6_indi_pane_cp01

0xd70e,	// (0x0008e9a8) cam6_mode_pane_cp01

0xd716,	// (0x0008e9b0) cam6_pano_pane

0xd71f,	// (0x0008e9b9) cam6_zoom_pane_cp01

0xd729,	// (0x0008e9c3) cam6_pano_image_pane

0xd732,	// (0x0008e9cc) cam6_pano_pane_g1

0xcaf0,	// (0x0008dd8a) cam6_pano_pane_g2

0xd73b,	// (0x0008e9d5) cam6_pano_pane_g3

0xd744,	// (0x0008e9de) cam6_pano_pane_g4

0xb1ab,	// (0x0008c445) cam6_pano_pane_g5

0xd74d,	// (0x0008e9e7) cam6_pano_pane_g6

0xd755,	// (0x0008e9ef) cam6_pano_pane_g7

0xd75d,	// (0x0008e9f7) cam6_pano_pane_g8

0xd766,	// (0x0008ea00) cam6_pano_pane_g9

0x0008,

0xfca7,	// (0x00090f41) cam6_pano_pane_g

0xc242,	// (0x0008d4dc) main_browser_tag_pane

0xcef3,	// (0x0008e18d) grid_navstr_albumart_pane

0xd771,	// (0x0008ea0b) cell_navstr_albumart_pane_ParamLimits

0xd771,	// (0x0008ea0b) cell_navstr_albumart_pane

0xd78d,	// (0x0008ea27) cell_navstr_albumart_pane_g1

0x44da,	// (0x00085774) cell_navstr_albumart_pane_g2

0x44ea,	// (0x00085784) cell_navstr_albumart_pane_g3

0x44e2,	// (0x0008577c) cell_navstr_albumart_pane_g4

0x0003,

0xfcba,	// (0x00090f54) cell_navstr_albumart_pane_g

0x8e1c,	// (0x0008a0b6) bt_list_pane_ParamLimits

0x8e1c,	// (0x0008a0b6) bt_list_pane

0x8e32,	// (0x0008a0cc) bt_list_pane_t1

0x8e41,	// (0x0008a0db) bt_list_pane_t2

0x0001,

0xfcc3,	// (0x00090f5d) bt_list_pane_t

0xc242,	// (0x0008d4dc) main_cale_prevew_pane

0x8e50,	// (0x0008a0ea) popup_cale_preview_window_ParamLimits

0x8e50,	// (0x0008a0ea) popup_cale_preview_window

0xcf46,	// (0x0008e1e0) bg_popup_preview_window_pane_cp05_ParamLimits

0xcf46,	// (0x0008e1e0) bg_popup_preview_window_pane_cp05

0xd795,	// (0x0008ea2f) list_cale_preview_pane_ParamLimits

0xd795,	// (0x0008ea2f) list_cale_preview_pane

0x8e6d,	// (0x0008a107) list_double_cale_preview_pane_ParamLimits

0x8e6d,	// (0x0008a107) list_double_cale_preview_pane

0x8e81,	// (0x0008a11b) list_single_cale_preview_pane_ParamLimits

0x8e81,	// (0x0008a11b) list_single_cale_preview_pane

0x8e99,	// (0x0008a133) list_single_cale_preview_pane_g1

0x8ea1,	// (0x0008a13b) list_single_cale_preview_pane_t1_ParamLimits

0x8ea1,	// (0x0008a13b) list_single_cale_preview_pane_t1

0x8eb6,	// (0x0008a150) list_double_cale_preview_pane_g1

0x8ebe,	// (0x0008a158) list_double_cale_preview_pane_t1_ParamLimits

0x8ebe,	// (0x0008a158) list_double_cale_preview_pane_t1

0x8ed3,	// (0x0008a16d) list_double_cale_preview_pane_t2_ParamLimits

0x8ed3,	// (0x0008a16d) list_double_cale_preview_pane_t2

0x0001,

0xfcc8,	// (0x00090f62) list_double_cale_preview_pane_t_ParamLimits

0xfcc8,	// (0x00090f62) list_double_cale_preview_pane_t

0xc242,	// (0x0008d4dc) main_ezdial_pane

0xcf46,	// (0x0008e1e0) main_sp_fs_email_pane_ParamLimits

0x893c,	// (0x00089bd6) cmail_ddmenu_btn01_pane_ParamLimits

0x893c,	// (0x00089bd6) cmail_ddmenu_btn01_pane

0x894f,	// (0x00089be9) cmail_ddmenu_btn02_pane_ParamLimits

0x894f,	// (0x00089be9) cmail_ddmenu_btn02_pane

0x8972,	// (0x00089c0c) cmail_ddmenu_btn03_pane_ParamLimits

0x8972,	// (0x00089c0c) cmail_ddmenu_btn03_pane

0x8a10,	// (0x00089caa) main_sp_fs_ctrlbar_pane_ParamLimits

0x8a34,	// (0x00089cce) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8bf3,	// (0x00089e8d) list_cmail_body_pane_ParamLimits

0xce67,	// (0x0008e101) bg_button_pane_cp12

0xce70,	// (0x0008e10a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xce70,	// (0x0008e10a) list_single_cmail_header_detail_pane_g3

0xc01e,	// (0x0008d2b8) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc01e,	// (0x0008d2b8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc46,	// (0x00090ee0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc46,	// (0x00090ee0) list_single_cmail_header_detail_pane_t

0xc05f,	// (0x0008d2f9) phacti_term_pane_t2_ParamLimits

0xc05f,	// (0x0008d2f9) phacti_term_pane_t2

0x0001,

0xfc55,	// (0x00090eef) phacti_term_pane_t_ParamLimits

0xfc55,	// (0x00090eef) phacti_term_pane_t

0xd7a1,	// (0x0008ea3b) aid_size_list_single_double

0x8eeb,	// (0x0008a185) popup_ezdial_listscroll_window

0xd7ad,	// (0x0008ea47) popup_number_entry_window_cp01

0xde48,	// (0x0008f0e2) bg_popup_call_pane_cp09

0xd7ba,	// (0x0008ea54) ezdial_list_pane

0xd7c2,	// (0x0008ea5c) scroll_pane_cp23

0xee4a,	// (0x000900e4) bg_button_pane_cp028_ParamLimits

0xee4a,	// (0x000900e4) bg_button_pane_cp028

0x8f07,	// (0x0008a1a1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f07,	// (0x0008a1a1) cmail_ddmenu_btn01_pane_g1

0x8f16,	// (0x0008a1b0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f16,	// (0x0008a1b0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfccd,	// (0x00090f67) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfccd,	// (0x00090f67) cmail_ddmenu_btn01_pane_g

0xd7ca,	// (0x0008ea64) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd7ca,	// (0x0008ea64) cmail_ddmenu_btn01_pane_t1

0xee4a,	// (0x000900e4) bg_button_pane_cp029_ParamLimits

0xee4a,	// (0x000900e4) bg_button_pane_cp029

0x8f2c,	// (0x0008a1c6) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f2c,	// (0x0008a1c6) cmail_ddmenu_btn02_pane_g1

0x8f47,	// (0x0008a1e1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f47,	// (0x0008a1e1) cmail_ddmenu_btn02_pane_t1

0xcf46,	// (0x0008e1e0) bg_button_pane_cp031_ParamLimits

0xcf46,	// (0x0008e1e0) bg_button_pane_cp031

0x8f2c,	// (0x0008a1c6) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f2c,	// (0x0008a1c6) cmail_ddmenu_btn03_pane_g1

0x8f47,	// (0x0008a1e1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f47,	// (0x0008a1e1) cmail_ddmenu_btn03_pane_t1

0xdc56,	// (0x0008eef0) cell_dialer2_keypad_pane_t1_ParamLimits

0xb1d9,	// (0x0008c473) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb1d9,	// (0x0008c473) cell_dialer2_keypad_pane_t1_copy1

0x8234,	// (0x000894ce) ncimui_group_button_pane

0xcf46,	// (0x0008e1e0) main_sp_fs_calendar_pane_ParamLimits

0x8c0a,	// (0x00089ea4) list_single_cmail_header_caption_pane_ParamLimits

0xc074,	// (0x0008d30e) aid_recal_txt_sm_pane

0xc242,	// (0x0008d4dc) mian_recal_day_pane

0xc0ae,	// (0x0008d348) popup_sp_fs_cale_preview_window_ParamLimits

0xd7e0,	// (0x0008ea7a) list_recal_day_pane

0xc193,	// (0x0008d42d) list_single_recal_day_pane_ParamLimits

0xc193,	// (0x0008d42d) list_single_recal_day_pane

0xd807,	// (0x0008eaa1) list_single_recal_day_pane_g1_ParamLimits

0xd807,	// (0x0008eaa1) list_single_recal_day_pane_g1

0xc1a5,	// (0x0008d43f) list_single_recal_day_pane_g2_ParamLimits

0xc1a5,	// (0x0008d43f) list_single_recal_day_pane_g2

0xc1b1,	// (0x0008d44b) list_single_recal_day_pane_g3_ParamLimits

0xc1b1,	// (0x0008d44b) list_single_recal_day_pane_g3

0x08df,	// (0x00081b79) list_single_recal_day_pane_g4_ParamLimits

0x08df,	// (0x00081b79) list_single_recal_day_pane_g4

0xc1bd,	// (0x0008d457) list_single_recal_day_pane_g5_ParamLimits

0xc1bd,	// (0x0008d457) list_single_recal_day_pane_g5

0xc1c9,	// (0x0008d463) list_single_recal_day_pane_g6_ParamLimits

0xc1c9,	// (0x0008d463) list_single_recal_day_pane_g6

0x0004,

0xfcdc,	// (0x00090f76) list_single_recal_day_pane_g_ParamLimits

0xfcdc,	// (0x00090f76) list_single_recal_day_pane_g

0xc1dd,	// (0x0008d477) list_single_recal_day_pane_t1

0xc1ef,	// (0x0008d489) list_single_recal_day_pane_t2

0x0001,

0xfce7,	// (0x00090f81) list_single_recal_day_pane_t

0x8f6e,	// (0x0008a208) ncimui_query_button_pane_ParamLimits

0x8f6e,	// (0x0008a208) ncimui_query_button_pane

0x8f7e,	// (0x0008a218) ncimui_query_button_pane_t1_ParamLimits

0x8f7e,	// (0x0008a218) ncimui_query_button_pane_t1

0xd813,	// (0x0008eaad) ncimui_query_button_pane_t2_ParamLimits

0xd813,	// (0x0008eaad) ncimui_query_button_pane_t2

0x0001,

0xfcec,	// (0x00090f86) ncimui_query_button_pane_t_ParamLimits

0xfcec,	// (0x00090f86) ncimui_query_button_pane_t

0x8f91,	// (0x0008a22b) query_button_pane_ParamLimits

0x8f91,	// (0x0008a22b) query_button_pane

0xc242,	// (0x0008d4dc) bg_button_pane_cp0028

0xd826,	// (0x0008eac0) query_button_pane_t1

0x48ae,	// (0x00085b48) main_tport_pane_ParamLimits

0x8a86,	// (0x00089d20) bg_popup_window_pane_cp01_ParamLimits

0x8a86,	// (0x00089d20) bg_popup_window_pane_cp01

0x8a9f,	// (0x00089d39) heading_pane_cp08_ParamLimits

0x8a9f,	// (0x00089d39) heading_pane_cp08

0x8ab5,	// (0x00089d4f) heading_pane_cp07_ParamLimits

0x8ab5,	// (0x00089d4f) heading_pane_cp07

0x8b8c,	// (0x00089e26) cell_tport_appsw_pane_g2

0x0002,

0xfc33,	// (0x00090ecd) cell_tport_appsw_pane_g

0x0178,	// (0x00081412) input_candi_list_open_g1

0xe24e,	// (0x0008f4e8) list_cale_time_pane_g6_ParamLimits

0xe24e,	// (0x0008f4e8) list_cale_time_pane_g6

0x55f1,	// (0x0008688b) aid_size_touch_calib_1_ParamLimits

0x55f1,	// (0x0008688b) aid_size_touch_calib_1

0x5603,	// (0x0008689d) aid_size_touch_calib_2_ParamLimits

0x5603,	// (0x0008689d) aid_size_touch_calib_2

0x561b,	// (0x000868b5) aid_size_touch_calib_3_ParamLimits

0x561b,	// (0x000868b5) aid_size_touch_calib_3

0x5639,	// (0x000868d3) aid_size_touch_calib_4_ParamLimits

0x5639,	// (0x000868d3) aid_size_touch_calib_4

0x5651,	// (0x000868eb) main_touch_calib_button_group_pane_ParamLimits

0x5651,	// (0x000868eb) main_touch_calib_button_group_pane

0x5669,	// (0x00086903) main_touch_calib_pane_g1_ParamLimits

0x567b,	// (0x00086915) main_touch_calib_pane_g2_ParamLimits

0x568d,	// (0x00086927) main_touch_calib_pane_g3_ParamLimits

0x569f,	// (0x00086939) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x00090919) main_touch_calib_pane_g_ParamLimits

0x56b1,	// (0x0008694b) main_touch_calib_pane_t1_ParamLimits

0x56cb,	// (0x00086965) main_touch_calib_pane_t2_ParamLimits

0x56e5,	// (0x0008697f) main_touch_calib_pane_t3_ParamLimits

0x56f9,	// (0x00086993) main_touch_calib_pane_t4_ParamLimits

0x570f,	// (0x000869a9) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x00090922) main_touch_calib_pane_t_ParamLimits

0xaf66,	// (0x0008c200) list_single_fp_cale_pane_g3_ParamLimits

0xaf66,	// (0x0008c200) list_single_fp_cale_pane_g3

0xcf46,	// (0x0008e1e0) bg_button_pane_cp012_ParamLimits

0xcf46,	// (0x0008e1e0) bg_vkb2_func_pane_cp03_ParamLimits

0x75a6,	// (0x00088840) cell_vitu2_function_top_pane_g1_ParamLimits

0xcf46,	// (0x0008e1e0) bg_vkb2_func_pane_cp04_ParamLimits

0x81bf,	// (0x00089459) main_ncimui_button_group_pane_ParamLimits

0x81bf,	// (0x00089459) main_ncimui_button_group_pane

0x821f,	// (0x000894b9) main_ncimui_pane_t3_ParamLimits

0x821f,	// (0x000894b9) main_ncimui_pane_t3

0xcf09,	// (0x0008e1a3) phacti_button_group_pane

0xd7a1,	// (0x0008ea3b) aid_size_list_single_double_ParamLimits

0x8eeb,	// (0x0008a185) popup_ezdial_listscroll_window_ParamLimits

0xd7ad,	// (0x0008ea47) popup_number_entry_window_cp01_ParamLimits

0x8fa4,	// (0x0008a23e) phacti_button_pane_ParamLimits

0x8fa4,	// (0x0008a23e) phacti_button_pane

0xc242,	// (0x0008d4dc) bg_button_pane_cp14

0xd834,	// (0x0008eace) phacti_button_pane_t1

0x8fb5,	// (0x0008a24f) main_touch_calib_button_pane_ParamLimits

0x8fb5,	// (0x0008a24f) main_touch_calib_button_pane

0xdcaa,	// (0x0008ef44) bg_button_pane_cp18_ParamLimits

0xdcaa,	// (0x0008ef44) bg_button_pane_cp18

0xd842,	// (0x0008eadc) main_touch_calib_button_pane_t1_ParamLimits

0xd842,	// (0x0008eadc) main_touch_calib_button_pane_t1

0xd858,	// (0x0008eaf2) main_touch_calib_button_pane_t2_ParamLimits

0xd858,	// (0x0008eaf2) main_touch_calib_button_pane_t2

0x0001,

0xfcf1,	// (0x00090f8b) main_touch_calib_button_pane_t_ParamLimits

0xfcf1,	// (0x00090f8b) main_touch_calib_button_pane_t

0xc242,	// (0x0008d4dc) cell_ncimui_button_pane

0xc242,	// (0x0008d4dc) bg_button_pane_cp032

0xd876,	// (0x0008eb10) cell_ncimui_button_pane_t1

0xb6b0,	// (0x0008c94a) image3_infobar_pane_ParamLimits

0xb6b0,	// (0x0008c94a) image3_infobar_pane

0x8593,	// (0x0008982d) fs_bigclock_status_pane_ParamLimits

0x8593,	// (0x0008982d) fs_bigclock_status_pane

0x85a0,	// (0x0008983a) main_fs_bigclock_clock_pane_ParamLimits

0x85a0,	// (0x0008983a) main_fs_bigclock_clock_pane

0x85d2,	// (0x0008986c) main_fs_bigclock_indi_pane_ParamLimits

0x85d2,	// (0x0008986c) main_fs_bigclock_indi_pane

0x8612,	// (0x000898ac) main_fs_bigclock_swipe_pane_ParamLimits

0x8612,	// (0x000898ac) main_fs_bigclock_swipe_pane

0xc242,	// (0x0008d4dc) main_fs_clock_dumped_data

0x865e,	// (0x000898f8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x865e,	// (0x000898f8) list_single_fs_bigclock_indicator_pane_g1

0x8677,	// (0x00089911) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8677,	// (0x00089911) list_single_fs_bigclock_indicator_pane_g2

0x8691,	// (0x0008992b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8691,	// (0x0008992b) list_single_fs_bigclock_indicator_pane_g3

0x86ab,	// (0x00089945) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x86ab,	// (0x00089945) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb92,	// (0x00090e2c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb92,	// (0x00090e2c) list_single_fs_bigclock_indicator_pane_g

0x86da,	// (0x00089974) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x86da,	// (0x00089974) list_single_fs_bigclock_indicator_pane_t1

0x8702,	// (0x0008999c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8702,	// (0x0008999c) list_single_fs_bigclock_indicator_pane_t2

0x872a,	// (0x000899c4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x872a,	// (0x000899c4) list_single_fs_bigclock_indicator_pane_t3

0x8752,	// (0x000899ec) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8752,	// (0x000899ec) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9d,	// (0x00090e37) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9d,	// (0x00090e37) list_single_fs_bigclock_indicator_pane_t

0xd884,	// (0x0008eb1e) image3_infobar_fav_pane_ParamLimits

0xd884,	// (0x0008eb1e) image3_infobar_fav_pane

0xd894,	// (0x0008eb2e) image3_infobar_loc_pane_ParamLimits

0xd894,	// (0x0008eb2e) image3_infobar_loc_pane

0xd8aa,	// (0x0008eb44) image3_infobar_time_pane_ParamLimits

0xd8aa,	// (0x0008eb44) image3_infobar_time_pane

0xdc4c,	// (0x0008eee6) image3_infobar_time_pane_g1

0xd8ba,	// (0x0008eb54) image3_infobar_time_pane_t1

0xdc4c,	// (0x0008eee6) image3_infobar_loc_pane_g1

0xd8c8,	// (0x0008eb62) image3_infobar_loc_pane_g2

0x0001,

0xfcf6,	// (0x00090f90) image3_infobar_loc_pane_g

0xd8d0,	// (0x0008eb6a) image3_infobar_loc_pane_t1

0xdc4c,	// (0x0008eee6) image3_infobar_fav_pane_g1

0xd8de,	// (0x0008eb78) image3_infobar_fav_pane_g2

0x0001,

0xfcfb,	// (0x00090f95) image3_infobar_fav_pane_g

0xd8e6,	// (0x0008eb80) fs_bigclock_status_battery_pane

0xd8ef,	// (0x0008eb89) fs_bigclock_status_signal_pane

0xd8f8,	// (0x0008eb92) fs_bigclock_status_title_pane

0xd901,	// (0x0008eb9b) fs_bigclock_status_signal_pane_g1

0xd90a,	// (0x0008eba4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd00,	// (0x00090f9a) fs_bigclock_status_signal_pane_g

0xd912,	// (0x0008ebac) fs_bigclock_status_battery_pane_g1

0xd91b,	// (0x0008ebb5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd05,	// (0x00090f9f) fs_bigclock_status_battery_pane_g

0xd923,	// (0x0008ebbd) fs_bigclock_status_title_pane_t1

0x8fca,	// (0x0008a264) main_fs_bigclock_clock_pane_g1

0x8fca,	// (0x0008a264) main_fs_bigclock_clock_pane_g2

0x8fdd,	// (0x0008a277) main_fs_bigclock_clock_pane_g3

0x8fdd,	// (0x0008a277) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0a,	// (0x00090fa4) main_fs_bigclock_clock_pane_g

0x8ff4,	// (0x0008a28e) main_fs_bigclock_clock_pane_t1

0x900a,	// (0x0008a2a4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd13,	// (0x00090fad) main_fs_bigclock_clock_pane_t

0xd931,	// (0x0008ebcb) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd931,	// (0x0008ebcb) list_single_fs_bigclock_indicator_pane

0xd942,	// (0x0008ebdc) list_single_fs_bigclock_pane_ParamLimits

0xd942,	// (0x0008ebdc) list_single_fs_bigclock_pane

0xd968,	// (0x0008ec02) main_fs_bigclock_indicator_pane_t1

0xd977,	// (0x0008ec11) list_single_fs_bigclock_pane_g1

0xd97f,	// (0x0008ec19) list_single_fs_bigclock_pane_t1

0xdc4c,	// (0x0008eee6) main_fs_bigclock_swipe_pane_g1

0xd9c2,	// (0x0008ec5c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd24,	// (0x00090fbe) main_fs_bigclock_swipe_pane_g

0xd9ca,	// (0x0008ec64) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd9ca,	// (0x0008ec64) main_fs_bigclock_swipe_pane_t1

0x2910,	// (0x00083baa) call_type_pane_ParamLimits

0xc242,	// (0x0008d4dc) main_btmg_pane

0xc0f9,	// (0x0008d393) list_single_cale_mrui_row_pane_g2_ParamLimits

0xc0f9,	// (0x0008d393) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc97,	// (0x00090f31) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc97,	// (0x00090f31) list_single_cale_mrui_row_pane_g

0xc181,	// (0x0008d41b) list_recal_vselct_arw_lo_pane

0xd7ff,	// (0x0008ea99) list_recal_vselct_arw_up_pane

0xc189,	// (0x0008d423) list_recal_vselct_pane

0x906c,	// (0x0008a306) btmg_button_pane

0x9076,	// (0x0008a310) main_btmg_pane_g1

0xc242,	// (0x0008d4dc) bg_button_pane_cp044

0xd9e7,	// (0x0008ec81) btmg_button_pane_t1

0x4872,	// (0x00085b0c) aid_listscroll_gen

0xcf46,	// (0x0008e1e0) main_cntbar_detail_pane

0xce3a,	// (0x0008e0d4) list_cmail_folder_pane

0xc333,	// (0x0008d5cd) sp_fs_scroll_pane_cp03_ParamLimits

0x08f7,	// (0x00081b91) list_single_fs_dyc_pane_cp01_ParamLimits

0x08f7,	// (0x00081b91) list_single_fs_dyc_pane_cp01

0xd9f5,	// (0x0008ec8f) aid_size_cmail_indent

0xc201,	// (0x0008d49b) list_single_dyc_row_pane_cp01

0x90b4,	// (0x0008a34e) cntbar_detail_list_pane_ParamLimits

0x90b4,	// (0x0008a34e) cntbar_detail_list_pane

0x9106,	// (0x0008a3a0) main_cntbar_detail_cont_pane_ParamLimits

0x9106,	// (0x0008a3a0) main_cntbar_detail_cont_pane

0xc333,	// (0x0008d5cd) scroll_pane_cp032_ParamLimits

0xc333,	// (0x0008d5cd) scroll_pane_cp032

0x911a,	// (0x0008a3b4) cntbar_detail_list_event_pane_ParamLimits

0x911a,	// (0x0008a3b4) cntbar_detail_list_event_pane

0x90c6,	// (0x0008a360) cntbar_detail_list_shct_pane

0xe0c2,	// (0x0008f35c) aid_list_gen

0xd9fe,	// (0x0008ec98) aid_scroll

0xda07,	// (0x0008eca1) aid_size_touch_scroll_bar

0x87a9,	// (0x00089a43) aid_list_double

0x912a,	// (0x0008a3c4) aid_list_single

0x912a,	// (0x0008a3c4) aid_list_single_lg

0x0911,	// (0x00081bab) aid_list_z_g_a_sm

0x9133,	// (0x0008a3cd) aid_list_z_g_d

0x0919,	// (0x00081bb3) aid_txt_z_prm

0x0927,	// (0x00081bc1) aid_txt_z_prm_cp01

0x0935,	// (0x00081bcf) aid_txt_z_sec

0x913b,	// (0x0008a3d5) main_cntbar_detail_cont_pane_g1_ParamLimits

0x913b,	// (0x0008a3d5) main_cntbar_detail_cont_pane_g1

0x914f,	// (0x0008a3e9) main_cntbar_detail_cont_pane_g2_ParamLimits

0x914f,	// (0x0008a3e9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd29,	// (0x00090fc3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd29,	// (0x00090fc3) main_cntbar_detail_cont_pane_g

0xda10,	// (0x0008ecaa) main_cntbar_detail_cont_pane_t1

0xda1e,	// (0x0008ecb8) main_cntbar_detail_cont_pane_t2

0xda2c,	// (0x0008ecc6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd2e,	// (0x00090fc8) main_cntbar_detail_cont_pane_t

0x915f,	// (0x0008a3f9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x915f,	// (0x0008a3f9) cell_cntbar_detail_list_shct_pane

0xda3a,	// (0x0008ecd4) cntbar_detail_list_shct_pane_g1

0xda43,	// (0x0008ecdd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd35,	// (0x00090fcf) cntbar_detail_list_shct_pane_g

0x9171,	// (0x0008a40b) cntbar_detail_list_event_pane_g1_ParamLimits

0x9171,	// (0x0008a40b) cntbar_detail_list_event_pane_g1

0x917d,	// (0x0008a417) cntbar_detail_list_event_pane_g2_ParamLimits

0x917d,	// (0x0008a417) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3a,	// (0x00090fd4) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3a,	// (0x00090fd4) cntbar_detail_list_event_pane_g

0x91eb,	// (0x0008a485) cntbar_detail_list_event_pane_t1_ParamLimits

0x91eb,	// (0x0008a485) cntbar_detail_list_event_pane_t1

0x9200,	// (0x0008a49a) cntbar_detail_list_event_pane_t2_ParamLimits

0x9200,	// (0x0008a49a) cntbar_detail_list_event_pane_t2

0x0002,

0xfd47,	// (0x00090fe1) cntbar_detail_list_event_pane_t_ParamLimits

0xfd47,	// (0x00090fe1) cntbar_detail_list_event_pane_t

0xdc4c,	// (0x0008eee6) cell_cntbar_detail_list_shct_pane_g1

0x2caa,	// (0x00083f44) navi_pane_mv_g3

0xcf46,	// (0x0008e1e0) main_cntbar_detail_pane_ParamLimits

0xc242,	// (0x0008d4dc) main_notif_wgt_pane

0xb3a1,	// (0x0008c63b) aid_tch_main_mp4_pane_g4

0xb619,	// (0x0008c8b3) popup_slider_window_cp02

0xc177,	// (0x0008d411) list_recal_day_event_pane

0x9080,	// (0x0008a31a) cntbar_detail_btn_pane_ParamLimits

0x9080,	// (0x0008a31a) cntbar_detail_btn_pane

0x9099,	// (0x0008a333) cntbar_detail_btn_pane_cp01_ParamLimits

0x9099,	// (0x0008a333) cntbar_detail_btn_pane_cp01

0x90c6,	// (0x0008a360) cntbar_detail_list_shct_pane_ParamLimits

0x90d6,	// (0x0008a370) cntbar_detail_pane_g1_ParamLimits

0x90d6,	// (0x0008a370) cntbar_detail_pane_g1

0x90ea,	// (0x0008a384) cntbar_detail_pane_t1_ParamLimits

0x90ea,	// (0x0008a384) cntbar_detail_pane_t1

0x9189,	// (0x0008a423) cntbar_detail_list_event_pane_g3_ParamLimits

0x9189,	// (0x0008a423) cntbar_detail_list_event_pane_g3

0x91a1,	// (0x0008a43b) cntbar_detail_list_event_pane_g4_ParamLimits

0x91a1,	// (0x0008a43b) cntbar_detail_list_event_pane_g4

0x91b9,	// (0x0008a453) cntbar_detail_list_event_pane_g5_ParamLimits

0x91b9,	// (0x0008a453) cntbar_detail_list_event_pane_g5

0x91d1,	// (0x0008a46b) cntbar_detail_list_event_pane_g6_ParamLimits

0x91d1,	// (0x0008a46b) cntbar_detail_list_event_pane_g6

0x9215,	// (0x0008a4af) cntbar_detail_list_event_pane_t3_ParamLimits

0x9215,	// (0x0008a4af) cntbar_detail_list_event_pane_t3

0x9227,	// (0x0008a4c1) popup_notif_wgt_window_ParamLimits

0x9227,	// (0x0008a4c1) popup_notif_wgt_window

0x9240,	// (0x0008a4da) popup_submenu_window_cp01_ParamLimits

0x9240,	// (0x0008a4da) popup_submenu_window_cp01

0xde48,	// (0x0008f0e2) bg_popup_window_pane_cp10

0xda4c,	// (0x0008ece6) listscroll_notif_wgt_pane

0xda5e,	// (0x0008ecf8) list_notif_wgt_window

0xda67,	// (0x0008ed01) scroll_pane_cp033

0x9254,	// (0x0008a4ee) list_notif_wgt_row_pane_ParamLimits

0x9254,	// (0x0008a4ee) list_notif_wgt_row_pane

0xda70,	// (0x0008ed0a) aid_size_list_notif_wgt_del

0xda7d,	// (0x0008ed17) list_notif_wgt_row_pane_g1

0xda89,	// (0x0008ed23) list_notif_wgt_row_pane_g2

0xda98,	// (0x0008ed32) list_notif_wgt_row_pane_g3

0x0002,

0x0011,	// (0x000812ab) list_notif_wgt_row_pane_g

0xdaa5,	// (0x0008ed3f) list_notif_wgt_row_pane_t1

0xdabb,	// (0x0008ed55) list_notif_wgt_row_pane_t2

0xdacd,	// (0x0008ed67) list_notif_wgt_row_pane_t3

0x0002,

0x0018,	// (0x000812b2) list_notif_wgt_row_pane_t

0xbb7e,	// (0x0008ce18) list_recal_day_event_pane_g1

0xdadf,	// (0x0008ed79) list_recal_day_event_pane_t1

0xc242,	// (0x0008d4dc) bg_button_pane_cp045

0x9264,	// (0x0008a4fe) cntbar_detail_btn_pane_t1

0xee4a,	// (0x000900e4) main_callh_pane_ParamLimits

0xee4a,	// (0x000900e4) main_callh_pane

0xc242,	// (0x0008d4dc) main_coverflow0_pane

0xc242,	// (0x0008d4dc) main_wgtman_pane

0x8633,	// (0x000898cd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8633,	// (0x000898cd) main_fs_bigclock_unlock_btn_pane

0x8b84,	// (0x00089e1e) bg_button_pane_cp16

0x8b94,	// (0x00089e2e) cell_tport_appsw_pane_g3

0x9272,	// (0x0008a50c) cf0_flow_pane_ParamLimits

0x9272,	// (0x0008a50c) cf0_flow_pane

0xdaee,	// (0x0008ed88) listscroll_cf0_pane

0xdaf9,	// (0x0008ed93) main_cf0_pane_g1

0x9287,	// (0x0008a521) main_cf0_pane_t1_ParamLimits

0x9287,	// (0x0008a521) main_cf0_pane_t1

0x929e,	// (0x0008a538) main_cf0_pane_t2_ParamLimits

0x929e,	// (0x0008a538) main_cf0_pane_t2

0x0001,

0xfd4e,	// (0x00090fe8) main_cf0_pane_t_ParamLimits

0xfd4e,	// (0x00090fe8) main_cf0_pane_t

0xdb0b,	// (0x0008eda5) scroll_pane_cp11

0x92b5,	// (0x0008a54f) cf0_flow_pane_g1

0x92c1,	// (0x0008a55b) cf0_flow_pane_g2

0x0001,

0xfd53,	// (0x00090fed) cf0_flow_pane_g

0x92cd,	// (0x0008a567) cf0_flow_pane_t1

0xc242,	// (0x0008d4dc) main_call6_pane

0xc242,	// (0x0008d4dc) main_calllock_pane

0x92df,	// (0x0008a579) call6_btn_grp_pane_ParamLimits

0x92df,	// (0x0008a579) call6_btn_grp_pane

0x92f9,	// (0x0008a593) call6_pane_g1_ParamLimits

0x92f9,	// (0x0008a593) call6_pane_g1

0x9312,	// (0x0008a5ac) popup_call6_1st_window_ParamLimits

0x9312,	// (0x0008a5ac) popup_call6_1st_window

0x9326,	// (0x0008a5c0) popup_call6_2nd_window_ParamLimits

0x9326,	// (0x0008a5c0) popup_call6_2nd_window

0x933a,	// (0x0008a5d4) cell_call6_btn_pane_ParamLimits

0x933a,	// (0x0008a5d4) cell_call6_btn_pane

0xde48,	// (0x0008f0e2) bg_popup_call2_in_pane_cp03

0xdb16,	// (0x0008edb0) popup_call6_1st_window_g1

0xdb1e,	// (0x0008edb8) popup_call6_1st_window_g2

0xdb26,	// (0x0008edc0) popup_call6_1st_window_g3

0x0002,

0x002e,	// (0x000812c8) popup_call6_1st_window_g

0xdb2e,	// (0x0008edc8) popup_call6_1st_window_t1

0xdb3d,	// (0x0008edd7) popup_call6_1st_window_t2

0xdb4d,	// (0x0008ede7) popup_call6_1st_window_t3

0x0002,

0x0035,	// (0x000812cf) popup_call6_1st_window_t

0xde48,	// (0x0008f0e2) bg_popup_call2_in_pane_cp04

0xdb5d,	// (0x0008edf7) popup_call6_2nd_window_g1

0xdb65,	// (0x0008edff) popup_call6_2nd_window_g2

0xdb6d,	// (0x0008ee07) popup_call6_2nd_window_g3

0x0002,

0x003c,	// (0x000812d6) popup_call6_2nd_window_g

0xdb75,	// (0x0008ee0f) popup_call6_2nd_window_t1

0xc242,	// (0x0008d4dc) bg_button_pane_cp15

0xdb84,	// (0x0008ee1e) cell_call6_btn_pane_g1

0xe364,	// (0x0008f5fe) cell_call6_btn_pane_t1

0x934e,	// (0x0008a5e8) listscroll_wgtman_pane_ParamLimits

0x934e,	// (0x0008a5e8) listscroll_wgtman_pane

0x936f,	// (0x0008a609) wgtman_btn_pane_ParamLimits

0x936f,	// (0x0008a609) wgtman_btn_pane

0xec37,	// (0x0008fed1) aid_scroll_copy1

0xdb8d,	// (0x0008ee27) list_wgtman_pane

0x93b2,	// (0x0008a64c) wgtman_btn_pane_g1_ParamLimits

0x93b2,	// (0x0008a64c) wgtman_btn_pane_g1

0x93de,	// (0x0008a678) wgtman_btn_pane_t1_ParamLimits

0x93de,	// (0x0008a678) wgtman_btn_pane_t1

0xdb97,	// (0x0008ee31) wgtman_btn_pane_t2_ParamLimits

0xdb97,	// (0x0008ee31) wgtman_btn_pane_t2

0x0001,

0xfd58,	// (0x00090ff2) wgtman_btn_pane_t_ParamLimits

0xfd58,	// (0x00090ff2) wgtman_btn_pane_t

0x941b,	// (0x0008a6b5) listrow_wgtman_pane_ParamLimits

0x941b,	// (0x0008a6b5) listrow_wgtman_pane

0x942f,	// (0x0008a6c9) listrow_wgtman_pane_g1

0x943c,	// (0x0008a6d6) listrow_wgtman_pane_g2

0x0001,

0xfd5d,	// (0x00090ff7) listrow_wgtman_pane_g

0x0943,	// (0x00081bdd) listrow_wgtman_pane_t1

0x095b,	// (0x00081bf5) listrow_wgtman_pane_t2

0x0001,

0xfd62,	// (0x00090ffc) listrow_wgtman_pane_t

0x0981,	// (0x00081c1b) wait_bar_pane_cp09

0xdbae,	// (0x0008ee48) main_calllock_btn_pane

0xdbb8,	// (0x0008ee52) main_calllock_pane_g1

0xc242,	// (0x0008d4dc) bg_button_pane_cp17

0xdb84,	// (0x0008ee1e) main_calllock_btn_pane_g1

0xdbc4,	// (0x0008ee5e) main_calllock_btn_pane_t1

0xc242,	// (0x0008d4dc) main_dialer3_pane

0xc242,	// (0x0008d4dc) main_fmrd2_pane

0xdc4c,	// (0x0008eee6) main_fs_bigclock_unlock_btn_pane_g1

0x9462,	// (0x0008a6fc) main_fs_bigclock_unlock_btn_pane_t1

0x9470,	// (0x0008a70a) area_fmrd2_info_pane_ParamLimits

0x9470,	// (0x0008a70a) area_fmrd2_info_pane

0x9481,	// (0x0008a71b) area_fmrd2_visual_pane_ParamLimits

0x9481,	// (0x0008a71b) area_fmrd2_visual_pane

0x948f,	// (0x0008a729) fmrd2_indi_pane_ParamLimits

0x948f,	// (0x0008a729) fmrd2_indi_pane

0x949c,	// (0x0008a736) area_fmrd2_visual_pane_g1

0x94a4,	// (0x0008a73e) area_fmrd2_visual_pane_t1

0x94b4,	// (0x0008a74e) area_fmrd2_visual_pane_t2

0x94c4,	// (0x0008a75e) area_fmrd2_visual_pane_t3

0x0002,

0xfd6c,	// (0x00091006) area_fmrd2_visual_pane_t

0x94d4,	// (0x0008a76e) area_fmrd2_info_pane_g1

0x94dc,	// (0x0008a776) area_fmrd2_info_pane_t1

0x94ec,	// (0x0008a786) area_fmrd2_info_pane_t2

0x94fc,	// (0x0008a796) area_fmrd2_info_pane_t3

0x950c,	// (0x0008a7a6) area_fmrd2_info_pane_t4

0x0003,

0xfd73,	// (0x0009100d) area_fmrd2_info_pane_t

0x951c,	// (0x0008a7b6) fmrd2_indi_pane_t1

0x952c,	// (0x0008a7c6) fmrd2_indi_pane_t2

0x953c,	// (0x0008a7d6) fmrd2_indi_pane_t3

0x0002,

0xfd7c,	// (0x00091016) fmrd2_indi_pane_t

0x86bc,	// (0x00089956) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x86bc,	// (0x00089956) list_single_fs_bigclock_indicator_pane_g5

0x8771,	// (0x00089a0b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x8771,	// (0x00089a0b) list_single_fs_bigclock_indicator_pane_t5

0x8d13,	// (0x00089fad) aid_cell_bcale_month_pane_ParamLimits

0x8d13,	// (0x00089fad) aid_cell_bcale_month_pane

0x8d31,	// (0x00089fcb) bcale_month_pane_ParamLimits

0x8d31,	// (0x00089fcb) bcale_month_pane

0x8d55,	// (0x00089fef) bcale_preview_pane_ParamLimits

0x8d55,	// (0x00089fef) bcale_preview_pane

0xd97f,	// (0x0008ec19) list_single_fs_bigclock_pane_t1_ParamLimits

0xd99e,	// (0x0008ec38) list_single_fs_bigclock_pane_t2_ParamLimits

0xd99e,	// (0x0008ec38) list_single_fs_bigclock_pane_t2

0x0001,

0xfd1f,	// (0x00090fb9) list_single_fs_bigclock_pane_t_ParamLimits

0xfd1f,	// (0x00090fb9) list_single_fs_bigclock_pane_t

0x945a,	// (0x0008a6f4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd67,	// (0x00091001) main_fs_bigclock_unlock_btn_pane_g

0x954c,	// (0x0008a7e6) aid_dia3_key_size_ParamLimits

0x954c,	// (0x0008a7e6) aid_dia3_key_size

0x9560,	// (0x0008a7fa) aid_dia3_listrow_size_ParamLimits

0x9560,	// (0x0008a7fa) aid_dia3_listrow_size

0x957a,	// (0x0008a814) dia3_keypad_fun_pane_ParamLimits

0x957a,	// (0x0008a814) dia3_keypad_fun_pane

0x9594,	// (0x0008a82e) dia3_keypad_num_pane_ParamLimits

0x9594,	// (0x0008a82e) dia3_keypad_num_pane

0x95ae,	// (0x0008a848) dia3_listscroll_pane_ParamLimits

0x95ae,	// (0x0008a848) dia3_listscroll_pane

0x95c4,	// (0x0008a85e) dia3_numentry_pane_ParamLimits

0x95c4,	// (0x0008a85e) dia3_numentry_pane

0xdbd3,	// (0x0008ee6d) dia3_list_pane

0x95de,	// (0x0008a878) scroll_pane_cp12

0xc242,	// (0x0008d4dc) bg_dia3_numentry_pane

0x95e9,	// (0x0008a883) dia3_numentry_pane_t1

0x95f8,	// (0x0008a892) cell_dia3_key_num_pane

0x9600,	// (0x0008a89a) cell_dia3_key0_fun_pane_ParamLimits

0x9600,	// (0x0008a89a) cell_dia3_key0_fun_pane

0x9614,	// (0x0008a8ae) cell_dia3_key1_fun_pane_ParamLimits

0x9614,	// (0x0008a8ae) cell_dia3_key1_fun_pane

0x9629,	// (0x0008a8c3) dia3_listrow_pane

0xc9ac,	// (0x0008dc46) bg_dia3_numentry_pane_g1

0xc242,	// (0x0008d4dc) bg_button_pane_cp21

0x963b,	// (0x0008a8d5) cell_dia3_key_num_pane_t1

0x9649,	// (0x0008a8e3) cell_dia3_key_num_pane_t2

0x9649,	// (0x0008a8e3) cell_dia3_key_num_pane_t3

0x9649,	// (0x0008a8e3) cell_dia3_key_num_pane_t4

0x0003,

0xfd83,	// (0x0009101d) cell_dia3_key_num_pane_t

0xc242,	// (0x0008d4dc) bg_button_pane_cp19

0x9658,	// (0x0008a8f2) cell_dia3_key0_fun_pane_g1

0xc242,	// (0x0008d4dc) bg_button_pane_cp20

0x9660,	// (0x0008a8fa) cell_dia3_key1_fun_pane_g1

0x9668,	// (0x0008a902) area_left_week_number_pane

0x9676,	// (0x0008a910) area_top_day_name_pane

0x9689,	// (0x0008a923) frame_month_view_pane

0xdbde,	// (0x0008ee78) grid_month_view_pane

0x969e,	// (0x0008a938) cell_top_day_name_pane_ParamLimits

0x969e,	// (0x0008a938) cell_top_day_name_pane

0x96cd,	// (0x0008a967) cell_area_left_week_number_pane_ParamLimits

0x96cd,	// (0x0008a967) cell_area_left_week_number_pane

0x96e3,	// (0x0008a97d) cell_month_view_pane_ParamLimits

0x96e3,	// (0x0008a97d) cell_month_view_pane

0xdbec,	// (0x0008ee86) frm_month_g1

0x9714,	// (0x0008a9ae) frm_month_g2

0x9727,	// (0x0008a9c1) frm_month_g3

0x973a,	// (0x0008a9d4) frm_month_g4

0x974d,	// (0x0008a9e7) frm_month_g5

0x9760,	// (0x0008a9fa) frm_month_g6

0x9775,	// (0x0008aa0f) frm_month_g7

0xdbf9,	// (0x0008ee93) frm_month_g8

0x978a,	// (0x0008aa24) frm_month_g9

0x979a,	// (0x0008aa34) frm_month_g10

0x97aa,	// (0x0008aa44) frm_month_g11

0x97ba,	// (0x0008aa54) frm_month_g12

0x97cc,	// (0x0008aa66) frm_month_g13

0x97e0,	// (0x0008aa7a) frm_month_g14

0x97f4,	// (0x0008aa8e) frm_month_g15

0x9808,	// (0x0008aaa2) frm_month_g16

0x000f,

0xfd8c,	// (0x00091026) frm_month_g

0xdc06,	// (0x0008eea0) cell_top_day_name_pane_t1

0x981c,	// (0x0008aab6) cell_area_left_week_number_pane_g1

0x9828,	// (0x0008aac2) cell_area_left_week_number_pane_t1

0xd58b,	// (0x0008e825) cell_month_view_pane_g1

0x983b,	// (0x0008aad5) cell_month_view_pane_t1

0xc242,	// (0x0008d4dc) main_fps_pane

0xcd5a,	// (0x0008dff4) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xcd5a,	// (0x0008dff4) cmail_ddmenu_btn02_pane_cp1

0xcd76,	// (0x0008e010) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xcd76,	// (0x0008e010) cmail_ddmenu_btn02_pane_cp2

0x8f3b,	// (0x0008a1d5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f3b,	// (0x0008a1d5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd2,	// (0x00090f6c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd2,	// (0x00090f6c) cmail_ddmenu_btn02_pane_g

0x8f5c,	// (0x0008a1f6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f5c,	// (0x0008a1f6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcd7,	// (0x00090f71) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcd7,	// (0x00090f71) cmail_ddmenu_btn02_pane_t

0x984e,	// (0x0008aae8) fps_text_pane_ParamLimits

0x984e,	// (0x0008aae8) fps_text_pane

0x9865,	// (0x0008aaff) main_fps_pane_g1_ParamLimits

0x9865,	// (0x0008aaff) main_fps_pane_g1

0x987d,	// (0x0008ab17) wait_bar_pane_cp010_ParamLimits

0x987d,	// (0x0008ab17) wait_bar_pane_cp010

0x9890,	// (0x0008ab2a) fps_text_pane_t1_ParamLimits

0x9890,	// (0x0008ab2a) fps_text_pane_t1

0xd5c9,	// (0x0008e863) cam4_image_uncrop_pane_g1

0xd5d2,	// (0x0008e86c) cam4_image_uncrop_pane_g2

0x6acf,	// (0x00087d69) cam4_image_uncrop_pane_g3

0x6ad8,	// (0x00087d72) cam4_image_uncrop_pane_g4

0x0003,

0xf816,	// (0x00090ab0) cam4_image_uncrop_pane_g

0x9629,	// (0x0008a8c3) dia3_listrow_pane_ParamLimits

0xc242,	// (0x0008d4dc) main_phob2_pane

0x8b2e,	// (0x00089dc8) cell_tport_appsw_pane_cp02_ParamLimits

0x8b2e,	// (0x00089dc8) cell_tport_appsw_pane_cp02

0x8b42,	// (0x00089ddc) cell_tport_appsw_pane_cp03_ParamLimits

0x8b42,	// (0x00089ddc) cell_tport_appsw_pane_cp03

0xc242,	// (0x0008d4dc) phob2_contact_card_pane

0xc242,	// (0x0008d4dc) phob2_listscroll_pane

0xdc19,	// (0x0008eeb3) phob2_list_pane

0xdc21,	// (0x0008eebb) scroll_pane_cp034

0x98a8,	// (0x0008ab42) phob2_cc_data_pane_ParamLimits

0x98a8,	// (0x0008ab42) phob2_cc_data_pane

0x98c1,	// (0x0008ab5b) phob2_cc_listscroll_pane_ParamLimits

0x98c1,	// (0x0008ab5b) phob2_cc_listscroll_pane

0x98e2,	// (0x0008ab7c) list_double_large_graphic_phob2_pane_ParamLimits

0x98e2,	// (0x0008ab7c) list_double_large_graphic_phob2_pane

0x98f6,	// (0x0008ab90) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98f6,	// (0x0008ab90) list_double_large_graphic_phob2_pane_g1

0x0993,	// (0x00081c2d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0993,	// (0x00081c2d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdad,	// (0x00091047) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdad,	// (0x00091047) list_double_large_graphic_phob2_pane_g

0x09ab,	// (0x00081c45) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x09ab,	// (0x00081c45) list_double_large_graphic_phob2_pane_t1

0x09c0,	// (0x00081c5a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x09c0,	// (0x00081c5a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdb6,	// (0x00091050) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdb6,	// (0x00091050) list_double_large_graphic_phob2_pane_t

0xc242,	// (0x0008d4dc) list_highlight_pane_cp024

0x9911,	// (0x0008abab) phob2_cc_button_pane

0x991d,	// (0x0008abb7) phob2_cc_data_pane_g1_ParamLimits

0x991d,	// (0x0008abb7) phob2_cc_data_pane_g1

0x9933,	// (0x0008abcd) phob2_cc_data_pane_g2_ParamLimits

0x9933,	// (0x0008abcd) phob2_cc_data_pane_g2

0x0001,

0xfdbb,	// (0x00091055) phob2_cc_data_pane_g_ParamLimits

0xfdbb,	// (0x00091055) phob2_cc_data_pane_g

0x994b,	// (0x0008abe5) phob2_cc_data_pane_t1_ParamLimits

0x994b,	// (0x0008abe5) phob2_cc_data_pane_t1

0x997b,	// (0x0008ac15) phob2_cc_data_pane_t2_ParamLimits

0x997b,	// (0x0008ac15) phob2_cc_data_pane_t2

0x99ab,	// (0x0008ac45) phob2_cc_data_pane_t3_ParamLimits

0x99ab,	// (0x0008ac45) phob2_cc_data_pane_t3

0x0002,

0xfdc0,	// (0x0009105a) phob2_cc_data_pane_t_ParamLimits

0xfdc0,	// (0x0009105a) phob2_cc_data_pane_t

0xdc29,	// (0x0008eec3) phob2_cc_list_pane_ParamLimits

0xdc29,	// (0x0008eec3) phob2_cc_list_pane

0xc33f,	// (0x0008d5d9) scroll_pane_cp035_ParamLimits

0xc33f,	// (0x0008d5d9) scroll_pane_cp035

0xcf46,	// (0x0008e1e0) bg_button_pane_cp033

0x99db,	// (0x0008ac75) phob2_cc_button_pane_g1

0x99e7,	// (0x0008ac81) phob2_cc_button_pane_t1

0x99fc,	// (0x0008ac96) phob2_cc_button_pane_t2

0x0001,

0xfdc7,	// (0x00091061) phob2_cc_button_pane_t

0x9a0e,	// (0x0008aca8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a0e,	// (0x0008aca8) list_double_large_graphic_phob2_cc_pane

0x9a45,	// (0x0008acdf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a45,	// (0x0008acdf) list_double_large_graphic_phob2_cc_pane_g1

0x09d5,	// (0x00081c6f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x09d5,	// (0x00081c6f) list_double_large_graphic_phob2_cc_pane_g2

0x09e1,	// (0x00081c7b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x09e1,	// (0x00081c7b) list_double_large_graphic_phob2_cc_pane_g3

0x09ed,	// (0x00081c87) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x09ed,	// (0x00081c87) list_double_large_graphic_phob2_cc_pane_g4

0x09f9,	// (0x00081c93) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x09f9,	// (0x00081c93) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdcc,	// (0x00091066) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdcc,	// (0x00091066) list_double_large_graphic_phob2_cc_pane_g

0x0a05,	// (0x00081c9f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0a05,	// (0x00081c9f) list_double_large_graphic_phob2_cc_pane_t1

0x0a2e,	// (0x00081cc8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0a2e,	// (0x00081cc8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdd7,	// (0x00091071) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdd7,	// (0x00091071) list_double_large_graphic_phob2_cc_pane_t

0xdc35,	// (0x0008eecf) list_highlight_pane_cp025_ParamLimits

0xdc35,	// (0x0008eecf) list_highlight_pane_cp025

0xcf46,	// (0x0008e1e0) bg_button_pane_cp033_ParamLimits

0x99db,	// (0x0008ac75) phob2_cc_button_pane_g1_ParamLimits

0x99e7,	// (0x0008ac81) phob2_cc_button_pane_t1_ParamLimits

0x99fc,	// (0x0008ac96) phob2_cc_button_pane_t2_ParamLimits

0xfdc7,	// (0x00091061) phob2_cc_button_pane_t_ParamLimits

0x0c8d,	// (0x00081f27) popup_wgtman_window

0xba00,	// (0x0008cc9a) scroll_pane_cp038

0x9394,	// (0x0008a62e) wgtman_btn_pane_cp_01_ParamLimits

0x9394,	// (0x0008a62e) wgtman_btn_pane_cp_01

0xdc43,	// (0x0008eedd) wgtman_content_pane

0xe373,	// (0x0008f60d) wgtman_heading_pane

0xc242,	// (0x0008d4dc) bg_heading_pane_cp02

0xe37c,	// (0x0008f616) wgtman_heading_pane_g1

0xe384,	// (0x0008f61e) wgtman_heading_pane_t1

0xe392,	// (0x0008f62c) scroll_pane_cp036

0xe39a,	// (0x0008f634) wgtman_list_pane

0xd5dd,	// (0x0008e877) wgtman_list_pane_t1_ParamLimits

0xd5dd,	// (0x0008e877) wgtman_list_pane_t1

0xb748,	// (0x0008c9e2) cam4_grid_pane

0x0397,	// (0x00081631) bg_button_pane_cp015_ParamLimits

0x7746,	// (0x000889e0) bg_button_pane_cp016_ParamLimits

0x7752,	// (0x000889ec) bg_button_pane_cp017_ParamLimits

0x776d,	// (0x00088a07) popup_vitu2_query_window_g3_ParamLimits

0x776d,	// (0x00088a07) popup_vitu2_query_window_g3

0x045d,	// (0x000816f7) popup_vitu2_query_window_t6_ParamLimits

0x045d,	// (0x000816f7) popup_vitu2_query_window_t6

0x0488,	// (0x00081722) popup_vitu2_query_window_t7_ParamLimits

0x0488,	// (0x00081722) popup_vitu2_query_window_t7

0xd5c9,	// (0x0008e863) cam4_grid_pane_g1

0xd5d2,	// (0x0008e86c) cam4_grid_pane_g2

0xe3a2,	// (0x0008f63c) cam4_grid_pane_g3

0xe3ab,	// (0x0008f645) cam4_grid_pane_g4

0x0003,

0xfddc,	// (0x00091076) cam4_grid_pane_g

0x17bb,	// (0x00082a55) aid_placing_vt_slider_lsc_ParamLimits

0x1aa8,	// (0x00082d42) vidtel_button_pane_ParamLimits

0x1aa8,	// (0x00082d42) vidtel_button_pane

0xc242,	// (0x0008d4dc) bg_button_pane_cp034

0xe3b6,	// (0x0008f650) vidtel_button_pane_g1

0xe3be,	// (0x0008f658) vidtel_button_pane_t1

0xbb32,	// (0x0008cdcc) aid_size_vtel_slider_touch

0xc33f,	// (0x0008d5d9) scroll_pane_cp039

0x839d,	// (0x00089637) ncim_query_button_pane_cp01_ParamLimits

0x83bc,	// (0x00089656) ncimui_query_pane_g1_ParamLimits

0xcf46,	// (0x0008e1e0) input_focus_pane_cp012_ParamLimits

0xc9ea,	// (0x0008dc84) ncim_query_entry_pane_t1_ParamLimits

0xc33f,	// (0x0008d5d9) scroll_pane_cp039_ParamLimits

0x2c1c,	// (0x00083eb6) navi_pane_bcale_mc_g1

0x2c24,	// (0x00083ebe) navi_pane_bcale_mc_t1

0xcdac,	// (0x0008e046) main_sp_fs_email_pane_g1

0xcdb8,	// (0x0008e052) main_sp_fs_email_pane_g2

0x0001,

0xfc02,	// (0x00090e9c) main_sp_fs_email_pane_g

0xd6df,	// (0x0008e979) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd6df,	// (0x0008e979) list_single_cale_mrui_row_pane_g3

0x08ed,	// (0x00081b87) list_single_recal_day_pane_g5_event_pane

0xc1d5,	// (0x0008d46f) list_single_recal_day_pane_g7

0xe3d4,	// (0x0008f66e) list_recal_day_event_pane_cp01

0xe3dd,	// (0x0008f677) list_recal_vselct_arw_lo_pane_cp01

0xe3e5,	// (0x0008f67f) list_recal_vselct_arw_up_pane_cp01

0xe3ed,	// (0x0008f687) list_recal_vselct_pane_cp01

0xbb7e,	// (0x0008ce18) list_recal_day_event_pane_cp01_g1

0xc20a,	// (0x0008d4a4) list_recal_day_event_pane_cp01_t1

0xc1dd,	// (0x0008d477) list_single_recal_day_pane_t1_ParamLimits

0xc1ef,	// (0x0008d489) list_single_recal_day_pane_t2_ParamLimits

0xfce7,	// (0x00090f81) list_single_recal_day_pane_t_ParamLimits

0xd51e,	// (0x0008e7b8) bg_notes_pane_ParamLimits

0xdc88,	// (0x0008ef22) list_notes_pane_ParamLimits

0x0da5,	// (0x0008203f) scroll_pane_cp06_ParamLimits

0xdcaa,	// (0x0008ef44) main_notes_pane_ParamLimits

0xcf46,	// (0x0008e1e0) main_welc_pane

0x9a7f,	// (0x0008ad19) main_welc_body_pane_ParamLimits

0x9a7f,	// (0x0008ad19) main_welc_body_pane

0x9a9e,	// (0x0008ad38) main_welc_opti_pane_ParamLimits

0x9a9e,	// (0x0008ad38) main_welc_opti_pane

0x9b2c,	// (0x0008adc6) main_welc_pane_t1_ParamLimits

0x9b2c,	// (0x0008adc6) main_welc_pane_t1

0x9d54,	// (0x0008afee) main_welc_body_row_pane_ParamLimits

0x9d54,	// (0x0008afee) main_welc_body_row_pane

0xc325,	// (0x0008d5bf) main_welc_opti_row_pane_ParamLimits

0xc325,	// (0x0008d5bf) main_welc_opti_row_pane

0xe407,	// (0x0008f6a1) main_welc_opti_row_pane_g1

0x9d68,	// (0x0008b002) main_welc_opti_row_pane_t1

0xe40f,	// (0x0008f6a9) main_welc_body_row_pane_t1

0xda56,	// (0x0008ecf0) popup_notif_wgt_heading_pane

0xda70,	// (0x0008ed0a) aid_size_list_notif_wgt_del_ParamLimits

0xda7d,	// (0x0008ed17) list_notif_wgt_row_pane_g1_ParamLimits

0xda89,	// (0x0008ed23) list_notif_wgt_row_pane_g2_ParamLimits

0xda98,	// (0x0008ed32) list_notif_wgt_row_pane_g3_ParamLimits

0x0011,	// (0x000812ab) list_notif_wgt_row_pane_g_ParamLimits

0xdaa5,	// (0x0008ed3f) list_notif_wgt_row_pane_t1_ParamLimits

0xdabb,	// (0x0008ed55) list_notif_wgt_row_pane_t2_ParamLimits

0xdacd,	// (0x0008ed67) list_notif_wgt_row_pane_t3_ParamLimits

0x0018,	// (0x000812b2) list_notif_wgt_row_pane_t_ParamLimits

0x942f,	// (0x0008a6c9) listrow_wgtman_pane_g1_ParamLimits

0x943c,	// (0x0008a6d6) listrow_wgtman_pane_g2_ParamLimits

0xfd5d,	// (0x00090ff7) listrow_wgtman_pane_g_ParamLimits

0x0943,	// (0x00081bdd) listrow_wgtman_pane_t1_ParamLimits

0x095b,	// (0x00081bf5) listrow_wgtman_pane_t2_ParamLimits

0xfd62,	// (0x00090ffc) listrow_wgtman_pane_t_ParamLimits

0x0981,	// (0x00081c1b) wait_bar_pane_cp09_ParamLimits

0xc242,	// (0x0008d4dc) bg_popup_heading_pane_cp02

0xe41e,	// (0x0008f6b8) popup_notif_wgt_heading_pane_g1

0xe426,	// (0x0008f6c0) popup_notif_wgt_heading_pane_t1

0xc242,	// (0x0008d4dc) main_vids_pane

0xc242,	// (0x0008d4dc) vids_listscroll_pane

0x9d77,	// (0x0008b011) scroll_pane_cp040

0xc242,	// (0x0008d4dc) vids_list_pane

0x9d82,	// (0x0008b01c) vids_list_double_pane_ParamLimits

0x9d82,	// (0x0008b01c) vids_list_double_pane

0x9d95,	// (0x0008b02f) vids_list_double_pane_g1

0x9d9e,	// (0x0008b038) vids_list_double_pane_t1

0x9dae,	// (0x0008b048) vids_list_double_pane_t2

0x0001,

0xfdfb,	// (0x00091095) vids_list_double_pane_t

0xcf46,	// (0x0008e1e0) main_ncimui_pane_ParamLimits

0x81d3,	// (0x0008946d) main_ncimui_pane_g1_ParamLimits

0x81df,	// (0x00089479) main_ncimui_pane_g2_ParamLimits

0x81df,	// (0x00089479) main_ncimui_pane_g2

0x0001,

0xfb08,	// (0x00090da2) main_ncimui_pane_g_ParamLimits

0xfb08,	// (0x00090da2) main_ncimui_pane_g

0x9abd,	// (0x0008ad57) main_welc_pane_g1_ParamLimits

0x9abd,	// (0x0008ad57) main_welc_pane_g1

0x9ad2,	// (0x0008ad6c) main_welc_pane_g2_ParamLimits

0x9ad2,	// (0x0008ad6c) main_welc_pane_g2

0x0003,

0xfde5,	// (0x0009107f) main_welc_pane_g_ParamLimits

0xfde5,	// (0x0009107f) main_welc_pane_g

0xd51e,	// (0x0008e7b8) listscroll_mce_pane_ParamLimits

0x2cfc,	// (0x00083f96) wait_bar_pane_cp10

0x488e,	// (0x00085b28) main_cale_day_pane_ParamLimits

0x488e,	// (0x00085b28) main_cale_week_pane_ParamLimits

0xd51e,	// (0x0008e7b8) main_messa_pane_ParamLimits

0x5f7d,	// (0x00087217) main_clock2_btn_pane_ParamLimits

0x5f7d,	// (0x00087217) main_clock2_btn_pane

0xafe0,	// (0x0008c27a) main_clock2_btn_pane_cp01_ParamLimits

0xafe0,	// (0x0008c27a) main_clock2_btn_pane_cp01

0xd6b0,	// (0x0008e94a) list_cale_mrui_pane_ParamLimits

0xdb03,	// (0x0008ed9d) main_cf0_pane_g2

0x0001,

0x001f,	// (0x000812b9) main_cf0_pane_g

0x9668,	// (0x0008a902) area_left_week_number_pane_ParamLimits

0x9676,	// (0x0008a910) area_top_day_name_pane_ParamLimits

0x9689,	// (0x0008a923) frame_month_view_pane_ParamLimits

0xdbde,	// (0x0008ee78) grid_month_view_pane_ParamLimits

0xdbec,	// (0x0008ee86) frm_month_g1_ParamLimits

0x9714,	// (0x0008a9ae) frm_month_g2_ParamLimits

0x9727,	// (0x0008a9c1) frm_month_g3_ParamLimits

0x973a,	// (0x0008a9d4) frm_month_g4_ParamLimits

0x974d,	// (0x0008a9e7) frm_month_g5_ParamLimits

0x9760,	// (0x0008a9fa) frm_month_g6_ParamLimits

0x9775,	// (0x0008aa0f) frm_month_g7_ParamLimits

0xdbf9,	// (0x0008ee93) frm_month_g8_ParamLimits

0x978a,	// (0x0008aa24) frm_month_g9_ParamLimits

0x979a,	// (0x0008aa34) frm_month_g10_ParamLimits

0x97aa,	// (0x0008aa44) frm_month_g11_ParamLimits

0x97ba,	// (0x0008aa54) frm_month_g12_ParamLimits

0x97cc,	// (0x0008aa66) frm_month_g13_ParamLimits

0x97e0,	// (0x0008aa7a) frm_month_g14_ParamLimits

0x97f4,	// (0x0008aa8e) frm_month_g15_ParamLimits

0x9808,	// (0x0008aaa2) frm_month_g16_ParamLimits

0xfd8c,	// (0x00091026) frm_month_g_ParamLimits

0xdc06,	// (0x0008eea0) cell_top_day_name_pane_t1_ParamLimits

0x981c,	// (0x0008aab6) cell_area_left_week_number_pane_g1_ParamLimits

0x9828,	// (0x0008aac2) cell_area_left_week_number_pane_t1_ParamLimits

0xd58b,	// (0x0008e825) cell_month_view_pane_g1_ParamLimits

0x983b,	// (0x0008aad5) cell_month_view_pane_t1_ParamLimits

0xd516,	// (0x0008e7b0) main_clock2_btn_pane_g1

0xe434,	// (0x0008f6ce) main_clock2_btn_pane_t1

0xcf46,	// (0x0008e1e0) listscroll_cmail_pane_ParamLimits

0xcdac,	// (0x0008e046) main_sp_fs_email_pane_g1_ParamLimits

0xcdb8,	// (0x0008e052) main_sp_fs_email_pane_g2_ParamLimits

0xfc02,	// (0x00090e9c) main_sp_fs_email_pane_g_ParamLimits

0xd7e0,	// (0x0008ea7a) list_recal_day_pane_ParamLimits

0xd7f1,	// (0x0008ea8b) mian_recal_day_pane_t1

0x06e3,	// (0x0008197d) list_single_dyc_row_text_pane_t4_ParamLimits

0x06e3,	// (0x0008197d) list_single_dyc_row_text_pane_t4

0x072c,	// (0x000819c6) list_single_dyc_row_text_pane_t5_ParamLimits

0x072c,	// (0x000819c6) list_single_dyc_row_text_pane_t5

0xbfb1,	// (0x0008d24b) list_single_dyc_row_text_pane_t6_ParamLimits

0xbfb1,	// (0x0008d24b) list_single_dyc_row_text_pane_t6

0x286b,	// (0x00083b05) aid_mgn_list_cale_time_pane

0xcf46,	// (0x0008e1e0) main_gallery2_pane_ParamLimits

0xaff4,	// (0x0008c28e) main_clock2_pane_cp01_t1

0xb002,	// (0x0008c29c) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x0009098c) main_clock2_pane_cp01_t

0x11c3,	// (0x0008245d) cale_week_scroll_pane_g16_ParamLimits

0x11c3,	// (0x0008245d) cale_week_scroll_pane_g16

0xde48,	// (0x0008f0e2) vorec_slider_pane

0xe3be,	// (0x0008f658) vidtel_button_pane_t1_ParamLimits

0x8fca,	// (0x0008a264) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8fca,	// (0x0008a264) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8fdd,	// (0x0008a277) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8fdd,	// (0x0008a277) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0a,	// (0x00090fa4) main_fs_bigclock_clock_pane_g_ParamLimits

0x8ff4,	// (0x0008a28e) main_fs_bigclock_clock_pane_t1_ParamLimits

0x900a,	// (0x0008a2a4) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd13,	// (0x00090fad) main_fs_bigclock_clock_pane_t_ParamLimits

0x57a5,	// (0x00086a3f) main_mup3_lyrics_pane_ParamLimits

0x57a5,	// (0x00086a3f) main_mup3_lyrics_pane

0x9dd6,	// (0x0008b070) main_mup3_lyrics_pane_t1_ParamLimits

0x9dd6,	// (0x0008b070) main_mup3_lyrics_pane_t1

0xb38b,	// (0x0008c625) aid_main_mp4_pane_t1_area

0xb395,	// (0x0008c62f) aid_main_mp4_pane_t2_area

0xb43f,	// (0x0008c6d9) main_mp4_pane_g7_ParamLimits

0xb43f,	// (0x0008c6d9) main_mp4_pane_g7

0xb44b,	// (0x0008c6e5) main_mp4_pane_g8_ParamLimits

0xb44b,	// (0x0008c6e5) main_mp4_pane_g8

0x6896,	// (0x00087b30) aid_call6_pane_g1_size

0x9a2d,	// (0x0008acc7) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9a2d,	// (0x0008acc7) list_double_large_graphic_phob2_other_pane

0xe1d6,	// (0x0008f470) list_double_large_graphic_phob2_other_pane_g1

0xc242,	// (0x0008d4dc) list_highlight_pane_cp026

0xcf46,	// (0x0008e1e0) main_welc_pane_ParamLimits

0x899d,	// (0x00089c37) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x899d,	// (0x00089c37) main_sp_fs_ctrlbar_pane_g3

0x89b7,	// (0x00089c51) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x89b7,	// (0x00089c51) main_sp_fs_ctrlbar_pane_g4

0x89eb,	// (0x00089c85) toolbar2_fixed_button_pane_cp01

0x89f6,	// (0x00089c90) toolbar2_fixed_button_pane_cp02

0x8a03,	// (0x00089c9d) toolbar2_fixed_button_pane_cp03

0x9a64,	// (0x0008acfe) list_welc_entry_pane_ParamLimits

0x9a64,	// (0x0008acfe) list_welc_entry_pane

0x9ae7,	// (0x0008ad81) main_welc_pane_g3_ParamLimits

0x9ae7,	// (0x0008ad81) main_welc_pane_g3

0x9b4e,	// (0x0008ade8) main_welc_pane_t2_ParamLimits

0x9b4e,	// (0x0008ade8) main_welc_pane_t2

0x9b71,	// (0x0008ae0b) main_welc_pane_t3_ParamLimits

0x9b71,	// (0x0008ae0b) main_welc_pane_t3

0x0005,

0xfdee,	// (0x00091088) main_welc_pane_t_ParamLimits

0xfdee,	// (0x00091088) main_welc_pane_t

0x9ca9,	// (0x0008af43) welc_button_pane_ParamLimits

0x9ca9,	// (0x0008af43) welc_button_pane

0x9d3c,	// (0x0008afd6) welc_service_logo_pane_ParamLimits

0x9d3c,	// (0x0008afd6) welc_service_logo_pane

0x9df1,	// (0x0008b08b) list_single_welc_entry_pane_ParamLimits

0x9df1,	// (0x0008b08b) list_single_welc_entry_pane

0x9e02,	// (0x0008b09c) list_single_welc_entry_pane_g1

0x9e0a,	// (0x0008b0a4) list_single_welc_entry_pane_t1

0x9e18,	// (0x0008b0b2) list_single_welc_entry_pane_t2

0x0001,

0xfe00,	// (0x0009109a) list_single_welc_entry_pane_t

0xc242,	// (0x0008d4dc) bg_button_pane_cp035

0xe442,	// (0x0008f6dc) welc_button_pane_t1

0x9e26,	// (0x0008b0c0) welc_service_logo_pane_g1

0x9e2f,	// (0x0008b0c9) welc_service_logo_pane_g2

0x0001,

0xfe05,	// (0x0009109f) welc_service_logo_pane_g

0xc242,	// (0x0008d4dc) main_int_radio_pane

0xc888,	// (0x0008db22) list_single_fs_dyc_pane_g1

0x099f,	// (0x00081c39) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x099f,	// (0x00081c39) list_double_large_graphic_phob2_pane_g3

0x9903,	// (0x0008ab9d) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9903,	// (0x0008ab9d) list_double_large_graphic_phob2_pane_g4

0x9e38,	// (0x0008b0d2) main_int_radio1_pane_ParamLimits

0x9e38,	// (0x0008b0d2) main_int_radio1_pane

0xe450,	// (0x0008f6ea) find_pane_cp02

0x9e55,	// (0x0008b0ef) input_focus_pane_cp12_ParamLimits

0x9e55,	// (0x0008b0ef) input_focus_pane_cp12

0x9e65,	// (0x0008b0ff) input_focus_pane_cp13_ParamLimits

0x9e65,	// (0x0008b0ff) input_focus_pane_cp13

0x9e79,	// (0x0008b113) input_focus_pane_cp14_ParamLimits

0x9e79,	// (0x0008b113) input_focus_pane_cp14

0xe459,	// (0x0008f6f3) int_radio1_listscroll_pane

0x9e8d,	// (0x0008b127) main_int_radio1_pane_g1_ParamLimits

0x9e8d,	// (0x0008b127) main_int_radio1_pane_g1

0x9ea3,	// (0x0008b13d) main_int_radio1_pane_t1_ParamLimits

0x9ea3,	// (0x0008b13d) main_int_radio1_pane_t1

0x9ebc,	// (0x0008b156) main_int_radio1_pane_t2_ParamLimits

0x9ebc,	// (0x0008b156) main_int_radio1_pane_t2

0x9ed7,	// (0x0008b171) main_int_radio1_pane_t3_ParamLimits

0x9ed7,	// (0x0008b171) main_int_radio1_pane_t3

0x9ef2,	// (0x0008b18c) main_int_radio1_pane_t4_ParamLimits

0x9ef2,	// (0x0008b18c) main_int_radio1_pane_t4

0xe463,	// (0x0008f6fd) main_int_radio1_pane_t5_ParamLimits

0xe463,	// (0x0008f6fd) main_int_radio1_pane_t5

0x9f04,	// (0x0008b19e) main_int_radio1_pane_t6_ParamLimits

0x9f04,	// (0x0008b19e) main_int_radio1_pane_t6

0x9f19,	// (0x0008b1b3) main_int_radio1_pane_t7_ParamLimits

0x9f19,	// (0x0008b1b3) main_int_radio1_pane_t7

0x9f2e,	// (0x0008b1c8) main_int_radio1_pane_t8_ParamLimits

0x9f2e,	// (0x0008b1c8) main_int_radio1_pane_t8

0x9f4b,	// (0x0008b1e5) main_int_radio1_pane_t9_ParamLimits

0x9f4b,	// (0x0008b1e5) main_int_radio1_pane_t9

0x9f5d,	// (0x0008b1f7) main_int_radio1_pane_t10_ParamLimits

0x9f5d,	// (0x0008b1f7) main_int_radio1_pane_t10

0x9f83,	// (0x0008b21d) main_int_radio1_pane_t11_ParamLimits

0x9f83,	// (0x0008b21d) main_int_radio1_pane_t11

0x9fa9,	// (0x0008b243) main_int_radio1_pane_t12_ParamLimits

0x9fa9,	// (0x0008b243) main_int_radio1_pane_t12

0x000b,

0xfe0a,	// (0x000910a4) main_int_radio1_pane_t_ParamLimits

0xfe0a,	// (0x000910a4) main_int_radio1_pane_t

0xdc19,	// (0x0008eeb3) int_radio_list_pane

0xdc21,	// (0x0008eebb) scroll_pane_cp037

0xe475,	// (0x0008f70f) list_double_large_graphic_int_radio_pane_ParamLimits

0xe475,	// (0x0008f70f) list_double_large_graphic_int_radio_pane

0xe489,	// (0x0008f723) list_double_large_graphic_int_radio_pane_g1

0xc226,	// (0x0008d4c0) list_double_large_graphic_int_radio_pane_t1

0xc234,	// (0x0008d4ce) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe23,	// (0x000910bd) list_double_large_graphic_int_radio_pane_t

0xc242,	// (0x0008d4dc) list_highlight_pane_cp027

0xe3f7,	// (0x0008f691) main_button_pane_4

0x9afb,	// (0x0008ad95) main_welc_pane_g4_ParamLimits

0x9afb,	// (0x0008ad95) main_welc_pane_g4

0x9b94,	// (0x0008ae2e) main_welc_pane_t4_ParamLimits

0x9b94,	// (0x0008ae2e) main_welc_pane_t4

0x9bab,	// (0x0008ae45) main_welc_pane_t5_ParamLimits

0x9bab,	// (0x0008ae45) main_welc_pane_t5

0x9bea,	// (0x0008ae84) main_welc_pane_t6_ParamLimits

0x9bea,	// (0x0008ae84) main_welc_pane_t6

0x9cbe,	// (0x0008af58) welc_button_pane_2_ParamLimits

0x9cbe,	// (0x0008af58) welc_button_pane_2

0x9ce1,	// (0x0008af7b) welc_button_pane_3_ParamLimits

0x9ce1,	// (0x0008af7b) welc_button_pane_3

0xe3ff,	// (0x0008f699) welc_button_pane_4

0x9d09,	// (0x0008afa3) welc_button_pane_5_ParamLimits

0x9d09,	// (0x0008afa3) welc_button_pane_5

0x0a93,	// (0x00081d2d) main_popup_welc_pane

0xe4aa,	// (0x0008f744) main_welc_sk_g3

0xe4b4,	// (0x0008f74e) main_welc_sk_g4

0xe4be,	// (0x0008f758) main_welc_sk_t3

0xe4ce,	// (0x0008f768) main_welc_sk_t4

0xe4de,	// (0x0008f778) popup_welc_pane_t4

0xe4ec,	// (0x0008f786) popup_welc_pane_t5

0xe4fa,	// (0x0008f794) popup_welc_pane_t6

0xc242,	// (0x0008d4dc) main_acti_pane

0xc242,	// (0x0008d4dc) main_sso_pane

0x9fbb,	// (0x0008b255) sso_body_pane_ParamLimits

0x9fbb,	// (0x0008b255) sso_body_pane

0x9fd0,	// (0x0008b26a) sso_logo_pane_ParamLimits

0x9fd0,	// (0x0008b26a) sso_logo_pane

0xa009,	// (0x0008b2a3) sso_sk_pane_ParamLimits

0xa009,	// (0x0008b2a3) sso_sk_pane

0xe53c,	// (0x0008f7d6) main_sso_logo_pane_g1

0xa01b,	// (0x0008b2b5) sso_sk_pane_t1_ParamLimits

0xa01b,	// (0x0008b2b5) sso_sk_pane_t1

0xa035,	// (0x0008b2cf) sso_sk_pane_t2_ParamLimits

0xa035,	// (0x0008b2cf) sso_sk_pane_t2

0x0001,

0xfe28,	// (0x000910c2) sso_sk_pane_t_ParamLimits

0xfe28,	// (0x000910c2) sso_sk_pane_t

0xe547,	// (0x0008f7e1) aid_sso_gap

0xe550,	// (0x0008f7ea) aid_sso_txt1

0xe55a,	// (0x0008f7f4) aid_sso_txt2

0xe564,	// (0x0008f7fe) aid_sso_txt3

0x0002,

0xfe2d,	// (0x000910c7) aid_sso_txt

0xe56e,	// (0x0008f808) aid_sso_widget

0xa09f,	// (0x0008b339) sso_btn_pane_ParamLimits

0xa09f,	// (0x0008b339) sso_btn_pane

0xa123,	// (0x0008b3bd) sso_option_pane_ParamLimits

0xa123,	// (0x0008b3bd) sso_option_pane

0xa1e1,	// (0x0008b47b) sso_query_pane_ParamLimits

0xa1e1,	// (0x0008b47b) sso_query_pane

0xa237,	// (0x0008b4d1) sso_query_pane_cp01_ParamLimits

0xa237,	// (0x0008b4d1) sso_query_pane_cp01

0xa297,	// (0x0008b531) sso_t_hdr_pane_ParamLimits

0xa297,	// (0x0008b531) sso_t_hdr_pane

0xa2c1,	// (0x0008b55b) sso_t_nml_pane_ParamLimits

0xa2c1,	// (0x0008b55b) sso_t_nml_pane

0xe578,	// (0x0008f812) sso_t_sub_pane

0x9fdd,	// (0x0008b277) sso_popup_window_ParamLimits

0x9fdd,	// (0x0008b277) sso_popup_window

0xa04b,	// (0x0008b2e5) sso_apps_pane_ParamLimits

0xa04b,	// (0x0008b2e5) sso_apps_pane

0xa075,	// (0x0008b30f) sso_body_pane_g1

0xa07f,	// (0x0008b319) sso_body_pane_t1

0xa08f,	// (0x0008b329) sso_body_pane_t2

0x0001,

0xfe34,	// (0x000910ce) sso_body_pane_t

0xa0eb,	// (0x0008b385) sso_btn_pane_cp01_ParamLimits

0xa0eb,	// (0x0008b385) sso_btn_pane_cp01

0xa1b5,	// (0x0008b44f) sso_prog_pane_ParamLimits

0xa1b5,	// (0x0008b44f) sso_prog_pane

0xa317,	// (0x0008b5b1) sso_t_hdr_pane_t1_ParamLimits

0xa317,	// (0x0008b5b1) sso_t_hdr_pane_t1

0xe58d,	// (0x0008f827) input_focus_pane_cp10_ParamLimits

0xe58d,	// (0x0008f827) input_focus_pane_cp10

0xe5a1,	// (0x0008f83b) sso_query_pane_t1_ParamLimits

0xe5a1,	// (0x0008f83b) sso_query_pane_t1

0xe5b4,	// (0x0008f84e) sso_query_pane_t2_ParamLimits

0xe5b4,	// (0x0008f84e) sso_query_pane_t2

0xe5ce,	// (0x0008f868) sso_query_pane_t3_ParamLimits

0xe5ce,	// (0x0008f868) sso_query_pane_t3

0xe5f8,	// (0x0008f892) sso_query_pane_t4_ParamLimits

0xe5f8,	// (0x0008f892) sso_query_pane_t4

0x0003,

0xfe39,	// (0x000910d3) sso_query_pane_t_ParamLimits

0xfe39,	// (0x000910d3) sso_query_pane_t

0xe4a1,	// (0x0008f73b) bg_button_pane_cp22

0xe492,	// (0x0008f72c) sso_btn_pane_t1

0xa32a,	// (0x0008b5c4) sso_t_nml_pane_t1_ParamLimits

0xa32a,	// (0x0008b5c4) sso_t_nml_pane_t1

0xe61c,	// (0x0008f8b6) sso_option_row_pane_ParamLimits

0xe61c,	// (0x0008f8b6) sso_option_row_pane

0xe629,	// (0x0008f8c3) sso_t_sub_pane_t1_ParamLimits

0xe629,	// (0x0008f8c3) sso_t_sub_pane_t1

0xcf46,	// (0x0008e1e0) bg_popup_window_pane_cp11_ParamLimits

0xcf46,	// (0x0008e1e0) bg_popup_window_pane_cp11

0xe646,	// (0x0008f8e0) popup_sk_window_cp01_ParamLimits

0xe646,	// (0x0008f8e0) popup_sk_window_cp01

0xe653,	// (0x0008f8ed) sso_popup_body_pane_ParamLimits

0xe653,	// (0x0008f8ed) sso_popup_body_pane

0xe660,	// (0x0008f8fa) scroll_pane_cp21_ParamLimits

0xe660,	// (0x0008f8fa) scroll_pane_cp21

0xe66d,	// (0x0008f907) sso_popup_body_t_pane_ParamLimits

0xe66d,	// (0x0008f907) sso_popup_body_t_pane

0xe67a,	// (0x0008f914) sso_popup_body_t_hdr_pane_ParamLimits

0xe67a,	// (0x0008f914) sso_popup_body_t_hdr_pane

0xa345,	// (0x0008b5df) sso_popup_body_t_nml_pane_ParamLimits

0xa345,	// (0x0008b5df) sso_popup_body_t_nml_pane

0xa36c,	// (0x0008b606) sso_popup_body_t_sub_pane_ParamLimits

0xa36c,	// (0x0008b606) sso_popup_body_t_sub_pane

0xe68c,	// (0x0008f926) sso_popup_body_t_hdr_pane_t1

0xa38f,	// (0x0008b629) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa38f,	// (0x0008b629) sso_popup_body_t_nml_pane_t1

0xe69c,	// (0x0008f936) sso_popup_body_t_sub_pane_t1_ParamLimits

0xe69c,	// (0x0008f936) sso_popup_body_t_sub_pane_t1

0xdc4c,	// (0x0008eee6) sso_prog_pane_g1

0xa3c7,	// (0x0008b661) sso_apps_pane_comp1_ParamLimits

0xa3c7,	// (0x0008b661) sso_apps_pane_comp1

0xe6c1,	// (0x0008f95b) sso_apps_pane_comp1_g1

0xe6c9,	// (0x0008f963) sso_apps_pane_comp1_t1

0xe6e5,	// (0x0008f97f) sso_option_row_pane_g1

0xe6ed,	// (0x0008f987) sso_option_row_pane_t1

0xce42,	// (0x0008e0dc) list_cmail_pane_ParamLimits

0xc242,	// (0x0008d4dc) main_call7_pane

0x9a51,	// (0x0008aceb) bg_welc_area_ParamLimits

0x9a51,	// (0x0008aceb) bg_welc_area

0x9c28,	// (0x0008aec2) sso_t_hdr_pane_a_t1_ParamLimits

0x9c28,	// (0x0008aec2) sso_t_hdr_pane_a_t1

0x9c41,	// (0x0008aedb) sso_t_nml_pane_a_t1_ParamLimits

0x9c41,	// (0x0008aedb) sso_t_nml_pane_a_t1

0x9c70,	// (0x0008af0a) sso_t_sub_pane_a_t1_ParamLimits

0x9c70,	// (0x0008af0a) sso_t_sub_pane_a_t1

0x9d22,	// (0x0008afbc) welc_button_pane_cp01_ParamLimits

0x9d22,	// (0x0008afbc) welc_button_pane_cp01

0xe492,	// (0x0008f72c) sso_btn_pane_t1_copy1

0xe4a1,	// (0x0008f73b) welc_button_pane_2_comp1

0xe50a,	// (0x0008f7a4) sso_t_hdr_pane_p_t1

0xe51a,	// (0x0008f7b4) sso_t_nml_pane_p_t1

0xe52a,	// (0x0008f7c4) sso_t_sub_pane_p_t1

0xc242,	// (0x0008d4dc) main_att_pane

0xc242,	// (0x0008d4dc) main_vod_pane

0xe578,	// (0x0008f812) sso_t_sub_pane_ParamLimits

0xe6d7,	// (0x0008f971) input_focus_pane_cp10_t1

0xe6ed,	// (0x0008f987) sso_option_row_pane_t1_ParamLimits

0xa3e1,	// (0x0008b67b) main_att_body_pane_ParamLimits

0xa3e1,	// (0x0008b67b) main_att_body_pane

0xa3f7,	// (0x0008b691) att_btn_emg_pane_ParamLimits

0xa3f7,	// (0x0008b691) att_btn_emg_pane

0xa416,	// (0x0008b6b0) att_btn_pane_ParamLimits

0xa416,	// (0x0008b6b0) att_btn_pane

0xa48b,	// (0x0008b725) att_btn_pane_cp01_ParamLimits

0xa48b,	// (0x0008b725) att_btn_pane_cp01

0xa4ab,	// (0x0008b745) att_li_srv_pane_ParamLimits

0xa4ab,	// (0x0008b745) att_li_srv_pane

0xa4c8,	// (0x0008b762) att_opt_pane_ParamLimits

0xa4c8,	// (0x0008b762) att_opt_pane

0xa512,	// (0x0008b7ac) att_query_pane_ParamLimits

0xa512,	// (0x0008b7ac) att_query_pane

0xa58b,	// (0x0008b825) att_query_pane_cp01_ParamLimits

0xa58b,	// (0x0008b825) att_query_pane_cp01

0xa5d7,	// (0x0008b871) att_t_hdr_pane_ParamLimits

0xa5d7,	// (0x0008b871) att_t_hdr_pane

0xa647,	// (0x0008b8e1) att_t_nml_pane_ParamLimits

0xa647,	// (0x0008b8e1) att_t_nml_pane

0xa6c1,	// (0x0008b95b) att_t_nml_pane_cp01_ParamLimits

0xa6c1,	// (0x0008b95b) att_t_nml_pane_cp01

0xa6ef,	// (0x0008b989) att_t_nmlb_pane_ParamLimits

0xa6ef,	// (0x0008b989) att_t_nmlb_pane

0xa75c,	// (0x0008b9f6) att_term_pane_ParamLimits

0xa75c,	// (0x0008b9f6) att_term_pane

0xa7a8,	// (0x0008ba42) main_att_body_pane_g1_ParamLimits

0xa7a8,	// (0x0008ba42) main_att_body_pane_g1

0xe706,	// (0x0008f9a0) att_t_hdr_pane_t1_ParamLimits

0xe706,	// (0x0008f9a0) att_t_hdr_pane_t1

0xe71f,	// (0x0008f9b9) att_t_nml_pane_t1_ParamLimits

0xe71f,	// (0x0008f9b9) att_t_nml_pane_t1

0xe744,	// (0x0008f9de) att_btn_pane_t1

0xe4a1,	// (0x0008f73b) bg_button_pane_cp23

0xa7d6,	// (0x0008ba70) att_li_srv_row_pane_ParamLimits

0xa7d6,	// (0x0008ba70) att_li_srv_row_pane

0xe754,	// (0x0008f9ee) att_t_nmlb_pane_t1_ParamLimits

0xe754,	// (0x0008f9ee) att_t_nmlb_pane_t1

0xe772,	// (0x0008fa0c) att_query_pane_t1

0xe781,	// (0x0008fa1b) att_query_pane_t2

0xe790,	// (0x0008fa2a) att_query_pane_t3

0x0002,

0xfe42,	// (0x000910dc) att_query_pane_t

0xe79f,	// (0x0008fa39) input_focus_pane_cp11

0xe7a8,	// (0x0008fa42) att_term_pane_t1_ParamLimits

0xe7a8,	// (0x0008fa42) att_term_pane_t1

0xc242,	// (0x0008d4dc) att_opt_row_pane

0xe6e5,	// (0x0008f97f) att_opt_row_pane_g1

0xe7c5,	// (0x0008fa5f) att_opt_row_pane_t1_ParamLimits

0xe7c5,	// (0x0008fa5f) att_opt_row_pane_t1

0xa7e6,	// (0x0008ba80) att_li_srv_row_pane_g1

0xa7ee,	// (0x0008ba88) att_li_srv_row_pane_t1_ParamLimits

0xa7ee,	// (0x0008ba88) att_li_srv_row_pane_t1

0xa803,	// (0x0008ba9d) att_li_srv_row_pane_t2_ParamLimits

0xa803,	// (0x0008ba9d) att_li_srv_row_pane_t2

0x0001,

0xfe49,	// (0x000910e3) att_li_srv_row_pane_t_ParamLimits

0xfe49,	// (0x000910e3) att_li_srv_row_pane_t

0xe7de,	// (0x0008fa78) att_btn_close_pane_g1

0xc242,	// (0x0008d4dc) bg_button_pane_cp24

0xa818,	// (0x0008bab2) main_vod_body_pane_ParamLimits

0xa818,	// (0x0008bab2) main_vod_body_pane

0xa82c,	// (0x0008bac6) main_vod_body_pane_g1_ParamLimits

0xa82c,	// (0x0008bac6) main_vod_body_pane_g1

0xa860,	// (0x0008bafa) scroll_pane_cp24_ParamLimits

0xa860,	// (0x0008bafa) scroll_pane_cp24

0xa8ae,	// (0x0008bb48) vod_btn_pane_ParamLimits

0xa8ae,	// (0x0008bb48) vod_btn_pane

0xa8f0,	// (0x0008bb8a) vod_det_pane_ParamLimits

0xa8f0,	// (0x0008bb8a) vod_det_pane

0xa924,	// (0x0008bbbe) vod_logo_g1_ParamLimits

0xa924,	// (0x0008bbbe) vod_logo_g1

0xa972,	// (0x0008bc0c) vod_opt_pane_ParamLimits

0xa972,	// (0x0008bc0c) vod_opt_pane

0xa9a5,	// (0x0008bc3f) vod_opt_pane_cp01_ParamLimits

0xa9a5,	// (0x0008bc3f) vod_opt_pane_cp01

0xa9d1,	// (0x0008bc6b) vod_query_pane_ParamLimits

0xa9d1,	// (0x0008bc6b) vod_query_pane

0xa9fc,	// (0x0008bc96) vod_query_pane_cp01_ParamLimits

0xa9fc,	// (0x0008bc96) vod_query_pane_cp01

0xaa08,	// (0x0008bca2) vod_t_nml_pane_ParamLimits

0xaa08,	// (0x0008bca2) vod_t_nml_pane

0xaabd,	// (0x0008bd57) vod_t_nml_pane_cp01_ParamLimits

0xaabd,	// (0x0008bd57) vod_t_nml_pane_cp01

0xaaf9,	// (0x0008bd93) vod_t_sub_pane_ParamLimits

0xaaf9,	// (0x0008bd93) vod_t_sub_pane

0xab2a,	// (0x0008bdc4) vod_t_sub_pane_cp01_ParamLimits

0xab2a,	// (0x0008bdc4) vod_t_sub_pane_cp01

0xe79f,	// (0x0008fa39) vod_query_field_pane

0xe7e6,	// (0x0008fa80) vod_query_pane_t1

0xe4a1,	// (0x0008f73b) bg_button_pane_cp25

0xe7f5,	// (0x0008fa8f) sso_btn_pane_t1_copy2

0xab56,	// (0x0008bdf0) vod_t_nml_pane_t1_ParamLimits

0xab56,	// (0x0008bdf0) vod_t_nml_pane_t1

0xe804,	// (0x0008fa9e) vod_opt_row_pane_ParamLimits

0xe804,	// (0x0008fa9e) vod_opt_row_pane

0xe816,	// (0x0008fab0) vod_t_sub_pane_t1_ParamLimits

0xe816,	// (0x0008fab0) vod_t_sub_pane_t1

0xe82f,	// (0x0008fac9) vod_det_cell_pane_ParamLimits

0xe82f,	// (0x0008fac9) vod_det_cell_pane

0xc242,	// (0x0008d4dc) input_focus_pane_cp15

0xe840,	// (0x0008fada) vod_query_field_pane_t1

0xe84e,	// (0x0008fae8) vod_opt_row_pane_g1_ParamLimits

0xe84e,	// (0x0008fae8) vod_opt_row_pane_g1

0xe85a,	// (0x0008faf4) vod_opt_row_pane_t1_ParamLimits

0xe85a,	// (0x0008faf4) vod_opt_row_pane_t1

0xe879,	// (0x0008fb13) vod_det_cell_field_pane

0xe882,	// (0x0008fb1c) vod_det_cell_pane_g1

0xe88a,	// (0x0008fb24) vod_det_cell_pane_t1

0xc242,	// (0x0008d4dc) input_focus_pane_cp16

0xe899,	// (0x0008fb33) vod_det_cell_field_pane_t1

0x92df,	// (0x0008a579) call7_btn_grp_pane_ParamLimits

0x92df,	// (0x0008a579) call7_btn_grp_pane

0xcf46,	// (0x0008e1e0) call7_bubble_pane_ParamLimits

0xcf46,	// (0x0008e1e0) call7_bubble_pane

0xab8b,	// (0x0008be25) cell_call7_btn_pane_ParamLimits

0xab8b,	// (0x0008be25) cell_call7_btn_pane

0xab9f,	// (0x0008be39) call7_pane_g1_ParamLimits

0xab9f,	// (0x0008be39) call7_pane_g1

0xabb1,	// (0x0008be4b) call7_windows_conf_pane_ParamLimits

0xabb1,	// (0x0008be4b) call7_windows_conf_pane

0xabcf,	// (0x0008be69) popup_call7_1st_window_ParamLimits

0xabcf,	// (0x0008be69) popup_call7_1st_window

0xabe1,	// (0x0008be7b) popup_call7_2nd_window_ParamLimits

0xabe1,	// (0x0008be7b) popup_call7_2nd_window

0xabf3,	// (0x0008be8d) popup_call7_3rd_window_ParamLimits

0xabf3,	// (0x0008be8d) popup_call7_3rd_window

0xc242,	// (0x0008d4dc) bg_button_pane_cp26

0xdb84,	// (0x0008ee1e) cell_call7_btn_pane_g1

0xe364,	// (0x0008f5fe) cell_call7_btn_pane_t1

0xc242,	// (0x0008d4dc) bg_popup_window_pane_cp12

0xe8a7,	// (0x0008fb41) popup_call7_1st_window_g1

0xe8af,	// (0x0008fb49) popup_call7_1st_window_g2

0xe8b7,	// (0x0008fb51) popup_call7_1st_window_g3

0x0002,

0xfe4e,	// (0x000910e8) popup_call7_1st_window_g

0xe8bf,	// (0x0008fb59) popup_call7_1st_window_t1

0xe8ce,	// (0x0008fb68) popup_call7_1st_window_t2

0xe8de,	// (0x0008fb78) popup_call7_1st_window_t3

0x0002,

0xfe55,	// (0x000910ef) popup_call7_1st_window_t

0xc242,	// (0x0008d4dc) bg_popup_window_pane_cp13

0xe8ee,	// (0x0008fb88) popup_call7_2nd_window_g1

0xe8f6,	// (0x0008fb90) popup_call7_2nd_window_g2

0xe8fe,	// (0x0008fb98) popup_call7_2nd_window_g3

0x0002,

0xfe5c,	// (0x000910f6) popup_call7_2nd_window_g

0xe8bf,	// (0x0008fb59) popup_call7_2nd_window_t1

0xc242,	// (0x0008d4dc) bg_popup_window_pane_cp14

0xe906,	// (0x0008fba0) call7_list_conf_pane

0xe90e,	// (0x0008fba8) call7_list_conf_row_pane_ParamLimits

0xe90e,	// (0x0008fba8) call7_list_conf_row_pane

0xe921,	// (0x0008fbbb) call7_list_conf_row_pane_g1

0xe929,	// (0x0008fbc3) call7_list_conf_row_pane_g2

0x0001,

0xfe63,	// (0x000910fd) call7_list_conf_row_pane_g

0xe931,	// (0x0008fbcb) call7_list_conf_row_pane_t1

0xc242,	// (0x0008d4dc) list_highlight_pane_cp22

0xa17d,	// (0x0008b417) sso_option_pane_cp01_ParamLimits

0xa17d,	// (0x0008b417) sso_option_pane_cp01

0xd51e,	// (0x0008e7b8) msg_header_pane_ParamLimits

0xeeef,	// (0x00090189) bg_button_pane_cp01_ParamLimits

0xadcd,	// (0x0008c067) input_focus_pane_cp07_ParamLimits

0x8a54,	// (0x00089cee) popup_email_progress_window

0xdc4c,	// (0x0008eee6) popup_email_progress_window_g1

0xe93f,	// (0x0008fbd9) popup_email_progress_window_g2

0x0001,

0xfe68,	// (0x00091102) popup_email_progress_window_g

0xe947,	// (0x0008fbe1) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
