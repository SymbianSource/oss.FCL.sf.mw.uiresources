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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00069b4f };

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
0x027a,	// (0x00069dc9) Screen

0x0286,	// (0x00069dd5) application_window

0x02c2,	// (0x00069e11) area_bottom_pane_ParamLimits

0x02c2,	// (0x00069e11) area_bottom_pane

0x02fb,	// (0x00069e4a) area_top_pane_ParamLimits

0x02fb,	// (0x00069e4a) area_top_pane

0x94ed,	// (0x0007303c) call_video_uplink_pane_ParamLimits

0x94ed,	// (0x0007303c) call_video_uplink_pane

0x0389,	// (0x00069ed8) main_pane_ParamLimits

0x0389,	// (0x00069ed8) main_pane

0xdde9,	// (0x00077938) context_pane

0x38c5,	// (0x0006d414) navi_pane

0x38f7,	// (0x0006d446) popup_cale_events_window_ParamLimits

0x38f7,	// (0x0006d446) popup_cale_events_window

0xddfc,	// (0x0007794b) popup_mup_playback_window

0x390f,	// (0x0006d45e) signal_pane

0xb86d,	// (0x000753bc) main_browser_pane

0xbf6b,	// (0x00075aba) main_burst_pane

0x3613,	// (0x0006d162) main_calc_pane

0xddcf,	// (0x0007791e) main_cale_day_pane

0x3627,	// (0x0006d176) main_cale_month_pane

0xddcf,	// (0x0007791e) main_cale_week_pane

0xbf6b,	// (0x00075aba) main_call_pane

0xb17d,	// (0x00074ccc) main_call_poc_pane

0xbf6b,	// (0x00075aba) main_camera_pane

0xbf6b,	// (0x00075aba) main_chi_dic_pane

0xc74e,	// (0x0007629d) main_clock_pane

0xb17d,	// (0x00074ccc) main_fmradio_pane

0xbf6b,	// (0x00075aba) main_graph_messa_pane

0xb17d,	// (0x00074ccc) main_help_pane

0xb86d,	// (0x000753bc) main_im_pane

0xb7a8,	// (0x000752f7) main_image_pane_ParamLimits

0xb7a8,	// (0x000752f7) main_image_pane

0xb17d,	// (0x00074ccc) main_location2_pane

0xbf6b,	// (0x00075aba) main_location_pane

0xb7a8,	// (0x000752f7) main_messa_pane

0xb17d,	// (0x00074ccc) main_mp2_pane

0xbf6b,	// (0x00075aba) main_mp_pane

0xb17d,	// (0x00074ccc) main_msg_pane

0xb17d,	// (0x00074ccc) main_mup_eq_pane

0xb17d,	// (0x00074ccc) main_mup_pane

0xb86d,	// (0x000753bc) main_notes_pane

0xb17d,	// (0x00074ccc) main_pec_pane

0xb17d,	// (0x00074ccc) main_phob_pane

0xb17d,	// (0x00074ccc) main_pinb_pane

0xb17d,	// (0x00074ccc) main_postcard_pane

0xb17d,	// (0x00074ccc) main_qdial_pane

0xbf6b,	// (0x00075aba) main_skin_pane

0xb17d,	// (0x00074ccc) main_smil2_pane

0xbf6b,	// (0x00075aba) main_smil_pane

0xbf6b,	// (0x00075aba) main_video_pane

0xbf6b,	// (0x00075aba) main_video_tele_pane

0xb7a8,	// (0x000752f7) main_viewer_pane_ParamLimits

0xb7a8,	// (0x000752f7) main_viewer_pane

0xbf6b,	// (0x00075aba) main_vorec_pane

0x3679,	// (0x0006d1c8) popup_blid_sat_info_window_ParamLimits

0x3679,	// (0x0006d1c8) popup_blid_sat_info_window

0x36d1,	// (0x0006d220) popup_dyc_status_message_window_ParamLimits

0x36d1,	// (0x0006d220) popup_dyc_status_message_window

0x36eb,	// (0x0006d23a) popup_grid_large_graphic_window_ParamLimits

0x36eb,	// (0x0006d23a) popup_grid_large_graphic_window

0x37a7,	// (0x0006d2f6) popup_loc_request_window_ParamLimits

0x37a7,	// (0x0006d2f6) popup_loc_request_window

0x389d,	// (0x0006d3ec) popup_wml_address_window_ParamLimits

0x389d,	// (0x0006d3ec) popup_wml_address_window

0x344d,	// (0x0006cf9c) call_muted_g1

0x3102,	// (0x0006cc51) popup_call_audio_conf_window_ParamLimits

0x3102,	// (0x0006cc51) popup_call_audio_conf_window

0x3461,	// (0x0006cfb0) popup_call_audio_first_window_ParamLimits

0x3461,	// (0x0006cfb0) popup_call_audio_first_window

0x34d7,	// (0x0006d026) popup_call_audio_in_window_ParamLimits

0x34d7,	// (0x0006d026) popup_call_audio_in_window

0x3513,	// (0x0006d062) popup_call_audio_out_window_ParamLimits

0x3513,	// (0x0006d062) popup_call_audio_out_window

0x354d,	// (0x0006d09c) popup_call_audio_second_window_ParamLimits

0x354d,	// (0x0006d09c) popup_call_audio_second_window

0x35a3,	// (0x0006d0f2) popup_call_audio_wait_window_ParamLimits

0x35a3,	// (0x0006d0f2) popup_call_audio_wait_window

0x35d8,	// (0x0006d127) popup_number_entry_window_ParamLimits

0x35d8,	// (0x0006d127) popup_number_entry_window

0xad6a,	// (0x000748b9) bg_popup_call_pane_cp05_ParamLimits

0xad6a,	// (0x000748b9) bg_popup_call_pane_cp05

0xad8a,	// (0x000748d9) popup_number_entry_window_t1

0xad9d,	// (0x000748ec) popup_number_entry_window_t2

0xadaf,	// (0x000748fe) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00078c19) popup_number_entry_window_t

0xadc1,	// (0x00074910) text_title_cp2

0xadd4,	// (0x00074923) bg_popup_call_pane_cp_ParamLimits

0xadd4,	// (0x00074923) bg_popup_call_pane_cp

0xade2,	// (0x00074931) call_thumbnail_pane

0xadea,	// (0x00074939) popup_call_audio_in_window_g1_ParamLimits

0xadea,	// (0x00074939) popup_call_audio_in_window_g1

0xadf6,	// (0x00074945) popup_call_audio_in_window_g2_ParamLimits

0xadf6,	// (0x00074945) popup_call_audio_in_window_g2

0xae02,	// (0x00074951) popup_call_audio_in_window_g3_ParamLimits

0xae02,	// (0x00074951) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00078c22) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00078c22) popup_call_audio_in_window_g

0xae0e,	// (0x0007495d) popup_call_audio_in_window_t1_ParamLimits

0xae0e,	// (0x0007495d) popup_call_audio_in_window_t1

0xae2a,	// (0x00074979) popup_call_audio_in_window_t2_ParamLimits

0xae2a,	// (0x00074979) popup_call_audio_in_window_t2

0xae46,	// (0x00074995) popup_call_audio_in_window_t3_ParamLimits

0xae46,	// (0x00074995) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00078c29) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00078c29) popup_call_audio_in_window_t

0xadd4,	// (0x00074923) bg_popup_call_pane_cp01_ParamLimits

0xadd4,	// (0x00074923) bg_popup_call_pane_cp01

0xade2,	// (0x00074931) call_thumbnail_pane_cp02

0xae59,	// (0x000749a8) call_type_pane_cp022

0xae61,	// (0x000749b0) popup_call_audio_out_window_g1_ParamLimits

0xae61,	// (0x000749b0) popup_call_audio_out_window_g1

0xae73,	// (0x000749c2) popup_call_audio_out_window_g2_ParamLimits

0xae73,	// (0x000749c2) popup_call_audio_out_window_g2

0xae7f,	// (0x000749ce) popup_call_audio_out_window_g3_ParamLimits

0xae7f,	// (0x000749ce) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00078c30) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00078c30) popup_call_audio_out_window_g

0xae91,	// (0x000749e0) popup_call_audio_out_window_t1_ParamLimits

0xae91,	// (0x000749e0) popup_call_audio_out_window_t1

0xaea9,	// (0x000749f8) popup_call_audio_out_window_t2_ParamLimits

0xaea9,	// (0x000749f8) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00078c37) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00078c37) popup_call_audio_out_window_t

0xaebe,	// (0x00074a0d) bg_popup_call_pane_ParamLimits

0xaebe,	// (0x00074a0d) bg_popup_call_pane

0x0545,	// (0x0006a094) call_thumbnail_pane_cp_ParamLimits

0x0545,	// (0x0006a094) call_thumbnail_pane_cp

0xaf42,	// (0x00074a91) call_type_pane_cp01_ParamLimits

0xaf42,	// (0x00074a91) call_type_pane_cp01

0xaf86,	// (0x00074ad5) popup_call_audio_first_window_g1_ParamLimits

0xaf86,	// (0x00074ad5) popup_call_audio_first_window_g1

0xafd2,	// (0x00074b21) popup_call_audio_first_window_g2_ParamLimits

0xafd2,	// (0x00074b21) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00078c3c) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00078c3c) popup_call_audio_first_window_g

0xb016,	// (0x00074b65) popup_call_audio_first_window_t1_ParamLimits

0xb016,	// (0x00074b65) popup_call_audio_first_window_t1

0xb0c2,	// (0x00074c11) popup_call_audio_first_window_t4_ParamLimits

0xb0c2,	// (0x00074c11) popup_call_audio_first_window_t4

0xb14e,	// (0x00074c9d) popup_call_audio_first_window_t5_ParamLimits

0xb14e,	// (0x00074c9d) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00078c41) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00078c41) popup_call_audio_first_window_t

0xb17d,	// (0x00074ccc) bg_popup_call_pane_cp02

0xb187,	// (0x00074cd6) call_type_pane_cp023

0xb18f,	// (0x00074cde) popup_call_audio_wait_window_g1

0xb197,	// (0x00074ce6) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00078c48) popup_call_audio_wait_window_g

0xb19f,	// (0x00074cee) popup_call_audio_wait_window_t3

0xb1ad,	// (0x00074cfc) bg_popup_call_pane_cp03_ParamLimits

0xb1ad,	// (0x00074cfc) bg_popup_call_pane_cp03

0xb5dd,	// (0x0007512c) call_thumbnail_pane_cp011_ParamLimits

0xb5dd,	// (0x0007512c) call_thumbnail_pane_cp011

0xb5e9,	// (0x00075138) call_type_pane_cp034_ParamLimits

0xb5e9,	// (0x00075138) call_type_pane_cp034

0xb625,	// (0x00075174) popup_call_audio_second_window_g1_ParamLimits

0xb625,	// (0x00075174) popup_call_audio_second_window_g1

0xb661,	// (0x000751b0) popup_call_audio_second_window_g2_ParamLimits

0xb661,	// (0x000751b0) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00078c4d) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00078c4d) popup_call_audio_second_window_g

0xb69d,	// (0x000751ec) popup_call_audio_second_window_t1_ParamLimits

0xb69d,	// (0x000751ec) popup_call_audio_second_window_t1

0xb71e,	// (0x0007526d) popup_call_audio_second_window_t2_ParamLimits

0xb71e,	// (0x0007526d) popup_call_audio_second_window_t2

0xb754,	// (0x000752a3) popup_call_audio_second_window_t3_ParamLimits

0xb754,	// (0x000752a3) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00078c52) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00078c52) popup_call_audio_second_window_t

0xb17d,	// (0x00074ccc) bg_popup_call_pane_cp04

0xb78a,	// (0x000752d9) list_conf_pane

0xb792,	// (0x000752e1) popup_call_audio_conf_window_t1

0xb7a0,	// (0x000752ef) call_thumbnail_pane_g1

0xb7a8,	// (0x000752f7) bg_pinb_pane_ParamLimits

0xb7a8,	// (0x000752f7) bg_pinb_pane

0xb7b6,	// (0x00075305) find_pinb_pane

0xb7bf,	// (0x0007530e) listscroll_pinb_pane_ParamLimits

0xb7bf,	// (0x0007530e) listscroll_pinb_pane

0xb7ce,	// (0x0007531d) pinb_bg_pane_g1

0x0569,	// (0x0006a0b8) pinb_bg_pane_g2

0x0575,	// (0x0006a0c4) pinb_bg_pane_g3

0x0581,	// (0x0006a0d0) pinb_bg_pane_g4

0x058d,	// (0x0006a0dc) pinb_bg_pane_g5

0x0599,	// (0x0006a0e8) pinb_bg_pane_g6

0x05a4,	// (0x0006a0f3) pinb_bg_pane_g7

0x05af,	// (0x0006a0fe) pinb_bg_pane_g8

0x05ba,	// (0x0006a109) pinb_bg_pane_g9

0x05c4,	// (0x0006a113) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00078c59) pinb_bg_pane_g

0x05e1,	// (0x0006a130) grid_pinb_pane

0x05ea,	// (0x0006a139) list_pinb_pane

0x05f3,	// (0x0006a142) scroll_pane_cp01_ParamLimits

0x05f3,	// (0x0006a142) scroll_pane_cp01

0xb7d8,	// (0x00075327) find_pinb_pane_g1_ParamLimits

0xb7d8,	// (0x00075327) find_pinb_pane_g1

0xb7f0,	// (0x0007533f) find_pinb_pane_t1

0xb802,	// (0x00075351) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00078c73) find_pinb_pane_t

0xb817,	// (0x00075366) input_focus_pane_cp01_ParamLimits

0xb817,	// (0x00075366) input_focus_pane_cp01

0x0605,	// (0x0006a154) cell_pinb_pane_ParamLimits

0x0605,	// (0x0006a154) cell_pinb_pane

0x062e,	// (0x0006a17d) cell_pinb_pane_g1_ParamLimits

0x062e,	// (0x0006a17d) cell_pinb_pane_g1

0x063e,	// (0x0006a18d) cell_pinb_pane_g2_ParamLimits

0x063e,	// (0x0006a18d) cell_pinb_pane_g2

0xb823,	// (0x00075372) cell_pinb_pane_g3_ParamLimits

0xb823,	// (0x00075372) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00078c78) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00078c78) cell_pinb_pane_g

0xb17d,	// (0x00074ccc) grid_highlight_pane_cp01

0x064a,	// (0x0006a199) list_pinb_item_pane_ParamLimits

0x064a,	// (0x0006a199) list_pinb_item_pane

0xb17d,	// (0x00074ccc) list_highlight_pane_cp02

0x065c,	// (0x0006a1ab) list_pinb_item_pane_g1_ParamLimits

0x065c,	// (0x0006a1ab) list_pinb_item_pane_g1

0x0669,	// (0x0006a1b8) list_pinb_item_pane_g2_ParamLimits

0x0669,	// (0x0006a1b8) list_pinb_item_pane_g2

0x0675,	// (0x0006a1c4) list_pinb_item_pane_g3_ParamLimits

0x0675,	// (0x0006a1c4) list_pinb_item_pane_g3

0x0686,	// (0x0006a1d5) list_pinb_item_pane_g4_ParamLimits

0x0686,	// (0x0006a1d5) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00078c7f) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00078c7f) list_pinb_item_pane_g

0x0692,	// (0x0006a1e1) list_pinb_item_pane_t1_ParamLimits

0x0692,	// (0x0006a1e1) list_pinb_item_pane_t1

0x06c7,	// (0x0006a216) calc_display_pane

0x06ef,	// (0x0006a23e) calc_paper_pane

0x0712,	// (0x0006a261) grid_calc_pane

0xb17d,	// (0x00074ccc) bg_list_pane_cp01

0x0740,	// (0x0006a28f) clock_g1

0x0748,	// (0x0006a297) clock_g2

0x0001,

0xf139,	// (0x00078c88) clock_g

0x0750,	// (0x0006a29f) clock_t1_ParamLimits

0x0750,	// (0x0006a29f) clock_t1

0x0765,	// (0x0006a2b4) clock_t2_ParamLimits

0x0765,	// (0x0006a2b4) clock_t2

0x0777,	// (0x0006a2c6) clock_t3_ParamLimits

0x0777,	// (0x0006a2c6) clock_t3

0x0789,	// (0x0006a2d8) clock_t4_ParamLimits

0x0789,	// (0x0006a2d8) clock_t4

0x079b,	// (0x0006a2ea) clock_t5_ParamLimits

0x079b,	// (0x0006a2ea) clock_t5

0x07b0,	// (0x0006a2ff) clock_t6_ParamLimits

0x07b0,	// (0x0006a2ff) clock_t6

0x07c2,	// (0x0006a311) clock_t7_ParamLimits

0x07c2,	// (0x0006a311) clock_t7

0x07d4,	// (0x0006a323) clock_t8_ParamLimits

0x07d4,	// (0x0006a323) clock_t8

0x07e8,	// (0x0006a337) clock_t9_ParamLimits

0x07e8,	// (0x0006a337) clock_t9

0x0008,

0xf13e,	// (0x00078c8d) clock_t_ParamLimits

0xf13e,	// (0x00078c8d) clock_t

0xb82f,	// (0x0007537e) popup_clock_analogue_window_cp02

0xb82f,	// (0x0007537e) popup_clock_digital_window_cp01

0xb837,	// (0x00075386) listscroll_help_pane

0xb17d,	// (0x00074ccc) phob_pre_status_pane

0xb841,	// (0x00075390) grid_qdial_pane

0xb7a8,	// (0x000752f7) listscroll_mce_pane

0xb7a8,	// (0x000752f7) bg_notes_pane

0xb84b,	// (0x0007539a) list_notes_pane

0x07fc,	// (0x0006a34b) scroll_pane_cp06

0xb859,	// (0x000753a8) bg_calc_paper_pane

0x952b,	// (0x0007307a) list_calc_pane

0xb86d,	// (0x000753bc) bg_calc_display_pane

0x0810,	// (0x0006a35f) calc_display_pane_t1

0x0822,	// (0x0006a371) calc_display_pane_t2

0x9545,	// (0x00073094) calc_display_pane_t3

0x0002,

0xf151,	// (0x00078ca0) calc_display_pane_t

0x0834,	// (0x0006a383) cell_calc_pane_ParamLimits

0x0834,	// (0x0006a383) cell_calc_pane

0xb879,	// (0x000753c8) bg_calc_paper_pane_g1

0xb885,	// (0x000753d4) bg_calc_paper_pane_g2

0xb891,	// (0x000753e0) bg_calc_paper_pane_g3

0xb89d,	// (0x000753ec) bg_calc_paper_pane_g4

0xb8a9,	// (0x000753f8) bg_calc_paper_pane_g5

0x0869,	// (0x0006a3b8) bg_calc_paper_pane_g6

0x0878,	// (0x0006a3c7) bg_calc_paper_pane_g7

0x0887,	// (0x0006a3d6) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00078ca7) bg_calc_paper_pane_g

0x089a,	// (0x0006a3e9) calc_bg_paper_pane_g9

0x08ad,	// (0x0006a3fc) list_calc_item_pane_ParamLimits

0x08ad,	// (0x0006a3fc) list_calc_item_pane

0xb8b5,	// (0x00075404) list_calc_item_pane_g1

0x9557,	// (0x000730a6) list_calc_item_pane_t1_ParamLimits

0x9557,	// (0x000730a6) list_calc_item_pane_t1

0x08c2,	// (0x0006a411) list_calc_item_pane_t2_ParamLimits

0x08c2,	// (0x0006a411) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00078cb8) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00078cb8) list_calc_item_pane_t

0xb8c2,	// (0x00075411) cell_calc_pane_g1

0xb8cc,	// (0x0007541b) grid_highlight_pane_cp02

0x08f4,	// (0x0006a443) bg_calc_display_pane_g1

0x08fd,	// (0x0006a44c) bg_calc_display_pane_g2

0x0907,	// (0x0006a456) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x00078cc2) bg_calc_display_pane_g

0x0910,	// (0x0006a45f) cell_qdial_pane_ParamLimits

0x0910,	// (0x0006a45f) cell_qdial_pane

0x0924,	// (0x0006a473) cell_qdial_pane_g1_ParamLimits

0x0924,	// (0x0006a473) cell_qdial_pane_g1

0x093a,	// (0x0006a489) cell_qdial_pane_g2_ParamLimits

0x093a,	// (0x0006a489) cell_qdial_pane_g2

0xbe27,	// (0x00075976) cell_qdial_pane_g3_ParamLimits

0xbe27,	// (0x00075976) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x00078cc9) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x00078cc9) cell_qdial_pane_g

0x0961,	// (0x0006a4b0) cell_qdial_pane_t1_ParamLimits

0x0961,	// (0x0006a4b0) cell_qdial_pane_t1

0x0979,	// (0x0006a4c8) cell_qdial_pane_t2_ParamLimits

0x0979,	// (0x0006a4c8) cell_qdial_pane_t2

0x098c,	// (0x0006a4db) cell_qdial_pane_t3_ParamLimits

0x098c,	// (0x0006a4db) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x00078cd2) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x00078cd2) cell_qdial_pane_t

0xb17d,	// (0x00074ccc) grid_highlight_pane_cp04

0xbe33,	// (0x00075982) thumbnail_qdial_pane_ParamLimits

0xbe33,	// (0x00075982) thumbnail_qdial_pane

0xbe8f,	// (0x000759de) list_help_pane

0xbe98,	// (0x000759e7) scroll_pane_cp02

0x099f,	// (0x0006a4ee) help_list_pane_t1_ParamLimits

0x099f,	// (0x0006a4ee) help_list_pane_t1

0x9569,	// (0x000730b8) bg_notes_pane_g2

0x9571,	// (0x000730c0) bg_notes_pane_g3

0x9579,	// (0x000730c8) notes_bg_pane_g1

0x9581,	// (0x000730d0) notes_bg_pane_g4

0x9589,	// (0x000730d8) notes_bg_pane_g5

0x9591,	// (0x000730e0) notes_bg_pane_g6

0x9599,	// (0x000730e8) notes_bg_pane_g7

0x95a1,	// (0x000730f0) notes_bg_pane_g8

0x95a9,	// (0x000730f8) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00078cf0) notes_bg_pane_g

0x09bc,	// (0x0006a50b) list_notes_text_pane_ParamLimits

0x09bc,	// (0x0006a50b) list_notes_text_pane

0xbea1,	// (0x000759f0) list_notes_text_pane_g1

0x09d1,	// (0x0006a520) list_notes_text_pane_t1

0x09df,	// (0x0006a52e) listscroll_cale_week_pane

0x0a0b,	// (0x0006a55a) bg_cale_heading_pane

0xbec4,	// (0x00075a13) bg_cale_pane_cp01

0x0a23,	// (0x0006a572) cale_week_corner_pane

0x0a42,	// (0x0006a591) cale_week_day_heading_pane

0x0a5f,	// (0x0006a5ae) cale_week_scroll_pane_g1

0x0a72,	// (0x0006a5c1) cale_week_scroll_pane_g2

0x0a8a,	// (0x0006a5d9) cale_week_scroll_pane_g3

0x0aa2,	// (0x0006a5f1) cale_week_scroll_pane_g4

0x0aba,	// (0x0006a609) cale_week_scroll_pane_g5

0x0ada,	// (0x0006a629) cale_week_scroll_pane_g6

0x0afa,	// (0x0006a649) cale_week_scroll_pane_g7

0x0b1a,	// (0x0006a669) cale_week_scroll_pane_g8

0x0b3e,	// (0x0006a68d) cale_week_scroll_pane_g9

0x0b56,	// (0x0006a6a5) cale_week_scroll_pane_g10

0x0b6e,	// (0x0006a6bd) cale_week_scroll_pane_g11

0x0b86,	// (0x0006a6d5) cale_week_scroll_pane_g12

0x0b9e,	// (0x0006a6ed) cale_week_scroll_pane_g13

0x0b9e,	// (0x0006a6ed) cale_week_scroll_pane_g14

0x0b9e,	// (0x0006a6ed) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00078cff) cale_week_scroll_pane_g

0x0bda,	// (0x0006a729) cale_week_time_pane

0x0bfe,	// (0x0006a74d) grid_cale_week_pane

0xbef3,	// (0x00075a42) scroll_pane_cp08

0x0c24,	// (0x0006a773) cell_cale_week_pane_ParamLimits

0x0c24,	// (0x0006a773) cell_cale_week_pane

0x0cb2,	// (0x0006a801) cale_week_day_heading_pane_t1

0x0cdc,	// (0x0006a82b) cale_week_day_heading_pane_t2

0x0d0b,	// (0x0006a85a) cale_week_day_heading_pane_t3

0x0d3a,	// (0x0006a889) cale_week_day_heading_pane_t4

0x0d69,	// (0x0006a8b8) cale_week_day_heading_pane_t5

0x0da0,	// (0x0006a8ef) cale_week_day_heading_pane_t6

0x0dd7,	// (0x0006a926) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x00078d20) cale_week_day_heading_pane_t

0xbf10,	// (0x00075a5f) bg_cale_side_pane

0x0e01,	// (0x0006a950) cale_week_time_pane_t1

0x0e1b,	// (0x0006a96a) cale_week_time_pane_t2

0x0e35,	// (0x0006a984) cale_week_time_pane_t3

0x0e4f,	// (0x0006a99e) cale_week_time_pane_t4

0x0e69,	// (0x0006a9b8) cale_week_time_pane_t5

0x0e83,	// (0x0006a9d2) cale_week_time_pane_t6

0x0e9d,	// (0x0006a9ec) cale_week_time_pane_t7

0x0eb7,	// (0x0006aa06) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00078d2f) cale_week_time_pane_t

0x0ed1,	// (0x0006aa20) cell_cale_week_pane_g2

0x0ef0,	// (0x0006aa3f) cell_cale_week_pane_g3_ParamLimits

0x0ef0,	// (0x0006aa3f) cell_cale_week_pane_g3

0xbf1e,	// (0x00075a6d) grid_highlight_pane_cp07

0xbf26,	// (0x00075a75) listscroll_gms_pane

0xbf30,	// (0x00075a7f) grid_gms_pane

0xbf39,	// (0x00075a88) listscroll_gms_pane_g1

0xbf41,	// (0x00075a90) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00078d40) listscroll_gms_pane_g

0x0f08,	// (0x0006aa57) scroll_pane_cp010

0x0f13,	// (0x0006aa62) cell_gms_pane_ParamLimits

0x0f13,	// (0x0006aa62) cell_gms_pane

0x0f26,	// (0x0006aa75) cell_gms_pane_g1

0xbf49,	// (0x00075a98) cell_gms_pane_g2

0xbf51,	// (0x00075aa0) cell_gms_pane_g3

0xbf5a,	// (0x00075aa9) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x00078d45) cell_gms_pane_g

0xbf63,	// (0x00075ab2) grid_highlight_pane_cp09

0x33f7,	// (0x0006cf46) phob_pre_status_pane_g1

0x33ff,	// (0x0006cf4e) phob_pre_status_pane_g2

0x3407,	// (0x0006cf56) phob_pre_status_pane_g3

0x340f,	// (0x0006cf5e) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x00079130) phob_pre_status_pane_g

0x341f,	// (0x0006cf6e) phob_pre_status_pane_t1

0x342d,	// (0x0006cf7c) phob_pre_status_pane_t2

0x343d,	// (0x0006cf8c) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0007913b) phob_pre_status_pane_t

0xbf6b,	// (0x00075aba) bg_list_pane_cp05

0x0f36,	// (0x0006aa85) grid_vorec_pane

0x0f3e,	// (0x0006aa8d) vorec_t1

0x0f4c,	// (0x0006aa9b) vorec_t2

0x0f5a,	// (0x0006aaa9) vorec_t3

0x0f68,	// (0x0006aab7) vorec_t4

0x945b,	// (0x00072faa) vorec_t5

0x9469,	// (0x00072fb8) vorec_t6

0x0004,

0xf1ff,	// (0x00078d4e) vorec_t

0x9477,	// (0x00072fc6) wait_bar_pane_cp01

0x0f84,	// (0x0006aad3) cell_vorec_pane_ParamLimits

0x0f84,	// (0x0006aad3) cell_vorec_pane

0x95b1,	// (0x00073100) cell_vorec_pane_g1

0xb17d,	// (0x00074ccc) grid_highlight_pane_cp05

0x0fac,	// (0x0006aafb) cams_zoom_pane

0x0fbb,	// (0x0006ab0a) image_vga_pane

0x0fd5,	// (0x0006ab24) main_camera_pane_g1

0x0fe7,	// (0x0006ab36) main_camera_pane_g2

0x0ff7,	// (0x0006ab46) main_camera_pane_g3

0x1007,	// (0x0006ab56) main_camera_pane_g4

0x1017,	// (0x0006ab66) main_camera_pane_g5

0x1027,	// (0x0006ab76) main_camera_pane_g6

0x1039,	// (0x0006ab88) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00078d59) main_camera_pane_g

0x1049,	// (0x0006ab98) main_camera_pane_t1

0x105f,	// (0x0006abae) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00078d6a) main_camera_pane_t

0x1099,	// (0x0006abe8) cams_zoom_pane_cp_ParamLimits

0x1099,	// (0x0006abe8) cams_zoom_pane_cp

0x10c1,	// (0x0006ac10) image_cif_pane_ParamLimits

0x10c1,	// (0x0006ac10) image_cif_pane

0x10f7,	// (0x0006ac46) image_subqcif_pane

0x10ff,	// (0x0006ac4e) main_video_pane_g1_ParamLimits

0x10ff,	// (0x0006ac4e) main_video_pane_g1

0x1123,	// (0x0006ac72) main_video_pane_g2_ParamLimits

0x1123,	// (0x0006ac72) main_video_pane_g2

0x1157,	// (0x0006aca6) main_video_pane_g3_ParamLimits

0x1157,	// (0x0006aca6) main_video_pane_g3

0x1185,	// (0x0006acd4) main_video_pane_g4_ParamLimits

0x1185,	// (0x0006acd4) main_video_pane_g4

0x11b3,	// (0x0006ad02) main_video_pane_g5_ParamLimits

0x11b3,	// (0x0006ad02) main_video_pane_g5

0xbf7f,	// (0x00075ace) main_video_pane_g6_ParamLimits

0xbf7f,	// (0x00075ace) main_video_pane_g6

0x0006,

0xf220,	// (0x00078d6f) main_video_pane_g_ParamLimits

0xf220,	// (0x00078d6f) main_video_pane_g

0x11dc,	// (0x0006ad2b) main_video_pane_t1_ParamLimits

0x11dc,	// (0x0006ad2b) main_video_pane_t1

0xbf99,	// (0x00075ae8) cams_zoom_pane_g1

0xbfa2,	// (0x00075af1) cams_zoom_pane_g2

0xbfab,	// (0x00075afa) cams_zoom_pane_g3

0xbfb4,	// (0x00075b03) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00078d7e) cams_zoom_pane_g

0x1239,	// (0x0006ad88) grid_cams_pane

0x1253,	// (0x0006ada2) linegrid_cams_pane

0x1267,	// (0x0006adb6) cell_cams_pane_ParamLimits

0x1267,	// (0x0006adb6) cell_cams_pane

0xbfbd,	// (0x00075b0c) cams_burst_image_pane

0xbfc5,	// (0x00075b14) cell_cams_pane_g1

0xb17d,	// (0x00074ccc) grid_highlight_pane_cp03

0xb8c2,	// (0x00075411) mp_bg_pane_g1

0xb17d,	// (0x00074ccc) bg_list_pane_cp03

0xdcf4,	// (0x00077843) bg_mp_pane

0xdcfc,	// (0x0007784b) grid_mp_pane

0xdd04,	// (0x00077853) media_player_g1

0xdd0c,	// (0x0007785b) media_player_t1

0xdd1a,	// (0x00077869) media_player_t2

0xdd28,	// (0x00077877) media_player_t3

0xdd36,	// (0x00077885) media_player_t4

0xdd44,	// (0x00077893) media_player_t5

0xdd52,	// (0x000778a1) media_player_t6

0xdd60,	// (0x000778af) media_player_t7

0x0006,

0xf5cb,	// (0x0007911a) media_player_t

0xdd6e,	// (0x000778bd) wait_bar_pane_cp02

0xf5b0,	// (0x000790ff) main_usb_pane_t

0x33ee,	// (0x0006cf3d) cell_mp_pane

0xb8c2,	// (0x00075411) cell_mp_pane_g1

0xb17d,	// (0x00074ccc) grid_highlight_pane_cp06

0xbfcd,	// (0x00075b1c) grid_skin_colour_pane

0xbfd5,	// (0x00075b24) list_highlight_pane_cp03

0x139d,	// (0x0006aeec) skin_g1

0xbfdd,	// (0x00075b2c) skin_t1

0xbfec,	// (0x00075b3b) skin_t2

0x0001,

0xf264,	// (0x00078db3) skin_t

0x13a5,	// (0x0006aef4) cell_skin_colour_pane_ParamLimits

0x13a5,	// (0x0006aef4) cell_skin_colour_pane

0xbffa,	// (0x00075b49) cell_skin_colour_pane_g1

0x141e,	// (0x0006af6d) call_video_g1_ParamLimits

0x141e,	// (0x0006af6d) call_video_g1

0x143a,	// (0x0006af89) call_video_g2_ParamLimits

0x143a,	// (0x0006af89) call_video_g2

0x0001,

0xf269,	// (0x00078db8) call_video_g_ParamLimits

0xf269,	// (0x00078db8) call_video_g

0x148c,	// (0x0006afdb) call_video_uplink_pane_cp1_ParamLimits

0x148c,	// (0x0006afdb) call_video_uplink_pane_cp1

0xc00c,	// (0x00075b5b) call_video_uplink_pane_cp2

0x152b,	// (0x0006b07a) video_down_crop_pane_ParamLimits

0x152b,	// (0x0006b07a) video_down_crop_pane

0x1622,	// (0x0006b171) video_down_pane_ParamLimits

0x1622,	// (0x0006b171) video_down_pane

0xc014,	// (0x00075b63) video_down_subqcif_pane_ParamLimits

0xc014,	// (0x00075b63) video_down_subqcif_pane

0xc02c,	// (0x00075b7b) video_down_subqcif_pane_cp_ParamLimits

0xc02c,	// (0x00075b7b) video_down_subqcif_pane_cp

0xc052,	// (0x00075ba1) im_reading_pane_ParamLimits

0xc052,	// (0x00075ba1) im_reading_pane

0x1732,	// (0x0006b281) im_writing_pane_ParamLimits

0x1732,	// (0x0006b281) im_writing_pane

0x1748,	// (0x0006b297) im_reading_pane_t1

0xc06c,	// (0x00075bbb) list_im_pane

0xc07d,	// (0x00075bcc) scroll_pane_cp07

0x1781,	// (0x0006b2d0) im_writing_pane_t1_ParamLimits

0x1781,	// (0x0006b2d0) im_writing_pane_t1

0xc096,	// (0x00075be5) im_writing_pane_t2_ParamLimits

0xc096,	// (0x00075be5) im_writing_pane_t2

0x0001,

0xf273,	// (0x00078dc2) im_writing_pane_t_ParamLimits

0xf273,	// (0x00078dc2) im_writing_pane_t

0xb17d,	// (0x00074ccc) input_focus_pane_cp04

0xb17d,	// (0x00074ccc) input_focus_pane_cp05

0x1796,	// (0x0006b2e5) list_im_single_pane_ParamLimits

0x1796,	// (0x0006b2e5) list_im_single_pane

0x17aa,	// (0x0006b2f9) list_single_im_pane_t1

0x33ae,	// (0x0006cefd) blid_accuracy_pane

0x33b6,	// (0x0006cf05) blid_compass_pane

0x33c0,	// (0x0006cf0f) main_location_t1

0x33d0,	// (0x0006cf1f) main_location_t2

0x33e0,	// (0x0006cf2f) main_location_t3

0x0002,

0xf5da,	// (0x00079129) main_location_t

0xb17d,	// (0x00074ccc) aid_levels_location

0xb8c2,	// (0x00075411) blid_accuracy_pane_g1

0xb8c2,	// (0x00075411) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x00078e24) blid_accuracy_pane_g

0xc0de,	// (0x00075c2d) wml_content_pane

0xc11c,	// (0x00075c6b) wml_button_pane_ParamLimits

0xc11c,	// (0x00075c6b) wml_button_pane

0x17b9,	// (0x0006b308) wml_list_single_large_pane_ParamLimits

0x17b9,	// (0x0006b308) wml_list_single_large_pane

0x17ce,	// (0x0006b31d) wml_list_single_medium_pane_ParamLimits

0x17ce,	// (0x0006b31d) wml_list_single_medium_pane

0x17e4,	// (0x0006b333) wml_list_single_small_pane_ParamLimits

0x17e4,	// (0x0006b333) wml_list_single_small_pane

0xc130,	// (0x00075c7f) wml_selection_box_pane_ParamLimits

0xc130,	// (0x00075c7f) wml_selection_box_pane

0xc143,	// (0x00075c92) wml_list_single_pane_t1

0xc152,	// (0x00075ca1) wml_list_single_medium_pane_t1

0xc161,	// (0x00075cb0) wml_list_single_large_pane_t1

0xc170,	// (0x00075cbf) input_focus_pane_cp02_ParamLimits

0xc170,	// (0x00075cbf) input_focus_pane_cp02

0xc183,	// (0x00075cd2) wml_selection_box_pane_g1

0xc18c,	// (0x00075cdb) wml_selection_box_pane_t1_ParamLimits

0xc18c,	// (0x00075cdb) wml_selection_box_pane_t1

0xb7a8,	// (0x000752f7) bg_wml_button_pane_ParamLimits

0xb7a8,	// (0x000752f7) bg_wml_button_pane

0xc1a4,	// (0x00075cf3) wml_button_pane_g1

0xc1ac,	// (0x00075cfb) wml_button_pane_t1

0xc1a4,	// (0x00075cf3) wml_button_bg_pane_g1

0xc1bc,	// (0x00075d0b) wml_button_bg_pane_g2

0xc1c4,	// (0x00075d13) wml_button_bg_pane_g3

0xc1cc,	// (0x00075d1b) wml_button_bg_pane_g4

0xc1d4,	// (0x00075d23) wml_button_bg_pane_g5

0xc1dc,	// (0x00075d2b) wml_button_bg_pane_g6

0xc1e4,	// (0x00075d33) wml_button_bg_pane_g7

0xc1ec,	// (0x00075d3b) wml_button_bg_pane_g8

0xc1f4,	// (0x00075d43) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x00078dc7) wml_button_bg_pane_g

0x17fc,	// (0x0006b34b) bg_list_pane_cp02

0xc1fc,	// (0x00075d4b) mce_header_pane_ParamLimits

0xc1fc,	// (0x00075d4b) mce_header_pane

0xc212,	// (0x00075d61) mce_icon_pane

0xc212,	// (0x00075d61) mce_image_pane

0xc21b,	// (0x00075d6a) mce_text_pane_ParamLimits

0xc21b,	// (0x00075d6a) mce_text_pane

0x1804,	// (0x0006b353) scroll_pane_cp03

0xc114,	// (0x00075c63) scroll_pane_cp04

0xc22e,	// (0x00075d7d) scroll_pane_cp05_ParamLimits

0xc22e,	// (0x00075d7d) scroll_pane_cp05

0x180e,	// (0x0006b35d) mce_header_field_pane_ParamLimits

0x180e,	// (0x0006b35d) mce_header_field_pane

0x1825,	// (0x0006b374) mce_header_field_pane_2_ParamLimits

0x1825,	// (0x0006b374) mce_header_field_pane_2

0x183b,	// (0x0006b38a) mce_header_field_pane_3

0x1843,	// (0x0006b392) list_single_mce_message_pane_ParamLimits

0x1843,	// (0x0006b392) list_single_mce_message_pane

0x1858,	// (0x0006b3a7) list_single_mce_smart_pane_ParamLimits

0x1858,	// (0x0006b3a7) list_single_mce_smart_pane

0xc23a,	// (0x00075d89) input_focus_pane_cp03

0xc243,	// (0x00075d92) list_header_data_pane

0x1878,	// (0x0006b3c7) mce_header_field_pane_t1

0x1888,	// (0x0006b3d7) list_single_mce_header_pane_ParamLimits

0x1888,	// (0x0006b3d7) list_single_mce_header_pane

0xc24b,	// (0x00075d9a) list_single_mce_header_pane_t1

0xc25a,	// (0x00075da9) list_single_mce_message_pane_g1

0xc262,	// (0x00075db1) list_single_mce_message_pane_t1

0x18c2,	// (0x0006b411) bg_cale_heading_pane_cp01_ParamLimits

0x18c2,	// (0x0006b411) bg_cale_heading_pane_cp01

0xc270,	// (0x00075dbf) bg_cale_pane_cp02_ParamLimits

0xc270,	// (0x00075dbf) bg_cale_pane_cp02

0x18fc,	// (0x0006b44b) cale_month_corner_pane

0x191b,	// (0x0006b46a) cale_month_day_heading_pane_ParamLimits

0x191b,	// (0x0006b46a) cale_month_day_heading_pane

0x196d,	// (0x0006b4bc) cale_month_pane_g1_ParamLimits

0x196d,	// (0x0006b4bc) cale_month_pane_g1

0x199c,	// (0x0006b4eb) cale_month_pane_g2_ParamLimits

0x199c,	// (0x0006b4eb) cale_month_pane_g2

0x19cc,	// (0x0006b51b) cale_month_pane_g3_ParamLimits

0x19cc,	// (0x0006b51b) cale_month_pane_g3

0x1a08,	// (0x0006b557) cale_month_pane_g4_ParamLimits

0x1a08,	// (0x0006b557) cale_month_pane_g4

0x1a44,	// (0x0006b593) cale_month_pane_g5_ParamLimits

0x1a44,	// (0x0006b593) cale_month_pane_g5

0x1a8c,	// (0x0006b5db) cale_month_pane_g6_ParamLimits

0x1a8c,	// (0x0006b5db) cale_month_pane_g6

0x1ad8,	// (0x0006b627) cale_month_pane_g7_ParamLimits

0x1ad8,	// (0x0006b627) cale_month_pane_g7

0x1b2c,	// (0x0006b67b) cale_month_pane_g8_ParamLimits

0x1b2c,	// (0x0006b67b) cale_month_pane_g8

0x1b80,	// (0x0006b6cf) cale_month_pane_g9_ParamLimits

0x1b80,	// (0x0006b6cf) cale_month_pane_g9

0x1bd2,	// (0x0006b721) cale_month_pane_g10_ParamLimits

0x1bd2,	// (0x0006b721) cale_month_pane_g10

0x1c24,	// (0x0006b773) cale_month_pane_g11_ParamLimits

0x1c24,	// (0x0006b773) cale_month_pane_g11

0x1c76,	// (0x0006b7c5) cale_month_pane_g12_ParamLimits

0x1c76,	// (0x0006b7c5) cale_month_pane_g12

0x1cc8,	// (0x0006b817) cale_month_pane_g13_ParamLimits

0x1cc8,	// (0x0006b817) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00078dda) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00078dda) cale_month_pane_g

0x1d1a,	// (0x0006b869) cale_month_week_pane

0x1d3e,	// (0x0006b88d) grid_cale_month_pane_ParamLimits

0x1d3e,	// (0x0006b88d) grid_cale_month_pane

0x1d87,	// (0x0006b8d6) cale_month_day_heading_pane_t1

0x1e0d,	// (0x0006b95c) cale_month_day_heading_pane_t2

0x1e86,	// (0x0006b9d5) cale_month_day_heading_pane_t3

0x1eff,	// (0x0006ba4e) cale_month_day_heading_pane_t4

0x1f80,	// (0x0006bacf) cale_month_day_heading_pane_t5

0x2009,	// (0x0006bb58) cale_month_day_heading_pane_t6

0x2092,	// (0x0006bbe1) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x00078df5) cale_month_day_heading_pane_t

0xbf10,	// (0x00075a5f) bg_cale_side_pane_cp01

0x2123,	// (0x0006bc72) cale_month_week_pane_t1

0x213c,	// (0x0006bc8b) cale_month_week_pane_t2

0x2155,	// (0x0006bca4) cale_month_week_pane_t3

0x216e,	// (0x0006bcbd) cale_month_week_pane_t4

0x2187,	// (0x0006bcd6) cale_month_week_pane_t5

0x21a0,	// (0x0006bcef) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x00078e04) cale_month_week_pane_t

0x21b9,	// (0x0006bd08) cell_cale_month_pane_ParamLimits

0x21b9,	// (0x0006bd08) cell_cale_month_pane

0x95bb,	// (0x0007310a) cell_cale_month_pane_g1

0x2311,	// (0x0006be60) cell_cale_month_pane_t1_ParamLimits

0x2311,	// (0x0006be60) cell_cale_month_pane_t1

0xbf1e,	// (0x00075a6d) grid_highlight_pane_cp08

0xb8c2,	// (0x00075411) main_smil_g1

0x233d,	// (0x0006be8c) smil_status_pane

0xc2af,	// (0x00075dfe) smil_text_pane

0xdc14,	// (0x00077763) bg_popup_call3_rect_pane_g8

0xdc1c,	// (0x0007776b) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000790bd) bg_popup_call3_rect_pane_g

0xde63,	// (0x000779b2) smil_status_volume_pane_g1

0xc2b9,	// (0x00075e08) smil_status_pane_t1

0x9743,	// (0x00073292) volume_smil_pane

0xc2d0,	// (0x00075e1f) list_smil_text_pane

0x2350,	// (0x0006be9f) scroll_pane_cp011

0x235b,	// (0x0006beaa) smil_text_list_pane_t1_ParamLimits

0x235b,	// (0x0006beaa) smil_text_list_pane_t1

0x95c7,	// (0x00073116) aid_volume_smil_ParamLimits

0x95c7,	// (0x00073116) aid_volume_smil

0xb8c2,	// (0x00075411) smil_volume_pane_g1

0xb8c2,	// (0x00075411) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x00078e24) smil_volume_pane_g

0x09df,	// (0x0006a52e) listscroll_cale_day_pane

0xc2da,	// (0x00075e29) bg_cale_pane

0xc2f2,	// (0x00075e41) list_cale_pane

0xc315,	// (0x00075e64) scroll_pane_cp09

0xc326,	// (0x00075e75) cale_bg_pane_g1

0xc32e,	// (0x00075e7d) cale_bg_pane_g2

0xc336,	// (0x00075e85) cale_bg_pane_g3

0xc33e,	// (0x00075e8d) cale_bg_pane_g4

0xc346,	// (0x00075e95) cale_bg_pane_g5

0xc34e,	// (0x00075e9d) cale_bg_pane_g6

0xc356,	// (0x00075ea5) cale_bg_pane_g7

0xc35e,	// (0x00075ead) cale_bg_pane_g8

0xc366,	// (0x00075eb5) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00078e29) cale_bg_pane_g

0x239f,	// (0x0006beee) list_cale_time_pane_ParamLimits

0x239f,	// (0x0006beee) list_cale_time_pane

0xc36e,	// (0x00075ebd) list_cale_time_pane_g1_ParamLimits

0xc36e,	// (0x00075ebd) list_cale_time_pane_g1

0xc37a,	// (0x00075ec9) list_cale_time_pane_g2_ParamLimits

0xc37a,	// (0x00075ec9) list_cale_time_pane_g2

0x23b4,	// (0x0006bf03) list_cale_time_pane_g3_ParamLimits

0x23b4,	// (0x0006bf03) list_cale_time_pane_g3

0x23c2,	// (0x0006bf11) list_cale_time_pane_g4_ParamLimits

0x23c2,	// (0x0006bf11) list_cale_time_pane_g4

0x23d0,	// (0x0006bf1f) list_cale_time_pane_g5_ParamLimits

0x23d0,	// (0x0006bf1f) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00078e3c) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00078e3c) list_cale_time_pane_g

0xc394,	// (0x00075ee3) list_cale_time_pane_t1_ParamLimits

0xc394,	// (0x00075ee3) list_cale_time_pane_t1

0xc3bc,	// (0x00075f0b) list_cale_time_pane_t2_ParamLimits

0xc3bc,	// (0x00075f0b) list_cale_time_pane_t2

0x2731,	// (0x0006c280) aid_blid_cardinal_pane

0x276f,	// (0x0006c2be) compass_pane_t4

0xc3e4,	// (0x00075f33) list_cale_time_pane_t4_ParamLimits

0xc3e4,	// (0x00075f33) list_cale_time_pane_t4

0x277d,	// (0x0006c2cc) compass_pane_t5

0x278b,	// (0x0006c2da) compass_pane_t6

0x2799,	// (0x0006c2e8) compass_pane_t7

0xc893,	// (0x000763e2) navi_pane_cc_t1

0xca70,	// (0x000765bf) aid_phob_thumbnail_center_pane

0x2dc6,	// (0x0006c915) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00078e49) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00078e49) list_cale_time_pane_t

0xadd4,	// (0x00074923) bg_popup_window_pane_cp02_ParamLimits

0xadd4,	// (0x00074923) bg_popup_window_pane_cp02

0xc40c,	// (0x00075f5b) heading_pane_cp01_ParamLimits

0xc40c,	// (0x00075f5b) heading_pane_cp01

0xc418,	// (0x00075f67) loc_req_pane_ParamLimits

0xc418,	// (0x00075f67) loc_req_pane

0xc428,	// (0x00075f77) loc_type_pane_ParamLimits

0xc428,	// (0x00075f77) loc_type_pane

0xc43a,	// (0x00075f89) loc_type_pane_t1_ParamLimits

0xc43a,	// (0x00075f89) loc_type_pane_t1

0xc44c,	// (0x00075f9b) loc_type_pane_t2_ParamLimits

0xc44c,	// (0x00075f9b) loc_type_pane_t2

0xc45e,	// (0x00075fad) loc_type_pane_t3_ParamLimits

0xc45e,	// (0x00075fad) loc_type_pane_t3

0x0002,

0xf301,	// (0x00078e50) loc_type_pane_t_ParamLimits

0xf301,	// (0x00078e50) loc_type_pane_t

0xc470,	// (0x00075fbf) list_loc_req_pane

0xc47a,	// (0x00075fc9) scroll_pane_cp012

0x23de,	// (0x0006bf2d) list_single_loc_request_popup_menu_pane_ParamLimits

0x23de,	// (0x0006bf2d) list_single_loc_request_popup_menu_pane

0xc485,	// (0x00075fd4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc485,	// (0x00075fd4) list_single_loc_request_popup_menu_pane_g1

0xc491,	// (0x00075fe0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc491,	// (0x00075fe0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00078e57) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00078e57) list_single_loc_request_popup_menu_pane_g

0xc49d,	// (0x00075fec) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc49d,	// (0x00075fec) list_single_loc_request_popup_menu_pane_t1

0xb7a8,	// (0x000752f7) bg_popup_window_pane_cp03_ParamLimits

0xb7a8,	// (0x000752f7) bg_popup_window_pane_cp03

0xc4b3,	// (0x00076002) heading_loc_req_pane_ParamLimits

0xc4b3,	// (0x00076002) heading_loc_req_pane

0x23eb,	// (0x0006bf3a) popup_dyc_status_message_window_g1_ParamLimits

0x23eb,	// (0x0006bf3a) popup_dyc_status_message_window_g1

0x23ff,	// (0x0006bf4e) popup_dyc_status_message_window_t1_ParamLimits

0x23ff,	// (0x0006bf4e) popup_dyc_status_message_window_t1

0x2414,	// (0x0006bf63) popup_dyc_status_message_window_t2_ParamLimits

0x2414,	// (0x0006bf63) popup_dyc_status_message_window_t2

0x2429,	// (0x0006bf78) popup_dyc_status_message_window_t3_ParamLimits

0x2429,	// (0x0006bf78) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00078e5c) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00078e5c) popup_dyc_status_message_window_t

0xb17d,	// (0x00074ccc) bg_heading_pane_cp01

0xc4bf,	// (0x0007600e) heading_loc_req_pane_g1

0xc4c7,	// (0x00076016) heading_loc_req_pane_g2

0xc4cf,	// (0x0007601e) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00078e63) heading_loc_req_pane_g

0xc4d7,	// (0x00076026) heading_loc_req_pane_t1

0xc4e6,	// (0x00076035) bg_popup_sub_pane_cp01_ParamLimits

0xc4e6,	// (0x00076035) bg_popup_sub_pane_cp01

0xc4f4,	// (0x00076043) popup_cale_events_window_g1_ParamLimits

0xc4f4,	// (0x00076043) popup_cale_events_window_g1

0xc514,	// (0x00076063) popup_cale_events_window_g2_ParamLimits

0xc514,	// (0x00076063) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00078e97) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00078e97) popup_cale_events_window_g

0xc534,	// (0x00076083) popup_cale_events_window_t1_ParamLimits

0xc534,	// (0x00076083) popup_cale_events_window_t1

0xc546,	// (0x00076095) popup_cale_events_window_t2_ParamLimits

0xc546,	// (0x00076095) popup_cale_events_window_t2

0xc584,	// (0x000760d3) popup_cale_events_window_t3_ParamLimits

0xc584,	// (0x000760d3) popup_cale_events_window_t3

0xc5be,	// (0x0007610d) popup_cale_events_window_t4_ParamLimits

0xc5be,	// (0x0007610d) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00078e9c) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00078e9c) popup_cale_events_window_t

0x252c,	// (0x0006c07b) call_type_pane

0x253c,	// (0x0006c08b) popup_call_status_window_g1

0x2550,	// (0x0006c09f) popup_call_status_window_g2

0x2564,	// (0x0006c0b3) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00078ea5) popup_call_status_window_g

0xc5f4,	// (0x00076143) call_type_pane_g1

0xc5fd,	// (0x0007614c) call_type_pane_g2

0x0001,

0xf35d,	// (0x00078eac) call_type_pane_g

0xb17d,	// (0x00074ccc) bg_popup_sub_pane_cp02

0xc606,	// (0x00076155) listscroll_popup_wml_pane

0xc60e,	// (0x0007615d) list_wml_pane

0xc618,	// (0x00076167) scroll_pane_cp013

0xc623,	// (0x00076172) list_single_graphic_popup_wml_pane_ParamLimits

0xc623,	// (0x00076172) list_single_graphic_popup_wml_pane

0xb8c2,	// (0x00075411) list_single_graphic_popup_wml_pane_g1

0xc637,	// (0x00076186) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00078eb1) list_single_graphic_popup_wml_pane_g

0xc63f,	// (0x0007618e) list_single_graphic_popup_wml_pane_t1

0xc655,	// (0x000761a4) aid_call_pane

0xb7a0,	// (0x000752ef) popup_clock_analogue_window_g1

0xb7a0,	// (0x000752ef) popup_clock_analogue_window_g2

0x95e9,	// (0x00073138) popup_clock_analogue_window_g3

0x95e9,	// (0x00073138) popup_clock_analogue_window_g4

0xb8c2,	// (0x00075411) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00078eb6) popup_clock_analogue_window_g

0x95f1,	// (0x00073140) popup_clock_analogue_window_t1

0x95ff,	// (0x0007314e) clock_digital_number_pane_ParamLimits

0x95ff,	// (0x0007314e) clock_digital_number_pane

0x960b,	// (0x0007315a) clock_digital_number_pane_cp02_ParamLimits

0x960b,	// (0x0007315a) clock_digital_number_pane_cp02

0x9617,	// (0x00073166) clock_digital_number_pane_cp03_ParamLimits

0x9617,	// (0x00073166) clock_digital_number_pane_cp03

0x9623,	// (0x00073172) clock_digital_number_pane_cp04_ParamLimits

0x9623,	// (0x00073172) clock_digital_number_pane_cp04

0x9633,	// (0x00073182) clock_digital_separator_pane_ParamLimits

0x9633,	// (0x00073182) clock_digital_separator_pane

0x963f,	// (0x0007318e) popup_clock_digital_window_t1

0xb8c2,	// (0x00075411) clock_digital_number_pane_g1

0xb8c2,	// (0x00075411) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x00078e24) clock_digital_number_pane_g

0xb8c2,	// (0x00075411) clock_digital_separator_pane_g1

0xb8c2,	// (0x00075411) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x00078e24) clock_digital_separator_pane_g

0xb17d,	// (0x00074ccc) bg_popup_window_pane_cp04

0xc65d,	// (0x000761ac) heading_pane_cp03

0xc665,	// (0x000761b4) listscroll_popup_gms_pane

0xc66d,	// (0x000761bc) grid_large_graphic_popup_pane

0xc677,	// (0x000761c6) listscroll_popup_gms_pane_g1

0xc67f,	// (0x000761ce) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00078ec1) listscroll_popup_gms_pane_g

0xc114,	// (0x00075c63) scroll_pane_cp014

0x2573,	// (0x0006c0c2) cell_large_graphic_popup_pane_ParamLimits

0x2573,	// (0x0006c0c2) cell_large_graphic_popup_pane

0x258b,	// (0x0006c0da) cell_large_graphic_popup_pane_g1_ParamLimits

0x258b,	// (0x0006c0da) cell_large_graphic_popup_pane_g1

0xc687,	// (0x000761d6) cell_large_graphic_popup_pane_g2_ParamLimits

0xc687,	// (0x000761d6) cell_large_graphic_popup_pane_g2

0xc693,	// (0x000761e2) cell_large_graphic_popup_pane_g3_ParamLimits

0xc693,	// (0x000761e2) cell_large_graphic_popup_pane_g3

0xc6a0,	// (0x000761ef) cell_large_graphic_popup_pane_g4_ParamLimits

0xc6a0,	// (0x000761ef) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x00078ec6) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x00078ec6) cell_large_graphic_popup_pane_g

0xc6b0,	// (0x000761ff) grid_highlight_pane_cp010

0xb8c2,	// (0x00075411) bg_popup_call_pane_g1

0xc6ba,	// (0x00076209) list_single_graphic_popup_conf_pane_ParamLimits

0xc6ba,	// (0x00076209) list_single_graphic_popup_conf_pane

0xc6cd,	// (0x0007621c) list_highlight_pane_cp01

0xc6d6,	// (0x00076225) list_single_graphic_popup_conf_pane_g1

0xc6de,	// (0x0007622d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00078ecf) list_single_graphic_popup_conf_pane_g

0xc6e6,	// (0x00076235) list_single_graphic_popup_conf_pane_t1

0xc6f4,	// (0x00076243) linegrid_cams_pane_g1

0x2597,	// (0x0006c0e6) linegrid_cams_pane_g2

0xbf51,	// (0x00075aa0) linegrid_cams_pane_g3

0xc6fd,	// (0x0007624c) linegrid_cams_pane_g4

0x25a0,	// (0x0006c0ef) linegrid_cams_pane_g5

0x25a9,	// (0x0006c0f8) linegrid_cams_pane_g6

0xbf5a,	// (0x00075aa9) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00078ed4) linegrid_cams_pane_g

0xc706,	// (0x00076255) popup_clock_analogue_window

0xc706,	// (0x00076255) popup_clock_digital_window

0xb17d,	// (0x00074ccc) popup_phob_thumbnail_window

0xb8c2,	// (0x00075411) call_video_uplink_pane_g1

0xc70f,	// (0x0007625e) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x00078ee3) call_video_uplink_pane_g

0xc717,	// (0x00076266) video_uplink_pane

0xc71f,	// (0x0007626e) mce_image_pane_g1

0x25b4,	// (0x0006c103) mce_image_pane_g2

0x25be,	// (0x0006c10d) mce_image_pane_g3

0x25c6,	// (0x0006c115) mce_image_pane_g4

0x25ce,	// (0x0006c11d) mce_image_pane_g5

0x0004,

0xf399,	// (0x00078ee8) mce_image_pane_g

0xc729,	// (0x00076278) control_top_pane_stacon_cp01_ParamLimits

0xc729,	// (0x00076278) control_top_pane_stacon_cp01

0xc73d,	// (0x0007628c) uni_indicator_pane_stacon_cp01_ParamLimits

0xc73d,	// (0x0007628c) uni_indicator_pane_stacon_cp01

0xc74e,	// (0x0007629d) bg_popup_sub_pane_cp03

0xc758,	// (0x000762a7) chi_dic_find_pane

0x25d6,	// (0x0006c125) listscroll_chi_dic_pane

0xc760,	// (0x000762af) main_pane_chidic_g1

0xc768,	// (0x000762b7) chi_dic_find_pane_t1

0xc776,	// (0x000762c5) find_chidic_pane

0xc77f,	// (0x000762ce) chi_dic_list_pane_ParamLimits

0xc77f,	// (0x000762ce) chi_dic_list_pane

0xc790,	// (0x000762df) scroll_pane_cp020

0xc798,	// (0x000762e7) find_chidic_pane_t1

0xb17d,	// (0x00074ccc) input_focus_pane_cp06

0x25ea,	// (0x0006c139) list_chi_dic_pane_ParamLimits

0x25ea,	// (0x0006c139) list_chi_dic_pane

0x25fc,	// (0x0006c14b) list_chi_dic_pane_t1_ParamLimits

0x25fc,	// (0x0006c14b) list_chi_dic_pane_t1

0xb17d,	// (0x00074ccc) list_highlight_pane_cp020

0xc7a7,	// (0x000762f6) bg_cale_heading_pane_g1

0x260f,	// (0x0006c15e) bg_cale_heading_pane_g2

0x2617,	// (0x0006c166) bg_cale_heading_pane_g3

0x261f,	// (0x0006c16e) bg_cale_heading_pane_g4

0x2629,	// (0x0006c178) bg_cale_heading_pane_g5

0x2633,	// (0x0006c182) bg_cale_heading_pane_g6

0x263b,	// (0x0006c18a) bg_cale_heading_pane_g7

0x2643,	// (0x0006c192) bg_cale_heading_pane_g8

0x264d,	// (0x0006c19c) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x00078ef3) bg_cale_heading_pane_g

0xc7a7,	// (0x000762f6) bg_cale_side_pane_g1

0x2657,	// (0x0006c1a6) bg_cale_side_pane_g2

0x265f,	// (0x0006c1ae) bg_cale_side_pane_g3

0x2667,	// (0x0006c1b6) bg_cale_side_pane_g4

0x266f,	// (0x0006c1be) bg_cale_side_pane_g5

0x2677,	// (0x0006c1c6) bg_cale_side_pane_g6

0x267f,	// (0x0006c1ce) bg_cale_side_pane_g7

0x2687,	// (0x0006c1d6) bg_cale_side_pane_g8

0x268f,	// (0x0006c1de) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x00078f06) bg_cale_side_pane_g

0x2697,	// (0x0006c1e6) popup_call_status_window_ParamLimits

0x2697,	// (0x0006c1e6) popup_call_status_window

0xc7af,	// (0x000762fe) stacon_top_pane

0xc7b7,	// (0x00076306) status_pane_ParamLimits

0xc7b7,	// (0x00076306) status_pane

0xc7cc,	// (0x0007631b) status_small_pane

0xc7d4,	// (0x00076323) control_pane

0xb17d,	// (0x00074ccc) stacon_bottom_pane

0xc7dc,	// (0x0007632b) list_single_mce_smart_pane_t1_ParamLimits

0xc7dc,	// (0x0007632b) list_single_mce_smart_pane_t1

0xc7ef,	// (0x0007633e) list_single_mce_smart_pane_t2_ParamLimits

0xc7ef,	// (0x0007633e) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00078f19) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00078f19) list_single_mce_smart_pane_t

0x26e0,	// (0x0006c22f) compass_pane

0x26e9,	// (0x0006c238) main_location2_pane_t1

0x26fb,	// (0x0006c24a) main_location2_pane_t2

0x270d,	// (0x0006c25c) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00078f1e) main_location2_pane_t

0xc80e,	// (0x0007635d) compass_pane_g1_ParamLimits

0xc80e,	// (0x0007635d) compass_pane_g1

0x2751,	// (0x0006c2a0) compass_pane_t1

0x2760,	// (0x0006c2af) compass_pane_t2

0x0005,

0xf3d8,	// (0x00078f27) compass_pane_t

0x27a7,	// (0x0006c2f6) text_secondary_cp61

0xc88a,	// (0x000763d9) navi_pane_cams_g5

0xc906,	// (0x00076455) navi_pane_im_t1

0xc914,	// (0x00076463) navi_pane_mp_g1_ParamLimits

0xc914,	// (0x00076463) navi_pane_mp_g1

0xc928,	// (0x00076477) navi_pane_mp_g2_ParamLimits

0xc928,	// (0x00076477) navi_pane_mp_g2

0xc934,	// (0x00076483) navi_pane_mp_g3_ParamLimits

0xc934,	// (0x00076483) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00078f3b) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00078f3b) navi_pane_mp_g

0xc940,	// (0x0007648f) navi_pane_mp_t1

0xc94e,	// (0x0007649d) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00078f42) navi_pane_mp_t

0xc9b9,	// (0x00076508) navi_pane_vt_g1

0xc940,	// (0x0007648f) navi_pane_vt_t1

0xc9c1,	// (0x00076510) navi_slider_pane

0xbf6b,	// (0x00075aba) zooming_pane

0xc9d1,	// (0x00076520) navi_slider_pane_g1

0x965c,	// (0x000731ab) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00078f49) navi_slider_pane_g

0xc9f5,	// (0x00076544) aid_levels_zoom

0xc9fd,	// (0x0007654c) zooming_pane_g1

0xca05,	// (0x00076554) zooming_pane_g2

0xca05,	// (0x00076554) zooming_pane_g3

0x0002,

0xf409,	// (0x00078f58) zooming_pane_g

0xca0d,	// (0x0007655c) level_10_zoom

0xca16,	// (0x00076565) level_11_zoom

0xca1f,	// (0x0007656e) level_1_zoom

0xca28,	// (0x00076577) level_2_zoom

0xca31,	// (0x00076580) level_3_zoom

0xca3a,	// (0x00076589) level_4_zoom

0xca43,	// (0x00076592) level_5_zoom

0xca4c,	// (0x0007659b) level_6_zoom

0xca55,	// (0x000765a4) level_7_zoom

0xca5e,	// (0x000765ad) level_8_zoom

0xca67,	// (0x000765b6) level_9_zoom

0xca78,	// (0x000765c7) popup_phob_thumbnail_window_g1

0xca80,	// (0x000765cf) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00078f5f) popup_phob_thumbnail_window_g

0xdd76,	// (0x000778c5) level_1_location

0xdd7e,	// (0x000778cd) level_2_location

0xdd86,	// (0x000778d5) level_3_location

0xdd8e,	// (0x000778dd) level_4_location

0xbf6b,	// (0x00075aba) level_5_location

0x27f8,	// (0x0006c347) mce_icon_pane_g1

0x2802,	// (0x0006c351) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00078f64) mce_icon_pane_g

0x280a,	// (0x0006c359) main_mup_pane_g1_ParamLimits

0x280a,	// (0x0006c359) main_mup_pane_g1

0x2820,	// (0x0006c36f) main_mup_pane_g2_ParamLimits

0x2820,	// (0x0006c36f) main_mup_pane_g2

0x2838,	// (0x0006c387) main_mup_pane_g3_ParamLimits

0x2838,	// (0x0006c387) main_mup_pane_g3

0x2850,	// (0x0006c39f) main_mup_pane_g4_ParamLimits

0x2850,	// (0x0006c39f) main_mup_pane_g4

0x2868,	// (0x0006c3b7) main_mup_pane_g5_ParamLimits

0x2868,	// (0x0006c3b7) main_mup_pane_g5

0x2884,	// (0x0006c3d3) main_mup_pane_g6_ParamLimits

0x2884,	// (0x0006c3d3) main_mup_pane_g6

0x289c,	// (0x0006c3eb) main_mup_pane_g7_ParamLimits

0x289c,	// (0x0006c3eb) main_mup_pane_g7

0x28b4,	// (0x0006c403) main_mup_pane_g8_ParamLimits

0x28b4,	// (0x0006c403) main_mup_pane_g8

0x28ce,	// (0x0006c41d) main_mup_pane_g9_ParamLimits

0x28ce,	// (0x0006c41d) main_mup_pane_g9

0x28e8,	// (0x0006c437) main_mup_pane_g10_ParamLimits

0x28e8,	// (0x0006c437) main_mup_pane_g10

0x2902,	// (0x0006c451) main_mup_pane_g11_ParamLimits

0x2902,	// (0x0006c451) main_mup_pane_g11

0x2916,	// (0x0006c465) main_mup_pane_g12_ParamLimits

0x2916,	// (0x0006c465) main_mup_pane_g12

0x292c,	// (0x0006c47b) main_mup_pane_g13_ParamLimits

0x292c,	// (0x0006c47b) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00078f69) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00078f69) main_mup_pane_g

0x2940,	// (0x0006c48f) main_mup_pane_t1_ParamLimits

0x2940,	// (0x0006c48f) main_mup_pane_t1

0x295a,	// (0x0006c4a9) main_mup_pane_t2_ParamLimits

0x295a,	// (0x0006c4a9) main_mup_pane_t2

0x2972,	// (0x0006c4c1) main_mup_pane_t3_ParamLimits

0x2972,	// (0x0006c4c1) main_mup_pane_t3

0x298a,	// (0x0006c4d9) main_mup_pane_t4_ParamLimits

0x298a,	// (0x0006c4d9) main_mup_pane_t4

0x29a8,	// (0x0006c4f7) main_mup_pane_t5_ParamLimits

0x29a8,	// (0x0006c4f7) main_mup_pane_t5

0x29bd,	// (0x0006c50c) main_mup_pane_t6_ParamLimits

0x29bd,	// (0x0006c50c) main_mup_pane_t6

0x0005,

0xf435,	// (0x00078f84) main_mup_pane_t_ParamLimits

0xf435,	// (0x00078f84) main_mup_pane_t

0x29cf,	// (0x0006c51e) mup_progress_pane_ParamLimits

0x29cf,	// (0x0006c51e) mup_progress_pane

0x29db,	// (0x0006c52a) mup_visualizer_pane_ParamLimits

0x29db,	// (0x0006c52a) mup_visualizer_pane

0x2a0b,	// (0x0006c55a) mup_volume_pane_ParamLimits

0x2a0b,	// (0x0006c55a) mup_volume_pane

0xca88,	// (0x000765d7) mup_visualizer_pane_g1_ParamLimits

0xca88,	// (0x000765d7) mup_visualizer_pane_g1

0xca88,	// (0x000765d7) mup_visualizer_pane_g2_ParamLimits

0xca88,	// (0x000765d7) mup_visualizer_pane_g2

0xc80e,	// (0x0007635d) mup_visualizer_pane_g3_ParamLimits

0xc80e,	// (0x0007635d) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00078f91) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00078f91) mup_visualizer_pane_g

0xb8c2,	// (0x00075411) mup_volume_pane_g1

0xca9e,	// (0x000765ed) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00078f98) mup_volume_pane_g

0xb8c2,	// (0x00075411) mup_progress_pane_g1

0xcaa7,	// (0x000765f6) mup_progress_pane_g2

0xcab0,	// (0x000765ff) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00078f9d) mup_progress_pane_g

0xb17d,	// (0x00074ccc) bg_popup_window_pane_cp05

0xcab9,	// (0x00076608) heading_pane_cp02_ParamLimits

0xcab9,	// (0x00076608) heading_pane_cp02

0xcad3,	// (0x00076622) list_popup_blid_pane

0xcadb,	// (0x0007662a) list_blid_sat_info_pane_ParamLimits

0xcadb,	// (0x0007662a) list_blid_sat_info_pane

0xcaee,	// (0x0007663d) list_blid_sat_info_pane_g1

0xcaf6,	// (0x00076645) list_blid_sat_info_pane_t1

0x2b21,	// (0x0006c670) mup_equalizer_pane_ParamLimits

0x2b21,	// (0x0006c670) mup_equalizer_pane

0x2b3a,	// (0x0006c689) mup_equalizer_pane_cp1_ParamLimits

0x2b3a,	// (0x0006c689) mup_equalizer_pane_cp1

0x2b57,	// (0x0006c6a6) mup_equalizer_pane_cp2_ParamLimits

0x2b57,	// (0x0006c6a6) mup_equalizer_pane_cp2

0x2b74,	// (0x0006c6c3) mup_equalizer_pane_cp3_ParamLimits

0x2b74,	// (0x0006c6c3) mup_equalizer_pane_cp3

0x2b95,	// (0x0006c6e4) mup_equalizer_pane_cp4_ParamLimits

0x2b95,	// (0x0006c6e4) mup_equalizer_pane_cp4

0x2bb6,	// (0x0006c705) mup_equalizer_pane_cp5

0x2bca,	// (0x0006c719) mup_equalizer_pane_cp6

0x2bde,	// (0x0006c72d) mup_equalizer_pane_cp7

0xdc94,	// (0x000777e3) bg_popup_call_poc_act_pane_g9

0xdc9c,	// (0x000777eb) bg_popup_call_poc_act_pane_g10

0xdca4,	// (0x000777f3) bg_popup_call_poc_act_pane_g11

0x000a,

0xb7a8,	// (0x000752f7) mup_scale_pane

0xb8c2,	// (0x00075411) mup_scale_pane_g1

0xcb04,	// (0x00076653) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00078fb9) mup_scale_pane_g

0xcb28,	// (0x00076677) msg_data_pane

0xcb30,	// (0x0007667f) scroll_pane_cp017

0x2c04,	// (0x0006c753) bg_list_pane_cp04_ParamLimits

0x2c04,	// (0x0006c753) bg_list_pane_cp04

0xcb38,	// (0x00076687) msg_data_pane_g1

0x2c1c,	// (0x0006c76b) msg_data_pane_g2

0x2c26,	// (0x0006c775) msg_data_pane_g3

0x2c2e,	// (0x0006c77d) msg_data_pane_g4

0x2c36,	// (0x0006c785) msg_data_pane_g5

0x2c3e,	// (0x0006c78d) msg_data_pane_g6

0x2c46,	// (0x0006c795) msg_data_pane_g7

0x0006,

0xf479,	// (0x00078fc8) msg_data_pane_g

0x2c4e,	// (0x0006c79d) msg_text_pane_ParamLimits

0x2c4e,	// (0x0006c79d) msg_text_pane

0x2c7b,	// (0x0006c7ca) qrid_highlight_pane_cp011_ParamLimits

0x2c7b,	// (0x0006c7ca) qrid_highlight_pane_cp011

0xb17d,	// (0x00074ccc) msg_body_pane

0xb17d,	// (0x00074ccc) msg_header_pane

0xcb49,	// (0x00076698) input_focus_pane_cp07

0x2c9f,	// (0x0006c7ee) msg_header_pane_t1_ParamLimits

0x2c9f,	// (0x0006c7ee) msg_header_pane_t1

0x9676,	// (0x000731c5) msg_header_pane_t2_ParamLimits

0x9676,	// (0x000731c5) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00078fdc) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00078fdc) msg_header_pane_t

0xcb5e,	// (0x000766ad) msg_body_pane_g1

0x2cb1,	// (0x0006c800) msg_body_pane_t1_ParamLimits

0x2cb1,	// (0x0006c800) msg_body_pane_t1

0x9688,	// (0x000731d7) msg_body_pane_t2_ParamLimits

0x9688,	// (0x000731d7) msg_body_pane_t2

0x969a,	// (0x000731e9) msg_body_pane_t3_ParamLimits

0x969a,	// (0x000731e9) msg_body_pane_t3

0x0002,

0xf492,	// (0x00078fe1) msg_body_pane_t_ParamLimits

0xf492,	// (0x00078fe1) msg_body_pane_t

0x2d1c,	// (0x0006c86b) main_viewer_pane_g1_ParamLimits

0x2d1c,	// (0x0006c86b) main_viewer_pane_g1

0x2d2a,	// (0x0006c879) main_viewer_pane_g2_ParamLimits

0x2d2a,	// (0x0006c879) main_viewer_pane_g2

0x2d38,	// (0x0006c887) main_viewer_pane_g3_ParamLimits

0x2d38,	// (0x0006c887) main_viewer_pane_g3

0x2d47,	// (0x0006c896) main_viewer_pane_g4_ParamLimits

0x2d47,	// (0x0006c896) main_viewer_pane_g4

0x96c4,	// (0x00073213) main_viewer_pane_g5_ParamLimits

0x96c4,	// (0x00073213) main_viewer_pane_g5

0x96c4,	// (0x00073213) main_viewer_pane_g7_ParamLimits

0x96c4,	// (0x00073213) main_viewer_pane_g7

0xc485,	// (0x00075fd4) main_viewer_pane_g8_ParamLimits

0xc485,	// (0x00075fd4) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00078ff1) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00078ff1) main_viewer_pane_g

0xcb66,	// (0x000766b5) viewer_content_pane_ParamLimits

0xcb66,	// (0x000766b5) viewer_content_pane

0x2d83,	// (0x0006c8d2) main_postcard_pane_g1_ParamLimits

0x2d83,	// (0x0006c8d2) main_postcard_pane_g1

0x2d99,	// (0x0006c8e8) main_postcard_pane_g2_ParamLimits

0x2d99,	// (0x0006c8e8) main_postcard_pane_g2

0x2daf,	// (0x0006c8fe) main_postcard_pane_g3_ParamLimits

0x2daf,	// (0x0006c8fe) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00079002) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00079002) main_postcard_pane_g

0x2dc6,	// (0x0006c915) main_postcard_pane_g4

0xde76,	// (0x000779c5) smil_status_volume_pane_g2

0x2e09,	// (0x0006c958) postcard_pane_ParamLimits

0x2e09,	// (0x0006c958) postcard_pane

0xcb74,	// (0x000766c3) postcard_pane_g1_ParamLimits

0xcb74,	// (0x000766c3) postcard_pane_g1

0x2e4b,	// (0x0006c99a) postcard_pane_g2_ParamLimits

0x2e4b,	// (0x0006c99a) postcard_pane_g2

0x2e57,	// (0x0006c9a6) postcard_pane_g3_ParamLimits

0x2e57,	// (0x0006c9a6) postcard_pane_g3

0xcb82,	// (0x000766d1) postcard_pane_g4_ParamLimits

0xcb82,	// (0x000766d1) postcard_pane_g4

0x2e63,	// (0x0006c9b2) postcard_pane_g5_ParamLimits

0x2e63,	// (0x0006c9b2) postcard_pane_g5

0x2e78,	// (0x0006c9c7) postcard_pane_g6_ParamLimits

0x2e78,	// (0x0006c9c7) postcard_pane_g6

0xcb74,	// (0x000766c3) postcard_pane_g7_ParamLimits

0xcb74,	// (0x000766c3) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007900f) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007900f) postcard_pane_g

0x2e8c,	// (0x0006c9db) main_mp2_pane_g1_ParamLimits

0x2e8c,	// (0x0006c9db) main_mp2_pane_g1

0x2e98,	// (0x0006c9e7) main_mp2_pane_g2_ParamLimits

0x2e98,	// (0x0006c9e7) main_mp2_pane_g2

0x2ea4,	// (0x0006c9f3) main_mp2_pane_g3_ParamLimits

0x2ea4,	// (0x0006c9f3) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007901e) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007901e) main_mp2_pane_g

0x2eb0,	// (0x0006c9ff) main_mp2_pane_t1_ParamLimits

0x2eb0,	// (0x0006c9ff) main_mp2_pane_t1

0x2ec5,	// (0x0006ca14) main_mp2_pane_t2_ParamLimits

0x2ec5,	// (0x0006ca14) main_mp2_pane_t2

0x2ed7,	// (0x0006ca26) main_mp2_pane_t3_ParamLimits

0x2ed7,	// (0x0006ca26) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x00079025) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x00079025) main_mp2_pane_t

0xcb90,	// (0x000766df) pec_content_pane_ParamLimits

0xcb90,	// (0x000766df) pec_content_pane

0xc114,	// (0x00075c63) scroll_pane_cp015

0xcba2,	// (0x000766f1) pec_attribute_pane_ParamLimits

0xcba2,	// (0x000766f1) pec_attribute_pane

0x2ee9,	// (0x0006ca38) pec_content_pane_g1_ParamLimits

0x2ee9,	// (0x0006ca38) pec_content_pane_g1

0xcbb2,	// (0x00076701) pec_content_pane_t1_ParamLimits

0xcbb2,	// (0x00076701) pec_content_pane_t1

0xcbc4,	// (0x00076713) pec_content_pane_t2_ParamLimits

0xcbc4,	// (0x00076713) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007902c) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007902c) pec_content_pane_t

0x2ef5,	// (0x0006ca44) list_single_graphic_pane_cp01_ParamLimits

0x2ef5,	// (0x0006ca44) list_single_graphic_pane_cp01

0xb7a8,	// (0x000752f7) bg_popup_sub_pane_cp04

0xcbd6,	// (0x00076725) popup_mup_playback_window_g1

0xcbe2,	// (0x00076731) popup_mup_playback_window_t1

0xcbf7,	// (0x00076746) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00079031) popup_mup_playback_window_t

0xcc2e,	// (0x0007677d) main_image_pane_g1_ParamLimits

0xcc2e,	// (0x0007677d) main_image_pane_g1

0xcc71,	// (0x000767c0) scroll_pane_cp018_ParamLimits

0xcc71,	// (0x000767c0) scroll_pane_cp018

0xcc89,	// (0x000767d8) scroll_pane_cp016_ParamLimits

0xcc89,	// (0x000767d8) scroll_pane_cp016

0x2fc2,	// (0x0006cb11) smil2_image_pane_ParamLimits

0x2fc2,	// (0x0006cb11) smil2_image_pane

0x2ff2,	// (0x0006cb41) smil2_root_pane_ParamLimits

0x2ff2,	// (0x0006cb41) smil2_root_pane

0x302a,	// (0x0006cb79) smil2_text_pane_ParamLimits

0x302a,	// (0x0006cb79) smil2_text_pane

0xb17d,	// (0x00074ccc) bg_list_pane_cp06

0xccc5,	// (0x00076814) grid_radio_pane

0xb17d,	// (0x00074ccc) bg_popup_window_pane_cp06

0xcccd,	// (0x0007681c) main_fmradio_pane_t1

0xc65d,	// (0x000761ac) heading_pane_cp04

0xccdb,	// (0x0007682a) main_fmradio_pane_t2

0xdcac,	// (0x000777fb) popup_cale_lunar_info_window_g1

0xcce9,	// (0x00076838) main_fmradio_pane_t3

0xdcb4,	// (0x00077803) popup_cale_lunar_info_window_g2

0xccf7,	// (0x00076846) main_fmradio_pane_t4

0x0001,

0xcd05,	// (0x00076854) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0007910c) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00079046) main_fmradio_pane_t

0xcd13,	// (0x00076862) wait_bar_pane_cp03

0xcd1b,	// (0x0007686a) cell_fmradio_pane_ParamLimits

0xcd1b,	// (0x0007686a) cell_fmradio_pane

0xcb74,	// (0x000766c3) cell_fmradio_pane_g1_ParamLimits

0xcb74,	// (0x000766c3) cell_fmradio_pane_g1

0xb17d,	// (0x00074ccc) grid_highlight_pane_cp011

0xcd2e,	// (0x0007687d) poc_content_pane_ParamLimits

0xcd2e,	// (0x0007687d) poc_content_pane

0xcd40,	// (0x0007688f) scroll_pane_cp019

0x30aa,	// (0x0006cbf9) popup_call_poc_act_window_ParamLimits

0x30aa,	// (0x0006cbf9) popup_call_poc_act_window

0x30ce,	// (0x0006cc1d) popup_call_poc_inact_window_ParamLimits

0x30ce,	// (0x0006cc1d) popup_call_poc_inact_window

0xf594,	// (0x000790e3) bg_popup_call_poc_act_pane_g

0xdc24,	// (0x00077773) bg_popup_call_poc_inact_pane_g1

0xdc2c,	// (0x0007777b) bg_popup_call_poc_inact_pane_g2

0xcd48,	// (0x00076897) popup_call_poc_act_window_g2

0xdc34,	// (0x00077783) bg_popup_call_poc_inact_pane_g3

0xdc3c,	// (0x0007778b) bg_popup_call_poc_inact_pane_g4

0xdc44,	// (0x00077793) bg_popup_call_poc_inact_pane_g5

0xcd50,	// (0x0007689f) popup_call_poc_act_window_t1_ParamLimits

0xcd50,	// (0x0007689f) popup_call_poc_act_window_t1

0xcd78,	// (0x000768c7) popup_call_poc_act_window_t2_ParamLimits

0xcd78,	// (0x000768c7) popup_call_poc_act_window_t2

0xcda0,	// (0x000768ef) popup_call_poc_act_window_t3_ParamLimits

0xcda0,	// (0x000768ef) popup_call_poc_act_window_t3

0xcdc8,	// (0x00076917) popup_call_poc_act_window_t4_ParamLimits

0xcdc8,	// (0x00076917) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00079051) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00079051) popup_call_poc_act_window_t

0xdc4c,	// (0x0007779b) bg_popup_call_poc_inact_pane_g6

0xdc54,	// (0x000777a3) bg_popup_call_poc_inact_pane_g7

0xdc5c,	// (0x000777ab) bg_popup_call_poc_inact_pane_g8

0xcdda,	// (0x00076929) popup_call_poc_inact_window_g2

0xdc64,	// (0x000777b3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000790d0) bg_popup_call_poc_inact_pane_g

0xcde2,	// (0x00076931) popup_call_poc_inact_window_t1_ParamLimits

0xcde2,	// (0x00076931) popup_call_poc_inact_window_t1

0xcdf7,	// (0x00076946) popup_call_poc_inact_window_t2_ParamLimits

0xcdf7,	// (0x00076946) popup_call_poc_inact_window_t2

0xce0c,	// (0x0007695b) popup_call_poc_inact_window_t3_ParamLimits

0xce0c,	// (0x0007695b) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007905a) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007905a) popup_call_poc_inact_window_t

0xdde9,	// (0x00077938) context_pane_ParamLimits

0x390f,	// (0x0006d45e) signal_pane_ParamLimits

0xbf6b,	// (0x00075aba) main_call2_pane

0x970f,	// (0x0007325e) popup_phob_thumbnail2_window_ParamLimits

0x970f,	// (0x0007325e) popup_phob_thumbnail2_window

0x96ac,	// (0x000731fb) aid_hotspot_pointer_arrow_pane

0x96b4,	// (0x00073203) aid_hotspot_pointer_hand_pane

0x3417,	// (0x0006cf66) phob_pre_status_pane_g5

0x0fac,	// (0x0006aafb) cams_zoom_pane_ParamLimits

0x0fbb,	// (0x0006ab0a) image_vga_pane_ParamLimits

0x0fd5,	// (0x0006ab24) main_camera_pane_g1_ParamLimits

0x0fe7,	// (0x0006ab36) main_camera_pane_g2_ParamLimits

0x0ff7,	// (0x0006ab46) main_camera_pane_g3_ParamLimits

0x1007,	// (0x0006ab56) main_camera_pane_g4_ParamLimits

0x1017,	// (0x0006ab66) main_camera_pane_g5_ParamLimits

0x1027,	// (0x0006ab76) main_camera_pane_g6_ParamLimits

0x1039,	// (0x0006ab88) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00078d59) main_camera_pane_g_ParamLimits

0x1049,	// (0x0006ab98) main_camera_pane_t1_ParamLimits

0x105f,	// (0x0006abae) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00078d6a) main_camera_pane_t_ParamLimits

0xb7a8,	// (0x000752f7) bg_popup_preview_window_pane_cp01_ParamLimits

0xb7a8,	// (0x000752f7) bg_popup_preview_window_pane_cp01

0xce21,	// (0x00076970) popup_phob_thumbnail2_window_g1_ParamLimits

0xce21,	// (0x00076970) popup_phob_thumbnail2_window_g1

0xb17d,	// (0x00074ccc) call2_cli_visual_pane

0x3102,	// (0x0006cc51) popup_call2_audio_conf_window_ParamLimits

0x3102,	// (0x0006cc51) popup_call2_audio_conf_window

0x3122,	// (0x0006cc71) popup_call2_audio_first_window_ParamLimits

0x3122,	// (0x0006cc71) popup_call2_audio_first_window

0x31b8,	// (0x0006cd07) popup_call2_audio_in_window_ParamLimits

0x31b8,	// (0x0006cd07) popup_call2_audio_in_window

0x3200,	// (0x0006cd4f) popup_call2_audio_out_window_ParamLimits

0x3200,	// (0x0006cd4f) popup_call2_audio_out_window

0x326a,	// (0x0006cdb9) popup_call2_audio_second_window_ParamLimits

0x326a,	// (0x0006cdb9) popup_call2_audio_second_window

0x32d0,	// (0x0006ce1f) popup_call2_audio_wait_window_ParamLimits

0x32d0,	// (0x0006ce1f) popup_call2_audio_wait_window

0xb17d,	// (0x00074ccc) bg_popup_call2_act_pane_cp03

0xb78a,	// (0x000752d9) list_conf_pane_cp

0xce2d,	// (0x0007697c) popup_call2_audio_conf_window_t1

0xc6ba,	// (0x00076209) list_single_graphic_popup_conf2_pane_ParamLimits

0xc6ba,	// (0x00076209) list_single_graphic_popup_conf2_pane

0xc6cd,	// (0x0007621c) list_highlight_pane_cp04

0xce3b,	// (0x0007698a) list_single_graphic_popup_conf2_pane_g1

0xc6de,	// (0x0007622d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00079061) list_single_graphic_popup_conf2_pane_g

0xce45,	// (0x00076994) list_single_graphic_popup_conf2_pane_t1

0xce53,	// (0x000769a2) bg_popup_call2_act_pane_cp01_ParamLimits

0xce53,	// (0x000769a2) bg_popup_call2_act_pane_cp01

0xcedd,	// (0x00076a2c) call_type_pane_cp05_ParamLimits

0xcedd,	// (0x00076a2c) call_type_pane_cp05

0xcf31,	// (0x00076a80) popup_call2_audio_second_window_g1_ParamLimits

0xcf31,	// (0x00076a80) popup_call2_audio_second_window_g1

0xcf85,	// (0x00076ad4) popup_call2_audio_second_window_g2_ParamLimits

0xcf85,	// (0x00076ad4) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00079066) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00079066) popup_call2_audio_second_window_g

0xcfea,	// (0x00076b39) popup_call2_audio_second_window_t1_ParamLimits

0xcfea,	// (0x00076b39) popup_call2_audio_second_window_t1

0xd0a5,	// (0x00076bf4) popup_call2_audio_second_window_t2_ParamLimits

0xd0a5,	// (0x00076bf4) popup_call2_audio_second_window_t2

0xd0f8,	// (0x00076c47) popup_call2_audio_second_window_t3_ParamLimits

0xd0f8,	// (0x00076c47) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007906d) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007906d) popup_call2_audio_second_window_t

0xb17d,	// (0x00074ccc) bg_popup_call2_in_pane_cp02

0xb187,	// (0x00074cd6) call_type_pane_cp04

0xb18f,	// (0x00074cde) popup_call2_audio_wait_window_g1

0xb197,	// (0x00074ce6) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00078c48) popup_call2_audio_wait_window_g

0xb19f,	// (0x00074cee) popup_call2_audio_wait_window_t3

0xd1eb,	// (0x00076d3a) bg_popup_call2_act_pane_ParamLimits

0xd1eb,	// (0x00076d3a) bg_popup_call2_act_pane

0xd2ab,	// (0x00076dfa) call_type_pane_cp03_ParamLimits

0xd2ab,	// (0x00076dfa) call_type_pane_cp03

0xd30f,	// (0x00076e5e) popup_call2_audio_first_window_g1_ParamLimits

0xd30f,	// (0x00076e5e) popup_call2_audio_first_window_g1

0xd37f,	// (0x00076ece) popup_call2_audio_first_window_g2_ParamLimits

0xd37f,	// (0x00076ece) popup_call2_audio_first_window_g2

0xca88,	// (0x000765d7) popup_call2_audio_first_window_g3_ParamLimits

0xca88,	// (0x000765d7) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00079076) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00079076) popup_call2_audio_first_window_g

0xd45d,	// (0x00076fac) popup_call2_audio_first_window_t1_ParamLimits

0xd45d,	// (0x00076fac) popup_call2_audio_first_window_t1

0xd560,	// (0x000770af) popup_call2_audio_first_window_t4_ParamLimits

0xd560,	// (0x000770af) popup_call2_audio_first_window_t4

0xd643,	// (0x00077192) popup_call2_audio_first_window_t5_ParamLimits

0xd643,	// (0x00077192) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00079081) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00079081) popup_call2_audio_first_window_t

0xb7a0,	// (0x000752ef) bg_popup_call2_act_pane_g1

0xdcbc,	// (0x0007780b) popup_cale_lunar_info_window_t1

0xdcca,	// (0x00077819) popup_cale_lunar_info_window_t2

0xdcd8,	// (0x00077827) popup_cale_lunar_info_window_t3

0xb17d,	// (0x00074ccc) bg_popup_call2_bubble_pane

0xd750,	// (0x0007729f) bg_popup_call2_in_pane_cp01_ParamLimits

0xd750,	// (0x0007729f) bg_popup_call2_in_pane_cp01

0xae59,	// (0x000749a8) call_type_pane_cp02

0xd798,	// (0x000772e7) popup_call2_audio_out_window_g1_ParamLimits

0xd798,	// (0x000772e7) popup_call2_audio_out_window_g1

0xd7c4,	// (0x00077313) popup_call2_audio_out_window_g2_ParamLimits

0xd7c4,	// (0x00077313) popup_call2_audio_out_window_g2

0xd7ec,	// (0x0007733b) popup_call2_audio_out_window_g3_ParamLimits

0xd7ec,	// (0x0007733b) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007908a) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007908a) popup_call2_audio_out_window_g

0xd827,	// (0x00077376) popup_call2_audio_out_window_t1_ParamLimits

0xd827,	// (0x00077376) popup_call2_audio_out_window_t1

0xd886,	// (0x000773d5) popup_call2_audio_out_window_t2_ParamLimits

0xd886,	// (0x000773d5) popup_call2_audio_out_window_t2

0xd8da,	// (0x00077429) popup_call2_audio_out_window_t3_ParamLimits

0xd8da,	// (0x00077429) popup_call2_audio_out_window_t3

0xd8f0,	// (0x0007743f) popup_call2_audio_out_window_t4_ParamLimits

0xd8f0,	// (0x0007743f) popup_call2_audio_out_window_t4

0xd906,	// (0x00077455) popup_call2_audio_out_window_t5_ParamLimits

0xd906,	// (0x00077455) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00079093) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00079093) popup_call2_audio_out_window_t

0xd96a,	// (0x000774b9) bg_popup_call2_in_pane_ParamLimits

0xd96a,	// (0x000774b9) bg_popup_call2_in_pane

0xd9c6,	// (0x00077515) popup_call2_audio_in_window_g1_ParamLimits

0xd9c6,	// (0x00077515) popup_call2_audio_in_window_g1

0xd9fe,	// (0x0007754d) popup_call2_audio_in_window_g2_ParamLimits

0xd9fe,	// (0x0007754d) popup_call2_audio_in_window_g2

0xda36,	// (0x00077585) popup_call2_audio_in_window_g3_ParamLimits

0xda36,	// (0x00077585) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000790a0) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000790a0) popup_call2_audio_in_window_g

0xda8e,	// (0x000775dd) popup_call2_audio_in_window_t1_ParamLimits

0xda8e,	// (0x000775dd) popup_call2_audio_in_window_t1

0xdb0e,	// (0x0007765d) popup_call2_audio_in_window_t2_ParamLimits

0xdb0e,	// (0x0007765d) popup_call2_audio_in_window_t2

0xdb8e,	// (0x000776dd) popup_call2_audio_in_window_t3_ParamLimits

0xdb8e,	// (0x000776dd) popup_call2_audio_in_window_t3

0xdba8,	// (0x000776f7) popup_call2_audio_in_window_t4_ParamLimits

0xdba8,	// (0x000776f7) popup_call2_audio_in_window_t4

0xdbba,	// (0x00077709) popup_call2_audio_in_window_t5_ParamLimits

0xdbba,	// (0x00077709) popup_call2_audio_in_window_t5

0xdbcf,	// (0x0007771e) popup_call2_audio_in_window_t6_ParamLimits

0xdbcf,	// (0x0007771e) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000790a9) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000790a9) popup_call2_audio_in_window_t

0xb7a0,	// (0x000752ef) bg_popup_call2_in_pane_g1

0xdce6,	// (0x00077835) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x00079111) popup_cale_lunar_info_window_t

0xb7a8,	// (0x000752f7) bg_popup_call2_rect_pane_ParamLimits

0xb7a8,	// (0x000752f7) bg_popup_call2_rect_pane

0xb17d,	// (0x00074ccc) call2_cli_visual_graphic_pane

0xb17d,	// (0x00074ccc) call2_cli_visual_text_pane

0x9736,	// (0x00073285) smil_status_volume_pane_g3

0x0002,

0xb8c2,	// (0x00075411) call2_cli_visual_graphic_pane_g1

0xb8c2,	// (0x00075411) call2_cli_visual_graphic_pane_g2

0xb8c2,	// (0x00075411) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000790b6) call2_cli_visual_graphic_pane_g

0xdbe4,	// (0x00077733) bg_popup_call2_rect_pane_g1

0xbe87,	// (0x000759d6) bg_popup_call2_rect_pane_g2

0xdbec,	// (0x0007773b) bg_popup_call2_rect_pane_g3

0xdbf4,	// (0x00077743) bg_popup_call2_rect_pane_g4

0xdbfc,	// (0x0007774b) bg_popup_call2_rect_pane_g5

0xdc04,	// (0x00077753) bg_popup_call2_rect_pane_g6

0xdc0c,	// (0x0007775b) bg_popup_call2_rect_pane_g7

0xdc14,	// (0x00077763) bg_popup_call2_rect_pane_g8

0xdc1c,	// (0x0007776b) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000790bd) bg_popup_call2_rect_pane_g

0xdc24,	// (0x00077773) bg_popup_call2_bubble_pane_g1

0xdc2c,	// (0x0007777b) bg_popup_call2_bubble_pane_g2

0xdc34,	// (0x00077783) bg_popup_call2_bubble_pane_g3

0xdc3c,	// (0x0007778b) bg_popup_call2_bubble_pane_g4

0xdc44,	// (0x00077793) bg_popup_call2_bubble_pane_g5

0xdc4c,	// (0x0007779b) bg_popup_call2_bubble_pane_g6

0xdc54,	// (0x000777a3) bg_popup_call2_bubble_pane_g7

0xdc5c,	// (0x000777ab) bg_popup_call2_bubble_pane_g8

0xdc64,	// (0x000777b3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000790d0) bg_popup_call2_bubble_pane_g

0x09f1,	// (0x0006a540) aid_cale_week_size_cell_pane

0x1075,	// (0x0006abc4) aid_cams_cif_uncrop_pane_ParamLimits

0x1075,	// (0x0006abc4) aid_cams_cif_uncrop_pane

0x1225,	// (0x0006ad74) aid_cams_size_cell_ParamLimits

0x1225,	// (0x0006ad74) aid_cams_size_cell

0x1239,	// (0x0006ad88) grid_cams_pane_ParamLimits

0x1253,	// (0x0006ada2) linegrid_cams_pane_ParamLimits

0x1450,	// (0x0006af9f) call_video_pane_t1

0x146e,	// (0x0006afbd) call_video_pane_t2

0x0001,

0xf26e,	// (0x00078dbd) call_video_pane_t

0x189c,	// (0x0006b3eb) aid_cale_month_size_cell_pane_ParamLimits

0x189c,	// (0x0006b3eb) aid_cale_month_size_cell_pane

0xf60b,	// (0x0007915a) smil_status_volume_pane_g

0x9743,	// (0x00073292) volume_smil_pane_ParamLimits

0x94a5,	// (0x00072ff4) aid_popup2_width_pane

0x094b,	// (0x0006a49a) cell_qdial_pane_g4_ParamLimits

0x094b,	// (0x0006a49a) cell_qdial_pane_g4

0x2731,	// (0x0006c280) aid_blid_cardinal_pane_ParamLimits

0x273d,	// (0x0006c28c) aid_blid_destination_pane_ParamLimits

0x273d,	// (0x0006c28c) aid_blid_destination_pane

0xb7a8,	// (0x000752f7) bg_popup_call_poc_act_pane_ParamLimits

0xb7a8,	// (0x000752f7) bg_popup_call_poc_act_pane

0xb7a8,	// (0x000752f7) bg_popup_call_poc_inact_pane_ParamLimits

0xb7a8,	// (0x000752f7) bg_popup_call_poc_inact_pane

0xdc6c,	// (0x000777bb) bg_popup_call_poc_act_pane_g1

0xdc74,	// (0x000777c3) bg_popup_call_poc_act_pane_g2

0xdc7c,	// (0x000777cb) bg_popup_call_poc_act_pane_g3

0xdc3c,	// (0x0007778b) bg_popup_call_poc_act_pane_g4

0xdc44,	// (0x00077793) bg_popup_call_poc_act_pane_g5

0xdc84,	// (0x000777d3) bg_popup_call_poc_act_pane_g6

0xdc54,	// (0x000777a3) bg_popup_call_poc_act_pane_g7

0xdc8c,	// (0x000777db) bg_popup_call_poc_act_pane_g8

0xb17d,	// (0x00074ccc) main_usb_pane

0x96ea,	// (0x00073239) popup_cale_lunar_info_window

0x1748,	// (0x0006b297) im_reading_pane_t1_ParamLimits

0xc06c,	// (0x00075bbb) list_im_pane_ParamLimits

0xc07d,	// (0x00075bcc) scroll_pane_cp07_ParamLimits

0xb17d,	// (0x00074ccc) grid_highlight_pane_cp012

0xb7a8,	// (0x000752f7) mup_scale_pane_ParamLimits

0xcb74,	// (0x000766c3) main_usb_pane_g1_ParamLimits

0xcb74,	// (0x000766c3) main_usb_pane_g1

0x332c,	// (0x0006ce7b) main_usb_pane_g2_ParamLimits

0x332c,	// (0x0006ce7b) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000790fa) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000790fa) main_usb_pane_g

0x3342,	// (0x0006ce91) main_usb_pane_t1_ParamLimits

0x3342,	// (0x0006ce91) main_usb_pane_t1

0x3354,	// (0x0006cea3) main_usb_pane_t2_ParamLimits

0x3354,	// (0x0006cea3) main_usb_pane_t2

0x3366,	// (0x0006ceb5) main_usb_pane_t3_ParamLimits

0x3366,	// (0x0006ceb5) main_usb_pane_t3

0x3378,	// (0x0006cec7) main_usb_pane_t4_ParamLimits

0x3378,	// (0x0006cec7) main_usb_pane_t4

0x338a,	// (0x0006ced9) main_usb_pane_t5_ParamLimits

0x338a,	// (0x0006ced9) main_usb_pane_t5

0x339c,	// (0x0006ceeb) main_usb_pane_t6_ParamLimits

0x339c,	// (0x0006ceeb) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000790ff) main_usb_pane_t_ParamLimits

0x26e0,	// (0x0006c22f) aid_text_placing

0x26e9,	// (0x0006c238) main_location2_pane_t1_ParamLimits

0x26fb,	// (0x0006c24a) main_location2_pane_t2_ParamLimits

0x270d,	// (0x0006c25c) main_location2_pane_t3_ParamLimits

0x271f,	// (0x0006c26e) main_location2_pane_t4_ParamLimits

0x271f,	// (0x0006c26e) main_location2_pane_t4

0xf3cf,	// (0x00078f1e) main_location2_pane_t_ParamLimits

0xb7e4,	// (0x00075333) find_pinb_pane_g2_ParamLimits

0xb7e4,	// (0x00075333) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00078c6e) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00078c6e) find_pinb_pane_g

0xb7f0,	// (0x0007533f) find_pinb_pane_t1_ParamLimits

0xb802,	// (0x00075351) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00078c73) find_pinb_pane_t_ParamLimits

0xb17d,	// (0x00074ccc) main_call3_pane

0x1d87,	// (0x0006b8d6) cale_month_day_heading_pane_t1_ParamLimits

0x1e0d,	// (0x0006b95c) cale_month_day_heading_pane_t2_ParamLimits

0x1e86,	// (0x0006b9d5) cale_month_day_heading_pane_t3_ParamLimits

0x1eff,	// (0x0006ba4e) cale_month_day_heading_pane_t4_ParamLimits

0x1f80,	// (0x0006bacf) cale_month_day_heading_pane_t5_ParamLimits

0x2009,	// (0x0006bb58) cale_month_day_heading_pane_t6_ParamLimits

0x2092,	// (0x0006bbe1) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x00078df5) cale_month_day_heading_pane_t_ParamLimits

0xc2c7,	// (0x00075e16) smil_status_volume_pane

0x2e27,	// (0x0006c976) postcard_address_pane_ParamLimits

0x2e27,	// (0x0006c976) postcard_address_pane

0x2e39,	// (0x0006c988) postcard_message_pane_ParamLimits

0x2e39,	// (0x0006c988) postcard_message_pane

0x330a,	// (0x0006ce59) call2_cli_visual_pane_t1_ParamLimits

0x330a,	// (0x0006ce59) call2_cli_visual_pane_t1

0x3b3c,	// (0x0006d68b) postcard_message_pane_t1_ParamLimits

0x3b3c,	// (0x0006d68b) postcard_message_pane_t1

0x3b25,	// (0x0006d674) postcard_address_pane_t1_ParamLimits

0x3b25,	// (0x0006d674) postcard_address_pane_t1

0x3b11,	// (0x0006d660) popup_call3_audio_in_window_ParamLimits

0x3b11,	// (0x0006d660) popup_call3_audio_in_window

0x399c,	// (0x0006d4eb) bg_popup_call3_in_pane_ParamLimits

0x399c,	// (0x0006d4eb) bg_popup_call3_in_pane

0x3a12,	// (0x0006d561) popup_call3_audio_in_window_g1_ParamLimits

0x3a12,	// (0x0006d561) popup_call3_audio_in_window_g1

0x3a32,	// (0x0006d581) popup_call3_audio_in_window_g2_ParamLimits

0x3a32,	// (0x0006d581) popup_call3_audio_in_window_g2

0x3a52,	// (0x0006d5a1) popup_call3_audio_in_window_g3_ParamLimits

0x3a52,	// (0x0006d5a1) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x00079161) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x00079161) popup_call3_audio_in_window_g

0x3a83,	// (0x0006d5d2) popup_call3_audio_in_window_t1_ParamLimits

0x3a83,	// (0x0006d5d2) popup_call3_audio_in_window_t1

0x3ac1,	// (0x0006d610) popup_call3_audio_in_window_t2_ParamLimits

0x3ac1,	// (0x0006d610) popup_call3_audio_in_window_t2

0x3aff,	// (0x0006d64e) popup_call3_audio_in_window_t3_ParamLimits

0x3aff,	// (0x0006d64e) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0007916a) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0007916a) popup_call3_audio_in_window_t

0xbf6b,	// (0x00075aba) bg_popup_call3_rect_pane

0xdbe4,	// (0x00077733) bg_popup_call3_rect_pane_g1

0xbe87,	// (0x000759d6) bg_popup_call3_rect_pane_g2

0xdbec,	// (0x0007773b) bg_popup_call3_rect_pane_g3

0xdbf4,	// (0x00077743) bg_popup_call3_rect_pane_g4

0xdbfc,	// (0x0007774b) bg_popup_call3_rect_pane_g5

0xdc04,	// (0x00077753) bg_popup_call3_rect_pane_g6

0xdc0c,	// (0x0007775b) bg_popup_call3_rect_pane_g7

0x2a21,	// (0x0006c570) mup_visualizer_osc_pane

0xca96,	// (0x000765e5) mup_visualizer_spec_pane

0x39cc,	// (0x0006d51b) call3_video_qcif_pane_ParamLimits

0x39cc,	// (0x0006d51b) call3_video_qcif_pane

0x39df,	// (0x0006d52e) call3_video_qcif_uncrop_pane_ParamLimits

0x39df,	// (0x0006d52e) call3_video_qcif_uncrop_pane

0x39ed,	// (0x0006d53c) call3_video_subqcif_pane_ParamLimits

0x39ed,	// (0x0006d53c) call3_video_subqcif_pane

0x3a01,	// (0x0006d550) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a01,	// (0x0006d550) call3_video_subqcif_uncrop_pane

0x3a72,	// (0x0006d5c1) popup_call3_audio_in_window_g4_ParamLimits

0x3a72,	// (0x0006d5c1) popup_call3_audio_in_window_g4

0x398b,	// (0x0006d4da) mup_spec_half_pane

0x3994,	// (0x0006d4e3) mup_spec_half_pane_cp

0xde49,	// (0x00077998) mup_osc_middle_pane

0xde52,	// (0x000779a1) mup_visualizer_osc_pane_g1

0x396b,	// (0x0006d4ba) mup_spec_bar_pane_ParamLimits

0x396b,	// (0x0006d4ba) mup_spec_bar_pane

0xde36,	// (0x00077985) mup_spec_bar_pane_g1

0xde40,	// (0x0007798f) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00079155) mup_spec_bar_pane_g

0x09f1,	// (0x0006a540) aid_cale_week_size_cell_pane_ParamLimits

0x0a0b,	// (0x0006a55a) bg_cale_heading_pane_ParamLimits

0xbec4,	// (0x00075a13) bg_cale_pane_cp01_ParamLimits

0x0a23,	// (0x0006a572) cale_week_corner_pane_ParamLimits

0x0a42,	// (0x0006a591) cale_week_day_heading_pane_ParamLimits

0x0a5f,	// (0x0006a5ae) cale_week_scroll_pane_g1_ParamLimits

0x0a72,	// (0x0006a5c1) cale_week_scroll_pane_g2_ParamLimits

0x0a8a,	// (0x0006a5d9) cale_week_scroll_pane_g3_ParamLimits

0x0aa2,	// (0x0006a5f1) cale_week_scroll_pane_g4_ParamLimits

0x0aba,	// (0x0006a609) cale_week_scroll_pane_g5_ParamLimits

0x0ada,	// (0x0006a629) cale_week_scroll_pane_g6_ParamLimits

0x0afa,	// (0x0006a649) cale_week_scroll_pane_g7_ParamLimits

0x0b1a,	// (0x0006a669) cale_week_scroll_pane_g8_ParamLimits

0x0b3e,	// (0x0006a68d) cale_week_scroll_pane_g9_ParamLimits

0x0b56,	// (0x0006a6a5) cale_week_scroll_pane_g10_ParamLimits

0x0b6e,	// (0x0006a6bd) cale_week_scroll_pane_g11_ParamLimits

0x0b86,	// (0x0006a6d5) cale_week_scroll_pane_g12_ParamLimits

0x0b9e,	// (0x0006a6ed) cale_week_scroll_pane_g13_ParamLimits

0x0b9e,	// (0x0006a6ed) cale_week_scroll_pane_g14_ParamLimits

0x0b9e,	// (0x0006a6ed) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00078cff) cale_week_scroll_pane_g_ParamLimits

0x0bda,	// (0x0006a729) cale_week_time_pane_ParamLimits

0x0bfe,	// (0x0006a74d) grid_cale_week_pane_ParamLimits

0xbee1,	// (0x00075a30) listscroll_cale_week_pane_t1

0xbef3,	// (0x00075a42) scroll_pane_cp08_ParamLimits

0x18fc,	// (0x0006b44b) cale_month_corner_pane_ParamLimits

0xc29d,	// (0x00075dec) cale_month_pane_t1

0x1d1a,	// (0x0006b869) cale_month_week_pane_ParamLimits

0x253c,	// (0x0006c08b) popup_call_status_window_g1_ParamLimits

0x2550,	// (0x0006c09f) popup_call_status_window_g2_ParamLimits

0x2564,	// (0x0006c0b3) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00078ea5) popup_call_status_window_g_ParamLimits

0xc64d,	// (0x0007619c) aid_call2_pane

0x2c91,	// (0x0006c7e0) msg_header_pane_g1

0x2e27,	// (0x0006c976) postcard_address2_pane_ParamLimits

0x2e27,	// (0x0006c976) postcard_address2_pane

0x2e39,	// (0x0006c988) postcard_message2_pane_ParamLimits

0x2e39,	// (0x0006c988) postcard_message2_pane

0x391d,	// (0x0006d46c) message2_row_pane_ParamLimits

0x391d,	// (0x0006d46c) message2_row_pane

0x3939,	// (0x0006d488) address2_row_pane_ParamLimits

0x3939,	// (0x0006d488) address2_row_pane

0xde04,	// (0x00077953) postcard_message2_row_pane_g1

0xde0c,	// (0x0007795b) postcard_message2_row_pane_t1

0xde04,	// (0x00077953) address2_row_pane_g1

0xde0c,	// (0x0007795b) address2_row_pane_t1

0x0f2e,	// (0x0006aa7d) aid_size_cell_vorec

0xb17d,	// (0x00074ccc) main_rss_pane

0x394c,	// (0x0006d49b) rss_list_single_pane_ParamLimits

0x394c,	// (0x0006d49b) rss_list_single_pane

0xde1a,	// (0x00077969) rss_list_single_pane_t1

0xde28,	// (0x00077977) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x00079150) rss_list_single_pane_t

0xb17d,	// (0x00074ccc) main_camera2_pane

0xb17d,	// (0x00074ccc) main_video2_pane

0x3bb5,	// (0x0006d704) cams_zoom_pane_cp2_ParamLimits

0x3bb5,	// (0x0006d704) cams_zoom_pane_cp2

0x3bd5,	// (0x0006d724) image2_vga_pane_ParamLimits

0x3bd5,	// (0x0006d724) image2_vga_pane

0x3c26,	// (0x0006d775) main_camera2_pane_g1_ParamLimits

0x3c26,	// (0x0006d775) main_camera2_pane_g1

0x3c46,	// (0x0006d795) main_camera2_pane_g2_ParamLimits

0x3c46,	// (0x0006d795) main_camera2_pane_g2

0x3c66,	// (0x0006d7b5) main_camera2_pane_g3_ParamLimits

0x3c66,	// (0x0006d7b5) main_camera2_pane_g3

0x3c86,	// (0x0006d7d5) main_camera2_pane_g4_ParamLimits

0x3c86,	// (0x0006d7d5) main_camera2_pane_g4

0x3ca6,	// (0x0006d7f5) main_camera2_pane_g5_ParamLimits

0x3ca6,	// (0x0006d7f5) main_camera2_pane_g5

0x3cc6,	// (0x0006d815) main_camera2_pane_g6_ParamLimits

0x3cc6,	// (0x0006d815) main_camera2_pane_g6

0x3ce6,	// (0x0006d835) main_camera2_pane_g7_ParamLimits

0x3ce6,	// (0x0006d835) main_camera2_pane_g7

0x3d06,	// (0x0006d855) main_camera2_pane_g8_ParamLimits

0x3d06,	// (0x0006d855) main_camera2_pane_g8

0x0008,

0xf622,	// (0x00079171) main_camera2_pane_g_ParamLimits

0xf622,	// (0x00079171) main_camera2_pane_g

0x3d46,	// (0x0006d895) main_camera2_pane_t1_ParamLimits

0x3d46,	// (0x0006d895) main_camera2_pane_t1

0x3d7b,	// (0x0006d8ca) main_camera2_pane_t2_ParamLimits

0x3d7b,	// (0x0006d8ca) main_camera2_pane_t2

0x3da1,	// (0x0006d8f0) main_camera2_pane_t3_ParamLimits

0x3da1,	// (0x0006d8f0) main_camera2_pane_t3

0x3dff,	// (0x0006d94e) main_camera2_pane_t4_ParamLimits

0x3dff,	// (0x0006d94e) main_camera2_pane_t4

0x0006,

0xf635,	// (0x00079184) main_camera2_pane_t_ParamLimits

0xf635,	// (0x00079184) main_camera2_pane_t

0x3e91,	// (0x0006d9e0) cams_zoom_pane_cp4_ParamLimits

0x3e91,	// (0x0006d9e0) cams_zoom_pane_cp4

0x3ea7,	// (0x0006d9f6) image2_cif_pane_ParamLimits

0x3ea7,	// (0x0006d9f6) image2_cif_pane

0x3ed2,	// (0x0006da21) image2_subqcif_pane_ParamLimits

0x3ed2,	// (0x0006da21) image2_subqcif_pane

0x3eec,	// (0x0006da3b) main_video2_pane_g1_ParamLimits

0x3eec,	// (0x0006da3b) main_video2_pane_g1

0x3f06,	// (0x0006da55) main_video2_pane_g2_ParamLimits

0x3f06,	// (0x0006da55) main_video2_pane_g2

0x3f1c,	// (0x0006da6b) main_video2_pane_g3_ParamLimits

0x3f1c,	// (0x0006da6b) main_video2_pane_g3

0x3f32,	// (0x0006da81) main_video2_pane_g4_ParamLimits

0x3f32,	// (0x0006da81) main_video2_pane_g4

0x3f48,	// (0x0006da97) main_video2_pane_g5_ParamLimits

0x3f48,	// (0x0006da97) main_video2_pane_g5

0x3f5e,	// (0x0006daad) main_video2_pane_g6_ParamLimits

0x3f5e,	// (0x0006daad) main_video2_pane_g6

0x0005,

0xf644,	// (0x00079193) main_video2_pane_g_ParamLimits

0xf644,	// (0x00079193) main_video2_pane_g

0x3f78,	// (0x0006dac7) main_video2_pane_t1_ParamLimits

0x3f78,	// (0x0006dac7) main_video2_pane_t1

0x3f9c,	// (0x0006daeb) main_video2_pane_t2_ParamLimits

0x3f9c,	// (0x0006daeb) main_video2_pane_t2

0x3fea,	// (0x0006db39) main_video2_pane_t3_ParamLimits

0x3fea,	// (0x0006db39) main_video2_pane_t3

0x0002,

0xf651,	// (0x000791a0) main_video2_pane_t_ParamLimits

0xf651,	// (0x000791a0) main_video2_pane_t

0x3457,	// (0x0006cfa6) call_muted_g2

0x0001,

0xf5f3,	// (0x00079142) call_muted_g

0xb17d,	// (0x00074ccc) main_mup2_pane

0x402e,	// (0x0006db7d) main_mup2_pane_g1_ParamLimits

0x402e,	// (0x0006db7d) main_mup2_pane_g1

0x403a,	// (0x0006db89) main_mup2_pane_g2_ParamLimits

0x403a,	// (0x0006db89) main_mup2_pane_g2

0x97b1,	// (0x00073300) main_mup_pane_g13_cp1

0x97b9,	// (0x00073308) mup_volume_pane_cp1

0x4056,	// (0x0006dba5) main_mup2_pane_g4_ParamLimits

0x4056,	// (0x0006dba5) main_mup2_pane_g4

0x4068,	// (0x0006dbb7) main_mup2_pane_g5_ParamLimits

0x4068,	// (0x0006dbb7) main_mup2_pane_g5

0x407a,	// (0x0006dbc9) main_mup2_pane_g6_ParamLimits

0x407a,	// (0x0006dbc9) main_mup2_pane_g6

0x408c,	// (0x0006dbdb) main_mup2_pane_g7_ParamLimits

0x408c,	// (0x0006dbdb) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000791a7) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000791a7) main_mup2_pane_g

0x40a4,	// (0x0006dbf3) main_mup2_pane_t1_ParamLimits

0x40a4,	// (0x0006dbf3) main_mup2_pane_t1

0x40ba,	// (0x0006dc09) main_mup2_pane_t2_ParamLimits

0x40ba,	// (0x0006dc09) main_mup2_pane_t2

0x40d0,	// (0x0006dc1f) main_mup2_pane_t3_ParamLimits

0x40d0,	// (0x0006dc1f) main_mup2_pane_t3

0x40e6,	// (0x0006dc35) main_mup2_pane_t4_ParamLimits

0x40e6,	// (0x0006dc35) main_mup2_pane_t4

0x40fe,	// (0x0006dc4d) main_mup2_pane_t5_ParamLimits

0x40fe,	// (0x0006dc4d) main_mup2_pane_t5

0x4116,	// (0x0006dc65) main_mup2_pane_t6_ParamLimits

0x4116,	// (0x0006dc65) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000791b6) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000791b6) main_mup2_pane_t

0x4146,	// (0x0006dc95) mup2_visualizer_pane_ParamLimits

0x4146,	// (0x0006dc95) mup2_visualizer_pane

0x4174,	// (0x0006dcc3) mup_progress_pane_cp_ParamLimits

0x4174,	// (0x0006dcc3) mup_progress_pane_cp

0x979c,	// (0x000732eb) mup_volume_pane_cp_ParamLimits

0x979c,	// (0x000732eb) mup_volume_pane_cp

0x4188,	// (0x0006dcd7) mup2_visualizer_pane_g1_ParamLimits

0x4188,	// (0x0006dcd7) mup2_visualizer_pane_g1

0xde89,	// (0x000779d8) mup2_visualizer_pane_g2_ParamLimits

0xde89,	// (0x000779d8) mup2_visualizer_pane_g2

0x419f,	// (0x0006dcee) mup2_visualizer_pane_g3_ParamLimits

0x419f,	// (0x0006dcee) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000791c3) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000791c3) mup2_visualizer_pane_g

0xccbd,	// (0x0007680c) aid_size_cell_fmradio

0x3609,	// (0x0006d158) aid_height_parent_landcape

0xc0fb,	// (0x00075c4a) wml_content_pane_cp

0xc103,	// (0x00075c52) wml_tabs_pane

0xc10c,	// (0x00075c5b) popup_wml_miniature_window

0xc114,	// (0x00075c63) scroll_pane_cp021

0xc128,	// (0x00075c77) wml_content_pane_comp8

0xb17d,	// (0x00074ccc) bg_popup_sub_pane_cp05

0xdea7,	// (0x000779f6) popup_wml_miniature_window_g1

0xdeaf,	// (0x000779fe) wml_miniature_view_pane

0x41ab,	// (0x0006dcfa) aid_size_wml_view

0x41b3,	// (0x0006dd02) wml_miniature_view_pane_g1

0x41bc,	// (0x0006dd0b) wml_miniature_view_pane_g2

0x41c5,	// (0x0006dd14) wml_miniature_view_pane_g3

0x41cd,	// (0x0006dd1c) wml_miniature_view_pane_g4

0x41d5,	// (0x0006dd24) wml_miniature_view_pane_g5

0x41dd,	// (0x0006dd2c) wml_miniature_view_pane_g6

0x41e5,	// (0x0006dd34) wml_miniature_view_pane_g7

0x41ed,	// (0x0006dd3c) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000791ca) wml_miniature_view_pane_g

0xdeb7,	// (0x00077a06) background_graphic_ParamLimits

0xdeb7,	// (0x00077a06) background_graphic

0xdec3,	// (0x00077a12) wml_tabs_2_pane

0xdecc,	// (0x00077a1b) wml_tabs_3_pane_ParamLimits

0xdecc,	// (0x00077a1b) wml_tabs_3_pane

0xdede,	// (0x00077a2d) wml_tabs_4_pane_ParamLimits

0xdede,	// (0x00077a2d) wml_tabs_4_pane

0xdef4,	// (0x00077a43) wml_tabs_5_pane_ParamLimits

0xdef4,	// (0x00077a43) wml_tabs_5_pane

0xdf0e,	// (0x00077a5d) wml_tabs_pane_g2_ParamLimits

0xdf0e,	// (0x00077a5d) wml_tabs_pane_g2

0xdf22,	// (0x00077a71) wml_tabs_pane_g3_ParamLimits

0xdf22,	// (0x00077a71) wml_tabs_pane_g3

0x41f5,	// (0x0006dd44) wml_tabs_2_active_pane_ParamLimits

0x41f5,	// (0x0006dd44) wml_tabs_2_active_pane

0x4209,	// (0x0006dd58) wml_tabs_2_passive_pane_ParamLimits

0x4209,	// (0x0006dd58) wml_tabs_2_passive_pane

0x421d,	// (0x0006dd6c) wml_tabs_3_active_pane_cp_ParamLimits

0x421d,	// (0x0006dd6c) wml_tabs_3_active_pane_cp

0x4232,	// (0x0006dd81) wml_tabs_3_passive_pane_ParamLimits

0x4232,	// (0x0006dd81) wml_tabs_3_passive_pane

0x4245,	// (0x0006dd94) wml_tabs_3_passive_pane_cp_ParamLimits

0x4245,	// (0x0006dd94) wml_tabs_3_passive_pane_cp

0x425c,	// (0x0006ddab) tabs_4_active_pane

0x4264,	// (0x0006ddb3) tabs_4_passive_pane

0x426e,	// (0x0006ddbd) tabs_4_passive_pane_cp

0x4276,	// (0x0006ddc5) tabs_4_passive_pane_cp2

0x3324,	// (0x0006ce73) aid_height_text

0x29f7,	// (0x0006c546) mup_volume_cont_pane_ParamLimits

0x29f7,	// (0x0006c546) mup_volume_cont_pane

0x05cf,	// (0x0006a11e) aid_size_cell_pinb

0x05d9,	// (0x0006a128) aid_size_list_pinb

0x4160,	// (0x0006dcaf) mup2_volume_cont_pane_ParamLimits

0x4160,	// (0x0006dcaf) mup2_volume_cont_pane

0x9788,	// (0x000732d7) mup2_volume_cont_pane_g1_ParamLimits

0x9788,	// (0x000732d7) mup2_volume_cont_pane_g1

0x0292,	// (0x00069de1) aid_size_cell_touch_ParamLimits

0x0292,	// (0x00069de1) aid_size_cell_touch

0x04bf,	// (0x0006a00e) touch_pane_ParamLimits

0x04bf,	// (0x0006a00e) touch_pane

0x9519,	// (0x00073068) main_rss2_pane

0xdf3f,	// (0x00077a8e) listscroll_rss2_pane

0xdf48,	// (0x00077a97) rss2_navigation_pane

0xdf50,	// (0x00077a9f) list_rss2_pane

0xc790,	// (0x000762df) scroll_pane_cp22

0xdf58,	// (0x00077aa7) rss2_navigation_pane_g1

0xdf61,	// (0x00077ab0) rss2_navigation_pane_g2

0xdf69,	// (0x00077ab8) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000791db) rss2_navigation_pane_g

0xdf71,	// (0x00077ac0) rss2_navigation_pane_t1

0x4280,	// (0x0006ddcf) rss2_list_single_pane_ParamLimits

0x4280,	// (0x0006ddcf) rss2_list_single_pane

0xdf7f,	// (0x00077ace) rss2_list_single_pane_t2

0xdf8d,	// (0x00077adc) rss2_list_single_pane_t3_ParamLimits

0xdf8d,	// (0x00077adc) rss2_list_single_pane_t3

0xdfaa,	// (0x00077af9) rss2_list_single_pane_t4

0x2346,	// (0x0006be95) smil_status_pane_g1

0x950b,	// (0x0007305a) main_image2_pane_ParamLimits

0x950b,	// (0x0007305a) main_image2_pane

0x3d26,	// (0x0006d875) main_camera2_pane_g9_ParamLimits

0x3d26,	// (0x0006d875) main_camera2_pane_g9

0x3e54,	// (0x0006d9a3) main_camera2_pane_t5_ParamLimits

0x3e54,	// (0x0006d9a3) main_camera2_pane_t5

0x9758,	// (0x000732a7) main_camera2_pane_t6_ParamLimits

0x9758,	// (0x000732a7) main_camera2_pane_t6

0x4295,	// (0x0006dde4) main_image2_pane_g1_ParamLimits

0x4295,	// (0x0006dde4) main_image2_pane_g1

0x3060,	// (0x0006cbaf) smil2_video_pane_ParamLimits

0x3060,	// (0x0006cbaf) smil2_video_pane

0x94c1,	// (0x00073010) aid_zoom_text_primary_cp

0x9501,	// (0x00073050) popup_preview_fixed_window

0xc064,	// (0x00075bb3) im_reading_pane_g1

0x3b9d,	// (0x0006d6ec) cams2_bc_adjust_pane_cp_ParamLimits

0x3b9d,	// (0x0006d6ec) cams2_bc_adjust_pane_cp

0x3e83,	// (0x0006d9d2) cams2_bc_adjust_pane_ParamLimits

0x3e83,	// (0x0006d9d2) cams2_bc_adjust_pane

0x9ce2,	// (0x00073831) cams2_bc_adjust_pane_g1

0x97c1,	// (0x00073310) cams2_slider_pane

0x97ca,	// (0x00073319) cams2_slider_pane_g1

0x97d3,	// (0x00073322) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000791e2) cams2_slider_pane_g

0x06c7,	// (0x0006a216) calc_display_pane_ParamLimits

0x06ef,	// (0x0006a23e) calc_paper_pane_ParamLimits

0x0712,	// (0x0006a261) grid_calc_pane_ParamLimits

0x963f,	// (0x0007318e) popup_clock_digital_window_t1_ParamLimits

0xcc5a,	// (0x000767a9) main_image_pane_t1

0x06a9,	// (0x0006a1f8) aid_size_cell_calc_ParamLimits

0x06a9,	// (0x0006a1f8) aid_size_cell_calc

0x3661,	// (0x0006d1b0) popup_blid_sat_info2_window_ParamLimits

0x3661,	// (0x0006d1b0) popup_blid_sat_info2_window

0xdfc0,	// (0x00077b0f) aid_size_cell_blid

0xdfc8,	// (0x00077b17) bg_popup_window_pane_cp07

0xdfeb,	// (0x00077b3a) grid_popup_blid_pane

0xdff5,	// (0x00077b44) heading_pane_cp05_ParamLimits

0xdff5,	// (0x00077b44) heading_pane_cp05

0xe0bf,	// (0x00077c0e) cell_popup_blid_pane_ParamLimits

0xe0bf,	// (0x00077c0e) cell_popup_blid_pane

0xe0e3,	// (0x00077c32) cell_popup_blid_pane_g1

0xe0eb,	// (0x00077c3a) cell_popup_blid_pane_t1

0x4130,	// (0x0006dc7f) mup2_indicator_pane_ParamLimits

0x4130,	// (0x0006dc7f) mup2_indicator_pane

0xbf6b,	// (0x00075aba) mup2_visualizer_osc_pane

0xde95,	// (0x000779e4) mup2_visualizer_spec_pane_ParamLimits

0xde95,	// (0x000779e4) mup2_visualizer_spec_pane

0x42ab,	// (0x0006ddfa) mup2_spec_half_pane

0x42b4,	// (0x0006de03) mup2_spec_half_pane_cp

0x42bc,	// (0x0006de0b) mup2_spec_bar_pane_ParamLimits

0x42bc,	// (0x0006de0b) mup2_spec_bar_pane

0xde36,	// (0x00077985) mup2_spec_bar_pane_g1

0xde40,	// (0x0007798f) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00079155) mup2_spec_bar_pane_g

0x42dc,	// (0x0006de2b) mup2_osc_middle_pane

0xde52,	// (0x000779a1) mup2_visualizer_osc_pane_g1

0xad8a,	// (0x000748d9) popup_number_entry_window_t1_ParamLimits

0xad9d,	// (0x000748ec) popup_number_entry_window_t2_ParamLimits

0xadaf,	// (0x000748fe) popup_number_entry_window_t3_ParamLimits

0x0511,	// (0x0006a060) popup_number_entry_window_t5_ParamLimits

0x0511,	// (0x0006a060) popup_number_entry_window_t5

0xf0ca,	// (0x00078c19) popup_number_entry_window_t_ParamLimits

0xadc1,	// (0x00074910) text_title_cp2_ParamLimits

0x96bc,	// (0x0007320b) aid_hotspot_pointer_text2_pane

0x96d6,	// (0x00073225) main_viewer_pane_g9_ParamLimits

0x96d6,	// (0x00073225) main_viewer_pane_g9

0xc29d,	// (0x00075dec) cale_month_pane_t1_ParamLimits

0xc2da,	// (0x00075e29) bg_cale_pane_ParamLimits

0xc2f2,	// (0x00075e41) list_cale_pane_ParamLimits

0xc303,	// (0x00075e52) listscroll_cale_day_pane_t1

0xc315,	// (0x00075e64) scroll_pane_cp09_ParamLimits

0x2a29,	// (0x0006c578) main_mup_eq_pane_t1_ParamLimits

0x2a29,	// (0x0006c578) main_mup_eq_pane_t1

0x2a43,	// (0x0006c592) main_mup_eq_pane_t2_ParamLimits

0x2a43,	// (0x0006c592) main_mup_eq_pane_t2

0x2a5d,	// (0x0006c5ac) main_mup_eq_pane_t3_ParamLimits

0x2a5d,	// (0x0006c5ac) main_mup_eq_pane_t3

0x2a79,	// (0x0006c5c8) main_mup_eq_pane_t4_ParamLimits

0x2a79,	// (0x0006c5c8) main_mup_eq_pane_t4

0x2a95,	// (0x0006c5e4) main_mup_eq_pane_t5_ParamLimits

0x2a95,	// (0x0006c5e4) main_mup_eq_pane_t5

0x2ab1,	// (0x0006c600) main_mup_eq_pane_t6_ParamLimits

0x2ab1,	// (0x0006c600) main_mup_eq_pane_t6

0x2ac5,	// (0x0006c614) main_mup_eq_pane_t7_ParamLimits

0x2ac5,	// (0x0006c614) main_mup_eq_pane_t7

0x2ad9,	// (0x0006c628) main_mup_eq_pane_t8_ParamLimits

0x2ad9,	// (0x0006c628) main_mup_eq_pane_t8

0x2aed,	// (0x0006c63c) main_mup_eq_pane_t9_ParamLimits

0x2aed,	// (0x0006c63c) main_mup_eq_pane_t9

0x2b07,	// (0x0006c656) main_mup_eq_pane_t10_ParamLimits

0x2b07,	// (0x0006c656) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00078fa4) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00078fa4) main_mup_eq_pane_t

0x2bb6,	// (0x0006c705) mup_equalizer_pane_cp5_ParamLimits

0x2bca,	// (0x0006c719) mup_equalizer_pane_cp6_ParamLimits

0x2bde,	// (0x0006c72d) mup_equalizer_pane_cp7_ParamLimits

0x9519,	// (0x00073068) main_gallery_pane

0xde5b,	// (0x000779aa) smil2_volume_pane

0xde63,	// (0x000779b2) smil_status_volume_pane_g1_ParamLimits

0xde76,	// (0x000779c5) smil_status_volume_pane_g2_ParamLimits

0x9736,	// (0x00073285) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0007915a) smil_status_volume_pane_g_ParamLimits

0xdfc8,	// (0x00077b17) bg_popup_window_pane_cp07_ParamLimits

0xdfd6,	// (0x00077b25) blid_firmament_pane

0x42e5,	// (0x0006de34) aid_size_cell_gallery_ParamLimits

0x42e5,	// (0x0006de34) aid_size_cell_gallery

0x42fb,	// (0x0006de4a) grid_gallery_pane_ParamLimits

0x42fb,	// (0x0006de4a) grid_gallery_pane

0x4314,	// (0x0006de63) cell_gallery_pane_ParamLimits

0x4314,	// (0x0006de63) cell_gallery_pane

0xe0f9,	// (0x00077c48) bg_cell_gallery_focus_pane_ParamLimits

0xe0f9,	// (0x00077c48) bg_cell_gallery_focus_pane

0xe10b,	// (0x00077c5a) cell_gallery_pane_g1_ParamLimits

0xe10b,	// (0x00077c5a) cell_gallery_pane_g1

0x435d,	// (0x0006deac) cell_gallery_pane_g2_ParamLimits

0x435d,	// (0x0006deac) cell_gallery_pane_g2

0x436a,	// (0x0006deb9) cell_gallery_pane_g3_ParamLimits

0x436a,	// (0x0006deb9) cell_gallery_pane_g3

0xe117,	// (0x00077c66) cell_gallery_pane_g4_ParamLimits

0xe117,	// (0x00077c66) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x00079208) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x00079208) cell_gallery_pane_g

0xe123,	// (0x00077c72) bg_cell_gallery_focus_pane_g1

0xe12b,	// (0x00077c7a) bg_cell_gallery_focus_pane_g2

0xe133,	// (0x00077c82) bg_cell_gallery_focus_pane_g3

0xe13b,	// (0x00077c8a) bg_cell_gallery_focus_pane_g4

0xe143,	// (0x00077c92) bg_cell_gallery_focus_pane_g5

0xe14b,	// (0x00077c9a) bg_cell_gallery_focus_pane_g6

0xe153,	// (0x00077ca2) bg_cell_gallery_focus_pane_g7

0xe15b,	// (0x00077caa) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x00079211) bg_cell_gallery_focus_pane_g

0xe163,	// (0x00077cb2) aid_firma_cardinal

0xe177,	// (0x00077cc6) blid_firmament_pane_t1

0xe18e,	// (0x00077cdd) blid_firmament_pane_t2

0xe1a5,	// (0x00077cf4) blid_firmament_pane_t3

0xe1bc,	// (0x00077d0b) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x00079222) blid_firmament_pane_t

0xe1d3,	// (0x00077d22) blid_sat_info_pane

0xe1e3,	// (0x00077d32) blid_sat_info_pane_g1

0xe1e3,	// (0x00077d32) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0007922b) blid_sat_info_pane_g

0xe1ed,	// (0x00077d3c) blid_sat_info_pane_t1

0xe1fb,	// (0x00077d4a) smil2_volume_content_pane

0xe204,	// (0x00077d53) smil2_volume_pane_g1

0xe20c,	// (0x00077d5b) smil2_volume_content_pane_g1

0xe215,	// (0x00077d64) smil2_volume_content_pane_g2

0xe21e,	// (0x00077d6d) smil2_volume_content_pane_g3

0xe227,	// (0x00077d76) smil2_volume_content_pane_g4

0xe230,	// (0x00077d7f) smil2_volume_content_pane_g5

0xe239,	// (0x00077d88) smil2_volume_content_pane_g6

0xe242,	// (0x00077d91) smil2_volume_content_pane_g7

0xe24b,	// (0x00077d9a) smil2_volume_content_pane_g8

0xe254,	// (0x00077da3) smil2_volume_content_pane_g9

0xe25d,	// (0x00077dac) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x00079230) smil2_volume_content_pane_g

0x0cb2,	// (0x0006a801) cale_week_day_heading_pane_t1_ParamLimits

0x0cdc,	// (0x0006a82b) cale_week_day_heading_pane_t2_ParamLimits

0x0d0b,	// (0x0006a85a) cale_week_day_heading_pane_t3_ParamLimits

0x0d3a,	// (0x0006a889) cale_week_day_heading_pane_t4_ParamLimits

0x0d69,	// (0x0006a8b8) cale_week_day_heading_pane_t5_ParamLimits

0x0da0,	// (0x0006a8ef) cale_week_day_heading_pane_t6_ParamLimits

0x0dd7,	// (0x0006a926) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x00078d20) cale_week_day_heading_pane_t_ParamLimits

0xbf10,	// (0x00075a5f) bg_cale_side_pane_ParamLimits

0x0e01,	// (0x0006a950) cale_week_time_pane_t1_ParamLimits

0x0e1b,	// (0x0006a96a) cale_week_time_pane_t2_ParamLimits

0x0e35,	// (0x0006a984) cale_week_time_pane_t3_ParamLimits

0x0e4f,	// (0x0006a99e) cale_week_time_pane_t4_ParamLimits

0x0e69,	// (0x0006a9b8) cale_week_time_pane_t5_ParamLimits

0x0e83,	// (0x0006a9d2) cale_week_time_pane_t6_ParamLimits

0x0e9d,	// (0x0006a9ec) cale_week_time_pane_t7_ParamLimits

0x0eb7,	// (0x0006aa06) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00078d2f) cale_week_time_pane_t_ParamLimits

0x0ed1,	// (0x0006aa20) cell_cale_week_pane_g2_ParamLimits

0xbf10,	// (0x00075a5f) bg_cale_side_pane_cp01_ParamLimits

0x2123,	// (0x0006bc72) cale_month_week_pane_t1_ParamLimits

0x213c,	// (0x0006bc8b) cale_month_week_pane_t2_ParamLimits

0x2155,	// (0x0006bca4) cale_month_week_pane_t3_ParamLimits

0x216e,	// (0x0006bcbd) cale_month_week_pane_t4_ParamLimits

0x2187,	// (0x0006bcd6) cale_month_week_pane_t5_ParamLimits

0x21a0,	// (0x0006bcef) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x00078e04) cale_month_week_pane_t_ParamLimits

0x95bb,	// (0x0007310a) cell_cale_month_pane_g1_ParamLimits

0x9519,	// (0x00073068) main_cale_event_viewer_pane

0xad60,	// (0x000748af) listscroll_cale_event_viewer_pane

0xe266,	// (0x00077db5) list_cale_ev_pane

0xe26e,	// (0x00077dbd) scroll_pane_cp023

0xe27a,	// (0x00077dc9) field_cale_ev_pane_ParamLimits

0xe27a,	// (0x00077dc9) field_cale_ev_pane

0xe298,	// (0x00077de7) field_cale_ev_content_pane_ParamLimits

0xe298,	// (0x00077de7) field_cale_ev_content_pane

0xe2a4,	// (0x00077df3) field_cale_ev_pane_g1_ParamLimits

0xe2a4,	// (0x00077df3) field_cale_ev_pane_g1

0xe2b0,	// (0x00077dff) field_cale_ev_pane_g2_ParamLimits

0xe2b0,	// (0x00077dff) field_cale_ev_pane_g2

0xe2c8,	// (0x00077e17) field_cale_ev_pane_g3_ParamLimits

0xe2c8,	// (0x00077e17) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x00079245) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x00079245) field_cale_ev_pane_g

0xe2e0,	// (0x00077e2f) field_cale_ev_pane_t1_ParamLimits

0xe2e0,	// (0x00077e2f) field_cale_ev_pane_t1

0xe2f7,	// (0x00077e46) field_cale_ev_content_pane_t1_ParamLimits

0xe2f7,	// (0x00077e46) field_cale_ev_content_pane_t1

0xcb40,	// (0x0007668f) bg_button_pane_cp01

0x09df,	// (0x0006a52e) listscroll_cale_week_pane_ParamLimits

0xbebb,	// (0x00075a0a) popup_toolbar_window_cp01

0xbee1,	// (0x00075a30) listscroll_cale_week_pane_t1_ParamLimits

0x09df,	// (0x0006a52e) listscroll_cale_day_pane_ParamLimits

0xbebb,	// (0x00075a0a) popup_toolbar_window_cp02

0xc303,	// (0x00075e52) listscroll_cale_day_pane_t1_ParamLimits

0x3627,	// (0x0006d176) main_cale_month_pane_ParamLimits

0x9721,	// (0x00073270) popup_toolbar_window_cp03_ParamLimits

0x9721,	// (0x00073270) popup_toolbar_window_cp03

0x2f28,	// (0x0006ca77) main_image_pane_g2_ParamLimits

0x2f28,	// (0x0006ca77) main_image_pane_g2

0x2f39,	// (0x0006ca88) main_image_pane_g3_ParamLimits

0x2f39,	// (0x0006ca88) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00079036) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00079036) main_image_pane_g

0xcc5a,	// (0x000767a9) main_image_pane_t1_ParamLimits

0x2f4a,	// (0x0006ca99) main_image_pane_t2_ParamLimits

0x2f4a,	// (0x0006ca99) main_image_pane_t2

0x2f5c,	// (0x0006caab) main_image_pane_t3_ParamLimits

0x2f5c,	// (0x0006caab) main_image_pane_t3

0x2f84,	// (0x0006cad3) main_image_pane_t4_ParamLimits

0x2f84,	// (0x0006cad3) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007903d) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007903d) main_image_pane_t

0x2fa4,	// (0x0006caf3) popup_image_details_window_cp01

0x2fae,	// (0x0006cafd) popup_toobar_trans_pane_cp01_ParamLimits

0x2fae,	// (0x0006cafd) popup_toobar_trans_pane_cp01

0x3740,	// (0x0006d28f) popup_image_details_window_ParamLimits

0x3740,	// (0x0006d28f) popup_image_details_window

0x96f4,	// (0x00073243) popup_image_focus_window

0x3b57,	// (0x0006d6a6) camera2_autofocus_pane_ParamLimits

0x3b57,	// (0x0006d6a6) camera2_autofocus_pane

0xad60,	// (0x000748af) bg_popup_sub_pane_cp06

0xe315,	// (0x00077e64) popup_image_focus_window_g1

0xe31d,	// (0x00077e6c) popup_image_focus_window_g2

0xe325,	// (0x00077e74) popup_image_focus_window_g3

0xe32d,	// (0x00077e7c) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0007924c) popup_image_focus_window_g

0xe335,	// (0x00077e84) popup_image_focus_window_t1

0xe343,	// (0x00077e92) popup_image_focus_window_t2

0xe353,	// (0x00077ea2) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x00079255) popup_image_focus_window_t

0xe361,	// (0x00077eb0) camera2_autofocus_pane_g1

0xb8e2,	// (0x00075431) bg_tb_trans_pane_cp01

0xe36f,	// (0x00077ebe) popup_image_details_window_g1

0xe382,	// (0x00077ed1) popup_image_details_window_g2

0x0002,

0xf718,	// (0x00079267) popup_image_details_window_g

0xe3ab,	// (0x00077efa) popup_image_details_window_t1

0xe3bd,	// (0x00077f0c) popup_image_details_window_t2

0xe3d6,	// (0x00077f25) popup_image_details_window_t3

0xe3ea,	// (0x00077f39) popup_image_details_window_t4

0xe405,	// (0x00077f54) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0007926e) popup_image_details_window_t

0xb859,	// (0x000753a8) bg_calc_paper_pane_ParamLimits

0x9519,	// (0x00073068) grid_highlight_pane_cp013

0x952b,	// (0x0007307a) list_calc_pane_ParamLimits

0x953d,	// (0x0007308c) scroll_pane_cp024

0xb86d,	// (0x000753bc) bg_calc_display_pane_ParamLimits

0x0810,	// (0x0006a35f) calc_display_pane_t1_ParamLimits

0x0822,	// (0x0006a371) calc_display_pane_t2_ParamLimits

0x9545,	// (0x00073094) calc_display_pane_t3_ParamLimits

0xf151,	// (0x00078ca0) calc_display_pane_t_ParamLimits

0x08dc,	// (0x0006a42b) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x00078cbd) cell_calc_pane_g

0x08e5,	// (0x0006a434) cell_calc_pane_t1

0xb8cc,	// (0x0007541b) grid_highlight_pane_cp02_ParamLimits

0xbe1b,	// (0x0007596a) toolbar_button_pane_cp01_ParamLimits

0xbe1b,	// (0x0007596a) toolbar_button_pane_cp01

0xcc9f,	// (0x000767ee) temp_image_control_pane_ParamLimits

0xcc9f,	// (0x000767ee) temp_image_control_pane

0x950b,	// (0x0007305a) main_mp3_pane

0xe41f,	// (0x00077f6e) temp_image_control_pane_g1_ParamLimits

0xe41f,	// (0x00077f6e) temp_image_control_pane_g1

0xe42d,	// (0x00077f7c) temp_image_control_pane_g2_ParamLimits

0xe42d,	// (0x00077f7c) temp_image_control_pane_g2

0xe43f,	// (0x00077f8e) temp_image_control_pane_g3_ParamLimits

0xe43f,	// (0x00077f8e) temp_image_control_pane_g3

0x43a7,	// (0x0006def6) temp_image_control_pane_g4_ParamLimits

0x43a7,	// (0x0006def6) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x00079279) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x00079279) temp_image_control_pane_g

0xe41f,	// (0x00077f6e) main_mp3_pane_g1

0x43ba,	// (0x0006df09) main_mp3_pane_g2

0x0007,

0xf733,	// (0x00079282) main_mp3_pane_g

0xe482,	// (0x00077fd1) main_mp3_pane_t1

0xbf73,	// (0x00075ac2) main_camera_pane_g8_ParamLimits

0xbf73,	// (0x00075ac2) main_camera_pane_g8

0x11cb,	// (0x0006ad1a) main_video_pane_g7_ParamLimits

0x11cb,	// (0x0006ad1a) main_video_pane_g7

0x9776,	// (0x000732c5) main_camera2_pane_t7_ParamLimits

0x9776,	// (0x000732c5) main_camera2_pane_t7

0xc0bb,	// (0x00075c0a) scroll_pane_cp025_ParamLimits

0xc0bb,	// (0x00075c0a) scroll_pane_cp025

0xc0cf,	// (0x00075c1e) scroll_pane_cp026_ParamLimits

0xc0cf,	// (0x00075c1e) scroll_pane_cp026

0xc0de,	// (0x00075c2d) wml_content_pane_ParamLimits

0x9519,	// (0x00073068) main_touch_calib_pane

0x448e,	// (0x0006dfdd) main_touch_calib_pane_g1

0x44a0,	// (0x0006dfef) main_touch_calib_pane_g2

0x44b2,	// (0x0006e001) main_touch_calib_pane_g3

0x44c4,	// (0x0006e013) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000792a0) main_touch_calib_pane_g

0x44d6,	// (0x0006e025) main_touch_calib_pane_t1

0x44f0,	// (0x0006e03f) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000792a9) main_touch_calib_pane_t

0xc86c,	// (0x000763bb) mup_progress_pane_cp02

0xc8a1,	// (0x000763f0) navi_pane_g1

0xc95c,	// (0x000764ab) navi_pane_mp_t3

0x950b,	// (0x0007305a) main_mp3_pane_ParamLimits

0x38c5,	// (0x0006d414) navi_pane_ParamLimits

0xe41f,	// (0x00077f6e) main_mp3_pane_g1_ParamLimits

0x43ba,	// (0x0006df09) main_mp3_pane_g2_ParamLimits

0x43c8,	// (0x0006df17) main_mp3_pane_g3_ParamLimits

0x43c8,	// (0x0006df17) main_mp3_pane_g3

0x43d6,	// (0x0006df25) main_mp3_pane_g4_ParamLimits

0x43d6,	// (0x0006df25) main_mp3_pane_g4

0xe44f,	// (0x00077f9e) main_mp3_pane_g5_ParamLimits

0xe44f,	// (0x00077f9e) main_mp3_pane_g5

0xe45d,	// (0x00077fac) main_mp3_pane_g6_ParamLimits

0xe45d,	// (0x00077fac) main_mp3_pane_g6

0xe46a,	// (0x00077fb9) main_mp3_pane_g7_ParamLimits

0xe46a,	// (0x00077fb9) main_mp3_pane_g7

0xe476,	// (0x00077fc5) main_mp3_pane_g8_ParamLimits

0xe476,	// (0x00077fc5) main_mp3_pane_g8

0xf733,	// (0x00079282) main_mp3_pane_g_ParamLimits

0x43e2,	// (0x0006df31) main_mp3_pane_t2

0x43f0,	// (0x0006df3f) main_mp3_pane_t3

0xe490,	// (0x00077fdf) main_mp3_pane_t4

0xe49e,	// (0x00077fed) main_mp3_pane_t5

0x0005,

0xf744,	// (0x00079293) main_mp3_pane_t

0xe4ac,	// (0x00077ffb) mup_progress_pane_cp01

0x94c1,	// (0x00073010) aid_zoom_text_secondary2

0xe266,	// (0x00077db5) list_cale_ev2_pane

0xe26e,	// (0x00077dbd) scroll_pane_cp023_ParamLimits

0x4546,	// (0x0006e095) field_cale_ev2_pane_ParamLimits

0x4546,	// (0x0006e095) field_cale_ev2_pane

0x97ed,	// (0x0007333c) field_cale_ev2_pane_g1_ParamLimits

0x97ed,	// (0x0007333c) field_cale_ev2_pane_g1

0x97f9,	// (0x00073348) field_cale_ev2_pane_g2_ParamLimits

0x97f9,	// (0x00073348) field_cale_ev2_pane_g2

0x9cea,	// (0x00073839) field_cale_ev2_pane_g3_ParamLimits

0x9cea,	// (0x00073839) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000792b4) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000792b4) field_cale_ev2_pane_g

0x4566,	// (0x0006e0b5) field_cale_ev2_pane_t1_ParamLimits

0x4566,	// (0x0006e0b5) field_cale_ev2_pane_t1

0x457d,	// (0x0006e0cc) field_cale_ev2_pane_t2_ParamLimits

0x457d,	// (0x0006e0cc) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000792bd) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000792bd) field_cale_ev2_pane_t

0x2ddd,	// (0x0006c92c) main_postcard_pane_g5_ParamLimits

0x2ddd,	// (0x0006c92c) main_postcard_pane_g5

0x2df3,	// (0x0006c942) main_postcard_pane_g6_ParamLimits

0x2df3,	// (0x0006c942) main_postcard_pane_g6

0x0f97,	// (0x0006aae6) camera2_autofocus_pane_cp_ParamLimits

0x0f97,	// (0x0006aae6) camera2_autofocus_pane_cp

0x950b,	// (0x0007305a) main_mup3_pane

0x45b6,	// (0x0006e105) main_mup3_pane_g1_ParamLimits

0x45b6,	// (0x0006e105) main_mup3_pane_g1

0x45d8,	// (0x0006e127) main_mup3_pane_g2_ParamLimits

0x45d8,	// (0x0006e127) main_mup3_pane_g2

0x4656,	// (0x0006e1a5) main_mup3_pane_g3_ParamLimits

0x4656,	// (0x0006e1a5) main_mup3_pane_g3

0x469c,	// (0x0006e1eb) main_mup3_pane_g4_ParamLimits

0x469c,	// (0x0006e1eb) main_mup3_pane_g4

0x46e2,	// (0x0006e231) main_mup3_pane_g5_ParamLimits

0x46e2,	// (0x0006e231) main_mup3_pane_g5

0x4728,	// (0x0006e277) main_mup3_pane_g6_ParamLimits

0x4728,	// (0x0006e277) main_mup3_pane_g6

0xe4d4,	// (0x00078023) main_mup3_pane_g7_ParamLimits

0xe4d4,	// (0x00078023) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000792cd) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000792cd) main_mup3_pane_g

0x47a6,	// (0x0006e2f5) main_mup3_pane_t1_ParamLimits

0x47a6,	// (0x0006e2f5) main_mup3_pane_t1

0x481a,	// (0x0006e369) main_mup3_pane_t2_ParamLimits

0x481a,	// (0x0006e369) main_mup3_pane_t2

0x48ee,	// (0x0006e43d) main_mup3_pane_t4_ParamLimits

0x48ee,	// (0x0006e43d) main_mup3_pane_t4

0x4944,	// (0x0006e493) main_mup3_pane_t5_ParamLimits

0x4944,	// (0x0006e493) main_mup3_pane_t5

0x4a00,	// (0x0006e54f) main_mup3_pane_t6_ParamLimits

0x4a00,	// (0x0006e54f) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000792de) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000792de) main_mup3_pane_t

0x4ab8,	// (0x0006e607) mup3_progress_pane_ParamLimits

0x4ab8,	// (0x0006e607) mup3_progress_pane

0x4b4e,	// (0x0006e69d) popup_mup3_control_window_ParamLimits

0x4b4e,	// (0x0006e69d) popup_mup3_control_window

0xe4e2,	// (0x00078031) popup_mup3_text_window

0x4b80,	// (0x0006e6cf) mup3_progress_pane_t1

0x4b9f,	// (0x0006e6ee) mup3_progress_pane_t2

0xe4ea,	// (0x00078039) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000792eb) mup3_progress_pane_t

0xe507,	// (0x00078056) mup_progress_pane_cp03

0xad60,	// (0x000748af) bg_tb_trans_pane_cp04

0x4bbe,	// (0x0006e70d) mup3_volume_pane

0x4bc6,	// (0x0006e715) popup_mup3_control_window_g1

0x4bcf,	// (0x0006e71e) mup3_volume_pane_g1

0x4bd8,	// (0x0006e727) mup3_volume_pane_g2

0x4be1,	// (0x0006e730) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000792f2) mup3_volume_pane_g

0xad60,	// (0x000748af) bg_tb_trans_pane_cp03

0xe517,	// (0x00078066) popup_mup3_text_window_g1

0xe51f,	// (0x0007806e) popup_mup3_text_window_t1

0xb8b5,	// (0x00075404) list_calc_item_pane_g1_ParamLimits

0xdf36,	// (0x00077a85) mup_volume_pane_cp_g1

0x450a,	// (0x0006e059) main_touch_calib_pane_t3

0x451e,	// (0x0006e06d) main_touch_calib_pane_t4

0x4532,	// (0x0006e081) main_touch_calib_pane_t5

0x949d,	// (0x00072fec) aid_cell_size_toolbar2

0x94a5,	// (0x00072ff4) aid_popup3_width_pane

0x94b1,	// (0x00073000) aid_zoom_text_msg_primary

0x0f76,	// (0x0006aac5) vorec_t7

0xb879,	// (0x000753c8) bg_calc_paper_pane_g1_ParamLimits

0xb885,	// (0x000753d4) bg_calc_paper_pane_g2_ParamLimits

0xb891,	// (0x000753e0) bg_calc_paper_pane_g3_ParamLimits

0xb89d,	// (0x000753ec) bg_calc_paper_pane_g4_ParamLimits

0xb8a9,	// (0x000753f8) bg_calc_paper_pane_g5_ParamLimits

0x0869,	// (0x0006a3b8) bg_calc_paper_pane_g6_ParamLimits

0x0878,	// (0x0006a3c7) bg_calc_paper_pane_g7_ParamLimits

0x0887,	// (0x0006a3d6) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00078ca7) bg_calc_paper_pane_g_ParamLimits

0x089a,	// (0x0006a3e9) calc_bg_paper_pane_g9_ParamLimits

0x10e2,	// (0x0006ac31) image_qvga_pane_ParamLimits

0x10e2,	// (0x0006ac31) image_qvga_pane

0xb7a8,	// (0x000752f7) bg_popup_sub_pane_cp04_ParamLimits

0xcbd6,	// (0x00076725) popup_mup_playback_window_g1_ParamLimits

0xcbe2,	// (0x00076731) popup_mup_playback_window_t1_ParamLimits

0xcbf7,	// (0x00076746) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00079031) popup_mup_playback_window_t_ParamLimits

0x404a,	// (0x0006db99) main_mup2_pane_g3_ParamLimits

0x404a,	// (0x0006db99) main_mup2_pane_g3

0x14f1,	// (0x0006b040) popup_toolbar_window_cp04

0xcfd9,	// (0x00076b28) popup_call2_audio_second_window_g3_ParamLimits

0xcfd9,	// (0x00076b28) popup_call2_audio_second_window_g3

0xd3e3,	// (0x00076f32) popup_call2_audio_first_window_g4_ParamLimits

0xd3e3,	// (0x00076f32) popup_call2_audio_first_window_g4

0xda6e,	// (0x000775bd) popup_call2_audio_in_window_g4_ParamLimits

0xda6e,	// (0x000775bd) popup_call2_audio_in_window_g4

0x2f0a,	// (0x0006ca59) aid_area_sk_bg_cut_ParamLimits

0x2f0a,	// (0x0006ca59) aid_area_sk_bg_cut

0xcc0c,	// (0x0007675b) aid_area_sk_bg_cut_2_ParamLimits

0xcc0c,	// (0x0007675b) aid_area_sk_bg_cut_2

0x434d,	// (0x0006de9c) aid_placing_details_win

0x4355,	// (0x0006dea4) aid_placing_details_win_2

0xe361,	// (0x00077eb0) camera2_autofocus_pane_g1_ParamLimits

0x0458,	// (0x00069fa7) popup_fixed_preview_cale_window_ParamLimits

0x0458,	// (0x00069fa7) popup_fixed_preview_cale_window

0xc9da,	// (0x00076529) navi_slider_pane_g3

0xc9e3,	// (0x00076532) navi_slider_pane_g4

0xc9ec,	// (0x0007653b) navi_slider_pane_g5

0xc9da,	// (0x00076529) navi_slider_pane_g6

0x9665,	// (0x000731b4) navi_slider_pane_g7

0xcb0d,	// (0x0007665c) mup_scale_pane_g3

0xcb16,	// (0x00076665) mup_scale_pane_g4

0xcb1f,	// (0x0007666e) mup_scale_pane_g5

0x2bf2,	// (0x0006c741) mup_scale_pane_g6

0x2bfb,	// (0x0006c74a) mup_scale_pane_g7

0xc9da,	// (0x00076529) cams2_slider_pane_g3

0xdfb8,	// (0x00077b07) cams2_slider_pane_g4

0x97dc,	// (0x0007332b) cams2_slider_pane_g5

0xc9da,	// (0x00076529) cams2_slider_pane_g6

0x97e4,	// (0x00073333) cams2_slider_pane_g7

0xe1e3,	// (0x00077d32) camera2_autofocus_pane_cp_g1

0xddcf,	// (0x0007791e) bg_popup_preview_window_pane_cp02_ParamLimits

0xddcf,	// (0x0007791e) bg_popup_preview_window_pane_cp02

0xe52d,	// (0x0007807c) list_fp_cale_pane_ParamLimits

0xe52d,	// (0x0007807c) list_fp_cale_pane

0xe539,	// (0x00078088) popup_fixed_preview_cale_window_t1_ParamLimits

0xe539,	// (0x00078088) popup_fixed_preview_cale_window_t1

0x4bea,	// (0x0006e739) popup_fixed_preview_cale_window_t2_ParamLimits

0x4bea,	// (0x0006e739) popup_fixed_preview_cale_window_t2

0x4bff,	// (0x0006e74e) popup_fixed_preview_cale_window_t3_ParamLimits

0x4bff,	// (0x0006e74e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000792f9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000792f9) popup_fixed_preview_cale_window_t

0x4c14,	// (0x0006e763) list_single_fp_cale_pane_ParamLimits

0x4c14,	// (0x0006e763) list_single_fp_cale_pane

0xe557,	// (0x000780a6) list_single_fp_cale_pane_g1_ParamLimits

0xe557,	// (0x000780a6) list_single_fp_cale_pane_g1

0xe563,	// (0x000780b2) list_single_fp_cale_pane_g2_ParamLimits

0xe563,	// (0x000780b2) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x00079300) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x00079300) list_single_fp_cale_pane_g

0xe57c,	// (0x000780cb) list_single_fp_cale_pane_t1_ParamLimits

0xe57c,	// (0x000780cb) list_single_fp_cale_pane_t1

0xe58e,	// (0x000780dd) list_single_fp_cale_pane_t2_ParamLimits

0xe58e,	// (0x000780dd) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x00079307) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x00079307) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9519,	// (0x00073068) main_dialer_pane

0x4c29,	// (0x0006e778) aid_cell_size_keypad

0x4c33,	// (0x0006e782) dialer_ne_pane

0x4c3b,	// (0x0006e78a) grid_dialer_command_1_pane

0x4c43,	// (0x0006e792) grid_dialer_command_2_pane

0x4c4b,	// (0x0006e79a) grid_dialer_keypad_pane

0x4c5d,	// (0x0006e7ac) bg_popup_call_pane_cp06_ParamLimits

0x4c5d,	// (0x0006e7ac) bg_popup_call_pane_cp06

0x4c69,	// (0x0006e7b8) dialer_ne_clear_pane_ParamLimits

0x4c69,	// (0x0006e7b8) dialer_ne_clear_pane

0xe5c1,	// (0x00078110) dialer_ne_pane_g1

0xe5c9,	// (0x00078118) dialer_ne_pane_t1_ParamLimits

0xe5c9,	// (0x00078118) dialer_ne_pane_t1

0x4c75,	// (0x0006e7c4) dialer_ne_pane_t2_ParamLimits

0x4c75,	// (0x0006e7c4) dialer_ne_pane_t2

0x4c9f,	// (0x0006e7ee) dialer_ne_pane_t3_ParamLimits

0x4c9f,	// (0x0006e7ee) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0007930c) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0007930c) dialer_ne_pane_t

0x4ccf,	// (0x0006e81e) dialer_ne_pane_t3_copy1_ParamLimits

0x4ccf,	// (0x0006e81e) dialer_ne_pane_t3_copy1

0x4cfe,	// (0x0006e84d) cell_dialer_keypad_pane_ParamLimits

0x4cfe,	// (0x0006e84d) cell_dialer_keypad_pane

0x4d15,	// (0x0006e864) cell_dialer_command_1_pane_ParamLimits

0x4d15,	// (0x0006e864) cell_dialer_command_1_pane

0x4d2b,	// (0x0006e87a) cell_dialer_command_2_pane_ParamLimits

0x4d2b,	// (0x0006e87a) cell_dialer_command_2_pane

0xe5db,	// (0x0007812a) bg_button_pane_cp02_ParamLimits

0xe5db,	// (0x0007812a) bg_button_pane_cp02

0x4d3a,	// (0x0006e889) cell_dialer_keypad_pane_g1_ParamLimits

0x4d3a,	// (0x0006e889) cell_dialer_keypad_pane_g1

0xe5db,	// (0x0007812a) bg_button_pane_cp03_ParamLimits

0xe5db,	// (0x0007812a) bg_button_pane_cp03

0x4d4e,	// (0x0006e89d) cell_dialer_command_1_pane_g1_ParamLimits

0x4d4e,	// (0x0006e89d) cell_dialer_command_1_pane_g1

0xe5e7,	// (0x00078136) bg_button_pane_cp04

0x4d62,	// (0x0006e8b1) cell_dialer_command_2_pane_g1

0xbf6b,	// (0x00075aba) bg_button_pane_cp06

0xe5ef,	// (0x0007813e) dialer_ne_clear_pane_g1

0xc8ad,	// (0x000763fc) navi_pane_g2

0xc8db,	// (0x0007642a) navi_pane_g3

0x0002,

0xf3e5,	// (0x00078f34) navi_pane_g

0xc96a,	// (0x000764b9) navi_pane_mv_g2

0xc991,	// (0x000764e0) navi_pane_mv_g5

0x27b6,	// (0x0006c305) navi_pane_mv_t1

0xb86d,	// (0x000753bc) main_clock2_pane

0x4daf,	// (0x0006e8fe) main_clock2_list_pane_ParamLimits

0x4daf,	// (0x0006e8fe) main_clock2_list_pane

0x4de7,	// (0x0006e936) main_clock2_pane_t1_ParamLimits

0x4de7,	// (0x0006e936) main_clock2_pane_t1

0x4e23,	// (0x0006e972) main_clock2_pane_t2_ParamLimits

0x4e23,	// (0x0006e972) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x00079318) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x00079318) main_clock2_pane_t

0x4ec1,	// (0x0006ea10) popup_clock_analogue_window_cp03_ParamLimits

0x4ec1,	// (0x0006ea10) popup_clock_analogue_window_cp03

0x4ee6,	// (0x0006ea35) popup_clock_digital_window_cp02_ParamLimits

0x4ee6,	// (0x0006ea35) popup_clock_digital_window_cp02

0x4f57,	// (0x0006eaa6) main_clock2_list_single_pane_ParamLimits

0x4f57,	// (0x0006eaa6) main_clock2_list_single_pane

0xbf6b,	// (0x00075aba) list_highlight_pane_cp05

0xe62d,	// (0x0007817c) main_clock2_list_single_pane_t1

0x14f1,	// (0x0006b040) popup_toolbar_window_cp04_ParamLimits

0x4377,	// (0x0006dec6) camera2_autofocus_pane_g2_ParamLimits

0x4377,	// (0x0006dec6) camera2_autofocus_pane_g2

0x4383,	// (0x0006ded2) camera2_autofocus_pane_g3_ParamLimits

0x4383,	// (0x0006ded2) camera2_autofocus_pane_g3

0x438f,	// (0x0006dede) camera2_autofocus_pane_g4_ParamLimits

0x438f,	// (0x0006dede) camera2_autofocus_pane_g4

0x439b,	// (0x0006deea) camera2_autofocus_pane_g5_ParamLimits

0x439b,	// (0x0006deea) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0007925c) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0007925c) camera2_autofocus_pane_g

0xe4b4,	// (0x00078003) camera2_autofocus_pane_cp_g2

0xe4bc,	// (0x0007800b) camera2_autofocus_pane_cp_g3

0xe4c4,	// (0x00078013) camera2_autofocus_pane_cp_g4

0xe4cc,	// (0x0007801b) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000792c2) camera2_autofocus_pane_cp_g

0x4c55,	// (0x0006e7a4) popup_dialer_spcha_window

0xad60,	// (0x000748af) bg_popup_sub_pane_cp07

0xe63b,	// (0x0007818a) list_spcha_pane

0xe643,	// (0x00078192) list_single_spcha_pane_ParamLimits

0xe643,	// (0x00078192) list_single_spcha_pane

0xad60,	// (0x000748af) list_highlight_pane_cp06

0xe654,	// (0x000781a3) list_single_spcha_pane_t1

0xd818,	// (0x00077367) popup_call2_audio_out_window_g4_ParamLimits

0xd818,	// (0x00077367) popup_call2_audio_out_window_g4

0x9519,	// (0x00073068) main_imed2_pane

0x96fc,	// (0x0007324b) popup_imed_adjust2_window

0x3758,	// (0x0006d2a7) popup_imed_trans_window_ParamLimits

0x3758,	// (0x0006d2a7) popup_imed_trans_window

0xe021,	// (0x00077b70) popup_blid_sat_info2_window_t1

0xe02f,	// (0x00077b7e) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000791f1) popup_blid_sat_info2_window_t

0x5000,	// (0x0006eb4f) aid_size_cell_colour_35

0x5020,	// (0x0006eb6f) aid_size_cell_colour_112

0x5040,	// (0x0006eb8f) aid_size_cell_effect

0xdddb,	// (0x0007792a) bg_tb_trans_pane_cp02

0xc40c,	// (0x00075f5b) heading_imed_pane

0x5060,	// (0x0006ebaf) listscroll_imed_pane

0xe662,	// (0x000781b1) heading_imed_pane_g1

0xe66a,	// (0x000781b9) heading_imed_pane_t1

0xe678,	// (0x000781c7) grid_imed_colour_35_pane_ParamLimits

0xe678,	// (0x000781c7) grid_imed_colour_35_pane

0x506c,	// (0x0006ebbb) grid_imed_effect_pane

0xe68f,	// (0x000781de) list_imed_aspect_pane

0x5082,	// (0x0006ebd1) scroll_pane_cp027_ParamLimits

0x5082,	// (0x0006ebd1) scroll_pane_cp027

0x5093,	// (0x0006ebe2) cell_imed_effect_pane_ParamLimits

0x5093,	// (0x0006ebe2) cell_imed_effect_pane

0xe697,	// (0x000781e6) cell_imed_colour_pane_ParamLimits

0xe697,	// (0x000781e6) cell_imed_colour_pane

0xe6d9,	// (0x00078228) cell_imed_colour_pane_g1_ParamLimits

0xe6d9,	// (0x00078228) cell_imed_colour_pane_g1

0xe6ea,	// (0x00078239) hgihlgiht_grid_pane_cp016_ParamLimits

0xe6ea,	// (0x00078239) hgihlgiht_grid_pane_cp016

0x50ba,	// (0x0006ec09) cell_imed_effect_pane_g1

0x50c2,	// (0x0006ec11) grid_highlight_pane_cp017

0xe6fb,	// (0x0007824a) list_imed_single_pane_ParamLimits

0xe6fb,	// (0x0007824a) list_imed_single_pane

0xad60,	// (0x000748af) list_highlight_pane_cp07

0xe710,	// (0x0007825f) list_imed_aspect_pane_comp1_t1

0xdddb,	// (0x0007792a) bg_tb_trans_pane_cp05

0xe732,	// (0x00078281) popup_imed_adjust2_window_g1

0xe759,	// (0x000782a8) popup_imed_adjust2_window_t1

0xe771,	// (0x000782c0) slider_imed_adjust_pane

0xe785,	// (0x000782d4) slider_imed_adjust_pane_g1

0xe795,	// (0x000782e4) slider_imed_adjust_pane_g2

0xe7a5,	// (0x000782f4) slider_imed_adjust_pane_g3

0xe7b6,	// (0x00078305) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x00079335) slider_imed_adjust_pane_g

0x50cb,	// (0x0006ec1a) aid_size_cell_clipart2

0x50d7,	// (0x0006ec26) grid_imed_clipart_pane

0xe7c7,	// (0x00078316) scroll_pane_cp031

0x50e1,	// (0x0006ec30) cell_imed_clipart_pane_ParamLimits

0x50e1,	// (0x0006ec30) cell_imed_clipart_pane

0x5103,	// (0x0006ec52) cell_imed_clipart_pane_g1

0xad60,	// (0x000748af) grid_highlight_pane_cp014

0x4dc4,	// (0x0006e913) main_clock2_pane_g1_ParamLimits

0x4dc4,	// (0x0006e913) main_clock2_pane_g1

0x4f02,	// (0x0006ea51) aid_call2_pane_cp10

0x4f14,	// (0x0006ea63) aid_call_pane_cp10

0xc80e,	// (0x0007635d) popup_clock_analogue_window_cp10_g1

0xc80e,	// (0x0007635d) popup_clock_analogue_window_cp10_g2

0x4f26,	// (0x0006ea75) popup_clock_analogue_window_cp10_g3

0x4f26,	// (0x0006ea75) popup_clock_analogue_window_cp10_g4

0xc80e,	// (0x0007635d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x00079323) popup_clock_analogue_window_cp10_g

0x4f38,	// (0x0006ea87) popup_clock_analogue_window_cp10_t1

0x4f69,	// (0x0006eab8) clock_digital_number_pane_cp10_ParamLimits

0x4f69,	// (0x0006eab8) clock_digital_number_pane_cp10

0x4f81,	// (0x0006ead0) clock_digital_number_pane_cp11_ParamLimits

0x4f81,	// (0x0006ead0) clock_digital_number_pane_cp11

0x4f99,	// (0x0006eae8) clock_digital_number_pane_cp12_ParamLimits

0x4f99,	// (0x0006eae8) clock_digital_number_pane_cp12

0x4fb1,	// (0x0006eb00) clock_digital_number_pane_cp13_ParamLimits

0x4fb1,	// (0x0006eb00) clock_digital_number_pane_cp13

0x4fc9,	// (0x0006eb18) clock_digital_separator_pane_cp10_ParamLimits

0x4fc9,	// (0x0006eb18) clock_digital_separator_pane_cp10

0x4fe1,	// (0x0006eb30) popup_clock_digital_window_cp02_t1_ParamLimits

0x4fe1,	// (0x0006eb30) popup_clock_digital_window_cp02_t1

0xb7a0,	// (0x000752ef) clock_digital_number_pane_cp10_g1

0xb7a0,	// (0x000752ef) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007933e) clock_digital_number_pane_cp10_g

0xb7a0,	// (0x000752ef) clock_digital_separator_pane_cp10_g1

0xb7a0,	// (0x000752ef) clock_digital_separator_pane_g2_cp10

0xc999,	// (0x000764e8) navi_pane_vded_g4

0xc9a2,	// (0x000764f1) navi_pane_vded_g5

0xc9ab,	// (0x000764fa) navi_pane_vded_t1

0x9519,	// (0x00073068) main_vded_pane

0x510c,	// (0x0006ec5b) main_vded_pane_g1

0x5116,	// (0x0006ec65) main_vded_pane_g2

0x5120,	// (0x0006ec6f) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x00079343) main_vded_pane_g

0x512a,	// (0x0006ec79) main_vded_pane_t1

0x5138,	// (0x0006ec87) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007934a) main_vded_pane_t

0x5146,	// (0x0006ec95) vded_slider_pane

0x514e,	// (0x0006ec9d) vded_video_pane

0xe7cf,	// (0x0007831e) vded_video_pane_g1

0x5156,	// (0x0006eca5) vded_video_pane_g2

0xe1e3,	// (0x00077d32) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007934f) vded_video_pane_g

0xe7d9,	// (0x00078328) vded_slider_pane_g1

0xdf36,	// (0x00077a85) vded_slider_pane_g2

0xe7e2,	// (0x00078331) vded_slider_pane_g3

0xe7eb,	// (0x0007833a) vded_slider_pane_g4

0xe7f4,	// (0x00078343) vded_slider_pane_g5

0x0004,

0xf807,	// (0x00079356) vded_slider_pane_g

0x4b36,	// (0x0006e685) mup3_rocker_pane_ParamLimits

0x4b36,	// (0x0006e685) mup3_rocker_pane

0x515f,	// (0x0006ecae) mup3_control_keys_pane_g1

0x5167,	// (0x0006ecb6) mup3_control_keys_pane_g2

0x516f,	// (0x0006ecbe) mup3_control_keys_pane_g3

0x5177,	// (0x0006ecc6) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x00079361) mup3_control_keys_pane_g

0x048f,	// (0x00069fde) popup_toolbar2_fixed_window_cp01_ParamLimits

0x048f,	// (0x00069fde) popup_toolbar2_fixed_window_cp01

0x4b6a,	// (0x0006e6b9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b6a,	// (0x0006e6b9) popup_toolbar2_fixed_window_cp02

0xd14b,	// (0x00076c9a) popup_call2_audio_second_window_t4_ParamLimits

0xd14b,	// (0x00076c9a) popup_call2_audio_second_window_t4

0xd679,	// (0x000771c8) popup_call2_audio_first_window_t6_ParamLimits

0xd679,	// (0x000771c8) popup_call2_audio_first_window_t6

0xd91b,	// (0x0007746a) popup_call2_audio_out_window_t6_ParamLimits

0xd91b,	// (0x0007746a) popup_call2_audio_out_window_t6

0x9519,	// (0x00073068) main_vitu_pane

0x5187,	// (0x0006ecd6) aid_size_cell_itu_ParamLimits

0x5187,	// (0x0006ecd6) aid_size_cell_itu

0xb8e2,	// (0x00075431) bg_popup_window_pane_cp08_ParamLimits

0xb8e2,	// (0x00075431) bg_popup_window_pane_cp08

0x519d,	// (0x0006ecec) field_vitu_entry_pane_ParamLimits

0x519d,	// (0x0006ecec) field_vitu_entry_pane

0x51b4,	// (0x0006ed03) grid_vitu_function_pane_ParamLimits

0x51b4,	// (0x0006ed03) grid_vitu_function_pane

0x51cf,	// (0x0006ed1e) grid_vitu_itu_pane_ParamLimits

0x51cf,	// (0x0006ed1e) grid_vitu_itu_pane

0x51ed,	// (0x0006ed3c) cell_vitu_itu_pane_ParamLimits

0x51ed,	// (0x0006ed3c) cell_vitu_itu_pane

0x520f,	// (0x0006ed5e) cell_vitu_function_pane_ParamLimits

0x520f,	// (0x0006ed5e) cell_vitu_function_pane

0xb8e2,	// (0x00075431) bg_popup_sub_pane_cp08_ParamLimits

0xb8e2,	// (0x00075431) bg_popup_sub_pane_cp08

0x5228,	// (0x0006ed77) field_vitu_entry_pane_t1_ParamLimits

0x5228,	// (0x0006ed77) field_vitu_entry_pane_t1

0xe815,	// (0x00078364) field_vitu_entry_pane_t2_ParamLimits

0xe815,	// (0x00078364) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007936f) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007936f) field_vitu_entry_pane_t

0xe832,	// (0x00078381) bg_button_pane_cp05_ParamLimits

0xe832,	// (0x00078381) bg_button_pane_cp05

0x5246,	// (0x0006ed95) cell_vitu_itu_pane_g1

0x525e,	// (0x0006edad) cell_vitu_itu_pane_t1_ParamLimits

0x525e,	// (0x0006edad) cell_vitu_itu_pane_t1

0x5270,	// (0x0006edbf) cell_vitu_itu_pane_t2_ParamLimits

0x5270,	// (0x0006edbf) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x00079374) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x00079374) cell_vitu_itu_pane_t

0xe840,	// (0x0007838f) bg_button_pane_cp07

0x52a5,	// (0x0006edf4) cell_vitu_function_pane_g1

0x9523,	// (0x00073072) main_calc_pane_g1

0x02b6,	// (0x00069e05) aid_visual_content_pane

0x9519,	// (0x00073068) main_vradio_pane

0x52ae,	// (0x0006edfd) main_vradio_pane_g1_ParamLimits

0x52ae,	// (0x0006edfd) main_vradio_pane_g1

0xe84a,	// (0x00078399) main_vradio_pane_g2_ParamLimits

0xe84a,	// (0x00078399) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007937b) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007937b) main_vradio_pane_g

0x52c7,	// (0x0006ee16) main_vradio_pane_t1_ParamLimits

0x52c7,	// (0x0006ee16) main_vradio_pane_t1

0x52dc,	// (0x0006ee2b) main_vradio_pane_t2_ParamLimits

0x52dc,	// (0x0006ee2b) main_vradio_pane_t2

0xe857,	// (0x000783a6) main_vradio_pane_t3_ParamLimits

0xe857,	// (0x000783a6) main_vradio_pane_t3

0x0002,

0xf831,	// (0x00079380) main_vradio_pane_t_ParamLimits

0xf831,	// (0x00079380) main_vradio_pane_t

0x52f1,	// (0x0006ee40) vradio_rocker_control_pane_ParamLimits

0x52f1,	// (0x0006ee40) vradio_rocker_control_pane

0x5303,	// (0x0006ee52) vradio_station_info_pane_ParamLimits

0x5303,	// (0x0006ee52) vradio_station_info_pane

0xe86b,	// (0x000783ba) vradio_frequency_info_pane_ParamLimits

0xe86b,	// (0x000783ba) vradio_frequency_info_pane

0xe1e3,	// (0x00077d32) vradio_station_info_pane_g1

0xe87a,	// (0x000783c9) vradio_station_info_pane_t1_ParamLimits

0xe87a,	// (0x000783c9) vradio_station_info_pane_t1

0xe89c,	// (0x000783eb) vradio_station_info_pane_t2_ParamLimits

0xe89c,	// (0x000783eb) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x00079387) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x00079387) vradio_station_info_pane_t

0xe8ae,	// (0x000783fd) vradio_tuning_pane

0xe8b6,	// (0x00078405) vradio_rocker_control_pane_g1

0xe8be,	// (0x0007840d) vradio_rocker_control_pane_g2

0xe8c6,	// (0x00078415) vradio_rocker_control_pane_g3

0xe8ce,	// (0x0007841d) vradio_rocker_control_pane_g4

0xe8d6,	// (0x00078425) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007938c) vradio_rocker_control_pane_g

0x5315,	// (0x0006ee64) vradio_frequency_info_pane_g1

0xe8de,	// (0x0007842d) vradio_frequency_info_pane_t1_ParamLimits

0xe8de,	// (0x0007842d) vradio_frequency_info_pane_t1

0x531f,	// (0x0006ee6e) vradio_tuning_pane_g1

0x532a,	// (0x0006ee79) vradio_tuning_pane_t1

0x94c9,	// (0x00073018) area_side_right_pane_ParamLimits

0x94c9,	// (0x00073018) area_side_right_pane

0xdd96,	// (0x000778e5) status_small_pane_g1

0xdd9e,	// (0x000778ed) status_small_pane_g2

0xdda7,	// (0x000778f6) status_small_pane_g3

0xddb0,	// (0x000778ff) status_small_pane_g4

0x0003,

0xf5f8,	// (0x00079147) status_small_pane_g

0xddb9,	// (0x00077908) status_small_pane_t1

0x9519,	// (0x00073068) main_video3_pane

0xe8f2,	// (0x00078441) cams_zoom_vslider_pane

0xe8fa,	// (0x00078449) image3_wide_pane_ParamLimits

0xe8fa,	// (0x00078449) image3_wide_pane

0xe914,	// (0x00078463) image3_wide_small_pane

0xe920,	// (0x0007846f) main_video3_pane_g1_ParamLimits

0xe920,	// (0x0007846f) main_video3_pane_g1

0xe93c,	// (0x0007848b) main_video3_pane_g2_ParamLimits

0xe93c,	// (0x0007848b) main_video3_pane_g2

0x0001,

0xf848,	// (0x00079397) main_video3_pane_g_ParamLimits

0xf848,	// (0x00079397) main_video3_pane_g

0xe958,	// (0x000784a7) main_video3_pane_t1_ParamLimits

0xe958,	// (0x000784a7) main_video3_pane_t1

0xe983,	// (0x000784d2) main_video3_pane_t2_ParamLimits

0xe983,	// (0x000784d2) main_video3_pane_t2

0xe9ae,	// (0x000784fd) main_video3_pane_t3_ParamLimits

0xe9ae,	// (0x000784fd) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007939c) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007939c) main_video3_pane_t

0xe9db,	// (0x0007852a) cams_zoom_vslider_pane_g1

0xe9e4,	// (0x00078533) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000793a3) cams_zoom_vslider_pane_g

0xe9ec,	// (0x0007853b) small_slider_vertical_pane

0xe1e3,	// (0x00077d32) small_slider_vertical_pane_g1

0xe1e3,	// (0x00077d32) small_slider_vertical_pane_g2

0xe9f4,	// (0x00078543) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000793a8) small_slider_vertical_pane_g

0x9519,	// (0x00073068) main_hwr_training_pane

0xe9fd,	// (0x0007854c) hwr_training_instruct_pane_ParamLimits

0xe9fd,	// (0x0007854c) hwr_training_instruct_pane

0x5339,	// (0x0006ee88) hwr_training_navi_pane_ParamLimits

0x5339,	// (0x0006ee88) hwr_training_navi_pane

0x5358,	// (0x0006eea7) hwr_training_write_pane_ParamLimits

0x5358,	// (0x0006eea7) hwr_training_write_pane

0xad60,	// (0x000748af) bg_frame_shadow_pane

0xea34,	// (0x00078583) hwr_training_write_pane_g1

0xea3c,	// (0x0007858b) hwr_training_write_pane_g2

0xea44,	// (0x00078593) hwr_training_write_pane_g3

0xea4c,	// (0x0007859b) hwr_training_write_pane_g4

0xea54,	// (0x000785a3) hwr_training_write_pane_g5

0xea5c,	// (0x000785ab) hwr_training_write_pane_g6

0xea64,	// (0x000785b3) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000793af) hwr_training_write_pane_g

0x9811,	// (0x00073360) hwr_training_navi_pane_g1_ParamLimits

0x9811,	// (0x00073360) hwr_training_navi_pane_g1

0x9823,	// (0x00073372) hwr_training_navi_pane_g2_ParamLimits

0x9823,	// (0x00073372) hwr_training_navi_pane_g2

0x9835,	// (0x00073384) hwr_training_navi_pane_g3_ParamLimits

0x9835,	// (0x00073384) hwr_training_navi_pane_g3

0x9845,	// (0x00073394) hwr_training_navi_pane_g4_ParamLimits

0x9845,	// (0x00073394) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000793be) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000793be) hwr_training_navi_pane_g

0x9852,	// (0x000733a1) hwr_training_navi_pane_t1

0x53a0,	// (0x0006eeef) list_single_hwr_training_instruct_pane_ParamLimits

0x53a0,	// (0x0006eeef) list_single_hwr_training_instruct_pane

0xea6c,	// (0x000785bb) list_single_hwr_training_instruct_pane_t1

0xe123,	// (0x00077c72) bg_frame_shadow_pane_g1

0xea7b,	// (0x000785ca) bg_frame_shadow_pane_g2

0xea83,	// (0x000785d2) bg_frame_shadow_pane_g3

0xea8b,	// (0x000785da) bg_frame_shadow_pane_g4

0xea93,	// (0x000785e2) bg_frame_shadow_pane_g5

0xea9b,	// (0x000785ea) bg_frame_shadow_pane_g6

0xeaa3,	// (0x000785f2) bg_frame_shadow_pane_g7

0xbe5f,	// (0x000759ae) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000793c9) bg_frame_shadow_pane_g

0x9519,	// (0x00073068) main_video_tele_dialer_pane

0x53b5,	// (0x0006ef04) aid_size_cell_video_keypad_ParamLimits

0x53b5,	// (0x0006ef04) aid_size_cell_video_keypad

0x53cf,	// (0x0006ef1e) grid_video_dialer_keypad_pane_ParamLimits

0x53cf,	// (0x0006ef1e) grid_video_dialer_keypad_pane

0x541b,	// (0x0006ef6a) video_down_pane_cp_ParamLimits

0x541b,	// (0x0006ef6a) video_down_pane_cp

0x544d,	// (0x0006ef9c) cell_video_dialer_keypad_pane_ParamLimits

0x544d,	// (0x0006ef9c) cell_video_dialer_keypad_pane

0xeaab,	// (0x000785fa) bg_button_pane_cp08_ParamLimits

0xeaab,	// (0x000785fa) bg_button_pane_cp08

0x546f,	// (0x0006efbe) cell_video_dialer_keypad_pane_g1_ParamLimits

0x546f,	// (0x0006efbe) cell_video_dialer_keypad_pane_g1

0x4b20,	// (0x0006e66f) mup3_rocker2_pane_ParamLimits

0x4b20,	// (0x0006e66f) mup3_rocker2_pane

0xe1e3,	// (0x00077d32) mup3_rocker2_pane_g1

0x3639,	// (0x0006d188) main_dialer2_pane

0x9519,	// (0x00073068) main_mp4_pane

0x9868,	// (0x000733b7) main_mp4_pane_g1_ParamLimits

0x9868,	// (0x000733b7) main_mp4_pane_g1

0x9868,	// (0x000733b7) main_mp4_pane_g2_ParamLimits

0x9868,	// (0x000733b7) main_mp4_pane_g2

0x54a6,	// (0x0006eff5) main_mp4_pane_g3_ParamLimits

0x54a6,	// (0x0006eff5) main_mp4_pane_g3

0x9876,	// (0x000733c5) main_mp4_pane_g4_ParamLimits

0x9876,	// (0x000733c5) main_mp4_pane_g4

0x989e,	// (0x000733ed) main_mp4_pane_g5_ParamLimits

0x989e,	// (0x000733ed) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000793e9) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000793e9) main_mp4_pane_g

0x98ee,	// (0x0007343d) main_mp4_pane_t1_ParamLimits

0x98ee,	// (0x0007343d) main_mp4_pane_t1

0x994a,	// (0x00073499) main_mp4_pane_t2_ParamLimits

0x994a,	// (0x00073499) main_mp4_pane_t2

0xeab7,	// (0x00078606) main_mp4_pane_t3_ParamLimits

0xeab7,	// (0x00078606) main_mp4_pane_t3

0x999c,	// (0x000734eb) main_mp4_pane_t4_ParamLimits

0x999c,	// (0x000734eb) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000793f6) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000793f6) main_mp4_pane_t

0x99e0,	// (0x0007352f) mp4_progress_pane_ParamLimits

0x99e0,	// (0x0007352f) mp4_progress_pane

0x9a2a,	// (0x00073579) mp4_rocker_pane_ParamLimits

0x9a2a,	// (0x00073579) mp4_rocker_pane

0xeadf,	// (0x0007862e) mp4_progress_pane_t1

0xeaf8,	// (0x00078647) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000793ff) mp4_progress_pane_t

0xeb11,	// (0x00078660) mup_progress_pane_cp04

0x9d0e,	// (0x0007385d) mp4_rocker_pane_g1

0x54e2,	// (0x0006f031) aid_cell_size_keypad2_ParamLimits

0x54e2,	// (0x0006f031) aid_cell_size_keypad2

0x54f8,	// (0x0006f047) dialer2_ne_pane_ParamLimits

0x54f8,	// (0x0006f047) dialer2_ne_pane

0x5512,	// (0x0006f061) grid_dialer2_keypad_pane_ParamLimits

0x5512,	// (0x0006f061) grid_dialer2_keypad_pane

0xdfc8,	// (0x00077b17) bg_popup_call_pane_cp07_ParamLimits

0xdfc8,	// (0x00077b17) bg_popup_call_pane_cp07

0x552e,	// (0x0006f07d) dialer2_ne_pane_t1_ParamLimits

0x552e,	// (0x0006f07d) dialer2_ne_pane_t1

0x5569,	// (0x0006f0b8) cell_dialer2_keypad_pane_ParamLimits

0x5569,	// (0x0006f0b8) cell_dialer2_keypad_pane

0xeb2f,	// (0x0007867e) bg_button_pane_pane_cp04_ParamLimits

0xeb2f,	// (0x0007867e) bg_button_pane_pane_cp04

0x558b,	// (0x0006f0da) cell_dialer2_keypad_pane_g1_ParamLimits

0x558b,	// (0x0006f0da) cell_dialer2_keypad_pane_g1

0x13c5,	// (0x0006af14) aid_placing_vt_set_content_ParamLimits

0x13c5,	// (0x0006af14) aid_placing_vt_set_content

0x13ed,	// (0x0006af3c) aid_placing_vt_set_title_ParamLimits

0x13ed,	// (0x0006af3c) aid_placing_vt_set_title

0x9519,	// (0x00073068) main_image3_pane

0x5651,	// (0x0006f1a0) area_side_right_pane_cp01_ParamLimits

0x5651,	// (0x0006f1a0) area_side_right_pane_cp01

0x9868,	// (0x000733b7) main_image3_pane_g1_ParamLimits

0x9868,	// (0x000733b7) main_image3_pane_g1

0x5668,	// (0x0006f1b7) main_image3_pane_g2_ParamLimits

0x5668,	// (0x0006f1b7) main_image3_pane_g2

0x5690,	// (0x0006f1df) main_image3_pane_g3_ParamLimits

0x5690,	// (0x0006f1df) main_image3_pane_g3

0x56ba,	// (0x0006f209) main_image3_pane_g4_ParamLimits

0x56ba,	// (0x0006f209) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007940e) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007940e) main_image3_pane_g

0x56e4,	// (0x0006f233) main_image3_pane_t1_ParamLimits

0x56e4,	// (0x0006f233) main_image3_pane_t1

0x573c,	// (0x0006f28b) main_image3_pane_t2_ParamLimits

0x573c,	// (0x0006f28b) main_image3_pane_t2

0x578e,	// (0x0006f2dd) main_image3_pane_t3_ParamLimits

0x578e,	// (0x0006f2dd) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x00079417) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x00079417) main_image3_pane_t

0xb8e2,	// (0x00075431) grid_sctrl_middle_pane_cp01_ParamLimits

0xb8e2,	// (0x00075431) grid_sctrl_middle_pane_cp01

0x5816,	// (0x0006f365) cell_sctrl_middle_pane_cp01_ParamLimits

0x5816,	// (0x0006f365) cell_sctrl_middle_pane_cp01

0x5833,	// (0x0006f382) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5833,	// (0x0006f382) cell_sctrl_middle_pane_cp01_g1

0x9519,	// (0x00073068) main_call4_pane

0x5849,	// (0x0006f398) aid_size_button_call4_ParamLimits

0x5849,	// (0x0006f398) aid_size_button_call4

0x587a,	// (0x0006f3c9) call4_windows_pane_ParamLimits

0x587a,	// (0x0006f3c9) call4_windows_pane

0x589a,	// (0x0006f3e9) grid_call4_button_pane_ParamLimits

0x589a,	// (0x0006f3e9) grid_call4_button_pane

0xeb3b,	// (0x0007868a) call4_windows_conf_pane

0xeb52,	// (0x000786a1) popup_call4_audio_first_window_ParamLimits

0xeb52,	// (0x000786a1) popup_call4_audio_first_window

0xeb9a,	// (0x000786e9) popup_call4_audio_second_window_ParamLimits

0xeb9a,	// (0x000786e9) popup_call4_audio_second_window

0xebb3,	// (0x00078702) popup_call4_audio_wait_window_ParamLimits

0xebb3,	// (0x00078702) popup_call4_audio_wait_window

0x58c7,	// (0x0006f416) cell_call4_button_pane_ParamLimits

0x58c7,	// (0x0006f416) cell_call4_button_pane

0x58f0,	// (0x0006f43f) bg_button_pane_cp09_ParamLimits

0x58f0,	// (0x0006f43f) bg_button_pane_cp09

0x58fc,	// (0x0006f44b) cell_call4_button_pane_g1_ParamLimits

0x58fc,	// (0x0006f44b) cell_call4_button_pane_g1

0x5922,	// (0x0006f471) cell_call4_button_pane_t1_ParamLimits

0x5922,	// (0x0006f471) cell_call4_button_pane_t1

0xebc9,	// (0x00078718) popup_call4_audio_conf_window_ParamLimits

0xebc9,	// (0x00078718) popup_call4_audio_conf_window

0x4b80,	// (0x0006e6cf) mup3_progress_pane_t1_ParamLimits

0x4b9f,	// (0x0006e6ee) mup3_progress_pane_t2_ParamLimits

0xe4ea,	// (0x00078039) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000792eb) mup3_progress_pane_t_ParamLimits

0xe507,	// (0x00078056) mup_progress_pane_cp03_ParamLimits

0x517f,	// (0x0006ecce) mup3_control_keys_pane_g4_copy1

0x9a0e,	// (0x0007355d) mp4_rocker2_pane_ParamLimits

0x9a0e,	// (0x0007355d) mp4_rocker2_pane

0xebdd,	// (0x0007872c) mp4_rocker2_pane_g1

0xebe5,	// (0x00078734) mp4_rocker2_pane_g2

0x9aae,	// (0x000735fd) mp4_rocker2_pane_g3

0x9ab6,	// (0x00073605) mp4_rocker2_pane_g4

0x9abe,	// (0x0007360d) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00079420) mp4_rocker2_pane_g

0x9519,	// (0x00073068) main_camera4_pane

0x9519,	// (0x00073068) main_video4_pane

0x53e9,	// (0x0006ef38) main_video_tele_dialer_pane_t1_ParamLimits

0x53e9,	// (0x0006ef38) main_video_tele_dialer_pane_t1

0x5402,	// (0x0006ef51) main_video_tele_dialer_pane_t2_ParamLimits

0x5402,	// (0x0006ef51) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000793da) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000793da) main_video_tele_dialer_pane_t

0x5960,	// (0x0006f4af) cam4_autofocus_pane_ParamLimits

0x5960,	// (0x0006f4af) cam4_autofocus_pane

0x5976,	// (0x0006f4c5) cam4_image_uncrop_pane_ParamLimits

0x5976,	// (0x0006f4c5) cam4_image_uncrop_pane

0x5990,	// (0x0006f4df) cam4_indicators_pane_ParamLimits

0x5990,	// (0x0006f4df) cam4_indicators_pane

0x59bb,	// (0x0006f50a) main_camera4_pane_g1_ParamLimits

0x59bb,	// (0x0006f50a) main_camera4_pane_g1

0x59cd,	// (0x0006f51c) main_camera4_pane_g2_ParamLimits

0x59cd,	// (0x0006f51c) main_camera4_pane_g2

0x59e0,	// (0x0006f52f) main_camera4_pane_g3_ParamLimits

0x59e0,	// (0x0006f52f) main_camera4_pane_g3

0x59f3,	// (0x0006f542) main_camera4_pane_g4_ParamLimits

0x59f3,	// (0x0006f542) main_camera4_pane_g4

0x5a06,	// (0x0006f555) main_camera4_pane_g5_ParamLimits

0x5a06,	// (0x0006f555) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007942b) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007942b) main_camera4_pane_g

0x5a2a,	// (0x0006f579) main_camera4_pane_t1_ParamLimits

0x5a2a,	// (0x0006f579) main_camera4_pane_t1

0x9ae2,	// (0x00073631) bg_tb_trans_pane_cp06

0x9af8,	// (0x00073647) cam4_indicators_pane_g1

0x9b09,	// (0x00073658) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x00079446) cam4_indicators_pane_g

0x9b27,	// (0x00073676) cam4_indicators_pane_t1

0x5a8e,	// (0x0006f5dd) main_video4_pane_g1_ParamLimits

0x5a8e,	// (0x0006f5dd) main_video4_pane_g1

0x5a9d,	// (0x0006f5ec) main_video4_pane_g2_ParamLimits

0x5a9d,	// (0x0006f5ec) main_video4_pane_g2

0x5aac,	// (0x0006f5fb) main_video4_pane_g3_ParamLimits

0x5aac,	// (0x0006f5fb) main_video4_pane_g3

0x5abb,	// (0x0006f60a) main_video4_pane_g4_ParamLimits

0x5abb,	// (0x0006f60a) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007944d) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007944d) main_video4_pane_g

0x5ad9,	// (0x0006f628) vid4_indicators_pane_ParamLimits

0x5ad9,	// (0x0006f628) vid4_indicators_pane

0x5b07,	// (0x0006f656) video4_image_uncrop_cif_pane_ParamLimits

0x5b07,	// (0x0006f656) video4_image_uncrop_cif_pane

0x5b21,	// (0x0006f670) video4_image_uncrop_nhd_pane_ParamLimits

0x5b21,	// (0x0006f670) video4_image_uncrop_nhd_pane

0x5976,	// (0x0006f4c5) video4_image_uncrop_vga_pane_ParamLimits

0x5976,	// (0x0006f4c5) video4_image_uncrop_vga_pane

0x950b,	// (0x0007305a) bg_tb_trans_pane_cp07

0x9b53,	// (0x000736a2) vid4_indicators_pane_g1

0x9b67,	// (0x000736b6) vid4_indicators_pane_g2

0x9b7b,	// (0x000736ca) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x00079458) vid4_indicators_pane_g

0x9baa,	// (0x000736f9) vid4_indicators_pane_t1

0x5b35,	// (0x0006f684) cam4_autofocus_pane_g1

0x5b3d,	// (0x0006f68c) cam4_autofocus_pane_g2

0x5b45,	// (0x0006f694) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x00079463) cam4_autofocus_pane_g

0x5b4d,	// (0x0006f69c) cam4_autofocus_pane_g3_copy1

0x5431,	// (0x0006ef80) video_down_pane_cp_t1

0x543f,	// (0x0006ef8e) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000793df) video_down_pane_cp_t

0x950b,	// (0x0007305a) popup_vitu2_window_ParamLimits

0x950b,	// (0x0007305a) popup_vitu2_window

0x5b55,	// (0x0006f6a4) aid_size_cell2_itu2_ParamLimits

0x5b55,	// (0x0006f6a4) aid_size_cell2_itu2

0x5b7b,	// (0x0006f6ca) aid_size_cell_itu2_ParamLimits

0x5b7b,	// (0x0006f6ca) aid_size_cell_itu2

0x5bd7,	// (0x0006f726) bg_popup_window_pane_cp09_ParamLimits

0x5bd7,	// (0x0006f726) bg_popup_window_pane_cp09

0x5be5,	// (0x0006f734) field_vitu2_entry_pane_ParamLimits

0x5be5,	// (0x0006f734) field_vitu2_entry_pane

0x5c0b,	// (0x0006f75a) grid_vitu2_function_pane_ParamLimits

0x5c0b,	// (0x0006f75a) grid_vitu2_function_pane

0x5c5c,	// (0x0006f7ab) grid_vitu2_itu_pane_ParamLimits

0x5c5c,	// (0x0006f7ab) grid_vitu2_itu_pane

0x5cf4,	// (0x0006f843) cell_vitu2_itu_pane_ParamLimits

0x5cf4,	// (0x0006f843) cell_vitu2_itu_pane

0x5d20,	// (0x0006f86f) cell_vitu2_function_pane_ParamLimits

0x5d20,	// (0x0006f86f) cell_vitu2_function_pane

0xebed,	// (0x0007873c) bg_popup_call_pane_cp08_ParamLimits

0xebed,	// (0x0007873c) bg_popup_call_pane_cp08

0xec04,	// (0x00078753) field_vitu2_entry_pane_g1

0xec10,	// (0x0007875f) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007946a) field_vitu2_entry_pane_g

0x5d5f,	// (0x0006f8ae) field_vitu2_entry_pane_t1_ParamLimits

0x5d5f,	// (0x0006f8ae) field_vitu2_entry_pane_t1

0x9d18,	// (0x00073867) field_vitu2_entry_pane_t2_ParamLimits

0x9d18,	// (0x00073867) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x00079471) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x00079471) field_vitu2_entry_pane_t

0x5d8f,	// (0x0006f8de) bg_button_pane_cp010_ParamLimits

0x5d8f,	// (0x0006f8de) bg_button_pane_cp010

0x9bc1,	// (0x00073710) cell_vitu2_itu_pane_g1

0x5dab,	// (0x0006f8fa) cell_vitu2_itu_pane_t1_ParamLimits

0x5dab,	// (0x0006f8fa) cell_vitu2_itu_pane_t1

0x018e,	// (0x00069cdd) cell_vitu2_itu_pane_t2_ParamLimits

0x018e,	// (0x00069cdd) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007947b) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007947b) cell_vitu2_itu_pane_t

0x950b,	// (0x0007305a) bg_button_pane_cp011

0x5e09,	// (0x0006f958) cell_vitu2_function_pane_g1

0x9519,	// (0x00073068) main_myfav_hc_pane

0x57de,	// (0x0006f32d) popup_image3_note_pane_ParamLimits

0x57de,	// (0x0006f32d) popup_image3_note_pane

0x57fa,	// (0x0006f349) popup_image3_tool_bar_pane_ParamLimits

0x57fa,	// (0x0006f349) popup_image3_tool_bar_pane

0x021c,	// (0x00069d6b) cell_vitu2_itu_pane_t3_ParamLimits

0x021c,	// (0x00069d6b) cell_vitu2_itu_pane_t3

0xad60,	// (0x000748af) bg_popup_trans_pane

0xec32,	// (0x00078781) grid_image3_tool_bar_pane

0xec3c,	// (0x0007878b) bg_popup_trans_pane_g1

0xc1c4,	// (0x00075d13) bg_popup_trans_pane_g2

0xec44,	// (0x00078793) bg_popup_trans_pane_g3

0xec4c,	// (0x0007879b) bg_popup_trans_pane_g4

0xec54,	// (0x000787a3) bg_popup_trans_pane_g5

0xec5c,	// (0x000787ab) bg_popup_trans_pane_g6

0xec64,	// (0x000787b3) bg_popup_trans_pane_g7

0xec6c,	// (0x000787bb) bg_popup_trans_pane_g8

0xc1a4,	// (0x00075cf3) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00079482) bg_popup_trans_pane_g

0xec74,	// (0x000787c3) cell_image3_tool_bar_pane_ParamLimits

0xec74,	// (0x000787c3) cell_image3_tool_bar_pane

0xe1e3,	// (0x00077d32) cell_image3_tool_bar_pane_g1

0xad60,	// (0x000748af) bg_popup_trans_pane_cp1

0xec88,	// (0x000787d7) popup_image3_note_pane_t1

0xec96,	// (0x000787e5) popup_image3_note_pane_t2

0xeca4,	// (0x000787f3) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x00079495) popup_image3_note_pane_t

0xecb2,	// (0x00078801) popup_image3_note_pane_t3_copy1

0x5e1d,	// (0x0006f96c) bg_myfav_hc_instruction_pane_ParamLimits

0x5e1d,	// (0x0006f96c) bg_myfav_hc_instruction_pane

0x5e31,	// (0x0006f980) cell_myfav_contact_pane_ParamLimits

0x5e31,	// (0x0006f980) cell_myfav_contact_pane

0x5e4f,	// (0x0006f99e) cell_myfav_contact_pane_cp1_ParamLimits

0x5e4f,	// (0x0006f99e) cell_myfav_contact_pane_cp1

0x5e67,	// (0x0006f9b6) cell_myfav_contact_pane_cp2_ParamLimits

0x5e67,	// (0x0006f9b6) cell_myfav_contact_pane_cp2

0x5e7f,	// (0x0006f9ce) cell_myfav_contact_pane_cp3_ParamLimits

0x5e7f,	// (0x0006f9ce) cell_myfav_contact_pane_cp3

0x5e96,	// (0x0006f9e5) cell_myfav_contact_pane_cp4_ParamLimits

0x5e96,	// (0x0006f9e5) cell_myfav_contact_pane_cp4

0x5eae,	// (0x0006f9fd) cell_myfav_contact_pane_cp5_ParamLimits

0x5eae,	// (0x0006f9fd) cell_myfav_contact_pane_cp5

0x5ec2,	// (0x0006fa11) cell_myfav_contact_pane_cp6_ParamLimits

0x5ec2,	// (0x0006fa11) cell_myfav_contact_pane_cp6

0x5ed8,	// (0x0006fa27) cell_myfav_contact_pane_cp7_ParamLimits

0x5ed8,	// (0x0006fa27) cell_myfav_contact_pane_cp7

0xecc0,	// (0x0007880f) listscroll_gen_pane_cp05

0x5ef2,	// (0x0006fa41) main_myfav_hc_pane_g1_ParamLimits

0x5ef2,	// (0x0006fa41) main_myfav_hc_pane_g1

0x5f0c,	// (0x0006fa5b) main_myfav_hc_pane_g2_ParamLimits

0x5f0c,	// (0x0006fa5b) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007949c) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007949c) main_myfav_hc_pane_g

0x5f3e,	// (0x0006fa8d) main_myfav_hc_pane_t1_ParamLimits

0x5f3e,	// (0x0006fa8d) main_myfav_hc_pane_t1

0xecc9,	// (0x00078818) main_myfav_hc_pane_t2_ParamLimits

0xecc9,	// (0x00078818) main_myfav_hc_pane_t2

0xecdb,	// (0x0007882a) main_myfav_hc_pane_t3_ParamLimits

0xecdb,	// (0x0007882a) main_myfav_hc_pane_t3

0x5f55,	// (0x0006faa4) main_myfav_hc_pane_t4_ParamLimits

0x5f55,	// (0x0006faa4) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000794a3) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000794a3) main_myfav_hc_pane_t

0xe1e3,	// (0x00077d32) bg_myfav_hc_instruction_pane_g1

0xeced,	// (0x0007883c) cell_myfav_contact_pane_g1_ParamLimits

0xeced,	// (0x0007883c) cell_myfav_contact_pane_g1

0xeced,	// (0x0007883c) cell_myfav_contact_pane_g2_ParamLimits

0xeced,	// (0x0007883c) cell_myfav_contact_pane_g2

0xecf9,	// (0x00078848) cell_myfav_contact_pane_g3_ParamLimits

0xecf9,	// (0x00078848) cell_myfav_contact_pane_g3

0xe4d4,	// (0x00078023) cell_myfav_contact_pane_g4_ParamLimits

0xe4d4,	// (0x00078023) cell_myfav_contact_pane_g4

0xed06,	// (0x00078855) cell_myfav_contact_pane_g5_ParamLimits

0xed06,	// (0x00078855) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000794ae) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000794ae) cell_myfav_contact_pane_g

0x5f26,	// (0x0006fa75) main_myfav_hc_pane_g3_ParamLimits

0x5f26,	// (0x0006fa75) main_myfav_hc_pane_g3

0x03f1,	// (0x00069f40) popup_adpt_find_window

0x5f7d,	// (0x0006facc) afind_page_pane_ParamLimits

0x5f7d,	// (0x0006facc) afind_page_pane

0x5f92,	// (0x0006fae1) aid_size_cell_afind_ParamLimits

0x5f92,	// (0x0006fae1) aid_size_cell_afind

0x5fb0,	// (0x0006faff) bg_popup_sub_pane_cp09_ParamLimits

0x5fb0,	// (0x0006faff) bg_popup_sub_pane_cp09

0x5fbd,	// (0x0006fb0c) find_pane_cp01_ParamLimits

0x5fbd,	// (0x0006fb0c) find_pane_cp01

0xed12,	// (0x00078861) grid_afind_control_pane_ParamLimits

0xed12,	// (0x00078861) grid_afind_control_pane

0x5fca,	// (0x0006fb19) grid_afind_pane_ParamLimits

0x5fca,	// (0x0006fb19) grid_afind_pane

0x5fec,	// (0x0006fb3b) cell_afind_pane_ParamLimits

0x5fec,	// (0x0006fb3b) cell_afind_pane

0xe1e3,	// (0x00077d32) afind_page_pane_g1

0x6053,	// (0x0006fba2) afind_page_pane_g2

0x605c,	// (0x0006fbab) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000794b9) afind_page_pane_g

0x6065,	// (0x0006fbb4) afind_page_pane_t1

0xed26,	// (0x00078875) cell_afind_grid_control_pane_ParamLimits

0xed26,	// (0x00078875) cell_afind_grid_control_pane

0xeb2f,	// (0x0007867e) bg_button_pane_cp69_ParamLimits

0xeb2f,	// (0x0007867e) bg_button_pane_cp69

0x6085,	// (0x0006fbd4) cell_afind_pane_g1_ParamLimits

0x6085,	// (0x0006fbd4) cell_afind_pane_g1

0x6092,	// (0x0006fbe1) cell_afind_pane_t1_ParamLimits

0x6092,	// (0x0006fbe1) cell_afind_pane_t1

0xbfbd,	// (0x00075b0c) bg_button_pane_cp72

0xed35,	// (0x00078884) cell_afind_grid_control_pane_g1

0x30e7,	// (0x0006cc36) aid_image_placing_area_ParamLimits

0x30e7,	// (0x0006cc36) aid_image_placing_area

0xe7fd,	// (0x0007834c) field_vitu_entry_pane_g1_ParamLimits

0xe7fd,	// (0x0007834c) field_vitu_entry_pane_g1

0xe809,	// (0x00078358) field_vitu_entry_pane_g2_ParamLimits

0xe809,	// (0x00078358) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007936a) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007936a) field_vitu_entry_pane_g

0x5246,	// (0x0006ed95) cell_vitu_itu_pane_g1_ParamLimits

0x5288,	// (0x0006edd7) cell_vitu_itu_pane_t3_ParamLimits

0x5288,	// (0x0006edd7) cell_vitu_itu_pane_t3

0xeadf,	// (0x0007862e) mp4_progress_pane_t1_ParamLimits

0xeaf8,	// (0x00078647) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000793ff) mp4_progress_pane_t_ParamLimits

0xeb11,	// (0x00078660) mup_progress_pane_cp04_ParamLimits

0x5f69,	// (0x0006fab8) main_myfav_hc_pane_t5_ParamLimits

0x5f69,	// (0x0006fab8) main_myfav_hc_pane_t5

0x94b9,	// (0x00073008) aid_zoom_text_primary

0x03f1,	// (0x00069f40) popup_adpt_find_window_ParamLimits

0x950b,	// (0x0007305a) main_cam_set_pane

0x59a7,	// (0x0006f4f6) cam4_zoom_pane_ParamLimits

0x59a7,	// (0x0006f4f6) cam4_zoom_pane

0x60a4,	// (0x0006fbf3) main_cam_set_pane_g1_ParamLimits

0x60a4,	// (0x0006fbf3) main_cam_set_pane_g1

0x60b2,	// (0x0006fc01) main_cam_set_pane_g2_ParamLimits

0x60b2,	// (0x0006fc01) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000794c0) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000794c0) main_cam_set_pane_g

0x60d3,	// (0x0006fc22) main_cam_set_pane_t1_ParamLimits

0x60d3,	// (0x0006fc22) main_cam_set_pane_t1

0x60ee,	// (0x0006fc3d) main_cset_listscroll_pane_ParamLimits

0x60ee,	// (0x0006fc3d) main_cset_listscroll_pane

0x610e,	// (0x0006fc5d) main_cset_slider_pane_ParamLimits

0x610e,	// (0x0006fc5d) main_cset_slider_pane

0xed46,	// (0x00078895) main_cset_list_pane_ParamLimits

0xed46,	// (0x00078895) main_cset_list_pane

0xed56,	// (0x000788a5) scroll_pane_cp028

0x6134,	// (0x0006fc83) aid_area_touch_slider

0x6150,	// (0x0006fc9f) cset_slider_pane

0x617a,	// (0x0006fcc9) main_cset_slider_pane_g1

0x618f,	// (0x0006fcde) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000794c5) main_cset_slider_pane_g

0xed8f,	// (0x000788de) main_cset_slider_pane_t1

0x624b,	// (0x0006fd9a) main_cset_slider_pane_t2

0x6265,	// (0x0006fdb4) main_cset_slider_pane_t3

0x627f,	// (0x0006fdce) main_cset_slider_pane_t4

0x6299,	// (0x0006fde8) main_cset_slider_pane_t5

0x62b3,	// (0x0006fe02) main_cset_slider_pane_t6

0x62c8,	// (0x0006fe17) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000794ea) main_cset_slider_pane_t

0x63cc,	// (0x0006ff1b) cset_list_set_pane_ParamLimits

0x63cc,	// (0x0006ff1b) cset_list_set_pane

0x63de,	// (0x0006ff2d) aid_position_infowindow_above

0x63e6,	// (0x0006ff35) aid_position_infowindow_below

0x9d35,	// (0x00073884) cset_list_set_pane_g1_ParamLimits

0x9d35,	// (0x00073884) cset_list_set_pane_g1

0x9d41,	// (0x00073890) cset_list_set_pane_g3_ParamLimits

0x9d41,	// (0x00073890) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x00079509) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x00079509) cset_list_set_pane_g

0x9d50,	// (0x0007389f) cset_list_set_pane_t1_ParamLimits

0x9d50,	// (0x0007389f) cset_list_set_pane_t1

0xb8e2,	// (0x00075431) list_highlight_pane_cp021_ParamLimits

0xb8e2,	// (0x00075431) list_highlight_pane_cp021

0xcb0d,	// (0x0007665c) cset_slider_pane_g1

0xcb1f,	// (0x0007666e) cset_slider_pane_g2

0xcb16,	// (0x00076665) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007950e) cset_slider_pane_g

0x9bd3,	// (0x00073722) aid_area_touch_cam4_zoom

0x9bdb,	// (0x0007372a) cam4_zoom_cont_pane

0x9be3,	// (0x00073732) cam4_zoom_pane_g1

0x9beb,	// (0x0007373a) cam4_zoom_pane_g2

0x63ee,	// (0x0006ff3d) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x00079515) cam4_zoom_pane_g

0x9bf3,	// (0x00073742) cam4_zoom_cont_pane_g1

0x9bfc,	// (0x0007374b) cam4_zoom_cont_pane_g2

0x9c05,	// (0x00073754) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007951c) cam4_zoom_cont_pane_g

0x5867,	// (0x0006f3b6) call4_image_pane_ParamLimits

0x5867,	// (0x0006f3b6) call4_image_pane

0xeb3b,	// (0x0007868a) call4_windows_conf_pane_ParamLimits

0xeb78,	// (0x000786c7) popup_call4_audio_in_window_ParamLimits

0xeb78,	// (0x000786c7) popup_call4_audio_in_window

0xad60,	// (0x000748af) bg_popup_call2_act_pane_cp02

0xebc1,	// (0x00078710) call4_list_conf_pane

0xe1e3,	// (0x00077d32) call4_image_pane_g1

0xe1e3,	// (0x00077d32) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0007922b) call4_image_pane_g

0xee2f,	// (0x0007897e) list_single_graphic_popup_conf4_pane_ParamLimits

0xee2f,	// (0x0007897e) list_single_graphic_popup_conf4_pane

0xad60,	// (0x000748af) list_highlight_pane_cp022

0xee42,	// (0x00078991) list_single_graphic_popup_conf4_pane_g1

0xc6de,	// (0x0007622d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00079523) list_single_graphic_popup_conf4_pane_g

0xee4a,	// (0x00078999) list_single_graphic_popup_conf4_pane_t1

0x1511,	// (0x0006b060) popup_vtel_slider_window_ParamLimits

0x1511,	// (0x0006b060) popup_vtel_slider_window

0xeb1d,	// (0x0007866c) dialer2_ne_pane_t2_ParamLimits

0xeb1d,	// (0x0007866c) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00079404) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00079404) dialer2_ne_pane_t

0xdfc8,	// (0x00077b17) bg_popup_sub_pane_cp010_ParamLimits

0xdfc8,	// (0x00077b17) bg_popup_sub_pane_cp010

0x63f6,	// (0x0006ff45) popup_vtel_slider_window_g1_ParamLimits

0x63f6,	// (0x0006ff45) popup_vtel_slider_window_g1

0x6409,	// (0x0006ff58) popup_vtel_slider_window_g2_ParamLimits

0x6409,	// (0x0006ff58) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x00079528) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x00079528) popup_vtel_slider_window_g

0x645f,	// (0x0006ffae) vtel_slider_pane_ParamLimits

0x645f,	// (0x0006ffae) vtel_slider_pane

0x6481,	// (0x0006ffd0) vtel_slider_pane_g1_ParamLimits

0x6481,	// (0x0006ffd0) vtel_slider_pane_g1

0x6495,	// (0x0006ffe4) vtel_slider_pane_g2_ParamLimits

0x6495,	// (0x0006ffe4) vtel_slider_pane_g2

0x64ad,	// (0x0006fffc) vtel_slider_pane_g3_ParamLimits

0x64ad,	// (0x0006fffc) vtel_slider_pane_g3

0x6481,	// (0x0006ffd0) vtel_slider_pane_g4_ParamLimits

0x6481,	// (0x0006ffd0) vtel_slider_pane_g4

0x64c3,	// (0x00070012) vtel_slider_pane_g5_ParamLimits

0x64c3,	// (0x00070012) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00079531) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00079531) vtel_slider_pane_g

0x950b,	// (0x0007305a) main_gallery2_pane

0x5ba7,	// (0x0006f6f6) aid_size_row_itut2_dropdow_list_ParamLimits

0x5ba7,	// (0x0006f6f6) aid_size_row_itut2_dropdow_list

0x5c33,	// (0x0006f782) grid_vitu2_function_top_pane_ParamLimits

0x5c33,	// (0x0006f782) grid_vitu2_function_top_pane

0x5c9d,	// (0x0006f7ec) popup_vitu2_dropdown_list_window_ParamLimits

0x5c9d,	// (0x0006f7ec) popup_vitu2_dropdown_list_window

0x5cc6,	// (0x0006f815) popup_vitu2_match_list_window

0x64e7,	// (0x00070036) cell_vitu2_function_top_pane_ParamLimits

0x64e7,	// (0x00070036) cell_vitu2_function_top_pane

0x64ff,	// (0x0007004e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x64ff,	// (0x0007004e) cell_vitu2_function_top_pane_cp01

0x651b,	// (0x0007006a) cell_vitu2_function_top_wide_pane_ParamLimits

0x651b,	// (0x0007006a) cell_vitu2_function_top_wide_pane

0x950b,	// (0x0007305a) bg_button_pane_cp012

0x6537,	// (0x00070086) cell_vitu2_function_top_pane_g1

0x9c0e,	// (0x0007375d) bg_button_pane_cp013_ParamLimits

0x9c0e,	// (0x0007375d) bg_button_pane_cp013

0x654b,	// (0x0007009a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x654b,	// (0x0007009a) cell_vitu2_function_top_wide_pane_g1

0x950b,	// (0x0007305a) bg_popup_sub_pane_cp20

0x6563,	// (0x000700b2) list_vitu2_match_list_pane

0xec3c,	// (0x0007878b) bg_popup_sub_pane_cp20_g1

0xec44,	// (0x00078793) bg_popup_sub_pane_cp20_g2

0xc1c4,	// (0x00075d13) bg_popup_sub_pane_cp20_g3

0xec4c,	// (0x0007879b) bg_popup_sub_pane_cp20_g4

0xc1a4,	// (0x00075cf3) bg_popup_sub_pane_cp20_g5

0xee60,	// (0x000789af) bg_popup_sub_pane_cp20_g6

0xec5c,	// (0x000787ab) bg_popup_sub_pane_cp20_g7

0xec64,	// (0x000787b3) bg_popup_sub_pane_cp20_g8

0xec6c,	// (0x000787bb) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007953c) bg_popup_sub_pane_cp20_g

0x9c2a,	// (0x00073779) list_vitu2_match_list_item_pane_ParamLimits

0x9c2a,	// (0x00073779) list_vitu2_match_list_item_pane

0x9c3c,	// (0x0007378b) list_vitu2_match_list_item_pane_t1

0x9519,	// (0x00073068) bg_popup_sub_pane_cp21

0x9c4a,	// (0x00073799) grid_vitu2_dropdown_list_pane

0x65d1,	// (0x00070120) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x65d1,	// (0x00070120) cell_vitu2_dropdown_list_char_pane

0x65f2,	// (0x00070141) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x65f2,	// (0x00070141) cell_vitu2_dropdown_list_ctrl_pane

0xee68,	// (0x000789b7) cell_vitu2_dropdown_list_char_pane_g1

0xee71,	// (0x000789c0) cell_vitu2_dropdown_list_char_pane_g2

0xee7a,	// (0x000789c9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00079559) cell_vitu2_dropdown_list_char_pane_g

0x661e,	// (0x0007016d) cell_vitu2_dropdown_list_char_pane_t1

0x662c,	// (0x0007017b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x662c,	// (0x0007017b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6639,	// (0x00070188) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6639,	// (0x00070188) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6646,	// (0x00070195) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6646,	// (0x00070195) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6653,	// (0x000701a2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6653,	// (0x000701a2) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9ae2,	// (0x00073631) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9ae2,	// (0x00073631) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x00079560) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x00079560) cell_vitu2_dropdown_list_ctrl_pane_g

0x666f,	// (0x000701be) aid_size_cell_gallery2_ParamLimits

0x666f,	// (0x000701be) aid_size_cell_gallery2

0x668d,	// (0x000701dc) grid_gallery2_pane_ParamLimits

0x668d,	// (0x000701dc) grid_gallery2_pane

0x66a7,	// (0x000701f6) scroll_pane_cp029_ParamLimits

0x66a7,	// (0x000701f6) scroll_pane_cp029

0x66b8,	// (0x00070207) cell_gallery2_pane_ParamLimits

0x66b8,	// (0x00070207) cell_gallery2_pane

0xee83,	// (0x000789d2) cell_gallery2_pane_g2

0x6717,	// (0x00070266) cell_gallery2_pane_g3

0xee8b,	// (0x000789da) cell_gallery2_pane_g4

0xee93,	// (0x000789e2) cell_gallery2_pane_g5

0xbf6b,	// (0x00075aba) grid_highlight_pane_cp10

0x5cc6,	// (0x0006f815) popup_vitu2_match_list_window_ParamLimits

0x5cdd,	// (0x0006f82c) popup_vitu2_query_window_ParamLimits

0x5cdd,	// (0x0006f82c) popup_vitu2_query_window

0x9519,	// (0x00073068) bg_vitu2_candi_button_pane

0xee68,	// (0x000789b7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee71,	// (0x000789c0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee7a,	// (0x000789c9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x671f,	// (0x0007026e) bg_button_pane_cp015

0x6731,	// (0x00070280) bg_button_pane_cp016

0x6744,	// (0x00070293) bg_button_pane_cp017

0xdddb,	// (0x0007792a) bg_popup_sub_pane_cp22

0xee9b,	// (0x000789ea) popup_vitu2_query_window_g1

0x6789,	// (0x000702d8) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007956b) popup_vitu2_query_window_g

0x67a8,	// (0x000702f7) popup_vitu2_query_window_t1_ParamLimits

0x67a8,	// (0x000702f7) popup_vitu2_query_window_t1

0x67dd,	// (0x0007032c) popup_vitu2_query_window_t2_ParamLimits

0x67dd,	// (0x0007032c) popup_vitu2_query_window_t2

0x67ef,	// (0x0007033e) popup_vitu2_query_window_t3_ParamLimits

0x67ef,	// (0x0007033e) popup_vitu2_query_window_t3

0x6817,	// (0x00070366) popup_vitu2_query_window_t4_ParamLimits

0x6817,	// (0x00070366) popup_vitu2_query_window_t4

0x6838,	// (0x00070387) popup_vitu2_query_window_t5_ParamLimits

0x6838,	// (0x00070387) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00079572) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00079572) popup_vitu2_query_window_t

0xed3e,	// (0x0007888d) main_cset_text_pane

0x6134,	// (0x0006fc83) aid_area_touch_slider_ParamLimits

0x6150,	// (0x0006fc9f) cset_slider_pane_ParamLimits

0x617a,	// (0x0006fcc9) main_cset_slider_pane_g1_ParamLimits

0x618f,	// (0x0006fcde) main_cset_slider_pane_g2_ParamLimits

0xed5f,	// (0x000788ae) main_cset_slider_pane_g3_ParamLimits

0xed5f,	// (0x000788ae) main_cset_slider_pane_g3

0x61a4,	// (0x0006fcf3) main_cset_slider_pane_g4_ParamLimits

0x61a4,	// (0x0006fcf3) main_cset_slider_pane_g4

0x61b3,	// (0x0006fd02) main_cset_slider_pane_g5_ParamLimits

0x61b3,	// (0x0006fd02) main_cset_slider_pane_g5

0x61bf,	// (0x0006fd0e) main_cset_slider_pane_g6_ParamLimits

0x61bf,	// (0x0006fd0e) main_cset_slider_pane_g6

0xf976,	// (0x000794c5) main_cset_slider_pane_g_ParamLimits

0xed8f,	// (0x000788de) main_cset_slider_pane_t1_ParamLimits

0x624b,	// (0x0006fd9a) main_cset_slider_pane_t2_ParamLimits

0x6265,	// (0x0006fdb4) main_cset_slider_pane_t3_ParamLimits

0x627f,	// (0x0006fdce) main_cset_slider_pane_t4_ParamLimits

0x6299,	// (0x0006fde8) main_cset_slider_pane_t5_ParamLimits

0x62b3,	// (0x0006fe02) main_cset_slider_pane_t6_ParamLimits

0x62c8,	// (0x0006fe17) main_cset_slider_pane_t7_ParamLimits

0x62f2,	// (0x0006fe41) main_cset_slider_pane_t8_ParamLimits

0x62f2,	// (0x0006fe41) main_cset_slider_pane_t8

0x631a,	// (0x0006fe69) main_cset_slider_pane_t9_ParamLimits

0x631a,	// (0x0006fe69) main_cset_slider_pane_t9

0x6342,	// (0x0006fe91) main_cset_slider_pane_t10_ParamLimits

0x6342,	// (0x0006fe91) main_cset_slider_pane_t10

0x636a,	// (0x0006feb9) main_cset_slider_pane_t11_ParamLimits

0x636a,	// (0x0006feb9) main_cset_slider_pane_t11

0x6392,	// (0x0006fee1) main_cset_slider_pane_t12_ParamLimits

0x6392,	// (0x0006fee1) main_cset_slider_pane_t12

0x63af,	// (0x0006fefe) main_cset_slider_pane_t13_ParamLimits

0x63af,	// (0x0006fefe) main_cset_slider_pane_t13

0xf99b,	// (0x000794ea) main_cset_slider_pane_t_ParamLimits

0xad60,	// (0x000748af) bg_popup_sub_pane_cp011

0xeea7,	// (0x000789f6) main_cset_text_pane_g1

0xeeaf,	// (0x000789fe) main_cset_text_pane_t1

0xeebd,	// (0x00078a0c) main_cset_text_pane_t2

0xeecb,	// (0x00078a1a) main_cset_text_pane_t3

0xeed9,	// (0x00078a28) main_cset_text_pane_t4

0xeee7,	// (0x00078a36) main_cset_text_pane_t5

0xeef5,	// (0x00078a44) main_cset_text_pane_t6

0xef03,	// (0x00078a52) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00079581) main_cset_text_pane_t

0x9519,	// (0x00073068) main_cam4_burst_pane

0x9519,	// (0x00073068) main_cam5_pane

0x6073,	// (0x0006fbc2) bg_button_pane_cp019

0x607c,	// (0x0006fbcb) bg_button_pane_cp020

0xed6b,	// (0x000788ba) main_cset_slider_pane_g7_ParamLimits

0xed6b,	// (0x000788ba) main_cset_slider_pane_g7

0xed77,	// (0x000788c6) main_cset_slider_pane_g8_ParamLimits

0xed77,	// (0x000788c6) main_cset_slider_pane_g8

0x61d3,	// (0x0006fd22) main_cset_slider_pane_g9_ParamLimits

0x61d3,	// (0x0006fd22) main_cset_slider_pane_g9

0x61df,	// (0x0006fd2e) main_cset_slider_pane_g10_ParamLimits

0x61df,	// (0x0006fd2e) main_cset_slider_pane_g10

0x61eb,	// (0x0006fd3a) main_cset_slider_pane_g11_ParamLimits

0x61eb,	// (0x0006fd3a) main_cset_slider_pane_g11

0x61f7,	// (0x0006fd46) main_cset_slider_pane_g12_ParamLimits

0x61f7,	// (0x0006fd46) main_cset_slider_pane_g12

0x6203,	// (0x0006fd52) main_cset_slider_pane_g13_ParamLimits

0x6203,	// (0x0006fd52) main_cset_slider_pane_g13

0x620f,	// (0x0006fd5e) main_cset_slider_pane_g14_ParamLimits

0x620f,	// (0x0006fd5e) main_cset_slider_pane_g14

0x621b,	// (0x0006fd6a) main_cset_slider_pane_g15_ParamLimits

0x621b,	// (0x0006fd6a) main_cset_slider_pane_g15

0xedbd,	// (0x0007890c) main_cset_slider_pane_t14_ParamLimits

0xedbd,	// (0x0007890c) main_cset_slider_pane_t14

0xedf6,	// (0x00078945) main_cset_slider_pane_t15_ParamLimits

0xedf6,	// (0x00078945) main_cset_slider_pane_t15

0x68af,	// (0x000703fe) aid_cam4_burst_size_cell_ParamLimits

0x68af,	// (0x000703fe) aid_cam4_burst_size_cell

0x68cf,	// (0x0007041e) grid_cam4_burst_pane_ParamLimits

0x68cf,	// (0x0007041e) grid_cam4_burst_pane

0x6907,	// (0x00070456) linegrid_cam4_burst_pane_ParamLimits

0x6907,	// (0x00070456) linegrid_cam4_burst_pane

0xef11,	// (0x00078a60) scroll_pane_cp30_ParamLimits

0xef11,	// (0x00078a60) scroll_pane_cp30

0x692b,	// (0x0007047a) cell_cam4_burst_pane_ParamLimits

0x692b,	// (0x0007047a) cell_cam4_burst_pane

0xef1d,	// (0x00078a6c) linegrid_cam4_burst_pane_g1_ParamLimits

0xef1d,	// (0x00078a6c) linegrid_cam4_burst_pane_g1

0x6978,	// (0x000704c7) linegrid_cam4_burst_pane_g2_ParamLimits

0x6978,	// (0x000704c7) linegrid_cam4_burst_pane_g2

0xef2a,	// (0x00078a79) linegrid_cam4_burst_pane_g3_ParamLimits

0xef2a,	// (0x00078a79) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00079590) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00079590) linegrid_cam4_burst_pane_g

0x6989,	// (0x000704d8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6989,	// (0x000704d8) linegrid_cam4_burst_pane_g3_copy1

0xef37,	// (0x00078a86) linegrid_cam4_burst_pane_g4_ParamLimits

0xef37,	// (0x00078a86) linegrid_cam4_burst_pane_g4

0x69a3,	// (0x000704f2) linegrid_cam4_burst_pane_g5_ParamLimits

0x69a3,	// (0x000704f2) linegrid_cam4_burst_pane_g5

0x69b4,	// (0x00070503) linegrid_cam4_burst_pane_g6_ParamLimits

0x69b4,	// (0x00070503) linegrid_cam4_burst_pane_g6

0xef44,	// (0x00078a93) linegrid_cam4_burst_pane_g7_ParamLimits

0xef44,	// (0x00078a93) linegrid_cam4_burst_pane_g7

0x69cb,	// (0x0007051a) cell_cam4_burst_pane_g1

0xef5d,	// (0x00078aac) main_cam5_pane_t1_ParamLimits

0xef5d,	// (0x00078aac) main_cam5_pane_t1

0xef6f,	// (0x00078abe) main_cam5_pane_t2_ParamLimits

0xef6f,	// (0x00078abe) main_cam5_pane_t2

0xef81,	// (0x00078ad0) main_cam5_pane_t3_ParamLimits

0xef81,	// (0x00078ad0) main_cam5_pane_t3

0xef93,	// (0x00078ae2) main_cam5_pane_t4_ParamLimits

0xef93,	// (0x00078ae2) main_cam5_pane_t4

0xefab,	// (0x00078afa) main_cam5_pane_t5_ParamLimits

0xefab,	// (0x00078afa) main_cam5_pane_t5

0xefbf,	// (0x00078b0e) main_cam5_pane_t6_ParamLimits

0xefbf,	// (0x00078b0e) main_cam5_pane_t6

0xefee,	// (0x00078b3d) main_cam5_pane_t7_ParamLimits

0xefee,	// (0x00078b3d) main_cam5_pane_t7

0xf000,	// (0x00078b4f) main_cam5_pane_t8_ParamLimits

0xf000,	// (0x00078b4f) main_cam5_pane_t8

0xf01c,	// (0x00078b6b) main_cam5_pane_t9_ParamLimits

0xf01c,	// (0x00078b6b) main_cam5_pane_t9

0xf02e,	// (0x00078b7d) main_cam5_pane_t10_ParamLimits

0xf02e,	// (0x00078b7d) main_cam5_pane_t10

0xf040,	// (0x00078b8f) main_cam5_pane_t11_ParamLimits

0xf040,	// (0x00078b8f) main_cam5_pane_t11

0xf052,	// (0x00078ba1) main_cam5_pane_t12_ParamLimits

0xf052,	// (0x00078ba1) main_cam5_pane_t12

0xf067,	// (0x00078bb6) main_cam5_pane_t13_ParamLimits

0xf067,	// (0x00078bb6) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007959c) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007959c) main_cam5_pane_t

0x0473,	// (0x00069fc2) popup_scut_keymap_window_ParamLimits

0x0473,	// (0x00069fc2) popup_scut_keymap_window

0x69de,	// (0x0007052d) aid_size_cell_brow_shortcut

0xbf6b,	// (0x00075aba) bg_popup_window_pane_cp010

0x69ea,	// (0x00070539) grid_scut_pane

0x69f6,	// (0x00070545) cell_scut_pane_ParamLimits

0x69f6,	// (0x00070545) cell_scut_pane

0x6a0d,	// (0x0007055c) cell_scut_pane_g1

0xf084,	// (0x00078bd3) cell_scut_pane_t1

0xf093,	// (0x00078be2) cell_scut_pane_t2

0x6a16,	// (0x00070565) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000795b7) cell_scut_pane_t

0x4739,	// (0x0006e288) main_mup3_pane_g8_ParamLimits

0x4739,	// (0x0006e288) main_mup3_pane_g8

0x5bbf,	// (0x0006f70e) area_vitu2_query_pane_ParamLimits

0x5bbf,	// (0x0006f70e) area_vitu2_query_pane

0x6757,	// (0x000702a6) input_focus_pane_cp08

0xf0a2,	// (0x00078bf1) area_vitu2_query_pane_g1

0x6a24,	// (0x00070573) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000795be) area_vitu2_query_pane_g

0x6a35,	// (0x00070584) area_vitu2_query_pane_t1_ParamLimits

0x6a35,	// (0x00070584) area_vitu2_query_pane_t1

0x6a49,	// (0x00070598) area_vitu2_query_pane_t2_ParamLimits

0x6a49,	// (0x00070598) area_vitu2_query_pane_t2

0x6a5d,	// (0x000705ac) area_vitu2_query_pane_t3_ParamLimits

0x6a5d,	// (0x000705ac) area_vitu2_query_pane_t3

0x9d65,	// (0x000738b4) area_vitu2_query_pane_t4_ParamLimits

0x9d65,	// (0x000738b4) area_vitu2_query_pane_t4

0x9d8d,	// (0x000738dc) area_vitu2_query_pane_t5_ParamLimits

0x9d8d,	// (0x000738dc) area_vitu2_query_pane_t5

0x9db5,	// (0x00073904) area_vitu2_query_pane_t6_ParamLimits

0x9db5,	// (0x00073904) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000795c3) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000795c3) area_vitu2_query_pane_t

0x6a85,	// (0x000705d4) bg_button_pane_cp018

0x6a93,	// (0x000705e2) bg_button_pane_cp021

0x6a9f,	// (0x000705ee) bg_button_pane_cp022

0x6aae,	// (0x000705fd) input_focus_pane_cp09

0xc81a,	// (0x00076369) aid_size_touch_mv_arrow_left

0xc843,	// (0x00076392) aid_size_touch_mv_arrow_right

0x6233,	// (0x0006fd82) main_cset_slider_pane_g16_ParamLimits

0x6233,	// (0x0006fd82) main_cset_slider_pane_g16

0x623f,	// (0x0006fd8e) main_cset_slider_pane_g17_ParamLimits

0x623f,	// (0x0006fd8e) main_cset_slider_pane_g17

0x69cb,	// (0x0007051a) cell_cam4_burst_pane_g1_ParamLimits

0xad60,	// (0x000748af) compa_mode_pane

0x6419,	// (0x0006ff68) popup_vtel_slider_window_g3_ParamLimits

0x6419,	// (0x0006ff68) popup_vtel_slider_window_g3

0x6430,	// (0x0006ff7f) popup_vtel_slider_window_g4_ParamLimits

0x6430,	// (0x0006ff7f) popup_vtel_slider_window_g4

0x6447,	// (0x0006ff96) popup_vtel_slider_window_t1_ParamLimits

0x6447,	// (0x0006ff96) popup_vtel_slider_window_t1

0x9519,	// (0x00073068) main_cl_pane

0x96fc,	// (0x0007324b) popup_imed_adjust2_window_ParamLimits

0xdddb,	// (0x0007792a) bg_tb_trans_pane_cp05_ParamLimits

0xe732,	// (0x00078281) popup_imed_adjust2_window_g1_ParamLimits

0xe741,	// (0x00078290) popup_imed_adjust2_window_g2_ParamLimits

0xe741,	// (0x00078290) popup_imed_adjust2_window_g2

0xe74d,	// (0x0007829c) popup_imed_adjust2_window_g3_ParamLimits

0xe74d,	// (0x0007829c) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007932e) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007932e) popup_imed_adjust2_window_g

0xe759,	// (0x000782a8) popup_imed_adjust2_window_t1_ParamLimits

0xe771,	// (0x000782c0) slider_imed_adjust_pane_ParamLimits

0xe785,	// (0x000782d4) slider_imed_adjust_pane_g1_ParamLimits

0xe795,	// (0x000782e4) slider_imed_adjust_pane_g2_ParamLimits

0xe7a5,	// (0x000782f4) slider_imed_adjust_pane_g3_ParamLimits

0xe7b6,	// (0x00078305) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x00079335) slider_imed_adjust_pane_g_ParamLimits

0x5948,	// (0x0006f497) aid_touch_area_cam4_ParamLimits

0x5948,	// (0x0006f497) aid_touch_area_cam4

0x9ac6,	// (0x00073615) battery_pane_cp01

0x5a17,	// (0x0006f566) main_camera4_pane_g6_ParamLimits

0x5a17,	// (0x0006f566) main_camera4_pane_g6

0x5a41,	// (0x0006f590) main_camera4_pane_t2_ParamLimits

0x5a41,	// (0x0006f590) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x00079438) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x00079438) main_camera4_pane_t

0x5a76,	// (0x0006f5c5) aid_touch_area_vid4_ParamLimits

0x5a76,	// (0x0006f5c5) aid_touch_area_vid4

0x5aca,	// (0x0006f619) main_video4_pane_g5_ParamLimits

0x5aca,	// (0x0006f619) main_video4_pane_g5

0x5aef,	// (0x0006f63e) vid4_progress_pane_ParamLimits

0x5aef,	// (0x0006f63e) vid4_progress_pane

0xed83,	// (0x000788d2) main_cset_slider_pane_g18_ParamLimits

0xed83,	// (0x000788d2) main_cset_slider_pane_g18

0xef51,	// (0x00078aa0) cell_cam4_burst_pane_g2_ParamLimits

0xef51,	// (0x00078aa0) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x00079597) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x00079597) cell_cam4_burst_pane_g

0xb86d,	// (0x000753bc) bg_cl_pane_ParamLimits

0xb86d,	// (0x000753bc) bg_cl_pane

0x6abd,	// (0x0007060c) cl_header_pane_ParamLimits

0x6abd,	// (0x0007060c) cl_header_pane

0x6ad1,	// (0x00070620) cl_listscroll_pane_ParamLimits

0x6ad1,	// (0x00070620) cl_listscroll_pane

0x9e01,	// (0x00073950) bg_cl_pane_g1

0x9e09,	// (0x00073958) bg_cl_pane_g2

0x9e11,	// (0x00073960) bg_cl_pane_g3

0x9e19,	// (0x00073968) bg_cl_pane_g4

0x9e21,	// (0x00073970) bg_cl_pane_g5

0x9e29,	// (0x00073978) bg_cl_pane_g6

0x9e31,	// (0x00073980) bg_cl_pane_g7

0x9e39,	// (0x00073988) bg_cl_pane_g8

0x9e41,	// (0x00073990) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000795d2) bg_cl_pane_g

0x6ae1,	// (0x00070630) aid_height_cl_leading_ParamLimits

0x6ae1,	// (0x00070630) aid_height_cl_leading

0x6aed,	// (0x0007063c) aid_height_cl_text_ParamLimits

0x6aed,	// (0x0007063c) aid_height_cl_text

0xb8e2,	// (0x00075431) bg_cl_header_pane_ParamLimits

0xb8e2,	// (0x00075431) bg_cl_header_pane

0x6b0c,	// (0x0007065b) cl_header_pane_g1_ParamLimits

0x6b0c,	// (0x0007065b) cl_header_pane_g1

0x6b22,	// (0x00070671) cl_header_pane_t1_ParamLimits

0x6b22,	// (0x00070671) cl_header_pane_t1

0x9e49,	// (0x00073998) cl_list_pane

0xed56,	// (0x000788a5) hc_scroll_pane_cp01

0xc1a4,	// (0x00075cf3) bg_cl_header_pane_g1

0xec3c,	// (0x0007878b) bg_cl_header_pane_g2

0xc1c4,	// (0x00075d13) bg_cl_header_pane_g3

0xec4c,	// (0x0007879b) bg_cl_header_pane_g4

0xec44,	// (0x00078793) bg_cl_header_pane_g5

0xee60,	// (0x000789af) bg_cl_header_pane_g6

0xec64,	// (0x000787b3) bg_cl_header_pane_g7

0xec6c,	// (0x000787bb) bg_cl_header_pane_g8

0xec5c,	// (0x000787ab) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000795e5) bg_cl_header_pane_g

0x6b3b,	// (0x0007068a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b3b,	// (0x0007068a) hc_cl_list_double_graphic_heading_pane

0x6b4c,	// (0x0007069b) hc_cl_list_single_graphic_pane_ParamLimits

0x6b4c,	// (0x0007069b) hc_cl_list_single_graphic_pane

0x6b62,	// (0x000706b1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b62,	// (0x000706b1) hc_cl_list_single_graphic_pane_g1

0x6b6e,	// (0x000706bd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b6e,	// (0x000706bd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000795f8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000795f8) hc_cl_list_single_graphic_pane_g

0x6b82,	// (0x000706d1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b82,	// (0x000706d1) hc_cl_list_single_graphic_pane_t1

0x6b62,	// (0x000706b1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b62,	// (0x000706b1) hc_cl_list_double_graphic_heading_pane_g1

0x6b97,	// (0x000706e6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b97,	// (0x000706e6) hc_cl_list_double_graphic_heading_pane_g2

0x6bab,	// (0x000706fa) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6bab,	// (0x000706fa) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000795fd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000795fd) hc_cl_list_double_graphic_heading_pane_g

0x6bbf,	// (0x0007070e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6bbf,	// (0x0007070e) hc_cl_list_double_graphic_heading_pane_t1

0x6bd4,	// (0x00070723) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6bd4,	// (0x00070723) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00079604) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00079604) hc_cl_list_double_graphic_heading_pane_t

0x9c5a,	// (0x000737a9) vid4_progress_pane_g1

0x9c6a,	// (0x000737b9) vid4_progress_pane_g2

0x6be9,	// (0x00070738) vid4_progress_pane_g3

0x9c7a,	// (0x000737c9) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00079609) vid4_progress_pane_g

0x6bfb,	// (0x0007074a) vid4_progress_pane_t1

0x9c92,	// (0x000737e1) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00079614) vid4_progress_pane_t

0x6c13,	// (0x00070762) wait_bar_pane_cp07

0xdfd6,	// (0x00077b25) blid_firmament_pane_ParamLimits

0xe019,	// (0x00077b68) popup_blid_sat_info2_window_g1

0xe03d,	// (0x00077b8c) popup_blid_sat_info2_window_t3

0xe04b,	// (0x00077b9a) popup_blid_sat_info2_window_t4

0xe059,	// (0x00077ba8) popup_blid_sat_info2_window_t5

0xe067,	// (0x00077bb6) popup_blid_sat_info2_window_t6

0xe077,	// (0x00077bc6) popup_blid_sat_info2_window_t7

0xe085,	// (0x00077bd4) popup_blid_sat_info2_window_t8

0xe093,	// (0x00077be2) popup_blid_sat_info2_window_t9

0xe0a1,	// (0x00077bf0) popup_blid_sat_info2_window_t10

0xe163,	// (0x00077cb2) aid_firma_cardinal_ParamLimits

0xe177,	// (0x00077cc6) blid_firmament_pane_t1_ParamLimits

0xe18e,	// (0x00077cdd) blid_firmament_pane_t2_ParamLimits

0xe1a5,	// (0x00077cf4) blid_firmament_pane_t3_ParamLimits

0xe1bc,	// (0x00077d0b) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x00079222) blid_firmament_pane_t_ParamLimits

0xe1d3,	// (0x00077d22) blid_sat_info_pane_ParamLimits

0x950b,	// (0x0007305a) main_cam_set_pane_ParamLimits

0x5000,	// (0x0006eb4f) aid_size_cell_colour_35_ParamLimits

0x5020,	// (0x0006eb6f) aid_size_cell_colour_112_ParamLimits

0x5040,	// (0x0006eb8f) aid_size_cell_effect_ParamLimits

0xdddb,	// (0x0007792a) bg_tb_trans_pane_cp02_ParamLimits

0xc40c,	// (0x00075f5b) heading_imed_pane_ParamLimits

0x5060,	// (0x0006ebaf) listscroll_imed_pane_ParamLimits

0xd3f5,	// (0x00076f44) popup_call2_audio_first_window_g5_ParamLimits

0xd3f5,	// (0x00076f44) popup_call2_audio_first_window_g5

0x55f3,	// (0x0006f142) aid_size_touch_image3_arrow_left_ParamLimits

0x55f3,	// (0x0006f142) aid_size_touch_image3_arrow_left

0x561f,	// (0x0006f16e) aid_size_touch_image3_arrow_right_ParamLimits

0x561f,	// (0x0006f16e) aid_size_touch_image3_arrow_right

0x9ca7,	// (0x000737f6) vid4_progress_pane_t3

0x5373,	// (0x0006eec2) main_hwr_training_symbol_option_pane_ParamLimits

0x5373,	// (0x0006eec2) main_hwr_training_symbol_option_pane

0xea1f,	// (0x0007856e) popup_hwr_training_preview_window_ParamLimits

0xea1f,	// (0x0007856e) popup_hwr_training_preview_window

0x5393,	// (0x0006eee2) hwr_training_navi_pane_g5_ParamLimits

0x5393,	// (0x0006eee2) hwr_training_navi_pane_g5

0xec2a,	// (0x00078779) popup_char_count_window

0x950b,	// (0x0007305a) bg_popup_sub_pane_cp20_ParamLimits

0x6563,	// (0x000700b2) list_vitu2_match_list_pane_ParamLimits

0x6572,	// (0x000700c1) vitu2_page_scroll_pane_ParamLimits

0x6572,	// (0x000700c1) vitu2_page_scroll_pane

0x9e74,	// (0x000739c3) list_single_hwr_training_symbol_option_pane_ParamLimits

0x9e74,	// (0x000739c3) list_single_hwr_training_symbol_option_pane

0x9e87,	// (0x000739d6) list_single_hwr_training_symbol_option_pane_g1

0x9e8f,	// (0x000739de) list_single_hwr_training_symbol_option_pane_t1

0x9e9d,	// (0x000739ec) bg_button_pane_cp023

0x9ea6,	// (0x000739f5) bg_button_pane_cp024

0x6c5e,	// (0x000707ad) vitu2_page_scroll_pane_g1

0x6c66,	// (0x000707b5) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007961b) vitu2_page_scroll_pane_g

0x6c6e,	// (0x000707bd) vitu2_page_scroll_pane_t1

0xdf36,	// (0x00077a85) popup_char_count_window_g1

0x9ed9,	// (0x00073a28) popup_char_count_window_g2

0x9ee2,	// (0x00073a31) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00079620) popup_char_count_window_g

0x9eeb,	// (0x00073a3a) popup_char_count_window_t1

0x9519,	// (0x00073068) main_vded2_pane

0xe71e,	// (0x0007826d) aid_size_cell_imed_line

0xe728,	// (0x00078277) grid_imed_line_width_pane

0x9b8c,	// (0x000736db) vid4_indicators_pane_g4

0x9ef9,	// (0x00073a48) cell_imed_line_width_pane_ParamLimits

0x9ef9,	// (0x00073a48) cell_imed_line_width_pane

0x9f0d,	// (0x00073a5c) cell_imed_line_width_pane_g1

0x9ce2,	// (0x00073831) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00079627) cell_imed_line_width_pane_g

0x6c7d,	// (0x000707cc) main_vded2_pane_g1_ParamLimits

0x6c7d,	// (0x000707cc) main_vded2_pane_g1

0x6c93,	// (0x000707e2) main_vded2_pane_g2_ParamLimits

0x6c93,	// (0x000707e2) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007962c) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007962c) main_vded2_pane_g

0x6ca5,	// (0x000707f4) vded2_slider_pane_ParamLimits

0x6ca5,	// (0x000707f4) vded2_slider_pane

0x6cb5,	// (0x00070804) aid_size_touch_vded2_end

0x6cbf,	// (0x0007080e) aid_size_touch_vded2_playhead

0x9f16,	// (0x00073a65) aid_size_touch_vded2_start

0x9f1e,	// (0x00073a6d) vded2_slider_bg_pane

0x9f27,	// (0x00073a76) vded2_slider_pane_g1

0x9f30,	// (0x00073a7f) vded2_slider_pane_g2

0x6cc9,	// (0x00070818) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00079631) vded2_slider_pane_g

0x9f38,	// (0x00073a87) vded2_slider_bg_pane_g1

0x9f41,	// (0x00073a90) vded2_slider_bg_pane_g2

0x9f4a,	// (0x00073a99) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00079638) vded2_slider_bg_pane_g

0x2d56,	// (0x0006c8a5) aid_postcard_touch_down_pane_ParamLimits

0x2d56,	// (0x0006c8a5) aid_postcard_touch_down_pane

0x2d6c,	// (0x0006c8bb) aid_postcard_touch_up_pane_ParamLimits

0x2d6c,	// (0x0006c8bb) aid_postcard_touch_up_pane

0x9519,	// (0x00073068) main_blid2_pane

0x96e2,	// (0x00073231) popup_blid2_search_window

0xad60,	// (0x000748af) blid2_gps_pane

0xad60,	// (0x000748af) blid2_navig_pane

0xad60,	// (0x000748af) blid2_search_pane

0xad60,	// (0x000748af) blid2_tripm_pane

0x6cd4,	// (0x00070823) blid2_search_pane_g1_ParamLimits

0x6cd4,	// (0x00070823) blid2_search_pane_g1

0x6cee,	// (0x0007083d) blid2_search_pane_t1_ParamLimits

0x6cee,	// (0x0007083d) blid2_search_pane_t1

0x6d00,	// (0x0007084f) aid_size_cell_blid2_gps_ParamLimits

0x6d00,	// (0x0007084f) aid_size_cell_blid2_gps

0x6d18,	// (0x00070867) blid2_gps_pane_g1_ParamLimits

0x6d18,	// (0x00070867) blid2_gps_pane_g1

0x6d2c,	// (0x0007087b) grid_blid2_satellite_pane_ParamLimits

0x6d2c,	// (0x0007087b) grid_blid2_satellite_pane

0x6d46,	// (0x00070895) blid2_navig_pane_g1_ParamLimits

0x6d46,	// (0x00070895) blid2_navig_pane_g1

0x6d52,	// (0x000708a1) blid2_navig_pane_t1_ParamLimits

0x6d52,	// (0x000708a1) blid2_navig_pane_t1

0x6d6d,	// (0x000708bc) blid2_navig_pane_t2_ParamLimits

0x6d6d,	// (0x000708bc) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007963f) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007963f) blid2_navig_pane_t

0x6d88,	// (0x000708d7) blid2_navig_ring_pane_ParamLimits

0x6d88,	// (0x000708d7) blid2_navig_ring_pane

0x6da1,	// (0x000708f0) blid2_speed_pane_ParamLimits

0x6da1,	// (0x000708f0) blid2_speed_pane

0x6dad,	// (0x000708fc) blid2_tripm_pane_g1_ParamLimits

0x6dad,	// (0x000708fc) blid2_tripm_pane_g1

0x6dc6,	// (0x00070915) blid2_tripm_pane_g2_ParamLimits

0x6dc6,	// (0x00070915) blid2_tripm_pane_g2

0x6dda,	// (0x00070929) blid2_tripm_pane_g3_ParamLimits

0x6dda,	// (0x00070929) blid2_tripm_pane_g3

0x6dee,	// (0x0007093d) blid2_tripm_pane_g4_ParamLimits

0x6dee,	// (0x0007093d) blid2_tripm_pane_g4

0x6e02,	// (0x00070951) blid2_tripm_pane_g5_ParamLimits

0x6e02,	// (0x00070951) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00079644) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00079644) blid2_tripm_pane_g

0x6e28,	// (0x00070977) blid2_tripm_pane_t1_ParamLimits

0x6e28,	// (0x00070977) blid2_tripm_pane_t1

0x6e43,	// (0x00070992) blid2_tripm_pane_t2_ParamLimits

0x6e43,	// (0x00070992) blid2_tripm_pane_t2

0x6e5c,	// (0x000709ab) blid2_tripm_pane_t3_ParamLimits

0x6e5c,	// (0x000709ab) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00079651) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00079651) blid2_tripm_pane_t

0x6ea3,	// (0x000709f2) cell_blid2_satellite_pane_ParamLimits

0x6ea3,	// (0x000709f2) cell_blid2_satellite_pane

0x6ec1,	// (0x00070a10) cell_blid2_satellite_pane_g1

0x9f53,	// (0x00073aa2) cell_blid2_satellite_pane_t1

0xe1e3,	// (0x00077d32) blid2_speed_pane_g1

0x9f61,	// (0x00073ab0) blid2_speed_pane_t1

0x9f6f,	// (0x00073abe) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007965a) blid2_speed_pane_t

0xe1e3,	// (0x00077d32) blid2_navig_ring_pane_g1

0x6eca,	// (0x00070a19) blid2_navig_ring_pane_g2

0x6ed2,	// (0x00070a21) blid2_navig_ring_pane_g3

0x6eda,	// (0x00070a29) blid2_navig_ring_pane_g4

0x6ee2,	// (0x00070a31) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007965f) blid2_navig_ring_pane_g

0xad60,	// (0x000748af) bg_popup_window_pane_cp011

0x9f7d,	// (0x00073acc) popup_blid2_search_window_g1

0x9f85,	// (0x00073ad4) popup_blid2_search_window_t1

0x9f93,	// (0x00073ae2) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007966a) popup_blid2_search_window_t

0xc0b3,	// (0x00075c02) main_browser_pane_g1

0xb86d,	// (0x000753bc) main_browser_pane_ParamLimits

0x950b,	// (0x0007305a) bg_button_pane_cp011_ParamLimits

0x5e09,	// (0x0006f958) cell_vitu2_function_pane_g1_ParamLimits

0xdddb,	// (0x0007792a) bg_popup_sub_pane_cp22_ParamLimits

0x6757,	// (0x000702a6) input_focus_pane_cp08_ParamLimits

0x676e,	// (0x000702bd) popup_vitu2_query_button_pane_ParamLimits

0x676e,	// (0x000702bd) popup_vitu2_query_button_pane

0x677f,	// (0x000702ce) popup_vitu2_query_input_button_pane

0xee9b,	// (0x000789ea) popup_vitu2_query_window_g1_ParamLimits

0x6789,	// (0x000702d8) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007956b) popup_vitu2_query_window_g_ParamLimits

0xad60,	// (0x000748af) bg_button_pane_cp026

0x6eea,	// (0x00070a39) popup_vitu2_query_input_button_pane_g1

0xad60,	// (0x000748af) bg_button_pane_cp025

0x9fa1,	// (0x00073af0) popup_vitu2_query_button_pane_t1

0x43fe,	// (0x0006df4d) main_mp3_pane_t6

0x440c,	// (0x0006df5b) popup_slider_window_cp01

0x9af0,	// (0x0007363f) cam4_battery_pane

0x9b49,	// (0x00073698) cam4_battery_pane_cp02

0x9c52,	// (0x000737a1) cam4_battery_pane_cp01

0x9c52,	// (0x000737a1) cam4_battery_pane_cp03

0x9d0e,	// (0x0007385d) cam4_battery_pane_g1

0xe1e3,	// (0x00077d32) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007966f) cam4_battery_pane_g

0xe0af,	// (0x00077bfe) popup_blid_sat_info2_window_t11

0xc81a,	// (0x00076369) aid_size_touch_mv_arrow_left_ParamLimits

0xc843,	// (0x00076392) aid_size_touch_mv_arrow_right_ParamLimits

0xc8a1,	// (0x000763f0) navi_pane_g1_ParamLimits

0xc8ad,	// (0x000763fc) navi_pane_g2_ParamLimits

0xc8db,	// (0x0007642a) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00078f34) navi_pane_g_ParamLimits

0x27b6,	// (0x0006c305) navi_pane_mv_t1_ParamLimits

0x506c,	// (0x0006ebbb) grid_imed_effect_pane_ParamLimits

0x140e,	// (0x0006af5d) aid_placing_vt_slider_lsc

0xc002,	// (0x00075b51) aid_placing_vt_slider_prt

0xb8e2,	// (0x00075431) bg_tb_trans_pane_cp01_ParamLimits

0xe36f,	// (0x00077ebe) popup_image_details_window_g1_ParamLimits

0xe382,	// (0x00077ed1) popup_image_details_window_g2_ParamLimits

0xe397,	// (0x00077ee6) popup_image_details_window_g3_ParamLimits

0xe397,	// (0x00077ee6) popup_image_details_window_g3

0xf718,	// (0x00079267) popup_image_details_window_g_ParamLimits

0xe3ab,	// (0x00077efa) popup_image_details_window_t1_ParamLimits

0xe3bd,	// (0x00077f0c) popup_image_details_window_t2_ParamLimits

0xe3d6,	// (0x00077f25) popup_image_details_window_t3_ParamLimits

0xe3ea,	// (0x00077f39) popup_image_details_window_t4_ParamLimits

0xe405,	// (0x00077f54) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0007926e) popup_image_details_window_t_ParamLimits

0x6af9,	// (0x00070648) cl_header_name_pane_ParamLimits

0x6af9,	// (0x00070648) cl_header_name_pane

0x6ef2,	// (0x00070a41) cl_header_name_pane_t1_ParamLimits

0x6ef2,	// (0x00070a41) cl_header_name_pane_t1

0x6f13,	// (0x00070a62) cl_header_name_pane_t2_ParamLimits

0x6f13,	// (0x00070a62) cl_header_name_pane_t2

0x6f55,	// (0x00070aa4) cl_header_name_pane_t3_ParamLimits

0x6f55,	// (0x00070aa4) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00079674) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00079674) cl_header_name_pane_t

0xc96a,	// (0x000764b9) navi_pane_mv_g2_ParamLimits

0xec04,	// (0x00078753) field_vitu2_entry_pane_g1_ParamLimits

0xec10,	// (0x0007875f) field_vitu2_entry_pane_g2_ParamLimits

0xec1c,	// (0x0007876b) field_vitu2_entry_pane_g3_ParamLimits

0xec1c,	// (0x0007876b) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007946a) field_vitu2_entry_pane_g_ParamLimits

0x9bc1,	// (0x00073710) cell_vitu2_itu_pane_g1_ParamLimits

0x5d9d,	// (0x0006f8ec) cell_vitu2_itu_pane_g2_ParamLimits

0x5d9d,	// (0x0006f8ec) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x00079476) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x00079476) cell_vitu2_itu_pane_g

0x950b,	// (0x0007305a) bg_vkb2_func_pane_cp05_ParamLimits

0x950b,	// (0x0007305a) bg_vkb2_func_pane_cp05

0x950b,	// (0x0007305a) bg_vkb2_func_pane_cp03

0x950b,	// (0x0007305a) bg_vkb2_func_pane_cp04

0x950b,	// (0x0007305a) bg_vkb2_func_pane_cp10_ParamLimits

0x950b,	// (0x0007305a) bg_vkb2_func_pane_cp10

0x6a9f,	// (0x000705ee) bg_vkb2_func_pane_cp08

0x6a85,	// (0x000705d4) bg_vkb2_func_pane_cp06

0x6a93,	// (0x000705e2) bg_vkb2_func_pane_cp07

0x9eaf,	// (0x000739fe) bg_vkb2_func_pane_cp11_ParamLimits

0x9eaf,	// (0x000739fe) bg_vkb2_func_pane_cp11

0x9ec4,	// (0x00073a13) bg_vkb2_func_pane_cp12_ParamLimits

0x9ec4,	// (0x00073a13) bg_vkb2_func_pane_cp12

0xad60,	// (0x000748af) bg_vkb2_func_pane_cp09

0xec3c,	// (0x0007878b) bg_vkb2_func_pane_g1

0xc1c4,	// (0x00075d13) bg_vkb2_func_pane_g2

0xec44,	// (0x00078793) bg_vkb2_func_pane_g3

0xec4c,	// (0x0007879b) bg_vkb2_func_pane_g4

0xee60,	// (0x000789af) bg_vkb2_func_pane_g5

0xec64,	// (0x000787b3) bg_vkb2_func_pane_g6

0xec6c,	// (0x000787bb) bg_vkb2_func_pane_g7

0xec5c,	// (0x000787ab) bg_vkb2_func_pane_g8

0xc1a4,	// (0x00075cf3) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007967b) bg_vkb2_func_pane_g

0x6e16,	// (0x00070965) blid2_tripm_pane_g6_ParamLimits

0x6e16,	// (0x00070965) blid2_tripm_pane_g6

0xead7,	// (0x00078626) mp4_progress_pane_g1

0x6e8f,	// (0x000709de) blid2_tripm_values_pane_ParamLimits

0x6e8f,	// (0x000709de) blid2_tripm_values_pane

0x6f86,	// (0x00070ad5) blid2_tripm_values_pane_t1

0x6f94,	// (0x00070ae3) blid2_tripm_values_pane_t2

0x6fa2,	// (0x00070af1) blid2_tripm_values_pane_t3

0x6fb0,	// (0x00070aff) blid2_tripm_values_pane_t4

0x6fbe,	// (0x00070b0d) blid2_tripm_values_pane_t5

0x6fcc,	// (0x00070b1b) blid2_tripm_values_pane_t6

0x6fda,	// (0x00070b29) blid2_tripm_values_pane_t7

0x6fe8,	// (0x00070b37) blid2_tripm_values_pane_t8

0x6ff6,	// (0x00070b45) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007968e) blid2_tripm_values_pane_t

0x1450,	// (0x0006af9f) call_video_pane_t1_ParamLimits

0x146e,	// (0x0006afbd) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00078dbd) call_video_pane_t_ParamLimits

0x2c91,	// (0x0006c7e0) msg_header_pane_g1_ParamLimits

0xcb52,	// (0x000766a1) msg_header_pane_g2_ParamLimits

0xcb52,	// (0x000766a1) msg_header_pane_g2

0x0001,

0xf488,	// (0x00078fd7) msg_header_pane_g_ParamLimits

0xf488,	// (0x00078fd7) msg_header_pane_g

0xb86d,	// (0x000753bc) main_clock2_pane_ParamLimits

0x4d6a,	// (0x0006e8b9) grid_clock2_toolbar_pane_ParamLimits

0x4d6a,	// (0x0006e8b9) grid_clock2_toolbar_pane

0x4d6a,	// (0x0006e8b9) listscroll_clock2_pane_ParamLimits

0x4d6a,	// (0x0006e8b9) listscroll_clock2_pane

0x4e61,	// (0x0006e9b0) main_clock2_pane_t3_ParamLimits

0x4e61,	// (0x0006e9b0) main_clock2_pane_t3

0x4e85,	// (0x0006e9d4) main_clock2_pane_t4_ParamLimits

0x4e85,	// (0x0006e9d4) main_clock2_pane_t4

0x9faf,	// (0x00073afe) cell_clock2_toolbar_pane

0x9fb7,	// (0x00073b06) cell_clock2_toolbar_pane_cp01

0x9fb7,	// (0x00073b06) cell_clock2_toolbar_pane_cp02

0x9fbf,	// (0x00073b0e) cell_clock2_toolbar_pane_cp03

0x9fc7,	// (0x00073b16) list_clock2_pane

0xc790,	// (0x000762df) scroll_pane_cp10

0x9fcf,	// (0x00073b1e) list_single_clock2_pane_ParamLimits

0x9fcf,	// (0x00073b1e) list_single_clock2_pane

0xbf6b,	// (0x00075aba) list_highlight_pane_cp08

0x9fdc,	// (0x00073b2b) list_single_clock2_pane_t1

0x9fea,	// (0x00073b39) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000796a1) list_single_clock2_pane_t

0xad60,	// (0x000748af) bg_button_pane_cp10

0x9ff8,	// (0x00073b47) cell_clock2_toolbar_pane_g1

0x2ce2,	// (0x0006c831) aid_main_viewer_pane_g1_ParamLimits

0x2ce2,	// (0x0006c831) aid_main_viewer_pane_g1

0x2cf0,	// (0x0006c83f) aid_main_viewer_pane_g2_ParamLimits

0x2cf0,	// (0x0006c83f) aid_main_viewer_pane_g2

0x2cfe,	// (0x0006c84d) aid_main_viewer_pane_g3_ParamLimits

0x2cfe,	// (0x0006c84d) aid_main_viewer_pane_g3

0x2d0d,	// (0x0006c85c) aid_main_viewer_pane_g4_ParamLimits

0x2d0d,	// (0x0006c85c) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x00078fe8) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x00078fe8) aid_main_viewer_pane_g

0x3613,	// (0x0006d162) main_calc_pane_ParamLimits

0x3639,	// (0x0006d188) main_dialer2_pane_ParamLimits

0x9519,	// (0x00073068) main_cam6_pane

0x9519,	// (0x00073068) main_vid6_pane

0x4d76,	// (0x0006e8c5) listscroll_gen_pane_cp06_ParamLimits

0x4d76,	// (0x0006e8c5) listscroll_gen_pane_cp06

0x4ea8,	// (0x0006e9f7) main_clock2_pane_t5_ParamLimits

0x4ea8,	// (0x0006e9f7) main_clock2_pane_t5

0x4f02,	// (0x0006ea51) aid_call2_pane_cp10_ParamLimits

0x4f14,	// (0x0006ea63) aid_call_pane_cp10_ParamLimits

0xc80e,	// (0x0007635d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc80e,	// (0x0007635d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f26,	// (0x0006ea75) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f26,	// (0x0006ea75) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc80e,	// (0x0007635d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x00079323) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f38,	// (0x0006ea87) popup_clock_analogue_window_cp10_t1_ParamLimits

0x55a0,	// (0x0006f0ef) cell_dialer2_keypad_pane_g2_ParamLimits

0x55a0,	// (0x0006f0ef) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x00079409) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x00079409) cell_dialer2_keypad_pane_g

0x55bc,	// (0x0006f10b) cell_dialer2_keypad_pane_t1

0x6126,	// (0x0006fc75) main_cset_text2_pane_ParamLimits

0x6126,	// (0x0006fc75) main_cset_text2_pane

0xf0a2,	// (0x00078bf1) area_vitu2_query_pane_g1_ParamLimits

0x6a24,	// (0x00070573) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000795be) area_vitu2_query_pane_g_ParamLimits

0x9ddd,	// (0x0007392c) area_vitu2_query_pane_t7_ParamLimits

0x9ddd,	// (0x0007392c) area_vitu2_query_pane_t7

0x6a85,	// (0x000705d4) bg_button_pane_cp018_ParamLimits

0x6a93,	// (0x000705e2) bg_button_pane_cp021_ParamLimits

0x6a9f,	// (0x000705ee) bg_button_pane_cp022_ParamLimits

0x6a9f,	// (0x000705ee) bg_vkb2_func_pane_cp08_ParamLimits

0x6a85,	// (0x000705d4) bg_vkb2_func_pane_cp06_ParamLimits

0x6a93,	// (0x000705e2) bg_vkb2_func_pane_cp07_ParamLimits

0x6aae,	// (0x000705fd) input_focus_pane_cp09_ParamLimits

0x9cbc,	// (0x0007380b) cam6_autofocus_pane_ParamLimits

0x9cbc,	// (0x0007380b) cam6_autofocus_pane

0x7004,	// (0x00070b53) cam6_image_uncrop_pane_ParamLimits

0x7004,	// (0x00070b53) cam6_image_uncrop_pane

0x7013,	// (0x00070b62) cam6_indi_pane_ParamLimits

0x7013,	// (0x00070b62) cam6_indi_pane

0x7029,	// (0x00070b78) cam6_mode_pane_ParamLimits

0x7029,	// (0x00070b78) cam6_mode_pane

0x703b,	// (0x00070b8a) cam6_timer_pane_ParamLimits

0x703b,	// (0x00070b8a) cam6_timer_pane

0x7047,	// (0x00070b96) cam6_zoom_pane_ParamLimits

0x7047,	// (0x00070b96) cam6_zoom_pane

0x7053,	// (0x00070ba2) cam6_mode_pane_g1_ParamLimits

0x7053,	// (0x00070ba2) cam6_mode_pane_g1

0x7063,	// (0x00070bb2) cam6_mode_pane_g2_ParamLimits

0x7063,	// (0x00070bb2) cam6_mode_pane_g2

0x7073,	// (0x00070bc2) cam6_mode_pane_g3_ParamLimits

0x7073,	// (0x00070bc2) cam6_mode_pane_g3

0x7083,	// (0x00070bd2) cam6_mode_pane_g4_ParamLimits

0x7083,	// (0x00070bd2) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000796a6) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000796a6) cam6_mode_pane_g

0xf0ae,	// (0x00078bfd) bg_tb_trans_pane_cp08_ParamLimits

0xf0ae,	// (0x00078bfd) bg_tb_trans_pane_cp08

0xa000,	// (0x00073b4f) cam6_battery_pane_ParamLimits

0xa000,	// (0x00073b4f) cam6_battery_pane

0xa016,	// (0x00073b65) cam6_indi_pane_g1_ParamLimits

0xa016,	// (0x00073b65) cam6_indi_pane_g1

0xa028,	// (0x00073b77) cam6_indi_pane_g2_ParamLimits

0xa028,	// (0x00073b77) cam6_indi_pane_g2

0xa03a,	// (0x00073b89) cam6_indi_pane_g3_ParamLimits

0xa03a,	// (0x00073b89) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000796af) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000796af) cam6_indi_pane_g

0xa04c,	// (0x00073b9b) cam6_indi_pane_t1_ParamLimits

0xa04c,	// (0x00073b9b) cam6_indi_pane_t1

0x7093,	// (0x00070be2) cam6_autofocus_pane_g1

0x709b,	// (0x00070bea) cam6_autofocus_pane_g2

0x70a3,	// (0x00070bf2) cam6_autofocus_pane_g3

0x70ab,	// (0x00070bfa) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000796b6) cam6_autofocus_pane_g

0xa072,	// (0x00073bc1) cam6_timer_pane_g1

0xa07a,	// (0x00073bc9) cam6_timer_pane_t1

0xa088,	// (0x00073bd7) cam6_zoom_cont_pane

0xa090,	// (0x00073bdf) cam6_zoom_pane_g1

0xa098,	// (0x00073be7) cam6_zoom_pane_g2

0x70b3,	// (0x00070c02) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000796bf) cam6_zoom_pane_g

0xe1e3,	// (0x00077d32) cam6_battery_pane_g1

0xe1e3,	// (0x00077d32) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0007922b) cam6_battery_pane_g

0xa0a0,	// (0x00073bef) cam6_zoom_cont_pane_g1

0xa0a9,	// (0x00073bf8) cam6_zoom_cont_pane_g2

0xa0b2,	// (0x00073c01) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000796c6) cam6_zoom_cont_pane_g

0x70d0,	// (0x00070c1f) cam6_mode_pane_cp_ParamLimits

0x70d0,	// (0x00070c1f) cam6_mode_pane_cp

0x70e2,	// (0x00070c31) cam6_zoom_pane_cp_ParamLimits

0x70e2,	// (0x00070c31) cam6_zoom_pane_cp

0x70ee,	// (0x00070c3d) vid6_image_uncrop_cif_pane_ParamLimits

0x70ee,	// (0x00070c3d) vid6_image_uncrop_cif_pane

0x70fe,	// (0x00070c4d) vid6_image_uncrop_nhd_pane_ParamLimits

0x70fe,	// (0x00070c4d) vid6_image_uncrop_nhd_pane

0x710d,	// (0x00070c5c) vid6_image_uncrop_vga_pane_ParamLimits

0x710d,	// (0x00070c5c) vid6_image_uncrop_vga_pane

0x711c,	// (0x00070c6b) vid6_image_uncrop_wvga_pane_ParamLimits

0x711c,	// (0x00070c6b) vid6_image_uncrop_wvga_pane

0x712b,	// (0x00070c7a) vid6_indi_pane_ParamLimits

0x712b,	// (0x00070c7a) vid6_indi_pane

0xf0ae,	// (0x00078bfd) bg_tb_trans_pane_cp09_ParamLimits

0xf0ae,	// (0x00078bfd) bg_tb_trans_pane_cp09

0xa0ca,	// (0x00073c19) cam6_battery_pane_cp_ParamLimits

0xa0ca,	// (0x00073c19) cam6_battery_pane_cp

0xa0d6,	// (0x00073c25) vid6_indi_pane_g1_ParamLimits

0xa0d6,	// (0x00073c25) vid6_indi_pane_g1

0xa0e8,	// (0x00073c37) vid6_indi_pane_g2_ParamLimits

0xa0e8,	// (0x00073c37) vid6_indi_pane_g2

0xa0fa,	// (0x00073c49) vid6_indi_pane_g3_ParamLimits

0xa0fa,	// (0x00073c49) vid6_indi_pane_g3

0xa10f,	// (0x00073c5e) vid6_indi_pane_g4_ParamLimits

0xa10f,	// (0x00073c5e) vid6_indi_pane_g4

0xa124,	// (0x00073c73) vid6_indi_pane_g5_ParamLimits

0xa124,	// (0x00073c73) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000796cd) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000796cd) vid6_indi_pane_g

0xa13e,	// (0x00073c8d) vid6_indi_pane_t1_ParamLimits

0xa13e,	// (0x00073c8d) vid6_indi_pane_t1

0xa154,	// (0x00073ca3) vid6_indi_pane_t2_ParamLimits

0xa154,	// (0x00073ca3) vid6_indi_pane_t2

0xa17c,	// (0x00073ccb) vid6_indi_pane_t3_ParamLimits

0xa17c,	// (0x00073ccb) vid6_indi_pane_t3

0xa1a4,	// (0x00073cf3) vid6_indi_pane_t4_ParamLimits

0xa1a4,	// (0x00073cf3) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000796d8) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000796d8) vid6_indi_pane_t

0xa521,	// (0x00074070) wait_bar_pane_cp08

0x7143,	// (0x00070c92) main_cset_text2_pane_t1_ParamLimits

0x7143,	// (0x00070c92) main_cset_text2_pane_t1

0x70bb,	// (0x00070c0a) listscroll_gen_pane_cp06_t1_ParamLimits

0x70bb,	// (0x00070c0a) listscroll_gen_pane_cp06_t1

0x9519,	// (0x00073068) main_cam6_set_pane

0x9ae2,	// (0x00073631) bg_tb_trans_pane_cp06_ParamLimits

0x9af8,	// (0x00073647) cam4_indicators_pane_g1_ParamLimits

0x9b09,	// (0x00073658) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x00079446) cam4_indicators_pane_g_ParamLimits

0x9b27,	// (0x00073676) cam4_indicators_pane_t1_ParamLimits

0x950b,	// (0x0007305a) bg_tb_trans_pane_cp07_ParamLimits

0x9b53,	// (0x000736a2) vid4_indicators_pane_g1_ParamLimits

0x9b67,	// (0x000736b6) vid4_indicators_pane_g2_ParamLimits

0x9b7b,	// (0x000736ca) vid4_indicators_pane_g3_ParamLimits

0x9b8c,	// (0x000736db) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x00079458) vid4_indicators_pane_g_ParamLimits

0x9baa,	// (0x000736f9) vid4_indicators_pane_t1_ParamLimits

0x9c5a,	// (0x000737a9) vid4_progress_pane_g1_ParamLimits

0x9c6a,	// (0x000737b9) vid4_progress_pane_g2_ParamLimits

0x6be9,	// (0x00070738) vid4_progress_pane_g3_ParamLimits

0x9c7a,	// (0x000737c9) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00079609) vid4_progress_pane_g_ParamLimits

0x6bfb,	// (0x0007074a) vid4_progress_pane_t1_ParamLimits

0x9c92,	// (0x000737e1) vid4_progress_pane_t2_ParamLimits

0x9ca7,	// (0x000737f6) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00079614) vid4_progress_pane_t_ParamLimits

0x6c13,	// (0x00070762) wait_bar_pane_cp07_ParamLimits

0x7160,	// (0x00070caf) main_cam6_set_pane_g2_ParamLimits

0x7160,	// (0x00070caf) main_cam6_set_pane_g2

0x7184,	// (0x00070cd3) main_cset6_listscroll_pane_ParamLimits

0x7184,	// (0x00070cd3) main_cset6_listscroll_pane

0x71a4,	// (0x00070cf3) main_cset6_slider_pane_ParamLimits

0x71a4,	// (0x00070cf3) main_cset6_slider_pane

0x71ba,	// (0x00070d09) main_cset6_text2_pane_ParamLimits

0x71ba,	// (0x00070d09) main_cset6_text2_pane

0xa530,	// (0x0007407f) main_cset6_text_pane

0xa538,	// (0x00074087) main_cset_list_pane_copy1_ParamLimits

0xa538,	// (0x00074087) main_cset_list_pane_copy1

0xa548,	// (0x00074097) scroll_pane_cp028_copy1

0x71c8,	// (0x00070d17) cset_list_set_pane_copy1

0x71d9,	// (0x00070d28) aid_position_infowindow_above_copy1

0x71e1,	// (0x00070d30) aid_position_infowindow_below_copy1

0x71e9,	// (0x00070d38) cset_list_set_pane_g1_copy1

0x71f1,	// (0x00070d40) cset_list_set_pane_g3_copy1_ParamLimits

0x71f1,	// (0x00070d40) cset_list_set_pane_g3_copy1

0x7200,	// (0x00070d4f) cset_list_set_pane_t1_copy1_ParamLimits

0x7200,	// (0x00070d4f) cset_list_set_pane_t1_copy1

0xb8e2,	// (0x00075431) list_highlight_pane_cp021_copy1_ParamLimits

0xb8e2,	// (0x00075431) list_highlight_pane_cp021_copy1

0xa551,	// (0x000740a0) cset6_slider_pane_ParamLimits

0xa551,	// (0x000740a0) cset6_slider_pane

0xa57d,	// (0x000740cc) main_cset6_slider_pane_g1_ParamLimits

0xa57d,	// (0x000740cc) main_cset6_slider_pane_g1

0x7215,	// (0x00070d64) main_cset6_slider_pane_g2_ParamLimits

0x7215,	// (0x00070d64) main_cset6_slider_pane_g2

0xa5a5,	// (0x000740f4) main_cset6_slider_pane_g3_ParamLimits

0xa5a5,	// (0x000740f4) main_cset6_slider_pane_g3

0x723d,	// (0x00070d8c) main_cset6_slider_pane_g4_ParamLimits

0x723d,	// (0x00070d8c) main_cset6_slider_pane_g4

0x7249,	// (0x00070d98) main_cset6_slider_pane_g5_ParamLimits

0x7249,	// (0x00070d98) main_cset6_slider_pane_g5

0xed6b,	// (0x000788ba) main_cset6_slider_pane_g7_ParamLimits

0xed6b,	// (0x000788ba) main_cset6_slider_pane_g7

0xed77,	// (0x000788c6) main_cset6_slider_pane_g8_ParamLimits

0xed77,	// (0x000788c6) main_cset6_slider_pane_g8

0x61d3,	// (0x0006fd22) main_cset6_slider_pane_g9_ParamLimits

0x61d3,	// (0x0006fd22) main_cset6_slider_pane_g9

0x61df,	// (0x0006fd2e) main_cset6_slider_pane_g10_ParamLimits

0x61df,	// (0x0006fd2e) main_cset6_slider_pane_g10

0x61eb,	// (0x0006fd3a) main_cset6_slider_pane_g11_ParamLimits

0x61eb,	// (0x0006fd3a) main_cset6_slider_pane_g11

0x61f7,	// (0x0006fd46) main_cset6_slider_pane_g12_ParamLimits

0x61f7,	// (0x0006fd46) main_cset6_slider_pane_g12

0x6203,	// (0x0006fd52) main_cset6_slider_pane_g13_ParamLimits

0x6203,	// (0x0006fd52) main_cset6_slider_pane_g13

0x620f,	// (0x0006fd5e) main_cset6_slider_pane_g14_ParamLimits

0x620f,	// (0x0006fd5e) main_cset6_slider_pane_g14

0x7255,	// (0x00070da4) main_cset6_slider_pane_g15_ParamLimits

0x7255,	// (0x00070da4) main_cset6_slider_pane_g15

0x6233,	// (0x0006fd82) main_cset6_slider_pane_g16_ParamLimits

0x6233,	// (0x0006fd82) main_cset6_slider_pane_g16

0x623f,	// (0x0006fd8e) main_cset6_slider_pane_g17_ParamLimits

0x623f,	// (0x0006fd8e) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000796e1) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000796e1) main_cset6_slider_pane_g

0xa5b1,	// (0x00074100) main_cset6_slider_pane_t1_ParamLimits

0xa5b1,	// (0x00074100) main_cset6_slider_pane_t1

0x7285,	// (0x00070dd4) main_cset6_slider_pane_t2_ParamLimits

0x7285,	// (0x00070dd4) main_cset6_slider_pane_t2

0x72b0,	// (0x00070dff) main_cset6_slider_pane_t3_ParamLimits

0x72b0,	// (0x00070dff) main_cset6_slider_pane_t3

0x72db,	// (0x00070e2a) main_cset6_slider_pane_t4_ParamLimits

0x72db,	// (0x00070e2a) main_cset6_slider_pane_t4

0x7306,	// (0x00070e55) main_cset6_slider_pane_t5_ParamLimits

0x7306,	// (0x00070e55) main_cset6_slider_pane_t5

0xa5f2,	// (0x00074141) main_cset6_slider_pane_t7_ParamLimits

0xa5f2,	// (0x00074141) main_cset6_slider_pane_t7

0x7331,	// (0x00070e80) main_cset6_slider_pane_t8_ParamLimits

0x7331,	// (0x00070e80) main_cset6_slider_pane_t8

0x7355,	// (0x00070ea4) main_cset6_slider_pane_t9_ParamLimits

0x7355,	// (0x00070ea4) main_cset6_slider_pane_t9

0x7379,	// (0x00070ec8) main_cset6_slider_pane_t10_ParamLimits

0x7379,	// (0x00070ec8) main_cset6_slider_pane_t10

0x739d,	// (0x00070eec) main_cset6_slider_pane_t11_ParamLimits

0x739d,	// (0x00070eec) main_cset6_slider_pane_t11

0xa628,	// (0x00074177) main_cset6_slider_pane_t14_ParamLimits

0xa628,	// (0x00074177) main_cset6_slider_pane_t14

0xa661,	// (0x000741b0) main_cset6_slider_pane_t15_ParamLimits

0xa661,	// (0x000741b0) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00079706) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00079706) main_cset6_slider_pane_t

0xefd3,	// (0x00078b22) cset_slider_pane_g1_copy1

0xefdc,	// (0x00078b2b) cset_slider_pane_g2_copy1

0xefe5,	// (0x00078b34) cset_slider_pane_g3_copy1

0xad60,	// (0x000748af) bg_popup_sub_pane_cp011_copy1

0xa69a,	// (0x000741e9) main_cset_text_pane_g1_copy1

0xeeaf,	// (0x000789fe) main_cset_text_pane_t1_copy1

0xeebd,	// (0x00078a0c) main_cset_text_pane_t2_copy1

0xeecb,	// (0x00078a1a) main_cset_text_pane_t3_copy1

0xeed9,	// (0x00078a28) main_cset_text_pane_t4_copy1

0xeee7,	// (0x00078a36) main_cset_text_pane_t5_copy1

0xa6a2,	// (0x000741f1) main_cset_text_pane_t6_copy1

0xa6b0,	// (0x000741ff) main_cset_text_pane_t7_copy1

0x7143,	// (0x00070c92) main_cset_text2_pane_t1_copy1

0x950b,	// (0x0007305a) main_ncimui_pane

0x3883,	// (0x0006d3d2) popup_query_ncimui_window_ParamLimits

0x3883,	// (0x0006d3d2) popup_query_ncimui_window

0x9d02,	// (0x00073851) field_cale_ev2_pane_g4_ParamLimits

0x9d02,	// (0x00073851) field_cale_ev2_pane_g4

0x5480,	// (0x0006efcf) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5480,	// (0x0006efcf) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000793e4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000793e4) cell_video_dialer_keypad_pane_g

0x5498,	// (0x0006efe7) cell_video_dialer_keypad_pane_t1

0xad60,	// (0x000748af) bg_popup_window_pane_cp012

0xc65d,	// (0x000761ac) heading_pane_cp06

0xa6dc,	// (0x0007422b) ncim_query_content_pane

0xad60,	// (0x000748af) bg_popup_heading_pane_cp01

0xa6e4,	// (0x00074233) ncim_heading_pane_t1

0xa6f2,	// (0x00074241) ncim_indicator_popup_pane

0xa704,	// (0x00074253) ncim_query_button_pane

0xa718,	// (0x00074267) ncim_query_content_pane_t1

0xa72a,	// (0x00074279) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007974a) ncim_query_content_pane_t

0xa764,	// (0x000742b3) ncim_query_list_pane

0xa776,	// (0x000742c5) ncim_query_popup_pane

0xa6f2,	// (0x00074241) ncim_indicator_popup_pane_ParamLimits

0x75c2,	// (0x00071111) ncim_query_content_pane_g1_ParamLimits

0x75c2,	// (0x00071111) ncim_query_content_pane_g1

0xa718,	// (0x00074267) ncim_query_content_pane_t1_ParamLimits

0xa72a,	// (0x00074279) ncim_query_content_pane_t2_ParamLimits

0x75ce,	// (0x0007111d) ncim_query_content_pane_t3_ParamLimits

0x75ce,	// (0x0007111d) ncim_query_content_pane_t3

0x75f6,	// (0x00071145) ncim_query_content_pane_t4_ParamLimits

0x75f6,	// (0x00071145) ncim_query_content_pane_t4

0x761e,	// (0x0007116d) ncim_query_content_pane_t5_ParamLimits

0x761e,	// (0x0007116d) ncim_query_content_pane_t5

0xa73c,	// (0x0007428b) ncim_query_content_pane_t6_ParamLimits

0xa73c,	// (0x0007428b) ncim_query_content_pane_t6

0xfbfb,	// (0x0007974a) ncim_query_content_pane_t_ParamLimits

0xa764,	// (0x000742b3) ncim_query_list_pane_ParamLimits

0xa776,	// (0x000742c5) ncim_query_popup_pane_ParamLimits

0xa78a,	// (0x000742d9) wait_bar_pane_cp04

0xad60,	// (0x000748af) input_focus_pane_cp011

0xa792,	// (0x000742e1) ncim_query_popup_pane_t1

0xa7a0,	// (0x000742ef) ncim_list_query_list_pane_ParamLimits

0xa7a0,	// (0x000742ef) ncim_list_query_list_pane

0xad60,	// (0x000748af) bg_button_pane_cp027

0xa7ad,	// (0x000742fc) ncim_query_button_pane_g1

0xad60,	// (0x000748af) list_highlight_pane_cp012

0xa7b7,	// (0x00074306) ncim_list_query_list_pane_g1

0xa7bf,	// (0x0007430e) ncim_list_query_list_pane_t1

0x9b18,	// (0x00073667) cam4_indicators_pane_g3_ParamLimits

0x9b18,	// (0x00073667) cam4_indicators_pane_g3

0x9b98,	// (0x000736e7) vid4_indicators_pane_g5_ParamLimits

0x9b98,	// (0x000736e7) vid4_indicators_pane_g5

0x9c86,	// (0x000737d5) vid4_progress_pane_g5_ParamLimits

0x9c86,	// (0x000737d5) vid4_progress_pane_g5

0x74ad,	// (0x00070ffc) main_ncimui_pane_g1

0x7516,	// (0x00071065) ncimui_group_query_pane_ParamLimits

0x7516,	// (0x00071065) ncimui_group_query_pane

0x755e,	// (0x000710ad) ncimui_list_pane_ParamLimits

0x755e,	// (0x000710ad) ncimui_list_pane

0x7585,	// (0x000710d4) ncimui_text_pane_ParamLimits

0x7585,	// (0x000710d4) ncimui_text_pane

0x7646,	// (0x00071195) ncimui_text_pane_t1_ParamLimits

0x7646,	// (0x00071195) ncimui_text_pane_t1

0xa7cd,	// (0x0007431c) ncimui_list_single_graphic_pane_ParamLimits

0xa7cd,	// (0x0007431c) ncimui_list_single_graphic_pane

0x7664,	// (0x000711b3) ncimui_query_pane_ParamLimits

0x7664,	// (0x000711b3) ncimui_query_pane

0xad60,	// (0x000748af) list_highlight_pane_cp013

0xa7dd,	// (0x0007432c) ncim_list_query_list_pane_t1_copy1

0xa7b7,	// (0x00074306) ncim_list_single_graphic_pane_g1

0x7677,	// (0x000711c6) ncim_query_button_pane_cp01

0x7683,	// (0x000711d2) ncim_query_entry_pane_ParamLimits

0x7683,	// (0x000711d2) ncim_query_entry_pane

0x7696,	// (0x000711e5) ncimui_query_pane_g1

0x76a2,	// (0x000711f1) ncimui_query_pane_t1_ParamLimits

0x76a2,	// (0x000711f1) ncimui_query_pane_t1

0xb8e2,	// (0x00075431) input_focus_pane_cp012

0xa7eb,	// (0x0007433a) ncim_query_entry_pane_t1

0xb86d,	// (0x000753bc) main_im_pane_ParamLimits

0x950b,	// (0x0007305a) main_mobtv_pane_ParamLimits

0x950b,	// (0x0007305a) main_mobtv_pane

0x726d,	// (0x00070dbc) main_cset6_slider_pane_g18_ParamLimits

0x726d,	// (0x00070dbc) main_cset6_slider_pane_g18

0x7279,	// (0x00070dc8) main_cset6_slider_pane_g19_ParamLimits

0x7279,	// (0x00070dc8) main_cset6_slider_pane_g19

0x76bb,	// (0x0007120a) bg_main_mobtv_pane_ParamLimits

0x76bb,	// (0x0007120a) bg_main_mobtv_pane

0x76c9,	// (0x00071218) main_mobtv_info_pane

0x76d2,	// (0x00071221) main_mobtv_loading_pane_ParamLimits

0x76d2,	// (0x00071221) main_mobtv_loading_pane

0xa7fd,	// (0x0007434c) main_mobtv_pg_channel_list_pane

0xa807,	// (0x00074356) main_mobtv_pg_hdr_pane

0x76df,	// (0x0007122e) main_mobtv_programe_curr_pane_ParamLimits

0x76df,	// (0x0007122e) main_mobtv_programe_curr_pane

0x76ec,	// (0x0007123b) main_mobtv_programe_next_pane_ParamLimits

0x76ec,	// (0x0007123b) main_mobtv_programe_next_pane

0xa810,	// (0x0007435f) popup_mobtv_noti_window

0xe1e3,	// (0x00077d32) main_tv_pg_hdr_pane_g1

0xa818,	// (0x00074367) main_tv_pg_hdr_pane_g2

0xa820,	// (0x0007436f) main_tv_pg_hdr_pane_g3

0xa828,	// (0x00074377) main_tv_pg_hdr_pane_g4

0xa830,	// (0x0007437f) main_tv_pg_hdr_pane_g5

0xa83a,	// (0x00074389) main_tv_pg_hdr_pane_g6

0xa844,	// (0x00074393) main_tv_pg_hdr_pane_g7

0xa84e,	// (0x0007439d) main_tv_pg_hdr_pane_g8

0xa858,	// (0x000743a7) main_tv_pg_hdr_pane_g9

0xa862,	// (0x000743b1) main_tv_pg_hdr_pane_g10

0xa86c,	// (0x000743bb) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00079757) main_tv_pg_hdr_pane_g

0xa876,	// (0x000743c5) main_tv_pg_hdr_pane_t1

0xa884,	// (0x000743d3) main_tv_pg_hdr_pane_t2

0xa892,	// (0x000743e1) main_tv_pg_hdr_pane_t3

0xa8a2,	// (0x000743f1) main_tv_pg_hdr_pane_t4

0xa8b2,	// (0x00074401) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007976e) main_tv_pg_hdr_pane_t

0xa8c2,	// (0x00074411) single_mobtv_pg_channel_pane_ParamLimits

0xa8c2,	// (0x00074411) single_mobtv_pg_channel_pane

0xa8d4,	// (0x00074423) single_mobtv_pg_channel_table_pane

0xa8dd,	// (0x0007442c) single_mobtv_pg_channel_thumb_pane

0xa8e6,	// (0x00074435) single_tv_pg_channel_pane_g1

0xa8ef,	// (0x0007443e) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00079779) single_tv_pg_channel_pane_g

0xe44f,	// (0x00077f9e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe44f,	// (0x00077f9e) bg_single_mobtv_pg_channel_thumb_pane

0xa8f8,	// (0x00074447) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xa8f8,	// (0x00074447) single_mobtv_pg_channel_thumb_pane_g1

0xa906,	// (0x00074455) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xa906,	// (0x00074455) single_mobtv_pg_channel_thumb_pane_g2

0xa912,	// (0x00074461) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xa912,	// (0x00074461) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007977e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007977e) single_mobtv_pg_channel_thumb_pane_g

0xa91e,	// (0x0007446d) single_mobtv_pg_channel_thumb_pane_t1

0xa92c,	// (0x0007447b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00079785) single_mobtv_pg_channel_thumb_pane_t

0xe1e3,	// (0x00077d32) bg_single_mobtv_pg_channel_table_pane_g1

0xe1e3,	// (0x00077d32) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0007922b) bg_single_mobtv_pg_channel_table_pane_g

0xa93a,	// (0x00074489) single_mobtv_pg_channel_table_pane_t1

0xa948,	// (0x00074497) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007978a) single_mobtv_pg_channel_table_pane_t

0x7701,	// (0x00071250) main_mobtv_info_pane_g1_ParamLimits

0x7701,	// (0x00071250) main_mobtv_info_pane_g1

0x771f,	// (0x0007126e) main_mobtv_info_pane_t1_ParamLimits

0x771f,	// (0x0007126e) main_mobtv_info_pane_t1

0x7797,	// (0x000712e6) main_mobtv_info_pane_t2_ParamLimits

0x7797,	// (0x000712e6) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00079794) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00079794) main_mobtv_info_pane_t

0x7826,	// (0x00071375) wait_bar_pane_cp05

0x7838,	// (0x00071387) main_mobtv_loading_pane_g1_ParamLimits

0x7838,	// (0x00071387) main_mobtv_loading_pane_g1

0x784b,	// (0x0007139a) main_mobtv_loading_pane_g2_ParamLimits

0x784b,	// (0x0007139a) main_mobtv_loading_pane_g2

0x7857,	// (0x000713a6) main_mobtv_loading_pane_g3_ParamLimits

0x7857,	// (0x000713a6) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007979b) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007979b) main_mobtv_loading_pane_g

0xa956,	// (0x000744a5) main_mobtv_loading_pane_t1_ParamLimits

0xa956,	// (0x000744a5) main_mobtv_loading_pane_t1

0xa96e,	// (0x000744bd) main_mobtv_loading_pane_t2_ParamLimits

0xa96e,	// (0x000744bd) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000797a2) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000797a2) main_mobtv_loading_pane_t

0x786a,	// (0x000713b9) wait_bar_pane_cp06_ParamLimits

0x786a,	// (0x000713b9) wait_bar_pane_cp06

0xa992,	// (0x000744e1) main_mobtv_programe_curr_pane_t1

0xa9a0,	// (0x000744ef) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000797a7) main_mobtv_programe_curr_pane_t

0xa9ae,	// (0x000744fd) main_mobtv_programe_next_pane_t1

0xa9bc,	// (0x0007450b) main_mobtv_programe_next_pane_t2

0xa9ca,	// (0x00074519) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000797ac) main_mobtv_programe_next_pane_t

0xad60,	// (0x000748af) bg_popup_mobtv_noti_window_pane

0xa9d8,	// (0x00074527) popup_mobtv_noti_window_g1

0xa9e0,	// (0x0007452f) popup_mobtv_noti_window_t1

0xa9ee,	// (0x0007453d) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000797b3) popup_mobtv_noti_window_t

0xe1e3,	// (0x00077d32) bg_popup_mobtv_noti_window_pane_g1

0x9519,	// (0x00073068) sc_clock_pane

0x9519,	// (0x00073068) main_fs_bigclock_pane

0x6e79,	// (0x000709c8) blid2_tripm_pane_t4_ParamLimits

0x6e79,	// (0x000709c8) blid2_tripm_pane_t4

0x7879,	// (0x000713c8) sc_clock_pane_g1_ParamLimits

0x7879,	// (0x000713c8) sc_clock_pane_g1

0x788b,	// (0x000713da) sc_clock_pane_t1_ParamLimits

0x788b,	// (0x000713da) sc_clock_pane_t1

0x78ad,	// (0x000713fc) sc_clock_pane_t2_ParamLimits

0x78ad,	// (0x000713fc) sc_clock_pane_t2

0x78c5,	// (0x00071414) sc_clock_pane_t3_ParamLimits

0x78c5,	// (0x00071414) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000797b8) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000797b8) sc_clock_pane_t

0x893b,	// (0x0007248a) main_fs_bigclock_indicator_pane_ParamLimits

0x893b,	// (0x0007248a) main_fs_bigclock_indicator_pane

0x796b,	// (0x000714ba) main_fs_bigclock_pane_g1_ParamLimits

0x796b,	// (0x000714ba) main_fs_bigclock_pane_g1

0x8947,	// (0x00072496) main_fs_bigclock_pane_t1_ParamLimits

0x8947,	// (0x00072496) main_fs_bigclock_pane_t1

0x8959,	// (0x000724a8) main_fs_bigclock_pane_t2_ParamLimits

0x8959,	// (0x000724a8) main_fs_bigclock_pane_t2

0x896d,	// (0x000724bc) main_fs_bigclock_pane_t3_ParamLimits

0x896d,	// (0x000724bc) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000799c2) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000799c2) main_fs_bigclock_pane_t

0xba07,	// (0x00075556) main_fs_bigclock_indicator_pane_g1

0xa70c,	// (0x0007425b) ncim_query_content_pane_g2_ParamLimits

0xa70c,	// (0x0007425b) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00079745) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00079745) ncim_query_content_pane_g

0x78de,	// (0x0007142d) sc_clock_pane_t4_ParamLimits

0x78de,	// (0x0007142d) sc_clock_pane_t4

0x950b,	// (0x0007305a) main_radioblah_pane

0x9a7c,	// (0x000735cb) cell_call4_button_pane_t1_copy1_ParamLimits

0x9a7c,	// (0x000735cb) cell_call4_button_pane_t1_copy1

0x74c5,	// (0x00071014) main_ncimui_pane_t1_ParamLimits

0x74c5,	// (0x00071014) main_ncimui_pane_t1

0x74df,	// (0x0007102e) main_ncimui_pane_t2_ParamLimits

0x74df,	// (0x0007102e) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007973e) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007973e) main_ncimui_pane_t

0xab33,	// (0x00074682) main_radioblah_anim_pane_ParamLimits

0xab33,	// (0x00074682) main_radioblah_anim_pane

0xab44,	// (0x00074693) main_radioblah_info_pane_ParamLimits

0xab44,	// (0x00074693) main_radioblah_info_pane

0xab58,	// (0x000746a7) main_radioblah_pane_t1_ParamLimits

0xab58,	// (0x000746a7) main_radioblah_pane_t1

0xab74,	// (0x000746c3) main_radioblah_pane_t2_ParamLimits

0xab74,	// (0x000746c3) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000797d9) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000797d9) main_radioblah_pane_t

0x79ca,	// (0x00071519) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79ca,	// (0x00071519) main_radioblah_rocker_ctrl_pane

0xabbc,	// (0x0007470b) main_radioblah_info_pane_t1_ParamLimits

0xabbc,	// (0x0007470b) main_radioblah_info_pane_t1

0x7a22,	// (0x00071571) main_radioblah_info_pane_t2_ParamLimits

0x7a22,	// (0x00071571) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000797e2) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000797e2) main_radioblah_info_pane_t

0xe1e3,	// (0x00077d32) main_radioblah_rocker_ctrl_pane_g1

0x7ad2,	// (0x00071621) main_radioblah_rocker_ctrl_pane_g2

0x7ada,	// (0x00071629) main_radioblah_rocker_ctrl_pane_g3

0x7ae2,	// (0x00071631) main_radioblah_rocker_ctrl_pane_g4

0x7aea,	// (0x00071639) main_radioblah_rocker_ctrl_pane_g5

0x7af2,	// (0x00071641) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000797eb) main_radioblah_rocker_ctrl_pane_g

0x7143,	// (0x00070c92) main_cset_text2_pane_t1_copy1_ParamLimits

0x9ada,	// (0x00073629) cam4_image_uncrop_qvga_pane

0x9b41,	// (0x00073690) vid4_image_uncrop_qcif_pane

0x9cbc,	// (0x0007380b) cam6_image_uncrop_qvga_pane_ParamLimits

0x9cbc,	// (0x0007380b) cam6_image_uncrop_qvga_pane

0xa0ba,	// (0x00073c09) vid6_image_uncrop_qcif_pane_ParamLimits

0xa0ba,	// (0x00073c09) vid6_image_uncrop_qcif_pane

0xad60,	// (0x000748af) bg_popup_preview_window_pane_cp03

0xa6be,	// (0x0007420d) list_cset_text2_pane

0xa6c6,	// (0x00074215) main_cset6_text2_pane_g1

0xa6ce,	// (0x0007421d) main_cset6_text2_pane_t1

0x7afa,	// (0x00071649) list_cset_text2_pane_t1_ParamLimits

0x7afa,	// (0x00071649) list_cset_text2_pane_t1

0x950b,	// (0x0007305a) main_radioblah_pane_ParamLimits

0x7812,	// (0x00071361) main_mobtv_info_pane_t3_ParamLimits

0x7812,	// (0x00071361) main_mobtv_info_pane_t3

0x79b8,	// (0x00071507) main_radioblah_pane_g1

0x79f2,	// (0x00071541) main_radioblah_info_pane_g1

0x7a77,	// (0x000715c6) main_radioblah_info_pane_t3_ParamLimits

0x7a77,	// (0x000715c6) main_radioblah_info_pane_t3

0x22c1,	// (0x0006be10) highlight_cell_cale_month_pane_ParamLimits

0x22c1,	// (0x0006be10) highlight_cell_cale_month_pane

0x9519,	// (0x00073068) main_phob_fisheye_pane

0xe54b,	// (0x0007809a) scroll_pane_cp0031_ParamLimits

0xe54b,	// (0x0007809a) scroll_pane_cp0031

0xa521,	// (0x00074070) wait_bar_pane_cp08_ParamLimits

0x71c8,	// (0x00070d17) cset_list_set_pane_copy1_ParamLimits

0xabf6,	// (0x00074745) highlight_cell_cale_month_pane_g1

0x7b13,	// (0x00071662) highlight_cell_cale_month_pane_t1

0x9e49,	// (0x00073998) list_gen_pane_cp01

0xed56,	// (0x000788a5) scroll_pane_01

0x7b21,	// (0x00071670) list_single_double_fisheye_pane

0x7b2a,	// (0x00071679) list_double_fisheye_pane_g1_ParamLimits

0x7b2a,	// (0x00071679) list_double_fisheye_pane_g1

0x7b36,	// (0x00071685) list_double_fisheye_pane_g2_ParamLimits

0x7b36,	// (0x00071685) list_double_fisheye_pane_g2

0x7b4a,	// (0x00071699) list_double_fisheye_pane_g3_ParamLimits

0x7b4a,	// (0x00071699) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000797f8) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000797f8) list_double_fisheye_pane_g

0x7b73,	// (0x000716c2) list_double_fisheye_pane_t1_ParamLimits

0x7b73,	// (0x000716c2) list_double_fisheye_pane_t1

0x7b8e,	// (0x000716dd) list_double_fisheye_pane_t2_ParamLimits

0x7b8e,	// (0x000716dd) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00079803) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00079803) list_double_fisheye_pane_t

0x9519,	// (0x00073068) main_call5_pane

0x7909,	// (0x00071458) sc_swipe_pane_ParamLimits

0x7909,	// (0x00071458) sc_swipe_pane

0x7bc3,	// (0x00071712) call5_image_pane_ParamLimits

0x7bc3,	// (0x00071712) call5_image_pane

0x7be0,	// (0x0007172f) call5_swipe_1_pane_ParamLimits

0x7be0,	// (0x0007172f) call5_swipe_1_pane

0x7bf3,	// (0x00071742) call5_swipe_2_pane_ParamLimits

0x7bf3,	// (0x00071742) call5_swipe_2_pane

0x7c1e,	// (0x0007176d) popup_call5_audio_first_window_ParamLimits

0x7c1e,	// (0x0007176d) popup_call5_audio_first_window

0xe44f,	// (0x00077f9e) call5_swipe_1_pane_g1_ParamLimits

0xe44f,	// (0x00077f9e) call5_swipe_1_pane_g1

0xabfe,	// (0x0007474d) call5_swipe_1_pane_g2_ParamLimits

0xabfe,	// (0x0007474d) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00079808) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00079808) call5_swipe_1_pane_g

0xac0a,	// (0x00074759) call5_swipe_1_pane_t1_ParamLimits

0xac0a,	// (0x00074759) call5_swipe_1_pane_t1

0xe44f,	// (0x00077f9e) call5_swipe_2_pane_g1_ParamLimits

0xe44f,	// (0x00077f9e) call5_swipe_2_pane_g1

0xac1f,	// (0x0007476e) call5_swipe_2_pane_g2_ParamLimits

0xac1f,	// (0x0007476e) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007980d) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007980d) call5_swipe_2_pane_g

0xac2b,	// (0x0007477a) call5_swipe_2_pane_t1_ParamLimits

0xac2b,	// (0x0007477a) call5_swipe_2_pane_t1

0xac40,	// (0x0007478f) sc_swipe_pane_g1_ParamLimits

0xac40,	// (0x0007478f) sc_swipe_pane_g1

0xac4d,	// (0x0007479c) sc_swipe_pane_g2_ParamLimits

0xac4d,	// (0x0007479c) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00079812) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00079812) sc_swipe_pane_g

0xac59,	// (0x000747a8) sc_swipe_pane_t1_ParamLimits

0xac59,	// (0x000747a8) sc_swipe_pane_t1

0x9519,	// (0x00073068) main_cmail_launcher_pane

0x7c2f,	// (0x0007177e) aid_size_cell_cmail_l_ParamLimits

0x7c2f,	// (0x0007177e) aid_size_cell_cmail_l

0x7c3d,	// (0x0007178c) grid_cmail_l_pane_ParamLimits

0x7c3d,	// (0x0007178c) grid_cmail_l_pane

0x7c57,	// (0x000717a6) cell_cmail_l_pane_ParamLimits

0x7c57,	// (0x000717a6) cell_cmail_l_pane

0xac6e,	// (0x000747bd) cell_cmail_l_pane_g1_ParamLimits

0xac6e,	// (0x000747bd) cell_cmail_l_pane_g1

0xac7a,	// (0x000747c9) cell_cmail_l_pane_t1_ParamLimits

0xac7a,	// (0x000747c9) cell_cmail_l_pane_t1

0xac90,	// (0x000747df) cell_cmail_l_pane_t2_ParamLimits

0xac90,	// (0x000747df) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00079817) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00079817) cell_cmail_l_pane_t

0xb8e2,	// (0x00075431) grid_highlight_pane_cp018_ParamLimits

0xb8e2,	// (0x00075431) grid_highlight_pane_cp018

0x0358,	// (0x00069ea7) main2_pane_ParamLimits

0x0358,	// (0x00069ea7) main2_pane

0xbe3f,	// (0x0007598e) popup_sp_fs_action_menu_bg_pane_g1

0xbe47,	// (0x00075996) popup_sp_fs_action_menu_bg_pane_g2

0xbe4f,	// (0x0007599e) popup_sp_fs_action_menu_bg_pane_g3

0xbe57,	// (0x000759a6) popup_sp_fs_action_menu_bg_pane_g4

0xbe5f,	// (0x000759ae) popup_sp_fs_action_menu_bg_pane_g5

0xbe67,	// (0x000759b6) popup_sp_fs_action_menu_bg_pane_g6

0xbe6f,	// (0x000759be) popup_sp_fs_action_menu_bg_pane_g7

0xbe77,	// (0x000759c6) popup_sp_fs_action_menu_bg_pane_g8

0xbe7f,	// (0x000759ce) popup_sp_fs_action_menu_bg_pane_g9

0xbe87,	// (0x000759d6) popup_sp_fs_action_menu_bg_pane_g10

0xbe87,	// (0x000759d6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x00078cd9) popup_sp_fs_action_menu_bg_pane_g

0x1287,	// (0x0006add6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x2_t3_g3_g1

0x1293,	// (0x0006ade2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1293,	// (0x0006ade2) list_medium_line_x2_t3_g3_g2

0x129f,	// (0x0006adee) list_medium_line_x2_t3_g3_g3_ParamLimits

0x129f,	// (0x0006adee) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00078d87) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00078d87) list_medium_line_x2_t3_g3_g

0x12ab,	// (0x0006adfa) list_medium_line_x2_t3_g3_t1_ParamLimits

0x12ab,	// (0x0006adfa) list_medium_line_x2_t3_g3_t1

0x12c0,	// (0x0006ae0f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x12c0,	// (0x0006ae0f) list_medium_line_x2_t3_g3_t2

0x12d4,	// (0x0006ae23) list_medium_line_x2_t3_g3_t3_ParamLimits

0x12d4,	// (0x0006ae23) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00078d8e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00078d8e) list_medium_line_x2_t3_g3_t

0x1287,	// (0x0006add6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x2_t3_g2_g1

0x129f,	// (0x0006adee) list_medium_line_x2_t3_g2_g2_ParamLimits

0x129f,	// (0x0006adee) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x00078d95) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x00078d95) list_medium_line_x2_t3_g2_g

0x12e9,	// (0x0006ae38) list_medium_line_x2_t3_g2_t1_ParamLimits

0x12e9,	// (0x0006ae38) list_medium_line_x2_t3_g2_t1

0x12ff,	// (0x0006ae4e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x12ff,	// (0x0006ae4e) list_medium_line_x2_t3_g2_t2

0x1311,	// (0x0006ae60) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1311,	// (0x0006ae60) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00078d9a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00078d9a) list_medium_line_x2_t3_g2_t

0x1287,	// (0x0006add6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x2_t4_g4_g1

0x132e,	// (0x0006ae7d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x132e,	// (0x0006ae7d) list_medium_line_x2_t4_g4_g2

0x1293,	// (0x0006ade2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1293,	// (0x0006ade2) list_medium_line_x2_t4_g4_g3

0x133a,	// (0x0006ae89) list_medium_line_x2_t4_g4_g4_ParamLimits

0x133a,	// (0x0006ae89) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00078da1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00078da1) list_medium_line_x2_t4_g4_g

0x1346,	// (0x0006ae95) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1346,	// (0x0006ae95) list_medium_line_x2_t4_g4_t1

0x1360,	// (0x0006aeaf) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1360,	// (0x0006aeaf) list_medium_line_x2_t4_g4_t2

0x1376,	// (0x0006aec5) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1376,	// (0x0006aec5) list_medium_line_x2_t4_g4_t3

0x138b,	// (0x0006aeda) list_medium_line_x2_t4_g4_t4_ParamLimits

0x138b,	// (0x0006aeda) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00078daa) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00078daa) list_medium_line_x2_t4_g4_t

0x1287,	// (0x0006add6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x2_t2_g4_g1

0x132e,	// (0x0006ae7d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x132e,	// (0x0006ae7d) list_medium_line_x2_t2_g4_g2

0x1293,	// (0x0006ade2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1293,	// (0x0006ade2) list_medium_line_x2_t2_g4_g3

0x129f,	// (0x0006adee) list_medium_line_x2_t2_g4_g4_ParamLimits

0x129f,	// (0x0006adee) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00078e11) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00078e11) list_medium_line_x2_t2_g4_g

0x22e7,	// (0x0006be36) list_medium_line_x2_t2_g4_t1_ParamLimits

0x22e7,	// (0x0006be36) list_medium_line_x2_t2_g4_t1

0x12d4,	// (0x0006ae23) list_medium_line_x2_t2_g4_t2_ParamLimits

0x12d4,	// (0x0006ae23) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00078e1a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00078e1a) list_medium_line_x2_t2_g4_t

0x1287,	// (0x0006add6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x2_t2_g3_g1

0x1293,	// (0x0006ade2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1293,	// (0x0006ade2) list_medium_line_x2_t2_g3_g2

0x129f,	// (0x0006adee) list_medium_line_x2_t2_g3_g3_ParamLimits

0x129f,	// (0x0006adee) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00078d87) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00078d87) list_medium_line_x2_t2_g3_g

0x22fc,	// (0x0006be4b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x22fc,	// (0x0006be4b) list_medium_line_x2_t2_g3_t1

0x12d4,	// (0x0006ae23) list_medium_line_x2_t2_g3_t2_ParamLimits

0x12d4,	// (0x0006ae23) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00078e1f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00078e1f) list_medium_line_x2_t2_g3_t

0x2445,	// (0x0006bf94) main_sp_fs_list_pane_ParamLimits

0x2445,	// (0x0006bf94) main_sp_fs_list_pane

0xd744,	// (0x00077293) sp_fs_scroll_pane_ParamLimits

0xd744,	// (0x00077293) sp_fs_scroll_pane

0x2451,	// (0x0006bfa0) list_medium_line_x2_t3_t1

0x2461,	// (0x0006bfb0) list_medium_line_x2_t3_t2

0x246f,	// (0x0006bfbe) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00078e6a) list_medium_line_x2_t3_t

0x247d,	// (0x0006bfcc) list_medium_line_x3_t4_t1

0x248d,	// (0x0006bfdc) list_medium_line_x3_t4_t2

0x249b,	// (0x0006bfea) list_medium_line_x3_t4_t3

0x246f,	// (0x0006bfbe) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00078e71) list_medium_line_x3_t4_t

0x24a9,	// (0x0006bff8) list_medium_line_x4_t5_t1

0x24b9,	// (0x0006c008) list_medium_line_x4_t5_t2

0x249b,	// (0x0006bfea) list_medium_line_x4_t5_t3

0x24c7,	// (0x0006c016) list_medium_line_x4_t5_t4

0x246f,	// (0x0006bfbe) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00078e7a) list_medium_line_x4_t5_t

0x1287,	// (0x0006add6) list_medium_line_t4_g4_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_t4_g4_g1

0x24d5,	// (0x0006c024) list_medium_line_t4_g4_g2_ParamLimits

0x24d5,	// (0x0006c024) list_medium_line_t4_g4_g2

0x24e1,	// (0x0006c030) list_medium_line_t4_g4_g3_ParamLimits

0x24e1,	// (0x0006c030) list_medium_line_t4_g4_g3

0x129f,	// (0x0006adee) list_medium_line_t4_g4_g4_ParamLimits

0x129f,	// (0x0006adee) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00078e85) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00078e85) list_medium_line_t4_g4_g

0x24ed,	// (0x0006c03c) list_medium_line_t4_g4_t1_ParamLimits

0x24ed,	// (0x0006c03c) list_medium_line_t4_g4_t1

0x2502,	// (0x0006c051) list_medium_line_t4_g4_t2_ParamLimits

0x2502,	// (0x0006c051) list_medium_line_t4_g4_t2

0x2517,	// (0x0006c066) list_medium_line_t4_g4_t3_ParamLimits

0x2517,	// (0x0006c066) list_medium_line_t4_g4_t3

0x12d4,	// (0x0006ae23) list_medium_line_t4_g4_t4_ParamLimits

0x12d4,	// (0x0006ae23) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00078e8e) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00078e8e) list_medium_line_t4_g4_t

0x25df,	// (0x0006c12e) chi_dic_find_pane_g1

0x364d,	// (0x0006d19c) main_tport_pane

0x64d9,	// (0x00070028) list_medium_line_plain_t1

0x6581,	// (0x000700d0) list_medium_line_t2_g2_g1_ParamLimits

0x6581,	// (0x000700d0) list_medium_line_t2_g2_g1

0x658d,	// (0x000700dc) list_medium_line_t2_g2_g2_ParamLimits

0x658d,	// (0x000700dc) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007954f) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007954f) list_medium_line_t2_g2_g

0x6599,	// (0x000700e8) list_medium_line_t2_g2_t1_ParamLimits

0x6599,	// (0x000700e8) list_medium_line_t2_g2_t1

0x65b3,	// (0x00070102) list_medium_line_t2_g2_t2_ParamLimits

0x65b3,	// (0x00070102) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00079554) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00079554) list_medium_line_t2_g2_t

0x9e52,	// (0x000739a1) aid_sp_fs_list_icon_a_sm

0x9e5a,	// (0x000739a9) aid_sp_fs_list_icon_d

0x9e62,	// (0x000739b1) aid_sp_fs_text_primary

0x9e6b,	// (0x000739ba) aid_sp_fs_text_secondary

0x6c26,	// (0x00070775) list_medium_line

0x6c26,	// (0x00070775) list_medium_line_g2

0x6c26,	// (0x00070775) list_medium_line_g3

0x6c26,	// (0x00070775) list_medium_line_plain

0x6c26,	// (0x00070775) list_medium_line_plain_t2

0x6c26,	// (0x00070775) list_medium_line_plain_t3

0x6c26,	// (0x00070775) list_medium_line_right_icon

0x6c26,	// (0x00070775) list_medium_line_right_iconx2

0x6c26,	// (0x00070775) list_medium_line_t2

0x6c26,	// (0x00070775) list_medium_line_t2_g2

0x6c26,	// (0x00070775) list_medium_line_t2_g3

0x6c26,	// (0x00070775) list_medium_line_t2_right_icon

0x6c26,	// (0x00070775) list_medium_line_t2_right_iconx2

0x6c26,	// (0x00070775) list_medium_line_t3

0x6c26,	// (0x00070775) list_medium_line_t3_g2

0x6c26,	// (0x00070775) list_medium_line_t3_g3

0x6c26,	// (0x00070775) list_medium_line_t3_right_iconx2

0x6c2f,	// (0x0007077e) list_medium_line_t4_g4

0x6c38,	// (0x00070787) list_medium_line_x2

0x6c38,	// (0x00070787) list_medium_line_x2_t2_g2

0x6c38,	// (0x00070787) list_medium_line_x2_t2_g3

0x6c38,	// (0x00070787) list_medium_line_x2_t2_g4

0x6c38,	// (0x00070787) list_medium_line_x2_t3

0x6c38,	// (0x00070787) list_medium_line_x2_t3_g2

0x6c38,	// (0x00070787) list_medium_line_x2_t3_g3

0x6c38,	// (0x00070787) list_medium_line_x2_t3_g4

0x6c38,	// (0x00070787) list_medium_line_x2_t4_g2

0x6c38,	// (0x00070787) list_medium_line_x2_t4_g4

0x6c41,	// (0x00070790) list_medium_line_x3

0x6c41,	// (0x00070790) list_medium_line_x3_t4

0x6c41,	// (0x00070790) list_medium_line_x3_t4_g4

0x6c2f,	// (0x0007077e) list_medium_line_x4_t4

0x6c2f,	// (0x0007077e) list_medium_line_x4_t4_g7

0x6c2f,	// (0x0007077e) list_medium_line_x4_t5

0x6c4a,	// (0x00070799) list_single_fs_dyc_pane_ParamLimits

0x6c4a,	// (0x00070799) list_single_fs_dyc_pane

0x1287,	// (0x0006add6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x4_t4_g7_g1

0x73c1,	// (0x00070f10) list_medium_line_x4_t4_g7_g2_ParamLimits

0x73c1,	// (0x00070f10) list_medium_line_x4_t4_g7_g2

0x73cd,	// (0x00070f1c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x73cd,	// (0x00070f1c) list_medium_line_x4_t4_g7_g3

0x73dc,	// (0x00070f2b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x73dc,	// (0x00070f2b) list_medium_line_x4_t4_g7_g4

0x73e8,	// (0x00070f37) list_medium_line_x4_t4_g7_g5_ParamLimits

0x73e8,	// (0x00070f37) list_medium_line_x4_t4_g7_g5

0x73f7,	// (0x00070f46) list_medium_line_x4_t4_g7_g6_ParamLimits

0x73f7,	// (0x00070f46) list_medium_line_x4_t4_g7_g6

0x7406,	// (0x00070f55) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7406,	// (0x00070f55) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007971f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007971f) list_medium_line_x4_t4_g7_g

0x7412,	// (0x00070f61) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7412,	// (0x00070f61) list_medium_line_x4_t4_g7_t1

0x7427,	// (0x00070f76) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7427,	// (0x00070f76) list_medium_line_x4_t4_g7_t2

0x743c,	// (0x00070f8b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x743c,	// (0x00070f8b) list_medium_line_x4_t4_g7_t3

0x7451,	// (0x00070fa0) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7451,	// (0x00070fa0) list_medium_line_x4_t4_g7_t4

0x7463,	// (0x00070fb2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7463,	// (0x00070fb2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007972e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007972e) list_medium_line_x4_t4_g7_t

0x7475,	// (0x00070fc4) list_single_dyc_row_pane_ParamLimits

0x7475,	// (0x00070fc4) list_single_dyc_row_pane

0x7bb0,	// (0x000716ff) call5_gesture_pane_ParamLimits

0x7bb0,	// (0x000716ff) call5_gesture_pane

0x7c06,	// (0x00071755) call5_windows_pane_ParamLimits

0x7c06,	// (0x00071755) call5_windows_pane

0x7c71,	// (0x000717c0) call5_swipe_1_pane_cp_ParamLimits

0x7c71,	// (0x000717c0) call5_swipe_1_pane_cp

0x7c7d,	// (0x000717cc) call5_swipe_2_pane_cp_ParamLimits

0x7c7d,	// (0x000717cc) call5_swipe_2_pane_cp

0xbf6b,	// (0x00075aba) call5_image_pane_cp

0x7c89,	// (0x000717d8) popup_call5_audio_first_window_cp_ParamLimits

0x7c89,	// (0x000717d8) popup_call5_audio_first_window_cp

0xac40,	// (0x0007478f) call5_swipe_1_pane_g1_cp_ParamLimits

0xac40,	// (0x0007478f) call5_swipe_1_pane_g1_cp

0xacad,	// (0x000747fc) call5_swipe_1_pane_g2_cp

0xac59,	// (0x000747a8) call5_swipe_1_pane_t1_cp_ParamLimits

0xac59,	// (0x000747a8) call5_swipe_1_pane_t1_cp

0xac40,	// (0x0007478f) call5_swipe_2_pane_g1_cp_ParamLimits

0xac40,	// (0x0007478f) call5_swipe_2_pane_g1_cp

0xacb5,	// (0x00074804) call5_swipe_2_pane_g2_cp

0xacbd,	// (0x0007480c) call5_swipe_2_pane_t1_cp_ParamLimits

0xacbd,	// (0x0007480c) call5_swipe_2_pane_t1_cp

0xb8e2,	// (0x00075431) main_sp_fs_email_pane

0xacd2,	// (0x00074821) main_sp_fs_listscroll_pane_te

0x7c97,	// (0x000717e6) popup_sp_fs_action_menu_pane_ParamLimits

0x7c97,	// (0x000717e6) popup_sp_fs_action_menu_pane

0xe1e3,	// (0x00077d32) bg_sp_fs_ctrlbar_pane_g1

0xacdb,	// (0x0007482a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xace4,	// (0x00074833) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xaced,	// (0x0007483c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe1e3,	// (0x00077d32) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007981c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdfc8,	// (0x00077b17) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdfc8,	// (0x00077b17) bg_sp_fs_ctrlbar_ddmenu_pane

0xacf6,	// (0x00074845) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xacf6,	// (0x00074845) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xad02,	// (0x00074851) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xad02,	// (0x00074851) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00079825) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00079825) main_sp_fs_ctrlbar_ddmenu_pane_g

0xad0e,	// (0x0007485d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xad0e,	// (0x0007485d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7cdb,	// (0x0007182a) list_medium_line_t2_right_icon_g1

0x7ce3,	// (0x00071832) list_medium_line_t2_right_icon_t1

0x7cf3,	// (0x00071842) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007982a) list_medium_line_t2_right_icon_t

0xdddb,	// (0x0007792a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xdddb,	// (0x0007792a) bg_sp_fs_ctrlbar_pane

0x7d4d,	// (0x0007189c) main_sp_fs_ctrlbar_button_pane_cp01

0x7d57,	// (0x000718a6) main_sp_fs_ctrlbar_ddmenu_pane

0xb20d,	// (0x00074d5c) main_sp_fs_ctrlbar_pane_g1

0xb219,	// (0x00074d68) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007982f) main_sp_fs_ctrlbar_pane_g

0xb225,	// (0x00074d74) main_sp_fs_ctrlbar_pane_t1

0x7d61,	// (0x000718b0) main_sp_fs_ctrlbar_pane

0x7d85,	// (0x000718d4) main_sp_fs_listscroll_pane_te_cp01

0x7da5,	// (0x000718f4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7da5,	// (0x000718f4) popup_sp_fs_action_menu_pane_cp01

0xb8e2,	// (0x00075431) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb8e2,	// (0x00075431) bg_sp_fs_highlight_list_pane_cp01

0xa1c8,	// (0x00073d17) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa1c8,	// (0x00073d17) sp_fs_action_menu_list_gene_pane_g1

0xb255,	// (0x00074da4) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb255,	// (0x00074da4) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00079839) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00079839) sp_fs_action_menu_list_gene_pane_g

0xa1d7,	// (0x00073d26) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa1d7,	// (0x00073d26) sp_fs_action_menu_list_gene_pane_t1

0xa1ef,	// (0x00073d3e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa1ef,	// (0x00073d3e) sp_fs_action_menu_list_gene_pane

0xb262,	// (0x00074db1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb262,	// (0x00074db1) popup_sp_fs_action_menu_bg_pane

0xa20e,	// (0x00073d5d) sp_fs_action_menu_list_pane_ParamLimits

0xa20e,	// (0x00073d5d) sp_fs_action_menu_list_pane

0x7dd5,	// (0x00071924) sp_fs_scroll_pane_cp01_ParamLimits

0x7dd5,	// (0x00071924) sp_fs_scroll_pane_cp01

0x7dfb,	// (0x0007194a) list_medium_line_plain_t2_t1

0x7e0b,	// (0x0007195a) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007983e) list_medium_line_plain_t2_t

0x7e1b,	// (0x0007196a) list_medium_line_plain_t3_t1

0x7e2b,	// (0x0007197a) list_medium_line_plain_t3_t2

0x7e39,	// (0x00071988) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00079843) list_medium_line_plain_t3_t

0x1287,	// (0x0006add6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x2_t2_g2_g1

0x129f,	// (0x0006adee) list_medium_line_x2_t2_g2_g2_ParamLimits

0x129f,	// (0x0006adee) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x00078d95) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x00078d95) list_medium_line_x2_t2_g2_g

0x24ed,	// (0x0006c03c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24ed,	// (0x0006c03c) list_medium_line_x2_t2_g2_t1

0x12d4,	// (0x0006ae23) list_medium_line_x2_t2_g2_t2_ParamLimits

0x12d4,	// (0x0006ae23) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007984a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007984a) list_medium_line_x2_t2_g2_t

0x1287,	// (0x0006add6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x2_t4_g2_g1

0x7e47,	// (0x00071996) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7e47,	// (0x00071996) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007984f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007984f) list_medium_line_x2_t4_g2_g

0x7e59,	// (0x000719a8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e59,	// (0x000719a8) list_medium_line_x2_t4_g2_t1

0x7e73,	// (0x000719c2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e73,	// (0x000719c2) list_medium_line_x2_t4_g2_t2

0x7e89,	// (0x000719d8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e89,	// (0x000719d8) list_medium_line_x2_t4_g2_t3

0x12d4,	// (0x0006ae23) list_medium_line_x2_t4_g2_t4_ParamLimits

0x12d4,	// (0x0006ae23) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00079854) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00079854) list_medium_line_x2_t4_g2_t

0x7e9e,	// (0x000719ed) list_medium_line_t3_right_iconx2_g1

0x7cdb,	// (0x0007182a) list_medium_line_t3_right_iconx2_g2

0x7ea6,	// (0x000719f5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007985d) list_medium_line_t3_right_iconx2_g

0x7eb0,	// (0x000719ff) list_medium_line_t3_right_iconx2_t1

0x7ec0,	// (0x00071a0f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00079864) list_medium_line_t3_right_iconx2_t

0x1287,	// (0x0006add6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x3_t4_g4_g1

0x1293,	// (0x0006ade2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1293,	// (0x0006ade2) list_medium_line_x3_t4_g4_g2

0x24d5,	// (0x0006c024) list_medium_line_x3_t4_g4_g3_ParamLimits

0x24d5,	// (0x0006c024) list_medium_line_x3_t4_g4_g3

0x7ece,	// (0x00071a1d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7ece,	// (0x00071a1d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00079869) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00079869) list_medium_line_x3_t4_g4_g

0x7eda,	// (0x00071a29) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7eda,	// (0x00071a29) list_medium_line_x3_t4_g4_t1

0x7ef1,	// (0x00071a40) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7ef1,	// (0x00071a40) list_medium_line_x3_t4_g4_t2

0x2502,	// (0x0006c051) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2502,	// (0x0006c051) list_medium_line_x3_t4_g4_t3

0x7f0c,	// (0x00071a5b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f0c,	// (0x00071a5b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00079872) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00079872) list_medium_line_x3_t4_g4_t

0x7f29,	// (0x00071a78) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f29,	// (0x00071a78) list_single_dyc_row_text_pane_t1

0x7f72,	// (0x00071ac1) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f72,	// (0x00071ac1) list_single_dyc_row_text_pane_t2

0xa22e,	// (0x00073d7d) list_single_dyc_row_text_pane_t3_ParamLimits

0xa22e,	// (0x00073d7d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007987b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007987b) list_single_dyc_row_text_pane_t

0xa252,	// (0x00073da1) list_single_dyc_row_pane_g1_ParamLimits

0xa252,	// (0x00073da1) list_single_dyc_row_pane_g1

0xa25e,	// (0x00073dad) list_single_dyc_row_pane_g2_ParamLimits

0xa25e,	// (0x00073dad) list_single_dyc_row_pane_g2

0xa26a,	// (0x00073db9) list_single_dyc_row_pane_g3_ParamLimits

0xa26a,	// (0x00073db9) list_single_dyc_row_pane_g3

0xa276,	// (0x00073dc5) list_single_dyc_row_pane_g4_ParamLimits

0xa276,	// (0x00073dc5) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00079888) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00079888) list_single_dyc_row_pane_g

0xa282,	// (0x00073dd1) list_single_dyc_row_text_pane_ParamLimits

0xa282,	// (0x00073dd1) list_single_dyc_row_text_pane

0xad60,	// (0x000748af) bg_sp_fs_scroll_pane

0xb270,	// (0x00074dbf) thumb_sp_fs_scroll_pane

0x6581,	// (0x000700d0) list_medium_line_g1_ParamLimits

0x6581,	// (0x000700d0) list_medium_line_g1

0x80a7,	// (0x00071bf6) list_medium_line_t1_ParamLimits

0x80a7,	// (0x00071bf6) list_medium_line_t1

0x1287,	// (0x0006add6) list_medium_line_x2_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x2_g1

0x1293,	// (0x0006ade2) list_medium_line_x2_g2_ParamLimits

0x1293,	// (0x0006ade2) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00079891) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00079891) list_medium_line_x2_g

0xa2a1,	// (0x00073df0) list_medium_line_x2_t1_ParamLimits

0xa2a1,	// (0x00073df0) list_medium_line_x2_t1

0x1287,	// (0x0006add6) list_medium_line_x3_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x3_g1

0x1293,	// (0x0006ade2) list_medium_line_x3_g2_ParamLimits

0x1293,	// (0x0006ade2) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00079891) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00079891) list_medium_line_x3_g

0xa2a1,	// (0x00073df0) list_medium_line_x3_t1_ParamLimits

0xa2a1,	// (0x00073df0) list_medium_line_x3_t1

0xb279,	// (0x00074dc8) thumb_sp_fs_scroll_pane_g1

0xb282,	// (0x00074dd1) thumb_sp_fs_scroll_pane_g2

0xb28b,	// (0x00074dda) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00079896) thumb_sp_fs_scroll_pane_g

0xb279,	// (0x00074dc8) bg_sp_fs_scroll_pane_g1

0xb282,	// (0x00074dd1) bg_sp_fs_scroll_pane_g2

0xb28b,	// (0x00074dda) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00079896) bg_sp_fs_scroll_pane_g

0x1287,	// (0x0006add6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1287,	// (0x0006add6) list_medium_line_x2_t3_g4_g1

0x132e,	// (0x0006ae7d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x132e,	// (0x0006ae7d) list_medium_line_x2_t3_g4_g2

0x1293,	// (0x0006ade2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1293,	// (0x0006ade2) list_medium_line_x2_t3_g4_g3

0x129f,	// (0x0006adee) list_medium_line_x2_t3_g4_g4_ParamLimits

0x129f,	// (0x0006adee) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00078e11) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00078e11) list_medium_line_x2_t3_g4_g

0x80bc,	// (0x00071c0b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80bc,	// (0x00071c0b) list_medium_line_x2_t3_g4_t1

0x80d6,	// (0x00071c25) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80d6,	// (0x00071c25) list_medium_line_x2_t3_g4_t2

0x12d4,	// (0x0006ae23) list_medium_line_x2_t3_g4_t3_ParamLimits

0x12d4,	// (0x0006ae23) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007989d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007989d) list_medium_line_x2_t3_g4_t

0x6581,	// (0x000700d0) list_medium_line_g2_g1_ParamLimits

0x6581,	// (0x000700d0) list_medium_line_g2_g1

0x658d,	// (0x000700dc) list_medium_line_g2_g2_ParamLimits

0x658d,	// (0x000700dc) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007954f) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007954f) list_medium_line_g2_g

0x80f0,	// (0x00071c3f) list_medium_line_g2_t1_ParamLimits

0x80f0,	// (0x00071c3f) list_medium_line_g2_t1

0x6581,	// (0x000700d0) list_medium_line_t3_g2_g1_ParamLimits

0x6581,	// (0x000700d0) list_medium_line_t3_g2_g1

0x658d,	// (0x000700dc) list_medium_line_t3_g2_g2_ParamLimits

0x658d,	// (0x000700dc) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007954f) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007954f) list_medium_line_t3_g2_g

0x8105,	// (0x00071c54) list_medium_line_t3_g2_t1_ParamLimits

0x8105,	// (0x00071c54) list_medium_line_t3_g2_t1

0x811f,	// (0x00071c6e) list_medium_line_t3_g2_t2_ParamLimits

0x811f,	// (0x00071c6e) list_medium_line_t3_g2_t2

0x8135,	// (0x00071c84) list_medium_line_t3_g2_t3_ParamLimits

0x8135,	// (0x00071c84) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000798a4) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000798a4) list_medium_line_t3_g2_t

0x7cdb,	// (0x0007182a) list_medium_line_right_icon_g1

0x814f,	// (0x00071c9e) list_medium_line_right_icon_t1

0x6581,	// (0x000700d0) list_medium_line_t2_g1_ParamLimits

0x6581,	// (0x000700d0) list_medium_line_t2_g1

0x815d,	// (0x00071cac) list_medium_line_t2_t1_ParamLimits

0x815d,	// (0x00071cac) list_medium_line_t2_t1

0x8177,	// (0x00071cc6) list_medium_line_t2_t2_ParamLimits

0x8177,	// (0x00071cc6) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000798ab) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000798ab) list_medium_line_t2_t

0x6581,	// (0x000700d0) list_medium_line_t3_g1_ParamLimits

0x6581,	// (0x000700d0) list_medium_line_t3_g1

0x8190,	// (0x00071cdf) list_medium_line_t3_t1_ParamLimits

0x8190,	// (0x00071cdf) list_medium_line_t3_t1

0x81aa,	// (0x00071cf9) list_medium_line_t3_t2_ParamLimits

0x81aa,	// (0x00071cf9) list_medium_line_t3_t2

0x81c0,	// (0x00071d0f) list_medium_line_t3_t3_ParamLimits

0x81c0,	// (0x00071d0f) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000798b0) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000798b0) list_medium_line_t3_t

0x6581,	// (0x000700d0) list_medium_line_g3_g1_ParamLimits

0x6581,	// (0x000700d0) list_medium_line_g3_g1

0x81d5,	// (0x00071d24) list_medium_line_g3_g2_ParamLimits

0x81d5,	// (0x00071d24) list_medium_line_g3_g2

0x658d,	// (0x000700dc) list_medium_line_g3_g3_ParamLimits

0x658d,	// (0x000700dc) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000798b7) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000798b7) list_medium_line_g3_g

0x81e1,	// (0x00071d30) list_medium_line_g3_t1_ParamLimits

0x81e1,	// (0x00071d30) list_medium_line_g3_t1

0x6581,	// (0x000700d0) list_medium_line_t2_g3_g1_ParamLimits

0x6581,	// (0x000700d0) list_medium_line_t2_g3_g1

0x81d5,	// (0x00071d24) list_medium_line_t2_g3_g2_ParamLimits

0x81d5,	// (0x00071d24) list_medium_line_t2_g3_g2

0x658d,	// (0x000700dc) list_medium_line_t2_g3_g3_ParamLimits

0x658d,	// (0x000700dc) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000798b7) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000798b7) list_medium_line_t2_g3_g

0x81f6,	// (0x00071d45) list_medium_line_t2_g3_t1_ParamLimits

0x81f6,	// (0x00071d45) list_medium_line_t2_g3_t1

0x8210,	// (0x00071d5f) list_medium_line_t2_g3_t2_ParamLimits

0x8210,	// (0x00071d5f) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000798be) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000798be) list_medium_line_t2_g3_t

0x6581,	// (0x000700d0) list_medium_line_t3_g3_g1_ParamLimits

0x6581,	// (0x000700d0) list_medium_line_t3_g3_g1

0x81d5,	// (0x00071d24) list_medium_line_t3_g3_g2_ParamLimits

0x81d5,	// (0x00071d24) list_medium_line_t3_g3_g2

0x658d,	// (0x000700dc) list_medium_line_t3_g3_g3_ParamLimits

0x658d,	// (0x000700dc) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000798b7) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000798b7) list_medium_line_t3_g3_g

0x822e,	// (0x00071d7d) list_medium_line_t3_g3_t1_ParamLimits

0x822e,	// (0x00071d7d) list_medium_line_t3_g3_t1

0x8247,	// (0x00071d96) list_medium_line_t3_g3_t2_ParamLimits

0x8247,	// (0x00071d96) list_medium_line_t3_g3_t2

0x825d,	// (0x00071dac) list_medium_line_t3_g3_t3_ParamLimits

0x825d,	// (0x00071dac) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000798c3) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000798c3) list_medium_line_t3_g3_t

0x7e9e,	// (0x000719ed) list_medium_line_right_iconx2_g1

0x7cdb,	// (0x0007182a) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000798ca) list_medium_line_right_iconx2_g

0x8277,	// (0x00071dc6) list_medium_line_right_iconx2_t1

0x7e9e,	// (0x000719ed) list_medium_line_t2_right_iconx2_g1

0x7cdb,	// (0x0007182a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000798ca) list_medium_line_t2_right_iconx2_g

0x8285,	// (0x00071dd4) list_medium_line_t2_right_iconx2_t1

0x8295,	// (0x00071de4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000798cf) list_medium_line_t2_right_iconx2_t

0x82a7,	// (0x00071df6) list_medium_line_x4_t4_t1

0x82b5,	// (0x00071e04) list_medium_line_x4_t4_t2

0x82c5,	// (0x00071e14) list_medium_line_x4_t4_t3

0x82d5,	// (0x00071e24) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000798d4) list_medium_line_x4_t4_t

0x8328,	// (0x00071e77) tport_appsw_pane_ParamLimits

0x8328,	// (0x00071e77) tport_appsw_pane

0x8340,	// (0x00071e8f) tport_contact_pane_ParamLimits

0x8340,	// (0x00071e8f) tport_contact_pane

0x8358,	// (0x00071ea7) tport_listscroll_pane_ParamLimits

0x8358,	// (0x00071ea7) tport_listscroll_pane

0x8372,	// (0x00071ec1) cell_tport_appsw_pane_ParamLimits

0x8372,	// (0x00071ec1) cell_tport_appsw_pane

0xec1c,	// (0x0007876b) tport_appsw_pane_g1_ParamLimits

0xec1c,	// (0x0007876b) tport_appsw_pane_g1

0xb294,	// (0x00074de3) tport_contact_pane_g1

0xa792,	// (0x000742e1) tport_contact_pane_t1

0xb29d,	// (0x00074dec) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000798dd) tport_contact_pane_t

0xb2ab,	// (0x00074dfa) list_tport_pane

0xb2b4,	// (0x00074e03) scroll_pane_cp_030

0x83ba,	// (0x00071f09) cell_tport_appsw_pane_g1

0x83ca,	// (0x00071f19) cell_tport_appsw_pane_t1

0x83d8,	// (0x00071f27) grid_highlight_pane_cp019

0x83e0,	// (0x00071f2f) list_tport_double_graphic_pane_ParamLimits

0x83e0,	// (0x00071f2f) list_tport_double_graphic_pane

0xb8e2,	// (0x00075431) list_highlight_pane_cp023_ParamLimits

0xb8e2,	// (0x00075431) list_highlight_pane_cp023

0x83ed,	// (0x00071f3c) list_tport_double_graphic_pane_g1_ParamLimits

0x83ed,	// (0x00071f3c) list_tport_double_graphic_pane_g1

0x83fa,	// (0x00071f49) list_tport_double_graphic_pane_t1_ParamLimits

0x83fa,	// (0x00071f49) list_tport_double_graphic_pane_t1

0x840f,	// (0x00071f5e) list_tport_double_graphic_pane_t2_ParamLimits

0x840f,	// (0x00071f5e) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000798e9) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000798e9) list_tport_double_graphic_pane_t

0xad60,	// (0x000748af) main_cale_note_pane

0x5d45,	// (0x0006f894) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d45,	// (0x0006f894) cell_vitu2_function_top_wide_pane_cp01

0x7826,	// (0x00071375) wait_bar_pane_cp05_ParamLimits

0xb8e2,	// (0x00075431) listscroll_cmail_pane

0xb2bd,	// (0x00074e0c) list_cmail_pane

0x8421,	// (0x00071f70) list_cmail_body_pane

0x8436,	// (0x00071f85) list_single_cmail_header_caption_pane

0x844c,	// (0x00071f9b) list_single_cmail_header_detail_pane_ParamLimits

0x844c,	// (0x00071f9b) list_single_cmail_header_detail_pane

0xb2cd,	// (0x00074e1c) list_single_cmail_header_caption_pane_t1

0x8475,	// (0x00071fc4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8475,	// (0x00071fc4) list_single_cmail_header_detail_pane_g1

0xa2b7,	// (0x00073e06) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa2b7,	// (0x00073e06) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000798ee) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000798ee) list_single_cmail_header_detail_pane_g

0xa2c3,	// (0x00073e12) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa2c3,	// (0x00073e12) list_single_cmail_header_detail_pane_t1

0xa323,	// (0x00073e72) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa323,	// (0x00073e72) list_single_cmail_header_editor_pane_bg

0xa8ef,	// (0x0007443e) list_cmail_body_pane_g1

0xb2f1,	// (0x00074e40) list_cmail_body_pane_t1

0xec3c,	// (0x0007878b) list_single_cmail_header_editor_pane_bg_g1

0xc1c4,	// (0x00075d13) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec4c,	// (0x0007879b) list_single_cmail_header_editor_pane_bg_g1_copy2

0xec44,	// (0x00078793) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee60,	// (0x000789af) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec6c,	// (0x000787bb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec5c,	// (0x000787ab) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec64,	// (0x000787b3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc1a4,	// (0x00075cf3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x848d,	// (0x00071fdc) calenote_gesture_pane_ParamLimits

0x848d,	// (0x00071fdc) calenote_gesture_pane

0x84ad,	// (0x00071ffc) calenote_window_pane_ParamLimits

0x84ad,	// (0x00071ffc) calenote_window_pane

0xb2ff,	// (0x00074e4e) popup_note_window_cp01

0x84c9,	// (0x00072018) calenote_swipe_1_pane_ParamLimits

0x84c9,	// (0x00072018) calenote_swipe_1_pane

0x7c7d,	// (0x000717cc) calenote_swipe_2_pane_ParamLimits

0x7c7d,	// (0x000717cc) calenote_swipe_2_pane

0xac40,	// (0x0007478f) calenote_swipe_1_pane_g1_ParamLimits

0xac40,	// (0x0007478f) calenote_swipe_1_pane_g1

0xac4d,	// (0x0007479c) calenote_swipe_1_pane_g2_ParamLimits

0xac4d,	// (0x0007479c) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00079812) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00079812) calenote_swipe_1_pane_g

0xb311,	// (0x00074e60) calenote_swipe_1_pane_t1_ParamLimits

0xb311,	// (0x00074e60) calenote_swipe_1_pane_t1

0xac40,	// (0x0007478f) calenote_swipe_2_pane_g1_ParamLimits

0xac40,	// (0x0007478f) calenote_swipe_2_pane_g1

0xb330,	// (0x00074e7f) calenote_swipe_2_pane_g2_ParamLimits

0xb330,	// (0x00074e7f) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000798fa) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000798fa) calenote_swipe_2_pane_g

0xb33c,	// (0x00074e8b) calenote_swipe_2_pane_t1_ParamLimits

0xb33c,	// (0x00074e8b) calenote_swipe_2_pane_t1

0xad60,	// (0x000748af) main_mup_navstr_pane

0x4a12,	// (0x0006e561) main_mup3_pane_t7_ParamLimits

0x4a12,	// (0x0006e561) main_mup3_pane_t7

0x98c6,	// (0x00073415) main_mp4_pane_g6_ParamLimits

0x98c6,	// (0x00073415) main_mp4_pane_g6

0x9a6a,	// (0x000735b9) main_image3_pane_t4_ParamLimits

0x9a6a,	// (0x000735b9) main_image3_pane_t4

0x84de,	// (0x0007202d) popup_navstr_preview_pane_ParamLimits

0x84de,	// (0x0007202d) popup_navstr_preview_pane

0x84f2,	// (0x00072041) scroll_navstr_pane_ParamLimits

0x84f2,	// (0x00072041) scroll_navstr_pane

0xad60,	// (0x000748af) bg_popup_preview_window_pane_cp04

0xb363,	// (0x00074eb2) popup_navstr_preview_pane_t1

0x8506,	// (0x00072055) scroll_navstr_pane_g1_ParamLimits

0x8506,	// (0x00072055) scroll_navstr_pane_g1

0x851a,	// (0x00072069) scroll_navstr_pane_t1_ParamLimits

0x851a,	// (0x00072069) scroll_navstr_pane_t1

0xb308,	// (0x00074e57) bg_button_pane_cp014

0xb308,	// (0x00074e57) bg_button_pane_cp030

0x7b56,	// (0x000716a5) list_double_fisheye_pane_g4_ParamLimits

0x7b56,	// (0x000716a5) list_double_fisheye_pane_g4

0x7b62,	// (0x000716b1) list_double_fisheye_pane_g5_ParamLimits

0x7b62,	// (0x000716b1) list_double_fisheye_pane_g5

0xd744,	// (0x00077293) sp_fs_scroll_pane_cp03

0xb20d,	// (0x00074d5c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb219,	// (0x00074d68) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007982f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb225,	// (0x00074d74) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb2c5,	// (0x00074e14) sp_fs_scroll_pane_cp02

0xbeaa,	// (0x000759f9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbeaa,	// (0x000759f9) popup_sp_fs_calendar_preview_list_single_pane

0xad60,	// (0x000748af) main_cam6_pano_pane

0x950b,	// (0x0007305a) main_mup3_pane_ParamLimits

0xad60,	// (0x000748af) main_phacti_pane

0x76f9,	// (0x00071248) bg_button_pane_cp11

0x7713,	// (0x00071262) main_mobtv_info_pane_g2_ParamLimits

0x7713,	// (0x00071262) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007978f) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007978f) main_mobtv_info_pane_g

0x78f0,	// (0x0007143f) sc_clock_pane_t5_ParamLimits

0x78f0,	// (0x0007143f) sc_clock_pane_t5

0x79b8,	// (0x00071507) main_radioblah_pane_g1_ParamLimits

0xab8c,	// (0x000746db) main_radioblah_pane_t3_ParamLimits

0xab8c,	// (0x000746db) main_radioblah_pane_t3

0xaba4,	// (0x000746f3) main_radioblah_pane_t4_ParamLimits

0xaba4,	// (0x000746f3) main_radioblah_pane_t4

0x79e0,	// (0x0007152f) main_radioblah_text_pane_ParamLimits

0x79e0,	// (0x0007152f) main_radioblah_text_pane

0x79f2,	// (0x00071541) main_radioblah_info_pane_g1_ParamLimits

0x7a8b,	// (0x000715da) main_radioblah_info_pane_t4_ParamLimits

0x7a8b,	// (0x000715da) main_radioblah_info_pane_t4

0xb8e2,	// (0x00075431) main_sp_fs_calendar_pane

0x8531,	// (0x00072080) main_phacti_pane_g1

0x8539,	// (0x00072088) phacti_note_pane_ParamLimits

0x8539,	// (0x00072088) phacti_note_pane

0xb37a,	// (0x00074ec9) phacti_term_pane_ParamLimits

0xb37a,	// (0x00074ec9) phacti_term_pane

0xb38f,	// (0x00074ede) phacti_note_pane_t1_ParamLimits

0xb38f,	// (0x00074ede) phacti_note_pane_t1

0xa33a,	// (0x00073e89) phacti_term_pane_g1

0xa342,	// (0x00073e91) phacti_term_pane_t1_ParamLimits

0xa342,	// (0x00073e91) phacti_term_pane_t1

0xb3a6,	// (0x00074ef5) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbf49,	// (0x00075a98) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00079904) popup_sp_fs_calendar_preview_list_single_pane_g

0xb3ae,	// (0x00074efd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb3ae,	// (0x00074efd) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb3c4,	// (0x00074f13) aid_popup_sp_fs_bg_corner_pane

0xe1e3,	// (0x00077d32) popup_sp_fs_calendar_preview_bg_pane_g1

0xad60,	// (0x000748af) popup_sp_fs_calendar_preview_bg_pane

0xb3cc,	// (0x00074f1b) popup_sp_fs_calendar_preview_list_pane

0xdddb,	// (0x0007792a) bg_main_sp_fs_cale_pane_ParamLimits

0xdddb,	// (0x0007792a) bg_main_sp_fs_cale_pane

0xa375,	// (0x00073ec4) listscroll_cale_mrui_pane_ParamLimits

0xa375,	// (0x00073ec4) listscroll_cale_mrui_pane

0xa38a,	// (0x00073ed9) listscroll_sp_fs_schedule_track_pane

0xa393,	// (0x00073ee2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa393,	// (0x00073ee2) main_sp_fs_ctrlbar_pane_cp01

0xb3d4,	// (0x00074f23) main_sp_fs_ribbon_pane

0xa3a6,	// (0x00073ef5) popup_sp_fs_cale_preview_window

0x85ae,	// (0x000720fd) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85ae,	// (0x000720fd) list_single_sp_fs_schedule_track_pane

0xb8e2,	// (0x00075431) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb8e2,	// (0x00075431) bg_sp_fs_highlight_list_pane_cp03

0x85c1,	// (0x00072110) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85c1,	// (0x00072110) list_single_sp_fs_schedule_track_pane_g1

0x85cd,	// (0x0007211c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85cd,	// (0x0007211c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00079909) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00079909) list_single_sp_fs_schedule_track_pane_g

0x85d9,	// (0x00072128) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85d9,	// (0x00072128) list_single_sp_fs_schedule_track_pane_t1

0x85f3,	// (0x00072142) sp_fs_schedule_track_pane_ParamLimits

0x85f3,	// (0x00072142) sp_fs_schedule_track_pane

0xb3dc,	// (0x00074f2b) sp_fs_schedule_track_pane_g1

0xb3e4,	// (0x00074f33) sp_fs_schedule_track_pane_g2

0xb3ec,	// (0x00074f3b) sp_fs_schedule_track_pane_g3

0xb3f4,	// (0x00074f43) sp_fs_schedule_track_pane_g4

0xb3fc,	// (0x00074f4b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007990e) sp_fs_schedule_track_pane_g

0xec3c,	// (0x0007878b) bg_sp_fs_schedule_viewer_highlight_g1

0xc1c4,	// (0x00075d13) bg_sp_fs_schedule_viewer_highlight_g2

0xec44,	// (0x00078793) bg_sp_fs_schedule_viewer_highlight_g3

0xec4c,	// (0x0007879b) bg_sp_fs_schedule_viewer_highlight_g4

0xee60,	// (0x000789af) bg_sp_fs_schedule_viewer_highlight_g5

0xec5c,	// (0x000787ab) bg_sp_fs_schedule_viewer_highlight_g6

0xec64,	// (0x000787b3) bg_sp_fs_schedule_viewer_highlight_g7

0xec6c,	// (0x000787bb) bg_sp_fs_schedule_viewer_highlight_g8

0xc1a4,	// (0x00075cf3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00079919) bg_sp_fs_schedule_viewer_highlight_g

0xad60,	// (0x000748af) bg_main_sp_fs_ribbon_pane

0x8604,	// (0x00072153) main_sp_fs_ribbon_pane_g1

0xb404,	// (0x00074f53) main_sp_fs_ribbon_pane_t1

0x860d,	// (0x0007215c) main_sp_fs_ribbon_pane_t2

0xb413,	// (0x00074f62) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007992c) main_sp_fs_ribbon_pane_t

0xb422,	// (0x00074f71) main_sp_fs_ribbon_scheduler_pane

0xb42a,	// (0x00074f79) bg_main_sp_fs_ribbon_pane_g1

0xb433,	// (0x00074f82) bg_main_sp_fs_ribbon_pane_g2

0xb43c,	// (0x00074f8b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00079933) bg_main_sp_fs_ribbon_pane_g

0xb444,	// (0x00074f93) main_sp_fs_ribbon_scheduler_pane_g1

0xb44d,	// (0x00074f9c) main_sp_fs_ribbon_scheduler_pane_g2

0xb456,	// (0x00074fa5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007993a) main_sp_fs_ribbon_scheduler_pane_g

0xb45f,	// (0x00074fae) list_cale_mrui_pane

0x861c,	// (0x0007216b) sp_fs_scroll_pane_cp07_ParamLimits

0x861c,	// (0x0007216b) sp_fs_scroll_pane_cp07

0x8638,	// (0x00072187) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8638,	// (0x00072187) bg_sp_fs_schedule_viewer_highlight

0xb46c,	// (0x00074fbb) list_single_sp_fs_schedule_track_pane_cp01

0xb474,	// (0x00074fc3) list_sp_fs_schedule_track_pane

0xb47c,	// (0x00074fcb) sp_fs_scroll_pane_cp06_ParamLimits

0xb47c,	// (0x00074fcb) sp_fs_scroll_pane_cp06

0xe1e3,	// (0x00077d32) bgmain_sp_fs_calendar_pane_g1

0x8648,	// (0x00072197) list_single_cale_mrui_pane_ParamLimits

0x8648,	// (0x00072197) list_single_cale_mrui_pane

0xa3b8,	// (0x00073f07) list_single_cale_mrui_row_pane_ParamLimits

0xa3b8,	// (0x00073f07) list_single_cale_mrui_row_pane

0xa3c5,	// (0x00073f14) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa3c5,	// (0x00073f14) list_single_cale_mrui_row_pane_g1

0xa3fd,	// (0x00073f4c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa3fd,	// (0x00073f4c) list_single_cale_mrui_row_pane_t1

0x8669,	// (0x000721b8) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8669,	// (0x000721b8) list_single_cale_mrui_row_pane_t2

0xa40f,	// (0x00073f5e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa40f,	// (0x00073f5e) list_single_cale_mrui_row_pane_t3

0xa43e,	// (0x00073f8d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa43e,	// (0x00073f8d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00079948) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00079948) list_single_cale_mrui_row_pane_t

0x86d1,	// (0x00072220) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86d1,	// (0x00072220) list_single_cmail_header_editor_pane_bg_cp01

0x86f7,	// (0x00072246) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x86f7,	// (0x00072246) list_single_cmail_header_editor_pane_bg_cp02

0x8717,	// (0x00072266) main_radioblah_text_pane_t1_ParamLimits

0x8717,	// (0x00072266) main_radioblah_text_pane_t1

0xb49b,	// (0x00074fea) cam6_indi_pane_cp01

0xb4a3,	// (0x00074ff2) cam6_mode_pane_cp01

0xb4ab,	// (0x00074ffa) cam6_pano_pane

0xb4b4,	// (0x00075003) cam6_zoom_pane_cp01

0xb4bc,	// (0x0007500b) cam6_pano_image_pane

0xb4c7,	// (0x00075016) cam6_pano_pane_g1

0xa8ef,	// (0x0007443e) cam6_pano_pane_g2

0xb4d0,	// (0x0007501f) cam6_pano_pane_g3

0xb4d9,	// (0x00075028) cam6_pano_pane_g4

0xe7cf,	// (0x0007831e) cam6_pano_pane_g5

0xb4e2,	// (0x00075031) cam6_pano_pane_g6

0xa46d,	// (0x00073fbc) cam6_pano_pane_g7

0xb4ec,	// (0x0007503b) cam6_pano_pane_g8

0xb4f5,	// (0x00075044) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00079951) cam6_pano_pane_g

0xad60,	// (0x000748af) main_browser_tag_pane

0xb35b,	// (0x00074eaa) grid_navstr_albumart_pane

0xb500,	// (0x0007504f) cell_navstr_albumart_pane_ParamLimits

0xb500,	// (0x0007504f) cell_navstr_albumart_pane

0xb520,	// (0x0007506f) cell_navstr_albumart_pane_g1

0xdbec,	// (0x0007773b) cell_navstr_albumart_pane_g2

0xdbfc,	// (0x0007774b) cell_navstr_albumart_pane_g3

0xdbf4,	// (0x00077743) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00079964) cell_navstr_albumart_pane_g

0x8731,	// (0x00072280) bt_list_pane_ParamLimits

0x8731,	// (0x00072280) bt_list_pane

0x8745,	// (0x00072294) bt_list_pane_t1

0x8754,	// (0x000722a3) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007996d) bt_list_pane_t

0xad60,	// (0x000748af) main_cale_prevew_pane

0x8763,	// (0x000722b2) popup_cale_preview_window_ParamLimits

0x8763,	// (0x000722b2) popup_cale_preview_window

0xb8e2,	// (0x00075431) bg_popup_preview_window_pane_cp05_ParamLimits

0xb8e2,	// (0x00075431) bg_popup_preview_window_pane_cp05

0xb528,	// (0x00075077) list_cale_preview_pane_ParamLimits

0xb528,	// (0x00075077) list_cale_preview_pane

0x877e,	// (0x000722cd) list_double_cale_preview_pane_ParamLimits

0x877e,	// (0x000722cd) list_double_cale_preview_pane

0x8790,	// (0x000722df) list_single_cale_preview_pane_ParamLimits

0x8790,	// (0x000722df) list_single_cale_preview_pane

0x87a6,	// (0x000722f5) list_single_cale_preview_pane_g1

0x87ae,	// (0x000722fd) list_single_cale_preview_pane_t1_ParamLimits

0x87ae,	// (0x000722fd) list_single_cale_preview_pane_t1

0x87c3,	// (0x00072312) list_double_cale_preview_pane_g1

0x87cb,	// (0x0007231a) list_double_cale_preview_pane_t1_ParamLimits

0x87cb,	// (0x0007231a) list_double_cale_preview_pane_t1

0x87e0,	// (0x0007232f) list_double_cale_preview_pane_t2_ParamLimits

0x87e0,	// (0x0007232f) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00079972) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00079972) list_double_cale_preview_pane_t

0xad60,	// (0x000748af) main_ezdial_pane

0xb8e2,	// (0x00075431) main_sp_fs_email_pane_ParamLimits

0x7d05,	// (0x00071854) cmail_ddmenu_btn01_pane_ParamLimits

0x7d05,	// (0x00071854) cmail_ddmenu_btn01_pane

0x7d18,	// (0x00071867) cmail_ddmenu_btn02_pane_ParamLimits

0x7d18,	// (0x00071867) cmail_ddmenu_btn02_pane

0x7d3b,	// (0x0007188a) cmail_ddmenu_btn03_pane_ParamLimits

0x7d3b,	// (0x0007188a) cmail_ddmenu_btn03_pane

0x7d61,	// (0x000718b0) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d85,	// (0x000718d4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8421,	// (0x00071f70) list_cmail_body_pane_ParamLimits

0xb2db,	// (0x00074e2a) bg_button_pane_cp12

0xb2e4,	// (0x00074e33) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb2e4,	// (0x00074e33) list_single_cmail_header_detail_pane_g3

0xa2ff,	// (0x00073e4e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2ff,	// (0x00073e4e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000798f5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000798f5) list_single_cmail_header_detail_pane_t

0xa357,	// (0x00073ea6) phacti_term_pane_t2_ParamLimits

0xa357,	// (0x00073ea6) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000798ff) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000798ff) phacti_term_pane_t

0xb534,	// (0x00075083) aid_size_list_single_double

0x87f8,	// (0x00072347) popup_ezdial_listscroll_window

0x8814,	// (0x00072363) popup_number_entry_window_cp01

0xbf6b,	// (0x00075aba) bg_popup_call_pane_cp09

0xb540,	// (0x0007508f) ezdial_list_pane

0xb548,	// (0x00075097) scroll_pane_cp23

0xdddb,	// (0x0007792a) bg_button_pane_cp028_ParamLimits

0xdddb,	// (0x0007792a) bg_button_pane_cp028

0x8822,	// (0x00072371) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8822,	// (0x00072371) cmail_ddmenu_btn01_pane_g1

0x882e,	// (0x0007237d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x882e,	// (0x0007237d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00079977) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00079977) cmail_ddmenu_btn01_pane_g

0xb550,	// (0x0007509f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb550,	// (0x0007509f) cmail_ddmenu_btn01_pane_t1

0xdddb,	// (0x0007792a) bg_button_pane_cp029_ParamLimits

0xdddb,	// (0x0007792a) bg_button_pane_cp029

0x883a,	// (0x00072389) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x883a,	// (0x00072389) cmail_ddmenu_btn02_pane_g1

0x8853,	// (0x000723a2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8853,	// (0x000723a2) cmail_ddmenu_btn02_pane_t1

0xb8e2,	// (0x00075431) bg_button_pane_cp031_ParamLimits

0xb8e2,	// (0x00075431) bg_button_pane_cp031

0x883a,	// (0x00072389) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x883a,	// (0x00072389) cmail_ddmenu_btn03_pane_g1

0x8853,	// (0x000723a2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8853,	// (0x000723a2) cmail_ddmenu_btn03_pane_t1

0x55bc,	// (0x0006f10b) cell_dialer2_keypad_pane_t1_ParamLimits

0x55d6,	// (0x0006f125) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x55d6,	// (0x0006f125) cell_dialer2_keypad_pane_t1_copy1

0x750e,	// (0x0007105d) ncimui_group_button_pane

0xb8e2,	// (0x00075431) main_sp_fs_calendar_pane_ParamLimits

0x8436,	// (0x00071f85) list_single_cmail_header_caption_pane_ParamLimits

0xa36c,	// (0x00073ebb) aid_recal_txt_sm_pane

0xad60,	// (0x000748af) mian_recal_day_pane

0xa3a6,	// (0x00073ef5) popup_sp_fs_cale_preview_window_ParamLimits

0xb565,	// (0x000750b4) list_recal_day_pane

0xa490,	// (0x00073fdf) list_single_recal_day_pane_ParamLimits

0xa490,	// (0x00073fdf) list_single_recal_day_pane

0xb58c,	// (0x000750db) list_single_recal_day_pane_g1_ParamLimits

0xb58c,	// (0x000750db) list_single_recal_day_pane_g1

0xa4a2,	// (0x00073ff1) list_single_recal_day_pane_g2_ParamLimits

0xa4a2,	// (0x00073ff1) list_single_recal_day_pane_g2

0xa4ae,	// (0x00073ffd) list_single_recal_day_pane_g3_ParamLimits

0xa4ae,	// (0x00073ffd) list_single_recal_day_pane_g3

0x8877,	// (0x000723c6) list_single_recal_day_pane_g4_ParamLimits

0x8877,	// (0x000723c6) list_single_recal_day_pane_g4

0xa4ba,	// (0x00074009) list_single_recal_day_pane_g5_ParamLimits

0xa4ba,	// (0x00074009) list_single_recal_day_pane_g5

0xa4c6,	// (0x00074015) list_single_recal_day_pane_g6_ParamLimits

0xa4c6,	// (0x00074015) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00079986) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00079986) list_single_recal_day_pane_g

0xa4da,	// (0x00074029) list_single_recal_day_pane_t1

0xa4ec,	// (0x0007403b) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00079991) list_single_recal_day_pane_t

0x888f,	// (0x000723de) ncimui_query_button_pane_ParamLimits

0x888f,	// (0x000723de) ncimui_query_button_pane

0x889f,	// (0x000723ee) ncimui_query_button_pane_t1_ParamLimits

0x889f,	// (0x000723ee) ncimui_query_button_pane_t1

0xb598,	// (0x000750e7) ncimui_query_button_pane_t2_ParamLimits

0xb598,	// (0x000750e7) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00079996) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00079996) ncimui_query_button_pane_t

0x88b2,	// (0x00072401) query_button_pane_ParamLimits

0x88b2,	// (0x00072401) query_button_pane

0xad60,	// (0x000748af) bg_button_pane_cp0028

0xb5ab,	// (0x000750fa) query_button_pane_t1

0x364d,	// (0x0006d19c) main_tport_pane_ParamLimits

0x82e5,	// (0x00071e34) bg_popup_window_pane_cp01_ParamLimits

0x82e5,	// (0x00071e34) bg_popup_window_pane_cp01

0x8300,	// (0x00071e4f) heading_pane_cp08_ParamLimits

0x8300,	// (0x00071e4f) heading_pane_cp08

0x8313,	// (0x00071e62) heading_pane_cp07_ParamLimits

0x8313,	// (0x00071e62) heading_pane_cp07

0x83ba,	// (0x00071f09) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000798e2) cell_tport_appsw_pane_g

0x966e,	// (0x000731bd) input_candi_list_open_g1

0xc387,	// (0x00075ed6) list_cale_time_pane_g6_ParamLimits

0xc387,	// (0x00075ed6) list_cale_time_pane_g6

0x4416,	// (0x0006df65) aid_size_touch_calib_1_ParamLimits

0x4416,	// (0x0006df65) aid_size_touch_calib_1

0x4428,	// (0x0006df77) aid_size_touch_calib_2_ParamLimits

0x4428,	// (0x0006df77) aid_size_touch_calib_2

0x4440,	// (0x0006df8f) aid_size_touch_calib_3_ParamLimits

0x4440,	// (0x0006df8f) aid_size_touch_calib_3

0x445e,	// (0x0006dfad) aid_size_touch_calib_4_ParamLimits

0x445e,	// (0x0006dfad) aid_size_touch_calib_4

0x4476,	// (0x0006dfc5) main_touch_calib_button_group_pane_ParamLimits

0x4476,	// (0x0006dfc5) main_touch_calib_button_group_pane

0x448e,	// (0x0006dfdd) main_touch_calib_pane_g1_ParamLimits

0x44a0,	// (0x0006dfef) main_touch_calib_pane_g2_ParamLimits

0x44b2,	// (0x0006e001) main_touch_calib_pane_g3_ParamLimits

0x44c4,	// (0x0006e013) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000792a0) main_touch_calib_pane_g_ParamLimits

0x44d6,	// (0x0006e025) main_touch_calib_pane_t1_ParamLimits

0x44f0,	// (0x0006e03f) main_touch_calib_pane_t2_ParamLimits

0x450a,	// (0x0006e059) main_touch_calib_pane_t3_ParamLimits

0x451e,	// (0x0006e06d) main_touch_calib_pane_t4_ParamLimits

0x4532,	// (0x0006e081) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000792a9) main_touch_calib_pane_t_ParamLimits

0xe56f,	// (0x000780be) list_single_fp_cale_pane_g3_ParamLimits

0xe56f,	// (0x000780be) list_single_fp_cale_pane_g3

0x950b,	// (0x0007305a) bg_button_pane_cp012_ParamLimits

0x950b,	// (0x0007305a) bg_vkb2_func_pane_cp03_ParamLimits

0x6537,	// (0x00070086) cell_vitu2_function_top_pane_g1_ParamLimits

0x950b,	// (0x0007305a) bg_vkb2_func_pane_cp04_ParamLimits

0x7499,	// (0x00070fe8) main_ncimui_button_group_pane_ParamLimits

0x7499,	// (0x00070fe8) main_ncimui_button_group_pane

0x74f9,	// (0x00071048) main_ncimui_pane_t3_ParamLimits

0x74f9,	// (0x00071048) main_ncimui_pane_t3

0xb371,	// (0x00074ec0) phacti_button_group_pane

0xb534,	// (0x00075083) aid_size_list_single_double_ParamLimits

0x87f8,	// (0x00072347) popup_ezdial_listscroll_window_ParamLimits

0x8814,	// (0x00072363) popup_number_entry_window_cp01_ParamLimits

0x88c5,	// (0x00072414) phacti_button_pane_ParamLimits

0x88c5,	// (0x00072414) phacti_button_pane

0xad60,	// (0x000748af) bg_button_pane_cp14

0xb5b9,	// (0x00075108) phacti_button_pane_t1

0x88d6,	// (0x00072425) main_touch_calib_button_pane_ParamLimits

0x88d6,	// (0x00072425) main_touch_calib_button_pane

0xb86d,	// (0x000753bc) bg_button_pane_cp18_ParamLimits

0xb86d,	// (0x000753bc) bg_button_pane_cp18

0xb5c7,	// (0x00075116) main_touch_calib_button_pane_t1_ParamLimits

0xb5c7,	// (0x00075116) main_touch_calib_button_pane_t1

0xb902,	// (0x00075451) main_touch_calib_button_pane_t2_ParamLimits

0xb902,	// (0x00075451) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007999b) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007999b) main_touch_calib_button_pane_t

0xad60,	// (0x000748af) cell_ncimui_button_pane

0xad60,	// (0x000748af) bg_button_pane_cp032

0xb920,	// (0x0007546f) cell_ncimui_button_pane_t1

0x9a4a,	// (0x00073599) image3_infobar_pane_ParamLimits

0x9a4a,	// (0x00073599) image3_infobar_pane

0x791c,	// (0x0007146b) fs_bigclock_status_pane_ParamLimits

0x791c,	// (0x0007146b) fs_bigclock_status_pane

0x7929,	// (0x00071478) main_fs_bigclock_clock_pane_ParamLimits

0x7929,	// (0x00071478) main_fs_bigclock_clock_pane

0x7947,	// (0x00071496) main_fs_bigclock_indi_pane_ParamLimits

0x7947,	// (0x00071496) main_fs_bigclock_indi_pane

0x7979,	// (0x000714c8) main_fs_bigclock_swipe_pane_ParamLimits

0x7979,	// (0x000714c8) main_fs_bigclock_swipe_pane

0xad60,	// (0x000748af) main_fs_clock_dumped_data

0xa9fc,	// (0x0007454b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xa9fc,	// (0x0007454b) list_single_fs_bigclock_indicator_pane_g1

0xaa17,	// (0x00074566) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xaa17,	// (0x00074566) list_single_fs_bigclock_indicator_pane_g2

0xaa31,	// (0x00074580) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xaa31,	// (0x00074580) list_single_fs_bigclock_indicator_pane_g3

0xaa4b,	// (0x0007459a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xaa4b,	// (0x0007459a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000797c3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000797c3) list_single_fs_bigclock_indicator_pane_g

0xaa76,	// (0x000745c5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xaa76,	// (0x000745c5) list_single_fs_bigclock_indicator_pane_t1

0xaa9e,	// (0x000745ed) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xaa9e,	// (0x000745ed) list_single_fs_bigclock_indicator_pane_t2

0xaac6,	// (0x00074615) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xaac6,	// (0x00074615) list_single_fs_bigclock_indicator_pane_t3

0xaaee,	// (0x0007463d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xaaee,	// (0x0007463d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000797ce) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000797ce) list_single_fs_bigclock_indicator_pane_t

0xb92e,	// (0x0007547d) image3_infobar_fav_pane_ParamLimits

0xb92e,	// (0x0007547d) image3_infobar_fav_pane

0xb93e,	// (0x0007548d) image3_infobar_loc_pane_ParamLimits

0xb93e,	// (0x0007548d) image3_infobar_loc_pane

0xb952,	// (0x000754a1) image3_infobar_time_pane_ParamLimits

0xb952,	// (0x000754a1) image3_infobar_time_pane

0xe1e3,	// (0x00077d32) image3_infobar_time_pane_g1

0xb962,	// (0x000754b1) image3_infobar_time_pane_t1

0xe1e3,	// (0x00077d32) image3_infobar_loc_pane_g1

0xb970,	// (0x000754bf) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000799a0) image3_infobar_loc_pane_g

0xb978,	// (0x000754c7) image3_infobar_loc_pane_t1

0xe1e3,	// (0x00077d32) image3_infobar_fav_pane_g1

0xb986,	// (0x000754d5) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000799a5) image3_infobar_fav_pane_g

0xb98e,	// (0x000754dd) fs_bigclock_status_battery_pane

0xb997,	// (0x000754e6) fs_bigclock_status_signal_pane

0xb9a0,	// (0x000754ef) fs_bigclock_status_title_pane

0xb9a9,	// (0x000754f8) fs_bigclock_status_signal_pane_g1

0xb9b2,	// (0x00075501) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000799aa) fs_bigclock_status_signal_pane_g

0xb9ba,	// (0x00075509) fs_bigclock_status_battery_pane_g1

0xb9c3,	// (0x00075512) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000799af) fs_bigclock_status_battery_pane_g

0xb9cb,	// (0x0007551a) fs_bigclock_status_title_pane_t1

0x88eb,	// (0x0007243a) main_fs_bigclock_clock_pane_g1

0x88eb,	// (0x0007243a) main_fs_bigclock_clock_pane_g2

0x88fc,	// (0x0007244b) main_fs_bigclock_clock_pane_g3

0x88fc,	// (0x0007244b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000799b4) main_fs_bigclock_clock_pane_g

0x890f,	// (0x0007245e) main_fs_bigclock_clock_pane_t1

0x8925,	// (0x00072474) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000799bd) main_fs_bigclock_clock_pane_t

0xb9d9,	// (0x00075528) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb9d9,	// (0x00075528) list_single_fs_bigclock_indicator_pane

0xb9ea,	// (0x00075539) list_single_fs_bigclock_pane_ParamLimits

0xb9ea,	// (0x00075539) list_single_fs_bigclock_pane

0xba10,	// (0x0007555f) main_fs_bigclock_indicator_pane_t1

0xba1f,	// (0x0007556e) list_single_fs_bigclock_pane_g1

0xba27,	// (0x00075576) list_single_fs_bigclock_pane_t1

0xe1e3,	// (0x00077d32) main_fs_bigclock_swipe_pane_g1

0xba6a,	// (0x000755b9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000799ce) main_fs_bigclock_swipe_pane_g

0xba72,	// (0x000755c1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xba72,	// (0x000755c1) main_fs_bigclock_swipe_pane_t1

0x252c,	// (0x0006c07b) call_type_pane_ParamLimits

0xad60,	// (0x000748af) main_btmg_pane

0xa3f1,	// (0x00073f40) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa3f1,	// (0x00073f40) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00079941) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00079941) list_single_cale_mrui_row_pane_g

0xa47f,	// (0x00073fce) list_recal_vselct_arw_lo_pane

0xb584,	// (0x000750d3) list_recal_vselct_arw_up_pane

0xa487,	// (0x00073fd6) list_recal_vselct_pane

0x897f,	// (0x000724ce) btmg_button_pane

0x8989,	// (0x000724d8) main_btmg_pane_g1

0xad60,	// (0x000748af) bg_button_pane_cp044

0xba8f,	// (0x000755de) btmg_button_pane_t1

0xddc7,	// (0x00077916) aid_listscroll_gen

0xb8e2,	// (0x00075431) main_cntbar_detail_pane

0xb2bd,	// (0x00074e0c) list_cmail_folder_pane

0xd744,	// (0x00077293) sp_fs_scroll_pane_cp03_ParamLimits

0x8993,	// (0x000724e2) list_single_fs_dyc_pane_cp01_ParamLimits

0x8993,	// (0x000724e2) list_single_fs_dyc_pane_cp01

0xba9d,	// (0x000755ec) aid_size_cmail_indent

0xa4fe,	// (0x0007404d) list_single_dyc_row_pane_cp01

0x89db,	// (0x0007252a) cntbar_detail_list_pane_ParamLimits

0x89db,	// (0x0007252a) cntbar_detail_list_pane

0x8a27,	// (0x00072576) main_cntbar_detail_cont_pane_ParamLimits

0x8a27,	// (0x00072576) main_cntbar_detail_cont_pane

0xd744,	// (0x00077293) scroll_pane_cp032_ParamLimits

0xd744,	// (0x00077293) scroll_pane_cp032

0x8a3b,	// (0x0007258a) cntbar_detail_list_event_pane_ParamLimits

0x8a3b,	// (0x0007258a) cntbar_detail_list_event_pane

0x89eb,	// (0x0007253a) cntbar_detail_list_shct_pane

0xc212,	// (0x00075d61) aid_list_gen

0xbaa6,	// (0x000755f5) aid_scroll

0xbaaf,	// (0x000755fe) aid_size_touch_scroll_bar

0x6c38,	// (0x00070787) aid_list_double

0x6c26,	// (0x00070775) aid_list_single

0x6c26,	// (0x00070775) aid_list_single_lg

0x8a4b,	// (0x0007259a) aid_list_z_g_a_sm

0x8a53,	// (0x000725a2) aid_list_z_g_d

0x8a5b,	// (0x000725aa) aid_txt_z_prm

0x8a69,	// (0x000725b8) aid_txt_z_prm_cp01

0x8a77,	// (0x000725c6) aid_txt_z_sec

0x8a85,	// (0x000725d4) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a85,	// (0x000725d4) main_cntbar_detail_cont_pane_g1

0x8a99,	// (0x000725e8) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a99,	// (0x000725e8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000799d3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000799d3) main_cntbar_detail_cont_pane_g

0xbab8,	// (0x00075607) main_cntbar_detail_cont_pane_t1

0xbac6,	// (0x00075615) main_cntbar_detail_cont_pane_t2

0xbad4,	// (0x00075623) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000799d8) main_cntbar_detail_cont_pane_t

0x8aa9,	// (0x000725f8) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8aa9,	// (0x000725f8) cell_cntbar_detail_list_shct_pane

0xbae2,	// (0x00075631) cntbar_detail_list_shct_pane_g1

0xbaeb,	// (0x0007563a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000799df) cntbar_detail_list_shct_pane_g

0x8abd,	// (0x0007260c) cntbar_detail_list_event_pane_g1_ParamLimits

0x8abd,	// (0x0007260c) cntbar_detail_list_event_pane_g1

0x8ac9,	// (0x00072618) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ac9,	// (0x00072618) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000799e4) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000799e4) cntbar_detail_list_event_pane_g

0x8b35,	// (0x00072684) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b35,	// (0x00072684) cntbar_detail_list_event_pane_t1

0x8b4a,	// (0x00072699) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b4a,	// (0x00072699) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000799f1) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000799f1) cntbar_detail_list_event_pane_t

0xe1e3,	// (0x00077d32) cell_cntbar_detail_list_shct_pane_g1

0xc989,	// (0x000764d8) navi_pane_mv_g3

0xb8e2,	// (0x00075431) main_cntbar_detail_pane_ParamLimits

0xad60,	// (0x000748af) main_notif_wgt_pane

0x9860,	// (0x000733af) aid_tch_main_mp4_pane_g4

0x9a42,	// (0x00073591) popup_slider_window_cp02

0xa475,	// (0x00073fc4) list_recal_day_event_pane

0x89a9,	// (0x000724f8) cntbar_detail_btn_pane_ParamLimits

0x89a9,	// (0x000724f8) cntbar_detail_btn_pane

0x89c2,	// (0x00072511) cntbar_detail_btn_pane_cp01_ParamLimits

0x89c2,	// (0x00072511) cntbar_detail_btn_pane_cp01

0x89eb,	// (0x0007253a) cntbar_detail_list_shct_pane_ParamLimits

0x89fb,	// (0x0007254a) cntbar_detail_pane_g1_ParamLimits

0x89fb,	// (0x0007254a) cntbar_detail_pane_g1

0x8a0b,	// (0x0007255a) cntbar_detail_pane_t1_ParamLimits

0x8a0b,	// (0x0007255a) cntbar_detail_pane_t1

0x8ad5,	// (0x00072624) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ad5,	// (0x00072624) cntbar_detail_list_event_pane_g3

0x8aed,	// (0x0007263c) cntbar_detail_list_event_pane_g4_ParamLimits

0x8aed,	// (0x0007263c) cntbar_detail_list_event_pane_g4

0x8b05,	// (0x00072654) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b05,	// (0x00072654) cntbar_detail_list_event_pane_g5

0x8b1d,	// (0x0007266c) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b1d,	// (0x0007266c) cntbar_detail_list_event_pane_g6

0x8b5f,	// (0x000726ae) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b5f,	// (0x000726ae) cntbar_detail_list_event_pane_t3

0x8b71,	// (0x000726c0) popup_notif_wgt_window_ParamLimits

0x8b71,	// (0x000726c0) popup_notif_wgt_window

0x8b8a,	// (0x000726d9) popup_submenu_window_cp01_ParamLimits

0x8b8a,	// (0x000726d9) popup_submenu_window_cp01

0xbf6b,	// (0x00075aba) bg_popup_window_pane_cp10

0xbaf4,	// (0x00075643) listscroll_notif_wgt_pane

0xbb06,	// (0x00075655) list_notif_wgt_window

0xbb0f,	// (0x0007565e) scroll_pane_cp033

0x8ba0,	// (0x000726ef) list_notif_wgt_row_pane_ParamLimits

0x8ba0,	// (0x000726ef) list_notif_wgt_row_pane

0xbb18,	// (0x00075667) aid_size_list_notif_wgt_del

0xbb25,	// (0x00075674) list_notif_wgt_row_pane_g1

0xbb31,	// (0x00075680) list_notif_wgt_row_pane_g2

0xbb40,	// (0x0007568f) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000799f8) list_notif_wgt_row_pane_g

0xbb4d,	// (0x0007569c) list_notif_wgt_row_pane_t1

0xbb63,	// (0x000756b2) list_notif_wgt_row_pane_t2

0xbb75,	// (0x000756c4) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000799ff) list_notif_wgt_row_pane_t

0xee7a,	// (0x000789c9) list_recal_day_event_pane_g1

0xbb87,	// (0x000756d6) list_recal_day_event_pane_t1

0xad60,	// (0x000748af) bg_button_pane_cp045

0x8bb0,	// (0x000726ff) cntbar_detail_btn_pane_t1

0xdddb,	// (0x0007792a) main_callh_pane_ParamLimits

0xdddb,	// (0x0007792a) main_callh_pane

0xad60,	// (0x000748af) main_coverflow0_pane

0xad60,	// (0x000748af) main_wgtman_pane

0x7991,	// (0x000714e0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7991,	// (0x000714e0) main_fs_bigclock_unlock_btn_pane

0x83b2,	// (0x00071f01) bg_button_pane_cp16

0x83c2,	// (0x00071f11) cell_tport_appsw_pane_g3

0x8bbe,	// (0x0007270d) cf0_flow_pane_ParamLimits

0x8bbe,	// (0x0007270d) cf0_flow_pane

0xbb96,	// (0x000756e5) listscroll_cf0_pane

0xbba1,	// (0x000756f0) main_cf0_pane_g1

0x8bd3,	// (0x00072722) main_cf0_pane_t1_ParamLimits

0x8bd3,	// (0x00072722) main_cf0_pane_t1

0x8bea,	// (0x00072739) main_cf0_pane_t2_ParamLimits

0x8bea,	// (0x00072739) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00079a0b) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00079a0b) main_cf0_pane_t

0xbbb3,	// (0x00075702) scroll_pane_cp11

0x8c01,	// (0x00072750) cf0_flow_pane_g1

0x8c09,	// (0x00072758) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00079a10) cf0_flow_pane_g

0x8c11,	// (0x00072760) cf0_flow_pane_t1

0xad60,	// (0x000748af) main_call6_pane

0xad60,	// (0x000748af) main_calllock_pane

0x8c1f,	// (0x0007276e) call6_btn_grp_pane_ParamLimits

0x8c1f,	// (0x0007276e) call6_btn_grp_pane

0x8c39,	// (0x00072788) call6_pane_g1_ParamLimits

0x8c39,	// (0x00072788) call6_pane_g1

0x8c4f,	// (0x0007279e) popup_call6_1st_window_ParamLimits

0x8c4f,	// (0x0007279e) popup_call6_1st_window

0x8c60,	// (0x000727af) popup_call6_2nd_window_ParamLimits

0x8c60,	// (0x000727af) popup_call6_2nd_window

0x8c71,	// (0x000727c0) cell_call6_btn_pane_ParamLimits

0x8c71,	// (0x000727c0) cell_call6_btn_pane

0xbf6b,	// (0x00075aba) bg_popup_call2_in_pane_cp03

0xbbbe,	// (0x0007570d) popup_call6_1st_window_g1

0xbbc6,	// (0x00075715) popup_call6_1st_window_g2

0xbbce,	// (0x0007571d) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00079a15) popup_call6_1st_window_g

0xbbd6,	// (0x00075725) popup_call6_1st_window_t1

0xbbe5,	// (0x00075734) popup_call6_1st_window_t2

0xbbf3,	// (0x00075742) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00079a1c) popup_call6_1st_window_t

0xbf6b,	// (0x00075aba) bg_popup_call2_in_pane_cp04

0xbbbe,	// (0x0007570d) popup_call6_2nd_window_g1

0xbbc6,	// (0x00075715) popup_call6_2nd_window_g2

0xbbce,	// (0x0007571d) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00079a15) popup_call6_2nd_window_g

0xbbd6,	// (0x00075725) popup_call6_2nd_window_t1

0x9519,	// (0x00073068) bg_button_pane_cp15

0x9cca,	// (0x00073819) cell_call6_btn_pane_g1

0x9cd3,	// (0x00073822) cell_call6_btn_pane_t1

0x8c84,	// (0x000727d3) listscroll_wgtman_pane_ParamLimits

0x8c84,	// (0x000727d3) listscroll_wgtman_pane

0x8ca5,	// (0x000727f4) wgtman_btn_pane_ParamLimits

0x8ca5,	// (0x000727f4) wgtman_btn_pane

0xc790,	// (0x000762df) aid_scroll_copy1

0xbc01,	// (0x00075750) list_wgtman_pane

0x8ce8,	// (0x00072837) wgtman_btn_pane_g1_ParamLimits

0x8ce8,	// (0x00072837) wgtman_btn_pane_g1

0x8d14,	// (0x00072863) wgtman_btn_pane_t1_ParamLimits

0x8d14,	// (0x00072863) wgtman_btn_pane_t1

0xbc0b,	// (0x0007575a) wgtman_btn_pane_t2_ParamLimits

0xbc0b,	// (0x0007575a) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00079a23) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00079a23) wgtman_btn_pane_t

0x8d51,	// (0x000728a0) listrow_wgtman_pane_ParamLimits

0x8d51,	// (0x000728a0) listrow_wgtman_pane

0x8d63,	// (0x000728b2) listrow_wgtman_pane_g1

0x8d70,	// (0x000728bf) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00079a28) listrow_wgtman_pane_g

0x8d8e,	// (0x000728dd) listrow_wgtman_pane_t1

0x8da6,	// (0x000728f5) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00079a2d) listrow_wgtman_pane_t

0x8dcc,	// (0x0007291b) wait_bar_pane_cp09

0xbc22,	// (0x00075771) main_calllock_btn_pane

0xbc2c,	// (0x0007577b) main_calllock_pane_g1

0xad60,	// (0x000748af) bg_button_pane_cp17

0xbc38,	// (0x00075787) main_calllock_btn_pane_g1

0xbc41,	// (0x00075790) main_calllock_btn_pane_t1

0xad60,	// (0x000748af) main_dialer3_pane

0xad60,	// (0x000748af) main_fmrd2_pane

0xe1e3,	// (0x00077d32) main_fs_bigclock_unlock_btn_pane_g1

0x8de6,	// (0x00072935) main_fs_bigclock_unlock_btn_pane_t1

0x8df4,	// (0x00072943) area_fmrd2_info_pane_ParamLimits

0x8df4,	// (0x00072943) area_fmrd2_info_pane

0x8e05,	// (0x00072954) area_fmrd2_visual_pane_ParamLimits

0x8e05,	// (0x00072954) area_fmrd2_visual_pane

0x8e13,	// (0x00072962) fmrd2_indi_pane_ParamLimits

0x8e13,	// (0x00072962) fmrd2_indi_pane

0x8e20,	// (0x0007296f) area_fmrd2_visual_pane_g1

0x8e28,	// (0x00072977) area_fmrd2_visual_pane_t1

0x8e38,	// (0x00072987) area_fmrd2_visual_pane_t2

0x8e48,	// (0x00072997) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00079a37) area_fmrd2_visual_pane_t

0x8e58,	// (0x000729a7) area_fmrd2_info_pane_g1

0x8e60,	// (0x000729af) area_fmrd2_info_pane_t1

0x8e70,	// (0x000729bf) area_fmrd2_info_pane_t2

0x8e80,	// (0x000729cf) area_fmrd2_info_pane_t3

0x8e90,	// (0x000729df) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00079a3e) area_fmrd2_info_pane_t

0x8e9e,	// (0x000729ed) fmrd2_indi_pane_t1

0x8eae,	// (0x000729fd) fmrd2_indi_pane_t2

0x8ebe,	// (0x00072a0d) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00079a47) fmrd2_indi_pane_t

0xaa5a,	// (0x000745a9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xaa5a,	// (0x000745a9) list_single_fs_bigclock_indicator_pane_g5

0xab0b,	// (0x0007465a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xab0b,	// (0x0007465a) list_single_fs_bigclock_indicator_pane_t5

0x854d,	// (0x0007209c) aid_cell_bcale_month_pane_ParamLimits

0x854d,	// (0x0007209c) aid_cell_bcale_month_pane

0x856b,	// (0x000720ba) bcale_month_pane_ParamLimits

0x856b,	// (0x000720ba) bcale_month_pane

0x858f,	// (0x000720de) bcale_preview_pane_ParamLimits

0x858f,	// (0x000720de) bcale_preview_pane

0xba27,	// (0x00075576) list_single_fs_bigclock_pane_t1_ParamLimits

0xba46,	// (0x00075595) list_single_fs_bigclock_pane_t2_ParamLimits

0xba46,	// (0x00075595) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000799c9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000799c9) list_single_fs_bigclock_pane_t

0x8dde,	// (0x0007292d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00079a32) main_fs_bigclock_unlock_btn_pane_g

0x8ece,	// (0x00072a1d) aid_dia3_key_size_ParamLimits

0x8ece,	// (0x00072a1d) aid_dia3_key_size

0x8edd,	// (0x00072a2c) aid_dia3_listrow_size_ParamLimits

0x8edd,	// (0x00072a2c) aid_dia3_listrow_size

0x8ef2,	// (0x00072a41) dia3_keypad_fun_pane_ParamLimits

0x8ef2,	// (0x00072a41) dia3_keypad_fun_pane

0x8f0e,	// (0x00072a5d) dia3_keypad_num_pane_ParamLimits

0x8f0e,	// (0x00072a5d) dia3_keypad_num_pane

0x8f29,	// (0x00072a78) dia3_listscroll_pane_ParamLimits

0x8f29,	// (0x00072a78) dia3_listscroll_pane

0x8f3c,	// (0x00072a8b) dia3_numentry_pane_ParamLimits

0x8f3c,	// (0x00072a8b) dia3_numentry_pane

0xbc50,	// (0x0007579f) dia3_list_pane

0xbc5b,	// (0x000757aa) scroll_pane_cp12

0xad60,	// (0x000748af) bg_dia3_numentry_pane

0x8f50,	// (0x00072a9f) dia3_numentry_pane_t1

0x8f5f,	// (0x00072aae) cell_dia3_key_num_pane

0x8f67,	// (0x00072ab6) cell_dia3_key0_fun_pane_ParamLimits

0x8f67,	// (0x00072ab6) cell_dia3_key0_fun_pane

0x8f7b,	// (0x00072aca) cell_dia3_key1_fun_pane_ParamLimits

0x8f7b,	// (0x00072aca) cell_dia3_key1_fun_pane

0x8f93,	// (0x00072ae2) dia3_listrow_pane

0xa7ad,	// (0x000742fc) bg_dia3_numentry_pane_g1

0xad60,	// (0x000748af) bg_button_pane_cp21

0xbc66,	// (0x000757b5) cell_dia3_key_num_pane_t1

0xbc74,	// (0x000757c3) cell_dia3_key_num_pane_t2

0xbc83,	// (0x000757d2) cell_dia3_key_num_pane_t3

0xbc92,	// (0x000757e1) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00079a4e) cell_dia3_key_num_pane_t

0xad60,	// (0x000748af) bg_button_pane_cp19

0x8fa5,	// (0x00072af4) cell_dia3_key0_fun_pane_g1

0xad60,	// (0x000748af) bg_button_pane_cp20

0x8fad,	// (0x00072afc) cell_dia3_key1_fun_pane_g1

0x8fb5,	// (0x00072b04) area_left_week_number_pane

0x8fc1,	// (0x00072b10) area_top_day_name_pane

0x8fd4,	// (0x00072b23) frame_month_view_pane

0xbca1,	// (0x000757f0) grid_month_view_pane

0x8fe7,	// (0x00072b36) cell_top_day_name_pane_ParamLimits

0x8fe7,	// (0x00072b36) cell_top_day_name_pane

0x9014,	// (0x00072b63) cell_area_left_week_number_pane_ParamLimits

0x9014,	// (0x00072b63) cell_area_left_week_number_pane

0x9028,	// (0x00072b77) cell_month_view_pane_ParamLimits

0x9028,	// (0x00072b77) cell_month_view_pane

0xbcaf,	// (0x000757fe) frm_month_g1

0x9055,	// (0x00072ba4) frm_month_g2

0x9068,	// (0x00072bb7) frm_month_g3

0x907b,	// (0x00072bca) frm_month_g4

0x908e,	// (0x00072bdd) frm_month_g5

0x90a1,	// (0x00072bf0) frm_month_g6

0x90b4,	// (0x00072c03) frm_month_g7

0xbcbc,	// (0x0007580b) frm_month_g8

0x90c7,	// (0x00072c16) frm_month_g9

0x90d7,	// (0x00072c26) frm_month_g10

0x90e7,	// (0x00072c36) frm_month_g11

0x90f7,	// (0x00072c46) frm_month_g12

0x9109,	// (0x00072c58) frm_month_g13

0x911b,	// (0x00072c6a) frm_month_g14

0x912f,	// (0x00072c7e) frm_month_g15

0x9143,	// (0x00072c92) frm_month_g16

0x000f,

0xff08,	// (0x00079a57) frm_month_g

0xbcc9,	// (0x00075818) cell_top_day_name_pane_t1

0x9157,	// (0x00072ca6) cell_area_left_week_number_pane_g1

0x9163,	// (0x00072cb2) cell_area_left_week_number_pane_t1

0xe44f,	// (0x00077f9e) cell_month_view_pane_g1

0x9176,	// (0x00072cc5) cell_month_view_pane_t1

0xad60,	// (0x000748af) main_fps_pane

0xad28,	// (0x00074877) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xad28,	// (0x00074877) cmail_ddmenu_btn02_pane_cp1

0xad44,	// (0x00074893) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xad44,	// (0x00074893) cmail_ddmenu_btn02_pane_cp2

0x8846,	// (0x00072395) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8846,	// (0x00072395) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007997c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007997c) cmail_ddmenu_btn02_pane_g

0x8865,	// (0x000723b4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8865,	// (0x000723b4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00079981) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00079981) cmail_ddmenu_btn02_pane_t

0x9189,	// (0x00072cd8) fps_text_pane_ParamLimits

0x9189,	// (0x00072cd8) fps_text_pane

0x91a0,	// (0x00072cef) main_fps_pane_g1_ParamLimits

0x91a0,	// (0x00072cef) main_fps_pane_g1

0x91ba,	// (0x00072d09) wait_bar_pane_cp010_ParamLimits

0x91ba,	// (0x00072d09) wait_bar_pane_cp010

0x91cb,	// (0x00072d1a) fps_text_pane_t1_ParamLimits

0x91cb,	// (0x00072d1a) fps_text_pane_t1

0xb8f0,	// (0x0007543f) cam4_image_uncrop_pane_g1

0xb8f9,	// (0x00075448) cam4_image_uncrop_pane_g2

0x5a62,	// (0x0006f5b1) cam4_image_uncrop_pane_g3

0x5a6b,	// (0x0006f5ba) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007943d) cam4_image_uncrop_pane_g

0x8f93,	// (0x00072ae2) dia3_listrow_pane_ParamLimits

0xad60,	// (0x000748af) main_phob2_pane

0x8383,	// (0x00071ed2) cell_tport_appsw_pane_cp02_ParamLimits

0x8383,	// (0x00071ed2) cell_tport_appsw_pane_cp02

0x8397,	// (0x00071ee6) cell_tport_appsw_pane_cp03_ParamLimits

0x8397,	// (0x00071ee6) cell_tport_appsw_pane_cp03

0xad60,	// (0x000748af) phob2_contact_card_pane

0xad60,	// (0x000748af) phob2_listscroll_pane

0xbcdc,	// (0x0007582b) phob2_list_pane

0xbce4,	// (0x00075833) scroll_pane_cp034

0x91e3,	// (0x00072d32) phob2_cc_data_pane_ParamLimits

0x91e3,	// (0x00072d32) phob2_cc_data_pane

0x9202,	// (0x00072d51) phob2_cc_listscroll_pane_ParamLimits

0x9202,	// (0x00072d51) phob2_cc_listscroll_pane

0x8d51,	// (0x000728a0) list_double_large_graphic_phob2_pane_ParamLimits

0x8d51,	// (0x000728a0) list_double_large_graphic_phob2_pane

0x9220,	// (0x00072d6f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9220,	// (0x00072d6f) list_double_large_graphic_phob2_pane_g1

0x9236,	// (0x00072d85) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9236,	// (0x00072d85) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00079a78) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00079a78) list_double_large_graphic_phob2_pane_g

0x9242,	// (0x00072d91) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9242,	// (0x00072d91) list_double_large_graphic_phob2_pane_t1

0x9257,	// (0x00072da6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9257,	// (0x00072da6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00079a7d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00079a7d) list_double_large_graphic_phob2_pane_t

0xad60,	// (0x000748af) list_highlight_pane_cp024

0x9269,	// (0x00072db8) phob2_cc_button_pane

0x9271,	// (0x00072dc0) phob2_cc_data_pane_g1_ParamLimits

0x9271,	// (0x00072dc0) phob2_cc_data_pane_g1

0x9286,	// (0x00072dd5) phob2_cc_data_pane_g2_ParamLimits

0x9286,	// (0x00072dd5) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00079a82) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00079a82) phob2_cc_data_pane_g

0x9296,	// (0x00072de5) phob2_cc_data_pane_t1_ParamLimits

0x9296,	// (0x00072de5) phob2_cc_data_pane_t1

0x92ae,	// (0x00072dfd) phob2_cc_data_pane_t2_ParamLimits

0x92ae,	// (0x00072dfd) phob2_cc_data_pane_t2

0x92c6,	// (0x00072e15) phob2_cc_data_pane_t3_ParamLimits

0x92c6,	// (0x00072e15) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00079a87) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00079a87) phob2_cc_data_pane_t

0xbcec,	// (0x0007583b) phob2_cc_list_pane_ParamLimits

0xbcec,	// (0x0007583b) phob2_cc_list_pane

0xef11,	// (0x00078a60) scroll_pane_cp035_ParamLimits

0xef11,	// (0x00078a60) scroll_pane_cp035

0xb8e2,	// (0x00075431) bg_button_pane_cp033

0xbcf8,	// (0x00075847) phob2_cc_button_pane_g1

0xbd04,	// (0x00075853) phob2_cc_button_pane_t1

0xbd19,	// (0x00075868) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00079a8e) phob2_cc_button_pane_t

0x92de,	// (0x00072e2d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92de,	// (0x00072e2d) list_double_large_graphic_phob2_cc_pane

0x92f0,	// (0x00072e3f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92f0,	// (0x00072e3f) list_double_large_graphic_phob2_cc_pane_g1

0x92fc,	// (0x00072e4b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x92fc,	// (0x00072e4b) list_double_large_graphic_phob2_cc_pane_g2

0x9308,	// (0x00072e57) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9308,	// (0x00072e57) list_double_large_graphic_phob2_cc_pane_g3

0x9314,	// (0x00072e63) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9314,	// (0x00072e63) list_double_large_graphic_phob2_cc_pane_g4

0xa507,	// (0x00074056) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa507,	// (0x00074056) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00079a93) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00079a93) list_double_large_graphic_phob2_cc_pane_g

0x9320,	// (0x00072e6f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9320,	// (0x00072e6f) list_double_large_graphic_phob2_cc_pane_t1

0x9349,	// (0x00072e98) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9349,	// (0x00072e98) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00079a9e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00079a9e) list_double_large_graphic_phob2_cc_pane_t

0xbd2b,	// (0x0007587a) list_highlight_pane_cp025_ParamLimits

0xbd2b,	// (0x0007587a) list_highlight_pane_cp025

0xb8e2,	// (0x00075431) bg_button_pane_cp033_ParamLimits

0xbcf8,	// (0x00075847) phob2_cc_button_pane_g1_ParamLimits

0xbd04,	// (0x00075853) phob2_cc_button_pane_t1_ParamLimits

0xbd19,	// (0x00075868) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00079a8e) phob2_cc_button_pane_t_ParamLimits

0x04b3,	// (0x0006a002) popup_wgtman_window

0xed56,	// (0x000788a5) scroll_pane_cp038

0x8cca,	// (0x00072819) wgtman_btn_pane_cp_01_ParamLimits

0x8cca,	// (0x00072819) wgtman_btn_pane_cp_01

0xbd39,	// (0x00075888) wgtman_content_pane

0xbd42,	// (0x00075891) wgtman_heading_pane

0xad60,	// (0x000748af) bg_heading_pane_cp02

0xbd4b,	// (0x0007589a) wgtman_heading_pane_g1

0xbd53,	// (0x000758a2) wgtman_heading_pane_t1

0xbd61,	// (0x000758b0) scroll_pane_cp036

0xbd69,	// (0x000758b8) wgtman_list_pane

0xbd71,	// (0x000758c0) wgtman_list_pane_t1_ParamLimits

0xbd71,	// (0x000758c0) wgtman_list_pane_t1

0x9ace,	// (0x0007361d) cam4_grid_pane

0x671f,	// (0x0007026e) bg_button_pane_cp015_ParamLimits

0x6731,	// (0x00070280) bg_button_pane_cp016_ParamLimits

0x6744,	// (0x00070293) bg_button_pane_cp017_ParamLimits

0x679c,	// (0x000702eb) popup_vitu2_query_window_g3_ParamLimits

0x679c,	// (0x000702eb) popup_vitu2_query_window_g3

0x6859,	// (0x000703a8) popup_vitu2_query_window_t6_ParamLimits

0x6859,	// (0x000703a8) popup_vitu2_query_window_t6

0x6884,	// (0x000703d3) popup_vitu2_query_window_t7_ParamLimits

0x6884,	// (0x000703d3) popup_vitu2_query_window_t7

0xb8f0,	// (0x0007543f) cam4_grid_pane_g1

0xb8f9,	// (0x00075448) cam4_grid_pane_g2

0xbd8b,	// (0x000758da) cam4_grid_pane_g3

0xbd94,	// (0x000758e3) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00079aa3) cam4_grid_pane_g

0x140e,	// (0x0006af5d) aid_placing_vt_slider_lsc_ParamLimits

0x1719,	// (0x0006b268) vidtel_button_pane_ParamLimits

0x1719,	// (0x0006b268) vidtel_button_pane

0xad60,	// (0x000748af) bg_button_pane_cp034

0xbd9f,	// (0x000758ee) vidtel_button_pane_g1

0xbda7,	// (0x000758f6) vidtel_button_pane_t1

0xee58,	// (0x000789a7) aid_size_vtel_slider_touch

0xef11,	// (0x00078a60) scroll_pane_cp039

0x7677,	// (0x000711c6) ncim_query_button_pane_cp01_ParamLimits

0x7696,	// (0x000711e5) ncimui_query_pane_g1_ParamLimits

0xb8e2,	// (0x00075431) input_focus_pane_cp012_ParamLimits

0xa7eb,	// (0x0007433a) ncim_query_entry_pane_t1_ParamLimits

0xef11,	// (0x00078a60) scroll_pane_cp039_ParamLimits

0xc874,	// (0x000763c3) navi_pane_bcale_mc_g1

0xc87c,	// (0x000763cb) navi_pane_bcale_mc_t1

0xb23a,	// (0x00074d89) main_sp_fs_email_pane_g1

0xb246,	// (0x00074d95) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00079834) main_sp_fs_email_pane_g

0xb48e,	// (0x00074fdd) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb48e,	// (0x00074fdd) list_single_cale_mrui_row_pane_g3

0x8885,	// (0x000723d4) list_single_recal_day_pane_g5_event_pane

0xa4d2,	// (0x00074021) list_single_recal_day_pane_g7

0xbdbd,	// (0x0007590c) list_recal_day_event_pane_cp01

0xbdc6,	// (0x00075915) list_recal_vselct_arw_lo_pane_cp01

0xbdce,	// (0x0007591d) list_recal_vselct_arw_up_pane_cp01

0xbdd6,	// (0x00075925) list_recal_vselct_pane_cp01

0xee7a,	// (0x000789c9) list_recal_day_event_pane_cp01_g1

0xa513,	// (0x00074062) list_recal_day_event_pane_cp01_t1

0xa4da,	// (0x00074029) list_single_recal_day_pane_t1_ParamLimits

0xa4ec,	// (0x0007403b) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00079991) list_single_recal_day_pane_t_ParamLimits

0xb7a8,	// (0x000752f7) bg_notes_pane_ParamLimits

0xb84b,	// (0x0007539a) list_notes_pane_ParamLimits

0x07fc,	// (0x0006a34b) scroll_pane_cp06_ParamLimits

0xb86d,	// (0x000753bc) main_notes_pane_ParamLimits

0xad60,	// (0x000748af) main_welc_pane

0x9372,	// (0x00072ec1) main_welc_body_pane_ParamLimits

0x9372,	// (0x00072ec1) main_welc_body_pane

0x9390,	// (0x00072edf) main_welc_opti_pane_ParamLimits

0x9390,	// (0x00072edf) main_welc_opti_pane

0x93d5,	// (0x00072f24) main_welc_pane_t1_ParamLimits

0x93d5,	// (0x00072f24) main_welc_pane_t1

0x93f3,	// (0x00072f42) main_welc_body_row_pane_ParamLimits

0x93f3,	// (0x00072f42) main_welc_body_row_pane

0xf0bc,	// (0x00078c0b) main_welc_opti_row_pane_ParamLimits

0xf0bc,	// (0x00078c0b) main_welc_opti_row_pane

0xbde0,	// (0x0007592f) main_welc_opti_row_pane_g1

0x9407,	// (0x00072f56) main_welc_opti_row_pane_t1

0xbde8,	// (0x00075937) main_welc_body_row_pane_t1

0xbafe,	// (0x0007564d) popup_notif_wgt_heading_pane

0xbb18,	// (0x00075667) aid_size_list_notif_wgt_del_ParamLimits

0xbb25,	// (0x00075674) list_notif_wgt_row_pane_g1_ParamLimits

0xbb31,	// (0x00075680) list_notif_wgt_row_pane_g2_ParamLimits

0xbb40,	// (0x0007568f) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000799f8) list_notif_wgt_row_pane_g_ParamLimits

0xbb4d,	// (0x0007569c) list_notif_wgt_row_pane_t1_ParamLimits

0xbb63,	// (0x000756b2) list_notif_wgt_row_pane_t2_ParamLimits

0xbb75,	// (0x000756c4) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000799ff) list_notif_wgt_row_pane_t_ParamLimits

0x8d63,	// (0x000728b2) listrow_wgtman_pane_g1_ParamLimits

0x8d70,	// (0x000728bf) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00079a28) listrow_wgtman_pane_g_ParamLimits

0x8d8e,	// (0x000728dd) listrow_wgtman_pane_t1_ParamLimits

0x8da6,	// (0x000728f5) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00079a2d) listrow_wgtman_pane_t_ParamLimits

0x8dcc,	// (0x0007291b) wait_bar_pane_cp09_ParamLimits

0xad60,	// (0x000748af) bg_popup_heading_pane_cp02

0xbdf7,	// (0x00075946) popup_notif_wgt_heading_pane_g1

0xbdff,	// (0x0007594e) popup_notif_wgt_heading_pane_t1

0xad60,	// (0x000748af) main_vids_pane

0xad60,	// (0x000748af) vids_listscroll_pane

0x9416,	// (0x00072f65) scroll_pane_cp040

0xad60,	// (0x000748af) vids_list_pane

0x9421,	// (0x00072f70) vids_list_double_pane_ParamLimits

0x9421,	// (0x00072f70) vids_list_double_pane

0x9432,	// (0x00072f81) vids_list_double_pane_g1

0x943b,	// (0x00072f8a) vids_list_double_pane_t1

0x944b,	// (0x00072f9a) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00079ab1) vids_list_double_pane_t

0x950b,	// (0x0007305a) main_ncimui_pane_ParamLimits

0x74ad,	// (0x00070ffc) main_ncimui_pane_g1_ParamLimits

0x74b9,	// (0x00071008) main_ncimui_pane_g2_ParamLimits

0x74b9,	// (0x00071008) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00079739) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00079739) main_ncimui_pane_g

0x93ab,	// (0x00072efa) main_welc_pane_g1_ParamLimits

0x93ab,	// (0x00072efa) main_welc_pane_g1

0x93c0,	// (0x00072f0f) main_welc_pane_g2_ParamLimits

0x93c0,	// (0x00072f0f) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00079aac) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00079aac) main_welc_pane_g

0xb7a8,	// (0x000752f7) listscroll_mce_pane_ParamLimits

0xc9c9,	// (0x00076518) wait_bar_pane_cp10

0xddcf,	// (0x0007791e) main_cale_day_pane_ParamLimits

0xddcf,	// (0x0007791e) main_cale_week_pane_ParamLimits

0xb7a8,	// (0x000752f7) main_messa_pane_ParamLimits

0x4d9e,	// (0x0006e8ed) main_clock2_btn_pane_ParamLimits

0x4d9e,	// (0x0006e8ed) main_clock2_btn_pane

0xe5f7,	// (0x00078146) main_clock2_btn_pane_cp01_ParamLimits

0xe5f7,	// (0x00078146) main_clock2_btn_pane_cp01

0xb45f,	// (0x00074fae) list_cale_mrui_pane_ParamLimits

0xbbab,	// (0x000756fa) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00079a06) main_cf0_pane_g

0x8fb5,	// (0x00072b04) area_left_week_number_pane_ParamLimits

0x8fc1,	// (0x00072b10) area_top_day_name_pane_ParamLimits

0x8fd4,	// (0x00072b23) frame_month_view_pane_ParamLimits

0xbca1,	// (0x000757f0) grid_month_view_pane_ParamLimits

0xbcaf,	// (0x000757fe) frm_month_g1_ParamLimits

0x9055,	// (0x00072ba4) frm_month_g2_ParamLimits

0x9068,	// (0x00072bb7) frm_month_g3_ParamLimits

0x907b,	// (0x00072bca) frm_month_g4_ParamLimits

0x908e,	// (0x00072bdd) frm_month_g5_ParamLimits

0x90a1,	// (0x00072bf0) frm_month_g6_ParamLimits

0x90b4,	// (0x00072c03) frm_month_g7_ParamLimits

0xbcbc,	// (0x0007580b) frm_month_g8_ParamLimits

0x90c7,	// (0x00072c16) frm_month_g9_ParamLimits

0x90d7,	// (0x00072c26) frm_month_g10_ParamLimits

0x90e7,	// (0x00072c36) frm_month_g11_ParamLimits

0x90f7,	// (0x00072c46) frm_month_g12_ParamLimits

0x9109,	// (0x00072c58) frm_month_g13_ParamLimits

0x911b,	// (0x00072c6a) frm_month_g14_ParamLimits

0x912f,	// (0x00072c7e) frm_month_g15_ParamLimits

0x9143,	// (0x00072c92) frm_month_g16_ParamLimits

0xff08,	// (0x00079a57) frm_month_g_ParamLimits

0xbcc9,	// (0x00075818) cell_top_day_name_pane_t1_ParamLimits

0x9157,	// (0x00072ca6) cell_area_left_week_number_pane_g1_ParamLimits

0x9163,	// (0x00072cb2) cell_area_left_week_number_pane_t1_ParamLimits

0xe44f,	// (0x00077f9e) cell_month_view_pane_g1_ParamLimits

0x9176,	// (0x00072cc5) cell_month_view_pane_t1_ParamLimits

0xb7a0,	// (0x000752ef) main_clock2_btn_pane_g1

0xbe0d,	// (0x0007595c) main_clock2_btn_pane_t1

0xb8e2,	// (0x00075431) listscroll_cmail_pane_ParamLimits

0xb23a,	// (0x00074d89) main_sp_fs_email_pane_g1_ParamLimits

0xb246,	// (0x00074d95) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00079834) main_sp_fs_email_pane_g_ParamLimits

0xb565,	// (0x000750b4) list_recal_day_pane_ParamLimits

0xb576,	// (0x000750c5) mian_recal_day_pane_t1

0x7fe8,	// (0x00071b37) list_single_dyc_row_text_pane_t4_ParamLimits

0x7fe8,	// (0x00071b37) list_single_dyc_row_text_pane_t4

0x8031,	// (0x00071b80) list_single_dyc_row_text_pane_t5_ParamLimits

0x8031,	// (0x00071b80) list_single_dyc_row_text_pane_t5

0xa240,	// (0x00073d8f) list_single_dyc_row_text_pane_t6_ParamLimits

0xa240,	// (0x00073d8f) list_single_dyc_row_text_pane_t6

0x2397,	// (0x0006bee6) aid_mgn_list_cale_time_pane

0x950b,	// (0x0007305a) main_gallery2_pane_ParamLimits

0xe60d,	// (0x0007815c) main_clock2_pane_cp01_t1

0xe61d,	// (0x0007816c) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x00079313) main_clock2_pane_cp01_t

0x0bb6,	// (0x0006a705) cale_week_scroll_pane_g16_ParamLimits

0x0bb6,	// (0x0006a705) cale_week_scroll_pane_g16

0xbf6b,	// (0x00075aba) vorec_slider_pane

0xbda7,	// (0x000758f6) vidtel_button_pane_t1_ParamLimits

0x88eb,	// (0x0007243a) main_fs_bigclock_clock_pane_g1_ParamLimits

0x88eb,	// (0x0007243a) main_fs_bigclock_clock_pane_g2_ParamLimits

0x88fc,	// (0x0007244b) main_fs_bigclock_clock_pane_g3_ParamLimits

0x88fc,	// (0x0007244b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x000799b4) main_fs_bigclock_clock_pane_g_ParamLimits

0x890f,	// (0x0007245e) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8925,	// (0x00072474) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x000799bd) main_fs_bigclock_clock_pane_t_ParamLimits

0x4592,	// (0x0006e0e1) main_mup3_lyrics_pane_ParamLimits

0x4592,	// (0x0006e0e1) main_mup3_lyrics_pane

0x9481,	// (0x00072fd0) main_mup3_lyrics_pane_t1_ParamLimits

0x9481,	// (0x00072fd0) main_mup3_lyrics_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
