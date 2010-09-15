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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003ba35 };

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
0x2769,	// (0x0003e19e) Screen

0x2775,	// (0x0003e1aa) application_window

0x27d1,	// (0x0003e206) area_bottom_pane_ParamLimits

0x27d1,	// (0x0003e206) area_bottom_pane

0x2829,	// (0x0003e25e) area_top_pane_ParamLimits

0x2829,	// (0x0003e25e) area_top_pane

0x288d,	// (0x0003e2c2) call_video_uplink_pane_ParamLimits

0x288d,	// (0x0003e2c2) call_video_uplink_pane

0x28cc,	// (0x0003e301) main_pane_ParamLimits

0x28cc,	// (0x0003e301) main_pane

0xcecd,	// (0x00048902) context_pane

0x563a,	// (0x0004106f) navi_pane

0x5660,	// (0x00041095) popup_cale_events_window_ParamLimits

0x5660,	// (0x00041095) popup_cale_events_window

0xcee0,	// (0x00048915) popup_mup_playback_window

0x5678,	// (0x000410ad) signal_pane

0xaf40,	// (0x00046975) main_browser_pane

0xb0fb,	// (0x00046b30) main_burst_pane

0x54ca,	// (0x00040eff) main_calc_pane

0xcec1,	// (0x000488f6) main_cale_day_pane

0x2e24,	// (0x0003e859) main_cale_month_pane

0xcec1,	// (0x000488f6) main_cale_week_pane

0xb0fb,	// (0x00046b30) main_call_pane

0xabbb,	// (0x000465f0) main_call_poc_pane

0xb0fb,	// (0x00046b30) main_camera_pane

0xb0fb,	// (0x00046b30) main_chi_dic_pane

0xb8e4,	// (0x00047319) main_clock_pane

0xabbb,	// (0x000465f0) main_fmradio_pane

0xb0fb,	// (0x00046b30) main_graph_messa_pane

0xabbb,	// (0x000465f0) main_help_pane

0xaf40,	// (0x00046975) main_im_pane

0xae53,	// (0x00046888) main_image_pane_ParamLimits

0xae53,	// (0x00046888) main_image_pane

0xabbb,	// (0x000465f0) main_location2_pane

0xb0fb,	// (0x00046b30) main_location_pane

0xae53,	// (0x00046888) main_messa_pane

0xabbb,	// (0x000465f0) main_mp2_pane

0xb0fb,	// (0x00046b30) main_mp_pane

0xabbb,	// (0x000465f0) main_msg_pane

0xabbb,	// (0x000465f0) main_mup_eq_pane

0xabbb,	// (0x000465f0) main_mup_pane

0xaf40,	// (0x00046975) main_notes_pane

0xabbb,	// (0x000465f0) main_pec_pane

0xabbb,	// (0x000465f0) main_phob_pane

0xabbb,	// (0x000465f0) main_pinb_pane

0xabbb,	// (0x000465f0) main_postcard_pane

0xabbb,	// (0x000465f0) main_qdial_pane

0xb0fb,	// (0x00046b30) main_skin_pane

0xabbb,	// (0x000465f0) main_smil2_pane

0xb0fb,	// (0x00046b30) main_smil_pane

0xb0fb,	// (0x00046b30) main_video_pane

0xb0fb,	// (0x00046b30) main_video_tele_pane

0xae53,	// (0x00046888) main_viewer_pane_ParamLimits

0xae53,	// (0x00046888) main_viewer_pane

0xb0fb,	// (0x00046b30) main_vorec_pane

0x5508,	// (0x00040f3d) popup_blid_sat_info_window_ParamLimits

0x5508,	// (0x00040f3d) popup_blid_sat_info_window

0x5528,	// (0x00040f5d) popup_dyc_status_message_window_ParamLimits

0x5528,	// (0x00040f5d) popup_dyc_status_message_window

0x5536,	// (0x00040f6b) popup_grid_large_graphic_window_ParamLimits

0x5536,	// (0x00040f6b) popup_grid_large_graphic_window

0x55c5,	// (0x00040ffa) popup_loc_request_window_ParamLimits

0x55c5,	// (0x00040ffa) popup_loc_request_window

0x5612,	// (0x00041047) popup_wml_address_window_ParamLimits

0x5612,	// (0x00041047) popup_wml_address_window

0x53a2,	// (0x00040dd7) call_muted_g1

0x5017,	// (0x00040a4c) popup_call_audio_conf_window_ParamLimits

0x5017,	// (0x00040a4c) popup_call_audio_conf_window

0x53b2,	// (0x00040de7) popup_call_audio_first_window_ParamLimits

0x53b2,	// (0x00040de7) popup_call_audio_first_window

0x53f2,	// (0x00040e27) popup_call_audio_in_window_ParamLimits

0x53f2,	// (0x00040e27) popup_call_audio_in_window

0x5416,	// (0x00040e4b) popup_call_audio_out_window_ParamLimits

0x5416,	// (0x00040e4b) popup_call_audio_out_window

0x5438,	// (0x00040e6d) popup_call_audio_second_window_ParamLimits

0x5438,	// (0x00040e6d) popup_call_audio_second_window

0x5468,	// (0x00040e9d) popup_call_audio_wait_window_ParamLimits

0x5468,	// (0x00040e9d) popup_call_audio_wait_window

0x5489,	// (0x00040ebe) popup_number_entry_window_ParamLimits

0x5489,	// (0x00040ebe) popup_number_entry_window

0xa7a8,	// (0x000461dd) bg_popup_call_pane_cp05_ParamLimits

0xa7a8,	// (0x000461dd) bg_popup_call_pane_cp05

0xa7c8,	// (0x000461fd) popup_number_entry_window_t1

0xa7db,	// (0x00046210) popup_number_entry_window_t2

0xa7ed,	// (0x00046222) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0004aa7a) popup_number_entry_window_t

0xa7ff,	// (0x00046234) text_title_cp2

0xa812,	// (0x00046247) bg_popup_call_pane_cp_ParamLimits

0xa812,	// (0x00046247) bg_popup_call_pane_cp

0xa820,	// (0x00046255) call_thumbnail_pane

0xa828,	// (0x0004625d) popup_call_audio_in_window_g1_ParamLimits

0xa828,	// (0x0004625d) popup_call_audio_in_window_g1

0xa834,	// (0x00046269) popup_call_audio_in_window_g2_ParamLimits

0xa834,	// (0x00046269) popup_call_audio_in_window_g2

0xa840,	// (0x00046275) popup_call_audio_in_window_g3_ParamLimits

0xa840,	// (0x00046275) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0004aa83) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0004aa83) popup_call_audio_in_window_g

0xa84c,	// (0x00046281) popup_call_audio_in_window_t1_ParamLimits

0xa84c,	// (0x00046281) popup_call_audio_in_window_t1

0xa868,	// (0x0004629d) popup_call_audio_in_window_t2_ParamLimits

0xa868,	// (0x0004629d) popup_call_audio_in_window_t2

0xa884,	// (0x000462b9) popup_call_audio_in_window_t3_ParamLimits

0xa884,	// (0x000462b9) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0004aa8a) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0004aa8a) popup_call_audio_in_window_t

0xa812,	// (0x00046247) bg_popup_call_pane_cp01_ParamLimits

0xa812,	// (0x00046247) bg_popup_call_pane_cp01

0xa820,	// (0x00046255) call_thumbnail_pane_cp02

0xa897,	// (0x000462cc) call_type_pane_cp022

0xa89f,	// (0x000462d4) popup_call_audio_out_window_g1_ParamLimits

0xa89f,	// (0x000462d4) popup_call_audio_out_window_g1

0xa8b1,	// (0x000462e6) popup_call_audio_out_window_g2_ParamLimits

0xa8b1,	// (0x000462e6) popup_call_audio_out_window_g2

0xa8bd,	// (0x000462f2) popup_call_audio_out_window_g3_ParamLimits

0xa8bd,	// (0x000462f2) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0004aa91) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0004aa91) popup_call_audio_out_window_g

0xa8cf,	// (0x00046304) popup_call_audio_out_window_t1_ParamLimits

0xa8cf,	// (0x00046304) popup_call_audio_out_window_t1

0xa8e7,	// (0x0004631c) popup_call_audio_out_window_t2_ParamLimits

0xa8e7,	// (0x0004631c) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0004aa98) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0004aa98) popup_call_audio_out_window_t

0xa8fc,	// (0x00046331) bg_popup_call_pane_ParamLimits

0xa8fc,	// (0x00046331) bg_popup_call_pane

0x2a33,	// (0x0003e468) call_thumbnail_pane_cp_ParamLimits

0x2a33,	// (0x0003e468) call_thumbnail_pane_cp

0xa980,	// (0x000463b5) call_type_pane_cp01_ParamLimits

0xa980,	// (0x000463b5) call_type_pane_cp01

0xa9c4,	// (0x000463f9) popup_call_audio_first_window_g1_ParamLimits

0xa9c4,	// (0x000463f9) popup_call_audio_first_window_g1

0xaa10,	// (0x00046445) popup_call_audio_first_window_g2_ParamLimits

0xaa10,	// (0x00046445) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0004aa9d) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0004aa9d) popup_call_audio_first_window_g

0xaa54,	// (0x00046489) popup_call_audio_first_window_t1_ParamLimits

0xaa54,	// (0x00046489) popup_call_audio_first_window_t1

0xab00,	// (0x00046535) popup_call_audio_first_window_t4_ParamLimits

0xab00,	// (0x00046535) popup_call_audio_first_window_t4

0xab8c,	// (0x000465c1) popup_call_audio_first_window_t5_ParamLimits

0xab8c,	// (0x000465c1) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0004aaa2) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0004aaa2) popup_call_audio_first_window_t

0xabbb,	// (0x000465f0) bg_popup_call_pane_cp02

0xabc5,	// (0x000465fa) call_type_pane_cp023

0xabcd,	// (0x00046602) popup_call_audio_wait_window_g1

0xabd5,	// (0x0004660a) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0004aaa9) popup_call_audio_wait_window_g

0xabdd,	// (0x00046612) popup_call_audio_wait_window_t3

0xabeb,	// (0x00046620) bg_popup_call_pane_cp03_ParamLimits

0xabeb,	// (0x00046620) bg_popup_call_pane_cp03

0xac4b,	// (0x00046680) call_thumbnail_pane_cp011_ParamLimits

0xac4b,	// (0x00046680) call_thumbnail_pane_cp011

0xac57,	// (0x0004668c) call_type_pane_cp034_ParamLimits

0xac57,	// (0x0004668c) call_type_pane_cp034

0xacd0,	// (0x00046705) popup_call_audio_second_window_g1_ParamLimits

0xacd0,	// (0x00046705) popup_call_audio_second_window_g1

0xad0c,	// (0x00046741) popup_call_audio_second_window_g2_ParamLimits

0xad0c,	// (0x00046741) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0004aaae) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0004aaae) popup_call_audio_second_window_g

0xad48,	// (0x0004677d) popup_call_audio_second_window_t1_ParamLimits

0xad48,	// (0x0004677d) popup_call_audio_second_window_t1

0xadc9,	// (0x000467fe) popup_call_audio_second_window_t2_ParamLimits

0xadc9,	// (0x000467fe) popup_call_audio_second_window_t2

0xadff,	// (0x00046834) popup_call_audio_second_window_t3_ParamLimits

0xadff,	// (0x00046834) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0004aab3) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0004aab3) popup_call_audio_second_window_t

0xabbb,	// (0x000465f0) bg_popup_call_pane_cp04

0xae35,	// (0x0004686a) list_conf_pane

0xae3d,	// (0x00046872) popup_call_audio_conf_window_t1

0xae4b,	// (0x00046880) call_thumbnail_pane_g1

0xae53,	// (0x00046888) bg_pinb_pane_ParamLimits

0xae53,	// (0x00046888) bg_pinb_pane

0xae61,	// (0x00046896) find_pinb_pane

0xae53,	// (0x00046888) listscroll_pinb_pane_ParamLimits

0xae53,	// (0x00046888) listscroll_pinb_pane

0xae6b,	// (0x000468a0) pinb_bg_pane_g1

0xae6b,	// (0x000468a0) pinb_bg_pane_g2

0xae6b,	// (0x000468a0) pinb_bg_pane_g3

0xae6b,	// (0x000468a0) pinb_bg_pane_g4

0xae6b,	// (0x000468a0) pinb_bg_pane_g5

0xae6b,	// (0x000468a0) pinb_bg_pane_g6

0xae6b,	// (0x000468a0) pinb_bg_pane_g7

0xae6b,	// (0x000468a0) pinb_bg_pane_g8

0xae6b,	// (0x000468a0) pinb_bg_pane_g9

0xae6b,	// (0x000468a0) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0004aaba) pinb_bg_pane_g

0xa79e,	// (0x000461d3) grid_pinb_pane

0xa79e,	// (0x000461d3) list_pinb_pane

0xae75,	// (0x000468aa) scroll_pane_cp01_ParamLimits

0xae75,	// (0x000468aa) scroll_pane_cp01

0xae83,	// (0x000468b8) find_pinb_pane_g1_ParamLimits

0xae83,	// (0x000468b8) find_pinb_pane_g1

0xae9b,	// (0x000468d0) find_pinb_pane_t1

0xaead,	// (0x000468e2) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0004aad4) find_pinb_pane_t

0xaec2,	// (0x000468f7) input_focus_pane_cp01_ParamLimits

0xaec2,	// (0x000468f7) input_focus_pane_cp01

0xacc2,	// (0x000466f7) cell_pinb_pane_ParamLimits

0xacc2,	// (0x000466f7) cell_pinb_pane

0xaece,	// (0x00046903) cell_pinb_pane_g1_ParamLimits

0xaece,	// (0x00046903) cell_pinb_pane_g1

0xaedc,	// (0x00046911) cell_pinb_pane_g2_ParamLimits

0xaedc,	// (0x00046911) cell_pinb_pane_g2

0xaedc,	// (0x00046911) cell_pinb_pane_g3_ParamLimits

0xaedc,	// (0x00046911) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0004aad9) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0004aad9) cell_pinb_pane_g

0xabbb,	// (0x000465f0) grid_highlight_pane_cp01

0xacc2,	// (0x000466f7) list_pinb_item_pane_ParamLimits

0xacc2,	// (0x000466f7) list_pinb_item_pane

0xa79e,	// (0x000461d3) list_highlight_pane_cp02

0xaeea,	// (0x0004691f) list_pinb_item_pane_g1_ParamLimits

0xaeea,	// (0x0004691f) list_pinb_item_pane_g1

0xaedc,	// (0x00046911) list_pinb_item_pane_g2_ParamLimits

0xaedc,	// (0x00046911) list_pinb_item_pane_g2

0xaece,	// (0x00046903) list_pinb_item_pane_g3_ParamLimits

0xaece,	// (0x00046903) list_pinb_item_pane_g3

0xaedc,	// (0x00046911) list_pinb_item_pane_g4_ParamLimits

0xaedc,	// (0x00046911) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0004aae0) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0004aae0) list_pinb_item_pane_g

0xaef8,	// (0x0004692d) list_pinb_item_pane_t1_ParamLimits

0xaef8,	// (0x0004692d) list_pinb_item_pane_t1

0x2a71,	// (0x0003e4a6) calc_display_pane

0x2a8f,	// (0x0003e4c4) calc_paper_pane

0x2aab,	// (0x0003e4e0) grid_calc_pane

0xabbb,	// (0x000465f0) bg_list_pane_cp01

0x2ad7,	// (0x0003e50c) clock_g1

0x2adf,	// (0x0003e514) clock_g2

0x0001,

0xf0b4,	// (0x0004aae9) clock_g

0x2ae9,	// (0x0003e51e) clock_t1_ParamLimits

0x2ae9,	// (0x0003e51e) clock_t1

0x2afe,	// (0x0003e533) clock_t2_ParamLimits

0x2afe,	// (0x0003e533) clock_t2

0x2b10,	// (0x0003e545) clock_t3_ParamLimits

0x2b10,	// (0x0003e545) clock_t3

0x2b22,	// (0x0003e557) clock_t4_ParamLimits

0x2b22,	// (0x0003e557) clock_t4

0x2b34,	// (0x0003e569) clock_t5_ParamLimits

0x2b34,	// (0x0003e569) clock_t5

0x2b49,	// (0x0003e57e) clock_t6_ParamLimits

0x2b49,	// (0x0003e57e) clock_t6

0x2b5b,	// (0x0003e590) clock_t7_ParamLimits

0x2b5b,	// (0x0003e590) clock_t7

0x2b6d,	// (0x0003e5a2) clock_t8_ParamLimits

0x2b6d,	// (0x0003e5a2) clock_t8

0x2b83,	// (0x0003e5b8) clock_t9_ParamLimits

0x2b83,	// (0x0003e5b8) clock_t9

0x0008,

0xf0b9,	// (0x0004aaee) clock_t_ParamLimits

0xf0b9,	// (0x0004aaee) clock_t

0xaf0c,	// (0x00046941) popup_clock_analogue_window_cp02

0xaf0c,	// (0x00046941) popup_clock_digital_window_cp01

0xabbb,	// (0x000465f0) listscroll_help_pane

0xabbb,	// (0x000465f0) phob_pre_status_pane

0xaf14,	// (0x00046949) grid_qdial_pane

0xae53,	// (0x00046888) listscroll_mce_pane

0xae53,	// (0x00046888) bg_notes_pane

0xaf1e,	// (0x00046953) list_notes_pane

0x2b99,	// (0x0003e5ce) scroll_pane_cp06

0xaf2c,	// (0x00046961) bg_calc_paper_pane

0x2ba8,	// (0x0003e5dd) list_calc_pane

0xaf40,	// (0x00046975) bg_calc_display_pane

0x2bc2,	// (0x0003e5f7) calc_display_pane_t1

0x2bd7,	// (0x0003e60c) calc_display_pane_t2

0x2bec,	// (0x0003e621) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0004ab01) calc_display_pane_t

0x2bfe,	// (0x0003e633) cell_calc_pane_ParamLimits

0x2bfe,	// (0x0003e633) cell_calc_pane

0xaf4c,	// (0x00046981) bg_calc_paper_pane_g1

0xaf58,	// (0x0004698d) bg_calc_paper_pane_g2

0xaf64,	// (0x00046999) bg_calc_paper_pane_g3

0xaf70,	// (0x000469a5) bg_calc_paper_pane_g4

0xaf7c,	// (0x000469b1) bg_calc_paper_pane_g5

0x2c2b,	// (0x0003e660) bg_calc_paper_pane_g6

0x2c3c,	// (0x0003e671) bg_calc_paper_pane_g7

0x2c4d,	// (0x0003e682) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0004ab08) bg_calc_paper_pane_g

0x2c5e,	// (0x0003e693) calc_bg_paper_pane_g9

0x2c6f,	// (0x0003e6a4) list_calc_item_pane_ParamLimits

0x2c6f,	// (0x0003e6a4) list_calc_item_pane

0xaf88,	// (0x000469bd) list_calc_item_pane_g1

0x2c9c,	// (0x0003e6d1) list_calc_item_pane_t1_ParamLimits

0x2c9c,	// (0x0003e6d1) list_calc_item_pane_t1

0x2cae,	// (0x0003e6e3) list_calc_item_pane_t2_ParamLimits

0x2cae,	// (0x0003e6e3) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0004ab19) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0004ab19) list_calc_item_pane_t

0xae6b,	// (0x000468a0) cell_calc_pane_g1

0xaf95,	// (0x000469ca) grid_highlight_pane_cp02

0x2cde,	// (0x0003e713) bg_calc_display_pane_g1

0x2ce7,	// (0x0003e71c) bg_calc_display_pane_g2

0x2cf1,	// (0x0003e726) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0004ab23) bg_calc_display_pane_g

0x2cfa,	// (0x0003e72f) cell_qdial_pane_ParamLimits

0x2cfa,	// (0x0003e72f) cell_qdial_pane

0x2d0e,	// (0x0003e743) cell_qdial_pane_g1_ParamLimits

0x2d0e,	// (0x0003e743) cell_qdial_pane_g1

0x2d1b,	// (0x0003e750) cell_qdial_pane_g2_ParamLimits

0x2d1b,	// (0x0003e750) cell_qdial_pane_g2

0xafb7,	// (0x000469ec) cell_qdial_pane_g3_ParamLimits

0xafb7,	// (0x000469ec) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0004ab2a) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0004ab2a) cell_qdial_pane_g

0x2d38,	// (0x0003e76d) cell_qdial_pane_t1_ParamLimits

0x2d38,	// (0x0003e76d) cell_qdial_pane_t1

0x2d50,	// (0x0003e785) cell_qdial_pane_t2_ParamLimits

0x2d50,	// (0x0003e785) cell_qdial_pane_t2

0x2d63,	// (0x0003e798) cell_qdial_pane_t3_ParamLimits

0x2d63,	// (0x0003e798) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0004ab33) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0004ab33) cell_qdial_pane_t

0xabbb,	// (0x000465f0) grid_highlight_pane_cp04

0xafc3,	// (0x000469f8) thumbnail_qdial_pane_ParamLimits

0xafc3,	// (0x000469f8) thumbnail_qdial_pane

0xb01f,	// (0x00046a54) list_help_pane

0xb028,	// (0x00046a5d) scroll_pane_cp02

0x2d76,	// (0x0003e7ab) help_list_pane_t1_ParamLimits

0x2d76,	// (0x0003e7ab) help_list_pane_t1

0x2db0,	// (0x0003e7e5) bg_notes_pane_g2

0x2db8,	// (0x0003e7ed) bg_notes_pane_g3

0x2dc0,	// (0x0003e7f5) notes_bg_pane_g1

0x2dc8,	// (0x0003e7fd) notes_bg_pane_g4

0x2dd0,	// (0x0003e805) notes_bg_pane_g5

0x2dd8,	// (0x0003e80d) notes_bg_pane_g6

0x2de0,	// (0x0003e815) notes_bg_pane_g7

0x2de8,	// (0x0003e81d) notes_bg_pane_g8

0x2df0,	// (0x0003e825) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0004ab51) notes_bg_pane_g

0x2df8,	// (0x0003e82d) list_notes_text_pane_ParamLimits

0x2df8,	// (0x0003e82d) list_notes_text_pane

0xb031,	// (0x00046a66) list_notes_text_pane_g1

0x1a23,	// (0x0003d458) list_notes_text_pane_t1

0x2e24,	// (0x0003e859) listscroll_cale_week_pane

0x2e49,	// (0x0003e87e) bg_cale_heading_pane

0xb054,	// (0x00046a89) bg_cale_pane_cp01

0x2e6b,	// (0x0003e8a0) cale_week_corner_pane

0x2e85,	// (0x0003e8ba) cale_week_day_heading_pane

0x2ea7,	// (0x0003e8dc) cale_week_scroll_pane_g1

0x2ec4,	// (0x0003e8f9) cale_week_scroll_pane_g2

0x2ed7,	// (0x0003e90c) cale_week_scroll_pane_g3

0x2eea,	// (0x0003e91f) cale_week_scroll_pane_g4

0x2efd,	// (0x0003e932) cale_week_scroll_pane_g5

0x2f10,	// (0x0003e945) cale_week_scroll_pane_g6

0x2f23,	// (0x0003e958) cale_week_scroll_pane_g7

0x2f38,	// (0x0003e96d) cale_week_scroll_pane_g8

0x2f4d,	// (0x0003e982) cale_week_scroll_pane_g9

0x2f60,	// (0x0003e995) cale_week_scroll_pane_g10

0x2f73,	// (0x0003e9a8) cale_week_scroll_pane_g11

0x2f86,	// (0x0003e9bb) cale_week_scroll_pane_g12

0x2f9d,	// (0x0003e9d2) cale_week_scroll_pane_g13

0x2fb8,	// (0x0003e9ed) cale_week_scroll_pane_g14

0x2fd3,	// (0x0003ea08) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0004ab60) cale_week_scroll_pane_g

0x3003,	// (0x0003ea38) cale_week_time_pane

0x3018,	// (0x0003ea4d) grid_cale_week_pane

0xb083,	// (0x00046ab8) scroll_pane_cp08

0x3037,	// (0x0003ea6c) cell_cale_week_pane_ParamLimits

0x3037,	// (0x0003ea6c) cell_cale_week_pane

0x3099,	// (0x0003eace) cale_week_day_heading_pane_t1

0x30b4,	// (0x0003eae9) cale_week_day_heading_pane_t2

0x30cf,	// (0x0003eb04) cale_week_day_heading_pane_t3

0x30ea,	// (0x0003eb1f) cale_week_day_heading_pane_t4

0x3105,	// (0x0003eb3a) cale_week_day_heading_pane_t5

0x3120,	// (0x0003eb55) cale_week_day_heading_pane_t6

0x313b,	// (0x0003eb70) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0004ab81) cale_week_day_heading_pane_t

0xb0a0,	// (0x00046ad5) bg_cale_side_pane

0x3156,	// (0x0003eb8b) cale_week_time_pane_t1

0x3170,	// (0x0003eba5) cale_week_time_pane_t2

0x318a,	// (0x0003ebbf) cale_week_time_pane_t3

0x31a4,	// (0x0003ebd9) cale_week_time_pane_t4

0x31be,	// (0x0003ebf3) cale_week_time_pane_t5

0x31d8,	// (0x0003ec0d) cale_week_time_pane_t6

0x31f8,	// (0x0003ec2d) cale_week_time_pane_t7

0x321a,	// (0x0003ec4f) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0004ab90) cale_week_time_pane_t

0x323e,	// (0x0003ec73) cell_cale_week_pane_g2

0x3262,	// (0x0003ec97) cell_cale_week_pane_g3_ParamLimits

0x3262,	// (0x0003ec97) cell_cale_week_pane_g3

0xb0ae,	// (0x00046ae3) grid_highlight_pane_cp07

0xb0b6,	// (0x00046aeb) listscroll_gms_pane

0xb0c9,	// (0x00046afe) grid_gms_pane

0xb0d2,	// (0x00046b07) listscroll_gms_pane_g1

0xb0da,	// (0x00046b0f) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0004aba1) listscroll_gms_pane_g

0x327a,	// (0x0003ecaf) scroll_pane_cp010

0x3285,	// (0x0003ecba) cell_gms_pane_ParamLimits

0x3285,	// (0x0003ecba) cell_gms_pane

0x3295,	// (0x0003ecca) cell_gms_pane_g1

0xb0e2,	// (0x00046b17) cell_gms_pane_g2

0xb031,	// (0x00046a66) cell_gms_pane_g3

0xb0ea,	// (0x00046b1f) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0004aba6) cell_gms_pane_g

0xb0f3,	// (0x00046b28) grid_highlight_pane_cp09

0x5326,	// (0x00040d5b) phob_pre_status_pane_g1

0x532e,	// (0x00040d63) phob_pre_status_pane_g2

0x5336,	// (0x00040d6b) phob_pre_status_pane_g3

0x533e,	// (0x00040d73) phob_pre_status_pane_g4

0x0004,

0xf54d,	// (0x0004af82) phob_pre_status_pane_g

0x534e,	// (0x00040d83) phob_pre_status_pane_t1

0x535e,	// (0x00040d93) phob_pre_status_pane_t2

0x536e,	// (0x00040da3) phob_pre_status_pane_t3

0x0002,

0xf558,	// (0x0004af8d) phob_pre_status_pane_t

0xb0fb,	// (0x00046b30) bg_list_pane_cp05

0x32a5,	// (0x0003ecda) grid_vorec_pane

0x32af,	// (0x0003ece4) vorec_t1

0x32bd,	// (0x0003ecf2) vorec_t2

0x32cb,	// (0x0003ed00) vorec_t3

0x32d9,	// (0x0003ed0e) vorec_t4

0x9c1b,	// (0x00045650) vorec_t5

0x9c29,	// (0x0004565e) vorec_t6

0x0004,

0xf17a,	// (0x0004abaf) vorec_t

0x9c37,	// (0x0004566c) wait_bar_pane_cp01

0x32f5,	// (0x0003ed2a) cell_vorec_pane_ParamLimits

0x32f5,	// (0x0003ed2a) cell_vorec_pane

0x3308,	// (0x0003ed3d) cell_vorec_pane_g1

0xabbb,	// (0x000465f0) grid_highlight_pane_cp05

0xacc2,	// (0x000466f7) cams_zoom_pane

0xacc2,	// (0x000466f7) image_vga_pane

0xaedc,	// (0x00046911) main_camera_pane_g1

0xaedc,	// (0x00046911) main_camera_pane_g2

0xaedc,	// (0x00046911) main_camera_pane_g3

0xaedc,	// (0x00046911) main_camera_pane_g4

0xaedc,	// (0x00046911) main_camera_pane_g5

0xaedc,	// (0x00046911) main_camera_pane_g6

0xaedc,	// (0x00046911) main_camera_pane_g7

0x0007,

0xf185,	// (0x0004abba) main_camera_pane_g

0xb8d0,	// (0x00047305) main_camera_pane_t1

0xb8d0,	// (0x00047305) main_camera_pane_t2

0x0001,

0xf196,	// (0x0004abcb) main_camera_pane_t

0x3312,	// (0x0003ed47) cams_zoom_pane_cp_ParamLimits

0x3312,	// (0x0003ed47) cams_zoom_pane_cp

0x3340,	// (0x0003ed75) image_cif_pane_ParamLimits

0x3340,	// (0x0003ed75) image_cif_pane

0xa79e,	// (0x000461d3) image_subqcif_pane

0x334e,	// (0x0003ed83) main_video_pane_g1_ParamLimits

0x334e,	// (0x0003ed83) main_video_pane_g1

0x3376,	// (0x0003edab) main_video_pane_g2_ParamLimits

0x3376,	// (0x0003edab) main_video_pane_g2

0x33a9,	// (0x0003edde) main_video_pane_g3_ParamLimits

0x33a9,	// (0x0003edde) main_video_pane_g3

0x33a9,	// (0x0003edde) main_video_pane_g4_ParamLimits

0x33a9,	// (0x0003edde) main_video_pane_g4

0x33d7,	// (0x0003ee0c) main_video_pane_g5_ParamLimits

0x33d7,	// (0x0003ee0c) main_video_pane_g5

0xb103,	// (0x00046b38) main_video_pane_g6_ParamLimits

0xb103,	// (0x00046b38) main_video_pane_g6

0x0006,

0xf19b,	// (0x0004abd0) main_video_pane_g_ParamLimits

0xf19b,	// (0x0004abd0) main_video_pane_g

0x33f3,	// (0x0003ee28) main_video_pane_t1_ParamLimits

0x33f3,	// (0x0003ee28) main_video_pane_t1

0xb11d,	// (0x00046b52) cams_zoom_pane_g1

0xb11d,	// (0x00046b52) cams_zoom_pane_g2

0xb11d,	// (0x00046b52) cams_zoom_pane_g3

0xb11d,	// (0x00046b52) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0004abdf) cams_zoom_pane_g

0x3439,	// (0x0003ee6e) grid_cams_pane

0x3447,	// (0x0003ee7c) linegrid_cams_pane

0x3455,	// (0x0003ee8a) cell_cams_pane_ParamLimits

0x3455,	// (0x0003ee8a) cell_cams_pane

0xb127,	// (0x00046b5c) cams_burst_image_pane

0xb12f,	// (0x00046b64) cell_cams_pane_g1

0xabbb,	// (0x000465f0) grid_highlight_pane_cp03

0xae6b,	// (0x000468a0) mp_bg_pane_g1

0xa79e,	// (0x000461d3) bg_list_pane_cp03

0xa79e,	// (0x000461d3) bg_mp_pane

0xa79e,	// (0x000461d3) grid_mp_pane

0xb11d,	// (0x00046b52) media_player_g1

0xb658,	// (0x0004708d) media_player_t1

0xb658,	// (0x0004708d) media_player_t2

0xb658,	// (0x0004708d) media_player_t3

0xb658,	// (0x0004708d) media_player_t4

0xb658,	// (0x0004708d) media_player_t5

0xb658,	// (0x0004708d) media_player_t6

0xb658,	// (0x0004708d) media_player_t7

0x0006,

0xf537,	// (0x0004af6c) media_player_t

0xa79e,	// (0x000461d3) wait_bar_pane_cp02

0xf51c,	// (0x0004af51) main_usb_pane_t

0xb8e4,	// (0x00047319) cell_mp_pane

0xae6b,	// (0x000468a0) cell_mp_pane_g1

0xabbb,	// (0x000465f0) grid_highlight_pane_cp06

0xb14b,	// (0x00046b80) grid_skin_colour_pane

0xb153,	// (0x00046b88) list_highlight_pane_cp03

0x3468,	// (0x0003ee9d) skin_g1

0xb15b,	// (0x00046b90) skin_t1

0xb16a,	// (0x00046b9f) skin_t2

0x0001,

0xf1d8,	// (0x0004ac0d) skin_t

0x3472,	// (0x0003eea7) cell_skin_colour_pane_ParamLimits

0x3472,	// (0x0003eea7) cell_skin_colour_pane

0xb178,	// (0x00046bad) cell_skin_colour_pane_g1

0x34f6,	// (0x0003ef2b) call_video_g1_ParamLimits

0x34f6,	// (0x0003ef2b) call_video_g1

0x3506,	// (0x0003ef3b) call_video_g2_ParamLimits

0x3506,	// (0x0003ef3b) call_video_g2

0x0001,

0xf1dd,	// (0x0004ac12) call_video_g_ParamLimits

0xf1dd,	// (0x0004ac12) call_video_g

0x3560,	// (0x0003ef95) call_video_uplink_pane_cp1_ParamLimits

0x3560,	// (0x0003ef95) call_video_uplink_pane_cp1

0xb18a,	// (0x00046bbf) call_video_uplink_pane_cp2

0x362c,	// (0x0003f061) video_down_crop_pane_ParamLimits

0x362c,	// (0x0003f061) video_down_crop_pane

0x371e,	// (0x0003f153) video_down_pane_ParamLimits

0x371e,	// (0x0003f153) video_down_pane

0xb192,	// (0x00046bc7) video_down_subqcif_pane_ParamLimits

0xb192,	// (0x00046bc7) video_down_subqcif_pane

0xb1aa,	// (0x00046bdf) video_down_subqcif_pane_cp_ParamLimits

0xb1aa,	// (0x00046bdf) video_down_subqcif_pane_cp

0xb1d0,	// (0x00046c05) im_reading_pane_ParamLimits

0xb1d0,	// (0x00046c05) im_reading_pane

0x383e,	// (0x0003f273) im_writing_pane_ParamLimits

0x383e,	// (0x0003f273) im_writing_pane

0x385c,	// (0x0003f291) im_reading_pane_t1

0xb1ea,	// (0x00046c1f) list_im_pane

0xb1fb,	// (0x00046c30) scroll_pane_cp07

0x38b4,	// (0x0003f2e9) im_writing_pane_t1_ParamLimits

0x38b4,	// (0x0003f2e9) im_writing_pane_t1

0xb214,	// (0x00046c49) im_writing_pane_t2_ParamLimits

0xb214,	// (0x00046c49) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0004ac1c) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0004ac1c) im_writing_pane_t

0xabbb,	// (0x000465f0) input_focus_pane_cp04

0xabbb,	// (0x000465f0) input_focus_pane_cp05

0x38c6,	// (0x0003f2fb) list_im_single_pane_ParamLimits

0x38c6,	// (0x0003f2fb) list_im_single_pane

0x38ed,	// (0x0003f322) list_single_im_pane_t1

0xb0fb,	// (0x00046b30) blid_accuracy_pane

0xb0fb,	// (0x00046b30) blid_compass_pane

0xce79,	// (0x000488ae) main_location_t1

0xce79,	// (0x000488ae) main_location_t2

0xce79,	// (0x000488ae) main_location_t3

0x0002,

0xf546,	// (0x0004af7b) main_location_t

0xabbb,	// (0x000465f0) aid_levels_location

0xae6b,	// (0x000468a0) blid_accuracy_pane_g1

0xae6b,	// (0x000468a0) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x0004ac70) blid_accuracy_pane_g

0xb25c,	// (0x00046c91) wml_content_pane

0xb29a,	// (0x00046ccf) wml_button_pane_ParamLimits

0xb29a,	// (0x00046ccf) wml_button_pane

0x38fc,	// (0x0003f331) wml_list_single_large_pane_ParamLimits

0x38fc,	// (0x0003f331) wml_list_single_large_pane

0x3927,	// (0x0003f35c) wml_list_single_medium_pane_ParamLimits

0x3927,	// (0x0003f35c) wml_list_single_medium_pane

0x3959,	// (0x0003f38e) wml_list_single_small_pane_ParamLimits

0x3959,	// (0x0003f38e) wml_list_single_small_pane

0xb2ae,	// (0x00046ce3) wml_selection_box_pane_ParamLimits

0xb2ae,	// (0x00046ce3) wml_selection_box_pane

0xb2c1,	// (0x00046cf6) wml_list_single_pane_t1

0xb2d0,	// (0x00046d05) wml_list_single_medium_pane_t1

0xb2df,	// (0x00046d14) wml_list_single_large_pane_t1

0xb2ee,	// (0x00046d23) input_focus_pane_cp02_ParamLimits

0xb2ee,	// (0x00046d23) input_focus_pane_cp02

0xb301,	// (0x00046d36) wml_selection_box_pane_g1

0xb30a,	// (0x00046d3f) wml_selection_box_pane_t1_ParamLimits

0xb30a,	// (0x00046d3f) wml_selection_box_pane_t1

0xae53,	// (0x00046888) bg_wml_button_pane_ParamLimits

0xae53,	// (0x00046888) bg_wml_button_pane

0xb322,	// (0x00046d57) wml_button_pane_g1

0xb32a,	// (0x00046d5f) wml_button_pane_t1

0xb322,	// (0x00046d57) wml_button_bg_pane_g1

0xb33a,	// (0x00046d6f) wml_button_bg_pane_g2

0xb342,	// (0x00046d77) wml_button_bg_pane_g3

0xb34a,	// (0x00046d7f) wml_button_bg_pane_g4

0xb352,	// (0x00046d87) wml_button_bg_pane_g5

0xb35a,	// (0x00046d8f) wml_button_bg_pane_g6

0xb362,	// (0x00046d97) wml_button_bg_pane_g7

0xb36a,	// (0x00046d9f) wml_button_bg_pane_g8

0xb372,	// (0x00046da7) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0004ac21) wml_button_bg_pane_g

0x3996,	// (0x0003f3cb) bg_list_pane_cp02

0xb37a,	// (0x00046daf) mce_header_pane_ParamLimits

0xb37a,	// (0x00046daf) mce_header_pane

0xb390,	// (0x00046dc5) mce_icon_pane

0xb390,	// (0x00046dc5) mce_image_pane

0xb399,	// (0x00046dce) mce_text_pane_ParamLimits

0xb399,	// (0x00046dce) mce_text_pane

0x39a0,	// (0x0003f3d5) scroll_pane_cp03

0xb292,	// (0x00046cc7) scroll_pane_cp04

0xb3ac,	// (0x00046de1) scroll_pane_cp05_ParamLimits

0xb3ac,	// (0x00046de1) scroll_pane_cp05

0x39aa,	// (0x0003f3df) mce_header_field_pane_ParamLimits

0x39aa,	// (0x0003f3df) mce_header_field_pane

0x39ca,	// (0x0003f3ff) mce_header_field_pane_2_ParamLimits

0x39ca,	// (0x0003f3ff) mce_header_field_pane_2

0x39e0,	// (0x0003f415) mce_header_field_pane_3

0x39e8,	// (0x0003f41d) list_single_mce_message_pane_ParamLimits

0x39e8,	// (0x0003f41d) list_single_mce_message_pane

0x3a16,	// (0x0003f44b) list_single_mce_smart_pane_ParamLimits

0x3a16,	// (0x0003f44b) list_single_mce_smart_pane

0xb3b8,	// (0x00046ded) input_focus_pane_cp03

0xb3c1,	// (0x00046df6) list_header_data_pane

0x3a4f,	// (0x0003f484) mce_header_field_pane_t1

0x3a5d,	// (0x0003f492) list_single_mce_header_pane_ParamLimits

0x3a5d,	// (0x0003f492) list_single_mce_header_pane

0xb3c9,	// (0x00046dfe) list_single_mce_header_pane_t1

0xb3d8,	// (0x00046e0d) list_single_mce_message_pane_g1

0xb3e0,	// (0x00046e15) list_single_mce_message_pane_t1

0x3ab3,	// (0x0003f4e8) bg_cale_heading_pane_cp01_ParamLimits

0x3ab3,	// (0x0003f4e8) bg_cale_heading_pane_cp01

0xb3ee,	// (0x00046e23) bg_cale_pane_cp02_ParamLimits

0xb3ee,	// (0x00046e23) bg_cale_pane_cp02

0x3b01,	// (0x0003f536) cale_month_corner_pane

0x3b20,	// (0x0003f555) cale_month_day_heading_pane_ParamLimits

0x3b20,	// (0x0003f555) cale_month_day_heading_pane

0x3b86,	// (0x0003f5bb) cale_month_pane_g1_ParamLimits

0x3b86,	// (0x0003f5bb) cale_month_pane_g1

0x3bc9,	// (0x0003f5fe) cale_month_pane_g2_ParamLimits

0x3bc9,	// (0x0003f5fe) cale_month_pane_g2

0x3c03,	// (0x0003f638) cale_month_pane_g3_ParamLimits

0x3c03,	// (0x0003f638) cale_month_pane_g3

0x3c53,	// (0x0003f688) cale_month_pane_g4_ParamLimits

0x3c53,	// (0x0003f688) cale_month_pane_g4

0x3ca3,	// (0x0003f6d8) cale_month_pane_g5_ParamLimits

0x3ca3,	// (0x0003f6d8) cale_month_pane_g5

0x3cf3,	// (0x0003f728) cale_month_pane_g6_ParamLimits

0x3cf3,	// (0x0003f728) cale_month_pane_g6

0x3d43,	// (0x0003f778) cale_month_pane_g7_ParamLimits

0x3d43,	// (0x0003f778) cale_month_pane_g7

0x3dab,	// (0x0003f7e0) cale_month_pane_g8_ParamLimits

0x3dab,	// (0x0003f7e0) cale_month_pane_g8

0x3e13,	// (0x0003f848) cale_month_pane_g9_ParamLimits

0x3e13,	// (0x0003f848) cale_month_pane_g9

0x3e71,	// (0x0003f8a6) cale_month_pane_g10_ParamLimits

0x3e71,	// (0x0003f8a6) cale_month_pane_g10

0x3ecf,	// (0x0003f904) cale_month_pane_g11_ParamLimits

0x3ecf,	// (0x0003f904) cale_month_pane_g11

0x3f23,	// (0x0003f958) cale_month_pane_g12_ParamLimits

0x3f23,	// (0x0003f958) cale_month_pane_g12

0x3f79,	// (0x0003f9ae) cale_month_pane_g13_ParamLimits

0x3f79,	// (0x0003f9ae) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0004ac34) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0004ac34) cale_month_pane_g

0x3fcf,	// (0x0003fa04) cale_month_week_pane

0x3ff3,	// (0x0003fa28) grid_cale_month_pane_ParamLimits

0x3ff3,	// (0x0003fa28) grid_cale_month_pane

0x4050,	// (0x0003fa85) cale_month_day_heading_pane_t1

0x40d6,	// (0x0003fb0b) cale_month_day_heading_pane_t2

0x414f,	// (0x0003fb84) cale_month_day_heading_pane_t3

0x41c8,	// (0x0003fbfd) cale_month_day_heading_pane_t4

0x4241,	// (0x0003fc76) cale_month_day_heading_pane_t5

0x42ba,	// (0x0003fcef) cale_month_day_heading_pane_t6

0x4333,	// (0x0003fd68) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0004ac4f) cale_month_day_heading_pane_t

0xb0a0,	// (0x00046ad5) bg_cale_side_pane_cp01

0x43c4,	// (0x0003fdf9) cale_month_week_pane_t1

0x43dd,	// (0x0003fe12) cale_month_week_pane_t2

0x43f6,	// (0x0003fe2b) cale_month_week_pane_t3

0x440f,	// (0x0003fe44) cale_month_week_pane_t4

0x442a,	// (0x0003fe5f) cale_month_week_pane_t5

0x444b,	// (0x0003fe80) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0004ac5e) cale_month_week_pane_t

0x446c,	// (0x0003fea1) cell_cale_month_pane_ParamLimits

0x446c,	// (0x0003fea1) cell_cale_month_pane

0x4592,	// (0x0003ffc7) cell_cale_month_pane_g1

0x459e,	// (0x0003ffd3) cell_cale_month_pane_t1_ParamLimits

0x459e,	// (0x0003ffd3) cell_cale_month_pane_t1

0xb0ae,	// (0x00046ae3) grid_highlight_pane_cp08

0xae6b,	// (0x000468a0) main_smil_g1

0x45ca,	// (0x0003ffff) smil_status_pane

0xb42d,	// (0x00046e62) smil_text_pane

0xcd51,	// (0x00048786) bg_popup_call3_rect_pane_g8

0xcd59,	// (0x0004878e) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x0004aefc) bg_popup_call3_rect_pane_g

0xcf42,	// (0x00048977) smil_status_volume_pane_g1

0xb437,	// (0x00046e6c) smil_status_pane_t1

0x56c1,	// (0x000410f6) volume_smil_pane

0xb44e,	// (0x00046e83) list_smil_text_pane

0x45dd,	// (0x00040012) scroll_pane_cp011

0x45e8,	// (0x0004001d) smil_text_list_pane_t1_ParamLimits

0x45e8,	// (0x0004001d) smil_text_list_pane_t1

0x4675,	// (0x000400aa) aid_volume_smil_ParamLimits

0x4675,	// (0x000400aa) aid_volume_smil

0xae6b,	// (0x000468a0) smil_volume_pane_g1

0xae6b,	// (0x000468a0) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x0004ac70) smil_volume_pane_g

0x2e24,	// (0x0003e859) listscroll_cale_day_pane

0xb458,	// (0x00046e8d) bg_cale_pane

0xb470,	// (0x00046ea5) list_cale_pane

0xb493,	// (0x00046ec8) scroll_pane_cp09

0xb4a4,	// (0x00046ed9) cale_bg_pane_g1

0xb4ac,	// (0x00046ee1) cale_bg_pane_g2

0xb4b4,	// (0x00046ee9) cale_bg_pane_g3

0xb4bc,	// (0x00046ef1) cale_bg_pane_g4

0xb4c4,	// (0x00046ef9) cale_bg_pane_g5

0xb4cc,	// (0x00046f01) cale_bg_pane_g6

0xb4d4,	// (0x00046f09) cale_bg_pane_g7

0xb4dc,	// (0x00046f11) cale_bg_pane_g8

0xb4e4,	// (0x00046f19) cale_bg_pane_g9

0x0008,

0xf240,	// (0x0004ac75) cale_bg_pane_g

0x469f,	// (0x000400d4) list_cale_time_pane_ParamLimits

0x469f,	// (0x000400d4) list_cale_time_pane

0xb4ec,	// (0x00046f21) list_cale_time_pane_g1_ParamLimits

0xb4ec,	// (0x00046f21) list_cale_time_pane_g1

0xb4f8,	// (0x00046f2d) list_cale_time_pane_g2_ParamLimits

0xb4f8,	// (0x00046f2d) list_cale_time_pane_g2

0x46c7,	// (0x000400fc) list_cale_time_pane_g3_ParamLimits

0x46c7,	// (0x000400fc) list_cale_time_pane_g3

0x46d5,	// (0x0004010a) list_cale_time_pane_g4_ParamLimits

0x46d5,	// (0x0004010a) list_cale_time_pane_g4

0x46e3,	// (0x00040118) list_cale_time_pane_g5_ParamLimits

0x46e3,	// (0x00040118) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x0004ac88) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x0004ac88) list_cale_time_pane_g

0xb512,	// (0x00046f47) list_cale_time_pane_t1_ParamLimits

0xb512,	// (0x00046f47) list_cale_time_pane_t1

0xb53a,	// (0x00046f6f) list_cale_time_pane_t2_ParamLimits

0xb53a,	// (0x00046f6f) list_cale_time_pane_t2

0x499e,	// (0x000403d3) aid_blid_cardinal_pane

0x49e0,	// (0x00040415) compass_pane_t4

0xb562,	// (0x00046f97) list_cale_time_pane_t4_ParamLimits

0xb562,	// (0x00046f97) list_cale_time_pane_t4

0x49ee,	// (0x00040423) compass_pane_t5

0x49fe,	// (0x00040433) compass_pane_t6

0x4a0c,	// (0x00040441) compass_pane_t7

0xb9fe,	// (0x00047433) navi_pane_cc_t1

0xbbdb,	// (0x00047610) aid_phob_thumbnail_center_pane

0x4dbf,	// (0x000407f4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x0004ac95) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x0004ac95) list_cale_time_pane_t

0xa812,	// (0x00046247) bg_popup_window_pane_cp02_ParamLimits

0xa812,	// (0x00046247) bg_popup_window_pane_cp02

0xb58a,	// (0x00046fbf) heading_pane_cp01_ParamLimits

0xb58a,	// (0x00046fbf) heading_pane_cp01

0xb596,	// (0x00046fcb) loc_req_pane_ParamLimits

0xb596,	// (0x00046fcb) loc_req_pane

0xb5a6,	// (0x00046fdb) loc_type_pane_ParamLimits

0xb5a6,	// (0x00046fdb) loc_type_pane

0xb5b8,	// (0x00046fed) loc_type_pane_t1_ParamLimits

0xb5b8,	// (0x00046fed) loc_type_pane_t1

0xb5ca,	// (0x00046fff) loc_type_pane_t2_ParamLimits

0xb5ca,	// (0x00046fff) loc_type_pane_t2

0xb5dc,	// (0x00047011) loc_type_pane_t3_ParamLimits

0xb5dc,	// (0x00047011) loc_type_pane_t3

0x0002,

0xf267,	// (0x0004ac9c) loc_type_pane_t_ParamLimits

0xf267,	// (0x0004ac9c) loc_type_pane_t

0xb5ee,	// (0x00047023) list_loc_req_pane

0xb5f8,	// (0x0004702d) scroll_pane_cp012

0x1a31,	// (0x0003d466) list_single_loc_request_popup_menu_pane_ParamLimits

0x1a31,	// (0x0003d466) list_single_loc_request_popup_menu_pane

0xb603,	// (0x00047038) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb603,	// (0x00047038) list_single_loc_request_popup_menu_pane_g1

0xb60f,	// (0x00047044) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb60f,	// (0x00047044) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x0004aca3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x0004aca3) list_single_loc_request_popup_menu_pane_g

0xb61b,	// (0x00047050) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb61b,	// (0x00047050) list_single_loc_request_popup_menu_pane_t1

0x46f1,	// (0x00040126) bg_popup_window_pane_cp03_ParamLimits

0x46f1,	// (0x00040126) bg_popup_window_pane_cp03

0x46ff,	// (0x00040134) heading_loc_req_pane_ParamLimits

0x46ff,	// (0x00040134) heading_loc_req_pane

0x470b,	// (0x00040140) popup_dyc_status_message_window_g1_ParamLimits

0x470b,	// (0x00040140) popup_dyc_status_message_window_g1

0x4717,	// (0x0004014c) popup_dyc_status_message_window_t1_ParamLimits

0x4717,	// (0x0004014c) popup_dyc_status_message_window_t1

0x4729,	// (0x0004015e) popup_dyc_status_message_window_t2_ParamLimits

0x4729,	// (0x0004015e) popup_dyc_status_message_window_t2

0x473b,	// (0x00040170) popup_dyc_status_message_window_t3_ParamLimits

0x473b,	// (0x00040170) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x0004aca8) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x0004aca8) popup_dyc_status_message_window_t

0xabbb,	// (0x000465f0) bg_heading_pane_cp01

0xb631,	// (0x00047066) heading_loc_req_pane_g1

0xb639,	// (0x0004706e) heading_loc_req_pane_g2

0xb641,	// (0x00047076) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x0004acaf) heading_loc_req_pane_g

0xb649,	// (0x0004707e) heading_loc_req_pane_t1

0xb668,	// (0x0004709d) bg_popup_sub_pane_cp01_ParamLimits

0xb668,	// (0x0004709d) bg_popup_sub_pane_cp01

0xb676,	// (0x000470ab) popup_cale_events_window_g1_ParamLimits

0xb676,	// (0x000470ab) popup_cale_events_window_g1

0xb696,	// (0x000470cb) popup_cale_events_window_g2_ParamLimits

0xb696,	// (0x000470cb) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x0004acd1) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x0004acd1) popup_cale_events_window_g

0xb6b6,	// (0x000470eb) popup_cale_events_window_t1_ParamLimits

0xb6b6,	// (0x000470eb) popup_cale_events_window_t1

0xb6c8,	// (0x000470fd) popup_cale_events_window_t2_ParamLimits

0xb6c8,	// (0x000470fd) popup_cale_events_window_t2

0xb706,	// (0x0004713b) popup_cale_events_window_t3_ParamLimits

0xb706,	// (0x0004713b) popup_cale_events_window_t3

0xb740,	// (0x00047175) popup_cale_events_window_t4_ParamLimits

0xb740,	// (0x00047175) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x0004acd6) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x0004acd6) popup_cale_events_window_t

0x4765,	// (0x0004019a) call_type_pane

0xc56e,	// (0x00047fa3) popup_call_status_window_g1

0x4771,	// (0x000401a6) popup_call_status_window_g2

0x477d,	// (0x000401b2) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x0004acdf) popup_call_status_window_g

0xb776,	// (0x000471ab) call_type_pane_g1

0xb77f,	// (0x000471b4) call_type_pane_g2

0x0001,

0xf2b1,	// (0x0004ace6) call_type_pane_g

0xabbb,	// (0x000465f0) bg_popup_sub_pane_cp02

0xb788,	// (0x000471bd) listscroll_popup_wml_pane

0xb790,	// (0x000471c5) list_wml_pane

0xb79a,	// (0x000471cf) scroll_pane_cp013

0xb7a5,	// (0x000471da) list_single_graphic_popup_wml_pane_ParamLimits

0xb7a5,	// (0x000471da) list_single_graphic_popup_wml_pane

0xae6b,	// (0x000468a0) list_single_graphic_popup_wml_pane_g1

0xb7b9,	// (0x000471ee) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x0004aceb) list_single_graphic_popup_wml_pane_g

0xb7c1,	// (0x000471f6) list_single_graphic_popup_wml_pane_t1

0xb7d7,	// (0x0004720c) aid_call_pane

0xae4b,	// (0x00046880) popup_clock_analogue_window_g1

0xae4b,	// (0x00046880) popup_clock_analogue_window_g2

0x4789,	// (0x000401be) popup_clock_analogue_window_g3

0x4789,	// (0x000401be) popup_clock_analogue_window_g4

0xae6b,	// (0x000468a0) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x0004acf0) popup_clock_analogue_window_g

0x4791,	// (0x000401c6) popup_clock_analogue_window_t1

0x479f,	// (0x000401d4) clock_digital_number_pane_ParamLimits

0x479f,	// (0x000401d4) clock_digital_number_pane

0x47ab,	// (0x000401e0) clock_digital_number_pane_cp02_ParamLimits

0x47ab,	// (0x000401e0) clock_digital_number_pane_cp02

0x47b7,	// (0x000401ec) clock_digital_number_pane_cp03_ParamLimits

0x47b7,	// (0x000401ec) clock_digital_number_pane_cp03

0x47c3,	// (0x000401f8) clock_digital_number_pane_cp04_ParamLimits

0x47c3,	// (0x000401f8) clock_digital_number_pane_cp04

0x47cf,	// (0x00040204) clock_digital_separator_pane_ParamLimits

0x47cf,	// (0x00040204) clock_digital_separator_pane

0x47db,	// (0x00040210) popup_clock_digital_window_t1

0xae6b,	// (0x000468a0) clock_digital_number_pane_g1

0xae6b,	// (0x000468a0) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x0004ac70) clock_digital_number_pane_g

0xae6b,	// (0x000468a0) clock_digital_separator_pane_g1

0xae6b,	// (0x000468a0) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x0004ac70) clock_digital_separator_pane_g

0xabbb,	// (0x000465f0) bg_popup_window_pane_cp04

0xb7df,	// (0x00047214) heading_pane_cp03

0xb0fb,	// (0x00046b30) listscroll_popup_gms_pane

0xabbb,	// (0x000465f0) grid_large_graphic_popup_pane

0xb7e8,	// (0x0004721d) listscroll_popup_gms_pane_g1

0xb7f1,	// (0x00047226) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x0004acfb) listscroll_popup_gms_pane_g

0xb7fa,	// (0x0004722f) scroll_pane_cp014

0xacc2,	// (0x000466f7) cell_large_graphic_popup_pane_ParamLimits

0xacc2,	// (0x000466f7) cell_large_graphic_popup_pane

0xaece,	// (0x00046903) cell_large_graphic_popup_pane_g1_ParamLimits

0xaece,	// (0x00046903) cell_large_graphic_popup_pane_g1

0xb803,	// (0x00047238) cell_large_graphic_popup_pane_g2_ParamLimits

0xb803,	// (0x00047238) cell_large_graphic_popup_pane_g2

0xb811,	// (0x00047246) cell_large_graphic_popup_pane_g3_ParamLimits

0xb811,	// (0x00047246) cell_large_graphic_popup_pane_g3

0xb81f,	// (0x00047254) cell_large_graphic_popup_pane_g4_ParamLimits

0xb81f,	// (0x00047254) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x0004ad00) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x0004ad00) cell_large_graphic_popup_pane_g

0xabbb,	// (0x000465f0) grid_highlight_pane_cp010

0xae6b,	// (0x000468a0) bg_popup_call_pane_g1

0xb830,	// (0x00047265) list_single_graphic_popup_conf_pane_ParamLimits

0xb830,	// (0x00047265) list_single_graphic_popup_conf_pane

0xb843,	// (0x00047278) list_highlight_pane_cp01

0xb84c,	// (0x00047281) list_single_graphic_popup_conf_pane_g1

0xb854,	// (0x00047289) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x0004ad09) list_single_graphic_popup_conf_pane_g

0xb85c,	// (0x00047291) list_single_graphic_popup_conf_pane_t1

0xb86a,	// (0x0004729f) linegrid_cams_pane_g1

0x47f8,	// (0x0004022d) linegrid_cams_pane_g2

0xb031,	// (0x00046a66) linegrid_cams_pane_g3

0xb873,	// (0x000472a8) linegrid_cams_pane_g4

0x4801,	// (0x00040236) linegrid_cams_pane_g5

0x480a,	// (0x0004023f) linegrid_cams_pane_g6

0xb0ea,	// (0x00046b1f) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x0004ad0e) linegrid_cams_pane_g

0xb87c,	// (0x000472b1) popup_clock_analogue_window

0xb87c,	// (0x000472b1) popup_clock_digital_window

0xabbb,	// (0x000465f0) popup_phob_thumbnail_window

0xae6b,	// (0x000468a0) call_video_uplink_pane_g1

0xb885,	// (0x000472ba) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x0004ad1d) call_video_uplink_pane_g

0xb88d,	// (0x000472c2) video_uplink_pane

0xb895,	// (0x000472ca) mce_image_pane_g1

0x4813,	// (0x00040248) mce_image_pane_g2

0x481b,	// (0x00040250) mce_image_pane_g3

0x4823,	// (0x00040258) mce_image_pane_g4

0x482b,	// (0x00040260) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x0004ad22) mce_image_pane_g

0xb89f,	// (0x000472d4) control_top_pane_stacon_cp01_ParamLimits

0xb89f,	// (0x000472d4) control_top_pane_stacon_cp01

0xb8b3,	// (0x000472e8) uni_indicator_pane_stacon_cp01_ParamLimits

0xb8b3,	// (0x000472e8) uni_indicator_pane_stacon_cp01

0xb8e4,	// (0x00047319) bg_popup_sub_pane_cp03

0x4833,	// (0x00040268) chi_dic_find_pane

0x483b,	// (0x00040270) listscroll_chi_dic_pane

0x4844,	// (0x00040279) main_pane_chidic_g1

0x4857,	// (0x0004028c) chi_dic_find_pane_t1

0xb8ee,	// (0x00047323) find_chidic_pane

0xb8f7,	// (0x0004732c) chi_dic_list_pane_ParamLimits

0xb8f7,	// (0x0004732c) chi_dic_list_pane

0xb908,	// (0x0004733d) scroll_pane_cp020

0x4865,	// (0x0004029a) find_chidic_pane_t1

0xabbb,	// (0x000465f0) input_focus_pane_cp06

0x4874,	// (0x000402a9) list_chi_dic_pane_ParamLimits

0x4874,	// (0x000402a9) list_chi_dic_pane

0x4891,	// (0x000402c6) list_chi_dic_pane_t1_ParamLimits

0x4891,	// (0x000402c6) list_chi_dic_pane_t1

0xabbb,	// (0x000465f0) list_highlight_pane_cp020

0xb910,	// (0x00047345) bg_cale_heading_pane_g1

0x48a4,	// (0x000402d9) bg_cale_heading_pane_g2

0x48ac,	// (0x000402e1) bg_cale_heading_pane_g3

0x48b4,	// (0x000402e9) bg_cale_heading_pane_g4

0x48be,	// (0x000402f3) bg_cale_heading_pane_g5

0x48c8,	// (0x000402fd) bg_cale_heading_pane_g6

0x48d0,	// (0x00040305) bg_cale_heading_pane_g7

0x48d8,	// (0x0004030d) bg_cale_heading_pane_g8

0x48e2,	// (0x00040317) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x0004ad2d) bg_cale_heading_pane_g

0xb910,	// (0x00047345) bg_cale_side_pane_g1

0x48ec,	// (0x00040321) bg_cale_side_pane_g2

0x48f6,	// (0x0004032b) bg_cale_side_pane_g3

0x4900,	// (0x00040335) bg_cale_side_pane_g4

0x490a,	// (0x0004033f) bg_cale_side_pane_g5

0x4914,	// (0x00040349) bg_cale_side_pane_g6

0x491e,	// (0x00040353) bg_cale_side_pane_g7

0x4928,	// (0x0004035d) bg_cale_side_pane_g8

0x4930,	// (0x00040365) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x0004ad40) bg_cale_side_pane_g

0x4938,	// (0x0004036d) popup_call_status_window_ParamLimits

0x4938,	// (0x0004036d) popup_call_status_window

0xb918,	// (0x0004734d) stacon_top_pane

0xb920,	// (0x00047355) status_pane_ParamLimits

0xb920,	// (0x00047355) status_pane

0xb935,	// (0x0004736a) status_small_pane

0xb93d,	// (0x00047372) control_pane

0xabbb,	// (0x000465f0) stacon_bottom_pane

0xb945,	// (0x0004737a) list_single_mce_smart_pane_t1_ParamLimits

0xb945,	// (0x0004737a) list_single_mce_smart_pane_t1

0xb958,	// (0x0004738d) list_single_mce_smart_pane_t2_ParamLimits

0xb958,	// (0x0004738d) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x0004ad53) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x0004ad53) list_single_mce_smart_pane_t

0x4944,	// (0x00040379) compass_pane

0x4950,	// (0x00040385) main_location2_pane_t1

0x4964,	// (0x00040399) main_location2_pane_t2

0x4978,	// (0x000403ad) main_location2_pane_t3

0x0003,

0xf323,	// (0x0004ad58) main_location2_pane_t

0xb977,	// (0x000473ac) compass_pane_g1_ParamLimits

0xb977,	// (0x000473ac) compass_pane_g1

0x49c2,	// (0x000403f7) compass_pane_t1

0x49d1,	// (0x00040406) compass_pane_t2

0x0005,

0xf32c,	// (0x0004ad61) compass_pane_t

0x4a1c,	// (0x00040451) text_secondary_cp61

0xb9f5,	// (0x0004742a) navi_pane_cams_g5

0xba71,	// (0x000474a6) navi_pane_im_t1

0xba7f,	// (0x000474b4) navi_pane_mp_g1_ParamLimits

0xba7f,	// (0x000474b4) navi_pane_mp_g1

0xba93,	// (0x000474c8) navi_pane_mp_g2_ParamLimits

0xba93,	// (0x000474c8) navi_pane_mp_g2

0xba9f,	// (0x000474d4) navi_pane_mp_g3_ParamLimits

0xba9f,	// (0x000474d4) navi_pane_mp_g3

0x0002,

0xf340,	// (0x0004ad75) navi_pane_mp_g_ParamLimits

0xf340,	// (0x0004ad75) navi_pane_mp_g

0xbaab,	// (0x000474e0) navi_pane_mp_t1

0xbab9,	// (0x000474ee) navi_pane_mp_t2

0x0002,

0xf347,	// (0x0004ad7c) navi_pane_mp_t

0xbb24,	// (0x00047559) navi_pane_vt_g1

0xbaab,	// (0x000474e0) navi_pane_vt_t1

0xbb2c,	// (0x00047561) navi_slider_pane

0xb0fb,	// (0x00046b30) zooming_pane

0xbb3c,	// (0x00047571) navi_slider_pane_g1

0x4a57,	// (0x0004048c) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x0004ad83) navi_slider_pane_g

0xbb60,	// (0x00047595) aid_levels_zoom

0xbb68,	// (0x0004759d) zooming_pane_g1

0xbb70,	// (0x000475a5) zooming_pane_g2

0xbb70,	// (0x000475a5) zooming_pane_g3

0x0002,

0xf35d,	// (0x0004ad92) zooming_pane_g

0xbb78,	// (0x000475ad) level_10_zoom

0xbb81,	// (0x000475b6) level_11_zoom

0xbb8a,	// (0x000475bf) level_1_zoom

0xbb93,	// (0x000475c8) level_2_zoom

0xbb9c,	// (0x000475d1) level_3_zoom

0xbba5,	// (0x000475da) level_4_zoom

0xbbae,	// (0x000475e3) level_5_zoom

0xbbb7,	// (0x000475ec) level_6_zoom

0xbbc0,	// (0x000475f5) level_7_zoom

0xbbc9,	// (0x000475fe) level_8_zoom

0xbbd2,	// (0x00047607) level_9_zoom

0xbbe3,	// (0x00047618) popup_phob_thumbnail_window_g1

0xbbeb,	// (0x00047620) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x0004ad99) popup_phob_thumbnail_window_g

0x537e,	// (0x00040db3) level_1_location

0x5386,	// (0x00040dbb) level_2_location

0x538e,	// (0x00040dc3) level_3_location

0x5398,	// (0x00040dcd) level_4_location

0xb0fb,	// (0x00046b30) level_5_location

0x4a69,	// (0x0004049e) mce_icon_pane_g1

0x4a71,	// (0x000404a6) mce_icon_pane_g2

0x0001,

0xf369,	// (0x0004ad9e) mce_icon_pane_g

0x4a79,	// (0x000404ae) main_mup_pane_g1_ParamLimits

0x4a79,	// (0x000404ae) main_mup_pane_g1

0xaeea,	// (0x0004691f) main_mup_pane_g2_ParamLimits

0xaeea,	// (0x0004691f) main_mup_pane_g2

0xaeea,	// (0x0004691f) main_mup_pane_g3_ParamLimits

0xaeea,	// (0x0004691f) main_mup_pane_g3

0xaeea,	// (0x0004691f) main_mup_pane_g4_ParamLimits

0xaeea,	// (0x0004691f) main_mup_pane_g4

0xaeea,	// (0x0004691f) main_mup_pane_g5_ParamLimits

0xaeea,	// (0x0004691f) main_mup_pane_g5

0xaeea,	// (0x0004691f) main_mup_pane_g6_ParamLimits

0xaeea,	// (0x0004691f) main_mup_pane_g6

0xaeea,	// (0x0004691f) main_mup_pane_g7_ParamLimits

0xaeea,	// (0x0004691f) main_mup_pane_g7

0xaeea,	// (0x0004691f) main_mup_pane_g8_ParamLimits

0xaeea,	// (0x0004691f) main_mup_pane_g8

0xaeea,	// (0x0004691f) main_mup_pane_g9_ParamLimits

0xaeea,	// (0x0004691f) main_mup_pane_g9

0xaeea,	// (0x0004691f) main_mup_pane_g10_ParamLimits

0xaeea,	// (0x0004691f) main_mup_pane_g10

0xaeea,	// (0x0004691f) main_mup_pane_g11_ParamLimits

0xaeea,	// (0x0004691f) main_mup_pane_g11

0xaedc,	// (0x00046911) main_mup_pane_g12_ParamLimits

0xaedc,	// (0x00046911) main_mup_pane_g12

0xaeea,	// (0x0004691f) main_mup_pane_g13_ParamLimits

0xaeea,	// (0x0004691f) main_mup_pane_g13

0x000c,

0xf36e,	// (0x0004ada3) main_mup_pane_g_ParamLimits

0xf36e,	// (0x0004ada3) main_mup_pane_g

0xaef8,	// (0x0004692d) main_mup_pane_t1_ParamLimits

0xaef8,	// (0x0004692d) main_mup_pane_t1

0xaef8,	// (0x0004692d) main_mup_pane_t2_ParamLimits

0xaef8,	// (0x0004692d) main_mup_pane_t2

0xaef8,	// (0x0004692d) main_mup_pane_t3_ParamLimits

0xaef8,	// (0x0004692d) main_mup_pane_t3

0xb8d0,	// (0x00047305) main_mup_pane_t4_ParamLimits

0xb8d0,	// (0x00047305) main_mup_pane_t4

0xb8d0,	// (0x00047305) main_mup_pane_t5_ParamLimits

0xb8d0,	// (0x00047305) main_mup_pane_t5

0xb137,	// (0x00046b6c) main_mup_pane_t6_ParamLimits

0xb137,	// (0x00046b6c) main_mup_pane_t6

0x0005,

0xf389,	// (0x0004adbe) main_mup_pane_t_ParamLimits

0xf389,	// (0x0004adbe) main_mup_pane_t

0xae75,	// (0x000468aa) mup_progress_pane_ParamLimits

0xae75,	// (0x000468aa) mup_progress_pane

0xc9bb,	// (0x000483f0) mup_visualizer_pane_ParamLimits

0xc9bb,	// (0x000483f0) mup_visualizer_pane

0xc9bb,	// (0x000483f0) mup_volume_pane_ParamLimits

0xc9bb,	// (0x000483f0) mup_volume_pane

0xaedc,	// (0x00046911) mup_visualizer_pane_g1_ParamLimits

0xaedc,	// (0x00046911) mup_visualizer_pane_g1

0xbbf3,	// (0x00047628) mup_visualizer_pane_g2_ParamLimits

0xbbf3,	// (0x00047628) mup_visualizer_pane_g2

0xaece,	// (0x00046903) mup_visualizer_pane_g3_ParamLimits

0xaece,	// (0x00046903) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x0004adcb) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x0004adcb) mup_visualizer_pane_g

0xb11d,	// (0x00046b52) mup_volume_pane_g1

0xb11d,	// (0x00046b52) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x0004add2) mup_volume_pane_g

0xb11d,	// (0x00046b52) mup_progress_pane_g1

0xb11d,	// (0x00046b52) mup_progress_pane_g2

0xb11d,	// (0x00046b52) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x0004add7) mup_progress_pane_g

0xabbb,	// (0x000465f0) bg_popup_window_pane_cp05

0xbc01,	// (0x00047636) heading_pane_cp02_ParamLimits

0xbc01,	// (0x00047636) heading_pane_cp02

0xbc1b,	// (0x00047650) list_popup_blid_pane

0xbc23,	// (0x00047658) list_blid_sat_info_pane_ParamLimits

0xbc23,	// (0x00047658) list_blid_sat_info_pane

0xbc36,	// (0x0004766b) list_blid_sat_info_pane_g1

0xbc3e,	// (0x00047673) list_blid_sat_info_pane_t1

0x4b74,	// (0x000405a9) mup_equalizer_pane_ParamLimits

0x4b74,	// (0x000405a9) mup_equalizer_pane

0x4b95,	// (0x000405ca) mup_equalizer_pane_cp1_ParamLimits

0x4b95,	// (0x000405ca) mup_equalizer_pane_cp1

0x4bb6,	// (0x000405eb) mup_equalizer_pane_cp2_ParamLimits

0x4bb6,	// (0x000405eb) mup_equalizer_pane_cp2

0x4bd7,	// (0x0004060c) mup_equalizer_pane_cp3_ParamLimits

0x4bd7,	// (0x0004060c) mup_equalizer_pane_cp3

0x4bf8,	// (0x0004062d) mup_equalizer_pane_cp4_ParamLimits

0x4bf8,	// (0x0004062d) mup_equalizer_pane_cp4

0x4c19,	// (0x0004064e) mup_equalizer_pane_cp5

0x4c2f,	// (0x00040664) mup_equalizer_pane_cp6

0x4c47,	// (0x0004067c) mup_equalizer_pane_cp7

0xcdd1,	// (0x00048806) bg_popup_call_poc_act_pane_g9

0xcdd9,	// (0x0004880e) bg_popup_call_poc_act_pane_g10

0xcde1,	// (0x00048816) bg_popup_call_poc_act_pane_g11

0x000a,

0xae53,	// (0x00046888) mup_scale_pane

0xae6b,	// (0x000468a0) mup_scale_pane_g1

0xbc4c,	// (0x00047681) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x0004adf3) mup_scale_pane_g

0xbc70,	// (0x000476a5) msg_data_pane

0xbc78,	// (0x000476ad) scroll_pane_cp017

0x1a4a,	// (0x0003d47f) bg_list_pane_cp04_ParamLimits

0x1a4a,	// (0x0003d47f) bg_list_pane_cp04

0xbc80,	// (0x000476b5) msg_data_pane_g1

0x4c71,	// (0x000406a6) msg_data_pane_g2

0x4c79,	// (0x000406ae) msg_data_pane_g3

0x4c81,	// (0x000406b6) msg_data_pane_g4

0x4c89,	// (0x000406be) msg_data_pane_g5

0x4c91,	// (0x000406c6) msg_data_pane_g6

0x4c99,	// (0x000406ce) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x0004ae02) msg_data_pane_g

0x1a6a,	// (0x0003d49f) msg_text_pane_ParamLimits

0x1a6a,	// (0x0003d49f) msg_text_pane

0x4ca1,	// (0x000406d6) qrid_highlight_pane_cp011_ParamLimits

0x4ca1,	// (0x000406d6) qrid_highlight_pane_cp011

0xabbb,	// (0x000465f0) msg_body_pane

0xabbb,	// (0x000465f0) msg_header_pane

0xbc91,	// (0x000476c6) input_focus_pane_cp07

0x1ace,	// (0x0003d503) msg_header_pane_t1_ParamLimits

0x1ace,	// (0x0003d503) msg_header_pane_t1

0x1ae4,	// (0x0003d519) msg_header_pane_t2_ParamLimits

0x1ae4,	// (0x0003d519) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x0004ae16) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x0004ae16) msg_header_pane_t

0xbcd6,	// (0x0004770b) msg_body_pane_g1

0x1afb,	// (0x0003d530) msg_body_pane_t1_ParamLimits

0x1afb,	// (0x0003d530) msg_body_pane_t1

0x1b2c,	// (0x0003d561) msg_body_pane_t2_ParamLimits

0x1b2c,	// (0x0003d561) msg_body_pane_t2

0x1b3e,	// (0x0003d573) msg_body_pane_t3_ParamLimits

0x1b3e,	// (0x0003d573) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x0004ae1b) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x0004ae1b) msg_body_pane_t

0x4d0f,	// (0x00040744) main_viewer_pane_g1_ParamLimits

0x4d0f,	// (0x00040744) main_viewer_pane_g1

0x4d1b,	// (0x00040750) main_viewer_pane_g2_ParamLimits

0x4d1b,	// (0x00040750) main_viewer_pane_g2

0x4d27,	// (0x0004075c) main_viewer_pane_g3_ParamLimits

0x4d27,	// (0x0004075c) main_viewer_pane_g3

0x4d38,	// (0x0004076d) main_viewer_pane_g4_ParamLimits

0x4d38,	// (0x0004076d) main_viewer_pane_g4

0x4d49,	// (0x0004077e) main_viewer_pane_g5_ParamLimits

0x4d49,	// (0x0004077e) main_viewer_pane_g5

0x4d49,	// (0x0004077e) main_viewer_pane_g7_ParamLimits

0x4d49,	// (0x0004077e) main_viewer_pane_g7

0x4d5b,	// (0x00040790) main_viewer_pane_g8_ParamLimits

0x4d5b,	// (0x00040790) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x0004ae2b) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x0004ae2b) main_viewer_pane_g

0xbcde,	// (0x00047713) viewer_content_pane_ParamLimits

0xbcde,	// (0x00047713) viewer_content_pane

0x4d93,	// (0x000407c8) main_postcard_pane_g1_ParamLimits

0x4d93,	// (0x000407c8) main_postcard_pane_g1

0x4da1,	// (0x000407d6) main_postcard_pane_g2_ParamLimits

0x4da1,	// (0x000407d6) main_postcard_pane_g2

0x4daf,	// (0x000407e4) main_postcard_pane_g3_ParamLimits

0x4daf,	// (0x000407e4) main_postcard_pane_g3

0x0005,

0xf407,	// (0x0004ae3c) main_postcard_pane_g_ParamLimits

0xf407,	// (0x0004ae3c) main_postcard_pane_g

0x4dbf,	// (0x000407f4) main_postcard_pane_g4

0xcf55,	// (0x0004898a) smil_status_volume_pane_g2

0x4deb,	// (0x00040820) postcard_pane_ParamLimits

0x4deb,	// (0x00040820) postcard_pane

0xc56e,	// (0x00047fa3) postcard_pane_g1_ParamLimits

0xc56e,	// (0x00047fa3) postcard_pane_g1

0x4e1d,	// (0x00040852) postcard_pane_g2_ParamLimits

0x4e1d,	// (0x00040852) postcard_pane_g2

0x4e29,	// (0x0004085e) postcard_pane_g3_ParamLimits

0x4e29,	// (0x0004085e) postcard_pane_g3

0xbcec,	// (0x00047721) postcard_pane_g4_ParamLimits

0xbcec,	// (0x00047721) postcard_pane_g4

0x4e35,	// (0x0004086a) postcard_pane_g5_ParamLimits

0x4e35,	// (0x0004086a) postcard_pane_g5

0x4e41,	// (0x00040876) postcard_pane_g6_ParamLimits

0x4e41,	// (0x00040876) postcard_pane_g6

0xbcfa,	// (0x0004772f) postcard_pane_g7_ParamLimits

0xbcfa,	// (0x0004772f) postcard_pane_g7

0x0006,

0xf414,	// (0x0004ae49) postcard_pane_g_ParamLimits

0xf414,	// (0x0004ae49) postcard_pane_g

0x4e4d,	// (0x00040882) main_mp2_pane_g1_ParamLimits

0x4e4d,	// (0x00040882) main_mp2_pane_g1

0x4e59,	// (0x0004088e) main_mp2_pane_g2_ParamLimits

0x4e59,	// (0x0004088e) main_mp2_pane_g2

0x4e65,	// (0x0004089a) main_mp2_pane_g3_ParamLimits

0x4e65,	// (0x0004089a) main_mp2_pane_g3

0x0002,

0xf423,	// (0x0004ae58) main_mp2_pane_g_ParamLimits

0xf423,	// (0x0004ae58) main_mp2_pane_g

0x4e71,	// (0x000408a6) main_mp2_pane_t1_ParamLimits

0x4e71,	// (0x000408a6) main_mp2_pane_t1

0x4e88,	// (0x000408bd) main_mp2_pane_t2_ParamLimits

0x4e88,	// (0x000408bd) main_mp2_pane_t2

0x4e9a,	// (0x000408cf) main_mp2_pane_t3_ParamLimits

0x4e9a,	// (0x000408cf) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x0004ae5f) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x0004ae5f) main_mp2_pane_t

0xbd08,	// (0x0004773d) pec_content_pane_ParamLimits

0xbd08,	// (0x0004773d) pec_content_pane

0xb292,	// (0x00046cc7) scroll_pane_cp015

0xbd1a,	// (0x0004774f) pec_attribute_pane_ParamLimits

0xbd1a,	// (0x0004774f) pec_attribute_pane

0x4eac,	// (0x000408e1) pec_content_pane_g1_ParamLimits

0x4eac,	// (0x000408e1) pec_content_pane_g1

0xbd2a,	// (0x0004775f) pec_content_pane_t1_ParamLimits

0xbd2a,	// (0x0004775f) pec_content_pane_t1

0xbd3c,	// (0x00047771) pec_content_pane_t2_ParamLimits

0xbd3c,	// (0x00047771) pec_content_pane_t2

0x0001,

0xf431,	// (0x0004ae66) pec_content_pane_t_ParamLimits

0xf431,	// (0x0004ae66) pec_content_pane_t

0x4eb8,	// (0x000408ed) list_single_graphic_pane_cp01_ParamLimits

0x4eb8,	// (0x000408ed) list_single_graphic_pane_cp01

0xae53,	// (0x00046888) bg_popup_sub_pane_cp04

0xbd4e,	// (0x00047783) popup_mup_playback_window_g1

0xbd5a,	// (0x0004778f) popup_mup_playback_window_t1

0xbd6f,	// (0x000477a4) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x0004ae6b) popup_mup_playback_window_t

0xbda6,	// (0x000477db) main_image_pane_g1_ParamLimits

0xbda6,	// (0x000477db) main_image_pane_g1

0xbde9,	// (0x0004781e) scroll_pane_cp018_ParamLimits

0xbde9,	// (0x0004781e) scroll_pane_cp018

0xbe01,	// (0x00047836) scroll_pane_cp016_ParamLimits

0xbe01,	// (0x00047836) scroll_pane_cp016

0x4f52,	// (0x00040987) smil2_image_pane_ParamLimits

0x4f52,	// (0x00040987) smil2_image_pane

0x4f82,	// (0x000409b7) smil2_root_pane_ParamLimits

0x4f82,	// (0x000409b7) smil2_root_pane

0x4fae,	// (0x000409e3) smil2_text_pane_ParamLimits

0x4fae,	// (0x000409e3) smil2_text_pane

0xabbb,	// (0x000465f0) bg_list_pane_cp06

0xbe3d,	// (0x00047872) grid_radio_pane

0xabbb,	// (0x000465f0) bg_popup_window_pane_cp06

0xbe45,	// (0x0004787a) main_fmradio_pane_t1

0xce29,	// (0x0004885e) heading_pane_cp04

0xbe53,	// (0x00047888) main_fmradio_pane_t2

0xce31,	// (0x00048866) popup_cale_lunar_info_window_g1

0xbe61,	// (0x00047896) main_fmradio_pane_t3

0xce39,	// (0x0004886e) popup_cale_lunar_info_window_g2

0xbe6f,	// (0x000478a4) main_fmradio_pane_t4

0x0001,

0xbe7d,	// (0x000478b2) main_fmradio_pane_t5

0x0004,

0xf529,	// (0x0004af5e) popup_cale_lunar_info_window_g

0xf44b,	// (0x0004ae80) main_fmradio_pane_t

0xbe8b,	// (0x000478c0) wait_bar_pane_cp03

0xbe93,	// (0x000478c8) cell_fmradio_pane_ParamLimits

0xbe93,	// (0x000478c8) cell_fmradio_pane

0xbcfa,	// (0x0004772f) cell_fmradio_pane_g1_ParamLimits

0xbcfa,	// (0x0004772f) cell_fmradio_pane_g1

0xabbb,	// (0x000465f0) grid_highlight_pane_cp011

0xbea6,	// (0x000478db) poc_content_pane_ParamLimits

0xbea6,	// (0x000478db) poc_content_pane

0xbeb8,	// (0x000478ed) scroll_pane_cp019

0x4fee,	// (0x00040a23) popup_call_poc_act_window_ParamLimits

0x4fee,	// (0x00040a23) popup_call_poc_act_window

0x4ffb,	// (0x00040a30) popup_call_poc_inact_window_ParamLimits

0x4ffb,	// (0x00040a30) popup_call_poc_inact_window

0xf4ed,	// (0x0004af22) bg_popup_call_poc_act_pane_g

0xcde9,	// (0x0004881e) bg_popup_call_poc_inact_pane_g1

0xcdf1,	// (0x00048826) bg_popup_call_poc_inact_pane_g2

0xbec0,	// (0x000478f5) popup_call_poc_act_window_g2

0xcdf9,	// (0x0004882e) bg_popup_call_poc_inact_pane_g3

0xcd79,	// (0x000487ae) bg_popup_call_poc_inact_pane_g4

0xce01,	// (0x00048836) bg_popup_call_poc_inact_pane_g5

0xbec8,	// (0x000478fd) popup_call_poc_act_window_t1_ParamLimits

0xbec8,	// (0x000478fd) popup_call_poc_act_window_t1

0xbef0,	// (0x00047925) popup_call_poc_act_window_t2_ParamLimits

0xbef0,	// (0x00047925) popup_call_poc_act_window_t2

0xbf18,	// (0x0004794d) popup_call_poc_act_window_t3_ParamLimits

0xbf18,	// (0x0004794d) popup_call_poc_act_window_t3

0xbf40,	// (0x00047975) popup_call_poc_act_window_t4_ParamLimits

0xbf40,	// (0x00047975) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x0004ae8b) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x0004ae8b) popup_call_poc_act_window_t

0xce09,	// (0x0004883e) bg_popup_call_poc_inact_pane_g6

0xce11,	// (0x00048846) bg_popup_call_poc_inact_pane_g7

0xce19,	// (0x0004884e) bg_popup_call_poc_inact_pane_g8

0xbf52,	// (0x00047987) popup_call_poc_inact_window_g2

0xce21,	// (0x00048856) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf504,	// (0x0004af39) bg_popup_call_poc_inact_pane_g

0xbf5a,	// (0x0004798f) popup_call_poc_inact_window_t1_ParamLimits

0xbf5a,	// (0x0004798f) popup_call_poc_inact_window_t1

0xbf6f,	// (0x000479a4) popup_call_poc_inact_window_t2_ParamLimits

0xbf6f,	// (0x000479a4) popup_call_poc_inact_window_t2

0xbf84,	// (0x000479b9) popup_call_poc_inact_window_t3_ParamLimits

0xbf84,	// (0x000479b9) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x0004ae94) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x0004ae94) popup_call_poc_inact_window_t

0xcecd,	// (0x00048902) context_pane_ParamLimits

0x5678,	// (0x000410ad) signal_pane_ParamLimits

0xb0fb,	// (0x00046b30) main_call2_pane

0x55eb,	// (0x00041020) popup_phob_thumbnail2_window_ParamLimits

0x55eb,	// (0x00041020) popup_phob_thumbnail2_window

0x4cbd,	// (0x000406f2) aid_hotspot_pointer_arrow_pane

0x4cc5,	// (0x000406fa) aid_hotspot_pointer_hand_pane

0x5346,	// (0x00040d7b) phob_pre_status_pane_g5

0xacc2,	// (0x000466f7) cams_zoom_pane_ParamLimits

0xacc2,	// (0x000466f7) image_vga_pane_ParamLimits

0xaedc,	// (0x00046911) main_camera_pane_g1_ParamLimits

0xaedc,	// (0x00046911) main_camera_pane_g2_ParamLimits

0xaedc,	// (0x00046911) main_camera_pane_g3_ParamLimits

0xaedc,	// (0x00046911) main_camera_pane_g4_ParamLimits

0xaedc,	// (0x00046911) main_camera_pane_g5_ParamLimits

0xaedc,	// (0x00046911) main_camera_pane_g6_ParamLimits

0xaedc,	// (0x00046911) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0004abba) main_camera_pane_g_ParamLimits

0xb8d0,	// (0x00047305) main_camera_pane_t1_ParamLimits

0xb8d0,	// (0x00047305) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0004abcb) main_camera_pane_t_ParamLimits

0xae53,	// (0x00046888) bg_popup_preview_window_pane_cp01_ParamLimits

0xae53,	// (0x00046888) bg_popup_preview_window_pane_cp01

0xbf99,	// (0x000479ce) popup_phob_thumbnail2_window_g1_ParamLimits

0xbf99,	// (0x000479ce) popup_phob_thumbnail2_window_g1

0xabbb,	// (0x000465f0) call2_cli_visual_pane

0x5017,	// (0x00040a4c) popup_call2_audio_conf_window_ParamLimits

0x5017,	// (0x00040a4c) popup_call2_audio_conf_window

0x502c,	// (0x00040a61) popup_call2_audio_first_window_ParamLimits

0x502c,	// (0x00040a61) popup_call2_audio_first_window

0x50ca,	// (0x00040aff) popup_call2_audio_in_window_ParamLimits

0x50ca,	// (0x00040aff) popup_call2_audio_in_window

0x510c,	// (0x00040b41) popup_call2_audio_out_window_ParamLimits

0x510c,	// (0x00040b41) popup_call2_audio_out_window

0x516e,	// (0x00040ba3) popup_call2_audio_second_window_ParamLimits

0x516e,	// (0x00040ba3) popup_call2_audio_second_window

0x51cc,	// (0x00040c01) popup_call2_audio_wait_window_ParamLimits

0x51cc,	// (0x00040c01) popup_call2_audio_wait_window

0xabbb,	// (0x000465f0) bg_popup_call2_act_pane_cp03

0xae35,	// (0x0004686a) list_conf_pane_cp

0xbfa5,	// (0x000479da) popup_call2_audio_conf_window_t1

0xbfb3,	// (0x000479e8) list_single_graphic_popup_conf2_pane_ParamLimits

0xbfb3,	// (0x000479e8) list_single_graphic_popup_conf2_pane

0xb843,	// (0x00047278) list_highlight_pane_cp04

0xbfc6,	// (0x000479fb) list_single_graphic_popup_conf2_pane_g1

0xb854,	// (0x00047289) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x0004ae9b) list_single_graphic_popup_conf2_pane_g

0xbfd0,	// (0x00047a05) list_single_graphic_popup_conf2_pane_t1

0xbfde,	// (0x00047a13) bg_popup_call2_act_pane_cp01_ParamLimits

0xbfde,	// (0x00047a13) bg_popup_call2_act_pane_cp01

0xc068,	// (0x00047a9d) call_type_pane_cp05_ParamLimits

0xc068,	// (0x00047a9d) call_type_pane_cp05

0xc0bc,	// (0x00047af1) popup_call2_audio_second_window_g1_ParamLimits

0xc0bc,	// (0x00047af1) popup_call2_audio_second_window_g1

0xc110,	// (0x00047b45) popup_call2_audio_second_window_g2_ParamLimits

0xc110,	// (0x00047b45) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x0004aea0) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x0004aea0) popup_call2_audio_second_window_g

0xc175,	// (0x00047baa) popup_call2_audio_second_window_t1_ParamLimits

0xc175,	// (0x00047baa) popup_call2_audio_second_window_t1

0xc230,	// (0x00047c65) popup_call2_audio_second_window_t2_ParamLimits

0xc230,	// (0x00047c65) popup_call2_audio_second_window_t2

0xc283,	// (0x00047cb8) popup_call2_audio_second_window_t3_ParamLimits

0xc283,	// (0x00047cb8) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x0004aea7) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x0004aea7) popup_call2_audio_second_window_t

0xabbb,	// (0x000465f0) bg_popup_call2_in_pane_cp02

0xabc5,	// (0x000465fa) call_type_pane_cp04

0x520b,	// (0x00040c40) popup_call2_audio_wait_window_g1

0x5213,	// (0x00040c48) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x0004aeb0) popup_call2_audio_wait_window_g

0xabdd,	// (0x00046612) popup_call2_audio_wait_window_t3

0xc376,	// (0x00047dab) bg_popup_call2_act_pane_ParamLimits

0xc376,	// (0x00047dab) bg_popup_call2_act_pane

0xc436,	// (0x00047e6b) call_type_pane_cp03_ParamLimits

0xc436,	// (0x00047e6b) call_type_pane_cp03

0xc49a,	// (0x00047ecf) popup_call2_audio_first_window_g1_ParamLimits

0xc49a,	// (0x00047ecf) popup_call2_audio_first_window_g1

0xc50a,	// (0x00047f3f) popup_call2_audio_first_window_g2_ParamLimits

0xc50a,	// (0x00047f3f) popup_call2_audio_first_window_g2

0xc56e,	// (0x00047fa3) popup_call2_audio_first_window_g3_ParamLimits

0xc56e,	// (0x00047fa3) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x0004aeb5) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x0004aeb5) popup_call2_audio_first_window_g

0xc5f6,	// (0x0004802b) popup_call2_audio_first_window_t1_ParamLimits

0xc5f6,	// (0x0004802b) popup_call2_audio_first_window_t1

0xc6f9,	// (0x0004812e) popup_call2_audio_first_window_t4_ParamLimits

0xc6f9,	// (0x0004812e) popup_call2_audio_first_window_t4

0xc7dc,	// (0x00048211) popup_call2_audio_first_window_t5_ParamLimits

0xc7dc,	// (0x00048211) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x0004aec0) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x0004aec0) popup_call2_audio_first_window_t

0xae4b,	// (0x00046880) bg_popup_call2_act_pane_g1

0xce41,	// (0x00048876) popup_cale_lunar_info_window_t1

0xce4f,	// (0x00048884) popup_cale_lunar_info_window_t2

0xce5d,	// (0x00048892) popup_cale_lunar_info_window_t3

0xabbb,	// (0x000465f0) bg_popup_call2_bubble_pane

0xc8dd,	// (0x00048312) bg_popup_call2_in_pane_cp01_ParamLimits

0xc8dd,	// (0x00048312) bg_popup_call2_in_pane_cp01

0xa897,	// (0x000462cc) call_type_pane_cp02

0x521b,	// (0x00040c50) popup_call2_audio_out_window_g1_ParamLimits

0x521b,	// (0x00040c50) popup_call2_audio_out_window_g1

0xc925,	// (0x0004835a) popup_call2_audio_out_window_g2_ParamLimits

0xc925,	// (0x0004835a) popup_call2_audio_out_window_g2

0x5247,	// (0x00040c7c) popup_call2_audio_out_window_g3_ParamLimits

0x5247,	// (0x00040c7c) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x0004aec9) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x0004aec9) popup_call2_audio_out_window_g

0xc95c,	// (0x00048391) popup_call2_audio_out_window_t1_ParamLimits

0xc95c,	// (0x00048391) popup_call2_audio_out_window_t1

0xc9c9,	// (0x000483fe) popup_call2_audio_out_window_t2_ParamLimits

0xc9c9,	// (0x000483fe) popup_call2_audio_out_window_t2

0xca1d,	// (0x00048452) popup_call2_audio_out_window_t3_ParamLimits

0xca1d,	// (0x00048452) popup_call2_audio_out_window_t3

0xca33,	// (0x00048468) popup_call2_audio_out_window_t4_ParamLimits

0xca33,	// (0x00048468) popup_call2_audio_out_window_t4

0xca49,	// (0x0004847e) popup_call2_audio_out_window_t5_ParamLimits

0xca49,	// (0x0004847e) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x0004aed2) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x0004aed2) popup_call2_audio_out_window_t

0xcaad,	// (0x000484e2) bg_popup_call2_in_pane_ParamLimits

0xcaad,	// (0x000484e2) bg_popup_call2_in_pane

0xcb09,	// (0x0004853e) popup_call2_audio_in_window_g1_ParamLimits

0xcb09,	// (0x0004853e) popup_call2_audio_in_window_g1

0xcb41,	// (0x00048576) popup_call2_audio_in_window_g2_ParamLimits

0xcb41,	// (0x00048576) popup_call2_audio_in_window_g2

0xcb79,	// (0x000485ae) popup_call2_audio_in_window_g3_ParamLimits

0xcb79,	// (0x000485ae) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x0004aedf) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x0004aedf) popup_call2_audio_in_window_g

0xcbd1,	// (0x00048606) popup_call2_audio_in_window_t1_ParamLimits

0xcbd1,	// (0x00048606) popup_call2_audio_in_window_t1

0xcc51,	// (0x00048686) popup_call2_audio_in_window_t2_ParamLimits

0xcc51,	// (0x00048686) popup_call2_audio_in_window_t2

0xccd1,	// (0x00048706) popup_call2_audio_in_window_t3_ParamLimits

0xccd1,	// (0x00048706) popup_call2_audio_in_window_t3

0xcceb,	// (0x00048720) popup_call2_audio_in_window_t4_ParamLimits

0xcceb,	// (0x00048720) popup_call2_audio_in_window_t4

0xccfd,	// (0x00048732) popup_call2_audio_in_window_t5_ParamLimits

0xccfd,	// (0x00048732) popup_call2_audio_in_window_t5

0xcd0f,	// (0x00048744) popup_call2_audio_in_window_t6_ParamLimits

0xcd0f,	// (0x00048744) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x0004aee8) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x0004aee8) popup_call2_audio_in_window_t

0xae4b,	// (0x00046880) bg_popup_call2_in_pane_g1

0xce6b,	// (0x000488a0) popup_cale_lunar_info_window_t4

0x0003,

0xf52e,	// (0x0004af63) popup_cale_lunar_info_window_t

0xae53,	// (0x00046888) bg_popup_call2_rect_pane_ParamLimits

0xae53,	// (0x00046888) bg_popup_call2_rect_pane

0xabbb,	// (0x000465f0) call2_cli_visual_graphic_pane

0xabbb,	// (0x000465f0) call2_cli_visual_text_pane

0x56b4,	// (0x000410e9) smil_status_volume_pane_g3

0x0002,

0xae6b,	// (0x000468a0) call2_cli_visual_graphic_pane_g1

0xae6b,	// (0x000468a0) call2_cli_visual_graphic_pane_g2

0xae6b,	// (0x000468a0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x0004aef5) call2_cli_visual_graphic_pane_g

0xcd21,	// (0x00048756) bg_popup_call2_rect_pane_g1

0xb017,	// (0x00046a4c) bg_popup_call2_rect_pane_g2

0xcd29,	// (0x0004875e) bg_popup_call2_rect_pane_g3

0xcd31,	// (0x00048766) bg_popup_call2_rect_pane_g4

0xcd39,	// (0x0004876e) bg_popup_call2_rect_pane_g5

0xcd41,	// (0x00048776) bg_popup_call2_rect_pane_g6

0xcd49,	// (0x0004877e) bg_popup_call2_rect_pane_g7

0xcd51,	// (0x00048786) bg_popup_call2_rect_pane_g8

0xcd59,	// (0x0004878e) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x0004aefc) bg_popup_call2_rect_pane_g

0xcd61,	// (0x00048796) bg_popup_call2_bubble_pane_g1

0xcd69,	// (0x0004879e) bg_popup_call2_bubble_pane_g2

0xcd71,	// (0x000487a6) bg_popup_call2_bubble_pane_g3

0xcd79,	// (0x000487ae) bg_popup_call2_bubble_pane_g4

0xcd81,	// (0x000487b6) bg_popup_call2_bubble_pane_g5

0xcd89,	// (0x000487be) bg_popup_call2_bubble_pane_g6

0xcd91,	// (0x000487c6) bg_popup_call2_bubble_pane_g7

0xcd99,	// (0x000487ce) bg_popup_call2_bubble_pane_g8

0xcda1,	// (0x000487d6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x0004af0f) bg_popup_call2_bubble_pane_g

0x2e34,	// (0x0003e869) aid_cale_week_size_cell_pane

0xae53,	// (0x00046888) aid_cams_cif_uncrop_pane_ParamLimits

0xae53,	// (0x00046888) aid_cams_cif_uncrop_pane

0x342d,	// (0x0003ee62) aid_cams_size_cell_ParamLimits

0x342d,	// (0x0003ee62) aid_cams_size_cell

0x3439,	// (0x0003ee6e) grid_cams_pane_ParamLimits

0x3447,	// (0x0003ee7c) linegrid_cams_pane_ParamLimits

0x351e,	// (0x0003ef53) call_video_pane_t1

0x353f,	// (0x0003ef74) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0004ac17) call_video_pane_t

0x3a8d,	// (0x0003f4c2) aid_cale_month_size_cell_pane_ParamLimits

0x3a8d,	// (0x0003f4c2) aid_cale_month_size_cell_pane

0xf572,	// (0x0004afa7) smil_status_volume_pane_g

0x56c1,	// (0x000410f6) volume_smil_pane_ParamLimits

0x2789,	// (0x0003e1be) aid_popup2_width_pane

0x2d2b,	// (0x0003e760) cell_qdial_pane_g4_ParamLimits

0x2d2b,	// (0x0003e760) cell_qdial_pane_g4

0x499e,	// (0x000403d3) aid_blid_cardinal_pane_ParamLimits

0x49ae,	// (0x000403e3) aid_blid_destination_pane_ParamLimits

0x49ae,	// (0x000403e3) aid_blid_destination_pane

0xae53,	// (0x00046888) bg_popup_call_poc_act_pane_ParamLimits

0xae53,	// (0x00046888) bg_popup_call_poc_act_pane

0xae53,	// (0x00046888) bg_popup_call_poc_inact_pane_ParamLimits

0xae53,	// (0x00046888) bg_popup_call_poc_inact_pane

0xcda9,	// (0x000487de) bg_popup_call_poc_act_pane_g1

0xcdb1,	// (0x000487e6) bg_popup_call_poc_act_pane_g2

0xcdb9,	// (0x000487ee) bg_popup_call_poc_act_pane_g3

0xcd79,	// (0x000487ae) bg_popup_call_poc_act_pane_g4

0xcd81,	// (0x000487b6) bg_popup_call_poc_act_pane_g5

0xcdc1,	// (0x000487f6) bg_popup_call_poc_act_pane_g6

0xcd91,	// (0x000487c6) bg_popup_call_poc_act_pane_g7

0xcdc9,	// (0x000487fe) bg_popup_call_poc_act_pane_g8

0xabbb,	// (0x000465f0) main_usb_pane

0x551e,	// (0x00040f53) popup_cale_lunar_info_window

0x385c,	// (0x0003f291) im_reading_pane_t1_ParamLimits

0xb1ea,	// (0x00046c1f) list_im_pane_ParamLimits

0xb1fb,	// (0x00046c30) scroll_pane_cp07_ParamLimits

0xabbb,	// (0x000465f0) grid_highlight_pane_cp012

0xae53,	// (0x00046888) mup_scale_pane_ParamLimits

0xc56e,	// (0x00047fa3) main_usb_pane_g1_ParamLimits

0xc56e,	// (0x00047fa3) main_usb_pane_g1

0x52ae,	// (0x00040ce3) main_usb_pane_g2_ParamLimits

0x52ae,	// (0x00040ce3) main_usb_pane_g2

0x0001,

0xf517,	// (0x0004af4c) main_usb_pane_g_ParamLimits

0xf517,	// (0x0004af4c) main_usb_pane_g

0x52ba,	// (0x00040cef) main_usb_pane_t1_ParamLimits

0x52ba,	// (0x00040cef) main_usb_pane_t1

0x52cc,	// (0x00040d01) main_usb_pane_t2_ParamLimits

0x52cc,	// (0x00040d01) main_usb_pane_t2

0x52de,	// (0x00040d13) main_usb_pane_t3_ParamLimits

0x52de,	// (0x00040d13) main_usb_pane_t3

0x52f0,	// (0x00040d25) main_usb_pane_t4_ParamLimits

0x52f0,	// (0x00040d25) main_usb_pane_t4

0x5302,	// (0x00040d37) main_usb_pane_t5_ParamLimits

0x5302,	// (0x00040d37) main_usb_pane_t5

0x5314,	// (0x00040d49) main_usb_pane_t6_ParamLimits

0x5314,	// (0x00040d49) main_usb_pane_t6

0x0005,

0xf51c,	// (0x0004af51) main_usb_pane_t_ParamLimits

0x4944,	// (0x00040379) aid_text_placing

0x4950,	// (0x00040385) main_location2_pane_t1_ParamLimits

0x4964,	// (0x00040399) main_location2_pane_t2_ParamLimits

0x4978,	// (0x000403ad) main_location2_pane_t3_ParamLimits

0x498c,	// (0x000403c1) main_location2_pane_t4_ParamLimits

0x498c,	// (0x000403c1) main_location2_pane_t4

0xf323,	// (0x0004ad58) main_location2_pane_t_ParamLimits

0xae8f,	// (0x000468c4) find_pinb_pane_g2_ParamLimits

0xae8f,	// (0x000468c4) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0004aacf) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0004aacf) find_pinb_pane_g

0xae9b,	// (0x000468d0) find_pinb_pane_t1_ParamLimits

0xaead,	// (0x000468e2) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0004aad4) find_pinb_pane_t_ParamLimits

0xabbb,	// (0x000465f0) main_call3_pane

0x4050,	// (0x0003fa85) cale_month_day_heading_pane_t1_ParamLimits

0x40d6,	// (0x0003fb0b) cale_month_day_heading_pane_t2_ParamLimits

0x414f,	// (0x0003fb84) cale_month_day_heading_pane_t3_ParamLimits

0x41c8,	// (0x0003fbfd) cale_month_day_heading_pane_t4_ParamLimits

0x4241,	// (0x0003fc76) cale_month_day_heading_pane_t5_ParamLimits

0x42ba,	// (0x0003fcef) cale_month_day_heading_pane_t6_ParamLimits

0x4333,	// (0x0003fd68) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0004ac4f) cale_month_day_heading_pane_t_ParamLimits

0xb445,	// (0x00046e7a) smil_status_volume_pane

0x4e05,	// (0x0004083a) postcard_address_pane_ParamLimits

0x4e05,	// (0x0004083a) postcard_address_pane

0x4e11,	// (0x00040846) postcard_message_pane_ParamLimits

0x4e11,	// (0x00040846) postcard_message_pane

0x5273,	// (0x00040ca8) call2_cli_visual_pane_t1_ParamLimits

0x5273,	// (0x00040ca8) call2_cli_visual_pane_t1

0xcf80,	// (0x000489b5) postcard_message_pane_t1_ParamLimits

0xcf80,	// (0x000489b5) postcard_message_pane_t1

0xcf68,	// (0x0004899d) postcard_address_pane_t1_ParamLimits

0xcf68,	// (0x0004899d) postcard_address_pane_t1

0x57f2,	// (0x00041227) popup_call3_audio_in_window_ParamLimits

0x57f2,	// (0x00041227) popup_call3_audio_in_window

0x56d6,	// (0x0004110b) bg_popup_call3_in_pane_ParamLimits

0x56d6,	// (0x0004110b) bg_popup_call3_in_pane

0x5738,	// (0x0004116d) popup_call3_audio_in_window_g1_ParamLimits

0x5738,	// (0x0004116d) popup_call3_audio_in_window_g1

0x5750,	// (0x00041185) popup_call3_audio_in_window_g2_ParamLimits

0x5750,	// (0x00041185) popup_call3_audio_in_window_g2

0x5768,	// (0x0004119d) popup_call3_audio_in_window_g3_ParamLimits

0x5768,	// (0x0004119d) popup_call3_audio_in_window_g3

0x0003,

0xf579,	// (0x0004afae) popup_call3_audio_in_window_g_ParamLimits

0xf579,	// (0x0004afae) popup_call3_audio_in_window_g

0x5790,	// (0x000411c5) popup_call3_audio_in_window_t1_ParamLimits

0x5790,	// (0x000411c5) popup_call3_audio_in_window_t1

0x57b8,	// (0x000411ed) popup_call3_audio_in_window_t2_ParamLimits

0x57b8,	// (0x000411ed) popup_call3_audio_in_window_t2

0x57e0,	// (0x00041215) popup_call3_audio_in_window_t3_ParamLimits

0x57e0,	// (0x00041215) popup_call3_audio_in_window_t3

0x0002,

0xf582,	// (0x0004afb7) popup_call3_audio_in_window_t_ParamLimits

0xf582,	// (0x0004afb7) popup_call3_audio_in_window_t

0xb0fb,	// (0x00046b30) bg_popup_call3_rect_pane

0xcd21,	// (0x00048756) bg_popup_call3_rect_pane_g1

0xb017,	// (0x00046a4c) bg_popup_call3_rect_pane_g2

0xcd29,	// (0x0004875e) bg_popup_call3_rect_pane_g3

0xcd31,	// (0x00048766) bg_popup_call3_rect_pane_g4

0xcd39,	// (0x0004876e) bg_popup_call3_rect_pane_g5

0xcd41,	// (0x00048776) bg_popup_call3_rect_pane_g6

0xcd49,	// (0x0004877e) bg_popup_call3_rect_pane_g7

0xa79e,	// (0x000461d3) mup_visualizer_osc_pane

0xa79e,	// (0x000461d3) mup_visualizer_spec_pane

0x56f6,	// (0x0004112b) call3_video_qcif_pane_ParamLimits

0x56f6,	// (0x0004112b) call3_video_qcif_pane

0x5708,	// (0x0004113d) call3_video_qcif_uncrop_pane_ParamLimits

0x5708,	// (0x0004113d) call3_video_qcif_uncrop_pane

0x5716,	// (0x0004114b) call3_video_subqcif_pane_ParamLimits

0x5716,	// (0x0004114b) call3_video_subqcif_pane

0x5728,	// (0x0004115d) call3_video_subqcif_uncrop_pane_ParamLimits

0x5728,	// (0x0004115d) call3_video_subqcif_uncrop_pane

0x5780,	// (0x000411b5) popup_call3_audio_in_window_g4_ParamLimits

0x5780,	// (0x000411b5) popup_call3_audio_in_window_g4

0xa79e,	// (0x000461d3) mup_spec_half_pane

0xa79e,	// (0x000461d3) mup_spec_half_pane_cp

0xa79e,	// (0x000461d3) mup_osc_middle_pane

0xb11d,	// (0x00046b52) mup_visualizer_osc_pane_g1

0xcf1b,	// (0x00048950) mup_spec_bar_pane_ParamLimits

0xcf1b,	// (0x00048950) mup_spec_bar_pane

0xb11d,	// (0x00046b52) mup_spec_bar_pane_g1

0xb11d,	// (0x00046b52) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x0004add2) mup_spec_bar_pane_g

0x2e34,	// (0x0003e869) aid_cale_week_size_cell_pane_ParamLimits

0x2e49,	// (0x0003e87e) bg_cale_heading_pane_ParamLimits

0xb054,	// (0x00046a89) bg_cale_pane_cp01_ParamLimits

0x2e6b,	// (0x0003e8a0) cale_week_corner_pane_ParamLimits

0x2e85,	// (0x0003e8ba) cale_week_day_heading_pane_ParamLimits

0x2ea7,	// (0x0003e8dc) cale_week_scroll_pane_g1_ParamLimits

0x2ec4,	// (0x0003e8f9) cale_week_scroll_pane_g2_ParamLimits

0x2ed7,	// (0x0003e90c) cale_week_scroll_pane_g3_ParamLimits

0x2eea,	// (0x0003e91f) cale_week_scroll_pane_g4_ParamLimits

0x2efd,	// (0x0003e932) cale_week_scroll_pane_g5_ParamLimits

0x2f10,	// (0x0003e945) cale_week_scroll_pane_g6_ParamLimits

0x2f23,	// (0x0003e958) cale_week_scroll_pane_g7_ParamLimits

0x2f38,	// (0x0003e96d) cale_week_scroll_pane_g8_ParamLimits

0x2f4d,	// (0x0003e982) cale_week_scroll_pane_g9_ParamLimits

0x2f60,	// (0x0003e995) cale_week_scroll_pane_g10_ParamLimits

0x2f73,	// (0x0003e9a8) cale_week_scroll_pane_g11_ParamLimits

0x2f86,	// (0x0003e9bb) cale_week_scroll_pane_g12_ParamLimits

0x2f9d,	// (0x0003e9d2) cale_week_scroll_pane_g13_ParamLimits

0x2fb8,	// (0x0003e9ed) cale_week_scroll_pane_g14_ParamLimits

0x2fd3,	// (0x0003ea08) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0004ab60) cale_week_scroll_pane_g_ParamLimits

0x3003,	// (0x0003ea38) cale_week_time_pane_ParamLimits

0x3018,	// (0x0003ea4d) grid_cale_week_pane_ParamLimits

0xb071,	// (0x00046aa6) listscroll_cale_week_pane_t1

0xb083,	// (0x00046ab8) scroll_pane_cp08_ParamLimits

0x3b01,	// (0x0003f536) cale_month_corner_pane_ParamLimits

0xb41b,	// (0x00046e50) cale_month_pane_t1

0x3fcf,	// (0x0003fa04) cale_month_week_pane_ParamLimits

0xc56e,	// (0x00047fa3) popup_call_status_window_g1_ParamLimits

0x4771,	// (0x000401a6) popup_call_status_window_g2_ParamLimits

0x477d,	// (0x000401b2) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x0004acdf) popup_call_status_window_g_ParamLimits

0xb7cf,	// (0x00047204) aid_call2_pane

0x1ac2,	// (0x0003d4f7) msg_header_pane_g1

0x4e05,	// (0x0004083a) postcard_address2_pane_ParamLimits

0x4e05,	// (0x0004083a) postcard_address2_pane

0x4e11,	// (0x00040846) postcard_message2_pane_ParamLimits

0x4e11,	// (0x00040846) postcard_message2_pane

0x5686,	// (0x000410bb) message2_row_pane_ParamLimits

0x5686,	// (0x000410bb) message2_row_pane

0x56a1,	// (0x000410d6) address2_row_pane_ParamLimits

0x56a1,	// (0x000410d6) address2_row_pane

0xcee8,	// (0x0004891d) postcard_message2_row_pane_g1

0xcef0,	// (0x00048925) postcard_message2_row_pane_t1

0xcee8,	// (0x0004891d) address2_row_pane_g1

0xcef0,	// (0x00048925) address2_row_pane_t1

0x329d,	// (0x0003ecd2) aid_size_cell_vorec

0xabbb,	// (0x000465f0) main_rss_pane

0xcefe,	// (0x00048933) rss_list_single_pane_ParamLimits

0xcefe,	// (0x00048933) rss_list_single_pane

0xcf0c,	// (0x00048941) rss_list_single_pane_t1

0xcf0c,	// (0x00048941) rss_list_single_pane_t2

0x0001,

0xf56d,	// (0x0004afa2) rss_list_single_pane_t

0xabbb,	// (0x000465f0) main_camera2_pane

0xabbb,	// (0x000465f0) main_video2_pane

0xacc2,	// (0x000466f7) cams_zoom_pane_cp2_ParamLimits

0xacc2,	// (0x000466f7) cams_zoom_pane_cp2

0xacc2,	// (0x000466f7) image2_vga_pane_ParamLimits

0xacc2,	// (0x000466f7) image2_vga_pane

0xaedc,	// (0x00046911) main_camera2_pane_g1_ParamLimits

0xaedc,	// (0x00046911) main_camera2_pane_g1

0xaedc,	// (0x00046911) main_camera2_pane_g2_ParamLimits

0xaedc,	// (0x00046911) main_camera2_pane_g2

0xaedc,	// (0x00046911) main_camera2_pane_g3_ParamLimits

0xaedc,	// (0x00046911) main_camera2_pane_g3

0xaedc,	// (0x00046911) main_camera2_pane_g4_ParamLimits

0xaedc,	// (0x00046911) main_camera2_pane_g4

0xaedc,	// (0x00046911) main_camera2_pane_g5_ParamLimits

0xaedc,	// (0x00046911) main_camera2_pane_g5

0xaedc,	// (0x00046911) main_camera2_pane_g6_ParamLimits

0xaedc,	// (0x00046911) main_camera2_pane_g6

0xaedc,	// (0x00046911) main_camera2_pane_g7_ParamLimits

0xaedc,	// (0x00046911) main_camera2_pane_g7

0xaedc,	// (0x00046911) main_camera2_pane_g8_ParamLimits

0xaedc,	// (0x00046911) main_camera2_pane_g8

0x0008,

0xf589,	// (0x0004afbe) main_camera2_pane_g_ParamLimits

0xf589,	// (0x0004afbe) main_camera2_pane_g

0xb8d0,	// (0x00047305) main_camera2_pane_t1_ParamLimits

0xb8d0,	// (0x00047305) main_camera2_pane_t1

0xb8d0,	// (0x00047305) main_camera2_pane_t2_ParamLimits

0xb8d0,	// (0x00047305) main_camera2_pane_t2

0xb8d0,	// (0x00047305) main_camera2_pane_t3_ParamLimits

0xb8d0,	// (0x00047305) main_camera2_pane_t3

0xb8d0,	// (0x00047305) main_camera2_pane_t4_ParamLimits

0xb8d0,	// (0x00047305) main_camera2_pane_t4

0x0006,

0xf59c,	// (0x0004afd1) main_camera2_pane_t_ParamLimits

0xf59c,	// (0x0004afd1) main_camera2_pane_t

0xbca6,	// (0x000476db) cams_zoom_pane_cp4_ParamLimits

0xbca6,	// (0x000476db) cams_zoom_pane_cp4

0xae75,	// (0x000468aa) image2_cif_pane_ParamLimits

0xae75,	// (0x000468aa) image2_cif_pane

0xacc2,	// (0x000466f7) image2_subqcif_pane_ParamLimits

0xacc2,	// (0x000466f7) image2_subqcif_pane

0xbcb4,	// (0x000476e9) main_video2_pane_g1_ParamLimits

0xbcb4,	// (0x000476e9) main_video2_pane_g1

0xbcb4,	// (0x000476e9) main_video2_pane_g2_ParamLimits

0xbcb4,	// (0x000476e9) main_video2_pane_g2

0xbcb4,	// (0x000476e9) main_video2_pane_g3_ParamLimits

0xbcb4,	// (0x000476e9) main_video2_pane_g3

0xbcb4,	// (0x000476e9) main_video2_pane_g4_ParamLimits

0xbcb4,	// (0x000476e9) main_video2_pane_g4

0xbcb4,	// (0x000476e9) main_video2_pane_g5_ParamLimits

0xbcb4,	// (0x000476e9) main_video2_pane_g5

0xbcb4,	// (0x000476e9) main_video2_pane_g6_ParamLimits

0xbcb4,	// (0x000476e9) main_video2_pane_g6

0x0005,

0xf5ab,	// (0x0004afe0) main_video2_pane_g_ParamLimits

0xf5ab,	// (0x0004afe0) main_video2_pane_g

0xbcc2,	// (0x000476f7) main_video2_pane_t1_ParamLimits

0xbcc2,	// (0x000476f7) main_video2_pane_t1

0xbcc2,	// (0x000476f7) main_video2_pane_t2_ParamLimits

0xbcc2,	// (0x000476f7) main_video2_pane_t2

0xbcc2,	// (0x000476f7) main_video2_pane_t3_ParamLimits

0xbcc2,	// (0x000476f7) main_video2_pane_t3

0x0002,

0xf5b8,	// (0x0004afed) main_video2_pane_t_ParamLimits

0xf5b8,	// (0x0004afed) main_video2_pane_t

0x53aa,	// (0x00040ddf) call_muted_g2

0x0001,

0xf55f,	// (0x0004af94) call_muted_g

0xabbb,	// (0x000465f0) main_mup2_pane

0xaeea,	// (0x0004691f) main_mup2_pane_g1_ParamLimits

0xaeea,	// (0x0004691f) main_mup2_pane_g1

0xaeea,	// (0x0004691f) main_mup2_pane_g2_ParamLimits

0xaeea,	// (0x0004691f) main_mup2_pane_g2

0xb11d,	// (0x00046b52) main_mup_pane_g13_cp1

0xa79e,	// (0x000461d3) mup_volume_pane_cp1

0xaeea,	// (0x0004691f) main_mup2_pane_g4_ParamLimits

0xaeea,	// (0x0004691f) main_mup2_pane_g4

0xaeea,	// (0x0004691f) main_mup2_pane_g5_ParamLimits

0xaeea,	// (0x0004691f) main_mup2_pane_g5

0xaeea,	// (0x0004691f) main_mup2_pane_g6_ParamLimits

0xaeea,	// (0x0004691f) main_mup2_pane_g6

0xaeea,	// (0x0004691f) main_mup2_pane_g7_ParamLimits

0xaeea,	// (0x0004691f) main_mup2_pane_g7

0x0006,

0xf5bf,	// (0x0004aff4) main_mup2_pane_g_ParamLimits

0xf5bf,	// (0x0004aff4) main_mup2_pane_g

0xaef8,	// (0x0004692d) main_mup2_pane_t1_ParamLimits

0xaef8,	// (0x0004692d) main_mup2_pane_t1

0xaef8,	// (0x0004692d) main_mup2_pane_t2_ParamLimits

0xaef8,	// (0x0004692d) main_mup2_pane_t2

0xaef8,	// (0x0004692d) main_mup2_pane_t3_ParamLimits

0xaef8,	// (0x0004692d) main_mup2_pane_t3

0xaef8,	// (0x0004692d) main_mup2_pane_t4_ParamLimits

0xaef8,	// (0x0004692d) main_mup2_pane_t4

0xaef8,	// (0x0004692d) main_mup2_pane_t5_ParamLimits

0xaef8,	// (0x0004692d) main_mup2_pane_t5

0xaef8,	// (0x0004692d) main_mup2_pane_t6_ParamLimits

0xaef8,	// (0x0004692d) main_mup2_pane_t6

0x0005,

0xf5ce,	// (0x0004b003) main_mup2_pane_t_ParamLimits

0xf5ce,	// (0x0004b003) main_mup2_pane_t

0xc9bb,	// (0x000483f0) mup2_visualizer_pane_ParamLimits

0xc9bb,	// (0x000483f0) mup2_visualizer_pane

0xc9bb,	// (0x000483f0) mup_progress_pane_cp_ParamLimits

0xc9bb,	// (0x000483f0) mup_progress_pane_cp

0xcf9c,	// (0x000489d1) mup_volume_pane_cp_ParamLimits

0xcf9c,	// (0x000489d1) mup_volume_pane_cp

0xaece,	// (0x00046903) mup2_visualizer_pane_g1_ParamLimits

0xaece,	// (0x00046903) mup2_visualizer_pane_g1

0xaedc,	// (0x00046911) mup2_visualizer_pane_g2_ParamLimits

0xaedc,	// (0x00046911) mup2_visualizer_pane_g2

0xaedc,	// (0x00046911) mup2_visualizer_pane_g3_ParamLimits

0xaedc,	// (0x00046911) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0004aad9) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0004aad9) mup2_visualizer_pane_g

0xbe35,	// (0x0004786a) aid_size_cell_fmradio

0x54c0,	// (0x00040ef5) aid_height_parent_landcape

0xb279,	// (0x00046cae) wml_content_pane_cp

0xb281,	// (0x00046cb6) wml_tabs_pane

0xb28a,	// (0x00046cbf) popup_wml_miniature_window

0xb292,	// (0x00046cc7) scroll_pane_cp021

0xb2a6,	// (0x00046cdb) wml_content_pane_comp8

0xabbb,	// (0x000465f0) bg_popup_sub_pane_cp05

0xcfb2,	// (0x000489e7) popup_wml_miniature_window_g1

0xcfba,	// (0x000489ef) wml_miniature_view_pane

0x5823,	// (0x00041258) aid_size_wml_view

0x582b,	// (0x00041260) wml_miniature_view_pane_g1

0x5834,	// (0x00041269) wml_miniature_view_pane_g2

0x583d,	// (0x00041272) wml_miniature_view_pane_g3

0x5845,	// (0x0004127a) wml_miniature_view_pane_g4

0x584d,	// (0x00041282) wml_miniature_view_pane_g5

0x5855,	// (0x0004128a) wml_miniature_view_pane_g6

0x585d,	// (0x00041292) wml_miniature_view_pane_g7

0x5865,	// (0x0004129a) wml_miniature_view_pane_g8

0x0007,

0xf5db,	// (0x0004b010) wml_miniature_view_pane_g

0xcfc2,	// (0x000489f7) background_graphic_ParamLimits

0xcfc2,	// (0x000489f7) background_graphic

0xcfce,	// (0x00048a03) wml_tabs_2_pane

0xcfd7,	// (0x00048a0c) wml_tabs_3_pane_ParamLimits

0xcfd7,	// (0x00048a0c) wml_tabs_3_pane

0xcfe9,	// (0x00048a1e) wml_tabs_4_pane_ParamLimits

0xcfe9,	// (0x00048a1e) wml_tabs_4_pane

0xcfff,	// (0x00048a34) wml_tabs_5_pane_ParamLimits

0xcfff,	// (0x00048a34) wml_tabs_5_pane

0xd019,	// (0x00048a4e) wml_tabs_pane_g2_ParamLimits

0xd019,	// (0x00048a4e) wml_tabs_pane_g2

0xd02e,	// (0x00048a63) wml_tabs_pane_g3_ParamLimits

0xd02e,	// (0x00048a63) wml_tabs_pane_g3

0xd043,	// (0x00048a78) wml_tabs_2_active_pane_ParamLimits

0xd043,	// (0x00048a78) wml_tabs_2_active_pane

0xd043,	// (0x00048a78) wml_tabs_2_passive_pane_ParamLimits

0xd043,	// (0x00048a78) wml_tabs_2_passive_pane

0x586d,	// (0x000412a2) wml_tabs_3_active_pane_cp_ParamLimits

0x586d,	// (0x000412a2) wml_tabs_3_active_pane_cp

0x587e,	// (0x000412b3) wml_tabs_3_passive_pane_ParamLimits

0x587e,	// (0x000412b3) wml_tabs_3_passive_pane

0x588f,	// (0x000412c4) wml_tabs_3_passive_pane_cp_ParamLimits

0x588f,	// (0x000412c4) wml_tabs_3_passive_pane_cp

0x58a0,	// (0x000412d5) tabs_4_active_pane

0x58a8,	// (0x000412dd) tabs_4_passive_pane

0x58b0,	// (0x000412e5) tabs_4_passive_pane_cp

0x58b8,	// (0x000412ed) tabs_4_passive_pane_cp2

0x52a6,	// (0x00040cdb) aid_height_text

0xc9bb,	// (0x000483f0) mup_volume_cont_pane_ParamLimits

0xc9bb,	// (0x000483f0) mup_volume_cont_pane

0xa79e,	// (0x000461d3) aid_size_cell_pinb

0xa79e,	// (0x000461d3) aid_size_list_pinb

0xc9bb,	// (0x000483f0) mup2_volume_cont_pane_ParamLimits

0xc9bb,	// (0x000483f0) mup2_volume_cont_pane

0x58c0,	// (0x000412f5) mup2_volume_cont_pane_g1_ParamLimits

0x58c0,	// (0x000412f5) mup2_volume_cont_pane_g1

0x2795,	// (0x0003e1ca) aid_size_cell_touch_ParamLimits

0x2795,	// (0x0003e1ca) aid_size_cell_touch

0x29a0,	// (0x0003e3d5) touch_pane_ParamLimits

0x29a0,	// (0x0003e3d5) touch_pane

0xa79e,	// (0x000461d3) main_rss2_pane

0xd05a,	// (0x00048a8f) listscroll_rss2_pane

0xd063,	// (0x00048a98) rss2_navigation_pane

0xd06b,	// (0x00048aa0) list_rss2_pane

0xb908,	// (0x0004733d) scroll_pane_cp22

0xd073,	// (0x00048aa8) rss2_navigation_pane_g1

0xd07c,	// (0x00048ab1) rss2_navigation_pane_g2

0xd084,	// (0x00048ab9) rss2_navigation_pane_g3

0x0002,

0xf5ec,	// (0x0004b021) rss2_navigation_pane_g

0xd08c,	// (0x00048ac1) rss2_navigation_pane_t1

0x58d6,	// (0x0004130b) rss2_list_single_pane_ParamLimits

0x58d6,	// (0x0004130b) rss2_list_single_pane

0xd09a,	// (0x00048acf) rss2_list_single_pane_t2

0xd0a8,	// (0x00048add) rss2_list_single_pane_t3_ParamLimits

0xd0a8,	// (0x00048add) rss2_list_single_pane_t3

0xd0c5,	// (0x00048afa) rss2_list_single_pane_t4

0x45d5,	// (0x0004000a) smil_status_pane_g1

0xae75,	// (0x000468aa) main_image2_pane_ParamLimits

0xae75,	// (0x000468aa) main_image2_pane

0xaedc,	// (0x00046911) main_camera2_pane_g9_ParamLimits

0xaedc,	// (0x00046911) main_camera2_pane_g9

0xb8d0,	// (0x00047305) main_camera2_pane_t5_ParamLimits

0xb8d0,	// (0x00047305) main_camera2_pane_t5

0x580f,	// (0x00041244) main_camera2_pane_t6_ParamLimits

0x580f,	// (0x00041244) main_camera2_pane_t6

0x590a,	// (0x0004133f) main_image2_pane_g1_ParamLimits

0x590a,	// (0x0004133f) main_image2_pane_g1

0x4fd8,	// (0x00040a0d) smil2_video_pane_ParamLimits

0x4fd8,	// (0x00040a0d) smil2_video_pane

0x197f,	// (0x0003d3b4) aid_zoom_text_primary_cp

0x2949,	// (0x0003e37e) popup_preview_fixed_window

0xb1e2,	// (0x00046c17) im_reading_pane_g1

0x5801,	// (0x00041236) cams2_bc_adjust_pane_cp_ParamLimits

0x5801,	// (0x00041236) cams2_bc_adjust_pane_cp

0xacc2,	// (0x000466f7) cams2_bc_adjust_pane_ParamLimits

0xacc2,	// (0x000466f7) cams2_bc_adjust_pane

0xb11d,	// (0x00046b52) cams2_bc_adjust_pane_g1

0xa79e,	// (0x000461d3) cams2_slider_pane

0xb11d,	// (0x00046b52) cams2_slider_pane_g1

0xb11d,	// (0x00046b52) cams2_slider_pane_g2

0x0006,

0xf5f3,	// (0x0004b028) cams2_slider_pane_g

0x2a71,	// (0x0003e4a6) calc_display_pane_ParamLimits

0x2a8f,	// (0x0003e4c4) calc_paper_pane_ParamLimits

0x2aab,	// (0x0003e4e0) grid_calc_pane_ParamLimits

0x47db,	// (0x00040210) popup_clock_digital_window_t1_ParamLimits

0xbdd2,	// (0x00047807) main_image_pane_t1

0x2a57,	// (0x0003e48c) aid_size_cell_calc_ParamLimits

0x2a57,	// (0x0003e48c) aid_size_cell_calc

0x54fa,	// (0x00040f2f) popup_blid_sat_info2_window_ParamLimits

0x54fa,	// (0x00040f2f) popup_blid_sat_info2_window

0xd0d3,	// (0x00048b08) aid_size_cell_blid

0xc9bb,	// (0x000483f0) bg_popup_window_pane_cp07

0xd0f0,	// (0x00048b25) grid_popup_blid_pane

0xd0fa,	// (0x00048b2f) heading_pane_cp05_ParamLimits

0xd0fa,	// (0x00048b2f) heading_pane_cp05

0xd1c4,	// (0x00048bf9) cell_popup_blid_pane_ParamLimits

0xd1c4,	// (0x00048bf9) cell_popup_blid_pane

0xd1e8,	// (0x00048c1d) cell_popup_blid_pane_g1

0xd1f0,	// (0x00048c25) cell_popup_blid_pane_t1

0xc9bb,	// (0x000483f0) mup2_indicator_pane_ParamLimits

0xc9bb,	// (0x000483f0) mup2_indicator_pane

0xa79e,	// (0x000461d3) mup2_visualizer_osc_pane

0xcf9c,	// (0x000489d1) mup2_visualizer_spec_pane_ParamLimits

0xcf9c,	// (0x000489d1) mup2_visualizer_spec_pane

0xa79e,	// (0x000461d3) mup2_spec_half_pane

0xa79e,	// (0x000461d3) mup2_spec_half_pane_cp

0xd1fe,	// (0x00048c33) mup2_spec_bar_pane_ParamLimits

0xd1fe,	// (0x00048c33) mup2_spec_bar_pane

0xb11d,	// (0x00046b52) mup2_spec_bar_pane_g1

0xd21d,	// (0x00048c52) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0004b04e) mup2_spec_bar_pane_g

0xa79e,	// (0x000461d3) mup2_osc_middle_pane

0xb11d,	// (0x00046b52) mup2_visualizer_osc_pane_g1

0xa7c8,	// (0x000461fd) popup_number_entry_window_t1_ParamLimits

0xa7db,	// (0x00046210) popup_number_entry_window_t2_ParamLimits

0xa7ed,	// (0x00046222) popup_number_entry_window_t3_ParamLimits

0x29f7,	// (0x0003e42c) popup_number_entry_window_t5_ParamLimits

0x29f7,	// (0x0003e42c) popup_number_entry_window_t5

0xf045,	// (0x0004aa7a) popup_number_entry_window_t_ParamLimits

0xa7ff,	// (0x00046234) text_title_cp2_ParamLimits

0x4ccd,	// (0x00040702) aid_hotspot_pointer_text2_pane

0x4d67,	// (0x0004079c) main_viewer_pane_g9_ParamLimits

0x4d67,	// (0x0004079c) main_viewer_pane_g9

0xb41b,	// (0x00046e50) cale_month_pane_t1_ParamLimits

0xb458,	// (0x00046e8d) bg_cale_pane_ParamLimits

0xb470,	// (0x00046ea5) list_cale_pane_ParamLimits

0xb481,	// (0x00046eb6) listscroll_cale_day_pane_t1

0xb493,	// (0x00046ec8) scroll_pane_cp09_ParamLimits

0x4a8c,	// (0x000404c1) main_mup_eq_pane_t1_ParamLimits

0x4a8c,	// (0x000404c1) main_mup_eq_pane_t1

0x4aa6,	// (0x000404db) main_mup_eq_pane_t2_ParamLimits

0x4aa6,	// (0x000404db) main_mup_eq_pane_t2

0x4abe,	// (0x000404f3) main_mup_eq_pane_t3_ParamLimits

0x4abe,	// (0x000404f3) main_mup_eq_pane_t3

0x4ad6,	// (0x0004050b) main_mup_eq_pane_t4_ParamLimits

0x4ad6,	// (0x0004050b) main_mup_eq_pane_t4

0x4aee,	// (0x00040523) main_mup_eq_pane_t5_ParamLimits

0x4aee,	// (0x00040523) main_mup_eq_pane_t5

0x4b06,	// (0x0004053b) main_mup_eq_pane_t6_ParamLimits

0x4b06,	// (0x0004053b) main_mup_eq_pane_t6

0x4b1a,	// (0x0004054f) main_mup_eq_pane_t7_ParamLimits

0x4b1a,	// (0x0004054f) main_mup_eq_pane_t7

0x4b2e,	// (0x00040563) main_mup_eq_pane_t8_ParamLimits

0x4b2e,	// (0x00040563) main_mup_eq_pane_t8

0x4b44,	// (0x00040579) main_mup_eq_pane_t9_ParamLimits

0x4b44,	// (0x00040579) main_mup_eq_pane_t9

0x4b5c,	// (0x00040591) main_mup_eq_pane_t10_ParamLimits

0x4b5c,	// (0x00040591) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x0004adde) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x0004adde) main_mup_eq_pane_t

0x4c19,	// (0x0004064e) mup_equalizer_pane_cp5_ParamLimits

0x4c2f,	// (0x00040664) mup_equalizer_pane_cp6_ParamLimits

0x4c47,	// (0x0004067c) mup_equalizer_pane_cp7_ParamLimits

0xa79e,	// (0x000461d3) main_gallery_pane

0xcf3a,	// (0x0004896f) smil2_volume_pane

0xcf42,	// (0x00048977) smil_status_volume_pane_g1_ParamLimits

0xcf55,	// (0x0004898a) smil_status_volume_pane_g2_ParamLimits

0x56b4,	// (0x000410e9) smil_status_volume_pane_g3_ParamLimits

0xf572,	// (0x0004afa7) smil_status_volume_pane_g_ParamLimits

0xc9bb,	// (0x000483f0) bg_popup_window_pane_cp07_ParamLimits

0xd0db,	// (0x00048b10) blid_firmament_pane

0xacc2,	// (0x000466f7) aid_size_cell_gallery_ParamLimits

0xacc2,	// (0x000466f7) aid_size_cell_gallery

0xacc2,	// (0x000466f7) grid_gallery_pane_ParamLimits

0xacc2,	// (0x000466f7) grid_gallery_pane

0xbca6,	// (0x000476db) cell_gallery_pane_ParamLimits

0xbca6,	// (0x000476db) cell_gallery_pane

0xae75,	// (0x000468aa) bg_cell_gallery_focus_pane_ParamLimits

0xae75,	// (0x000468aa) bg_cell_gallery_focus_pane

0xaece,	// (0x00046903) cell_gallery_pane_g1_ParamLimits

0xaece,	// (0x00046903) cell_gallery_pane_g1

0xaece,	// (0x00046903) cell_gallery_pane_g2_ParamLimits

0xaece,	// (0x00046903) cell_gallery_pane_g2

0xaece,	// (0x00046903) cell_gallery_pane_g3_ParamLimits

0xaece,	// (0x00046903) cell_gallery_pane_g3

0xaedc,	// (0x00046911) cell_gallery_pane_g4_ParamLimits

0xaedc,	// (0x00046911) cell_gallery_pane_g4

0x0003,

0xf61e,	// (0x0004b053) cell_gallery_pane_g_ParamLimits

0xf61e,	// (0x0004b053) cell_gallery_pane_g

0xd227,	// (0x00048c5c) bg_cell_gallery_focus_pane_g1

0xd22f,	// (0x00048c64) bg_cell_gallery_focus_pane_g2

0xd237,	// (0x00048c6c) bg_cell_gallery_focus_pane_g3

0xd23f,	// (0x00048c74) bg_cell_gallery_focus_pane_g4

0xd247,	// (0x00048c7c) bg_cell_gallery_focus_pane_g5

0xd24f,	// (0x00048c84) bg_cell_gallery_focus_pane_g6

0xd257,	// (0x00048c8c) bg_cell_gallery_focus_pane_g7

0xd25f,	// (0x00048c94) bg_cell_gallery_focus_pane_g8

0x0007,

0xf627,	// (0x0004b05c) bg_cell_gallery_focus_pane_g

0xd267,	// (0x00048c9c) aid_firma_cardinal

0xd27b,	// (0x00048cb0) blid_firmament_pane_t1

0xd292,	// (0x00048cc7) blid_firmament_pane_t2

0xd2a9,	// (0x00048cde) blid_firmament_pane_t3

0xd2c0,	// (0x00048cf5) blid_firmament_pane_t4

0x0003,

0xf638,	// (0x0004b06d) blid_firmament_pane_t

0xd2d7,	// (0x00048d0c) blid_sat_info_pane

0xb11d,	// (0x00046b52) blid_sat_info_pane_g1

0xb11d,	// (0x00046b52) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x0004add2) blid_sat_info_pane_g

0xd2e7,	// (0x00048d1c) blid_sat_info_pane_t1

0xd2f5,	// (0x00048d2a) smil2_volume_content_pane

0xd2fe,	// (0x00048d33) smil2_volume_pane_g1

0xb0c0,	// (0x00046af5) smil2_volume_content_pane_g1

0xd306,	// (0x00048d3b) smil2_volume_content_pane_g2

0xd30f,	// (0x00048d44) smil2_volume_content_pane_g3

0xd318,	// (0x00048d4d) smil2_volume_content_pane_g4

0xd321,	// (0x00048d56) smil2_volume_content_pane_g5

0xd32a,	// (0x00048d5f) smil2_volume_content_pane_g6

0xd333,	// (0x00048d68) smil2_volume_content_pane_g7

0xd33c,	// (0x00048d71) smil2_volume_content_pane_g8

0xd345,	// (0x00048d7a) smil2_volume_content_pane_g9

0xd34e,	// (0x00048d83) smil2_volume_content_pane_g10

0x0009,

0xf641,	// (0x0004b076) smil2_volume_content_pane_g

0x3099,	// (0x0003eace) cale_week_day_heading_pane_t1_ParamLimits

0x30b4,	// (0x0003eae9) cale_week_day_heading_pane_t2_ParamLimits

0x30cf,	// (0x0003eb04) cale_week_day_heading_pane_t3_ParamLimits

0x30ea,	// (0x0003eb1f) cale_week_day_heading_pane_t4_ParamLimits

0x3105,	// (0x0003eb3a) cale_week_day_heading_pane_t5_ParamLimits

0x3120,	// (0x0003eb55) cale_week_day_heading_pane_t6_ParamLimits

0x313b,	// (0x0003eb70) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0004ab81) cale_week_day_heading_pane_t_ParamLimits

0xb0a0,	// (0x00046ad5) bg_cale_side_pane_ParamLimits

0x3156,	// (0x0003eb8b) cale_week_time_pane_t1_ParamLimits

0x3170,	// (0x0003eba5) cale_week_time_pane_t2_ParamLimits

0x318a,	// (0x0003ebbf) cale_week_time_pane_t3_ParamLimits

0x31a4,	// (0x0003ebd9) cale_week_time_pane_t4_ParamLimits

0x31be,	// (0x0003ebf3) cale_week_time_pane_t5_ParamLimits

0x31d8,	// (0x0003ec0d) cale_week_time_pane_t6_ParamLimits

0x31f8,	// (0x0003ec2d) cale_week_time_pane_t7_ParamLimits

0x321a,	// (0x0003ec4f) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0004ab90) cale_week_time_pane_t_ParamLimits

0x323e,	// (0x0003ec73) cell_cale_week_pane_g2_ParamLimits

0xb0a0,	// (0x00046ad5) bg_cale_side_pane_cp01_ParamLimits

0x43c4,	// (0x0003fdf9) cale_month_week_pane_t1_ParamLimits

0x43dd,	// (0x0003fe12) cale_month_week_pane_t2_ParamLimits

0x43f6,	// (0x0003fe2b) cale_month_week_pane_t3_ParamLimits

0x440f,	// (0x0003fe44) cale_month_week_pane_t4_ParamLimits

0x442a,	// (0x0003fe5f) cale_month_week_pane_t5_ParamLimits

0x444b,	// (0x0003fe80) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0004ac5e) cale_month_week_pane_t_ParamLimits

0x4592,	// (0x0003ffc7) cell_cale_month_pane_g1_ParamLimits

0xa79e,	// (0x000461d3) main_cale_event_viewer_pane

0xa79e,	// (0x000461d3) listscroll_cale_event_viewer_pane

0xd357,	// (0x00048d8c) list_cale_ev_pane

0xd35f,	// (0x00048d94) scroll_pane_cp023

0xd36b,	// (0x00048da0) field_cale_ev_pane_ParamLimits

0xd36b,	// (0x00048da0) field_cale_ev_pane

0xd389,	// (0x00048dbe) field_cale_ev_content_pane_ParamLimits

0xd389,	// (0x00048dbe) field_cale_ev_content_pane

0xd395,	// (0x00048dca) field_cale_ev_pane_g1_ParamLimits

0xd395,	// (0x00048dca) field_cale_ev_pane_g1

0xd3a1,	// (0x00048dd6) field_cale_ev_pane_g2_ParamLimits

0xd3a1,	// (0x00048dd6) field_cale_ev_pane_g2

0xd3b9,	// (0x00048dee) field_cale_ev_pane_g3_ParamLimits

0xd3b9,	// (0x00048dee) field_cale_ev_pane_g3

0x0002,

0xf656,	// (0x0004b08b) field_cale_ev_pane_g_ParamLimits

0xf656,	// (0x0004b08b) field_cale_ev_pane_g

0xd3d1,	// (0x00048e06) field_cale_ev_pane_t1_ParamLimits

0xd3d1,	// (0x00048e06) field_cale_ev_pane_t1

0xd3e8,	// (0x00048e1d) field_cale_ev_content_pane_t1_ParamLimits

0xd3e8,	// (0x00048e1d) field_cale_ev_content_pane_t1

0xbc88,	// (0x000476bd) bg_button_pane_cp01

0x2e24,	// (0x0003e859) listscroll_cale_week_pane_ParamLimits

0xb04b,	// (0x00046a80) popup_toolbar_window_cp01

0xb071,	// (0x00046aa6) listscroll_cale_week_pane_t1_ParamLimits

0x2e24,	// (0x0003e859) listscroll_cale_day_pane_ParamLimits

0xb04b,	// (0x00046a80) popup_toolbar_window_cp02

0xb481,	// (0x00046eb6) listscroll_cale_day_pane_t1_ParamLimits

0x2e24,	// (0x0003e859) main_cale_month_pane_ParamLimits

0x55fd,	// (0x00041032) popup_toolbar_window_cp03_ParamLimits

0x55fd,	// (0x00041032) popup_toolbar_window_cp03

0x4eee,	// (0x00040923) main_image_pane_g2_ParamLimits

0x4eee,	// (0x00040923) main_image_pane_g2

0x4efa,	// (0x0004092f) main_image_pane_g3_ParamLimits

0x4efa,	// (0x0004092f) main_image_pane_g3

0x0002,

0xf43b,	// (0x0004ae70) main_image_pane_g_ParamLimits

0xf43b,	// (0x0004ae70) main_image_pane_g

0xbdd2,	// (0x00047807) main_image_pane_t1_ParamLimits

0x4f06,	// (0x0004093b) main_image_pane_t2_ParamLimits

0x4f06,	// (0x0004093b) main_image_pane_t2

0x4f18,	// (0x0004094d) main_image_pane_t3_ParamLimits

0x4f18,	// (0x0004094d) main_image_pane_t3

0x4f2a,	// (0x0004095f) main_image_pane_t4_ParamLimits

0x4f2a,	// (0x0004095f) main_image_pane_t4

0x0003,

0xf442,	// (0x0004ae77) main_image_pane_t_ParamLimits

0xf442,	// (0x0004ae77) main_image_pane_t

0x4f3c,	// (0x00040971) popup_image_details_window_cp01

0x4f46,	// (0x0004097b) popup_toobar_trans_pane_cp01_ParamLimits

0x4f46,	// (0x0004097b) popup_toobar_trans_pane_cp01

0x554d,	// (0x00040f82) popup_image_details_window_ParamLimits

0x554d,	// (0x00040f82) popup_image_details_window

0x555b,	// (0x00040f90) popup_image_focus_window

0xacc2,	// (0x000466f7) camera2_autofocus_pane_ParamLimits

0xacc2,	// (0x000466f7) camera2_autofocus_pane

0xa79e,	// (0x000461d3) bg_popup_sub_pane_cp06

0xd406,	// (0x00048e3b) popup_image_focus_window_g1

0xd40e,	// (0x00048e43) popup_image_focus_window_g2

0xd416,	// (0x00048e4b) popup_image_focus_window_g3

0xd41e,	// (0x00048e53) popup_image_focus_window_g4

0x0003,

0xf65d,	// (0x0004b092) popup_image_focus_window_g

0xd426,	// (0x00048e5b) popup_image_focus_window_t1

0xd434,	// (0x00048e69) popup_image_focus_window_t2

0xd444,	// (0x00048e79) popup_image_focus_window_t3

0x0002,

0xf666,	// (0x0004b09b) popup_image_focus_window_t

0xaece,	// (0x00046903) camera2_autofocus_pane_g1

0xae75,	// (0x000468aa) bg_tb_trans_pane_cp01

0xd452,	// (0x00048e87) popup_image_details_window_g1

0xd465,	// (0x00048e9a) popup_image_details_window_g2

0x0002,

0xf678,	// (0x0004b0ad) popup_image_details_window_g

0xd48e,	// (0x00048ec3) popup_image_details_window_t1

0xd4a0,	// (0x00048ed5) popup_image_details_window_t2

0xd4b9,	// (0x00048eee) popup_image_details_window_t3

0xd4cd,	// (0x00048f02) popup_image_details_window_t4

0xd4e8,	// (0x00048f1d) popup_image_details_window_t5

0x0004,

0xf67f,	// (0x0004b0b4) popup_image_details_window_t

0xaf2c,	// (0x00046961) bg_calc_paper_pane_ParamLimits

0xa79e,	// (0x000461d3) grid_highlight_pane_cp013

0x2ba8,	// (0x0003e5dd) list_calc_pane_ParamLimits

0x2bba,	// (0x0003e5ef) scroll_pane_cp024

0xaf40,	// (0x00046975) bg_calc_display_pane_ParamLimits

0x2bc2,	// (0x0003e5f7) calc_display_pane_t1_ParamLimits

0x2bd7,	// (0x0003e60c) calc_display_pane_t2_ParamLimits

0x2bec,	// (0x0003e621) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0004ab01) calc_display_pane_t_ParamLimits

0x2cc6,	// (0x0003e6fb) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0004ab1e) cell_calc_pane_g

0x2ccf,	// (0x0003e704) cell_calc_pane_t1

0xaf95,	// (0x000469ca) grid_highlight_pane_cp02_ParamLimits

0xafab,	// (0x000469e0) toolbar_button_pane_cp01_ParamLimits

0xafab,	// (0x000469e0) toolbar_button_pane_cp01

0xbe17,	// (0x0004784c) temp_image_control_pane_ParamLimits

0xbe17,	// (0x0004784c) temp_image_control_pane

0xae75,	// (0x000468aa) main_mp3_pane

0xd502,	// (0x00048f37) temp_image_control_pane_g1_ParamLimits

0xd502,	// (0x00048f37) temp_image_control_pane_g1

0xd510,	// (0x00048f45) temp_image_control_pane_g2_ParamLimits

0xd510,	// (0x00048f45) temp_image_control_pane_g2

0xd522,	// (0x00048f57) temp_image_control_pane_g3_ParamLimits

0xd522,	// (0x00048f57) temp_image_control_pane_g3

0x5916,	// (0x0004134b) temp_image_control_pane_g4_ParamLimits

0x5916,	// (0x0004134b) temp_image_control_pane_g4

0x0003,

0xf68a,	// (0x0004b0bf) temp_image_control_pane_g_ParamLimits

0xf68a,	// (0x0004b0bf) temp_image_control_pane_g

0xd502,	// (0x00048f37) main_mp3_pane_g1

0x5927,	// (0x0004135c) main_mp3_pane_g2

0x0007,

0xf693,	// (0x0004b0c8) main_mp3_pane_g

0xd557,	// (0x00048f8c) main_mp3_pane_t1

0xaedc,	// (0x00046911) main_camera_pane_g8_ParamLimits

0xaedc,	// (0x00046911) main_camera_pane_g8

0x33e5,	// (0x0003ee1a) main_video_pane_g7_ParamLimits

0x33e5,	// (0x0003ee1a) main_video_pane_g7

0xb8d0,	// (0x00047305) main_camera2_pane_t7_ParamLimits

0xb8d0,	// (0x00047305) main_camera2_pane_t7

0xb239,	// (0x00046c6e) scroll_pane_cp025_ParamLimits

0xb239,	// (0x00046c6e) scroll_pane_cp025

0xb24d,	// (0x00046c82) scroll_pane_cp026_ParamLimits

0xb24d,	// (0x00046c82) scroll_pane_cp026

0xb25c,	// (0x00046c91) wml_content_pane_ParamLimits

0xa79e,	// (0x000461d3) main_touch_calib_pane

0x59cb,	// (0x00041400) main_touch_calib_pane_g1

0x59d7,	// (0x0004140c) main_touch_calib_pane_g2

0x59e3,	// (0x00041418) main_touch_calib_pane_g3

0x59ef,	// (0x00041424) main_touch_calib_pane_g4

0x0003,

0xf6b1,	// (0x0004b0e6) main_touch_calib_pane_g

0x59fb,	// (0x00041430) main_touch_calib_pane_t1

0x5a14,	// (0x00041449) main_touch_calib_pane_t2

0x0004,

0xf6ba,	// (0x0004b0ef) main_touch_calib_pane_t

0xb9d7,	// (0x0004740c) mup_progress_pane_cp02

0xba0c,	// (0x00047441) navi_pane_g1

0xbac7,	// (0x000474fc) navi_pane_mp_t3

0xae75,	// (0x000468aa) main_mp3_pane_ParamLimits

0x563a,	// (0x0004106f) navi_pane_ParamLimits

0xd502,	// (0x00048f37) main_mp3_pane_g1_ParamLimits

0x5927,	// (0x0004135c) main_mp3_pane_g2_ParamLimits

0x5933,	// (0x00041368) main_mp3_pane_g3_ParamLimits

0x5933,	// (0x00041368) main_mp3_pane_g3

0x593f,	// (0x00041374) main_mp3_pane_g4_ParamLimits

0x593f,	// (0x00041374) main_mp3_pane_g4

0xaece,	// (0x00046903) main_mp3_pane_g5_ParamLimits

0xaece,	// (0x00046903) main_mp3_pane_g5

0xd532,	// (0x00048f67) main_mp3_pane_g6_ParamLimits

0xd532,	// (0x00048f67) main_mp3_pane_g6

0xd53f,	// (0x00048f74) main_mp3_pane_g7_ParamLimits

0xd53f,	// (0x00048f74) main_mp3_pane_g7

0xd54b,	// (0x00048f80) main_mp3_pane_g8_ParamLimits

0xd54b,	// (0x00048f80) main_mp3_pane_g8

0xf693,	// (0x0004b0c8) main_mp3_pane_g_ParamLimits

0x594b,	// (0x00041380) main_mp3_pane_t2

0x595b,	// (0x00041390) main_mp3_pane_t3

0xd565,	// (0x00048f9a) main_mp3_pane_t4

0xd573,	// (0x00048fa8) main_mp3_pane_t5

0x0005,

0xf6a4,	// (0x0004b0d9) main_mp3_pane_t

0xd581,	// (0x00048fb6) mup_progress_pane_cp01

0x197f,	// (0x0003d3b4) aid_zoom_text_secondary2

0xd357,	// (0x00048d8c) list_cale_ev2_pane

0xd35f,	// (0x00048d94) scroll_pane_cp023_ParamLimits

0x5a6f,	// (0x000414a4) field_cale_ev2_pane_ParamLimits

0x5a6f,	// (0x000414a4) field_cale_ev2_pane

0x1b50,	// (0x0003d585) field_cale_ev2_pane_g1_ParamLimits

0x1b50,	// (0x0003d585) field_cale_ev2_pane_g1

0x1b5c,	// (0x0003d591) field_cale_ev2_pane_g2_ParamLimits

0x1b5c,	// (0x0003d591) field_cale_ev2_pane_g2

0x1b74,	// (0x0003d5a9) field_cale_ev2_pane_g3_ParamLimits

0x1b74,	// (0x0003d5a9) field_cale_ev2_pane_g3

0x0003,

0xf6c5,	// (0x0004b0fa) field_cale_ev2_pane_g_ParamLimits

0xf6c5,	// (0x0004b0fa) field_cale_ev2_pane_g

0x1b98,	// (0x0003d5cd) field_cale_ev2_pane_t1_ParamLimits

0x1b98,	// (0x0003d5cd) field_cale_ev2_pane_t1

0x1baf,	// (0x0003d5e4) field_cale_ev2_pane_t2_ParamLimits

0x1baf,	// (0x0003d5e4) field_cale_ev2_pane_t2

0x0001,

0xf6ce,	// (0x0004b103) field_cale_ev2_pane_t_ParamLimits

0xf6ce,	// (0x0004b103) field_cale_ev2_pane_t

0x4dcf,	// (0x00040804) main_postcard_pane_g5_ParamLimits

0x4dcf,	// (0x00040804) main_postcard_pane_g5

0x4ddd,	// (0x00040812) main_postcard_pane_g6_ParamLimits

0x4ddd,	// (0x00040812) main_postcard_pane_g6

0xacc2,	// (0x000466f7) camera2_autofocus_pane_cp_ParamLimits

0xacc2,	// (0x000466f7) camera2_autofocus_pane_cp

0xae75,	// (0x000468aa) main_mup3_pane

0x5ad8,	// (0x0004150d) main_mup3_pane_g1_ParamLimits

0x5ad8,	// (0x0004150d) main_mup3_pane_g1

0x5af9,	// (0x0004152e) main_mup3_pane_g2_ParamLimits

0x5af9,	// (0x0004152e) main_mup3_pane_g2

0x5b73,	// (0x000415a8) main_mup3_pane_g3_ParamLimits

0x5b73,	// (0x000415a8) main_mup3_pane_g3

0x5bb6,	// (0x000415eb) main_mup3_pane_g4_ParamLimits

0x5bb6,	// (0x000415eb) main_mup3_pane_g4

0x5bf9,	// (0x0004162e) main_mup3_pane_g5_ParamLimits

0x5bf9,	// (0x0004162e) main_mup3_pane_g5

0x5c3c,	// (0x00041671) main_mup3_pane_g6_ParamLimits

0x5c3c,	// (0x00041671) main_mup3_pane_g6

0xaedc,	// (0x00046911) main_mup3_pane_g7_ParamLimits

0xaedc,	// (0x00046911) main_mup3_pane_g7

0x0007,

0xf6de,	// (0x0004b113) main_mup3_pane_g_ParamLimits

0xf6de,	// (0x0004b113) main_mup3_pane_g

0x5cb2,	// (0x000416e7) main_mup3_pane_t1_ParamLimits

0x5cb2,	// (0x000416e7) main_mup3_pane_t1

0x5d21,	// (0x00041756) main_mup3_pane_t2_ParamLimits

0x5d21,	// (0x00041756) main_mup3_pane_t2

0x5dea,	// (0x0004181f) main_mup3_pane_t4_ParamLimits

0x5dea,	// (0x0004181f) main_mup3_pane_t4

0x5e38,	// (0x0004186d) main_mup3_pane_t5_ParamLimits

0x5e38,	// (0x0004186d) main_mup3_pane_t5

0x5ee8,	// (0x0004191d) main_mup3_pane_t6_ParamLimits

0x5ee8,	// (0x0004191d) main_mup3_pane_t6

0x0005,

0xf6ef,	// (0x0004b124) main_mup3_pane_t_ParamLimits

0xf6ef,	// (0x0004b124) main_mup3_pane_t

0x5f94,	// (0x000419c9) mup3_progress_pane_ParamLimits

0x5f94,	// (0x000419c9) mup3_progress_pane

0x6008,	// (0x00041a3d) popup_mup3_control_window_ParamLimits

0x6008,	// (0x00041a3d) popup_mup3_control_window

0xd597,	// (0x00048fcc) popup_mup3_text_window

0x6021,	// (0x00041a56) mup3_progress_pane_t1

0x6040,	// (0x00041a75) mup3_progress_pane_t2

0xd59f,	// (0x00048fd4) mup3_progress_pane_t3

0x0002,

0xf6fc,	// (0x0004b131) mup3_progress_pane_t

0xd5bc,	// (0x00048ff1) mup_progress_pane_cp03

0xa79e,	// (0x000461d3) bg_tb_trans_pane_cp04

0x605f,	// (0x00041a94) mup3_volume_pane

0x6067,	// (0x00041a9c) popup_mup3_control_window_g1

0x6070,	// (0x00041aa5) mup3_volume_pane_g1

0x6079,	// (0x00041aae) mup3_volume_pane_g2

0x6082,	// (0x00041ab7) mup3_volume_pane_g3

0x0002,

0xf703,	// (0x0004b138) mup3_volume_pane_g

0xa79e,	// (0x000461d3) bg_tb_trans_pane_cp03

0xd5cc,	// (0x00049001) popup_mup3_text_window_g1

0xd5d4,	// (0x00049009) popup_mup3_text_window_t1

0xaf88,	// (0x000469bd) list_calc_item_pane_g1_ParamLimits

0xd051,	// (0x00048a86) mup_volume_pane_cp_g1

0x5a2d,	// (0x00041462) main_touch_calib_pane_t3

0x5a43,	// (0x00041478) main_touch_calib_pane_t4

0x5a59,	// (0x0004148e) main_touch_calib_pane_t5

0x2781,	// (0x0003e1b6) aid_cell_size_toolbar2

0x2789,	// (0x0003e1be) aid_popup3_width_pane

0x1977,	// (0x0003d3ac) aid_zoom_text_msg_primary

0x32e7,	// (0x0003ed1c) vorec_t7

0xaf4c,	// (0x00046981) bg_calc_paper_pane_g1_ParamLimits

0xaf58,	// (0x0004698d) bg_calc_paper_pane_g2_ParamLimits

0xaf64,	// (0x00046999) bg_calc_paper_pane_g3_ParamLimits

0xaf70,	// (0x000469a5) bg_calc_paper_pane_g4_ParamLimits

0xaf7c,	// (0x000469b1) bg_calc_paper_pane_g5_ParamLimits

0x2c2b,	// (0x0003e660) bg_calc_paper_pane_g6_ParamLimits

0x2c3c,	// (0x0003e671) bg_calc_paper_pane_g7_ParamLimits

0x2c4d,	// (0x0003e682) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0004ab08) bg_calc_paper_pane_g_ParamLimits

0x2c5e,	// (0x0003e693) calc_bg_paper_pane_g9_ParamLimits

0xacc2,	// (0x000466f7) image_qvga_pane_ParamLimits

0xacc2,	// (0x000466f7) image_qvga_pane

0xae53,	// (0x00046888) bg_popup_sub_pane_cp04_ParamLimits

0xbd4e,	// (0x00047783) popup_mup_playback_window_g1_ParamLimits

0xbd5a,	// (0x0004778f) popup_mup_playback_window_t1_ParamLimits

0xbd6f,	// (0x000477a4) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x0004ae6b) popup_mup_playback_window_t_ParamLimits

0xaece,	// (0x00046903) main_mup2_pane_g3_ParamLimits

0xaece,	// (0x00046903) main_mup2_pane_g3

0x35cc,	// (0x0003f001) popup_toolbar_window_cp04

0xc164,	// (0x00047b99) popup_call2_audio_second_window_g3_ParamLimits

0xc164,	// (0x00047b99) popup_call2_audio_second_window_g3

0xc57c,	// (0x00047fb1) popup_call2_audio_first_window_g4_ParamLimits

0xc57c,	// (0x00047fb1) popup_call2_audio_first_window_g4

0xcbb1,	// (0x000485e6) popup_call2_audio_in_window_g4_ParamLimits

0xcbb1,	// (0x000485e6) popup_call2_audio_in_window_g4

0x4ee1,	// (0x00040916) aid_area_sk_bg_cut_ParamLimits

0x4ee1,	// (0x00040916) aid_area_sk_bg_cut

0xbd84,	// (0x000477b9) aid_area_sk_bg_cut_2_ParamLimits

0xbd84,	// (0x000477b9) aid_area_sk_bg_cut_2

0xa79e,	// (0x000461d3) aid_placing_details_win

0xa79e,	// (0x000461d3) aid_placing_details_win_2

0xaece,	// (0x00046903) camera2_autofocus_pane_g1_ParamLimits

0x293a,	// (0x0003e36f) popup_fixed_preview_cale_window_ParamLimits

0x293a,	// (0x0003e36f) popup_fixed_preview_cale_window

0xbb45,	// (0x0004757a) navi_slider_pane_g3

0xbb4e,	// (0x00047583) navi_slider_pane_g4

0xbb57,	// (0x0004758c) navi_slider_pane_g5

0xbb45,	// (0x0004757a) navi_slider_pane_g6

0x4a60,	// (0x00040495) navi_slider_pane_g7

0xbc55,	// (0x0004768a) mup_scale_pane_g3

0xbc5e,	// (0x00047693) mup_scale_pane_g4

0xbc67,	// (0x0004769c) mup_scale_pane_g5

0x4c5f,	// (0x00040694) mup_scale_pane_g6

0x4c68,	// (0x0004069d) mup_scale_pane_g7

0xb11d,	// (0x00046b52) cams2_slider_pane_g3

0xb11d,	// (0x00046b52) cams2_slider_pane_g4

0xb11d,	// (0x00046b52) cams2_slider_pane_g5

0xb11d,	// (0x00046b52) cams2_slider_pane_g6

0xb11d,	// (0x00046b52) cams2_slider_pane_g7

0xb11d,	// (0x00046b52) camera2_autofocus_pane_cp_g1

0xcec1,	// (0x000488f6) bg_popup_preview_window_pane_cp02_ParamLimits

0xcec1,	// (0x000488f6) bg_popup_preview_window_pane_cp02

0xd5e2,	// (0x00049017) list_fp_cale_pane_ParamLimits

0xd5e2,	// (0x00049017) list_fp_cale_pane

0xd5ee,	// (0x00049023) popup_fixed_preview_cale_window_t1_ParamLimits

0xd5ee,	// (0x00049023) popup_fixed_preview_cale_window_t1

0x608b,	// (0x00041ac0) popup_fixed_preview_cale_window_t2_ParamLimits

0x608b,	// (0x00041ac0) popup_fixed_preview_cale_window_t2

0x60a0,	// (0x00041ad5) popup_fixed_preview_cale_window_t3_ParamLimits

0x60a0,	// (0x00041ad5) popup_fixed_preview_cale_window_t3

0x0002,

0xf70a,	// (0x0004b13f) popup_fixed_preview_cale_window_t_ParamLimits

0xf70a,	// (0x0004b13f) popup_fixed_preview_cale_window_t

0x60b5,	// (0x00041aea) list_single_fp_cale_pane_ParamLimits

0x60b5,	// (0x00041aea) list_single_fp_cale_pane

0xd60c,	// (0x00049041) list_single_fp_cale_pane_g1_ParamLimits

0xd60c,	// (0x00049041) list_single_fp_cale_pane_g1

0xd618,	// (0x0004904d) list_single_fp_cale_pane_g2_ParamLimits

0xd618,	// (0x0004904d) list_single_fp_cale_pane_g2

0x0002,

0xf711,	// (0x0004b146) list_single_fp_cale_pane_g_ParamLimits

0xf711,	// (0x0004b146) list_single_fp_cale_pane_g

0xd631,	// (0x00049066) list_single_fp_cale_pane_t1_ParamLimits

0xd631,	// (0x00049066) list_single_fp_cale_pane_t1

0xd643,	// (0x00049078) list_single_fp_cale_pane_t2_ParamLimits

0xd643,	// (0x00049078) list_single_fp_cale_pane_t2

0x0001,

0xf718,	// (0x0004b14d) list_single_fp_cale_pane_t_ParamLimits

0xf718,	// (0x0004b14d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa79e,	// (0x000461d3) main_dialer_pane

0xa79e,	// (0x000461d3) aid_cell_size_keypad

0xa79e,	// (0x000461d3) dialer_ne_pane

0xa79e,	// (0x000461d3) grid_dialer_command_1_pane

0xa79e,	// (0x000461d3) grid_dialer_command_2_pane

0xa79e,	// (0x000461d3) grid_dialer_keypad_pane

0xc9bb,	// (0x000483f0) bg_popup_call_pane_cp06_ParamLimits

0xc9bb,	// (0x000483f0) bg_popup_call_pane_cp06

0xc9bb,	// (0x000483f0) dialer_ne_clear_pane_ParamLimits

0xc9bb,	// (0x000483f0) dialer_ne_clear_pane

0xb11d,	// (0x00046b52) dialer_ne_pane_g1

0xb8d0,	// (0x00047305) dialer_ne_pane_t1_ParamLimits

0xb8d0,	// (0x00047305) dialer_ne_pane_t1

0xd676,	// (0x000490ab) dialer_ne_pane_t2_ParamLimits

0xd676,	// (0x000490ab) dialer_ne_pane_t2

0x60c8,	// (0x00041afd) dialer_ne_pane_t3_ParamLimits

0x60c8,	// (0x00041afd) dialer_ne_pane_t3

0x0002,

0xf71d,	// (0x0004b152) dialer_ne_pane_t_ParamLimits

0xf71d,	// (0x0004b152) dialer_ne_pane_t

0x60c8,	// (0x00041afd) dialer_ne_pane_t3_copy1_ParamLimits

0x60c8,	// (0x00041afd) dialer_ne_pane_t3_copy1

0xd693,	// (0x000490c8) cell_dialer_keypad_pane_ParamLimits

0xd693,	// (0x000490c8) cell_dialer_keypad_pane

0xae75,	// (0x000468aa) cell_dialer_command_1_pane_ParamLimits

0xae75,	// (0x000468aa) cell_dialer_command_1_pane

0xd6aa,	// (0x000490df) cell_dialer_command_2_pane_ParamLimits

0xd6aa,	// (0x000490df) cell_dialer_command_2_pane

0xae75,	// (0x000468aa) bg_button_pane_cp02_ParamLimits

0xae75,	// (0x000468aa) bg_button_pane_cp02

0xaece,	// (0x00046903) cell_dialer_keypad_pane_g1_ParamLimits

0xaece,	// (0x00046903) cell_dialer_keypad_pane_g1

0xae75,	// (0x000468aa) bg_button_pane_cp03_ParamLimits

0xae75,	// (0x000468aa) bg_button_pane_cp03

0xaece,	// (0x00046903) cell_dialer_command_1_pane_g1_ParamLimits

0xaece,	// (0x00046903) cell_dialer_command_1_pane_g1

0xa79e,	// (0x000461d3) bg_button_pane_cp04

0xb11d,	// (0x00046b52) cell_dialer_command_2_pane_g1

0xa79e,	// (0x000461d3) bg_button_pane_cp06

0xb11d,	// (0x00046b52) dialer_ne_clear_pane_g1

0xba18,	// (0x0004744d) navi_pane_g2

0xba46,	// (0x0004747b) navi_pane_g3

0x0002,

0xf339,	// (0x0004ad6e) navi_pane_g

0xbad5,	// (0x0004750a) navi_pane_mv_g2

0xbafc,	// (0x00047531) navi_pane_mv_g5

0x4a2b,	// (0x00040460) navi_pane_mv_t1

0xaf40,	// (0x00046975) main_clock2_pane

0xacc2,	// (0x000466f7) main_clock2_list_pane_ParamLimits

0xacc2,	// (0x000466f7) main_clock2_list_pane

0x613e,	// (0x00041b73) main_clock2_pane_t1_ParamLimits

0x613e,	// (0x00041b73) main_clock2_pane_t1

0x616c,	// (0x00041ba1) main_clock2_pane_t2_ParamLimits

0x616c,	// (0x00041ba1) main_clock2_pane_t2

0x0004,

0xf729,	// (0x0004b15e) main_clock2_pane_t_ParamLimits

0xf729,	// (0x0004b15e) main_clock2_pane_t

0x61d1,	// (0x00041c06) popup_clock_analogue_window_cp03_ParamLimits

0x61d1,	// (0x00041c06) popup_clock_analogue_window_cp03

0x61ef,	// (0x00041c24) popup_clock_digital_window_cp02_ParamLimits

0x61ef,	// (0x00041c24) popup_clock_digital_window_cp02

0x6264,	// (0x00041c99) main_clock2_list_single_pane_ParamLimits

0x6264,	// (0x00041c99) main_clock2_list_single_pane

0xb0fb,	// (0x00046b30) list_highlight_pane_cp05

0xd6ed,	// (0x00049122) main_clock2_list_single_pane_t1

0x35cc,	// (0x0003f001) popup_toolbar_window_cp04_ParamLimits

0xaedc,	// (0x00046911) camera2_autofocus_pane_g2_ParamLimits

0xaedc,	// (0x00046911) camera2_autofocus_pane_g2

0xaedc,	// (0x00046911) camera2_autofocus_pane_g3_ParamLimits

0xaedc,	// (0x00046911) camera2_autofocus_pane_g3

0xaedc,	// (0x00046911) camera2_autofocus_pane_g4_ParamLimits

0xaedc,	// (0x00046911) camera2_autofocus_pane_g4

0xaedc,	// (0x00046911) camera2_autofocus_pane_g5_ParamLimits

0xaedc,	// (0x00046911) camera2_autofocus_pane_g5

0x0004,

0xf66d,	// (0x0004b0a2) camera2_autofocus_pane_g_ParamLimits

0xf66d,	// (0x0004b0a2) camera2_autofocus_pane_g

0x5a99,	// (0x000414ce) camera2_autofocus_pane_cp_g2

0x5aa1,	// (0x000414d6) camera2_autofocus_pane_cp_g3

0x5aa9,	// (0x000414de) camera2_autofocus_pane_cp_g4

0x5ab1,	// (0x000414e6) camera2_autofocus_pane_cp_g5

0x0004,

0xf6d3,	// (0x0004b108) camera2_autofocus_pane_cp_g

0xa79e,	// (0x000461d3) popup_dialer_spcha_window

0xa79e,	// (0x000461d3) bg_popup_sub_pane_cp07

0xa79e,	// (0x000461d3) list_spcha_pane

0xd6fb,	// (0x00049130) list_single_spcha_pane_ParamLimits

0xd6fb,	// (0x00049130) list_single_spcha_pane

0xa79e,	// (0x000461d3) list_highlight_pane_cp06

0xb658,	// (0x0004708d) list_single_spcha_pane_t1

0xc94d,	// (0x00048382) popup_call2_audio_out_window_g4_ParamLimits

0xc94d,	// (0x00048382) popup_call2_audio_out_window_g4

0xa79e,	// (0x000461d3) main_imed2_pane

0x5563,	// (0x00040f98) popup_imed_adjust2_window

0x5576,	// (0x00040fab) popup_imed_trans_window_ParamLimits

0x5576,	// (0x00040fab) popup_imed_trans_window

0xd126,	// (0x00048b5b) popup_blid_sat_info2_window_t1

0xd134,	// (0x00048b69) popup_blid_sat_info2_window_t2

0x000a,

0xf602,	// (0x0004b037) popup_blid_sat_info2_window_t

0x6319,	// (0x00041d4e) aid_size_cell_colour_35

0x6333,	// (0x00041d68) aid_size_cell_colour_112

0x634a,	// (0x00041d7f) aid_size_cell_effect

0xae75,	// (0x000468aa) bg_tb_trans_pane_cp02

0xb8c4,	// (0x000472f9) heading_imed_pane

0x6364,	// (0x00041d99) listscroll_imed_pane

0xd70d,	// (0x00049142) heading_imed_pane_g1

0xd715,	// (0x0004914a) heading_imed_pane_t1

0xd723,	// (0x00049158) grid_imed_colour_35_pane_ParamLimits

0xd723,	// (0x00049158) grid_imed_colour_35_pane

0x6370,	// (0x00041da5) grid_imed_effect_pane

0xd73b,	// (0x00049170) list_imed_aspect_pane

0x6380,	// (0x00041db5) scroll_pane_cp027_ParamLimits

0x6380,	// (0x00041db5) scroll_pane_cp027

0x638c,	// (0x00041dc1) cell_imed_effect_pane_ParamLimits

0x638c,	// (0x00041dc1) cell_imed_effect_pane

0xd743,	// (0x00049178) cell_imed_colour_pane_ParamLimits

0xd743,	// (0x00049178) cell_imed_colour_pane

0xd785,	// (0x000491ba) cell_imed_colour_pane_g1_ParamLimits

0xd785,	// (0x000491ba) cell_imed_colour_pane_g1

0xd796,	// (0x000491cb) hgihlgiht_grid_pane_cp016_ParamLimits

0xd796,	// (0x000491cb) hgihlgiht_grid_pane_cp016

0x63a4,	// (0x00041dd9) cell_imed_effect_pane_g1

0x63ac,	// (0x00041de1) grid_highlight_pane_cp017

0xd7a7,	// (0x000491dc) list_imed_single_pane_ParamLimits

0xd7a7,	// (0x000491dc) list_imed_single_pane

0xa79e,	// (0x000461d3) list_highlight_pane_cp07

0xd7bc,	// (0x000491f1) list_imed_aspect_pane_comp1_t1

0xbca6,	// (0x000476db) bg_tb_trans_pane_cp05

0xd7de,	// (0x00049213) popup_imed_adjust2_window_g1

0xd805,	// (0x0004923a) popup_imed_adjust2_window_t1

0xd81d,	// (0x00049252) slider_imed_adjust_pane

0xd831,	// (0x00049266) slider_imed_adjust_pane_g1

0xd841,	// (0x00049276) slider_imed_adjust_pane_g2

0xd851,	// (0x00049286) slider_imed_adjust_pane_g3

0xd862,	// (0x00049297) slider_imed_adjust_pane_g4

0x0003,

0xf746,	// (0x0004b17b) slider_imed_adjust_pane_g

0x63b5,	// (0x00041dea) aid_size_cell_clipart2

0x63c1,	// (0x00041df6) grid_imed_clipart_pane

0xd873,	// (0x000492a8) scroll_pane_cp031

0x63cb,	// (0x00041e00) cell_imed_clipart_pane_ParamLimits

0x63cb,	// (0x00041e00) cell_imed_clipart_pane

0x63ee,	// (0x00041e23) cell_imed_clipart_pane_g1

0xa79e,	// (0x000461d3) grid_highlight_pane_cp014

0x6120,	// (0x00041b55) main_clock2_pane_g1_ParamLimits

0x6120,	// (0x00041b55) main_clock2_pane_g1

0x620b,	// (0x00041c40) aid_call2_pane_cp10

0x621d,	// (0x00041c52) aid_call_pane_cp10

0xb977,	// (0x000473ac) popup_clock_analogue_window_cp10_g1

0xb977,	// (0x000473ac) popup_clock_analogue_window_cp10_g2

0x622f,	// (0x00041c64) popup_clock_analogue_window_cp10_g3

0x622f,	// (0x00041c64) popup_clock_analogue_window_cp10_g4

0xb977,	// (0x000473ac) popup_clock_analogue_window_cp10_g5

0x0004,

0xf734,	// (0x0004b169) popup_clock_analogue_window_cp10_g

0x6245,	// (0x00041c7a) popup_clock_analogue_window_cp10_t1

0x6276,	// (0x00041cab) clock_digital_number_pane_cp10_ParamLimits

0x6276,	// (0x00041cab) clock_digital_number_pane_cp10

0x6290,	// (0x00041cc5) clock_digital_number_pane_cp11_ParamLimits

0x6290,	// (0x00041cc5) clock_digital_number_pane_cp11

0x62aa,	// (0x00041cdf) clock_digital_number_pane_cp12_ParamLimits

0x62aa,	// (0x00041cdf) clock_digital_number_pane_cp12

0x62c4,	// (0x00041cf9) clock_digital_number_pane_cp13_ParamLimits

0x62c4,	// (0x00041cf9) clock_digital_number_pane_cp13

0x62de,	// (0x00041d13) clock_digital_separator_pane_cp10_ParamLimits

0x62de,	// (0x00041d13) clock_digital_separator_pane_cp10

0x62f8,	// (0x00041d2d) popup_clock_digital_window_cp02_t1_ParamLimits

0x62f8,	// (0x00041d2d) popup_clock_digital_window_cp02_t1

0xae4b,	// (0x00046880) clock_digital_number_pane_cp10_g1

0xae4b,	// (0x00046880) clock_digital_number_pane_cp10_g2

0x0001,

0xf74f,	// (0x0004b184) clock_digital_number_pane_cp10_g

0xae4b,	// (0x00046880) clock_digital_separator_pane_cp10_g1

0xae4b,	// (0x00046880) clock_digital_separator_pane_g2_cp10

0xbb04,	// (0x00047539) navi_pane_vded_g4

0xbb0d,	// (0x00047542) navi_pane_vded_g5

0xbb16,	// (0x0004754b) navi_pane_vded_t1

0xa79e,	// (0x000461d3) main_vded_pane

0x63f7,	// (0x00041e2c) main_vded_pane_g1

0x6403,	// (0x00041e38) main_vded_pane_g2

0x640d,	// (0x00041e42) main_vded_pane_g3

0x0002,

0xf754,	// (0x0004b189) main_vded_pane_g

0x6417,	// (0x00041e4c) main_vded_pane_t1

0x6425,	// (0x00041e5a) main_vded_pane_t2

0x0001,

0xf75b,	// (0x0004b190) main_vded_pane_t

0x6433,	// (0x00041e68) vded_slider_pane

0x643d,	// (0x00041e72) vded_video_pane

0xd87b,	// (0x000492b0) vded_video_pane_g1

0x6447,	// (0x00041e7c) vded_video_pane_g2

0xb11d,	// (0x00046b52) vded_video_pane_g3

0x0002,

0xf760,	// (0x0004b195) vded_video_pane_g

0xd885,	// (0x000492ba) vded_slider_pane_g1

0xd051,	// (0x00048a86) vded_slider_pane_g2

0xd88e,	// (0x000492c3) vded_slider_pane_g3

0xd897,	// (0x000492cc) vded_slider_pane_g4

0xd8a0,	// (0x000492d5) vded_slider_pane_g5

0x0004,

0xf767,	// (0x0004b19c) vded_slider_pane_g

0x5ffa,	// (0x00041a2f) mup3_rocker_pane_ParamLimits

0x5ffa,	// (0x00041a2f) mup3_rocker_pane

0x6450,	// (0x00041e85) mup3_control_keys_pane_g1

0x6458,	// (0x00041e8d) mup3_control_keys_pane_g2

0x6460,	// (0x00041e95) mup3_control_keys_pane_g3

0x6468,	// (0x00041e9d) mup3_control_keys_pane_g4

0x0003,

0xf772,	// (0x0004b1a7) mup3_control_keys_pane_g

0x2962,	// (0x0003e397) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2962,	// (0x0003e397) popup_toolbar2_fixed_window_cp01

0x6014,	// (0x00041a49) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6014,	// (0x00041a49) popup_toolbar2_fixed_window_cp02

0xc2d6,	// (0x00047d0b) popup_call2_audio_second_window_t4_ParamLimits

0xc2d6,	// (0x00047d0b) popup_call2_audio_second_window_t4

0xc812,	// (0x00048247) popup_call2_audio_first_window_t6_ParamLimits

0xc812,	// (0x00048247) popup_call2_audio_first_window_t6

0xca5e,	// (0x00048493) popup_call2_audio_out_window_t6_ParamLimits

0xca5e,	// (0x00048493) popup_call2_audio_out_window_t6

0xa79e,	// (0x000461d3) main_vitu_pane

0xacc2,	// (0x000466f7) aid_size_cell_itu_ParamLimits

0xacc2,	// (0x000466f7) aid_size_cell_itu

0xacc2,	// (0x000466f7) bg_popup_window_pane_cp08_ParamLimits

0xacc2,	// (0x000466f7) bg_popup_window_pane_cp08

0xacc2,	// (0x000466f7) field_vitu_entry_pane_ParamLimits

0xacc2,	// (0x000466f7) field_vitu_entry_pane

0xacc2,	// (0x000466f7) grid_vitu_function_pane_ParamLimits

0xacc2,	// (0x000466f7) grid_vitu_function_pane

0xacc2,	// (0x000466f7) grid_vitu_itu_pane_ParamLimits

0xacc2,	// (0x000466f7) grid_vitu_itu_pane

0xacc2,	// (0x000466f7) cell_vitu_itu_pane_ParamLimits

0xacc2,	// (0x000466f7) cell_vitu_itu_pane

0xacc2,	// (0x000466f7) cell_vitu_function_pane_ParamLimits

0xacc2,	// (0x000466f7) cell_vitu_function_pane

0xae75,	// (0x000468aa) bg_popup_sub_pane_cp08_ParamLimits

0xae75,	// (0x000468aa) bg_popup_sub_pane_cp08

0xb137,	// (0x00046b6c) field_vitu_entry_pane_t1_ParamLimits

0xb137,	// (0x00046b6c) field_vitu_entry_pane_t1

0xd676,	// (0x000490ab) field_vitu_entry_pane_t2_ParamLimits

0xd676,	// (0x000490ab) field_vitu_entry_pane_t2

0x0001,

0xf77b,	// (0x0004b1b0) field_vitu_entry_pane_t_ParamLimits

0xf77b,	// (0x0004b1b0) field_vitu_entry_pane_t

0xc9bb,	// (0x000483f0) bg_button_pane_cp05_ParamLimits

0xc9bb,	// (0x000483f0) bg_button_pane_cp05

0xd8a9,	// (0x000492de) cell_vitu_itu_pane_g1

0xbcc2,	// (0x000476f7) cell_vitu_itu_pane_t1_ParamLimits

0xbcc2,	// (0x000476f7) cell_vitu_itu_pane_t1

0xbcc2,	// (0x000476f7) cell_vitu_itu_pane_t2_ParamLimits

0xbcc2,	// (0x000476f7) cell_vitu_itu_pane_t2

0x0002,

0xf780,	// (0x0004b1b5) cell_vitu_itu_pane_t_ParamLimits

0xf780,	// (0x0004b1b5) cell_vitu_itu_pane_t

0xa79e,	// (0x000461d3) bg_button_pane_cp07

0xb11d,	// (0x00046b52) cell_vitu_function_pane_g1

0x2acf,	// (0x0003e504) main_calc_pane_g1

0x27bd,	// (0x0003e1f2) aid_visual_content_pane

0xa79e,	// (0x000461d3) main_vradio_pane

0xaedc,	// (0x00046911) main_vradio_pane_g1_ParamLimits

0xaedc,	// (0x00046911) main_vradio_pane_g1

0xaedc,	// (0x00046911) main_vradio_pane_g2_ParamLimits

0xaedc,	// (0x00046911) main_vradio_pane_g2

0x0001,

0xf787,	// (0x0004b1bc) main_vradio_pane_g_ParamLimits

0xf787,	// (0x0004b1bc) main_vradio_pane_g

0xb8d0,	// (0x00047305) main_vradio_pane_t1_ParamLimits

0xb8d0,	// (0x00047305) main_vradio_pane_t1

0xb8d0,	// (0x00047305) main_vradio_pane_t2_ParamLimits

0xb8d0,	// (0x00047305) main_vradio_pane_t2

0xb8d0,	// (0x00047305) main_vradio_pane_t3_ParamLimits

0xb8d0,	// (0x00047305) main_vradio_pane_t3

0x0002,

0xf78c,	// (0x0004b1c1) main_vradio_pane_t_ParamLimits

0xf78c,	// (0x0004b1c1) main_vradio_pane_t

0xacc2,	// (0x000466f7) vradio_rocker_control_pane_ParamLimits

0xacc2,	// (0x000466f7) vradio_rocker_control_pane

0xacc2,	// (0x000466f7) vradio_station_info_pane_ParamLimits

0xacc2,	// (0x000466f7) vradio_station_info_pane

0xae75,	// (0x000468aa) vradio_frequency_info_pane_ParamLimits

0xae75,	// (0x000468aa) vradio_frequency_info_pane

0xb11d,	// (0x00046b52) vradio_station_info_pane_g1

0xbcc2,	// (0x000476f7) vradio_station_info_pane_t1_ParamLimits

0xbcc2,	// (0x000476f7) vradio_station_info_pane_t1

0xb8d0,	// (0x00047305) vradio_station_info_pane_t2_ParamLimits

0xb8d0,	// (0x00047305) vradio_station_info_pane_t2

0x0001,

0xf793,	// (0x0004b1c8) vradio_station_info_pane_t_ParamLimits

0xf793,	// (0x0004b1c8) vradio_station_info_pane_t

0xa79e,	// (0x000461d3) vradio_tuning_pane

0x6478,	// (0x00041ead) vradio_rocker_control_pane_g1

0xd8c5,	// (0x000492fa) vradio_rocker_control_pane_g2

0x6480,	// (0x00041eb5) vradio_rocker_control_pane_g3

0x6488,	// (0x00041ebd) vradio_rocker_control_pane_g4

0x6490,	// (0x00041ec5) vradio_rocker_control_pane_g5

0x0004,

0xf798,	// (0x0004b1cd) vradio_rocker_control_pane_g

0xb11d,	// (0x00046b52) vradio_frequency_info_pane_g1

0xb137,	// (0x00046b6c) vradio_frequency_info_pane_t1_ParamLimits

0xb137,	// (0x00046b6c) vradio_frequency_info_pane_t1

0x6498,	// (0x00041ecd) vradio_tuning_pane_g1

0x64a5,	// (0x00041eda) vradio_tuning_pane_t1

0x2806,	// (0x0003e23b) area_side_right_pane_ParamLimits

0x2806,	// (0x0003e23b) area_side_right_pane

0xce88,	// (0x000488bd) status_small_pane_g1

0xce90,	// (0x000488c5) status_small_pane_g2

0xce99,	// (0x000488ce) status_small_pane_g3

0xcea2,	// (0x000488d7) status_small_pane_g4

0x0003,

0xf564,	// (0x0004af99) status_small_pane_g

0xceab,	// (0x000488e0) status_small_pane_t1

0xa79e,	// (0x000461d3) main_video3_pane

0xd8cd,	// (0x00049302) cams_zoom_vslider_pane

0xd8d5,	// (0x0004930a) image3_wide_pane_ParamLimits

0xd8d5,	// (0x0004930a) image3_wide_pane

0xd8ef,	// (0x00049324) image3_wide_small_pane

0xd8fb,	// (0x00049330) main_video3_pane_g1_ParamLimits

0xd8fb,	// (0x00049330) main_video3_pane_g1

0xd917,	// (0x0004934c) main_video3_pane_g2_ParamLimits

0xd917,	// (0x0004934c) main_video3_pane_g2

0x0001,

0xf7a3,	// (0x0004b1d8) main_video3_pane_g_ParamLimits

0xf7a3,	// (0x0004b1d8) main_video3_pane_g

0xd933,	// (0x00049368) main_video3_pane_t1_ParamLimits

0xd933,	// (0x00049368) main_video3_pane_t1

0xd95e,	// (0x00049393) main_video3_pane_t2_ParamLimits

0xd95e,	// (0x00049393) main_video3_pane_t2

0xd989,	// (0x000493be) main_video3_pane_t3_ParamLimits

0xd989,	// (0x000493be) main_video3_pane_t3

0x0002,

0xf7a8,	// (0x0004b1dd) main_video3_pane_t_ParamLimits

0xf7a8,	// (0x0004b1dd) main_video3_pane_t

0xd9b6,	// (0x000493eb) cams_zoom_vslider_pane_g1

0xd9bf,	// (0x000493f4) cams_zoom_vslider_pane_g2

0x0001,

0xf7af,	// (0x0004b1e4) cams_zoom_vslider_pane_g

0xd9c7,	// (0x000493fc) small_slider_vertical_pane

0xb11d,	// (0x00046b52) small_slider_vertical_pane_g1

0xb11d,	// (0x00046b52) small_slider_vertical_pane_g2

0xd9cf,	// (0x00049404) small_slider_vertical_pane_g3

0x0002,

0xf7b4,	// (0x0004b1e9) small_slider_vertical_pane_g

0xa79e,	// (0x000461d3) main_hwr_training_pane

0xd9d8,	// (0x0004940d) hwr_training_instruct_pane_ParamLimits

0xd9d8,	// (0x0004940d) hwr_training_instruct_pane

0x64b4,	// (0x00041ee9) hwr_training_navi_pane_ParamLimits

0x64b4,	// (0x00041ee9) hwr_training_navi_pane

0x64ce,	// (0x00041f03) hwr_training_write_pane_ParamLimits

0x64ce,	// (0x00041f03) hwr_training_write_pane

0xa79e,	// (0x000461d3) bg_frame_shadow_pane

0xda0f,	// (0x00049444) hwr_training_write_pane_g1

0xda17,	// (0x0004944c) hwr_training_write_pane_g2

0xda1f,	// (0x00049454) hwr_training_write_pane_g3

0xda27,	// (0x0004945c) hwr_training_write_pane_g4

0xda2f,	// (0x00049464) hwr_training_write_pane_g5

0xda37,	// (0x0004946c) hwr_training_write_pane_g6

0xda3f,	// (0x00049474) hwr_training_write_pane_g7

0x0006,

0xf7bb,	// (0x0004b1f0) hwr_training_write_pane_g

0x6506,	// (0x00041f3b) hwr_training_navi_pane_g1_ParamLimits

0x6506,	// (0x00041f3b) hwr_training_navi_pane_g1

0x6518,	// (0x00041f4d) hwr_training_navi_pane_g2_ParamLimits

0x6518,	// (0x00041f4d) hwr_training_navi_pane_g2

0x652a,	// (0x00041f5f) hwr_training_navi_pane_g3_ParamLimits

0x652a,	// (0x00041f5f) hwr_training_navi_pane_g3

0x653a,	// (0x00041f6f) hwr_training_navi_pane_g4_ParamLimits

0x653a,	// (0x00041f6f) hwr_training_navi_pane_g4

0x0004,

0xf7ca,	// (0x0004b1ff) hwr_training_navi_pane_g_ParamLimits

0xf7ca,	// (0x0004b1ff) hwr_training_navi_pane_g

0x6554,	// (0x00041f89) hwr_training_navi_pane_t1

0x6562,	// (0x00041f97) list_single_hwr_training_instruct_pane_ParamLimits

0x6562,	// (0x00041f97) list_single_hwr_training_instruct_pane

0xda47,	// (0x0004947c) list_single_hwr_training_instruct_pane_t1

0xd227,	// (0x00048c5c) bg_frame_shadow_pane_g1

0xda56,	// (0x0004948b) bg_frame_shadow_pane_g2

0xda5e,	// (0x00049493) bg_frame_shadow_pane_g3

0xda66,	// (0x0004949b) bg_frame_shadow_pane_g4

0xda6e,	// (0x000494a3) bg_frame_shadow_pane_g5

0xda76,	// (0x000494ab) bg_frame_shadow_pane_g6

0xda7e,	// (0x000494b3) bg_frame_shadow_pane_g7

0xafef,	// (0x00046a24) bg_frame_shadow_pane_g8

0x0007,

0xf7d5,	// (0x0004b20a) bg_frame_shadow_pane_g

0xa79e,	// (0x000461d3) main_video_tele_dialer_pane

0x658b,	// (0x00041fc0) aid_size_cell_video_keypad_ParamLimits

0x658b,	// (0x00041fc0) aid_size_cell_video_keypad

0x659b,	// (0x00041fd0) grid_video_dialer_keypad_pane_ParamLimits

0x659b,	// (0x00041fd0) grid_video_dialer_keypad_pane

0x65cf,	// (0x00042004) video_down_pane_cp_ParamLimits

0x65cf,	// (0x00042004) video_down_pane_cp

0x65f9,	// (0x0004202e) cell_video_dialer_keypad_pane_ParamLimits

0x65f9,	// (0x0004202e) cell_video_dialer_keypad_pane

0xda86,	// (0x000494bb) bg_button_pane_cp08_ParamLimits

0xda86,	// (0x000494bb) bg_button_pane_cp08

0x660e,	// (0x00042043) cell_video_dialer_keypad_pane_g1_ParamLimits

0x660e,	// (0x00042043) cell_video_dialer_keypad_pane_g1

0x5fee,	// (0x00041a23) mup3_rocker2_pane_ParamLimits

0x5fee,	// (0x00041a23) mup3_rocker2_pane

0xb11d,	// (0x00046b52) mup3_rocker2_pane_g1

0x54d7,	// (0x00040f0c) main_dialer2_pane

0xa79e,	// (0x000461d3) main_mp4_pane

0x6666,	// (0x0004209b) main_mp4_pane_g1_ParamLimits

0x6666,	// (0x0004209b) main_mp4_pane_g1

0x6674,	// (0x000420a9) main_mp4_pane_g2_ParamLimits

0x6674,	// (0x000420a9) main_mp4_pane_g2

0x6682,	// (0x000420b7) main_mp4_pane_g3_ParamLimits

0x6682,	// (0x000420b7) main_mp4_pane_g3

0x66c7,	// (0x000420fc) main_mp4_pane_g4_ParamLimits

0x66c7,	// (0x000420fc) main_mp4_pane_g4

0x66f5,	// (0x0004212a) main_mp4_pane_g5_ParamLimits

0x66f5,	// (0x0004212a) main_mp4_pane_g5

0x0007,

0xf7f5,	// (0x0004b22a) main_mp4_pane_g_ParamLimits

0xf7f5,	// (0x0004b22a) main_mp4_pane_g

0x6769,	// (0x0004219e) main_mp4_pane_t1_ParamLimits

0x6769,	// (0x0004219e) main_mp4_pane_t1

0x67c5,	// (0x000421fa) main_mp4_pane_t2_ParamLimits

0x67c5,	// (0x000421fa) main_mp4_pane_t2

0xda92,	// (0x000494c7) main_mp4_pane_t3_ParamLimits

0xda92,	// (0x000494c7) main_mp4_pane_t3

0x6817,	// (0x0004224c) main_mp4_pane_t4_ParamLimits

0x6817,	// (0x0004224c) main_mp4_pane_t4

0x0003,

0xf806,	// (0x0004b23b) main_mp4_pane_t_ParamLimits

0xf806,	// (0x0004b23b) main_mp4_pane_t

0x685b,	// (0x00042290) mp4_progress_pane_ParamLimits

0x685b,	// (0x00042290) mp4_progress_pane

0x68a5,	// (0x000422da) mp4_rocker_pane_ParamLimits

0x68a5,	// (0x000422da) mp4_rocker_pane

0xdac0,	// (0x000494f5) mp4_progress_pane_t1

0xdad9,	// (0x0004950e) mp4_progress_pane_t2

0x0001,

0xf80f,	// (0x0004b244) mp4_progress_pane_t

0xdaf2,	// (0x00049527) mup_progress_pane_cp04

0xb11d,	// (0x00046b52) mp4_rocker_pane_g1

0x68c5,	// (0x000422fa) aid_cell_size_keypad2_ParamLimits

0x68c5,	// (0x000422fa) aid_cell_size_keypad2

0x68d5,	// (0x0004230a) dialer2_ne_pane_ParamLimits

0x68d5,	// (0x0004230a) dialer2_ne_pane

0x68e3,	// (0x00042318) grid_dialer2_keypad_pane_ParamLimits

0x68e3,	// (0x00042318) grid_dialer2_keypad_pane

0xd589,	// (0x00048fbe) bg_popup_call_pane_cp07_ParamLimits

0xd589,	// (0x00048fbe) bg_popup_call_pane_cp07

0x68f3,	// (0x00042328) dialer2_ne_pane_t1_ParamLimits

0x68f3,	// (0x00042328) dialer2_ne_pane_t1

0x6918,	// (0x0004234d) cell_dialer2_keypad_pane_ParamLimits

0x6918,	// (0x0004234d) cell_dialer2_keypad_pane

0xdb17,	// (0x0004954c) bg_button_pane_pane_cp04_ParamLimits

0xdb17,	// (0x0004954c) bg_button_pane_pane_cp04

0x692d,	// (0x00042362) cell_dialer2_keypad_pane_g1_ParamLimits

0x692d,	// (0x00042362) cell_dialer2_keypad_pane_g1

0x348e,	// (0x0003eec3) aid_placing_vt_set_content_ParamLimits

0x348e,	// (0x0003eec3) aid_placing_vt_set_content

0x34ba,	// (0x0003eeef) aid_placing_vt_set_title_ParamLimits

0x34ba,	// (0x0003eeef) aid_placing_vt_set_title

0xa79e,	// (0x000461d3) main_image3_pane

0x69c7,	// (0x000423fc) area_side_right_pane_cp01_ParamLimits

0x69c7,	// (0x000423fc) area_side_right_pane_cp01

0xaeea,	// (0x0004691f) main_image3_pane_g1_ParamLimits

0xaeea,	// (0x0004691f) main_image3_pane_g1

0x69f4,	// (0x00042429) main_image3_pane_g2_ParamLimits

0x69f4,	// (0x00042429) main_image3_pane_g2

0x6a0d,	// (0x00042442) main_image3_pane_g3_ParamLimits

0x6a0d,	// (0x00042442) main_image3_pane_g3

0x6a26,	// (0x0004245b) main_image3_pane_g4_ParamLimits

0x6a26,	// (0x0004245b) main_image3_pane_g4

0x0003,

0xf81e,	// (0x0004b253) main_image3_pane_g_ParamLimits

0xf81e,	// (0x0004b253) main_image3_pane_g

0x6a3f,	// (0x00042474) main_image3_pane_t1_ParamLimits

0x6a3f,	// (0x00042474) main_image3_pane_t1

0x6a64,	// (0x00042499) main_image3_pane_t2_ParamLimits

0x6a64,	// (0x00042499) main_image3_pane_t2

0x6a83,	// (0x000424b8) main_image3_pane_t3_ParamLimits

0x6a83,	// (0x000424b8) main_image3_pane_t3

0x0003,

0xf827,	// (0x0004b25c) main_image3_pane_t_ParamLimits

0xf827,	// (0x0004b25c) main_image3_pane_t

0xacc2,	// (0x000466f7) grid_sctrl_middle_pane_cp01_ParamLimits

0xacc2,	// (0x000466f7) grid_sctrl_middle_pane_cp01

0x6ae4,	// (0x00042519) cell_sctrl_middle_pane_cp01_ParamLimits

0x6ae4,	// (0x00042519) cell_sctrl_middle_pane_cp01

0x6af5,	// (0x0004252a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6af5,	// (0x0004252a) cell_sctrl_middle_pane_cp01_g1

0xa79e,	// (0x000461d3) main_call4_pane

0x6b02,	// (0x00042537) aid_size_button_call4_ParamLimits

0x6b02,	// (0x00042537) aid_size_button_call4

0x6b38,	// (0x0004256d) call4_windows_pane_ParamLimits

0x6b38,	// (0x0004256d) call4_windows_pane

0x6b4d,	// (0x00042582) grid_call4_button_pane_ParamLimits

0x6b4d,	// (0x00042582) grid_call4_button_pane

0x6b7b,	// (0x000425b0) call4_windows_conf_pane

0x6b90,	// (0x000425c5) popup_call4_audio_first_window_ParamLimits

0x6b90,	// (0x000425c5) popup_call4_audio_first_window

0x6be0,	// (0x00042615) popup_call4_audio_second_window_ParamLimits

0x6be0,	// (0x00042615) popup_call4_audio_second_window

0x6bf9,	// (0x0004262e) popup_call4_audio_wait_window_ParamLimits

0x6bf9,	// (0x0004262e) popup_call4_audio_wait_window

0x6c07,	// (0x0004263c) cell_call4_button_pane_ParamLimits

0x6c07,	// (0x0004263c) cell_call4_button_pane

0x6c2a,	// (0x0004265f) bg_button_pane_cp09_ParamLimits

0x6c2a,	// (0x0004265f) bg_button_pane_cp09

0x6c36,	// (0x0004266b) cell_call4_button_pane_g1_ParamLimits

0x6c36,	// (0x0004266b) cell_call4_button_pane_g1

0x6c43,	// (0x00042678) cell_call4_button_pane_t1_ParamLimits

0x6c43,	// (0x00042678) cell_call4_button_pane_t1

0xdb2b,	// (0x00049560) popup_call4_audio_conf_window_ParamLimits

0xdb2b,	// (0x00049560) popup_call4_audio_conf_window

0x6021,	// (0x00041a56) mup3_progress_pane_t1_ParamLimits

0x6040,	// (0x00041a75) mup3_progress_pane_t2_ParamLimits

0xd59f,	// (0x00048fd4) mup3_progress_pane_t3_ParamLimits

0xf6fc,	// (0x0004b131) mup3_progress_pane_t_ParamLimits

0xd5bc,	// (0x00048ff1) mup_progress_pane_cp03_ParamLimits

0x6470,	// (0x00041ea5) mup3_control_keys_pane_g4_copy1

0x6889,	// (0x000422be) mp4_rocker2_pane_ParamLimits

0x6889,	// (0x000422be) mp4_rocker2_pane

0xdb3f,	// (0x00049574) mp4_rocker2_pane_g1

0xdb47,	// (0x0004957c) mp4_rocker2_pane_g2

0x6c87,	// (0x000426bc) mp4_rocker2_pane_g3

0x6c8f,	// (0x000426c4) mp4_rocker2_pane_g4

0x6c97,	// (0x000426cc) mp4_rocker2_pane_g5

0x0004,

0xf830,	// (0x0004b265) mp4_rocker2_pane_g

0xa79e,	// (0x000461d3) main_camera4_pane

0xa79e,	// (0x000461d3) main_video4_pane

0x65ab,	// (0x00041fe0) main_video_tele_dialer_pane_t1_ParamLimits

0x65ab,	// (0x00041fe0) main_video_tele_dialer_pane_t1

0x65bd,	// (0x00041ff2) main_video_tele_dialer_pane_t2_ParamLimits

0x65bd,	// (0x00041ff2) main_video_tele_dialer_pane_t2

0x0001,

0xf7e6,	// (0x0004b21b) main_video_tele_dialer_pane_t_ParamLimits

0xf7e6,	// (0x0004b21b) main_video_tele_dialer_pane_t

0x6cb7,	// (0x000426ec) cam4_autofocus_pane_ParamLimits

0x6cb7,	// (0x000426ec) cam4_autofocus_pane

0x6cd1,	// (0x00042706) cam4_image_uncrop_pane_ParamLimits

0x6cd1,	// (0x00042706) cam4_image_uncrop_pane

0x6ce8,	// (0x0004271d) cam4_indicators_pane_ParamLimits

0x6ce8,	// (0x0004271d) cam4_indicators_pane

0x6d04,	// (0x00042739) main_camera4_pane_g1_ParamLimits

0x6d04,	// (0x00042739) main_camera4_pane_g1

0x6d10,	// (0x00042745) main_camera4_pane_g2_ParamLimits

0x6d10,	// (0x00042745) main_camera4_pane_g2

0x6d10,	// (0x00042745) main_camera4_pane_g3_ParamLimits

0x6d10,	// (0x00042745) main_camera4_pane_g3

0x6d1c,	// (0x00042751) main_camera4_pane_g4_ParamLimits

0x6d1c,	// (0x00042751) main_camera4_pane_g4

0x6d28,	// (0x0004275d) main_camera4_pane_g5_ParamLimits

0x6d28,	// (0x0004275d) main_camera4_pane_g5

0x0005,

0xf83b,	// (0x0004b270) main_camera4_pane_g_ParamLimits

0xf83b,	// (0x0004b270) main_camera4_pane_g

0x6d42,	// (0x00042777) main_camera4_pane_t1_ParamLimits

0x6d42,	// (0x00042777) main_camera4_pane_t1

0xaece,	// (0x00046903) bg_tb_trans_pane_cp06

0x6d92,	// (0x000427c7) cam4_indicators_pane_g1

0x6da3,	// (0x000427d8) cam4_indicators_pane_g2

0x0002,

0xf856,	// (0x0004b28b) cam4_indicators_pane_g

0x6dbb,	// (0x000427f0) cam4_indicators_pane_t1

0x6de5,	// (0x0004281a) main_video4_pane_g1_ParamLimits

0x6de5,	// (0x0004281a) main_video4_pane_g1

0x6df1,	// (0x00042826) main_video4_pane_g2_ParamLimits

0x6df1,	// (0x00042826) main_video4_pane_g2

0x6dfd,	// (0x00042832) main_video4_pane_g3_ParamLimits

0x6dfd,	// (0x00042832) main_video4_pane_g3

0x6e09,	// (0x0004283e) main_video4_pane_g4_ParamLimits

0x6e09,	// (0x0004283e) main_video4_pane_g4

0x0004,

0xf85d,	// (0x0004b292) main_video4_pane_g_ParamLimits

0xf85d,	// (0x0004b292) main_video4_pane_g

0x6e29,	// (0x0004285e) vid4_indicators_pane_ParamLimits

0x6e29,	// (0x0004285e) vid4_indicators_pane

0x6e48,	// (0x0004287d) video4_image_uncrop_cif_pane_ParamLimits

0x6e48,	// (0x0004287d) video4_image_uncrop_cif_pane

0x6e57,	// (0x0004288c) video4_image_uncrop_nhd_pane_ParamLimits

0x6e57,	// (0x0004288c) video4_image_uncrop_nhd_pane

0x6cd1,	// (0x00042706) video4_image_uncrop_vga_pane_ParamLimits

0x6cd1,	// (0x00042706) video4_image_uncrop_vga_pane

0xae75,	// (0x000468aa) bg_tb_trans_pane_cp07

0x6e6c,	// (0x000428a1) vid4_indicators_pane_g1

0x6e80,	// (0x000428b5) vid4_indicators_pane_g2

0x6e94,	// (0x000428c9) vid4_indicators_pane_g3

0x0004,

0xf868,	// (0x0004b29d) vid4_indicators_pane_g

0x6ec1,	// (0x000428f6) vid4_indicators_pane_t1

0x6ed8,	// (0x0004290d) cam4_autofocus_pane_g1

0x6ee0,	// (0x00042915) cam4_autofocus_pane_g2

0x6ee8,	// (0x0004291d) cam4_autofocus_pane_g3

0x0002,

0xf873,	// (0x0004b2a8) cam4_autofocus_pane_g

0x6ef0,	// (0x00042925) cam4_autofocus_pane_g3_copy1

0x65dd,	// (0x00042012) video_down_pane_cp_t1

0x65eb,	// (0x00042020) video_down_pane_cp_t2

0x0001,

0xf7eb,	// (0x0004b220) video_down_pane_cp_t

0xacc2,	// (0x000466f7) popup_vitu2_window_ParamLimits

0xacc2,	// (0x000466f7) popup_vitu2_window

0x6ef8,	// (0x0004292d) aid_size_cell2_itu2_ParamLimits

0x6ef8,	// (0x0004292d) aid_size_cell2_itu2

0x6f1a,	// (0x0004294f) aid_size_cell_itu2_ParamLimits

0x6f1a,	// (0x0004294f) aid_size_cell_itu2

0xd589,	// (0x00048fbe) bg_popup_window_pane_cp09_ParamLimits

0xd589,	// (0x00048fbe) bg_popup_window_pane_cp09

0x6f5e,	// (0x00042993) field_vitu2_entry_pane_ParamLimits

0x6f5e,	// (0x00042993) field_vitu2_entry_pane

0x6f7e,	// (0x000429b3) grid_vitu2_function_pane_ParamLimits

0x6f7e,	// (0x000429b3) grid_vitu2_function_pane

0x6fc2,	// (0x000429f7) grid_vitu2_itu_pane_ParamLimits

0x6fc2,	// (0x000429f7) grid_vitu2_itu_pane

0x703a,	// (0x00042a6f) cell_vitu2_itu_pane_ParamLimits

0x703a,	// (0x00042a6f) cell_vitu2_itu_pane

0x7053,	// (0x00042a88) cell_vitu2_function_pane_ParamLimits

0x7053,	// (0x00042a88) cell_vitu2_function_pane

0xdb4f,	// (0x00049584) bg_popup_call_pane_cp08_ParamLimits

0xdb4f,	// (0x00049584) bg_popup_call_pane_cp08

0xdb66,	// (0x0004959b) field_vitu2_entry_pane_g1

0xdb72,	// (0x000495a7) field_vitu2_entry_pane_g2

0x0002,

0xf87a,	// (0x0004b2af) field_vitu2_entry_pane_g

0x1bc4,	// (0x0003d5f9) field_vitu2_entry_pane_t1_ParamLimits

0x1bc4,	// (0x0003d5f9) field_vitu2_entry_pane_t1

0x1bf9,	// (0x0003d62e) field_vitu2_entry_pane_t2_ParamLimits

0x1bf9,	// (0x0003d62e) field_vitu2_entry_pane_t2

0x0001,

0xf881,	// (0x0004b2b6) field_vitu2_entry_pane_t_ParamLimits

0xf881,	// (0x0004b2b6) field_vitu2_entry_pane_t

0x5801,	// (0x00041236) bg_button_pane_cp010_ParamLimits

0x5801,	// (0x00041236) bg_button_pane_cp010

0x7094,	// (0x00042ac9) cell_vitu2_itu_pane_g1

0x70ba,	// (0x00042aef) cell_vitu2_itu_pane_t1_ParamLimits

0x70ba,	// (0x00042aef) cell_vitu2_itu_pane_t1

0x1c16,	// (0x0003d64b) cell_vitu2_itu_pane_t2_ParamLimits

0x1c16,	// (0x0003d64b) cell_vitu2_itu_pane_t2

0x0002,

0xf88b,	// (0x0004b2c0) cell_vitu2_itu_pane_t_ParamLimits

0xf88b,	// (0x0004b2c0) cell_vitu2_itu_pane_t

0xae75,	// (0x000468aa) bg_button_pane_cp011

0x7106,	// (0x00042b3b) cell_vitu2_function_pane_g1

0xa79e,	// (0x000461d3) main_myfav_hc_pane

0x6ac5,	// (0x000424fa) popup_image3_note_pane_ParamLimits

0x6ac5,	// (0x000424fa) popup_image3_note_pane

0x6ad3,	// (0x00042508) popup_image3_tool_bar_pane_ParamLimits

0x6ad3,	// (0x00042508) popup_image3_tool_bar_pane

0x1c8c,	// (0x0003d6c1) cell_vitu2_itu_pane_t3_ParamLimits

0x1c8c,	// (0x0003d6c1) cell_vitu2_itu_pane_t3

0xa79e,	// (0x000461d3) bg_popup_trans_pane

0xdb86,	// (0x000495bb) grid_image3_tool_bar_pane

0xdb90,	// (0x000495c5) bg_popup_trans_pane_g1

0xb342,	// (0x00046d77) bg_popup_trans_pane_g2

0xdb98,	// (0x000495cd) bg_popup_trans_pane_g3

0xdba0,	// (0x000495d5) bg_popup_trans_pane_g4

0xdba8,	// (0x000495dd) bg_popup_trans_pane_g5

0xdbb0,	// (0x000495e5) bg_popup_trans_pane_g6

0xdbb8,	// (0x000495ed) bg_popup_trans_pane_g7

0xdbc0,	// (0x000495f5) bg_popup_trans_pane_g8

0xb322,	// (0x00046d57) bg_popup_trans_pane_g9

0x0008,

0xf892,	// (0x0004b2c7) bg_popup_trans_pane_g

0xdbc8,	// (0x000495fd) cell_image3_tool_bar_pane_ParamLimits

0xdbc8,	// (0x000495fd) cell_image3_tool_bar_pane

0xb11d,	// (0x00046b52) cell_image3_tool_bar_pane_g1

0xa79e,	// (0x000461d3) bg_popup_trans_pane_cp1

0xdbdc,	// (0x00049611) popup_image3_note_pane_t1

0xdbea,	// (0x0004961f) popup_image3_note_pane_t2

0xdbf8,	// (0x0004962d) popup_image3_note_pane_t3

0x0002,

0xf8a5,	// (0x0004b2da) popup_image3_note_pane_t

0xdc06,	// (0x0004963b) popup_image3_note_pane_t3_copy1

0x711a,	// (0x00042b4f) bg_myfav_hc_instruction_pane_ParamLimits

0x711a,	// (0x00042b4f) bg_myfav_hc_instruction_pane

0x7132,	// (0x00042b67) cell_myfav_contact_pane_ParamLimits

0x7132,	// (0x00042b67) cell_myfav_contact_pane

0x714c,	// (0x00042b81) cell_myfav_contact_pane_cp1_ParamLimits

0x714c,	// (0x00042b81) cell_myfav_contact_pane_cp1

0x7164,	// (0x00042b99) cell_myfav_contact_pane_cp2_ParamLimits

0x7164,	// (0x00042b99) cell_myfav_contact_pane_cp2

0x717c,	// (0x00042bb1) cell_myfav_contact_pane_cp3_ParamLimits

0x717c,	// (0x00042bb1) cell_myfav_contact_pane_cp3

0x7193,	// (0x00042bc8) cell_myfav_contact_pane_cp4_ParamLimits

0x7193,	// (0x00042bc8) cell_myfav_contact_pane_cp4

0x71a9,	// (0x00042bde) cell_myfav_contact_pane_cp5_ParamLimits

0x71a9,	// (0x00042bde) cell_myfav_contact_pane_cp5

0x71bd,	// (0x00042bf2) cell_myfav_contact_pane_cp6_ParamLimits

0x71bd,	// (0x00042bf2) cell_myfav_contact_pane_cp6

0x71d1,	// (0x00042c06) cell_myfav_contact_pane_cp7_ParamLimits

0x71d1,	// (0x00042c06) cell_myfav_contact_pane_cp7

0xdc14,	// (0x00049649) listscroll_gen_pane_cp05

0x71e9,	// (0x00042c1e) main_myfav_hc_pane_g1_ParamLimits

0x71e9,	// (0x00042c1e) main_myfav_hc_pane_g1

0x71ff,	// (0x00042c34) main_myfav_hc_pane_g2_ParamLimits

0x71ff,	// (0x00042c34) main_myfav_hc_pane_g2

0x0002,

0xf8ac,	// (0x0004b2e1) main_myfav_hc_pane_g_ParamLimits

0xf8ac,	// (0x0004b2e1) main_myfav_hc_pane_g

0x722f,	// (0x00042c64) main_myfav_hc_pane_t1_ParamLimits

0x722f,	// (0x00042c64) main_myfav_hc_pane_t1

0xdc1d,	// (0x00049652) main_myfav_hc_pane_t2_ParamLimits

0xdc1d,	// (0x00049652) main_myfav_hc_pane_t2

0xdc2f,	// (0x00049664) main_myfav_hc_pane_t3_ParamLimits

0xdc2f,	// (0x00049664) main_myfav_hc_pane_t3

0x7246,	// (0x00042c7b) main_myfav_hc_pane_t4_ParamLimits

0x7246,	// (0x00042c7b) main_myfav_hc_pane_t4

0x0004,

0xf8b3,	// (0x0004b2e8) main_myfav_hc_pane_t_ParamLimits

0xf8b3,	// (0x0004b2e8) main_myfav_hc_pane_t

0xb11d,	// (0x00046b52) bg_myfav_hc_instruction_pane_g1

0xdc41,	// (0x00049676) cell_myfav_contact_pane_g1_ParamLimits

0xdc41,	// (0x00049676) cell_myfav_contact_pane_g1

0xdc41,	// (0x00049676) cell_myfav_contact_pane_g2_ParamLimits

0xdc41,	// (0x00049676) cell_myfav_contact_pane_g2

0xdc4d,	// (0x00049682) cell_myfav_contact_pane_g3_ParamLimits

0xdc4d,	// (0x00049682) cell_myfav_contact_pane_g3

0xaedc,	// (0x00046911) cell_myfav_contact_pane_g4_ParamLimits

0xaedc,	// (0x00046911) cell_myfav_contact_pane_g4

0xdc5a,	// (0x0004968f) cell_myfav_contact_pane_g5_ParamLimits

0xdc5a,	// (0x0004968f) cell_myfav_contact_pane_g5

0x0004,

0xf8be,	// (0x0004b2f3) cell_myfav_contact_pane_g_ParamLimits

0xf8be,	// (0x0004b2f3) cell_myfav_contact_pane_g

0x7217,	// (0x00042c4c) main_myfav_hc_pane_g3_ParamLimits

0x7217,	// (0x00042c4c) main_myfav_hc_pane_g3

0x1987,	// (0x0003d3bc) popup_adpt_find_window

0x7270,	// (0x00042ca5) afind_page_pane_ParamLimits

0x7270,	// (0x00042ca5) afind_page_pane

0x727d,	// (0x00042cb2) aid_size_cell_afind_ParamLimits

0x727d,	// (0x00042cb2) aid_size_cell_afind

0x7297,	// (0x00042ccc) bg_popup_sub_pane_cp09_ParamLimits

0x7297,	// (0x00042ccc) bg_popup_sub_pane_cp09

0x72a8,	// (0x00042cdd) find_pane_cp01_ParamLimits

0x72a8,	// (0x00042cdd) find_pane_cp01

0xdc66,	// (0x0004969b) grid_afind_control_pane_ParamLimits

0xdc66,	// (0x0004969b) grid_afind_control_pane

0x72bb,	// (0x00042cf0) grid_afind_pane_ParamLimits

0x72bb,	// (0x00042cf0) grid_afind_pane

0x72d7,	// (0x00042d0c) cell_afind_pane_ParamLimits

0x72d7,	// (0x00042d0c) cell_afind_pane

0xb11d,	// (0x00046b52) afind_page_pane_g1

0x731f,	// (0x00042d54) afind_page_pane_g2

0x7327,	// (0x00042d5c) afind_page_pane_g3

0x0002,

0xf8c9,	// (0x0004b2fe) afind_page_pane_g

0x732f,	// (0x00042d64) afind_page_pane_t1

0xdc8c,	// (0x000496c1) cell_afind_grid_control_pane_ParamLimits

0xdc8c,	// (0x000496c1) cell_afind_grid_control_pane

0xdb17,	// (0x0004954c) bg_button_pane_cp69_ParamLimits

0xdb17,	// (0x0004954c) bg_button_pane_cp69

0x733d,	// (0x00042d72) cell_afind_pane_g1_ParamLimits

0x733d,	// (0x00042d72) cell_afind_pane_g1

0x734a,	// (0x00042d7f) cell_afind_pane_t1_ParamLimits

0x734a,	// (0x00042d7f) cell_afind_pane_t1

0xb127,	// (0x00046b5c) bg_button_pane_cp72

0xdc9b,	// (0x000496d0) cell_afind_grid_control_pane_g1

0x5008,	// (0x00040a3d) aid_image_placing_area_ParamLimits

0x5008,	// (0x00040a3d) aid_image_placing_area

0xaece,	// (0x00046903) field_vitu_entry_pane_g1_ParamLimits

0xaece,	// (0x00046903) field_vitu_entry_pane_g1

0xaece,	// (0x00046903) field_vitu_entry_pane_g2_ParamLimits

0xaece,	// (0x00046903) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0004abf6) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0004abf6) field_vitu_entry_pane_g

0xd8a9,	// (0x000492de) cell_vitu_itu_pane_g1_ParamLimits

0xd676,	// (0x000490ab) cell_vitu_itu_pane_t3_ParamLimits

0xd676,	// (0x000490ab) cell_vitu_itu_pane_t3

0xdac0,	// (0x000494f5) mp4_progress_pane_t1_ParamLimits

0xdad9,	// (0x0004950e) mp4_progress_pane_t2_ParamLimits

0xf80f,	// (0x0004b244) mp4_progress_pane_t_ParamLimits

0xdaf2,	// (0x00049527) mup_progress_pane_cp04_ParamLimits

0x725a,	// (0x00042c8f) main_myfav_hc_pane_t5_ParamLimits

0x725a,	// (0x00042c8f) main_myfav_hc_pane_t5

0x27c9,	// (0x0003e1fe) aid_zoom_text_primary

0x1987,	// (0x0003d3bc) popup_adpt_find_window_ParamLimits

0xae75,	// (0x000468aa) main_cam_set_pane

0x6cf6,	// (0x0004272b) cam4_zoom_pane_ParamLimits

0x6cf6,	// (0x0004272b) cam4_zoom_pane

0x735c,	// (0x00042d91) main_cam_set_pane_g1_ParamLimits

0x735c,	// (0x00042d91) main_cam_set_pane_g1

0x736a,	// (0x00042d9f) main_cam_set_pane_g2_ParamLimits

0x736a,	// (0x00042d9f) main_cam_set_pane_g2

0x0001,

0xf8d0,	// (0x0004b305) main_cam_set_pane_g_ParamLimits

0xf8d0,	// (0x0004b305) main_cam_set_pane_g

0x7376,	// (0x00042dab) main_cam_set_pane_t1_ParamLimits

0x7376,	// (0x00042dab) main_cam_set_pane_t1

0x7392,	// (0x00042dc7) main_cset_listscroll_pane_ParamLimits

0x7392,	// (0x00042dc7) main_cset_listscroll_pane

0x73c4,	// (0x00042df9) main_cset_slider_pane_ParamLimits

0x73c4,	// (0x00042df9) main_cset_slider_pane

0xdcac,	// (0x000496e1) main_cset_list_pane_ParamLimits

0xdcac,	// (0x000496e1) main_cset_list_pane

0xdcbc,	// (0x000496f1) scroll_pane_cp028

0x73e3,	// (0x00042e18) aid_area_touch_slider

0x73ff,	// (0x00042e34) cset_slider_pane

0x7422,	// (0x00042e57) main_cset_slider_pane_g1

0x7437,	// (0x00042e6c) main_cset_slider_pane_g2

0x0011,

0xf8d5,	// (0x0004b30a) main_cset_slider_pane_g

0xdcf5,	// (0x0004972a) main_cset_slider_pane_t1

0x74fd,	// (0x00042f32) main_cset_slider_pane_t2

0x7517,	// (0x00042f4c) main_cset_slider_pane_t3

0x7531,	// (0x00042f66) main_cset_slider_pane_t4

0x754f,	// (0x00042f84) main_cset_slider_pane_t5

0x756d,	// (0x00042fa2) main_cset_slider_pane_t6

0x7584,	// (0x00042fb9) main_cset_slider_pane_t7

0x000e,

0xf8fa,	// (0x0004b32f) main_cset_slider_pane_t

0x7692,	// (0x000430c7) cset_list_set_pane_ParamLimits

0x7692,	// (0x000430c7) cset_list_set_pane

0xdd8f,	// (0x000497c4) aid_position_infowindow_above

0xdd97,	// (0x000497cc) aid_position_infowindow_below

0x1cde,	// (0x0003d713) cset_list_set_pane_g1_ParamLimits

0x1cde,	// (0x0003d713) cset_list_set_pane_g1

0x1cea,	// (0x0003d71f) cset_list_set_pane_g3_ParamLimits

0x1cea,	// (0x0003d71f) cset_list_set_pane_g3

0x0001,

0xf919,	// (0x0004b34e) cset_list_set_pane_g_ParamLimits

0xf919,	// (0x0004b34e) cset_list_set_pane_g

0x1cf9,	// (0x0003d72e) cset_list_set_pane_t1_ParamLimits

0x1cf9,	// (0x0003d72e) cset_list_set_pane_t1

0xae75,	// (0x000468aa) list_highlight_pane_cp021_ParamLimits

0xae75,	// (0x000468aa) list_highlight_pane_cp021

0xbc55,	// (0x0004768a) cset_slider_pane_g1

0xbc67,	// (0x0004769c) cset_slider_pane_g2

0xbc5e,	// (0x00047693) cset_slider_pane_g3

0x0002,

0xf91e,	// (0x0004b353) cset_slider_pane_g

0x76ab,	// (0x000430e0) aid_area_touch_cam4_zoom

0x76b3,	// (0x000430e8) cam4_zoom_cont_pane

0x76bb,	// (0x000430f0) cam4_zoom_pane_g1

0x76c3,	// (0x000430f8) cam4_zoom_pane_g2

0x76cb,	// (0x00043100) cam4_zoom_pane_g3

0x0002,

0xf925,	// (0x0004b35a) cam4_zoom_pane_g

0xd9cf,	// (0x00049404) cam4_zoom_cont_pane_g1

0xe572,	// (0x00049fa7) cam4_zoom_cont_pane_g2

0xe57b,	// (0x00049fb0) cam4_zoom_cont_pane_g3

0x0002,

0xf92c,	// (0x0004b361) cam4_zoom_cont_pane_g

0x6b1c,	// (0x00042551) call4_image_pane_ParamLimits

0x6b1c,	// (0x00042551) call4_image_pane

0x6b7b,	// (0x000425b0) call4_windows_conf_pane_ParamLimits

0x6bbe,	// (0x000425f3) popup_call4_audio_in_window_ParamLimits

0x6bbe,	// (0x000425f3) popup_call4_audio_in_window

0xa79e,	// (0x000461d3) bg_popup_call2_act_pane_cp02

0xdb23,	// (0x00049558) call4_list_conf_pane

0xb11d,	// (0x00046b52) call4_image_pane_g1

0xb11d,	// (0x00046b52) call4_image_pane_g2

0x0001,

0xf39d,	// (0x0004add2) call4_image_pane_g

0xdd9f,	// (0x000497d4) list_single_graphic_popup_conf4_pane_ParamLimits

0xdd9f,	// (0x000497d4) list_single_graphic_popup_conf4_pane

0xa79e,	// (0x000461d3) list_highlight_pane_cp022

0xddb2,	// (0x000497e7) list_single_graphic_popup_conf4_pane_g1

0xb854,	// (0x00047289) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf933,	// (0x0004b368) list_single_graphic_popup_conf4_pane_g

0xddba,	// (0x000497ef) list_single_graphic_popup_conf4_pane_t1

0x361e,	// (0x0003f053) popup_vtel_slider_window_ParamLimits

0x361e,	// (0x0003f053) popup_vtel_slider_window

0xdb05,	// (0x0004953a) dialer2_ne_pane_t2_ParamLimits

0xdb05,	// (0x0004953a) dialer2_ne_pane_t2

0x0001,

0xf814,	// (0x0004b249) dialer2_ne_pane_t_ParamLimits

0xf814,	// (0x0004b249) dialer2_ne_pane_t

0xae75,	// (0x000468aa) bg_popup_sub_pane_cp010_ParamLimits

0xae75,	// (0x000468aa) bg_popup_sub_pane_cp010

0x76d3,	// (0x00043108) popup_vtel_slider_window_g1_ParamLimits

0x76d3,	// (0x00043108) popup_vtel_slider_window_g1

0x76df,	// (0x00043114) popup_vtel_slider_window_g2_ParamLimits

0x76df,	// (0x00043114) popup_vtel_slider_window_g2

0x0003,

0xf938,	// (0x0004b36d) popup_vtel_slider_window_g_ParamLimits

0xf938,	// (0x0004b36d) popup_vtel_slider_window_g

0x7727,	// (0x0004315c) vtel_slider_pane_ParamLimits

0x7727,	// (0x0004315c) vtel_slider_pane

0x7736,	// (0x0004316b) vtel_slider_pane_g1_ParamLimits

0x7736,	// (0x0004316b) vtel_slider_pane_g1

0x7743,	// (0x00043178) vtel_slider_pane_g2_ParamLimits

0x7743,	// (0x00043178) vtel_slider_pane_g2

0x7750,	// (0x00043185) vtel_slider_pane_g3_ParamLimits

0x7750,	// (0x00043185) vtel_slider_pane_g3

0x7736,	// (0x0004316b) vtel_slider_pane_g4_ParamLimits

0x7736,	// (0x0004316b) vtel_slider_pane_g4

0x775d,	// (0x00043192) vtel_slider_pane_g5_ParamLimits

0x775d,	// (0x00043192) vtel_slider_pane_g5

0x0004,

0xf941,	// (0x0004b376) vtel_slider_pane_g_ParamLimits

0xf941,	// (0x0004b376) vtel_slider_pane_g

0xae75,	// (0x000468aa) main_gallery2_pane

0x6f40,	// (0x00042975) aid_size_row_itut2_dropdow_list_ParamLimits

0x6f40,	// (0x00042975) aid_size_row_itut2_dropdow_list

0x6fa0,	// (0x000429d5) grid_vitu2_function_top_pane_ParamLimits

0x6fa0,	// (0x000429d5) grid_vitu2_function_top_pane

0x6ffa,	// (0x00042a2f) popup_vitu2_dropdown_list_window_ParamLimits

0x6ffa,	// (0x00042a2f) popup_vitu2_dropdown_list_window

0x7018,	// (0x00042a4d) popup_vitu2_match_list_window

0x776a,	// (0x0004319f) cell_vitu2_function_top_pane_ParamLimits

0x776a,	// (0x0004319f) cell_vitu2_function_top_pane

0x7784,	// (0x000431b9) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7784,	// (0x000431b9) cell_vitu2_function_top_pane_cp01

0x77a0,	// (0x000431d5) cell_vitu2_function_top_wide_pane_ParamLimits

0x77a0,	// (0x000431d5) cell_vitu2_function_top_wide_pane

0xae75,	// (0x000468aa) bg_button_pane_cp012

0x77be,	// (0x000431f3) cell_vitu2_function_top_pane_g1

0x77d2,	// (0x00043207) bg_button_pane_cp013_ParamLimits

0x77d2,	// (0x00043207) bg_button_pane_cp013

0x77ee,	// (0x00043223) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x77ee,	// (0x00043223) cell_vitu2_function_top_wide_pane_g1

0xacc2,	// (0x000466f7) bg_popup_sub_pane_cp20

0x7806,	// (0x0004323b) list_vitu2_match_list_pane

0xdb90,	// (0x000495c5) bg_popup_sub_pane_cp20_g1

0xdb98,	// (0x000495cd) bg_popup_sub_pane_cp20_g2

0xb342,	// (0x00046d77) bg_popup_sub_pane_cp20_g3

0xdba0,	// (0x000495d5) bg_popup_sub_pane_cp20_g4

0xb322,	// (0x00046d57) bg_popup_sub_pane_cp20_g5

0xddd0,	// (0x00049805) bg_popup_sub_pane_cp20_g6

0xdbb0,	// (0x000495e5) bg_popup_sub_pane_cp20_g7

0xdbb8,	// (0x000495ed) bg_popup_sub_pane_cp20_g8

0xdbc0,	// (0x000495f5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf94c,	// (0x0004b381) bg_popup_sub_pane_cp20_g

0x781e,	// (0x00043253) list_vitu2_match_list_item_pane_ParamLimits

0x781e,	// (0x00043253) list_vitu2_match_list_item_pane

0x7830,	// (0x00043265) list_vitu2_match_list_item_pane_t1

0xa79e,	// (0x000461d3) bg_popup_sub_pane_cp21

0xb0fb,	// (0x00046b30) grid_vitu2_dropdown_list_pane

0x783e,	// (0x00043273) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x783e,	// (0x00043273) cell_vitu2_dropdown_list_char_pane

0x7860,	// (0x00043295) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7860,	// (0x00043295) cell_vitu2_dropdown_list_ctrl_pane

0xddd8,	// (0x0004980d) cell_vitu2_dropdown_list_char_pane_g1

0xdde1,	// (0x00049816) cell_vitu2_dropdown_list_char_pane_g2

0xddea,	// (0x0004981f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95f,	// (0x0004b394) cell_vitu2_dropdown_list_char_pane_g

0x7888,	// (0x000432bd) cell_vitu2_dropdown_list_char_pane_t1

0x7896,	// (0x000432cb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7896,	// (0x000432cb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x78a3,	// (0x000432d8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x78a3,	// (0x000432d8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x78b0,	// (0x000432e5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x78b0,	// (0x000432e5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x78bd,	// (0x000432f2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x78bd,	// (0x000432f2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xaece,	// (0x00046903) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xaece,	// (0x00046903) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf966,	// (0x0004b39b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf966,	// (0x0004b39b) cell_vitu2_dropdown_list_ctrl_pane_g

0x78d9,	// (0x0004330e) aid_size_cell_gallery2_ParamLimits

0x78d9,	// (0x0004330e) aid_size_cell_gallery2

0x78f3,	// (0x00043328) grid_gallery2_pane_ParamLimits

0x78f3,	// (0x00043328) grid_gallery2_pane

0x790a,	// (0x0004333f) scroll_pane_cp029_ParamLimits

0x790a,	// (0x0004333f) scroll_pane_cp029

0x791a,	// (0x0004334f) cell_gallery2_pane_ParamLimits

0x791a,	// (0x0004334f) cell_gallery2_pane

0xddf3,	// (0x00049828) cell_gallery2_pane_g2

0x796f,	// (0x000433a4) cell_gallery2_pane_g3

0xddfb,	// (0x00049830) cell_gallery2_pane_g4

0xde03,	// (0x00049838) cell_gallery2_pane_g5

0xb0fb,	// (0x00046b30) grid_highlight_pane_cp10

0x7018,	// (0x00042a4d) popup_vitu2_match_list_window_ParamLimits

0x702a,	// (0x00042a5f) popup_vitu2_query_window_ParamLimits

0x702a,	// (0x00042a5f) popup_vitu2_query_window

0xa79e,	// (0x000461d3) bg_vitu2_candi_button_pane

0xddd8,	// (0x0004980d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdde1,	// (0x00049816) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xddea,	// (0x0004981f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1d0e,	// (0x0003d743) bg_button_pane_cp015

0x7977,	// (0x000433ac) bg_button_pane_cp016

0x7983,	// (0x000433b8) bg_button_pane_cp017

0xbca6,	// (0x000476db) bg_popup_sub_pane_cp22

0xde0b,	// (0x00049840) popup_vitu2_query_window_g1

0x1d48,	// (0x0003d77d) popup_vitu2_query_window_g2

0x0002,

0xf971,	// (0x0004b3a6) popup_vitu2_query_window_g

0x1d60,	// (0x0003d795) popup_vitu2_query_window_t1_ParamLimits

0x1d60,	// (0x0003d795) popup_vitu2_query_window_t1

0x1d93,	// (0x0003d7c8) popup_vitu2_query_window_t2_ParamLimits

0x1d93,	// (0x0003d7c8) popup_vitu2_query_window_t2

0x1da5,	// (0x0003d7da) popup_vitu2_query_window_t3_ParamLimits

0x1da5,	// (0x0003d7da) popup_vitu2_query_window_t3

0x79aa,	// (0x000433df) popup_vitu2_query_window_t4_ParamLimits

0x79aa,	// (0x000433df) popup_vitu2_query_window_t4

0x79be,	// (0x000433f3) popup_vitu2_query_window_t5_ParamLimits

0x79be,	// (0x000433f3) popup_vitu2_query_window_t5

0x0006,

0xf978,	// (0x0004b3ad) popup_vitu2_query_window_t_ParamLimits

0xf978,	// (0x0004b3ad) popup_vitu2_query_window_t

0xdca4,	// (0x000496d9) main_cset_text_pane

0x73e3,	// (0x00042e18) aid_area_touch_slider_ParamLimits

0x73ff,	// (0x00042e34) cset_slider_pane_ParamLimits

0x7422,	// (0x00042e57) main_cset_slider_pane_g1_ParamLimits

0x7437,	// (0x00042e6c) main_cset_slider_pane_g2_ParamLimits

0xdcc5,	// (0x000496fa) main_cset_slider_pane_g3_ParamLimits

0xdcc5,	// (0x000496fa) main_cset_slider_pane_g3

0x744c,	// (0x00042e81) main_cset_slider_pane_g4_ParamLimits

0x744c,	// (0x00042e81) main_cset_slider_pane_g4

0x745b,	// (0x00042e90) main_cset_slider_pane_g5_ParamLimits

0x745b,	// (0x00042e90) main_cset_slider_pane_g5

0x7469,	// (0x00042e9e) main_cset_slider_pane_g6_ParamLimits

0x7469,	// (0x00042e9e) main_cset_slider_pane_g6

0xf8d5,	// (0x0004b30a) main_cset_slider_pane_g_ParamLimits

0xdcf5,	// (0x0004972a) main_cset_slider_pane_t1_ParamLimits

0x74fd,	// (0x00042f32) main_cset_slider_pane_t2_ParamLimits

0x7517,	// (0x00042f4c) main_cset_slider_pane_t3_ParamLimits

0x7531,	// (0x00042f66) main_cset_slider_pane_t4_ParamLimits

0x754f,	// (0x00042f84) main_cset_slider_pane_t5_ParamLimits

0x756d,	// (0x00042fa2) main_cset_slider_pane_t6_ParamLimits

0x7584,	// (0x00042fb9) main_cset_slider_pane_t7_ParamLimits

0x75b2,	// (0x00042fe7) main_cset_slider_pane_t8_ParamLimits

0x75b2,	// (0x00042fe7) main_cset_slider_pane_t8

0x75da,	// (0x0004300f) main_cset_slider_pane_t9_ParamLimits

0x75da,	// (0x0004300f) main_cset_slider_pane_t9

0x7602,	// (0x00043037) main_cset_slider_pane_t10_ParamLimits

0x7602,	// (0x00043037) main_cset_slider_pane_t10

0x762a,	// (0x0004305f) main_cset_slider_pane_t11_ParamLimits

0x762a,	// (0x0004305f) main_cset_slider_pane_t11

0x7654,	// (0x00043089) main_cset_slider_pane_t12_ParamLimits

0x7654,	// (0x00043089) main_cset_slider_pane_t12

0x7673,	// (0x000430a8) main_cset_slider_pane_t13_ParamLimits

0x7673,	// (0x000430a8) main_cset_slider_pane_t13

0xf8fa,	// (0x0004b32f) main_cset_slider_pane_t_ParamLimits

0xa79e,	// (0x000461d3) bg_popup_sub_pane_cp011

0xde17,	// (0x0004984c) main_cset_text_pane_g1

0xde1f,	// (0x00049854) main_cset_text_pane_t1

0xde2d,	// (0x00049862) main_cset_text_pane_t2

0xde3b,	// (0x00049870) main_cset_text_pane_t3

0xde49,	// (0x0004987e) main_cset_text_pane_t4

0xde57,	// (0x0004988c) main_cset_text_pane_t5

0xde65,	// (0x0004989a) main_cset_text_pane_t6

0xde73,	// (0x000498a8) main_cset_text_pane_t7

0x0006,

0xf987,	// (0x0004b3bc) main_cset_text_pane_t

0xa79e,	// (0x000461d3) main_cam4_burst_pane

0xa79e,	// (0x000461d3) main_cam5_pane

0xdc7a,	// (0x000496af) bg_button_pane_cp019

0xdc83,	// (0x000496b8) bg_button_pane_cp020

0xdcd1,	// (0x00049706) main_cset_slider_pane_g7_ParamLimits

0xdcd1,	// (0x00049706) main_cset_slider_pane_g7

0xdcdd,	// (0x00049712) main_cset_slider_pane_g8_ParamLimits

0xdcdd,	// (0x00049712) main_cset_slider_pane_g8

0x747d,	// (0x00042eb2) main_cset_slider_pane_g9_ParamLimits

0x747d,	// (0x00042eb2) main_cset_slider_pane_g9

0x7489,	// (0x00042ebe) main_cset_slider_pane_g10_ParamLimits

0x7489,	// (0x00042ebe) main_cset_slider_pane_g10

0x7495,	// (0x00042eca) main_cset_slider_pane_g11_ParamLimits

0x7495,	// (0x00042eca) main_cset_slider_pane_g11

0x74a1,	// (0x00042ed6) main_cset_slider_pane_g12_ParamLimits

0x74a1,	// (0x00042ed6) main_cset_slider_pane_g12

0x74ad,	// (0x00042ee2) main_cset_slider_pane_g13_ParamLimits

0x74ad,	// (0x00042ee2) main_cset_slider_pane_g13

0x74bb,	// (0x00042ef0) main_cset_slider_pane_g14_ParamLimits

0x74bb,	// (0x00042ef0) main_cset_slider_pane_g14

0x74c9,	// (0x00042efe) main_cset_slider_pane_g15_ParamLimits

0x74c9,	// (0x00042efe) main_cset_slider_pane_g15

0xdd1d,	// (0x00049752) main_cset_slider_pane_t14_ParamLimits

0xdd1d,	// (0x00049752) main_cset_slider_pane_t14

0xdd56,	// (0x0004978b) main_cset_slider_pane_t15_ParamLimits

0xdd56,	// (0x0004978b) main_cset_slider_pane_t15

0x79d2,	// (0x00043407) aid_cam4_burst_size_cell_ParamLimits

0x79d2,	// (0x00043407) aid_cam4_burst_size_cell

0x79ee,	// (0x00043423) grid_cam4_burst_pane_ParamLimits

0x79ee,	// (0x00043423) grid_cam4_burst_pane

0x7a1e,	// (0x00043453) linegrid_cam4_burst_pane_ParamLimits

0x7a1e,	// (0x00043453) linegrid_cam4_burst_pane

0x7a3e,	// (0x00043473) scroll_pane_cp30_ParamLimits

0x7a3e,	// (0x00043473) scroll_pane_cp30

0x7a4a,	// (0x0004347f) cell_cam4_burst_pane_ParamLimits

0x7a4a,	// (0x0004347f) cell_cam4_burst_pane

0xde81,	// (0x000498b6) linegrid_cam4_burst_pane_g1_ParamLimits

0xde81,	// (0x000498b6) linegrid_cam4_burst_pane_g1

0x7a86,	// (0x000434bb) linegrid_cam4_burst_pane_g2_ParamLimits

0x7a86,	// (0x000434bb) linegrid_cam4_burst_pane_g2

0xde8e,	// (0x000498c3) linegrid_cam4_burst_pane_g3_ParamLimits

0xde8e,	// (0x000498c3) linegrid_cam4_burst_pane_g3

0x0002,

0xf996,	// (0x0004b3cb) linegrid_cam4_burst_pane_g_ParamLimits

0xf996,	// (0x0004b3cb) linegrid_cam4_burst_pane_g

0x7a97,	// (0x000434cc) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7a97,	// (0x000434cc) linegrid_cam4_burst_pane_g3_copy1

0xde9b,	// (0x000498d0) linegrid_cam4_burst_pane_g4_ParamLimits

0xde9b,	// (0x000498d0) linegrid_cam4_burst_pane_g4

0x7ab1,	// (0x000434e6) linegrid_cam4_burst_pane_g5_ParamLimits

0x7ab1,	// (0x000434e6) linegrid_cam4_burst_pane_g5

0x7ac2,	// (0x000434f7) linegrid_cam4_burst_pane_g6_ParamLimits

0x7ac2,	// (0x000434f7) linegrid_cam4_burst_pane_g6

0xdea8,	// (0x000498dd) linegrid_cam4_burst_pane_g7_ParamLimits

0xdea8,	// (0x000498dd) linegrid_cam4_burst_pane_g7

0x7ad3,	// (0x00043508) cell_cam4_burst_pane_g1

0xdec1,	// (0x000498f6) main_cam5_pane_t1_ParamLimits

0xdec1,	// (0x000498f6) main_cam5_pane_t1

0xded3,	// (0x00049908) main_cam5_pane_t2_ParamLimits

0xded3,	// (0x00049908) main_cam5_pane_t2

0xdee5,	// (0x0004991a) main_cam5_pane_t3_ParamLimits

0xdee5,	// (0x0004991a) main_cam5_pane_t3

0xdef7,	// (0x0004992c) main_cam5_pane_t4_ParamLimits

0xdef7,	// (0x0004992c) main_cam5_pane_t4

0xdf0f,	// (0x00049944) main_cam5_pane_t5_ParamLimits

0xdf0f,	// (0x00049944) main_cam5_pane_t5

0xdf23,	// (0x00049958) main_cam5_pane_t6_ParamLimits

0xdf23,	// (0x00049958) main_cam5_pane_t6

0xdf37,	// (0x0004996c) main_cam5_pane_t7_ParamLimits

0xdf37,	// (0x0004996c) main_cam5_pane_t7

0xdf49,	// (0x0004997e) main_cam5_pane_t8_ParamLimits

0xdf49,	// (0x0004997e) main_cam5_pane_t8

0xdf65,	// (0x0004999a) main_cam5_pane_t9_ParamLimits

0xdf65,	// (0x0004999a) main_cam5_pane_t9

0xdf77,	// (0x000499ac) main_cam5_pane_t10_ParamLimits

0xdf77,	// (0x000499ac) main_cam5_pane_t10

0xdf89,	// (0x000499be) main_cam5_pane_t11_ParamLimits

0xdf89,	// (0x000499be) main_cam5_pane_t11

0xdf9b,	// (0x000499d0) main_cam5_pane_t12_ParamLimits

0xdf9b,	// (0x000499d0) main_cam5_pane_t12

0xdfb0,	// (0x000499e5) main_cam5_pane_t13_ParamLimits

0xdfb0,	// (0x000499e5) main_cam5_pane_t13

0x000c,

0xf9a2,	// (0x0004b3d7) main_cam5_pane_t_ParamLimits

0xf9a2,	// (0x0004b3d7) main_cam5_pane_t

0x2953,	// (0x0003e388) popup_scut_keymap_window_ParamLimits

0x2953,	// (0x0003e388) popup_scut_keymap_window

0x7ae6,	// (0x0004351b) aid_size_cell_brow_shortcut

0xb0fb,	// (0x00046b30) bg_popup_window_pane_cp010

0x7af2,	// (0x00043527) grid_scut_pane

0x7afe,	// (0x00043533) cell_scut_pane_ParamLimits

0x7afe,	// (0x00043533) cell_scut_pane

0x7b15,	// (0x0004354a) cell_scut_pane_g1

0xdfcd,	// (0x00049a02) cell_scut_pane_t1

0xe01f,	// (0x00049a54) cell_scut_pane_t2

0x7b1e,	// (0x00043553) cell_scut_pane_t3

0x0002,

0xf9bd,	// (0x0004b3f2) cell_scut_pane_t

0x5c4a,	// (0x0004167f) main_mup3_pane_g8_ParamLimits

0x5c4a,	// (0x0004167f) main_mup3_pane_g8

0x6f4e,	// (0x00042983) area_vitu2_query_pane_ParamLimits

0x6f4e,	// (0x00042983) area_vitu2_query_pane

0x1d23,	// (0x0003d758) input_focus_pane_cp08

0xe02e,	// (0x00049a63) area_vitu2_query_pane_g1

0x1e23,	// (0x0003d858) area_vitu2_query_pane_g2

0x0001,

0xf9c4,	// (0x0004b3f9) area_vitu2_query_pane_g

0x7b2c,	// (0x00043561) area_vitu2_query_pane_t1_ParamLimits

0x7b2c,	// (0x00043561) area_vitu2_query_pane_t1

0x7b40,	// (0x00043575) area_vitu2_query_pane_t2_ParamLimits

0x7b40,	// (0x00043575) area_vitu2_query_pane_t2

0x1e34,	// (0x0003d869) area_vitu2_query_pane_t3_ParamLimits

0x1e34,	// (0x0003d869) area_vitu2_query_pane_t3

0x1e5c,	// (0x0003d891) area_vitu2_query_pane_t4_ParamLimits

0x1e5c,	// (0x0003d891) area_vitu2_query_pane_t4

0x1e84,	// (0x0003d8b9) area_vitu2_query_pane_t5_ParamLimits

0x1e84,	// (0x0003d8b9) area_vitu2_query_pane_t5

0x1eac,	// (0x0003d8e1) area_vitu2_query_pane_t6_ParamLimits

0x1eac,	// (0x0003d8e1) area_vitu2_query_pane_t6

0x0006,

0xf9c9,	// (0x0004b3fe) area_vitu2_query_pane_t_ParamLimits

0xf9c9,	// (0x0004b3fe) area_vitu2_query_pane_t

0x7977,	// (0x000433ac) bg_button_pane_cp018

0x7b54,	// (0x00043589) bg_button_pane_cp021

0x1ef8,	// (0x0003d92d) bg_button_pane_cp022

0x1f1b,	// (0x0003d950) input_focus_pane_cp09

0xb983,	// (0x000473b8) aid_size_touch_mv_arrow_left

0xb9ae,	// (0x000473e3) aid_size_touch_mv_arrow_right

0x74e1,	// (0x00042f16) main_cset_slider_pane_g16_ParamLimits

0x74e1,	// (0x00042f16) main_cset_slider_pane_g16

0x74ef,	// (0x00042f24) main_cset_slider_pane_g17_ParamLimits

0x74ef,	// (0x00042f24) main_cset_slider_pane_g17

0x7ad3,	// (0x00043508) cell_cam4_burst_pane_g1_ParamLimits

0xa79e,	// (0x000461d3) compa_mode_pane

0x76eb,	// (0x00043120) popup_vtel_slider_window_g3_ParamLimits

0x76eb,	// (0x00043120) popup_vtel_slider_window_g3

0x76ff,	// (0x00043134) popup_vtel_slider_window_g4_ParamLimits

0x76ff,	// (0x00043134) popup_vtel_slider_window_g4

0x7713,	// (0x00043148) popup_vtel_slider_window_t1_ParamLimits

0x7713,	// (0x00043148) popup_vtel_slider_window_t1

0xa79e,	// (0x000461d3) main_cl_pane

0x5563,	// (0x00040f98) popup_imed_adjust2_window_ParamLimits

0xbca6,	// (0x000476db) bg_tb_trans_pane_cp05_ParamLimits

0xd7de,	// (0x00049213) popup_imed_adjust2_window_g1_ParamLimits

0xd7ed,	// (0x00049222) popup_imed_adjust2_window_g2_ParamLimits

0xd7ed,	// (0x00049222) popup_imed_adjust2_window_g2

0xd7f9,	// (0x0004922e) popup_imed_adjust2_window_g3_ParamLimits

0xd7f9,	// (0x0004922e) popup_imed_adjust2_window_g3

0x0002,

0xf73f,	// (0x0004b174) popup_imed_adjust2_window_g_ParamLimits

0xf73f,	// (0x0004b174) popup_imed_adjust2_window_g

0xd805,	// (0x0004923a) popup_imed_adjust2_window_t1_ParamLimits

0xd81d,	// (0x00049252) slider_imed_adjust_pane_ParamLimits

0xd831,	// (0x00049266) slider_imed_adjust_pane_g1_ParamLimits

0xd841,	// (0x00049276) slider_imed_adjust_pane_g2_ParamLimits

0xd851,	// (0x00049286) slider_imed_adjust_pane_g3_ParamLimits

0xd862,	// (0x00049297) slider_imed_adjust_pane_g4_ParamLimits

0xf746,	// (0x0004b17b) slider_imed_adjust_pane_g_ParamLimits

0x6c9f,	// (0x000426d4) aid_touch_area_cam4_ParamLimits

0x6c9f,	// (0x000426d4) aid_touch_area_cam4

0x6caf,	// (0x000426e4) battery_pane_cp01

0x6d36,	// (0x0004276b) main_camera4_pane_g6_ParamLimits

0x6d36,	// (0x0004276b) main_camera4_pane_g6

0x6d54,	// (0x00042789) main_camera4_pane_t2_ParamLimits

0x6d54,	// (0x00042789) main_camera4_pane_t2

0x0001,

0xf848,	// (0x0004b27d) main_camera4_pane_t_ParamLimits

0xf848,	// (0x0004b27d) main_camera4_pane_t

0x6dd5,	// (0x0004280a) aid_touch_area_vid4_ParamLimits

0x6dd5,	// (0x0004280a) aid_touch_area_vid4

0x6e15,	// (0x0004284a) main_video4_pane_g5_ParamLimits

0x6e15,	// (0x0004284a) main_video4_pane_g5

0x6e39,	// (0x0004286e) vid4_progress_pane_ParamLimits

0x6e39,	// (0x0004286e) vid4_progress_pane

0xdce9,	// (0x0004971e) main_cset_slider_pane_g18_ParamLimits

0xdce9,	// (0x0004971e) main_cset_slider_pane_g18

0xdeb5,	// (0x000498ea) cell_cam4_burst_pane_g2_ParamLimits

0xdeb5,	// (0x000498ea) cell_cam4_burst_pane_g2

0x0001,

0xf99d,	// (0x0004b3d2) cell_cam4_burst_pane_g_ParamLimits

0xf99d,	// (0x0004b3d2) cell_cam4_burst_pane_g

0x7b60,	// (0x00043595) bg_cl_pane_ParamLimits

0x7b60,	// (0x00043595) bg_cl_pane

0x7b6c,	// (0x000435a1) cl_header_pane_ParamLimits

0x7b6c,	// (0x000435a1) cl_header_pane

0x7b78,	// (0x000435ad) cl_listscroll_pane_ParamLimits

0x7b78,	// (0x000435ad) cl_listscroll_pane

0xe03a,	// (0x00049a6f) bg_cl_pane_g1

0xe042,	// (0x00049a77) bg_cl_pane_g2

0xe04a,	// (0x00049a7f) bg_cl_pane_g3

0xe052,	// (0x00049a87) bg_cl_pane_g4

0xe05a,	// (0x00049a8f) bg_cl_pane_g5

0xe062,	// (0x00049a97) bg_cl_pane_g6

0xe06a,	// (0x00049a9f) bg_cl_pane_g7

0xe072,	// (0x00049aa7) bg_cl_pane_g8

0xe07a,	// (0x00049aaf) bg_cl_pane_g9

0x0008,

0xf9d8,	// (0x0004b40d) bg_cl_pane_g

0x7b84,	// (0x000435b9) aid_height_cl_leading_ParamLimits

0x7b84,	// (0x000435b9) aid_height_cl_leading

0x7b90,	// (0x000435c5) aid_height_cl_text_ParamLimits

0x7b90,	// (0x000435c5) aid_height_cl_text

0xacc2,	// (0x000466f7) bg_cl_header_pane_ParamLimits

0xacc2,	// (0x000466f7) bg_cl_header_pane

0x7ba8,	// (0x000435dd) cl_header_pane_g1_ParamLimits

0x7ba8,	// (0x000435dd) cl_header_pane_g1

0x7bb5,	// (0x000435ea) cl_header_pane_t1_ParamLimits

0x7bb5,	// (0x000435ea) cl_header_pane_t1

0xe082,	// (0x00049ab7) cl_list_pane

0xdcbc,	// (0x000496f1) hc_scroll_pane_cp01

0xb322,	// (0x00046d57) bg_cl_header_pane_g1

0xdb90,	// (0x000495c5) bg_cl_header_pane_g2

0xb342,	// (0x00046d77) bg_cl_header_pane_g3

0xdba0,	// (0x000495d5) bg_cl_header_pane_g4

0xdb98,	// (0x000495cd) bg_cl_header_pane_g5

0xddd0,	// (0x00049805) bg_cl_header_pane_g6

0xdbb8,	// (0x000495ed) bg_cl_header_pane_g7

0xdbc0,	// (0x000495f5) bg_cl_header_pane_g8

0xdbb0,	// (0x000495e5) bg_cl_header_pane_g9

0x0008,

0xf9eb,	// (0x0004b420) bg_cl_header_pane_g

0x7bc7,	// (0x000435fc) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7bc7,	// (0x000435fc) hc_cl_list_double_graphic_heading_pane

0x7bdb,	// (0x00043610) hc_cl_list_single_graphic_pane_ParamLimits

0x7bdb,	// (0x00043610) hc_cl_list_single_graphic_pane

0x7bf5,	// (0x0004362a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7bf5,	// (0x0004362a) hc_cl_list_single_graphic_pane_g1

0x7c01,	// (0x00043636) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7c01,	// (0x00043636) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9fe,	// (0x0004b433) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9fe,	// (0x0004b433) hc_cl_list_single_graphic_pane_g

0x7c15,	// (0x0004364a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7c15,	// (0x0004364a) hc_cl_list_single_graphic_pane_t1

0x7bf5,	// (0x0004362a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7bf5,	// (0x0004362a) hc_cl_list_double_graphic_heading_pane_g1

0x7c2a,	// (0x0004365f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7c2a,	// (0x0004365f) hc_cl_list_double_graphic_heading_pane_g2

0x7c3e,	// (0x00043673) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7c3e,	// (0x00043673) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa03,	// (0x0004b438) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa03,	// (0x0004b438) hc_cl_list_double_graphic_heading_pane_g

0x7c52,	// (0x00043687) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7c52,	// (0x00043687) hc_cl_list_double_graphic_heading_pane_t1

0x7c67,	// (0x0004369c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7c67,	// (0x0004369c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa0a,	// (0x0004b43f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa0a,	// (0x0004b43f) hc_cl_list_double_graphic_heading_pane_t

0x7c84,	// (0x000436b9) vid4_progress_pane_g1

0x7c94,	// (0x000436c9) vid4_progress_pane_g2

0x7ca4,	// (0x000436d9) vid4_progress_pane_g3

0x7cb6,	// (0x000436eb) vid4_progress_pane_g4

0x0004,

0xfa0f,	// (0x0004b444) vid4_progress_pane_g

0x7cce,	// (0x00043703) vid4_progress_pane_t1

0x7ce4,	// (0x00043719) vid4_progress_pane_t2

0x0002,

0xfa1a,	// (0x0004b44f) vid4_progress_pane_t

0x7d0f,	// (0x00043744) wait_bar_pane_cp07

0xd0db,	// (0x00048b10) blid_firmament_pane_ParamLimits

0xd11e,	// (0x00048b53) popup_blid_sat_info2_window_g1

0xd142,	// (0x00048b77) popup_blid_sat_info2_window_t3

0xd150,	// (0x00048b85) popup_blid_sat_info2_window_t4

0xd15e,	// (0x00048b93) popup_blid_sat_info2_window_t5

0xd16c,	// (0x00048ba1) popup_blid_sat_info2_window_t6

0xd17c,	// (0x00048bb1) popup_blid_sat_info2_window_t7

0xd18a,	// (0x00048bbf) popup_blid_sat_info2_window_t8

0xd198,	// (0x00048bcd) popup_blid_sat_info2_window_t9

0xd1a6,	// (0x00048bdb) popup_blid_sat_info2_window_t10

0xd267,	// (0x00048c9c) aid_firma_cardinal_ParamLimits

0xd27b,	// (0x00048cb0) blid_firmament_pane_t1_ParamLimits

0xd292,	// (0x00048cc7) blid_firmament_pane_t2_ParamLimits

0xd2a9,	// (0x00048cde) blid_firmament_pane_t3_ParamLimits

0xd2c0,	// (0x00048cf5) blid_firmament_pane_t4_ParamLimits

0xf638,	// (0x0004b06d) blid_firmament_pane_t_ParamLimits

0xd2d7,	// (0x00048d0c) blid_sat_info_pane_ParamLimits

0xae75,	// (0x000468aa) main_cam_set_pane_ParamLimits

0x6319,	// (0x00041d4e) aid_size_cell_colour_35_ParamLimits

0x6333,	// (0x00041d68) aid_size_cell_colour_112_ParamLimits

0x634a,	// (0x00041d7f) aid_size_cell_effect_ParamLimits

0xae75,	// (0x000468aa) bg_tb_trans_pane_cp02_ParamLimits

0xb8c4,	// (0x000472f9) heading_imed_pane_ParamLimits

0x6364,	// (0x00041d99) listscroll_imed_pane_ParamLimits

0xc58e,	// (0x00047fc3) popup_call2_audio_first_window_g5_ParamLimits

0xc58e,	// (0x00047fc3) popup_call2_audio_first_window_g5

0x6995,	// (0x000423ca) aid_size_touch_image3_arrow_left_ParamLimits

0x6995,	// (0x000423ca) aid_size_touch_image3_arrow_left

0x69ab,	// (0x000423e0) aid_size_touch_image3_arrow_right_ParamLimits

0x69ab,	// (0x000423e0) aid_size_touch_image3_arrow_right

0x7cf9,	// (0x0004372e) vid4_progress_pane_t3

0x64e6,	// (0x00041f1b) main_hwr_training_symbol_option_pane_ParamLimits

0x64e6,	// (0x00041f1b) main_hwr_training_symbol_option_pane

0xd9fa,	// (0x0004942f) popup_hwr_training_preview_window_ParamLimits

0xd9fa,	// (0x0004942f) popup_hwr_training_preview_window

0x6547,	// (0x00041f7c) hwr_training_navi_pane_g5_ParamLimits

0x6547,	// (0x00041f7c) hwr_training_navi_pane_g5

0xdb7e,	// (0x000495b3) popup_char_count_window

0xacc2,	// (0x000466f7) bg_popup_sub_pane_cp20_ParamLimits

0x7806,	// (0x0004323b) list_vitu2_match_list_pane_ParamLimits

0x7812,	// (0x00043247) vitu2_page_scroll_pane_ParamLimits

0x7812,	// (0x00043247) vitu2_page_scroll_pane

0xe08b,	// (0x00049ac0) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe08b,	// (0x00049ac0) list_single_hwr_training_symbol_option_pane

0xe09e,	// (0x00049ad3) list_single_hwr_training_symbol_option_pane_g1

0xe0a6,	// (0x00049adb) list_single_hwr_training_symbol_option_pane_t1

0xe0b4,	// (0x00049ae9) bg_button_pane_cp023

0xe0bd,	// (0x00049af2) bg_button_pane_cp024

0xe0f0,	// (0x00049b25) vitu2_page_scroll_pane_g1

0xe0f8,	// (0x00049b2d) vitu2_page_scroll_pane_g2

0x0001,

0xfa21,	// (0x0004b456) vitu2_page_scroll_pane_g

0xe100,	// (0x00049b35) vitu2_page_scroll_pane_t1

0xb0c0,	// (0x00046af5) popup_char_count_window_g1

0xe10f,	// (0x00049b44) popup_char_count_window_g2

0xdfdc,	// (0x00049a11) popup_char_count_window_g3

0x0002,

0xfa26,	// (0x0004b45b) popup_char_count_window_g

0xe118,	// (0x00049b4d) popup_char_count_window_t1

0xa79e,	// (0x000461d3) main_vded2_pane

0xd7ca,	// (0x000491ff) aid_size_cell_imed_line

0xd7d4,	// (0x00049209) grid_imed_line_width_pane

0x6ea5,	// (0x000428da) vid4_indicators_pane_g4

0xe126,	// (0x00049b5b) cell_imed_line_width_pane_ParamLimits

0xe126,	// (0x00049b5b) cell_imed_line_width_pane

0xe13a,	// (0x00049b6f) cell_imed_line_width_pane_g1

0xe143,	// (0x00049b78) cell_imed_line_width_pane_g2

0x0001,

0xfa2d,	// (0x0004b462) cell_imed_line_width_pane_g

0x7d20,	// (0x00043755) main_vded2_pane_g1_ParamLimits

0x7d20,	// (0x00043755) main_vded2_pane_g1

0x7d2d,	// (0x00043762) main_vded2_pane_g2_ParamLimits

0x7d2d,	// (0x00043762) main_vded2_pane_g2

0x0001,

0xfa32,	// (0x0004b467) main_vded2_pane_g_ParamLimits

0xfa32,	// (0x0004b467) main_vded2_pane_g

0x7d3b,	// (0x00043770) vded2_slider_pane_ParamLimits

0x7d3b,	// (0x00043770) vded2_slider_pane

0x7d48,	// (0x0004377d) aid_size_touch_vded2_end

0x7d52,	// (0x00043787) aid_size_touch_vded2_playhead

0xe14b,	// (0x00049b80) aid_size_touch_vded2_start

0xe153,	// (0x00049b88) vded2_slider_bg_pane

0xe15c,	// (0x00049b91) vded2_slider_pane_g1

0xe165,	// (0x00049b9a) vded2_slider_pane_g2

0x7d5a,	// (0x0004378f) vded2_slider_pane_g3

0x0002,

0xfa37,	// (0x0004b46c) vded2_slider_pane_g

0xe16d,	// (0x00049ba2) vded2_slider_bg_pane_g1

0xe176,	// (0x00049bab) vded2_slider_bg_pane_g2

0xe17f,	// (0x00049bb4) vded2_slider_bg_pane_g3

0x0002,

0xfa3e,	// (0x0004b473) vded2_slider_bg_pane_g

0x4d73,	// (0x000407a8) aid_postcard_touch_down_pane_ParamLimits

0x4d73,	// (0x000407a8) aid_postcard_touch_down_pane

0x4d83,	// (0x000407b8) aid_postcard_touch_up_pane_ParamLimits

0x4d83,	// (0x000407b8) aid_postcard_touch_up_pane

0xa79e,	// (0x000461d3) main_blid2_pane

0x54f2,	// (0x00040f27) popup_blid2_search_window

0xa79e,	// (0x000461d3) blid2_gps_pane

0xa79e,	// (0x000461d3) blid2_navig_pane

0xa79e,	// (0x000461d3) blid2_search_pane

0xa79e,	// (0x000461d3) blid2_tripm_pane

0x7d63,	// (0x00043798) blid2_search_pane_g1_ParamLimits

0x7d63,	// (0x00043798) blid2_search_pane_g1

0x7d73,	// (0x000437a8) blid2_search_pane_t1_ParamLimits

0x7d73,	// (0x000437a8) blid2_search_pane_t1

0x7d85,	// (0x000437ba) aid_size_cell_blid2_gps_ParamLimits

0x7d85,	// (0x000437ba) aid_size_cell_blid2_gps

0x7d95,	// (0x000437ca) blid2_gps_pane_g1_ParamLimits

0x7d95,	// (0x000437ca) blid2_gps_pane_g1

0x7da1,	// (0x000437d6) grid_blid2_satellite_pane_ParamLimits

0x7da1,	// (0x000437d6) grid_blid2_satellite_pane

0x7db1,	// (0x000437e6) blid2_navig_pane_g1_ParamLimits

0x7db1,	// (0x000437e6) blid2_navig_pane_g1

0x7dbd,	// (0x000437f2) blid2_navig_pane_t1_ParamLimits

0x7dbd,	// (0x000437f2) blid2_navig_pane_t1

0x7dcf,	// (0x00043804) blid2_navig_pane_t2_ParamLimits

0x7dcf,	// (0x00043804) blid2_navig_pane_t2

0x0001,

0xfa45,	// (0x0004b47a) blid2_navig_pane_t_ParamLimits

0xfa45,	// (0x0004b47a) blid2_navig_pane_t

0x7de1,	// (0x00043816) blid2_navig_ring_pane_ParamLimits

0x7de1,	// (0x00043816) blid2_navig_ring_pane

0x7df1,	// (0x00043826) blid2_speed_pane_ParamLimits

0x7df1,	// (0x00043826) blid2_speed_pane

0x7dfd,	// (0x00043832) blid2_tripm_pane_g1_ParamLimits

0x7dfd,	// (0x00043832) blid2_tripm_pane_g1

0x7e0d,	// (0x00043842) blid2_tripm_pane_g2_ParamLimits

0x7e0d,	// (0x00043842) blid2_tripm_pane_g2

0x7e19,	// (0x0004384e) blid2_tripm_pane_g3_ParamLimits

0x7e19,	// (0x0004384e) blid2_tripm_pane_g3

0x7e25,	// (0x0004385a) blid2_tripm_pane_g4_ParamLimits

0x7e25,	// (0x0004385a) blid2_tripm_pane_g4

0x7e31,	// (0x00043866) blid2_tripm_pane_g5_ParamLimits

0x7e31,	// (0x00043866) blid2_tripm_pane_g5

0x0005,

0xfa4a,	// (0x0004b47f) blid2_tripm_pane_g_ParamLimits

0xfa4a,	// (0x0004b47f) blid2_tripm_pane_g

0x7e4d,	// (0x00043882) blid2_tripm_pane_t1_ParamLimits

0x7e4d,	// (0x00043882) blid2_tripm_pane_t1

0x7e61,	// (0x00043896) blid2_tripm_pane_t2_ParamLimits

0x7e61,	// (0x00043896) blid2_tripm_pane_t2

0x7e73,	// (0x000438a8) blid2_tripm_pane_t3_ParamLimits

0x7e73,	// (0x000438a8) blid2_tripm_pane_t3

0x0003,

0xfa57,	// (0x0004b48c) blid2_tripm_pane_t_ParamLimits

0xfa57,	// (0x0004b48c) blid2_tripm_pane_t

0x7ea5,	// (0x000438da) cell_blid2_satellite_pane_ParamLimits

0x7ea5,	// (0x000438da) cell_blid2_satellite_pane

0x7ebf,	// (0x000438f4) cell_blid2_satellite_pane_g1

0xe188,	// (0x00049bbd) cell_blid2_satellite_pane_t1

0xb11d,	// (0x00046b52) blid2_speed_pane_g1

0xe196,	// (0x00049bcb) blid2_speed_pane_t1

0xe1a4,	// (0x00049bd9) blid2_speed_pane_t2

0x0001,

0xfa60,	// (0x0004b495) blid2_speed_pane_t

0xb11d,	// (0x00046b52) blid2_navig_ring_pane_g1

0x7ec8,	// (0x000438fd) blid2_navig_ring_pane_g2

0x7ed0,	// (0x00043905) blid2_navig_ring_pane_g3

0x7ed8,	// (0x0004390d) blid2_navig_ring_pane_g4

0x7ee0,	// (0x00043915) blid2_navig_ring_pane_g5

0x0004,

0xfa65,	// (0x0004b49a) blid2_navig_ring_pane_g

0xa79e,	// (0x000461d3) bg_popup_window_pane_cp011

0xe1b2,	// (0x00049be7) popup_blid2_search_window_g1

0xe1ba,	// (0x00049bef) popup_blid2_search_window_t1

0xe1c8,	// (0x00049bfd) popup_blid2_search_window_t2

0x0001,

0xfa70,	// (0x0004b4a5) popup_blid2_search_window_t

0xb231,	// (0x00046c66) main_browser_pane_g1

0xaf40,	// (0x00046975) main_browser_pane_ParamLimits

0xae75,	// (0x000468aa) bg_button_pane_cp011_ParamLimits

0x7106,	// (0x00042b3b) cell_vitu2_function_pane_g1_ParamLimits

0xbca6,	// (0x000476db) bg_popup_sub_pane_cp22_ParamLimits

0x1d23,	// (0x0003d758) input_focus_pane_cp08_ParamLimits

0x798f,	// (0x000433c4) popup_vitu2_query_button_pane_ParamLimits

0x798f,	// (0x000433c4) popup_vitu2_query_button_pane

0x1d3e,	// (0x0003d773) popup_vitu2_query_input_button_pane

0xde0b,	// (0x00049840) popup_vitu2_query_window_g1_ParamLimits

0x1d48,	// (0x0003d77d) popup_vitu2_query_window_g2_ParamLimits

0xf971,	// (0x0004b3a6) popup_vitu2_query_window_g_ParamLimits

0xa79e,	// (0x000461d3) bg_button_pane_cp026

0x7ee8,	// (0x0004391d) popup_vitu2_query_input_button_pane_g1

0xa79e,	// (0x000461d3) bg_button_pane_cp025

0xe1d6,	// (0x00049c0b) popup_vitu2_query_button_pane_t1

0x596b,	// (0x000413a0) main_mp3_pane_t6

0x597b,	// (0x000413b0) popup_slider_window_cp01

0x6d8a,	// (0x000427bf) cam4_battery_pane

0x6e64,	// (0x00042899) cam4_battery_pane_cp02

0x7c7c,	// (0x000436b1) cam4_battery_pane_cp01

0x7c7c,	// (0x000436b1) cam4_battery_pane_cp03

0xb11d,	// (0x00046b52) cam4_battery_pane_g1

0xdfe5,	// (0x00049a1a) cam4_battery_pane_g2

0x0001,

0xfa75,	// (0x0004b4aa) cam4_battery_pane_g

0xd1b4,	// (0x00048be9) popup_blid_sat_info2_window_t11

0xb983,	// (0x000473b8) aid_size_touch_mv_arrow_left_ParamLimits

0xb9ae,	// (0x000473e3) aid_size_touch_mv_arrow_right_ParamLimits

0xba0c,	// (0x00047441) navi_pane_g1_ParamLimits

0xba18,	// (0x0004744d) navi_pane_g2_ParamLimits

0xba46,	// (0x0004747b) navi_pane_g3_ParamLimits

0xf339,	// (0x0004ad6e) navi_pane_g_ParamLimits

0x4a2b,	// (0x00040460) navi_pane_mv_t1_ParamLimits

0x6370,	// (0x00041da5) grid_imed_effect_pane_ParamLimits

0x34de,	// (0x0003ef13) aid_placing_vt_slider_lsc

0xb180,	// (0x00046bb5) aid_placing_vt_slider_prt

0xae75,	// (0x000468aa) bg_tb_trans_pane_cp01_ParamLimits

0xd452,	// (0x00048e87) popup_image_details_window_g1_ParamLimits

0xd465,	// (0x00048e9a) popup_image_details_window_g2_ParamLimits

0xd47a,	// (0x00048eaf) popup_image_details_window_g3_ParamLimits

0xd47a,	// (0x00048eaf) popup_image_details_window_g3

0xf678,	// (0x0004b0ad) popup_image_details_window_g_ParamLimits

0xd48e,	// (0x00048ec3) popup_image_details_window_t1_ParamLimits

0xd4a0,	// (0x00048ed5) popup_image_details_window_t2_ParamLimits

0xd4b9,	// (0x00048eee) popup_image_details_window_t3_ParamLimits

0xd4cd,	// (0x00048f02) popup_image_details_window_t4_ParamLimits

0xd4e8,	// (0x00048f1d) popup_image_details_window_t5_ParamLimits

0xf67f,	// (0x0004b0b4) popup_image_details_window_t_ParamLimits

0x7b9c,	// (0x000435d1) cl_header_name_pane_ParamLimits

0x7b9c,	// (0x000435d1) cl_header_name_pane

0x7ef0,	// (0x00043925) cl_header_name_pane_t1_ParamLimits

0x7ef0,	// (0x00043925) cl_header_name_pane_t1

0x7f07,	// (0x0004393c) cl_header_name_pane_t2_ParamLimits

0x7f07,	// (0x0004393c) cl_header_name_pane_t2

0x7f31,	// (0x00043966) cl_header_name_pane_t3_ParamLimits

0x7f31,	// (0x00043966) cl_header_name_pane_t3

0x0002,

0xfa7a,	// (0x0004b4af) cl_header_name_pane_t_ParamLimits

0xfa7a,	// (0x0004b4af) cl_header_name_pane_t

0xbad5,	// (0x0004750a) navi_pane_mv_g2_ParamLimits

0xdb66,	// (0x0004959b) field_vitu2_entry_pane_g1_ParamLimits

0xdb72,	// (0x000495a7) field_vitu2_entry_pane_g2_ParamLimits

0xbcb4,	// (0x000476e9) field_vitu2_entry_pane_g3_ParamLimits

0xbcb4,	// (0x000476e9) field_vitu2_entry_pane_g3

0xf87a,	// (0x0004b2af) field_vitu2_entry_pane_g_ParamLimits

0x7094,	// (0x00042ac9) cell_vitu2_itu_pane_g1_ParamLimits

0x70ac,	// (0x00042ae1) cell_vitu2_itu_pane_g2_ParamLimits

0x70ac,	// (0x00042ae1) cell_vitu2_itu_pane_g2

0x0001,

0xf886,	// (0x0004b2bb) cell_vitu2_itu_pane_g_ParamLimits

0xf886,	// (0x0004b2bb) cell_vitu2_itu_pane_g

0xae75,	// (0x000468aa) bg_vkb2_func_pane_cp05_ParamLimits

0xae75,	// (0x000468aa) bg_vkb2_func_pane_cp05

0xae75,	// (0x000468aa) bg_vkb2_func_pane_cp03

0xae75,	// (0x000468aa) bg_vkb2_func_pane_cp04

0xae75,	// (0x000468aa) bg_vkb2_func_pane_cp10_ParamLimits

0xae75,	// (0x000468aa) bg_vkb2_func_pane_cp10

0x1f09,	// (0x0003d93e) bg_vkb2_func_pane_cp08

0x7977,	// (0x000433ac) bg_vkb2_func_pane_cp06

0x7b54,	// (0x00043589) bg_vkb2_func_pane_cp07

0xe0c6,	// (0x00049afb) bg_vkb2_func_pane_cp11_ParamLimits

0xe0c6,	// (0x00049afb) bg_vkb2_func_pane_cp11

0xe0db,	// (0x00049b10) bg_vkb2_func_pane_cp12_ParamLimits

0xe0db,	// (0x00049b10) bg_vkb2_func_pane_cp12

0xa79e,	// (0x000461d3) bg_vkb2_func_pane_cp09

0xdb90,	// (0x000495c5) bg_vkb2_func_pane_g1

0xb342,	// (0x00046d77) bg_vkb2_func_pane_g2

0xdb98,	// (0x000495cd) bg_vkb2_func_pane_g3

0xdba0,	// (0x000495d5) bg_vkb2_func_pane_g4

0xddd0,	// (0x00049805) bg_vkb2_func_pane_g5

0xdbb8,	// (0x000495ed) bg_vkb2_func_pane_g6

0xdbc0,	// (0x000495f5) bg_vkb2_func_pane_g7

0xdbb0,	// (0x000495e5) bg_vkb2_func_pane_g8

0xb322,	// (0x00046d57) bg_vkb2_func_pane_g9

0x0008,

0xfa81,	// (0x0004b4b6) bg_vkb2_func_pane_g

0x7e3f,	// (0x00043874) blid2_tripm_pane_g6_ParamLimits

0x7e3f,	// (0x00043874) blid2_tripm_pane_g6

0xdab8,	// (0x000494ed) mp4_progress_pane_g1

0x7e99,	// (0x000438ce) blid2_tripm_values_pane_ParamLimits

0x7e99,	// (0x000438ce) blid2_tripm_values_pane

0x7f56,	// (0x0004398b) blid2_tripm_values_pane_t1

0x7f64,	// (0x00043999) blid2_tripm_values_pane_t2

0x7f72,	// (0x000439a7) blid2_tripm_values_pane_t3

0x7f80,	// (0x000439b5) blid2_tripm_values_pane_t4

0x7f8e,	// (0x000439c3) blid2_tripm_values_pane_t5

0x7f9c,	// (0x000439d1) blid2_tripm_values_pane_t6

0x7faa,	// (0x000439df) blid2_tripm_values_pane_t7

0x7fb8,	// (0x000439ed) blid2_tripm_values_pane_t8

0x7fc6,	// (0x000439fb) blid2_tripm_values_pane_t9

0x0008,

0xfa94,	// (0x0004b4c9) blid2_tripm_values_pane_t

0x351e,	// (0x0003ef53) call_video_pane_t1_ParamLimits

0x353f,	// (0x0003ef74) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0004ac17) call_video_pane_t_ParamLimits

0x1ac2,	// (0x0003d4f7) msg_header_pane_g1_ParamLimits

0xbc9a,	// (0x000476cf) msg_header_pane_g2_ParamLimits

0xbc9a,	// (0x000476cf) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x0004ae11) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x0004ae11) msg_header_pane_g

0xaf40,	// (0x00046975) main_clock2_pane_ParamLimits

0x60ea,	// (0x00041b1f) grid_clock2_toolbar_pane_ParamLimits

0x60ea,	// (0x00041b1f) grid_clock2_toolbar_pane

0x60ea,	// (0x00041b1f) listscroll_clock2_pane_ParamLimits

0x60ea,	// (0x00041b1f) listscroll_clock2_pane

0x619a,	// (0x00041bcf) main_clock2_pane_t3_ParamLimits

0x619a,	// (0x00041bcf) main_clock2_pane_t3

0x61ac,	// (0x00041be1) main_clock2_pane_t4_ParamLimits

0x61ac,	// (0x00041be1) main_clock2_pane_t4

0xe1e4,	// (0x00049c19) cell_clock2_toolbar_pane

0xe1ec,	// (0x00049c21) cell_clock2_toolbar_pane_cp01

0xe1ec,	// (0x00049c21) cell_clock2_toolbar_pane_cp02

0xe1f4,	// (0x00049c29) cell_clock2_toolbar_pane_cp03

0xe1fc,	// (0x00049c31) list_clock2_pane

0xb908,	// (0x0004733d) scroll_pane_cp10

0xe204,	// (0x00049c39) list_single_clock2_pane_ParamLimits

0xe204,	// (0x00049c39) list_single_clock2_pane

0xb0fb,	// (0x00046b30) list_highlight_pane_cp08

0xe211,	// (0x00049c46) list_single_clock2_pane_t1

0xe21f,	// (0x00049c54) list_single_clock2_pane_t2

0x0001,

0xfaa7,	// (0x0004b4dc) list_single_clock2_pane_t

0xa79e,	// (0x000461d3) bg_button_pane_cp10

0xe22d,	// (0x00049c62) cell_clock2_toolbar_pane_g1

0x4cd5,	// (0x0004070a) aid_main_viewer_pane_g1_ParamLimits

0x4cd5,	// (0x0004070a) aid_main_viewer_pane_g1

0x4ce1,	// (0x00040716) aid_main_viewer_pane_g2_ParamLimits

0x4ce1,	// (0x00040716) aid_main_viewer_pane_g2

0x4ced,	// (0x00040722) aid_main_viewer_pane_g3_ParamLimits

0x4ced,	// (0x00040722) aid_main_viewer_pane_g3

0x4cfe,	// (0x00040733) aid_main_viewer_pane_g4_ParamLimits

0x4cfe,	// (0x00040733) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x0004ae22) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x0004ae22) aid_main_viewer_pane_g

0x54ca,	// (0x00040eff) main_calc_pane_ParamLimits

0x54d7,	// (0x00040f0c) main_dialer2_pane_ParamLimits

0xa79e,	// (0x000461d3) main_cam6_pane

0xa79e,	// (0x000461d3) main_vid6_pane

0x60f6,	// (0x00041b2b) listscroll_gen_pane_cp06_ParamLimits

0x60f6,	// (0x00041b2b) listscroll_gen_pane_cp06

0x61be,	// (0x00041bf3) main_clock2_pane_t5_ParamLimits

0x61be,	// (0x00041bf3) main_clock2_pane_t5

0x620b,	// (0x00041c40) aid_call2_pane_cp10_ParamLimits

0x621d,	// (0x00041c52) aid_call_pane_cp10_ParamLimits

0xb977,	// (0x000473ac) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb977,	// (0x000473ac) popup_clock_analogue_window_cp10_g2_ParamLimits

0x622f,	// (0x00041c64) popup_clock_analogue_window_cp10_g3_ParamLimits

0x622f,	// (0x00041c64) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb977,	// (0x000473ac) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf734,	// (0x0004b169) popup_clock_analogue_window_cp10_g_ParamLimits

0x6245,	// (0x00041c7a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6942,	// (0x00042377) cell_dialer2_keypad_pane_g2_ParamLimits

0x6942,	// (0x00042377) cell_dialer2_keypad_pane_g2

0x0001,

0xf819,	// (0x0004b24e) cell_dialer2_keypad_pane_g_ParamLimits

0xf819,	// (0x0004b24e) cell_dialer2_keypad_pane_g

0x695e,	// (0x00042393) cell_dialer2_keypad_pane_t1

0x73d0,	// (0x00042e05) main_cset_text2_pane_ParamLimits

0x73d0,	// (0x00042e05) main_cset_text2_pane

0xe02e,	// (0x00049a63) area_vitu2_query_pane_g1_ParamLimits

0x1e23,	// (0x0003d858) area_vitu2_query_pane_g2_ParamLimits

0xf9c4,	// (0x0004b3f9) area_vitu2_query_pane_g_ParamLimits

0x1ed4,	// (0x0003d909) area_vitu2_query_pane_t7_ParamLimits

0x1ed4,	// (0x0003d909) area_vitu2_query_pane_t7

0x7977,	// (0x000433ac) bg_button_pane_cp018_ParamLimits

0x7b54,	// (0x00043589) bg_button_pane_cp021_ParamLimits

0x1ef8,	// (0x0003d92d) bg_button_pane_cp022_ParamLimits

0x1f09,	// (0x0003d93e) bg_vkb2_func_pane_cp08_ParamLimits

0x7977,	// (0x000433ac) bg_vkb2_func_pane_cp06_ParamLimits

0x7b54,	// (0x00043589) bg_vkb2_func_pane_cp07_ParamLimits

0x1f1b,	// (0x0003d950) input_focus_pane_cp09_ParamLimits

0x7fd4,	// (0x00043a09) cam6_autofocus_pane_ParamLimits

0x7fd4,	// (0x00043a09) cam6_autofocus_pane

0x7ff0,	// (0x00043a25) cam6_image_uncrop_pane_ParamLimits

0x7ff0,	// (0x00043a25) cam6_image_uncrop_pane

0x8029,	// (0x00043a5e) cam6_indi_pane_ParamLimits

0x8029,	// (0x00043a5e) cam6_indi_pane

0x8043,	// (0x00043a78) cam6_mode_pane_ParamLimits

0x8043,	// (0x00043a78) cam6_mode_pane

0x8057,	// (0x00043a8c) cam6_timer_pane_ParamLimits

0x8057,	// (0x00043a8c) cam6_timer_pane

0x806b,	// (0x00043aa0) cam6_zoom_pane_ParamLimits

0x806b,	// (0x00043aa0) cam6_zoom_pane

0x8086,	// (0x00043abb) cam6_mode_pane_g1_ParamLimits

0x8086,	// (0x00043abb) cam6_mode_pane_g1

0x8092,	// (0x00043ac7) cam6_mode_pane_g2_ParamLimits

0x8092,	// (0x00043ac7) cam6_mode_pane_g2

0x809e,	// (0x00043ad3) cam6_mode_pane_g3_ParamLimits

0x809e,	// (0x00043ad3) cam6_mode_pane_g3

0x80aa,	// (0x00043adf) cam6_mode_pane_g4_ParamLimits

0x80aa,	// (0x00043adf) cam6_mode_pane_g4

0x0003,

0xfaac,	// (0x0004b4e1) cam6_mode_pane_g_ParamLimits

0xfaac,	// (0x0004b4e1) cam6_mode_pane_g

0xd589,	// (0x00048fbe) bg_tb_trans_pane_cp08_ParamLimits

0xd589,	// (0x00048fbe) bg_tb_trans_pane_cp08

0xe235,	// (0x00049c6a) cam6_battery_pane_ParamLimits

0xe235,	// (0x00049c6a) cam6_battery_pane

0xe24b,	// (0x00049c80) cam6_indi_pane_g1_ParamLimits

0xe24b,	// (0x00049c80) cam6_indi_pane_g1

0xe25d,	// (0x00049c92) cam6_indi_pane_g2_ParamLimits

0xe25d,	// (0x00049c92) cam6_indi_pane_g2

0xe26f,	// (0x00049ca4) cam6_indi_pane_g3_ParamLimits

0xe26f,	// (0x00049ca4) cam6_indi_pane_g3

0x0002,

0xfab5,	// (0x0004b4ea) cam6_indi_pane_g_ParamLimits

0xfab5,	// (0x0004b4ea) cam6_indi_pane_g

0xe281,	// (0x00049cb6) cam6_indi_pane_t1_ParamLimits

0xe281,	// (0x00049cb6) cam6_indi_pane_t1

0x6ed8,	// (0x0004290d) cam6_autofocus_pane_g1

0x6ee0,	// (0x00042915) cam6_autofocus_pane_g2

0x6ee8,	// (0x0004291d) cam6_autofocus_pane_g3

0x6ef0,	// (0x00042925) cam6_autofocus_pane_g4

0x0003,

0xfabc,	// (0x0004b4f1) cam6_autofocus_pane_g

0xe2a7,	// (0x00049cdc) cam6_timer_pane_g1

0xe2af,	// (0x00049ce4) cam6_timer_pane_t1

0xe2bd,	// (0x00049cf2) cam6_zoom_cont_pane

0xe2c5,	// (0x00049cfa) cam6_zoom_pane_g1

0xe2ce,	// (0x00049d03) cam6_zoom_pane_g2

0x80b6,	// (0x00043aeb) cam6_zoom_pane_g3

0x0002,

0xfac5,	// (0x0004b4fa) cam6_zoom_pane_g

0xb11d,	// (0x00046b52) cam6_battery_pane_g1

0xb11d,	// (0x00046b52) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x0004add2) cam6_battery_pane_g

0xe2c5,	// (0x00049cfa) cam6_zoom_cont_pane_g1

0xe2ce,	// (0x00049d03) cam6_zoom_cont_pane_g2

0xe2d7,	// (0x00049d0c) cam6_zoom_cont_pane_g3

0x0002,

0xfacc,	// (0x0004b501) cam6_zoom_cont_pane_g

0x80d4,	// (0x00043b09) cam6_mode_pane_cp_ParamLimits

0x80d4,	// (0x00043b09) cam6_mode_pane_cp

0x80e8,	// (0x00043b1d) cam6_zoom_pane_cp_ParamLimits

0x80e8,	// (0x00043b1d) cam6_zoom_pane_cp

0x8100,	// (0x00043b35) vid6_image_uncrop_cif_pane_ParamLimits

0x8100,	// (0x00043b35) vid6_image_uncrop_cif_pane

0x812c,	// (0x00043b61) vid6_image_uncrop_nhd_pane_ParamLimits

0x812c,	// (0x00043b61) vid6_image_uncrop_nhd_pane

0x8149,	// (0x00043b7e) vid6_image_uncrop_vga_pane_ParamLimits

0x8149,	// (0x00043b7e) vid6_image_uncrop_vga_pane

0x8168,	// (0x00043b9d) vid6_image_uncrop_wvga_pane_ParamLimits

0x8168,	// (0x00043b9d) vid6_image_uncrop_wvga_pane

0x8185,	// (0x00043bba) vid6_indi_pane_ParamLimits

0x8185,	// (0x00043bba) vid6_indi_pane

0xd589,	// (0x00048fbe) bg_tb_trans_pane_cp09_ParamLimits

0xd589,	// (0x00048fbe) bg_tb_trans_pane_cp09

0xe2ef,	// (0x00049d24) cam6_battery_pane_cp_ParamLimits

0xe2ef,	// (0x00049d24) cam6_battery_pane_cp

0xe2fb,	// (0x00049d30) vid6_indi_pane_g1_ParamLimits

0xe2fb,	// (0x00049d30) vid6_indi_pane_g1

0xe30d,	// (0x00049d42) vid6_indi_pane_g2_ParamLimits

0xe30d,	// (0x00049d42) vid6_indi_pane_g2

0xe31f,	// (0x00049d54) vid6_indi_pane_g3_ParamLimits

0xe31f,	// (0x00049d54) vid6_indi_pane_g3

0xe334,	// (0x00049d69) vid6_indi_pane_g4_ParamLimits

0xe334,	// (0x00049d69) vid6_indi_pane_g4

0xe349,	// (0x00049d7e) vid6_indi_pane_g5_ParamLimits

0xe349,	// (0x00049d7e) vid6_indi_pane_g5

0x0004,

0xfad3,	// (0x0004b508) vid6_indi_pane_g_ParamLimits

0xfad3,	// (0x0004b508) vid6_indi_pane_g

0xe363,	// (0x00049d98) vid6_indi_pane_t1_ParamLimits

0xe363,	// (0x00049d98) vid6_indi_pane_t1

0xe379,	// (0x00049dae) vid6_indi_pane_t2_ParamLimits

0xe379,	// (0x00049dae) vid6_indi_pane_t2

0xe3a1,	// (0x00049dd6) vid6_indi_pane_t3_ParamLimits

0xe3a1,	// (0x00049dd6) vid6_indi_pane_t3

0xe3c9,	// (0x00049dfe) vid6_indi_pane_t4_ParamLimits

0xe3c9,	// (0x00049dfe) vid6_indi_pane_t4

0x0003,

0xfade,	// (0x0004b513) vid6_indi_pane_t_ParamLimits

0xfade,	// (0x0004b513) vid6_indi_pane_t

0xe3ed,	// (0x00049e22) wait_bar_pane_cp08

0x81a8,	// (0x00043bdd) main_cset_text2_pane_t1_ParamLimits

0x81a8,	// (0x00043bdd) main_cset_text2_pane_t1

0x80bf,	// (0x00043af4) listscroll_gen_pane_cp06_t1_ParamLimits

0x80bf,	// (0x00043af4) listscroll_gen_pane_cp06_t1

0xa79e,	// (0x000461d3) main_cam6_set_pane

0xaece,	// (0x00046903) bg_tb_trans_pane_cp06_ParamLimits

0x6d92,	// (0x000427c7) cam4_indicators_pane_g1_ParamLimits

0x6da3,	// (0x000427d8) cam4_indicators_pane_g2_ParamLimits

0xf856,	// (0x0004b28b) cam4_indicators_pane_g_ParamLimits

0x6dbb,	// (0x000427f0) cam4_indicators_pane_t1_ParamLimits

0xae75,	// (0x000468aa) bg_tb_trans_pane_cp07_ParamLimits

0x6e6c,	// (0x000428a1) vid4_indicators_pane_g1_ParamLimits

0x6e80,	// (0x000428b5) vid4_indicators_pane_g2_ParamLimits

0x6e94,	// (0x000428c9) vid4_indicators_pane_g3_ParamLimits

0x6ea5,	// (0x000428da) vid4_indicators_pane_g4_ParamLimits

0xf868,	// (0x0004b29d) vid4_indicators_pane_g_ParamLimits

0x6ec1,	// (0x000428f6) vid4_indicators_pane_t1_ParamLimits

0x7c84,	// (0x000436b9) vid4_progress_pane_g1_ParamLimits

0x7c94,	// (0x000436c9) vid4_progress_pane_g2_ParamLimits

0x7ca4,	// (0x000436d9) vid4_progress_pane_g3_ParamLimits

0x7cb6,	// (0x000436eb) vid4_progress_pane_g4_ParamLimits

0xfa0f,	// (0x0004b444) vid4_progress_pane_g_ParamLimits

0x7cce,	// (0x00043703) vid4_progress_pane_t1_ParamLimits

0x7ce4,	// (0x00043719) vid4_progress_pane_t2_ParamLimits

0x7cf9,	// (0x0004372e) vid4_progress_pane_t3_ParamLimits

0xfa1a,	// (0x0004b44f) vid4_progress_pane_t_ParamLimits

0x7d0f,	// (0x00043744) wait_bar_pane_cp07_ParamLimits

0x81df,	// (0x00043c14) main_cam6_set_pane_g2_ParamLimits

0x81df,	// (0x00043c14) main_cam6_set_pane_g2

0x81eb,	// (0x00043c20) main_cset6_listscroll_pane_ParamLimits

0x81eb,	// (0x00043c20) main_cset6_listscroll_pane

0x8216,	// (0x00043c4b) main_cset6_slider_pane_ParamLimits

0x8216,	// (0x00043c4b) main_cset6_slider_pane

0x8222,	// (0x00043c57) main_cset6_text2_pane_ParamLimits

0x8222,	// (0x00043c57) main_cset6_text2_pane

0xe3fc,	// (0x00049e31) main_cset6_text_pane

0xe404,	// (0x00049e39) main_cset_list_pane_copy1_ParamLimits

0xe404,	// (0x00049e39) main_cset_list_pane_copy1

0xe414,	// (0x00049e49) scroll_pane_cp028_copy1

0x8235,	// (0x00043c6a) cset_list_set_pane_copy1

0x824b,	// (0x00043c80) aid_position_infowindow_above_copy1

0x8253,	// (0x00043c88) aid_position_infowindow_below_copy1

0x1f58,	// (0x0003d98d) cset_list_set_pane_g1_copy1

0x1cea,	// (0x0003d71f) cset_list_set_pane_g3_copy1_ParamLimits

0x1cea,	// (0x0003d71f) cset_list_set_pane_g3_copy1

0x1cf9,	// (0x0003d72e) cset_list_set_pane_t1_copy1_ParamLimits

0x1cf9,	// (0x0003d72e) cset_list_set_pane_t1_copy1

0xae75,	// (0x000468aa) list_highlight_pane_cp021_copy1_ParamLimits

0xae75,	// (0x000468aa) list_highlight_pane_cp021_copy1

0xe41d,	// (0x00049e52) cset6_slider_pane_ParamLimits

0xe41d,	// (0x00049e52) cset6_slider_pane

0xe449,	// (0x00049e7e) main_cset6_slider_pane_g1_ParamLimits

0xe449,	// (0x00049e7e) main_cset6_slider_pane_g1

0x825b,	// (0x00043c90) main_cset6_slider_pane_g2_ParamLimits

0x825b,	// (0x00043c90) main_cset6_slider_pane_g2

0xe471,	// (0x00049ea6) main_cset6_slider_pane_g3_ParamLimits

0xe471,	// (0x00049ea6) main_cset6_slider_pane_g3

0x8283,	// (0x00043cb8) main_cset6_slider_pane_g4_ParamLimits

0x8283,	// (0x00043cb8) main_cset6_slider_pane_g4

0x828f,	// (0x00043cc4) main_cset6_slider_pane_g5_ParamLimits

0x828f,	// (0x00043cc4) main_cset6_slider_pane_g5

0xdcd1,	// (0x00049706) main_cset6_slider_pane_g7_ParamLimits

0xdcd1,	// (0x00049706) main_cset6_slider_pane_g7

0xdcdd,	// (0x00049712) main_cset6_slider_pane_g8_ParamLimits

0xdcdd,	// (0x00049712) main_cset6_slider_pane_g8

0x829d,	// (0x00043cd2) main_cset6_slider_pane_g9_ParamLimits

0x829d,	// (0x00043cd2) main_cset6_slider_pane_g9

0x82a9,	// (0x00043cde) main_cset6_slider_pane_g10_ParamLimits

0x82a9,	// (0x00043cde) main_cset6_slider_pane_g10

0x82b5,	// (0x00043cea) main_cset6_slider_pane_g11_ParamLimits

0x82b5,	// (0x00043cea) main_cset6_slider_pane_g11

0x82c1,	// (0x00043cf6) main_cset6_slider_pane_g12_ParamLimits

0x82c1,	// (0x00043cf6) main_cset6_slider_pane_g12

0xdfef,	// (0x00049a24) main_cset6_slider_pane_g13_ParamLimits

0xdfef,	// (0x00049a24) main_cset6_slider_pane_g13

0xdffb,	// (0x00049a30) main_cset6_slider_pane_g14_ParamLimits

0xdffb,	// (0x00049a30) main_cset6_slider_pane_g14

0x82cd,	// (0x00043d02) main_cset6_slider_pane_g15_ParamLimits

0x82cd,	// (0x00043d02) main_cset6_slider_pane_g15

0x82e5,	// (0x00043d1a) main_cset6_slider_pane_g16_ParamLimits

0x82e5,	// (0x00043d1a) main_cset6_slider_pane_g16

0x82f3,	// (0x00043d28) main_cset6_slider_pane_g17_ParamLimits

0x82f3,	// (0x00043d28) main_cset6_slider_pane_g17

0x0011,

0xfae7,	// (0x0004b51c) main_cset6_slider_pane_g_ParamLimits

0xfae7,	// (0x0004b51c) main_cset6_slider_pane_g

0xe489,	// (0x00049ebe) main_cset6_slider_pane_t1_ParamLimits

0xe489,	// (0x00049ebe) main_cset6_slider_pane_t1

0x830d,	// (0x00043d42) main_cset6_slider_pane_t2_ParamLimits

0x830d,	// (0x00043d42) main_cset6_slider_pane_t2

0x8338,	// (0x00043d6d) main_cset6_slider_pane_t3_ParamLimits

0x8338,	// (0x00043d6d) main_cset6_slider_pane_t3

0x8363,	// (0x00043d98) main_cset6_slider_pane_t4_ParamLimits

0x8363,	// (0x00043d98) main_cset6_slider_pane_t4

0x838e,	// (0x00043dc3) main_cset6_slider_pane_t5_ParamLimits

0x838e,	// (0x00043dc3) main_cset6_slider_pane_t5

0xe4ca,	// (0x00049eff) main_cset6_slider_pane_t7_ParamLimits

0xe4ca,	// (0x00049eff) main_cset6_slider_pane_t7

0x83bb,	// (0x00043df0) main_cset6_slider_pane_t8_ParamLimits

0x83bb,	// (0x00043df0) main_cset6_slider_pane_t8

0x83df,	// (0x00043e14) main_cset6_slider_pane_t9_ParamLimits

0x83df,	// (0x00043e14) main_cset6_slider_pane_t9

0x8403,	// (0x00043e38) main_cset6_slider_pane_t10_ParamLimits

0x8403,	// (0x00043e38) main_cset6_slider_pane_t10

0x8427,	// (0x00043e5c) main_cset6_slider_pane_t11_ParamLimits

0x8427,	// (0x00043e5c) main_cset6_slider_pane_t11

0xe500,	// (0x00049f35) main_cset6_slider_pane_t14_ParamLimits

0xe500,	// (0x00049f35) main_cset6_slider_pane_t14

0xe539,	// (0x00049f6e) main_cset6_slider_pane_t15_ParamLimits

0xe539,	// (0x00049f6e) main_cset6_slider_pane_t15

0x000b,

0xfb0c,	// (0x0004b541) main_cset6_slider_pane_t_ParamLimits

0xfb0c,	// (0x0004b541) main_cset6_slider_pane_t

0xd9cf,	// (0x00049404) cset_slider_pane_g1_copy1

0xe572,	// (0x00049fa7) cset_slider_pane_g2_copy1

0xe57b,	// (0x00049fb0) cset_slider_pane_g3_copy1

0xa79e,	// (0x000461d3) bg_popup_sub_pane_cp011_copy1

0xe58d,	// (0x00049fc2) main_cset_text_pane_g1_copy1

0xde1f,	// (0x00049854) main_cset_text_pane_t1_copy1

0xde2d,	// (0x00049862) main_cset_text_pane_t2_copy1

0xde3b,	// (0x00049870) main_cset_text_pane_t3_copy1

0xde49,	// (0x0004987e) main_cset_text_pane_t4_copy1

0xde57,	// (0x0004988c) main_cset_text_pane_t5_copy1

0xe595,	// (0x00049fca) main_cset_text_pane_t6_copy1

0xe5a3,	// (0x00049fd8) main_cset_text_pane_t7_copy1

0x844d,	// (0x00043e82) main_cset_text2_pane_t1_copy1

0xae75,	// (0x000468aa) main_ncimui_pane

0x5528,	// (0x00040f5d) popup_query_ncimui_window_ParamLimits

0x5528,	// (0x00040f5d) popup_query_ncimui_window

0x1b8c,	// (0x0003d5c1) field_cale_ev2_pane_g4_ParamLimits

0x1b8c,	// (0x0003d5c1) field_cale_ev2_pane_g4

0x6622,	// (0x00042057) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6622,	// (0x00042057) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7f0,	// (0x0004b225) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7f0,	// (0x0004b225) cell_video_dialer_keypad_pane_g

0x663a,	// (0x0004206f) cell_video_dialer_keypad_pane_t1

0xa79e,	// (0x000461d3) bg_popup_window_pane_cp012

0xce29,	// (0x0004885e) heading_pane_cp06

0xe5cf,	// (0x0004a004) ncim_query_content_pane

0xa79e,	// (0x000461d3) bg_popup_heading_pane_cp01

0xe5d7,	// (0x0004a00c) ncim_heading_pane_t1

0xe5e5,	// (0x0004a01a) ncim_indicator_popup_pane

0xe5f7,	// (0x0004a02c) ncim_query_button_pane

0xe60b,	// (0x0004a040) ncim_query_content_pane_t1

0xe61d,	// (0x0004a052) ncim_query_content_pane_t2

0x0005,

0xfb50,	// (0x0004b585) ncim_query_content_pane_t

0xe657,	// (0x0004a08c) ncim_query_list_pane

0xe669,	// (0x0004a09e) ncim_query_popup_pane

0xe5e5,	// (0x0004a01a) ncim_indicator_popup_pane_ParamLimits

0x85a1,	// (0x00043fd6) ncim_query_content_pane_g1_ParamLimits

0x85a1,	// (0x00043fd6) ncim_query_content_pane_g1

0xe60b,	// (0x0004a040) ncim_query_content_pane_t1_ParamLimits

0xe61d,	// (0x0004a052) ncim_query_content_pane_t2_ParamLimits

0x85ad,	// (0x00043fe2) ncim_query_content_pane_t3_ParamLimits

0x85ad,	// (0x00043fe2) ncim_query_content_pane_t3

0x85ca,	// (0x00043fff) ncim_query_content_pane_t4_ParamLimits

0x85ca,	// (0x00043fff) ncim_query_content_pane_t4

0x85e7,	// (0x0004401c) ncim_query_content_pane_t5_ParamLimits

0x85e7,	// (0x0004401c) ncim_query_content_pane_t5

0xe62f,	// (0x0004a064) ncim_query_content_pane_t6_ParamLimits

0xe62f,	// (0x0004a064) ncim_query_content_pane_t6

0xfb50,	// (0x0004b585) ncim_query_content_pane_t_ParamLimits

0xe657,	// (0x0004a08c) ncim_query_list_pane_ParamLimits

0xe669,	// (0x0004a09e) ncim_query_popup_pane_ParamLimits

0xe67d,	// (0x0004a0b2) wait_bar_pane_cp04

0xa79e,	// (0x000461d3) input_focus_pane_cp011

0xe685,	// (0x0004a0ba) ncim_query_popup_pane_t1

0xe693,	// (0x0004a0c8) ncim_list_query_list_pane_ParamLimits

0xe693,	// (0x0004a0c8) ncim_list_query_list_pane

0xa79e,	// (0x000461d3) bg_button_pane_cp027

0xe6a0,	// (0x0004a0d5) ncim_query_button_pane_g1

0xa79e,	// (0x000461d3) list_highlight_pane_cp012

0xe6aa,	// (0x0004a0df) ncim_list_query_list_pane_g1

0xe6b2,	// (0x0004a0e7) ncim_list_query_list_pane_t1

0x6daf,	// (0x000427e4) cam4_indicators_pane_g3_ParamLimits

0x6daf,	// (0x000427e4) cam4_indicators_pane_g3

0x6eb1,	// (0x000428e6) vid4_indicators_pane_g5_ParamLimits

0x6eb1,	// (0x000428e6) vid4_indicators_pane_g5

0x7cc2,	// (0x000436f7) vid4_progress_pane_g5_ParamLimits

0x7cc2,	// (0x000436f7) vid4_progress_pane_g5

0x848d,	// (0x00043ec2) main_ncimui_pane_g1

0x84f5,	// (0x00043f2a) ncimui_group_query_pane_ParamLimits

0x84f5,	// (0x00043f2a) ncimui_group_query_pane

0x853d,	// (0x00043f72) ncimui_list_pane_ParamLimits

0x853d,	// (0x00043f72) ncimui_list_pane

0x8564,	// (0x00043f99) ncimui_text_pane_ParamLimits

0x8564,	// (0x00043f99) ncimui_text_pane

0x8604,	// (0x00044039) ncimui_text_pane_t1_ParamLimits

0x8604,	// (0x00044039) ncimui_text_pane_t1

0xe6c0,	// (0x0004a0f5) ncimui_list_single_graphic_pane_ParamLimits

0xe6c0,	// (0x0004a0f5) ncimui_list_single_graphic_pane

0x8623,	// (0x00044058) ncimui_query_pane_ParamLimits

0x8623,	// (0x00044058) ncimui_query_pane

0xa79e,	// (0x000461d3) list_highlight_pane_cp013

0xe6d0,	// (0x0004a105) ncim_list_query_list_pane_t1_copy1

0xe6de,	// (0x0004a113) ncim_list_single_graphic_pane_g1

0x8636,	// (0x0004406b) ncim_query_button_pane_cp01

0x8642,	// (0x00044077) ncim_query_entry_pane_ParamLimits

0x8642,	// (0x00044077) ncim_query_entry_pane

0x8655,	// (0x0004408a) ncimui_query_pane_g1

0x8661,	// (0x00044096) ncimui_query_pane_t1_ParamLimits

0x8661,	// (0x00044096) ncimui_query_pane_t1

0xae75,	// (0x000468aa) input_focus_pane_cp012

0xe6e6,	// (0x0004a11b) ncim_query_entry_pane_t1

0xaf40,	// (0x00046975) main_im_pane_ParamLimits

0xae75,	// (0x000468aa) main_mobtv_pane_ParamLimits

0xae75,	// (0x000468aa) main_mobtv_pane

0x8301,	// (0x00043d36) main_cset6_slider_pane_g18_ParamLimits

0x8301,	// (0x00043d36) main_cset6_slider_pane_g18

0xe47d,	// (0x00049eb2) main_cset6_slider_pane_g19_ParamLimits

0xe47d,	// (0x00049eb2) main_cset6_slider_pane_g19

0xbcb4,	// (0x000476e9) bg_main_mobtv_pane_ParamLimits

0xbcb4,	// (0x000476e9) bg_main_mobtv_pane

0x867a,	// (0x000440af) main_mobtv_info_pane

0x8685,	// (0x000440ba) main_mobtv_loading_pane_ParamLimits

0x8685,	// (0x000440ba) main_mobtv_loading_pane

0xe6f8,	// (0x0004a12d) main_mobtv_pg_channel_list_pane

0xe702,	// (0x0004a137) main_mobtv_pg_hdr_pane

0x8692,	// (0x000440c7) main_mobtv_programe_curr_pane_ParamLimits

0x8692,	// (0x000440c7) main_mobtv_programe_curr_pane

0x869f,	// (0x000440d4) main_mobtv_programe_next_pane_ParamLimits

0x869f,	// (0x000440d4) main_mobtv_programe_next_pane

0xe70b,	// (0x0004a140) popup_mobtv_noti_window

0xb11d,	// (0x00046b52) main_tv_pg_hdr_pane_g1

0xe713,	// (0x0004a148) main_tv_pg_hdr_pane_g2

0xe71b,	// (0x0004a150) main_tv_pg_hdr_pane_g3

0xe723,	// (0x0004a158) main_tv_pg_hdr_pane_g4

0xe72b,	// (0x0004a160) main_tv_pg_hdr_pane_g5

0xe735,	// (0x0004a16a) main_tv_pg_hdr_pane_g6

0xe73f,	// (0x0004a174) main_tv_pg_hdr_pane_g7

0xe749,	// (0x0004a17e) main_tv_pg_hdr_pane_g8

0xe753,	// (0x0004a188) main_tv_pg_hdr_pane_g9

0xe75d,	// (0x0004a192) main_tv_pg_hdr_pane_g10

0xe767,	// (0x0004a19c) main_tv_pg_hdr_pane_g11

0x000a,

0xfb5d,	// (0x0004b592) main_tv_pg_hdr_pane_g

0xe771,	// (0x0004a1a6) main_tv_pg_hdr_pane_t1

0xe77f,	// (0x0004a1b4) main_tv_pg_hdr_pane_t2

0xe78d,	// (0x0004a1c2) main_tv_pg_hdr_pane_t3

0xe79d,	// (0x0004a1d2) main_tv_pg_hdr_pane_t4

0xe7ad,	// (0x0004a1e2) main_tv_pg_hdr_pane_t5

0x0004,

0xfb74,	// (0x0004b5a9) main_tv_pg_hdr_pane_t

0xe7bd,	// (0x0004a1f2) single_mobtv_pg_channel_pane_ParamLimits

0xe7bd,	// (0x0004a1f2) single_mobtv_pg_channel_pane

0xe7cf,	// (0x0004a204) single_mobtv_pg_channel_table_pane

0xb445,	// (0x00046e7a) single_mobtv_pg_channel_thumb_pane

0xe7d8,	// (0x0004a20d) single_tv_pg_channel_pane_g1

0xe7e1,	// (0x0004a216) single_tv_pg_channel_pane_g2

0x0001,

0xfb7f,	// (0x0004b5b4) single_tv_pg_channel_pane_g

0xaece,	// (0x00046903) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xaece,	// (0x00046903) bg_single_mobtv_pg_channel_thumb_pane

0xe7ea,	// (0x0004a21f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe7ea,	// (0x0004a21f) single_mobtv_pg_channel_thumb_pane_g1

0xe806,	// (0x0004a23b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe806,	// (0x0004a23b) single_mobtv_pg_channel_thumb_pane_g2

0xe812,	// (0x0004a247) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe812,	// (0x0004a247) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb84,	// (0x0004b5b9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb84,	// (0x0004b5b9) single_mobtv_pg_channel_thumb_pane_g

0xe81e,	// (0x0004a253) single_mobtv_pg_channel_thumb_pane_t1

0xe82c,	// (0x0004a261) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb8b,	// (0x0004b5c0) single_mobtv_pg_channel_thumb_pane_t

0xb11d,	// (0x00046b52) bg_single_mobtv_pg_channel_table_pane_g1

0xb11d,	// (0x00046b52) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x0004add2) bg_single_mobtv_pg_channel_table_pane_g

0xe83a,	// (0x0004a26f) single_mobtv_pg_channel_table_pane_t1

0xe848,	// (0x0004a27d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb90,	// (0x0004b5c5) single_mobtv_pg_channel_table_pane_t

0x86b4,	// (0x000440e9) main_mobtv_info_pane_g1_ParamLimits

0x86b4,	// (0x000440e9) main_mobtv_info_pane_g1

0x86d0,	// (0x00044105) main_mobtv_info_pane_t1_ParamLimits

0x86d0,	// (0x00044105) main_mobtv_info_pane_t1

0x8748,	// (0x0004417d) main_mobtv_info_pane_t2_ParamLimits

0x8748,	// (0x0004417d) main_mobtv_info_pane_t2

0x0002,

0xfb9a,	// (0x0004b5cf) main_mobtv_info_pane_t_ParamLimits

0xfb9a,	// (0x0004b5cf) main_mobtv_info_pane_t

0x87d7,	// (0x0004420c) wait_bar_pane_cp05

0x87e9,	// (0x0004421e) main_mobtv_loading_pane_g1_ParamLimits

0x87e9,	// (0x0004421e) main_mobtv_loading_pane_g1

0x87f7,	// (0x0004422c) main_mobtv_loading_pane_g2_ParamLimits

0x87f7,	// (0x0004422c) main_mobtv_loading_pane_g2

0x8803,	// (0x00044238) main_mobtv_loading_pane_g3_ParamLimits

0x8803,	// (0x00044238) main_mobtv_loading_pane_g3

0x0002,

0xfba1,	// (0x0004b5d6) main_mobtv_loading_pane_g_ParamLimits

0xfba1,	// (0x0004b5d6) main_mobtv_loading_pane_g

0xe856,	// (0x0004a28b) main_mobtv_loading_pane_t1_ParamLimits

0xe856,	// (0x0004a28b) main_mobtv_loading_pane_t1

0xe86e,	// (0x0004a2a3) main_mobtv_loading_pane_t2_ParamLimits

0xe86e,	// (0x0004a2a3) main_mobtv_loading_pane_t2

0x0001,

0xfba8,	// (0x0004b5dd) main_mobtv_loading_pane_t_ParamLimits

0xfba8,	// (0x0004b5dd) main_mobtv_loading_pane_t

0x8811,	// (0x00044246) wait_bar_pane_cp06_ParamLimits

0x8811,	// (0x00044246) wait_bar_pane_cp06

0xe892,	// (0x0004a2c7) main_mobtv_programe_curr_pane_t1

0xe8a0,	// (0x0004a2d5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbad,	// (0x0004b5e2) main_mobtv_programe_curr_pane_t

0xe8ae,	// (0x0004a2e3) main_mobtv_programe_next_pane_t1

0xe8bc,	// (0x0004a2f1) main_mobtv_programe_next_pane_t2

0xe8ca,	// (0x0004a2ff) main_mobtv_programe_next_pane_t3

0x0002,

0xfbb2,	// (0x0004b5e7) main_mobtv_programe_next_pane_t

0xa79e,	// (0x000461d3) bg_popup_mobtv_noti_window_pane

0xe8d8,	// (0x0004a30d) popup_mobtv_noti_window_g1

0xe8e0,	// (0x0004a315) popup_mobtv_noti_window_t1

0xe8ee,	// (0x0004a323) popup_mobtv_noti_window_t2

0x0001,

0xfbb9,	// (0x0004b5ee) popup_mobtv_noti_window_t

0xb11d,	// (0x00046b52) bg_popup_mobtv_noti_window_pane_g1

0xa79e,	// (0x000461d3) sc_clock_pane

0xa79e,	// (0x000461d3) main_fs_bigclock_pane

0x7e87,	// (0x000438bc) blid2_tripm_pane_t4_ParamLimits

0x7e87,	// (0x000438bc) blid2_tripm_pane_t4

0x881d,	// (0x00044252) sc_clock_pane_g1_ParamLimits

0x881d,	// (0x00044252) sc_clock_pane_g1

0x882b,	// (0x00044260) sc_clock_pane_t1_ParamLimits

0x882b,	// (0x00044260) sc_clock_pane_t1

0x883e,	// (0x00044273) sc_clock_pane_t2_ParamLimits

0x883e,	// (0x00044273) sc_clock_pane_t2

0x8850,	// (0x00044285) sc_clock_pane_t3_ParamLimits

0x8850,	// (0x00044285) sc_clock_pane_t3

0x0004,

0xfbbe,	// (0x0004b5f3) sc_clock_pane_t_ParamLimits

0xfbbe,	// (0x0004b5f3) sc_clock_pane_t

0x9131,	// (0x00044b66) main_fs_bigclock_indicator_pane_ParamLimits

0x9131,	// (0x00044b66) main_fs_bigclock_indicator_pane

0x88d3,	// (0x00044308) main_fs_bigclock_pane_g1_ParamLimits

0x88d3,	// (0x00044308) main_fs_bigclock_pane_g1

0x913d,	// (0x00044b72) main_fs_bigclock_pane_t1_ParamLimits

0x913d,	// (0x00044b72) main_fs_bigclock_pane_t1

0x914f,	// (0x00044b84) main_fs_bigclock_pane_t2_ParamLimits

0x914f,	// (0x00044b84) main_fs_bigclock_pane_t2

0x9163,	// (0x00044b98) main_fs_bigclock_pane_t3_ParamLimits

0x9163,	// (0x00044b98) main_fs_bigclock_pane_t3

0x0002,

0xfd4f,	// (0x0004b784) main_fs_bigclock_pane_t_ParamLimits

0xfd4f,	// (0x0004b784) main_fs_bigclock_pane_t

0x017e,	// (0x0003bbb3) main_fs_bigclock_indicator_pane_g1

0xe5ff,	// (0x0004a034) ncim_query_content_pane_g2_ParamLimits

0xe5ff,	// (0x0004a034) ncim_query_content_pane_g2

0x0001,

0xfb4b,	// (0x0004b580) ncim_query_content_pane_g_ParamLimits

0xfb4b,	// (0x0004b580) ncim_query_content_pane_g

0x8864,	// (0x00044299) sc_clock_pane_t4_ParamLimits

0x8864,	// (0x00044299) sc_clock_pane_t4

0xae75,	// (0x000468aa) main_radioblah_pane

0x6c55,	// (0x0004268a) cell_call4_button_pane_t1_copy1_ParamLimits

0x6c55,	// (0x0004268a) cell_call4_button_pane_t1_copy1

0x84a7,	// (0x00043edc) main_ncimui_pane_t1_ParamLimits

0x84a7,	// (0x00043edc) main_ncimui_pane_t1

0x84c1,	// (0x00043ef6) main_ncimui_pane_t2_ParamLimits

0x84c1,	// (0x00043ef6) main_ncimui_pane_t2

0x0002,

0xfb44,	// (0x0004b579) main_ncimui_pane_t_ParamLimits

0xfb44,	// (0x0004b579) main_ncimui_pane_t

0xea34,	// (0x0004a469) main_radioblah_anim_pane_ParamLimits

0xea34,	// (0x0004a469) main_radioblah_anim_pane

0xea45,	// (0x0004a47a) main_radioblah_info_pane_ParamLimits

0xea45,	// (0x0004a47a) main_radioblah_info_pane

0xea59,	// (0x0004a48e) main_radioblah_pane_t1_ParamLimits

0xea59,	// (0x0004a48e) main_radioblah_pane_t1

0xea75,	// (0x0004a4aa) main_radioblah_pane_t2_ParamLimits

0xea75,	// (0x0004a4aa) main_radioblah_pane_t2

0x0003,

0xfbdf,	// (0x0004b614) main_radioblah_pane_t_ParamLimits

0xfbdf,	// (0x0004b614) main_radioblah_pane_t

0x8929,	// (0x0004435e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8929,	// (0x0004435e) main_radioblah_rocker_ctrl_pane

0xeabd,	// (0x0004a4f2) main_radioblah_info_pane_t1_ParamLimits

0xeabd,	// (0x0004a4f2) main_radioblah_info_pane_t1

0x896e,	// (0x000443a3) main_radioblah_info_pane_t2_ParamLimits

0x896e,	// (0x000443a3) main_radioblah_info_pane_t2

0x0003,

0xfbe8,	// (0x0004b61d) main_radioblah_info_pane_t_ParamLimits

0xfbe8,	// (0x0004b61d) main_radioblah_info_pane_t

0xb11d,	// (0x00046b52) main_radioblah_rocker_ctrl_pane_g1

0x8a1e,	// (0x00044453) main_radioblah_rocker_ctrl_pane_g2

0x8a26,	// (0x0004445b) main_radioblah_rocker_ctrl_pane_g3

0x8a2e,	// (0x00044463) main_radioblah_rocker_ctrl_pane_g4

0x8a36,	// (0x0004446b) main_radioblah_rocker_ctrl_pane_g5

0x8a3e,	// (0x00044473) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbf1,	// (0x0004b626) main_radioblah_rocker_ctrl_pane_g

0x844d,	// (0x00043e82) main_cset_text2_pane_t1_copy1_ParamLimits

0x6ce0,	// (0x00042715) cam4_image_uncrop_qvga_pane

0x6e21,	// (0x00042856) vid4_image_uncrop_qcif_pane

0x801b,	// (0x00043a50) cam6_image_uncrop_qvga_pane_ParamLimits

0x801b,	// (0x00043a50) cam6_image_uncrop_qvga_pane

0xe2df,	// (0x00049d14) vid6_image_uncrop_qcif_pane_ParamLimits

0xe2df,	// (0x00049d14) vid6_image_uncrop_qcif_pane

0xa79e,	// (0x000461d3) bg_popup_preview_window_pane_cp03

0xe5b1,	// (0x00049fe6) list_cset_text2_pane

0xe5b9,	// (0x00049fee) main_cset6_text2_pane_g1

0xe5c1,	// (0x00049ff6) main_cset6_text2_pane_t1

0x8a46,	// (0x0004447b) list_cset_text2_pane_t1_ParamLimits

0x8a46,	// (0x0004447b) list_cset_text2_pane_t1

0xae75,	// (0x000468aa) main_radioblah_pane_ParamLimits

0x87c3,	// (0x000441f8) main_mobtv_info_pane_t3_ParamLimits

0x87c3,	// (0x000441f8) main_mobtv_info_pane_t3

0x8917,	// (0x0004434c) main_radioblah_pane_g1

0x8942,	// (0x00044377) main_radioblah_info_pane_g1

0x89c3,	// (0x000443f8) main_radioblah_info_pane_t3_ParamLimits

0x89c3,	// (0x000443f8) main_radioblah_info_pane_t3

0x456c,	// (0x0003ffa1) highlight_cell_cale_month_pane_ParamLimits

0x456c,	// (0x0003ffa1) highlight_cell_cale_month_pane

0xa79e,	// (0x000461d3) main_phob_fisheye_pane

0xd600,	// (0x00049035) scroll_pane_cp0031_ParamLimits

0xd600,	// (0x00049035) scroll_pane_cp0031

0xe3ed,	// (0x00049e22) wait_bar_pane_cp08_ParamLimits

0x8235,	// (0x00043c6a) cset_list_set_pane_copy1_ParamLimits

0xeaf7,	// (0x0004a52c) highlight_cell_cale_month_pane_g1

0x8a67,	// (0x0004449c) highlight_cell_cale_month_pane_t1

0xe082,	// (0x00049ab7) list_gen_pane_cp01

0xdcbc,	// (0x000496f1) scroll_pane_01

0x8a75,	// (0x000444aa) list_single_double_fisheye_pane

0x1f7d,	// (0x0003d9b2) list_double_fisheye_pane_g1_ParamLimits

0x1f7d,	// (0x0003d9b2) list_double_fisheye_pane_g1

0x1f89,	// (0x0003d9be) list_double_fisheye_pane_g2_ParamLimits

0x1f89,	// (0x0003d9be) list_double_fisheye_pane_g2

0x8a7e,	// (0x000444b3) list_double_fisheye_pane_g3_ParamLimits

0x8a7e,	// (0x000444b3) list_double_fisheye_pane_g3

0x0004,

0xfbfe,	// (0x0004b633) list_double_fisheye_pane_g_ParamLimits

0xfbfe,	// (0x0004b633) list_double_fisheye_pane_g

0x1fba,	// (0x0003d9ef) list_double_fisheye_pane_t1_ParamLimits

0x1fba,	// (0x0003d9ef) list_double_fisheye_pane_t1

0x1fd5,	// (0x0003da0a) list_double_fisheye_pane_t2_ParamLimits

0x1fd5,	// (0x0003da0a) list_double_fisheye_pane_t2

0x0001,

0xfc09,	// (0x0004b63e) list_double_fisheye_pane_t_ParamLimits

0xfc09,	// (0x0004b63e) list_double_fisheye_pane_t

0xa79e,	// (0x000461d3) main_call5_pane

0x888a,	// (0x000442bf) sc_swipe_pane_ParamLimits

0x888a,	// (0x000442bf) sc_swipe_pane

0x8a96,	// (0x000444cb) call5_image_pane_ParamLimits

0x8a96,	// (0x000444cb) call5_image_pane

0x8aa6,	// (0x000444db) call5_swipe_1_pane_ParamLimits

0x8aa6,	// (0x000444db) call5_swipe_1_pane

0x8ab2,	// (0x000444e7) call5_swipe_2_pane_ParamLimits

0x8ab2,	// (0x000444e7) call5_swipe_2_pane

0x8acc,	// (0x00044501) popup_call5_audio_first_window_ParamLimits

0x8acc,	// (0x00044501) popup_call5_audio_first_window

0xaece,	// (0x00046903) call5_swipe_1_pane_g1_ParamLimits

0xaece,	// (0x00046903) call5_swipe_1_pane_g1

0xeaff,	// (0x0004a534) call5_swipe_1_pane_g2_ParamLimits

0xeaff,	// (0x0004a534) call5_swipe_1_pane_g2

0x0001,

0xfc0e,	// (0x0004b643) call5_swipe_1_pane_g_ParamLimits

0xfc0e,	// (0x0004b643) call5_swipe_1_pane_g

0xeb0b,	// (0x0004a540) call5_swipe_1_pane_t1_ParamLimits

0xeb0b,	// (0x0004a540) call5_swipe_1_pane_t1

0xaece,	// (0x00046903) call5_swipe_2_pane_g1_ParamLimits

0xaece,	// (0x00046903) call5_swipe_2_pane_g1

0xeb20,	// (0x0004a555) call5_swipe_2_pane_g2_ParamLimits

0xeb20,	// (0x0004a555) call5_swipe_2_pane_g2

0x0001,

0xfc13,	// (0x0004b648) call5_swipe_2_pane_g_ParamLimits

0xfc13,	// (0x0004b648) call5_swipe_2_pane_g

0xeb2c,	// (0x0004a561) call5_swipe_2_pane_t1_ParamLimits

0xeb2c,	// (0x0004a561) call5_swipe_2_pane_t1

0xeb41,	// (0x0004a576) sc_swipe_pane_g1_ParamLimits

0xeb41,	// (0x0004a576) sc_swipe_pane_g1

0xeb4e,	// (0x0004a583) sc_swipe_pane_g2_ParamLimits

0xeb4e,	// (0x0004a583) sc_swipe_pane_g2

0x0001,

0xfc18,	// (0x0004b64d) sc_swipe_pane_g_ParamLimits

0xfc18,	// (0x0004b64d) sc_swipe_pane_g

0xeb5a,	// (0x0004a58f) sc_swipe_pane_t1_ParamLimits

0xeb5a,	// (0x0004a58f) sc_swipe_pane_t1

0xa79e,	// (0x000461d3) main_cmail_launcher_pane

0x8ada,	// (0x0004450f) aid_size_cell_cmail_l_ParamLimits

0x8ada,	// (0x0004450f) aid_size_cell_cmail_l

0x8ae8,	// (0x0004451d) grid_cmail_l_pane_ParamLimits

0x8ae8,	// (0x0004451d) grid_cmail_l_pane

0x8af8,	// (0x0004452d) cell_cmail_l_pane_ParamLimits

0x8af8,	// (0x0004452d) cell_cmail_l_pane

0xeb6f,	// (0x0004a5a4) cell_cmail_l_pane_g1_ParamLimits

0xeb6f,	// (0x0004a5a4) cell_cmail_l_pane_g1

0xeb7b,	// (0x0004a5b0) cell_cmail_l_pane_t1_ParamLimits

0xeb7b,	// (0x0004a5b0) cell_cmail_l_pane_t1

0xeb91,	// (0x0004a5c6) cell_cmail_l_pane_t2_ParamLimits

0xeb91,	// (0x0004a5c6) cell_cmail_l_pane_t2

0x0001,

0xfc1d,	// (0x0004b652) cell_cmail_l_pane_t_ParamLimits

0xfc1d,	// (0x0004b652) cell_cmail_l_pane_t

0xae75,	// (0x000468aa) grid_highlight_pane_cp018_ParamLimits

0xae75,	// (0x000468aa) grid_highlight_pane_cp018

0x28a1,	// (0x0003e2d6) main2_pane_ParamLimits

0x28a1,	// (0x0003e2d6) main2_pane

0xafcf,	// (0x00046a04) popup_sp_fs_action_menu_bg_pane_g1

0xafd7,	// (0x00046a0c) popup_sp_fs_action_menu_bg_pane_g2

0xafdf,	// (0x00046a14) popup_sp_fs_action_menu_bg_pane_g3

0xafe7,	// (0x00046a1c) popup_sp_fs_action_menu_bg_pane_g4

0xafef,	// (0x00046a24) popup_sp_fs_action_menu_bg_pane_g5

0xaff7,	// (0x00046a2c) popup_sp_fs_action_menu_bg_pane_g6

0xafff,	// (0x00046a34) popup_sp_fs_action_menu_bg_pane_g7

0xb007,	// (0x00046a3c) popup_sp_fs_action_menu_bg_pane_g8

0xb00f,	// (0x00046a44) popup_sp_fs_action_menu_bg_pane_g9

0xb017,	// (0x00046a4c) popup_sp_fs_action_menu_bg_pane_g10

0xb017,	// (0x00046a4c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0004ab3a) popup_sp_fs_action_menu_bg_pane_g

0xaece,	// (0x00046903) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t3_g3_g1

0xaece,	// (0x00046903) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t3_g3_g2

0xaece,	// (0x00046903) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0004abe8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0004abe8) list_medium_line_x2_t3_g3_g

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g3_t1

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g3_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g3_t2

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0004abef) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0004abef) list_medium_line_x2_t3_g3_t

0xaece,	// (0x00046903) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t3_g2_g1

0xaece,	// (0x00046903) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0004abf6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0004abf6) list_medium_line_x2_t3_g2_g

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g2_t1

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g2_t2

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0004abef) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0004abef) list_medium_line_x2_t3_g2_t

0xaece,	// (0x00046903) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t4_g4_g1

0xaece,	// (0x00046903) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t4_g4_g2

0xaece,	// (0x00046903) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t4_g4_g3

0xaece,	// (0x00046903) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0004abfb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0004abfb) list_medium_line_x2_t4_g4_g

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g4_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g4_t1

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g4_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g4_t2

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g4_t3_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g4_t3

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0004ac04) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0004ac04) list_medium_line_x2_t4_g4_t

0xaece,	// (0x00046903) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t2_g4_g1

0xaece,	// (0x00046903) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t2_g4_g2

0xaece,	// (0x00046903) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t2_g4_g3

0xaece,	// (0x00046903) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0004abfb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0004abfb) list_medium_line_x2_t2_g4_g

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g4_t1

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x0004ac6b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x0004ac6b) list_medium_line_x2_t2_g4_t

0xaece,	// (0x00046903) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t2_g3_g1

0xaece,	// (0x00046903) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t2_g3_g2

0xaece,	// (0x00046903) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0004abe8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0004abe8) list_medium_line_x2_t2_g3_g

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g3_t1

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x0004ac6b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x0004ac6b) list_medium_line_x2_t2_g3_t

0x474d,	// (0x00040182) main_sp_fs_list_pane_ParamLimits

0x474d,	// (0x00040182) main_sp_fs_list_pane

0x4759,	// (0x0004018e) sp_fs_scroll_pane_ParamLimits

0x4759,	// (0x0004018e) sp_fs_scroll_pane

0xb658,	// (0x0004708d) list_medium_line_x2_t3_t1

0xb658,	// (0x0004708d) list_medium_line_x2_t3_t2

0xb658,	// (0x0004708d) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x0004acb6) list_medium_line_x2_t3_t

0xb658,	// (0x0004708d) list_medium_line_x3_t4_t1

0xb658,	// (0x0004708d) list_medium_line_x3_t4_t2

0xb658,	// (0x0004708d) list_medium_line_x3_t4_t3

0xb658,	// (0x0004708d) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x0004acbd) list_medium_line_x3_t4_t

0xb658,	// (0x0004708d) list_medium_line_x4_t5_t1

0xb658,	// (0x0004708d) list_medium_line_x4_t5_t2

0xb658,	// (0x0004708d) list_medium_line_x4_t5_t3

0xb658,	// (0x0004708d) list_medium_line_x4_t5_t4

0xb658,	// (0x0004708d) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x0004acc6) list_medium_line_x4_t5_t

0xaece,	// (0x00046903) list_medium_line_t4_g4_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t4_g4_g1

0xaece,	// (0x00046903) list_medium_line_t4_g4_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t4_g4_g2

0xaece,	// (0x00046903) list_medium_line_t4_g4_g3_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t4_g4_g3

0xaece,	// (0x00046903) list_medium_line_t4_g4_g4_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0004abfb) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0004abfb) list_medium_line_t4_g4_g

0xb137,	// (0x00046b6c) list_medium_line_t4_g4_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t4_g4_t1

0xb137,	// (0x00046b6c) list_medium_line_t4_g4_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t4_g4_t2

0xb137,	// (0x00046b6c) list_medium_line_t4_g4_t3_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t4_g4_t3

0xb137,	// (0x00046b6c) list_medium_line_t4_g4_t4_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0004ac04) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0004ac04) list_medium_line_t4_g4_t

0x484c,	// (0x00040281) chi_dic_find_pane_g1

0x54e5,	// (0x00040f1a) main_tport_pane

0xb658,	// (0x0004708d) list_medium_line_plain_t1

0xaece,	// (0x00046903) list_medium_line_t2_g2_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t2_g2_g1

0xaece,	// (0x00046903) list_medium_line_t2_g2_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0004abf6) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0004abf6) list_medium_line_t2_g2_g

0xb137,	// (0x00046b6c) list_medium_line_t2_g2_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t2_g2_t1

0xb137,	// (0x00046b6c) list_medium_line_t2_g2_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x0004ac6b) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x0004ac6b) list_medium_line_t2_g2_t

0x1f2b,	// (0x0003d960) aid_sp_fs_list_icon_a_sm

0x1f33,	// (0x0003d968) aid_sp_fs_list_icon_d

0x1f3b,	// (0x0003d970) aid_sp_fs_text_primary

0xee0d,	// (0x0004a842) aid_sp_fs_text_secondary

0xa79e,	// (0x000461d3) list_medium_line

0xa79e,	// (0x000461d3) list_medium_line_g2

0xa79e,	// (0x000461d3) list_medium_line_g3

0xa79e,	// (0x000461d3) list_medium_line_plain

0xa79e,	// (0x000461d3) list_medium_line_plain_t2

0xa79e,	// (0x000461d3) list_medium_line_plain_t3

0xa79e,	// (0x000461d3) list_medium_line_right_icon

0xa79e,	// (0x000461d3) list_medium_line_right_iconx2

0xa79e,	// (0x000461d3) list_medium_line_t2

0xa79e,	// (0x000461d3) list_medium_line_t2_g2

0xa79e,	// (0x000461d3) list_medium_line_t2_g3

0xa79e,	// (0x000461d3) list_medium_line_t2_right_icon

0xa79e,	// (0x000461d3) list_medium_line_t2_right_iconx2

0xa79e,	// (0x000461d3) list_medium_line_t3

0xa79e,	// (0x000461d3) list_medium_line_t3_g2

0xa79e,	// (0x000461d3) list_medium_line_t3_g3

0xa79e,	// (0x000461d3) list_medium_line_t3_right_iconx2

0xa79e,	// (0x000461d3) list_medium_line_t4_g4

0xa79e,	// (0x000461d3) list_medium_line_x2

0xa79e,	// (0x000461d3) list_medium_line_x2_t2_g2

0xa79e,	// (0x000461d3) list_medium_line_x2_t2_g3

0xa79e,	// (0x000461d3) list_medium_line_x2_t2_g4

0xa79e,	// (0x000461d3) list_medium_line_x2_t3

0xa79e,	// (0x000461d3) list_medium_line_x2_t3_g2

0xa79e,	// (0x000461d3) list_medium_line_x2_t3_g3

0xa79e,	// (0x000461d3) list_medium_line_x2_t3_g4

0xa79e,	// (0x000461d3) list_medium_line_x2_t4_g2

0xa79e,	// (0x000461d3) list_medium_line_x2_t4_g4

0xa79e,	// (0x000461d3) list_medium_line_x3

0xa79e,	// (0x000461d3) list_medium_line_x3_t4

0xa79e,	// (0x000461d3) list_medium_line_x3_t4_g4

0xa79e,	// (0x000461d3) list_medium_line_x4_t4

0xa79e,	// (0x000461d3) list_medium_line_x4_t4_g7

0xa79e,	// (0x000461d3) list_medium_line_x4_t5

0x1f44,	// (0x0003d979) list_single_fs_dyc_pane_ParamLimits

0x1f44,	// (0x0003d979) list_single_fs_dyc_pane

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g1

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g2

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g3_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g3

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g4_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g4

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g5_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g5

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g6_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x4_t4_g7_g6

0xaedc,	// (0x00046911) list_medium_line_x4_t4_g7_g7_ParamLimits

0xaedc,	// (0x00046911) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb25,	// (0x0004b55a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb25,	// (0x0004b55a) list_medium_line_x4_t4_g7_g

0xb137,	// (0x00046b6c) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x4_t4_g7_t1

0xb137,	// (0x00046b6c) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x4_t4_g7_t2

0xb137,	// (0x00046b6c) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x4_t4_g7_t3

0xb8d0,	// (0x00047305) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb8d0,	// (0x00047305) list_medium_line_x4_t4_g7_t4

0xb8d0,	// (0x00047305) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb8d0,	// (0x00047305) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb34,	// (0x0004b569) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb34,	// (0x0004b569) list_medium_line_x4_t4_g7_t

0x1f60,	// (0x0003d995) list_single_dyc_row_pane_ParamLimits

0x1f60,	// (0x0003d995) list_single_dyc_row_pane

0x8a8a,	// (0x000444bf) call5_gesture_pane_ParamLimits

0x8a8a,	// (0x000444bf) call5_gesture_pane

0x8abe,	// (0x000444f3) call5_windows_pane_ParamLimits

0x8abe,	// (0x000444f3) call5_windows_pane

0x8b11,	// (0x00044546) call5_swipe_1_pane_cp_ParamLimits

0x8b11,	// (0x00044546) call5_swipe_1_pane_cp

0x8b1d,	// (0x00044552) call5_swipe_2_pane_cp_ParamLimits

0x8b1d,	// (0x00044552) call5_swipe_2_pane_cp

0xb0fb,	// (0x00046b30) call5_image_pane_cp

0x8b29,	// (0x0004455e) popup_call5_audio_first_window_cp_ParamLimits

0x8b29,	// (0x0004455e) popup_call5_audio_first_window_cp

0xeb41,	// (0x0004a576) call5_swipe_1_pane_g1_cp_ParamLimits

0xeb41,	// (0x0004a576) call5_swipe_1_pane_g1_cp

0xebae,	// (0x0004a5e3) call5_swipe_1_pane_g2_cp

0xeb5a,	// (0x0004a58f) call5_swipe_1_pane_t1_cp_ParamLimits

0xeb5a,	// (0x0004a58f) call5_swipe_1_pane_t1_cp

0xeb41,	// (0x0004a576) call5_swipe_2_pane_g1_cp_ParamLimits

0xeb41,	// (0x0004a576) call5_swipe_2_pane_g1_cp

0xebb6,	// (0x0004a5eb) call5_swipe_2_pane_g2_cp

0xebbe,	// (0x0004a5f3) call5_swipe_2_pane_t1_cp_ParamLimits

0xebbe,	// (0x0004a5f3) call5_swipe_2_pane_t1_cp

0xae75,	// (0x000468aa) main_sp_fs_email_pane

0xebd3,	// (0x0004a608) main_sp_fs_listscroll_pane_te

0x1ff7,	// (0x0003da2c) popup_sp_fs_action_menu_pane_ParamLimits

0x1ff7,	// (0x0003da2c) popup_sp_fs_action_menu_pane

0xb11d,	// (0x00046b52) bg_sp_fs_ctrlbar_pane_g1

0xebdc,	// (0x0004a611) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xebe5,	// (0x0004a61a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcea2,	// (0x000488d7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb11d,	// (0x00046b52) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc22,	// (0x0004b657) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9bb,	// (0x000483f0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9bb,	// (0x000483f0) bg_sp_fs_ctrlbar_ddmenu_pane

0xebee,	// (0x0004a623) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xebee,	// (0x0004a623) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xebfa,	// (0x0004a62f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xebfa,	// (0x0004a62f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc2b,	// (0x0004b660) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc2b,	// (0x0004b660) main_sp_fs_ctrlbar_ddmenu_pane_g

0xec06,	// (0x0004a63b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xec06,	// (0x0004a63b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb11d,	// (0x00046b52) list_medium_line_t2_right_icon_g1

0xb658,	// (0x0004708d) list_medium_line_t2_right_icon_t1

0xb658,	// (0x0004708d) list_medium_line_t2_right_icon_t2

0x0001,

0xfc30,	// (0x0004b665) list_medium_line_t2_right_icon_t

0xbca6,	// (0x000476db) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbca6,	// (0x000476db) bg_sp_fs_ctrlbar_pane

0x8b7a,	// (0x000445af) main_sp_fs_ctrlbar_button_pane_cp01

0x8b82,	// (0x000445b7) main_sp_fs_ctrlbar_ddmenu_pane

0xec58,	// (0x0004a68d) main_sp_fs_ctrlbar_pane_g1

0xec64,	// (0x0004a699) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc35,	// (0x0004b66a) main_sp_fs_ctrlbar_pane_g

0x8bbe,	// (0x000445f3) main_sp_fs_ctrlbar_pane_t1

0x8bf9,	// (0x0004462e) main_sp_fs_ctrlbar_pane

0x8c0f,	// (0x00044644) main_sp_fs_listscroll_pane_te_cp01

0x2039,	// (0x0003da6e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2039,	// (0x0003da6e) popup_sp_fs_action_menu_pane_cp01

0xae75,	// (0x000468aa) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xae75,	// (0x000468aa) bg_sp_fs_highlight_list_pane_cp01

0x2059,	// (0x0003da8e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2059,	// (0x0003da8e) sp_fs_action_menu_list_gene_pane_g1

0xec8b,	// (0x0004a6c0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xec8b,	// (0x0004a6c0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc43,	// (0x0004b678) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc43,	// (0x0004b678) sp_fs_action_menu_list_gene_pane_g

0x2068,	// (0x0003da9d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2068,	// (0x0003da9d) sp_fs_action_menu_list_gene_pane_t1

0x2080,	// (0x0003dab5) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2080,	// (0x0003dab5) sp_fs_action_menu_list_gene_pane

0xec98,	// (0x0004a6cd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xec98,	// (0x0004a6cd) popup_sp_fs_action_menu_bg_pane

0x209f,	// (0x0003dad4) sp_fs_action_menu_list_pane_ParamLimits

0x209f,	// (0x0003dad4) sp_fs_action_menu_list_pane

0xac93,	// (0x000466c8) sp_fs_scroll_pane_cp01_ParamLimits

0xac93,	// (0x000466c8) sp_fs_scroll_pane_cp01

0xb658,	// (0x0004708d) list_medium_line_plain_t2_t1

0xb658,	// (0x0004708d) list_medium_line_plain_t2_t2

0x0001,

0xfc30,	// (0x0004b665) list_medium_line_plain_t2_t

0xb658,	// (0x0004708d) list_medium_line_plain_t3_t1

0xb658,	// (0x0004708d) list_medium_line_plain_t3_t2

0xb658,	// (0x0004708d) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x0004acb6) list_medium_line_plain_t3_t

0xaece,	// (0x00046903) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t2_g2_g1

0xaece,	// (0x00046903) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0004abf6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0004abf6) list_medium_line_x2_t2_g2_g

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g2_t1

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x0004ac6b) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x0004ac6b) list_medium_line_x2_t2_g2_t

0xaece,	// (0x00046903) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t4_g2_g1

0xaece,	// (0x00046903) list_medium_line_x2_t4_g2_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0004abf6) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0004abf6) list_medium_line_x2_t4_g2_g

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g2_t1

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g2_t2

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g2_t3

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0004ac04) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0004ac04) list_medium_line_x2_t4_g2_t

0xb11d,	// (0x00046b52) list_medium_line_t3_right_iconx2_g1

0xb11d,	// (0x00046b52) list_medium_line_t3_right_iconx2_g2

0xb11d,	// (0x00046b52) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x0004add7) list_medium_line_t3_right_iconx2_g

0xb658,	// (0x0004708d) list_medium_line_t3_right_iconx2_t1

0xb658,	// (0x0004708d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc30,	// (0x0004b665) list_medium_line_t3_right_iconx2_t

0xaece,	// (0x00046903) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x3_t4_g4_g1

0xaece,	// (0x00046903) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x3_t4_g4_g2

0xaece,	// (0x00046903) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x3_t4_g4_g3

0xaece,	// (0x00046903) list_medium_line_x3_t4_g4_g4_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0004abfb) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0004abfb) list_medium_line_x3_t4_g4_g

0xb137,	// (0x00046b6c) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x3_t4_g4_t1

0xb137,	// (0x00046b6c) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x3_t4_g4_t2

0xb137,	// (0x00046b6c) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x3_t4_g4_t3

0xb137,	// (0x00046b6c) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0004ac04) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0004ac04) list_medium_line_x3_t4_g4_t

0x20bf,	// (0x0003daf4) list_single_dyc_row_text_pane_t1_ParamLimits

0x20bf,	// (0x0003daf4) list_single_dyc_row_text_pane_t1

0x20f6,	// (0x0003db2b) list_single_dyc_row_text_pane_t2_ParamLimits

0x20f6,	// (0x0003db2b) list_single_dyc_row_text_pane_t2

0x216c,	// (0x0003dba1) list_single_dyc_row_text_pane_t3_ParamLimits

0x216c,	// (0x0003dba1) list_single_dyc_row_text_pane_t3

0x0005,

0xfc48,	// (0x0004b67d) list_single_dyc_row_text_pane_t_ParamLimits

0xfc48,	// (0x0004b67d) list_single_dyc_row_text_pane_t

0x223d,	// (0x0003dc72) list_single_dyc_row_pane_g1_ParamLimits

0x223d,	// (0x0003dc72) list_single_dyc_row_pane_g1

0x2249,	// (0x0003dc7e) list_single_dyc_row_pane_g2_ParamLimits

0x2249,	// (0x0003dc7e) list_single_dyc_row_pane_g2

0x2255,	// (0x0003dc8a) list_single_dyc_row_pane_g3_ParamLimits

0x2255,	// (0x0003dc8a) list_single_dyc_row_pane_g3

0x2261,	// (0x0003dc96) list_single_dyc_row_pane_g4_ParamLimits

0x2261,	// (0x0003dc96) list_single_dyc_row_pane_g4

0x0003,

0xfc55,	// (0x0004b68a) list_single_dyc_row_pane_g_ParamLimits

0xfc55,	// (0x0004b68a) list_single_dyc_row_pane_g

0x226d,	// (0x0003dca2) list_single_dyc_row_text_pane_ParamLimits

0x226d,	// (0x0003dca2) list_single_dyc_row_text_pane

0xa79e,	// (0x000461d3) bg_sp_fs_scroll_pane

0xeca6,	// (0x0004a6db) thumb_sp_fs_scroll_pane

0xaece,	// (0x00046903) list_medium_line_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_g1

0xb137,	// (0x00046b6c) list_medium_line_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t1

0xaece,	// (0x00046903) list_medium_line_x2_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_g1

0xaece,	// (0x00046903) list_medium_line_x2_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0004abf6) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0004abf6) list_medium_line_x2_g

0xb137,	// (0x00046b6c) list_medium_line_x2_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t1

0xaece,	// (0x00046903) list_medium_line_x3_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x3_g1

0xe7f8,	// (0x0004a22d) list_medium_line_x3_g2_ParamLimits

0xe7f8,	// (0x0004a22d) list_medium_line_x3_g2

0x0001,

0xfc5e,	// (0x0004b693) list_medium_line_x3_g_ParamLimits

0xfc5e,	// (0x0004b693) list_medium_line_x3_g

0xecaf,	// (0x0004a6e4) list_medium_line_x3_t1_ParamLimits

0xecaf,	// (0x0004a6e4) list_medium_line_x3_t1

0xecc3,	// (0x0004a6f8) thumb_sp_fs_scroll_pane_g1

0xeccc,	// (0x0004a701) thumb_sp_fs_scroll_pane_g2

0xecd5,	// (0x0004a70a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc63,	// (0x0004b698) thumb_sp_fs_scroll_pane_g

0xecc3,	// (0x0004a6f8) bg_sp_fs_scroll_pane_g1

0xeccc,	// (0x0004a701) bg_sp_fs_scroll_pane_g2

0xecd5,	// (0x0004a70a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc63,	// (0x0004b698) bg_sp_fs_scroll_pane_g

0xaece,	// (0x00046903) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t3_g4_g1

0xaece,	// (0x00046903) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t3_g4_g2

0xaece,	// (0x00046903) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t3_g4_g3

0xaece,	// (0x00046903) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaece,	// (0x00046903) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0004abfb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0004abfb) list_medium_line_x2_t3_g4_g

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g4_t1

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g4_t2

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0004abef) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0004abef) list_medium_line_x2_t3_g4_t

0xaece,	// (0x00046903) list_medium_line_g2_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_g2_g1

0xaece,	// (0x00046903) list_medium_line_g2_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0004abf6) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0004abf6) list_medium_line_g2_g

0xb137,	// (0x00046b6c) list_medium_line_g2_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_g2_t1

0xaece,	// (0x00046903) list_medium_line_t3_g2_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t3_g2_g1

0xaece,	// (0x00046903) list_medium_line_t3_g2_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0004abf6) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0004abf6) list_medium_line_t3_g2_g

0xb137,	// (0x00046b6c) list_medium_line_t3_g2_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t3_g2_t1

0xb137,	// (0x00046b6c) list_medium_line_t3_g2_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t3_g2_t2

0xb137,	// (0x00046b6c) list_medium_line_t3_g2_t3_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0004abef) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0004abef) list_medium_line_t3_g2_t

0xb11d,	// (0x00046b52) list_medium_line_right_icon_g1

0xb658,	// (0x0004708d) list_medium_line_right_icon_t1

0xaece,	// (0x00046903) list_medium_line_t2_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t2_g1

0xb137,	// (0x00046b6c) list_medium_line_t2_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t2_t1

0xb137,	// (0x00046b6c) list_medium_line_t2_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x0004ac6b) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x0004ac6b) list_medium_line_t2_t

0xaece,	// (0x00046903) list_medium_line_t3_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t3_g1

0xb137,	// (0x00046b6c) list_medium_line_t3_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t3_t1

0xb137,	// (0x00046b6c) list_medium_line_t3_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t3_t2

0xb137,	// (0x00046b6c) list_medium_line_t3_t3_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0004abef) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0004abef) list_medium_line_t3_t

0xaece,	// (0x00046903) list_medium_line_g3_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_g3_g1

0xaece,	// (0x00046903) list_medium_line_g3_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_g3_g2

0xaece,	// (0x00046903) list_medium_line_g3_g3_ParamLimits

0xaece,	// (0x00046903) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0004abe8) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0004abe8) list_medium_line_g3_g

0xb137,	// (0x00046b6c) list_medium_line_g3_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_g3_t1

0xaece,	// (0x00046903) list_medium_line_t2_g3_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t2_g3_g1

0xaece,	// (0x00046903) list_medium_line_t2_g3_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t2_g3_g2

0xaece,	// (0x00046903) list_medium_line_t2_g3_g3_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0004abe8) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0004abe8) list_medium_line_t2_g3_g

0xb137,	// (0x00046b6c) list_medium_line_t2_g3_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t2_g3_t1

0xb137,	// (0x00046b6c) list_medium_line_t2_g3_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x0004ac6b) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x0004ac6b) list_medium_line_t2_g3_t

0xaece,	// (0x00046903) list_medium_line_t3_g3_g1_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t3_g3_g1

0xaece,	// (0x00046903) list_medium_line_t3_g3_g2_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t3_g3_g2

0xaece,	// (0x00046903) list_medium_line_t3_g3_g3_ParamLimits

0xaece,	// (0x00046903) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0004abe8) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0004abe8) list_medium_line_t3_g3_g

0xb137,	// (0x00046b6c) list_medium_line_t3_g3_t1_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t3_g3_t1

0xb137,	// (0x00046b6c) list_medium_line_t3_g3_t2_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t3_g3_t2

0xb137,	// (0x00046b6c) list_medium_line_t3_g3_t3_ParamLimits

0xb137,	// (0x00046b6c) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0004abef) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0004abef) list_medium_line_t3_g3_t

0xb11d,	// (0x00046b52) list_medium_line_right_iconx2_g1

0xb11d,	// (0x00046b52) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x0004add2) list_medium_line_right_iconx2_g

0xb658,	// (0x0004708d) list_medium_line_right_iconx2_t1

0xb11d,	// (0x00046b52) list_medium_line_t2_right_iconx2_g1

0xb11d,	// (0x00046b52) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x0004add2) list_medium_line_t2_right_iconx2_g

0xb658,	// (0x0004708d) list_medium_line_t2_right_iconx2_t1

0xb658,	// (0x0004708d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc30,	// (0x0004b665) list_medium_line_t2_right_iconx2_t

0xb658,	// (0x0004708d) list_medium_line_x4_t4_t1

0xb658,	// (0x0004708d) list_medium_line_x4_t4_t2

0xb658,	// (0x0004708d) list_medium_line_x4_t4_t3

0xb658,	// (0x0004708d) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x0004acbd) list_medium_line_x4_t4_t

0x8c4a,	// (0x0004467f) tport_appsw_pane_ParamLimits

0x8c4a,	// (0x0004467f) tport_appsw_pane

0x8c58,	// (0x0004468d) tport_contact_pane_ParamLimits

0x8c58,	// (0x0004468d) tport_contact_pane

0x8c68,	// (0x0004469d) tport_listscroll_pane_ParamLimits

0x8c68,	// (0x0004469d) tport_listscroll_pane

0x8c78,	// (0x000446ad) cell_tport_appsw_pane_ParamLimits

0x8c78,	// (0x000446ad) cell_tport_appsw_pane

0xaedc,	// (0x00046911) tport_appsw_pane_g1_ParamLimits

0xaedc,	// (0x00046911) tport_appsw_pane_g1

0xecde,	// (0x0004a713) tport_contact_pane_g1

0xece7,	// (0x0004a71c) tport_contact_pane_t1

0xecf5,	// (0x0004a72a) tport_contact_pane_t2

0x0001,

0xfc6a,	// (0x0004b69f) tport_contact_pane_t

0xed03,	// (0x0004a738) list_tport_pane

0xed0c,	// (0x0004a741) scroll_pane_cp_030

0x8cab,	// (0x000446e0) cell_tport_appsw_pane_g1

0x8cbb,	// (0x000446f0) cell_tport_appsw_pane_t1

0x8cc9,	// (0x000446fe) grid_highlight_pane_cp019

0x8cd1,	// (0x00044706) list_tport_double_graphic_pane_ParamLimits

0x8cd1,	// (0x00044706) list_tport_double_graphic_pane

0xae75,	// (0x000468aa) list_highlight_pane_cp023_ParamLimits

0xae75,	// (0x000468aa) list_highlight_pane_cp023

0x8ce2,	// (0x00044717) list_tport_double_graphic_pane_g1_ParamLimits

0x8ce2,	// (0x00044717) list_tport_double_graphic_pane_g1

0x8cef,	// (0x00044724) list_tport_double_graphic_pane_t1_ParamLimits

0x8cef,	// (0x00044724) list_tport_double_graphic_pane_t1

0x8d04,	// (0x00044739) list_tport_double_graphic_pane_t2_ParamLimits

0x8d04,	// (0x00044739) list_tport_double_graphic_pane_t2

0x0001,

0xfc76,	// (0x0004b6ab) list_tport_double_graphic_pane_t_ParamLimits

0xfc76,	// (0x0004b6ab) list_tport_double_graphic_pane_t

0xa79e,	// (0x000461d3) main_cale_note_pane

0x707a,	// (0x00042aaf) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x707a,	// (0x00042aaf) cell_vitu2_function_top_wide_pane_cp01

0x87d7,	// (0x0004420c) wait_bar_pane_cp05_ParamLimits

0xae75,	// (0x000468aa) listscroll_cmail_pane

0xed1d,	// (0x0004a752) list_cmail_pane

0x8d16,	// (0x0004474b) list_cmail_body_pane

0x8d3e,	// (0x00044773) list_single_cmail_header_caption_pane

0x8d6d,	// (0x000447a2) list_single_cmail_header_detail_pane_ParamLimits

0x8d6d,	// (0x000447a2) list_single_cmail_header_detail_pane

0xed34,	// (0x0004a769) list_single_cmail_header_caption_pane_t1

0x228c,	// (0x0003dcc1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x228c,	// (0x0003dcc1) list_single_cmail_header_detail_pane_g1

0x22a2,	// (0x0003dcd7) list_single_cmail_header_detail_pane_g2_ParamLimits

0x22a2,	// (0x0003dcd7) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc7b,	// (0x0004b6b0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc7b,	// (0x0004b6b0) list_single_cmail_header_detail_pane_g

0x22ae,	// (0x0003dce3) list_single_cmail_header_detail_pane_t1_ParamLimits

0x22ae,	// (0x0003dce3) list_single_cmail_header_detail_pane_t1

0x230e,	// (0x0003dd43) list_single_cmail_header_editor_pane_bg_ParamLimits

0x230e,	// (0x0003dd43) list_single_cmail_header_editor_pane_bg

0xe7e1,	// (0x0004a216) list_cmail_body_pane_g1

0xed58,	// (0x0004a78d) list_cmail_body_pane_t1

0xdb90,	// (0x000495c5) list_single_cmail_header_editor_pane_bg_g1

0xb342,	// (0x00046d77) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdba0,	// (0x000495d5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdb98,	// (0x000495cd) list_single_cmail_header_editor_pane_bg_g1_copy3

0xddd0,	// (0x00049805) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdbc0,	// (0x000495f5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdbb0,	// (0x000495e5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdbb8,	// (0x000495ed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb322,	// (0x00046d57) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8daa,	// (0x000447df) calenote_gesture_pane_ParamLimits

0x8daa,	// (0x000447df) calenote_gesture_pane

0x8dc4,	// (0x000447f9) calenote_window_pane_ParamLimits

0x8dc4,	// (0x000447f9) calenote_window_pane

0xed66,	// (0x0004a79b) popup_note_window_cp01

0x8ddc,	// (0x00044811) calenote_swipe_1_pane_ParamLimits

0x8ddc,	// (0x00044811) calenote_swipe_1_pane

0x8b1d,	// (0x00044552) calenote_swipe_2_pane_ParamLimits

0x8b1d,	// (0x00044552) calenote_swipe_2_pane

0xeb41,	// (0x0004a576) calenote_swipe_1_pane_g1_ParamLimits

0xeb41,	// (0x0004a576) calenote_swipe_1_pane_g1

0xeb4e,	// (0x0004a583) calenote_swipe_1_pane_g2_ParamLimits

0xeb4e,	// (0x0004a583) calenote_swipe_1_pane_g2

0x0001,

0xfc18,	// (0x0004b64d) calenote_swipe_1_pane_g_ParamLimits

0xfc18,	// (0x0004b64d) calenote_swipe_1_pane_g

0xed78,	// (0x0004a7ad) calenote_swipe_1_pane_t1_ParamLimits

0xed78,	// (0x0004a7ad) calenote_swipe_1_pane_t1

0xeb41,	// (0x0004a576) calenote_swipe_2_pane_g1_ParamLimits

0xeb41,	// (0x0004a576) calenote_swipe_2_pane_g1

0xed97,	// (0x0004a7cc) calenote_swipe_2_pane_g2_ParamLimits

0xed97,	// (0x0004a7cc) calenote_swipe_2_pane_g2

0x0001,

0xfc87,	// (0x0004b6bc) calenote_swipe_2_pane_g_ParamLimits

0xfc87,	// (0x0004b6bc) calenote_swipe_2_pane_g

0xeda3,	// (0x0004a7d8) calenote_swipe_2_pane_t1_ParamLimits

0xeda3,	// (0x0004a7d8) calenote_swipe_2_pane_t1

0xa79e,	// (0x000461d3) main_mup_navstr_pane

0x5efa,	// (0x0004192f) main_mup3_pane_t7_ParamLimits

0x5efa,	// (0x0004192f) main_mup3_pane_t7

0x6723,	// (0x00042158) main_mp4_pane_g6_ParamLimits

0x6723,	// (0x00042158) main_mp4_pane_g6

0x6ab3,	// (0x000424e8) main_image3_pane_t4_ParamLimits

0x6ab3,	// (0x000424e8) main_image3_pane_t4

0x8def,	// (0x00044824) popup_navstr_preview_pane_ParamLimits

0x8def,	// (0x00044824) popup_navstr_preview_pane

0x8dfb,	// (0x00044830) scroll_navstr_pane_ParamLimits

0x8dfb,	// (0x00044830) scroll_navstr_pane

0xa79e,	// (0x000461d3) bg_popup_preview_window_pane_cp04

0xedca,	// (0x0004a7ff) popup_navstr_preview_pane_t1

0x8e07,	// (0x0004483c) scroll_navstr_pane_g1_ParamLimits

0x8e07,	// (0x0004483c) scroll_navstr_pane_g1

0x8e14,	// (0x00044849) scroll_navstr_pane_t1_ParamLimits

0x8e14,	// (0x00044849) scroll_navstr_pane_t1

0xed6f,	// (0x0004a7a4) bg_button_pane_cp014

0xed6f,	// (0x0004a7a4) bg_button_pane_cp030

0x1f9d,	// (0x0003d9d2) list_double_fisheye_pane_g4_ParamLimits

0x1f9d,	// (0x0003d9d2) list_double_fisheye_pane_g4

0x1fa9,	// (0x0003d9de) list_double_fisheye_pane_g5_ParamLimits

0x1fa9,	// (0x0003d9de) list_double_fisheye_pane_g5

0xe013,	// (0x00049a48) sp_fs_scroll_pane_cp03

0xec58,	// (0x0004a68d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xec64,	// (0x0004a699) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc35,	// (0x0004b66a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8bbe,	// (0x000445f3) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xed2c,	// (0x0004a761) sp_fs_scroll_pane_cp02

0xb03a,	// (0x00046a6f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb03a,	// (0x00046a6f) popup_sp_fs_calendar_preview_list_single_pane

0xa79e,	// (0x000461d3) main_cam6_pano_pane

0xae75,	// (0x000468aa) main_mup3_pane_ParamLimits

0xa79e,	// (0x000461d3) main_phacti_pane

0x86ac,	// (0x000440e1) bg_button_pane_cp11

0x86c4,	// (0x000440f9) main_mobtv_info_pane_g2_ParamLimits

0x86c4,	// (0x000440f9) main_mobtv_info_pane_g2

0x0001,

0xfb95,	// (0x0004b5ca) main_mobtv_info_pane_g_ParamLimits

0xfb95,	// (0x0004b5ca) main_mobtv_info_pane_g

0x8876,	// (0x000442ab) sc_clock_pane_t5_ParamLimits

0x8876,	// (0x000442ab) sc_clock_pane_t5

0x8917,	// (0x0004434c) main_radioblah_pane_g1_ParamLimits

0xea8d,	// (0x0004a4c2) main_radioblah_pane_t3_ParamLimits

0xea8d,	// (0x0004a4c2) main_radioblah_pane_t3

0xeaa5,	// (0x0004a4da) main_radioblah_pane_t4_ParamLimits

0xeaa5,	// (0x0004a4da) main_radioblah_pane_t4

0x8935,	// (0x0004436a) main_radioblah_text_pane_ParamLimits

0x8935,	// (0x0004436a) main_radioblah_text_pane

0x8942,	// (0x00044377) main_radioblah_info_pane_g1_ParamLimits

0x89d7,	// (0x0004440c) main_radioblah_info_pane_t4_ParamLimits

0x89d7,	// (0x0004440c) main_radioblah_info_pane_t4

0xae75,	// (0x000468aa) main_sp_fs_calendar_pane

0x8e26,	// (0x0004485b) main_phacti_pane_g1

0x8e2e,	// (0x00044863) phacti_note_pane_ParamLimits

0x8e2e,	// (0x00044863) phacti_note_pane

0xede1,	// (0x0004a816) phacti_term_pane_ParamLimits

0xede1,	// (0x0004a816) phacti_term_pane

0xedf6,	// (0x0004a82b) phacti_note_pane_t1_ParamLimits

0xedf6,	// (0x0004a82b) phacti_note_pane_t1

0x2325,	// (0x0003dd5a) phacti_term_pane_g1

0x232d,	// (0x0003dd62) phacti_term_pane_t1_ParamLimits

0x232d,	// (0x0003dd62) phacti_term_pane_t1

0xee16,	// (0x0004a84b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xee1e,	// (0x0004a853) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc91,	// (0x0004b6c6) popup_sp_fs_calendar_preview_list_single_pane_g

0xee26,	// (0x0004a85b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xee26,	// (0x0004a85b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xee3c,	// (0x0004a871) aid_popup_sp_fs_bg_corner_pane

0xb11d,	// (0x00046b52) popup_sp_fs_calendar_preview_bg_pane_g1

0xa79e,	// (0x000461d3) popup_sp_fs_calendar_preview_bg_pane

0xee44,	// (0x0004a879) popup_sp_fs_calendar_preview_list_pane

0xbca6,	// (0x000476db) bg_main_sp_fs_cale_pane_ParamLimits

0xbca6,	// (0x000476db) bg_main_sp_fs_cale_pane

0x2360,	// (0x0003dd95) listscroll_cale_mrui_pane_ParamLimits

0x2360,	// (0x0003dd95) listscroll_cale_mrui_pane

0x2375,	// (0x0003ddaa) listscroll_sp_fs_schedule_track_pane

0x237e,	// (0x0003ddb3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x237e,	// (0x0003ddb3) main_sp_fs_ctrlbar_pane_cp01

0xee4c,	// (0x0004a881) main_sp_fs_ribbon_pane

0x2391,	// (0x0003ddc6) popup_sp_fs_cale_preview_window

0x8e91,	// (0x000448c6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e91,	// (0x000448c6) list_single_sp_fs_schedule_track_pane

0xacc2,	// (0x000466f7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xacc2,	// (0x000466f7) bg_sp_fs_highlight_list_pane_cp03

0x8eb7,	// (0x000448ec) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8eb7,	// (0x000448ec) list_single_sp_fs_schedule_track_pane_g1

0x8ec3,	// (0x000448f8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ec3,	// (0x000448f8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc96,	// (0x0004b6cb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc96,	// (0x0004b6cb) list_single_sp_fs_schedule_track_pane_g

0x8ecf,	// (0x00044904) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ecf,	// (0x00044904) list_single_sp_fs_schedule_track_pane_t1

0x8ee7,	// (0x0004491c) sp_fs_schedule_track_pane_ParamLimits

0x8ee7,	// (0x0004491c) sp_fs_schedule_track_pane

0xee54,	// (0x0004a889) sp_fs_schedule_track_pane_g1

0xee5c,	// (0x0004a891) sp_fs_schedule_track_pane_g2

0xee64,	// (0x0004a899) sp_fs_schedule_track_pane_g3

0xee6c,	// (0x0004a8a1) sp_fs_schedule_track_pane_g4

0xee74,	// (0x0004a8a9) sp_fs_schedule_track_pane_g5

0x0004,

0xfc9b,	// (0x0004b6d0) sp_fs_schedule_track_pane_g

0xdb90,	// (0x000495c5) bg_sp_fs_schedule_viewer_highlight_g1

0xb342,	// (0x00046d77) bg_sp_fs_schedule_viewer_highlight_g2

0xdb98,	// (0x000495cd) bg_sp_fs_schedule_viewer_highlight_g3

0xdba0,	// (0x000495d5) bg_sp_fs_schedule_viewer_highlight_g4

0xddd0,	// (0x00049805) bg_sp_fs_schedule_viewer_highlight_g5

0xdbb0,	// (0x000495e5) bg_sp_fs_schedule_viewer_highlight_g6

0xdbb8,	// (0x000495ed) bg_sp_fs_schedule_viewer_highlight_g7

0xdbc0,	// (0x000495f5) bg_sp_fs_schedule_viewer_highlight_g8

0xb322,	// (0x00046d57) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfca6,	// (0x0004b6db) bg_sp_fs_schedule_viewer_highlight_g

0xa79e,	// (0x000461d3) bg_main_sp_fs_ribbon_pane

0x8ef7,	// (0x0004492c) main_sp_fs_ribbon_pane_g1

0xee7c,	// (0x0004a8b1) main_sp_fs_ribbon_pane_t1

0x8f00,	// (0x00044935) main_sp_fs_ribbon_pane_t2

0xee8b,	// (0x0004a8c0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcb9,	// (0x0004b6ee) main_sp_fs_ribbon_pane_t

0xee9a,	// (0x0004a8cf) main_sp_fs_ribbon_scheduler_pane

0xeea2,	// (0x0004a8d7) bg_main_sp_fs_ribbon_pane_g1

0xeeab,	// (0x0004a8e0) bg_main_sp_fs_ribbon_pane_g2

0xeeb4,	// (0x0004a8e9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcc0,	// (0x0004b6f5) bg_main_sp_fs_ribbon_pane_g

0xeebc,	// (0x0004a8f1) main_sp_fs_ribbon_scheduler_pane_g1

0xeec5,	// (0x0004a8fa) main_sp_fs_ribbon_scheduler_pane_g2

0xeece,	// (0x0004a903) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcc7,	// (0x0004b6fc) main_sp_fs_ribbon_scheduler_pane_g

0xeed7,	// (0x0004a90c) list_cale_mrui_pane

0x8f0f,	// (0x00044944) sp_fs_scroll_pane_cp07_ParamLimits

0x8f0f,	// (0x00044944) sp_fs_scroll_pane_cp07

0x8f2b,	// (0x00044960) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f2b,	// (0x00044960) bg_sp_fs_schedule_viewer_highlight

0xeee4,	// (0x0004a919) list_single_sp_fs_schedule_track_pane_cp01

0xef19,	// (0x0004a94e) list_sp_fs_schedule_track_pane

0xef21,	// (0x0004a956) sp_fs_scroll_pane_cp06_ParamLimits

0xef21,	// (0x0004a956) sp_fs_scroll_pane_cp06

0xb11d,	// (0x00046b52) bgmain_sp_fs_calendar_pane_g1

0x23a3,	// (0x0003ddd8) list_single_cale_mrui_pane_ParamLimits

0x23a3,	// (0x0003ddd8) list_single_cale_mrui_pane

0x23d1,	// (0x0003de06) list_single_cale_mrui_row_pane_ParamLimits

0x23d1,	// (0x0003de06) list_single_cale_mrui_row_pane

0x23de,	// (0x0003de13) list_single_cale_mrui_row_pane_g1_ParamLimits

0x23de,	// (0x0003de13) list_single_cale_mrui_row_pane_g1

0x2416,	// (0x0003de4b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2416,	// (0x0003de4b) list_single_cale_mrui_row_pane_t1

0x2428,	// (0x0003de5d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x2428,	// (0x0003de5d) list_single_cale_mrui_row_pane_t2

0x248e,	// (0x0003dec3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x248e,	// (0x0003dec3) list_single_cale_mrui_row_pane_t3

0x24bd,	// (0x0003def2) list_single_cale_mrui_row_pane_t4_ParamLimits

0x24bd,	// (0x0003def2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcd5,	// (0x0004b70a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcd5,	// (0x0004b70a) list_single_cale_mrui_row_pane_t

0x24ec,	// (0x0003df21) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x24ec,	// (0x0003df21) list_single_cmail_header_editor_pane_bg_cp01

0x2514,	// (0x0003df49) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x2514,	// (0x0003df49) list_single_cmail_header_editor_pane_bg_cp02

0x8f38,	// (0x0004496d) main_radioblah_text_pane_t1_ParamLimits

0x8f38,	// (0x0004496d) main_radioblah_text_pane_t1

0xef40,	// (0x0004a975) cam6_indi_pane_cp01

0xef48,	// (0x0004a97d) cam6_mode_pane_cp01

0xef50,	// (0x0004a985) cam6_pano_pane

0xef59,	// (0x0004a98e) cam6_zoom_pane_cp01

0xef61,	// (0x0004a996) cam6_pano_image_pane

0xef6c,	// (0x0004a9a1) cam6_pano_pane_g1

0xe7e1,	// (0x0004a216) cam6_pano_pane_g2

0xef75,	// (0x0004a9aa) cam6_pano_pane_g3

0xef7e,	// (0x0004a9b3) cam6_pano_pane_g4

0xd87b,	// (0x000492b0) cam6_pano_pane_g5

0xef87,	// (0x0004a9bc) cam6_pano_pane_g6

0xef91,	// (0x0004a9c6) cam6_pano_pane_g7

0xef99,	// (0x0004a9ce) cam6_pano_pane_g8

0xefa2,	// (0x0004a9d7) cam6_pano_pane_g9

0x0008,

0xfcde,	// (0x0004b713) cam6_pano_pane_g

0xa79e,	// (0x000461d3) main_browser_tag_pane

0xedc2,	// (0x0004a7f7) grid_navstr_albumart_pane

0xefad,	// (0x0004a9e2) cell_navstr_albumart_pane_ParamLimits

0xefad,	// (0x0004a9e2) cell_navstr_albumart_pane

0xefcd,	// (0x0004aa02) cell_navstr_albumart_pane_g1

0xcd29,	// (0x0004875e) cell_navstr_albumart_pane_g2

0xcd39,	// (0x0004876e) cell_navstr_albumart_pane_g3

0xcd31,	// (0x00048766) cell_navstr_albumart_pane_g4

0x0003,

0xfcf1,	// (0x0004b726) cell_navstr_albumart_pane_g

0x8f53,	// (0x00044988) bt_list_pane_ParamLimits

0x8f53,	// (0x00044988) bt_list_pane

0x8f74,	// (0x000449a9) bt_list_pane_t1

0x8f83,	// (0x000449b8) bt_list_pane_t2

0x0001,

0xfcfa,	// (0x0004b72f) bt_list_pane_t

0xa79e,	// (0x000461d3) main_cale_prevew_pane

0x8f92,	// (0x000449c7) popup_cale_preview_window_ParamLimits

0x8f92,	// (0x000449c7) popup_cale_preview_window

0xae75,	// (0x000468aa) bg_popup_preview_window_pane_cp05_ParamLimits

0xae75,	// (0x000468aa) bg_popup_preview_window_pane_cp05

0xefd5,	// (0x0004aa0a) list_cale_preview_pane_ParamLimits

0xefd5,	// (0x0004aa0a) list_cale_preview_pane

0x8fab,	// (0x000449e0) list_double_cale_preview_pane_ParamLimits

0x8fab,	// (0x000449e0) list_double_cale_preview_pane

0x8fbd,	// (0x000449f2) list_single_cale_preview_pane_ParamLimits

0x8fbd,	// (0x000449f2) list_single_cale_preview_pane

0x8fd1,	// (0x00044a06) list_single_cale_preview_pane_g1

0x8fd9,	// (0x00044a0e) list_single_cale_preview_pane_t1_ParamLimits

0x8fd9,	// (0x00044a0e) list_single_cale_preview_pane_t1

0x8fee,	// (0x00044a23) list_double_cale_preview_pane_g1

0x8ff6,	// (0x00044a2b) list_double_cale_preview_pane_t1_ParamLimits

0x8ff6,	// (0x00044a2b) list_double_cale_preview_pane_t1

0x900b,	// (0x00044a40) list_double_cale_preview_pane_t2_ParamLimits

0x900b,	// (0x00044a40) list_double_cale_preview_pane_t2

0x0001,

0xfcff,	// (0x0004b734) list_double_cale_preview_pane_t_ParamLimits

0xfcff,	// (0x0004b734) list_double_cale_preview_pane_t

0xa79e,	// (0x000461d3) main_ezdial_pane

0xae75,	// (0x000468aa) main_sp_fs_email_pane_ParamLimits

0x8b37,	// (0x0004456c) cmail_ddmenu_btn01_pane_ParamLimits

0x8b37,	// (0x0004456c) cmail_ddmenu_btn01_pane

0x8b4c,	// (0x00044581) cmail_ddmenu_btn02_pane_ParamLimits

0x8b4c,	// (0x00044581) cmail_ddmenu_btn02_pane

0x8b64,	// (0x00044599) cmail_ddmenu_btn03_pane_ParamLimits

0x8b64,	// (0x00044599) cmail_ddmenu_btn03_pane

0x8bf9,	// (0x0004462e) main_sp_fs_ctrlbar_pane_ParamLimits

0x8c0f,	// (0x00044644) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d16,	// (0x0004474b) list_cmail_body_pane_ParamLimits

0xed42,	// (0x0004a777) bg_button_pane_cp12

0xed4b,	// (0x0004a780) list_single_cmail_header_detail_pane_g3_ParamLimits

0xed4b,	// (0x0004a780) list_single_cmail_header_detail_pane_g3

0x22ea,	// (0x0003dd1f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x22ea,	// (0x0003dd1f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc82,	// (0x0004b6b7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc82,	// (0x0004b6b7) list_single_cmail_header_detail_pane_t

0x2342,	// (0x0003dd77) phacti_term_pane_t2_ParamLimits

0x2342,	// (0x0003dd77) phacti_term_pane_t2

0x0001,

0xfc8c,	// (0x0004b6c1) phacti_term_pane_t_ParamLimits

0xfc8c,	// (0x0004b6c1) phacti_term_pane_t

0xefe1,	// (0x0004aa16) aid_size_list_single_double

0x9023,	// (0x00044a58) popup_ezdial_listscroll_window

0x9047,	// (0x00044a7c) popup_number_entry_window_cp01

0xb0fb,	// (0x00046b30) bg_popup_call_pane_cp09

0xefed,	// (0x0004aa22) ezdial_list_pane

0xeff5,	// (0x0004aa2a) scroll_pane_cp23

0xc9bb,	// (0x000483f0) bg_button_pane_cp028_ParamLimits

0xc9bb,	// (0x000483f0) bg_button_pane_cp028

0x9055,	// (0x00044a8a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9055,	// (0x00044a8a) cmail_ddmenu_btn01_pane_g1

0x9065,	// (0x00044a9a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9065,	// (0x00044a9a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd04,	// (0x0004b739) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd04,	// (0x0004b739) cmail_ddmenu_btn01_pane_g

0xeffd,	// (0x0004aa32) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeffd,	// (0x0004aa32) cmail_ddmenu_btn01_pane_t1

0xbca6,	// (0x000476db) bg_button_pane_cp029_ParamLimits

0xbca6,	// (0x000476db) bg_button_pane_cp029

0x9065,	// (0x00044a9a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9065,	// (0x00044a9a) cmail_ddmenu_btn02_pane_g1

0x907d,	// (0x00044ab2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x907d,	// (0x00044ab2) cmail_ddmenu_btn02_pane_t1

0xacc2,	// (0x000466f7) bg_button_pane_cp031_ParamLimits

0xacc2,	// (0x000466f7) bg_button_pane_cp031

0x9065,	// (0x00044a9a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9065,	// (0x00044a9a) cmail_ddmenu_btn03_pane_g1

0x907d,	// (0x00044ab2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x907d,	// (0x00044ab2) cmail_ddmenu_btn03_pane_t1

0x695e,	// (0x00042393) cell_dialer2_keypad_pane_t1_ParamLimits

0x6978,	// (0x000423ad) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6978,	// (0x000423ad) cell_dialer2_keypad_pane_t1_copy1

0x84ed,	// (0x00043f22) ncimui_group_button_pane

0xae75,	// (0x000468aa) main_sp_fs_calendar_pane_ParamLimits

0x8d3e,	// (0x00044773) list_single_cmail_header_caption_pane_ParamLimits

0x2357,	// (0x0003dd8c) aid_recal_txt_sm_pane

0xa79e,	// (0x000461d3) mian_recal_day_pane

0x2391,	// (0x0003ddc6) popup_sp_fs_cale_preview_window_ParamLimits

0xf012,	// (0x0004aa47) list_recal_day_pane

0x254b,	// (0x0003df80) list_single_recal_day_pane_ParamLimits

0x254b,	// (0x0003df80) list_single_recal_day_pane

0xf039,	// (0x0004aa6e) list_single_recal_day_pane_g1_ParamLimits

0xf039,	// (0x0004aa6e) list_single_recal_day_pane_g1

0x255d,	// (0x0003df92) list_single_recal_day_pane_g2_ParamLimits

0x255d,	// (0x0003df92) list_single_recal_day_pane_g2

0x2569,	// (0x0003df9e) list_single_recal_day_pane_g3_ParamLimits

0x2569,	// (0x0003df9e) list_single_recal_day_pane_g3

0x2575,	// (0x0003dfaa) list_single_recal_day_pane_g4_ParamLimits

0x2575,	// (0x0003dfaa) list_single_recal_day_pane_g4

0x2583,	// (0x0003dfb8) list_single_recal_day_pane_g5_ParamLimits

0x2583,	// (0x0003dfb8) list_single_recal_day_pane_g5

0x2599,	// (0x0003dfce) list_single_recal_day_pane_g6_ParamLimits

0x2599,	// (0x0003dfce) list_single_recal_day_pane_g6

0x0004,

0xfd13,	// (0x0004b748) list_single_recal_day_pane_g_ParamLimits

0xfd13,	// (0x0004b748) list_single_recal_day_pane_g

0x25ad,	// (0x0003dfe2) list_single_recal_day_pane_t1

0x25bf,	// (0x0003dff4) list_single_recal_day_pane_t2

0x0001,

0xfd1e,	// (0x0004b753) list_single_recal_day_pane_t

0x90a1,	// (0x00044ad6) ncimui_query_button_pane_ParamLimits

0x90a1,	// (0x00044ad6) ncimui_query_button_pane

0x90b1,	// (0x00044ae6) ncimui_query_button_pane_t1_ParamLimits

0x90b1,	// (0x00044ae6) ncimui_query_button_pane_t1

0x0034,	// (0x0003ba69) ncimui_query_button_pane_t2_ParamLimits

0x0034,	// (0x0003ba69) ncimui_query_button_pane_t2

0x0001,

0xfd23,	// (0x0004b758) ncimui_query_button_pane_t_ParamLimits

0xfd23,	// (0x0004b758) ncimui_query_button_pane_t

0x90c4,	// (0x00044af9) query_button_pane_ParamLimits

0x90c4,	// (0x00044af9) query_button_pane

0xa79e,	// (0x000461d3) bg_button_pane_cp0028

0x0047,	// (0x0003ba7c) query_button_pane_t1

0x54e5,	// (0x00040f1a) main_tport_pane_ParamLimits

0x8c20,	// (0x00044655) bg_popup_window_pane_cp01_ParamLimits

0x8c20,	// (0x00044655) bg_popup_window_pane_cp01

0x8c2e,	// (0x00044663) heading_pane_cp08_ParamLimits

0x8c2e,	// (0x00044663) heading_pane_cp08

0x8c3c,	// (0x00044671) heading_pane_cp07_ParamLimits

0x8c3c,	// (0x00044671) heading_pane_cp07

0x8cab,	// (0x000446e0) cell_tport_appsw_pane_g2

0x0002,

0xfc6f,	// (0x0004b6a4) cell_tport_appsw_pane_g

0x1a62,	// (0x0003d497) input_candi_list_open_g1

0xb505,	// (0x00046f3a) list_cale_time_pane_g6_ParamLimits

0xb505,	// (0x00046f3a) list_cale_time_pane_g6

0x5985,	// (0x000413ba) aid_size_touch_calib_1_ParamLimits

0x5985,	// (0x000413ba) aid_size_touch_calib_1

0x5991,	// (0x000413c6) aid_size_touch_calib_2_ParamLimits

0x5991,	// (0x000413c6) aid_size_touch_calib_2

0x599f,	// (0x000413d4) aid_size_touch_calib_3_ParamLimits

0x599f,	// (0x000413d4) aid_size_touch_calib_3

0x59af,	// (0x000413e4) aid_size_touch_calib_4_ParamLimits

0x59af,	// (0x000413e4) aid_size_touch_calib_4

0x59bd,	// (0x000413f2) main_touch_calib_button_group_pane_ParamLimits

0x59bd,	// (0x000413f2) main_touch_calib_button_group_pane

0x59cb,	// (0x00041400) main_touch_calib_pane_g1_ParamLimits

0x59d7,	// (0x0004140c) main_touch_calib_pane_g2_ParamLimits

0x59e3,	// (0x00041418) main_touch_calib_pane_g3_ParamLimits

0x59ef,	// (0x00041424) main_touch_calib_pane_g4_ParamLimits

0xf6b1,	// (0x0004b0e6) main_touch_calib_pane_g_ParamLimits

0x59fb,	// (0x00041430) main_touch_calib_pane_t1_ParamLimits

0x5a14,	// (0x00041449) main_touch_calib_pane_t2_ParamLimits

0x5a2d,	// (0x00041462) main_touch_calib_pane_t3_ParamLimits

0x5a43,	// (0x00041478) main_touch_calib_pane_t4_ParamLimits

0x5a59,	// (0x0004148e) main_touch_calib_pane_t5_ParamLimits

0xf6ba,	// (0x0004b0ef) main_touch_calib_pane_t_ParamLimits

0xd624,	// (0x00049059) list_single_fp_cale_pane_g3_ParamLimits

0xd624,	// (0x00049059) list_single_fp_cale_pane_g3

0xae75,	// (0x000468aa) bg_button_pane_cp012_ParamLimits

0xae75,	// (0x000468aa) bg_vkb2_func_pane_cp03_ParamLimits

0x77be,	// (0x000431f3) cell_vitu2_function_top_pane_g1_ParamLimits

0xae75,	// (0x000468aa) bg_vkb2_func_pane_cp04_ParamLimits

0x8475,	// (0x00043eaa) main_ncimui_button_group_pane_ParamLimits

0x8475,	// (0x00043eaa) main_ncimui_button_group_pane

0x84db,	// (0x00043f10) main_ncimui_pane_t3_ParamLimits

0x84db,	// (0x00043f10) main_ncimui_pane_t3

0xedd8,	// (0x0004a80d) phacti_button_group_pane

0xefe1,	// (0x0004aa16) aid_size_list_single_double_ParamLimits

0x9023,	// (0x00044a58) popup_ezdial_listscroll_window_ParamLimits

0x9047,	// (0x00044a7c) popup_number_entry_window_cp01_ParamLimits

0x90d1,	// (0x00044b06) phacti_button_pane_ParamLimits

0x90d1,	// (0x00044b06) phacti_button_pane

0xa79e,	// (0x000461d3) bg_button_pane_cp14

0x0055,	// (0x0003ba8a) phacti_button_pane_t1

0x90e2,	// (0x00044b17) main_touch_calib_button_pane_ParamLimits

0x90e2,	// (0x00044b17) main_touch_calib_button_pane

0xaf40,	// (0x00046975) bg_button_pane_cp18_ParamLimits

0xaf40,	// (0x00046975) bg_button_pane_cp18

0x0063,	// (0x0003ba98) main_touch_calib_button_pane_t1_ParamLimits

0x0063,	// (0x0003ba98) main_touch_calib_button_pane_t1

0x0079,	// (0x0003baae) main_touch_calib_button_pane_t2_ParamLimits

0x0079,	// (0x0003baae) main_touch_calib_button_pane_t2

0x0001,

0xfd28,	// (0x0004b75d) main_touch_calib_button_pane_t_ParamLimits

0xfd28,	// (0x0004b75d) main_touch_calib_button_pane_t

0xa79e,	// (0x000461d3) cell_ncimui_button_pane

0xa79e,	// (0x000461d3) bg_button_pane_cp032

0x0097,	// (0x0003bacc) cell_ncimui_button_pane_t1

0x69d4,	// (0x00042409) image3_infobar_pane_ParamLimits

0x69d4,	// (0x00042409) image3_infobar_pane

0x8898,	// (0x000442cd) fs_bigclock_status_pane_ParamLimits

0x8898,	// (0x000442cd) fs_bigclock_status_pane

0x88a5,	// (0x000442da) main_fs_bigclock_clock_pane_ParamLimits

0x88a5,	// (0x000442da) main_fs_bigclock_clock_pane

0x88b9,	// (0x000442ee) main_fs_bigclock_indi_pane_ParamLimits

0x88b9,	// (0x000442ee) main_fs_bigclock_indi_pane

0x88e1,	// (0x00044316) main_fs_bigclock_swipe_pane_ParamLimits

0x88e1,	// (0x00044316) main_fs_bigclock_swipe_pane

0xa79e,	// (0x000461d3) main_fs_clock_dumped_data

0xe8fc,	// (0x0004a331) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe8fc,	// (0x0004a331) list_single_fs_bigclock_indicator_pane_g1

0xe918,	// (0x0004a34d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe918,	// (0x0004a34d) list_single_fs_bigclock_indicator_pane_g2

0xe932,	// (0x0004a367) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe932,	// (0x0004a367) list_single_fs_bigclock_indicator_pane_g3

0xe94c,	// (0x0004a381) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe94c,	// (0x0004a381) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbc9,	// (0x0004b5fe) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbc9,	// (0x0004b5fe) list_single_fs_bigclock_indicator_pane_g

0xe977,	// (0x0004a3ac) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe977,	// (0x0004a3ac) list_single_fs_bigclock_indicator_pane_t1

0xe99f,	// (0x0004a3d4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe99f,	// (0x0004a3d4) list_single_fs_bigclock_indicator_pane_t2

0xe9c7,	// (0x0004a3fc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe9c7,	// (0x0004a3fc) list_single_fs_bigclock_indicator_pane_t3

0xe9ef,	// (0x0004a424) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe9ef,	// (0x0004a424) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbd4,	// (0x0004b609) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbd4,	// (0x0004b609) list_single_fs_bigclock_indicator_pane_t

0x00a5,	// (0x0003bada) image3_infobar_fav_pane_ParamLimits

0x00a5,	// (0x0003bada) image3_infobar_fav_pane

0x00b5,	// (0x0003baea) image3_infobar_loc_pane_ParamLimits

0x00b5,	// (0x0003baea) image3_infobar_loc_pane

0x00c9,	// (0x0003bafe) image3_infobar_time_pane_ParamLimits

0x00c9,	// (0x0003bafe) image3_infobar_time_pane

0xb11d,	// (0x00046b52) image3_infobar_time_pane_g1

0x00d9,	// (0x0003bb0e) image3_infobar_time_pane_t1

0xb11d,	// (0x00046b52) image3_infobar_loc_pane_g1

0x00e7,	// (0x0003bb1c) image3_infobar_loc_pane_g2

0x0001,

0xfd2d,	// (0x0004b762) image3_infobar_loc_pane_g

0x00ef,	// (0x0003bb24) image3_infobar_loc_pane_t1

0xb11d,	// (0x00046b52) image3_infobar_fav_pane_g1

0x00fd,	// (0x0003bb32) image3_infobar_fav_pane_g2

0x0001,

0xfd32,	// (0x0004b767) image3_infobar_fav_pane_g

0x0105,	// (0x0003bb3a) fs_bigclock_status_battery_pane

0x010e,	// (0x0003bb43) fs_bigclock_status_signal_pane

0x0117,	// (0x0003bb4c) fs_bigclock_status_title_pane

0x0120,	// (0x0003bb55) fs_bigclock_status_signal_pane_g1

0x0129,	// (0x0003bb5e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd37,	// (0x0004b76c) fs_bigclock_status_signal_pane_g

0x0131,	// (0x0003bb66) fs_bigclock_status_battery_pane_g1

0x013a,	// (0x0003bb6f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd3c,	// (0x0004b771) fs_bigclock_status_battery_pane_g

0x0142,	// (0x0003bb77) fs_bigclock_status_title_pane_t1

0x90f2,	// (0x00044b27) main_fs_bigclock_clock_pane_g1

0x90f2,	// (0x00044b27) main_fs_bigclock_clock_pane_g2

0x90ff,	// (0x00044b34) main_fs_bigclock_clock_pane_g3

0x90ff,	// (0x00044b34) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd41,	// (0x0004b776) main_fs_bigclock_clock_pane_g

0x910b,	// (0x00044b40) main_fs_bigclock_clock_pane_t1

0x911e,	// (0x00044b53) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd4a,	// (0x0004b77f) main_fs_bigclock_clock_pane_t

0x0150,	// (0x0003bb85) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0150,	// (0x0003bb85) list_single_fs_bigclock_indicator_pane

0x0161,	// (0x0003bb96) list_single_fs_bigclock_pane_ParamLimits

0x0161,	// (0x0003bb96) list_single_fs_bigclock_pane

0x0187,	// (0x0003bbbc) main_fs_bigclock_indicator_pane_t1

0x0196,	// (0x0003bbcb) list_single_fs_bigclock_pane_g1

0x019e,	// (0x0003bbd3) list_single_fs_bigclock_pane_t1

0xb11d,	// (0x00046b52) main_fs_bigclock_swipe_pane_g1

0x01e1,	// (0x0003bc16) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd5b,	// (0x0004b790) main_fs_bigclock_swipe_pane_g

0x01e9,	// (0x0003bc1e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x01e9,	// (0x0003bc1e) main_fs_bigclock_swipe_pane_t1

0x4765,	// (0x0004019a) call_type_pane_ParamLimits

0xa79e,	// (0x000461d3) main_btmg_pane

0x240a,	// (0x0003de3f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x240a,	// (0x0003de3f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcce,	// (0x0004b703) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcce,	// (0x0004b703) list_single_cale_mrui_row_pane_g

0x253a,	// (0x0003df6f) list_recal_vselct_arw_lo_pane

0xf031,	// (0x0004aa66) list_recal_vselct_arw_up_pane

0x2542,	// (0x0003df77) list_recal_vselct_pane

0x9175,	// (0x00044baa) btmg_button_pane

0x9181,	// (0x00044bb6) main_btmg_pane_g1

0xa79e,	// (0x000461d3) bg_button_pane_cp044

0x0206,	// (0x0003bc3b) btmg_button_pane_t1

0xceb9,	// (0x000488ee) aid_listscroll_gen

0xae75,	// (0x000468aa) main_cntbar_detail_pane

0xed15,	// (0x0004a74a) list_cmail_folder_pane

0xe013,	// (0x00049a48) sp_fs_scroll_pane_cp03_ParamLimits

0x8d3e,	// (0x00044773) list_single_fs_dyc_pane_cp01_ParamLimits

0x8d3e,	// (0x00044773) list_single_fs_dyc_pane_cp01

0x0214,	// (0x0003bc49) aid_size_cmail_indent

0x25d1,	// (0x0003e006) list_single_dyc_row_pane_cp01

0x91a9,	// (0x00044bde) cntbar_detail_list_pane_ParamLimits

0x91a9,	// (0x00044bde) cntbar_detail_list_pane

0x91e3,	// (0x00044c18) main_cntbar_detail_cont_pane_ParamLimits

0x91e3,	// (0x00044c18) main_cntbar_detail_cont_pane

0x4759,	// (0x0004018e) scroll_pane_cp032_ParamLimits

0x4759,	// (0x0004018e) scroll_pane_cp032

0x91ef,	// (0x00044c24) cntbar_detail_list_event_pane_ParamLimits

0x91ef,	// (0x00044c24) cntbar_detail_list_event_pane

0x91b5,	// (0x00044bea) cntbar_detail_list_shct_pane

0xb390,	// (0x00046dc5) aid_list_gen

0x0236,	// (0x0003bc6b) aid_scroll

0x023f,	// (0x0003bc74) aid_size_touch_scroll_bar

0xacb9,	// (0x000466ee) aid_list_double

0x25da,	// (0x0003e00f) aid_list_single

0x9203,	// (0x00044c38) aid_list_single_lg

0x25e3,	// (0x0003e018) aid_list_z_g_a_sm

0x25eb,	// (0x0003e020) aid_list_z_g_d

0x25f3,	// (0x0003e028) aid_txt_z_prm

0x2601,	// (0x0003e036) aid_txt_z_prm_cp01

0x260f,	// (0x0003e044) aid_txt_z_sec

0x920c,	// (0x00044c41) main_cntbar_detail_cont_pane_g1_ParamLimits

0x920c,	// (0x00044c41) main_cntbar_detail_cont_pane_g1

0x9219,	// (0x00044c4e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9219,	// (0x00044c4e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd60,	// (0x0004b795) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd60,	// (0x0004b795) main_cntbar_detail_cont_pane_g

0x0248,	// (0x0003bc7d) main_cntbar_detail_cont_pane_t1

0x0256,	// (0x0003bc8b) main_cntbar_detail_cont_pane_t2

0x0264,	// (0x0003bc99) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd65,	// (0x0004b79a) main_cntbar_detail_cont_pane_t

0x9225,	// (0x00044c5a) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9225,	// (0x00044c5a) cell_cntbar_detail_list_shct_pane

0x0272,	// (0x0003bca7) cntbar_detail_list_shct_pane_g1

0x027b,	// (0x0003bcb0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd6c,	// (0x0004b7a1) cntbar_detail_list_shct_pane_g

0x9239,	// (0x00044c6e) cntbar_detail_list_event_pane_g1_ParamLimits

0x9239,	// (0x00044c6e) cntbar_detail_list_event_pane_g1

0x9245,	// (0x00044c7a) cntbar_detail_list_event_pane_g2_ParamLimits

0x9245,	// (0x00044c7a) cntbar_detail_list_event_pane_g2

0x0005,

0xfd71,	// (0x0004b7a6) cntbar_detail_list_event_pane_g_ParamLimits

0xfd71,	// (0x0004b7a6) cntbar_detail_list_event_pane_g

0x92b1,	// (0x00044ce6) cntbar_detail_list_event_pane_t1_ParamLimits

0x92b1,	// (0x00044ce6) cntbar_detail_list_event_pane_t1

0x92c6,	// (0x00044cfb) cntbar_detail_list_event_pane_t2_ParamLimits

0x92c6,	// (0x00044cfb) cntbar_detail_list_event_pane_t2

0x0002,

0xfd7e,	// (0x0004b7b3) cntbar_detail_list_event_pane_t_ParamLimits

0xfd7e,	// (0x0004b7b3) cntbar_detail_list_event_pane_t

0xb11d,	// (0x00046b52) cell_cntbar_detail_list_shct_pane_g1

0xbaf4,	// (0x00047529) navi_pane_mv_g3

0xae75,	// (0x000468aa) main_cntbar_detail_pane_ParamLimits

0xa79e,	// (0x000461d3) main_notif_wgt_pane

0x665e,	// (0x00042093) aid_tch_main_mp4_pane_g4

0x68bd,	// (0x000422f2) popup_slider_window_cp02

0x2530,	// (0x0003df65) list_recal_day_event_pane

0x9189,	// (0x00044bbe) cntbar_detail_btn_pane_ParamLimits

0x9189,	// (0x00044bbe) cntbar_detail_btn_pane

0x9199,	// (0x00044bce) cntbar_detail_btn_pane_cp01_ParamLimits

0x9199,	// (0x00044bce) cntbar_detail_btn_pane_cp01

0x91b5,	// (0x00044bea) cntbar_detail_list_shct_pane_ParamLimits

0x91c1,	// (0x00044bf6) cntbar_detail_pane_g1_ParamLimits

0x91c1,	// (0x00044bf6) cntbar_detail_pane_g1

0x91cd,	// (0x00044c02) cntbar_detail_pane_t1_ParamLimits

0x91cd,	// (0x00044c02) cntbar_detail_pane_t1

0x9251,	// (0x00044c86) cntbar_detail_list_event_pane_g3_ParamLimits

0x9251,	// (0x00044c86) cntbar_detail_list_event_pane_g3

0x9269,	// (0x00044c9e) cntbar_detail_list_event_pane_g4_ParamLimits

0x9269,	// (0x00044c9e) cntbar_detail_list_event_pane_g4

0x9281,	// (0x00044cb6) cntbar_detail_list_event_pane_g5_ParamLimits

0x9281,	// (0x00044cb6) cntbar_detail_list_event_pane_g5

0x9299,	// (0x00044cce) cntbar_detail_list_event_pane_g6_ParamLimits

0x9299,	// (0x00044cce) cntbar_detail_list_event_pane_g6

0x92db,	// (0x00044d10) cntbar_detail_list_event_pane_t3_ParamLimits

0x92db,	// (0x00044d10) cntbar_detail_list_event_pane_t3

0x92ed,	// (0x00044d22) popup_notif_wgt_window_ParamLimits

0x92ed,	// (0x00044d22) popup_notif_wgt_window

0x92fd,	// (0x00044d32) popup_submenu_window_cp01_ParamLimits

0x92fd,	// (0x00044d32) popup_submenu_window_cp01

0xb0fb,	// (0x00046b30) bg_popup_window_pane_cp10

0x0284,	// (0x0003bcb9) listscroll_notif_wgt_pane

0x0296,	// (0x0003bccb) list_notif_wgt_window

0x029f,	// (0x0003bcd4) scroll_pane_cp033

0x930b,	// (0x00044d40) list_notif_wgt_row_pane_ParamLimits

0x930b,	// (0x00044d40) list_notif_wgt_row_pane

0x02a8,	// (0x0003bcdd) aid_size_list_notif_wgt_del

0x02b5,	// (0x0003bcea) list_notif_wgt_row_pane_g1

0x02c1,	// (0x0003bcf6) list_notif_wgt_row_pane_g2

0x02d0,	// (0x0003bd05) list_notif_wgt_row_pane_g3

0x0002,

0xfd85,	// (0x0004b7ba) list_notif_wgt_row_pane_g

0x02dd,	// (0x0003bd12) list_notif_wgt_row_pane_t1

0x02f3,	// (0x0003bd28) list_notif_wgt_row_pane_t2

0x0305,	// (0x0003bd3a) list_notif_wgt_row_pane_t3

0x0002,

0xfd8c,	// (0x0004b7c1) list_notif_wgt_row_pane_t

0xddd8,	// (0x0004980d) list_recal_day_event_pane_g1

0x0317,	// (0x0003bd4c) list_recal_day_event_pane_t1

0xa79e,	// (0x000461d3) bg_button_pane_cp045

0x931d,	// (0x00044d52) cntbar_detail_btn_pane_t1

0xbca6,	// (0x000476db) main_callh_pane_ParamLimits

0xbca6,	// (0x000476db) main_callh_pane

0xa79e,	// (0x000461d3) main_coverflow0_pane

0xa79e,	// (0x000461d3) main_wgtman_pane

0x88f9,	// (0x0004432e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x88f9,	// (0x0004432e) main_fs_bigclock_unlock_btn_pane

0x8ca3,	// (0x000446d8) bg_button_pane_cp16

0x8cb3,	// (0x000446e8) cell_tport_appsw_pane_g3

0x932b,	// (0x00044d60) cf0_flow_pane_ParamLimits

0x932b,	// (0x00044d60) cf0_flow_pane

0x0326,	// (0x0003bd5b) listscroll_cf0_pane

0x0331,	// (0x0003bd66) main_cf0_pane_g1

0x933a,	// (0x00044d6f) main_cf0_pane_t1_ParamLimits

0x933a,	// (0x00044d6f) main_cf0_pane_t1

0x934e,	// (0x00044d83) main_cf0_pane_t2_ParamLimits

0x934e,	// (0x00044d83) main_cf0_pane_t2

0x0001,

0xfd98,	// (0x0004b7cd) main_cf0_pane_t_ParamLimits

0xfd98,	// (0x0004b7cd) main_cf0_pane_t

0x0343,	// (0x0003bd78) scroll_pane_cp11

0x9362,	// (0x00044d97) cf0_flow_pane_g1

0x936a,	// (0x00044d9f) cf0_flow_pane_g2

0x0001,

0xfd9d,	// (0x0004b7d2) cf0_flow_pane_g

0x9372,	// (0x00044da7) cf0_flow_pane_t1

0xa79e,	// (0x000461d3) main_call6_pane

0xa79e,	// (0x000461d3) main_calllock_pane

0x9380,	// (0x00044db5) call6_btn_grp_pane_ParamLimits

0x9380,	// (0x00044db5) call6_btn_grp_pane

0x938f,	// (0x00044dc4) call6_pane_g1_ParamLimits

0x938f,	// (0x00044dc4) call6_pane_g1

0x939f,	// (0x00044dd4) popup_call6_1st_window_ParamLimits

0x939f,	// (0x00044dd4) popup_call6_1st_window

0x93ad,	// (0x00044de2) popup_call6_2nd_window_ParamLimits

0x93ad,	// (0x00044de2) popup_call6_2nd_window

0x93bb,	// (0x00044df0) cell_call6_btn_pane_ParamLimits

0x93bb,	// (0x00044df0) cell_call6_btn_pane

0xb0fb,	// (0x00046b30) bg_popup_call2_in_pane_cp03

0x034e,	// (0x0003bd83) popup_call6_1st_window_g1

0x0356,	// (0x0003bd8b) popup_call6_1st_window_g2

0x035e,	// (0x0003bd93) popup_call6_1st_window_g3

0x0002,

0xfda2,	// (0x0004b7d7) popup_call6_1st_window_g

0x0366,	// (0x0003bd9b) popup_call6_1st_window_t1

0x0375,	// (0x0003bdaa) popup_call6_1st_window_t2

0x0383,	// (0x0003bdb8) popup_call6_1st_window_t3

0x0002,

0xfda9,	// (0x0004b7de) popup_call6_1st_window_t

0xb0fb,	// (0x00046b30) bg_popup_call2_in_pane_cp04

0x0391,	// (0x0003bdc6) popup_call6_2nd_window_g1

0x0399,	// (0x0003bdce) popup_call6_2nd_window_g2

0x03a1,	// (0x0003bdd6) popup_call6_2nd_window_g3

0x0002,

0xfdb0,	// (0x0004b7e5) popup_call6_2nd_window_g

0x03a9,	// (0x0003bdde) popup_call6_2nd_window_t1

0xa79e,	// (0x000461d3) bg_button_pane_cp15

0x03eb,	// (0x0003be20) cell_call6_btn_pane_g1

0x0663,	// (0x0003c098) cell_call6_btn_pane_t1

0x93ca,	// (0x00044dff) listscroll_wgtman_pane_ParamLimits

0x93ca,	// (0x00044dff) listscroll_wgtman_pane

0x93e6,	// (0x00044e1b) wgtman_btn_pane_ParamLimits

0x93e6,	// (0x00044e1b) wgtman_btn_pane

0xb908,	// (0x0004733d) aid_scroll_copy1

0x03b8,	// (0x0003bded) list_wgtman_pane

0x941b,	// (0x00044e50) wgtman_btn_pane_g1_ParamLimits

0x941b,	// (0x00044e50) wgtman_btn_pane_g1

0x9443,	// (0x00044e78) wgtman_btn_pane_t1_ParamLimits

0x9443,	// (0x00044e78) wgtman_btn_pane_t1

0x03c2,	// (0x0003bdf7) wgtman_btn_pane_t2_ParamLimits

0x03c2,	// (0x0003bdf7) wgtman_btn_pane_t2

0x0001,

0xfdb7,	// (0x0004b7ec) wgtman_btn_pane_t_ParamLimits

0xfdb7,	// (0x0004b7ec) wgtman_btn_pane_t

0x947a,	// (0x00044eaf) listrow_wgtman_pane_ParamLimits

0x947a,	// (0x00044eaf) listrow_wgtman_pane

0x9496,	// (0x00044ecb) listrow_wgtman_pane_g1

0x94a3,	// (0x00044ed8) listrow_wgtman_pane_g2

0x0001,

0xfdbc,	// (0x0004b7f1) listrow_wgtman_pane_g

0x261d,	// (0x0003e052) listrow_wgtman_pane_t1

0x2635,	// (0x0003e06a) listrow_wgtman_pane_t2

0x0001,

0xfdc1,	// (0x0004b7f6) listrow_wgtman_pane_t

0x265b,	// (0x0003e090) wait_bar_pane_cp09

0x03d9,	// (0x0003be0e) main_calllock_btn_pane

0x03e3,	// (0x0003be18) main_calllock_pane_g1

0xa79e,	// (0x000461d3) bg_button_pane_cp17

0x03eb,	// (0x0003be20) main_calllock_btn_pane_g1

0x03f4,	// (0x0003be29) main_calllock_btn_pane_t1

0xa79e,	// (0x000461d3) main_dialer3_pane

0xa79e,	// (0x000461d3) main_fmrd2_pane

0xb11d,	// (0x00046b52) main_fs_bigclock_unlock_btn_pane_g1

0x94c9,	// (0x00044efe) main_fs_bigclock_unlock_btn_pane_t1

0x94d7,	// (0x00044f0c) area_fmrd2_info_pane_ParamLimits

0x94d7,	// (0x00044f0c) area_fmrd2_info_pane

0x94e5,	// (0x00044f1a) area_fmrd2_visual_pane_ParamLimits

0x94e5,	// (0x00044f1a) area_fmrd2_visual_pane

0x94f3,	// (0x00044f28) fmrd2_indi_pane_ParamLimits

0x94f3,	// (0x00044f28) fmrd2_indi_pane

0x9500,	// (0x00044f35) area_fmrd2_visual_pane_g1

0x9508,	// (0x00044f3d) area_fmrd2_visual_pane_t1

0x9518,	// (0x00044f4d) area_fmrd2_visual_pane_t2

0x9528,	// (0x00044f5d) area_fmrd2_visual_pane_t3

0x0002,

0xfdcb,	// (0x0004b800) area_fmrd2_visual_pane_t

0x9538,	// (0x00044f6d) area_fmrd2_info_pane_g1

0x9540,	// (0x00044f75) area_fmrd2_info_pane_t1

0x9550,	// (0x00044f85) area_fmrd2_info_pane_t2

0x9560,	// (0x00044f95) area_fmrd2_info_pane_t3

0x9570,	// (0x00044fa5) area_fmrd2_info_pane_t4

0x0003,

0xfdd2,	// (0x0004b807) area_fmrd2_info_pane_t

0x957e,	// (0x00044fb3) fmrd2_indi_pane_t1

0x958e,	// (0x00044fc3) fmrd2_indi_pane_t2

0x959e,	// (0x00044fd3) fmrd2_indi_pane_t3

0x0002,

0xfddb,	// (0x0004b810) fmrd2_indi_pane_t

0xe95b,	// (0x0004a390) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe95b,	// (0x0004a390) list_single_fs_bigclock_indicator_pane_g5

0xea0c,	// (0x0004a441) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xea0c,	// (0x0004a441) list_single_fs_bigclock_indicator_pane_t5

0x8e44,	// (0x00044879) aid_cell_bcale_month_pane_ParamLimits

0x8e44,	// (0x00044879) aid_cell_bcale_month_pane

0x8e62,	// (0x00044897) bcale_month_pane_ParamLimits

0x8e62,	// (0x00044897) bcale_month_pane

0x8e80,	// (0x000448b5) bcale_preview_pane_ParamLimits

0x8e80,	// (0x000448b5) bcale_preview_pane

0x019e,	// (0x0003bbd3) list_single_fs_bigclock_pane_t1_ParamLimits

0x01bd,	// (0x0003bbf2) list_single_fs_bigclock_pane_t2_ParamLimits

0x01bd,	// (0x0003bbf2) list_single_fs_bigclock_pane_t2

0x0001,

0xfd56,	// (0x0004b78b) list_single_fs_bigclock_pane_t_ParamLimits

0xfd56,	// (0x0004b78b) list_single_fs_bigclock_pane_t

0x94c1,	// (0x00044ef6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc6,	// (0x0004b7fb) main_fs_bigclock_unlock_btn_pane_g

0x95ac,	// (0x00044fe1) aid_dia3_key_size_ParamLimits

0x95ac,	// (0x00044fe1) aid_dia3_key_size

0x95b8,	// (0x00044fed) aid_dia3_listrow_size_ParamLimits

0x95b8,	// (0x00044fed) aid_dia3_listrow_size

0x95c8,	// (0x00044ffd) dia3_keypad_fun_pane_ParamLimits

0x95c8,	// (0x00044ffd) dia3_keypad_fun_pane

0x95da,	// (0x0004500f) dia3_keypad_num_pane_ParamLimits

0x95da,	// (0x0004500f) dia3_keypad_num_pane

0x95ec,	// (0x00045021) dia3_listscroll_pane_ParamLimits

0x95ec,	// (0x00045021) dia3_listscroll_pane

0x95fa,	// (0x0004502f) dia3_numentry_pane_ParamLimits

0x95fa,	// (0x0004502f) dia3_numentry_pane

0x0403,	// (0x0003be38) dia3_list_pane

0x040e,	// (0x0003be43) scroll_pane_cp12

0xa79e,	// (0x000461d3) bg_dia3_numentry_pane

0x9608,	// (0x0004503d) dia3_numentry_pane_t1

0x9617,	// (0x0004504c) cell_dia3_key_num_pane

0x961f,	// (0x00045054) cell_dia3_key0_fun_pane_ParamLimits

0x961f,	// (0x00045054) cell_dia3_key0_fun_pane

0x962c,	// (0x00045061) cell_dia3_key1_fun_pane_ParamLimits

0x962c,	// (0x00045061) cell_dia3_key1_fun_pane

0x9639,	// (0x0004506e) dia3_listrow_pane

0xe6a0,	// (0x0004a0d5) bg_dia3_numentry_pane_g1

0xa79e,	// (0x000461d3) bg_button_pane_cp21

0x0419,	// (0x0003be4e) cell_dia3_key_num_pane_t1

0x0427,	// (0x0003be5c) cell_dia3_key_num_pane_t2

0x0436,	// (0x0003be6b) cell_dia3_key_num_pane_t3

0x0445,	// (0x0003be7a) cell_dia3_key_num_pane_t4

0x0003,

0xfde2,	// (0x0004b817) cell_dia3_key_num_pane_t

0xa79e,	// (0x000461d3) bg_button_pane_cp19

0x9646,	// (0x0004507b) cell_dia3_key0_fun_pane_g1

0xa79e,	// (0x000461d3) bg_button_pane_cp20

0x964e,	// (0x00045083) cell_dia3_key1_fun_pane_g1

0x9656,	// (0x0004508b) area_left_week_number_pane

0x9669,	// (0x0004509e) area_top_day_name_pane

0x9677,	// (0x000450ac) frame_month_view_pane

0x0454,	// (0x0003be89) grid_month_view_pane

0x968c,	// (0x000450c1) cell_top_day_name_pane_ParamLimits

0x968c,	// (0x000450c1) cell_top_day_name_pane

0x96a6,	// (0x000450db) cell_area_left_week_number_pane_ParamLimits

0x96a6,	// (0x000450db) cell_area_left_week_number_pane

0x96c9,	// (0x000450fe) cell_month_view_pane_ParamLimits

0x96c9,	// (0x000450fe) cell_month_view_pane

0x0462,	// (0x0003be97) frm_month_g1

0x96f5,	// (0x0004512a) frm_month_g2

0x9706,	// (0x0004513b) frm_month_g3

0x9717,	// (0x0004514c) frm_month_g4

0x9728,	// (0x0004515d) frm_month_g5

0x973b,	// (0x00045170) frm_month_g6

0x974e,	// (0x00045183) frm_month_g7

0x046f,	// (0x0003bea4) frm_month_g8

0x9761,	// (0x00045196) frm_month_g9

0x976e,	// (0x000451a3) frm_month_g10

0x977b,	// (0x000451b0) frm_month_g11

0x9788,	// (0x000451bd) frm_month_g12

0x9795,	// (0x000451ca) frm_month_g13

0x97a2,	// (0x000451d7) frm_month_g14

0x97b1,	// (0x000451e6) frm_month_g15

0x97c0,	// (0x000451f5) frm_month_g16

0x000f,

0xfdeb,	// (0x0004b820) frm_month_g

0x047c,	// (0x0003beb1) cell_top_day_name_pane_t1

0x97cf,	// (0x00045204) cell_area_left_week_number_pane_g1

0x97de,	// (0x00045213) cell_area_left_week_number_pane_t1

0xaece,	// (0x00046903) cell_month_view_pane_g1

0x97f4,	// (0x00045229) cell_month_view_pane_t1

0xa79e,	// (0x000461d3) main_fps_pane

0xec20,	// (0x0004a655) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xec20,	// (0x0004a655) cmail_ddmenu_btn02_pane_cp1

0xec3c,	// (0x0004a671) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xec3c,	// (0x0004a671) cmail_ddmenu_btn02_pane_cp2

0x9071,	// (0x00044aa6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9071,	// (0x00044aa6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd09,	// (0x0004b73e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd09,	// (0x0004b73e) cmail_ddmenu_btn02_pane_g

0x908f,	// (0x00044ac4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x908f,	// (0x00044ac4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd0e,	// (0x0004b743) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd0e,	// (0x0004b743) cmail_ddmenu_btn02_pane_t

0x980a,	// (0x0004523f) fps_text_pane_ParamLimits

0x980a,	// (0x0004523f) fps_text_pane

0x9817,	// (0x0004524c) main_fps_pane_g1_ParamLimits

0x9817,	// (0x0004524c) main_fps_pane_g1

0x9825,	// (0x0004525a) wait_bar_pane_cp010_ParamLimits

0x9825,	// (0x0004525a) wait_bar_pane_cp010

0x9831,	// (0x00045266) fps_text_pane_t1_ParamLimits

0x9831,	// (0x00045266) fps_text_pane_t1

0x6d66,	// (0x0004279b) cam4_image_uncrop_pane_g1

0x6d6f,	// (0x000427a4) cam4_image_uncrop_pane_g2

0x6d78,	// (0x000427ad) cam4_image_uncrop_pane_g3

0x6d81,	// (0x000427b6) cam4_image_uncrop_pane_g4

0x0003,

0xf84d,	// (0x0004b282) cam4_image_uncrop_pane_g

0x9639,	// (0x0004506e) dia3_listrow_pane_ParamLimits

0xa79e,	// (0x000461d3) main_phob2_pane

0x8c85,	// (0x000446ba) cell_tport_appsw_pane_cp02_ParamLimits

0x8c85,	// (0x000446ba) cell_tport_appsw_pane_cp02

0x8c94,	// (0x000446c9) cell_tport_appsw_pane_cp03_ParamLimits

0x8c94,	// (0x000446c9) cell_tport_appsw_pane_cp03

0xa79e,	// (0x000461d3) phob2_contact_card_pane

0xa79e,	// (0x000461d3) phob2_listscroll_pane

0x048f,	// (0x0003bec4) phob2_list_pane

0x0497,	// (0x0003becc) scroll_pane_cp034

0x984a,	// (0x0004527f) phob2_cc_data_pane_ParamLimits

0x984a,	// (0x0004527f) phob2_cc_data_pane

0x9864,	// (0x00045299) phob2_cc_listscroll_pane_ParamLimits

0x9864,	// (0x00045299) phob2_cc_listscroll_pane

0x947a,	// (0x00044eaf) list_double_large_graphic_phob2_pane_ParamLimits

0x947a,	// (0x00044eaf) list_double_large_graphic_phob2_pane

0x987e,	// (0x000452b3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x987e,	// (0x000452b3) list_double_large_graphic_phob2_pane_g1

0x266d,	// (0x0003e0a2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x266d,	// (0x0003e0a2) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe0c,	// (0x0004b841) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe0c,	// (0x0004b841) list_double_large_graphic_phob2_pane_g

0x2693,	// (0x0003e0c8) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2693,	// (0x0003e0c8) list_double_large_graphic_phob2_pane_t1

0x26a8,	// (0x0003e0dd) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x26a8,	// (0x0003e0dd) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe15,	// (0x0004b84a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe15,	// (0x0004b84a) list_double_large_graphic_phob2_pane_t

0xa79e,	// (0x000461d3) list_highlight_pane_cp024

0x049f,	// (0x0003bed4) phob2_cc_button_pane

0x988b,	// (0x000452c0) phob2_cc_data_pane_g1_ParamLimits

0x988b,	// (0x000452c0) phob2_cc_data_pane_g1

0x989a,	// (0x000452cf) phob2_cc_data_pane_g2_ParamLimits

0x989a,	// (0x000452cf) phob2_cc_data_pane_g2

0x0001,

0xfe1a,	// (0x0004b84f) phob2_cc_data_pane_g_ParamLimits

0xfe1a,	// (0x0004b84f) phob2_cc_data_pane_g

0x98a9,	// (0x000452de) phob2_cc_data_pane_t1_ParamLimits

0x98a9,	// (0x000452de) phob2_cc_data_pane_t1

0x98be,	// (0x000452f3) phob2_cc_data_pane_t2_ParamLimits

0x98be,	// (0x000452f3) phob2_cc_data_pane_t2

0x98d3,	// (0x00045308) phob2_cc_data_pane_t3_ParamLimits

0x98d3,	// (0x00045308) phob2_cc_data_pane_t3

0x0002,

0xfe1f,	// (0x0004b854) phob2_cc_data_pane_t_ParamLimits

0xfe1f,	// (0x0004b854) phob2_cc_data_pane_t

0x04a7,	// (0x0003bedc) phob2_cc_list_pane_ParamLimits

0x04a7,	// (0x0003bedc) phob2_cc_list_pane

0xe007,	// (0x00049a3c) scroll_pane_cp035_ParamLimits

0xe007,	// (0x00049a3c) scroll_pane_cp035

0xae75,	// (0x000468aa) bg_button_pane_cp033

0x04b3,	// (0x0003bee8) phob2_cc_button_pane_g1

0x04bf,	// (0x0003bef4) phob2_cc_button_pane_t1

0x04d4,	// (0x0003bf09) phob2_cc_button_pane_t2

0x0001,

0xfe26,	// (0x0004b85b) phob2_cc_button_pane_t

0x98e8,	// (0x0004531d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98e8,	// (0x0004531d) list_double_large_graphic_phob2_cc_pane

0x995c,	// (0x00045391) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x995c,	// (0x00045391) list_double_large_graphic_phob2_cc_pane_g1

0x26bd,	// (0x0003e0f2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x26bd,	// (0x0003e0f2) list_double_large_graphic_phob2_cc_pane_g2

0x26c9,	// (0x0003e0fe) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x26c9,	// (0x0003e0fe) list_double_large_graphic_phob2_cc_pane_g3

0x26d5,	// (0x0003e10a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x26d5,	// (0x0003e10a) list_double_large_graphic_phob2_cc_pane_g4

0x26e1,	// (0x0003e116) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x26e1,	// (0x0003e116) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe2b,	// (0x0004b860) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe2b,	// (0x0004b860) list_double_large_graphic_phob2_cc_pane_g

0x26ed,	// (0x0003e122) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x26ed,	// (0x0003e122) list_double_large_graphic_phob2_cc_pane_t1

0x2716,	// (0x0003e14b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x2716,	// (0x0003e14b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe36,	// (0x0004b86b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe36,	// (0x0004b86b) list_double_large_graphic_phob2_cc_pane_t

0x04f2,	// (0x0003bf27) list_highlight_pane_cp025_ParamLimits

0x04f2,	// (0x0003bf27) list_highlight_pane_cp025

0xae75,	// (0x000468aa) bg_button_pane_cp033_ParamLimits

0x04b3,	// (0x0003bee8) phob2_cc_button_pane_g1_ParamLimits

0x04bf,	// (0x0003bef4) phob2_cc_button_pane_t1_ParamLimits

0x04d4,	// (0x0003bf09) phob2_cc_button_pane_t2_ParamLimits

0xfe26,	// (0x0004b85b) phob2_cc_button_pane_t_ParamLimits

0x2994,	// (0x0003e3c9) popup_wgtman_window

0xdcbc,	// (0x000496f1) scroll_pane_cp038

0x9403,	// (0x00044e38) wgtman_btn_pane_cp_01_ParamLimits

0x9403,	// (0x00044e38) wgtman_btn_pane_cp_01

0x0500,	// (0x0003bf35) wgtman_content_pane

0x0509,	// (0x0003bf3e) wgtman_heading_pane

0xa79e,	// (0x000461d3) bg_heading_pane_cp02

0x0512,	// (0x0003bf47) wgtman_heading_pane_g1

0x051a,	// (0x0003bf4f) wgtman_heading_pane_t1

0x0528,	// (0x0003bf5d) scroll_pane_cp036

0x0530,	// (0x0003bf65) wgtman_list_pane

0xeeec,	// (0x0004a921) wgtman_list_pane_t1_ParamLimits

0xeeec,	// (0x0004a921) wgtman_list_pane_t1

0x6cc5,	// (0x000426fa) cam4_grid_pane

0x1d0e,	// (0x0003d743) bg_button_pane_cp015_ParamLimits

0x7977,	// (0x000433ac) bg_button_pane_cp016_ParamLimits

0x7983,	// (0x000433b8) bg_button_pane_cp017_ParamLimits

0x799e,	// (0x000433d3) popup_vitu2_query_window_g3_ParamLimits

0x799e,	// (0x000433d3) popup_vitu2_query_window_g3

0x1dcd,	// (0x0003d802) popup_vitu2_query_window_t6_ParamLimits

0x1dcd,	// (0x0003d802) popup_vitu2_query_window_t6

0x1df8,	// (0x0003d82d) popup_vitu2_query_window_t7_ParamLimits

0x1df8,	// (0x0003d82d) popup_vitu2_query_window_t7

0xef07,	// (0x0004a93c) cam4_grid_pane_g1

0xef10,	// (0x0004a945) cam4_grid_pane_g2

0x0538,	// (0x0003bf6d) cam4_grid_pane_g3

0x0541,	// (0x0003bf76) cam4_grid_pane_g4

0x0003,

0xfe3b,	// (0x0004b870) cam4_grid_pane_g

0x34de,	// (0x0003ef13) aid_placing_vt_slider_lsc_ParamLimits

0x381e,	// (0x0003f253) vidtel_button_pane_ParamLimits

0x381e,	// (0x0003f253) vidtel_button_pane

0xa79e,	// (0x000461d3) bg_button_pane_cp034

0x054c,	// (0x0003bf81) vidtel_button_pane_g1

0x0554,	// (0x0003bf89) vidtel_button_pane_t1

0xddc8,	// (0x000497fd) aid_size_vtel_slider_touch

0xe007,	// (0x00049a3c) scroll_pane_cp039

0x8636,	// (0x0004406b) ncim_query_button_pane_cp01_ParamLimits

0x8655,	// (0x0004408a) ncimui_query_pane_g1_ParamLimits

0xae75,	// (0x000468aa) input_focus_pane_cp012_ParamLimits

0xe6e6,	// (0x0004a11b) ncim_query_entry_pane_t1_ParamLimits

0xe007,	// (0x00049a3c) scroll_pane_cp039_ParamLimits

0xb9df,	// (0x00047414) navi_pane_bcale_mc_g1

0xb9e7,	// (0x0004741c) navi_pane_bcale_mc_t1

0xec70,	// (0x0004a6a5) main_sp_fs_email_pane_g1

0xec7c,	// (0x0004a6b1) main_sp_fs_email_pane_g2

0x0001,

0xfc3e,	// (0x0004b673) main_sp_fs_email_pane_g

0xef33,	// (0x0004a968) list_single_cale_mrui_row_pane_g3_ParamLimits

0xef33,	// (0x0004a968) list_single_cale_mrui_row_pane_g3

0x258f,	// (0x0003dfc4) list_single_recal_day_pane_g5_event_pane

0x25a5,	// (0x0003dfda) list_single_recal_day_pane_g7

0x056a,	// (0x0003bf9f) list_recal_day_event_pane_cp01

0x0573,	// (0x0003bfa8) list_recal_vselct_arw_lo_pane_cp01

0x057b,	// (0x0003bfb0) list_recal_vselct_arw_up_pane_cp01

0x0583,	// (0x0003bfb8) list_recal_vselct_pane_cp01

0xddd8,	// (0x0004980d) list_recal_day_event_pane_cp01_g1

0x273f,	// (0x0003e174) list_recal_day_event_pane_cp01_t1

0x25ad,	// (0x0003dfe2) list_single_recal_day_pane_t1_ParamLimits

0x25bf,	// (0x0003dff4) list_single_recal_day_pane_t2_ParamLimits

0xfd1e,	// (0x0004b753) list_single_recal_day_pane_t_ParamLimits

0xae53,	// (0x00046888) bg_notes_pane_ParamLimits

0xaf1e,	// (0x00046953) list_notes_pane_ParamLimits

0x2b99,	// (0x0003e5ce) scroll_pane_cp06_ParamLimits

0xaf40,	// (0x00046975) main_notes_pane_ParamLimits

0xae75,	// (0x000468aa) main_welc_pane

0x998f,	// (0x000453c4) main_welc_body_pane_ParamLimits

0x998f,	// (0x000453c4) main_welc_body_pane

0x99a8,	// (0x000453dd) main_welc_opti_pane_ParamLimits

0x99a8,	// (0x000453dd) main_welc_opti_pane

0x9a03,	// (0x00045438) main_welc_pane_t1_ParamLimits

0x9a03,	// (0x00045438) main_welc_pane_t1

0x9b99,	// (0x000455ce) main_welc_body_row_pane_ParamLimits

0x9b99,	// (0x000455ce) main_welc_body_row_pane

0xacc2,	// (0x000466f7) main_welc_opti_row_pane_ParamLimits

0xacc2,	// (0x000466f7) main_welc_opti_row_pane

0x05ab,	// (0x0003bfe0) main_welc_opti_row_pane_g1

0x9bc2,	// (0x000455f7) main_welc_opti_row_pane_t1

0x05b3,	// (0x0003bfe8) main_welc_body_row_pane_t1

0x028e,	// (0x0003bcc3) popup_notif_wgt_heading_pane

0x02a8,	// (0x0003bcdd) aid_size_list_notif_wgt_del_ParamLimits

0x02b5,	// (0x0003bcea) list_notif_wgt_row_pane_g1_ParamLimits

0x02c1,	// (0x0003bcf6) list_notif_wgt_row_pane_g2_ParamLimits

0x02d0,	// (0x0003bd05) list_notif_wgt_row_pane_g3_ParamLimits

0xfd85,	// (0x0004b7ba) list_notif_wgt_row_pane_g_ParamLimits

0x02dd,	// (0x0003bd12) list_notif_wgt_row_pane_t1_ParamLimits

0x02f3,	// (0x0003bd28) list_notif_wgt_row_pane_t2_ParamLimits

0x0305,	// (0x0003bd3a) list_notif_wgt_row_pane_t3_ParamLimits

0xfd8c,	// (0x0004b7c1) list_notif_wgt_row_pane_t_ParamLimits

0x9496,	// (0x00044ecb) listrow_wgtman_pane_g1_ParamLimits

0x94a3,	// (0x00044ed8) listrow_wgtman_pane_g2_ParamLimits

0xfdbc,	// (0x0004b7f1) listrow_wgtman_pane_g_ParamLimits

0x261d,	// (0x0003e052) listrow_wgtman_pane_t1_ParamLimits

0x2635,	// (0x0003e06a) listrow_wgtman_pane_t2_ParamLimits

0xfdc1,	// (0x0004b7f6) listrow_wgtman_pane_t_ParamLimits

0x265b,	// (0x0003e090) wait_bar_pane_cp09_ParamLimits

0xa79e,	// (0x000461d3) bg_popup_heading_pane_cp02

0x05c2,	// (0x0003bff7) popup_notif_wgt_heading_pane_g1

0x05ca,	// (0x0003bfff) popup_notif_wgt_heading_pane_t1

0xa79e,	// (0x000461d3) main_vids_pane

0xa79e,	// (0x000461d3) vids_listscroll_pane

0x9bd1,	// (0x00045606) scroll_pane_cp040

0xa79e,	// (0x000461d3) vids_list_pane

0x9bdc,	// (0x00045611) vids_list_double_pane_ParamLimits

0x9bdc,	// (0x00045611) vids_list_double_pane

0x9bf4,	// (0x00045629) vids_list_double_pane_g1

0x9bfd,	// (0x00045632) vids_list_double_pane_t1

0x9c0d,	// (0x00045642) vids_list_double_pane_t2

0x0001,

0xfe5a,	// (0x0004b88f) vids_list_double_pane_t

0xae75,	// (0x000468aa) main_ncimui_pane_ParamLimits

0x848d,	// (0x00043ec2) main_ncimui_pane_g1_ParamLimits

0x8499,	// (0x00043ece) main_ncimui_pane_g2_ParamLimits

0x8499,	// (0x00043ece) main_ncimui_pane_g2

0x0001,

0xfb3f,	// (0x0004b574) main_ncimui_pane_g_ParamLimits

0xfb3f,	// (0x0004b574) main_ncimui_pane_g

0x99c1,	// (0x000453f6) main_welc_pane_g1_ParamLimits

0x99c1,	// (0x000453f6) main_welc_pane_g1

0x99cd,	// (0x00045402) main_welc_pane_g2_ParamLimits

0x99cd,	// (0x00045402) main_welc_pane_g2

0x0003,

0xfe44,	// (0x0004b879) main_welc_pane_g_ParamLimits

0xfe44,	// (0x0004b879) main_welc_pane_g

0xae53,	// (0x00046888) listscroll_mce_pane_ParamLimits

0xbb34,	// (0x00047569) wait_bar_pane_cp10

0xcec1,	// (0x000488f6) main_cale_day_pane_ParamLimits

0xcec1,	// (0x000488f6) main_cale_week_pane_ParamLimits

0xae53,	// (0x00046888) main_messa_pane_ParamLimits

0x6114,	// (0x00041b49) main_clock2_btn_pane_ParamLimits

0x6114,	// (0x00041b49) main_clock2_btn_pane

0xd6bb,	// (0x000490f0) main_clock2_btn_pane_cp01_ParamLimits

0xd6bb,	// (0x000490f0) main_clock2_btn_pane_cp01

0xeed7,	// (0x0004a90c) list_cale_mrui_pane_ParamLimits

0x033b,	// (0x0003bd70) main_cf0_pane_g2

0x0001,

0xfd93,	// (0x0004b7c8) main_cf0_pane_g

0x9656,	// (0x0004508b) area_left_week_number_pane_ParamLimits

0x9669,	// (0x0004509e) area_top_day_name_pane_ParamLimits

0x9677,	// (0x000450ac) frame_month_view_pane_ParamLimits

0x0454,	// (0x0003be89) grid_month_view_pane_ParamLimits

0x0462,	// (0x0003be97) frm_month_g1_ParamLimits

0x96f5,	// (0x0004512a) frm_month_g2_ParamLimits

0x9706,	// (0x0004513b) frm_month_g3_ParamLimits

0x9717,	// (0x0004514c) frm_month_g4_ParamLimits

0x9728,	// (0x0004515d) frm_month_g5_ParamLimits

0x973b,	// (0x00045170) frm_month_g6_ParamLimits

0x974e,	// (0x00045183) frm_month_g7_ParamLimits

0x046f,	// (0x0003bea4) frm_month_g8_ParamLimits

0x9761,	// (0x00045196) frm_month_g9_ParamLimits

0x976e,	// (0x000451a3) frm_month_g10_ParamLimits

0x977b,	// (0x000451b0) frm_month_g11_ParamLimits

0x9788,	// (0x000451bd) frm_month_g12_ParamLimits

0x9795,	// (0x000451ca) frm_month_g13_ParamLimits

0x97a2,	// (0x000451d7) frm_month_g14_ParamLimits

0x97b1,	// (0x000451e6) frm_month_g15_ParamLimits

0x97c0,	// (0x000451f5) frm_month_g16_ParamLimits

0xfdeb,	// (0x0004b820) frm_month_g_ParamLimits

0x047c,	// (0x0003beb1) cell_top_day_name_pane_t1_ParamLimits

0x97cf,	// (0x00045204) cell_area_left_week_number_pane_g1_ParamLimits

0x97de,	// (0x00045213) cell_area_left_week_number_pane_t1_ParamLimits

0xaece,	// (0x00046903) cell_month_view_pane_g1_ParamLimits

0x97f4,	// (0x00045229) cell_month_view_pane_t1_ParamLimits

0xae4b,	// (0x00046880) main_clock2_btn_pane_g1

0x05d8,	// (0x0003c00d) main_clock2_btn_pane_t1

0xae75,	// (0x000468aa) listscroll_cmail_pane_ParamLimits

0xec70,	// (0x0004a6a5) main_sp_fs_email_pane_g1_ParamLimits

0xec7c,	// (0x0004a6b1) main_sp_fs_email_pane_g2_ParamLimits

0xfc3e,	// (0x0004b673) main_sp_fs_email_pane_g_ParamLimits

0xf012,	// (0x0004aa47) list_recal_day_pane_ParamLimits

0xf023,	// (0x0004aa58) mian_recal_day_pane_t1

0x217e,	// (0x0003dbb3) list_single_dyc_row_text_pane_t4_ParamLimits

0x217e,	// (0x0003dbb3) list_single_dyc_row_text_pane_t4

0x21b5,	// (0x0003dbea) list_single_dyc_row_text_pane_t5_ParamLimits

0x21b5,	// (0x0003dbea) list_single_dyc_row_text_pane_t5

0x222b,	// (0x0003dc60) list_single_dyc_row_text_pane_t6_ParamLimits

0x222b,	// (0x0003dc60) list_single_dyc_row_text_pane_t6

0x4697,	// (0x000400cc) aid_mgn_list_cale_time_pane

0xae75,	// (0x000468aa) main_gallery2_pane_ParamLimits

0xd6d1,	// (0x00049106) main_clock2_pane_cp01_t1

0xd6df,	// (0x00049114) main_clock2_pane_cp01_t3

0x0001,

0xf724,	// (0x0004b159) main_clock2_pane_cp01_t

0x2fee,	// (0x0003ea23) cale_week_scroll_pane_g16_ParamLimits

0x2fee,	// (0x0003ea23) cale_week_scroll_pane_g16

0xb0fb,	// (0x00046b30) vorec_slider_pane

0x0554,	// (0x0003bf89) vidtel_button_pane_t1_ParamLimits

0x90f2,	// (0x00044b27) main_fs_bigclock_clock_pane_g1_ParamLimits

0x90f2,	// (0x00044b27) main_fs_bigclock_clock_pane_g2_ParamLimits

0x90ff,	// (0x00044b34) main_fs_bigclock_clock_pane_g3_ParamLimits

0x90ff,	// (0x00044b34) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd41,	// (0x0004b776) main_fs_bigclock_clock_pane_g_ParamLimits

0x910b,	// (0x00044b40) main_fs_bigclock_clock_pane_t1_ParamLimits

0x911e,	// (0x00044b53) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd4a,	// (0x0004b77f) main_fs_bigclock_clock_pane_t_ParamLimits

0x5ab9,	// (0x000414ee) main_mup3_lyrics_pane_ParamLimits

0x5ab9,	// (0x000414ee) main_mup3_lyrics_pane

0x9c40,	// (0x00045675) main_mup3_lyrics_pane_t1_ParamLimits

0x9c40,	// (0x00045675) main_mup3_lyrics_pane_t1

0x6648,	// (0x0004207d) aid_main_mp4_pane_t1_area

0x6652,	// (0x00042087) aid_main_mp4_pane_t2_area

0x6751,	// (0x00042186) main_mp4_pane_g7_ParamLimits

0x6751,	// (0x00042186) main_mp4_pane_g7

0x675d,	// (0x00042192) main_mp4_pane_g8_ParamLimits

0x675d,	// (0x00042192) main_mp4_pane_g8

0x6b6f,	// (0x000425a4) aid_call6_pane_g1_size

0x992e,	// (0x00045363) list_double_large_graphic_phob2_other_pane_ParamLimits

0x992e,	// (0x00045363) list_double_large_graphic_phob2_other_pane

0xb4a4,	// (0x00046ed9) list_double_large_graphic_phob2_other_pane_g1

0xa79e,	// (0x000461d3) list_highlight_pane_cp026

0xae75,	// (0x000468aa) main_welc_pane_ParamLimits

0x8b8c,	// (0x000445c1) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8b8c,	// (0x000445c1) main_sp_fs_ctrlbar_pane_g3

0x8ba4,	// (0x000445d9) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8ba4,	// (0x000445d9) main_sp_fs_ctrlbar_pane_g4

0x8bd6,	// (0x0004460b) toolbar2_fixed_button_pane_cp01

0x8be1,	// (0x00044616) toolbar2_fixed_button_pane_cp02

0x8bec,	// (0x00044621) toolbar2_fixed_button_pane_cp03

0x997f,	// (0x000453b4) list_welc_entry_pane_ParamLimits

0x997f,	// (0x000453b4) list_welc_entry_pane

0x99db,	// (0x00045410) main_welc_pane_g3_ParamLimits

0x99db,	// (0x00045410) main_welc_pane_g3

0x9a1d,	// (0x00045452) main_welc_pane_t2_ParamLimits

0x9a1d,	// (0x00045452) main_welc_pane_t2

0x9a31,	// (0x00045466) main_welc_pane_t3_ParamLimits

0x9a31,	// (0x00045466) main_welc_pane_t3

0x0005,

0xfe4d,	// (0x0004b882) main_welc_pane_t_ParamLimits

0xfe4d,	// (0x0004b882) main_welc_pane_t

0x9b2d,	// (0x00045562) welc_button_pane_ParamLimits

0x9b2d,	// (0x00045562) welc_button_pane

0x9b8b,	// (0x000455c0) welc_service_logo_pane_ParamLimits

0x9b8b,	// (0x000455c0) welc_service_logo_pane

0x9c76,	// (0x000456ab) list_single_welc_entry_pane_ParamLimits

0x9c76,	// (0x000456ab) list_single_welc_entry_pane

0x9c87,	// (0x000456bc) list_single_welc_entry_pane_g1

0x9c8f,	// (0x000456c4) list_single_welc_entry_pane_t1

0x9c9d,	// (0x000456d2) list_single_welc_entry_pane_t2

0x0001,

0xfe5f,	// (0x0004b894) list_single_welc_entry_pane_t

0xa79e,	// (0x000461d3) bg_button_pane_cp035

0x9cab,	// (0x000456e0) welc_button_pane_t1

0x05e6,	// (0x0003c01b) welc_service_logo_pane_g1

0x05ef,	// (0x0003c024) welc_service_logo_pane_g2

0x0001,

0xfe64,	// (0x0004b899) welc_service_logo_pane_g

0xa79e,	// (0x000461d3) main_int_radio_pane

0xe584,	// (0x00049fb9) list_single_fs_dyc_pane_g1

0x2679,	// (0x0003e0ae) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x2679,	// (0x0003e0ae) list_double_large_graphic_phob2_pane_g3

0x2685,	// (0x0003e0ba) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x2685,	// (0x0003e0ba) list_double_large_graphic_phob2_pane_g4

0x9cb9,	// (0x000456ee) main_int_radio1_pane_ParamLimits

0x9cb9,	// (0x000456ee) main_int_radio1_pane

0x05f8,	// (0x0003c02d) find_pane_cp02

0x9ccb,	// (0x00045700) input_focus_pane_cp12_ParamLimits

0x9ccb,	// (0x00045700) input_focus_pane_cp12

0x9cd7,	// (0x0004570c) input_focus_pane_cp13_ParamLimits

0x9cd7,	// (0x0004570c) input_focus_pane_cp13

0x9cef,	// (0x00045724) input_focus_pane_cp14_ParamLimits

0x9cef,	// (0x00045724) input_focus_pane_cp14

0x0601,	// (0x0003c036) int_radio1_listscroll_pane

0x9d07,	// (0x0004573c) main_int_radio1_pane_g1_ParamLimits

0x9d07,	// (0x0004573c) main_int_radio1_pane_g1

0x9d17,	// (0x0004574c) main_int_radio1_pane_t1_ParamLimits

0x9d17,	// (0x0004574c) main_int_radio1_pane_t1

0x9d2b,	// (0x00045760) main_int_radio1_pane_t2_ParamLimits

0x9d2b,	// (0x00045760) main_int_radio1_pane_t2

0x9d3f,	// (0x00045774) main_int_radio1_pane_t3_ParamLimits

0x9d3f,	// (0x00045774) main_int_radio1_pane_t3

0x9d53,	// (0x00045788) main_int_radio1_pane_t4_ParamLimits

0x9d53,	// (0x00045788) main_int_radio1_pane_t4

0x060b,	// (0x0003c040) main_int_radio1_pane_t5_ParamLimits

0x060b,	// (0x0003c040) main_int_radio1_pane_t5

0x9d6a,	// (0x0004579f) main_int_radio1_pane_t6_ParamLimits

0x9d6a,	// (0x0004579f) main_int_radio1_pane_t6

0x9d7c,	// (0x000457b1) main_int_radio1_pane_t7_ParamLimits

0x9d7c,	// (0x000457b1) main_int_radio1_pane_t7

0x9d8e,	// (0x000457c3) main_int_radio1_pane_t8_ParamLimits

0x9d8e,	// (0x000457c3) main_int_radio1_pane_t8

0x9da2,	// (0x000457d7) main_int_radio1_pane_t9_ParamLimits

0x9da2,	// (0x000457d7) main_int_radio1_pane_t9

0x9db4,	// (0x000457e9) main_int_radio1_pane_t10_ParamLimits

0x9db4,	// (0x000457e9) main_int_radio1_pane_t10

0x9de5,	// (0x0004581a) main_int_radio1_pane_t11_ParamLimits

0x9de5,	// (0x0004581a) main_int_radio1_pane_t11

0x9e16,	// (0x0004584b) main_int_radio1_pane_t12_ParamLimits

0x9e16,	// (0x0004584b) main_int_radio1_pane_t12

0x000b,

0xfe69,	// (0x0004b89e) main_int_radio1_pane_t_ParamLimits

0xfe69,	// (0x0004b89e) main_int_radio1_pane_t

0x061d,	// (0x0003c052) int_radio_list_pane

0x0497,	// (0x0003becc) scroll_pane_cp037

0x0625,	// (0x0003c05a) list_double_large_graphic_int_radio_pane_ParamLimits

0x0625,	// (0x0003c05a) list_double_large_graphic_int_radio_pane

0x063e,	// (0x0003c073) list_double_large_graphic_int_radio_pane_g1

0x274d,	// (0x0003e182) list_double_large_graphic_int_radio_pane_t1

0x275b,	// (0x0003e190) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe82,	// (0x0004b8b7) list_double_large_graphic_int_radio_pane_t

0xa79e,	// (0x000461d3) list_highlight_pane_cp027

0x059b,	// (0x0003bfd0) main_button_pane_4

0x99e7,	// (0x0004541c) main_welc_pane_g4_ParamLimits

0x99e7,	// (0x0004541c) main_welc_pane_g4

0x9a43,	// (0x00045478) main_welc_pane_t4_ParamLimits

0x9a43,	// (0x00045478) main_welc_pane_t4

0x9a55,	// (0x0004548a) main_welc_pane_t5_ParamLimits

0x9a55,	// (0x0004548a) main_welc_pane_t5

0x9a85,	// (0x000454ba) main_welc_pane_t6_ParamLimits

0x9a85,	// (0x000454ba) main_welc_pane_t6

0x9b3b,	// (0x00045570) welc_button_pane_2_ParamLimits

0x9b3b,	// (0x00045570) welc_button_pane_2

0x9b53,	// (0x00045588) welc_button_pane_3_ParamLimits

0x9b53,	// (0x00045588) welc_button_pane_3

0x05a3,	// (0x0003bfd8) welc_button_pane_4

0x9b6d,	// (0x000455a2) welc_button_pane_5_ParamLimits

0x9b6d,	// (0x000455a2) welc_button_pane_5

0x27bd,	// (0x0003e1f2) main_popup_welc_pane

0x0681,	// (0x0003c0b6) main_welc_sk_g3

0x068b,	// (0x0003c0c0) main_welc_sk_g4

0x0695,	// (0x0003c0ca) main_welc_sk_t3

0x06a5,	// (0x0003c0da) main_welc_sk_t4

0x06b5,	// (0x0003c0ea) popup_welc_pane_t4

0x06c3,	// (0x0003c0f8) popup_welc_pane_t5

0x06d1,	// (0x0003c106) popup_welc_pane_t6

0xa79e,	// (0x000461d3) main_acti_pane

0xa79e,	// (0x000461d3) main_sso_pane

0x9e2d,	// (0x00045862) sso_body_pane_ParamLimits

0x9e2d,	// (0x00045862) sso_body_pane

0x9e3b,	// (0x00045870) sso_logo_pane_ParamLimits

0x9e3b,	// (0x00045870) sso_logo_pane

0x9e64,	// (0x00045899) sso_sk_pane_ParamLimits

0x9e64,	// (0x00045899) sso_sk_pane

0xb11d,	// (0x00046b52) main_sso_logo_pane_g1

0x9e71,	// (0x000458a6) sso_sk_pane_t1_ParamLimits

0x9e71,	// (0x000458a6) sso_sk_pane_t1

0x9e85,	// (0x000458ba) sso_sk_pane_t2_ParamLimits

0x9e85,	// (0x000458ba) sso_sk_pane_t2

0x0001,

0xfe87,	// (0x0004b8bc) sso_sk_pane_t_ParamLimits

0xfe87,	// (0x0004b8bc) sso_sk_pane_t

0x070f,	// (0x0003c144) aid_sso_gap

0x0718,	// (0x0003c14d) aid_sso_txt1

0x0722,	// (0x0003c157) aid_sso_txt2

0x072c,	// (0x0003c161) aid_sso_txt3

0x0002,

0xfe8c,	// (0x0004b8c1) aid_sso_txt

0x0736,	// (0x0003c16b) aid_sso_widget

0x9ee4,	// (0x00045919) sso_btn_pane_ParamLimits

0x9ee4,	// (0x00045919) sso_btn_pane

0x9f5d,	// (0x00045992) sso_option_pane_ParamLimits

0x9f5d,	// (0x00045992) sso_option_pane

0x9fd7,	// (0x00045a0c) sso_query_pane_ParamLimits

0x9fd7,	// (0x00045a0c) sso_query_pane

0xa027,	// (0x00045a5c) sso_query_pane_cp01_ParamLimits

0xa027,	// (0x00045a5c) sso_query_pane_cp01

0xa077,	// (0x00045aac) sso_t_hdr_pane_ParamLimits

0xa077,	// (0x00045aac) sso_t_hdr_pane

0xa09b,	// (0x00045ad0) sso_t_nml_pane_ParamLimits

0xa09b,	// (0x00045ad0) sso_t_nml_pane

0x0740,	// (0x0003c175) sso_t_sub_pane

0x9e48,	// (0x0004587d) sso_popup_window_ParamLimits

0x9e48,	// (0x0004587d) sso_popup_window

0x9e97,	// (0x000458cc) sso_apps_pane_ParamLimits

0x9e97,	// (0x000458cc) sso_apps_pane

0x9eba,	// (0x000458ef) sso_body_pane_g1

0x9ec4,	// (0x000458f9) sso_body_pane_t1

0x9ed4,	// (0x00045909) sso_body_pane_t2

0x0001,

0xfe93,	// (0x0004b8c8) sso_body_pane_t

0x9f2f,	// (0x00045964) sso_btn_pane_cp01_ParamLimits

0x9f2f,	// (0x00045964) sso_btn_pane_cp01

0x9fa9,	// (0x000459de) sso_prog_pane_ParamLimits

0x9fa9,	// (0x000459de) sso_prog_pane

0x091a,	// (0x0003c34f) sso_t_hdr_pane_t1_ParamLimits

0x091a,	// (0x0003c34f) sso_t_hdr_pane_t1

0x0755,	// (0x0003c18a) input_focus_pane_cp10_ParamLimits

0x0755,	// (0x0003c18a) input_focus_pane_cp10

0x076f,	// (0x0003c1a4) sso_query_pane_t1_ParamLimits

0x076f,	// (0x0003c1a4) sso_query_pane_t1

0x0782,	// (0x0003c1b7) sso_query_pane_t2_ParamLimits

0x0782,	// (0x0003c1b7) sso_query_pane_t2

0x079d,	// (0x0003c1d2) sso_query_pane_t3_ParamLimits

0x079d,	// (0x0003c1d2) sso_query_pane_t3

0x07c7,	// (0x0003c1fc) sso_query_pane_t4_ParamLimits

0x07c7,	// (0x0003c1fc) sso_query_pane_t4

0x0003,

0xfe98,	// (0x0004b8cd) sso_query_pane_t_ParamLimits

0xfe98,	// (0x0004b8cd) sso_query_pane_t

0xa79e,	// (0x000461d3) bg_button_pane_cp22

0x0672,	// (0x0003c0a7) sso_btn_pane_t1

0xa0eb,	// (0x00045b20) sso_t_nml_pane_t1_ParamLimits

0xa0eb,	// (0x00045b20) sso_t_nml_pane_t1

0x07eb,	// (0x0003c220) sso_option_row_pane_ParamLimits

0x07eb,	// (0x0003c220) sso_option_row_pane

0x07fe,	// (0x0003c233) sso_t_sub_pane_t1_ParamLimits

0x07fe,	// (0x0003c233) sso_t_sub_pane_t1

0xae75,	// (0x000468aa) bg_popup_window_pane_cp11_ParamLimits

0xae75,	// (0x000468aa) bg_popup_window_pane_cp11

0x081b,	// (0x0003c250) popup_sk_window_cp01_ParamLimits

0x081b,	// (0x0003c250) popup_sk_window_cp01

0x0828,	// (0x0003c25d) sso_popup_body_pane_ParamLimits

0x0828,	// (0x0003c25d) sso_popup_body_pane

0x0835,	// (0x0003c26a) scroll_pane_cp21_ParamLimits

0x0835,	// (0x0003c26a) scroll_pane_cp21

0x0842,	// (0x0003c277) sso_popup_body_t_pane_ParamLimits

0x0842,	// (0x0003c277) sso_popup_body_t_pane

0x084f,	// (0x0003c284) sso_popup_body_t_hdr_pane_ParamLimits

0x084f,	// (0x0003c284) sso_popup_body_t_hdr_pane

0x0862,	// (0x0003c297) sso_popup_body_t_nml_pane_ParamLimits

0x0862,	// (0x0003c297) sso_popup_body_t_nml_pane

0x0880,	// (0x0003c2b5) sso_popup_body_t_sub_pane_ParamLimits

0x0880,	// (0x0003c2b5) sso_popup_body_t_sub_pane

0x08a3,	// (0x0003c2d8) sso_popup_body_t_hdr_pane_t1

0xa108,	// (0x00045b3d) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa108,	// (0x00045b3d) sso_popup_body_t_nml_pane_t1

0x08b3,	// (0x0003c2e8) sso_popup_body_t_sub_pane_t1_ParamLimits

0x08b3,	// (0x0003c2e8) sso_popup_body_t_sub_pane_t1

0xb11d,	// (0x00046b52) sso_prog_pane_g1

0xa14c,	// (0x00045b81) sso_apps_pane_comp1_ParamLimits

0xa14c,	// (0x00045b81) sso_apps_pane_comp1

0x08d8,	// (0x0003c30d) sso_apps_pane_comp1_g1

0x08e0,	// (0x0003c315) sso_apps_pane_comp1_t1

0x08fc,	// (0x0003c331) sso_option_row_pane_g1

0x0904,	// (0x0003c339) sso_option_row_pane_t1

0x996d,	// (0x000453a2) bg_welc_area_ParamLimits

0x996d,	// (0x000453a2) bg_welc_area

0x9abb,	// (0x000454f0) sso_t_hdr_pane_a_t1_ParamLimits

0x9abb,	// (0x000454f0) sso_t_hdr_pane_a_t1

0x9acf,	// (0x00045504) sso_t_nml_pane_a_t1_ParamLimits

0x9acf,	// (0x00045504) sso_t_nml_pane_a_t1

0x9af9,	// (0x0004552e) sso_t_sub_pane_a_t1_ParamLimits

0x9af9,	// (0x0004552e) sso_t_sub_pane_a_t1

0x0672,	// (0x0003c0a7) sso_btn_pane_t1_copy1

0xa79e,	// (0x000461d3) welc_button_pane_2_comp1

0x06df,	// (0x0003c114) sso_t_hdr_pane_p_t1

0x06ef,	// (0x0003c124) sso_t_nml_pane_p_t1

0x06ff,	// (0x0003c134) sso_t_sub_pane_p_t1

0xed1d,	// (0x0004a752) list_cmail_pane_ParamLimits

0x9b7d,	// (0x000455b2) welc_button_pane_cp01_ParamLimits

0x9b7d,	// (0x000455b2) welc_button_pane_cp01

0xa79e,	// (0x000461d3) main_att_pane

0x08ee,	// (0x0003c323) input_focus_pane_cp10_t1

0x0904,	// (0x0003c339) sso_option_row_pane_t1_ParamLimits

0xa166,	// (0x00045b9b) main_att_body_pane_ParamLimits

0xa166,	// (0x00045b9b) main_att_body_pane

0xa192,	// (0x00045bc7) att_btn_pane_ParamLimits

0xa192,	// (0x00045bc7) att_btn_pane

0xa1b4,	// (0x00045be9) att_btn_pane_cp01_ParamLimits

0xa1b4,	// (0x00045be9) att_btn_pane_cp01

0xa1ce,	// (0x00045c03) att_li_srv_pane_ParamLimits

0xa1ce,	// (0x00045c03) att_li_srv_pane

0xa1e0,	// (0x00045c15) att_opt_pane_ParamLimits

0xa1e0,	// (0x00045c15) att_opt_pane

0xa224,	// (0x00045c59) att_query_pane_ParamLimits

0xa224,	// (0x00045c59) att_query_pane

0xa268,	// (0x00045c9d) att_query_pane_cp01_ParamLimits

0xa268,	// (0x00045c9d) att_query_pane_cp01

0xa2ac,	// (0x00045ce1) att_t_hdr_pane_ParamLimits

0xa2ac,	// (0x00045ce1) att_t_hdr_pane

0xa2fe,	// (0x00045d33) att_t_nml_pane_ParamLimits

0xa2fe,	// (0x00045d33) att_t_nml_pane

0xa332,	// (0x00045d67) att_t_nml_pane_cp01_ParamLimits

0xa332,	// (0x00045d67) att_t_nml_pane_cp01

0xa356,	// (0x00045d8b) att_t_nmlb_pane_ParamLimits

0xa356,	// (0x00045d8b) att_t_nmlb_pane

0xa370,	// (0x00045da5) att_term_pane_ParamLimits

0xa370,	// (0x00045da5) att_term_pane

0xa3b4,	// (0x00045de9) main_att_body_pane_g1_ParamLimits

0xa3b4,	// (0x00045de9) main_att_body_pane_g1

0x091a,	// (0x0003c34f) att_t_hdr_pane_t1_ParamLimits

0x091a,	// (0x0003c34f) att_t_hdr_pane_t1

0x0933,	// (0x0003c368) att_t_nml_pane_t1_ParamLimits

0x0933,	// (0x0003c368) att_t_nml_pane_t1

0x0958,	// (0x0003c38d) att_btn_pane_t1

0xa79e,	// (0x000461d3) bg_button_pane_cp23

0x0226,	// (0x0003bc5b) att_li_srv_row_pane_ParamLimits

0x0226,	// (0x0003bc5b) att_li_srv_row_pane

0x0968,	// (0x0003c39d) att_t_nmlb_pane_t1_ParamLimits

0x0968,	// (0x0003c39d) att_t_nmlb_pane_t1

0x0981,	// (0x0003c3b6) att_query_pane_t1

0x0990,	// (0x0003c3c5) att_query_pane_t2

0x099f,	// (0x0003c3d4) att_query_pane_t3

0x0002,

0xfea1,	// (0x0004b8d6) att_query_pane_t

0x09ae,	// (0x0003c3e3) input_focus_pane_cp11

0x09b7,	// (0x0003c3ec) att_term_pane_t1_ParamLimits

0x09b7,	// (0x0003c3ec) att_term_pane_t1

0xa79e,	// (0x000461d3) att_opt_row_pane

0x09d4,	// (0x0003c409) att_opt_row_pane_g1

0x09dc,	// (0x0003c411) att_opt_row_pane_t1_ParamLimits

0x09dc,	// (0x0003c411) att_opt_row_pane_t1

0xa3e8,	// (0x00045e1d) att_li_srv_row_pane_g1

0xa3f0,	// (0x00045e25) att_li_srv_row_pane_t1

0xa405,	// (0x00045e3a) att_li_srv_row_pane_t2

0x0001,

0xfea8,	// (0x0004b8dd) att_li_srv_row_pane_t

0xa79e,	// (0x000461d3) main_call7_pane

0xa79e,	// (0x000461d3) main_vod_pane

0x0740,	// (0x0003c175) sso_t_sub_pane_ParamLimits

0xa17a,	// (0x00045baf) att_btn_emg_pane_ParamLimits

0xa17a,	// (0x00045baf) att_btn_emg_pane

0xa3f0,	// (0x00045e25) att_li_srv_row_pane_t1_ParamLimits

0xa405,	// (0x00045e3a) att_li_srv_row_pane_t2_ParamLimits

0xfea8,	// (0x0004b8dd) att_li_srv_row_pane_t_ParamLimits

0x09f5,	// (0x0003c42a) att_btn_close_pane_g1

0xa79e,	// (0x000461d3) bg_button_pane_cp24

0x54d7,	// (0x00040f0c) main_vod_body_pane_ParamLimits

0x54d7,	// (0x00040f0c) main_vod_body_pane

0xa41a,	// (0x00045e4f) main_vod_body_pane_g1_ParamLimits

0xa41a,	// (0x00045e4f) main_vod_body_pane_g1

0xa44a,	// (0x00045e7f) scroll_pane_cp24_ParamLimits

0xa44a,	// (0x00045e7f) scroll_pane_cp24

0xa492,	// (0x00045ec7) vod_btn_pane_ParamLimits

0xa492,	// (0x00045ec7) vod_btn_pane

0xa4d2,	// (0x00045f07) vod_det_pane_ParamLimits

0xa4d2,	// (0x00045f07) vod_det_pane

0xa4fc,	// (0x00045f31) vod_logo_g1_ParamLimits

0xa4fc,	// (0x00045f31) vod_logo_g1

0xa536,	// (0x00045f6b) vod_opt_pane_ParamLimits

0xa536,	// (0x00045f6b) vod_opt_pane

0xa566,	// (0x00045f9b) vod_opt_pane_cp01_ParamLimits

0xa566,	// (0x00045f9b) vod_opt_pane_cp01

0xa58e,	// (0x00045fc3) vod_query_pane_ParamLimits

0xa58e,	// (0x00045fc3) vod_query_pane

0xa5b8,	// (0x00045fed) vod_query_pane_cp01_ParamLimits

0xa5b8,	// (0x00045fed) vod_query_pane_cp01

0xa5c4,	// (0x00045ff9) vod_t_nml_pane_ParamLimits

0xa5c4,	// (0x00045ff9) vod_t_nml_pane

0xa666,	// (0x0004609b) vod_t_nml_pane_cp01_ParamLimits

0xa666,	// (0x0004609b) vod_t_nml_pane_cp01

0xa69e,	// (0x000460d3) vod_t_sub_pane_ParamLimits

0xa69e,	// (0x000460d3) vod_t_sub_pane

0xa6cc,	// (0x00046101) vod_t_sub_pane_cp01_ParamLimits

0xa6cc,	// (0x00046101) vod_t_sub_pane_cp01

0x09ae,	// (0x0003c3e3) vod_query_field_pane

0x0981,	// (0x0003c3b6) vod_query_pane_t1

0xa79e,	// (0x000461d3) bg_button_pane_cp25

0x09fd,	// (0x0003c432) sso_btn_pane_t1_copy2

0xa6f4,	// (0x00046129) vod_t_nml_pane_t1_ParamLimits

0xa6f4,	// (0x00046129) vod_t_nml_pane_t1

0x0a0d,	// (0x0003c442) vod_opt_row_pane_ParamLimits

0x0a0d,	// (0x0003c442) vod_opt_row_pane

0x0a1f,	// (0x0003c454) vod_t_sub_pane_t1_ParamLimits

0x0a1f,	// (0x0003c454) vod_t_sub_pane_t1

0xa729,	// (0x0004615e) vod_det_cell_pane_ParamLimits

0xa729,	// (0x0004615e) vod_det_cell_pane

0xa79e,	// (0x000461d3) input_focus_pane_cp15

0x0a38,	// (0x0003c46d) vod_query_field_pane_t1

0x0a46,	// (0x0003c47b) vod_opt_row_pane_g1_ParamLimits

0x0a46,	// (0x0003c47b) vod_opt_row_pane_g1

0x0a52,	// (0x0003c487) vod_opt_row_pane_t1_ParamLimits

0x0a52,	// (0x0003c487) vod_opt_row_pane_t1

0x0a77,	// (0x0003c4ac) vod_det_cell_field_pane

0x0a80,	// (0x0003c4b5) vod_det_cell_pane_g1

0x0981,	// (0x0003c3b6) vod_det_cell_pane_t1

0xa79e,	// (0x000461d3) input_focus_pane_cp16

0x0a38,	// (0x0003c46d) vod_det_cell_field_pane_t1

0x9380,	// (0x00044db5) call7_btn_grp_pane_ParamLimits

0x9380,	// (0x00044db5) call7_btn_grp_pane

0xa73b,	// (0x00046170) call7_bubble_pane_ParamLimits

0xa73b,	// (0x00046170) call7_bubble_pane

0x93bb,	// (0x00044df0) cell_call7_btn_pane_ParamLimits

0x93bb,	// (0x00044df0) cell_call7_btn_pane

0xa749,	// (0x0004617e) call7_pane_g1_ParamLimits

0xa749,	// (0x0004617e) call7_pane_g1

0xa758,	// (0x0004618d) call7_windows_conf_pane_ParamLimits

0xa758,	// (0x0004618d) call7_windows_conf_pane

0xa774,	// (0x000461a9) popup_call7_1st_window_ParamLimits

0xa774,	// (0x000461a9) popup_call7_1st_window

0xa782,	// (0x000461b7) popup_call7_2nd_window_ParamLimits

0xa782,	// (0x000461b7) popup_call7_2nd_window

0xa790,	// (0x000461c5) popup_call7_3rd_window_ParamLimits

0xa790,	// (0x000461c5) popup_call7_3rd_window

0xa79e,	// (0x000461d3) bg_button_pane_cp26

0x03eb,	// (0x0003be20) cell_call7_btn_pane_g1

0x0663,	// (0x0003c098) cell_call7_btn_pane_t1

0xa79e,	// (0x000461d3) bg_popup_window_pane_cp12

0x0a88,	// (0x0003c4bd) popup_call7_1st_window_g1

0x0a90,	// (0x0003c4c5) popup_call7_1st_window_g2

0x0a98,	// (0x0003c4cd) popup_call7_1st_window_g3

0x0002,

0xfead,	// (0x0004b8e2) popup_call7_1st_window_g

0x0aa0,	// (0x0003c4d5) popup_call7_1st_window_t1

0x0aaf,	// (0x0003c4e4) popup_call7_1st_window_t2

0x0abd,	// (0x0003c4f2) popup_call7_1st_window_t3

0x0002,

0xfeb4,	// (0x0004b8e9) popup_call7_1st_window_t

0xa79e,	// (0x000461d3) bg_popup_window_pane_cp13

0x0acb,	// (0x0003c500) popup_call7_2nd_window_g1

0x0ad3,	// (0x0003c508) popup_call7_2nd_window_g2

0x0adb,	// (0x0003c510) popup_call7_2nd_window_g3

0x0002,

0xfebb,	// (0x0004b8f0) popup_call7_2nd_window_g

0x0ae3,	// (0x0003c518) popup_call7_2nd_window_t1

0xa79e,	// (0x000461d3) bg_popup_window_pane_cp14

0x0af2,	// (0x0003c527) call7_list_conf_pane

0x0afa,	// (0x0003c52f) call7_list_conf_row_pane_ParamLimits

0x0afa,	// (0x0003c52f) call7_list_conf_row_pane

0x0b0d,	// (0x0003c542) call7_list_conf_row_pane_g1

0x0b15,	// (0x0003c54a) call7_list_conf_row_pane_g2

0x0001,

0xfec2,	// (0x0004b8f7) call7_list_conf_row_pane_g

0x0b1d,	// (0x0003c552) call7_list_conf_row_pane_t1

0xa79e,	// (0x000461d3) list_highlight_pane_cp22
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
