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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006af8c };

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
0x046d,	// (0x0006b3f9) Screen

0x0479,	// (0x0006b405) application_window

0x04b5,	// (0x0006b441) area_bottom_pane_ParamLimits

0x04b5,	// (0x0006b441) area_bottom_pane

0x04ee,	// (0x0006b47a) area_top_pane_ParamLimits

0x04ee,	// (0x0006b47a) area_top_pane

0x941e,	// (0x000743aa) call_video_uplink_pane_ParamLimits

0x941e,	// (0x000743aa) call_video_uplink_pane

0x057c,	// (0x0006b508) main_pane_ParamLimits

0x057c,	// (0x0006b508) main_pane

0xc8db,	// (0x00077867) context_pane

0x387e,	// (0x0006e80a) navi_pane

0x38b0,	// (0x0006e83c) popup_cale_events_window_ParamLimits

0x38b0,	// (0x0006e83c) popup_cale_events_window

0xc8ee,	// (0x0007787a) popup_mup_playback_window

0x38c8,	// (0x0006e854) signal_pane

0xa84c,	// (0x000757d8) main_browser_pane

0xaa41,	// (0x000759cd) main_burst_pane

0x35d4,	// (0x0006e560) main_calc_pane

0xc8c1,	// (0x0007784d) main_cale_day_pane

0x35e8,	// (0x0006e574) main_cale_month_pane

0xc8c1,	// (0x0007784d) main_cale_week_pane

0xaa41,	// (0x000759cd) main_call_pane

0xa520,	// (0x000754ac) main_call_poc_pane

0xaa41,	// (0x000759cd) main_camera_pane

0xaa41,	// (0x000759cd) main_chi_dic_pane

0xb224,	// (0x000761b0) main_clock_pane

0xa520,	// (0x000754ac) main_fmradio_pane

0xaa41,	// (0x000759cd) main_graph_messa_pane

0xa520,	// (0x000754ac) main_help_pane

0xa84c,	// (0x000757d8) main_im_pane

0xa77b,	// (0x00075707) main_image_pane_ParamLimits

0xa77b,	// (0x00075707) main_image_pane

0xa520,	// (0x000754ac) main_location2_pane

0xaa41,	// (0x000759cd) main_location_pane

0xa77b,	// (0x00075707) main_messa_pane

0xa520,	// (0x000754ac) main_mp2_pane

0xaa41,	// (0x000759cd) main_mp_pane

0xa520,	// (0x000754ac) main_msg_pane

0xa520,	// (0x000754ac) main_mup_eq_pane

0xa520,	// (0x000754ac) main_mup_pane

0xa84c,	// (0x000757d8) main_notes_pane

0xa520,	// (0x000754ac) main_pec_pane

0xa520,	// (0x000754ac) main_phob_pane

0xa520,	// (0x000754ac) main_pinb_pane

0xa520,	// (0x000754ac) main_postcard_pane

0xa520,	// (0x000754ac) main_qdial_pane

0xaa41,	// (0x000759cd) main_skin_pane

0xa520,	// (0x000754ac) main_smil2_pane

0xaa41,	// (0x000759cd) main_smil_pane

0xaa41,	// (0x000759cd) main_video_pane

0xaa41,	// (0x000759cd) main_video_tele_pane

0xa77b,	// (0x00075707) main_viewer_pane_ParamLimits

0xa77b,	// (0x00075707) main_viewer_pane

0xaa41,	// (0x000759cd) main_vorec_pane

0x363a,	// (0x0006e5c6) popup_blid_sat_info_window_ParamLimits

0x363a,	// (0x0006e5c6) popup_blid_sat_info_window

0x3692,	// (0x0006e61e) popup_dyc_status_message_window_ParamLimits

0x3692,	// (0x0006e61e) popup_dyc_status_message_window

0x36aa,	// (0x0006e636) popup_grid_large_graphic_window_ParamLimits

0x36aa,	// (0x0006e636) popup_grid_large_graphic_window

0x375a,	// (0x0006e6e6) popup_loc_request_window_ParamLimits

0x375a,	// (0x0006e6e6) popup_loc_request_window

0x3856,	// (0x0006e7e2) popup_wml_address_window_ParamLimits

0x3856,	// (0x0006e7e2) popup_wml_address_window

0x340e,	// (0x0006e39a) call_muted_g1

0x30c2,	// (0x0006e04e) popup_call_audio_conf_window_ParamLimits

0x30c2,	// (0x0006e04e) popup_call_audio_conf_window

0x3422,	// (0x0006e3ae) popup_call_audio_first_window_ParamLimits

0x3422,	// (0x0006e3ae) popup_call_audio_first_window

0x3498,	// (0x0006e424) popup_call_audio_in_window_ParamLimits

0x3498,	// (0x0006e424) popup_call_audio_in_window

0x34d4,	// (0x0006e460) popup_call_audio_out_window_ParamLimits

0x34d4,	// (0x0006e460) popup_call_audio_out_window

0x350e,	// (0x0006e49a) popup_call_audio_second_window_ParamLimits

0x350e,	// (0x0006e49a) popup_call_audio_second_window

0x3564,	// (0x0006e4f0) popup_call_audio_wait_window_ParamLimits

0x3564,	// (0x0006e4f0) popup_call_audio_wait_window

0x3599,	// (0x0006e525) popup_number_entry_window_ParamLimits

0x3599,	// (0x0006e525) popup_number_entry_window

0x9454,	// (0x000743e0) bg_popup_call_pane_cp05_ParamLimits

0x9454,	// (0x000743e0) bg_popup_call_pane_cp05

0x9474,	// (0x00074400) popup_number_entry_window_t1

0x9487,	// (0x00074413) popup_number_entry_window_t2

0x9499,	// (0x00074425) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0007a056) popup_number_entry_window_t

0x94ab,	// (0x00074437) text_title_cp2

0x94be,	// (0x0007444a) bg_popup_call_pane_cp_ParamLimits

0x94be,	// (0x0007444a) bg_popup_call_pane_cp

0x9bdc,	// (0x00074b68) call_thumbnail_pane

0x9be4,	// (0x00074b70) popup_call_audio_in_window_g1_ParamLimits

0x9be4,	// (0x00074b70) popup_call_audio_in_window_g1

0x9bf0,	// (0x00074b7c) popup_call_audio_in_window_g2_ParamLimits

0x9bf0,	// (0x00074b7c) popup_call_audio_in_window_g2

0x9bfc,	// (0x00074b88) popup_call_audio_in_window_g3_ParamLimits

0x9bfc,	// (0x00074b88) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0007a05f) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0007a05f) popup_call_audio_in_window_g

0x9c08,	// (0x00074b94) popup_call_audio_in_window_t1_ParamLimits

0x9c08,	// (0x00074b94) popup_call_audio_in_window_t1

0x9c24,	// (0x00074bb0) popup_call_audio_in_window_t2_ParamLimits

0x9c24,	// (0x00074bb0) popup_call_audio_in_window_t2

0x9c40,	// (0x00074bcc) popup_call_audio_in_window_t3_ParamLimits

0x9c40,	// (0x00074bcc) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0007a066) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0007a066) popup_call_audio_in_window_t

0x94be,	// (0x0007444a) bg_popup_call_pane_cp01_ParamLimits

0x94be,	// (0x0007444a) bg_popup_call_pane_cp01

0x9bdc,	// (0x00074b68) call_thumbnail_pane_cp02

0x9c53,	// (0x00074bdf) call_type_pane_cp022

0x9c5b,	// (0x00074be7) popup_call_audio_out_window_g1_ParamLimits

0x9c5b,	// (0x00074be7) popup_call_audio_out_window_g1

0x9c6d,	// (0x00074bf9) popup_call_audio_out_window_g2_ParamLimits

0x9c6d,	// (0x00074bf9) popup_call_audio_out_window_g2

0x9c79,	// (0x00074c05) popup_call_audio_out_window_g3_ParamLimits

0x9c79,	// (0x00074c05) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0007a06d) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0007a06d) popup_call_audio_out_window_g

0x9c8b,	// (0x00074c17) popup_call_audio_out_window_t1_ParamLimits

0x9c8b,	// (0x00074c17) popup_call_audio_out_window_t1

0x9ca3,	// (0x00074c2f) popup_call_audio_out_window_t2_ParamLimits

0x9ca3,	// (0x00074c2f) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0007a074) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0007a074) popup_call_audio_out_window_t

0x9cb8,	// (0x00074c44) bg_popup_call_pane_ParamLimits

0x9cb8,	// (0x00074c44) bg_popup_call_pane

0x0739,	// (0x0006b6c5) call_thumbnail_pane_cp_ParamLimits

0x0739,	// (0x0006b6c5) call_thumbnail_pane_cp

0x9d3c,	// (0x00074cc8) call_type_pane_cp01_ParamLimits

0x9d3c,	// (0x00074cc8) call_type_pane_cp01

0x9d80,	// (0x00074d0c) popup_call_audio_first_window_g1_ParamLimits

0x9d80,	// (0x00074d0c) popup_call_audio_first_window_g1

0x9dcc,	// (0x00074d58) popup_call_audio_first_window_g2_ParamLimits

0x9dcc,	// (0x00074d58) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0007a079) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0007a079) popup_call_audio_first_window_g

0x9e10,	// (0x00074d9c) popup_call_audio_first_window_t1_ParamLimits

0x9e10,	// (0x00074d9c) popup_call_audio_first_window_t1

0xa465,	// (0x000753f1) popup_call_audio_first_window_t4_ParamLimits

0xa465,	// (0x000753f1) popup_call_audio_first_window_t4

0xa4f1,	// (0x0007547d) popup_call_audio_first_window_t5_ParamLimits

0xa4f1,	// (0x0007547d) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0007a07e) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0007a07e) popup_call_audio_first_window_t

0xa520,	// (0x000754ac) bg_popup_call_pane_cp02

0xa52a,	// (0x000754b6) call_type_pane_cp023

0xa532,	// (0x000754be) popup_call_audio_wait_window_g1

0xa53a,	// (0x000754c6) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007a085) popup_call_audio_wait_window_g

0xa542,	// (0x000754ce) popup_call_audio_wait_window_t3

0xa550,	// (0x000754dc) bg_popup_call_pane_cp03_ParamLimits

0xa550,	// (0x000754dc) bg_popup_call_pane_cp03

0xa5b0,	// (0x0007553c) call_thumbnail_pane_cp011_ParamLimits

0xa5b0,	// (0x0007553c) call_thumbnail_pane_cp011

0xa5bc,	// (0x00075548) call_type_pane_cp034_ParamLimits

0xa5bc,	// (0x00075548) call_type_pane_cp034

0xa5f8,	// (0x00075584) popup_call_audio_second_window_g1_ParamLimits

0xa5f8,	// (0x00075584) popup_call_audio_second_window_g1

0xa634,	// (0x000755c0) popup_call_audio_second_window_g2_ParamLimits

0xa634,	// (0x000755c0) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0007a08a) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0007a08a) popup_call_audio_second_window_g

0xa670,	// (0x000755fc) popup_call_audio_second_window_t1_ParamLimits

0xa670,	// (0x000755fc) popup_call_audio_second_window_t1

0xa6f1,	// (0x0007567d) popup_call_audio_second_window_t2_ParamLimits

0xa6f1,	// (0x0007567d) popup_call_audio_second_window_t2

0xa727,	// (0x000756b3) popup_call_audio_second_window_t3_ParamLimits

0xa727,	// (0x000756b3) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0007a08f) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0007a08f) popup_call_audio_second_window_t

0xa520,	// (0x000754ac) bg_popup_call_pane_cp04

0xa75d,	// (0x000756e9) list_conf_pane

0xa765,	// (0x000756f1) popup_call_audio_conf_window_t1

0xa773,	// (0x000756ff) call_thumbnail_pane_g1

0xa77b,	// (0x00075707) bg_pinb_pane_ParamLimits

0xa77b,	// (0x00075707) bg_pinb_pane

0xa789,	// (0x00075715) find_pinb_pane

0xa792,	// (0x0007571e) listscroll_pinb_pane_ParamLimits

0xa792,	// (0x0007571e) listscroll_pinb_pane

0xa7a1,	// (0x0007572d) pinb_bg_pane_g1

0x075d,	// (0x0006b6e9) pinb_bg_pane_g2

0x0769,	// (0x0006b6f5) pinb_bg_pane_g3

0x0775,	// (0x0006b701) pinb_bg_pane_g4

0x0781,	// (0x0006b70d) pinb_bg_pane_g5

0x078d,	// (0x0006b719) pinb_bg_pane_g6

0x0798,	// (0x0006b724) pinb_bg_pane_g7

0x07a3,	// (0x0006b72f) pinb_bg_pane_g8

0x07ae,	// (0x0006b73a) pinb_bg_pane_g9

0x07b8,	// (0x0006b744) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0007a096) pinb_bg_pane_g

0x07d5,	// (0x0006b761) grid_pinb_pane

0x07de,	// (0x0006b76a) list_pinb_pane

0x07e7,	// (0x0006b773) scroll_pane_cp01_ParamLimits

0x07e7,	// (0x0006b773) scroll_pane_cp01

0xa7ab,	// (0x00075737) find_pinb_pane_g1_ParamLimits

0xa7ab,	// (0x00075737) find_pinb_pane_g1

0xa7c3,	// (0x0007574f) find_pinb_pane_t1

0xa7d5,	// (0x00075761) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0007a0b0) find_pinb_pane_t

0xa7ea,	// (0x00075776) input_focus_pane_cp01_ParamLimits

0xa7ea,	// (0x00075776) input_focus_pane_cp01

0x07f9,	// (0x0006b785) cell_pinb_pane_ParamLimits

0x07f9,	// (0x0006b785) cell_pinb_pane

0x0824,	// (0x0006b7b0) cell_pinb_pane_g1_ParamLimits

0x0824,	// (0x0006b7b0) cell_pinb_pane_g1

0xa7f6,	// (0x00075782) cell_pinb_pane_g2_ParamLimits

0xa7f6,	// (0x00075782) cell_pinb_pane_g2

0xa802,	// (0x0007578e) cell_pinb_pane_g3_ParamLimits

0xa802,	// (0x0007578e) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0007a0b5) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0007a0b5) cell_pinb_pane_g

0xa520,	// (0x000754ac) grid_highlight_pane_cp01

0x0837,	// (0x0006b7c3) list_pinb_item_pane_ParamLimits

0x0837,	// (0x0006b7c3) list_pinb_item_pane

0xa520,	// (0x000754ac) list_highlight_pane_cp02

0x084a,	// (0x0006b7d6) list_pinb_item_pane_g1_ParamLimits

0x084a,	// (0x0006b7d6) list_pinb_item_pane_g1

0x0857,	// (0x0006b7e3) list_pinb_item_pane_g2_ParamLimits

0x0857,	// (0x0006b7e3) list_pinb_item_pane_g2

0x0863,	// (0x0006b7ef) list_pinb_item_pane_g3_ParamLimits

0x0863,	// (0x0006b7ef) list_pinb_item_pane_g3

0x0874,	// (0x0006b800) list_pinb_item_pane_g4_ParamLimits

0x0874,	// (0x0006b800) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0007a0bc) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0007a0bc) list_pinb_item_pane_g

0x0880,	// (0x0006b80c) list_pinb_item_pane_t1_ParamLimits

0x0880,	// (0x0006b80c) list_pinb_item_pane_t1

0x08b5,	// (0x0006b841) calc_display_pane

0x08dd,	// (0x0006b869) calc_paper_pane

0x0900,	// (0x0006b88c) grid_calc_pane

0xa520,	// (0x000754ac) bg_list_pane_cp01

0x092e,	// (0x0006b8ba) clock_g1

0x0936,	// (0x0006b8c2) clock_g2

0x0001,

0xf139,	// (0x0007a0c5) clock_g

0x093e,	// (0x0006b8ca) clock_t1_ParamLimits

0x093e,	// (0x0006b8ca) clock_t1

0x0953,	// (0x0006b8df) clock_t2_ParamLimits

0x0953,	// (0x0006b8df) clock_t2

0x0965,	// (0x0006b8f1) clock_t3_ParamLimits

0x0965,	// (0x0006b8f1) clock_t3

0x0977,	// (0x0006b903) clock_t4_ParamLimits

0x0977,	// (0x0006b903) clock_t4

0x0989,	// (0x0006b915) clock_t5_ParamLimits

0x0989,	// (0x0006b915) clock_t5

0x099e,	// (0x0006b92a) clock_t6_ParamLimits

0x099e,	// (0x0006b92a) clock_t6

0x09b0,	// (0x0006b93c) clock_t7_ParamLimits

0x09b0,	// (0x0006b93c) clock_t7

0x09c2,	// (0x0006b94e) clock_t8_ParamLimits

0x09c2,	// (0x0006b94e) clock_t8

0x09d6,	// (0x0006b962) clock_t9_ParamLimits

0x09d6,	// (0x0006b962) clock_t9

0x0008,

0xf13e,	// (0x0007a0ca) clock_t_ParamLimits

0xf13e,	// (0x0007a0ca) clock_t

0xa80e,	// (0x0007579a) popup_clock_analogue_window_cp02

0xa80e,	// (0x0007579a) popup_clock_digital_window_cp01

0xa816,	// (0x000757a2) listscroll_help_pane

0xa520,	// (0x000754ac) phob_pre_status_pane

0xa820,	// (0x000757ac) grid_qdial_pane

0xa77b,	// (0x00075707) listscroll_mce_pane

0xa77b,	// (0x00075707) bg_notes_pane

0xa82a,	// (0x000757b6) list_notes_pane

0x09ea,	// (0x0006b976) scroll_pane_cp06

0xa838,	// (0x000757c4) bg_calc_paper_pane

0x94d4,	// (0x00074460) list_calc_pane

0xa84c,	// (0x000757d8) bg_calc_display_pane

0x09fe,	// (0x0006b98a) calc_display_pane_t1

0x0a10,	// (0x0006b99c) calc_display_pane_t2

0x94ee,	// (0x0007447a) calc_display_pane_t3

0x0002,

0xf151,	// (0x0007a0dd) calc_display_pane_t

0x0a22,	// (0x0006b9ae) cell_calc_pane_ParamLimits

0x0a22,	// (0x0006b9ae) cell_calc_pane

0xa858,	// (0x000757e4) bg_calc_paper_pane_g1

0xa864,	// (0x000757f0) bg_calc_paper_pane_g2

0xa870,	// (0x000757fc) bg_calc_paper_pane_g3

0xa87c,	// (0x00075808) bg_calc_paper_pane_g4

0xa888,	// (0x00075814) bg_calc_paper_pane_g5

0x0a59,	// (0x0006b9e5) bg_calc_paper_pane_g6

0x0a68,	// (0x0006b9f4) bg_calc_paper_pane_g7

0x0a77,	// (0x0006ba03) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0007a0e4) bg_calc_paper_pane_g

0x0a8a,	// (0x0006ba16) calc_bg_paper_pane_g9

0x0a9d,	// (0x0006ba29) list_calc_item_pane_ParamLimits

0x0a9d,	// (0x0006ba29) list_calc_item_pane

0xa894,	// (0x00075820) list_calc_item_pane_g1

0x9500,	// (0x0007448c) list_calc_item_pane_t1_ParamLimits

0x9500,	// (0x0007448c) list_calc_item_pane_t1

0x0ab6,	// (0x0006ba42) list_calc_item_pane_t2_ParamLimits

0x0ab6,	// (0x0006ba42) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0007a0f5) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0007a0f5) list_calc_item_pane_t

0xa8a1,	// (0x0007582d) cell_calc_pane_g1

0xa8ab,	// (0x00075837) grid_highlight_pane_cp02

0xa8cd,	// (0x00075859) bg_calc_display_pane_g1

0x9512,	// (0x0007449e) bg_calc_display_pane_g2

0xa8d6,	// (0x00075862) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0007a0ff) bg_calc_display_pane_g

0x0ae8,	// (0x0006ba74) cell_qdial_pane_ParamLimits

0x0ae8,	// (0x0006ba74) cell_qdial_pane

0x0afc,	// (0x0006ba88) cell_qdial_pane_g1_ParamLimits

0x0afc,	// (0x0006ba88) cell_qdial_pane_g1

0x0b12,	// (0x0006ba9e) cell_qdial_pane_g2_ParamLimits

0x0b12,	// (0x0006ba9e) cell_qdial_pane_g2

0xa8df,	// (0x0007586b) cell_qdial_pane_g3_ParamLimits

0xa8df,	// (0x0007586b) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0007a106) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0007a106) cell_qdial_pane_g

0x0b38,	// (0x0006bac4) cell_qdial_pane_t1_ParamLimits

0x0b38,	// (0x0006bac4) cell_qdial_pane_t1

0x0b50,	// (0x0006badc) cell_qdial_pane_t2_ParamLimits

0x0b50,	// (0x0006badc) cell_qdial_pane_t2

0x0b63,	// (0x0006baef) cell_qdial_pane_t3_ParamLimits

0x0b63,	// (0x0006baef) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0007a10f) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0007a10f) cell_qdial_pane_t

0xa520,	// (0x000754ac) grid_highlight_pane_cp04

0xa8eb,	// (0x00075877) thumbnail_qdial_pane_ParamLimits

0xa8eb,	// (0x00075877) thumbnail_qdial_pane

0xa947,	// (0x000758d3) list_help_pane

0xa950,	// (0x000758dc) scroll_pane_cp02

0xa959,	// (0x000758e5) help_list_pane_t1_ParamLimits

0xa959,	// (0x000758e5) help_list_pane_t1

0x951c,	// (0x000744a8) bg_notes_pane_g2

0x9524,	// (0x000744b0) bg_notes_pane_g3

0x952c,	// (0x000744b8) notes_bg_pane_g1

0x9534,	// (0x000744c0) notes_bg_pane_g4

0x953c,	// (0x000744c8) notes_bg_pane_g5

0x9544,	// (0x000744d0) notes_bg_pane_g6

0x954c,	// (0x000744d8) notes_bg_pane_g7

0x9554,	// (0x000744e0) notes_bg_pane_g8

0x955c,	// (0x000744e8) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0007a12d) notes_bg_pane_g

0x0b76,	// (0x0006bb02) list_notes_text_pane_ParamLimits

0x0b76,	// (0x0006bb02) list_notes_text_pane

0xa977,	// (0x00075903) list_notes_text_pane_g1

0x0b8c,	// (0x0006bb18) list_notes_text_pane_t1

0x0b9a,	// (0x0006bb26) listscroll_cale_week_pane

0x0bc6,	// (0x0006bb52) bg_cale_heading_pane

0xa99a,	// (0x00075926) bg_cale_pane_cp01

0x0bde,	// (0x0006bb6a) cale_week_corner_pane

0x0bfd,	// (0x0006bb89) cale_week_day_heading_pane

0x0c1a,	// (0x0006bba6) cale_week_scroll_pane_g1

0x0c2d,	// (0x0006bbb9) cale_week_scroll_pane_g2

0x0c45,	// (0x0006bbd1) cale_week_scroll_pane_g3

0x0c5d,	// (0x0006bbe9) cale_week_scroll_pane_g4

0x0c75,	// (0x0006bc01) cale_week_scroll_pane_g5

0x0c95,	// (0x0006bc21) cale_week_scroll_pane_g6

0x0cb5,	// (0x0006bc41) cale_week_scroll_pane_g7

0x0cd5,	// (0x0006bc61) cale_week_scroll_pane_g8

0x0cf9,	// (0x0006bc85) cale_week_scroll_pane_g9

0x0d11,	// (0x0006bc9d) cale_week_scroll_pane_g10

0x0d29,	// (0x0006bcb5) cale_week_scroll_pane_g11

0x0d41,	// (0x0006bccd) cale_week_scroll_pane_g12

0x0d59,	// (0x0006bce5) cale_week_scroll_pane_g13

0x0d59,	// (0x0006bce5) cale_week_scroll_pane_g14

0x0d59,	// (0x0006bce5) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0007a13c) cale_week_scroll_pane_g

0x0d95,	// (0x0006bd21) cale_week_time_pane

0x0db9,	// (0x0006bd45) grid_cale_week_pane

0xa9c9,	// (0x00075955) scroll_pane_cp08

0x0ddf,	// (0x0006bd6b) cell_cale_week_pane_ParamLimits

0x0ddf,	// (0x0006bd6b) cell_cale_week_pane

0x0e6d,	// (0x0006bdf9) cale_week_day_heading_pane_t1

0x0e97,	// (0x0006be23) cale_week_day_heading_pane_t2

0x0ec6,	// (0x0006be52) cale_week_day_heading_pane_t3

0x0ef5,	// (0x0006be81) cale_week_day_heading_pane_t4

0x0f24,	// (0x0006beb0) cale_week_day_heading_pane_t5

0x0f5b,	// (0x0006bee7) cale_week_day_heading_pane_t6

0x0f92,	// (0x0006bf1e) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0007a15d) cale_week_day_heading_pane_t

0xa9e6,	// (0x00075972) bg_cale_side_pane

0x0fbc,	// (0x0006bf48) cale_week_time_pane_t1

0x0fd6,	// (0x0006bf62) cale_week_time_pane_t2

0x0ff0,	// (0x0006bf7c) cale_week_time_pane_t3

0x100a,	// (0x0006bf96) cale_week_time_pane_t4

0x1024,	// (0x0006bfb0) cale_week_time_pane_t5

0x103e,	// (0x0006bfca) cale_week_time_pane_t6

0x1058,	// (0x0006bfe4) cale_week_time_pane_t7

0x1072,	// (0x0006bffe) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0007a16c) cale_week_time_pane_t

0x1092,	// (0x0006c01e) cell_cale_week_pane_g2

0x10b6,	// (0x0006c042) cell_cale_week_pane_g3_ParamLimits

0x10b6,	// (0x0006c042) cell_cale_week_pane_g3

0xa9f4,	// (0x00075980) grid_highlight_pane_cp07

0xa9fc,	// (0x00075988) listscroll_gms_pane

0xaa06,	// (0x00075992) grid_gms_pane

0xaa0f,	// (0x0007599b) listscroll_gms_pane_g1

0xaa17,	// (0x000759a3) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0007a17d) listscroll_gms_pane_g

0x10ce,	// (0x0006c05a) scroll_pane_cp010

0x10d9,	// (0x0006c065) cell_gms_pane_ParamLimits

0x10d9,	// (0x0006c065) cell_gms_pane

0x10eb,	// (0x0006c077) cell_gms_pane_g1

0xaa1f,	// (0x000759ab) cell_gms_pane_g2

0xaa27,	// (0x000759b3) cell_gms_pane_g3

0xaa30,	// (0x000759bc) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0007a182) cell_gms_pane_g

0xaa39,	// (0x000759c5) grid_highlight_pane_cp09

0x33b8,	// (0x0006e344) phob_pre_status_pane_g1

0x33c0,	// (0x0006e34c) phob_pre_status_pane_g2

0x33c8,	// (0x0006e354) phob_pre_status_pane_g3

0x33d0,	// (0x0006e35c) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0007a580) phob_pre_status_pane_g

0x33e0,	// (0x0006e36c) phob_pre_status_pane_t1

0x33ee,	// (0x0006e37a) phob_pre_status_pane_t2

0x33fe,	// (0x0006e38a) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0007a58b) phob_pre_status_pane_t

0xaa41,	// (0x000759cd) bg_list_pane_cp05

0x10fb,	// (0x0006c087) grid_vorec_pane

0x1103,	// (0x0006c08f) vorec_t1

0x1111,	// (0x0006c09d) vorec_t2

0x111f,	// (0x0006c0ab) vorec_t3

0x112d,	// (0x0006c0b9) vorec_t4

0x939e,	// (0x0007432a) vorec_t5

0x93ac,	// (0x00074338) vorec_t6

0x0004,

0xf1ff,	// (0x0007a18b) vorec_t

0x93ba,	// (0x00074346) wait_bar_pane_cp01

0x1149,	// (0x0006c0d5) cell_vorec_pane_ParamLimits

0x1149,	// (0x0006c0d5) cell_vorec_pane

0x9564,	// (0x000744f0) cell_vorec_pane_g1

0xa520,	// (0x000754ac) grid_highlight_pane_cp05

0x1174,	// (0x0006c100) cams_zoom_pane

0x1183,	// (0x0006c10f) image_vga_pane

0x119d,	// (0x0006c129) main_camera_pane_g1

0x11af,	// (0x0006c13b) main_camera_pane_g2

0x11bf,	// (0x0006c14b) main_camera_pane_g3

0x11cf,	// (0x0006c15b) main_camera_pane_g4

0x11df,	// (0x0006c16b) main_camera_pane_g5

0x11ef,	// (0x0006c17b) main_camera_pane_g6

0x11ff,	// (0x0006c18b) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007a196) main_camera_pane_g

0x120f,	// (0x0006c19b) main_camera_pane_t1

0x1225,	// (0x0006c1b1) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007a1a7) main_camera_pane_t

0x125f,	// (0x0006c1eb) cams_zoom_pane_cp_ParamLimits

0x125f,	// (0x0006c1eb) cams_zoom_pane_cp

0x1287,	// (0x0006c213) image_cif_pane_ParamLimits

0x1287,	// (0x0006c213) image_cif_pane

0x12c2,	// (0x0006c24e) image_subqcif_pane

0x12ca,	// (0x0006c256) main_video_pane_g1_ParamLimits

0x12ca,	// (0x0006c256) main_video_pane_g1

0x12ee,	// (0x0006c27a) main_video_pane_g2_ParamLimits

0x12ee,	// (0x0006c27a) main_video_pane_g2

0x1322,	// (0x0006c2ae) main_video_pane_g3_ParamLimits

0x1322,	// (0x0006c2ae) main_video_pane_g3

0x1350,	// (0x0006c2dc) main_video_pane_g4_ParamLimits

0x1350,	// (0x0006c2dc) main_video_pane_g4

0x137e,	// (0x0006c30a) main_video_pane_g5_ParamLimits

0x137e,	// (0x0006c30a) main_video_pane_g5

0xaa55,	// (0x000759e1) main_video_pane_g6_ParamLimits

0xaa55,	// (0x000759e1) main_video_pane_g6

0x0006,

0xf220,	// (0x0007a1ac) main_video_pane_g_ParamLimits

0xf220,	// (0x0007a1ac) main_video_pane_g

0x13a7,	// (0x0006c333) main_video_pane_t1_ParamLimits

0x13a7,	// (0x0006c333) main_video_pane_t1

0xaa6f,	// (0x000759fb) cams_zoom_pane_g1

0xaa78,	// (0x00075a04) cams_zoom_pane_g2

0xaa81,	// (0x00075a0d) cams_zoom_pane_g3

0xaa8a,	// (0x00075a16) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007a1bb) cams_zoom_pane_g

0x1404,	// (0x0006c390) grid_cams_pane

0x141e,	// (0x0006c3aa) linegrid_cams_pane

0x1431,	// (0x0006c3bd) cell_cams_pane_ParamLimits

0x1431,	// (0x0006c3bd) cell_cams_pane

0xaa93,	// (0x00075a1f) cams_burst_image_pane

0xaa9b,	// (0x00075a27) cell_cams_pane_g1

0xa520,	// (0x000754ac) grid_highlight_pane_cp03

0xa8a1,	// (0x0007582d) mp_bg_pane_g1

0xa520,	// (0x000754ac) bg_list_pane_cp03

0xc7e6,	// (0x00077772) bg_mp_pane

0xc7ee,	// (0x0007777a) grid_mp_pane

0xc7f6,	// (0x00077782) media_player_g1

0xc7fe,	// (0x0007778a) media_player_t1

0xc80c,	// (0x00077798) media_player_t2

0xc81a,	// (0x000777a6) media_player_t3

0xc828,	// (0x000777b4) media_player_t4

0xc836,	// (0x000777c2) media_player_t5

0xc844,	// (0x000777d0) media_player_t6

0xc852,	// (0x000777de) media_player_t7

0x0006,

0xf5de,	// (0x0007a56a) media_player_t

0xc860,	// (0x000777ec) wait_bar_pane_cp02

0xf5c3,	// (0x0007a54f) main_usb_pane_t

0x33af,	// (0x0006e33b) cell_mp_pane

0xa8a1,	// (0x0007582d) cell_mp_pane_g1

0xa520,	// (0x000754ac) grid_highlight_pane_cp06

0xaaa3,	// (0x00075a2f) grid_skin_colour_pane

0xaaab,	// (0x00075a37) list_highlight_pane_cp03

0x1567,	// (0x0006c4f3) skin_g1

0xaab3,	// (0x00075a3f) skin_t1

0xaac2,	// (0x00075a4e) skin_t2

0x0001,

0xf264,	// (0x0007a1f0) skin_t

0x156f,	// (0x0006c4fb) cell_skin_colour_pane_ParamLimits

0x156f,	// (0x0006c4fb) cell_skin_colour_pane

0xaad0,	// (0x00075a5c) cell_skin_colour_pane_g1

0x15e8,	// (0x0006c574) call_video_g1_ParamLimits

0x15e8,	// (0x0006c574) call_video_g1

0x1604,	// (0x0006c590) call_video_g2_ParamLimits

0x1604,	// (0x0006c590) call_video_g2

0x0001,

0xf269,	// (0x0007a1f5) call_video_g_ParamLimits

0xf269,	// (0x0007a1f5) call_video_g

0x1656,	// (0x0006c5e2) call_video_uplink_pane_cp1_ParamLimits

0x1656,	// (0x0006c5e2) call_video_uplink_pane_cp1

0xaae2,	// (0x00075a6e) call_video_uplink_pane_cp2

0x16f5,	// (0x0006c681) video_down_crop_pane_ParamLimits

0x16f5,	// (0x0006c681) video_down_crop_pane

0x17de,	// (0x0006c76a) video_down_pane_ParamLimits

0x17de,	// (0x0006c76a) video_down_pane

0xaaea,	// (0x00075a76) video_down_subqcif_pane_ParamLimits

0xaaea,	// (0x00075a76) video_down_subqcif_pane

0xab02,	// (0x00075a8e) video_down_subqcif_pane_cp_ParamLimits

0xab02,	// (0x00075a8e) video_down_subqcif_pane_cp

0xab28,	// (0x00075ab4) im_reading_pane_ParamLimits

0xab28,	// (0x00075ab4) im_reading_pane

0x18ec,	// (0x0006c878) im_writing_pane_ParamLimits

0x18ec,	// (0x0006c878) im_writing_pane

0x1902,	// (0x0006c88e) im_reading_pane_t1

0xab42,	// (0x00075ace) list_im_pane

0xab53,	// (0x00075adf) scroll_pane_cp07

0x193c,	// (0x0006c8c8) im_writing_pane_t1_ParamLimits

0x193c,	// (0x0006c8c8) im_writing_pane_t1

0xab6c,	// (0x00075af8) im_writing_pane_t2_ParamLimits

0xab6c,	// (0x00075af8) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007a1ff) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007a1ff) im_writing_pane_t

0xa520,	// (0x000754ac) input_focus_pane_cp04

0xa520,	// (0x000754ac) input_focus_pane_cp05

0x1951,	// (0x0006c8dd) list_im_single_pane_ParamLimits

0x1951,	// (0x0006c8dd) list_im_single_pane

0x1966,	// (0x0006c8f2) list_single_im_pane_t1

0x336f,	// (0x0006e2fb) blid_accuracy_pane

0x3377,	// (0x0006e303) blid_compass_pane

0x3381,	// (0x0006e30d) main_location_t1

0x3391,	// (0x0006e31d) main_location_t2

0x33a1,	// (0x0006e32d) main_location_t3

0x0002,

0xf5ed,	// (0x0007a579) main_location_t

0xa520,	// (0x000754ac) aid_levels_location

0xa8a1,	// (0x0007582d) blid_accuracy_pane_g1

0xa8a1,	// (0x0007582d) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007a261) blid_accuracy_pane_g

0xabb4,	// (0x00075b40) wml_content_pane

0xabf2,	// (0x00075b7e) wml_button_pane_ParamLimits

0xabf2,	// (0x00075b7e) wml_button_pane

0x1975,	// (0x0006c901) wml_list_single_large_pane_ParamLimits

0x1975,	// (0x0006c901) wml_list_single_large_pane

0x198a,	// (0x0006c916) wml_list_single_medium_pane_ParamLimits

0x198a,	// (0x0006c916) wml_list_single_medium_pane

0x19a1,	// (0x0006c92d) wml_list_single_small_pane_ParamLimits

0x19a1,	// (0x0006c92d) wml_list_single_small_pane

0xac06,	// (0x00075b92) wml_selection_box_pane_ParamLimits

0xac06,	// (0x00075b92) wml_selection_box_pane

0xac19,	// (0x00075ba5) wml_list_single_pane_t1

0xac28,	// (0x00075bb4) wml_list_single_medium_pane_t1

0xac37,	// (0x00075bc3) wml_list_single_large_pane_t1

0xac46,	// (0x00075bd2) input_focus_pane_cp02_ParamLimits

0xac46,	// (0x00075bd2) input_focus_pane_cp02

0xac59,	// (0x00075be5) wml_selection_box_pane_g1

0xac62,	// (0x00075bee) wml_selection_box_pane_t1_ParamLimits

0xac62,	// (0x00075bee) wml_selection_box_pane_t1

0xa77b,	// (0x00075707) bg_wml_button_pane_ParamLimits

0xa77b,	// (0x00075707) bg_wml_button_pane

0xac7a,	// (0x00075c06) wml_button_pane_g1

0xac82,	// (0x00075c0e) wml_button_pane_t1

0xac7a,	// (0x00075c06) wml_button_bg_pane_g1

0xac92,	// (0x00075c1e) wml_button_bg_pane_g2

0xac9a,	// (0x00075c26) wml_button_bg_pane_g3

0xaca2,	// (0x00075c2e) wml_button_bg_pane_g4

0xacaa,	// (0x00075c36) wml_button_bg_pane_g5

0xacb2,	// (0x00075c3e) wml_button_bg_pane_g6

0xacba,	// (0x00075c46) wml_button_bg_pane_g7

0xacc2,	// (0x00075c4e) wml_button_bg_pane_g8

0xacca,	// (0x00075c56) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007a204) wml_button_bg_pane_g

0x19ba,	// (0x0006c946) bg_list_pane_cp02

0xacd2,	// (0x00075c5e) mce_header_pane_ParamLimits

0xacd2,	// (0x00075c5e) mce_header_pane

0xace8,	// (0x00075c74) mce_icon_pane

0xace8,	// (0x00075c74) mce_image_pane

0xacf1,	// (0x00075c7d) mce_text_pane_ParamLimits

0xacf1,	// (0x00075c7d) mce_text_pane

0x19c2,	// (0x0006c94e) scroll_pane_cp03

0xabea,	// (0x00075b76) scroll_pane_cp04

0xad04,	// (0x00075c90) scroll_pane_cp05_ParamLimits

0xad04,	// (0x00075c90) scroll_pane_cp05

0x19cc,	// (0x0006c958) mce_header_field_pane_ParamLimits

0x19cc,	// (0x0006c958) mce_header_field_pane

0x19e3,	// (0x0006c96f) mce_header_field_pane_2_ParamLimits

0x19e3,	// (0x0006c96f) mce_header_field_pane_2

0x19f9,	// (0x0006c985) mce_header_field_pane_3

0x1a01,	// (0x0006c98d) list_single_mce_message_pane_ParamLimits

0x1a01,	// (0x0006c98d) list_single_mce_message_pane

0x1a17,	// (0x0006c9a3) list_single_mce_smart_pane_ParamLimits

0x1a17,	// (0x0006c9a3) list_single_mce_smart_pane

0xad10,	// (0x00075c9c) input_focus_pane_cp03

0xad19,	// (0x00075ca5) list_header_data_pane

0x1a38,	// (0x0006c9c4) mce_header_field_pane_t1

0x1a48,	// (0x0006c9d4) list_single_mce_header_pane_ParamLimits

0x1a48,	// (0x0006c9d4) list_single_mce_header_pane

0xad21,	// (0x00075cad) list_single_mce_header_pane_t1

0xad30,	// (0x00075cbc) list_single_mce_message_pane_g1

0xad38,	// (0x00075cc4) list_single_mce_message_pane_t1

0x1a82,	// (0x0006ca0e) bg_cale_heading_pane_cp01_ParamLimits

0x1a82,	// (0x0006ca0e) bg_cale_heading_pane_cp01

0xad46,	// (0x00075cd2) bg_cale_pane_cp02_ParamLimits

0xad46,	// (0x00075cd2) bg_cale_pane_cp02

0x1abc,	// (0x0006ca48) cale_month_corner_pane

0x1adb,	// (0x0006ca67) cale_month_day_heading_pane_ParamLimits

0x1adb,	// (0x0006ca67) cale_month_day_heading_pane

0x1b2d,	// (0x0006cab9) cale_month_pane_g1_ParamLimits

0x1b2d,	// (0x0006cab9) cale_month_pane_g1

0x1b5c,	// (0x0006cae8) cale_month_pane_g2_ParamLimits

0x1b5c,	// (0x0006cae8) cale_month_pane_g2

0x1b8c,	// (0x0006cb18) cale_month_pane_g3_ParamLimits

0x1b8c,	// (0x0006cb18) cale_month_pane_g3

0x1bc8,	// (0x0006cb54) cale_month_pane_g4_ParamLimits

0x1bc8,	// (0x0006cb54) cale_month_pane_g4

0x1c04,	// (0x0006cb90) cale_month_pane_g5_ParamLimits

0x1c04,	// (0x0006cb90) cale_month_pane_g5

0x1c4c,	// (0x0006cbd8) cale_month_pane_g6_ParamLimits

0x1c4c,	// (0x0006cbd8) cale_month_pane_g6

0x1c98,	// (0x0006cc24) cale_month_pane_g7_ParamLimits

0x1c98,	// (0x0006cc24) cale_month_pane_g7

0x1ce8,	// (0x0006cc74) cale_month_pane_g8_ParamLimits

0x1ce8,	// (0x0006cc74) cale_month_pane_g8

0x1d3c,	// (0x0006ccc8) cale_month_pane_g9_ParamLimits

0x1d3c,	// (0x0006ccc8) cale_month_pane_g9

0x1d8e,	// (0x0006cd1a) cale_month_pane_g10_ParamLimits

0x1d8e,	// (0x0006cd1a) cale_month_pane_g10

0x1de0,	// (0x0006cd6c) cale_month_pane_g11_ParamLimits

0x1de0,	// (0x0006cd6c) cale_month_pane_g11

0x1e32,	// (0x0006cdbe) cale_month_pane_g12_ParamLimits

0x1e32,	// (0x0006cdbe) cale_month_pane_g12

0x1e84,	// (0x0006ce10) cale_month_pane_g13_ParamLimits

0x1e84,	// (0x0006ce10) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007a217) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007a217) cale_month_pane_g

0x1ed6,	// (0x0006ce62) cale_month_week_pane

0x1efa,	// (0x0006ce86) grid_cale_month_pane_ParamLimits

0x1efa,	// (0x0006ce86) grid_cale_month_pane

0x1f43,	// (0x0006cecf) cale_month_day_heading_pane_t1

0x1f85,	// (0x0006cf11) cale_month_day_heading_pane_t2

0x1fba,	// (0x0006cf46) cale_month_day_heading_pane_t3

0x1fef,	// (0x0006cf7b) cale_month_day_heading_pane_t4

0x202c,	// (0x0006cfb8) cale_month_day_heading_pane_t5

0x2071,	// (0x0006cffd) cale_month_day_heading_pane_t6

0x20b6,	// (0x0006d042) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007a232) cale_month_day_heading_pane_t

0xa9e6,	// (0x00075972) bg_cale_side_pane_cp01

0x2103,	// (0x0006d08f) cale_month_week_pane_t1

0x211c,	// (0x0006d0a8) cale_month_week_pane_t2

0x2135,	// (0x0006d0c1) cale_month_week_pane_t3

0x214e,	// (0x0006d0da) cale_month_week_pane_t4

0x2167,	// (0x0006d0f3) cale_month_week_pane_t5

0x2180,	// (0x0006d10c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007a241) cale_month_week_pane_t

0x2199,	// (0x0006d125) cell_cale_month_pane_ParamLimits

0x2199,	// (0x0006d125) cell_cale_month_pane

0x956e,	// (0x000744fa) cell_cale_month_pane_g1

0x22f1,	// (0x0006d27d) cell_cale_month_pane_t1_ParamLimits

0x22f1,	// (0x0006d27d) cell_cale_month_pane_t1

0xa9f4,	// (0x00075980) grid_highlight_pane_cp08

0xa8a1,	// (0x0007582d) main_smil_g1

0x231d,	// (0x0006d2a9) smil_status_pane

0xad85,	// (0x00075d11) smil_text_pane

0xc6c6,	// (0x00077652) bg_popup_call3_rect_pane_g8

0xc6ce,	// (0x0007765a) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007a4fa) bg_popup_call3_rect_pane_g

0xc955,	// (0x000778e1) smil_status_volume_pane_g1

0xad8f,	// (0x00075d1b) smil_status_pane_t1

0x96b4,	// (0x00074640) volume_smil_pane

0xada6,	// (0x00075d32) list_smil_text_pane

0x2332,	// (0x0006d2be) scroll_pane_cp011

0x233d,	// (0x0006d2c9) smil_text_list_pane_t1_ParamLimits

0x233d,	// (0x0006d2c9) smil_text_list_pane_t1

0x957a,	// (0x00074506) aid_volume_smil_ParamLimits

0x957a,	// (0x00074506) aid_volume_smil

0xa8a1,	// (0x0007582d) smil_volume_pane_g1

0xa8a1,	// (0x0007582d) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007a261) smil_volume_pane_g

0x0b9a,	// (0x0006bb26) listscroll_cale_day_pane

0xadb0,	// (0x00075d3c) bg_cale_pane

0xadc8,	// (0x00075d54) list_cale_pane

0xadeb,	// (0x00075d77) scroll_pane_cp09

0xadfc,	// (0x00075d88) cale_bg_pane_g1

0xae04,	// (0x00075d90) cale_bg_pane_g2

0xae0c,	// (0x00075d98) cale_bg_pane_g3

0xae14,	// (0x00075da0) cale_bg_pane_g4

0xae1c,	// (0x00075da8) cale_bg_pane_g5

0xae24,	// (0x00075db0) cale_bg_pane_g6

0xae2c,	// (0x00075db8) cale_bg_pane_g7

0xae34,	// (0x00075dc0) cale_bg_pane_g8

0xae3c,	// (0x00075dc8) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007a266) cale_bg_pane_g

0x2389,	// (0x0006d315) list_cale_time_pane_ParamLimits

0x2389,	// (0x0006d315) list_cale_time_pane

0xae44,	// (0x00075dd0) list_cale_time_pane_g1_ParamLimits

0xae44,	// (0x00075dd0) list_cale_time_pane_g1

0xae50,	// (0x00075ddc) list_cale_time_pane_g2_ParamLimits

0xae50,	// (0x00075ddc) list_cale_time_pane_g2

0x239f,	// (0x0006d32b) list_cale_time_pane_g3_ParamLimits

0x239f,	// (0x0006d32b) list_cale_time_pane_g3

0x23ad,	// (0x0006d339) list_cale_time_pane_g4_ParamLimits

0x23ad,	// (0x0006d339) list_cale_time_pane_g4

0x23bb,	// (0x0006d347) list_cale_time_pane_g5_ParamLimits

0x23bb,	// (0x0006d347) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007a279) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007a279) list_cale_time_pane_g

0xae6a,	// (0x00075df6) list_cale_time_pane_t1_ParamLimits

0xae6a,	// (0x00075df6) list_cale_time_pane_t1

0xae92,	// (0x00075e1e) list_cale_time_pane_t2_ParamLimits

0xae92,	// (0x00075e1e) list_cale_time_pane_t2

0x273d,	// (0x0006d6c9) aid_blid_cardinal_pane

0x277b,	// (0x0006d707) compass_pane_t4

0xaeba,	// (0x00075e46) list_cale_time_pane_t4_ParamLimits

0xaeba,	// (0x00075e46) list_cale_time_pane_t4

0x2789,	// (0x0006d715) compass_pane_t5

0x2797,	// (0x0006d723) compass_pane_t6

0x27a5,	// (0x0006d731) compass_pane_t7

0xb33e,	// (0x000762ca) navi_pane_cc_t1

0xb51b,	// (0x000764a7) aid_phob_thumbnail_center_pane

0x2d85,	// (0x0006dd11) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007a286) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007a286) list_cale_time_pane_t

0x94be,	// (0x0007444a) bg_popup_window_pane_cp02_ParamLimits

0x94be,	// (0x0007444a) bg_popup_window_pane_cp02

0xaee2,	// (0x00075e6e) heading_pane_cp01_ParamLimits

0xaee2,	// (0x00075e6e) heading_pane_cp01

0xaeee,	// (0x00075e7a) loc_req_pane_ParamLimits

0xaeee,	// (0x00075e7a) loc_req_pane

0xaefe,	// (0x00075e8a) loc_type_pane_ParamLimits

0xaefe,	// (0x00075e8a) loc_type_pane

0xaf10,	// (0x00075e9c) loc_type_pane_t1_ParamLimits

0xaf10,	// (0x00075e9c) loc_type_pane_t1

0xaf22,	// (0x00075eae) loc_type_pane_t2_ParamLimits

0xaf22,	// (0x00075eae) loc_type_pane_t2

0xaf34,	// (0x00075ec0) loc_type_pane_t3_ParamLimits

0xaf34,	// (0x00075ec0) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007a28d) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007a28d) loc_type_pane_t

0xaf46,	// (0x00075ed2) list_loc_req_pane

0xaf50,	// (0x00075edc) scroll_pane_cp012

0x23c9,	// (0x0006d355) list_single_loc_request_popup_menu_pane_ParamLimits

0x23c9,	// (0x0006d355) list_single_loc_request_popup_menu_pane

0xaf5b,	// (0x00075ee7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf5b,	// (0x00075ee7) list_single_loc_request_popup_menu_pane_g1

0xaf67,	// (0x00075ef3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf67,	// (0x00075ef3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007a294) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007a294) list_single_loc_request_popup_menu_pane_g

0xaf73,	// (0x00075eff) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf73,	// (0x00075eff) list_single_loc_request_popup_menu_pane_t1

0xa77b,	// (0x00075707) bg_popup_window_pane_cp03_ParamLimits

0xa77b,	// (0x00075707) bg_popup_window_pane_cp03

0xaf89,	// (0x00075f15) heading_loc_req_pane_ParamLimits

0xaf89,	// (0x00075f15) heading_loc_req_pane

0x23d6,	// (0x0006d362) popup_dyc_status_message_window_g1_ParamLimits

0x23d6,	// (0x0006d362) popup_dyc_status_message_window_g1

0x23ea,	// (0x0006d376) popup_dyc_status_message_window_t1_ParamLimits

0x23ea,	// (0x0006d376) popup_dyc_status_message_window_t1

0x23ff,	// (0x0006d38b) popup_dyc_status_message_window_t2_ParamLimits

0x23ff,	// (0x0006d38b) popup_dyc_status_message_window_t2

0x2414,	// (0x0006d3a0) popup_dyc_status_message_window_t3_ParamLimits

0x2414,	// (0x0006d3a0) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007a299) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007a299) popup_dyc_status_message_window_t

0xa520,	// (0x000754ac) bg_heading_pane_cp01

0xaf95,	// (0x00075f21) heading_loc_req_pane_g1

0xaf9d,	// (0x00075f29) heading_loc_req_pane_g2

0xafa5,	// (0x00075f31) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007a2a0) heading_loc_req_pane_g

0xafad,	// (0x00075f39) heading_loc_req_pane_t1

0xafbc,	// (0x00075f48) bg_popup_sub_pane_cp01_ParamLimits

0xafbc,	// (0x00075f48) bg_popup_sub_pane_cp01

0xafca,	// (0x00075f56) popup_cale_events_window_g1_ParamLimits

0xafca,	// (0x00075f56) popup_cale_events_window_g1

0xafea,	// (0x00075f76) popup_cale_events_window_g2_ParamLimits

0xafea,	// (0x00075f76) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007a2d4) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007a2d4) popup_cale_events_window_g

0xb00a,	// (0x00075f96) popup_cale_events_window_t1_ParamLimits

0xb00a,	// (0x00075f96) popup_cale_events_window_t1

0xb01c,	// (0x00075fa8) popup_cale_events_window_t2_ParamLimits

0xb01c,	// (0x00075fa8) popup_cale_events_window_t2

0xb05a,	// (0x00075fe6) popup_cale_events_window_t3_ParamLimits

0xb05a,	// (0x00075fe6) popup_cale_events_window_t3

0xb094,	// (0x00076020) popup_cale_events_window_t4_ParamLimits

0xb094,	// (0x00076020) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007a2d9) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007a2d9) popup_cale_events_window_t

0x250d,	// (0x0006d499) call_type_pane

0x251d,	// (0x0006d4a9) popup_call_status_window_g1

0x2531,	// (0x0006d4bd) popup_call_status_window_g2

0x2545,	// (0x0006d4d1) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007a2e2) popup_call_status_window_g

0xb0ca,	// (0x00076056) call_type_pane_g1

0xb0d3,	// (0x0007605f) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007a2e9) call_type_pane_g

0xa520,	// (0x000754ac) bg_popup_sub_pane_cp02

0xb0dc,	// (0x00076068) listscroll_popup_wml_pane

0xb0e4,	// (0x00076070) list_wml_pane

0xb0ee,	// (0x0007607a) scroll_pane_cp013

0xb0f9,	// (0x00076085) list_single_graphic_popup_wml_pane_ParamLimits

0xb0f9,	// (0x00076085) list_single_graphic_popup_wml_pane

0xa8a1,	// (0x0007582d) list_single_graphic_popup_wml_pane_g1

0xb10d,	// (0x00076099) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007a2ee) list_single_graphic_popup_wml_pane_g

0xb115,	// (0x000760a1) list_single_graphic_popup_wml_pane_t1

0xb12b,	// (0x000760b7) aid_call_pane

0xa773,	// (0x000756ff) popup_clock_analogue_window_g1

0xa773,	// (0x000756ff) popup_clock_analogue_window_g2

0x959c,	// (0x00074528) popup_clock_analogue_window_g3

0x959c,	// (0x00074528) popup_clock_analogue_window_g4

0xa8a1,	// (0x0007582d) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007a2f3) popup_clock_analogue_window_g

0x95a4,	// (0x00074530) popup_clock_analogue_window_t1

0x95b2,	// (0x0007453e) clock_digital_number_pane_ParamLimits

0x95b2,	// (0x0007453e) clock_digital_number_pane

0x95be,	// (0x0007454a) clock_digital_number_pane_cp02_ParamLimits

0x95be,	// (0x0007454a) clock_digital_number_pane_cp02

0x95ca,	// (0x00074556) clock_digital_number_pane_cp03_ParamLimits

0x95ca,	// (0x00074556) clock_digital_number_pane_cp03

0x95d6,	// (0x00074562) clock_digital_number_pane_cp04_ParamLimits

0x95d6,	// (0x00074562) clock_digital_number_pane_cp04

0x95e2,	// (0x0007456e) clock_digital_separator_pane_ParamLimits

0x95e2,	// (0x0007456e) clock_digital_separator_pane

0x95ee,	// (0x0007457a) popup_clock_digital_window_t1

0xa8a1,	// (0x0007582d) clock_digital_number_pane_g1

0xa8a1,	// (0x0007582d) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007a261) clock_digital_number_pane_g

0xa8a1,	// (0x0007582d) clock_digital_separator_pane_g1

0xa8a1,	// (0x0007582d) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007a261) clock_digital_separator_pane_g

0xa520,	// (0x000754ac) bg_popup_window_pane_cp04

0xb133,	// (0x000760bf) heading_pane_cp03

0xb13b,	// (0x000760c7) listscroll_popup_gms_pane

0xb143,	// (0x000760cf) grid_large_graphic_popup_pane

0xb14d,	// (0x000760d9) listscroll_popup_gms_pane_g1

0xb155,	// (0x000760e1) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007a2fe) listscroll_popup_gms_pane_g

0xabea,	// (0x00075b76) scroll_pane_cp014

0x2554,	// (0x0006d4e0) cell_large_graphic_popup_pane_ParamLimits

0x2554,	// (0x0006d4e0) cell_large_graphic_popup_pane

0x256c,	// (0x0006d4f8) cell_large_graphic_popup_pane_g1_ParamLimits

0x256c,	// (0x0006d4f8) cell_large_graphic_popup_pane_g1

0xb15d,	// (0x000760e9) cell_large_graphic_popup_pane_g2_ParamLimits

0xb15d,	// (0x000760e9) cell_large_graphic_popup_pane_g2

0xb169,	// (0x000760f5) cell_large_graphic_popup_pane_g3_ParamLimits

0xb169,	// (0x000760f5) cell_large_graphic_popup_pane_g3

0xb176,	// (0x00076102) cell_large_graphic_popup_pane_g4_ParamLimits

0xb176,	// (0x00076102) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007a303) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007a303) cell_large_graphic_popup_pane_g

0xb186,	// (0x00076112) grid_highlight_pane_cp010

0xa8a1,	// (0x0007582d) bg_popup_call_pane_g1

0xb190,	// (0x0007611c) list_single_graphic_popup_conf_pane_ParamLimits

0xb190,	// (0x0007611c) list_single_graphic_popup_conf_pane

0xb1a3,	// (0x0007612f) list_highlight_pane_cp01

0xb1ac,	// (0x00076138) list_single_graphic_popup_conf_pane_g1

0xb1b4,	// (0x00076140) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007a30c) list_single_graphic_popup_conf_pane_g

0xb1bc,	// (0x00076148) list_single_graphic_popup_conf_pane_t1

0xb1ca,	// (0x00076156) linegrid_cams_pane_g1

0x2578,	// (0x0006d504) linegrid_cams_pane_g2

0xaa27,	// (0x000759b3) linegrid_cams_pane_g3

0xb1d3,	// (0x0007615f) linegrid_cams_pane_g4

0x2581,	// (0x0006d50d) linegrid_cams_pane_g5

0x258a,	// (0x0006d516) linegrid_cams_pane_g6

0xaa30,	// (0x000759bc) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007a311) linegrid_cams_pane_g

0xb1dc,	// (0x00076168) popup_clock_analogue_window

0xb1dc,	// (0x00076168) popup_clock_digital_window

0xa520,	// (0x000754ac) popup_phob_thumbnail_window

0xa8a1,	// (0x0007582d) call_video_uplink_pane_g1

0xb1e5,	// (0x00076171) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007a320) call_video_uplink_pane_g

0xb1ed,	// (0x00076179) video_uplink_pane

0xb1f5,	// (0x00076181) mce_image_pane_g1

0x2595,	// (0x0006d521) mce_image_pane_g2

0x259d,	// (0x0006d529) mce_image_pane_g3

0x25a5,	// (0x0006d531) mce_image_pane_g4

0x25af,	// (0x0006d53b) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007a325) mce_image_pane_g

0xb1ff,	// (0x0007618b) control_top_pane_stacon_cp01_ParamLimits

0xb1ff,	// (0x0007618b) control_top_pane_stacon_cp01

0xb213,	// (0x0007619f) uni_indicator_pane_stacon_cp01_ParamLimits

0xb213,	// (0x0007619f) uni_indicator_pane_stacon_cp01

0xb224,	// (0x000761b0) bg_popup_sub_pane_cp03

0x25b7,	// (0x0006d543) chi_dic_find_pane

0x25bf,	// (0x0006d54b) listscroll_chi_dic_pane

0x25c8,	// (0x0006d554) main_pane_chidic_g1

0x25db,	// (0x0006d567) chi_dic_find_pane_t1

0xb22e,	// (0x000761ba) find_chidic_pane

0xb237,	// (0x000761c3) chi_dic_list_pane_ParamLimits

0xb237,	// (0x000761c3) chi_dic_list_pane

0xb248,	// (0x000761d4) scroll_pane_cp020

0x25e9,	// (0x0006d575) find_chidic_pane_t1

0xa520,	// (0x000754ac) input_focus_pane_cp06

0x25f8,	// (0x0006d584) list_chi_dic_pane_ParamLimits

0x25f8,	// (0x0006d584) list_chi_dic_pane

0x260a,	// (0x0006d596) list_chi_dic_pane_t1_ParamLimits

0x260a,	// (0x0006d596) list_chi_dic_pane_t1

0xa520,	// (0x000754ac) list_highlight_pane_cp020

0xb250,	// (0x000761dc) bg_cale_heading_pane_g1

0x261d,	// (0x0006d5a9) bg_cale_heading_pane_g2

0x2625,	// (0x0006d5b1) bg_cale_heading_pane_g3

0x262d,	// (0x0006d5b9) bg_cale_heading_pane_g4

0x2637,	// (0x0006d5c3) bg_cale_heading_pane_g5

0x2641,	// (0x0006d5cd) bg_cale_heading_pane_g6

0x2649,	// (0x0006d5d5) bg_cale_heading_pane_g7

0x2651,	// (0x0006d5dd) bg_cale_heading_pane_g8

0x265b,	// (0x0006d5e7) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007a330) bg_cale_heading_pane_g

0xb250,	// (0x000761dc) bg_cale_side_pane_g1

0x2665,	// (0x0006d5f1) bg_cale_side_pane_g2

0x266d,	// (0x0006d5f9) bg_cale_side_pane_g3

0x2675,	// (0x0006d601) bg_cale_side_pane_g4

0x267d,	// (0x0006d609) bg_cale_side_pane_g5

0x2685,	// (0x0006d611) bg_cale_side_pane_g6

0x268d,	// (0x0006d619) bg_cale_side_pane_g7

0x2695,	// (0x0006d621) bg_cale_side_pane_g8

0x269d,	// (0x0006d629) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007a343) bg_cale_side_pane_g

0x26a5,	// (0x0006d631) popup_call_status_window_ParamLimits

0x26a5,	// (0x0006d631) popup_call_status_window

0xb258,	// (0x000761e4) stacon_top_pane

0xb260,	// (0x000761ec) status_pane_ParamLimits

0xb260,	// (0x000761ec) status_pane

0xb275,	// (0x00076201) status_small_pane

0xb27d,	// (0x00076209) control_pane

0xa520,	// (0x000754ac) stacon_bottom_pane

0xb285,	// (0x00076211) list_single_mce_smart_pane_t1_ParamLimits

0xb285,	// (0x00076211) list_single_mce_smart_pane_t1

0xb298,	// (0x00076224) list_single_mce_smart_pane_t2_ParamLimits

0xb298,	// (0x00076224) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007a356) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007a356) list_single_mce_smart_pane_t

0x26ec,	// (0x0006d678) compass_pane

0x26f5,	// (0x0006d681) main_location2_pane_t1

0x2707,	// (0x0006d693) main_location2_pane_t2

0x2719,	// (0x0006d6a5) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007a35b) main_location2_pane_t

0xb2b7,	// (0x00076243) compass_pane_g1_ParamLimits

0xb2b7,	// (0x00076243) compass_pane_g1

0x275d,	// (0x0006d6e9) compass_pane_t1

0x276c,	// (0x0006d6f8) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007a364) compass_pane_t

0x27b3,	// (0x0006d73f) text_secondary_cp61

0xb335,	// (0x000762c1) navi_pane_cams_g5

0xb3b1,	// (0x0007633d) navi_pane_im_t1

0xb3bf,	// (0x0007634b) navi_pane_mp_g1_ParamLimits

0xb3bf,	// (0x0007634b) navi_pane_mp_g1

0xb3d3,	// (0x0007635f) navi_pane_mp_g2_ParamLimits

0xb3d3,	// (0x0007635f) navi_pane_mp_g2

0xb3df,	// (0x0007636b) navi_pane_mp_g3_ParamLimits

0xb3df,	// (0x0007636b) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007a378) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007a378) navi_pane_mp_g

0xb3eb,	// (0x00076377) navi_pane_mp_t1

0xb3f9,	// (0x00076385) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007a37f) navi_pane_mp_t

0xb464,	// (0x000763f0) navi_pane_vt_g1

0xb3eb,	// (0x00076377) navi_pane_vt_t1

0xb46c,	// (0x000763f8) navi_slider_pane

0xaa41,	// (0x000759cd) zooming_pane

0xb47c,	// (0x00076408) navi_slider_pane_g1

0x960b,	// (0x00074597) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007a386) navi_slider_pane_g

0xb4a0,	// (0x0007642c) aid_levels_zoom

0xb4a8,	// (0x00076434) zooming_pane_g1

0xb4b0,	// (0x0007643c) zooming_pane_g2

0xb4b0,	// (0x0007643c) zooming_pane_g3

0x0002,

0xf409,	// (0x0007a395) zooming_pane_g

0xb4b8,	// (0x00076444) level_10_zoom

0xb4c1,	// (0x0007644d) level_11_zoom

0xb4ca,	// (0x00076456) level_1_zoom

0xb4d3,	// (0x0007645f) level_2_zoom

0xb4dc,	// (0x00076468) level_3_zoom

0xb4e5,	// (0x00076471) level_4_zoom

0xb4ee,	// (0x0007647a) level_5_zoom

0xb4f7,	// (0x00076483) level_6_zoom

0xb500,	// (0x0007648c) level_7_zoom

0xb509,	// (0x00076495) level_8_zoom

0xb512,	// (0x0007649e) level_9_zoom

0xb523,	// (0x000764af) popup_phob_thumbnail_window_g1

0xb52b,	// (0x000764b7) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007a39c) popup_phob_thumbnail_window_g

0xc868,	// (0x000777f4) level_1_location

0xc870,	// (0x000777fc) level_2_location

0xc878,	// (0x00077804) level_3_location

0xc880,	// (0x0007780c) level_4_location

0xaa41,	// (0x000759cd) level_5_location

0x2804,	// (0x0006d790) mce_icon_pane_g1

0x280e,	// (0x0006d79a) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007a3a1) mce_icon_pane_g

0x2816,	// (0x0006d7a2) main_mup_pane_g1_ParamLimits

0x2816,	// (0x0006d7a2) main_mup_pane_g1

0x282c,	// (0x0006d7b8) main_mup_pane_g2_ParamLimits

0x282c,	// (0x0006d7b8) main_mup_pane_g2

0x283e,	// (0x0006d7ca) main_mup_pane_g3_ParamLimits

0x283e,	// (0x0006d7ca) main_mup_pane_g3

0x2850,	// (0x0006d7dc) main_mup_pane_g4_ParamLimits

0x2850,	// (0x0006d7dc) main_mup_pane_g4

0x2868,	// (0x0006d7f4) main_mup_pane_g5_ParamLimits

0x2868,	// (0x0006d7f4) main_mup_pane_g5

0x2884,	// (0x0006d810) main_mup_pane_g6_ParamLimits

0x2884,	// (0x0006d810) main_mup_pane_g6

0x289c,	// (0x0006d828) main_mup_pane_g7_ParamLimits

0x289c,	// (0x0006d828) main_mup_pane_g7

0x28b4,	// (0x0006d840) main_mup_pane_g8_ParamLimits

0x28b4,	// (0x0006d840) main_mup_pane_g8

0x28cc,	// (0x0006d858) main_mup_pane_g9_ParamLimits

0x28cc,	// (0x0006d858) main_mup_pane_g9

0x28e6,	// (0x0006d872) main_mup_pane_g10_ParamLimits

0x28e6,	// (0x0006d872) main_mup_pane_g10

0x2900,	// (0x0006d88c) main_mup_pane_g11_ParamLimits

0x2900,	// (0x0006d88c) main_mup_pane_g11

0x2914,	// (0x0006d8a0) main_mup_pane_g12_ParamLimits

0x2914,	// (0x0006d8a0) main_mup_pane_g12

0x292a,	// (0x0006d8b6) main_mup_pane_g13_ParamLimits

0x292a,	// (0x0006d8b6) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007a3a6) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007a3a6) main_mup_pane_g

0x293e,	// (0x0006d8ca) main_mup_pane_t1_ParamLimits

0x293e,	// (0x0006d8ca) main_mup_pane_t1

0x2958,	// (0x0006d8e4) main_mup_pane_t2_ParamLimits

0x2958,	// (0x0006d8e4) main_mup_pane_t2

0x2970,	// (0x0006d8fc) main_mup_pane_t3_ParamLimits

0x2970,	// (0x0006d8fc) main_mup_pane_t3

0x2988,	// (0x0006d914) main_mup_pane_t4_ParamLimits

0x2988,	// (0x0006d914) main_mup_pane_t4

0x29a6,	// (0x0006d932) main_mup_pane_t5_ParamLimits

0x29a6,	// (0x0006d932) main_mup_pane_t5

0x29bb,	// (0x0006d947) main_mup_pane_t6_ParamLimits

0x29bb,	// (0x0006d947) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007a3c1) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007a3c1) main_mup_pane_t

0x29cd,	// (0x0006d959) mup_progress_pane_ParamLimits

0x29cd,	// (0x0006d959) mup_progress_pane

0x29d9,	// (0x0006d965) mup_visualizer_pane_ParamLimits

0x29d9,	// (0x0006d965) mup_visualizer_pane

0x2a0d,	// (0x0006d999) mup_volume_pane_ParamLimits

0x2a0d,	// (0x0006d999) mup_volume_pane

0xb533,	// (0x000764bf) mup_visualizer_pane_g1_ParamLimits

0xb533,	// (0x000764bf) mup_visualizer_pane_g1

0xb533,	// (0x000764bf) mup_visualizer_pane_g2_ParamLimits

0xb533,	// (0x000764bf) mup_visualizer_pane_g2

0xb2b7,	// (0x00076243) mup_visualizer_pane_g3_ParamLimits

0xb2b7,	// (0x00076243) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007a3ce) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007a3ce) mup_visualizer_pane_g

0xa8a1,	// (0x0007582d) mup_volume_pane_g1

0xb549,	// (0x000764d5) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007a3d5) mup_volume_pane_g

0xa8a1,	// (0x0007582d) mup_progress_pane_g1

0xb552,	// (0x000764de) mup_progress_pane_g2

0xb55b,	// (0x000764e7) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007a3da) mup_progress_pane_g

0xa520,	// (0x000754ac) bg_popup_window_pane_cp05

0xb564,	// (0x000764f0) heading_pane_cp02_ParamLimits

0xb564,	// (0x000764f0) heading_pane_cp02

0xb57e,	// (0x0007650a) list_popup_blid_pane

0xb586,	// (0x00076512) list_blid_sat_info_pane_ParamLimits

0xb586,	// (0x00076512) list_blid_sat_info_pane

0xb599,	// (0x00076525) list_blid_sat_info_pane_g1

0xb5a1,	// (0x0007652d) list_blid_sat_info_pane_t1

0x2b23,	// (0x0006daaf) mup_equalizer_pane_ParamLimits

0x2b23,	// (0x0006daaf) mup_equalizer_pane

0x2b3c,	// (0x0006dac8) mup_equalizer_pane_cp1_ParamLimits

0x2b3c,	// (0x0006dac8) mup_equalizer_pane_cp1

0x2b59,	// (0x0006dae5) mup_equalizer_pane_cp2_ParamLimits

0x2b59,	// (0x0006dae5) mup_equalizer_pane_cp2

0x2b76,	// (0x0006db02) mup_equalizer_pane_cp3_ParamLimits

0x2b76,	// (0x0006db02) mup_equalizer_pane_cp3

0x2b97,	// (0x0006db23) mup_equalizer_pane_cp4_ParamLimits

0x2b97,	// (0x0006db23) mup_equalizer_pane_cp4

0x2bb8,	// (0x0006db44) mup_equalizer_pane_cp5

0x2bcc,	// (0x0006db58) mup_equalizer_pane_cp6

0x2be0,	// (0x0006db6c) mup_equalizer_pane_cp7

0xc746,	// (0x000776d2) bg_popup_call_poc_act_pane_g9

0xc74e,	// (0x000776da) bg_popup_call_poc_act_pane_g10

0xc756,	// (0x000776e2) bg_popup_call_poc_act_pane_g11

0x000a,

0xa77b,	// (0x00075707) mup_scale_pane

0xa8a1,	// (0x0007582d) mup_scale_pane_g1

0xb5af,	// (0x0007653b) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007a3f6) mup_scale_pane_g

0xb5d3,	// (0x0007655f) msg_data_pane

0xb5db,	// (0x00076567) scroll_pane_cp017

0x2c06,	// (0x0006db92) bg_list_pane_cp04_ParamLimits

0x2c06,	// (0x0006db92) bg_list_pane_cp04

0xb5e3,	// (0x0007656f) msg_data_pane_g1

0x2c1e,	// (0x0006dbaa) msg_data_pane_g2

0x2c26,	// (0x0006dbb2) msg_data_pane_g3

0x2c2e,	// (0x0006dbba) msg_data_pane_g4

0x2c36,	// (0x0006dbc2) msg_data_pane_g5

0x2c3e,	// (0x0006dbca) msg_data_pane_g6

0x2c46,	// (0x0006dbd2) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007a405) msg_data_pane_g

0x2c4e,	// (0x0006dbda) msg_text_pane_ParamLimits

0x2c4e,	// (0x0006dbda) msg_text_pane

0x2c7d,	// (0x0006dc09) qrid_highlight_pane_cp011_ParamLimits

0x2c7d,	// (0x0006dc09) qrid_highlight_pane_cp011

0xa520,	// (0x000754ac) msg_body_pane

0xa520,	// (0x000754ac) msg_header_pane

0xb5f4,	// (0x00076580) input_focus_pane_cp07

0x9ec4,	// (0x00074e50) msg_header_pane_t1_ParamLimits

0x9ec4,	// (0x00074e50) msg_header_pane_t1

0x9ed6,	// (0x00074e62) msg_header_pane_t2_ParamLimits

0x9ed6,	// (0x00074e62) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007a419) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007a419) msg_header_pane_t

0xb609,	// (0x00076595) msg_body_pane_g1

0x9ee8,	// (0x00074e74) msg_body_pane_t1_ParamLimits

0x9ee8,	// (0x00074e74) msg_body_pane_t1

0x9f19,	// (0x00074ea5) msg_body_pane_t2_ParamLimits

0x9f19,	// (0x00074ea5) msg_body_pane_t2

0x9f2b,	// (0x00074eb7) msg_body_pane_t3_ParamLimits

0x9f2b,	// (0x00074eb7) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007a41e) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007a41e) msg_body_pane_t

0x2cdb,	// (0x0006dc67) main_viewer_pane_g1_ParamLimits

0x2cdb,	// (0x0006dc67) main_viewer_pane_g1

0x2ce9,	// (0x0006dc75) main_viewer_pane_g2_ParamLimits

0x2ce9,	// (0x0006dc75) main_viewer_pane_g2

0x2cf7,	// (0x0006dc83) main_viewer_pane_g3_ParamLimits

0x2cf7,	// (0x0006dc83) main_viewer_pane_g3

0x2d06,	// (0x0006dc92) main_viewer_pane_g4_ParamLimits

0x2d06,	// (0x0006dc92) main_viewer_pane_g4

0x9635,	// (0x000745c1) main_viewer_pane_g5_ParamLimits

0x9635,	// (0x000745c1) main_viewer_pane_g5

0x9635,	// (0x000745c1) main_viewer_pane_g7_ParamLimits

0x9635,	// (0x000745c1) main_viewer_pane_g7

0xaf5b,	// (0x00075ee7) main_viewer_pane_g8_ParamLimits

0xaf5b,	// (0x00075ee7) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007a42e) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007a42e) main_viewer_pane_g

0xb611,	// (0x0007659d) viewer_content_pane_ParamLimits

0xb611,	// (0x0007659d) viewer_content_pane

0x2d42,	// (0x0006dcce) main_postcard_pane_g1_ParamLimits

0x2d42,	// (0x0006dcce) main_postcard_pane_g1

0x2d58,	// (0x0006dce4) main_postcard_pane_g2_ParamLimits

0x2d58,	// (0x0006dce4) main_postcard_pane_g2

0x2d6e,	// (0x0006dcfa) main_postcard_pane_g3_ParamLimits

0x2d6e,	// (0x0006dcfa) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007a43f) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007a43f) main_postcard_pane_g

0x2d85,	// (0x0006dd11) main_postcard_pane_g4

0xc968,	// (0x000778f4) smil_status_volume_pane_g2

0x2dc8,	// (0x0006dd54) postcard_pane_ParamLimits

0x2dc8,	// (0x0006dd54) postcard_pane

0xb61f,	// (0x000765ab) postcard_pane_g1_ParamLimits

0xb61f,	// (0x000765ab) postcard_pane_g1

0x2e0a,	// (0x0006dd96) postcard_pane_g2_ParamLimits

0x2e0a,	// (0x0006dd96) postcard_pane_g2

0x2e16,	// (0x0006dda2) postcard_pane_g3_ParamLimits

0x2e16,	// (0x0006dda2) postcard_pane_g3

0xb62d,	// (0x000765b9) postcard_pane_g4_ParamLimits

0xb62d,	// (0x000765b9) postcard_pane_g4

0x2e22,	// (0x0006ddae) postcard_pane_g5_ParamLimits

0x2e22,	// (0x0006ddae) postcard_pane_g5

0x2e37,	// (0x0006ddc3) postcard_pane_g6_ParamLimits

0x2e37,	// (0x0006ddc3) postcard_pane_g6

0xb61f,	// (0x000765ab) postcard_pane_g7_ParamLimits

0xb61f,	// (0x000765ab) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007a44c) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007a44c) postcard_pane_g

0x2e4b,	// (0x0006ddd7) main_mp2_pane_g1_ParamLimits

0x2e4b,	// (0x0006ddd7) main_mp2_pane_g1

0x2e57,	// (0x0006dde3) main_mp2_pane_g2_ParamLimits

0x2e57,	// (0x0006dde3) main_mp2_pane_g2

0x2e63,	// (0x0006ddef) main_mp2_pane_g3_ParamLimits

0x2e63,	// (0x0006ddef) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007a45b) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007a45b) main_mp2_pane_g

0x2e6f,	// (0x0006ddfb) main_mp2_pane_t1_ParamLimits

0x2e6f,	// (0x0006ddfb) main_mp2_pane_t1

0x2e84,	// (0x0006de10) main_mp2_pane_t2_ParamLimits

0x2e84,	// (0x0006de10) main_mp2_pane_t2

0x2e96,	// (0x0006de22) main_mp2_pane_t3_ParamLimits

0x2e96,	// (0x0006de22) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007a462) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007a462) main_mp2_pane_t

0xb63b,	// (0x000765c7) pec_content_pane_ParamLimits

0xb63b,	// (0x000765c7) pec_content_pane

0xabea,	// (0x00075b76) scroll_pane_cp015

0xb64d,	// (0x000765d9) pec_attribute_pane_ParamLimits

0xb64d,	// (0x000765d9) pec_attribute_pane

0x2ea8,	// (0x0006de34) pec_content_pane_g1_ParamLimits

0x2ea8,	// (0x0006de34) pec_content_pane_g1

0xb65d,	// (0x000765e9) pec_content_pane_t1_ParamLimits

0xb65d,	// (0x000765e9) pec_content_pane_t1

0xb66f,	// (0x000765fb) pec_content_pane_t2_ParamLimits

0xb66f,	// (0x000765fb) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007a469) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007a469) pec_content_pane_t

0x2eb4,	// (0x0006de40) list_single_graphic_pane_cp01_ParamLimits

0x2eb4,	// (0x0006de40) list_single_graphic_pane_cp01

0xa77b,	// (0x00075707) bg_popup_sub_pane_cp04

0xb681,	// (0x0007660d) popup_mup_playback_window_g1

0xb68d,	// (0x00076619) popup_mup_playback_window_t1

0xb6a2,	// (0x0007662e) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007a46e) popup_mup_playback_window_t

0xb6d9,	// (0x00076665) main_image_pane_g1_ParamLimits

0xb6d9,	// (0x00076665) main_image_pane_g1

0xb71c,	// (0x000766a8) scroll_pane_cp018_ParamLimits

0xb71c,	// (0x000766a8) scroll_pane_cp018

0xb734,	// (0x000766c0) scroll_pane_cp016_ParamLimits

0xb734,	// (0x000766c0) scroll_pane_cp016

0x2f82,	// (0x0006df0e) smil2_image_pane_ParamLimits

0x2f82,	// (0x0006df0e) smil2_image_pane

0x2fb2,	// (0x0006df3e) smil2_root_pane_ParamLimits

0x2fb2,	// (0x0006df3e) smil2_root_pane

0x2fea,	// (0x0006df76) smil2_text_pane_ParamLimits

0x2fea,	// (0x0006df76) smil2_text_pane

0xa520,	// (0x000754ac) bg_list_pane_cp06

0xb770,	// (0x000766fc) grid_radio_pane

0xa520,	// (0x000754ac) bg_popup_window_pane_cp06

0xb778,	// (0x00076704) main_fmradio_pane_t1

0xb133,	// (0x000760bf) heading_pane_cp04

0xb786,	// (0x00076712) main_fmradio_pane_t2

0xc79e,	// (0x0007772a) popup_cale_lunar_info_window_g1

0xb794,	// (0x00076720) main_fmradio_pane_t3

0xc7a6,	// (0x00077732) popup_cale_lunar_info_window_g2

0xb7a2,	// (0x0007672e) main_fmradio_pane_t4

0x0001,

0xb7b0,	// (0x0007673c) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0007a55c) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007a483) main_fmradio_pane_t

0xb7be,	// (0x0007674a) wait_bar_pane_cp03

0xb7c6,	// (0x00076752) cell_fmradio_pane_ParamLimits

0xb7c6,	// (0x00076752) cell_fmradio_pane

0xb61f,	// (0x000765ab) cell_fmradio_pane_g1_ParamLimits

0xb61f,	// (0x000765ab) cell_fmradio_pane_g1

0xa520,	// (0x000754ac) grid_highlight_pane_cp011

0xb7d9,	// (0x00076765) poc_content_pane_ParamLimits

0xb7d9,	// (0x00076765) poc_content_pane

0xb7eb,	// (0x00076777) scroll_pane_cp019

0x306a,	// (0x0006dff6) popup_call_poc_act_window_ParamLimits

0x306a,	// (0x0006dff6) popup_call_poc_act_window

0x308e,	// (0x0006e01a) popup_call_poc_inact_window_ParamLimits

0x308e,	// (0x0006e01a) popup_call_poc_inact_window

0xf594,	// (0x0007a520) bg_popup_call_poc_act_pane_g

0xc75e,	// (0x000776ea) bg_popup_call_poc_inact_pane_g1

0xc766,	// (0x000776f2) bg_popup_call_poc_inact_pane_g2

0xb7f3,	// (0x0007677f) popup_call_poc_act_window_g2

0xc76e,	// (0x000776fa) bg_popup_call_poc_inact_pane_g3

0xc6ee,	// (0x0007767a) bg_popup_call_poc_inact_pane_g4

0xc776,	// (0x00077702) bg_popup_call_poc_inact_pane_g5

0xb7fb,	// (0x00076787) popup_call_poc_act_window_t1_ParamLimits

0xb7fb,	// (0x00076787) popup_call_poc_act_window_t1

0xb823,	// (0x000767af) popup_call_poc_act_window_t2_ParamLimits

0xb823,	// (0x000767af) popup_call_poc_act_window_t2

0xb84b,	// (0x000767d7) popup_call_poc_act_window_t3_ParamLimits

0xb84b,	// (0x000767d7) popup_call_poc_act_window_t3

0xb873,	// (0x000767ff) popup_call_poc_act_window_t4_ParamLimits

0xb873,	// (0x000767ff) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007a48e) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007a48e) popup_call_poc_act_window_t

0xc77e,	// (0x0007770a) bg_popup_call_poc_inact_pane_g6

0xc786,	// (0x00077712) bg_popup_call_poc_inact_pane_g7

0xc78e,	// (0x0007771a) bg_popup_call_poc_inact_pane_g8

0xb885,	// (0x00076811) popup_call_poc_inact_window_g2

0xc796,	// (0x00077722) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0007a537) bg_popup_call_poc_inact_pane_g

0xb88d,	// (0x00076819) popup_call_poc_inact_window_t1_ParamLimits

0xb88d,	// (0x00076819) popup_call_poc_inact_window_t1

0xb8a2,	// (0x0007682e) popup_call_poc_inact_window_t2_ParamLimits

0xb8a2,	// (0x0007682e) popup_call_poc_inact_window_t2

0xb8b7,	// (0x00076843) popup_call_poc_inact_window_t3_ParamLimits

0xb8b7,	// (0x00076843) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007a497) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007a497) popup_call_poc_inact_window_t

0xc8db,	// (0x00077867) context_pane_ParamLimits

0x38c8,	// (0x0006e854) signal_pane_ParamLimits

0xaa41,	// (0x000759cd) main_call2_pane

0x9680,	// (0x0007460c) popup_phob_thumbnail2_window_ParamLimits

0x9680,	// (0x0007460c) popup_phob_thumbnail2_window

0x961d,	// (0x000745a9) aid_hotspot_pointer_arrow_pane

0x9625,	// (0x000745b1) aid_hotspot_pointer_hand_pane

0x33d8,	// (0x0006e364) phob_pre_status_pane_g5

0x1174,	// (0x0006c100) cams_zoom_pane_ParamLimits

0x1183,	// (0x0006c10f) image_vga_pane_ParamLimits

0x119d,	// (0x0006c129) main_camera_pane_g1_ParamLimits

0x11af,	// (0x0006c13b) main_camera_pane_g2_ParamLimits

0x11bf,	// (0x0006c14b) main_camera_pane_g3_ParamLimits

0x11cf,	// (0x0006c15b) main_camera_pane_g4_ParamLimits

0x11df,	// (0x0006c16b) main_camera_pane_g5_ParamLimits

0x11ef,	// (0x0006c17b) main_camera_pane_g6_ParamLimits

0x11ff,	// (0x0006c18b) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007a196) main_camera_pane_g_ParamLimits

0x120f,	// (0x0006c19b) main_camera_pane_t1_ParamLimits

0x1225,	// (0x0006c1b1) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007a1a7) main_camera_pane_t_ParamLimits

0xa77b,	// (0x00075707) bg_popup_preview_window_pane_cp01_ParamLimits

0xa77b,	// (0x00075707) bg_popup_preview_window_pane_cp01

0xb8cc,	// (0x00076858) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8cc,	// (0x00076858) popup_phob_thumbnail2_window_g1

0xa520,	// (0x000754ac) call2_cli_visual_pane

0x30c2,	// (0x0006e04e) popup_call2_audio_conf_window_ParamLimits

0x30c2,	// (0x0006e04e) popup_call2_audio_conf_window

0x30e2,	// (0x0006e06e) popup_call2_audio_first_window_ParamLimits

0x30e2,	// (0x0006e06e) popup_call2_audio_first_window

0x3178,	// (0x0006e104) popup_call2_audio_in_window_ParamLimits

0x3178,	// (0x0006e104) popup_call2_audio_in_window

0x31c0,	// (0x0006e14c) popup_call2_audio_out_window_ParamLimits

0x31c0,	// (0x0006e14c) popup_call2_audio_out_window

0x322a,	// (0x0006e1b6) popup_call2_audio_second_window_ParamLimits

0x322a,	// (0x0006e1b6) popup_call2_audio_second_window

0x3290,	// (0x0006e21c) popup_call2_audio_wait_window_ParamLimits

0x3290,	// (0x0006e21c) popup_call2_audio_wait_window

0xa520,	// (0x000754ac) bg_popup_call2_act_pane_cp03

0xa75d,	// (0x000756e9) list_conf_pane_cp

0xb8d8,	// (0x00076864) popup_call2_audio_conf_window_t1

0xb8e6,	// (0x00076872) list_single_graphic_popup_conf2_pane_ParamLimits

0xb8e6,	// (0x00076872) list_single_graphic_popup_conf2_pane

0xb1a3,	// (0x0007612f) list_highlight_pane_cp04

0xb8f9,	// (0x00076885) list_single_graphic_popup_conf2_pane_g1

0xb1b4,	// (0x00076140) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007a49e) list_single_graphic_popup_conf2_pane_g

0xb903,	// (0x0007688f) list_single_graphic_popup_conf2_pane_t1

0xb911,	// (0x0007689d) bg_popup_call2_act_pane_cp01_ParamLimits

0xb911,	// (0x0007689d) bg_popup_call2_act_pane_cp01

0xb99b,	// (0x00076927) call_type_pane_cp05_ParamLimits

0xb99b,	// (0x00076927) call_type_pane_cp05

0xb9ef,	// (0x0007697b) popup_call2_audio_second_window_g1_ParamLimits

0xb9ef,	// (0x0007697b) popup_call2_audio_second_window_g1

0xba43,	// (0x000769cf) popup_call2_audio_second_window_g2_ParamLimits

0xba43,	// (0x000769cf) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007a4a3) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007a4a3) popup_call2_audio_second_window_g

0xbaa8,	// (0x00076a34) popup_call2_audio_second_window_t1_ParamLimits

0xbaa8,	// (0x00076a34) popup_call2_audio_second_window_t1

0xbb63,	// (0x00076aef) popup_call2_audio_second_window_t2_ParamLimits

0xbb63,	// (0x00076aef) popup_call2_audio_second_window_t2

0xbbb6,	// (0x00076b42) popup_call2_audio_second_window_t3_ParamLimits

0xbbb6,	// (0x00076b42) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007a4aa) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007a4aa) popup_call2_audio_second_window_t

0xa520,	// (0x000754ac) bg_popup_call2_in_pane_cp02

0xa52a,	// (0x000754b6) call_type_pane_cp04

0xa532,	// (0x000754be) popup_call2_audio_wait_window_g1

0xa53a,	// (0x000754c6) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0007a085) popup_call2_audio_wait_window_g

0xa542,	// (0x000754ce) popup_call2_audio_wait_window_t3

0xbca9,	// (0x00076c35) bg_popup_call2_act_pane_ParamLimits

0xbca9,	// (0x00076c35) bg_popup_call2_act_pane

0xbd69,	// (0x00076cf5) call_type_pane_cp03_ParamLimits

0xbd69,	// (0x00076cf5) call_type_pane_cp03

0xbdcd,	// (0x00076d59) popup_call2_audio_first_window_g1_ParamLimits

0xbdcd,	// (0x00076d59) popup_call2_audio_first_window_g1

0xbe3d,	// (0x00076dc9) popup_call2_audio_first_window_g2_ParamLimits

0xbe3d,	// (0x00076dc9) popup_call2_audio_first_window_g2

0xb533,	// (0x000764bf) popup_call2_audio_first_window_g3_ParamLimits

0xb533,	// (0x000764bf) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007a4b3) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007a4b3) popup_call2_audio_first_window_g

0xbf1b,	// (0x00076ea7) popup_call2_audio_first_window_t1_ParamLimits

0xbf1b,	// (0x00076ea7) popup_call2_audio_first_window_t1

0xc01e,	// (0x00076faa) popup_call2_audio_first_window_t4_ParamLimits

0xc01e,	// (0x00076faa) popup_call2_audio_first_window_t4

0xc101,	// (0x0007708d) popup_call2_audio_first_window_t5_ParamLimits

0xc101,	// (0x0007708d) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007a4be) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007a4be) popup_call2_audio_first_window_t

0xa773,	// (0x000756ff) bg_popup_call2_act_pane_g1

0xc7ae,	// (0x0007773a) popup_cale_lunar_info_window_t1

0xc7bc,	// (0x00077748) popup_cale_lunar_info_window_t2

0xc7ca,	// (0x00077756) popup_cale_lunar_info_window_t3

0xa520,	// (0x000754ac) bg_popup_call2_bubble_pane

0xc202,	// (0x0007718e) bg_popup_call2_in_pane_cp01_ParamLimits

0xc202,	// (0x0007718e) bg_popup_call2_in_pane_cp01

0x9c53,	// (0x00074bdf) call_type_pane_cp02

0xc24a,	// (0x000771d6) popup_call2_audio_out_window_g1_ParamLimits

0xc24a,	// (0x000771d6) popup_call2_audio_out_window_g1

0xc276,	// (0x00077202) popup_call2_audio_out_window_g2_ParamLimits

0xc276,	// (0x00077202) popup_call2_audio_out_window_g2

0xc29e,	// (0x0007722a) popup_call2_audio_out_window_g3_ParamLimits

0xc29e,	// (0x0007722a) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007a4c7) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007a4c7) popup_call2_audio_out_window_g

0xc2d9,	// (0x00077265) popup_call2_audio_out_window_t1_ParamLimits

0xc2d9,	// (0x00077265) popup_call2_audio_out_window_t1

0xc338,	// (0x000772c4) popup_call2_audio_out_window_t2_ParamLimits

0xc338,	// (0x000772c4) popup_call2_audio_out_window_t2

0xc38c,	// (0x00077318) popup_call2_audio_out_window_t3_ParamLimits

0xc38c,	// (0x00077318) popup_call2_audio_out_window_t3

0xc3a2,	// (0x0007732e) popup_call2_audio_out_window_t4_ParamLimits

0xc3a2,	// (0x0007732e) popup_call2_audio_out_window_t4

0xc3b8,	// (0x00077344) popup_call2_audio_out_window_t5_ParamLimits

0xc3b8,	// (0x00077344) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007a4d0) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007a4d0) popup_call2_audio_out_window_t

0xc41c,	// (0x000773a8) bg_popup_call2_in_pane_ParamLimits

0xc41c,	// (0x000773a8) bg_popup_call2_in_pane

0xc478,	// (0x00077404) popup_call2_audio_in_window_g1_ParamLimits

0xc478,	// (0x00077404) popup_call2_audio_in_window_g1

0xc4b0,	// (0x0007743c) popup_call2_audio_in_window_g2_ParamLimits

0xc4b0,	// (0x0007743c) popup_call2_audio_in_window_g2

0xc4e8,	// (0x00077474) popup_call2_audio_in_window_g3_ParamLimits

0xc4e8,	// (0x00077474) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007a4dd) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007a4dd) popup_call2_audio_in_window_g

0xc540,	// (0x000774cc) popup_call2_audio_in_window_t1_ParamLimits

0xc540,	// (0x000774cc) popup_call2_audio_in_window_t1

0xc5c0,	// (0x0007754c) popup_call2_audio_in_window_t2_ParamLimits

0xc5c0,	// (0x0007754c) popup_call2_audio_in_window_t2

0xc640,	// (0x000775cc) popup_call2_audio_in_window_t3_ParamLimits

0xc640,	// (0x000775cc) popup_call2_audio_in_window_t3

0xc65a,	// (0x000775e6) popup_call2_audio_in_window_t4_ParamLimits

0xc65a,	// (0x000775e6) popup_call2_audio_in_window_t4

0xc66c,	// (0x000775f8) popup_call2_audio_in_window_t5_ParamLimits

0xc66c,	// (0x000775f8) popup_call2_audio_in_window_t5

0xc681,	// (0x0007760d) popup_call2_audio_in_window_t6_ParamLimits

0xc681,	// (0x0007760d) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007a4e6) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007a4e6) popup_call2_audio_in_window_t

0xa773,	// (0x000756ff) bg_popup_call2_in_pane_g1

0xc7d8,	// (0x00077764) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0007a561) popup_cale_lunar_info_window_t

0xa77b,	// (0x00075707) bg_popup_call2_rect_pane_ParamLimits

0xa77b,	// (0x00075707) bg_popup_call2_rect_pane

0xa520,	// (0x000754ac) call2_cli_visual_graphic_pane

0xa520,	// (0x000754ac) call2_cli_visual_text_pane

0x96a7,	// (0x00074633) smil_status_volume_pane_g3

0x0002,

0xa8a1,	// (0x0007582d) call2_cli_visual_graphic_pane_g1

0xa8a1,	// (0x0007582d) call2_cli_visual_graphic_pane_g2

0xa8a1,	// (0x0007582d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007a4f3) call2_cli_visual_graphic_pane_g

0xc696,	// (0x00077622) bg_popup_call2_rect_pane_g1

0xa93f,	// (0x000758cb) bg_popup_call2_rect_pane_g2

0xc69e,	// (0x0007762a) bg_popup_call2_rect_pane_g3

0xc6a6,	// (0x00077632) bg_popup_call2_rect_pane_g4

0xc6ae,	// (0x0007763a) bg_popup_call2_rect_pane_g5

0xc6b6,	// (0x00077642) bg_popup_call2_rect_pane_g6

0xc6be,	// (0x0007764a) bg_popup_call2_rect_pane_g7

0xc6c6,	// (0x00077652) bg_popup_call2_rect_pane_g8

0xc6ce,	// (0x0007765a) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007a4fa) bg_popup_call2_rect_pane_g

0xc6d6,	// (0x00077662) bg_popup_call2_bubble_pane_g1

0xc6de,	// (0x0007766a) bg_popup_call2_bubble_pane_g2

0xc6e6,	// (0x00077672) bg_popup_call2_bubble_pane_g3

0xc6ee,	// (0x0007767a) bg_popup_call2_bubble_pane_g4

0xc6f6,	// (0x00077682) bg_popup_call2_bubble_pane_g5

0xc6fe,	// (0x0007768a) bg_popup_call2_bubble_pane_g6

0xc706,	// (0x00077692) bg_popup_call2_bubble_pane_g7

0xc70e,	// (0x0007769a) bg_popup_call2_bubble_pane_g8

0xc716,	// (0x000776a2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007a50d) bg_popup_call2_bubble_pane_g

0x0bac,	// (0x0006bb38) aid_cale_week_size_cell_pane

0x123b,	// (0x0006c1c7) aid_cams_cif_uncrop_pane_ParamLimits

0x123b,	// (0x0006c1c7) aid_cams_cif_uncrop_pane

0x13f0,	// (0x0006c37c) aid_cams_size_cell_ParamLimits

0x13f0,	// (0x0006c37c) aid_cams_size_cell

0x1404,	// (0x0006c390) grid_cams_pane_ParamLimits

0x141e,	// (0x0006c3aa) linegrid_cams_pane_ParamLimits

0x161a,	// (0x0006c5a6) call_video_pane_t1

0x1638,	// (0x0006c5c4) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007a1fa) call_video_pane_t

0x1a5c,	// (0x0006c9e8) aid_cale_month_size_cell_pane_ParamLimits

0x1a5c,	// (0x0006c9e8) aid_cale_month_size_cell_pane

0xf61e,	// (0x0007a5aa) smil_status_volume_pane_g

0x96b4,	// (0x00074640) volume_smil_pane_ParamLimits

0x93d6,	// (0x00074362) aid_popup2_width_pane

0x0b22,	// (0x0006baae) cell_qdial_pane_g4_ParamLimits

0x0b22,	// (0x0006baae) cell_qdial_pane_g4

0x273d,	// (0x0006d6c9) aid_blid_cardinal_pane_ParamLimits

0x2749,	// (0x0006d6d5) aid_blid_destination_pane_ParamLimits

0x2749,	// (0x0006d6d5) aid_blid_destination_pane

0xa77b,	// (0x00075707) bg_popup_call_poc_act_pane_ParamLimits

0xa77b,	// (0x00075707) bg_popup_call_poc_act_pane

0xa77b,	// (0x00075707) bg_popup_call_poc_inact_pane_ParamLimits

0xa77b,	// (0x00075707) bg_popup_call_poc_inact_pane

0xc71e,	// (0x000776aa) bg_popup_call_poc_act_pane_g1

0xc726,	// (0x000776b2) bg_popup_call_poc_act_pane_g2

0xc72e,	// (0x000776ba) bg_popup_call_poc_act_pane_g3

0xc6ee,	// (0x0007767a) bg_popup_call_poc_act_pane_g4

0xc6f6,	// (0x00077682) bg_popup_call_poc_act_pane_g5

0xc736,	// (0x000776c2) bg_popup_call_poc_act_pane_g6

0xc706,	// (0x00077692) bg_popup_call_poc_act_pane_g7

0xc73e,	// (0x000776ca) bg_popup_call_poc_act_pane_g8

0xa520,	// (0x000754ac) main_usb_pane

0x965b,	// (0x000745e7) popup_cale_lunar_info_window

0x1902,	// (0x0006c88e) im_reading_pane_t1_ParamLimits

0xab42,	// (0x00075ace) list_im_pane_ParamLimits

0xab53,	// (0x00075adf) scroll_pane_cp07_ParamLimits

0xa520,	// (0x000754ac) grid_highlight_pane_cp012

0xa77b,	// (0x00075707) mup_scale_pane_ParamLimits

0xb61f,	// (0x000765ab) main_usb_pane_g1_ParamLimits

0xb61f,	// (0x000765ab) main_usb_pane_g1

0x32ed,	// (0x0006e279) main_usb_pane_g2_ParamLimits

0x32ed,	// (0x0006e279) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0007a54a) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0007a54a) main_usb_pane_g

0x3303,	// (0x0006e28f) main_usb_pane_t1_ParamLimits

0x3303,	// (0x0006e28f) main_usb_pane_t1

0x3315,	// (0x0006e2a1) main_usb_pane_t2_ParamLimits

0x3315,	// (0x0006e2a1) main_usb_pane_t2

0x3327,	// (0x0006e2b3) main_usb_pane_t3_ParamLimits

0x3327,	// (0x0006e2b3) main_usb_pane_t3

0x3339,	// (0x0006e2c5) main_usb_pane_t4_ParamLimits

0x3339,	// (0x0006e2c5) main_usb_pane_t4

0x334b,	// (0x0006e2d7) main_usb_pane_t5_ParamLimits

0x334b,	// (0x0006e2d7) main_usb_pane_t5

0x335d,	// (0x0006e2e9) main_usb_pane_t6_ParamLimits

0x335d,	// (0x0006e2e9) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0007a54f) main_usb_pane_t_ParamLimits

0x26ec,	// (0x0006d678) aid_text_placing

0x26f5,	// (0x0006d681) main_location2_pane_t1_ParamLimits

0x2707,	// (0x0006d693) main_location2_pane_t2_ParamLimits

0x2719,	// (0x0006d6a5) main_location2_pane_t3_ParamLimits

0x272b,	// (0x0006d6b7) main_location2_pane_t4_ParamLimits

0x272b,	// (0x0006d6b7) main_location2_pane_t4

0xf3cf,	// (0x0007a35b) main_location2_pane_t_ParamLimits

0xa7b7,	// (0x00075743) find_pinb_pane_g2_ParamLimits

0xa7b7,	// (0x00075743) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0007a0ab) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0007a0ab) find_pinb_pane_g

0xa7c3,	// (0x0007574f) find_pinb_pane_t1_ParamLimits

0xa7d5,	// (0x00075761) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0007a0b0) find_pinb_pane_t_ParamLimits

0xa520,	// (0x000754ac) main_call3_pane

0x1f43,	// (0x0006cecf) cale_month_day_heading_pane_t1_ParamLimits

0x1f85,	// (0x0006cf11) cale_month_day_heading_pane_t2_ParamLimits

0x1fba,	// (0x0006cf46) cale_month_day_heading_pane_t3_ParamLimits

0x1fef,	// (0x0006cf7b) cale_month_day_heading_pane_t4_ParamLimits

0x202c,	// (0x0006cfb8) cale_month_day_heading_pane_t5_ParamLimits

0x2071,	// (0x0006cffd) cale_month_day_heading_pane_t6_ParamLimits

0x20b6,	// (0x0006d042) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007a232) cale_month_day_heading_pane_t_ParamLimits

0xad9d,	// (0x00075d29) smil_status_volume_pane

0x2de6,	// (0x0006dd72) postcard_address_pane_ParamLimits

0x2de6,	// (0x0006dd72) postcard_address_pane

0x2df8,	// (0x0006dd84) postcard_message_pane_ParamLimits

0x2df8,	// (0x0006dd84) postcard_message_pane

0x32ca,	// (0x0006e256) call2_cli_visual_pane_t1_ParamLimits

0x32ca,	// (0x0006e256) call2_cli_visual_pane_t1

0x3af7,	// (0x0006ea83) postcard_message_pane_t1_ParamLimits

0x3af7,	// (0x0006ea83) postcard_message_pane_t1

0x3ae0,	// (0x0006ea6c) postcard_address_pane_t1_ParamLimits

0x3ae0,	// (0x0006ea6c) postcard_address_pane_t1

0x3acc,	// (0x0006ea58) popup_call3_audio_in_window_ParamLimits

0x3acc,	// (0x0006ea58) popup_call3_audio_in_window

0x3957,	// (0x0006e8e3) bg_popup_call3_in_pane_ParamLimits

0x3957,	// (0x0006e8e3) bg_popup_call3_in_pane

0x39cd,	// (0x0006e959) popup_call3_audio_in_window_g1_ParamLimits

0x39cd,	// (0x0006e959) popup_call3_audio_in_window_g1

0x39ed,	// (0x0006e979) popup_call3_audio_in_window_g2_ParamLimits

0x39ed,	// (0x0006e979) popup_call3_audio_in_window_g2

0x3a0d,	// (0x0006e999) popup_call3_audio_in_window_g3_ParamLimits

0x3a0d,	// (0x0006e999) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0007a5b1) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0007a5b1) popup_call3_audio_in_window_g

0x3a3e,	// (0x0006e9ca) popup_call3_audio_in_window_t1_ParamLimits

0x3a3e,	// (0x0006e9ca) popup_call3_audio_in_window_t1

0x3a7c,	// (0x0006ea08) popup_call3_audio_in_window_t2_ParamLimits

0x3a7c,	// (0x0006ea08) popup_call3_audio_in_window_t2

0x3aba,	// (0x0006ea46) popup_call3_audio_in_window_t3_ParamLimits

0x3aba,	// (0x0006ea46) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0007a5ba) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0007a5ba) popup_call3_audio_in_window_t

0xaa41,	// (0x000759cd) bg_popup_call3_rect_pane

0xc696,	// (0x00077622) bg_popup_call3_rect_pane_g1

0xa93f,	// (0x000758cb) bg_popup_call3_rect_pane_g2

0xc69e,	// (0x0007762a) bg_popup_call3_rect_pane_g3

0xc6a6,	// (0x00077632) bg_popup_call3_rect_pane_g4

0xc6ae,	// (0x0007763a) bg_popup_call3_rect_pane_g5

0xc6b6,	// (0x00077642) bg_popup_call3_rect_pane_g6

0xc6be,	// (0x0007764a) bg_popup_call3_rect_pane_g7

0x2a23,	// (0x0006d9af) mup_visualizer_osc_pane

0xb541,	// (0x000764cd) mup_visualizer_spec_pane

0x3987,	// (0x0006e913) call3_video_qcif_pane_ParamLimits

0x3987,	// (0x0006e913) call3_video_qcif_pane

0x399a,	// (0x0006e926) call3_video_qcif_uncrop_pane_ParamLimits

0x399a,	// (0x0006e926) call3_video_qcif_uncrop_pane

0x39a8,	// (0x0006e934) call3_video_subqcif_pane_ParamLimits

0x39a8,	// (0x0006e934) call3_video_subqcif_pane

0x39bc,	// (0x0006e948) call3_video_subqcif_uncrop_pane_ParamLimits

0x39bc,	// (0x0006e948) call3_video_subqcif_uncrop_pane

0x3a2d,	// (0x0006e9b9) popup_call3_audio_in_window_g4_ParamLimits

0x3a2d,	// (0x0006e9b9) popup_call3_audio_in_window_g4

0x3946,	// (0x0006e8d2) mup_spec_half_pane

0x394f,	// (0x0006e8db) mup_spec_half_pane_cp

0xc93b,	// (0x000778c7) mup_osc_middle_pane

0xc944,	// (0x000778d0) mup_visualizer_osc_pane_g1

0x3926,	// (0x0006e8b2) mup_spec_bar_pane_ParamLimits

0x3926,	// (0x0006e8b2) mup_spec_bar_pane

0xc928,	// (0x000778b4) mup_spec_bar_pane_g1

0xc932,	// (0x000778be) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0007a5a5) mup_spec_bar_pane_g

0x0bac,	// (0x0006bb38) aid_cale_week_size_cell_pane_ParamLimits

0x0bc6,	// (0x0006bb52) bg_cale_heading_pane_ParamLimits

0xa99a,	// (0x00075926) bg_cale_pane_cp01_ParamLimits

0x0bde,	// (0x0006bb6a) cale_week_corner_pane_ParamLimits

0x0bfd,	// (0x0006bb89) cale_week_day_heading_pane_ParamLimits

0x0c1a,	// (0x0006bba6) cale_week_scroll_pane_g1_ParamLimits

0x0c2d,	// (0x0006bbb9) cale_week_scroll_pane_g2_ParamLimits

0x0c45,	// (0x0006bbd1) cale_week_scroll_pane_g3_ParamLimits

0x0c5d,	// (0x0006bbe9) cale_week_scroll_pane_g4_ParamLimits

0x0c75,	// (0x0006bc01) cale_week_scroll_pane_g5_ParamLimits

0x0c95,	// (0x0006bc21) cale_week_scroll_pane_g6_ParamLimits

0x0cb5,	// (0x0006bc41) cale_week_scroll_pane_g7_ParamLimits

0x0cd5,	// (0x0006bc61) cale_week_scroll_pane_g8_ParamLimits

0x0cf9,	// (0x0006bc85) cale_week_scroll_pane_g9_ParamLimits

0x0d11,	// (0x0006bc9d) cale_week_scroll_pane_g10_ParamLimits

0x0d29,	// (0x0006bcb5) cale_week_scroll_pane_g11_ParamLimits

0x0d41,	// (0x0006bccd) cale_week_scroll_pane_g12_ParamLimits

0x0d59,	// (0x0006bce5) cale_week_scroll_pane_g13_ParamLimits

0x0d59,	// (0x0006bce5) cale_week_scroll_pane_g14_ParamLimits

0x0d59,	// (0x0006bce5) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0007a13c) cale_week_scroll_pane_g_ParamLimits

0x0d95,	// (0x0006bd21) cale_week_time_pane_ParamLimits

0x0db9,	// (0x0006bd45) grid_cale_week_pane_ParamLimits

0xa9b7,	// (0x00075943) listscroll_cale_week_pane_t1

0xa9c9,	// (0x00075955) scroll_pane_cp08_ParamLimits

0x1abc,	// (0x0006ca48) cale_month_corner_pane_ParamLimits

0xad73,	// (0x00075cff) cale_month_pane_t1

0x1ed6,	// (0x0006ce62) cale_month_week_pane_ParamLimits

0x251d,	// (0x0006d4a9) popup_call_status_window_g1_ParamLimits

0x2531,	// (0x0006d4bd) popup_call_status_window_g2_ParamLimits

0x2545,	// (0x0006d4d1) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007a2e2) popup_call_status_window_g_ParamLimits

0xb123,	// (0x000760af) aid_call2_pane

0x2c93,	// (0x0006dc1f) msg_header_pane_g1

0x2de6,	// (0x0006dd72) postcard_address2_pane_ParamLimits

0x2de6,	// (0x0006dd72) postcard_address2_pane

0x2df8,	// (0x0006dd84) postcard_message2_pane_ParamLimits

0x2df8,	// (0x0006dd84) postcard_message2_pane

0x38d6,	// (0x0006e862) message2_row_pane_ParamLimits

0x38d6,	// (0x0006e862) message2_row_pane

0x38f3,	// (0x0006e87f) address2_row_pane_ParamLimits

0x38f3,	// (0x0006e87f) address2_row_pane

0xc8f6,	// (0x00077882) postcard_message2_row_pane_g1

0xc8fe,	// (0x0007788a) postcard_message2_row_pane_t1

0xc8f6,	// (0x00077882) address2_row_pane_g1

0xc8fe,	// (0x0007788a) address2_row_pane_t1

0x10f3,	// (0x0006c07f) aid_size_cell_vorec

0xa520,	// (0x000754ac) main_rss_pane

0x3906,	// (0x0006e892) rss_list_single_pane_ParamLimits

0x3906,	// (0x0006e892) rss_list_single_pane

0xc90c,	// (0x00077898) rss_list_single_pane_t1

0xc91a,	// (0x000778a6) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0007a5a0) rss_list_single_pane_t

0xa520,	// (0x000754ac) main_camera2_pane

0xa520,	// (0x000754ac) main_video2_pane

0x3b70,	// (0x0006eafc) cams_zoom_pane_cp2_ParamLimits

0x3b70,	// (0x0006eafc) cams_zoom_pane_cp2

0x3b90,	// (0x0006eb1c) image2_vga_pane_ParamLimits

0x3b90,	// (0x0006eb1c) image2_vga_pane

0x3be1,	// (0x0006eb6d) main_camera2_pane_g1_ParamLimits

0x3be1,	// (0x0006eb6d) main_camera2_pane_g1

0x3c01,	// (0x0006eb8d) main_camera2_pane_g2_ParamLimits

0x3c01,	// (0x0006eb8d) main_camera2_pane_g2

0x3c21,	// (0x0006ebad) main_camera2_pane_g3_ParamLimits

0x3c21,	// (0x0006ebad) main_camera2_pane_g3

0x3c41,	// (0x0006ebcd) main_camera2_pane_g4_ParamLimits

0x3c41,	// (0x0006ebcd) main_camera2_pane_g4

0x3c61,	// (0x0006ebed) main_camera2_pane_g5_ParamLimits

0x3c61,	// (0x0006ebed) main_camera2_pane_g5

0x3c81,	// (0x0006ec0d) main_camera2_pane_g6_ParamLimits

0x3c81,	// (0x0006ec0d) main_camera2_pane_g6

0x3ca1,	// (0x0006ec2d) main_camera2_pane_g7_ParamLimits

0x3ca1,	// (0x0006ec2d) main_camera2_pane_g7

0x3cc1,	// (0x0006ec4d) main_camera2_pane_g8_ParamLimits

0x3cc1,	// (0x0006ec4d) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0007a5c1) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0007a5c1) main_camera2_pane_g

0x3d01,	// (0x0006ec8d) main_camera2_pane_t1_ParamLimits

0x3d01,	// (0x0006ec8d) main_camera2_pane_t1

0x3d36,	// (0x0006ecc2) main_camera2_pane_t2_ParamLimits

0x3d36,	// (0x0006ecc2) main_camera2_pane_t2

0x3d5c,	// (0x0006ece8) main_camera2_pane_t3_ParamLimits

0x3d5c,	// (0x0006ece8) main_camera2_pane_t3

0x3dba,	// (0x0006ed46) main_camera2_pane_t4_ParamLimits

0x3dba,	// (0x0006ed46) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0007a5d4) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0007a5d4) main_camera2_pane_t

0x3e4c,	// (0x0006edd8) cams_zoom_pane_cp4_ParamLimits

0x3e4c,	// (0x0006edd8) cams_zoom_pane_cp4

0x3e62,	// (0x0006edee) image2_cif_pane_ParamLimits

0x3e62,	// (0x0006edee) image2_cif_pane

0x3e8d,	// (0x0006ee19) image2_subqcif_pane_ParamLimits

0x3e8d,	// (0x0006ee19) image2_subqcif_pane

0x3ea7,	// (0x0006ee33) main_video2_pane_g1_ParamLimits

0x3ea7,	// (0x0006ee33) main_video2_pane_g1

0x3ec1,	// (0x0006ee4d) main_video2_pane_g2_ParamLimits

0x3ec1,	// (0x0006ee4d) main_video2_pane_g2

0x3ed7,	// (0x0006ee63) main_video2_pane_g3_ParamLimits

0x3ed7,	// (0x0006ee63) main_video2_pane_g3

0x3eed,	// (0x0006ee79) main_video2_pane_g4_ParamLimits

0x3eed,	// (0x0006ee79) main_video2_pane_g4

0x3f03,	// (0x0006ee8f) main_video2_pane_g5_ParamLimits

0x3f03,	// (0x0006ee8f) main_video2_pane_g5

0x3f19,	// (0x0006eea5) main_video2_pane_g6_ParamLimits

0x3f19,	// (0x0006eea5) main_video2_pane_g6

0x0005,

0xf657,	// (0x0007a5e3) main_video2_pane_g_ParamLimits

0xf657,	// (0x0007a5e3) main_video2_pane_g

0x3f33,	// (0x0006eebf) main_video2_pane_t1_ParamLimits

0x3f33,	// (0x0006eebf) main_video2_pane_t1

0x3f57,	// (0x0006eee3) main_video2_pane_t2_ParamLimits

0x3f57,	// (0x0006eee3) main_video2_pane_t2

0x3fa5,	// (0x0006ef31) main_video2_pane_t3_ParamLimits

0x3fa5,	// (0x0006ef31) main_video2_pane_t3

0x0002,

0xf664,	// (0x0007a5f0) main_video2_pane_t_ParamLimits

0xf664,	// (0x0007a5f0) main_video2_pane_t

0x3418,	// (0x0006e3a4) call_muted_g2

0x0001,

0xf606,	// (0x0007a592) call_muted_g

0xa520,	// (0x000754ac) main_mup2_pane

0x3fed,	// (0x0006ef79) main_mup2_pane_g1_ParamLimits

0x3fed,	// (0x0006ef79) main_mup2_pane_g1

0x3ff9,	// (0x0006ef85) main_mup2_pane_g2_ParamLimits

0x3ff9,	// (0x0006ef85) main_mup2_pane_g2

0x9722,	// (0x000746ae) main_mup_pane_g13_cp1

0x972a,	// (0x000746b6) mup_volume_pane_cp1

0x4015,	// (0x0006efa1) main_mup2_pane_g4_ParamLimits

0x4015,	// (0x0006efa1) main_mup2_pane_g4

0x4027,	// (0x0006efb3) main_mup2_pane_g5_ParamLimits

0x4027,	// (0x0006efb3) main_mup2_pane_g5

0x4039,	// (0x0006efc5) main_mup2_pane_g6_ParamLimits

0x4039,	// (0x0006efc5) main_mup2_pane_g6

0x404b,	// (0x0006efd7) main_mup2_pane_g7_ParamLimits

0x404b,	// (0x0006efd7) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0007a5f7) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0007a5f7) main_mup2_pane_g

0x4063,	// (0x0006efef) main_mup2_pane_t1_ParamLimits

0x4063,	// (0x0006efef) main_mup2_pane_t1

0x4079,	// (0x0006f005) main_mup2_pane_t2_ParamLimits

0x4079,	// (0x0006f005) main_mup2_pane_t2

0x408f,	// (0x0006f01b) main_mup2_pane_t3_ParamLimits

0x408f,	// (0x0006f01b) main_mup2_pane_t3

0x40a5,	// (0x0006f031) main_mup2_pane_t4_ParamLimits

0x40a5,	// (0x0006f031) main_mup2_pane_t4

0x40bd,	// (0x0006f049) main_mup2_pane_t5_ParamLimits

0x40bd,	// (0x0006f049) main_mup2_pane_t5

0x40d5,	// (0x0006f061) main_mup2_pane_t6_ParamLimits

0x40d5,	// (0x0006f061) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0007a606) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0007a606) main_mup2_pane_t

0x4105,	// (0x0006f091) mup2_visualizer_pane_ParamLimits

0x4105,	// (0x0006f091) mup2_visualizer_pane

0x4133,	// (0x0006f0bf) mup_progress_pane_cp_ParamLimits

0x4133,	// (0x0006f0bf) mup_progress_pane_cp

0x970d,	// (0x00074699) mup_volume_pane_cp_ParamLimits

0x970d,	// (0x00074699) mup_volume_pane_cp

0x4147,	// (0x0006f0d3) mup2_visualizer_pane_g1_ParamLimits

0x4147,	// (0x0006f0d3) mup2_visualizer_pane_g1

0xc97b,	// (0x00077907) mup2_visualizer_pane_g2_ParamLimits

0xc97b,	// (0x00077907) mup2_visualizer_pane_g2

0x415e,	// (0x0006f0ea) mup2_visualizer_pane_g3_ParamLimits

0x415e,	// (0x0006f0ea) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0007a613) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0007a613) mup2_visualizer_pane_g

0xb768,	// (0x000766f4) aid_size_cell_fmradio

0x35ca,	// (0x0006e556) aid_height_parent_landcape

0xabd1,	// (0x00075b5d) wml_content_pane_cp

0xabd9,	// (0x00075b65) wml_tabs_pane

0xabe2,	// (0x00075b6e) popup_wml_miniature_window

0xabea,	// (0x00075b76) scroll_pane_cp021

0xabfe,	// (0x00075b8a) wml_content_pane_comp8

0xa520,	// (0x000754ac) bg_popup_sub_pane_cp05

0xc999,	// (0x00077925) popup_wml_miniature_window_g1

0xc9a1,	// (0x0007792d) wml_miniature_view_pane

0x416a,	// (0x0006f0f6) aid_size_wml_view

0x4172,	// (0x0006f0fe) wml_miniature_view_pane_g1

0x417b,	// (0x0006f107) wml_miniature_view_pane_g2

0x4184,	// (0x0006f110) wml_miniature_view_pane_g3

0x418c,	// (0x0006f118) wml_miniature_view_pane_g4

0x4194,	// (0x0006f120) wml_miniature_view_pane_g5

0x419c,	// (0x0006f128) wml_miniature_view_pane_g6

0x41a4,	// (0x0006f130) wml_miniature_view_pane_g7

0x41ac,	// (0x0006f138) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0007a61a) wml_miniature_view_pane_g

0xc9a9,	// (0x00077935) background_graphic_ParamLimits

0xc9a9,	// (0x00077935) background_graphic

0xc9b5,	// (0x00077941) wml_tabs_2_pane

0xc9be,	// (0x0007794a) wml_tabs_3_pane_ParamLimits

0xc9be,	// (0x0007794a) wml_tabs_3_pane

0xc9d0,	// (0x0007795c) wml_tabs_4_pane_ParamLimits

0xc9d0,	// (0x0007795c) wml_tabs_4_pane

0xc9e6,	// (0x00077972) wml_tabs_5_pane_ParamLimits

0xc9e6,	// (0x00077972) wml_tabs_5_pane

0xca00,	// (0x0007798c) wml_tabs_pane_g2_ParamLimits

0xca00,	// (0x0007798c) wml_tabs_pane_g2

0xca14,	// (0x000779a0) wml_tabs_pane_g3_ParamLimits

0xca14,	// (0x000779a0) wml_tabs_pane_g3

0x41b4,	// (0x0006f140) wml_tabs_2_active_pane_ParamLimits

0x41b4,	// (0x0006f140) wml_tabs_2_active_pane

0x41c8,	// (0x0006f154) wml_tabs_2_passive_pane_ParamLimits

0x41c8,	// (0x0006f154) wml_tabs_2_passive_pane

0x41dc,	// (0x0006f168) wml_tabs_3_active_pane_cp_ParamLimits

0x41dc,	// (0x0006f168) wml_tabs_3_active_pane_cp

0x41f1,	// (0x0006f17d) wml_tabs_3_passive_pane_ParamLimits

0x41f1,	// (0x0006f17d) wml_tabs_3_passive_pane

0x4204,	// (0x0006f190) wml_tabs_3_passive_pane_cp_ParamLimits

0x4204,	// (0x0006f190) wml_tabs_3_passive_pane_cp

0x421b,	// (0x0006f1a7) tabs_4_active_pane

0x4223,	// (0x0006f1af) tabs_4_passive_pane

0x422d,	// (0x0006f1b9) tabs_4_passive_pane_cp

0x4235,	// (0x0006f1c1) tabs_4_passive_pane_cp2

0x32e5,	// (0x0006e271) aid_height_text

0x29f5,	// (0x0006d981) mup_volume_cont_pane_ParamLimits

0x29f5,	// (0x0006d981) mup_volume_cont_pane

0x07c3,	// (0x0006b74f) aid_size_cell_pinb

0x07cd,	// (0x0006b759) aid_size_list_pinb

0x411f,	// (0x0006f0ab) mup2_volume_cont_pane_ParamLimits

0x411f,	// (0x0006f0ab) mup2_volume_cont_pane

0x96f9,	// (0x00074685) mup2_volume_cont_pane_g1_ParamLimits

0x96f9,	// (0x00074685) mup2_volume_cont_pane_g1

0x0485,	// (0x0006b411) aid_size_cell_touch_ParamLimits

0x0485,	// (0x0006b411) aid_size_cell_touch

0x06b2,	// (0x0006b63e) touch_pane_ParamLimits

0x06b2,	// (0x0006b63e) touch_pane

0x944a,	// (0x000743d6) main_rss2_pane

0xca31,	// (0x000779bd) listscroll_rss2_pane

0xca3a,	// (0x000779c6) rss2_navigation_pane

0xca42,	// (0x000779ce) list_rss2_pane

0xb248,	// (0x000761d4) scroll_pane_cp22

0xca4a,	// (0x000779d6) rss2_navigation_pane_g1

0xca53,	// (0x000779df) rss2_navigation_pane_g2

0xca5b,	// (0x000779e7) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0007a62b) rss2_navigation_pane_g

0xca63,	// (0x000779ef) rss2_navigation_pane_t1

0x423f,	// (0x0006f1cb) rss2_list_single_pane_ParamLimits

0x423f,	// (0x0006f1cb) rss2_list_single_pane

0xca71,	// (0x000779fd) rss2_list_single_pane_t2

0xca7f,	// (0x00077a0b) rss2_list_single_pane_t3_ParamLimits

0xca7f,	// (0x00077a0b) rss2_list_single_pane_t3

0xca9c,	// (0x00077a28) rss2_list_single_pane_t4

0x2328,	// (0x0006d2b4) smil_status_pane_g1

0x943c,	// (0x000743c8) main_image2_pane_ParamLimits

0x943c,	// (0x000743c8) main_image2_pane

0x3ce1,	// (0x0006ec6d) main_camera2_pane_g9_ParamLimits

0x3ce1,	// (0x0006ec6d) main_camera2_pane_g9

0x3e0f,	// (0x0006ed9b) main_camera2_pane_t5_ParamLimits

0x3e0f,	// (0x0006ed9b) main_camera2_pane_t5

0x96c9,	// (0x00074655) main_camera2_pane_t6_ParamLimits

0x96c9,	// (0x00074655) main_camera2_pane_t6

0x4255,	// (0x0006f1e1) main_image2_pane_g1_ParamLimits

0x4255,	// (0x0006f1e1) main_image2_pane_g1

0x3020,	// (0x0006dfac) smil2_video_pane_ParamLimits

0x3020,	// (0x0006dfac) smil2_video_pane

0x93f2,	// (0x0007437e) aid_zoom_text_primary_cp

0x9432,	// (0x000743be) popup_preview_fixed_window

0xab3a,	// (0x00075ac6) im_reading_pane_g1

0x3b58,	// (0x0006eae4) cams2_bc_adjust_pane_cp_ParamLimits

0x3b58,	// (0x0006eae4) cams2_bc_adjust_pane_cp

0x3e3e,	// (0x0006edca) cams2_bc_adjust_pane_ParamLimits

0x3e3e,	// (0x0006edca) cams2_bc_adjust_pane

0xd4dc,	// (0x00078468) cams2_bc_adjust_pane_g1

0x9732,	// (0x000746be) cams2_slider_pane

0x973b,	// (0x000746c7) cams2_slider_pane_g1

0x9744,	// (0x000746d0) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0007a632) cams2_slider_pane_g

0x08b5,	// (0x0006b841) calc_display_pane_ParamLimits

0x08dd,	// (0x0006b869) calc_paper_pane_ParamLimits

0x0900,	// (0x0006b88c) grid_calc_pane_ParamLimits

0x95ee,	// (0x0007457a) popup_clock_digital_window_t1_ParamLimits

0xb705,	// (0x00076691) main_image_pane_t1

0x0897,	// (0x0006b823) aid_size_cell_calc_ParamLimits

0x0897,	// (0x0006b823) aid_size_cell_calc

0x3622,	// (0x0006e5ae) popup_blid_sat_info2_window_ParamLimits

0x3622,	// (0x0006e5ae) popup_blid_sat_info2_window

0xcab2,	// (0x00077a3e) aid_size_cell_blid

0xcaba,	// (0x00077a46) bg_popup_window_pane_cp07

0xcadd,	// (0x00077a69) grid_popup_blid_pane

0xcae7,	// (0x00077a73) heading_pane_cp05_ParamLimits

0xcae7,	// (0x00077a73) heading_pane_cp05

0xcbb1,	// (0x00077b3d) cell_popup_blid_pane_ParamLimits

0xcbb1,	// (0x00077b3d) cell_popup_blid_pane

0xcbd5,	// (0x00077b61) cell_popup_blid_pane_g1

0xcbdd,	// (0x00077b69) cell_popup_blid_pane_t1

0x40ef,	// (0x0006f07b) mup2_indicator_pane_ParamLimits

0x40ef,	// (0x0006f07b) mup2_indicator_pane

0xaa41,	// (0x000759cd) mup2_visualizer_osc_pane

0xc987,	// (0x00077913) mup2_visualizer_spec_pane_ParamLimits

0xc987,	// (0x00077913) mup2_visualizer_spec_pane

0x426b,	// (0x0006f1f7) mup2_spec_half_pane

0x4274,	// (0x0006f200) mup2_spec_half_pane_cp

0x427c,	// (0x0006f208) mup2_spec_bar_pane_ParamLimits

0x427c,	// (0x0006f208) mup2_spec_bar_pane

0xc928,	// (0x000778b4) mup2_spec_bar_pane_g1

0xc932,	// (0x000778be) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0007a5a5) mup2_spec_bar_pane_g

0x429c,	// (0x0006f228) mup2_osc_middle_pane

0xc944,	// (0x000778d0) mup2_visualizer_osc_pane_g1

0x9474,	// (0x00074400) popup_number_entry_window_t1_ParamLimits

0x9487,	// (0x00074413) popup_number_entry_window_t2_ParamLimits

0x9499,	// (0x00074425) popup_number_entry_window_t3_ParamLimits

0x0704,	// (0x0006b690) popup_number_entry_window_t5_ParamLimits

0x0704,	// (0x0006b690) popup_number_entry_window_t5

0xf0ca,	// (0x0007a056) popup_number_entry_window_t_ParamLimits

0x94ab,	// (0x00074437) text_title_cp2_ParamLimits

0x962d,	// (0x000745b9) aid_hotspot_pointer_text2_pane

0x9647,	// (0x000745d3) main_viewer_pane_g9_ParamLimits

0x9647,	// (0x000745d3) main_viewer_pane_g9

0xad73,	// (0x00075cff) cale_month_pane_t1_ParamLimits

0xadb0,	// (0x00075d3c) bg_cale_pane_ParamLimits

0xadc8,	// (0x00075d54) list_cale_pane_ParamLimits

0xadd9,	// (0x00075d65) listscroll_cale_day_pane_t1

0xadeb,	// (0x00075d77) scroll_pane_cp09_ParamLimits

0x2a2b,	// (0x0006d9b7) main_mup_eq_pane_t1_ParamLimits

0x2a2b,	// (0x0006d9b7) main_mup_eq_pane_t1

0x2a45,	// (0x0006d9d1) main_mup_eq_pane_t2_ParamLimits

0x2a45,	// (0x0006d9d1) main_mup_eq_pane_t2

0x2a5f,	// (0x0006d9eb) main_mup_eq_pane_t3_ParamLimits

0x2a5f,	// (0x0006d9eb) main_mup_eq_pane_t3

0x2a7b,	// (0x0006da07) main_mup_eq_pane_t4_ParamLimits

0x2a7b,	// (0x0006da07) main_mup_eq_pane_t4

0x2a97,	// (0x0006da23) main_mup_eq_pane_t5_ParamLimits

0x2a97,	// (0x0006da23) main_mup_eq_pane_t5

0x2ab3,	// (0x0006da3f) main_mup_eq_pane_t6_ParamLimits

0x2ab3,	// (0x0006da3f) main_mup_eq_pane_t6

0x2ac7,	// (0x0006da53) main_mup_eq_pane_t7_ParamLimits

0x2ac7,	// (0x0006da53) main_mup_eq_pane_t7

0x2adb,	// (0x0006da67) main_mup_eq_pane_t8_ParamLimits

0x2adb,	// (0x0006da67) main_mup_eq_pane_t8

0x2aef,	// (0x0006da7b) main_mup_eq_pane_t9_ParamLimits

0x2aef,	// (0x0006da7b) main_mup_eq_pane_t9

0x2b09,	// (0x0006da95) main_mup_eq_pane_t10_ParamLimits

0x2b09,	// (0x0006da95) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007a3e1) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007a3e1) main_mup_eq_pane_t

0x2bb8,	// (0x0006db44) mup_equalizer_pane_cp5_ParamLimits

0x2bcc,	// (0x0006db58) mup_equalizer_pane_cp6_ParamLimits

0x2be0,	// (0x0006db6c) mup_equalizer_pane_cp7_ParamLimits

0x944a,	// (0x000743d6) main_gallery_pane

0xc94d,	// (0x000778d9) smil2_volume_pane

0xc955,	// (0x000778e1) smil_status_volume_pane_g1_ParamLimits

0xc968,	// (0x000778f4) smil_status_volume_pane_g2_ParamLimits

0x96a7,	// (0x00074633) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0007a5aa) smil_status_volume_pane_g_ParamLimits

0xcaba,	// (0x00077a46) bg_popup_window_pane_cp07_ParamLimits

0xcac8,	// (0x00077a54) blid_firmament_pane

0x42a5,	// (0x0006f231) aid_size_cell_gallery_ParamLimits

0x42a5,	// (0x0006f231) aid_size_cell_gallery

0x42bb,	// (0x0006f247) grid_gallery_pane_ParamLimits

0x42bb,	// (0x0006f247) grid_gallery_pane

0x42d4,	// (0x0006f260) cell_gallery_pane_ParamLimits

0x42d4,	// (0x0006f260) cell_gallery_pane

0xcbeb,	// (0x00077b77) bg_cell_gallery_focus_pane_ParamLimits

0xcbeb,	// (0x00077b77) bg_cell_gallery_focus_pane

0xcbfd,	// (0x00077b89) cell_gallery_pane_g1_ParamLimits

0xcbfd,	// (0x00077b89) cell_gallery_pane_g1

0x431d,	// (0x0006f2a9) cell_gallery_pane_g2_ParamLimits

0x431d,	// (0x0006f2a9) cell_gallery_pane_g2

0x432a,	// (0x0006f2b6) cell_gallery_pane_g3_ParamLimits

0x432a,	// (0x0006f2b6) cell_gallery_pane_g3

0xcc09,	// (0x00077b95) cell_gallery_pane_g4_ParamLimits

0xcc09,	// (0x00077b95) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0007a658) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0007a658) cell_gallery_pane_g

0xcc15,	// (0x00077ba1) bg_cell_gallery_focus_pane_g1

0xcc1d,	// (0x00077ba9) bg_cell_gallery_focus_pane_g2

0xcc25,	// (0x00077bb1) bg_cell_gallery_focus_pane_g3

0xcc2d,	// (0x00077bb9) bg_cell_gallery_focus_pane_g4

0xcc35,	// (0x00077bc1) bg_cell_gallery_focus_pane_g5

0xcc3d,	// (0x00077bc9) bg_cell_gallery_focus_pane_g6

0xcc45,	// (0x00077bd1) bg_cell_gallery_focus_pane_g7

0xcc4d,	// (0x00077bd9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0007a661) bg_cell_gallery_focus_pane_g

0xcc55,	// (0x00077be1) aid_firma_cardinal

0xcc69,	// (0x00077bf5) blid_firmament_pane_t1

0xcc80,	// (0x00077c0c) blid_firmament_pane_t2

0xcc97,	// (0x00077c23) blid_firmament_pane_t3

0xccae,	// (0x00077c3a) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0007a672) blid_firmament_pane_t

0xccd1,	// (0x00077c5d) blid_sat_info_pane

0xcce1,	// (0x00077c6d) blid_sat_info_pane_g1

0xcce1,	// (0x00077c6d) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0007a67b) blid_sat_info_pane_g

0xcceb,	// (0x00077c77) blid_sat_info_pane_t1

0xccf9,	// (0x00077c85) smil2_volume_content_pane

0xcd02,	// (0x00077c8e) smil2_volume_pane_g1

0xcd0a,	// (0x00077c96) smil2_volume_content_pane_g1

0xcd13,	// (0x00077c9f) smil2_volume_content_pane_g2

0xcd1c,	// (0x00077ca8) smil2_volume_content_pane_g3

0xcd25,	// (0x00077cb1) smil2_volume_content_pane_g4

0xcd2e,	// (0x00077cba) smil2_volume_content_pane_g5

0xcd37,	// (0x00077cc3) smil2_volume_content_pane_g6

0xcd40,	// (0x00077ccc) smil2_volume_content_pane_g7

0xcd49,	// (0x00077cd5) smil2_volume_content_pane_g8

0xcd52,	// (0x00077cde) smil2_volume_content_pane_g9

0xcd5b,	// (0x00077ce7) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0007a680) smil2_volume_content_pane_g

0x0e6d,	// (0x0006bdf9) cale_week_day_heading_pane_t1_ParamLimits

0x0e97,	// (0x0006be23) cale_week_day_heading_pane_t2_ParamLimits

0x0ec6,	// (0x0006be52) cale_week_day_heading_pane_t3_ParamLimits

0x0ef5,	// (0x0006be81) cale_week_day_heading_pane_t4_ParamLimits

0x0f24,	// (0x0006beb0) cale_week_day_heading_pane_t5_ParamLimits

0x0f5b,	// (0x0006bee7) cale_week_day_heading_pane_t6_ParamLimits

0x0f92,	// (0x0006bf1e) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0007a15d) cale_week_day_heading_pane_t_ParamLimits

0xa9e6,	// (0x00075972) bg_cale_side_pane_ParamLimits

0x0fbc,	// (0x0006bf48) cale_week_time_pane_t1_ParamLimits

0x0fd6,	// (0x0006bf62) cale_week_time_pane_t2_ParamLimits

0x0ff0,	// (0x0006bf7c) cale_week_time_pane_t3_ParamLimits

0x100a,	// (0x0006bf96) cale_week_time_pane_t4_ParamLimits

0x1024,	// (0x0006bfb0) cale_week_time_pane_t5_ParamLimits

0x103e,	// (0x0006bfca) cale_week_time_pane_t6_ParamLimits

0x1058,	// (0x0006bfe4) cale_week_time_pane_t7_ParamLimits

0x1072,	// (0x0006bffe) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0007a16c) cale_week_time_pane_t_ParamLimits

0x1092,	// (0x0006c01e) cell_cale_week_pane_g2_ParamLimits

0xa9e6,	// (0x00075972) bg_cale_side_pane_cp01_ParamLimits

0x2103,	// (0x0006d08f) cale_month_week_pane_t1_ParamLimits

0x211c,	// (0x0006d0a8) cale_month_week_pane_t2_ParamLimits

0x2135,	// (0x0006d0c1) cale_month_week_pane_t3_ParamLimits

0x214e,	// (0x0006d0da) cale_month_week_pane_t4_ParamLimits

0x2167,	// (0x0006d0f3) cale_month_week_pane_t5_ParamLimits

0x2180,	// (0x0006d10c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007a241) cale_month_week_pane_t_ParamLimits

0x956e,	// (0x000744fa) cell_cale_month_pane_g1_ParamLimits

0x944a,	// (0x000743d6) main_cale_event_viewer_pane

0x93c4,	// (0x00074350) listscroll_cale_event_viewer_pane

0xcd64,	// (0x00077cf0) list_cale_ev_pane

0xcd6c,	// (0x00077cf8) scroll_pane_cp023

0xcd78,	// (0x00077d04) field_cale_ev_pane_ParamLimits

0xcd78,	// (0x00077d04) field_cale_ev_pane

0xcd96,	// (0x00077d22) field_cale_ev_content_pane_ParamLimits

0xcd96,	// (0x00077d22) field_cale_ev_content_pane

0xcda2,	// (0x00077d2e) field_cale_ev_pane_g1_ParamLimits

0xcda2,	// (0x00077d2e) field_cale_ev_pane_g1

0xcdae,	// (0x00077d3a) field_cale_ev_pane_g2_ParamLimits

0xcdae,	// (0x00077d3a) field_cale_ev_pane_g2

0xcdc6,	// (0x00077d52) field_cale_ev_pane_g3_ParamLimits

0xcdc6,	// (0x00077d52) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0007a695) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0007a695) field_cale_ev_pane_g

0xcdde,	// (0x00077d6a) field_cale_ev_pane_t1_ParamLimits

0xcdde,	// (0x00077d6a) field_cale_ev_pane_t1

0xa959,	// (0x000758e5) field_cale_ev_content_pane_t1_ParamLimits

0xa959,	// (0x000758e5) field_cale_ev_content_pane_t1

0xb5eb,	// (0x00076577) bg_button_pane_cp01

0x0b9a,	// (0x0006bb26) listscroll_cale_week_pane_ParamLimits

0xa991,	// (0x0007591d) popup_toolbar_window_cp01

0xa9b7,	// (0x00075943) listscroll_cale_week_pane_t1_ParamLimits

0x0b9a,	// (0x0006bb26) listscroll_cale_day_pane_ParamLimits

0xa991,	// (0x0007591d) popup_toolbar_window_cp02

0xadd9,	// (0x00075d65) listscroll_cale_day_pane_t1_ParamLimits

0x35e8,	// (0x0006e574) main_cale_month_pane_ParamLimits

0x9692,	// (0x0007461e) popup_toolbar_window_cp03_ParamLimits

0x9692,	// (0x0007461e) popup_toolbar_window_cp03

0x2ee8,	// (0x0006de74) main_image_pane_g2_ParamLimits

0x2ee8,	// (0x0006de74) main_image_pane_g2

0x2ef9,	// (0x0006de85) main_image_pane_g3_ParamLimits

0x2ef9,	// (0x0006de85) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007a473) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007a473) main_image_pane_g

0xb705,	// (0x00076691) main_image_pane_t1_ParamLimits

0x2f0a,	// (0x0006de96) main_image_pane_t2_ParamLimits

0x2f0a,	// (0x0006de96) main_image_pane_t2

0x2f1c,	// (0x0006dea8) main_image_pane_t3_ParamLimits

0x2f1c,	// (0x0006dea8) main_image_pane_t3

0x2f44,	// (0x0006ded0) main_image_pane_t4_ParamLimits

0x2f44,	// (0x0006ded0) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007a47a) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007a47a) main_image_pane_t

0x2f64,	// (0x0006def0) popup_image_details_window_cp01

0x2f6e,	// (0x0006defa) popup_toobar_trans_pane_cp01_ParamLimits

0x2f6e,	// (0x0006defa) popup_toobar_trans_pane_cp01

0x36f3,	// (0x0006e67f) popup_image_details_window_ParamLimits

0x36f3,	// (0x0006e67f) popup_image_details_window

0x9665,	// (0x000745f1) popup_image_focus_window

0x3b12,	// (0x0006ea9e) camera2_autofocus_pane_ParamLimits

0x3b12,	// (0x0006ea9e) camera2_autofocus_pane

0x93c4,	// (0x00074350) bg_popup_sub_pane_cp06

0xcdf5,	// (0x00077d81) popup_image_focus_window_g1

0xcdfd,	// (0x00077d89) popup_image_focus_window_g2

0xce05,	// (0x00077d91) popup_image_focus_window_g3

0xce0d,	// (0x00077d99) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0007a69c) popup_image_focus_window_g

0xce15,	// (0x00077da1) popup_image_focus_window_t1

0xce23,	// (0x00077daf) popup_image_focus_window_t2

0xce33,	// (0x00077dbf) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0007a6a5) popup_image_focus_window_t

0xce41,	// (0x00077dcd) camera2_autofocus_pane_g1

0x9f3d,	// (0x00074ec9) bg_tb_trans_pane_cp01

0xce4f,	// (0x00077ddb) popup_image_details_window_g1

0xce62,	// (0x00077dee) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0007a6b7) popup_image_details_window_g

0xce8b,	// (0x00077e17) popup_image_details_window_t1

0xce9d,	// (0x00077e29) popup_image_details_window_t2

0xceb6,	// (0x00077e42) popup_image_details_window_t3

0xceca,	// (0x00077e56) popup_image_details_window_t4

0xcee5,	// (0x00077e71) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0007a6be) popup_image_details_window_t

0xa838,	// (0x000757c4) bg_calc_paper_pane_ParamLimits

0x944a,	// (0x000743d6) grid_highlight_pane_cp013

0x94d4,	// (0x00074460) list_calc_pane_ParamLimits

0x94e6,	// (0x00074472) scroll_pane_cp024

0xa84c,	// (0x000757d8) bg_calc_display_pane_ParamLimits

0x09fe,	// (0x0006b98a) calc_display_pane_t1_ParamLimits

0x0a10,	// (0x0006b99c) calc_display_pane_t2_ParamLimits

0x94ee,	// (0x0007447a) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0007a0dd) calc_display_pane_t_ParamLimits

0x0ad0,	// (0x0006ba5c) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0007a0fa) cell_calc_pane_g

0x0ad9,	// (0x0006ba65) cell_calc_pane_t1

0xa8ab,	// (0x00075837) grid_highlight_pane_cp02_ParamLimits

0xa8c1,	// (0x0007584d) toolbar_button_pane_cp01_ParamLimits

0xa8c1,	// (0x0007584d) toolbar_button_pane_cp01

0xb74a,	// (0x000766d6) temp_image_control_pane_ParamLimits

0xb74a,	// (0x000766d6) temp_image_control_pane

0x943c,	// (0x000743c8) main_mp3_pane

0xceff,	// (0x00077e8b) temp_image_control_pane_g1_ParamLimits

0xceff,	// (0x00077e8b) temp_image_control_pane_g1

0xcf0d,	// (0x00077e99) temp_image_control_pane_g2_ParamLimits

0xcf0d,	// (0x00077e99) temp_image_control_pane_g2

0xcf1f,	// (0x00077eab) temp_image_control_pane_g3_ParamLimits

0xcf1f,	// (0x00077eab) temp_image_control_pane_g3

0x4367,	// (0x0006f2f3) temp_image_control_pane_g4_ParamLimits

0x4367,	// (0x0006f2f3) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0007a6c9) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0007a6c9) temp_image_control_pane_g

0xceff,	// (0x00077e8b) main_mp3_pane_g1

0x437a,	// (0x0006f306) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0007a6d2) main_mp3_pane_g

0xcf62,	// (0x00077eee) main_mp3_pane_t1

0xaa49,	// (0x000759d5) main_camera_pane_g8_ParamLimits

0xaa49,	// (0x000759d5) main_camera_pane_g8

0x1396,	// (0x0006c322) main_video_pane_g7_ParamLimits

0x1396,	// (0x0006c322) main_video_pane_g7

0x96e7,	// (0x00074673) main_camera2_pane_t7_ParamLimits

0x96e7,	// (0x00074673) main_camera2_pane_t7

0xab91,	// (0x00075b1d) scroll_pane_cp025_ParamLimits

0xab91,	// (0x00075b1d) scroll_pane_cp025

0xaba5,	// (0x00075b31) scroll_pane_cp026_ParamLimits

0xaba5,	// (0x00075b31) scroll_pane_cp026

0xabb4,	// (0x00075b40) wml_content_pane_ParamLimits

0x944a,	// (0x000743d6) main_touch_calib_pane

0x444e,	// (0x0006f3da) main_touch_calib_pane_g1

0x4460,	// (0x0006f3ec) main_touch_calib_pane_g2

0x4472,	// (0x0006f3fe) main_touch_calib_pane_g3

0x4484,	// (0x0006f410) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0007a6f0) main_touch_calib_pane_g

0x4496,	// (0x0006f422) main_touch_calib_pane_t1

0x44b0,	// (0x0006f43c) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0007a6f9) main_touch_calib_pane_t

0xb317,	// (0x000762a3) mup_progress_pane_cp02

0xb34c,	// (0x000762d8) navi_pane_g1

0xb407,	// (0x00076393) navi_pane_mp_t3

0x943c,	// (0x000743c8) main_mp3_pane_ParamLimits

0x387e,	// (0x0006e80a) navi_pane_ParamLimits

0xceff,	// (0x00077e8b) main_mp3_pane_g1_ParamLimits

0x437a,	// (0x0006f306) main_mp3_pane_g2_ParamLimits

0x4388,	// (0x0006f314) main_mp3_pane_g3_ParamLimits

0x4388,	// (0x0006f314) main_mp3_pane_g3

0x4396,	// (0x0006f322) main_mp3_pane_g4_ParamLimits

0x4396,	// (0x0006f322) main_mp3_pane_g4

0xcf2f,	// (0x00077ebb) main_mp3_pane_g5_ParamLimits

0xcf2f,	// (0x00077ebb) main_mp3_pane_g5

0xcf3d,	// (0x00077ec9) main_mp3_pane_g6_ParamLimits

0xcf3d,	// (0x00077ec9) main_mp3_pane_g6

0xcf4a,	// (0x00077ed6) main_mp3_pane_g7_ParamLimits

0xcf4a,	// (0x00077ed6) main_mp3_pane_g7

0xcf56,	// (0x00077ee2) main_mp3_pane_g8_ParamLimits

0xcf56,	// (0x00077ee2) main_mp3_pane_g8

0xf746,	// (0x0007a6d2) main_mp3_pane_g_ParamLimits

0x43a2,	// (0x0006f32e) main_mp3_pane_t2

0x43b0,	// (0x0006f33c) main_mp3_pane_t3

0xcf70,	// (0x00077efc) main_mp3_pane_t4

0xcf7e,	// (0x00077f0a) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0007a6e3) main_mp3_pane_t

0xcf8c,	// (0x00077f18) mup_progress_pane_cp01

0x93f2,	// (0x0007437e) aid_zoom_text_secondary2

0xcd64,	// (0x00077cf0) list_cale_ev2_pane

0xcd6c,	// (0x00077cf8) scroll_pane_cp023_ParamLimits

0x4506,	// (0x0006f492) field_cale_ev2_pane_ParamLimits

0x4506,	// (0x0006f492) field_cale_ev2_pane

0x9f4b,	// (0x00074ed7) field_cale_ev2_pane_g1_ParamLimits

0x9f4b,	// (0x00074ed7) field_cale_ev2_pane_g1

0x9f57,	// (0x00074ee3) field_cale_ev2_pane_g2_ParamLimits

0x9f57,	// (0x00074ee3) field_cale_ev2_pane_g2

0x9f6f,	// (0x00074efb) field_cale_ev2_pane_g3_ParamLimits

0x9f6f,	// (0x00074efb) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0007a704) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0007a704) field_cale_ev2_pane_g

0x9f93,	// (0x00074f1f) field_cale_ev2_pane_t1_ParamLimits

0x9f93,	// (0x00074f1f) field_cale_ev2_pane_t1

0x9faa,	// (0x00074f36) field_cale_ev2_pane_t2_ParamLimits

0x9faa,	// (0x00074f36) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0007a70d) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0007a70d) field_cale_ev2_pane_t

0x2d9c,	// (0x0006dd28) main_postcard_pane_g5_ParamLimits

0x2d9c,	// (0x0006dd28) main_postcard_pane_g5

0x2db2,	// (0x0006dd3e) main_postcard_pane_g6_ParamLimits

0x2db2,	// (0x0006dd3e) main_postcard_pane_g6

0x115c,	// (0x0006c0e8) camera2_autofocus_pane_cp_ParamLimits

0x115c,	// (0x0006c0e8) camera2_autofocus_pane_cp

0x943c,	// (0x000743c8) main_mup3_pane

0x4547,	// (0x0006f4d3) main_mup3_pane_g1_ParamLimits

0x4547,	// (0x0006f4d3) main_mup3_pane_g1

0x4569,	// (0x0006f4f5) main_mup3_pane_g2_ParamLimits

0x4569,	// (0x0006f4f5) main_mup3_pane_g2

0x45e9,	// (0x0006f575) main_mup3_pane_g3_ParamLimits

0x45e9,	// (0x0006f575) main_mup3_pane_g3

0x462f,	// (0x0006f5bb) main_mup3_pane_g4_ParamLimits

0x462f,	// (0x0006f5bb) main_mup3_pane_g4

0x4675,	// (0x0006f601) main_mup3_pane_g5_ParamLimits

0x4675,	// (0x0006f601) main_mup3_pane_g5

0x46bb,	// (0x0006f647) main_mup3_pane_g6_ParamLimits

0x46bb,	// (0x0006f647) main_mup3_pane_g6

0xcf94,	// (0x00077f20) main_mup3_pane_g7_ParamLimits

0xcf94,	// (0x00077f20) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0007a71d) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0007a71d) main_mup3_pane_g

0x4739,	// (0x0006f6c5) main_mup3_pane_t1_ParamLimits

0x4739,	// (0x0006f6c5) main_mup3_pane_t1

0x47ad,	// (0x0006f739) main_mup3_pane_t2_ParamLimits

0x47ad,	// (0x0006f739) main_mup3_pane_t2

0x4881,	// (0x0006f80d) main_mup3_pane_t4_ParamLimits

0x4881,	// (0x0006f80d) main_mup3_pane_t4

0x48d7,	// (0x0006f863) main_mup3_pane_t5_ParamLimits

0x48d7,	// (0x0006f863) main_mup3_pane_t5

0x4993,	// (0x0006f91f) main_mup3_pane_t6_ParamLimits

0x4993,	// (0x0006f91f) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0007a72e) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0007a72e) main_mup3_pane_t

0x4a4b,	// (0x0006f9d7) mup3_progress_pane_ParamLimits

0x4a4b,	// (0x0006f9d7) mup3_progress_pane

0x4ad7,	// (0x0006fa63) popup_mup3_control_window_ParamLimits

0x4ad7,	// (0x0006fa63) popup_mup3_control_window

0xcfa2,	// (0x00077f2e) popup_mup3_text_window

0x4b09,	// (0x0006fa95) mup3_progress_pane_t1

0x4b28,	// (0x0006fab4) mup3_progress_pane_t2

0xcfaa,	// (0x00077f36) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0007a73b) mup3_progress_pane_t

0xcfc7,	// (0x00077f53) mup_progress_pane_cp03

0x93c4,	// (0x00074350) bg_tb_trans_pane_cp04

0x4b47,	// (0x0006fad3) mup3_volume_pane

0x4b4f,	// (0x0006fadb) popup_mup3_control_window_g1

0x4b58,	// (0x0006fae4) mup3_volume_pane_g1

0x4b61,	// (0x0006faed) mup3_volume_pane_g2

0x4b6a,	// (0x0006faf6) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0007a742) mup3_volume_pane_g

0x93c4,	// (0x00074350) bg_tb_trans_pane_cp03

0xcfd7,	// (0x00077f63) popup_mup3_text_window_g1

0xcfdf,	// (0x00077f6b) popup_mup3_text_window_t1

0xa894,	// (0x00075820) list_calc_item_pane_g1_ParamLimits

0xca28,	// (0x000779b4) mup_volume_pane_cp_g1

0x44ca,	// (0x0006f456) main_touch_calib_pane_t3

0x44de,	// (0x0006f46a) main_touch_calib_pane_t4

0x44f2,	// (0x0006f47e) main_touch_calib_pane_t5

0x93ce,	// (0x0007435a) aid_cell_size_toolbar2

0x93d6,	// (0x00074362) aid_popup3_width_pane

0x93e2,	// (0x0007436e) aid_zoom_text_msg_primary

0x113b,	// (0x0006c0c7) vorec_t7

0xa858,	// (0x000757e4) bg_calc_paper_pane_g1_ParamLimits

0xa864,	// (0x000757f0) bg_calc_paper_pane_g2_ParamLimits

0xa870,	// (0x000757fc) bg_calc_paper_pane_g3_ParamLimits

0xa87c,	// (0x00075808) bg_calc_paper_pane_g4_ParamLimits

0xa888,	// (0x00075814) bg_calc_paper_pane_g5_ParamLimits

0x0a59,	// (0x0006b9e5) bg_calc_paper_pane_g6_ParamLimits

0x0a68,	// (0x0006b9f4) bg_calc_paper_pane_g7_ParamLimits

0x0a77,	// (0x0006ba03) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0007a0e4) bg_calc_paper_pane_g_ParamLimits

0x0a8a,	// (0x0006ba16) calc_bg_paper_pane_g9_ParamLimits

0x12a8,	// (0x0006c234) image_qvga_pane_ParamLimits

0x12a8,	// (0x0006c234) image_qvga_pane

0xa77b,	// (0x00075707) bg_popup_sub_pane_cp04_ParamLimits

0xb681,	// (0x0007660d) popup_mup_playback_window_g1_ParamLimits

0xb68d,	// (0x00076619) popup_mup_playback_window_t1_ParamLimits

0xb6a2,	// (0x0007662e) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007a46e) popup_mup_playback_window_t_ParamLimits

0x4009,	// (0x0006ef95) main_mup2_pane_g3_ParamLimits

0x4009,	// (0x0006ef95) main_mup2_pane_g3

0x16bb,	// (0x0006c647) popup_toolbar_window_cp04

0xba97,	// (0x00076a23) popup_call2_audio_second_window_g3_ParamLimits

0xba97,	// (0x00076a23) popup_call2_audio_second_window_g3

0xbea1,	// (0x00076e2d) popup_call2_audio_first_window_g4_ParamLimits

0xbea1,	// (0x00076e2d) popup_call2_audio_first_window_g4

0xc520,	// (0x000774ac) popup_call2_audio_in_window_g4_ParamLimits

0xc520,	// (0x000774ac) popup_call2_audio_in_window_g4

0x2eca,	// (0x0006de56) aid_area_sk_bg_cut_ParamLimits

0x2eca,	// (0x0006de56) aid_area_sk_bg_cut

0xb6b7,	// (0x00076643) aid_area_sk_bg_cut_2_ParamLimits

0xb6b7,	// (0x00076643) aid_area_sk_bg_cut_2

0x430d,	// (0x0006f299) aid_placing_details_win

0x4315,	// (0x0006f2a1) aid_placing_details_win_2

0xce41,	// (0x00077dcd) camera2_autofocus_pane_g1_ParamLimits

0x064b,	// (0x0006b5d7) popup_fixed_preview_cale_window_ParamLimits

0x064b,	// (0x0006b5d7) popup_fixed_preview_cale_window

0xb485,	// (0x00076411) navi_slider_pane_g3

0xb48e,	// (0x0007641a) navi_slider_pane_g4

0xb497,	// (0x00076423) navi_slider_pane_g5

0xb485,	// (0x00076411) navi_slider_pane_g6

0x9614,	// (0x000745a0) navi_slider_pane_g7

0xb5b8,	// (0x00076544) mup_scale_pane_g3

0xb5c1,	// (0x0007654d) mup_scale_pane_g4

0xb5ca,	// (0x00076556) mup_scale_pane_g5

0x2bf4,	// (0x0006db80) mup_scale_pane_g6

0x2bfd,	// (0x0006db89) mup_scale_pane_g7

0xb485,	// (0x00076411) cams2_slider_pane_g3

0xcaaa,	// (0x00077a36) cams2_slider_pane_g4

0x974d,	// (0x000746d9) cams2_slider_pane_g5

0xb485,	// (0x00076411) cams2_slider_pane_g6

0x9755,	// (0x000746e1) cams2_slider_pane_g7

0xcce1,	// (0x00077c6d) camera2_autofocus_pane_cp_g1

0xc8c1,	// (0x0007784d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8c1,	// (0x0007784d) bg_popup_preview_window_pane_cp02

0xcfed,	// (0x00077f79) list_fp_cale_pane_ParamLimits

0xcfed,	// (0x00077f79) list_fp_cale_pane

0xcff9,	// (0x00077f85) popup_fixed_preview_cale_window_t1_ParamLimits

0xcff9,	// (0x00077f85) popup_fixed_preview_cale_window_t1

0x4b73,	// (0x0006faff) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b73,	// (0x0006faff) popup_fixed_preview_cale_window_t2

0x4b88,	// (0x0006fb14) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b88,	// (0x0006fb14) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0007a749) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0007a749) popup_fixed_preview_cale_window_t

0x4b9d,	// (0x0006fb29) list_single_fp_cale_pane_ParamLimits

0x4b9d,	// (0x0006fb29) list_single_fp_cale_pane

0xd017,	// (0x00077fa3) list_single_fp_cale_pane_g1_ParamLimits

0xd017,	// (0x00077fa3) list_single_fp_cale_pane_g1

0xd023,	// (0x00077faf) list_single_fp_cale_pane_g2_ParamLimits

0xd023,	// (0x00077faf) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0007a750) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0007a750) list_single_fp_cale_pane_g

0xd03c,	// (0x00077fc8) list_single_fp_cale_pane_t1_ParamLimits

0xd03c,	// (0x00077fc8) list_single_fp_cale_pane_t1

0xd04e,	// (0x00077fda) list_single_fp_cale_pane_t2_ParamLimits

0xd04e,	// (0x00077fda) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0007a757) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0007a757) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x944a,	// (0x000743d6) main_dialer_pane

0x4bb3,	// (0x0006fb3f) aid_cell_size_keypad

0x4bbd,	// (0x0006fb49) dialer_ne_pane

0x4bc5,	// (0x0006fb51) grid_dialer_command_1_pane

0x4bcd,	// (0x0006fb59) grid_dialer_command_2_pane

0x4bd5,	// (0x0006fb61) grid_dialer_keypad_pane

0x4be7,	// (0x0006fb73) bg_popup_call_pane_cp06_ParamLimits

0x4be7,	// (0x0006fb73) bg_popup_call_pane_cp06

0x4bf3,	// (0x0006fb7f) dialer_ne_clear_pane_ParamLimits

0x4bf3,	// (0x0006fb7f) dialer_ne_clear_pane

0xd081,	// (0x0007800d) dialer_ne_pane_g1

0xd089,	// (0x00078015) dialer_ne_pane_t1_ParamLimits

0xd089,	// (0x00078015) dialer_ne_pane_t1

0x4bff,	// (0x0006fb8b) dialer_ne_pane_t2_ParamLimits

0x4bff,	// (0x0006fb8b) dialer_ne_pane_t2

0x4c29,	// (0x0006fbb5) dialer_ne_pane_t3_ParamLimits

0x4c29,	// (0x0006fbb5) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0007a75c) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0007a75c) dialer_ne_pane_t

0x4c59,	// (0x0006fbe5) dialer_ne_pane_t3_copy1_ParamLimits

0x4c59,	// (0x0006fbe5) dialer_ne_pane_t3_copy1

0x4c88,	// (0x0006fc14) cell_dialer_keypad_pane_ParamLimits

0x4c88,	// (0x0006fc14) cell_dialer_keypad_pane

0x4c9f,	// (0x0006fc2b) cell_dialer_command_1_pane_ParamLimits

0x4c9f,	// (0x0006fc2b) cell_dialer_command_1_pane

0x4cb5,	// (0x0006fc41) cell_dialer_command_2_pane_ParamLimits

0x4cb5,	// (0x0006fc41) cell_dialer_command_2_pane

0xd09b,	// (0x00078027) bg_button_pane_cp02_ParamLimits

0xd09b,	// (0x00078027) bg_button_pane_cp02

0x4cc4,	// (0x0006fc50) cell_dialer_keypad_pane_g1_ParamLimits

0x4cc4,	// (0x0006fc50) cell_dialer_keypad_pane_g1

0xd09b,	// (0x00078027) bg_button_pane_cp03_ParamLimits

0xd09b,	// (0x00078027) bg_button_pane_cp03

0x4cd8,	// (0x0006fc64) cell_dialer_command_1_pane_g1_ParamLimits

0x4cd8,	// (0x0006fc64) cell_dialer_command_1_pane_g1

0xd0a7,	// (0x00078033) bg_button_pane_cp04

0x4cec,	// (0x0006fc78) cell_dialer_command_2_pane_g1

0xaa41,	// (0x000759cd) bg_button_pane_cp06

0xd0af,	// (0x0007803b) dialer_ne_clear_pane_g1

0xb358,	// (0x000762e4) navi_pane_g2

0xb386,	// (0x00076312) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007a371) navi_pane_g

0xb415,	// (0x000763a1) navi_pane_mv_g2

0xb43c,	// (0x000763c8) navi_pane_mv_g5

0x27c2,	// (0x0006d74e) navi_pane_mv_t1

0xa84c,	// (0x000757d8) main_clock2_pane

0x4d3a,	// (0x0006fcc6) main_clock2_list_pane_ParamLimits

0x4d3a,	// (0x0006fcc6) main_clock2_list_pane

0x4d74,	// (0x0006fd00) main_clock2_pane_t1_ParamLimits

0x4d74,	// (0x0006fd00) main_clock2_pane_t1

0x4db2,	// (0x0006fd3e) main_clock2_pane_t2_ParamLimits

0x4db2,	// (0x0006fd3e) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0007a768) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0007a768) main_clock2_pane_t

0x4e50,	// (0x0006fddc) popup_clock_analogue_window_cp03_ParamLimits

0x4e50,	// (0x0006fddc) popup_clock_analogue_window_cp03

0x4e75,	// (0x0006fe01) popup_clock_digital_window_cp02_ParamLimits

0x4e75,	// (0x0006fe01) popup_clock_digital_window_cp02

0x4ee6,	// (0x0006fe72) main_clock2_list_single_pane_ParamLimits

0x4ee6,	// (0x0006fe72) main_clock2_list_single_pane

0xaa41,	// (0x000759cd) list_highlight_pane_cp05

0xd0e9,	// (0x00078075) main_clock2_list_single_pane_t1

0x16bb,	// (0x0006c647) popup_toolbar_window_cp04_ParamLimits

0x4337,	// (0x0006f2c3) camera2_autofocus_pane_g2_ParamLimits

0x4337,	// (0x0006f2c3) camera2_autofocus_pane_g2

0x4343,	// (0x0006f2cf) camera2_autofocus_pane_g3_ParamLimits

0x4343,	// (0x0006f2cf) camera2_autofocus_pane_g3

0x434f,	// (0x0006f2db) camera2_autofocus_pane_g4_ParamLimits

0x434f,	// (0x0006f2db) camera2_autofocus_pane_g4

0x435b,	// (0x0006f2e7) camera2_autofocus_pane_g5_ParamLimits

0x435b,	// (0x0006f2e7) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0007a6ac) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0007a6ac) camera2_autofocus_pane_g

0x4527,	// (0x0006f4b3) camera2_autofocus_pane_cp_g2

0x452f,	// (0x0006f4bb) camera2_autofocus_pane_cp_g3

0x4537,	// (0x0006f4c3) camera2_autofocus_pane_cp_g4

0x453f,	// (0x0006f4cb) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0007a712) camera2_autofocus_pane_cp_g

0x4bdf,	// (0x0006fb6b) popup_dialer_spcha_window

0x93c4,	// (0x00074350) bg_popup_sub_pane_cp07

0xd0f7,	// (0x00078083) list_spcha_pane

0xd0ff,	// (0x0007808b) list_single_spcha_pane_ParamLimits

0xd0ff,	// (0x0007808b) list_single_spcha_pane

0x93c4,	// (0x00074350) list_highlight_pane_cp06

0xd110,	// (0x0007809c) list_single_spcha_pane_t1

0xc2ca,	// (0x00077256) popup_call2_audio_out_window_g4_ParamLimits

0xc2ca,	// (0x00077256) popup_call2_audio_out_window_g4

0x944a,	// (0x000743d6) main_imed2_pane

0x966d,	// (0x000745f9) popup_imed_adjust2_window

0x370b,	// (0x0006e697) popup_imed_trans_window_ParamLimits

0x370b,	// (0x0006e697) popup_imed_trans_window

0xcb13,	// (0x00077a9f) popup_blid_sat_info2_window_t1

0xcb21,	// (0x00077aad) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0007a641) popup_blid_sat_info2_window_t

0x4f8f,	// (0x0006ff1b) aid_size_cell_colour_35

0x4faf,	// (0x0006ff3b) aid_size_cell_colour_112

0x4fcf,	// (0x0006ff5b) aid_size_cell_effect

0xc8cd,	// (0x00077859) bg_tb_trans_pane_cp02

0xaee2,	// (0x00075e6e) heading_imed_pane

0x4fef,	// (0x0006ff7b) listscroll_imed_pane

0xd11e,	// (0x000780aa) heading_imed_pane_g1

0xd126,	// (0x000780b2) heading_imed_pane_t1

0xd134,	// (0x000780c0) grid_imed_colour_35_pane_ParamLimits

0xd134,	// (0x000780c0) grid_imed_colour_35_pane

0x4ffb,	// (0x0006ff87) grid_imed_effect_pane

0xd14c,	// (0x000780d8) list_imed_aspect_pane

0x5011,	// (0x0006ff9d) scroll_pane_cp027_ParamLimits

0x5011,	// (0x0006ff9d) scroll_pane_cp027

0x5022,	// (0x0006ffae) cell_imed_effect_pane_ParamLimits

0x5022,	// (0x0006ffae) cell_imed_effect_pane

0xd154,	// (0x000780e0) cell_imed_colour_pane_ParamLimits

0xd154,	// (0x000780e0) cell_imed_colour_pane

0xd196,	// (0x00078122) cell_imed_colour_pane_g1_ParamLimits

0xd196,	// (0x00078122) cell_imed_colour_pane_g1

0xd1a7,	// (0x00078133) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1a7,	// (0x00078133) hgihlgiht_grid_pane_cp016

0x5049,	// (0x0006ffd5) cell_imed_effect_pane_g1

0x5051,	// (0x0006ffdd) grid_highlight_pane_cp017

0xd1b8,	// (0x00078144) list_imed_single_pane_ParamLimits

0xd1b8,	// (0x00078144) list_imed_single_pane

0x93c4,	// (0x00074350) list_highlight_pane_cp07

0xd1cd,	// (0x00078159) list_imed_aspect_pane_comp1_t1

0xc8cd,	// (0x00077859) bg_tb_trans_pane_cp05

0xd1ef,	// (0x0007817b) popup_imed_adjust2_window_g1

0xd216,	// (0x000781a2) popup_imed_adjust2_window_t1

0xd22e,	// (0x000781ba) slider_imed_adjust_pane

0xd242,	// (0x000781ce) slider_imed_adjust_pane_g1

0xd252,	// (0x000781de) slider_imed_adjust_pane_g2

0xd262,	// (0x000781ee) slider_imed_adjust_pane_g3

0xd273,	// (0x000781ff) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0007a785) slider_imed_adjust_pane_g

0x505a,	// (0x0006ffe6) aid_size_cell_clipart2

0x5066,	// (0x0006fff2) grid_imed_clipart_pane

0xd284,	// (0x00078210) scroll_pane_cp031

0x5070,	// (0x0006fffc) cell_imed_clipart_pane_ParamLimits

0x5070,	// (0x0006fffc) cell_imed_clipart_pane

0x5092,	// (0x0007001e) cell_imed_clipart_pane_g1

0x93c4,	// (0x00074350) grid_highlight_pane_cp014

0x4d4f,	// (0x0006fcdb) main_clock2_pane_g1_ParamLimits

0x4d4f,	// (0x0006fcdb) main_clock2_pane_g1

0x4e91,	// (0x0006fe1d) aid_call2_pane_cp10

0x4ea3,	// (0x0006fe2f) aid_call_pane_cp10

0xb2b7,	// (0x00076243) popup_clock_analogue_window_cp10_g1

0xb2b7,	// (0x00076243) popup_clock_analogue_window_cp10_g2

0x4eb5,	// (0x0006fe41) popup_clock_analogue_window_cp10_g3

0x4eb5,	// (0x0006fe41) popup_clock_analogue_window_cp10_g4

0xb2b7,	// (0x00076243) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0007a773) popup_clock_analogue_window_cp10_g

0x4ec7,	// (0x0006fe53) popup_clock_analogue_window_cp10_t1

0x4ef8,	// (0x0006fe84) clock_digital_number_pane_cp10_ParamLimits

0x4ef8,	// (0x0006fe84) clock_digital_number_pane_cp10

0x4f10,	// (0x0006fe9c) clock_digital_number_pane_cp11_ParamLimits

0x4f10,	// (0x0006fe9c) clock_digital_number_pane_cp11

0x4f28,	// (0x0006feb4) clock_digital_number_pane_cp12_ParamLimits

0x4f28,	// (0x0006feb4) clock_digital_number_pane_cp12

0x4f40,	// (0x0006fecc) clock_digital_number_pane_cp13_ParamLimits

0x4f40,	// (0x0006fecc) clock_digital_number_pane_cp13

0x4f58,	// (0x0006fee4) clock_digital_separator_pane_cp10_ParamLimits

0x4f58,	// (0x0006fee4) clock_digital_separator_pane_cp10

0x4f70,	// (0x0006fefc) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f70,	// (0x0006fefc) popup_clock_digital_window_cp02_t1

0xa773,	// (0x000756ff) clock_digital_number_pane_cp10_g1

0xa773,	// (0x000756ff) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0007a78e) clock_digital_number_pane_cp10_g

0xa773,	// (0x000756ff) clock_digital_separator_pane_cp10_g1

0xa773,	// (0x000756ff) clock_digital_separator_pane_g2_cp10

0xb444,	// (0x000763d0) navi_pane_vded_g4

0xb44d,	// (0x000763d9) navi_pane_vded_g5

0xb456,	// (0x000763e2) navi_pane_vded_t1

0x944a,	// (0x000743d6) main_vded_pane

0x509b,	// (0x00070027) main_vded_pane_g1

0x50a5,	// (0x00070031) main_vded_pane_g2

0x50af,	// (0x0007003b) main_vded_pane_g3

0x0002,

0xf807,	// (0x0007a793) main_vded_pane_g

0x50b9,	// (0x00070045) main_vded_pane_t1

0x50c7,	// (0x00070053) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0007a79a) main_vded_pane_t

0x50d5,	// (0x00070061) vded_slider_pane

0x50dd,	// (0x00070069) vded_video_pane

0xd28c,	// (0x00078218) vded_video_pane_g1

0x50e5,	// (0x00070071) vded_video_pane_g2

0xcce1,	// (0x00077c6d) vded_video_pane_g3

0x0002,

0xf813,	// (0x0007a79f) vded_video_pane_g

0xd296,	// (0x00078222) vded_slider_pane_g1

0xca28,	// (0x000779b4) vded_slider_pane_g2

0xd29f,	// (0x0007822b) vded_slider_pane_g3

0xd2a8,	// (0x00078234) vded_slider_pane_g4

0xd2b1,	// (0x0007823d) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0007a7a6) vded_slider_pane_g

0x4abf,	// (0x0006fa4b) mup3_rocker_pane_ParamLimits

0x4abf,	// (0x0006fa4b) mup3_rocker_pane

0x50ee,	// (0x0007007a) mup3_control_keys_pane_g1

0x50f6,	// (0x00070082) mup3_control_keys_pane_g2

0x50fe,	// (0x0007008a) mup3_control_keys_pane_g3

0x5106,	// (0x00070092) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0007a7b1) mup3_control_keys_pane_g

0x0682,	// (0x0006b60e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0682,	// (0x0006b60e) popup_toolbar2_fixed_window_cp01

0x4af3,	// (0x0006fa7f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4af3,	// (0x0006fa7f) popup_toolbar2_fixed_window_cp02

0xbc09,	// (0x00076b95) popup_call2_audio_second_window_t4_ParamLimits

0xbc09,	// (0x00076b95) popup_call2_audio_second_window_t4

0xc137,	// (0x000770c3) popup_call2_audio_first_window_t6_ParamLimits

0xc137,	// (0x000770c3) popup_call2_audio_first_window_t6

0xc3cd,	// (0x00077359) popup_call2_audio_out_window_t6_ParamLimits

0xc3cd,	// (0x00077359) popup_call2_audio_out_window_t6

0x944a,	// (0x000743d6) main_vitu_pane

0x5116,	// (0x000700a2) aid_size_cell_itu_ParamLimits

0x5116,	// (0x000700a2) aid_size_cell_itu

0x9f3d,	// (0x00074ec9) bg_popup_window_pane_cp08_ParamLimits

0x9f3d,	// (0x00074ec9) bg_popup_window_pane_cp08

0x512c,	// (0x000700b8) field_vitu_entry_pane_ParamLimits

0x512c,	// (0x000700b8) field_vitu_entry_pane

0x5144,	// (0x000700d0) grid_vitu_function_pane_ParamLimits

0x5144,	// (0x000700d0) grid_vitu_function_pane

0x515f,	// (0x000700eb) grid_vitu_itu_pane_ParamLimits

0x515f,	// (0x000700eb) grid_vitu_itu_pane

0x517d,	// (0x00070109) cell_vitu_itu_pane_ParamLimits

0x517d,	// (0x00070109) cell_vitu_itu_pane

0x519f,	// (0x0007012b) cell_vitu_function_pane_ParamLimits

0x519f,	// (0x0007012b) cell_vitu_function_pane

0x9f3d,	// (0x00074ec9) bg_popup_sub_pane_cp08_ParamLimits

0x9f3d,	// (0x00074ec9) bg_popup_sub_pane_cp08

0x51b8,	// (0x00070144) field_vitu_entry_pane_t1_ParamLimits

0x51b8,	// (0x00070144) field_vitu_entry_pane_t1

0xd2d2,	// (0x0007825e) field_vitu_entry_pane_t2_ParamLimits

0xd2d2,	// (0x0007825e) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0007a7bf) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0007a7bf) field_vitu_entry_pane_t

0xd2ef,	// (0x0007827b) bg_button_pane_cp05_ParamLimits

0xd2ef,	// (0x0007827b) bg_button_pane_cp05

0x51d7,	// (0x00070163) cell_vitu_itu_pane_g1

0x51ef,	// (0x0007017b) cell_vitu_itu_pane_t1_ParamLimits

0x51ef,	// (0x0007017b) cell_vitu_itu_pane_t1

0x5201,	// (0x0007018d) cell_vitu_itu_pane_t2_ParamLimits

0x5201,	// (0x0007018d) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0007a7c4) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0007a7c4) cell_vitu_itu_pane_t

0xd2fd,	// (0x00078289) bg_button_pane_cp07

0x5236,	// (0x000701c2) cell_vitu_function_pane_g1

0x94cc,	// (0x00074458) main_calc_pane_g1

0x04a9,	// (0x0006b435) aid_visual_content_pane

0x944a,	// (0x000743d6) main_vradio_pane

0x523f,	// (0x000701cb) main_vradio_pane_g1_ParamLimits

0x523f,	// (0x000701cb) main_vradio_pane_g1

0xd307,	// (0x00078293) main_vradio_pane_g2_ParamLimits

0xd307,	// (0x00078293) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0007a7cb) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0007a7cb) main_vradio_pane_g

0x5258,	// (0x000701e4) main_vradio_pane_t1_ParamLimits

0x5258,	// (0x000701e4) main_vradio_pane_t1

0x526d,	// (0x000701f9) main_vradio_pane_t2_ParamLimits

0x526d,	// (0x000701f9) main_vradio_pane_t2

0xd314,	// (0x000782a0) main_vradio_pane_t3_ParamLimits

0xd314,	// (0x000782a0) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0007a7d0) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0007a7d0) main_vradio_pane_t

0x5282,	// (0x0007020e) vradio_rocker_control_pane_ParamLimits

0x5282,	// (0x0007020e) vradio_rocker_control_pane

0x5294,	// (0x00070220) vradio_station_info_pane_ParamLimits

0x5294,	// (0x00070220) vradio_station_info_pane

0xd328,	// (0x000782b4) vradio_frequency_info_pane_ParamLimits

0xd328,	// (0x000782b4) vradio_frequency_info_pane

0xcce1,	// (0x00077c6d) vradio_station_info_pane_g1

0xd337,	// (0x000782c3) vradio_station_info_pane_t1_ParamLimits

0xd337,	// (0x000782c3) vradio_station_info_pane_t1

0xd359,	// (0x000782e5) vradio_station_info_pane_t2_ParamLimits

0xd359,	// (0x000782e5) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0007a7d7) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0007a7d7) vradio_station_info_pane_t

0xd36b,	// (0x000782f7) vradio_tuning_pane

0xd373,	// (0x000782ff) vradio_rocker_control_pane_g1

0xd37b,	// (0x00078307) vradio_rocker_control_pane_g2

0xd383,	// (0x0007830f) vradio_rocker_control_pane_g3

0xd38b,	// (0x00078317) vradio_rocker_control_pane_g4

0xd393,	// (0x0007831f) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0007a7dc) vradio_rocker_control_pane_g

0x52a6,	// (0x00070232) vradio_frequency_info_pane_g1

0xd39b,	// (0x00078327) vradio_frequency_info_pane_t1_ParamLimits

0xd39b,	// (0x00078327) vradio_frequency_info_pane_t1

0x52b0,	// (0x0007023c) vradio_tuning_pane_g1

0x52bb,	// (0x00070247) vradio_tuning_pane_t1

0x93fa,	// (0x00074386) area_side_right_pane_ParamLimits

0x93fa,	// (0x00074386) area_side_right_pane

0xc888,	// (0x00077814) status_small_pane_g1

0xc890,	// (0x0007781c) status_small_pane_g2

0xc899,	// (0x00077825) status_small_pane_g3

0xc8a2,	// (0x0007782e) status_small_pane_g4

0x0003,

0xf60b,	// (0x0007a597) status_small_pane_g

0xc8ab,	// (0x00077837) status_small_pane_t1

0x944a,	// (0x000743d6) main_video3_pane

0xd3af,	// (0x0007833b) cams_zoom_vslider_pane

0xd3b7,	// (0x00078343) image3_wide_pane_ParamLimits

0xd3b7,	// (0x00078343) image3_wide_pane

0xd3d1,	// (0x0007835d) image3_wide_small_pane

0xd3dd,	// (0x00078369) main_video3_pane_g1_ParamLimits

0xd3dd,	// (0x00078369) main_video3_pane_g1

0xd3f9,	// (0x00078385) main_video3_pane_g2_ParamLimits

0xd3f9,	// (0x00078385) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0007a7e7) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0007a7e7) main_video3_pane_g

0xd415,	// (0x000783a1) main_video3_pane_t1_ParamLimits

0xd415,	// (0x000783a1) main_video3_pane_t1

0xd440,	// (0x000783cc) main_video3_pane_t2_ParamLimits

0xd440,	// (0x000783cc) main_video3_pane_t2

0xd46b,	// (0x000783f7) main_video3_pane_t3_ParamLimits

0xd46b,	// (0x000783f7) main_video3_pane_t3

0x0002,

0xf860,	// (0x0007a7ec) main_video3_pane_t_ParamLimits

0xf860,	// (0x0007a7ec) main_video3_pane_t

0xd498,	// (0x00078424) cams_zoom_vslider_pane_g1

0xd4a1,	// (0x0007842d) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0007a7f3) cams_zoom_vslider_pane_g

0xd4a9,	// (0x00078435) small_slider_vertical_pane

0xcce1,	// (0x00077c6d) small_slider_vertical_pane_g1

0xcce1,	// (0x00077c6d) small_slider_vertical_pane_g2

0xd4b1,	// (0x0007843d) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0007a7f8) small_slider_vertical_pane_g

0x944a,	// (0x000743d6) main_hwr_training_pane

0xd4ba,	// (0x00078446) hwr_training_instruct_pane_ParamLimits

0xd4ba,	// (0x00078446) hwr_training_instruct_pane

0x52ca,	// (0x00070256) hwr_training_navi_pane_ParamLimits

0x52ca,	// (0x00070256) hwr_training_navi_pane

0x52e9,	// (0x00070275) hwr_training_write_pane_ParamLimits

0x52e9,	// (0x00070275) hwr_training_write_pane

0x93c4,	// (0x00074350) bg_frame_shadow_pane

0xd4f9,	// (0x00078485) hwr_training_write_pane_g1

0xd501,	// (0x0007848d) hwr_training_write_pane_g2

0xd509,	// (0x00078495) hwr_training_write_pane_g3

0xd511,	// (0x0007849d) hwr_training_write_pane_g4

0xd519,	// (0x000784a5) hwr_training_write_pane_g5

0xd521,	// (0x000784ad) hwr_training_write_pane_g6

0xd529,	// (0x000784b5) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0007a7ff) hwr_training_write_pane_g

0x975e,	// (0x000746ea) hwr_training_navi_pane_g1_ParamLimits

0x975e,	// (0x000746ea) hwr_training_navi_pane_g1

0x9770,	// (0x000746fc) hwr_training_navi_pane_g2_ParamLimits

0x9770,	// (0x000746fc) hwr_training_navi_pane_g2

0x9782,	// (0x0007470e) hwr_training_navi_pane_g3_ParamLimits

0x9782,	// (0x0007470e) hwr_training_navi_pane_g3

0x9792,	// (0x0007471e) hwr_training_navi_pane_g4_ParamLimits

0x9792,	// (0x0007471e) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0007a80e) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0007a80e) hwr_training_navi_pane_g

0x979f,	// (0x0007472b) hwr_training_navi_pane_t1

0x5333,	// (0x000702bf) list_single_hwr_training_instruct_pane_ParamLimits

0x5333,	// (0x000702bf) list_single_hwr_training_instruct_pane

0xd531,	// (0x000784bd) list_single_hwr_training_instruct_pane_t1

0xcc15,	// (0x00077ba1) bg_frame_shadow_pane_g1

0xd540,	// (0x000784cc) bg_frame_shadow_pane_g2

0xd548,	// (0x000784d4) bg_frame_shadow_pane_g3

0xd550,	// (0x000784dc) bg_frame_shadow_pane_g4

0xd558,	// (0x000784e4) bg_frame_shadow_pane_g5

0xd560,	// (0x000784ec) bg_frame_shadow_pane_g6

0xd568,	// (0x000784f4) bg_frame_shadow_pane_g7

0xa917,	// (0x000758a3) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0007a819) bg_frame_shadow_pane_g

0x944a,	// (0x000743d6) main_video_tele_dialer_pane

0x5349,	// (0x000702d5) aid_size_cell_video_keypad_ParamLimits

0x5349,	// (0x000702d5) aid_size_cell_video_keypad

0x5363,	// (0x000702ef) grid_video_dialer_keypad_pane_ParamLimits

0x5363,	// (0x000702ef) grid_video_dialer_keypad_pane

0x53b1,	// (0x0007033d) video_down_pane_cp_ParamLimits

0x53b1,	// (0x0007033d) video_down_pane_cp

0x53e3,	// (0x0007036f) cell_video_dialer_keypad_pane_ParamLimits

0x53e3,	// (0x0007036f) cell_video_dialer_keypad_pane

0xd570,	// (0x000784fc) bg_button_pane_cp08_ParamLimits

0xd570,	// (0x000784fc) bg_button_pane_cp08

0x5405,	// (0x00070391) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5405,	// (0x00070391) cell_video_dialer_keypad_pane_g1

0x4aa9,	// (0x0006fa35) mup3_rocker2_pane_ParamLimits

0x4aa9,	// (0x0006fa35) mup3_rocker2_pane

0xcce1,	// (0x00077c6d) mup3_rocker2_pane_g1

0x35fa,	// (0x0006e586) main_dialer2_pane

0x944a,	// (0x000743d6) main_mp4_pane

0x97b5,	// (0x00074741) main_mp4_pane_g1_ParamLimits

0x97b5,	// (0x00074741) main_mp4_pane_g1

0x97b5,	// (0x00074741) main_mp4_pane_g2_ParamLimits

0x97b5,	// (0x00074741) main_mp4_pane_g2

0x543f,	// (0x000703cb) main_mp4_pane_g3_ParamLimits

0x543f,	// (0x000703cb) main_mp4_pane_g3

0x97c3,	// (0x0007474f) main_mp4_pane_g4_ParamLimits

0x97c3,	// (0x0007474f) main_mp4_pane_g4

0x97eb,	// (0x00074777) main_mp4_pane_g5_ParamLimits

0x97eb,	// (0x00074777) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0007a839) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0007a839) main_mp4_pane_g

0x983b,	// (0x000747c7) main_mp4_pane_t1_ParamLimits

0x983b,	// (0x000747c7) main_mp4_pane_t1

0x9897,	// (0x00074823) main_mp4_pane_t2_ParamLimits

0x9897,	// (0x00074823) main_mp4_pane_t2

0xd57c,	// (0x00078508) main_mp4_pane_t3_ParamLimits

0xd57c,	// (0x00078508) main_mp4_pane_t3

0x98e9,	// (0x00074875) main_mp4_pane_t4_ParamLimits

0x98e9,	// (0x00074875) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0007a846) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0007a846) main_mp4_pane_t

0x992d,	// (0x000748b9) mp4_progress_pane_ParamLimits

0x992d,	// (0x000748b9) mp4_progress_pane

0x9977,	// (0x00074903) mp4_rocker_pane_ParamLimits

0x9977,	// (0x00074903) mp4_rocker_pane

0xd5a4,	// (0x00078530) mp4_progress_pane_t1

0xd5bd,	// (0x00078549) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0007a84f) mp4_progress_pane_t

0xd5d6,	// (0x00078562) mup_progress_pane_cp04

0xdce3,	// (0x00078c6f) mp4_rocker_pane_g1

0x547b,	// (0x00070407) aid_cell_size_keypad2_ParamLimits

0x547b,	// (0x00070407) aid_cell_size_keypad2

0x5491,	// (0x0007041d) dialer2_ne_pane_ParamLimits

0x5491,	// (0x0007041d) dialer2_ne_pane

0x54ab,	// (0x00070437) grid_dialer2_keypad_pane_ParamLimits

0x54ab,	// (0x00070437) grid_dialer2_keypad_pane

0xcaba,	// (0x00077a46) bg_popup_call_pane_cp07_ParamLimits

0xcaba,	// (0x00077a46) bg_popup_call_pane_cp07

0x54c7,	// (0x00070453) dialer2_ne_pane_t1_ParamLimits

0x54c7,	// (0x00070453) dialer2_ne_pane_t1

0x5503,	// (0x0007048f) cell_dialer2_keypad_pane_ParamLimits

0x5503,	// (0x0007048f) cell_dialer2_keypad_pane

0xd5f4,	// (0x00078580) bg_button_pane_pane_cp04_ParamLimits

0xd5f4,	// (0x00078580) bg_button_pane_pane_cp04

0x5525,	// (0x000704b1) cell_dialer2_keypad_pane_g1_ParamLimits

0x5525,	// (0x000704b1) cell_dialer2_keypad_pane_g1

0x158f,	// (0x0006c51b) aid_placing_vt_set_content_ParamLimits

0x158f,	// (0x0006c51b) aid_placing_vt_set_content

0x15b7,	// (0x0006c543) aid_placing_vt_set_title_ParamLimits

0x15b7,	// (0x0006c543) aid_placing_vt_set_title

0x944a,	// (0x000743d6) main_image3_pane

0x55eb,	// (0x00070577) area_side_right_pane_cp01_ParamLimits

0x55eb,	// (0x00070577) area_side_right_pane_cp01

0x97b5,	// (0x00074741) main_image3_pane_g1_ParamLimits

0x97b5,	// (0x00074741) main_image3_pane_g1

0x5602,	// (0x0007058e) main_image3_pane_g2_ParamLimits

0x5602,	// (0x0007058e) main_image3_pane_g2

0x562a,	// (0x000705b6) main_image3_pane_g3_ParamLimits

0x562a,	// (0x000705b6) main_image3_pane_g3

0x5654,	// (0x000705e0) main_image3_pane_g4_ParamLimits

0x5654,	// (0x000705e0) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0007a85e) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0007a85e) main_image3_pane_g

0x567e,	// (0x0007060a) main_image3_pane_t1_ParamLimits

0x567e,	// (0x0007060a) main_image3_pane_t1

0x56d6,	// (0x00070662) main_image3_pane_t2_ParamLimits

0x56d6,	// (0x00070662) main_image3_pane_t2

0x5728,	// (0x000706b4) main_image3_pane_t3_ParamLimits

0x5728,	// (0x000706b4) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0007a867) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0007a867) main_image3_pane_t

0x9f3d,	// (0x00074ec9) grid_sctrl_middle_pane_cp01_ParamLimits

0x9f3d,	// (0x00074ec9) grid_sctrl_middle_pane_cp01

0x57b0,	// (0x0007073c) cell_sctrl_middle_pane_cp01_ParamLimits

0x57b0,	// (0x0007073c) cell_sctrl_middle_pane_cp01

0x57cd,	// (0x00070759) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57cd,	// (0x00070759) cell_sctrl_middle_pane_cp01_g1

0x944a,	// (0x000743d6) main_call4_pane

0x57e3,	// (0x0007076f) aid_size_button_call4_ParamLimits

0x57e3,	// (0x0007076f) aid_size_button_call4

0x5814,	// (0x000707a0) call4_windows_pane_ParamLimits

0x5814,	// (0x000707a0) call4_windows_pane

0x5834,	// (0x000707c0) grid_call4_button_pane_ParamLimits

0x5834,	// (0x000707c0) grid_call4_button_pane

0xd600,	// (0x0007858c) call4_windows_conf_pane

0xd617,	// (0x000785a3) popup_call4_audio_first_window_ParamLimits

0xd617,	// (0x000785a3) popup_call4_audio_first_window

0xd663,	// (0x000785ef) popup_call4_audio_second_window_ParamLimits

0xd663,	// (0x000785ef) popup_call4_audio_second_window

0xd677,	// (0x00078603) popup_call4_audio_wait_window_ParamLimits

0xd677,	// (0x00078603) popup_call4_audio_wait_window

0x5861,	// (0x000707ed) cell_call4_button_pane_ParamLimits

0x5861,	// (0x000707ed) cell_call4_button_pane

0x588a,	// (0x00070816) bg_button_pane_cp09_ParamLimits

0x588a,	// (0x00070816) bg_button_pane_cp09

0x5896,	// (0x00070822) cell_call4_button_pane_g1_ParamLimits

0x5896,	// (0x00070822) cell_call4_button_pane_g1

0x58bc,	// (0x00070848) cell_call4_button_pane_t1_ParamLimits

0x58bc,	// (0x00070848) cell_call4_button_pane_t1

0xd6bf,	// (0x0007864b) popup_call4_audio_conf_window_ParamLimits

0xd6bf,	// (0x0007864b) popup_call4_audio_conf_window

0x4b09,	// (0x0006fa95) mup3_progress_pane_t1_ParamLimits

0x4b28,	// (0x0006fab4) mup3_progress_pane_t2_ParamLimits

0xcfaa,	// (0x00077f36) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0007a73b) mup3_progress_pane_t_ParamLimits

0xcfc7,	// (0x00077f53) mup_progress_pane_cp03_ParamLimits

0x510e,	// (0x0007009a) mup3_control_keys_pane_g4_copy1

0x995b,	// (0x000748e7) mp4_rocker2_pane_ParamLimits

0x995b,	// (0x000748e7) mp4_rocker2_pane

0xd6d3,	// (0x0007865f) mp4_rocker2_pane_g1

0xd6db,	// (0x00078667) mp4_rocker2_pane_g2

0x99c9,	// (0x00074955) mp4_rocker2_pane_g3

0x99d1,	// (0x0007495d) mp4_rocker2_pane_g4

0x99d9,	// (0x00074965) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0007a870) mp4_rocker2_pane_g

0x944a,	// (0x000743d6) main_camera4_pane

0x944a,	// (0x000743d6) main_video4_pane

0x537f,	// (0x0007030b) main_video_tele_dialer_pane_t1_ParamLimits

0x537f,	// (0x0007030b) main_video_tele_dialer_pane_t1

0x5398,	// (0x00070324) main_video_tele_dialer_pane_t2_ParamLimits

0x5398,	// (0x00070324) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0007a82a) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0007a82a) main_video_tele_dialer_pane_t

0x58fe,	// (0x0007088a) cam4_autofocus_pane_ParamLimits

0x58fe,	// (0x0007088a) cam4_autofocus_pane

0x5914,	// (0x000708a0) cam4_image_uncrop_pane_ParamLimits

0x5914,	// (0x000708a0) cam4_image_uncrop_pane

0x592e,	// (0x000708ba) cam4_indicators_pane_ParamLimits

0x592e,	// (0x000708ba) cam4_indicators_pane

0x5959,	// (0x000708e5) main_camera4_pane_g1_ParamLimits

0x5959,	// (0x000708e5) main_camera4_pane_g1

0x596b,	// (0x000708f7) main_camera4_pane_g2_ParamLimits

0x596b,	// (0x000708f7) main_camera4_pane_g2

0x597e,	// (0x0007090a) main_camera4_pane_g3_ParamLimits

0x597e,	// (0x0007090a) main_camera4_pane_g3

0x5991,	// (0x0007091d) main_camera4_pane_g4_ParamLimits

0x5991,	// (0x0007091d) main_camera4_pane_g4

0x59a4,	// (0x00070930) main_camera4_pane_g5_ParamLimits

0x59a4,	// (0x00070930) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0007a87b) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0007a87b) main_camera4_pane_g

0x59c8,	// (0x00070954) main_camera4_pane_t1_ParamLimits

0x59c8,	// (0x00070954) main_camera4_pane_t1

0x99fd,	// (0x00074989) bg_tb_trans_pane_cp06

0x9a13,	// (0x0007499f) cam4_indicators_pane_g1

0x9a24,	// (0x000749b0) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0007a896) cam4_indicators_pane_g

0x9a3c,	// (0x000749c8) cam4_indicators_pane_t1

0x5a2c,	// (0x000709b8) main_video4_pane_g1_ParamLimits

0x5a2c,	// (0x000709b8) main_video4_pane_g1

0x5a3b,	// (0x000709c7) main_video4_pane_g2_ParamLimits

0x5a3b,	// (0x000709c7) main_video4_pane_g2

0x5a4a,	// (0x000709d6) main_video4_pane_g3_ParamLimits

0x5a4a,	// (0x000709d6) main_video4_pane_g3

0x5a59,	// (0x000709e5) main_video4_pane_g4_ParamLimits

0x5a59,	// (0x000709e5) main_video4_pane_g4

0x0004,

0xf911,	// (0x0007a89d) main_video4_pane_g_ParamLimits

0xf911,	// (0x0007a89d) main_video4_pane_g

0x5a77,	// (0x00070a03) vid4_indicators_pane_ParamLimits

0x5a77,	// (0x00070a03) vid4_indicators_pane

0x5aa5,	// (0x00070a31) video4_image_uncrop_cif_pane_ParamLimits

0x5aa5,	// (0x00070a31) video4_image_uncrop_cif_pane

0x5abf,	// (0x00070a4b) video4_image_uncrop_nhd_pane_ParamLimits

0x5abf,	// (0x00070a4b) video4_image_uncrop_nhd_pane

0x5914,	// (0x000708a0) video4_image_uncrop_vga_pane_ParamLimits

0x5914,	// (0x000708a0) video4_image_uncrop_vga_pane

0x943c,	// (0x000743c8) bg_tb_trans_pane_cp07

0x9a66,	// (0x000749f2) vid4_indicators_pane_g1

0x9a7a,	// (0x00074a06) vid4_indicators_pane_g2

0x9a8e,	// (0x00074a1a) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0007a8a8) vid4_indicators_pane_g

0x9abb,	// (0x00074a47) vid4_indicators_pane_t1

0x5ad3,	// (0x00070a5f) cam4_autofocus_pane_g1

0x5adb,	// (0x00070a67) cam4_autofocus_pane_g2

0x5ae3,	// (0x00070a6f) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0007a8b3) cam4_autofocus_pane_g

0x5aeb,	// (0x00070a77) cam4_autofocus_pane_g3_copy1

0x53c7,	// (0x00070353) video_down_pane_cp_t1

0x53d5,	// (0x00070361) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0007a82f) video_down_pane_cp_t

0x943c,	// (0x000743c8) popup_vitu2_window_ParamLimits

0x943c,	// (0x000743c8) popup_vitu2_window

0x5af3,	// (0x00070a7f) aid_size_cell2_itu2_ParamLimits

0x5af3,	// (0x00070a7f) aid_size_cell2_itu2

0x5b19,	// (0x00070aa5) aid_size_cell_itu2_ParamLimits

0x5b19,	// (0x00070aa5) aid_size_cell_itu2

0x5b75,	// (0x00070b01) bg_popup_window_pane_cp09_ParamLimits

0x5b75,	// (0x00070b01) bg_popup_window_pane_cp09

0x5b83,	// (0x00070b0f) field_vitu2_entry_pane_ParamLimits

0x5b83,	// (0x00070b0f) field_vitu2_entry_pane

0x5ba9,	// (0x00070b35) grid_vitu2_function_pane_ParamLimits

0x5ba9,	// (0x00070b35) grid_vitu2_function_pane

0x5bfa,	// (0x00070b86) grid_vitu2_itu_pane_ParamLimits

0x5bfa,	// (0x00070b86) grid_vitu2_itu_pane

0x5c90,	// (0x00070c1c) cell_vitu2_itu_pane_ParamLimits

0x5c90,	// (0x00070c1c) cell_vitu2_itu_pane

0x5cbc,	// (0x00070c48) cell_vitu2_function_pane_ParamLimits

0x5cbc,	// (0x00070c48) cell_vitu2_function_pane

0xd6e3,	// (0x0007866f) bg_popup_call_pane_cp08_ParamLimits

0xd6e3,	// (0x0007866f) bg_popup_call_pane_cp08

0xd6fa,	// (0x00078686) field_vitu2_entry_pane_g1

0xd706,	// (0x00078692) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0007a8ba) field_vitu2_entry_pane_g

0x5cfb,	// (0x00070c87) field_vitu2_entry_pane_t1_ParamLimits

0x5cfb,	// (0x00070c87) field_vitu2_entry_pane_t1

0x9fbf,	// (0x00074f4b) field_vitu2_entry_pane_t2_ParamLimits

0x9fbf,	// (0x00074f4b) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0007a8c1) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0007a8c1) field_vitu2_entry_pane_t

0x5d2b,	// (0x00070cb7) bg_button_pane_cp010_ParamLimits

0x5d2b,	// (0x00070cb7) bg_button_pane_cp010

0x9ad2,	// (0x00074a5e) cell_vitu2_itu_pane_g1

0x5d47,	// (0x00070cd3) cell_vitu2_itu_pane_t1_ParamLimits

0x5d47,	// (0x00070cd3) cell_vitu2_itu_pane_t1

0x0381,	// (0x0006b30d) cell_vitu2_itu_pane_t2_ParamLimits

0x0381,	// (0x0006b30d) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0007a8cb) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0007a8cb) cell_vitu2_itu_pane_t

0x943c,	// (0x000743c8) bg_button_pane_cp011

0x5da5,	// (0x00070d31) cell_vitu2_function_pane_g1

0x944a,	// (0x000743d6) main_myfav_hc_pane

0x5778,	// (0x00070704) popup_image3_note_pane_ParamLimits

0x5778,	// (0x00070704) popup_image3_note_pane

0x5794,	// (0x00070720) popup_image3_tool_bar_pane_ParamLimits

0x5794,	// (0x00070720) popup_image3_tool_bar_pane

0x040f,	// (0x0006b39b) cell_vitu2_itu_pane_t3_ParamLimits

0x040f,	// (0x0006b39b) cell_vitu2_itu_pane_t3

0x93c4,	// (0x00074350) bg_popup_trans_pane

0xd728,	// (0x000786b4) grid_image3_tool_bar_pane

0xd732,	// (0x000786be) bg_popup_trans_pane_g1

0xac9a,	// (0x00075c26) bg_popup_trans_pane_g2

0xd73a,	// (0x000786c6) bg_popup_trans_pane_g3

0xd742,	// (0x000786ce) bg_popup_trans_pane_g4

0xd74a,	// (0x000786d6) bg_popup_trans_pane_g5

0xd752,	// (0x000786de) bg_popup_trans_pane_g6

0xd75a,	// (0x000786e6) bg_popup_trans_pane_g7

0xd762,	// (0x000786ee) bg_popup_trans_pane_g8

0xac7a,	// (0x00075c06) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0007a8d2) bg_popup_trans_pane_g

0xd76a,	// (0x000786f6) cell_image3_tool_bar_pane_ParamLimits

0xd76a,	// (0x000786f6) cell_image3_tool_bar_pane

0xcce1,	// (0x00077c6d) cell_image3_tool_bar_pane_g1

0x93c4,	// (0x00074350) bg_popup_trans_pane_cp1

0xd77e,	// (0x0007870a) popup_image3_note_pane_t1

0xd78c,	// (0x00078718) popup_image3_note_pane_t2

0xd79a,	// (0x00078726) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0007a8e5) popup_image3_note_pane_t

0xd7a8,	// (0x00078734) popup_image3_note_pane_t3_copy1

0x5db9,	// (0x00070d45) bg_myfav_hc_instruction_pane_ParamLimits

0x5db9,	// (0x00070d45) bg_myfav_hc_instruction_pane

0x5dcd,	// (0x00070d59) cell_myfav_contact_pane_ParamLimits

0x5dcd,	// (0x00070d59) cell_myfav_contact_pane

0x5deb,	// (0x00070d77) cell_myfav_contact_pane_cp1_ParamLimits

0x5deb,	// (0x00070d77) cell_myfav_contact_pane_cp1

0x5e03,	// (0x00070d8f) cell_myfav_contact_pane_cp2_ParamLimits

0x5e03,	// (0x00070d8f) cell_myfav_contact_pane_cp2

0x5e1b,	// (0x00070da7) cell_myfav_contact_pane_cp3_ParamLimits

0x5e1b,	// (0x00070da7) cell_myfav_contact_pane_cp3

0x5e32,	// (0x00070dbe) cell_myfav_contact_pane_cp4_ParamLimits

0x5e32,	// (0x00070dbe) cell_myfav_contact_pane_cp4

0x5e4a,	// (0x00070dd6) cell_myfav_contact_pane_cp5_ParamLimits

0x5e4a,	// (0x00070dd6) cell_myfav_contact_pane_cp5

0x5e5e,	// (0x00070dea) cell_myfav_contact_pane_cp6_ParamLimits

0x5e5e,	// (0x00070dea) cell_myfav_contact_pane_cp6

0x5e74,	// (0x00070e00) cell_myfav_contact_pane_cp7_ParamLimits

0x5e74,	// (0x00070e00) cell_myfav_contact_pane_cp7

0xd7b6,	// (0x00078742) listscroll_gen_pane_cp05

0x5e8e,	// (0x00070e1a) main_myfav_hc_pane_g1_ParamLimits

0x5e8e,	// (0x00070e1a) main_myfav_hc_pane_g1

0x5ea8,	// (0x00070e34) main_myfav_hc_pane_g2_ParamLimits

0x5ea8,	// (0x00070e34) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0007a8ec) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0007a8ec) main_myfav_hc_pane_g

0x5eda,	// (0x00070e66) main_myfav_hc_pane_t1_ParamLimits

0x5eda,	// (0x00070e66) main_myfav_hc_pane_t1

0xd7bf,	// (0x0007874b) main_myfav_hc_pane_t2_ParamLimits

0xd7bf,	// (0x0007874b) main_myfav_hc_pane_t2

0xd7d1,	// (0x0007875d) main_myfav_hc_pane_t3_ParamLimits

0xd7d1,	// (0x0007875d) main_myfav_hc_pane_t3

0x5ef1,	// (0x00070e7d) main_myfav_hc_pane_t4_ParamLimits

0x5ef1,	// (0x00070e7d) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0007a8f3) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0007a8f3) main_myfav_hc_pane_t

0xcce1,	// (0x00077c6d) bg_myfav_hc_instruction_pane_g1

0xd7e3,	// (0x0007876f) cell_myfav_contact_pane_g1_ParamLimits

0xd7e3,	// (0x0007876f) cell_myfav_contact_pane_g1

0xd7e3,	// (0x0007876f) cell_myfav_contact_pane_g2_ParamLimits

0xd7e3,	// (0x0007876f) cell_myfav_contact_pane_g2

0xd7ef,	// (0x0007877b) cell_myfav_contact_pane_g3_ParamLimits

0xd7ef,	// (0x0007877b) cell_myfav_contact_pane_g3

0xcf94,	// (0x00077f20) cell_myfav_contact_pane_g4_ParamLimits

0xcf94,	// (0x00077f20) cell_myfav_contact_pane_g4

0xd7fc,	// (0x00078788) cell_myfav_contact_pane_g5_ParamLimits

0xd7fc,	// (0x00078788) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0007a8fe) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0007a8fe) cell_myfav_contact_pane_g

0x5ec2,	// (0x00070e4e) main_myfav_hc_pane_g3_ParamLimits

0x5ec2,	// (0x00070e4e) main_myfav_hc_pane_g3

0x05e4,	// (0x0006b570) popup_adpt_find_window

0x5f19,	// (0x00070ea5) afind_page_pane_ParamLimits

0x5f19,	// (0x00070ea5) afind_page_pane

0x5f2e,	// (0x00070eba) aid_size_cell_afind_ParamLimits

0x5f2e,	// (0x00070eba) aid_size_cell_afind

0x5f4c,	// (0x00070ed8) bg_popup_sub_pane_cp09_ParamLimits

0x5f4c,	// (0x00070ed8) bg_popup_sub_pane_cp09

0x5f59,	// (0x00070ee5) find_pane_cp01_ParamLimits

0x5f59,	// (0x00070ee5) find_pane_cp01

0xd808,	// (0x00078794) grid_afind_control_pane_ParamLimits

0xd808,	// (0x00078794) grid_afind_control_pane

0x5f66,	// (0x00070ef2) grid_afind_pane_ParamLimits

0x5f66,	// (0x00070ef2) grid_afind_pane

0x5f85,	// (0x00070f11) cell_afind_pane_ParamLimits

0x5f85,	// (0x00070f11) cell_afind_pane

0xcce1,	// (0x00077c6d) afind_page_pane_g1

0x5fec,	// (0x00070f78) afind_page_pane_g2

0x5ff5,	// (0x00070f81) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0007a909) afind_page_pane_g

0x5ffe,	// (0x00070f8a) afind_page_pane_t1

0xd81c,	// (0x000787a8) cell_afind_grid_control_pane_ParamLimits

0xd81c,	// (0x000787a8) cell_afind_grid_control_pane

0xd5f4,	// (0x00078580) bg_button_pane_cp69_ParamLimits

0xd5f4,	// (0x00078580) bg_button_pane_cp69

0x601e,	// (0x00070faa) cell_afind_pane_g1_ParamLimits

0x601e,	// (0x00070faa) cell_afind_pane_g1

0x602b,	// (0x00070fb7) cell_afind_pane_t1_ParamLimits

0x602b,	// (0x00070fb7) cell_afind_pane_t1

0xaa93,	// (0x00075a1f) bg_button_pane_cp72

0xd82b,	// (0x000787b7) cell_afind_grid_control_pane_g1

0x30a7,	// (0x0006e033) aid_image_placing_area_ParamLimits

0x30a7,	// (0x0006e033) aid_image_placing_area

0xd2ba,	// (0x00078246) field_vitu_entry_pane_g1_ParamLimits

0xd2ba,	// (0x00078246) field_vitu_entry_pane_g1

0xd2c6,	// (0x00078252) field_vitu_entry_pane_g2_ParamLimits

0xd2c6,	// (0x00078252) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0007a7ba) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0007a7ba) field_vitu_entry_pane_g

0x51d7,	// (0x00070163) cell_vitu_itu_pane_g1_ParamLimits

0x5219,	// (0x000701a5) cell_vitu_itu_pane_t3_ParamLimits

0x5219,	// (0x000701a5) cell_vitu_itu_pane_t3

0xd5a4,	// (0x00078530) mp4_progress_pane_t1_ParamLimits

0xd5bd,	// (0x00078549) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0007a84f) mp4_progress_pane_t_ParamLimits

0xd5d6,	// (0x00078562) mup_progress_pane_cp04_ParamLimits

0x5f05,	// (0x00070e91) main_myfav_hc_pane_t5_ParamLimits

0x5f05,	// (0x00070e91) main_myfav_hc_pane_t5

0x93ea,	// (0x00074376) aid_zoom_text_primary

0x05e4,	// (0x0006b570) popup_adpt_find_window_ParamLimits

0x943c,	// (0x000743c8) main_cam_set_pane

0x5945,	// (0x000708d1) cam4_zoom_pane_ParamLimits

0x5945,	// (0x000708d1) cam4_zoom_pane

0x603d,	// (0x00070fc9) main_cam_set_pane_g1_ParamLimits

0x603d,	// (0x00070fc9) main_cam_set_pane_g1

0x604b,	// (0x00070fd7) main_cam_set_pane_g2_ParamLimits

0x604b,	// (0x00070fd7) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0007a910) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0007a910) main_cam_set_pane_g

0x606c,	// (0x00070ff8) main_cam_set_pane_t1_ParamLimits

0x606c,	// (0x00070ff8) main_cam_set_pane_t1

0x6087,	// (0x00071013) main_cset_listscroll_pane_ParamLimits

0x6087,	// (0x00071013) main_cset_listscroll_pane

0x60a7,	// (0x00071033) main_cset_slider_pane_ParamLimits

0x60a7,	// (0x00071033) main_cset_slider_pane

0xd83c,	// (0x000787c8) main_cset_list_pane_ParamLimits

0xd83c,	// (0x000787c8) main_cset_list_pane

0xd84c,	// (0x000787d8) scroll_pane_cp028

0x60cd,	// (0x00071059) aid_area_touch_slider

0x60e9,	// (0x00071075) cset_slider_pane

0x6113,	// (0x0007109f) main_cset_slider_pane_g1

0x6128,	// (0x000710b4) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0007a915) main_cset_slider_pane_g

0xd89d,	// (0x00078829) main_cset_slider_pane_t1

0x61cc,	// (0x00071158) main_cset_slider_pane_t2

0x61e6,	// (0x00071172) main_cset_slider_pane_t3

0x6200,	// (0x0007118c) main_cset_slider_pane_t4

0x621a,	// (0x000711a6) main_cset_slider_pane_t5

0x6234,	// (0x000711c0) main_cset_slider_pane_t6

0x6249,	// (0x000711d5) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0007a93a) main_cset_slider_pane_t

0x634d,	// (0x000712d9) cset_list_set_pane_ParamLimits

0x634d,	// (0x000712d9) cset_list_set_pane

0x635f,	// (0x000712eb) aid_position_infowindow_above

0x6367,	// (0x000712f3) aid_position_infowindow_below

0x636f,	// (0x000712fb) cset_list_set_pane_g1_ParamLimits

0x636f,	// (0x000712fb) cset_list_set_pane_g1

0x637b,	// (0x00071307) cset_list_set_pane_g3_ParamLimits

0x637b,	// (0x00071307) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0007a959) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0007a959) cset_list_set_pane_g

0x638a,	// (0x00071316) cset_list_set_pane_t1_ParamLimits

0x638a,	// (0x00071316) cset_list_set_pane_t1

0x9f3d,	// (0x00074ec9) list_highlight_pane_cp021_ParamLimits

0x9f3d,	// (0x00074ec9) list_highlight_pane_cp021

0xb5b8,	// (0x00076544) cset_slider_pane_g1

0xb5ca,	// (0x00076556) cset_slider_pane_g2

0xb5c1,	// (0x0007654d) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0007a95e) cset_slider_pane_g

0x9ae4,	// (0x00074a70) aid_area_touch_cam4_zoom

0x9aec,	// (0x00074a78) cam4_zoom_cont_pane

0x9af4,	// (0x00074a80) cam4_zoom_pane_g1

0x9afc,	// (0x00074a88) cam4_zoom_pane_g2

0x639f,	// (0x0007132b) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0007a965) cam4_zoom_pane_g

0x9b04,	// (0x00074a90) cam4_zoom_cont_pane_g1

0x9b0d,	// (0x00074a99) cam4_zoom_cont_pane_g2

0x9b16,	// (0x00074aa2) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0007a96c) cam4_zoom_cont_pane_g

0x5801,	// (0x0007078d) call4_image_pane_ParamLimits

0x5801,	// (0x0007078d) call4_image_pane

0xd600,	// (0x0007858c) call4_windows_conf_pane_ParamLimits

0xd641,	// (0x000785cd) popup_call4_audio_in_window_ParamLimits

0xd641,	// (0x000785cd) popup_call4_audio_in_window

0x93c4,	// (0x00074350) bg_popup_call2_act_pane_cp02

0xd6b7,	// (0x00078643) call4_list_conf_pane

0xcce1,	// (0x00077c6d) call4_image_pane_g1

0xcce1,	// (0x00077c6d) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0007a67b) call4_image_pane_g

0xd93d,	// (0x000788c9) list_single_graphic_popup_conf4_pane_ParamLimits

0xd93d,	// (0x000788c9) list_single_graphic_popup_conf4_pane

0x93c4,	// (0x00074350) list_highlight_pane_cp022

0xd950,	// (0x000788dc) list_single_graphic_popup_conf4_pane_g1

0xb1b4,	// (0x00076140) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0007a973) list_single_graphic_popup_conf4_pane_g

0xd958,	// (0x000788e4) list_single_graphic_popup_conf4_pane_t1

0x16db,	// (0x0006c667) popup_vtel_slider_window_ParamLimits

0x16db,	// (0x0006c667) popup_vtel_slider_window

0xd5e2,	// (0x0007856e) dialer2_ne_pane_t2_ParamLimits

0xd5e2,	// (0x0007856e) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0007a854) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0007a854) dialer2_ne_pane_t

0xcaba,	// (0x00077a46) bg_popup_sub_pane_cp010_ParamLimits

0xcaba,	// (0x00077a46) bg_popup_sub_pane_cp010

0x63a7,	// (0x00071333) popup_vtel_slider_window_g1_ParamLimits

0x63a7,	// (0x00071333) popup_vtel_slider_window_g1

0x63ba,	// (0x00071346) popup_vtel_slider_window_g2_ParamLimits

0x63ba,	// (0x00071346) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0007a978) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0007a978) popup_vtel_slider_window_g

0x6410,	// (0x0007139c) vtel_slider_pane_ParamLimits

0x6410,	// (0x0007139c) vtel_slider_pane

0x6432,	// (0x000713be) vtel_slider_pane_g1_ParamLimits

0x6432,	// (0x000713be) vtel_slider_pane_g1

0x6446,	// (0x000713d2) vtel_slider_pane_g2_ParamLimits

0x6446,	// (0x000713d2) vtel_slider_pane_g2

0x645e,	// (0x000713ea) vtel_slider_pane_g3_ParamLimits

0x645e,	// (0x000713ea) vtel_slider_pane_g3

0x6432,	// (0x000713be) vtel_slider_pane_g4_ParamLimits

0x6432,	// (0x000713be) vtel_slider_pane_g4

0x6474,	// (0x00071400) vtel_slider_pane_g5_ParamLimits

0x6474,	// (0x00071400) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0007a981) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0007a981) vtel_slider_pane_g

0x943c,	// (0x000743c8) main_gallery2_pane

0x5b45,	// (0x00070ad1) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b45,	// (0x00070ad1) aid_size_row_itut2_dropdow_list

0x5bd1,	// (0x00070b5d) grid_vitu2_function_top_pane_ParamLimits

0x5bd1,	// (0x00070b5d) grid_vitu2_function_top_pane

0x5c3b,	// (0x00070bc7) popup_vitu2_dropdown_list_window_ParamLimits

0x5c3b,	// (0x00070bc7) popup_vitu2_dropdown_list_window

0x5c64,	// (0x00070bf0) popup_vitu2_match_list_window

0x6498,	// (0x00071424) cell_vitu2_function_top_pane_ParamLimits

0x6498,	// (0x00071424) cell_vitu2_function_top_pane

0x64b0,	// (0x0007143c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x64b0,	// (0x0007143c) cell_vitu2_function_top_pane_cp01

0x64cc,	// (0x00071458) cell_vitu2_function_top_wide_pane_ParamLimits

0x64cc,	// (0x00071458) cell_vitu2_function_top_wide_pane

0x943c,	// (0x000743c8) bg_button_pane_cp012

0x64e8,	// (0x00071474) cell_vitu2_function_top_pane_g1

0x9b1f,	// (0x00074aab) bg_button_pane_cp013_ParamLimits

0x9b1f,	// (0x00074aab) bg_button_pane_cp013

0x64fc,	// (0x00071488) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x64fc,	// (0x00071488) cell_vitu2_function_top_wide_pane_g1

0x943c,	// (0x000743c8) bg_popup_sub_pane_cp20

0x6514,	// (0x000714a0) list_vitu2_match_list_pane

0xd732,	// (0x000786be) bg_popup_sub_pane_cp20_g1

0xd73a,	// (0x000786c6) bg_popup_sub_pane_cp20_g2

0xac9a,	// (0x00075c26) bg_popup_sub_pane_cp20_g3

0xd742,	// (0x000786ce) bg_popup_sub_pane_cp20_g4

0xac7a,	// (0x00075c06) bg_popup_sub_pane_cp20_g5

0xd96e,	// (0x000788fa) bg_popup_sub_pane_cp20_g6

0xd752,	// (0x000786de) bg_popup_sub_pane_cp20_g7

0xd75a,	// (0x000786e6) bg_popup_sub_pane_cp20_g8

0xd762,	// (0x000786ee) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0007a98c) bg_popup_sub_pane_cp20_g

0x9b3b,	// (0x00074ac7) list_vitu2_match_list_item_pane_ParamLimits

0x9b3b,	// (0x00074ac7) list_vitu2_match_list_item_pane

0x9b4d,	// (0x00074ad9) list_vitu2_match_list_item_pane_t1

0x944a,	// (0x000743d6) bg_popup_sub_pane_cp21

0x9b5b,	// (0x00074ae7) grid_vitu2_dropdown_list_pane

0x6582,	// (0x0007150e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6582,	// (0x0007150e) cell_vitu2_dropdown_list_char_pane

0x65a3,	// (0x0007152f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x65a3,	// (0x0007152f) cell_vitu2_dropdown_list_ctrl_pane

0xd976,	// (0x00078902) cell_vitu2_dropdown_list_char_pane_g1

0xd97f,	// (0x0007890b) cell_vitu2_dropdown_list_char_pane_g2

0xd988,	// (0x00078914) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0007a9a9) cell_vitu2_dropdown_list_char_pane_g

0x65cf,	// (0x0007155b) cell_vitu2_dropdown_list_char_pane_t1

0x65dd,	// (0x00071569) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x65dd,	// (0x00071569) cell_vitu2_dropdown_list_ctrl_pane_g1

0x65ea,	// (0x00071576) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x65ea,	// (0x00071576) cell_vitu2_dropdown_list_ctrl_pane_g2

0x65f7,	// (0x00071583) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x65f7,	// (0x00071583) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6604,	// (0x00071590) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6604,	// (0x00071590) cell_vitu2_dropdown_list_ctrl_pane_g4

0x99fd,	// (0x00074989) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x99fd,	// (0x00074989) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0007a9b0) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0007a9b0) cell_vitu2_dropdown_list_ctrl_pane_g

0x6620,	// (0x000715ac) aid_size_cell_gallery2_ParamLimits

0x6620,	// (0x000715ac) aid_size_cell_gallery2

0x663e,	// (0x000715ca) grid_gallery2_pane_ParamLimits

0x663e,	// (0x000715ca) grid_gallery2_pane

0x6658,	// (0x000715e4) scroll_pane_cp029_ParamLimits

0x6658,	// (0x000715e4) scroll_pane_cp029

0x6664,	// (0x000715f0) cell_gallery2_pane_ParamLimits

0x6664,	// (0x000715f0) cell_gallery2_pane

0xd991,	// (0x0007891d) cell_gallery2_pane_g2

0x66c0,	// (0x0007164c) cell_gallery2_pane_g3

0xd999,	// (0x00078925) cell_gallery2_pane_g4

0xd9a1,	// (0x0007892d) cell_gallery2_pane_g5

0xaa41,	// (0x000759cd) grid_highlight_pane_cp10

0x5c64,	// (0x00070bf0) popup_vitu2_match_list_window_ParamLimits

0x5c79,	// (0x00070c05) popup_vitu2_query_window_ParamLimits

0x5c79,	// (0x00070c05) popup_vitu2_query_window

0x944a,	// (0x000743d6) bg_vitu2_candi_button_pane

0xd976,	// (0x00078902) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd97f,	// (0x0007890b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd988,	// (0x00078914) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x66c8,	// (0x00071654) bg_button_pane_cp015

0x66dc,	// (0x00071668) bg_button_pane_cp016

0x66ef,	// (0x0007167b) bg_button_pane_cp017

0xc8cd,	// (0x00077859) bg_popup_sub_pane_cp22

0xd9a9,	// (0x00078935) popup_vitu2_query_window_g1

0x6734,	// (0x000716c0) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0007a9bb) popup_vitu2_query_window_g

0x6753,	// (0x000716df) popup_vitu2_query_window_t1_ParamLimits

0x6753,	// (0x000716df) popup_vitu2_query_window_t1

0x6788,	// (0x00071714) popup_vitu2_query_window_t2_ParamLimits

0x6788,	// (0x00071714) popup_vitu2_query_window_t2

0x679a,	// (0x00071726) popup_vitu2_query_window_t3_ParamLimits

0x679a,	// (0x00071726) popup_vitu2_query_window_t3

0x67c2,	// (0x0007174e) popup_vitu2_query_window_t4_ParamLimits

0x67c2,	// (0x0007174e) popup_vitu2_query_window_t4

0x67e3,	// (0x0007176f) popup_vitu2_query_window_t5_ParamLimits

0x67e3,	// (0x0007176f) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0007a9c2) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0007a9c2) popup_vitu2_query_window_t

0xd834,	// (0x000787c0) main_cset_text_pane

0x60cd,	// (0x00071059) aid_area_touch_slider_ParamLimits

0x60e9,	// (0x00071075) cset_slider_pane_ParamLimits

0x6113,	// (0x0007109f) main_cset_slider_pane_g1_ParamLimits

0x6128,	// (0x000710b4) main_cset_slider_pane_g2_ParamLimits

0xd855,	// (0x000787e1) main_cset_slider_pane_g3_ParamLimits

0xd855,	// (0x000787e1) main_cset_slider_pane_g3

0x613d,	// (0x000710c9) main_cset_slider_pane_g4_ParamLimits

0x613d,	// (0x000710c9) main_cset_slider_pane_g4

0x614c,	// (0x000710d8) main_cset_slider_pane_g5_ParamLimits

0x614c,	// (0x000710d8) main_cset_slider_pane_g5

0x6158,	// (0x000710e4) main_cset_slider_pane_g6_ParamLimits

0x6158,	// (0x000710e4) main_cset_slider_pane_g6

0xf989,	// (0x0007a915) main_cset_slider_pane_g_ParamLimits

0xd89d,	// (0x00078829) main_cset_slider_pane_t1_ParamLimits

0x61cc,	// (0x00071158) main_cset_slider_pane_t2_ParamLimits

0x61e6,	// (0x00071172) main_cset_slider_pane_t3_ParamLimits

0x6200,	// (0x0007118c) main_cset_slider_pane_t4_ParamLimits

0x621a,	// (0x000711a6) main_cset_slider_pane_t5_ParamLimits

0x6234,	// (0x000711c0) main_cset_slider_pane_t6_ParamLimits

0x6249,	// (0x000711d5) main_cset_slider_pane_t7_ParamLimits

0x6273,	// (0x000711ff) main_cset_slider_pane_t8_ParamLimits

0x6273,	// (0x000711ff) main_cset_slider_pane_t8

0x629b,	// (0x00071227) main_cset_slider_pane_t9_ParamLimits

0x629b,	// (0x00071227) main_cset_slider_pane_t9

0x62c3,	// (0x0007124f) main_cset_slider_pane_t10_ParamLimits

0x62c3,	// (0x0007124f) main_cset_slider_pane_t10

0x62eb,	// (0x00071277) main_cset_slider_pane_t11_ParamLimits

0x62eb,	// (0x00071277) main_cset_slider_pane_t11

0x6313,	// (0x0007129f) main_cset_slider_pane_t12_ParamLimits

0x6313,	// (0x0007129f) main_cset_slider_pane_t12

0x6330,	// (0x000712bc) main_cset_slider_pane_t13_ParamLimits

0x6330,	// (0x000712bc) main_cset_slider_pane_t13

0xf9ae,	// (0x0007a93a) main_cset_slider_pane_t_ParamLimits

0x93c4,	// (0x00074350) bg_popup_sub_pane_cp011

0xd9b5,	// (0x00078941) main_cset_text_pane_g1

0xd9bd,	// (0x00078949) main_cset_text_pane_t1

0xd9cb,	// (0x00078957) main_cset_text_pane_t2

0xd9d9,	// (0x00078965) main_cset_text_pane_t3

0xd9e7,	// (0x00078973) main_cset_text_pane_t4

0xd9f5,	// (0x00078981) main_cset_text_pane_t5

0xda03,	// (0x0007898f) main_cset_text_pane_t6

0xda11,	// (0x0007899d) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0007a9d1) main_cset_text_pane_t

0x944a,	// (0x000743d6) main_cam4_burst_pane

0x944a,	// (0x000743d6) main_cam5_pane

0x600c,	// (0x00070f98) bg_button_pane_cp019

0x6015,	// (0x00070fa1) bg_button_pane_cp020

0xd861,	// (0x000787ed) main_cset_slider_pane_g7_ParamLimits

0xd861,	// (0x000787ed) main_cset_slider_pane_g7

0xd86d,	// (0x000787f9) main_cset_slider_pane_g8_ParamLimits

0xd86d,	// (0x000787f9) main_cset_slider_pane_g8

0x616c,	// (0x000710f8) main_cset_slider_pane_g9_ParamLimits

0x616c,	// (0x000710f8) main_cset_slider_pane_g9

0x6178,	// (0x00071104) main_cset_slider_pane_g10_ParamLimits

0x6178,	// (0x00071104) main_cset_slider_pane_g10

0x6184,	// (0x00071110) main_cset_slider_pane_g11_ParamLimits

0x6184,	// (0x00071110) main_cset_slider_pane_g11

0x6190,	// (0x0007111c) main_cset_slider_pane_g12_ParamLimits

0x6190,	// (0x0007111c) main_cset_slider_pane_g12

0x619c,	// (0x00071128) main_cset_slider_pane_g13_ParamLimits

0x619c,	// (0x00071128) main_cset_slider_pane_g13

0x61a8,	// (0x00071134) main_cset_slider_pane_g14_ParamLimits

0x61a8,	// (0x00071134) main_cset_slider_pane_g14

0x61b4,	// (0x00071140) main_cset_slider_pane_g15_ParamLimits

0x61b4,	// (0x00071140) main_cset_slider_pane_g15

0xd8cb,	// (0x00078857) main_cset_slider_pane_t14_ParamLimits

0xd8cb,	// (0x00078857) main_cset_slider_pane_t14

0xd904,	// (0x00078890) main_cset_slider_pane_t15_ParamLimits

0xd904,	// (0x00078890) main_cset_slider_pane_t15

0x685a,	// (0x000717e6) aid_cam4_burst_size_cell_ParamLimits

0x685a,	// (0x000717e6) aid_cam4_burst_size_cell

0x687a,	// (0x00071806) grid_cam4_burst_pane_ParamLimits

0x687a,	// (0x00071806) grid_cam4_burst_pane

0x68b2,	// (0x0007183e) linegrid_cam4_burst_pane_ParamLimits

0x68b2,	// (0x0007183e) linegrid_cam4_burst_pane

0xda1f,	// (0x000789ab) scroll_pane_cp30_ParamLimits

0xda1f,	// (0x000789ab) scroll_pane_cp30

0x68d6,	// (0x00071862) cell_cam4_burst_pane_ParamLimits

0x68d6,	// (0x00071862) cell_cam4_burst_pane

0xda2b,	// (0x000789b7) linegrid_cam4_burst_pane_g1_ParamLimits

0xda2b,	// (0x000789b7) linegrid_cam4_burst_pane_g1

0x6923,	// (0x000718af) linegrid_cam4_burst_pane_g2_ParamLimits

0x6923,	// (0x000718af) linegrid_cam4_burst_pane_g2

0xda38,	// (0x000789c4) linegrid_cam4_burst_pane_g3_ParamLimits

0xda38,	// (0x000789c4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0007a9e0) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0007a9e0) linegrid_cam4_burst_pane_g

0x6934,	// (0x000718c0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6934,	// (0x000718c0) linegrid_cam4_burst_pane_g3_copy1

0xda45,	// (0x000789d1) linegrid_cam4_burst_pane_g4_ParamLimits

0xda45,	// (0x000789d1) linegrid_cam4_burst_pane_g4

0x694e,	// (0x000718da) linegrid_cam4_burst_pane_g5_ParamLimits

0x694e,	// (0x000718da) linegrid_cam4_burst_pane_g5

0x695f,	// (0x000718eb) linegrid_cam4_burst_pane_g6_ParamLimits

0x695f,	// (0x000718eb) linegrid_cam4_burst_pane_g6

0xda52,	// (0x000789de) linegrid_cam4_burst_pane_g7_ParamLimits

0xda52,	// (0x000789de) linegrid_cam4_burst_pane_g7

0x6976,	// (0x00071902) cell_cam4_burst_pane_g1

0xda6b,	// (0x000789f7) main_cam5_pane_t1_ParamLimits

0xda6b,	// (0x000789f7) main_cam5_pane_t1

0xda7d,	// (0x00078a09) main_cam5_pane_t2_ParamLimits

0xda7d,	// (0x00078a09) main_cam5_pane_t2

0xda8f,	// (0x00078a1b) main_cam5_pane_t3_ParamLimits

0xda8f,	// (0x00078a1b) main_cam5_pane_t3

0xdaa1,	// (0x00078a2d) main_cam5_pane_t4_ParamLimits

0xdaa1,	// (0x00078a2d) main_cam5_pane_t4

0xdab9,	// (0x00078a45) main_cam5_pane_t5_ParamLimits

0xdab9,	// (0x00078a45) main_cam5_pane_t5

0xdacd,	// (0x00078a59) main_cam5_pane_t6_ParamLimits

0xdacd,	// (0x00078a59) main_cam5_pane_t6

0xdae1,	// (0x00078a6d) main_cam5_pane_t7_ParamLimits

0xdae1,	// (0x00078a6d) main_cam5_pane_t7

0xdaf3,	// (0x00078a7f) main_cam5_pane_t8_ParamLimits

0xdaf3,	// (0x00078a7f) main_cam5_pane_t8

0xdb0f,	// (0x00078a9b) main_cam5_pane_t9_ParamLimits

0xdb0f,	// (0x00078a9b) main_cam5_pane_t9

0xdb21,	// (0x00078aad) main_cam5_pane_t10_ParamLimits

0xdb21,	// (0x00078aad) main_cam5_pane_t10

0xdb33,	// (0x00078abf) main_cam5_pane_t11_ParamLimits

0xdb33,	// (0x00078abf) main_cam5_pane_t11

0xdb45,	// (0x00078ad1) main_cam5_pane_t12_ParamLimits

0xdb45,	// (0x00078ad1) main_cam5_pane_t12

0xdb5a,	// (0x00078ae6) main_cam5_pane_t13_ParamLimits

0xdb5a,	// (0x00078ae6) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0007a9ec) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0007a9ec) main_cam5_pane_t

0x0666,	// (0x0006b5f2) popup_scut_keymap_window_ParamLimits

0x0666,	// (0x0006b5f2) popup_scut_keymap_window

0x6989,	// (0x00071915) aid_size_cell_brow_shortcut

0xaa41,	// (0x000759cd) bg_popup_window_pane_cp010

0x6995,	// (0x00071921) grid_scut_pane

0x69a1,	// (0x0007192d) cell_scut_pane_ParamLimits

0x69a1,	// (0x0007192d) cell_scut_pane

0x69b8,	// (0x00071944) cell_scut_pane_g1

0xdb77,	// (0x00078b03) cell_scut_pane_t1

0xdb86,	// (0x00078b12) cell_scut_pane_t2

0x69c1,	// (0x0007194d) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0007aa07) cell_scut_pane_t

0x46cc,	// (0x0006f658) main_mup3_pane_g8_ParamLimits

0x46cc,	// (0x0006f658) main_mup3_pane_g8

0x5b5d,	// (0x00070ae9) area_vitu2_query_pane_ParamLimits

0x5b5d,	// (0x00070ae9) area_vitu2_query_pane

0x6702,	// (0x0007168e) input_focus_pane_cp08

0xdb95,	// (0x00078b21) area_vitu2_query_pane_g1

0x69cf,	// (0x0007195b) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0007aa0e) area_vitu2_query_pane_g

0x69e0,	// (0x0007196c) area_vitu2_query_pane_t1_ParamLimits

0x69e0,	// (0x0007196c) area_vitu2_query_pane_t1

0x69f4,	// (0x00071980) area_vitu2_query_pane_t2_ParamLimits

0x69f4,	// (0x00071980) area_vitu2_query_pane_t2

0x6a08,	// (0x00071994) area_vitu2_query_pane_t3_ParamLimits

0x6a08,	// (0x00071994) area_vitu2_query_pane_t3

0x9fdc,	// (0x00074f68) area_vitu2_query_pane_t4_ParamLimits

0x9fdc,	// (0x00074f68) area_vitu2_query_pane_t4

0xa004,	// (0x00074f90) area_vitu2_query_pane_t5_ParamLimits

0xa004,	// (0x00074f90) area_vitu2_query_pane_t5

0xa02c,	// (0x00074fb8) area_vitu2_query_pane_t6_ParamLimits

0xa02c,	// (0x00074fb8) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0007aa13) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0007aa13) area_vitu2_query_pane_t

0x6a30,	// (0x000719bc) bg_button_pane_cp018

0x6a3e,	// (0x000719ca) bg_button_pane_cp021

0x6a4a,	// (0x000719d6) bg_button_pane_cp022

0x6a5b,	// (0x000719e7) input_focus_pane_cp09

0xb2c3,	// (0x0007624f) aid_size_touch_mv_arrow_left

0xb2ee,	// (0x0007627a) aid_size_touch_mv_arrow_right

0xd879,	// (0x00078805) main_cset_slider_pane_g16_ParamLimits

0xd879,	// (0x00078805) main_cset_slider_pane_g16

0xd885,	// (0x00078811) main_cset_slider_pane_g17_ParamLimits

0xd885,	// (0x00078811) main_cset_slider_pane_g17

0x6976,	// (0x00071902) cell_cam4_burst_pane_g1_ParamLimits

0x93c4,	// (0x00074350) compa_mode_pane

0x63ca,	// (0x00071356) popup_vtel_slider_window_g3_ParamLimits

0x63ca,	// (0x00071356) popup_vtel_slider_window_g3

0x63e1,	// (0x0007136d) popup_vtel_slider_window_g4_ParamLimits

0x63e1,	// (0x0007136d) popup_vtel_slider_window_g4

0x63f8,	// (0x00071384) popup_vtel_slider_window_t1_ParamLimits

0x63f8,	// (0x00071384) popup_vtel_slider_window_t1

0x944a,	// (0x000743d6) main_cl_pane

0x966d,	// (0x000745f9) popup_imed_adjust2_window_ParamLimits

0xc8cd,	// (0x00077859) bg_tb_trans_pane_cp05_ParamLimits

0xd1ef,	// (0x0007817b) popup_imed_adjust2_window_g1_ParamLimits

0xd1fe,	// (0x0007818a) popup_imed_adjust2_window_g2_ParamLimits

0xd1fe,	// (0x0007818a) popup_imed_adjust2_window_g2

0xd20a,	// (0x00078196) popup_imed_adjust2_window_g3_ParamLimits

0xd20a,	// (0x00078196) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0007a77e) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0007a77e) popup_imed_adjust2_window_g

0xd216,	// (0x000781a2) popup_imed_adjust2_window_t1_ParamLimits

0xd22e,	// (0x000781ba) slider_imed_adjust_pane_ParamLimits

0xd242,	// (0x000781ce) slider_imed_adjust_pane_g1_ParamLimits

0xd252,	// (0x000781de) slider_imed_adjust_pane_g2_ParamLimits

0xd262,	// (0x000781ee) slider_imed_adjust_pane_g3_ParamLimits

0xd273,	// (0x000781ff) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0007a785) slider_imed_adjust_pane_g_ParamLimits

0x58e6,	// (0x00070872) aid_touch_area_cam4_ParamLimits

0x58e6,	// (0x00070872) aid_touch_area_cam4

0x99e1,	// (0x0007496d) battery_pane_cp01

0x59b5,	// (0x00070941) main_camera4_pane_g6_ParamLimits

0x59b5,	// (0x00070941) main_camera4_pane_g6

0x59df,	// (0x0007096b) main_camera4_pane_t2_ParamLimits

0x59df,	// (0x0007096b) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0007a888) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0007a888) main_camera4_pane_t

0x5a14,	// (0x000709a0) aid_touch_area_vid4_ParamLimits

0x5a14,	// (0x000709a0) aid_touch_area_vid4

0x5a68,	// (0x000709f4) main_video4_pane_g5_ParamLimits

0x5a68,	// (0x000709f4) main_video4_pane_g5

0x5a8d,	// (0x00070a19) vid4_progress_pane_ParamLimits

0x5a8d,	// (0x00070a19) vid4_progress_pane

0xd891,	// (0x0007881d) main_cset_slider_pane_g18_ParamLimits

0xd891,	// (0x0007881d) main_cset_slider_pane_g18

0xda5f,	// (0x000789eb) cell_cam4_burst_pane_g2_ParamLimits

0xda5f,	// (0x000789eb) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0007a9e7) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0007a9e7) cell_cam4_burst_pane_g

0xa84c,	// (0x000757d8) bg_cl_pane_ParamLimits

0xa84c,	// (0x000757d8) bg_cl_pane

0x6a6c,	// (0x000719f8) cl_header_pane_ParamLimits

0x6a6c,	// (0x000719f8) cl_header_pane

0x6a80,	// (0x00071a0c) cl_listscroll_pane_ParamLimits

0x6a80,	// (0x00071a0c) cl_listscroll_pane

0xdba1,	// (0x00078b2d) bg_cl_pane_g1

0xdba9,	// (0x00078b35) bg_cl_pane_g2

0xdbb1,	// (0x00078b3d) bg_cl_pane_g3

0xdbb9,	// (0x00078b45) bg_cl_pane_g4

0xdbc1,	// (0x00078b4d) bg_cl_pane_g5

0xdbc9,	// (0x00078b55) bg_cl_pane_g6

0xdbd1,	// (0x00078b5d) bg_cl_pane_g7

0xdbd9,	// (0x00078b65) bg_cl_pane_g8

0xdbe1,	// (0x00078b6d) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0007aa22) bg_cl_pane_g

0x6a90,	// (0x00071a1c) aid_height_cl_leading_ParamLimits

0x6a90,	// (0x00071a1c) aid_height_cl_leading

0x6a9c,	// (0x00071a28) aid_height_cl_text_ParamLimits

0x6a9c,	// (0x00071a28) aid_height_cl_text

0x9f3d,	// (0x00074ec9) bg_cl_header_pane_ParamLimits

0x9f3d,	// (0x00074ec9) bg_cl_header_pane

0x6abb,	// (0x00071a47) cl_header_pane_g1_ParamLimits

0x6abb,	// (0x00071a47) cl_header_pane_g1

0x6ad1,	// (0x00071a5d) cl_header_pane_t1_ParamLimits

0x6ad1,	// (0x00071a5d) cl_header_pane_t1

0xdbe9,	// (0x00078b75) cl_list_pane

0xd84c,	// (0x000787d8) hc_scroll_pane_cp01

0xac7a,	// (0x00075c06) bg_cl_header_pane_g1

0xd732,	// (0x000786be) bg_cl_header_pane_g2

0xac9a,	// (0x00075c26) bg_cl_header_pane_g3

0xd742,	// (0x000786ce) bg_cl_header_pane_g4

0xd73a,	// (0x000786c6) bg_cl_header_pane_g5

0xd96e,	// (0x000788fa) bg_cl_header_pane_g6

0xd75a,	// (0x000786e6) bg_cl_header_pane_g7

0xd762,	// (0x000786ee) bg_cl_header_pane_g8

0xd752,	// (0x000786de) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0007aa35) bg_cl_header_pane_g

0x6aea,	// (0x00071a76) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6aea,	// (0x00071a76) hc_cl_list_double_graphic_heading_pane

0x6afb,	// (0x00071a87) hc_cl_list_single_graphic_pane_ParamLimits

0x6afb,	// (0x00071a87) hc_cl_list_single_graphic_pane

0x6b14,	// (0x00071aa0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b14,	// (0x00071aa0) hc_cl_list_single_graphic_pane_g1

0x6b20,	// (0x00071aac) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b20,	// (0x00071aac) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0007aa48) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0007aa48) hc_cl_list_single_graphic_pane_g

0x6b34,	// (0x00071ac0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b34,	// (0x00071ac0) hc_cl_list_single_graphic_pane_t1

0x6b14,	// (0x00071aa0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b14,	// (0x00071aa0) hc_cl_list_double_graphic_heading_pane_g1

0x6b49,	// (0x00071ad5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b49,	// (0x00071ad5) hc_cl_list_double_graphic_heading_pane_g2

0x6b5d,	// (0x00071ae9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6b5d,	// (0x00071ae9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0007aa4d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0007aa4d) hc_cl_list_double_graphic_heading_pane_g

0x6b71,	// (0x00071afd) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6b71,	// (0x00071afd) hc_cl_list_double_graphic_heading_pane_t1

0x6b86,	// (0x00071b12) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6b86,	// (0x00071b12) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0007aa54) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0007aa54) hc_cl_list_double_graphic_heading_pane_t

0x9b6b,	// (0x00074af7) vid4_progress_pane_g1

0x9b7b,	// (0x00074b07) vid4_progress_pane_g2

0x6b9b,	// (0x00071b27) vid4_progress_pane_g3

0x9b8b,	// (0x00074b17) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0007aa59) vid4_progress_pane_g

0x6bad,	// (0x00071b39) vid4_progress_pane_t1

0x9ba3,	// (0x00074b2f) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0007aa64) vid4_progress_pane_t

0x6bc3,	// (0x00071b4f) wait_bar_pane_cp07

0xcac8,	// (0x00077a54) blid_firmament_pane_ParamLimits

0xcb0b,	// (0x00077a97) popup_blid_sat_info2_window_g1

0xcb2f,	// (0x00077abb) popup_blid_sat_info2_window_t3

0xcb3d,	// (0x00077ac9) popup_blid_sat_info2_window_t4

0xcb4b,	// (0x00077ad7) popup_blid_sat_info2_window_t5

0xcb59,	// (0x00077ae5) popup_blid_sat_info2_window_t6

0xcb69,	// (0x00077af5) popup_blid_sat_info2_window_t7

0xcb77,	// (0x00077b03) popup_blid_sat_info2_window_t8

0xcb85,	// (0x00077b11) popup_blid_sat_info2_window_t9

0xcb93,	// (0x00077b1f) popup_blid_sat_info2_window_t10

0xcc55,	// (0x00077be1) aid_firma_cardinal_ParamLimits

0xcc69,	// (0x00077bf5) blid_firmament_pane_t1_ParamLimits

0xcc80,	// (0x00077c0c) blid_firmament_pane_t2_ParamLimits

0xcc97,	// (0x00077c23) blid_firmament_pane_t3_ParamLimits

0xccae,	// (0x00077c3a) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0007a672) blid_firmament_pane_t_ParamLimits

0xccd1,	// (0x00077c5d) blid_sat_info_pane_ParamLimits

0x943c,	// (0x000743c8) main_cam_set_pane_ParamLimits

0x4f8f,	// (0x0006ff1b) aid_size_cell_colour_35_ParamLimits

0x4faf,	// (0x0006ff3b) aid_size_cell_colour_112_ParamLimits

0x4fcf,	// (0x0006ff5b) aid_size_cell_effect_ParamLimits

0xc8cd,	// (0x00077859) bg_tb_trans_pane_cp02_ParamLimits

0xaee2,	// (0x00075e6e) heading_imed_pane_ParamLimits

0x4fef,	// (0x0006ff7b) listscroll_imed_pane_ParamLimits

0xbeb3,	// (0x00076e3f) popup_call2_audio_first_window_g5_ParamLimits

0xbeb3,	// (0x00076e3f) popup_call2_audio_first_window_g5

0x558d,	// (0x00070519) aid_size_touch_image3_arrow_left_ParamLimits

0x558d,	// (0x00070519) aid_size_touch_image3_arrow_left

0x55b9,	// (0x00070545) aid_size_touch_image3_arrow_right_ParamLimits

0x55b9,	// (0x00070545) aid_size_touch_image3_arrow_right

0x9bb8,	// (0x00074b44) vid4_progress_pane_t3

0x5304,	// (0x00070290) main_hwr_training_symbol_option_pane_ParamLimits

0x5304,	// (0x00070290) main_hwr_training_symbol_option_pane

0xd4e4,	// (0x00078470) popup_hwr_training_preview_window_ParamLimits

0xd4e4,	// (0x00078470) popup_hwr_training_preview_window

0x5324,	// (0x000702b0) hwr_training_navi_pane_g5_ParamLimits

0x5324,	// (0x000702b0) hwr_training_navi_pane_g5

0xd720,	// (0x000786ac) popup_char_count_window

0x943c,	// (0x000743c8) bg_popup_sub_pane_cp20_ParamLimits

0x6514,	// (0x000714a0) list_vitu2_match_list_pane_ParamLimits

0x6523,	// (0x000714af) vitu2_page_scroll_pane_ParamLimits

0x6523,	// (0x000714af) vitu2_page_scroll_pane

0xdbf2,	// (0x00078b7e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbf2,	// (0x00078b7e) list_single_hwr_training_symbol_option_pane

0xdc05,	// (0x00078b91) list_single_hwr_training_symbol_option_pane_g1

0xdc0d,	// (0x00078b99) list_single_hwr_training_symbol_option_pane_t1

0xdc1b,	// (0x00078ba7) bg_button_pane_cp023

0xdc24,	// (0x00078bb0) bg_button_pane_cp024

0x6c03,	// (0x00071b8f) vitu2_page_scroll_pane_g1

0x6c0b,	// (0x00071b97) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0007aa6b) vitu2_page_scroll_pane_g

0x6c13,	// (0x00071b9f) vitu2_page_scroll_pane_t1

0xcd0a,	// (0x00077c96) popup_char_count_window_g1

0xdc57,	// (0x00078be3) popup_char_count_window_g2

0xdc60,	// (0x00078bec) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0007aa70) popup_char_count_window_g

0xdc69,	// (0x00078bf5) popup_char_count_window_t1

0x944a,	// (0x000743d6) main_vded2_pane

0xd1db,	// (0x00078167) aid_size_cell_imed_line

0xd1e5,	// (0x00078171) grid_imed_line_width_pane

0x9a9f,	// (0x00074a2b) vid4_indicators_pane_g4

0xdc77,	// (0x00078c03) cell_imed_line_width_pane_ParamLimits

0xdc77,	// (0x00078c03) cell_imed_line_width_pane

0xdc8b,	// (0x00078c17) cell_imed_line_width_pane_g1

0xd4dc,	// (0x00078468) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0007aa77) cell_imed_line_width_pane_g

0x6c22,	// (0x00071bae) main_vded2_pane_g1_ParamLimits

0x6c22,	// (0x00071bae) main_vded2_pane_g1

0x6c38,	// (0x00071bc4) main_vded2_pane_g2_ParamLimits

0x6c38,	// (0x00071bc4) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0007aa7c) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0007aa7c) main_vded2_pane_g

0x6c4a,	// (0x00071bd6) vded2_slider_pane_ParamLimits

0x6c4a,	// (0x00071bd6) vded2_slider_pane

0x6c5a,	// (0x00071be6) aid_size_touch_vded2_end

0x6c64,	// (0x00071bf0) aid_size_touch_vded2_playhead

0xdc94,	// (0x00078c20) aid_size_touch_vded2_start

0xdc9c,	// (0x00078c28) vded2_slider_bg_pane

0xdca5,	// (0x00078c31) vded2_slider_pane_g1

0xdcae,	// (0x00078c3a) vded2_slider_pane_g2

0x6c6e,	// (0x00071bfa) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0007aa81) vded2_slider_pane_g

0xdcb6,	// (0x00078c42) vded2_slider_bg_pane_g1

0xdcbf,	// (0x00078c4b) vded2_slider_bg_pane_g2

0xdcc8,	// (0x00078c54) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0007aa88) vded2_slider_bg_pane_g

0x2d15,	// (0x0006dca1) aid_postcard_touch_down_pane_ParamLimits

0x2d15,	// (0x0006dca1) aid_postcard_touch_down_pane

0x2d2b,	// (0x0006dcb7) aid_postcard_touch_up_pane_ParamLimits

0x2d2b,	// (0x0006dcb7) aid_postcard_touch_up_pane

0x944a,	// (0x000743d6) main_blid2_pane

0x9653,	// (0x000745df) popup_blid2_search_window

0x93c4,	// (0x00074350) blid2_gps_pane

0x93c4,	// (0x00074350) blid2_navig_pane

0x93c4,	// (0x00074350) blid2_search_pane

0x93c4,	// (0x00074350) blid2_tripm_pane

0x6c79,	// (0x00071c05) blid2_search_pane_g1_ParamLimits

0x6c79,	// (0x00071c05) blid2_search_pane_g1

0x6c91,	// (0x00071c1d) blid2_search_pane_t1_ParamLimits

0x6c91,	// (0x00071c1d) blid2_search_pane_t1

0x6ca3,	// (0x00071c2f) aid_size_cell_blid2_gps_ParamLimits

0x6ca3,	// (0x00071c2f) aid_size_cell_blid2_gps

0x6cbb,	// (0x00071c47) blid2_gps_pane_g1_ParamLimits

0x6cbb,	// (0x00071c47) blid2_gps_pane_g1

0x6ccf,	// (0x00071c5b) grid_blid2_satellite_pane_ParamLimits

0x6ccf,	// (0x00071c5b) grid_blid2_satellite_pane

0x6ce9,	// (0x00071c75) blid2_navig_pane_g1_ParamLimits

0x6ce9,	// (0x00071c75) blid2_navig_pane_g1

0x6cf5,	// (0x00071c81) blid2_navig_pane_t1_ParamLimits

0x6cf5,	// (0x00071c81) blid2_navig_pane_t1

0x6d10,	// (0x00071c9c) blid2_navig_pane_t2_ParamLimits

0x6d10,	// (0x00071c9c) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0007aa8f) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0007aa8f) blid2_navig_pane_t

0x6d2b,	// (0x00071cb7) blid2_navig_ring_pane_ParamLimits

0x6d2b,	// (0x00071cb7) blid2_navig_ring_pane

0x6d44,	// (0x00071cd0) blid2_speed_pane_ParamLimits

0x6d44,	// (0x00071cd0) blid2_speed_pane

0x6d50,	// (0x00071cdc) blid2_tripm_pane_g1_ParamLimits

0x6d50,	// (0x00071cdc) blid2_tripm_pane_g1

0x6d6b,	// (0x00071cf7) blid2_tripm_pane_g2_ParamLimits

0x6d6b,	// (0x00071cf7) blid2_tripm_pane_g2

0x6d7f,	// (0x00071d0b) blid2_tripm_pane_g3_ParamLimits

0x6d7f,	// (0x00071d0b) blid2_tripm_pane_g3

0x6d93,	// (0x00071d1f) blid2_tripm_pane_g4_ParamLimits

0x6d93,	// (0x00071d1f) blid2_tripm_pane_g4

0x6da7,	// (0x00071d33) blid2_tripm_pane_g5_ParamLimits

0x6da7,	// (0x00071d33) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0007aa94) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0007aa94) blid2_tripm_pane_g

0x6dcd,	// (0x00071d59) blid2_tripm_pane_t1_ParamLimits

0x6dcd,	// (0x00071d59) blid2_tripm_pane_t1

0x6de8,	// (0x00071d74) blid2_tripm_pane_t2_ParamLimits

0x6de8,	// (0x00071d74) blid2_tripm_pane_t2

0x6e01,	// (0x00071d8d) blid2_tripm_pane_t3_ParamLimits

0x6e01,	// (0x00071d8d) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0007aaa1) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0007aaa1) blid2_tripm_pane_t

0x6e48,	// (0x00071dd4) cell_blid2_satellite_pane_ParamLimits

0x6e48,	// (0x00071dd4) cell_blid2_satellite_pane

0x6e66,	// (0x00071df2) cell_blid2_satellite_pane_g1

0xdd08,	// (0x00078c94) cell_blid2_satellite_pane_t1

0xcce1,	// (0x00077c6d) blid2_speed_pane_g1

0xdd16,	// (0x00078ca2) blid2_speed_pane_t1

0xdd24,	// (0x00078cb0) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0007aaaa) blid2_speed_pane_t

0xcce1,	// (0x00077c6d) blid2_navig_ring_pane_g1

0x6e6f,	// (0x00071dfb) blid2_navig_ring_pane_g2

0x6e77,	// (0x00071e03) blid2_navig_ring_pane_g3

0x6e7f,	// (0x00071e0b) blid2_navig_ring_pane_g4

0x6e87,	// (0x00071e13) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0007aaaf) blid2_navig_ring_pane_g

0x93c4,	// (0x00074350) bg_popup_window_pane_cp011

0xdd32,	// (0x00078cbe) popup_blid2_search_window_g1

0xdd3a,	// (0x00078cc6) popup_blid2_search_window_t1

0xdd48,	// (0x00078cd4) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0007aaba) popup_blid2_search_window_t

0xab89,	// (0x00075b15) main_browser_pane_g1

0xa84c,	// (0x000757d8) main_browser_pane_ParamLimits

0x943c,	// (0x000743c8) bg_button_pane_cp011_ParamLimits

0x5da5,	// (0x00070d31) cell_vitu2_function_pane_g1_ParamLimits

0xc8cd,	// (0x00077859) bg_popup_sub_pane_cp22_ParamLimits

0x6702,	// (0x0007168e) input_focus_pane_cp08_ParamLimits

0x6719,	// (0x000716a5) popup_vitu2_query_button_pane_ParamLimits

0x6719,	// (0x000716a5) popup_vitu2_query_button_pane

0x672a,	// (0x000716b6) popup_vitu2_query_input_button_pane

0xd9a9,	// (0x00078935) popup_vitu2_query_window_g1_ParamLimits

0x6734,	// (0x000716c0) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0007a9bb) popup_vitu2_query_window_g_ParamLimits

0x93c4,	// (0x00074350) bg_button_pane_cp026

0x6e8f,	// (0x00071e1b) popup_vitu2_query_input_button_pane_g1

0x93c4,	// (0x00074350) bg_button_pane_cp025

0xdd56,	// (0x00078ce2) popup_vitu2_query_button_pane_t1

0x43be,	// (0x0006f34a) main_mp3_pane_t6

0x43cc,	// (0x0006f358) popup_slider_window_cp01

0x9a0b,	// (0x00074997) cam4_battery_pane

0x9a5e,	// (0x000749ea) cam4_battery_pane_cp02

0x9b63,	// (0x00074aef) cam4_battery_pane_cp01

0x9b63,	// (0x00074aef) cam4_battery_pane_cp03

0xdce3,	// (0x00078c6f) cam4_battery_pane_g1

0xcce1,	// (0x00077c6d) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0007aabf) cam4_battery_pane_g

0xcba1,	// (0x00077b2d) popup_blid_sat_info2_window_t11

0xb2c3,	// (0x0007624f) aid_size_touch_mv_arrow_left_ParamLimits

0xb2ee,	// (0x0007627a) aid_size_touch_mv_arrow_right_ParamLimits

0xb34c,	// (0x000762d8) navi_pane_g1_ParamLimits

0xb358,	// (0x000762e4) navi_pane_g2_ParamLimits

0xb386,	// (0x00076312) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007a371) navi_pane_g_ParamLimits

0x27c2,	// (0x0006d74e) navi_pane_mv_t1_ParamLimits

0x4ffb,	// (0x0006ff87) grid_imed_effect_pane_ParamLimits

0x15d8,	// (0x0006c564) aid_placing_vt_slider_lsc

0xaad8,	// (0x00075a64) aid_placing_vt_slider_prt

0x9f3d,	// (0x00074ec9) bg_tb_trans_pane_cp01_ParamLimits

0xce4f,	// (0x00077ddb) popup_image_details_window_g1_ParamLimits

0xce62,	// (0x00077dee) popup_image_details_window_g2_ParamLimits

0xce77,	// (0x00077e03) popup_image_details_window_g3_ParamLimits

0xce77,	// (0x00077e03) popup_image_details_window_g3

0xf72b,	// (0x0007a6b7) popup_image_details_window_g_ParamLimits

0xce8b,	// (0x00077e17) popup_image_details_window_t1_ParamLimits

0xce9d,	// (0x00077e29) popup_image_details_window_t2_ParamLimits

0xceb6,	// (0x00077e42) popup_image_details_window_t3_ParamLimits

0xceca,	// (0x00077e56) popup_image_details_window_t4_ParamLimits

0xcee5,	// (0x00077e71) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0007a6be) popup_image_details_window_t_ParamLimits

0x6aa8,	// (0x00071a34) cl_header_name_pane_ParamLimits

0x6aa8,	// (0x00071a34) cl_header_name_pane

0x6e97,	// (0x00071e23) cl_header_name_pane_t1_ParamLimits

0x6e97,	// (0x00071e23) cl_header_name_pane_t1

0x6eb8,	// (0x00071e44) cl_header_name_pane_t2_ParamLimits

0x6eb8,	// (0x00071e44) cl_header_name_pane_t2

0x6efa,	// (0x00071e86) cl_header_name_pane_t3_ParamLimits

0x6efa,	// (0x00071e86) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0007aac4) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0007aac4) cl_header_name_pane_t

0xb415,	// (0x000763a1) navi_pane_mv_g2_ParamLimits

0xd6fa,	// (0x00078686) field_vitu2_entry_pane_g1_ParamLimits

0xd706,	// (0x00078692) field_vitu2_entry_pane_g2_ParamLimits

0xd712,	// (0x0007869e) field_vitu2_entry_pane_g3_ParamLimits

0xd712,	// (0x0007869e) field_vitu2_entry_pane_g3

0xf92e,	// (0x0007a8ba) field_vitu2_entry_pane_g_ParamLimits

0x9ad2,	// (0x00074a5e) cell_vitu2_itu_pane_g1_ParamLimits

0x5d39,	// (0x00070cc5) cell_vitu2_itu_pane_g2_ParamLimits

0x5d39,	// (0x00070cc5) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0007a8c6) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0007a8c6) cell_vitu2_itu_pane_g

0x943c,	// (0x000743c8) bg_vkb2_func_pane_cp05_ParamLimits

0x943c,	// (0x000743c8) bg_vkb2_func_pane_cp05

0x943c,	// (0x000743c8) bg_vkb2_func_pane_cp03

0x943c,	// (0x000743c8) bg_vkb2_func_pane_cp04

0x943c,	// (0x000743c8) bg_vkb2_func_pane_cp10_ParamLimits

0x943c,	// (0x000743c8) bg_vkb2_func_pane_cp10

0x6a4a,	// (0x000719d6) bg_vkb2_func_pane_cp08

0x6a30,	// (0x000719bc) bg_vkb2_func_pane_cp06

0x6a3e,	// (0x000719ca) bg_vkb2_func_pane_cp07

0xdc2d,	// (0x00078bb9) bg_vkb2_func_pane_cp11_ParamLimits

0xdc2d,	// (0x00078bb9) bg_vkb2_func_pane_cp11

0xdc42,	// (0x00078bce) bg_vkb2_func_pane_cp12_ParamLimits

0xdc42,	// (0x00078bce) bg_vkb2_func_pane_cp12

0x93c4,	// (0x00074350) bg_vkb2_func_pane_cp09

0xd732,	// (0x000786be) bg_vkb2_func_pane_g1

0xac9a,	// (0x00075c26) bg_vkb2_func_pane_g2

0xd73a,	// (0x000786c6) bg_vkb2_func_pane_g3

0xd742,	// (0x000786ce) bg_vkb2_func_pane_g4

0xd96e,	// (0x000788fa) bg_vkb2_func_pane_g5

0xd75a,	// (0x000786e6) bg_vkb2_func_pane_g6

0xd762,	// (0x000786ee) bg_vkb2_func_pane_g7

0xd752,	// (0x000786de) bg_vkb2_func_pane_g8

0xac7a,	// (0x00075c06) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0007aacb) bg_vkb2_func_pane_g

0x6dbb,	// (0x00071d47) blid2_tripm_pane_g6_ParamLimits

0x6dbb,	// (0x00071d47) blid2_tripm_pane_g6

0xd59c,	// (0x00078528) mp4_progress_pane_g1

0x6e34,	// (0x00071dc0) blid2_tripm_values_pane_ParamLimits

0x6e34,	// (0x00071dc0) blid2_tripm_values_pane

0x6f2b,	// (0x00071eb7) blid2_tripm_values_pane_t1

0x6f39,	// (0x00071ec5) blid2_tripm_values_pane_t2

0x6f47,	// (0x00071ed3) blid2_tripm_values_pane_t3

0x6f55,	// (0x00071ee1) blid2_tripm_values_pane_t4

0x6f63,	// (0x00071eef) blid2_tripm_values_pane_t5

0x6f71,	// (0x00071efd) blid2_tripm_values_pane_t6

0x6f7f,	// (0x00071f0b) blid2_tripm_values_pane_t7

0x6f8d,	// (0x00071f19) blid2_tripm_values_pane_t8

0x6f9b,	// (0x00071f27) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0007aade) blid2_tripm_values_pane_t

0x161a,	// (0x0006c5a6) call_video_pane_t1_ParamLimits

0x1638,	// (0x0006c5c4) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007a1fa) call_video_pane_t_ParamLimits

0x2c93,	// (0x0006dc1f) msg_header_pane_g1_ParamLimits

0xb5fd,	// (0x00076589) msg_header_pane_g2_ParamLimits

0xb5fd,	// (0x00076589) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007a414) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007a414) msg_header_pane_g

0xa84c,	// (0x000757d8) main_clock2_pane_ParamLimits

0x4cf4,	// (0x0006fc80) grid_clock2_toolbar_pane_ParamLimits

0x4cf4,	// (0x0006fc80) grid_clock2_toolbar_pane

0x4cf4,	// (0x0006fc80) listscroll_clock2_pane_ParamLimits

0x4cf4,	// (0x0006fc80) listscroll_clock2_pane

0x4df0,	// (0x0006fd7c) main_clock2_pane_t3_ParamLimits

0x4df0,	// (0x0006fd7c) main_clock2_pane_t3

0x4e14,	// (0x0006fda0) main_clock2_pane_t4_ParamLimits

0x4e14,	// (0x0006fda0) main_clock2_pane_t4

0xdd64,	// (0x00078cf0) cell_clock2_toolbar_pane

0xdd6c,	// (0x00078cf8) cell_clock2_toolbar_pane_cp01

0xdd6c,	// (0x00078cf8) cell_clock2_toolbar_pane_cp02

0xdd74,	// (0x00078d00) cell_clock2_toolbar_pane_cp03

0xdd7c,	// (0x00078d08) list_clock2_pane

0xb248,	// (0x000761d4) scroll_pane_cp10

0xdd84,	// (0x00078d10) list_single_clock2_pane_ParamLimits

0xdd84,	// (0x00078d10) list_single_clock2_pane

0xaa41,	// (0x000759cd) list_highlight_pane_cp08

0xdd91,	// (0x00078d1d) list_single_clock2_pane_t1

0xdd9f,	// (0x00078d2b) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0007aaf1) list_single_clock2_pane_t

0x93c4,	// (0x00074350) bg_button_pane_cp10

0xddad,	// (0x00078d39) cell_clock2_toolbar_pane_g1

0x2ca1,	// (0x0006dc2d) aid_main_viewer_pane_g1_ParamLimits

0x2ca1,	// (0x0006dc2d) aid_main_viewer_pane_g1

0x2caf,	// (0x0006dc3b) aid_main_viewer_pane_g2_ParamLimits

0x2caf,	// (0x0006dc3b) aid_main_viewer_pane_g2

0x2cbd,	// (0x0006dc49) aid_main_viewer_pane_g3_ParamLimits

0x2cbd,	// (0x0006dc49) aid_main_viewer_pane_g3

0x2ccc,	// (0x0006dc58) aid_main_viewer_pane_g4_ParamLimits

0x2ccc,	// (0x0006dc58) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007a425) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007a425) aid_main_viewer_pane_g

0x35d4,	// (0x0006e560) main_calc_pane_ParamLimits

0x35fa,	// (0x0006e586) main_dialer2_pane_ParamLimits

0x944a,	// (0x000743d6) main_cam6_pane

0x944a,	// (0x000743d6) main_vid6_pane

0x4d00,	// (0x0006fc8c) listscroll_gen_pane_cp06_ParamLimits

0x4d00,	// (0x0006fc8c) listscroll_gen_pane_cp06

0x4e37,	// (0x0006fdc3) main_clock2_pane_t5_ParamLimits

0x4e37,	// (0x0006fdc3) main_clock2_pane_t5

0x4e91,	// (0x0006fe1d) aid_call2_pane_cp10_ParamLimits

0x4ea3,	// (0x0006fe2f) aid_call_pane_cp10_ParamLimits

0xb2b7,	// (0x00076243) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2b7,	// (0x00076243) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4eb5,	// (0x0006fe41) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4eb5,	// (0x0006fe41) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2b7,	// (0x00076243) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0007a773) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ec7,	// (0x0006fe53) popup_clock_analogue_window_cp10_t1_ParamLimits

0x553a,	// (0x000704c6) cell_dialer2_keypad_pane_g2_ParamLimits

0x553a,	// (0x000704c6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0007a859) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0007a859) cell_dialer2_keypad_pane_g

0x5556,	// (0x000704e2) cell_dialer2_keypad_pane_t1

0x60bf,	// (0x0007104b) main_cset_text2_pane_ParamLimits

0x60bf,	// (0x0007104b) main_cset_text2_pane

0xdb95,	// (0x00078b21) area_vitu2_query_pane_g1_ParamLimits

0x69cf,	// (0x0007195b) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0007aa0e) area_vitu2_query_pane_g_ParamLimits

0xa054,	// (0x00074fe0) area_vitu2_query_pane_t7_ParamLimits

0xa054,	// (0x00074fe0) area_vitu2_query_pane_t7

0x6a30,	// (0x000719bc) bg_button_pane_cp018_ParamLimits

0x6a3e,	// (0x000719ca) bg_button_pane_cp021_ParamLimits

0x6a4a,	// (0x000719d6) bg_button_pane_cp022_ParamLimits

0x6a4a,	// (0x000719d6) bg_vkb2_func_pane_cp08_ParamLimits

0x6a30,	// (0x000719bc) bg_vkb2_func_pane_cp06_ParamLimits

0x6a3e,	// (0x000719ca) bg_vkb2_func_pane_cp07_ParamLimits

0x6a5b,	// (0x000719e7) input_focus_pane_cp09_ParamLimits

0x9bce,	// (0x00074b5a) cam6_autofocus_pane_ParamLimits

0x9bce,	// (0x00074b5a) cam6_autofocus_pane

0x6fa9,	// (0x00071f35) cam6_image_uncrop_pane_ParamLimits

0x6fa9,	// (0x00071f35) cam6_image_uncrop_pane

0x6fb8,	// (0x00071f44) cam6_indi_pane_ParamLimits

0x6fb8,	// (0x00071f44) cam6_indi_pane

0x6fce,	// (0x00071f5a) cam6_mode_pane_ParamLimits

0x6fce,	// (0x00071f5a) cam6_mode_pane

0x6fe0,	// (0x00071f6c) cam6_timer_pane_ParamLimits

0x6fe0,	// (0x00071f6c) cam6_timer_pane

0x6ff0,	// (0x00071f7c) cam6_zoom_pane_ParamLimits

0x6ff0,	// (0x00071f7c) cam6_zoom_pane

0x6ffc,	// (0x00071f88) cam6_mode_pane_g1_ParamLimits

0x6ffc,	// (0x00071f88) cam6_mode_pane_g1

0x700c,	// (0x00071f98) cam6_mode_pane_g2_ParamLimits

0x700c,	// (0x00071f98) cam6_mode_pane_g2

0x701c,	// (0x00071fa8) cam6_mode_pane_g3_ParamLimits

0x701c,	// (0x00071fa8) cam6_mode_pane_g3

0x702c,	// (0x00071fb8) cam6_mode_pane_g4_ParamLimits

0x702c,	// (0x00071fb8) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0007aaf6) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0007aaf6) cam6_mode_pane_g

0xddb5,	// (0x00078d41) bg_tb_trans_pane_cp08_ParamLimits

0xddb5,	// (0x00078d41) bg_tb_trans_pane_cp08

0xddc3,	// (0x00078d4f) cam6_battery_pane_ParamLimits

0xddc3,	// (0x00078d4f) cam6_battery_pane

0xddd9,	// (0x00078d65) cam6_indi_pane_g1_ParamLimits

0xddd9,	// (0x00078d65) cam6_indi_pane_g1

0xddeb,	// (0x00078d77) cam6_indi_pane_g2_ParamLimits

0xddeb,	// (0x00078d77) cam6_indi_pane_g2

0xddfd,	// (0x00078d89) cam6_indi_pane_g3_ParamLimits

0xddfd,	// (0x00078d89) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0007aaff) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0007aaff) cam6_indi_pane_g

0xde0f,	// (0x00078d9b) cam6_indi_pane_t1_ParamLimits

0xde0f,	// (0x00078d9b) cam6_indi_pane_t1

0x703c,	// (0x00071fc8) cam6_autofocus_pane_g1

0x7044,	// (0x00071fd0) cam6_autofocus_pane_g2

0x704c,	// (0x00071fd8) cam6_autofocus_pane_g3

0x7054,	// (0x00071fe0) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0007ab06) cam6_autofocus_pane_g

0xde35,	// (0x00078dc1) cam6_timer_pane_g1

0xde3d,	// (0x00078dc9) cam6_timer_pane_t1

0xde4b,	// (0x00078dd7) cam6_zoom_cont_pane

0xde53,	// (0x00078ddf) cam6_zoom_pane_g1

0xde5b,	// (0x00078de7) cam6_zoom_pane_g2

0x705c,	// (0x00071fe8) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0007ab0f) cam6_zoom_pane_g

0xcce1,	// (0x00077c6d) cam6_battery_pane_g1

0xcce1,	// (0x00077c6d) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0007a67b) cam6_battery_pane_g

0xde63,	// (0x00078def) cam6_zoom_cont_pane_g1

0xde6c,	// (0x00078df8) cam6_zoom_cont_pane_g2

0xde75,	// (0x00078e01) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0007ab16) cam6_zoom_cont_pane_g

0x7079,	// (0x00072005) cam6_mode_pane_cp_ParamLimits

0x7079,	// (0x00072005) cam6_mode_pane_cp

0x708b,	// (0x00072017) cam6_zoom_pane_cp_ParamLimits

0x708b,	// (0x00072017) cam6_zoom_pane_cp

0x7097,	// (0x00072023) vid6_image_uncrop_cif_pane_ParamLimits

0x7097,	// (0x00072023) vid6_image_uncrop_cif_pane

0x70a7,	// (0x00072033) vid6_image_uncrop_nhd_pane_ParamLimits

0x70a7,	// (0x00072033) vid6_image_uncrop_nhd_pane

0x70b6,	// (0x00072042) vid6_image_uncrop_vga_pane_ParamLimits

0x70b6,	// (0x00072042) vid6_image_uncrop_vga_pane

0x70c5,	// (0x00072051) vid6_image_uncrop_wvga_pane_ParamLimits

0x70c5,	// (0x00072051) vid6_image_uncrop_wvga_pane

0x70d4,	// (0x00072060) vid6_indi_pane_ParamLimits

0x70d4,	// (0x00072060) vid6_indi_pane

0xddb5,	// (0x00078d41) bg_tb_trans_pane_cp09_ParamLimits

0xddb5,	// (0x00078d41) bg_tb_trans_pane_cp09

0xde8d,	// (0x00078e19) cam6_battery_pane_cp_ParamLimits

0xde8d,	// (0x00078e19) cam6_battery_pane_cp

0xde99,	// (0x00078e25) vid6_indi_pane_g1_ParamLimits

0xde99,	// (0x00078e25) vid6_indi_pane_g1

0xdeab,	// (0x00078e37) vid6_indi_pane_g2_ParamLimits

0xdeab,	// (0x00078e37) vid6_indi_pane_g2

0xdebd,	// (0x00078e49) vid6_indi_pane_g3_ParamLimits

0xdebd,	// (0x00078e49) vid6_indi_pane_g3

0xded2,	// (0x00078e5e) vid6_indi_pane_g4_ParamLimits

0xded2,	// (0x00078e5e) vid6_indi_pane_g4

0xdee7,	// (0x00078e73) vid6_indi_pane_g5_ParamLimits

0xdee7,	// (0x00078e73) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0007ab1d) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0007ab1d) vid6_indi_pane_g

0xdf01,	// (0x00078e8d) vid6_indi_pane_t1_ParamLimits

0xdf01,	// (0x00078e8d) vid6_indi_pane_t1

0xdf17,	// (0x00078ea3) vid6_indi_pane_t2_ParamLimits

0xdf17,	// (0x00078ea3) vid6_indi_pane_t2

0xdf3f,	// (0x00078ecb) vid6_indi_pane_t3_ParamLimits

0xdf3f,	// (0x00078ecb) vid6_indi_pane_t3

0xdf67,	// (0x00078ef3) vid6_indi_pane_t4_ParamLimits

0xdf67,	// (0x00078ef3) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0007ab28) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0007ab28) vid6_indi_pane_t

0xdf8b,	// (0x00078f17) wait_bar_pane_cp08

0x70ec,	// (0x00072078) main_cset_text2_pane_t1_ParamLimits

0x70ec,	// (0x00072078) main_cset_text2_pane_t1

0x7064,	// (0x00071ff0) listscroll_gen_pane_cp06_t1_ParamLimits

0x7064,	// (0x00071ff0) listscroll_gen_pane_cp06_t1

0x944a,	// (0x000743d6) main_cam6_set_pane

0x99fd,	// (0x00074989) bg_tb_trans_pane_cp06_ParamLimits

0x9a13,	// (0x0007499f) cam4_indicators_pane_g1_ParamLimits

0x9a24,	// (0x000749b0) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0007a896) cam4_indicators_pane_g_ParamLimits

0x9a3c,	// (0x000749c8) cam4_indicators_pane_t1_ParamLimits

0x943c,	// (0x000743c8) bg_tb_trans_pane_cp07_ParamLimits

0x9a66,	// (0x000749f2) vid4_indicators_pane_g1_ParamLimits

0x9a7a,	// (0x00074a06) vid4_indicators_pane_g2_ParamLimits

0x9a8e,	// (0x00074a1a) vid4_indicators_pane_g3_ParamLimits

0x9a9f,	// (0x00074a2b) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0007a8a8) vid4_indicators_pane_g_ParamLimits

0x9abb,	// (0x00074a47) vid4_indicators_pane_t1_ParamLimits

0x9b6b,	// (0x00074af7) vid4_progress_pane_g1_ParamLimits

0x9b7b,	// (0x00074b07) vid4_progress_pane_g2_ParamLimits

0x6b9b,	// (0x00071b27) vid4_progress_pane_g3_ParamLimits

0x9b8b,	// (0x00074b17) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0007aa59) vid4_progress_pane_g_ParamLimits

0x6bad,	// (0x00071b39) vid4_progress_pane_t1_ParamLimits

0x9ba3,	// (0x00074b2f) vid4_progress_pane_t2_ParamLimits

0x9bb8,	// (0x00074b44) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0007aa64) vid4_progress_pane_t_ParamLimits

0x6bc3,	// (0x00071b4f) wait_bar_pane_cp07_ParamLimits

0x710a,	// (0x00072096) main_cam6_set_pane_g2_ParamLimits

0x710a,	// (0x00072096) main_cam6_set_pane_g2

0x712e,	// (0x000720ba) main_cset6_listscroll_pane_ParamLimits

0x712e,	// (0x000720ba) main_cset6_listscroll_pane

0x714a,	// (0x000720d6) main_cset6_slider_pane_ParamLimits

0x714a,	// (0x000720d6) main_cset6_slider_pane

0x7160,	// (0x000720ec) main_cset6_text2_pane_ParamLimits

0x7160,	// (0x000720ec) main_cset6_text2_pane

0xdf9a,	// (0x00078f26) main_cset6_text_pane

0xdfa2,	// (0x00078f2e) main_cset_list_pane_copy1_ParamLimits

0xdfa2,	// (0x00078f2e) main_cset_list_pane_copy1

0xdfb2,	// (0x00078f3e) scroll_pane_cp028_copy1

0x716e,	// (0x000720fa) cset_list_set_pane_copy1

0x7180,	// (0x0007210c) aid_position_infowindow_above_copy1

0x7188,	// (0x00072114) aid_position_infowindow_below_copy1

0x7190,	// (0x0007211c) cset_list_set_pane_g1_copy1

0x7198,	// (0x00072124) cset_list_set_pane_g3_copy1_ParamLimits

0x7198,	// (0x00072124) cset_list_set_pane_g3_copy1

0x71a7,	// (0x00072133) cset_list_set_pane_t1_copy1_ParamLimits

0x71a7,	// (0x00072133) cset_list_set_pane_t1_copy1

0x9f3d,	// (0x00074ec9) list_highlight_pane_cp021_copy1_ParamLimits

0x9f3d,	// (0x00074ec9) list_highlight_pane_cp021_copy1

0xdfbb,	// (0x00078f47) cset6_slider_pane_ParamLimits

0xdfbb,	// (0x00078f47) cset6_slider_pane

0xdfe7,	// (0x00078f73) main_cset6_slider_pane_g1_ParamLimits

0xdfe7,	// (0x00078f73) main_cset6_slider_pane_g1

0x71bc,	// (0x00072148) main_cset6_slider_pane_g2_ParamLimits

0x71bc,	// (0x00072148) main_cset6_slider_pane_g2

0xe00f,	// (0x00078f9b) main_cset6_slider_pane_g3_ParamLimits

0xe00f,	// (0x00078f9b) main_cset6_slider_pane_g3

0x71e4,	// (0x00072170) main_cset6_slider_pane_g4_ParamLimits

0x71e4,	// (0x00072170) main_cset6_slider_pane_g4

0xe01b,	// (0x00078fa7) main_cset6_slider_pane_g5_ParamLimits

0xe01b,	// (0x00078fa7) main_cset6_slider_pane_g5

0xd861,	// (0x000787ed) main_cset6_slider_pane_g7_ParamLimits

0xd861,	// (0x000787ed) main_cset6_slider_pane_g7

0xd86d,	// (0x000787f9) main_cset6_slider_pane_g8_ParamLimits

0xd86d,	// (0x000787f9) main_cset6_slider_pane_g8

0x616c,	// (0x000710f8) main_cset6_slider_pane_g9_ParamLimits

0x616c,	// (0x000710f8) main_cset6_slider_pane_g9

0x6178,	// (0x00071104) main_cset6_slider_pane_g10_ParamLimits

0x6178,	// (0x00071104) main_cset6_slider_pane_g10

0x6184,	// (0x00071110) main_cset6_slider_pane_g11_ParamLimits

0x6184,	// (0x00071110) main_cset6_slider_pane_g11

0x6190,	// (0x0007111c) main_cset6_slider_pane_g12_ParamLimits

0x6190,	// (0x0007111c) main_cset6_slider_pane_g12

0x619c,	// (0x00071128) main_cset6_slider_pane_g13_ParamLimits

0x619c,	// (0x00071128) main_cset6_slider_pane_g13

0x61a8,	// (0x00071134) main_cset6_slider_pane_g14_ParamLimits

0x61a8,	// (0x00071134) main_cset6_slider_pane_g14

0x71f0,	// (0x0007217c) main_cset6_slider_pane_g15_ParamLimits

0x71f0,	// (0x0007217c) main_cset6_slider_pane_g15

0xd879,	// (0x00078805) main_cset6_slider_pane_g16_ParamLimits

0xd879,	// (0x00078805) main_cset6_slider_pane_g16

0xd885,	// (0x00078811) main_cset6_slider_pane_g17_ParamLimits

0xd885,	// (0x00078811) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0007ab31) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0007ab31) main_cset6_slider_pane_g

0xe027,	// (0x00078fb3) main_cset6_slider_pane_t1_ParamLimits

0xe027,	// (0x00078fb3) main_cset6_slider_pane_t1

0x7220,	// (0x000721ac) main_cset6_slider_pane_t2_ParamLimits

0x7220,	// (0x000721ac) main_cset6_slider_pane_t2

0x724b,	// (0x000721d7) main_cset6_slider_pane_t3_ParamLimits

0x724b,	// (0x000721d7) main_cset6_slider_pane_t3

0x7276,	// (0x00072202) main_cset6_slider_pane_t4_ParamLimits

0x7276,	// (0x00072202) main_cset6_slider_pane_t4

0x72a1,	// (0x0007222d) main_cset6_slider_pane_t5_ParamLimits

0x72a1,	// (0x0007222d) main_cset6_slider_pane_t5

0xe068,	// (0x00078ff4) main_cset6_slider_pane_t7_ParamLimits

0xe068,	// (0x00078ff4) main_cset6_slider_pane_t7

0x72cc,	// (0x00072258) main_cset6_slider_pane_t8_ParamLimits

0x72cc,	// (0x00072258) main_cset6_slider_pane_t8

0x72f0,	// (0x0007227c) main_cset6_slider_pane_t9_ParamLimits

0x72f0,	// (0x0007227c) main_cset6_slider_pane_t9

0x7314,	// (0x000722a0) main_cset6_slider_pane_t10_ParamLimits

0x7314,	// (0x000722a0) main_cset6_slider_pane_t10

0x7338,	// (0x000722c4) main_cset6_slider_pane_t11_ParamLimits

0x7338,	// (0x000722c4) main_cset6_slider_pane_t11

0xe09e,	// (0x0007902a) main_cset6_slider_pane_t14_ParamLimits

0xe09e,	// (0x0007902a) main_cset6_slider_pane_t14

0xe0d7,	// (0x00079063) main_cset6_slider_pane_t15_ParamLimits

0xe0d7,	// (0x00079063) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0007ab56) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0007ab56) main_cset6_slider_pane_t

0xd4b1,	// (0x0007843d) cset_slider_pane_g1_copy1

0xdcd1,	// (0x00078c5d) cset_slider_pane_g2_copy1

0xdcda,	// (0x00078c66) cset_slider_pane_g3_copy1

0x93c4,	// (0x00074350) bg_popup_sub_pane_cp011_copy1

0xe110,	// (0x0007909c) main_cset_text_pane_g1_copy1

0xd9bd,	// (0x00078949) main_cset_text_pane_t1_copy1

0xd9cb,	// (0x00078957) main_cset_text_pane_t2_copy1

0xd9d9,	// (0x00078965) main_cset_text_pane_t3_copy1

0xd9e7,	// (0x00078973) main_cset_text_pane_t4_copy1

0xd9f5,	// (0x00078981) main_cset_text_pane_t5_copy1

0xe118,	// (0x000790a4) main_cset_text_pane_t6_copy1

0xe126,	// (0x000790b2) main_cset_text_pane_t7_copy1

0x70ec,	// (0x00072078) main_cset_text2_pane_t1_copy1

0x943c,	// (0x000743c8) main_ncimui_pane

0x383e,	// (0x0006e7ca) popup_query_ncimui_window_ParamLimits

0x383e,	// (0x0006e7ca) popup_query_ncimui_window

0x9f87,	// (0x00074f13) field_cale_ev2_pane_g4_ParamLimits

0x9f87,	// (0x00074f13) field_cale_ev2_pane_g4

0x5419,	// (0x000703a5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5419,	// (0x000703a5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0007a834) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0007a834) cell_video_dialer_keypad_pane_g

0x5431,	// (0x000703bd) cell_video_dialer_keypad_pane_t1

0x93c4,	// (0x00074350) bg_popup_window_pane_cp012

0xb133,	// (0x000760bf) heading_pane_cp06

0xe152,	// (0x000790de) ncim_query_content_pane

0x93c4,	// (0x00074350) bg_popup_heading_pane_cp01

0xe15a,	// (0x000790e6) ncim_heading_pane_t1

0xe168,	// (0x000790f4) ncim_indicator_popup_pane

0xe17a,	// (0x00079106) ncim_query_button_pane

0xe18e,	// (0x0007911a) ncim_query_content_pane_t1

0xe1a0,	// (0x0007912c) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0007ab9a) ncim_query_content_pane_t

0xe1da,	// (0x00079166) ncim_query_list_pane

0xe1ec,	// (0x00079178) ncim_query_popup_pane

0xe168,	// (0x000790f4) ncim_indicator_popup_pane_ParamLimits

0x754f,	// (0x000724db) ncim_query_content_pane_g1_ParamLimits

0x754f,	// (0x000724db) ncim_query_content_pane_g1

0xe18e,	// (0x0007911a) ncim_query_content_pane_t1_ParamLimits

0xe1a0,	// (0x0007912c) ncim_query_content_pane_t2_ParamLimits

0x755b,	// (0x000724e7) ncim_query_content_pane_t3_ParamLimits

0x755b,	// (0x000724e7) ncim_query_content_pane_t3

0x7583,	// (0x0007250f) ncim_query_content_pane_t4_ParamLimits

0x7583,	// (0x0007250f) ncim_query_content_pane_t4

0x75ab,	// (0x00072537) ncim_query_content_pane_t5_ParamLimits

0x75ab,	// (0x00072537) ncim_query_content_pane_t5

0xe1b2,	// (0x0007913e) ncim_query_content_pane_t6_ParamLimits

0xe1b2,	// (0x0007913e) ncim_query_content_pane_t6

0xfc0e,	// (0x0007ab9a) ncim_query_content_pane_t_ParamLimits

0xe1da,	// (0x00079166) ncim_query_list_pane_ParamLimits

0xe1ec,	// (0x00079178) ncim_query_popup_pane_ParamLimits

0xe200,	// (0x0007918c) wait_bar_pane_cp04

0x93c4,	// (0x00074350) input_focus_pane_cp011

0xe208,	// (0x00079194) ncim_query_popup_pane_t1

0xe216,	// (0x000791a2) ncim_list_query_list_pane_ParamLimits

0xe216,	// (0x000791a2) ncim_list_query_list_pane

0x93c4,	// (0x00074350) bg_button_pane_cp027

0xe223,	// (0x000791af) ncim_query_button_pane_g1

0x93c4,	// (0x00074350) list_highlight_pane_cp012

0xe22d,	// (0x000791b9) ncim_list_query_list_pane_g1

0xe235,	// (0x000791c1) ncim_list_query_list_pane_t1

0x9a30,	// (0x000749bc) cam4_indicators_pane_g3_ParamLimits

0x9a30,	// (0x000749bc) cam4_indicators_pane_g3

0x9aab,	// (0x00074a37) vid4_indicators_pane_g5_ParamLimits

0x9aab,	// (0x00074a37) vid4_indicators_pane_g5

0x9b97,	// (0x00074b23) vid4_progress_pane_g5_ParamLimits

0x9b97,	// (0x00074b23) vid4_progress_pane_g5

0x743a,	// (0x000723c6) main_ncimui_pane_g1

0x74a3,	// (0x0007242f) ncimui_group_query_pane_ParamLimits

0x74a3,	// (0x0007242f) ncimui_group_query_pane

0x74eb,	// (0x00072477) ncimui_list_pane_ParamLimits

0x74eb,	// (0x00072477) ncimui_list_pane

0x7512,	// (0x0007249e) ncimui_text_pane_ParamLimits

0x7512,	// (0x0007249e) ncimui_text_pane

0x75d3,	// (0x0007255f) ncimui_text_pane_t1_ParamLimits

0x75d3,	// (0x0007255f) ncimui_text_pane_t1

0xe243,	// (0x000791cf) ncimui_list_single_graphic_pane_ParamLimits

0xe243,	// (0x000791cf) ncimui_list_single_graphic_pane

0x75f1,	// (0x0007257d) ncimui_query_pane_ParamLimits

0x75f1,	// (0x0007257d) ncimui_query_pane

0x93c4,	// (0x00074350) list_highlight_pane_cp013

0xe253,	// (0x000791df) ncim_list_query_list_pane_t1_copy1

0xe261,	// (0x000791ed) ncim_list_single_graphic_pane_g1

0x7604,	// (0x00072590) ncim_query_button_pane_cp01

0x7610,	// (0x0007259c) ncim_query_entry_pane_ParamLimits

0x7610,	// (0x0007259c) ncim_query_entry_pane

0x7623,	// (0x000725af) ncimui_query_pane_g1

0x762f,	// (0x000725bb) ncimui_query_pane_t1_ParamLimits

0x762f,	// (0x000725bb) ncimui_query_pane_t1

0x9f3d,	// (0x00074ec9) input_focus_pane_cp012

0xe269,	// (0x000791f5) ncim_query_entry_pane_t1

0xa84c,	// (0x000757d8) main_im_pane_ParamLimits

0x943c,	// (0x000743c8) main_mobtv_pane_ParamLimits

0x943c,	// (0x000743c8) main_mobtv_pane

0x7208,	// (0x00072194) main_cset6_slider_pane_g18_ParamLimits

0x7208,	// (0x00072194) main_cset6_slider_pane_g18

0x7214,	// (0x000721a0) main_cset6_slider_pane_g19_ParamLimits

0x7214,	// (0x000721a0) main_cset6_slider_pane_g19

0x7648,	// (0x000725d4) bg_main_mobtv_pane_ParamLimits

0x7648,	// (0x000725d4) bg_main_mobtv_pane

0x7656,	// (0x000725e2) main_mobtv_info_pane

0x765f,	// (0x000725eb) main_mobtv_loading_pane_ParamLimits

0x765f,	// (0x000725eb) main_mobtv_loading_pane

0xe27b,	// (0x00079207) main_mobtv_pg_channel_list_pane

0xe285,	// (0x00079211) main_mobtv_pg_hdr_pane

0x766c,	// (0x000725f8) main_mobtv_programe_curr_pane_ParamLimits

0x766c,	// (0x000725f8) main_mobtv_programe_curr_pane

0x7679,	// (0x00072605) main_mobtv_programe_next_pane_ParamLimits

0x7679,	// (0x00072605) main_mobtv_programe_next_pane

0xe28e,	// (0x0007921a) popup_mobtv_noti_window

0xcce1,	// (0x00077c6d) main_tv_pg_hdr_pane_g1

0xe296,	// (0x00079222) main_tv_pg_hdr_pane_g2

0xe29e,	// (0x0007922a) main_tv_pg_hdr_pane_g3

0xe2a6,	// (0x00079232) main_tv_pg_hdr_pane_g4

0xe2ae,	// (0x0007923a) main_tv_pg_hdr_pane_g5

0xe2b8,	// (0x00079244) main_tv_pg_hdr_pane_g6

0xe2c2,	// (0x0007924e) main_tv_pg_hdr_pane_g7

0xe2cc,	// (0x00079258) main_tv_pg_hdr_pane_g8

0xe2d6,	// (0x00079262) main_tv_pg_hdr_pane_g9

0xe2e0,	// (0x0007926c) main_tv_pg_hdr_pane_g10

0xe2ea,	// (0x00079276) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0007aba7) main_tv_pg_hdr_pane_g

0xe2f4,	// (0x00079280) main_tv_pg_hdr_pane_t1

0xe302,	// (0x0007928e) main_tv_pg_hdr_pane_t2

0xe310,	// (0x0007929c) main_tv_pg_hdr_pane_t3

0xe320,	// (0x000792ac) main_tv_pg_hdr_pane_t4

0xe330,	// (0x000792bc) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0007abbe) main_tv_pg_hdr_pane_t

0xe340,	// (0x000792cc) single_mobtv_pg_channel_pane_ParamLimits

0xe340,	// (0x000792cc) single_mobtv_pg_channel_pane

0xe352,	// (0x000792de) single_mobtv_pg_channel_table_pane

0xad9d,	// (0x00075d29) single_mobtv_pg_channel_thumb_pane

0xe35b,	// (0x000792e7) single_tv_pg_channel_pane_g1

0xe364,	// (0x000792f0) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0007abc9) single_tv_pg_channel_pane_g

0xcf2f,	// (0x00077ebb) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf2f,	// (0x00077ebb) bg_single_mobtv_pg_channel_thumb_pane

0xe36d,	// (0x000792f9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe36d,	// (0x000792f9) single_mobtv_pg_channel_thumb_pane_g1

0xe37b,	// (0x00079307) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe37b,	// (0x00079307) single_mobtv_pg_channel_thumb_pane_g2

0xe387,	// (0x00079313) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe387,	// (0x00079313) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0007abce) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0007abce) single_mobtv_pg_channel_thumb_pane_g

0xe393,	// (0x0007931f) single_mobtv_pg_channel_thumb_pane_t1

0xe3a1,	// (0x0007932d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0007abd5) single_mobtv_pg_channel_thumb_pane_t

0xcce1,	// (0x00077c6d) bg_single_mobtv_pg_channel_table_pane_g1

0xcce1,	// (0x00077c6d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0007a67b) bg_single_mobtv_pg_channel_table_pane_g

0xe3af,	// (0x0007933b) single_mobtv_pg_channel_table_pane_t1

0xe3bd,	// (0x00079349) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0007abda) single_mobtv_pg_channel_table_pane_t

0x768e,	// (0x0007261a) main_mobtv_info_pane_g1_ParamLimits

0x768e,	// (0x0007261a) main_mobtv_info_pane_g1

0x76ac,	// (0x00072638) main_mobtv_info_pane_t1_ParamLimits

0x76ac,	// (0x00072638) main_mobtv_info_pane_t1

0x7724,	// (0x000726b0) main_mobtv_info_pane_t2_ParamLimits

0x7724,	// (0x000726b0) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0007abe4) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0007abe4) main_mobtv_info_pane_t

0x77b3,	// (0x0007273f) wait_bar_pane_cp05

0x77c5,	// (0x00072751) main_mobtv_loading_pane_g1_ParamLimits

0x77c5,	// (0x00072751) main_mobtv_loading_pane_g1

0x77d8,	// (0x00072764) main_mobtv_loading_pane_g2_ParamLimits

0x77d8,	// (0x00072764) main_mobtv_loading_pane_g2

0x77e4,	// (0x00072770) main_mobtv_loading_pane_g3_ParamLimits

0x77e4,	// (0x00072770) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0007abeb) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0007abeb) main_mobtv_loading_pane_g

0xe3cb,	// (0x00079357) main_mobtv_loading_pane_t1_ParamLimits

0xe3cb,	// (0x00079357) main_mobtv_loading_pane_t1

0xe3e3,	// (0x0007936f) main_mobtv_loading_pane_t2_ParamLimits

0xe3e3,	// (0x0007936f) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0007abf2) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0007abf2) main_mobtv_loading_pane_t

0x77f7,	// (0x00072783) wait_bar_pane_cp06_ParamLimits

0x77f7,	// (0x00072783) wait_bar_pane_cp06

0xe407,	// (0x00079393) main_mobtv_programe_curr_pane_t1

0xe415,	// (0x000793a1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0007abf7) main_mobtv_programe_curr_pane_t

0xe423,	// (0x000793af) main_mobtv_programe_next_pane_t1

0xe431,	// (0x000793bd) main_mobtv_programe_next_pane_t2

0xe43f,	// (0x000793cb) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0007abfc) main_mobtv_programe_next_pane_t

0x93c4,	// (0x00074350) bg_popup_mobtv_noti_window_pane

0xe44d,	// (0x000793d9) popup_mobtv_noti_window_g1

0xe455,	// (0x000793e1) popup_mobtv_noti_window_t1

0xe463,	// (0x000793ef) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0007ac03) popup_mobtv_noti_window_t

0xcce1,	// (0x00077c6d) bg_popup_mobtv_noti_window_pane_g1

0x944a,	// (0x000743d6) sc_clock_pane

0x944a,	// (0x000743d6) main_fs_bigclock_pane

0x6e1e,	// (0x00071daa) blid2_tripm_pane_t4_ParamLimits

0x6e1e,	// (0x00071daa) blid2_tripm_pane_t4

0x7806,	// (0x00072792) sc_clock_pane_g1_ParamLimits

0x7806,	// (0x00072792) sc_clock_pane_g1

0x7818,	// (0x000727a4) sc_clock_pane_t1_ParamLimits

0x7818,	// (0x000727a4) sc_clock_pane_t1

0x783a,	// (0x000727c6) sc_clock_pane_t2_ParamLimits

0x783a,	// (0x000727c6) sc_clock_pane_t2

0x7852,	// (0x000727de) sc_clock_pane_t3_ParamLimits

0x7852,	// (0x000727de) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0007ac08) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0007ac08) sc_clock_pane_t

0x8886,	// (0x00073812) main_fs_bigclock_indicator_pane_ParamLimits

0x8886,	// (0x00073812) main_fs_bigclock_indicator_pane

0x78f8,	// (0x00072884) main_fs_bigclock_pane_g1_ParamLimits

0x78f8,	// (0x00072884) main_fs_bigclock_pane_g1

0x8892,	// (0x0007381e) main_fs_bigclock_pane_t1_ParamLimits

0x8892,	// (0x0007381e) main_fs_bigclock_pane_t1

0x88a4,	// (0x00073830) main_fs_bigclock_pane_t2_ParamLimits

0x88a4,	// (0x00073830) main_fs_bigclock_pane_t2

0x88b8,	// (0x00073844) main_fs_bigclock_pane_t3_ParamLimits

0x88b8,	// (0x00073844) main_fs_bigclock_pane_t3

0x0002,

0xfe44,	// (0x0007add0) main_fs_bigclock_pane_t_ParamLimits

0xfe44,	// (0x0007add0) main_fs_bigclock_pane_t

0xecbd,	// (0x00079c49) main_fs_bigclock_indicator_pane_g1

0xe182,	// (0x0007910e) ncim_query_content_pane_g2_ParamLimits

0xe182,	// (0x0007910e) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0007ab95) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0007ab95) ncim_query_content_pane_g

0x786b,	// (0x000727f7) sc_clock_pane_t4_ParamLimits

0x786b,	// (0x000727f7) sc_clock_pane_t4

0x943c,	// (0x000743c8) main_radioblah_pane

0xd685,	// (0x00078611) cell_call4_button_pane_t1_copy1_ParamLimits

0xd685,	// (0x00078611) cell_call4_button_pane_t1_copy1

0x7452,	// (0x000723de) main_ncimui_pane_t1_ParamLimits

0x7452,	// (0x000723de) main_ncimui_pane_t1

0x746c,	// (0x000723f8) main_ncimui_pane_t2_ParamLimits

0x746c,	// (0x000723f8) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0007ab8e) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0007ab8e) main_ncimui_pane_t

0xe5b7,	// (0x00079543) main_radioblah_anim_pane_ParamLimits

0xe5b7,	// (0x00079543) main_radioblah_anim_pane

0xe5c8,	// (0x00079554) main_radioblah_info_pane_ParamLimits

0xe5c8,	// (0x00079554) main_radioblah_info_pane

0xe5dc,	// (0x00079568) main_radioblah_pane_t1_ParamLimits

0xe5dc,	// (0x00079568) main_radioblah_pane_t1

0xe5f8,	// (0x00079584) main_radioblah_pane_t2_ParamLimits

0xe5f8,	// (0x00079584) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0007ac29) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0007ac29) main_radioblah_pane_t

0x7957,	// (0x000728e3) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7957,	// (0x000728e3) main_radioblah_rocker_ctrl_pane

0xe640,	// (0x000795cc) main_radioblah_info_pane_t1_ParamLimits

0xe640,	// (0x000795cc) main_radioblah_info_pane_t1

0x79af,	// (0x0007293b) main_radioblah_info_pane_t2_ParamLimits

0x79af,	// (0x0007293b) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0007ac32) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0007ac32) main_radioblah_info_pane_t

0xcce1,	// (0x00077c6d) main_radioblah_rocker_ctrl_pane_g1

0x7a5f,	// (0x000729eb) main_radioblah_rocker_ctrl_pane_g2

0x7a67,	// (0x000729f3) main_radioblah_rocker_ctrl_pane_g3

0x7a6f,	// (0x000729fb) main_radioblah_rocker_ctrl_pane_g4

0x7a77,	// (0x00072a03) main_radioblah_rocker_ctrl_pane_g5

0x7a7f,	// (0x00072a0b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0007ac3b) main_radioblah_rocker_ctrl_pane_g

0x70ec,	// (0x00072078) main_cset_text2_pane_t1_copy1_ParamLimits

0x99f5,	// (0x00074981) cam4_image_uncrop_qvga_pane

0x9a56,	// (0x000749e2) vid4_image_uncrop_qcif_pane

0x9bce,	// (0x00074b5a) cam6_image_uncrop_qvga_pane_ParamLimits

0x9bce,	// (0x00074b5a) cam6_image_uncrop_qvga_pane

0xde7d,	// (0x00078e09) vid6_image_uncrop_qcif_pane_ParamLimits

0xde7d,	// (0x00078e09) vid6_image_uncrop_qcif_pane

0x93c4,	// (0x00074350) bg_popup_preview_window_pane_cp03

0xe134,	// (0x000790c0) list_cset_text2_pane

0xe13c,	// (0x000790c8) main_cset6_text2_pane_g1

0xe144,	// (0x000790d0) main_cset6_text2_pane_t1

0xe67a,	// (0x00079606) list_cset_text2_pane_t1_ParamLimits

0xe67a,	// (0x00079606) list_cset_text2_pane_t1

0x943c,	// (0x000743c8) main_radioblah_pane_ParamLimits

0x779f,	// (0x0007272b) main_mobtv_info_pane_t3_ParamLimits

0x779f,	// (0x0007272b) main_mobtv_info_pane_t3

0x7945,	// (0x000728d1) main_radioblah_pane_g1

0x797f,	// (0x0007290b) main_radioblah_info_pane_g1

0x7a04,	// (0x00072990) main_radioblah_info_pane_t3_ParamLimits

0x7a04,	// (0x00072990) main_radioblah_info_pane_t3

0x22a1,	// (0x0006d22d) highlight_cell_cale_month_pane_ParamLimits

0x22a1,	// (0x0006d22d) highlight_cell_cale_month_pane

0x944a,	// (0x000743d6) main_phob_fisheye_pane

0xd00b,	// (0x00077f97) scroll_pane_cp0031_ParamLimits

0xd00b,	// (0x00077f97) scroll_pane_cp0031

0xdf8b,	// (0x00078f17) wait_bar_pane_cp08_ParamLimits

0x716e,	// (0x000720fa) cset_list_set_pane_copy1_ParamLimits

0xe695,	// (0x00079621) highlight_cell_cale_month_pane_g1

0x7a87,	// (0x00072a13) highlight_cell_cale_month_pane_t1

0xdbe9,	// (0x00078b75) list_gen_pane_cp01

0xd84c,	// (0x000787d8) scroll_pane_01

0x7a95,	// (0x00072a21) list_single_double_fisheye_pane

0x7a9e,	// (0x00072a2a) list_double_fisheye_pane_g1_ParamLimits

0x7a9e,	// (0x00072a2a) list_double_fisheye_pane_g1

0x7aaa,	// (0x00072a36) list_double_fisheye_pane_g2_ParamLimits

0x7aaa,	// (0x00072a36) list_double_fisheye_pane_g2

0x7abe,	// (0x00072a4a) list_double_fisheye_pane_g3_ParamLimits

0x7abe,	// (0x00072a4a) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0007ac48) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0007ac48) list_double_fisheye_pane_g

0x7ae7,	// (0x00072a73) list_double_fisheye_pane_t1_ParamLimits

0x7ae7,	// (0x00072a73) list_double_fisheye_pane_t1

0x7b02,	// (0x00072a8e) list_double_fisheye_pane_t2_ParamLimits

0x7b02,	// (0x00072a8e) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0007ac53) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0007ac53) list_double_fisheye_pane_t

0x944a,	// (0x000743d6) main_call5_pane

0x7896,	// (0x00072822) sc_swipe_pane_ParamLimits

0x7896,	// (0x00072822) sc_swipe_pane

0x7b37,	// (0x00072ac3) call5_image_pane_ParamLimits

0x7b37,	// (0x00072ac3) call5_image_pane

0x7b54,	// (0x00072ae0) call5_swipe_1_pane_ParamLimits

0x7b54,	// (0x00072ae0) call5_swipe_1_pane

0x7b67,	// (0x00072af3) call5_swipe_2_pane_ParamLimits

0x7b67,	// (0x00072af3) call5_swipe_2_pane

0x7b92,	// (0x00072b1e) popup_call5_audio_first_window_ParamLimits

0x7b92,	// (0x00072b1e) popup_call5_audio_first_window

0xcf2f,	// (0x00077ebb) call5_swipe_1_pane_g1_ParamLimits

0xcf2f,	// (0x00077ebb) call5_swipe_1_pane_g1

0xe69d,	// (0x00079629) call5_swipe_1_pane_g2_ParamLimits

0xe69d,	// (0x00079629) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0007ac58) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0007ac58) call5_swipe_1_pane_g

0xe6a9,	// (0x00079635) call5_swipe_1_pane_t1_ParamLimits

0xe6a9,	// (0x00079635) call5_swipe_1_pane_t1

0xcf2f,	// (0x00077ebb) call5_swipe_2_pane_g1_ParamLimits

0xcf2f,	// (0x00077ebb) call5_swipe_2_pane_g1

0xe6be,	// (0x0007964a) call5_swipe_2_pane_g2_ParamLimits

0xe6be,	// (0x0007964a) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0007ac5d) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0007ac5d) call5_swipe_2_pane_g

0xe6ca,	// (0x00079656) call5_swipe_2_pane_t1_ParamLimits

0xe6ca,	// (0x00079656) call5_swipe_2_pane_t1

0xe6df,	// (0x0007966b) sc_swipe_pane_g1_ParamLimits

0xe6df,	// (0x0007966b) sc_swipe_pane_g1

0xe6ec,	// (0x00079678) sc_swipe_pane_g2_ParamLimits

0xe6ec,	// (0x00079678) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0007ac62) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0007ac62) sc_swipe_pane_g

0xe6f8,	// (0x00079684) sc_swipe_pane_t1_ParamLimits

0xe6f8,	// (0x00079684) sc_swipe_pane_t1

0x944a,	// (0x000743d6) main_cmail_launcher_pane

0x7ba3,	// (0x00072b2f) aid_size_cell_cmail_l_ParamLimits

0x7ba3,	// (0x00072b2f) aid_size_cell_cmail_l

0x7bbd,	// (0x00072b49) grid_cmail_l_pane_ParamLimits

0x7bbd,	// (0x00072b49) grid_cmail_l_pane

0x7bd7,	// (0x00072b63) cell_cmail_l_pane_ParamLimits

0x7bd7,	// (0x00072b63) cell_cmail_l_pane

0x7bfd,	// (0x00072b89) cell_cmail_l_pane_g1_ParamLimits

0x7bfd,	// (0x00072b89) cell_cmail_l_pane_g1

0x7c0e,	// (0x00072b9a) cell_cmail_l_pane_t1_ParamLimits

0x7c0e,	// (0x00072b9a) cell_cmail_l_pane_t1

0xe70d,	// (0x00079699) cell_cmail_l_pane_t2_ParamLimits

0xe70d,	// (0x00079699) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0007ac67) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0007ac67) cell_cmail_l_pane_t

0x9f3d,	// (0x00074ec9) grid_highlight_pane_cp018_ParamLimits

0x9f3d,	// (0x00074ec9) grid_highlight_pane_cp018

0x054b,	// (0x0006b4d7) main2_pane_ParamLimits

0x054b,	// (0x0006b4d7) main2_pane

0xa8f7,	// (0x00075883) popup_sp_fs_action_menu_bg_pane_g1

0xa8ff,	// (0x0007588b) popup_sp_fs_action_menu_bg_pane_g2

0xa907,	// (0x00075893) popup_sp_fs_action_menu_bg_pane_g3

0xa90f,	// (0x0007589b) popup_sp_fs_action_menu_bg_pane_g4

0xa917,	// (0x000758a3) popup_sp_fs_action_menu_bg_pane_g5

0xa91f,	// (0x000758ab) popup_sp_fs_action_menu_bg_pane_g6

0xa927,	// (0x000758b3) popup_sp_fs_action_menu_bg_pane_g7

0xa92f,	// (0x000758bb) popup_sp_fs_action_menu_bg_pane_g8

0xa937,	// (0x000758c3) popup_sp_fs_action_menu_bg_pane_g9

0xa93f,	// (0x000758cb) popup_sp_fs_action_menu_bg_pane_g10

0xa93f,	// (0x000758cb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0007a116) popup_sp_fs_action_menu_bg_pane_g

0x1451,	// (0x0006c3dd) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x2_t3_g3_g1

0x145d,	// (0x0006c3e9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x145d,	// (0x0006c3e9) list_medium_line_x2_t3_g3_g2

0x1469,	// (0x0006c3f5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1469,	// (0x0006c3f5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007a1c4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007a1c4) list_medium_line_x2_t3_g3_g

0x1475,	// (0x0006c401) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1475,	// (0x0006c401) list_medium_line_x2_t3_g3_t1

0x148a,	// (0x0006c416) list_medium_line_x2_t3_g3_t2_ParamLimits

0x148a,	// (0x0006c416) list_medium_line_x2_t3_g3_t2

0x149e,	// (0x0006c42a) list_medium_line_x2_t3_g3_t3_ParamLimits

0x149e,	// (0x0006c42a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007a1cb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007a1cb) list_medium_line_x2_t3_g3_t

0x1451,	// (0x0006c3dd) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x2_t3_g2_g1

0x1469,	// (0x0006c3f5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1469,	// (0x0006c3f5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007a1d2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007a1d2) list_medium_line_x2_t3_g2_g

0x14b3,	// (0x0006c43f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x14b3,	// (0x0006c43f) list_medium_line_x2_t3_g2_t1

0x14c8,	// (0x0006c454) list_medium_line_x2_t3_g2_t2_ParamLimits

0x14c8,	// (0x0006c454) list_medium_line_x2_t3_g2_t2

0x14da,	// (0x0006c466) list_medium_line_x2_t3_g2_t3_ParamLimits

0x14da,	// (0x0006c466) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007a1d7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007a1d7) list_medium_line_x2_t3_g2_t

0x1451,	// (0x0006c3dd) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x2_t4_g4_g1

0x14f8,	// (0x0006c484) list_medium_line_x2_t4_g4_g2_ParamLimits

0x14f8,	// (0x0006c484) list_medium_line_x2_t4_g4_g2

0x145d,	// (0x0006c3e9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x145d,	// (0x0006c3e9) list_medium_line_x2_t4_g4_g3

0x1504,	// (0x0006c490) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1504,	// (0x0006c490) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007a1de) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007a1de) list_medium_line_x2_t4_g4_g

0x1510,	// (0x0006c49c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1510,	// (0x0006c49c) list_medium_line_x2_t4_g4_t1

0x152a,	// (0x0006c4b6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x152a,	// (0x0006c4b6) list_medium_line_x2_t4_g4_t2

0x1540,	// (0x0006c4cc) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1540,	// (0x0006c4cc) list_medium_line_x2_t4_g4_t3

0x1555,	// (0x0006c4e1) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1555,	// (0x0006c4e1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007a1e7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007a1e7) list_medium_line_x2_t4_g4_t

0x1451,	// (0x0006c3dd) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x2_t2_g4_g1

0x14f8,	// (0x0006c484) list_medium_line_x2_t2_g4_g2_ParamLimits

0x14f8,	// (0x0006c484) list_medium_line_x2_t2_g4_g2

0x145d,	// (0x0006c3e9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x145d,	// (0x0006c3e9) list_medium_line_x2_t2_g4_g3

0x1469,	// (0x0006c3f5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1469,	// (0x0006c3f5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007a24e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007a24e) list_medium_line_x2_t2_g4_g

0x22c7,	// (0x0006d253) list_medium_line_x2_t2_g4_t1_ParamLimits

0x22c7,	// (0x0006d253) list_medium_line_x2_t2_g4_t1

0x149e,	// (0x0006c42a) list_medium_line_x2_t2_g4_t2_ParamLimits

0x149e,	// (0x0006c42a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007a257) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007a257) list_medium_line_x2_t2_g4_t

0x1451,	// (0x0006c3dd) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x2_t2_g3_g1

0x145d,	// (0x0006c3e9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x145d,	// (0x0006c3e9) list_medium_line_x2_t2_g3_g2

0x1469,	// (0x0006c3f5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1469,	// (0x0006c3f5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007a1c4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007a1c4) list_medium_line_x2_t2_g3_g

0x22dc,	// (0x0006d268) list_medium_line_x2_t2_g3_t1_ParamLimits

0x22dc,	// (0x0006d268) list_medium_line_x2_t2_g3_t1

0x149e,	// (0x0006c42a) list_medium_line_x2_t2_g3_t2_ParamLimits

0x149e,	// (0x0006c42a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007a25c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007a25c) list_medium_line_x2_t2_g3_t

0x2430,	// (0x0006d3bc) main_sp_fs_list_pane_ParamLimits

0x2430,	// (0x0006d3bc) main_sp_fs_list_pane

0xccc5,	// (0x00077c51) sp_fs_scroll_pane_ParamLimits

0xccc5,	// (0x00077c51) sp_fs_scroll_pane

0x243c,	// (0x0006d3c8) list_medium_line_x2_t3_t1

0x244c,	// (0x0006d3d8) list_medium_line_x2_t3_t2

0x245a,	// (0x0006d3e6) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007a2a7) list_medium_line_x2_t3_t

0x2468,	// (0x0006d3f4) list_medium_line_x3_t4_t1

0x2478,	// (0x0006d404) list_medium_line_x3_t4_t2

0x2486,	// (0x0006d412) list_medium_line_x3_t4_t3

0x245a,	// (0x0006d3e6) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007a2ae) list_medium_line_x3_t4_t

0x2494,	// (0x0006d420) list_medium_line_x4_t5_t1

0x24a4,	// (0x0006d430) list_medium_line_x4_t5_t2

0x2486,	// (0x0006d412) list_medium_line_x4_t5_t3

0x24b2,	// (0x0006d43e) list_medium_line_x4_t5_t4

0x245a,	// (0x0006d3e6) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007a2b7) list_medium_line_x4_t5_t

0x1451,	// (0x0006c3dd) list_medium_line_t4_g4_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_t4_g4_g1

0x1504,	// (0x0006c490) list_medium_line_t4_g4_g2_ParamLimits

0x1504,	// (0x0006c490) list_medium_line_t4_g4_g2

0x24c0,	// (0x0006d44c) list_medium_line_t4_g4_g3_ParamLimits

0x24c0,	// (0x0006d44c) list_medium_line_t4_g4_g3

0x1469,	// (0x0006c3f5) list_medium_line_t4_g4_g4_ParamLimits

0x1469,	// (0x0006c3f5) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007a2c2) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007a2c2) list_medium_line_t4_g4_g

0x24cc,	// (0x0006d458) list_medium_line_t4_g4_t1_ParamLimits

0x24cc,	// (0x0006d458) list_medium_line_t4_g4_t1

0x24e1,	// (0x0006d46d) list_medium_line_t4_g4_t2_ParamLimits

0x24e1,	// (0x0006d46d) list_medium_line_t4_g4_t2

0x24f7,	// (0x0006d483) list_medium_line_t4_g4_t3_ParamLimits

0x24f7,	// (0x0006d483) list_medium_line_t4_g4_t3

0x149e,	// (0x0006c42a) list_medium_line_t4_g4_t4_ParamLimits

0x149e,	// (0x0006c42a) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007a2cb) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007a2cb) list_medium_line_t4_g4_t

0x25d0,	// (0x0006d55c) chi_dic_find_pane_g1

0x360e,	// (0x0006e59a) main_tport_pane

0x648a,	// (0x00071416) list_medium_line_plain_t1

0x6532,	// (0x000714be) list_medium_line_t2_g2_g1_ParamLimits

0x6532,	// (0x000714be) list_medium_line_t2_g2_g1

0x653e,	// (0x000714ca) list_medium_line_t2_g2_g2_ParamLimits

0x653e,	// (0x000714ca) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0007a99f) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0007a99f) list_medium_line_t2_g2_g

0x654a,	// (0x000714d6) list_medium_line_t2_g2_t1_ParamLimits

0x654a,	// (0x000714d6) list_medium_line_t2_g2_t1

0x6564,	// (0x000714f0) list_medium_line_t2_g2_t2_ParamLimits

0x6564,	// (0x000714f0) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0007a9a4) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0007a9a4) list_medium_line_t2_g2_t

0xa078,	// (0x00075004) aid_sp_fs_list_icon_a_sm

0xa080,	// (0x0007500c) aid_sp_fs_list_icon_d

0xa088,	// (0x00075014) aid_sp_fs_text_primary

0xdcff,	// (0x00078c8b) aid_sp_fs_text_secondary

0x6bd4,	// (0x00071b60) list_medium_line

0x6bd4,	// (0x00071b60) list_medium_line_g2

0x6bd4,	// (0x00071b60) list_medium_line_g3

0x6bd4,	// (0x00071b60) list_medium_line_plain

0x6bd4,	// (0x00071b60) list_medium_line_plain_t2

0x6bd4,	// (0x00071b60) list_medium_line_plain_t3

0x6bd4,	// (0x00071b60) list_medium_line_right_icon

0x6bd4,	// (0x00071b60) list_medium_line_right_iconx2

0x6bd4,	// (0x00071b60) list_medium_line_t2

0x6bd4,	// (0x00071b60) list_medium_line_t2_g2

0x6bd4,	// (0x00071b60) list_medium_line_t2_g3

0x6bd4,	// (0x00071b60) list_medium_line_t2_right_icon

0x6bd4,	// (0x00071b60) list_medium_line_t2_right_iconx2

0x6bd4,	// (0x00071b60) list_medium_line_t3

0x6bd4,	// (0x00071b60) list_medium_line_t3_g2

0x6bd4,	// (0x00071b60) list_medium_line_t3_g3

0x6bd4,	// (0x00071b60) list_medium_line_t3_right_iconx2

0x6bdd,	// (0x00071b69) list_medium_line_t4_g4

0x6bd4,	// (0x00071b60) list_medium_line_x2

0x6bd4,	// (0x00071b60) list_medium_line_x2_t2_g2

0x6bd4,	// (0x00071b60) list_medium_line_x2_t2_g3

0x6bd4,	// (0x00071b60) list_medium_line_x2_t2_g4

0x6bd4,	// (0x00071b60) list_medium_line_x2_t3

0x6bd4,	// (0x00071b60) list_medium_line_x2_t3_g2

0x6bd4,	// (0x00071b60) list_medium_line_x2_t3_g3

0x6bd4,	// (0x00071b60) list_medium_line_x2_t3_g4

0x6bd4,	// (0x00071b60) list_medium_line_x2_t4_g2

0x6bd4,	// (0x00071b60) list_medium_line_x2_t4_g4

0x6be6,	// (0x00071b72) list_medium_line_x3

0x6be6,	// (0x00071b72) list_medium_line_x3_t4

0x6be6,	// (0x00071b72) list_medium_line_x3_t4_g4

0x6bdd,	// (0x00071b69) list_medium_line_x4_t4

0x6bdd,	// (0x00071b69) list_medium_line_x4_t4_g7

0x6bdd,	// (0x00071b69) list_medium_line_x4_t5

0x6bef,	// (0x00071b7b) list_single_fs_dyc_pane_ParamLimits

0x6bef,	// (0x00071b7b) list_single_fs_dyc_pane

0x1451,	// (0x0006c3dd) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x4_t4_g7_g1

0x735c,	// (0x000722e8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x735c,	// (0x000722e8) list_medium_line_x4_t4_g7_g2

0x7368,	// (0x000722f4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7368,	// (0x000722f4) list_medium_line_x4_t4_g7_g3

0x7377,	// (0x00072303) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7377,	// (0x00072303) list_medium_line_x4_t4_g7_g4

0x7383,	// (0x0007230f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7383,	// (0x0007230f) list_medium_line_x4_t4_g7_g5

0x7392,	// (0x0007231e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7392,	// (0x0007231e) list_medium_line_x4_t4_g7_g6

0x73a1,	// (0x0007232d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x73a1,	// (0x0007232d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0007ab6f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0007ab6f) list_medium_line_x4_t4_g7_g

0x73ad,	// (0x00072339) list_medium_line_x4_t4_g7_t1_ParamLimits

0x73ad,	// (0x00072339) list_medium_line_x4_t4_g7_t1

0x73c2,	// (0x0007234e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x73c2,	// (0x0007234e) list_medium_line_x4_t4_g7_t2

0x73d7,	// (0x00072363) list_medium_line_x4_t4_g7_t3_ParamLimits

0x73d7,	// (0x00072363) list_medium_line_x4_t4_g7_t3

0x73ec,	// (0x00072378) list_medium_line_x4_t4_g7_t4_ParamLimits

0x73ec,	// (0x00072378) list_medium_line_x4_t4_g7_t4

0x73fe,	// (0x0007238a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x73fe,	// (0x0007238a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0007ab7e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0007ab7e) list_medium_line_x4_t4_g7_t

0x7410,	// (0x0007239c) list_single_dyc_row_pane_ParamLimits

0x7410,	// (0x0007239c) list_single_dyc_row_pane

0x7b24,	// (0x00072ab0) call5_gesture_pane_ParamLimits

0x7b24,	// (0x00072ab0) call5_gesture_pane

0x7b7a,	// (0x00072b06) call5_windows_pane_ParamLimits

0x7b7a,	// (0x00072b06) call5_windows_pane

0x7c24,	// (0x00072bb0) call5_swipe_1_pane_cp_ParamLimits

0x7c24,	// (0x00072bb0) call5_swipe_1_pane_cp

0x7c30,	// (0x00072bbc) call5_swipe_2_pane_cp_ParamLimits

0x7c30,	// (0x00072bbc) call5_swipe_2_pane_cp

0xaa41,	// (0x000759cd) call5_image_pane_cp

0x7c3c,	// (0x00072bc8) popup_call5_audio_first_window_cp_ParamLimits

0x7c3c,	// (0x00072bc8) popup_call5_audio_first_window_cp

0xe6df,	// (0x0007966b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6df,	// (0x0007966b) call5_swipe_1_pane_g1_cp

0xe71f,	// (0x000796ab) call5_swipe_1_pane_g2_cp

0xe6f8,	// (0x00079684) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6f8,	// (0x00079684) call5_swipe_1_pane_t1_cp

0xe6df,	// (0x0007966b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6df,	// (0x0007966b) call5_swipe_2_pane_g1_cp

0xe727,	// (0x000796b3) call5_swipe_2_pane_g2_cp

0xe72f,	// (0x000796bb) call5_swipe_2_pane_t1_cp_ParamLimits

0xe72f,	// (0x000796bb) call5_swipe_2_pane_t1_cp

0x9f3d,	// (0x00074ec9) main_sp_fs_email_pane

0xe744,	// (0x000796d0) main_sp_fs_listscroll_pane_te

0xa091,	// (0x0007501d) popup_sp_fs_action_menu_pane_ParamLimits

0xa091,	// (0x0007501d) popup_sp_fs_action_menu_pane

0xcce1,	// (0x00077c6d) bg_sp_fs_ctrlbar_pane_g1

0xe74d,	// (0x000796d9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe756,	// (0x000796e2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe75f,	// (0x000796eb) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcce1,	// (0x00077c6d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0007ac6c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaba,	// (0x00077a46) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaba,	// (0x00077a46) bg_sp_fs_ctrlbar_ddmenu_pane

0xe768,	// (0x000796f4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe768,	// (0x000796f4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe774,	// (0x00079700) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe774,	// (0x00079700) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0007ac75) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0007ac75) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe780,	// (0x0007970c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe780,	// (0x0007970c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c4a,	// (0x00072bd6) list_medium_line_t2_right_icon_g1

0x7c52,	// (0x00072bde) list_medium_line_t2_right_icon_t1

0x7c62,	// (0x00072bee) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0007ac7a) list_medium_line_t2_right_icon_t

0xc8cd,	// (0x00077859) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8cd,	// (0x00077859) bg_sp_fs_ctrlbar_pane

0x7cbc,	// (0x00072c48) main_sp_fs_ctrlbar_button_pane_cp01

0x7cc6,	// (0x00072c52) main_sp_fs_ctrlbar_ddmenu_pane

0xe7d2,	// (0x0007975e) main_sp_fs_ctrlbar_pane_g1

0xe7de,	// (0x0007976a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0007ac7f) main_sp_fs_ctrlbar_pane_g

0xe7ea,	// (0x00079776) main_sp_fs_ctrlbar_pane_t1

0x7cd0,	// (0x00072c5c) main_sp_fs_ctrlbar_pane

0x7cf4,	// (0x00072c80) main_sp_fs_listscroll_pane_te_cp01

0x7d14,	// (0x00072ca0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d14,	// (0x00072ca0) popup_sp_fs_action_menu_pane_cp01

0x9f3d,	// (0x00074ec9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9f3d,	// (0x00074ec9) bg_sp_fs_highlight_list_pane_cp01

0xa0d3,	// (0x0007505f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa0d3,	// (0x0007505f) sp_fs_action_menu_list_gene_pane_g1

0xe81a,	// (0x000797a6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe81a,	// (0x000797a6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0007ac89) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0007ac89) sp_fs_action_menu_list_gene_pane_g

0xa0e2,	// (0x0007506e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa0e2,	// (0x0007506e) sp_fs_action_menu_list_gene_pane_t1

0xa0fa,	// (0x00075086) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa0fa,	// (0x00075086) sp_fs_action_menu_list_gene_pane

0xe827,	// (0x000797b3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe827,	// (0x000797b3) popup_sp_fs_action_menu_bg_pane

0xa119,	// (0x000750a5) sp_fs_action_menu_list_pane_ParamLimits

0xa119,	// (0x000750a5) sp_fs_action_menu_list_pane

0xa139,	// (0x000750c5) sp_fs_scroll_pane_cp01_ParamLimits

0xa139,	// (0x000750c5) sp_fs_scroll_pane_cp01

0x7d44,	// (0x00072cd0) list_medium_line_plain_t2_t1

0x7d54,	// (0x00072ce0) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0007ac8e) list_medium_line_plain_t2_t

0x7d64,	// (0x00072cf0) list_medium_line_plain_t3_t1

0x7d74,	// (0x00072d00) list_medium_line_plain_t3_t2

0x7d82,	// (0x00072d0e) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0007ac93) list_medium_line_plain_t3_t

0x1451,	// (0x0006c3dd) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x2_t2_g2_g1

0x1469,	// (0x0006c3f5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1469,	// (0x0006c3f5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007a1d2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007a1d2) list_medium_line_x2_t2_g2_g

0x24cc,	// (0x0006d458) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24cc,	// (0x0006d458) list_medium_line_x2_t2_g2_t1

0x149e,	// (0x0006c42a) list_medium_line_x2_t2_g2_t2_ParamLimits

0x149e,	// (0x0006c42a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0007ac9a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0007ac9a) list_medium_line_x2_t2_g2_t

0x1451,	// (0x0006c3dd) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x2_t4_g2_g1

0x7d90,	// (0x00072d1c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7d90,	// (0x00072d1c) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0007ac9f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0007ac9f) list_medium_line_x2_t4_g2_g

0x7da2,	// (0x00072d2e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7da2,	// (0x00072d2e) list_medium_line_x2_t4_g2_t1

0x7dbc,	// (0x00072d48) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7dbc,	// (0x00072d48) list_medium_line_x2_t4_g2_t2

0x7dd2,	// (0x00072d5e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7dd2,	// (0x00072d5e) list_medium_line_x2_t4_g2_t3

0x149e,	// (0x0006c42a) list_medium_line_x2_t4_g2_t4_ParamLimits

0x149e,	// (0x0006c42a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0007aca4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0007aca4) list_medium_line_x2_t4_g2_t

0x7de7,	// (0x00072d73) list_medium_line_t3_right_iconx2_g1

0x7c4a,	// (0x00072bd6) list_medium_line_t3_right_iconx2_g2

0x7def,	// (0x00072d7b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0007acad) list_medium_line_t3_right_iconx2_g

0x7df9,	// (0x00072d85) list_medium_line_t3_right_iconx2_t1

0x7e09,	// (0x00072d95) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0007acb4) list_medium_line_t3_right_iconx2_t

0x1451,	// (0x0006c3dd) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x3_t4_g4_g1

0x145d,	// (0x0006c3e9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x145d,	// (0x0006c3e9) list_medium_line_x3_t4_g4_g2

0x1504,	// (0x0006c490) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1504,	// (0x0006c490) list_medium_line_x3_t4_g4_g3

0x7e17,	// (0x00072da3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e17,	// (0x00072da3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0007acb9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0007acb9) list_medium_line_x3_t4_g4_g

0x7e23,	// (0x00072daf) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e23,	// (0x00072daf) list_medium_line_x3_t4_g4_t1

0x7e3a,	// (0x00072dc6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e3a,	// (0x00072dc6) list_medium_line_x3_t4_g4_t2

0x7e55,	// (0x00072de1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7e55,	// (0x00072de1) list_medium_line_x3_t4_g4_t3

0x7e6a,	// (0x00072df6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e6a,	// (0x00072df6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0007acc2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0007acc2) list_medium_line_x3_t4_g4_t

0x7e87,	// (0x00072e13) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e87,	// (0x00072e13) list_single_dyc_row_text_pane_t1

0x7ed0,	// (0x00072e5c) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ed0,	// (0x00072e5c) list_single_dyc_row_text_pane_t2

0xa15f,	// (0x000750eb) list_single_dyc_row_text_pane_t3_ParamLimits

0xa15f,	// (0x000750eb) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0007accb) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0007accb) list_single_dyc_row_text_pane_t

0xa183,	// (0x0007510f) list_single_dyc_row_pane_g1_ParamLimits

0xa183,	// (0x0007510f) list_single_dyc_row_pane_g1

0xa18f,	// (0x0007511b) list_single_dyc_row_pane_g2_ParamLimits

0xa18f,	// (0x0007511b) list_single_dyc_row_pane_g2

0xa19b,	// (0x00075127) list_single_dyc_row_pane_g3_ParamLimits

0xa19b,	// (0x00075127) list_single_dyc_row_pane_g3

0xa1a7,	// (0x00075133) list_single_dyc_row_pane_g4_ParamLimits

0xa1a7,	// (0x00075133) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0007acd8) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0007acd8) list_single_dyc_row_pane_g

0xa1b3,	// (0x0007513f) list_single_dyc_row_text_pane_ParamLimits

0xa1b3,	// (0x0007513f) list_single_dyc_row_text_pane

0x93c4,	// (0x00074350) bg_sp_fs_scroll_pane

0xe835,	// (0x000797c1) thumb_sp_fs_scroll_pane

0x6532,	// (0x000714be) list_medium_line_g1_ParamLimits

0x6532,	// (0x000714be) list_medium_line_g1

0x8005,	// (0x00072f91) list_medium_line_t1_ParamLimits

0x8005,	// (0x00072f91) list_medium_line_t1

0x1451,	// (0x0006c3dd) list_medium_line_x2_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x2_g1

0x145d,	// (0x0006c3e9) list_medium_line_x2_g2_ParamLimits

0x145d,	// (0x0006c3e9) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0007ace1) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0007ace1) list_medium_line_x2_g

0xa1d2,	// (0x0007515e) list_medium_line_x2_t1_ParamLimits

0xa1d2,	// (0x0007515e) list_medium_line_x2_t1

0x1451,	// (0x0006c3dd) list_medium_line_x3_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x3_g1

0x145d,	// (0x0006c3e9) list_medium_line_x3_g2_ParamLimits

0x145d,	// (0x0006c3e9) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0007ace1) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0007ace1) list_medium_line_x3_g

0xa1d2,	// (0x0007515e) list_medium_line_x3_t1_ParamLimits

0xa1d2,	// (0x0007515e) list_medium_line_x3_t1

0xe83e,	// (0x000797ca) thumb_sp_fs_scroll_pane_g1

0xe847,	// (0x000797d3) thumb_sp_fs_scroll_pane_g2

0xe850,	// (0x000797dc) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0179,	// (0x0006b105) thumb_sp_fs_scroll_pane_g

0xe83e,	// (0x000797ca) bg_sp_fs_scroll_pane_g1

0xe847,	// (0x000797d3) bg_sp_fs_scroll_pane_g2

0xe850,	// (0x000797dc) bg_sp_fs_scroll_pane_g3

0x0002,

0x0179,	// (0x0006b105) bg_sp_fs_scroll_pane_g

0x1451,	// (0x0006c3dd) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1451,	// (0x0006c3dd) list_medium_line_x2_t3_g4_g1

0x14f8,	// (0x0006c484) list_medium_line_x2_t3_g4_g2_ParamLimits

0x14f8,	// (0x0006c484) list_medium_line_x2_t3_g4_g2

0x145d,	// (0x0006c3e9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x145d,	// (0x0006c3e9) list_medium_line_x2_t3_g4_g3

0x1469,	// (0x0006c3f5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1469,	// (0x0006c3f5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007a24e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007a24e) list_medium_line_x2_t3_g4_g

0x801a,	// (0x00072fa6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x801a,	// (0x00072fa6) list_medium_line_x2_t3_g4_t1

0x8034,	// (0x00072fc0) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8034,	// (0x00072fc0) list_medium_line_x2_t3_g4_t2

0x149e,	// (0x0006c42a) list_medium_line_x2_t3_g4_t3_ParamLimits

0x149e,	// (0x0006c42a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5a,	// (0x0007ace6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5a,	// (0x0007ace6) list_medium_line_x2_t3_g4_t

0x6532,	// (0x000714be) list_medium_line_g2_g1_ParamLimits

0x6532,	// (0x000714be) list_medium_line_g2_g1

0x653e,	// (0x000714ca) list_medium_line_g2_g2_ParamLimits

0x653e,	// (0x000714ca) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0007a99f) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0007a99f) list_medium_line_g2_g

0x804e,	// (0x00072fda) list_medium_line_g2_t1_ParamLimits

0x804e,	// (0x00072fda) list_medium_line_g2_t1

0x6532,	// (0x000714be) list_medium_line_t3_g2_g1_ParamLimits

0x6532,	// (0x000714be) list_medium_line_t3_g2_g1

0x653e,	// (0x000714ca) list_medium_line_t3_g2_g2_ParamLimits

0x653e,	// (0x000714ca) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0007a99f) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0007a99f) list_medium_line_t3_g2_g

0x8063,	// (0x00072fef) list_medium_line_t3_g2_t1_ParamLimits

0x8063,	// (0x00072fef) list_medium_line_t3_g2_t1

0x807d,	// (0x00073009) list_medium_line_t3_g2_t2_ParamLimits

0x807d,	// (0x00073009) list_medium_line_t3_g2_t2

0x8093,	// (0x0007301f) list_medium_line_t3_g2_t3_ParamLimits

0x8093,	// (0x0007301f) list_medium_line_t3_g2_t3

0x0002,

0xfd61,	// (0x0007aced) list_medium_line_t3_g2_t_ParamLimits

0xfd61,	// (0x0007aced) list_medium_line_t3_g2_t

0x7c4a,	// (0x00072bd6) list_medium_line_right_icon_g1

0x80ad,	// (0x00073039) list_medium_line_right_icon_t1

0x6532,	// (0x000714be) list_medium_line_t2_g1_ParamLimits

0x6532,	// (0x000714be) list_medium_line_t2_g1

0x80bb,	// (0x00073047) list_medium_line_t2_t1_ParamLimits

0x80bb,	// (0x00073047) list_medium_line_t2_t1

0x80d5,	// (0x00073061) list_medium_line_t2_t2_ParamLimits

0x80d5,	// (0x00073061) list_medium_line_t2_t2

0x0001,

0xfd68,	// (0x0007acf4) list_medium_line_t2_t_ParamLimits

0xfd68,	// (0x0007acf4) list_medium_line_t2_t

0x6532,	// (0x000714be) list_medium_line_t3_g1_ParamLimits

0x6532,	// (0x000714be) list_medium_line_t3_g1

0x80ee,	// (0x0007307a) list_medium_line_t3_t1_ParamLimits

0x80ee,	// (0x0007307a) list_medium_line_t3_t1

0x8108,	// (0x00073094) list_medium_line_t3_t2_ParamLimits

0x8108,	// (0x00073094) list_medium_line_t3_t2

0x811e,	// (0x000730aa) list_medium_line_t3_t3_ParamLimits

0x811e,	// (0x000730aa) list_medium_line_t3_t3

0x0002,

0xfd6d,	// (0x0007acf9) list_medium_line_t3_t_ParamLimits

0xfd6d,	// (0x0007acf9) list_medium_line_t3_t

0x6532,	// (0x000714be) list_medium_line_g3_g1_ParamLimits

0x6532,	// (0x000714be) list_medium_line_g3_g1

0x8133,	// (0x000730bf) list_medium_line_g3_g2_ParamLimits

0x8133,	// (0x000730bf) list_medium_line_g3_g2

0x653e,	// (0x000714ca) list_medium_line_g3_g3_ParamLimits

0x653e,	// (0x000714ca) list_medium_line_g3_g3

0x0002,

0xfd74,	// (0x0007ad00) list_medium_line_g3_g_ParamLimits

0xfd74,	// (0x0007ad00) list_medium_line_g3_g

0x813f,	// (0x000730cb) list_medium_line_g3_t1_ParamLimits

0x813f,	// (0x000730cb) list_medium_line_g3_t1

0x6532,	// (0x000714be) list_medium_line_t2_g3_g1_ParamLimits

0x6532,	// (0x000714be) list_medium_line_t2_g3_g1

0x8133,	// (0x000730bf) list_medium_line_t2_g3_g2_ParamLimits

0x8133,	// (0x000730bf) list_medium_line_t2_g3_g2

0x653e,	// (0x000714ca) list_medium_line_t2_g3_g3_ParamLimits

0x653e,	// (0x000714ca) list_medium_line_t2_g3_g3

0x0002,

0xfd74,	// (0x0007ad00) list_medium_line_t2_g3_g_ParamLimits

0xfd74,	// (0x0007ad00) list_medium_line_t2_g3_g

0x8154,	// (0x000730e0) list_medium_line_t2_g3_t1_ParamLimits

0x8154,	// (0x000730e0) list_medium_line_t2_g3_t1

0x816e,	// (0x000730fa) list_medium_line_t2_g3_t2_ParamLimits

0x816e,	// (0x000730fa) list_medium_line_t2_g3_t2

0x0001,

0xfd7b,	// (0x0007ad07) list_medium_line_t2_g3_t_ParamLimits

0xfd7b,	// (0x0007ad07) list_medium_line_t2_g3_t

0x6532,	// (0x000714be) list_medium_line_t3_g3_g1_ParamLimits

0x6532,	// (0x000714be) list_medium_line_t3_g3_g1

0x8133,	// (0x000730bf) list_medium_line_t3_g3_g2_ParamLimits

0x8133,	// (0x000730bf) list_medium_line_t3_g3_g2

0x653e,	// (0x000714ca) list_medium_line_t3_g3_g3_ParamLimits

0x653e,	// (0x000714ca) list_medium_line_t3_g3_g3

0x0002,

0xfd74,	// (0x0007ad00) list_medium_line_t3_g3_g_ParamLimits

0xfd74,	// (0x0007ad00) list_medium_line_t3_g3_g

0x818c,	// (0x00073118) list_medium_line_t3_g3_t1_ParamLimits

0x818c,	// (0x00073118) list_medium_line_t3_g3_t1

0x81a5,	// (0x00073131) list_medium_line_t3_g3_t2_ParamLimits

0x81a5,	// (0x00073131) list_medium_line_t3_g3_t2

0x81bb,	// (0x00073147) list_medium_line_t3_g3_t3_ParamLimits

0x81bb,	// (0x00073147) list_medium_line_t3_g3_t3

0x0002,

0xfd80,	// (0x0007ad0c) list_medium_line_t3_g3_t_ParamLimits

0xfd80,	// (0x0007ad0c) list_medium_line_t3_g3_t

0x7de7,	// (0x00072d73) list_medium_line_right_iconx2_g1

0x7c4a,	// (0x00072bd6) list_medium_line_right_iconx2_g2

0x0001,

0xfd87,	// (0x0007ad13) list_medium_line_right_iconx2_g

0x81d5,	// (0x00073161) list_medium_line_right_iconx2_t1

0x7de7,	// (0x00072d73) list_medium_line_t2_right_iconx2_g1

0x7c4a,	// (0x00072bd6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd87,	// (0x0007ad13) list_medium_line_t2_right_iconx2_g

0x81e3,	// (0x0007316f) list_medium_line_t2_right_iconx2_t1

0x81f3,	// (0x0007317f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8c,	// (0x0007ad18) list_medium_line_t2_right_iconx2_t

0x8205,	// (0x00073191) list_medium_line_x4_t4_t1

0x8213,	// (0x0007319f) list_medium_line_x4_t4_t2

0x8223,	// (0x000731af) list_medium_line_x4_t4_t3

0x8233,	// (0x000731bf) list_medium_line_x4_t4_t4

0x0003,

0xfd91,	// (0x0007ad1d) list_medium_line_x4_t4_t

0x8286,	// (0x00073212) tport_appsw_pane_ParamLimits

0x8286,	// (0x00073212) tport_appsw_pane

0x829e,	// (0x0007322a) tport_contact_pane_ParamLimits

0x829e,	// (0x0007322a) tport_contact_pane

0x82b6,	// (0x00073242) tport_listscroll_pane_ParamLimits

0x82b6,	// (0x00073242) tport_listscroll_pane

0x82d0,	// (0x0007325c) cell_tport_appsw_pane_ParamLimits

0x82d0,	// (0x0007325c) cell_tport_appsw_pane

0xd712,	// (0x0007869e) tport_appsw_pane_g1_ParamLimits

0xd712,	// (0x0007869e) tport_appsw_pane_g1

0xe859,	// (0x000797e5) tport_contact_pane_g1

0xe862,	// (0x000797ee) tport_contact_pane_t1

0xe870,	// (0x000797fc) tport_contact_pane_t2

0x0001,

0x01c0,	// (0x0006b14c) tport_contact_pane_t

0xe87e,	// (0x0007980a) list_tport_pane

0xe887,	// (0x00079813) scroll_pane_cp_030

0x8318,	// (0x000732a4) cell_tport_appsw_pane_g1

0x8328,	// (0x000732b4) cell_tport_appsw_pane_t1

0x8336,	// (0x000732c2) grid_highlight_pane_cp019

0x833e,	// (0x000732ca) list_tport_double_graphic_pane_ParamLimits

0x833e,	// (0x000732ca) list_tport_double_graphic_pane

0x9f3d,	// (0x00074ec9) list_highlight_pane_cp023_ParamLimits

0x9f3d,	// (0x00074ec9) list_highlight_pane_cp023

0x834b,	// (0x000732d7) list_tport_double_graphic_pane_g1_ParamLimits

0x834b,	// (0x000732d7) list_tport_double_graphic_pane_g1

0x8358,	// (0x000732e4) list_tport_double_graphic_pane_t1_ParamLimits

0x8358,	// (0x000732e4) list_tport_double_graphic_pane_t1

0x836d,	// (0x000732f9) list_tport_double_graphic_pane_t2_ParamLimits

0x836d,	// (0x000732f9) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x0007ad2d) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x0007ad2d) list_tport_double_graphic_pane_t

0x93c4,	// (0x00074350) main_cale_note_pane

0x5ce1,	// (0x00070c6d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5ce1,	// (0x00070c6d) cell_vitu2_function_top_wide_pane_cp01

0x77b3,	// (0x0007273f) wait_bar_pane_cp05_ParamLimits

0x9f3d,	// (0x00074ec9) listscroll_cmail_pane

0xe890,	// (0x0007981c) list_cmail_pane

0x837f,	// (0x0007330b) list_cmail_body_pane

0x8394,	// (0x00073320) list_single_cmail_header_caption_pane

0x83ab,	// (0x00073337) list_single_cmail_header_detail_pane_ParamLimits

0x83ab,	// (0x00073337) list_single_cmail_header_detail_pane

0xe8a0,	// (0x0007982c) list_single_cmail_header_caption_pane_t1

0x83d5,	// (0x00073361) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83d5,	// (0x00073361) list_single_cmail_header_detail_pane_g1

0xa1e8,	// (0x00075174) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa1e8,	// (0x00075174) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x0007ad32) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x0007ad32) list_single_cmail_header_detail_pane_g

0xa1f4,	// (0x00075180) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa1f4,	// (0x00075180) list_single_cmail_header_detail_pane_t1

0xa254,	// (0x000751e0) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa254,	// (0x000751e0) list_single_cmail_header_editor_pane_bg

0xe364,	// (0x000792f0) list_cmail_body_pane_g1

0xe8c4,	// (0x00079850) list_cmail_body_pane_t1

0xd732,	// (0x000786be) list_single_cmail_header_editor_pane_bg_g1

0xac9a,	// (0x00075c26) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd742,	// (0x000786ce) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd73a,	// (0x000786c6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd96e,	// (0x000788fa) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd762,	// (0x000786ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd752,	// (0x000786de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd75a,	// (0x000786e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac7a,	// (0x00075c06) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x83ed,	// (0x00073379) calenote_gesture_pane_ParamLimits

0x83ed,	// (0x00073379) calenote_gesture_pane

0x840d,	// (0x00073399) calenote_window_pane_ParamLimits

0x840d,	// (0x00073399) calenote_window_pane

0xe8d2,	// (0x0007985e) popup_note_window_cp01

0x8429,	// (0x000733b5) calenote_swipe_1_pane_ParamLimits

0x8429,	// (0x000733b5) calenote_swipe_1_pane

0x7c30,	// (0x00072bbc) calenote_swipe_2_pane_ParamLimits

0x7c30,	// (0x00072bbc) calenote_swipe_2_pane

0xe6df,	// (0x0007966b) calenote_swipe_1_pane_g1_ParamLimits

0xe6df,	// (0x0007966b) calenote_swipe_1_pane_g1

0xe6ec,	// (0x00079678) calenote_swipe_1_pane_g2_ParamLimits

0xe6ec,	// (0x00079678) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0007ac62) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0007ac62) calenote_swipe_1_pane_g

0xe8e4,	// (0x00079870) calenote_swipe_1_pane_t1_ParamLimits

0xe8e4,	// (0x00079870) calenote_swipe_1_pane_t1

0xe6df,	// (0x0007966b) calenote_swipe_2_pane_g1_ParamLimits

0xe6df,	// (0x0007966b) calenote_swipe_2_pane_g1

0xe903,	// (0x0007988f) calenote_swipe_2_pane_g2_ParamLimits

0xe903,	// (0x0007988f) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x0007ad3e) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x0007ad3e) calenote_swipe_2_pane_g

0xe90f,	// (0x0007989b) calenote_swipe_2_pane_t1_ParamLimits

0xe90f,	// (0x0007989b) calenote_swipe_2_pane_t1

0x93c4,	// (0x00074350) main_mup_navstr_pane

0x49a5,	// (0x0006f931) main_mup3_pane_t7_ParamLimits

0x49a5,	// (0x0006f931) main_mup3_pane_t7

0x9813,	// (0x0007479f) main_mp4_pane_g6_ParamLimits

0x9813,	// (0x0007479f) main_mp4_pane_g6

0x99b7,	// (0x00074943) main_image3_pane_t4_ParamLimits

0x99b7,	// (0x00074943) main_image3_pane_t4

0x843e,	// (0x000733ca) popup_navstr_preview_pane_ParamLimits

0x843e,	// (0x000733ca) popup_navstr_preview_pane

0x8452,	// (0x000733de) scroll_navstr_pane_ParamLimits

0x8452,	// (0x000733de) scroll_navstr_pane

0x93c4,	// (0x00074350) bg_popup_preview_window_pane_cp04

0xe936,	// (0x000798c2) popup_navstr_preview_pane_t1

0x8466,	// (0x000733f2) scroll_navstr_pane_g1_ParamLimits

0x8466,	// (0x000733f2) scroll_navstr_pane_g1

0x847a,	// (0x00073406) scroll_navstr_pane_t1_ParamLimits

0x847a,	// (0x00073406) scroll_navstr_pane_t1

0xe8db,	// (0x00079867) bg_button_pane_cp014

0xe8db,	// (0x00079867) bg_button_pane_cp030

0x7aca,	// (0x00072a56) list_double_fisheye_pane_g4_ParamLimits

0x7aca,	// (0x00072a56) list_double_fisheye_pane_g4

0x7ad6,	// (0x00072a62) list_double_fisheye_pane_g5_ParamLimits

0x7ad6,	// (0x00072a62) list_double_fisheye_pane_g5

0xccc5,	// (0x00077c51) sp_fs_scroll_pane_cp03

0xe7d2,	// (0x0007975e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7de,	// (0x0007976a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0007ac7f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7ea,	// (0x00079776) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe898,	// (0x00079824) sp_fs_scroll_pane_cp02

0xa980,	// (0x0007590c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa980,	// (0x0007590c) popup_sp_fs_calendar_preview_list_single_pane

0x93c4,	// (0x00074350) main_cam6_pano_pane

0x943c,	// (0x000743c8) main_mup3_pane_ParamLimits

0x93c4,	// (0x00074350) main_phacti_pane

0x7686,	// (0x00072612) bg_button_pane_cp11

0x76a0,	// (0x0007262c) main_mobtv_info_pane_g2_ParamLimits

0x76a0,	// (0x0007262c) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0007abdf) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0007abdf) main_mobtv_info_pane_g

0x787d,	// (0x00072809) sc_clock_pane_t5_ParamLimits

0x787d,	// (0x00072809) sc_clock_pane_t5

0x7945,	// (0x000728d1) main_radioblah_pane_g1_ParamLimits

0xe610,	// (0x0007959c) main_radioblah_pane_t3_ParamLimits

0xe610,	// (0x0007959c) main_radioblah_pane_t3

0xe628,	// (0x000795b4) main_radioblah_pane_t4_ParamLimits

0xe628,	// (0x000795b4) main_radioblah_pane_t4

0x796d,	// (0x000728f9) main_radioblah_text_pane_ParamLimits

0x796d,	// (0x000728f9) main_radioblah_text_pane

0x797f,	// (0x0007290b) main_radioblah_info_pane_g1_ParamLimits

0x7a18,	// (0x000729a4) main_radioblah_info_pane_t4_ParamLimits

0x7a18,	// (0x000729a4) main_radioblah_info_pane_t4

0x9f3d,	// (0x00074ec9) main_sp_fs_calendar_pane

0x8491,	// (0x0007341d) main_phacti_pane_g1

0x8499,	// (0x00073425) phacti_note_pane_ParamLimits

0x8499,	// (0x00073425) phacti_note_pane

0xe94d,	// (0x000798d9) phacti_term_pane_ParamLimits

0xe94d,	// (0x000798d9) phacti_term_pane

0xe962,	// (0x000798ee) phacti_note_pane_t1_ParamLimits

0xe962,	// (0x000798ee) phacti_note_pane_t1

0xa26b,	// (0x000751f7) phacti_term_pane_g1

0xa273,	// (0x000751ff) phacti_term_pane_t1_ParamLimits

0xa273,	// (0x000751ff) phacti_term_pane_t1

0xe979,	// (0x00079905) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe981,	// (0x0007990d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x01e2,	// (0x0006b16e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe989,	// (0x00079915) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe989,	// (0x00079915) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe99f,	// (0x0007992b) aid_popup_sp_fs_bg_corner_pane

0xcce1,	// (0x00077c6d) popup_sp_fs_calendar_preview_bg_pane_g1

0x93c4,	// (0x00074350) popup_sp_fs_calendar_preview_bg_pane

0x12da,	// (0x0006c266) popup_sp_fs_calendar_preview_list_pane

0xc8cd,	// (0x00077859) bg_main_sp_fs_cale_pane_ParamLimits

0xc8cd,	// (0x00077859) bg_main_sp_fs_cale_pane

0xa2a6,	// (0x00075232) listscroll_cale_mrui_pane_ParamLimits

0xa2a6,	// (0x00075232) listscroll_cale_mrui_pane

0xa2bb,	// (0x00075247) listscroll_sp_fs_schedule_track_pane

0xa2c4,	// (0x00075250) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa2c4,	// (0x00075250) main_sp_fs_ctrlbar_pane_cp01

0xe9a7,	// (0x00079933) main_sp_fs_ribbon_pane

0xa2d7,	// (0x00075263) popup_sp_fs_cale_preview_window

0x850e,	// (0x0007349a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x850e,	// (0x0007349a) list_single_sp_fs_schedule_track_pane

0x9f3d,	// (0x00074ec9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9f3d,	// (0x00074ec9) bg_sp_fs_highlight_list_pane_cp03

0x8522,	// (0x000734ae) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8522,	// (0x000734ae) list_single_sp_fs_schedule_track_pane_g1

0x852e,	// (0x000734ba) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x852e,	// (0x000734ba) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbc,	// (0x0007ad48) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbc,	// (0x0007ad48) list_single_sp_fs_schedule_track_pane_g

0x853a,	// (0x000734c6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x853a,	// (0x000734c6) list_single_sp_fs_schedule_track_pane_t1

0x8554,	// (0x000734e0) sp_fs_schedule_track_pane_ParamLimits

0x8554,	// (0x000734e0) sp_fs_schedule_track_pane

0xe9af,	// (0x0007993b) sp_fs_schedule_track_pane_g1

0xe9b7,	// (0x00079943) sp_fs_schedule_track_pane_g2

0xe9bf,	// (0x0007994b) sp_fs_schedule_track_pane_g3

0xe9c7,	// (0x00079953) sp_fs_schedule_track_pane_g4

0xe9cf,	// (0x0007995b) sp_fs_schedule_track_pane_g5

0x0004,

0x01ec,	// (0x0006b178) sp_fs_schedule_track_pane_g

0xd732,	// (0x000786be) bg_sp_fs_schedule_viewer_highlight_g1

0xac9a,	// (0x00075c26) bg_sp_fs_schedule_viewer_highlight_g2

0xd73a,	// (0x000786c6) bg_sp_fs_schedule_viewer_highlight_g3

0xd742,	// (0x000786ce) bg_sp_fs_schedule_viewer_highlight_g4

0xd96e,	// (0x000788fa) bg_sp_fs_schedule_viewer_highlight_g5

0xd752,	// (0x000786de) bg_sp_fs_schedule_viewer_highlight_g6

0xd75a,	// (0x000786e6) bg_sp_fs_schedule_viewer_highlight_g7

0xd762,	// (0x000786ee) bg_sp_fs_schedule_viewer_highlight_g8

0xac7a,	// (0x00075c06) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc1,	// (0x0007ad4d) bg_sp_fs_schedule_viewer_highlight_g

0x93c4,	// (0x00074350) bg_main_sp_fs_ribbon_pane

0x8565,	// (0x000734f1) main_sp_fs_ribbon_pane_g1

0xe9d7,	// (0x00079963) main_sp_fs_ribbon_pane_t1

0x856e,	// (0x000734fa) main_sp_fs_ribbon_pane_t2

0xe9e6,	// (0x00079972) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd4,	// (0x0007ad60) main_sp_fs_ribbon_pane_t

0xe9f5,	// (0x00079981) main_sp_fs_ribbon_scheduler_pane

0xe9fd,	// (0x00079989) bg_main_sp_fs_ribbon_pane_g1

0xea06,	// (0x00079992) bg_main_sp_fs_ribbon_pane_g2

0xea0f,	// (0x0007999b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0211,	// (0x0006b19d) bg_main_sp_fs_ribbon_pane_g

0xea17,	// (0x000799a3) main_sp_fs_ribbon_scheduler_pane_g1

0xea20,	// (0x000799ac) main_sp_fs_ribbon_scheduler_pane_g2

0xea29,	// (0x000799b5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0218,	// (0x0006b1a4) main_sp_fs_ribbon_scheduler_pane_g

0xea32,	// (0x000799be) list_cale_mrui_pane

0x857d,	// (0x00073509) sp_fs_scroll_pane_cp07_ParamLimits

0x857d,	// (0x00073509) sp_fs_scroll_pane_cp07

0x8599,	// (0x00073525) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8599,	// (0x00073525) bg_sp_fs_schedule_viewer_highlight

0xea3f,	// (0x000799cb) list_single_sp_fs_schedule_track_pane_cp01

0xea47,	// (0x000799d3) list_sp_fs_schedule_track_pane

0xea4f,	// (0x000799db) sp_fs_scroll_pane_cp06_ParamLimits

0xea4f,	// (0x000799db) sp_fs_scroll_pane_cp06

0xcce1,	// (0x00077c6d) bgmain_sp_fs_calendar_pane_g1

0x85a9,	// (0x00073535) list_single_cale_mrui_pane_ParamLimits

0x85a9,	// (0x00073535) list_single_cale_mrui_pane

0xa2e9,	// (0x00075275) list_single_cale_mrui_row_pane_ParamLimits

0xa2e9,	// (0x00075275) list_single_cale_mrui_row_pane

0xa2f6,	// (0x00075282) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa2f6,	// (0x00075282) list_single_cale_mrui_row_pane_g1

0xa32e,	// (0x000752ba) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa32e,	// (0x000752ba) list_single_cale_mrui_row_pane_t1

0x85cb,	// (0x00073557) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85cb,	// (0x00073557) list_single_cale_mrui_row_pane_t2

0xa340,	// (0x000752cc) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa340,	// (0x000752cc) list_single_cale_mrui_row_pane_t3

0xa36f,	// (0x000752fb) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa36f,	// (0x000752fb) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde2,	// (0x0007ad6e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde2,	// (0x0007ad6e) list_single_cale_mrui_row_pane_t

0x8633,	// (0x000735bf) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8633,	// (0x000735bf) list_single_cmail_header_editor_pane_bg_cp01

0x8659,	// (0x000735e5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8659,	// (0x000735e5) list_single_cmail_header_editor_pane_bg_cp02

0x8679,	// (0x00073605) main_radioblah_text_pane_t1_ParamLimits

0x8679,	// (0x00073605) main_radioblah_text_pane_t1

0xea6e,	// (0x000799fa) cam6_indi_pane_cp01

0xea76,	// (0x00079a02) cam6_mode_pane_cp01

0xea7e,	// (0x00079a0a) cam6_pano_pane

0xea87,	// (0x00079a13) cam6_zoom_pane_cp01

0xea8f,	// (0x00079a1b) cam6_pano_image_pane

0xea9a,	// (0x00079a26) cam6_pano_pane_g1

0xe364,	// (0x000792f0) cam6_pano_pane_g2

0xeaa3,	// (0x00079a2f) cam6_pano_pane_g3

0xeaac,	// (0x00079a38) cam6_pano_pane_g4

0xd28c,	// (0x00078218) cam6_pano_pane_g5

0xeab5,	// (0x00079a41) cam6_pano_pane_g6

0xeabf,	// (0x00079a4b) cam6_pano_pane_g7

0xeac7,	// (0x00079a53) cam6_pano_pane_g8

0xead0,	// (0x00079a5c) cam6_pano_pane_g9

0x0008,

0xfdeb,	// (0x0007ad77) cam6_pano_pane_g

0x93c4,	// (0x00074350) main_browser_tag_pane

0xe92e,	// (0x000798ba) grid_navstr_albumart_pane

0xeadb,	// (0x00079a67) cell_navstr_albumart_pane_ParamLimits

0xeadb,	// (0x00079a67) cell_navstr_albumart_pane

0xeafb,	// (0x00079a87) cell_navstr_albumart_pane_g1

0xc69e,	// (0x0007762a) cell_navstr_albumart_pane_g2

0xc6ae,	// (0x0007763a) cell_navstr_albumart_pane_g3

0xc6a6,	// (0x00077632) cell_navstr_albumart_pane_g4

0x0003,

0x022f,	// (0x0006b1bb) cell_navstr_albumart_pane_g

0x8694,	// (0x00073620) bt_list_pane_ParamLimits

0x8694,	// (0x00073620) bt_list_pane

0x86a8,	// (0x00073634) bt_list_pane_t1

0x86b7,	// (0x00073643) bt_list_pane_t2

0x0001,

0xfdfe,	// (0x0007ad8a) bt_list_pane_t

0x93c4,	// (0x00074350) main_cale_prevew_pane

0x86c6,	// (0x00073652) popup_cale_preview_window_ParamLimits

0x86c6,	// (0x00073652) popup_cale_preview_window

0x9f3d,	// (0x00074ec9) bg_popup_preview_window_pane_cp05_ParamLimits

0x9f3d,	// (0x00074ec9) bg_popup_preview_window_pane_cp05

0xeb03,	// (0x00079a8f) list_cale_preview_pane_ParamLimits

0xeb03,	// (0x00079a8f) list_cale_preview_pane

0x86df,	// (0x0007366b) list_double_cale_preview_pane_ParamLimits

0x86df,	// (0x0007366b) list_double_cale_preview_pane

0xd76a,	// (0x000786f6) list_single_cale_preview_pane_ParamLimits

0xd76a,	// (0x000786f6) list_single_cale_preview_pane

0x86f1,	// (0x0007367d) list_single_cale_preview_pane_g1

0x86f9,	// (0x00073685) list_single_cale_preview_pane_t1_ParamLimits

0x86f9,	// (0x00073685) list_single_cale_preview_pane_t1

0x870e,	// (0x0007369a) list_double_cale_preview_pane_g1

0x8716,	// (0x000736a2) list_double_cale_preview_pane_t1_ParamLimits

0x8716,	// (0x000736a2) list_double_cale_preview_pane_t1

0x872b,	// (0x000736b7) list_double_cale_preview_pane_t2_ParamLimits

0x872b,	// (0x000736b7) list_double_cale_preview_pane_t2

0x0001,

0xfe03,	// (0x0007ad8f) list_double_cale_preview_pane_t_ParamLimits

0xfe03,	// (0x0007ad8f) list_double_cale_preview_pane_t

0x93c4,	// (0x00074350) main_ezdial_pane

0x9f3d,	// (0x00074ec9) main_sp_fs_email_pane_ParamLimits

0x7c74,	// (0x00072c00) cmail_ddmenu_btn01_pane_ParamLimits

0x7c74,	// (0x00072c00) cmail_ddmenu_btn01_pane

0x7c87,	// (0x00072c13) cmail_ddmenu_btn02_pane_ParamLimits

0x7c87,	// (0x00072c13) cmail_ddmenu_btn02_pane

0x7caa,	// (0x00072c36) cmail_ddmenu_btn03_pane_ParamLimits

0x7caa,	// (0x00072c36) cmail_ddmenu_btn03_pane

0x7cd0,	// (0x00072c5c) main_sp_fs_ctrlbar_pane_ParamLimits

0x7cf4,	// (0x00072c80) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x837f,	// (0x0007330b) list_cmail_body_pane_ParamLimits

0xe8ae,	// (0x0007983a) bg_button_pane_cp12

0xe8b7,	// (0x00079843) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8b7,	// (0x00079843) list_single_cmail_header_detail_pane_g3

0xa230,	// (0x000751bc) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa230,	// (0x000751bc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0007ad39) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0007ad39) list_single_cmail_header_detail_pane_t

0xa288,	// (0x00075214) phacti_term_pane_t2_ParamLimits

0xa288,	// (0x00075214) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x0007ad43) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x0007ad43) phacti_term_pane_t

0xeb0f,	// (0x00079a9b) aid_size_list_single_double

0x8743,	// (0x000736cf) popup_ezdial_listscroll_window

0x875f,	// (0x000736eb) popup_number_entry_window_cp01

0xaa41,	// (0x000759cd) bg_popup_call_pane_cp09

0xeb1b,	// (0x00079aa7) ezdial_list_pane

0xeb23,	// (0x00079aaf) scroll_pane_cp23

0xc8cd,	// (0x00077859) bg_button_pane_cp028_ParamLimits

0xc8cd,	// (0x00077859) bg_button_pane_cp028

0x876d,	// (0x000736f9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x876d,	// (0x000736f9) cmail_ddmenu_btn01_pane_g1

0x8779,	// (0x00073705) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8779,	// (0x00073705) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe08,	// (0x0007ad94) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe08,	// (0x0007ad94) cmail_ddmenu_btn01_pane_g

0xeb2b,	// (0x00079ab7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb2b,	// (0x00079ab7) cmail_ddmenu_btn01_pane_t1

0xc8cd,	// (0x00077859) bg_button_pane_cp029_ParamLimits

0xc8cd,	// (0x00077859) bg_button_pane_cp029

0x8785,	// (0x00073711) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8785,	// (0x00073711) cmail_ddmenu_btn02_pane_g1

0x879e,	// (0x0007372a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x879e,	// (0x0007372a) cmail_ddmenu_btn02_pane_t1

0x9f3d,	// (0x00074ec9) bg_button_pane_cp031_ParamLimits

0x9f3d,	// (0x00074ec9) bg_button_pane_cp031

0x8785,	// (0x00073711) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8785,	// (0x00073711) cmail_ddmenu_btn03_pane_g1

0x879e,	// (0x0007372a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x879e,	// (0x0007372a) cmail_ddmenu_btn03_pane_t1

0x5556,	// (0x000704e2) cell_dialer2_keypad_pane_t1_ParamLimits

0x5570,	// (0x000704fc) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5570,	// (0x000704fc) cell_dialer2_keypad_pane_t1_copy1

0x749b,	// (0x00072427) ncimui_group_button_pane

0x9f3d,	// (0x00074ec9) main_sp_fs_calendar_pane_ParamLimits

0x8394,	// (0x00073320) list_single_cmail_header_caption_pane_ParamLimits

0xa29d,	// (0x00075229) aid_recal_txt_sm_pane

0x93c4,	// (0x00074350) mian_recal_day_pane

0xa2d7,	// (0x00075263) popup_sp_fs_cale_preview_window_ParamLimits

0xeb40,	// (0x00079acc) list_recal_day_pane

0xa3b9,	// (0x00075345) list_single_recal_day_pane_ParamLimits

0xa3b9,	// (0x00075345) list_single_recal_day_pane

0xeb67,	// (0x00079af3) list_single_recal_day_pane_g1_ParamLimits

0xeb67,	// (0x00079af3) list_single_recal_day_pane_g1

0xa3cb,	// (0x00075357) list_single_recal_day_pane_g2_ParamLimits

0xa3cb,	// (0x00075357) list_single_recal_day_pane_g2

0xa3d7,	// (0x00075363) list_single_recal_day_pane_g3_ParamLimits

0xa3d7,	// (0x00075363) list_single_recal_day_pane_g3

0x87c2,	// (0x0007374e) list_single_recal_day_pane_g4_ParamLimits

0x87c2,	// (0x0007374e) list_single_recal_day_pane_g4

0xa3e3,	// (0x0007536f) list_single_recal_day_pane_g5_ParamLimits

0xa3e3,	// (0x0007536f) list_single_recal_day_pane_g5

0xa3ef,	// (0x0007537b) list_single_recal_day_pane_g6_ParamLimits

0xa3ef,	// (0x0007537b) list_single_recal_day_pane_g6

0x0004,

0xfe17,	// (0x0007ada3) list_single_recal_day_pane_g_ParamLimits

0xfe17,	// (0x0007ada3) list_single_recal_day_pane_g

0xa403,	// (0x0007538f) list_single_recal_day_pane_t1

0xa415,	// (0x000753a1) list_single_recal_day_pane_t2

0x0001,

0xfe22,	// (0x0007adae) list_single_recal_day_pane_t

0x87da,	// (0x00073766) ncimui_query_button_pane_ParamLimits

0x87da,	// (0x00073766) ncimui_query_button_pane

0x87ea,	// (0x00073776) ncimui_query_button_pane_t1_ParamLimits

0x87ea,	// (0x00073776) ncimui_query_button_pane_t1

0xeb73,	// (0x00079aff) ncimui_query_button_pane_t2_ParamLimits

0xeb73,	// (0x00079aff) ncimui_query_button_pane_t2

0x0001,

0xfe27,	// (0x0007adb3) ncimui_query_button_pane_t_ParamLimits

0xfe27,	// (0x0007adb3) ncimui_query_button_pane_t

0x87fd,	// (0x00073789) query_button_pane_ParamLimits

0x87fd,	// (0x00073789) query_button_pane

0x93c4,	// (0x00074350) bg_button_pane_cp0028

0xeb86,	// (0x00079b12) query_button_pane_t1

0x360e,	// (0x0006e59a) main_tport_pane_ParamLimits

0x8243,	// (0x000731cf) bg_popup_window_pane_cp01_ParamLimits

0x8243,	// (0x000731cf) bg_popup_window_pane_cp01

0x825e,	// (0x000731ea) heading_pane_cp08_ParamLimits

0x825e,	// (0x000731ea) heading_pane_cp08

0x8271,	// (0x000731fd) heading_pane_cp07_ParamLimits

0x8271,	// (0x000731fd) heading_pane_cp07

0x8318,	// (0x000732a4) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x0007ad26) cell_tport_appsw_pane_g

0x9ebc,	// (0x00074e48) input_candi_list_open_g1

0xae5d,	// (0x00075de9) list_cale_time_pane_g6_ParamLimits

0xae5d,	// (0x00075de9) list_cale_time_pane_g6

0x43d6,	// (0x0006f362) aid_size_touch_calib_1_ParamLimits

0x43d6,	// (0x0006f362) aid_size_touch_calib_1

0x43e8,	// (0x0006f374) aid_size_touch_calib_2_ParamLimits

0x43e8,	// (0x0006f374) aid_size_touch_calib_2

0x4400,	// (0x0006f38c) aid_size_touch_calib_3_ParamLimits

0x4400,	// (0x0006f38c) aid_size_touch_calib_3

0x441e,	// (0x0006f3aa) aid_size_touch_calib_4_ParamLimits

0x441e,	// (0x0006f3aa) aid_size_touch_calib_4

0x4436,	// (0x0006f3c2) main_touch_calib_button_group_pane_ParamLimits

0x4436,	// (0x0006f3c2) main_touch_calib_button_group_pane

0x444e,	// (0x0006f3da) main_touch_calib_pane_g1_ParamLimits

0x4460,	// (0x0006f3ec) main_touch_calib_pane_g2_ParamLimits

0x4472,	// (0x0006f3fe) main_touch_calib_pane_g3_ParamLimits

0x4484,	// (0x0006f410) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0007a6f0) main_touch_calib_pane_g_ParamLimits

0x4496,	// (0x0006f422) main_touch_calib_pane_t1_ParamLimits

0x44b0,	// (0x0006f43c) main_touch_calib_pane_t2_ParamLimits

0x44ca,	// (0x0006f456) main_touch_calib_pane_t3_ParamLimits

0x44de,	// (0x0006f46a) main_touch_calib_pane_t4_ParamLimits

0x44f2,	// (0x0006f47e) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0007a6f9) main_touch_calib_pane_t_ParamLimits

0xd02f,	// (0x00077fbb) list_single_fp_cale_pane_g3_ParamLimits

0xd02f,	// (0x00077fbb) list_single_fp_cale_pane_g3

0x943c,	// (0x000743c8) bg_button_pane_cp012_ParamLimits

0x943c,	// (0x000743c8) bg_vkb2_func_pane_cp03_ParamLimits

0x64e8,	// (0x00071474) cell_vitu2_function_top_pane_g1_ParamLimits

0x943c,	// (0x000743c8) bg_vkb2_func_pane_cp04_ParamLimits

0x7426,	// (0x000723b2) main_ncimui_button_group_pane_ParamLimits

0x7426,	// (0x000723b2) main_ncimui_button_group_pane

0x7486,	// (0x00072412) main_ncimui_pane_t3_ParamLimits

0x7486,	// (0x00072412) main_ncimui_pane_t3

0xe944,	// (0x000798d0) phacti_button_group_pane

0xeb0f,	// (0x00079a9b) aid_size_list_single_double_ParamLimits

0x8743,	// (0x000736cf) popup_ezdial_listscroll_window_ParamLimits

0x875f,	// (0x000736eb) popup_number_entry_window_cp01_ParamLimits

0x8810,	// (0x0007379c) phacti_button_pane_ParamLimits

0x8810,	// (0x0007379c) phacti_button_pane

0x93c4,	// (0x00074350) bg_button_pane_cp14

0xeb94,	// (0x00079b20) phacti_button_pane_t1

0x8821,	// (0x000737ad) main_touch_calib_button_pane_ParamLimits

0x8821,	// (0x000737ad) main_touch_calib_button_pane

0xa84c,	// (0x000757d8) bg_button_pane_cp18_ParamLimits

0xa84c,	// (0x000757d8) bg_button_pane_cp18

0xeba2,	// (0x00079b2e) main_touch_calib_button_pane_t1_ParamLimits

0xeba2,	// (0x00079b2e) main_touch_calib_button_pane_t1

0xebb8,	// (0x00079b44) main_touch_calib_button_pane_t2_ParamLimits

0xebb8,	// (0x00079b44) main_touch_calib_button_pane_t2

0x0001,

0x0266,	// (0x0006b1f2) main_touch_calib_button_pane_t_ParamLimits

0x0266,	// (0x0006b1f2) main_touch_calib_button_pane_t

0x93c4,	// (0x00074350) cell_ncimui_button_pane

0x93c4,	// (0x00074350) bg_button_pane_cp032

0xebd6,	// (0x00079b62) cell_ncimui_button_pane_t1

0x9997,	// (0x00074923) image3_infobar_pane_ParamLimits

0x9997,	// (0x00074923) image3_infobar_pane

0x78a9,	// (0x00072835) fs_bigclock_status_pane_ParamLimits

0x78a9,	// (0x00072835) fs_bigclock_status_pane

0x78b6,	// (0x00072842) main_fs_bigclock_clock_pane_ParamLimits

0x78b6,	// (0x00072842) main_fs_bigclock_clock_pane

0x78d4,	// (0x00072860) main_fs_bigclock_indi_pane_ParamLimits

0x78d4,	// (0x00072860) main_fs_bigclock_indi_pane

0x7906,	// (0x00072892) main_fs_bigclock_swipe_pane_ParamLimits

0x7906,	// (0x00072892) main_fs_bigclock_swipe_pane

0x93c4,	// (0x00074350) main_fs_clock_dumped_data

0xe471,	// (0x000793fd) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe471,	// (0x000793fd) list_single_fs_bigclock_indicator_pane_g1

0xe48d,	// (0x00079419) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe48d,	// (0x00079419) list_single_fs_bigclock_indicator_pane_g2

0xe4a7,	// (0x00079433) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe4a7,	// (0x00079433) list_single_fs_bigclock_indicator_pane_g3

0xe4c1,	// (0x0007944d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4c1,	// (0x0007944d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0007ac13) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0007ac13) list_single_fs_bigclock_indicator_pane_g

0xe4fa,	// (0x00079486) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4fa,	// (0x00079486) list_single_fs_bigclock_indicator_pane_t1

0xe522,	// (0x000794ae) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe522,	// (0x000794ae) list_single_fs_bigclock_indicator_pane_t2

0xe54a,	// (0x000794d6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe54a,	// (0x000794d6) list_single_fs_bigclock_indicator_pane_t3

0xe572,	// (0x000794fe) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe572,	// (0x000794fe) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0007ac1e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0007ac1e) list_single_fs_bigclock_indicator_pane_t

0xebe4,	// (0x00079b70) image3_infobar_fav_pane_ParamLimits

0xebe4,	// (0x00079b70) image3_infobar_fav_pane

0xebf4,	// (0x00079b80) image3_infobar_loc_pane_ParamLimits

0xebf4,	// (0x00079b80) image3_infobar_loc_pane

0xec08,	// (0x00079b94) image3_infobar_time_pane_ParamLimits

0xec08,	// (0x00079b94) image3_infobar_time_pane

0xcce1,	// (0x00077c6d) image3_infobar_time_pane_g1

0xec18,	// (0x00079ba4) image3_infobar_time_pane_t1

0xcce1,	// (0x00077c6d) image3_infobar_loc_pane_g1

0xec26,	// (0x00079bb2) image3_infobar_loc_pane_g2

0x0001,

0xfe2c,	// (0x0007adb8) image3_infobar_loc_pane_g

0xec2e,	// (0x00079bba) image3_infobar_loc_pane_t1

0xcce1,	// (0x00077c6d) image3_infobar_fav_pane_g1

0xec3c,	// (0x00079bc8) image3_infobar_fav_pane_g2

0x0001,

0xfe31,	// (0x0007adbd) image3_infobar_fav_pane_g

0xec44,	// (0x00079bd0) fs_bigclock_status_battery_pane

0xec4d,	// (0x00079bd9) fs_bigclock_status_signal_pane

0xec56,	// (0x00079be2) fs_bigclock_status_title_pane

0xec5f,	// (0x00079beb) fs_bigclock_status_signal_pane_g1

0xec68,	// (0x00079bf4) fs_bigclock_status_signal_pane_g2

0x0001,

0x0275,	// (0x0006b201) fs_bigclock_status_signal_pane_g

0xec70,	// (0x00079bfc) fs_bigclock_status_battery_pane_g1

0xec79,	// (0x00079c05) fs_bigclock_status_battery_pane_g2

0x0001,

0x027a,	// (0x0006b206) fs_bigclock_status_battery_pane_g

0xec81,	// (0x00079c0d) fs_bigclock_status_title_pane_t1

0x8836,	// (0x000737c2) main_fs_bigclock_clock_pane_g1

0x8836,	// (0x000737c2) main_fs_bigclock_clock_pane_g2

0x8847,	// (0x000737d3) main_fs_bigclock_clock_pane_g3

0x8847,	// (0x000737d3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe36,	// (0x0007adc2) main_fs_bigclock_clock_pane_g

0x885a,	// (0x000737e6) main_fs_bigclock_clock_pane_t1

0x8870,	// (0x000737fc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe3f,	// (0x0007adcb) main_fs_bigclock_clock_pane_t

0xec8f,	// (0x00079c1b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec8f,	// (0x00079c1b) list_single_fs_bigclock_indicator_pane

0xeca0,	// (0x00079c2c) list_single_fs_bigclock_pane_ParamLimits

0xeca0,	// (0x00079c2c) list_single_fs_bigclock_pane

0xecc6,	// (0x00079c52) main_fs_bigclock_indicator_pane_t1

0xecd5,	// (0x00079c61) list_single_fs_bigclock_pane_g1

0xecdd,	// (0x00079c69) list_single_fs_bigclock_pane_t1

0xcce1,	// (0x00077c6d) main_fs_bigclock_swipe_pane_g1

0xed20,	// (0x00079cac) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe4b,	// (0x0007add7) main_fs_bigclock_swipe_pane_g

0xed28,	// (0x00079cb4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed28,	// (0x00079cb4) main_fs_bigclock_swipe_pane_t1

0x250d,	// (0x0006d499) call_type_pane_ParamLimits

0x93c4,	// (0x00074350) main_btmg_pane

0xa322,	// (0x000752ae) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa322,	// (0x000752ae) list_single_cale_mrui_row_pane_g2

0x0002,

0xfddb,	// (0x0007ad67) list_single_cale_mrui_row_pane_g_ParamLimits

0xfddb,	// (0x0007ad67) list_single_cale_mrui_row_pane_g

0xa3a8,	// (0x00075334) list_recal_vselct_arw_lo_pane

0xeb5f,	// (0x00079aeb) list_recal_vselct_arw_up_pane

0xa3b0,	// (0x0007533c) list_recal_vselct_pane

0x88ca,	// (0x00073856) btmg_button_pane

0x88d4,	// (0x00073860) main_btmg_pane_g1

0x93c4,	// (0x00074350) bg_button_pane_cp044

0xed45,	// (0x00079cd1) btmg_button_pane_t1

0xc8b9,	// (0x00077845) aid_listscroll_gen

0x9f3d,	// (0x00074ec9) main_cntbar_detail_pane

0xe890,	// (0x0007981c) list_cmail_folder_pane

0xccc5,	// (0x00077c51) sp_fs_scroll_pane_cp03_ParamLimits

0x88de,	// (0x0007386a) list_single_fs_dyc_pane_cp01_ParamLimits

0x88de,	// (0x0007386a) list_single_fs_dyc_pane_cp01

0xed53,	// (0x00079cdf) aid_size_cmail_indent

0xa427,	// (0x000753b3) list_single_dyc_row_pane_cp01

0x8927,	// (0x000738b3) cntbar_detail_list_pane_ParamLimits

0x8927,	// (0x000738b3) cntbar_detail_list_pane

0x8973,	// (0x000738ff) main_cntbar_detail_cont_pane_ParamLimits

0x8973,	// (0x000738ff) main_cntbar_detail_cont_pane

0xccc5,	// (0x00077c51) scroll_pane_cp032_ParamLimits

0xccc5,	// (0x00077c51) scroll_pane_cp032

0x8987,	// (0x00073913) cntbar_detail_list_event_pane_ParamLimits

0x8987,	// (0x00073913) cntbar_detail_list_event_pane

0x8937,	// (0x000738c3) cntbar_detail_list_shct_pane

0xace8,	// (0x00075c74) aid_list_gen

0xed5c,	// (0x00079ce8) aid_scroll

0xed65,	// (0x00079cf1) aid_size_touch_scroll_bar

0x6bd4,	// (0x00071b60) aid_list_double

0xa430,	// (0x000753bc) aid_list_single

0x6bd4,	// (0x00071b60) aid_list_single_lg

0xa439,	// (0x000753c5) aid_list_z_g_a_sm

0xa441,	// (0x000753cd) aid_list_z_g_d

0xa449,	// (0x000753d5) aid_txt_z_prm

0x8997,	// (0x00073923) aid_txt_z_prm_cp01

0x89a5,	// (0x00073931) aid_txt_z_sec

0x89b3,	// (0x0007393f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89b3,	// (0x0007393f) main_cntbar_detail_cont_pane_g1

0x89c7,	// (0x00073953) main_cntbar_detail_cont_pane_g2_ParamLimits

0x89c7,	// (0x00073953) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe50,	// (0x0007addc) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe50,	// (0x0007addc) main_cntbar_detail_cont_pane_g

0xed6e,	// (0x00079cfa) main_cntbar_detail_cont_pane_t1

0xed7c,	// (0x00079d08) main_cntbar_detail_cont_pane_t2

0xed8a,	// (0x00079d16) main_cntbar_detail_cont_pane_t3

0x0002,

0x02a3,	// (0x0006b22f) main_cntbar_detail_cont_pane_t

0x89d7,	// (0x00073963) cell_cntbar_detail_list_shct_pane_ParamLimits

0x89d7,	// (0x00073963) cell_cntbar_detail_list_shct_pane

0xed98,	// (0x00079d24) cntbar_detail_list_shct_pane_g1

0xeda1,	// (0x00079d2d) cntbar_detail_list_shct_pane_g2

0x0001,

0x02aa,	// (0x0006b236) cntbar_detail_list_shct_pane_g

0x89eb,	// (0x00073977) cntbar_detail_list_event_pane_g1_ParamLimits

0x89eb,	// (0x00073977) cntbar_detail_list_event_pane_g1

0x89f7,	// (0x00073983) cntbar_detail_list_event_pane_g2_ParamLimits

0x89f7,	// (0x00073983) cntbar_detail_list_event_pane_g2

0x0005,

0xfe55,	// (0x0007ade1) cntbar_detail_list_event_pane_g_ParamLimits

0xfe55,	// (0x0007ade1) cntbar_detail_list_event_pane_g

0x8a63,	// (0x000739ef) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a63,	// (0x000739ef) cntbar_detail_list_event_pane_t1

0x8a78,	// (0x00073a04) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a78,	// (0x00073a04) cntbar_detail_list_event_pane_t2

0x0002,

0xfe62,	// (0x0007adee) cntbar_detail_list_event_pane_t_ParamLimits

0xfe62,	// (0x0007adee) cntbar_detail_list_event_pane_t

0xcce1,	// (0x00077c6d) cell_cntbar_detail_list_shct_pane_g1

0xb434,	// (0x000763c0) navi_pane_mv_g3

0x9f3d,	// (0x00074ec9) main_cntbar_detail_pane_ParamLimits

0x93c4,	// (0x00074350) main_notif_wgt_pane

0x97ad,	// (0x00074739) aid_tch_main_mp4_pane_g4

0x998f,	// (0x0007491b) popup_slider_window_cp02

0xa39e,	// (0x0007532a) list_recal_day_event_pane

0x88f5,	// (0x00073881) cntbar_detail_btn_pane_ParamLimits

0x88f5,	// (0x00073881) cntbar_detail_btn_pane

0x890e,	// (0x0007389a) cntbar_detail_btn_pane_cp01_ParamLimits

0x890e,	// (0x0007389a) cntbar_detail_btn_pane_cp01

0x8937,	// (0x000738c3) cntbar_detail_list_shct_pane_ParamLimits

0x8947,	// (0x000738d3) cntbar_detail_pane_g1_ParamLimits

0x8947,	// (0x000738d3) cntbar_detail_pane_g1

0x8957,	// (0x000738e3) cntbar_detail_pane_t1_ParamLimits

0x8957,	// (0x000738e3) cntbar_detail_pane_t1

0x8a03,	// (0x0007398f) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a03,	// (0x0007398f) cntbar_detail_list_event_pane_g3

0x8a1b,	// (0x000739a7) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a1b,	// (0x000739a7) cntbar_detail_list_event_pane_g4

0x8a33,	// (0x000739bf) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a33,	// (0x000739bf) cntbar_detail_list_event_pane_g5

0x8a4b,	// (0x000739d7) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a4b,	// (0x000739d7) cntbar_detail_list_event_pane_g6

0x8a8d,	// (0x00073a19) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a8d,	// (0x00073a19) cntbar_detail_list_event_pane_t3

0x8a9f,	// (0x00073a2b) popup_notif_wgt_window_ParamLimits

0x8a9f,	// (0x00073a2b) popup_notif_wgt_window

0x8ab8,	// (0x00073a44) popup_submenu_window_cp01_ParamLimits

0x8ab8,	// (0x00073a44) popup_submenu_window_cp01

0xaa41,	// (0x000759cd) bg_popup_window_pane_cp10

0xedaa,	// (0x00079d36) listscroll_notif_wgt_pane

0xedbc,	// (0x00079d48) list_notif_wgt_window

0xedc5,	// (0x00079d51) scroll_pane_cp033

0x8aca,	// (0x00073a56) list_notif_wgt_row_pane_ParamLimits

0x8aca,	// (0x00073a56) list_notif_wgt_row_pane

0xedce,	// (0x00079d5a) aid_size_list_notif_wgt_del

0xeddb,	// (0x00079d67) list_notif_wgt_row_pane_g1

0xede7,	// (0x00079d73) list_notif_wgt_row_pane_g2

0xedf6,	// (0x00079d82) list_notif_wgt_row_pane_g3

0x0002,

0x02c3,	// (0x0006b24f) list_notif_wgt_row_pane_g

0xee03,	// (0x00079d8f) list_notif_wgt_row_pane_t1

0xee19,	// (0x00079da5) list_notif_wgt_row_pane_t2

0xee2b,	// (0x00079db7) list_notif_wgt_row_pane_t3

0x0002,

0x02ca,	// (0x0006b256) list_notif_wgt_row_pane_t

0xd988,	// (0x00078914) list_recal_day_event_pane_g1

0xee3d,	// (0x00079dc9) list_recal_day_event_pane_t1

0x93c4,	// (0x00074350) bg_button_pane_cp045

0x8ada,	// (0x00073a66) cntbar_detail_btn_pane_t1

0xc8cd,	// (0x00077859) main_callh_pane_ParamLimits

0xc8cd,	// (0x00077859) main_callh_pane

0x93c4,	// (0x00074350) main_coverflow0_pane

0x93c4,	// (0x00074350) main_wgtman_pane

0x791e,	// (0x000728aa) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x791e,	// (0x000728aa) main_fs_bigclock_unlock_btn_pane

0x8310,	// (0x0007329c) bg_button_pane_cp16

0x8320,	// (0x000732ac) cell_tport_appsw_pane_g3

0x8ae8,	// (0x00073a74) cf0_flow_pane_ParamLimits

0x8ae8,	// (0x00073a74) cf0_flow_pane

0xee4c,	// (0x00079dd8) listscroll_cf0_pane

0xee57,	// (0x00079de3) main_cf0_pane_g1

0x8afd,	// (0x00073a89) main_cf0_pane_t1_ParamLimits

0x8afd,	// (0x00073a89) main_cf0_pane_t1

0x8b14,	// (0x00073aa0) main_cf0_pane_t2_ParamLimits

0x8b14,	// (0x00073aa0) main_cf0_pane_t2

0x0001,

0xfe69,	// (0x0007adf5) main_cf0_pane_t_ParamLimits

0xfe69,	// (0x0007adf5) main_cf0_pane_t

0xee69,	// (0x00079df5) scroll_pane_cp11

0x8b2b,	// (0x00073ab7) cf0_flow_pane_g1

0x8b33,	// (0x00073abf) cf0_flow_pane_g2

0x0001,

0xfe6e,	// (0x0007adfa) cf0_flow_pane_g

0x8b3b,	// (0x00073ac7) cf0_flow_pane_t1

0x93c4,	// (0x00074350) main_call6_pane

0x93c4,	// (0x00074350) main_calllock_pane

0x8b49,	// (0x00073ad5) call6_btn_grp_pane_ParamLimits

0x8b49,	// (0x00073ad5) call6_btn_grp_pane

0x8b63,	// (0x00073aef) call6_pane_g1_ParamLimits

0x8b63,	// (0x00073aef) call6_pane_g1

0x8b78,	// (0x00073b04) popup_call6_1st_window_ParamLimits

0x8b78,	// (0x00073b04) popup_call6_1st_window

0x8b89,	// (0x00073b15) popup_call6_2nd_window_ParamLimits

0x8b89,	// (0x00073b15) popup_call6_2nd_window

0x8b9a,	// (0x00073b26) cell_call6_btn_pane_ParamLimits

0x8b9a,	// (0x00073b26) cell_call6_btn_pane

0xaa41,	// (0x000759cd) bg_popup_call2_in_pane_cp03

0xee74,	// (0x00079e00) popup_call6_1st_window_g1

0xee7c,	// (0x00079e08) popup_call6_1st_window_g2

0xee84,	// (0x00079e10) popup_call6_1st_window_g3

0x0002,

0x02e0,	// (0x0006b26c) popup_call6_1st_window_g

0xee8c,	// (0x00079e18) popup_call6_1st_window_t1

0xee9b,	// (0x00079e27) popup_call6_1st_window_t2

0xeeab,	// (0x00079e37) popup_call6_1st_window_t3

0x0002,

0x02e7,	// (0x0006b273) popup_call6_1st_window_t

0xaa41,	// (0x000759cd) bg_popup_call2_in_pane_cp04

0xee74,	// (0x00079e00) popup_call6_2nd_window_g1

0xee7c,	// (0x00079e08) popup_call6_2nd_window_g2

0xee84,	// (0x00079e10) popup_call6_2nd_window_g3

0x0002,

0x02e0,	// (0x0006b26c) popup_call6_2nd_window_g

0xee8c,	// (0x00079e18) popup_call6_2nd_window_t1

0x93c4,	// (0x00074350) bg_button_pane_cp15

0xeebb,	// (0x00079e47) cell_call6_btn_pane_g1

0xeec4,	// (0x00079e50) cell_call6_btn_pane_t1

0x8bae,	// (0x00073b3a) listscroll_wgtman_pane_ParamLimits

0x8bae,	// (0x00073b3a) listscroll_wgtman_pane

0x8bcf,	// (0x00073b5b) wgtman_btn_pane_ParamLimits

0x8bcf,	// (0x00073b5b) wgtman_btn_pane

0xb248,	// (0x000761d4) aid_scroll_copy1

0xeed3,	// (0x00079e5f) list_wgtman_pane

0x8c12,	// (0x00073b9e) wgtman_btn_pane_g1_ParamLimits

0x8c12,	// (0x00073b9e) wgtman_btn_pane_g1

0x8c3e,	// (0x00073bca) wgtman_btn_pane_t1_ParamLimits

0x8c3e,	// (0x00073bca) wgtman_btn_pane_t1

0xeedd,	// (0x00079e69) wgtman_btn_pane_t2_ParamLimits

0xeedd,	// (0x00079e69) wgtman_btn_pane_t2

0x0001,

0xfe73,	// (0x0007adff) wgtman_btn_pane_t_ParamLimits

0xfe73,	// (0x0007adff) wgtman_btn_pane_t

0x8c7b,	// (0x00073c07) listrow_wgtman_pane_ParamLimits

0x8c7b,	// (0x00073c07) listrow_wgtman_pane

0x8c8d,	// (0x00073c19) listrow_wgtman_pane_g1

0x8c9a,	// (0x00073c26) listrow_wgtman_pane_g2

0x0001,

0xfe78,	// (0x0007ae04) listrow_wgtman_pane_g

0x8cb8,	// (0x00073c44) listrow_wgtman_pane_t1

0x8cd0,	// (0x00073c5c) listrow_wgtman_pane_t2

0x0001,

0xfe7d,	// (0x0007ae09) listrow_wgtman_pane_t

0x8cf6,	// (0x00073c82) wait_bar_pane_cp09

0xeef4,	// (0x00079e80) main_calllock_btn_pane

0xeefe,	// (0x00079e8a) main_calllock_pane_g1

0x93c4,	// (0x00074350) bg_button_pane_cp17

0xef09,	// (0x00079e95) main_calllock_btn_pane_g1

0xef12,	// (0x00079e9e) main_calllock_btn_pane_t1

0x93c4,	// (0x00074350) main_dialer3_pane

0x93c4,	// (0x00074350) main_fmrd2_pane

0xcce1,	// (0x00077c6d) main_fs_bigclock_unlock_btn_pane_g1

0x8d10,	// (0x00073c9c) main_fs_bigclock_unlock_btn_pane_t1

0x8d1e,	// (0x00073caa) area_fmrd2_info_pane_ParamLimits

0x8d1e,	// (0x00073caa) area_fmrd2_info_pane

0x8d2f,	// (0x00073cbb) area_fmrd2_visual_pane_ParamLimits

0x8d2f,	// (0x00073cbb) area_fmrd2_visual_pane

0x8d3d,	// (0x00073cc9) fmrd2_indi_pane_ParamLimits

0x8d3d,	// (0x00073cc9) fmrd2_indi_pane

0x8d4a,	// (0x00073cd6) area_fmrd2_visual_pane_g1

0x8d52,	// (0x00073cde) area_fmrd2_visual_pane_t1

0x8d62,	// (0x00073cee) area_fmrd2_visual_pane_t2

0x8d72,	// (0x00073cfe) area_fmrd2_visual_pane_t3

0x0002,

0xfe87,	// (0x0007ae13) area_fmrd2_visual_pane_t

0x8d82,	// (0x00073d0e) area_fmrd2_info_pane_g1

0x8d8a,	// (0x00073d16) area_fmrd2_info_pane_t1

0x8d9a,	// (0x00073d26) area_fmrd2_info_pane_t2

0x8daa,	// (0x00073d36) area_fmrd2_info_pane_t3

0x8dba,	// (0x00073d46) area_fmrd2_info_pane_t4

0x0003,

0xfe8e,	// (0x0007ae1a) area_fmrd2_info_pane_t

0x8dc8,	// (0x00073d54) fmrd2_indi_pane_t1

0x8dd8,	// (0x00073d64) fmrd2_indi_pane_t2

0x8de8,	// (0x00073d74) fmrd2_indi_pane_t3

0x0002,

0xfe97,	// (0x0007ae23) fmrd2_indi_pane_t

0xe4d0,	// (0x0007945c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4d0,	// (0x0007945c) list_single_fs_bigclock_indicator_pane_g5

0xe58f,	// (0x0007951b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe58f,	// (0x0007951b) list_single_fs_bigclock_indicator_pane_t5

0x84ad,	// (0x00073439) aid_cell_bcale_month_pane_ParamLimits

0x84ad,	// (0x00073439) aid_cell_bcale_month_pane

0x84cb,	// (0x00073457) bcale_month_pane_ParamLimits

0x84cb,	// (0x00073457) bcale_month_pane

0x84ef,	// (0x0007347b) bcale_preview_pane_ParamLimits

0x84ef,	// (0x0007347b) bcale_preview_pane

0xecdd,	// (0x00079c69) list_single_fs_bigclock_pane_t1_ParamLimits

0xecfc,	// (0x00079c88) list_single_fs_bigclock_pane_t2_ParamLimits

0xecfc,	// (0x00079c88) list_single_fs_bigclock_pane_t2

0x0001,

0x0294,	// (0x0006b220) list_single_fs_bigclock_pane_t_ParamLimits

0x0294,	// (0x0006b220) list_single_fs_bigclock_pane_t

0x8d08,	// (0x00073c94) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe82,	// (0x0007ae0e) main_fs_bigclock_unlock_btn_pane_g

0x8df8,	// (0x00073d84) aid_dia3_key_size_ParamLimits

0x8df8,	// (0x00073d84) aid_dia3_key_size

0x8e07,	// (0x00073d93) aid_dia3_listrow_size_ParamLimits

0x8e07,	// (0x00073d93) aid_dia3_listrow_size

0x8e1c,	// (0x00073da8) dia3_keypad_fun_pane_ParamLimits

0x8e1c,	// (0x00073da8) dia3_keypad_fun_pane

0x8e38,	// (0x00073dc4) dia3_keypad_num_pane_ParamLimits

0x8e38,	// (0x00073dc4) dia3_keypad_num_pane

0x8e53,	// (0x00073ddf) dia3_listscroll_pane_ParamLimits

0x8e53,	// (0x00073ddf) dia3_listscroll_pane

0x8e66,	// (0x00073df2) dia3_numentry_pane_ParamLimits

0x8e66,	// (0x00073df2) dia3_numentry_pane

0xef21,	// (0x00079ead) dia3_list_pane

0xef2c,	// (0x00079eb8) scroll_pane_cp12

0x93c4,	// (0x00074350) bg_dia3_numentry_pane

0x8e7a,	// (0x00073e06) dia3_numentry_pane_t1

0x8e89,	// (0x00073e15) cell_dia3_key_num_pane

0x8e91,	// (0x00073e1d) cell_dia3_key0_fun_pane_ParamLimits

0x8e91,	// (0x00073e1d) cell_dia3_key0_fun_pane

0x8ea5,	// (0x00073e31) cell_dia3_key1_fun_pane_ParamLimits

0x8ea5,	// (0x00073e31) cell_dia3_key1_fun_pane

0x8ebd,	// (0x00073e49) dia3_listrow_pane

0xe223,	// (0x000791af) bg_dia3_numentry_pane_g1

0x93c4,	// (0x00074350) bg_button_pane_cp21

0xef37,	// (0x00079ec3) cell_dia3_key_num_pane_t1

0xef45,	// (0x00079ed1) cell_dia3_key_num_pane_t2

0xef54,	// (0x00079ee0) cell_dia3_key_num_pane_t3

0xef63,	// (0x00079eef) cell_dia3_key_num_pane_t4

0x0003,

0x0319,	// (0x0006b2a5) cell_dia3_key_num_pane_t

0x93c4,	// (0x00074350) bg_button_pane_cp19

0x8ecf,	// (0x00073e5b) cell_dia3_key0_fun_pane_g1

0x93c4,	// (0x00074350) bg_button_pane_cp20

0x8ed7,	// (0x00073e63) cell_dia3_key1_fun_pane_g1

0x8edf,	// (0x00073e6b) area_left_week_number_pane

0x8eeb,	// (0x00073e77) area_top_day_name_pane

0x8efe,	// (0x00073e8a) frame_month_view_pane

0xef72,	// (0x00079efe) grid_month_view_pane

0x8f11,	// (0x00073e9d) cell_top_day_name_pane_ParamLimits

0x8f11,	// (0x00073e9d) cell_top_day_name_pane

0x8f3e,	// (0x00073eca) cell_area_left_week_number_pane_ParamLimits

0x8f3e,	// (0x00073eca) cell_area_left_week_number_pane

0x8f52,	// (0x00073ede) cell_month_view_pane_ParamLimits

0x8f52,	// (0x00073ede) cell_month_view_pane

0xef80,	// (0x00079f0c) frm_month_g1

0x8f7f,	// (0x00073f0b) frm_month_g2

0x8f92,	// (0x00073f1e) frm_month_g3

0x8fa5,	// (0x00073f31) frm_month_g4

0x8fb8,	// (0x00073f44) frm_month_g5

0x8fcb,	// (0x00073f57) frm_month_g6

0x8fde,	// (0x00073f6a) frm_month_g7

0xef8d,	// (0x00079f19) frm_month_g8

0x8ff1,	// (0x00073f7d) frm_month_g9

0x9001,	// (0x00073f8d) frm_month_g10

0x9011,	// (0x00073f9d) frm_month_g11

0x9021,	// (0x00073fad) frm_month_g12

0x9033,	// (0x00073fbf) frm_month_g13

0x9045,	// (0x00073fd1) frm_month_g14

0x9059,	// (0x00073fe5) frm_month_g15

0x906d,	// (0x00073ff9) frm_month_g16

0x000f,

0xfe9e,	// (0x0007ae2a) frm_month_g

0xef9a,	// (0x00079f26) cell_top_day_name_pane_t1

0x9081,	// (0x0007400d) cell_area_left_week_number_pane_g1

0x908d,	// (0x00074019) cell_area_left_week_number_pane_t1

0xcf2f,	// (0x00077ebb) cell_month_view_pane_g1

0x90a0,	// (0x0007402c) cell_month_view_pane_t1

0x93c4,	// (0x00074350) main_fps_pane

0xe79a,	// (0x00079726) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe79a,	// (0x00079726) cmail_ddmenu_btn02_pane_cp1

0xe7b6,	// (0x00079742) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7b6,	// (0x00079742) cmail_ddmenu_btn02_pane_cp2

0x8791,	// (0x0007371d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8791,	// (0x0007371d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe0d,	// (0x0007ad99) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe0d,	// (0x0007ad99) cmail_ddmenu_btn02_pane_g

0x87b0,	// (0x0007373c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87b0,	// (0x0007373c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe12,	// (0x0007ad9e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe12,	// (0x0007ad9e) cmail_ddmenu_btn02_pane_t

0x90b3,	// (0x0007403f) fps_text_pane_ParamLimits

0x90b3,	// (0x0007403f) fps_text_pane

0x90ca,	// (0x00074056) main_fps_pane_g1_ParamLimits

0x90ca,	// (0x00074056) main_fps_pane_g1

0x90e4,	// (0x00074070) wait_bar_pane_cp010_ParamLimits

0x90e4,	// (0x00074070) wait_bar_pane_cp010

0x90f5,	// (0x00074081) fps_text_pane_t1_ParamLimits

0x90f5,	// (0x00074081) fps_text_pane_t1

0xdced,	// (0x00078c79) cam4_image_uncrop_pane_g1

0xdcf6,	// (0x00078c82) cam4_image_uncrop_pane_g2

0x5a00,	// (0x0007098c) cam4_image_uncrop_pane_g3

0x5a09,	// (0x00070995) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0007a88d) cam4_image_uncrop_pane_g

0x8ebd,	// (0x00073e49) dia3_listrow_pane_ParamLimits

0x93c4,	// (0x00074350) main_phob2_pane

0x82e1,	// (0x0007326d) cell_tport_appsw_pane_cp02_ParamLimits

0x82e1,	// (0x0007326d) cell_tport_appsw_pane_cp02

0x82f5,	// (0x00073281) cell_tport_appsw_pane_cp03_ParamLimits

0x82f5,	// (0x00073281) cell_tport_appsw_pane_cp03

0x93c4,	// (0x00074350) phob2_contact_card_pane

0x93c4,	// (0x00074350) phob2_listscroll_pane

0xefad,	// (0x00079f39) phob2_list_pane

0xefb5,	// (0x00079f41) scroll_pane_cp034

0x910d,	// (0x00074099) phob2_cc_data_pane_ParamLimits

0x910d,	// (0x00074099) phob2_cc_data_pane

0x912c,	// (0x000740b8) phob2_cc_listscroll_pane_ParamLimits

0x912c,	// (0x000740b8) phob2_cc_listscroll_pane

0x8c7b,	// (0x00073c07) list_double_large_graphic_phob2_pane_ParamLimits

0x8c7b,	// (0x00073c07) list_double_large_graphic_phob2_pane

0x914a,	// (0x000740d6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x914a,	// (0x000740d6) list_double_large_graphic_phob2_pane_g1

0x9160,	// (0x000740ec) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9160,	// (0x000740ec) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfebf,	// (0x0007ae4b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfebf,	// (0x0007ae4b) list_double_large_graphic_phob2_pane_g

0x916c,	// (0x000740f8) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x916c,	// (0x000740f8) list_double_large_graphic_phob2_pane_t1

0x9182,	// (0x0007410e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9182,	// (0x0007410e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfec4,	// (0x0007ae50) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfec4,	// (0x0007ae50) list_double_large_graphic_phob2_pane_t

0x93c4,	// (0x00074350) list_highlight_pane_cp024

0x9197,	// (0x00074123) phob2_cc_button_pane

0x919f,	// (0x0007412b) phob2_cc_data_pane_g1_ParamLimits

0x919f,	// (0x0007412b) phob2_cc_data_pane_g1

0x91b4,	// (0x00074140) phob2_cc_data_pane_g2_ParamLimits

0x91b4,	// (0x00074140) phob2_cc_data_pane_g2

0x0001,

0xfec9,	// (0x0007ae55) phob2_cc_data_pane_g_ParamLimits

0xfec9,	// (0x0007ae55) phob2_cc_data_pane_g

0x91c4,	// (0x00074150) phob2_cc_data_pane_t1_ParamLimits

0x91c4,	// (0x00074150) phob2_cc_data_pane_t1

0x91dc,	// (0x00074168) phob2_cc_data_pane_t2_ParamLimits

0x91dc,	// (0x00074168) phob2_cc_data_pane_t2

0x91f4,	// (0x00074180) phob2_cc_data_pane_t3_ParamLimits

0x91f4,	// (0x00074180) phob2_cc_data_pane_t3

0x0002,

0xfece,	// (0x0007ae5a) phob2_cc_data_pane_t_ParamLimits

0xfece,	// (0x0007ae5a) phob2_cc_data_pane_t

0xefbd,	// (0x00079f49) phob2_cc_list_pane_ParamLimits

0xefbd,	// (0x00079f49) phob2_cc_list_pane

0xda1f,	// (0x000789ab) scroll_pane_cp035_ParamLimits

0xda1f,	// (0x000789ab) scroll_pane_cp035

0x9f3d,	// (0x00074ec9) bg_button_pane_cp033

0xefc9,	// (0x00079f55) phob2_cc_button_pane_g1

0xefd5,	// (0x00079f61) phob2_cc_button_pane_t1

0xefea,	// (0x00079f76) phob2_cc_button_pane_t2

0x0001,

0x0359,	// (0x0006b2e5) phob2_cc_button_pane_t

0x920c,	// (0x00074198) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x920c,	// (0x00074198) list_double_large_graphic_phob2_cc_pane

0x921f,	// (0x000741ab) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x921f,	// (0x000741ab) list_double_large_graphic_phob2_cc_pane_g1

0x922b,	// (0x000741b7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x922b,	// (0x000741b7) list_double_large_graphic_phob2_cc_pane_g2

0x9237,	// (0x000741c3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9237,	// (0x000741c3) list_double_large_graphic_phob2_cc_pane_g3

0x9243,	// (0x000741cf) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9243,	// (0x000741cf) list_double_large_graphic_phob2_cc_pane_g4

0x924f,	// (0x000741db) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x924f,	// (0x000741db) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfed5,	// (0x0007ae61) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfed5,	// (0x0007ae61) list_double_large_graphic_phob2_cc_pane_g

0x925b,	// (0x000741e7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x925b,	// (0x000741e7) list_double_large_graphic_phob2_cc_pane_t1

0x9284,	// (0x00074210) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9284,	// (0x00074210) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfee0,	// (0x0007ae6c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfee0,	// (0x0007ae6c) list_double_large_graphic_phob2_cc_pane_t

0xeffc,	// (0x00079f88) list_highlight_pane_cp025_ParamLimits

0xeffc,	// (0x00079f88) list_highlight_pane_cp025

0x9f3d,	// (0x00074ec9) bg_button_pane_cp033_ParamLimits

0xefc9,	// (0x00079f55) phob2_cc_button_pane_g1_ParamLimits

0xefd5,	// (0x00079f61) phob2_cc_button_pane_t1_ParamLimits

0xefea,	// (0x00079f76) phob2_cc_button_pane_t2_ParamLimits

0x0359,	// (0x0006b2e5) phob2_cc_button_pane_t_ParamLimits

0x06a6,	// (0x0006b632) popup_wgtman_window

0xd84c,	// (0x000787d8) scroll_pane_cp038

0x8bf4,	// (0x00073b80) wgtman_btn_pane_cp_01_ParamLimits

0x8bf4,	// (0x00073b80) wgtman_btn_pane_cp_01

0xf00a,	// (0x00079f96) wgtman_content_pane

0xf013,	// (0x00079f9f) wgtman_heading_pane

0x93c4,	// (0x00074350) bg_heading_pane_cp02

0xf01c,	// (0x00079fa8) wgtman_heading_pane_g1

0xf024,	// (0x00079fb0) wgtman_heading_pane_t1

0xf032,	// (0x00079fbe) scroll_pane_cp036

0xf03a,	// (0x00079fc6) wgtman_list_pane

0xe67a,	// (0x00079606) wgtman_list_pane_t1_ParamLimits

0xe67a,	// (0x00079606) wgtman_list_pane_t1

0x99e9,	// (0x00074975) cam4_grid_pane

0x66c8,	// (0x00071654) bg_button_pane_cp015_ParamLimits

0x66dc,	// (0x00071668) bg_button_pane_cp016_ParamLimits

0x66ef,	// (0x0007167b) bg_button_pane_cp017_ParamLimits

0x6747,	// (0x000716d3) popup_vitu2_query_window_g3_ParamLimits

0x6747,	// (0x000716d3) popup_vitu2_query_window_g3

0x6804,	// (0x00071790) popup_vitu2_query_window_t6_ParamLimits

0x6804,	// (0x00071790) popup_vitu2_query_window_t6

0x682f,	// (0x000717bb) popup_vitu2_query_window_t7_ParamLimits

0x682f,	// (0x000717bb) popup_vitu2_query_window_t7

0xdced,	// (0x00078c79) cam4_grid_pane_g1

0xdcf6,	// (0x00078c82) cam4_grid_pane_g2

0xf042,	// (0x00079fce) cam4_grid_pane_g3

0xf04b,	// (0x00079fd7) cam4_grid_pane_g4

0x0003,

0xfee5,	// (0x0007ae71) cam4_grid_pane_g

0x15d8,	// (0x0006c564) aid_placing_vt_slider_lsc_ParamLimits

0x18d5,	// (0x0006c861) vidtel_button_pane_ParamLimits

0x18d5,	// (0x0006c861) vidtel_button_pane

0x93c4,	// (0x00074350) bg_button_pane_cp034

0x92ad,	// (0x00074239) vidtel_button_pane_g1

0xf056,	// (0x00079fe2) vidtel_button_pane_t1

0xd966,	// (0x000788f2) aid_size_vtel_slider_touch

0xda1f,	// (0x000789ab) scroll_pane_cp039

0x7604,	// (0x00072590) ncim_query_button_pane_cp01_ParamLimits

0x7623,	// (0x000725af) ncimui_query_pane_g1_ParamLimits

0x9f3d,	// (0x00074ec9) input_focus_pane_cp012_ParamLimits

0xe269,	// (0x000791f5) ncim_query_entry_pane_t1_ParamLimits

0xda1f,	// (0x000789ab) scroll_pane_cp039_ParamLimits

0xb31f,	// (0x000762ab) navi_pane_bcale_mc_g1

0xb327,	// (0x000762b3) navi_pane_bcale_mc_t1

0xe7ff,	// (0x0007978b) main_sp_fs_email_pane_g1

0xe80b,	// (0x00079797) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0007ac84) main_sp_fs_email_pane_g

0xea61,	// (0x000799ed) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea61,	// (0x000799ed) list_single_cale_mrui_row_pane_g3

0x87d0,	// (0x0007375c) list_single_recal_day_pane_g5_event_pane

0xa3fb,	// (0x00075387) list_single_recal_day_pane_g7

0xf06c,	// (0x00079ff8) list_recal_day_event_pane_cp01

0xf075,	// (0x0007a001) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0007a009) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0007a011) list_recal_vselct_pane_cp01

0xd988,	// (0x00078914) list_recal_day_event_pane_cp01_g1

0xa457,	// (0x000753e3) list_recal_day_event_pane_cp01_t1

0xa403,	// (0x0007538f) list_single_recal_day_pane_t1_ParamLimits

0xa415,	// (0x000753a1) list_single_recal_day_pane_t2_ParamLimits

0xfe22,	// (0x0007adae) list_single_recal_day_pane_t_ParamLimits

0xa77b,	// (0x00075707) bg_notes_pane_ParamLimits

0xa82a,	// (0x000757b6) list_notes_pane_ParamLimits

0x09ea,	// (0x0006b976) scroll_pane_cp06_ParamLimits

0xa84c,	// (0x000757d8) main_notes_pane_ParamLimits

0x93c4,	// (0x00074350) main_welc_pane

0x92b5,	// (0x00074241) main_welc_body_pane_ParamLimits

0x92b5,	// (0x00074241) main_welc_body_pane

0x92d2,	// (0x0007425e) main_welc_opti_pane_ParamLimits

0x92d2,	// (0x0007425e) main_welc_opti_pane

0x9317,	// (0x000742a3) main_welc_pane_t1_ParamLimits

0x9317,	// (0x000742a3) main_welc_pane_t1

0x9335,	// (0x000742c1) main_welc_body_row_pane_ParamLimits

0x9335,	// (0x000742c1) main_welc_body_row_pane

0xe4ec,	// (0x00079478) main_welc_opti_row_pane_ParamLimits

0xe4ec,	// (0x00079478) main_welc_opti_row_pane

0xf08f,	// (0x0007a01b) main_welc_opti_row_pane_g1

0x934a,	// (0x000742d6) main_welc_opti_row_pane_t1

0xf097,	// (0x0007a023) main_welc_body_row_pane_t1

0xedb4,	// (0x00079d40) popup_notif_wgt_heading_pane

0xedce,	// (0x00079d5a) aid_size_list_notif_wgt_del_ParamLimits

0xeddb,	// (0x00079d67) list_notif_wgt_row_pane_g1_ParamLimits

0xede7,	// (0x00079d73) list_notif_wgt_row_pane_g2_ParamLimits

0xedf6,	// (0x00079d82) list_notif_wgt_row_pane_g3_ParamLimits

0x02c3,	// (0x0006b24f) list_notif_wgt_row_pane_g_ParamLimits

0xee03,	// (0x00079d8f) list_notif_wgt_row_pane_t1_ParamLimits

0xee19,	// (0x00079da5) list_notif_wgt_row_pane_t2_ParamLimits

0xee2b,	// (0x00079db7) list_notif_wgt_row_pane_t3_ParamLimits

0x02ca,	// (0x0006b256) list_notif_wgt_row_pane_t_ParamLimits

0x8c8d,	// (0x00073c19) listrow_wgtman_pane_g1_ParamLimits

0x8c9a,	// (0x00073c26) listrow_wgtman_pane_g2_ParamLimits

0xfe78,	// (0x0007ae04) listrow_wgtman_pane_g_ParamLimits

0x8cb8,	// (0x00073c44) listrow_wgtman_pane_t1_ParamLimits

0x8cd0,	// (0x00073c5c) listrow_wgtman_pane_t2_ParamLimits

0xfe7d,	// (0x0007ae09) listrow_wgtman_pane_t_ParamLimits

0x8cf6,	// (0x00073c82) wait_bar_pane_cp09_ParamLimits

0x93c4,	// (0x00074350) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0007a032) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0007a03a) popup_notif_wgt_heading_pane_t1

0x93c4,	// (0x00074350) main_vids_pane

0x93c4,	// (0x00074350) vids_listscroll_pane

0x9359,	// (0x000742e5) scroll_pane_cp040

0x93c4,	// (0x00074350) vids_list_pane

0x9364,	// (0x000742f0) vids_list_double_pane_ParamLimits

0x9364,	// (0x000742f0) vids_list_double_pane

0x9375,	// (0x00074301) vids_list_double_pane_g1

0x937e,	// (0x0007430a) vids_list_double_pane_t1

0x938e,	// (0x0007431a) vids_list_double_pane_t2

0x0001,

0xfef3,	// (0x0007ae7f) vids_list_double_pane_t

0x943c,	// (0x000743c8) main_ncimui_pane_ParamLimits

0x743a,	// (0x000723c6) main_ncimui_pane_g1_ParamLimits

0x7446,	// (0x000723d2) main_ncimui_pane_g2_ParamLimits

0x7446,	// (0x000723d2) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0007ab89) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0007ab89) main_ncimui_pane_g

0x92ed,	// (0x00074279) main_welc_pane_g1_ParamLimits

0x92ed,	// (0x00074279) main_welc_pane_g1

0x9302,	// (0x0007428e) main_welc_pane_g2_ParamLimits

0x9302,	// (0x0007428e) main_welc_pane_g2

0x0001,

0xfeee,	// (0x0007ae7a) main_welc_pane_g_ParamLimits

0xfeee,	// (0x0007ae7a) main_welc_pane_g

0xa77b,	// (0x00075707) listscroll_mce_pane_ParamLimits

0xb474,	// (0x00076400) wait_bar_pane_cp10

0xc8c1,	// (0x0007784d) main_cale_day_pane_ParamLimits

0xc8c1,	// (0x0007784d) main_cale_week_pane_ParamLimits

0xa77b,	// (0x00075707) main_messa_pane_ParamLimits

0x4d28,	// (0x0006fcb4) main_clock2_btn_pane_ParamLimits

0x4d28,	// (0x0006fcb4) main_clock2_btn_pane

0xd0b7,	// (0x00078043) main_clock2_btn_pane_cp01_ParamLimits

0xd0b7,	// (0x00078043) main_clock2_btn_pane_cp01

0xea32,	// (0x000799be) list_cale_mrui_pane_ParamLimits

0xee61,	// (0x00079ded) main_cf0_pane_g2

0x0001,

0x02d1,	// (0x0006b25d) main_cf0_pane_g

0x8edf,	// (0x00073e6b) area_left_week_number_pane_ParamLimits

0x8eeb,	// (0x00073e77) area_top_day_name_pane_ParamLimits

0x8efe,	// (0x00073e8a) frame_month_view_pane_ParamLimits

0xef72,	// (0x00079efe) grid_month_view_pane_ParamLimits

0xef80,	// (0x00079f0c) frm_month_g1_ParamLimits

0x8f7f,	// (0x00073f0b) frm_month_g2_ParamLimits

0x8f92,	// (0x00073f1e) frm_month_g3_ParamLimits

0x8fa5,	// (0x00073f31) frm_month_g4_ParamLimits

0x8fb8,	// (0x00073f44) frm_month_g5_ParamLimits

0x8fcb,	// (0x00073f57) frm_month_g6_ParamLimits

0x8fde,	// (0x00073f6a) frm_month_g7_ParamLimits

0xef8d,	// (0x00079f19) frm_month_g8_ParamLimits

0x8ff1,	// (0x00073f7d) frm_month_g9_ParamLimits

0x9001,	// (0x00073f8d) frm_month_g10_ParamLimits

0x9011,	// (0x00073f9d) frm_month_g11_ParamLimits

0x9021,	// (0x00073fad) frm_month_g12_ParamLimits

0x9033,	// (0x00073fbf) frm_month_g13_ParamLimits

0x9045,	// (0x00073fd1) frm_month_g14_ParamLimits

0x9059,	// (0x00073fe5) frm_month_g15_ParamLimits

0x906d,	// (0x00073ff9) frm_month_g16_ParamLimits

0xfe9e,	// (0x0007ae2a) frm_month_g_ParamLimits

0xef9a,	// (0x00079f26) cell_top_day_name_pane_t1_ParamLimits

0x9081,	// (0x0007400d) cell_area_left_week_number_pane_g1_ParamLimits

0x908d,	// (0x00074019) cell_area_left_week_number_pane_t1_ParamLimits

0xcf2f,	// (0x00077ebb) cell_month_view_pane_g1_ParamLimits

0x90a0,	// (0x0007402c) cell_month_view_pane_t1_ParamLimits

0xa773,	// (0x000756ff) main_clock2_btn_pane_g1

0xf0bc,	// (0x0007a048) main_clock2_btn_pane_t1

0x9f3d,	// (0x00074ec9) listscroll_cmail_pane_ParamLimits

0xe7ff,	// (0x0007978b) main_sp_fs_email_pane_g1_ParamLimits

0xe80b,	// (0x00079797) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0007ac84) main_sp_fs_email_pane_g_ParamLimits

0xeb40,	// (0x00079acc) list_recal_day_pane_ParamLimits

0xeb51,	// (0x00079add) mian_recal_day_pane_t1

0x7f46,	// (0x00072ed2) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f46,	// (0x00072ed2) list_single_dyc_row_text_pane_t4

0x7f8f,	// (0x00072f1b) list_single_dyc_row_text_pane_t5_ParamLimits

0x7f8f,	// (0x00072f1b) list_single_dyc_row_text_pane_t5

0xa171,	// (0x000750fd) list_single_dyc_row_text_pane_t6_ParamLimits

0xa171,	// (0x000750fd) list_single_dyc_row_text_pane_t6

0x2381,	// (0x0006d30d) aid_mgn_list_cale_time_pane

0x943c,	// (0x000743c8) main_gallery2_pane_ParamLimits

0xd0cd,	// (0x00078059) main_clock2_pane_cp01_t1

0xd0db,	// (0x00078067) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0007a763) main_clock2_pane_cp01_t

0x0d71,	// (0x0006bcfd) cale_week_scroll_pane_g16_ParamLimits

0x0d71,	// (0x0006bcfd) cale_week_scroll_pane_g16

0xaa41,	// (0x000759cd) vorec_slider_pane

0xf056,	// (0x00079fe2) vidtel_button_pane_t1_ParamLimits

0x8836,	// (0x000737c2) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8836,	// (0x000737c2) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8847,	// (0x000737d3) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8847,	// (0x000737d3) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe36,	// (0x0007adc2) main_fs_bigclock_clock_pane_g_ParamLimits

0x885a,	// (0x000737e6) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8870,	// (0x000737fc) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe3f,	// (0x0007adcb) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
