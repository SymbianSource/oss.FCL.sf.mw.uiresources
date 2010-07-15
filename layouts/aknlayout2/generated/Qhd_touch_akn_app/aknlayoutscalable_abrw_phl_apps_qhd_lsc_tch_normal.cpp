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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002e36c };

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
0x18c4,	// (0x0002fc30) Screen

0x18d0,	// (0x0002fc3c) application_window

0x1900,	// (0x0002fc6c) area_bottom_pane_ParamLimits

0x1900,	// (0x0002fc6c) area_bottom_pane

0x0038,	// (0x0002e3a4) area_top_pane_ParamLimits

0x0038,	// (0x0002e3a4) area_top_pane

0x195d,	// (0x0002fcc9) call_video_uplink_pane_ParamLimits

0x195d,	// (0x0002fcc9) call_video_uplink_pane

0x00c6,	// (0x0002e432) main_pane_ParamLimits

0x00c6,	// (0x0002e432) main_pane

0xc4ab,	// (0x0003a817) context_pane

0x49ad,	// (0x00032d19) navi_pane

0x49df,	// (0x00032d4b) popup_cale_events_window_ParamLimits

0x49df,	// (0x00032d4b) popup_cale_events_window

0xc4be,	// (0x0003a82a) popup_mup_playback_window

0x49f7,	// (0x00032d63) signal_pane

0xa3dc,	// (0x00038748) main_browser_pane

0xa5aa,	// (0x00038916) main_burst_pane

0x04c3,	// (0x0002e82f) main_calc_pane

0xc491,	// (0x0003a7fd) main_cale_day_pane

0x04d7,	// (0x0002e843) main_cale_month_pane

0xc491,	// (0x0003a7fd) main_cale_week_pane

0xa5aa,	// (0x00038916) main_call_pane

0xa0bc,	// (0x00038428) main_call_poc_pane

0xa5aa,	// (0x00038916) main_camera_pane

0xa5aa,	// (0x00038916) main_chi_dic_pane

0xad9b,	// (0x00039107) main_clock_pane

0xa0bc,	// (0x00038428) main_fmradio_pane

0xa5aa,	// (0x00038916) main_graph_messa_pane

0xa0bc,	// (0x00038428) main_help_pane

0xa3dc,	// (0x00038748) main_im_pane

0xa317,	// (0x00038683) main_image_pane_ParamLimits

0xa317,	// (0x00038683) main_image_pane

0xa0bc,	// (0x00038428) main_location2_pane

0xa5aa,	// (0x00038916) main_location_pane

0xa317,	// (0x00038683) main_messa_pane

0xa0bc,	// (0x00038428) main_mp2_pane

0xa5aa,	// (0x00038916) main_mp_pane

0xa0bc,	// (0x00038428) main_msg_pane

0xa0bc,	// (0x00038428) main_mup_eq_pane

0xa0bc,	// (0x00038428) main_mup_pane

0xa3dc,	// (0x00038748) main_notes_pane

0xa0bc,	// (0x00038428) main_pec_pane

0xa0bc,	// (0x00038428) main_phob_pane

0xa0bc,	// (0x00038428) main_pinb_pane

0xa0bc,	// (0x00038428) main_postcard_pane

0xa0bc,	// (0x00038428) main_qdial_pane

0xa5aa,	// (0x00038916) main_skin_pane

0xa0bc,	// (0x00038428) main_smil2_pane

0xa5aa,	// (0x00038916) main_smil_pane

0xa5aa,	// (0x00038916) main_video_pane

0xa5aa,	// (0x00038916) main_video_tele_pane

0xa317,	// (0x00038683) main_viewer_pane_ParamLimits

0xa317,	// (0x00038683) main_viewer_pane

0xa5aa,	// (0x00038916) main_vorec_pane

0x0529,	// (0x0002e895) popup_blid_sat_info_window_ParamLimits

0x0529,	// (0x0002e895) popup_blid_sat_info_window

0x0581,	// (0x0002e8ed) popup_dyc_status_message_window_ParamLimits

0x0581,	// (0x0002e8ed) popup_dyc_status_message_window

0x059b,	// (0x0002e907) popup_grid_large_graphic_window_ParamLimits

0x059b,	// (0x0002e907) popup_grid_large_graphic_window

0x0657,	// (0x0002e9c3) popup_loc_request_window_ParamLimits

0x0657,	// (0x0002e9c3) popup_loc_request_window

0x074d,	// (0x0002eab9) popup_wml_address_window_ParamLimits

0x074d,	// (0x0002eab9) popup_wml_address_window

0x479d,	// (0x00032b09) call_muted_g1

0x4452,	// (0x000327be) popup_call_audio_conf_window_ParamLimits

0x4452,	// (0x000327be) popup_call_audio_conf_window

0x47b1,	// (0x00032b1d) popup_call_audio_first_window_ParamLimits

0x47b1,	// (0x00032b1d) popup_call_audio_first_window

0x4827,	// (0x00032b93) popup_call_audio_in_window_ParamLimits

0x4827,	// (0x00032b93) popup_call_audio_in_window

0x4863,	// (0x00032bcf) popup_call_audio_out_window_ParamLimits

0x4863,	// (0x00032bcf) popup_call_audio_out_window

0x489d,	// (0x00032c09) popup_call_audio_second_window_ParamLimits

0x489d,	// (0x00032c09) popup_call_audio_second_window

0x48f3,	// (0x00032c5f) popup_call_audio_wait_window_ParamLimits

0x48f3,	// (0x00032c5f) popup_call_audio_wait_window

0x4928,	// (0x00032c94) popup_number_entry_window_ParamLimits

0x4928,	// (0x00032c94) popup_number_entry_window

0x9ca9,	// (0x00038015) bg_popup_call_pane_cp05_ParamLimits

0x9ca9,	// (0x00038015) bg_popup_call_pane_cp05

0x9cc9,	// (0x00038035) popup_number_entry_window_t1

0x9cdc,	// (0x00038048) popup_number_entry_window_t2

0x9cee,	// (0x0003805a) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0003d41b) popup_number_entry_window_t

0x9d00,	// (0x0003806c) text_title_cp2

0x9d13,	// (0x0003807f) bg_popup_call_pane_cp_ParamLimits

0x9d13,	// (0x0003807f) bg_popup_call_pane_cp

0x9d21,	// (0x0003808d) call_thumbnail_pane

0x9d29,	// (0x00038095) popup_call_audio_in_window_g1_ParamLimits

0x9d29,	// (0x00038095) popup_call_audio_in_window_g1

0x9d35,	// (0x000380a1) popup_call_audio_in_window_g2_ParamLimits

0x9d35,	// (0x000380a1) popup_call_audio_in_window_g2

0x9d41,	// (0x000380ad) popup_call_audio_in_window_g3_ParamLimits

0x9d41,	// (0x000380ad) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0003d424) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0003d424) popup_call_audio_in_window_g

0x9d4d,	// (0x000380b9) popup_call_audio_in_window_t1_ParamLimits

0x9d4d,	// (0x000380b9) popup_call_audio_in_window_t1

0x9d69,	// (0x000380d5) popup_call_audio_in_window_t2_ParamLimits

0x9d69,	// (0x000380d5) popup_call_audio_in_window_t2

0x9d85,	// (0x000380f1) popup_call_audio_in_window_t3_ParamLimits

0x9d85,	// (0x000380f1) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0003d42b) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0003d42b) popup_call_audio_in_window_t

0x9d13,	// (0x0003807f) bg_popup_call_pane_cp01_ParamLimits

0x9d13,	// (0x0003807f) bg_popup_call_pane_cp01

0x9d21,	// (0x0003808d) call_thumbnail_pane_cp02

0x9d98,	// (0x00038104) call_type_pane_cp022

0x9da0,	// (0x0003810c) popup_call_audio_out_window_g1_ParamLimits

0x9da0,	// (0x0003810c) popup_call_audio_out_window_g1

0x9db2,	// (0x0003811e) popup_call_audio_out_window_g2_ParamLimits

0x9db2,	// (0x0003811e) popup_call_audio_out_window_g2

0x9dbe,	// (0x0003812a) popup_call_audio_out_window_g3_ParamLimits

0x9dbe,	// (0x0003812a) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0003d432) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0003d432) popup_call_audio_out_window_g

0x9dd0,	// (0x0003813c) popup_call_audio_out_window_t1_ParamLimits

0x9dd0,	// (0x0003813c) popup_call_audio_out_window_t1

0x9de8,	// (0x00038154) popup_call_audio_out_window_t2_ParamLimits

0x9de8,	// (0x00038154) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0003d439) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0003d439) popup_call_audio_out_window_t

0x9dfd,	// (0x00038169) bg_popup_call_pane_ParamLimits

0x9dfd,	// (0x00038169) bg_popup_call_pane

0x19d3,	// (0x0002fd3f) call_thumbnail_pane_cp_ParamLimits

0x19d3,	// (0x0002fd3f) call_thumbnail_pane_cp

0x9e81,	// (0x000381ed) call_type_pane_cp01_ParamLimits

0x9e81,	// (0x000381ed) call_type_pane_cp01

0x9ec5,	// (0x00038231) popup_call_audio_first_window_g1_ParamLimits

0x9ec5,	// (0x00038231) popup_call_audio_first_window_g1

0x9f11,	// (0x0003827d) popup_call_audio_first_window_g2_ParamLimits

0x9f11,	// (0x0003827d) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0003d43e) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0003d43e) popup_call_audio_first_window_g

0x9f55,	// (0x000382c1) popup_call_audio_first_window_t1_ParamLimits

0x9f55,	// (0x000382c1) popup_call_audio_first_window_t1

0xa001,	// (0x0003836d) popup_call_audio_first_window_t4_ParamLimits

0xa001,	// (0x0003836d) popup_call_audio_first_window_t4

0xa08d,	// (0x000383f9) popup_call_audio_first_window_t5_ParamLimits

0xa08d,	// (0x000383f9) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0003d443) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0003d443) popup_call_audio_first_window_t

0xa0bc,	// (0x00038428) bg_popup_call_pane_cp02

0xa0c6,	// (0x00038432) call_type_pane_cp023

0xa0ce,	// (0x0003843a) popup_call_audio_wait_window_g1

0xa0d6,	// (0x00038442) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0003d44a) popup_call_audio_wait_window_g

0xa0de,	// (0x0003844a) popup_call_audio_wait_window_t3

0xa0ec,	// (0x00038458) bg_popup_call_pane_cp03_ParamLimits

0xa0ec,	// (0x00038458) bg_popup_call_pane_cp03

0xa14c,	// (0x000384b8) call_thumbnail_pane_cp011_ParamLimits

0xa14c,	// (0x000384b8) call_thumbnail_pane_cp011

0xa158,	// (0x000384c4) call_type_pane_cp034_ParamLimits

0xa158,	// (0x000384c4) call_type_pane_cp034

0xa194,	// (0x00038500) popup_call_audio_second_window_g1_ParamLimits

0xa194,	// (0x00038500) popup_call_audio_second_window_g1

0xa1d0,	// (0x0003853c) popup_call_audio_second_window_g2_ParamLimits

0xa1d0,	// (0x0003853c) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0003d44f) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0003d44f) popup_call_audio_second_window_g

0xa20c,	// (0x00038578) popup_call_audio_second_window_t1_ParamLimits

0xa20c,	// (0x00038578) popup_call_audio_second_window_t1

0xa28d,	// (0x000385f9) popup_call_audio_second_window_t2_ParamLimits

0xa28d,	// (0x000385f9) popup_call_audio_second_window_t2

0xa2c3,	// (0x0003862f) popup_call_audio_second_window_t3_ParamLimits

0xa2c3,	// (0x0003862f) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0003d454) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0003d454) popup_call_audio_second_window_t

0xa0bc,	// (0x00038428) bg_popup_call_pane_cp04

0xa2f9,	// (0x00038665) list_conf_pane

0xa301,	// (0x0003866d) popup_call_audio_conf_window_t1

0xa30f,	// (0x0003867b) call_thumbnail_pane_g1

0xa317,	// (0x00038683) bg_pinb_pane_ParamLimits

0xa317,	// (0x00038683) bg_pinb_pane

0xa325,	// (0x00038691) find_pinb_pane

0xa32e,	// (0x0003869a) listscroll_pinb_pane_ParamLimits

0xa32e,	// (0x0003869a) listscroll_pinb_pane

0xa33d,	// (0x000386a9) pinb_bg_pane_g1

0x19f7,	// (0x0002fd63) pinb_bg_pane_g2

0x1a03,	// (0x0002fd6f) pinb_bg_pane_g3

0x1a0f,	// (0x0002fd7b) pinb_bg_pane_g4

0x1a1b,	// (0x0002fd87) pinb_bg_pane_g5

0x1a27,	// (0x0002fd93) pinb_bg_pane_g6

0x1a32,	// (0x0002fd9e) pinb_bg_pane_g7

0x1a3d,	// (0x0002fda9) pinb_bg_pane_g8

0x1a48,	// (0x0002fdb4) pinb_bg_pane_g9

0x1a52,	// (0x0002fdbe) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0003d45b) pinb_bg_pane_g

0x1a6f,	// (0x0002fddb) grid_pinb_pane

0x1a78,	// (0x0002fde4) list_pinb_pane

0x1a81,	// (0x0002fded) scroll_pane_cp01_ParamLimits

0x1a81,	// (0x0002fded) scroll_pane_cp01

0xa347,	// (0x000386b3) find_pinb_pane_g1_ParamLimits

0xa347,	// (0x000386b3) find_pinb_pane_g1

0xa35f,	// (0x000386cb) find_pinb_pane_t1

0xa371,	// (0x000386dd) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0003d475) find_pinb_pane_t

0xa386,	// (0x000386f2) input_focus_pane_cp01_ParamLimits

0xa386,	// (0x000386f2) input_focus_pane_cp01

0x1a93,	// (0x0002fdff) cell_pinb_pane_ParamLimits

0x1a93,	// (0x0002fdff) cell_pinb_pane

0x1abc,	// (0x0002fe28) cell_pinb_pane_g1_ParamLimits

0x1abc,	// (0x0002fe28) cell_pinb_pane_g1

0x1acc,	// (0x0002fe38) cell_pinb_pane_g2_ParamLimits

0x1acc,	// (0x0002fe38) cell_pinb_pane_g2

0xa392,	// (0x000386fe) cell_pinb_pane_g3_ParamLimits

0xa392,	// (0x000386fe) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0003d47a) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0003d47a) cell_pinb_pane_g

0xa0bc,	// (0x00038428) grid_highlight_pane_cp01

0x1ad8,	// (0x0002fe44) list_pinb_item_pane_ParamLimits

0x1ad8,	// (0x0002fe44) list_pinb_item_pane

0xa0bc,	// (0x00038428) list_highlight_pane_cp02

0x1aea,	// (0x0002fe56) list_pinb_item_pane_g1_ParamLimits

0x1aea,	// (0x0002fe56) list_pinb_item_pane_g1

0x1af7,	// (0x0002fe63) list_pinb_item_pane_g2_ParamLimits

0x1af7,	// (0x0002fe63) list_pinb_item_pane_g2

0x1b03,	// (0x0002fe6f) list_pinb_item_pane_g3_ParamLimits

0x1b03,	// (0x0002fe6f) list_pinb_item_pane_g3

0x1b14,	// (0x0002fe80) list_pinb_item_pane_g4_ParamLimits

0x1b14,	// (0x0002fe80) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0003d481) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0003d481) list_pinb_item_pane_g

0x1b20,	// (0x0002fe8c) list_pinb_item_pane_t1_ParamLimits

0x1b20,	// (0x0002fe8c) list_pinb_item_pane_t1

0x0260,	// (0x0002e5cc) calc_display_pane

0x0285,	// (0x0002e5f1) calc_paper_pane

0x02a8,	// (0x0002e614) grid_calc_pane

0xa0bc,	// (0x00038428) bg_list_pane_cp01

0x1b3f,	// (0x0002feab) clock_g1

0x1b47,	// (0x0002feb3) clock_g2

0x0001,

0xf11e,	// (0x0003d48a) clock_g

0x1b4f,	// (0x0002febb) clock_t1_ParamLimits

0x1b4f,	// (0x0002febb) clock_t1

0x1b64,	// (0x0002fed0) clock_t2_ParamLimits

0x1b64,	// (0x0002fed0) clock_t2

0x1b76,	// (0x0002fee2) clock_t3_ParamLimits

0x1b76,	// (0x0002fee2) clock_t3

0x1b88,	// (0x0002fef4) clock_t4_ParamLimits

0x1b88,	// (0x0002fef4) clock_t4

0x1b9a,	// (0x0002ff06) clock_t5_ParamLimits

0x1b9a,	// (0x0002ff06) clock_t5

0x1baf,	// (0x0002ff1b) clock_t6_ParamLimits

0x1baf,	// (0x0002ff1b) clock_t6

0x1bc1,	// (0x0002ff2d) clock_t7_ParamLimits

0x1bc1,	// (0x0002ff2d) clock_t7

0x1bd3,	// (0x0002ff3f) clock_t8_ParamLimits

0x1bd3,	// (0x0002ff3f) clock_t8

0x1be7,	// (0x0002ff53) clock_t9_ParamLimits

0x1be7,	// (0x0002ff53) clock_t9

0x0008,

0xf123,	// (0x0003d48f) clock_t_ParamLimits

0xf123,	// (0x0003d48f) clock_t

0xa39e,	// (0x0003870a) popup_clock_analogue_window_cp02

0xa39e,	// (0x0003870a) popup_clock_digital_window_cp01

0xa3a6,	// (0x00038712) listscroll_help_pane

0xa0bc,	// (0x00038428) phob_pre_status_pane

0xa3b0,	// (0x0003871c) grid_qdial_pane

0xa317,	// (0x00038683) listscroll_mce_pane

0xa317,	// (0x00038683) bg_notes_pane

0xa3ba,	// (0x00038726) list_notes_pane

0x1bfb,	// (0x0002ff67) scroll_pane_cp06

0xa3c8,	// (0x00038734) bg_calc_paper_pane

0x1c0f,	// (0x0002ff7b) list_calc_pane

0xa3dc,	// (0x00038748) bg_calc_display_pane

0x02d6,	// (0x0002e642) calc_display_pane_t1

0x02eb,	// (0x0002e657) calc_display_pane_t2

0x1c29,	// (0x0002ff95) calc_display_pane_t3

0x0002,

0xf136,	// (0x0003d4a2) calc_display_pane_t

0x0300,	// (0x0002e66c) cell_calc_pane_ParamLimits

0x0300,	// (0x0002e66c) cell_calc_pane

0xa3e8,	// (0x00038754) bg_calc_paper_pane_g1

0xa3f4,	// (0x00038760) bg_calc_paper_pane_g2

0xa400,	// (0x0003876c) bg_calc_paper_pane_g3

0xa40c,	// (0x00038778) bg_calc_paper_pane_g4

0xa418,	// (0x00038784) bg_calc_paper_pane_g5

0x1c3b,	// (0x0002ffa7) bg_calc_paper_pane_g6

0x1c4a,	// (0x0002ffb6) bg_calc_paper_pane_g7

0x1c59,	// (0x0002ffc5) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0003d4a9) bg_calc_paper_pane_g

0x1c6c,	// (0x0002ffd8) calc_bg_paper_pane_g9

0x1c7f,	// (0x0002ffeb) list_calc_item_pane_ParamLimits

0x1c7f,	// (0x0002ffeb) list_calc_item_pane

0xa424,	// (0x00038790) list_calc_item_pane_g1

0x1c97,	// (0x00030003) list_calc_item_pane_t1_ParamLimits

0x1c97,	// (0x00030003) list_calc_item_pane_t1

0x0335,	// (0x0002e6a1) list_calc_item_pane_t2_ParamLimits

0x0335,	// (0x0002e6a1) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0003d4ba) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0003d4ba) list_calc_item_pane_t

0xa431,	// (0x0003879d) cell_calc_pane_g1

0xa43b,	// (0x000387a7) grid_highlight_pane_cp02

0x1ca9,	// (0x00030015) bg_calc_display_pane_g1

0x0367,	// (0x0002e6d3) bg_calc_display_pane_g2

0xa45d,	// (0x000387c9) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0003d4c4) bg_calc_display_pane_g

0x0371,	// (0x0002e6dd) cell_qdial_pane_ParamLimits

0x0371,	// (0x0002e6dd) cell_qdial_pane

0x1cb2,	// (0x0003001e) cell_qdial_pane_g1_ParamLimits

0x1cb2,	// (0x0003001e) cell_qdial_pane_g1

0x1cc8,	// (0x00030034) cell_qdial_pane_g2_ParamLimits

0x1cc8,	// (0x00030034) cell_qdial_pane_g2

0xa466,	// (0x000387d2) cell_qdial_pane_g3_ParamLimits

0xa466,	// (0x000387d2) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0003d4cb) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0003d4cb) cell_qdial_pane_g

0x1cef,	// (0x0003005b) cell_qdial_pane_t1_ParamLimits

0x1cef,	// (0x0003005b) cell_qdial_pane_t1

0x1d07,	// (0x00030073) cell_qdial_pane_t2_ParamLimits

0x1d07,	// (0x00030073) cell_qdial_pane_t2

0x1d1a,	// (0x00030086) cell_qdial_pane_t3_ParamLimits

0x1d1a,	// (0x00030086) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0003d4d4) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0003d4d4) cell_qdial_pane_t

0xa0bc,	// (0x00038428) grid_highlight_pane_cp04

0xa472,	// (0x000387de) thumbnail_qdial_pane_ParamLimits

0xa472,	// (0x000387de) thumbnail_qdial_pane

0xa4ce,	// (0x0003883a) list_help_pane

0xa4d7,	// (0x00038843) scroll_pane_cp02

0x1d2d,	// (0x00030099) help_list_pane_t1_ParamLimits

0x1d2d,	// (0x00030099) help_list_pane_t1

0x1d4a,	// (0x000300b6) bg_notes_pane_g2

0x1d52,	// (0x000300be) bg_notes_pane_g3

0x1d5a,	// (0x000300c6) notes_bg_pane_g1

0x1d62,	// (0x000300ce) notes_bg_pane_g4

0x1d6a,	// (0x000300d6) notes_bg_pane_g5

0x1d72,	// (0x000300de) notes_bg_pane_g6

0x1d7a,	// (0x000300e6) notes_bg_pane_g7

0x1d82,	// (0x000300ee) notes_bg_pane_g8

0x1d8a,	// (0x000300f6) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0003d4f2) notes_bg_pane_g

0x1d92,	// (0x000300fe) list_notes_text_pane_ParamLimits

0x1d92,	// (0x000300fe) list_notes_text_pane

0xa4e0,	// (0x0003884c) list_notes_text_pane_g1

0x1da7,	// (0x00030113) list_notes_text_pane_t1

0x1db5,	// (0x00030121) listscroll_cale_week_pane

0x1de1,	// (0x0003014d) bg_cale_heading_pane

0xa503,	// (0x0003886f) bg_cale_pane_cp01

0x1df9,	// (0x00030165) cale_week_corner_pane

0x1e18,	// (0x00030184) cale_week_day_heading_pane

0x1e35,	// (0x000301a1) cale_week_scroll_pane_g1

0x1e48,	// (0x000301b4) cale_week_scroll_pane_g2

0x1e60,	// (0x000301cc) cale_week_scroll_pane_g3

0x1e78,	// (0x000301e4) cale_week_scroll_pane_g4

0x1e90,	// (0x000301fc) cale_week_scroll_pane_g5

0x1eb0,	// (0x0003021c) cale_week_scroll_pane_g6

0x1ed0,	// (0x0003023c) cale_week_scroll_pane_g7

0x1ef0,	// (0x0003025c) cale_week_scroll_pane_g8

0x1f14,	// (0x00030280) cale_week_scroll_pane_g9

0x1f2c,	// (0x00030298) cale_week_scroll_pane_g10

0x1f44,	// (0x000302b0) cale_week_scroll_pane_g11

0x1f5c,	// (0x000302c8) cale_week_scroll_pane_g12

0x1f74,	// (0x000302e0) cale_week_scroll_pane_g13

0x1f74,	// (0x000302e0) cale_week_scroll_pane_g14

0x1f74,	// (0x000302e0) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0003d501) cale_week_scroll_pane_g

0x1fb0,	// (0x0003031c) cale_week_time_pane

0x1fd4,	// (0x00030340) grid_cale_week_pane

0xa532,	// (0x0003889e) scroll_pane_cp08

0x1ffa,	// (0x00030366) cell_cale_week_pane_ParamLimits

0x1ffa,	// (0x00030366) cell_cale_week_pane

0x2088,	// (0x000303f4) cale_week_day_heading_pane_t1

0x20b2,	// (0x0003041e) cale_week_day_heading_pane_t2

0x20e1,	// (0x0003044d) cale_week_day_heading_pane_t3

0x2110,	// (0x0003047c) cale_week_day_heading_pane_t4

0x213f,	// (0x000304ab) cale_week_day_heading_pane_t5

0x2176,	// (0x000304e2) cale_week_day_heading_pane_t6

0x21ad,	// (0x00030519) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0003d522) cale_week_day_heading_pane_t

0xa54f,	// (0x000388bb) bg_cale_side_pane

0x0385,	// (0x0002e6f1) cale_week_time_pane_t1

0x039f,	// (0x0002e70b) cale_week_time_pane_t2

0x03b9,	// (0x0002e725) cale_week_time_pane_t3

0x03d3,	// (0x0002e73f) cale_week_time_pane_t4

0x03ed,	// (0x0002e759) cale_week_time_pane_t5

0x0407,	// (0x0002e773) cale_week_time_pane_t6

0x0421,	// (0x0002e78d) cale_week_time_pane_t7

0x043b,	// (0x0002e7a7) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0003d531) cale_week_time_pane_t

0x21d7,	// (0x00030543) cell_cale_week_pane_g2

0x21f6,	// (0x00030562) cell_cale_week_pane_g3_ParamLimits

0x21f6,	// (0x00030562) cell_cale_week_pane_g3

0xa55d,	// (0x000388c9) grid_highlight_pane_cp07

0xa565,	// (0x000388d1) listscroll_gms_pane

0xa56f,	// (0x000388db) grid_gms_pane

0xa578,	// (0x000388e4) listscroll_gms_pane_g1

0xa580,	// (0x000388ec) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0003d542) listscroll_gms_pane_g

0x220e,	// (0x0003057a) scroll_pane_cp010

0x2219,	// (0x00030585) cell_gms_pane_ParamLimits

0x2219,	// (0x00030585) cell_gms_pane

0x222c,	// (0x00030598) cell_gms_pane_g1

0xa588,	// (0x000388f4) cell_gms_pane_g2

0xa590,	// (0x000388fc) cell_gms_pane_g3

0xa599,	// (0x00038905) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0003d547) cell_gms_pane_g

0xa5a2,	// (0x0003890e) grid_highlight_pane_cp09

0x4747,	// (0x00032ab3) phob_pre_status_pane_g1

0x474f,	// (0x00032abb) phob_pre_status_pane_g2

0x4757,	// (0x00032ac3) phob_pre_status_pane_g3

0x475f,	// (0x00032acb) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0003d932) phob_pre_status_pane_g

0x476f,	// (0x00032adb) phob_pre_status_pane_t1

0x477d,	// (0x00032ae9) phob_pre_status_pane_t2

0x478d,	// (0x00032af9) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0003d93d) phob_pre_status_pane_t

0xa5aa,	// (0x00038916) bg_list_pane_cp05

0x223c,	// (0x000305a8) grid_vorec_pane

0x2244,	// (0x000305b0) vorec_t1

0x2252,	// (0x000305be) vorec_t2

0x2260,	// (0x000305cc) vorec_t3

0x226e,	// (0x000305da) vorec_t4

0x189e,	// (0x0002fc0a) vorec_t5

0x18ac,	// (0x0002fc18) vorec_t6

0x0004,

0xf1e4,	// (0x0003d550) vorec_t

0x18ba,	// (0x0002fc26) wait_bar_pane_cp01

0x228a,	// (0x000305f6) cell_vorec_pane_ParamLimits

0x228a,	// (0x000305f6) cell_vorec_pane

0x229d,	// (0x00030609) cell_vorec_pane_g1

0xa0bc,	// (0x00038428) grid_highlight_pane_cp05

0x22bc,	// (0x00030628) cams_zoom_pane

0x22cb,	// (0x00030637) image_vga_pane

0x22e5,	// (0x00030651) main_camera_pane_g1

0x22f7,	// (0x00030663) main_camera_pane_g2

0x2307,	// (0x00030673) main_camera_pane_g3

0x2317,	// (0x00030683) main_camera_pane_g4

0x2327,	// (0x00030693) main_camera_pane_g5

0x2337,	// (0x000306a3) main_camera_pane_g6

0x2349,	// (0x000306b5) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0003d55b) main_camera_pane_g

0x2359,	// (0x000306c5) main_camera_pane_t1

0x236f,	// (0x000306db) main_camera_pane_t2

0x0001,

0xf200,	// (0x0003d56c) main_camera_pane_t

0x23a9,	// (0x00030715) cams_zoom_pane_cp_ParamLimits

0x23a9,	// (0x00030715) cams_zoom_pane_cp

0x23d1,	// (0x0003073d) image_cif_pane_ParamLimits

0x23d1,	// (0x0003073d) image_cif_pane

0x2407,	// (0x00030773) image_subqcif_pane

0x240f,	// (0x0003077b) main_video_pane_g1_ParamLimits

0x240f,	// (0x0003077b) main_video_pane_g1

0x2433,	// (0x0003079f) main_video_pane_g2_ParamLimits

0x2433,	// (0x0003079f) main_video_pane_g2

0x2467,	// (0x000307d3) main_video_pane_g3_ParamLimits

0x2467,	// (0x000307d3) main_video_pane_g3

0x2495,	// (0x00030801) main_video_pane_g4_ParamLimits

0x2495,	// (0x00030801) main_video_pane_g4

0x24c3,	// (0x0003082f) main_video_pane_g5_ParamLimits

0x24c3,	// (0x0003082f) main_video_pane_g5

0xa5be,	// (0x0003892a) main_video_pane_g6_ParamLimits

0xa5be,	// (0x0003892a) main_video_pane_g6

0x0006,

0xf205,	// (0x0003d571) main_video_pane_g_ParamLimits

0xf205,	// (0x0003d571) main_video_pane_g

0x24ec,	// (0x00030858) main_video_pane_t1_ParamLimits

0x24ec,	// (0x00030858) main_video_pane_t1

0xa5d8,	// (0x00038944) cams_zoom_pane_g1

0xa5e1,	// (0x0003894d) cams_zoom_pane_g2

0xa5ea,	// (0x00038956) cams_zoom_pane_g3

0xa5f3,	// (0x0003895f) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0003d580) cams_zoom_pane_g

0x2549,	// (0x000308b5) grid_cams_pane

0x2563,	// (0x000308cf) linegrid_cams_pane

0x2577,	// (0x000308e3) cell_cams_pane_ParamLimits

0x2577,	// (0x000308e3) cell_cams_pane

0xa5fc,	// (0x00038968) cams_burst_image_pane

0xa604,	// (0x00038970) cell_cams_pane_g1

0xa0bc,	// (0x00038428) grid_highlight_pane_cp03

0xa431,	// (0x0003879d) mp_bg_pane_g1

0xa0bc,	// (0x00038428) bg_list_pane_cp03

0xc3b6,	// (0x0003a722) bg_mp_pane

0xc3be,	// (0x0003a72a) grid_mp_pane

0xc3c6,	// (0x0003a732) media_player_g1

0xc3ce,	// (0x0003a73a) media_player_t1

0xc3dc,	// (0x0003a748) media_player_t2

0xc3ea,	// (0x0003a756) media_player_t3

0xc3f8,	// (0x0003a764) media_player_t4

0xc406,	// (0x0003a772) media_player_t5

0xc414,	// (0x0003a780) media_player_t6

0xc422,	// (0x0003a78e) media_player_t7

0x0006,

0xf5b0,	// (0x0003d91c) media_player_t

0xc430,	// (0x0003a79c) wait_bar_pane_cp02

0xf595,	// (0x0003d901) main_usb_pane_t

0x473e,	// (0x00032aaa) cell_mp_pane

0xa431,	// (0x0003879d) cell_mp_pane_g1

0xa0bc,	// (0x00038428) grid_highlight_pane_cp06

0xa60c,	// (0x00038978) grid_skin_colour_pane

0xa614,	// (0x00038980) list_highlight_pane_cp03

0x26ad,	// (0x00030a19) skin_g1

0xa61c,	// (0x00038988) skin_t1

0xa62b,	// (0x00038997) skin_t2

0x0001,

0xf249,	// (0x0003d5b5) skin_t

0x26b5,	// (0x00030a21) cell_skin_colour_pane_ParamLimits

0x26b5,	// (0x00030a21) cell_skin_colour_pane

0xa639,	// (0x000389a5) cell_skin_colour_pane_g1

0x272e,	// (0x00030a9a) call_video_g1_ParamLimits

0x272e,	// (0x00030a9a) call_video_g1

0x274a,	// (0x00030ab6) call_video_g2_ParamLimits

0x274a,	// (0x00030ab6) call_video_g2

0x0001,

0xf24e,	// (0x0003d5ba) call_video_g_ParamLimits

0xf24e,	// (0x0003d5ba) call_video_g

0x279c,	// (0x00030b08) call_video_uplink_pane_cp1_ParamLimits

0x279c,	// (0x00030b08) call_video_uplink_pane_cp1

0xa64b,	// (0x000389b7) call_video_uplink_pane_cp2

0x283b,	// (0x00030ba7) video_down_crop_pane_ParamLimits

0x283b,	// (0x00030ba7) video_down_crop_pane

0x2932,	// (0x00030c9e) video_down_pane_ParamLimits

0x2932,	// (0x00030c9e) video_down_pane

0xa653,	// (0x000389bf) video_down_subqcif_pane_ParamLimits

0xa653,	// (0x000389bf) video_down_subqcif_pane

0xa66b,	// (0x000389d7) video_down_subqcif_pane_cp_ParamLimits

0xa66b,	// (0x000389d7) video_down_subqcif_pane_cp

0xa691,	// (0x000389fd) im_reading_pane_ParamLimits

0xa691,	// (0x000389fd) im_reading_pane

0x2a42,	// (0x00030dae) im_writing_pane_ParamLimits

0x2a42,	// (0x00030dae) im_writing_pane

0x2a58,	// (0x00030dc4) im_reading_pane_t1

0xa6ab,	// (0x00038a17) list_im_pane

0xa6bc,	// (0x00038a28) scroll_pane_cp07

0x2a91,	// (0x00030dfd) im_writing_pane_t1_ParamLimits

0x2a91,	// (0x00030dfd) im_writing_pane_t1

0xa6d5,	// (0x00038a41) im_writing_pane_t2_ParamLimits

0xa6d5,	// (0x00038a41) im_writing_pane_t2

0x0001,

0xf258,	// (0x0003d5c4) im_writing_pane_t_ParamLimits

0xf258,	// (0x0003d5c4) im_writing_pane_t

0xa0bc,	// (0x00038428) input_focus_pane_cp04

0xa0bc,	// (0x00038428) input_focus_pane_cp05

0x2aa6,	// (0x00030e12) list_im_single_pane_ParamLimits

0x2aa6,	// (0x00030e12) list_im_single_pane

0x2aba,	// (0x00030e26) list_single_im_pane_t1

0x46fe,	// (0x00032a6a) blid_accuracy_pane

0x4706,	// (0x00032a72) blid_compass_pane

0x4710,	// (0x00032a7c) main_location_t1

0x4720,	// (0x00032a8c) main_location_t2

0x4730,	// (0x00032a9c) main_location_t3

0x0002,

0xf5bf,	// (0x0003d92b) main_location_t

0xa0bc,	// (0x00038428) aid_levels_location

0xa431,	// (0x0003879d) blid_accuracy_pane_g1

0xa431,	// (0x0003879d) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0003d626) blid_accuracy_pane_g

0xa71d,	// (0x00038a89) wml_content_pane

0xa75b,	// (0x00038ac7) wml_button_pane_ParamLimits

0xa75b,	// (0x00038ac7) wml_button_pane

0x2ac9,	// (0x00030e35) wml_list_single_large_pane_ParamLimits

0x2ac9,	// (0x00030e35) wml_list_single_large_pane

0x2ade,	// (0x00030e4a) wml_list_single_medium_pane_ParamLimits

0x2ade,	// (0x00030e4a) wml_list_single_medium_pane

0x2af4,	// (0x00030e60) wml_list_single_small_pane_ParamLimits

0x2af4,	// (0x00030e60) wml_list_single_small_pane

0xa76f,	// (0x00038adb) wml_selection_box_pane_ParamLimits

0xa76f,	// (0x00038adb) wml_selection_box_pane

0xa782,	// (0x00038aee) wml_list_single_pane_t1

0xa791,	// (0x00038afd) wml_list_single_medium_pane_t1

0xa7a0,	// (0x00038b0c) wml_list_single_large_pane_t1

0xa7af,	// (0x00038b1b) input_focus_pane_cp02_ParamLimits

0xa7af,	// (0x00038b1b) input_focus_pane_cp02

0xa7c2,	// (0x00038b2e) wml_selection_box_pane_g1

0xa7cb,	// (0x00038b37) wml_selection_box_pane_t1_ParamLimits

0xa7cb,	// (0x00038b37) wml_selection_box_pane_t1

0xa317,	// (0x00038683) bg_wml_button_pane_ParamLimits

0xa317,	// (0x00038683) bg_wml_button_pane

0xa7e3,	// (0x00038b4f) wml_button_pane_g1

0xa7eb,	// (0x00038b57) wml_button_pane_t1

0xa7e3,	// (0x00038b4f) wml_button_bg_pane_g1

0xa7fb,	// (0x00038b67) wml_button_bg_pane_g2

0xa803,	// (0x00038b6f) wml_button_bg_pane_g3

0xa80b,	// (0x00038b77) wml_button_bg_pane_g4

0xa813,	// (0x00038b7f) wml_button_bg_pane_g5

0xa81b,	// (0x00038b87) wml_button_bg_pane_g6

0xa823,	// (0x00038b8f) wml_button_bg_pane_g7

0xa82b,	// (0x00038b97) wml_button_bg_pane_g8

0xa833,	// (0x00038b9f) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0003d5c9) wml_button_bg_pane_g

0x2b0c,	// (0x00030e78) bg_list_pane_cp02

0xa83b,	// (0x00038ba7) mce_header_pane_ParamLimits

0xa83b,	// (0x00038ba7) mce_header_pane

0xa851,	// (0x00038bbd) mce_icon_pane

0xa851,	// (0x00038bbd) mce_image_pane

0xa85a,	// (0x00038bc6) mce_text_pane_ParamLimits

0xa85a,	// (0x00038bc6) mce_text_pane

0x2b14,	// (0x00030e80) scroll_pane_cp03

0xa753,	// (0x00038abf) scroll_pane_cp04

0xa86d,	// (0x00038bd9) scroll_pane_cp05_ParamLimits

0xa86d,	// (0x00038bd9) scroll_pane_cp05

0x2b1e,	// (0x00030e8a) mce_header_field_pane_ParamLimits

0x2b1e,	// (0x00030e8a) mce_header_field_pane

0x2b35,	// (0x00030ea1) mce_header_field_pane_2_ParamLimits

0x2b35,	// (0x00030ea1) mce_header_field_pane_2

0x2b4b,	// (0x00030eb7) mce_header_field_pane_3

0x2b53,	// (0x00030ebf) list_single_mce_message_pane_ParamLimits

0x2b53,	// (0x00030ebf) list_single_mce_message_pane

0x2b68,	// (0x00030ed4) list_single_mce_smart_pane_ParamLimits

0x2b68,	// (0x00030ed4) list_single_mce_smart_pane

0xa879,	// (0x00038be5) input_focus_pane_cp03

0xa882,	// (0x00038bee) list_header_data_pane

0x2b88,	// (0x00030ef4) mce_header_field_pane_t1

0x2b98,	// (0x00030f04) list_single_mce_header_pane_ParamLimits

0x2b98,	// (0x00030f04) list_single_mce_header_pane

0xa88a,	// (0x00038bf6) list_single_mce_header_pane_t1

0xa899,	// (0x00038c05) list_single_mce_message_pane_g1

0xa8a1,	// (0x00038c0d) list_single_mce_message_pane_t1

0x2bd2,	// (0x00030f3e) bg_cale_heading_pane_cp01_ParamLimits

0x2bd2,	// (0x00030f3e) bg_cale_heading_pane_cp01

0xa8af,	// (0x00038c1b) bg_cale_pane_cp02_ParamLimits

0xa8af,	// (0x00038c1b) bg_cale_pane_cp02

0x2c0c,	// (0x00030f78) cale_month_corner_pane

0x2c2b,	// (0x00030f97) cale_month_day_heading_pane_ParamLimits

0x2c2b,	// (0x00030f97) cale_month_day_heading_pane

0x2c7d,	// (0x00030fe9) cale_month_pane_g1_ParamLimits

0x2c7d,	// (0x00030fe9) cale_month_pane_g1

0x2cac,	// (0x00031018) cale_month_pane_g2_ParamLimits

0x2cac,	// (0x00031018) cale_month_pane_g2

0x2cdc,	// (0x00031048) cale_month_pane_g3_ParamLimits

0x2cdc,	// (0x00031048) cale_month_pane_g3

0x2d18,	// (0x00031084) cale_month_pane_g4_ParamLimits

0x2d18,	// (0x00031084) cale_month_pane_g4

0x2d54,	// (0x000310c0) cale_month_pane_g5_ParamLimits

0x2d54,	// (0x000310c0) cale_month_pane_g5

0x2d9c,	// (0x00031108) cale_month_pane_g6_ParamLimits

0x2d9c,	// (0x00031108) cale_month_pane_g6

0x2de8,	// (0x00031154) cale_month_pane_g7_ParamLimits

0x2de8,	// (0x00031154) cale_month_pane_g7

0x2e3c,	// (0x000311a8) cale_month_pane_g8_ParamLimits

0x2e3c,	// (0x000311a8) cale_month_pane_g8

0x2e90,	// (0x000311fc) cale_month_pane_g9_ParamLimits

0x2e90,	// (0x000311fc) cale_month_pane_g9

0x2ee2,	// (0x0003124e) cale_month_pane_g10_ParamLimits

0x2ee2,	// (0x0003124e) cale_month_pane_g10

0x2f34,	// (0x000312a0) cale_month_pane_g11_ParamLimits

0x2f34,	// (0x000312a0) cale_month_pane_g11

0x2f86,	// (0x000312f2) cale_month_pane_g12_ParamLimits

0x2f86,	// (0x000312f2) cale_month_pane_g12

0x2fd8,	// (0x00031344) cale_month_pane_g13_ParamLimits

0x2fd8,	// (0x00031344) cale_month_pane_g13

0x000c,

0xf270,	// (0x0003d5dc) cale_month_pane_g_ParamLimits

0xf270,	// (0x0003d5dc) cale_month_pane_g

0x302a,	// (0x00031396) cale_month_week_pane

0x304e,	// (0x000313ba) grid_cale_month_pane_ParamLimits

0x304e,	// (0x000313ba) grid_cale_month_pane

0x3097,	// (0x00031403) cale_month_day_heading_pane_t1

0x311d,	// (0x00031489) cale_month_day_heading_pane_t2

0x3196,	// (0x00031502) cale_month_day_heading_pane_t3

0x320f,	// (0x0003157b) cale_month_day_heading_pane_t4

0x3290,	// (0x000315fc) cale_month_day_heading_pane_t5

0x3319,	// (0x00031685) cale_month_day_heading_pane_t6

0x33a2,	// (0x0003170e) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0003d5f7) cale_month_day_heading_pane_t

0xa54f,	// (0x000388bb) bg_cale_side_pane_cp01

0x3433,	// (0x0003179f) cale_month_week_pane_t1

0x344c,	// (0x000317b8) cale_month_week_pane_t2

0x3465,	// (0x000317d1) cale_month_week_pane_t3

0x347e,	// (0x000317ea) cale_month_week_pane_t4

0x3497,	// (0x00031803) cale_month_week_pane_t5

0x34b0,	// (0x0003181c) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0003d606) cale_month_week_pane_t

0x34c9,	// (0x00031835) cell_cale_month_pane_ParamLimits

0x34c9,	// (0x00031835) cell_cale_month_pane

0x3621,	// (0x0003198d) cell_cale_month_pane_g1

0x0455,	// (0x0002e7c1) cell_cale_month_pane_t1_ParamLimits

0x0455,	// (0x0002e7c1) cell_cale_month_pane_t1

0xa55d,	// (0x000388c9) grid_highlight_pane_cp08

0xa431,	// (0x0003879d) main_smil_g1

0x362d,	// (0x00031999) smil_status_pane

0xa8ee,	// (0x00038c5a) smil_text_pane

0xc2d6,	// (0x0003a642) bg_popup_call3_rect_pane_g8

0xc2de,	// (0x0003a64a) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0003d8bf) bg_popup_call3_rect_pane_g

0xc525,	// (0x0003a891) smil_status_volume_pane_g1

0xa8f8,	// (0x00038c64) smil_status_pane_t1

0x4a91,	// (0x00032dfd) volume_smil_pane

0xa90f,	// (0x00038c7b) list_smil_text_pane

0x3640,	// (0x000319ac) scroll_pane_cp011

0x364b,	// (0x000319b7) smil_text_list_pane_t1_ParamLimits

0x364b,	// (0x000319b7) smil_text_list_pane_t1

0x3687,	// (0x000319f3) aid_volume_smil_ParamLimits

0x3687,	// (0x000319f3) aid_volume_smil

0xa431,	// (0x0003879d) smil_volume_pane_g1

0xa431,	// (0x0003879d) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0003d626) smil_volume_pane_g

0x1db5,	// (0x00030121) listscroll_cale_day_pane

0xa919,	// (0x00038c85) bg_cale_pane

0xa931,	// (0x00038c9d) list_cale_pane

0xa954,	// (0x00038cc0) scroll_pane_cp09

0xa965,	// (0x00038cd1) cale_bg_pane_g1

0xa96d,	// (0x00038cd9) cale_bg_pane_g2

0xa975,	// (0x00038ce1) cale_bg_pane_g3

0xa97d,	// (0x00038ce9) cale_bg_pane_g4

0xa985,	// (0x00038cf1) cale_bg_pane_g5

0xa98d,	// (0x00038cf9) cale_bg_pane_g6

0xa995,	// (0x00038d01) cale_bg_pane_g7

0xa99d,	// (0x00038d09) cale_bg_pane_g8

0xa9a5,	// (0x00038d11) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0003d62b) cale_bg_pane_g

0x36b1,	// (0x00031a1d) list_cale_time_pane_ParamLimits

0x36b1,	// (0x00031a1d) list_cale_time_pane

0xa9ad,	// (0x00038d19) list_cale_time_pane_g1_ParamLimits

0xa9ad,	// (0x00038d19) list_cale_time_pane_g1

0xa9b9,	// (0x00038d25) list_cale_time_pane_g2_ParamLimits

0xa9b9,	// (0x00038d25) list_cale_time_pane_g2

0x36c6,	// (0x00031a32) list_cale_time_pane_g3_ParamLimits

0x36c6,	// (0x00031a32) list_cale_time_pane_g3

0x36d4,	// (0x00031a40) list_cale_time_pane_g4_ParamLimits

0x36d4,	// (0x00031a40) list_cale_time_pane_g4

0x36e2,	// (0x00031a4e) list_cale_time_pane_g5_ParamLimits

0x36e2,	// (0x00031a4e) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0003d63e) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0003d63e) list_cale_time_pane_g

0xa9d3,	// (0x00038d3f) list_cale_time_pane_t1_ParamLimits

0xa9d3,	// (0x00038d3f) list_cale_time_pane_t1

0xa9fb,	// (0x00038d67) list_cale_time_pane_t2_ParamLimits

0xa9fb,	// (0x00038d67) list_cale_time_pane_t2

0x3ab6,	// (0x00031e22) aid_blid_cardinal_pane

0x3af4,	// (0x00031e60) compass_pane_t4

0xaa23,	// (0x00038d8f) list_cale_time_pane_t4_ParamLimits

0xaa23,	// (0x00038d8f) list_cale_time_pane_t4

0x3b02,	// (0x00031e6e) compass_pane_t5

0x3b10,	// (0x00031e7c) compass_pane_t6

0x3b1e,	// (0x00031e8a) compass_pane_t7

0xaee0,	// (0x0003924c) navi_pane_cc_t1

0xb0bd,	// (0x00039429) aid_phob_thumbnail_center_pane

0x4116,	// (0x00032482) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0003d64b) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0003d64b) list_cale_time_pane_t

0x9d13,	// (0x0003807f) bg_popup_window_pane_cp02_ParamLimits

0x9d13,	// (0x0003807f) bg_popup_window_pane_cp02

0xaa4b,	// (0x00038db7) heading_pane_cp01_ParamLimits

0xaa4b,	// (0x00038db7) heading_pane_cp01

0xaa57,	// (0x00038dc3) loc_req_pane_ParamLimits

0xaa57,	// (0x00038dc3) loc_req_pane

0xaa67,	// (0x00038dd3) loc_type_pane_ParamLimits

0xaa67,	// (0x00038dd3) loc_type_pane

0xaa79,	// (0x00038de5) loc_type_pane_t1_ParamLimits

0xaa79,	// (0x00038de5) loc_type_pane_t1

0xaa8b,	// (0x00038df7) loc_type_pane_t2_ParamLimits

0xaa8b,	// (0x00038df7) loc_type_pane_t2

0xaa9d,	// (0x00038e09) loc_type_pane_t3_ParamLimits

0xaa9d,	// (0x00038e09) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0003d652) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0003d652) loc_type_pane_t

0xaaaf,	// (0x00038e1b) list_loc_req_pane

0xaab9,	// (0x00038e25) scroll_pane_cp012

0x36f0,	// (0x00031a5c) list_single_loc_request_popup_menu_pane_ParamLimits

0x36f0,	// (0x00031a5c) list_single_loc_request_popup_menu_pane

0xaac4,	// (0x00038e30) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaac4,	// (0x00038e30) list_single_loc_request_popup_menu_pane_g1

0xaad0,	// (0x00038e3c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaad0,	// (0x00038e3c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0003d659) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0003d659) list_single_loc_request_popup_menu_pane_g

0xaadc,	// (0x00038e48) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaadc,	// (0x00038e48) list_single_loc_request_popup_menu_pane_t1

0xa317,	// (0x00038683) bg_popup_window_pane_cp03_ParamLimits

0xa317,	// (0x00038683) bg_popup_window_pane_cp03

0xab35,	// (0x00038ea1) heading_loc_req_pane_ParamLimits

0xab35,	// (0x00038ea1) heading_loc_req_pane

0x36fd,	// (0x00031a69) popup_dyc_status_message_window_g1_ParamLimits

0x36fd,	// (0x00031a69) popup_dyc_status_message_window_g1

0x3711,	// (0x00031a7d) popup_dyc_status_message_window_t1_ParamLimits

0x3711,	// (0x00031a7d) popup_dyc_status_message_window_t1

0x3726,	// (0x00031a92) popup_dyc_status_message_window_t2_ParamLimits

0x3726,	// (0x00031a92) popup_dyc_status_message_window_t2

0x373b,	// (0x00031aa7) popup_dyc_status_message_window_t3_ParamLimits

0x373b,	// (0x00031aa7) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0003d65e) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0003d65e) popup_dyc_status_message_window_t

0xa0bc,	// (0x00038428) bg_heading_pane_cp01

0xaaf2,	// (0x00038e5e) heading_loc_req_pane_g1

0xaafa,	// (0x00038e66) heading_loc_req_pane_g2

0xab02,	// (0x00038e6e) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0003d665) heading_loc_req_pane_g

0xab0a,	// (0x00038e76) heading_loc_req_pane_t1

0xab19,	// (0x00038e85) bg_popup_sub_pane_cp01_ParamLimits

0xab19,	// (0x00038e85) bg_popup_sub_pane_cp01

0xab41,	// (0x00038ead) popup_cale_events_window_g1_ParamLimits

0xab41,	// (0x00038ead) popup_cale_events_window_g1

0xab61,	// (0x00038ecd) popup_cale_events_window_g2_ParamLimits

0xab61,	// (0x00038ecd) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0003d699) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0003d699) popup_cale_events_window_g

0xab81,	// (0x00038eed) popup_cale_events_window_t1_ParamLimits

0xab81,	// (0x00038eed) popup_cale_events_window_t1

0xab93,	// (0x00038eff) popup_cale_events_window_t2_ParamLimits

0xab93,	// (0x00038eff) popup_cale_events_window_t2

0xabd1,	// (0x00038f3d) popup_cale_events_window_t3_ParamLimits

0xabd1,	// (0x00038f3d) popup_cale_events_window_t3

0xac0b,	// (0x00038f77) popup_cale_events_window_t4_ParamLimits

0xac0b,	// (0x00038f77) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0003d69e) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0003d69e) popup_cale_events_window_t

0x383e,	// (0x00031baa) call_type_pane

0x384e,	// (0x00031bba) popup_call_status_window_g1

0x3862,	// (0x00031bce) popup_call_status_window_g2

0x3876,	// (0x00031be2) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0003d6a7) popup_call_status_window_g

0xac41,	// (0x00038fad) call_type_pane_g1

0xac4a,	// (0x00038fb6) call_type_pane_g2

0x0001,

0xf342,	// (0x0003d6ae) call_type_pane_g

0xa0bc,	// (0x00038428) bg_popup_sub_pane_cp02

0xac53,	// (0x00038fbf) listscroll_popup_wml_pane

0xac5b,	// (0x00038fc7) list_wml_pane

0xac65,	// (0x00038fd1) scroll_pane_cp013

0xac70,	// (0x00038fdc) list_single_graphic_popup_wml_pane_ParamLimits

0xac70,	// (0x00038fdc) list_single_graphic_popup_wml_pane

0xa431,	// (0x0003879d) list_single_graphic_popup_wml_pane_g1

0xac84,	// (0x00038ff0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0003d6b3) list_single_graphic_popup_wml_pane_g

0xac8c,	// (0x00038ff8) list_single_graphic_popup_wml_pane_t1

0xaca2,	// (0x0003900e) aid_call_pane

0xa30f,	// (0x0003867b) popup_clock_analogue_window_g1

0xa30f,	// (0x0003867b) popup_clock_analogue_window_g2

0x3885,	// (0x00031bf1) popup_clock_analogue_window_g3

0x3885,	// (0x00031bf1) popup_clock_analogue_window_g4

0xa431,	// (0x0003879d) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0003d6b8) popup_clock_analogue_window_g

0x388d,	// (0x00031bf9) popup_clock_analogue_window_t1

0x389b,	// (0x00031c07) clock_digital_number_pane_ParamLimits

0x389b,	// (0x00031c07) clock_digital_number_pane

0x38a7,	// (0x00031c13) clock_digital_number_pane_cp02_ParamLimits

0x38a7,	// (0x00031c13) clock_digital_number_pane_cp02

0x38b3,	// (0x00031c1f) clock_digital_number_pane_cp03_ParamLimits

0x38b3,	// (0x00031c1f) clock_digital_number_pane_cp03

0x38bf,	// (0x00031c2b) clock_digital_number_pane_cp04_ParamLimits

0x38bf,	// (0x00031c2b) clock_digital_number_pane_cp04

0x38cf,	// (0x00031c3b) clock_digital_separator_pane_ParamLimits

0x38cf,	// (0x00031c3b) clock_digital_separator_pane

0x38db,	// (0x00031c47) popup_clock_digital_window_t1

0xa431,	// (0x0003879d) clock_digital_number_pane_g1

0xa431,	// (0x0003879d) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0003d626) clock_digital_number_pane_g

0xa431,	// (0x0003879d) clock_digital_separator_pane_g1

0xa431,	// (0x0003879d) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0003d626) clock_digital_separator_pane_g

0xa0bc,	// (0x00038428) bg_popup_window_pane_cp04

0xacaa,	// (0x00039016) heading_pane_cp03

0xacb2,	// (0x0003901e) listscroll_popup_gms_pane

0xacba,	// (0x00039026) grid_large_graphic_popup_pane

0xacc4,	// (0x00039030) listscroll_popup_gms_pane_g1

0xaccc,	// (0x00039038) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0003d6c3) listscroll_popup_gms_pane_g

0xa753,	// (0x00038abf) scroll_pane_cp014

0x38f8,	// (0x00031c64) cell_large_graphic_popup_pane_ParamLimits

0x38f8,	// (0x00031c64) cell_large_graphic_popup_pane

0x3910,	// (0x00031c7c) cell_large_graphic_popup_pane_g1_ParamLimits

0x3910,	// (0x00031c7c) cell_large_graphic_popup_pane_g1

0xacd4,	// (0x00039040) cell_large_graphic_popup_pane_g2_ParamLimits

0xacd4,	// (0x00039040) cell_large_graphic_popup_pane_g2

0xace0,	// (0x0003904c) cell_large_graphic_popup_pane_g3_ParamLimits

0xace0,	// (0x0003904c) cell_large_graphic_popup_pane_g3

0xaced,	// (0x00039059) cell_large_graphic_popup_pane_g4_ParamLimits

0xaced,	// (0x00039059) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0003d6c8) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0003d6c8) cell_large_graphic_popup_pane_g

0xacfd,	// (0x00039069) grid_highlight_pane_cp010

0xa431,	// (0x0003879d) bg_popup_call_pane_g1

0xad07,	// (0x00039073) list_single_graphic_popup_conf_pane_ParamLimits

0xad07,	// (0x00039073) list_single_graphic_popup_conf_pane

0xad1a,	// (0x00039086) list_highlight_pane_cp01

0xad23,	// (0x0003908f) list_single_graphic_popup_conf_pane_g1

0xad2b,	// (0x00039097) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0003d6d1) list_single_graphic_popup_conf_pane_g

0xad33,	// (0x0003909f) list_single_graphic_popup_conf_pane_t1

0xad41,	// (0x000390ad) linegrid_cams_pane_g1

0x391c,	// (0x00031c88) linegrid_cams_pane_g2

0xa590,	// (0x000388fc) linegrid_cams_pane_g3

0xad4a,	// (0x000390b6) linegrid_cams_pane_g4

0x3925,	// (0x00031c91) linegrid_cams_pane_g5

0x392e,	// (0x00031c9a) linegrid_cams_pane_g6

0xa599,	// (0x00038905) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0003d6d6) linegrid_cams_pane_g

0xad53,	// (0x000390bf) popup_clock_analogue_window

0xad53,	// (0x000390bf) popup_clock_digital_window

0xa0bc,	// (0x00038428) popup_phob_thumbnail_window

0xa431,	// (0x0003879d) call_video_uplink_pane_g1

0xad5c,	// (0x000390c8) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0003d6e5) call_video_uplink_pane_g

0xad64,	// (0x000390d0) video_uplink_pane

0xad6c,	// (0x000390d8) mce_image_pane_g1

0x3939,	// (0x00031ca5) mce_image_pane_g2

0x3943,	// (0x00031caf) mce_image_pane_g3

0x394b,	// (0x00031cb7) mce_image_pane_g4

0x3953,	// (0x00031cbf) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0003d6ea) mce_image_pane_g

0xad76,	// (0x000390e2) control_top_pane_stacon_cp01_ParamLimits

0xad76,	// (0x000390e2) control_top_pane_stacon_cp01

0xad8a,	// (0x000390f6) uni_indicator_pane_stacon_cp01_ParamLimits

0xad8a,	// (0x000390f6) uni_indicator_pane_stacon_cp01

0xad9b,	// (0x00039107) bg_popup_sub_pane_cp03

0xada5,	// (0x00039111) chi_dic_find_pane

0x395b,	// (0x00031cc7) listscroll_chi_dic_pane

0xadad,	// (0x00039119) main_pane_chidic_g1

0xadb5,	// (0x00039121) chi_dic_find_pane_t1

0xadc3,	// (0x0003912f) find_chidic_pane

0xadcc,	// (0x00039138) chi_dic_list_pane_ParamLimits

0xadcc,	// (0x00039138) chi_dic_list_pane

0xaddd,	// (0x00039149) scroll_pane_cp020

0xade5,	// (0x00039151) find_chidic_pane_t1

0xa0bc,	// (0x00038428) input_focus_pane_cp06

0x396f,	// (0x00031cdb) list_chi_dic_pane_ParamLimits

0x396f,	// (0x00031cdb) list_chi_dic_pane

0x3981,	// (0x00031ced) list_chi_dic_pane_t1_ParamLimits

0x3981,	// (0x00031ced) list_chi_dic_pane_t1

0xa0bc,	// (0x00038428) list_highlight_pane_cp020

0xadf4,	// (0x00039160) bg_cale_heading_pane_g1

0x3994,	// (0x00031d00) bg_cale_heading_pane_g2

0x399c,	// (0x00031d08) bg_cale_heading_pane_g3

0x39a4,	// (0x00031d10) bg_cale_heading_pane_g4

0x39ae,	// (0x00031d1a) bg_cale_heading_pane_g5

0x39b8,	// (0x00031d24) bg_cale_heading_pane_g6

0x39c0,	// (0x00031d2c) bg_cale_heading_pane_g7

0x39c8,	// (0x00031d34) bg_cale_heading_pane_g8

0x39d2,	// (0x00031d3e) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0003d6f5) bg_cale_heading_pane_g

0xadf4,	// (0x00039160) bg_cale_side_pane_g1

0x39dc,	// (0x00031d48) bg_cale_side_pane_g2

0x39e4,	// (0x00031d50) bg_cale_side_pane_g3

0x39ec,	// (0x00031d58) bg_cale_side_pane_g4

0x39f4,	// (0x00031d60) bg_cale_side_pane_g5

0x39fc,	// (0x00031d68) bg_cale_side_pane_g6

0x3a04,	// (0x00031d70) bg_cale_side_pane_g7

0x3a0c,	// (0x00031d78) bg_cale_side_pane_g8

0x3a14,	// (0x00031d80) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0003d708) bg_cale_side_pane_g

0x3a1c,	// (0x00031d88) popup_call_status_window_ParamLimits

0x3a1c,	// (0x00031d88) popup_call_status_window

0xadfc,	// (0x00039168) stacon_top_pane

0xae04,	// (0x00039170) status_pane_ParamLimits

0xae04,	// (0x00039170) status_pane

0xae19,	// (0x00039185) status_small_pane

0xae21,	// (0x0003918d) control_pane

0xa0bc,	// (0x00038428) stacon_bottom_pane

0xae29,	// (0x00039195) list_single_mce_smart_pane_t1_ParamLimits

0xae29,	// (0x00039195) list_single_mce_smart_pane_t1

0xae3c,	// (0x000391a8) list_single_mce_smart_pane_t2_ParamLimits

0xae3c,	// (0x000391a8) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0003d71b) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0003d71b) list_single_mce_smart_pane_t

0x3a65,	// (0x00031dd1) compass_pane

0x3a6e,	// (0x00031dda) main_location2_pane_t1

0x3a80,	// (0x00031dec) main_location2_pane_t2

0x3a92,	// (0x00031dfe) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0003d720) main_location2_pane_t

0xae5b,	// (0x000391c7) compass_pane_g1_ParamLimits

0xae5b,	// (0x000391c7) compass_pane_g1

0x3ad6,	// (0x00031e42) compass_pane_t1

0x3ae5,	// (0x00031e51) compass_pane_t2

0x0005,

0xf3bd,	// (0x0003d729) compass_pane_t

0x3b2c,	// (0x00031e98) text_secondary_cp61

0xaed7,	// (0x00039243) navi_pane_cams_g5

0xaf53,	// (0x000392bf) navi_pane_im_t1

0xaf61,	// (0x000392cd) navi_pane_mp_g1_ParamLimits

0xaf61,	// (0x000392cd) navi_pane_mp_g1

0xaf75,	// (0x000392e1) navi_pane_mp_g2_ParamLimits

0xaf75,	// (0x000392e1) navi_pane_mp_g2

0xaf81,	// (0x000392ed) navi_pane_mp_g3_ParamLimits

0xaf81,	// (0x000392ed) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0003d73d) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0003d73d) navi_pane_mp_g

0xaf8d,	// (0x000392f9) navi_pane_mp_t1

0xaf9b,	// (0x00039307) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0003d744) navi_pane_mp_t

0xb006,	// (0x00039372) navi_pane_vt_g1

0xaf8d,	// (0x000392f9) navi_pane_vt_t1

0xb00e,	// (0x0003937a) navi_slider_pane

0xa5aa,	// (0x00038916) zooming_pane

0xb01e,	// (0x0003938a) navi_slider_pane_g1

0x3b7d,	// (0x00031ee9) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0003d74b) navi_slider_pane_g

0xb042,	// (0x000393ae) aid_levels_zoom

0xb04a,	// (0x000393b6) zooming_pane_g1

0xb052,	// (0x000393be) zooming_pane_g2

0xb052,	// (0x000393be) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0003d75a) zooming_pane_g

0xb05a,	// (0x000393c6) level_10_zoom

0xb063,	// (0x000393cf) level_11_zoom

0xb06c,	// (0x000393d8) level_1_zoom

0xb075,	// (0x000393e1) level_2_zoom

0xb07e,	// (0x000393ea) level_3_zoom

0xb087,	// (0x000393f3) level_4_zoom

0xb090,	// (0x000393fc) level_5_zoom

0xb099,	// (0x00039405) level_6_zoom

0xb0a2,	// (0x0003940e) level_7_zoom

0xb0ab,	// (0x00039417) level_8_zoom

0xb0b4,	// (0x00039420) level_9_zoom

0xb0c5,	// (0x00039431) popup_phob_thumbnail_window_g1

0xb0cd,	// (0x00039439) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0003d761) popup_phob_thumbnail_window_g

0xc438,	// (0x0003a7a4) level_1_location

0xc440,	// (0x0003a7ac) level_2_location

0xc448,	// (0x0003a7b4) level_3_location

0xc450,	// (0x0003a7bc) level_4_location

0xa5aa,	// (0x00038916) level_5_location

0x3b8f,	// (0x00031efb) mce_icon_pane_g1

0x3b99,	// (0x00031f05) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0003d766) mce_icon_pane_g

0x3ba1,	// (0x00031f0d) main_mup_pane_g1_ParamLimits

0x3ba1,	// (0x00031f0d) main_mup_pane_g1

0x3bb7,	// (0x00031f23) main_mup_pane_g2_ParamLimits

0x3bb7,	// (0x00031f23) main_mup_pane_g2

0x3bcf,	// (0x00031f3b) main_mup_pane_g3_ParamLimits

0x3bcf,	// (0x00031f3b) main_mup_pane_g3

0x3be7,	// (0x00031f53) main_mup_pane_g4_ParamLimits

0x3be7,	// (0x00031f53) main_mup_pane_g4

0x3bff,	// (0x00031f6b) main_mup_pane_g5_ParamLimits

0x3bff,	// (0x00031f6b) main_mup_pane_g5

0x3c1b,	// (0x00031f87) main_mup_pane_g6_ParamLimits

0x3c1b,	// (0x00031f87) main_mup_pane_g6

0x3c33,	// (0x00031f9f) main_mup_pane_g7_ParamLimits

0x3c33,	// (0x00031f9f) main_mup_pane_g7

0x3c4b,	// (0x00031fb7) main_mup_pane_g8_ParamLimits

0x3c4b,	// (0x00031fb7) main_mup_pane_g8

0x3c65,	// (0x00031fd1) main_mup_pane_g9_ParamLimits

0x3c65,	// (0x00031fd1) main_mup_pane_g9

0x3c7f,	// (0x00031feb) main_mup_pane_g10_ParamLimits

0x3c7f,	// (0x00031feb) main_mup_pane_g10

0x3c99,	// (0x00032005) main_mup_pane_g11_ParamLimits

0x3c99,	// (0x00032005) main_mup_pane_g11

0x3cad,	// (0x00032019) main_mup_pane_g12_ParamLimits

0x3cad,	// (0x00032019) main_mup_pane_g12

0x3cc3,	// (0x0003202f) main_mup_pane_g13_ParamLimits

0x3cc3,	// (0x0003202f) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0003d76b) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0003d76b) main_mup_pane_g

0x3cd7,	// (0x00032043) main_mup_pane_t1_ParamLimits

0x3cd7,	// (0x00032043) main_mup_pane_t1

0x3cf1,	// (0x0003205d) main_mup_pane_t2_ParamLimits

0x3cf1,	// (0x0003205d) main_mup_pane_t2

0x3d09,	// (0x00032075) main_mup_pane_t3_ParamLimits

0x3d09,	// (0x00032075) main_mup_pane_t3

0x3d21,	// (0x0003208d) main_mup_pane_t4_ParamLimits

0x3d21,	// (0x0003208d) main_mup_pane_t4

0x3d3f,	// (0x000320ab) main_mup_pane_t5_ParamLimits

0x3d3f,	// (0x000320ab) main_mup_pane_t5

0x3d54,	// (0x000320c0) main_mup_pane_t6_ParamLimits

0x3d54,	// (0x000320c0) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0003d786) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0003d786) main_mup_pane_t

0x3d66,	// (0x000320d2) mup_progress_pane_ParamLimits

0x3d66,	// (0x000320d2) mup_progress_pane

0x3d72,	// (0x000320de) mup_visualizer_pane_ParamLimits

0x3d72,	// (0x000320de) mup_visualizer_pane

0x3da2,	// (0x0003210e) mup_volume_pane_ParamLimits

0x3da2,	// (0x0003210e) mup_volume_pane

0xb0d5,	// (0x00039441) mup_visualizer_pane_g1_ParamLimits

0xb0d5,	// (0x00039441) mup_visualizer_pane_g1

0xb0d5,	// (0x00039441) mup_visualizer_pane_g2_ParamLimits

0xb0d5,	// (0x00039441) mup_visualizer_pane_g2

0xae5b,	// (0x000391c7) mup_visualizer_pane_g3_ParamLimits

0xae5b,	// (0x000391c7) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0003d793) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0003d793) mup_visualizer_pane_g

0xa431,	// (0x0003879d) mup_volume_pane_g1

0xb0eb,	// (0x00039457) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0003d79a) mup_volume_pane_g

0xa431,	// (0x0003879d) mup_progress_pane_g1

0xb0f4,	// (0x00039460) mup_progress_pane_g2

0xb0fd,	// (0x00039469) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0003d79f) mup_progress_pane_g

0xa0bc,	// (0x00038428) bg_popup_window_pane_cp05

0xb106,	// (0x00039472) heading_pane_cp02_ParamLimits

0xb106,	// (0x00039472) heading_pane_cp02

0xb120,	// (0x0003948c) list_popup_blid_pane

0xb128,	// (0x00039494) list_blid_sat_info_pane_ParamLimits

0xb128,	// (0x00039494) list_blid_sat_info_pane

0xb13b,	// (0x000394a7) list_blid_sat_info_pane_g1

0xb143,	// (0x000394af) list_blid_sat_info_pane_t1

0x3eb8,	// (0x00032224) mup_equalizer_pane_ParamLimits

0x3eb8,	// (0x00032224) mup_equalizer_pane

0x3ed1,	// (0x0003223d) mup_equalizer_pane_cp1_ParamLimits

0x3ed1,	// (0x0003223d) mup_equalizer_pane_cp1

0x3eee,	// (0x0003225a) mup_equalizer_pane_cp2_ParamLimits

0x3eee,	// (0x0003225a) mup_equalizer_pane_cp2

0x3f0b,	// (0x00032277) mup_equalizer_pane_cp3_ParamLimits

0x3f0b,	// (0x00032277) mup_equalizer_pane_cp3

0x3f2c,	// (0x00032298) mup_equalizer_pane_cp4_ParamLimits

0x3f2c,	// (0x00032298) mup_equalizer_pane_cp4

0x3f4d,	// (0x000322b9) mup_equalizer_pane_cp5

0x3f61,	// (0x000322cd) mup_equalizer_pane_cp6

0x3f75,	// (0x000322e1) mup_equalizer_pane_cp7

0xc356,	// (0x0003a6c2) bg_popup_call_poc_act_pane_g9

0xc35e,	// (0x0003a6ca) bg_popup_call_poc_act_pane_g10

0xc366,	// (0x0003a6d2) bg_popup_call_poc_act_pane_g11

0x000a,

0xa317,	// (0x00038683) mup_scale_pane

0xa431,	// (0x0003879d) mup_scale_pane_g1

0xb151,	// (0x000394bd) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0003d7bb) mup_scale_pane_g

0xb175,	// (0x000394e1) msg_data_pane

0xb17d,	// (0x000394e9) scroll_pane_cp017

0x3f9b,	// (0x00032307) bg_list_pane_cp04_ParamLimits

0x3f9b,	// (0x00032307) bg_list_pane_cp04

0xb18d,	// (0x000394f9) msg_data_pane_g1

0x3fb3,	// (0x0003231f) msg_data_pane_g2

0x3fbd,	// (0x00032329) msg_data_pane_g3

0x3fc5,	// (0x00032331) msg_data_pane_g4

0x3fcd,	// (0x00032339) msg_data_pane_g5

0x3fd5,	// (0x00032341) msg_data_pane_g6

0x3fdd,	// (0x00032349) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0003d7ca) msg_data_pane_g

0x3fe5,	// (0x00032351) msg_text_pane_ParamLimits

0x3fe5,	// (0x00032351) msg_text_pane

0x4010,	// (0x0003237c) qrid_highlight_pane_cp011_ParamLimits

0x4010,	// (0x0003237c) qrid_highlight_pane_cp011

0xa0bc,	// (0x00038428) msg_body_pane

0xa0bc,	// (0x00038428) msg_header_pane

0xb19e,	// (0x0003950a) input_focus_pane_cp07

0xb1b3,	// (0x0003951f) msg_header_pane_t1_ParamLimits

0xb1b3,	// (0x0003951f) msg_header_pane_t1

0xb1c5,	// (0x00039531) msg_header_pane_t2_ParamLimits

0xb1c5,	// (0x00039531) msg_header_pane_t2

0x0001,

0xf472,	// (0x0003d7de) msg_header_pane_t_ParamLimits

0xf472,	// (0x0003d7de) msg_header_pane_t

0xb1d7,	// (0x00039543) msg_body_pane_g1

0xb1df,	// (0x0003954b) msg_body_pane_t1_ParamLimits

0xb1df,	// (0x0003954b) msg_body_pane_t1

0xb210,	// (0x0003957c) msg_body_pane_t2_ParamLimits

0xb210,	// (0x0003957c) msg_body_pane_t2

0xb222,	// (0x0003958e) msg_body_pane_t3_ParamLimits

0xb222,	// (0x0003958e) msg_body_pane_t3

0x0002,

0xf477,	// (0x0003d7e3) msg_body_pane_t_ParamLimits

0xf477,	// (0x0003d7e3) msg_body_pane_t

0x049d,	// (0x0002e809) main_viewer_pane_g1_ParamLimits

0x049d,	// (0x0002e809) main_viewer_pane_g1

0x04ab,	// (0x0002e817) main_viewer_pane_g2_ParamLimits

0x04ab,	// (0x0002e817) main_viewer_pane_g2

0x406a,	// (0x000323d6) main_viewer_pane_g3_ParamLimits

0x406a,	// (0x000323d6) main_viewer_pane_g3

0x4079,	// (0x000323e5) main_viewer_pane_g4_ParamLimits

0x4079,	// (0x000323e5) main_viewer_pane_g4

0x4088,	// (0x000323f4) main_viewer_pane_g5_ParamLimits

0x4088,	// (0x000323f4) main_viewer_pane_g5

0x4088,	// (0x000323f4) main_viewer_pane_g7_ParamLimits

0x4088,	// (0x000323f4) main_viewer_pane_g7

0xaac4,	// (0x00038e30) main_viewer_pane_g8_ParamLimits

0xaac4,	// (0x00038e30) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0003d7f3) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0003d7f3) main_viewer_pane_g

0xb234,	// (0x000395a0) viewer_content_pane_ParamLimits

0xb234,	// (0x000395a0) viewer_content_pane

0x40d3,	// (0x0003243f) main_postcard_pane_g1_ParamLimits

0x40d3,	// (0x0003243f) main_postcard_pane_g1

0x40e9,	// (0x00032455) main_postcard_pane_g2_ParamLimits

0x40e9,	// (0x00032455) main_postcard_pane_g2

0x40ff,	// (0x0003246b) main_postcard_pane_g3_ParamLimits

0x40ff,	// (0x0003246b) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0003d804) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0003d804) main_postcard_pane_g

0x4116,	// (0x00032482) main_postcard_pane_g4

0xc538,	// (0x0003a8a4) smil_status_volume_pane_g2

0x4159,	// (0x000324c5) postcard_pane_ParamLimits

0x4159,	// (0x000324c5) postcard_pane

0xb242,	// (0x000395ae) postcard_pane_g1_ParamLimits

0xb242,	// (0x000395ae) postcard_pane_g1

0x419b,	// (0x00032507) postcard_pane_g2_ParamLimits

0x419b,	// (0x00032507) postcard_pane_g2

0x41a7,	// (0x00032513) postcard_pane_g3_ParamLimits

0x41a7,	// (0x00032513) postcard_pane_g3

0xb250,	// (0x000395bc) postcard_pane_g4_ParamLimits

0xb250,	// (0x000395bc) postcard_pane_g4

0x41b3,	// (0x0003251f) postcard_pane_g5_ParamLimits

0x41b3,	// (0x0003251f) postcard_pane_g5

0x41c8,	// (0x00032534) postcard_pane_g6_ParamLimits

0x41c8,	// (0x00032534) postcard_pane_g6

0xb242,	// (0x000395ae) postcard_pane_g7_ParamLimits

0xb242,	// (0x000395ae) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0003d811) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0003d811) postcard_pane_g

0x41dc,	// (0x00032548) main_mp2_pane_g1_ParamLimits

0x41dc,	// (0x00032548) main_mp2_pane_g1

0x41e8,	// (0x00032554) main_mp2_pane_g2_ParamLimits

0x41e8,	// (0x00032554) main_mp2_pane_g2

0x41f4,	// (0x00032560) main_mp2_pane_g3_ParamLimits

0x41f4,	// (0x00032560) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0003d820) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0003d820) main_mp2_pane_g

0x4200,	// (0x0003256c) main_mp2_pane_t1_ParamLimits

0x4200,	// (0x0003256c) main_mp2_pane_t1

0x4215,	// (0x00032581) main_mp2_pane_t2_ParamLimits

0x4215,	// (0x00032581) main_mp2_pane_t2

0x4227,	// (0x00032593) main_mp2_pane_t3_ParamLimits

0x4227,	// (0x00032593) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0003d827) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0003d827) main_mp2_pane_t

0xb25e,	// (0x000395ca) pec_content_pane_ParamLimits

0xb25e,	// (0x000395ca) pec_content_pane

0xa753,	// (0x00038abf) scroll_pane_cp015

0xb270,	// (0x000395dc) pec_attribute_pane_ParamLimits

0xb270,	// (0x000395dc) pec_attribute_pane

0x4239,	// (0x000325a5) pec_content_pane_g1_ParamLimits

0x4239,	// (0x000325a5) pec_content_pane_g1

0xb280,	// (0x000395ec) pec_content_pane_t1_ParamLimits

0xb280,	// (0x000395ec) pec_content_pane_t1

0xb292,	// (0x000395fe) pec_content_pane_t2_ParamLimits

0xb292,	// (0x000395fe) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0003d82e) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0003d82e) pec_content_pane_t

0x4245,	// (0x000325b1) list_single_graphic_pane_cp01_ParamLimits

0x4245,	// (0x000325b1) list_single_graphic_pane_cp01

0xa317,	// (0x00038683) bg_popup_sub_pane_cp04

0xb2a4,	// (0x00039610) popup_mup_playback_window_g1

0xb2b0,	// (0x0003961c) popup_mup_playback_window_t1

0xb2c5,	// (0x00039631) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0003d833) popup_mup_playback_window_t

0xb2fc,	// (0x00039668) main_image_pane_g1_ParamLimits

0xb2fc,	// (0x00039668) main_image_pane_g1

0xb33f,	// (0x000396ab) scroll_pane_cp018_ParamLimits

0xb33f,	// (0x000396ab) scroll_pane_cp018

0xb357,	// (0x000396c3) scroll_pane_cp016_ParamLimits

0xb357,	// (0x000396c3) scroll_pane_cp016

0x4312,	// (0x0003267e) smil2_image_pane_ParamLimits

0x4312,	// (0x0003267e) smil2_image_pane

0x4342,	// (0x000326ae) smil2_root_pane_ParamLimits

0x4342,	// (0x000326ae) smil2_root_pane

0x437a,	// (0x000326e6) smil2_text_pane_ParamLimits

0x437a,	// (0x000326e6) smil2_text_pane

0xa0bc,	// (0x00038428) bg_list_pane_cp06

0xb393,	// (0x000396ff) grid_radio_pane

0xa0bc,	// (0x00038428) bg_popup_window_pane_cp06

0xb39b,	// (0x00039707) main_fmradio_pane_t1

0xacaa,	// (0x00039016) heading_pane_cp04

0xb3a9,	// (0x00039715) main_fmradio_pane_t2

0xc36e,	// (0x0003a6da) popup_cale_lunar_info_window_g1

0xb3b7,	// (0x00039723) main_fmradio_pane_t3

0xc376,	// (0x0003a6e2) popup_cale_lunar_info_window_g2

0xb3c5,	// (0x00039731) main_fmradio_pane_t4

0x0001,

0xb3d3,	// (0x0003973f) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0003d90e) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0003d848) main_fmradio_pane_t

0xb3e1,	// (0x0003974d) wait_bar_pane_cp03

0xb3e9,	// (0x00039755) cell_fmradio_pane_ParamLimits

0xb3e9,	// (0x00039755) cell_fmradio_pane

0xb242,	// (0x000395ae) cell_fmradio_pane_g1_ParamLimits

0xb242,	// (0x000395ae) cell_fmradio_pane_g1

0xa0bc,	// (0x00038428) grid_highlight_pane_cp011

0xb3fc,	// (0x00039768) poc_content_pane_ParamLimits

0xb3fc,	// (0x00039768) poc_content_pane

0xb40e,	// (0x0003977a) scroll_pane_cp019

0x43fa,	// (0x00032766) popup_call_poc_act_window_ParamLimits

0x43fa,	// (0x00032766) popup_call_poc_act_window

0x441e,	// (0x0003278a) popup_call_poc_inact_window_ParamLimits

0x441e,	// (0x0003278a) popup_call_poc_inact_window

0xf579,	// (0x0003d8e5) bg_popup_call_poc_act_pane_g

0xc2e6,	// (0x0003a652) bg_popup_call_poc_inact_pane_g1

0xc2ee,	// (0x0003a65a) bg_popup_call_poc_inact_pane_g2

0xb416,	// (0x00039782) popup_call_poc_act_window_g2

0xc2f6,	// (0x0003a662) bg_popup_call_poc_inact_pane_g3

0xc2fe,	// (0x0003a66a) bg_popup_call_poc_inact_pane_g4

0xc306,	// (0x0003a672) bg_popup_call_poc_inact_pane_g5

0xb41e,	// (0x0003978a) popup_call_poc_act_window_t1_ParamLimits

0xb41e,	// (0x0003978a) popup_call_poc_act_window_t1

0xb446,	// (0x000397b2) popup_call_poc_act_window_t2_ParamLimits

0xb446,	// (0x000397b2) popup_call_poc_act_window_t2

0xb46e,	// (0x000397da) popup_call_poc_act_window_t3_ParamLimits

0xb46e,	// (0x000397da) popup_call_poc_act_window_t3

0xb496,	// (0x00039802) popup_call_poc_act_window_t4_ParamLimits

0xb496,	// (0x00039802) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0003d853) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0003d853) popup_call_poc_act_window_t

0xc30e,	// (0x0003a67a) bg_popup_call_poc_inact_pane_g6

0xc316,	// (0x0003a682) bg_popup_call_poc_inact_pane_g7

0xc31e,	// (0x0003a68a) bg_popup_call_poc_inact_pane_g8

0xb4a8,	// (0x00039814) popup_call_poc_inact_window_g2

0xc326,	// (0x0003a692) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0003d8d2) bg_popup_call_poc_inact_pane_g

0xb4b0,	// (0x0003981c) popup_call_poc_inact_window_t1_ParamLimits

0xb4b0,	// (0x0003981c) popup_call_poc_inact_window_t1

0xb4c5,	// (0x00039831) popup_call_poc_inact_window_t2_ParamLimits

0xb4c5,	// (0x00039831) popup_call_poc_inact_window_t2

0xb4da,	// (0x00039846) popup_call_poc_inact_window_t3_ParamLimits

0xb4da,	// (0x00039846) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0003d85c) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0003d85c) popup_call_poc_inact_window_t

0xc4ab,	// (0x0003a817) context_pane_ParamLimits

0x49f7,	// (0x00032d63) signal_pane_ParamLimits

0xa5aa,	// (0x00038916) main_call2_pane

0x4986,	// (0x00032cf2) popup_phob_thumbnail2_window_ParamLimits

0x4986,	// (0x00032cf2) popup_phob_thumbnail2_window

0x4034,	// (0x000323a0) aid_hotspot_pointer_arrow_pane

0x403c,	// (0x000323a8) aid_hotspot_pointer_hand_pane

0x4767,	// (0x00032ad3) phob_pre_status_pane_g5

0x22bc,	// (0x00030628) cams_zoom_pane_ParamLimits

0x22cb,	// (0x00030637) image_vga_pane_ParamLimits

0x22e5,	// (0x00030651) main_camera_pane_g1_ParamLimits

0x22f7,	// (0x00030663) main_camera_pane_g2_ParamLimits

0x2307,	// (0x00030673) main_camera_pane_g3_ParamLimits

0x2317,	// (0x00030683) main_camera_pane_g4_ParamLimits

0x2327,	// (0x00030693) main_camera_pane_g5_ParamLimits

0x2337,	// (0x000306a3) main_camera_pane_g6_ParamLimits

0x2349,	// (0x000306b5) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0003d55b) main_camera_pane_g_ParamLimits

0x2359,	// (0x000306c5) main_camera_pane_t1_ParamLimits

0x236f,	// (0x000306db) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0003d56c) main_camera_pane_t_ParamLimits

0xa317,	// (0x00038683) bg_popup_preview_window_pane_cp01_ParamLimits

0xa317,	// (0x00038683) bg_popup_preview_window_pane_cp01

0xb4ef,	// (0x0003985b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb4ef,	// (0x0003985b) popup_phob_thumbnail2_window_g1

0xa0bc,	// (0x00038428) call2_cli_visual_pane

0x4452,	// (0x000327be) popup_call2_audio_conf_window_ParamLimits

0x4452,	// (0x000327be) popup_call2_audio_conf_window

0x4472,	// (0x000327de) popup_call2_audio_first_window_ParamLimits

0x4472,	// (0x000327de) popup_call2_audio_first_window

0x4508,	// (0x00032874) popup_call2_audio_in_window_ParamLimits

0x4508,	// (0x00032874) popup_call2_audio_in_window

0x4550,	// (0x000328bc) popup_call2_audio_out_window_ParamLimits

0x4550,	// (0x000328bc) popup_call2_audio_out_window

0x45ba,	// (0x00032926) popup_call2_audio_second_window_ParamLimits

0x45ba,	// (0x00032926) popup_call2_audio_second_window

0x4620,	// (0x0003298c) popup_call2_audio_wait_window_ParamLimits

0x4620,	// (0x0003298c) popup_call2_audio_wait_window

0xa0bc,	// (0x00038428) bg_popup_call2_act_pane_cp03

0xa2f9,	// (0x00038665) list_conf_pane_cp

0xb4fb,	// (0x00039867) popup_call2_audio_conf_window_t1

0xad07,	// (0x00039073) list_single_graphic_popup_conf2_pane_ParamLimits

0xad07,	// (0x00039073) list_single_graphic_popup_conf2_pane

0xad1a,	// (0x00039086) list_highlight_pane_cp04

0xb509,	// (0x00039875) list_single_graphic_popup_conf2_pane_g1

0xad2b,	// (0x00039097) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0003d863) list_single_graphic_popup_conf2_pane_g

0xb513,	// (0x0003987f) list_single_graphic_popup_conf2_pane_t1

0xb521,	// (0x0003988d) bg_popup_call2_act_pane_cp01_ParamLimits

0xb521,	// (0x0003988d) bg_popup_call2_act_pane_cp01

0xb5ab,	// (0x00039917) call_type_pane_cp05_ParamLimits

0xb5ab,	// (0x00039917) call_type_pane_cp05

0xb5ff,	// (0x0003996b) popup_call2_audio_second_window_g1_ParamLimits

0xb5ff,	// (0x0003996b) popup_call2_audio_second_window_g1

0xb653,	// (0x000399bf) popup_call2_audio_second_window_g2_ParamLimits

0xb653,	// (0x000399bf) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0003d868) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0003d868) popup_call2_audio_second_window_g

0xb6b8,	// (0x00039a24) popup_call2_audio_second_window_t1_ParamLimits

0xb6b8,	// (0x00039a24) popup_call2_audio_second_window_t1

0xb773,	// (0x00039adf) popup_call2_audio_second_window_t2_ParamLimits

0xb773,	// (0x00039adf) popup_call2_audio_second_window_t2

0xb7c6,	// (0x00039b32) popup_call2_audio_second_window_t3_ParamLimits

0xb7c6,	// (0x00039b32) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0003d86f) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0003d86f) popup_call2_audio_second_window_t

0xa0bc,	// (0x00038428) bg_popup_call2_in_pane_cp02

0xa0c6,	// (0x00038432) call_type_pane_cp04

0xa0ce,	// (0x0003843a) popup_call2_audio_wait_window_g1

0xa0d6,	// (0x00038442) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0003d44a) popup_call2_audio_wait_window_g

0xa0de,	// (0x0003844a) popup_call2_audio_wait_window_t3

0xb8b9,	// (0x00039c25) bg_popup_call2_act_pane_ParamLimits

0xb8b9,	// (0x00039c25) bg_popup_call2_act_pane

0xb979,	// (0x00039ce5) call_type_pane_cp03_ParamLimits

0xb979,	// (0x00039ce5) call_type_pane_cp03

0xb9dd,	// (0x00039d49) popup_call2_audio_first_window_g1_ParamLimits

0xb9dd,	// (0x00039d49) popup_call2_audio_first_window_g1

0xba4d,	// (0x00039db9) popup_call2_audio_first_window_g2_ParamLimits

0xba4d,	// (0x00039db9) popup_call2_audio_first_window_g2

0xb0d5,	// (0x00039441) popup_call2_audio_first_window_g3_ParamLimits

0xb0d5,	// (0x00039441) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0003d878) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0003d878) popup_call2_audio_first_window_g

0xbb2b,	// (0x00039e97) popup_call2_audio_first_window_t1_ParamLimits

0xbb2b,	// (0x00039e97) popup_call2_audio_first_window_t1

0xbc2e,	// (0x00039f9a) popup_call2_audio_first_window_t4_ParamLimits

0xbc2e,	// (0x00039f9a) popup_call2_audio_first_window_t4

0xbd11,	// (0x0003a07d) popup_call2_audio_first_window_t5_ParamLimits

0xbd11,	// (0x0003a07d) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0003d883) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0003d883) popup_call2_audio_first_window_t

0xa30f,	// (0x0003867b) bg_popup_call2_act_pane_g1

0xc37e,	// (0x0003a6ea) popup_cale_lunar_info_window_t1

0xc38c,	// (0x0003a6f8) popup_cale_lunar_info_window_t2

0xc39a,	// (0x0003a706) popup_cale_lunar_info_window_t3

0xa0bc,	// (0x00038428) bg_popup_call2_bubble_pane

0xbe12,	// (0x0003a17e) bg_popup_call2_in_pane_cp01_ParamLimits

0xbe12,	// (0x0003a17e) bg_popup_call2_in_pane_cp01

0x9d98,	// (0x00038104) call_type_pane_cp02

0xbe5a,	// (0x0003a1c6) popup_call2_audio_out_window_g1_ParamLimits

0xbe5a,	// (0x0003a1c6) popup_call2_audio_out_window_g1

0xbe86,	// (0x0003a1f2) popup_call2_audio_out_window_g2_ParamLimits

0xbe86,	// (0x0003a1f2) popup_call2_audio_out_window_g2

0xbeae,	// (0x0003a21a) popup_call2_audio_out_window_g3_ParamLimits

0xbeae,	// (0x0003a21a) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0003d88c) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0003d88c) popup_call2_audio_out_window_g

0xbee9,	// (0x0003a255) popup_call2_audio_out_window_t1_ParamLimits

0xbee9,	// (0x0003a255) popup_call2_audio_out_window_t1

0xbf48,	// (0x0003a2b4) popup_call2_audio_out_window_t2_ParamLimits

0xbf48,	// (0x0003a2b4) popup_call2_audio_out_window_t2

0xbf9c,	// (0x0003a308) popup_call2_audio_out_window_t3_ParamLimits

0xbf9c,	// (0x0003a308) popup_call2_audio_out_window_t3

0xbfb2,	// (0x0003a31e) popup_call2_audio_out_window_t4_ParamLimits

0xbfb2,	// (0x0003a31e) popup_call2_audio_out_window_t4

0xbfc8,	// (0x0003a334) popup_call2_audio_out_window_t5_ParamLimits

0xbfc8,	// (0x0003a334) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0003d895) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0003d895) popup_call2_audio_out_window_t

0xc02c,	// (0x0003a398) bg_popup_call2_in_pane_ParamLimits

0xc02c,	// (0x0003a398) bg_popup_call2_in_pane

0xc088,	// (0x0003a3f4) popup_call2_audio_in_window_g1_ParamLimits

0xc088,	// (0x0003a3f4) popup_call2_audio_in_window_g1

0xc0c0,	// (0x0003a42c) popup_call2_audio_in_window_g2_ParamLimits

0xc0c0,	// (0x0003a42c) popup_call2_audio_in_window_g2

0xc0f8,	// (0x0003a464) popup_call2_audio_in_window_g3_ParamLimits

0xc0f8,	// (0x0003a464) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0003d8a2) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0003d8a2) popup_call2_audio_in_window_g

0xc150,	// (0x0003a4bc) popup_call2_audio_in_window_t1_ParamLimits

0xc150,	// (0x0003a4bc) popup_call2_audio_in_window_t1

0xc1d0,	// (0x0003a53c) popup_call2_audio_in_window_t2_ParamLimits

0xc1d0,	// (0x0003a53c) popup_call2_audio_in_window_t2

0xc250,	// (0x0003a5bc) popup_call2_audio_in_window_t3_ParamLimits

0xc250,	// (0x0003a5bc) popup_call2_audio_in_window_t3

0xc26a,	// (0x0003a5d6) popup_call2_audio_in_window_t4_ParamLimits

0xc26a,	// (0x0003a5d6) popup_call2_audio_in_window_t4

0xc27c,	// (0x0003a5e8) popup_call2_audio_in_window_t5_ParamLimits

0xc27c,	// (0x0003a5e8) popup_call2_audio_in_window_t5

0xc291,	// (0x0003a5fd) popup_call2_audio_in_window_t6_ParamLimits

0xc291,	// (0x0003a5fd) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0003d8ab) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0003d8ab) popup_call2_audio_in_window_t

0xa30f,	// (0x0003867b) bg_popup_call2_in_pane_g1

0xc3a8,	// (0x0003a714) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0003d913) popup_cale_lunar_info_window_t

0xa317,	// (0x00038683) bg_popup_call2_rect_pane_ParamLimits

0xa317,	// (0x00038683) bg_popup_call2_rect_pane

0xa0bc,	// (0x00038428) call2_cli_visual_graphic_pane

0xa0bc,	// (0x00038428) call2_cli_visual_text_pane

0x4a84,	// (0x00032df0) smil_status_volume_pane_g3

0x0002,

0xa431,	// (0x0003879d) call2_cli_visual_graphic_pane_g1

0xa431,	// (0x0003879d) call2_cli_visual_graphic_pane_g2

0xa431,	// (0x0003879d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0003d8b8) call2_cli_visual_graphic_pane_g

0xc2a6,	// (0x0003a612) bg_popup_call2_rect_pane_g1

0xa4c6,	// (0x00038832) bg_popup_call2_rect_pane_g2

0xc2ae,	// (0x0003a61a) bg_popup_call2_rect_pane_g3

0xc2b6,	// (0x0003a622) bg_popup_call2_rect_pane_g4

0xc2be,	// (0x0003a62a) bg_popup_call2_rect_pane_g5

0xc2c6,	// (0x0003a632) bg_popup_call2_rect_pane_g6

0xc2ce,	// (0x0003a63a) bg_popup_call2_rect_pane_g7

0xc2d6,	// (0x0003a642) bg_popup_call2_rect_pane_g8

0xc2de,	// (0x0003a64a) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0003d8bf) bg_popup_call2_rect_pane_g

0xc2e6,	// (0x0003a652) bg_popup_call2_bubble_pane_g1

0xc2ee,	// (0x0003a65a) bg_popup_call2_bubble_pane_g2

0xc2f6,	// (0x0003a662) bg_popup_call2_bubble_pane_g3

0xc2fe,	// (0x0003a66a) bg_popup_call2_bubble_pane_g4

0xc306,	// (0x0003a672) bg_popup_call2_bubble_pane_g5

0xc30e,	// (0x0003a67a) bg_popup_call2_bubble_pane_g6

0xc316,	// (0x0003a682) bg_popup_call2_bubble_pane_g7

0xc31e,	// (0x0003a68a) bg_popup_call2_bubble_pane_g8

0xc326,	// (0x0003a692) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0003d8d2) bg_popup_call2_bubble_pane_g

0x1dc7,	// (0x00030133) aid_cale_week_size_cell_pane

0x2385,	// (0x000306f1) aid_cams_cif_uncrop_pane_ParamLimits

0x2385,	// (0x000306f1) aid_cams_cif_uncrop_pane

0x2535,	// (0x000308a1) aid_cams_size_cell_ParamLimits

0x2535,	// (0x000308a1) aid_cams_size_cell

0x2549,	// (0x000308b5) grid_cams_pane_ParamLimits

0x2563,	// (0x000308cf) linegrid_cams_pane_ParamLimits

0x2760,	// (0x00030acc) call_video_pane_t1

0x277e,	// (0x00030aea) call_video_pane_t2

0x0001,

0xf253,	// (0x0003d5bf) call_video_pane_t

0x2bac,	// (0x00030f18) aid_cale_month_size_cell_pane_ParamLimits

0x2bac,	// (0x00030f18) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0003d95c) smil_status_volume_pane_g

0x4a91,	// (0x00032dfd) volume_smil_pane_ParamLimits

0x18e4,	// (0x0002fc50) aid_popup2_width_pane

0x1cd9,	// (0x00030045) cell_qdial_pane_g4_ParamLimits

0x1cd9,	// (0x00030045) cell_qdial_pane_g4

0x3ab6,	// (0x00031e22) aid_blid_cardinal_pane_ParamLimits

0x3ac2,	// (0x00031e2e) aid_blid_destination_pane_ParamLimits

0x3ac2,	// (0x00031e2e) aid_blid_destination_pane

0xa317,	// (0x00038683) bg_popup_call_poc_act_pane_ParamLimits

0xa317,	// (0x00038683) bg_popup_call_poc_act_pane

0xa317,	// (0x00038683) bg_popup_call_poc_inact_pane_ParamLimits

0xa317,	// (0x00038683) bg_popup_call_poc_inact_pane

0xc32e,	// (0x0003a69a) bg_popup_call_poc_act_pane_g1

0xc336,	// (0x0003a6a2) bg_popup_call_poc_act_pane_g2

0xc33e,	// (0x0003a6aa) bg_popup_call_poc_act_pane_g3

0xc2fe,	// (0x0003a66a) bg_popup_call_poc_act_pane_g4

0xc306,	// (0x0003a672) bg_popup_call_poc_act_pane_g5

0xc346,	// (0x0003a6b2) bg_popup_call_poc_act_pane_g6

0xc316,	// (0x0003a682) bg_popup_call_poc_act_pane_g7

0xc34e,	// (0x0003a6ba) bg_popup_call_poc_act_pane_g8

0xa0bc,	// (0x00038428) main_usb_pane

0x4961,	// (0x00032ccd) popup_cale_lunar_info_window

0x2a58,	// (0x00030dc4) im_reading_pane_t1_ParamLimits

0xa6ab,	// (0x00038a17) list_im_pane_ParamLimits

0xa6bc,	// (0x00038a28) scroll_pane_cp07_ParamLimits

0xa0bc,	// (0x00038428) grid_highlight_pane_cp012

0xa317,	// (0x00038683) mup_scale_pane_ParamLimits

0xb242,	// (0x000395ae) main_usb_pane_g1_ParamLimits

0xb242,	// (0x000395ae) main_usb_pane_g1

0x467c,	// (0x000329e8) main_usb_pane_g2_ParamLimits

0x467c,	// (0x000329e8) main_usb_pane_g2

0x0001,

0xf590,	// (0x0003d8fc) main_usb_pane_g_ParamLimits

0xf590,	// (0x0003d8fc) main_usb_pane_g

0x4692,	// (0x000329fe) main_usb_pane_t1_ParamLimits

0x4692,	// (0x000329fe) main_usb_pane_t1

0x46a4,	// (0x00032a10) main_usb_pane_t2_ParamLimits

0x46a4,	// (0x00032a10) main_usb_pane_t2

0x46b6,	// (0x00032a22) main_usb_pane_t3_ParamLimits

0x46b6,	// (0x00032a22) main_usb_pane_t3

0x46c8,	// (0x00032a34) main_usb_pane_t4_ParamLimits

0x46c8,	// (0x00032a34) main_usb_pane_t4

0x46da,	// (0x00032a46) main_usb_pane_t5_ParamLimits

0x46da,	// (0x00032a46) main_usb_pane_t5

0x46ec,	// (0x00032a58) main_usb_pane_t6_ParamLimits

0x46ec,	// (0x00032a58) main_usb_pane_t6

0x0005,

0xf595,	// (0x0003d901) main_usb_pane_t_ParamLimits

0x3a65,	// (0x00031dd1) aid_text_placing

0x3a6e,	// (0x00031dda) main_location2_pane_t1_ParamLimits

0x3a80,	// (0x00031dec) main_location2_pane_t2_ParamLimits

0x3a92,	// (0x00031dfe) main_location2_pane_t3_ParamLimits

0x3aa4,	// (0x00031e10) main_location2_pane_t4_ParamLimits

0x3aa4,	// (0x00031e10) main_location2_pane_t4

0xf3b4,	// (0x0003d720) main_location2_pane_t_ParamLimits

0xa353,	// (0x000386bf) find_pinb_pane_g2_ParamLimits

0xa353,	// (0x000386bf) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0003d470) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0003d470) find_pinb_pane_g

0xa35f,	// (0x000386cb) find_pinb_pane_t1_ParamLimits

0xa371,	// (0x000386dd) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0003d475) find_pinb_pane_t_ParamLimits

0xa0bc,	// (0x00038428) main_call3_pane

0x3097,	// (0x00031403) cale_month_day_heading_pane_t1_ParamLimits

0x311d,	// (0x00031489) cale_month_day_heading_pane_t2_ParamLimits

0x3196,	// (0x00031502) cale_month_day_heading_pane_t3_ParamLimits

0x320f,	// (0x0003157b) cale_month_day_heading_pane_t4_ParamLimits

0x3290,	// (0x000315fc) cale_month_day_heading_pane_t5_ParamLimits

0x3319,	// (0x00031685) cale_month_day_heading_pane_t6_ParamLimits

0x33a2,	// (0x0003170e) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0003d5f7) cale_month_day_heading_pane_t_ParamLimits

0xa906,	// (0x00038c72) smil_status_volume_pane

0x4177,	// (0x000324e3) postcard_address_pane_ParamLimits

0x4177,	// (0x000324e3) postcard_address_pane

0x4189,	// (0x000324f5) postcard_message_pane_ParamLimits

0x4189,	// (0x000324f5) postcard_message_pane

0x465a,	// (0x000329c6) call2_cli_visual_pane_t1_ParamLimits

0x465a,	// (0x000329c6) call2_cli_visual_pane_t1

0x4c46,	// (0x00032fb2) postcard_message_pane_t1_ParamLimits

0x4c46,	// (0x00032fb2) postcard_message_pane_t1

0x4c2f,	// (0x00032f9b) postcard_address_pane_t1_ParamLimits

0x4c2f,	// (0x00032f9b) postcard_address_pane_t1

0x4c1b,	// (0x00032f87) popup_call3_audio_in_window_ParamLimits

0x4c1b,	// (0x00032f87) popup_call3_audio_in_window

0x4aa6,	// (0x00032e12) bg_popup_call3_in_pane_ParamLimits

0x4aa6,	// (0x00032e12) bg_popup_call3_in_pane

0x4b1c,	// (0x00032e88) popup_call3_audio_in_window_g1_ParamLimits

0x4b1c,	// (0x00032e88) popup_call3_audio_in_window_g1

0x4b3c,	// (0x00032ea8) popup_call3_audio_in_window_g2_ParamLimits

0x4b3c,	// (0x00032ea8) popup_call3_audio_in_window_g2

0x4b5c,	// (0x00032ec8) popup_call3_audio_in_window_g3_ParamLimits

0x4b5c,	// (0x00032ec8) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0003d963) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0003d963) popup_call3_audio_in_window_g

0x4b8d,	// (0x00032ef9) popup_call3_audio_in_window_t1_ParamLimits

0x4b8d,	// (0x00032ef9) popup_call3_audio_in_window_t1

0x4bcb,	// (0x00032f37) popup_call3_audio_in_window_t2_ParamLimits

0x4bcb,	// (0x00032f37) popup_call3_audio_in_window_t2

0x4c09,	// (0x00032f75) popup_call3_audio_in_window_t3_ParamLimits

0x4c09,	// (0x00032f75) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0003d96c) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0003d96c) popup_call3_audio_in_window_t

0xa5aa,	// (0x00038916) bg_popup_call3_rect_pane

0xc2a6,	// (0x0003a612) bg_popup_call3_rect_pane_g1

0xa4c6,	// (0x00038832) bg_popup_call3_rect_pane_g2

0xc2ae,	// (0x0003a61a) bg_popup_call3_rect_pane_g3

0xc2b6,	// (0x0003a622) bg_popup_call3_rect_pane_g4

0xc2be,	// (0x0003a62a) bg_popup_call3_rect_pane_g5

0xc2c6,	// (0x0003a632) bg_popup_call3_rect_pane_g6

0xc2ce,	// (0x0003a63a) bg_popup_call3_rect_pane_g7

0x3db8,	// (0x00032124) mup_visualizer_osc_pane

0xb0e3,	// (0x0003944f) mup_visualizer_spec_pane

0x4ad6,	// (0x00032e42) call3_video_qcif_pane_ParamLimits

0x4ad6,	// (0x00032e42) call3_video_qcif_pane

0x4ae9,	// (0x00032e55) call3_video_qcif_uncrop_pane_ParamLimits

0x4ae9,	// (0x00032e55) call3_video_qcif_uncrop_pane

0x4af7,	// (0x00032e63) call3_video_subqcif_pane_ParamLimits

0x4af7,	// (0x00032e63) call3_video_subqcif_pane

0x4b0b,	// (0x00032e77) call3_video_subqcif_uncrop_pane_ParamLimits

0x4b0b,	// (0x00032e77) call3_video_subqcif_uncrop_pane

0x4b7c,	// (0x00032ee8) popup_call3_audio_in_window_g4_ParamLimits

0x4b7c,	// (0x00032ee8) popup_call3_audio_in_window_g4

0x4a73,	// (0x00032ddf) mup_spec_half_pane

0x4a7c,	// (0x00032de8) mup_spec_half_pane_cp

0xc50b,	// (0x0003a877) mup_osc_middle_pane

0xc514,	// (0x0003a880) mup_visualizer_osc_pane_g1

0x4a53,	// (0x00032dbf) mup_spec_bar_pane_ParamLimits

0x4a53,	// (0x00032dbf) mup_spec_bar_pane

0xc4f8,	// (0x0003a864) mup_spec_bar_pane_g1

0xc502,	// (0x0003a86e) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0003d957) mup_spec_bar_pane_g

0x1dc7,	// (0x00030133) aid_cale_week_size_cell_pane_ParamLimits

0x1de1,	// (0x0003014d) bg_cale_heading_pane_ParamLimits

0xa503,	// (0x0003886f) bg_cale_pane_cp01_ParamLimits

0x1df9,	// (0x00030165) cale_week_corner_pane_ParamLimits

0x1e18,	// (0x00030184) cale_week_day_heading_pane_ParamLimits

0x1e35,	// (0x000301a1) cale_week_scroll_pane_g1_ParamLimits

0x1e48,	// (0x000301b4) cale_week_scroll_pane_g2_ParamLimits

0x1e60,	// (0x000301cc) cale_week_scroll_pane_g3_ParamLimits

0x1e78,	// (0x000301e4) cale_week_scroll_pane_g4_ParamLimits

0x1e90,	// (0x000301fc) cale_week_scroll_pane_g5_ParamLimits

0x1eb0,	// (0x0003021c) cale_week_scroll_pane_g6_ParamLimits

0x1ed0,	// (0x0003023c) cale_week_scroll_pane_g7_ParamLimits

0x1ef0,	// (0x0003025c) cale_week_scroll_pane_g8_ParamLimits

0x1f14,	// (0x00030280) cale_week_scroll_pane_g9_ParamLimits

0x1f2c,	// (0x00030298) cale_week_scroll_pane_g10_ParamLimits

0x1f44,	// (0x000302b0) cale_week_scroll_pane_g11_ParamLimits

0x1f5c,	// (0x000302c8) cale_week_scroll_pane_g12_ParamLimits

0x1f74,	// (0x000302e0) cale_week_scroll_pane_g13_ParamLimits

0x1f74,	// (0x000302e0) cale_week_scroll_pane_g14_ParamLimits

0x1f74,	// (0x000302e0) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0003d501) cale_week_scroll_pane_g_ParamLimits

0x1fb0,	// (0x0003031c) cale_week_time_pane_ParamLimits

0x1fd4,	// (0x00030340) grid_cale_week_pane_ParamLimits

0xa520,	// (0x0003888c) listscroll_cale_week_pane_t1

0xa532,	// (0x0003889e) scroll_pane_cp08_ParamLimits

0x2c0c,	// (0x00030f78) cale_month_corner_pane_ParamLimits

0xa8dc,	// (0x00038c48) cale_month_pane_t1

0x302a,	// (0x00031396) cale_month_week_pane_ParamLimits

0x384e,	// (0x00031bba) popup_call_status_window_g1_ParamLimits

0x3862,	// (0x00031bce) popup_call_status_window_g2_ParamLimits

0x3876,	// (0x00031be2) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0003d6a7) popup_call_status_window_g_ParamLimits

0xac9a,	// (0x00039006) aid_call2_pane

0x4026,	// (0x00032392) msg_header_pane_g1

0x4177,	// (0x000324e3) postcard_address2_pane_ParamLimits

0x4177,	// (0x000324e3) postcard_address2_pane

0x4189,	// (0x000324f5) postcard_message2_pane_ParamLimits

0x4189,	// (0x000324f5) postcard_message2_pane

0x4a05,	// (0x00032d71) message2_row_pane_ParamLimits

0x4a05,	// (0x00032d71) message2_row_pane

0x4a21,	// (0x00032d8d) address2_row_pane_ParamLimits

0x4a21,	// (0x00032d8d) address2_row_pane

0xc4c6,	// (0x0003a832) postcard_message2_row_pane_g1

0xc4ce,	// (0x0003a83a) postcard_message2_row_pane_t1

0xc4c6,	// (0x0003a832) address2_row_pane_g1

0xc4ce,	// (0x0003a83a) address2_row_pane_t1

0x2234,	// (0x000305a0) aid_size_cell_vorec

0xa0bc,	// (0x00038428) main_rss_pane

0x4a34,	// (0x00032da0) rss_list_single_pane_ParamLimits

0x4a34,	// (0x00032da0) rss_list_single_pane

0xc4dc,	// (0x0003a848) rss_list_single_pane_t1

0xc4ea,	// (0x0003a856) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0003d952) rss_list_single_pane_t

0xa0bc,	// (0x00038428) main_camera2_pane

0xa0bc,	// (0x00038428) main_video2_pane

0x07d3,	// (0x0002eb3f) cams_zoom_pane_cp2_ParamLimits

0x07d3,	// (0x0002eb3f) cams_zoom_pane_cp2

0x07f3,	// (0x0002eb5f) image2_vga_pane_ParamLimits

0x07f3,	// (0x0002eb5f) image2_vga_pane

0x0844,	// (0x0002ebb0) main_camera2_pane_g1_ParamLimits

0x0844,	// (0x0002ebb0) main_camera2_pane_g1

0x0864,	// (0x0002ebd0) main_camera2_pane_g2_ParamLimits

0x0864,	// (0x0002ebd0) main_camera2_pane_g2

0x0884,	// (0x0002ebf0) main_camera2_pane_g3_ParamLimits

0x0884,	// (0x0002ebf0) main_camera2_pane_g3

0x08a4,	// (0x0002ec10) main_camera2_pane_g4_ParamLimits

0x08a4,	// (0x0002ec10) main_camera2_pane_g4

0x08c4,	// (0x0002ec30) main_camera2_pane_g5_ParamLimits

0x08c4,	// (0x0002ec30) main_camera2_pane_g5

0x08e4,	// (0x0002ec50) main_camera2_pane_g6_ParamLimits

0x08e4,	// (0x0002ec50) main_camera2_pane_g6

0x0904,	// (0x0002ec70) main_camera2_pane_g7_ParamLimits

0x0904,	// (0x0002ec70) main_camera2_pane_g7

0x0924,	// (0x0002ec90) main_camera2_pane_g8_ParamLimits

0x0924,	// (0x0002ec90) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0003d973) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0003d973) main_camera2_pane_g

0x0964,	// (0x0002ecd0) main_camera2_pane_t1_ParamLimits

0x0964,	// (0x0002ecd0) main_camera2_pane_t1

0x0999,	// (0x0002ed05) main_camera2_pane_t2_ParamLimits

0x0999,	// (0x0002ed05) main_camera2_pane_t2

0x09bf,	// (0x0002ed2b) main_camera2_pane_t3_ParamLimits

0x09bf,	// (0x0002ed2b) main_camera2_pane_t3

0x0a1d,	// (0x0002ed89) main_camera2_pane_t4_ParamLimits

0x0a1d,	// (0x0002ed89) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0003d986) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0003d986) main_camera2_pane_t

0x0aaf,	// (0x0002ee1b) cams_zoom_pane_cp4_ParamLimits

0x0aaf,	// (0x0002ee1b) cams_zoom_pane_cp4

0x0ac5,	// (0x0002ee31) image2_cif_pane_ParamLimits

0x0ac5,	// (0x0002ee31) image2_cif_pane

0x0af0,	// (0x0002ee5c) image2_subqcif_pane_ParamLimits

0x0af0,	// (0x0002ee5c) image2_subqcif_pane

0x0b0a,	// (0x0002ee76) main_video2_pane_g1_ParamLimits

0x0b0a,	// (0x0002ee76) main_video2_pane_g1

0x0b24,	// (0x0002ee90) main_video2_pane_g2_ParamLimits

0x0b24,	// (0x0002ee90) main_video2_pane_g2

0x0b3a,	// (0x0002eea6) main_video2_pane_g3_ParamLimits

0x0b3a,	// (0x0002eea6) main_video2_pane_g3

0x0b50,	// (0x0002eebc) main_video2_pane_g4_ParamLimits

0x0b50,	// (0x0002eebc) main_video2_pane_g4

0x0b66,	// (0x0002eed2) main_video2_pane_g5_ParamLimits

0x0b66,	// (0x0002eed2) main_video2_pane_g5

0x0b7c,	// (0x0002eee8) main_video2_pane_g6_ParamLimits

0x0b7c,	// (0x0002eee8) main_video2_pane_g6

0x0005,

0xf629,	// (0x0003d995) main_video2_pane_g_ParamLimits

0xf629,	// (0x0003d995) main_video2_pane_g

0x0b96,	// (0x0002ef02) main_video2_pane_t1_ParamLimits

0x0b96,	// (0x0002ef02) main_video2_pane_t1

0x0bba,	// (0x0002ef26) main_video2_pane_t2_ParamLimits

0x0bba,	// (0x0002ef26) main_video2_pane_t2

0x0c08,	// (0x0002ef74) main_video2_pane_t3_ParamLimits

0x0c08,	// (0x0002ef74) main_video2_pane_t3

0x0002,

0xf636,	// (0x0003d9a2) main_video2_pane_t_ParamLimits

0xf636,	// (0x0003d9a2) main_video2_pane_t

0x47a7,	// (0x00032b13) call_muted_g2

0x0001,

0xf5d8,	// (0x0003d944) call_muted_g

0xa0bc,	// (0x00038428) main_mup2_pane

0x4c91,	// (0x00032ffd) main_mup2_pane_g1_ParamLimits

0x4c91,	// (0x00032ffd) main_mup2_pane_g1

0x4c9d,	// (0x00033009) main_mup2_pane_g2_ParamLimits

0x4c9d,	// (0x00033009) main_mup2_pane_g2

0x4f0c,	// (0x00033278) main_mup_pane_g13_cp1

0x4f14,	// (0x00033280) mup_volume_pane_cp1

0x4cb9,	// (0x00033025) main_mup2_pane_g4_ParamLimits

0x4cb9,	// (0x00033025) main_mup2_pane_g4

0x4ccb,	// (0x00033037) main_mup2_pane_g5_ParamLimits

0x4ccb,	// (0x00033037) main_mup2_pane_g5

0x4cdd,	// (0x00033049) main_mup2_pane_g6_ParamLimits

0x4cdd,	// (0x00033049) main_mup2_pane_g6

0x4cef,	// (0x0003305b) main_mup2_pane_g7_ParamLimits

0x4cef,	// (0x0003305b) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0003d9a9) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0003d9a9) main_mup2_pane_g

0x4d07,	// (0x00033073) main_mup2_pane_t1_ParamLimits

0x4d07,	// (0x00033073) main_mup2_pane_t1

0x4d1d,	// (0x00033089) main_mup2_pane_t2_ParamLimits

0x4d1d,	// (0x00033089) main_mup2_pane_t2

0x4d33,	// (0x0003309f) main_mup2_pane_t3_ParamLimits

0x4d33,	// (0x0003309f) main_mup2_pane_t3

0x4d49,	// (0x000330b5) main_mup2_pane_t4_ParamLimits

0x4d49,	// (0x000330b5) main_mup2_pane_t4

0x4d61,	// (0x000330cd) main_mup2_pane_t5_ParamLimits

0x4d61,	// (0x000330cd) main_mup2_pane_t5

0x4d79,	// (0x000330e5) main_mup2_pane_t6_ParamLimits

0x4d79,	// (0x000330e5) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0003d9b8) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0003d9b8) main_mup2_pane_t

0x4da9,	// (0x00033115) mup2_visualizer_pane_ParamLimits

0x4da9,	// (0x00033115) mup2_visualizer_pane

0x4dd7,	// (0x00033143) mup_progress_pane_cp_ParamLimits

0x4dd7,	// (0x00033143) mup_progress_pane_cp

0x4ef7,	// (0x00033263) mup_volume_pane_cp_ParamLimits

0x4ef7,	// (0x00033263) mup_volume_pane_cp

0x4deb,	// (0x00033157) mup2_visualizer_pane_g1_ParamLimits

0x4deb,	// (0x00033157) mup2_visualizer_pane_g1

0xc54b,	// (0x0003a8b7) mup2_visualizer_pane_g2_ParamLimits

0xc54b,	// (0x0003a8b7) mup2_visualizer_pane_g2

0x4e02,	// (0x0003316e) mup2_visualizer_pane_g3_ParamLimits

0x4e02,	// (0x0003316e) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0003d9c5) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0003d9c5) mup2_visualizer_pane_g

0xb38b,	// (0x000396f7) aid_size_cell_fmradio

0x04b9,	// (0x0002e825) aid_height_parent_landcape

0xa73a,	// (0x00038aa6) wml_content_pane_cp

0xa742,	// (0x00038aae) wml_tabs_pane

0xa74b,	// (0x00038ab7) popup_wml_miniature_window

0xa753,	// (0x00038abf) scroll_pane_cp021

0xa767,	// (0x00038ad3) wml_content_pane_comp8

0xa0bc,	// (0x00038428) bg_popup_sub_pane_cp05

0xc569,	// (0x0003a8d5) popup_wml_miniature_window_g1

0xc571,	// (0x0003a8dd) wml_miniature_view_pane

0x4e0e,	// (0x0003317a) aid_size_wml_view

0x4e16,	// (0x00033182) wml_miniature_view_pane_g1

0x4e1f,	// (0x0003318b) wml_miniature_view_pane_g2

0x4e28,	// (0x00033194) wml_miniature_view_pane_g3

0x4e30,	// (0x0003319c) wml_miniature_view_pane_g4

0x4e38,	// (0x000331a4) wml_miniature_view_pane_g5

0x4e40,	// (0x000331ac) wml_miniature_view_pane_g6

0x4e48,	// (0x000331b4) wml_miniature_view_pane_g7

0x4e50,	// (0x000331bc) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0003d9cc) wml_miniature_view_pane_g

0xc579,	// (0x0003a8e5) background_graphic_ParamLimits

0xc579,	// (0x0003a8e5) background_graphic

0xc585,	// (0x0003a8f1) wml_tabs_2_pane

0xc58e,	// (0x0003a8fa) wml_tabs_3_pane_ParamLimits

0xc58e,	// (0x0003a8fa) wml_tabs_3_pane

0xc5a0,	// (0x0003a90c) wml_tabs_4_pane_ParamLimits

0xc5a0,	// (0x0003a90c) wml_tabs_4_pane

0xc5b6,	// (0x0003a922) wml_tabs_5_pane_ParamLimits

0xc5b6,	// (0x0003a922) wml_tabs_5_pane

0xc5d0,	// (0x0003a93c) wml_tabs_pane_g2_ParamLimits

0xc5d0,	// (0x0003a93c) wml_tabs_pane_g2

0xc5e4,	// (0x0003a950) wml_tabs_pane_g3_ParamLimits

0xc5e4,	// (0x0003a950) wml_tabs_pane_g3

0x4e58,	// (0x000331c4) wml_tabs_2_active_pane_ParamLimits

0x4e58,	// (0x000331c4) wml_tabs_2_active_pane

0x4e6c,	// (0x000331d8) wml_tabs_2_passive_pane_ParamLimits

0x4e6c,	// (0x000331d8) wml_tabs_2_passive_pane

0x4e80,	// (0x000331ec) wml_tabs_3_active_pane_cp_ParamLimits

0x4e80,	// (0x000331ec) wml_tabs_3_active_pane_cp

0x4e95,	// (0x00033201) wml_tabs_3_passive_pane_ParamLimits

0x4e95,	// (0x00033201) wml_tabs_3_passive_pane

0x4ea8,	// (0x00033214) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ea8,	// (0x00033214) wml_tabs_3_passive_pane_cp

0x4ebf,	// (0x0003322b) tabs_4_active_pane

0x4ec7,	// (0x00033233) tabs_4_passive_pane

0x4ed1,	// (0x0003323d) tabs_4_passive_pane_cp

0x4ed9,	// (0x00033245) tabs_4_passive_pane_cp2

0x4674,	// (0x000329e0) aid_height_text

0x3d8e,	// (0x000320fa) mup_volume_cont_pane_ParamLimits

0x3d8e,	// (0x000320fa) mup_volume_cont_pane

0x1a5d,	// (0x0002fdc9) aid_size_cell_pinb

0x1a67,	// (0x0002fdd3) aid_size_list_pinb

0x4dc3,	// (0x0003312f) mup2_volume_cont_pane_ParamLimits

0x4dc3,	// (0x0003312f) mup2_volume_cont_pane

0x4ee3,	// (0x0003324f) mup2_volume_cont_pane_g1_ParamLimits

0x4ee3,	// (0x0003324f) mup2_volume_cont_pane_g1

0x0008,	// (0x0002e374) aid_size_cell_touch_ParamLimits

0x0008,	// (0x0002e374) aid_size_cell_touch

0x01f0,	// (0x0002e55c) touch_pane_ParamLimits

0x01f0,	// (0x0002e55c) touch_pane

0x1995,	// (0x0002fd01) main_rss2_pane

0xc601,	// (0x0003a96d) listscroll_rss2_pane

0xc60a,	// (0x0003a976) rss2_navigation_pane

0xc612,	// (0x0003a97e) list_rss2_pane

0xaddd,	// (0x00039149) scroll_pane_cp22

0xc61a,	// (0x0003a986) rss2_navigation_pane_g1

0xc623,	// (0x0003a98f) rss2_navigation_pane_g2

0xc62b,	// (0x0003a997) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0003d9dd) rss2_navigation_pane_g

0xc633,	// (0x0003a99f) rss2_navigation_pane_t1

0x4f1c,	// (0x00033288) rss2_list_single_pane_ParamLimits

0x4f1c,	// (0x00033288) rss2_list_single_pane

0xc641,	// (0x0003a9ad) rss2_list_single_pane_t2

0xc64f,	// (0x0003a9bb) rss2_list_single_pane_t3_ParamLimits

0xc64f,	// (0x0003a9bb) rss2_list_single_pane_t3

0xc66c,	// (0x0003a9d8) rss2_list_single_pane_t4

0x3636,	// (0x000319a2) smil_status_pane_g1

0x197b,	// (0x0002fce7) main_image2_pane_ParamLimits

0x197b,	// (0x0002fce7) main_image2_pane

0x0944,	// (0x0002ecb0) main_camera2_pane_g9_ParamLimits

0x0944,	// (0x0002ecb0) main_camera2_pane_g9

0x0a72,	// (0x0002edde) main_camera2_pane_t5_ParamLimits

0x0a72,	// (0x0002edde) main_camera2_pane_t5

0x4c61,	// (0x00032fcd) main_camera2_pane_t6_ParamLimits

0x4c61,	// (0x00032fcd) main_camera2_pane_t6

0x4f31,	// (0x0003329d) main_image2_pane_g1_ParamLimits

0x4f31,	// (0x0003329d) main_image2_pane_g1

0x43b0,	// (0x0003271c) smil2_video_pane_ParamLimits

0x43b0,	// (0x0003271c) smil2_video_pane

0x18f0,	// (0x0002fc5c) aid_zoom_text_primary_cp

0x1971,	// (0x0002fcdd) popup_preview_fixed_window

0xa6a3,	// (0x00038a0f) im_reading_pane_g1

0x07bb,	// (0x0002eb27) cams2_bc_adjust_pane_cp_ParamLimits

0x07bb,	// (0x0002eb27) cams2_bc_adjust_pane_cp

0x0aa1,	// (0x0002ee0d) cams2_bc_adjust_pane_ParamLimits

0x0aa1,	// (0x0002ee0d) cams2_bc_adjust_pane

0xd713,	// (0x0003ba7f) cams2_bc_adjust_pane_g1

0x4f47,	// (0x000332b3) cams2_slider_pane

0x4f50,	// (0x000332bc) cams2_slider_pane_g1

0x4f59,	// (0x000332c5) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0003d9e4) cams2_slider_pane_g

0x0260,	// (0x0002e5cc) calc_display_pane_ParamLimits

0x0285,	// (0x0002e5f1) calc_paper_pane_ParamLimits

0x02a8,	// (0x0002e614) grid_calc_pane_ParamLimits

0x38db,	// (0x00031c47) popup_clock_digital_window_t1_ParamLimits

0xb328,	// (0x00039694) main_image_pane_t1

0x0242,	// (0x0002e5ae) aid_size_cell_calc_ParamLimits

0x0242,	// (0x0002e5ae) aid_size_cell_calc

0x0511,	// (0x0002e87d) popup_blid_sat_info2_window_ParamLimits

0x0511,	// (0x0002e87d) popup_blid_sat_info2_window

0xc682,	// (0x0003a9ee) aid_size_cell_blid

0xc68a,	// (0x0003a9f6) bg_popup_window_pane_cp07

0xc6ad,	// (0x0003aa19) grid_popup_blid_pane

0xc6b7,	// (0x0003aa23) heading_pane_cp05_ParamLimits

0xc6b7,	// (0x0003aa23) heading_pane_cp05

0xc781,	// (0x0003aaed) cell_popup_blid_pane_ParamLimits

0xc781,	// (0x0003aaed) cell_popup_blid_pane

0xc7a5,	// (0x0003ab11) cell_popup_blid_pane_g1

0xc7ad,	// (0x0003ab19) cell_popup_blid_pane_t1

0x4d93,	// (0x000330ff) mup2_indicator_pane_ParamLimits

0x4d93,	// (0x000330ff) mup2_indicator_pane

0xa5aa,	// (0x00038916) mup2_visualizer_osc_pane

0xc557,	// (0x0003a8c3) mup2_visualizer_spec_pane_ParamLimits

0xc557,	// (0x0003a8c3) mup2_visualizer_spec_pane

0x4f73,	// (0x000332df) mup2_spec_half_pane

0x4f7c,	// (0x000332e8) mup2_spec_half_pane_cp

0x4f84,	// (0x000332f0) mup2_spec_bar_pane_ParamLimits

0x4f84,	// (0x000332f0) mup2_spec_bar_pane

0xc4f8,	// (0x0003a864) mup2_spec_bar_pane_g1

0xc502,	// (0x0003a86e) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0003d957) mup2_spec_bar_pane_g

0x4fa4,	// (0x00033310) mup2_osc_middle_pane

0xc514,	// (0x0003a880) mup2_visualizer_osc_pane_g1

0x9cc9,	// (0x00038035) popup_number_entry_window_t1_ParamLimits

0x9cdc,	// (0x00038048) popup_number_entry_window_t2_ParamLimits

0x9cee,	// (0x0003805a) popup_number_entry_window_t3_ParamLimits

0x199f,	// (0x0002fd0b) popup_number_entry_window_t5_ParamLimits

0x199f,	// (0x0002fd0b) popup_number_entry_window_t5

0xf0af,	// (0x0003d41b) popup_number_entry_window_t_ParamLimits

0x9d00,	// (0x0003806c) text_title_cp2_ParamLimits

0x4044,	// (0x000323b0) aid_hotspot_pointer_text2_pane

0x409a,	// (0x00032406) main_viewer_pane_g9_ParamLimits

0x409a,	// (0x00032406) main_viewer_pane_g9

0xa8dc,	// (0x00038c48) cale_month_pane_t1_ParamLimits

0xa919,	// (0x00038c85) bg_cale_pane_ParamLimits

0xa931,	// (0x00038c9d) list_cale_pane_ParamLimits

0xa942,	// (0x00038cae) listscroll_cale_day_pane_t1

0xa954,	// (0x00038cc0) scroll_pane_cp09_ParamLimits

0x3dc0,	// (0x0003212c) main_mup_eq_pane_t1_ParamLimits

0x3dc0,	// (0x0003212c) main_mup_eq_pane_t1

0x3dda,	// (0x00032146) main_mup_eq_pane_t2_ParamLimits

0x3dda,	// (0x00032146) main_mup_eq_pane_t2

0x3df4,	// (0x00032160) main_mup_eq_pane_t3_ParamLimits

0x3df4,	// (0x00032160) main_mup_eq_pane_t3

0x3e10,	// (0x0003217c) main_mup_eq_pane_t4_ParamLimits

0x3e10,	// (0x0003217c) main_mup_eq_pane_t4

0x3e2c,	// (0x00032198) main_mup_eq_pane_t5_ParamLimits

0x3e2c,	// (0x00032198) main_mup_eq_pane_t5

0x3e48,	// (0x000321b4) main_mup_eq_pane_t6_ParamLimits

0x3e48,	// (0x000321b4) main_mup_eq_pane_t6

0x3e5c,	// (0x000321c8) main_mup_eq_pane_t7_ParamLimits

0x3e5c,	// (0x000321c8) main_mup_eq_pane_t7

0x3e70,	// (0x000321dc) main_mup_eq_pane_t8_ParamLimits

0x3e70,	// (0x000321dc) main_mup_eq_pane_t8

0x3e84,	// (0x000321f0) main_mup_eq_pane_t9_ParamLimits

0x3e84,	// (0x000321f0) main_mup_eq_pane_t9

0x3e9e,	// (0x0003220a) main_mup_eq_pane_t10_ParamLimits

0x3e9e,	// (0x0003220a) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0003d7a6) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0003d7a6) main_mup_eq_pane_t

0x3f4d,	// (0x000322b9) mup_equalizer_pane_cp5_ParamLimits

0x3f61,	// (0x000322cd) mup_equalizer_pane_cp6_ParamLimits

0x3f75,	// (0x000322e1) mup_equalizer_pane_cp7_ParamLimits

0x1995,	// (0x0002fd01) main_gallery_pane

0xc51d,	// (0x0003a889) smil2_volume_pane

0xc525,	// (0x0003a891) smil_status_volume_pane_g1_ParamLimits

0xc538,	// (0x0003a8a4) smil_status_volume_pane_g2_ParamLimits

0x4a84,	// (0x00032df0) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0003d95c) smil_status_volume_pane_g_ParamLimits

0xc68a,	// (0x0003a9f6) bg_popup_window_pane_cp07_ParamLimits

0xc698,	// (0x0003aa04) blid_firmament_pane

0x4fad,	// (0x00033319) aid_size_cell_gallery_ParamLimits

0x4fad,	// (0x00033319) aid_size_cell_gallery

0x4fc3,	// (0x0003332f) grid_gallery_pane_ParamLimits

0x4fc3,	// (0x0003332f) grid_gallery_pane

0x4fdc,	// (0x00033348) cell_gallery_pane_ParamLimits

0x4fdc,	// (0x00033348) cell_gallery_pane

0xc7bb,	// (0x0003ab27) bg_cell_gallery_focus_pane_ParamLimits

0xc7bb,	// (0x0003ab27) bg_cell_gallery_focus_pane

0xc7cd,	// (0x0003ab39) cell_gallery_pane_g1_ParamLimits

0xc7cd,	// (0x0003ab39) cell_gallery_pane_g1

0x5025,	// (0x00033391) cell_gallery_pane_g2_ParamLimits

0x5025,	// (0x00033391) cell_gallery_pane_g2

0x5032,	// (0x0003339e) cell_gallery_pane_g3_ParamLimits

0x5032,	// (0x0003339e) cell_gallery_pane_g3

0xc7d9,	// (0x0003ab45) cell_gallery_pane_g4_ParamLimits

0xc7d9,	// (0x0003ab45) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0003da0a) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0003da0a) cell_gallery_pane_g

0xc7e5,	// (0x0003ab51) bg_cell_gallery_focus_pane_g1

0xc7ed,	// (0x0003ab59) bg_cell_gallery_focus_pane_g2

0xc7f5,	// (0x0003ab61) bg_cell_gallery_focus_pane_g3

0xc7fd,	// (0x0003ab69) bg_cell_gallery_focus_pane_g4

0xc805,	// (0x0003ab71) bg_cell_gallery_focus_pane_g5

0xc80d,	// (0x0003ab79) bg_cell_gallery_focus_pane_g6

0xc815,	// (0x0003ab81) bg_cell_gallery_focus_pane_g7

0xc81d,	// (0x0003ab89) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0003da13) bg_cell_gallery_focus_pane_g

0xc825,	// (0x0003ab91) aid_firma_cardinal

0xc839,	// (0x0003aba5) blid_firmament_pane_t1

0xc850,	// (0x0003abbc) blid_firmament_pane_t2

0xc867,	// (0x0003abd3) blid_firmament_pane_t3

0xc88a,	// (0x0003abf6) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0003da24) blid_firmament_pane_t

0xc8a1,	// (0x0003ac0d) blid_sat_info_pane

0xc8b1,	// (0x0003ac1d) blid_sat_info_pane_g1

0xc8b1,	// (0x0003ac1d) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0003da2d) blid_sat_info_pane_g

0xc8bb,	// (0x0003ac27) blid_sat_info_pane_t1

0xc8c9,	// (0x0003ac35) smil2_volume_content_pane

0xc8d2,	// (0x0003ac3e) smil2_volume_pane_g1

0xa45d,	// (0x000387c9) smil2_volume_content_pane_g1

0xc8da,	// (0x0003ac46) smil2_volume_content_pane_g2

0xc8e3,	// (0x0003ac4f) smil2_volume_content_pane_g3

0xc8ec,	// (0x0003ac58) smil2_volume_content_pane_g4

0xc8f5,	// (0x0003ac61) smil2_volume_content_pane_g5

0xc8fe,	// (0x0003ac6a) smil2_volume_content_pane_g6

0xc907,	// (0x0003ac73) smil2_volume_content_pane_g7

0xc910,	// (0x0003ac7c) smil2_volume_content_pane_g8

0xc919,	// (0x0003ac85) smil2_volume_content_pane_g9

0xc922,	// (0x0003ac8e) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0003da32) smil2_volume_content_pane_g

0x2088,	// (0x000303f4) cale_week_day_heading_pane_t1_ParamLimits

0x20b2,	// (0x0003041e) cale_week_day_heading_pane_t2_ParamLimits

0x20e1,	// (0x0003044d) cale_week_day_heading_pane_t3_ParamLimits

0x2110,	// (0x0003047c) cale_week_day_heading_pane_t4_ParamLimits

0x213f,	// (0x000304ab) cale_week_day_heading_pane_t5_ParamLimits

0x2176,	// (0x000304e2) cale_week_day_heading_pane_t6_ParamLimits

0x21ad,	// (0x00030519) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0003d522) cale_week_day_heading_pane_t_ParamLimits

0xa54f,	// (0x000388bb) bg_cale_side_pane_ParamLimits

0x0385,	// (0x0002e6f1) cale_week_time_pane_t1_ParamLimits

0x039f,	// (0x0002e70b) cale_week_time_pane_t2_ParamLimits

0x03b9,	// (0x0002e725) cale_week_time_pane_t3_ParamLimits

0x03d3,	// (0x0002e73f) cale_week_time_pane_t4_ParamLimits

0x03ed,	// (0x0002e759) cale_week_time_pane_t5_ParamLimits

0x0407,	// (0x0002e773) cale_week_time_pane_t6_ParamLimits

0x0421,	// (0x0002e78d) cale_week_time_pane_t7_ParamLimits

0x043b,	// (0x0002e7a7) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0003d531) cale_week_time_pane_t_ParamLimits

0x21d7,	// (0x00030543) cell_cale_week_pane_g2_ParamLimits

0xa54f,	// (0x000388bb) bg_cale_side_pane_cp01_ParamLimits

0x3433,	// (0x0003179f) cale_month_week_pane_t1_ParamLimits

0x344c,	// (0x000317b8) cale_month_week_pane_t2_ParamLimits

0x3465,	// (0x000317d1) cale_month_week_pane_t3_ParamLimits

0x347e,	// (0x000317ea) cale_month_week_pane_t4_ParamLimits

0x3497,	// (0x00031803) cale_month_week_pane_t5_ParamLimits

0x34b0,	// (0x0003181c) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0003d606) cale_month_week_pane_t_ParamLimits

0x3621,	// (0x0003198d) cell_cale_month_pane_g1_ParamLimits

0x1995,	// (0x0002fd01) main_cale_event_viewer_pane

0x9c9f,	// (0x0003800b) listscroll_cale_event_viewer_pane

0xc92b,	// (0x0003ac97) list_cale_ev_pane

0xc933,	// (0x0003ac9f) scroll_pane_cp023

0xc93f,	// (0x0003acab) field_cale_ev_pane_ParamLimits

0xc93f,	// (0x0003acab) field_cale_ev_pane

0xc95d,	// (0x0003acc9) field_cale_ev_content_pane_ParamLimits

0xc95d,	// (0x0003acc9) field_cale_ev_content_pane

0xc969,	// (0x0003acd5) field_cale_ev_pane_g1_ParamLimits

0xc969,	// (0x0003acd5) field_cale_ev_pane_g1

0xc975,	// (0x0003ace1) field_cale_ev_pane_g2_ParamLimits

0xc975,	// (0x0003ace1) field_cale_ev_pane_g2

0xc98d,	// (0x0003acf9) field_cale_ev_pane_g3_ParamLimits

0xc98d,	// (0x0003acf9) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0003da47) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0003da47) field_cale_ev_pane_g

0xc9a5,	// (0x0003ad11) field_cale_ev_pane_t1_ParamLimits

0xc9a5,	// (0x0003ad11) field_cale_ev_pane_t1

0xc9bc,	// (0x0003ad28) field_cale_ev_content_pane_t1_ParamLimits

0xc9bc,	// (0x0003ad28) field_cale_ev_content_pane_t1

0xb195,	// (0x00039501) bg_button_pane_cp01

0x1db5,	// (0x00030121) listscroll_cale_week_pane_ParamLimits

0xa4fa,	// (0x00038866) popup_toolbar_window_cp01

0xa520,	// (0x0003888c) listscroll_cale_week_pane_t1_ParamLimits

0x1db5,	// (0x00030121) listscroll_cale_day_pane_ParamLimits

0xa4fa,	// (0x00038866) popup_toolbar_window_cp02

0xa942,	// (0x00038cae) listscroll_cale_day_pane_t1_ParamLimits

0x04d7,	// (0x0002e843) main_cale_month_pane_ParamLimits

0x4998,	// (0x00032d04) popup_toolbar_window_cp03_ParamLimits

0x4998,	// (0x00032d04) popup_toolbar_window_cp03

0x4278,	// (0x000325e4) main_image_pane_g2_ParamLimits

0x4278,	// (0x000325e4) main_image_pane_g2

0x4289,	// (0x000325f5) main_image_pane_g3_ParamLimits

0x4289,	// (0x000325f5) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0003d838) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0003d838) main_image_pane_g

0xb328,	// (0x00039694) main_image_pane_t1_ParamLimits

0x429a,	// (0x00032606) main_image_pane_t2_ParamLimits

0x429a,	// (0x00032606) main_image_pane_t2

0x42ac,	// (0x00032618) main_image_pane_t3_ParamLimits

0x42ac,	// (0x00032618) main_image_pane_t3

0x42d4,	// (0x00032640) main_image_pane_t4_ParamLimits

0x42d4,	// (0x00032640) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0003d83f) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0003d83f) main_image_pane_t

0x42f4,	// (0x00032660) popup_image_details_window_cp01

0x42fe,	// (0x0003266a) popup_toobar_trans_pane_cp01_ParamLimits

0x42fe,	// (0x0003266a) popup_toobar_trans_pane_cp01

0x05f0,	// (0x0002e95c) popup_image_details_window_ParamLimits

0x05f0,	// (0x0002e95c) popup_image_details_window

0x496b,	// (0x00032cd7) popup_image_focus_window

0x0775,	// (0x0002eae1) camera2_autofocus_pane_ParamLimits

0x0775,	// (0x0002eae1) camera2_autofocus_pane

0x9c9f,	// (0x0003800b) bg_popup_sub_pane_cp06

0xc9da,	// (0x0003ad46) popup_image_focus_window_g1

0xc9e2,	// (0x0003ad4e) popup_image_focus_window_g2

0xc9ea,	// (0x0003ad56) popup_image_focus_window_g3

0xc9f2,	// (0x0003ad5e) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0003da4e) popup_image_focus_window_g

0xc9fa,	// (0x0003ad66) popup_image_focus_window_t1

0xca08,	// (0x0003ad74) popup_image_focus_window_t2

0xca18,	// (0x0003ad84) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0003da57) popup_image_focus_window_t

0xca26,	// (0x0003ad92) camera2_autofocus_pane_g1

0xab27,	// (0x00038e93) bg_tb_trans_pane_cp01

0xca34,	// (0x0003ada0) popup_image_details_window_g1

0xca47,	// (0x0003adb3) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0003da69) popup_image_details_window_g

0xca70,	// (0x0003addc) popup_image_details_window_t1

0xca82,	// (0x0003adee) popup_image_details_window_t2

0xca9b,	// (0x0003ae07) popup_image_details_window_t3

0xcaaf,	// (0x0003ae1b) popup_image_details_window_t4

0xcaca,	// (0x0003ae36) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0003da70) popup_image_details_window_t

0xa3c8,	// (0x00038734) bg_calc_paper_pane_ParamLimits

0x1995,	// (0x0002fd01) grid_highlight_pane_cp013

0x1c0f,	// (0x0002ff7b) list_calc_pane_ParamLimits

0x1c21,	// (0x0002ff8d) scroll_pane_cp024

0xa3dc,	// (0x00038748) bg_calc_display_pane_ParamLimits

0x02d6,	// (0x0002e642) calc_display_pane_t1_ParamLimits

0x02eb,	// (0x0002e657) calc_display_pane_t2_ParamLimits

0x1c29,	// (0x0002ff95) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0003d4a2) calc_display_pane_t_ParamLimits

0x034f,	// (0x0002e6bb) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0003d4bf) cell_calc_pane_g

0x0358,	// (0x0002e6c4) cell_calc_pane_t1

0xa43b,	// (0x000387a7) grid_highlight_pane_cp02_ParamLimits

0xa451,	// (0x000387bd) toolbar_button_pane_cp01_ParamLimits

0xa451,	// (0x000387bd) toolbar_button_pane_cp01

0xb36d,	// (0x000396d9) temp_image_control_pane_ParamLimits

0xb36d,	// (0x000396d9) temp_image_control_pane

0x197b,	// (0x0002fce7) main_mp3_pane

0xcae4,	// (0x0003ae50) temp_image_control_pane_g1_ParamLimits

0xcae4,	// (0x0003ae50) temp_image_control_pane_g1

0xcaf2,	// (0x0003ae5e) temp_image_control_pane_g2_ParamLimits

0xcaf2,	// (0x0003ae5e) temp_image_control_pane_g2

0xcb04,	// (0x0003ae70) temp_image_control_pane_g3_ParamLimits

0xcb04,	// (0x0003ae70) temp_image_control_pane_g3

0x506f,	// (0x000333db) temp_image_control_pane_g4_ParamLimits

0x506f,	// (0x000333db) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0003da7b) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0003da7b) temp_image_control_pane_g

0xcae4,	// (0x0003ae50) main_mp3_pane_g1

0x5082,	// (0x000333ee) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0003da84) main_mp3_pane_g

0xcb47,	// (0x0003aeb3) main_mp3_pane_t1

0xa5b2,	// (0x0003891e) main_camera_pane_g8_ParamLimits

0xa5b2,	// (0x0003891e) main_camera_pane_g8

0x24db,	// (0x00030847) main_video_pane_g7_ParamLimits

0x24db,	// (0x00030847) main_video_pane_g7

0x4c7f,	// (0x00032feb) main_camera2_pane_t7_ParamLimits

0x4c7f,	// (0x00032feb) main_camera2_pane_t7

0xa6fa,	// (0x00038a66) scroll_pane_cp025_ParamLimits

0xa6fa,	// (0x00038a66) scroll_pane_cp025

0xa70e,	// (0x00038a7a) scroll_pane_cp026_ParamLimits

0xa70e,	// (0x00038a7a) scroll_pane_cp026

0xa71d,	// (0x00038a89) wml_content_pane_ParamLimits

0x1995,	// (0x0002fd01) main_touch_calib_pane

0x5156,	// (0x000334c2) main_touch_calib_pane_g1

0x5168,	// (0x000334d4) main_touch_calib_pane_g2

0x517a,	// (0x000334e6) main_touch_calib_pane_g3

0x518c,	// (0x000334f8) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0003daa2) main_touch_calib_pane_g

0x519e,	// (0x0003350a) main_touch_calib_pane_t1

0x51b8,	// (0x00033524) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0003daab) main_touch_calib_pane_t

0xaeb9,	// (0x00039225) mup_progress_pane_cp02

0xaeee,	// (0x0003925a) navi_pane_g1

0xafa9,	// (0x00039315) navi_pane_mp_t3

0x197b,	// (0x0002fce7) main_mp3_pane_ParamLimits

0x49ad,	// (0x00032d19) navi_pane_ParamLimits

0xcae4,	// (0x0003ae50) main_mp3_pane_g1_ParamLimits

0x5082,	// (0x000333ee) main_mp3_pane_g2_ParamLimits

0x5090,	// (0x000333fc) main_mp3_pane_g3_ParamLimits

0x5090,	// (0x000333fc) main_mp3_pane_g3

0x509e,	// (0x0003340a) main_mp3_pane_g4_ParamLimits

0x509e,	// (0x0003340a) main_mp3_pane_g4

0xcb14,	// (0x0003ae80) main_mp3_pane_g5_ParamLimits

0xcb14,	// (0x0003ae80) main_mp3_pane_g5

0xcb22,	// (0x0003ae8e) main_mp3_pane_g6_ParamLimits

0xcb22,	// (0x0003ae8e) main_mp3_pane_g6

0xcb2f,	// (0x0003ae9b) main_mp3_pane_g7_ParamLimits

0xcb2f,	// (0x0003ae9b) main_mp3_pane_g7

0xcb3b,	// (0x0003aea7) main_mp3_pane_g8_ParamLimits

0xcb3b,	// (0x0003aea7) main_mp3_pane_g8

0xf718,	// (0x0003da84) main_mp3_pane_g_ParamLimits

0x50aa,	// (0x00033416) main_mp3_pane_t2

0x50b8,	// (0x00033424) main_mp3_pane_t3

0xcb55,	// (0x0003aec1) main_mp3_pane_t4

0xcb63,	// (0x0003aecf) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0003da95) main_mp3_pane_t

0xcb71,	// (0x0003aedd) mup_progress_pane_cp01

0x18f0,	// (0x0002fc5c) aid_zoom_text_secondary2

0xc92b,	// (0x0003ac97) list_cale_ev2_pane

0xc933,	// (0x0003ac9f) scroll_pane_cp023_ParamLimits

0x520e,	// (0x0003357a) field_cale_ev2_pane_ParamLimits

0x520e,	// (0x0003357a) field_cale_ev2_pane

0x522e,	// (0x0003359a) field_cale_ev2_pane_g1_ParamLimits

0x522e,	// (0x0003359a) field_cale_ev2_pane_g1

0x523a,	// (0x000335a6) field_cale_ev2_pane_g2_ParamLimits

0x523a,	// (0x000335a6) field_cale_ev2_pane_g2

0x5252,	// (0x000335be) field_cale_ev2_pane_g3_ParamLimits

0x5252,	// (0x000335be) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0003dab6) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0003dab6) field_cale_ev2_pane_g

0x526a,	// (0x000335d6) field_cale_ev2_pane_t1_ParamLimits

0x526a,	// (0x000335d6) field_cale_ev2_pane_t1

0x5281,	// (0x000335ed) field_cale_ev2_pane_t2_ParamLimits

0x5281,	// (0x000335ed) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0003dabf) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0003dabf) field_cale_ev2_pane_t

0x412d,	// (0x00032499) main_postcard_pane_g5_ParamLimits

0x412d,	// (0x00032499) main_postcard_pane_g5

0x4143,	// (0x000324af) main_postcard_pane_g6_ParamLimits

0x4143,	// (0x000324af) main_postcard_pane_g6

0x22a7,	// (0x00030613) camera2_autofocus_pane_cp_ParamLimits

0x22a7,	// (0x00030613) camera2_autofocus_pane_cp

0x197b,	// (0x0002fce7) main_mup3_pane

0x52ba,	// (0x00033626) main_mup3_pane_g1_ParamLimits

0x52ba,	// (0x00033626) main_mup3_pane_g1

0x52dc,	// (0x00033648) main_mup3_pane_g2_ParamLimits

0x52dc,	// (0x00033648) main_mup3_pane_g2

0x535a,	// (0x000336c6) main_mup3_pane_g3_ParamLimits

0x535a,	// (0x000336c6) main_mup3_pane_g3

0x53a0,	// (0x0003370c) main_mup3_pane_g4_ParamLimits

0x53a0,	// (0x0003370c) main_mup3_pane_g4

0x53e6,	// (0x00033752) main_mup3_pane_g5_ParamLimits

0x53e6,	// (0x00033752) main_mup3_pane_g5

0x542c,	// (0x00033798) main_mup3_pane_g6_ParamLimits

0x542c,	// (0x00033798) main_mup3_pane_g6

0xcba5,	// (0x0003af11) main_mup3_pane_g7_ParamLimits

0xcba5,	// (0x0003af11) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0003dacf) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0003dacf) main_mup3_pane_g

0x54aa,	// (0x00033816) main_mup3_pane_t1_ParamLimits

0x54aa,	// (0x00033816) main_mup3_pane_t1

0x551e,	// (0x0003388a) main_mup3_pane_t2_ParamLimits

0x551e,	// (0x0003388a) main_mup3_pane_t2

0x55f2,	// (0x0003395e) main_mup3_pane_t4_ParamLimits

0x55f2,	// (0x0003395e) main_mup3_pane_t4

0x5648,	// (0x000339b4) main_mup3_pane_t5_ParamLimits

0x5648,	// (0x000339b4) main_mup3_pane_t5

0x5704,	// (0x00033a70) main_mup3_pane_t6_ParamLimits

0x5704,	// (0x00033a70) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0003dae0) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0003dae0) main_mup3_pane_t

0x57bc,	// (0x00033b28) mup3_progress_pane_ParamLimits

0x57bc,	// (0x00033b28) mup3_progress_pane

0x5852,	// (0x00033bbe) popup_mup3_control_window_ParamLimits

0x5852,	// (0x00033bbe) popup_mup3_control_window

0xcbb3,	// (0x0003af1f) popup_mup3_text_window

0x5884,	// (0x00033bf0) mup3_progress_pane_t1

0x58a3,	// (0x00033c0f) mup3_progress_pane_t2

0xcbbb,	// (0x0003af27) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0003daed) mup3_progress_pane_t

0xcbd8,	// (0x0003af44) mup_progress_pane_cp03

0x9c9f,	// (0x0003800b) bg_tb_trans_pane_cp04

0x58c2,	// (0x00033c2e) mup3_volume_pane

0x58ca,	// (0x00033c36) popup_mup3_control_window_g1

0x58d3,	// (0x00033c3f) mup3_volume_pane_g1

0x58dc,	// (0x00033c48) mup3_volume_pane_g2

0x58e5,	// (0x00033c51) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0003daf4) mup3_volume_pane_g

0x9c9f,	// (0x0003800b) bg_tb_trans_pane_cp03

0xcbe8,	// (0x0003af54) popup_mup3_text_window_g1

0xcbf0,	// (0x0003af5c) popup_mup3_text_window_t1

0xa424,	// (0x00038790) list_calc_item_pane_g1_ParamLimits

0xc5f8,	// (0x0003a964) mup_volume_pane_cp_g1

0x51d2,	// (0x0003353e) main_touch_calib_pane_t3

0x51e6,	// (0x00033552) main_touch_calib_pane_t4

0x51fa,	// (0x00033566) main_touch_calib_pane_t5

0x18dc,	// (0x0002fc48) aid_cell_size_toolbar2

0x18e4,	// (0x0002fc50) aid_popup3_width_pane

0x18f0,	// (0x0002fc5c) aid_zoom_text_msg_primary

0x227c,	// (0x000305e8) vorec_t7

0xa3e8,	// (0x00038754) bg_calc_paper_pane_g1_ParamLimits

0xa3f4,	// (0x00038760) bg_calc_paper_pane_g2_ParamLimits

0xa400,	// (0x0003876c) bg_calc_paper_pane_g3_ParamLimits

0xa40c,	// (0x00038778) bg_calc_paper_pane_g4_ParamLimits

0xa418,	// (0x00038784) bg_calc_paper_pane_g5_ParamLimits

0x1c3b,	// (0x0002ffa7) bg_calc_paper_pane_g6_ParamLimits

0x1c4a,	// (0x0002ffb6) bg_calc_paper_pane_g7_ParamLimits

0x1c59,	// (0x0002ffc5) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0003d4a9) bg_calc_paper_pane_g_ParamLimits

0x1c6c,	// (0x0002ffd8) calc_bg_paper_pane_g9_ParamLimits

0x23f2,	// (0x0003075e) image_qvga_pane_ParamLimits

0x23f2,	// (0x0003075e) image_qvga_pane

0xa317,	// (0x00038683) bg_popup_sub_pane_cp04_ParamLimits

0xb2a4,	// (0x00039610) popup_mup_playback_window_g1_ParamLimits

0xb2b0,	// (0x0003961c) popup_mup_playback_window_t1_ParamLimits

0xb2c5,	// (0x00039631) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0003d833) popup_mup_playback_window_t_ParamLimits

0x4cad,	// (0x00033019) main_mup2_pane_g3_ParamLimits

0x4cad,	// (0x00033019) main_mup2_pane_g3

0x2801,	// (0x00030b6d) popup_toolbar_window_cp04

0xb6a7,	// (0x00039a13) popup_call2_audio_second_window_g3_ParamLimits

0xb6a7,	// (0x00039a13) popup_call2_audio_second_window_g3

0xbab1,	// (0x00039e1d) popup_call2_audio_first_window_g4_ParamLimits

0xbab1,	// (0x00039e1d) popup_call2_audio_first_window_g4

0xc130,	// (0x0003a49c) popup_call2_audio_in_window_g4_ParamLimits

0xc130,	// (0x0003a49c) popup_call2_audio_in_window_g4

0x425a,	// (0x000325c6) aid_area_sk_bg_cut_ParamLimits

0x425a,	// (0x000325c6) aid_area_sk_bg_cut

0xb2da,	// (0x00039646) aid_area_sk_bg_cut_2_ParamLimits

0xb2da,	// (0x00039646) aid_area_sk_bg_cut_2

0x5015,	// (0x00033381) aid_placing_details_win

0x501d,	// (0x00033389) aid_placing_details_win_2

0xca26,	// (0x0003ad92) camera2_autofocus_pane_g1_ParamLimits

0x0195,	// (0x0002e501) popup_fixed_preview_cale_window_ParamLimits

0x0195,	// (0x0002e501) popup_fixed_preview_cale_window

0xb027,	// (0x00039393) navi_slider_pane_g3

0xb030,	// (0x0003939c) navi_slider_pane_g4

0xb039,	// (0x000393a5) navi_slider_pane_g5

0xb027,	// (0x00039393) navi_slider_pane_g6

0x3b86,	// (0x00031ef2) navi_slider_pane_g7

0xb15a,	// (0x000394c6) mup_scale_pane_g3

0xb163,	// (0x000394cf) mup_scale_pane_g4

0xb16c,	// (0x000394d8) mup_scale_pane_g5

0x3f89,	// (0x000322f5) mup_scale_pane_g6

0x3f92,	// (0x000322fe) mup_scale_pane_g7

0xb027,	// (0x00039393) cams2_slider_pane_g3

0xc67a,	// (0x0003a9e6) cams2_slider_pane_g4

0x4f62,	// (0x000332ce) cams2_slider_pane_g5

0xb027,	// (0x00039393) cams2_slider_pane_g6

0x4f6a,	// (0x000332d6) cams2_slider_pane_g7

0xc8b1,	// (0x0003ac1d) camera2_autofocus_pane_cp_g1

0xc491,	// (0x0003a7fd) bg_popup_preview_window_pane_cp02_ParamLimits

0xc491,	// (0x0003a7fd) bg_popup_preview_window_pane_cp02

0xcbfe,	// (0x0003af6a) list_fp_cale_pane_ParamLimits

0xcbfe,	// (0x0003af6a) list_fp_cale_pane

0xcc0a,	// (0x0003af76) popup_fixed_preview_cale_window_t1_ParamLimits

0xcc0a,	// (0x0003af76) popup_fixed_preview_cale_window_t1

0x58ee,	// (0x00033c5a) popup_fixed_preview_cale_window_t2_ParamLimits

0x58ee,	// (0x00033c5a) popup_fixed_preview_cale_window_t2

0x5903,	// (0x00033c6f) popup_fixed_preview_cale_window_t3_ParamLimits

0x5903,	// (0x00033c6f) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0003dafb) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0003dafb) popup_fixed_preview_cale_window_t

0x5918,	// (0x00033c84) list_single_fp_cale_pane_ParamLimits

0x5918,	// (0x00033c84) list_single_fp_cale_pane

0xcc28,	// (0x0003af94) list_single_fp_cale_pane_g1_ParamLimits

0xcc28,	// (0x0003af94) list_single_fp_cale_pane_g1

0xcc34,	// (0x0003afa0) list_single_fp_cale_pane_g2_ParamLimits

0xcc34,	// (0x0003afa0) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0003db02) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0003db02) list_single_fp_cale_pane_g

0xcc4d,	// (0x0003afb9) list_single_fp_cale_pane_t1_ParamLimits

0xcc4d,	// (0x0003afb9) list_single_fp_cale_pane_t1

0xcc5f,	// (0x0003afcb) list_single_fp_cale_pane_t2_ParamLimits

0xcc5f,	// (0x0003afcb) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0003db09) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0003db09) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1995,	// (0x0002fd01) main_dialer_pane

0x592d,	// (0x00033c99) aid_cell_size_keypad

0x5937,	// (0x00033ca3) dialer_ne_pane

0x593f,	// (0x00033cab) grid_dialer_command_1_pane

0x5947,	// (0x00033cb3) grid_dialer_command_2_pane

0x594f,	// (0x00033cbb) grid_dialer_keypad_pane

0x5961,	// (0x00033ccd) bg_popup_call_pane_cp06_ParamLimits

0x5961,	// (0x00033ccd) bg_popup_call_pane_cp06

0x596d,	// (0x00033cd9) dialer_ne_clear_pane_ParamLimits

0x596d,	// (0x00033cd9) dialer_ne_clear_pane

0xcc92,	// (0x0003affe) dialer_ne_pane_g1

0xcc9a,	// (0x0003b006) dialer_ne_pane_t1_ParamLimits

0xcc9a,	// (0x0003b006) dialer_ne_pane_t1

0x5979,	// (0x00033ce5) dialer_ne_pane_t2_ParamLimits

0x5979,	// (0x00033ce5) dialer_ne_pane_t2

0x59a3,	// (0x00033d0f) dialer_ne_pane_t3_ParamLimits

0x59a3,	// (0x00033d0f) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0003db0e) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0003db0e) dialer_ne_pane_t

0x59d3,	// (0x00033d3f) dialer_ne_pane_t3_copy1_ParamLimits

0x59d3,	// (0x00033d3f) dialer_ne_pane_t3_copy1

0x5a02,	// (0x00033d6e) cell_dialer_keypad_pane_ParamLimits

0x5a02,	// (0x00033d6e) cell_dialer_keypad_pane

0x5a19,	// (0x00033d85) cell_dialer_command_1_pane_ParamLimits

0x5a19,	// (0x00033d85) cell_dialer_command_1_pane

0x5a2f,	// (0x00033d9b) cell_dialer_command_2_pane_ParamLimits

0x5a2f,	// (0x00033d9b) cell_dialer_command_2_pane

0xccac,	// (0x0003b018) bg_button_pane_cp02_ParamLimits

0xccac,	// (0x0003b018) bg_button_pane_cp02

0x5a3e,	// (0x00033daa) cell_dialer_keypad_pane_g1_ParamLimits

0x5a3e,	// (0x00033daa) cell_dialer_keypad_pane_g1

0xccac,	// (0x0003b018) bg_button_pane_cp03_ParamLimits

0xccac,	// (0x0003b018) bg_button_pane_cp03

0x5a52,	// (0x00033dbe) cell_dialer_command_1_pane_g1_ParamLimits

0x5a52,	// (0x00033dbe) cell_dialer_command_1_pane_g1

0xccb8,	// (0x0003b024) bg_button_pane_cp04

0x5a66,	// (0x00033dd2) cell_dialer_command_2_pane_g1

0xa5aa,	// (0x00038916) bg_button_pane_cp06

0xccc0,	// (0x0003b02c) dialer_ne_clear_pane_g1

0xaefa,	// (0x00039266) navi_pane_g2

0xaf28,	// (0x00039294) navi_pane_g3

0x0002,

0xf3ca,	// (0x0003d736) navi_pane_g

0xafb7,	// (0x00039323) navi_pane_mv_g2

0xafde,	// (0x0003934a) navi_pane_mv_g5

0x3b3b,	// (0x00031ea7) navi_pane_mv_t1

0xa3dc,	// (0x00038748) main_clock2_pane

0xab27,	// (0x00038e93) main_clock2_list_pane_ParamLimits

0xab27,	// (0x00038e93) main_clock2_list_pane

0x5ad7,	// (0x00033e43) main_clock2_pane_t1_ParamLimits

0x5ad7,	// (0x00033e43) main_clock2_pane_t1

0x5b12,	// (0x00033e7e) main_clock2_pane_t2_ParamLimits

0x5b12,	// (0x00033e7e) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0003db1a) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0003db1a) main_clock2_pane_t

0x5bb2,	// (0x00033f1e) popup_clock_analogue_window_cp03_ParamLimits

0x5bb2,	// (0x00033f1e) popup_clock_analogue_window_cp03

0x5bd7,	// (0x00033f43) popup_clock_digital_window_cp02_ParamLimits

0x5bd7,	// (0x00033f43) popup_clock_digital_window_cp02

0x5c50,	// (0x00033fbc) main_clock2_list_single_pane_ParamLimits

0x5c50,	// (0x00033fbc) main_clock2_list_single_pane

0xa5aa,	// (0x00038916) list_highlight_pane_cp05

0xccfe,	// (0x0003b06a) main_clock2_list_single_pane_t1

0x2801,	// (0x00030b6d) popup_toolbar_window_cp04_ParamLimits

0x503f,	// (0x000333ab) camera2_autofocus_pane_g2_ParamLimits

0x503f,	// (0x000333ab) camera2_autofocus_pane_g2

0x504b,	// (0x000333b7) camera2_autofocus_pane_g3_ParamLimits

0x504b,	// (0x000333b7) camera2_autofocus_pane_g3

0x5057,	// (0x000333c3) camera2_autofocus_pane_g4_ParamLimits

0x5057,	// (0x000333c3) camera2_autofocus_pane_g4

0x5063,	// (0x000333cf) camera2_autofocus_pane_g5_ParamLimits

0x5063,	// (0x000333cf) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0003da5e) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0003da5e) camera2_autofocus_pane_g

0xcb85,	// (0x0003aef1) camera2_autofocus_pane_cp_g2

0xcb8d,	// (0x0003aef9) camera2_autofocus_pane_cp_g3

0xcb95,	// (0x0003af01) camera2_autofocus_pane_cp_g4

0xcb9d,	// (0x0003af09) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0003dac4) camera2_autofocus_pane_cp_g

0x5959,	// (0x00033cc5) popup_dialer_spcha_window

0x9c9f,	// (0x0003800b) bg_popup_sub_pane_cp07

0xcd0c,	// (0x0003b078) list_spcha_pane

0xcd14,	// (0x0003b080) list_single_spcha_pane_ParamLimits

0xcd14,	// (0x0003b080) list_single_spcha_pane

0x9c9f,	// (0x0003800b) list_highlight_pane_cp06

0xcd25,	// (0x0003b091) list_single_spcha_pane_t1

0xbeda,	// (0x0003a246) popup_call2_audio_out_window_g4_ParamLimits

0xbeda,	// (0x0003a246) popup_call2_audio_out_window_g4

0x1995,	// (0x0002fd01) main_imed2_pane

0x4973,	// (0x00032cdf) popup_imed_adjust2_window

0x0608,	// (0x0002e974) popup_imed_trans_window_ParamLimits

0x0608,	// (0x0002e974) popup_imed_trans_window

0xc6e3,	// (0x0003aa4f) popup_blid_sat_info2_window_t1

0xc6f1,	// (0x0003aa5d) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0003d9f3) popup_blid_sat_info2_window_t

0x5c62,	// (0x00033fce) aid_size_cell_colour_35

0x5c82,	// (0x00033fee) aid_size_cell_colour_112

0x5ca2,	// (0x0003400e) aid_size_cell_effect

0xc49d,	// (0x0003a809) bg_tb_trans_pane_cp02

0xaa4b,	// (0x00038db7) heading_imed_pane

0x5cc2,	// (0x0003402e) listscroll_imed_pane

0xcd33,	// (0x0003b09f) heading_imed_pane_g1

0xcd3b,	// (0x0003b0a7) heading_imed_pane_t1

0xcd49,	// (0x0003b0b5) grid_imed_colour_35_pane_ParamLimits

0xcd49,	// (0x0003b0b5) grid_imed_colour_35_pane

0x5cce,	// (0x0003403a) grid_imed_effect_pane

0xcd60,	// (0x0003b0cc) list_imed_aspect_pane

0x5ce4,	// (0x00034050) scroll_pane_cp027_ParamLimits

0x5ce4,	// (0x00034050) scroll_pane_cp027

0x5cf5,	// (0x00034061) cell_imed_effect_pane_ParamLimits

0x5cf5,	// (0x00034061) cell_imed_effect_pane

0xcd68,	// (0x0003b0d4) cell_imed_colour_pane_ParamLimits

0xcd68,	// (0x0003b0d4) cell_imed_colour_pane

0xcdaa,	// (0x0003b116) cell_imed_colour_pane_g1_ParamLimits

0xcdaa,	// (0x0003b116) cell_imed_colour_pane_g1

0xcdbb,	// (0x0003b127) hgihlgiht_grid_pane_cp016_ParamLimits

0xcdbb,	// (0x0003b127) hgihlgiht_grid_pane_cp016

0x5d1c,	// (0x00034088) cell_imed_effect_pane_g1

0x5d24,	// (0x00034090) grid_highlight_pane_cp017

0xcdcc,	// (0x0003b138) list_imed_single_pane_ParamLimits

0xcdcc,	// (0x0003b138) list_imed_single_pane

0x9c9f,	// (0x0003800b) list_highlight_pane_cp07

0xcde1,	// (0x0003b14d) list_imed_aspect_pane_comp1_t1

0xc49d,	// (0x0003a809) bg_tb_trans_pane_cp05

0xce03,	// (0x0003b16f) popup_imed_adjust2_window_g1

0xce2a,	// (0x0003b196) popup_imed_adjust2_window_t1

0xce42,	// (0x0003b1ae) slider_imed_adjust_pane

0xce56,	// (0x0003b1c2) slider_imed_adjust_pane_g1

0xce66,	// (0x0003b1d2) slider_imed_adjust_pane_g2

0xce76,	// (0x0003b1e2) slider_imed_adjust_pane_g3

0xce87,	// (0x0003b1f3) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0003db37) slider_imed_adjust_pane_g

0x5d2d,	// (0x00034099) aid_size_cell_clipart2

0x5d39,	// (0x000340a5) grid_imed_clipart_pane

0xce98,	// (0x0003b204) scroll_pane_cp031

0x5d43,	// (0x000340af) cell_imed_clipart_pane_ParamLimits

0x5d43,	// (0x000340af) cell_imed_clipart_pane

0x5d65,	// (0x000340d1) cell_imed_clipart_pane_g1

0x9c9f,	// (0x0003800b) grid_highlight_pane_cp014

0x5ab3,	// (0x00033e1f) main_clock2_pane_g1_ParamLimits

0x5ab3,	// (0x00033e1f) main_clock2_pane_g1

0x5bf7,	// (0x00033f63) aid_call2_pane_cp10

0x5c09,	// (0x00033f75) aid_call_pane_cp10

0xae5b,	// (0x000391c7) popup_clock_analogue_window_cp10_g1

0xae5b,	// (0x000391c7) popup_clock_analogue_window_cp10_g2

0x5c1b,	// (0x00033f87) popup_clock_analogue_window_cp10_g3

0x5c1b,	// (0x00033f87) popup_clock_analogue_window_cp10_g4

0xae5b,	// (0x000391c7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0003db25) popup_clock_analogue_window_cp10_g

0x5c31,	// (0x00033f9d) popup_clock_analogue_window_cp10_t1

0x0c4c,	// (0x0002efb8) clock_digital_number_pane_cp10_ParamLimits

0x0c4c,	// (0x0002efb8) clock_digital_number_pane_cp10

0x0c64,	// (0x0002efd0) clock_digital_number_pane_cp11_ParamLimits

0x0c64,	// (0x0002efd0) clock_digital_number_pane_cp11

0x0c7c,	// (0x0002efe8) clock_digital_number_pane_cp12_ParamLimits

0x0c7c,	// (0x0002efe8) clock_digital_number_pane_cp12

0x0c96,	// (0x0002f002) clock_digital_number_pane_cp13_ParamLimits

0x0c96,	// (0x0002f002) clock_digital_number_pane_cp13

0x0cb0,	// (0x0002f01c) clock_digital_separator_pane_cp10_ParamLimits

0x0cb0,	// (0x0002f01c) clock_digital_separator_pane_cp10

0x0cca,	// (0x0002f036) popup_clock_digital_window_cp02_t1_ParamLimits

0x0cca,	// (0x0002f036) popup_clock_digital_window_cp02_t1

0xa30f,	// (0x0003867b) clock_digital_number_pane_cp10_g1

0xa30f,	// (0x0003867b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0003db40) clock_digital_number_pane_cp10_g

0xa30f,	// (0x0003867b) clock_digital_separator_pane_cp10_g1

0xa30f,	// (0x0003867b) clock_digital_separator_pane_g2_cp10

0xafe6,	// (0x00039352) navi_pane_vded_g4

0xafef,	// (0x0003935b) navi_pane_vded_g5

0xaff8,	// (0x00039364) navi_pane_vded_t1

0x1995,	// (0x0002fd01) main_vded_pane

0x5d6e,	// (0x000340da) main_vded_pane_g1

0x5d78,	// (0x000340e4) main_vded_pane_g2

0x5d82,	// (0x000340ee) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0003db45) main_vded_pane_g

0x5d8c,	// (0x000340f8) main_vded_pane_t1

0x5d9a,	// (0x00034106) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0003db4c) main_vded_pane_t

0x5da8,	// (0x00034114) vded_slider_pane

0x5db0,	// (0x0003411c) vded_video_pane

0xcea0,	// (0x0003b20c) vded_video_pane_g1

0x5db8,	// (0x00034124) vded_video_pane_g2

0xc8b1,	// (0x0003ac1d) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0003db51) vded_video_pane_g

0xceaa,	// (0x0003b216) vded_slider_pane_g1

0xc5f8,	// (0x0003a964) vded_slider_pane_g2

0xceb3,	// (0x0003b21f) vded_slider_pane_g3

0xcebc,	// (0x0003b228) vded_slider_pane_g4

0xcec5,	// (0x0003b231) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0003db58) vded_slider_pane_g

0x583a,	// (0x00033ba6) mup3_rocker_pane_ParamLimits

0x583a,	// (0x00033ba6) mup3_rocker_pane

0x5dc1,	// (0x0003412d) mup3_control_keys_pane_g1

0x5dc9,	// (0x00034135) mup3_control_keys_pane_g2

0x5dd1,	// (0x0003413d) mup3_control_keys_pane_g3

0x5dd9,	// (0x00034145) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0003db63) mup3_control_keys_pane_g

0x01cc,	// (0x0002e538) popup_toolbar2_fixed_window_cp01_ParamLimits

0x01cc,	// (0x0002e538) popup_toolbar2_fixed_window_cp01

0x586e,	// (0x00033bda) popup_toolbar2_fixed_window_cp02_ParamLimits

0x586e,	// (0x00033bda) popup_toolbar2_fixed_window_cp02

0xb819,	// (0x00039b85) popup_call2_audio_second_window_t4_ParamLimits

0xb819,	// (0x00039b85) popup_call2_audio_second_window_t4

0xbd47,	// (0x0003a0b3) popup_call2_audio_first_window_t6_ParamLimits

0xbd47,	// (0x0003a0b3) popup_call2_audio_first_window_t6

0xbfdd,	// (0x0003a349) popup_call2_audio_out_window_t6_ParamLimits

0xbfdd,	// (0x0003a349) popup_call2_audio_out_window_t6

0x1995,	// (0x0002fd01) main_vitu_pane

0x5de9,	// (0x00034155) aid_size_cell_itu_ParamLimits

0x5de9,	// (0x00034155) aid_size_cell_itu

0xab27,	// (0x00038e93) bg_popup_window_pane_cp08_ParamLimits

0xab27,	// (0x00038e93) bg_popup_window_pane_cp08

0x5dff,	// (0x0003416b) field_vitu_entry_pane_ParamLimits

0x5dff,	// (0x0003416b) field_vitu_entry_pane

0x5e16,	// (0x00034182) grid_vitu_function_pane_ParamLimits

0x5e16,	// (0x00034182) grid_vitu_function_pane

0x5e31,	// (0x0003419d) grid_vitu_itu_pane_ParamLimits

0x5e31,	// (0x0003419d) grid_vitu_itu_pane

0x5e4f,	// (0x000341bb) cell_vitu_itu_pane_ParamLimits

0x5e4f,	// (0x000341bb) cell_vitu_itu_pane

0x5e71,	// (0x000341dd) cell_vitu_function_pane_ParamLimits

0x5e71,	// (0x000341dd) cell_vitu_function_pane

0xab27,	// (0x00038e93) bg_popup_sub_pane_cp08_ParamLimits

0xab27,	// (0x00038e93) bg_popup_sub_pane_cp08

0x5e8a,	// (0x000341f6) field_vitu_entry_pane_t1_ParamLimits

0x5e8a,	// (0x000341f6) field_vitu_entry_pane_t1

0xcee6,	// (0x0003b252) field_vitu_entry_pane_t2_ParamLimits

0xcee6,	// (0x0003b252) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0003db71) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0003db71) field_vitu_entry_pane_t

0xcf03,	// (0x0003b26f) bg_button_pane_cp05_ParamLimits

0xcf03,	// (0x0003b26f) bg_button_pane_cp05

0x5ea8,	// (0x00034214) cell_vitu_itu_pane_g1

0x5ec0,	// (0x0003422c) cell_vitu_itu_pane_t1_ParamLimits

0x5ec0,	// (0x0003422c) cell_vitu_itu_pane_t1

0x5ed2,	// (0x0003423e) cell_vitu_itu_pane_t2_ParamLimits

0x5ed2,	// (0x0003423e) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0003db76) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0003db76) cell_vitu_itu_pane_t

0xcf11,	// (0x0003b27d) bg_button_pane_cp07

0x5f07,	// (0x00034273) cell_vitu_function_pane_g1

0x1b37,	// (0x0002fea3) main_calc_pane_g1

0x002c,	// (0x0002e398) aid_visual_content_pane

0x1995,	// (0x0002fd01) main_vradio_pane

0x5f10,	// (0x0003427c) main_vradio_pane_g1_ParamLimits

0x5f10,	// (0x0003427c) main_vradio_pane_g1

0xcf1b,	// (0x0003b287) main_vradio_pane_g2_ParamLimits

0xcf1b,	// (0x0003b287) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0003db7d) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0003db7d) main_vradio_pane_g

0x5f29,	// (0x00034295) main_vradio_pane_t1_ParamLimits

0x5f29,	// (0x00034295) main_vradio_pane_t1

0x5f3e,	// (0x000342aa) main_vradio_pane_t2_ParamLimits

0x5f3e,	// (0x000342aa) main_vradio_pane_t2

0xcf28,	// (0x0003b294) main_vradio_pane_t3_ParamLimits

0xcf28,	// (0x0003b294) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0003db82) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0003db82) main_vradio_pane_t

0x5f53,	// (0x000342bf) vradio_rocker_control_pane_ParamLimits

0x5f53,	// (0x000342bf) vradio_rocker_control_pane

0x5f65,	// (0x000342d1) vradio_station_info_pane_ParamLimits

0x5f65,	// (0x000342d1) vradio_station_info_pane

0xcf3c,	// (0x0003b2a8) vradio_frequency_info_pane_ParamLimits

0xcf3c,	// (0x0003b2a8) vradio_frequency_info_pane

0xc8b1,	// (0x0003ac1d) vradio_station_info_pane_g1

0xcf4b,	// (0x0003b2b7) vradio_station_info_pane_t1_ParamLimits

0xcf4b,	// (0x0003b2b7) vradio_station_info_pane_t1

0xcf6d,	// (0x0003b2d9) vradio_station_info_pane_t2_ParamLimits

0xcf6d,	// (0x0003b2d9) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0003db89) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0003db89) vradio_station_info_pane_t

0xcf7f,	// (0x0003b2eb) vradio_tuning_pane

0xcf87,	// (0x0003b2f3) vradio_rocker_control_pane_g1

0xcf8f,	// (0x0003b2fb) vradio_rocker_control_pane_g2

0xcf97,	// (0x0003b303) vradio_rocker_control_pane_g3

0xcf9f,	// (0x0003b30b) vradio_rocker_control_pane_g4

0xcfa7,	// (0x0003b313) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0003db8e) vradio_rocker_control_pane_g

0x5f77,	// (0x000342e3) vradio_frequency_info_pane_g1

0xcfaf,	// (0x0003b31b) vradio_frequency_info_pane_t1_ParamLimits

0xcfaf,	// (0x0003b31b) vradio_frequency_info_pane_t1

0x5f81,	// (0x000342ed) vradio_tuning_pane_g1

0x5f8c,	// (0x000342f8) vradio_tuning_pane_t1

0x1939,	// (0x0002fca5) area_side_right_pane_ParamLimits

0x1939,	// (0x0002fca5) area_side_right_pane

0xc458,	// (0x0003a7c4) status_small_pane_g1

0xc460,	// (0x0003a7cc) status_small_pane_g2

0xc469,	// (0x0003a7d5) status_small_pane_g3

0xc472,	// (0x0003a7de) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0003d949) status_small_pane_g

0xc47b,	// (0x0003a7e7) status_small_pane_t1

0x1995,	// (0x0002fd01) main_video3_pane

0xcfc3,	// (0x0003b32f) cams_zoom_vslider_pane

0xcfcb,	// (0x0003b337) image3_wide_pane_ParamLimits

0xcfcb,	// (0x0003b337) image3_wide_pane

0xcfe5,	// (0x0003b351) image3_wide_small_pane

0xcff1,	// (0x0003b35d) main_video3_pane_g1_ParamLimits

0xcff1,	// (0x0003b35d) main_video3_pane_g1

0xd00d,	// (0x0003b379) main_video3_pane_g2_ParamLimits

0xd00d,	// (0x0003b379) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0003db99) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0003db99) main_video3_pane_g

0xd029,	// (0x0003b395) main_video3_pane_t1_ParamLimits

0xd029,	// (0x0003b395) main_video3_pane_t1

0xd054,	// (0x0003b3c0) main_video3_pane_t2_ParamLimits

0xd054,	// (0x0003b3c0) main_video3_pane_t2

0xd07f,	// (0x0003b3eb) main_video3_pane_t3_ParamLimits

0xd07f,	// (0x0003b3eb) main_video3_pane_t3

0x0002,

0xf832,	// (0x0003db9e) main_video3_pane_t_ParamLimits

0xf832,	// (0x0003db9e) main_video3_pane_t

0xd0ac,	// (0x0003b418) cams_zoom_vslider_pane_g1

0xd0b5,	// (0x0003b421) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0003dba5) cams_zoom_vslider_pane_g

0xd0bd,	// (0x0003b429) small_slider_vertical_pane

0xc8b1,	// (0x0003ac1d) small_slider_vertical_pane_g1

0xc8b1,	// (0x0003ac1d) small_slider_vertical_pane_g2

0xd0c5,	// (0x0003b431) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0003dbaa) small_slider_vertical_pane_g

0x1995,	// (0x0002fd01) main_hwr_training_pane

0xd0ce,	// (0x0003b43a) hwr_training_instruct_pane_ParamLimits

0xd0ce,	// (0x0003b43a) hwr_training_instruct_pane

0x5f9b,	// (0x00034307) hwr_training_navi_pane_ParamLimits

0x5f9b,	// (0x00034307) hwr_training_navi_pane

0x5fba,	// (0x00034326) hwr_training_write_pane_ParamLimits

0x5fba,	// (0x00034326) hwr_training_write_pane

0x9c9f,	// (0x0003800b) bg_frame_shadow_pane

0xd105,	// (0x0003b471) hwr_training_write_pane_g1

0xd10d,	// (0x0003b479) hwr_training_write_pane_g2

0xd115,	// (0x0003b481) hwr_training_write_pane_g3

0xd11d,	// (0x0003b489) hwr_training_write_pane_g4

0xd125,	// (0x0003b491) hwr_training_write_pane_g5

0xd12d,	// (0x0003b499) hwr_training_write_pane_g6

0xd135,	// (0x0003b4a1) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0003dbb1) hwr_training_write_pane_g

0x5ff5,	// (0x00034361) hwr_training_navi_pane_g1_ParamLimits

0x5ff5,	// (0x00034361) hwr_training_navi_pane_g1

0x6007,	// (0x00034373) hwr_training_navi_pane_g2_ParamLimits

0x6007,	// (0x00034373) hwr_training_navi_pane_g2

0x6019,	// (0x00034385) hwr_training_navi_pane_g3_ParamLimits

0x6019,	// (0x00034385) hwr_training_navi_pane_g3

0x6029,	// (0x00034395) hwr_training_navi_pane_g4_ParamLimits

0x6029,	// (0x00034395) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0003dbc0) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0003dbc0) hwr_training_navi_pane_g

0x6036,	// (0x000343a2) hwr_training_navi_pane_t1

0x6044,	// (0x000343b0) list_single_hwr_training_instruct_pane_ParamLimits

0x6044,	// (0x000343b0) list_single_hwr_training_instruct_pane

0xd13d,	// (0x0003b4a9) list_single_hwr_training_instruct_pane_t1

0xc7e5,	// (0x0003ab51) bg_frame_shadow_pane_g1

0xd14c,	// (0x0003b4b8) bg_frame_shadow_pane_g2

0xd154,	// (0x0003b4c0) bg_frame_shadow_pane_g3

0xd15c,	// (0x0003b4c8) bg_frame_shadow_pane_g4

0xd164,	// (0x0003b4d0) bg_frame_shadow_pane_g5

0xd16c,	// (0x0003b4d8) bg_frame_shadow_pane_g6

0xd174,	// (0x0003b4e0) bg_frame_shadow_pane_g7

0xa49e,	// (0x0003880a) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0003dbcb) bg_frame_shadow_pane_g

0x1995,	// (0x0002fd01) main_video_tele_dialer_pane

0x0cf8,	// (0x0002f064) aid_size_cell_video_keypad_ParamLimits

0x0cf8,	// (0x0002f064) aid_size_cell_video_keypad

0x0d12,	// (0x0002f07e) grid_video_dialer_keypad_pane_ParamLimits

0x0d12,	// (0x0002f07e) grid_video_dialer_keypad_pane

0x0d5e,	// (0x0002f0ca) video_down_pane_cp_ParamLimits

0x0d5e,	// (0x0002f0ca) video_down_pane_cp

0x0d74,	// (0x0002f0e0) cell_video_dialer_keypad_pane_ParamLimits

0x0d74,	// (0x0002f0e0) cell_video_dialer_keypad_pane

0xd17c,	// (0x0003b4e8) bg_button_pane_cp08_ParamLimits

0xd17c,	// (0x0003b4e8) bg_button_pane_cp08

0x6075,	// (0x000343e1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6075,	// (0x000343e1) cell_video_dialer_keypad_pane_g1

0x5824,	// (0x00033b90) mup3_rocker2_pane_ParamLimits

0x5824,	// (0x00033b90) mup3_rocker2_pane

0xc8b1,	// (0x0003ac1d) mup3_rocker2_pane_g1

0x04e9,	// (0x0002e855) main_dialer2_pane

0x1995,	// (0x0002fd01) main_mp4_pane

0x60ca,	// (0x00034436) main_mp4_pane_g1_ParamLimits

0x60ca,	// (0x00034436) main_mp4_pane_g1

0x60ca,	// (0x00034436) main_mp4_pane_g2_ParamLimits

0x60ca,	// (0x00034436) main_mp4_pane_g2

0x0d96,	// (0x0002f102) main_mp4_pane_g3_ParamLimits

0x0d96,	// (0x0002f102) main_mp4_pane_g3

0x60d8,	// (0x00034444) main_mp4_pane_g4_ParamLimits

0x60d8,	// (0x00034444) main_mp4_pane_g4

0x6106,	// (0x00034472) main_mp4_pane_g5_ParamLimits

0x6106,	// (0x00034472) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0003dbeb) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0003dbeb) main_mp4_pane_g

0x617a,	// (0x000344e6) main_mp4_pane_t1_ParamLimits

0x617a,	// (0x000344e6) main_mp4_pane_t1

0x61d6,	// (0x00034542) main_mp4_pane_t2_ParamLimits

0x61d6,	// (0x00034542) main_mp4_pane_t2

0xd188,	// (0x0003b4f4) main_mp4_pane_t3_ParamLimits

0xd188,	// (0x0003b4f4) main_mp4_pane_t3

0x6228,	// (0x00034594) main_mp4_pane_t4_ParamLimits

0x6228,	// (0x00034594) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0003dbfc) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0003dbfc) main_mp4_pane_t

0x626c,	// (0x000345d8) mp4_progress_pane_ParamLimits

0x626c,	// (0x000345d8) mp4_progress_pane

0x62b6,	// (0x00034622) mp4_rocker_pane_ParamLimits

0x62b6,	// (0x00034622) mp4_rocker_pane

0xd1b6,	// (0x0003b522) mp4_progress_pane_t1

0xd1cf,	// (0x0003b53b) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0003dc05) mp4_progress_pane_t

0xd1e8,	// (0x0003b554) mup_progress_pane_cp04

0xd71b,	// (0x0003ba87) mp4_rocker_pane_g1

0x0dd2,	// (0x0002f13e) aid_cell_size_keypad2_ParamLimits

0x0dd2,	// (0x0002f13e) aid_cell_size_keypad2

0x0de8,	// (0x0002f154) dialer2_ne_pane_ParamLimits

0x0de8,	// (0x0002f154) dialer2_ne_pane

0x0e02,	// (0x0002f16e) grid_dialer2_keypad_pane_ParamLimits

0x0e02,	// (0x0002f16e) grid_dialer2_keypad_pane

0xc68a,	// (0x0003a9f6) bg_popup_call_pane_cp07_ParamLimits

0xc68a,	// (0x0003a9f6) bg_popup_call_pane_cp07

0x62d6,	// (0x00034642) dialer2_ne_pane_t1_ParamLimits

0x62d6,	// (0x00034642) dialer2_ne_pane_t1

0x0e1e,	// (0x0002f18a) cell_dialer2_keypad_pane_ParamLimits

0x0e1e,	// (0x0002f18a) cell_dialer2_keypad_pane

0xd20d,	// (0x0003b579) bg_button_pane_pane_cp04_ParamLimits

0xd20d,	// (0x0003b579) bg_button_pane_pane_cp04

0x6311,	// (0x0003467d) cell_dialer2_keypad_pane_g1_ParamLimits

0x6311,	// (0x0003467d) cell_dialer2_keypad_pane_g1

0x26d5,	// (0x00030a41) aid_placing_vt_set_content_ParamLimits

0x26d5,	// (0x00030a41) aid_placing_vt_set_content

0x26fd,	// (0x00030a69) aid_placing_vt_set_title_ParamLimits

0x26fd,	// (0x00030a69) aid_placing_vt_set_title

0x1995,	// (0x0002fd01) main_image3_pane

0x0e9e,	// (0x0002f20a) area_side_right_pane_cp01_ParamLimits

0x0e9e,	// (0x0002f20a) area_side_right_pane_cp01

0x60ca,	// (0x00034436) main_image3_pane_g1_ParamLimits

0x60ca,	// (0x00034436) main_image3_pane_g1

0x0eb5,	// (0x0002f221) main_image3_pane_g2_ParamLimits

0x0eb5,	// (0x0002f221) main_image3_pane_g2

0x0edd,	// (0x0002f249) main_image3_pane_g3_ParamLimits

0x0edd,	// (0x0002f249) main_image3_pane_g3

0x0f07,	// (0x0002f273) main_image3_pane_g4_ParamLimits

0x0f07,	// (0x0002f273) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0003dc14) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0003dc14) main_image3_pane_g

0x0f31,	// (0x0002f29d) main_image3_pane_t1_ParamLimits

0x0f31,	// (0x0002f29d) main_image3_pane_t1

0x0f89,	// (0x0002f2f5) main_image3_pane_t2_ParamLimits

0x0f89,	// (0x0002f2f5) main_image3_pane_t2

0x0fdb,	// (0x0002f347) main_image3_pane_t3_ParamLimits

0x0fdb,	// (0x0002f347) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0003dc1d) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0003dc1d) main_image3_pane_t

0xab27,	// (0x00038e93) grid_sctrl_middle_pane_cp01_ParamLimits

0xab27,	// (0x00038e93) grid_sctrl_middle_pane_cp01

0x63ab,	// (0x00034717) cell_sctrl_middle_pane_cp01_ParamLimits

0x63ab,	// (0x00034717) cell_sctrl_middle_pane_cp01

0x63c8,	// (0x00034734) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63c8,	// (0x00034734) cell_sctrl_middle_pane_cp01_g1

0x1995,	// (0x0002fd01) main_call4_pane

0x1063,	// (0x0002f3cf) aid_size_button_call4_ParamLimits

0x1063,	// (0x0002f3cf) aid_size_button_call4

0x1096,	// (0x0002f402) call4_windows_pane_ParamLimits

0x1096,	// (0x0002f402) call4_windows_pane

0x10b5,	// (0x0002f421) grid_call4_button_pane_ParamLimits

0x10b5,	// (0x0002f421) grid_call4_button_pane

0x63e8,	// (0x00034754) call4_windows_conf_pane

0x63ff,	// (0x0003476b) popup_call4_audio_first_window_ParamLimits

0x63ff,	// (0x0003476b) popup_call4_audio_first_window

0x644f,	// (0x000347bb) popup_call4_audio_second_window_ParamLimits

0x644f,	// (0x000347bb) popup_call4_audio_second_window

0x6466,	// (0x000347d2) popup_call4_audio_wait_window_ParamLimits

0x6466,	// (0x000347d2) popup_call4_audio_wait_window

0x10de,	// (0x0002f44a) cell_call4_button_pane_ParamLimits

0x10de,	// (0x0002f44a) cell_call4_button_pane

0x6474,	// (0x000347e0) bg_button_pane_cp09_ParamLimits

0x6474,	// (0x000347e0) bg_button_pane_cp09

0x1103,	// (0x0002f46f) cell_call4_button_pane_g1_ParamLimits

0x1103,	// (0x0002f46f) cell_call4_button_pane_g1

0x1129,	// (0x0002f495) cell_call4_button_pane_t1_ParamLimits

0x1129,	// (0x0002f495) cell_call4_button_pane_t1

0xd221,	// (0x0003b58d) popup_call4_audio_conf_window_ParamLimits

0xd221,	// (0x0003b58d) popup_call4_audio_conf_window

0x5884,	// (0x00033bf0) mup3_progress_pane_t1_ParamLimits

0x58a3,	// (0x00033c0f) mup3_progress_pane_t2_ParamLimits

0xcbbb,	// (0x0003af27) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0003daed) mup3_progress_pane_t_ParamLimits

0xcbd8,	// (0x0003af44) mup_progress_pane_cp03_ParamLimits

0x5de1,	// (0x0003414d) mup3_control_keys_pane_g4_copy1

0x629a,	// (0x00034606) mp4_rocker2_pane_ParamLimits

0x629a,	// (0x00034606) mp4_rocker2_pane

0xd235,	// (0x0003b5a1) mp4_rocker2_pane_g1

0xd23d,	// (0x0003b5a9) mp4_rocker2_pane_g2

0x64b2,	// (0x0003481e) mp4_rocker2_pane_g3

0x64ba,	// (0x00034826) mp4_rocker2_pane_g4

0x64c2,	// (0x0003482e) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0003dc26) mp4_rocker2_pane_g

0x1995,	// (0x0002fd01) main_camera4_pane

0x1995,	// (0x0002fd01) main_video4_pane

0x0d2c,	// (0x0002f098) main_video_tele_dialer_pane_t1_ParamLimits

0x0d2c,	// (0x0002f098) main_video_tele_dialer_pane_t1

0x0d45,	// (0x0002f0b1) main_video_tele_dialer_pane_t2_ParamLimits

0x0d45,	// (0x0002f0b1) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0003dbdc) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0003dbdc) main_video_tele_dialer_pane_t

0x1167,	// (0x0002f4d3) cam4_autofocus_pane_ParamLimits

0x1167,	// (0x0002f4d3) cam4_autofocus_pane

0x117d,	// (0x0002f4e9) cam4_image_uncrop_pane_ParamLimits

0x117d,	// (0x0002f4e9) cam4_image_uncrop_pane

0x1197,	// (0x0002f503) cam4_indicators_pane_ParamLimits

0x1197,	// (0x0002f503) cam4_indicators_pane

0x11c2,	// (0x0002f52e) main_camera4_pane_g1_ParamLimits

0x11c2,	// (0x0002f52e) main_camera4_pane_g1

0x11d4,	// (0x0002f540) main_camera4_pane_g2_ParamLimits

0x11d4,	// (0x0002f540) main_camera4_pane_g2

0x11e7,	// (0x0002f553) main_camera4_pane_g3_ParamLimits

0x11e7,	// (0x0002f553) main_camera4_pane_g3

0x11fa,	// (0x0002f566) main_camera4_pane_g4_ParamLimits

0x11fa,	// (0x0002f566) main_camera4_pane_g4

0x120d,	// (0x0002f579) main_camera4_pane_g5_ParamLimits

0x120d,	// (0x0002f579) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0003dc31) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0003dc31) main_camera4_pane_g

0x1231,	// (0x0002f59d) main_camera4_pane_t1_ParamLimits

0x1231,	// (0x0002f59d) main_camera4_pane_t1

0x64fa,	// (0x00034866) bg_tb_trans_pane_cp06

0x6510,	// (0x0003487c) cam4_indicators_pane_g1

0x6521,	// (0x0003488d) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0003dc4c) cam4_indicators_pane_g

0x653f,	// (0x000348ab) cam4_indicators_pane_t1

0x1281,	// (0x0002f5ed) main_video4_pane_g1_ParamLimits

0x1281,	// (0x0002f5ed) main_video4_pane_g1

0x1290,	// (0x0002f5fc) main_video4_pane_g2_ParamLimits

0x1290,	// (0x0002f5fc) main_video4_pane_g2

0x129f,	// (0x0002f60b) main_video4_pane_g3_ParamLimits

0x129f,	// (0x0002f60b) main_video4_pane_g3

0x12ae,	// (0x0002f61a) main_video4_pane_g4_ParamLimits

0x12ae,	// (0x0002f61a) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0003dc53) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0003dc53) main_video4_pane_g

0x12cc,	// (0x0002f638) vid4_indicators_pane_ParamLimits

0x12cc,	// (0x0002f638) vid4_indicators_pane

0x12fa,	// (0x0002f666) video4_image_uncrop_cif_pane_ParamLimits

0x12fa,	// (0x0002f666) video4_image_uncrop_cif_pane

0x1314,	// (0x0002f680) video4_image_uncrop_nhd_pane_ParamLimits

0x1314,	// (0x0002f680) video4_image_uncrop_nhd_pane

0x117d,	// (0x0002f4e9) video4_image_uncrop_vga_pane_ParamLimits

0x117d,	// (0x0002f4e9) video4_image_uncrop_vga_pane

0x197b,	// (0x0002fce7) bg_tb_trans_pane_cp07

0x656b,	// (0x000348d7) vid4_indicators_pane_g1

0x657f,	// (0x000348eb) vid4_indicators_pane_g2

0x6593,	// (0x000348ff) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0003dc5e) vid4_indicators_pane_g

0x65c2,	// (0x0003492e) vid4_indicators_pane_t1

0x65d9,	// (0x00034945) cam4_autofocus_pane_g1

0x65e1,	// (0x0003494d) cam4_autofocus_pane_g2

0x65e9,	// (0x00034955) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0003dc69) cam4_autofocus_pane_g

0x65f1,	// (0x0003495d) cam4_autofocus_pane_g3_copy1

0x6059,	// (0x000343c5) video_down_pane_cp_t1

0x6067,	// (0x000343d3) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0003dbe1) video_down_pane_cp_t

0x197b,	// (0x0002fce7) popup_vitu2_window_ParamLimits

0x197b,	// (0x0002fce7) popup_vitu2_window

0x1328,	// (0x0002f694) aid_size_cell2_itu2_ParamLimits

0x1328,	// (0x0002f694) aid_size_cell2_itu2

0x134e,	// (0x0002f6ba) aid_size_cell_itu2_ParamLimits

0x134e,	// (0x0002f6ba) aid_size_cell_itu2

0x13aa,	// (0x0002f716) bg_popup_window_pane_cp09_ParamLimits

0x13aa,	// (0x0002f716) bg_popup_window_pane_cp09

0x13b8,	// (0x0002f724) field_vitu2_entry_pane_ParamLimits

0x13b8,	// (0x0002f724) field_vitu2_entry_pane

0x13de,	// (0x0002f74a) grid_vitu2_function_pane_ParamLimits

0x13de,	// (0x0002f74a) grid_vitu2_function_pane

0x142f,	// (0x0002f79b) grid_vitu2_itu_pane_ParamLimits

0x142f,	// (0x0002f79b) grid_vitu2_itu_pane

0x14c7,	// (0x0002f833) cell_vitu2_itu_pane_ParamLimits

0x14c7,	// (0x0002f833) cell_vitu2_itu_pane

0x14f3,	// (0x0002f85f) cell_vitu2_function_pane_ParamLimits

0x14f3,	// (0x0002f85f) cell_vitu2_function_pane

0xd245,	// (0x0003b5b1) bg_popup_call_pane_cp08_ParamLimits

0xd245,	// (0x0003b5b1) bg_popup_call_pane_cp08

0xd25c,	// (0x0003b5c8) field_vitu2_entry_pane_g1

0xd268,	// (0x0003b5d4) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0003dc70) field_vitu2_entry_pane_g

0x65f9,	// (0x00034965) field_vitu2_entry_pane_t1_ParamLimits

0x65f9,	// (0x00034965) field_vitu2_entry_pane_t1

0xd282,	// (0x0003b5ee) field_vitu2_entry_pane_t2_ParamLimits

0xd282,	// (0x0003b5ee) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0003dc77) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0003dc77) field_vitu2_entry_pane_t

0x1532,	// (0x0002f89e) bg_button_pane_cp010_ParamLimits

0x1532,	// (0x0002f89e) bg_button_pane_cp010

0x6628,	// (0x00034994) cell_vitu2_itu_pane_g1

0x154e,	// (0x0002f8ba) cell_vitu2_itu_pane_t1_ParamLimits

0x154e,	// (0x0002f8ba) cell_vitu2_itu_pane_t1

0x15ac,	// (0x0002f918) cell_vitu2_itu_pane_t2_ParamLimits

0x15ac,	// (0x0002f918) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0003dc81) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0003dc81) cell_vitu2_itu_pane_t

0x197b,	// (0x0002fce7) bg_button_pane_cp011

0x1698,	// (0x0002fa04) cell_vitu2_function_pane_g1

0x1995,	// (0x0002fd01) main_myfav_hc_pane

0x102b,	// (0x0002f397) popup_image3_note_pane_ParamLimits

0x102b,	// (0x0002f397) popup_image3_note_pane

0x1047,	// (0x0002f3b3) popup_image3_tool_bar_pane_ParamLimits

0x1047,	// (0x0002f3b3) popup_image3_tool_bar_pane

0x163a,	// (0x0002f9a6) cell_vitu2_itu_pane_t3_ParamLimits

0x163a,	// (0x0002f9a6) cell_vitu2_itu_pane_t3

0x9c9f,	// (0x0003800b) bg_popup_trans_pane

0xd2a7,	// (0x0003b613) grid_image3_tool_bar_pane

0xd2b1,	// (0x0003b61d) bg_popup_trans_pane_g1

0xa803,	// (0x00038b6f) bg_popup_trans_pane_g2

0xd2b9,	// (0x0003b625) bg_popup_trans_pane_g3

0xd2c1,	// (0x0003b62d) bg_popup_trans_pane_g4

0xd2c9,	// (0x0003b635) bg_popup_trans_pane_g5

0xd2d1,	// (0x0003b63d) bg_popup_trans_pane_g6

0xd2d9,	// (0x0003b645) bg_popup_trans_pane_g7

0xd2e1,	// (0x0003b64d) bg_popup_trans_pane_g8

0xa7e3,	// (0x00038b4f) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0003dc88) bg_popup_trans_pane_g

0xd2e9,	// (0x0003b655) cell_image3_tool_bar_pane_ParamLimits

0xd2e9,	// (0x0003b655) cell_image3_tool_bar_pane

0xc8b1,	// (0x0003ac1d) cell_image3_tool_bar_pane_g1

0x9c9f,	// (0x0003800b) bg_popup_trans_pane_cp1

0xd2fd,	// (0x0003b669) popup_image3_note_pane_t1

0xd30b,	// (0x0003b677) popup_image3_note_pane_t2

0xd319,	// (0x0003b685) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0003dc9b) popup_image3_note_pane_t

0xd327,	// (0x0003b693) popup_image3_note_pane_t3_copy1

0x663a,	// (0x000349a6) bg_myfav_hc_instruction_pane_ParamLimits

0x663a,	// (0x000349a6) bg_myfav_hc_instruction_pane

0x664e,	// (0x000349ba) cell_myfav_contact_pane_ParamLimits

0x664e,	// (0x000349ba) cell_myfav_contact_pane

0x666c,	// (0x000349d8) cell_myfav_contact_pane_cp1_ParamLimits

0x666c,	// (0x000349d8) cell_myfav_contact_pane_cp1

0x6684,	// (0x000349f0) cell_myfav_contact_pane_cp2_ParamLimits

0x6684,	// (0x000349f0) cell_myfav_contact_pane_cp2

0x669c,	// (0x00034a08) cell_myfav_contact_pane_cp3_ParamLimits

0x669c,	// (0x00034a08) cell_myfav_contact_pane_cp3

0x66b3,	// (0x00034a1f) cell_myfav_contact_pane_cp4_ParamLimits

0x66b3,	// (0x00034a1f) cell_myfav_contact_pane_cp4

0x66cb,	// (0x00034a37) cell_myfav_contact_pane_cp5_ParamLimits

0x66cb,	// (0x00034a37) cell_myfav_contact_pane_cp5

0x66df,	// (0x00034a4b) cell_myfav_contact_pane_cp6_ParamLimits

0x66df,	// (0x00034a4b) cell_myfav_contact_pane_cp6

0x66f5,	// (0x00034a61) cell_myfav_contact_pane_cp7_ParamLimits

0x66f5,	// (0x00034a61) cell_myfav_contact_pane_cp7

0xd335,	// (0x0003b6a1) listscroll_gen_pane_cp05

0x670f,	// (0x00034a7b) main_myfav_hc_pane_g1_ParamLimits

0x670f,	// (0x00034a7b) main_myfav_hc_pane_g1

0x6729,	// (0x00034a95) main_myfav_hc_pane_g2_ParamLimits

0x6729,	// (0x00034a95) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0003dca2) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0003dca2) main_myfav_hc_pane_g

0x675b,	// (0x00034ac7) main_myfav_hc_pane_t1_ParamLimits

0x675b,	// (0x00034ac7) main_myfav_hc_pane_t1

0xd33e,	// (0x0003b6aa) main_myfav_hc_pane_t2_ParamLimits

0xd33e,	// (0x0003b6aa) main_myfav_hc_pane_t2

0xd350,	// (0x0003b6bc) main_myfav_hc_pane_t3_ParamLimits

0xd350,	// (0x0003b6bc) main_myfav_hc_pane_t3

0x6772,	// (0x00034ade) main_myfav_hc_pane_t4_ParamLimits

0x6772,	// (0x00034ade) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0003dca9) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0003dca9) main_myfav_hc_pane_t

0xc8b1,	// (0x0003ac1d) bg_myfav_hc_instruction_pane_g1

0xd362,	// (0x0003b6ce) cell_myfav_contact_pane_g1_ParamLimits

0xd362,	// (0x0003b6ce) cell_myfav_contact_pane_g1

0xd362,	// (0x0003b6ce) cell_myfav_contact_pane_g2_ParamLimits

0xd362,	// (0x0003b6ce) cell_myfav_contact_pane_g2

0xd36e,	// (0x0003b6da) cell_myfav_contact_pane_g3_ParamLimits

0xd36e,	// (0x0003b6da) cell_myfav_contact_pane_g3

0xcba5,	// (0x0003af11) cell_myfav_contact_pane_g4_ParamLimits

0xcba5,	// (0x0003af11) cell_myfav_contact_pane_g4

0xd37b,	// (0x0003b6e7) cell_myfav_contact_pane_g5_ParamLimits

0xd37b,	// (0x0003b6e7) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0003dcb4) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0003dcb4) cell_myfav_contact_pane_g

0x6743,	// (0x00034aaf) main_myfav_hc_pane_g3_ParamLimits

0x6743,	// (0x00034aaf) main_myfav_hc_pane_g3

0x012e,	// (0x0002e49a) popup_adpt_find_window

0x679a,	// (0x00034b06) afind_page_pane_ParamLimits

0x679a,	// (0x00034b06) afind_page_pane

0x67af,	// (0x00034b1b) aid_size_cell_afind_ParamLimits

0x67af,	// (0x00034b1b) aid_size_cell_afind

0x67cd,	// (0x00034b39) bg_popup_sub_pane_cp09_ParamLimits

0x67cd,	// (0x00034b39) bg_popup_sub_pane_cp09

0x67da,	// (0x00034b46) find_pane_cp01_ParamLimits

0x67da,	// (0x00034b46) find_pane_cp01

0xd387,	// (0x0003b6f3) grid_afind_control_pane_ParamLimits

0xd387,	// (0x0003b6f3) grid_afind_control_pane

0x67e7,	// (0x00034b53) grid_afind_pane_ParamLimits

0x67e7,	// (0x00034b53) grid_afind_pane

0x6809,	// (0x00034b75) cell_afind_pane_ParamLimits

0x6809,	// (0x00034b75) cell_afind_pane

0xc8b1,	// (0x0003ac1d) afind_page_pane_g1

0x6870,	// (0x00034bdc) afind_page_pane_g2

0x6879,	// (0x00034be5) afind_page_pane_g3

0x0002,

0xf953,	// (0x0003dcbf) afind_page_pane_g

0x6882,	// (0x00034bee) afind_page_pane_t1

0xd39b,	// (0x0003b707) cell_afind_grid_control_pane_ParamLimits

0xd39b,	// (0x0003b707) cell_afind_grid_control_pane

0xd20d,	// (0x0003b579) bg_button_pane_cp69_ParamLimits

0xd20d,	// (0x0003b579) bg_button_pane_cp69

0x68a2,	// (0x00034c0e) cell_afind_pane_g1_ParamLimits

0x68a2,	// (0x00034c0e) cell_afind_pane_g1

0x68af,	// (0x00034c1b) cell_afind_pane_t1_ParamLimits

0x68af,	// (0x00034c1b) cell_afind_pane_t1

0xa5fc,	// (0x00038968) bg_button_pane_cp72

0xd3aa,	// (0x0003b716) cell_afind_grid_control_pane_g1

0x4437,	// (0x000327a3) aid_image_placing_area_ParamLimits

0x4437,	// (0x000327a3) aid_image_placing_area

0xcece,	// (0x0003b23a) field_vitu_entry_pane_g1_ParamLimits

0xcece,	// (0x0003b23a) field_vitu_entry_pane_g1

0xceda,	// (0x0003b246) field_vitu_entry_pane_g2_ParamLimits

0xceda,	// (0x0003b246) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0003db6c) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0003db6c) field_vitu_entry_pane_g

0x5ea8,	// (0x00034214) cell_vitu_itu_pane_g1_ParamLimits

0x5eea,	// (0x00034256) cell_vitu_itu_pane_t3_ParamLimits

0x5eea,	// (0x00034256) cell_vitu_itu_pane_t3

0xd1b6,	// (0x0003b522) mp4_progress_pane_t1_ParamLimits

0xd1cf,	// (0x0003b53b) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0003dc05) mp4_progress_pane_t_ParamLimits

0xd1e8,	// (0x0003b554) mup_progress_pane_cp04_ParamLimits

0x6786,	// (0x00034af2) main_myfav_hc_pane_t5_ParamLimits

0x6786,	// (0x00034af2) main_myfav_hc_pane_t5

0x18f8,	// (0x0002fc64) aid_zoom_text_primary

0x012e,	// (0x0002e49a) popup_adpt_find_window_ParamLimits

0x197b,	// (0x0002fce7) main_cam_set_pane

0x11ae,	// (0x0002f51a) cam4_zoom_pane_ParamLimits

0x11ae,	// (0x0002f51a) cam4_zoom_pane

0x68c1,	// (0x00034c2d) main_cam_set_pane_g1_ParamLimits

0x68c1,	// (0x00034c2d) main_cam_set_pane_g1

0x68cf,	// (0x00034c3b) main_cam_set_pane_g2_ParamLimits

0x68cf,	// (0x00034c3b) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0003dcc6) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0003dcc6) main_cam_set_pane_g

0x68f0,	// (0x00034c5c) main_cam_set_pane_t1_ParamLimits

0x68f0,	// (0x00034c5c) main_cam_set_pane_t1

0x690b,	// (0x00034c77) main_cset_listscroll_pane_ParamLimits

0x690b,	// (0x00034c77) main_cset_listscroll_pane

0x692b,	// (0x00034c97) main_cset_slider_pane_ParamLimits

0x692b,	// (0x00034c97) main_cset_slider_pane

0xd3bb,	// (0x0003b727) main_cset_list_pane_ParamLimits

0xd3bb,	// (0x0003b727) main_cset_list_pane

0xd3cb,	// (0x0003b737) scroll_pane_cp028

0x6951,	// (0x00034cbd) aid_area_touch_slider

0x696d,	// (0x00034cd9) cset_slider_pane

0x6997,	// (0x00034d03) main_cset_slider_pane_g1

0x69ac,	// (0x00034d18) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0003dccb) main_cset_slider_pane_g

0xd404,	// (0x0003b770) main_cset_slider_pane_t1

0x6a68,	// (0x00034dd4) main_cset_slider_pane_t2

0x6a82,	// (0x00034dee) main_cset_slider_pane_t3

0x6a9c,	// (0x00034e08) main_cset_slider_pane_t4

0x6ab6,	// (0x00034e22) main_cset_slider_pane_t5

0x6ad0,	// (0x00034e3c) main_cset_slider_pane_t6

0x6ae5,	// (0x00034e51) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0003dcf0) main_cset_slider_pane_t

0x6be9,	// (0x00034f55) cset_list_set_pane_ParamLimits

0x6be9,	// (0x00034f55) cset_list_set_pane

0x6bfb,	// (0x00034f67) aid_position_infowindow_above

0x6c03,	// (0x00034f6f) aid_position_infowindow_below

0xd4a4,	// (0x0003b810) cset_list_set_pane_g1_ParamLimits

0xd4a4,	// (0x0003b810) cset_list_set_pane_g1

0xd4b0,	// (0x0003b81c) cset_list_set_pane_g3_ParamLimits

0xd4b0,	// (0x0003b81c) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0003dd0f) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0003dd0f) cset_list_set_pane_g

0xd4bf,	// (0x0003b82b) cset_list_set_pane_t1_ParamLimits

0xd4bf,	// (0x0003b82b) cset_list_set_pane_t1

0xab27,	// (0x00038e93) list_highlight_pane_cp021_ParamLimits

0xab27,	// (0x00038e93) list_highlight_pane_cp021

0xb15a,	// (0x000394c6) cset_slider_pane_g1

0xb16c,	// (0x000394d8) cset_slider_pane_g2

0xb163,	// (0x000394cf) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0003dd14) cset_slider_pane_g

0x6c0b,	// (0x00034f77) aid_area_touch_cam4_zoom

0x6c13,	// (0x00034f7f) cam4_zoom_cont_pane

0x6c1b,	// (0x00034f87) cam4_zoom_pane_g1

0x6c23,	// (0x00034f8f) cam4_zoom_pane_g2

0x16ac,	// (0x0002fa18) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0003dd1b) cam4_zoom_pane_g

0x6c2b,	// (0x00034f97) cam4_zoom_cont_pane_g1

0x6c34,	// (0x00034fa0) cam4_zoom_cont_pane_g2

0x6c3d,	// (0x00034fa9) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0003dd22) cam4_zoom_cont_pane_g

0x1081,	// (0x0002f3ed) call4_image_pane_ParamLimits

0x1081,	// (0x0002f3ed) call4_image_pane

0x63e8,	// (0x00034754) call4_windows_conf_pane_ParamLimits

0x642d,	// (0x00034799) popup_call4_audio_in_window_ParamLimits

0x642d,	// (0x00034799) popup_call4_audio_in_window

0x9c9f,	// (0x0003800b) bg_popup_call2_act_pane_cp02

0xd219,	// (0x0003b585) call4_list_conf_pane

0xc8b1,	// (0x0003ac1d) call4_image_pane_g1

0xc8b1,	// (0x0003ac1d) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0003da2d) call4_image_pane_g

0xd4d4,	// (0x0003b840) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4d4,	// (0x0003b840) list_single_graphic_popup_conf4_pane

0x9c9f,	// (0x0003800b) list_highlight_pane_cp022

0xd4e7,	// (0x0003b853) list_single_graphic_popup_conf4_pane_g1

0xad2b,	// (0x00039097) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0003dd29) list_single_graphic_popup_conf4_pane_g

0xd4ef,	// (0x0003b85b) list_single_graphic_popup_conf4_pane_t1

0x2821,	// (0x00030b8d) popup_vtel_slider_window_ParamLimits

0x2821,	// (0x00030b8d) popup_vtel_slider_window

0xd1fb,	// (0x0003b567) dialer2_ne_pane_t2_ParamLimits

0xd1fb,	// (0x0003b567) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0003dc0a) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0003dc0a) dialer2_ne_pane_t

0xc68a,	// (0x0003a9f6) bg_popup_sub_pane_cp010_ParamLimits

0xc68a,	// (0x0003a9f6) bg_popup_sub_pane_cp010

0x6c46,	// (0x00034fb2) popup_vtel_slider_window_g1_ParamLimits

0x6c46,	// (0x00034fb2) popup_vtel_slider_window_g1

0x6c59,	// (0x00034fc5) popup_vtel_slider_window_g2_ParamLimits

0x6c59,	// (0x00034fc5) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0003dd2e) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0003dd2e) popup_vtel_slider_window_g

0x6caf,	// (0x0003501b) vtel_slider_pane_ParamLimits

0x6caf,	// (0x0003501b) vtel_slider_pane

0x6cd1,	// (0x0003503d) vtel_slider_pane_g1_ParamLimits

0x6cd1,	// (0x0003503d) vtel_slider_pane_g1

0x6ce5,	// (0x00035051) vtel_slider_pane_g2_ParamLimits

0x6ce5,	// (0x00035051) vtel_slider_pane_g2

0x6cfd,	// (0x00035069) vtel_slider_pane_g3_ParamLimits

0x6cfd,	// (0x00035069) vtel_slider_pane_g3

0x6cd1,	// (0x0003503d) vtel_slider_pane_g4_ParamLimits

0x6cd1,	// (0x0003503d) vtel_slider_pane_g4

0x6d13,	// (0x0003507f) vtel_slider_pane_g5_ParamLimits

0x6d13,	// (0x0003507f) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0003dd37) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0003dd37) vtel_slider_pane_g

0x197b,	// (0x0002fce7) main_gallery2_pane

0x137a,	// (0x0002f6e6) aid_size_row_itut2_dropdow_list_ParamLimits

0x137a,	// (0x0002f6e6) aid_size_row_itut2_dropdow_list

0x1406,	// (0x0002f772) grid_vitu2_function_top_pane_ParamLimits

0x1406,	// (0x0002f772) grid_vitu2_function_top_pane

0x1470,	// (0x0002f7dc) popup_vitu2_dropdown_list_window_ParamLimits

0x1470,	// (0x0002f7dc) popup_vitu2_dropdown_list_window

0x1499,	// (0x0002f805) popup_vitu2_match_list_window

0x16b4,	// (0x0002fa20) cell_vitu2_function_top_pane_ParamLimits

0x16b4,	// (0x0002fa20) cell_vitu2_function_top_pane

0x16cc,	// (0x0002fa38) cell_vitu2_function_top_pane_cp01_ParamLimits

0x16cc,	// (0x0002fa38) cell_vitu2_function_top_pane_cp01

0x16e8,	// (0x0002fa54) cell_vitu2_function_top_wide_pane_ParamLimits

0x16e8,	// (0x0002fa54) cell_vitu2_function_top_wide_pane

0x197b,	// (0x0002fce7) bg_button_pane_cp012

0x1704,	// (0x0002fa70) cell_vitu2_function_top_pane_g1

0x6d37,	// (0x000350a3) bg_button_pane_cp013_ParamLimits

0x6d37,	// (0x000350a3) bg_button_pane_cp013

0x6d53,	// (0x000350bf) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6d53,	// (0x000350bf) cell_vitu2_function_top_wide_pane_g1

0x197b,	// (0x0002fce7) bg_popup_sub_pane_cp20

0x1718,	// (0x0002fa84) list_vitu2_match_list_pane

0xd2b1,	// (0x0003b61d) bg_popup_sub_pane_cp20_g1

0xd2b9,	// (0x0003b625) bg_popup_sub_pane_cp20_g2

0xa803,	// (0x00038b6f) bg_popup_sub_pane_cp20_g3

0xd2c1,	// (0x0003b62d) bg_popup_sub_pane_cp20_g4

0xa7e3,	// (0x00038b4f) bg_popup_sub_pane_cp20_g5

0xd505,	// (0x0003b871) bg_popup_sub_pane_cp20_g6

0xd2d1,	// (0x0003b63d) bg_popup_sub_pane_cp20_g7

0xd2d9,	// (0x0003b645) bg_popup_sub_pane_cp20_g8

0xd2e1,	// (0x0003b64d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0003dd42) bg_popup_sub_pane_cp20_g

0x6d6b,	// (0x000350d7) list_vitu2_match_list_item_pane_ParamLimits

0x6d6b,	// (0x000350d7) list_vitu2_match_list_item_pane

0x6d7d,	// (0x000350e9) list_vitu2_match_list_item_pane_t1

0x1995,	// (0x0002fd01) bg_popup_sub_pane_cp21

0x6ddb,	// (0x00035147) grid_vitu2_dropdown_list_pane

0x1736,	// (0x0002faa2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1736,	// (0x0002faa2) cell_vitu2_dropdown_list_char_pane

0x1757,	// (0x0002fac3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1757,	// (0x0002fac3) cell_vitu2_dropdown_list_ctrl_pane

0xd50d,	// (0x0003b879) cell_vitu2_dropdown_list_char_pane_g1

0xd516,	// (0x0003b882) cell_vitu2_dropdown_list_char_pane_g2

0xd51f,	// (0x0003b88b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0003dd5f) cell_vitu2_dropdown_list_char_pane_g

0x1783,	// (0x0002faef) cell_vitu2_dropdown_list_char_pane_t1

0x6de3,	// (0x0003514f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6de3,	// (0x0003514f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6df0,	// (0x0003515c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6df0,	// (0x0003515c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6dfd,	// (0x00035169) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6dfd,	// (0x00035169) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1791,	// (0x0002fafd) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1791,	// (0x0002fafd) cell_vitu2_dropdown_list_ctrl_pane_g4

0x64fa,	// (0x00034866) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x64fa,	// (0x00034866) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0003dd66) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0003dd66) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e0a,	// (0x00035176) aid_size_cell_gallery2_ParamLimits

0x6e0a,	// (0x00035176) aid_size_cell_gallery2

0x6e28,	// (0x00035194) grid_gallery2_pane_ParamLimits

0x6e28,	// (0x00035194) grid_gallery2_pane

0x6e42,	// (0x000351ae) scroll_pane_cp029_ParamLimits

0x6e42,	// (0x000351ae) scroll_pane_cp029

0x6e53,	// (0x000351bf) cell_gallery2_pane_ParamLimits

0x6e53,	// (0x000351bf) cell_gallery2_pane

0xd528,	// (0x0003b894) cell_gallery2_pane_g2

0x6eb2,	// (0x0003521e) cell_gallery2_pane_g3

0xd530,	// (0x0003b89c) cell_gallery2_pane_g4

0xd538,	// (0x0003b8a4) cell_gallery2_pane_g5

0xa5aa,	// (0x00038916) grid_highlight_pane_cp10

0x1499,	// (0x0002f805) popup_vitu2_match_list_window_ParamLimits

0x14b0,	// (0x0002f81c) popup_vitu2_query_window_ParamLimits

0x14b0,	// (0x0002f81c) popup_vitu2_query_window

0x1995,	// (0x0002fd01) bg_vitu2_candi_button_pane

0xd50d,	// (0x0003b879) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd516,	// (0x0003b882) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd51f,	// (0x0003b88b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6eba,	// (0x00035226) bg_button_pane_cp015

0x6ecc,	// (0x00035238) bg_button_pane_cp016

0x6edf,	// (0x0003524b) bg_button_pane_cp017

0xc49d,	// (0x0003a809) bg_popup_sub_pane_cp22

0xd540,	// (0x0003b8ac) popup_vitu2_query_window_g1

0x6f24,	// (0x00035290) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0003dd71) popup_vitu2_query_window_g

0x6f43,	// (0x000352af) popup_vitu2_query_window_t1_ParamLimits

0x6f43,	// (0x000352af) popup_vitu2_query_window_t1

0x6f78,	// (0x000352e4) popup_vitu2_query_window_t2_ParamLimits

0x6f78,	// (0x000352e4) popup_vitu2_query_window_t2

0x6f8a,	// (0x000352f6) popup_vitu2_query_window_t3_ParamLimits

0x6f8a,	// (0x000352f6) popup_vitu2_query_window_t3

0x6fb2,	// (0x0003531e) popup_vitu2_query_window_t4_ParamLimits

0x6fb2,	// (0x0003531e) popup_vitu2_query_window_t4

0x6fd3,	// (0x0003533f) popup_vitu2_query_window_t5_ParamLimits

0x6fd3,	// (0x0003533f) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0003dd78) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0003dd78) popup_vitu2_query_window_t

0xd3b3,	// (0x0003b71f) main_cset_text_pane

0x6951,	// (0x00034cbd) aid_area_touch_slider_ParamLimits

0x696d,	// (0x00034cd9) cset_slider_pane_ParamLimits

0x6997,	// (0x00034d03) main_cset_slider_pane_g1_ParamLimits

0x69ac,	// (0x00034d18) main_cset_slider_pane_g2_ParamLimits

0xd3d4,	// (0x0003b740) main_cset_slider_pane_g3_ParamLimits

0xd3d4,	// (0x0003b740) main_cset_slider_pane_g3

0x69c1,	// (0x00034d2d) main_cset_slider_pane_g4_ParamLimits

0x69c1,	// (0x00034d2d) main_cset_slider_pane_g4

0x69d0,	// (0x00034d3c) main_cset_slider_pane_g5_ParamLimits

0x69d0,	// (0x00034d3c) main_cset_slider_pane_g5

0x69dc,	// (0x00034d48) main_cset_slider_pane_g6_ParamLimits

0x69dc,	// (0x00034d48) main_cset_slider_pane_g6

0xf95f,	// (0x0003dccb) main_cset_slider_pane_g_ParamLimits

0xd404,	// (0x0003b770) main_cset_slider_pane_t1_ParamLimits

0x6a68,	// (0x00034dd4) main_cset_slider_pane_t2_ParamLimits

0x6a82,	// (0x00034dee) main_cset_slider_pane_t3_ParamLimits

0x6a9c,	// (0x00034e08) main_cset_slider_pane_t4_ParamLimits

0x6ab6,	// (0x00034e22) main_cset_slider_pane_t5_ParamLimits

0x6ad0,	// (0x00034e3c) main_cset_slider_pane_t6_ParamLimits

0x6ae5,	// (0x00034e51) main_cset_slider_pane_t7_ParamLimits

0x6b0f,	// (0x00034e7b) main_cset_slider_pane_t8_ParamLimits

0x6b0f,	// (0x00034e7b) main_cset_slider_pane_t8

0x6b37,	// (0x00034ea3) main_cset_slider_pane_t9_ParamLimits

0x6b37,	// (0x00034ea3) main_cset_slider_pane_t9

0x6b5f,	// (0x00034ecb) main_cset_slider_pane_t10_ParamLimits

0x6b5f,	// (0x00034ecb) main_cset_slider_pane_t10

0x6b87,	// (0x00034ef3) main_cset_slider_pane_t11_ParamLimits

0x6b87,	// (0x00034ef3) main_cset_slider_pane_t11

0x6baf,	// (0x00034f1b) main_cset_slider_pane_t12_ParamLimits

0x6baf,	// (0x00034f1b) main_cset_slider_pane_t12

0x6bcc,	// (0x00034f38) main_cset_slider_pane_t13_ParamLimits

0x6bcc,	// (0x00034f38) main_cset_slider_pane_t13

0xf984,	// (0x0003dcf0) main_cset_slider_pane_t_ParamLimits

0x9c9f,	// (0x0003800b) bg_popup_sub_pane_cp011

0xd54c,	// (0x0003b8b8) main_cset_text_pane_g1

0xd554,	// (0x0003b8c0) main_cset_text_pane_t1

0xd562,	// (0x0003b8ce) main_cset_text_pane_t2

0xd570,	// (0x0003b8dc) main_cset_text_pane_t3

0xd57e,	// (0x0003b8ea) main_cset_text_pane_t4

0xd58c,	// (0x0003b8f8) main_cset_text_pane_t5

0xd59a,	// (0x0003b906) main_cset_text_pane_t6

0xd5a8,	// (0x0003b914) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0003dd87) main_cset_text_pane_t

0x1995,	// (0x0002fd01) main_cam4_burst_pane

0x1995,	// (0x0002fd01) main_cam5_pane

0x6890,	// (0x00034bfc) bg_button_pane_cp019

0x6899,	// (0x00034c05) bg_button_pane_cp020

0xd3e0,	// (0x0003b74c) main_cset_slider_pane_g7_ParamLimits

0xd3e0,	// (0x0003b74c) main_cset_slider_pane_g7

0xd3ec,	// (0x0003b758) main_cset_slider_pane_g8_ParamLimits

0xd3ec,	// (0x0003b758) main_cset_slider_pane_g8

0x69f0,	// (0x00034d5c) main_cset_slider_pane_g9_ParamLimits

0x69f0,	// (0x00034d5c) main_cset_slider_pane_g9

0x69fc,	// (0x00034d68) main_cset_slider_pane_g10_ParamLimits

0x69fc,	// (0x00034d68) main_cset_slider_pane_g10

0x6a08,	// (0x00034d74) main_cset_slider_pane_g11_ParamLimits

0x6a08,	// (0x00034d74) main_cset_slider_pane_g11

0x6a14,	// (0x00034d80) main_cset_slider_pane_g12_ParamLimits

0x6a14,	// (0x00034d80) main_cset_slider_pane_g12

0x6a20,	// (0x00034d8c) main_cset_slider_pane_g13_ParamLimits

0x6a20,	// (0x00034d8c) main_cset_slider_pane_g13

0x6a2c,	// (0x00034d98) main_cset_slider_pane_g14_ParamLimits

0x6a2c,	// (0x00034d98) main_cset_slider_pane_g14

0x6a38,	// (0x00034da4) main_cset_slider_pane_g15_ParamLimits

0x6a38,	// (0x00034da4) main_cset_slider_pane_g15

0xd432,	// (0x0003b79e) main_cset_slider_pane_t14_ParamLimits

0xd432,	// (0x0003b79e) main_cset_slider_pane_t14

0xd46b,	// (0x0003b7d7) main_cset_slider_pane_t15_ParamLimits

0xd46b,	// (0x0003b7d7) main_cset_slider_pane_t15

0x704a,	// (0x000353b6) aid_cam4_burst_size_cell_ParamLimits

0x704a,	// (0x000353b6) aid_cam4_burst_size_cell

0x706a,	// (0x000353d6) grid_cam4_burst_pane_ParamLimits

0x706a,	// (0x000353d6) grid_cam4_burst_pane

0x70a2,	// (0x0003540e) linegrid_cam4_burst_pane_ParamLimits

0x70a2,	// (0x0003540e) linegrid_cam4_burst_pane

0xd5b6,	// (0x0003b922) scroll_pane_cp30_ParamLimits

0xd5b6,	// (0x0003b922) scroll_pane_cp30

0x70c6,	// (0x00035432) cell_cam4_burst_pane_ParamLimits

0x70c6,	// (0x00035432) cell_cam4_burst_pane

0xd5c2,	// (0x0003b92e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5c2,	// (0x0003b92e) linegrid_cam4_burst_pane_g1

0x7113,	// (0x0003547f) linegrid_cam4_burst_pane_g2_ParamLimits

0x7113,	// (0x0003547f) linegrid_cam4_burst_pane_g2

0xd5cf,	// (0x0003b93b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5cf,	// (0x0003b93b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0003dd96) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0003dd96) linegrid_cam4_burst_pane_g

0x7124,	// (0x00035490) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7124,	// (0x00035490) linegrid_cam4_burst_pane_g3_copy1

0xd5dc,	// (0x0003b948) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5dc,	// (0x0003b948) linegrid_cam4_burst_pane_g4

0x713e,	// (0x000354aa) linegrid_cam4_burst_pane_g5_ParamLimits

0x713e,	// (0x000354aa) linegrid_cam4_burst_pane_g5

0x714f,	// (0x000354bb) linegrid_cam4_burst_pane_g6_ParamLimits

0x714f,	// (0x000354bb) linegrid_cam4_burst_pane_g6

0xd5e9,	// (0x0003b955) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5e9,	// (0x0003b955) linegrid_cam4_burst_pane_g7

0x7166,	// (0x000354d2) cell_cam4_burst_pane_g1

0xd602,	// (0x0003b96e) main_cam5_pane_t1_ParamLimits

0xd602,	// (0x0003b96e) main_cam5_pane_t1

0xd614,	// (0x0003b980) main_cam5_pane_t2_ParamLimits

0xd614,	// (0x0003b980) main_cam5_pane_t2

0xd626,	// (0x0003b992) main_cam5_pane_t3_ParamLimits

0xd626,	// (0x0003b992) main_cam5_pane_t3

0xd638,	// (0x0003b9a4) main_cam5_pane_t4_ParamLimits

0xd638,	// (0x0003b9a4) main_cam5_pane_t4

0xd650,	// (0x0003b9bc) main_cam5_pane_t5_ParamLimits

0xd650,	// (0x0003b9bc) main_cam5_pane_t5

0xd664,	// (0x0003b9d0) main_cam5_pane_t6_ParamLimits

0xd664,	// (0x0003b9d0) main_cam5_pane_t6

0xd678,	// (0x0003b9e4) main_cam5_pane_t7_ParamLimits

0xd678,	// (0x0003b9e4) main_cam5_pane_t7

0xd68a,	// (0x0003b9f6) main_cam5_pane_t8_ParamLimits

0xd68a,	// (0x0003b9f6) main_cam5_pane_t8

0xd6a6,	// (0x0003ba12) main_cam5_pane_t9_ParamLimits

0xd6a6,	// (0x0003ba12) main_cam5_pane_t9

0xd6b8,	// (0x0003ba24) main_cam5_pane_t10_ParamLimits

0xd6b8,	// (0x0003ba24) main_cam5_pane_t10

0xd6ca,	// (0x0003ba36) main_cam5_pane_t11_ParamLimits

0xd6ca,	// (0x0003ba36) main_cam5_pane_t11

0xd725,	// (0x0003ba91) main_cam5_pane_t12_ParamLimits

0xd725,	// (0x0003ba91) main_cam5_pane_t12

0xd73a,	// (0x0003baa6) main_cam5_pane_t13_ParamLimits

0xd73a,	// (0x0003baa6) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0003dda2) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0003dda2) main_cam5_pane_t

0x01b0,	// (0x0002e51c) popup_scut_keymap_window_ParamLimits

0x01b0,	// (0x0002e51c) popup_scut_keymap_window

0x7179,	// (0x000354e5) aid_size_cell_brow_shortcut

0xa5aa,	// (0x00038916) bg_popup_window_pane_cp010

0x7185,	// (0x000354f1) grid_scut_pane

0x7191,	// (0x000354fd) cell_scut_pane_ParamLimits

0x7191,	// (0x000354fd) cell_scut_pane

0x71a8,	// (0x00035514) cell_scut_pane_g1

0xd757,	// (0x0003bac3) cell_scut_pane_t1

0xd766,	// (0x0003bad2) cell_scut_pane_t2

0x71b1,	// (0x0003551d) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0003ddbd) cell_scut_pane_t

0x543d,	// (0x000337a9) main_mup3_pane_g8_ParamLimits

0x543d,	// (0x000337a9) main_mup3_pane_g8

0x1392,	// (0x0002f6fe) area_vitu2_query_pane_ParamLimits

0x1392,	// (0x0002f6fe) area_vitu2_query_pane

0x6ef2,	// (0x0003525e) input_focus_pane_cp08

0xd775,	// (0x0003bae1) area_vitu2_query_pane_g1

0x71bf,	// (0x0003552b) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0003ddc4) area_vitu2_query_pane_g

0x71d0,	// (0x0003553c) area_vitu2_query_pane_t1_ParamLimits

0x71d0,	// (0x0003553c) area_vitu2_query_pane_t1

0x71e4,	// (0x00035550) area_vitu2_query_pane_t2_ParamLimits

0x71e4,	// (0x00035550) area_vitu2_query_pane_t2

0x71f8,	// (0x00035564) area_vitu2_query_pane_t3_ParamLimits

0x71f8,	// (0x00035564) area_vitu2_query_pane_t3

0xd781,	// (0x0003baed) area_vitu2_query_pane_t4_ParamLimits

0xd781,	// (0x0003baed) area_vitu2_query_pane_t4

0xd7a9,	// (0x0003bb15) area_vitu2_query_pane_t5_ParamLimits

0xd7a9,	// (0x0003bb15) area_vitu2_query_pane_t5

0xd7d1,	// (0x0003bb3d) area_vitu2_query_pane_t6_ParamLimits

0xd7d1,	// (0x0003bb3d) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0003ddc9) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0003ddc9) area_vitu2_query_pane_t

0x7220,	// (0x0003558c) bg_button_pane_cp018

0x722e,	// (0x0003559a) bg_button_pane_cp021

0x723a,	// (0x000355a6) bg_button_pane_cp022

0x7249,	// (0x000355b5) input_focus_pane_cp09

0xae67,	// (0x000391d3) aid_size_touch_mv_arrow_left

0xae90,	// (0x000391fc) aid_size_touch_mv_arrow_right

0x6a50,	// (0x00034dbc) main_cset_slider_pane_g16_ParamLimits

0x6a50,	// (0x00034dbc) main_cset_slider_pane_g16

0x6a5c,	// (0x00034dc8) main_cset_slider_pane_g17_ParamLimits

0x6a5c,	// (0x00034dc8) main_cset_slider_pane_g17

0x7166,	// (0x000354d2) cell_cam4_burst_pane_g1_ParamLimits

0x9c9f,	// (0x0003800b) compa_mode_pane

0x6c69,	// (0x00034fd5) popup_vtel_slider_window_g3_ParamLimits

0x6c69,	// (0x00034fd5) popup_vtel_slider_window_g3

0x6c80,	// (0x00034fec) popup_vtel_slider_window_g4_ParamLimits

0x6c80,	// (0x00034fec) popup_vtel_slider_window_g4

0x6c97,	// (0x00035003) popup_vtel_slider_window_t1_ParamLimits

0x6c97,	// (0x00035003) popup_vtel_slider_window_t1

0x1995,	// (0x0002fd01) main_cl_pane

0x4973,	// (0x00032cdf) popup_imed_adjust2_window_ParamLimits

0xc49d,	// (0x0003a809) bg_tb_trans_pane_cp05_ParamLimits

0xce03,	// (0x0003b16f) popup_imed_adjust2_window_g1_ParamLimits

0xce12,	// (0x0003b17e) popup_imed_adjust2_window_g2_ParamLimits

0xce12,	// (0x0003b17e) popup_imed_adjust2_window_g2

0xce1e,	// (0x0003b18a) popup_imed_adjust2_window_g3_ParamLimits

0xce1e,	// (0x0003b18a) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0003db30) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0003db30) popup_imed_adjust2_window_g

0xce2a,	// (0x0003b196) popup_imed_adjust2_window_t1_ParamLimits

0xce42,	// (0x0003b1ae) slider_imed_adjust_pane_ParamLimits

0xce56,	// (0x0003b1c2) slider_imed_adjust_pane_g1_ParamLimits

0xce66,	// (0x0003b1d2) slider_imed_adjust_pane_g2_ParamLimits

0xce76,	// (0x0003b1e2) slider_imed_adjust_pane_g3_ParamLimits

0xce87,	// (0x0003b1f3) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0003db37) slider_imed_adjust_pane_g_ParamLimits

0x114f,	// (0x0002f4bb) aid_touch_area_cam4_ParamLimits

0x114f,	// (0x0002f4bb) aid_touch_area_cam4

0x64ca,	// (0x00034836) battery_pane_cp01

0x121e,	// (0x0002f58a) main_camera4_pane_g6_ParamLimits

0x121e,	// (0x0002f58a) main_camera4_pane_g6

0x1248,	// (0x0002f5b4) main_camera4_pane_t2_ParamLimits

0x1248,	// (0x0002f5b4) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0003dc3e) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0003dc3e) main_camera4_pane_t

0x1269,	// (0x0002f5d5) aid_touch_area_vid4_ParamLimits

0x1269,	// (0x0002f5d5) aid_touch_area_vid4

0x12bd,	// (0x0002f629) main_video4_pane_g5_ParamLimits

0x12bd,	// (0x0002f629) main_video4_pane_g5

0x12e2,	// (0x0002f64e) vid4_progress_pane_ParamLimits

0x12e2,	// (0x0002f64e) vid4_progress_pane

0xd3f8,	// (0x0003b764) main_cset_slider_pane_g18_ParamLimits

0xd3f8,	// (0x0003b764) main_cset_slider_pane_g18

0xd5f6,	// (0x0003b962) cell_cam4_burst_pane_g2_ParamLimits

0xd5f6,	// (0x0003b962) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0003dd9d) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0003dd9d) cell_cam4_burst_pane_g

0xa3dc,	// (0x00038748) bg_cl_pane_ParamLimits

0xa3dc,	// (0x00038748) bg_cl_pane

0x7258,	// (0x000355c4) cl_header_pane_ParamLimits

0x7258,	// (0x000355c4) cl_header_pane

0x726c,	// (0x000355d8) cl_listscroll_pane_ParamLimits

0x726c,	// (0x000355d8) cl_listscroll_pane

0xd81d,	// (0x0003bb89) bg_cl_pane_g1

0xd825,	// (0x0003bb91) bg_cl_pane_g2

0xd82d,	// (0x0003bb99) bg_cl_pane_g3

0xd835,	// (0x0003bba1) bg_cl_pane_g4

0xd83d,	// (0x0003bba9) bg_cl_pane_g5

0xd845,	// (0x0003bbb1) bg_cl_pane_g6

0xd84d,	// (0x0003bbb9) bg_cl_pane_g7

0xd855,	// (0x0003bbc1) bg_cl_pane_g8

0xd85d,	// (0x0003bbc9) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0003ddd8) bg_cl_pane_g

0x727c,	// (0x000355e8) aid_height_cl_leading_ParamLimits

0x727c,	// (0x000355e8) aid_height_cl_leading

0x7288,	// (0x000355f4) aid_height_cl_text_ParamLimits

0x7288,	// (0x000355f4) aid_height_cl_text

0xab27,	// (0x00038e93) bg_cl_header_pane_ParamLimits

0xab27,	// (0x00038e93) bg_cl_header_pane

0x72a7,	// (0x00035613) cl_header_pane_g1_ParamLimits

0x72a7,	// (0x00035613) cl_header_pane_g1

0x72bd,	// (0x00035629) cl_header_pane_t1_ParamLimits

0x72bd,	// (0x00035629) cl_header_pane_t1

0xd865,	// (0x0003bbd1) cl_list_pane

0xd3cb,	// (0x0003b737) hc_scroll_pane_cp01

0xa7e3,	// (0x00038b4f) bg_cl_header_pane_g1

0xd2b1,	// (0x0003b61d) bg_cl_header_pane_g2

0xa803,	// (0x00038b6f) bg_cl_header_pane_g3

0xd2c1,	// (0x0003b62d) bg_cl_header_pane_g4

0xd2b9,	// (0x0003b625) bg_cl_header_pane_g5

0xd505,	// (0x0003b871) bg_cl_header_pane_g6

0xd2d9,	// (0x0003b645) bg_cl_header_pane_g7

0xd2e1,	// (0x0003b64d) bg_cl_header_pane_g8

0xd2d1,	// (0x0003b63d) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0003ddeb) bg_cl_header_pane_g

0x72d6,	// (0x00035642) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x72d6,	// (0x00035642) hc_cl_list_double_graphic_heading_pane

0x72e7,	// (0x00035653) hc_cl_list_single_graphic_pane_ParamLimits

0x72e7,	// (0x00035653) hc_cl_list_single_graphic_pane

0x72fd,	// (0x00035669) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x72fd,	// (0x00035669) hc_cl_list_single_graphic_pane_g1

0x7309,	// (0x00035675) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7309,	// (0x00035675) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0003ddfe) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0003ddfe) hc_cl_list_single_graphic_pane_g

0x731d,	// (0x00035689) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x731d,	// (0x00035689) hc_cl_list_single_graphic_pane_t1

0x72fd,	// (0x00035669) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x72fd,	// (0x00035669) hc_cl_list_double_graphic_heading_pane_g1

0x7332,	// (0x0003569e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7332,	// (0x0003569e) hc_cl_list_double_graphic_heading_pane_g2

0x7346,	// (0x000356b2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7346,	// (0x000356b2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0003de03) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0003de03) hc_cl_list_double_graphic_heading_pane_g

0x735a,	// (0x000356c6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x735a,	// (0x000356c6) hc_cl_list_double_graphic_heading_pane_t1

0x736f,	// (0x000356db) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x736f,	// (0x000356db) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0003de0a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0003de0a) hc_cl_list_double_graphic_heading_pane_t

0x738c,	// (0x000356f8) vid4_progress_pane_g1

0x739c,	// (0x00035708) vid4_progress_pane_g2

0x17ad,	// (0x0002fb19) vid4_progress_pane_g3

0x73ac,	// (0x00035718) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0003de0f) vid4_progress_pane_g

0x17bf,	// (0x0002fb2b) vid4_progress_pane_t1

0x73c4,	// (0x00035730) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0003de1a) vid4_progress_pane_t

0x17d7,	// (0x0002fb43) wait_bar_pane_cp07

0xc698,	// (0x0003aa04) blid_firmament_pane_ParamLimits

0xc6db,	// (0x0003aa47) popup_blid_sat_info2_window_g1

0xc6ff,	// (0x0003aa6b) popup_blid_sat_info2_window_t3

0xc70d,	// (0x0003aa79) popup_blid_sat_info2_window_t4

0xc71b,	// (0x0003aa87) popup_blid_sat_info2_window_t5

0xc729,	// (0x0003aa95) popup_blid_sat_info2_window_t6

0xc739,	// (0x0003aaa5) popup_blid_sat_info2_window_t7

0xc747,	// (0x0003aab3) popup_blid_sat_info2_window_t8

0xc755,	// (0x0003aac1) popup_blid_sat_info2_window_t9

0xc763,	// (0x0003aacf) popup_blid_sat_info2_window_t10

0xc825,	// (0x0003ab91) aid_firma_cardinal_ParamLimits

0xc839,	// (0x0003aba5) blid_firmament_pane_t1_ParamLimits

0xc850,	// (0x0003abbc) blid_firmament_pane_t2_ParamLimits

0xc867,	// (0x0003abd3) blid_firmament_pane_t3_ParamLimits

0xc88a,	// (0x0003abf6) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0003da24) blid_firmament_pane_t_ParamLimits

0xc8a1,	// (0x0003ac0d) blid_sat_info_pane_ParamLimits

0x197b,	// (0x0002fce7) main_cam_set_pane_ParamLimits

0x5c62,	// (0x00033fce) aid_size_cell_colour_35_ParamLimits

0x5c82,	// (0x00033fee) aid_size_cell_colour_112_ParamLimits

0x5ca2,	// (0x0003400e) aid_size_cell_effect_ParamLimits

0xc49d,	// (0x0003a809) bg_tb_trans_pane_cp02_ParamLimits

0xaa4b,	// (0x00038db7) heading_imed_pane_ParamLimits

0x5cc2,	// (0x0003402e) listscroll_imed_pane_ParamLimits

0xbac3,	// (0x00039e2f) popup_call2_audio_first_window_g5_ParamLimits

0xbac3,	// (0x00039e2f) popup_call2_audio_first_window_g5

0x0e40,	// (0x0002f1ac) aid_size_touch_image3_arrow_left_ParamLimits

0x0e40,	// (0x0002f1ac) aid_size_touch_image3_arrow_left

0x0e6c,	// (0x0002f1d8) aid_size_touch_image3_arrow_right_ParamLimits

0x0e6c,	// (0x0002f1d8) aid_size_touch_image3_arrow_right

0x73d9,	// (0x00035745) vid4_progress_pane_t3

0x5fd5,	// (0x00034341) main_hwr_training_symbol_option_pane_ParamLimits

0x5fd5,	// (0x00034341) main_hwr_training_symbol_option_pane

0xd0f0,	// (0x0003b45c) popup_hwr_training_preview_window_ParamLimits

0xd0f0,	// (0x0003b45c) popup_hwr_training_preview_window

0x0ceb,	// (0x0002f057) hwr_training_navi_pane_g5_ParamLimits

0x0ceb,	// (0x0002f057) hwr_training_navi_pane_g5

0xd29f,	// (0x0003b60b) popup_char_count_window

0x197b,	// (0x0002fce7) bg_popup_sub_pane_cp20_ParamLimits

0x1718,	// (0x0002fa84) list_vitu2_match_list_pane_ParamLimits

0x1727,	// (0x0002fa93) vitu2_page_scroll_pane_ParamLimits

0x1727,	// (0x0002fa93) vitu2_page_scroll_pane

0xd890,	// (0x0003bbfc) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd890,	// (0x0003bbfc) list_single_hwr_training_symbol_option_pane

0xd8a3,	// (0x0003bc0f) list_single_hwr_training_symbol_option_pane_g1

0xd8ab,	// (0x0003bc17) list_single_hwr_training_symbol_option_pane_t1

0xd8b9,	// (0x0003bc25) bg_button_pane_cp023

0xd8c2,	// (0x0003bc2e) bg_button_pane_cp024

0x7426,	// (0x00035792) vitu2_page_scroll_pane_g1

0x742e,	// (0x0003579a) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0003de21) vitu2_page_scroll_pane_g

0x7436,	// (0x000357a2) vitu2_page_scroll_pane_t1

0xc5f8,	// (0x0003a964) popup_char_count_window_g1

0xd8f5,	// (0x0003bc61) popup_char_count_window_g2

0xd8fe,	// (0x0003bc6a) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0003de26) popup_char_count_window_g

0xd907,	// (0x0003bc73) popup_char_count_window_t1

0x1995,	// (0x0002fd01) main_vded2_pane

0xcdef,	// (0x0003b15b) aid_size_cell_imed_line

0xcdf9,	// (0x0003b165) grid_imed_line_width_pane

0x65a4,	// (0x00034910) vid4_indicators_pane_g4

0xd915,	// (0x0003bc81) cell_imed_line_width_pane_ParamLimits

0xd915,	// (0x0003bc81) cell_imed_line_width_pane

0xd929,	// (0x0003bc95) cell_imed_line_width_pane_g1

0xd713,	// (0x0003ba7f) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0003de2d) cell_imed_line_width_pane_g

0x7445,	// (0x000357b1) main_vded2_pane_g1_ParamLimits

0x7445,	// (0x000357b1) main_vded2_pane_g1

0x745b,	// (0x000357c7) main_vded2_pane_g2_ParamLimits

0x745b,	// (0x000357c7) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0003de32) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0003de32) main_vded2_pane_g

0x746d,	// (0x000357d9) vded2_slider_pane_ParamLimits

0x746d,	// (0x000357d9) vded2_slider_pane

0x747d,	// (0x000357e9) aid_size_touch_vded2_end

0x7487,	// (0x000357f3) aid_size_touch_vded2_playhead

0xd932,	// (0x0003bc9e) aid_size_touch_vded2_start

0xd93a,	// (0x0003bca6) vded2_slider_bg_pane

0xd943,	// (0x0003bcaf) vded2_slider_pane_g1

0xd94c,	// (0x0003bcb8) vded2_slider_pane_g2

0x7491,	// (0x000357fd) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0003de37) vded2_slider_pane_g

0xd954,	// (0x0003bcc0) vded2_slider_bg_pane_g1

0xd95d,	// (0x0003bcc9) vded2_slider_bg_pane_g2

0xd966,	// (0x0003bcd2) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x0003de3e) vded2_slider_bg_pane_g

0x40a6,	// (0x00032412) aid_postcard_touch_down_pane_ParamLimits

0x40a6,	// (0x00032412) aid_postcard_touch_down_pane

0x40bc,	// (0x00032428) aid_postcard_touch_up_pane_ParamLimits

0x40bc,	// (0x00032428) aid_postcard_touch_up_pane

0x1995,	// (0x0002fd01) main_blid2_pane

0x4959,	// (0x00032cc5) popup_blid2_search_window

0x9c9f,	// (0x0003800b) blid2_gps_pane

0x9c9f,	// (0x0003800b) blid2_navig_pane

0x9c9f,	// (0x0003800b) blid2_search_pane

0x9c9f,	// (0x0003800b) blid2_tripm_pane

0x749c,	// (0x00035808) blid2_search_pane_g1_ParamLimits

0x749c,	// (0x00035808) blid2_search_pane_g1

0x74b6,	// (0x00035822) blid2_search_pane_t1_ParamLimits

0x74b6,	// (0x00035822) blid2_search_pane_t1

0x74c8,	// (0x00035834) aid_size_cell_blid2_gps_ParamLimits

0x74c8,	// (0x00035834) aid_size_cell_blid2_gps

0x74e0,	// (0x0003584c) blid2_gps_pane_g1_ParamLimits

0x74e0,	// (0x0003584c) blid2_gps_pane_g1

0x74f4,	// (0x00035860) grid_blid2_satellite_pane_ParamLimits

0x74f4,	// (0x00035860) grid_blid2_satellite_pane

0x750e,	// (0x0003587a) blid2_navig_pane_g1_ParamLimits

0x750e,	// (0x0003587a) blid2_navig_pane_g1

0x751a,	// (0x00035886) blid2_navig_pane_t1_ParamLimits

0x751a,	// (0x00035886) blid2_navig_pane_t1

0x7535,	// (0x000358a1) blid2_navig_pane_t2_ParamLimits

0x7535,	// (0x000358a1) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x0003de45) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x0003de45) blid2_navig_pane_t

0x7550,	// (0x000358bc) blid2_navig_ring_pane_ParamLimits

0x7550,	// (0x000358bc) blid2_navig_ring_pane

0x7569,	// (0x000358d5) blid2_speed_pane_ParamLimits

0x7569,	// (0x000358d5) blid2_speed_pane

0x7575,	// (0x000358e1) blid2_tripm_pane_g1_ParamLimits

0x7575,	// (0x000358e1) blid2_tripm_pane_g1

0x758e,	// (0x000358fa) blid2_tripm_pane_g2_ParamLimits

0x758e,	// (0x000358fa) blid2_tripm_pane_g2

0x75a2,	// (0x0003590e) blid2_tripm_pane_g3_ParamLimits

0x75a2,	// (0x0003590e) blid2_tripm_pane_g3

0x75b6,	// (0x00035922) blid2_tripm_pane_g4_ParamLimits

0x75b6,	// (0x00035922) blid2_tripm_pane_g4

0x75ca,	// (0x00035936) blid2_tripm_pane_g5_ParamLimits

0x75ca,	// (0x00035936) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x0003de4a) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x0003de4a) blid2_tripm_pane_g

0x75f0,	// (0x0003595c) blid2_tripm_pane_t1_ParamLimits

0x75f0,	// (0x0003595c) blid2_tripm_pane_t1

0x760b,	// (0x00035977) blid2_tripm_pane_t2_ParamLimits

0x760b,	// (0x00035977) blid2_tripm_pane_t2

0x7624,	// (0x00035990) blid2_tripm_pane_t3_ParamLimits

0x7624,	// (0x00035990) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x0003de57) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x0003de57) blid2_tripm_pane_t

0x766b,	// (0x000359d7) cell_blid2_satellite_pane_ParamLimits

0x766b,	// (0x000359d7) cell_blid2_satellite_pane

0x7689,	// (0x000359f5) cell_blid2_satellite_pane_g1

0xd96f,	// (0x0003bcdb) cell_blid2_satellite_pane_t1

0xc8b1,	// (0x0003ac1d) blid2_speed_pane_g1

0xd97d,	// (0x0003bce9) blid2_speed_pane_t1

0xd98b,	// (0x0003bcf7) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x0003de60) blid2_speed_pane_t

0xc8b1,	// (0x0003ac1d) blid2_navig_ring_pane_g1

0x7692,	// (0x000359fe) blid2_navig_ring_pane_g2

0x769a,	// (0x00035a06) blid2_navig_ring_pane_g3

0x76a2,	// (0x00035a0e) blid2_navig_ring_pane_g4

0x76aa,	// (0x00035a16) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x0003de65) blid2_navig_ring_pane_g

0x9c9f,	// (0x0003800b) bg_popup_window_pane_cp011

0xd999,	// (0x0003bd05) popup_blid2_search_window_g1

0xd9a1,	// (0x0003bd0d) popup_blid2_search_window_t1

0xd9af,	// (0x0003bd1b) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x0003de70) popup_blid2_search_window_t

0xa6f2,	// (0x00038a5e) main_browser_pane_g1

0xa3dc,	// (0x00038748) main_browser_pane_ParamLimits

0x197b,	// (0x0002fce7) bg_button_pane_cp011_ParamLimits

0x1698,	// (0x0002fa04) cell_vitu2_function_pane_g1_ParamLimits

0xc49d,	// (0x0003a809) bg_popup_sub_pane_cp22_ParamLimits

0x6ef2,	// (0x0003525e) input_focus_pane_cp08_ParamLimits

0x6f09,	// (0x00035275) popup_vitu2_query_button_pane_ParamLimits

0x6f09,	// (0x00035275) popup_vitu2_query_button_pane

0x6f1a,	// (0x00035286) popup_vitu2_query_input_button_pane

0xd540,	// (0x0003b8ac) popup_vitu2_query_window_g1_ParamLimits

0x6f24,	// (0x00035290) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0003dd71) popup_vitu2_query_window_g_ParamLimits

0x9c9f,	// (0x0003800b) bg_button_pane_cp026

0x76b2,	// (0x00035a1e) popup_vitu2_query_input_button_pane_g1

0x9c9f,	// (0x0003800b) bg_button_pane_cp025

0xd9bd,	// (0x0003bd29) popup_vitu2_query_button_pane_t1

0x50c6,	// (0x00033432) main_mp3_pane_t6

0x50d4,	// (0x00033440) popup_slider_window_cp01

0x6508,	// (0x00034874) cam4_battery_pane

0x6561,	// (0x000348cd) cam4_battery_pane_cp02

0x7384,	// (0x000356f0) cam4_battery_pane_cp01

0x7384,	// (0x000356f0) cam4_battery_pane_cp03

0xd71b,	// (0x0003ba87) cam4_battery_pane_g1

0xc8b1,	// (0x0003ac1d) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x0003de75) cam4_battery_pane_g

0xc771,	// (0x0003aadd) popup_blid_sat_info2_window_t11

0xae67,	// (0x000391d3) aid_size_touch_mv_arrow_left_ParamLimits

0xae90,	// (0x000391fc) aid_size_touch_mv_arrow_right_ParamLimits

0xaeee,	// (0x0003925a) navi_pane_g1_ParamLimits

0xaefa,	// (0x00039266) navi_pane_g2_ParamLimits

0xaf28,	// (0x00039294) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0003d736) navi_pane_g_ParamLimits

0x3b3b,	// (0x00031ea7) navi_pane_mv_t1_ParamLimits

0x5cce,	// (0x0003403a) grid_imed_effect_pane_ParamLimits

0x271e,	// (0x00030a8a) aid_placing_vt_slider_lsc

0xa641,	// (0x000389ad) aid_placing_vt_slider_prt

0xab27,	// (0x00038e93) bg_tb_trans_pane_cp01_ParamLimits

0xca34,	// (0x0003ada0) popup_image_details_window_g1_ParamLimits

0xca47,	// (0x0003adb3) popup_image_details_window_g2_ParamLimits

0xca5c,	// (0x0003adc8) popup_image_details_window_g3_ParamLimits

0xca5c,	// (0x0003adc8) popup_image_details_window_g3

0xf6fd,	// (0x0003da69) popup_image_details_window_g_ParamLimits

0xca70,	// (0x0003addc) popup_image_details_window_t1_ParamLimits

0xca82,	// (0x0003adee) popup_image_details_window_t2_ParamLimits

0xca9b,	// (0x0003ae07) popup_image_details_window_t3_ParamLimits

0xcaaf,	// (0x0003ae1b) popup_image_details_window_t4_ParamLimits

0xcaca,	// (0x0003ae36) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0003da70) popup_image_details_window_t_ParamLimits

0x7294,	// (0x00035600) cl_header_name_pane_ParamLimits

0x7294,	// (0x00035600) cl_header_name_pane

0x76ba,	// (0x00035a26) cl_header_name_pane_t1_ParamLimits

0x76ba,	// (0x00035a26) cl_header_name_pane_t1

0x76db,	// (0x00035a47) cl_header_name_pane_t2_ParamLimits

0x76db,	// (0x00035a47) cl_header_name_pane_t2

0x771d,	// (0x00035a89) cl_header_name_pane_t3_ParamLimits

0x771d,	// (0x00035a89) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x0003de7a) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x0003de7a) cl_header_name_pane_t

0xafb7,	// (0x00039323) navi_pane_mv_g2_ParamLimits

0xd25c,	// (0x0003b5c8) field_vitu2_entry_pane_g1_ParamLimits

0xd268,	// (0x0003b5d4) field_vitu2_entry_pane_g2_ParamLimits

0xd274,	// (0x0003b5e0) field_vitu2_entry_pane_g3_ParamLimits

0xd274,	// (0x0003b5e0) field_vitu2_entry_pane_g3

0xf904,	// (0x0003dc70) field_vitu2_entry_pane_g_ParamLimits

0x6628,	// (0x00034994) cell_vitu2_itu_pane_g1_ParamLimits

0x1540,	// (0x0002f8ac) cell_vitu2_itu_pane_g2_ParamLimits

0x1540,	// (0x0002f8ac) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0003dc7c) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0003dc7c) cell_vitu2_itu_pane_g

0x197b,	// (0x0002fce7) bg_vkb2_func_pane_cp05_ParamLimits

0x197b,	// (0x0002fce7) bg_vkb2_func_pane_cp05

0x197b,	// (0x0002fce7) bg_vkb2_func_pane_cp03

0x197b,	// (0x0002fce7) bg_vkb2_func_pane_cp04

0x197b,	// (0x0002fce7) bg_vkb2_func_pane_cp10_ParamLimits

0x197b,	// (0x0002fce7) bg_vkb2_func_pane_cp10

0x723a,	// (0x000355a6) bg_vkb2_func_pane_cp08

0x7220,	// (0x0003558c) bg_vkb2_func_pane_cp06

0x722e,	// (0x0003559a) bg_vkb2_func_pane_cp07

0xd8cb,	// (0x0003bc37) bg_vkb2_func_pane_cp11_ParamLimits

0xd8cb,	// (0x0003bc37) bg_vkb2_func_pane_cp11

0xd8e0,	// (0x0003bc4c) bg_vkb2_func_pane_cp12_ParamLimits

0xd8e0,	// (0x0003bc4c) bg_vkb2_func_pane_cp12

0x9c9f,	// (0x0003800b) bg_vkb2_func_pane_cp09

0xd2b1,	// (0x0003b61d) bg_vkb2_func_pane_g1

0xa803,	// (0x00038b6f) bg_vkb2_func_pane_g2

0xd2b9,	// (0x0003b625) bg_vkb2_func_pane_g3

0xd2c1,	// (0x0003b62d) bg_vkb2_func_pane_g4

0xd505,	// (0x0003b871) bg_vkb2_func_pane_g5

0xd2d9,	// (0x0003b645) bg_vkb2_func_pane_g6

0xd2e1,	// (0x0003b64d) bg_vkb2_func_pane_g7

0xd2d1,	// (0x0003b63d) bg_vkb2_func_pane_g8

0xa7e3,	// (0x00038b4f) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x0003de81) bg_vkb2_func_pane_g

0x75de,	// (0x0003594a) blid2_tripm_pane_g6_ParamLimits

0x75de,	// (0x0003594a) blid2_tripm_pane_g6

0xd1ae,	// (0x0003b51a) mp4_progress_pane_g1

0x7657,	// (0x000359c3) blid2_tripm_values_pane_ParamLimits

0x7657,	// (0x000359c3) blid2_tripm_values_pane

0x774e,	// (0x00035aba) blid2_tripm_values_pane_t1

0x775c,	// (0x00035ac8) blid2_tripm_values_pane_t2

0x776a,	// (0x00035ad6) blid2_tripm_values_pane_t3

0x7778,	// (0x00035ae4) blid2_tripm_values_pane_t4

0x7786,	// (0x00035af2) blid2_tripm_values_pane_t5

0x7794,	// (0x00035b00) blid2_tripm_values_pane_t6

0x77a2,	// (0x00035b0e) blid2_tripm_values_pane_t7

0x77b0,	// (0x00035b1c) blid2_tripm_values_pane_t8

0x77be,	// (0x00035b2a) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x0003de94) blid2_tripm_values_pane_t

0x2760,	// (0x00030acc) call_video_pane_t1_ParamLimits

0x277e,	// (0x00030aea) call_video_pane_t2_ParamLimits

0xf253,	// (0x0003d5bf) call_video_pane_t_ParamLimits

0x4026,	// (0x00032392) msg_header_pane_g1_ParamLimits

0xb1a7,	// (0x00039513) msg_header_pane_g2_ParamLimits

0xb1a7,	// (0x00039513) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0003d7d9) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0003d7d9) msg_header_pane_g

0xa3dc,	// (0x00038748) main_clock2_pane_ParamLimits

0x5a6e,	// (0x00033dda) grid_clock2_toolbar_pane_ParamLimits

0x5a6e,	// (0x00033dda) grid_clock2_toolbar_pane

0x5a6e,	// (0x00033dda) listscroll_clock2_pane_ParamLimits

0x5a6e,	// (0x00033dda) listscroll_clock2_pane

0x5b52,	// (0x00033ebe) main_clock2_pane_t3_ParamLimits

0x5b52,	// (0x00033ebe) main_clock2_pane_t3

0x5b76,	// (0x00033ee2) main_clock2_pane_t4_ParamLimits

0x5b76,	// (0x00033ee2) main_clock2_pane_t4

0xd9cb,	// (0x0003bd37) cell_clock2_toolbar_pane

0xd9d3,	// (0x0003bd3f) cell_clock2_toolbar_pane_cp01

0xd9d3,	// (0x0003bd3f) cell_clock2_toolbar_pane_cp02

0xd9db,	// (0x0003bd47) cell_clock2_toolbar_pane_cp03

0xd9e3,	// (0x0003bd4f) list_clock2_pane

0xaddd,	// (0x00039149) scroll_pane_cp10

0xd9eb,	// (0x0003bd57) list_single_clock2_pane_ParamLimits

0xd9eb,	// (0x0003bd57) list_single_clock2_pane

0xa5aa,	// (0x00038916) list_highlight_pane_cp08

0xd9f8,	// (0x0003bd64) list_single_clock2_pane_t1

0xda06,	// (0x0003bd72) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x0003dea7) list_single_clock2_pane_t

0x9c9f,	// (0x0003800b) bg_button_pane_cp10

0xda14,	// (0x0003bd80) cell_clock2_toolbar_pane_g1

0x0481,	// (0x0002e7ed) aid_main_viewer_pane_g1_ParamLimits

0x0481,	// (0x0002e7ed) aid_main_viewer_pane_g1

0x048f,	// (0x0002e7fb) aid_main_viewer_pane_g2_ParamLimits

0x048f,	// (0x0002e7fb) aid_main_viewer_pane_g2

0x404c,	// (0x000323b8) aid_main_viewer_pane_g3_ParamLimits

0x404c,	// (0x000323b8) aid_main_viewer_pane_g3

0x405b,	// (0x000323c7) aid_main_viewer_pane_g4_ParamLimits

0x405b,	// (0x000323c7) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0003d7ea) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0003d7ea) aid_main_viewer_pane_g

0x04c3,	// (0x0002e82f) main_calc_pane_ParamLimits

0x04e9,	// (0x0002e855) main_dialer2_pane_ParamLimits

0x1995,	// (0x0002fd01) main_cam6_pane

0x1995,	// (0x0002fd01) main_vid6_pane

0x5a7a,	// (0x00033de6) listscroll_gen_pane_cp06_ParamLimits

0x5a7a,	// (0x00033de6) listscroll_gen_pane_cp06

0x5b99,	// (0x00033f05) main_clock2_pane_t5_ParamLimits

0x5b99,	// (0x00033f05) main_clock2_pane_t5

0x5bf7,	// (0x00033f63) aid_call2_pane_cp10_ParamLimits

0x5c09,	// (0x00033f75) aid_call_pane_cp10_ParamLimits

0xae5b,	// (0x000391c7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae5b,	// (0x000391c7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c1b,	// (0x00033f87) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c1b,	// (0x00033f87) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae5b,	// (0x000391c7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0003db25) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c31,	// (0x00033f9d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6326,	// (0x00034692) cell_dialer2_keypad_pane_g2_ParamLimits

0x6326,	// (0x00034692) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0003dc0f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0003dc0f) cell_dialer2_keypad_pane_g

0x6342,	// (0x000346ae) cell_dialer2_keypad_pane_t1

0x6943,	// (0x00034caf) main_cset_text2_pane_ParamLimits

0x6943,	// (0x00034caf) main_cset_text2_pane

0xd775,	// (0x0003bae1) area_vitu2_query_pane_g1_ParamLimits

0x71bf,	// (0x0003552b) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0003ddc4) area_vitu2_query_pane_g_ParamLimits

0xd7f9,	// (0x0003bb65) area_vitu2_query_pane_t7_ParamLimits

0xd7f9,	// (0x0003bb65) area_vitu2_query_pane_t7

0x7220,	// (0x0003558c) bg_button_pane_cp018_ParamLimits

0x722e,	// (0x0003559a) bg_button_pane_cp021_ParamLimits

0x723a,	// (0x000355a6) bg_button_pane_cp022_ParamLimits

0x723a,	// (0x000355a6) bg_vkb2_func_pane_cp08_ParamLimits

0x7220,	// (0x0003558c) bg_vkb2_func_pane_cp06_ParamLimits

0x722e,	// (0x0003559a) bg_vkb2_func_pane_cp07_ParamLimits

0x7249,	// (0x000355b5) input_focus_pane_cp09_ParamLimits

0x77cc,	// (0x00035b38) cam6_autofocus_pane_ParamLimits

0x77cc,	// (0x00035b38) cam6_autofocus_pane

0x17ea,	// (0x0002fb56) cam6_image_uncrop_pane_ParamLimits

0x17ea,	// (0x0002fb56) cam6_image_uncrop_pane

0x17f9,	// (0x0002fb65) cam6_indi_pane_ParamLimits

0x17f9,	// (0x0002fb65) cam6_indi_pane

0x180f,	// (0x0002fb7b) cam6_mode_pane_ParamLimits

0x180f,	// (0x0002fb7b) cam6_mode_pane

0x1821,	// (0x0002fb8d) cam6_timer_pane_ParamLimits

0x1821,	// (0x0002fb8d) cam6_timer_pane

0x182d,	// (0x0002fb99) cam6_zoom_pane_ParamLimits

0x182d,	// (0x0002fb99) cam6_zoom_pane

0x77da,	// (0x00035b46) cam6_mode_pane_g1_ParamLimits

0x77da,	// (0x00035b46) cam6_mode_pane_g1

0x77ea,	// (0x00035b56) cam6_mode_pane_g2_ParamLimits

0x77ea,	// (0x00035b56) cam6_mode_pane_g2

0x77fa,	// (0x00035b66) cam6_mode_pane_g3_ParamLimits

0x77fa,	// (0x00035b66) cam6_mode_pane_g3

0x780a,	// (0x00035b76) cam6_mode_pane_g4_ParamLimits

0x780a,	// (0x00035b76) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x0003deac) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x0003deac) cam6_mode_pane_g

0xd6dc,	// (0x0003ba48) bg_tb_trans_pane_cp08_ParamLimits

0xd6dc,	// (0x0003ba48) bg_tb_trans_pane_cp08

0xda1c,	// (0x0003bd88) cam6_battery_pane_ParamLimits

0xda1c,	// (0x0003bd88) cam6_battery_pane

0xda32,	// (0x0003bd9e) cam6_indi_pane_g1_ParamLimits

0xda32,	// (0x0003bd9e) cam6_indi_pane_g1

0xda44,	// (0x0003bdb0) cam6_indi_pane_g2_ParamLimits

0xda44,	// (0x0003bdb0) cam6_indi_pane_g2

0xda56,	// (0x0003bdc2) cam6_indi_pane_g3_ParamLimits

0xda56,	// (0x0003bdc2) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x0003deb5) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x0003deb5) cam6_indi_pane_g

0xda68,	// (0x0003bdd4) cam6_indi_pane_t1_ParamLimits

0xda68,	// (0x0003bdd4) cam6_indi_pane_t1

0x781a,	// (0x00035b86) cam6_autofocus_pane_g1

0x7822,	// (0x00035b8e) cam6_autofocus_pane_g2

0x782a,	// (0x00035b96) cam6_autofocus_pane_g3

0x7832,	// (0x00035b9e) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x0003debc) cam6_autofocus_pane_g

0xda8e,	// (0x0003bdfa) cam6_timer_pane_g1

0xda96,	// (0x0003be02) cam6_timer_pane_t1

0xdaa4,	// (0x0003be10) cam6_zoom_cont_pane

0xdaac,	// (0x0003be18) cam6_zoom_pane_g1

0xdab4,	// (0x0003be20) cam6_zoom_pane_g2

0x783a,	// (0x00035ba6) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x0003dec5) cam6_zoom_pane_g

0xc8b1,	// (0x0003ac1d) cam6_battery_pane_g1

0xc8b1,	// (0x0003ac1d) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0003da2d) cam6_battery_pane_g

0xdabc,	// (0x0003be28) cam6_zoom_cont_pane_g1

0xdac5,	// (0x0003be31) cam6_zoom_cont_pane_g2

0xdace,	// (0x0003be3a) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x0003decc) cam6_zoom_cont_pane_g

0x7857,	// (0x00035bc3) cam6_mode_pane_cp_ParamLimits

0x7857,	// (0x00035bc3) cam6_mode_pane_cp

0x7869,	// (0x00035bd5) cam6_zoom_pane_cp_ParamLimits

0x7869,	// (0x00035bd5) cam6_zoom_pane_cp

0x7875,	// (0x00035be1) vid6_image_uncrop_cif_pane_ParamLimits

0x7875,	// (0x00035be1) vid6_image_uncrop_cif_pane

0x7885,	// (0x00035bf1) vid6_image_uncrop_nhd_pane_ParamLimits

0x7885,	// (0x00035bf1) vid6_image_uncrop_nhd_pane

0x7894,	// (0x00035c00) vid6_image_uncrop_vga_pane_ParamLimits

0x7894,	// (0x00035c00) vid6_image_uncrop_vga_pane

0x78a3,	// (0x00035c0f) vid6_image_uncrop_wvga_pane_ParamLimits

0x78a3,	// (0x00035c0f) vid6_image_uncrop_wvga_pane

0x78b2,	// (0x00035c1e) vid6_indi_pane_ParamLimits

0x78b2,	// (0x00035c1e) vid6_indi_pane

0xd6dc,	// (0x0003ba48) bg_tb_trans_pane_cp09_ParamLimits

0xd6dc,	// (0x0003ba48) bg_tb_trans_pane_cp09

0xdae6,	// (0x0003be52) cam6_battery_pane_cp_ParamLimits

0xdae6,	// (0x0003be52) cam6_battery_pane_cp

0xdaf2,	// (0x0003be5e) vid6_indi_pane_g1_ParamLimits

0xdaf2,	// (0x0003be5e) vid6_indi_pane_g1

0xdb04,	// (0x0003be70) vid6_indi_pane_g2_ParamLimits

0xdb04,	// (0x0003be70) vid6_indi_pane_g2

0xdb16,	// (0x0003be82) vid6_indi_pane_g3_ParamLimits

0xdb16,	// (0x0003be82) vid6_indi_pane_g3

0xdb2b,	// (0x0003be97) vid6_indi_pane_g4_ParamLimits

0xdb2b,	// (0x0003be97) vid6_indi_pane_g4

0xdb40,	// (0x0003beac) vid6_indi_pane_g5_ParamLimits

0xdb40,	// (0x0003beac) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x0003ded3) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x0003ded3) vid6_indi_pane_g

0xdb5a,	// (0x0003bec6) vid6_indi_pane_t1_ParamLimits

0xdb5a,	// (0x0003bec6) vid6_indi_pane_t1

0xdb70,	// (0x0003bedc) vid6_indi_pane_t2_ParamLimits

0xdb70,	// (0x0003bedc) vid6_indi_pane_t2

0xdb98,	// (0x0003bf04) vid6_indi_pane_t3_ParamLimits

0xdb98,	// (0x0003bf04) vid6_indi_pane_t3

0xdbc0,	// (0x0003bf2c) vid6_indi_pane_t4_ParamLimits

0xdbc0,	// (0x0003bf2c) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x0003dede) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x0003dede) vid6_indi_pane_t

0xdbe4,	// (0x0003bf50) wait_bar_pane_cp08

0x78ca,	// (0x00035c36) main_cset_text2_pane_t1_ParamLimits

0x78ca,	// (0x00035c36) main_cset_text2_pane_t1

0x7842,	// (0x00035bae) listscroll_gen_pane_cp06_t1_ParamLimits

0x7842,	// (0x00035bae) listscroll_gen_pane_cp06_t1

0x1995,	// (0x0002fd01) main_cam6_set_pane

0x64fa,	// (0x00034866) bg_tb_trans_pane_cp06_ParamLimits

0x6510,	// (0x0003487c) cam4_indicators_pane_g1_ParamLimits

0x6521,	// (0x0003488d) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0003dc4c) cam4_indicators_pane_g_ParamLimits

0x653f,	// (0x000348ab) cam4_indicators_pane_t1_ParamLimits

0x197b,	// (0x0002fce7) bg_tb_trans_pane_cp07_ParamLimits

0x656b,	// (0x000348d7) vid4_indicators_pane_g1_ParamLimits

0x657f,	// (0x000348eb) vid4_indicators_pane_g2_ParamLimits

0x6593,	// (0x000348ff) vid4_indicators_pane_g3_ParamLimits

0x65a4,	// (0x00034910) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0003dc5e) vid4_indicators_pane_g_ParamLimits

0x65c2,	// (0x0003492e) vid4_indicators_pane_t1_ParamLimits

0x738c,	// (0x000356f8) vid4_progress_pane_g1_ParamLimits

0x739c,	// (0x00035708) vid4_progress_pane_g2_ParamLimits

0x17ad,	// (0x0002fb19) vid4_progress_pane_g3_ParamLimits

0x73ac,	// (0x00035718) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0003de0f) vid4_progress_pane_g_ParamLimits

0x17bf,	// (0x0002fb2b) vid4_progress_pane_t1_ParamLimits

0x73c4,	// (0x00035730) vid4_progress_pane_t2_ParamLimits

0x73d9,	// (0x00035745) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0003de1a) vid4_progress_pane_t_ParamLimits

0x17d7,	// (0x0002fb43) wait_bar_pane_cp07_ParamLimits

0x78e7,	// (0x00035c53) main_cam6_set_pane_g2_ParamLimits

0x78e7,	// (0x00035c53) main_cam6_set_pane_g2

0x790b,	// (0x00035c77) main_cset6_listscroll_pane_ParamLimits

0x790b,	// (0x00035c77) main_cset6_listscroll_pane

0x792b,	// (0x00035c97) main_cset6_slider_pane_ParamLimits

0x792b,	// (0x00035c97) main_cset6_slider_pane

0x7941,	// (0x00035cad) main_cset6_text2_pane_ParamLimits

0x7941,	// (0x00035cad) main_cset6_text2_pane

0xdbf3,	// (0x0003bf5f) main_cset6_text_pane

0xdbfb,	// (0x0003bf67) main_cset_list_pane_copy1_ParamLimits

0xdbfb,	// (0x0003bf67) main_cset_list_pane_copy1

0xdc0b,	// (0x0003bf77) scroll_pane_cp028_copy1

0x794f,	// (0x00035cbb) cset_list_set_pane_copy1

0x7960,	// (0x00035ccc) aid_position_infowindow_above_copy1

0x7968,	// (0x00035cd4) aid_position_infowindow_below_copy1

0x7970,	// (0x00035cdc) cset_list_set_pane_g1_copy1

0x7978,	// (0x00035ce4) cset_list_set_pane_g3_copy1_ParamLimits

0x7978,	// (0x00035ce4) cset_list_set_pane_g3_copy1

0x7987,	// (0x00035cf3) cset_list_set_pane_t1_copy1_ParamLimits

0x7987,	// (0x00035cf3) cset_list_set_pane_t1_copy1

0xab27,	// (0x00038e93) list_highlight_pane_cp021_copy1_ParamLimits

0xab27,	// (0x00038e93) list_highlight_pane_cp021_copy1

0xdc14,	// (0x0003bf80) cset6_slider_pane_ParamLimits

0xdc14,	// (0x0003bf80) cset6_slider_pane

0xdc40,	// (0x0003bfac) main_cset6_slider_pane_g1_ParamLimits

0xdc40,	// (0x0003bfac) main_cset6_slider_pane_g1

0x799c,	// (0x00035d08) main_cset6_slider_pane_g2_ParamLimits

0x799c,	// (0x00035d08) main_cset6_slider_pane_g2

0xdc68,	// (0x0003bfd4) main_cset6_slider_pane_g3_ParamLimits

0xdc68,	// (0x0003bfd4) main_cset6_slider_pane_g3

0x79c4,	// (0x00035d30) main_cset6_slider_pane_g4_ParamLimits

0x79c4,	// (0x00035d30) main_cset6_slider_pane_g4

0x79d0,	// (0x00035d3c) main_cset6_slider_pane_g5_ParamLimits

0x79d0,	// (0x00035d3c) main_cset6_slider_pane_g5

0xd3e0,	// (0x0003b74c) main_cset6_slider_pane_g7_ParamLimits

0xd3e0,	// (0x0003b74c) main_cset6_slider_pane_g7

0xd3ec,	// (0x0003b758) main_cset6_slider_pane_g8_ParamLimits

0xd3ec,	// (0x0003b758) main_cset6_slider_pane_g8

0x69f0,	// (0x00034d5c) main_cset6_slider_pane_g9_ParamLimits

0x69f0,	// (0x00034d5c) main_cset6_slider_pane_g9

0x69fc,	// (0x00034d68) main_cset6_slider_pane_g10_ParamLimits

0x69fc,	// (0x00034d68) main_cset6_slider_pane_g10

0x6a08,	// (0x00034d74) main_cset6_slider_pane_g11_ParamLimits

0x6a08,	// (0x00034d74) main_cset6_slider_pane_g11

0x6a14,	// (0x00034d80) main_cset6_slider_pane_g12_ParamLimits

0x6a14,	// (0x00034d80) main_cset6_slider_pane_g12

0x6a20,	// (0x00034d8c) main_cset6_slider_pane_g13_ParamLimits

0x6a20,	// (0x00034d8c) main_cset6_slider_pane_g13

0x6a2c,	// (0x00034d98) main_cset6_slider_pane_g14_ParamLimits

0x6a2c,	// (0x00034d98) main_cset6_slider_pane_g14

0x79dc,	// (0x00035d48) main_cset6_slider_pane_g15_ParamLimits

0x79dc,	// (0x00035d48) main_cset6_slider_pane_g15

0x6a50,	// (0x00034dbc) main_cset6_slider_pane_g16_ParamLimits

0x6a50,	// (0x00034dbc) main_cset6_slider_pane_g16

0x6a5c,	// (0x00034dc8) main_cset6_slider_pane_g17_ParamLimits

0x6a5c,	// (0x00034dc8) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x0003dee7) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x0003dee7) main_cset6_slider_pane_g

0xdc74,	// (0x0003bfe0) main_cset6_slider_pane_t1_ParamLimits

0xdc74,	// (0x0003bfe0) main_cset6_slider_pane_t1

0x7a0c,	// (0x00035d78) main_cset6_slider_pane_t2_ParamLimits

0x7a0c,	// (0x00035d78) main_cset6_slider_pane_t2

0x7a37,	// (0x00035da3) main_cset6_slider_pane_t3_ParamLimits

0x7a37,	// (0x00035da3) main_cset6_slider_pane_t3

0x7a62,	// (0x00035dce) main_cset6_slider_pane_t4_ParamLimits

0x7a62,	// (0x00035dce) main_cset6_slider_pane_t4

0x7a8d,	// (0x00035df9) main_cset6_slider_pane_t5_ParamLimits

0x7a8d,	// (0x00035df9) main_cset6_slider_pane_t5

0xdcb5,	// (0x0003c021) main_cset6_slider_pane_t7_ParamLimits

0xdcb5,	// (0x0003c021) main_cset6_slider_pane_t7

0x7ab8,	// (0x00035e24) main_cset6_slider_pane_t8_ParamLimits

0x7ab8,	// (0x00035e24) main_cset6_slider_pane_t8

0x7adc,	// (0x00035e48) main_cset6_slider_pane_t9_ParamLimits

0x7adc,	// (0x00035e48) main_cset6_slider_pane_t9

0x7b00,	// (0x00035e6c) main_cset6_slider_pane_t10_ParamLimits

0x7b00,	// (0x00035e6c) main_cset6_slider_pane_t10

0x7b24,	// (0x00035e90) main_cset6_slider_pane_t11_ParamLimits

0x7b24,	// (0x00035e90) main_cset6_slider_pane_t11

0xdceb,	// (0x0003c057) main_cset6_slider_pane_t14_ParamLimits

0xdceb,	// (0x0003c057) main_cset6_slider_pane_t14

0xdd24,	// (0x0003c090) main_cset6_slider_pane_t15_ParamLimits

0xdd24,	// (0x0003c090) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x0003df0c) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x0003df0c) main_cset6_slider_pane_t

0xd6ea,	// (0x0003ba56) cset_slider_pane_g1_copy1

0xd6f3,	// (0x0003ba5f) cset_slider_pane_g2_copy1

0xd6fc,	// (0x0003ba68) cset_slider_pane_g3_copy1

0x9c9f,	// (0x0003800b) bg_popup_sub_pane_cp011_copy1

0xdd5d,	// (0x0003c0c9) main_cset_text_pane_g1_copy1

0xd554,	// (0x0003b8c0) main_cset_text_pane_t1_copy1

0xd562,	// (0x0003b8ce) main_cset_text_pane_t2_copy1

0xd570,	// (0x0003b8dc) main_cset_text_pane_t3_copy1

0xd57e,	// (0x0003b8ea) main_cset_text_pane_t4_copy1

0xd58c,	// (0x0003b8f8) main_cset_text_pane_t5_copy1

0xdd65,	// (0x0003c0d1) main_cset_text_pane_t6_copy1

0xdd73,	// (0x0003c0df) main_cset_text_pane_t7_copy1

0x78ca,	// (0x00035c36) main_cset_text2_pane_t1_copy1

0x197b,	// (0x0002fce7) main_ncimui_pane

0x0733,	// (0x0002ea9f) popup_query_ncimui_window_ParamLimits

0x0733,	// (0x0002ea9f) popup_query_ncimui_window

0xcb79,	// (0x0003aee5) field_cale_ev2_pane_g4_ParamLimits

0xcb79,	// (0x0003aee5) field_cale_ev2_pane_g4

0x6086,	// (0x000343f2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6086,	// (0x000343f2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0003dbe6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0003dbe6) cell_video_dialer_keypad_pane_g

0x609e,	// (0x0003440a) cell_video_dialer_keypad_pane_t1

0x9c9f,	// (0x0003800b) bg_popup_window_pane_cp012

0xacaa,	// (0x00039016) heading_pane_cp06

0xdd9f,	// (0x0003c10b) ncim_query_content_pane

0x9c9f,	// (0x0003800b) bg_popup_heading_pane_cp01

0xdda7,	// (0x0003c113) ncim_heading_pane_t1

0xddb5,	// (0x0003c121) ncim_indicator_popup_pane

0xddc7,	// (0x0003c133) ncim_query_button_pane

0xdddb,	// (0x0003c147) ncim_query_content_pane_t1

0xdded,	// (0x0003c159) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x0003df50) ncim_query_content_pane_t

0xde27,	// (0x0003c193) ncim_query_list_pane

0xde39,	// (0x0003c1a5) ncim_query_popup_pane

0xddb5,	// (0x0003c121) ncim_indicator_popup_pane_ParamLimits

0x7d49,	// (0x000360b5) ncim_query_content_pane_g1_ParamLimits

0x7d49,	// (0x000360b5) ncim_query_content_pane_g1

0xdddb,	// (0x0003c147) ncim_query_content_pane_t1_ParamLimits

0xdded,	// (0x0003c159) ncim_query_content_pane_t2_ParamLimits

0x7d55,	// (0x000360c1) ncim_query_content_pane_t3_ParamLimits

0x7d55,	// (0x000360c1) ncim_query_content_pane_t3

0x7d7d,	// (0x000360e9) ncim_query_content_pane_t4_ParamLimits

0x7d7d,	// (0x000360e9) ncim_query_content_pane_t4

0x7da5,	// (0x00036111) ncim_query_content_pane_t5_ParamLimits

0x7da5,	// (0x00036111) ncim_query_content_pane_t5

0xddff,	// (0x0003c16b) ncim_query_content_pane_t6_ParamLimits

0xddff,	// (0x0003c16b) ncim_query_content_pane_t6

0xfbe4,	// (0x0003df50) ncim_query_content_pane_t_ParamLimits

0xde27,	// (0x0003c193) ncim_query_list_pane_ParamLimits

0xde39,	// (0x0003c1a5) ncim_query_popup_pane_ParamLimits

0xde4d,	// (0x0003c1b9) wait_bar_pane_cp04

0x9c9f,	// (0x0003800b) input_focus_pane_cp011

0xde55,	// (0x0003c1c1) ncim_query_popup_pane_t1

0xde63,	// (0x0003c1cf) ncim_list_query_list_pane_ParamLimits

0xde63,	// (0x0003c1cf) ncim_list_query_list_pane

0x9c9f,	// (0x0003800b) bg_button_pane_cp027

0xde70,	// (0x0003c1dc) ncim_query_button_pane_g1

0x9c9f,	// (0x0003800b) list_highlight_pane_cp012

0xde7a,	// (0x0003c1e6) ncim_list_query_list_pane_g1

0xde82,	// (0x0003c1ee) ncim_list_query_list_pane_t1

0x6530,	// (0x0003489c) cam4_indicators_pane_g3_ParamLimits

0x6530,	// (0x0003489c) cam4_indicators_pane_g3

0x65b0,	// (0x0003491c) vid4_indicators_pane_g5_ParamLimits

0x65b0,	// (0x0003491c) vid4_indicators_pane_g5

0x73b8,	// (0x00035724) vid4_progress_pane_g5_ParamLimits

0x73b8,	// (0x00035724) vid4_progress_pane_g5

0x7c34,	// (0x00035fa0) main_ncimui_pane_g1

0x7c9d,	// (0x00036009) ncimui_group_query_pane_ParamLimits

0x7c9d,	// (0x00036009) ncimui_group_query_pane

0x7ce5,	// (0x00036051) ncimui_list_pane_ParamLimits

0x7ce5,	// (0x00036051) ncimui_list_pane

0x7d0c,	// (0x00036078) ncimui_text_pane_ParamLimits

0x7d0c,	// (0x00036078) ncimui_text_pane

0x7dcd,	// (0x00036139) ncimui_text_pane_t1_ParamLimits

0x7dcd,	// (0x00036139) ncimui_text_pane_t1

0xde90,	// (0x0003c1fc) ncimui_list_single_graphic_pane_ParamLimits

0xde90,	// (0x0003c1fc) ncimui_list_single_graphic_pane

0x7deb,	// (0x00036157) ncimui_query_pane_ParamLimits

0x7deb,	// (0x00036157) ncimui_query_pane

0x9c9f,	// (0x0003800b) list_highlight_pane_cp013

0xdea0,	// (0x0003c20c) ncim_list_query_list_pane_t1_copy1

0xde7a,	// (0x0003c1e6) ncim_list_single_graphic_pane_g1

0x7dfe,	// (0x0003616a) ncim_query_button_pane_cp01

0x7e0a,	// (0x00036176) ncim_query_entry_pane_ParamLimits

0x7e0a,	// (0x00036176) ncim_query_entry_pane

0x7e1d,	// (0x00036189) ncimui_query_pane_g1

0x7e29,	// (0x00036195) ncimui_query_pane_t1_ParamLimits

0x7e29,	// (0x00036195) ncimui_query_pane_t1

0xab27,	// (0x00038e93) input_focus_pane_cp012

0xdeae,	// (0x0003c21a) ncim_query_entry_pane_t1

0xa3dc,	// (0x00038748) main_im_pane_ParamLimits

0x197b,	// (0x0002fce7) main_mobtv_pane_ParamLimits

0x197b,	// (0x0002fce7) main_mobtv_pane

0x79f4,	// (0x00035d60) main_cset6_slider_pane_g18_ParamLimits

0x79f4,	// (0x00035d60) main_cset6_slider_pane_g18

0x7a00,	// (0x00035d6c) main_cset6_slider_pane_g19_ParamLimits

0x7a00,	// (0x00035d6c) main_cset6_slider_pane_g19

0x7e42,	// (0x000361ae) bg_main_mobtv_pane_ParamLimits

0x7e42,	// (0x000361ae) bg_main_mobtv_pane

0x7e50,	// (0x000361bc) main_mobtv_info_pane

0x7e59,	// (0x000361c5) main_mobtv_loading_pane_ParamLimits

0x7e59,	// (0x000361c5) main_mobtv_loading_pane

0xdec0,	// (0x0003c22c) main_mobtv_pg_channel_list_pane

0xdeca,	// (0x0003c236) main_mobtv_pg_hdr_pane

0x7e66,	// (0x000361d2) main_mobtv_programe_curr_pane_ParamLimits

0x7e66,	// (0x000361d2) main_mobtv_programe_curr_pane

0x7e73,	// (0x000361df) main_mobtv_programe_next_pane_ParamLimits

0x7e73,	// (0x000361df) main_mobtv_programe_next_pane

0xded3,	// (0x0003c23f) popup_mobtv_noti_window

0xc8b1,	// (0x0003ac1d) main_tv_pg_hdr_pane_g1

0xdedb,	// (0x0003c247) main_tv_pg_hdr_pane_g2

0xdee3,	// (0x0003c24f) main_tv_pg_hdr_pane_g3

0xdeeb,	// (0x0003c257) main_tv_pg_hdr_pane_g4

0xdef3,	// (0x0003c25f) main_tv_pg_hdr_pane_g5

0xdefd,	// (0x0003c269) main_tv_pg_hdr_pane_g6

0xdf07,	// (0x0003c273) main_tv_pg_hdr_pane_g7

0xdf11,	// (0x0003c27d) main_tv_pg_hdr_pane_g8

0xdf1b,	// (0x0003c287) main_tv_pg_hdr_pane_g9

0xdf25,	// (0x0003c291) main_tv_pg_hdr_pane_g10

0xdf2f,	// (0x0003c29b) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x0003df5d) main_tv_pg_hdr_pane_g

0xdf39,	// (0x0003c2a5) main_tv_pg_hdr_pane_t1

0xdf47,	// (0x0003c2b3) main_tv_pg_hdr_pane_t2

0xdf55,	// (0x0003c2c1) main_tv_pg_hdr_pane_t3

0xdf65,	// (0x0003c2d1) main_tv_pg_hdr_pane_t4

0xdf75,	// (0x0003c2e1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x0003df74) main_tv_pg_hdr_pane_t

0xdf85,	// (0x0003c2f1) single_mobtv_pg_channel_pane_ParamLimits

0xdf85,	// (0x0003c2f1) single_mobtv_pg_channel_pane

0xdf97,	// (0x0003c303) single_mobtv_pg_channel_table_pane

0xdfa0,	// (0x0003c30c) single_mobtv_pg_channel_thumb_pane

0xdfa9,	// (0x0003c315) single_tv_pg_channel_pane_g1

0xdfb2,	// (0x0003c31e) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x0003df7f) single_tv_pg_channel_pane_g

0xcb14,	// (0x0003ae80) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcb14,	// (0x0003ae80) bg_single_mobtv_pg_channel_thumb_pane

0xdfbb,	// (0x0003c327) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfbb,	// (0x0003c327) single_mobtv_pg_channel_thumb_pane_g1

0xdfc9,	// (0x0003c335) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfc9,	// (0x0003c335) single_mobtv_pg_channel_thumb_pane_g2

0xdfd5,	// (0x0003c341) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfd5,	// (0x0003c341) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x0003df84) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x0003df84) single_mobtv_pg_channel_thumb_pane_g

0xdfe1,	// (0x0003c34d) single_mobtv_pg_channel_thumb_pane_t1

0xdfef,	// (0x0003c35b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x0003df8b) single_mobtv_pg_channel_thumb_pane_t

0xc8b1,	// (0x0003ac1d) bg_single_mobtv_pg_channel_table_pane_g1

0xc8b1,	// (0x0003ac1d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0003da2d) bg_single_mobtv_pg_channel_table_pane_g

0xdffd,	// (0x0003c369) single_mobtv_pg_channel_table_pane_t1

0xe00b,	// (0x0003c377) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x0003df90) single_mobtv_pg_channel_table_pane_t

0x7e88,	// (0x000361f4) main_mobtv_info_pane_g1_ParamLimits

0x7e88,	// (0x000361f4) main_mobtv_info_pane_g1

0x7ea6,	// (0x00036212) main_mobtv_info_pane_t1_ParamLimits

0x7ea6,	// (0x00036212) main_mobtv_info_pane_t1

0x7f1e,	// (0x0003628a) main_mobtv_info_pane_t2_ParamLimits

0x7f1e,	// (0x0003628a) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x0003df9a) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x0003df9a) main_mobtv_info_pane_t

0x7fad,	// (0x00036319) wait_bar_pane_cp05

0x7fbf,	// (0x0003632b) main_mobtv_loading_pane_g1_ParamLimits

0x7fbf,	// (0x0003632b) main_mobtv_loading_pane_g1

0x7fd2,	// (0x0003633e) main_mobtv_loading_pane_g2_ParamLimits

0x7fd2,	// (0x0003633e) main_mobtv_loading_pane_g2

0x7fde,	// (0x0003634a) main_mobtv_loading_pane_g3_ParamLimits

0x7fde,	// (0x0003634a) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x0003dfa1) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x0003dfa1) main_mobtv_loading_pane_g

0xe019,	// (0x0003c385) main_mobtv_loading_pane_t1_ParamLimits

0xe019,	// (0x0003c385) main_mobtv_loading_pane_t1

0xe031,	// (0x0003c39d) main_mobtv_loading_pane_t2_ParamLimits

0xe031,	// (0x0003c39d) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x0003dfa8) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x0003dfa8) main_mobtv_loading_pane_t

0x7ff1,	// (0x0003635d) wait_bar_pane_cp06_ParamLimits

0x7ff1,	// (0x0003635d) wait_bar_pane_cp06

0xe055,	// (0x0003c3c1) main_mobtv_programe_curr_pane_t1

0xe063,	// (0x0003c3cf) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x0003dfad) main_mobtv_programe_curr_pane_t

0xe071,	// (0x0003c3dd) main_mobtv_programe_next_pane_t1

0xe07f,	// (0x0003c3eb) main_mobtv_programe_next_pane_t2

0xe08d,	// (0x0003c3f9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x0003dfb2) main_mobtv_programe_next_pane_t

0x9c9f,	// (0x0003800b) bg_popup_mobtv_noti_window_pane

0xe09b,	// (0x0003c407) popup_mobtv_noti_window_g1

0xe0a3,	// (0x0003c40f) popup_mobtv_noti_window_t1

0xe0b1,	// (0x0003c41d) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x0003dfb9) popup_mobtv_noti_window_t

0xc8b1,	// (0x0003ac1d) bg_popup_mobtv_noti_window_pane_g1

0x1995,	// (0x0002fd01) sc_clock_pane

0x1995,	// (0x0002fd01) main_fs_bigclock_pane

0x7641,	// (0x000359ad) blid2_tripm_pane_t4_ParamLimits

0x7641,	// (0x000359ad) blid2_tripm_pane_t4

0x8000,	// (0x0003636c) sc_clock_pane_g1_ParamLimits

0x8000,	// (0x0003636c) sc_clock_pane_g1

0x8012,	// (0x0003637e) sc_clock_pane_t1_ParamLimits

0x8012,	// (0x0003637e) sc_clock_pane_t1

0x8034,	// (0x000363a0) sc_clock_pane_t2_ParamLimits

0x8034,	// (0x000363a0) sc_clock_pane_t2

0x804c,	// (0x000363b8) sc_clock_pane_t3_ParamLimits

0x804c,	// (0x000363b8) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x0003dfbe) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x0003dfbe) sc_clock_pane_t

0x9119,	// (0x00037485) main_fs_bigclock_indicator_pane_ParamLimits

0x9119,	// (0x00037485) main_fs_bigclock_indicator_pane

0x80f2,	// (0x0003645e) main_fs_bigclock_pane_g1_ParamLimits

0x80f2,	// (0x0003645e) main_fs_bigclock_pane_g1

0x9125,	// (0x00037491) main_fs_bigclock_pane_t1_ParamLimits

0x9125,	// (0x00037491) main_fs_bigclock_pane_t1

0x9137,	// (0x000374a3) main_fs_bigclock_pane_t2_ParamLimits

0x9137,	// (0x000374a3) main_fs_bigclock_pane_t2

0x914b,	// (0x000374b7) main_fs_bigclock_pane_t3_ParamLimits

0x914b,	// (0x000374b7) main_fs_bigclock_pane_t3

0x0002,

0xfe5b,	// (0x0003e1c7) main_fs_bigclock_pane_t_ParamLimits

0xfe5b,	// (0x0003e1c7) main_fs_bigclock_pane_t

0xec2f,	// (0x0003cf9b) main_fs_bigclock_indicator_pane_g1

0xddcf,	// (0x0003c13b) ncim_query_content_pane_g2_ParamLimits

0xddcf,	// (0x0003c13b) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x0003df4b) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x0003df4b) ncim_query_content_pane_g

0x8065,	// (0x000363d1) sc_clock_pane_t4_ParamLimits

0x8065,	// (0x000363d1) sc_clock_pane_t4

0x197b,	// (0x0002fce7) main_radioblah_pane

0x6480,	// (0x000347ec) cell_call4_button_pane_t1_copy1_ParamLimits

0x6480,	// (0x000347ec) cell_call4_button_pane_t1_copy1

0x7c4c,	// (0x00035fb8) main_ncimui_pane_t1_ParamLimits

0x7c4c,	// (0x00035fb8) main_ncimui_pane_t1

0x7c66,	// (0x00035fd2) main_ncimui_pane_t2_ParamLimits

0x7c66,	// (0x00035fd2) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x0003df44) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x0003df44) main_ncimui_pane_t

0xe1f6,	// (0x0003c562) main_radioblah_anim_pane_ParamLimits

0xe1f6,	// (0x0003c562) main_radioblah_anim_pane

0xe207,	// (0x0003c573) main_radioblah_info_pane_ParamLimits

0xe207,	// (0x0003c573) main_radioblah_info_pane

0xe21b,	// (0x0003c587) main_radioblah_pane_t1_ParamLimits

0xe21b,	// (0x0003c587) main_radioblah_pane_t1

0xe237,	// (0x0003c5a3) main_radioblah_pane_t2_ParamLimits

0xe237,	// (0x0003c5a3) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x0003dfdf) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x0003dfdf) main_radioblah_pane_t

0x8151,	// (0x000364bd) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8151,	// (0x000364bd) main_radioblah_rocker_ctrl_pane

0xe27f,	// (0x0003c5eb) main_radioblah_info_pane_t1_ParamLimits

0xe27f,	// (0x0003c5eb) main_radioblah_info_pane_t1

0x81a9,	// (0x00036515) main_radioblah_info_pane_t2_ParamLimits

0x81a9,	// (0x00036515) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x0003dfe8) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x0003dfe8) main_radioblah_info_pane_t

0xc8b1,	// (0x0003ac1d) main_radioblah_rocker_ctrl_pane_g1

0x8259,	// (0x000365c5) main_radioblah_rocker_ctrl_pane_g2

0x8261,	// (0x000365cd) main_radioblah_rocker_ctrl_pane_g3

0x8269,	// (0x000365d5) main_radioblah_rocker_ctrl_pane_g4

0x8271,	// (0x000365dd) main_radioblah_rocker_ctrl_pane_g5

0x8279,	// (0x000365e5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x0003dff1) main_radioblah_rocker_ctrl_pane_g

0x78ca,	// (0x00035c36) main_cset_text2_pane_t1_copy1_ParamLimits

0x64de,	// (0x0003484a) cam4_image_uncrop_qvga_pane

0x6559,	// (0x000348c5) vid4_image_uncrop_qcif_pane

0x77cc,	// (0x00035b38) cam6_image_uncrop_qvga_pane_ParamLimits

0x77cc,	// (0x00035b38) cam6_image_uncrop_qvga_pane

0xdad6,	// (0x0003be42) vid6_image_uncrop_qcif_pane_ParamLimits

0xdad6,	// (0x0003be42) vid6_image_uncrop_qcif_pane

0x9c9f,	// (0x0003800b) bg_popup_preview_window_pane_cp03

0xdd81,	// (0x0003c0ed) list_cset_text2_pane

0xdd89,	// (0x0003c0f5) main_cset6_text2_pane_g1

0xdd91,	// (0x0003c0fd) main_cset6_text2_pane_t1

0x8281,	// (0x000365ed) list_cset_text2_pane_t1_ParamLimits

0x8281,	// (0x000365ed) list_cset_text2_pane_t1

0x197b,	// (0x0002fce7) main_radioblah_pane_ParamLimits

0x7f99,	// (0x00036305) main_mobtv_info_pane_t3_ParamLimits

0x7f99,	// (0x00036305) main_mobtv_info_pane_t3

0x813f,	// (0x000364ab) main_radioblah_pane_g1

0x8179,	// (0x000364e5) main_radioblah_info_pane_g1

0x81fe,	// (0x0003656a) main_radioblah_info_pane_t3_ParamLimits

0x81fe,	// (0x0003656a) main_radioblah_info_pane_t3

0x35d1,	// (0x0003193d) highlight_cell_cale_month_pane_ParamLimits

0x35d1,	// (0x0003193d) highlight_cell_cale_month_pane

0x1995,	// (0x0002fd01) main_phob_fisheye_pane

0xcc1c,	// (0x0003af88) scroll_pane_cp0031_ParamLimits

0xcc1c,	// (0x0003af88) scroll_pane_cp0031

0xdbe4,	// (0x0003bf50) wait_bar_pane_cp08_ParamLimits

0x794f,	// (0x00035cbb) cset_list_set_pane_copy1_ParamLimits

0xe2b9,	// (0x0003c625) highlight_cell_cale_month_pane_g1

0x829a,	// (0x00036606) highlight_cell_cale_month_pane_t1

0xd865,	// (0x0003bbd1) list_gen_pane_cp01

0xd3cb,	// (0x0003b737) scroll_pane_01

0xe2c1,	// (0x0003c62d) list_single_double_fisheye_pane

0x82a8,	// (0x00036614) list_double_fisheye_pane_g1_ParamLimits

0x82a8,	// (0x00036614) list_double_fisheye_pane_g1

0x82b4,	// (0x00036620) list_double_fisheye_pane_g2_ParamLimits

0x82b4,	// (0x00036620) list_double_fisheye_pane_g2

0x82c8,	// (0x00036634) list_double_fisheye_pane_g3_ParamLimits

0x82c8,	// (0x00036634) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x0003dffe) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x0003dffe) list_double_fisheye_pane_g

0x82f1,	// (0x0003665d) list_double_fisheye_pane_t1_ParamLimits

0x82f1,	// (0x0003665d) list_double_fisheye_pane_t1

0x830c,	// (0x00036678) list_double_fisheye_pane_t2_ParamLimits

0x830c,	// (0x00036678) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x0003e009) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x0003e009) list_double_fisheye_pane_t

0x1995,	// (0x0002fd01) main_call5_pane

0x8090,	// (0x000363fc) sc_swipe_pane_ParamLimits

0x8090,	// (0x000363fc) sc_swipe_pane

0x8341,	// (0x000366ad) call5_image_pane_ParamLimits

0x8341,	// (0x000366ad) call5_image_pane

0x835e,	// (0x000366ca) call5_swipe_1_pane_ParamLimits

0x835e,	// (0x000366ca) call5_swipe_1_pane

0x8371,	// (0x000366dd) call5_swipe_2_pane_ParamLimits

0x8371,	// (0x000366dd) call5_swipe_2_pane

0x839c,	// (0x00036708) popup_call5_audio_first_window_ParamLimits

0x839c,	// (0x00036708) popup_call5_audio_first_window

0xcb14,	// (0x0003ae80) call5_swipe_1_pane_g1_ParamLimits

0xcb14,	// (0x0003ae80) call5_swipe_1_pane_g1

0xe2ca,	// (0x0003c636) call5_swipe_1_pane_g2_ParamLimits

0xe2ca,	// (0x0003c636) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x0003e00e) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x0003e00e) call5_swipe_1_pane_g

0xe2d6,	// (0x0003c642) call5_swipe_1_pane_t1_ParamLimits

0xe2d6,	// (0x0003c642) call5_swipe_1_pane_t1

0xcb14,	// (0x0003ae80) call5_swipe_2_pane_g1_ParamLimits

0xcb14,	// (0x0003ae80) call5_swipe_2_pane_g1

0xe2eb,	// (0x0003c657) call5_swipe_2_pane_g2_ParamLimits

0xe2eb,	// (0x0003c657) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x0003e013) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x0003e013) call5_swipe_2_pane_g

0xe2f7,	// (0x0003c663) call5_swipe_2_pane_t1_ParamLimits

0xe2f7,	// (0x0003c663) call5_swipe_2_pane_t1

0xe30c,	// (0x0003c678) sc_swipe_pane_g1_ParamLimits

0xe30c,	// (0x0003c678) sc_swipe_pane_g1

0xe319,	// (0x0003c685) sc_swipe_pane_g2_ParamLimits

0xe319,	// (0x0003c685) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x0003e018) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x0003e018) sc_swipe_pane_g

0xe325,	// (0x0003c691) sc_swipe_pane_t1_ParamLimits

0xe325,	// (0x0003c691) sc_swipe_pane_t1

0x1995,	// (0x0002fd01) main_cmail_launcher_pane

0x83ad,	// (0x00036719) aid_size_cell_cmail_l_ParamLimits

0x83ad,	// (0x00036719) aid_size_cell_cmail_l

0x83bb,	// (0x00036727) grid_cmail_l_pane_ParamLimits

0x83bb,	// (0x00036727) grid_cmail_l_pane

0x83d5,	// (0x00036741) cell_cmail_l_pane_ParamLimits

0x83d5,	// (0x00036741) cell_cmail_l_pane

0xe33a,	// (0x0003c6a6) cell_cmail_l_pane_g1_ParamLimits

0xe33a,	// (0x0003c6a6) cell_cmail_l_pane_g1

0xe346,	// (0x0003c6b2) cell_cmail_l_pane_t1_ParamLimits

0xe346,	// (0x0003c6b2) cell_cmail_l_pane_t1

0xe35c,	// (0x0003c6c8) cell_cmail_l_pane_t2_ParamLimits

0xe35c,	// (0x0003c6c8) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x0003e01d) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x0003e01d) cell_cmail_l_pane_t

0xab27,	// (0x00038e93) grid_highlight_pane_cp018_ParamLimits

0xab27,	// (0x00038e93) grid_highlight_pane_cp018

0x0095,	// (0x0002e401) main2_pane_ParamLimits

0x0095,	// (0x0002e401) main2_pane

0xa47e,	// (0x000387ea) popup_sp_fs_action_menu_bg_pane_g1

0xa486,	// (0x000387f2) popup_sp_fs_action_menu_bg_pane_g2

0xa48e,	// (0x000387fa) popup_sp_fs_action_menu_bg_pane_g3

0xa496,	// (0x00038802) popup_sp_fs_action_menu_bg_pane_g4

0xa49e,	// (0x0003880a) popup_sp_fs_action_menu_bg_pane_g5

0xa4a6,	// (0x00038812) popup_sp_fs_action_menu_bg_pane_g6

0xa4ae,	// (0x0003881a) popup_sp_fs_action_menu_bg_pane_g7

0xa4b6,	// (0x00038822) popup_sp_fs_action_menu_bg_pane_g8

0xa4be,	// (0x0003882a) popup_sp_fs_action_menu_bg_pane_g9

0xa4c6,	// (0x00038832) popup_sp_fs_action_menu_bg_pane_g10

0xa4c6,	// (0x00038832) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0003d4db) popup_sp_fs_action_menu_bg_pane_g

0x2597,	// (0x00030903) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x2_t3_g3_g1

0x25a3,	// (0x0003090f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x25a3,	// (0x0003090f) list_medium_line_x2_t3_g3_g2

0x25af,	// (0x0003091b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x25af,	// (0x0003091b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0003d589) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0003d589) list_medium_line_x2_t3_g3_g

0x25bb,	// (0x00030927) list_medium_line_x2_t3_g3_t1_ParamLimits

0x25bb,	// (0x00030927) list_medium_line_x2_t3_g3_t1

0x25d0,	// (0x0003093c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x25d0,	// (0x0003093c) list_medium_line_x2_t3_g3_t2

0x25e4,	// (0x00030950) list_medium_line_x2_t3_g3_t3_ParamLimits

0x25e4,	// (0x00030950) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0003d590) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0003d590) list_medium_line_x2_t3_g3_t

0x2597,	// (0x00030903) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x2_t3_g2_g1

0x25af,	// (0x0003091b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x25af,	// (0x0003091b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0003d597) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0003d597) list_medium_line_x2_t3_g2_g

0x25f9,	// (0x00030965) list_medium_line_x2_t3_g2_t1_ParamLimits

0x25f9,	// (0x00030965) list_medium_line_x2_t3_g2_t1

0x260f,	// (0x0003097b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x260f,	// (0x0003097b) list_medium_line_x2_t3_g2_t2

0x2621,	// (0x0003098d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2621,	// (0x0003098d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0003d59c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0003d59c) list_medium_line_x2_t3_g2_t

0x2597,	// (0x00030903) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x2_t4_g4_g1

0x263e,	// (0x000309aa) list_medium_line_x2_t4_g4_g2_ParamLimits

0x263e,	// (0x000309aa) list_medium_line_x2_t4_g4_g2

0x25a3,	// (0x0003090f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x25a3,	// (0x0003090f) list_medium_line_x2_t4_g4_g3

0x264a,	// (0x000309b6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x264a,	// (0x000309b6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0003d5a3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0003d5a3) list_medium_line_x2_t4_g4_g

0x2656,	// (0x000309c2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2656,	// (0x000309c2) list_medium_line_x2_t4_g4_t1

0x2670,	// (0x000309dc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2670,	// (0x000309dc) list_medium_line_x2_t4_g4_t2

0x2686,	// (0x000309f2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2686,	// (0x000309f2) list_medium_line_x2_t4_g4_t3

0x269b,	// (0x00030a07) list_medium_line_x2_t4_g4_t4_ParamLimits

0x269b,	// (0x00030a07) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0003d5ac) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0003d5ac) list_medium_line_x2_t4_g4_t

0x2597,	// (0x00030903) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x2_t2_g4_g1

0x263e,	// (0x000309aa) list_medium_line_x2_t2_g4_g2_ParamLimits

0x263e,	// (0x000309aa) list_medium_line_x2_t2_g4_g2

0x25a3,	// (0x0003090f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x25a3,	// (0x0003090f) list_medium_line_x2_t2_g4_g3

0x25af,	// (0x0003091b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x25af,	// (0x0003091b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0003d613) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0003d613) list_medium_line_x2_t2_g4_g

0x35f7,	// (0x00031963) list_medium_line_x2_t2_g4_t1_ParamLimits

0x35f7,	// (0x00031963) list_medium_line_x2_t2_g4_t1

0x25e4,	// (0x00030950) list_medium_line_x2_t2_g4_t2_ParamLimits

0x25e4,	// (0x00030950) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0003d61c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0003d61c) list_medium_line_x2_t2_g4_t

0x2597,	// (0x00030903) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x2_t2_g3_g1

0x25a3,	// (0x0003090f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x25a3,	// (0x0003090f) list_medium_line_x2_t2_g3_g2

0x25af,	// (0x0003091b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x25af,	// (0x0003091b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0003d589) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0003d589) list_medium_line_x2_t2_g3_g

0x360c,	// (0x00031978) list_medium_line_x2_t2_g3_t1_ParamLimits

0x360c,	// (0x00031978) list_medium_line_x2_t2_g3_t1

0x25e4,	// (0x00030950) list_medium_line_x2_t2_g3_t2_ParamLimits

0x25e4,	// (0x00030950) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0003d621) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0003d621) list_medium_line_x2_t2_g3_t

0x3757,	// (0x00031ac3) main_sp_fs_list_pane_ParamLimits

0x3757,	// (0x00031ac3) main_sp_fs_list_pane

0xc87e,	// (0x0003abea) sp_fs_scroll_pane_ParamLimits

0xc87e,	// (0x0003abea) sp_fs_scroll_pane

0x3763,	// (0x00031acf) list_medium_line_x2_t3_t1

0x3773,	// (0x00031adf) list_medium_line_x2_t3_t2

0x3781,	// (0x00031aed) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0003d66c) list_medium_line_x2_t3_t

0x378f,	// (0x00031afb) list_medium_line_x3_t4_t1

0x379f,	// (0x00031b0b) list_medium_line_x3_t4_t2

0x37ad,	// (0x00031b19) list_medium_line_x3_t4_t3

0x3781,	// (0x00031aed) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0003d673) list_medium_line_x3_t4_t

0x37bb,	// (0x00031b27) list_medium_line_x4_t5_t1

0x37cb,	// (0x00031b37) list_medium_line_x4_t5_t2

0x37ad,	// (0x00031b19) list_medium_line_x4_t5_t3

0x37d9,	// (0x00031b45) list_medium_line_x4_t5_t4

0x3781,	// (0x00031aed) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0003d67c) list_medium_line_x4_t5_t

0x2597,	// (0x00030903) list_medium_line_t4_g4_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_t4_g4_g1

0x37e7,	// (0x00031b53) list_medium_line_t4_g4_g2_ParamLimits

0x37e7,	// (0x00031b53) list_medium_line_t4_g4_g2

0x37f3,	// (0x00031b5f) list_medium_line_t4_g4_g3_ParamLimits

0x37f3,	// (0x00031b5f) list_medium_line_t4_g4_g3

0x25af,	// (0x0003091b) list_medium_line_t4_g4_g4_ParamLimits

0x25af,	// (0x0003091b) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0003d687) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0003d687) list_medium_line_t4_g4_g

0x37ff,	// (0x00031b6b) list_medium_line_t4_g4_t1_ParamLimits

0x37ff,	// (0x00031b6b) list_medium_line_t4_g4_t1

0x3814,	// (0x00031b80) list_medium_line_t4_g4_t2_ParamLimits

0x3814,	// (0x00031b80) list_medium_line_t4_g4_t2

0x3829,	// (0x00031b95) list_medium_line_t4_g4_t3_ParamLimits

0x3829,	// (0x00031b95) list_medium_line_t4_g4_t3

0x25e4,	// (0x00030950) list_medium_line_t4_g4_t4_ParamLimits

0x25e4,	// (0x00030950) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0003d690) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0003d690) list_medium_line_t4_g4_t

0x3964,	// (0x00031cd0) chi_dic_find_pane_g1

0x04fd,	// (0x0002e869) main_tport_pane

0x6d29,	// (0x00035095) list_medium_line_plain_t1

0x6d8b,	// (0x000350f7) list_medium_line_t2_g2_g1_ParamLimits

0x6d8b,	// (0x000350f7) list_medium_line_t2_g2_g1

0x6d97,	// (0x00035103) list_medium_line_t2_g2_g2_ParamLimits

0x6d97,	// (0x00035103) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0003dd55) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0003dd55) list_medium_line_t2_g2_g

0x6da3,	// (0x0003510f) list_medium_line_t2_g2_t1_ParamLimits

0x6da3,	// (0x0003510f) list_medium_line_t2_g2_t1

0x6dbd,	// (0x00035129) list_medium_line_t2_g2_t2_ParamLimits

0x6dbd,	// (0x00035129) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0003dd5a) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0003dd5a) list_medium_line_t2_g2_t

0xd86e,	// (0x0003bbda) aid_sp_fs_list_icon_a_sm

0xd876,	// (0x0003bbe2) aid_sp_fs_list_icon_d

0xd87e,	// (0x0003bbea) aid_sp_fs_text_primary

0xd887,	// (0x0003bbf3) aid_sp_fs_text_secondary

0x73ee,	// (0x0003575a) list_medium_line

0x73ee,	// (0x0003575a) list_medium_line_g2

0x73ee,	// (0x0003575a) list_medium_line_g3

0x73ee,	// (0x0003575a) list_medium_line_plain

0x73ee,	// (0x0003575a) list_medium_line_plain_t2

0x73ee,	// (0x0003575a) list_medium_line_plain_t3

0x73ee,	// (0x0003575a) list_medium_line_right_icon

0x73ee,	// (0x0003575a) list_medium_line_right_iconx2

0x73ee,	// (0x0003575a) list_medium_line_t2

0x73ee,	// (0x0003575a) list_medium_line_t2_g2

0x73ee,	// (0x0003575a) list_medium_line_t2_g3

0x73ee,	// (0x0003575a) list_medium_line_t2_right_icon

0x73ee,	// (0x0003575a) list_medium_line_t2_right_iconx2

0x73ee,	// (0x0003575a) list_medium_line_t3

0x73ee,	// (0x0003575a) list_medium_line_t3_g2

0x73ee,	// (0x0003575a) list_medium_line_t3_g3

0x73ee,	// (0x0003575a) list_medium_line_t3_right_iconx2

0x73f7,	// (0x00035763) list_medium_line_t4_g4

0x7400,	// (0x0003576c) list_medium_line_x2

0x7400,	// (0x0003576c) list_medium_line_x2_t2_g2

0x7400,	// (0x0003576c) list_medium_line_x2_t2_g3

0x7400,	// (0x0003576c) list_medium_line_x2_t2_g4

0x7400,	// (0x0003576c) list_medium_line_x2_t3

0x7400,	// (0x0003576c) list_medium_line_x2_t3_g2

0x7400,	// (0x0003576c) list_medium_line_x2_t3_g3

0x7400,	// (0x0003576c) list_medium_line_x2_t3_g4

0x7400,	// (0x0003576c) list_medium_line_x2_t4_g2

0x7400,	// (0x0003576c) list_medium_line_x2_t4_g4

0x7409,	// (0x00035775) list_medium_line_x3

0x7409,	// (0x00035775) list_medium_line_x3_t4

0x7409,	// (0x00035775) list_medium_line_x3_t4_g4

0x73f7,	// (0x00035763) list_medium_line_x4_t4

0x73f7,	// (0x00035763) list_medium_line_x4_t4_g7

0x73f7,	// (0x00035763) list_medium_line_x4_t5

0x7412,	// (0x0003577e) list_single_fs_dyc_pane_ParamLimits

0x7412,	// (0x0003577e) list_single_fs_dyc_pane

0x2597,	// (0x00030903) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x4_t4_g7_g1

0x7b48,	// (0x00035eb4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7b48,	// (0x00035eb4) list_medium_line_x4_t4_g7_g2

0x7b54,	// (0x00035ec0) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7b54,	// (0x00035ec0) list_medium_line_x4_t4_g7_g3

0x7b63,	// (0x00035ecf) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7b63,	// (0x00035ecf) list_medium_line_x4_t4_g7_g4

0x7b6f,	// (0x00035edb) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7b6f,	// (0x00035edb) list_medium_line_x4_t4_g7_g5

0x7b7e,	// (0x00035eea) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7b7e,	// (0x00035eea) list_medium_line_x4_t4_g7_g6

0x7b8d,	// (0x00035ef9) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7b8d,	// (0x00035ef9) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x0003df25) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x0003df25) list_medium_line_x4_t4_g7_g

0x7b99,	// (0x00035f05) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7b99,	// (0x00035f05) list_medium_line_x4_t4_g7_t1

0x7bae,	// (0x00035f1a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7bae,	// (0x00035f1a) list_medium_line_x4_t4_g7_t2

0x7bc3,	// (0x00035f2f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7bc3,	// (0x00035f2f) list_medium_line_x4_t4_g7_t3

0x7bd8,	// (0x00035f44) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7bd8,	// (0x00035f44) list_medium_line_x4_t4_g7_t4

0x7bea,	// (0x00035f56) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7bea,	// (0x00035f56) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x0003df34) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x0003df34) list_medium_line_x4_t4_g7_t

0x7bfc,	// (0x00035f68) list_single_dyc_row_pane_ParamLimits

0x7bfc,	// (0x00035f68) list_single_dyc_row_pane

0x832e,	// (0x0003669a) call5_gesture_pane_ParamLimits

0x832e,	// (0x0003669a) call5_gesture_pane

0x8384,	// (0x000366f0) call5_windows_pane_ParamLimits

0x8384,	// (0x000366f0) call5_windows_pane

0x83ef,	// (0x0003675b) call5_swipe_1_pane_cp_ParamLimits

0x83ef,	// (0x0003675b) call5_swipe_1_pane_cp

0x83fb,	// (0x00036767) call5_swipe_2_pane_cp_ParamLimits

0x83fb,	// (0x00036767) call5_swipe_2_pane_cp

0xa5aa,	// (0x00038916) call5_image_pane_cp

0x8407,	// (0x00036773) popup_call5_audio_first_window_cp_ParamLimits

0x8407,	// (0x00036773) popup_call5_audio_first_window_cp

0xe30c,	// (0x0003c678) call5_swipe_1_pane_g1_cp_ParamLimits

0xe30c,	// (0x0003c678) call5_swipe_1_pane_g1_cp

0xe379,	// (0x0003c6e5) call5_swipe_1_pane_g2_cp

0xe325,	// (0x0003c691) call5_swipe_1_pane_t1_cp_ParamLimits

0xe325,	// (0x0003c691) call5_swipe_1_pane_t1_cp

0xe30c,	// (0x0003c678) call5_swipe_2_pane_g1_cp_ParamLimits

0xe30c,	// (0x0003c678) call5_swipe_2_pane_g1_cp

0xe381,	// (0x0003c6ed) call5_swipe_2_pane_g2_cp

0xe389,	// (0x0003c6f5) call5_swipe_2_pane_t1_cp_ParamLimits

0xe389,	// (0x0003c6f5) call5_swipe_2_pane_t1_cp

0xab27,	// (0x00038e93) main_sp_fs_email_pane

0xe39e,	// (0x0003c70a) main_sp_fs_listscroll_pane_te

0x8415,	// (0x00036781) popup_sp_fs_action_menu_pane_ParamLimits

0x8415,	// (0x00036781) popup_sp_fs_action_menu_pane

0xc8b1,	// (0x0003ac1d) bg_sp_fs_ctrlbar_pane_g1

0xe3a7,	// (0x0003c713) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3b0,	// (0x0003c71c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3b9,	// (0x0003c725) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc8b1,	// (0x0003ac1d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x0003e022) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc68a,	// (0x0003a9f6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc68a,	// (0x0003a9f6) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3c2,	// (0x0003c72e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3c2,	// (0x0003c72e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3ce,	// (0x0003c73a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3ce,	// (0x0003c73a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x0003e02b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x0003e02b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3da,	// (0x0003c746) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3da,	// (0x0003c746) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8459,	// (0x000367c5) list_medium_line_t2_right_icon_g1

0x8461,	// (0x000367cd) list_medium_line_t2_right_icon_t1

0x8471,	// (0x000367dd) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x0003e030) list_medium_line_t2_right_icon_t

0xc49d,	// (0x0003a809) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc49d,	// (0x0003a809) bg_sp_fs_ctrlbar_pane

0x84cb,	// (0x00036837) main_sp_fs_ctrlbar_button_pane_cp01

0x84d5,	// (0x00036841) main_sp_fs_ctrlbar_ddmenu_pane

0xe42c,	// (0x0003c798) main_sp_fs_ctrlbar_pane_g1

0xe438,	// (0x0003c7a4) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x0003e035) main_sp_fs_ctrlbar_pane_g

0x8513,	// (0x0003687f) main_sp_fs_ctrlbar_pane_t1

0x8552,	// (0x000368be) main_sp_fs_ctrlbar_pane

0x8576,	// (0x000368e2) main_sp_fs_listscroll_pane_te_cp01

0x8596,	// (0x00036902) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8596,	// (0x00036902) popup_sp_fs_action_menu_pane_cp01

0xab27,	// (0x00038e93) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xab27,	// (0x00038e93) bg_sp_fs_highlight_list_pane_cp01

0xe45f,	// (0x0003c7cb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe45f,	// (0x0003c7cb) sp_fs_action_menu_list_gene_pane_g1

0xe46e,	// (0x0003c7da) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe46e,	// (0x0003c7da) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x0003e043) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x0003e043) sp_fs_action_menu_list_gene_pane_g

0xe47b,	// (0x0003c7e7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe47b,	// (0x0003c7e7) sp_fs_action_menu_list_gene_pane_t1

0xe493,	// (0x0003c7ff) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe493,	// (0x0003c7ff) sp_fs_action_menu_list_gene_pane

0xe4b4,	// (0x0003c820) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4b4,	// (0x0003c820) popup_sp_fs_action_menu_bg_pane

0xe4c2,	// (0x0003c82e) sp_fs_action_menu_list_pane_ParamLimits

0xe4c2,	// (0x0003c82e) sp_fs_action_menu_list_pane

0x85c6,	// (0x00036932) sp_fs_scroll_pane_cp01_ParamLimits

0x85c6,	// (0x00036932) sp_fs_scroll_pane_cp01

0x85ec,	// (0x00036958) list_medium_line_plain_t2_t1

0x85fc,	// (0x00036968) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x0003e048) list_medium_line_plain_t2_t

0x860c,	// (0x00036978) list_medium_line_plain_t3_t1

0x861c,	// (0x00036988) list_medium_line_plain_t3_t2

0x862a,	// (0x00036996) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x0003e04d) list_medium_line_plain_t3_t

0x2597,	// (0x00030903) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x2_t2_g2_g1

0x25af,	// (0x0003091b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x25af,	// (0x0003091b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0003d597) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0003d597) list_medium_line_x2_t2_g2_g

0x37ff,	// (0x00031b6b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x37ff,	// (0x00031b6b) list_medium_line_x2_t2_g2_t1

0x25e4,	// (0x00030950) list_medium_line_x2_t2_g2_t2_ParamLimits

0x25e4,	// (0x00030950) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x0003e054) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x0003e054) list_medium_line_x2_t2_g2_t

0x2597,	// (0x00030903) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x2_t4_g2_g1

0x25af,	// (0x0003091b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x25af,	// (0x0003091b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x0003d597) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x0003d597) list_medium_line_x2_t4_g2_g

0x8638,	// (0x000369a4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8638,	// (0x000369a4) list_medium_line_x2_t4_g2_t1

0x8652,	// (0x000369be) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8652,	// (0x000369be) list_medium_line_x2_t4_g2_t2

0x8668,	// (0x000369d4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8668,	// (0x000369d4) list_medium_line_x2_t4_g2_t3

0x25e4,	// (0x00030950) list_medium_line_x2_t4_g2_t4_ParamLimits

0x25e4,	// (0x00030950) list_medium_line_x2_t4_g2_t4

0x0003,

0xfced,	// (0x0003e059) list_medium_line_x2_t4_g2_t_ParamLimits

0xfced,	// (0x0003e059) list_medium_line_x2_t4_g2_t

0x867d,	// (0x000369e9) list_medium_line_t3_right_iconx2_g1

0x8459,	// (0x000367c5) list_medium_line_t3_right_iconx2_g2

0x8685,	// (0x000369f1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf6,	// (0x0003e062) list_medium_line_t3_right_iconx2_g

0x868f,	// (0x000369fb) list_medium_line_t3_right_iconx2_t1

0x869f,	// (0x00036a0b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfd,	// (0x0003e069) list_medium_line_t3_right_iconx2_t

0x2597,	// (0x00030903) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x3_t4_g4_g1

0x25a3,	// (0x0003090f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x25a3,	// (0x0003090f) list_medium_line_x3_t4_g4_g2

0x37e7,	// (0x00031b53) list_medium_line_x3_t4_g4_g3_ParamLimits

0x37e7,	// (0x00031b53) list_medium_line_x3_t4_g4_g3

0x86ad,	// (0x00036a19) list_medium_line_x3_t4_g4_g4_ParamLimits

0x86ad,	// (0x00036a19) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd02,	// (0x0003e06e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd02,	// (0x0003e06e) list_medium_line_x3_t4_g4_g

0x86b9,	// (0x00036a25) list_medium_line_x3_t4_g4_t1_ParamLimits

0x86b9,	// (0x00036a25) list_medium_line_x3_t4_g4_t1

0x86d0,	// (0x00036a3c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86d0,	// (0x00036a3c) list_medium_line_x3_t4_g4_t2

0x3814,	// (0x00031b80) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3814,	// (0x00031b80) list_medium_line_x3_t4_g4_t3

0x86eb,	// (0x00036a57) list_medium_line_x3_t4_g4_t4_ParamLimits

0x86eb,	// (0x00036a57) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0b,	// (0x0003e077) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0b,	// (0x0003e077) list_medium_line_x3_t4_g4_t

0x8708,	// (0x00036a74) list_single_dyc_row_text_pane_t1_ParamLimits

0x8708,	// (0x00036a74) list_single_dyc_row_text_pane_t1

0x8751,	// (0x00036abd) list_single_dyc_row_text_pane_t2_ParamLimits

0x8751,	// (0x00036abd) list_single_dyc_row_text_pane_t2

0xe4e4,	// (0x0003c850) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4e4,	// (0x0003c850) list_single_dyc_row_text_pane_t3

0x0005,

0xfd14,	// (0x0003e080) list_single_dyc_row_text_pane_t_ParamLimits

0xfd14,	// (0x0003e080) list_single_dyc_row_text_pane_t

0xe508,	// (0x0003c874) list_single_dyc_row_pane_g1_ParamLimits

0xe508,	// (0x0003c874) list_single_dyc_row_pane_g1

0xe514,	// (0x0003c880) list_single_dyc_row_pane_g2_ParamLimits

0xe514,	// (0x0003c880) list_single_dyc_row_pane_g2

0xe520,	// (0x0003c88c) list_single_dyc_row_pane_g3_ParamLimits

0xe520,	// (0x0003c88c) list_single_dyc_row_pane_g3

0xe52c,	// (0x0003c898) list_single_dyc_row_pane_g4_ParamLimits

0xe52c,	// (0x0003c898) list_single_dyc_row_pane_g4

0x0003,

0xfd21,	// (0x0003e08d) list_single_dyc_row_pane_g_ParamLimits

0xfd21,	// (0x0003e08d) list_single_dyc_row_pane_g

0xe538,	// (0x0003c8a4) list_single_dyc_row_text_pane_ParamLimits

0xe538,	// (0x0003c8a4) list_single_dyc_row_text_pane

0x9c9f,	// (0x0003800b) bg_sp_fs_scroll_pane

0xe557,	// (0x0003c8c3) thumb_sp_fs_scroll_pane

0x6d8b,	// (0x000350f7) list_medium_line_g1_ParamLimits

0x6d8b,	// (0x000350f7) list_medium_line_g1

0x8886,	// (0x00036bf2) list_medium_line_t1_ParamLimits

0x8886,	// (0x00036bf2) list_medium_line_t1

0x2597,	// (0x00030903) list_medium_line_x2_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x2_g1

0x25a3,	// (0x0003090f) list_medium_line_x2_g2_ParamLimits

0x25a3,	// (0x0003090f) list_medium_line_x2_g2

0x0001,

0xfd2a,	// (0x0003e096) list_medium_line_x2_g_ParamLimits

0xfd2a,	// (0x0003e096) list_medium_line_x2_g

0xe560,	// (0x0003c8cc) list_medium_line_x2_t1_ParamLimits

0xe560,	// (0x0003c8cc) list_medium_line_x2_t1

0x2597,	// (0x00030903) list_medium_line_x3_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x3_g1

0x25a3,	// (0x0003090f) list_medium_line_x3_g2_ParamLimits

0x25a3,	// (0x0003090f) list_medium_line_x3_g2

0x0001,

0xfd2a,	// (0x0003e096) list_medium_line_x3_g_ParamLimits

0xfd2a,	// (0x0003e096) list_medium_line_x3_g

0xe560,	// (0x0003c8cc) list_medium_line_x3_t1_ParamLimits

0xe560,	// (0x0003c8cc) list_medium_line_x3_t1

0xe576,	// (0x0003c8e2) thumb_sp_fs_scroll_pane_g1

0xe57f,	// (0x0003c8eb) thumb_sp_fs_scroll_pane_g2

0xe588,	// (0x0003c8f4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0003e09b) thumb_sp_fs_scroll_pane_g

0xe576,	// (0x0003c8e2) bg_sp_fs_scroll_pane_g1

0xe57f,	// (0x0003c8eb) bg_sp_fs_scroll_pane_g2

0xe588,	// (0x0003c8f4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0003e09b) bg_sp_fs_scroll_pane_g

0x2597,	// (0x00030903) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2597,	// (0x00030903) list_medium_line_x2_t3_g4_g1

0x263e,	// (0x000309aa) list_medium_line_x2_t3_g4_g2_ParamLimits

0x263e,	// (0x000309aa) list_medium_line_x2_t3_g4_g2

0x25a3,	// (0x0003090f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x25a3,	// (0x0003090f) list_medium_line_x2_t3_g4_g3

0x25af,	// (0x0003091b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x25af,	// (0x0003091b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0003d613) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0003d613) list_medium_line_x2_t3_g4_g

0x889b,	// (0x00036c07) list_medium_line_x2_t3_g4_t1_ParamLimits

0x889b,	// (0x00036c07) list_medium_line_x2_t3_g4_t1

0x88b5,	// (0x00036c21) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88b5,	// (0x00036c21) list_medium_line_x2_t3_g4_t2

0x25e4,	// (0x00030950) list_medium_line_x2_t3_g4_t3_ParamLimits

0x25e4,	// (0x00030950) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd36,	// (0x0003e0a2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd36,	// (0x0003e0a2) list_medium_line_x2_t3_g4_t

0x6d8b,	// (0x000350f7) list_medium_line_g2_g1_ParamLimits

0x6d8b,	// (0x000350f7) list_medium_line_g2_g1

0x6d97,	// (0x00035103) list_medium_line_g2_g2_ParamLimits

0x6d97,	// (0x00035103) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0003dd55) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0003dd55) list_medium_line_g2_g

0x88cf,	// (0x00036c3b) list_medium_line_g2_t1_ParamLimits

0x88cf,	// (0x00036c3b) list_medium_line_g2_t1

0x6d8b,	// (0x000350f7) list_medium_line_t3_g2_g1_ParamLimits

0x6d8b,	// (0x000350f7) list_medium_line_t3_g2_g1

0x6d97,	// (0x00035103) list_medium_line_t3_g2_g2_ParamLimits

0x6d97,	// (0x00035103) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0003dd55) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0003dd55) list_medium_line_t3_g2_g

0x88e4,	// (0x00036c50) list_medium_line_t3_g2_t1_ParamLimits

0x88e4,	// (0x00036c50) list_medium_line_t3_g2_t1

0x88fe,	// (0x00036c6a) list_medium_line_t3_g2_t2_ParamLimits

0x88fe,	// (0x00036c6a) list_medium_line_t3_g2_t2

0x8914,	// (0x00036c80) list_medium_line_t3_g2_t3_ParamLimits

0x8914,	// (0x00036c80) list_medium_line_t3_g2_t3

0x0002,

0xfd3d,	// (0x0003e0a9) list_medium_line_t3_g2_t_ParamLimits

0xfd3d,	// (0x0003e0a9) list_medium_line_t3_g2_t

0x8459,	// (0x000367c5) list_medium_line_right_icon_g1

0x892e,	// (0x00036c9a) list_medium_line_right_icon_t1

0x6d8b,	// (0x000350f7) list_medium_line_t2_g1_ParamLimits

0x6d8b,	// (0x000350f7) list_medium_line_t2_g1

0x893c,	// (0x00036ca8) list_medium_line_t2_t1_ParamLimits

0x893c,	// (0x00036ca8) list_medium_line_t2_t1

0x8956,	// (0x00036cc2) list_medium_line_t2_t2_ParamLimits

0x8956,	// (0x00036cc2) list_medium_line_t2_t2

0x0001,

0xfd44,	// (0x0003e0b0) list_medium_line_t2_t_ParamLimits

0xfd44,	// (0x0003e0b0) list_medium_line_t2_t

0x6d8b,	// (0x000350f7) list_medium_line_t3_g1_ParamLimits

0x6d8b,	// (0x000350f7) list_medium_line_t3_g1

0x896f,	// (0x00036cdb) list_medium_line_t3_t1_ParamLimits

0x896f,	// (0x00036cdb) list_medium_line_t3_t1

0x8989,	// (0x00036cf5) list_medium_line_t3_t2_ParamLimits

0x8989,	// (0x00036cf5) list_medium_line_t3_t2

0x899f,	// (0x00036d0b) list_medium_line_t3_t3_ParamLimits

0x899f,	// (0x00036d0b) list_medium_line_t3_t3

0x0002,

0xfd49,	// (0x0003e0b5) list_medium_line_t3_t_ParamLimits

0xfd49,	// (0x0003e0b5) list_medium_line_t3_t

0x6d8b,	// (0x000350f7) list_medium_line_g3_g1_ParamLimits

0x6d8b,	// (0x000350f7) list_medium_line_g3_g1

0x89b4,	// (0x00036d20) list_medium_line_g3_g2_ParamLimits

0x89b4,	// (0x00036d20) list_medium_line_g3_g2

0x6d97,	// (0x00035103) list_medium_line_g3_g3_ParamLimits

0x6d97,	// (0x00035103) list_medium_line_g3_g3

0x0002,

0xfd50,	// (0x0003e0bc) list_medium_line_g3_g_ParamLimits

0xfd50,	// (0x0003e0bc) list_medium_line_g3_g

0x89c0,	// (0x00036d2c) list_medium_line_g3_t1_ParamLimits

0x89c0,	// (0x00036d2c) list_medium_line_g3_t1

0x6d8b,	// (0x000350f7) list_medium_line_t2_g3_g1_ParamLimits

0x6d8b,	// (0x000350f7) list_medium_line_t2_g3_g1

0x89b4,	// (0x00036d20) list_medium_line_t2_g3_g2_ParamLimits

0x89b4,	// (0x00036d20) list_medium_line_t2_g3_g2

0x6d97,	// (0x00035103) list_medium_line_t2_g3_g3_ParamLimits

0x6d97,	// (0x00035103) list_medium_line_t2_g3_g3

0x0002,

0xfd50,	// (0x0003e0bc) list_medium_line_t2_g3_g_ParamLimits

0xfd50,	// (0x0003e0bc) list_medium_line_t2_g3_g

0x89d5,	// (0x00036d41) list_medium_line_t2_g3_t1_ParamLimits

0x89d5,	// (0x00036d41) list_medium_line_t2_g3_t1

0x89ef,	// (0x00036d5b) list_medium_line_t2_g3_t2_ParamLimits

0x89ef,	// (0x00036d5b) list_medium_line_t2_g3_t2

0x0001,

0xfd57,	// (0x0003e0c3) list_medium_line_t2_g3_t_ParamLimits

0xfd57,	// (0x0003e0c3) list_medium_line_t2_g3_t

0x6d8b,	// (0x000350f7) list_medium_line_t3_g3_g1_ParamLimits

0x6d8b,	// (0x000350f7) list_medium_line_t3_g3_g1

0x89b4,	// (0x00036d20) list_medium_line_t3_g3_g2_ParamLimits

0x89b4,	// (0x00036d20) list_medium_line_t3_g3_g2

0x6d97,	// (0x00035103) list_medium_line_t3_g3_g3_ParamLimits

0x6d97,	// (0x00035103) list_medium_line_t3_g3_g3

0x0002,

0xfd50,	// (0x0003e0bc) list_medium_line_t3_g3_g_ParamLimits

0xfd50,	// (0x0003e0bc) list_medium_line_t3_g3_g

0x8a0d,	// (0x00036d79) list_medium_line_t3_g3_t1_ParamLimits

0x8a0d,	// (0x00036d79) list_medium_line_t3_g3_t1

0x8a26,	// (0x00036d92) list_medium_line_t3_g3_t2_ParamLimits

0x8a26,	// (0x00036d92) list_medium_line_t3_g3_t2

0x8a3c,	// (0x00036da8) list_medium_line_t3_g3_t3_ParamLimits

0x8a3c,	// (0x00036da8) list_medium_line_t3_g3_t3

0x0002,

0xfd5c,	// (0x0003e0c8) list_medium_line_t3_g3_t_ParamLimits

0xfd5c,	// (0x0003e0c8) list_medium_line_t3_g3_t

0x867d,	// (0x000369e9) list_medium_line_right_iconx2_g1

0x8459,	// (0x000367c5) list_medium_line_right_iconx2_g2

0x0001,

0xfd63,	// (0x0003e0cf) list_medium_line_right_iconx2_g

0x8a56,	// (0x00036dc2) list_medium_line_right_iconx2_t1

0x867d,	// (0x000369e9) list_medium_line_t2_right_iconx2_g1

0x8459,	// (0x000367c5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd63,	// (0x0003e0cf) list_medium_line_t2_right_iconx2_g

0x8a64,	// (0x00036dd0) list_medium_line_t2_right_iconx2_t1

0x8a74,	// (0x00036de0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd68,	// (0x0003e0d4) list_medium_line_t2_right_iconx2_t

0x8a86,	// (0x00036df2) list_medium_line_x4_t4_t1

0x8a94,	// (0x00036e00) list_medium_line_x4_t4_t2

0x8aa4,	// (0x00036e10) list_medium_line_x4_t4_t3

0x8ab4,	// (0x00036e20) list_medium_line_x4_t4_t4

0x0003,

0xfd6d,	// (0x0003e0d9) list_medium_line_x4_t4_t

0x8b07,	// (0x00036e73) tport_appsw_pane_ParamLimits

0x8b07,	// (0x00036e73) tport_appsw_pane

0x8b1f,	// (0x00036e8b) tport_contact_pane_ParamLimits

0x8b1f,	// (0x00036e8b) tport_contact_pane

0x8b37,	// (0x00036ea3) tport_listscroll_pane_ParamLimits

0x8b37,	// (0x00036ea3) tport_listscroll_pane

0x8b51,	// (0x00036ebd) cell_tport_appsw_pane_ParamLimits

0x8b51,	// (0x00036ebd) cell_tport_appsw_pane

0xd274,	// (0x0003b5e0) tport_appsw_pane_g1_ParamLimits

0xd274,	// (0x0003b5e0) tport_appsw_pane_g1

0xe591,	// (0x0003c8fd) tport_contact_pane_g1

0xde55,	// (0x0003c1c1) tport_contact_pane_t1

0xe59a,	// (0x0003c906) tport_contact_pane_t2

0x0001,

0xfd76,	// (0x0003e0e2) tport_contact_pane_t

0xe5ba,	// (0x0003c926) list_tport_pane

0xe5c3,	// (0x0003c92f) scroll_pane_cp_030

0x8b99,	// (0x00036f05) cell_tport_appsw_pane_g1

0x8ba9,	// (0x00036f15) cell_tport_appsw_pane_t1

0x8bb7,	// (0x00036f23) grid_highlight_pane_cp019

0x8bbf,	// (0x00036f2b) list_tport_double_graphic_pane_ParamLimits

0x8bbf,	// (0x00036f2b) list_tport_double_graphic_pane

0xab27,	// (0x00038e93) list_highlight_pane_cp023_ParamLimits

0xab27,	// (0x00038e93) list_highlight_pane_cp023

0x8bcc,	// (0x00036f38) list_tport_double_graphic_pane_g1_ParamLimits

0x8bcc,	// (0x00036f38) list_tport_double_graphic_pane_g1

0x8bd9,	// (0x00036f45) list_tport_double_graphic_pane_t1_ParamLimits

0x8bd9,	// (0x00036f45) list_tport_double_graphic_pane_t1

0x8bee,	// (0x00036f5a) list_tport_double_graphic_pane_t2_ParamLimits

0x8bee,	// (0x00036f5a) list_tport_double_graphic_pane_t2

0x0001,

0xfd82,	// (0x0003e0ee) list_tport_double_graphic_pane_t_ParamLimits

0xfd82,	// (0x0003e0ee) list_tport_double_graphic_pane_t

0x9c9f,	// (0x0003800b) main_cale_note_pane

0x1518,	// (0x0002f884) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1518,	// (0x0002f884) cell_vitu2_function_top_wide_pane_cp01

0x7fad,	// (0x00036319) wait_bar_pane_cp05_ParamLimits

0xab27,	// (0x00038e93) listscroll_cmail_pane

0xe5cc,	// (0x0003c938) list_cmail_pane

0x8c00,	// (0x00036f6c) list_cmail_body_pane

0x8c15,	// (0x00036f81) list_single_cmail_header_caption_pane

0x8c2b,	// (0x00036f97) list_single_cmail_header_detail_pane_ParamLimits

0x8c2b,	// (0x00036f97) list_single_cmail_header_detail_pane

0xe5dc,	// (0x0003c948) list_single_cmail_header_caption_pane_t1

0x8c54,	// (0x00036fc0) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c54,	// (0x00036fc0) list_single_cmail_header_detail_pane_g1

0xe5f3,	// (0x0003c95f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5f3,	// (0x0003c95f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd87,	// (0x0003e0f3) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd87,	// (0x0003e0f3) list_single_cmail_header_detail_pane_g

0xe60c,	// (0x0003c978) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe60c,	// (0x0003c978) list_single_cmail_header_detail_pane_t1

0xe66c,	// (0x0003c9d8) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe66c,	// (0x0003c9d8) list_single_cmail_header_editor_pane_bg

0xdfb2,	// (0x0003c31e) list_cmail_body_pane_g1

0xe683,	// (0x0003c9ef) list_cmail_body_pane_t1

0xd2b1,	// (0x0003b61d) list_single_cmail_header_editor_pane_bg_g1

0xa803,	// (0x00038b6f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2c1,	// (0x0003b62d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2b9,	// (0x0003b625) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd505,	// (0x0003b871) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2e1,	// (0x0003b64d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2d1,	// (0x0003b63d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2d9,	// (0x0003b645) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa7e3,	// (0x00038b4f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c6c,	// (0x00036fd8) calenote_gesture_pane_ParamLimits

0x8c6c,	// (0x00036fd8) calenote_gesture_pane

0x8c8c,	// (0x00036ff8) calenote_window_pane_ParamLimits

0x8c8c,	// (0x00036ff8) calenote_window_pane

0xe691,	// (0x0003c9fd) popup_note_window_cp01

0x8ca8,	// (0x00037014) calenote_swipe_1_pane_ParamLimits

0x8ca8,	// (0x00037014) calenote_swipe_1_pane

0x83fb,	// (0x00036767) calenote_swipe_2_pane_ParamLimits

0x83fb,	// (0x00036767) calenote_swipe_2_pane

0xe30c,	// (0x0003c678) calenote_swipe_1_pane_g1_ParamLimits

0xe30c,	// (0x0003c678) calenote_swipe_1_pane_g1

0xe319,	// (0x0003c685) calenote_swipe_1_pane_g2_ParamLimits

0xe319,	// (0x0003c685) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x0003e018) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x0003e018) calenote_swipe_1_pane_g

0xe6a3,	// (0x0003ca0f) calenote_swipe_1_pane_t1_ParamLimits

0xe6a3,	// (0x0003ca0f) calenote_swipe_1_pane_t1

0xe30c,	// (0x0003c678) calenote_swipe_2_pane_g1_ParamLimits

0xe30c,	// (0x0003c678) calenote_swipe_2_pane_g1

0xe6c2,	// (0x0003ca2e) calenote_swipe_2_pane_g2_ParamLimits

0xe6c2,	// (0x0003ca2e) calenote_swipe_2_pane_g2

0x0001,

0xfd93,	// (0x0003e0ff) calenote_swipe_2_pane_g_ParamLimits

0xfd93,	// (0x0003e0ff) calenote_swipe_2_pane_g

0xe6ce,	// (0x0003ca3a) calenote_swipe_2_pane_t1_ParamLimits

0xe6ce,	// (0x0003ca3a) calenote_swipe_2_pane_t1

0x9c9f,	// (0x0003800b) main_mup_navstr_pane

0x5716,	// (0x00033a82) main_mup3_pane_t7_ParamLimits

0x5716,	// (0x00033a82) main_mup3_pane_t7

0x6134,	// (0x000344a0) main_mp4_pane_g6_ParamLimits

0x6134,	// (0x000344a0) main_mp4_pane_g6

0x6399,	// (0x00034705) main_image3_pane_t4_ParamLimits

0x6399,	// (0x00034705) main_image3_pane_t4

0x8cbd,	// (0x00037029) popup_navstr_preview_pane_ParamLimits

0x8cbd,	// (0x00037029) popup_navstr_preview_pane

0x8cd1,	// (0x0003703d) scroll_navstr_pane_ParamLimits

0x8cd1,	// (0x0003703d) scroll_navstr_pane

0x9c9f,	// (0x0003800b) bg_popup_preview_window_pane_cp04

0xe6f5,	// (0x0003ca61) popup_navstr_preview_pane_t1

0x8ce5,	// (0x00037051) scroll_navstr_pane_g1_ParamLimits

0x8ce5,	// (0x00037051) scroll_navstr_pane_g1

0x8cf9,	// (0x00037065) scroll_navstr_pane_t1_ParamLimits

0x8cf9,	// (0x00037065) scroll_navstr_pane_t1

0xe69a,	// (0x0003ca06) bg_button_pane_cp014

0xe69a,	// (0x0003ca06) bg_button_pane_cp030

0x82d4,	// (0x00036640) list_double_fisheye_pane_g4_ParamLimits

0x82d4,	// (0x00036640) list_double_fisheye_pane_g4

0x82e0,	// (0x0003664c) list_double_fisheye_pane_g5_ParamLimits

0x82e0,	// (0x0003664c) list_double_fisheye_pane_g5

0xc87e,	// (0x0003abea) sp_fs_scroll_pane_cp03

0xe42c,	// (0x0003c798) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe438,	// (0x0003c7a4) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x0003e035) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8513,	// (0x0003687f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5d4,	// (0x0003c940) sp_fs_scroll_pane_cp02

0xa4e9,	// (0x00038855) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4e9,	// (0x00038855) popup_sp_fs_calendar_preview_list_single_pane

0x9c9f,	// (0x0003800b) main_cam6_pano_pane

0x197b,	// (0x0002fce7) main_mup3_pane_ParamLimits

0x9c9f,	// (0x0003800b) main_phacti_pane

0x7e80,	// (0x000361ec) bg_button_pane_cp11

0x7e9a,	// (0x00036206) main_mobtv_info_pane_g2_ParamLimits

0x7e9a,	// (0x00036206) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x0003df95) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x0003df95) main_mobtv_info_pane_g

0x8077,	// (0x000363e3) sc_clock_pane_t5_ParamLimits

0x8077,	// (0x000363e3) sc_clock_pane_t5

0x813f,	// (0x000364ab) main_radioblah_pane_g1_ParamLimits

0xe24f,	// (0x0003c5bb) main_radioblah_pane_t3_ParamLimits

0xe24f,	// (0x0003c5bb) main_radioblah_pane_t3

0xe267,	// (0x0003c5d3) main_radioblah_pane_t4_ParamLimits

0xe267,	// (0x0003c5d3) main_radioblah_pane_t4

0x8167,	// (0x000364d3) main_radioblah_text_pane_ParamLimits

0x8167,	// (0x000364d3) main_radioblah_text_pane

0x8179,	// (0x000364e5) main_radioblah_info_pane_g1_ParamLimits

0x8212,	// (0x0003657e) main_radioblah_info_pane_t4_ParamLimits

0x8212,	// (0x0003657e) main_radioblah_info_pane_t4

0xab27,	// (0x00038e93) main_sp_fs_calendar_pane

0x8d10,	// (0x0003707c) main_phacti_pane_g1

0x8d18,	// (0x00037084) phacti_note_pane_ParamLimits

0x8d18,	// (0x00037084) phacti_note_pane

0xe70c,	// (0x0003ca78) phacti_term_pane_ParamLimits

0xe70c,	// (0x0003ca78) phacti_term_pane

0xe721,	// (0x0003ca8d) phacti_note_pane_t1_ParamLimits

0xe721,	// (0x0003ca8d) phacti_note_pane_t1

0xe738,	// (0x0003caa4) phacti_term_pane_g1

0xe740,	// (0x0003caac) phacti_term_pane_t1_ParamLimits

0xe740,	// (0x0003caac) phacti_term_pane_t1

0xe76a,	// (0x0003cad6) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa588,	// (0x000388f4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9d,	// (0x0003e109) popup_sp_fs_calendar_preview_list_single_pane_g

0xe772,	// (0x0003cade) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe772,	// (0x0003cade) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe788,	// (0x0003caf4) aid_popup_sp_fs_bg_corner_pane

0xc8b1,	// (0x0003ac1d) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c9f,	// (0x0003800b) popup_sp_fs_calendar_preview_bg_pane

0xe790,	// (0x0003cafc) popup_sp_fs_calendar_preview_list_pane

0xc49d,	// (0x0003a809) bg_main_sp_fs_cale_pane_ParamLimits

0xc49d,	// (0x0003a809) bg_main_sp_fs_cale_pane

0xe7a1,	// (0x0003cb0d) listscroll_cale_mrui_pane_ParamLimits

0xe7a1,	// (0x0003cb0d) listscroll_cale_mrui_pane

0xd335,	// (0x0003b6a1) listscroll_sp_fs_schedule_track_pane

0xe7b6,	// (0x0003cb22) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7b6,	// (0x0003cb22) main_sp_fs_ctrlbar_pane_cp01

0xe7c9,	// (0x0003cb35) main_sp_fs_ribbon_pane

0xe7d1,	// (0x0003cb3d) popup_sp_fs_cale_preview_window

0x8d8d,	// (0x000370f9) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d8d,	// (0x000370f9) list_single_sp_fs_schedule_track_pane

0xab27,	// (0x00038e93) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xab27,	// (0x00038e93) bg_sp_fs_highlight_list_pane_cp03

0x8da0,	// (0x0003710c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8da0,	// (0x0003710c) list_single_sp_fs_schedule_track_pane_g1

0x8dac,	// (0x00037118) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8dac,	// (0x00037118) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda2,	// (0x0003e10e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda2,	// (0x0003e10e) list_single_sp_fs_schedule_track_pane_g

0x8db8,	// (0x00037124) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8db8,	// (0x00037124) list_single_sp_fs_schedule_track_pane_t1

0x8dd2,	// (0x0003713e) sp_fs_schedule_track_pane_ParamLimits

0x8dd2,	// (0x0003713e) sp_fs_schedule_track_pane

0xe7e3,	// (0x0003cb4f) sp_fs_schedule_track_pane_g1

0xe7eb,	// (0x0003cb57) sp_fs_schedule_track_pane_g2

0xe7f3,	// (0x0003cb5f) sp_fs_schedule_track_pane_g3

0xe7fb,	// (0x0003cb67) sp_fs_schedule_track_pane_g4

0xe803,	// (0x0003cb6f) sp_fs_schedule_track_pane_g5

0x0004,

0xfda7,	// (0x0003e113) sp_fs_schedule_track_pane_g

0xd2b1,	// (0x0003b61d) bg_sp_fs_schedule_viewer_highlight_g1

0xa803,	// (0x00038b6f) bg_sp_fs_schedule_viewer_highlight_g2

0xd2b9,	// (0x0003b625) bg_sp_fs_schedule_viewer_highlight_g3

0xd2c1,	// (0x0003b62d) bg_sp_fs_schedule_viewer_highlight_g4

0xd505,	// (0x0003b871) bg_sp_fs_schedule_viewer_highlight_g5

0xd2d1,	// (0x0003b63d) bg_sp_fs_schedule_viewer_highlight_g6

0xd2d9,	// (0x0003b645) bg_sp_fs_schedule_viewer_highlight_g7

0xd2e1,	// (0x0003b64d) bg_sp_fs_schedule_viewer_highlight_g8

0xa7e3,	// (0x00038b4f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb2,	// (0x0003e11e) bg_sp_fs_schedule_viewer_highlight_g

0x9c9f,	// (0x0003800b) bg_main_sp_fs_ribbon_pane

0x8de3,	// (0x0003714f) main_sp_fs_ribbon_pane_g1

0xe80b,	// (0x0003cb77) main_sp_fs_ribbon_pane_t1

0x8dec,	// (0x00037158) main_sp_fs_ribbon_pane_t2

0xe81a,	// (0x0003cb86) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc5,	// (0x0003e131) main_sp_fs_ribbon_pane_t

0xe829,	// (0x0003cb95) main_sp_fs_ribbon_scheduler_pane

0xe831,	// (0x0003cb9d) bg_main_sp_fs_ribbon_pane_g1

0xe83a,	// (0x0003cba6) bg_main_sp_fs_ribbon_pane_g2

0xe843,	// (0x0003cbaf) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdcc,	// (0x0003e138) bg_main_sp_fs_ribbon_pane_g

0xe84b,	// (0x0003cbb7) main_sp_fs_ribbon_scheduler_pane_g1

0xe854,	// (0x0003cbc0) main_sp_fs_ribbon_scheduler_pane_g2

0xe85d,	// (0x0003cbc9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd3,	// (0x0003e13f) main_sp_fs_ribbon_scheduler_pane_g

0xe866,	// (0x0003cbd2) list_cale_mrui_pane

0x8dfb,	// (0x00037167) sp_fs_scroll_pane_cp07_ParamLimits

0x8dfb,	// (0x00037167) sp_fs_scroll_pane_cp07

0x8e17,	// (0x00037183) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e17,	// (0x00037183) bg_sp_fs_schedule_viewer_highlight

0xe873,	// (0x0003cbdf) list_single_sp_fs_schedule_track_pane_cp01

0xe87b,	// (0x0003cbe7) list_sp_fs_schedule_track_pane

0xe883,	// (0x0003cbef) sp_fs_scroll_pane_cp06_ParamLimits

0xe883,	// (0x0003cbef) sp_fs_scroll_pane_cp06

0xc8b1,	// (0x0003ac1d) bgmain_sp_fs_calendar_pane_g1

0x8e27,	// (0x00037193) list_single_cale_mrui_pane_ParamLimits

0x8e27,	// (0x00037193) list_single_cale_mrui_pane

0xe895,	// (0x0003cc01) list_single_cale_mrui_row_pane_ParamLimits

0xe895,	// (0x0003cc01) list_single_cale_mrui_row_pane

0xe8a2,	// (0x0003cc0e) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8a2,	// (0x0003cc0e) list_single_cale_mrui_row_pane_g1

0xe8e7,	// (0x0003cc53) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8e7,	// (0x0003cc53) list_single_cale_mrui_row_pane_t1

0x8e48,	// (0x000371b4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e48,	// (0x000371b4) list_single_cale_mrui_row_pane_t2

0xe8f9,	// (0x0003cc65) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8f9,	// (0x0003cc65) list_single_cale_mrui_row_pane_t3

0xe928,	// (0x0003cc94) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe928,	// (0x0003cc94) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde1,	// (0x0003e14d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde1,	// (0x0003e14d) list_single_cale_mrui_row_pane_t

0x8eb0,	// (0x0003721c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8eb0,	// (0x0003721c) list_single_cmail_header_editor_pane_bg_cp01

0x8ed6,	// (0x00037242) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ed6,	// (0x00037242) list_single_cmail_header_editor_pane_bg_cp02

0x8ef6,	// (0x00037262) main_radioblah_text_pane_t1_ParamLimits

0x8ef6,	// (0x00037262) main_radioblah_text_pane_t1

0xe957,	// (0x0003ccc3) cam6_indi_pane_cp01

0xe95f,	// (0x0003cccb) cam6_mode_pane_cp01

0xe967,	// (0x0003ccd3) cam6_pano_pane

0xe970,	// (0x0003ccdc) cam6_zoom_pane_cp01

0xe978,	// (0x0003cce4) cam6_pano_image_pane

0xe983,	// (0x0003ccef) cam6_pano_pane_g1

0xdfb2,	// (0x0003c31e) cam6_pano_pane_g2

0xe98c,	// (0x0003ccf8) cam6_pano_pane_g3

0xe995,	// (0x0003cd01) cam6_pano_pane_g4

0xcea0,	// (0x0003b20c) cam6_pano_pane_g5

0xe99e,	// (0x0003cd0a) cam6_pano_pane_g6

0xe9a8,	// (0x0003cd14) cam6_pano_pane_g7

0xe9b0,	// (0x0003cd1c) cam6_pano_pane_g8

0xe9b9,	// (0x0003cd25) cam6_pano_pane_g9

0x0008,

0xfdea,	// (0x0003e156) cam6_pano_pane_g

0x9c9f,	// (0x0003800b) main_browser_tag_pane

0xe6ed,	// (0x0003ca59) grid_navstr_albumart_pane

0xe9c4,	// (0x0003cd30) cell_navstr_albumart_pane_ParamLimits

0xe9c4,	// (0x0003cd30) cell_navstr_albumart_pane

0xe9e4,	// (0x0003cd50) cell_navstr_albumart_pane_g1

0xc2ae,	// (0x0003a61a) cell_navstr_albumart_pane_g2

0xc2be,	// (0x0003a62a) cell_navstr_albumart_pane_g3

0xc2b6,	// (0x0003a622) cell_navstr_albumart_pane_g4

0x0003,

0xfdfd,	// (0x0003e169) cell_navstr_albumart_pane_g

0x8f10,	// (0x0003727c) bt_list_pane_ParamLimits

0x8f10,	// (0x0003727c) bt_list_pane

0x8f24,	// (0x00037290) bt_list_pane_t1

0x8f33,	// (0x0003729f) bt_list_pane_t2

0x0001,

0xfe06,	// (0x0003e172) bt_list_pane_t

0x9c9f,	// (0x0003800b) main_cale_prevew_pane

0x8f42,	// (0x000372ae) popup_cale_preview_window_ParamLimits

0x8f42,	// (0x000372ae) popup_cale_preview_window

0xab27,	// (0x00038e93) bg_popup_preview_window_pane_cp05_ParamLimits

0xab27,	// (0x00038e93) bg_popup_preview_window_pane_cp05

0xe9ec,	// (0x0003cd58) list_cale_preview_pane_ParamLimits

0xe9ec,	// (0x0003cd58) list_cale_preview_pane

0x8f5d,	// (0x000372c9) list_double_cale_preview_pane_ParamLimits

0x8f5d,	// (0x000372c9) list_double_cale_preview_pane

0x8f6f,	// (0x000372db) list_single_cale_preview_pane_ParamLimits

0x8f6f,	// (0x000372db) list_single_cale_preview_pane

0x8f85,	// (0x000372f1) list_single_cale_preview_pane_g1

0x8f8d,	// (0x000372f9) list_single_cale_preview_pane_t1_ParamLimits

0x8f8d,	// (0x000372f9) list_single_cale_preview_pane_t1

0x8fa2,	// (0x0003730e) list_double_cale_preview_pane_g1

0x8faa,	// (0x00037316) list_double_cale_preview_pane_t1_ParamLimits

0x8faa,	// (0x00037316) list_double_cale_preview_pane_t1

0x8fbf,	// (0x0003732b) list_double_cale_preview_pane_t2_ParamLimits

0x8fbf,	// (0x0003732b) list_double_cale_preview_pane_t2

0x0001,

0xfe0b,	// (0x0003e177) list_double_cale_preview_pane_t_ParamLimits

0xfe0b,	// (0x0003e177) list_double_cale_preview_pane_t

0x9c9f,	// (0x0003800b) main_ezdial_pane

0xab27,	// (0x00038e93) main_sp_fs_email_pane_ParamLimits

0x8483,	// (0x000367ef) cmail_ddmenu_btn01_pane_ParamLimits

0x8483,	// (0x000367ef) cmail_ddmenu_btn01_pane

0x8496,	// (0x00036802) cmail_ddmenu_btn02_pane_ParamLimits

0x8496,	// (0x00036802) cmail_ddmenu_btn02_pane

0x84b9,	// (0x00036825) cmail_ddmenu_btn03_pane_ParamLimits

0x84b9,	// (0x00036825) cmail_ddmenu_btn03_pane

0x8552,	// (0x000368be) main_sp_fs_ctrlbar_pane_ParamLimits

0x8576,	// (0x000368e2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c00,	// (0x00036f6c) list_cmail_body_pane_ParamLimits

0xe5ea,	// (0x0003c956) bg_button_pane_cp12

0xe5ff,	// (0x0003c96b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5ff,	// (0x0003c96b) list_single_cmail_header_detail_pane_g3

0xe648,	// (0x0003c9b4) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe648,	// (0x0003c9b4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8e,	// (0x0003e0fa) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8e,	// (0x0003e0fa) list_single_cmail_header_detail_pane_t

0xe755,	// (0x0003cac1) phacti_term_pane_t2_ParamLimits

0xe755,	// (0x0003cac1) phacti_term_pane_t2

0x0001,

0xfd98,	// (0x0003e104) phacti_term_pane_t_ParamLimits

0xfd98,	// (0x0003e104) phacti_term_pane_t

0xe9f8,	// (0x0003cd64) aid_size_list_single_double

0x8fd7,	// (0x00037343) popup_ezdial_listscroll_window

0x8ff3,	// (0x0003735f) popup_number_entry_window_cp01

0xa5aa,	// (0x00038916) bg_popup_call_pane_cp09

0xea04,	// (0x0003cd70) ezdial_list_pane

0xea0c,	// (0x0003cd78) scroll_pane_cp23

0xc49d,	// (0x0003a809) bg_button_pane_cp028_ParamLimits

0xc49d,	// (0x0003a809) bg_button_pane_cp028

0x9001,	// (0x0003736d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9001,	// (0x0003736d) cmail_ddmenu_btn01_pane_g1

0x900d,	// (0x00037379) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x900d,	// (0x00037379) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe10,	// (0x0003e17c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe10,	// (0x0003e17c) cmail_ddmenu_btn01_pane_g

0xea14,	// (0x0003cd80) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea14,	// (0x0003cd80) cmail_ddmenu_btn01_pane_t1

0xc49d,	// (0x0003a809) bg_button_pane_cp029_ParamLimits

0xc49d,	// (0x0003a809) bg_button_pane_cp029

0x9019,	// (0x00037385) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9019,	// (0x00037385) cmail_ddmenu_btn02_pane_g1

0x9031,	// (0x0003739d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9031,	// (0x0003739d) cmail_ddmenu_btn02_pane_t1

0xab27,	// (0x00038e93) bg_button_pane_cp031_ParamLimits

0xab27,	// (0x00038e93) bg_button_pane_cp031

0x9019,	// (0x00037385) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9019,	// (0x00037385) cmail_ddmenu_btn03_pane_g1

0x9031,	// (0x0003739d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9031,	// (0x0003739d) cmail_ddmenu_btn03_pane_t1

0x6342,	// (0x000346ae) cell_dialer2_keypad_pane_t1_ParamLimits

0x635c,	// (0x000346c8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x635c,	// (0x000346c8) cell_dialer2_keypad_pane_t1_copy1

0x7c95,	// (0x00036001) ncimui_group_button_pane

0xab27,	// (0x00038e93) main_sp_fs_calendar_pane_ParamLimits

0x8c15,	// (0x00036f81) list_single_cmail_header_caption_pane_ParamLimits

0xe798,	// (0x0003cb04) aid_recal_txt_sm_pane

0x9c9f,	// (0x0003800b) mian_recal_day_pane

0xe7d1,	// (0x0003cb3d) popup_sp_fs_cale_preview_window_ParamLimits

0xea29,	// (0x0003cd95) list_recal_day_pane

0xea6b,	// (0x0003cdd7) list_single_recal_day_pane_ParamLimits

0xea6b,	// (0x0003cdd7) list_single_recal_day_pane

0xea7d,	// (0x0003cde9) list_single_recal_day_pane_g1_ParamLimits

0xea7d,	// (0x0003cde9) list_single_recal_day_pane_g1

0xea89,	// (0x0003cdf5) list_single_recal_day_pane_g2_ParamLimits

0xea89,	// (0x0003cdf5) list_single_recal_day_pane_g2

0xea95,	// (0x0003ce01) list_single_recal_day_pane_g3_ParamLimits

0xea95,	// (0x0003ce01) list_single_recal_day_pane_g3

0x9055,	// (0x000373c1) list_single_recal_day_pane_g4_ParamLimits

0x9055,	// (0x000373c1) list_single_recal_day_pane_g4

0xeaa1,	// (0x0003ce0d) list_single_recal_day_pane_g5_ParamLimits

0xeaa1,	// (0x0003ce0d) list_single_recal_day_pane_g5

0xeaad,	// (0x0003ce19) list_single_recal_day_pane_g6_ParamLimits

0xeaad,	// (0x0003ce19) list_single_recal_day_pane_g6

0x0004,

0xfe1f,	// (0x0003e18b) list_single_recal_day_pane_g_ParamLimits

0xfe1f,	// (0x0003e18b) list_single_recal_day_pane_g

0xeac1,	// (0x0003ce2d) list_single_recal_day_pane_t1

0xead3,	// (0x0003ce3f) list_single_recal_day_pane_t2

0x0001,

0xfe2a,	// (0x0003e196) list_single_recal_day_pane_t

0x906d,	// (0x000373d9) ncimui_query_button_pane_ParamLimits

0x906d,	// (0x000373d9) ncimui_query_button_pane

0x907d,	// (0x000373e9) ncimui_query_button_pane_t1_ParamLimits

0x907d,	// (0x000373e9) ncimui_query_button_pane_t1

0xeae5,	// (0x0003ce51) ncimui_query_button_pane_t2_ParamLimits

0xeae5,	// (0x0003ce51) ncimui_query_button_pane_t2

0x0001,

0xfe2f,	// (0x0003e19b) ncimui_query_button_pane_t_ParamLimits

0xfe2f,	// (0x0003e19b) ncimui_query_button_pane_t

0x9090,	// (0x000373fc) query_button_pane_ParamLimits

0x9090,	// (0x000373fc) query_button_pane

0x9c9f,	// (0x0003800b) bg_button_pane_cp0028

0xeaf8,	// (0x0003ce64) query_button_pane_t1

0x04fd,	// (0x0002e869) main_tport_pane_ParamLimits

0x8ac4,	// (0x00036e30) bg_popup_window_pane_cp01_ParamLimits

0x8ac4,	// (0x00036e30) bg_popup_window_pane_cp01

0x8adf,	// (0x00036e4b) heading_pane_cp08_ParamLimits

0x8adf,	// (0x00036e4b) heading_pane_cp08

0x8af2,	// (0x00036e5e) heading_pane_cp07_ParamLimits

0x8af2,	// (0x00036e5e) heading_pane_cp07

0x8b99,	// (0x00036f05) cell_tport_appsw_pane_g2

0x0002,

0xfd7b,	// (0x0003e0e7) cell_tport_appsw_pane_g

0xb185,	// (0x000394f1) input_candi_list_open_g1

0xa9c6,	// (0x00038d32) list_cale_time_pane_g6_ParamLimits

0xa9c6,	// (0x00038d32) list_cale_time_pane_g6

0x50de,	// (0x0003344a) aid_size_touch_calib_1_ParamLimits

0x50de,	// (0x0003344a) aid_size_touch_calib_1

0x50f0,	// (0x0003345c) aid_size_touch_calib_2_ParamLimits

0x50f0,	// (0x0003345c) aid_size_touch_calib_2

0x5108,	// (0x00033474) aid_size_touch_calib_3_ParamLimits

0x5108,	// (0x00033474) aid_size_touch_calib_3

0x5126,	// (0x00033492) aid_size_touch_calib_4_ParamLimits

0x5126,	// (0x00033492) aid_size_touch_calib_4

0x513e,	// (0x000334aa) main_touch_calib_button_group_pane_ParamLimits

0x513e,	// (0x000334aa) main_touch_calib_button_group_pane

0x5156,	// (0x000334c2) main_touch_calib_pane_g1_ParamLimits

0x5168,	// (0x000334d4) main_touch_calib_pane_g2_ParamLimits

0x517a,	// (0x000334e6) main_touch_calib_pane_g3_ParamLimits

0x518c,	// (0x000334f8) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0003daa2) main_touch_calib_pane_g_ParamLimits

0x519e,	// (0x0003350a) main_touch_calib_pane_t1_ParamLimits

0x51b8,	// (0x00033524) main_touch_calib_pane_t2_ParamLimits

0x51d2,	// (0x0003353e) main_touch_calib_pane_t3_ParamLimits

0x51e6,	// (0x00033552) main_touch_calib_pane_t4_ParamLimits

0x51fa,	// (0x00033566) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0003daab) main_touch_calib_pane_t_ParamLimits

0xcc40,	// (0x0003afac) list_single_fp_cale_pane_g3_ParamLimits

0xcc40,	// (0x0003afac) list_single_fp_cale_pane_g3

0x197b,	// (0x0002fce7) bg_button_pane_cp012_ParamLimits

0x197b,	// (0x0002fce7) bg_vkb2_func_pane_cp03_ParamLimits

0x1704,	// (0x0002fa70) cell_vitu2_function_top_pane_g1_ParamLimits

0x197b,	// (0x0002fce7) bg_vkb2_func_pane_cp04_ParamLimits

0x7c20,	// (0x00035f8c) main_ncimui_button_group_pane_ParamLimits

0x7c20,	// (0x00035f8c) main_ncimui_button_group_pane

0x7c80,	// (0x00035fec) main_ncimui_pane_t3_ParamLimits

0x7c80,	// (0x00035fec) main_ncimui_pane_t3

0xe703,	// (0x0003ca6f) phacti_button_group_pane

0xe9f8,	// (0x0003cd64) aid_size_list_single_double_ParamLimits

0x8fd7,	// (0x00037343) popup_ezdial_listscroll_window_ParamLimits

0x8ff3,	// (0x0003735f) popup_number_entry_window_cp01_ParamLimits

0x90a3,	// (0x0003740f) phacti_button_pane_ParamLimits

0x90a3,	// (0x0003740f) phacti_button_pane

0x9c9f,	// (0x0003800b) bg_button_pane_cp14

0xeb06,	// (0x0003ce72) phacti_button_pane_t1

0x90b4,	// (0x00037420) main_touch_calib_button_pane_ParamLimits

0x90b4,	// (0x00037420) main_touch_calib_button_pane

0xa3dc,	// (0x00038748) bg_button_pane_cp18_ParamLimits

0xa3dc,	// (0x00038748) bg_button_pane_cp18

0xeb14,	// (0x0003ce80) main_touch_calib_button_pane_t1_ParamLimits

0xeb14,	// (0x0003ce80) main_touch_calib_button_pane_t1

0xeb2a,	// (0x0003ce96) main_touch_calib_button_pane_t2_ParamLimits

0xeb2a,	// (0x0003ce96) main_touch_calib_button_pane_t2

0x0001,

0xfe34,	// (0x0003e1a0) main_touch_calib_button_pane_t_ParamLimits

0xfe34,	// (0x0003e1a0) main_touch_calib_button_pane_t

0x9c9f,	// (0x0003800b) cell_ncimui_button_pane

0x9c9f,	// (0x0003800b) bg_button_pane_cp032

0xeb48,	// (0x0003ceb4) cell_ncimui_button_pane_t1

0x6379,	// (0x000346e5) image3_infobar_pane_ParamLimits

0x6379,	// (0x000346e5) image3_infobar_pane

0x80a3,	// (0x0003640f) fs_bigclock_status_pane_ParamLimits

0x80a3,	// (0x0003640f) fs_bigclock_status_pane

0x80b0,	// (0x0003641c) main_fs_bigclock_clock_pane_ParamLimits

0x80b0,	// (0x0003641c) main_fs_bigclock_clock_pane

0x80ce,	// (0x0003643a) main_fs_bigclock_indi_pane_ParamLimits

0x80ce,	// (0x0003643a) main_fs_bigclock_indi_pane

0x8100,	// (0x0003646c) main_fs_bigclock_swipe_pane_ParamLimits

0x8100,	// (0x0003646c) main_fs_bigclock_swipe_pane

0x9c9f,	// (0x0003800b) main_fs_clock_dumped_data

0xe0bf,	// (0x0003c42b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0bf,	// (0x0003c42b) list_single_fs_bigclock_indicator_pane_g1

0xe0da,	// (0x0003c446) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0da,	// (0x0003c446) list_single_fs_bigclock_indicator_pane_g2

0xe0f4,	// (0x0003c460) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0f4,	// (0x0003c460) list_single_fs_bigclock_indicator_pane_g3

0xe10e,	// (0x0003c47a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe10e,	// (0x0003c47a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x0003dfc9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x0003dfc9) list_single_fs_bigclock_indicator_pane_g

0xe139,	// (0x0003c4a5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe139,	// (0x0003c4a5) list_single_fs_bigclock_indicator_pane_t1

0xe161,	// (0x0003c4cd) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe161,	// (0x0003c4cd) list_single_fs_bigclock_indicator_pane_t2

0xe189,	// (0x0003c4f5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe189,	// (0x0003c4f5) list_single_fs_bigclock_indicator_pane_t3

0xe1b1,	// (0x0003c51d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1b1,	// (0x0003c51d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x0003dfd4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x0003dfd4) list_single_fs_bigclock_indicator_pane_t

0xeb56,	// (0x0003cec2) image3_infobar_fav_pane_ParamLimits

0xeb56,	// (0x0003cec2) image3_infobar_fav_pane

0xeb66,	// (0x0003ced2) image3_infobar_loc_pane_ParamLimits

0xeb66,	// (0x0003ced2) image3_infobar_loc_pane

0xeb7a,	// (0x0003cee6) image3_infobar_time_pane_ParamLimits

0xeb7a,	// (0x0003cee6) image3_infobar_time_pane

0xc8b1,	// (0x0003ac1d) image3_infobar_time_pane_g1

0xeb8a,	// (0x0003cef6) image3_infobar_time_pane_t1

0xc8b1,	// (0x0003ac1d) image3_infobar_loc_pane_g1

0xeb98,	// (0x0003cf04) image3_infobar_loc_pane_g2

0x0001,

0xfe39,	// (0x0003e1a5) image3_infobar_loc_pane_g

0xeba0,	// (0x0003cf0c) image3_infobar_loc_pane_t1

0xc8b1,	// (0x0003ac1d) image3_infobar_fav_pane_g1

0xebae,	// (0x0003cf1a) image3_infobar_fav_pane_g2

0x0001,

0xfe3e,	// (0x0003e1aa) image3_infobar_fav_pane_g

0xebb6,	// (0x0003cf22) fs_bigclock_status_battery_pane

0xebbf,	// (0x0003cf2b) fs_bigclock_status_signal_pane

0xebc8,	// (0x0003cf34) fs_bigclock_status_title_pane

0xebd1,	// (0x0003cf3d) fs_bigclock_status_signal_pane_g1

0xebda,	// (0x0003cf46) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe43,	// (0x0003e1af) fs_bigclock_status_signal_pane_g

0xebe2,	// (0x0003cf4e) fs_bigclock_status_battery_pane_g1

0xebeb,	// (0x0003cf57) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe48,	// (0x0003e1b4) fs_bigclock_status_battery_pane_g

0xebf3,	// (0x0003cf5f) fs_bigclock_status_title_pane_t1

0x90c9,	// (0x00037435) main_fs_bigclock_clock_pane_g1

0x90c9,	// (0x00037435) main_fs_bigclock_clock_pane_g2

0x90da,	// (0x00037446) main_fs_bigclock_clock_pane_g3

0x90da,	// (0x00037446) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4d,	// (0x0003e1b9) main_fs_bigclock_clock_pane_g

0x90ed,	// (0x00037459) main_fs_bigclock_clock_pane_t1

0x9103,	// (0x0003746f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe56,	// (0x0003e1c2) main_fs_bigclock_clock_pane_t

0xec01,	// (0x0003cf6d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec01,	// (0x0003cf6d) list_single_fs_bigclock_indicator_pane

0xec12,	// (0x0003cf7e) list_single_fs_bigclock_pane_ParamLimits

0xec12,	// (0x0003cf7e) list_single_fs_bigclock_pane

0xec38,	// (0x0003cfa4) main_fs_bigclock_indicator_pane_t1

0xec47,	// (0x0003cfb3) list_single_fs_bigclock_pane_g1

0xec4f,	// (0x0003cfbb) list_single_fs_bigclock_pane_t1

0xc8b1,	// (0x0003ac1d) main_fs_bigclock_swipe_pane_g1

0xec92,	// (0x0003cffe) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe67,	// (0x0003e1d3) main_fs_bigclock_swipe_pane_g

0xec9a,	// (0x0003d006) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec9a,	// (0x0003d006) main_fs_bigclock_swipe_pane_t1

0x383e,	// (0x00031baa) call_type_pane_ParamLimits

0x9c9f,	// (0x0003800b) main_btmg_pane

0xe8ce,	// (0x0003cc3a) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8ce,	// (0x0003cc3a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdda,	// (0x0003e146) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdda,	// (0x0003e146) list_single_cale_mrui_row_pane_g

0xea52,	// (0x0003cdbe) list_recal_vselct_arw_lo_pane

0xea5a,	// (0x0003cdc6) list_recal_vselct_arw_up_pane

0xea62,	// (0x0003cdce) list_recal_vselct_pane

0x915d,	// (0x000374c9) btmg_button_pane

0x9167,	// (0x000374d3) main_btmg_pane_g1

0x9c9f,	// (0x0003800b) bg_button_pane_cp044

0xecb7,	// (0x0003d023) btmg_button_pane_t1

0xc489,	// (0x0003a7f5) aid_listscroll_gen

0xab27,	// (0x00038e93) main_cntbar_detail_pane

0xe5cc,	// (0x0003c938) list_cmail_folder_pane

0xc87e,	// (0x0003abea) sp_fs_scroll_pane_cp03_ParamLimits

0x8c15,	// (0x00036f81) list_single_fs_dyc_pane_cp01_ParamLimits

0x8c15,	// (0x00036f81) list_single_fs_dyc_pane_cp01

0xecc5,	// (0x0003d031) aid_size_cmail_indent

0xecce,	// (0x0003d03a) list_single_dyc_row_pane_cp01

0x91a3,	// (0x0003750f) cntbar_detail_list_pane_ParamLimits

0x91a3,	// (0x0003750f) cntbar_detail_list_pane

0x91ef,	// (0x0003755b) main_cntbar_detail_cont_pane_ParamLimits

0x91ef,	// (0x0003755b) main_cntbar_detail_cont_pane

0xc87e,	// (0x0003abea) scroll_pane_cp032_ParamLimits

0xc87e,	// (0x0003abea) scroll_pane_cp032

0x9203,	// (0x0003756f) cntbar_detail_list_event_pane_ParamLimits

0x9203,	// (0x0003756f) cntbar_detail_list_event_pane

0x91b3,	// (0x0003751f) cntbar_detail_list_shct_pane

0xa851,	// (0x00038bbd) aid_list_gen

0xecd7,	// (0x0003d043) aid_scroll

0xece0,	// (0x0003d04c) aid_size_touch_scroll_bar

0x7400,	// (0x0003576c) aid_list_double

0x73ee,	// (0x0003575a) aid_list_single

0x73ee,	// (0x0003575a) aid_list_single_lg

0x9213,	// (0x0003757f) aid_list_z_g_a_sm

0x921b,	// (0x00037587) aid_list_z_g_d

0x9223,	// (0x0003758f) aid_txt_z_prm

0x9231,	// (0x0003759d) aid_txt_z_prm_cp01

0x923f,	// (0x000375ab) aid_txt_z_sec

0x924d,	// (0x000375b9) main_cntbar_detail_cont_pane_g1_ParamLimits

0x924d,	// (0x000375b9) main_cntbar_detail_cont_pane_g1

0x9261,	// (0x000375cd) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9261,	// (0x000375cd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6c,	// (0x0003e1d8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6c,	// (0x0003e1d8) main_cntbar_detail_cont_pane_g

0xece9,	// (0x0003d055) main_cntbar_detail_cont_pane_t1

0xecf7,	// (0x0003d063) main_cntbar_detail_cont_pane_t2

0xed05,	// (0x0003d071) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe71,	// (0x0003e1dd) main_cntbar_detail_cont_pane_t

0x9271,	// (0x000375dd) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9271,	// (0x000375dd) cell_cntbar_detail_list_shct_pane

0xed13,	// (0x0003d07f) cntbar_detail_list_shct_pane_g1

0xed1c,	// (0x0003d088) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe78,	// (0x0003e1e4) cntbar_detail_list_shct_pane_g

0x9285,	// (0x000375f1) cntbar_detail_list_event_pane_g1_ParamLimits

0x9285,	// (0x000375f1) cntbar_detail_list_event_pane_g1

0x9291,	// (0x000375fd) cntbar_detail_list_event_pane_g2_ParamLimits

0x9291,	// (0x000375fd) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7d,	// (0x0003e1e9) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7d,	// (0x0003e1e9) cntbar_detail_list_event_pane_g

0x92fd,	// (0x00037669) cntbar_detail_list_event_pane_t1_ParamLimits

0x92fd,	// (0x00037669) cntbar_detail_list_event_pane_t1

0x9312,	// (0x0003767e) cntbar_detail_list_event_pane_t2_ParamLimits

0x9312,	// (0x0003767e) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8a,	// (0x0003e1f6) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8a,	// (0x0003e1f6) cntbar_detail_list_event_pane_t

0xc8b1,	// (0x0003ac1d) cell_cntbar_detail_list_shct_pane_g1

0xafd6,	// (0x00039342) navi_pane_mv_g3

0xab27,	// (0x00038e93) main_cntbar_detail_pane_ParamLimits

0x9c9f,	// (0x0003800b) main_notif_wgt_pane

0x60c2,	// (0x0003442e) aid_tch_main_mp4_pane_g4

0x62ce,	// (0x0003463a) popup_slider_window_cp02

0xea48,	// (0x0003cdb4) list_recal_day_event_pane

0x9171,	// (0x000374dd) cntbar_detail_btn_pane_ParamLimits

0x9171,	// (0x000374dd) cntbar_detail_btn_pane

0x918a,	// (0x000374f6) cntbar_detail_btn_pane_cp01_ParamLimits

0x918a,	// (0x000374f6) cntbar_detail_btn_pane_cp01

0x91b3,	// (0x0003751f) cntbar_detail_list_shct_pane_ParamLimits

0x91c3,	// (0x0003752f) cntbar_detail_pane_g1_ParamLimits

0x91c3,	// (0x0003752f) cntbar_detail_pane_g1

0x91d3,	// (0x0003753f) cntbar_detail_pane_t1_ParamLimits

0x91d3,	// (0x0003753f) cntbar_detail_pane_t1

0x929d,	// (0x00037609) cntbar_detail_list_event_pane_g3_ParamLimits

0x929d,	// (0x00037609) cntbar_detail_list_event_pane_g3

0x92b5,	// (0x00037621) cntbar_detail_list_event_pane_g4_ParamLimits

0x92b5,	// (0x00037621) cntbar_detail_list_event_pane_g4

0x92cd,	// (0x00037639) cntbar_detail_list_event_pane_g5_ParamLimits

0x92cd,	// (0x00037639) cntbar_detail_list_event_pane_g5

0x92e5,	// (0x00037651) cntbar_detail_list_event_pane_g6_ParamLimits

0x92e5,	// (0x00037651) cntbar_detail_list_event_pane_g6

0x9327,	// (0x00037693) cntbar_detail_list_event_pane_t3_ParamLimits

0x9327,	// (0x00037693) cntbar_detail_list_event_pane_t3

0x9339,	// (0x000376a5) popup_notif_wgt_window_ParamLimits

0x9339,	// (0x000376a5) popup_notif_wgt_window

0x9352,	// (0x000376be) popup_submenu_window_cp01_ParamLimits

0x9352,	// (0x000376be) popup_submenu_window_cp01

0xa5aa,	// (0x00038916) bg_popup_window_pane_cp10

0xed25,	// (0x0003d091) listscroll_notif_wgt_pane

0xed37,	// (0x0003d0a3) list_notif_wgt_window

0xed40,	// (0x0003d0ac) scroll_pane_cp033

0x9368,	// (0x000376d4) list_notif_wgt_row_pane_ParamLimits

0x9368,	// (0x000376d4) list_notif_wgt_row_pane

0xed49,	// (0x0003d0b5) aid_size_list_notif_wgt_del

0xed56,	// (0x0003d0c2) list_notif_wgt_row_pane_g1

0xed62,	// (0x0003d0ce) list_notif_wgt_row_pane_g2

0xed71,	// (0x0003d0dd) list_notif_wgt_row_pane_g3

0x0002,

0xfe91,	// (0x0003e1fd) list_notif_wgt_row_pane_g

0xed7e,	// (0x0003d0ea) list_notif_wgt_row_pane_t1

0xed94,	// (0x0003d100) list_notif_wgt_row_pane_t2

0xeda6,	// (0x0003d112) list_notif_wgt_row_pane_t3

0x0002,

0xfe98,	// (0x0003e204) list_notif_wgt_row_pane_t

0xd51f,	// (0x0003b88b) list_recal_day_event_pane_g1

0xedb8,	// (0x0003d124) list_recal_day_event_pane_t1

0x9c9f,	// (0x0003800b) bg_button_pane_cp045

0x9378,	// (0x000376e4) cntbar_detail_btn_pane_t1

0xc49d,	// (0x0003a809) main_callh_pane_ParamLimits

0xc49d,	// (0x0003a809) main_callh_pane

0x9c9f,	// (0x0003800b) main_coverflow0_pane

0x9c9f,	// (0x0003800b) main_wgtman_pane

0x8118,	// (0x00036484) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8118,	// (0x00036484) main_fs_bigclock_unlock_btn_pane

0x8b91,	// (0x00036efd) bg_button_pane_cp16

0x8ba1,	// (0x00036f0d) cell_tport_appsw_pane_g3

0x9386,	// (0x000376f2) cf0_flow_pane_ParamLimits

0x9386,	// (0x000376f2) cf0_flow_pane

0xedc7,	// (0x0003d133) listscroll_cf0_pane

0xedd2,	// (0x0003d13e) main_cf0_pane_g1

0x939b,	// (0x00037707) main_cf0_pane_t1_ParamLimits

0x939b,	// (0x00037707) main_cf0_pane_t1

0x93b2,	// (0x0003771e) main_cf0_pane_t2_ParamLimits

0x93b2,	// (0x0003771e) main_cf0_pane_t2

0x0001,

0xfea4,	// (0x0003e210) main_cf0_pane_t_ParamLimits

0xfea4,	// (0x0003e210) main_cf0_pane_t

0xede4,	// (0x0003d150) scroll_pane_cp11

0x93c9,	// (0x00037735) cf0_flow_pane_g1

0x93d1,	// (0x0003773d) cf0_flow_pane_g2

0x0001,

0xfea9,	// (0x0003e215) cf0_flow_pane_g

0x93d9,	// (0x00037745) cf0_flow_pane_t1

0x9c9f,	// (0x0003800b) main_call6_pane

0x9c9f,	// (0x0003800b) main_calllock_pane

0x1839,	// (0x0002fba5) call6_btn_grp_pane_ParamLimits

0x1839,	// (0x0002fba5) call6_btn_grp_pane

0x1853,	// (0x0002fbbf) call6_pane_g1_ParamLimits

0x1853,	// (0x0002fbbf) call6_pane_g1

0x1869,	// (0x0002fbd5) popup_call6_1st_window_ParamLimits

0x1869,	// (0x0002fbd5) popup_call6_1st_window

0x187a,	// (0x0002fbe6) popup_call6_2nd_window_ParamLimits

0x187a,	// (0x0002fbe6) popup_call6_2nd_window

0x188b,	// (0x0002fbf7) cell_call6_btn_pane_ParamLimits

0x188b,	// (0x0002fbf7) cell_call6_btn_pane

0xa5aa,	// (0x00038916) bg_popup_call2_in_pane_cp03

0xedef,	// (0x0003d15b) popup_call6_1st_window_g1

0xedf7,	// (0x0003d163) popup_call6_1st_window_g2

0xedff,	// (0x0003d16b) popup_call6_1st_window_g3

0x0002,

0xfeae,	// (0x0003e21a) popup_call6_1st_window_g

0xee07,	// (0x0003d173) popup_call6_1st_window_t1

0xee16,	// (0x0003d182) popup_call6_1st_window_t2

0xee24,	// (0x0003d190) popup_call6_1st_window_t3

0x0002,

0xfeb5,	// (0x0003e221) popup_call6_1st_window_t

0xa5aa,	// (0x00038916) bg_popup_call2_in_pane_cp04

0xedef,	// (0x0003d15b) popup_call6_2nd_window_g1

0xedf7,	// (0x0003d163) popup_call6_2nd_window_g2

0xedff,	// (0x0003d16b) popup_call6_2nd_window_g3

0x0002,

0xfeae,	// (0x0003e21a) popup_call6_2nd_window_g

0xee07,	// (0x0003d173) popup_call6_2nd_window_t1

0x1995,	// (0x0002fd01) bg_button_pane_cp15

0x93e7,	// (0x00037753) cell_call6_btn_pane_g1

0x93f0,	// (0x0003775c) cell_call6_btn_pane_t1

0x93ff,	// (0x0003776b) listscroll_wgtman_pane_ParamLimits

0x93ff,	// (0x0003776b) listscroll_wgtman_pane

0x9420,	// (0x0003778c) wgtman_btn_pane_ParamLimits

0x9420,	// (0x0003778c) wgtman_btn_pane

0xaddd,	// (0x00039149) aid_scroll_copy1

0xee32,	// (0x0003d19e) list_wgtman_pane

0x9463,	// (0x000377cf) wgtman_btn_pane_g1_ParamLimits

0x9463,	// (0x000377cf) wgtman_btn_pane_g1

0x948f,	// (0x000377fb) wgtman_btn_pane_t1_ParamLimits

0x948f,	// (0x000377fb) wgtman_btn_pane_t1

0xee3c,	// (0x0003d1a8) wgtman_btn_pane_t2_ParamLimits

0xee3c,	// (0x0003d1a8) wgtman_btn_pane_t2

0x0001,

0xfebc,	// (0x0003e228) wgtman_btn_pane_t_ParamLimits

0xfebc,	// (0x0003e228) wgtman_btn_pane_t

0x94cc,	// (0x00037838) listrow_wgtman_pane_ParamLimits

0x94cc,	// (0x00037838) listrow_wgtman_pane

0x94de,	// (0x0003784a) listrow_wgtman_pane_g1

0x94eb,	// (0x00037857) listrow_wgtman_pane_g2

0x0001,

0xfec1,	// (0x0003e22d) listrow_wgtman_pane_g

0x9509,	// (0x00037875) listrow_wgtman_pane_t1

0x9521,	// (0x0003788d) listrow_wgtman_pane_t2

0x0001,

0xfec6,	// (0x0003e232) listrow_wgtman_pane_t

0x9547,	// (0x000378b3) wait_bar_pane_cp09

0xee53,	// (0x0003d1bf) main_calllock_btn_pane

0xee5d,	// (0x0003d1c9) main_calllock_pane_g1

0x9c9f,	// (0x0003800b) bg_button_pane_cp17

0xee69,	// (0x0003d1d5) main_calllock_btn_pane_g1

0xee72,	// (0x0003d1de) main_calllock_btn_pane_t1

0x9c9f,	// (0x0003800b) main_dialer3_pane

0x9c9f,	// (0x0003800b) main_fmrd2_pane

0xc8b1,	// (0x0003ac1d) main_fs_bigclock_unlock_btn_pane_g1

0x9561,	// (0x000378cd) main_fs_bigclock_unlock_btn_pane_t1

0x956f,	// (0x000378db) area_fmrd2_info_pane_ParamLimits

0x956f,	// (0x000378db) area_fmrd2_info_pane

0x9580,	// (0x000378ec) area_fmrd2_visual_pane_ParamLimits

0x9580,	// (0x000378ec) area_fmrd2_visual_pane

0x958e,	// (0x000378fa) fmrd2_indi_pane_ParamLimits

0x958e,	// (0x000378fa) fmrd2_indi_pane

0x959b,	// (0x00037907) area_fmrd2_visual_pane_g1

0x95a3,	// (0x0003790f) area_fmrd2_visual_pane_t1

0x95b3,	// (0x0003791f) area_fmrd2_visual_pane_t2

0x95c3,	// (0x0003792f) area_fmrd2_visual_pane_t3

0x0002,

0xfed0,	// (0x0003e23c) area_fmrd2_visual_pane_t

0x95d3,	// (0x0003793f) area_fmrd2_info_pane_g1

0x95db,	// (0x00037947) area_fmrd2_info_pane_t1

0x95eb,	// (0x00037957) area_fmrd2_info_pane_t2

0x95fb,	// (0x00037967) area_fmrd2_info_pane_t3

0x960b,	// (0x00037977) area_fmrd2_info_pane_t4

0x0003,

0xfed7,	// (0x0003e243) area_fmrd2_info_pane_t

0x9619,	// (0x00037985) fmrd2_indi_pane_t1

0x9629,	// (0x00037995) fmrd2_indi_pane_t2

0x9639,	// (0x000379a5) fmrd2_indi_pane_t3

0x0002,

0xfee0,	// (0x0003e24c) fmrd2_indi_pane_t

0xe11d,	// (0x0003c489) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe11d,	// (0x0003c489) list_single_fs_bigclock_indicator_pane_g5

0xe1ce,	// (0x0003c53a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1ce,	// (0x0003c53a) list_single_fs_bigclock_indicator_pane_t5

0x8d2c,	// (0x00037098) aid_cell_bcale_month_pane_ParamLimits

0x8d2c,	// (0x00037098) aid_cell_bcale_month_pane

0x8d4a,	// (0x000370b6) bcale_month_pane_ParamLimits

0x8d4a,	// (0x000370b6) bcale_month_pane

0x8d6e,	// (0x000370da) bcale_preview_pane_ParamLimits

0x8d6e,	// (0x000370da) bcale_preview_pane

0xec4f,	// (0x0003cfbb) list_single_fs_bigclock_pane_t1_ParamLimits

0xec6e,	// (0x0003cfda) list_single_fs_bigclock_pane_t2_ParamLimits

0xec6e,	// (0x0003cfda) list_single_fs_bigclock_pane_t2

0x0001,

0xfe62,	// (0x0003e1ce) list_single_fs_bigclock_pane_t_ParamLimits

0xfe62,	// (0x0003e1ce) list_single_fs_bigclock_pane_t

0x9559,	// (0x000378c5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfecb,	// (0x0003e237) main_fs_bigclock_unlock_btn_pane_g

0x9649,	// (0x000379b5) aid_dia3_key_size_ParamLimits

0x9649,	// (0x000379b5) aid_dia3_key_size

0x9658,	// (0x000379c4) aid_dia3_listrow_size_ParamLimits

0x9658,	// (0x000379c4) aid_dia3_listrow_size

0x966d,	// (0x000379d9) dia3_keypad_fun_pane_ParamLimits

0x966d,	// (0x000379d9) dia3_keypad_fun_pane

0x9689,	// (0x000379f5) dia3_keypad_num_pane_ParamLimits

0x9689,	// (0x000379f5) dia3_keypad_num_pane

0x96a4,	// (0x00037a10) dia3_listscroll_pane_ParamLimits

0x96a4,	// (0x00037a10) dia3_listscroll_pane

0x96b7,	// (0x00037a23) dia3_numentry_pane_ParamLimits

0x96b7,	// (0x00037a23) dia3_numentry_pane

0xee81,	// (0x0003d1ed) dia3_list_pane

0xee8c,	// (0x0003d1f8) scroll_pane_cp12

0x9c9f,	// (0x0003800b) bg_dia3_numentry_pane

0x96cb,	// (0x00037a37) dia3_numentry_pane_t1

0x96da,	// (0x00037a46) cell_dia3_key_num_pane

0x96e2,	// (0x00037a4e) cell_dia3_key0_fun_pane_ParamLimits

0x96e2,	// (0x00037a4e) cell_dia3_key0_fun_pane

0x96f6,	// (0x00037a62) cell_dia3_key1_fun_pane_ParamLimits

0x96f6,	// (0x00037a62) cell_dia3_key1_fun_pane

0x970e,	// (0x00037a7a) dia3_listrow_pane

0xde70,	// (0x0003c1dc) bg_dia3_numentry_pane_g1

0x9c9f,	// (0x0003800b) bg_button_pane_cp21

0xee97,	// (0x0003d203) cell_dia3_key_num_pane_t1

0xeea5,	// (0x0003d211) cell_dia3_key_num_pane_t2

0xeeb4,	// (0x0003d220) cell_dia3_key_num_pane_t3

0xeec3,	// (0x0003d22f) cell_dia3_key_num_pane_t4

0x0003,

0xfee7,	// (0x0003e253) cell_dia3_key_num_pane_t

0x9c9f,	// (0x0003800b) bg_button_pane_cp19

0x9720,	// (0x00037a8c) cell_dia3_key0_fun_pane_g1

0x9c9f,	// (0x0003800b) bg_button_pane_cp20

0x9728,	// (0x00037a94) cell_dia3_key1_fun_pane_g1

0x9730,	// (0x00037a9c) area_left_week_number_pane

0x973c,	// (0x00037aa8) area_top_day_name_pane

0x974f,	// (0x00037abb) frame_month_view_pane

0xeed2,	// (0x0003d23e) grid_month_view_pane

0x9762,	// (0x00037ace) cell_top_day_name_pane_ParamLimits

0x9762,	// (0x00037ace) cell_top_day_name_pane

0x978f,	// (0x00037afb) cell_area_left_week_number_pane_ParamLimits

0x978f,	// (0x00037afb) cell_area_left_week_number_pane

0x97a3,	// (0x00037b0f) cell_month_view_pane_ParamLimits

0x97a3,	// (0x00037b0f) cell_month_view_pane

0xeee0,	// (0x0003d24c) frm_month_g1

0x97d0,	// (0x00037b3c) frm_month_g2

0x97e3,	// (0x00037b4f) frm_month_g3

0x97f6,	// (0x00037b62) frm_month_g4

0x9809,	// (0x00037b75) frm_month_g5

0x981c,	// (0x00037b88) frm_month_g6

0x982f,	// (0x00037b9b) frm_month_g7

0xeeed,	// (0x0003d259) frm_month_g8

0x9842,	// (0x00037bae) frm_month_g9

0x9852,	// (0x00037bbe) frm_month_g10

0x9862,	// (0x00037bce) frm_month_g11

0x9872,	// (0x00037bde) frm_month_g12

0x9884,	// (0x00037bf0) frm_month_g13

0x9896,	// (0x00037c02) frm_month_g14

0x98aa,	// (0x00037c16) frm_month_g15

0x98be,	// (0x00037c2a) frm_month_g16

0x000f,

0xfef0,	// (0x0003e25c) frm_month_g

0xeefa,	// (0x0003d266) cell_top_day_name_pane_t1

0x98d2,	// (0x00037c3e) cell_area_left_week_number_pane_g1

0x98de,	// (0x00037c4a) cell_area_left_week_number_pane_t1

0xcb14,	// (0x0003ae80) cell_month_view_pane_g1

0x98f1,	// (0x00037c5d) cell_month_view_pane_t1

0x9c9f,	// (0x0003800b) main_fps_pane

0xe3f4,	// (0x0003c760) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3f4,	// (0x0003c760) cmail_ddmenu_btn02_pane_cp1

0xe410,	// (0x0003c77c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe410,	// (0x0003c77c) cmail_ddmenu_btn02_pane_cp2

0x9025,	// (0x00037391) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9025,	// (0x00037391) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe15,	// (0x0003e181) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe15,	// (0x0003e181) cmail_ddmenu_btn02_pane_g

0x9043,	// (0x000373af) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9043,	// (0x000373af) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1a,	// (0x0003e186) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1a,	// (0x0003e186) cmail_ddmenu_btn02_pane_t

0x9904,	// (0x00037c70) fps_text_pane_ParamLimits

0x9904,	// (0x00037c70) fps_text_pane

0x991b,	// (0x00037c87) main_fps_pane_g1_ParamLimits

0x991b,	// (0x00037c87) main_fps_pane_g1

0x9935,	// (0x00037ca1) wait_bar_pane_cp010_ParamLimits

0x9935,	// (0x00037ca1) wait_bar_pane_cp010

0x9946,	// (0x00037cb2) fps_text_pane_t1_ParamLimits

0x9946,	// (0x00037cb2) fps_text_pane_t1

0xe5a8,	// (0x0003c914) cam4_image_uncrop_pane_g1

0xe5b1,	// (0x0003c91d) cam4_image_uncrop_pane_g2

0x64e6,	// (0x00034852) cam4_image_uncrop_pane_g3

0x64ef,	// (0x0003485b) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0003dc43) cam4_image_uncrop_pane_g

0x970e,	// (0x00037a7a) dia3_listrow_pane_ParamLimits

0x9c9f,	// (0x0003800b) main_phob2_pane

0x8b62,	// (0x00036ece) cell_tport_appsw_pane_cp02_ParamLimits

0x8b62,	// (0x00036ece) cell_tport_appsw_pane_cp02

0x8b76,	// (0x00036ee2) cell_tport_appsw_pane_cp03_ParamLimits

0x8b76,	// (0x00036ee2) cell_tport_appsw_pane_cp03

0x9c9f,	// (0x0003800b) phob2_contact_card_pane

0x9c9f,	// (0x0003800b) phob2_listscroll_pane

0xef0d,	// (0x0003d279) phob2_list_pane

0xef15,	// (0x0003d281) scroll_pane_cp034

0x995e,	// (0x00037cca) phob2_cc_data_pane_ParamLimits

0x995e,	// (0x00037cca) phob2_cc_data_pane

0x997d,	// (0x00037ce9) phob2_cc_listscroll_pane_ParamLimits

0x997d,	// (0x00037ce9) phob2_cc_listscroll_pane

0x94cc,	// (0x00037838) list_double_large_graphic_phob2_pane_ParamLimits

0x94cc,	// (0x00037838) list_double_large_graphic_phob2_pane

0x999b,	// (0x00037d07) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x999b,	// (0x00037d07) list_double_large_graphic_phob2_pane_g1

0x99b1,	// (0x00037d1d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99b1,	// (0x00037d1d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff11,	// (0x0003e27d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff11,	// (0x0003e27d) list_double_large_graphic_phob2_pane_g

0x99bd,	// (0x00037d29) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99bd,	// (0x00037d29) list_double_large_graphic_phob2_pane_t1

0x99d2,	// (0x00037d3e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99d2,	// (0x00037d3e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff16,	// (0x0003e282) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff16,	// (0x0003e282) list_double_large_graphic_phob2_pane_t

0x9c9f,	// (0x0003800b) list_highlight_pane_cp024

0x99e4,	// (0x00037d50) phob2_cc_button_pane

0x99ec,	// (0x00037d58) phob2_cc_data_pane_g1_ParamLimits

0x99ec,	// (0x00037d58) phob2_cc_data_pane_g1

0x9a01,	// (0x00037d6d) phob2_cc_data_pane_g2_ParamLimits

0x9a01,	// (0x00037d6d) phob2_cc_data_pane_g2

0x0001,

0xff1b,	// (0x0003e287) phob2_cc_data_pane_g_ParamLimits

0xff1b,	// (0x0003e287) phob2_cc_data_pane_g

0x9a11,	// (0x00037d7d) phob2_cc_data_pane_t1_ParamLimits

0x9a11,	// (0x00037d7d) phob2_cc_data_pane_t1

0x9a29,	// (0x00037d95) phob2_cc_data_pane_t2_ParamLimits

0x9a29,	// (0x00037d95) phob2_cc_data_pane_t2

0x9a41,	// (0x00037dad) phob2_cc_data_pane_t3_ParamLimits

0x9a41,	// (0x00037dad) phob2_cc_data_pane_t3

0x0002,

0xff20,	// (0x0003e28c) phob2_cc_data_pane_t_ParamLimits

0xff20,	// (0x0003e28c) phob2_cc_data_pane_t

0xef1d,	// (0x0003d289) phob2_cc_list_pane_ParamLimits

0xef1d,	// (0x0003d289) phob2_cc_list_pane

0xd5b6,	// (0x0003b922) scroll_pane_cp035_ParamLimits

0xd5b6,	// (0x0003b922) scroll_pane_cp035

0xab27,	// (0x00038e93) bg_button_pane_cp033

0xef29,	// (0x0003d295) phob2_cc_button_pane_g1

0xef35,	// (0x0003d2a1) phob2_cc_button_pane_t1

0xef4a,	// (0x0003d2b6) phob2_cc_button_pane_t2

0x0001,

0xff27,	// (0x0003e293) phob2_cc_button_pane_t

0x9a59,	// (0x00037dc5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a59,	// (0x00037dc5) list_double_large_graphic_phob2_cc_pane

0x9a89,	// (0x00037df5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a89,	// (0x00037df5) list_double_large_graphic_phob2_cc_pane_g1

0x9a95,	// (0x00037e01) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a95,	// (0x00037e01) list_double_large_graphic_phob2_cc_pane_g2

0x9aa1,	// (0x00037e0d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9aa1,	// (0x00037e0d) list_double_large_graphic_phob2_cc_pane_g3

0x9aad,	// (0x00037e19) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9aad,	// (0x00037e19) list_double_large_graphic_phob2_cc_pane_g4

0x9ab9,	// (0x00037e25) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9ab9,	// (0x00037e25) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2c,	// (0x0003e298) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2c,	// (0x0003e298) list_double_large_graphic_phob2_cc_pane_g

0x9ac5,	// (0x00037e31) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ac5,	// (0x00037e31) list_double_large_graphic_phob2_cc_pane_t1

0x9aee,	// (0x00037e5a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9aee,	// (0x00037e5a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff37,	// (0x0003e2a3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff37,	// (0x0003e2a3) list_double_large_graphic_phob2_cc_pane_t

0xef5c,	// (0x0003d2c8) list_highlight_pane_cp025_ParamLimits

0xef5c,	// (0x0003d2c8) list_highlight_pane_cp025

0xab27,	// (0x00038e93) bg_button_pane_cp033_ParamLimits

0xef29,	// (0x0003d295) phob2_cc_button_pane_g1_ParamLimits

0xef35,	// (0x0003d2a1) phob2_cc_button_pane_t1_ParamLimits

0xef4a,	// (0x0003d2b6) phob2_cc_button_pane_t2_ParamLimits

0xff27,	// (0x0003e293) phob2_cc_button_pane_t_ParamLimits

0x1989,	// (0x0002fcf5) popup_wgtman_window

0xd3cb,	// (0x0003b737) scroll_pane_cp038

0x9445,	// (0x000377b1) wgtman_btn_pane_cp_01_ParamLimits

0x9445,	// (0x000377b1) wgtman_btn_pane_cp_01

0xef6a,	// (0x0003d2d6) wgtman_content_pane

0xef73,	// (0x0003d2df) wgtman_heading_pane

0x9c9f,	// (0x0003800b) bg_heading_pane_cp02

0xef7c,	// (0x0003d2e8) wgtman_heading_pane_g1

0xef84,	// (0x0003d2f0) wgtman_heading_pane_t1

0xef92,	// (0x0003d2fe) scroll_pane_cp036

0xef9a,	// (0x0003d306) wgtman_list_pane

0xefa2,	// (0x0003d30e) wgtman_list_pane_t1_ParamLimits

0xefa2,	// (0x0003d30e) wgtman_list_pane_t1

0x64d2,	// (0x0003483e) cam4_grid_pane

0x6eba,	// (0x00035226) bg_button_pane_cp015_ParamLimits

0x6ecc,	// (0x00035238) bg_button_pane_cp016_ParamLimits

0x6edf,	// (0x0003524b) bg_button_pane_cp017_ParamLimits

0x6f37,	// (0x000352a3) popup_vitu2_query_window_g3_ParamLimits

0x6f37,	// (0x000352a3) popup_vitu2_query_window_g3

0x6ff4,	// (0x00035360) popup_vitu2_query_window_t6_ParamLimits

0x6ff4,	// (0x00035360) popup_vitu2_query_window_t6

0x701f,	// (0x0003538b) popup_vitu2_query_window_t7_ParamLimits

0x701f,	// (0x0003538b) popup_vitu2_query_window_t7

0xe5a8,	// (0x0003c914) cam4_grid_pane_g1

0xe5b1,	// (0x0003c91d) cam4_grid_pane_g2

0xefbc,	// (0x0003d328) cam4_grid_pane_g3

0xefc5,	// (0x0003d331) cam4_grid_pane_g4

0x0003,

0xff3c,	// (0x0003e2a8) cam4_grid_pane_g

0x271e,	// (0x00030a8a) aid_placing_vt_slider_lsc_ParamLimits

0x2a29,	// (0x00030d95) vidtel_button_pane_ParamLimits

0x2a29,	// (0x00030d95) vidtel_button_pane

0x9c9f,	// (0x0003800b) bg_button_pane_cp034

0xefd0,	// (0x0003d33c) vidtel_button_pane_g1

0xefd8,	// (0x0003d344) vidtel_button_pane_t1

0xd4fd,	// (0x0003b869) aid_size_vtel_slider_touch

0xd5b6,	// (0x0003b922) scroll_pane_cp039

0x7dfe,	// (0x0003616a) ncim_query_button_pane_cp01_ParamLimits

0x7e1d,	// (0x00036189) ncimui_query_pane_g1_ParamLimits

0xab27,	// (0x00038e93) input_focus_pane_cp012_ParamLimits

0xdeae,	// (0x0003c21a) ncim_query_entry_pane_t1_ParamLimits

0xd5b6,	// (0x0003b922) scroll_pane_cp039_ParamLimits

0xaec1,	// (0x0003922d) navi_pane_bcale_mc_g1

0xaec9,	// (0x00039235) navi_pane_bcale_mc_t1

0xe444,	// (0x0003c7b0) main_sp_fs_email_pane_g1

0xe450,	// (0x0003c7bc) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x0003e03e) main_sp_fs_email_pane_g

0xe8da,	// (0x0003cc46) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8da,	// (0x0003cc46) list_single_cale_mrui_row_pane_g3

0x9063,	// (0x000373cf) list_single_recal_day_pane_g5_event_pane

0xeab9,	// (0x0003ce25) list_single_recal_day_pane_g7

0xefee,	// (0x0003d35a) list_recal_day_event_pane_cp01

0xeff7,	// (0x0003d363) list_recal_vselct_arw_lo_pane_cp01

0xefff,	// (0x0003d36b) list_recal_vselct_arw_up_pane_cp01

0xf007,	// (0x0003d373) list_recal_vselct_pane_cp01

0xd51f,	// (0x0003b88b) list_recal_day_event_pane_cp01_g1

0xf011,	// (0x0003d37d) list_recal_day_event_pane_cp01_t1

0xeac1,	// (0x0003ce2d) list_single_recal_day_pane_t1_ParamLimits

0xead3,	// (0x0003ce3f) list_single_recal_day_pane_t2_ParamLimits

0xfe2a,	// (0x0003e196) list_single_recal_day_pane_t_ParamLimits

0xa317,	// (0x00038683) bg_notes_pane_ParamLimits

0xa3ba,	// (0x00038726) list_notes_pane_ParamLimits

0x1bfb,	// (0x0002ff67) scroll_pane_cp06_ParamLimits

0xa3dc,	// (0x00038748) main_notes_pane_ParamLimits

0xab27,	// (0x00038e93) main_welc_pane

0x9b2e,	// (0x00037e9a) main_welc_body_pane_ParamLimits

0x9b2e,	// (0x00037e9a) main_welc_body_pane

0x9b4c,	// (0x00037eb8) main_welc_opti_pane_ParamLimits

0x9b4c,	// (0x00037eb8) main_welc_opti_pane

0x9ba0,	// (0x00037f0c) main_welc_pane_t1_ParamLimits

0x9ba0,	// (0x00037f0c) main_welc_pane_t1

0x9c1b,	// (0x00037f87) main_welc_body_row_pane_ParamLimits

0x9c1b,	// (0x00037f87) main_welc_body_row_pane

0xd705,	// (0x0003ba71) main_welc_opti_row_pane_ParamLimits

0xd705,	// (0x0003ba71) main_welc_opti_row_pane

0xf01f,	// (0x0003d38b) main_welc_opti_row_pane_g1

0x9c2f,	// (0x00037f9b) main_welc_opti_row_pane_t1

0xf027,	// (0x0003d393) main_welc_body_row_pane_t1

0xed2f,	// (0x0003d09b) popup_notif_wgt_heading_pane

0xed49,	// (0x0003d0b5) aid_size_list_notif_wgt_del_ParamLimits

0xed56,	// (0x0003d0c2) list_notif_wgt_row_pane_g1_ParamLimits

0xed62,	// (0x0003d0ce) list_notif_wgt_row_pane_g2_ParamLimits

0xed71,	// (0x0003d0dd) list_notif_wgt_row_pane_g3_ParamLimits

0xfe91,	// (0x0003e1fd) list_notif_wgt_row_pane_g_ParamLimits

0xed7e,	// (0x0003d0ea) list_notif_wgt_row_pane_t1_ParamLimits

0xed94,	// (0x0003d100) list_notif_wgt_row_pane_t2_ParamLimits

0xeda6,	// (0x0003d112) list_notif_wgt_row_pane_t3_ParamLimits

0xfe98,	// (0x0003e204) list_notif_wgt_row_pane_t_ParamLimits

0x94de,	// (0x0003784a) listrow_wgtman_pane_g1_ParamLimits

0x94eb,	// (0x00037857) listrow_wgtman_pane_g2_ParamLimits

0xfec1,	// (0x0003e22d) listrow_wgtman_pane_g_ParamLimits

0x9509,	// (0x00037875) listrow_wgtman_pane_t1_ParamLimits

0x9521,	// (0x0003788d) listrow_wgtman_pane_t2_ParamLimits

0xfec6,	// (0x0003e232) listrow_wgtman_pane_t_ParamLimits

0x9547,	// (0x000378b3) wait_bar_pane_cp09_ParamLimits

0x9c9f,	// (0x0003800b) bg_popup_heading_pane_cp02

0xf036,	// (0x0003d3a2) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0003d3aa) popup_notif_wgt_heading_pane_t1

0x9c9f,	// (0x0003800b) main_vids_pane

0x9c9f,	// (0x0003800b) vids_listscroll_pane

0x9c3e,	// (0x00037faa) scroll_pane_cp040

0x9c9f,	// (0x0003800b) vids_list_pane

0x9c49,	// (0x00037fb5) vids_list_double_pane_ParamLimits

0x9c49,	// (0x00037fb5) vids_list_double_pane

0x9c5a,	// (0x00037fc6) vids_list_double_pane_g1

0x9c63,	// (0x00037fcf) vids_list_double_pane_t1

0x9c73,	// (0x00037fdf) vids_list_double_pane_t2

0x0001,

0xff53,	// (0x0003e2bf) vids_list_double_pane_t

0x197b,	// (0x0002fce7) main_ncimui_pane_ParamLimits

0x7c34,	// (0x00035fa0) main_ncimui_pane_g1_ParamLimits

0x7c40,	// (0x00035fac) main_ncimui_pane_g2_ParamLimits

0x7c40,	// (0x00035fac) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x0003df3f) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x0003df3f) main_ncimui_pane_g

0x9b67,	// (0x00037ed3) main_welc_pane_g1_ParamLimits

0x9b67,	// (0x00037ed3) main_welc_pane_g1

0x9b7c,	// (0x00037ee8) main_welc_pane_g2_ParamLimits

0x9b7c,	// (0x00037ee8) main_welc_pane_g2

0x0002,

0xff45,	// (0x0003e2b1) main_welc_pane_g_ParamLimits

0xff45,	// (0x0003e2b1) main_welc_pane_g

0xa317,	// (0x00038683) listscroll_mce_pane_ParamLimits

0xb016,	// (0x00039382) wait_bar_pane_cp10

0xc491,	// (0x0003a7fd) main_cale_day_pane_ParamLimits

0xc491,	// (0x0003a7fd) main_cale_week_pane_ParamLimits

0xa317,	// (0x00038683) main_messa_pane_ParamLimits

0x5a9f,	// (0x00033e0b) main_clock2_btn_pane_ParamLimits

0x5a9f,	// (0x00033e0b) main_clock2_btn_pane

0xccc8,	// (0x0003b034) main_clock2_btn_pane_cp01_ParamLimits

0xccc8,	// (0x0003b034) main_clock2_btn_pane_cp01

0xe866,	// (0x0003cbd2) list_cale_mrui_pane_ParamLimits

0xeddc,	// (0x0003d148) main_cf0_pane_g2

0x0001,

0xfe9f,	// (0x0003e20b) main_cf0_pane_g

0x9730,	// (0x00037a9c) area_left_week_number_pane_ParamLimits

0x973c,	// (0x00037aa8) area_top_day_name_pane_ParamLimits

0x974f,	// (0x00037abb) frame_month_view_pane_ParamLimits

0xeed2,	// (0x0003d23e) grid_month_view_pane_ParamLimits

0xeee0,	// (0x0003d24c) frm_month_g1_ParamLimits

0x97d0,	// (0x00037b3c) frm_month_g2_ParamLimits

0x97e3,	// (0x00037b4f) frm_month_g3_ParamLimits

0x97f6,	// (0x00037b62) frm_month_g4_ParamLimits

0x9809,	// (0x00037b75) frm_month_g5_ParamLimits

0x981c,	// (0x00037b88) frm_month_g6_ParamLimits

0x982f,	// (0x00037b9b) frm_month_g7_ParamLimits

0xeeed,	// (0x0003d259) frm_month_g8_ParamLimits

0x9842,	// (0x00037bae) frm_month_g9_ParamLimits

0x9852,	// (0x00037bbe) frm_month_g10_ParamLimits

0x9862,	// (0x00037bce) frm_month_g11_ParamLimits

0x9872,	// (0x00037bde) frm_month_g12_ParamLimits

0x9884,	// (0x00037bf0) frm_month_g13_ParamLimits

0x9896,	// (0x00037c02) frm_month_g14_ParamLimits

0x98aa,	// (0x00037c16) frm_month_g15_ParamLimits

0x98be,	// (0x00037c2a) frm_month_g16_ParamLimits

0xfef0,	// (0x0003e25c) frm_month_g_ParamLimits

0xeefa,	// (0x0003d266) cell_top_day_name_pane_t1_ParamLimits

0x98d2,	// (0x00037c3e) cell_area_left_week_number_pane_g1_ParamLimits

0x98de,	// (0x00037c4a) cell_area_left_week_number_pane_t1_ParamLimits

0xcb14,	// (0x0003ae80) cell_month_view_pane_g1_ParamLimits

0x98f1,	// (0x00037c5d) cell_month_view_pane_t1_ParamLimits

0xa30f,	// (0x0003867b) main_clock2_btn_pane_g1

0xf04c,	// (0x0003d3b8) main_clock2_btn_pane_t1

0xab27,	// (0x00038e93) listscroll_cmail_pane_ParamLimits

0xe444,	// (0x0003c7b0) main_sp_fs_email_pane_g1_ParamLimits

0xe450,	// (0x0003c7bc) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x0003e03e) main_sp_fs_email_pane_g_ParamLimits

0xea29,	// (0x0003cd95) list_recal_day_pane_ParamLimits

0xea3a,	// (0x0003cda6) mian_recal_day_pane_t1

0x87c7,	// (0x00036b33) list_single_dyc_row_text_pane_t4_ParamLimits

0x87c7,	// (0x00036b33) list_single_dyc_row_text_pane_t4

0x8810,	// (0x00036b7c) list_single_dyc_row_text_pane_t5_ParamLimits

0x8810,	// (0x00036b7c) list_single_dyc_row_text_pane_t5

0xe4f6,	// (0x0003c862) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4f6,	// (0x0003c862) list_single_dyc_row_text_pane_t6

0x36a9,	// (0x00031a15) aid_mgn_list_cale_time_pane

0x197b,	// (0x0002fce7) main_gallery2_pane_ParamLimits

0xccde,	// (0x0003b04a) main_clock2_pane_cp01_t1

0xccee,	// (0x0003b05a) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0003db15) main_clock2_pane_cp01_t

0x1f8c,	// (0x000302f8) cale_week_scroll_pane_g16_ParamLimits

0x1f8c,	// (0x000302f8) cale_week_scroll_pane_g16

0xa5aa,	// (0x00038916) vorec_slider_pane

0xefd8,	// (0x0003d344) vidtel_button_pane_t1_ParamLimits

0x90c9,	// (0x00037435) main_fs_bigclock_clock_pane_g1_ParamLimits

0x90c9,	// (0x00037435) main_fs_bigclock_clock_pane_g2_ParamLimits

0x90da,	// (0x00037446) main_fs_bigclock_clock_pane_g3_ParamLimits

0x90da,	// (0x00037446) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4d,	// (0x0003e1b9) main_fs_bigclock_clock_pane_g_ParamLimits

0x90ed,	// (0x00037459) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9103,	// (0x0003746f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe56,	// (0x0003e1c2) main_fs_bigclock_clock_pane_t_ParamLimits

0x5296,	// (0x00033602) main_mup3_lyrics_pane_ParamLimits

0x5296,	// (0x00033602) main_mup3_lyrics_pane

0x9c83,	// (0x00037fef) main_mup3_lyrics_pane_t1_ParamLimits

0x9c83,	// (0x00037fef) main_mup3_lyrics_pane_t1

0x60ac,	// (0x00034418) aid_main_mp4_pane_t1_area

0x60b6,	// (0x00034422) aid_main_mp4_pane_t2_area

0x6162,	// (0x000344ce) main_mp4_pane_g7_ParamLimits

0x6162,	// (0x000344ce) main_mp4_pane_g7

0x616e,	// (0x000344da) main_mp4_pane_g8_ParamLimits

0x616e,	// (0x000344da) main_mp4_pane_g8

0x63de,	// (0x0003474a) aid_call6_pane_g1_size

0x9a73,	// (0x00037ddf) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9a73,	// (0x00037ddf) list_double_large_graphic_phob2_other_pane

0xa965,	// (0x00038cd1) list_double_large_graphic_phob2_other_pane_g1

0x9c9f,	// (0x0003800b) list_highlight_pane_cp026

0xab27,	// (0x00038e93) main_welc_pane_ParamLimits

0x84df,	// (0x0003684b) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x84df,	// (0x0003684b) main_sp_fs_ctrlbar_pane_g3

0x84f9,	// (0x00036865) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x84f9,	// (0x00036865) main_sp_fs_ctrlbar_pane_g4

0x852d,	// (0x00036899) toolbar2_fixed_button_pane_cp01

0x8538,	// (0x000368a4) toolbar2_fixed_button_pane_cp02

0x8545,	// (0x000368b1) toolbar2_fixed_button_pane_cp03

0x9b17,	// (0x00037e83) list_welc_entry_pane_ParamLimits

0x9b17,	// (0x00037e83) list_welc_entry_pane

0x9b91,	// (0x00037efd) main_welc_pane_g3_ParamLimits

0x9b91,	// (0x00037efd) main_welc_pane_g3

0x9bbe,	// (0x00037f2a) main_welc_pane_t2_ParamLimits

0x9bbe,	// (0x00037f2a) main_welc_pane_t2

0x9bd8,	// (0x00037f44) main_welc_pane_t3_ParamLimits

0x9bd8,	// (0x00037f44) main_welc_pane_t3

0x0002,

0xff4c,	// (0x0003e2b8) main_welc_pane_t_ParamLimits

0xff4c,	// (0x0003e2b8) main_welc_pane_t

0x9bef,	// (0x00037f5b) welc_button_pane_ParamLimits

0x9bef,	// (0x00037f5b) welc_button_pane

0x9c06,	// (0x00037f72) welc_service_logo_pane_ParamLimits

0x9c06,	// (0x00037f72) welc_service_logo_pane

0xf05a,	// (0x0003d3c6) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0003d3c6) list_single_welc_entry_pane

0xf06b,	// (0x0003d3d7) list_single_welc_entry_pane_g1

0xf073,	// (0x0003d3df) list_single_welc_entry_pane_t1

0xf081,	// (0x0003d3ed) list_single_welc_entry_pane_t2

0x0001,

0xff58,	// (0x0003e2c4) list_single_welc_entry_pane_t

0x9c9f,	// (0x0003800b) bg_button_pane_cp035

0xf08f,	// (0x0003d3fb) welc_button_pane_t1

0xf09d,	// (0x0003d409) welc_service_logo_pane_g1

0xf0a6,	// (0x0003d412) welc_service_logo_pane_g2

0x0001,

0xff5d,	// (0x0003e2c9) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
