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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006b14c };

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
0x02a8,	// (0x0006b3f4) Screen

0x02b4,	// (0x0006b400) application_window

0x02f0,	// (0x0006b43c) area_bottom_pane_ParamLimits

0x02f0,	// (0x0006b43c) area_bottom_pane

0x0329,	// (0x0006b475) area_top_pane_ParamLimits

0x0329,	// (0x0006b475) area_top_pane

0x9401,	// (0x0007454d) call_video_uplink_pane_ParamLimits

0x9401,	// (0x0007454d) call_video_uplink_pane

0x03b7,	// (0x0006b503) main_pane_ParamLimits

0x03b7,	// (0x0006b503) main_pane

0xcbea,	// (0x00077d36) context_pane

0x3b02,	// (0x0006ec4e) navi_pane

0x3b2a,	// (0x0006ec76) popup_cale_events_window_ParamLimits

0x3b2a,	// (0x0006ec76) popup_cale_events_window

0xcbfd,	// (0x00077d49) popup_mup_playback_window

0x3b42,	// (0x0006ec8e) signal_pane

0xac93,	// (0x00075ddf) main_browser_pane

0xb7ab,	// (0x000768f7) main_burst_pane

0x3860,	// (0x0006e9ac) main_calc_pane

0xcbd0,	// (0x00077d1c) main_cale_day_pane

0x3874,	// (0x0006e9c0) main_cale_month_pane

0xcbd0,	// (0x00077d1c) main_cale_week_pane

0xb7ab,	// (0x000768f7) main_call_pane

0xa954,	// (0x00075aa0) main_call_poc_pane

0xb7ab,	// (0x000768f7) main_camera_pane

0xb7ab,	// (0x000768f7) main_chi_dic_pane

0xb630,	// (0x0007677c) main_clock_pane

0xa954,	// (0x00075aa0) main_fmradio_pane

0xb7ab,	// (0x000768f7) main_graph_messa_pane

0xa954,	// (0x00075aa0) main_help_pane

0xac93,	// (0x00075ddf) main_im_pane

0xabaf,	// (0x00075cfb) main_image_pane_ParamLimits

0xabaf,	// (0x00075cfb) main_image_pane

0xa954,	// (0x00075aa0) main_location2_pane

0xb7ab,	// (0x000768f7) main_location_pane

0xabaf,	// (0x00075cfb) main_messa_pane

0xa954,	// (0x00075aa0) main_mp2_pane

0xb7ab,	// (0x000768f7) main_mp_pane

0xa954,	// (0x00075aa0) main_msg_pane

0xa954,	// (0x00075aa0) main_mup_eq_pane

0xa954,	// (0x00075aa0) main_mup_pane

0xac93,	// (0x00075ddf) main_notes_pane

0xa954,	// (0x00075aa0) main_pec_pane

0xa954,	// (0x00075aa0) main_phob_pane

0xa954,	// (0x00075aa0) main_pinb_pane

0xa954,	// (0x00075aa0) main_postcard_pane

0xa954,	// (0x00075aa0) main_qdial_pane

0xb7ab,	// (0x000768f7) main_skin_pane

0xa954,	// (0x00075aa0) main_smil2_pane

0xb7ab,	// (0x000768f7) main_smil_pane

0xb7ab,	// (0x000768f7) main_video_pane

0xb7ab,	// (0x000768f7) main_video_tele_pane

0xabaf,	// (0x00075cfb) main_viewer_pane_ParamLimits

0xabaf,	// (0x00075cfb) main_viewer_pane

0xb7ab,	// (0x000768f7) main_vorec_pane

0x38c6,	// (0x0006ea12) popup_blid_sat_info_window_ParamLimits

0x38c6,	// (0x0006ea12) popup_blid_sat_info_window

0x391e,	// (0x0006ea6a) popup_dyc_status_message_window_ParamLimits

0x391e,	// (0x0006ea6a) popup_dyc_status_message_window

0x3936,	// (0x0006ea82) popup_grid_large_graphic_window_ParamLimits

0x3936,	// (0x0006ea82) popup_grid_large_graphic_window

0x39ec,	// (0x0006eb38) popup_loc_request_window_ParamLimits

0x39ec,	// (0x0006eb38) popup_loc_request_window

0x3ada,	// (0x0006ec26) popup_wml_address_window_ParamLimits

0x3ada,	// (0x0006ec26) popup_wml_address_window

0x369a,	// (0x0006e7e6) call_muted_g1

0x334d,	// (0x0006e499) popup_call_audio_conf_window_ParamLimits

0x334d,	// (0x0006e499) popup_call_audio_conf_window

0x36ae,	// (0x0006e7fa) popup_call_audio_first_window_ParamLimits

0x36ae,	// (0x0006e7fa) popup_call_audio_first_window

0x3724,	// (0x0006e870) popup_call_audio_in_window_ParamLimits

0x3724,	// (0x0006e870) popup_call_audio_in_window

0x3760,	// (0x0006e8ac) popup_call_audio_out_window_ParamLimits

0x3760,	// (0x0006e8ac) popup_call_audio_out_window

0x379a,	// (0x0006e8e6) popup_call_audio_second_window_ParamLimits

0x379a,	// (0x0006e8e6) popup_call_audio_second_window

0x37f0,	// (0x0006e93c) popup_call_audio_wait_window_ParamLimits

0x37f0,	// (0x0006e93c) popup_call_audio_wait_window

0x3825,	// (0x0006e971) popup_number_entry_window_ParamLimits

0x3825,	// (0x0006e971) popup_number_entry_window

0x9437,	// (0x00074583) bg_popup_call_pane_cp05_ParamLimits

0x9437,	// (0x00074583) bg_popup_call_pane_cp05

0x9457,	// (0x000745a3) popup_number_entry_window_t1

0x946a,	// (0x000745b6) popup_number_entry_window_t2

0x947c,	// (0x000745c8) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0007a21f) popup_number_entry_window_t

0x948e,	// (0x000745da) text_title_cp2

0x94a1,	// (0x000745ed) bg_popup_call_pane_cp_ParamLimits

0x94a1,	// (0x000745ed) bg_popup_call_pane_cp

0x94af,	// (0x000745fb) call_thumbnail_pane

0x94b7,	// (0x00074603) popup_call_audio_in_window_g1_ParamLimits

0x94b7,	// (0x00074603) popup_call_audio_in_window_g1

0x94c3,	// (0x0007460f) popup_call_audio_in_window_g2_ParamLimits

0x94c3,	// (0x0007460f) popup_call_audio_in_window_g2

0x9d66,	// (0x00074eb2) popup_call_audio_in_window_g3_ParamLimits

0x9d66,	// (0x00074eb2) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0007a228) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0007a228) popup_call_audio_in_window_g

0x9d72,	// (0x00074ebe) popup_call_audio_in_window_t1_ParamLimits

0x9d72,	// (0x00074ebe) popup_call_audio_in_window_t1

0x9d8e,	// (0x00074eda) popup_call_audio_in_window_t2_ParamLimits

0x9d8e,	// (0x00074eda) popup_call_audio_in_window_t2

0x9daa,	// (0x00074ef6) popup_call_audio_in_window_t3_ParamLimits

0x9daa,	// (0x00074ef6) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0007a22f) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0007a22f) popup_call_audio_in_window_t

0x94a1,	// (0x000745ed) bg_popup_call_pane_cp01_ParamLimits

0x94a1,	// (0x000745ed) bg_popup_call_pane_cp01

0x94af,	// (0x000745fb) call_thumbnail_pane_cp02

0x9dbd,	// (0x00074f09) call_type_pane_cp022

0x9dc5,	// (0x00074f11) popup_call_audio_out_window_g1_ParamLimits

0x9dc5,	// (0x00074f11) popup_call_audio_out_window_g1

0x9dd7,	// (0x00074f23) popup_call_audio_out_window_g2_ParamLimits

0x9dd7,	// (0x00074f23) popup_call_audio_out_window_g2

0x9de3,	// (0x00074f2f) popup_call_audio_out_window_g3_ParamLimits

0x9de3,	// (0x00074f2f) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0007a236) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0007a236) popup_call_audio_out_window_g

0x9df5,	// (0x00074f41) popup_call_audio_out_window_t1_ParamLimits

0x9df5,	// (0x00074f41) popup_call_audio_out_window_t1

0x9e0d,	// (0x00074f59) popup_call_audio_out_window_t2_ParamLimits

0x9e0d,	// (0x00074f59) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0007a23d) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0007a23d) popup_call_audio_out_window_t

0x9e22,	// (0x00074f6e) bg_popup_call_pane_ParamLimits

0x9e22,	// (0x00074f6e) bg_popup_call_pane

0x0574,	// (0x0006b6c0) call_thumbnail_pane_cp_ParamLimits

0x0574,	// (0x0006b6c0) call_thumbnail_pane_cp

0xa719,	// (0x00075865) call_type_pane_cp01_ParamLimits

0xa719,	// (0x00075865) call_type_pane_cp01

0xa75d,	// (0x000758a9) popup_call_audio_first_window_g1_ParamLimits

0xa75d,	// (0x000758a9) popup_call_audio_first_window_g1

0xa7a9,	// (0x000758f5) popup_call_audio_first_window_g2_ParamLimits

0xa7a9,	// (0x000758f5) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0007a242) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0007a242) popup_call_audio_first_window_g

0xa7ed,	// (0x00075939) popup_call_audio_first_window_t1_ParamLimits

0xa7ed,	// (0x00075939) popup_call_audio_first_window_t1

0xa899,	// (0x000759e5) popup_call_audio_first_window_t4_ParamLimits

0xa899,	// (0x000759e5) popup_call_audio_first_window_t4

0xa925,	// (0x00075a71) popup_call_audio_first_window_t5_ParamLimits

0xa925,	// (0x00075a71) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0007a247) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0007a247) popup_call_audio_first_window_t

0xa954,	// (0x00075aa0) bg_popup_call_pane_cp02

0xa95e,	// (0x00075aaa) call_type_pane_cp023

0xa966,	// (0x00075ab2) popup_call_audio_wait_window_g1

0xa96e,	// (0x00075aba) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0007a24e) popup_call_audio_wait_window_g

0xa976,	// (0x00075ac2) popup_call_audio_wait_window_t3

0xa984,	// (0x00075ad0) bg_popup_call_pane_cp03_ParamLimits

0xa984,	// (0x00075ad0) bg_popup_call_pane_cp03

0xa9e4,	// (0x00075b30) call_thumbnail_pane_cp011_ParamLimits

0xa9e4,	// (0x00075b30) call_thumbnail_pane_cp011

0xa9f0,	// (0x00075b3c) call_type_pane_cp034_ParamLimits

0xa9f0,	// (0x00075b3c) call_type_pane_cp034

0xaa2c,	// (0x00075b78) popup_call_audio_second_window_g1_ParamLimits

0xaa2c,	// (0x00075b78) popup_call_audio_second_window_g1

0xaa68,	// (0x00075bb4) popup_call_audio_second_window_g2_ParamLimits

0xaa68,	// (0x00075bb4) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0007a253) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0007a253) popup_call_audio_second_window_g

0xaaa4,	// (0x00075bf0) popup_call_audio_second_window_t1_ParamLimits

0xaaa4,	// (0x00075bf0) popup_call_audio_second_window_t1

0xab25,	// (0x00075c71) popup_call_audio_second_window_t2_ParamLimits

0xab25,	// (0x00075c71) popup_call_audio_second_window_t2

0xab5b,	// (0x00075ca7) popup_call_audio_second_window_t3_ParamLimits

0xab5b,	// (0x00075ca7) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0007a258) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0007a258) popup_call_audio_second_window_t

0xa954,	// (0x00075aa0) bg_popup_call_pane_cp04

0xab91,	// (0x00075cdd) list_conf_pane

0xab99,	// (0x00075ce5) popup_call_audio_conf_window_t1

0xaba7,	// (0x00075cf3) call_thumbnail_pane_g1

0xabaf,	// (0x00075cfb) bg_pinb_pane_ParamLimits

0xabaf,	// (0x00075cfb) bg_pinb_pane

0xabbd,	// (0x00075d09) find_pinb_pane

0xabc6,	// (0x00075d12) listscroll_pinb_pane_ParamLimits

0xabc6,	// (0x00075d12) listscroll_pinb_pane

0xabd5,	// (0x00075d21) pinb_bg_pane_g1

0x0598,	// (0x0006b6e4) pinb_bg_pane_g2

0x05a4,	// (0x0006b6f0) pinb_bg_pane_g3

0x05b0,	// (0x0006b6fc) pinb_bg_pane_g4

0x05bc,	// (0x0006b708) pinb_bg_pane_g5

0x05c8,	// (0x0006b714) pinb_bg_pane_g6

0x05d3,	// (0x0006b71f) pinb_bg_pane_g7

0x05de,	// (0x0006b72a) pinb_bg_pane_g8

0x05e9,	// (0x0006b735) pinb_bg_pane_g9

0x05f3,	// (0x0006b73f) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0007a25f) pinb_bg_pane_g

0x0610,	// (0x0006b75c) grid_pinb_pane

0x0619,	// (0x0006b765) list_pinb_pane

0x0622,	// (0x0006b76e) scroll_pane_cp01_ParamLimits

0x0622,	// (0x0006b76e) scroll_pane_cp01

0xabdf,	// (0x00075d2b) find_pinb_pane_g1_ParamLimits

0xabdf,	// (0x00075d2b) find_pinb_pane_g1

0xabf7,	// (0x00075d43) find_pinb_pane_t1

0xac09,	// (0x00075d55) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0007a279) find_pinb_pane_t

0xac1e,	// (0x00075d6a) input_focus_pane_cp01_ParamLimits

0xac1e,	// (0x00075d6a) input_focus_pane_cp01

0x0634,	// (0x0006b780) cell_pinb_pane_ParamLimits

0x0634,	// (0x0006b780) cell_pinb_pane

0xac2a,	// (0x00075d76) cell_pinb_pane_g1_ParamLimits

0xac2a,	// (0x00075d76) cell_pinb_pane_g1

0xac3d,	// (0x00075d89) cell_pinb_pane_g2_ParamLimits

0xac3d,	// (0x00075d89) cell_pinb_pane_g2

0xac49,	// (0x00075d95) cell_pinb_pane_g3_ParamLimits

0xac49,	// (0x00075d95) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0007a27e) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0007a27e) cell_pinb_pane_g

0xa954,	// (0x00075aa0) grid_highlight_pane_cp01

0x0662,	// (0x0006b7ae) list_pinb_item_pane_ParamLimits

0x0662,	// (0x0006b7ae) list_pinb_item_pane

0xa954,	// (0x00075aa0) list_highlight_pane_cp02

0x0675,	// (0x0006b7c1) list_pinb_item_pane_g1_ParamLimits

0x0675,	// (0x0006b7c1) list_pinb_item_pane_g1

0x0682,	// (0x0006b7ce) list_pinb_item_pane_g2_ParamLimits

0x0682,	// (0x0006b7ce) list_pinb_item_pane_g2

0x068e,	// (0x0006b7da) list_pinb_item_pane_g3_ParamLimits

0x068e,	// (0x0006b7da) list_pinb_item_pane_g3

0x069f,	// (0x0006b7eb) list_pinb_item_pane_g4_ParamLimits

0x069f,	// (0x0006b7eb) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0007a285) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0007a285) list_pinb_item_pane_g

0x06ab,	// (0x0006b7f7) list_pinb_item_pane_t1_ParamLimits

0x06ab,	// (0x0006b7f7) list_pinb_item_pane_t1

0x06e0,	// (0x0006b82c) calc_display_pane

0x0708,	// (0x0006b854) calc_paper_pane

0x072b,	// (0x0006b877) grid_calc_pane

0xa954,	// (0x00075aa0) bg_list_pane_cp01

0x0759,	// (0x0006b8a5) clock_g1

0x0761,	// (0x0006b8ad) clock_g2

0x0001,

0xf142,	// (0x0007a28e) clock_g

0x0769,	// (0x0006b8b5) clock_t1_ParamLimits

0x0769,	// (0x0006b8b5) clock_t1

0x077e,	// (0x0006b8ca) clock_t2_ParamLimits

0x077e,	// (0x0006b8ca) clock_t2

0x0790,	// (0x0006b8dc) clock_t3_ParamLimits

0x0790,	// (0x0006b8dc) clock_t3

0x07a2,	// (0x0006b8ee) clock_t4_ParamLimits

0x07a2,	// (0x0006b8ee) clock_t4

0x07b4,	// (0x0006b900) clock_t5_ParamLimits

0x07b4,	// (0x0006b900) clock_t5

0x07c9,	// (0x0006b915) clock_t6_ParamLimits

0x07c9,	// (0x0006b915) clock_t6

0x07db,	// (0x0006b927) clock_t7_ParamLimits

0x07db,	// (0x0006b927) clock_t7

0x07ed,	// (0x0006b939) clock_t8_ParamLimits

0x07ed,	// (0x0006b939) clock_t8

0x0801,	// (0x0006b94d) clock_t9_ParamLimits

0x0801,	// (0x0006b94d) clock_t9

0x0008,

0xf147,	// (0x0007a293) clock_t_ParamLimits

0xf147,	// (0x0007a293) clock_t

0xac55,	// (0x00075da1) popup_clock_analogue_window_cp02

0xac55,	// (0x00075da1) popup_clock_digital_window_cp01

0xac5d,	// (0x00075da9) listscroll_help_pane

0xa954,	// (0x00075aa0) phob_pre_status_pane

0xac67,	// (0x00075db3) grid_qdial_pane

0xabaf,	// (0x00075cfb) listscroll_mce_pane

0xabaf,	// (0x00075cfb) bg_notes_pane

0xac71,	// (0x00075dbd) list_notes_pane

0x0815,	// (0x0006b961) scroll_pane_cp06

0xac7f,	// (0x00075dcb) bg_calc_paper_pane

0x94d7,	// (0x00074623) list_calc_pane

0xac93,	// (0x00075ddf) bg_calc_display_pane

0x0829,	// (0x0006b975) calc_display_pane_t1

0x083b,	// (0x0006b987) calc_display_pane_t2

0x94f1,	// (0x0007463d) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0007a2a6) calc_display_pane_t

0x084d,	// (0x0006b999) cell_calc_pane_ParamLimits

0x084d,	// (0x0006b999) cell_calc_pane

0xac9f,	// (0x00075deb) bg_calc_paper_pane_g1

0xacab,	// (0x00075df7) bg_calc_paper_pane_g2

0xacb7,	// (0x00075e03) bg_calc_paper_pane_g3

0xacc3,	// (0x00075e0f) bg_calc_paper_pane_g4

0xaccf,	// (0x00075e1b) bg_calc_paper_pane_g5

0x0884,	// (0x0006b9d0) bg_calc_paper_pane_g6

0x0895,	// (0x0006b9e1) bg_calc_paper_pane_g7

0x08a6,	// (0x0006b9f2) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0007a2ad) bg_calc_paper_pane_g

0x08b9,	// (0x0006ba05) calc_bg_paper_pane_g9

0x08cc,	// (0x0006ba18) list_calc_item_pane_ParamLimits

0x08cc,	// (0x0006ba18) list_calc_item_pane

0xacdb,	// (0x00075e27) list_calc_item_pane_g1

0x9503,	// (0x0007464f) list_calc_item_pane_t1_ParamLimits

0x9503,	// (0x0007464f) list_calc_item_pane_t1

0x08e6,	// (0x0006ba32) list_calc_item_pane_t2_ParamLimits

0x08e6,	// (0x0006ba32) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0007a2be) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0007a2be) list_calc_item_pane_t

0xace8,	// (0x00075e34) cell_calc_pane_g1

0xacf2,	// (0x00075e3e) grid_highlight_pane_cp02

0xad14,	// (0x00075e60) bg_calc_display_pane_g1

0x9515,	// (0x00074661) bg_calc_display_pane_g2

0xad1d,	// (0x00075e69) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0007a2c8) bg_calc_display_pane_g

0x0918,	// (0x0006ba64) cell_qdial_pane_ParamLimits

0x0918,	// (0x0006ba64) cell_qdial_pane

0x092c,	// (0x0006ba78) cell_qdial_pane_g1_ParamLimits

0x092c,	// (0x0006ba78) cell_qdial_pane_g1

0x0942,	// (0x0006ba8e) cell_qdial_pane_g2_ParamLimits

0x0942,	// (0x0006ba8e) cell_qdial_pane_g2

0xad26,	// (0x00075e72) cell_qdial_pane_g3_ParamLimits

0xad26,	// (0x00075e72) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0007a2cf) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0007a2cf) cell_qdial_pane_g

0x0968,	// (0x0006bab4) cell_qdial_pane_t1_ParamLimits

0x0968,	// (0x0006bab4) cell_qdial_pane_t1

0x0980,	// (0x0006bacc) cell_qdial_pane_t2_ParamLimits

0x0980,	// (0x0006bacc) cell_qdial_pane_t2

0x0993,	// (0x0006badf) cell_qdial_pane_t3_ParamLimits

0x0993,	// (0x0006badf) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0007a2d8) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0007a2d8) cell_qdial_pane_t

0xa954,	// (0x00075aa0) grid_highlight_pane_cp04

0xad32,	// (0x00075e7e) thumbnail_qdial_pane_ParamLimits

0xad32,	// (0x00075e7e) thumbnail_qdial_pane

0xad8e,	// (0x00075eda) list_help_pane

0xad97,	// (0x00075ee3) scroll_pane_cp02

0x09a6,	// (0x0006baf2) help_list_pane_t1_ParamLimits

0x09a6,	// (0x0006baf2) help_list_pane_t1

0x951f,	// (0x0007466b) bg_notes_pane_g2

0x9527,	// (0x00074673) bg_notes_pane_g3

0x952f,	// (0x0007467b) notes_bg_pane_g1

0x9537,	// (0x00074683) notes_bg_pane_g4

0x953f,	// (0x0007468b) notes_bg_pane_g5

0x9547,	// (0x00074693) notes_bg_pane_g6

0x954f,	// (0x0007469b) notes_bg_pane_g7

0x9557,	// (0x000746a3) notes_bg_pane_g8

0x955f,	// (0x000746ab) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0007a2f6) notes_bg_pane_g

0x09c5,	// (0x0006bb11) list_notes_text_pane_ParamLimits

0x09c5,	// (0x0006bb11) list_notes_text_pane

0xada0,	// (0x00075eec) list_notes_text_pane_g1

0x9567,	// (0x000746b3) list_notes_text_pane_t1

0x09db,	// (0x0006bb27) listscroll_cale_week_pane

0x0a07,	// (0x0006bb53) bg_cale_heading_pane

0xadc3,	// (0x00075f0f) bg_cale_pane_cp01

0x0a25,	// (0x0006bb71) cale_week_corner_pane

0x0a44,	// (0x0006bb90) cale_week_day_heading_pane

0x0a67,	// (0x0006bbb3) cale_week_scroll_pane_g1

0x0a80,	// (0x0006bbcc) cale_week_scroll_pane_g2

0x0a98,	// (0x0006bbe4) cale_week_scroll_pane_g3

0x0ab0,	// (0x0006bbfc) cale_week_scroll_pane_g4

0x0ac8,	// (0x0006bc14) cale_week_scroll_pane_g5

0x0ae4,	// (0x0006bc30) cale_week_scroll_pane_g6

0x0b04,	// (0x0006bc50) cale_week_scroll_pane_g7

0x0b24,	// (0x0006bc70) cale_week_scroll_pane_g8

0x0b48,	// (0x0006bc94) cale_week_scroll_pane_g9

0x0b60,	// (0x0006bcac) cale_week_scroll_pane_g10

0x0b78,	// (0x0006bcc4) cale_week_scroll_pane_g11

0x0b90,	// (0x0006bcdc) cale_week_scroll_pane_g12

0x0ba8,	// (0x0006bcf4) cale_week_scroll_pane_g13

0x0ba8,	// (0x0006bcf4) cale_week_scroll_pane_g14

0x0ba8,	// (0x0006bcf4) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0007a305) cale_week_scroll_pane_g

0x0bc0,	// (0x0006bd0c) cale_week_time_pane

0x0be4,	// (0x0006bd30) grid_cale_week_pane

0xadf3,	// (0x00075f3f) scroll_pane_cp08

0x0c0a,	// (0x0006bd56) cell_cale_week_pane_ParamLimits

0x0c0a,	// (0x0006bd56) cell_cale_week_pane

0x0c98,	// (0x0006bde4) cale_week_day_heading_pane_t1

0x0ce2,	// (0x0006be2e) cale_week_day_heading_pane_t2

0x0d31,	// (0x0006be7d) cale_week_day_heading_pane_t3

0x0d80,	// (0x0006becc) cale_week_day_heading_pane_t4

0x0dcf,	// (0x0006bf1b) cale_week_day_heading_pane_t5

0x0e26,	// (0x0006bf72) cale_week_day_heading_pane_t6

0x0e7d,	// (0x0006bfc9) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0007a324) cale_week_day_heading_pane_t

0xae10,	// (0x00075f5c) bg_cale_side_pane

0x0ec7,	// (0x0006c013) cale_week_time_pane_t1

0x0ee1,	// (0x0006c02d) cale_week_time_pane_t2

0x0efb,	// (0x0006c047) cale_week_time_pane_t3

0x0f15,	// (0x0006c061) cale_week_time_pane_t4

0x0f2f,	// (0x0006c07b) cale_week_time_pane_t5

0x0f49,	// (0x0006c095) cale_week_time_pane_t6

0x0f63,	// (0x0006c0af) cale_week_time_pane_t7

0x0f83,	// (0x0006c0cf) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0007a333) cale_week_time_pane_t

0x0fa3,	// (0x0006c0ef) cell_cale_week_pane_g2

0x0fc2,	// (0x0006c10e) cell_cale_week_pane_g3_ParamLimits

0x0fc2,	// (0x0006c10e) cell_cale_week_pane_g3

0xae1e,	// (0x00075f6a) grid_highlight_pane_cp07

0xae26,	// (0x00075f72) listscroll_gms_pane

0xae30,	// (0x00075f7c) grid_gms_pane

0xae39,	// (0x00075f85) listscroll_gms_pane_g1

0xae41,	// (0x00075f8d) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0007a344) listscroll_gms_pane_g

0x0fda,	// (0x0006c126) scroll_pane_cp010

0x0fe5,	// (0x0006c131) cell_gms_pane_ParamLimits

0x0fe5,	// (0x0006c131) cell_gms_pane

0x0ff7,	// (0x0006c143) cell_gms_pane_g1

0xae49,	// (0x00075f95) cell_gms_pane_g2

0xada0,	// (0x00075eec) cell_gms_pane_g3

0xae51,	// (0x00075f9d) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0007a349) cell_gms_pane_g

0xae5a,	// (0x00075fa6) grid_highlight_pane_cp09

0x3644,	// (0x0006e790) phob_pre_status_pane_g1

0x364c,	// (0x0006e798) phob_pre_status_pane_g2

0x3654,	// (0x0006e7a0) phob_pre_status_pane_g3

0x365c,	// (0x0006e7a8) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0007a738) phob_pre_status_pane_g

0x366c,	// (0x0006e7b8) phob_pre_status_pane_t1

0x367a,	// (0x0006e7c6) phob_pre_status_pane_t2

0x368a,	// (0x0006e7d6) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0007a743) phob_pre_status_pane_t

0xa954,	// (0x00075aa0) bg_list_pane_cp05

0x1007,	// (0x0006c153) grid_vorec_pane

0x1013,	// (0x0006c15f) vorec_t1

0x1021,	// (0x0006c16d) vorec_t2

0x102f,	// (0x0006c17b) vorec_t3

0x103d,	// (0x0006c189) vorec_t4

0x104b,	// (0x0006c197) vorec_t5

0x9575,	// (0x000746c1) vorec_t6

0x0006,

0xf206,	// (0x0007a352) vorec_t

0x1067,	// (0x0006c1b3) wait_bar_pane_cp01

0x106f,	// (0x0006c1bb) cell_vorec_pane_ParamLimits

0x106f,	// (0x0006c1bb) cell_vorec_pane

0xae62,	// (0x00075fae) cell_vorec_pane_g1

0xa954,	// (0x00075aa0) grid_highlight_pane_cp05

0x109a,	// (0x0006c1e6) cams_zoom_pane

0x10a9,	// (0x0006c1f5) image_vga_pane

0x10c3,	// (0x0006c20f) main_camera_pane_g1

0x10d5,	// (0x0006c221) main_camera_pane_g2

0x10e5,	// (0x0006c231) main_camera_pane_g3

0x10f7,	// (0x0006c243) main_camera_pane_g4

0x1109,	// (0x0006c255) main_camera_pane_g5

0x111b,	// (0x0006c267) main_camera_pane_g6

0x112d,	// (0x0006c279) main_camera_pane_g7

0x0007,

0xf215,	// (0x0007a361) main_camera_pane_g

0x113f,	// (0x0006c28b) main_camera_pane_t1

0x1155,	// (0x0006c2a1) main_camera_pane_t2

0x0001,

0xf226,	// (0x0007a372) main_camera_pane_t

0x1191,	// (0x0006c2dd) cams_zoom_pane_cp_ParamLimits

0x1191,	// (0x0006c2dd) cams_zoom_pane_cp

0x11b9,	// (0x0006c305) image_cif_pane_ParamLimits

0x11b9,	// (0x0006c305) image_cif_pane

0x11f4,	// (0x0006c340) image_subqcif_pane

0x11fc,	// (0x0006c348) main_video_pane_g1_ParamLimits

0x11fc,	// (0x0006c348) main_video_pane_g1

0x1220,	// (0x0006c36c) main_video_pane_g2_ParamLimits

0x1220,	// (0x0006c36c) main_video_pane_g2

0x1254,	// (0x0006c3a0) main_video_pane_g3_ParamLimits

0x1254,	// (0x0006c3a0) main_video_pane_g3

0x1282,	// (0x0006c3ce) main_video_pane_g4_ParamLimits

0x1282,	// (0x0006c3ce) main_video_pane_g4

0x12b0,	// (0x0006c3fc) main_video_pane_g5_ParamLimits

0x12b0,	// (0x0006c3fc) main_video_pane_g5

0xae78,	// (0x00075fc4) main_video_pane_g6_ParamLimits

0xae78,	// (0x00075fc4) main_video_pane_g6

0x0006,

0xf22b,	// (0x0007a377) main_video_pane_g_ParamLimits

0xf22b,	// (0x0007a377) main_video_pane_g

0x12d9,	// (0x0006c425) main_video_pane_t1_ParamLimits

0x12d9,	// (0x0006c425) main_video_pane_t1

0xae92,	// (0x00075fde) cams_zoom_pane_g1

0xae9b,	// (0x00075fe7) cams_zoom_pane_g2

0xaea4,	// (0x00075ff0) cams_zoom_pane_g3

0xaead,	// (0x00075ff9) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0007a386) cams_zoom_pane_g

0x1336,	// (0x0006c482) grid_cams_pane

0x1350,	// (0x0006c49c) linegrid_cams_pane

0x1363,	// (0x0006c4af) cell_cams_pane_ParamLimits

0x1363,	// (0x0006c4af) cell_cams_pane

0xaeb6,	// (0x00076002) cams_burst_image_pane

0xaebe,	// (0x0007600a) cell_cams_pane_g1

0xa954,	// (0x00075aa0) grid_highlight_pane_cp03

0xace8,	// (0x00075e34) mp_bg_pane_g1

0xa954,	// (0x00075aa0) bg_list_pane_cp03

0xcaf5,	// (0x00077c41) bg_mp_pane

0xcafd,	// (0x00077c49) grid_mp_pane

0xcb05,	// (0x00077c51) media_player_g1

0xcb0d,	// (0x00077c59) media_player_t1

0xcb1b,	// (0x00077c67) media_player_t2

0xcb29,	// (0x00077c75) media_player_t3

0xcb37,	// (0x00077c83) media_player_t4

0xcb45,	// (0x00077c91) media_player_t5

0xcb53,	// (0x00077c9f) media_player_t6

0xcb61,	// (0x00077cad) media_player_t7

0x0006,

0xf5d6,	// (0x0007a722) media_player_t

0xcb6f,	// (0x00077cbb) wait_bar_pane_cp02

0xf5bb,	// (0x0007a707) main_usb_pane_t

0x363b,	// (0x0006e787) cell_mp_pane

0xace8,	// (0x00075e34) cell_mp_pane_g1

0xa954,	// (0x00075aa0) grid_highlight_pane_cp06

0xaec6,	// (0x00076012) grid_skin_colour_pane

0xaece,	// (0x0007601a) list_highlight_pane_cp03

0x145d,	// (0x0006c5a9) skin_g1

0xaed6,	// (0x00076022) skin_t1

0xaee5,	// (0x00076031) skin_t2

0x0001,

0xf26f,	// (0x0007a3bb) skin_t

0x1465,	// (0x0006c5b1) cell_skin_colour_pane_ParamLimits

0x1465,	// (0x0006c5b1) cell_skin_colour_pane

0xaef3,	// (0x0007603f) cell_skin_colour_pane_g1

0x14de,	// (0x0006c62a) call_video_g1_ParamLimits

0x14de,	// (0x0006c62a) call_video_g1

0x14fa,	// (0x0006c646) call_video_g2_ParamLimits

0x14fa,	// (0x0006c646) call_video_g2

0x0001,

0xf274,	// (0x0007a3c0) call_video_g_ParamLimits

0xf274,	// (0x0007a3c0) call_video_g

0x154c,	// (0x0006c698) call_video_uplink_pane_cp1_ParamLimits

0x154c,	// (0x0006c698) call_video_uplink_pane_cp1

0xaf05,	// (0x00076051) call_video_uplink_pane_cp2

0x15eb,	// (0x0006c737) video_down_crop_pane_ParamLimits

0x15eb,	// (0x0006c737) video_down_crop_pane

0x16d4,	// (0x0006c820) video_down_pane_ParamLimits

0x16d4,	// (0x0006c820) video_down_pane

0xaf0d,	// (0x00076059) video_down_subqcif_pane_ParamLimits

0xaf0d,	// (0x00076059) video_down_subqcif_pane

0xaf25,	// (0x00076071) video_down_subqcif_pane_cp_ParamLimits

0xaf25,	// (0x00076071) video_down_subqcif_pane_cp

0xaf4b,	// (0x00076097) im_reading_pane_ParamLimits

0xaf4b,	// (0x00076097) im_reading_pane

0x17e2,	// (0x0006c92e) im_writing_pane_ParamLimits

0x17e2,	// (0x0006c92e) im_writing_pane

0x17f8,	// (0x0006c944) im_reading_pane_t1

0xaf65,	// (0x000760b1) list_im_pane

0xaf76,	// (0x000760c2) scroll_pane_cp07

0x1835,	// (0x0006c981) im_writing_pane_t1_ParamLimits

0x1835,	// (0x0006c981) im_writing_pane_t1

0xaf8f,	// (0x000760db) im_writing_pane_t2_ParamLimits

0xaf8f,	// (0x000760db) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0007a3ca) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0007a3ca) im_writing_pane_t

0xa954,	// (0x00075aa0) input_focus_pane_cp04

0xa954,	// (0x00075aa0) input_focus_pane_cp05

0x184a,	// (0x0006c996) list_im_single_pane_ParamLimits

0x184a,	// (0x0006c996) list_im_single_pane

0x1860,	// (0x0006c9ac) list_single_im_pane_t1

0x35fb,	// (0x0006e747) blid_accuracy_pane

0x3603,	// (0x0006e74f) blid_compass_pane

0x360d,	// (0x0006e759) main_location_t1

0x361d,	// (0x0006e769) main_location_t2

0x362d,	// (0x0006e779) main_location_t3

0x0002,

0xf5e5,	// (0x0007a731) main_location_t

0xa954,	// (0x00075aa0) aid_levels_location

0xace8,	// (0x00075e34) blid_accuracy_pane_g1

0xace8,	// (0x00075e34) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0007a42c) blid_accuracy_pane_g

0xafd7,	// (0x00076123) wml_content_pane

0xb015,	// (0x00076161) wml_button_pane_ParamLimits

0xb015,	// (0x00076161) wml_button_pane

0x186f,	// (0x0006c9bb) wml_list_single_large_pane_ParamLimits

0x186f,	// (0x0006c9bb) wml_list_single_large_pane

0x1885,	// (0x0006c9d1) wml_list_single_medium_pane_ParamLimits

0x1885,	// (0x0006c9d1) wml_list_single_medium_pane

0x189f,	// (0x0006c9eb) wml_list_single_small_pane_ParamLimits

0x189f,	// (0x0006c9eb) wml_list_single_small_pane

0xb029,	// (0x00076175) wml_selection_box_pane_ParamLimits

0xb029,	// (0x00076175) wml_selection_box_pane

0xb03c,	// (0x00076188) wml_list_single_pane_t1

0xb04b,	// (0x00076197) wml_list_single_medium_pane_t1

0xb05a,	// (0x000761a6) wml_list_single_large_pane_t1

0xb069,	// (0x000761b5) input_focus_pane_cp02_ParamLimits

0xb069,	// (0x000761b5) input_focus_pane_cp02

0xb0cd,	// (0x00076219) wml_selection_box_pane_g1

0xb0d6,	// (0x00076222) wml_selection_box_pane_t1_ParamLimits

0xb0d6,	// (0x00076222) wml_selection_box_pane_t1

0xabaf,	// (0x00075cfb) bg_wml_button_pane_ParamLimits

0xabaf,	// (0x00075cfb) bg_wml_button_pane

0xb0ee,	// (0x0007623a) wml_button_pane_g1

0xb0f6,	// (0x00076242) wml_button_pane_t1

0xb0ee,	// (0x0007623a) wml_button_bg_pane_g1

0xb106,	// (0x00076252) wml_button_bg_pane_g2

0xb10e,	// (0x0007625a) wml_button_bg_pane_g3

0xb116,	// (0x00076262) wml_button_bg_pane_g4

0xb11e,	// (0x0007626a) wml_button_bg_pane_g5

0xb126,	// (0x00076272) wml_button_bg_pane_g6

0xb12e,	// (0x0007627a) wml_button_bg_pane_g7

0xb136,	// (0x00076282) wml_button_bg_pane_g8

0xb13e,	// (0x0007628a) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0007a3cf) wml_button_bg_pane_g

0x18b9,	// (0x0006ca05) bg_list_pane_cp02

0xb146,	// (0x00076292) mce_header_pane_ParamLimits

0xb146,	// (0x00076292) mce_header_pane

0xb15c,	// (0x000762a8) mce_icon_pane

0xb15c,	// (0x000762a8) mce_image_pane

0xb165,	// (0x000762b1) mce_text_pane_ParamLimits

0xb165,	// (0x000762b1) mce_text_pane

0x18c1,	// (0x0006ca0d) scroll_pane_cp03

0xb00d,	// (0x00076159) scroll_pane_cp04

0xb178,	// (0x000762c4) scroll_pane_cp05_ParamLimits

0xb178,	// (0x000762c4) scroll_pane_cp05

0x18cb,	// (0x0006ca17) mce_header_field_pane_ParamLimits

0x18cb,	// (0x0006ca17) mce_header_field_pane

0x18e2,	// (0x0006ca2e) mce_header_field_pane_2_ParamLimits

0x18e2,	// (0x0006ca2e) mce_header_field_pane_2

0x18f8,	// (0x0006ca44) mce_header_field_pane_3

0x1900,	// (0x0006ca4c) list_single_mce_message_pane_ParamLimits

0x1900,	// (0x0006ca4c) list_single_mce_message_pane

0x1917,	// (0x0006ca63) list_single_mce_smart_pane_ParamLimits

0x1917,	// (0x0006ca63) list_single_mce_smart_pane

0xb184,	// (0x000762d0) input_focus_pane_cp03

0xb18d,	// (0x000762d9) list_header_data_pane

0x1939,	// (0x0006ca85) mce_header_field_pane_t1

0x1949,	// (0x0006ca95) list_single_mce_header_pane_ParamLimits

0x1949,	// (0x0006ca95) list_single_mce_header_pane

0xb195,	// (0x000762e1) list_single_mce_header_pane_t1

0xb1a4,	// (0x000762f0) list_single_mce_message_pane_g1

0xb1ac,	// (0x000762f8) list_single_mce_message_pane_t1

0x1983,	// (0x0006cacf) bg_cale_heading_pane_cp01_ParamLimits

0x1983,	// (0x0006cacf) bg_cale_heading_pane_cp01

0xb1ba,	// (0x00076306) bg_cale_pane_cp02_ParamLimits

0xb1ba,	// (0x00076306) bg_cale_pane_cp02

0x19be,	// (0x0006cb0a) cale_month_corner_pane

0x19dd,	// (0x0006cb29) cale_month_day_heading_pane_ParamLimits

0x19dd,	// (0x0006cb29) cale_month_day_heading_pane

0x1a30,	// (0x0006cb7c) cale_month_pane_g1_ParamLimits

0x1a30,	// (0x0006cb7c) cale_month_pane_g1

0x1a60,	// (0x0006cbac) cale_month_pane_g2_ParamLimits

0x1a60,	// (0x0006cbac) cale_month_pane_g2

0x1a90,	// (0x0006cbdc) cale_month_pane_g3_ParamLimits

0x1a90,	// (0x0006cbdc) cale_month_pane_g3

0x1acc,	// (0x0006cc18) cale_month_pane_g4_ParamLimits

0x1acc,	// (0x0006cc18) cale_month_pane_g4

0x1b08,	// (0x0006cc54) cale_month_pane_g5_ParamLimits

0x1b08,	// (0x0006cc54) cale_month_pane_g5

0x1b50,	// (0x0006cc9c) cale_month_pane_g6_ParamLimits

0x1b50,	// (0x0006cc9c) cale_month_pane_g6

0x1b9c,	// (0x0006cce8) cale_month_pane_g7_ParamLimits

0x1b9c,	// (0x0006cce8) cale_month_pane_g7

0x1bf0,	// (0x0006cd3c) cale_month_pane_g8_ParamLimits

0x1bf0,	// (0x0006cd3c) cale_month_pane_g8

0x1c44,	// (0x0006cd90) cale_month_pane_g9_ParamLimits

0x1c44,	// (0x0006cd90) cale_month_pane_g9

0x1c96,	// (0x0006cde2) cale_month_pane_g10_ParamLimits

0x1c96,	// (0x0006cde2) cale_month_pane_g10

0x1ce8,	// (0x0006ce34) cale_month_pane_g11_ParamLimits

0x1ce8,	// (0x0006ce34) cale_month_pane_g11

0x1d3a,	// (0x0006ce86) cale_month_pane_g12_ParamLimits

0x1d3a,	// (0x0006ce86) cale_month_pane_g12

0x1d8c,	// (0x0006ced8) cale_month_pane_g13_ParamLimits

0x1d8c,	// (0x0006ced8) cale_month_pane_g13

0x000c,

0xf296,	// (0x0007a3e2) cale_month_pane_g_ParamLimits

0xf296,	// (0x0007a3e2) cale_month_pane_g

0x1dde,	// (0x0006cf2a) cale_month_week_pane

0x1e02,	// (0x0006cf4e) grid_cale_month_pane_ParamLimits

0x1e02,	// (0x0006cf4e) grid_cale_month_pane

0x1e40,	// (0x0006cf8c) cale_month_day_heading_pane_t1

0x1ec6,	// (0x0006d012) cale_month_day_heading_pane_t2

0x1f57,	// (0x0006d0a3) cale_month_day_heading_pane_t3

0x1fe8,	// (0x0006d134) cale_month_day_heading_pane_t4

0x2081,	// (0x0006d1cd) cale_month_day_heading_pane_t5

0x2122,	// (0x0006d26e) cale_month_day_heading_pane_t6

0x21c3,	// (0x0006d30f) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0007a3fd) cale_month_day_heading_pane_t

0xae10,	// (0x00075f5c) bg_cale_side_pane_cp01

0x226c,	// (0x0006d3b8) cale_month_week_pane_t1

0x2285,	// (0x0006d3d1) cale_month_week_pane_t2

0x229e,	// (0x0006d3ea) cale_month_week_pane_t3

0x22b7,	// (0x0006d403) cale_month_week_pane_t4

0x22d0,	// (0x0006d41c) cale_month_week_pane_t5

0x22e9,	// (0x0006d435) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0007a40c) cale_month_week_pane_t

0x2302,	// (0x0006d44e) cell_cale_month_pane_ParamLimits

0x2302,	// (0x0006d44e) cell_cale_month_pane

0x959b,	// (0x000746e7) cell_cale_month_pane_g1

0x245a,	// (0x0006d5a6) cell_cale_month_pane_t1_ParamLimits

0x245a,	// (0x0006d5a6) cell_cale_month_pane_t1

0xae1e,	// (0x00075f6a) grid_highlight_pane_cp08

0xace8,	// (0x00075e34) main_smil_g1

0x247a,	// (0x0006d5c6) smil_status_pane

0xb1f9,	// (0x00076345) smil_text_pane

0xca15,	// (0x00077b61) bg_popup_call3_rect_pane_g8

0xca1d,	// (0x00077b69) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0007a6c5) bg_popup_call3_rect_pane_g

0xcc64,	// (0x00077db0) smil_status_volume_pane_g1

0xb203,	// (0x0007634f) smil_status_pane_t1

0x977e,	// (0x000748ca) volume_smil_pane

0xb21a,	// (0x00076366) list_smil_text_pane

0x248f,	// (0x0006d5db) scroll_pane_cp011

0x249a,	// (0x0006d5e6) smil_text_list_pane_t1_ParamLimits

0x249a,	// (0x0006d5e6) smil_text_list_pane_t1

0x95a7,	// (0x000746f3) aid_volume_smil_ParamLimits

0x95a7,	// (0x000746f3) aid_volume_smil

0xace8,	// (0x00075e34) smil_volume_pane_g1

0xace8,	// (0x00075e34) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0007a42c) smil_volume_pane_g

0x09db,	// (0x0006bb27) listscroll_cale_day_pane

0xb224,	// (0x00076370) bg_cale_pane

0xb23c,	// (0x00076388) list_cale_pane

0xb25f,	// (0x000763ab) scroll_pane_cp09

0xb270,	// (0x000763bc) cale_bg_pane_g1

0xb278,	// (0x000763c4) cale_bg_pane_g2

0xb280,	// (0x000763cc) cale_bg_pane_g3

0xb288,	// (0x000763d4) cale_bg_pane_g4

0xb290,	// (0x000763dc) cale_bg_pane_g5

0xb298,	// (0x000763e4) cale_bg_pane_g6

0xb2a0,	// (0x000763ec) cale_bg_pane_g7

0xb2a8,	// (0x000763f4) cale_bg_pane_g8

0xb2b0,	// (0x000763fc) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0007a431) cale_bg_pane_g

0x24dc,	// (0x0006d628) list_cale_time_pane_ParamLimits

0x24dc,	// (0x0006d628) list_cale_time_pane

0x24f0,	// (0x0006d63c) list_cale_time_pane_g1_ParamLimits

0x24f0,	// (0x0006d63c) list_cale_time_pane_g1

0xb2b8,	// (0x00076404) list_cale_time_pane_g2_ParamLimits

0xb2b8,	// (0x00076404) list_cale_time_pane_g2

0x24fc,	// (0x0006d648) list_cale_time_pane_g3_ParamLimits

0x24fc,	// (0x0006d648) list_cale_time_pane_g3

0x250a,	// (0x0006d656) list_cale_time_pane_g4_ParamLimits

0x250a,	// (0x0006d656) list_cale_time_pane_g4

0x2518,	// (0x0006d664) list_cale_time_pane_g5_ParamLimits

0x2518,	// (0x0006d664) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0007a444) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0007a444) list_cale_time_pane_g

0x2526,	// (0x0006d672) list_cale_time_pane_t1_ParamLimits

0x2526,	// (0x0006d672) list_cale_time_pane_t1

0x254e,	// (0x0006d69a) list_cale_time_pane_t2_ParamLimits

0x254e,	// (0x0006d69a) list_cale_time_pane_t2

0x28d2,	// (0x0006da1e) aid_blid_cardinal_pane

0x2910,	// (0x0006da5c) compass_pane_t4

0x2576,	// (0x0006d6c2) list_cale_time_pane_t4_ParamLimits

0x2576,	// (0x0006d6c2) list_cale_time_pane_t4

0x291e,	// (0x0006da6a) compass_pane_t5

0x292c,	// (0x0006da78) compass_pane_t6

0x293a,	// (0x0006da86) compass_pane_t7

0xb6fd,	// (0x00076849) navi_pane_cc_t1

0xb852,	// (0x0007699e) aid_phob_thumbnail_center_pane

0x300b,	// (0x0006e157) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0007a451) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0007a451) list_cale_time_pane_t

0x94a1,	// (0x000745ed) bg_popup_window_pane_cp02_ParamLimits

0x94a1,	// (0x000745ed) bg_popup_window_pane_cp02

0xb2d2,	// (0x0007641e) heading_pane_cp01_ParamLimits

0xb2d2,	// (0x0007641e) heading_pane_cp01

0xb2de,	// (0x0007642a) loc_req_pane_ParamLimits

0xb2de,	// (0x0007642a) loc_req_pane

0xb2ee,	// (0x0007643a) loc_type_pane_ParamLimits

0xb2ee,	// (0x0007643a) loc_type_pane

0xb300,	// (0x0007644c) loc_type_pane_t1_ParamLimits

0xb300,	// (0x0007644c) loc_type_pane_t1

0xb312,	// (0x0007645e) loc_type_pane_t2_ParamLimits

0xb312,	// (0x0007645e) loc_type_pane_t2

0xb324,	// (0x00076470) loc_type_pane_t3_ParamLimits

0xb324,	// (0x00076470) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0007a458) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0007a458) loc_type_pane_t

0xb336,	// (0x00076482) list_loc_req_pane

0xb340,	// (0x0007648c) scroll_pane_cp012

0x259e,	// (0x0006d6ea) list_single_loc_request_popup_menu_pane_ParamLimits

0x259e,	// (0x0006d6ea) list_single_loc_request_popup_menu_pane

0xb34b,	// (0x00076497) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb34b,	// (0x00076497) list_single_loc_request_popup_menu_pane_g1

0xb357,	// (0x000764a3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb357,	// (0x000764a3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0007a45f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0007a45f) list_single_loc_request_popup_menu_pane_g

0xb363,	// (0x000764af) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb363,	// (0x000764af) list_single_loc_request_popup_menu_pane_t1

0xabaf,	// (0x00075cfb) bg_popup_window_pane_cp03_ParamLimits

0xabaf,	// (0x00075cfb) bg_popup_window_pane_cp03

0xb379,	// (0x000764c5) heading_loc_req_pane_ParamLimits

0xb379,	// (0x000764c5) heading_loc_req_pane

0x25ab,	// (0x0006d6f7) popup_dyc_status_message_window_g1_ParamLimits

0x25ab,	// (0x0006d6f7) popup_dyc_status_message_window_g1

0x25bf,	// (0x0006d70b) popup_dyc_status_message_window_t1_ParamLimits

0x25bf,	// (0x0006d70b) popup_dyc_status_message_window_t1

0x25d4,	// (0x0006d720) popup_dyc_status_message_window_t2_ParamLimits

0x25d4,	// (0x0006d720) popup_dyc_status_message_window_t2

0x25e9,	// (0x0006d735) popup_dyc_status_message_window_t3_ParamLimits

0x25e9,	// (0x0006d735) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0007a464) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0007a464) popup_dyc_status_message_window_t

0xa954,	// (0x00075aa0) bg_heading_pane_cp01

0xb385,	// (0x000764d1) heading_loc_req_pane_g1

0xb38d,	// (0x000764d9) heading_loc_req_pane_g2

0xb395,	// (0x000764e1) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0007a46b) heading_loc_req_pane_g

0xb39d,	// (0x000764e9) heading_loc_req_pane_t1

0xb3ac,	// (0x000764f8) bg_popup_sub_pane_cp01_ParamLimits

0xb3ac,	// (0x000764f8) bg_popup_sub_pane_cp01

0xb3ba,	// (0x00076506) popup_cale_events_window_g1_ParamLimits

0xb3ba,	// (0x00076506) popup_cale_events_window_g1

0xb3da,	// (0x00076526) popup_cale_events_window_g2_ParamLimits

0xb3da,	// (0x00076526) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0007a49f) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0007a49f) popup_cale_events_window_g

0xb3fa,	// (0x00076546) popup_cale_events_window_t1_ParamLimits

0xb3fa,	// (0x00076546) popup_cale_events_window_t1

0xb40c,	// (0x00076558) popup_cale_events_window_t2_ParamLimits

0xb40c,	// (0x00076558) popup_cale_events_window_t2

0xb44a,	// (0x00076596) popup_cale_events_window_t3_ParamLimits

0xb44a,	// (0x00076596) popup_cale_events_window_t3

0xb484,	// (0x000765d0) popup_cale_events_window_t4_ParamLimits

0xb484,	// (0x000765d0) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0007a4a4) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0007a4a4) popup_cale_events_window_t

0x26e0,	// (0x0006d82c) call_type_pane

0x26f0,	// (0x0006d83c) popup_call_status_window_g1

0x2704,	// (0x0006d850) popup_call_status_window_g2

0x2718,	// (0x0006d864) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0007a4ad) popup_call_status_window_g

0xb4ba,	// (0x00076606) call_type_pane_g1

0xb4c3,	// (0x0007660f) call_type_pane_g2

0x0001,

0xf368,	// (0x0007a4b4) call_type_pane_g

0xa954,	// (0x00075aa0) bg_popup_sub_pane_cp02

0xb4cc,	// (0x00076618) listscroll_popup_wml_pane

0xb4d4,	// (0x00076620) list_wml_pane

0xb4de,	// (0x0007662a) scroll_pane_cp013

0xb4e9,	// (0x00076635) list_single_graphic_popup_wml_pane_ParamLimits

0xb4e9,	// (0x00076635) list_single_graphic_popup_wml_pane

0xace8,	// (0x00075e34) list_single_graphic_popup_wml_pane_g1

0xb4fd,	// (0x00076649) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0007a4b9) list_single_graphic_popup_wml_pane_g

0xb505,	// (0x00076651) list_single_graphic_popup_wml_pane_t1

0xb51b,	// (0x00076667) aid_call_pane

0xaba7,	// (0x00075cf3) popup_clock_analogue_window_g1

0xaba7,	// (0x00075cf3) popup_clock_analogue_window_g2

0x95c9,	// (0x00074715) popup_clock_analogue_window_g3

0x95c9,	// (0x00074715) popup_clock_analogue_window_g4

0xace8,	// (0x00075e34) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0007a4be) popup_clock_analogue_window_g

0x95d1,	// (0x0007471d) popup_clock_analogue_window_t1

0x95df,	// (0x0007472b) clock_digital_number_pane_ParamLimits

0x95df,	// (0x0007472b) clock_digital_number_pane

0x95eb,	// (0x00074737) clock_digital_number_pane_cp02_ParamLimits

0x95eb,	// (0x00074737) clock_digital_number_pane_cp02

0x95f7,	// (0x00074743) clock_digital_number_pane_cp03_ParamLimits

0x95f7,	// (0x00074743) clock_digital_number_pane_cp03

0x9603,	// (0x0007474f) clock_digital_number_pane_cp04_ParamLimits

0x9603,	// (0x0007474f) clock_digital_number_pane_cp04

0x9613,	// (0x0007475f) clock_digital_separator_pane_ParamLimits

0x9613,	// (0x0007475f) clock_digital_separator_pane

0x961f,	// (0x0007476b) popup_clock_digital_window_t1

0xace8,	// (0x00075e34) clock_digital_number_pane_g1

0xace8,	// (0x00075e34) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0007a42c) clock_digital_number_pane_g

0xace8,	// (0x00075e34) clock_digital_separator_pane_g1

0xace8,	// (0x00075e34) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0007a42c) clock_digital_separator_pane_g

0xa954,	// (0x00075aa0) bg_popup_window_pane_cp04

0xb523,	// (0x0007666f) heading_pane_cp03

0xb52b,	// (0x00076677) listscroll_popup_gms_pane

0xb533,	// (0x0007667f) grid_large_graphic_popup_pane

0xb53d,	// (0x00076689) listscroll_popup_gms_pane_g1

0xb545,	// (0x00076691) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0007a4c9) listscroll_popup_gms_pane_g

0xb00d,	// (0x00076159) scroll_pane_cp014

0xb54d,	// (0x00076699) cell_large_graphic_popup_pane_ParamLimits

0xb54d,	// (0x00076699) cell_large_graphic_popup_pane

0xb565,	// (0x000766b1) cell_large_graphic_popup_pane_g1_ParamLimits

0xb565,	// (0x000766b1) cell_large_graphic_popup_pane_g1

0xb571,	// (0x000766bd) cell_large_graphic_popup_pane_g2_ParamLimits

0xb571,	// (0x000766bd) cell_large_graphic_popup_pane_g2

0xb57d,	// (0x000766c9) cell_large_graphic_popup_pane_g3_ParamLimits

0xb57d,	// (0x000766c9) cell_large_graphic_popup_pane_g3

0xb58a,	// (0x000766d6) cell_large_graphic_popup_pane_g4_ParamLimits

0xb58a,	// (0x000766d6) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0007a4ce) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0007a4ce) cell_large_graphic_popup_pane_g

0xb59a,	// (0x000766e6) grid_highlight_pane_cp010

0xace8,	// (0x00075e34) bg_popup_call_pane_g1

0xb5a4,	// (0x000766f0) list_single_graphic_popup_conf_pane_ParamLimits

0xb5a4,	// (0x000766f0) list_single_graphic_popup_conf_pane

0xb5b7,	// (0x00076703) list_highlight_pane_cp01

0xb5c0,	// (0x0007670c) list_single_graphic_popup_conf_pane_g1

0xb5c8,	// (0x00076714) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0007a4d7) list_single_graphic_popup_conf_pane_g

0xb5d0,	// (0x0007671c) list_single_graphic_popup_conf_pane_t1

0xb5de,	// (0x0007672a) linegrid_cams_pane_g1

0x2727,	// (0x0006d873) linegrid_cams_pane_g2

0xada0,	// (0x00075eec) linegrid_cams_pane_g3

0xb5e7,	// (0x00076733) linegrid_cams_pane_g4

0x2730,	// (0x0006d87c) linegrid_cams_pane_g5

0x2739,	// (0x0006d885) linegrid_cams_pane_g6

0xae51,	// (0x00075f9d) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0007a4dc) linegrid_cams_pane_g

0xb5f0,	// (0x0007673c) popup_clock_analogue_window

0xb5f0,	// (0x0007673c) popup_clock_digital_window

0xa954,	// (0x00075aa0) popup_phob_thumbnail_window

0xace8,	// (0x00075e34) call_video_uplink_pane_g1

0xb5f9,	// (0x00076745) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0007a4eb) call_video_uplink_pane_g

0xae1e,	// (0x00075f6a) video_uplink_pane

0xb601,	// (0x0007674d) mce_image_pane_g1

0x2744,	// (0x0006d890) mce_image_pane_g2

0x274c,	// (0x0006d898) mce_image_pane_g3

0x2754,	// (0x0006d8a0) mce_image_pane_g4

0x275e,	// (0x0006d8aa) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0007a4f0) mce_image_pane_g

0xb60b,	// (0x00076757) control_top_pane_stacon_cp01_ParamLimits

0xb60b,	// (0x00076757) control_top_pane_stacon_cp01

0xb61f,	// (0x0007676b) uni_indicator_pane_stacon_cp01_ParamLimits

0xb61f,	// (0x0007676b) uni_indicator_pane_stacon_cp01

0xb630,	// (0x0007677c) bg_popup_sub_pane_cp03

0x2766,	// (0x0006d8b2) chi_dic_find_pane

0x276e,	// (0x0006d8ba) listscroll_chi_dic_pane

0x2777,	// (0x0006d8c3) main_pane_chidic_g1

0xb63a,	// (0x00076786) chi_dic_find_pane_t1

0xb648,	// (0x00076794) find_chidic_pane

0xb651,	// (0x0007679d) chi_dic_list_pane_ParamLimits

0xb651,	// (0x0007679d) chi_dic_list_pane

0xb662,	// (0x000767ae) scroll_pane_cp020

0xb66a,	// (0x000767b6) find_chidic_pane_t1

0xa954,	// (0x00075aa0) input_focus_pane_cp06

0x278a,	// (0x0006d8d6) list_chi_dic_pane_ParamLimits

0x278a,	// (0x0006d8d6) list_chi_dic_pane

0x279d,	// (0x0006d8e9) list_chi_dic_pane_t1_ParamLimits

0x279d,	// (0x0006d8e9) list_chi_dic_pane_t1

0xa954,	// (0x00075aa0) list_highlight_pane_cp020

0xb679,	// (0x000767c5) bg_cale_heading_pane_g1

0x27b0,	// (0x0006d8fc) bg_cale_heading_pane_g2

0x27b8,	// (0x0006d904) bg_cale_heading_pane_g3

0x27c0,	// (0x0006d90c) bg_cale_heading_pane_g4

0x27ca,	// (0x0006d916) bg_cale_heading_pane_g5

0x27d4,	// (0x0006d920) bg_cale_heading_pane_g6

0x27dc,	// (0x0006d928) bg_cale_heading_pane_g7

0x27e4,	// (0x0006d930) bg_cale_heading_pane_g8

0x27ee,	// (0x0006d93a) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0007a4fb) bg_cale_heading_pane_g

0xb679,	// (0x000767c5) bg_cale_side_pane_g1

0x27f8,	// (0x0006d944) bg_cale_side_pane_g2

0x2800,	// (0x0006d94c) bg_cale_side_pane_g3

0x2808,	// (0x0006d954) bg_cale_side_pane_g4

0x2810,	// (0x0006d95c) bg_cale_side_pane_g5

0x2818,	// (0x0006d964) bg_cale_side_pane_g6

0x2820,	// (0x0006d96c) bg_cale_side_pane_g7

0x2828,	// (0x0006d974) bg_cale_side_pane_g8

0x2830,	// (0x0006d97c) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0007a50e) bg_cale_side_pane_g

0x2838,	// (0x0006d984) popup_call_status_window_ParamLimits

0x2838,	// (0x0006d984) popup_call_status_window

0xb681,	// (0x000767cd) stacon_top_pane

0xb689,	// (0x000767d5) status_pane_ParamLimits

0xb689,	// (0x000767d5) status_pane

0xb69e,	// (0x000767ea) status_small_pane

0xb6a6,	// (0x000767f2) control_pane

0xa954,	// (0x00075aa0) stacon_bottom_pane

0xb6ae,	// (0x000767fa) list_single_mce_smart_pane_t1_ParamLimits

0xb6ae,	// (0x000767fa) list_single_mce_smart_pane_t1

0xb6c1,	// (0x0007680d) list_single_mce_smart_pane_t2_ParamLimits

0xb6c1,	// (0x0007680d) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0007a521) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0007a521) list_single_mce_smart_pane_t

0x287f,	// (0x0006d9cb) compass_pane

0x2888,	// (0x0006d9d4) main_location2_pane_t1

0x289a,	// (0x0006d9e6) main_location2_pane_t2

0x28ac,	// (0x0006d9f8) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0007a526) main_location2_pane_t

0xb6e0,	// (0x0007682c) compass_pane_g1_ParamLimits

0xb6e0,	// (0x0007682c) compass_pane_g1

0x28f2,	// (0x0006da3e) compass_pane_t1

0x2901,	// (0x0006da4d) compass_pane_t2

0x0005,

0xf3e3,	// (0x0007a52f) compass_pane_t

0x2948,	// (0x0006da94) text_secondary_cp61

0xb6f4,	// (0x00076840) navi_pane_cams_g5

0xb717,	// (0x00076863) navi_pane_im_t1

0xb725,	// (0x00076871) navi_pane_mp_g1_ParamLimits

0xb725,	// (0x00076871) navi_pane_mp_g1

0xb739,	// (0x00076885) navi_pane_mp_g2_ParamLimits

0xb739,	// (0x00076885) navi_pane_mp_g2

0xb745,	// (0x00076891) navi_pane_mp_g3_ParamLimits

0xb745,	// (0x00076891) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0007a543) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0007a543) navi_pane_mp_g

0xb751,	// (0x0007689d) navi_pane_mp_t1

0xb75f,	// (0x000768ab) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0007a54a) navi_pane_mp_t

0xb79b,	// (0x000768e7) navi_pane_vt_g1

0xb751,	// (0x0007689d) navi_pane_vt_t1

0xb7a3,	// (0x000768ef) navi_slider_pane

0xb7ab,	// (0x000768f7) zooming_pane

0xb7b3,	// (0x000768ff) navi_slider_pane_g1

0x963c,	// (0x00074788) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0007a551) navi_slider_pane_g

0xb7d7,	// (0x00076923) aid_levels_zoom

0xb7df,	// (0x0007692b) zooming_pane_g1

0xb7e7,	// (0x00076933) zooming_pane_g2

0xb7e7,	// (0x00076933) zooming_pane_g3

0x0002,

0xf414,	// (0x0007a560) zooming_pane_g

0xb7ef,	// (0x0007693b) level_10_zoom

0xb7f8,	// (0x00076944) level_11_zoom

0xb801,	// (0x0007694d) level_1_zoom

0xb80a,	// (0x00076956) level_2_zoom

0xb813,	// (0x0007695f) level_3_zoom

0xb81c,	// (0x00076968) level_4_zoom

0xb825,	// (0x00076971) level_5_zoom

0xb82e,	// (0x0007697a) level_6_zoom

0xb837,	// (0x00076983) level_7_zoom

0xb840,	// (0x0007698c) level_8_zoom

0xb849,	// (0x00076995) level_9_zoom

0xb85a,	// (0x000769a6) popup_phob_thumbnail_window_g1

0xb862,	// (0x000769ae) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0007a567) popup_phob_thumbnail_window_g

0xcb77,	// (0x00077cc3) level_1_location

0xcb7f,	// (0x00077ccb) level_2_location

0xcb87,	// (0x00077cd3) level_3_location

0xcb8f,	// (0x00077cdb) level_4_location

0xb7ab,	// (0x000768f7) level_5_location

0x2a8f,	// (0x0006dbdb) mce_icon_pane_g1

0x2a99,	// (0x0006dbe5) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0007a56c) mce_icon_pane_g

0x2aa3,	// (0x0006dbef) main_mup_pane_g1_ParamLimits

0x2aa3,	// (0x0006dbef) main_mup_pane_g1

0x2ab9,	// (0x0006dc05) main_mup_pane_g2_ParamLimits

0x2ab9,	// (0x0006dc05) main_mup_pane_g2

0x2ad1,	// (0x0006dc1d) main_mup_pane_g3_ParamLimits

0x2ad1,	// (0x0006dc1d) main_mup_pane_g3

0x2ae9,	// (0x0006dc35) main_mup_pane_g4_ParamLimits

0x2ae9,	// (0x0006dc35) main_mup_pane_g4

0x2b01,	// (0x0006dc4d) main_mup_pane_g5_ParamLimits

0x2b01,	// (0x0006dc4d) main_mup_pane_g5

0x2b1d,	// (0x0006dc69) main_mup_pane_g6_ParamLimits

0x2b1d,	// (0x0006dc69) main_mup_pane_g6

0x2b35,	// (0x0006dc81) main_mup_pane_g7_ParamLimits

0x2b35,	// (0x0006dc81) main_mup_pane_g7

0x2b4d,	// (0x0006dc99) main_mup_pane_g8_ParamLimits

0x2b4d,	// (0x0006dc99) main_mup_pane_g8

0x2b65,	// (0x0006dcb1) main_mup_pane_g9_ParamLimits

0x2b65,	// (0x0006dcb1) main_mup_pane_g9

0x2b7f,	// (0x0006dccb) main_mup_pane_g10_ParamLimits

0x2b7f,	// (0x0006dccb) main_mup_pane_g10

0x2b99,	// (0x0006dce5) main_mup_pane_g11_ParamLimits

0x2b99,	// (0x0006dce5) main_mup_pane_g11

0x2bad,	// (0x0006dcf9) main_mup_pane_g12_ParamLimits

0x2bad,	// (0x0006dcf9) main_mup_pane_g12

0x2bc3,	// (0x0006dd0f) main_mup_pane_g13_ParamLimits

0x2bc3,	// (0x0006dd0f) main_mup_pane_g13

0x000c,

0xf425,	// (0x0007a571) main_mup_pane_g_ParamLimits

0xf425,	// (0x0007a571) main_mup_pane_g

0x2bd7,	// (0x0006dd23) main_mup_pane_t1_ParamLimits

0x2bd7,	// (0x0006dd23) main_mup_pane_t1

0x2bf1,	// (0x0006dd3d) main_mup_pane_t2_ParamLimits

0x2bf1,	// (0x0006dd3d) main_mup_pane_t2

0x2c09,	// (0x0006dd55) main_mup_pane_t3_ParamLimits

0x2c09,	// (0x0006dd55) main_mup_pane_t3

0x2c21,	// (0x0006dd6d) main_mup_pane_t4_ParamLimits

0x2c21,	// (0x0006dd6d) main_mup_pane_t4

0x2c3f,	// (0x0006dd8b) main_mup_pane_t5_ParamLimits

0x2c3f,	// (0x0006dd8b) main_mup_pane_t5

0x2c54,	// (0x0006dda0) main_mup_pane_t6_ParamLimits

0x2c54,	// (0x0006dda0) main_mup_pane_t6

0x0005,

0xf440,	// (0x0007a58c) main_mup_pane_t_ParamLimits

0xf440,	// (0x0007a58c) main_mup_pane_t

0x2c66,	// (0x0006ddb2) mup_progress_pane_ParamLimits

0x2c66,	// (0x0006ddb2) mup_progress_pane

0x2c72,	// (0x0006ddbe) mup_visualizer_pane_ParamLimits

0x2c72,	// (0x0006ddbe) mup_visualizer_pane

0x2ca6,	// (0x0006ddf2) mup_volume_pane_ParamLimits

0x2ca6,	// (0x0006ddf2) mup_volume_pane

0xb86a,	// (0x000769b6) mup_visualizer_pane_g1_ParamLimits

0xb86a,	// (0x000769b6) mup_visualizer_pane_g1

0xb86a,	// (0x000769b6) mup_visualizer_pane_g2_ParamLimits

0xb86a,	// (0x000769b6) mup_visualizer_pane_g2

0xb6e0,	// (0x0007682c) mup_visualizer_pane_g3_ParamLimits

0xb6e0,	// (0x0007682c) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0007a599) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0007a599) mup_visualizer_pane_g

0xace8,	// (0x00075e34) mup_volume_pane_g1

0xb880,	// (0x000769cc) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0007a5a0) mup_volume_pane_g

0xace8,	// (0x00075e34) mup_progress_pane_g1

0xb889,	// (0x000769d5) mup_progress_pane_g2

0xb892,	// (0x000769de) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0007a5a5) mup_progress_pane_g

0xa954,	// (0x00075aa0) bg_popup_window_pane_cp05

0xb89b,	// (0x000769e7) heading_pane_cp02_ParamLimits

0xb89b,	// (0x000769e7) heading_pane_cp02

0xb8b5,	// (0x00076a01) list_popup_blid_pane

0xb8bd,	// (0x00076a09) list_blid_sat_info_pane_ParamLimits

0xb8bd,	// (0x00076a09) list_blid_sat_info_pane

0xb8d0,	// (0x00076a1c) list_blid_sat_info_pane_g1

0xb8d8,	// (0x00076a24) list_blid_sat_info_pane_t1

0x2dbc,	// (0x0006df08) mup_equalizer_pane_ParamLimits

0x2dbc,	// (0x0006df08) mup_equalizer_pane

0x2dd5,	// (0x0006df21) mup_equalizer_pane_cp1_ParamLimits

0x2dd5,	// (0x0006df21) mup_equalizer_pane_cp1

0x2df2,	// (0x0006df3e) mup_equalizer_pane_cp2_ParamLimits

0x2df2,	// (0x0006df3e) mup_equalizer_pane_cp2

0x2e0f,	// (0x0006df5b) mup_equalizer_pane_cp3_ParamLimits

0x2e0f,	// (0x0006df5b) mup_equalizer_pane_cp3

0x2e30,	// (0x0006df7c) mup_equalizer_pane_cp4_ParamLimits

0x2e30,	// (0x0006df7c) mup_equalizer_pane_cp4

0x2e51,	// (0x0006df9d) mup_equalizer_pane_cp5

0x2e65,	// (0x0006dfb1) mup_equalizer_pane_cp6

0x2e79,	// (0x0006dfc5) mup_equalizer_pane_cp7

0xca95,	// (0x00077be1) bg_popup_call_poc_act_pane_g9

0xca9d,	// (0x00077be9) bg_popup_call_poc_act_pane_g10

0xcaa5,	// (0x00077bf1) bg_popup_call_poc_act_pane_g11

0x000a,

0xabaf,	// (0x00075cfb) mup_scale_pane

0xace8,	// (0x00075e34) mup_scale_pane_g1

0xb8e6,	// (0x00076a32) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0007a5c1) mup_scale_pane_g

0xb90a,	// (0x00076a56) msg_data_pane

0xb912,	// (0x00076a5e) scroll_pane_cp017

0x964e,	// (0x0007479a) bg_list_pane_cp04_ParamLimits

0x964e,	// (0x0007479a) bg_list_pane_cp04

0xb91a,	// (0x00076a66) msg_data_pane_g1

0x2e9f,	// (0x0006dfeb) msg_data_pane_g2

0x2ea7,	// (0x0006dff3) msg_data_pane_g3

0x2eaf,	// (0x0006dffb) msg_data_pane_g4

0x2eb7,	// (0x0006e003) msg_data_pane_g5

0x2ebf,	// (0x0006e00b) msg_data_pane_g6

0x2ec7,	// (0x0006e013) msg_data_pane_g7

0x0006,

0xf484,	// (0x0007a5d0) msg_data_pane_g

0x2ecf,	// (0x0006e01b) msg_text_pane_ParamLimits

0x2ecf,	// (0x0006e01b) msg_text_pane

0x2ef8,	// (0x0006e044) qrid_highlight_pane_cp011_ParamLimits

0x2ef8,	// (0x0006e044) qrid_highlight_pane_cp011

0xa954,	// (0x00075aa0) msg_body_pane

0xa954,	// (0x00075aa0) msg_header_pane

0xb922,	// (0x00076a6e) input_focus_pane_cp07

0x966e,	// (0x000747ba) msg_header_pane_t1_ParamLimits

0x966e,	// (0x000747ba) msg_header_pane_t1

0x9680,	// (0x000747cc) msg_header_pane_t2_ParamLimits

0x9680,	// (0x000747cc) msg_header_pane_t2

0x0001,

0xf498,	// (0x0007a5e4) msg_header_pane_t_ParamLimits

0xf498,	// (0x0007a5e4) msg_header_pane_t

0xb937,	// (0x00076a83) msg_body_pane_g1

0x9692,	// (0x000747de) msg_body_pane_t1_ParamLimits

0x9692,	// (0x000747de) msg_body_pane_t1

0x96c3,	// (0x0007480f) msg_body_pane_t2_ParamLimits

0x96c3,	// (0x0007480f) msg_body_pane_t2

0x96d5,	// (0x00074821) msg_body_pane_t3_ParamLimits

0x96d5,	// (0x00074821) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0007a5e9) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0007a5e9) msg_body_pane_t

0x2f61,	// (0x0006e0ad) main_viewer_pane_g1_ParamLimits

0x2f61,	// (0x0006e0ad) main_viewer_pane_g1

0x2f6f,	// (0x0006e0bb) main_viewer_pane_g2_ParamLimits

0x2f6f,	// (0x0006e0bb) main_viewer_pane_g2

0x2f7d,	// (0x0006e0c9) main_viewer_pane_g3_ParamLimits

0x2f7d,	// (0x0006e0c9) main_viewer_pane_g3

0x2f8c,	// (0x0006e0d8) main_viewer_pane_g4_ParamLimits

0x2f8c,	// (0x0006e0d8) main_viewer_pane_g4

0x96ff,	// (0x0007484b) main_viewer_pane_g5_ParamLimits

0x96ff,	// (0x0007484b) main_viewer_pane_g5

0x96ff,	// (0x0007484b) main_viewer_pane_g7_ParamLimits

0x96ff,	// (0x0007484b) main_viewer_pane_g7

0xb34b,	// (0x00076497) main_viewer_pane_g8_ParamLimits

0xb34b,	// (0x00076497) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0007a5f9) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0007a5f9) main_viewer_pane_g

0xb93f,	// (0x00076a8b) viewer_content_pane_ParamLimits

0xb93f,	// (0x00076a8b) viewer_content_pane

0x2fc8,	// (0x0006e114) main_postcard_pane_g1_ParamLimits

0x2fc8,	// (0x0006e114) main_postcard_pane_g1

0x2fde,	// (0x0006e12a) main_postcard_pane_g2_ParamLimits

0x2fde,	// (0x0006e12a) main_postcard_pane_g2

0x2ff4,	// (0x0006e140) main_postcard_pane_g3_ParamLimits

0x2ff4,	// (0x0006e140) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0007a60a) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0007a60a) main_postcard_pane_g

0x300b,	// (0x0006e157) main_postcard_pane_g4

0xcc77,	// (0x00077dc3) smil_status_volume_pane_g2

0x304e,	// (0x0006e19a) postcard_pane_ParamLimits

0x304e,	// (0x0006e19a) postcard_pane

0xb94d,	// (0x00076a99) postcard_pane_g1_ParamLimits

0xb94d,	// (0x00076a99) postcard_pane_g1

0x3090,	// (0x0006e1dc) postcard_pane_g2_ParamLimits

0x3090,	// (0x0006e1dc) postcard_pane_g2

0x309c,	// (0x0006e1e8) postcard_pane_g3_ParamLimits

0x309c,	// (0x0006e1e8) postcard_pane_g3

0xb95b,	// (0x00076aa7) postcard_pane_g4_ParamLimits

0xb95b,	// (0x00076aa7) postcard_pane_g4

0x30a8,	// (0x0006e1f4) postcard_pane_g5_ParamLimits

0x30a8,	// (0x0006e1f4) postcard_pane_g5

0x30bd,	// (0x0006e209) postcard_pane_g6_ParamLimits

0x30bd,	// (0x0006e209) postcard_pane_g6

0xb94d,	// (0x00076a99) postcard_pane_g7_ParamLimits

0xb94d,	// (0x00076a99) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0007a617) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0007a617) postcard_pane_g

0x30d1,	// (0x0006e21d) main_mp2_pane_g1_ParamLimits

0x30d1,	// (0x0006e21d) main_mp2_pane_g1

0x30dd,	// (0x0006e229) main_mp2_pane_g2_ParamLimits

0x30dd,	// (0x0006e229) main_mp2_pane_g2

0x30e9,	// (0x0006e235) main_mp2_pane_g3_ParamLimits

0x30e9,	// (0x0006e235) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0007a626) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0007a626) main_mp2_pane_g

0x30f5,	// (0x0006e241) main_mp2_pane_t1_ParamLimits

0x30f5,	// (0x0006e241) main_mp2_pane_t1

0x310a,	// (0x0006e256) main_mp2_pane_t2_ParamLimits

0x310a,	// (0x0006e256) main_mp2_pane_t2

0x311c,	// (0x0006e268) main_mp2_pane_t3_ParamLimits

0x311c,	// (0x0006e268) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0007a62d) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0007a62d) main_mp2_pane_t

0xb969,	// (0x00076ab5) pec_content_pane_ParamLimits

0xb969,	// (0x00076ab5) pec_content_pane

0xb00d,	// (0x00076159) scroll_pane_cp015

0xb97b,	// (0x00076ac7) pec_attribute_pane_ParamLimits

0xb97b,	// (0x00076ac7) pec_attribute_pane

0x312e,	// (0x0006e27a) pec_content_pane_g1_ParamLimits

0x312e,	// (0x0006e27a) pec_content_pane_g1

0xb98b,	// (0x00076ad7) pec_content_pane_t1_ParamLimits

0xb98b,	// (0x00076ad7) pec_content_pane_t1

0xb99d,	// (0x00076ae9) pec_content_pane_t2_ParamLimits

0xb99d,	// (0x00076ae9) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0007a634) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0007a634) pec_content_pane_t

0x313a,	// (0x0006e286) list_single_graphic_pane_cp01_ParamLimits

0x313a,	// (0x0006e286) list_single_graphic_pane_cp01

0xabaf,	// (0x00075cfb) bg_popup_sub_pane_cp04

0xb9af,	// (0x00076afb) popup_mup_playback_window_g1

0xb9bb,	// (0x00076b07) popup_mup_playback_window_t1

0xb9d0,	// (0x00076b1c) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0007a639) popup_mup_playback_window_t

0xba07,	// (0x00076b53) main_image_pane_g1_ParamLimits

0xba07,	// (0x00076b53) main_image_pane_g1

0xba4a,	// (0x00076b96) scroll_pane_cp018_ParamLimits

0xba4a,	// (0x00076b96) scroll_pane_cp018

0xba62,	// (0x00076bae) scroll_pane_cp016_ParamLimits

0xba62,	// (0x00076bae) scroll_pane_cp016

0x3209,	// (0x0006e355) smil2_image_pane_ParamLimits

0x3209,	// (0x0006e355) smil2_image_pane

0x323d,	// (0x0006e389) smil2_root_pane_ParamLimits

0x323d,	// (0x0006e389) smil2_root_pane

0x3275,	// (0x0006e3c1) smil2_text_pane_ParamLimits

0x3275,	// (0x0006e3c1) smil2_text_pane

0xa954,	// (0x00075aa0) bg_list_pane_cp06

0xbab3,	// (0x00076bff) grid_radio_pane

0xa954,	// (0x00075aa0) bg_popup_window_pane_cp06

0xbabb,	// (0x00076c07) main_fmradio_pane_t1

0xb523,	// (0x0007666f) heading_pane_cp04

0xbac9,	// (0x00076c15) main_fmradio_pane_t2

0xcaad,	// (0x00077bf9) popup_cale_lunar_info_window_g1

0xbad7,	// (0x00076c23) main_fmradio_pane_t3

0xcab5,	// (0x00077c01) popup_cale_lunar_info_window_g2

0xbae5,	// (0x00076c31) main_fmradio_pane_t4

0x0001,

0xbaf3,	// (0x00076c3f) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0007a714) popup_cale_lunar_info_window_g

0xf502,	// (0x0007a64e) main_fmradio_pane_t

0xbb01,	// (0x00076c4d) wait_bar_pane_cp03

0xbb09,	// (0x00076c55) cell_fmradio_pane_ParamLimits

0xbb09,	// (0x00076c55) cell_fmradio_pane

0xb94d,	// (0x00076a99) cell_fmradio_pane_g1_ParamLimits

0xb94d,	// (0x00076a99) cell_fmradio_pane_g1

0xa954,	// (0x00075aa0) grid_highlight_pane_cp011

0xbb1c,	// (0x00076c68) poc_content_pane_ParamLimits

0xbb1c,	// (0x00076c68) poc_content_pane

0xbb2e,	// (0x00076c7a) scroll_pane_cp019

0x32f5,	// (0x0006e441) popup_call_poc_act_window_ParamLimits

0x32f5,	// (0x0006e441) popup_call_poc_act_window

0x3319,	// (0x0006e465) popup_call_poc_inact_window_ParamLimits

0x3319,	// (0x0006e465) popup_call_poc_inact_window

0xf59f,	// (0x0007a6eb) bg_popup_call_poc_act_pane_g

0xca25,	// (0x00077b71) bg_popup_call_poc_inact_pane_g1

0xca2d,	// (0x00077b79) bg_popup_call_poc_inact_pane_g2

0xbb36,	// (0x00076c82) popup_call_poc_act_window_g2

0xca35,	// (0x00077b81) bg_popup_call_poc_inact_pane_g3

0xca3d,	// (0x00077b89) bg_popup_call_poc_inact_pane_g4

0xca45,	// (0x00077b91) bg_popup_call_poc_inact_pane_g5

0xbb3e,	// (0x00076c8a) popup_call_poc_act_window_t1_ParamLimits

0xbb3e,	// (0x00076c8a) popup_call_poc_act_window_t1

0xbb66,	// (0x00076cb2) popup_call_poc_act_window_t2_ParamLimits

0xbb66,	// (0x00076cb2) popup_call_poc_act_window_t2

0xbb8e,	// (0x00076cda) popup_call_poc_act_window_t3_ParamLimits

0xbb8e,	// (0x00076cda) popup_call_poc_act_window_t3

0xbbb6,	// (0x00076d02) popup_call_poc_act_window_t4_ParamLimits

0xbbb6,	// (0x00076d02) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0007a659) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0007a659) popup_call_poc_act_window_t

0xca4d,	// (0x00077b99) bg_popup_call_poc_inact_pane_g6

0xca55,	// (0x00077ba1) bg_popup_call_poc_inact_pane_g7

0xca5d,	// (0x00077ba9) bg_popup_call_poc_inact_pane_g8

0xbbc8,	// (0x00076d14) popup_call_poc_inact_window_g2

0xca65,	// (0x00077bb1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0007a6d8) bg_popup_call_poc_inact_pane_g

0xbbd0,	// (0x00076d1c) popup_call_poc_inact_window_t1_ParamLimits

0xbbd0,	// (0x00076d1c) popup_call_poc_inact_window_t1

0xbbe5,	// (0x00076d31) popup_call_poc_inact_window_t2_ParamLimits

0xbbe5,	// (0x00076d31) popup_call_poc_inact_window_t2

0xbbfa,	// (0x00076d46) popup_call_poc_inact_window_t3_ParamLimits

0xbbfa,	// (0x00076d46) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0007a662) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0007a662) popup_call_poc_inact_window_t

0xcbea,	// (0x00077d36) context_pane_ParamLimits

0x3b42,	// (0x0006ec8e) signal_pane_ParamLimits

0xb7ab,	// (0x000768f7) main_call2_pane

0x974a,	// (0x00074896) popup_phob_thumbnail2_window_ParamLimits

0x974a,	// (0x00074896) popup_phob_thumbnail2_window

0x96e7,	// (0x00074833) aid_hotspot_pointer_arrow_pane

0x96ef,	// (0x0007483b) aid_hotspot_pointer_hand_pane

0x3664,	// (0x0006e7b0) phob_pre_status_pane_g5

0x109a,	// (0x0006c1e6) cams_zoom_pane_ParamLimits

0x10a9,	// (0x0006c1f5) image_vga_pane_ParamLimits

0x10c3,	// (0x0006c20f) main_camera_pane_g1_ParamLimits

0x10d5,	// (0x0006c221) main_camera_pane_g2_ParamLimits

0x10e5,	// (0x0006c231) main_camera_pane_g3_ParamLimits

0x10f7,	// (0x0006c243) main_camera_pane_g4_ParamLimits

0x1109,	// (0x0006c255) main_camera_pane_g5_ParamLimits

0x111b,	// (0x0006c267) main_camera_pane_g6_ParamLimits

0x112d,	// (0x0006c279) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0007a361) main_camera_pane_g_ParamLimits

0x113f,	// (0x0006c28b) main_camera_pane_t1_ParamLimits

0x1155,	// (0x0006c2a1) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0007a372) main_camera_pane_t_ParamLimits

0xabaf,	// (0x00075cfb) bg_popup_preview_window_pane_cp01_ParamLimits

0xabaf,	// (0x00075cfb) bg_popup_preview_window_pane_cp01

0xbc0f,	// (0x00076d5b) popup_phob_thumbnail2_window_g1_ParamLimits

0xbc0f,	// (0x00076d5b) popup_phob_thumbnail2_window_g1

0xa954,	// (0x00075aa0) call2_cli_visual_pane

0x334d,	// (0x0006e499) popup_call2_audio_conf_window_ParamLimits

0x334d,	// (0x0006e499) popup_call2_audio_conf_window

0x336d,	// (0x0006e4b9) popup_call2_audio_first_window_ParamLimits

0x336d,	// (0x0006e4b9) popup_call2_audio_first_window

0x3403,	// (0x0006e54f) popup_call2_audio_in_window_ParamLimits

0x3403,	// (0x0006e54f) popup_call2_audio_in_window

0x344b,	// (0x0006e597) popup_call2_audio_out_window_ParamLimits

0x344b,	// (0x0006e597) popup_call2_audio_out_window

0x34b5,	// (0x0006e601) popup_call2_audio_second_window_ParamLimits

0x34b5,	// (0x0006e601) popup_call2_audio_second_window

0x351b,	// (0x0006e667) popup_call2_audio_wait_window_ParamLimits

0x351b,	// (0x0006e667) popup_call2_audio_wait_window

0xa954,	// (0x00075aa0) bg_popup_call2_act_pane_cp03

0xab91,	// (0x00075cdd) list_conf_pane_cp

0xbc1b,	// (0x00076d67) popup_call2_audio_conf_window_t1

0xbc29,	// (0x00076d75) list_single_graphic_popup_conf2_pane_ParamLimits

0xbc29,	// (0x00076d75) list_single_graphic_popup_conf2_pane

0xb5b7,	// (0x00076703) list_highlight_pane_cp04

0xbc3c,	// (0x00076d88) list_single_graphic_popup_conf2_pane_g1

0xb5c8,	// (0x00076714) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0007a669) list_single_graphic_popup_conf2_pane_g

0xbc46,	// (0x00076d92) list_single_graphic_popup_conf2_pane_t1

0xbc54,	// (0x00076da0) bg_popup_call2_act_pane_cp01_ParamLimits

0xbc54,	// (0x00076da0) bg_popup_call2_act_pane_cp01

0xbcde,	// (0x00076e2a) call_type_pane_cp05_ParamLimits

0xbcde,	// (0x00076e2a) call_type_pane_cp05

0xbd32,	// (0x00076e7e) popup_call2_audio_second_window_g1_ParamLimits

0xbd32,	// (0x00076e7e) popup_call2_audio_second_window_g1

0xbd86,	// (0x00076ed2) popup_call2_audio_second_window_g2_ParamLimits

0xbd86,	// (0x00076ed2) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0007a66e) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0007a66e) popup_call2_audio_second_window_g

0xbdeb,	// (0x00076f37) popup_call2_audio_second_window_t1_ParamLimits

0xbdeb,	// (0x00076f37) popup_call2_audio_second_window_t1

0xbea6,	// (0x00076ff2) popup_call2_audio_second_window_t2_ParamLimits

0xbea6,	// (0x00076ff2) popup_call2_audio_second_window_t2

0xbef9,	// (0x00077045) popup_call2_audio_second_window_t3_ParamLimits

0xbef9,	// (0x00077045) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0007a675) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0007a675) popup_call2_audio_second_window_t

0xa954,	// (0x00075aa0) bg_popup_call2_in_pane_cp02

0xa95e,	// (0x00075aaa) call_type_pane_cp04

0xa966,	// (0x00075ab2) popup_call2_audio_wait_window_g1

0xa96e,	// (0x00075aba) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0007a24e) popup_call2_audio_wait_window_g

0xa976,	// (0x00075ac2) popup_call2_audio_wait_window_t3

0xbfec,	// (0x00077138) bg_popup_call2_act_pane_ParamLimits

0xbfec,	// (0x00077138) bg_popup_call2_act_pane

0xc0ac,	// (0x000771f8) call_type_pane_cp03_ParamLimits

0xc0ac,	// (0x000771f8) call_type_pane_cp03

0xc110,	// (0x0007725c) popup_call2_audio_first_window_g1_ParamLimits

0xc110,	// (0x0007725c) popup_call2_audio_first_window_g1

0xc180,	// (0x000772cc) popup_call2_audio_first_window_g2_ParamLimits

0xc180,	// (0x000772cc) popup_call2_audio_first_window_g2

0xb86a,	// (0x000769b6) popup_call2_audio_first_window_g3_ParamLimits

0xb86a,	// (0x000769b6) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0007a67e) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0007a67e) popup_call2_audio_first_window_g

0xc25e,	// (0x000773aa) popup_call2_audio_first_window_t1_ParamLimits

0xc25e,	// (0x000773aa) popup_call2_audio_first_window_t1

0xc361,	// (0x000774ad) popup_call2_audio_first_window_t4_ParamLimits

0xc361,	// (0x000774ad) popup_call2_audio_first_window_t4

0xc450,	// (0x0007759c) popup_call2_audio_first_window_t5_ParamLimits

0xc450,	// (0x0007759c) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0007a689) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0007a689) popup_call2_audio_first_window_t

0xaba7,	// (0x00075cf3) bg_popup_call2_act_pane_g1

0xcabd,	// (0x00077c09) popup_cale_lunar_info_window_t1

0xcacb,	// (0x00077c17) popup_cale_lunar_info_window_t2

0xcad9,	// (0x00077c25) popup_cale_lunar_info_window_t3

0xa954,	// (0x00075aa0) bg_popup_call2_bubble_pane

0xc551,	// (0x0007769d) bg_popup_call2_in_pane_cp01_ParamLimits

0xc551,	// (0x0007769d) bg_popup_call2_in_pane_cp01

0x9dbd,	// (0x00074f09) call_type_pane_cp02

0xc599,	// (0x000776e5) popup_call2_audio_out_window_g1_ParamLimits

0xc599,	// (0x000776e5) popup_call2_audio_out_window_g1

0xc5c5,	// (0x00077711) popup_call2_audio_out_window_g2_ParamLimits

0xc5c5,	// (0x00077711) popup_call2_audio_out_window_g2

0xc5ed,	// (0x00077739) popup_call2_audio_out_window_g3_ParamLimits

0xc5ed,	// (0x00077739) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0007a692) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0007a692) popup_call2_audio_out_window_g

0xc628,	// (0x00077774) popup_call2_audio_out_window_t1_ParamLimits

0xc628,	// (0x00077774) popup_call2_audio_out_window_t1

0xc687,	// (0x000777d3) popup_call2_audio_out_window_t2_ParamLimits

0xc687,	// (0x000777d3) popup_call2_audio_out_window_t2

0xc6db,	// (0x00077827) popup_call2_audio_out_window_t3_ParamLimits

0xc6db,	// (0x00077827) popup_call2_audio_out_window_t3

0xc6f1,	// (0x0007783d) popup_call2_audio_out_window_t4_ParamLimits

0xc6f1,	// (0x0007783d) popup_call2_audio_out_window_t4

0xc707,	// (0x00077853) popup_call2_audio_out_window_t5_ParamLimits

0xc707,	// (0x00077853) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0007a69b) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0007a69b) popup_call2_audio_out_window_t

0xc76b,	// (0x000778b7) bg_popup_call2_in_pane_ParamLimits

0xc76b,	// (0x000778b7) bg_popup_call2_in_pane

0xc7c7,	// (0x00077913) popup_call2_audio_in_window_g1_ParamLimits

0xc7c7,	// (0x00077913) popup_call2_audio_in_window_g1

0xc7ff,	// (0x0007794b) popup_call2_audio_in_window_g2_ParamLimits

0xc7ff,	// (0x0007794b) popup_call2_audio_in_window_g2

0xc837,	// (0x00077983) popup_call2_audio_in_window_g3_ParamLimits

0xc837,	// (0x00077983) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0007a6a8) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0007a6a8) popup_call2_audio_in_window_g

0xc88f,	// (0x000779db) popup_call2_audio_in_window_t1_ParamLimits

0xc88f,	// (0x000779db) popup_call2_audio_in_window_t1

0xc90f,	// (0x00077a5b) popup_call2_audio_in_window_t2_ParamLimits

0xc90f,	// (0x00077a5b) popup_call2_audio_in_window_t2

0xc98f,	// (0x00077adb) popup_call2_audio_in_window_t3_ParamLimits

0xc98f,	// (0x00077adb) popup_call2_audio_in_window_t3

0xc9a9,	// (0x00077af5) popup_call2_audio_in_window_t4_ParamLimits

0xc9a9,	// (0x00077af5) popup_call2_audio_in_window_t4

0xc9bb,	// (0x00077b07) popup_call2_audio_in_window_t5_ParamLimits

0xc9bb,	// (0x00077b07) popup_call2_audio_in_window_t5

0xc9d0,	// (0x00077b1c) popup_call2_audio_in_window_t6_ParamLimits

0xc9d0,	// (0x00077b1c) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0007a6b1) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0007a6b1) popup_call2_audio_in_window_t

0xaba7,	// (0x00075cf3) bg_popup_call2_in_pane_g1

0xcae7,	// (0x00077c33) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0007a719) popup_cale_lunar_info_window_t

0xabaf,	// (0x00075cfb) bg_popup_call2_rect_pane_ParamLimits

0xabaf,	// (0x00075cfb) bg_popup_call2_rect_pane

0xa954,	// (0x00075aa0) call2_cli_visual_graphic_pane

0xa954,	// (0x00075aa0) call2_cli_visual_text_pane

0x9771,	// (0x000748bd) smil_status_volume_pane_g3

0x0002,

0xace8,	// (0x00075e34) call2_cli_visual_graphic_pane_g1

0xace8,	// (0x00075e34) call2_cli_visual_graphic_pane_g2

0xace8,	// (0x00075e34) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0007a6be) call2_cli_visual_graphic_pane_g

0xc9e5,	// (0x00077b31) bg_popup_call2_rect_pane_g1

0xad86,	// (0x00075ed2) bg_popup_call2_rect_pane_g2

0xc9ed,	// (0x00077b39) bg_popup_call2_rect_pane_g3

0xc9f5,	// (0x00077b41) bg_popup_call2_rect_pane_g4

0xc9fd,	// (0x00077b49) bg_popup_call2_rect_pane_g5

0xca05,	// (0x00077b51) bg_popup_call2_rect_pane_g6

0xca0d,	// (0x00077b59) bg_popup_call2_rect_pane_g7

0xca15,	// (0x00077b61) bg_popup_call2_rect_pane_g8

0xca1d,	// (0x00077b69) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0007a6c5) bg_popup_call2_rect_pane_g

0xca25,	// (0x00077b71) bg_popup_call2_bubble_pane_g1

0xca2d,	// (0x00077b79) bg_popup_call2_bubble_pane_g2

0xca35,	// (0x00077b81) bg_popup_call2_bubble_pane_g3

0xca3d,	// (0x00077b89) bg_popup_call2_bubble_pane_g4

0xca45,	// (0x00077b91) bg_popup_call2_bubble_pane_g5

0xca4d,	// (0x00077b99) bg_popup_call2_bubble_pane_g6

0xca55,	// (0x00077ba1) bg_popup_call2_bubble_pane_g7

0xca5d,	// (0x00077ba9) bg_popup_call2_bubble_pane_g8

0xca65,	// (0x00077bb1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0007a6d8) bg_popup_call2_bubble_pane_g

0x09ed,	// (0x0006bb39) aid_cale_week_size_cell_pane

0x116d,	// (0x0006c2b9) aid_cams_cif_uncrop_pane_ParamLimits

0x116d,	// (0x0006c2b9) aid_cams_cif_uncrop_pane

0x1322,	// (0x0006c46e) aid_cams_size_cell_ParamLimits

0x1322,	// (0x0006c46e) aid_cams_size_cell

0x1336,	// (0x0006c482) grid_cams_pane_ParamLimits

0x1350,	// (0x0006c49c) linegrid_cams_pane_ParamLimits

0x1510,	// (0x0006c65c) call_video_pane_t1

0x152e,	// (0x0006c67a) call_video_pane_t2

0x0001,

0xf279,	// (0x0007a3c5) call_video_pane_t

0x195d,	// (0x0006caa9) aid_cale_month_size_cell_pane_ParamLimits

0x195d,	// (0x0006caa9) aid_cale_month_size_cell_pane

0xf616,	// (0x0007a762) smil_status_volume_pane_g

0x977e,	// (0x000748ca) volume_smil_pane_ParamLimits

0x93b9,	// (0x00074505) aid_popup2_width_pane

0x0952,	// (0x0006ba9e) cell_qdial_pane_g4_ParamLimits

0x0952,	// (0x0006ba9e) cell_qdial_pane_g4

0x28d2,	// (0x0006da1e) aid_blid_cardinal_pane_ParamLimits

0x28de,	// (0x0006da2a) aid_blid_destination_pane_ParamLimits

0x28de,	// (0x0006da2a) aid_blid_destination_pane

0xabaf,	// (0x00075cfb) bg_popup_call_poc_act_pane_ParamLimits

0xabaf,	// (0x00075cfb) bg_popup_call_poc_act_pane

0xabaf,	// (0x00075cfb) bg_popup_call_poc_inact_pane_ParamLimits

0xabaf,	// (0x00075cfb) bg_popup_call_poc_inact_pane

0xca6d,	// (0x00077bb9) bg_popup_call_poc_act_pane_g1

0xca75,	// (0x00077bc1) bg_popup_call_poc_act_pane_g2

0xca7d,	// (0x00077bc9) bg_popup_call_poc_act_pane_g3

0xca3d,	// (0x00077b89) bg_popup_call_poc_act_pane_g4

0xca45,	// (0x00077b91) bg_popup_call_poc_act_pane_g5

0xca85,	// (0x00077bd1) bg_popup_call_poc_act_pane_g6

0xca55,	// (0x00077ba1) bg_popup_call_poc_act_pane_g7

0xca8d,	// (0x00077bd9) bg_popup_call_poc_act_pane_g8

0xa954,	// (0x00075aa0) main_usb_pane

0x9725,	// (0x00074871) popup_cale_lunar_info_window

0x17f8,	// (0x0006c944) im_reading_pane_t1_ParamLimits

0xaf65,	// (0x000760b1) list_im_pane_ParamLimits

0xaf76,	// (0x000760c2) scroll_pane_cp07_ParamLimits

0xa954,	// (0x00075aa0) grid_highlight_pane_cp012

0xabaf,	// (0x00075cfb) mup_scale_pane_ParamLimits

0xb94d,	// (0x00076a99) main_usb_pane_g1_ParamLimits

0xb94d,	// (0x00076a99) main_usb_pane_g1

0x3579,	// (0x0006e6c5) main_usb_pane_g2_ParamLimits

0x3579,	// (0x0006e6c5) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0007a702) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0007a702) main_usb_pane_g

0x358f,	// (0x0006e6db) main_usb_pane_t1_ParamLimits

0x358f,	// (0x0006e6db) main_usb_pane_t1

0x35a1,	// (0x0006e6ed) main_usb_pane_t2_ParamLimits

0x35a1,	// (0x0006e6ed) main_usb_pane_t2

0x35b3,	// (0x0006e6ff) main_usb_pane_t3_ParamLimits

0x35b3,	// (0x0006e6ff) main_usb_pane_t3

0x35c5,	// (0x0006e711) main_usb_pane_t4_ParamLimits

0x35c5,	// (0x0006e711) main_usb_pane_t4

0x35d7,	// (0x0006e723) main_usb_pane_t5_ParamLimits

0x35d7,	// (0x0006e723) main_usb_pane_t5

0x35e9,	// (0x0006e735) main_usb_pane_t6_ParamLimits

0x35e9,	// (0x0006e735) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0007a707) main_usb_pane_t_ParamLimits

0x287f,	// (0x0006d9cb) aid_text_placing

0x2888,	// (0x0006d9d4) main_location2_pane_t1_ParamLimits

0x289a,	// (0x0006d9e6) main_location2_pane_t2_ParamLimits

0x28ac,	// (0x0006d9f8) main_location2_pane_t3_ParamLimits

0x28c0,	// (0x0006da0c) main_location2_pane_t4_ParamLimits

0x28c0,	// (0x0006da0c) main_location2_pane_t4

0xf3da,	// (0x0007a526) main_location2_pane_t_ParamLimits

0xabeb,	// (0x00075d37) find_pinb_pane_g2_ParamLimits

0xabeb,	// (0x00075d37) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0007a274) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0007a274) find_pinb_pane_g

0xabf7,	// (0x00075d43) find_pinb_pane_t1_ParamLimits

0xac09,	// (0x00075d55) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0007a279) find_pinb_pane_t_ParamLimits

0xa954,	// (0x00075aa0) main_call3_pane

0x1e40,	// (0x0006cf8c) cale_month_day_heading_pane_t1_ParamLimits

0x1ec6,	// (0x0006d012) cale_month_day_heading_pane_t2_ParamLimits

0x1f57,	// (0x0006d0a3) cale_month_day_heading_pane_t3_ParamLimits

0x1fe8,	// (0x0006d134) cale_month_day_heading_pane_t4_ParamLimits

0x2081,	// (0x0006d1cd) cale_month_day_heading_pane_t5_ParamLimits

0x2122,	// (0x0006d26e) cale_month_day_heading_pane_t6_ParamLimits

0x21c3,	// (0x0006d30f) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0007a3fd) cale_month_day_heading_pane_t_ParamLimits

0xb211,	// (0x0007635d) smil_status_volume_pane

0x306c,	// (0x0006e1b8) postcard_address_pane_ParamLimits

0x306c,	// (0x0006e1b8) postcard_address_pane

0x307e,	// (0x0006e1ca) postcard_message_pane_ParamLimits

0x307e,	// (0x0006e1ca) postcard_message_pane

0x3555,	// (0x0006e6a1) call2_cli_visual_pane_t1_ParamLimits

0x3555,	// (0x0006e6a1) call2_cli_visual_pane_t1

0x3d71,	// (0x0006eebd) postcard_message_pane_t1_ParamLimits

0x3d71,	// (0x0006eebd) postcard_message_pane_t1

0x3d5a,	// (0x0006eea6) postcard_address_pane_t1_ParamLimits

0x3d5a,	// (0x0006eea6) postcard_address_pane_t1

0x3d46,	// (0x0006ee92) popup_call3_audio_in_window_ParamLimits

0x3d46,	// (0x0006ee92) popup_call3_audio_in_window

0x3bd3,	// (0x0006ed1f) bg_popup_call3_in_pane_ParamLimits

0x3bd3,	// (0x0006ed1f) bg_popup_call3_in_pane

0x3c47,	// (0x0006ed93) popup_call3_audio_in_window_g1_ParamLimits

0x3c47,	// (0x0006ed93) popup_call3_audio_in_window_g1

0x3c67,	// (0x0006edb3) popup_call3_audio_in_window_g2_ParamLimits

0x3c67,	// (0x0006edb3) popup_call3_audio_in_window_g2

0x3c87,	// (0x0006edd3) popup_call3_audio_in_window_g3_ParamLimits

0x3c87,	// (0x0006edd3) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0007a769) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0007a769) popup_call3_audio_in_window_g

0x3cb8,	// (0x0006ee04) popup_call3_audio_in_window_t1_ParamLimits

0x3cb8,	// (0x0006ee04) popup_call3_audio_in_window_t1

0x3cf6,	// (0x0006ee42) popup_call3_audio_in_window_t2_ParamLimits

0x3cf6,	// (0x0006ee42) popup_call3_audio_in_window_t2

0x3d34,	// (0x0006ee80) popup_call3_audio_in_window_t3_ParamLimits

0x3d34,	// (0x0006ee80) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0007a772) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0007a772) popup_call3_audio_in_window_t

0xb7ab,	// (0x000768f7) bg_popup_call3_rect_pane

0xc9e5,	// (0x00077b31) bg_popup_call3_rect_pane_g1

0xad86,	// (0x00075ed2) bg_popup_call3_rect_pane_g2

0xc9ed,	// (0x00077b39) bg_popup_call3_rect_pane_g3

0xc9f5,	// (0x00077b41) bg_popup_call3_rect_pane_g4

0xc9fd,	// (0x00077b49) bg_popup_call3_rect_pane_g5

0xca05,	// (0x00077b51) bg_popup_call3_rect_pane_g6

0xca0d,	// (0x00077b59) bg_popup_call3_rect_pane_g7

0x2cbc,	// (0x0006de08) mup_visualizer_osc_pane

0xb878,	// (0x000769c4) mup_visualizer_spec_pane

0x3c03,	// (0x0006ed4f) call3_video_qcif_pane_ParamLimits

0x3c03,	// (0x0006ed4f) call3_video_qcif_pane

0x3c14,	// (0x0006ed60) call3_video_qcif_uncrop_pane_ParamLimits

0x3c14,	// (0x0006ed60) call3_video_qcif_uncrop_pane

0x3c22,	// (0x0006ed6e) call3_video_subqcif_pane_ParamLimits

0x3c22,	// (0x0006ed6e) call3_video_subqcif_pane

0x3c36,	// (0x0006ed82) call3_video_subqcif_uncrop_pane_ParamLimits

0x3c36,	// (0x0006ed82) call3_video_subqcif_uncrop_pane

0x3ca7,	// (0x0006edf3) popup_call3_audio_in_window_g4_ParamLimits

0x3ca7,	// (0x0006edf3) popup_call3_audio_in_window_g4

0x3bc2,	// (0x0006ed0e) mup_spec_half_pane

0x3bcb,	// (0x0006ed17) mup_spec_half_pane_cp

0xcc4a,	// (0x00077d96) mup_osc_middle_pane

0xcc53,	// (0x00077d9f) mup_visualizer_osc_pane_g1

0x3ba2,	// (0x0006ecee) mup_spec_bar_pane_ParamLimits

0x3ba2,	// (0x0006ecee) mup_spec_bar_pane

0xcc37,	// (0x00077d83) mup_spec_bar_pane_g1

0xcc41,	// (0x00077d8d) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0007a75d) mup_spec_bar_pane_g

0x09ed,	// (0x0006bb39) aid_cale_week_size_cell_pane_ParamLimits

0x0a07,	// (0x0006bb53) bg_cale_heading_pane_ParamLimits

0xadc3,	// (0x00075f0f) bg_cale_pane_cp01_ParamLimits

0x0a25,	// (0x0006bb71) cale_week_corner_pane_ParamLimits

0x0a44,	// (0x0006bb90) cale_week_day_heading_pane_ParamLimits

0x0a67,	// (0x0006bbb3) cale_week_scroll_pane_g1_ParamLimits

0x0a80,	// (0x0006bbcc) cale_week_scroll_pane_g2_ParamLimits

0x0a98,	// (0x0006bbe4) cale_week_scroll_pane_g3_ParamLimits

0x0ab0,	// (0x0006bbfc) cale_week_scroll_pane_g4_ParamLimits

0x0ac8,	// (0x0006bc14) cale_week_scroll_pane_g5_ParamLimits

0x0ae4,	// (0x0006bc30) cale_week_scroll_pane_g6_ParamLimits

0x0b04,	// (0x0006bc50) cale_week_scroll_pane_g7_ParamLimits

0x0b24,	// (0x0006bc70) cale_week_scroll_pane_g8_ParamLimits

0x0b48,	// (0x0006bc94) cale_week_scroll_pane_g9_ParamLimits

0x0b60,	// (0x0006bcac) cale_week_scroll_pane_g10_ParamLimits

0x0b78,	// (0x0006bcc4) cale_week_scroll_pane_g11_ParamLimits

0x0b90,	// (0x0006bcdc) cale_week_scroll_pane_g12_ParamLimits

0x0ba8,	// (0x0006bcf4) cale_week_scroll_pane_g13_ParamLimits

0x0ba8,	// (0x0006bcf4) cale_week_scroll_pane_g14_ParamLimits

0x0ba8,	// (0x0006bcf4) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0007a305) cale_week_scroll_pane_g_ParamLimits

0x0bc0,	// (0x0006bd0c) cale_week_time_pane_ParamLimits

0x0be4,	// (0x0006bd30) grid_cale_week_pane_ParamLimits

0xade1,	// (0x00075f2d) listscroll_cale_week_pane_t1

0xadf3,	// (0x00075f3f) scroll_pane_cp08_ParamLimits

0x19be,	// (0x0006cb0a) cale_month_corner_pane_ParamLimits

0xb1e7,	// (0x00076333) cale_month_pane_t1

0x1dde,	// (0x0006cf2a) cale_month_week_pane_ParamLimits

0x26f0,	// (0x0006d83c) popup_call_status_window_g1_ParamLimits

0x2704,	// (0x0006d850) popup_call_status_window_g2_ParamLimits

0x2718,	// (0x0006d864) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0007a4ad) popup_call_status_window_g_ParamLimits

0xb513,	// (0x0007665f) aid_call2_pane

0x2f19,	// (0x0006e065) msg_header_pane_g1

0x306c,	// (0x0006e1b8) postcard_address2_pane_ParamLimits

0x306c,	// (0x0006e1b8) postcard_address2_pane

0x307e,	// (0x0006e1ca) postcard_message2_pane_ParamLimits

0x307e,	// (0x0006e1ca) postcard_message2_pane

0x3b50,	// (0x0006ec9c) message2_row_pane_ParamLimits

0x3b50,	// (0x0006ec9c) message2_row_pane

0x3b6f,	// (0x0006ecbb) address2_row_pane_ParamLimits

0x3b6f,	// (0x0006ecbb) address2_row_pane

0xcc05,	// (0x00077d51) postcard_message2_row_pane_g1

0xcc0d,	// (0x00077d59) postcard_message2_row_pane_t1

0xcc05,	// (0x00077d51) address2_row_pane_g1

0xcc0d,	// (0x00077d59) address2_row_pane_t1

0x0fff,	// (0x0006c14b) aid_size_cell_vorec

0xa954,	// (0x00075aa0) main_rss_pane

0x3b82,	// (0x0006ecce) rss_list_single_pane_ParamLimits

0x3b82,	// (0x0006ecce) rss_list_single_pane

0xcc1b,	// (0x00077d67) rss_list_single_pane_t1

0xcc29,	// (0x00077d75) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0007a758) rss_list_single_pane_t

0xa954,	// (0x00075aa0) main_camera2_pane

0xa954,	// (0x00075aa0) main_video2_pane

0x3dea,	// (0x0006ef36) cams_zoom_pane_cp2_ParamLimits

0x3dea,	// (0x0006ef36) cams_zoom_pane_cp2

0x3e0a,	// (0x0006ef56) image2_vga_pane_ParamLimits

0x3e0a,	// (0x0006ef56) image2_vga_pane

0x3e5b,	// (0x0006efa7) main_camera2_pane_g1_ParamLimits

0x3e5b,	// (0x0006efa7) main_camera2_pane_g1

0x3e7b,	// (0x0006efc7) main_camera2_pane_g2_ParamLimits

0x3e7b,	// (0x0006efc7) main_camera2_pane_g2

0x3e9b,	// (0x0006efe7) main_camera2_pane_g3_ParamLimits

0x3e9b,	// (0x0006efe7) main_camera2_pane_g3

0x3ebb,	// (0x0006f007) main_camera2_pane_g4_ParamLimits

0x3ebb,	// (0x0006f007) main_camera2_pane_g4

0x3edb,	// (0x0006f027) main_camera2_pane_g5_ParamLimits

0x3edb,	// (0x0006f027) main_camera2_pane_g5

0x3efb,	// (0x0006f047) main_camera2_pane_g6_ParamLimits

0x3efb,	// (0x0006f047) main_camera2_pane_g6

0x3f1b,	// (0x0006f067) main_camera2_pane_g7_ParamLimits

0x3f1b,	// (0x0006f067) main_camera2_pane_g7

0x3f3b,	// (0x0006f087) main_camera2_pane_g8_ParamLimits

0x3f3b,	// (0x0006f087) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0007a779) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0007a779) main_camera2_pane_g

0x3f7b,	// (0x0006f0c7) main_camera2_pane_t1_ParamLimits

0x3f7b,	// (0x0006f0c7) main_camera2_pane_t1

0x3fb0,	// (0x0006f0fc) main_camera2_pane_t2_ParamLimits

0x3fb0,	// (0x0006f0fc) main_camera2_pane_t2

0x3fd6,	// (0x0006f122) main_camera2_pane_t3_ParamLimits

0x3fd6,	// (0x0006f122) main_camera2_pane_t3

0x4034,	// (0x0006f180) main_camera2_pane_t4_ParamLimits

0x4034,	// (0x0006f180) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0007a78c) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0007a78c) main_camera2_pane_t

0x40c6,	// (0x0006f212) cams_zoom_pane_cp4_ParamLimits

0x40c6,	// (0x0006f212) cams_zoom_pane_cp4

0x40dc,	// (0x0006f228) image2_cif_pane_ParamLimits

0x40dc,	// (0x0006f228) image2_cif_pane

0x4107,	// (0x0006f253) image2_subqcif_pane_ParamLimits

0x4107,	// (0x0006f253) image2_subqcif_pane

0x4121,	// (0x0006f26d) main_video2_pane_g1_ParamLimits

0x4121,	// (0x0006f26d) main_video2_pane_g1

0x413b,	// (0x0006f287) main_video2_pane_g2_ParamLimits

0x413b,	// (0x0006f287) main_video2_pane_g2

0x4151,	// (0x0006f29d) main_video2_pane_g3_ParamLimits

0x4151,	// (0x0006f29d) main_video2_pane_g3

0x4167,	// (0x0006f2b3) main_video2_pane_g4_ParamLimits

0x4167,	// (0x0006f2b3) main_video2_pane_g4

0x417d,	// (0x0006f2c9) main_video2_pane_g5_ParamLimits

0x417d,	// (0x0006f2c9) main_video2_pane_g5

0x4193,	// (0x0006f2df) main_video2_pane_g6_ParamLimits

0x4193,	// (0x0006f2df) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0007a79b) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0007a79b) main_video2_pane_g

0x41ad,	// (0x0006f2f9) main_video2_pane_t1_ParamLimits

0x41ad,	// (0x0006f2f9) main_video2_pane_t1

0x41d1,	// (0x0006f31d) main_video2_pane_t2_ParamLimits

0x41d1,	// (0x0006f31d) main_video2_pane_t2

0x421f,	// (0x0006f36b) main_video2_pane_t3_ParamLimits

0x421f,	// (0x0006f36b) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0007a7a8) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0007a7a8) main_video2_pane_t

0x36a4,	// (0x0006e7f0) call_muted_g2

0x0001,

0xf5fe,	// (0x0007a74a) call_muted_g

0xa954,	// (0x00075aa0) main_mup2_pane

0x4267,	// (0x0006f3b3) main_mup2_pane_g1_ParamLimits

0x4267,	// (0x0006f3b3) main_mup2_pane_g1

0x4273,	// (0x0006f3bf) main_mup2_pane_g2_ParamLimits

0x4273,	// (0x0006f3bf) main_mup2_pane_g2

0x97ec,	// (0x00074938) main_mup_pane_g13_cp1

0x97f4,	// (0x00074940) mup_volume_pane_cp1

0x428f,	// (0x0006f3db) main_mup2_pane_g4_ParamLimits

0x428f,	// (0x0006f3db) main_mup2_pane_g4

0x42a1,	// (0x0006f3ed) main_mup2_pane_g5_ParamLimits

0x42a1,	// (0x0006f3ed) main_mup2_pane_g5

0x42b3,	// (0x0006f3ff) main_mup2_pane_g6_ParamLimits

0x42b3,	// (0x0006f3ff) main_mup2_pane_g6

0x42c5,	// (0x0006f411) main_mup2_pane_g7_ParamLimits

0x42c5,	// (0x0006f411) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0007a7af) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0007a7af) main_mup2_pane_g

0x42dd,	// (0x0006f429) main_mup2_pane_t1_ParamLimits

0x42dd,	// (0x0006f429) main_mup2_pane_t1

0x42f3,	// (0x0006f43f) main_mup2_pane_t2_ParamLimits

0x42f3,	// (0x0006f43f) main_mup2_pane_t2

0x4309,	// (0x0006f455) main_mup2_pane_t3_ParamLimits

0x4309,	// (0x0006f455) main_mup2_pane_t3

0x431f,	// (0x0006f46b) main_mup2_pane_t4_ParamLimits

0x431f,	// (0x0006f46b) main_mup2_pane_t4

0x4337,	// (0x0006f483) main_mup2_pane_t5_ParamLimits

0x4337,	// (0x0006f483) main_mup2_pane_t5

0x434f,	// (0x0006f49b) main_mup2_pane_t6_ParamLimits

0x434f,	// (0x0006f49b) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0007a7be) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0007a7be) main_mup2_pane_t

0x437f,	// (0x0006f4cb) mup2_visualizer_pane_ParamLimits

0x437f,	// (0x0006f4cb) mup2_visualizer_pane

0x43ad,	// (0x0006f4f9) mup_progress_pane_cp_ParamLimits

0x43ad,	// (0x0006f4f9) mup_progress_pane_cp

0x97d7,	// (0x00074923) mup_volume_pane_cp_ParamLimits

0x97d7,	// (0x00074923) mup_volume_pane_cp

0x43c1,	// (0x0006f50d) mup2_visualizer_pane_g1_ParamLimits

0x43c1,	// (0x0006f50d) mup2_visualizer_pane_g1

0xcc8a,	// (0x00077dd6) mup2_visualizer_pane_g2_ParamLimits

0xcc8a,	// (0x00077dd6) mup2_visualizer_pane_g2

0x43d8,	// (0x0006f524) mup2_visualizer_pane_g3_ParamLimits

0x43d8,	// (0x0006f524) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0007a7cb) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0007a7cb) mup2_visualizer_pane_g

0xbaab,	// (0x00076bf7) aid_size_cell_fmradio

0x3856,	// (0x0006e9a2) aid_height_parent_landcape

0xaff4,	// (0x00076140) wml_content_pane_cp

0xaffc,	// (0x00076148) wml_tabs_pane

0xb005,	// (0x00076151) popup_wml_miniature_window

0xb00d,	// (0x00076159) scroll_pane_cp021

0xb021,	// (0x0007616d) wml_content_pane_comp8

0xa954,	// (0x00075aa0) bg_popup_sub_pane_cp05

0xcca8,	// (0x00077df4) popup_wml_miniature_window_g1

0xccb0,	// (0x00077dfc) wml_miniature_view_pane

0x43e4,	// (0x0006f530) aid_size_wml_view

0x43ec,	// (0x0006f538) wml_miniature_view_pane_g1

0x43f5,	// (0x0006f541) wml_miniature_view_pane_g2

0x43fe,	// (0x0006f54a) wml_miniature_view_pane_g3

0x4406,	// (0x0006f552) wml_miniature_view_pane_g4

0x440e,	// (0x0006f55a) wml_miniature_view_pane_g5

0x4416,	// (0x0006f562) wml_miniature_view_pane_g6

0x441e,	// (0x0006f56a) wml_miniature_view_pane_g7

0x4426,	// (0x0006f572) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0007a7d2) wml_miniature_view_pane_g

0xccb8,	// (0x00077e04) background_graphic_ParamLimits

0xccb8,	// (0x00077e04) background_graphic

0xccc4,	// (0x00077e10) wml_tabs_2_pane

0xcccd,	// (0x00077e19) wml_tabs_3_pane_ParamLimits

0xcccd,	// (0x00077e19) wml_tabs_3_pane

0xccdf,	// (0x00077e2b) wml_tabs_4_pane_ParamLimits

0xccdf,	// (0x00077e2b) wml_tabs_4_pane

0xccf5,	// (0x00077e41) wml_tabs_5_pane_ParamLimits

0xccf5,	// (0x00077e41) wml_tabs_5_pane

0xcd0f,	// (0x00077e5b) wml_tabs_pane_g2_ParamLimits

0xcd0f,	// (0x00077e5b) wml_tabs_pane_g2

0xcd23,	// (0x00077e6f) wml_tabs_pane_g3_ParamLimits

0xcd23,	// (0x00077e6f) wml_tabs_pane_g3

0x442e,	// (0x0006f57a) wml_tabs_2_active_pane_ParamLimits

0x442e,	// (0x0006f57a) wml_tabs_2_active_pane

0x4442,	// (0x0006f58e) wml_tabs_2_passive_pane_ParamLimits

0x4442,	// (0x0006f58e) wml_tabs_2_passive_pane

0x4456,	// (0x0006f5a2) wml_tabs_3_active_pane_cp_ParamLimits

0x4456,	// (0x0006f5a2) wml_tabs_3_active_pane_cp

0x446b,	// (0x0006f5b7) wml_tabs_3_passive_pane_ParamLimits

0x446b,	// (0x0006f5b7) wml_tabs_3_passive_pane

0x447e,	// (0x0006f5ca) wml_tabs_3_passive_pane_cp_ParamLimits

0x447e,	// (0x0006f5ca) wml_tabs_3_passive_pane_cp

0x4495,	// (0x0006f5e1) tabs_4_active_pane

0x449d,	// (0x0006f5e9) tabs_4_passive_pane

0x44a7,	// (0x0006f5f3) tabs_4_passive_pane_cp

0x44af,	// (0x0006f5fb) tabs_4_passive_pane_cp2

0x3571,	// (0x0006e6bd) aid_height_text

0x2c8e,	// (0x0006ddda) mup_volume_cont_pane_ParamLimits

0x2c8e,	// (0x0006ddda) mup_volume_cont_pane

0x05fe,	// (0x0006b74a) aid_size_cell_pinb

0x0608,	// (0x0006b754) aid_size_list_pinb

0x4399,	// (0x0006f4e5) mup2_volume_cont_pane_ParamLimits

0x4399,	// (0x0006f4e5) mup2_volume_cont_pane

0x97c3,	// (0x0007490f) mup2_volume_cont_pane_g1_ParamLimits

0x97c3,	// (0x0007490f) mup2_volume_cont_pane_g1

0x02c0,	// (0x0006b40c) aid_size_cell_touch_ParamLimits

0x02c0,	// (0x0006b40c) aid_size_cell_touch

0x04ed,	// (0x0006b639) touch_pane_ParamLimits

0x04ed,	// (0x0006b639) touch_pane

0x942d,	// (0x00074579) main_rss2_pane

0xcd40,	// (0x00077e8c) listscroll_rss2_pane

0xcd49,	// (0x00077e95) rss2_navigation_pane

0xcd51,	// (0x00077e9d) list_rss2_pane

0xb662,	// (0x000767ae) scroll_pane_cp22

0xcd59,	// (0x00077ea5) rss2_navigation_pane_g1

0xcd62,	// (0x00077eae) rss2_navigation_pane_g2

0xcd6a,	// (0x00077eb6) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0007a7e3) rss2_navigation_pane_g

0xcd72,	// (0x00077ebe) rss2_navigation_pane_t1

0x44b9,	// (0x0006f605) rss2_list_single_pane_ParamLimits

0x44b9,	// (0x0006f605) rss2_list_single_pane

0xcd80,	// (0x00077ecc) rss2_list_single_pane_t2

0xcd8e,	// (0x00077eda) rss2_list_single_pane_t3_ParamLimits

0xcd8e,	// (0x00077eda) rss2_list_single_pane_t3

0xcdab,	// (0x00077ef7) rss2_list_single_pane_t4

0x2485,	// (0x0006d5d1) smil_status_pane_g1

0x941f,	// (0x0007456b) main_image2_pane_ParamLimits

0x941f,	// (0x0007456b) main_image2_pane

0x3f5b,	// (0x0006f0a7) main_camera2_pane_g9_ParamLimits

0x3f5b,	// (0x0006f0a7) main_camera2_pane_g9

0x4089,	// (0x0006f1d5) main_camera2_pane_t5_ParamLimits

0x4089,	// (0x0006f1d5) main_camera2_pane_t5

0x9793,	// (0x000748df) main_camera2_pane_t6_ParamLimits

0x9793,	// (0x000748df) main_camera2_pane_t6

0x44d0,	// (0x0006f61c) main_image2_pane_g1_ParamLimits

0x44d0,	// (0x0006f61c) main_image2_pane_g1

0x32ab,	// (0x0006e3f7) smil2_video_pane_ParamLimits

0x32ab,	// (0x0006e3f7) smil2_video_pane

0x93d5,	// (0x00074521) aid_zoom_text_primary_cp

0x9415,	// (0x00074561) popup_preview_fixed_window

0xaf5d,	// (0x000760a9) im_reading_pane_g1

0x3dd2,	// (0x0006ef1e) cams2_bc_adjust_pane_cp_ParamLimits

0x3dd2,	// (0x0006ef1e) cams2_bc_adjust_pane_cp

0x40b8,	// (0x0006f204) cams2_bc_adjust_pane_ParamLimits

0x40b8,	// (0x0006f204) cams2_bc_adjust_pane

0xd7a6,	// (0x000788f2) cams2_bc_adjust_pane_g1

0x97fc,	// (0x00074948) cams2_slider_pane

0x9805,	// (0x00074951) cams2_slider_pane_g1

0x980e,	// (0x0007495a) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0007a7ea) cams2_slider_pane_g

0x06e0,	// (0x0006b82c) calc_display_pane_ParamLimits

0x0708,	// (0x0006b854) calc_paper_pane_ParamLimits

0x072b,	// (0x0006b877) grid_calc_pane_ParamLimits

0x961f,	// (0x0007476b) popup_clock_digital_window_t1_ParamLimits

0xba33,	// (0x00076b7f) main_image_pane_t1

0x06c2,	// (0x0006b80e) aid_size_cell_calc_ParamLimits

0x06c2,	// (0x0006b80e) aid_size_cell_calc

0x38ae,	// (0x0006e9fa) popup_blid_sat_info2_window_ParamLimits

0x38ae,	// (0x0006e9fa) popup_blid_sat_info2_window

0xcdc1,	// (0x00077f0d) aid_size_cell_blid

0xcdc9,	// (0x00077f15) bg_popup_window_pane_cp07

0xcdec,	// (0x00077f38) grid_popup_blid_pane

0xcdf6,	// (0x00077f42) heading_pane_cp05_ParamLimits

0xcdf6,	// (0x00077f42) heading_pane_cp05

0xcec0,	// (0x0007800c) cell_popup_blid_pane_ParamLimits

0xcec0,	// (0x0007800c) cell_popup_blid_pane

0xcee6,	// (0x00078032) cell_popup_blid_pane_g1

0xceee,	// (0x0007803a) cell_popup_blid_pane_t1

0x4369,	// (0x0006f4b5) mup2_indicator_pane_ParamLimits

0x4369,	// (0x0006f4b5) mup2_indicator_pane

0xb7ab,	// (0x000768f7) mup2_visualizer_osc_pane

0xcc96,	// (0x00077de2) mup2_visualizer_spec_pane_ParamLimits

0xcc96,	// (0x00077de2) mup2_visualizer_spec_pane

0x44e6,	// (0x0006f632) mup2_spec_half_pane

0x44ef,	// (0x0006f63b) mup2_spec_half_pane_cp

0x44f7,	// (0x0006f643) mup2_spec_bar_pane_ParamLimits

0x44f7,	// (0x0006f643) mup2_spec_bar_pane

0xcc37,	// (0x00077d83) mup2_spec_bar_pane_g1

0xcc41,	// (0x00077d8d) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0007a75d) mup2_spec_bar_pane_g

0x4517,	// (0x0006f663) mup2_osc_middle_pane

0xcc53,	// (0x00077d9f) mup2_visualizer_osc_pane_g1

0x9457,	// (0x000745a3) popup_number_entry_window_t1_ParamLimits

0x946a,	// (0x000745b6) popup_number_entry_window_t2_ParamLimits

0x947c,	// (0x000745c8) popup_number_entry_window_t3_ParamLimits

0x053f,	// (0x0006b68b) popup_number_entry_window_t5_ParamLimits

0x053f,	// (0x0006b68b) popup_number_entry_window_t5

0xf0d3,	// (0x0007a21f) popup_number_entry_window_t_ParamLimits

0x948e,	// (0x000745da) text_title_cp2_ParamLimits

0x96f7,	// (0x00074843) aid_hotspot_pointer_text2_pane

0x9711,	// (0x0007485d) main_viewer_pane_g9_ParamLimits

0x9711,	// (0x0007485d) main_viewer_pane_g9

0xb1e7,	// (0x00076333) cale_month_pane_t1_ParamLimits

0xb224,	// (0x00076370) bg_cale_pane_ParamLimits

0xb23c,	// (0x00076388) list_cale_pane_ParamLimits

0xb24d,	// (0x00076399) listscroll_cale_day_pane_t1

0xb25f,	// (0x000763ab) scroll_pane_cp09_ParamLimits

0x2cc4,	// (0x0006de10) main_mup_eq_pane_t1_ParamLimits

0x2cc4,	// (0x0006de10) main_mup_eq_pane_t1

0x2cde,	// (0x0006de2a) main_mup_eq_pane_t2_ParamLimits

0x2cde,	// (0x0006de2a) main_mup_eq_pane_t2

0x2cf8,	// (0x0006de44) main_mup_eq_pane_t3_ParamLimits

0x2cf8,	// (0x0006de44) main_mup_eq_pane_t3

0x2d14,	// (0x0006de60) main_mup_eq_pane_t4_ParamLimits

0x2d14,	// (0x0006de60) main_mup_eq_pane_t4

0x2d30,	// (0x0006de7c) main_mup_eq_pane_t5_ParamLimits

0x2d30,	// (0x0006de7c) main_mup_eq_pane_t5

0x2d4c,	// (0x0006de98) main_mup_eq_pane_t6_ParamLimits

0x2d4c,	// (0x0006de98) main_mup_eq_pane_t6

0x2d60,	// (0x0006deac) main_mup_eq_pane_t7_ParamLimits

0x2d60,	// (0x0006deac) main_mup_eq_pane_t7

0x2d74,	// (0x0006dec0) main_mup_eq_pane_t8_ParamLimits

0x2d74,	// (0x0006dec0) main_mup_eq_pane_t8

0x2d88,	// (0x0006ded4) main_mup_eq_pane_t9_ParamLimits

0x2d88,	// (0x0006ded4) main_mup_eq_pane_t9

0x2da2,	// (0x0006deee) main_mup_eq_pane_t10_ParamLimits

0x2da2,	// (0x0006deee) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0007a5ac) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0007a5ac) main_mup_eq_pane_t

0x2e51,	// (0x0006df9d) mup_equalizer_pane_cp5_ParamLimits

0x2e65,	// (0x0006dfb1) mup_equalizer_pane_cp6_ParamLimits

0x2e79,	// (0x0006dfc5) mup_equalizer_pane_cp7_ParamLimits

0x942d,	// (0x00074579) main_gallery_pane

0xcc5c,	// (0x00077da8) smil2_volume_pane

0xcc64,	// (0x00077db0) smil_status_volume_pane_g1_ParamLimits

0xcc77,	// (0x00077dc3) smil_status_volume_pane_g2_ParamLimits

0x9771,	// (0x000748bd) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0007a762) smil_status_volume_pane_g_ParamLimits

0xcdc9,	// (0x00077f15) bg_popup_window_pane_cp07_ParamLimits

0xcdd7,	// (0x00077f23) blid_firmament_pane

0x4520,	// (0x0006f66c) aid_size_cell_gallery_ParamLimits

0x4520,	// (0x0006f66c) aid_size_cell_gallery

0x4536,	// (0x0006f682) grid_gallery_pane_ParamLimits

0x4536,	// (0x0006f682) grid_gallery_pane

0x454f,	// (0x0006f69b) cell_gallery_pane_ParamLimits

0x454f,	// (0x0006f69b) cell_gallery_pane

0xcefc,	// (0x00078048) bg_cell_gallery_focus_pane_ParamLimits

0xcefc,	// (0x00078048) bg_cell_gallery_focus_pane

0xcf0e,	// (0x0007805a) cell_gallery_pane_g1_ParamLimits

0xcf0e,	// (0x0007805a) cell_gallery_pane_g1

0x4598,	// (0x0006f6e4) cell_gallery_pane_g2_ParamLimits

0x4598,	// (0x0006f6e4) cell_gallery_pane_g2

0x45a5,	// (0x0006f6f1) cell_gallery_pane_g3_ParamLimits

0x45a5,	// (0x0006f6f1) cell_gallery_pane_g3

0xcf1a,	// (0x00078066) cell_gallery_pane_g4_ParamLimits

0xcf1a,	// (0x00078066) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0007a810) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0007a810) cell_gallery_pane_g

0xcf26,	// (0x00078072) bg_cell_gallery_focus_pane_g1

0xcf2e,	// (0x0007807a) bg_cell_gallery_focus_pane_g2

0xcf36,	// (0x00078082) bg_cell_gallery_focus_pane_g3

0xcf3e,	// (0x0007808a) bg_cell_gallery_focus_pane_g4

0xcf46,	// (0x00078092) bg_cell_gallery_focus_pane_g5

0xcf4e,	// (0x0007809a) bg_cell_gallery_focus_pane_g6

0xcf56,	// (0x000780a2) bg_cell_gallery_focus_pane_g7

0xcf5e,	// (0x000780aa) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0007a819) bg_cell_gallery_focus_pane_g

0xcf66,	// (0x000780b2) aid_firma_cardinal

0xcf7a,	// (0x000780c6) blid_firmament_pane_t1

0xcf91,	// (0x000780dd) blid_firmament_pane_t2

0xcfa8,	// (0x000780f4) blid_firmament_pane_t3

0xcfbf,	// (0x0007810b) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0007a82a) blid_firmament_pane_t

0xcfd6,	// (0x00078122) blid_sat_info_pane

0xcfe6,	// (0x00078132) blid_sat_info_pane_g1

0xcfe6,	// (0x00078132) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0007a833) blid_sat_info_pane_g

0xcff0,	// (0x0007813c) blid_sat_info_pane_t1

0xcffe,	// (0x0007814a) smil2_volume_content_pane

0xd007,	// (0x00078153) smil2_volume_pane_g1

0xad1d,	// (0x00075e69) smil2_volume_content_pane_g1

0xd00f,	// (0x0007815b) smil2_volume_content_pane_g2

0xd018,	// (0x00078164) smil2_volume_content_pane_g3

0xd021,	// (0x0007816d) smil2_volume_content_pane_g4

0xd02a,	// (0x00078176) smil2_volume_content_pane_g5

0xd033,	// (0x0007817f) smil2_volume_content_pane_g6

0xd03c,	// (0x00078188) smil2_volume_content_pane_g7

0xd045,	// (0x00078191) smil2_volume_content_pane_g8

0xd04e,	// (0x0007819a) smil2_volume_content_pane_g9

0xd057,	// (0x000781a3) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0007a838) smil2_volume_content_pane_g

0x0c98,	// (0x0006bde4) cale_week_day_heading_pane_t1_ParamLimits

0x0ce2,	// (0x0006be2e) cale_week_day_heading_pane_t2_ParamLimits

0x0d31,	// (0x0006be7d) cale_week_day_heading_pane_t3_ParamLimits

0x0d80,	// (0x0006becc) cale_week_day_heading_pane_t4_ParamLimits

0x0dcf,	// (0x0006bf1b) cale_week_day_heading_pane_t5_ParamLimits

0x0e26,	// (0x0006bf72) cale_week_day_heading_pane_t6_ParamLimits

0x0e7d,	// (0x0006bfc9) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0007a324) cale_week_day_heading_pane_t_ParamLimits

0xae10,	// (0x00075f5c) bg_cale_side_pane_ParamLimits

0x0ec7,	// (0x0006c013) cale_week_time_pane_t1_ParamLimits

0x0ee1,	// (0x0006c02d) cale_week_time_pane_t2_ParamLimits

0x0efb,	// (0x0006c047) cale_week_time_pane_t3_ParamLimits

0x0f15,	// (0x0006c061) cale_week_time_pane_t4_ParamLimits

0x0f2f,	// (0x0006c07b) cale_week_time_pane_t5_ParamLimits

0x0f49,	// (0x0006c095) cale_week_time_pane_t6_ParamLimits

0x0f63,	// (0x0006c0af) cale_week_time_pane_t7_ParamLimits

0x0f83,	// (0x0006c0cf) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0007a333) cale_week_time_pane_t_ParamLimits

0x0fa3,	// (0x0006c0ef) cell_cale_week_pane_g2_ParamLimits

0xae10,	// (0x00075f5c) bg_cale_side_pane_cp01_ParamLimits

0x226c,	// (0x0006d3b8) cale_month_week_pane_t1_ParamLimits

0x2285,	// (0x0006d3d1) cale_month_week_pane_t2_ParamLimits

0x229e,	// (0x0006d3ea) cale_month_week_pane_t3_ParamLimits

0x22b7,	// (0x0006d403) cale_month_week_pane_t4_ParamLimits

0x22d0,	// (0x0006d41c) cale_month_week_pane_t5_ParamLimits

0x22e9,	// (0x0006d435) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0007a40c) cale_month_week_pane_t_ParamLimits

0x959b,	// (0x000746e7) cell_cale_month_pane_g1_ParamLimits

0x942d,	// (0x00074579) main_cale_event_viewer_pane

0x93a7,	// (0x000744f3) listscroll_cale_event_viewer_pane

0xd060,	// (0x000781ac) list_cale_ev_pane

0xd068,	// (0x000781b4) scroll_pane_cp023

0xd074,	// (0x000781c0) field_cale_ev_pane_ParamLimits

0xd074,	// (0x000781c0) field_cale_ev_pane

0xd090,	// (0x000781dc) field_cale_ev_content_pane_ParamLimits

0xd090,	// (0x000781dc) field_cale_ev_content_pane

0xd09c,	// (0x000781e8) field_cale_ev_pane_g1_ParamLimits

0xd09c,	// (0x000781e8) field_cale_ev_pane_g1

0xd0a8,	// (0x000781f4) field_cale_ev_pane_g2_ParamLimits

0xd0a8,	// (0x000781f4) field_cale_ev_pane_g2

0xd0c0,	// (0x0007820c) field_cale_ev_pane_g3_ParamLimits

0xd0c0,	// (0x0007820c) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0007a84d) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0007a84d) field_cale_ev_pane_g

0xd0d8,	// (0x00078224) field_cale_ev_pane_t1_ParamLimits

0xd0d8,	// (0x00078224) field_cale_ev_pane_t1

0xd0ef,	// (0x0007823b) field_cale_ev_content_pane_t1_ParamLimits

0xd0ef,	// (0x0007823b) field_cale_ev_content_pane_t1

0x2f0e,	// (0x0006e05a) bg_button_pane_cp01

0x09db,	// (0x0006bb27) listscroll_cale_week_pane_ParamLimits

0xadba,	// (0x00075f06) popup_toolbar_window_cp01

0xade1,	// (0x00075f2d) listscroll_cale_week_pane_t1_ParamLimits

0x09db,	// (0x0006bb27) listscroll_cale_day_pane_ParamLimits

0xadba,	// (0x00075f06) popup_toolbar_window_cp02

0xb24d,	// (0x00076399) listscroll_cale_day_pane_t1_ParamLimits

0x3874,	// (0x0006e9c0) main_cale_month_pane_ParamLimits

0x975c,	// (0x000748a8) popup_toolbar_window_cp03_ParamLimits

0x975c,	// (0x000748a8) popup_toolbar_window_cp03

0x316f,	// (0x0006e2bb) main_image_pane_g2_ParamLimits

0x316f,	// (0x0006e2bb) main_image_pane_g2

0x3180,	// (0x0006e2cc) main_image_pane_g3_ParamLimits

0x3180,	// (0x0006e2cc) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0007a63e) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0007a63e) main_image_pane_g

0xba33,	// (0x00076b7f) main_image_pane_t1_ParamLimits

0x3191,	// (0x0006e2dd) main_image_pane_t2_ParamLimits

0x3191,	// (0x0006e2dd) main_image_pane_t2

0x31a3,	// (0x0006e2ef) main_image_pane_t3_ParamLimits

0x31a3,	// (0x0006e2ef) main_image_pane_t3

0x31cb,	// (0x0006e317) main_image_pane_t4_ParamLimits

0x31cb,	// (0x0006e317) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0007a645) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0007a645) main_image_pane_t

0x31eb,	// (0x0006e337) popup_image_details_window_cp01

0x31f5,	// (0x0006e341) popup_toobar_trans_pane_cp01_ParamLimits

0x31f5,	// (0x0006e341) popup_toobar_trans_pane_cp01

0x3985,	// (0x0006ead1) popup_image_details_window_ParamLimits

0x3985,	// (0x0006ead1) popup_image_details_window

0x972f,	// (0x0007487b) popup_image_focus_window

0x3d8c,	// (0x0006eed8) camera2_autofocus_pane_ParamLimits

0x3d8c,	// (0x0006eed8) camera2_autofocus_pane

0x93a7,	// (0x000744f3) bg_popup_sub_pane_cp06

0xd10c,	// (0x00078258) popup_image_focus_window_g1

0xd114,	// (0x00078260) popup_image_focus_window_g2

0xd11c,	// (0x00078268) popup_image_focus_window_g3

0xd124,	// (0x00078270) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0007a854) popup_image_focus_window_g

0xd12c,	// (0x00078278) popup_image_focus_window_t1

0xd13a,	// (0x00078286) popup_image_focus_window_t2

0xd14a,	// (0x00078296) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0007a85d) popup_image_focus_window_t

0xd158,	// (0x000782a4) camera2_autofocus_pane_g1

0xb07c,	// (0x000761c8) bg_tb_trans_pane_cp01

0xd166,	// (0x000782b2) popup_image_details_window_g1

0xd179,	// (0x000782c5) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0007a86f) popup_image_details_window_g

0xd1a2,	// (0x000782ee) popup_image_details_window_t1

0xd1b4,	// (0x00078300) popup_image_details_window_t2

0xd1cd,	// (0x00078319) popup_image_details_window_t3

0xd1e1,	// (0x0007832d) popup_image_details_window_t4

0xd1fc,	// (0x00078348) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0007a876) popup_image_details_window_t

0xac7f,	// (0x00075dcb) bg_calc_paper_pane_ParamLimits

0x942d,	// (0x00074579) grid_highlight_pane_cp013

0x94d7,	// (0x00074623) list_calc_pane_ParamLimits

0x94e9,	// (0x00074635) scroll_pane_cp024

0xac93,	// (0x00075ddf) bg_calc_display_pane_ParamLimits

0x0829,	// (0x0006b975) calc_display_pane_t1_ParamLimits

0x083b,	// (0x0006b987) calc_display_pane_t2_ParamLimits

0x94f1,	// (0x0007463d) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0007a2a6) calc_display_pane_t_ParamLimits

0x0900,	// (0x0006ba4c) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0007a2c3) cell_calc_pane_g

0x0909,	// (0x0006ba55) cell_calc_pane_t1

0xacf2,	// (0x00075e3e) grid_highlight_pane_cp02_ParamLimits

0xad08,	// (0x00075e54) toolbar_button_pane_cp01_ParamLimits

0xad08,	// (0x00075e54) toolbar_button_pane_cp01

0xba8d,	// (0x00076bd9) temp_image_control_pane_ParamLimits

0xba8d,	// (0x00076bd9) temp_image_control_pane

0x941f,	// (0x0007456b) main_mp3_pane

0xd216,	// (0x00078362) temp_image_control_pane_g1_ParamLimits

0xd216,	// (0x00078362) temp_image_control_pane_g1

0xd224,	// (0x00078370) temp_image_control_pane_g2_ParamLimits

0xd224,	// (0x00078370) temp_image_control_pane_g2

0xd236,	// (0x00078382) temp_image_control_pane_g3_ParamLimits

0xd236,	// (0x00078382) temp_image_control_pane_g3

0x45e2,	// (0x0006f72e) temp_image_control_pane_g4_ParamLimits

0x45e2,	// (0x0006f72e) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0007a881) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0007a881) temp_image_control_pane_g

0xd216,	// (0x00078362) main_mp3_pane_g1

0x45f5,	// (0x0006f741) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0007a88a) main_mp3_pane_g

0xd279,	// (0x000783c5) main_mp3_pane_t1

0xae6c,	// (0x00075fb8) main_camera_pane_g8_ParamLimits

0xae6c,	// (0x00075fb8) main_camera_pane_g8

0x12c8,	// (0x0006c414) main_video_pane_g7_ParamLimits

0x12c8,	// (0x0006c414) main_video_pane_g7

0x97b1,	// (0x000748fd) main_camera2_pane_t7_ParamLimits

0x97b1,	// (0x000748fd) main_camera2_pane_t7

0xafb4,	// (0x00076100) scroll_pane_cp025_ParamLimits

0xafb4,	// (0x00076100) scroll_pane_cp025

0xafc8,	// (0x00076114) scroll_pane_cp026_ParamLimits

0xafc8,	// (0x00076114) scroll_pane_cp026

0xafd7,	// (0x00076123) wml_content_pane_ParamLimits

0x942d,	// (0x00074579) main_touch_calib_pane

0x46cb,	// (0x0006f817) main_touch_calib_pane_g1

0x46dd,	// (0x0006f829) main_touch_calib_pane_g2

0x46ef,	// (0x0006f83b) main_touch_calib_pane_g3

0x4701,	// (0x0006f84d) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0007a8a8) main_touch_calib_pane_g

0x4713,	// (0x0006f85f) main_touch_calib_pane_t1

0x472d,	// (0x0006f879) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0007a8b1) main_touch_calib_pane_t

0xb6ec,	// (0x00076838) mup_progress_pane_cp02

0xb70b,	// (0x00076857) navi_pane_g1

0xb76d,	// (0x000768b9) navi_pane_mp_t3

0x941f,	// (0x0007456b) main_mp3_pane_ParamLimits

0x3b02,	// (0x0006ec4e) navi_pane_ParamLimits

0xd216,	// (0x00078362) main_mp3_pane_g1_ParamLimits

0x45f5,	// (0x0006f741) main_mp3_pane_g2_ParamLimits

0x4603,	// (0x0006f74f) main_mp3_pane_g3_ParamLimits

0x4603,	// (0x0006f74f) main_mp3_pane_g3

0x4611,	// (0x0006f75d) main_mp3_pane_g4_ParamLimits

0x4611,	// (0x0006f75d) main_mp3_pane_g4

0xd246,	// (0x00078392) main_mp3_pane_g5_ParamLimits

0xd246,	// (0x00078392) main_mp3_pane_g5

0xd254,	// (0x000783a0) main_mp3_pane_g6_ParamLimits

0xd254,	// (0x000783a0) main_mp3_pane_g6

0xd261,	// (0x000783ad) main_mp3_pane_g7_ParamLimits

0xd261,	// (0x000783ad) main_mp3_pane_g7

0xd26d,	// (0x000783b9) main_mp3_pane_g8_ParamLimits

0xd26d,	// (0x000783b9) main_mp3_pane_g8

0xf73e,	// (0x0007a88a) main_mp3_pane_g_ParamLimits

0x461f,	// (0x0006f76b) main_mp3_pane_t2

0x462d,	// (0x0006f779) main_mp3_pane_t3

0xd287,	// (0x000783d3) main_mp3_pane_t4

0xd295,	// (0x000783e1) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0007a89b) main_mp3_pane_t

0xd2a3,	// (0x000783ef) mup_progress_pane_cp01

0x93d5,	// (0x00074521) aid_zoom_text_secondary2

0xd060,	// (0x000781ac) list_cale_ev2_pane

0xd068,	// (0x000781b4) scroll_pane_cp023_ParamLimits

0x4783,	// (0x0006f8cf) field_cale_ev2_pane_ParamLimits

0x4783,	// (0x0006f8cf) field_cale_ev2_pane

0x9828,	// (0x00074974) field_cale_ev2_pane_g1_ParamLimits

0x9828,	// (0x00074974) field_cale_ev2_pane_g1

0x9834,	// (0x00074980) field_cale_ev2_pane_g2_ParamLimits

0x9834,	// (0x00074980) field_cale_ev2_pane_g2

0x984c,	// (0x00074998) field_cale_ev2_pane_g3_ParamLimits

0x984c,	// (0x00074998) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0007a8bc) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0007a8bc) field_cale_ev2_pane_g

0x9870,	// (0x000749bc) field_cale_ev2_pane_t1_ParamLimits

0x9870,	// (0x000749bc) field_cale_ev2_pane_t1

0x9887,	// (0x000749d3) field_cale_ev2_pane_t2_ParamLimits

0x9887,	// (0x000749d3) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0007a8c5) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0007a8c5) field_cale_ev2_pane_t

0x3022,	// (0x0006e16e) main_postcard_pane_g5_ParamLimits

0x3022,	// (0x0006e16e) main_postcard_pane_g5

0x3038,	// (0x0006e184) main_postcard_pane_g6_ParamLimits

0x3038,	// (0x0006e184) main_postcard_pane_g6

0x1082,	// (0x0006c1ce) camera2_autofocus_pane_cp_ParamLimits

0x1082,	// (0x0006c1ce) camera2_autofocus_pane_cp

0x941f,	// (0x0007456b) main_mup3_pane

0x47c5,	// (0x0006f911) main_mup3_pane_g1_ParamLimits

0x47c5,	// (0x0006f911) main_mup3_pane_g1

0x47e7,	// (0x0006f933) main_mup3_pane_g2_ParamLimits

0x47e7,	// (0x0006f933) main_mup3_pane_g2

0x4869,	// (0x0006f9b5) main_mup3_pane_g3_ParamLimits

0x4869,	// (0x0006f9b5) main_mup3_pane_g3

0x48af,	// (0x0006f9fb) main_mup3_pane_g4_ParamLimits

0x48af,	// (0x0006f9fb) main_mup3_pane_g4

0x48f5,	// (0x0006fa41) main_mup3_pane_g5_ParamLimits

0x48f5,	// (0x0006fa41) main_mup3_pane_g5

0x493d,	// (0x0006fa89) main_mup3_pane_g6_ParamLimits

0x493d,	// (0x0006fa89) main_mup3_pane_g6

0xd2ab,	// (0x000783f7) main_mup3_pane_g7_ParamLimits

0xd2ab,	// (0x000783f7) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0007a8d5) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0007a8d5) main_mup3_pane_g

0x49bb,	// (0x0006fb07) main_mup3_pane_t1_ParamLimits

0x49bb,	// (0x0006fb07) main_mup3_pane_t1

0x4a2f,	// (0x0006fb7b) main_mup3_pane_t2_ParamLimits

0x4a2f,	// (0x0006fb7b) main_mup3_pane_t2

0x4b03,	// (0x0006fc4f) main_mup3_pane_t4_ParamLimits

0x4b03,	// (0x0006fc4f) main_mup3_pane_t4

0x4b59,	// (0x0006fca5) main_mup3_pane_t5_ParamLimits

0x4b59,	// (0x0006fca5) main_mup3_pane_t5

0x4c15,	// (0x0006fd61) main_mup3_pane_t6_ParamLimits

0x4c15,	// (0x0006fd61) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0007a8e6) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0007a8e6) main_mup3_pane_t

0x4ccd,	// (0x0006fe19) mup3_progress_pane_ParamLimits

0x4ccd,	// (0x0006fe19) mup3_progress_pane

0x4d59,	// (0x0006fea5) popup_mup3_control_window_ParamLimits

0x4d59,	// (0x0006fea5) popup_mup3_control_window

0xd2b9,	// (0x00078405) popup_mup3_text_window

0x4d8b,	// (0x0006fed7) mup3_progress_pane_t1

0x4daa,	// (0x0006fef6) mup3_progress_pane_t2

0xd2c1,	// (0x0007840d) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0007a8f3) mup3_progress_pane_t

0xd2de,	// (0x0007842a) mup_progress_pane_cp03

0x93a7,	// (0x000744f3) bg_tb_trans_pane_cp04

0x4dc9,	// (0x0006ff15) mup3_volume_pane

0x4dd1,	// (0x0006ff1d) popup_mup3_control_window_g1

0x4dda,	// (0x0006ff26) mup3_volume_pane_g1

0x4de3,	// (0x0006ff2f) mup3_volume_pane_g2

0x4dec,	// (0x0006ff38) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0007a8fa) mup3_volume_pane_g

0x93a7,	// (0x000744f3) bg_tb_trans_pane_cp03

0xd2ee,	// (0x0007843a) popup_mup3_text_window_g1

0xd2f6,	// (0x00078442) popup_mup3_text_window_t1

0xacdb,	// (0x00075e27) list_calc_item_pane_g1_ParamLimits

0xcd37,	// (0x00077e83) mup_volume_pane_cp_g1

0x4747,	// (0x0006f893) main_touch_calib_pane_t3

0x475b,	// (0x0006f8a7) main_touch_calib_pane_t4

0x476f,	// (0x0006f8bb) main_touch_calib_pane_t5

0x93b1,	// (0x000744fd) aid_cell_size_toolbar2

0x93b9,	// (0x00074505) aid_popup3_width_pane

0x93c5,	// (0x00074511) aid_zoom_text_msg_primary

0x1059,	// (0x0006c1a5) vorec_t7

0xac9f,	// (0x00075deb) bg_calc_paper_pane_g1_ParamLimits

0xacab,	// (0x00075df7) bg_calc_paper_pane_g2_ParamLimits

0xacb7,	// (0x00075e03) bg_calc_paper_pane_g3_ParamLimits

0xacc3,	// (0x00075e0f) bg_calc_paper_pane_g4_ParamLimits

0xaccf,	// (0x00075e1b) bg_calc_paper_pane_g5_ParamLimits

0x0884,	// (0x0006b9d0) bg_calc_paper_pane_g6_ParamLimits

0x0895,	// (0x0006b9e1) bg_calc_paper_pane_g7_ParamLimits

0x08a6,	// (0x0006b9f2) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0007a2ad) bg_calc_paper_pane_g_ParamLimits

0x08b9,	// (0x0006ba05) calc_bg_paper_pane_g9_ParamLimits

0x11da,	// (0x0006c326) image_qvga_pane_ParamLimits

0x11da,	// (0x0006c326) image_qvga_pane

0xabaf,	// (0x00075cfb) bg_popup_sub_pane_cp04_ParamLimits

0xb9af,	// (0x00076afb) popup_mup_playback_window_g1_ParamLimits

0xb9bb,	// (0x00076b07) popup_mup_playback_window_t1_ParamLimits

0xb9d0,	// (0x00076b1c) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0007a639) popup_mup_playback_window_t_ParamLimits

0x4283,	// (0x0006f3cf) main_mup2_pane_g3_ParamLimits

0x4283,	// (0x0006f3cf) main_mup2_pane_g3

0x15b1,	// (0x0006c6fd) popup_toolbar_window_cp04

0xbdda,	// (0x00076f26) popup_call2_audio_second_window_g3_ParamLimits

0xbdda,	// (0x00076f26) popup_call2_audio_second_window_g3

0xc1e4,	// (0x00077330) popup_call2_audio_first_window_g4_ParamLimits

0xc1e4,	// (0x00077330) popup_call2_audio_first_window_g4

0xc86f,	// (0x000779bb) popup_call2_audio_in_window_g4_ParamLimits

0xc86f,	// (0x000779bb) popup_call2_audio_in_window_g4

0x3151,	// (0x0006e29d) aid_area_sk_bg_cut_ParamLimits

0x3151,	// (0x0006e29d) aid_area_sk_bg_cut

0xb9e5,	// (0x00076b31) aid_area_sk_bg_cut_2_ParamLimits

0xb9e5,	// (0x00076b31) aid_area_sk_bg_cut_2

0x4588,	// (0x0006f6d4) aid_placing_details_win

0x4590,	// (0x0006f6dc) aid_placing_details_win_2

0xd158,	// (0x000782a4) camera2_autofocus_pane_g1_ParamLimits

0x0486,	// (0x0006b5d2) popup_fixed_preview_cale_window_ParamLimits

0x0486,	// (0x0006b5d2) popup_fixed_preview_cale_window

0xb7bc,	// (0x00076908) navi_slider_pane_g3

0xb7c5,	// (0x00076911) navi_slider_pane_g4

0xb7ce,	// (0x0007691a) navi_slider_pane_g5

0xb7bc,	// (0x00076908) navi_slider_pane_g6

0x9645,	// (0x00074791) navi_slider_pane_g7

0xb8ef,	// (0x00076a3b) mup_scale_pane_g3

0xb8f8,	// (0x00076a44) mup_scale_pane_g4

0xb901,	// (0x00076a4d) mup_scale_pane_g5

0x2e8d,	// (0x0006dfd9) mup_scale_pane_g6

0x2e96,	// (0x0006dfe2) mup_scale_pane_g7

0xb7bc,	// (0x00076908) cams2_slider_pane_g3

0xcdb9,	// (0x00077f05) cams2_slider_pane_g4

0x9817,	// (0x00074963) cams2_slider_pane_g5

0xb7bc,	// (0x00076908) cams2_slider_pane_g6

0x981f,	// (0x0007496b) cams2_slider_pane_g7

0xcfe6,	// (0x00078132) camera2_autofocus_pane_cp_g1

0xcbd0,	// (0x00077d1c) bg_popup_preview_window_pane_cp02_ParamLimits

0xcbd0,	// (0x00077d1c) bg_popup_preview_window_pane_cp02

0xd304,	// (0x00078450) list_fp_cale_pane_ParamLimits

0xd304,	// (0x00078450) list_fp_cale_pane

0xd310,	// (0x0007845c) popup_fixed_preview_cale_window_t1_ParamLimits

0xd310,	// (0x0007845c) popup_fixed_preview_cale_window_t1

0x4df5,	// (0x0006ff41) popup_fixed_preview_cale_window_t2_ParamLimits

0x4df5,	// (0x0006ff41) popup_fixed_preview_cale_window_t2

0x4e0a,	// (0x0006ff56) popup_fixed_preview_cale_window_t3_ParamLimits

0x4e0a,	// (0x0006ff56) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0007a901) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0007a901) popup_fixed_preview_cale_window_t

0x4e1f,	// (0x0006ff6b) list_single_fp_cale_pane_ParamLimits

0x4e1f,	// (0x0006ff6b) list_single_fp_cale_pane

0xd32e,	// (0x0007847a) list_single_fp_cale_pane_g1_ParamLimits

0xd32e,	// (0x0007847a) list_single_fp_cale_pane_g1

0xd33a,	// (0x00078486) list_single_fp_cale_pane_g2_ParamLimits

0xd33a,	// (0x00078486) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0007a908) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0007a908) list_single_fp_cale_pane_g

0xd353,	// (0x0007849f) list_single_fp_cale_pane_t1_ParamLimits

0xd353,	// (0x0007849f) list_single_fp_cale_pane_t1

0xd365,	// (0x000784b1) list_single_fp_cale_pane_t2_ParamLimits

0xd365,	// (0x000784b1) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0007a90f) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0007a90f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x942d,	// (0x00074579) main_dialer_pane

0x4e36,	// (0x0006ff82) aid_cell_size_keypad

0x4e40,	// (0x0006ff8c) dialer_ne_pane

0x4e48,	// (0x0006ff94) grid_dialer_command_1_pane

0x4e50,	// (0x0006ff9c) grid_dialer_command_2_pane

0x4e58,	// (0x0006ffa4) grid_dialer_keypad_pane

0x4e6a,	// (0x0006ffb6) bg_popup_call_pane_cp06_ParamLimits

0x4e6a,	// (0x0006ffb6) bg_popup_call_pane_cp06

0x4e76,	// (0x0006ffc2) dialer_ne_clear_pane_ParamLimits

0x4e76,	// (0x0006ffc2) dialer_ne_clear_pane

0xd398,	// (0x000784e4) dialer_ne_pane_g1

0xd3a0,	// (0x000784ec) dialer_ne_pane_t1_ParamLimits

0xd3a0,	// (0x000784ec) dialer_ne_pane_t1

0x4e82,	// (0x0006ffce) dialer_ne_pane_t2_ParamLimits

0x4e82,	// (0x0006ffce) dialer_ne_pane_t2

0x4eac,	// (0x0006fff8) dialer_ne_pane_t3_ParamLimits

0x4eac,	// (0x0006fff8) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0007a914) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0007a914) dialer_ne_pane_t

0x4edc,	// (0x00070028) dialer_ne_pane_t3_copy1_ParamLimits

0x4edc,	// (0x00070028) dialer_ne_pane_t3_copy1

0x4f0b,	// (0x00070057) cell_dialer_keypad_pane_ParamLimits

0x4f0b,	// (0x00070057) cell_dialer_keypad_pane

0x4f22,	// (0x0007006e) cell_dialer_command_1_pane_ParamLimits

0x4f22,	// (0x0007006e) cell_dialer_command_1_pane

0x4f38,	// (0x00070084) cell_dialer_command_2_pane_ParamLimits

0x4f38,	// (0x00070084) cell_dialer_command_2_pane

0xd3b2,	// (0x000784fe) bg_button_pane_cp02_ParamLimits

0xd3b2,	// (0x000784fe) bg_button_pane_cp02

0x4f47,	// (0x00070093) cell_dialer_keypad_pane_g1_ParamLimits

0x4f47,	// (0x00070093) cell_dialer_keypad_pane_g1

0xd3b2,	// (0x000784fe) bg_button_pane_cp03_ParamLimits

0xd3b2,	// (0x000784fe) bg_button_pane_cp03

0x4f5c,	// (0x000700a8) cell_dialer_command_1_pane_g1_ParamLimits

0x4f5c,	// (0x000700a8) cell_dialer_command_1_pane_g1

0xd3be,	// (0x0007850a) bg_button_pane_cp04

0x4f6f,	// (0x000700bb) cell_dialer_command_2_pane_g1

0xb7ab,	// (0x000768f7) bg_button_pane_cp06

0xd3c6,	// (0x00078512) dialer_ne_clear_pane_g1

0x29bf,	// (0x0006db0b) navi_pane_g2

0x29ed,	// (0x0006db39) navi_pane_g3

0x0002,

0xf3f0,	// (0x0007a53c) navi_pane_g

0x2a16,	// (0x0006db62) navi_pane_mv_g2

0x2a3d,	// (0x0006db89) navi_pane_mv_g5

0x2a45,	// (0x0006db91) navi_pane_mv_t1

0xac93,	// (0x00075ddf) main_clock2_pane

0x4fbc,	// (0x00070108) main_clock2_list_pane_ParamLimits

0x4fbc,	// (0x00070108) main_clock2_list_pane

0x4ff6,	// (0x00070142) main_clock2_pane_t1_ParamLimits

0x4ff6,	// (0x00070142) main_clock2_pane_t1

0x5034,	// (0x00070180) main_clock2_pane_t2_ParamLimits

0x5034,	// (0x00070180) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0007a91b) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0007a91b) main_clock2_pane_t

0x50d2,	// (0x0007021e) popup_clock_analogue_window_cp03_ParamLimits

0x50d2,	// (0x0007021e) popup_clock_analogue_window_cp03

0x50f7,	// (0x00070243) popup_clock_digital_window_cp02_ParamLimits

0x50f7,	// (0x00070243) popup_clock_digital_window_cp02

0x516a,	// (0x000702b6) main_clock2_list_single_pane_ParamLimits

0x516a,	// (0x000702b6) main_clock2_list_single_pane

0xb7ab,	// (0x000768f7) list_highlight_pane_cp05

0xd3e4,	// (0x00078530) main_clock2_list_single_pane_t1

0x15b1,	// (0x0006c6fd) popup_toolbar_window_cp04_ParamLimits

0x45b2,	// (0x0006f6fe) camera2_autofocus_pane_g2_ParamLimits

0x45b2,	// (0x0006f6fe) camera2_autofocus_pane_g2

0x45be,	// (0x0006f70a) camera2_autofocus_pane_g3_ParamLimits

0x45be,	// (0x0006f70a) camera2_autofocus_pane_g3

0x45ca,	// (0x0006f716) camera2_autofocus_pane_g4_ParamLimits

0x45ca,	// (0x0006f716) camera2_autofocus_pane_g4

0x45d6,	// (0x0006f722) camera2_autofocus_pane_g5_ParamLimits

0x45d6,	// (0x0006f722) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0007a864) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0007a864) camera2_autofocus_pane_g

0x47a5,	// (0x0006f8f1) camera2_autofocus_pane_cp_g2

0x47ad,	// (0x0006f8f9) camera2_autofocus_pane_cp_g3

0x47b5,	// (0x0006f901) camera2_autofocus_pane_cp_g4

0x47bd,	// (0x0006f909) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0007a8ca) camera2_autofocus_pane_cp_g

0x4e62,	// (0x0006ffae) popup_dialer_spcha_window

0x93a7,	// (0x000744f3) bg_popup_sub_pane_cp07

0xd3f2,	// (0x0007853e) list_spcha_pane

0xd3fa,	// (0x00078546) list_single_spcha_pane_ParamLimits

0xd3fa,	// (0x00078546) list_single_spcha_pane

0x93a7,	// (0x000744f3) list_highlight_pane_cp06

0xd40b,	// (0x00078557) list_single_spcha_pane_t1

0xc619,	// (0x00077765) popup_call2_audio_out_window_g4_ParamLimits

0xc619,	// (0x00077765) popup_call2_audio_out_window_g4

0x942d,	// (0x00074579) main_imed2_pane

0x9737,	// (0x00074883) popup_imed_adjust2_window

0x399d,	// (0x0006eae9) popup_imed_trans_window_ParamLimits

0x399d,	// (0x0006eae9) popup_imed_trans_window

0xce22,	// (0x00077f6e) popup_blid_sat_info2_window_t1

0xce30,	// (0x00077f7c) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0007a7f9) popup_blid_sat_info2_window_t

0x5214,	// (0x00070360) aid_size_cell_colour_35

0x5234,	// (0x00070380) aid_size_cell_colour_112

0x5254,	// (0x000703a0) aid_size_cell_effect

0xcbdc,	// (0x00077d28) bg_tb_trans_pane_cp02

0xb2d2,	// (0x0007641e) heading_imed_pane

0x5274,	// (0x000703c0) listscroll_imed_pane

0xd419,	// (0x00078565) heading_imed_pane_g1

0xd421,	// (0x0007856d) heading_imed_pane_t1

0xd42f,	// (0x0007857b) grid_imed_colour_35_pane_ParamLimits

0xd42f,	// (0x0007857b) grid_imed_colour_35_pane

0x5280,	// (0x000703cc) grid_imed_effect_pane

0xd447,	// (0x00078593) list_imed_aspect_pane

0x5296,	// (0x000703e2) scroll_pane_cp027_ParamLimits

0x5296,	// (0x000703e2) scroll_pane_cp027

0x52a7,	// (0x000703f3) cell_imed_effect_pane_ParamLimits

0x52a7,	// (0x000703f3) cell_imed_effect_pane

0xd44f,	// (0x0007859b) cell_imed_colour_pane_ParamLimits

0xd44f,	// (0x0007859b) cell_imed_colour_pane

0xd491,	// (0x000785dd) cell_imed_colour_pane_g1_ParamLimits

0xd491,	// (0x000785dd) cell_imed_colour_pane_g1

0xd4a2,	// (0x000785ee) hgihlgiht_grid_pane_cp016_ParamLimits

0xd4a2,	// (0x000785ee) hgihlgiht_grid_pane_cp016

0x52ce,	// (0x0007041a) cell_imed_effect_pane_g1

0x52d6,	// (0x00070422) grid_highlight_pane_cp017

0xd4b3,	// (0x000785ff) list_imed_single_pane_ParamLimits

0xd4b3,	// (0x000785ff) list_imed_single_pane

0x93a7,	// (0x000744f3) list_highlight_pane_cp07

0xd4c9,	// (0x00078615) list_imed_aspect_pane_comp1_t1

0xcbdc,	// (0x00077d28) bg_tb_trans_pane_cp05

0xd4eb,	// (0x00078637) popup_imed_adjust2_window_g1

0xd512,	// (0x0007865e) popup_imed_adjust2_window_t1

0xd52a,	// (0x00078676) slider_imed_adjust_pane

0xd53e,	// (0x0007868a) slider_imed_adjust_pane_g1

0xd54e,	// (0x0007869a) slider_imed_adjust_pane_g2

0xd55e,	// (0x000786aa) slider_imed_adjust_pane_g3

0xd56f,	// (0x000786bb) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0007a938) slider_imed_adjust_pane_g

0x52df,	// (0x0007042b) aid_size_cell_clipart2

0x52eb,	// (0x00070437) grid_imed_clipart_pane

0xd580,	// (0x000786cc) scroll_pane_cp031

0x52f5,	// (0x00070441) cell_imed_clipart_pane_ParamLimits

0x52f5,	// (0x00070441) cell_imed_clipart_pane

0x5319,	// (0x00070465) cell_imed_clipart_pane_g1

0x93a7,	// (0x000744f3) grid_highlight_pane_cp014

0x4fd1,	// (0x0007011d) main_clock2_pane_g1_ParamLimits

0x4fd1,	// (0x0007011d) main_clock2_pane_g1

0x5115,	// (0x00070261) aid_call2_pane_cp10

0x5127,	// (0x00070273) aid_call_pane_cp10

0xb6e0,	// (0x0007682c) popup_clock_analogue_window_cp10_g1

0xb6e0,	// (0x0007682c) popup_clock_analogue_window_cp10_g2

0x5139,	// (0x00070285) popup_clock_analogue_window_cp10_g3

0x5139,	// (0x00070285) popup_clock_analogue_window_cp10_g4

0xb6e0,	// (0x0007682c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0007a926) popup_clock_analogue_window_cp10_g

0x514b,	// (0x00070297) popup_clock_analogue_window_cp10_t1

0x517c,	// (0x000702c8) clock_digital_number_pane_cp10_ParamLimits

0x517c,	// (0x000702c8) clock_digital_number_pane_cp10

0x5194,	// (0x000702e0) clock_digital_number_pane_cp11_ParamLimits

0x5194,	// (0x000702e0) clock_digital_number_pane_cp11

0x51ac,	// (0x000702f8) clock_digital_number_pane_cp12_ParamLimits

0x51ac,	// (0x000702f8) clock_digital_number_pane_cp12

0x51c4,	// (0x00070310) clock_digital_number_pane_cp13_ParamLimits

0x51c4,	// (0x00070310) clock_digital_number_pane_cp13

0x51dc,	// (0x00070328) clock_digital_separator_pane_cp10_ParamLimits

0x51dc,	// (0x00070328) clock_digital_separator_pane_cp10

0x51f4,	// (0x00070340) popup_clock_digital_window_cp02_t1_ParamLimits

0x51f4,	// (0x00070340) popup_clock_digital_window_cp02_t1

0xaba7,	// (0x00075cf3) clock_digital_number_pane_cp10_g1

0xaba7,	// (0x00075cf3) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0007a941) clock_digital_number_pane_cp10_g

0xaba7,	// (0x00075cf3) clock_digital_separator_pane_cp10_g1

0xaba7,	// (0x00075cf3) clock_digital_separator_pane_g2_cp10

0xb77b,	// (0x000768c7) navi_pane_vded_g4

0xb784,	// (0x000768d0) navi_pane_vded_g5

0xb78d,	// (0x000768d9) navi_pane_vded_t1

0x942d,	// (0x00074579) main_vded_pane

0x5322,	// (0x0007046e) main_vded_pane_g1

0x532c,	// (0x00070478) main_vded_pane_g2

0x5336,	// (0x00070482) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0007a946) main_vded_pane_g

0x5340,	// (0x0007048c) main_vded_pane_t1

0x534e,	// (0x0007049a) main_vded_pane_t2

0x0001,

0xf801,	// (0x0007a94d) main_vded_pane_t

0x535c,	// (0x000704a8) vded_slider_pane

0x5366,	// (0x000704b2) vded_video_pane

0xd588,	// (0x000786d4) vded_video_pane_g1

0x5370,	// (0x000704bc) vded_video_pane_g2

0xcfe6,	// (0x00078132) vded_video_pane_g3

0x0002,

0xf806,	// (0x0007a952) vded_video_pane_g

0xd592,	// (0x000786de) vded_slider_pane_g1

0xd59b,	// (0x000786e7) vded_slider_pane_g2

0xd5a4,	// (0x000786f0) vded_slider_pane_g3

0xd5ad,	// (0x000786f9) vded_slider_pane_g4

0xd5b6,	// (0x00078702) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0007a959) vded_slider_pane_g

0x4d41,	// (0x0006fe8d) mup3_rocker_pane_ParamLimits

0x4d41,	// (0x0006fe8d) mup3_rocker_pane

0x5379,	// (0x000704c5) mup3_control_keys_pane_g1

0x5381,	// (0x000704cd) mup3_control_keys_pane_g2

0x5389,	// (0x000704d5) mup3_control_keys_pane_g3

0x5391,	// (0x000704dd) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0007a964) mup3_control_keys_pane_g

0x04bd,	// (0x0006b609) popup_toolbar2_fixed_window_cp01_ParamLimits

0x04bd,	// (0x0006b609) popup_toolbar2_fixed_window_cp01

0x4d75,	// (0x0006fec1) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4d75,	// (0x0006fec1) popup_toolbar2_fixed_window_cp02

0xbf4c,	// (0x00077098) popup_call2_audio_second_window_t4_ParamLimits

0xbf4c,	// (0x00077098) popup_call2_audio_second_window_t4

0xc486,	// (0x000775d2) popup_call2_audio_first_window_t6_ParamLimits

0xc486,	// (0x000775d2) popup_call2_audio_first_window_t6

0xc71c,	// (0x00077868) popup_call2_audio_out_window_t6_ParamLimits

0xc71c,	// (0x00077868) popup_call2_audio_out_window_t6

0x942d,	// (0x00074579) main_vitu_pane

0x53a1,	// (0x000704ed) aid_size_cell_itu_ParamLimits

0x53a1,	// (0x000704ed) aid_size_cell_itu

0xb07c,	// (0x000761c8) bg_popup_window_pane_cp08_ParamLimits

0xb07c,	// (0x000761c8) bg_popup_window_pane_cp08

0x53b7,	// (0x00070503) field_vitu_entry_pane_ParamLimits

0x53b7,	// (0x00070503) field_vitu_entry_pane

0x53ce,	// (0x0007051a) grid_vitu_function_pane_ParamLimits

0x53ce,	// (0x0007051a) grid_vitu_function_pane

0x53e9,	// (0x00070535) grid_vitu_itu_pane_ParamLimits

0x53e9,	// (0x00070535) grid_vitu_itu_pane

0x5407,	// (0x00070553) cell_vitu_itu_pane_ParamLimits

0x5407,	// (0x00070553) cell_vitu_itu_pane

0x542b,	// (0x00070577) cell_vitu_function_pane_ParamLimits

0x542b,	// (0x00070577) cell_vitu_function_pane

0xb07c,	// (0x000761c8) bg_popup_sub_pane_cp08_ParamLimits

0xb07c,	// (0x000761c8) bg_popup_sub_pane_cp08

0x5446,	// (0x00070592) field_vitu_entry_pane_t1_ParamLimits

0x5446,	// (0x00070592) field_vitu_entry_pane_t1

0xd5d7,	// (0x00078723) field_vitu_entry_pane_t2_ParamLimits

0xd5d7,	// (0x00078723) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0007a972) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0007a972) field_vitu_entry_pane_t

0xd5f4,	// (0x00078740) bg_button_pane_cp05_ParamLimits

0xd5f4,	// (0x00078740) bg_button_pane_cp05

0x5465,	// (0x000705b1) cell_vitu_itu_pane_g1

0x547d,	// (0x000705c9) cell_vitu_itu_pane_t1_ParamLimits

0x547d,	// (0x000705c9) cell_vitu_itu_pane_t1

0x548f,	// (0x000705db) cell_vitu_itu_pane_t2_ParamLimits

0x548f,	// (0x000705db) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0007a977) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0007a977) cell_vitu_itu_pane_t

0xd602,	// (0x0007874e) bg_button_pane_cp07

0x54d2,	// (0x0007061e) cell_vitu_function_pane_g1

0x94cf,	// (0x0007461b) main_calc_pane_g1

0x02e4,	// (0x0006b430) aid_visual_content_pane

0x942d,	// (0x00074579) main_vradio_pane

0x54db,	// (0x00070627) main_vradio_pane_g1_ParamLimits

0x54db,	// (0x00070627) main_vradio_pane_g1

0xd60c,	// (0x00078758) main_vradio_pane_g2_ParamLimits

0xd60c,	// (0x00078758) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0007a97e) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0007a97e) main_vradio_pane_g

0x54f4,	// (0x00070640) main_vradio_pane_t1_ParamLimits

0x54f4,	// (0x00070640) main_vradio_pane_t1

0x5509,	// (0x00070655) main_vradio_pane_t2_ParamLimits

0x5509,	// (0x00070655) main_vradio_pane_t2

0xd619,	// (0x00078765) main_vradio_pane_t3_ParamLimits

0xd619,	// (0x00078765) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0007a983) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0007a983) main_vradio_pane_t

0x551e,	// (0x0007066a) vradio_rocker_control_pane_ParamLimits

0x551e,	// (0x0007066a) vradio_rocker_control_pane

0x5530,	// (0x0007067c) vradio_station_info_pane_ParamLimits

0x5530,	// (0x0007067c) vradio_station_info_pane

0xd62d,	// (0x00078779) vradio_frequency_info_pane_ParamLimits

0xd62d,	// (0x00078779) vradio_frequency_info_pane

0xcfe6,	// (0x00078132) vradio_station_info_pane_g1

0xd63c,	// (0x00078788) vradio_station_info_pane_t1_ParamLimits

0xd63c,	// (0x00078788) vradio_station_info_pane_t1

0xd65e,	// (0x000787aa) vradio_station_info_pane_t2_ParamLimits

0xd65e,	// (0x000787aa) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0007a98a) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0007a98a) vradio_station_info_pane_t

0xd670,	// (0x000787bc) vradio_tuning_pane

0xd678,	// (0x000787c4) vradio_rocker_control_pane_g1

0xd680,	// (0x000787cc) vradio_rocker_control_pane_g2

0xd688,	// (0x000787d4) vradio_rocker_control_pane_g3

0xd690,	// (0x000787dc) vradio_rocker_control_pane_g4

0xd698,	// (0x000787e4) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0007a98f) vradio_rocker_control_pane_g

0x5542,	// (0x0007068e) vradio_frequency_info_pane_g1

0xd6a0,	// (0x000787ec) vradio_frequency_info_pane_t1_ParamLimits

0xd6a0,	// (0x000787ec) vradio_frequency_info_pane_t1

0x554c,	// (0x00070698) vradio_tuning_pane_g1

0x5557,	// (0x000706a3) vradio_tuning_pane_t1

0x93dd,	// (0x00074529) area_side_right_pane_ParamLimits

0x93dd,	// (0x00074529) area_side_right_pane

0xcb97,	// (0x00077ce3) status_small_pane_g1

0xcb9f,	// (0x00077ceb) status_small_pane_g2

0xcba8,	// (0x00077cf4) status_small_pane_g3

0xcbb1,	// (0x00077cfd) status_small_pane_g4

0x0003,

0xf603,	// (0x0007a74f) status_small_pane_g

0xcbba,	// (0x00077d06) status_small_pane_t1

0x942d,	// (0x00074579) main_video3_pane

0xd6b4,	// (0x00078800) cams_zoom_vslider_pane

0xd6bc,	// (0x00078808) image3_wide_pane_ParamLimits

0xd6bc,	// (0x00078808) image3_wide_pane

0xd6d6,	// (0x00078822) image3_wide_small_pane

0xd6e2,	// (0x0007882e) main_video3_pane_g1_ParamLimits

0xd6e2,	// (0x0007882e) main_video3_pane_g1

0xd6fe,	// (0x0007884a) main_video3_pane_g2_ParamLimits

0xd6fe,	// (0x0007884a) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0007a99a) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0007a99a) main_video3_pane_g

0xd71a,	// (0x00078866) main_video3_pane_t1_ParamLimits

0xd71a,	// (0x00078866) main_video3_pane_t1

0xd745,	// (0x00078891) main_video3_pane_t2_ParamLimits

0xd745,	// (0x00078891) main_video3_pane_t2

0xd770,	// (0x000788bc) main_video3_pane_t3_ParamLimits

0xd770,	// (0x000788bc) main_video3_pane_t3

0x0002,

0xf853,	// (0x0007a99f) main_video3_pane_t_ParamLimits

0xf853,	// (0x0007a99f) main_video3_pane_t

0xd79d,	// (0x000788e9) cams_zoom_vslider_pane_g1

0xd7ae,	// (0x000788fa) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0007a9a6) cams_zoom_vslider_pane_g

0xd7b6,	// (0x00078902) small_slider_vertical_pane

0xcfe6,	// (0x00078132) small_slider_vertical_pane_g1

0xcfe6,	// (0x00078132) small_slider_vertical_pane_g2

0xd7be,	// (0x0007890a) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0007a9ab) small_slider_vertical_pane_g

0x942d,	// (0x00074579) main_hwr_training_pane

0xd7c7,	// (0x00078913) hwr_training_instruct_pane_ParamLimits

0xd7c7,	// (0x00078913) hwr_training_instruct_pane

0x5566,	// (0x000706b2) hwr_training_navi_pane_ParamLimits

0x5566,	// (0x000706b2) hwr_training_navi_pane

0x5585,	// (0x000706d1) hwr_training_write_pane_ParamLimits

0x5585,	// (0x000706d1) hwr_training_write_pane

0x93a7,	// (0x000744f3) bg_frame_shadow_pane

0xd7fe,	// (0x0007894a) hwr_training_write_pane_g1

0xd806,	// (0x00078952) hwr_training_write_pane_g2

0xd80e,	// (0x0007895a) hwr_training_write_pane_g3

0xd816,	// (0x00078962) hwr_training_write_pane_g4

0xd81e,	// (0x0007896a) hwr_training_write_pane_g5

0xd826,	// (0x00078972) hwr_training_write_pane_g6

0xd82e,	// (0x0007897a) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0007a9b2) hwr_training_write_pane_g

0x989c,	// (0x000749e8) hwr_training_navi_pane_g1_ParamLimits

0x989c,	// (0x000749e8) hwr_training_navi_pane_g1

0x98ae,	// (0x000749fa) hwr_training_navi_pane_g2_ParamLimits

0x98ae,	// (0x000749fa) hwr_training_navi_pane_g2

0x98c0,	// (0x00074a0c) hwr_training_navi_pane_g3_ParamLimits

0x98c0,	// (0x00074a0c) hwr_training_navi_pane_g3

0x98d0,	// (0x00074a1c) hwr_training_navi_pane_g4_ParamLimits

0x98d0,	// (0x00074a1c) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0007a9c1) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0007a9c1) hwr_training_navi_pane_g

0x98dd,	// (0x00074a29) hwr_training_navi_pane_t1

0x55cf,	// (0x0007071b) list_single_hwr_training_instruct_pane_ParamLimits

0x55cf,	// (0x0007071b) list_single_hwr_training_instruct_pane

0xd836,	// (0x00078982) list_single_hwr_training_instruct_pane_t1

0xcf26,	// (0x00078072) bg_frame_shadow_pane_g1

0xd845,	// (0x00078991) bg_frame_shadow_pane_g2

0xd84d,	// (0x00078999) bg_frame_shadow_pane_g3

0xd855,	// (0x000789a1) bg_frame_shadow_pane_g4

0xd85d,	// (0x000789a9) bg_frame_shadow_pane_g5

0xd865,	// (0x000789b1) bg_frame_shadow_pane_g6

0xd86d,	// (0x000789b9) bg_frame_shadow_pane_g7

0xad5e,	// (0x00075eaa) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0007a9cc) bg_frame_shadow_pane_g

0x942d,	// (0x00074579) main_video_tele_dialer_pane

0x55e6,	// (0x00070732) aid_size_cell_video_keypad_ParamLimits

0x55e6,	// (0x00070732) aid_size_cell_video_keypad

0x5600,	// (0x0007074c) grid_video_dialer_keypad_pane_ParamLimits

0x5600,	// (0x0007074c) grid_video_dialer_keypad_pane

0x564e,	// (0x0007079a) video_down_pane_cp_ParamLimits

0x564e,	// (0x0007079a) video_down_pane_cp

0x5680,	// (0x000707cc) cell_video_dialer_keypad_pane_ParamLimits

0x5680,	// (0x000707cc) cell_video_dialer_keypad_pane

0xd875,	// (0x000789c1) bg_button_pane_cp08_ParamLimits

0xd875,	// (0x000789c1) bg_button_pane_cp08

0x56a2,	// (0x000707ee) cell_video_dialer_keypad_pane_g1_ParamLimits

0x56a2,	// (0x000707ee) cell_video_dialer_keypad_pane_g1

0x4d2b,	// (0x0006fe77) mup3_rocker2_pane_ParamLimits

0x4d2b,	// (0x0006fe77) mup3_rocker2_pane

0xcfe6,	// (0x00078132) mup3_rocker2_pane_g1

0x3886,	// (0x0006e9d2) main_dialer2_pane

0x942d,	// (0x00074579) main_mp4_pane

0x98f3,	// (0x00074a3f) main_mp4_pane_g1_ParamLimits

0x98f3,	// (0x00074a3f) main_mp4_pane_g1

0x98f3,	// (0x00074a3f) main_mp4_pane_g2_ParamLimits

0x98f3,	// (0x00074a3f) main_mp4_pane_g2

0x56dd,	// (0x00070829) main_mp4_pane_g3_ParamLimits

0x56dd,	// (0x00070829) main_mp4_pane_g3

0x9901,	// (0x00074a4d) main_mp4_pane_g4_ParamLimits

0x9901,	// (0x00074a4d) main_mp4_pane_g4

0x9929,	// (0x00074a75) main_mp4_pane_g5_ParamLimits

0x9929,	// (0x00074a75) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0007a9ec) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0007a9ec) main_mp4_pane_g

0x9979,	// (0x00074ac5) main_mp4_pane_t1_ParamLimits

0x9979,	// (0x00074ac5) main_mp4_pane_t1

0x99d5,	// (0x00074b21) main_mp4_pane_t2_ParamLimits

0x99d5,	// (0x00074b21) main_mp4_pane_t2

0xd881,	// (0x000789cd) main_mp4_pane_t3_ParamLimits

0xd881,	// (0x000789cd) main_mp4_pane_t3

0x9a27,	// (0x00074b73) main_mp4_pane_t4_ParamLimits

0x9a27,	// (0x00074b73) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0007a9f9) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0007a9f9) main_mp4_pane_t

0x9a6b,	// (0x00074bb7) mp4_progress_pane_ParamLimits

0x9a6b,	// (0x00074bb7) mp4_progress_pane

0x9ab5,	// (0x00074c01) mp4_rocker_pane_ParamLimits

0x9ab5,	// (0x00074c01) mp4_rocker_pane

0xd8a9,	// (0x000789f5) mp4_progress_pane_t1

0xd8c2,	// (0x00078a0e) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0007aa02) mp4_progress_pane_t

0xd8db,	// (0x00078a27) mup_progress_pane_cp04

0xd8e7,	// (0x00078a33) mp4_rocker_pane_g1

0x5719,	// (0x00070865) aid_cell_size_keypad2_ParamLimits

0x5719,	// (0x00070865) aid_cell_size_keypad2

0x572f,	// (0x0007087b) dialer2_ne_pane_ParamLimits

0x572f,	// (0x0007087b) dialer2_ne_pane

0x5749,	// (0x00070895) grid_dialer2_keypad_pane_ParamLimits

0x5749,	// (0x00070895) grid_dialer2_keypad_pane

0xcdc9,	// (0x00077f15) bg_popup_call_pane_cp07_ParamLimits

0xcdc9,	// (0x00077f15) bg_popup_call_pane_cp07

0x5767,	// (0x000708b3) dialer2_ne_pane_t1_ParamLimits

0x5767,	// (0x000708b3) dialer2_ne_pane_t1

0x57a4,	// (0x000708f0) cell_dialer2_keypad_pane_ParamLimits

0x57a4,	// (0x000708f0) cell_dialer2_keypad_pane

0xd903,	// (0x00078a4f) bg_button_pane_pane_cp04_ParamLimits

0xd903,	// (0x00078a4f) bg_button_pane_pane_cp04

0x57c6,	// (0x00070912) cell_dialer2_keypad_pane_g1_ParamLimits

0x57c6,	// (0x00070912) cell_dialer2_keypad_pane_g1

0x1485,	// (0x0006c5d1) aid_placing_vt_set_content_ParamLimits

0x1485,	// (0x0006c5d1) aid_placing_vt_set_content

0x14ad,	// (0x0006c5f9) aid_placing_vt_set_title_ParamLimits

0x14ad,	// (0x0006c5f9) aid_placing_vt_set_title

0x942d,	// (0x00074579) main_image3_pane

0x588c,	// (0x000709d8) area_side_right_pane_cp01_ParamLimits

0x588c,	// (0x000709d8) area_side_right_pane_cp01

0x98f3,	// (0x00074a3f) main_image3_pane_g1_ParamLimits

0x98f3,	// (0x00074a3f) main_image3_pane_g1

0x58a3,	// (0x000709ef) main_image3_pane_g2_ParamLimits

0x58a3,	// (0x000709ef) main_image3_pane_g2

0x58cb,	// (0x00070a17) main_image3_pane_g3_ParamLimits

0x58cb,	// (0x00070a17) main_image3_pane_g3

0x58f5,	// (0x00070a41) main_image3_pane_g4_ParamLimits

0x58f5,	// (0x00070a41) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0007aa11) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0007aa11) main_image3_pane_g

0x591f,	// (0x00070a6b) main_image3_pane_t1_ParamLimits

0x591f,	// (0x00070a6b) main_image3_pane_t1

0x5977,	// (0x00070ac3) main_image3_pane_t2_ParamLimits

0x5977,	// (0x00070ac3) main_image3_pane_t2

0x59c9,	// (0x00070b15) main_image3_pane_t3_ParamLimits

0x59c9,	// (0x00070b15) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0007aa1a) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0007aa1a) main_image3_pane_t

0xb07c,	// (0x000761c8) grid_sctrl_middle_pane_cp01_ParamLimits

0xb07c,	// (0x000761c8) grid_sctrl_middle_pane_cp01

0x5a51,	// (0x00070b9d) cell_sctrl_middle_pane_cp01_ParamLimits

0x5a51,	// (0x00070b9d) cell_sctrl_middle_pane_cp01

0x5a6e,	// (0x00070bba) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5a6e,	// (0x00070bba) cell_sctrl_middle_pane_cp01_g1

0x942d,	// (0x00074579) main_call4_pane

0x5a84,	// (0x00070bd0) aid_size_button_call4_ParamLimits

0x5a84,	// (0x00070bd0) aid_size_button_call4

0x5ab5,	// (0x00070c01) call4_windows_pane_ParamLimits

0x5ab5,	// (0x00070c01) call4_windows_pane

0x5ad5,	// (0x00070c21) grid_call4_button_pane_ParamLimits

0x5ad5,	// (0x00070c21) grid_call4_button_pane

0xd90f,	// (0x00078a5b) call4_windows_conf_pane

0xd924,	// (0x00078a70) popup_call4_audio_first_window_ParamLimits

0xd924,	// (0x00078a70) popup_call4_audio_first_window

0xd970,	// (0x00078abc) popup_call4_audio_second_window_ParamLimits

0xd970,	// (0x00078abc) popup_call4_audio_second_window

0xd984,	// (0x00078ad0) popup_call4_audio_wait_window_ParamLimits

0xd984,	// (0x00078ad0) popup_call4_audio_wait_window

0x5b02,	// (0x00070c4e) cell_call4_button_pane_ParamLimits

0x5b02,	// (0x00070c4e) cell_call4_button_pane

0x5b2b,	// (0x00070c77) bg_button_pane_cp09_ParamLimits

0x5b2b,	// (0x00070c77) bg_button_pane_cp09

0x5b37,	// (0x00070c83) cell_call4_button_pane_g1_ParamLimits

0x5b37,	// (0x00070c83) cell_call4_button_pane_g1

0x5b5d,	// (0x00070ca9) cell_call4_button_pane_t1_ParamLimits

0x5b5d,	// (0x00070ca9) cell_call4_button_pane_t1

0xd9cc,	// (0x00078b18) popup_call4_audio_conf_window_ParamLimits

0xd9cc,	// (0x00078b18) popup_call4_audio_conf_window

0x4d8b,	// (0x0006fed7) mup3_progress_pane_t1_ParamLimits

0x4daa,	// (0x0006fef6) mup3_progress_pane_t2_ParamLimits

0xd2c1,	// (0x0007840d) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0007a8f3) mup3_progress_pane_t_ParamLimits

0xd2de,	// (0x0007842a) mup_progress_pane_cp03_ParamLimits

0x5399,	// (0x000704e5) mup3_control_keys_pane_g4_copy1

0x9a99,	// (0x00074be5) mp4_rocker2_pane_ParamLimits

0x9a99,	// (0x00074be5) mp4_rocker2_pane

0xd9e0,	// (0x00078b2c) mp4_rocker2_pane_g1

0xd9e8,	// (0x00078b34) mp4_rocker2_pane_g2

0x9b07,	// (0x00074c53) mp4_rocker2_pane_g3

0x9b0f,	// (0x00074c5b) mp4_rocker2_pane_g4

0x9b17,	// (0x00074c63) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0007aa23) mp4_rocker2_pane_g

0x942d,	// (0x00074579) main_camera4_pane

0x942d,	// (0x00074579) main_video4_pane

0x561c,	// (0x00070768) main_video_tele_dialer_pane_t1_ParamLimits

0x561c,	// (0x00070768) main_video_tele_dialer_pane_t1

0x5635,	// (0x00070781) main_video_tele_dialer_pane_t2_ParamLimits

0x5635,	// (0x00070781) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0007a9dd) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0007a9dd) main_video_tele_dialer_pane_t

0x5b9b,	// (0x00070ce7) cam4_autofocus_pane_ParamLimits

0x5b9b,	// (0x00070ce7) cam4_autofocus_pane

0x5bb1,	// (0x00070cfd) cam4_image_uncrop_pane_ParamLimits

0x5bb1,	// (0x00070cfd) cam4_image_uncrop_pane

0x5bcb,	// (0x00070d17) cam4_indicators_pane_ParamLimits

0x5bcb,	// (0x00070d17) cam4_indicators_pane

0x5bf6,	// (0x00070d42) main_camera4_pane_g1_ParamLimits

0x5bf6,	// (0x00070d42) main_camera4_pane_g1

0x5c08,	// (0x00070d54) main_camera4_pane_g2_ParamLimits

0x5c08,	// (0x00070d54) main_camera4_pane_g2

0x5c1b,	// (0x00070d67) main_camera4_pane_g3_ParamLimits

0x5c1b,	// (0x00070d67) main_camera4_pane_g3

0x5c2e,	// (0x00070d7a) main_camera4_pane_g4_ParamLimits

0x5c2e,	// (0x00070d7a) main_camera4_pane_g4

0x5c41,	// (0x00070d8d) main_camera4_pane_g5_ParamLimits

0x5c41,	// (0x00070d8d) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0007aa2e) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0007aa2e) main_camera4_pane_g

0x5c65,	// (0x00070db1) main_camera4_pane_t1_ParamLimits

0x5c65,	// (0x00070db1) main_camera4_pane_t1

0x9b3b,	// (0x00074c87) bg_tb_trans_pane_cp06

0x9b51,	// (0x00074c9d) cam4_indicators_pane_g1

0x9b62,	// (0x00074cae) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0007aa49) cam4_indicators_pane_g

0x9b80,	// (0x00074ccc) cam4_indicators_pane_t1

0x5cc9,	// (0x00070e15) main_video4_pane_g1_ParamLimits

0x5cc9,	// (0x00070e15) main_video4_pane_g1

0x5cd8,	// (0x00070e24) main_video4_pane_g2_ParamLimits

0x5cd8,	// (0x00070e24) main_video4_pane_g2

0x5ce7,	// (0x00070e33) main_video4_pane_g3_ParamLimits

0x5ce7,	// (0x00070e33) main_video4_pane_g3

0x5cf6,	// (0x00070e42) main_video4_pane_g4_ParamLimits

0x5cf6,	// (0x00070e42) main_video4_pane_g4

0x0004,

0xf904,	// (0x0007aa50) main_video4_pane_g_ParamLimits

0xf904,	// (0x0007aa50) main_video4_pane_g

0x5d14,	// (0x00070e60) vid4_indicators_pane_ParamLimits

0x5d14,	// (0x00070e60) vid4_indicators_pane

0x5d42,	// (0x00070e8e) video4_image_uncrop_cif_pane_ParamLimits

0x5d42,	// (0x00070e8e) video4_image_uncrop_cif_pane

0x5d5c,	// (0x00070ea8) video4_image_uncrop_nhd_pane_ParamLimits

0x5d5c,	// (0x00070ea8) video4_image_uncrop_nhd_pane

0x5bb1,	// (0x00070cfd) video4_image_uncrop_vga_pane_ParamLimits

0x5bb1,	// (0x00070cfd) video4_image_uncrop_vga_pane

0x941f,	// (0x0007456b) bg_tb_trans_pane_cp07

0x9baa,	// (0x00074cf6) vid4_indicators_pane_g1

0x9bbe,	// (0x00074d0a) vid4_indicators_pane_g2

0x9bd2,	// (0x00074d1e) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0007aa5b) vid4_indicators_pane_g

0x9bff,	// (0x00074d4b) vid4_indicators_pane_t1

0x5d70,	// (0x00070ebc) cam4_autofocus_pane_g1

0x5d78,	// (0x00070ec4) cam4_autofocus_pane_g2

0x5d80,	// (0x00070ecc) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0007aa66) cam4_autofocus_pane_g

0x5d88,	// (0x00070ed4) cam4_autofocus_pane_g3_copy1

0x5664,	// (0x000707b0) video_down_pane_cp_t1

0x5672,	// (0x000707be) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0007a9e2) video_down_pane_cp_t

0x941f,	// (0x0007456b) popup_vitu2_window_ParamLimits

0x941f,	// (0x0007456b) popup_vitu2_window

0x5d90,	// (0x00070edc) aid_size_cell2_itu2_ParamLimits

0x5d90,	// (0x00070edc) aid_size_cell2_itu2

0x5db6,	// (0x00070f02) aid_size_cell_itu2_ParamLimits

0x5db6,	// (0x00070f02) aid_size_cell_itu2

0x5e12,	// (0x00070f5e) bg_popup_window_pane_cp09_ParamLimits

0x5e12,	// (0x00070f5e) bg_popup_window_pane_cp09

0x5e20,	// (0x00070f6c) field_vitu2_entry_pane_ParamLimits

0x5e20,	// (0x00070f6c) field_vitu2_entry_pane

0x5e46,	// (0x00070f92) grid_vitu2_function_pane_ParamLimits

0x5e46,	// (0x00070f92) grid_vitu2_function_pane

0x5e97,	// (0x00070fe3) grid_vitu2_itu_pane_ParamLimits

0x5e97,	// (0x00070fe3) grid_vitu2_itu_pane

0x5f28,	// (0x00071074) cell_vitu2_itu_pane_ParamLimits

0x5f28,	// (0x00071074) cell_vitu2_itu_pane

0x5f4c,	// (0x00071098) cell_vitu2_function_pane_ParamLimits

0x5f4c,	// (0x00071098) cell_vitu2_function_pane

0xd9f0,	// (0x00078b3c) bg_popup_call_pane_cp08_ParamLimits

0xd9f0,	// (0x00078b3c) bg_popup_call_pane_cp08

0xda09,	// (0x00078b55) field_vitu2_entry_pane_g1

0xda15,	// (0x00078b61) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0007aa6d) field_vitu2_entry_pane_g

0x5f8b,	// (0x000710d7) field_vitu2_entry_pane_t1_ParamLimits

0x5f8b,	// (0x000710d7) field_vitu2_entry_pane_t1

0x9c16,	// (0x00074d62) field_vitu2_entry_pane_t2_ParamLimits

0x9c16,	// (0x00074d62) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0007aa74) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0007aa74) field_vitu2_entry_pane_t

0x5fbc,	// (0x00071108) bg_button_pane_cp010_ParamLimits

0x5fbc,	// (0x00071108) bg_button_pane_cp010

0x5fca,	// (0x00071116) cell_vitu2_itu_pane_g1

0x5fe8,	// (0x00071134) cell_vitu2_itu_pane_t1_ParamLimits

0x5fe8,	// (0x00071134) cell_vitu2_itu_pane_t1

0x01cc,	// (0x0006b318) cell_vitu2_itu_pane_t2_ParamLimits

0x01cc,	// (0x0006b318) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0007aa7e) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0007aa7e) cell_vitu2_itu_pane_t

0x941f,	// (0x0007456b) bg_button_pane_cp011

0x604e,	// (0x0007119a) cell_vitu2_function_pane_g1

0x942d,	// (0x00074579) main_myfav_hc_pane

0x5a19,	// (0x00070b65) popup_image3_note_pane_ParamLimits

0x5a19,	// (0x00070b65) popup_image3_note_pane

0x5a35,	// (0x00070b81) popup_image3_tool_bar_pane_ParamLimits

0x5a35,	// (0x00070b81) popup_image3_tool_bar_pane

0x0250,	// (0x0006b39c) cell_vitu2_itu_pane_t3_ParamLimits

0x0250,	// (0x0006b39c) cell_vitu2_itu_pane_t3

0x93a7,	// (0x000744f3) bg_popup_trans_pane

0xda37,	// (0x00078b83) grid_image3_tool_bar_pane

0xda41,	// (0x00078b8d) bg_popup_trans_pane_g1

0xb10e,	// (0x0007625a) bg_popup_trans_pane_g2

0xda49,	// (0x00078b95) bg_popup_trans_pane_g3

0xda51,	// (0x00078b9d) bg_popup_trans_pane_g4

0xda59,	// (0x00078ba5) bg_popup_trans_pane_g5

0xda61,	// (0x00078bad) bg_popup_trans_pane_g6

0xda69,	// (0x00078bb5) bg_popup_trans_pane_g7

0xda71,	// (0x00078bbd) bg_popup_trans_pane_g8

0xb0ee,	// (0x0007623a) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0007aa85) bg_popup_trans_pane_g

0xda79,	// (0x00078bc5) cell_image3_tool_bar_pane_ParamLimits

0xda79,	// (0x00078bc5) cell_image3_tool_bar_pane

0xcfe6,	// (0x00078132) cell_image3_tool_bar_pane_g1

0x93a7,	// (0x000744f3) bg_popup_trans_pane_cp1

0xda8d,	// (0x00078bd9) popup_image3_note_pane_t1

0xda9b,	// (0x00078be7) popup_image3_note_pane_t2

0xdaa9,	// (0x00078bf5) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0007aa98) popup_image3_note_pane_t

0xdab7,	// (0x00078c03) popup_image3_note_pane_t3_copy1

0x6062,	// (0x000711ae) bg_myfav_hc_instruction_pane_ParamLimits

0x6062,	// (0x000711ae) bg_myfav_hc_instruction_pane

0x6078,	// (0x000711c4) cell_myfav_contact_pane_ParamLimits

0x6078,	// (0x000711c4) cell_myfav_contact_pane

0x6096,	// (0x000711e2) cell_myfav_contact_pane_cp1_ParamLimits

0x6096,	// (0x000711e2) cell_myfav_contact_pane_cp1

0x60ae,	// (0x000711fa) cell_myfav_contact_pane_cp2_ParamLimits

0x60ae,	// (0x000711fa) cell_myfav_contact_pane_cp2

0x60c6,	// (0x00071212) cell_myfav_contact_pane_cp3_ParamLimits

0x60c6,	// (0x00071212) cell_myfav_contact_pane_cp3

0x60dd,	// (0x00071229) cell_myfav_contact_pane_cp4_ParamLimits

0x60dd,	// (0x00071229) cell_myfav_contact_pane_cp4

0x60f5,	// (0x00071241) cell_myfav_contact_pane_cp5_ParamLimits

0x60f5,	// (0x00071241) cell_myfav_contact_pane_cp5

0x6109,	// (0x00071255) cell_myfav_contact_pane_cp6_ParamLimits

0x6109,	// (0x00071255) cell_myfav_contact_pane_cp6

0x611f,	// (0x0007126b) cell_myfav_contact_pane_cp7_ParamLimits

0x611f,	// (0x0007126b) cell_myfav_contact_pane_cp7

0xdac5,	// (0x00078c11) listscroll_gen_pane_cp05

0x6139,	// (0x00071285) main_myfav_hc_pane_g1_ParamLimits

0x6139,	// (0x00071285) main_myfav_hc_pane_g1

0x6153,	// (0x0007129f) main_myfav_hc_pane_g2_ParamLimits

0x6153,	// (0x0007129f) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0007aa9f) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0007aa9f) main_myfav_hc_pane_g

0x6185,	// (0x000712d1) main_myfav_hc_pane_t1_ParamLimits

0x6185,	// (0x000712d1) main_myfav_hc_pane_t1

0xdace,	// (0x00078c1a) main_myfav_hc_pane_t2_ParamLimits

0xdace,	// (0x00078c1a) main_myfav_hc_pane_t2

0xdae0,	// (0x00078c2c) main_myfav_hc_pane_t3_ParamLimits

0xdae0,	// (0x00078c2c) main_myfav_hc_pane_t3

0x619c,	// (0x000712e8) main_myfav_hc_pane_t4_ParamLimits

0x619c,	// (0x000712e8) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0007aaa6) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0007aaa6) main_myfav_hc_pane_t

0xcfe6,	// (0x00078132) bg_myfav_hc_instruction_pane_g1

0xdaf2,	// (0x00078c3e) cell_myfav_contact_pane_g1_ParamLimits

0xdaf2,	// (0x00078c3e) cell_myfav_contact_pane_g1

0xdaf2,	// (0x00078c3e) cell_myfav_contact_pane_g2_ParamLimits

0xdaf2,	// (0x00078c3e) cell_myfav_contact_pane_g2

0xdafe,	// (0x00078c4a) cell_myfav_contact_pane_g3_ParamLimits

0xdafe,	// (0x00078c4a) cell_myfav_contact_pane_g3

0xd2ab,	// (0x000783f7) cell_myfav_contact_pane_g4_ParamLimits

0xd2ab,	// (0x000783f7) cell_myfav_contact_pane_g4

0xdb0b,	// (0x00078c57) cell_myfav_contact_pane_g5_ParamLimits

0xdb0b,	// (0x00078c57) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0007aab1) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0007aab1) cell_myfav_contact_pane_g

0x616d,	// (0x000712b9) main_myfav_hc_pane_g3_ParamLimits

0x616d,	// (0x000712b9) main_myfav_hc_pane_g3

0x041f,	// (0x0006b56b) popup_adpt_find_window

0x61c4,	// (0x00071310) afind_page_pane_ParamLimits

0x61c4,	// (0x00071310) afind_page_pane

0x61d9,	// (0x00071325) aid_size_cell_afind_ParamLimits

0x61d9,	// (0x00071325) aid_size_cell_afind

0x61f7,	// (0x00071343) bg_popup_sub_pane_cp09_ParamLimits

0x61f7,	// (0x00071343) bg_popup_sub_pane_cp09

0x6204,	// (0x00071350) find_pane_cp01_ParamLimits

0x6204,	// (0x00071350) find_pane_cp01

0xdb17,	// (0x00078c63) grid_afind_control_pane_ParamLimits

0xdb17,	// (0x00078c63) grid_afind_control_pane

0x6211,	// (0x0007135d) grid_afind_pane_ParamLimits

0x6211,	// (0x0007135d) grid_afind_pane

0x6230,	// (0x0007137c) cell_afind_pane_ParamLimits

0x6230,	// (0x0007137c) cell_afind_pane

0xcfe6,	// (0x00078132) afind_page_pane_g1

0x6291,	// (0x000713dd) afind_page_pane_g2

0x629a,	// (0x000713e6) afind_page_pane_g3

0x0002,

0xf970,	// (0x0007aabc) afind_page_pane_g

0x62a3,	// (0x000713ef) afind_page_pane_t1

0xdb2b,	// (0x00078c77) cell_afind_grid_control_pane_ParamLimits

0xdb2b,	// (0x00078c77) cell_afind_grid_control_pane

0xd903,	// (0x00078a4f) bg_button_pane_cp69_ParamLimits

0xd903,	// (0x00078a4f) bg_button_pane_cp69

0x62c3,	// (0x0007140f) cell_afind_pane_g1_ParamLimits

0x62c3,	// (0x0007140f) cell_afind_pane_g1

0x62d0,	// (0x0007141c) cell_afind_pane_t1_ParamLimits

0x62d0,	// (0x0007141c) cell_afind_pane_t1

0xaeb6,	// (0x00076002) bg_button_pane_cp72

0xdb3a,	// (0x00078c86) cell_afind_grid_control_pane_g1

0x3332,	// (0x0006e47e) aid_image_placing_area_ParamLimits

0x3332,	// (0x0006e47e) aid_image_placing_area

0xd5bf,	// (0x0007870b) field_vitu_entry_pane_g1_ParamLimits

0xd5bf,	// (0x0007870b) field_vitu_entry_pane_g1

0xd5cb,	// (0x00078717) field_vitu_entry_pane_g2_ParamLimits

0xd5cb,	// (0x00078717) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0007a96d) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0007a96d) field_vitu_entry_pane_g

0x5465,	// (0x000705b1) cell_vitu_itu_pane_g1_ParamLimits

0x54b5,	// (0x00070601) cell_vitu_itu_pane_t3_ParamLimits

0x54b5,	// (0x00070601) cell_vitu_itu_pane_t3

0xd8a9,	// (0x000789f5) mp4_progress_pane_t1_ParamLimits

0xd8c2,	// (0x00078a0e) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0007aa02) mp4_progress_pane_t_ParamLimits

0xd8db,	// (0x00078a27) mup_progress_pane_cp04_ParamLimits

0x61b0,	// (0x000712fc) main_myfav_hc_pane_t5_ParamLimits

0x61b0,	// (0x000712fc) main_myfav_hc_pane_t5

0x93cd,	// (0x00074519) aid_zoom_text_primary

0x041f,	// (0x0006b56b) popup_adpt_find_window_ParamLimits

0x941f,	// (0x0007456b) main_cam_set_pane

0x5be2,	// (0x00070d2e) cam4_zoom_pane_ParamLimits

0x5be2,	// (0x00070d2e) cam4_zoom_pane

0x62e2,	// (0x0007142e) main_cam_set_pane_g1_ParamLimits

0x62e2,	// (0x0007142e) main_cam_set_pane_g1

0x62f0,	// (0x0007143c) main_cam_set_pane_g2_ParamLimits

0x62f0,	// (0x0007143c) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0007aac3) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0007aac3) main_cam_set_pane_g

0x6311,	// (0x0007145d) main_cam_set_pane_t1_ParamLimits

0x6311,	// (0x0007145d) main_cam_set_pane_t1

0x632c,	// (0x00071478) main_cset_listscroll_pane_ParamLimits

0x632c,	// (0x00071478) main_cset_listscroll_pane

0x634c,	// (0x00071498) main_cset_slider_pane_ParamLimits

0x634c,	// (0x00071498) main_cset_slider_pane

0xdb4b,	// (0x00078c97) main_cset_list_pane_ParamLimits

0xdb4b,	// (0x00078c97) main_cset_list_pane

0xdb5b,	// (0x00078ca7) scroll_pane_cp028

0x6372,	// (0x000714be) aid_area_touch_slider

0x638e,	// (0x000714da) cset_slider_pane

0x63b8,	// (0x00071504) main_cset_slider_pane_g1

0x63cd,	// (0x00071519) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0007aac8) main_cset_slider_pane_g

0xdb94,	// (0x00078ce0) main_cset_slider_pane_t1

0x6489,	// (0x000715d5) main_cset_slider_pane_t2

0x64a3,	// (0x000715ef) main_cset_slider_pane_t3

0x64bd,	// (0x00071609) main_cset_slider_pane_t4

0x64d7,	// (0x00071623) main_cset_slider_pane_t5

0x64f1,	// (0x0007163d) main_cset_slider_pane_t6

0x6506,	// (0x00071652) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0007aaed) main_cset_slider_pane_t

0x660a,	// (0x00071756) cset_list_set_pane_ParamLimits

0x660a,	// (0x00071756) cset_list_set_pane

0x661d,	// (0x00071769) aid_position_infowindow_above

0x6625,	// (0x00071771) aid_position_infowindow_below

0x9c33,	// (0x00074d7f) cset_list_set_pane_g1_ParamLimits

0x9c33,	// (0x00074d7f) cset_list_set_pane_g1

0x662d,	// (0x00071779) cset_list_set_pane_g3_ParamLimits

0x662d,	// (0x00071779) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0007ab0c) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0007ab0c) cset_list_set_pane_g

0x9c3f,	// (0x00074d8b) cset_list_set_pane_t1_ParamLimits

0x9c3f,	// (0x00074d8b) cset_list_set_pane_t1

0xb07c,	// (0x000761c8) list_highlight_pane_cp021_ParamLimits

0xb07c,	// (0x000761c8) list_highlight_pane_cp021

0xb8ef,	// (0x00076a3b) cset_slider_pane_g1

0xb901,	// (0x00076a4d) cset_slider_pane_g2

0xb8f8,	// (0x00076a44) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0007ab11) cset_slider_pane_g

0x9c54,	// (0x00074da0) aid_area_touch_cam4_zoom

0x9c5c,	// (0x00074da8) cam4_zoom_cont_pane

0x9c64,	// (0x00074db0) cam4_zoom_pane_g1

0x9c6c,	// (0x00074db8) cam4_zoom_pane_g2

0x663c,	// (0x00071788) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0007ab18) cam4_zoom_pane_g

0x9c74,	// (0x00074dc0) cam4_zoom_cont_pane_g1

0x9c7d,	// (0x00074dc9) cam4_zoom_cont_pane_g2

0x9c86,	// (0x00074dd2) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0007ab1f) cam4_zoom_cont_pane_g

0x5aa2,	// (0x00070bee) call4_image_pane_ParamLimits

0x5aa2,	// (0x00070bee) call4_image_pane

0xd90f,	// (0x00078a5b) call4_windows_conf_pane_ParamLimits

0xd94e,	// (0x00078a9a) popup_call4_audio_in_window_ParamLimits

0xd94e,	// (0x00078a9a) popup_call4_audio_in_window

0x93a7,	// (0x000744f3) bg_popup_call2_act_pane_cp02

0xd9c4,	// (0x00078b10) call4_list_conf_pane

0xcfe6,	// (0x00078132) call4_image_pane_g1

0xcfe6,	// (0x00078132) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0007a833) call4_image_pane_g

0xdc34,	// (0x00078d80) list_single_graphic_popup_conf4_pane_ParamLimits

0xdc34,	// (0x00078d80) list_single_graphic_popup_conf4_pane

0x93a7,	// (0x000744f3) list_highlight_pane_cp022

0xdc47,	// (0x00078d93) list_single_graphic_popup_conf4_pane_g1

0xb5c8,	// (0x00076714) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0007ab26) list_single_graphic_popup_conf4_pane_g

0xdc4f,	// (0x00078d9b) list_single_graphic_popup_conf4_pane_t1

0x15d1,	// (0x0006c71d) popup_vtel_slider_window_ParamLimits

0x15d1,	// (0x0006c71d) popup_vtel_slider_window

0xd8f1,	// (0x00078a3d) dialer2_ne_pane_t2_ParamLimits

0xd8f1,	// (0x00078a3d) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0007aa07) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0007aa07) dialer2_ne_pane_t

0xcdc9,	// (0x00077f15) bg_popup_sub_pane_cp010_ParamLimits

0xcdc9,	// (0x00077f15) bg_popup_sub_pane_cp010

0x6644,	// (0x00071790) popup_vtel_slider_window_g1_ParamLimits

0x6644,	// (0x00071790) popup_vtel_slider_window_g1

0x6657,	// (0x000717a3) popup_vtel_slider_window_g2_ParamLimits

0x6657,	// (0x000717a3) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0007ab2b) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0007ab2b) popup_vtel_slider_window_g

0x66ad,	// (0x000717f9) vtel_slider_pane_ParamLimits

0x66ad,	// (0x000717f9) vtel_slider_pane

0x66cf,	// (0x0007181b) vtel_slider_pane_g1_ParamLimits

0x66cf,	// (0x0007181b) vtel_slider_pane_g1

0x66e3,	// (0x0007182f) vtel_slider_pane_g2_ParamLimits

0x66e3,	// (0x0007182f) vtel_slider_pane_g2

0x66fb,	// (0x00071847) vtel_slider_pane_g3_ParamLimits

0x66fb,	// (0x00071847) vtel_slider_pane_g3

0x66cf,	// (0x0007181b) vtel_slider_pane_g4_ParamLimits

0x66cf,	// (0x0007181b) vtel_slider_pane_g4

0x6711,	// (0x0007185d) vtel_slider_pane_g5_ParamLimits

0x6711,	// (0x0007185d) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0007ab34) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0007ab34) vtel_slider_pane_g

0x942d,	// (0x00074579) main_gallery2_pane

0x5de2,	// (0x00070f2e) aid_size_row_itut2_dropdow_list_ParamLimits

0x5de2,	// (0x00070f2e) aid_size_row_itut2_dropdow_list

0x5e6e,	// (0x00070fba) grid_vitu2_function_top_pane_ParamLimits

0x5e6e,	// (0x00070fba) grid_vitu2_function_top_pane

0x5ed3,	// (0x0007101f) popup_vitu2_dropdown_list_window_ParamLimits

0x5ed3,	// (0x0007101f) popup_vitu2_dropdown_list_window

0x5efc,	// (0x00071048) popup_vitu2_match_list_window

0x6727,	// (0x00071873) cell_vitu2_function_top_pane_ParamLimits

0x6727,	// (0x00071873) cell_vitu2_function_top_pane

0x6745,	// (0x00071891) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6745,	// (0x00071891) cell_vitu2_function_top_pane_cp01

0x6763,	// (0x000718af) cell_vitu2_function_top_wide_pane_ParamLimits

0x6763,	// (0x000718af) cell_vitu2_function_top_wide_pane

0x941f,	// (0x0007456b) bg_button_pane_cp012

0x6781,	// (0x000718cd) cell_vitu2_function_top_pane_g1

0x9c9d,	// (0x00074de9) bg_button_pane_cp013_ParamLimits

0x9c9d,	// (0x00074de9) bg_button_pane_cp013

0x6795,	// (0x000718e1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6795,	// (0x000718e1) cell_vitu2_function_top_wide_pane_g1

0x941f,	// (0x0007456b) bg_popup_sub_pane_cp20

0x67ad,	// (0x000718f9) list_vitu2_match_list_pane

0xda41,	// (0x00078b8d) bg_popup_sub_pane_cp20_g1

0xda49,	// (0x00078b95) bg_popup_sub_pane_cp20_g2

0xb10e,	// (0x0007625a) bg_popup_sub_pane_cp20_g3

0xda51,	// (0x00078b9d) bg_popup_sub_pane_cp20_g4

0xb0ee,	// (0x0007623a) bg_popup_sub_pane_cp20_g5

0xdc65,	// (0x00078db1) bg_popup_sub_pane_cp20_g6

0xda61,	// (0x00078bad) bg_popup_sub_pane_cp20_g7

0xda69,	// (0x00078bb5) bg_popup_sub_pane_cp20_g8

0xda71,	// (0x00078bbd) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0007ab3f) bg_popup_sub_pane_cp20_g

0x9cb9,	// (0x00074e05) list_vitu2_match_list_item_pane_ParamLimits

0x9cb9,	// (0x00074e05) list_vitu2_match_list_item_pane

0x9ccb,	// (0x00074e17) list_vitu2_match_list_item_pane_t1

0x942d,	// (0x00074579) bg_popup_sub_pane_cp21

0x9cd9,	// (0x00074e25) grid_vitu2_dropdown_list_pane

0x6800,	// (0x0007194c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6800,	// (0x0007194c) cell_vitu2_dropdown_list_char_pane

0x6821,	// (0x0007196d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6821,	// (0x0007196d) cell_vitu2_dropdown_list_ctrl_pane

0xdc6d,	// (0x00078db9) cell_vitu2_dropdown_list_char_pane_g1

0xdc76,	// (0x00078dc2) cell_vitu2_dropdown_list_char_pane_g2

0xdc7f,	// (0x00078dcb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0007ab5c) cell_vitu2_dropdown_list_char_pane_g

0x684d,	// (0x00071999) cell_vitu2_dropdown_list_char_pane_t1

0x685b,	// (0x000719a7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x685b,	// (0x000719a7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x686b,	// (0x000719b7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x686b,	// (0x000719b7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x687c,	// (0x000719c8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x687c,	// (0x000719c8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x688c,	// (0x000719d8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x688c,	// (0x000719d8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9b3b,	// (0x00074c87) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9b3b,	// (0x00074c87) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0007ab63) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0007ab63) cell_vitu2_dropdown_list_ctrl_pane_g

0x68a8,	// (0x000719f4) aid_size_cell_gallery2_ParamLimits

0x68a8,	// (0x000719f4) aid_size_cell_gallery2

0x68be,	// (0x00071a0a) grid_gallery2_pane_ParamLimits

0x68be,	// (0x00071a0a) grid_gallery2_pane

0x68d2,	// (0x00071a1e) scroll_pane_cp029_ParamLimits

0x68d2,	// (0x00071a1e) scroll_pane_cp029

0x68de,	// (0x00071a2a) cell_gallery2_pane_ParamLimits

0x68de,	// (0x00071a2a) cell_gallery2_pane

0xdc88,	// (0x00078dd4) cell_gallery2_pane_g2

0x6914,	// (0x00071a60) cell_gallery2_pane_g3

0xdc92,	// (0x00078dde) cell_gallery2_pane_g4

0xdc9a,	// (0x00078de6) cell_gallery2_pane_g5

0xb7ab,	// (0x000768f7) grid_highlight_pane_cp10

0x5efc,	// (0x00071048) popup_vitu2_match_list_window_ParamLimits

0x5f11,	// (0x0007105d) popup_vitu2_query_window_ParamLimits

0x5f11,	// (0x0007105d) popup_vitu2_query_window

0x942d,	// (0x00074579) bg_vitu2_candi_button_pane

0xdc6d,	// (0x00078db9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdc76,	// (0x00078dc2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdc7f,	// (0x00078dcb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x691c,	// (0x00071a68) bg_button_pane_cp015

0x6930,	// (0x00071a7c) bg_button_pane_cp016

0x6943,	// (0x00071a8f) bg_button_pane_cp017

0xcbdc,	// (0x00077d28) bg_popup_sub_pane_cp22

0xdca2,	// (0x00078dee) popup_vitu2_query_window_g1

0x6988,	// (0x00071ad4) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0007ab6e) popup_vitu2_query_window_g

0x69a7,	// (0x00071af3) popup_vitu2_query_window_t1_ParamLimits

0x69a7,	// (0x00071af3) popup_vitu2_query_window_t1

0x69dc,	// (0x00071b28) popup_vitu2_query_window_t2_ParamLimits

0x69dc,	// (0x00071b28) popup_vitu2_query_window_t2

0x69ee,	// (0x00071b3a) popup_vitu2_query_window_t3_ParamLimits

0x69ee,	// (0x00071b3a) popup_vitu2_query_window_t3

0x6a16,	// (0x00071b62) popup_vitu2_query_window_t4_ParamLimits

0x6a16,	// (0x00071b62) popup_vitu2_query_window_t4

0x6a37,	// (0x00071b83) popup_vitu2_query_window_t5_ParamLimits

0x6a37,	// (0x00071b83) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0007ab75) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0007ab75) popup_vitu2_query_window_t

0xdb43,	// (0x00078c8f) main_cset_text_pane

0x6372,	// (0x000714be) aid_area_touch_slider_ParamLimits

0x638e,	// (0x000714da) cset_slider_pane_ParamLimits

0x63b8,	// (0x00071504) main_cset_slider_pane_g1_ParamLimits

0x63cd,	// (0x00071519) main_cset_slider_pane_g2_ParamLimits

0xdb64,	// (0x00078cb0) main_cset_slider_pane_g3_ParamLimits

0xdb64,	// (0x00078cb0) main_cset_slider_pane_g3

0x63e2,	// (0x0007152e) main_cset_slider_pane_g4_ParamLimits

0x63e2,	// (0x0007152e) main_cset_slider_pane_g4

0x63f1,	// (0x0007153d) main_cset_slider_pane_g5_ParamLimits

0x63f1,	// (0x0007153d) main_cset_slider_pane_g5

0x63fd,	// (0x00071549) main_cset_slider_pane_g6_ParamLimits

0x63fd,	// (0x00071549) main_cset_slider_pane_g6

0xf97c,	// (0x0007aac8) main_cset_slider_pane_g_ParamLimits

0xdb94,	// (0x00078ce0) main_cset_slider_pane_t1_ParamLimits

0x6489,	// (0x000715d5) main_cset_slider_pane_t2_ParamLimits

0x64a3,	// (0x000715ef) main_cset_slider_pane_t3_ParamLimits

0x64bd,	// (0x00071609) main_cset_slider_pane_t4_ParamLimits

0x64d7,	// (0x00071623) main_cset_slider_pane_t5_ParamLimits

0x64f1,	// (0x0007163d) main_cset_slider_pane_t6_ParamLimits

0x6506,	// (0x00071652) main_cset_slider_pane_t7_ParamLimits

0x6530,	// (0x0007167c) main_cset_slider_pane_t8_ParamLimits

0x6530,	// (0x0007167c) main_cset_slider_pane_t8

0x6558,	// (0x000716a4) main_cset_slider_pane_t9_ParamLimits

0x6558,	// (0x000716a4) main_cset_slider_pane_t9

0x6580,	// (0x000716cc) main_cset_slider_pane_t10_ParamLimits

0x6580,	// (0x000716cc) main_cset_slider_pane_t10

0x65a8,	// (0x000716f4) main_cset_slider_pane_t11_ParamLimits

0x65a8,	// (0x000716f4) main_cset_slider_pane_t11

0x65d0,	// (0x0007171c) main_cset_slider_pane_t12_ParamLimits

0x65d0,	// (0x0007171c) main_cset_slider_pane_t12

0x65ed,	// (0x00071739) main_cset_slider_pane_t13_ParamLimits

0x65ed,	// (0x00071739) main_cset_slider_pane_t13

0xf9a1,	// (0x0007aaed) main_cset_slider_pane_t_ParamLimits

0x93a7,	// (0x000744f3) bg_popup_sub_pane_cp011

0xdcae,	// (0x00078dfa) main_cset_text_pane_g1

0xdcb6,	// (0x00078e02) main_cset_text_pane_t1

0xdcc4,	// (0x00078e10) main_cset_text_pane_t2

0xdcd2,	// (0x00078e1e) main_cset_text_pane_t3

0xdce0,	// (0x00078e2c) main_cset_text_pane_t4

0xdcee,	// (0x00078e3a) main_cset_text_pane_t5

0xdcfc,	// (0x00078e48) main_cset_text_pane_t6

0xdd0a,	// (0x00078e56) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0007ab84) main_cset_text_pane_t

0x942d,	// (0x00074579) main_cam4_burst_pane

0x942d,	// (0x00074579) main_cam5_pane

0x62b1,	// (0x000713fd) bg_button_pane_cp019

0x62ba,	// (0x00071406) bg_button_pane_cp020

0xdb70,	// (0x00078cbc) main_cset_slider_pane_g7_ParamLimits

0xdb70,	// (0x00078cbc) main_cset_slider_pane_g7

0xdb7c,	// (0x00078cc8) main_cset_slider_pane_g8_ParamLimits

0xdb7c,	// (0x00078cc8) main_cset_slider_pane_g8

0x6411,	// (0x0007155d) main_cset_slider_pane_g9_ParamLimits

0x6411,	// (0x0007155d) main_cset_slider_pane_g9

0x641d,	// (0x00071569) main_cset_slider_pane_g10_ParamLimits

0x641d,	// (0x00071569) main_cset_slider_pane_g10

0x6429,	// (0x00071575) main_cset_slider_pane_g11_ParamLimits

0x6429,	// (0x00071575) main_cset_slider_pane_g11

0x6435,	// (0x00071581) main_cset_slider_pane_g12_ParamLimits

0x6435,	// (0x00071581) main_cset_slider_pane_g12

0x6441,	// (0x0007158d) main_cset_slider_pane_g13_ParamLimits

0x6441,	// (0x0007158d) main_cset_slider_pane_g13

0x644d,	// (0x00071599) main_cset_slider_pane_g14_ParamLimits

0x644d,	// (0x00071599) main_cset_slider_pane_g14

0x6459,	// (0x000715a5) main_cset_slider_pane_g15_ParamLimits

0x6459,	// (0x000715a5) main_cset_slider_pane_g15

0xdbc2,	// (0x00078d0e) main_cset_slider_pane_t14_ParamLimits

0xdbc2,	// (0x00078d0e) main_cset_slider_pane_t14

0xdbfb,	// (0x00078d47) main_cset_slider_pane_t15_ParamLimits

0xdbfb,	// (0x00078d47) main_cset_slider_pane_t15

0x6aae,	// (0x00071bfa) aid_cam4_burst_size_cell_ParamLimits

0x6aae,	// (0x00071bfa) aid_cam4_burst_size_cell

0x6ace,	// (0x00071c1a) grid_cam4_burst_pane_ParamLimits

0x6ace,	// (0x00071c1a) grid_cam4_burst_pane

0x6b06,	// (0x00071c52) linegrid_cam4_burst_pane_ParamLimits

0x6b06,	// (0x00071c52) linegrid_cam4_burst_pane

0xdd18,	// (0x00078e64) scroll_pane_cp30_ParamLimits

0xdd18,	// (0x00078e64) scroll_pane_cp30

0x6b2c,	// (0x00071c78) cell_cam4_burst_pane_ParamLimits

0x6b2c,	// (0x00071c78) cell_cam4_burst_pane

0xdd24,	// (0x00078e70) linegrid_cam4_burst_pane_g1_ParamLimits

0xdd24,	// (0x00078e70) linegrid_cam4_burst_pane_g1

0x6b79,	// (0x00071cc5) linegrid_cam4_burst_pane_g2_ParamLimits

0x6b79,	// (0x00071cc5) linegrid_cam4_burst_pane_g2

0xdd31,	// (0x00078e7d) linegrid_cam4_burst_pane_g3_ParamLimits

0xdd31,	// (0x00078e7d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0007ab93) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0007ab93) linegrid_cam4_burst_pane_g

0x6b8a,	// (0x00071cd6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6b8a,	// (0x00071cd6) linegrid_cam4_burst_pane_g3_copy1

0xdd3e,	// (0x00078e8a) linegrid_cam4_burst_pane_g4_ParamLimits

0xdd3e,	// (0x00078e8a) linegrid_cam4_burst_pane_g4

0x6ba4,	// (0x00071cf0) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ba4,	// (0x00071cf0) linegrid_cam4_burst_pane_g5

0x6bb5,	// (0x00071d01) linegrid_cam4_burst_pane_g6_ParamLimits

0x6bb5,	// (0x00071d01) linegrid_cam4_burst_pane_g6

0xdd4b,	// (0x00078e97) linegrid_cam4_burst_pane_g7_ParamLimits

0xdd4b,	// (0x00078e97) linegrid_cam4_burst_pane_g7

0x6bcc,	// (0x00071d18) cell_cam4_burst_pane_g1

0xdd64,	// (0x00078eb0) main_cam5_pane_t1_ParamLimits

0xdd64,	// (0x00078eb0) main_cam5_pane_t1

0xdd76,	// (0x00078ec2) main_cam5_pane_t2_ParamLimits

0xdd76,	// (0x00078ec2) main_cam5_pane_t2

0xdd88,	// (0x00078ed4) main_cam5_pane_t3_ParamLimits

0xdd88,	// (0x00078ed4) main_cam5_pane_t3

0xdd9a,	// (0x00078ee6) main_cam5_pane_t4_ParamLimits

0xdd9a,	// (0x00078ee6) main_cam5_pane_t4

0xddb2,	// (0x00078efe) main_cam5_pane_t5_ParamLimits

0xddb2,	// (0x00078efe) main_cam5_pane_t5

0xddc6,	// (0x00078f12) main_cam5_pane_t6_ParamLimits

0xddc6,	// (0x00078f12) main_cam5_pane_t6

0xddda,	// (0x00078f26) main_cam5_pane_t7_ParamLimits

0xddda,	// (0x00078f26) main_cam5_pane_t7

0xddec,	// (0x00078f38) main_cam5_pane_t8_ParamLimits

0xddec,	// (0x00078f38) main_cam5_pane_t8

0xde08,	// (0x00078f54) main_cam5_pane_t9_ParamLimits

0xde08,	// (0x00078f54) main_cam5_pane_t9

0xde1a,	// (0x00078f66) main_cam5_pane_t10_ParamLimits

0xde1a,	// (0x00078f66) main_cam5_pane_t10

0xde2c,	// (0x00078f78) main_cam5_pane_t11_ParamLimits

0xde2c,	// (0x00078f78) main_cam5_pane_t11

0xde3e,	// (0x00078f8a) main_cam5_pane_t12_ParamLimits

0xde3e,	// (0x00078f8a) main_cam5_pane_t12

0xde53,	// (0x00078f9f) main_cam5_pane_t13_ParamLimits

0xde53,	// (0x00078f9f) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0007ab9f) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0007ab9f) main_cam5_pane_t

0x04a1,	// (0x0006b5ed) popup_scut_keymap_window_ParamLimits

0x04a1,	// (0x0006b5ed) popup_scut_keymap_window

0x6be1,	// (0x00071d2d) aid_size_cell_brow_shortcut

0xb7ab,	// (0x000768f7) bg_popup_window_pane_cp010

0x6bed,	// (0x00071d39) grid_scut_pane

0x6bf9,	// (0x00071d45) cell_scut_pane_ParamLimits

0x6bf9,	// (0x00071d45) cell_scut_pane

0x6c10,	// (0x00071d5c) cell_scut_pane_g1

0xde70,	// (0x00078fbc) cell_scut_pane_t1

0xde7f,	// (0x00078fcb) cell_scut_pane_t2

0x6c19,	// (0x00071d65) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0007abba) cell_scut_pane_t

0x494e,	// (0x0006fa9a) main_mup3_pane_g8_ParamLimits

0x494e,	// (0x0006fa9a) main_mup3_pane_g8

0x5dfa,	// (0x00070f46) area_vitu2_query_pane_ParamLimits

0x5dfa,	// (0x00070f46) area_vitu2_query_pane

0x6956,	// (0x00071aa2) input_focus_pane_cp08

0xde8e,	// (0x00078fda) area_vitu2_query_pane_g1

0x6c27,	// (0x00071d73) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0007abc1) area_vitu2_query_pane_g

0x6c38,	// (0x00071d84) area_vitu2_query_pane_t1_ParamLimits

0x6c38,	// (0x00071d84) area_vitu2_query_pane_t1

0x6c4c,	// (0x00071d98) area_vitu2_query_pane_t2_ParamLimits

0x6c4c,	// (0x00071d98) area_vitu2_query_pane_t2

0x6c60,	// (0x00071dac) area_vitu2_query_pane_t3_ParamLimits

0x6c60,	// (0x00071dac) area_vitu2_query_pane_t3

0x9ebe,	// (0x0007500a) area_vitu2_query_pane_t4_ParamLimits

0x9ebe,	// (0x0007500a) area_vitu2_query_pane_t4

0x9ee6,	// (0x00075032) area_vitu2_query_pane_t5_ParamLimits

0x9ee6,	// (0x00075032) area_vitu2_query_pane_t5

0x9f0e,	// (0x0007505a) area_vitu2_query_pane_t6_ParamLimits

0x9f0e,	// (0x0007505a) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0007abc6) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0007abc6) area_vitu2_query_pane_t

0x6c88,	// (0x00071dd4) bg_button_pane_cp018

0x6c96,	// (0x00071de2) bg_button_pane_cp021

0x6ca2,	// (0x00071dee) bg_button_pane_cp022

0x6cb3,	// (0x00071dff) input_focus_pane_cp09

0x2957,	// (0x0006daa3) aid_size_touch_mv_arrow_left

0x2980,	// (0x0006dacc) aid_size_touch_mv_arrow_right

0x6471,	// (0x000715bd) main_cset_slider_pane_g16_ParamLimits

0x6471,	// (0x000715bd) main_cset_slider_pane_g16

0x647d,	// (0x000715c9) main_cset_slider_pane_g17_ParamLimits

0x647d,	// (0x000715c9) main_cset_slider_pane_g17

0x6bcc,	// (0x00071d18) cell_cam4_burst_pane_g1_ParamLimits

0x93a7,	// (0x000744f3) compa_mode_pane

0x6667,	// (0x000717b3) popup_vtel_slider_window_g3_ParamLimits

0x6667,	// (0x000717b3) popup_vtel_slider_window_g3

0x667e,	// (0x000717ca) popup_vtel_slider_window_g4_ParamLimits

0x667e,	// (0x000717ca) popup_vtel_slider_window_g4

0x6695,	// (0x000717e1) popup_vtel_slider_window_t1_ParamLimits

0x6695,	// (0x000717e1) popup_vtel_slider_window_t1

0x942d,	// (0x00074579) main_cl_pane

0x9737,	// (0x00074883) popup_imed_adjust2_window_ParamLimits

0xcbdc,	// (0x00077d28) bg_tb_trans_pane_cp05_ParamLimits

0xd4eb,	// (0x00078637) popup_imed_adjust2_window_g1_ParamLimits

0xd4fa,	// (0x00078646) popup_imed_adjust2_window_g2_ParamLimits

0xd4fa,	// (0x00078646) popup_imed_adjust2_window_g2

0xd506,	// (0x00078652) popup_imed_adjust2_window_g3_ParamLimits

0xd506,	// (0x00078652) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0007a931) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0007a931) popup_imed_adjust2_window_g

0xd512,	// (0x0007865e) popup_imed_adjust2_window_t1_ParamLimits

0xd52a,	// (0x00078676) slider_imed_adjust_pane_ParamLimits

0xd53e,	// (0x0007868a) slider_imed_adjust_pane_g1_ParamLimits

0xd54e,	// (0x0007869a) slider_imed_adjust_pane_g2_ParamLimits

0xd55e,	// (0x000786aa) slider_imed_adjust_pane_g3_ParamLimits

0xd56f,	// (0x000786bb) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0007a938) slider_imed_adjust_pane_g_ParamLimits

0x5b83,	// (0x00070ccf) aid_touch_area_cam4_ParamLimits

0x5b83,	// (0x00070ccf) aid_touch_area_cam4

0x9b1f,	// (0x00074c6b) battery_pane_cp01

0x5c52,	// (0x00070d9e) main_camera4_pane_g6_ParamLimits

0x5c52,	// (0x00070d9e) main_camera4_pane_g6

0x5c7c,	// (0x00070dc8) main_camera4_pane_t2_ParamLimits

0x5c7c,	// (0x00070dc8) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0007aa3b) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0007aa3b) main_camera4_pane_t

0x5cb1,	// (0x00070dfd) aid_touch_area_vid4_ParamLimits

0x5cb1,	// (0x00070dfd) aid_touch_area_vid4

0x5d05,	// (0x00070e51) main_video4_pane_g5_ParamLimits

0x5d05,	// (0x00070e51) main_video4_pane_g5

0x5d2a,	// (0x00070e76) vid4_progress_pane_ParamLimits

0x5d2a,	// (0x00070e76) vid4_progress_pane

0xdb88,	// (0x00078cd4) main_cset_slider_pane_g18_ParamLimits

0xdb88,	// (0x00078cd4) main_cset_slider_pane_g18

0xdd58,	// (0x00078ea4) cell_cam4_burst_pane_g2_ParamLimits

0xdd58,	// (0x00078ea4) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0007ab9a) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0007ab9a) cell_cam4_burst_pane_g

0xac93,	// (0x00075ddf) bg_cl_pane_ParamLimits

0xac93,	// (0x00075ddf) bg_cl_pane

0x6cc4,	// (0x00071e10) cl_header_pane_ParamLimits

0x6cc4,	// (0x00071e10) cl_header_pane

0x6cd8,	// (0x00071e24) cl_listscroll_pane_ParamLimits

0x6cd8,	// (0x00071e24) cl_listscroll_pane

0xde9a,	// (0x00078fe6) bg_cl_pane_g1

0xdea2,	// (0x00078fee) bg_cl_pane_g2

0xdeaa,	// (0x00078ff6) bg_cl_pane_g3

0xdeb2,	// (0x00078ffe) bg_cl_pane_g4

0xdeba,	// (0x00079006) bg_cl_pane_g5

0xdec2,	// (0x0007900e) bg_cl_pane_g6

0xdeca,	// (0x00079016) bg_cl_pane_g7

0xded2,	// (0x0007901e) bg_cl_pane_g8

0xdeda,	// (0x00079026) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0007abd5) bg_cl_pane_g

0x6ce8,	// (0x00071e34) aid_height_cl_leading_ParamLimits

0x6ce8,	// (0x00071e34) aid_height_cl_leading

0x6cf4,	// (0x00071e40) aid_height_cl_text_ParamLimits

0x6cf4,	// (0x00071e40) aid_height_cl_text

0xb07c,	// (0x000761c8) bg_cl_header_pane_ParamLimits

0xb07c,	// (0x000761c8) bg_cl_header_pane

0x6d13,	// (0x00071e5f) cl_header_pane_g1_ParamLimits

0x6d13,	// (0x00071e5f) cl_header_pane_g1

0x6d29,	// (0x00071e75) cl_header_pane_t1_ParamLimits

0x6d29,	// (0x00071e75) cl_header_pane_t1

0xdee2,	// (0x0007902e) cl_list_pane

0xdb5b,	// (0x00078ca7) hc_scroll_pane_cp01

0xb0ee,	// (0x0007623a) bg_cl_header_pane_g1

0xda41,	// (0x00078b8d) bg_cl_header_pane_g2

0xb10e,	// (0x0007625a) bg_cl_header_pane_g3

0xda51,	// (0x00078b9d) bg_cl_header_pane_g4

0xda49,	// (0x00078b95) bg_cl_header_pane_g5

0xdc65,	// (0x00078db1) bg_cl_header_pane_g6

0xda69,	// (0x00078bb5) bg_cl_header_pane_g7

0xda71,	// (0x00078bbd) bg_cl_header_pane_g8

0xda61,	// (0x00078bad) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0007abe8) bg_cl_header_pane_g

0x6d42,	// (0x00071e8e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6d42,	// (0x00071e8e) hc_cl_list_double_graphic_heading_pane

0x6d53,	// (0x00071e9f) hc_cl_list_single_graphic_pane_ParamLimits

0x6d53,	// (0x00071e9f) hc_cl_list_single_graphic_pane

0x6d6c,	// (0x00071eb8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6d6c,	// (0x00071eb8) hc_cl_list_single_graphic_pane_g1

0x6d78,	// (0x00071ec4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6d78,	// (0x00071ec4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0007abfb) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0007abfb) hc_cl_list_single_graphic_pane_g

0x6d8c,	// (0x00071ed8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6d8c,	// (0x00071ed8) hc_cl_list_single_graphic_pane_t1

0x6d6c,	// (0x00071eb8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6d6c,	// (0x00071eb8) hc_cl_list_double_graphic_heading_pane_g1

0x6da1,	// (0x00071eed) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6da1,	// (0x00071eed) hc_cl_list_double_graphic_heading_pane_g2

0x6db5,	// (0x00071f01) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6db5,	// (0x00071f01) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0007ac00) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0007ac00) hc_cl_list_double_graphic_heading_pane_g

0x6dc9,	// (0x00071f15) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6dc9,	// (0x00071f15) hc_cl_list_double_graphic_heading_pane_t1

0x6dde,	// (0x00071f2a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6dde,	// (0x00071f2a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0007ac07) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0007ac07) hc_cl_list_double_graphic_heading_pane_t

0x6df3,	// (0x00071f3f) vid4_progress_pane_g1

0x6e05,	// (0x00071f51) vid4_progress_pane_g2

0xb34b,	// (0x00076497) vid4_progress_pane_g3

0x9ce9,	// (0x00074e35) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0007ac0c) vid4_progress_pane_g

0x9d07,	// (0x00074e53) vid4_progress_pane_t1

0x9d1c,	// (0x00074e68) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0007ac17) vid4_progress_pane_t

0x9d48,	// (0x00074e94) wait_bar_pane_cp07

0xcdd7,	// (0x00077f23) blid_firmament_pane_ParamLimits

0xce1a,	// (0x00077f66) popup_blid_sat_info2_window_g1

0xce3e,	// (0x00077f8a) popup_blid_sat_info2_window_t3

0xce4c,	// (0x00077f98) popup_blid_sat_info2_window_t4

0xce5a,	// (0x00077fa6) popup_blid_sat_info2_window_t5

0xce68,	// (0x00077fb4) popup_blid_sat_info2_window_t6

0xce78,	// (0x00077fc4) popup_blid_sat_info2_window_t7

0xce86,	// (0x00077fd2) popup_blid_sat_info2_window_t8

0xce94,	// (0x00077fe0) popup_blid_sat_info2_window_t9

0xcea2,	// (0x00077fee) popup_blid_sat_info2_window_t10

0xcf66,	// (0x000780b2) aid_firma_cardinal_ParamLimits

0xcf7a,	// (0x000780c6) blid_firmament_pane_t1_ParamLimits

0xcf91,	// (0x000780dd) blid_firmament_pane_t2_ParamLimits

0xcfa8,	// (0x000780f4) blid_firmament_pane_t3_ParamLimits

0xcfbf,	// (0x0007810b) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0007a82a) blid_firmament_pane_t_ParamLimits

0xcfd6,	// (0x00078122) blid_sat_info_pane_ParamLimits

0x941f,	// (0x0007456b) main_cam_set_pane_ParamLimits

0x5214,	// (0x00070360) aid_size_cell_colour_35_ParamLimits

0x5234,	// (0x00070380) aid_size_cell_colour_112_ParamLimits

0x5254,	// (0x000703a0) aid_size_cell_effect_ParamLimits

0xcbdc,	// (0x00077d28) bg_tb_trans_pane_cp02_ParamLimits

0xb2d2,	// (0x0007641e) heading_imed_pane_ParamLimits

0x5274,	// (0x000703c0) listscroll_imed_pane_ParamLimits

0xc1f6,	// (0x00077342) popup_call2_audio_first_window_g5_ParamLimits

0xc1f6,	// (0x00077342) popup_call2_audio_first_window_g5

0x582e,	// (0x0007097a) aid_size_touch_image3_arrow_left_ParamLimits

0x582e,	// (0x0007097a) aid_size_touch_image3_arrow_left

0x585a,	// (0x000709a6) aid_size_touch_image3_arrow_right_ParamLimits

0x585a,	// (0x000709a6) aid_size_touch_image3_arrow_right

0x9d32,	// (0x00074e7e) vid4_progress_pane_t3

0x55a0,	// (0x000706ec) main_hwr_training_symbol_option_pane_ParamLimits

0x55a0,	// (0x000706ec) main_hwr_training_symbol_option_pane

0xd7e9,	// (0x00078935) popup_hwr_training_preview_window_ParamLimits

0xd7e9,	// (0x00078935) popup_hwr_training_preview_window

0x55c0,	// (0x0007070c) hwr_training_navi_pane_g5_ParamLimits

0x55c0,	// (0x0007070c) hwr_training_navi_pane_g5

0xda2f,	// (0x00078b7b) popup_char_count_window

0x941f,	// (0x0007456b) bg_popup_sub_pane_cp20_ParamLimits

0x67ad,	// (0x000718f9) list_vitu2_match_list_pane_ParamLimits

0x67bc,	// (0x00071908) vitu2_page_scroll_pane_ParamLimits

0x67bc,	// (0x00071908) vitu2_page_scroll_pane

0xdeeb,	// (0x00079037) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdeeb,	// (0x00079037) list_single_hwr_training_symbol_option_pane

0xdefe,	// (0x0007904a) list_single_hwr_training_symbol_option_pane_g1

0xdf06,	// (0x00079052) list_single_hwr_training_symbol_option_pane_t1

0xdf14,	// (0x00079060) bg_button_pane_cp023

0xdf1d,	// (0x00079069) bg_button_pane_cp024

0x6e46,	// (0x00071f92) vitu2_page_scroll_pane_g1

0x6e4e,	// (0x00071f9a) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0007ac1e) vitu2_page_scroll_pane_g

0x6e56,	// (0x00071fa2) vitu2_page_scroll_pane_t1

0xd59b,	// (0x000786e7) popup_char_count_window_g1

0xdf50,	// (0x0007909c) popup_char_count_window_g2

0xdf59,	// (0x000790a5) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0007ac23) popup_char_count_window_g

0xdf62,	// (0x000790ae) popup_char_count_window_t1

0x942d,	// (0x00074579) main_vded2_pane

0xd4d7,	// (0x00078623) aid_size_cell_imed_line

0xd4e1,	// (0x0007862d) grid_imed_line_width_pane

0x9be3,	// (0x00074d2f) vid4_indicators_pane_g4

0xdf70,	// (0x000790bc) cell_imed_line_width_pane_ParamLimits

0xdf70,	// (0x000790bc) cell_imed_line_width_pane

0xdf84,	// (0x000790d0) cell_imed_line_width_pane_g1

0xd7a6,	// (0x000788f2) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0007ac2a) cell_imed_line_width_pane_g

0x6e65,	// (0x00071fb1) main_vded2_pane_g1_ParamLimits

0x6e65,	// (0x00071fb1) main_vded2_pane_g1

0x6e7b,	// (0x00071fc7) main_vded2_pane_g2_ParamLimits

0x6e7b,	// (0x00071fc7) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0007ac2f) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0007ac2f) main_vded2_pane_g

0x6e8d,	// (0x00071fd9) vded2_slider_pane_ParamLimits

0x6e8d,	// (0x00071fd9) vded2_slider_pane

0x6e9d,	// (0x00071fe9) aid_size_touch_vded2_end

0x6ea7,	// (0x00071ff3) aid_size_touch_vded2_playhead

0xdf8d,	// (0x000790d9) aid_size_touch_vded2_start

0xdf95,	// (0x000790e1) vded2_slider_bg_pane

0xdf9e,	// (0x000790ea) vded2_slider_pane_g1

0xdfa7,	// (0x000790f3) vded2_slider_pane_g2

0x6eb1,	// (0x00071ffd) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0007ac34) vded2_slider_pane_g

0xdfaf,	// (0x000790fb) vded2_slider_bg_pane_g1

0xdfb8,	// (0x00079104) vded2_slider_bg_pane_g2

0xdfc1,	// (0x0007910d) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0007ac3b) vded2_slider_bg_pane_g

0x2f9b,	// (0x0006e0e7) aid_postcard_touch_down_pane_ParamLimits

0x2f9b,	// (0x0006e0e7) aid_postcard_touch_down_pane

0x2fb1,	// (0x0006e0fd) aid_postcard_touch_up_pane_ParamLimits

0x2fb1,	// (0x0006e0fd) aid_postcard_touch_up_pane

0x942d,	// (0x00074579) main_blid2_pane

0x971d,	// (0x00074869) popup_blid2_search_window

0x93a7,	// (0x000744f3) blid2_gps_pane

0x93a7,	// (0x000744f3) blid2_navig_pane

0x93a7,	// (0x000744f3) blid2_search_pane

0x93a7,	// (0x000744f3) blid2_tripm_pane

0x6ebc,	// (0x00072008) blid2_search_pane_g1_ParamLimits

0x6ebc,	// (0x00072008) blid2_search_pane_g1

0x6ed4,	// (0x00072020) blid2_search_pane_t1_ParamLimits

0x6ed4,	// (0x00072020) blid2_search_pane_t1

0x6ee6,	// (0x00072032) aid_size_cell_blid2_gps_ParamLimits

0x6ee6,	// (0x00072032) aid_size_cell_blid2_gps

0x6efe,	// (0x0007204a) blid2_gps_pane_g1_ParamLimits

0x6efe,	// (0x0007204a) blid2_gps_pane_g1

0x6f12,	// (0x0007205e) grid_blid2_satellite_pane_ParamLimits

0x6f12,	// (0x0007205e) grid_blid2_satellite_pane

0x6f2c,	// (0x00072078) blid2_navig_pane_g1_ParamLimits

0x6f2c,	// (0x00072078) blid2_navig_pane_g1

0x6f38,	// (0x00072084) blid2_navig_pane_t1_ParamLimits

0x6f38,	// (0x00072084) blid2_navig_pane_t1

0x6f53,	// (0x0007209f) blid2_navig_pane_t2_ParamLimits

0x6f53,	// (0x0007209f) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0007ac42) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0007ac42) blid2_navig_pane_t

0x6f6e,	// (0x000720ba) blid2_navig_ring_pane_ParamLimits

0x6f6e,	// (0x000720ba) blid2_navig_ring_pane

0x6f87,	// (0x000720d3) blid2_speed_pane_ParamLimits

0x6f87,	// (0x000720d3) blid2_speed_pane

0x6f93,	// (0x000720df) blid2_tripm_pane_g1_ParamLimits

0x6f93,	// (0x000720df) blid2_tripm_pane_g1

0x6fae,	// (0x000720fa) blid2_tripm_pane_g2_ParamLimits

0x6fae,	// (0x000720fa) blid2_tripm_pane_g2

0x6fc2,	// (0x0007210e) blid2_tripm_pane_g3_ParamLimits

0x6fc2,	// (0x0007210e) blid2_tripm_pane_g3

0x6fd6,	// (0x00072122) blid2_tripm_pane_g4_ParamLimits

0x6fd6,	// (0x00072122) blid2_tripm_pane_g4

0x6fea,	// (0x00072136) blid2_tripm_pane_g5_ParamLimits

0x6fea,	// (0x00072136) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0007ac47) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0007ac47) blid2_tripm_pane_g

0x7010,	// (0x0007215c) blid2_tripm_pane_t1_ParamLimits

0x7010,	// (0x0007215c) blid2_tripm_pane_t1

0x702b,	// (0x00072177) blid2_tripm_pane_t2_ParamLimits

0x702b,	// (0x00072177) blid2_tripm_pane_t2

0x7044,	// (0x00072190) blid2_tripm_pane_t3_ParamLimits

0x7044,	// (0x00072190) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0007ac54) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0007ac54) blid2_tripm_pane_t

0x708b,	// (0x000721d7) cell_blid2_satellite_pane_ParamLimits

0x708b,	// (0x000721d7) cell_blid2_satellite_pane

0x70a9,	// (0x000721f5) cell_blid2_satellite_pane_g1

0xdfca,	// (0x00079116) cell_blid2_satellite_pane_t1

0xcfe6,	// (0x00078132) blid2_speed_pane_g1

0xdfd8,	// (0x00079124) blid2_speed_pane_t1

0xdfe6,	// (0x00079132) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0007ac5d) blid2_speed_pane_t

0xcfe6,	// (0x00078132) blid2_navig_ring_pane_g1

0x70b2,	// (0x000721fe) blid2_navig_ring_pane_g2

0x70ba,	// (0x00072206) blid2_navig_ring_pane_g3

0x70c2,	// (0x0007220e) blid2_navig_ring_pane_g4

0x70ca,	// (0x00072216) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0007ac62) blid2_navig_ring_pane_g

0x93a7,	// (0x000744f3) bg_popup_window_pane_cp011

0xdff4,	// (0x00079140) popup_blid2_search_window_g1

0xdffc,	// (0x00079148) popup_blid2_search_window_t1

0xe00a,	// (0x00079156) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0007ac6d) popup_blid2_search_window_t

0xafac,	// (0x000760f8) main_browser_pane_g1

0xac93,	// (0x00075ddf) main_browser_pane_ParamLimits

0x941f,	// (0x0007456b) bg_button_pane_cp011_ParamLimits

0x604e,	// (0x0007119a) cell_vitu2_function_pane_g1_ParamLimits

0xcbdc,	// (0x00077d28) bg_popup_sub_pane_cp22_ParamLimits

0x6956,	// (0x00071aa2) input_focus_pane_cp08_ParamLimits

0x696d,	// (0x00071ab9) popup_vitu2_query_button_pane_ParamLimits

0x696d,	// (0x00071ab9) popup_vitu2_query_button_pane

0x697e,	// (0x00071aca) popup_vitu2_query_input_button_pane

0xdca2,	// (0x00078dee) popup_vitu2_query_window_g1_ParamLimits

0x6988,	// (0x00071ad4) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0007ab6e) popup_vitu2_query_window_g_ParamLimits

0x93a7,	// (0x000744f3) bg_button_pane_cp026

0x70d2,	// (0x0007221e) popup_vitu2_query_input_button_pane_g1

0x93a7,	// (0x000744f3) bg_button_pane_cp025

0xe018,	// (0x00079164) popup_vitu2_query_button_pane_t1

0x463b,	// (0x0006f787) main_mp3_pane_t6

0x4649,	// (0x0006f795) popup_slider_window_cp01

0x9b49,	// (0x00074c95) cam4_battery_pane

0x9ba2,	// (0x00074cee) cam4_battery_pane_cp02

0x9ce1,	// (0x00074e2d) cam4_battery_pane_cp01

0x9ce1,	// (0x00074e2d) cam4_battery_pane_cp03

0xd8e7,	// (0x00078a33) cam4_battery_pane_g1

0xcfe6,	// (0x00078132) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0007ac72) cam4_battery_pane_g

0xceb0,	// (0x00077ffc) popup_blid_sat_info2_window_t11

0x2957,	// (0x0006daa3) aid_size_touch_mv_arrow_left_ParamLimits

0x2980,	// (0x0006dacc) aid_size_touch_mv_arrow_right_ParamLimits

0xb70b,	// (0x00076857) navi_pane_g1_ParamLimits

0x29bf,	// (0x0006db0b) navi_pane_g2_ParamLimits

0x29ed,	// (0x0006db39) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0007a53c) navi_pane_g_ParamLimits

0x2a45,	// (0x0006db91) navi_pane_mv_t1_ParamLimits

0x5280,	// (0x000703cc) grid_imed_effect_pane_ParamLimits

0x14ce,	// (0x0006c61a) aid_placing_vt_slider_lsc

0xaefb,	// (0x00076047) aid_placing_vt_slider_prt

0xb07c,	// (0x000761c8) bg_tb_trans_pane_cp01_ParamLimits

0xd166,	// (0x000782b2) popup_image_details_window_g1_ParamLimits

0xd179,	// (0x000782c5) popup_image_details_window_g2_ParamLimits

0xd18e,	// (0x000782da) popup_image_details_window_g3_ParamLimits

0xd18e,	// (0x000782da) popup_image_details_window_g3

0xf723,	// (0x0007a86f) popup_image_details_window_g_ParamLimits

0xd1a2,	// (0x000782ee) popup_image_details_window_t1_ParamLimits

0xd1b4,	// (0x00078300) popup_image_details_window_t2_ParamLimits

0xd1cd,	// (0x00078319) popup_image_details_window_t3_ParamLimits

0xd1e1,	// (0x0007832d) popup_image_details_window_t4_ParamLimits

0xd1fc,	// (0x00078348) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0007a876) popup_image_details_window_t_ParamLimits

0x6d00,	// (0x00071e4c) cl_header_name_pane_ParamLimits

0x6d00,	// (0x00071e4c) cl_header_name_pane

0x70da,	// (0x00072226) cl_header_name_pane_t1_ParamLimits

0x70da,	// (0x00072226) cl_header_name_pane_t1

0x70fb,	// (0x00072247) cl_header_name_pane_t2_ParamLimits

0x70fb,	// (0x00072247) cl_header_name_pane_t2

0x713d,	// (0x00072289) cl_header_name_pane_t3_ParamLimits

0x713d,	// (0x00072289) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0007ac77) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0007ac77) cl_header_name_pane_t

0x2a16,	// (0x0006db62) navi_pane_mv_g2_ParamLimits

0xda09,	// (0x00078b55) field_vitu2_entry_pane_g1_ParamLimits

0xda15,	// (0x00078b61) field_vitu2_entry_pane_g2_ParamLimits

0xda21,	// (0x00078b6d) field_vitu2_entry_pane_g3_ParamLimits

0xda21,	// (0x00078b6d) field_vitu2_entry_pane_g3

0xf921,	// (0x0007aa6d) field_vitu2_entry_pane_g_ParamLimits

0x5fca,	// (0x00071116) cell_vitu2_itu_pane_g1_ParamLimits

0x5fda,	// (0x00071126) cell_vitu2_itu_pane_g2_ParamLimits

0x5fda,	// (0x00071126) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0007aa79) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0007aa79) cell_vitu2_itu_pane_g

0x941f,	// (0x0007456b) bg_vkb2_func_pane_cp05_ParamLimits

0x941f,	// (0x0007456b) bg_vkb2_func_pane_cp05

0x941f,	// (0x0007456b) bg_vkb2_func_pane_cp03

0x941f,	// (0x0007456b) bg_vkb2_func_pane_cp04

0x941f,	// (0x0007456b) bg_vkb2_func_pane_cp10_ParamLimits

0x941f,	// (0x0007456b) bg_vkb2_func_pane_cp10

0x6ca2,	// (0x00071dee) bg_vkb2_func_pane_cp08

0x6c88,	// (0x00071dd4) bg_vkb2_func_pane_cp06

0x6c96,	// (0x00071de2) bg_vkb2_func_pane_cp07

0xdf26,	// (0x00079072) bg_vkb2_func_pane_cp11_ParamLimits

0xdf26,	// (0x00079072) bg_vkb2_func_pane_cp11

0xdf3b,	// (0x00079087) bg_vkb2_func_pane_cp12_ParamLimits

0xdf3b,	// (0x00079087) bg_vkb2_func_pane_cp12

0x93a7,	// (0x000744f3) bg_vkb2_func_pane_cp09

0xda41,	// (0x00078b8d) bg_vkb2_func_pane_g1

0xb10e,	// (0x0007625a) bg_vkb2_func_pane_g2

0xda49,	// (0x00078b95) bg_vkb2_func_pane_g3

0xda51,	// (0x00078b9d) bg_vkb2_func_pane_g4

0xdc65,	// (0x00078db1) bg_vkb2_func_pane_g5

0xda69,	// (0x00078bb5) bg_vkb2_func_pane_g6

0xda71,	// (0x00078bbd) bg_vkb2_func_pane_g7

0xda61,	// (0x00078bad) bg_vkb2_func_pane_g8

0xb0ee,	// (0x0007623a) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0007ac7e) bg_vkb2_func_pane_g

0x6ffe,	// (0x0007214a) blid2_tripm_pane_g6_ParamLimits

0x6ffe,	// (0x0007214a) blid2_tripm_pane_g6

0xd8a1,	// (0x000789ed) mp4_progress_pane_g1

0x7077,	// (0x000721c3) blid2_tripm_values_pane_ParamLimits

0x7077,	// (0x000721c3) blid2_tripm_values_pane

0x716e,	// (0x000722ba) blid2_tripm_values_pane_t1

0x717c,	// (0x000722c8) blid2_tripm_values_pane_t2

0x718a,	// (0x000722d6) blid2_tripm_values_pane_t3

0x7198,	// (0x000722e4) blid2_tripm_values_pane_t4

0x71a6,	// (0x000722f2) blid2_tripm_values_pane_t5

0x71b4,	// (0x00072300) blid2_tripm_values_pane_t6

0x71c2,	// (0x0007230e) blid2_tripm_values_pane_t7

0x71d0,	// (0x0007231c) blid2_tripm_values_pane_t8

0x71de,	// (0x0007232a) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0007ac91) blid2_tripm_values_pane_t

0x1510,	// (0x0006c65c) call_video_pane_t1_ParamLimits

0x152e,	// (0x0006c67a) call_video_pane_t2_ParamLimits

0xf279,	// (0x0007a3c5) call_video_pane_t_ParamLimits

0x2f19,	// (0x0006e065) msg_header_pane_g1_ParamLimits

0xb92b,	// (0x00076a77) msg_header_pane_g2_ParamLimits

0xb92b,	// (0x00076a77) msg_header_pane_g2

0x0001,

0xf493,	// (0x0007a5df) msg_header_pane_g_ParamLimits

0xf493,	// (0x0007a5df) msg_header_pane_g

0xac93,	// (0x00075ddf) main_clock2_pane_ParamLimits

0x4f77,	// (0x000700c3) grid_clock2_toolbar_pane_ParamLimits

0x4f77,	// (0x000700c3) grid_clock2_toolbar_pane

0x4f77,	// (0x000700c3) listscroll_clock2_pane_ParamLimits

0x4f77,	// (0x000700c3) listscroll_clock2_pane

0x5072,	// (0x000701be) main_clock2_pane_t3_ParamLimits

0x5072,	// (0x000701be) main_clock2_pane_t3

0x5096,	// (0x000701e2) main_clock2_pane_t4_ParamLimits

0x5096,	// (0x000701e2) main_clock2_pane_t4

0xe026,	// (0x00079172) cell_clock2_toolbar_pane

0xe02e,	// (0x0007917a) cell_clock2_toolbar_pane_cp01

0xe02e,	// (0x0007917a) cell_clock2_toolbar_pane_cp02

0xe036,	// (0x00079182) cell_clock2_toolbar_pane_cp03

0xe03e,	// (0x0007918a) list_clock2_pane

0xb662,	// (0x000767ae) scroll_pane_cp10

0xe046,	// (0x00079192) list_single_clock2_pane_ParamLimits

0xe046,	// (0x00079192) list_single_clock2_pane

0xb7ab,	// (0x000768f7) list_highlight_pane_cp08

0xe053,	// (0x0007919f) list_single_clock2_pane_t1

0xe061,	// (0x000791ad) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0007aca4) list_single_clock2_pane_t

0x93a7,	// (0x000744f3) bg_button_pane_cp10

0xe06f,	// (0x000791bb) cell_clock2_toolbar_pane_g1

0x2f27,	// (0x0006e073) aid_main_viewer_pane_g1_ParamLimits

0x2f27,	// (0x0006e073) aid_main_viewer_pane_g1

0x2f35,	// (0x0006e081) aid_main_viewer_pane_g2_ParamLimits

0x2f35,	// (0x0006e081) aid_main_viewer_pane_g2

0x2f43,	// (0x0006e08f) aid_main_viewer_pane_g3_ParamLimits

0x2f43,	// (0x0006e08f) aid_main_viewer_pane_g3

0x2f52,	// (0x0006e09e) aid_main_viewer_pane_g4_ParamLimits

0x2f52,	// (0x0006e09e) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0007a5f0) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0007a5f0) aid_main_viewer_pane_g

0x3860,	// (0x0006e9ac) main_calc_pane_ParamLimits

0x3886,	// (0x0006e9d2) main_dialer2_pane_ParamLimits

0x942d,	// (0x00074579) main_cam6_pane

0x942d,	// (0x00074579) main_vid6_pane

0x4f83,	// (0x000700cf) listscroll_gen_pane_cp06_ParamLimits

0x4f83,	// (0x000700cf) listscroll_gen_pane_cp06

0x50b9,	// (0x00070205) main_clock2_pane_t5_ParamLimits

0x50b9,	// (0x00070205) main_clock2_pane_t5

0x5115,	// (0x00070261) aid_call2_pane_cp10_ParamLimits

0x5127,	// (0x00070273) aid_call_pane_cp10_ParamLimits

0xb6e0,	// (0x0007682c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb6e0,	// (0x0007682c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5139,	// (0x00070285) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5139,	// (0x00070285) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb6e0,	// (0x0007682c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0007a926) popup_clock_analogue_window_cp10_g_ParamLimits

0x514b,	// (0x00070297) popup_clock_analogue_window_cp10_t1_ParamLimits

0x57db,	// (0x00070927) cell_dialer2_keypad_pane_g2_ParamLimits

0x57db,	// (0x00070927) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0007aa0c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0007aa0c) cell_dialer2_keypad_pane_g

0x57f7,	// (0x00070943) cell_dialer2_keypad_pane_t1

0x6364,	// (0x000714b0) main_cset_text2_pane_ParamLimits

0x6364,	// (0x000714b0) main_cset_text2_pane

0xde8e,	// (0x00078fda) area_vitu2_query_pane_g1_ParamLimits

0x6c27,	// (0x00071d73) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0007abc1) area_vitu2_query_pane_g_ParamLimits

0x9f36,	// (0x00075082) area_vitu2_query_pane_t7_ParamLimits

0x9f36,	// (0x00075082) area_vitu2_query_pane_t7

0x6c88,	// (0x00071dd4) bg_button_pane_cp018_ParamLimits

0x6c96,	// (0x00071de2) bg_button_pane_cp021_ParamLimits

0x6ca2,	// (0x00071dee) bg_button_pane_cp022_ParamLimits

0x6ca2,	// (0x00071dee) bg_vkb2_func_pane_cp08_ParamLimits

0x6c88,	// (0x00071dd4) bg_vkb2_func_pane_cp06_ParamLimits

0x6c96,	// (0x00071de2) bg_vkb2_func_pane_cp07_ParamLimits

0x6cb3,	// (0x00071dff) input_focus_pane_cp09_ParamLimits

0x9d58,	// (0x00074ea4) cam6_autofocus_pane_ParamLimits

0x9d58,	// (0x00074ea4) cam6_autofocus_pane

0x71ec,	// (0x00072338) cam6_image_uncrop_pane_ParamLimits

0x71ec,	// (0x00072338) cam6_image_uncrop_pane

0x71fb,	// (0x00072347) cam6_indi_pane_ParamLimits

0x71fb,	// (0x00072347) cam6_indi_pane

0x7211,	// (0x0007235d) cam6_mode_pane_ParamLimits

0x7211,	// (0x0007235d) cam6_mode_pane

0x7223,	// (0x0007236f) cam6_timer_pane_ParamLimits

0x7223,	// (0x0007236f) cam6_timer_pane

0x722f,	// (0x0007237b) cam6_zoom_pane_ParamLimits

0x722f,	// (0x0007237b) cam6_zoom_pane

0x723b,	// (0x00072387) cam6_mode_pane_g1_ParamLimits

0x723b,	// (0x00072387) cam6_mode_pane_g1

0x724b,	// (0x00072397) cam6_mode_pane_g2_ParamLimits

0x724b,	// (0x00072397) cam6_mode_pane_g2

0x725b,	// (0x000723a7) cam6_mode_pane_g3_ParamLimits

0x725b,	// (0x000723a7) cam6_mode_pane_g3

0x726b,	// (0x000723b7) cam6_mode_pane_g4_ParamLimits

0x726b,	// (0x000723b7) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0007aca9) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0007aca9) cam6_mode_pane_g

0xe077,	// (0x000791c3) bg_tb_trans_pane_cp08_ParamLimits

0xe077,	// (0x000791c3) bg_tb_trans_pane_cp08

0xe085,	// (0x000791d1) cam6_battery_pane_ParamLimits

0xe085,	// (0x000791d1) cam6_battery_pane

0xe09b,	// (0x000791e7) cam6_indi_pane_g1_ParamLimits

0xe09b,	// (0x000791e7) cam6_indi_pane_g1

0xe0ad,	// (0x000791f9) cam6_indi_pane_g2_ParamLimits

0xe0ad,	// (0x000791f9) cam6_indi_pane_g2

0xe0bf,	// (0x0007920b) cam6_indi_pane_g3_ParamLimits

0xe0bf,	// (0x0007920b) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0007acb2) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0007acb2) cam6_indi_pane_g

0xe0d1,	// (0x0007921d) cam6_indi_pane_t1_ParamLimits

0xe0d1,	// (0x0007921d) cam6_indi_pane_t1

0x727b,	// (0x000723c7) cam6_autofocus_pane_g1

0x7283,	// (0x000723cf) cam6_autofocus_pane_g2

0x728b,	// (0x000723d7) cam6_autofocus_pane_g3

0x7293,	// (0x000723df) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0007acb9) cam6_autofocus_pane_g

0xe0f7,	// (0x00079243) cam6_timer_pane_g1

0xe0ff,	// (0x0007924b) cam6_timer_pane_t1

0xe10d,	// (0x00079259) cam6_zoom_cont_pane

0xe115,	// (0x00079261) cam6_zoom_pane_g1

0xe11d,	// (0x00079269) cam6_zoom_pane_g2

0x729b,	// (0x000723e7) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0007acc2) cam6_zoom_pane_g

0xcfe6,	// (0x00078132) cam6_battery_pane_g1

0xcfe6,	// (0x00078132) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0007a833) cam6_battery_pane_g

0xe125,	// (0x00079271) cam6_zoom_cont_pane_g1

0xe12e,	// (0x0007927a) cam6_zoom_cont_pane_g2

0xe16d,	// (0x000792b9) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0007acc9) cam6_zoom_cont_pane_g

0x72b8,	// (0x00072404) cam6_mode_pane_cp_ParamLimits

0x72b8,	// (0x00072404) cam6_mode_pane_cp

0x72ca,	// (0x00072416) cam6_zoom_pane_cp_ParamLimits

0x72ca,	// (0x00072416) cam6_zoom_pane_cp

0x72d6,	// (0x00072422) vid6_image_uncrop_cif_pane_ParamLimits

0x72d6,	// (0x00072422) vid6_image_uncrop_cif_pane

0x72e6,	// (0x00072432) vid6_image_uncrop_nhd_pane_ParamLimits

0x72e6,	// (0x00072432) vid6_image_uncrop_nhd_pane

0x72f5,	// (0x00072441) vid6_image_uncrop_vga_pane_ParamLimits

0x72f5,	// (0x00072441) vid6_image_uncrop_vga_pane

0x7304,	// (0x00072450) vid6_image_uncrop_wvga_pane_ParamLimits

0x7304,	// (0x00072450) vid6_image_uncrop_wvga_pane

0x7313,	// (0x0007245f) vid6_indi_pane_ParamLimits

0x7313,	// (0x0007245f) vid6_indi_pane

0xe077,	// (0x000791c3) bg_tb_trans_pane_cp09_ParamLimits

0xe077,	// (0x000791c3) bg_tb_trans_pane_cp09

0xe185,	// (0x000792d1) cam6_battery_pane_cp_ParamLimits

0xe185,	// (0x000792d1) cam6_battery_pane_cp

0xe191,	// (0x000792dd) vid6_indi_pane_g1_ParamLimits

0xe191,	// (0x000792dd) vid6_indi_pane_g1

0xe1a3,	// (0x000792ef) vid6_indi_pane_g2_ParamLimits

0xe1a3,	// (0x000792ef) vid6_indi_pane_g2

0xe1b5,	// (0x00079301) vid6_indi_pane_g3_ParamLimits

0xe1b5,	// (0x00079301) vid6_indi_pane_g3

0xe1ca,	// (0x00079316) vid6_indi_pane_g4_ParamLimits

0xe1ca,	// (0x00079316) vid6_indi_pane_g4

0xe1df,	// (0x0007932b) vid6_indi_pane_g5_ParamLimits

0xe1df,	// (0x0007932b) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0007acd0) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0007acd0) vid6_indi_pane_g

0xe1f9,	// (0x00079345) vid6_indi_pane_t1_ParamLimits

0xe1f9,	// (0x00079345) vid6_indi_pane_t1

0xe20f,	// (0x0007935b) vid6_indi_pane_t2_ParamLimits

0xe20f,	// (0x0007935b) vid6_indi_pane_t2

0xe237,	// (0x00079383) vid6_indi_pane_t3_ParamLimits

0xe237,	// (0x00079383) vid6_indi_pane_t3

0xe25f,	// (0x000793ab) vid6_indi_pane_t4_ParamLimits

0xe25f,	// (0x000793ab) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0007acdb) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0007acdb) vid6_indi_pane_t

0xe283,	// (0x000793cf) wait_bar_pane_cp08

0x732b,	// (0x00072477) main_cset_text2_pane_t1_ParamLimits

0x732b,	// (0x00072477) main_cset_text2_pane_t1

0x72a3,	// (0x000723ef) listscroll_gen_pane_cp06_t1_ParamLimits

0x72a3,	// (0x000723ef) listscroll_gen_pane_cp06_t1

0x942d,	// (0x00074579) main_cam6_set_pane

0x9b3b,	// (0x00074c87) bg_tb_trans_pane_cp06_ParamLimits

0x9b51,	// (0x00074c9d) cam4_indicators_pane_g1_ParamLimits

0x9b62,	// (0x00074cae) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0007aa49) cam4_indicators_pane_g_ParamLimits

0x9b80,	// (0x00074ccc) cam4_indicators_pane_t1_ParamLimits

0x941f,	// (0x0007456b) bg_tb_trans_pane_cp07_ParamLimits

0x9baa,	// (0x00074cf6) vid4_indicators_pane_g1_ParamLimits

0x9bbe,	// (0x00074d0a) vid4_indicators_pane_g2_ParamLimits

0x9bd2,	// (0x00074d1e) vid4_indicators_pane_g3_ParamLimits

0x9be3,	// (0x00074d2f) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0007aa5b) vid4_indicators_pane_g_ParamLimits

0x9bff,	// (0x00074d4b) vid4_indicators_pane_t1_ParamLimits

0x6df3,	// (0x00071f3f) vid4_progress_pane_g1_ParamLimits

0x6e05,	// (0x00071f51) vid4_progress_pane_g2_ParamLimits

0xb34b,	// (0x00076497) vid4_progress_pane_g3_ParamLimits

0x9ce9,	// (0x00074e35) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0007ac0c) vid4_progress_pane_g_ParamLimits

0x9d07,	// (0x00074e53) vid4_progress_pane_t1_ParamLimits

0x9d1c,	// (0x00074e68) vid4_progress_pane_t2_ParamLimits

0x9d32,	// (0x00074e7e) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0007ac17) vid4_progress_pane_t_ParamLimits

0x9d48,	// (0x00074e94) wait_bar_pane_cp07_ParamLimits

0x734a,	// (0x00072496) main_cam6_set_pane_g2_ParamLimits

0x734a,	// (0x00072496) main_cam6_set_pane_g2

0x736e,	// (0x000724ba) main_cset6_listscroll_pane_ParamLimits

0x736e,	// (0x000724ba) main_cset6_listscroll_pane

0x738a,	// (0x000724d6) main_cset6_slider_pane_ParamLimits

0x738a,	// (0x000724d6) main_cset6_slider_pane

0x73a0,	// (0x000724ec) main_cset6_text2_pane_ParamLimits

0x73a0,	// (0x000724ec) main_cset6_text2_pane

0xe292,	// (0x000793de) main_cset6_text_pane

0xe29a,	// (0x000793e6) main_cset_list_pane_copy1_ParamLimits

0xe29a,	// (0x000793e6) main_cset_list_pane_copy1

0xe2aa,	// (0x000793f6) scroll_pane_cp028_copy1

0x73ae,	// (0x000724fa) cset_list_set_pane_copy1

0x73c0,	// (0x0007250c) aid_position_infowindow_above_copy1

0x73c8,	// (0x00072514) aid_position_infowindow_below_copy1

0x73d0,	// (0x0007251c) cset_list_set_pane_g1_copy1

0x73d8,	// (0x00072524) cset_list_set_pane_g3_copy1_ParamLimits

0x73d8,	// (0x00072524) cset_list_set_pane_g3_copy1

0x73e7,	// (0x00072533) cset_list_set_pane_t1_copy1_ParamLimits

0x73e7,	// (0x00072533) cset_list_set_pane_t1_copy1

0xb07c,	// (0x000761c8) list_highlight_pane_cp021_copy1_ParamLimits

0xb07c,	// (0x000761c8) list_highlight_pane_cp021_copy1

0xe2b3,	// (0x000793ff) cset6_slider_pane_ParamLimits

0xe2b3,	// (0x000793ff) cset6_slider_pane

0xe2df,	// (0x0007942b) main_cset6_slider_pane_g1_ParamLimits

0xe2df,	// (0x0007942b) main_cset6_slider_pane_g1

0x73fc,	// (0x00072548) main_cset6_slider_pane_g2_ParamLimits

0x73fc,	// (0x00072548) main_cset6_slider_pane_g2

0xe307,	// (0x00079453) main_cset6_slider_pane_g3_ParamLimits

0xe307,	// (0x00079453) main_cset6_slider_pane_g3

0x7424,	// (0x00072570) main_cset6_slider_pane_g4_ParamLimits

0x7424,	// (0x00072570) main_cset6_slider_pane_g4

0x7430,	// (0x0007257c) main_cset6_slider_pane_g5_ParamLimits

0x7430,	// (0x0007257c) main_cset6_slider_pane_g5

0xdb70,	// (0x00078cbc) main_cset6_slider_pane_g7_ParamLimits

0xdb70,	// (0x00078cbc) main_cset6_slider_pane_g7

0xdb7c,	// (0x00078cc8) main_cset6_slider_pane_g8_ParamLimits

0xdb7c,	// (0x00078cc8) main_cset6_slider_pane_g8

0x6411,	// (0x0007155d) main_cset6_slider_pane_g9_ParamLimits

0x6411,	// (0x0007155d) main_cset6_slider_pane_g9

0x641d,	// (0x00071569) main_cset6_slider_pane_g10_ParamLimits

0x641d,	// (0x00071569) main_cset6_slider_pane_g10

0x6429,	// (0x00071575) main_cset6_slider_pane_g11_ParamLimits

0x6429,	// (0x00071575) main_cset6_slider_pane_g11

0x6435,	// (0x00071581) main_cset6_slider_pane_g12_ParamLimits

0x6435,	// (0x00071581) main_cset6_slider_pane_g12

0x6441,	// (0x0007158d) main_cset6_slider_pane_g13_ParamLimits

0x6441,	// (0x0007158d) main_cset6_slider_pane_g13

0x644d,	// (0x00071599) main_cset6_slider_pane_g14_ParamLimits

0x644d,	// (0x00071599) main_cset6_slider_pane_g14

0x743c,	// (0x00072588) main_cset6_slider_pane_g15_ParamLimits

0x743c,	// (0x00072588) main_cset6_slider_pane_g15

0x6471,	// (0x000715bd) main_cset6_slider_pane_g16_ParamLimits

0x6471,	// (0x000715bd) main_cset6_slider_pane_g16

0x647d,	// (0x000715c9) main_cset6_slider_pane_g17_ParamLimits

0x647d,	// (0x000715c9) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0007ace4) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0007ace4) main_cset6_slider_pane_g

0xe313,	// (0x0007945f) main_cset6_slider_pane_t1_ParamLimits

0xe313,	// (0x0007945f) main_cset6_slider_pane_t1

0x746c,	// (0x000725b8) main_cset6_slider_pane_t2_ParamLimits

0x746c,	// (0x000725b8) main_cset6_slider_pane_t2

0x7497,	// (0x000725e3) main_cset6_slider_pane_t3_ParamLimits

0x7497,	// (0x000725e3) main_cset6_slider_pane_t3

0x74c2,	// (0x0007260e) main_cset6_slider_pane_t4_ParamLimits

0x74c2,	// (0x0007260e) main_cset6_slider_pane_t4

0x74ed,	// (0x00072639) main_cset6_slider_pane_t5_ParamLimits

0x74ed,	// (0x00072639) main_cset6_slider_pane_t5

0xe354,	// (0x000794a0) main_cset6_slider_pane_t7_ParamLimits

0xe354,	// (0x000794a0) main_cset6_slider_pane_t7

0x7518,	// (0x00072664) main_cset6_slider_pane_t8_ParamLimits

0x7518,	// (0x00072664) main_cset6_slider_pane_t8

0x753c,	// (0x00072688) main_cset6_slider_pane_t9_ParamLimits

0x753c,	// (0x00072688) main_cset6_slider_pane_t9

0x7560,	// (0x000726ac) main_cset6_slider_pane_t10_ParamLimits

0x7560,	// (0x000726ac) main_cset6_slider_pane_t10

0x7584,	// (0x000726d0) main_cset6_slider_pane_t11_ParamLimits

0x7584,	// (0x000726d0) main_cset6_slider_pane_t11

0xe38a,	// (0x000794d6) main_cset6_slider_pane_t14_ParamLimits

0xe38a,	// (0x000794d6) main_cset6_slider_pane_t14

0xe3c3,	// (0x0007950f) main_cset6_slider_pane_t15_ParamLimits

0xe3c3,	// (0x0007950f) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0007ad09) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0007ad09) main_cset6_slider_pane_t

0xe137,	// (0x00079283) cset_slider_pane_g1_copy1

0xe140,	// (0x0007928c) cset_slider_pane_g2_copy1

0xe149,	// (0x00079295) cset_slider_pane_g3_copy1

0x93a7,	// (0x000744f3) bg_popup_sub_pane_cp011_copy1

0xe3fc,	// (0x00079548) main_cset_text_pane_g1_copy1

0xdcb6,	// (0x00078e02) main_cset_text_pane_t1_copy1

0xdcc4,	// (0x00078e10) main_cset_text_pane_t2_copy1

0xdcd2,	// (0x00078e1e) main_cset_text_pane_t3_copy1

0xdce0,	// (0x00078e2c) main_cset_text_pane_t4_copy1

0xdcee,	// (0x00078e3a) main_cset_text_pane_t5_copy1

0xe404,	// (0x00079550) main_cset_text_pane_t6_copy1

0xe412,	// (0x0007955e) main_cset_text_pane_t7_copy1

0x7641,	// (0x0007278d) main_cset_text2_pane_t1_copy1

0x941f,	// (0x0007456b) main_ncimui_pane

0x3ac2,	// (0x0006ec0e) popup_query_ncimui_window_ParamLimits

0x3ac2,	// (0x0006ec0e) popup_query_ncimui_window

0x9864,	// (0x000749b0) field_cale_ev2_pane_g4_ParamLimits

0x9864,	// (0x000749b0) field_cale_ev2_pane_g4

0x56b7,	// (0x00070803) cell_video_dialer_keypad_pane_g2_ParamLimits

0x56b7,	// (0x00070803) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0007a9e7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0007a9e7) cell_video_dialer_keypad_pane_g

0x56cf,	// (0x0007081b) cell_video_dialer_keypad_pane_t1

0x93a7,	// (0x000744f3) bg_popup_window_pane_cp012

0xb523,	// (0x0007666f) heading_pane_cp06

0xe43e,	// (0x0007958a) ncim_query_content_pane

0x93a7,	// (0x000744f3) bg_popup_heading_pane_cp01

0xe446,	// (0x00079592) ncim_heading_pane_t1

0xe454,	// (0x000795a0) ncim_indicator_popup_pane

0xe466,	// (0x000795b2) ncim_query_button_pane

0xe47a,	// (0x000795c6) ncim_query_content_pane_t1

0xe48c,	// (0x000795d8) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0007ad4d) ncim_query_content_pane_t

0xe4c6,	// (0x00079612) ncim_query_list_pane

0xe4d8,	// (0x00079624) ncim_query_popup_pane

0xe454,	// (0x000795a0) ncim_indicator_popup_pane_ParamLimits

0x7785,	// (0x000728d1) ncim_query_content_pane_g1_ParamLimits

0x7785,	// (0x000728d1) ncim_query_content_pane_g1

0xe47a,	// (0x000795c6) ncim_query_content_pane_t1_ParamLimits

0xe48c,	// (0x000795d8) ncim_query_content_pane_t2_ParamLimits

0x7791,	// (0x000728dd) ncim_query_content_pane_t3_ParamLimits

0x7791,	// (0x000728dd) ncim_query_content_pane_t3

0x77b9,	// (0x00072905) ncim_query_content_pane_t4_ParamLimits

0x77b9,	// (0x00072905) ncim_query_content_pane_t4

0x77e1,	// (0x0007292d) ncim_query_content_pane_t5_ParamLimits

0x77e1,	// (0x0007292d) ncim_query_content_pane_t5

0xe49e,	// (0x000795ea) ncim_query_content_pane_t6_ParamLimits

0xe49e,	// (0x000795ea) ncim_query_content_pane_t6

0xfc01,	// (0x0007ad4d) ncim_query_content_pane_t_ParamLimits

0xe4c6,	// (0x00079612) ncim_query_list_pane_ParamLimits

0xe4d8,	// (0x00079624) ncim_query_popup_pane_ParamLimits

0xe4ec,	// (0x00079638) wait_bar_pane_cp04

0x93a7,	// (0x000744f3) input_focus_pane_cp011

0xe4f4,	// (0x00079640) ncim_query_popup_pane_t1

0xe502,	// (0x0007964e) ncim_list_query_list_pane_ParamLimits

0xe502,	// (0x0007964e) ncim_list_query_list_pane

0x93a7,	// (0x000744f3) bg_button_pane_cp027

0xe515,	// (0x00079661) ncim_query_button_pane_g1

0x93a7,	// (0x000744f3) list_highlight_pane_cp012

0xe51f,	// (0x0007966b) ncim_list_query_list_pane_g1

0xe527,	// (0x00079673) ncim_list_query_list_pane_t1

0x9b71,	// (0x00074cbd) cam4_indicators_pane_g3_ParamLimits

0x9b71,	// (0x00074cbd) cam4_indicators_pane_g3

0x9bef,	// (0x00074d3b) vid4_indicators_pane_g5_ParamLimits

0x9bef,	// (0x00074d3b) vid4_indicators_pane_g5

0x9cf8,	// (0x00074e44) vid4_progress_pane_g5_ParamLimits

0x9cf8,	// (0x00074e44) vid4_progress_pane_g5

0x7673,	// (0x000727bf) main_ncimui_pane_g1

0x76d9,	// (0x00072825) ncimui_group_query_pane_ParamLimits

0x76d9,	// (0x00072825) ncimui_group_query_pane

0x7721,	// (0x0007286d) ncimui_list_pane_ParamLimits

0x7721,	// (0x0007286d) ncimui_list_pane

0x7748,	// (0x00072894) ncimui_text_pane_ParamLimits

0x7748,	// (0x00072894) ncimui_text_pane

0x7809,	// (0x00072955) ncimui_text_pane_t1_ParamLimits

0x7809,	// (0x00072955) ncimui_text_pane_t1

0xe535,	// (0x00079681) ncimui_list_single_graphic_pane_ParamLimits

0xe535,	// (0x00079681) ncimui_list_single_graphic_pane

0x7827,	// (0x00072973) ncimui_query_pane_ParamLimits

0x7827,	// (0x00072973) ncimui_query_pane

0x93a7,	// (0x000744f3) list_highlight_pane_cp013

0xe545,	// (0x00079691) ncim_list_query_list_pane_t1_copy1

0xe51f,	// (0x0007966b) ncim_list_single_graphic_pane_g1

0xe553,	// (0x0007969f) ncim_query_button_pane_cp01

0xe55f,	// (0x000796ab) ncim_query_entry_pane_ParamLimits

0xe55f,	// (0x000796ab) ncim_query_entry_pane

0xe572,	// (0x000796be) ncimui_query_pane_g1

0xe57e,	// (0x000796ca) ncimui_query_pane_t1_ParamLimits

0xe57e,	// (0x000796ca) ncimui_query_pane_t1

0xb07c,	// (0x000761c8) input_focus_pane_cp012

0xe597,	// (0x000796e3) ncim_query_entry_pane_t1

0xac93,	// (0x00075ddf) main_im_pane_ParamLimits

0x941f,	// (0x0007456b) main_mobtv_pane_ParamLimits

0x941f,	// (0x0007456b) main_mobtv_pane

0x7454,	// (0x000725a0) main_cset6_slider_pane_g18_ParamLimits

0x7454,	// (0x000725a0) main_cset6_slider_pane_g18

0x7460,	// (0x000725ac) main_cset6_slider_pane_g19_ParamLimits

0x7460,	// (0x000725ac) main_cset6_slider_pane_g19

0x783a,	// (0x00072986) bg_main_mobtv_pane_ParamLimits

0x783a,	// (0x00072986) bg_main_mobtv_pane

0x7848,	// (0x00072994) main_mobtv_info_pane

0x7851,	// (0x0007299d) main_mobtv_loading_pane_ParamLimits

0x7851,	// (0x0007299d) main_mobtv_loading_pane

0xe5a9,	// (0x000796f5) main_mobtv_pg_channel_list_pane

0xe5b3,	// (0x000796ff) main_mobtv_pg_hdr_pane

0x785e,	// (0x000729aa) main_mobtv_programe_curr_pane_ParamLimits

0x785e,	// (0x000729aa) main_mobtv_programe_curr_pane

0x786b,	// (0x000729b7) main_mobtv_programe_next_pane_ParamLimits

0x786b,	// (0x000729b7) main_mobtv_programe_next_pane

0xe5bc,	// (0x00079708) popup_mobtv_noti_window

0xcfe6,	// (0x00078132) main_tv_pg_hdr_pane_g1

0xe5c4,	// (0x00079710) main_tv_pg_hdr_pane_g2

0xe5cc,	// (0x00079718) main_tv_pg_hdr_pane_g3

0xe5d4,	// (0x00079720) main_tv_pg_hdr_pane_g4

0xe5dc,	// (0x00079728) main_tv_pg_hdr_pane_g5

0xe5e6,	// (0x00079732) main_tv_pg_hdr_pane_g6

0xe5f0,	// (0x0007973c) main_tv_pg_hdr_pane_g7

0xe5fa,	// (0x00079746) main_tv_pg_hdr_pane_g8

0xe604,	// (0x00079750) main_tv_pg_hdr_pane_g9

0xe60e,	// (0x0007975a) main_tv_pg_hdr_pane_g10

0xe618,	// (0x00079764) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0007ad5a) main_tv_pg_hdr_pane_g

0xe622,	// (0x0007976e) main_tv_pg_hdr_pane_t1

0xe630,	// (0x0007977c) main_tv_pg_hdr_pane_t2

0xe63e,	// (0x0007978a) main_tv_pg_hdr_pane_t3

0xe64e,	// (0x0007979a) main_tv_pg_hdr_pane_t4

0xe65e,	// (0x000797aa) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0007ad71) main_tv_pg_hdr_pane_t

0xe66e,	// (0x000797ba) single_mobtv_pg_channel_pane_ParamLimits

0xe66e,	// (0x000797ba) single_mobtv_pg_channel_pane

0xe680,	// (0x000797cc) single_mobtv_pg_channel_table_pane

0xe689,	// (0x000797d5) single_mobtv_pg_channel_thumb_pane

0xe692,	// (0x000797de) single_tv_pg_channel_pane_g1

0xe69b,	// (0x000797e7) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0007ad7c) single_tv_pg_channel_pane_g

0xd246,	// (0x00078392) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd246,	// (0x00078392) bg_single_mobtv_pg_channel_thumb_pane

0xe6a4,	// (0x000797f0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe6a4,	// (0x000797f0) single_mobtv_pg_channel_thumb_pane_g1

0xe6b2,	// (0x000797fe) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe6b2,	// (0x000797fe) single_mobtv_pg_channel_thumb_pane_g2

0xe6be,	// (0x0007980a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe6be,	// (0x0007980a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0007ad81) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0007ad81) single_mobtv_pg_channel_thumb_pane_g

0xe6ca,	// (0x00079816) single_mobtv_pg_channel_thumb_pane_t1

0xe6d8,	// (0x00079824) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0007ad88) single_mobtv_pg_channel_thumb_pane_t

0xcfe6,	// (0x00078132) bg_single_mobtv_pg_channel_table_pane_g1

0xcfe6,	// (0x00078132) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0007a833) bg_single_mobtv_pg_channel_table_pane_g

0xe6e6,	// (0x00079832) single_mobtv_pg_channel_table_pane_t1

0xe6f4,	// (0x00079840) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0007ad8d) single_mobtv_pg_channel_table_pane_t

0x7880,	// (0x000729cc) main_mobtv_info_pane_g1_ParamLimits

0x7880,	// (0x000729cc) main_mobtv_info_pane_g1

0x789e,	// (0x000729ea) main_mobtv_info_pane_t1_ParamLimits

0x789e,	// (0x000729ea) main_mobtv_info_pane_t1

0x7916,	// (0x00072a62) main_mobtv_info_pane_t2_ParamLimits

0x7916,	// (0x00072a62) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0007ad97) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0007ad97) main_mobtv_info_pane_t

0x79a5,	// (0x00072af1) wait_bar_pane_cp05

0x79b7,	// (0x00072b03) main_mobtv_loading_pane_g1_ParamLimits

0x79b7,	// (0x00072b03) main_mobtv_loading_pane_g1

0x79ca,	// (0x00072b16) main_mobtv_loading_pane_g2_ParamLimits

0x79ca,	// (0x00072b16) main_mobtv_loading_pane_g2

0x79d6,	// (0x00072b22) main_mobtv_loading_pane_g3_ParamLimits

0x79d6,	// (0x00072b22) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0007ad9e) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0007ad9e) main_mobtv_loading_pane_g

0xe702,	// (0x0007984e) main_mobtv_loading_pane_t1_ParamLimits

0xe702,	// (0x0007984e) main_mobtv_loading_pane_t1

0xe71a,	// (0x00079866) main_mobtv_loading_pane_t2_ParamLimits

0xe71a,	// (0x00079866) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0007ada5) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0007ada5) main_mobtv_loading_pane_t

0x79e9,	// (0x00072b35) wait_bar_pane_cp06_ParamLimits

0x79e9,	// (0x00072b35) wait_bar_pane_cp06

0xe73e,	// (0x0007988a) main_mobtv_programe_curr_pane_t1

0xe74c,	// (0x00079898) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0007adaa) main_mobtv_programe_curr_pane_t

0xe75a,	// (0x000798a6) main_mobtv_programe_next_pane_t1

0xe768,	// (0x000798b4) main_mobtv_programe_next_pane_t2

0xe776,	// (0x000798c2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0007adaf) main_mobtv_programe_next_pane_t

0x93a7,	// (0x000744f3) bg_popup_mobtv_noti_window_pane

0xe784,	// (0x000798d0) popup_mobtv_noti_window_g1

0xe78c,	// (0x000798d8) popup_mobtv_noti_window_t1

0xe79a,	// (0x000798e6) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0007adb6) popup_mobtv_noti_window_t

0xcfe6,	// (0x00078132) bg_popup_mobtv_noti_window_pane_g1

0x942d,	// (0x00074579) sc_clock_pane

0x942d,	// (0x00074579) main_fs_bigclock_pane

0x7061,	// (0x000721ad) blid2_tripm_pane_t4_ParamLimits

0x7061,	// (0x000721ad) blid2_tripm_pane_t4

0x79f8,	// (0x00072b44) sc_clock_pane_g1_ParamLimits

0x79f8,	// (0x00072b44) sc_clock_pane_g1

0x7a0a,	// (0x00072b56) sc_clock_pane_t1_ParamLimits

0x7a0a,	// (0x00072b56) sc_clock_pane_t1

0x7a2c,	// (0x00072b78) sc_clock_pane_t2_ParamLimits

0x7a2c,	// (0x00072b78) sc_clock_pane_t2

0x7a44,	// (0x00072b90) sc_clock_pane_t3_ParamLimits

0x7a44,	// (0x00072b90) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0007adbb) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0007adbb) sc_clock_pane_t

0x8893,	// (0x000739df) main_fs_bigclock_indicator_pane_ParamLimits

0x8893,	// (0x000739df) main_fs_bigclock_indicator_pane

0xd216,	// (0x00078362) main_fs_bigclock_pane_g1_ParamLimits

0xd216,	// (0x00078362) main_fs_bigclock_pane_g1

0x889f,	// (0x000739eb) main_fs_bigclock_pane_t1_ParamLimits

0x889f,	// (0x000739eb) main_fs_bigclock_pane_t1

0x88b1,	// (0x000739fd) main_fs_bigclock_pane_t2_ParamLimits

0x88b1,	// (0x000739fd) main_fs_bigclock_pane_t2

0x88c3,	// (0x00073a0f) main_fs_bigclock_pane_t3_ParamLimits

0x88c3,	// (0x00073a0f) main_fs_bigclock_pane_t3

0x0002,

0xfe3c,	// (0x0007af88) main_fs_bigclock_pane_t_ParamLimits

0xfe3c,	// (0x0007af88) main_fs_bigclock_pane_t

0xf034,	// (0x0007a180) main_fs_bigclock_indicator_pane_g1

0xe46e,	// (0x000795ba) ncim_query_content_pane_g2_ParamLimits

0xe46e,	// (0x000795ba) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0007ad48) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0007ad48) ncim_query_content_pane_g

0x7a5d,	// (0x00072ba9) sc_clock_pane_t4_ParamLimits

0x7a5d,	// (0x00072ba9) sc_clock_pane_t4

0x941f,	// (0x0007456b) main_radioblah_pane

0xd992,	// (0x00078ade) cell_call4_button_pane_t1_copy1_ParamLimits

0xd992,	// (0x00078ade) cell_call4_button_pane_t1_copy1

0x768b,	// (0x000727d7) main_ncimui_pane_t1_ParamLimits

0x768b,	// (0x000727d7) main_ncimui_pane_t1

0x76a5,	// (0x000727f1) main_ncimui_pane_t2_ParamLimits

0x76a5,	// (0x000727f1) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0007ad41) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0007ad41) main_ncimui_pane_t

0xe8d5,	// (0x00079a21) main_radioblah_anim_pane_ParamLimits

0xe8d5,	// (0x00079a21) main_radioblah_anim_pane

0xe8e6,	// (0x00079a32) main_radioblah_info_pane_ParamLimits

0xe8e6,	// (0x00079a32) main_radioblah_info_pane

0xe8fa,	// (0x00079a46) main_radioblah_pane_t1_ParamLimits

0xe8fa,	// (0x00079a46) main_radioblah_pane_t1

0xe916,	// (0x00079a62) main_radioblah_pane_t2_ParamLimits

0xe916,	// (0x00079a62) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0007addc) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0007addc) main_radioblah_pane_t

0x7b13,	// (0x00072c5f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7b13,	// (0x00072c5f) main_radioblah_rocker_ctrl_pane

0xe95e,	// (0x00079aaa) main_radioblah_info_pane_t1_ParamLimits

0xe95e,	// (0x00079aaa) main_radioblah_info_pane_t1

0x7b6b,	// (0x00072cb7) main_radioblah_info_pane_t2_ParamLimits

0x7b6b,	// (0x00072cb7) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0007ade5) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0007ade5) main_radioblah_info_pane_t

0xcfe6,	// (0x00078132) main_radioblah_rocker_ctrl_pane_g1

0x7c1b,	// (0x00072d67) main_radioblah_rocker_ctrl_pane_g2

0x7c23,	// (0x00072d6f) main_radioblah_rocker_ctrl_pane_g3

0x7c2b,	// (0x00072d77) main_radioblah_rocker_ctrl_pane_g4

0x7c33,	// (0x00072d7f) main_radioblah_rocker_ctrl_pane_g5

0x7c3b,	// (0x00072d87) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0007adee) main_radioblah_rocker_ctrl_pane_g

0x7641,	// (0x0007278d) main_cset_text2_pane_t1_copy1_ParamLimits

0x9b33,	// (0x00074c7f) cam4_image_uncrop_qvga_pane

0x9b9a,	// (0x00074ce6) vid4_image_uncrop_qcif_pane

0x9d58,	// (0x00074ea4) cam6_image_uncrop_qvga_pane_ParamLimits

0x9d58,	// (0x00074ea4) cam6_image_uncrop_qvga_pane

0xe175,	// (0x000792c1) vid6_image_uncrop_qcif_pane_ParamLimits

0xe175,	// (0x000792c1) vid6_image_uncrop_qcif_pane

0x93a7,	// (0x000744f3) bg_popup_preview_window_pane_cp03

0xe420,	// (0x0007956c) list_cset_text2_pane

0xe428,	// (0x00079574) main_cset6_text2_pane_g1

0xe430,	// (0x0007957c) main_cset6_text2_pane_t1

0x7c43,	// (0x00072d8f) list_cset_text2_pane_t1_ParamLimits

0x7c43,	// (0x00072d8f) list_cset_text2_pane_t1

0x941f,	// (0x0007456b) main_radioblah_pane_ParamLimits

0x7991,	// (0x00072add) main_mobtv_info_pane_t3_ParamLimits

0x7991,	// (0x00072add) main_mobtv_info_pane_t3

0x7b01,	// (0x00072c4d) main_radioblah_pane_g1

0x7b3b,	// (0x00072c87) main_radioblah_info_pane_g1

0x7bc0,	// (0x00072d0c) main_radioblah_info_pane_t3_ParamLimits

0x7bc0,	// (0x00072d0c) main_radioblah_info_pane_t3

0x240a,	// (0x0006d556) highlight_cell_cale_month_pane_ParamLimits

0x240a,	// (0x0006d556) highlight_cell_cale_month_pane

0x942d,	// (0x00074579) main_phob_fisheye_pane

0xd322,	// (0x0007846e) scroll_pane_cp0031_ParamLimits

0xd322,	// (0x0007846e) scroll_pane_cp0031

0xe283,	// (0x000793cf) wait_bar_pane_cp08_ParamLimits

0x73ae,	// (0x000724fa) cset_list_set_pane_copy1_ParamLimits

0xe998,	// (0x00079ae4) highlight_cell_cale_month_pane_g1

0x7c5e,	// (0x00072daa) highlight_cell_cale_month_pane_t1

0xdee2,	// (0x0007902e) list_gen_pane_cp01

0xdb5b,	// (0x00078ca7) scroll_pane_01

0xba78,	// (0x00076bc4) list_single_double_fisheye_pane

0x9fb4,	// (0x00075100) list_double_fisheye_pane_g1_ParamLimits

0x9fb4,	// (0x00075100) list_double_fisheye_pane_g1

0x9fc0,	// (0x0007510c) list_double_fisheye_pane_g2_ParamLimits

0x9fc0,	// (0x0007510c) list_double_fisheye_pane_g2

0xba81,	// (0x00076bcd) list_double_fisheye_pane_g3_ParamLimits

0xba81,	// (0x00076bcd) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0007adfb) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0007adfb) list_double_fisheye_pane_g

0x9ff1,	// (0x0007513d) list_double_fisheye_pane_t1_ParamLimits

0x9ff1,	// (0x0007513d) list_double_fisheye_pane_t1

0xa00c,	// (0x00075158) list_double_fisheye_pane_t2_ParamLimits

0xa00c,	// (0x00075158) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0007ae06) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0007ae06) list_double_fisheye_pane_t

0x942d,	// (0x00074579) main_call5_pane

0x7a88,	// (0x00072bd4) sc_swipe_pane_ParamLimits

0x7a88,	// (0x00072bd4) sc_swipe_pane

0x7c7f,	// (0x00072dcb) call5_image_pane_ParamLimits

0x7c7f,	// (0x00072dcb) call5_image_pane

0x7c9c,	// (0x00072de8) call5_swipe_1_pane_ParamLimits

0x7c9c,	// (0x00072de8) call5_swipe_1_pane

0x7caf,	// (0x00072dfb) call5_swipe_2_pane_ParamLimits

0x7caf,	// (0x00072dfb) call5_swipe_2_pane

0x7cda,	// (0x00072e26) popup_call5_audio_first_window_ParamLimits

0x7cda,	// (0x00072e26) popup_call5_audio_first_window

0xd246,	// (0x00078392) call5_swipe_1_pane_g1_ParamLimits

0xd246,	// (0x00078392) call5_swipe_1_pane_g1

0xe9a0,	// (0x00079aec) call5_swipe_1_pane_g2_ParamLimits

0xe9a0,	// (0x00079aec) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0007ae0b) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0007ae0b) call5_swipe_1_pane_g

0xe9ac,	// (0x00079af8) call5_swipe_1_pane_t1_ParamLimits

0xe9ac,	// (0x00079af8) call5_swipe_1_pane_t1

0xd246,	// (0x00078392) call5_swipe_2_pane_g1_ParamLimits

0xd246,	// (0x00078392) call5_swipe_2_pane_g1

0xe9c1,	// (0x00079b0d) call5_swipe_2_pane_g2_ParamLimits

0xe9c1,	// (0x00079b0d) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0007ae10) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0007ae10) call5_swipe_2_pane_g

0xe9cd,	// (0x00079b19) call5_swipe_2_pane_t1_ParamLimits

0xe9cd,	// (0x00079b19) call5_swipe_2_pane_t1

0xe9e2,	// (0x00079b2e) sc_swipe_pane_g1_ParamLimits

0xe9e2,	// (0x00079b2e) sc_swipe_pane_g1

0xe9ef,	// (0x00079b3b) sc_swipe_pane_g2_ParamLimits

0xe9ef,	// (0x00079b3b) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0007ae15) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0007ae15) sc_swipe_pane_g

0xe9fb,	// (0x00079b47) sc_swipe_pane_t1_ParamLimits

0xe9fb,	// (0x00079b47) sc_swipe_pane_t1

0x942d,	// (0x00074579) main_cmail_launcher_pane

0x7ceb,	// (0x00072e37) aid_size_cell_cmail_l_ParamLimits

0x7ceb,	// (0x00072e37) aid_size_cell_cmail_l

0x7d05,	// (0x00072e51) grid_cmail_l_pane_ParamLimits

0x7d05,	// (0x00072e51) grid_cmail_l_pane

0x7d20,	// (0x00072e6c) cell_cmail_l_pane_ParamLimits

0x7d20,	// (0x00072e6c) cell_cmail_l_pane

0x7d46,	// (0x00072e92) cell_cmail_l_pane_g1_ParamLimits

0x7d46,	// (0x00072e92) cell_cmail_l_pane_g1

0x7d57,	// (0x00072ea3) cell_cmail_l_pane_t1_ParamLimits

0x7d57,	// (0x00072ea3) cell_cmail_l_pane_t1

0xea10,	// (0x00079b5c) cell_cmail_l_pane_t2_ParamLimits

0xea10,	// (0x00079b5c) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0007ae1a) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0007ae1a) cell_cmail_l_pane_t

0xb07c,	// (0x000761c8) grid_highlight_pane_cp018_ParamLimits

0xb07c,	// (0x000761c8) grid_highlight_pane_cp018

0x0386,	// (0x0006b4d2) main2_pane_ParamLimits

0x0386,	// (0x0006b4d2) main2_pane

0xad3e,	// (0x00075e8a) popup_sp_fs_action_menu_bg_pane_g1

0xad46,	// (0x00075e92) popup_sp_fs_action_menu_bg_pane_g2

0xad4e,	// (0x00075e9a) popup_sp_fs_action_menu_bg_pane_g3

0xad56,	// (0x00075ea2) popup_sp_fs_action_menu_bg_pane_g4

0xad5e,	// (0x00075eaa) popup_sp_fs_action_menu_bg_pane_g5

0xad66,	// (0x00075eb2) popup_sp_fs_action_menu_bg_pane_g6

0xad6e,	// (0x00075eba) popup_sp_fs_action_menu_bg_pane_g7

0xad76,	// (0x00075ec2) popup_sp_fs_action_menu_bg_pane_g8

0xad7e,	// (0x00075eca) popup_sp_fs_action_menu_bg_pane_g9

0xad86,	// (0x00075ed2) popup_sp_fs_action_menu_bg_pane_g10

0xad86,	// (0x00075ed2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0007a2df) popup_sp_fs_action_menu_bg_pane_g

0x1383,	// (0x0006c4cf) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x2_t3_g3_g1

0x9583,	// (0x000746cf) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9583,	// (0x000746cf) list_medium_line_x2_t3_g3_g2

0x138f,	// (0x0006c4db) list_medium_line_x2_t3_g3_g3_ParamLimits

0x138f,	// (0x0006c4db) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0007a38f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0007a38f) list_medium_line_x2_t3_g3_g

0x139b,	// (0x0006c4e7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x139b,	// (0x0006c4e7) list_medium_line_x2_t3_g3_t1

0x13b0,	// (0x0006c4fc) list_medium_line_x2_t3_g3_t2_ParamLimits

0x13b0,	// (0x0006c4fc) list_medium_line_x2_t3_g3_t2

0x13c4,	// (0x0006c510) list_medium_line_x2_t3_g3_t3_ParamLimits

0x13c4,	// (0x0006c510) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0007a396) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0007a396) list_medium_line_x2_t3_g3_t

0x1383,	// (0x0006c4cf) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x2_t3_g2_g1

0x138f,	// (0x0006c4db) list_medium_line_x2_t3_g2_g2_ParamLimits

0x138f,	// (0x0006c4db) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0007a39d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0007a39d) list_medium_line_x2_t3_g2_g

0x13d9,	// (0x0006c525) list_medium_line_x2_t3_g2_t1_ParamLimits

0x13d9,	// (0x0006c525) list_medium_line_x2_t3_g2_t1

0x13ef,	// (0x0006c53b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x13ef,	// (0x0006c53b) list_medium_line_x2_t3_g2_t2

0x13c4,	// (0x0006c510) list_medium_line_x2_t3_g2_t3_ParamLimits

0x13c4,	// (0x0006c510) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0007a3a2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0007a3a2) list_medium_line_x2_t3_g2_t

0x1383,	// (0x0006c4cf) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x2_t4_g4_g1

0x958f,	// (0x000746db) list_medium_line_x2_t4_g4_g2_ParamLimits

0x958f,	// (0x000746db) list_medium_line_x2_t4_g4_g2

0x9583,	// (0x000746cf) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9583,	// (0x000746cf) list_medium_line_x2_t4_g4_g3

0x1401,	// (0x0006c54d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1401,	// (0x0006c54d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0007a3a9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0007a3a9) list_medium_line_x2_t4_g4_g

0x140d,	// (0x0006c559) list_medium_line_x2_t4_g4_t1_ParamLimits

0x140d,	// (0x0006c559) list_medium_line_x2_t4_g4_t1

0x1424,	// (0x0006c570) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1424,	// (0x0006c570) list_medium_line_x2_t4_g4_t2

0x1439,	// (0x0006c585) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1439,	// (0x0006c585) list_medium_line_x2_t4_g4_t3

0x144b,	// (0x0006c597) list_medium_line_x2_t4_g4_t4_ParamLimits

0x144b,	// (0x0006c597) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0007a3b2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0007a3b2) list_medium_line_x2_t4_g4_t

0x1383,	// (0x0006c4cf) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x2_t2_g4_g1

0x958f,	// (0x000746db) list_medium_line_x2_t2_g4_g2_ParamLimits

0x958f,	// (0x000746db) list_medium_line_x2_t2_g4_g2

0x9583,	// (0x000746cf) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9583,	// (0x000746cf) list_medium_line_x2_t2_g4_g3

0x138f,	// (0x0006c4db) list_medium_line_x2_t2_g4_g4_ParamLimits

0x138f,	// (0x0006c4db) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0007a419) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0007a419) list_medium_line_x2_t2_g4_g

0x2430,	// (0x0006d57c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2430,	// (0x0006d57c) list_medium_line_x2_t2_g4_t1

0x13c4,	// (0x0006c510) list_medium_line_x2_t2_g4_t2_ParamLimits

0x13c4,	// (0x0006c510) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0007a422) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0007a422) list_medium_line_x2_t2_g4_t

0x1383,	// (0x0006c4cf) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x2_t2_g3_g1

0x9583,	// (0x000746cf) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9583,	// (0x000746cf) list_medium_line_x2_t2_g3_g2

0x138f,	// (0x0006c4db) list_medium_line_x2_t2_g3_g3_ParamLimits

0x138f,	// (0x0006c4db) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0007a38f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0007a38f) list_medium_line_x2_t2_g3_g

0x2445,	// (0x0006d591) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2445,	// (0x0006d591) list_medium_line_x2_t2_g3_t1

0x13c4,	// (0x0006c510) list_medium_line_x2_t2_g3_t2_ParamLimits

0x13c4,	// (0x0006c510) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0007a427) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0007a427) list_medium_line_x2_t2_g3_t

0x2605,	// (0x0006d751) main_sp_fs_list_pane_ParamLimits

0x2605,	// (0x0006d751) main_sp_fs_list_pane

0xc444,	// (0x00077590) sp_fs_scroll_pane_ParamLimits

0xc444,	// (0x00077590) sp_fs_scroll_pane

0x2611,	// (0x0006d75d) list_medium_line_x2_t3_t1

0x2621,	// (0x0006d76d) list_medium_line_x2_t3_t2

0x262f,	// (0x0006d77b) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0007a472) list_medium_line_x2_t3_t

0x263d,	// (0x0006d789) list_medium_line_x3_t4_t1

0x264d,	// (0x0006d799) list_medium_line_x3_t4_t2

0x265b,	// (0x0006d7a7) list_medium_line_x3_t4_t3

0x262f,	// (0x0006d77b) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0007a479) list_medium_line_x3_t4_t

0x2669,	// (0x0006d7b5) list_medium_line_x4_t5_t1

0x2679,	// (0x0006d7c5) list_medium_line_x4_t5_t2

0x265b,	// (0x0006d7a7) list_medium_line_x4_t5_t3

0x2687,	// (0x0006d7d3) list_medium_line_x4_t5_t4

0x262f,	// (0x0006d77b) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0007a482) list_medium_line_x4_t5_t

0x1383,	// (0x0006c4cf) list_medium_line_t4_g4_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_t4_g4_g1

0x1401,	// (0x0006c54d) list_medium_line_t4_g4_g2_ParamLimits

0x1401,	// (0x0006c54d) list_medium_line_t4_g4_g2

0x2695,	// (0x0006d7e1) list_medium_line_t4_g4_g3_ParamLimits

0x2695,	// (0x0006d7e1) list_medium_line_t4_g4_g3

0x138f,	// (0x0006c4db) list_medium_line_t4_g4_g4_ParamLimits

0x138f,	// (0x0006c4db) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0007a48d) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0007a48d) list_medium_line_t4_g4_g

0x26a1,	// (0x0006d7ed) list_medium_line_t4_g4_t1_ParamLimits

0x26a1,	// (0x0006d7ed) list_medium_line_t4_g4_t1

0x26b6,	// (0x0006d802) list_medium_line_t4_g4_t2_ParamLimits

0x26b6,	// (0x0006d802) list_medium_line_t4_g4_t2

0x26cb,	// (0x0006d817) list_medium_line_t4_g4_t3_ParamLimits

0x26cb,	// (0x0006d817) list_medium_line_t4_g4_t3

0x13c4,	// (0x0006c510) list_medium_line_t4_g4_t4_ParamLimits

0x13c4,	// (0x0006c510) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0007a496) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0007a496) list_medium_line_t4_g4_t

0x277f,	// (0x0006d8cb) chi_dic_find_pane_g1

0x389a,	// (0x0006e9e6) main_tport_pane

0x9c8f,	// (0x00074ddb) list_medium_line_plain_t1

0x9ea6,	// (0x00074ff2) list_medium_line_t2_g2_g1_ParamLimits

0x9ea6,	// (0x00074ff2) list_medium_line_t2_g2_g1

0x9eb2,	// (0x00074ffe) list_medium_line_t2_g2_g2_ParamLimits

0x9eb2,	// (0x00074ffe) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0007ab52) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0007ab52) list_medium_line_t2_g2_g

0x67cb,	// (0x00071917) list_medium_line_t2_g2_t1_ParamLimits

0x67cb,	// (0x00071917) list_medium_line_t2_g2_t1

0x67e5,	// (0x00071931) list_medium_line_t2_g2_t2_ParamLimits

0x67e5,	// (0x00071931) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0007ab57) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0007ab57) list_medium_line_t2_g2_t

0x9f5a,	// (0x000750a6) aid_sp_fs_list_icon_a_sm

0x9f62,	// (0x000750ae) aid_sp_fs_list_icon_d

0x9f6a,	// (0x000750b6) aid_sp_fs_text_primary

0xe164,	// (0x000792b0) aid_sp_fs_text_secondary

0x9f73,	// (0x000750bf) list_medium_line

0x9f73,	// (0x000750bf) list_medium_line_g2

0x9f73,	// (0x000750bf) list_medium_line_g3

0x9f73,	// (0x000750bf) list_medium_line_plain

0x9f73,	// (0x000750bf) list_medium_line_plain_t2

0x9f73,	// (0x000750bf) list_medium_line_plain_t3

0x9f73,	// (0x000750bf) list_medium_line_right_icon

0x9f73,	// (0x000750bf) list_medium_line_right_iconx2

0x9f73,	// (0x000750bf) list_medium_line_t2

0x9f73,	// (0x000750bf) list_medium_line_t2_g2

0x9f73,	// (0x000750bf) list_medium_line_t2_g3

0x9f73,	// (0x000750bf) list_medium_line_t2_right_icon

0x9f73,	// (0x000750bf) list_medium_line_t2_right_iconx2

0x9f73,	// (0x000750bf) list_medium_line_t3

0x9f73,	// (0x000750bf) list_medium_line_t3_g2

0x9f73,	// (0x000750bf) list_medium_line_t3_g3

0x9f73,	// (0x000750bf) list_medium_line_t3_right_iconx2

0x6e17,	// (0x00071f63) list_medium_line_t4_g4

0x6e20,	// (0x00071f6c) list_medium_line_x2

0x6e20,	// (0x00071f6c) list_medium_line_x2_t2_g2

0x6e20,	// (0x00071f6c) list_medium_line_x2_t2_g3

0x6e20,	// (0x00071f6c) list_medium_line_x2_t2_g4

0x6e20,	// (0x00071f6c) list_medium_line_x2_t3

0x6e20,	// (0x00071f6c) list_medium_line_x2_t3_g2

0x6e20,	// (0x00071f6c) list_medium_line_x2_t3_g3

0x6e20,	// (0x00071f6c) list_medium_line_x2_t3_g4

0x6e20,	// (0x00071f6c) list_medium_line_x2_t4_g2

0x6e20,	// (0x00071f6c) list_medium_line_x2_t4_g4

0x6e29,	// (0x00071f75) list_medium_line_x3

0x6e29,	// (0x00071f75) list_medium_line_x3_t4

0x6e29,	// (0x00071f75) list_medium_line_x3_t4_g4

0x6e17,	// (0x00071f63) list_medium_line_x4_t4

0x6e17,	// (0x00071f63) list_medium_line_x4_t4_g7

0x6e17,	// (0x00071f63) list_medium_line_x4_t5

0x6e32,	// (0x00071f7e) list_single_fs_dyc_pane_ParamLimits

0x6e32,	// (0x00071f7e) list_single_fs_dyc_pane

0x1383,	// (0x0006c4cf) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x4_t4_g7_g1

0x75a8,	// (0x000726f4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x75a8,	// (0x000726f4) list_medium_line_x4_t4_g7_g2

0x9f7c,	// (0x000750c8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9f7c,	// (0x000750c8) list_medium_line_x4_t4_g7_g3

0x9f8b,	// (0x000750d7) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9f8b,	// (0x000750d7) list_medium_line_x4_t4_g7_g4

0x75b4,	// (0x00072700) list_medium_line_x4_t4_g7_g5_ParamLimits

0x75b4,	// (0x00072700) list_medium_line_x4_t4_g7_g5

0x75c3,	// (0x0007270f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x75c3,	// (0x0007270f) list_medium_line_x4_t4_g7_g6

0x75d2,	// (0x0007271e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x75d2,	// (0x0007271e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0007ad22) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0007ad22) list_medium_line_x4_t4_g7_g

0x75de,	// (0x0007272a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x75de,	// (0x0007272a) list_medium_line_x4_t4_g7_t1

0x75f3,	// (0x0007273f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x75f3,	// (0x0007273f) list_medium_line_x4_t4_g7_t2

0x7608,	// (0x00072754) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7608,	// (0x00072754) list_medium_line_x4_t4_g7_t3

0x761d,	// (0x00072769) list_medium_line_x4_t4_g7_t4_ParamLimits

0x761d,	// (0x00072769) list_medium_line_x4_t4_g7_t4

0x762f,	// (0x0007277b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x762f,	// (0x0007277b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0007ad31) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0007ad31) list_medium_line_x4_t4_g7_t

0x9f97,	// (0x000750e3) list_single_dyc_row_pane_ParamLimits

0x9f97,	// (0x000750e3) list_single_dyc_row_pane

0x7c6c,	// (0x00072db8) call5_gesture_pane_ParamLimits

0x7c6c,	// (0x00072db8) call5_gesture_pane

0x7cc2,	// (0x00072e0e) call5_windows_pane_ParamLimits

0x7cc2,	// (0x00072e0e) call5_windows_pane

0x7d6d,	// (0x00072eb9) call5_swipe_1_pane_cp_ParamLimits

0x7d6d,	// (0x00072eb9) call5_swipe_1_pane_cp

0x7d79,	// (0x00072ec5) call5_swipe_2_pane_cp_ParamLimits

0x7d79,	// (0x00072ec5) call5_swipe_2_pane_cp

0xb7ab,	// (0x000768f7) call5_image_pane_cp

0x7d85,	// (0x00072ed1) popup_call5_audio_first_window_cp_ParamLimits

0x7d85,	// (0x00072ed1) popup_call5_audio_first_window_cp

0xe9e2,	// (0x00079b2e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe9e2,	// (0x00079b2e) call5_swipe_1_pane_g1_cp

0xea22,	// (0x00079b6e) call5_swipe_1_pane_g2_cp

0xe9fb,	// (0x00079b47) call5_swipe_1_pane_t1_cp_ParamLimits

0xe9fb,	// (0x00079b47) call5_swipe_1_pane_t1_cp

0xe9e2,	// (0x00079b2e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe9e2,	// (0x00079b2e) call5_swipe_2_pane_g1_cp

0xea2a,	// (0x00079b76) call5_swipe_2_pane_g2_cp

0xea32,	// (0x00079b7e) call5_swipe_2_pane_t1_cp_ParamLimits

0xea32,	// (0x00079b7e) call5_swipe_2_pane_t1_cp

0xb07c,	// (0x000761c8) main_sp_fs_email_pane

0xea47,	// (0x00079b93) main_sp_fs_listscroll_pane_te

0x7d93,	// (0x00072edf) popup_sp_fs_action_menu_pane_ParamLimits

0x7d93,	// (0x00072edf) popup_sp_fs_action_menu_pane

0xcfe6,	// (0x00078132) bg_sp_fs_ctrlbar_pane_g1

0xea50,	// (0x00079b9c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xea59,	// (0x00079ba5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xea62,	// (0x00079bae) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcfe6,	// (0x00078132) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0007ae1f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcdc9,	// (0x00077f15) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcdc9,	// (0x00077f15) bg_sp_fs_ctrlbar_ddmenu_pane

0xea6b,	// (0x00079bb7) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xea6b,	// (0x00079bb7) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xea77,	// (0x00079bc3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xea77,	// (0x00079bc3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0007ae28) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0007ae28) main_sp_fs_ctrlbar_ddmenu_pane_g

0xea83,	// (0x00079bcf) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xea83,	// (0x00079bcf) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa02e,	// (0x0007517a) list_medium_line_t2_right_icon_g1

0x7dd5,	// (0x00072f21) list_medium_line_t2_right_icon_t1

0x7de5,	// (0x00072f31) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0007ae2d) list_medium_line_t2_right_icon_t

0xcbdc,	// (0x00077d28) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcbdc,	// (0x00077d28) bg_sp_fs_ctrlbar_pane

0x7e3f,	// (0x00072f8b) main_sp_fs_ctrlbar_button_pane_cp01

0x7e49,	// (0x00072f95) main_sp_fs_ctrlbar_ddmenu_pane

0xead5,	// (0x00079c21) main_sp_fs_ctrlbar_pane_g1

0xeae1,	// (0x00079c2d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0007ae32) main_sp_fs_ctrlbar_pane_g

0xeaed,	// (0x00079c39) main_sp_fs_ctrlbar_pane_t1

0x7e53,	// (0x00072f9f) main_sp_fs_ctrlbar_pane

0x7e77,	// (0x00072fc3) main_sp_fs_listscroll_pane_te_cp01

0x7e97,	// (0x00072fe3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e97,	// (0x00072fe3) popup_sp_fs_action_menu_pane_cp01

0xb07c,	// (0x000761c8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb07c,	// (0x000761c8) bg_sp_fs_highlight_list_pane_cp01

0xa036,	// (0x00075182) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa036,	// (0x00075182) sp_fs_action_menu_list_gene_pane_g1

0xeb2b,	// (0x00079c77) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xeb2b,	// (0x00079c77) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0007ae3c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0007ae3c) sp_fs_action_menu_list_gene_pane_g

0xa045,	// (0x00075191) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa045,	// (0x00075191) sp_fs_action_menu_list_gene_pane_t1

0xa05d,	// (0x000751a9) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa05d,	// (0x000751a9) sp_fs_action_menu_list_gene_pane

0xeb38,	// (0x00079c84) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xeb38,	// (0x00079c84) popup_sp_fs_action_menu_bg_pane

0xa07c,	// (0x000751c8) sp_fs_action_menu_list_pane_ParamLimits

0xa07c,	// (0x000751c8) sp_fs_action_menu_list_pane

0x7ec7,	// (0x00073013) sp_fs_scroll_pane_cp01_ParamLimits

0x7ec7,	// (0x00073013) sp_fs_scroll_pane_cp01

0x7eed,	// (0x00073039) list_medium_line_plain_t2_t1

0x7efd,	// (0x00073049) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0007ae41) list_medium_line_plain_t2_t

0x7f0d,	// (0x00073059) list_medium_line_plain_t3_t1

0x7f1d,	// (0x00073069) list_medium_line_plain_t3_t2

0x7f2b,	// (0x00073077) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0007ae46) list_medium_line_plain_t3_t

0x1383,	// (0x0006c4cf) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x2_t2_g2_g1

0x138f,	// (0x0006c4db) list_medium_line_x2_t2_g2_g2_ParamLimits

0x138f,	// (0x0006c4db) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0007a39d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0007a39d) list_medium_line_x2_t2_g2_g

0x26a1,	// (0x0006d7ed) list_medium_line_x2_t2_g2_t1_ParamLimits

0x26a1,	// (0x0006d7ed) list_medium_line_x2_t2_g2_t1

0x13c4,	// (0x0006c510) list_medium_line_x2_t2_g2_t2_ParamLimits

0x13c4,	// (0x0006c510) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0007ae4d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0007ae4d) list_medium_line_x2_t2_g2_t

0x1383,	// (0x0006c4cf) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x2_t4_g2_g1

0x7f39,	// (0x00073085) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7f39,	// (0x00073085) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x0007ae52) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x0007ae52) list_medium_line_x2_t4_g2_g

0x7f4b,	// (0x00073097) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f4b,	// (0x00073097) list_medium_line_x2_t4_g2_t1

0x7f65,	// (0x000730b1) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f65,	// (0x000730b1) list_medium_line_x2_t4_g2_t2

0x7f7a,	// (0x000730c6) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f7a,	// (0x000730c6) list_medium_line_x2_t4_g2_t3

0x13c4,	// (0x0006c510) list_medium_line_x2_t4_g2_t4_ParamLimits

0x13c4,	// (0x0006c510) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0007ae57) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0007ae57) list_medium_line_x2_t4_g2_t

0xa09c,	// (0x000751e8) list_medium_line_t3_right_iconx2_g1

0xa02e,	// (0x0007517a) list_medium_line_t3_right_iconx2_g2

0x7f8f,	// (0x000730db) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0007ae60) list_medium_line_t3_right_iconx2_g

0x7f99,	// (0x000730e5) list_medium_line_t3_right_iconx2_t1

0x7fa9,	// (0x000730f5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0007ae67) list_medium_line_t3_right_iconx2_t

0x1383,	// (0x0006c4cf) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x3_t4_g4_g1

0x9583,	// (0x000746cf) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9583,	// (0x000746cf) list_medium_line_x3_t4_g4_g2

0x1401,	// (0x0006c54d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1401,	// (0x0006c54d) list_medium_line_x3_t4_g4_g3

0xa0a4,	// (0x000751f0) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa0a4,	// (0x000751f0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x0007ae6c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x0007ae6c) list_medium_line_x3_t4_g4_g

0x7fb7,	// (0x00073103) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7fb7,	// (0x00073103) list_medium_line_x3_t4_g4_t1

0x7fce,	// (0x0007311a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fce,	// (0x0007311a) list_medium_line_x3_t4_g4_t2

0x26b6,	// (0x0006d802) list_medium_line_x3_t4_g4_t3_ParamLimits

0x26b6,	// (0x0006d802) list_medium_line_x3_t4_g4_t3

0x7fe9,	// (0x00073135) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7fe9,	// (0x00073135) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0007ae75) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0007ae75) list_medium_line_x3_t4_g4_t

0x8006,	// (0x00073152) list_single_dyc_row_text_pane_t1_ParamLimits

0x8006,	// (0x00073152) list_single_dyc_row_text_pane_t1

0x804f,	// (0x0007319b) list_single_dyc_row_text_pane_t2_ParamLimits

0x804f,	// (0x0007319b) list_single_dyc_row_text_pane_t2

0xa0b0,	// (0x000751fc) list_single_dyc_row_text_pane_t3_ParamLimits

0xa0b0,	// (0x000751fc) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0007ae7e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0007ae7e) list_single_dyc_row_text_pane_t

0xa0c2,	// (0x0007520e) list_single_dyc_row_pane_g1_ParamLimits

0xa0c2,	// (0x0007520e) list_single_dyc_row_pane_g1

0xa0ce,	// (0x0007521a) list_single_dyc_row_pane_g2_ParamLimits

0xa0ce,	// (0x0007521a) list_single_dyc_row_pane_g2

0xa0da,	// (0x00075226) list_single_dyc_row_pane_g3_ParamLimits

0xa0da,	// (0x00075226) list_single_dyc_row_pane_g3

0xa0e6,	// (0x00075232) list_single_dyc_row_pane_g4_ParamLimits

0xa0e6,	// (0x00075232) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007ae85) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007ae85) list_single_dyc_row_pane_g

0xa0f2,	// (0x0007523e) list_single_dyc_row_text_pane_ParamLimits

0xa0f2,	// (0x0007523e) list_single_dyc_row_text_pane

0x93a7,	// (0x000744f3) bg_sp_fs_scroll_pane

0xeb46,	// (0x00079c92) thumb_sp_fs_scroll_pane

0x9ea6,	// (0x00074ff2) list_medium_line_g1_ParamLimits

0x9ea6,	// (0x00074ff2) list_medium_line_g1

0xa111,	// (0x0007525d) list_medium_line_t1_ParamLimits

0xa111,	// (0x0007525d) list_medium_line_t1

0x1383,	// (0x0006c4cf) list_medium_line_x2_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x2_g1

0x9583,	// (0x000746cf) list_medium_line_x2_g2_ParamLimits

0x9583,	// (0x000746cf) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007ae8e) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007ae8e) list_medium_line_x2_g

0xa126,	// (0x00075272) list_medium_line_x2_t1_ParamLimits

0xa126,	// (0x00075272) list_medium_line_x2_t1

0x1383,	// (0x0006c4cf) list_medium_line_x3_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x3_g1

0x9583,	// (0x000746cf) list_medium_line_x3_g2_ParamLimits

0x9583,	// (0x000746cf) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007ae8e) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007ae8e) list_medium_line_x3_g

0xa126,	// (0x00075272) list_medium_line_x3_t1_ParamLimits

0xa126,	// (0x00075272) list_medium_line_x3_t1

0xeb4f,	// (0x00079c9b) thumb_sp_fs_scroll_pane_g1

0xeb58,	// (0x00079ca4) thumb_sp_fs_scroll_pane_g2

0xeb61,	// (0x00079cad) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007ae93) thumb_sp_fs_scroll_pane_g

0xeb4f,	// (0x00079c9b) bg_sp_fs_scroll_pane_g1

0xeb58,	// (0x00079ca4) bg_sp_fs_scroll_pane_g2

0xeb61,	// (0x00079cad) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007ae93) bg_sp_fs_scroll_pane_g

0x1383,	// (0x0006c4cf) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1383,	// (0x0006c4cf) list_medium_line_x2_t3_g4_g1

0x958f,	// (0x000746db) list_medium_line_x2_t3_g4_g2_ParamLimits

0x958f,	// (0x000746db) list_medium_line_x2_t3_g4_g2

0x9583,	// (0x000746cf) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9583,	// (0x000746cf) list_medium_line_x2_t3_g4_g3

0x138f,	// (0x0006c4db) list_medium_line_x2_t3_g4_g4_ParamLimits

0x138f,	// (0x0006c4db) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0007a419) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0007a419) list_medium_line_x2_t3_g4_g

0x80a9,	// (0x000731f5) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80a9,	// (0x000731f5) list_medium_line_x2_t3_g4_t1

0x80c3,	// (0x0007320f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80c3,	// (0x0007320f) list_medium_line_x2_t3_g4_t2

0x13c4,	// (0x0006c510) list_medium_line_x2_t3_g4_t3_ParamLimits

0x13c4,	// (0x0006c510) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007ae9a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007ae9a) list_medium_line_x2_t3_g4_t

0x9ea6,	// (0x00074ff2) list_medium_line_g2_g1_ParamLimits

0x9ea6,	// (0x00074ff2) list_medium_line_g2_g1

0x9eb2,	// (0x00074ffe) list_medium_line_g2_g2_ParamLimits

0x9eb2,	// (0x00074ffe) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0007ab52) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0007ab52) list_medium_line_g2_g

0xa13c,	// (0x00075288) list_medium_line_g2_t1_ParamLimits

0xa13c,	// (0x00075288) list_medium_line_g2_t1

0x9ea6,	// (0x00074ff2) list_medium_line_t3_g2_g1_ParamLimits

0x9ea6,	// (0x00074ff2) list_medium_line_t3_g2_g1

0x9eb2,	// (0x00074ffe) list_medium_line_t3_g2_g2_ParamLimits

0x9eb2,	// (0x00074ffe) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0007ab52) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0007ab52) list_medium_line_t3_g2_g

0x80dc,	// (0x00073228) list_medium_line_t3_g2_t1_ParamLimits

0x80dc,	// (0x00073228) list_medium_line_t3_g2_t1

0x80f3,	// (0x0007323f) list_medium_line_t3_g2_t2_ParamLimits

0x80f3,	// (0x0007323f) list_medium_line_t3_g2_t2

0x8108,	// (0x00073254) list_medium_line_t3_g2_t3_ParamLimits

0x8108,	// (0x00073254) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007aea1) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007aea1) list_medium_line_t3_g2_t

0xa02e,	// (0x0007517a) list_medium_line_right_icon_g1

0xa151,	// (0x0007529d) list_medium_line_right_icon_t1

0x9ea6,	// (0x00074ff2) list_medium_line_t2_g1_ParamLimits

0x9ea6,	// (0x00074ff2) list_medium_line_t2_g1

0x8121,	// (0x0007326d) list_medium_line_t2_t1_ParamLimits

0x8121,	// (0x0007326d) list_medium_line_t2_t1

0x813b,	// (0x00073287) list_medium_line_t2_t2_ParamLimits

0x813b,	// (0x00073287) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007aea8) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007aea8) list_medium_line_t2_t

0x9ea6,	// (0x00074ff2) list_medium_line_t3_g1_ParamLimits

0x9ea6,	// (0x00074ff2) list_medium_line_t3_g1

0x8154,	// (0x000732a0) list_medium_line_t3_t1_ParamLimits

0x8154,	// (0x000732a0) list_medium_line_t3_t1

0x816e,	// (0x000732ba) list_medium_line_t3_t2_ParamLimits

0x816e,	// (0x000732ba) list_medium_line_t3_t2

0x8183,	// (0x000732cf) list_medium_line_t3_t3_ParamLimits

0x8183,	// (0x000732cf) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007aead) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007aead) list_medium_line_t3_t

0x9ea6,	// (0x00074ff2) list_medium_line_g3_g1_ParamLimits

0x9ea6,	// (0x00074ff2) list_medium_line_g3_g1

0xa15f,	// (0x000752ab) list_medium_line_g3_g2_ParamLimits

0xa15f,	// (0x000752ab) list_medium_line_g3_g2

0x9eb2,	// (0x00074ffe) list_medium_line_g3_g3_ParamLimits

0x9eb2,	// (0x00074ffe) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007aeb4) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007aeb4) list_medium_line_g3_g

0xa16b,	// (0x000752b7) list_medium_line_g3_t1_ParamLimits

0xa16b,	// (0x000752b7) list_medium_line_g3_t1

0x9ea6,	// (0x00074ff2) list_medium_line_t2_g3_g1_ParamLimits

0x9ea6,	// (0x00074ff2) list_medium_line_t2_g3_g1

0xa15f,	// (0x000752ab) list_medium_line_t2_g3_g2_ParamLimits

0xa15f,	// (0x000752ab) list_medium_line_t2_g3_g2

0x9eb2,	// (0x00074ffe) list_medium_line_t2_g3_g3_ParamLimits

0x9eb2,	// (0x00074ffe) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007aeb4) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007aeb4) list_medium_line_t2_g3_g

0x8198,	// (0x000732e4) list_medium_line_t2_g3_t1_ParamLimits

0x8198,	// (0x000732e4) list_medium_line_t2_g3_t1

0x81af,	// (0x000732fb) list_medium_line_t2_g3_t2_ParamLimits

0x81af,	// (0x000732fb) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007aebb) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007aebb) list_medium_line_t2_g3_t

0x9ea6,	// (0x00074ff2) list_medium_line_t3_g3_g1_ParamLimits

0x9ea6,	// (0x00074ff2) list_medium_line_t3_g3_g1

0xa15f,	// (0x000752ab) list_medium_line_t3_g3_g2_ParamLimits

0xa15f,	// (0x000752ab) list_medium_line_t3_g3_g2

0x9eb2,	// (0x00074ffe) list_medium_line_t3_g3_g3_ParamLimits

0x9eb2,	// (0x00074ffe) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007aeb4) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007aeb4) list_medium_line_t3_g3_g

0x81ca,	// (0x00073316) list_medium_line_t3_g3_t1_ParamLimits

0x81ca,	// (0x00073316) list_medium_line_t3_g3_t1

0x81e3,	// (0x0007332f) list_medium_line_t3_g3_t2_ParamLimits

0x81e3,	// (0x0007332f) list_medium_line_t3_g3_t2

0x81f9,	// (0x00073345) list_medium_line_t3_g3_t3_ParamLimits

0x81f9,	// (0x00073345) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007aec0) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007aec0) list_medium_line_t3_g3_t

0xa09c,	// (0x000751e8) list_medium_line_right_iconx2_g1

0xa02e,	// (0x0007517a) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007aec7) list_medium_line_right_iconx2_g

0xa180,	// (0x000752cc) list_medium_line_right_iconx2_t1

0xa09c,	// (0x000751e8) list_medium_line_t2_right_iconx2_g1

0xa02e,	// (0x0007517a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007aec7) list_medium_line_t2_right_iconx2_g

0x8213,	// (0x0007335f) list_medium_line_t2_right_iconx2_t1

0x8223,	// (0x0007336f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007aecc) list_medium_line_t2_right_iconx2_t

0x8235,	// (0x00073381) list_medium_line_x4_t4_t1

0x8243,	// (0x0007338f) list_medium_line_x4_t4_t2

0x8253,	// (0x0007339f) list_medium_line_x4_t4_t3

0x8263,	// (0x000733af) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007aed1) list_medium_line_x4_t4_t

0x82b6,	// (0x00073402) tport_appsw_pane_ParamLimits

0x82b6,	// (0x00073402) tport_appsw_pane

0x82ce,	// (0x0007341a) tport_contact_pane_ParamLimits

0x82ce,	// (0x0007341a) tport_contact_pane

0x82e6,	// (0x00073432) tport_listscroll_pane_ParamLimits

0x82e6,	// (0x00073432) tport_listscroll_pane

0x8300,	// (0x0007344c) cell_tport_appsw_pane_ParamLimits

0x8300,	// (0x0007344c) cell_tport_appsw_pane

0xda21,	// (0x00078b6d) tport_appsw_pane_g1_ParamLimits

0xda21,	// (0x00078b6d) tport_appsw_pane_g1

0xeb6a,	// (0x00079cb6) tport_contact_pane_g1

0xe4f4,	// (0x00079640) tport_contact_pane_t1

0xeb73,	// (0x00079cbf) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007aeda) tport_contact_pane_t

0xeb81,	// (0x00079ccd) list_tport_pane

0xeb8a,	// (0x00079cd6) scroll_pane_cp_030

0x8348,	// (0x00073494) cell_tport_appsw_pane_g1

0x8358,	// (0x000734a4) cell_tport_appsw_pane_t1

0x93a7,	// (0x000744f3) grid_highlight_pane_cp019

0x8366,	// (0x000734b2) list_tport_double_graphic_pane_ParamLimits

0x8366,	// (0x000734b2) list_tport_double_graphic_pane

0xb07c,	// (0x000761c8) list_highlight_pane_cp023_ParamLimits

0xb07c,	// (0x000761c8) list_highlight_pane_cp023

0x8373,	// (0x000734bf) list_tport_double_graphic_pane_g1_ParamLimits

0x8373,	// (0x000734bf) list_tport_double_graphic_pane_g1

0x8380,	// (0x000734cc) list_tport_double_graphic_pane_t1_ParamLimits

0x8380,	// (0x000734cc) list_tport_double_graphic_pane_t1

0x8395,	// (0x000734e1) list_tport_double_graphic_pane_t2_ParamLimits

0x8395,	// (0x000734e1) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007aee6) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007aee6) list_tport_double_graphic_pane_t

0x93a7,	// (0x000744f3) main_cale_note_pane

0x5f71,	// (0x000710bd) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5f71,	// (0x000710bd) cell_vitu2_function_top_wide_pane_cp01

0x79a5,	// (0x00072af1) wait_bar_pane_cp05_ParamLimits

0xb07c,	// (0x000761c8) listscroll_cmail_pane

0xeb93,	// (0x00079cdf) list_cmail_pane

0x83a7,	// (0x000734f3) list_cmail_body_pane

0x83bb,	// (0x00073507) list_single_cmail_header_caption_pane

0x83d3,	// (0x0007351f) list_single_cmail_header_detail_pane_ParamLimits

0x83d3,	// (0x0007351f) list_single_cmail_header_detail_pane

0xeba3,	// (0x00079cef) list_single_cmail_header_caption_pane_t1

0x8406,	// (0x00073552) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8406,	// (0x00073552) list_single_cmail_header_detail_pane_g1

0xa18e,	// (0x000752da) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa18e,	// (0x000752da) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007aeeb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007aeeb) list_single_cmail_header_detail_pane_g

0x841e,	// (0x0007356a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x841e,	// (0x0007356a) list_single_cmail_header_detail_pane_t1

0x845c,	// (0x000735a8) list_single_cmail_header_editor_pane_bg_ParamLimits

0x845c,	// (0x000735a8) list_single_cmail_header_editor_pane_bg

0xebbe,	// (0x00079d0a) list_cmail_body_pane_g1

0xebc7,	// (0x00079d13) list_cmail_body_pane_t1

0xda41,	// (0x00078b8d) list_single_cmail_header_editor_pane_bg_g1

0xb10e,	// (0x0007625a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xda51,	// (0x00078b9d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xda49,	// (0x00078b95) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdc65,	// (0x00078db1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xda71,	// (0x00078bbd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xda61,	// (0x00078bad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xda69,	// (0x00078bb5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb0ee,	// (0x0007623a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8475,	// (0x000735c1) calenote_gesture_pane_ParamLimits

0x8475,	// (0x000735c1) calenote_gesture_pane

0x8495,	// (0x000735e1) calenote_window_pane_ParamLimits

0x8495,	// (0x000735e1) calenote_window_pane

0xebd5,	// (0x00079d21) popup_note_window_cp01

0x84b1,	// (0x000735fd) calenote_swipe_1_pane_ParamLimits

0x84b1,	// (0x000735fd) calenote_swipe_1_pane

0x7d79,	// (0x00072ec5) calenote_swipe_2_pane_ParamLimits

0x7d79,	// (0x00072ec5) calenote_swipe_2_pane

0xe9e2,	// (0x00079b2e) calenote_swipe_1_pane_g1_ParamLimits

0xe9e2,	// (0x00079b2e) calenote_swipe_1_pane_g1

0xe9ef,	// (0x00079b3b) calenote_swipe_1_pane_g2_ParamLimits

0xe9ef,	// (0x00079b3b) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0007ae15) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0007ae15) calenote_swipe_1_pane_g

0xebe7,	// (0x00079d33) calenote_swipe_1_pane_t1_ParamLimits

0xebe7,	// (0x00079d33) calenote_swipe_1_pane_t1

0xe9e2,	// (0x00079b2e) calenote_swipe_2_pane_g1_ParamLimits

0xe9e2,	// (0x00079b2e) calenote_swipe_2_pane_g1

0xec06,	// (0x00079d52) calenote_swipe_2_pane_g2_ParamLimits

0xec06,	// (0x00079d52) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007aef7) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007aef7) calenote_swipe_2_pane_g

0xec12,	// (0x00079d5e) calenote_swipe_2_pane_t1_ParamLimits

0xec12,	// (0x00079d5e) calenote_swipe_2_pane_t1

0x93a7,	// (0x000744f3) main_mup_navstr_pane

0x4c27,	// (0x0006fd73) main_mup3_pane_t7_ParamLimits

0x4c27,	// (0x0006fd73) main_mup3_pane_t7

0x9951,	// (0x00074a9d) main_mp4_pane_g6_ParamLimits

0x9951,	// (0x00074a9d) main_mp4_pane_g6

0x9af5,	// (0x00074c41) main_image3_pane_t4_ParamLimits

0x9af5,	// (0x00074c41) main_image3_pane_t4

0x84c6,	// (0x00073612) popup_navstr_preview_pane_ParamLimits

0x84c6,	// (0x00073612) popup_navstr_preview_pane

0x84da,	// (0x00073626) scroll_navstr_pane_ParamLimits

0x84da,	// (0x00073626) scroll_navstr_pane

0x93a7,	// (0x000744f3) bg_popup_preview_window_pane_cp04

0xec39,	// (0x00079d85) popup_navstr_preview_pane_t1

0x84ee,	// (0x0007363a) scroll_navstr_pane_g1_ParamLimits

0x84ee,	// (0x0007363a) scroll_navstr_pane_g1

0x8502,	// (0x0007364e) scroll_navstr_pane_t1_ParamLimits

0x8502,	// (0x0007364e) scroll_navstr_pane_t1

0xebde,	// (0x00079d2a) bg_button_pane_cp014

0xebde,	// (0x00079d2a) bg_button_pane_cp030

0x9fd4,	// (0x00075120) list_double_fisheye_pane_g4_ParamLimits

0x9fd4,	// (0x00075120) list_double_fisheye_pane_g4

0x9fe0,	// (0x0007512c) list_double_fisheye_pane_g5_ParamLimits

0x9fe0,	// (0x0007512c) list_double_fisheye_pane_g5

0xc444,	// (0x00077590) sp_fs_scroll_pane_cp03

0xead5,	// (0x00079c21) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xeae1,	// (0x00079c2d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0007ae32) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xeaed,	// (0x00079c39) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xeb9b,	// (0x00079ce7) sp_fs_scroll_pane_cp02

0xada9,	// (0x00075ef5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xada9,	// (0x00075ef5) popup_sp_fs_calendar_preview_list_single_pane

0x93a7,	// (0x000744f3) main_cam6_pano_pane

0x941f,	// (0x0007456b) main_mup3_pane_ParamLimits

0x93a7,	// (0x000744f3) main_phacti_pane

0x7878,	// (0x000729c4) bg_button_pane_cp11

0x7892,	// (0x000729de) main_mobtv_info_pane_g2_ParamLimits

0x7892,	// (0x000729de) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0007ad92) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0007ad92) main_mobtv_info_pane_g

0x7a6f,	// (0x00072bbb) sc_clock_pane_t5_ParamLimits

0x7a6f,	// (0x00072bbb) sc_clock_pane_t5

0x7b01,	// (0x00072c4d) main_radioblah_pane_g1_ParamLimits

0xe92e,	// (0x00079a7a) main_radioblah_pane_t3_ParamLimits

0xe92e,	// (0x00079a7a) main_radioblah_pane_t3

0xe946,	// (0x00079a92) main_radioblah_pane_t4_ParamLimits

0xe946,	// (0x00079a92) main_radioblah_pane_t4

0x7b29,	// (0x00072c75) main_radioblah_text_pane_ParamLimits

0x7b29,	// (0x00072c75) main_radioblah_text_pane

0x7b3b,	// (0x00072c87) main_radioblah_info_pane_g1_ParamLimits

0x7bd4,	// (0x00072d20) main_radioblah_info_pane_t4_ParamLimits

0x7bd4,	// (0x00072d20) main_radioblah_info_pane_t4

0xb07c,	// (0x000761c8) main_sp_fs_calendar_pane

0x8518,	// (0x00073664) main_phacti_pane_g1

0x8520,	// (0x0007366c) phacti_note_pane_ParamLimits

0x8520,	// (0x0007366c) phacti_note_pane

0xec50,	// (0x00079d9c) phacti_term_pane_ParamLimits

0xec50,	// (0x00079d9c) phacti_term_pane

0xec65,	// (0x00079db1) phacti_note_pane_t1_ParamLimits

0xec65,	// (0x00079db1) phacti_note_pane_t1

0xa1be,	// (0x0007530a) phacti_term_pane_g1

0xa1c6,	// (0x00075312) phacti_term_pane_t1_ParamLimits

0xa1c6,	// (0x00075312) phacti_term_pane_t1

0xec7c,	// (0x00079dc8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xec84,	// (0x00079dd0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x003c,	// (0x0006b188) popup_sp_fs_calendar_preview_list_single_pane_g

0xec8c,	// (0x00079dd8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xec8c,	// (0x00079dd8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xeca2,	// (0x00079dee) aid_popup_sp_fs_bg_corner_pane

0xcfe6,	// (0x00078132) popup_sp_fs_calendar_preview_bg_pane_g1

0x93a7,	// (0x000744f3) popup_sp_fs_calendar_preview_bg_pane

0x120c,	// (0x0006c358) popup_sp_fs_calendar_preview_list_pane

0xcbdc,	// (0x00077d28) bg_main_sp_fs_cale_pane_ParamLimits

0xcbdc,	// (0x00077d28) bg_main_sp_fs_cale_pane

0xa1f9,	// (0x00075345) listscroll_cale_mrui_pane_ParamLimits

0xa1f9,	// (0x00075345) listscroll_cale_mrui_pane

0xa20e,	// (0x0007535a) listscroll_sp_fs_schedule_track_pane

0xa217,	// (0x00075363) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa217,	// (0x00075363) main_sp_fs_ctrlbar_pane_cp01

0xecaa,	// (0x00079df6) main_sp_fs_ribbon_pane

0xa22a,	// (0x00075376) popup_sp_fs_cale_preview_window

0x8595,	// (0x000736e1) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8595,	// (0x000736e1) list_single_sp_fs_schedule_track_pane

0xb07c,	// (0x000761c8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb07c,	// (0x000761c8) bg_sp_fs_highlight_list_pane_cp03

0x85aa,	// (0x000736f6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85aa,	// (0x000736f6) list_single_sp_fs_schedule_track_pane_g1

0x85b6,	// (0x00073702) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85b6,	// (0x00073702) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0007af01) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0007af01) list_single_sp_fs_schedule_track_pane_g

0x85c2,	// (0x0007370e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85c2,	// (0x0007370e) list_single_sp_fs_schedule_track_pane_t1

0x85dc,	// (0x00073728) sp_fs_schedule_track_pane_ParamLimits

0x85dc,	// (0x00073728) sp_fs_schedule_track_pane

0xecb2,	// (0x00079dfe) sp_fs_schedule_track_pane_g1

0xecba,	// (0x00079e06) sp_fs_schedule_track_pane_g2

0xecc2,	// (0x00079e0e) sp_fs_schedule_track_pane_g3

0xecca,	// (0x00079e16) sp_fs_schedule_track_pane_g4

0xecd2,	// (0x00079e1e) sp_fs_schedule_track_pane_g5

0x0004,

0x0046,	// (0x0006b192) sp_fs_schedule_track_pane_g

0xda41,	// (0x00078b8d) bg_sp_fs_schedule_viewer_highlight_g1

0xb10e,	// (0x0007625a) bg_sp_fs_schedule_viewer_highlight_g2

0xda49,	// (0x00078b95) bg_sp_fs_schedule_viewer_highlight_g3

0xda51,	// (0x00078b9d) bg_sp_fs_schedule_viewer_highlight_g4

0xdc65,	// (0x00078db1) bg_sp_fs_schedule_viewer_highlight_g5

0xda61,	// (0x00078bad) bg_sp_fs_schedule_viewer_highlight_g6

0xda69,	// (0x00078bb5) bg_sp_fs_schedule_viewer_highlight_g7

0xda71,	// (0x00078bbd) bg_sp_fs_schedule_viewer_highlight_g8

0xb0ee,	// (0x0007623a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdba,	// (0x0007af06) bg_sp_fs_schedule_viewer_highlight_g

0x93a7,	// (0x000744f3) bg_main_sp_fs_ribbon_pane

0x85ed,	// (0x00073739) main_sp_fs_ribbon_pane_g1

0xecda,	// (0x00079e26) main_sp_fs_ribbon_pane_t1

0x85f6,	// (0x00073742) main_sp_fs_ribbon_pane_t2

0xece9,	// (0x00079e35) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdcd,	// (0x0007af19) main_sp_fs_ribbon_pane_t

0xecf8,	// (0x00079e44) main_sp_fs_ribbon_scheduler_pane

0xed00,	// (0x00079e4c) bg_main_sp_fs_ribbon_pane_g1

0xed09,	// (0x00079e55) bg_main_sp_fs_ribbon_pane_g2

0xed12,	// (0x00079e5e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x006b,	// (0x0006b1b7) bg_main_sp_fs_ribbon_pane_g

0xed1a,	// (0x00079e66) main_sp_fs_ribbon_scheduler_pane_g1

0xed23,	// (0x00079e6f) main_sp_fs_ribbon_scheduler_pane_g2

0xed2c,	// (0x00079e78) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0072,	// (0x0006b1be) main_sp_fs_ribbon_scheduler_pane_g

0xed35,	// (0x00079e81) list_cale_mrui_pane

0x8605,	// (0x00073751) sp_fs_scroll_pane_cp07_ParamLimits

0x8605,	// (0x00073751) sp_fs_scroll_pane_cp07

0x8621,	// (0x0007376d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8621,	// (0x0007376d) bg_sp_fs_schedule_viewer_highlight

0xed42,	// (0x00079e8e) list_single_sp_fs_schedule_track_pane_cp01

0xed4a,	// (0x00079e96) list_sp_fs_schedule_track_pane

0xed52,	// (0x00079e9e) sp_fs_scroll_pane_cp06_ParamLimits

0xed52,	// (0x00079e9e) sp_fs_scroll_pane_cp06

0xcfe6,	// (0x00078132) bgmain_sp_fs_calendar_pane_g1

0x8631,	// (0x0007377d) list_single_cale_mrui_pane_ParamLimits

0x8631,	// (0x0007377d) list_single_cale_mrui_pane

0xa23c,	// (0x00075388) list_single_cale_mrui_row_pane_ParamLimits

0xa23c,	// (0x00075388) list_single_cale_mrui_row_pane

0xa249,	// (0x00075395) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa249,	// (0x00075395) list_single_cale_mrui_row_pane_g1

0xa281,	// (0x000753cd) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa281,	// (0x000753cd) list_single_cale_mrui_row_pane_t1

0x8653,	// (0x0007379f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8653,	// (0x0007379f) list_single_cale_mrui_row_pane_t2

0xa293,	// (0x000753df) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa293,	// (0x000753df) list_single_cale_mrui_row_pane_t3

0xa2c2,	// (0x0007540e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa2c2,	// (0x0007540e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfddb,	// (0x0007af27) list_single_cale_mrui_row_pane_t_ParamLimits

0xfddb,	// (0x0007af27) list_single_cale_mrui_row_pane_t

0x86bb,	// (0x00073807) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86bb,	// (0x00073807) list_single_cmail_header_editor_pane_bg_cp01

0x86e1,	// (0x0007382d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x86e1,	// (0x0007382d) list_single_cmail_header_editor_pane_bg_cp02

0x8701,	// (0x0007384d) main_radioblah_text_pane_t1_ParamLimits

0x8701,	// (0x0007384d) main_radioblah_text_pane_t1

0xed71,	// (0x00079ebd) cam6_indi_pane_cp01

0xed79,	// (0x00079ec5) cam6_mode_pane_cp01

0xed81,	// (0x00079ecd) cam6_pano_pane

0xed8a,	// (0x00079ed6) cam6_zoom_pane_cp01

0xed92,	// (0x00079ede) cam6_pano_image_pane

0xed9d,	// (0x00079ee9) cam6_pano_pane_g1

0xe69b,	// (0x000797e7) cam6_pano_pane_g2

0xeda6,	// (0x00079ef2) cam6_pano_pane_g3

0xedaf,	// (0x00079efb) cam6_pano_pane_g4

0xd588,	// (0x000786d4) cam6_pano_pane_g5

0xedb8,	// (0x00079f04) cam6_pano_pane_g6

0xedc2,	// (0x00079f0e) cam6_pano_pane_g7

0xedca,	// (0x00079f16) cam6_pano_pane_g8

0xedd3,	// (0x00079f1f) cam6_pano_pane_g9

0x0008,

0xfde4,	// (0x0007af30) cam6_pano_pane_g

0x93a7,	// (0x000744f3) main_browser_tag_pane

0xec31,	// (0x00079d7d) grid_navstr_albumart_pane

0xedde,	// (0x00079f2a) cell_navstr_albumart_pane_ParamLimits

0xedde,	// (0x00079f2a) cell_navstr_albumart_pane

0xb91a,	// (0x00076a66) cell_navstr_albumart_pane_g1

0xc9ed,	// (0x00077b39) cell_navstr_albumart_pane_g2

0xc9fd,	// (0x00077b49) cell_navstr_albumart_pane_g3

0xc9f5,	// (0x00077b41) cell_navstr_albumart_pane_g4

0x0003,

0xfdf7,	// (0x0007af43) cell_navstr_albumart_pane_g

0x871c,	// (0x00073868) bt_list_pane_ParamLimits

0x871c,	// (0x00073868) bt_list_pane

0xee00,	// (0x00079f4c) bt_list_pane_t1

0xee0f,	// (0x00079f5b) bt_list_pane_t2

0x0001,

0x0092,	// (0x0006b1de) bt_list_pane_t

0x93a7,	// (0x000744f3) main_cale_prevew_pane

0x8731,	// (0x0007387d) popup_cale_preview_window_ParamLimits

0x8731,	// (0x0007387d) popup_cale_preview_window

0xb07c,	// (0x000761c8) bg_popup_preview_window_pane_cp05_ParamLimits

0xb07c,	// (0x000761c8) bg_popup_preview_window_pane_cp05

0xee1e,	// (0x00079f6a) list_cale_preview_pane_ParamLimits

0xee1e,	// (0x00079f6a) list_cale_preview_pane

0xee2a,	// (0x00079f76) list_double_cale_preview_pane_ParamLimits

0xee2a,	// (0x00079f76) list_double_cale_preview_pane

0xee3c,	// (0x00079f88) list_single_cale_preview_pane_ParamLimits

0xee3c,	// (0x00079f88) list_single_cale_preview_pane

0xee50,	// (0x00079f9c) list_single_cale_preview_pane_g1

0xee58,	// (0x00079fa4) list_single_cale_preview_pane_t1_ParamLimits

0xee58,	// (0x00079fa4) list_single_cale_preview_pane_t1

0xee6d,	// (0x00079fb9) list_double_cale_preview_pane_g1

0xee75,	// (0x00079fc1) list_double_cale_preview_pane_t1_ParamLimits

0xee75,	// (0x00079fc1) list_double_cale_preview_pane_t1

0xee8a,	// (0x00079fd6) list_double_cale_preview_pane_t2_ParamLimits

0xee8a,	// (0x00079fd6) list_double_cale_preview_pane_t2

0x0001,

0x0097,	// (0x0006b1e3) list_double_cale_preview_pane_t_ParamLimits

0x0097,	// (0x0006b1e3) list_double_cale_preview_pane_t

0x93a7,	// (0x000744f3) main_ezdial_pane

0xb07c,	// (0x000761c8) main_sp_fs_email_pane_ParamLimits

0x7df7,	// (0x00072f43) cmail_ddmenu_btn01_pane_ParamLimits

0x7df7,	// (0x00072f43) cmail_ddmenu_btn01_pane

0x7e0a,	// (0x00072f56) cmail_ddmenu_btn02_pane_ParamLimits

0x7e0a,	// (0x00072f56) cmail_ddmenu_btn02_pane

0x7e2d,	// (0x00072f79) cmail_ddmenu_btn03_pane_ParamLimits

0x7e2d,	// (0x00072f79) cmail_ddmenu_btn03_pane

0x7e53,	// (0x00072f9f) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e77,	// (0x00072fc3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x83a7,	// (0x000734f3) list_cmail_body_pane_ParamLimits

0x83fb,	// (0x00073547) bg_button_pane_cp12

0xebb1,	// (0x00079cfd) list_single_cmail_header_detail_pane_g3_ParamLimits

0xebb1,	// (0x00079cfd) list_single_cmail_header_detail_pane_g3

0xa19a,	// (0x000752e6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa19a,	// (0x000752e6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007aef2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007aef2) list_single_cmail_header_detail_pane_t

0xa1db,	// (0x00075327) phacti_term_pane_t2_ParamLimits

0xa1db,	// (0x00075327) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007aefc) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007aefc) phacti_term_pane_t

0xeea2,	// (0x00079fee) aid_size_list_single_double

0x874a,	// (0x00073896) popup_ezdial_listscroll_window

0x8765,	// (0x000738b1) popup_number_entry_window_cp01

0xb7ab,	// (0x000768f7) bg_popup_call_pane_cp09

0xeeae,	// (0x00079ffa) ezdial_list_pane

0xeeb6,	// (0x0007a002) scroll_pane_cp23

0xcbdc,	// (0x00077d28) bg_button_pane_cp028_ParamLimits

0xcbdc,	// (0x00077d28) bg_button_pane_cp028

0x8773,	// (0x000738bf) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8773,	// (0x000738bf) cmail_ddmenu_btn01_pane_g1

0x877f,	// (0x000738cb) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x877f,	// (0x000738cb) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe00,	// (0x0007af4c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe00,	// (0x0007af4c) cmail_ddmenu_btn01_pane_g

0xeebe,	// (0x0007a00a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeebe,	// (0x0007a00a) cmail_ddmenu_btn01_pane_t1

0xcbdc,	// (0x00077d28) bg_button_pane_cp029_ParamLimits

0xcbdc,	// (0x00077d28) bg_button_pane_cp029

0x8795,	// (0x000738e1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8795,	// (0x000738e1) cmail_ddmenu_btn02_pane_g1

0x87ad,	// (0x000738f9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87ad,	// (0x000738f9) cmail_ddmenu_btn02_pane_t1

0xb07c,	// (0x000761c8) bg_button_pane_cp031_ParamLimits

0xb07c,	// (0x000761c8) bg_button_pane_cp031

0x8795,	// (0x000738e1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8795,	// (0x000738e1) cmail_ddmenu_btn03_pane_g1

0x87ad,	// (0x000738f9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87ad,	// (0x000738f9) cmail_ddmenu_btn03_pane_t1

0x57f7,	// (0x00070943) cell_dialer2_keypad_pane_t1_ParamLimits

0x5811,	// (0x0007095d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5811,	// (0x0007095d) cell_dialer2_keypad_pane_t1_copy1

0x76d1,	// (0x0007281d) ncimui_group_button_pane

0xb07c,	// (0x000761c8) main_sp_fs_calendar_pane_ParamLimits

0x83bb,	// (0x00073507) list_single_cmail_header_caption_pane_ParamLimits

0xa1f0,	// (0x0007533c) aid_recal_txt_sm_pane

0x93a7,	// (0x000744f3) mian_recal_day_pane

0xa22a,	// (0x00075376) popup_sp_fs_cale_preview_window_ParamLimits

0xeed4,	// (0x0007a020) list_recal_day_pane

0xa30c,	// (0x00075458) list_single_recal_day_pane_ParamLimits

0xa30c,	// (0x00075458) list_single_recal_day_pane

0xeefb,	// (0x0007a047) list_single_recal_day_pane_g1_ParamLimits

0xeefb,	// (0x0007a047) list_single_recal_day_pane_g1

0xa31e,	// (0x0007546a) list_single_recal_day_pane_g2_ParamLimits

0xa31e,	// (0x0007546a) list_single_recal_day_pane_g2

0xa32e,	// (0x0007547a) list_single_recal_day_pane_g3_ParamLimits

0xa32e,	// (0x0007547a) list_single_recal_day_pane_g3

0x87d1,	// (0x0007391d) list_single_recal_day_pane_g4_ParamLimits

0x87d1,	// (0x0007391d) list_single_recal_day_pane_g4

0xa33a,	// (0x00075486) list_single_recal_day_pane_g5_ParamLimits

0xa33a,	// (0x00075486) list_single_recal_day_pane_g5

0xa34a,	// (0x00075496) list_single_recal_day_pane_g6_ParamLimits

0xa34a,	// (0x00075496) list_single_recal_day_pane_g6

0x0004,

0xfe0f,	// (0x0007af5b) list_single_recal_day_pane_g_ParamLimits

0xfe0f,	// (0x0007af5b) list_single_recal_day_pane_g

0xb092,	// (0x000761de) list_single_recal_day_pane_t1

0xb0a4,	// (0x000761f0) list_single_recal_day_pane_t2

0x0001,

0xfe1a,	// (0x0007af66) list_single_recal_day_pane_t

0x87f1,	// (0x0007393d) ncimui_query_button_pane_ParamLimits

0x87f1,	// (0x0007393d) ncimui_query_button_pane

0x8801,	// (0x0007394d) ncimui_query_button_pane_t1_ParamLimits

0x8801,	// (0x0007394d) ncimui_query_button_pane_t1

0xef07,	// (0x0007a053) ncimui_query_button_pane_t2_ParamLimits

0xef07,	// (0x0007a053) ncimui_query_button_pane_t2

0x0001,

0xfe1f,	// (0x0007af6b) ncimui_query_button_pane_t_ParamLimits

0xfe1f,	// (0x0007af6b) ncimui_query_button_pane_t

0x8814,	// (0x00073960) query_button_pane_ParamLimits

0x8814,	// (0x00073960) query_button_pane

0x93a7,	// (0x000744f3) bg_button_pane_cp0028

0xef1a,	// (0x0007a066) query_button_pane_t1

0x389a,	// (0x0006e9e6) main_tport_pane_ParamLimits

0x8273,	// (0x000733bf) bg_popup_window_pane_cp01_ParamLimits

0x8273,	// (0x000733bf) bg_popup_window_pane_cp01

0x828e,	// (0x000733da) heading_pane_cp08_ParamLimits

0x828e,	// (0x000733da) heading_pane_cp08

0x82a1,	// (0x000733ed) heading_pane_cp07_ParamLimits

0x82a1,	// (0x000733ed) heading_pane_cp07

0x8348,	// (0x00073494) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007aedf) cell_tport_appsw_pane_g

0x9666,	// (0x000747b2) input_candi_list_open_g1

0xb2c5,	// (0x00076411) list_cale_time_pane_g6_ParamLimits

0xb2c5,	// (0x00076411) list_cale_time_pane_g6

0x4653,	// (0x0006f79f) aid_size_touch_calib_1_ParamLimits

0x4653,	// (0x0006f79f) aid_size_touch_calib_1

0x4665,	// (0x0006f7b1) aid_size_touch_calib_2_ParamLimits

0x4665,	// (0x0006f7b1) aid_size_touch_calib_2

0x467d,	// (0x0006f7c9) aid_size_touch_calib_3_ParamLimits

0x467d,	// (0x0006f7c9) aid_size_touch_calib_3

0x469b,	// (0x0006f7e7) aid_size_touch_calib_4_ParamLimits

0x469b,	// (0x0006f7e7) aid_size_touch_calib_4

0x46b3,	// (0x0006f7ff) main_touch_calib_button_group_pane_ParamLimits

0x46b3,	// (0x0006f7ff) main_touch_calib_button_group_pane

0x46cb,	// (0x0006f817) main_touch_calib_pane_g1_ParamLimits

0x46dd,	// (0x0006f829) main_touch_calib_pane_g2_ParamLimits

0x46ef,	// (0x0006f83b) main_touch_calib_pane_g3_ParamLimits

0x4701,	// (0x0006f84d) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0007a8a8) main_touch_calib_pane_g_ParamLimits

0x4713,	// (0x0006f85f) main_touch_calib_pane_t1_ParamLimits

0x472d,	// (0x0006f879) main_touch_calib_pane_t2_ParamLimits

0x4747,	// (0x0006f893) main_touch_calib_pane_t3_ParamLimits

0x475b,	// (0x0006f8a7) main_touch_calib_pane_t4_ParamLimits

0x476f,	// (0x0006f8bb) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0007a8b1) main_touch_calib_pane_t_ParamLimits

0xd346,	// (0x00078492) list_single_fp_cale_pane_g3_ParamLimits

0xd346,	// (0x00078492) list_single_fp_cale_pane_g3

0x941f,	// (0x0007456b) bg_button_pane_cp012_ParamLimits

0x941f,	// (0x0007456b) bg_vkb2_func_pane_cp03_ParamLimits

0x6781,	// (0x000718cd) cell_vitu2_function_top_pane_g1_ParamLimits

0x941f,	// (0x0007456b) bg_vkb2_func_pane_cp04_ParamLimits

0x765f,	// (0x000727ab) main_ncimui_button_group_pane_ParamLimits

0x765f,	// (0x000727ab) main_ncimui_button_group_pane

0x76bf,	// (0x0007280b) main_ncimui_pane_t3_ParamLimits

0x76bf,	// (0x0007280b) main_ncimui_pane_t3

0xec47,	// (0x00079d93) phacti_button_group_pane

0xeea2,	// (0x00079fee) aid_size_list_single_double_ParamLimits

0x874a,	// (0x00073896) popup_ezdial_listscroll_window_ParamLimits

0x8765,	// (0x000738b1) popup_number_entry_window_cp01_ParamLimits

0x8827,	// (0x00073973) phacti_button_pane_ParamLimits

0x8827,	// (0x00073973) phacti_button_pane

0x93a7,	// (0x000744f3) bg_button_pane_cp14

0xef28,	// (0x0007a074) phacti_button_pane_t1

0x8838,	// (0x00073984) main_touch_calib_button_pane_ParamLimits

0x8838,	// (0x00073984) main_touch_calib_button_pane

0xac93,	// (0x00075ddf) bg_button_pane_cp18_ParamLimits

0xac93,	// (0x00075ddf) bg_button_pane_cp18

0xef36,	// (0x0007a082) main_touch_calib_button_pane_t1_ParamLimits

0xef36,	// (0x0007a082) main_touch_calib_button_pane_t1

0xef4c,	// (0x0007a098) main_touch_calib_button_pane_t2_ParamLimits

0xef4c,	// (0x0007a098) main_touch_calib_button_pane_t2

0x0001,

0x00c0,	// (0x0006b20c) main_touch_calib_button_pane_t_ParamLimits

0x00c0,	// (0x0006b20c) main_touch_calib_button_pane_t

0x93a7,	// (0x000744f3) cell_ncimui_button_pane

0x93a7,	// (0x000744f3) bg_button_pane_cp032

0xef6a,	// (0x0007a0b6) cell_ncimui_button_pane_t1

0x9ad5,	// (0x00074c21) image3_infobar_pane_ParamLimits

0x9ad5,	// (0x00074c21) image3_infobar_pane

0x7a9b,	// (0x00072be7) fs_bigclock_status_pane_ParamLimits

0x7a9b,	// (0x00072be7) fs_bigclock_status_pane

0x7aa8,	// (0x00072bf4) main_fs_bigclock_clock_pane_ParamLimits

0x7aa8,	// (0x00072bf4) main_fs_bigclock_clock_pane

0x7ac4,	// (0x00072c10) main_fs_bigclock_indi_pane_ParamLimits

0x7ac4,	// (0x00072c10) main_fs_bigclock_indi_pane

0x7add,	// (0x00072c29) main_fs_bigclock_swipe_pane_ParamLimits

0x7add,	// (0x00072c29) main_fs_bigclock_swipe_pane

0x93a7,	// (0x000744f3) main_fs_clock_dumped_data

0xe7a8,	// (0x000798f4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe7a8,	// (0x000798f4) list_single_fs_bigclock_indicator_pane_g1

0xe7c3,	// (0x0007990f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe7c3,	// (0x0007990f) list_single_fs_bigclock_indicator_pane_g2

0xe7dd,	// (0x00079929) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe7dd,	// (0x00079929) list_single_fs_bigclock_indicator_pane_g3

0xe7f7,	// (0x00079943) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe7f7,	// (0x00079943) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0007adc6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0007adc6) list_single_fs_bigclock_indicator_pane_g

0xe820,	// (0x0007996c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe820,	// (0x0007996c) list_single_fs_bigclock_indicator_pane_t1

0xe848,	// (0x00079994) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe848,	// (0x00079994) list_single_fs_bigclock_indicator_pane_t2

0xe870,	// (0x000799bc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe870,	// (0x000799bc) list_single_fs_bigclock_indicator_pane_t3

0xe898,	// (0x000799e4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe898,	// (0x000799e4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0007add1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0007add1) list_single_fs_bigclock_indicator_pane_t

0xef78,	// (0x0007a0c4) image3_infobar_fav_pane_ParamLimits

0xef78,	// (0x0007a0c4) image3_infobar_fav_pane

0xef88,	// (0x0007a0d4) image3_infobar_loc_pane_ParamLimits

0xef88,	// (0x0007a0d4) image3_infobar_loc_pane

0xef9c,	// (0x0007a0e8) image3_infobar_time_pane_ParamLimits

0xef9c,	// (0x0007a0e8) image3_infobar_time_pane

0xcfe6,	// (0x00078132) image3_infobar_time_pane_g1

0xefac,	// (0x0007a0f8) image3_infobar_time_pane_t1

0xcfe6,	// (0x00078132) image3_infobar_loc_pane_g1

0xefba,	// (0x0007a106) image3_infobar_loc_pane_g2

0x0001,

0xfe24,	// (0x0007af70) image3_infobar_loc_pane_g

0xefc2,	// (0x0007a10e) image3_infobar_loc_pane_t1

0xcfe6,	// (0x00078132) image3_infobar_fav_pane_g1

0xefd0,	// (0x0007a11c) image3_infobar_fav_pane_g2

0x0001,

0xfe29,	// (0x0007af75) image3_infobar_fav_pane_g

0xefd8,	// (0x0007a124) fs_bigclock_status_battery_pane

0xefe1,	// (0x0007a12d) fs_bigclock_status_signal_pane

0xefea,	// (0x0007a136) fs_bigclock_status_title_pane

0xeff3,	// (0x0007a13f) fs_bigclock_status_signal_pane_g1

0xeffc,	// (0x0007a148) fs_bigclock_status_signal_pane_g2

0x0001,

0x00c5,	// (0x0006b211) fs_bigclock_status_signal_pane_g

0xf004,	// (0x0007a150) fs_bigclock_status_battery_pane_g1

0xf00d,	// (0x0007a159) fs_bigclock_status_battery_pane_g2

0x0001,

0x00ca,	// (0x0006b216) fs_bigclock_status_battery_pane_g

0xf015,	// (0x0007a161) fs_bigclock_status_title_pane_t1

0xcfe6,	// (0x00078132) main_fs_bigclock_clock_pane_g1

0x884d,	// (0x00073999) main_fs_bigclock_clock_pane_g2

0x884d,	// (0x00073999) main_fs_bigclock_clock_pane_g3

0x884d,	// (0x00073999) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe2e,	// (0x0007af7a) main_fs_bigclock_clock_pane_g

0x8855,	// (0x000739a1) main_fs_bigclock_clock_pane_t1

0x8863,	// (0x000739af) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe37,	// (0x0007af83) main_fs_bigclock_clock_pane_t

0xf023,	// (0x0007a16f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xf023,	// (0x0007a16f) list_single_fs_bigclock_indicator_pane

0x8872,	// (0x000739be) list_single_fs_bigclock_pane_ParamLimits

0x8872,	// (0x000739be) list_single_fs_bigclock_pane

0xf03d,	// (0x0007a189) main_fs_bigclock_indicator_pane_t1

0xf04c,	// (0x0007a198) list_single_fs_bigclock_pane_g1

0xf054,	// (0x0007a1a0) list_single_fs_bigclock_pane_t1

0xcfe6,	// (0x00078132) main_fs_bigclock_swipe_pane_g1

0xf097,	// (0x0007a1e3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe43,	// (0x0007af8f) main_fs_bigclock_swipe_pane_g

0xf09f,	// (0x0007a1eb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xf09f,	// (0x0007a1eb) main_fs_bigclock_swipe_pane_t1

0x26e0,	// (0x0006d82c) call_type_pane_ParamLimits

0x93a7,	// (0x000744f3) main_btmg_pane

0xa275,	// (0x000753c1) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa275,	// (0x000753c1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdd4,	// (0x0007af20) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdd4,	// (0x0007af20) list_single_cale_mrui_row_pane_g

0xa2fb,	// (0x00075447) list_recal_vselct_arw_lo_pane

0xeef3,	// (0x0007a03f) list_recal_vselct_arw_up_pane

0xa303,	// (0x0007544f) list_recal_vselct_pane

0x88d5,	// (0x00073a21) btmg_button_pane

0x88df,	// (0x00073a2b) main_btmg_pane_g1

0x93a7,	// (0x000744f3) bg_button_pane_cp044

0xf0bc,	// (0x0007a208) btmg_button_pane_t1

0xcbc8,	// (0x00077d14) aid_listscroll_gen

0xb07c,	// (0x000761c8) main_cntbar_detail_pane

0xeb93,	// (0x00079cdf) list_cmail_folder_pane

0xc444,	// (0x00077590) sp_fs_scroll_pane_cp03_ParamLimits

0x88e9,	// (0x00073a35) list_single_fs_dyc_pane_cp01_ParamLimits

0x88e9,	// (0x00073a35) list_single_fs_dyc_pane_cp01

0xf0ca,	// (0x0007a216) aid_size_cmail_indent

0xb0b6,	// (0x00076202) list_single_dyc_row_pane_cp01

0x892d,	// (0x00073a79) cntbar_detail_list_pane_ParamLimits

0x892d,	// (0x00073a79) cntbar_detail_list_pane

0x8979,	// (0x00073ac5) main_cntbar_detail_cont_pane_ParamLimits

0x8979,	// (0x00073ac5) main_cntbar_detail_cont_pane

0xc444,	// (0x00077590) scroll_pane_cp032_ParamLimits

0xc444,	// (0x00077590) scroll_pane_cp032

0x898d,	// (0x00073ad9) cntbar_detail_list_event_pane_ParamLimits

0x898d,	// (0x00073ad9) cntbar_detail_list_event_pane

0x893d,	// (0x00073a89) cntbar_detail_list_shct_pane

0xb15c,	// (0x000762a8) aid_list_gen

0xa356,	// (0x000754a2) aid_scroll

0xa35f,	// (0x000754ab) aid_size_touch_scroll_bar

0x6e20,	// (0x00071f6c) aid_list_double

0x9f73,	// (0x000750bf) aid_list_single

0x9f73,	// (0x000750bf) aid_list_single_lg

0x899d,	// (0x00073ae9) aid_list_z_g_a_sm

0x89a5,	// (0x00073af1) aid_list_z_g_d

0x89ad,	// (0x00073af9) aid_txt_z_prm

0x89bb,	// (0x00073b07) aid_txt_z_prm_cp01

0x89c9,	// (0x00073b15) aid_txt_z_sec

0x89d7,	// (0x00073b23) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89d7,	// (0x00073b23) main_cntbar_detail_cont_pane_g1

0x89eb,	// (0x00073b37) main_cntbar_detail_cont_pane_g2_ParamLimits

0x89eb,	// (0x00073b37) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe48,	// (0x0007af94) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe48,	// (0x0007af94) main_cntbar_detail_cont_pane_g

0xa368,	// (0x000754b4) main_cntbar_detail_cont_pane_t1

0xa376,	// (0x000754c2) main_cntbar_detail_cont_pane_t2

0xa384,	// (0x000754d0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe4d,	// (0x0007af99) main_cntbar_detail_cont_pane_t

0x89fb,	// (0x00073b47) cell_cntbar_detail_list_shct_pane_ParamLimits

0x89fb,	// (0x00073b47) cell_cntbar_detail_list_shct_pane

0xa392,	// (0x000754de) cntbar_detail_list_shct_pane_g1

0xa39b,	// (0x000754e7) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe54,	// (0x0007afa0) cntbar_detail_list_shct_pane_g

0x8a0f,	// (0x00073b5b) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a0f,	// (0x00073b5b) cntbar_detail_list_event_pane_g1

0x8a1b,	// (0x00073b67) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a1b,	// (0x00073b67) cntbar_detail_list_event_pane_g2

0x0005,

0xfe59,	// (0x0007afa5) cntbar_detail_list_event_pane_g_ParamLimits

0xfe59,	// (0x0007afa5) cntbar_detail_list_event_pane_g

0x8a87,	// (0x00073bd3) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a87,	// (0x00073bd3) cntbar_detail_list_event_pane_t1

0x8a9c,	// (0x00073be8) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a9c,	// (0x00073be8) cntbar_detail_list_event_pane_t2

0x0002,

0xfe66,	// (0x0007afb2) cntbar_detail_list_event_pane_t_ParamLimits

0xfe66,	// (0x0007afb2) cntbar_detail_list_event_pane_t

0xcfe6,	// (0x00078132) cell_cntbar_detail_list_shct_pane_g1

0x2a35,	// (0x0006db81) navi_pane_mv_g3

0xb07c,	// (0x000761c8) main_cntbar_detail_pane_ParamLimits

0x93a7,	// (0x000744f3) main_notif_wgt_pane

0x98eb,	// (0x00074a37) aid_tch_main_mp4_pane_g4

0x9acd,	// (0x00074c19) popup_slider_window_cp02

0xa2f1,	// (0x0007543d) list_recal_day_event_pane

0x8901,	// (0x00073a4d) cntbar_detail_btn_pane_ParamLimits

0x8901,	// (0x00073a4d) cntbar_detail_btn_pane

0x8917,	// (0x00073a63) cntbar_detail_btn_pane_cp01_ParamLimits

0x8917,	// (0x00073a63) cntbar_detail_btn_pane_cp01

0x893d,	// (0x00073a89) cntbar_detail_list_shct_pane_ParamLimits

0x894d,	// (0x00073a99) cntbar_detail_pane_g1_ParamLimits

0x894d,	// (0x00073a99) cntbar_detail_pane_g1

0x895d,	// (0x00073aa9) cntbar_detail_pane_t1_ParamLimits

0x895d,	// (0x00073aa9) cntbar_detail_pane_t1

0x8a27,	// (0x00073b73) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a27,	// (0x00073b73) cntbar_detail_list_event_pane_g3

0x8a3f,	// (0x00073b8b) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a3f,	// (0x00073b8b) cntbar_detail_list_event_pane_g4

0x8a57,	// (0x00073ba3) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a57,	// (0x00073ba3) cntbar_detail_list_event_pane_g5

0x8a6f,	// (0x00073bbb) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a6f,	// (0x00073bbb) cntbar_detail_list_event_pane_g6

0x8ab1,	// (0x00073bfd) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ab1,	// (0x00073bfd) cntbar_detail_list_event_pane_t3

0x8ac3,	// (0x00073c0f) popup_notif_wgt_window_ParamLimits

0x8ac3,	// (0x00073c0f) popup_notif_wgt_window

0x8adc,	// (0x00073c28) popup_submenu_window_cp01_ParamLimits

0x8adc,	// (0x00073c28) popup_submenu_window_cp01

0xb7ab,	// (0x000768f7) bg_popup_window_pane_cp10

0xa3a4,	// (0x000754f0) listscroll_notif_wgt_pane

0xa3b5,	// (0x00075501) list_notif_wgt_window

0xa3be,	// (0x0007550a) scroll_pane_cp033

0x8aee,	// (0x00073c3a) list_notif_wgt_row_pane_ParamLimits

0x8aee,	// (0x00073c3a) list_notif_wgt_row_pane

0xa3c7,	// (0x00075513) aid_size_list_notif_wgt_del

0xa3d4,	// (0x00075520) list_notif_wgt_row_pane_g1

0xa3e0,	// (0x0007552c) list_notif_wgt_row_pane_g2

0xa3ec,	// (0x00075538) list_notif_wgt_row_pane_g3

0x0002,

0xfe6d,	// (0x0007afb9) list_notif_wgt_row_pane_g

0xa3f9,	// (0x00075545) list_notif_wgt_row_pane_t1

0xa40e,	// (0x0007555a) list_notif_wgt_row_pane_t2

0xa420,	// (0x0007556c) list_notif_wgt_row_pane_t3

0x0002,

0xfe74,	// (0x0007afc0) list_notif_wgt_row_pane_t

0xdc7f,	// (0x00078dcb) list_recal_day_event_pane_g1

0xa432,	// (0x0007557e) list_recal_day_event_pane_t1

0x93a7,	// (0x000744f3) bg_button_pane_cp045

0xa441,	// (0x0007558d) cntbar_detail_btn_pane_t1

0xcbdc,	// (0x00077d28) main_callh_pane_ParamLimits

0xcbdc,	// (0x00077d28) main_callh_pane

0x93a7,	// (0x000744f3) main_coverflow0_pane

0x93a7,	// (0x000744f3) main_wgtman_pane

0x7aeb,	// (0x00072c37) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7aeb,	// (0x00072c37) main_fs_bigclock_unlock_btn_pane

0x8340,	// (0x0007348c) bg_button_pane_cp16

0x8350,	// (0x0007349c) cell_tport_appsw_pane_g3

0x8afe,	// (0x00073c4a) cf0_flow_pane_ParamLimits

0x8afe,	// (0x00073c4a) cf0_flow_pane

0xa44f,	// (0x0007559b) listscroll_cf0_pane

0xa45a,	// (0x000755a6) main_cf0_pane_g1

0x8b13,	// (0x00073c5f) main_cf0_pane_t1_ParamLimits

0x8b13,	// (0x00073c5f) main_cf0_pane_t1

0x8b2a,	// (0x00073c76) main_cf0_pane_t2_ParamLimits

0x8b2a,	// (0x00073c76) main_cf0_pane_t2

0x0001,

0xfe80,	// (0x0007afcc) main_cf0_pane_t_ParamLimits

0xfe80,	// (0x0007afcc) main_cf0_pane_t

0xa46c,	// (0x000755b8) scroll_pane_cp11

0x8b41,	// (0x00073c8d) cf0_flow_pane_g1

0x8b49,	// (0x00073c95) cf0_flow_pane_g2

0x0001,

0xfe85,	// (0x0007afd1) cf0_flow_pane_g

0x8b51,	// (0x00073c9d) cf0_flow_pane_t1

0x93a7,	// (0x000744f3) main_call6_pane

0x93a7,	// (0x000744f3) main_calllock_pane

0x8b5f,	// (0x00073cab) call6_btn_grp_pane_ParamLimits

0x8b5f,	// (0x00073cab) call6_btn_grp_pane

0x8b79,	// (0x00073cc5) call6_pane_g1_ParamLimits

0x8b79,	// (0x00073cc5) call6_pane_g1

0x8b8e,	// (0x00073cda) popup_call6_1st_window_ParamLimits

0x8b8e,	// (0x00073cda) popup_call6_1st_window

0x8b9f,	// (0x00073ceb) popup_call6_2nd_window_ParamLimits

0x8b9f,	// (0x00073ceb) popup_call6_2nd_window

0x8bb0,	// (0x00073cfc) cell_call6_btn_pane_ParamLimits

0x8bb0,	// (0x00073cfc) cell_call6_btn_pane

0xb7ab,	// (0x000768f7) bg_popup_call2_in_pane_cp03

0xa477,	// (0x000755c3) popup_call6_1st_window_g1

0xa47f,	// (0x000755cb) popup_call6_1st_window_g2

0xa487,	// (0x000755d3) popup_call6_1st_window_g3

0x0002,

0xfe8a,	// (0x0007afd6) popup_call6_1st_window_g

0xa48f,	// (0x000755db) popup_call6_1st_window_t1

0xa49e,	// (0x000755ea) popup_call6_1st_window_t2

0xa4ae,	// (0x000755fa) popup_call6_1st_window_t3

0x0002,

0xfe91,	// (0x0007afdd) popup_call6_1st_window_t

0xb7ab,	// (0x000768f7) bg_popup_call2_in_pane_cp04

0xa477,	// (0x000755c3) popup_call6_2nd_window_g1

0xa47f,	// (0x000755cb) popup_call6_2nd_window_g2

0xa487,	// (0x000755d3) popup_call6_2nd_window_g3

0x0002,

0xfe8a,	// (0x0007afd6) popup_call6_2nd_window_g

0xa48f,	// (0x000755db) popup_call6_2nd_window_t1

0x93a7,	// (0x000744f3) bg_button_pane_cp15

0xa4be,	// (0x0007560a) cell_call6_btn_pane_g1

0xa4c7,	// (0x00075613) cell_call6_btn_pane_t1

0x8bc4,	// (0x00073d10) listscroll_wgtman_pane_ParamLimits

0x8bc4,	// (0x00073d10) listscroll_wgtman_pane

0x8be7,	// (0x00073d33) wgtman_btn_pane_ParamLimits

0x8be7,	// (0x00073d33) wgtman_btn_pane

0xb662,	// (0x000767ae) aid_scroll_copy1

0xa4d6,	// (0x00075622) list_wgtman_pane

0x8c2a,	// (0x00073d76) wgtman_btn_pane_g1_ParamLimits

0x8c2a,	// (0x00073d76) wgtman_btn_pane_g1

0x8c56,	// (0x00073da2) wgtman_btn_pane_t1_ParamLimits

0x8c56,	// (0x00073da2) wgtman_btn_pane_t1

0xa4e0,	// (0x0007562c) wgtman_btn_pane_t2_ParamLimits

0xa4e0,	// (0x0007562c) wgtman_btn_pane_t2

0x0001,

0xfe98,	// (0x0007afe4) wgtman_btn_pane_t_ParamLimits

0xfe98,	// (0x0007afe4) wgtman_btn_pane_t

0x8c93,	// (0x00073ddf) listrow_wgtman_pane_ParamLimits

0x8c93,	// (0x00073ddf) listrow_wgtman_pane

0x8ca6,	// (0x00073df2) listrow_wgtman_pane_g1

0x8cb3,	// (0x00073dff) listrow_wgtman_pane_g2

0x0001,

0xfe9d,	// (0x0007afe9) listrow_wgtman_pane_g

0x8cd1,	// (0x00073e1d) listrow_wgtman_pane_t1

0x8ce9,	// (0x00073e35) listrow_wgtman_pane_t2

0x0001,

0xfea2,	// (0x0007afee) listrow_wgtman_pane_t

0x8d0f,	// (0x00073e5b) wait_bar_pane_cp09

0xa4f7,	// (0x00075643) main_calllock_btn_pane

0xa501,	// (0x0007564d) main_calllock_pane_g1

0x93a7,	// (0x000744f3) bg_button_pane_cp17

0xa50c,	// (0x00075658) main_calllock_btn_pane_g1

0xa515,	// (0x00075661) main_calllock_btn_pane_t1

0x93a7,	// (0x000744f3) main_dialer3_pane

0x93a7,	// (0x000744f3) main_fmrd2_pane

0xcfe6,	// (0x00078132) main_fs_bigclock_unlock_btn_pane_g1

0xa52c,	// (0x00075678) main_fs_bigclock_unlock_btn_pane_t1

0x8d21,	// (0x00073e6d) area_fmrd2_info_pane_ParamLimits

0x8d21,	// (0x00073e6d) area_fmrd2_info_pane

0x8d32,	// (0x00073e7e) area_fmrd2_visual_pane_ParamLimits

0x8d32,	// (0x00073e7e) area_fmrd2_visual_pane

0x8d40,	// (0x00073e8c) fmrd2_indi_pane_ParamLimits

0x8d40,	// (0x00073e8c) fmrd2_indi_pane

0x8d4d,	// (0x00073e99) area_fmrd2_visual_pane_g1

0x8d55,	// (0x00073ea1) area_fmrd2_visual_pane_t1

0x8d65,	// (0x00073eb1) area_fmrd2_visual_pane_t2

0x8d75,	// (0x00073ec1) area_fmrd2_visual_pane_t3

0x0002,

0xfeac,	// (0x0007aff8) area_fmrd2_visual_pane_t

0x8d85,	// (0x00073ed1) area_fmrd2_info_pane_g1

0x8d8d,	// (0x00073ed9) area_fmrd2_info_pane_t1

0x8d9d,	// (0x00073ee9) area_fmrd2_info_pane_t2

0x8dad,	// (0x00073ef9) area_fmrd2_info_pane_t3

0x8dbd,	// (0x00073f09) area_fmrd2_info_pane_t4

0x0003,

0xfeb3,	// (0x0007afff) area_fmrd2_info_pane_t

0x8dcb,	// (0x00073f17) fmrd2_indi_pane_t1

0x8ddb,	// (0x00073f27) fmrd2_indi_pane_t2

0x8deb,	// (0x00073f37) fmrd2_indi_pane_t3

0x0002,

0xfebc,	// (0x0007b008) fmrd2_indi_pane_t

0xe806,	// (0x00079952) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe806,	// (0x00079952) list_single_fs_bigclock_indicator_pane_g5

0xe8ad,	// (0x000799f9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe8ad,	// (0x000799f9) list_single_fs_bigclock_indicator_pane_t5

0x8534,	// (0x00073680) aid_cell_bcale_month_pane_ParamLimits

0x8534,	// (0x00073680) aid_cell_bcale_month_pane

0x8552,	// (0x0007369e) bcale_month_pane_ParamLimits

0x8552,	// (0x0007369e) bcale_month_pane

0x8576,	// (0x000736c2) bcale_preview_pane_ParamLimits

0x8576,	// (0x000736c2) bcale_preview_pane

0xf054,	// (0x0007a1a0) list_single_fs_bigclock_pane_t1_ParamLimits

0xf073,	// (0x0007a1bf) list_single_fs_bigclock_pane_t2_ParamLimits

0xf073,	// (0x0007a1bf) list_single_fs_bigclock_pane_t2

0x0001,

0x00e4,	// (0x0006b230) list_single_fs_bigclock_pane_t_ParamLimits

0x00e4,	// (0x0006b230) list_single_fs_bigclock_pane_t

0xa524,	// (0x00075670) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfea7,	// (0x0007aff3) main_fs_bigclock_unlock_btn_pane_g

0x8dfb,	// (0x00073f47) aid_dia3_key_size_ParamLimits

0x8dfb,	// (0x00073f47) aid_dia3_key_size

0x8e0a,	// (0x00073f56) aid_dia3_listrow_size_ParamLimits

0x8e0a,	// (0x00073f56) aid_dia3_listrow_size

0x8e1f,	// (0x00073f6b) dia3_keypad_fun_pane_ParamLimits

0x8e1f,	// (0x00073f6b) dia3_keypad_fun_pane

0x8e3b,	// (0x00073f87) dia3_keypad_num_pane_ParamLimits

0x8e3b,	// (0x00073f87) dia3_keypad_num_pane

0x8e56,	// (0x00073fa2) dia3_listscroll_pane_ParamLimits

0x8e56,	// (0x00073fa2) dia3_listscroll_pane

0x8e69,	// (0x00073fb5) dia3_numentry_pane_ParamLimits

0x8e69,	// (0x00073fb5) dia3_numentry_pane

0xa53a,	// (0x00075686) dia3_list_pane

0xa545,	// (0x00075691) scroll_pane_cp12

0x93a7,	// (0x000744f3) bg_dia3_numentry_pane

0x8e7d,	// (0x00073fc9) dia3_numentry_pane_t1

0x8e8c,	// (0x00073fd8) cell_dia3_key_num_pane

0x8e94,	// (0x00073fe0) cell_dia3_key0_fun_pane_ParamLimits

0x8e94,	// (0x00073fe0) cell_dia3_key0_fun_pane

0x8ea8,	// (0x00073ff4) cell_dia3_key1_fun_pane_ParamLimits

0x8ea8,	// (0x00073ff4) cell_dia3_key1_fun_pane

0x8ec0,	// (0x0007400c) dia3_listrow_pane

0xe515,	// (0x00079661) bg_dia3_numentry_pane_g1

0x93a7,	// (0x000744f3) bg_button_pane_cp21

0xa550,	// (0x0007569c) cell_dia3_key_num_pane_t1

0xa55e,	// (0x000756aa) cell_dia3_key_num_pane_t2

0xa56d,	// (0x000756b9) cell_dia3_key_num_pane_t3

0xa57c,	// (0x000756c8) cell_dia3_key_num_pane_t4

0x0003,

0xfec3,	// (0x0007b00f) cell_dia3_key_num_pane_t

0x93a7,	// (0x000744f3) bg_button_pane_cp19

0x8ed2,	// (0x0007401e) cell_dia3_key0_fun_pane_g1

0x93a7,	// (0x000744f3) bg_button_pane_cp20

0x8eda,	// (0x00074026) cell_dia3_key1_fun_pane_g1

0x8ee2,	// (0x0007402e) area_left_week_number_pane

0x8eee,	// (0x0007403a) area_top_day_name_pane

0x8f01,	// (0x0007404d) frame_month_view_pane

0xa58b,	// (0x000756d7) grid_month_view_pane

0x8f14,	// (0x00074060) cell_top_day_name_pane_ParamLimits

0x8f14,	// (0x00074060) cell_top_day_name_pane

0x8f41,	// (0x0007408d) cell_area_left_week_number_pane_ParamLimits

0x8f41,	// (0x0007408d) cell_area_left_week_number_pane

0x8f55,	// (0x000740a1) cell_month_view_pane_ParamLimits

0x8f55,	// (0x000740a1) cell_month_view_pane

0xa599,	// (0x000756e5) frm_month_g1

0x8f82,	// (0x000740ce) frm_month_g2

0x8f95,	// (0x000740e1) frm_month_g3

0x8fa8,	// (0x000740f4) frm_month_g4

0x8fbb,	// (0x00074107) frm_month_g5

0x8fce,	// (0x0007411a) frm_month_g6

0x8fe1,	// (0x0007412d) frm_month_g7

0xa5a6,	// (0x000756f2) frm_month_g8

0x8ff4,	// (0x00074140) frm_month_g9

0x9004,	// (0x00074150) frm_month_g10

0x9014,	// (0x00074160) frm_month_g11

0x9024,	// (0x00074170) frm_month_g12

0x9036,	// (0x00074182) frm_month_g13

0x9048,	// (0x00074194) frm_month_g14

0x905c,	// (0x000741a8) frm_month_g15

0x9070,	// (0x000741bc) frm_month_g16

0x000f,

0xfecc,	// (0x0007b018) frm_month_g

0xa5b3,	// (0x000756ff) cell_top_day_name_pane_t1

0x9084,	// (0x000741d0) cell_area_left_week_number_pane_g1

0x9090,	// (0x000741dc) cell_area_left_week_number_pane_t1

0xd246,	// (0x00078392) cell_month_view_pane_g1

0x90a3,	// (0x000741ef) cell_month_view_pane_t1

0x93a7,	// (0x000744f3) main_fps_pane

0xea9d,	// (0x00079be9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xea9d,	// (0x00079be9) cmail_ddmenu_btn02_pane_cp1

0xeab9,	// (0x00079c05) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xeab9,	// (0x00079c05) cmail_ddmenu_btn02_pane_cp2

0x87a1,	// (0x000738ed) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87a1,	// (0x000738ed) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe05,	// (0x0007af51) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe05,	// (0x0007af51) cmail_ddmenu_btn02_pane_g

0x87bf,	// (0x0007390b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87bf,	// (0x0007390b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe0a,	// (0x0007af56) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe0a,	// (0x0007af56) cmail_ddmenu_btn02_pane_t

0x90b6,	// (0x00074202) fps_text_pane_ParamLimits

0x90b6,	// (0x00074202) fps_text_pane

0x90cd,	// (0x00074219) main_fps_pane_g1_ParamLimits

0x90cd,	// (0x00074219) main_fps_pane_g1

0x90e7,	// (0x00074233) wait_bar_pane_cp010_ParamLimits

0x90e7,	// (0x00074233) wait_bar_pane_cp010

0x90f8,	// (0x00074244) fps_text_pane_t1_ParamLimits

0x90f8,	// (0x00074244) fps_text_pane_t1

0xe152,	// (0x0007929e) cam4_image_uncrop_pane_g1

0xe15b,	// (0x000792a7) cam4_image_uncrop_pane_g2

0x5c9d,	// (0x00070de9) cam4_image_uncrop_pane_g3

0x5ca6,	// (0x00070df2) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0007aa40) cam4_image_uncrop_pane_g

0x8ec0,	// (0x0007400c) dia3_listrow_pane_ParamLimits

0x93a7,	// (0x000744f3) main_phob2_pane

0x8311,	// (0x0007345d) cell_tport_appsw_pane_cp02_ParamLimits

0x8311,	// (0x0007345d) cell_tport_appsw_pane_cp02

0x8325,	// (0x00073471) cell_tport_appsw_pane_cp03_ParamLimits

0x8325,	// (0x00073471) cell_tport_appsw_pane_cp03

0x93a7,	// (0x000744f3) phob2_contact_card_pane

0x93a7,	// (0x000744f3) phob2_listscroll_pane

0xa5c6,	// (0x00075712) phob2_list_pane

0xa5ce,	// (0x0007571a) scroll_pane_cp034

0x9110,	// (0x0007425c) phob2_cc_data_pane_ParamLimits

0x9110,	// (0x0007425c) phob2_cc_data_pane

0x912f,	// (0x0007427b) phob2_cc_listscroll_pane_ParamLimits

0x912f,	// (0x0007427b) phob2_cc_listscroll_pane

0x914d,	// (0x00074299) list_double_large_graphic_phob2_pane_ParamLimits

0x914d,	// (0x00074299) list_double_large_graphic_phob2_pane

0x9160,	// (0x000742ac) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9160,	// (0x000742ac) list_double_large_graphic_phob2_pane_g1

0x9176,	// (0x000742c2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9176,	// (0x000742c2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfeed,	// (0x0007b039) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfeed,	// (0x0007b039) list_double_large_graphic_phob2_pane_g

0x9182,	// (0x000742ce) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9182,	// (0x000742ce) list_double_large_graphic_phob2_pane_t1

0x9198,	// (0x000742e4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9198,	// (0x000742e4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfef2,	// (0x0007b03e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfef2,	// (0x0007b03e) list_double_large_graphic_phob2_pane_t

0x93a7,	// (0x000744f3) list_highlight_pane_cp024

0xa5d6,	// (0x00075722) phob2_cc_button_pane

0x91ad,	// (0x000742f9) phob2_cc_data_pane_g1_ParamLimits

0x91ad,	// (0x000742f9) phob2_cc_data_pane_g1

0x91c2,	// (0x0007430e) phob2_cc_data_pane_g2_ParamLimits

0x91c2,	// (0x0007430e) phob2_cc_data_pane_g2

0x0001,

0xfef7,	// (0x0007b043) phob2_cc_data_pane_g_ParamLimits

0xfef7,	// (0x0007b043) phob2_cc_data_pane_g

0x91d4,	// (0x00074320) phob2_cc_data_pane_t1_ParamLimits

0x91d4,	// (0x00074320) phob2_cc_data_pane_t1

0x91ec,	// (0x00074338) phob2_cc_data_pane_t2_ParamLimits

0x91ec,	// (0x00074338) phob2_cc_data_pane_t2

0x9204,	// (0x00074350) phob2_cc_data_pane_t3_ParamLimits

0x9204,	// (0x00074350) phob2_cc_data_pane_t3

0x0002,

0xfefc,	// (0x0007b048) phob2_cc_data_pane_t_ParamLimits

0xfefc,	// (0x0007b048) phob2_cc_data_pane_t

0xa5de,	// (0x0007572a) phob2_cc_list_pane_ParamLimits

0xa5de,	// (0x0007572a) phob2_cc_list_pane

0xdd18,	// (0x00078e64) scroll_pane_cp035_ParamLimits

0xdd18,	// (0x00078e64) scroll_pane_cp035

0xb07c,	// (0x000761c8) bg_button_pane_cp033

0xa5ea,	// (0x00075736) phob2_cc_button_pane_g1

0xa5f6,	// (0x00075742) phob2_cc_button_pane_t1

0xa60b,	// (0x00075757) phob2_cc_button_pane_t2

0x0001,

0xff03,	// (0x0007b04f) phob2_cc_button_pane_t

0x921c,	// (0x00074368) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x921c,	// (0x00074368) list_double_large_graphic_phob2_cc_pane

0x922f,	// (0x0007437b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x922f,	// (0x0007437b) list_double_large_graphic_phob2_cc_pane_g1

0x923b,	// (0x00074387) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x923b,	// (0x00074387) list_double_large_graphic_phob2_cc_pane_g2

0x9247,	// (0x00074393) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9247,	// (0x00074393) list_double_large_graphic_phob2_cc_pane_g3

0x9253,	// (0x0007439f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9253,	// (0x0007439f) list_double_large_graphic_phob2_cc_pane_g4

0x925f,	// (0x000743ab) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x925f,	// (0x000743ab) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff08,	// (0x0007b054) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff08,	// (0x0007b054) list_double_large_graphic_phob2_cc_pane_g

0x926b,	// (0x000743b7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x926b,	// (0x000743b7) list_double_large_graphic_phob2_cc_pane_t1

0x9294,	// (0x000743e0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9294,	// (0x000743e0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff13,	// (0x0007b05f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff13,	// (0x0007b05f) list_double_large_graphic_phob2_cc_pane_t

0xa61d,	// (0x00075769) list_highlight_pane_cp025_ParamLimits

0xa61d,	// (0x00075769) list_highlight_pane_cp025

0xb07c,	// (0x000761c8) bg_button_pane_cp033_ParamLimits

0xa5ea,	// (0x00075736) phob2_cc_button_pane_g1_ParamLimits

0xa5f6,	// (0x00075742) phob2_cc_button_pane_t1_ParamLimits

0xa60b,	// (0x00075757) phob2_cc_button_pane_t2_ParamLimits

0xff03,	// (0x0007b04f) phob2_cc_button_pane_t_ParamLimits

0x04e1,	// (0x0006b62d) popup_wgtman_window

0xdb5b,	// (0x00078ca7) scroll_pane_cp038

0x8c0c,	// (0x00073d58) wgtman_btn_pane_cp_01_ParamLimits

0x8c0c,	// (0x00073d58) wgtman_btn_pane_cp_01

0xa62b,	// (0x00075777) wgtman_content_pane

0xa634,	// (0x00075780) wgtman_heading_pane

0x93a7,	// (0x000744f3) bg_heading_pane_cp02

0xa63d,	// (0x00075789) wgtman_heading_pane_g1

0xa645,	// (0x00075791) wgtman_heading_pane_t1

0xa653,	// (0x0007579f) scroll_pane_cp036

0xa65b,	// (0x000757a7) wgtman_list_pane

0xa663,	// (0x000757af) wgtman_list_pane_t1_ParamLimits

0xa663,	// (0x000757af) wgtman_list_pane_t1

0x9b27,	// (0x00074c73) cam4_grid_pane

0x691c,	// (0x00071a68) bg_button_pane_cp015_ParamLimits

0x6930,	// (0x00071a7c) bg_button_pane_cp016_ParamLimits

0x6943,	// (0x00071a8f) bg_button_pane_cp017_ParamLimits

0x699b,	// (0x00071ae7) popup_vitu2_query_window_g3_ParamLimits

0x699b,	// (0x00071ae7) popup_vitu2_query_window_g3

0x6a58,	// (0x00071ba4) popup_vitu2_query_window_t6_ParamLimits

0x6a58,	// (0x00071ba4) popup_vitu2_query_window_t6

0x6a83,	// (0x00071bcf) popup_vitu2_query_window_t7_ParamLimits

0x6a83,	// (0x00071bcf) popup_vitu2_query_window_t7

0xe152,	// (0x0007929e) cam4_grid_pane_g1

0xe15b,	// (0x000792a7) cam4_grid_pane_g2

0xa67f,	// (0x000757cb) cam4_grid_pane_g3

0xa688,	// (0x000757d4) cam4_grid_pane_g4

0x0003,

0xff18,	// (0x0007b064) cam4_grid_pane_g

0x14ce,	// (0x0006c61a) aid_placing_vt_slider_lsc_ParamLimits

0x17cb,	// (0x0006c917) vidtel_button_pane_ParamLimits

0x17cb,	// (0x0006c917) vidtel_button_pane

0xa693,	// (0x000757df) bg_button_pane_cp034

0x92bd,	// (0x00074409) vidtel_button_pane_g1

0xa69d,	// (0x000757e9) vidtel_button_pane_t1

0xdc5d,	// (0x00078da9) aid_size_vtel_slider_touch

0xdd18,	// (0x00078e64) scroll_pane_cp039

0xe553,	// (0x0007969f) ncim_query_button_pane_cp01_ParamLimits

0xe572,	// (0x000796be) ncimui_query_pane_g1_ParamLimits

0xb07c,	// (0x000761c8) input_focus_pane_cp012_ParamLimits

0xe597,	// (0x000796e3) ncim_query_entry_pane_t1_ParamLimits

0xdd18,	// (0x00078e64) scroll_pane_cp039_ParamLimits

0x29a9,	// (0x0006daf5) navi_pane_bcale_mc_g1

0x29b1,	// (0x0006dafd) navi_pane_bcale_mc_t1

0xeb10,	// (0x00079c5c) main_sp_fs_email_pane_g1

0xeb1c,	// (0x00079c68) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0007ae37) main_sp_fs_email_pane_g

0xed64,	// (0x00079eb0) list_single_cale_mrui_row_pane_g3_ParamLimits

0xed64,	// (0x00079eb0) list_single_cale_mrui_row_pane_g3

0x87e7,	// (0x00073933) list_single_recal_day_pane_g5_event_pane

0xb08a,	// (0x000761d6) list_single_recal_day_pane_g7

0xa6ab,	// (0x000757f7) list_recal_day_event_pane_cp01

0xa6b4,	// (0x00075800) list_recal_vselct_arw_lo_pane_cp01

0xa6bc,	// (0x00075808) list_recal_vselct_arw_up_pane_cp01

0xa6c4,	// (0x00075810) list_recal_vselct_pane_cp01

0xdc7f,	// (0x00078dcb) list_recal_day_event_pane_cp01_g1

0xb0bf,	// (0x0007620b) list_recal_day_event_pane_cp01_t1

0xb092,	// (0x000761de) list_single_recal_day_pane_t1_ParamLimits

0xb0a4,	// (0x000761f0) list_single_recal_day_pane_t2_ParamLimits

0xfe1a,	// (0x0007af66) list_single_recal_day_pane_t_ParamLimits

0xabaf,	// (0x00075cfb) bg_notes_pane_ParamLimits

0xac71,	// (0x00075dbd) list_notes_pane_ParamLimits

0x0815,	// (0x0006b961) scroll_pane_cp06_ParamLimits

0xac93,	// (0x00075ddf) main_notes_pane_ParamLimits

0x93a7,	// (0x000744f3) main_welc_pane

0x92c5,	// (0x00074411) main_welc_body_pane_ParamLimits

0x92c5,	// (0x00074411) main_welc_body_pane

0x92e2,	// (0x0007442e) main_welc_opti_pane_ParamLimits

0x92e2,	// (0x0007442e) main_welc_opti_pane

0x932b,	// (0x00074477) main_welc_pane_t1_ParamLimits

0x932b,	// (0x00074477) main_welc_pane_t1

0x934d,	// (0x00074499) main_welc_body_row_pane_ParamLimits

0x934d,	// (0x00074499) main_welc_body_row_pane

0xeb02,	// (0x00079c4e) main_welc_opti_row_pane_ParamLimits

0xeb02,	// (0x00079c4e) main_welc_opti_row_pane

0xa6ce,	// (0x0007581a) main_welc_opti_row_pane_g1

0xa6d6,	// (0x00075822) main_welc_opti_row_pane_t1

0xa6e6,	// (0x00075832) main_welc_body_row_pane_t1

0xa3ad,	// (0x000754f9) popup_notif_wgt_heading_pane

0xa3c7,	// (0x00075513) aid_size_list_notif_wgt_del_ParamLimits

0xa3d4,	// (0x00075520) list_notif_wgt_row_pane_g1_ParamLimits

0xa3e0,	// (0x0007552c) list_notif_wgt_row_pane_g2_ParamLimits

0xa3ec,	// (0x00075538) list_notif_wgt_row_pane_g3_ParamLimits

0xfe6d,	// (0x0007afb9) list_notif_wgt_row_pane_g_ParamLimits

0xa3f9,	// (0x00075545) list_notif_wgt_row_pane_t1_ParamLimits

0xa40e,	// (0x0007555a) list_notif_wgt_row_pane_t2_ParamLimits

0xa420,	// (0x0007556c) list_notif_wgt_row_pane_t3_ParamLimits

0xfe74,	// (0x0007afc0) list_notif_wgt_row_pane_t_ParamLimits

0x8ca6,	// (0x00073df2) listrow_wgtman_pane_g1_ParamLimits

0x8cb3,	// (0x00073dff) listrow_wgtman_pane_g2_ParamLimits

0xfe9d,	// (0x0007afe9) listrow_wgtman_pane_g_ParamLimits

0x8cd1,	// (0x00073e1d) listrow_wgtman_pane_t1_ParamLimits

0x8ce9,	// (0x00073e35) listrow_wgtman_pane_t2_ParamLimits

0xfea2,	// (0x0007afee) listrow_wgtman_pane_t_ParamLimits

0x8d0f,	// (0x00073e5b) wait_bar_pane_cp09_ParamLimits

0x93a7,	// (0x000744f3) bg_popup_heading_pane_cp02

0xa6f5,	// (0x00075841) popup_notif_wgt_heading_pane_g1

0xa6fd,	// (0x00075849) popup_notif_wgt_heading_pane_t1

0x93a7,	// (0x000744f3) main_vids_pane

0x93a7,	// (0x000744f3) vids_listscroll_pane

0x9363,	// (0x000744af) scroll_pane_cp040

0x93a7,	// (0x000744f3) vids_list_pane

0x936e,	// (0x000744ba) vids_list_double_pane_ParamLimits

0x936e,	// (0x000744ba) vids_list_double_pane

0x937f,	// (0x000744cb) vids_list_double_pane_g1

0x9388,	// (0x000744d4) vids_list_double_pane_t1

0x9397,	// (0x000744e3) vids_list_double_pane_t2

0x0001,

0xff26,	// (0x0007b072) vids_list_double_pane_t

0x941f,	// (0x0007456b) main_ncimui_pane_ParamLimits

0x7673,	// (0x000727bf) main_ncimui_pane_g1_ParamLimits

0x767f,	// (0x000727cb) main_ncimui_pane_g2_ParamLimits

0x767f,	// (0x000727cb) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0007ad3c) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0007ad3c) main_ncimui_pane_g

0x9301,	// (0x0007444d) main_welc_pane_g1_ParamLimits

0x9301,	// (0x0007444d) main_welc_pane_g1

0x9316,	// (0x00074462) main_welc_pane_g2_ParamLimits

0x9316,	// (0x00074462) main_welc_pane_g2

0x0001,

0xff21,	// (0x0007b06d) main_welc_pane_g_ParamLimits

0xff21,	// (0x0007b06d) main_welc_pane_g

0xabaf,	// (0x00075cfb) listscroll_mce_pane_ParamLimits

0x2a87,	// (0x0006dbd3) wait_bar_pane_cp10

0xcbd0,	// (0x00077d1c) main_cale_day_pane_ParamLimits

0xcbd0,	// (0x00077d1c) main_cale_week_pane_ParamLimits

0xabaf,	// (0x00075cfb) main_messa_pane_ParamLimits

0x4fa8,	// (0x000700f4) main_clock2_btn_pane_ParamLimits

0x4fa8,	// (0x000700f4) main_clock2_btn_pane

0xd3ce,	// (0x0007851a) main_clock2_btn_pane_cp01_ParamLimits

0xd3ce,	// (0x0007851a) main_clock2_btn_pane_cp01

0xed35,	// (0x00079e81) list_cale_mrui_pane_ParamLimits

0xa464,	// (0x000755b0) main_cf0_pane_g2

0x0001,

0xfe7b,	// (0x0007afc7) main_cf0_pane_g

0x8ee2,	// (0x0007402e) area_left_week_number_pane_ParamLimits

0x8eee,	// (0x0007403a) area_top_day_name_pane_ParamLimits

0x8f01,	// (0x0007404d) frame_month_view_pane_ParamLimits

0xa58b,	// (0x000756d7) grid_month_view_pane_ParamLimits

0xa599,	// (0x000756e5) frm_month_g1_ParamLimits

0x8f82,	// (0x000740ce) frm_month_g2_ParamLimits

0x8f95,	// (0x000740e1) frm_month_g3_ParamLimits

0x8fa8,	// (0x000740f4) frm_month_g4_ParamLimits

0x8fbb,	// (0x00074107) frm_month_g5_ParamLimits

0x8fce,	// (0x0007411a) frm_month_g6_ParamLimits

0x8fe1,	// (0x0007412d) frm_month_g7_ParamLimits

0xa5a6,	// (0x000756f2) frm_month_g8_ParamLimits

0x8ff4,	// (0x00074140) frm_month_g9_ParamLimits

0x9004,	// (0x00074150) frm_month_g10_ParamLimits

0x9014,	// (0x00074160) frm_month_g11_ParamLimits

0x9024,	// (0x00074170) frm_month_g12_ParamLimits

0x9036,	// (0x00074182) frm_month_g13_ParamLimits

0x9048,	// (0x00074194) frm_month_g14_ParamLimits

0x905c,	// (0x000741a8) frm_month_g15_ParamLimits

0x9070,	// (0x000741bc) frm_month_g16_ParamLimits

0xfecc,	// (0x0007b018) frm_month_g_ParamLimits

0xa5b3,	// (0x000756ff) cell_top_day_name_pane_t1_ParamLimits

0x9084,	// (0x000741d0) cell_area_left_week_number_pane_g1_ParamLimits

0x9090,	// (0x000741dc) cell_area_left_week_number_pane_t1_ParamLimits

0xd246,	// (0x00078392) cell_month_view_pane_g1_ParamLimits

0x90a3,	// (0x000741ef) cell_month_view_pane_t1_ParamLimits

0xaba7,	// (0x00075cf3) main_clock2_btn_pane_g1

0xa70b,	// (0x00075857) main_clock2_btn_pane_t1

0xb07c,	// (0x000761c8) listscroll_cmail_pane_ParamLimits

0xeb10,	// (0x00079c5c) main_sp_fs_email_pane_g1_ParamLimits

0xeb1c,	// (0x00079c68) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0007ae37) main_sp_fs_email_pane_g_ParamLimits

0xeed4,	// (0x0007a020) list_recal_day_pane_ParamLimits

0xeee5,	// (0x0007a031) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
