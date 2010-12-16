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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00087772 };

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
0x1953,	// (0x000890c5) Screen

0x195f,	// (0x000890d1) application_window

0x19bb,	// (0x0008912d) area_bottom_pane_ParamLimits

0x19bb,	// (0x0008912d) area_bottom_pane

0x1a13,	// (0x00089185) area_top_pane_ParamLimits

0x1a13,	// (0x00089185) area_top_pane

0x1a77,	// (0x000891e9) call_video_uplink_pane_ParamLimits

0x1a77,	// (0x000891e9) call_video_uplink_pane

0x1ab6,	// (0x00089228) main_pane_ParamLimits

0x1ab6,	// (0x00089228) main_pane

0xd4bd,	// (0x00094c2f) context_pane

0x47cd,	// (0x0008bf3f) navi_pane

0x47f3,	// (0x0008bf65) popup_cale_events_window_ParamLimits

0x47f3,	// (0x0008bf65) popup_cale_events_window

0xd4d0,	// (0x00094c42) popup_mup_playback_window

0x480b,	// (0x0008bf7d) signal_pane

0xb58a,	// (0x00092cfc) main_browser_pane

0xb792,	// (0x00092f04) main_burst_pane

0x464f,	// (0x0008bdc1) main_calc_pane

0xd4a3,	// (0x00094c15) main_cale_day_pane

0x1fd4,	// (0x00089746) main_cale_month_pane

0xd4a3,	// (0x00094c15) main_cale_week_pane

0xb792,	// (0x00092f04) main_call_pane

0xb218,	// (0x0009298a) main_call_poc_pane

0xb792,	// (0x00092f04) main_camera_pane

0xb792,	// (0x00092f04) main_chi_dic_pane

0xbefb,	// (0x0009366d) main_clock_pane

0xb218,	// (0x0009298a) main_fmradio_pane

0xb792,	// (0x00092f04) main_graph_messa_pane

0xb218,	// (0x0009298a) main_help_pane

0xb58a,	// (0x00092cfc) main_im_pane

0xb473,	// (0x00092be5) main_image_pane_ParamLimits

0xb473,	// (0x00092be5) main_image_pane

0xb218,	// (0x0009298a) main_location2_pane

0xb792,	// (0x00092f04) main_location_pane

0xb473,	// (0x00092be5) main_messa_pane

0xb218,	// (0x0009298a) main_mp2_pane

0xb792,	// (0x00092f04) main_mp_pane

0xb218,	// (0x0009298a) main_msg_pane

0xb218,	// (0x0009298a) main_mup_eq_pane

0xb218,	// (0x0009298a) main_mup_pane

0xb58a,	// (0x00092cfc) main_notes_pane

0xb218,	// (0x0009298a) main_pec_pane

0xb218,	// (0x0009298a) main_phob_pane

0xb218,	// (0x0009298a) main_pinb_pane

0xb218,	// (0x0009298a) main_postcard_pane

0xb218,	// (0x0009298a) main_qdial_pane

0xb792,	// (0x00092f04) main_skin_pane

0xb218,	// (0x0009298a) main_smil2_pane

0xb792,	// (0x00092f04) main_smil_pane

0xb792,	// (0x00092f04) main_video_pane

0xb792,	// (0x00092f04) main_video_tele_pane

0xb473,	// (0x00092be5) main_viewer_pane_ParamLimits

0xb473,	// (0x00092be5) main_viewer_pane

0xb792,	// (0x00092f04) main_vorec_pane

0x469b,	// (0x0008be0d) popup_blid_sat_info_window_ParamLimits

0x469b,	// (0x0008be0d) popup_blid_sat_info_window

0x46bb,	// (0x0008be2d) popup_dyc_status_message_window_ParamLimits

0x46bb,	// (0x0008be2d) popup_dyc_status_message_window

0x46c9,	// (0x0008be3b) popup_grid_large_graphic_window_ParamLimits

0x46c9,	// (0x0008be3b) popup_grid_large_graphic_window

0x4758,	// (0x0008beca) popup_loc_request_window_ParamLimits

0x4758,	// (0x0008beca) popup_loc_request_window

0x47a5,	// (0x0008bf17) popup_wml_address_window_ParamLimits

0x47a5,	// (0x0008bf17) popup_wml_address_window

0x451f,	// (0x0008bc91) call_muted_g1

0x420c,	// (0x0008b97e) popup_call_audio_conf_window_ParamLimits

0x420c,	// (0x0008b97e) popup_call_audio_conf_window

0x452f,	// (0x0008bca1) popup_call_audio_first_window_ParamLimits

0x452f,	// (0x0008bca1) popup_call_audio_first_window

0x456f,	// (0x0008bce1) popup_call_audio_in_window_ParamLimits

0x456f,	// (0x0008bce1) popup_call_audio_in_window

0x4593,	// (0x0008bd05) popup_call_audio_out_window_ParamLimits

0x4593,	// (0x0008bd05) popup_call_audio_out_window

0x45b5,	// (0x0008bd27) popup_call_audio_second_window_ParamLimits

0x45b5,	// (0x0008bd27) popup_call_audio_second_window

0x45e5,	// (0x0008bd57) popup_call_audio_wait_window_ParamLimits

0x45e5,	// (0x0008bd57) popup_call_audio_wait_window

0x4606,	// (0x0008bd78) popup_number_entry_window_ParamLimits

0x4606,	// (0x0008bd78) popup_number_entry_window

0xadf7,	// (0x00092569) bg_popup_call_pane_cp05_ParamLimits

0xadf7,	// (0x00092569) bg_popup_call_pane_cp05

0xae17,	// (0x00092589) popup_number_entry_window_t1

0xae2a,	// (0x0009259c) popup_number_entry_window_t2

0xae3c,	// (0x000925ae) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0009678f) popup_number_entry_window_t

0xae4e,	// (0x000925c0) text_title_cp2

0xae61,	// (0x000925d3) bg_popup_call_pane_cp_ParamLimits

0xae61,	// (0x000925d3) bg_popup_call_pane_cp

0xae6f,	// (0x000925e1) call_thumbnail_pane

0xae77,	// (0x000925e9) popup_call_audio_in_window_g1_ParamLimits

0xae77,	// (0x000925e9) popup_call_audio_in_window_g1

0xae83,	// (0x000925f5) popup_call_audio_in_window_g2_ParamLimits

0xae83,	// (0x000925f5) popup_call_audio_in_window_g2

0xae8f,	// (0x00092601) popup_call_audio_in_window_g3_ParamLimits

0xae8f,	// (0x00092601) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00096798) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00096798) popup_call_audio_in_window_g

0xae9b,	// (0x0009260d) popup_call_audio_in_window_t1_ParamLimits

0xae9b,	// (0x0009260d) popup_call_audio_in_window_t1

0xaeb7,	// (0x00092629) popup_call_audio_in_window_t2_ParamLimits

0xaeb7,	// (0x00092629) popup_call_audio_in_window_t2

0xaed3,	// (0x00092645) popup_call_audio_in_window_t3_ParamLimits

0xaed3,	// (0x00092645) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0009679f) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0009679f) popup_call_audio_in_window_t

0xae61,	// (0x000925d3) bg_popup_call_pane_cp01_ParamLimits

0xae61,	// (0x000925d3) bg_popup_call_pane_cp01

0xae6f,	// (0x000925e1) call_thumbnail_pane_cp02

0xaee6,	// (0x00092658) call_type_pane_cp022

0xaeee,	// (0x00092660) popup_call_audio_out_window_g1_ParamLimits

0xaeee,	// (0x00092660) popup_call_audio_out_window_g1

0xaf00,	// (0x00092672) popup_call_audio_out_window_g2_ParamLimits

0xaf00,	// (0x00092672) popup_call_audio_out_window_g2

0xaf0c,	// (0x0009267e) popup_call_audio_out_window_g3_ParamLimits

0xaf0c,	// (0x0009267e) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x000967a6) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x000967a6) popup_call_audio_out_window_g

0xaf1e,	// (0x00092690) popup_call_audio_out_window_t1_ParamLimits

0xaf1e,	// (0x00092690) popup_call_audio_out_window_t1

0xaf36,	// (0x000926a8) popup_call_audio_out_window_t2_ParamLimits

0xaf36,	// (0x000926a8) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x000967ad) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x000967ad) popup_call_audio_out_window_t

0xaf4b,	// (0x000926bd) bg_popup_call_pane_ParamLimits

0xaf4b,	// (0x000926bd) bg_popup_call_pane

0x1cd1,	// (0x00089443) call_thumbnail_pane_cp_ParamLimits

0x1cd1,	// (0x00089443) call_thumbnail_pane_cp

0xafcf,	// (0x00092741) call_type_pane_cp01_ParamLimits

0xafcf,	// (0x00092741) call_type_pane_cp01

0xb013,	// (0x00092785) popup_call_audio_first_window_g1_ParamLimits

0xb013,	// (0x00092785) popup_call_audio_first_window_g1

0xb05f,	// (0x000927d1) popup_call_audio_first_window_g2_ParamLimits

0xb05f,	// (0x000927d1) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x000967b2) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x000967b2) popup_call_audio_first_window_g

0xb0a3,	// (0x00092815) popup_call_audio_first_window_t1_ParamLimits

0xb0a3,	// (0x00092815) popup_call_audio_first_window_t1

0xb15d,	// (0x000928cf) popup_call_audio_first_window_t4_ParamLimits

0xb15d,	// (0x000928cf) popup_call_audio_first_window_t4

0xb1e9,	// (0x0009295b) popup_call_audio_first_window_t5_ParamLimits

0xb1e9,	// (0x0009295b) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x000967b7) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x000967b7) popup_call_audio_first_window_t

0xb218,	// (0x0009298a) bg_popup_call_pane_cp02

0xb222,	// (0x00092994) call_type_pane_cp023

0xb22a,	// (0x0009299c) popup_call_audio_wait_window_g1

0xb232,	// (0x000929a4) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x000967be) popup_call_audio_wait_window_g

0xb23a,	// (0x000929ac) popup_call_audio_wait_window_t3

0xb248,	// (0x000929ba) bg_popup_call_pane_cp03_ParamLimits

0xb248,	// (0x000929ba) bg_popup_call_pane_cp03

0xb2a8,	// (0x00092a1a) call_thumbnail_pane_cp011_ParamLimits

0xb2a8,	// (0x00092a1a) call_thumbnail_pane_cp011

0xb2b4,	// (0x00092a26) call_type_pane_cp034_ParamLimits

0xb2b4,	// (0x00092a26) call_type_pane_cp034

0xb2f0,	// (0x00092a62) popup_call_audio_second_window_g1_ParamLimits

0xb2f0,	// (0x00092a62) popup_call_audio_second_window_g1

0xb32c,	// (0x00092a9e) popup_call_audio_second_window_g2_ParamLimits

0xb32c,	// (0x00092a9e) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x000967c3) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x000967c3) popup_call_audio_second_window_g

0xb368,	// (0x00092ada) popup_call_audio_second_window_t1_ParamLimits

0xb368,	// (0x00092ada) popup_call_audio_second_window_t1

0xb3e9,	// (0x00092b5b) popup_call_audio_second_window_t2_ParamLimits

0xb3e9,	// (0x00092b5b) popup_call_audio_second_window_t2

0xb41f,	// (0x00092b91) popup_call_audio_second_window_t3_ParamLimits

0xb41f,	// (0x00092b91) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x000967c8) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x000967c8) popup_call_audio_second_window_t

0xb218,	// (0x0009298a) bg_popup_call_pane_cp04

0xb455,	// (0x00092bc7) list_conf_pane

0xb45d,	// (0x00092bcf) popup_call_audio_conf_window_t1

0xb46b,	// (0x00092bdd) call_thumbnail_pane_g1

0xb473,	// (0x00092be5) bg_pinb_pane_ParamLimits

0xb473,	// (0x00092be5) bg_pinb_pane

0xb481,	// (0x00092bf3) find_pinb_pane

0xb473,	// (0x00092be5) listscroll_pinb_pane_ParamLimits

0xb473,	// (0x00092be5) listscroll_pinb_pane

0xb48b,	// (0x00092bfd) pinb_bg_pane_g1

0xb48b,	// (0x00092bfd) pinb_bg_pane_g2

0xb48b,	// (0x00092bfd) pinb_bg_pane_g3

0xb48b,	// (0x00092bfd) pinb_bg_pane_g4

0xb48b,	// (0x00092bfd) pinb_bg_pane_g5

0xb48b,	// (0x00092bfd) pinb_bg_pane_g6

0xb48b,	// (0x00092bfd) pinb_bg_pane_g7

0xb48b,	// (0x00092bfd) pinb_bg_pane_g8

0xb48b,	// (0x00092bfd) pinb_bg_pane_g9

0xb48b,	// (0x00092bfd) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x000967cf) pinb_bg_pane_g

0xaded,	// (0x0009255f) grid_pinb_pane

0xaded,	// (0x0009255f) list_pinb_pane

0xb14f,	// (0x000928c1) scroll_pane_cp01_ParamLimits

0xb14f,	// (0x000928c1) scroll_pane_cp01

0xb495,	// (0x00092c07) find_pinb_pane_g1_ParamLimits

0xb495,	// (0x00092c07) find_pinb_pane_g1

0xb4ad,	// (0x00092c1f) find_pinb_pane_t1

0xb4bf,	// (0x00092c31) find_pinb_pane_t2

0x0001,

0xf077,	// (0x000967e9) find_pinb_pane_t

0xb4d4,	// (0x00092c46) input_focus_pane_cp01_ParamLimits

0xb4d4,	// (0x00092c46) input_focus_pane_cp01

0xb4e0,	// (0x00092c52) cell_pinb_pane_ParamLimits

0xb4e0,	// (0x00092c52) cell_pinb_pane

0xb4ee,	// (0x00092c60) cell_pinb_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) cell_pinb_pane_g1

0xb4fc,	// (0x00092c6e) cell_pinb_pane_g2_ParamLimits

0xb4fc,	// (0x00092c6e) cell_pinb_pane_g2

0xb4fc,	// (0x00092c6e) cell_pinb_pane_g3_ParamLimits

0xb4fc,	// (0x00092c6e) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x000967ee) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x000967ee) cell_pinb_pane_g

0xb218,	// (0x0009298a) grid_highlight_pane_cp01

0xb4e0,	// (0x00092c52) list_pinb_item_pane_ParamLimits

0xb4e0,	// (0x00092c52) list_pinb_item_pane

0xaded,	// (0x0009255f) list_highlight_pane_cp02

0xb50a,	// (0x00092c7c) list_pinb_item_pane_g1_ParamLimits

0xb50a,	// (0x00092c7c) list_pinb_item_pane_g1

0xb4fc,	// (0x00092c6e) list_pinb_item_pane_g2_ParamLimits

0xb4fc,	// (0x00092c6e) list_pinb_item_pane_g2

0xb4ee,	// (0x00092c60) list_pinb_item_pane_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_pinb_item_pane_g3

0xb4fc,	// (0x00092c6e) list_pinb_item_pane_g4_ParamLimits

0xb4fc,	// (0x00092c6e) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x000967f5) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x000967f5) list_pinb_item_pane_g

0xb518,	// (0x00092c8a) list_pinb_item_pane_t1_ParamLimits

0xb518,	// (0x00092c8a) list_pinb_item_pane_t1

0x1d0f,	// (0x00089481) calc_display_pane

0x1d2d,	// (0x0008949f) calc_paper_pane

0x1d49,	// (0x000894bb) grid_calc_pane

0xaded,	// (0x0009255f) bg_list_pane_cp01

0xb52c,	// (0x00092c9e) clock_g1

0xb52c,	// (0x00092c9e) clock_g2

0x0001,

0xf08c,	// (0x000967fe) clock_g

0xb536,	// (0x00092ca8) clock_t1_ParamLimits

0xb536,	// (0x00092ca8) clock_t1

0xb54a,	// (0x00092cbc) clock_t2_ParamLimits

0xb54a,	// (0x00092cbc) clock_t2

0xb54a,	// (0x00092cbc) clock_t3_ParamLimits

0xb54a,	// (0x00092cbc) clock_t3

0xb54a,	// (0x00092cbc) clock_t4_ParamLimits

0xb54a,	// (0x00092cbc) clock_t4

0xb536,	// (0x00092ca8) clock_t5_ParamLimits

0xb536,	// (0x00092ca8) clock_t5

0xb54a,	// (0x00092cbc) clock_t6_ParamLimits

0xb54a,	// (0x00092cbc) clock_t6

0xb54a,	// (0x00092cbc) clock_t7_ParamLimits

0xb54a,	// (0x00092cbc) clock_t7

0xb54a,	// (0x00092cbc) clock_t8_ParamLimits

0xb54a,	// (0x00092cbc) clock_t8

0xb54a,	// (0x00092cbc) clock_t9_ParamLimits

0xb54a,	// (0x00092cbc) clock_t9

0x0008,

0xf091,	// (0x00096803) clock_t_ParamLimits

0xf091,	// (0x00096803) clock_t

0xaded,	// (0x0009255f) popup_clock_analogue_window_cp02

0xaded,	// (0x0009255f) popup_clock_digital_window_cp01

0xb218,	// (0x0009298a) listscroll_help_pane

0xb218,	// (0x0009298a) phob_pre_status_pane

0xb55e,	// (0x00092cd0) grid_qdial_pane

0xb473,	// (0x00092be5) listscroll_mce_pane

0xb473,	// (0x00092be5) bg_notes_pane

0xb568,	// (0x00092cda) list_notes_pane

0x1d75,	// (0x000894e7) scroll_pane_cp06

0xb576,	// (0x00092ce8) bg_calc_paper_pane

0x1d84,	// (0x000894f6) list_calc_pane

0xb58a,	// (0x00092cfc) bg_calc_display_pane

0x1d9e,	// (0x00089510) calc_display_pane_t1

0x1db3,	// (0x00089525) calc_display_pane_t2

0x1dc8,	// (0x0008953a) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00096816) calc_display_pane_t

0x1dda,	// (0x0008954c) cell_calc_pane_ParamLimits

0x1dda,	// (0x0008954c) cell_calc_pane

0xb596,	// (0x00092d08) bg_calc_paper_pane_g1

0xb5a2,	// (0x00092d14) bg_calc_paper_pane_g2

0xb5ae,	// (0x00092d20) bg_calc_paper_pane_g3

0xb5ba,	// (0x00092d2c) bg_calc_paper_pane_g4

0xb5c6,	// (0x00092d38) bg_calc_paper_pane_g5

0x1e07,	// (0x00089579) bg_calc_paper_pane_g6

0x1e18,	// (0x0008958a) bg_calc_paper_pane_g7

0x1e29,	// (0x0008959b) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0009681d) bg_calc_paper_pane_g

0x1e3a,	// (0x000895ac) calc_bg_paper_pane_g9

0x1e4b,	// (0x000895bd) list_calc_item_pane_ParamLimits

0x1e4b,	// (0x000895bd) list_calc_item_pane

0xb5d2,	// (0x00092d44) list_calc_item_pane_g1

0x1e78,	// (0x000895ea) list_calc_item_pane_t1_ParamLimits

0x1e78,	// (0x000895ea) list_calc_item_pane_t1

0x1e8a,	// (0x000895fc) list_calc_item_pane_t2_ParamLimits

0x1e8a,	// (0x000895fc) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0009682e) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0009682e) list_calc_item_pane_t

0xb48b,	// (0x00092bfd) cell_calc_pane_g1

0xb5df,	// (0x00092d51) grid_highlight_pane_cp02

0x1eba,	// (0x0008962c) bg_calc_display_pane_g1

0x1ec3,	// (0x00089635) bg_calc_display_pane_g2

0x1ecd,	// (0x0008963f) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00096838) bg_calc_display_pane_g

0x1ed6,	// (0x00089648) cell_qdial_pane_ParamLimits

0x1ed6,	// (0x00089648) cell_qdial_pane

0x1eea,	// (0x0008965c) cell_qdial_pane_g1_ParamLimits

0x1eea,	// (0x0008965c) cell_qdial_pane_g1

0x1ef7,	// (0x00089669) cell_qdial_pane_g2_ParamLimits

0x1ef7,	// (0x00089669) cell_qdial_pane_g2

0xb601,	// (0x00092d73) cell_qdial_pane_g3_ParamLimits

0xb601,	// (0x00092d73) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0009683f) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0009683f) cell_qdial_pane_g

0x1f14,	// (0x00089686) cell_qdial_pane_t1_ParamLimits

0x1f14,	// (0x00089686) cell_qdial_pane_t1

0x1f2c,	// (0x0008969e) cell_qdial_pane_t2_ParamLimits

0x1f2c,	// (0x0008969e) cell_qdial_pane_t2

0x1f3f,	// (0x000896b1) cell_qdial_pane_t3_ParamLimits

0x1f3f,	// (0x000896b1) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00096848) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00096848) cell_qdial_pane_t

0xb218,	// (0x0009298a) grid_highlight_pane_cp04

0xb60d,	// (0x00092d7f) thumbnail_qdial_pane_ParamLimits

0xb60d,	// (0x00092d7f) thumbnail_qdial_pane

0xb669,	// (0x00092ddb) list_help_pane

0xb672,	// (0x00092de4) scroll_pane_cp02

0x1f52,	// (0x000896c4) help_list_pane_t1_ParamLimits

0x1f52,	// (0x000896c4) help_list_pane_t1

0xb67b,	// (0x00092ded) bg_notes_pane_g2

0xb683,	// (0x00092df5) bg_notes_pane_g3

0xb68b,	// (0x00092dfd) notes_bg_pane_g1

0xb693,	// (0x00092e05) notes_bg_pane_g4

0xb69b,	// (0x00092e0d) notes_bg_pane_g5

0xb6a3,	// (0x00092e15) notes_bg_pane_g6

0xb6ab,	// (0x00092e1d) notes_bg_pane_g7

0xb6b3,	// (0x00092e25) notes_bg_pane_g8

0xb6bb,	// (0x00092e2d) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00096866) notes_bg_pane_g

0x1f8c,	// (0x000896fe) list_notes_text_pane_ParamLimits

0x1f8c,	// (0x000896fe) list_notes_text_pane

0xb6c3,	// (0x00092e35) list_notes_text_pane_g1

0xb6cc,	// (0x00092e3e) list_notes_text_pane_t1

0x1fd4,	// (0x00089746) listscroll_cale_week_pane

0x2002,	// (0x00089774) bg_cale_heading_pane

0xb6f4,	// (0x00092e66) bg_cale_pane_cp01

0x2024,	// (0x00089796) cale_week_corner_pane

0x203e,	// (0x000897b0) cale_week_day_heading_pane

0x2060,	// (0x000897d2) cale_week_scroll_pane_g1

0x207d,	// (0x000897ef) cale_week_scroll_pane_g2

0x2090,	// (0x00089802) cale_week_scroll_pane_g3

0x20a3,	// (0x00089815) cale_week_scroll_pane_g4

0x20b6,	// (0x00089828) cale_week_scroll_pane_g5

0x20c9,	// (0x0008983b) cale_week_scroll_pane_g6

0x20dc,	// (0x0008984e) cale_week_scroll_pane_g7

0x20f1,	// (0x00089863) cale_week_scroll_pane_g8

0x2106,	// (0x00089878) cale_week_scroll_pane_g9

0x2119,	// (0x0008988b) cale_week_scroll_pane_g10

0x212c,	// (0x0008989e) cale_week_scroll_pane_g11

0x213f,	// (0x000898b1) cale_week_scroll_pane_g12

0x2156,	// (0x000898c8) cale_week_scroll_pane_g13

0x2171,	// (0x000898e3) cale_week_scroll_pane_g14

0x218c,	// (0x000898fe) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00096875) cale_week_scroll_pane_g

0x21bc,	// (0x0008992e) cale_week_time_pane

0x21d1,	// (0x00089943) grid_cale_week_pane

0xb723,	// (0x00092e95) scroll_pane_cp08

0x21f0,	// (0x00089962) cell_cale_week_pane_ParamLimits

0x21f0,	// (0x00089962) cell_cale_week_pane

0x2252,	// (0x000899c4) cale_week_day_heading_pane_t1

0x226d,	// (0x000899df) cale_week_day_heading_pane_t2

0x2288,	// (0x000899fa) cale_week_day_heading_pane_t3

0x22a3,	// (0x00089a15) cale_week_day_heading_pane_t4

0x22be,	// (0x00089a30) cale_week_day_heading_pane_t5

0x22d9,	// (0x00089a4b) cale_week_day_heading_pane_t6

0x22f4,	// (0x00089a66) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00096896) cale_week_day_heading_pane_t

0xb740,	// (0x00092eb2) bg_cale_side_pane

0x230f,	// (0x00089a81) cale_week_time_pane_t1

0x2329,	// (0x00089a9b) cale_week_time_pane_t2

0x2343,	// (0x00089ab5) cale_week_time_pane_t3

0x235d,	// (0x00089acf) cale_week_time_pane_t4

0x2377,	// (0x00089ae9) cale_week_time_pane_t5

0x2391,	// (0x00089b03) cale_week_time_pane_t6

0x23b1,	// (0x00089b23) cale_week_time_pane_t7

0x23d3,	// (0x00089b45) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x000968a5) cale_week_time_pane_t

0x23f7,	// (0x00089b69) cell_cale_week_pane_g2

0x241b,	// (0x00089b8d) cell_cale_week_pane_g3_ParamLimits

0x241b,	// (0x00089b8d) cell_cale_week_pane_g3

0xb74e,	// (0x00092ec0) grid_highlight_pane_cp07

0xb756,	// (0x00092ec8) listscroll_gms_pane

0xb760,	// (0x00092ed2) grid_gms_pane

0xb769,	// (0x00092edb) listscroll_gms_pane_g1

0xb771,	// (0x00092ee3) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x000968b6) listscroll_gms_pane_g

0x2433,	// (0x00089ba5) scroll_pane_cp010

0x243e,	// (0x00089bb0) cell_gms_pane_ParamLimits

0x243e,	// (0x00089bb0) cell_gms_pane

0x244e,	// (0x00089bc0) cell_gms_pane_g1

0xb779,	// (0x00092eeb) cell_gms_pane_g2

0xb6c3,	// (0x00092e35) cell_gms_pane_g3

0xb781,	// (0x00092ef3) cell_gms_pane_g4

0x0003,

0xf149,	// (0x000968bb) cell_gms_pane_g

0xb78a,	// (0x00092efc) grid_highlight_pane_cp09

0x44a3,	// (0x0008bc15) phob_pre_status_pane_g1

0x44ab,	// (0x0008bc1d) phob_pre_status_pane_g2

0x44b3,	// (0x0008bc25) phob_pre_status_pane_g3

0x44bb,	// (0x0008bc2d) phob_pre_status_pane_g4

0x0004,

0xf502,	// (0x00096c74) phob_pre_status_pane_g

0x44cb,	// (0x0008bc3d) phob_pre_status_pane_t1

0x44db,	// (0x0008bc4d) phob_pre_status_pane_t2

0x44eb,	// (0x0008bc5d) phob_pre_status_pane_t3

0x0002,

0xf50d,	// (0x00096c7f) phob_pre_status_pane_t

0xb792,	// (0x00092f04) bg_list_pane_cp05

0x245e,	// (0x00089bd0) grid_vorec_pane

0x2468,	// (0x00089bda) vorec_t1

0x2476,	// (0x00089be8) vorec_t2

0x2484,	// (0x00089bf6) vorec_t3

0x2492,	// (0x00089c04) vorec_t4

0x9258,	// (0x000909ca) vorec_t5

0x9266,	// (0x000909d8) vorec_t6

0x0004,

0xf152,	// (0x000968c4) vorec_t

0x9274,	// (0x000909e6) wait_bar_pane_cp01

0x24ae,	// (0x00089c20) cell_vorec_pane_ParamLimits

0x24ae,	// (0x00089c20) cell_vorec_pane

0x24c1,	// (0x00089c33) cell_vorec_pane_g1

0xb218,	// (0x0009298a) grid_highlight_pane_cp05

0xb4e0,	// (0x00092c52) cams_zoom_pane

0xb4e0,	// (0x00092c52) image_vga_pane

0xb4fc,	// (0x00092c6e) main_camera_pane_g1

0xb4fc,	// (0x00092c6e) main_camera_pane_g2

0xb4fc,	// (0x00092c6e) main_camera_pane_g3

0xb4fc,	// (0x00092c6e) main_camera_pane_g4

0xb4fc,	// (0x00092c6e) main_camera_pane_g5

0xb4fc,	// (0x00092c6e) main_camera_pane_g6

0xb4fc,	// (0x00092c6e) main_camera_pane_g7

0x0007,

0xf15d,	// (0x000968cf) main_camera_pane_g

0xb54a,	// (0x00092cbc) main_camera_pane_t1

0xb54a,	// (0x00092cbc) main_camera_pane_t2

0x0001,

0xf16e,	// (0x000968e0) main_camera_pane_t

0x24cb,	// (0x00089c3d) cams_zoom_pane_cp_ParamLimits

0x24cb,	// (0x00089c3d) cams_zoom_pane_cp

0x24f9,	// (0x00089c6b) image_cif_pane_ParamLimits

0x24f9,	// (0x00089c6b) image_cif_pane

0xaded,	// (0x0009255f) image_subqcif_pane

0x2507,	// (0x00089c79) main_video_pane_g1_ParamLimits

0x2507,	// (0x00089c79) main_video_pane_g1

0x252f,	// (0x00089ca1) main_video_pane_g2_ParamLimits

0x252f,	// (0x00089ca1) main_video_pane_g2

0x2562,	// (0x00089cd4) main_video_pane_g3_ParamLimits

0x2562,	// (0x00089cd4) main_video_pane_g3

0x2562,	// (0x00089cd4) main_video_pane_g4_ParamLimits

0x2562,	// (0x00089cd4) main_video_pane_g4

0x2590,	// (0x00089d02) main_video_pane_g5_ParamLimits

0x2590,	// (0x00089d02) main_video_pane_g5

0xb79a,	// (0x00092f0c) main_video_pane_g6_ParamLimits

0xb79a,	// (0x00092f0c) main_video_pane_g6

0x0006,

0xf173,	// (0x000968e5) main_video_pane_g_ParamLimits

0xf173,	// (0x000968e5) main_video_pane_g

0x25ac,	// (0x00089d1e) main_video_pane_t1_ParamLimits

0x25ac,	// (0x00089d1e) main_video_pane_t1

0xb52c,	// (0x00092c9e) cams_zoom_pane_g1

0xb52c,	// (0x00092c9e) cams_zoom_pane_g2

0xb52c,	// (0x00092c9e) cams_zoom_pane_g3

0xb52c,	// (0x00092c9e) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x000968f4) cams_zoom_pane_g

0xb4e0,	// (0x00092c52) grid_cams_pane

0xb4e0,	// (0x00092c52) linegrid_cams_pane

0x25e6,	// (0x00089d58) cell_cams_pane_ParamLimits

0x25e6,	// (0x00089d58) cell_cams_pane

0xaded,	// (0x0009255f) cams_burst_image_pane

0xb52c,	// (0x00092c9e) cell_cams_pane_g1

0xaded,	// (0x0009255f) grid_highlight_pane_cp03

0xb48b,	// (0x00092bfd) mp_bg_pane_g1

0xaded,	// (0x0009255f) bg_list_pane_cp03

0xaded,	// (0x0009255f) bg_mp_pane

0xaded,	// (0x0009255f) grid_mp_pane

0xb52c,	// (0x00092c9e) media_player_g1

0xbc84,	// (0x000933f6) media_player_t1

0xbc84,	// (0x000933f6) media_player_t2

0xbc84,	// (0x000933f6) media_player_t3

0xbc84,	// (0x000933f6) media_player_t4

0xbc84,	// (0x000933f6) media_player_t5

0xbc84,	// (0x000933f6) media_player_t6

0xbc84,	// (0x000933f6) media_player_t7

0x0006,

0xf4ec,	// (0x00096c5e) media_player_t

0xaded,	// (0x0009255f) wait_bar_pane_cp02

0xf4d1,	// (0x00096c43) main_usb_pane_t

0xbefb,	// (0x0009366d) cell_mp_pane

0xb48b,	// (0x00092bfd) cell_mp_pane_g1

0xb218,	// (0x0009298a) grid_highlight_pane_cp06

0xb7b4,	// (0x00092f26) grid_skin_colour_pane

0xb7bc,	// (0x00092f2e) list_highlight_pane_cp03

0x25fb,	// (0x00089d6d) skin_g1

0xb7c4,	// (0x00092f36) skin_t1

0xb7d3,	// (0x00092f45) skin_t2

0x0001,

0xf1b0,	// (0x00096922) skin_t

0x2605,	// (0x00089d77) cell_skin_colour_pane_ParamLimits

0x2605,	// (0x00089d77) cell_skin_colour_pane

0xb7e1,	// (0x00092f53) cell_skin_colour_pane_g1

0x2689,	// (0x00089dfb) call_video_g1_ParamLimits

0x2689,	// (0x00089dfb) call_video_g1

0x2699,	// (0x00089e0b) call_video_g2_ParamLimits

0x2699,	// (0x00089e0b) call_video_g2

0x0001,

0xf1b5,	// (0x00096927) call_video_g_ParamLimits

0xf1b5,	// (0x00096927) call_video_g

0x26f3,	// (0x00089e65) call_video_uplink_pane_cp1_ParamLimits

0x26f3,	// (0x00089e65) call_video_uplink_pane_cp1

0xb7f3,	// (0x00092f65) call_video_uplink_pane_cp2

0x27bf,	// (0x00089f31) video_down_crop_pane_ParamLimits

0x27bf,	// (0x00089f31) video_down_crop_pane

0x28b1,	// (0x0008a023) video_down_pane_ParamLimits

0x28b1,	// (0x0008a023) video_down_pane

0xb7fb,	// (0x00092f6d) video_down_subqcif_pane_ParamLimits

0xb7fb,	// (0x00092f6d) video_down_subqcif_pane

0xb813,	// (0x00092f85) video_down_subqcif_pane_cp_ParamLimits

0xb813,	// (0x00092f85) video_down_subqcif_pane_cp

0xb839,	// (0x00092fab) im_reading_pane_ParamLimits

0xb839,	// (0x00092fab) im_reading_pane

0x29d1,	// (0x0008a143) im_writing_pane_ParamLimits

0x29d1,	// (0x0008a143) im_writing_pane

0x29ef,	// (0x0008a161) im_reading_pane_t1

0xb853,	// (0x00092fc5) list_im_pane

0xb864,	// (0x00092fd6) scroll_pane_cp07

0x2a47,	// (0x0008a1b9) im_writing_pane_t1_ParamLimits

0x2a47,	// (0x0008a1b9) im_writing_pane_t1

0xb87d,	// (0x00092fef) im_writing_pane_t2_ParamLimits

0xb87d,	// (0x00092fef) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00096931) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00096931) im_writing_pane_t

0xb218,	// (0x0009298a) input_focus_pane_cp04

0xb218,	// (0x0009298a) input_focus_pane_cp05

0x2a59,	// (0x0008a1cb) list_im_single_pane_ParamLimits

0x2a59,	// (0x0008a1cb) list_im_single_pane

0x2a80,	// (0x0008a1f2) list_single_im_pane_t1

0xb792,	// (0x00092f04) blid_accuracy_pane

0xb792,	// (0x00092f04) blid_compass_pane

0xd45b,	// (0x00094bcd) main_location_t1

0xd45b,	// (0x00094bcd) main_location_t2

0xd45b,	// (0x00094bcd) main_location_t3

0x0002,

0xf4fb,	// (0x00096c6d) main_location_t

0xb218,	// (0x0009298a) aid_levels_location

0xb48b,	// (0x00092bfd) blid_accuracy_pane_g1

0xb48b,	// (0x00092bfd) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x00096985) blid_accuracy_pane_g

0xb8c5,	// (0x00093037) wml_content_pane

0xb903,	// (0x00093075) wml_button_pane_ParamLimits

0xb903,	// (0x00093075) wml_button_pane

0x2a8f,	// (0x0008a201) wml_list_single_large_pane_ParamLimits

0x2a8f,	// (0x0008a201) wml_list_single_large_pane

0x2aba,	// (0x0008a22c) wml_list_single_medium_pane_ParamLimits

0x2aba,	// (0x0008a22c) wml_list_single_medium_pane

0x2aec,	// (0x0008a25e) wml_list_single_small_pane_ParamLimits

0x2aec,	// (0x0008a25e) wml_list_single_small_pane

0xb917,	// (0x00093089) wml_selection_box_pane_ParamLimits

0xb917,	// (0x00093089) wml_selection_box_pane

0xb92a,	// (0x0009309c) wml_list_single_pane_t1

0xb939,	// (0x000930ab) wml_list_single_medium_pane_t1

0xb948,	// (0x000930ba) wml_list_single_large_pane_t1

0xb957,	// (0x000930c9) input_focus_pane_cp02_ParamLimits

0xb957,	// (0x000930c9) input_focus_pane_cp02

0xb96a,	// (0x000930dc) wml_selection_box_pane_g1

0xb973,	// (0x000930e5) wml_selection_box_pane_t1_ParamLimits

0xb973,	// (0x000930e5) wml_selection_box_pane_t1

0xb473,	// (0x00092be5) bg_wml_button_pane_ParamLimits

0xb473,	// (0x00092be5) bg_wml_button_pane

0xb994,	// (0x00093106) wml_button_pane_g1

0xb99c,	// (0x0009310e) wml_button_pane_t1

0xb994,	// (0x00093106) wml_button_bg_pane_g1

0xb9ac,	// (0x0009311e) wml_button_bg_pane_g2

0xb9b4,	// (0x00093126) wml_button_bg_pane_g3

0xb9bc,	// (0x0009312e) wml_button_bg_pane_g4

0xb9c4,	// (0x00093136) wml_button_bg_pane_g5

0xb9cc,	// (0x0009313e) wml_button_bg_pane_g6

0xb9d4,	// (0x00093146) wml_button_bg_pane_g7

0xb9dc,	// (0x0009314e) wml_button_bg_pane_g8

0xb9e4,	// (0x00093156) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00096936) wml_button_bg_pane_g

0x2b29,	// (0x0008a29b) bg_list_pane_cp02

0xb9ec,	// (0x0009315e) mce_header_pane_ParamLimits

0xb9ec,	// (0x0009315e) mce_header_pane

0xba02,	// (0x00093174) mce_icon_pane

0xba02,	// (0x00093174) mce_image_pane

0xba0b,	// (0x0009317d) mce_text_pane_ParamLimits

0xba0b,	// (0x0009317d) mce_text_pane

0x2b33,	// (0x0008a2a5) scroll_pane_cp03

0xb8fb,	// (0x0009306d) scroll_pane_cp04

0xba1e,	// (0x00093190) scroll_pane_cp05_ParamLimits

0xba1e,	// (0x00093190) scroll_pane_cp05

0x2b3d,	// (0x0008a2af) mce_header_field_pane_ParamLimits

0x2b3d,	// (0x0008a2af) mce_header_field_pane

0x2b5d,	// (0x0008a2cf) mce_header_field_pane_2_ParamLimits

0x2b5d,	// (0x0008a2cf) mce_header_field_pane_2

0x2b73,	// (0x0008a2e5) mce_header_field_pane_3

0x2b7b,	// (0x0008a2ed) list_single_mce_message_pane_ParamLimits

0x2b7b,	// (0x0008a2ed) list_single_mce_message_pane

0x2ba9,	// (0x0008a31b) list_single_mce_smart_pane_ParamLimits

0x2ba9,	// (0x0008a31b) list_single_mce_smart_pane

0xba2a,	// (0x0009319c) input_focus_pane_cp03

0xba33,	// (0x000931a5) list_header_data_pane

0x2be2,	// (0x0008a354) mce_header_field_pane_t1

0x2bf0,	// (0x0008a362) list_single_mce_header_pane_ParamLimits

0x2bf0,	// (0x0008a362) list_single_mce_header_pane

0xba3b,	// (0x000931ad) list_single_mce_header_pane_t1

0xba4a,	// (0x000931bc) list_single_mce_message_pane_g1

0xba52,	// (0x000931c4) list_single_mce_message_pane_t1

0x2c46,	// (0x0008a3b8) bg_cale_heading_pane_cp01_ParamLimits

0x2c46,	// (0x0008a3b8) bg_cale_heading_pane_cp01

0xba60,	// (0x000931d2) bg_cale_pane_cp02_ParamLimits

0xba60,	// (0x000931d2) bg_cale_pane_cp02

0x2c94,	// (0x0008a406) cale_month_corner_pane

0x2cb3,	// (0x0008a425) cale_month_day_heading_pane_ParamLimits

0x2cb3,	// (0x0008a425) cale_month_day_heading_pane

0x2d19,	// (0x0008a48b) cale_month_pane_g1_ParamLimits

0x2d19,	// (0x0008a48b) cale_month_pane_g1

0x2d5c,	// (0x0008a4ce) cale_month_pane_g2_ParamLimits

0x2d5c,	// (0x0008a4ce) cale_month_pane_g2

0x2d96,	// (0x0008a508) cale_month_pane_g3_ParamLimits

0x2d96,	// (0x0008a508) cale_month_pane_g3

0x2de6,	// (0x0008a558) cale_month_pane_g4_ParamLimits

0x2de6,	// (0x0008a558) cale_month_pane_g4

0x2e36,	// (0x0008a5a8) cale_month_pane_g5_ParamLimits

0x2e36,	// (0x0008a5a8) cale_month_pane_g5

0x2e86,	// (0x0008a5f8) cale_month_pane_g6_ParamLimits

0x2e86,	// (0x0008a5f8) cale_month_pane_g6

0x2ed6,	// (0x0008a648) cale_month_pane_g7_ParamLimits

0x2ed6,	// (0x0008a648) cale_month_pane_g7

0x2f3e,	// (0x0008a6b0) cale_month_pane_g8_ParamLimits

0x2f3e,	// (0x0008a6b0) cale_month_pane_g8

0x2fa6,	// (0x0008a718) cale_month_pane_g9_ParamLimits

0x2fa6,	// (0x0008a718) cale_month_pane_g9

0x3004,	// (0x0008a776) cale_month_pane_g10_ParamLimits

0x3004,	// (0x0008a776) cale_month_pane_g10

0x3062,	// (0x0008a7d4) cale_month_pane_g11_ParamLimits

0x3062,	// (0x0008a7d4) cale_month_pane_g11

0x30b6,	// (0x0008a828) cale_month_pane_g12_ParamLimits

0x30b6,	// (0x0008a828) cale_month_pane_g12

0x310c,	// (0x0008a87e) cale_month_pane_g13_ParamLimits

0x310c,	// (0x0008a87e) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x00096949) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x00096949) cale_month_pane_g

0x3162,	// (0x0008a8d4) cale_month_week_pane

0x3186,	// (0x0008a8f8) grid_cale_month_pane_ParamLimits

0x3186,	// (0x0008a8f8) grid_cale_month_pane

0x31e3,	// (0x0008a955) cale_month_day_heading_pane_t1

0x3269,	// (0x0008a9db) cale_month_day_heading_pane_t2

0x32e2,	// (0x0008aa54) cale_month_day_heading_pane_t3

0x335b,	// (0x0008aacd) cale_month_day_heading_pane_t4

0x33d4,	// (0x0008ab46) cale_month_day_heading_pane_t5

0x344d,	// (0x0008abbf) cale_month_day_heading_pane_t6

0x34c6,	// (0x0008ac38) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00096964) cale_month_day_heading_pane_t

0xb740,	// (0x00092eb2) bg_cale_side_pane_cp01

0x3557,	// (0x0008acc9) cale_month_week_pane_t1

0x3570,	// (0x0008ace2) cale_month_week_pane_t2

0x3589,	// (0x0008acfb) cale_month_week_pane_t3

0x35a2,	// (0x0008ad14) cale_month_week_pane_t4

0x35bd,	// (0x0008ad2f) cale_month_week_pane_t5

0x35de,	// (0x0008ad50) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00096973) cale_month_week_pane_t

0x35ff,	// (0x0008ad71) cell_cale_month_pane_ParamLimits

0x35ff,	// (0x0008ad71) cell_cale_month_pane

0x3725,	// (0x0008ae97) cell_cale_month_pane_g1

0x3731,	// (0x0008aea3) cell_cale_month_pane_t1_ParamLimits

0x3731,	// (0x0008aea3) cell_cale_month_pane_t1

0xb74e,	// (0x00092ec0) grid_highlight_pane_cp08

0xb48b,	// (0x00092bfd) main_smil_g1

0x375d,	// (0x0008aecf) smil_status_pane

0xba9f,	// (0x00093211) smil_text_pane

0xb6bb,	// (0x00092e2d) bg_popup_call3_rect_pane_g8

0xb6b3,	// (0x00092e25) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x0009698a) bg_popup_call3_rect_pane_g

0xd532,	// (0x00094ca4) smil_status_volume_pane_g1

0xbaa9,	// (0x0009321b) smil_status_pane_t1

0x4854,	// (0x0008bfc6) volume_smil_pane

0xbac0,	// (0x00093232) list_smil_text_pane

0x3770,	// (0x0008aee2) scroll_pane_cp011

0x377b,	// (0x0008aeed) smil_text_list_pane_t1_ParamLimits

0x377b,	// (0x0008aeed) smil_text_list_pane_t1

0x3808,	// (0x0008af7a) aid_volume_smil_ParamLimits

0x3808,	// (0x0008af7a) aid_volume_smil

0xb48b,	// (0x00092bfd) smil_volume_pane_g1

0xb48b,	// (0x00092bfd) smil_volume_pane_g2

0x0001,

0xf213,	// (0x00096985) smil_volume_pane_g

0x1fd4,	// (0x00089746) listscroll_cale_day_pane

0xbaca,	// (0x0009323c) bg_cale_pane

0xbae2,	// (0x00093254) list_cale_pane

0xbb05,	// (0x00093277) scroll_pane_cp09

0xb68b,	// (0x00092dfd) cale_bg_pane_g1

0xb683,	// (0x00092df5) cale_bg_pane_g2

0xb67b,	// (0x00092ded) cale_bg_pane_g3

0xb69b,	// (0x00092e0d) cale_bg_pane_g4

0xb693,	// (0x00092e05) cale_bg_pane_g5

0xb6a3,	// (0x00092e15) cale_bg_pane_g6

0xb6ab,	// (0x00092e1d) cale_bg_pane_g7

0xb6bb,	// (0x00092e2d) cale_bg_pane_g8

0xb6b3,	// (0x00092e25) cale_bg_pane_g9

0x0008,

0xf218,	// (0x0009698a) cale_bg_pane_g

0x3832,	// (0x0008afa4) list_cale_time_pane_ParamLimits

0x3832,	// (0x0008afa4) list_cale_time_pane

0xbb16,	// (0x00093288) list_cale_time_pane_g1_ParamLimits

0xbb16,	// (0x00093288) list_cale_time_pane_g1

0xbb22,	// (0x00093294) list_cale_time_pane_g2_ParamLimits

0xbb22,	// (0x00093294) list_cale_time_pane_g2

0x385a,	// (0x0008afcc) list_cale_time_pane_g3_ParamLimits

0x385a,	// (0x0008afcc) list_cale_time_pane_g3

0x3868,	// (0x0008afda) list_cale_time_pane_g4_ParamLimits

0x3868,	// (0x0008afda) list_cale_time_pane_g4

0x3876,	// (0x0008afe8) list_cale_time_pane_g5_ParamLimits

0x3876,	// (0x0008afe8) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x0009699d) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x0009699d) list_cale_time_pane_g

0xbb3c,	// (0x000932ae) list_cale_time_pane_t1_ParamLimits

0xbb3c,	// (0x000932ae) list_cale_time_pane_t1

0xbb64,	// (0x000932d6) list_cale_time_pane_t2_ParamLimits

0xbb64,	// (0x000932d6) list_cale_time_pane_t2

0x3b4b,	// (0x0008b2bd) aid_blid_cardinal_pane

0x3b8d,	// (0x0008b2ff) compass_pane_t4

0xbb8c,	// (0x000932fe) list_cale_time_pane_t4_ParamLimits

0xbb8c,	// (0x000932fe) list_cale_time_pane_t4

0x3b9b,	// (0x0008b30d) compass_pane_t5

0x3bab,	// (0x0008b31d) compass_pane_t6

0x3bb9,	// (0x0008b32b) compass_pane_t7

0xc015,	// (0x00093787) navi_pane_cc_t1

0xc1f2,	// (0x00093964) aid_phob_thumbnail_center_pane

0x3fe9,	// (0x0008b75b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x000969aa) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x000969aa) list_cale_time_pane_t

0xae61,	// (0x000925d3) bg_popup_window_pane_cp02_ParamLimits

0xae61,	// (0x000925d3) bg_popup_window_pane_cp02

0xbbb4,	// (0x00093326) heading_pane_cp01_ParamLimits

0xbbb4,	// (0x00093326) heading_pane_cp01

0xbbc0,	// (0x00093332) loc_req_pane_ParamLimits

0xbbc0,	// (0x00093332) loc_req_pane

0xbbd2,	// (0x00093344) loc_type_pane_ParamLimits

0xbbd2,	// (0x00093344) loc_type_pane

0xbbe4,	// (0x00093356) loc_type_pane_t1_ParamLimits

0xbbe4,	// (0x00093356) loc_type_pane_t1

0xbbf6,	// (0x00093368) loc_type_pane_t2_ParamLimits

0xbbf6,	// (0x00093368) loc_type_pane_t2

0xbc08,	// (0x0009337a) loc_type_pane_t3_ParamLimits

0xbc08,	// (0x0009337a) loc_type_pane_t3

0x0002,

0xf23f,	// (0x000969b1) loc_type_pane_t_ParamLimits

0xf23f,	// (0x000969b1) loc_type_pane_t

0xbc1a,	// (0x0009338c) list_loc_req_pane

0xbc24,	// (0x00093396) scroll_pane_cp012

0x3884,	// (0x0008aff6) list_single_loc_request_popup_menu_pane_ParamLimits

0x3884,	// (0x0008aff6) list_single_loc_request_popup_menu_pane

0xbc2f,	// (0x000933a1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xbc2f,	// (0x000933a1) list_single_loc_request_popup_menu_pane_g1

0xbc3b,	// (0x000933ad) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xbc3b,	// (0x000933ad) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x000969b8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x000969b8) list_single_loc_request_popup_menu_pane_g

0xbc47,	// (0x000933b9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xbc47,	// (0x000933b9) list_single_loc_request_popup_menu_pane_t1

0x389e,	// (0x0008b010) bg_popup_window_pane_cp03_ParamLimits

0x389e,	// (0x0008b010) bg_popup_window_pane_cp03

0x38ac,	// (0x0008b01e) heading_loc_req_pane_ParamLimits

0x38ac,	// (0x0008b01e) heading_loc_req_pane

0x38b8,	// (0x0008b02a) popup_dyc_status_message_window_g1_ParamLimits

0x38b8,	// (0x0008b02a) popup_dyc_status_message_window_g1

0x38c4,	// (0x0008b036) popup_dyc_status_message_window_t1_ParamLimits

0x38c4,	// (0x0008b036) popup_dyc_status_message_window_t1

0x38d6,	// (0x0008b048) popup_dyc_status_message_window_t2_ParamLimits

0x38d6,	// (0x0008b048) popup_dyc_status_message_window_t2

0x38e8,	// (0x0008b05a) popup_dyc_status_message_window_t3_ParamLimits

0x38e8,	// (0x0008b05a) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x000969bd) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x000969bd) popup_dyc_status_message_window_t

0xb218,	// (0x0009298a) bg_heading_pane_cp01

0xbc5d,	// (0x000933cf) heading_loc_req_pane_g1

0xbc65,	// (0x000933d7) heading_loc_req_pane_g2

0xbc6d,	// (0x000933df) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x000969c4) heading_loc_req_pane_g

0xbc75,	// (0x000933e7) heading_loc_req_pane_t1

0xbc94,	// (0x00093406) bg_popup_sub_pane_cp01_ParamLimits

0xbc94,	// (0x00093406) bg_popup_sub_pane_cp01

0xbca2,	// (0x00093414) popup_cale_events_window_g1_ParamLimits

0xbca2,	// (0x00093414) popup_cale_events_window_g1

0xbcc2,	// (0x00093434) popup_cale_events_window_g2_ParamLimits

0xbcc2,	// (0x00093434) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x000969e6) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x000969e6) popup_cale_events_window_g

0xbce2,	// (0x00093454) popup_cale_events_window_t1_ParamLimits

0xbce2,	// (0x00093454) popup_cale_events_window_t1

0xbcf4,	// (0x00093466) popup_cale_events_window_t2_ParamLimits

0xbcf4,	// (0x00093466) popup_cale_events_window_t2

0xbd32,	// (0x000934a4) popup_cale_events_window_t3_ParamLimits

0xbd32,	// (0x000934a4) popup_cale_events_window_t3

0xbd6c,	// (0x000934de) popup_cale_events_window_t4_ParamLimits

0xbd6c,	// (0x000934de) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x000969eb) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x000969eb) popup_cale_events_window_t

0x3912,	// (0x0008b084) call_type_pane

0xca6e,	// (0x000941e0) popup_call_status_window_g1

0x391e,	// (0x0008b090) popup_call_status_window_g2

0x392a,	// (0x0008b09c) popup_call_status_window_g3

0x0002,

0xf282,	// (0x000969f4) popup_call_status_window_g

0xbda2,	// (0x00093514) call_type_pane_g1

0xbdab,	// (0x0009351d) call_type_pane_g2

0x0001,

0xf289,	// (0x000969fb) call_type_pane_g

0xb218,	// (0x0009298a) bg_popup_sub_pane_cp02

0xbdb4,	// (0x00093526) listscroll_popup_wml_pane

0xbdbc,	// (0x0009352e) list_wml_pane

0xbdc6,	// (0x00093538) scroll_pane_cp013

0xbdd1,	// (0x00093543) list_single_graphic_popup_wml_pane_ParamLimits

0xbdd1,	// (0x00093543) list_single_graphic_popup_wml_pane

0xb48b,	// (0x00092bfd) list_single_graphic_popup_wml_pane_g1

0xbde5,	// (0x00093557) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x00096a00) list_single_graphic_popup_wml_pane_g

0xbded,	// (0x0009355f) list_single_graphic_popup_wml_pane_t1

0xbe03,	// (0x00093575) aid_call_pane

0xb46b,	// (0x00092bdd) popup_clock_analogue_window_g1

0xb46b,	// (0x00092bdd) popup_clock_analogue_window_g2

0x3936,	// (0x0008b0a8) popup_clock_analogue_window_g3

0x3936,	// (0x0008b0a8) popup_clock_analogue_window_g4

0xb48b,	// (0x00092bfd) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x00096a05) popup_clock_analogue_window_g

0x393e,	// (0x0008b0b0) popup_clock_analogue_window_t1

0x394c,	// (0x0008b0be) clock_digital_number_pane_ParamLimits

0x394c,	// (0x0008b0be) clock_digital_number_pane

0x3958,	// (0x0008b0ca) clock_digital_number_pane_cp02_ParamLimits

0x3958,	// (0x0008b0ca) clock_digital_number_pane_cp02

0x3964,	// (0x0008b0d6) clock_digital_number_pane_cp03_ParamLimits

0x3964,	// (0x0008b0d6) clock_digital_number_pane_cp03

0x3970,	// (0x0008b0e2) clock_digital_number_pane_cp04_ParamLimits

0x3970,	// (0x0008b0e2) clock_digital_number_pane_cp04

0x397c,	// (0x0008b0ee) clock_digital_separator_pane_ParamLimits

0x397c,	// (0x0008b0ee) clock_digital_separator_pane

0x3988,	// (0x0008b0fa) popup_clock_digital_window_t1

0xb48b,	// (0x00092bfd) clock_digital_number_pane_g1

0xb48b,	// (0x00092bfd) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x00096985) clock_digital_number_pane_g

0xb48b,	// (0x00092bfd) clock_digital_separator_pane_g1

0xb48b,	// (0x00092bfd) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x00096985) clock_digital_separator_pane_g

0xb218,	// (0x0009298a) bg_popup_window_pane_cp04

0xbe17,	// (0x00093589) heading_pane_cp03

0xb792,	// (0x00092f04) listscroll_popup_gms_pane

0xb218,	// (0x0009298a) grid_large_graphic_popup_pane

0xbe1f,	// (0x00093591) listscroll_popup_gms_pane_g1

0xbe28,	// (0x0009359a) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x00096a10) listscroll_popup_gms_pane_g

0xbe31,	// (0x000935a3) scroll_pane_cp014

0xb4e0,	// (0x00092c52) cell_large_graphic_popup_pane_ParamLimits

0xb4e0,	// (0x00092c52) cell_large_graphic_popup_pane

0xb4ee,	// (0x00092c60) cell_large_graphic_popup_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) cell_large_graphic_popup_pane_g1

0xbe3a,	// (0x000935ac) cell_large_graphic_popup_pane_g2_ParamLimits

0xbe3a,	// (0x000935ac) cell_large_graphic_popup_pane_g2

0xbe48,	// (0x000935ba) cell_large_graphic_popup_pane_g3_ParamLimits

0xbe48,	// (0x000935ba) cell_large_graphic_popup_pane_g3

0xbe56,	// (0x000935c8) cell_large_graphic_popup_pane_g4_ParamLimits

0xbe56,	// (0x000935c8) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x00096a15) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x00096a15) cell_large_graphic_popup_pane_g

0xb218,	// (0x0009298a) grid_highlight_pane_cp010

0xb48b,	// (0x00092bfd) bg_popup_call_pane_g1

0xbe67,	// (0x000935d9) list_single_graphic_popup_conf_pane_ParamLimits

0xbe67,	// (0x000935d9) list_single_graphic_popup_conf_pane

0xbe7a,	// (0x000935ec) list_highlight_pane_cp01

0xbe83,	// (0x000935f5) list_single_graphic_popup_conf_pane_g1

0xbe8b,	// (0x000935fd) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x00096a1e) list_single_graphic_popup_conf_pane_g

0xbe93,	// (0x00093605) list_single_graphic_popup_conf_pane_t1

0xbea1,	// (0x00093613) linegrid_cams_pane_g1

0x39a5,	// (0x0008b117) linegrid_cams_pane_g2

0xb6c3,	// (0x00092e35) linegrid_cams_pane_g3

0xbeaa,	// (0x0009361c) linegrid_cams_pane_g4

0x39ae,	// (0x0008b120) linegrid_cams_pane_g5

0x39b7,	// (0x0008b129) linegrid_cams_pane_g6

0xb781,	// (0x00092ef3) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x00096a23) linegrid_cams_pane_g

0xbeb3,	// (0x00093625) popup_clock_analogue_window

0xbeb3,	// (0x00093625) popup_clock_digital_window

0xb218,	// (0x0009298a) popup_phob_thumbnail_window

0xb48b,	// (0x00092bfd) call_video_uplink_pane_g1

0xbebc,	// (0x0009362e) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x00096a32) call_video_uplink_pane_g

0xbec4,	// (0x00093636) video_uplink_pane

0xbecc,	// (0x0009363e) mce_image_pane_g1

0x39c0,	// (0x0008b132) mce_image_pane_g2

0x39c8,	// (0x0008b13a) mce_image_pane_g3

0x39d0,	// (0x0008b142) mce_image_pane_g4

0x39d8,	// (0x0008b14a) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x00096a37) mce_image_pane_g

0xbed6,	// (0x00093648) control_top_pane_stacon_cp01_ParamLimits

0xbed6,	// (0x00093648) control_top_pane_stacon_cp01

0xbeea,	// (0x0009365c) uni_indicator_pane_stacon_cp01_ParamLimits

0xbeea,	// (0x0009365c) uni_indicator_pane_stacon_cp01

0xbefb,	// (0x0009366d) bg_popup_sub_pane_cp03

0x39e0,	// (0x0008b152) chi_dic_find_pane

0x39e8,	// (0x0008b15a) listscroll_chi_dic_pane

0x39f1,	// (0x0008b163) main_pane_chidic_g1

0x3a04,	// (0x0008b176) chi_dic_find_pane_t1

0xbf05,	// (0x00093677) find_chidic_pane

0xbf0e,	// (0x00093680) chi_dic_list_pane_ParamLimits

0xbf0e,	// (0x00093680) chi_dic_list_pane

0xbf1f,	// (0x00093691) scroll_pane_cp020

0x3a12,	// (0x0008b184) find_chidic_pane_t1

0xb218,	// (0x0009298a) input_focus_pane_cp06

0x3a21,	// (0x0008b193) list_chi_dic_pane_ParamLimits

0x3a21,	// (0x0008b193) list_chi_dic_pane

0x3a3e,	// (0x0008b1b0) list_chi_dic_pane_t1_ParamLimits

0x3a3e,	// (0x0008b1b0) list_chi_dic_pane_t1

0xb218,	// (0x0009298a) list_highlight_pane_cp020

0xbf27,	// (0x00093699) bg_cale_heading_pane_g1

0x3a51,	// (0x0008b1c3) bg_cale_heading_pane_g2

0x3a59,	// (0x0008b1cb) bg_cale_heading_pane_g3

0x3a61,	// (0x0008b1d3) bg_cale_heading_pane_g4

0x3a6b,	// (0x0008b1dd) bg_cale_heading_pane_g5

0x3a75,	// (0x0008b1e7) bg_cale_heading_pane_g6

0x3a7d,	// (0x0008b1ef) bg_cale_heading_pane_g7

0x3a85,	// (0x0008b1f7) bg_cale_heading_pane_g8

0x3a8f,	// (0x0008b201) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x00096a42) bg_cale_heading_pane_g

0xbf27,	// (0x00093699) bg_cale_side_pane_g1

0x3a99,	// (0x0008b20b) bg_cale_side_pane_g2

0x3aa3,	// (0x0008b215) bg_cale_side_pane_g3

0x3aad,	// (0x0008b21f) bg_cale_side_pane_g4

0x3ab7,	// (0x0008b229) bg_cale_side_pane_g5

0x3ac1,	// (0x0008b233) bg_cale_side_pane_g6

0x3acb,	// (0x0008b23d) bg_cale_side_pane_g7

0x3ad5,	// (0x0008b247) bg_cale_side_pane_g8

0x3add,	// (0x0008b24f) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x00096a55) bg_cale_side_pane_g

0x3ae5,	// (0x0008b257) popup_call_status_window_ParamLimits

0x3ae5,	// (0x0008b257) popup_call_status_window

0xbf2f,	// (0x000936a1) stacon_top_pane

0xbf37,	// (0x000936a9) status_pane_ParamLimits

0xbf37,	// (0x000936a9) status_pane

0xbf4c,	// (0x000936be) status_small_pane

0xbf54,	// (0x000936c6) control_pane

0xb218,	// (0x0009298a) stacon_bottom_pane

0xbf5c,	// (0x000936ce) list_single_mce_smart_pane_t1_ParamLimits

0xbf5c,	// (0x000936ce) list_single_mce_smart_pane_t1

0xbf6f,	// (0x000936e1) list_single_mce_smart_pane_t2_ParamLimits

0xbf6f,	// (0x000936e1) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x00096a68) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x00096a68) list_single_mce_smart_pane_t

0x3af1,	// (0x0008b263) compass_pane

0x3afd,	// (0x0008b26f) main_location2_pane_t1

0x3b11,	// (0x0008b283) main_location2_pane_t2

0x3b25,	// (0x0008b297) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x00096a6d) main_location2_pane_t

0xbf8e,	// (0x00093700) compass_pane_g1_ParamLimits

0xbf8e,	// (0x00093700) compass_pane_g1

0x3b6f,	// (0x0008b2e1) compass_pane_t1

0x3b7e,	// (0x0008b2f0) compass_pane_t2

0x0005,

0xf304,	// (0x00096a76) compass_pane_t

0x3bc9,	// (0x0008b33b) text_secondary_cp61

0xc00c,	// (0x0009377e) navi_pane_cams_g5

0xc088,	// (0x000937fa) navi_pane_im_t1

0xc096,	// (0x00093808) navi_pane_mp_g1_ParamLimits

0xc096,	// (0x00093808) navi_pane_mp_g1

0xc0aa,	// (0x0009381c) navi_pane_mp_g2_ParamLimits

0xc0aa,	// (0x0009381c) navi_pane_mp_g2

0xc0b6,	// (0x00093828) navi_pane_mp_g3_ParamLimits

0xc0b6,	// (0x00093828) navi_pane_mp_g3

0x0002,

0xf318,	// (0x00096a8a) navi_pane_mp_g_ParamLimits

0xf318,	// (0x00096a8a) navi_pane_mp_g

0xc0c2,	// (0x00093834) navi_pane_mp_t1

0xc0d0,	// (0x00093842) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x00096a91) navi_pane_mp_t

0xc13b,	// (0x000938ad) navi_pane_vt_g1

0xc0c2,	// (0x00093834) navi_pane_vt_t1

0xc143,	// (0x000938b5) navi_slider_pane

0xb792,	// (0x00092f04) zooming_pane

0xc153,	// (0x000938c5) navi_slider_pane_g1

0x3c04,	// (0x0008b376) navi_slider_pane_g2

0x0006,

0xf326,	// (0x00096a98) navi_slider_pane_g

0xc177,	// (0x000938e9) aid_levels_zoom

0xc17f,	// (0x000938f1) zooming_pane_g1

0xc187,	// (0x000938f9) zooming_pane_g2

0xc187,	// (0x000938f9) zooming_pane_g3

0x0002,

0xf335,	// (0x00096aa7) zooming_pane_g

0xc18f,	// (0x00093901) level_10_zoom

0xc198,	// (0x0009390a) level_11_zoom

0xc1a1,	// (0x00093913) level_1_zoom

0xc1aa,	// (0x0009391c) level_2_zoom

0xc1b3,	// (0x00093925) level_3_zoom

0xc1bc,	// (0x0009392e) level_4_zoom

0xc1c5,	// (0x00093937) level_5_zoom

0xc1ce,	// (0x00093940) level_6_zoom

0xc1d7,	// (0x00093949) level_7_zoom

0xc1e0,	// (0x00093952) level_8_zoom

0xc1e9,	// (0x0009395b) level_9_zoom

0xc1fa,	// (0x0009396c) popup_phob_thumbnail_window_g1

0xc202,	// (0x00093974) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x00096aae) popup_phob_thumbnail_window_g

0x44fb,	// (0x0008bc6d) level_1_location

0x4503,	// (0x0008bc75) level_2_location

0x450b,	// (0x0008bc7d) level_3_location

0x4515,	// (0x0008bc87) level_4_location

0xb792,	// (0x00092f04) level_5_location

0x3c16,	// (0x0008b388) mce_icon_pane_g1

0x3c1e,	// (0x0008b390) mce_icon_pane_g2

0x0001,

0xf341,	// (0x00096ab3) mce_icon_pane_g

0x3c26,	// (0x0008b398) main_mup_pane_g1_ParamLimits

0x3c26,	// (0x0008b398) main_mup_pane_g1

0xb50a,	// (0x00092c7c) main_mup_pane_g2_ParamLimits

0xb50a,	// (0x00092c7c) main_mup_pane_g2

0xb50a,	// (0x00092c7c) main_mup_pane_g3_ParamLimits

0xb50a,	// (0x00092c7c) main_mup_pane_g3

0xb50a,	// (0x00092c7c) main_mup_pane_g4_ParamLimits

0xb50a,	// (0x00092c7c) main_mup_pane_g4

0xb50a,	// (0x00092c7c) main_mup_pane_g5_ParamLimits

0xb50a,	// (0x00092c7c) main_mup_pane_g5

0xb50a,	// (0x00092c7c) main_mup_pane_g6_ParamLimits

0xb50a,	// (0x00092c7c) main_mup_pane_g6

0xb50a,	// (0x00092c7c) main_mup_pane_g7_ParamLimits

0xb50a,	// (0x00092c7c) main_mup_pane_g7

0xb50a,	// (0x00092c7c) main_mup_pane_g8_ParamLimits

0xb50a,	// (0x00092c7c) main_mup_pane_g8

0xb50a,	// (0x00092c7c) main_mup_pane_g9_ParamLimits

0xb50a,	// (0x00092c7c) main_mup_pane_g9

0xb50a,	// (0x00092c7c) main_mup_pane_g10_ParamLimits

0xb50a,	// (0x00092c7c) main_mup_pane_g10

0xb50a,	// (0x00092c7c) main_mup_pane_g11_ParamLimits

0xb50a,	// (0x00092c7c) main_mup_pane_g11

0xb4fc,	// (0x00092c6e) main_mup_pane_g12_ParamLimits

0xb4fc,	// (0x00092c6e) main_mup_pane_g12

0xb50a,	// (0x00092c7c) main_mup_pane_g13_ParamLimits

0xb50a,	// (0x00092c7c) main_mup_pane_g13

0x000c,

0xf346,	// (0x00096ab8) main_mup_pane_g_ParamLimits

0xf346,	// (0x00096ab8) main_mup_pane_g

0xb518,	// (0x00092c8a) main_mup_pane_t1_ParamLimits

0xb518,	// (0x00092c8a) main_mup_pane_t1

0xb518,	// (0x00092c8a) main_mup_pane_t2_ParamLimits

0xb518,	// (0x00092c8a) main_mup_pane_t2

0xb518,	// (0x00092c8a) main_mup_pane_t3_ParamLimits

0xb518,	// (0x00092c8a) main_mup_pane_t3

0xb54a,	// (0x00092cbc) main_mup_pane_t4_ParamLimits

0xb54a,	// (0x00092cbc) main_mup_pane_t4

0xb54a,	// (0x00092cbc) main_mup_pane_t5_ParamLimits

0xb54a,	// (0x00092cbc) main_mup_pane_t5

0xb536,	// (0x00092ca8) main_mup_pane_t6_ParamLimits

0xb536,	// (0x00092ca8) main_mup_pane_t6

0x0005,

0xf361,	// (0x00096ad3) main_mup_pane_t_ParamLimits

0xf361,	// (0x00096ad3) main_mup_pane_t

0xb14f,	// (0x000928c1) mup_progress_pane_ParamLimits

0xb14f,	// (0x000928c1) mup_progress_pane

0xd4af,	// (0x00094c21) mup_visualizer_pane_ParamLimits

0xd4af,	// (0x00094c21) mup_visualizer_pane

0xd4af,	// (0x00094c21) mup_volume_pane_ParamLimits

0xd4af,	// (0x00094c21) mup_volume_pane

0xb4fc,	// (0x00092c6e) mup_visualizer_pane_g1_ParamLimits

0xb4fc,	// (0x00092c6e) mup_visualizer_pane_g1

0xc20a,	// (0x0009397c) mup_visualizer_pane_g2_ParamLimits

0xc20a,	// (0x0009397c) mup_visualizer_pane_g2

0xb4ee,	// (0x00092c60) mup_visualizer_pane_g3_ParamLimits

0xb4ee,	// (0x00092c60) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x00096ae0) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x00096ae0) mup_visualizer_pane_g

0xb52c,	// (0x00092c9e) mup_volume_pane_g1

0xb52c,	// (0x00092c9e) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x000967fe) mup_volume_pane_g

0xb52c,	// (0x00092c9e) mup_progress_pane_g1

0xb52c,	// (0x00092c9e) mup_progress_pane_g2

0xb52c,	// (0x00092c9e) mup_progress_pane_g3

0x0002,

0xf375,	// (0x00096ae7) mup_progress_pane_g

0xb218,	// (0x0009298a) bg_popup_window_pane_cp05

0xc218,	// (0x0009398a) heading_pane_cp02_ParamLimits

0xc218,	// (0x0009398a) heading_pane_cp02

0xc232,	// (0x000939a4) list_popup_blid_pane

0xc23a,	// (0x000939ac) list_blid_sat_info_pane_ParamLimits

0xc23a,	// (0x000939ac) list_blid_sat_info_pane

0xc24d,	// (0x000939bf) list_blid_sat_info_pane_g1

0xc255,	// (0x000939c7) list_blid_sat_info_pane_t1

0x3d21,	// (0x0008b493) mup_equalizer_pane_ParamLimits

0x3d21,	// (0x0008b493) mup_equalizer_pane

0x3d42,	// (0x0008b4b4) mup_equalizer_pane_cp1_ParamLimits

0x3d42,	// (0x0008b4b4) mup_equalizer_pane_cp1

0x3d63,	// (0x0008b4d5) mup_equalizer_pane_cp2_ParamLimits

0x3d63,	// (0x0008b4d5) mup_equalizer_pane_cp2

0x3d84,	// (0x0008b4f6) mup_equalizer_pane_cp3_ParamLimits

0x3d84,	// (0x0008b4f6) mup_equalizer_pane_cp3

0x3da5,	// (0x0008b517) mup_equalizer_pane_cp4_ParamLimits

0x3da5,	// (0x0008b517) mup_equalizer_pane_cp4

0x3dc6,	// (0x0008b538) mup_equalizer_pane_cp5

0x3ddc,	// (0x0008b54e) mup_equalizer_pane_cp6

0x3df4,	// (0x0008b566) mup_equalizer_pane_cp7

0xd3bb,	// (0x00094b2d) bg_popup_call_poc_act_pane_g9

0xd3c3,	// (0x00094b35) bg_popup_call_poc_act_pane_g10

0xd3cb,	// (0x00094b3d) bg_popup_call_poc_act_pane_g11

0x000a,

0xb473,	// (0x00092be5) mup_scale_pane

0xb48b,	// (0x00092bfd) mup_scale_pane_g1

0xc263,	// (0x000939d5) mup_scale_pane_g2

0x0006,

0xf391,	// (0x00096b03) mup_scale_pane_g

0xc287,	// (0x000939f9) msg_data_pane

0xc28f,	// (0x00093a01) scroll_pane_cp017

0x3e1e,	// (0x0008b590) bg_list_pane_cp04_ParamLimits

0x3e1e,	// (0x0008b590) bg_list_pane_cp04

0xc29f,	// (0x00093a11) msg_data_pane_g1

0x3e3a,	// (0x0008b5ac) msg_data_pane_g2

0x3e42,	// (0x0008b5b4) msg_data_pane_g3

0x3e4a,	// (0x0008b5bc) msg_data_pane_g4

0x3e52,	// (0x0008b5c4) msg_data_pane_g5

0x3e5a,	// (0x0008b5cc) msg_data_pane_g6

0x3e62,	// (0x0008b5d4) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x00096b12) msg_data_pane_g

0x3e6a,	// (0x0008b5dc) msg_text_pane_ParamLimits

0x3e6a,	// (0x0008b5dc) msg_text_pane

0x3ecb,	// (0x0008b63d) qrid_highlight_pane_cp011_ParamLimits

0x3ecb,	// (0x0008b63d) qrid_highlight_pane_cp011

0xb218,	// (0x0009298a) msg_body_pane

0xb473,	// (0x00092be5) msg_header_pane

0xc2bb,	// (0x00093a2d) input_focus_pane_cp07

0xc2dc,	// (0x00093a4e) msg_header_pane_t1_ParamLimits

0xc2dc,	// (0x00093a4e) msg_header_pane_t1

0xc2f8,	// (0x00093a6a) msg_header_pane_t2_ParamLimits

0xc2f8,	// (0x00093a6a) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x00096b26) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x00096b26) msg_header_pane_t

0xc318,	// (0x00093a8a) msg_body_pane_g1

0xc320,	// (0x00093a92) msg_body_pane_t1_ParamLimits

0xc320,	// (0x00093a92) msg_body_pane_t1

0xc351,	// (0x00093ac3) msg_body_pane_t2_ParamLimits

0xc351,	// (0x00093ac3) msg_body_pane_t2

0xc363,	// (0x00093ad5) msg_body_pane_t3_ParamLimits

0xc363,	// (0x00093ad5) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x00096b2b) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x00096b2b) msg_body_pane_t

0x3f45,	// (0x0008b6b7) main_viewer_pane_g1_ParamLimits

0x3f45,	// (0x0008b6b7) main_viewer_pane_g1

0x3f51,	// (0x0008b6c3) main_viewer_pane_g2_ParamLimits

0x3f51,	// (0x0008b6c3) main_viewer_pane_g2

0x3f5d,	// (0x0008b6cf) main_viewer_pane_g3_ParamLimits

0x3f5d,	// (0x0008b6cf) main_viewer_pane_g3

0x3f6e,	// (0x0008b6e0) main_viewer_pane_g4_ParamLimits

0x3f6e,	// (0x0008b6e0) main_viewer_pane_g4

0x3f7f,	// (0x0008b6f1) main_viewer_pane_g5_ParamLimits

0x3f7f,	// (0x0008b6f1) main_viewer_pane_g5

0x3f7f,	// (0x0008b6f1) main_viewer_pane_g7_ParamLimits

0x3f7f,	// (0x0008b6f1) main_viewer_pane_g7

0xbc2f,	// (0x000933a1) main_viewer_pane_g8_ParamLimits

0xbc2f,	// (0x000933a1) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x00096b3b) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x00096b3b) main_viewer_pane_g

0xc3a5,	// (0x00093b17) viewer_content_pane_ParamLimits

0xc3a5,	// (0x00093b17) viewer_content_pane

0x3fbd,	// (0x0008b72f) main_postcard_pane_g1_ParamLimits

0x3fbd,	// (0x0008b72f) main_postcard_pane_g1

0x3fcb,	// (0x0008b73d) main_postcard_pane_g2_ParamLimits

0x3fcb,	// (0x0008b73d) main_postcard_pane_g2

0x3fd9,	// (0x0008b74b) main_postcard_pane_g3_ParamLimits

0x3fd9,	// (0x0008b74b) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x00096b4c) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x00096b4c) main_postcard_pane_g

0x3fe9,	// (0x0008b75b) main_postcard_pane_g4

0xd545,	// (0x00094cb7) smil_status_volume_pane_g2

0x4015,	// (0x0008b787) postcard_pane_ParamLimits

0x4015,	// (0x0008b787) postcard_pane

0xca6e,	// (0x000941e0) postcard_pane_g1_ParamLimits

0xca6e,	// (0x000941e0) postcard_pane_g1

0x4047,	// (0x0008b7b9) postcard_pane_g2_ParamLimits

0x4047,	// (0x0008b7b9) postcard_pane_g2

0x4053,	// (0x0008b7c5) postcard_pane_g3_ParamLimits

0x4053,	// (0x0008b7c5) postcard_pane_g3

0xc3b3,	// (0x00093b25) postcard_pane_g4_ParamLimits

0xc3b3,	// (0x00093b25) postcard_pane_g4

0x405f,	// (0x0008b7d1) postcard_pane_g5_ParamLimits

0x405f,	// (0x0008b7d1) postcard_pane_g5

0x406b,	// (0x0008b7dd) postcard_pane_g6_ParamLimits

0x406b,	// (0x0008b7dd) postcard_pane_g6

0xc3c1,	// (0x00093b33) postcard_pane_g7_ParamLimits

0xc3c1,	// (0x00093b33) postcard_pane_g7

0x0006,

0xf3e7,	// (0x00096b59) postcard_pane_g_ParamLimits

0xf3e7,	// (0x00096b59) postcard_pane_g

0x4077,	// (0x0008b7e9) main_mp2_pane_g1_ParamLimits

0x4077,	// (0x0008b7e9) main_mp2_pane_g1

0x4083,	// (0x0008b7f5) main_mp2_pane_g2_ParamLimits

0x4083,	// (0x0008b7f5) main_mp2_pane_g2

0x408f,	// (0x0008b801) main_mp2_pane_g3_ParamLimits

0x408f,	// (0x0008b801) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x00096b68) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x00096b68) main_mp2_pane_g

0x409b,	// (0x0008b80d) main_mp2_pane_t1_ParamLimits

0x409b,	// (0x0008b80d) main_mp2_pane_t1

0x40b2,	// (0x0008b824) main_mp2_pane_t2_ParamLimits

0x40b2,	// (0x0008b824) main_mp2_pane_t2

0x40c4,	// (0x0008b836) main_mp2_pane_t3_ParamLimits

0x40c4,	// (0x0008b836) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x00096b6f) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x00096b6f) main_mp2_pane_t

0xb14f,	// (0x000928c1) pec_content_pane_ParamLimits

0xb14f,	// (0x000928c1) pec_content_pane

0xaded,	// (0x0009255f) scroll_pane_cp015

0xc375,	// (0x00093ae7) pec_attribute_pane_ParamLimits

0xc375,	// (0x00093ae7) pec_attribute_pane

0xb4ee,	// (0x00092c60) pec_content_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) pec_content_pane_g1

0xc3cf,	// (0x00093b41) pec_content_pane_t1_ParamLimits

0xc3cf,	// (0x00093b41) pec_content_pane_t1

0xc3e3,	// (0x00093b55) pec_content_pane_t2_ParamLimits

0xc3e3,	// (0x00093b55) pec_content_pane_t2

0x0001,

0xf404,	// (0x00096b76) pec_content_pane_t_ParamLimits

0xf404,	// (0x00096b76) pec_content_pane_t

0xb4e0,	// (0x00092c52) list_single_graphic_pane_cp01_ParamLimits

0xb4e0,	// (0x00092c52) list_single_graphic_pane_cp01

0xb473,	// (0x00092be5) bg_popup_sub_pane_cp04

0xc3f7,	// (0x00093b69) popup_mup_playback_window_g1

0xc403,	// (0x00093b75) popup_mup_playback_window_t1

0xc418,	// (0x00093b8a) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x00096b7b) popup_mup_playback_window_t

0xc44f,	// (0x00093bc1) main_image_pane_g1_ParamLimits

0xc44f,	// (0x00093bc1) main_image_pane_g1

0xc492,	// (0x00093c04) scroll_pane_cp018_ParamLimits

0xc492,	// (0x00093c04) scroll_pane_cp018

0xc4aa,	// (0x00093c1c) scroll_pane_cp016_ParamLimits

0xc4aa,	// (0x00093c1c) scroll_pane_cp016

0x4147,	// (0x0008b8b9) smil2_image_pane_ParamLimits

0x4147,	// (0x0008b8b9) smil2_image_pane

0x4177,	// (0x0008b8e9) smil2_root_pane_ParamLimits

0x4177,	// (0x0008b8e9) smil2_root_pane

0x41a3,	// (0x0008b915) smil2_text_pane_ParamLimits

0x41a3,	// (0x0008b915) smil2_text_pane

0xaded,	// (0x0009255f) bg_list_pane_cp06

0xaded,	// (0x0009255f) grid_radio_pane

0xb218,	// (0x0009298a) bg_popup_window_pane_cp06

0xbc84,	// (0x000933f6) main_fmradio_pane_t1

0xbe17,	// (0x00093589) heading_pane_cp04

0xbc84,	// (0x000933f6) main_fmradio_pane_t2

0xd413,	// (0x00094b85) popup_cale_lunar_info_window_g1

0xbc84,	// (0x000933f6) main_fmradio_pane_t3

0xd41b,	// (0x00094b8d) popup_cale_lunar_info_window_g2

0xbc84,	// (0x000933f6) main_fmradio_pane_t4

0x0001,

0xbc84,	// (0x000933f6) main_fmradio_pane_t5

0x0004,

0xf4de,	// (0x00096c50) popup_cale_lunar_info_window_g

0xf269,	// (0x000969db) main_fmradio_pane_t

0xaded,	// (0x0009255f) wait_bar_pane_cp03

0xb4e0,	// (0x00092c52) cell_fmradio_pane_ParamLimits

0xb4e0,	// (0x00092c52) cell_fmradio_pane

0xb4ee,	// (0x00092c60) cell_fmradio_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) cell_fmradio_pane_g1

0xaded,	// (0x0009255f) grid_highlight_pane_cp011

0xc4de,	// (0x00093c50) poc_content_pane_ParamLimits

0xc4de,	// (0x00093c50) poc_content_pane

0xc4f0,	// (0x00093c62) scroll_pane_cp019

0x41e3,	// (0x0008b955) popup_call_poc_act_window_ParamLimits

0x41e3,	// (0x0008b955) popup_call_poc_act_window

0x41f0,	// (0x0008b962) popup_call_poc_inact_window_ParamLimits

0x41f0,	// (0x0008b962) popup_call_poc_inact_window

0xf4a2,	// (0x00096c14) bg_popup_call_poc_act_pane_g

0xd3d3,	// (0x00094b45) bg_popup_call_poc_inact_pane_g1

0xd3db,	// (0x00094b4d) bg_popup_call_poc_inact_pane_g2

0xc4f8,	// (0x00093c6a) popup_call_poc_act_window_g2

0xd3e3,	// (0x00094b55) bg_popup_call_poc_inact_pane_g3

0xd363,	// (0x00094ad5) bg_popup_call_poc_inact_pane_g4

0xd3eb,	// (0x00094b5d) bg_popup_call_poc_inact_pane_g5

0xc500,	// (0x00093c72) popup_call_poc_act_window_t1_ParamLimits

0xc500,	// (0x00093c72) popup_call_poc_act_window_t1

0xc528,	// (0x00093c9a) popup_call_poc_act_window_t2_ParamLimits

0xc528,	// (0x00093c9a) popup_call_poc_act_window_t2

0xc550,	// (0x00093cc2) popup_call_poc_act_window_t3_ParamLimits

0xc550,	// (0x00093cc2) popup_call_poc_act_window_t3

0xc578,	// (0x00093cea) popup_call_poc_act_window_t4_ParamLimits

0xc578,	// (0x00093cea) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x00096b90) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x00096b90) popup_call_poc_act_window_t

0xd3f3,	// (0x00094b65) bg_popup_call_poc_inact_pane_g6

0xd3fb,	// (0x00094b6d) bg_popup_call_poc_inact_pane_g7

0xd403,	// (0x00094b75) bg_popup_call_poc_inact_pane_g8

0xc58a,	// (0x00093cfc) popup_call_poc_inact_window_g2

0xd40b,	// (0x00094b7d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4b9,	// (0x00096c2b) bg_popup_call_poc_inact_pane_g

0xc592,	// (0x00093d04) popup_call_poc_inact_window_t1_ParamLimits

0xc592,	// (0x00093d04) popup_call_poc_inact_window_t1

0xc5a7,	// (0x00093d19) popup_call_poc_inact_window_t2_ParamLimits

0xc5a7,	// (0x00093d19) popup_call_poc_inact_window_t2

0xc5bc,	// (0x00093d2e) popup_call_poc_inact_window_t3_ParamLimits

0xc5bc,	// (0x00093d2e) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x00096b99) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x00096b99) popup_call_poc_inact_window_t

0xd4bd,	// (0x00094c2f) context_pane_ParamLimits

0x480b,	// (0x0008bf7d) signal_pane_ParamLimits

0xb792,	// (0x00092f04) main_call2_pane

0x477e,	// (0x0008bef0) popup_phob_thumbnail2_window_ParamLimits

0x477e,	// (0x0008bef0) popup_phob_thumbnail2_window

0x3ef3,	// (0x0008b665) aid_hotspot_pointer_arrow_pane

0x3efb,	// (0x0008b66d) aid_hotspot_pointer_hand_pane

0x44c3,	// (0x0008bc35) phob_pre_status_pane_g5

0xb4e0,	// (0x00092c52) cams_zoom_pane_ParamLimits

0xb4e0,	// (0x00092c52) image_vga_pane_ParamLimits

0xb4fc,	// (0x00092c6e) main_camera_pane_g1_ParamLimits

0xb4fc,	// (0x00092c6e) main_camera_pane_g2_ParamLimits

0xb4fc,	// (0x00092c6e) main_camera_pane_g3_ParamLimits

0xb4fc,	// (0x00092c6e) main_camera_pane_g4_ParamLimits

0xb4fc,	// (0x00092c6e) main_camera_pane_g5_ParamLimits

0xb4fc,	// (0x00092c6e) main_camera_pane_g6_ParamLimits

0xb4fc,	// (0x00092c6e) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x000968cf) main_camera_pane_g_ParamLimits

0xb54a,	// (0x00092cbc) main_camera_pane_t1_ParamLimits

0xb54a,	// (0x00092cbc) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x000968e0) main_camera_pane_t_ParamLimits

0xb473,	// (0x00092be5) bg_popup_preview_window_pane_cp01_ParamLimits

0xb473,	// (0x00092be5) bg_popup_preview_window_pane_cp01

0xc5d1,	// (0x00093d43) popup_phob_thumbnail2_window_g1_ParamLimits

0xc5d1,	// (0x00093d43) popup_phob_thumbnail2_window_g1

0xb218,	// (0x0009298a) call2_cli_visual_pane

0x420c,	// (0x0008b97e) popup_call2_audio_conf_window_ParamLimits

0x420c,	// (0x0008b97e) popup_call2_audio_conf_window

0x4221,	// (0x0008b993) popup_call2_audio_first_window_ParamLimits

0x4221,	// (0x0008b993) popup_call2_audio_first_window

0x42bf,	// (0x0008ba31) popup_call2_audio_in_window_ParamLimits

0x42bf,	// (0x0008ba31) popup_call2_audio_in_window

0x4301,	// (0x0008ba73) popup_call2_audio_out_window_ParamLimits

0x4301,	// (0x0008ba73) popup_call2_audio_out_window

0x4363,	// (0x0008bad5) popup_call2_audio_second_window_ParamLimits

0x4363,	// (0x0008bad5) popup_call2_audio_second_window

0x43c1,	// (0x0008bb33) popup_call2_audio_wait_window_ParamLimits

0x43c1,	// (0x0008bb33) popup_call2_audio_wait_window

0xb218,	// (0x0009298a) bg_popup_call2_act_pane_cp03

0xb455,	// (0x00092bc7) list_conf_pane_cp

0xc5dd,	// (0x00093d4f) popup_call2_audio_conf_window_t1

0xc5eb,	// (0x00093d5d) list_single_graphic_popup_conf2_pane_ParamLimits

0xc5eb,	// (0x00093d5d) list_single_graphic_popup_conf2_pane

0xbe7a,	// (0x000935ec) list_highlight_pane_cp04

0xc5fe,	// (0x00093d70) list_single_graphic_popup_conf2_pane_g1

0xbe8b,	// (0x000935fd) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x00096ba0) list_single_graphic_popup_conf2_pane_g

0xc608,	// (0x00093d7a) list_single_graphic_popup_conf2_pane_t1

0xc616,	// (0x00093d88) bg_popup_call2_act_pane_cp01_ParamLimits

0xc616,	// (0x00093d88) bg_popup_call2_act_pane_cp01

0xc6a0,	// (0x00093e12) call_type_pane_cp05_ParamLimits

0xc6a0,	// (0x00093e12) call_type_pane_cp05

0xc6f4,	// (0x00093e66) popup_call2_audio_second_window_g1_ParamLimits

0xc6f4,	// (0x00093e66) popup_call2_audio_second_window_g1

0xc748,	// (0x00093eba) popup_call2_audio_second_window_g2_ParamLimits

0xc748,	// (0x00093eba) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x00096ba5) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x00096ba5) popup_call2_audio_second_window_g

0xc7ad,	// (0x00093f1f) popup_call2_audio_second_window_t1_ParamLimits

0xc7ad,	// (0x00093f1f) popup_call2_audio_second_window_t1

0xc868,	// (0x00093fda) popup_call2_audio_second_window_t2_ParamLimits

0xc868,	// (0x00093fda) popup_call2_audio_second_window_t2

0xc8bb,	// (0x0009402d) popup_call2_audio_second_window_t3_ParamLimits

0xc8bb,	// (0x0009402d) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x00096bac) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x00096bac) popup_call2_audio_second_window_t

0xb218,	// (0x0009298a) bg_popup_call2_in_pane_cp02

0xb222,	// (0x00092994) call_type_pane_cp04

0x4400,	// (0x0008bb72) popup_call2_audio_wait_window_g1

0x4408,	// (0x0008bb7a) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x00096bb5) popup_call2_audio_wait_window_g

0xb23a,	// (0x000929ac) popup_call2_audio_wait_window_t3

0xc9ae,	// (0x00094120) bg_popup_call2_act_pane_ParamLimits

0xc9ae,	// (0x00094120) bg_popup_call2_act_pane

0xca7c,	// (0x000941ee) call_type_pane_cp03_ParamLimits

0xca7c,	// (0x000941ee) call_type_pane_cp03

0xcae0,	// (0x00094252) popup_call2_audio_first_window_g1_ParamLimits

0xcae0,	// (0x00094252) popup_call2_audio_first_window_g1

0xcb50,	// (0x000942c2) popup_call2_audio_first_window_g2_ParamLimits

0xcb50,	// (0x000942c2) popup_call2_audio_first_window_g2

0xca6e,	// (0x000941e0) popup_call2_audio_first_window_g3_ParamLimits

0xca6e,	// (0x000941e0) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x00096bba) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x00096bba) popup_call2_audio_first_window_g

0xcc2e,	// (0x000943a0) popup_call2_audio_first_window_t1_ParamLimits

0xcc2e,	// (0x000943a0) popup_call2_audio_first_window_t1

0xcd31,	// (0x000944a3) popup_call2_audio_first_window_t4_ParamLimits

0xcd31,	// (0x000944a3) popup_call2_audio_first_window_t4

0xce14,	// (0x00094586) popup_call2_audio_first_window_t5_ParamLimits

0xce14,	// (0x00094586) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x00096bc5) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x00096bc5) popup_call2_audio_first_window_t

0xb46b,	// (0x00092bdd) bg_popup_call2_act_pane_g1

0xd423,	// (0x00094b95) popup_cale_lunar_info_window_t1

0xd431,	// (0x00094ba3) popup_cale_lunar_info_window_t2

0xd43f,	// (0x00094bb1) popup_cale_lunar_info_window_t3

0xb218,	// (0x0009298a) bg_popup_call2_bubble_pane

0xcf15,	// (0x00094687) bg_popup_call2_in_pane_cp01_ParamLimits

0xcf15,	// (0x00094687) bg_popup_call2_in_pane_cp01

0xaee6,	// (0x00092658) call_type_pane_cp02

0x4410,	// (0x0008bb82) popup_call2_audio_out_window_g1_ParamLimits

0x4410,	// (0x0008bb82) popup_call2_audio_out_window_g1

0xcf5d,	// (0x000946cf) popup_call2_audio_out_window_g2_ParamLimits

0xcf5d,	// (0x000946cf) popup_call2_audio_out_window_g2

0x443c,	// (0x0008bbae) popup_call2_audio_out_window_g3_ParamLimits

0x443c,	// (0x0008bbae) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x00096bce) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x00096bce) popup_call2_audio_out_window_g

0xcf94,	// (0x00094706) popup_call2_audio_out_window_t1_ParamLimits

0xcf94,	// (0x00094706) popup_call2_audio_out_window_t1

0xcff3,	// (0x00094765) popup_call2_audio_out_window_t2_ParamLimits

0xcff3,	// (0x00094765) popup_call2_audio_out_window_t2

0xd047,	// (0x000947b9) popup_call2_audio_out_window_t3_ParamLimits

0xd047,	// (0x000947b9) popup_call2_audio_out_window_t3

0xd05d,	// (0x000947cf) popup_call2_audio_out_window_t4_ParamLimits

0xd05d,	// (0x000947cf) popup_call2_audio_out_window_t4

0xd073,	// (0x000947e5) popup_call2_audio_out_window_t5_ParamLimits

0xd073,	// (0x000947e5) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x00096bd7) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x00096bd7) popup_call2_audio_out_window_t

0xd0d7,	// (0x00094849) bg_popup_call2_in_pane_ParamLimits

0xd0d7,	// (0x00094849) bg_popup_call2_in_pane

0xd133,	// (0x000948a5) popup_call2_audio_in_window_g1_ParamLimits

0xd133,	// (0x000948a5) popup_call2_audio_in_window_g1

0xd16b,	// (0x000948dd) popup_call2_audio_in_window_g2_ParamLimits

0xd16b,	// (0x000948dd) popup_call2_audio_in_window_g2

0xd1a3,	// (0x00094915) popup_call2_audio_in_window_g3_ParamLimits

0xd1a3,	// (0x00094915) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x00096be4) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x00096be4) popup_call2_audio_in_window_g

0xd1fb,	// (0x0009496d) popup_call2_audio_in_window_t1_ParamLimits

0xd1fb,	// (0x0009496d) popup_call2_audio_in_window_t1

0xd27b,	// (0x000949ed) popup_call2_audio_in_window_t2_ParamLimits

0xd27b,	// (0x000949ed) popup_call2_audio_in_window_t2

0xd2fb,	// (0x00094a6d) popup_call2_audio_in_window_t3_ParamLimits

0xd2fb,	// (0x00094a6d) popup_call2_audio_in_window_t3

0xd315,	// (0x00094a87) popup_call2_audio_in_window_t4_ParamLimits

0xd315,	// (0x00094a87) popup_call2_audio_in_window_t4

0xd327,	// (0x00094a99) popup_call2_audio_in_window_t5_ParamLimits

0xd327,	// (0x00094a99) popup_call2_audio_in_window_t5

0xd339,	// (0x00094aab) popup_call2_audio_in_window_t6_ParamLimits

0xd339,	// (0x00094aab) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x00096bed) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x00096bed) popup_call2_audio_in_window_t

0xb46b,	// (0x00092bdd) bg_popup_call2_in_pane_g1

0xd44d,	// (0x00094bbf) popup_cale_lunar_info_window_t4

0x0003,

0xf4e3,	// (0x00096c55) popup_cale_lunar_info_window_t

0xb473,	// (0x00092be5) bg_popup_call2_rect_pane_ParamLimits

0xb473,	// (0x00092be5) bg_popup_call2_rect_pane

0xb218,	// (0x0009298a) call2_cli_visual_graphic_pane

0xb218,	// (0x0009298a) call2_cli_visual_text_pane

0x4847,	// (0x0008bfb9) smil_status_volume_pane_g3

0x0002,

0xb48b,	// (0x00092bfd) call2_cli_visual_graphic_pane_g1

0xb48b,	// (0x00092bfd) call2_cli_visual_graphic_pane_g2

0xb48b,	// (0x00092bfd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x00096bfa) call2_cli_visual_graphic_pane_g

0xb68b,	// (0x00092dfd) bg_popup_call2_rect_pane_g1

0xb683,	// (0x00092df5) bg_popup_call2_rect_pane_g2

0xb67b,	// (0x00092ded) bg_popup_call2_rect_pane_g3

0xb69b,	// (0x00092e0d) bg_popup_call2_rect_pane_g4

0xb693,	// (0x00092e05) bg_popup_call2_rect_pane_g5

0xb6a3,	// (0x00092e15) bg_popup_call2_rect_pane_g6

0xb6ab,	// (0x00092e1d) bg_popup_call2_rect_pane_g7

0xb6bb,	// (0x00092e2d) bg_popup_call2_rect_pane_g8

0xb6b3,	// (0x00092e25) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x0009698a) bg_popup_call2_rect_pane_g

0xd34b,	// (0x00094abd) bg_popup_call2_bubble_pane_g1

0xd353,	// (0x00094ac5) bg_popup_call2_bubble_pane_g2

0xd35b,	// (0x00094acd) bg_popup_call2_bubble_pane_g3

0xd363,	// (0x00094ad5) bg_popup_call2_bubble_pane_g4

0xd36b,	// (0x00094add) bg_popup_call2_bubble_pane_g5

0xd373,	// (0x00094ae5) bg_popup_call2_bubble_pane_g6

0xd37b,	// (0x00094aed) bg_popup_call2_bubble_pane_g7

0xd383,	// (0x00094af5) bg_popup_call2_bubble_pane_g8

0xd38b,	// (0x00094afd) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x00096c01) bg_popup_call2_bubble_pane_g

0x1fed,	// (0x0008975f) aid_cale_week_size_cell_pane

0xb473,	// (0x00092be5) aid_cams_cif_uncrop_pane_ParamLimits

0xb473,	// (0x00092be5) aid_cams_cif_uncrop_pane

0xb4e0,	// (0x00092c52) aid_cams_size_cell_ParamLimits

0xb4e0,	// (0x00092c52) aid_cams_size_cell

0xb4e0,	// (0x00092c52) grid_cams_pane_ParamLimits

0xb4e0,	// (0x00092c52) linegrid_cams_pane_ParamLimits

0x26b1,	// (0x00089e23) call_video_pane_t1

0x26d2,	// (0x00089e44) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0009692c) call_video_pane_t

0x2c20,	// (0x0008a392) aid_cale_month_size_cell_pane_ParamLimits

0x2c20,	// (0x0008a392) aid_cale_month_size_cell_pane

0xf527,	// (0x00096c99) smil_status_volume_pane_g

0x4854,	// (0x0008bfc6) volume_smil_pane_ParamLimits

0x1973,	// (0x000890e5) aid_popup2_width_pane

0x1f07,	// (0x00089679) cell_qdial_pane_g4_ParamLimits

0x1f07,	// (0x00089679) cell_qdial_pane_g4

0x3b4b,	// (0x0008b2bd) aid_blid_cardinal_pane_ParamLimits

0x3b5b,	// (0x0008b2cd) aid_blid_destination_pane_ParamLimits

0x3b5b,	// (0x0008b2cd) aid_blid_destination_pane

0xb473,	// (0x00092be5) bg_popup_call_poc_act_pane_ParamLimits

0xb473,	// (0x00092be5) bg_popup_call_poc_act_pane

0xb473,	// (0x00092be5) bg_popup_call_poc_inact_pane_ParamLimits

0xb473,	// (0x00092be5) bg_popup_call_poc_inact_pane

0xd393,	// (0x00094b05) bg_popup_call_poc_act_pane_g1

0xd39b,	// (0x00094b0d) bg_popup_call_poc_act_pane_g2

0xd3a3,	// (0x00094b15) bg_popup_call_poc_act_pane_g3

0xd363,	// (0x00094ad5) bg_popup_call_poc_act_pane_g4

0xd36b,	// (0x00094add) bg_popup_call_poc_act_pane_g5

0xd3ab,	// (0x00094b1d) bg_popup_call_poc_act_pane_g6

0xd37b,	// (0x00094aed) bg_popup_call_poc_act_pane_g7

0xd3b3,	// (0x00094b25) bg_popup_call_poc_act_pane_g8

0xb218,	// (0x0009298a) main_usb_pane

0x46b1,	// (0x0008be23) popup_cale_lunar_info_window

0x29ef,	// (0x0008a161) im_reading_pane_t1_ParamLimits

0xb853,	// (0x00092fc5) list_im_pane_ParamLimits

0xb864,	// (0x00092fd6) scroll_pane_cp07_ParamLimits

0xb218,	// (0x0009298a) grid_highlight_pane_cp012

0xb473,	// (0x00092be5) mup_scale_pane_ParamLimits

0xb4fc,	// (0x00092c6e) main_usb_pane_g1_ParamLimits

0xb4fc,	// (0x00092c6e) main_usb_pane_g1

0xb4fc,	// (0x00092c6e) main_usb_pane_g2_ParamLimits

0xb4fc,	// (0x00092c6e) main_usb_pane_g2

0x0001,

0xf4cc,	// (0x00096c3e) main_usb_pane_g_ParamLimits

0xf4cc,	// (0x00096c3e) main_usb_pane_g

0xb54a,	// (0x00092cbc) main_usb_pane_t1_ParamLimits

0xb54a,	// (0x00092cbc) main_usb_pane_t1

0xb54a,	// (0x00092cbc) main_usb_pane_t2_ParamLimits

0xb54a,	// (0x00092cbc) main_usb_pane_t2

0xb54a,	// (0x00092cbc) main_usb_pane_t3_ParamLimits

0xb54a,	// (0x00092cbc) main_usb_pane_t3

0xb54a,	// (0x00092cbc) main_usb_pane_t4_ParamLimits

0xb54a,	// (0x00092cbc) main_usb_pane_t4

0xb54a,	// (0x00092cbc) main_usb_pane_t5_ParamLimits

0xb54a,	// (0x00092cbc) main_usb_pane_t5

0xb54a,	// (0x00092cbc) main_usb_pane_t6_ParamLimits

0xb54a,	// (0x00092cbc) main_usb_pane_t6

0x0005,

0xf4d1,	// (0x00096c43) main_usb_pane_t_ParamLimits

0x3af1,	// (0x0008b263) aid_text_placing

0x3afd,	// (0x0008b26f) main_location2_pane_t1_ParamLimits

0x3b11,	// (0x0008b283) main_location2_pane_t2_ParamLimits

0x3b25,	// (0x0008b297) main_location2_pane_t3_ParamLimits

0x3b39,	// (0x0008b2ab) main_location2_pane_t4_ParamLimits

0x3b39,	// (0x0008b2ab) main_location2_pane_t4

0xf2fb,	// (0x00096a6d) main_location2_pane_t_ParamLimits

0xb4a1,	// (0x00092c13) find_pinb_pane_g2_ParamLimits

0xb4a1,	// (0x00092c13) find_pinb_pane_g2

0x0001,

0xf072,	// (0x000967e4) find_pinb_pane_g_ParamLimits

0xf072,	// (0x000967e4) find_pinb_pane_g

0xb4ad,	// (0x00092c1f) find_pinb_pane_t1_ParamLimits

0xb4bf,	// (0x00092c31) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x000967e9) find_pinb_pane_t_ParamLimits

0xb218,	// (0x0009298a) main_call3_pane

0x31e3,	// (0x0008a955) cale_month_day_heading_pane_t1_ParamLimits

0x3269,	// (0x0008a9db) cale_month_day_heading_pane_t2_ParamLimits

0x32e2,	// (0x0008aa54) cale_month_day_heading_pane_t3_ParamLimits

0x335b,	// (0x0008aacd) cale_month_day_heading_pane_t4_ParamLimits

0x33d4,	// (0x0008ab46) cale_month_day_heading_pane_t5_ParamLimits

0x344d,	// (0x0008abbf) cale_month_day_heading_pane_t6_ParamLimits

0x34c6,	// (0x0008ac38) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00096964) cale_month_day_heading_pane_t_ParamLimits

0xbab7,	// (0x00093229) smil_status_volume_pane

0x402f,	// (0x0008b7a1) postcard_address_pane_ParamLimits

0x402f,	// (0x0008b7a1) postcard_address_pane

0x403b,	// (0x0008b7ad) postcard_message_pane_ParamLimits

0x403b,	// (0x0008b7ad) postcard_message_pane

0x4468,	// (0x0008bbda) call2_cli_visual_pane_t1_ParamLimits

0x4468,	// (0x0008bbda) call2_cli_visual_pane_t1

0xd570,	// (0x00094ce2) postcard_message_pane_t1_ParamLimits

0xd570,	// (0x00094ce2) postcard_message_pane_t1

0xd558,	// (0x00094cca) postcard_address_pane_t1_ParamLimits

0xd558,	// (0x00094cca) postcard_address_pane_t1

0x4985,	// (0x0008c0f7) popup_call3_audio_in_window_ParamLimits

0x4985,	// (0x0008c0f7) popup_call3_audio_in_window

0x4869,	// (0x0008bfdb) bg_popup_call3_in_pane_ParamLimits

0x4869,	// (0x0008bfdb) bg_popup_call3_in_pane

0x48cb,	// (0x0008c03d) popup_call3_audio_in_window_g1_ParamLimits

0x48cb,	// (0x0008c03d) popup_call3_audio_in_window_g1

0x48e3,	// (0x0008c055) popup_call3_audio_in_window_g2_ParamLimits

0x48e3,	// (0x0008c055) popup_call3_audio_in_window_g2

0x48fb,	// (0x0008c06d) popup_call3_audio_in_window_g3_ParamLimits

0x48fb,	// (0x0008c06d) popup_call3_audio_in_window_g3

0x0003,

0xf52e,	// (0x00096ca0) popup_call3_audio_in_window_g_ParamLimits

0xf52e,	// (0x00096ca0) popup_call3_audio_in_window_g

0x4923,	// (0x0008c095) popup_call3_audio_in_window_t1_ParamLimits

0x4923,	// (0x0008c095) popup_call3_audio_in_window_t1

0x494b,	// (0x0008c0bd) popup_call3_audio_in_window_t2_ParamLimits

0x494b,	// (0x0008c0bd) popup_call3_audio_in_window_t2

0x4973,	// (0x0008c0e5) popup_call3_audio_in_window_t3_ParamLimits

0x4973,	// (0x0008c0e5) popup_call3_audio_in_window_t3

0x0002,

0xf537,	// (0x00096ca9) popup_call3_audio_in_window_t_ParamLimits

0xf537,	// (0x00096ca9) popup_call3_audio_in_window_t

0xb792,	// (0x00092f04) bg_popup_call3_rect_pane

0xb68b,	// (0x00092dfd) bg_popup_call3_rect_pane_g1

0xb683,	// (0x00092df5) bg_popup_call3_rect_pane_g2

0xb67b,	// (0x00092ded) bg_popup_call3_rect_pane_g3

0xb69b,	// (0x00092e0d) bg_popup_call3_rect_pane_g4

0xb693,	// (0x00092e05) bg_popup_call3_rect_pane_g5

0xb6a3,	// (0x00092e15) bg_popup_call3_rect_pane_g6

0xb6ab,	// (0x00092e1d) bg_popup_call3_rect_pane_g7

0xaded,	// (0x0009255f) mup_visualizer_osc_pane

0xaded,	// (0x0009255f) mup_visualizer_spec_pane

0x4889,	// (0x0008bffb) call3_video_qcif_pane_ParamLimits

0x4889,	// (0x0008bffb) call3_video_qcif_pane

0x489b,	// (0x0008c00d) call3_video_qcif_uncrop_pane_ParamLimits

0x489b,	// (0x0008c00d) call3_video_qcif_uncrop_pane

0x48a9,	// (0x0008c01b) call3_video_subqcif_pane_ParamLimits

0x48a9,	// (0x0008c01b) call3_video_subqcif_pane

0x48bb,	// (0x0008c02d) call3_video_subqcif_uncrop_pane_ParamLimits

0x48bb,	// (0x0008c02d) call3_video_subqcif_uncrop_pane

0x4913,	// (0x0008c085) popup_call3_audio_in_window_g4_ParamLimits

0x4913,	// (0x0008c085) popup_call3_audio_in_window_g4

0xaded,	// (0x0009255f) mup_spec_half_pane

0xaded,	// (0x0009255f) mup_spec_half_pane_cp

0xaded,	// (0x0009255f) mup_osc_middle_pane

0xb52c,	// (0x00092c9e) mup_visualizer_osc_pane_g1

0xd50b,	// (0x00094c7d) mup_spec_bar_pane_ParamLimits

0xd50b,	// (0x00094c7d) mup_spec_bar_pane

0xb52c,	// (0x00092c9e) mup_spec_bar_pane_g1

0xb52c,	// (0x00092c9e) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x000967fe) mup_spec_bar_pane_g

0x1fed,	// (0x0008975f) aid_cale_week_size_cell_pane_ParamLimits

0x2002,	// (0x00089774) bg_cale_heading_pane_ParamLimits

0xb6f4,	// (0x00092e66) bg_cale_pane_cp01_ParamLimits

0x2024,	// (0x00089796) cale_week_corner_pane_ParamLimits

0x203e,	// (0x000897b0) cale_week_day_heading_pane_ParamLimits

0x2060,	// (0x000897d2) cale_week_scroll_pane_g1_ParamLimits

0x207d,	// (0x000897ef) cale_week_scroll_pane_g2_ParamLimits

0x2090,	// (0x00089802) cale_week_scroll_pane_g3_ParamLimits

0x20a3,	// (0x00089815) cale_week_scroll_pane_g4_ParamLimits

0x20b6,	// (0x00089828) cale_week_scroll_pane_g5_ParamLimits

0x20c9,	// (0x0008983b) cale_week_scroll_pane_g6_ParamLimits

0x20dc,	// (0x0008984e) cale_week_scroll_pane_g7_ParamLimits

0x20f1,	// (0x00089863) cale_week_scroll_pane_g8_ParamLimits

0x2106,	// (0x00089878) cale_week_scroll_pane_g9_ParamLimits

0x2119,	// (0x0008988b) cale_week_scroll_pane_g10_ParamLimits

0x212c,	// (0x0008989e) cale_week_scroll_pane_g11_ParamLimits

0x213f,	// (0x000898b1) cale_week_scroll_pane_g12_ParamLimits

0x2156,	// (0x000898c8) cale_week_scroll_pane_g13_ParamLimits

0x2171,	// (0x000898e3) cale_week_scroll_pane_g14_ParamLimits

0x218c,	// (0x000898fe) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00096875) cale_week_scroll_pane_g_ParamLimits

0x21bc,	// (0x0008992e) cale_week_time_pane_ParamLimits

0x21d1,	// (0x00089943) grid_cale_week_pane_ParamLimits

0xb711,	// (0x00092e83) listscroll_cale_week_pane_t1

0xb723,	// (0x00092e95) scroll_pane_cp08_ParamLimits

0x2c94,	// (0x0008a406) cale_month_corner_pane_ParamLimits

0xba8d,	// (0x000931ff) cale_month_pane_t1

0x3162,	// (0x0008a8d4) cale_month_week_pane_ParamLimits

0xca6e,	// (0x000941e0) popup_call_status_window_g1_ParamLimits

0x391e,	// (0x0008b090) popup_call_status_window_g2_ParamLimits

0x392a,	// (0x0008b09c) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x000969f4) popup_call_status_window_g_ParamLimits

0xbdfb,	// (0x0009356d) aid_call2_pane

0x3ee7,	// (0x0008b659) msg_header_pane_g1

0x402f,	// (0x0008b7a1) postcard_address2_pane_ParamLimits

0x402f,	// (0x0008b7a1) postcard_address2_pane

0x403b,	// (0x0008b7ad) postcard_message2_pane_ParamLimits

0x403b,	// (0x0008b7ad) postcard_message2_pane

0x4819,	// (0x0008bf8b) message2_row_pane_ParamLimits

0x4819,	// (0x0008bf8b) message2_row_pane

0x4834,	// (0x0008bfa6) address2_row_pane_ParamLimits

0x4834,	// (0x0008bfa6) address2_row_pane

0xd4d8,	// (0x00094c4a) postcard_message2_row_pane_g1

0xd4e0,	// (0x00094c52) postcard_message2_row_pane_t1

0xd4d8,	// (0x00094c4a) address2_row_pane_g1

0xd4e0,	// (0x00094c52) address2_row_pane_t1

0x2456,	// (0x00089bc8) aid_size_cell_vorec

0xb218,	// (0x0009298a) main_rss_pane

0xd4ee,	// (0x00094c60) rss_list_single_pane_ParamLimits

0xd4ee,	// (0x00094c60) rss_list_single_pane

0xd4fc,	// (0x00094c6e) rss_list_single_pane_t1

0xd4fc,	// (0x00094c6e) rss_list_single_pane_t2

0x0001,

0xf522,	// (0x00096c94) rss_list_single_pane_t

0xb218,	// (0x0009298a) main_camera2_pane

0xb218,	// (0x0009298a) main_video2_pane

0x1c1a,	// (0x0008938c) cams_zoom_pane_cp2_ParamLimits

0x1c1a,	// (0x0008938c) cams_zoom_pane_cp2

0x1c1a,	// (0x0008938c) image2_vga_pane_ParamLimits

0x1c1a,	// (0x0008938c) image2_vga_pane

0xbe3a,	// (0x000935ac) main_camera2_pane_g1_ParamLimits

0xbe3a,	// (0x000935ac) main_camera2_pane_g1

0xbe3a,	// (0x000935ac) main_camera2_pane_g2_ParamLimits

0xbe3a,	// (0x000935ac) main_camera2_pane_g2

0xbe3a,	// (0x000935ac) main_camera2_pane_g3_ParamLimits

0xbe3a,	// (0x000935ac) main_camera2_pane_g3

0xbe3a,	// (0x000935ac) main_camera2_pane_g4_ParamLimits

0xbe3a,	// (0x000935ac) main_camera2_pane_g4

0xbe3a,	// (0x000935ac) main_camera2_pane_g5_ParamLimits

0xbe3a,	// (0x000935ac) main_camera2_pane_g5

0xbe3a,	// (0x000935ac) main_camera2_pane_g6_ParamLimits

0xbe3a,	// (0x000935ac) main_camera2_pane_g6

0xbe3a,	// (0x000935ac) main_camera2_pane_g7_ParamLimits

0xbe3a,	// (0x000935ac) main_camera2_pane_g7

0xbe3a,	// (0x000935ac) main_camera2_pane_g8_ParamLimits

0xbe3a,	// (0x000935ac) main_camera2_pane_g8

0x0008,

0xf53e,	// (0x00096cb0) main_camera2_pane_g_ParamLimits

0xf53e,	// (0x00096cb0) main_camera2_pane_g

0x49a2,	// (0x0008c114) main_camera2_pane_t1_ParamLimits

0x49a2,	// (0x0008c114) main_camera2_pane_t1

0x49a2,	// (0x0008c114) main_camera2_pane_t2_ParamLimits

0x49a2,	// (0x0008c114) main_camera2_pane_t2

0x49a2,	// (0x0008c114) main_camera2_pane_t3_ParamLimits

0x49a2,	// (0x0008c114) main_camera2_pane_t3

0x49a2,	// (0x0008c114) main_camera2_pane_t4_ParamLimits

0x49a2,	// (0x0008c114) main_camera2_pane_t4

0x0006,

0xf551,	// (0x00096cc3) main_camera2_pane_t_ParamLimits

0xf551,	// (0x00096cc3) main_camera2_pane_t

0x49ca,	// (0x0008c13c) cams_zoom_pane_cp4_ParamLimits

0x49ca,	// (0x0008c13c) cams_zoom_pane_cp4

0x465c,	// (0x0008bdce) image2_cif_pane_ParamLimits

0x465c,	// (0x0008bdce) image2_cif_pane

0x1c1a,	// (0x0008938c) image2_subqcif_pane_ParamLimits

0x1c1a,	// (0x0008938c) image2_subqcif_pane

0x49d8,	// (0x0008c14a) main_video2_pane_g1_ParamLimits

0x49d8,	// (0x0008c14a) main_video2_pane_g1

0x49d8,	// (0x0008c14a) main_video2_pane_g2_ParamLimits

0x49d8,	// (0x0008c14a) main_video2_pane_g2

0x49d8,	// (0x0008c14a) main_video2_pane_g3_ParamLimits

0x49d8,	// (0x0008c14a) main_video2_pane_g3

0x49d8,	// (0x0008c14a) main_video2_pane_g4_ParamLimits

0x49d8,	// (0x0008c14a) main_video2_pane_g4

0x49d8,	// (0x0008c14a) main_video2_pane_g5_ParamLimits

0x49d8,	// (0x0008c14a) main_video2_pane_g5

0x49d8,	// (0x0008c14a) main_video2_pane_g6_ParamLimits

0x49d8,	// (0x0008c14a) main_video2_pane_g6

0x0005,

0xf560,	// (0x00096cd2) main_video2_pane_g_ParamLimits

0xf560,	// (0x00096cd2) main_video2_pane_g

0x49e6,	// (0x0008c158) main_video2_pane_t1_ParamLimits

0x49e6,	// (0x0008c158) main_video2_pane_t1

0x49e6,	// (0x0008c158) main_video2_pane_t2_ParamLimits

0x49e6,	// (0x0008c158) main_video2_pane_t2

0x49e6,	// (0x0008c158) main_video2_pane_t3_ParamLimits

0x49e6,	// (0x0008c158) main_video2_pane_t3

0x0002,

0xf56d,	// (0x00096cdf) main_video2_pane_t_ParamLimits

0xf56d,	// (0x00096cdf) main_video2_pane_t

0x4527,	// (0x0008bc99) call_muted_g2

0x0001,

0xf514,	// (0x00096c86) call_muted_g

0xb218,	// (0x0009298a) main_mup2_pane

0xb50a,	// (0x00092c7c) main_mup2_pane_g1_ParamLimits

0xb50a,	// (0x00092c7c) main_mup2_pane_g1

0xb50a,	// (0x00092c7c) main_mup2_pane_g2_ParamLimits

0xb50a,	// (0x00092c7c) main_mup2_pane_g2

0x9fc9,	// (0x0009173b) main_mup_pane_g13_cp1

0x1c34,	// (0x000893a6) mup_volume_pane_cp1

0xb50a,	// (0x00092c7c) main_mup2_pane_g4_ParamLimits

0xb50a,	// (0x00092c7c) main_mup2_pane_g4

0xb50a,	// (0x00092c7c) main_mup2_pane_g5_ParamLimits

0xb50a,	// (0x00092c7c) main_mup2_pane_g5

0xb50a,	// (0x00092c7c) main_mup2_pane_g6_ParamLimits

0xb50a,	// (0x00092c7c) main_mup2_pane_g6

0xb50a,	// (0x00092c7c) main_mup2_pane_g7_ParamLimits

0xb50a,	// (0x00092c7c) main_mup2_pane_g7

0x0006,

0xf574,	// (0x00096ce6) main_mup2_pane_g_ParamLimits

0xf574,	// (0x00096ce6) main_mup2_pane_g

0xb518,	// (0x00092c8a) main_mup2_pane_t1_ParamLimits

0xb518,	// (0x00092c8a) main_mup2_pane_t1

0xb518,	// (0x00092c8a) main_mup2_pane_t2_ParamLimits

0xb518,	// (0x00092c8a) main_mup2_pane_t2

0xb518,	// (0x00092c8a) main_mup2_pane_t3_ParamLimits

0xb518,	// (0x00092c8a) main_mup2_pane_t3

0xb518,	// (0x00092c8a) main_mup2_pane_t4_ParamLimits

0xb518,	// (0x00092c8a) main_mup2_pane_t4

0xb518,	// (0x00092c8a) main_mup2_pane_t5_ParamLimits

0xb518,	// (0x00092c8a) main_mup2_pane_t5

0xb518,	// (0x00092c8a) main_mup2_pane_t6_ParamLimits

0xb518,	// (0x00092c8a) main_mup2_pane_t6

0x0005,

0xf583,	// (0x00096cf5) main_mup2_pane_t_ParamLimits

0xf583,	// (0x00096cf5) main_mup2_pane_t

0xd4af,	// (0x00094c21) mup2_visualizer_pane_ParamLimits

0xd4af,	// (0x00094c21) mup2_visualizer_pane

0xd4af,	// (0x00094c21) mup_progress_pane_cp_ParamLimits

0xd4af,	// (0x00094c21) mup_progress_pane_cp

0x4aad,	// (0x0008c21f) mup_volume_pane_cp_ParamLimits

0x4aad,	// (0x0008c21f) mup_volume_pane_cp

0xb4ee,	// (0x00092c60) mup2_visualizer_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) mup2_visualizer_pane_g1

0xb4fc,	// (0x00092c6e) mup2_visualizer_pane_g2_ParamLimits

0xb4fc,	// (0x00092c6e) mup2_visualizer_pane_g2

0xb4fc,	// (0x00092c6e) mup2_visualizer_pane_g3_ParamLimits

0xb4fc,	// (0x00092c6e) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x000967ee) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x000967ee) mup2_visualizer_pane_g

0xaded,	// (0x0009255f) aid_size_cell_fmradio

0x463d,	// (0x0008bdaf) aid_height_parent_landcape

0xb8e2,	// (0x00093054) wml_content_pane_cp

0xb8ea,	// (0x0009305c) wml_tabs_pane

0xb8f3,	// (0x00093065) popup_wml_miniature_window

0xb8fb,	// (0x0009306d) scroll_pane_cp021

0xb90f,	// (0x00093081) wml_content_pane_comp8

0xb218,	// (0x0009298a) bg_popup_sub_pane_cp05

0xd5c4,	// (0x00094d36) popup_wml_miniature_window_g1

0xd5cc,	// (0x00094d3e) wml_miniature_view_pane

0x49fa,	// (0x0008c16c) aid_size_wml_view

0x4a02,	// (0x0008c174) wml_miniature_view_pane_g1

0x4a0b,	// (0x0008c17d) wml_miniature_view_pane_g2

0x4a14,	// (0x0008c186) wml_miniature_view_pane_g3

0x4a1c,	// (0x0008c18e) wml_miniature_view_pane_g4

0x4a24,	// (0x0008c196) wml_miniature_view_pane_g5

0x4a2c,	// (0x0008c19e) wml_miniature_view_pane_g6

0x4a34,	// (0x0008c1a6) wml_miniature_view_pane_g7

0x4a3c,	// (0x0008c1ae) wml_miniature_view_pane_g8

0x0007,

0xf590,	// (0x00096d02) wml_miniature_view_pane_g

0xd5d4,	// (0x00094d46) background_graphic_ParamLimits

0xd5d4,	// (0x00094d46) background_graphic

0xd5e0,	// (0x00094d52) wml_tabs_2_pane

0xd5e9,	// (0x00094d5b) wml_tabs_3_pane_ParamLimits

0xd5e9,	// (0x00094d5b) wml_tabs_3_pane

0xd5fb,	// (0x00094d6d) wml_tabs_4_pane_ParamLimits

0xd5fb,	// (0x00094d6d) wml_tabs_4_pane

0xd611,	// (0x00094d83) wml_tabs_5_pane_ParamLimits

0xd611,	// (0x00094d83) wml_tabs_5_pane

0xd62b,	// (0x00094d9d) wml_tabs_pane_g2_ParamLimits

0xd62b,	// (0x00094d9d) wml_tabs_pane_g2

0xd640,	// (0x00094db2) wml_tabs_pane_g3_ParamLimits

0xd640,	// (0x00094db2) wml_tabs_pane_g3

0xd655,	// (0x00094dc7) wml_tabs_2_active_pane_ParamLimits

0xd655,	// (0x00094dc7) wml_tabs_2_active_pane

0xd655,	// (0x00094dc7) wml_tabs_2_passive_pane_ParamLimits

0xd655,	// (0x00094dc7) wml_tabs_2_passive_pane

0x4a44,	// (0x0008c1b6) wml_tabs_3_active_pane_cp_ParamLimits

0x4a44,	// (0x0008c1b6) wml_tabs_3_active_pane_cp

0x4a55,	// (0x0008c1c7) wml_tabs_3_passive_pane_ParamLimits

0x4a55,	// (0x0008c1c7) wml_tabs_3_passive_pane

0x4a66,	// (0x0008c1d8) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a66,	// (0x0008c1d8) wml_tabs_3_passive_pane_cp

0x4a77,	// (0x0008c1e9) tabs_4_active_pane

0x4a7f,	// (0x0008c1f1) tabs_4_passive_pane

0x4a87,	// (0x0008c1f9) tabs_4_passive_pane_cp

0x4a8f,	// (0x0008c201) tabs_4_passive_pane_cp2

0x449b,	// (0x0008bc0d) aid_height_text

0xd4af,	// (0x00094c21) mup_volume_cont_pane_ParamLimits

0xd4af,	// (0x00094c21) mup_volume_cont_pane

0xaded,	// (0x0009255f) aid_size_cell_pinb

0xaded,	// (0x0009255f) aid_size_list_pinb

0xd4af,	// (0x00094c21) mup2_volume_cont_pane_ParamLimits

0xd4af,	// (0x00094c21) mup2_volume_cont_pane

0x4a97,	// (0x0008c209) mup2_volume_cont_pane_g1_ParamLimits

0x4a97,	// (0x0008c209) mup2_volume_cont_pane_g1

0x197f,	// (0x000890f1) aid_size_cell_touch_ParamLimits

0x197f,	// (0x000890f1) aid_size_cell_touch

0x1c3e,	// (0x000893b0) touch_pane_ParamLimits

0x1c3e,	// (0x000893b0) touch_pane

0x1c34,	// (0x000893a6) main_rss2_pane

0xd66c,	// (0x00094dde) listscroll_rss2_pane

0xd675,	// (0x00094de7) rss2_navigation_pane

0xd67d,	// (0x00094def) list_rss2_pane

0xbf1f,	// (0x00093691) scroll_pane_cp22

0xd685,	// (0x00094df7) rss2_navigation_pane_g1

0xd68e,	// (0x00094e00) rss2_navigation_pane_g2

0xd696,	// (0x00094e08) rss2_navigation_pane_g3

0x0002,

0xf5a1,	// (0x00096d13) rss2_navigation_pane_g

0xd69e,	// (0x00094e10) rss2_navigation_pane_t1

0x4ac3,	// (0x0008c235) rss2_list_single_pane_ParamLimits

0x4ac3,	// (0x0008c235) rss2_list_single_pane

0xd6ac,	// (0x00094e1e) rss2_list_single_pane_t2

0xd6ba,	// (0x00094e2c) rss2_list_single_pane_t3_ParamLimits

0xd6ba,	// (0x00094e2c) rss2_list_single_pane_t3

0xd6d7,	// (0x00094e49) rss2_list_single_pane_t4

0x3768,	// (0x0008aeda) smil_status_pane_g1

0x465c,	// (0x0008bdce) main_image2_pane_ParamLimits

0x465c,	// (0x0008bdce) main_image2_pane

0xbe3a,	// (0x000935ac) main_camera2_pane_g9_ParamLimits

0xbe3a,	// (0x000935ac) main_camera2_pane_g9

0x49a2,	// (0x0008c114) main_camera2_pane_t5_ParamLimits

0x49a2,	// (0x0008c114) main_camera2_pane_t5

0x49b6,	// (0x0008c128) main_camera2_pane_t6_ParamLimits

0x49b6,	// (0x0008c128) main_camera2_pane_t6

0x4af7,	// (0x0008c269) main_image2_pane_g1_ParamLimits

0x4af7,	// (0x0008c269) main_image2_pane_g1

0x41cd,	// (0x0008b93f) smil2_video_pane_ParamLimits

0x41cd,	// (0x0008b93f) smil2_video_pane

0x19b3,	// (0x00089125) aid_zoom_text_primary_cp

0x1bcf,	// (0x00089341) popup_preview_fixed_window

0xb84b,	// (0x00092fbd) im_reading_pane_g1

0x4994,	// (0x0008c106) cams2_bc_adjust_pane_cp_ParamLimits

0x4994,	// (0x0008c106) cams2_bc_adjust_pane_cp

0x1c1a,	// (0x0008938c) cams2_bc_adjust_pane_ParamLimits

0x1c1a,	// (0x0008938c) cams2_bc_adjust_pane

0x9fc9,	// (0x0009173b) cams2_bc_adjust_pane_g1

0x1c34,	// (0x000893a6) cams2_slider_pane

0x9fc9,	// (0x0009173b) cams2_slider_pane_g1

0x9fc9,	// (0x0009173b) cams2_slider_pane_g2

0x0006,

0xf5a8,	// (0x00096d1a) cams2_slider_pane_g

0x1d0f,	// (0x00089481) calc_display_pane_ParamLimits

0x1d2d,	// (0x0008949f) calc_paper_pane_ParamLimits

0x1d49,	// (0x000894bb) grid_calc_pane_ParamLimits

0x3988,	// (0x0008b0fa) popup_clock_digital_window_t1_ParamLimits

0xc47b,	// (0x00093bed) main_image_pane_t1

0x1cf5,	// (0x00089467) aid_size_cell_calc_ParamLimits

0x1cf5,	// (0x00089467) aid_size_cell_calc

0x468d,	// (0x0008bdff) popup_blid_sat_info2_window_ParamLimits

0x468d,	// (0x0008bdff) popup_blid_sat_info2_window

0xd6e5,	// (0x00094e57) aid_size_cell_blid

0xd4af,	// (0x00094c21) bg_popup_window_pane_cp07

0xd702,	// (0x00094e74) grid_popup_blid_pane

0xd70c,	// (0x00094e7e) heading_pane_cp05_ParamLimits

0xd70c,	// (0x00094e7e) heading_pane_cp05

0xd7d6,	// (0x00094f48) cell_popup_blid_pane_ParamLimits

0xd7d6,	// (0x00094f48) cell_popup_blid_pane

0xd7fa,	// (0x00094f6c) cell_popup_blid_pane_g1

0xd802,	// (0x00094f74) cell_popup_blid_pane_t1

0xd4af,	// (0x00094c21) mup2_indicator_pane_ParamLimits

0xd4af,	// (0x00094c21) mup2_indicator_pane

0xaded,	// (0x0009255f) mup2_visualizer_osc_pane

0xd58c,	// (0x00094cfe) mup2_visualizer_spec_pane_ParamLimits

0xd58c,	// (0x00094cfe) mup2_visualizer_spec_pane

0xaded,	// (0x0009255f) mup2_spec_half_pane

0xaded,	// (0x0009255f) mup2_spec_half_pane_cp

0xd810,	// (0x00094f82) mup2_spec_bar_pane_ParamLimits

0xd810,	// (0x00094f82) mup2_spec_bar_pane

0xb52c,	// (0x00092c9e) mup2_spec_bar_pane_g1

0xd82f,	// (0x00094fa1) mup2_spec_bar_pane_g2

0x0001,

0xf5ce,	// (0x00096d40) mup2_spec_bar_pane_g

0xaded,	// (0x0009255f) mup2_osc_middle_pane

0xb52c,	// (0x00092c9e) mup2_visualizer_osc_pane_g1

0xae17,	// (0x00092589) popup_number_entry_window_t1_ParamLimits

0xae2a,	// (0x0009259c) popup_number_entry_window_t2_ParamLimits

0xae3c,	// (0x000925ae) popup_number_entry_window_t3_ParamLimits

0x1c95,	// (0x00089407) popup_number_entry_window_t5_ParamLimits

0x1c95,	// (0x00089407) popup_number_entry_window_t5

0xf01d,	// (0x0009678f) popup_number_entry_window_t_ParamLimits

0xae4e,	// (0x000925c0) text_title_cp2_ParamLimits

0x3f03,	// (0x0008b675) aid_hotspot_pointer_text2_pane

0x3f91,	// (0x0008b703) main_viewer_pane_g9_ParamLimits

0x3f91,	// (0x0008b703) main_viewer_pane_g9

0xba8d,	// (0x000931ff) cale_month_pane_t1_ParamLimits

0xbaca,	// (0x0009323c) bg_cale_pane_ParamLimits

0xbae2,	// (0x00093254) list_cale_pane_ParamLimits

0xbaf3,	// (0x00093265) listscroll_cale_day_pane_t1

0xbb05,	// (0x00093277) scroll_pane_cp09_ParamLimits

0x3c39,	// (0x0008b3ab) main_mup_eq_pane_t1_ParamLimits

0x3c39,	// (0x0008b3ab) main_mup_eq_pane_t1

0x3c53,	// (0x0008b3c5) main_mup_eq_pane_t2_ParamLimits

0x3c53,	// (0x0008b3c5) main_mup_eq_pane_t2

0x3c6b,	// (0x0008b3dd) main_mup_eq_pane_t3_ParamLimits

0x3c6b,	// (0x0008b3dd) main_mup_eq_pane_t3

0x3c83,	// (0x0008b3f5) main_mup_eq_pane_t4_ParamLimits

0x3c83,	// (0x0008b3f5) main_mup_eq_pane_t4

0x3c9b,	// (0x0008b40d) main_mup_eq_pane_t5_ParamLimits

0x3c9b,	// (0x0008b40d) main_mup_eq_pane_t5

0x3cb3,	// (0x0008b425) main_mup_eq_pane_t6_ParamLimits

0x3cb3,	// (0x0008b425) main_mup_eq_pane_t6

0x3cc7,	// (0x0008b439) main_mup_eq_pane_t7_ParamLimits

0x3cc7,	// (0x0008b439) main_mup_eq_pane_t7

0x3cdb,	// (0x0008b44d) main_mup_eq_pane_t8_ParamLimits

0x3cdb,	// (0x0008b44d) main_mup_eq_pane_t8

0x3cf1,	// (0x0008b463) main_mup_eq_pane_t9_ParamLimits

0x3cf1,	// (0x0008b463) main_mup_eq_pane_t9

0x3d09,	// (0x0008b47b) main_mup_eq_pane_t10_ParamLimits

0x3d09,	// (0x0008b47b) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x00096aee) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x00096aee) main_mup_eq_pane_t

0x3dc6,	// (0x0008b538) mup_equalizer_pane_cp5_ParamLimits

0x3ddc,	// (0x0008b54e) mup_equalizer_pane_cp6_ParamLimits

0x3df4,	// (0x0008b566) mup_equalizer_pane_cp7_ParamLimits

0x1c34,	// (0x000893a6) main_gallery_pane

0xd52a,	// (0x00094c9c) smil2_volume_pane

0xd532,	// (0x00094ca4) smil_status_volume_pane_g1_ParamLimits

0xd545,	// (0x00094cb7) smil_status_volume_pane_g2_ParamLimits

0x4847,	// (0x0008bfb9) smil_status_volume_pane_g3_ParamLimits

0xf527,	// (0x00096c99) smil_status_volume_pane_g_ParamLimits

0xd4af,	// (0x00094c21) bg_popup_window_pane_cp07_ParamLimits

0xd6ed,	// (0x00094e5f) blid_firmament_pane

0xb4e0,	// (0x00092c52) aid_size_cell_gallery_ParamLimits

0xb4e0,	// (0x00092c52) aid_size_cell_gallery

0xb4e0,	// (0x00092c52) grid_gallery_pane_ParamLimits

0xb4e0,	// (0x00092c52) grid_gallery_pane

0xc375,	// (0x00093ae7) cell_gallery_pane_ParamLimits

0xc375,	// (0x00093ae7) cell_gallery_pane

0xb14f,	// (0x000928c1) bg_cell_gallery_focus_pane_ParamLimits

0xb14f,	// (0x000928c1) bg_cell_gallery_focus_pane

0xb4ee,	// (0x00092c60) cell_gallery_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) cell_gallery_pane_g1

0xb4ee,	// (0x00092c60) cell_gallery_pane_g2_ParamLimits

0xb4ee,	// (0x00092c60) cell_gallery_pane_g2

0xb4ee,	// (0x00092c60) cell_gallery_pane_g3_ParamLimits

0xb4ee,	// (0x00092c60) cell_gallery_pane_g3

0xb4fc,	// (0x00092c6e) cell_gallery_pane_g4_ParamLimits

0xb4fc,	// (0x00092c6e) cell_gallery_pane_g4

0x0003,

0xf5d3,	// (0x00096d45) cell_gallery_pane_g_ParamLimits

0xf5d3,	// (0x00096d45) cell_gallery_pane_g

0xd839,	// (0x00094fab) bg_cell_gallery_focus_pane_g1

0xd841,	// (0x00094fb3) bg_cell_gallery_focus_pane_g2

0xd849,	// (0x00094fbb) bg_cell_gallery_focus_pane_g3

0xd851,	// (0x00094fc3) bg_cell_gallery_focus_pane_g4

0xd859,	// (0x00094fcb) bg_cell_gallery_focus_pane_g5

0xd861,	// (0x00094fd3) bg_cell_gallery_focus_pane_g6

0xd869,	// (0x00094fdb) bg_cell_gallery_focus_pane_g7

0xd871,	// (0x00094fe3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5dc,	// (0x00096d4e) bg_cell_gallery_focus_pane_g

0xd879,	// (0x00094feb) aid_firma_cardinal

0xd88d,	// (0x00094fff) blid_firmament_pane_t1

0xd8a4,	// (0x00095016) blid_firmament_pane_t2

0xd8bb,	// (0x0009502d) blid_firmament_pane_t3

0xd8d2,	// (0x00095044) blid_firmament_pane_t4

0x0003,

0xf5ed,	// (0x00096d5f) blid_firmament_pane_t

0xd8e9,	// (0x0009505b) blid_sat_info_pane

0xb52c,	// (0x00092c9e) blid_sat_info_pane_g1

0xb52c,	// (0x00092c9e) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x000967fe) blid_sat_info_pane_g

0xd8f9,	// (0x0009506b) blid_sat_info_pane_t1

0xd907,	// (0x00095079) smil2_volume_content_pane

0xd910,	// (0x00095082) smil2_volume_pane_g1

0xb6eb,	// (0x00092e5d) smil2_volume_content_pane_g1

0xd918,	// (0x0009508a) smil2_volume_content_pane_g2

0xd921,	// (0x00095093) smil2_volume_content_pane_g3

0xd92a,	// (0x0009509c) smil2_volume_content_pane_g4

0xd933,	// (0x000950a5) smil2_volume_content_pane_g5

0xd93c,	// (0x000950ae) smil2_volume_content_pane_g6

0xd945,	// (0x000950b7) smil2_volume_content_pane_g7

0xd94e,	// (0x000950c0) smil2_volume_content_pane_g8

0xd957,	// (0x000950c9) smil2_volume_content_pane_g9

0xd960,	// (0x000950d2) smil2_volume_content_pane_g10

0x0009,

0xf5f6,	// (0x00096d68) smil2_volume_content_pane_g

0x2252,	// (0x000899c4) cale_week_day_heading_pane_t1_ParamLimits

0x226d,	// (0x000899df) cale_week_day_heading_pane_t2_ParamLimits

0x2288,	// (0x000899fa) cale_week_day_heading_pane_t3_ParamLimits

0x22a3,	// (0x00089a15) cale_week_day_heading_pane_t4_ParamLimits

0x22be,	// (0x00089a30) cale_week_day_heading_pane_t5_ParamLimits

0x22d9,	// (0x00089a4b) cale_week_day_heading_pane_t6_ParamLimits

0x22f4,	// (0x00089a66) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00096896) cale_week_day_heading_pane_t_ParamLimits

0xb740,	// (0x00092eb2) bg_cale_side_pane_ParamLimits

0x230f,	// (0x00089a81) cale_week_time_pane_t1_ParamLimits

0x2329,	// (0x00089a9b) cale_week_time_pane_t2_ParamLimits

0x2343,	// (0x00089ab5) cale_week_time_pane_t3_ParamLimits

0x235d,	// (0x00089acf) cale_week_time_pane_t4_ParamLimits

0x2377,	// (0x00089ae9) cale_week_time_pane_t5_ParamLimits

0x2391,	// (0x00089b03) cale_week_time_pane_t6_ParamLimits

0x23b1,	// (0x00089b23) cale_week_time_pane_t7_ParamLimits

0x23d3,	// (0x00089b45) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x000968a5) cale_week_time_pane_t_ParamLimits

0x23f7,	// (0x00089b69) cell_cale_week_pane_g2_ParamLimits

0xb740,	// (0x00092eb2) bg_cale_side_pane_cp01_ParamLimits

0x3557,	// (0x0008acc9) cale_month_week_pane_t1_ParamLimits

0x3570,	// (0x0008ace2) cale_month_week_pane_t2_ParamLimits

0x3589,	// (0x0008acfb) cale_month_week_pane_t3_ParamLimits

0x35a2,	// (0x0008ad14) cale_month_week_pane_t4_ParamLimits

0x35bd,	// (0x0008ad2f) cale_month_week_pane_t5_ParamLimits

0x35de,	// (0x0008ad50) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00096973) cale_month_week_pane_t_ParamLimits

0x3725,	// (0x0008ae97) cell_cale_month_pane_g1_ParamLimits

0x1c34,	// (0x000893a6) main_cale_event_viewer_pane

0xaded,	// (0x0009255f) listscroll_cale_event_viewer_pane

0xd969,	// (0x000950db) list_cale_ev_pane

0xd971,	// (0x000950e3) scroll_pane_cp023

0xd97d,	// (0x000950ef) field_cale_ev_pane_ParamLimits

0xd97d,	// (0x000950ef) field_cale_ev_pane

0xd99b,	// (0x0009510d) field_cale_ev_content_pane_ParamLimits

0xd99b,	// (0x0009510d) field_cale_ev_content_pane

0xd9a7,	// (0x00095119) field_cale_ev_pane_g1_ParamLimits

0xd9a7,	// (0x00095119) field_cale_ev_pane_g1

0xd9b3,	// (0x00095125) field_cale_ev_pane_g2_ParamLimits

0xd9b3,	// (0x00095125) field_cale_ev_pane_g2

0xd9cb,	// (0x0009513d) field_cale_ev_pane_g3_ParamLimits

0xd9cb,	// (0x0009513d) field_cale_ev_pane_g3

0x0002,

0xf60b,	// (0x00096d7d) field_cale_ev_pane_g_ParamLimits

0xf60b,	// (0x00096d7d) field_cale_ev_pane_g

0xd9e3,	// (0x00095155) field_cale_ev_pane_t1_ParamLimits

0xd9e3,	// (0x00095155) field_cale_ev_pane_t1

0xd9fa,	// (0x0009516c) field_cale_ev_content_pane_t1_ParamLimits

0xd9fa,	// (0x0009516c) field_cale_ev_content_pane_t1

0xc2a7,	// (0x00093a19) bg_button_pane_cp01

0x1fd4,	// (0x00089746) listscroll_cale_week_pane_ParamLimits

0x1fe4,	// (0x00089756) popup_toolbar_window_cp01

0xb711,	// (0x00092e83) listscroll_cale_week_pane_t1_ParamLimits

0x1fd4,	// (0x00089746) listscroll_cale_day_pane_ParamLimits

0xb98b,	// (0x000930fd) popup_toolbar_window_cp02

0xbaf3,	// (0x00093265) listscroll_cale_day_pane_t1_ParamLimits

0x1fd4,	// (0x00089746) main_cale_month_pane_ParamLimits

0x4790,	// (0x0008bf02) popup_toolbar_window_cp03_ParamLimits

0x4790,	// (0x0008bf02) popup_toolbar_window_cp03

0x40e3,	// (0x0008b855) main_image_pane_g2_ParamLimits

0x40e3,	// (0x0008b855) main_image_pane_g2

0x40ef,	// (0x0008b861) main_image_pane_g3_ParamLimits

0x40ef,	// (0x0008b861) main_image_pane_g3

0x0002,

0xf40e,	// (0x00096b80) main_image_pane_g_ParamLimits

0xf40e,	// (0x00096b80) main_image_pane_g

0xc47b,	// (0x00093bed) main_image_pane_t1_ParamLimits

0x40fb,	// (0x0008b86d) main_image_pane_t2_ParamLimits

0x40fb,	// (0x0008b86d) main_image_pane_t2

0x410d,	// (0x0008b87f) main_image_pane_t3_ParamLimits

0x410d,	// (0x0008b87f) main_image_pane_t3

0x411f,	// (0x0008b891) main_image_pane_t4_ParamLimits

0x411f,	// (0x0008b891) main_image_pane_t4

0x0003,

0xf415,	// (0x00096b87) main_image_pane_t_ParamLimits

0xf415,	// (0x00096b87) main_image_pane_t

0x4131,	// (0x0008b8a3) popup_image_details_window_cp01

0x413b,	// (0x0008b8ad) popup_toobar_trans_pane_cp01_ParamLimits

0x413b,	// (0x0008b8ad) popup_toobar_trans_pane_cp01

0x46e0,	// (0x0008be52) popup_image_details_window_ParamLimits

0x46e0,	// (0x0008be52) popup_image_details_window

0x46ee,	// (0x0008be60) popup_image_focus_window

0x1c1a,	// (0x0008938c) camera2_autofocus_pane_ParamLimits

0x1c1a,	// (0x0008938c) camera2_autofocus_pane

0xaded,	// (0x0009255f) bg_popup_sub_pane_cp06

0xda18,	// (0x0009518a) popup_image_focus_window_g1

0xda20,	// (0x00095192) popup_image_focus_window_g2

0xda28,	// (0x0009519a) popup_image_focus_window_g3

0xda30,	// (0x000951a2) popup_image_focus_window_g4

0x0003,

0xf612,	// (0x00096d84) popup_image_focus_window_g

0xda38,	// (0x000951aa) popup_image_focus_window_t1

0xda46,	// (0x000951b8) popup_image_focus_window_t2

0xda56,	// (0x000951c8) popup_image_focus_window_t3

0x0002,

0xf61b,	// (0x00096d8d) popup_image_focus_window_t

0xb4ee,	// (0x00092c60) camera2_autofocus_pane_g1

0xb14f,	// (0x000928c1) bg_tb_trans_pane_cp01

0xda64,	// (0x000951d6) popup_image_details_window_g1

0xda77,	// (0x000951e9) popup_image_details_window_g2

0x0002,

0xf62d,	// (0x00096d9f) popup_image_details_window_g

0xdaa0,	// (0x00095212) popup_image_details_window_t1

0xdab2,	// (0x00095224) popup_image_details_window_t2

0xdacb,	// (0x0009523d) popup_image_details_window_t3

0xdadf,	// (0x00095251) popup_image_details_window_t4

0xdafa,	// (0x0009526c) popup_image_details_window_t5

0x0004,

0xf634,	// (0x00096da6) popup_image_details_window_t

0xb576,	// (0x00092ce8) bg_calc_paper_pane_ParamLimits

0x1c34,	// (0x000893a6) grid_highlight_pane_cp013

0x1d84,	// (0x000894f6) list_calc_pane_ParamLimits

0x1d96,	// (0x00089508) scroll_pane_cp024

0xb58a,	// (0x00092cfc) bg_calc_display_pane_ParamLimits

0x1d9e,	// (0x00089510) calc_display_pane_t1_ParamLimits

0x1db3,	// (0x00089525) calc_display_pane_t2_ParamLimits

0x1dc8,	// (0x0008953a) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00096816) calc_display_pane_t_ParamLimits

0x1ea2,	// (0x00089614) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00096833) cell_calc_pane_g

0x1eab,	// (0x0008961d) cell_calc_pane_t1

0xb5df,	// (0x00092d51) grid_highlight_pane_cp02_ParamLimits

0xb5f5,	// (0x00092d67) toolbar_button_pane_cp01_ParamLimits

0xb5f5,	// (0x00092d67) toolbar_button_pane_cp01

0xc4c0,	// (0x00093c32) temp_image_control_pane_ParamLimits

0xc4c0,	// (0x00093c32) temp_image_control_pane

0x465c,	// (0x0008bdce) main_mp3_pane

0xdb14,	// (0x00095286) temp_image_control_pane_g1_ParamLimits

0xdb14,	// (0x00095286) temp_image_control_pane_g1

0xdb22,	// (0x00095294) temp_image_control_pane_g2_ParamLimits

0xdb22,	// (0x00095294) temp_image_control_pane_g2

0xdb34,	// (0x000952a6) temp_image_control_pane_g3_ParamLimits

0xdb34,	// (0x000952a6) temp_image_control_pane_g3

0x4b03,	// (0x0008c275) temp_image_control_pane_g4_ParamLimits

0x4b03,	// (0x0008c275) temp_image_control_pane_g4

0x0003,

0xf63f,	// (0x00096db1) temp_image_control_pane_g_ParamLimits

0xf63f,	// (0x00096db1) temp_image_control_pane_g

0xdb14,	// (0x00095286) main_mp3_pane_g1

0x4b14,	// (0x0008c286) main_mp3_pane_g2

0x0007,

0xf648,	// (0x00096dba) main_mp3_pane_g

0xdb69,	// (0x000952db) main_mp3_pane_t1

0xb4fc,	// (0x00092c6e) main_camera_pane_g8_ParamLimits

0xb4fc,	// (0x00092c6e) main_camera_pane_g8

0x259e,	// (0x00089d10) main_video_pane_g7_ParamLimits

0x259e,	// (0x00089d10) main_video_pane_g7

0x49a2,	// (0x0008c114) main_camera2_pane_t7_ParamLimits

0x49a2,	// (0x0008c114) main_camera2_pane_t7

0xb8a2,	// (0x00093014) scroll_pane_cp025_ParamLimits

0xb8a2,	// (0x00093014) scroll_pane_cp025

0xb8b6,	// (0x00093028) scroll_pane_cp026_ParamLimits

0xb8b6,	// (0x00093028) scroll_pane_cp026

0xb8c5,	// (0x00093037) wml_content_pane_ParamLimits

0x1c34,	// (0x000893a6) main_touch_calib_pane

0x4bb8,	// (0x0008c32a) main_touch_calib_pane_g1

0x4bc4,	// (0x0008c336) main_touch_calib_pane_g2

0x4bd0,	// (0x0008c342) main_touch_calib_pane_g3

0x4bdc,	// (0x0008c34e) main_touch_calib_pane_g4

0x0003,

0xf666,	// (0x00096dd8) main_touch_calib_pane_g

0x4be8,	// (0x0008c35a) main_touch_calib_pane_t1

0x4c01,	// (0x0008c373) main_touch_calib_pane_t2

0x0004,

0xf66f,	// (0x00096de1) main_touch_calib_pane_t

0xbfee,	// (0x00093760) mup_progress_pane_cp02

0xc023,	// (0x00093795) navi_pane_g1

0xc0de,	// (0x00093850) navi_pane_mp_t3

0x465c,	// (0x0008bdce) main_mp3_pane_ParamLimits

0x47cd,	// (0x0008bf3f) navi_pane_ParamLimits

0xdb14,	// (0x00095286) main_mp3_pane_g1_ParamLimits

0x4b14,	// (0x0008c286) main_mp3_pane_g2_ParamLimits

0x4b20,	// (0x0008c292) main_mp3_pane_g3_ParamLimits

0x4b20,	// (0x0008c292) main_mp3_pane_g3

0x4b2c,	// (0x0008c29e) main_mp3_pane_g4_ParamLimits

0x4b2c,	// (0x0008c29e) main_mp3_pane_g4

0xb4ee,	// (0x00092c60) main_mp3_pane_g5_ParamLimits

0xb4ee,	// (0x00092c60) main_mp3_pane_g5

0xdb44,	// (0x000952b6) main_mp3_pane_g6_ParamLimits

0xdb44,	// (0x000952b6) main_mp3_pane_g6

0xdb51,	// (0x000952c3) main_mp3_pane_g7_ParamLimits

0xdb51,	// (0x000952c3) main_mp3_pane_g7

0xdb5d,	// (0x000952cf) main_mp3_pane_g8_ParamLimits

0xdb5d,	// (0x000952cf) main_mp3_pane_g8

0xf648,	// (0x00096dba) main_mp3_pane_g_ParamLimits

0x4b38,	// (0x0008c2aa) main_mp3_pane_t2

0x4b48,	// (0x0008c2ba) main_mp3_pane_t3

0xdb77,	// (0x000952e9) main_mp3_pane_t4

0xdb85,	// (0x000952f7) main_mp3_pane_t5

0x0005,

0xf659,	// (0x00096dcb) main_mp3_pane_t

0xdb93,	// (0x00095305) mup_progress_pane_cp01

0x4647,	// (0x0008bdb9) aid_zoom_text_secondary2

0xd969,	// (0x000950db) list_cale_ev2_pane

0xd971,	// (0x000950e3) scroll_pane_cp023_ParamLimits

0x4c5c,	// (0x0008c3ce) field_cale_ev2_pane_ParamLimits

0x4c5c,	// (0x0008c3ce) field_cale_ev2_pane

0xdb9b,	// (0x0009530d) field_cale_ev2_pane_g1_ParamLimits

0xdb9b,	// (0x0009530d) field_cale_ev2_pane_g1

0xdba7,	// (0x00095319) field_cale_ev2_pane_g2_ParamLimits

0xdba7,	// (0x00095319) field_cale_ev2_pane_g2

0xdbbf,	// (0x00095331) field_cale_ev2_pane_g3_ParamLimits

0xdbbf,	// (0x00095331) field_cale_ev2_pane_g3

0x0003,

0xf67a,	// (0x00096dec) field_cale_ev2_pane_g_ParamLimits

0xf67a,	// (0x00096dec) field_cale_ev2_pane_g

0xdbe3,	// (0x00095355) field_cale_ev2_pane_t1_ParamLimits

0xdbe3,	// (0x00095355) field_cale_ev2_pane_t1

0xdbfa,	// (0x0009536c) field_cale_ev2_pane_t2_ParamLimits

0xdbfa,	// (0x0009536c) field_cale_ev2_pane_t2

0x0001,

0xf683,	// (0x00096df5) field_cale_ev2_pane_t_ParamLimits

0xf683,	// (0x00096df5) field_cale_ev2_pane_t

0x3ff9,	// (0x0008b76b) main_postcard_pane_g5_ParamLimits

0x3ff9,	// (0x0008b76b) main_postcard_pane_g5

0x4007,	// (0x0008b779) main_postcard_pane_g6_ParamLimits

0x4007,	// (0x0008b779) main_postcard_pane_g6

0xb4e0,	// (0x00092c52) camera2_autofocus_pane_cp_ParamLimits

0xb4e0,	// (0x00092c52) camera2_autofocus_pane_cp

0x465c,	// (0x0008bdce) main_mup3_pane

0x4cc5,	// (0x0008c437) main_mup3_pane_g1_ParamLimits

0x4cc5,	// (0x0008c437) main_mup3_pane_g1

0x4d14,	// (0x0008c486) main_mup3_pane_g2_ParamLimits

0x4d14,	// (0x0008c486) main_mup3_pane_g2

0x4d77,	// (0x0008c4e9) main_mup3_pane_g3_ParamLimits

0x4d77,	// (0x0008c4e9) main_mup3_pane_g3

0x4dd6,	// (0x0008c548) main_mup3_pane_g4_ParamLimits

0x4dd6,	// (0x0008c548) main_mup3_pane_g4

0x4e35,	// (0x0008c5a7) main_mup3_pane_g5_ParamLimits

0x4e35,	// (0x0008c5a7) main_mup3_pane_g5

0x4e94,	// (0x0008c606) main_mup3_pane_g6_ParamLimits

0x4e94,	// (0x0008c606) main_mup3_pane_g6

0xb4fc,	// (0x00092c6e) main_mup3_pane_g7_ParamLimits

0xb4fc,	// (0x00092c6e) main_mup3_pane_g7

0x0007,

0xf693,	// (0x00096e05) main_mup3_pane_g_ParamLimits

0xf693,	// (0x00096e05) main_mup3_pane_g

0x4f04,	// (0x0008c676) main_mup3_pane_t1_ParamLimits

0x4f04,	// (0x0008c676) main_mup3_pane_t1

0x4fe5,	// (0x0008c757) main_mup3_pane_t2_ParamLimits

0x4fe5,	// (0x0008c757) main_mup3_pane_t2

0x50c6,	// (0x0008c838) main_mup3_pane_t4_ParamLimits

0x50c6,	// (0x0008c838) main_mup3_pane_t4

0x50d8,	// (0x0008c84a) main_mup3_pane_t5_ParamLimits

0x50d8,	// (0x0008c84a) main_mup3_pane_t5

0x519e,	// (0x0008c910) main_mup3_pane_t6_ParamLimits

0x519e,	// (0x0008c910) main_mup3_pane_t6

0x0005,

0xf6a4,	// (0x00096e16) main_mup3_pane_t_ParamLimits

0xf6a4,	// (0x00096e16) main_mup3_pane_t

0x523b,	// (0x0008c9ad) mup3_progress_pane_ParamLimits

0x523b,	// (0x0008c9ad) mup3_progress_pane

0x076f,	// (0x00087ee1) popup_mup3_control_window_ParamLimits

0x076f,	// (0x00087ee1) popup_mup3_control_window

0xdc0f,	// (0x00095381) popup_mup3_text_window

0x529e,	// (0x0008ca10) mup3_progress_pane_t1

0x52bd,	// (0x0008ca2f) mup3_progress_pane_t2

0xdc17,	// (0x00095389) mup3_progress_pane_t3

0x0002,

0xf6b1,	// (0x00096e23) mup3_progress_pane_t

0xdc34,	// (0x000953a6) mup_progress_pane_cp03

0xdc44,	// (0x000953b6) bg_tb_trans_pane_cp04

0xdc44,	// (0x000953b6) mup3_volume_pane

0xdc4c,	// (0x000953be) popup_mup3_control_window_g1

0xdc4c,	// (0x000953be) mup3_volume_pane_g1

0xdc4c,	// (0x000953be) mup3_volume_pane_g2

0xdc4c,	// (0x000953be) mup3_volume_pane_g3

0x0002,

0xf6b8,	// (0x00096e2a) mup3_volume_pane_g

0xaded,	// (0x0009255f) bg_tb_trans_pane_cp03

0xdc54,	// (0x000953c6) popup_mup3_text_window_g1

0xdc5c,	// (0x000953ce) popup_mup3_text_window_t1

0xb5d2,	// (0x00092d44) list_calc_item_pane_g1_ParamLimits

0xd663,	// (0x00094dd5) mup_volume_pane_cp_g1

0x4c1a,	// (0x0008c38c) main_touch_calib_pane_t3

0x4c30,	// (0x0008c3a2) main_touch_calib_pane_t4

0x4c46,	// (0x0008c3b8) main_touch_calib_pane_t5

0x196b,	// (0x000890dd) aid_cell_size_toolbar2

0x1973,	// (0x000890e5) aid_popup3_width_pane

0x1943,	// (0x000890b5) aid_zoom_text_msg_primary

0x24a0,	// (0x00089c12) vorec_t7

0xb596,	// (0x00092d08) bg_calc_paper_pane_g1_ParamLimits

0xb5a2,	// (0x00092d14) bg_calc_paper_pane_g2_ParamLimits

0xb5ae,	// (0x00092d20) bg_calc_paper_pane_g3_ParamLimits

0xb5ba,	// (0x00092d2c) bg_calc_paper_pane_g4_ParamLimits

0xb5c6,	// (0x00092d38) bg_calc_paper_pane_g5_ParamLimits

0x1e07,	// (0x00089579) bg_calc_paper_pane_g6_ParamLimits

0x1e18,	// (0x0008958a) bg_calc_paper_pane_g7_ParamLimits

0x1e29,	// (0x0008959b) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0009681d) bg_calc_paper_pane_g_ParamLimits

0x1e3a,	// (0x000895ac) calc_bg_paper_pane_g9_ParamLimits

0xb4e0,	// (0x00092c52) image_qvga_pane_ParamLimits

0xb4e0,	// (0x00092c52) image_qvga_pane

0xb473,	// (0x00092be5) bg_popup_sub_pane_cp04_ParamLimits

0xc3f7,	// (0x00093b69) popup_mup_playback_window_g1_ParamLimits

0xc403,	// (0x00093b75) popup_mup_playback_window_t1_ParamLimits

0xc418,	// (0x00093b8a) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x00096b7b) popup_mup_playback_window_t_ParamLimits

0xb4ee,	// (0x00092c60) main_mup2_pane_g3_ParamLimits

0xb4ee,	// (0x00092c60) main_mup2_pane_g3

0x275f,	// (0x00089ed1) popup_toolbar_window_cp04

0xc79c,	// (0x00093f0e) popup_call2_audio_second_window_g3_ParamLimits

0xc79c,	// (0x00093f0e) popup_call2_audio_second_window_g3

0xcbb4,	// (0x00094326) popup_call2_audio_first_window_g4_ParamLimits

0xcbb4,	// (0x00094326) popup_call2_audio_first_window_g4

0xd1db,	// (0x0009494d) popup_call2_audio_in_window_g4_ParamLimits

0xd1db,	// (0x0009494d) popup_call2_audio_in_window_g4

0x40d6,	// (0x0008b848) aid_area_sk_bg_cut_ParamLimits

0x40d6,	// (0x0008b848) aid_area_sk_bg_cut

0xc42d,	// (0x00093b9f) aid_area_sk_bg_cut_2_ParamLimits

0xc42d,	// (0x00093b9f) aid_area_sk_bg_cut_2

0xaded,	// (0x0009255f) aid_placing_details_win

0xaded,	// (0x0009255f) aid_placing_details_win_2

0xb4ee,	// (0x00092c60) camera2_autofocus_pane_g1_ParamLimits

0x1bc0,	// (0x00089332) popup_fixed_preview_cale_window_ParamLimits

0x1bc0,	// (0x00089332) popup_fixed_preview_cale_window

0xc15c,	// (0x000938ce) navi_slider_pane_g3

0xc165,	// (0x000938d7) navi_slider_pane_g4

0xc16e,	// (0x000938e0) navi_slider_pane_g5

0xc15c,	// (0x000938ce) navi_slider_pane_g6

0x3c0d,	// (0x0008b37f) navi_slider_pane_g7

0xc26c,	// (0x000939de) mup_scale_pane_g3

0xc275,	// (0x000939e7) mup_scale_pane_g4

0xc27e,	// (0x000939f0) mup_scale_pane_g5

0x3e0c,	// (0x0008b57e) mup_scale_pane_g6

0x3e15,	// (0x0008b587) mup_scale_pane_g7

0x9fc9,	// (0x0009173b) cams2_slider_pane_g3

0x9fc9,	// (0x0009173b) cams2_slider_pane_g4

0x9fc9,	// (0x0009173b) cams2_slider_pane_g5

0x9fc9,	// (0x0009173b) cams2_slider_pane_g6

0x9fc9,	// (0x0009173b) cams2_slider_pane_g7

0xb52c,	// (0x00092c9e) camera2_autofocus_pane_cp_g1

0xd4a3,	// (0x00094c15) bg_popup_preview_window_pane_cp02_ParamLimits

0xd4a3,	// (0x00094c15) bg_popup_preview_window_pane_cp02

0xdc6a,	// (0x000953dc) list_fp_cale_pane_ParamLimits

0xdc6a,	// (0x000953dc) list_fp_cale_pane

0xdc76,	// (0x000953e8) popup_fixed_preview_cale_window_t1_ParamLimits

0xdc76,	// (0x000953e8) popup_fixed_preview_cale_window_t1

0x52dc,	// (0x0008ca4e) popup_fixed_preview_cale_window_t2_ParamLimits

0x52dc,	// (0x0008ca4e) popup_fixed_preview_cale_window_t2

0x52f1,	// (0x0008ca63) popup_fixed_preview_cale_window_t3_ParamLimits

0x52f1,	// (0x0008ca63) popup_fixed_preview_cale_window_t3

0x0002,

0xf6bf,	// (0x00096e31) popup_fixed_preview_cale_window_t_ParamLimits

0xf6bf,	// (0x00096e31) popup_fixed_preview_cale_window_t

0x5306,	// (0x0008ca78) list_single_fp_cale_pane_ParamLimits

0x5306,	// (0x0008ca78) list_single_fp_cale_pane

0xdc94,	// (0x00095406) list_single_fp_cale_pane_g1_ParamLimits

0xdc94,	// (0x00095406) list_single_fp_cale_pane_g1

0xdca0,	// (0x00095412) list_single_fp_cale_pane_g2_ParamLimits

0xdca0,	// (0x00095412) list_single_fp_cale_pane_g2

0x0002,

0xf6c6,	// (0x00096e38) list_single_fp_cale_pane_g_ParamLimits

0xf6c6,	// (0x00096e38) list_single_fp_cale_pane_g

0xdcb9,	// (0x0009542b) list_single_fp_cale_pane_t1_ParamLimits

0xdcb9,	// (0x0009542b) list_single_fp_cale_pane_t1

0xdccb,	// (0x0009543d) list_single_fp_cale_pane_t2_ParamLimits

0xdccb,	// (0x0009543d) list_single_fp_cale_pane_t2

0x0001,

0xf6cd,	// (0x00096e3f) list_single_fp_cale_pane_t_ParamLimits

0xf6cd,	// (0x00096e3f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1c34,	// (0x000893a6) main_dialer_pane

0xaded,	// (0x0009255f) aid_cell_size_keypad

0xaded,	// (0x0009255f) dialer_ne_pane

0xaded,	// (0x0009255f) grid_dialer_command_1_pane

0xaded,	// (0x0009255f) grid_dialer_command_2_pane

0xaded,	// (0x0009255f) grid_dialer_keypad_pane

0xd4af,	// (0x00094c21) bg_popup_call_pane_cp06_ParamLimits

0xd4af,	// (0x00094c21) bg_popup_call_pane_cp06

0xd4af,	// (0x00094c21) dialer_ne_clear_pane_ParamLimits

0xd4af,	// (0x00094c21) dialer_ne_clear_pane

0xb52c,	// (0x00092c9e) dialer_ne_pane_g1

0xb54a,	// (0x00092cbc) dialer_ne_pane_t1_ParamLimits

0xb54a,	// (0x00092cbc) dialer_ne_pane_t1

0xdefa,	// (0x0009566c) dialer_ne_pane_t2_ParamLimits

0xdefa,	// (0x0009566c) dialer_ne_pane_t2

0x5319,	// (0x0008ca8b) dialer_ne_pane_t3_ParamLimits

0x5319,	// (0x0008ca8b) dialer_ne_pane_t3

0x0002,

0xf6d2,	// (0x00096e44) dialer_ne_pane_t_ParamLimits

0xf6d2,	// (0x00096e44) dialer_ne_pane_t

0x5319,	// (0x0008ca8b) dialer_ne_pane_t3_copy1_ParamLimits

0x5319,	// (0x0008ca8b) dialer_ne_pane_t3_copy1

0xdcfe,	// (0x00095470) cell_dialer_keypad_pane_ParamLimits

0xdcfe,	// (0x00095470) cell_dialer_keypad_pane

0xb14f,	// (0x000928c1) cell_dialer_command_1_pane_ParamLimits

0xb14f,	// (0x000928c1) cell_dialer_command_1_pane

0xdd15,	// (0x00095487) cell_dialer_command_2_pane_ParamLimits

0xdd15,	// (0x00095487) cell_dialer_command_2_pane

0xb14f,	// (0x000928c1) bg_button_pane_cp02_ParamLimits

0xb14f,	// (0x000928c1) bg_button_pane_cp02

0xb4ee,	// (0x00092c60) cell_dialer_keypad_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) cell_dialer_keypad_pane_g1

0xb14f,	// (0x000928c1) bg_button_pane_cp03_ParamLimits

0xb14f,	// (0x000928c1) bg_button_pane_cp03

0xb4ee,	// (0x00092c60) cell_dialer_command_1_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) cell_dialer_command_1_pane_g1

0xaded,	// (0x0009255f) bg_button_pane_cp04

0xb52c,	// (0x00092c9e) cell_dialer_command_2_pane_g1

0xaded,	// (0x0009255f) bg_button_pane_cp06

0xb52c,	// (0x00092c9e) dialer_ne_clear_pane_g1

0xc02f,	// (0x000937a1) navi_pane_g2

0xc05d,	// (0x000937cf) navi_pane_g3

0x0002,

0xf311,	// (0x00096a83) navi_pane_g

0xc0ec,	// (0x0009385e) navi_pane_mv_g2

0xc113,	// (0x00093885) navi_pane_mv_g5

0x3bd8,	// (0x0008b34a) navi_pane_mv_t1

0xb58a,	// (0x00092cfc) main_clock2_pane

0xb4e0,	// (0x00092c52) main_clock2_list_pane_ParamLimits

0xb4e0,	// (0x00092c52) main_clock2_list_pane

0x538f,	// (0x0008cb01) main_clock2_pane_t1_ParamLimits

0x538f,	// (0x0008cb01) main_clock2_pane_t1

0x53bd,	// (0x0008cb2f) main_clock2_pane_t2_ParamLimits

0x53bd,	// (0x0008cb2f) main_clock2_pane_t2

0x0004,

0xf6de,	// (0x00096e50) main_clock2_pane_t_ParamLimits

0xf6de,	// (0x00096e50) main_clock2_pane_t

0x5422,	// (0x0008cb94) popup_clock_analogue_window_cp03_ParamLimits

0x5422,	// (0x0008cb94) popup_clock_analogue_window_cp03

0x5440,	// (0x0008cbb2) popup_clock_digital_window_cp02_ParamLimits

0x5440,	// (0x0008cbb2) popup_clock_digital_window_cp02

0x54b5,	// (0x0008cc27) main_clock2_list_single_pane_ParamLimits

0x54b5,	// (0x0008cc27) main_clock2_list_single_pane

0xb792,	// (0x00092f04) list_highlight_pane_cp05

0xdd58,	// (0x000954ca) main_clock2_list_single_pane_t1

0x275f,	// (0x00089ed1) popup_toolbar_window_cp04_ParamLimits

0xb4fc,	// (0x00092c6e) camera2_autofocus_pane_g2_ParamLimits

0xb4fc,	// (0x00092c6e) camera2_autofocus_pane_g2

0xb4fc,	// (0x00092c6e) camera2_autofocus_pane_g3_ParamLimits

0xb4fc,	// (0x00092c6e) camera2_autofocus_pane_g3

0xb4fc,	// (0x00092c6e) camera2_autofocus_pane_g4_ParamLimits

0xb4fc,	// (0x00092c6e) camera2_autofocus_pane_g4

0xb4fc,	// (0x00092c6e) camera2_autofocus_pane_g5_ParamLimits

0xb4fc,	// (0x00092c6e) camera2_autofocus_pane_g5

0x0004,

0xf622,	// (0x00096d94) camera2_autofocus_pane_g_ParamLimits

0xf622,	// (0x00096d94) camera2_autofocus_pane_g

0x4c86,	// (0x0008c3f8) camera2_autofocus_pane_cp_g2

0x4c8e,	// (0x0008c400) camera2_autofocus_pane_cp_g3

0x4c96,	// (0x0008c408) camera2_autofocus_pane_cp_g4

0x4c9e,	// (0x0008c410) camera2_autofocus_pane_cp_g5

0x0004,

0xf688,	// (0x00096dfa) camera2_autofocus_pane_cp_g

0xaded,	// (0x0009255f) popup_dialer_spcha_window

0xaded,	// (0x0009255f) bg_popup_sub_pane_cp07

0xaded,	// (0x0009255f) list_spcha_pane

0xdd66,	// (0x000954d8) list_single_spcha_pane_ParamLimits

0xdd66,	// (0x000954d8) list_single_spcha_pane

0xaded,	// (0x0009255f) list_highlight_pane_cp06

0xbc84,	// (0x000933f6) list_single_spcha_pane_t1

0xcf85,	// (0x000946f7) popup_call2_audio_out_window_g4_ParamLimits

0xcf85,	// (0x000946f7) popup_call2_audio_out_window_g4

0x1c34,	// (0x000893a6) main_imed2_pane

0x46f6,	// (0x0008be68) popup_imed_adjust2_window

0x4709,	// (0x0008be7b) popup_imed_trans_window_ParamLimits

0x4709,	// (0x0008be7b) popup_imed_trans_window

0xd738,	// (0x00094eaa) popup_blid_sat_info2_window_t1

0xd746,	// (0x00094eb8) popup_blid_sat_info2_window_t2

0x000a,

0xf5b7,	// (0x00096d29) popup_blid_sat_info2_window_t

0x556a,	// (0x0008ccdc) aid_size_cell_colour_35

0x5584,	// (0x0008ccf6) aid_size_cell_colour_112

0x559b,	// (0x0008cd0d) aid_size_cell_effect

0xb14f,	// (0x000928c1) bg_tb_trans_pane_cp02

0xbe0b,	// (0x0009357d) heading_imed_pane

0x55b5,	// (0x0008cd27) listscroll_imed_pane

0xdd78,	// (0x000954ea) heading_imed_pane_g1

0xdd80,	// (0x000954f2) heading_imed_pane_t1

0xdd8e,	// (0x00095500) grid_imed_colour_35_pane_ParamLimits

0xdd8e,	// (0x00095500) grid_imed_colour_35_pane

0x55c1,	// (0x0008cd33) grid_imed_effect_pane

0xdda6,	// (0x00095518) list_imed_aspect_pane

0x55d1,	// (0x0008cd43) scroll_pane_cp027_ParamLimits

0x55d1,	// (0x0008cd43) scroll_pane_cp027

0x55dd,	// (0x0008cd4f) cell_imed_effect_pane_ParamLimits

0x55dd,	// (0x0008cd4f) cell_imed_effect_pane

0xddae,	// (0x00095520) cell_imed_colour_pane_ParamLimits

0xddae,	// (0x00095520) cell_imed_colour_pane

0xddf0,	// (0x00095562) cell_imed_colour_pane_g1_ParamLimits

0xddf0,	// (0x00095562) cell_imed_colour_pane_g1

0xde01,	// (0x00095573) hgihlgiht_grid_pane_cp016_ParamLimits

0xde01,	// (0x00095573) hgihlgiht_grid_pane_cp016

0x55f5,	// (0x0008cd67) cell_imed_effect_pane_g1

0x55fd,	// (0x0008cd6f) grid_highlight_pane_cp017

0xde12,	// (0x00095584) list_imed_single_pane_ParamLimits

0xde12,	// (0x00095584) list_imed_single_pane

0xaded,	// (0x0009255f) list_highlight_pane_cp07

0xde27,	// (0x00095599) list_imed_aspect_pane_comp1_t1

0xc375,	// (0x00093ae7) bg_tb_trans_pane_cp05

0xde49,	// (0x000955bb) popup_imed_adjust2_window_g1

0xde70,	// (0x000955e2) popup_imed_adjust2_window_t1

0xde88,	// (0x000955fa) slider_imed_adjust_pane

0xde9c,	// (0x0009560e) slider_imed_adjust_pane_g1

0xdeac,	// (0x0009561e) slider_imed_adjust_pane_g2

0xdebc,	// (0x0009562e) slider_imed_adjust_pane_g3

0xdecd,	// (0x0009563f) slider_imed_adjust_pane_g4

0x0003,

0xf6fb,	// (0x00096e6d) slider_imed_adjust_pane_g

0x5606,	// (0x0008cd78) aid_size_cell_clipart2

0x5612,	// (0x0008cd84) grid_imed_clipart_pane

0xc28f,	// (0x00093a01) scroll_pane_cp031

0x561c,	// (0x0008cd8e) cell_imed_clipart_pane_ParamLimits

0x561c,	// (0x0008cd8e) cell_imed_clipart_pane

0x563f,	// (0x0008cdb1) cell_imed_clipart_pane_g1

0xaded,	// (0x0009255f) grid_highlight_pane_cp014

0x5371,	// (0x0008cae3) main_clock2_pane_g1_ParamLimits

0x5371,	// (0x0008cae3) main_clock2_pane_g1

0x545c,	// (0x0008cbce) aid_call2_pane_cp10

0x546e,	// (0x0008cbe0) aid_call_pane_cp10

0xbf8e,	// (0x00093700) popup_clock_analogue_window_cp10_g1

0xbf8e,	// (0x00093700) popup_clock_analogue_window_cp10_g2

0x5480,	// (0x0008cbf2) popup_clock_analogue_window_cp10_g3

0x5480,	// (0x0008cbf2) popup_clock_analogue_window_cp10_g4

0xbf8e,	// (0x00093700) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6e9,	// (0x00096e5b) popup_clock_analogue_window_cp10_g

0x5496,	// (0x0008cc08) popup_clock_analogue_window_cp10_t1

0x54c7,	// (0x0008cc39) clock_digital_number_pane_cp10_ParamLimits

0x54c7,	// (0x0008cc39) clock_digital_number_pane_cp10

0x54e1,	// (0x0008cc53) clock_digital_number_pane_cp11_ParamLimits

0x54e1,	// (0x0008cc53) clock_digital_number_pane_cp11

0x54fb,	// (0x0008cc6d) clock_digital_number_pane_cp12_ParamLimits

0x54fb,	// (0x0008cc6d) clock_digital_number_pane_cp12

0x5515,	// (0x0008cc87) clock_digital_number_pane_cp13_ParamLimits

0x5515,	// (0x0008cc87) clock_digital_number_pane_cp13

0x552f,	// (0x0008cca1) clock_digital_separator_pane_cp10_ParamLimits

0x552f,	// (0x0008cca1) clock_digital_separator_pane_cp10

0x5549,	// (0x0008ccbb) popup_clock_digital_window_cp02_t1_ParamLimits

0x5549,	// (0x0008ccbb) popup_clock_digital_window_cp02_t1

0xb46b,	// (0x00092bdd) clock_digital_number_pane_cp10_g1

0xb46b,	// (0x00092bdd) clock_digital_number_pane_cp10_g2

0x0001,

0xf704,	// (0x00096e76) clock_digital_number_pane_cp10_g

0xb46b,	// (0x00092bdd) clock_digital_separator_pane_cp10_g1

0xb46b,	// (0x00092bdd) clock_digital_separator_pane_g2_cp10

0xc11b,	// (0x0009388d) navi_pane_vded_g4

0xc124,	// (0x00093896) navi_pane_vded_g5

0xc12d,	// (0x0009389f) navi_pane_vded_t1

0x1c34,	// (0x000893a6) main_vded_pane

0x5648,	// (0x0008cdba) main_vded_pane_g1

0x5654,	// (0x0008cdc6) main_vded_pane_g2

0x565e,	// (0x0008cdd0) main_vded_pane_g3

0x0002,

0xf709,	// (0x00096e7b) main_vded_pane_g

0x5668,	// (0x0008cdda) main_vded_pane_t1

0x5676,	// (0x0008cde8) main_vded_pane_t2

0x0001,

0xf710,	// (0x00096e82) main_vded_pane_t

0x5684,	// (0x0008cdf6) vded_slider_pane

0x568e,	// (0x0008ce00) vded_video_pane

0xdede,	// (0x00095650) vded_video_pane_g1

0x5698,	// (0x0008ce0a) vded_video_pane_g2

0xb52c,	// (0x00092c9e) vded_video_pane_g3

0x0002,

0xf715,	// (0x00096e87) vded_video_pane_g

0xdee8,	// (0x0009565a) vded_slider_pane_g1

0xd663,	// (0x00094dd5) vded_slider_pane_g2

0xdef1,	// (0x00095663) vded_slider_pane_g3

0xdf17,	// (0x00095689) vded_slider_pane_g4

0xdf20,	// (0x00095692) vded_slider_pane_g5

0x0004,

0xf71c,	// (0x00096e8e) vded_slider_pane_g

0x076f,	// (0x00087ee1) mup3_rocker_pane_ParamLimits

0x076f,	// (0x00087ee1) mup3_rocker_pane

0xdc4c,	// (0x000953be) mup3_control_keys_pane_g1

0xdf29,	// (0x0009569b) mup3_control_keys_pane_g2

0xdc4c,	// (0x000953be) mup3_control_keys_pane_g3

0xdf31,	// (0x000956a3) mup3_control_keys_pane_g4

0x0003,

0xf727,	// (0x00096e99) mup3_control_keys_pane_g

0x1be8,	// (0x0008935a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1be8,	// (0x0008935a) popup_toolbar2_fixed_window_cp01

0x076f,	// (0x00087ee1) popup_toolbar2_fixed_window_cp02_ParamLimits

0x076f,	// (0x00087ee1) popup_toolbar2_fixed_window_cp02

0xc90e,	// (0x00094080) popup_call2_audio_second_window_t4_ParamLimits

0xc90e,	// (0x00094080) popup_call2_audio_second_window_t4

0xce4a,	// (0x000945bc) popup_call2_audio_first_window_t6_ParamLimits

0xce4a,	// (0x000945bc) popup_call2_audio_first_window_t6

0xd088,	// (0x000947fa) popup_call2_audio_out_window_t6_ParamLimits

0xd088,	// (0x000947fa) popup_call2_audio_out_window_t6

0x1c34,	// (0x000893a6) main_vitu_pane

0xb4e0,	// (0x00092c52) aid_size_cell_itu_ParamLimits

0xb4e0,	// (0x00092c52) aid_size_cell_itu

0xb4e0,	// (0x00092c52) bg_popup_window_pane_cp08_ParamLimits

0xb4e0,	// (0x00092c52) bg_popup_window_pane_cp08

0xb4e0,	// (0x00092c52) field_vitu_entry_pane_ParamLimits

0xb4e0,	// (0x00092c52) field_vitu_entry_pane

0xb4e0,	// (0x00092c52) grid_vitu_function_pane_ParamLimits

0xb4e0,	// (0x00092c52) grid_vitu_function_pane

0xb4e0,	// (0x00092c52) grid_vitu_itu_pane_ParamLimits

0xb4e0,	// (0x00092c52) grid_vitu_itu_pane

0xb4e0,	// (0x00092c52) cell_vitu_itu_pane_ParamLimits

0xb4e0,	// (0x00092c52) cell_vitu_itu_pane

0xb4e0,	// (0x00092c52) cell_vitu_function_pane_ParamLimits

0xb4e0,	// (0x00092c52) cell_vitu_function_pane

0xb14f,	// (0x000928c1) bg_popup_sub_pane_cp08_ParamLimits

0xb14f,	// (0x000928c1) bg_popup_sub_pane_cp08

0xb536,	// (0x00092ca8) field_vitu_entry_pane_t1_ParamLimits

0xb536,	// (0x00092ca8) field_vitu_entry_pane_t1

0xdefa,	// (0x0009566c) field_vitu_entry_pane_t2_ParamLimits

0xdefa,	// (0x0009566c) field_vitu_entry_pane_t2

0x0001,

0xf730,	// (0x00096ea2) field_vitu_entry_pane_t_ParamLimits

0xf730,	// (0x00096ea2) field_vitu_entry_pane_t

0xd4af,	// (0x00094c21) bg_button_pane_cp05_ParamLimits

0xd4af,	// (0x00094c21) bg_button_pane_cp05

0xdf39,	// (0x000956ab) cell_vitu_itu_pane_g1

0xc383,	// (0x00093af5) cell_vitu_itu_pane_t1_ParamLimits

0xc383,	// (0x00093af5) cell_vitu_itu_pane_t1

0xc383,	// (0x00093af5) cell_vitu_itu_pane_t2_ParamLimits

0xc383,	// (0x00093af5) cell_vitu_itu_pane_t2

0x0002,

0xf735,	// (0x00096ea7) cell_vitu_itu_pane_t_ParamLimits

0xf735,	// (0x00096ea7) cell_vitu_itu_pane_t

0xaded,	// (0x0009255f) bg_button_pane_cp07

0xb52c,	// (0x00092c9e) cell_vitu_function_pane_g1

0x1d6d,	// (0x000894df) main_calc_pane_g1

0x19a7,	// (0x00089119) aid_visual_content_pane

0x1c34,	// (0x000893a6) main_vradio_pane

0xb4fc,	// (0x00092c6e) main_vradio_pane_g1_ParamLimits

0xb4fc,	// (0x00092c6e) main_vradio_pane_g1

0xb4fc,	// (0x00092c6e) main_vradio_pane_g2_ParamLimits

0xb4fc,	// (0x00092c6e) main_vradio_pane_g2

0x0001,

0xf4cc,	// (0x00096c3e) main_vradio_pane_g_ParamLimits

0xf4cc,	// (0x00096c3e) main_vradio_pane_g

0xb54a,	// (0x00092cbc) main_vradio_pane_t1_ParamLimits

0xb54a,	// (0x00092cbc) main_vradio_pane_t1

0xb54a,	// (0x00092cbc) main_vradio_pane_t2_ParamLimits

0xb54a,	// (0x00092cbc) main_vradio_pane_t2

0xb54a,	// (0x00092cbc) main_vradio_pane_t3_ParamLimits

0xb54a,	// (0x00092cbc) main_vradio_pane_t3

0x0002,

0xf73c,	// (0x00096eae) main_vradio_pane_t_ParamLimits

0xf73c,	// (0x00096eae) main_vradio_pane_t

0xb4e0,	// (0x00092c52) vradio_rocker_control_pane_ParamLimits

0xb4e0,	// (0x00092c52) vradio_rocker_control_pane

0xb4e0,	// (0x00092c52) vradio_station_info_pane_ParamLimits

0xb4e0,	// (0x00092c52) vradio_station_info_pane

0xb14f,	// (0x000928c1) vradio_frequency_info_pane_ParamLimits

0xb14f,	// (0x000928c1) vradio_frequency_info_pane

0xb52c,	// (0x00092c9e) vradio_station_info_pane_g1

0xc383,	// (0x00093af5) vradio_station_info_pane_t1_ParamLimits

0xc383,	// (0x00093af5) vradio_station_info_pane_t1

0xb54a,	// (0x00092cbc) vradio_station_info_pane_t2_ParamLimits

0xb54a,	// (0x00092cbc) vradio_station_info_pane_t2

0x0001,

0xf743,	// (0x00096eb5) vradio_station_info_pane_t_ParamLimits

0xf743,	// (0x00096eb5) vradio_station_info_pane_t

0xaded,	// (0x0009255f) vradio_tuning_pane

0x56a1,	// (0x0008ce13) vradio_rocker_control_pane_g1

0xdf55,	// (0x000956c7) vradio_rocker_control_pane_g2

0x56a9,	// (0x0008ce1b) vradio_rocker_control_pane_g3

0x56b1,	// (0x0008ce23) vradio_rocker_control_pane_g4

0x56b9,	// (0x0008ce2b) vradio_rocker_control_pane_g5

0x0004,

0xf748,	// (0x00096eba) vradio_rocker_control_pane_g

0xb52c,	// (0x00092c9e) vradio_frequency_info_pane_g1

0xb536,	// (0x00092ca8) vradio_frequency_info_pane_t1_ParamLimits

0xb536,	// (0x00092ca8) vradio_frequency_info_pane_t1

0x56c1,	// (0x0008ce33) vradio_tuning_pane_g1

0x56ce,	// (0x0008ce40) vradio_tuning_pane_t1

0x19f0,	// (0x00089162) area_side_right_pane_ParamLimits

0x19f0,	// (0x00089162) area_side_right_pane

0xd46a,	// (0x00094bdc) status_small_pane_g1

0xd472,	// (0x00094be4) status_small_pane_g2

0xd47b,	// (0x00094bed) status_small_pane_g3

0xd484,	// (0x00094bf6) status_small_pane_g4

0x0003,

0xf519,	// (0x00096c8b) status_small_pane_g

0xd48d,	// (0x00094bff) status_small_pane_t1

0x1c34,	// (0x000893a6) main_video3_pane

0xaded,	// (0x0009255f) cams_zoom_vslider_pane

0xdf5d,	// (0x000956cf) image3_wide_pane_ParamLimits

0xdf5d,	// (0x000956cf) image3_wide_pane

0xaded,	// (0x0009255f) image3_wide_small_pane

0xdf77,	// (0x000956e9) main_video3_pane_g1_ParamLimits

0xdf77,	// (0x000956e9) main_video3_pane_g1

0xdf77,	// (0x000956e9) main_video3_pane_g2_ParamLimits

0xdf77,	// (0x000956e9) main_video3_pane_g2

0x0001,

0xf753,	// (0x00096ec5) main_video3_pane_g_ParamLimits

0xf753,	// (0x00096ec5) main_video3_pane_g

0xdf95,	// (0x00095707) main_video3_pane_t1_ParamLimits

0xdf95,	// (0x00095707) main_video3_pane_t1

0xdf95,	// (0x00095707) main_video3_pane_t2_ParamLimits

0xdf95,	// (0x00095707) main_video3_pane_t2

0xdf95,	// (0x00095707) main_video3_pane_t3_ParamLimits

0xdf95,	// (0x00095707) main_video3_pane_t3

0x0002,

0xf758,	// (0x00096eca) main_video3_pane_t_ParamLimits

0xf758,	// (0x00096eca) main_video3_pane_t

0xb52c,	// (0x00092c9e) cams_zoom_vslider_pane_g1

0xb52c,	// (0x00092c9e) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x000967fe) cams_zoom_vslider_pane_g

0xaded,	// (0x0009255f) small_slider_vertical_pane

0xb52c,	// (0x00092c9e) small_slider_vertical_pane_g1

0xb52c,	// (0x00092c9e) small_slider_vertical_pane_g2

0xdfbc,	// (0x0009572e) small_slider_vertical_pane_g3

0x0002,

0xf75f,	// (0x00096ed1) small_slider_vertical_pane_g

0x1c34,	// (0x000893a6) main_hwr_training_pane

0xdfc5,	// (0x00095737) hwr_training_instruct_pane_ParamLimits

0xdfc5,	// (0x00095737) hwr_training_instruct_pane

0x56dd,	// (0x0008ce4f) hwr_training_navi_pane_ParamLimits

0x56dd,	// (0x0008ce4f) hwr_training_navi_pane

0x56f7,	// (0x0008ce69) hwr_training_write_pane_ParamLimits

0x56f7,	// (0x0008ce69) hwr_training_write_pane

0xaded,	// (0x0009255f) bg_frame_shadow_pane

0xdffc,	// (0x0009576e) hwr_training_write_pane_g1

0xe004,	// (0x00095776) hwr_training_write_pane_g2

0xe00c,	// (0x0009577e) hwr_training_write_pane_g3

0xe014,	// (0x00095786) hwr_training_write_pane_g4

0xe01c,	// (0x0009578e) hwr_training_write_pane_g5

0xe024,	// (0x00095796) hwr_training_write_pane_g6

0xe02c,	// (0x0009579e) hwr_training_write_pane_g7

0x0006,

0xf766,	// (0x00096ed8) hwr_training_write_pane_g

0x572f,	// (0x0008cea1) hwr_training_navi_pane_g1_ParamLimits

0x572f,	// (0x0008cea1) hwr_training_navi_pane_g1

0x5741,	// (0x0008ceb3) hwr_training_navi_pane_g2_ParamLimits

0x5741,	// (0x0008ceb3) hwr_training_navi_pane_g2

0x5753,	// (0x0008cec5) hwr_training_navi_pane_g3_ParamLimits

0x5753,	// (0x0008cec5) hwr_training_navi_pane_g3

0x5763,	// (0x0008ced5) hwr_training_navi_pane_g4_ParamLimits

0x5763,	// (0x0008ced5) hwr_training_navi_pane_g4

0x0004,

0xf775,	// (0x00096ee7) hwr_training_navi_pane_g_ParamLimits

0xf775,	// (0x00096ee7) hwr_training_navi_pane_g

0x577d,	// (0x0008ceef) hwr_training_navi_pane_t1

0x578b,	// (0x0008cefd) list_single_hwr_training_instruct_pane_ParamLimits

0x578b,	// (0x0008cefd) list_single_hwr_training_instruct_pane

0xe034,	// (0x000957a6) list_single_hwr_training_instruct_pane_t1

0xd839,	// (0x00094fab) bg_frame_shadow_pane_g1

0xe043,	// (0x000957b5) bg_frame_shadow_pane_g2

0xe04b,	// (0x000957bd) bg_frame_shadow_pane_g3

0xe053,	// (0x000957c5) bg_frame_shadow_pane_g4

0xe05b,	// (0x000957cd) bg_frame_shadow_pane_g5

0xe063,	// (0x000957d5) bg_frame_shadow_pane_g6

0xe06b,	// (0x000957dd) bg_frame_shadow_pane_g7

0xb639,	// (0x00092dab) bg_frame_shadow_pane_g8

0x0007,

0xf780,	// (0x00096ef2) bg_frame_shadow_pane_g

0x1c34,	// (0x000893a6) main_video_tele_dialer_pane

0x57b4,	// (0x0008cf26) aid_size_cell_video_keypad_ParamLimits

0x57b4,	// (0x0008cf26) aid_size_cell_video_keypad

0x57c4,	// (0x0008cf36) grid_video_dialer_keypad_pane_ParamLimits

0x57c4,	// (0x0008cf36) grid_video_dialer_keypad_pane

0x57f8,	// (0x0008cf6a) video_down_pane_cp_ParamLimits

0x57f8,	// (0x0008cf6a) video_down_pane_cp

0x5822,	// (0x0008cf94) cell_video_dialer_keypad_pane_ParamLimits

0x5822,	// (0x0008cf94) cell_video_dialer_keypad_pane

0xe073,	// (0x000957e5) bg_button_pane_cp08_ParamLimits

0xe073,	// (0x000957e5) bg_button_pane_cp08

0x5837,	// (0x0008cfa9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5837,	// (0x0008cfa9) cell_video_dialer_keypad_pane_g1

0x076f,	// (0x00087ee1) mup3_rocker2_pane_ParamLimits

0x076f,	// (0x00087ee1) mup3_rocker2_pane

0xb52c,	// (0x00092c9e) mup3_rocker2_pane_g1

0x466a,	// (0x0008bddc) main_dialer2_pane

0x1c34,	// (0x000893a6) main_mp4_pane

0x588f,	// (0x0008d001) main_mp4_pane_g1_ParamLimits

0x588f,	// (0x0008d001) main_mp4_pane_g1

0x58b1,	// (0x0008d023) main_mp4_pane_g2_ParamLimits

0x58b1,	// (0x0008d023) main_mp4_pane_g2

0x58cf,	// (0x0008d041) main_mp4_pane_g3_ParamLimits

0x58cf,	// (0x0008d041) main_mp4_pane_g3

0x5908,	// (0x0008d07a) main_mp4_pane_g4_ParamLimits

0x5908,	// (0x0008d07a) main_mp4_pane_g4

0x5930,	// (0x0008d0a2) main_mp4_pane_g5_ParamLimits

0x5930,	// (0x0008d0a2) main_mp4_pane_g5

0x0007,

0xf7a0,	// (0x00096f12) main_mp4_pane_g_ParamLimits

0xf7a0,	// (0x00096f12) main_mp4_pane_g

0x5998,	// (0x0008d10a) main_mp4_pane_t1_ParamLimits

0x5998,	// (0x0008d10a) main_mp4_pane_t1

0x59fa,	// (0x0008d16c) main_mp4_pane_t2_ParamLimits

0x59fa,	// (0x0008d16c) main_mp4_pane_t2

0x5a5e,	// (0x0008d1d0) main_mp4_pane_t3_ParamLimits

0x5a5e,	// (0x0008d1d0) main_mp4_pane_t3

0x5abc,	// (0x0008d22e) main_mp4_pane_t4_ParamLimits

0x5abc,	// (0x0008d22e) main_mp4_pane_t4

0x0003,

0xf7b1,	// (0x00096f23) main_mp4_pane_t_ParamLimits

0xf7b1,	// (0x00096f23) main_mp4_pane_t

0x5b1a,	// (0x0008d28c) mp4_progress_pane_ParamLimits

0x5b1a,	// (0x0008d28c) mp4_progress_pane

0x5b4e,	// (0x0008d2c0) mp4_rocker_pane_ParamLimits

0x5b4e,	// (0x0008d2c0) mp4_rocker_pane

0x044a,	// (0x00087bbc) mp4_progress_pane_t1

0x0469,	// (0x00087bdb) mp4_progress_pane_t2

0x0001,

0xf7ba,	// (0x00096f2c) mp4_progress_pane_t

0x0488,	// (0x00087bfa) mup_progress_pane_cp04

0x9fc9,	// (0x0009173b) mp4_rocker_pane_g1

0x1c1a,	// (0x0008938c) aid_cell_size_keypad2_ParamLimits

0x1c1a,	// (0x0008938c) aid_cell_size_keypad2

0x1c1a,	// (0x0008938c) dialer2_ne_pane_ParamLimits

0x1c1a,	// (0x0008938c) dialer2_ne_pane

0x1c1a,	// (0x0008938c) grid_dialer2_keypad_pane_ParamLimits

0x1c1a,	// (0x0008938c) grid_dialer2_keypad_pane

0xd5a2,	// (0x00094d14) bg_popup_call_pane_cp07_ParamLimits

0xd5a2,	// (0x00094d14) bg_popup_call_pane_cp07

0x5b62,	// (0x0008d2d4) dialer2_ne_pane_t1_ParamLimits

0x5b62,	// (0x0008d2d4) dialer2_ne_pane_t1

0x5b89,	// (0x0008d2fb) cell_dialer2_keypad_pane_ParamLimits

0x5b89,	// (0x0008d2fb) cell_dialer2_keypad_pane

0xd4af,	// (0x00094c21) bg_button_pane_pane_cp04_ParamLimits

0xd4af,	// (0x00094c21) bg_button_pane_pane_cp04

0xb4ee,	// (0x00092c60) cell_dialer2_keypad_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) cell_dialer2_keypad_pane_g1

0x2621,	// (0x00089d93) aid_placing_vt_set_content_ParamLimits

0x2621,	// (0x00089d93) aid_placing_vt_set_content

0x264d,	// (0x00089dbf) aid_placing_vt_set_title_ParamLimits

0x264d,	// (0x00089dbf) aid_placing_vt_set_title

0x1c34,	// (0x000893a6) main_image3_pane

0x5bd2,	// (0x0008d344) area_side_right_pane_cp01_ParamLimits

0x5bd2,	// (0x0008d344) area_side_right_pane_cp01

0x5bff,	// (0x0008d371) main_image3_pane_g1_ParamLimits

0x5bff,	// (0x0008d371) main_image3_pane_g1

0x5c0d,	// (0x0008d37f) main_image3_pane_g2_ParamLimits

0x5c0d,	// (0x0008d37f) main_image3_pane_g2

0x5c26,	// (0x0008d398) main_image3_pane_g3_ParamLimits

0x5c26,	// (0x0008d398) main_image3_pane_g3

0x5c3f,	// (0x0008d3b1) main_image3_pane_g4_ParamLimits

0x5c3f,	// (0x0008d3b1) main_image3_pane_g4

0x0003,

0xf7c9,	// (0x00096f3b) main_image3_pane_g_ParamLimits

0xf7c9,	// (0x00096f3b) main_image3_pane_g

0x5c58,	// (0x0008d3ca) main_image3_pane_t1_ParamLimits

0x5c58,	// (0x0008d3ca) main_image3_pane_t1

0x5c7d,	// (0x0008d3ef) main_image3_pane_t2_ParamLimits

0x5c7d,	// (0x0008d3ef) main_image3_pane_t2

0x5c9c,	// (0x0008d40e) main_image3_pane_t3_ParamLimits

0x5c9c,	// (0x0008d40e) main_image3_pane_t3

0x0003,

0xf7d2,	// (0x00096f44) main_image3_pane_t_ParamLimits

0xf7d2,	// (0x00096f44) main_image3_pane_t

0xb4e0,	// (0x00092c52) grid_sctrl_middle_pane_cp01_ParamLimits

0xb4e0,	// (0x00092c52) grid_sctrl_middle_pane_cp01

0x5cfd,	// (0x0008d46f) cell_sctrl_middle_pane_cp01_ParamLimits

0x5cfd,	// (0x0008d46f) cell_sctrl_middle_pane_cp01

0x5d0e,	// (0x0008d480) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5d0e,	// (0x0008d480) cell_sctrl_middle_pane_cp01_g1

0x1c34,	// (0x000893a6) main_call4_pane

0x5d1b,	// (0x0008d48d) aid_size_button_call4_ParamLimits

0x5d1b,	// (0x0008d48d) aid_size_button_call4

0x5d51,	// (0x0008d4c3) call4_windows_pane_ParamLimits

0x5d51,	// (0x0008d4c3) call4_windows_pane

0x5d66,	// (0x0008d4d8) grid_call4_button_pane_ParamLimits

0x5d66,	// (0x0008d4d8) grid_call4_button_pane

0x5d94,	// (0x0008d506) call4_windows_conf_pane

0x5da9,	// (0x0008d51b) popup_call4_audio_first_window_ParamLimits

0x5da9,	// (0x0008d51b) popup_call4_audio_first_window

0x5df9,	// (0x0008d56b) popup_call4_audio_second_window_ParamLimits

0x5df9,	// (0x0008d56b) popup_call4_audio_second_window

0x5e12,	// (0x0008d584) popup_call4_audio_wait_window_ParamLimits

0x5e12,	// (0x0008d584) popup_call4_audio_wait_window

0x5e20,	// (0x0008d592) cell_call4_button_pane_ParamLimits

0x5e20,	// (0x0008d592) cell_call4_button_pane

0x5e43,	// (0x0008d5b5) bg_button_pane_cp09_ParamLimits

0x5e43,	// (0x0008d5b5) bg_button_pane_cp09

0x5e4f,	// (0x0008d5c1) cell_call4_button_pane_g1_ParamLimits

0x5e4f,	// (0x0008d5c1) cell_call4_button_pane_g1

0x5e5c,	// (0x0008d5ce) cell_call4_button_pane_t1_ParamLimits

0x5e5c,	// (0x0008d5ce) cell_call4_button_pane_t1

0x04d1,	// (0x00087c43) popup_call4_audio_conf_window_ParamLimits

0x04d1,	// (0x00087c43) popup_call4_audio_conf_window

0x529e,	// (0x0008ca10) mup3_progress_pane_t1_ParamLimits

0x52bd,	// (0x0008ca2f) mup3_progress_pane_t2_ParamLimits

0xdc17,	// (0x00095389) mup3_progress_pane_t3_ParamLimits

0xf6b1,	// (0x00096e23) mup3_progress_pane_t_ParamLimits

0xdc34,	// (0x000953a6) mup_progress_pane_cp03_ParamLimits

0xdc4c,	// (0x000953be) mup3_control_keys_pane_g4_copy1

0x5b4e,	// (0x0008d2c0) mp4_rocker2_pane_ParamLimits

0x5b4e,	// (0x0008d2c0) mp4_rocker2_pane

0xdf29,	// (0x0009569b) mp4_rocker2_pane_g1

0xdf29,	// (0x0009569b) mp4_rocker2_pane_g2

0xdf29,	// (0x0009569b) mp4_rocker2_pane_g3

0xdf29,	// (0x0009569b) mp4_rocker2_pane_g4

0xdf29,	// (0x0009569b) mp4_rocker2_pane_g5

0x0004,

0xf7db,	// (0x00096f4d) mp4_rocker2_pane_g

0x1c34,	// (0x000893a6) main_camera4_pane

0x1c34,	// (0x000893a6) main_video4_pane

0x57d4,	// (0x0008cf46) main_video_tele_dialer_pane_t1_ParamLimits

0x57d4,	// (0x0008cf46) main_video_tele_dialer_pane_t1

0x57e6,	// (0x0008cf58) main_video_tele_dialer_pane_t2_ParamLimits

0x57e6,	// (0x0008cf58) main_video_tele_dialer_pane_t2

0x0001,

0xf791,	// (0x00096f03) main_video_tele_dialer_pane_t_ParamLimits

0xf791,	// (0x00096f03) main_video_tele_dialer_pane_t

0x5eb8,	// (0x0008d62a) cam4_autofocus_pane_ParamLimits

0x5eb8,	// (0x0008d62a) cam4_autofocus_pane

0x5ed2,	// (0x0008d644) cam4_image_uncrop_pane_ParamLimits

0x5ed2,	// (0x0008d644) cam4_image_uncrop_pane

0x5ee9,	// (0x0008d65b) cam4_indicators_pane_ParamLimits

0x5ee9,	// (0x0008d65b) cam4_indicators_pane

0x5f05,	// (0x0008d677) main_camera4_pane_g1_ParamLimits

0x5f05,	// (0x0008d677) main_camera4_pane_g1

0x5f11,	// (0x0008d683) main_camera4_pane_g2_ParamLimits

0x5f11,	// (0x0008d683) main_camera4_pane_g2

0x5f11,	// (0x0008d683) main_camera4_pane_g3_ParamLimits

0x5f11,	// (0x0008d683) main_camera4_pane_g3

0x5f1d,	// (0x0008d68f) main_camera4_pane_g4_ParamLimits

0x5f1d,	// (0x0008d68f) main_camera4_pane_g4

0x5f29,	// (0x0008d69b) main_camera4_pane_g5_ParamLimits

0x5f29,	// (0x0008d69b) main_camera4_pane_g5

0x0005,

0xf7e6,	// (0x00096f58) main_camera4_pane_g_ParamLimits

0xf7e6,	// (0x00096f58) main_camera4_pane_g

0x5f43,	// (0x0008d6b5) main_camera4_pane_t1_ParamLimits

0x5f43,	// (0x0008d6b5) main_camera4_pane_t1

0x9fd3,	// (0x00091745) bg_tb_trans_pane_cp06

0x5f93,	// (0x0008d705) cam4_indicators_pane_g1

0x5fa4,	// (0x0008d716) cam4_indicators_pane_g2

0x0002,

0xf801,	// (0x00096f73) cam4_indicators_pane_g

0x5fbc,	// (0x0008d72e) cam4_indicators_pane_t1

0x5fe6,	// (0x0008d758) main_video4_pane_g1_ParamLimits

0x5fe6,	// (0x0008d758) main_video4_pane_g1

0x5ff2,	// (0x0008d764) main_video4_pane_g2_ParamLimits

0x5ff2,	// (0x0008d764) main_video4_pane_g2

0x5ffe,	// (0x0008d770) main_video4_pane_g3_ParamLimits

0x5ffe,	// (0x0008d770) main_video4_pane_g3

0x600a,	// (0x0008d77c) main_video4_pane_g4_ParamLimits

0x600a,	// (0x0008d77c) main_video4_pane_g4

0x0004,

0xf808,	// (0x00096f7a) main_video4_pane_g_ParamLimits

0xf808,	// (0x00096f7a) main_video4_pane_g

0x602a,	// (0x0008d79c) vid4_indicators_pane_ParamLimits

0x602a,	// (0x0008d79c) vid4_indicators_pane

0x6049,	// (0x0008d7bb) video4_image_uncrop_cif_pane_ParamLimits

0x6049,	// (0x0008d7bb) video4_image_uncrop_cif_pane

0x6058,	// (0x0008d7ca) video4_image_uncrop_nhd_pane_ParamLimits

0x6058,	// (0x0008d7ca) video4_image_uncrop_nhd_pane

0x5ed2,	// (0x0008d644) video4_image_uncrop_vga_pane_ParamLimits

0x5ed2,	// (0x0008d644) video4_image_uncrop_vga_pane

0x465c,	// (0x0008bdce) bg_tb_trans_pane_cp07

0x606d,	// (0x0008d7df) vid4_indicators_pane_g1

0x6081,	// (0x0008d7f3) vid4_indicators_pane_g2

0x6095,	// (0x0008d807) vid4_indicators_pane_g3

0x0004,

0xf813,	// (0x00096f85) vid4_indicators_pane_g

0x60c2,	// (0x0008d834) vid4_indicators_pane_t1

0x60d9,	// (0x0008d84b) cam4_autofocus_pane_g1

0x60e1,	// (0x0008d853) cam4_autofocus_pane_g2

0x60e9,	// (0x0008d85b) cam4_autofocus_pane_g3

0x0002,

0xf81e,	// (0x00096f90) cam4_autofocus_pane_g

0x60f1,	// (0x0008d863) cam4_autofocus_pane_g3_copy1

0x5806,	// (0x0008cf78) video_down_pane_cp_t1

0x5814,	// (0x0008cf86) video_down_pane_cp_t2

0x0001,

0xf796,	// (0x00096f08) video_down_pane_cp_t

0x1c1a,	// (0x0008938c) popup_vitu2_window_ParamLimits

0x1c1a,	// (0x0008938c) popup_vitu2_window

0x60f9,	// (0x0008d86b) aid_size_cell2_itu2_ParamLimits

0x60f9,	// (0x0008d86b) aid_size_cell2_itu2

0x611b,	// (0x0008d88d) aid_size_cell_itu2_ParamLimits

0x611b,	// (0x0008d88d) aid_size_cell_itu2

0x615f,	// (0x0008d8d1) bg_popup_window_pane_cp09_ParamLimits

0x615f,	// (0x0008d8d1) bg_popup_window_pane_cp09

0x616d,	// (0x0008d8df) field_vitu2_entry_pane_ParamLimits

0x616d,	// (0x0008d8df) field_vitu2_entry_pane

0x618d,	// (0x0008d8ff) grid_vitu2_function_pane_ParamLimits

0x618d,	// (0x0008d8ff) grid_vitu2_function_pane

0x61cd,	// (0x0008d93f) grid_vitu2_itu_pane_ParamLimits

0x61cd,	// (0x0008d93f) grid_vitu2_itu_pane

0x6241,	// (0x0008d9b3) cell_vitu2_itu_pane_ParamLimits

0x6241,	// (0x0008d9b3) cell_vitu2_itu_pane

0x625a,	// (0x0008d9cc) cell_vitu2_function_pane_ParamLimits

0x625a,	// (0x0008d9cc) cell_vitu2_function_pane

0x04e5,	// (0x00087c57) bg_popup_call_pane_cp08_ParamLimits

0x04e5,	// (0x00087c57) bg_popup_call_pane_cp08

0x04fc,	// (0x00087c6e) field_vitu2_entry_pane_g1

0x0508,	// (0x00087c7a) field_vitu2_entry_pane_g2

0x0002,

0xf825,	// (0x00096f97) field_vitu2_entry_pane_g

0x629b,	// (0x0008da0d) field_vitu2_entry_pane_t1_ParamLimits

0x629b,	// (0x0008da0d) field_vitu2_entry_pane_t1

0x0514,	// (0x00087c86) field_vitu2_entry_pane_t2_ParamLimits

0x0514,	// (0x00087c86) field_vitu2_entry_pane_t2

0x0001,

0xf82c,	// (0x00096f9e) field_vitu2_entry_pane_t_ParamLimits

0xf82c,	// (0x00096f9e) field_vitu2_entry_pane_t

0x4994,	// (0x0008c106) bg_button_pane_cp010_ParamLimits

0x4994,	// (0x0008c106) bg_button_pane_cp010

0x62d6,	// (0x0008da48) cell_vitu2_itu_pane_g1

0x62fc,	// (0x0008da6e) cell_vitu2_itu_pane_t1_ParamLimits

0x62fc,	// (0x0008da6e) cell_vitu2_itu_pane_t1

0x6348,	// (0x0008daba) cell_vitu2_itu_pane_t2_ParamLimits

0x6348,	// (0x0008daba) cell_vitu2_itu_pane_t2

0x0002,

0xf836,	// (0x00096fa8) cell_vitu2_itu_pane_t_ParamLimits

0xf836,	// (0x00096fa8) cell_vitu2_itu_pane_t

0x465c,	// (0x0008bdce) bg_button_pane_cp011

0x6410,	// (0x0008db82) cell_vitu2_function_pane_g1

0x1c34,	// (0x000893a6) main_myfav_hc_pane

0x5cde,	// (0x0008d450) popup_image3_note_pane_ParamLimits

0x5cde,	// (0x0008d450) popup_image3_note_pane

0x5cec,	// (0x0008d45e) popup_image3_tool_bar_pane_ParamLimits

0x5cec,	// (0x0008d45e) popup_image3_tool_bar_pane

0x63be,	// (0x0008db30) cell_vitu2_itu_pane_t3_ParamLimits

0x63be,	// (0x0008db30) cell_vitu2_itu_pane_t3

0xaded,	// (0x0009255f) bg_popup_trans_pane

0x0539,	// (0x00087cab) grid_image3_tool_bar_pane

0x0543,	// (0x00087cb5) bg_popup_trans_pane_g1

0xb9b4,	// (0x00093126) bg_popup_trans_pane_g2

0x054b,	// (0x00087cbd) bg_popup_trans_pane_g3

0x0553,	// (0x00087cc5) bg_popup_trans_pane_g4

0x055b,	// (0x00087ccd) bg_popup_trans_pane_g5

0x0563,	// (0x00087cd5) bg_popup_trans_pane_g6

0x056b,	// (0x00087cdd) bg_popup_trans_pane_g7

0x0573,	// (0x00087ce5) bg_popup_trans_pane_g8

0xb994,	// (0x00093106) bg_popup_trans_pane_g9

0x0008,

0xf83d,	// (0x00096faf) bg_popup_trans_pane_g

0x057b,	// (0x00087ced) cell_image3_tool_bar_pane_ParamLimits

0x057b,	// (0x00087ced) cell_image3_tool_bar_pane

0xb52c,	// (0x00092c9e) cell_image3_tool_bar_pane_g1

0xaded,	// (0x0009255f) bg_popup_trans_pane_cp1

0x058f,	// (0x00087d01) popup_image3_note_pane_t1

0x059d,	// (0x00087d0f) popup_image3_note_pane_t2

0x05ab,	// (0x00087d1d) popup_image3_note_pane_t3

0x0002,

0xf850,	// (0x00096fc2) popup_image3_note_pane_t

0x05b9,	// (0x00087d2b) popup_image3_note_pane_t3_copy1

0x6424,	// (0x0008db96) bg_myfav_hc_instruction_pane_ParamLimits

0x6424,	// (0x0008db96) bg_myfav_hc_instruction_pane

0x643c,	// (0x0008dbae) cell_myfav_contact_pane_ParamLimits

0x643c,	// (0x0008dbae) cell_myfav_contact_pane

0x6456,	// (0x0008dbc8) cell_myfav_contact_pane_cp1_ParamLimits

0x6456,	// (0x0008dbc8) cell_myfav_contact_pane_cp1

0x646e,	// (0x0008dbe0) cell_myfav_contact_pane_cp2_ParamLimits

0x646e,	// (0x0008dbe0) cell_myfav_contact_pane_cp2

0x6486,	// (0x0008dbf8) cell_myfav_contact_pane_cp3_ParamLimits

0x6486,	// (0x0008dbf8) cell_myfav_contact_pane_cp3

0x649d,	// (0x0008dc0f) cell_myfav_contact_pane_cp4_ParamLimits

0x649d,	// (0x0008dc0f) cell_myfav_contact_pane_cp4

0x64b3,	// (0x0008dc25) cell_myfav_contact_pane_cp5_ParamLimits

0x64b3,	// (0x0008dc25) cell_myfav_contact_pane_cp5

0x64c7,	// (0x0008dc39) cell_myfav_contact_pane_cp6_ParamLimits

0x64c7,	// (0x0008dc39) cell_myfav_contact_pane_cp6

0x64db,	// (0x0008dc4d) cell_myfav_contact_pane_cp7_ParamLimits

0x64db,	// (0x0008dc4d) cell_myfav_contact_pane_cp7

0x05c7,	// (0x00087d39) listscroll_gen_pane_cp05

0x64f3,	// (0x0008dc65) main_myfav_hc_pane_g1_ParamLimits

0x64f3,	// (0x0008dc65) main_myfav_hc_pane_g1

0x6509,	// (0x0008dc7b) main_myfav_hc_pane_g2_ParamLimits

0x6509,	// (0x0008dc7b) main_myfav_hc_pane_g2

0x0002,

0xf857,	// (0x00096fc9) main_myfav_hc_pane_g_ParamLimits

0xf857,	// (0x00096fc9) main_myfav_hc_pane_g

0x6539,	// (0x0008dcab) main_myfav_hc_pane_t1_ParamLimits

0x6539,	// (0x0008dcab) main_myfav_hc_pane_t1

0x05d0,	// (0x00087d42) main_myfav_hc_pane_t2_ParamLimits

0x05d0,	// (0x00087d42) main_myfav_hc_pane_t2

0x05e2,	// (0x00087d54) main_myfav_hc_pane_t3_ParamLimits

0x05e2,	// (0x00087d54) main_myfav_hc_pane_t3

0x6550,	// (0x0008dcc2) main_myfav_hc_pane_t4_ParamLimits

0x6550,	// (0x0008dcc2) main_myfav_hc_pane_t4

0x0004,

0xf85e,	// (0x00096fd0) main_myfav_hc_pane_t_ParamLimits

0xf85e,	// (0x00096fd0) main_myfav_hc_pane_t

0xb52c,	// (0x00092c9e) bg_myfav_hc_instruction_pane_g1

0x05f4,	// (0x00087d66) cell_myfav_contact_pane_g1_ParamLimits

0x05f4,	// (0x00087d66) cell_myfav_contact_pane_g1

0x05f4,	// (0x00087d66) cell_myfav_contact_pane_g2_ParamLimits

0x05f4,	// (0x00087d66) cell_myfav_contact_pane_g2

0x0600,	// (0x00087d72) cell_myfav_contact_pane_g3_ParamLimits

0x0600,	// (0x00087d72) cell_myfav_contact_pane_g3

0xb4fc,	// (0x00092c6e) cell_myfav_contact_pane_g4_ParamLimits

0xb4fc,	// (0x00092c6e) cell_myfav_contact_pane_g4

0x060d,	// (0x00087d7f) cell_myfav_contact_pane_g5_ParamLimits

0x060d,	// (0x00087d7f) cell_myfav_contact_pane_g5

0x0004,

0xf869,	// (0x00096fdb) cell_myfav_contact_pane_g_ParamLimits

0xf869,	// (0x00096fdb) cell_myfav_contact_pane_g

0x6521,	// (0x0008dc93) main_myfav_hc_pane_g3_ParamLimits

0x6521,	// (0x0008dc93) main_myfav_hc_pane_g3

0x1b24,	// (0x00089296) popup_adpt_find_window

0x657a,	// (0x0008dcec) afind_page_pane_ParamLimits

0x657a,	// (0x0008dcec) afind_page_pane

0x6587,	// (0x0008dcf9) aid_size_cell_afind_ParamLimits

0x6587,	// (0x0008dcf9) aid_size_cell_afind

0x65a1,	// (0x0008dd13) bg_popup_sub_pane_cp09_ParamLimits

0x65a1,	// (0x0008dd13) bg_popup_sub_pane_cp09

0x65b2,	// (0x0008dd24) find_pane_cp01_ParamLimits

0x65b2,	// (0x0008dd24) find_pane_cp01

0x0619,	// (0x00087d8b) grid_afind_control_pane_ParamLimits

0x0619,	// (0x00087d8b) grid_afind_control_pane

0x65c5,	// (0x0008dd37) grid_afind_pane_ParamLimits

0x65c5,	// (0x0008dd37) grid_afind_pane

0x65e1,	// (0x0008dd53) cell_afind_pane_ParamLimits

0x65e1,	// (0x0008dd53) cell_afind_pane

0xb52c,	// (0x00092c9e) afind_page_pane_g1

0x6629,	// (0x0008dd9b) afind_page_pane_g2

0x6631,	// (0x0008dda3) afind_page_pane_g3

0x0002,

0xf874,	// (0x00096fe6) afind_page_pane_g

0x6639,	// (0x0008ddab) afind_page_pane_t1

0x063f,	// (0x00087db1) cell_afind_grid_control_pane_ParamLimits

0x063f,	// (0x00087db1) cell_afind_grid_control_pane

0x064e,	// (0x00087dc0) bg_button_pane_cp69_ParamLimits

0x064e,	// (0x00087dc0) bg_button_pane_cp69

0x6647,	// (0x0008ddb9) cell_afind_pane_g1_ParamLimits

0x6647,	// (0x0008ddb9) cell_afind_pane_g1

0x6654,	// (0x0008ddc6) cell_afind_pane_t1_ParamLimits

0x6654,	// (0x0008ddc6) cell_afind_pane_t1

0x065a,	// (0x00087dcc) bg_button_pane_cp72

0x0662,	// (0x00087dd4) cell_afind_grid_control_pane_g1

0x41fd,	// (0x0008b96f) aid_image_placing_area_ParamLimits

0x41fd,	// (0x0008b96f) aid_image_placing_area

0xb4ee,	// (0x00092c60) field_vitu_entry_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) field_vitu_entry_pane_g1

0xb4ee,	// (0x00092c60) field_vitu_entry_pane_g2_ParamLimits

0xb4ee,	// (0x00092c60) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0009690b) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0009690b) field_vitu_entry_pane_g

0xdf39,	// (0x000956ab) cell_vitu_itu_pane_g1_ParamLimits

0xdefa,	// (0x0009566c) cell_vitu_itu_pane_t3_ParamLimits

0xdefa,	// (0x0009566c) cell_vitu_itu_pane_t3

0x044a,	// (0x00087bbc) mp4_progress_pane_t1_ParamLimits

0x0469,	// (0x00087bdb) mp4_progress_pane_t2_ParamLimits

0xf7ba,	// (0x00096f2c) mp4_progress_pane_t_ParamLimits

0x0488,	// (0x00087bfa) mup_progress_pane_cp04_ParamLimits

0x6564,	// (0x0008dcd6) main_myfav_hc_pane_t5_ParamLimits

0x6564,	// (0x0008dcd6) main_myfav_hc_pane_t5

0x194b,	// (0x000890bd) aid_zoom_text_primary

0x1b24,	// (0x00089296) popup_adpt_find_window_ParamLimits

0x465c,	// (0x0008bdce) main_cam_set_pane

0x5ef7,	// (0x0008d669) cam4_zoom_pane_ParamLimits

0x5ef7,	// (0x0008d669) cam4_zoom_pane

0x6666,	// (0x0008ddd8) main_cam_set_pane_g1_ParamLimits

0x6666,	// (0x0008ddd8) main_cam_set_pane_g1

0x6674,	// (0x0008dde6) main_cam_set_pane_g2_ParamLimits

0x6674,	// (0x0008dde6) main_cam_set_pane_g2

0x0001,

0xf87b,	// (0x00096fed) main_cam_set_pane_g_ParamLimits

0xf87b,	// (0x00096fed) main_cam_set_pane_g

0x6680,	// (0x0008ddf2) main_cam_set_pane_t1_ParamLimits

0x6680,	// (0x0008ddf2) main_cam_set_pane_t1

0x669c,	// (0x0008de0e) main_cset_listscroll_pane_ParamLimits

0x669c,	// (0x0008de0e) main_cset_listscroll_pane

0x66ce,	// (0x0008de40) main_cset_slider_pane_ParamLimits

0x66ce,	// (0x0008de40) main_cset_slider_pane

0x0673,	// (0x00087de5) main_cset_list_pane_ParamLimits

0x0673,	// (0x00087de5) main_cset_list_pane

0x0683,	// (0x00087df5) scroll_pane_cp028

0x66ed,	// (0x0008de5f) aid_area_touch_slider

0x6709,	// (0x0008de7b) cset_slider_pane

0x672c,	// (0x0008de9e) main_cset_slider_pane_g1

0x6741,	// (0x0008deb3) main_cset_slider_pane_g2

0x0011,

0xf880,	// (0x00096ff2) main_cset_slider_pane_g

0x06bc,	// (0x00087e2e) main_cset_slider_pane_t1

0x6807,	// (0x0008df79) main_cset_slider_pane_t2

0x6821,	// (0x0008df93) main_cset_slider_pane_t3

0x683b,	// (0x0008dfad) main_cset_slider_pane_t4

0x6859,	// (0x0008dfcb) main_cset_slider_pane_t5

0x6877,	// (0x0008dfe9) main_cset_slider_pane_t6

0x688e,	// (0x0008e000) main_cset_slider_pane_t7

0x000e,

0xf8a5,	// (0x00097017) main_cset_slider_pane_t

0x699c,	// (0x0008e10e) cset_list_set_pane_ParamLimits

0x699c,	// (0x0008e10e) cset_list_set_pane

0x0756,	// (0x00087ec8) aid_position_infowindow_above

0x075e,	// (0x00087ed0) aid_position_infowindow_below

0x69b5,	// (0x0008e127) cset_list_set_pane_g1_ParamLimits

0x69b5,	// (0x0008e127) cset_list_set_pane_g1

0x69c1,	// (0x0008e133) cset_list_set_pane_g3_ParamLimits

0x69c1,	// (0x0008e133) cset_list_set_pane_g3

0x0001,

0xf8c4,	// (0x00097036) cset_list_set_pane_g_ParamLimits

0xf8c4,	// (0x00097036) cset_list_set_pane_g

0x69d0,	// (0x0008e142) cset_list_set_pane_t1_ParamLimits

0x69d0,	// (0x0008e142) cset_list_set_pane_t1

0xb14f,	// (0x000928c1) list_highlight_pane_cp021_ParamLimits

0xb14f,	// (0x000928c1) list_highlight_pane_cp021

0xc26c,	// (0x000939de) cset_slider_pane_g1

0xc27e,	// (0x000939f0) cset_slider_pane_g2

0xc275,	// (0x000939e7) cset_slider_pane_g3

0x0002,

0xf8c9,	// (0x0009703b) cset_slider_pane_g

0x69e5,	// (0x0008e157) aid_area_touch_cam4_zoom

0x69ed,	// (0x0008e15f) cam4_zoom_cont_pane

0x69f5,	// (0x0008e167) cam4_zoom_pane_g1

0x69fd,	// (0x0008e16f) cam4_zoom_pane_g2

0x6a05,	// (0x0008e177) cam4_zoom_pane_g3

0x0002,

0xf8d0,	// (0x00097042) cam4_zoom_pane_g

0x6a0d,	// (0x0008e17f) cam4_zoom_cont_pane_g1

0x6a16,	// (0x0008e188) cam4_zoom_cont_pane_g2

0x6a1f,	// (0x0008e191) cam4_zoom_cont_pane_g3

0x0002,

0xf8d7,	// (0x00097049) cam4_zoom_cont_pane_g

0x5d35,	// (0x0008d4a7) call4_image_pane_ParamLimits

0x5d35,	// (0x0008d4a7) call4_image_pane

0x5d94,	// (0x0008d506) call4_windows_conf_pane_ParamLimits

0x5dd7,	// (0x0008d549) popup_call4_audio_in_window_ParamLimits

0x5dd7,	// (0x0008d549) popup_call4_audio_in_window

0xaded,	// (0x0009255f) bg_popup_call2_act_pane_cp02

0x04c9,	// (0x00087c3b) call4_list_conf_pane

0xb52c,	// (0x00092c9e) call4_image_pane_g1

0xb52c,	// (0x00092c9e) call4_image_pane_g2

0x0001,

0xf08c,	// (0x000967fe) call4_image_pane_g

0x078d,	// (0x00087eff) list_single_graphic_popup_conf4_pane_ParamLimits

0x078d,	// (0x00087eff) list_single_graphic_popup_conf4_pane

0xaded,	// (0x0009255f) list_highlight_pane_cp022

0x07a0,	// (0x00087f12) list_single_graphic_popup_conf4_pane_g1

0xbe8b,	// (0x000935fd) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8de,	// (0x00097050) list_single_graphic_popup_conf4_pane_g

0x07a8,	// (0x00087f1a) list_single_graphic_popup_conf4_pane_t1

0x27b1,	// (0x00089f23) popup_vtel_slider_window_ParamLimits

0x27b1,	// (0x00089f23) popup_vtel_slider_window

0x049b,	// (0x00087c0d) dialer2_ne_pane_t2_ParamLimits

0x049b,	// (0x00087c0d) dialer2_ne_pane_t2

0x0001,

0xf7bf,	// (0x00096f31) dialer2_ne_pane_t_ParamLimits

0xf7bf,	// (0x00096f31) dialer2_ne_pane_t

0xb14f,	// (0x000928c1) bg_popup_sub_pane_cp010_ParamLimits

0xb14f,	// (0x000928c1) bg_popup_sub_pane_cp010

0x6a28,	// (0x0008e19a) popup_vtel_slider_window_g1_ParamLimits

0x6a28,	// (0x0008e19a) popup_vtel_slider_window_g1

0x6a34,	// (0x0008e1a6) popup_vtel_slider_window_g2_ParamLimits

0x6a34,	// (0x0008e1a6) popup_vtel_slider_window_g2

0x0003,

0xf8e3,	// (0x00097055) popup_vtel_slider_window_g_ParamLimits

0xf8e3,	// (0x00097055) popup_vtel_slider_window_g

0x6a7c,	// (0x0008e1ee) vtel_slider_pane_ParamLimits

0x6a7c,	// (0x0008e1ee) vtel_slider_pane

0x6a8b,	// (0x0008e1fd) vtel_slider_pane_g1_ParamLimits

0x6a8b,	// (0x0008e1fd) vtel_slider_pane_g1

0x6a98,	// (0x0008e20a) vtel_slider_pane_g2_ParamLimits

0x6a98,	// (0x0008e20a) vtel_slider_pane_g2

0x6aa5,	// (0x0008e217) vtel_slider_pane_g3_ParamLimits

0x6aa5,	// (0x0008e217) vtel_slider_pane_g3

0x6a8b,	// (0x0008e1fd) vtel_slider_pane_g4_ParamLimits

0x6a8b,	// (0x0008e1fd) vtel_slider_pane_g4

0x6ab2,	// (0x0008e224) vtel_slider_pane_g5_ParamLimits

0x6ab2,	// (0x0008e224) vtel_slider_pane_g5

0x0004,

0xf8ec,	// (0x0009705e) vtel_slider_pane_g_ParamLimits

0xf8ec,	// (0x0009705e) vtel_slider_pane_g

0x465c,	// (0x0008bdce) main_gallery2_pane

0x6141,	// (0x0008d8b3) aid_size_row_itut2_dropdow_list_ParamLimits

0x6141,	// (0x0008d8b3) aid_size_row_itut2_dropdow_list

0x61ab,	// (0x0008d91d) grid_vitu2_function_top_pane_ParamLimits

0x61ab,	// (0x0008d91d) grid_vitu2_function_top_pane

0x61ff,	// (0x0008d971) popup_vitu2_dropdown_list_window_ParamLimits

0x61ff,	// (0x0008d971) popup_vitu2_dropdown_list_window

0x6221,	// (0x0008d993) popup_vitu2_match_list_window

0x6abf,	// (0x0008e231) cell_vitu2_function_top_pane_ParamLimits

0x6abf,	// (0x0008e231) cell_vitu2_function_top_pane

0x6ad9,	// (0x0008e24b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ad9,	// (0x0008e24b) cell_vitu2_function_top_pane_cp01

0x6af5,	// (0x0008e267) cell_vitu2_function_top_wide_pane_ParamLimits

0x6af5,	// (0x0008e267) cell_vitu2_function_top_wide_pane

0x465c,	// (0x0008bdce) bg_button_pane_cp012

0x6b13,	// (0x0008e285) cell_vitu2_function_top_pane_g1

0x6b27,	// (0x0008e299) bg_button_pane_cp013_ParamLimits

0x6b27,	// (0x0008e299) bg_button_pane_cp013

0x6b43,	// (0x0008e2b5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6b43,	// (0x0008e2b5) cell_vitu2_function_top_wide_pane_g1

0x1c1a,	// (0x0008938c) bg_popup_sub_pane_cp20

0x6b5b,	// (0x0008e2cd) list_vitu2_match_list_pane

0x0543,	// (0x00087cb5) bg_popup_sub_pane_cp20_g1

0x054b,	// (0x00087cbd) bg_popup_sub_pane_cp20_g2

0xb9b4,	// (0x00093126) bg_popup_sub_pane_cp20_g3

0x0553,	// (0x00087cc5) bg_popup_sub_pane_cp20_g4

0xb994,	// (0x00093106) bg_popup_sub_pane_cp20_g5

0x07be,	// (0x00087f30) bg_popup_sub_pane_cp20_g6

0x0563,	// (0x00087cd5) bg_popup_sub_pane_cp20_g7

0x056b,	// (0x00087cdd) bg_popup_sub_pane_cp20_g8

0x0573,	// (0x00087ce5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8f7,	// (0x00097069) bg_popup_sub_pane_cp20_g

0x6b73,	// (0x0008e2e5) list_vitu2_match_list_item_pane_ParamLimits

0x6b73,	// (0x0008e2e5) list_vitu2_match_list_item_pane

0x6b85,	// (0x0008e2f7) list_vitu2_match_list_item_pane_t1

0x1c34,	// (0x000893a6) bg_popup_sub_pane_cp21

0xb792,	// (0x00092f04) grid_vitu2_dropdown_list_pane

0x6b93,	// (0x0008e305) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6b93,	// (0x0008e305) cell_vitu2_dropdown_list_char_pane

0x6bb5,	// (0x0008e327) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6bb5,	// (0x0008e327) cell_vitu2_dropdown_list_ctrl_pane

0x07d8,	// (0x00087f4a) cell_vitu2_dropdown_list_char_pane_g1

0x07cf,	// (0x00087f41) cell_vitu2_dropdown_list_char_pane_g2

0x07c6,	// (0x00087f38) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf90a,	// (0x0009707c) cell_vitu2_dropdown_list_char_pane_g

0x6bdd,	// (0x0008e34f) cell_vitu2_dropdown_list_char_pane_t1

0x6beb,	// (0x0008e35d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6beb,	// (0x0008e35d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6bfb,	// (0x0008e36d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6bfb,	// (0x0008e36d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6c0c,	// (0x0008e37e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6c0c,	// (0x0008e37e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6c1c,	// (0x0008e38e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6c1c,	// (0x0008e38e) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9fd3,	// (0x00091745) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9fd3,	// (0x00091745) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf911,	// (0x00097083) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf911,	// (0x00097083) cell_vitu2_dropdown_list_ctrl_pane_g

0x6c35,	// (0x0008e3a7) aid_size_cell_gallery2_ParamLimits

0x6c35,	// (0x0008e3a7) aid_size_cell_gallery2

0x6c4f,	// (0x0008e3c1) grid_gallery2_pane_ParamLimits

0x6c4f,	// (0x0008e3c1) grid_gallery2_pane

0x6c66,	// (0x0008e3d8) scroll_pane_cp029_ParamLimits

0x6c66,	// (0x0008e3d8) scroll_pane_cp029

0x6c76,	// (0x0008e3e8) cell_gallery2_pane_ParamLimits

0x6c76,	// (0x0008e3e8) cell_gallery2_pane

0xb7e1,	// (0x00092f53) cell_gallery2_pane_g2

0x6ccb,	// (0x0008e43d) cell_gallery2_pane_g3

0x07e1,	// (0x00087f53) cell_gallery2_pane_g4

0x07e9,	// (0x00087f5b) cell_gallery2_pane_g5

0xb792,	// (0x00092f04) grid_highlight_pane_cp10

0x6221,	// (0x0008d993) popup_vitu2_match_list_window_ParamLimits

0x6233,	// (0x0008d9a5) popup_vitu2_query_window_ParamLimits

0x6233,	// (0x0008d9a5) popup_vitu2_query_window

0x1c34,	// (0x000893a6) bg_vitu2_candi_button_pane

0x07d8,	// (0x00087f4a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x07cf,	// (0x00087f41) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x07c6,	// (0x00087f38) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6cd3,	// (0x0008e445) bg_button_pane_cp015

0x6ce8,	// (0x0008e45a) bg_button_pane_cp016

0x6cf4,	// (0x0008e466) bg_button_pane_cp017

0xc375,	// (0x00093ae7) bg_popup_sub_pane_cp22

0x07f1,	// (0x00087f63) popup_vitu2_query_window_g1

0x6d34,	// (0x0008e4a6) popup_vitu2_query_window_g2

0x0002,

0xf91c,	// (0x0009708e) popup_vitu2_query_window_g

0x6d58,	// (0x0008e4ca) popup_vitu2_query_window_t1_ParamLimits

0x6d58,	// (0x0008e4ca) popup_vitu2_query_window_t1

0x6d8b,	// (0x0008e4fd) popup_vitu2_query_window_t2_ParamLimits

0x6d8b,	// (0x0008e4fd) popup_vitu2_query_window_t2

0x6d9d,	// (0x0008e50f) popup_vitu2_query_window_t3_ParamLimits

0x6d9d,	// (0x0008e50f) popup_vitu2_query_window_t3

0x6dc5,	// (0x0008e537) popup_vitu2_query_window_t4_ParamLimits

0x6dc5,	// (0x0008e537) popup_vitu2_query_window_t4

0x6dd9,	// (0x0008e54b) popup_vitu2_query_window_t5_ParamLimits

0x6dd9,	// (0x0008e54b) popup_vitu2_query_window_t5

0x0006,

0xf923,	// (0x00097095) popup_vitu2_query_window_t_ParamLimits

0xf923,	// (0x00097095) popup_vitu2_query_window_t

0x066b,	// (0x00087ddd) main_cset_text_pane

0x66ed,	// (0x0008de5f) aid_area_touch_slider_ParamLimits

0x6709,	// (0x0008de7b) cset_slider_pane_ParamLimits

0x672c,	// (0x0008de9e) main_cset_slider_pane_g1_ParamLimits

0x6741,	// (0x0008deb3) main_cset_slider_pane_g2_ParamLimits

0x068c,	// (0x00087dfe) main_cset_slider_pane_g3_ParamLimits

0x068c,	// (0x00087dfe) main_cset_slider_pane_g3

0x6756,	// (0x0008dec8) main_cset_slider_pane_g4_ParamLimits

0x6756,	// (0x0008dec8) main_cset_slider_pane_g4

0x6765,	// (0x0008ded7) main_cset_slider_pane_g5_ParamLimits

0x6765,	// (0x0008ded7) main_cset_slider_pane_g5

0x6773,	// (0x0008dee5) main_cset_slider_pane_g6_ParamLimits

0x6773,	// (0x0008dee5) main_cset_slider_pane_g6

0xf880,	// (0x00096ff2) main_cset_slider_pane_g_ParamLimits

0x06bc,	// (0x00087e2e) main_cset_slider_pane_t1_ParamLimits

0x6807,	// (0x0008df79) main_cset_slider_pane_t2_ParamLimits

0x6821,	// (0x0008df93) main_cset_slider_pane_t3_ParamLimits

0x683b,	// (0x0008dfad) main_cset_slider_pane_t4_ParamLimits

0x6859,	// (0x0008dfcb) main_cset_slider_pane_t5_ParamLimits

0x6877,	// (0x0008dfe9) main_cset_slider_pane_t6_ParamLimits

0x688e,	// (0x0008e000) main_cset_slider_pane_t7_ParamLimits

0x68bc,	// (0x0008e02e) main_cset_slider_pane_t8_ParamLimits

0x68bc,	// (0x0008e02e) main_cset_slider_pane_t8

0x68e4,	// (0x0008e056) main_cset_slider_pane_t9_ParamLimits

0x68e4,	// (0x0008e056) main_cset_slider_pane_t9

0x690c,	// (0x0008e07e) main_cset_slider_pane_t10_ParamLimits

0x690c,	// (0x0008e07e) main_cset_slider_pane_t10

0x6934,	// (0x0008e0a6) main_cset_slider_pane_t11_ParamLimits

0x6934,	// (0x0008e0a6) main_cset_slider_pane_t11

0x695e,	// (0x0008e0d0) main_cset_slider_pane_t12_ParamLimits

0x695e,	// (0x0008e0d0) main_cset_slider_pane_t12

0x697d,	// (0x0008e0ef) main_cset_slider_pane_t13_ParamLimits

0x697d,	// (0x0008e0ef) main_cset_slider_pane_t13

0xf8a5,	// (0x00097017) main_cset_slider_pane_t_ParamLimits

0xaded,	// (0x0009255f) bg_popup_sub_pane_cp011

0x07fd,	// (0x00087f6f) main_cset_text_pane_g1

0x0805,	// (0x00087f77) main_cset_text_pane_t1

0x0813,	// (0x00087f85) main_cset_text_pane_t2

0x0821,	// (0x00087f93) main_cset_text_pane_t3

0x082f,	// (0x00087fa1) main_cset_text_pane_t4

0x083d,	// (0x00087faf) main_cset_text_pane_t5

0x084b,	// (0x00087fbd) main_cset_text_pane_t6

0x0859,	// (0x00087fcb) main_cset_text_pane_t7

0x0006,

0xf932,	// (0x000970a4) main_cset_text_pane_t

0x1c34,	// (0x000893a6) main_cam4_burst_pane

0x1c34,	// (0x000893a6) main_cam5_pane

0x062d,	// (0x00087d9f) bg_button_pane_cp019

0x0636,	// (0x00087da8) bg_button_pane_cp020

0x0698,	// (0x00087e0a) main_cset_slider_pane_g7_ParamLimits

0x0698,	// (0x00087e0a) main_cset_slider_pane_g7

0x06a4,	// (0x00087e16) main_cset_slider_pane_g8_ParamLimits

0x06a4,	// (0x00087e16) main_cset_slider_pane_g8

0x6787,	// (0x0008def9) main_cset_slider_pane_g9_ParamLimits

0x6787,	// (0x0008def9) main_cset_slider_pane_g9

0x6793,	// (0x0008df05) main_cset_slider_pane_g10_ParamLimits

0x6793,	// (0x0008df05) main_cset_slider_pane_g10

0x679f,	// (0x0008df11) main_cset_slider_pane_g11_ParamLimits

0x679f,	// (0x0008df11) main_cset_slider_pane_g11

0x67ab,	// (0x0008df1d) main_cset_slider_pane_g12_ParamLimits

0x67ab,	// (0x0008df1d) main_cset_slider_pane_g12

0x67b7,	// (0x0008df29) main_cset_slider_pane_g13_ParamLimits

0x67b7,	// (0x0008df29) main_cset_slider_pane_g13

0x67c5,	// (0x0008df37) main_cset_slider_pane_g14_ParamLimits

0x67c5,	// (0x0008df37) main_cset_slider_pane_g14

0x67d3,	// (0x0008df45) main_cset_slider_pane_g15_ParamLimits

0x67d3,	// (0x0008df45) main_cset_slider_pane_g15

0x06e4,	// (0x00087e56) main_cset_slider_pane_t14_ParamLimits

0x06e4,	// (0x00087e56) main_cset_slider_pane_t14

0x071d,	// (0x00087e8f) main_cset_slider_pane_t15_ParamLimits

0x071d,	// (0x00087e8f) main_cset_slider_pane_t15

0x6e43,	// (0x0008e5b5) aid_cam4_burst_size_cell_ParamLimits

0x6e43,	// (0x0008e5b5) aid_cam4_burst_size_cell

0x6e5f,	// (0x0008e5d1) grid_cam4_burst_pane_ParamLimits

0x6e5f,	// (0x0008e5d1) grid_cam4_burst_pane

0x6e8f,	// (0x0008e601) linegrid_cam4_burst_pane_ParamLimits

0x6e8f,	// (0x0008e601) linegrid_cam4_burst_pane

0x6eaf,	// (0x0008e621) scroll_pane_cp30_ParamLimits

0x6eaf,	// (0x0008e621) scroll_pane_cp30

0x6ebb,	// (0x0008e62d) cell_cam4_burst_pane_ParamLimits

0x6ebb,	// (0x0008e62d) cell_cam4_burst_pane

0x0867,	// (0x00087fd9) linegrid_cam4_burst_pane_g1_ParamLimits

0x0867,	// (0x00087fd9) linegrid_cam4_burst_pane_g1

0x6ef7,	// (0x0008e669) linegrid_cam4_burst_pane_g2_ParamLimits

0x6ef7,	// (0x0008e669) linegrid_cam4_burst_pane_g2

0x0874,	// (0x00087fe6) linegrid_cam4_burst_pane_g3_ParamLimits

0x0874,	// (0x00087fe6) linegrid_cam4_burst_pane_g3

0x0002,

0xf941,	// (0x000970b3) linegrid_cam4_burst_pane_g_ParamLimits

0xf941,	// (0x000970b3) linegrid_cam4_burst_pane_g

0x6f08,	// (0x0008e67a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6f08,	// (0x0008e67a) linegrid_cam4_burst_pane_g3_copy1

0x0881,	// (0x00087ff3) linegrid_cam4_burst_pane_g4_ParamLimits

0x0881,	// (0x00087ff3) linegrid_cam4_burst_pane_g4

0x6f22,	// (0x0008e694) linegrid_cam4_burst_pane_g5_ParamLimits

0x6f22,	// (0x0008e694) linegrid_cam4_burst_pane_g5

0x6f33,	// (0x0008e6a5) linegrid_cam4_burst_pane_g6_ParamLimits

0x6f33,	// (0x0008e6a5) linegrid_cam4_burst_pane_g6

0x088e,	// (0x00088000) linegrid_cam4_burst_pane_g7_ParamLimits

0x088e,	// (0x00088000) linegrid_cam4_burst_pane_g7

0x6f44,	// (0x0008e6b6) cell_cam4_burst_pane_g1

0x08a7,	// (0x00088019) main_cam5_pane_t1_ParamLimits

0x08a7,	// (0x00088019) main_cam5_pane_t1

0x08b9,	// (0x0008802b) main_cam5_pane_t2_ParamLimits

0x08b9,	// (0x0008802b) main_cam5_pane_t2

0x08cb,	// (0x0008803d) main_cam5_pane_t3_ParamLimits

0x08cb,	// (0x0008803d) main_cam5_pane_t3

0x08dd,	// (0x0008804f) main_cam5_pane_t4_ParamLimits

0x08dd,	// (0x0008804f) main_cam5_pane_t4

0x08f5,	// (0x00088067) main_cam5_pane_t5_ParamLimits

0x08f5,	// (0x00088067) main_cam5_pane_t5

0x0909,	// (0x0008807b) main_cam5_pane_t6_ParamLimits

0x0909,	// (0x0008807b) main_cam5_pane_t6

0x091d,	// (0x0008808f) main_cam5_pane_t7_ParamLimits

0x091d,	// (0x0008808f) main_cam5_pane_t7

0x092f,	// (0x000880a1) main_cam5_pane_t8_ParamLimits

0x092f,	// (0x000880a1) main_cam5_pane_t8

0x094b,	// (0x000880bd) main_cam5_pane_t9_ParamLimits

0x094b,	// (0x000880bd) main_cam5_pane_t9

0x095d,	// (0x000880cf) main_cam5_pane_t10_ParamLimits

0x095d,	// (0x000880cf) main_cam5_pane_t10

0x096f,	// (0x000880e1) main_cam5_pane_t11_ParamLimits

0x096f,	// (0x000880e1) main_cam5_pane_t11

0x0981,	// (0x000880f3) main_cam5_pane_t12_ParamLimits

0x0981,	// (0x000880f3) main_cam5_pane_t12

0x0996,	// (0x00088108) main_cam5_pane_t13_ParamLimits

0x0996,	// (0x00088108) main_cam5_pane_t13

0x000c,

0xf94d,	// (0x000970bf) main_cam5_pane_t_ParamLimits

0xf94d,	// (0x000970bf) main_cam5_pane_t

0x1bd9,	// (0x0008934b) popup_scut_keymap_window_ParamLimits

0x1bd9,	// (0x0008934b) popup_scut_keymap_window

0x6f57,	// (0x0008e6c9) aid_size_cell_brow_shortcut

0xb792,	// (0x00092f04) bg_popup_window_pane_cp010

0x6f63,	// (0x0008e6d5) grid_scut_pane

0x6f6f,	// (0x0008e6e1) cell_scut_pane_ParamLimits

0x6f6f,	// (0x0008e6e1) cell_scut_pane

0x6f86,	// (0x0008e6f8) cell_scut_pane_g1

0x09b3,	// (0x00088125) cell_scut_pane_t1

0x09c2,	// (0x00088134) cell_scut_pane_t2

0x6f8f,	// (0x0008e701) cell_scut_pane_t3

0x0002,

0xf968,	// (0x000970da) cell_scut_pane_t

0x4ea0,	// (0x0008c612) main_mup3_pane_g8_ParamLimits

0x4ea0,	// (0x0008c612) main_mup3_pane_g8

0x6151,	// (0x0008d8c3) area_vitu2_query_pane_ParamLimits

0x6151,	// (0x0008d8c3) area_vitu2_query_pane

0x6d00,	// (0x0008e472) input_focus_pane_cp08

0x09d1,	// (0x00088143) area_vitu2_query_pane_g1

0x6f9d,	// (0x0008e70f) area_vitu2_query_pane_g2

0x0001,

0xf96f,	// (0x000970e1) area_vitu2_query_pane_g

0x6fae,	// (0x0008e720) area_vitu2_query_pane_t1_ParamLimits

0x6fae,	// (0x0008e720) area_vitu2_query_pane_t1

0x6fc2,	// (0x0008e734) area_vitu2_query_pane_t2_ParamLimits

0x6fc2,	// (0x0008e734) area_vitu2_query_pane_t2

0x6fd6,	// (0x0008e748) area_vitu2_query_pane_t3_ParamLimits

0x6fd6,	// (0x0008e748) area_vitu2_query_pane_t3

0x09dd,	// (0x0008814f) area_vitu2_query_pane_t4_ParamLimits

0x09dd,	// (0x0008814f) area_vitu2_query_pane_t4

0x0a05,	// (0x00088177) area_vitu2_query_pane_t5_ParamLimits

0x0a05,	// (0x00088177) area_vitu2_query_pane_t5

0x0a2d,	// (0x0008819f) area_vitu2_query_pane_t6_ParamLimits

0x0a2d,	// (0x0008819f) area_vitu2_query_pane_t6

0x0006,

0xf974,	// (0x000970e6) area_vitu2_query_pane_t_ParamLimits

0xf974,	// (0x000970e6) area_vitu2_query_pane_t

0x6ce8,	// (0x0008e45a) bg_button_pane_cp018

0x6ffe,	// (0x0008e770) bg_button_pane_cp021

0x700a,	// (0x0008e77c) bg_button_pane_cp022

0x702d,	// (0x0008e79f) input_focus_pane_cp09

0xbf9a,	// (0x0009370c) aid_size_touch_mv_arrow_left

0xbfc5,	// (0x00093737) aid_size_touch_mv_arrow_right

0x67eb,	// (0x0008df5d) main_cset_slider_pane_g16_ParamLimits

0x67eb,	// (0x0008df5d) main_cset_slider_pane_g16

0x67f9,	// (0x0008df6b) main_cset_slider_pane_g17_ParamLimits

0x67f9,	// (0x0008df6b) main_cset_slider_pane_g17

0x6f44,	// (0x0008e6b6) cell_cam4_burst_pane_g1_ParamLimits

0xaded,	// (0x0009255f) compa_mode_pane

0x6a40,	// (0x0008e1b2) popup_vtel_slider_window_g3_ParamLimits

0x6a40,	// (0x0008e1b2) popup_vtel_slider_window_g3

0x6a54,	// (0x0008e1c6) popup_vtel_slider_window_g4_ParamLimits

0x6a54,	// (0x0008e1c6) popup_vtel_slider_window_g4

0x6a68,	// (0x0008e1da) popup_vtel_slider_window_t1_ParamLimits

0x6a68,	// (0x0008e1da) popup_vtel_slider_window_t1

0x1c34,	// (0x000893a6) main_cl_pane

0x46f6,	// (0x0008be68) popup_imed_adjust2_window_ParamLimits

0xc375,	// (0x00093ae7) bg_tb_trans_pane_cp05_ParamLimits

0xde49,	// (0x000955bb) popup_imed_adjust2_window_g1_ParamLimits

0xde58,	// (0x000955ca) popup_imed_adjust2_window_g2_ParamLimits

0xde58,	// (0x000955ca) popup_imed_adjust2_window_g2

0xde64,	// (0x000955d6) popup_imed_adjust2_window_g3_ParamLimits

0xde64,	// (0x000955d6) popup_imed_adjust2_window_g3

0x0002,

0xf6f4,	// (0x00096e66) popup_imed_adjust2_window_g_ParamLimits

0xf6f4,	// (0x00096e66) popup_imed_adjust2_window_g

0xde70,	// (0x000955e2) popup_imed_adjust2_window_t1_ParamLimits

0xde88,	// (0x000955fa) slider_imed_adjust_pane_ParamLimits

0xde9c,	// (0x0009560e) slider_imed_adjust_pane_g1_ParamLimits

0xdeac,	// (0x0009561e) slider_imed_adjust_pane_g2_ParamLimits

0xdebc,	// (0x0009562e) slider_imed_adjust_pane_g3_ParamLimits

0xdecd,	// (0x0009563f) slider_imed_adjust_pane_g4_ParamLimits

0xf6fb,	// (0x00096e6d) slider_imed_adjust_pane_g_ParamLimits

0x5ea0,	// (0x0008d612) aid_touch_area_cam4_ParamLimits

0x5ea0,	// (0x0008d612) aid_touch_area_cam4

0x5eb0,	// (0x0008d622) battery_pane_cp01

0x5f37,	// (0x0008d6a9) main_camera4_pane_g6_ParamLimits

0x5f37,	// (0x0008d6a9) main_camera4_pane_g6

0x5f55,	// (0x0008d6c7) main_camera4_pane_t2_ParamLimits

0x5f55,	// (0x0008d6c7) main_camera4_pane_t2

0x0001,

0xf7f3,	// (0x00096f65) main_camera4_pane_t_ParamLimits

0xf7f3,	// (0x00096f65) main_camera4_pane_t

0x5fd6,	// (0x0008d748) aid_touch_area_vid4_ParamLimits

0x5fd6,	// (0x0008d748) aid_touch_area_vid4

0x6016,	// (0x0008d788) main_video4_pane_g5_ParamLimits

0x6016,	// (0x0008d788) main_video4_pane_g5

0x603a,	// (0x0008d7ac) vid4_progress_pane_ParamLimits

0x603a,	// (0x0008d7ac) vid4_progress_pane

0x06b0,	// (0x00087e22) main_cset_slider_pane_g18_ParamLimits

0x06b0,	// (0x00087e22) main_cset_slider_pane_g18

0x089b,	// (0x0008800d) cell_cam4_burst_pane_g2_ParamLimits

0x089b,	// (0x0008800d) cell_cam4_burst_pane_g2

0x0001,

0xf948,	// (0x000970ba) cell_cam4_burst_pane_g_ParamLimits

0xf948,	// (0x000970ba) cell_cam4_burst_pane_g

0x703d,	// (0x0008e7af) bg_cl_pane_ParamLimits

0x703d,	// (0x0008e7af) bg_cl_pane

0x7049,	// (0x0008e7bb) cl_header_pane_ParamLimits

0x7049,	// (0x0008e7bb) cl_header_pane

0x7055,	// (0x0008e7c7) cl_listscroll_pane_ParamLimits

0x7055,	// (0x0008e7c7) cl_listscroll_pane

0x0a79,	// (0x000881eb) bg_cl_pane_g1

0x0a81,	// (0x000881f3) bg_cl_pane_g2

0x0a89,	// (0x000881fb) bg_cl_pane_g3

0x0a91,	// (0x00088203) bg_cl_pane_g4

0x0a99,	// (0x0008820b) bg_cl_pane_g5

0x0aa1,	// (0x00088213) bg_cl_pane_g6

0x0aa9,	// (0x0008821b) bg_cl_pane_g7

0x0ab1,	// (0x00088223) bg_cl_pane_g8

0x0ab9,	// (0x0008822b) bg_cl_pane_g9

0x0008,

0xf983,	// (0x000970f5) bg_cl_pane_g

0x7061,	// (0x0008e7d3) aid_height_cl_leading_ParamLimits

0x7061,	// (0x0008e7d3) aid_height_cl_leading

0x706d,	// (0x0008e7df) aid_height_cl_text_ParamLimits

0x706d,	// (0x0008e7df) aid_height_cl_text

0xb4e0,	// (0x00092c52) bg_cl_header_pane_ParamLimits

0xb4e0,	// (0x00092c52) bg_cl_header_pane

0x7085,	// (0x0008e7f7) cl_header_pane_g1_ParamLimits

0x7085,	// (0x0008e7f7) cl_header_pane_g1

0x7092,	// (0x0008e804) cl_header_pane_t1_ParamLimits

0x7092,	// (0x0008e804) cl_header_pane_t1

0x0acd,	// (0x0008823f) cl_list_pane

0x0683,	// (0x00087df5) hc_scroll_pane_cp01

0xb994,	// (0x00093106) bg_cl_header_pane_g1

0x0543,	// (0x00087cb5) bg_cl_header_pane_g2

0xb9b4,	// (0x00093126) bg_cl_header_pane_g3

0x0553,	// (0x00087cc5) bg_cl_header_pane_g4

0x054b,	// (0x00087cbd) bg_cl_header_pane_g5

0x07be,	// (0x00087f30) bg_cl_header_pane_g6

0x056b,	// (0x00087cdd) bg_cl_header_pane_g7

0x0573,	// (0x00087ce5) bg_cl_header_pane_g8

0x0563,	// (0x00087cd5) bg_cl_header_pane_g9

0x0008,

0xf996,	// (0x00097108) bg_cl_header_pane_g

0x70a4,	// (0x0008e816) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x70a4,	// (0x0008e816) hc_cl_list_double_graphic_heading_pane

0x70b8,	// (0x0008e82a) hc_cl_list_single_graphic_pane_ParamLimits

0x70b8,	// (0x0008e82a) hc_cl_list_single_graphic_pane

0x70d2,	// (0x0008e844) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x70d2,	// (0x0008e844) hc_cl_list_single_graphic_pane_g1

0x70de,	// (0x0008e850) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x70de,	// (0x0008e850) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0009711b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0009711b) hc_cl_list_single_graphic_pane_g

0x70f2,	// (0x0008e864) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x70f2,	// (0x0008e864) hc_cl_list_single_graphic_pane_t1

0x70d2,	// (0x0008e844) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x70d2,	// (0x0008e844) hc_cl_list_double_graphic_heading_pane_g1

0x7107,	// (0x0008e879) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7107,	// (0x0008e879) hc_cl_list_double_graphic_heading_pane_g2

0x711b,	// (0x0008e88d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x711b,	// (0x0008e88d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9ae,	// (0x00097120) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9ae,	// (0x00097120) hc_cl_list_double_graphic_heading_pane_g

0x712f,	// (0x0008e8a1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x712f,	// (0x0008e8a1) hc_cl_list_double_graphic_heading_pane_t1

0x7144,	// (0x0008e8b6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7144,	// (0x0008e8b6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9b5,	// (0x00097127) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9b5,	// (0x00097127) hc_cl_list_double_graphic_heading_pane_t

0x7161,	// (0x0008e8d3) vid4_progress_pane_g1

0x7171,	// (0x0008e8e3) vid4_progress_pane_g2

0x7181,	// (0x0008e8f3) vid4_progress_pane_g3

0x7193,	// (0x0008e905) vid4_progress_pane_g4

0x0004,

0xf9ba,	// (0x0009712c) vid4_progress_pane_g

0x71ab,	// (0x0008e91d) vid4_progress_pane_t1

0x71c1,	// (0x0008e933) vid4_progress_pane_t2

0x0002,

0xf9c5,	// (0x00097137) vid4_progress_pane_t

0x71ec,	// (0x0008e95e) wait_bar_pane_cp07

0xd6ed,	// (0x00094e5f) blid_firmament_pane_ParamLimits

0xd730,	// (0x00094ea2) popup_blid_sat_info2_window_g1

0xd754,	// (0x00094ec6) popup_blid_sat_info2_window_t3

0xd762,	// (0x00094ed4) popup_blid_sat_info2_window_t4

0xd770,	// (0x00094ee2) popup_blid_sat_info2_window_t5

0xd77e,	// (0x00094ef0) popup_blid_sat_info2_window_t6

0xd78e,	// (0x00094f00) popup_blid_sat_info2_window_t7

0xd79c,	// (0x00094f0e) popup_blid_sat_info2_window_t8

0xd7aa,	// (0x00094f1c) popup_blid_sat_info2_window_t9

0xd7b8,	// (0x00094f2a) popup_blid_sat_info2_window_t10

0xd879,	// (0x00094feb) aid_firma_cardinal_ParamLimits

0xd88d,	// (0x00094fff) blid_firmament_pane_t1_ParamLimits

0xd8a4,	// (0x00095016) blid_firmament_pane_t2_ParamLimits

0xd8bb,	// (0x0009502d) blid_firmament_pane_t3_ParamLimits

0xd8d2,	// (0x00095044) blid_firmament_pane_t4_ParamLimits

0xf5ed,	// (0x00096d5f) blid_firmament_pane_t_ParamLimits

0xd8e9,	// (0x0009505b) blid_sat_info_pane_ParamLimits

0x465c,	// (0x0008bdce) main_cam_set_pane_ParamLimits

0x556a,	// (0x0008ccdc) aid_size_cell_colour_35_ParamLimits

0x5584,	// (0x0008ccf6) aid_size_cell_colour_112_ParamLimits

0x559b,	// (0x0008cd0d) aid_size_cell_effect_ParamLimits

0xb14f,	// (0x000928c1) bg_tb_trans_pane_cp02_ParamLimits

0xbe0b,	// (0x0009357d) heading_imed_pane_ParamLimits

0x55b5,	// (0x0008cd27) listscroll_imed_pane_ParamLimits

0xcbc6,	// (0x00094338) popup_call2_audio_first_window_g5_ParamLimits

0xcbc6,	// (0x00094338) popup_call2_audio_first_window_g5

0x5ba0,	// (0x0008d312) aid_size_touch_image3_arrow_left_ParamLimits

0x5ba0,	// (0x0008d312) aid_size_touch_image3_arrow_left

0x5bb6,	// (0x0008d328) aid_size_touch_image3_arrow_right_ParamLimits

0x5bb6,	// (0x0008d328) aid_size_touch_image3_arrow_right

0x71d6,	// (0x0008e948) vid4_progress_pane_t3

0x570f,	// (0x0008ce81) main_hwr_training_symbol_option_pane_ParamLimits

0x570f,	// (0x0008ce81) main_hwr_training_symbol_option_pane

0xdfe7,	// (0x00095759) popup_hwr_training_preview_window_ParamLimits

0xdfe7,	// (0x00095759) popup_hwr_training_preview_window

0x5770,	// (0x0008cee2) hwr_training_navi_pane_g5_ParamLimits

0x5770,	// (0x0008cee2) hwr_training_navi_pane_g5

0x0531,	// (0x00087ca3) popup_char_count_window

0x1c1a,	// (0x0008938c) bg_popup_sub_pane_cp20_ParamLimits

0x6b5b,	// (0x0008e2cd) list_vitu2_match_list_pane_ParamLimits

0x6b67,	// (0x0008e2d9) vitu2_page_scroll_pane_ParamLimits

0x6b67,	// (0x0008e2d9) vitu2_page_scroll_pane

0x0adf,	// (0x00088251) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0adf,	// (0x00088251) list_single_hwr_training_symbol_option_pane

0x0af2,	// (0x00088264) list_single_hwr_training_symbol_option_pane_g1

0x0afa,	// (0x0008826c) list_single_hwr_training_symbol_option_pane_t1

0x0b08,	// (0x0008827a) bg_button_pane_cp023

0x0b11,	// (0x00088283) bg_button_pane_cp024

0x9ff6,	// (0x00091768) vitu2_page_scroll_pane_g1

0x9ffe,	// (0x00091770) vitu2_page_scroll_pane_g2

0x0001,

0xf9cc,	// (0x0009713e) vitu2_page_scroll_pane_g

0xa006,	// (0x00091778) vitu2_page_scroll_pane_t1

0xb6eb,	// (0x00092e5d) popup_char_count_window_g1

0xa015,	// (0x00091787) popup_char_count_window_g2

0xf014,	// (0x00096786) popup_char_count_window_g3

0x0002,

0xf9d1,	// (0x00097143) popup_char_count_window_g

0xa01e,	// (0x00091790) popup_char_count_window_t1

0x1c34,	// (0x000893a6) main_vded2_pane

0xde35,	// (0x000955a7) aid_size_cell_imed_line

0xde3f,	// (0x000955b1) grid_imed_line_width_pane

0x60a6,	// (0x0008d818) vid4_indicators_pane_g4

0xa02c,	// (0x0009179e) cell_imed_line_width_pane_ParamLimits

0xa02c,	// (0x0009179e) cell_imed_line_width_pane

0xa040,	// (0x000917b2) cell_imed_line_width_pane_g1

0xa049,	// (0x000917bb) cell_imed_line_width_pane_g2

0x0001,

0xf9d8,	// (0x0009714a) cell_imed_line_width_pane_g

0x7211,	// (0x0008e983) main_vded2_pane_g1_ParamLimits

0x7211,	// (0x0008e983) main_vded2_pane_g1

0x721e,	// (0x0008e990) main_vded2_pane_g2_ParamLimits

0x721e,	// (0x0008e990) main_vded2_pane_g2

0x0001,

0xf9dd,	// (0x0009714f) main_vded2_pane_g_ParamLimits

0xf9dd,	// (0x0009714f) main_vded2_pane_g

0x722c,	// (0x0008e99e) vded2_slider_pane_ParamLimits

0x722c,	// (0x0008e99e) vded2_slider_pane

0x7239,	// (0x0008e9ab) aid_size_touch_vded2_end

0x7243,	// (0x0008e9b5) aid_size_touch_vded2_playhead

0xa051,	// (0x000917c3) aid_size_touch_vded2_start

0xa059,	// (0x000917cb) vded2_slider_bg_pane

0xa062,	// (0x000917d4) vded2_slider_pane_g1

0xa06b,	// (0x000917dd) vded2_slider_pane_g2

0x724b,	// (0x0008e9bd) vded2_slider_pane_g3

0x0002,

0xf9e2,	// (0x00097154) vded2_slider_pane_g

0xa073,	// (0x000917e5) vded2_slider_bg_pane_g1

0xa07c,	// (0x000917ee) vded2_slider_bg_pane_g2

0xa085,	// (0x000917f7) vded2_slider_bg_pane_g3

0x0002,

0xf9e9,	// (0x0009715b) vded2_slider_bg_pane_g

0x3f9d,	// (0x0008b70f) aid_postcard_touch_down_pane_ParamLimits

0x3f9d,	// (0x0008b70f) aid_postcard_touch_down_pane

0x3fad,	// (0x0008b71f) aid_postcard_touch_up_pane_ParamLimits

0x3fad,	// (0x0008b71f) aid_postcard_touch_up_pane

0x1c34,	// (0x000893a6) main_blid2_pane

0x4685,	// (0x0008bdf7) popup_blid2_search_window

0xaded,	// (0x0009255f) blid2_gps_pane

0xaded,	// (0x0009255f) blid2_navig_pane

0xaded,	// (0x0009255f) blid2_search_pane

0xaded,	// (0x0009255f) blid2_tripm_pane

0x7254,	// (0x0008e9c6) blid2_search_pane_g1_ParamLimits

0x7254,	// (0x0008e9c6) blid2_search_pane_g1

0x7264,	// (0x0008e9d6) blid2_search_pane_t1_ParamLimits

0x7264,	// (0x0008e9d6) blid2_search_pane_t1

0x7276,	// (0x0008e9e8) aid_size_cell_blid2_gps_ParamLimits

0x7276,	// (0x0008e9e8) aid_size_cell_blid2_gps

0x7286,	// (0x0008e9f8) blid2_gps_pane_g1_ParamLimits

0x7286,	// (0x0008e9f8) blid2_gps_pane_g1

0x7292,	// (0x0008ea04) grid_blid2_satellite_pane_ParamLimits

0x7292,	// (0x0008ea04) grid_blid2_satellite_pane

0x72a2,	// (0x0008ea14) blid2_navig_pane_g1_ParamLimits

0x72a2,	// (0x0008ea14) blid2_navig_pane_g1

0x72ae,	// (0x0008ea20) blid2_navig_pane_t1_ParamLimits

0x72ae,	// (0x0008ea20) blid2_navig_pane_t1

0x72c0,	// (0x0008ea32) blid2_navig_pane_t2_ParamLimits

0x72c0,	// (0x0008ea32) blid2_navig_pane_t2

0x0001,

0xf9f0,	// (0x00097162) blid2_navig_pane_t_ParamLimits

0xf9f0,	// (0x00097162) blid2_navig_pane_t

0x72d2,	// (0x0008ea44) blid2_navig_ring_pane_ParamLimits

0x72d2,	// (0x0008ea44) blid2_navig_ring_pane

0x72e2,	// (0x0008ea54) blid2_speed_pane_ParamLimits

0x72e2,	// (0x0008ea54) blid2_speed_pane

0x72ee,	// (0x0008ea60) blid2_tripm_pane_g1_ParamLimits

0x72ee,	// (0x0008ea60) blid2_tripm_pane_g1

0x72fe,	// (0x0008ea70) blid2_tripm_pane_g2_ParamLimits

0x72fe,	// (0x0008ea70) blid2_tripm_pane_g2

0x730a,	// (0x0008ea7c) blid2_tripm_pane_g3_ParamLimits

0x730a,	// (0x0008ea7c) blid2_tripm_pane_g3

0x7316,	// (0x0008ea88) blid2_tripm_pane_g4_ParamLimits

0x7316,	// (0x0008ea88) blid2_tripm_pane_g4

0x7322,	// (0x0008ea94) blid2_tripm_pane_g5_ParamLimits

0x7322,	// (0x0008ea94) blid2_tripm_pane_g5

0x0005,

0xf9f5,	// (0x00097167) blid2_tripm_pane_g_ParamLimits

0xf9f5,	// (0x00097167) blid2_tripm_pane_g

0x733e,	// (0x0008eab0) blid2_tripm_pane_t1_ParamLimits

0x733e,	// (0x0008eab0) blid2_tripm_pane_t1

0x7352,	// (0x0008eac4) blid2_tripm_pane_t2_ParamLimits

0x7352,	// (0x0008eac4) blid2_tripm_pane_t2

0x7364,	// (0x0008ead6) blid2_tripm_pane_t3_ParamLimits

0x7364,	// (0x0008ead6) blid2_tripm_pane_t3

0x0003,

0xfa02,	// (0x00097174) blid2_tripm_pane_t_ParamLimits

0xfa02,	// (0x00097174) blid2_tripm_pane_t

0x7396,	// (0x0008eb08) cell_blid2_satellite_pane_ParamLimits

0x7396,	// (0x0008eb08) cell_blid2_satellite_pane

0x73b0,	// (0x0008eb22) cell_blid2_satellite_pane_g1

0xa08e,	// (0x00091800) cell_blid2_satellite_pane_t1

0xb52c,	// (0x00092c9e) blid2_speed_pane_g1

0xa09c,	// (0x0009180e) blid2_speed_pane_t1

0xa0aa,	// (0x0009181c) blid2_speed_pane_t2

0x0001,

0xfa0b,	// (0x0009717d) blid2_speed_pane_t

0xb52c,	// (0x00092c9e) blid2_navig_ring_pane_g1

0x73b9,	// (0x0008eb2b) blid2_navig_ring_pane_g2

0x73c1,	// (0x0008eb33) blid2_navig_ring_pane_g3

0x73c9,	// (0x0008eb3b) blid2_navig_ring_pane_g4

0x73d1,	// (0x0008eb43) blid2_navig_ring_pane_g5

0x0004,

0xfa10,	// (0x00097182) blid2_navig_ring_pane_g

0xaded,	// (0x0009255f) bg_popup_window_pane_cp011

0xa0b8,	// (0x0009182a) popup_blid2_search_window_g1

0xa0c0,	// (0x00091832) popup_blid2_search_window_t1

0xa0ce,	// (0x00091840) popup_blid2_search_window_t2

0x0001,

0xfa1b,	// (0x0009718d) popup_blid2_search_window_t

0xb89a,	// (0x0009300c) main_browser_pane_g1

0xb58a,	// (0x00092cfc) main_browser_pane_ParamLimits

0x465c,	// (0x0008bdce) bg_button_pane_cp011_ParamLimits

0x6410,	// (0x0008db82) cell_vitu2_function_pane_g1_ParamLimits

0xc375,	// (0x00093ae7) bg_popup_sub_pane_cp22_ParamLimits

0x6d00,	// (0x0008e472) input_focus_pane_cp08_ParamLimits

0x6d1b,	// (0x0008e48d) popup_vitu2_query_button_pane_ParamLimits

0x6d1b,	// (0x0008e48d) popup_vitu2_query_button_pane

0x6d2a,	// (0x0008e49c) popup_vitu2_query_input_button_pane

0x07f1,	// (0x00087f63) popup_vitu2_query_window_g1_ParamLimits

0x6d34,	// (0x0008e4a6) popup_vitu2_query_window_g2_ParamLimits

0xf91c,	// (0x0009708e) popup_vitu2_query_window_g_ParamLimits

0xaded,	// (0x0009255f) bg_button_pane_cp026

0x73d9,	// (0x0008eb4b) popup_vitu2_query_input_button_pane_g1

0xaded,	// (0x0009255f) bg_button_pane_cp025

0xa0dc,	// (0x0009184e) popup_vitu2_query_button_pane_t1

0x4b58,	// (0x0008c2ca) main_mp3_pane_t6

0x4b68,	// (0x0008c2da) popup_slider_window_cp01

0x5f8b,	// (0x0008d6fd) cam4_battery_pane

0x6065,	// (0x0008d7d7) cam4_battery_pane_cp02

0x7159,	// (0x0008e8cb) cam4_battery_pane_cp01

0x7159,	// (0x0008e8cb) cam4_battery_pane_cp03

0x9fc9,	// (0x0009173b) cam4_battery_pane_g1

0xb52c,	// (0x00092c9e) cam4_battery_pane_g2

0x0001,

0xfa20,	// (0x00097192) cam4_battery_pane_g

0xd7c6,	// (0x00094f38) popup_blid_sat_info2_window_t11

0xbf9a,	// (0x0009370c) aid_size_touch_mv_arrow_left_ParamLimits

0xbfc5,	// (0x00093737) aid_size_touch_mv_arrow_right_ParamLimits

0xc023,	// (0x00093795) navi_pane_g1_ParamLimits

0xc02f,	// (0x000937a1) navi_pane_g2_ParamLimits

0xc05d,	// (0x000937cf) navi_pane_g3_ParamLimits

0xf311,	// (0x00096a83) navi_pane_g_ParamLimits

0x3bd8,	// (0x0008b34a) navi_pane_mv_t1_ParamLimits

0x55c1,	// (0x0008cd33) grid_imed_effect_pane_ParamLimits

0x2671,	// (0x00089de3) aid_placing_vt_slider_lsc

0xb7e9,	// (0x00092f5b) aid_placing_vt_slider_prt

0xb14f,	// (0x000928c1) bg_tb_trans_pane_cp01_ParamLimits

0xda64,	// (0x000951d6) popup_image_details_window_g1_ParamLimits

0xda77,	// (0x000951e9) popup_image_details_window_g2_ParamLimits

0xda8c,	// (0x000951fe) popup_image_details_window_g3_ParamLimits

0xda8c,	// (0x000951fe) popup_image_details_window_g3

0xf62d,	// (0x00096d9f) popup_image_details_window_g_ParamLimits

0xdaa0,	// (0x00095212) popup_image_details_window_t1_ParamLimits

0xdab2,	// (0x00095224) popup_image_details_window_t2_ParamLimits

0xdacb,	// (0x0009523d) popup_image_details_window_t3_ParamLimits

0xdadf,	// (0x00095251) popup_image_details_window_t4_ParamLimits

0xdafa,	// (0x0009526c) popup_image_details_window_t5_ParamLimits

0xf634,	// (0x00096da6) popup_image_details_window_t_ParamLimits

0x7079,	// (0x0008e7eb) cl_header_name_pane_ParamLimits

0x7079,	// (0x0008e7eb) cl_header_name_pane

0x73e1,	// (0x0008eb53) cl_header_name_pane_t1_ParamLimits

0x73e1,	// (0x0008eb53) cl_header_name_pane_t1

0x73f8,	// (0x0008eb6a) cl_header_name_pane_t2_ParamLimits

0x73f8,	// (0x0008eb6a) cl_header_name_pane_t2

0x7422,	// (0x0008eb94) cl_header_name_pane_t3_ParamLimits

0x7422,	// (0x0008eb94) cl_header_name_pane_t3

0x0002,

0xfa25,	// (0x00097197) cl_header_name_pane_t_ParamLimits

0xfa25,	// (0x00097197) cl_header_name_pane_t

0xc0ec,	// (0x0009385e) navi_pane_mv_g2_ParamLimits

0x04fc,	// (0x00087c6e) field_vitu2_entry_pane_g1_ParamLimits

0x0508,	// (0x00087c7a) field_vitu2_entry_pane_g2_ParamLimits

0xc397,	// (0x00093b09) field_vitu2_entry_pane_g3_ParamLimits

0xc397,	// (0x00093b09) field_vitu2_entry_pane_g3

0xf825,	// (0x00096f97) field_vitu2_entry_pane_g_ParamLimits

0x62d6,	// (0x0008da48) cell_vitu2_itu_pane_g1_ParamLimits

0x62ee,	// (0x0008da60) cell_vitu2_itu_pane_g2_ParamLimits

0x62ee,	// (0x0008da60) cell_vitu2_itu_pane_g2

0x0001,

0xf831,	// (0x00096fa3) cell_vitu2_itu_pane_g_ParamLimits

0xf831,	// (0x00096fa3) cell_vitu2_itu_pane_g

0x465c,	// (0x0008bdce) bg_vkb2_func_pane_cp05_ParamLimits

0x465c,	// (0x0008bdce) bg_vkb2_func_pane_cp05

0x465c,	// (0x0008bdce) bg_vkb2_func_pane_cp03

0x465c,	// (0x0008bdce) bg_vkb2_func_pane_cp04

0x465c,	// (0x0008bdce) bg_vkb2_func_pane_cp10_ParamLimits

0x465c,	// (0x0008bdce) bg_vkb2_func_pane_cp10

0x701b,	// (0x0008e78d) bg_vkb2_func_pane_cp08

0x6ce8,	// (0x0008e45a) bg_vkb2_func_pane_cp06

0x6ffe,	// (0x0008e770) bg_vkb2_func_pane_cp07

0x0b1a,	// (0x0008828c) bg_vkb2_func_pane_cp11_ParamLimits

0x0b1a,	// (0x0008828c) bg_vkb2_func_pane_cp11

0x9fe1,	// (0x00091753) bg_vkb2_func_pane_cp12_ParamLimits

0x9fe1,	// (0x00091753) bg_vkb2_func_pane_cp12

0xaded,	// (0x0009255f) bg_vkb2_func_pane_cp09

0x0543,	// (0x00087cb5) bg_vkb2_func_pane_g1

0xb9b4,	// (0x00093126) bg_vkb2_func_pane_g2

0x054b,	// (0x00087cbd) bg_vkb2_func_pane_g3

0x0553,	// (0x00087cc5) bg_vkb2_func_pane_g4

0x07be,	// (0x00087f30) bg_vkb2_func_pane_g5

0x056b,	// (0x00087cdd) bg_vkb2_func_pane_g6

0x0573,	// (0x00087ce5) bg_vkb2_func_pane_g7

0x0563,	// (0x00087cd5) bg_vkb2_func_pane_g8

0xb994,	// (0x00093106) bg_vkb2_func_pane_g9

0x0008,

0xfa2c,	// (0x0009719e) bg_vkb2_func_pane_g

0x7330,	// (0x0008eaa2) blid2_tripm_pane_g6_ParamLimits

0x7330,	// (0x0008eaa2) blid2_tripm_pane_g6

0x0442,	// (0x00087bb4) mp4_progress_pane_g1

0x738a,	// (0x0008eafc) blid2_tripm_values_pane_ParamLimits

0x738a,	// (0x0008eafc) blid2_tripm_values_pane

0x7447,	// (0x0008ebb9) blid2_tripm_values_pane_t1

0x7455,	// (0x0008ebc7) blid2_tripm_values_pane_t2

0x7463,	// (0x0008ebd5) blid2_tripm_values_pane_t3

0x7471,	// (0x0008ebe3) blid2_tripm_values_pane_t4

0x747f,	// (0x0008ebf1) blid2_tripm_values_pane_t5

0x748d,	// (0x0008ebff) blid2_tripm_values_pane_t6

0x749b,	// (0x0008ec0d) blid2_tripm_values_pane_t7

0x74a9,	// (0x0008ec1b) blid2_tripm_values_pane_t8

0x74b7,	// (0x0008ec29) blid2_tripm_values_pane_t9

0x0008,

0xfa3f,	// (0x000971b1) blid2_tripm_values_pane_t

0x26b1,	// (0x00089e23) call_video_pane_t1_ParamLimits

0x26d2,	// (0x00089e44) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0009692c) call_video_pane_t_ParamLimits

0x3ee7,	// (0x0008b659) msg_header_pane_g1_ParamLimits

0xc2d0,	// (0x00093a42) msg_header_pane_g2_ParamLimits

0xc2d0,	// (0x00093a42) msg_header_pane_g2

0x0001,

0xf3af,	// (0x00096b21) msg_header_pane_g_ParamLimits

0xf3af,	// (0x00096b21) msg_header_pane_g

0xb58a,	// (0x00092cfc) main_clock2_pane_ParamLimits

0x533b,	// (0x0008caad) grid_clock2_toolbar_pane_ParamLimits

0x533b,	// (0x0008caad) grid_clock2_toolbar_pane

0x533b,	// (0x0008caad) listscroll_clock2_pane_ParamLimits

0x533b,	// (0x0008caad) listscroll_clock2_pane

0x53eb,	// (0x0008cb5d) main_clock2_pane_t3_ParamLimits

0x53eb,	// (0x0008cb5d) main_clock2_pane_t3

0x53fd,	// (0x0008cb6f) main_clock2_pane_t4_ParamLimits

0x53fd,	// (0x0008cb6f) main_clock2_pane_t4

0xa0ea,	// (0x0009185c) cell_clock2_toolbar_pane

0xa0f2,	// (0x00091864) cell_clock2_toolbar_pane_cp01

0xa0f2,	// (0x00091864) cell_clock2_toolbar_pane_cp02

0xa0fa,	// (0x0009186c) cell_clock2_toolbar_pane_cp03

0xa102,	// (0x00091874) list_clock2_pane

0xbf1f,	// (0x00093691) scroll_pane_cp10

0xa10a,	// (0x0009187c) list_single_clock2_pane_ParamLimits

0xa10a,	// (0x0009187c) list_single_clock2_pane

0xb792,	// (0x00092f04) list_highlight_pane_cp08

0xa117,	// (0x00091889) list_single_clock2_pane_t1

0xa125,	// (0x00091897) list_single_clock2_pane_t2

0x0001,

0xfa52,	// (0x000971c4) list_single_clock2_pane_t

0xaded,	// (0x0009255f) bg_button_pane_cp10

0xa133,	// (0x000918a5) cell_clock2_toolbar_pane_g1

0x3f0b,	// (0x0008b67d) aid_main_viewer_pane_g1_ParamLimits

0x3f0b,	// (0x0008b67d) aid_main_viewer_pane_g1

0x3f17,	// (0x0008b689) aid_main_viewer_pane_g2_ParamLimits

0x3f17,	// (0x0008b689) aid_main_viewer_pane_g2

0x3f23,	// (0x0008b695) aid_main_viewer_pane_g3_ParamLimits

0x3f23,	// (0x0008b695) aid_main_viewer_pane_g3

0x3f34,	// (0x0008b6a6) aid_main_viewer_pane_g4_ParamLimits

0x3f34,	// (0x0008b6a6) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x00096b32) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x00096b32) aid_main_viewer_pane_g

0x464f,	// (0x0008bdc1) main_calc_pane_ParamLimits

0x466a,	// (0x0008bddc) main_dialer2_pane_ParamLimits

0x1c34,	// (0x000893a6) main_cam6_pane

0x1c34,	// (0x000893a6) main_vid6_pane

0x5347,	// (0x0008cab9) listscroll_gen_pane_cp06_ParamLimits

0x5347,	// (0x0008cab9) listscroll_gen_pane_cp06

0x540f,	// (0x0008cb81) main_clock2_pane_t5_ParamLimits

0x540f,	// (0x0008cb81) main_clock2_pane_t5

0x545c,	// (0x0008cbce) aid_call2_pane_cp10_ParamLimits

0x546e,	// (0x0008cbe0) aid_call_pane_cp10_ParamLimits

0xbf8e,	// (0x00093700) popup_clock_analogue_window_cp10_g1_ParamLimits

0xbf8e,	// (0x00093700) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5480,	// (0x0008cbf2) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5480,	// (0x0008cbf2) popup_clock_analogue_window_cp10_g4_ParamLimits

0xbf8e,	// (0x00093700) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6e9,	// (0x00096e5b) popup_clock_analogue_window_cp10_g_ParamLimits

0x5496,	// (0x0008cc08) popup_clock_analogue_window_cp10_t1_ParamLimits

0x04ad,	// (0x00087c1f) cell_dialer2_keypad_pane_g2_ParamLimits

0x04ad,	// (0x00087c1f) cell_dialer2_keypad_pane_g2

0x0001,

0xf7c4,	// (0x00096f36) cell_dialer2_keypad_pane_g_ParamLimits

0xf7c4,	// (0x00096f36) cell_dialer2_keypad_pane_g

0xb536,	// (0x00092ca8) cell_dialer2_keypad_pane_t1

0x66da,	// (0x0008de4c) main_cset_text2_pane_ParamLimits

0x66da,	// (0x0008de4c) main_cset_text2_pane

0x09d1,	// (0x00088143) area_vitu2_query_pane_g1_ParamLimits

0x6f9d,	// (0x0008e70f) area_vitu2_query_pane_g2_ParamLimits

0xf96f,	// (0x000970e1) area_vitu2_query_pane_g_ParamLimits

0x0a55,	// (0x000881c7) area_vitu2_query_pane_t7_ParamLimits

0x0a55,	// (0x000881c7) area_vitu2_query_pane_t7

0x6ce8,	// (0x0008e45a) bg_button_pane_cp018_ParamLimits

0x6ffe,	// (0x0008e770) bg_button_pane_cp021_ParamLimits

0x700a,	// (0x0008e77c) bg_button_pane_cp022_ParamLimits

0x701b,	// (0x0008e78d) bg_vkb2_func_pane_cp08_ParamLimits

0x6ce8,	// (0x0008e45a) bg_vkb2_func_pane_cp06_ParamLimits

0x6ffe,	// (0x0008e770) bg_vkb2_func_pane_cp07_ParamLimits

0x702d,	// (0x0008e79f) input_focus_pane_cp09_ParamLimits

0x74c5,	// (0x0008ec37) cam6_autofocus_pane_ParamLimits

0x74c5,	// (0x0008ec37) cam6_autofocus_pane

0x74e1,	// (0x0008ec53) cam6_image_uncrop_pane_ParamLimits

0x74e1,	// (0x0008ec53) cam6_image_uncrop_pane

0x751a,	// (0x0008ec8c) cam6_indi_pane_ParamLimits

0x751a,	// (0x0008ec8c) cam6_indi_pane

0x7534,	// (0x0008eca6) cam6_mode_pane_ParamLimits

0x7534,	// (0x0008eca6) cam6_mode_pane

0x7548,	// (0x0008ecba) cam6_timer_pane_ParamLimits

0x7548,	// (0x0008ecba) cam6_timer_pane

0x755c,	// (0x0008ecce) cam6_zoom_pane_ParamLimits

0x755c,	// (0x0008ecce) cam6_zoom_pane

0x7577,	// (0x0008ece9) cam6_mode_pane_g1_ParamLimits

0x7577,	// (0x0008ece9) cam6_mode_pane_g1

0x7583,	// (0x0008ecf5) cam6_mode_pane_g2_ParamLimits

0x7583,	// (0x0008ecf5) cam6_mode_pane_g2

0x758f,	// (0x0008ed01) cam6_mode_pane_g3_ParamLimits

0x758f,	// (0x0008ed01) cam6_mode_pane_g3

0x759b,	// (0x0008ed0d) cam6_mode_pane_g4_ParamLimits

0x759b,	// (0x0008ed0d) cam6_mode_pane_g4

0x0003,

0xfa57,	// (0x000971c9) cam6_mode_pane_g_ParamLimits

0xfa57,	// (0x000971c9) cam6_mode_pane_g

0xd5a2,	// (0x00094d14) bg_tb_trans_pane_cp08_ParamLimits

0xd5a2,	// (0x00094d14) bg_tb_trans_pane_cp08

0xa13b,	// (0x000918ad) cam6_battery_pane_ParamLimits

0xa13b,	// (0x000918ad) cam6_battery_pane

0xa151,	// (0x000918c3) cam6_indi_pane_g1_ParamLimits

0xa151,	// (0x000918c3) cam6_indi_pane_g1

0xa163,	// (0x000918d5) cam6_indi_pane_g2_ParamLimits

0xa163,	// (0x000918d5) cam6_indi_pane_g2

0xa175,	// (0x000918e7) cam6_indi_pane_g3_ParamLimits

0xa175,	// (0x000918e7) cam6_indi_pane_g3

0x0002,

0xfa60,	// (0x000971d2) cam6_indi_pane_g_ParamLimits

0xfa60,	// (0x000971d2) cam6_indi_pane_g

0xa187,	// (0x000918f9) cam6_indi_pane_t1_ParamLimits

0xa187,	// (0x000918f9) cam6_indi_pane_t1

0x60e1,	// (0x0008d853) cam6_autofocus_pane_g1

0x60d9,	// (0x0008d84b) cam6_autofocus_pane_g2

0x60f1,	// (0x0008d863) cam6_autofocus_pane_g3

0x60e9,	// (0x0008d85b) cam6_autofocus_pane_g4

0x0003,

0xfa67,	// (0x000971d9) cam6_autofocus_pane_g

0xa1ad,	// (0x0009191f) cam6_timer_pane_g1

0xa1b5,	// (0x00091927) cam6_timer_pane_t1

0xa1c3,	// (0x00091935) cam6_zoom_cont_pane

0xa1cb,	// (0x0009193d) cam6_zoom_pane_g1

0xa1d4,	// (0x00091946) cam6_zoom_pane_g2

0x75a7,	// (0x0008ed19) cam6_zoom_pane_g3

0x0002,

0xfa70,	// (0x000971e2) cam6_zoom_pane_g

0xb52c,	// (0x00092c9e) cam6_battery_pane_g1

0xb52c,	// (0x00092c9e) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x000967fe) cam6_battery_pane_g

0xa1cb,	// (0x0009193d) cam6_zoom_cont_pane_g1

0xa1d4,	// (0x00091946) cam6_zoom_cont_pane_g2

0xa1dd,	// (0x0009194f) cam6_zoom_cont_pane_g3

0x0002,

0xfa77,	// (0x000971e9) cam6_zoom_cont_pane_g

0x75c5,	// (0x0008ed37) cam6_mode_pane_cp_ParamLimits

0x75c5,	// (0x0008ed37) cam6_mode_pane_cp

0x75d9,	// (0x0008ed4b) cam6_zoom_pane_cp_ParamLimits

0x75d9,	// (0x0008ed4b) cam6_zoom_pane_cp

0x75f1,	// (0x0008ed63) vid6_image_uncrop_cif_pane_ParamLimits

0x75f1,	// (0x0008ed63) vid6_image_uncrop_cif_pane

0x761d,	// (0x0008ed8f) vid6_image_uncrop_nhd_pane_ParamLimits

0x761d,	// (0x0008ed8f) vid6_image_uncrop_nhd_pane

0x763a,	// (0x0008edac) vid6_image_uncrop_vga_pane_ParamLimits

0x763a,	// (0x0008edac) vid6_image_uncrop_vga_pane

0x7659,	// (0x0008edcb) vid6_image_uncrop_wvga_pane_ParamLimits

0x7659,	// (0x0008edcb) vid6_image_uncrop_wvga_pane

0x7676,	// (0x0008ede8) vid6_indi_pane_ParamLimits

0x7676,	// (0x0008ede8) vid6_indi_pane

0xd5a2,	// (0x00094d14) bg_tb_trans_pane_cp09_ParamLimits

0xd5a2,	// (0x00094d14) bg_tb_trans_pane_cp09

0xa1f5,	// (0x00091967) cam6_battery_pane_cp_ParamLimits

0xa1f5,	// (0x00091967) cam6_battery_pane_cp

0xa201,	// (0x00091973) vid6_indi_pane_g1_ParamLimits

0xa201,	// (0x00091973) vid6_indi_pane_g1

0xa213,	// (0x00091985) vid6_indi_pane_g2_ParamLimits

0xa213,	// (0x00091985) vid6_indi_pane_g2

0xa225,	// (0x00091997) vid6_indi_pane_g3_ParamLimits

0xa225,	// (0x00091997) vid6_indi_pane_g3

0xa23a,	// (0x000919ac) vid6_indi_pane_g4_ParamLimits

0xa23a,	// (0x000919ac) vid6_indi_pane_g4

0xa24f,	// (0x000919c1) vid6_indi_pane_g5_ParamLimits

0xa24f,	// (0x000919c1) vid6_indi_pane_g5

0x0004,

0xfa7e,	// (0x000971f0) vid6_indi_pane_g_ParamLimits

0xfa7e,	// (0x000971f0) vid6_indi_pane_g

0xa269,	// (0x000919db) vid6_indi_pane_t1_ParamLimits

0xa269,	// (0x000919db) vid6_indi_pane_t1

0xa27f,	// (0x000919f1) vid6_indi_pane_t2_ParamLimits

0xa27f,	// (0x000919f1) vid6_indi_pane_t2

0xa2a7,	// (0x00091a19) vid6_indi_pane_t3_ParamLimits

0xa2a7,	// (0x00091a19) vid6_indi_pane_t3

0xa2cf,	// (0x00091a41) vid6_indi_pane_t4_ParamLimits

0xa2cf,	// (0x00091a41) vid6_indi_pane_t4

0x0003,

0xfa89,	// (0x000971fb) vid6_indi_pane_t_ParamLimits

0xfa89,	// (0x000971fb) vid6_indi_pane_t

0xa2f3,	// (0x00091a65) wait_bar_pane_cp08

0x7699,	// (0x0008ee0b) main_cset_text2_pane_t1_ParamLimits

0x7699,	// (0x0008ee0b) main_cset_text2_pane_t1

0x75b0,	// (0x0008ed22) listscroll_gen_pane_cp06_t1_ParamLimits

0x75b0,	// (0x0008ed22) listscroll_gen_pane_cp06_t1

0x1c34,	// (0x000893a6) main_cam6_set_pane

0x9fd3,	// (0x00091745) bg_tb_trans_pane_cp06_ParamLimits

0x5f93,	// (0x0008d705) cam4_indicators_pane_g1_ParamLimits

0x5fa4,	// (0x0008d716) cam4_indicators_pane_g2_ParamLimits

0xf801,	// (0x00096f73) cam4_indicators_pane_g_ParamLimits

0x5fbc,	// (0x0008d72e) cam4_indicators_pane_t1_ParamLimits

0x465c,	// (0x0008bdce) bg_tb_trans_pane_cp07_ParamLimits

0x606d,	// (0x0008d7df) vid4_indicators_pane_g1_ParamLimits

0x6081,	// (0x0008d7f3) vid4_indicators_pane_g2_ParamLimits

0x6095,	// (0x0008d807) vid4_indicators_pane_g3_ParamLimits

0x60a6,	// (0x0008d818) vid4_indicators_pane_g4_ParamLimits

0xf813,	// (0x00096f85) vid4_indicators_pane_g_ParamLimits

0x60c2,	// (0x0008d834) vid4_indicators_pane_t1_ParamLimits

0x7161,	// (0x0008e8d3) vid4_progress_pane_g1_ParamLimits

0x7171,	// (0x0008e8e3) vid4_progress_pane_g2_ParamLimits

0x7181,	// (0x0008e8f3) vid4_progress_pane_g3_ParamLimits

0x7193,	// (0x0008e905) vid4_progress_pane_g4_ParamLimits

0xf9ba,	// (0x0009712c) vid4_progress_pane_g_ParamLimits

0x71ab,	// (0x0008e91d) vid4_progress_pane_t1_ParamLimits

0x71c1,	// (0x0008e933) vid4_progress_pane_t2_ParamLimits

0x71d6,	// (0x0008e948) vid4_progress_pane_t3_ParamLimits

0xf9c5,	// (0x00097137) vid4_progress_pane_t_ParamLimits

0x71ec,	// (0x0008e95e) wait_bar_pane_cp07_ParamLimits

0x76d0,	// (0x0008ee42) main_cam6_set_pane_g2_ParamLimits

0x76d0,	// (0x0008ee42) main_cam6_set_pane_g2

0x76dc,	// (0x0008ee4e) main_cset6_listscroll_pane_ParamLimits

0x76dc,	// (0x0008ee4e) main_cset6_listscroll_pane

0x7707,	// (0x0008ee79) main_cset6_slider_pane_ParamLimits

0x7707,	// (0x0008ee79) main_cset6_slider_pane

0x7713,	// (0x0008ee85) main_cset6_text2_pane_ParamLimits

0x7713,	// (0x0008ee85) main_cset6_text2_pane

0xa302,	// (0x00091a74) main_cset6_text_pane

0xa30a,	// (0x00091a7c) main_cset_list_pane_copy1_ParamLimits

0xa30a,	// (0x00091a7c) main_cset_list_pane_copy1

0xa31a,	// (0x00091a8c) scroll_pane_cp028_copy1

0x7726,	// (0x0008ee98) cset_list_set_pane_copy1

0x773c,	// (0x0008eeae) aid_position_infowindow_above_copy1

0x7744,	// (0x0008eeb6) aid_position_infowindow_below_copy1

0x0414,	// (0x00087b86) cset_list_set_pane_g1_copy1

0xe090,	// (0x00095802) cset_list_set_pane_g3_copy1_ParamLimits

0xe090,	// (0x00095802) cset_list_set_pane_g3_copy1

0xe09f,	// (0x00095811) cset_list_set_pane_t1_copy1_ParamLimits

0xe09f,	// (0x00095811) cset_list_set_pane_t1_copy1

0xb14f,	// (0x000928c1) list_highlight_pane_cp021_copy1_ParamLimits

0xb14f,	// (0x000928c1) list_highlight_pane_cp021_copy1

0xa323,	// (0x00091a95) cset6_slider_pane_ParamLimits

0xa323,	// (0x00091a95) cset6_slider_pane

0xa34f,	// (0x00091ac1) main_cset6_slider_pane_g1_ParamLimits

0xa34f,	// (0x00091ac1) main_cset6_slider_pane_g1

0x774c,	// (0x0008eebe) main_cset6_slider_pane_g2_ParamLimits

0x774c,	// (0x0008eebe) main_cset6_slider_pane_g2

0xa377,	// (0x00091ae9) main_cset6_slider_pane_g3_ParamLimits

0xa377,	// (0x00091ae9) main_cset6_slider_pane_g3

0x7774,	// (0x0008eee6) main_cset6_slider_pane_g4_ParamLimits

0x7774,	// (0x0008eee6) main_cset6_slider_pane_g4

0x7780,	// (0x0008eef2) main_cset6_slider_pane_g5_ParamLimits

0x7780,	// (0x0008eef2) main_cset6_slider_pane_g5

0x0698,	// (0x00087e0a) main_cset6_slider_pane_g7_ParamLimits

0x0698,	// (0x00087e0a) main_cset6_slider_pane_g7

0x06a4,	// (0x00087e16) main_cset6_slider_pane_g8_ParamLimits

0x06a4,	// (0x00087e16) main_cset6_slider_pane_g8

0x778e,	// (0x0008ef00) main_cset6_slider_pane_g9_ParamLimits

0x778e,	// (0x0008ef00) main_cset6_slider_pane_g9

0x779a,	// (0x0008ef0c) main_cset6_slider_pane_g10_ParamLimits

0x779a,	// (0x0008ef0c) main_cset6_slider_pane_g10

0x77a6,	// (0x0008ef18) main_cset6_slider_pane_g11_ParamLimits

0x77a6,	// (0x0008ef18) main_cset6_slider_pane_g11

0x77b2,	// (0x0008ef24) main_cset6_slider_pane_g12_ParamLimits

0x77b2,	// (0x0008ef24) main_cset6_slider_pane_g12

0xa383,	// (0x00091af5) main_cset6_slider_pane_g13_ParamLimits

0xa383,	// (0x00091af5) main_cset6_slider_pane_g13

0xa38f,	// (0x00091b01) main_cset6_slider_pane_g14_ParamLimits

0xa38f,	// (0x00091b01) main_cset6_slider_pane_g14

0x77be,	// (0x0008ef30) main_cset6_slider_pane_g15_ParamLimits

0x77be,	// (0x0008ef30) main_cset6_slider_pane_g15

0x77d6,	// (0x0008ef48) main_cset6_slider_pane_g16_ParamLimits

0x77d6,	// (0x0008ef48) main_cset6_slider_pane_g16

0x77e4,	// (0x0008ef56) main_cset6_slider_pane_g17_ParamLimits

0x77e4,	// (0x0008ef56) main_cset6_slider_pane_g17

0x0011,

0xfa92,	// (0x00097204) main_cset6_slider_pane_g_ParamLimits

0xfa92,	// (0x00097204) main_cset6_slider_pane_g

0xa3a7,	// (0x00091b19) main_cset6_slider_pane_t1_ParamLimits

0xa3a7,	// (0x00091b19) main_cset6_slider_pane_t1

0x77fe,	// (0x0008ef70) main_cset6_slider_pane_t2_ParamLimits

0x77fe,	// (0x0008ef70) main_cset6_slider_pane_t2

0x7829,	// (0x0008ef9b) main_cset6_slider_pane_t3_ParamLimits

0x7829,	// (0x0008ef9b) main_cset6_slider_pane_t3

0x7854,	// (0x0008efc6) main_cset6_slider_pane_t4_ParamLimits

0x7854,	// (0x0008efc6) main_cset6_slider_pane_t4

0x787f,	// (0x0008eff1) main_cset6_slider_pane_t5_ParamLimits

0x787f,	// (0x0008eff1) main_cset6_slider_pane_t5

0xa3e8,	// (0x00091b5a) main_cset6_slider_pane_t7_ParamLimits

0xa3e8,	// (0x00091b5a) main_cset6_slider_pane_t7

0x78ac,	// (0x0008f01e) main_cset6_slider_pane_t8_ParamLimits

0x78ac,	// (0x0008f01e) main_cset6_slider_pane_t8

0x78d0,	// (0x0008f042) main_cset6_slider_pane_t9_ParamLimits

0x78d0,	// (0x0008f042) main_cset6_slider_pane_t9

0x78f4,	// (0x0008f066) main_cset6_slider_pane_t10_ParamLimits

0x78f4,	// (0x0008f066) main_cset6_slider_pane_t10

0x7918,	// (0x0008f08a) main_cset6_slider_pane_t11_ParamLimits

0x7918,	// (0x0008f08a) main_cset6_slider_pane_t11

0xa41e,	// (0x00091b90) main_cset6_slider_pane_t14_ParamLimits

0xa41e,	// (0x00091b90) main_cset6_slider_pane_t14

0xa457,	// (0x00091bc9) main_cset6_slider_pane_t15_ParamLimits

0xa457,	// (0x00091bc9) main_cset6_slider_pane_t15

0x000b,

0xfab7,	// (0x00097229) main_cset6_slider_pane_t_ParamLimits

0xfab7,	// (0x00097229) main_cset6_slider_pane_t

0x0766,	// (0x00087ed8) cset_slider_pane_g1_copy1

0x077b,	// (0x00087eed) cset_slider_pane_g2_copy1

0x0784,	// (0x00087ef6) cset_slider_pane_g3_copy1

0xaded,	// (0x0009255f) bg_popup_sub_pane_cp011_copy1

0xa499,	// (0x00091c0b) main_cset_text_pane_g1_copy1

0x0805,	// (0x00087f77) main_cset_text_pane_t1_copy1

0x0813,	// (0x00087f85) main_cset_text_pane_t2_copy1

0x0821,	// (0x00087f93) main_cset_text_pane_t3_copy1

0x082f,	// (0x00087fa1) main_cset_text_pane_t4_copy1

0x083d,	// (0x00087faf) main_cset_text_pane_t5_copy1

0xa4a1,	// (0x00091c13) main_cset_text_pane_t6_copy1

0xa4af,	// (0x00091c21) main_cset_text_pane_t7_copy1

0x795b,	// (0x0008f0cd) main_cset_text2_pane_t1_copy1

0x465c,	// (0x0008bdce) main_ncimui_pane

0x46bb,	// (0x0008be2d) popup_query_ncimui_window_ParamLimits

0x46bb,	// (0x0008be2d) popup_query_ncimui_window

0xdbd7,	// (0x00095349) field_cale_ev2_pane_g4_ParamLimits

0xdbd7,	// (0x00095349) field_cale_ev2_pane_g4

0x584b,	// (0x0008cfbd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x584b,	// (0x0008cfbd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf79b,	// (0x00096f0d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf79b,	// (0x00096f0d) cell_video_dialer_keypad_pane_g

0x5863,	// (0x0008cfd5) cell_video_dialer_keypad_pane_t1

0xaded,	// (0x0009255f) bg_popup_window_pane_cp012

0xbe17,	// (0x00093589) heading_pane_cp06

0xa4e7,	// (0x00091c59) ncim_query_content_pane

0xaded,	// (0x0009255f) bg_popup_heading_pane_cp01

0xa4ef,	// (0x00091c61) ncim_heading_pane_t1

0xa4fd,	// (0x00091c6f) ncim_indicator_popup_pane

0xa50f,	// (0x00091c81) ncim_query_button_pane

0xa523,	// (0x00091c95) ncim_query_content_pane_t1

0xa535,	// (0x00091ca7) ncim_query_content_pane_t2

0x0005,

0xfafb,	// (0x0009726d) ncim_query_content_pane_t

0xa56f,	// (0x00091ce1) ncim_query_list_pane

0xa581,	// (0x00091cf3) ncim_query_popup_pane

0xa4fd,	// (0x00091c6f) ncim_indicator_popup_pane_ParamLimits

0x7aaf,	// (0x0008f221) ncim_query_content_pane_g1_ParamLimits

0x7aaf,	// (0x0008f221) ncim_query_content_pane_g1

0xa523,	// (0x00091c95) ncim_query_content_pane_t1_ParamLimits

0xa535,	// (0x00091ca7) ncim_query_content_pane_t2_ParamLimits

0x7abb,	// (0x0008f22d) ncim_query_content_pane_t3_ParamLimits

0x7abb,	// (0x0008f22d) ncim_query_content_pane_t3

0x7ad8,	// (0x0008f24a) ncim_query_content_pane_t4_ParamLimits

0x7ad8,	// (0x0008f24a) ncim_query_content_pane_t4

0x7af5,	// (0x0008f267) ncim_query_content_pane_t5_ParamLimits

0x7af5,	// (0x0008f267) ncim_query_content_pane_t5

0xa547,	// (0x00091cb9) ncim_query_content_pane_t6_ParamLimits

0xa547,	// (0x00091cb9) ncim_query_content_pane_t6

0xfafb,	// (0x0009726d) ncim_query_content_pane_t_ParamLimits

0xa56f,	// (0x00091ce1) ncim_query_list_pane_ParamLimits

0xa581,	// (0x00091cf3) ncim_query_popup_pane_ParamLimits

0xa595,	// (0x00091d07) wait_bar_pane_cp04

0xaded,	// (0x0009255f) input_focus_pane_cp011

0xa59d,	// (0x00091d0f) ncim_query_popup_pane_t1

0xa5ab,	// (0x00091d1d) ncim_list_query_list_pane_ParamLimits

0xa5ab,	// (0x00091d1d) ncim_list_query_list_pane

0xaded,	// (0x0009255f) bg_button_pane_cp027

0xa5b8,	// (0x00091d2a) ncim_query_button_pane_g1

0xaded,	// (0x0009255f) list_highlight_pane_cp012

0xa5c2,	// (0x00091d34) ncim_list_query_list_pane_g1

0xa5ca,	// (0x00091d3c) ncim_list_query_list_pane_t1

0x5fb0,	// (0x0008d722) cam4_indicators_pane_g3_ParamLimits

0x5fb0,	// (0x0008d722) cam4_indicators_pane_g3

0x60b2,	// (0x0008d824) vid4_indicators_pane_g5_ParamLimits

0x60b2,	// (0x0008d824) vid4_indicators_pane_g5

0x719f,	// (0x0008e911) vid4_progress_pane_g5_ParamLimits

0x719f,	// (0x0008e911) vid4_progress_pane_g5

0x799b,	// (0x0008f10d) main_ncimui_pane_g1

0x7a03,	// (0x0008f175) ncimui_group_query_pane_ParamLimits

0x7a03,	// (0x0008f175) ncimui_group_query_pane

0x7a4b,	// (0x0008f1bd) ncimui_list_pane_ParamLimits

0x7a4b,	// (0x0008f1bd) ncimui_list_pane

0x7a72,	// (0x0008f1e4) ncimui_text_pane_ParamLimits

0x7a72,	// (0x0008f1e4) ncimui_text_pane

0x7b12,	// (0x0008f284) ncimui_text_pane_t1_ParamLimits

0x7b12,	// (0x0008f284) ncimui_text_pane_t1

0xa5d8,	// (0x00091d4a) ncimui_list_single_graphic_pane_ParamLimits

0xa5d8,	// (0x00091d4a) ncimui_list_single_graphic_pane

0x7b31,	// (0x0008f2a3) ncimui_query_pane_ParamLimits

0x7b31,	// (0x0008f2a3) ncimui_query_pane

0xaded,	// (0x0009255f) list_highlight_pane_cp013

0xa5e8,	// (0x00091d5a) ncim_list_query_list_pane_t1_copy1

0xa5f6,	// (0x00091d68) ncim_list_single_graphic_pane_g1

0x7b44,	// (0x0008f2b6) ncim_query_button_pane_cp01

0x7b50,	// (0x0008f2c2) ncim_query_entry_pane_ParamLimits

0x7b50,	// (0x0008f2c2) ncim_query_entry_pane

0x7b63,	// (0x0008f2d5) ncimui_query_pane_g1

0x7b6f,	// (0x0008f2e1) ncimui_query_pane_t1_ParamLimits

0x7b6f,	// (0x0008f2e1) ncimui_query_pane_t1

0xb14f,	// (0x000928c1) input_focus_pane_cp012

0xa5fe,	// (0x00091d70) ncim_query_entry_pane_t1

0xb58a,	// (0x00092cfc) main_im_pane_ParamLimits

0x465c,	// (0x0008bdce) main_mobtv_pane_ParamLimits

0x465c,	// (0x0008bdce) main_mobtv_pane

0x77f2,	// (0x0008ef64) main_cset6_slider_pane_g18_ParamLimits

0x77f2,	// (0x0008ef64) main_cset6_slider_pane_g18

0xa39b,	// (0x00091b0d) main_cset6_slider_pane_g19_ParamLimits

0xa39b,	// (0x00091b0d) main_cset6_slider_pane_g19

0xc397,	// (0x00093b09) bg_main_mobtv_pane_ParamLimits

0xc397,	// (0x00093b09) bg_main_mobtv_pane

0x7b88,	// (0x0008f2fa) main_mobtv_info_pane

0x7b93,	// (0x0008f305) main_mobtv_loading_pane_ParamLimits

0x7b93,	// (0x0008f305) main_mobtv_loading_pane

0xa610,	// (0x00091d82) main_mobtv_pg_channel_list_pane

0xa61a,	// (0x00091d8c) main_mobtv_pg_hdr_pane

0x7ba0,	// (0x0008f312) main_mobtv_programe_curr_pane_ParamLimits

0x7ba0,	// (0x0008f312) main_mobtv_programe_curr_pane

0x7bad,	// (0x0008f31f) main_mobtv_programe_next_pane_ParamLimits

0x7bad,	// (0x0008f31f) main_mobtv_programe_next_pane

0xa623,	// (0x00091d95) popup_mobtv_noti_window

0xb52c,	// (0x00092c9e) main_tv_pg_hdr_pane_g1

0xa62b,	// (0x00091d9d) main_tv_pg_hdr_pane_g2

0xa633,	// (0x00091da5) main_tv_pg_hdr_pane_g3

0xa63b,	// (0x00091dad) main_tv_pg_hdr_pane_g4

0xa643,	// (0x00091db5) main_tv_pg_hdr_pane_g5

0xa64d,	// (0x00091dbf) main_tv_pg_hdr_pane_g6

0xa657,	// (0x00091dc9) main_tv_pg_hdr_pane_g7

0xa661,	// (0x00091dd3) main_tv_pg_hdr_pane_g8

0xa66b,	// (0x00091ddd) main_tv_pg_hdr_pane_g9

0xa675,	// (0x00091de7) main_tv_pg_hdr_pane_g10

0xa67f,	// (0x00091df1) main_tv_pg_hdr_pane_g11

0x000a,

0xfb08,	// (0x0009727a) main_tv_pg_hdr_pane_g

0xa689,	// (0x00091dfb) main_tv_pg_hdr_pane_t1

0xa697,	// (0x00091e09) main_tv_pg_hdr_pane_t2

0xa6a5,	// (0x00091e17) main_tv_pg_hdr_pane_t3

0xa6b5,	// (0x00091e27) main_tv_pg_hdr_pane_t4

0xa6c5,	// (0x00091e37) main_tv_pg_hdr_pane_t5

0x0004,

0xfb1f,	// (0x00097291) main_tv_pg_hdr_pane_t

0xa6d5,	// (0x00091e47) single_mobtv_pg_channel_pane_ParamLimits

0xa6d5,	// (0x00091e47) single_mobtv_pg_channel_pane

0xa6e7,	// (0x00091e59) single_mobtv_pg_channel_table_pane

0xbab7,	// (0x00093229) single_mobtv_pg_channel_thumb_pane

0xa6f0,	// (0x00091e62) single_tv_pg_channel_pane_g1

0xa6f9,	// (0x00091e6b) single_tv_pg_channel_pane_g2

0x0001,

0xfb2a,	// (0x0009729c) single_tv_pg_channel_pane_g

0xb4ee,	// (0x00092c60) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xb4ee,	// (0x00092c60) bg_single_mobtv_pg_channel_thumb_pane

0xa702,	// (0x00091e74) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xa702,	// (0x00091e74) single_mobtv_pg_channel_thumb_pane_g1

0xa710,	// (0x00091e82) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xa710,	// (0x00091e82) single_mobtv_pg_channel_thumb_pane_g2

0xa71c,	// (0x00091e8e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xa71c,	// (0x00091e8e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb2f,	// (0x000972a1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb2f,	// (0x000972a1) single_mobtv_pg_channel_thumb_pane_g

0xa728,	// (0x00091e9a) single_mobtv_pg_channel_thumb_pane_t1

0xa736,	// (0x00091ea8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb36,	// (0x000972a8) single_mobtv_pg_channel_thumb_pane_t

0xb52c,	// (0x00092c9e) bg_single_mobtv_pg_channel_table_pane_g1

0xb52c,	// (0x00092c9e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x000967fe) bg_single_mobtv_pg_channel_table_pane_g

0xa744,	// (0x00091eb6) single_mobtv_pg_channel_table_pane_t1

0xa752,	// (0x00091ec4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb3b,	// (0x000972ad) single_mobtv_pg_channel_table_pane_t

0x7bc2,	// (0x0008f334) main_mobtv_info_pane_g1_ParamLimits

0x7bc2,	// (0x0008f334) main_mobtv_info_pane_g1

0x7bde,	// (0x0008f350) main_mobtv_info_pane_t1_ParamLimits

0x7bde,	// (0x0008f350) main_mobtv_info_pane_t1

0x7c56,	// (0x0008f3c8) main_mobtv_info_pane_t2_ParamLimits

0x7c56,	// (0x0008f3c8) main_mobtv_info_pane_t2

0x0002,

0xfb45,	// (0x000972b7) main_mobtv_info_pane_t_ParamLimits

0xfb45,	// (0x000972b7) main_mobtv_info_pane_t

0x7ce5,	// (0x0008f457) wait_bar_pane_cp05

0x7cf7,	// (0x0008f469) main_mobtv_loading_pane_g1_ParamLimits

0x7cf7,	// (0x0008f469) main_mobtv_loading_pane_g1

0x7d05,	// (0x0008f477) main_mobtv_loading_pane_g2_ParamLimits

0x7d05,	// (0x0008f477) main_mobtv_loading_pane_g2

0x7d11,	// (0x0008f483) main_mobtv_loading_pane_g3_ParamLimits

0x7d11,	// (0x0008f483) main_mobtv_loading_pane_g3

0x0002,

0xfb4c,	// (0x000972be) main_mobtv_loading_pane_g_ParamLimits

0xfb4c,	// (0x000972be) main_mobtv_loading_pane_g

0xa760,	// (0x00091ed2) main_mobtv_loading_pane_t1_ParamLimits

0xa760,	// (0x00091ed2) main_mobtv_loading_pane_t1

0xa778,	// (0x00091eea) main_mobtv_loading_pane_t2_ParamLimits

0xa778,	// (0x00091eea) main_mobtv_loading_pane_t2

0x0001,

0xfb53,	// (0x000972c5) main_mobtv_loading_pane_t_ParamLimits

0xfb53,	// (0x000972c5) main_mobtv_loading_pane_t

0x7d1f,	// (0x0008f491) wait_bar_pane_cp06_ParamLimits

0x7d1f,	// (0x0008f491) wait_bar_pane_cp06

0xa79c,	// (0x00091f0e) main_mobtv_programe_curr_pane_t1

0xa7aa,	// (0x00091f1c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb58,	// (0x000972ca) main_mobtv_programe_curr_pane_t

0xa7b8,	// (0x00091f2a) main_mobtv_programe_next_pane_t1

0xa7c6,	// (0x00091f38) main_mobtv_programe_next_pane_t2

0xa7d4,	// (0x00091f46) main_mobtv_programe_next_pane_t3

0x0002,

0xfb5d,	// (0x000972cf) main_mobtv_programe_next_pane_t

0xaded,	// (0x0009255f) bg_popup_mobtv_noti_window_pane

0xa7e2,	// (0x00091f54) popup_mobtv_noti_window_g1

0xa7ea,	// (0x00091f5c) popup_mobtv_noti_window_t1

0xa7f8,	// (0x00091f6a) popup_mobtv_noti_window_t2

0x0001,

0xfb64,	// (0x000972d6) popup_mobtv_noti_window_t

0xb52c,	// (0x00092c9e) bg_popup_mobtv_noti_window_pane_g1

0x1c34,	// (0x000893a6) sc_clock_pane

0x1c34,	// (0x000893a6) main_fs_bigclock_pane

0x7378,	// (0x0008eaea) blid2_tripm_pane_t4_ParamLimits

0x7378,	// (0x0008eaea) blid2_tripm_pane_t4

0xb4fc,	// (0x00092c6e) sc_clock_pane_g1_ParamLimits

0xb4fc,	// (0x00092c6e) sc_clock_pane_g1

0xb54a,	// (0x00092cbc) sc_clock_pane_t1_ParamLimits

0xb54a,	// (0x00092cbc) sc_clock_pane_t1

0xb54a,	// (0x00092cbc) sc_clock_pane_t2_ParamLimits

0xb54a,	// (0x00092cbc) sc_clock_pane_t2

0xb54a,	// (0x00092cbc) sc_clock_pane_t3_ParamLimits

0xb54a,	// (0x00092cbc) sc_clock_pane_t3

0x0004,

0xfb69,	// (0x000972db) sc_clock_pane_t_ParamLimits

0xfb69,	// (0x000972db) sc_clock_pane_t

0x8750,	// (0x0008fec2) main_fs_bigclock_indicator_pane_ParamLimits

0x8750,	// (0x0008fec2) main_fs_bigclock_indicator_pane

0x7d66,	// (0x0008f4d8) main_fs_bigclock_pane_g1_ParamLimits

0x7d66,	// (0x0008f4d8) main_fs_bigclock_pane_g1

0x875c,	// (0x0008fece) main_fs_bigclock_pane_t1_ParamLimits

0x875c,	// (0x0008fece) main_fs_bigclock_pane_t1

0x876e,	// (0x0008fee0) main_fs_bigclock_pane_t2_ParamLimits

0x876e,	// (0x0008fee0) main_fs_bigclock_pane_t2

0x8782,	// (0x0008fef4) main_fs_bigclock_pane_t3_ParamLimits

0x8782,	// (0x0008fef4) main_fs_bigclock_pane_t3

0x0002,

0xfcf7,	// (0x00097469) main_fs_bigclock_pane_t_ParamLimits

0xfcf7,	// (0x00097469) main_fs_bigclock_pane_t

0xe600,	// (0x00095d72) main_fs_bigclock_indicator_pane_g1

0xa517,	// (0x00091c89) ncim_query_content_pane_g2_ParamLimits

0xa517,	// (0x00091c89) ncim_query_content_pane_g2

0x0001,

0xfaf6,	// (0x00097268) ncim_query_content_pane_g_ParamLimits

0xfaf6,	// (0x00097268) ncim_query_content_pane_g

0xb54a,	// (0x00092cbc) sc_clock_pane_t4_ParamLimits

0xb54a,	// (0x00092cbc) sc_clock_pane_t4

0x465c,	// (0x0008bdce) main_radioblah_pane

0x5e6e,	// (0x0008d5e0) cell_call4_button_pane_t1_copy1_ParamLimits

0x5e6e,	// (0x0008d5e0) cell_call4_button_pane_t1_copy1

0x79b5,	// (0x0008f127) main_ncimui_pane_t1_ParamLimits

0x79b5,	// (0x0008f127) main_ncimui_pane_t1

0x79cf,	// (0x0008f141) main_ncimui_pane_t2_ParamLimits

0x79cf,	// (0x0008f141) main_ncimui_pane_t2

0x0002,

0xfaef,	// (0x00097261) main_ncimui_pane_t_ParamLimits

0xfaef,	// (0x00097261) main_ncimui_pane_t

0xc375,	// (0x00093ae7) main_radioblah_anim_pane_ParamLimits

0xc375,	// (0x00093ae7) main_radioblah_anim_pane

0xc375,	// (0x00093ae7) main_radioblah_info_pane_ParamLimits

0xc375,	// (0x00093ae7) main_radioblah_info_pane

0xc383,	// (0x00093af5) main_radioblah_pane_t1_ParamLimits

0xc383,	// (0x00093af5) main_radioblah_pane_t1

0xc383,	// (0x00093af5) main_radioblah_pane_t2_ParamLimits

0xc383,	// (0x00093af5) main_radioblah_pane_t2

0x0003,

0xfb8a,	// (0x000972fc) main_radioblah_pane_t_ParamLimits

0xfb8a,	// (0x000972fc) main_radioblah_pane_t

0xb4e0,	// (0x00092c52) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb4e0,	// (0x00092c52) main_radioblah_rocker_ctrl_pane

0xd5b0,	// (0x00094d22) main_radioblah_info_pane_t1_ParamLimits

0xd5b0,	// (0x00094d22) main_radioblah_info_pane_t1

0xa96e,	// (0x000920e0) main_radioblah_info_pane_t2_ParamLimits

0xa96e,	// (0x000920e0) main_radioblah_info_pane_t2

0x0003,

0xfb93,	// (0x00097305) main_radioblah_info_pane_t_ParamLimits

0xfb93,	// (0x00097305) main_radioblah_info_pane_t

0xb52c,	// (0x00092c9e) main_radioblah_rocker_ctrl_pane_g1

0xb52c,	// (0x00092c9e) main_radioblah_rocker_ctrl_pane_g2

0xb52c,	// (0x00092c9e) main_radioblah_rocker_ctrl_pane_g3

0xb52c,	// (0x00092c9e) main_radioblah_rocker_ctrl_pane_g4

0xb52c,	// (0x00092c9e) main_radioblah_rocker_ctrl_pane_g5

0xb52c,	// (0x00092c9e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb9c,	// (0x0009730e) main_radioblah_rocker_ctrl_pane_g

0x795b,	// (0x0008f0cd) main_cset_text2_pane_t1_copy1_ParamLimits

0x5ee1,	// (0x0008d653) cam4_image_uncrop_qvga_pane

0x6022,	// (0x0008d794) vid4_image_uncrop_qcif_pane

0x750c,	// (0x0008ec7e) cam6_image_uncrop_qvga_pane_ParamLimits

0x750c,	// (0x0008ec7e) cam6_image_uncrop_qvga_pane

0xa1e5,	// (0x00091957) vid6_image_uncrop_qcif_pane_ParamLimits

0xa1e5,	// (0x00091957) vid6_image_uncrop_qcif_pane

0xaded,	// (0x0009255f) bg_popup_preview_window_pane_cp03

0xa4bd,	// (0x00091c2f) list_cset_text2_pane

0xa4c5,	// (0x00091c37) main_cset6_text2_pane_g1

0xa4cd,	// (0x00091c3f) main_cset6_text2_pane_t1

0x7daa,	// (0x0008f51c) list_cset_text2_pane_t1_ParamLimits

0x7daa,	// (0x0008f51c) list_cset_text2_pane_t1

0x465c,	// (0x0008bdce) main_radioblah_pane_ParamLimits

0x7cd1,	// (0x0008f443) main_mobtv_info_pane_t3_ParamLimits

0x7cd1,	// (0x0008f443) main_mobtv_info_pane_t3

0xc397,	// (0x00093b09) main_radioblah_pane_g1

0xa93e,	// (0x000920b0) main_radioblah_info_pane_g1

0xb54a,	// (0x00092cbc) main_radioblah_info_pane_t3_ParamLimits

0xb54a,	// (0x00092cbc) main_radioblah_info_pane_t3

0x36ff,	// (0x0008ae71) highlight_cell_cale_month_pane_ParamLimits

0x36ff,	// (0x0008ae71) highlight_cell_cale_month_pane

0x1c34,	// (0x000893a6) main_phob_fisheye_pane

0xdc88,	// (0x000953fa) scroll_pane_cp0031_ParamLimits

0xdc88,	// (0x000953fa) scroll_pane_cp0031

0xa2f3,	// (0x00091a65) wait_bar_pane_cp08_ParamLimits

0x7726,	// (0x0008ee98) cset_list_set_pane_copy1_ParamLimits

0xa9bd,	// (0x0009212f) highlight_cell_cale_month_pane_g1

0x7dcb,	// (0x0008f53d) highlight_cell_cale_month_pane_t1

0x0acd,	// (0x0008823f) list_gen_pane_cp01

0x0683,	// (0x00087df5) scroll_pane_01

0x7dd9,	// (0x0008f54b) list_single_double_fisheye_pane

0x7de2,	// (0x0008f554) list_double_fisheye_pane_g1_ParamLimits

0x7de2,	// (0x0008f554) list_double_fisheye_pane_g1

0x7dee,	// (0x0008f560) list_double_fisheye_pane_g2_ParamLimits

0x7dee,	// (0x0008f560) list_double_fisheye_pane_g2

0x7e02,	// (0x0008f574) list_double_fisheye_pane_g3_ParamLimits

0x7e02,	// (0x0008f574) list_double_fisheye_pane_g3

0x0004,

0xfba9,	// (0x0009731b) list_double_fisheye_pane_g_ParamLimits

0xfba9,	// (0x0009731b) list_double_fisheye_pane_g

0x7e2b,	// (0x0008f59d) list_double_fisheye_pane_t1_ParamLimits

0x7e2b,	// (0x0008f59d) list_double_fisheye_pane_t1

0x7e46,	// (0x0008f5b8) list_double_fisheye_pane_t2_ParamLimits

0x7e46,	// (0x0008f5b8) list_double_fisheye_pane_t2

0x0001,

0xfbb4,	// (0x00097326) list_double_fisheye_pane_t_ParamLimits

0xfbb4,	// (0x00097326) list_double_fisheye_pane_t

0x1c34,	// (0x000893a6) main_call5_pane

0xb4e0,	// (0x00092c52) sc_swipe_pane_ParamLimits

0xb4e0,	// (0x00092c52) sc_swipe_pane

0x7e74,	// (0x0008f5e6) call5_image_pane_ParamLimits

0x7e74,	// (0x0008f5e6) call5_image_pane

0x7e84,	// (0x0008f5f6) call5_swipe_1_pane_ParamLimits

0x7e84,	// (0x0008f5f6) call5_swipe_1_pane

0x7e90,	// (0x0008f602) call5_swipe_2_pane_ParamLimits

0x7e90,	// (0x0008f602) call5_swipe_2_pane

0x7eaa,	// (0x0008f61c) popup_call5_audio_first_window_ParamLimits

0x7eaa,	// (0x0008f61c) popup_call5_audio_first_window

0xb4ee,	// (0x00092c60) call5_swipe_1_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) call5_swipe_1_pane_g1

0xa9c5,	// (0x00092137) call5_swipe_1_pane_g2_ParamLimits

0xa9c5,	// (0x00092137) call5_swipe_1_pane_g2

0x0001,

0xfbb9,	// (0x0009732b) call5_swipe_1_pane_g_ParamLimits

0xfbb9,	// (0x0009732b) call5_swipe_1_pane_g

0xa9d1,	// (0x00092143) call5_swipe_1_pane_t1_ParamLimits

0xa9d1,	// (0x00092143) call5_swipe_1_pane_t1

0xb4ee,	// (0x00092c60) call5_swipe_2_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) call5_swipe_2_pane_g1

0xa9e6,	// (0x00092158) call5_swipe_2_pane_g2_ParamLimits

0xa9e6,	// (0x00092158) call5_swipe_2_pane_g2

0x0001,

0xfbbe,	// (0x00097330) call5_swipe_2_pane_g_ParamLimits

0xfbbe,	// (0x00097330) call5_swipe_2_pane_g

0xa9f2,	// (0x00092164) call5_swipe_2_pane_t1_ParamLimits

0xa9f2,	// (0x00092164) call5_swipe_2_pane_t1

0xb4ee,	// (0x00092c60) sc_swipe_pane_g1_ParamLimits

0xb4ee,	// (0x00092c60) sc_swipe_pane_g1

0xb4fc,	// (0x00092c6e) sc_swipe_pane_g2_ParamLimits

0xb4fc,	// (0x00092c6e) sc_swipe_pane_g2

0x0001,

0xfbc3,	// (0x00097335) sc_swipe_pane_g_ParamLimits

0xfbc3,	// (0x00097335) sc_swipe_pane_g

0xb536,	// (0x00092ca8) sc_swipe_pane_t1_ParamLimits

0xb536,	// (0x00092ca8) sc_swipe_pane_t1

0x1c34,	// (0x000893a6) main_cmail_launcher_pane

0x7eb8,	// (0x0008f62a) aid_size_cell_cmail_l_ParamLimits

0x7eb8,	// (0x0008f62a) aid_size_cell_cmail_l

0x7ec6,	// (0x0008f638) grid_cmail_l_pane_ParamLimits

0x7ec6,	// (0x0008f638) grid_cmail_l_pane

0x7ed6,	// (0x0008f648) cell_cmail_l_pane_ParamLimits

0x7ed6,	// (0x0008f648) cell_cmail_l_pane

0xaa07,	// (0x00092179) cell_cmail_l_pane_g1_ParamLimits

0xaa07,	// (0x00092179) cell_cmail_l_pane_g1

0xaa13,	// (0x00092185) cell_cmail_l_pane_t1_ParamLimits

0xaa13,	// (0x00092185) cell_cmail_l_pane_t1

0xaa29,	// (0x0009219b) cell_cmail_l_pane_t2_ParamLimits

0xaa29,	// (0x0009219b) cell_cmail_l_pane_t2

0x0001,

0xfbc8,	// (0x0009733a) cell_cmail_l_pane_t_ParamLimits

0xfbc8,	// (0x0009733a) cell_cmail_l_pane_t

0xb14f,	// (0x000928c1) grid_highlight_pane_cp018_ParamLimits

0xb14f,	// (0x000928c1) grid_highlight_pane_cp018

0x1a8b,	// (0x000891fd) main2_pane_ParamLimits

0x1a8b,	// (0x000891fd) main2_pane

0xb619,	// (0x00092d8b) popup_sp_fs_action_menu_bg_pane_g1

0xb621,	// (0x00092d93) popup_sp_fs_action_menu_bg_pane_g2

0xb629,	// (0x00092d9b) popup_sp_fs_action_menu_bg_pane_g3

0xb631,	// (0x00092da3) popup_sp_fs_action_menu_bg_pane_g4

0xb639,	// (0x00092dab) popup_sp_fs_action_menu_bg_pane_g5

0xb641,	// (0x00092db3) popup_sp_fs_action_menu_bg_pane_g6

0xb649,	// (0x00092dbb) popup_sp_fs_action_menu_bg_pane_g7

0xb651,	// (0x00092dc3) popup_sp_fs_action_menu_bg_pane_g8

0xb659,	// (0x00092dcb) popup_sp_fs_action_menu_bg_pane_g9

0xb661,	// (0x00092dd3) popup_sp_fs_action_menu_bg_pane_g10

0xb661,	// (0x00092dd3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0009684f) popup_sp_fs_action_menu_bg_pane_g

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g3_g1

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g3_g2

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x000968fd) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x000968fd) list_medium_line_x2_t3_g3_g

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g3_t1

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g3_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g3_t2

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00096904) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00096904) list_medium_line_x2_t3_g3_t

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g2_g1

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0009690b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0009690b) list_medium_line_x2_t3_g2_g

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g2_t1

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g2_t2

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00096904) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00096904) list_medium_line_x2_t3_g2_t

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g4_g1

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g4_g2

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g4_g3

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00096910) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00096910) list_medium_line_x2_t4_g4_g

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g4_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g4_t1

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g4_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g4_t2

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g4_t3_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g4_t3

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x00096919) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x00096919) list_medium_line_x2_t4_g4_t

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g4_g1

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g4_g2

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g4_g3

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00096910) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00096910) list_medium_line_x2_t2_g4_g

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g4_t1

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x00096980) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x00096980) list_medium_line_x2_t2_g4_t

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g3_g1

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g3_g2

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x000968fd) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x000968fd) list_medium_line_x2_t2_g3_g

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g3_t1

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x00096980) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x00096980) list_medium_line_x2_t2_g3_t

0x38fa,	// (0x0008b06c) main_sp_fs_list_pane_ParamLimits

0x38fa,	// (0x0008b06c) main_sp_fs_list_pane

0x3906,	// (0x0008b078) sp_fs_scroll_pane_ParamLimits

0x3906,	// (0x0008b078) sp_fs_scroll_pane

0xbc84,	// (0x000933f6) list_medium_line_x2_t3_t1

0xbc84,	// (0x000933f6) list_medium_line_x2_t3_t2

0xbc84,	// (0x000933f6) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x000969cb) list_medium_line_x2_t3_t

0xbc84,	// (0x000933f6) list_medium_line_x3_t4_t1

0xbc84,	// (0x000933f6) list_medium_line_x3_t4_t2

0xbc84,	// (0x000933f6) list_medium_line_x3_t4_t3

0xbc84,	// (0x000933f6) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x000969d2) list_medium_line_x3_t4_t

0xbc84,	// (0x000933f6) list_medium_line_x4_t5_t1

0xbc84,	// (0x000933f6) list_medium_line_x4_t5_t2

0xbc84,	// (0x000933f6) list_medium_line_x4_t5_t3

0xbc84,	// (0x000933f6) list_medium_line_x4_t5_t4

0xbc84,	// (0x000933f6) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x000969db) list_medium_line_x4_t5_t

0xb4ee,	// (0x00092c60) list_medium_line_t4_g4_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t4_g4_g1

0xb4ee,	// (0x00092c60) list_medium_line_t4_g4_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t4_g4_g2

0xb4ee,	// (0x00092c60) list_medium_line_t4_g4_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t4_g4_g3

0xb4ee,	// (0x00092c60) list_medium_line_t4_g4_g4_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00096910) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00096910) list_medium_line_t4_g4_g

0xb536,	// (0x00092ca8) list_medium_line_t4_g4_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t4_g4_t1

0xb536,	// (0x00092ca8) list_medium_line_t4_g4_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t4_g4_t2

0xb536,	// (0x00092ca8) list_medium_line_t4_g4_t3_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t4_g4_t3

0xb536,	// (0x00092ca8) list_medium_line_t4_g4_t4_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x00096919) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x00096919) list_medium_line_t4_g4_t

0x39f9,	// (0x0008b16b) chi_dic_find_pane_g1

0x4678,	// (0x0008bdea) main_tport_pane

0xbc84,	// (0x000933f6) list_medium_line_plain_t1

0xb4ee,	// (0x00092c60) list_medium_line_t2_g2_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t2_g2_g1

0xb4ee,	// (0x00092c60) list_medium_line_t2_g2_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0009690b) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0009690b) list_medium_line_t2_g2_g

0xb536,	// (0x00092ca8) list_medium_line_t2_g2_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t2_g2_t1

0xb536,	// (0x00092ca8) list_medium_line_t2_g2_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x00096980) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x00096980) list_medium_line_t2_g2_t

0xe07f,	// (0x000957f1) aid_sp_fs_list_icon_a_sm

0x03fe,	// (0x00087b70) aid_sp_fs_list_icon_d

0xe087,	// (0x000957f9) aid_sp_fs_text_primary

0x0ad6,	// (0x00088248) aid_sp_fs_text_secondary

0xaded,	// (0x0009255f) list_medium_line

0xaded,	// (0x0009255f) list_medium_line_g2

0xaded,	// (0x0009255f) list_medium_line_g3

0xaded,	// (0x0009255f) list_medium_line_plain

0xaded,	// (0x0009255f) list_medium_line_plain_t2

0xaded,	// (0x0009255f) list_medium_line_plain_t3

0xaded,	// (0x0009255f) list_medium_line_right_icon

0xaded,	// (0x0009255f) list_medium_line_right_iconx2

0xaded,	// (0x0009255f) list_medium_line_t2

0xaded,	// (0x0009255f) list_medium_line_t2_g2

0xaded,	// (0x0009255f) list_medium_line_t2_g3

0xaded,	// (0x0009255f) list_medium_line_t2_right_icon

0xaded,	// (0x0009255f) list_medium_line_t2_right_iconx2

0xaded,	// (0x0009255f) list_medium_line_t3

0xaded,	// (0x0009255f) list_medium_line_t3_g2

0xaded,	// (0x0009255f) list_medium_line_t3_g3

0xaded,	// (0x0009255f) list_medium_line_t3_right_iconx2

0xaded,	// (0x0009255f) list_medium_line_t4_g4

0xaded,	// (0x0009255f) list_medium_line_x2

0xaded,	// (0x0009255f) list_medium_line_x2_t2_g2

0xaded,	// (0x0009255f) list_medium_line_x2_t2_g3

0xaded,	// (0x0009255f) list_medium_line_x2_t2_g4

0xaded,	// (0x0009255f) list_medium_line_x2_t3

0xaded,	// (0x0009255f) list_medium_line_x2_t3_g2

0xaded,	// (0x0009255f) list_medium_line_x2_t3_g3

0xaded,	// (0x0009255f) list_medium_line_x2_t3_g4

0xaded,	// (0x0009255f) list_medium_line_x2_t4_g2

0xaded,	// (0x0009255f) list_medium_line_x2_t4_g4

0xaded,	// (0x0009255f) list_medium_line_x3

0xaded,	// (0x0009255f) list_medium_line_x3_t4

0xaded,	// (0x0009255f) list_medium_line_x3_t4_g4

0xaded,	// (0x0009255f) list_medium_line_x4_t4

0xaded,	// (0x0009255f) list_medium_line_x4_t4_g7

0xaded,	// (0x0009255f) list_medium_line_x4_t5

0x71fd,	// (0x0008e96f) list_single_fs_dyc_pane_ParamLimits

0x71fd,	// (0x0008e96f) list_single_fs_dyc_pane

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g1

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g2

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g3

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g4

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g5

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x4_t4_g7_g6

0xb4fc,	// (0x00092c6e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb4fc,	// (0x00092c6e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfad0,	// (0x00097242) list_medium_line_x4_t4_g7_g_ParamLimits

0xfad0,	// (0x00097242) list_medium_line_x4_t4_g7_g

0xb536,	// (0x00092ca8) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x4_t4_g7_t1

0xb536,	// (0x00092ca8) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x4_t4_g7_t2

0xb536,	// (0x00092ca8) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x4_t4_g7_t3

0xb54a,	// (0x00092cbc) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb54a,	// (0x00092cbc) list_medium_line_x4_t4_g7_t4

0xb54a,	// (0x00092cbc) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb54a,	// (0x00092cbc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfadf,	// (0x00097251) list_medium_line_x4_t4_g7_t_ParamLimits

0xfadf,	// (0x00097251) list_medium_line_x4_t4_g7_t

0x793e,	// (0x0008f0b0) list_single_dyc_row_pane_ParamLimits

0x793e,	// (0x0008f0b0) list_single_dyc_row_pane

0x7e68,	// (0x0008f5da) call5_gesture_pane_ParamLimits

0x7e68,	// (0x0008f5da) call5_gesture_pane

0x7e9c,	// (0x0008f60e) call5_windows_pane_ParamLimits

0x7e9c,	// (0x0008f60e) call5_windows_pane

0x7eef,	// (0x0008f661) call5_swipe_1_pane_cp_ParamLimits

0x7eef,	// (0x0008f661) call5_swipe_1_pane_cp

0x7efb,	// (0x0008f66d) call5_swipe_2_pane_cp_ParamLimits

0x7efb,	// (0x0008f66d) call5_swipe_2_pane_cp

0xb792,	// (0x00092f04) call5_image_pane_cp

0x7f07,	// (0x0008f679) popup_call5_audio_first_window_cp_ParamLimits

0x7f07,	// (0x0008f679) popup_call5_audio_first_window_cp

0xaa46,	// (0x000921b8) call5_swipe_1_pane_g1_cp_ParamLimits

0xaa46,	// (0x000921b8) call5_swipe_1_pane_g1_cp

0xaa53,	// (0x000921c5) call5_swipe_1_pane_g2_cp

0xaa5b,	// (0x000921cd) call5_swipe_1_pane_t1_cp_ParamLimits

0xaa5b,	// (0x000921cd) call5_swipe_1_pane_t1_cp

0xaa46,	// (0x000921b8) call5_swipe_2_pane_g1_cp_ParamLimits

0xaa46,	// (0x000921b8) call5_swipe_2_pane_g1_cp

0xaa70,	// (0x000921e2) call5_swipe_2_pane_g2_cp

0xaa78,	// (0x000921ea) call5_swipe_2_pane_t1_cp_ParamLimits

0xaa78,	// (0x000921ea) call5_swipe_2_pane_t1_cp

0xb14f,	// (0x000928c1) main_sp_fs_email_pane

0xaa8d,	// (0x000921ff) main_sp_fs_listscroll_pane_te

0x7f15,	// (0x0008f687) popup_sp_fs_action_menu_pane_ParamLimits

0x7f15,	// (0x0008f687) popup_sp_fs_action_menu_pane

0xb52c,	// (0x00092c9e) bg_sp_fs_ctrlbar_pane_g1

0xaa96,	// (0x00092208) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xaa9f,	// (0x00092211) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd484,	// (0x00094bf6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb52c,	// (0x00092c9e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbcd,	// (0x0009733f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd4af,	// (0x00094c21) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd4af,	// (0x00094c21) bg_sp_fs_ctrlbar_ddmenu_pane

0xaaa8,	// (0x0009221a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xaaa8,	// (0x0009221a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xaab4,	// (0x00092226) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xaab4,	// (0x00092226) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbd6,	// (0x00097348) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbd6,	// (0x00097348) main_sp_fs_ctrlbar_ddmenu_pane_g

0xaac0,	// (0x00092232) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xaac0,	// (0x00092232) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb52c,	// (0x00092c9e) list_medium_line_t2_right_icon_g1

0xbc84,	// (0x000933f6) list_medium_line_t2_right_icon_t1

0xbc84,	// (0x000933f6) list_medium_line_t2_right_icon_t2

0x0001,

0xfbdb,	// (0x0009734d) list_medium_line_t2_right_icon_t

0xc375,	// (0x00093ae7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc375,	// (0x00093ae7) bg_sp_fs_ctrlbar_pane

0x7f9c,	// (0x0008f70e) main_sp_fs_ctrlbar_button_pane_cp01

0x7fa4,	// (0x0008f716) main_sp_fs_ctrlbar_ddmenu_pane

0xab12,	// (0x00092284) main_sp_fs_ctrlbar_pane_g1

0xab1e,	// (0x00092290) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbe0,	// (0x00097352) main_sp_fs_ctrlbar_pane_g

0x7fe0,	// (0x0008f752) main_sp_fs_ctrlbar_pane_t1

0x801b,	// (0x0008f78d) main_sp_fs_ctrlbar_pane

0x8031,	// (0x0008f7a3) main_sp_fs_listscroll_pane_te_cp01

0x804c,	// (0x0008f7be) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x804c,	// (0x0008f7be) popup_sp_fs_action_menu_pane_cp01

0xb14f,	// (0x000928c1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb14f,	// (0x000928c1) bg_sp_fs_highlight_list_pane_cp01

0xe0b4,	// (0x00095826) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe0b4,	// (0x00095826) sp_fs_action_menu_list_gene_pane_g1

0xab45,	// (0x000922b7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xab45,	// (0x000922b7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbee,	// (0x00097360) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbee,	// (0x00097360) sp_fs_action_menu_list_gene_pane_g

0xe0c3,	// (0x00095835) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe0c3,	// (0x00095835) sp_fs_action_menu_list_gene_pane_t1

0xe0db,	// (0x0009584d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe0db,	// (0x0009584d) sp_fs_action_menu_list_gene_pane

0xab52,	// (0x000922c4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xab52,	// (0x000922c4) popup_sp_fs_action_menu_bg_pane

0xe0fa,	// (0x0009586c) sp_fs_action_menu_list_pane_ParamLimits

0xe0fa,	// (0x0009586c) sp_fs_action_menu_list_pane

0x806c,	// (0x0008f7de) sp_fs_scroll_pane_cp01_ParamLimits

0x806c,	// (0x0008f7de) sp_fs_scroll_pane_cp01

0xbc84,	// (0x000933f6) list_medium_line_plain_t2_t1

0xbc84,	// (0x000933f6) list_medium_line_plain_t2_t2

0x0001,

0xfbdb,	// (0x0009734d) list_medium_line_plain_t2_t

0xbc84,	// (0x000933f6) list_medium_line_plain_t3_t1

0xbc84,	// (0x000933f6) list_medium_line_plain_t3_t2

0xbc84,	// (0x000933f6) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x000969cb) list_medium_line_plain_t3_t

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g2_g1

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0009690b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0009690b) list_medium_line_x2_t2_g2_g

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g2_t1

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x00096980) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x00096980) list_medium_line_x2_t2_g2_t

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g2_g1

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0009690b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0009690b) list_medium_line_x2_t4_g2_g

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g2_t1

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g2_t2

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g2_t3

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x00096919) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x00096919) list_medium_line_x2_t4_g2_t

0xb52c,	// (0x00092c9e) list_medium_line_t3_right_iconx2_g1

0xb52c,	// (0x00092c9e) list_medium_line_t3_right_iconx2_g2

0xb52c,	// (0x00092c9e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x00096ae7) list_medium_line_t3_right_iconx2_g

0xbc84,	// (0x000933f6) list_medium_line_t3_right_iconx2_t1

0xbc84,	// (0x000933f6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbdb,	// (0x0009734d) list_medium_line_t3_right_iconx2_t

0xb4ee,	// (0x00092c60) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x3_t4_g4_g1

0xb4ee,	// (0x00092c60) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x3_t4_g4_g2

0xb4ee,	// (0x00092c60) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x3_t4_g4_g3

0xb4ee,	// (0x00092c60) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00096910) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00096910) list_medium_line_x3_t4_g4_g

0xb536,	// (0x00092ca8) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x3_t4_g4_t1

0xb536,	// (0x00092ca8) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x3_t4_g4_t2

0xb536,	// (0x00092ca8) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x3_t4_g4_t3

0xb536,	// (0x00092ca8) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x00096919) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x00096919) list_medium_line_x3_t4_g4_t

0x8092,	// (0x0008f804) list_single_dyc_row_text_pane_t1_ParamLimits

0x8092,	// (0x0008f804) list_single_dyc_row_text_pane_t1

0x80c9,	// (0x0008f83b) list_single_dyc_row_text_pane_t2_ParamLimits

0x80c9,	// (0x0008f83b) list_single_dyc_row_text_pane_t2

0xe11a,	// (0x0009588c) list_single_dyc_row_text_pane_t3_ParamLimits

0xe11a,	// (0x0009588c) list_single_dyc_row_text_pane_t3

0x0005,

0xfbf3,	// (0x00097365) list_single_dyc_row_text_pane_t_ParamLimits

0xfbf3,	// (0x00097365) list_single_dyc_row_text_pane_t

0xe13e,	// (0x000958b0) list_single_dyc_row_pane_g1_ParamLimits

0xe13e,	// (0x000958b0) list_single_dyc_row_pane_g1

0xe14a,	// (0x000958bc) list_single_dyc_row_pane_g2_ParamLimits

0xe14a,	// (0x000958bc) list_single_dyc_row_pane_g2

0xe156,	// (0x000958c8) list_single_dyc_row_pane_g3_ParamLimits

0xe156,	// (0x000958c8) list_single_dyc_row_pane_g3

0xe169,	// (0x000958db) list_single_dyc_row_pane_g4_ParamLimits

0xe169,	// (0x000958db) list_single_dyc_row_pane_g4

0x0006,

0xfc00,	// (0x00097372) list_single_dyc_row_pane_g_ParamLimits

0xfc00,	// (0x00097372) list_single_dyc_row_pane_g

0xe1bb,	// (0x0009592d) list_single_dyc_row_text_pane_ParamLimits

0xe1bb,	// (0x0009592d) list_single_dyc_row_text_pane

0xaded,	// (0x0009255f) bg_sp_fs_scroll_pane

0xab60,	// (0x000922d2) thumb_sp_fs_scroll_pane

0xb4ee,	// (0x00092c60) list_medium_line_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_g1

0xb536,	// (0x00092ca8) list_medium_line_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t1

0xb4ee,	// (0x00092c60) list_medium_line_x2_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_g1

0xb4ee,	// (0x00092c60) list_medium_line_x2_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0009690b) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0009690b) list_medium_line_x2_g

0xb536,	// (0x00092ca8) list_medium_line_x2_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t1

0xb4ee,	// (0x00092c60) list_medium_line_x3_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x3_g1

0x9fd3,	// (0x00091745) list_medium_line_x3_g2_ParamLimits

0x9fd3,	// (0x00091745) list_medium_line_x3_g2

0x0001,

0xfc0f,	// (0x00097381) list_medium_line_x3_g_ParamLimits

0xfc0f,	// (0x00097381) list_medium_line_x3_g

0xab69,	// (0x000922db) list_medium_line_x3_t1_ParamLimits

0xab69,	// (0x000922db) list_medium_line_x3_t1

0xab7d,	// (0x000922ef) thumb_sp_fs_scroll_pane_g1

0xab86,	// (0x000922f8) thumb_sp_fs_scroll_pane_g2

0xab8f,	// (0x00092301) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x00097386) thumb_sp_fs_scroll_pane_g

0xab7d,	// (0x000922ef) bg_sp_fs_scroll_pane_g1

0xab86,	// (0x000922f8) bg_sp_fs_scroll_pane_g2

0xab8f,	// (0x00092301) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x00097386) bg_sp_fs_scroll_pane_g

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g4_g1

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g4_g2

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g4_g3

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00096910) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00096910) list_medium_line_x2_t3_g4_g

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g4_t1

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g4_t2

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00096904) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00096904) list_medium_line_x2_t3_g4_t

0xb4ee,	// (0x00092c60) list_medium_line_g2_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_g2_g1

0xb4ee,	// (0x00092c60) list_medium_line_g2_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0009690b) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0009690b) list_medium_line_g2_g

0xb536,	// (0x00092ca8) list_medium_line_g2_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_g2_t1

0xb4ee,	// (0x00092c60) list_medium_line_t3_g2_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t3_g2_g1

0xb4ee,	// (0x00092c60) list_medium_line_t3_g2_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0009690b) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0009690b) list_medium_line_t3_g2_g

0xb536,	// (0x00092ca8) list_medium_line_t3_g2_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t3_g2_t1

0xb536,	// (0x00092ca8) list_medium_line_t3_g2_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t3_g2_t2

0xb536,	// (0x00092ca8) list_medium_line_t3_g2_t3_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00096904) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00096904) list_medium_line_t3_g2_t

0xb52c,	// (0x00092c9e) list_medium_line_right_icon_g1

0xbc84,	// (0x000933f6) list_medium_line_right_icon_t1

0xb4ee,	// (0x00092c60) list_medium_line_t2_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t2_g1

0xb536,	// (0x00092ca8) list_medium_line_t2_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t2_t1

0xb536,	// (0x00092ca8) list_medium_line_t2_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x00096980) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x00096980) list_medium_line_t2_t

0xb4ee,	// (0x00092c60) list_medium_line_t3_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t3_g1

0xb536,	// (0x00092ca8) list_medium_line_t3_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t3_t1

0xb536,	// (0x00092ca8) list_medium_line_t3_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t3_t2

0xb536,	// (0x00092ca8) list_medium_line_t3_t3_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00096904) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00096904) list_medium_line_t3_t

0xb4ee,	// (0x00092c60) list_medium_line_g3_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_g3_g1

0xb4ee,	// (0x00092c60) list_medium_line_g3_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_g3_g2

0xb4ee,	// (0x00092c60) list_medium_line_g3_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x000968fd) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x000968fd) list_medium_line_g3_g

0xb536,	// (0x00092ca8) list_medium_line_g3_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_g3_t1

0xb4ee,	// (0x00092c60) list_medium_line_t2_g3_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t2_g3_g1

0xb4ee,	// (0x00092c60) list_medium_line_t2_g3_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t2_g3_g2

0xb4ee,	// (0x00092c60) list_medium_line_t2_g3_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x000968fd) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x000968fd) list_medium_line_t2_g3_g

0xb536,	// (0x00092ca8) list_medium_line_t2_g3_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t2_g3_t1

0xb536,	// (0x00092ca8) list_medium_line_t2_g3_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x00096980) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x00096980) list_medium_line_t2_g3_t

0xb4ee,	// (0x00092c60) list_medium_line_t3_g3_g1_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t3_g3_g1

0xb4ee,	// (0x00092c60) list_medium_line_t3_g3_g2_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t3_g3_g2

0xb4ee,	// (0x00092c60) list_medium_line_t3_g3_g3_ParamLimits

0xb4ee,	// (0x00092c60) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x000968fd) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x000968fd) list_medium_line_t3_g3_g

0xb536,	// (0x00092ca8) list_medium_line_t3_g3_t1_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t3_g3_t1

0xb536,	// (0x00092ca8) list_medium_line_t3_g3_t2_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t3_g3_t2

0xb536,	// (0x00092ca8) list_medium_line_t3_g3_t3_ParamLimits

0xb536,	// (0x00092ca8) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00096904) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00096904) list_medium_line_t3_g3_t

0xb52c,	// (0x00092c9e) list_medium_line_right_iconx2_g1

0xb52c,	// (0x00092c9e) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x000967fe) list_medium_line_right_iconx2_g

0xbc84,	// (0x000933f6) list_medium_line_right_iconx2_t1

0xb52c,	// (0x00092c9e) list_medium_line_t2_right_iconx2_g1

0xb52c,	// (0x00092c9e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x000967fe) list_medium_line_t2_right_iconx2_g

0xbc84,	// (0x000933f6) list_medium_line_t2_right_iconx2_t1

0xbc84,	// (0x000933f6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbdb,	// (0x0009734d) list_medium_line_t2_right_iconx2_t

0xbc84,	// (0x000933f6) list_medium_line_x4_t4_t1

0xbc84,	// (0x000933f6) list_medium_line_x4_t4_t2

0xbc84,	// (0x000933f6) list_medium_line_x4_t4_t3

0xbc84,	// (0x000933f6) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x000969d2) list_medium_line_x4_t4_t

0x8216,	// (0x0008f988) tport_appsw_pane_ParamLimits

0x8216,	// (0x0008f988) tport_appsw_pane

0x8224,	// (0x0008f996) tport_contact_pane_ParamLimits

0x8224,	// (0x0008f996) tport_contact_pane

0x8234,	// (0x0008f9a6) tport_listscroll_pane_ParamLimits

0x8234,	// (0x0008f9a6) tport_listscroll_pane

0x8244,	// (0x0008f9b6) cell_tport_appsw_pane_ParamLimits

0x8244,	// (0x0008f9b6) cell_tport_appsw_pane

0xb4fc,	// (0x00092c6e) tport_appsw_pane_g1_ParamLimits

0xb4fc,	// (0x00092c6e) tport_appsw_pane_g1

0xab98,	// (0x0009230a) tport_contact_pane_g1

0xaba1,	// (0x00092313) tport_contact_pane_t1

0xabaf,	// (0x00092321) tport_contact_pane_t2

0x0001,

0xfc1b,	// (0x0009738d) tport_contact_pane_t

0xabbd,	// (0x0009232f) list_tport_pane

0xabc6,	// (0x00092338) scroll_pane_cp_030

0x8277,	// (0x0008f9e9) cell_tport_appsw_pane_g1

0x8287,	// (0x0008f9f9) cell_tport_appsw_pane_t1

0x8295,	// (0x0008fa07) grid_highlight_pane_cp019

0x829d,	// (0x0008fa0f) list_tport_double_graphic_pane_ParamLimits

0x829d,	// (0x0008fa0f) list_tport_double_graphic_pane

0xb14f,	// (0x000928c1) list_highlight_pane_cp023_ParamLimits

0xb14f,	// (0x000928c1) list_highlight_pane_cp023

0x82ae,	// (0x0008fa20) list_tport_double_graphic_pane_g1_ParamLimits

0x82ae,	// (0x0008fa20) list_tport_double_graphic_pane_g1

0x82bb,	// (0x0008fa2d) list_tport_double_graphic_pane_t1_ParamLimits

0x82bb,	// (0x0008fa2d) list_tport_double_graphic_pane_t1

0x82d0,	// (0x0008fa42) list_tport_double_graphic_pane_t2_ParamLimits

0x82d0,	// (0x0008fa42) list_tport_double_graphic_pane_t2

0x0001,

0xfc27,	// (0x00097399) list_tport_double_graphic_pane_t_ParamLimits

0xfc27,	// (0x00097399) list_tport_double_graphic_pane_t

0xaded,	// (0x0009255f) main_cale_note_pane

0x6281,	// (0x0008d9f3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6281,	// (0x0008d9f3) cell_vitu2_function_top_wide_pane_cp01

0x7ce5,	// (0x0008f457) wait_bar_pane_cp05_ParamLimits

0xb14f,	// (0x000928c1) listscroll_cmail_pane

0xabd7,	// (0x00092349) list_cmail_pane

0x82e2,	// (0x0008fa54) list_cmail_body_pane

0x830a,	// (0x0008fa7c) list_single_cmail_header_caption_pane

0x8339,	// (0x0008faab) list_single_cmail_header_detail_pane_ParamLimits

0x8339,	// (0x0008faab) list_single_cmail_header_detail_pane

0xabee,	// (0x00092360) list_single_cmail_header_caption_pane_t1

0x8376,	// (0x0008fae8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8376,	// (0x0008fae8) list_single_cmail_header_detail_pane_g1

0x041c,	// (0x00087b8e) list_single_cmail_header_detail_pane_g2_ParamLimits

0x041c,	// (0x00087b8e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc2c,	// (0x0009739e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc2c,	// (0x0009739e) list_single_cmail_header_detail_pane_g

0x838c,	// (0x0008fafe) list_single_cmail_header_detail_pane_t1_ParamLimits

0x838c,	// (0x0008fafe) list_single_cmail_header_detail_pane_t1

0x83c8,	// (0x0008fb3a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x83c8,	// (0x0008fb3a) list_single_cmail_header_editor_pane_bg

0xa6f9,	// (0x00091e6b) list_cmail_body_pane_g1

0xac12,	// (0x00092384) list_cmail_body_pane_t1

0x0543,	// (0x00087cb5) list_single_cmail_header_editor_pane_bg_g1

0xb9b4,	// (0x00093126) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0553,	// (0x00087cc5) list_single_cmail_header_editor_pane_bg_g1_copy2

0x054b,	// (0x00087cbd) list_single_cmail_header_editor_pane_bg_g1_copy3

0x07be,	// (0x00087f30) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0573,	// (0x00087ce5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0563,	// (0x00087cd5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x056b,	// (0x00087cdd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb994,	// (0x00093106) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x83df,	// (0x0008fb51) calenote_gesture_pane_ParamLimits

0x83df,	// (0x0008fb51) calenote_gesture_pane

0x83f9,	// (0x0008fb6b) calenote_window_pane_ParamLimits

0x83f9,	// (0x0008fb6b) calenote_window_pane

0xac20,	// (0x00092392) popup_note_window_cp01

0x8411,	// (0x0008fb83) calenote_swipe_1_pane_ParamLimits

0x8411,	// (0x0008fb83) calenote_swipe_1_pane

0x7efb,	// (0x0008f66d) calenote_swipe_2_pane_ParamLimits

0x7efb,	// (0x0008f66d) calenote_swipe_2_pane

0xaa46,	// (0x000921b8) calenote_swipe_1_pane_g1_ParamLimits

0xaa46,	// (0x000921b8) calenote_swipe_1_pane_g1

0xac32,	// (0x000923a4) calenote_swipe_1_pane_g2_ParamLimits

0xac32,	// (0x000923a4) calenote_swipe_1_pane_g2

0x0001,

0xfc38,	// (0x000973aa) calenote_swipe_1_pane_g_ParamLimits

0xfc38,	// (0x000973aa) calenote_swipe_1_pane_g

0xac3e,	// (0x000923b0) calenote_swipe_1_pane_t1_ParamLimits

0xac3e,	// (0x000923b0) calenote_swipe_1_pane_t1

0xaa46,	// (0x000921b8) calenote_swipe_2_pane_g1_ParamLimits

0xaa46,	// (0x000921b8) calenote_swipe_2_pane_g1

0xac5d,	// (0x000923cf) calenote_swipe_2_pane_g2_ParamLimits

0xac5d,	// (0x000923cf) calenote_swipe_2_pane_g2

0x0001,

0xfc3d,	// (0x000973af) calenote_swipe_2_pane_g_ParamLimits

0xfc3d,	// (0x000973af) calenote_swipe_2_pane_g

0xac69,	// (0x000923db) calenote_swipe_2_pane_t1_ParamLimits

0xac69,	// (0x000923db) calenote_swipe_2_pane_t1

0xaded,	// (0x0009255f) main_mup_navstr_pane

0x51b0,	// (0x0008c922) main_mup3_pane_t7_ParamLimits

0x51b0,	// (0x0008c922) main_mup3_pane_t7

0x5958,	// (0x0008d0ca) main_mp4_pane_g6_ParamLimits

0x5958,	// (0x0008d0ca) main_mp4_pane_g6

0x5ccc,	// (0x0008d43e) main_image3_pane_t4_ParamLimits

0x5ccc,	// (0x0008d43e) main_image3_pane_t4

0x8424,	// (0x0008fb96) popup_navstr_preview_pane_ParamLimits

0x8424,	// (0x0008fb96) popup_navstr_preview_pane

0x8430,	// (0x0008fba2) scroll_navstr_pane_ParamLimits

0x8430,	// (0x0008fba2) scroll_navstr_pane

0xaded,	// (0x0009255f) bg_popup_preview_window_pane_cp04

0xac90,	// (0x00092402) popup_navstr_preview_pane_t1

0x843c,	// (0x0008fbae) scroll_navstr_pane_g1_ParamLimits

0x843c,	// (0x0008fbae) scroll_navstr_pane_g1

0x8449,	// (0x0008fbbb) scroll_navstr_pane_t1_ParamLimits

0x8449,	// (0x0008fbbb) scroll_navstr_pane_t1

0xac29,	// (0x0009239b) bg_button_pane_cp014

0xac29,	// (0x0009239b) bg_button_pane_cp030

0x7e0e,	// (0x0008f580) list_double_fisheye_pane_g4_ParamLimits

0x7e0e,	// (0x0008f580) list_double_fisheye_pane_g4

0x7e1a,	// (0x0008f58c) list_double_fisheye_pane_g5_ParamLimits

0x7e1a,	// (0x0008f58c) list_double_fisheye_pane_g5

0x0ac1,	// (0x00088233) sp_fs_scroll_pane_cp03

0xab12,	// (0x00092284) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xab1e,	// (0x00092290) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbe0,	// (0x00097352) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7fe0,	// (0x0008f752) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xabe6,	// (0x00092358) sp_fs_scroll_pane_cp02

0xb6da,	// (0x00092e4c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb6da,	// (0x00092e4c) popup_sp_fs_calendar_preview_list_single_pane

0xaded,	// (0x0009255f) main_cam6_pano_pane

0x465c,	// (0x0008bdce) main_mup3_pane_ParamLimits

0xaded,	// (0x0009255f) main_phacti_pane

0x7bba,	// (0x0008f32c) bg_button_pane_cp11

0x7bd2,	// (0x0008f344) main_mobtv_info_pane_g2_ParamLimits

0x7bd2,	// (0x0008f344) main_mobtv_info_pane_g2

0x0001,

0xfb40,	// (0x000972b2) main_mobtv_info_pane_g_ParamLimits

0xfb40,	// (0x000972b2) main_mobtv_info_pane_g

0xb54a,	// (0x00092cbc) sc_clock_pane_t5_ParamLimits

0xb54a,	// (0x00092cbc) sc_clock_pane_t5

0xc397,	// (0x00093b09) main_radioblah_pane_g1_ParamLimits

0xc383,	// (0x00093af5) main_radioblah_pane_t3_ParamLimits

0xc383,	// (0x00093af5) main_radioblah_pane_t3

0xc383,	// (0x00093af5) main_radioblah_pane_t4_ParamLimits

0xc383,	// (0x00093af5) main_radioblah_pane_t4

0xb4e0,	// (0x00092c52) main_radioblah_text_pane_ParamLimits

0xb4e0,	// (0x00092c52) main_radioblah_text_pane

0xa93e,	// (0x000920b0) main_radioblah_info_pane_g1_ParamLimits

0xa982,	// (0x000920f4) main_radioblah_info_pane_t4_ParamLimits

0xa982,	// (0x000920f4) main_radioblah_info_pane_t4

0xb14f,	// (0x000928c1) main_sp_fs_calendar_pane

0x845b,	// (0x0008fbcd) main_phacti_pane_g1

0x8463,	// (0x0008fbd5) phacti_note_pane_ParamLimits

0x8463,	// (0x0008fbd5) phacti_note_pane

0xaca7,	// (0x00092419) phacti_term_pane_ParamLimits

0xaca7,	// (0x00092419) phacti_term_pane

0xacbc,	// (0x0009242e) phacti_note_pane_t1_ParamLimits

0xacbc,	// (0x0009242e) phacti_note_pane_t1

0xe204,	// (0x00095976) phacti_term_pane_g1

0xe20c,	// (0x0009597e) phacti_term_pane_t1_ParamLimits

0xe20c,	// (0x0009597e) phacti_term_pane_t1

0xacd3,	// (0x00092445) popup_sp_fs_calendar_preview_list_single_pane_g1

0xacdb,	// (0x0009244d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc47,	// (0x000973b9) popup_sp_fs_calendar_preview_list_single_pane_g

0xace3,	// (0x00092455) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xace3,	// (0x00092455) popup_sp_fs_calendar_preview_list_single_pane_t1

0xacf9,	// (0x0009246b) aid_popup_sp_fs_bg_corner_pane

0xb52c,	// (0x00092c9e) popup_sp_fs_calendar_preview_bg_pane_g1

0xaded,	// (0x0009255f) popup_sp_fs_calendar_preview_bg_pane

0xad01,	// (0x00092473) popup_sp_fs_calendar_preview_list_pane

0xad09,	// (0x0009247b) bg_main_sp_fs_cale_pane_ParamLimits

0xad09,	// (0x0009247b) bg_main_sp_fs_cale_pane

0xad21,	// (0x00092493) listscroll_cale_mrui_pane_ParamLimits

0xad21,	// (0x00092493) listscroll_cale_mrui_pane

0xdc44,	// (0x000953b6) listscroll_sp_fs_schedule_track_pane

0xe23f,	// (0x000959b1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe23f,	// (0x000959b1) main_sp_fs_ctrlbar_pane_cp01

0xdc44,	// (0x000953b6) main_sp_fs_ribbon_pane

0xe255,	// (0x000959c7) popup_sp_fs_cale_preview_window

0x076f,	// (0x00087ee1) list_single_sp_fs_schedule_track_pane_ParamLimits

0x076f,	// (0x00087ee1) list_single_sp_fs_schedule_track_pane

0x076f,	// (0x00087ee1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x076f,	// (0x00087ee1) bg_sp_fs_highlight_list_pane_cp03

0x4e94,	// (0x0008c606) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x4e94,	// (0x0008c606) list_single_sp_fs_schedule_track_pane_g1

0x4e94,	// (0x0008c606) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x4e94,	// (0x0008c606) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc4c,	// (0x000973be) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc4c,	// (0x000973be) list_single_sp_fs_schedule_track_pane_g

0x8479,	// (0x0008fbeb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8479,	// (0x0008fbeb) list_single_sp_fs_schedule_track_pane_t1

0x0436,	// (0x00087ba8) sp_fs_schedule_track_pane_ParamLimits

0x0436,	// (0x00087ba8) sp_fs_schedule_track_pane

0xdc4c,	// (0x000953be) sp_fs_schedule_track_pane_g1

0xdc4c,	// (0x000953be) sp_fs_schedule_track_pane_g2

0xdc4c,	// (0x000953be) sp_fs_schedule_track_pane_g3

0xdc4c,	// (0x000953be) sp_fs_schedule_track_pane_g4

0xdc4c,	// (0x000953be) sp_fs_schedule_track_pane_g5

0x0004,

0xfc51,	// (0x000973c3) sp_fs_schedule_track_pane_g

0xdc4c,	// (0x000953be) bg_sp_fs_schedule_viewer_highlight_g1

0xdc4c,	// (0x000953be) bg_sp_fs_schedule_viewer_highlight_g2

0xdc4c,	// (0x000953be) bg_sp_fs_schedule_viewer_highlight_g3

0xdc4c,	// (0x000953be) bg_sp_fs_schedule_viewer_highlight_g4

0xdc4c,	// (0x000953be) bg_sp_fs_schedule_viewer_highlight_g5

0xdc4c,	// (0x000953be) bg_sp_fs_schedule_viewer_highlight_g6

0xdc4c,	// (0x000953be) bg_sp_fs_schedule_viewer_highlight_g7

0xdc4c,	// (0x000953be) bg_sp_fs_schedule_viewer_highlight_g8

0xdc4c,	// (0x000953be) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc5c,	// (0x000973ce) bg_sp_fs_schedule_viewer_highlight_g

0xdc44,	// (0x000953b6) bg_main_sp_fs_ribbon_pane

0xdc4c,	// (0x000953be) main_sp_fs_ribbon_pane_g1

0xad39,	// (0x000924ab) main_sp_fs_ribbon_pane_t1

0xad39,	// (0x000924ab) main_sp_fs_ribbon_pane_t2

0xad39,	// (0x000924ab) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc6f,	// (0x000973e1) main_sp_fs_ribbon_pane_t

0xdc44,	// (0x000953b6) main_sp_fs_ribbon_scheduler_pane

0xdc4c,	// (0x000953be) bg_main_sp_fs_ribbon_pane_g1

0xdc4c,	// (0x000953be) bg_main_sp_fs_ribbon_pane_g2

0xdc4c,	// (0x000953be) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6b8,	// (0x00096e2a) bg_main_sp_fs_ribbon_pane_g

0xdc4c,	// (0x000953be) main_sp_fs_ribbon_scheduler_pane_g1

0xdc4c,	// (0x000953be) main_sp_fs_ribbon_scheduler_pane_g2

0xdc4c,	// (0x000953be) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6b8,	// (0x00096e2a) main_sp_fs_ribbon_scheduler_pane_g

0xad47,	// (0x000924b9) list_cale_mrui_pane

0x848b,	// (0x0008fbfd) sp_fs_scroll_pane_cp07_ParamLimits

0x848b,	// (0x0008fbfd) sp_fs_scroll_pane_cp07

0x076f,	// (0x00087ee1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x076f,	// (0x00087ee1) bg_sp_fs_schedule_viewer_highlight

0xdc44,	// (0x000953b6) list_single_sp_fs_schedule_track_pane_cp01

0xdc44,	// (0x000953b6) list_sp_fs_schedule_track_pane

0xad54,	// (0x000924c6) sp_fs_scroll_pane_cp06_ParamLimits

0xad54,	// (0x000924c6) sp_fs_scroll_pane_cp06

0xb52c,	// (0x00092c9e) bgmain_sp_fs_calendar_pane_g1

0x84a7,	// (0x0008fc19) list_single_cale_mrui_pane_ParamLimits

0x84a7,	// (0x0008fc19) list_single_cale_mrui_pane

0xe267,	// (0x000959d9) list_single_cale_mrui_row_pane_ParamLimits

0xe267,	// (0x000959d9) list_single_cale_mrui_row_pane

0xe274,	// (0x000959e6) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe274,	// (0x000959e6) list_single_cale_mrui_row_pane_g1

0xe2ac,	// (0x00095a1e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe2ac,	// (0x00095a1e) list_single_cale_mrui_row_pane_t1

0x84d5,	// (0x0008fc47) list_single_cale_mrui_row_pane_t2_ParamLimits

0x84d5,	// (0x0008fc47) list_single_cale_mrui_row_pane_t2

0xe2be,	// (0x00095a30) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe2be,	// (0x00095a30) list_single_cale_mrui_row_pane_t3

0xe2ed,	// (0x00095a5f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe2ed,	// (0x00095a5f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc7d,	// (0x000973ef) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc7d,	// (0x000973ef) list_single_cale_mrui_row_pane_t

0x853b,	// (0x0008fcad) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x853b,	// (0x0008fcad) list_single_cmail_header_editor_pane_bg_cp01

0x8563,	// (0x0008fcd5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8563,	// (0x0008fcd5) list_single_cmail_header_editor_pane_bg_cp02

0xad75,	// (0x000924e7) main_radioblah_text_pane_t1_ParamLimits

0xad75,	// (0x000924e7) main_radioblah_text_pane_t1

0xad8f,	// (0x00092501) cam6_indi_pane_cp01

0xad97,	// (0x00092509) cam6_mode_pane_cp01

0xad9f,	// (0x00092511) cam6_pano_pane

0xe31c,	// (0x00095a8e) cam6_zoom_pane_cp01

0xe324,	// (0x00095a96) cam6_pano_image_pane

0xe32f,	// (0x00095aa1) cam6_pano_pane_g1

0xa6f9,	// (0x00091e6b) cam6_pano_pane_g2

0xe338,	// (0x00095aaa) cam6_pano_pane_g3

0xe341,	// (0x00095ab3) cam6_pano_pane_g4

0xdede,	// (0x00095650) cam6_pano_pane_g5

0xe34a,	// (0x00095abc) cam6_pano_pane_g6

0xe354,	// (0x00095ac6) cam6_pano_pane_g7

0xe35c,	// (0x00095ace) cam6_pano_pane_g8

0xe365,	// (0x00095ad7) cam6_pano_pane_g9

0x0008,

0xfc86,	// (0x000973f8) cam6_pano_pane_g

0xaded,	// (0x0009255f) main_browser_tag_pane

0xac88,	// (0x000923fa) grid_navstr_albumart_pane

0xe370,	// (0x00095ae2) cell_navstr_albumart_pane_ParamLimits

0xe370,	// (0x00095ae2) cell_navstr_albumart_pane

0xe390,	// (0x00095b02) cell_navstr_albumart_pane_g1

0xe398,	// (0x00095b0a) cell_navstr_albumart_pane_g2

0xe3a0,	// (0x00095b12) cell_navstr_albumart_pane_g3

0xe3a8,	// (0x00095b1a) cell_navstr_albumart_pane_g4

0x0003,

0xfc99,	// (0x0009740b) cell_navstr_albumart_pane_g

0x857f,	// (0x0008fcf1) bt_list_pane_ParamLimits

0x857f,	// (0x0008fcf1) bt_list_pane

0x85a0,	// (0x0008fd12) bt_list_pane_t1

0x85af,	// (0x0008fd21) bt_list_pane_t2

0x0001,

0xfca2,	// (0x00097414) bt_list_pane_t

0xaded,	// (0x0009255f) main_cale_prevew_pane

0x85be,	// (0x0008fd30) popup_cale_preview_window_ParamLimits

0x85be,	// (0x0008fd30) popup_cale_preview_window

0xb14f,	// (0x000928c1) bg_popup_preview_window_pane_cp05_ParamLimits

0xb14f,	// (0x000928c1) bg_popup_preview_window_pane_cp05

0xe3b0,	// (0x00095b22) list_cale_preview_pane_ParamLimits

0xe3b0,	// (0x00095b22) list_cale_preview_pane

0x85d7,	// (0x0008fd49) list_double_cale_preview_pane_ParamLimits

0x85d7,	// (0x0008fd49) list_double_cale_preview_pane

0x85e9,	// (0x0008fd5b) list_single_cale_preview_pane_ParamLimits

0x85e9,	// (0x0008fd5b) list_single_cale_preview_pane

0x85fd,	// (0x0008fd6f) list_single_cale_preview_pane_g1

0x8605,	// (0x0008fd77) list_single_cale_preview_pane_t1_ParamLimits

0x8605,	// (0x0008fd77) list_single_cale_preview_pane_t1

0x861a,	// (0x0008fd8c) list_double_cale_preview_pane_g1

0x8622,	// (0x0008fd94) list_double_cale_preview_pane_t1_ParamLimits

0x8622,	// (0x0008fd94) list_double_cale_preview_pane_t1

0x8637,	// (0x0008fda9) list_double_cale_preview_pane_t2_ParamLimits

0x8637,	// (0x0008fda9) list_double_cale_preview_pane_t2

0x0001,

0xfca7,	// (0x00097419) list_double_cale_preview_pane_t_ParamLimits

0xfca7,	// (0x00097419) list_double_cale_preview_pane_t

0xaded,	// (0x0009255f) main_ezdial_pane

0xb14f,	// (0x000928c1) main_sp_fs_email_pane_ParamLimits

0x7f59,	// (0x0008f6cb) cmail_ddmenu_btn01_pane_ParamLimits

0x7f59,	// (0x0008f6cb) cmail_ddmenu_btn01_pane

0x7f6e,	// (0x0008f6e0) cmail_ddmenu_btn02_pane_ParamLimits

0x7f6e,	// (0x0008f6e0) cmail_ddmenu_btn02_pane

0x7f86,	// (0x0008f6f8) cmail_ddmenu_btn03_pane_ParamLimits

0x7f86,	// (0x0008f6f8) cmail_ddmenu_btn03_pane

0x801b,	// (0x0008f78d) main_sp_fs_ctrlbar_pane_ParamLimits

0x8031,	// (0x0008f7a3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x82e2,	// (0x0008fa54) list_cmail_body_pane_ParamLimits

0xabfc,	// (0x0009236e) bg_button_pane_cp12

0xac05,	// (0x00092377) list_single_cmail_header_detail_pane_g3_ParamLimits

0xac05,	// (0x00092377) list_single_cmail_header_detail_pane_g3

0xe1e0,	// (0x00095952) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe1e0,	// (0x00095952) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc33,	// (0x000973a5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc33,	// (0x000973a5) list_single_cmail_header_detail_pane_t

0xe221,	// (0x00095993) phacti_term_pane_t2_ParamLimits

0xe221,	// (0x00095993) phacti_term_pane_t2

0x0001,

0xfc42,	// (0x000973b4) phacti_term_pane_t_ParamLimits

0xfc42,	// (0x000973b4) phacti_term_pane_t

0xe3bc,	// (0x00095b2e) aid_size_list_single_double

0x864f,	// (0x0008fdc1) popup_ezdial_listscroll_window

0xe3c8,	// (0x00095b3a) popup_number_entry_window_cp01

0xb792,	// (0x00092f04) bg_popup_call_pane_cp09

0xe3d5,	// (0x00095b47) ezdial_list_pane

0xe3dd,	// (0x00095b4f) scroll_pane_cp23

0xd4af,	// (0x00094c21) bg_button_pane_cp028_ParamLimits

0xd4af,	// (0x00094c21) bg_button_pane_cp028

0x8668,	// (0x0008fdda) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8668,	// (0x0008fdda) cmail_ddmenu_btn01_pane_g1

0x8678,	// (0x0008fdea) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8678,	// (0x0008fdea) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcac,	// (0x0009741e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcac,	// (0x0009741e) cmail_ddmenu_btn01_pane_g

0xe3e5,	// (0x00095b57) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe3e5,	// (0x00095b57) cmail_ddmenu_btn01_pane_t1

0xc375,	// (0x00093ae7) bg_button_pane_cp029_ParamLimits

0xc375,	// (0x00093ae7) bg_button_pane_cp029

0x8678,	// (0x0008fdea) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8678,	// (0x0008fdea) cmail_ddmenu_btn02_pane_g1

0x8690,	// (0x0008fe02) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8690,	// (0x0008fe02) cmail_ddmenu_btn02_pane_t1

0xb4e0,	// (0x00092c52) bg_button_pane_cp031_ParamLimits

0xb4e0,	// (0x00092c52) bg_button_pane_cp031

0x8678,	// (0x0008fdea) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8678,	// (0x0008fdea) cmail_ddmenu_btn03_pane_g1

0x8690,	// (0x0008fe02) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8690,	// (0x0008fe02) cmail_ddmenu_btn03_pane_t1

0xb536,	// (0x00092ca8) cell_dialer2_keypad_pane_t1_ParamLimits

0xdefa,	// (0x0009566c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xdefa,	// (0x0009566c) cell_dialer2_keypad_pane_t1_copy1

0x79fb,	// (0x0008f16d) ncimui_group_button_pane

0xb14f,	// (0x000928c1) main_sp_fs_calendar_pane_ParamLimits

0x830a,	// (0x0008fa7c) list_single_cmail_header_caption_pane_ParamLimits

0xe236,	// (0x000959a8) aid_recal_txt_sm_pane

0xaded,	// (0x0009255f) mian_recal_day_pane

0xe255,	// (0x000959c7) popup_sp_fs_cale_preview_window_ParamLimits

0xe3fa,	// (0x00095b6c) list_recal_day_pane

0xe43c,	// (0x00095bae) list_single_recal_day_pane_ParamLimits

0xe43c,	// (0x00095bae) list_single_recal_day_pane

0xe44e,	// (0x00095bc0) list_single_recal_day_pane_g1_ParamLimits

0xe44e,	// (0x00095bc0) list_single_recal_day_pane_g1

0xe45a,	// (0x00095bcc) list_single_recal_day_pane_g2_ParamLimits

0xe45a,	// (0x00095bcc) list_single_recal_day_pane_g2

0xe466,	// (0x00095bd8) list_single_recal_day_pane_g3_ParamLimits

0xe466,	// (0x00095bd8) list_single_recal_day_pane_g3

0x86b4,	// (0x0008fe26) list_single_recal_day_pane_g4_ParamLimits

0x86b4,	// (0x0008fe26) list_single_recal_day_pane_g4

0xe472,	// (0x00095be4) list_single_recal_day_pane_g5_ParamLimits

0xe472,	// (0x00095be4) list_single_recal_day_pane_g5

0xe47e,	// (0x00095bf0) list_single_recal_day_pane_g6_ParamLimits

0xe47e,	// (0x00095bf0) list_single_recal_day_pane_g6

0x0004,

0xfcbb,	// (0x0009742d) list_single_recal_day_pane_g_ParamLimits

0xfcbb,	// (0x0009742d) list_single_recal_day_pane_g

0xe492,	// (0x00095c04) list_single_recal_day_pane_t1

0xe4a4,	// (0x00095c16) list_single_recal_day_pane_t2

0x0001,

0xfcc6,	// (0x00097438) list_single_recal_day_pane_t

0x86cc,	// (0x0008fe3e) ncimui_query_button_pane_ParamLimits

0x86cc,	// (0x0008fe3e) ncimui_query_button_pane

0x86dc,	// (0x0008fe4e) ncimui_query_button_pane_t1_ParamLimits

0x86dc,	// (0x0008fe4e) ncimui_query_button_pane_t1

0xe4b6,	// (0x00095c28) ncimui_query_button_pane_t2_ParamLimits

0xe4b6,	// (0x00095c28) ncimui_query_button_pane_t2

0x0001,

0xfccb,	// (0x0009743d) ncimui_query_button_pane_t_ParamLimits

0xfccb,	// (0x0009743d) ncimui_query_button_pane_t

0x86ef,	// (0x0008fe61) query_button_pane_ParamLimits

0x86ef,	// (0x0008fe61) query_button_pane

0xaded,	// (0x0009255f) bg_button_pane_cp0028

0xe4c9,	// (0x00095c3b) query_button_pane_t1

0x4678,	// (0x0008bdea) main_tport_pane_ParamLimits

0x81ec,	// (0x0008f95e) bg_popup_window_pane_cp01_ParamLimits

0x81ec,	// (0x0008f95e) bg_popup_window_pane_cp01

0x81fa,	// (0x0008f96c) heading_pane_cp08_ParamLimits

0x81fa,	// (0x0008f96c) heading_pane_cp08

0x8208,	// (0x0008f97a) heading_pane_cp07_ParamLimits

0x8208,	// (0x0008f97a) heading_pane_cp07

0x8277,	// (0x0008f9e9) cell_tport_appsw_pane_g2

0x0002,

0xfc20,	// (0x00097392) cell_tport_appsw_pane_g

0xc297,	// (0x00093a09) input_candi_list_open_g1

0xbb2f,	// (0x000932a1) list_cale_time_pane_g6_ParamLimits

0xbb2f,	// (0x000932a1) list_cale_time_pane_g6

0x4b72,	// (0x0008c2e4) aid_size_touch_calib_1_ParamLimits

0x4b72,	// (0x0008c2e4) aid_size_touch_calib_1

0x4b7e,	// (0x0008c2f0) aid_size_touch_calib_2_ParamLimits

0x4b7e,	// (0x0008c2f0) aid_size_touch_calib_2

0x4b8c,	// (0x0008c2fe) aid_size_touch_calib_3_ParamLimits

0x4b8c,	// (0x0008c2fe) aid_size_touch_calib_3

0x4b9c,	// (0x0008c30e) aid_size_touch_calib_4_ParamLimits

0x4b9c,	// (0x0008c30e) aid_size_touch_calib_4

0x4baa,	// (0x0008c31c) main_touch_calib_button_group_pane_ParamLimits

0x4baa,	// (0x0008c31c) main_touch_calib_button_group_pane

0x4bb8,	// (0x0008c32a) main_touch_calib_pane_g1_ParamLimits

0x4bc4,	// (0x0008c336) main_touch_calib_pane_g2_ParamLimits

0x4bd0,	// (0x0008c342) main_touch_calib_pane_g3_ParamLimits

0x4bdc,	// (0x0008c34e) main_touch_calib_pane_g4_ParamLimits

0xf666,	// (0x00096dd8) main_touch_calib_pane_g_ParamLimits

0x4be8,	// (0x0008c35a) main_touch_calib_pane_t1_ParamLimits

0x4c01,	// (0x0008c373) main_touch_calib_pane_t2_ParamLimits

0x4c1a,	// (0x0008c38c) main_touch_calib_pane_t3_ParamLimits

0x4c30,	// (0x0008c3a2) main_touch_calib_pane_t4_ParamLimits

0x4c46,	// (0x0008c3b8) main_touch_calib_pane_t5_ParamLimits

0xf66f,	// (0x00096de1) main_touch_calib_pane_t_ParamLimits

0xdcac,	// (0x0009541e) list_single_fp_cale_pane_g3_ParamLimits

0xdcac,	// (0x0009541e) list_single_fp_cale_pane_g3

0x465c,	// (0x0008bdce) bg_button_pane_cp012_ParamLimits

0x465c,	// (0x0008bdce) bg_vkb2_func_pane_cp03_ParamLimits

0x6b13,	// (0x0008e285) cell_vitu2_function_top_pane_g1_ParamLimits

0x465c,	// (0x0008bdce) bg_vkb2_func_pane_cp04_ParamLimits

0x7983,	// (0x0008f0f5) main_ncimui_button_group_pane_ParamLimits

0x7983,	// (0x0008f0f5) main_ncimui_button_group_pane

0x79e9,	// (0x0008f15b) main_ncimui_pane_t3_ParamLimits

0x79e9,	// (0x0008f15b) main_ncimui_pane_t3

0xac9e,	// (0x00092410) phacti_button_group_pane

0xe3bc,	// (0x00095b2e) aid_size_list_single_double_ParamLimits

0x864f,	// (0x0008fdc1) popup_ezdial_listscroll_window_ParamLimits

0xe3c8,	// (0x00095b3a) popup_number_entry_window_cp01_ParamLimits

0x86fc,	// (0x0008fe6e) phacti_button_pane_ParamLimits

0x86fc,	// (0x0008fe6e) phacti_button_pane

0xaded,	// (0x0009255f) bg_button_pane_cp14

0xe4d7,	// (0x00095c49) phacti_button_pane_t1

0x870d,	// (0x0008fe7f) main_touch_calib_button_pane_ParamLimits

0x870d,	// (0x0008fe7f) main_touch_calib_button_pane

0xb58a,	// (0x00092cfc) bg_button_pane_cp18_ParamLimits

0xb58a,	// (0x00092cfc) bg_button_pane_cp18

0xe4e5,	// (0x00095c57) main_touch_calib_button_pane_t1_ParamLimits

0xe4e5,	// (0x00095c57) main_touch_calib_button_pane_t1

0xe4fb,	// (0x00095c6d) main_touch_calib_button_pane_t2_ParamLimits

0xe4fb,	// (0x00095c6d) main_touch_calib_button_pane_t2

0x0001,

0xfcd0,	// (0x00097442) main_touch_calib_button_pane_t_ParamLimits

0xfcd0,	// (0x00097442) main_touch_calib_button_pane_t

0xaded,	// (0x0009255f) cell_ncimui_button_pane

0xaded,	// (0x0009255f) bg_button_pane_cp032

0xe519,	// (0x00095c8b) cell_ncimui_button_pane_t1

0x5bdf,	// (0x0008d351) image3_infobar_pane_ParamLimits

0x5bdf,	// (0x0008d351) image3_infobar_pane

0x7d2b,	// (0x0008f49d) fs_bigclock_status_pane_ParamLimits

0x7d2b,	// (0x0008f49d) fs_bigclock_status_pane

0x7d38,	// (0x0008f4aa) main_fs_bigclock_clock_pane_ParamLimits

0x7d38,	// (0x0008f4aa) main_fs_bigclock_clock_pane

0x7d4c,	// (0x0008f4be) main_fs_bigclock_indi_pane_ParamLimits

0x7d4c,	// (0x0008f4be) main_fs_bigclock_indi_pane

0x7d74,	// (0x0008f4e6) main_fs_bigclock_swipe_pane_ParamLimits

0x7d74,	// (0x0008f4e6) main_fs_bigclock_swipe_pane

0xaded,	// (0x0009255f) main_fs_clock_dumped_data

0xa806,	// (0x00091f78) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xa806,	// (0x00091f78) list_single_fs_bigclock_indicator_pane_g1

0xa822,	// (0x00091f94) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xa822,	// (0x00091f94) list_single_fs_bigclock_indicator_pane_g2

0xa83c,	// (0x00091fae) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xa83c,	// (0x00091fae) list_single_fs_bigclock_indicator_pane_g3

0xa856,	// (0x00091fc8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xa856,	// (0x00091fc8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb74,	// (0x000972e6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb74,	// (0x000972e6) list_single_fs_bigclock_indicator_pane_g

0xa881,	// (0x00091ff3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xa881,	// (0x00091ff3) list_single_fs_bigclock_indicator_pane_t1

0xa8a9,	// (0x0009201b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xa8a9,	// (0x0009201b) list_single_fs_bigclock_indicator_pane_t2

0xa8d1,	// (0x00092043) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xa8d1,	// (0x00092043) list_single_fs_bigclock_indicator_pane_t3

0xa8f9,	// (0x0009206b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xa8f9,	// (0x0009206b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb7f,	// (0x000972f1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb7f,	// (0x000972f1) list_single_fs_bigclock_indicator_pane_t

0xe527,	// (0x00095c99) image3_infobar_fav_pane_ParamLimits

0xe527,	// (0x00095c99) image3_infobar_fav_pane

0xe537,	// (0x00095ca9) image3_infobar_loc_pane_ParamLimits

0xe537,	// (0x00095ca9) image3_infobar_loc_pane

0xe54b,	// (0x00095cbd) image3_infobar_time_pane_ParamLimits

0xe54b,	// (0x00095cbd) image3_infobar_time_pane

0xb52c,	// (0x00092c9e) image3_infobar_time_pane_g1

0xe55b,	// (0x00095ccd) image3_infobar_time_pane_t1

0xb52c,	// (0x00092c9e) image3_infobar_loc_pane_g1

0xe569,	// (0x00095cdb) image3_infobar_loc_pane_g2

0x0001,

0xfcd5,	// (0x00097447) image3_infobar_loc_pane_g

0xe571,	// (0x00095ce3) image3_infobar_loc_pane_t1

0xb52c,	// (0x00092c9e) image3_infobar_fav_pane_g1

0xe57f,	// (0x00095cf1) image3_infobar_fav_pane_g2

0x0001,

0xfcda,	// (0x0009744c) image3_infobar_fav_pane_g

0xe587,	// (0x00095cf9) fs_bigclock_status_battery_pane

0xe590,	// (0x00095d02) fs_bigclock_status_signal_pane

0xe599,	// (0x00095d0b) fs_bigclock_status_title_pane

0xe5a2,	// (0x00095d14) fs_bigclock_status_signal_pane_g1

0xe5ab,	// (0x00095d1d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcdf,	// (0x00097451) fs_bigclock_status_signal_pane_g

0xe5b3,	// (0x00095d25) fs_bigclock_status_battery_pane_g1

0xe5bc,	// (0x00095d2e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfce4,	// (0x00097456) fs_bigclock_status_battery_pane_g

0xe5c4,	// (0x00095d36) fs_bigclock_status_title_pane_t1

0x871d,	// (0x0008fe8f) main_fs_bigclock_clock_pane_g1

0x871d,	// (0x0008fe8f) main_fs_bigclock_clock_pane_g2

0x871d,	// (0x0008fe8f) main_fs_bigclock_clock_pane_g3

0x871d,	// (0x0008fe8f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfce9,	// (0x0009745b) main_fs_bigclock_clock_pane_g

0x8729,	// (0x0008fe9b) main_fs_bigclock_clock_pane_t1

0x873d,	// (0x0008feaf) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcf2,	// (0x00097464) main_fs_bigclock_clock_pane_t

0xe5d2,	// (0x00095d44) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe5d2,	// (0x00095d44) list_single_fs_bigclock_indicator_pane

0xe5e3,	// (0x00095d55) list_single_fs_bigclock_pane_ParamLimits

0xe5e3,	// (0x00095d55) list_single_fs_bigclock_pane

0xe609,	// (0x00095d7b) main_fs_bigclock_indicator_pane_t1

0xe618,	// (0x00095d8a) list_single_fs_bigclock_pane_g1

0xe620,	// (0x00095d92) list_single_fs_bigclock_pane_t1

0xb52c,	// (0x00092c9e) main_fs_bigclock_swipe_pane_g1

0xe663,	// (0x00095dd5) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd03,	// (0x00097475) main_fs_bigclock_swipe_pane_g

0xe66b,	// (0x00095ddd) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe66b,	// (0x00095ddd) main_fs_bigclock_swipe_pane_t1

0x3912,	// (0x0008b084) call_type_pane_ParamLimits

0xaded,	// (0x0009255f) main_btmg_pane

0xe2a0,	// (0x00095a12) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe2a0,	// (0x00095a12) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc76,	// (0x000973e8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc76,	// (0x000973e8) list_single_cale_mrui_row_pane_g

0xe423,	// (0x00095b95) list_recal_vselct_arw_lo_pane

0xe42b,	// (0x00095b9d) list_recal_vselct_arw_up_pane

0xe433,	// (0x00095ba5) list_recal_vselct_pane

0x8794,	// (0x0008ff06) btmg_button_pane

0x87a0,	// (0x0008ff12) main_btmg_pane_g1

0xaded,	// (0x0009255f) bg_button_pane_cp044

0xe688,	// (0x00095dfa) btmg_button_pane_t1

0xd49b,	// (0x00094c0d) aid_listscroll_gen

0xb14f,	// (0x000928c1) main_cntbar_detail_pane

0xabcf,	// (0x00092341) list_cmail_folder_pane

0x0ac1,	// (0x00088233) sp_fs_scroll_pane_cp03_ParamLimits

0x87a8,	// (0x0008ff1a) list_single_fs_dyc_pane_cp01_ParamLimits

0x87a8,	// (0x0008ff1a) list_single_fs_dyc_pane_cp01

0xe696,	// (0x00095e08) aid_size_cmail_indent

0xe69f,	// (0x00095e11) list_single_dyc_row_pane_cp01

0x87f3,	// (0x0008ff65) cntbar_detail_list_pane_ParamLimits

0x87f3,	// (0x0008ff65) cntbar_detail_list_pane

0x882d,	// (0x0008ff9f) main_cntbar_detail_cont_pane_ParamLimits

0x882d,	// (0x0008ff9f) main_cntbar_detail_cont_pane

0x3906,	// (0x0008b078) scroll_pane_cp032_ParamLimits

0x3906,	// (0x0008b078) scroll_pane_cp032

0x8839,	// (0x0008ffab) cntbar_detail_list_event_pane_ParamLimits

0x8839,	// (0x0008ffab) cntbar_detail_list_event_pane

0x87ff,	// (0x0008ff71) cntbar_detail_list_shct_pane

0xba02,	// (0x00093174) aid_list_gen

0xe6a8,	// (0x00095e1a) aid_scroll

0xe6b1,	// (0x00095e23) aid_size_touch_scroll_bar

0x884d,	// (0x0008ffbf) aid_list_double

0x8856,	// (0x0008ffc8) aid_list_single

0xe6ba,	// (0x00095e2c) aid_list_single_lg

0x885f,	// (0x0008ffd1) aid_list_z_g_a_sm

0x8867,	// (0x0008ffd9) aid_list_z_g_d

0x886f,	// (0x0008ffe1) aid_txt_z_prm

0x887d,	// (0x0008ffef) aid_txt_z_prm_cp01

0x888b,	// (0x0008fffd) aid_txt_z_sec

0x8899,	// (0x0009000b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8899,	// (0x0009000b) main_cntbar_detail_cont_pane_g1

0x88a6,	// (0x00090018) main_cntbar_detail_cont_pane_g2_ParamLimits

0x88a6,	// (0x00090018) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd08,	// (0x0009747a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd08,	// (0x0009747a) main_cntbar_detail_cont_pane_g

0xe6c3,	// (0x00095e35) main_cntbar_detail_cont_pane_t1

0xe6d1,	// (0x00095e43) main_cntbar_detail_cont_pane_t2

0xe6df,	// (0x00095e51) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd0d,	// (0x0009747f) main_cntbar_detail_cont_pane_t

0x88b2,	// (0x00090024) cell_cntbar_detail_list_shct_pane_ParamLimits

0x88b2,	// (0x00090024) cell_cntbar_detail_list_shct_pane

0xe6ed,	// (0x00095e5f) cntbar_detail_list_shct_pane_g1

0xe6f6,	// (0x00095e68) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd14,	// (0x00097486) cntbar_detail_list_shct_pane_g

0x88c6,	// (0x00090038) cntbar_detail_list_event_pane_g1_ParamLimits

0x88c6,	// (0x00090038) cntbar_detail_list_event_pane_g1

0x88d2,	// (0x00090044) cntbar_detail_list_event_pane_g2_ParamLimits

0x88d2,	// (0x00090044) cntbar_detail_list_event_pane_g2

0x0005,

0xfd19,	// (0x0009748b) cntbar_detail_list_event_pane_g_ParamLimits

0xfd19,	// (0x0009748b) cntbar_detail_list_event_pane_g

0x893e,	// (0x000900b0) cntbar_detail_list_event_pane_t1_ParamLimits

0x893e,	// (0x000900b0) cntbar_detail_list_event_pane_t1

0x8953,	// (0x000900c5) cntbar_detail_list_event_pane_t2_ParamLimits

0x8953,	// (0x000900c5) cntbar_detail_list_event_pane_t2

0x0002,

0xfd26,	// (0x00097498) cntbar_detail_list_event_pane_t_ParamLimits

0xfd26,	// (0x00097498) cntbar_detail_list_event_pane_t

0xb52c,	// (0x00092c9e) cell_cntbar_detail_list_shct_pane_g1

0xc10b,	// (0x0009387d) navi_pane_mv_g3

0xb14f,	// (0x000928c1) main_cntbar_detail_pane_ParamLimits

0xaded,	// (0x0009255f) main_notif_wgt_pane

0x5887,	// (0x0008cff9) aid_tch_main_mp4_pane_g4

0x5b5a,	// (0x0008d2cc) popup_slider_window_cp02

0xe419,	// (0x00095b8b) list_recal_day_event_pane

0x87d3,	// (0x0008ff45) cntbar_detail_btn_pane_ParamLimits

0x87d3,	// (0x0008ff45) cntbar_detail_btn_pane

0x87e3,	// (0x0008ff55) cntbar_detail_btn_pane_cp01_ParamLimits

0x87e3,	// (0x0008ff55) cntbar_detail_btn_pane_cp01

0x87ff,	// (0x0008ff71) cntbar_detail_list_shct_pane_ParamLimits

0x880b,	// (0x0008ff7d) cntbar_detail_pane_g1_ParamLimits

0x880b,	// (0x0008ff7d) cntbar_detail_pane_g1

0x8817,	// (0x0008ff89) cntbar_detail_pane_t1_ParamLimits

0x8817,	// (0x0008ff89) cntbar_detail_pane_t1

0x88de,	// (0x00090050) cntbar_detail_list_event_pane_g3_ParamLimits

0x88de,	// (0x00090050) cntbar_detail_list_event_pane_g3

0x88f6,	// (0x00090068) cntbar_detail_list_event_pane_g4_ParamLimits

0x88f6,	// (0x00090068) cntbar_detail_list_event_pane_g4

0x890e,	// (0x00090080) cntbar_detail_list_event_pane_g5_ParamLimits

0x890e,	// (0x00090080) cntbar_detail_list_event_pane_g5

0x8926,	// (0x00090098) cntbar_detail_list_event_pane_g6_ParamLimits

0x8926,	// (0x00090098) cntbar_detail_list_event_pane_g6

0x8968,	// (0x000900da) cntbar_detail_list_event_pane_t3_ParamLimits

0x8968,	// (0x000900da) cntbar_detail_list_event_pane_t3

0x897a,	// (0x000900ec) popup_notif_wgt_window_ParamLimits

0x897a,	// (0x000900ec) popup_notif_wgt_window

0x898a,	// (0x000900fc) popup_submenu_window_cp01_ParamLimits

0x898a,	// (0x000900fc) popup_submenu_window_cp01

0xb792,	// (0x00092f04) bg_popup_window_pane_cp10

0xe6ff,	// (0x00095e71) listscroll_notif_wgt_pane

0xe711,	// (0x00095e83) list_notif_wgt_window

0xe71a,	// (0x00095e8c) scroll_pane_cp033

0x8998,	// (0x0009010a) list_notif_wgt_row_pane_ParamLimits

0x8998,	// (0x0009010a) list_notif_wgt_row_pane

0xe723,	// (0x00095e95) aid_size_list_notif_wgt_del

0xe730,	// (0x00095ea2) list_notif_wgt_row_pane_g1

0xe73c,	// (0x00095eae) list_notif_wgt_row_pane_g2

0xe74b,	// (0x00095ebd) list_notif_wgt_row_pane_g3

0x0002,

0xfd2d,	// (0x0009749f) list_notif_wgt_row_pane_g

0xe758,	// (0x00095eca) list_notif_wgt_row_pane_t1

0xe76e,	// (0x00095ee0) list_notif_wgt_row_pane_t2

0xe780,	// (0x00095ef2) list_notif_wgt_row_pane_t3

0x0002,

0xfd34,	// (0x000974a6) list_notif_wgt_row_pane_t

0x07c6,	// (0x00087f38) list_recal_day_event_pane_g1

0xe792,	// (0x00095f04) list_recal_day_event_pane_t1

0xaded,	// (0x0009255f) bg_button_pane_cp045

0x89aa,	// (0x0009011c) cntbar_detail_btn_pane_t1

0xc375,	// (0x00093ae7) main_callh_pane_ParamLimits

0xc375,	// (0x00093ae7) main_callh_pane

0xaded,	// (0x0009255f) main_coverflow0_pane

0xaded,	// (0x0009255f) main_wgtman_pane

0x7d8c,	// (0x0008f4fe) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7d8c,	// (0x0008f4fe) main_fs_bigclock_unlock_btn_pane

0x826f,	// (0x0008f9e1) bg_button_pane_cp16

0x827f,	// (0x0008f9f1) cell_tport_appsw_pane_g3

0x89b8,	// (0x0009012a) cf0_flow_pane_ParamLimits

0x89b8,	// (0x0009012a) cf0_flow_pane

0xe7a1,	// (0x00095f13) listscroll_cf0_pane

0xe7ac,	// (0x00095f1e) main_cf0_pane_g1

0x89c7,	// (0x00090139) main_cf0_pane_t1_ParamLimits

0x89c7,	// (0x00090139) main_cf0_pane_t1

0x89db,	// (0x0009014d) main_cf0_pane_t2_ParamLimits

0x89db,	// (0x0009014d) main_cf0_pane_t2

0x0001,

0xfd40,	// (0x000974b2) main_cf0_pane_t_ParamLimits

0xfd40,	// (0x000974b2) main_cf0_pane_t

0xe7be,	// (0x00095f30) scroll_pane_cp11

0x89ef,	// (0x00090161) cf0_flow_pane_g1

0x89f7,	// (0x00090169) cf0_flow_pane_g2

0x0001,

0xfd45,	// (0x000974b7) cf0_flow_pane_g

0x89ff,	// (0x00090171) cf0_flow_pane_t1

0xaded,	// (0x0009255f) main_call6_pane

0xaded,	// (0x0009255f) main_calllock_pane

0x8a0d,	// (0x0009017f) call6_btn_grp_pane_ParamLimits

0x8a0d,	// (0x0009017f) call6_btn_grp_pane

0x8a1c,	// (0x0009018e) call6_pane_g1_ParamLimits

0x8a1c,	// (0x0009018e) call6_pane_g1

0x8a2c,	// (0x0009019e) popup_call6_1st_window_ParamLimits

0x8a2c,	// (0x0009019e) popup_call6_1st_window

0x8a3a,	// (0x000901ac) popup_call6_2nd_window_ParamLimits

0x8a3a,	// (0x000901ac) popup_call6_2nd_window

0x8a48,	// (0x000901ba) cell_call6_btn_pane_ParamLimits

0x8a48,	// (0x000901ba) cell_call6_btn_pane

0xb792,	// (0x00092f04) bg_popup_call2_in_pane_cp03

0xe7c9,	// (0x00095f3b) popup_call6_1st_window_g1

0xe7d1,	// (0x00095f43) popup_call6_1st_window_g2

0xe7d9,	// (0x00095f4b) popup_call6_1st_window_g3

0x0002,

0xfd4a,	// (0x000974bc) popup_call6_1st_window_g

0xe7e1,	// (0x00095f53) popup_call6_1st_window_t1

0xe7f0,	// (0x00095f62) popup_call6_1st_window_t2

0xe7fe,	// (0x00095f70) popup_call6_1st_window_t3

0x0002,

0xfd51,	// (0x000974c3) popup_call6_1st_window_t

0xb792,	// (0x00092f04) bg_popup_call2_in_pane_cp04

0xe80c,	// (0x00095f7e) popup_call6_2nd_window_g1

0xe814,	// (0x00095f86) popup_call6_2nd_window_g2

0xe81c,	// (0x00095f8e) popup_call6_2nd_window_g3

0x0002,

0xfd58,	// (0x000974ca) popup_call6_2nd_window_g

0xe824,	// (0x00095f96) popup_call6_2nd_window_t1

0x1c34,	// (0x000893a6) bg_button_pane_cp15

0x8a57,	// (0x000901c9) cell_call6_btn_pane_g1

0x8a60,	// (0x000901d2) cell_call6_btn_pane_t1

0x8a6f,	// (0x000901e1) listscroll_wgtman_pane_ParamLimits

0x8a6f,	// (0x000901e1) listscroll_wgtman_pane

0x8a8b,	// (0x000901fd) wgtman_btn_pane_ParamLimits

0x8a8b,	// (0x000901fd) wgtman_btn_pane

0xbf1f,	// (0x00093691) aid_scroll_copy1

0xe833,	// (0x00095fa5) list_wgtman_pane

0x8ac0,	// (0x00090232) wgtman_btn_pane_g1_ParamLimits

0x8ac0,	// (0x00090232) wgtman_btn_pane_g1

0x8ae8,	// (0x0009025a) wgtman_btn_pane_t1_ParamLimits

0x8ae8,	// (0x0009025a) wgtman_btn_pane_t1

0xe83d,	// (0x00095faf) wgtman_btn_pane_t2_ParamLimits

0xe83d,	// (0x00095faf) wgtman_btn_pane_t2

0x0001,

0xfd5f,	// (0x000974d1) wgtman_btn_pane_t_ParamLimits

0xfd5f,	// (0x000974d1) wgtman_btn_pane_t

0x8b1f,	// (0x00090291) listrow_wgtman_pane_ParamLimits

0x8b1f,	// (0x00090291) listrow_wgtman_pane

0x8b3b,	// (0x000902ad) listrow_wgtman_pane_g1

0x8b48,	// (0x000902ba) listrow_wgtman_pane_g2

0x0001,

0xfd64,	// (0x000974d6) listrow_wgtman_pane_g

0x8b66,	// (0x000902d8) listrow_wgtman_pane_t1

0x8b7e,	// (0x000902f0) listrow_wgtman_pane_t2

0x0001,

0xfd69,	// (0x000974db) listrow_wgtman_pane_t

0x8ba4,	// (0x00090316) wait_bar_pane_cp09

0xe854,	// (0x00095fc6) main_calllock_btn_pane

0xe85e,	// (0x00095fd0) main_calllock_pane_g1

0xaded,	// (0x0009255f) bg_button_pane_cp17

0xe866,	// (0x00095fd8) main_calllock_btn_pane_g1

0xe86f,	// (0x00095fe1) main_calllock_btn_pane_t1

0xaded,	// (0x0009255f) main_dialer3_pane

0xaded,	// (0x0009255f) main_fmrd2_pane

0xb52c,	// (0x00092c9e) main_fs_bigclock_unlock_btn_pane_g1

0x8bbe,	// (0x00090330) main_fs_bigclock_unlock_btn_pane_t1

0x8bcc,	// (0x0009033e) area_fmrd2_info_pane_ParamLimits

0x8bcc,	// (0x0009033e) area_fmrd2_info_pane

0x8bda,	// (0x0009034c) area_fmrd2_visual_pane_ParamLimits

0x8bda,	// (0x0009034c) area_fmrd2_visual_pane

0x8be8,	// (0x0009035a) fmrd2_indi_pane_ParamLimits

0x8be8,	// (0x0009035a) fmrd2_indi_pane

0x8bf5,	// (0x00090367) area_fmrd2_visual_pane_g1

0x8bfd,	// (0x0009036f) area_fmrd2_visual_pane_t1

0x8c0d,	// (0x0009037f) area_fmrd2_visual_pane_t2

0x8c1d,	// (0x0009038f) area_fmrd2_visual_pane_t3

0x0002,

0xfd73,	// (0x000974e5) area_fmrd2_visual_pane_t

0x8c2d,	// (0x0009039f) area_fmrd2_info_pane_g1

0x8c35,	// (0x000903a7) area_fmrd2_info_pane_t1

0x8c45,	// (0x000903b7) area_fmrd2_info_pane_t2

0x8c55,	// (0x000903c7) area_fmrd2_info_pane_t3

0x8c65,	// (0x000903d7) area_fmrd2_info_pane_t4

0x0003,

0xfd7a,	// (0x000974ec) area_fmrd2_info_pane_t

0x8c73,	// (0x000903e5) fmrd2_indi_pane_t1

0x8c83,	// (0x000903f5) fmrd2_indi_pane_t2

0x8c93,	// (0x00090405) fmrd2_indi_pane_t3

0x0002,

0xfd83,	// (0x000974f5) fmrd2_indi_pane_t

0xa865,	// (0x00091fd7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xa865,	// (0x00091fd7) list_single_fs_bigclock_indicator_pane_g5

0xa916,	// (0x00092088) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xa916,	// (0x00092088) list_single_fs_bigclock_indicator_pane_t5

0x0436,	// (0x00087ba8) aid_cell_bcale_month_pane_ParamLimits

0x0436,	// (0x00087ba8) aid_cell_bcale_month_pane

0x0436,	// (0x00087ba8) bcale_month_pane_ParamLimits

0x0436,	// (0x00087ba8) bcale_month_pane

0x076f,	// (0x00087ee1) bcale_preview_pane_ParamLimits

0x076f,	// (0x00087ee1) bcale_preview_pane

0xe620,	// (0x00095d92) list_single_fs_bigclock_pane_t1_ParamLimits

0xe63f,	// (0x00095db1) list_single_fs_bigclock_pane_t2_ParamLimits

0xe63f,	// (0x00095db1) list_single_fs_bigclock_pane_t2

0x0001,

0xfcfe,	// (0x00097470) list_single_fs_bigclock_pane_t_ParamLimits

0xfcfe,	// (0x00097470) list_single_fs_bigclock_pane_t

0x8bb6,	// (0x00090328) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd6e,	// (0x000974e0) main_fs_bigclock_unlock_btn_pane_g

0x8ca1,	// (0x00090413) aid_dia3_key_size_ParamLimits

0x8ca1,	// (0x00090413) aid_dia3_key_size

0x8cad,	// (0x0009041f) aid_dia3_listrow_size_ParamLimits

0x8cad,	// (0x0009041f) aid_dia3_listrow_size

0x8cbd,	// (0x0009042f) dia3_keypad_fun_pane_ParamLimits

0x8cbd,	// (0x0009042f) dia3_keypad_fun_pane

0x8ccf,	// (0x00090441) dia3_keypad_num_pane_ParamLimits

0x8ccf,	// (0x00090441) dia3_keypad_num_pane

0x8ce1,	// (0x00090453) dia3_listscroll_pane_ParamLimits

0x8ce1,	// (0x00090453) dia3_listscroll_pane

0x8cef,	// (0x00090461) dia3_numentry_pane_ParamLimits

0x8cef,	// (0x00090461) dia3_numentry_pane

0xe87e,	// (0x00095ff0) dia3_list_pane

0xe889,	// (0x00095ffb) scroll_pane_cp12

0xaded,	// (0x0009255f) bg_dia3_numentry_pane

0x8cfd,	// (0x0009046f) dia3_numentry_pane_t1

0x8d0c,	// (0x0009047e) cell_dia3_key_num_pane

0x8d14,	// (0x00090486) cell_dia3_key0_fun_pane_ParamLimits

0x8d14,	// (0x00090486) cell_dia3_key0_fun_pane

0x8d21,	// (0x00090493) cell_dia3_key1_fun_pane_ParamLimits

0x8d21,	// (0x00090493) cell_dia3_key1_fun_pane

0x8d2e,	// (0x000904a0) dia3_listrow_pane

0xa5b8,	// (0x00091d2a) bg_dia3_numentry_pane_g1

0xaded,	// (0x0009255f) bg_button_pane_cp21

0xe894,	// (0x00096006) cell_dia3_key_num_pane_t1

0xe8a2,	// (0x00096014) cell_dia3_key_num_pane_t2

0xe8b1,	// (0x00096023) cell_dia3_key_num_pane_t3

0xe8c0,	// (0x00096032) cell_dia3_key_num_pane_t4

0x0003,

0xfd8a,	// (0x000974fc) cell_dia3_key_num_pane_t

0xaded,	// (0x0009255f) bg_button_pane_cp19

0x8d3b,	// (0x000904ad) cell_dia3_key0_fun_pane_g1

0xaded,	// (0x0009255f) bg_button_pane_cp20

0x8d43,	// (0x000904b5) cell_dia3_key1_fun_pane_g1

0xada8,	// (0x0009251a) area_left_week_number_pane

0xada8,	// (0x0009251a) area_top_day_name_pane

0xada8,	// (0x0009251a) frame_month_view_pane

0xada8,	// (0x0009251a) grid_month_view_pane

0xada8,	// (0x0009251a) cell_top_day_name_pane_ParamLimits

0xada8,	// (0x0009251a) cell_top_day_name_pane

0xada8,	// (0x0009251a) cell_area_left_week_number_pane_ParamLimits

0xada8,	// (0x0009251a) cell_area_left_week_number_pane

0xada8,	// (0x0009251a) cell_month_view_pane_ParamLimits

0xada8,	// (0x0009251a) cell_month_view_pane

0xadb4,	// (0x00092526) frm_month_g1

0xadb4,	// (0x00092526) frm_month_g2

0xadb4,	// (0x00092526) frm_month_g3

0xadb4,	// (0x00092526) frm_month_g4

0xadb4,	// (0x00092526) frm_month_g5

0xadb4,	// (0x00092526) frm_month_g6

0xadb4,	// (0x00092526) frm_month_g7

0xadb4,	// (0x00092526) frm_month_g8

0xadb4,	// (0x00092526) frm_month_g9

0xadb4,	// (0x00092526) frm_month_g10

0xadb4,	// (0x00092526) frm_month_g11

0xadb4,	// (0x00092526) frm_month_g12

0xadb4,	// (0x00092526) frm_month_g13

0xadb4,	// (0x00092526) frm_month_g14

0xadb4,	// (0x00092526) frm_month_g15

0xadb4,	// (0x00092526) frm_month_g16

0x000f,

0xfd93,	// (0x00097505) frm_month_g

0xe8cf,	// (0x00096041) cell_top_day_name_pane_t1

0xadb4,	// (0x00092526) cell_area_left_week_number_pane_g1

0xe8cf,	// (0x00096041) cell_area_left_week_number_pane_t1

0xadb4,	// (0x00092526) cell_month_view_pane_g1

0xe8cf,	// (0x00096041) cell_month_view_pane_t1

0xaded,	// (0x0009255f) main_fps_pane

0xaada,	// (0x0009224c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xaada,	// (0x0009224c) cmail_ddmenu_btn02_pane_cp1

0xaaf6,	// (0x00092268) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xaaf6,	// (0x00092268) cmail_ddmenu_btn02_pane_cp2

0x8684,	// (0x0008fdf6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8684,	// (0x0008fdf6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcb1,	// (0x00097423) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcb1,	// (0x00097423) cmail_ddmenu_btn02_pane_g

0x86a2,	// (0x0008fe14) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x86a2,	// (0x0008fe14) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcb6,	// (0x00097428) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcb6,	// (0x00097428) cmail_ddmenu_btn02_pane_t

0x8d4b,	// (0x000904bd) fps_text_pane_ParamLimits

0x8d4b,	// (0x000904bd) fps_text_pane

0x8d58,	// (0x000904ca) main_fps_pane_g1_ParamLimits

0x8d58,	// (0x000904ca) main_fps_pane_g1

0x8d66,	// (0x000904d8) wait_bar_pane_cp010_ParamLimits

0x8d66,	// (0x000904d8) wait_bar_pane_cp010

0x8d72,	// (0x000904e4) fps_text_pane_t1_ParamLimits

0x8d72,	// (0x000904e4) fps_text_pane_t1

0x5f67,	// (0x0008d6d9) cam4_image_uncrop_pane_g1

0x5f70,	// (0x0008d6e2) cam4_image_uncrop_pane_g2

0x5f79,	// (0x0008d6eb) cam4_image_uncrop_pane_g3

0x5f82,	// (0x0008d6f4) cam4_image_uncrop_pane_g4

0x0003,

0xf7f8,	// (0x00096f6a) cam4_image_uncrop_pane_g

0x8d2e,	// (0x000904a0) dia3_listrow_pane_ParamLimits

0xaded,	// (0x0009255f) main_phob2_pane

0x8251,	// (0x0008f9c3) cell_tport_appsw_pane_cp02_ParamLimits

0x8251,	// (0x0008f9c3) cell_tport_appsw_pane_cp02

0x8260,	// (0x0008f9d2) cell_tport_appsw_pane_cp03_ParamLimits

0x8260,	// (0x0008f9d2) cell_tport_appsw_pane_cp03

0xaded,	// (0x0009255f) phob2_contact_card_pane

0xaded,	// (0x0009255f) phob2_listscroll_pane

0xe8e1,	// (0x00096053) phob2_list_pane

0xe3dd,	// (0x00095b4f) scroll_pane_cp034

0x8d8b,	// (0x000904fd) phob2_cc_data_pane_ParamLimits

0x8d8b,	// (0x000904fd) phob2_cc_data_pane

0x8da5,	// (0x00090517) phob2_cc_listscroll_pane_ParamLimits

0x8da5,	// (0x00090517) phob2_cc_listscroll_pane

0x8b1f,	// (0x00090291) list_double_large_graphic_phob2_pane_ParamLimits

0x8b1f,	// (0x00090291) list_double_large_graphic_phob2_pane

0x8dbf,	// (0x00090531) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8dbf,	// (0x00090531) list_double_large_graphic_phob2_pane_g1

0x8dcc,	// (0x0009053e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8dcc,	// (0x0009053e) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdb4,	// (0x00097526) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdb4,	// (0x00097526) list_double_large_graphic_phob2_pane_g

0x8df2,	// (0x00090564) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8df2,	// (0x00090564) list_double_large_graphic_phob2_pane_t1

0x8e07,	// (0x00090579) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8e07,	// (0x00090579) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdbd,	// (0x0009752f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdbd,	// (0x0009752f) list_double_large_graphic_phob2_pane_t

0xb4e0,	// (0x00092c52) list_highlight_pane_cp024

0xe8e9,	// (0x0009605b) phob2_cc_button_pane

0x8e1c,	// (0x0009058e) phob2_cc_data_pane_g1_ParamLimits

0x8e1c,	// (0x0009058e) phob2_cc_data_pane_g1

0x8e2b,	// (0x0009059d) phob2_cc_data_pane_g2_ParamLimits

0x8e2b,	// (0x0009059d) phob2_cc_data_pane_g2

0x0001,

0xfdc2,	// (0x00097534) phob2_cc_data_pane_g_ParamLimits

0xfdc2,	// (0x00097534) phob2_cc_data_pane_g

0x8e3a,	// (0x000905ac) phob2_cc_data_pane_t1_ParamLimits

0x8e3a,	// (0x000905ac) phob2_cc_data_pane_t1

0x8e4f,	// (0x000905c1) phob2_cc_data_pane_t2_ParamLimits

0x8e4f,	// (0x000905c1) phob2_cc_data_pane_t2

0x8e64,	// (0x000905d6) phob2_cc_data_pane_t3_ParamLimits

0x8e64,	// (0x000905d6) phob2_cc_data_pane_t3

0x0002,

0xfdc7,	// (0x00097539) phob2_cc_data_pane_t_ParamLimits

0xfdc7,	// (0x00097539) phob2_cc_data_pane_t

0xe8f1,	// (0x00096063) phob2_cc_list_pane_ParamLimits

0xe8f1,	// (0x00096063) phob2_cc_list_pane

0xa4db,	// (0x00091c4d) scroll_pane_cp035_ParamLimits

0xa4db,	// (0x00091c4d) scroll_pane_cp035

0xb14f,	// (0x000928c1) bg_button_pane_cp033

0xe90c,	// (0x0009607e) phob2_cc_button_pane_g1

0xe918,	// (0x0009608a) phob2_cc_button_pane_t1

0xe92d,	// (0x0009609f) phob2_cc_button_pane_t2

0x0001,

0xfdce,	// (0x00097540) phob2_cc_button_pane_t

0x8e79,	// (0x000905eb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8e79,	// (0x000905eb) list_double_large_graphic_phob2_cc_pane

0x8eed,	// (0x0009065f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8eed,	// (0x0009065f) list_double_large_graphic_phob2_cc_pane_g1

0x8efe,	// (0x00090670) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8efe,	// (0x00090670) list_double_large_graphic_phob2_cc_pane_g2

0x8f0d,	// (0x0009067f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8f0d,	// (0x0009067f) list_double_large_graphic_phob2_cc_pane_g3

0x8f1c,	// (0x0009068e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8f1c,	// (0x0009068e) list_double_large_graphic_phob2_cc_pane_g4

0x8f2d,	// (0x0009069f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8f2d,	// (0x0009069f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdd3,	// (0x00097545) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdd3,	// (0x00097545) list_double_large_graphic_phob2_cc_pane_g

0x8f3c,	// (0x000906ae) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8f3c,	// (0x000906ae) list_double_large_graphic_phob2_cc_pane_t1

0x8f65,	// (0x000906d7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8f65,	// (0x000906d7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdde,	// (0x00097550) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdde,	// (0x00097550) list_double_large_graphic_phob2_cc_pane_t

0xe93f,	// (0x000960b1) list_highlight_pane_cp025_ParamLimits

0xe93f,	// (0x000960b1) list_highlight_pane_cp025

0xb14f,	// (0x000928c1) bg_button_pane_cp033_ParamLimits

0xe90c,	// (0x0009607e) phob2_cc_button_pane_g1_ParamLimits

0xe918,	// (0x0009608a) phob2_cc_button_pane_t1_ParamLimits

0xe92d,	// (0x0009609f) phob2_cc_button_pane_t2_ParamLimits

0xfdce,	// (0x00097540) phob2_cc_button_pane_t_ParamLimits

0x1c28,	// (0x0008939a) popup_wgtman_window

0x0683,	// (0x00087df5) scroll_pane_cp038

0x8aa8,	// (0x0009021a) wgtman_btn_pane_cp_01_ParamLimits

0x8aa8,	// (0x0009021a) wgtman_btn_pane_cp_01

0xe94d,	// (0x000960bf) wgtman_content_pane

0xe956,	// (0x000960c8) wgtman_heading_pane

0xaded,	// (0x0009255f) bg_heading_pane_cp02

0xe95f,	// (0x000960d1) wgtman_heading_pane_g1

0xe967,	// (0x000960d9) wgtman_heading_pane_t1

0xe975,	// (0x000960e7) scroll_pane_cp036

0xe97d,	// (0x000960ef) wgtman_list_pane

0xadc0,	// (0x00092532) wgtman_list_pane_t1_ParamLimits

0xadc0,	// (0x00092532) wgtman_list_pane_t1

0x5ec6,	// (0x0008d638) cam4_grid_pane

0x6cd3,	// (0x0008e445) bg_button_pane_cp015_ParamLimits

0x6ce8,	// (0x0008e45a) bg_button_pane_cp016_ParamLimits

0x6cf4,	// (0x0008e466) bg_button_pane_cp017_ParamLimits

0x6d4c,	// (0x0008e4be) popup_vitu2_query_window_g3_ParamLimits

0x6d4c,	// (0x0008e4be) popup_vitu2_query_window_g3

0x6ded,	// (0x0008e55f) popup_vitu2_query_window_t6_ParamLimits

0x6ded,	// (0x0008e55f) popup_vitu2_query_window_t6

0x6e18,	// (0x0008e58a) popup_vitu2_query_window_t7_ParamLimits

0x6e18,	// (0x0008e58a) popup_vitu2_query_window_t7

0xaddb,	// (0x0009254d) cam4_grid_pane_g1

0xade4,	// (0x00092556) cam4_grid_pane_g2

0xe985,	// (0x000960f7) cam4_grid_pane_g3

0xe98e,	// (0x00096100) cam4_grid_pane_g4

0x0003,

0xfde3,	// (0x00097555) cam4_grid_pane_g

0x2671,	// (0x00089de3) aid_placing_vt_slider_lsc_ParamLimits

0x29b1,	// (0x0008a123) vidtel_button_pane_ParamLimits

0x29b1,	// (0x0008a123) vidtel_button_pane

0xaded,	// (0x0009255f) bg_button_pane_cp034

0xe999,	// (0x0009610b) vidtel_button_pane_g1

0xe9a1,	// (0x00096113) vidtel_button_pane_t1

0x07b6,	// (0x00087f28) aid_size_vtel_slider_touch

0xa4db,	// (0x00091c4d) scroll_pane_cp039

0x7b44,	// (0x0008f2b6) ncim_query_button_pane_cp01_ParamLimits

0x7b63,	// (0x0008f2d5) ncimui_query_pane_g1_ParamLimits

0xb14f,	// (0x000928c1) input_focus_pane_cp012_ParamLimits

0xa5fe,	// (0x00091d70) ncim_query_entry_pane_t1_ParamLimits

0xa4db,	// (0x00091c4d) scroll_pane_cp039_ParamLimits

0xbff6,	// (0x00093768) navi_pane_bcale_mc_g1

0xbffe,	// (0x00093770) navi_pane_bcale_mc_t1

0xab2a,	// (0x0009229c) main_sp_fs_email_pane_g1

0xab36,	// (0x000922a8) main_sp_fs_email_pane_g2

0x0001,

0xfbe9,	// (0x0009735b) main_sp_fs_email_pane_g

0xad68,	// (0x000924da) list_single_cale_mrui_row_pane_g3_ParamLimits

0xad68,	// (0x000924da) list_single_cale_mrui_row_pane_g3

0x86c2,	// (0x0008fe34) list_single_recal_day_pane_g5_event_pane

0xe48a,	// (0x00095bfc) list_single_recal_day_pane_g7

0xe9b7,	// (0x00096129) list_recal_day_event_pane_cp01

0xe9c0,	// (0x00096132) list_recal_vselct_arw_lo_pane_cp01

0xe9c8,	// (0x0009613a) list_recal_vselct_arw_up_pane_cp01

0xe9d0,	// (0x00096142) list_recal_vselct_pane_cp01

0x07c6,	// (0x00087f38) list_recal_day_event_pane_cp01_g1

0xe9da,	// (0x0009614c) list_recal_day_event_pane_cp01_t1

0xe492,	// (0x00095c04) list_single_recal_day_pane_t1_ParamLimits

0xe4a4,	// (0x00095c16) list_single_recal_day_pane_t2_ParamLimits

0xfcc6,	// (0x00097438) list_single_recal_day_pane_t_ParamLimits

0xb473,	// (0x00092be5) bg_notes_pane_ParamLimits

0xb568,	// (0x00092cda) list_notes_pane_ParamLimits

0x1d75,	// (0x000894e7) scroll_pane_cp06_ParamLimits

0xb58a,	// (0x00092cfc) main_notes_pane_ParamLimits

0xb14f,	// (0x000928c1) main_welc_pane

0x8fbc,	// (0x0009072e) main_welc_body_pane_ParamLimits

0x8fbc,	// (0x0009072e) main_welc_body_pane

0x8fd5,	// (0x00090747) main_welc_opti_pane_ParamLimits

0x8fd5,	// (0x00090747) main_welc_opti_pane

0x902a,	// (0x0009079c) main_welc_pane_t1_ParamLimits

0x902a,	// (0x0009079c) main_welc_pane_t1

0x91d6,	// (0x00090948) main_welc_body_row_pane_ParamLimits

0x91d6,	// (0x00090948) main_welc_body_row_pane

0xb4e0,	// (0x00092c52) main_welc_opti_row_pane_ParamLimits

0xb4e0,	// (0x00092c52) main_welc_opti_row_pane

0xe9f0,	// (0x00096162) main_welc_opti_row_pane_g1

0x91ff,	// (0x00090971) main_welc_opti_row_pane_t1

0xe9f8,	// (0x0009616a) main_welc_body_row_pane_t1

0xe709,	// (0x00095e7b) popup_notif_wgt_heading_pane

0xe723,	// (0x00095e95) aid_size_list_notif_wgt_del_ParamLimits

0xe730,	// (0x00095ea2) list_notif_wgt_row_pane_g1_ParamLimits

0xe73c,	// (0x00095eae) list_notif_wgt_row_pane_g2_ParamLimits

0xe74b,	// (0x00095ebd) list_notif_wgt_row_pane_g3_ParamLimits

0xfd2d,	// (0x0009749f) list_notif_wgt_row_pane_g_ParamLimits

0xe758,	// (0x00095eca) list_notif_wgt_row_pane_t1_ParamLimits

0xe76e,	// (0x00095ee0) list_notif_wgt_row_pane_t2_ParamLimits

0xe780,	// (0x00095ef2) list_notif_wgt_row_pane_t3_ParamLimits

0xfd34,	// (0x000974a6) list_notif_wgt_row_pane_t_ParamLimits

0x8b3b,	// (0x000902ad) listrow_wgtman_pane_g1_ParamLimits

0x8b48,	// (0x000902ba) listrow_wgtman_pane_g2_ParamLimits

0xfd64,	// (0x000974d6) listrow_wgtman_pane_g_ParamLimits

0x8b66,	// (0x000902d8) listrow_wgtman_pane_t1_ParamLimits

0x8b7e,	// (0x000902f0) listrow_wgtman_pane_t2_ParamLimits

0xfd69,	// (0x000974db) listrow_wgtman_pane_t_ParamLimits

0x8ba4,	// (0x00090316) wait_bar_pane_cp09_ParamLimits

0xaded,	// (0x0009255f) bg_popup_heading_pane_cp02

0xea07,	// (0x00096179) popup_notif_wgt_heading_pane_g1

0xea0f,	// (0x00096181) popup_notif_wgt_heading_pane_t1

0xaded,	// (0x0009255f) main_vids_pane

0xaded,	// (0x0009255f) vids_listscroll_pane

0x920e,	// (0x00090980) scroll_pane_cp040

0xaded,	// (0x0009255f) vids_list_pane

0x9219,	// (0x0009098b) vids_list_double_pane_ParamLimits

0x9219,	// (0x0009098b) vids_list_double_pane

0x9231,	// (0x000909a3) vids_list_double_pane_g1

0x923a,	// (0x000909ac) vids_list_double_pane_t1

0x924a,	// (0x000909bc) vids_list_double_pane_t2

0x0001,

0xfe02,	// (0x00097574) vids_list_double_pane_t

0x465c,	// (0x0008bdce) main_ncimui_pane_ParamLimits

0x799b,	// (0x0008f10d) main_ncimui_pane_g1_ParamLimits

0x79a7,	// (0x0008f119) main_ncimui_pane_g2_ParamLimits

0x79a7,	// (0x0008f119) main_ncimui_pane_g2

0x0001,

0xfaea,	// (0x0009725c) main_ncimui_pane_g_ParamLimits

0xfaea,	// (0x0009725c) main_ncimui_pane_g

0x8fee,	// (0x00090760) main_welc_pane_g1_ParamLimits

0x8fee,	// (0x00090760) main_welc_pane_g1

0x8ffa,	// (0x0009076c) main_welc_pane_g2_ParamLimits

0x8ffa,	// (0x0009076c) main_welc_pane_g2

0x0003,

0xfdec,	// (0x0009755e) main_welc_pane_g_ParamLimits

0xfdec,	// (0x0009755e) main_welc_pane_g

0xb473,	// (0x00092be5) listscroll_mce_pane_ParamLimits

0xc14b,	// (0x000938bd) wait_bar_pane_cp10

0xd4a3,	// (0x00094c15) main_cale_day_pane_ParamLimits

0xd4a3,	// (0x00094c15) main_cale_week_pane_ParamLimits

0xb473,	// (0x00092be5) main_messa_pane_ParamLimits

0x5365,	// (0x0008cad7) main_clock2_btn_pane_ParamLimits

0x5365,	// (0x0008cad7) main_clock2_btn_pane

0xdd26,	// (0x00095498) main_clock2_btn_pane_cp01_ParamLimits

0xdd26,	// (0x00095498) main_clock2_btn_pane_cp01

0xad47,	// (0x000924b9) list_cale_mrui_pane_ParamLimits

0xe7b6,	// (0x00095f28) main_cf0_pane_g2

0x0001,

0xfd3b,	// (0x000974ad) main_cf0_pane_g

0xada8,	// (0x0009251a) area_left_week_number_pane_ParamLimits

0xada8,	// (0x0009251a) area_top_day_name_pane_ParamLimits

0xada8,	// (0x0009251a) frame_month_view_pane_ParamLimits

0xada8,	// (0x0009251a) grid_month_view_pane_ParamLimits

0xadb4,	// (0x00092526) frm_month_g1_ParamLimits

0xadb4,	// (0x00092526) frm_month_g2_ParamLimits

0xadb4,	// (0x00092526) frm_month_g3_ParamLimits

0xadb4,	// (0x00092526) frm_month_g4_ParamLimits

0xadb4,	// (0x00092526) frm_month_g5_ParamLimits

0xadb4,	// (0x00092526) frm_month_g6_ParamLimits

0xadb4,	// (0x00092526) frm_month_g7_ParamLimits

0xadb4,	// (0x00092526) frm_month_g8_ParamLimits

0xadb4,	// (0x00092526) frm_month_g9_ParamLimits

0xadb4,	// (0x00092526) frm_month_g10_ParamLimits

0xadb4,	// (0x00092526) frm_month_g11_ParamLimits

0xadb4,	// (0x00092526) frm_month_g12_ParamLimits

0xadb4,	// (0x00092526) frm_month_g13_ParamLimits

0xadb4,	// (0x00092526) frm_month_g14_ParamLimits

0xadb4,	// (0x00092526) frm_month_g15_ParamLimits

0xadb4,	// (0x00092526) frm_month_g16_ParamLimits

0xfd93,	// (0x00097505) frm_month_g_ParamLimits

0xe8cf,	// (0x00096041) cell_top_day_name_pane_t1_ParamLimits

0xadb4,	// (0x00092526) cell_area_left_week_number_pane_g1_ParamLimits

0xe8cf,	// (0x00096041) cell_area_left_week_number_pane_t1_ParamLimits

0xadb4,	// (0x00092526) cell_month_view_pane_g1_ParamLimits

0xe8cf,	// (0x00096041) cell_month_view_pane_t1_ParamLimits

0xb46b,	// (0x00092bdd) main_clock2_btn_pane_g1

0xea1d,	// (0x0009618f) main_clock2_btn_pane_t1

0xb14f,	// (0x000928c1) listscroll_cmail_pane_ParamLimits

0xab2a,	// (0x0009229c) main_sp_fs_email_pane_g1_ParamLimits

0xab36,	// (0x000922a8) main_sp_fs_email_pane_g2_ParamLimits

0xfbe9,	// (0x0009735b) main_sp_fs_email_pane_g_ParamLimits

0xe3fa,	// (0x00095b6c) list_recal_day_pane_ParamLimits

0xe40b,	// (0x00095b7d) mian_recal_day_pane_t1

0x813f,	// (0x0008f8b1) list_single_dyc_row_text_pane_t4_ParamLimits

0x813f,	// (0x0008f8b1) list_single_dyc_row_text_pane_t4

0x8176,	// (0x0008f8e8) list_single_dyc_row_text_pane_t5_ParamLimits

0x8176,	// (0x0008f8e8) list_single_dyc_row_text_pane_t5

0xe12c,	// (0x0009589e) list_single_dyc_row_text_pane_t6_ParamLimits

0xe12c,	// (0x0009589e) list_single_dyc_row_text_pane_t6

0x382a,	// (0x0008af9c) aid_mgn_list_cale_time_pane

0x465c,	// (0x0008bdce) main_gallery2_pane_ParamLimits

0xdd3c,	// (0x000954ae) main_clock2_pane_cp01_t1

0xdd4a,	// (0x000954bc) main_clock2_pane_cp01_t3

0x0001,

0xf6d9,	// (0x00096e4b) main_clock2_pane_cp01_t

0x21a7,	// (0x00089919) cale_week_scroll_pane_g16_ParamLimits

0x21a7,	// (0x00089919) cale_week_scroll_pane_g16

0xb792,	// (0x00092f04) vorec_slider_pane

0xe9a1,	// (0x00096113) vidtel_button_pane_t1_ParamLimits

0x871d,	// (0x0008fe8f) main_fs_bigclock_clock_pane_g1_ParamLimits

0x871d,	// (0x0008fe8f) main_fs_bigclock_clock_pane_g2_ParamLimits

0x871d,	// (0x0008fe8f) main_fs_bigclock_clock_pane_g3_ParamLimits

0x871d,	// (0x0008fe8f) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfce9,	// (0x0009745b) main_fs_bigclock_clock_pane_g_ParamLimits

0x8729,	// (0x0008fe9b) main_fs_bigclock_clock_pane_t1_ParamLimits

0x873d,	// (0x0008feaf) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcf2,	// (0x00097464) main_fs_bigclock_clock_pane_t_ParamLimits

0x4ca6,	// (0x0008c418) main_mup3_lyrics_pane_ParamLimits

0x4ca6,	// (0x0008c418) main_mup3_lyrics_pane

0x927d,	// (0x000909ef) main_mup3_lyrics_pane_t1_ParamLimits

0x927d,	// (0x000909ef) main_mup3_lyrics_pane_t1

0x5871,	// (0x0008cfe3) aid_main_mp4_pane_t1_area

0x587b,	// (0x0008cfed) aid_main_mp4_pane_t2_area

0x5980,	// (0x0008d0f2) main_mp4_pane_g7_ParamLimits

0x5980,	// (0x0008d0f2) main_mp4_pane_g7

0x598c,	// (0x0008d0fe) main_mp4_pane_g8_ParamLimits

0x598c,	// (0x0008d0fe) main_mp4_pane_g8

0x5d88,	// (0x0008d4fa) aid_call6_pane_g1_size

0x8ebf,	// (0x00090631) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8ebf,	// (0x00090631) list_double_large_graphic_phob2_other_pane

0xb68b,	// (0x00092dfd) list_double_large_graphic_phob2_other_pane_g1

0xaded,	// (0x0009255f) list_highlight_pane_cp026

0xb14f,	// (0x000928c1) main_welc_pane_ParamLimits

0x7fae,	// (0x0008f720) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7fae,	// (0x0008f720) main_sp_fs_ctrlbar_pane_g3

0x7fc6,	// (0x0008f738) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7fc6,	// (0x0008f738) main_sp_fs_ctrlbar_pane_g4

0x7ff8,	// (0x0008f76a) toolbar2_fixed_button_pane_cp01

0x8003,	// (0x0008f775) toolbar2_fixed_button_pane_cp02

0x800e,	// (0x0008f780) toolbar2_fixed_button_pane_cp03

0x8fa0,	// (0x00090712) list_welc_entry_pane_ParamLimits

0x8fa0,	// (0x00090712) list_welc_entry_pane

0x9008,	// (0x0009077a) main_welc_pane_g3_ParamLimits

0x9008,	// (0x0009077a) main_welc_pane_g3

0x9044,	// (0x000907b6) main_welc_pane_t2_ParamLimits

0x9044,	// (0x000907b6) main_welc_pane_t2

0x9058,	// (0x000907ca) main_welc_pane_t3_ParamLimits

0x9058,	// (0x000907ca) main_welc_pane_t3

0x0005,

0xfdf5,	// (0x00097567) main_welc_pane_t_ParamLimits

0xfdf5,	// (0x00097567) main_welc_pane_t

0x915e,	// (0x000908d0) welc_button_pane_ParamLimits

0x915e,	// (0x000908d0) welc_button_pane

0x91c8,	// (0x0009093a) welc_service_logo_pane_ParamLimits

0x91c8,	// (0x0009093a) welc_service_logo_pane

0x92b3,	// (0x00090a25) list_single_welc_entry_pane_ParamLimits

0x92b3,	// (0x00090a25) list_single_welc_entry_pane

0x92c4,	// (0x00090a36) list_single_welc_entry_pane_g1

0x92cc,	// (0x00090a3e) list_single_welc_entry_pane_t1

0x92da,	// (0x00090a4c) list_single_welc_entry_pane_t2

0x0001,

0xfe07,	// (0x00097579) list_single_welc_entry_pane_t

0xaded,	// (0x0009255f) bg_button_pane_cp035

0x92e8,	// (0x00090a5a) welc_button_pane_t1

0xea2b,	// (0x0009619d) welc_service_logo_pane_g1

0xea34,	// (0x000961a6) welc_service_logo_pane_g2

0x0001,

0xfe0c,	// (0x0009757e) welc_service_logo_pane_g

0x1c34,	// (0x000893a6) main_int_radio_pane

0xa490,	// (0x00091c02) list_single_fs_dyc_pane_g1

0x8dd8,	// (0x0009054a) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8dd8,	// (0x0009054a) list_double_large_graphic_phob2_pane_g3

0x8de4,	// (0x00090556) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8de4,	// (0x00090556) list_double_large_graphic_phob2_pane_g4

0x92f6,	// (0x00090a68) main_int_radio1_pane_ParamLimits

0x92f6,	// (0x00090a68) main_int_radio1_pane

0xea3d,	// (0x000961af) find_pane_cp02

0x9308,	// (0x00090a7a) input_focus_pane_cp12_ParamLimits

0x9308,	// (0x00090a7a) input_focus_pane_cp12

0x9314,	// (0x00090a86) input_focus_pane_cp13_ParamLimits

0x9314,	// (0x00090a86) input_focus_pane_cp13

0x932c,	// (0x00090a9e) input_focus_pane_cp14_ParamLimits

0x932c,	// (0x00090a9e) input_focus_pane_cp14

0xea46,	// (0x000961b8) int_radio1_listscroll_pane

0x9344,	// (0x00090ab6) main_int_radio1_pane_g1_ParamLimits

0x9344,	// (0x00090ab6) main_int_radio1_pane_g1

0x9354,	// (0x00090ac6) main_int_radio1_pane_t1_ParamLimits

0x9354,	// (0x00090ac6) main_int_radio1_pane_t1

0x9368,	// (0x00090ada) main_int_radio1_pane_t2_ParamLimits

0x9368,	// (0x00090ada) main_int_radio1_pane_t2

0x937c,	// (0x00090aee) main_int_radio1_pane_t3_ParamLimits

0x937c,	// (0x00090aee) main_int_radio1_pane_t3

0x9390,	// (0x00090b02) main_int_radio1_pane_t4_ParamLimits

0x9390,	// (0x00090b02) main_int_radio1_pane_t4

0xea50,	// (0x000961c2) main_int_radio1_pane_t5_ParamLimits

0xea50,	// (0x000961c2) main_int_radio1_pane_t5

0x93a7,	// (0x00090b19) main_int_radio1_pane_t6_ParamLimits

0x93a7,	// (0x00090b19) main_int_radio1_pane_t6

0x93b9,	// (0x00090b2b) main_int_radio1_pane_t7_ParamLimits

0x93b9,	// (0x00090b2b) main_int_radio1_pane_t7

0x93cb,	// (0x00090b3d) main_int_radio1_pane_t8_ParamLimits

0x93cb,	// (0x00090b3d) main_int_radio1_pane_t8

0x93df,	// (0x00090b51) main_int_radio1_pane_t9_ParamLimits

0x93df,	// (0x00090b51) main_int_radio1_pane_t9

0x93f1,	// (0x00090b63) main_int_radio1_pane_t10_ParamLimits

0x93f1,	// (0x00090b63) main_int_radio1_pane_t10

0x9422,	// (0x00090b94) main_int_radio1_pane_t11_ParamLimits

0x9422,	// (0x00090b94) main_int_radio1_pane_t11

0x9453,	// (0x00090bc5) main_int_radio1_pane_t12_ParamLimits

0x9453,	// (0x00090bc5) main_int_radio1_pane_t12

0x000b,

0xfe11,	// (0x00097583) main_int_radio1_pane_t_ParamLimits

0xfe11,	// (0x00097583) main_int_radio1_pane_t

0xea62,	// (0x000961d4) int_radio_list_pane

0xe3dd,	// (0x00095b4f) scroll_pane_cp037

0xea6a,	// (0x000961dc) list_double_large_graphic_int_radio_pane_ParamLimits

0xea6a,	// (0x000961dc) list_double_large_graphic_int_radio_pane

0xea83,	// (0x000961f5) list_double_large_graphic_int_radio_pane_g1

0xea8c,	// (0x000961fe) list_double_large_graphic_int_radio_pane_t1

0xea9a,	// (0x0009620c) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe2a,	// (0x0009759c) list_double_large_graphic_int_radio_pane_t

0xaded,	// (0x0009255f) list_highlight_pane_cp027

0xe9e8,	// (0x0009615a) main_button_pane_4

0x9014,	// (0x00090786) main_welc_pane_g4_ParamLimits

0x9014,	// (0x00090786) main_welc_pane_g4

0x906a,	// (0x000907dc) main_welc_pane_t4_ParamLimits

0x906a,	// (0x000907dc) main_welc_pane_t4

0x907e,	// (0x000907f0) main_welc_pane_t5_ParamLimits

0x907e,	// (0x000907f0) main_welc_pane_t5

0x90b6,	// (0x00090828) main_welc_pane_t6_ParamLimits

0x90b6,	// (0x00090828) main_welc_pane_t6

0x916c,	// (0x000908de) welc_button_pane_2_ParamLimits

0x916c,	// (0x000908de) welc_button_pane_2

0x918a,	// (0x000908fc) welc_button_pane_3_ParamLimits

0x918a,	// (0x000908fc) welc_button_pane_3

0xe9e8,	// (0x0009615a) welc_button_pane_4

0x91aa,	// (0x0009091c) welc_button_pane_5_ParamLimits

0x91aa,	// (0x0009091c) welc_button_pane_5

0x19a7,	// (0x00089119) main_popup_welc_pane

0xeac0,	// (0x00096232) main_welc_sk_g3

0xeaca,	// (0x0009623c) main_welc_sk_g4

0xead4,	// (0x00096246) main_welc_sk_t3

0xeae4,	// (0x00096256) main_welc_sk_t4

0xeaf4,	// (0x00096266) popup_welc_pane_t4

0xeb02,	// (0x00096274) popup_welc_pane_t5

0xeb10,	// (0x00096282) popup_welc_pane_t6

0x1c34,	// (0x000893a6) main_acti_pane

0xaded,	// (0x0009255f) main_sso_pane

0x946a,	// (0x00090bdc) sso_body_pane_ParamLimits

0x946a,	// (0x00090bdc) sso_body_pane

0x9484,	// (0x00090bf6) sso_logo_pane_ParamLimits

0x9484,	// (0x00090bf6) sso_logo_pane

0x94b5,	// (0x00090c27) sso_sk_pane_ParamLimits

0x94b5,	// (0x00090c27) sso_sk_pane

0xeb4e,	// (0x000962c0) main_sso_logo_pane_g1

0x94c2,	// (0x00090c34) sso_sk_pane_t1_ParamLimits

0x94c2,	// (0x00090c34) sso_sk_pane_t1

0x94d6,	// (0x00090c48) sso_sk_pane_t2_ParamLimits

0x94d6,	// (0x00090c48) sso_sk_pane_t2

0x0001,

0xfe2f,	// (0x000975a1) sso_sk_pane_t_ParamLimits

0xfe2f,	// (0x000975a1) sso_sk_pane_t

0xeb57,	// (0x000962c9) aid_sso_gap

0xeb60,	// (0x000962d2) aid_sso_txt1

0xeb6a,	// (0x000962dc) aid_sso_txt2

0xeb74,	// (0x000962e6) aid_sso_txt3

0x0002,

0xfe34,	// (0x000975a6) aid_sso_txt

0xeb7e,	// (0x000962f0) aid_sso_widget

0x9533,	// (0x00090ca5) sso_btn_pane_ParamLimits

0x9533,	// (0x00090ca5) sso_btn_pane

0x95b9,	// (0x00090d2b) sso_option_pane_ParamLimits

0x95b9,	// (0x00090d2b) sso_option_pane

0x9663,	// (0x00090dd5) sso_query_pane_ParamLimits

0x9663,	// (0x00090dd5) sso_query_pane

0x96b3,	// (0x00090e25) sso_query_pane_cp01_ParamLimits

0x96b3,	// (0x00090e25) sso_query_pane_cp01

0x9703,	// (0x00090e75) sso_t_hdr_pane_ParamLimits

0x9703,	// (0x00090e75) sso_t_hdr_pane

0x9727,	// (0x00090e99) sso_t_nml_pane_ParamLimits

0x9727,	// (0x00090e99) sso_t_nml_pane

0x9777,	// (0x00090ee9) sso_t_sub_pane

0x9491,	// (0x00090c03) sso_popup_window_ParamLimits

0x9491,	// (0x00090c03) sso_popup_window

0x94e8,	// (0x00090c5a) sso_apps_pane_ParamLimits

0x94e8,	// (0x00090c5a) sso_apps_pane

0x950b,	// (0x00090c7d) sso_body_pane_g1

0x9513,	// (0x00090c85) sso_body_pane_t1

0x9523,	// (0x00090c95) sso_body_pane_t2

0x0001,

0xfe3b,	// (0x000975ad) sso_body_pane_t

0x9579,	// (0x00090ceb) sso_btn_pane_cp01_ParamLimits

0x9579,	// (0x00090ceb) sso_btn_pane_cp01

0x9635,	// (0x00090da7) sso_prog_pane_ParamLimits

0x9635,	// (0x00090da7) sso_prog_pane

0x979c,	// (0x00090f0e) sso_t_hdr_pane_t1_ParamLimits

0x979c,	// (0x00090f0e) sso_t_hdr_pane_t1

0xeb88,	// (0x000962fa) input_focus_pane_cp10_ParamLimits

0xeb88,	// (0x000962fa) input_focus_pane_cp10

0xeb9c,	// (0x0009630e) sso_query_pane_t1_ParamLimits

0xeb9c,	// (0x0009630e) sso_query_pane_t1

0xebaf,	// (0x00096321) sso_query_pane_t2_ParamLimits

0xebaf,	// (0x00096321) sso_query_pane_t2

0xebc8,	// (0x0009633a) sso_query_pane_t3_ParamLimits

0xebc8,	// (0x0009633a) sso_query_pane_t3

0xebf2,	// (0x00096364) sso_query_pane_t4_ParamLimits

0xebf2,	// (0x00096364) sso_query_pane_t4

0x0003,

0xfe40,	// (0x000975b2) sso_query_pane_t_ParamLimits

0xfe40,	// (0x000975b2) sso_query_pane_t

0xec16,	// (0x00096388) bg_button_pane_cp22

0xeaa8,	// (0x0009621a) sso_btn_pane_t1

0x97b5,	// (0x00090f27) sso_t_nml_pane_t1_ParamLimits

0x97b5,	// (0x00090f27) sso_t_nml_pane_t1

0xec1f,	// (0x00096391) sso_option_row_pane_ParamLimits

0xec1f,	// (0x00096391) sso_option_row_pane

0xec2c,	// (0x0009639e) sso_t_sub_pane_t1_ParamLimits

0xec2c,	// (0x0009639e) sso_t_sub_pane_t1

0xb14f,	// (0x000928c1) bg_popup_window_pane_cp11_ParamLimits

0xb14f,	// (0x000928c1) bg_popup_window_pane_cp11

0xec49,	// (0x000963bb) popup_sk_window_cp01_ParamLimits

0xec49,	// (0x000963bb) popup_sk_window_cp01

0xec56,	// (0x000963c8) sso_popup_body_pane_ParamLimits

0xec56,	// (0x000963c8) sso_popup_body_pane

0xec63,	// (0x000963d5) scroll_pane_cp21_ParamLimits

0xec63,	// (0x000963d5) scroll_pane_cp21

0xec70,	// (0x000963e2) sso_popup_body_t_pane_ParamLimits

0xec70,	// (0x000963e2) sso_popup_body_t_pane

0xec7d,	// (0x000963ef) sso_popup_body_t_hdr_pane_ParamLimits

0xec7d,	// (0x000963ef) sso_popup_body_t_hdr_pane

0x97d2,	// (0x00090f44) sso_popup_body_t_nml_pane_ParamLimits

0x97d2,	// (0x00090f44) sso_popup_body_t_nml_pane

0x97f0,	// (0x00090f62) sso_popup_body_t_sub_pane_ParamLimits

0x97f0,	// (0x00090f62) sso_popup_body_t_sub_pane

0xec8f,	// (0x00096401) sso_popup_body_t_hdr_pane_t1

0x9813,	// (0x00090f85) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9813,	// (0x00090f85) sso_popup_body_t_nml_pane_t1

0xec9f,	// (0x00096411) sso_popup_body_t_sub_pane_t1_ParamLimits

0xec9f,	// (0x00096411) sso_popup_body_t_sub_pane_t1

0xb52c,	// (0x00092c9e) sso_prog_pane_g1

0x985a,	// (0x00090fcc) sso_apps_pane_comp1_ParamLimits

0x985a,	// (0x00090fcc) sso_apps_pane_comp1

0xecc4,	// (0x00096436) sso_apps_pane_comp1_g1

0xeccc,	// (0x0009643e) sso_apps_pane_comp1_t1

0xece8,	// (0x0009645a) sso_option_row_pane_g1

0xed00,	// (0x00096472) sso_option_row_pane_t1

0xabd7,	// (0x00092349) list_cmail_pane_ParamLimits

0xaded,	// (0x0009255f) main_call7_pane

0x8f8e,	// (0x00090700) bg_welc_area_ParamLimits

0x8f8e,	// (0x00090700) bg_welc_area

0x90ec,	// (0x0009085e) sso_t_hdr_pane_a_t1_ParamLimits

0x90ec,	// (0x0009085e) sso_t_hdr_pane_a_t1

0x9100,	// (0x00090872) sso_t_nml_pane_a_t1_ParamLimits

0x9100,	// (0x00090872) sso_t_nml_pane_a_t1

0x912a,	// (0x0009089c) sso_t_sub_pane_a_t1_ParamLimits

0x912a,	// (0x0009089c) sso_t_sub_pane_a_t1

0x91ba,	// (0x0009092c) welc_button_pane_cp01_ParamLimits

0x91ba,	// (0x0009092c) welc_button_pane_cp01

0xeaa8,	// (0x0009621a) sso_btn_pane_t1_copy1

0xeab7,	// (0x00096229) welc_button_pane_2_comp1

0xeb1e,	// (0x00096290) sso_t_hdr_pane_p_t1

0xeb2e,	// (0x000962a0) sso_t_nml_pane_p_t1

0xeb3e,	// (0x000962b0) sso_t_sub_pane_p_t1

0xaded,	// (0x0009255f) main_att_pane

0xaded,	// (0x0009255f) main_vod_pane

0x9777,	// (0x00090ee9) sso_t_sub_pane_ParamLimits

0xecda,	// (0x0009644c) input_focus_pane_cp10_t1

0xed00,	// (0x00096472) sso_option_row_pane_t1_ParamLimits

0x9874,	// (0x00090fe6) main_att_body_pane_ParamLimits

0x9874,	// (0x00090fe6) main_att_body_pane

0x9888,	// (0x00090ffa) att_btn_emg_pane_ParamLimits

0x9888,	// (0x00090ffa) att_btn_emg_pane

0x98a0,	// (0x00091012) att_btn_pane_ParamLimits

0x98a0,	// (0x00091012) att_btn_pane

0x9906,	// (0x00091078) att_btn_pane_cp01_ParamLimits

0x9906,	// (0x00091078) att_btn_pane_cp01

0x9938,	// (0x000910aa) att_li_srv_pane_ParamLimits

0x9938,	// (0x000910aa) att_li_srv_pane

0x994a,	// (0x000910bc) att_opt_pane_ParamLimits

0x994a,	// (0x000910bc) att_opt_pane

0x998e,	// (0x00091100) att_query_pane_ParamLimits

0x998e,	// (0x00091100) att_query_pane

0x99fe,	// (0x00091170) att_query_pane_cp01_ParamLimits

0x99fe,	// (0x00091170) att_query_pane_cp01

0x9a42,	// (0x000911b4) att_t_hdr_pane_ParamLimits

0x9a42,	// (0x000911b4) att_t_hdr_pane

0x9aa8,	// (0x0009121a) att_t_nml_pane_ParamLimits

0x9aa8,	// (0x0009121a) att_t_nml_pane

0x9b10,	// (0x00091282) att_t_nml_pane_cp01_ParamLimits

0x9b10,	// (0x00091282) att_t_nml_pane_cp01

0x9b34,	// (0x000912a6) att_t_nmlb_pane_ParamLimits

0x9b34,	// (0x000912a6) att_t_nmlb_pane

0x9b98,	// (0x0009130a) att_term_pane_ParamLimits

0x9b98,	// (0x0009130a) att_term_pane

0x9bda,	// (0x0009134c) main_att_body_pane_g1_ParamLimits

0x9bda,	// (0x0009134c) main_att_body_pane_g1

0xed1c,	// (0x0009648e) att_t_hdr_pane_t1_ParamLimits

0xed1c,	// (0x0009648e) att_t_hdr_pane_t1

0xed35,	// (0x000964a7) att_t_nml_pane_t1_ParamLimits

0xed35,	// (0x000964a7) att_t_nml_pane_t1

0xed5a,	// (0x000964cc) att_btn_pane_t1

0xec16,	// (0x00096388) bg_button_pane_cp23

0x9c04,	// (0x00091376) att_li_srv_row_pane_ParamLimits

0x9c04,	// (0x00091376) att_li_srv_row_pane

0xed69,	// (0x000964db) att_t_nmlb_pane_t1_ParamLimits

0xed69,	// (0x000964db) att_t_nmlb_pane_t1

0xed85,	// (0x000964f7) att_query_pane_t1

0xed94,	// (0x00096506) att_query_pane_t2

0xeda3,	// (0x00096515) att_query_pane_t3

0x0002,

0xfe4e,	// (0x000975c0) att_query_pane_t

0xedb2,	// (0x00096524) input_focus_pane_cp11

0xedbb,	// (0x0009652d) att_term_pane_t1_ParamLimits

0xedbb,	// (0x0009652d) att_term_pane_t1

0xaded,	// (0x0009255f) att_opt_row_pane

0xedd8,	// (0x0009654a) att_opt_row_pane_g1

0xede0,	// (0x00096552) att_opt_row_pane_t1_ParamLimits

0xede0,	// (0x00096552) att_opt_row_pane_t1

0x9c14,	// (0x00091386) att_li_srv_row_pane_g1

0x9c1c,	// (0x0009138e) att_li_srv_row_pane_t1_ParamLimits

0x9c1c,	// (0x0009138e) att_li_srv_row_pane_t1

0x9c1c,	// (0x0009138e) att_li_srv_row_pane_t2_ParamLimits

0x9c1c,	// (0x0009138e) att_li_srv_row_pane_t2

0x0001,

0xfe55,	// (0x000975c7) att_li_srv_row_pane_t_ParamLimits

0xfe55,	// (0x000975c7) att_li_srv_row_pane_t

0xedf9,	// (0x0009656b) att_btn_close_pane_g1

0xaded,	// (0x0009255f) bg_button_pane_cp24

0x9c31,	// (0x000913a3) main_vod_body_pane_ParamLimits

0x9c31,	// (0x000913a3) main_vod_body_pane

0x9c3f,	// (0x000913b1) main_vod_body_pane_g1_ParamLimits

0x9c3f,	// (0x000913b1) main_vod_body_pane_g1

0x9c6f,	// (0x000913e1) scroll_pane_cp24_ParamLimits

0x9c6f,	// (0x000913e1) scroll_pane_cp24

0x9cb7,	// (0x00091429) vod_btn_pane_ParamLimits

0x9cb7,	// (0x00091429) vod_btn_pane

0x9cf5,	// (0x00091467) vod_det_pane_ParamLimits

0x9cf5,	// (0x00091467) vod_det_pane

0x9d1f,	// (0x00091491) vod_logo_g1_ParamLimits

0x9d1f,	// (0x00091491) vod_logo_g1

0x9d59,	// (0x000914cb) vod_opt_pane_ParamLimits

0x9d59,	// (0x000914cb) vod_opt_pane

0x9d89,	// (0x000914fb) vod_opt_pane_cp01_ParamLimits

0x9d89,	// (0x000914fb) vod_opt_pane_cp01

0x9db1,	// (0x00091523) vod_query_pane_ParamLimits

0x9db1,	// (0x00091523) vod_query_pane

0x9dd9,	// (0x0009154b) vod_query_pane_cp01_ParamLimits

0x9dd9,	// (0x0009154b) vod_query_pane_cp01

0x9de5,	// (0x00091557) vod_t_nml_pane_ParamLimits

0x9de5,	// (0x00091557) vod_t_nml_pane

0x9e87,	// (0x000915f9) vod_t_nml_pane_cp01_ParamLimits

0x9e87,	// (0x000915f9) vod_t_nml_pane_cp01

0x9ebf,	// (0x00091631) vod_t_sub_pane_ParamLimits

0x9ebf,	// (0x00091631) vod_t_sub_pane

0x9eeb,	// (0x0009165d) vod_t_sub_pane_cp01_ParamLimits

0x9eeb,	// (0x0009165d) vod_t_sub_pane_cp01

0xedb2,	// (0x00096524) vod_query_field_pane

0xee01,	// (0x00096573) vod_query_pane_t1

0xee10,	// (0x00096582) bg_button_pane_cp25

0xeaa8,	// (0x0009621a) sso_btn_pane_t1_copy2

0x9f13,	// (0x00091685) vod_t_nml_pane_t1_ParamLimits

0x9f13,	// (0x00091685) vod_t_nml_pane_t1

0xee19,	// (0x0009658b) vod_opt_row_pane_ParamLimits

0xee19,	// (0x0009658b) vod_opt_row_pane

0xee2b,	// (0x0009659d) vod_t_sub_pane_t1_ParamLimits

0xee2b,	// (0x0009659d) vod_t_sub_pane_t1

0xee44,	// (0x000965b6) vod_det_cell_pane_ParamLimits

0xee44,	// (0x000965b6) vod_det_cell_pane

0xaded,	// (0x0009255f) input_focus_pane_cp15

0xee55,	// (0x000965c7) vod_query_field_pane_t1

0xee63,	// (0x000965d5) vod_opt_row_pane_g1_ParamLimits

0xee63,	// (0x000965d5) vod_opt_row_pane_g1

0xee6f,	// (0x000965e1) vod_opt_row_pane_t1_ParamLimits

0xee6f,	// (0x000965e1) vod_opt_row_pane_t1

0xee8f,	// (0x00096601) vod_det_cell_field_pane

0xee98,	// (0x0009660a) vod_det_cell_pane_g1

0xeea0,	// (0x00096612) vod_det_cell_pane_t1

0xaded,	// (0x0009255f) input_focus_pane_cp16

0xeeaf,	// (0x00096621) vod_det_cell_field_pane_t1

0x9f48,	// (0x000916ba) call7_btn_grp_pane_ParamLimits

0x9f48,	// (0x000916ba) call7_btn_grp_pane

0x9f57,	// (0x000916c9) call7_bubble_pane_ParamLimits

0x9f57,	// (0x000916c9) call7_bubble_pane

0x9f65,	// (0x000916d7) cell_call7_btn_pane_ParamLimits

0x9f65,	// (0x000916d7) cell_call7_btn_pane

0x9f74,	// (0x000916e6) call7_pane_g1_ParamLimits

0x9f74,	// (0x000916e6) call7_pane_g1

0x9f83,	// (0x000916f5) call7_windows_conf_pane_ParamLimits

0x9f83,	// (0x000916f5) call7_windows_conf_pane

0x9f9f,	// (0x00091711) popup_call7_1st_window_ParamLimits

0x9f9f,	// (0x00091711) popup_call7_1st_window

0x9fad,	// (0x0009171f) popup_call7_2nd_window_ParamLimits

0x9fad,	// (0x0009171f) popup_call7_2nd_window

0x9fbb,	// (0x0009172d) popup_call7_3rd_window_ParamLimits

0x9fbb,	// (0x0009172d) popup_call7_3rd_window

0xaded,	// (0x0009255f) bg_button_pane_cp26

0xe866,	// (0x00095fd8) cell_call7_btn_pane_g1

0xe8fd,	// (0x0009606f) cell_call7_btn_pane_t1

0xaded,	// (0x0009255f) bg_popup_window_pane_cp12

0xeebd,	// (0x0009662f) popup_call7_1st_window_g1

0xeec5,	// (0x00096637) popup_call7_1st_window_g2

0xeecd,	// (0x0009663f) popup_call7_1st_window_g3

0x0002,

0xfe5a,	// (0x000975cc) popup_call7_1st_window_g

0xeed5,	// (0x00096647) popup_call7_1st_window_t1

0xeee4,	// (0x00096656) popup_call7_1st_window_t2

0xeef2,	// (0x00096664) popup_call7_1st_window_t3

0x0002,

0xfe61,	// (0x000975d3) popup_call7_1st_window_t

0xaded,	// (0x0009255f) bg_popup_window_pane_cp13

0xef00,	// (0x00096672) popup_call7_2nd_window_g1

0xef08,	// (0x0009667a) popup_call7_2nd_window_g2

0xef10,	// (0x00096682) popup_call7_2nd_window_g3

0x0002,

0xfe68,	// (0x000975da) popup_call7_2nd_window_g

0xef18,	// (0x0009668a) popup_call7_2nd_window_t1

0xaded,	// (0x0009255f) bg_popup_window_pane_cp14

0xef27,	// (0x00096699) call7_list_conf_pane

0xef2f,	// (0x000966a1) call7_list_conf_row_pane_ParamLimits

0xef2f,	// (0x000966a1) call7_list_conf_row_pane

0xef42,	// (0x000966b4) call7_list_conf_row_pane_g1

0xef4a,	// (0x000966bc) call7_list_conf_row_pane_g2

0x0001,

0xfe6f,	// (0x000975e1) call7_list_conf_row_pane_g

0xef52,	// (0x000966c4) call7_list_conf_row_pane_t1

0xaded,	// (0x0009255f) list_highlight_pane_cp22

0x9607,	// (0x00090d79) sso_option_pane_cp01_ParamLimits

0x9607,	// (0x00090d79) sso_option_pane_cp01

0xb473,	// (0x00092be5) msg_header_pane_ParamLimits

0xc2a7,	// (0x00093a19) bg_button_pane_cp01_ParamLimits

0xc2bb,	// (0x00093a2d) input_focus_pane_cp07_ParamLimits

0x8042,	// (0x0008f7b4) popup_email_progress_window

0xb52c,	// (0x00092c9e) popup_email_progress_window_g1

0xef60,	// (0x000966d2) popup_email_progress_window_g2

0x0001,

0xfe74,	// (0x000975e6) popup_email_progress_window_g

0xef68,	// (0x000966da) popup_email_progress_window_t1

0xaded,	// (0x0009255f) cmail_conv_pane

0xe17f,	// (0x000958f1) list_single_dyc_row_pane_g5_ParamLimits

0xe17f,	// (0x000958f1) list_single_dyc_row_pane_g5

0xe18b,	// (0x000958fd) list_single_dyc_row_pane_g6_ParamLimits

0xe18b,	// (0x000958fd) list_single_dyc_row_pane_g6

0xe1a3,	// (0x00095915) list_single_dyc_row_pane_g7_ParamLimits

0xe1a3,	// (0x00095915) list_single_dyc_row_pane_g7

0x8fb0,	// (0x00090722) main_button_pane_5_ParamLimits

0x8fb0,	// (0x00090722) main_button_pane_5

0x9478,	// (0x00090bea) sso_emg_call_btn_pane_ParamLimits

0x9478,	// (0x00090bea) sso_emg_call_btn_pane

0x978c,	// (0x00090efe) sso_t_sub_pane_cp01_ParamLimits

0x978c,	// (0x00090efe) sso_t_sub_pane_cp01

0xece8,	// (0x0009645a) sso_option_row_pane_g1_ParamLimits

0xecf4,	// (0x00096466) sso_option_row_pane_g2_ParamLimits

0xecf4,	// (0x00096466) sso_option_row_pane_g2

0x0001,

0xfe49,	// (0x000975bb) sso_option_row_pane_g_ParamLimits

0xfe49,	// (0x000975bb) sso_option_row_pane_g

0x991e,	// (0x00091090) att_btn_pane_cp02_ParamLimits

0x991e,	// (0x00091090) att_btn_pane_cp02

0xef76,	// (0x000966e8) cmail_conv_hdr_pane

0xef7f,	// (0x000966f1) list_cmail_conv_pane

0xef89,	// (0x000966fb) scroll_pane_cp31

0xef91,	// (0x00096703) cmail_conv_hdr_pane_t1

0xef9f,	// (0x00096711) cmail_conv_hdr_pane_t2

0x0001,

0xfe79,	// (0x000975eb) cmail_conv_hdr_pane_t

0xefad,	// (0x0009671f) bubble_cmail_conv_pane_ParamLimits

0xefad,	// (0x0009671f) bubble_cmail_conv_pane

0xacf9,	// (0x0009246b) aid_size_colorization_pane

0xb792,	// (0x00092f04) bg_bubble_cmail_conv_pane

0xefc5,	// (0x00096737) body_bubble_cmail_conv_pane

0xbc5d,	// (0x000933cf) bubble_cmail_conv_pane_g1

0xefcd,	// (0x0009673f) bubble_cmail_conv_pane_g2

0xefd5,	// (0x00096747) bubble_cmail_conv_pane_g3

0x0002,

0xfe7e,	// (0x000975f0) bubble_cmail_conv_pane_g

0xefdd,	// (0x0009674f) bubble_cmail_conv_pane_t1

0xab7d,	// (0x000922ef) bg_bubble_cmail_conv_pane_g1

0xab86,	// (0x000922f8) bg_bubble_cmail_conv_pane_g2

0xab8f,	// (0x00092301) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfc14,	// (0x00097386) bg_bubble_cmail_conv_pane_g

0xefeb,	// (0x0009675d) body_bubble_cmail_conv_pane_t1_ParamLimits

0xefeb,	// (0x0009675d) body_bubble_cmail_conv_pane_t1

0xf002,	// (0x00096774) body_bubble_cmail_conv_pane_t2_ParamLimits

0xf002,	// (0x00096774) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe85,	// (0x000975f7) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe85,	// (0x000975f7) body_bubble_cmail_conv_pane_t

0xb4e0,	// (0x00092c52) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
